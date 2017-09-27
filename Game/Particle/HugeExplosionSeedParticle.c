

int __fastcall HugeExplosionSeedParticle::normalTick(HugeExplosionSeedParticle *this)
{
  HugeExplosionSeedParticle *v1; // r5@1
  char *v2; // r4@1
  int v3; // r9@1
  Random *v4; // r5@1
  signed int v9; // r7@1
  float v13; // r1@2
  float v14; // r2@2
  int result; // r0@2
  float v16; // [sp+10h] [bp-58h]@2
  float v17; // [sp+14h] [bp-54h]@2
  float v18; // [sp+18h] [bp-50h]@2

  v1 = this;
  v2 = (char *)this + 156;
  *((_DWORD *)this + 42) = *((_DWORD *)this + 39);
  *((_DWORD *)this + 43) = *((_DWORD *)this + 40);
  *((_DWORD *)this + 44) = *((_DWORD *)this + 41);
  Particle::move(this, (HugeExplosionSeedParticle *)((char *)this + 144));
  v3 = BlockSource::getLevel(*((BlockSource **)v1 + 35));
  v4 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  __asm
  {
    VMOV.F32        S18, #8.0
    VLDR            D8, =2.32830644e-10
    VMOV.F32        S20, #-4.0
  }
  v9 = 6;
  do
    _R0 = Random::_genRandInt32(v4);
    __asm
    {
      VMOV            S0, R0
      VCVT.F64.U32    D11, S0
    }
      VMUL.F64        D11, D11, D8
      VCVT.F64.U32    D12, S0
      VMUL.F64        D1, D12, D8
      VCVT.F32.F64    S4, D11
      VCVT.F64.U32    D0, S0
    v13 = *((float *)v2 + 1);
    v14 = *((float *)v2 + 2);
    v16 = *(float *)v2;
    v17 = v13;
    v18 = v14;
      VMUL.F32        S4, S4, S18
      VLDR            S6, [SP,#0x68+var_58]
      VMUL.F64        D0, D0, D8
      VCVT.F32.F64    S2, D1
      VADD.F32        S4, S4, S20
      VMUL.F32        S2, S2, S18
      VCVT.F32.F64    S0, D0
      VADD.F32        S4, S4, S6
      VADD.F32        S2, S2, S20
      VMUL.F32        S0, S0, S18
      VSTR            S4, [SP,#0x68+var_58]
      VLDR            S4, [SP,#0x68+var_54]
      VADD.F32        S0, S0, S20
      VADD.F32        S2, S2, S4
      VSTR            S2, [SP,#0x68+var_54]
      VLDR            S2, [SP,#0x68+var_50]
      VADD.F32        S0, S0, S2
      VSTR            S0, [SP,#0x68+var_50]
    result = Level::addParticle(v3, 14, (int)&v16);
    --v9;
  while ( v9 );
  return result;
}


_DWORD *__fastcall HugeExplosionSeedParticle::HugeExplosionSeedParticle(int a1, int a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Particle::Particle(a1, a2, a3);
  *result = &off_26E6674;
  return result;
}


void __fastcall HugeExplosionSeedParticle::~HugeExplosionSeedParticle(HugeExplosionSeedParticle *this)
{
  HugeExplosionSeedParticle::~HugeExplosionSeedParticle(this);
}


void __fastcall HugeExplosionSeedParticle::~HugeExplosionSeedParticle(HugeExplosionSeedParticle *this)
{
  HugeExplosionSeedParticle *v1; // r4@1
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


int __fastcall HugeExplosionSeedParticle::init(int result, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  *(_BYTE *)(result + 180) = 1;
  *(_DWORD *)(result + 8) = 8;
  return result;
}
