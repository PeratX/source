

int __fastcall MobFlameParticle::getEntity(MobFlameParticle *this)
{
  char *v1; // r4@1
  int v2; // r0@2
  int result; // r0@2

  v1 = (char *)this + 216;
  if ( (*((_DWORD *)this + 54) & *((_DWORD *)this + 55)) == -1 )
  {
    result = 0;
  }
  else
    v2 = BlockSource::getLevel(*((BlockSource **)this + 35));
    result = Level::fetchEntity(v2, 0, *(_QWORD *)v1, *(_QWORD *)v1 >> 32, 0);
  return result;
}


void __fastcall MobFlameParticle::~MobFlameParticle(MobFlameParticle *this)
{
  MobFlameParticle *v1; // r4@1
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


void __fastcall MobFlameParticle::~MobFlameParticle(MobFlameParticle *this)
{
  MobFlameParticle::~MobFlameParticle(this);
}


int __fastcall MobFlameParticle::normalTick(MobFlameParticle *this)
{
  char *v6; // r5@1
  int result; // r0@1
  int v8; // r0@2

  _R4 = this;
  *((_DWORD *)this + 42) = *((_DWORD *)this + 39);
  *((_DWORD *)this + 43) = *((_DWORD *)this + 40);
  *((_DWORD *)this + 44) = *((_DWORD *)this + 41);
  __asm
  {
    VLDR            S2, [R4,#0xE4]
    VLDR            S0, [R4,#0xEC]
    VADD.F32        S2, S2, S0
    VSTR            S2, [R4,#0xE4]
  }
  v6 = (char *)this + 216;
  result = *((_DWORD *)this + 54) & *((_DWORD *)this + 55);
  if ( result == -1 )
    goto LABEL_6;
  v8 = BlockSource::getLevel(*((BlockSource **)_R4 + 35));
  result = Level::fetchEntity(v8, 0, *(_QWORD *)v6, *(_QWORD *)v6 >> 32, 0);
  _R5 = result;
  if ( !result )
    __asm { VLDR            S0, [R4,#0xEC] }
LABEL_6:
    __asm
    {
      VLDR            S2, =0.002
      VADD.F32        S0, S0, S2
      VSTR            S0, [R4,#0xEC]
    }
    return result;
  result = (*(int (**)(void))(*(_DWORD *)result + 320))();
  if ( result )
      VLDR            S0, =0.002
      VLDR            S2, [R5,#0x134]
      VMUL.F32        S0, S2, S0
      VLDR            S2, [R4,#0xEC]
      VADD.F32        S0, S2, S0
      VLDR            S0, [R4,#0xE0]
      VLDR            S2, [R5,#0x48]
      VSTR            S0, [R4,#0x9C]
      VLDR            S0, [R4,#0xE4]
      VLDR            S2, [R5,#0x4C]
      VSTR            S0, [R4,#0xA0]
      VLDR            S0, [R4,#0xE8]
      VLDR            S2, [R5,#0x50]
      VSTR            S0, [R4,#0xA4]
  else
    result = 0;
    *((_DWORD *)_R4 + 2) = 0;
  return result;
}


void *__fastcall MobFlameParticle::getParticleTexture(MobFlameParticle *this)
{
  return &Particle::FLAME_ATLAS;
}


unsigned int __fastcall MobFlameParticle::setEmittingEntity(MobFlameParticle *this, Entity *a2)
{
  Random *v8; // r0@1
  Random *v9; // r6@1
  unsigned int result; // r0@1

  _R5 = a2;
  _R4 = this;
  *((_QWORD *)this + 27) = *(_QWORD *)Entity::getUniqueID(a2);
  __asm
  {
    VLDR            S0, =0.7
    VLDR            S2, [R4,#0xA0]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0xA0]
    VLDR            S16, [R5,#0x130]
  }
  v8 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  v9 = v8;
    VLDR            S18, [R5,#0x48]
    VLDR            S20, [R4,#0x9C]
  _R0 = Random::_genRandInt32(v8);
    VMOV            S0, R0
    VLDR            S22, [R5,#0x4C]
    VLDR            S24, [R5,#0x50]
    VLDR            S26, [R4,#0xA0]
    VLDR            S28, [R4,#0xA4]
    VCVT.F64.U32    D15, S0
  result = Random::_genRandInt32(v9);
    VMOV            S4, R0
    VLDR            D0, =2.32830644e-10
    VMOV.F32        S2, #0.5
    VLDR            S10, =0.2
    VCVT.F64.U32    D2, S4
    VMUL.F64        D3, D15, D0
    VMUL.F64        D0, D2, D0
    VMUL.F32        S2, S16, S2
    VSUB.F32        S8, S20, S18
    VSUB.F32        S4, S28, S24
    VCVT.F32.F64    S6, D3
    VCVT.F32.F64    S0, D0
    VMUL.F32        S8, S8, S2
    VMUL.F32        S2, S4, S2
    VLDR            S4, =-0.1
    VMUL.F32        S6, S6, S10
    VMUL.F32        S0, S0, S10
    VADD.F32        S8, S8, S4
    VADD.F32        S2, S2, S4
    VADD.F32        S4, S8, S6
    VLDR            S2, =0.005
    VSUB.F32        S6, S26, S22
    VSTR            S4, [R4,#0xE0]
    VSTR            S6, [R4,#0xE4]
    VSTR            S0, [R4,#0xE8]
    VLDR            S0, [R5,#0x134]
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R4,#0xEC]
  return result;
}


signed int __fastcall MobFlameParticle::render(int a1, int a2)
{
  int v2; // r5@1
  signed int result; // r0@1

  v2 = a1;
  _R4 = a2;
  result = *(_DWORD *)(a1 + 8);
  _R1 = *(_DWORD *)(v2 + 52);
  if ( _R1 < result )
  {
    __asm
    {
      VMOV            S0, R1
      VMOV            S4, R0
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R4,#0x14]
      VCVT.F32.S32    S4, S4
      VADD.F32        S0, S2, S0
      VLDR            S2, =32.0
      VDIV.F32        S0, S0, S4
      VMUL.F32        S0, S0, S2
      VMOV            R0, S0
    }
    _R0 = floorf(_R0);
      VMOV            S2, R0
      VLDR            S0, =0.03125
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R5,#0x14]
      VSTR            S0, [R5,#0x1C]
    result = j_j_j__ZN8Particle6renderER21ParticleRenderContext_0((Particle *)v2, _R4);
  }
  return result;
}


int __fastcall MobFlameParticle::getParticleLightColor(int result, float a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r1@1

  v2 = *(_QWORD *)&qword_283E614;
  v3 = unk_283E61C;
  *(_DWORD *)result = Color::WHITE;
  *(_QWORD *)(result + 4) = v2;
  *(_DWORD *)(result + 12) = v3;
  return result;
}


int __fastcall MobFlameParticle::MobFlameParticle(int a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r0@1
  int v5; // r12@1
  int v6; // r3@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r6@1
  int v10; // r7@1
  void *v11; // r0@1
  void *v12; // r0@2
  unsigned int *v14; // r2@4
  signed int v15; // r1@6
  unsigned int *v16; // r2@8
  signed int v17; // r1@10
  __int64 v18; // [sp+18h] [bp-48h]@1
  char v19; // [sp+20h] [bp-40h]@1
  int v20; // [sp+38h] [bp-28h]@1
  int v21; // [sp+3Ch] [bp-24h]@1

  v3 = a1;
  Particle::Particle(a1, a2, a3);
  *(_DWORD *)v3 = &off_26E66C0;
  *(_DWORD *)(v3 + 216) = -1;
  *(_DWORD *)(v3 + 220) = -1;
  *(_DWORD *)(v3 + 224) = 0;
  *(_DWORD *)(v3 + 228) = 0;
  *(_DWORD *)(v3 + 232) = 0;
  *(_DWORD *)(v3 + 72) = 1065353216;
  *(_DWORD *)(v3 + 76) = 1065353216;
  *(_DWORD *)(v3 + 68) = 1065353216;
  *(_BYTE *)(v3 + 180) = 1;
  *(_DWORD *)(v3 + 4) = -1098907648;
  v18 = (unsigned int)&unk_28898CC;
  v4 = TextureUVCoordinateSet::TextureUVCoordinateSet(
         COERCE_FLOAT(&v19),
         0,
         1065353216,
         0.03125,
         16,
         512,
         (int)&v18,
         1065353216);
  v5 = v3 + 12;
  v6 = *(_DWORD *)(v4 + 4);
  v7 = *(_DWORD *)(v4 + 8);
  v8 = *(_DWORD *)(v4 + 12);
  v9 = *(_DWORD *)(v4 + 16);
  v10 = *(_DWORD *)(v4 + 20);
  *(_DWORD *)v5 = *(_DWORD *)v4;
  *(_DWORD *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 8) = v7;
  *(_DWORD *)(v5 + 12) = v8;
  *(_DWORD *)(v5 + 16) = v9;
  *(_DWORD *)(v5 + 20) = v10;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 36),
    (int *)(v4 + 24));
  *(_DWORD *)(v3 + 40) = v21;
  v11 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v20 - 4);
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
      j_j_j_j__ZdlPv_9(v11);
  }
  v12 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return v3;
}


int __fastcall MobFlameParticle::init(int result, const Vec3 *a2, const Vec3 *_R2, int a4, ParticleEngine *a5)
{
  __asm
  {
    VLDR            S0, =0.1
    VLDR            S2, [R0,#0x90]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R0,#0x90]
    VLDR            S4, [R0,#0x94]
    VMUL.F32        S4, S4, S0
    VSTR            S4, [R0,#0x94]
    VLDR            S6, [R0,#0x98]
    VMUL.F32        S0, S6, S0
    VSTR            S0, [R0,#0x98]
    VLDR            S6, [R2]
    VADD.F32        S2, S2, S6
    VLDR            S2, [R2,#4]
    VADD.F32        S2, S4, S2
    VSTR            S2, [R0,#0x94]
    VLDR            S2, [R2,#8]
    VADD.F32        S0, S0, S2
    VMOV.F32        S2, #3.0
    VLDR            S0, [R0,#0x3C]
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R0,#0x3C]
    VSTR            S0, [R0,#0xD4]
  }
  *(_DWORD *)(result + 8) = 25;
  *(_DWORD *)(result + 216) = -1;
  *(_DWORD *)(result + 220) = -1;
  return result;
}
