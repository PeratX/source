

int __fastcall SpellParticle::SpellParticle(int a1, int a2, int a3)
{
  int v3; // r6@1
  BlockSource *v4; // r5@1
  int v5; // r4@1
  signed int v6; // r0@3
  Level *v7; // r0@6
  char *v8; // r0@6

  v3 = a3;
  v4 = (BlockSource *)a2;
  v5 = a1;
  Particle::Particle(a1, a2, a3);
  *(_DWORD *)v5 = &off_26D9D2C;
  *(_DWORD *)(v5 + 212) = 128;
  if ( v3 == 37 )
  {
    *(_DWORD *)(v5 + 212) = 144;
    v7 = (Level *)BlockSource::getLevel(v4);
    v8 = Level::getRandom(v7);
    _R0 = Random::_genRandInt32((Random *)v8);
    __asm
    {
      VMOV            S0, R0
      VLDR            D1, =2.32830644e-10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D1
      VMOV.F32        S2, #0.5
      VCVT.F32.F64    S0, D0
      VMUL.F32        S0, S0, S2
      VLDR            S2, =0.35
      VADD.F32        S0, S0, S2
      VSTR            S0, [R4,#0x44]
    }
    *(_DWORD *)(v5 + 72) = 0;
    __asm { VSTR            S0, [R4,#0x4C] }
    *(_DWORD *)(v5 + 80) = 1065353216;
  }
  else
    if ( v3 == 28 )
      v6 = 144;
    else
      v6 = 128;
    *(_DWORD *)(v5 + 212) = v6;
  *(_BYTE *)(v5 + 180) = 0;
  *(_DWORD *)(v5 + 104) = 1;
  return v5;
}


int __fastcall SpellParticle::normalTick(SpellParticle *this)
{
  int v2; // r12@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r7@1
  void *v8; // r0@1
  int result; // r0@5
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  int v16; // [sp+0h] [bp-40h]@1
  int v17; // [sp+4h] [bp-3Ch]@1
  int v18; // [sp+8h] [bp-38h]@1
  int v19; // [sp+Ch] [bp-34h]@1
  int v20; // [sp+10h] [bp-30h]@1
  int v21; // [sp+14h] [bp-2Ch]@1
  int v22; // [sp+18h] [bp-28h]@1
  int v23; // [sp+1Ch] [bp-24h]@1

  _R4 = this;
  *((_DWORD *)this + 42) = *((_DWORD *)this + 39);
  *((_DWORD *)this + 43) = *((_DWORD *)this + 40);
  *((_DWORD *)this + 44) = *((_DWORD *)this + 41);
  TextureUVCoordinateSet::fromOldSystem(
    (TextureUVCoordinateSet *)&v16,
    *((_DWORD *)this + 53) + 7 - 8 * *((_DWORD *)this + 13) / *((_DWORD *)this + 2));
  v2 = (int)_R4 + 12;
  v3 = v17;
  v4 = v18;
  v5 = v19;
  v6 = v20;
  v7 = v21;
  *(_DWORD *)v2 = v16;
  *(_DWORD *)(v2 + 4) = v3;
  *(_DWORD *)(v2 + 8) = v4;
  *(_DWORD *)(v2 + 12) = v5;
  *(_DWORD *)(v2 + 16) = v6;
  *(_DWORD *)(v2 + 20) = v7;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)_R4 + 9,
    &v22);
  *((_DWORD *)_R4 + 10) = v23;
  v8 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  }
  __asm
    VLDR            S0, =0.004
    VLDR            S2, [R4,#0x94]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0x94]
  Particle::move(_R4, (SpellParticle *)((char *)_R4 + 144));
    VLDR            S2, [R4,#0xA0]
    VLDR            S4, [R4,#0xAC]
    VLDR            S0, [R4,#0x90]
    VCMPE.F32       S2, S4
    VMRS            APSR_nzcv, FPSCR
  if ( _ZF )
    __asm
      VLDR            S2, =1.1
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R4,#0x90]
      VLDR            S4, [R4,#0x98]
      VMUL.F32        S2, S4, S2
      VSTR            S2, [R4,#0x98]
  else
    __asm { VLDR            S2, [R4,#0x98] }
    VLDR            S4, =0.96
    VMUL.F32        S6, S0, S4
    VSTR            S6, [R4,#0x90]
    VLDR            S6, [R4,#0x94]
    VMUL.F32        S6, S6, S4
    VMUL.F32        S4, S2, S4
    VSTR            S6, [R4,#0x94]
    VSTR            S4, [R4,#0x98]
  result = *((_BYTE *)_R4 + 181);
  if ( *((_BYTE *)_R4 + 181) )
      VLDRNE          S4, =0.672
      VMULNE.F32      S0, S0, S4
      VMULNE.F32      S2, S2, S4
      VSTRNE          S0, [R5]
      VSTRNE          S2, [R2]
  return result;
}


void __fastcall SpellParticle::~SpellParticle(SpellParticle *this)
{
  SpellParticle *v1; // r4@1
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


void __fastcall SpellParticle::~SpellParticle(SpellParticle *this)
{
  SpellParticle::~SpellParticle(this);
}


int __fastcall SpellParticle::init(SpellParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  unsigned int v6; // r5@1
  Random *v7; // r0@1
  Random *v8; // r6@1
  int result; // r0@1

  _R4 = this;
  v6 = a4;
  v7 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  v8 = v7;
  _R0 = Random::_genRandInt32(v7);
  __asm
  {
    VMOV            S0, R0
    VCVT.F64.U32    D9, S0
  }
  _R0 = Random::_genRandInt32(v8);
    VLDR            D8, =2.32830644e-10
    VLDR            S20, =0.8
    VCVT.F64.U32    D0, S0
    VMUL.F64        D1, D9, D8
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VCVT.F32.F64    S2, D1
    VLDR            S18, =-0.9
    VMUL.F32        S0, S0, S20
    VADD.F32        S2, S2, S18
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0x90]
    VLDR            S2, =0.6
    VADD.F32        S0, S0, S2
    VSTR            S0, [R4,#0x94]
    VCVT.F64.U32    D11, S0
    VMUL.F64        D1, D11, D8
    VSTR            S0, [R4,#0x98]
  _R7 = Random::_genRandInt32(v8);
    VLDR            S0, [R4,#0x90]
    VMOV            S10, R7
    VLDR            S2, [R4,#0x94]
    VMUL.F32        S6, S0, S0
    VLDR            S4, [R4,#0x98]
    VMUL.F32        S8, S2, S2
    VMUL.F32        S12, S4, S4
    VCVT.F64.U32    D5, S10
    VADD.F32        S6, S8, S6
    VMOV            S8, R0
    VMUL.F64        D5, D5, D8
    VADD.F32        S6, S6, S12
    VCVT.F64.U32    D4, S8
    VSQRT.F32       S6, S6
    VMUL.F64        D4, D4, D8
    VMOV.F32        S12, #1.0
    VCVT.F32.F64    S10, D5
    VCVT.F32.F64    S8, D4
    VADD.F32        S10, S10, S12
    VDIV.F32        S2, S2, S6
    VADD.F32        S8, S10, S8
    VLDR            S10, =0.15
    VDIV.F32        S0, S0, S6
    VMUL.F32        S10, S8, S10
    VDIV.F32        S4, S4, S6
    VMUL.F32        S2, S2, S10
    VLDR            S6, =0.06
    VLDR            S10, =0.08
    VMUL.F32        S6, S8, S6
    VLDR            S8, =0.02
    VMUL.F32        S0, S6, S0
    VMUL.F32        S4, S6, S4
    VMOV.F32        S6, #0.75
    VADD.F32        S2, S2, S8
    VSTR            S2, [R4,#0x94]
    VSTR            S4, [R4,#0x98]
    VLDR            S0, [R4,#0x3C]
    VMUL.F32        S0, S0, S6
    VSTR            S0, [R4,#0x3C]
    VLDR            D1, =0.8
  _R2 = (unsigned __int8)v6;
  _R1 = v6 >> 24;
  __asm { VCVT.F64.U32    D0, S0 }
  result = (unsigned __int16)v6 >> 8;
    VCVT.F64.F32    D0, S0
    VMUL.F64        D0, D0, D1
    VLDR            D1, =0.2
    VMOV            S4, R2
    VMOV            S6, R0
    VLDR            S10, =0.0039216
    VADD.F64        D0, D0, D1
    VMOV.F64        D1, #8.0
    VDIV.F64        D0, D1, D0
    VMOV            S2, R1
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
  _R1 = (v6 >> 16) & 0xFF;
    VCVT.F32.S32    S6, S6
    VMOV            S8, R1
    VCVT.F32.S32    S8, S8
    VCVTR.S32.F64   S0, D0
    VMUL.F32        S8, S8, S10
    VSTR            S0, [R4,#8]
    VMUL.F32        S6, S6, S10
    VMUL.F32        S4, S4, S10
    VSTR            S8, [R4,#0x44]
    VSTR            S6, [R4,#0x48]
    VSTR            S4, [R4,#0x4C]
    VSTR            S2, [R4,#0x50]
  return result;
}
