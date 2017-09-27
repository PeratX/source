

void __fastcall FireworksSparkParticle::~FireworksSparkParticle(FireworksSparkParticle *this)
{
  FireworksSparkParticle::~FireworksSparkParticle(this);
}


void __fastcall FireworksSparkParticle::~FireworksSparkParticle(FireworksSparkParticle *this)
{
  FireworksSparkParticle *v1; // r4@1
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


int __fastcall FireworksSparkParticle::getParticleLightColor(int result, float a2)
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


int __fastcall FireworksSparkParticle::normalTick(FireworksSparkParticle *this)
{
  FireworksSparkParticle *v1; // r4@1
  int result; // r0@1
  int v3; // r1@2
  __int64 v4; // kr00_8@5
  int v5; // r2@5
  int v6; // r3@5
  int v7; // r12@5

  v1 = this;
  Particle::normalTick(this);
  result = *((_BYTE *)v1 + 212);
  if ( *((_BYTE *)v1 + 212) )
  {
    result = *((_DWORD *)v1 + 2);
    v3 = *((_DWORD *)v1 + 13);
    if ( v3 < result / 2 )
    {
      result += v3;
      if ( !(result & 1) )
      {
        result = Level::addParticle(*((_DWORD *)v1 + 56), 46, (int)v1 + 156);
        if ( result )
        {
          v4 = *(_QWORD *)((char *)v1 + 68);
          *(_QWORD *)(result + 76) = *(_QWORD *)((char *)v1 + 76);
          *(_QWORD *)(result + 68) = v4;
          *(_DWORD *)(result + 52) = *(_DWORD *)(result + 8) / 2;
          *(_BYTE *)(result + 214) = *((_BYTE *)v1 + 214);
          v5 = *((_DWORD *)v1 + 58);
          v6 = *((_DWORD *)v1 + 59);
          v7 = *((_DWORD *)v1 + 60);
          *(_DWORD *)(result + 228) = *((_DWORD *)v1 + 57);
          *(_DWORD *)(result + 232) = v5;
          *(_DWORD *)(result + 236) = v6;
          *(_DWORD *)(result + 240) = v7;
          *(_BYTE *)(result + 213) = *((_BYTE *)v1 + 213);
        }
      }
    }
  }
  return result;
}


int __fastcall FireworksSparkParticle::init(FireworksSparkParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  const Vec3 *v5; // r5@1
  FireworksSparkParticle *v6; // r4@1
  char *v7; // r0@1
  unsigned int v8; // r0@1
  int v9; // r12@1
  int result; // r0@1
  float v11; // r2@1
  __int64 v12; // kr08_8@1

  v5 = a3;
  v6 = this;
  Particle::setPos(this, a2);
  Particle::setSize(v6, 0.75);
  *((_DWORD *)v6 + 36) = *(_DWORD *)v5;
  *((_DWORD *)v6 + 37) = *((_DWORD *)v5 + 1);
  *((_DWORD *)v6 + 38) = *((_DWORD *)v5 + 2);
  v7 = Level::getRandom(*((Level **)v6 + 56));
  v8 = Random::_genRandInt32((Random *)v7);
  v9 = (int)v6 + 68;
  *((_DWORD *)v6 + 2) = v8 % 0xC | 0x30;
  *((_BYTE *)v6 + 212) = 0;
  *((_BYTE *)v6 + 213) = 0;
  *((_BYTE *)v6 + 214) = 0;
  *((_DWORD *)v6 + 20) = 1065185444;
  result = Color::WHITE;
  v11 = unk_283E614;
  v12 = qword_283E618;
  *(_DWORD *)v9 = Color::WHITE;
  *(float *)(v9 + 4) = v11;
  *(_DWORD *)(v9 + 8) = v12;
  *((_DWORD *)v6 + 20) = HIDWORD(v12);
  return result;
}


void *__fastcall FireworksSparkParticle::getParticleTexture(FireworksSparkParticle *this)
{
  return &Particle::PARTICLE_ATLAS;
}


int __fastcall FireworksSparkParticle::initFireworkData(int result, int _R1, float a3, bool a4, bool a5, int a6, int a7)
{
  *(_BYTE *)(result + 212) = a4;
  *(_BYTE *)(result + 213) = a5;
  *(float *)(result + 80) = a3;
  *(_BYTE *)(result + 214) = a6;
  if ( a6 == 1 )
  {
    __asm { VLDR            S8, =0.0039216 }
    _R12 = (unsigned __int16)a7 >> 8;
    _R3 = ((unsigned int)a7 >> 16) & 0xFF;
    __asm { VMOV            S0, R3 }
    _R3 = (unsigned __int8)a7;
    _R2 = (unsigned int)a7 >> 24;
    __asm
    {
      VMOV            S2, R12
      VMOV            S4, R3
      VMOV            S6, R2
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S6, S6
      VMUL.F32        S0, S0, S8
      VMUL.F32        S2, S2, S8
      VMUL.F32        S4, S4, S8
      VMUL.F32        S6, S6, S8
      VSTR            S0, [R0,#0xE4]
      VSTR            S2, [R0,#0xE8]
      VSTR            S4, [R0,#0xEC]
      VSTR            S6, [R0,#0xF0]
    }
  }
  _R2 = ((unsigned int)_R1 >> 16) & 0xFF;
  _R3 = (unsigned __int16)_R1 >> 8;
  _R1 = (unsigned __int8)_R1;
  __asm
    VLDR            S6, =0.0039216
    VMOV            S0, R2
    VMOV            S4, R1
    VMOV            S2, R3
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
  *(_DWORD *)(result + 80) = 1065353216;
    VMUL.F32        S0, S0, S6
    VMUL.F32        S2, S2, S6
    VMUL.F32        S4, S4, S6
    VSTR            S0, [R0,#0x44]
    VSTR            S2, [R0,#0x48]
    VSTR            S4, [R0,#0x4C]
  return result;
}


signed int __fastcall FireworksSparkParticle::render(int a1, int a2)
{
  int v3; // r8@1
  signed int result; // r0@5
  int v17; // r12@8
  int v18; // r2@8
  int v19; // r3@8
  int v20; // r4@8
  int v21; // r6@8
  int v22; // r7@8
  void *v23; // r0@8
  unsigned int *v24; // r2@11
  signed int v25; // r1@13
  int v26; // [sp+0h] [bp-40h]@8
  int v27; // [sp+4h] [bp-3Ch]@8
  int v28; // [sp+8h] [bp-38h]@8
  int v29; // [sp+Ch] [bp-34h]@8
  int v30; // [sp+10h] [bp-30h]@8
  int v31; // [sp+14h] [bp-2Ch]@8
  int v32; // [sp+18h] [bp-28h]@8
  int v33; // [sp+1Ch] [bp-24h]@8

  _R5 = a1;
  v3 = a2;
  if ( *(_BYTE *)(a1 + 214) && (_R0 = *(_DWORD *)(a1 + 8), _R1 = *(_DWORD *)(_R5 + 52), _R1 > _R0 / 2) )
  {
    _R2 = _R0 / 2;
    __asm
    {
      VMOV            S0, R1
      VMOV            S2, R2
      VLDR            S1, =0.2
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VMOV            S4, R0
      VCVT.F32.S32    S4, S4
      VLDR            S6, [R5,#0x44]
      VLDR            S8, [R5,#0xE4]
      VLDR            S10, [R5,#0xE8]
      VLDR            S12, [R5,#0xEC]
      VSUB.F32        S8, S8, S6
      VSUB.F32        S0, S2, S0
      VLDR            S14, [R5,#0xF0]
      VMOV.F32        S2, #1.0
      VMUL.F32        S8, S8, S1
      VDIV.F32        S0, S0, S4
      VADD.F32        S0, S0, S2
      VLDR            S2, [R5,#0x48]
      VLDR            S4, [R5,#0x4C]
      VADD.F32        S6, S8, S6
      VSUB.F32        S10, S10, S2
      VSUB.F32        S12, S12, S4
      VSUB.F32        S14, S14, S0
      VSTR            S6, [R5,#0x44]
      VMUL.F32        S10, S10, S1
      VMUL.F32        S12, S12, S1
      VMUL.F32        S14, S14, S1
      VADD.F32        S2, S2, S10
      VADD.F32        S4, S4, S12
      VADD.F32        S0, S0, S14
      VSTR            S2, [R5,#0x48]
      VSTR            S4, [R5,#0x4C]
      VSTR            S0, [R5,#0x50]
    }
  }
  else
    *(_DWORD *)(_R5 + 80) = 1065353216;
  _R1 = *(_DWORD *)(_R5 + 8);
  result = *(_DWORD *)(_R5 + 52);
  if ( !*(_BYTE *)(_R5 + 213) )
    goto LABEL_21;
  _R2 = 1431655766;
  __asm { SMMUL.W         R3, R1, R2 }
  if ( result < (signed int)(_R3 + (_R3 >> 31)) )
  _R3 = _R1 + result;
  __asm { SMMUL.W         R2, R3, R2 }
  if ( !((_R2 + (_R2 >> 31)) & 1) )
LABEL_21:
    TextureUVCoordinateSet::fromOldSystem(
      (TextureUVCoordinateSet *)&v26,
      *(_QWORD *)(_R5 + 216)
    + (*(_QWORD *)(_R5 + 216) >> 32)
    - 1
    - (signed int)(result * (*(_QWORD *)(_R5 + 216) >> 32)) / _R1);
    v17 = _R5 + 12;
    v18 = v27;
    v19 = v28;
    v20 = v29;
    v21 = v30;
    v22 = v31;
    *(_DWORD *)v17 = v26;
    *(_DWORD *)(v17 + 4) = v18;
    *(_DWORD *)(v17 + 8) = v19;
    *(_DWORD *)(v17 + 12) = v20;
    *(_DWORD *)(v17 + 16) = v21;
    *(_DWORD *)(v17 + 20) = v22;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(_R5 + 36),
      &v32);
    *(_DWORD *)(_R5 + 40) = v33;
    v23 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      }
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    result = Particle::render((Particle *)_R5, v3);
  return result;
}


int __fastcall FireworksSparkParticle::FireworksSparkParticle(int a1, int a2, int a3)
{
  BlockSource *v3; // r4@1
  int v4; // r5@1
  int result; // r0@1

  v3 = (BlockSource *)a2;
  v4 = a1;
  Particle::Particle(a1, a2, a3);
  *(_DWORD *)v4 = &off_26E65B4;
  *(_QWORD *)(v4 + 216) = 34359738560LL;
  *(_QWORD *)(v4 + 224) = (unsigned int)BlockSource::getLevel(v3);
  result = v4;
  *(_DWORD *)(v4 + 232) = 0;
  *(_DWORD *)(v4 + 236) = 0;
  *(_DWORD *)(v4 + 240) = 0;
  return result;
}
