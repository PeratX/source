

unsigned int __fastcall BlockForceFieldParticle::_getMaskedFadeout(BlockForceFieldParticle *this, int a2)
{
  return (a2 & 0x100u) >> 8;
}


void *__fastcall BlockForceFieldParticle::getParticleTexture(BlockForceFieldParticle *this)
{
  return &Particle::FORCEFIELD_ATLAS;
}


unsigned int __fastcall BlockForceFieldParticle::_getMaskedLifetime(BlockForceFieldParticle *this, int a2)
{
  return ((unsigned int)a2 >> 9) & 0xFF;
}


int __fastcall BlockForceFieldParticle::getParticleLightColor(int result, float a2)
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


int __fastcall BlockForceFieldParticle::BlockForceFieldParticle(int a1, int a2, int a3)
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
  char *v12; // r0@2
  unsigned int *v14; // r2@4
  signed int v15; // r1@6
  unsigned int *v16; // r2@8
  signed int v17; // r1@10
  char *v18; // [sp+18h] [bp-48h]@1
  int v19; // [sp+1Ch] [bp-44h]@1
  char v20; // [sp+20h] [bp-40h]@1
  int v21; // [sp+38h] [bp-28h]@1
  int v22; // [sp+3Ch] [bp-24h]@1

  v3 = a1;
  Particle::Particle(a1, a2, a3);
  *(_DWORD *)v3 = &off_26E6494;
  v18 = (char *)&unk_28898CC;
  v19 = 0;
  v4 = TextureUVCoordinateSet::TextureUVCoordinateSet(
         COERCE_FLOAT(&v20),
         0,
         1065353216,
         1.0,
         16,
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
  *(_DWORD *)(v3 + 40) = v22;
  v11 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v21 - 4);
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
  v12 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return v3;
}


int __fastcall BlockForceFieldParticle::_getMaskedAlpha(BlockForceFieldParticle *this, int a2)
{
  return (unsigned __int8)a2;
}


int __fastcall BlockForceFieldParticle::_calculateColor(BlockForceFieldParticle *this, Tessellator *a2)
{
  int v2; // r2@1
  float v8; // [sp+0h] [bp-18h]@7

  v2 = *((_BYTE *)this + 212);
  __asm
  {
    VLDR            S0, [R0,#0x44]
    VLDR            S2, [R0,#0x48]
    VLDR            S4, [R0,#0x4C]
    VLDR            S6, [R0,#0x50]
  }
  if ( !_ZF )
    __asm
    {
      VLDR            S8, [R0,#8]
      VMOV.F32        S12, #1.0
      VLDR            S10, [R0,#0x34]
      VCVT.F32.S32    S8, S8
      VCVT.F32.S32    S10, S10
      VDIV.F32        S8, S10, S8
      VLDR            S10, =1.1
      VSUB.F32        S8, S10, S8
      VLDR            S10, =0.0
      VCMPE.F32       S8, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S8, S12
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S10, S8 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S10, S12 }
    __asm { VMUL.F32        S6, S10, S6 }
    VLDR            S8, [R0,#0x54]
    VLDR            S10, [R0,#0x58]
    VLDR            S12, [R0,#0x5C]
    VMUL.F32        S0, S8, S0
    VLDR            S14, [R0,#0x60]
    VMUL.F32        S2, S10, S2
    VMUL.F32        S4, S12, S4
    VMUL.F32        S6, S14, S6
    VSTR            S0, [SP,#0x18+var_18]
    VSTR            S2, [SP,#0x18+var_14]
    VSTR            S4, [SP,#0x18+var_10]
    VSTR            S6, [SP,#0x18+var_C]
  return Tessellator::color(a2, (const Color *)&v8);
}


int __fastcall BlockForceFieldParticle::init(int result, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  __int64 v10; // kr00_8@1
  int v11; // r2@1
  int v12; // r12@1

  _R2 = (unsigned __int8)a4;
  __asm
  {
    VMOV            S0, R2
    VLDR            S2, =0.0039216
    VCVT.F32.S32    S0, S0
  }
  *(_DWORD *)(result + 104) = 2;
  v10 = Color::GREY;
  *(_DWORD *)(result + 76) = unk_283E628;
  *(_QWORD *)(result + 68) = v10;
  __asm { VMUL.F32        S0, S0, S2 }
  v11 = *(_DWORD *)(result + 160);
  v12 = *(_DWORD *)(result + 164);
  *(_DWORD *)(result + 168) = *(_DWORD *)(result + 156);
  *(_DWORD *)(result + 172) = v11;
  *(_DWORD *)(result + 176) = v12;
  __asm { VSTR            S0, [R0,#0x50] }
  *(_DWORD *)(result + 8) = ((unsigned int)a4 >> 9) & 0xFF;
  *(_BYTE *)(result + 212) = (unsigned __int8)a4 >> 8;
  return result;
}


int __fastcall BlockForceFieldParticle::generateParticleData(BlockForceFieldParticle *this, float a2, int a3, int a4)
{
  __asm
  {
    VLDR            S0, =255.0
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return _R0 | (LODWORD(a2) << 8) | (a3 << 9);
}


void __fastcall BlockForceFieldParticle::~BlockForceFieldParticle(BlockForceFieldParticle *this)
{
  BlockForceFieldParticle::~BlockForceFieldParticle(this);
}


signed int __fastcall BlockForceFieldParticle::render(int a1, int a2)
{
  Tessellator *v4; // r4@1
  int v5; // r0@1
  float v15; // ST00_4@7
  float v16; // ST04_4@7
  float v18; // ST00_4@7
  float v19; // ST04_4@7
  float v20; // ST00_4@7
  float v21; // ST04_4@7
  float v22; // ST00_4@7
  float v23; // ST04_4@7
  float v24; // ST00_4@7
  float v25; // ST04_4@7
  float v27; // ST00_4@7
  float v28; // ST04_4@7
  float v29; // ST00_4@7
  float v30; // ST04_4@7
  float v31; // ST00_4@7
  float v32; // ST04_4@7
  float v33; // ST00_4@7
  float v34; // ST04_4@7
  float v35; // ST00_4@7
  float v36; // ST04_4@7
  float v37; // ST00_4@7
  float v38; // ST04_4@7
  float v39; // ST00_4@7
  float v40; // ST04_4@7
  float v41; // ST00_4@7
  float v42; // ST04_4@7
  float v43; // ST00_4@7
  float v44; // ST04_4@7
  float v45; // ST00_4@7
  float v46; // ST04_4@7
  float v47; // ST00_4@7
  float v48; // ST04_4@7
  float v49; // ST00_4@7
  float v50; // ST04_4@7
  float v51; // ST00_4@7
  float v52; // ST04_4@7
  float v53; // ST00_4@7
  float v54; // ST04_4@7
  float v55; // ST00_4@7
  float v56; // ST04_4@7
  float v57; // ST00_4@7
  float v58; // ST04_4@7
  float v59; // ST00_4@7
  float v60; // ST04_4@7
  float v61; // ST00_4@7
  float v62; // ST04_4@7
  float v64; // [sp+0h] [bp-68h]@0
  float v65; // [sp+4h] [bp-64h]@0
  float v66; // [sp+8h] [bp-60h]@7

  _R6 = a2;
  _R5 = a1;
  v4 = *(Tessellator **)(a2 + 4);
  v5 = *(_BYTE *)(a1 + 212);
  __asm
  {
    VLDR            S0, [R5,#0x44]
    VLDR            S2, [R5,#0x48]
    VLDR            S4, [R5,#0x4C]
    VLDR            S6, [R5,#0x50]
  }
  if ( !_ZF )
    __asm
    {
      VLDR            S8, [R5,#8]
      VMOV.F32        S12, #1.0
      VLDR            S10, [R5,#0x34]
      VCVT.F32.S32    S8, S8
      VCVT.F32.S32    S10, S10
      VDIV.F32        S8, S10, S8
      VLDR            S10, =1.1
      VSUB.F32        S8, S10, S8
      VLDR            S10, =0.0
      VCMPE.F32       S8, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S8, S12
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S10, S8 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S10, S12 }
    __asm { VMUL.F32        S6, S10, S6 }
    VLDR            S8, [R5,#0x54]
    VLDR            S10, [R5,#0x58]
    VLDR            S12, [R5,#0x5C]
    VMUL.F32        S0, S8, S0
    VLDR            S14, [R5,#0x60]
    VMUL.F32        S2, S10, S2
    VMUL.F32        S4, S12, S4
    VMUL.F32        S6, S14, S6
    VSTR            S0, [SP,#0x68+var_60]
    VSTR            S2, [SP,#0x68+var_5C]
    VSTR            S4, [SP,#0x68+var_58]
    VSTR            S6, [SP,#0x68+var_54]
  Tessellator::color(v4, (const Color *)&v66);
    VLDR            S4, [R5,#0x9C]
    VLDR            S10, [R5,#0xA8]
    VLDR            S6, [R5,#0xA0]
    VLDR            S12, [R5,#0xAC]
    VSUB.F32        S4, S4, S10
    VLDR            S8, [R5,#0xA4]
    VLDR            S14, [R5,#0xB0]
    VSUB.F32        S6, S6, S12
    VLDR            S1, [R6,#0x14]
    VSUB.F32        S8, S8, S14
  _R0 = *(_DWORD *)(_R6 + 8);
    VLDR            S18, =0.501
    VLDR            S24, =-0.501
    VMUL.F32        S4, S4, S1
    VLDR            S0, [R5,#0x1C]
    VLDR            S2, [R5,#0x18]
    VMUL.F32        S6, S6, S1
    VMUL.F32        S8, S8, S1
    VADD.F32        S4, S4, S10
    VLDR            S10, [R0]
    VADD.F32        S6, S6, S12
    VLDR            S12, [R0,#4]
    VADD.F32        S8, S8, S14
    VLDR            S14, [R0,#8]
    VSTR            S2, [SP,#0x68+var_68]
    VSTR            S0, [SP,#0x68+var_64]
    VSUB.F32        S20, S4, S10
    VSUB.F32        S22, S6, S12
    VSUB.F32        S16, S8, S14
    VADD.F32        S4, S20, S18
    VADD.F32        S6, S22, S18
    VADD.F32        S8, S16, S24
    VMOV            R8, S4
    VMOV            R6, S6
    VMOV            R9, S8
  Tessellator::vertexUV(v4, _R8, _R6, _R9, v64, v65);
    VADD.F32        S0, S22, S24
    VMOV            R10, S0
    VLDR            S0, [R5,#0x14]
  Tessellator::vertexUV(v4, _R8, _R10, _R9, v15, v16);
    VADD.F32        S0, S20, S24
    VLDR            S2, [R5,#0x14]
    VMOV            R11, S0
    VLDR            S0, [R5,#0x10]
    VSTR            S0, [SP,#0x68+var_68]
    VSTR            S2, [SP,#0x68+var_64]
  Tessellator::vertexUV(v4, _R11, _R10, _R9, v18, v19);
    VLDR            S2, [R5,#0x1C]
  Tessellator::vertexUV(v4, _R11, _R6, _R9, v20, v21);
  Tessellator::vertexUV(v4, _R11, _R6, _R9, v22, v23);
  Tessellator::vertexUV(v4, _R11, _R10, _R9, v24, v25);
    VADD.F32        S0, S16, S18
    VMOV            R7, S0
  Tessellator::vertexUV(v4, _R11, _R10, _R7, v27, v28);
    VLDR            S0, [R5,#0x18]
  Tessellator::vertexUV(v4, _R11, _R6, _R7, v29, v30);
  Tessellator::vertexUV(v4, _R11, _R6, _R7, v31, v32);
  Tessellator::vertexUV(v4, _R8, _R6, _R7, v33, v34);
  Tessellator::vertexUV(v4, _R8, _R6, _R9, v35, v36);
  Tessellator::vertexUV(v4, _R11, _R6, _R9, v37, v38);
  Tessellator::vertexUV(v4, _R8, _R6, _R7, v39, v40);
  Tessellator::vertexUV(v4, _R8, _R10, _R7, v41, v42);
  Tessellator::vertexUV(v4, _R8, _R10, _R9, v43, v44);
  Tessellator::vertexUV(v4, _R8, _R6, _R9, v45, v46);
  Tessellator::vertexUV(v4, _R8, _R6, _R7, v47, v48);
  Tessellator::vertexUV(v4, _R11, _R6, _R7, v49, v50);
  Tessellator::vertexUV(v4, _R11, _R10, _R7, v51, v52);
  Tessellator::vertexUV(v4, _R8, _R10, _R7, v53, v54);
  Tessellator::vertexUV(v4, _R11, _R10, _R7, v55, v56);
  Tessellator::vertexUV(v4, _R11, _R10, _R9, v57, v58);
  Tessellator::vertexUV(v4, _R8, _R10, _R9, v59, v60);
  return Tessellator::vertexUV(v4, _R8, _R10, _R7, v61, v62);
}


void __fastcall BlockForceFieldParticle::~BlockForceFieldParticle(BlockForceFieldParticle *this)
{
  BlockForceFieldParticle *v1; // r4@1
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
