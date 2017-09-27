

void __fastcall ExplodeParticle::~ExplodeParticle(ExplodeParticle *this)
{
  ExplodeParticle *v1; // r4@1
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


int __fastcall ExplodeParticle::normalTick(ExplodeParticle *this)
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
    8 - 8 * *((_DWORD *)this + 13) / *((_DWORD *)this + 2));
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
    VLDR            S0, [R4,#0x40]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
      VLDR            S0, =0.004
      VLDR            S2, [R4,#0x94]
      VADD.F32        S0, S2, S0
  else
      VCVT.F64.F32    D0, S0
      VLDR            D1, =0.04
      VMUL.F64        D0, D0, D1
      VCVT.F32.F64    S0, D0
  __asm { VSTR            S0, [R4,#0x94] }
  Particle::move(_R4, (ExplodeParticle *)((char *)_R4 + 144));
    VLDR            S4, =0.9
    VLDR            S0, [R4,#0x90]
    VMUL.F32        S2, S0, S4
    VSTR            S2, [R4,#0x90]
    VLDR            S2, [R4,#0x94]
    VMUL.F32        S2, S2, S4
    VSTR            S2, [R4,#0x94]
    VLDR            S2, [R4,#0x98]
    VMUL.F32        S4, S2, S4
    VSTR            S4, [R4,#0x98]
  result = *((_BYTE *)_R4 + 181);
  if ( *((_BYTE *)_R4 + 181) )
      VLDRNE          S4, =0.63
      VMULNE.F32      S0, S0, S4
      VMULNE.F32      S2, S2, S4
      VSTRNE          S0, [R4,#0x90]
      VSTRNE          S2, [R4,#0x98]
  return result;
}


void __fastcall ExplodeParticle::~ExplodeParticle(ExplodeParticle *this)
{
  ExplodeParticle::~ExplodeParticle(this);
}


int __fastcall ExplodeParticle::init(ExplodeParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  ExplodeParticle *v5; // r4@1
  Random *v7; // r0@3
  Random *v8; // r5@3
  int result; // r0@3

  v5 = this;
  _R6 = a3;
  if ( a4 >= 1 )
    *((_DWORD *)this + 16) = 1056964608;
  v7 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  v8 = v7;
  __asm { VLDR            S18, [R6] }
  _R0 = Random::_genRandInt32(v7);
  __asm
  {
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VLDR            S20, =-0.05
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VLDR            S22, =0.1
    VADD.F32        S2, S18, S20
    VMUL.F32        S0, S0, S22
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0x90]
    VLDR            S18, [R6,#4]
  }
  _R0 = Random::_genRandInt32(v8);
    VSTR            S0, [R4,#0x94]
    VLDR            S18, [R6,#8]
    VSTR            S0, [R4,#0x98]
    VLDR            S2, =0.3
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.7
    VADD.F32        S0, S0, S2
    VSTR            S0, [R4,#0x44]
    VSTR            S0, [R4,#0x48]
    VSTR            S0, [R4,#0x4C]
    VCVT.F64.U32    D9, S0
    VMUL.F64        D1, D9, D8
    VMOV.F32        S4, #6.0
    VCVT.F32.F64    S2, D1
    VMUL.F32        S2, S2, S4
    VMOV.F32        S4, #1.0
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VSTR            S0, [R4,#0x3C]
    VLDR            S2, =0.8
    VMOV.F32        S4, #16.0
    VLDR            S2, =0.2
    VDIV.F32        S0, S4, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  result = _R0 + 2;
  *((_DWORD *)v5 + 2) = result;
  return result;
}
