

_DWORD *__fastcall RainSplashParticle::RainSplashParticle(int a1, int a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Particle::Particle(a1, a2, a3);
  *result = &off_26D9EAC;
  return result;
}


void __fastcall RainSplashParticle::~RainSplashParticle(RainSplashParticle *this)
{
  RainSplashParticle::~RainSplashParticle(this);
}


unsigned int __fastcall RainSplashParticle::init(RainSplashParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  RainSplashParticle *v5; // r4@1
  Random *v6; // r0@1
  unsigned int result; // r0@1
  ParticleEngine *v12; // [sp+0h] [bp-10h]@0

  v5 = this;
  WaterDropParticle::init(this, a2, a3, a4, v12);
  Particle::setSize(v5, 0.004);
  *((_DWORD *)v5 + 16) = 1028443341;
  v6 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  result = Random::_genRandInt32(v6);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VMOV.F32        S4, #4.0
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, =0.1
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.95
    VADD.F32        S0, S0, S2
    VDIV.F32        S0, S4, S0
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R4,#8]
  }
  return result;
}


void __fastcall RainSplashParticle::~RainSplashParticle(RainSplashParticle *this)
{
  RainSplashParticle *v1; // r4@1
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
