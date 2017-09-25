

signed int __fastcall NoteParticle::render(Particle *a1, int a2)
{
  __asm
  {
    VLDR            S2, [R0,#0x34]
    VLDR            S0, [R0,#8]
    VLDR            S4, [R0,#0xD4]
    VCVT.F32.S32    S2, S2
    VLDR            S6, [R1,#0x14]
    VCVT.F32.S32    S0, S0
    VADD.F32        S2, S2, S6
    VMOV.F32        S6, #1.0
    VDIV.F32        S0, S2, S0
    VLDR            S2, =32.0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S6
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S2, S6 }
    VMUL.F32        S0, S2, S4
    VSTR            S0, [R0,#0x3C]
  return j_j_j__ZN8Particle6renderER21ParticleRenderContext_0(a1, a2);
}


int __fastcall NoteParticle::NoteParticle(int a1, int a2, int a3)
{
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
  *(_DWORD *)v3 = &off_26E66F0;
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v14, 64);
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
      j_j_j_j__ZdlPv_9(v10);
  }
  return v3;
}


int __fastcall NoteParticle::init(NoteParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  float v15; // r1@1
  float v18; // r1@1
  int result; // r0@1

  _R4 = this;
  __asm
  {
    VLDR            S0, =0.01
    VLDR            S2, [R4,#0x90]
  }
  _R5 = a3;
    VMUL.F32        S2, S2, S0
    VLDR            S6, =0.2
  _R0 = &mce::Math::PI;
    VSTR            S2, [R4,#0x90]
    VLDR            S2, [R4,#0x94]
    VLDR            S4, [R4,#0x98]
    VMUL.F32        S0, S4, S0
    VLDR            S4, [R0]
    VADD.F32        S16, S4, S4
    VADD.F32        S2, S2, S6
    VSTR            S0, [R4,#0x98]
    VSTR            S2, [R4,#0x94]
    VLDR            S0, [R5]
    VMUL.F32        S0, S0, S16
    VMOV            R0, S0
  _R0 = mce::Math::sin(_R0, *(float *)&a2);
    VLDR            S18, =0.65
    VMOV            S0, R0
    VLDR            S20, =0.35
    VMUL.F32        S0, S0, S18
    VLDR            S2, =0.33333
    VADD.F32        S0, S0, S20
    VSTR            S0, [R4,#0x44]
    VADD.F32        S0, S0, S2
    VMUL.F32        S0, S16, S0
  _R0 = mce::Math::sin(_R0, v15);
    VLDR            S2, =0.66667
    VSTR            S0, [R4,#0x48]
  _R0 = mce::Math::sin(_R0, v18);
    VMOV.F32        S2, #0.75
    VSTR            S0, [R4,#0x4C]
    VLDR            S0, [R4,#0x3C]
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R4,#0x3C]
    VSTR            S0, [R4,#0xD4]
  *((_DWORD *)_R4 + 2) = 6;
  result = 0;
  *((_BYTE *)_R4 + 180) = 0;
  return result;
}


NoteParticle *__fastcall NoteParticle::normalTick(NoteParticle *this)
{
  NoteParticle *result; // r0@4

  _R4 = this;
  *((_DWORD *)this + 42) = *((_DWORD *)this + 39);
  *((_DWORD *)this + 43) = *((_DWORD *)this + 40);
  *((_DWORD *)this + 44) = *((_DWORD *)this + 41);
  *((_DWORD *)this + 29) = *((_DWORD *)this + 28);
  Particle::move(this, (NoteParticle *)((char *)this + 144));
  __asm
  {
    VLDR            S2, [R4,#0xA0]
    VLDR            S4, [R4,#0xAC]
    VLDR            S0, [R4,#0x90]
    VCMPE.F32       S2, S4
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    __asm
    {
      VLDR            S2, =1.1
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R4,#0x90]
      VLDR            S4, [R4,#0x98]
      VMUL.F32        S2, S4, S2
      VSTR            S2, [R4,#0x98]
    }
  else
    __asm { VLDR            S2, [R4,#0x98] }
  __asm { VLDR            S4, =0.66 }
  result = (NoteParticle *)((char *)_R4 + 152);
    VMUL.F32        S6, S0, S4
    VSTR            S6, [R4,#0x90]
    VLDR            S6, [R4,#0x94]
    VMUL.F32        S6, S6, S4
    VMUL.F32        S4, S2, S4
    VSTR            S6, [R4,#0x94]
    VSTR            S4, [R4,#0x98]
  if ( *((_BYTE *)_R4 + 181) )
      VLDRNE          S4, =0.462
      VMULNE.F32      S0, S0, S4
      VMULNE.F32      S2, S2, S4
      VSTRNE          S0, [R5]
      VSTRNE          S2, [R0]
  return result;
}


void __fastcall NoteParticle::~NoteParticle(NoteParticle *this)
{
  NoteParticle::~NoteParticle(this);
}


void __fastcall NoteParticle::~NoteParticle(NoteParticle *this)
{
  NoteParticle *v1; // r4@1
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
