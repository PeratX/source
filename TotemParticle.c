

signed int __fastcall TotemParticle::normalTick(TotemParticle *this)
{
  signed int result; // r0@1

  _R4 = this;
  *((_DWORD *)this + 42) = *((_DWORD *)this + 39);
  *((_DWORD *)this + 43) = *((_DWORD *)this + 40);
  *((_DWORD *)this + 44) = *((_DWORD *)this + 41);
  __asm
  {
    VLDR            S0, [R4,#0x40]
    VLDR            S2, [R4,#0x94]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0x94]
  }
  result = Particle::move(this, (TotemParticle *)((char *)this + 144));
    VLDR            S0, =0.6
    VLDR            S2, [R4,#0x90]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R4,#0x90]
    VSTR            S2, [R4,#0x94]
    VLDR            S2, [R4,#0x98]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x98]
  return result;
}


signed int __fastcall TotemParticle::init(TotemParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  Random *v10; // r5@1
  float v13; // r1@1
  signed int result; // r0@4

  _R4 = this;
  *((_DWORD *)this + 36) = *(_DWORD *)a3;
  __asm { VMOV.F32        S0, #0.75 }
  *((_DWORD *)this + 37) = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 2);
  __asm
  {
    VLDR            S2, [R4,#0x3C]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x3C]
  }
  v10 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  *((_DWORD *)_R4 + 2) = Random::_genRandInt32(v10) % 0xC + 60;
  _R0 = Random::_genRandInt32(v10);
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VMOV.F32        S2, #4.0
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  mce::Math::floor(_R0, v13);
    VLDR            S18, =0.2
    VMUL.F32        S20, S0, S18
  if ( _ZF )
    _R0 = Random::_genRandInt32(v10);
    __asm
    {
      VMOV            S0, R0
      VLDR            S2, =0.3
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D8
      VCVT.F32.F64    S0, D0
      VMUL.F32        S0, S0, S2
      VLDR            S2, =0.6
      VADD.F32        S20, S20, S2
      VADD.F32        S22, S0, S2
    }
  else
      VLDR            S4, =0.4
      VLDR            S2, =0.1
      VADD.F32        S22, S0, S4
  __asm { VMOV            S0, R0 }
  result = 1065353216;
  __asm { VCVT.F64.U32    D0, S0 }
  *((_DWORD *)_R4 + 20) = 1065353216;
    VMUL.F32        S0, S0, S18
    VSTR            S20, [R4,#0x44]
    VSTR            S22, [R4,#0x48]
    VSTR            S0, [R4,#0x4C]
  return result;
}


void __fastcall TotemParticle::~TotemParticle(TotemParticle *this)
{
  TotemParticle::~TotemParticle(this);
}


void __fastcall TotemParticle::~TotemParticle(TotemParticle *this)
{
  TotemParticle *v1; // r4@1
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


signed int __fastcall TotemParticle::render(int a1, int a2)
{
  int v2; // r10@1
  int v3; // r8@1
  int v4; // r0@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r7@1
  void *v10; // r0@1
  unsigned int *v12; // r2@3
  signed int v13; // r1@5
  int v14; // [sp+0h] [bp-48h]@1
  int v15; // [sp+4h] [bp-44h]@1
  int v16; // [sp+8h] [bp-40h]@1
  int v17; // [sp+Ch] [bp-3Ch]@1
  int v18; // [sp+10h] [bp-38h]@1
  int v19; // [sp+14h] [bp-34h]@1
  int v20; // [sp+18h] [bp-30h]@1
  int v21; // [sp+1Ch] [bp-2Ch]@1

  v2 = a1;
  v3 = a2;
  TextureUVCoordinateSet::fromOldSystem(
    (TextureUVCoordinateSet *)&v14,
    8 * *(_DWORD *)(a1 + 52) / *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 212));
  v4 = v2 + 12;
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
    (int *)(v2 + 36),
    &v20);
  *(_DWORD *)(v2 + 40) = v21;
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
  return Particle::render((Particle *)v2, v3);
}
