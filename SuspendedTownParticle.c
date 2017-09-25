

void __fastcall SuspendedTownParticle::~SuspendedTownParticle(SuspendedTownParticle *this)
{
  SuspendedTownParticle::~SuspendedTownParticle(this);
}


signed int __fastcall SuspendedTownParticle::init(SuspendedTownParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  Random *v7; // r0@1
  Random *v8; // r5@1
  signed int result; // r0@1

  _R4 = this;
  _R6 = a3;
  v7 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  v8 = v7;
  __asm { VLDR            S20, [R4,#0x3C] }
  _R0 = Random::_genRandInt32(v7);
  __asm
  {
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VLDR            S22, =0.6
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VMUL.F32        S0, S0, S22
    VLDR            S18, =0.2
    VADD.F32        S0, S0, S18
    VMUL.F32        S0, S0, S20
    VSTR            S0, [R4,#0x3C]
    VLDR            S20, [R6]
  }
  _R0 = Random::_genRandInt32(v8);
    VLDR            S24, =0.04
    VMUL.F32        S2, S20, S18
    VLDR            S20, =-0.02
    VADD.F32        S2, S2, S20
    VMUL.F32        S0, S0, S24
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0x90]
    VLDR            S26, [R6,#4]
    VMUL.F32        S2, S26, S18
    VSTR            S0, [R4,#0x94]
    VLDR            S26, [R6,#8]
    VSTR            S0, [R4,#0x98]
    VMOV.F32        S2, #0.5
    VADD.F32        S0, S0, S2
    VLDR            S2, [R4,#0x3C]
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.02
    VLDR            S0, [R4,#0x90]
    VLDR            S0, [R4,#0x94]
    VLDR            S0, [R4,#0x98]
    VLDR            S2, =0.8
  result = 1053609165;
    VMOV.F32        S2, #20.0
    VDIV.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R4,#8]
  *((_DWORD *)_R4 + 17) = 1053609165;
  *((_DWORD *)_R4 + 18) = 1053609165;
  *((_DWORD *)_R4 + 19) = 1060320051;
  return result;
}


int __fastcall SuspendedTownParticle::SuspendedTownParticle(int a1, int a2, int a3)
{
  int v3; // r9@1
  int v4; // r0@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r7@1
  void *v10; // r0@1
  unsigned int *v12; // r2@3
  signed int v13; // r1@5
  int v14; // [sp+0h] [bp-40h]@1
  int v15; // [sp+4h] [bp-3Ch]@1
  int v16; // [sp+8h] [bp-38h]@1
  int v17; // [sp+Ch] [bp-34h]@1
  int v18; // [sp+10h] [bp-30h]@1
  int v19; // [sp+14h] [bp-2Ch]@1
  int v20; // [sp+18h] [bp-28h]@1
  int v21; // [sp+1Ch] [bp-24h]@1

  v3 = a1;
  Particle::Particle(a1, a2, a3);
  *(_DWORD *)v3 = &off_26D9CCC;
  *(_DWORD *)(v3 + 68) = 1053609165;
  *(_DWORD *)(v3 + 72) = 1053609165;
  *(_DWORD *)(v3 + 76) = 1060320051;
  Particle::setSize((Particle *)v3, 0.02);
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v14, 0);
  v4 = v3 + 12;
  v5 = v15;
  v6 = v16;
  v7 = v17;
  v8 = v18;
  v9 = v19;
  *(_DWORD *)v4 = v14;
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  *(_DWORD *)(v4 + 16) = v8;
  *(_DWORD *)(v4 + 20) = v9;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 36),
    &v20);
  *(_DWORD *)(v3 + 40) = v21;
  v10 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  }
  return v3;
}


void __fastcall SuspendedTownParticle::~SuspendedTownParticle(SuspendedTownParticle *this)
{
  SuspendedTownParticle *v1; // r4@1
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
