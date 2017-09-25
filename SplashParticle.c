

void __fastcall SplashParticle::~SplashParticle(SplashParticle *this)
{
  SplashParticle::~SplashParticle(this);
}


void __fastcall SplashParticle::init(SplashParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  SplashParticle::init(this, a2, a3, a4, a5);
}


void __fastcall SplashParticle::init(SplashParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  SplashParticle *v6; // r9@1
  Random *v7; // r0@1
  char v8; // r0@1
  int v9; // r0@1
  int v10; // r3@1
  int v11; // r4@1
  int v12; // r5@1
  int v13; // r6@1
  int v14; // r7@1
  void *v15; // r0@1
  unsigned int *v21; // r2@10
  signed int v22; // r1@12
  ParticleEngine *v23; // [sp+0h] [bp-50h]@0
  char v24; // [sp+8h] [bp-48h]@1
  int v25; // [sp+Ch] [bp-44h]@1
  int v26; // [sp+10h] [bp-40h]@1
  int v27; // [sp+14h] [bp-3Ch]@1
  int v28; // [sp+18h] [bp-38h]@1
  int v29; // [sp+1Ch] [bp-34h]@1
  int v30; // [sp+20h] [bp-30h]@1
  int v31; // [sp+24h] [bp-2Ch]@1

  _R8 = a3;
  v6 = this;
  WaterDropParticle::init(this, a2, a3, a4, v23);
  *((_DWORD *)v6 + 16) = 1025758986;
  v7 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  v8 = Random::_genRandInt32(v7);
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v24, v8 & 3 | 0x14);
  v9 = (int)v6 + 12;
  v10 = v25;
  v11 = v26;
  v12 = v27;
  v13 = v28;
  v14 = v29;
  *(_DWORD *)v9 = *(_DWORD *)&v24;
  *(_DWORD *)(v9 + 4) = v10;
  *(_DWORD *)(v9 + 8) = v11;
  *(_DWORD *)(v9 + 12) = v12;
  *(_DWORD *)(v9 + 16) = v13;
  *(_DWORD *)(v9 + 20) = v14;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v6 + 9,
    &v30);
  *((_DWORD *)v6 + 10) = v31;
  v15 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v30 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  }
  __asm
    VLDR            S0, [R8,#4]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _ZF )
    __asm
      VLDR            S2, [R8]
      VCMPE.F32       S2, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _ZF )
      __asm
      {
        VLDR            S4, [R8,#8]
        VCMPE.F32       S4, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        return;
      __asm { VMOV            R0, S4 }
      _R0 = *((_DWORD *)_R8 + 2);
    __asm { VLDR            S4, =0.1 }
    *((_DWORD *)v6 + 38) = _R0;
      VADD.F32        S0, S0, S4
      VSTR            S2, [R9,#0x90]
      VSTR            S0, [R9,#0x94]
}


_DWORD *__fastcall SplashParticle::SplashParticle(int a1, int a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Particle::Particle(a1, a2, a3);
  *result = &off_26D9E7C;
  return result;
}


void __fastcall SplashParticle::~SplashParticle(SplashParticle *this)
{
  SplashParticle *v1; // r4@1
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
