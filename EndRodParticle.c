

signed int __fastcall EndRodParticle::normalTick(EndRodParticle *this)
{
  signed int result; // r0@1

  _R4 = this;
  __asm { VLDR            S0, =0.005 }
  *((_DWORD *)this + 42) = *((_DWORD *)this + 39);
  *((_DWORD *)this + 43) = *((_DWORD *)this + 40);
  *((_DWORD *)this + 44) = *((_DWORD *)this + 41);
  __asm
  {
    VLDR            S4, [R4,#0xE8]
    VLDR            S2, [R4,#0x90]
    VMUL.F32        S4, S4, S0
    VLDR            S6, [R4,#0xEC]
    VLDR            S8, [R4,#0xF0]
    VADD.F32        S2, S2, S4
    VMUL.F32        S4, S6, S0
    VMUL.F32        S0, S8, S0
    VSTR            S2, [R4,#0x90]
    VLDR            S2, [R4,#0x94]
    VSTR            S2, [R4,#0x94]
    VLDR            S2, [R4,#0x98]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0x98]
  }
  result = Particle::move(this, (EndRodParticle *)((char *)this + 144));
    VLDR            S0, =0.51
    VMUL.F32        S2, S2, S0
    VMUL.F32        S0, S2, S0
  return result;
}


int __fastcall EndRodParticle::EndRodParticle(int a1, int a2, int a3)
{
  int result; // r0@1
  int v4; // lr@1

  result = Particle::Particle(a1, a2, a3);
  v4 = result + 212;
  *(_DWORD *)result = &off_26E6554;
  *(_DWORD *)(result + 220) = 0;
  *(_DWORD *)(result + 212) = 0;
  *(_DWORD *)(result + 216) = 0;
  *(_DWORD *)(result + 228) = 176;
  *(_DWORD *)(result + 232) = 0;
  *(_DWORD *)(result + 236) = 0;
  *(_DWORD *)(result + 240) = 0;
  *(_DWORD *)(result + 68) = 1065353216;
  *(_DWORD *)(result + 72) = 1065353216;
  *(_DWORD *)(result + 76) = 1065353216;
  *(_DWORD *)(result + 80) = 1065353216;
  *(_DWORD *)v4 = 1064497908;
  *(_DWORD *)(v4 + 4) = 1063182048;
  *(_DWORD *)(v4 + 8) = 1061800395;
  *(_DWORD *)(result + 224) = 0;
  *(_DWORD *)(result + 104) = 2;
  return result;
}


void __fastcall EndRodParticle::~EndRodParticle(EndRodParticle *this)
{
  EndRodParticle *v1; // r4@1
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


signed int __fastcall EndRodParticle::render(int a1, int a2)
{
  int v3; // r8@1
  int v13; // r0@4
  int v14; // r3@4
  int v15; // r4@4
  int v16; // r5@4
  int v17; // r6@4
  int v18; // r7@4
  void *v19; // r0@4
  unsigned int *v21; // r2@6
  signed int v22; // r1@8
  int v23; // [sp+0h] [bp-48h]@4
  int v24; // [sp+4h] [bp-44h]@4
  int v25; // [sp+8h] [bp-40h]@4
  int v26; // [sp+Ch] [bp-3Ch]@4
  int v27; // [sp+10h] [bp-38h]@4
  int v28; // [sp+14h] [bp-34h]@4
  int v29; // [sp+18h] [bp-30h]@4
  int v30; // [sp+1Ch] [bp-2Ch]@4

  _R10 = a1;
  v3 = a2;
  _R0 = *(_DWORD *)(a1 + 8);
  _R1 = *(_DWORD *)(_R10 + 52);
  if ( _R1 <= _R0 / 2 )
  {
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S2, S0
      VMOV            S0, R1
      VCVT.F32.S32    S0, S0
    }
    *(_DWORD *)(_R10 + 80) = 1065353216;
  }
  else
    _R2 = _R0 / 2;
      VMOV            S2, R2
      VLDR            S5, =0.2
      VCVT.F32.S32    S4, S2
      VMOV            S2, R0
      VMOV.F32        S6, #1.0
      VCVT.F32.S32    S2, S2
      VLDR            S8, [R10,#0x4C]
      VLDR            S1, [R10,#0xDC]
      VLDR            S10, [R10,#0x44]
      VLDR            S12, [R10,#0xD4]
      VSUB.F32        S1, S1, S8
      VSUB.F32        S4, S4, S0
      VLDR            S14, [R10,#0xD8]
      VLDR            S3, [R10,#0xE0]
      VSUB.F32        S12, S12, S10
      VMUL.F32        S1, S1, S5
      VDIV.F32        S4, S4, S2
      VADD.F32        S4, S4, S6
      VLDR            S6, [R10,#0x48]
      VMUL.F32        S12, S12, S5
      VSUB.F32        S14, S14, S6
      VADD.F32        S8, S8, S1
      VSUB.F32        S3, S3, S4
      VADD.F32        S10, S12, S10
      VMUL.F32        S14, S14, S5
      VMUL.F32        S3, S3, S5
      VSTR            S10, [R10,#0x44]
      VADD.F32        S6, S6, S14
      VADD.F32        S4, S4, S3
      VSTR            S6, [R10,#0x48]
      VSTR            S8, [R10,#0x4C]
      VSTR            S4, [R10,#0x50]
  __asm { VDIV.F32        S0, S0, S2 }
  _R0 = *(_DWORD *)(_R10 + 228);
  __asm
    VMOV.F32        S2, #1.0
    VMOV.F32        S4, #8.0
    VSUB.F32        S0, S2, S0
    VMOV            S2, R0
    VCVT.F32.S32    S2, S2
    VMUL.F32        S0, S0, S4
    VADD.F32        S0, S0, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R1, S0
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v23, _R1);
  v13 = _R10 + 12;
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
    (int *)(_R10 + 36),
    &v29);
  *(_DWORD *)(_R10 + 40) = v30;
  v19 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  return Particle::render((Particle *)_R10, v3);
}


void __fastcall EndRodParticle::~EndRodParticle(EndRodParticle *this)
{
  EndRodParticle::~EndRodParticle(this);
}


int __fastcall EndRodParticle::init(EndRodParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  EndRodParticle *v5; // r4@1
  const Vec3 *v6; // r5@1
  Random *v7; // r0@1
  int result; // r0@1

  v5 = this;
  v6 = a3;
  v7 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  *((_DWORD *)v5 + 2) = Random::_genRandInt32(v7) % 0xC + 60;
  *((_DWORD *)v5 + 13) = 0;
  *((_DWORD *)v5 + 58) = *(_DWORD *)v6;
  *((_DWORD *)v5 + 59) = *((_DWORD *)v6 + 1);
  *((_DWORD *)v5 + 60) = *((_DWORD *)v6 + 2);
  *((_QWORD *)v5 + 18) = *(_QWORD *)&Vec3::ZERO;
  result = dword_2822498;
  *((_DWORD *)v5 + 38) = dword_2822498;
  return result;
}
