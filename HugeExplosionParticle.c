

void __fastcall HugeExplosionParticle::~HugeExplosionParticle(HugeExplosionParticle *this)
{
  HugeExplosionParticle::~HugeExplosionParticle(this);
}


int __fastcall HugeExplosionParticle::normalTick(int result)
{
  *(_DWORD *)(result + 168) = *(_DWORD *)(result + 156);
  *(_DWORD *)(result + 172) = *(_DWORD *)(result + 160);
  *(_DWORD *)(result + 176) = *(_DWORD *)(result + 164);
  return result;
}


int __fastcall HugeExplosionParticle::HugeExplosionParticle(int a1, int a2, int a3)
{
  int result; // r0@1

  result = Particle::Particle(a1, a2, a3);
  *(_DWORD *)result = &off_26E6644;
  *(_DWORD *)(result + 212) = 160;
  return result;
}


signed int __fastcall HugeExplosionParticle::init(HugeExplosionParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  HugeExplosionParticle *v5; // r4@1
  Random *v7; // r6@1
  signed int result; // r0@1

  v5 = this;
  _R5 = a4;
  v7 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  *((_DWORD *)v5 + 2) = (Random::_genRandInt32(v7) & 3) + 6;
  _R0 = Random::_genRandInt32(v7);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VMOV            S4, R5
    VLDR            S6, =0.6
    VCVT.F64.U32    D0, S0
  }
  result = 1065353216;
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VCVT.F32.S32    S4, S4
  *((_DWORD *)v5 + 20) = 1065353216;
    VMOV.F32        S2, #-5.0
    VMUL.F32        S0, S0, S6
    VMOV.F32        S6, #10.0
    VMUL.F32        S2, S4, S2
    VLDR            S4, =0.4
    VADD.F32        S0, S0, S4
    VADD.F32        S2, S2, S6
    VSTR            S0, [R4,#0x44]
    VSTR            S0, [R4,#0x48]
    VSTR            S0, [R4,#0x4C]
    VSTR            S2, [R4,#0x3C]
  return result;
}


void __fastcall HugeExplosionParticle::~HugeExplosionParticle(HugeExplosionParticle *this)
{
  HugeExplosionParticle *v1; // r4@1
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
      j_j_j_j__ZdlPv_9(v3);
  }
  operator delete((void *)v1);
}


signed int __fastcall HugeExplosionParticle::render(int a1, int a2)
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
    16 * *(_DWORD *)(a1 + 52) / *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 212));
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
      j_j_j_j__ZdlPv_9(v10);
  }
  return Particle::render((Particle *)v2, v3);
}
