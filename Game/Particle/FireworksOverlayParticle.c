

_DWORD *__fastcall FireworksOverlayParticle::FireworksOverlayParticle(int a1, int a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Particle::Particle(a1, a2, a3);
  *result = &off_26E65E4;
  return result;
}


int __fastcall FireworksOverlayParticle::getParticleLightColor(int result, float a2)
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


signed int __fastcall FireworksOverlayParticle::init(FireworksOverlayParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  const Vec3 *v6; // r6@1
  FireworksOverlayParticle *v7; // r9@1
  int v13; // r0@1
  int v14; // r3@1
  int v15; // r4@1
  int v16; // r5@1
  int v17; // r6@1
  int v18; // r7@1
  void *v19; // r0@1
  signed int result; // r0@2
  unsigned int *v21; // r2@3
  signed int v22; // r1@5
  int v23; // [sp+0h] [bp-40h]@1
  int v24; // [sp+4h] [bp-3Ch]@1
  int v25; // [sp+8h] [bp-38h]@1
  int v26; // [sp+Ch] [bp-34h]@1
  int v27; // [sp+10h] [bp-30h]@1
  int v28; // [sp+14h] [bp-2Ch]@1
  int v29; // [sp+18h] [bp-28h]@1
  int v30; // [sp+1Ch] [bp-24h]@1

  _R5 = a4;
  v6 = a3;
  v7 = this;
  Particle::setPos(this, a2);
  __asm
  {
    VMOV            S0, R5
    VCVT.F32.S32    S0, S0
  }
  *((_DWORD *)v7 + 36) = *(_DWORD *)v6;
  *((_DWORD *)v7 + 37) = *((_DWORD *)v6 + 1);
  *((_DWORD *)v7 + 38) = *((_DWORD *)v6 + 2);
  __asm { VMOV            R1, S0 }
  Particle::setSize(v7, _R1);
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v23, 37);
  v13 = (int)v7 + 12;
  v14 = v24;
  v15 = v25;
  v16 = v26;
  v17 = v27;
  v18 = v28;
  *(_DWORD *)v13 = v23;
  *(_DWORD *)(v13 + 4) = v14;
  *(_DWORD *)(v13 + 8) = v15;
  *(_DWORD *)(v13 + 12) = v16;
  *(_DWORD *)(v13 + 16) = v17;
  *(_DWORD *)(v13 + 20) = v18;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v7 + 9,
    &v29);
  *((_DWORD *)v7 + 10) = v30;
  v19 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v29 - 4);
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
      j_j_j_j__ZdlPv_9(v19);
  *((_DWORD *)v7 + 2) = 4;
  result = 2;
  *((_DWORD *)v7 + 26) = 2;
  return result;
}


void *__fastcall FireworksOverlayParticle::getParticleTexture(FireworksOverlayParticle *this)
{
  return &Particle::PARTICLE_ATLAS;
}


void __fastcall FireworksOverlayParticle::~FireworksOverlayParticle(FireworksOverlayParticle *this)
{
  FireworksOverlayParticle::~FireworksOverlayParticle(this);
}


void __fastcall FireworksOverlayParticle::~FireworksOverlayParticle(FireworksOverlayParticle *this)
{
  FireworksOverlayParticle *v1; // r4@1
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


signed int __fastcall FireworksOverlayParticle::render(Particle *a1, int a2)
{
  __asm { VMOV.F32        S0, #1.0 }
  *((_DWORD *)a1 + 4) = 1048576000;
  *((_DWORD *)a1 + 6) = 1056964608;
  *((_DWORD *)a1 + 5) = 1040187392;
  *((_DWORD *)a1 + 7) = 1052770304;
  __asm
  {
    VLDR            S2, [R1,#0x14]
    VLDR            S4, [R0,#0x34]
    VSUB.F32        S0, S0, S2
    VCVT.F32.S32    S2, S4
    VMOV.F32        S4, #0.125
    VLDR            S2, =0.6
    VMUL.F32        S0, S0, S4
    VADD.F32        S0, S0, S2
    VSTR            S0, [R0,#0x50]
  }
  return j_j_j__ZN8Particle6renderER21ParticleRenderContext_0(a1, a2);
}
