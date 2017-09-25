

int __fastcall RisingRedDustParticle::normalTick(RisingRedDustParticle *this)
{
  int v8; // r0@5
  int v9; // r12@5
  int v10; // r3@5
  int v11; // r4@5
  int v12; // r5@5
  int v13; // r6@5
  int v14; // r7@5
  void *v15; // r0@5
  char *v16; // r0@6
  int result; // r0@10
  unsigned int *v18; // r2@13
  signed int v19; // r1@15
  unsigned int *v20; // r2@17
  signed int v21; // r1@19
  char *v22; // [sp+18h] [bp-48h]@5
  int v23; // [sp+1Ch] [bp-44h]@5
  char v24; // [sp+20h] [bp-40h]@5
  int v25; // [sp+38h] [bp-28h]@5
  int v26; // [sp+3Ch] [bp-24h]@5

  _R8 = this;
  __asm
  {
    VMOV.F32        S4, #1.0
    VMOV.F32        S6, #0.5
  }
  *((_DWORD *)this + 42) = *((_DWORD *)this + 39);
  *((_DWORD *)this + 43) = *((_DWORD *)this + 40);
  *((_DWORD *)this + 44) = *((_DWORD *)this + 41);
    VLDR            S0, [R8,#8]
    VLDR            S2, [R8,#0x34]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VDIV.F32        S0, S2, S0
    VMOV.F32        S2, #8.0
    VMUL.F32        S0, S0, S2
    VADD.F32        S2, S0, S4
    VLDR            S4, =0.0625
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMUL.F32        S0, S0, S4
    VSUB.F32        S0, S6, S0
    VMUL.F32        S2, S2, S4
    VLDR            S4, =0.0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VSUB.F32        S2, S6, S2
    VCMPE.F32       S2, #0.0
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S4 }
    VMOV            R1, S0
    __asm { VMOVLT.F32      S2, S4 }
  v22 = (char *)&unk_28898CC;
  __asm { VMOV            R3, S2 }
  v23 = 0;
  v8 = TextureUVCoordinateSet::TextureUVCoordinateSet(
         COERCE_FLOAT(&v24),
         _R1,
         1058013184,
         _R3,
         0.625,
         128,
         (int)&v22,
         1065353216);
  v9 = (int)_R8 + 12;
  v10 = *(_DWORD *)(v8 + 4);
  v11 = *(_DWORD *)(v8 + 8);
  v12 = *(_DWORD *)(v8 + 12);
  v13 = *(_DWORD *)(v8 + 16);
  v14 = *(_DWORD *)(v8 + 20);
  *(_DWORD *)v9 = *(_DWORD *)v8;
  *(_DWORD *)(v9 + 4) = v10;
  *(_DWORD *)(v9 + 8) = v11;
  *(_DWORD *)(v9 + 12) = v12;
  *(_DWORD *)(v9 + 16) = v13;
  *(_DWORD *)(v9 + 20) = v14;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)_R8 + 9,
    (int *)(v8 + 24));
  *((_DWORD *)_R8 + 10) = v26;
  v15 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v22 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
    VLDR            S0, [R8,#0x94]
    VLDR            S2, [R8,#0xD8]
    VADD.F32        S0, S0, S2
    VSTR            S0, [R8,#0x94]
  Particle::move(_R8, (RisingRedDustParticle *)((char *)_R8 + 144));
    VLDR            S2, [R8,#0xA0]
    VLDR            S4, [R8,#0xAC]
    VLDR            S0, [R8,#0x90]
    VCMPE.F32       S2, S4
  if ( _ZF )
    __asm
      VLDR            S2, =1.1
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R8,#0x90]
      VLDR            S4, [R8,#0x98]
      VMUL.F32        S2, S4, S2
      VSTR            S2, [R8,#0x98]
  else
    __asm { VLDR            S2, [R8,#0x98] }
    VLDR            S4, =0.96
    VMUL.F32        S6, S0, S4
    VSTR            S6, [R8,#0x90]
    VLDR            S6, [R8,#0x94]
    VMUL.F32        S6, S6, S4
    VMUL.F32        S4, S2, S4
    VSTR            S6, [R8,#0x94]
    VSTR            S4, [R8,#0x98]
  result = *((_BYTE *)_R8 + 181);
  if ( *((_BYTE *)_R8 + 181) )
      VLDRNE          S4, =0.672
      VMULNE.F32      S0, S0, S4
      VMULNE.F32      S2, S2, S4
      VSTRNE          S0, [R5]
      VSTRNE          S2, [R2]
  return result;
}


int __fastcall RisingRedDustParticle::init(RisingRedDustParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  const Vec3 *v11; // r7@1
  Random *v12; // r0@1
  Random *v13; // r6@1
  int result; // r0@7

  _R5 = this;
  __asm
  {
    VLDR            S0, =0.1
    VLDR            S2, [R5,#0x90]
  }
  _R4 = a4;
  __asm { VMUL.F32        S2, S2, S0 }
  v11 = a3;
    VSTR            S2, [R5,#0x90]
    VLDR            S2, [R5,#0x94]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R5,#0x94]
    VLDR            S2, [R5,#0x98]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R5,#0x98]
  *((_DWORD *)this + 17) = 1065353216;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  v12 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  v13 = v12;
  _R0 = Random::_genRandInt32(v12);
    VMOV            S0, R0
    VCVT.F64.U32    D9, S0
  _R0 = Random::_genRandInt32(v13);
    VLDR            D8, =2.32830644e-10
    VLDR            S22, =0.2
    VCVT.F64.U32    D0, S0
    VMUL.F64        D1, D9, D8
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S2, D1
    VLDR            S18, =0.4
    VCVT.F32.F64    S0, D0
    VMUL.F32        S2, S2, S18
    VLDR            S4, =0.6
    VMUL.F32        S0, S0, S22
    VLDR            S20, =0.8
    VADD.F32        S24, S2, S4
    VLDR            S2, [R5,#0x44]
    VADD.F32        S0, S0, S20
    VMUL.F32        S2, S24, S2
    VSTR            S0, [R5,#0x44]
    VLDR            S2, [R5,#0x48]
    VSTR            S0, [R5,#0x48]
    VMOV.F32        S4, #0.75
    VLDR            S2, [R5,#0x4C]
  if ( _ZF )
    _R4 = 1;
    VMUL.F32        S2, S2, S24
    VMOV            S6, R4
    VCVT.F32.S32    S22, S6
    VMUL.F32        S2, S22, S4
    VSTR            S0, [R5,#0x4C]
    VLDR            S0, [R5,#0x3C]
    VSTR            S0, [R5,#0x3C]
    VSTR            S0, [R5,#0xD4]
  *((_DWORD *)_R5 + 55) = *((_DWORD *)v11 + 1);
    VLDR            S2, =1100.0
    VCMPE.F32       S0, S18
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S20
    VMUL.F32        S2, S22, S2
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S18, S0 }
    VMOV.F32        S0, #1.0
    __asm { VMOVGT.F32      S18, S20 }
    VDIV.F32        S0, S0, S2
    VLDR            S2, [R5,#0xDC]
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R5,#0xD8]
    VMOV.F32        S2, #8.0
    VDIV.F32        S0, S2, S0
    VMOV.F32        S2, #10.0
    VADD.F32        S0, S0, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  result = _R0 * _R4;
  *((_DWORD *)_R5 + 2) = result;
  return result;
}


void __fastcall RisingRedDustParticle::~RisingRedDustParticle(RisingRedDustParticle *this)
{
  RisingRedDustParticle *v1; // r4@1
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


void __fastcall RisingRedDustParticle::~RisingRedDustParticle(RisingRedDustParticle *this)
{
  RisingRedDustParticle::~RisingRedDustParticle(this);
}


signed int __fastcall RisingRedDustParticle::render(Particle *a1, int a2)
{
  __asm
  {
    VLDR            S2, [R0,#0x34]
    VLDR            S0, [R0,#8]
    VLDR            S4, [R0,#0xD4]
    VCVT.F32.S32    S2, S2
    VLDR            S6, [R1,#0x14]
    VCVT.F32.S32    S0, S0
    VADD.F32        S2, S2, S6
    VMOV.F32        S6, #1.0
    VDIV.F32        S0, S2, S0
    VLDR            S2, =32.0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S2 }
    VCMPE.F32       S0, S6
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S6 }
    VMUL.F32        S0, S0, S4
    VSTR            S0, [R0,#0x3C]
  return j_j_j__ZN8Particle6renderER21ParticleRenderContext(a1, a2);
}
