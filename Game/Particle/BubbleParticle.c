

unsigned int __fastcall BubbleParticle::init(BubbleParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  unsigned int v6; // r6@1
  Random *v8; // r0@1
  Random *v9; // r8@1
  int v23; // r1@4
  int v24; // r0@6
  int v25; // r3@6
  int v26; // r4@6
  int v27; // r5@6
  int v28; // r6@6
  int v29; // r7@6
  void *v30; // r0@6
  unsigned int result; // r0@7
  unsigned int *v32; // r2@8
  signed int v33; // r1@10
  int v34; // [sp+0h] [bp-70h]@6
  int v35; // [sp+4h] [bp-6Ch]@6
  int v36; // [sp+8h] [bp-68h]@6
  int v37; // [sp+Ch] [bp-64h]@6
  int v38; // [sp+10h] [bp-60h]@6
  int v39; // [sp+14h] [bp-5Ch]@6
  int v40; // [sp+18h] [bp-58h]@6
  int v41; // [sp+1Ch] [bp-54h]@6

  _R10 = this;
  v6 = a4;
  _R7 = a3;
  v8 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  v9 = v8;
  __asm { VLDR            S18, [R10,#0x3C] }
  _R0 = Random::_genRandInt32(v8);
  __asm
  {
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VLDR            S2, =0.6
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VMUL.F32        S0, S0, S2
    VLDR            S20, =0.2
    VADD.F32        S0, S0, S20
    VMUL.F32        S0, S0, S18
    VSTR            S0, [R10,#0x3C]
    VLDR            S18, [R7]
  }
  _R0 = Random::_genRandInt32(v9);
    VLDR            S22, =0.04
    VMUL.F32        S2, S18, S20
    VLDR            S18, =-0.02
    VADD.F32        S2, S2, S18
    VMUL.F32        S0, S0, S22
    VADD.F32        S0, S2, S0
    VSTR            S0, [R10,#0x90]
    VLDR            S24, [R7,#4]
    VMUL.F32        S2, S24, S20
    VSTR            S0, [R10,#0x94]
    VLDR            S24, [R7,#8]
    VSTR            S0, [R10,#0x98]
  if ( _ZF )
    _R0 = &Color::WHITE;
    __asm
    {
      VLDR            S6, [R0]
      VLDR            S4, [R0,#4]
      VLDR            S2, [R0,#8]
      VLDR            S0, [R0,#0xC]
    }
  else
    _R1 = v6 >> 24;
    _R0 = (unsigned __int8)v6;
      VMOV            S0, R1
      VLDR            S8, =0.0039216
      VMOV            S2, R0
      VCVT.F32.S32    S0, S0
    _R1 = (unsigned __int16)v6 >> 8;
      VCVT.F32.S32    S2, S2
      VMOV            S4, R1
      VCVT.F32.S32    S4, S4
    _R0 = (v6 >> 16) & 0xFF;
      VMOV            S6, R0
      VMUL.F32        S0, S0, S8
      VCVT.F32.S32    S6, S6
      VMUL.F32        S2, S2, S8
      VMUL.F32        S4, S4, S8
      VMUL.F32        S6, S6, S8
  v23 = 32;
    VSTR            S6, [R10,#0x44]
    VSTR            S4, [R10,#0x48]
    VSTR            S2, [R10,#0x4C]
    VSTR            S0, [R10,#0x50]
  if ( !_ZF )
    v23 = 34;
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v34, v23);
  v24 = (int)_R10 + 12;
  v25 = v35;
  v26 = v36;
  v27 = v37;
  v28 = v38;
  v29 = v39;
  *(_DWORD *)v24 = v34;
  *(_DWORD *)(v24 + 4) = v25;
  *(_DWORD *)(v24 + 8) = v26;
  *(_DWORD *)(v24 + 12) = v27;
  *(_DWORD *)(v24 + 16) = v28;
  *(_DWORD *)(v24 + 20) = v29;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)_R10 + 9,
    &v40);
  *((_DWORD *)_R10 + 10) = v41;
  v30 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  result = Random::_genRandInt32(v9);
    VLDR            D1, =0.8
    VCVT.F64.F32    D0, S0
    VMUL.F64        D0, D0, D1
    VLDR            D1, =0.2
    VADD.F64        D0, D0, D1
    VMOV.F64        D1, #8.0
    VDIV.F64        D0, D1, D0
    VCVTR.S32.F64   S0, D0
    VSTR            S0, [R10,#8]
  return result;
}


signed int __fastcall BubbleParticle::normalTick(BubbleParticle *this)
{
  char *v6; // r5@1
  BlockSource *v7; // r6@1
  int *v8; // r0@1
  signed int result; // r0@1
  int v10; // [sp+0h] [bp-20h]@1

  _R4 = this;
  __asm { VLDR            S0, =0.002 }
  v6 = (char *)this + 156;
  *((_DWORD *)this + 42) = *((_DWORD *)this + 39);
  *((_DWORD *)this + 43) = *((_DWORD *)this + 40);
  *((_DWORD *)this + 44) = *((_DWORD *)this + 41);
  __asm
  {
    VLDR            S2, [R4,#0x94]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0x94]
  }
  Particle::move(this, (BubbleParticle *)((char *)this + 144));
    VLDR            S0, =0.85
    VLDR            S2, [R4,#0x90]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R4,#0x90]
    VSTR            S2, [R4,#0x94]
    VLDR            S2, [R4,#0x98]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x98]
  v7 = (BlockSource *)*((_DWORD *)_R4 + 35);
  BlockPos::BlockPos((int)&v10, (int)v6);
  v8 = (int *)BlockSource::getMaterial(v7, (const BlockPos *)&v10);
  result = Material::isType(v8, 5);
  if ( !result )
    result = 0;
    *((_DWORD *)_R4 + 2) = 0;
  return result;
}


void __fastcall BubbleParticle::~BubbleParticle(BubbleParticle *this)
{
  BubbleParticle *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26D9AEC;
  v2 = *((_DWORD *)this + 9);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  operator delete((void *)v1);
}


void __fastcall BubbleParticle::~BubbleParticle(BubbleParticle *this)
{
  BubbleParticle::~BubbleParticle(this);
}
