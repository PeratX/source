

int __fastcall MobRenderer::setupRotations(int a1, float a2, int a3, int a4, int a5, int a6)
{
  float v13; // r1@1
  const void **v18; // r6@5
  int result; // r0@6
  int v23; // [sp+4h] [bp-6Ch]@1
  signed int v24; // [sp+8h] [bp-68h]@1
  int v25; // [sp+Ch] [bp-64h]@1
  int v26; // [sp+10h] [bp-60h]@1
  int v27; // [sp+14h] [bp-5Ch]@1
  int v28; // [sp+18h] [bp-58h]@1
  int v29; // [sp+1Ch] [bp-54h]@1
  int v30; // [sp+20h] [bp-50h]@1
  int v31; // [sp+24h] [bp-4Ch]@1
  int v32; // [sp+28h] [bp-48h]@1
  int v33; // [sp+2Ch] [bp-44h]@1
  int v34; // [sp+30h] [bp-40h]@1
  int v35; // [sp+34h] [bp-3Ch]@1
  int v36; // [sp+38h] [bp-38h]@1
  int v37; // [sp+3Ch] [bp-34h]@1
  int v38; // [sp+40h] [bp-30h]@1
  int v39; // [sp+44h] [bp-2Ch]@1
  int v40; // [sp+48h] [bp-28h]@1
  int v41; // [sp+4Ch] [bp-24h]@1
  int v42; // [sp+50h] [bp-20h]@1

  _R6 = a1;
  __asm
  {
    VLDR            S0, =180.0
    VLDR            S2, [R6,#0xC4]
  }
  _R4 = a2;
    VSUB.F32        S0, S0, S2
    VMOV            R0, S0
  v23 = 0;
  v24 = 1065353216;
  v25 = 0;
  v42 = mce::Math::wrapDegrees(_R0, a2);
  glm::rotate<float>((int)&v26, a5, (int)&v42, (int)&v23);
  *(_DWORD *)a5 = v26;
  *(_DWORD *)(a5 + 4) = v27;
  *(_DWORD *)(a5 + 8) = v28;
  *(_DWORD *)(a5 + 12) = v29;
  *(_DWORD *)(a5 + 16) = v30;
  *(_DWORD *)(a5 + 20) = v31;
  *(_DWORD *)(a5 + 24) = v32;
  *(_DWORD *)(a5 + 28) = v33;
  *(_DWORD *)(a5 + 32) = v34;
  *(_DWORD *)(a5 + 36) = v35;
  *(_DWORD *)(a5 + 40) = v36;
  *(_DWORD *)(a5 + 44) = v37;
  *(_DWORD *)(a5 + 48) = v38;
  *(_DWORD *)(a5 + 52) = v39;
  *(_DWORD *)(a5 + 56) = v40;
  *(_DWORD *)(a5 + 60) = v41;
  _R0 = *(_DWORD *)(LODWORD(_R4) + 3448);
  if ( _R0 >= 1 )
    __asm
    {
      VMOV.F32        S2, #-1.0
      VLDR            S0, [SP,#0x70+arg_4]
      VMOV            S4, R0
      VCVT.F32.S32    S4, S4
      VADD.F32        S0, S0, S2
      VLDR            S2, =0.08
      VADD.F32        S0, S0, S4
      VMUL.F32        S0, S0, S2
      VMOV            R0, S0
    }
    _R7 = mce::Math::sqrt(_R0, v13);
    _R0 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)_R6 + 64))(_R6, LODWORD(_R4));
      VMOV.F32        S0, #1.0
      VMOV            S2, R7
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S0 }
    __asm { VMOV            S0, R0 }
    v23 = 0;
    v24 = 0;
    __asm { VMUL.F32        S0, S0, S2 }
    v25 = 1065353216;
    __asm { VSTR            S0, [SP,#0x70+var_20] }
    glm::rotate<float>((int)&v26, a5, (int)&v42, (int)&v23);
    *(_DWORD *)a5 = v26;
    *(_DWORD *)(a5 + 4) = v27;
    *(_DWORD *)(a5 + 8) = v28;
    *(_DWORD *)(a5 + 12) = v29;
    *(_DWORD *)(a5 + 16) = v30;
    *(_DWORD *)(a5 + 20) = v31;
    *(_DWORD *)(a5 + 24) = v32;
    *(_DWORD *)(a5 + 28) = v33;
    *(_DWORD *)(a5 + 32) = v34;
    *(_DWORD *)(a5 + 36) = v35;
    *(_DWORD *)(a5 + 40) = v36;
    *(_DWORD *)(a5 + 44) = v37;
    *(_DWORD *)(a5 + 48) = v38;
    *(_DWORD *)(a5 + 52) = v39;
    *(_DWORD *)(a5 + 56) = v40;
    *(_DWORD *)(a5 + 60) = v41;
  v18 = (const void **)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(_R4) + 188))(LODWORD(_R4));
  if ( !sub_119C9E8(v18, "Dinnerbone") || (result = sub_119C9E8(v18, "Grumm")) == 0 )
    v42 = 1127481344;
    result = v30;
    _R1 = v31;
    _R2 = v32;
    __asm { VMOV            S12, R1 }
    _R3 = v33;
    __asm { VMOV            S14, R2 }
    __asm { VMOV            S1, R3 }
      VLDR            S8, =0.1
      VLDR            S10, [R4,#0x134]
      VLDR            S0, [SP,#0x70+var_30]
      VADD.F32        S8, S10, S8
      VLDR            S2, [SP,#0x70+var_2C]
      VMOV            S10, R0
      VLDR            S4, [SP,#0x70+var_28]
      VLDR            S6, [SP,#0x70+var_24]
      VMUL.F32        S10, S10, S8
      VMUL.F32        S12, S12, S8
      VMUL.F32        S14, S14, S8
      VMUL.F32        S8, S1, S8
      VSUB.F32        S0, S0, S10
      VSUB.F32        S2, S2, S12
      VSUB.F32        S4, S4, S14
      VSUB.F32        S6, S6, S8
      VSTR            S0, [R5,#0x30]
      VSTR            S2, [R5,#0x34]
      VSTR            S4, [R5,#0x38]
      VSTR            S6, [R5,#0x3C]
  return result;
}


mce::TexturePtr *__fastcall MobRenderer::renderLeash(int a1, BaseEntityRenderContext *a2, float *a3)
{
  int v4; // r10@1
  float *v5; // r6@1
  int v6; // r0@1
  int v7; // r7@1
  int v8; // r1@1
  mce::TexturePtr *result; // r0@1
  mce::TextureGroup *v15; // r6@5
  char *v16; // r0@5
  char *v17; // r0@6
  RopePoints *v18; // r6@8
  int v30; // r7@24
  int v31; // r0@24
  float v32; // ST14_4@24
  int v33; // r0@25
  unsigned int *v34; // r2@29
  signed int v35; // r1@31
  unsigned int *v36; // r2@33
  signed int v37; // r1@35
  float v38; // [sp+14h] [bp-114h]@0
  float v39; // [sp+24h] [bp-104h]@24
  float v40; // [sp+30h] [bp-F8h]@16
  float v41; // [sp+34h] [bp-F4h]@16
  float v42; // [sp+38h] [bp-F0h]@16
  float v43; // [sp+3Ch] [bp-ECh]@12
  float v44; // [sp+40h] [bp-E8h]@12
  float v45; // [sp+44h] [bp-E4h]@12
  RopePoints *v46; // [sp+48h] [bp-E0h]@8
  float v47; // [sp+50h] [bp-D8h]@11
  float v48; // [sp+5Ch] [bp-CCh]@11
  float v49; // [sp+68h] [bp-C0h]@7
  float v50; // [sp+6Ch] [bp-BCh]@7
  float v51; // [sp+70h] [bp-B8h]@7
  int v52; // [sp+74h] [bp-B4h]@7
  float v53; // [sp+78h] [bp-B0h]@7
  int v54; // [sp+7Ch] [bp-ACh]@7
  int v55; // [sp+80h] [bp-A8h]@7
  float v56; // [sp+84h] [bp-A4h]@7
  int v57; // [sp+88h] [bp-A0h]@7
  float v58; // [sp+8Ch] [bp-9Ch]@7
  float v59; // [sp+90h] [bp-98h]@7
  float v60; // [sp+94h] [bp-94h]@7
  float v61; // [sp+98h] [bp-90h]@7
  float v62; // [sp+9Ch] [bp-8Ch]@7
  int v63; // [sp+A0h] [bp-88h]@7
  char *v64; // [sp+A8h] [bp-80h]@5
  char *v65; // [sp+ACh] [bp-7Ch]@5
  int v66; // [sp+B0h] [bp-78h]@5
  char v67; // [sp+B4h] [bp-74h]@5

  _R4 = a2;
  v4 = a1;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  v7 = *(_DWORD *)v5;
  v8 = v6;
  result = *(mce::TexturePtr **)(*(_DWORD *)v5 + 3092);
  _ZF = result == 0;
  if ( result )
  {
    result = *(mce::TexturePtr **)(v7 + 64);
    _ZF = result == 0;
  }
  if ( !_ZF )
    result = (mce::TexturePtr *)*(_BYTE *)(v4 + 136);
    if ( !*(_BYTE *)(v4 + 136) )
    {
      __asm { VLDR            S0, [R4,#4] }
      _R11 = *((_DWORD *)v5 + 1);
      __asm { VSTR            S0, [SP,#0x128+var_128] }
      EntityShaderManager::_setupShaderParameters(v4, v8, *v5, COERCE_FLOAT(&Color::NIL));
      v15 = *(mce::TextureGroup **)(v4 + 132);
      sub_119C884((void **)&v64, "textures/entity/lead_rope");
      v65 = v64;
      v66 = 0;
      v64 = (char *)&unk_28898CC;
      mce::TextureGroup::getTexture((mce::TexturePtr *)&v67, v15, (int)&v65, 0);
      v16 = v65 - 12;
      if ( (int *)(v65 - 12) != &dword_28898C0 )
      {
        v34 = (unsigned int *)(v65 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
        }
        else
          v35 = (*v34)--;
        if ( v35 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v16);
      }
      v17 = v64 - 12;
      if ( (int *)(v64 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v64 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v17);
      v61 = 0.0;
      v62 = 0.0;
      v63 = 0;
      v59 = 0.0;
      v60 = 0.0;
      v55 = 0;
      v56 = 0.0;
      v57 = 0;
      v58 = 0.0;
      v53 = 0.0;
      v54 = 0;
      v49 = 0.0;
      v50 = 0.0;
      v51 = 0.0;
      v52 = 0;
      MobRenderer::_getLeashPins(
        (MobRenderer *)v4,
        (Entity *)v7,
        *((float *)_R4 + 1),
        (Vec3 *)&v61,
        (Vec3 *)&v58,
        (Vec3 *)&v55,
        (Vec3 *)&v52,
        (Vec3 *)&v49);
      if ( RopeSystem::sEnabled[0] )
        __asm
          VLDR            S0, =1.4583
          VLDR            S2, [SP,#0x128+var_8C]
          VADD.F32        S16, S2, S0
          VLDR            S2, [SP,#0x128+var_A4]
          VADD.F32        S0, S2, S0
          VMOV.F32        S2, #0.125
          VSTR            S16, [SP,#0x128+var_8C]
          VSTR            S0, [SP,#0x128+var_A4]
          VLDR            S0, [SP,#0x128+var_98]
          VADD.F32        S18, S0, S2
          VLDR            S0, [SP,#0x128+var_B0]
          VADD.F32        S0, S0, S2
          VSTR            S18, [SP,#0x128+var_98]
          VSTR            S0, [SP,#0x128+var_B0]
        RopeSystem::updatePins(*(RopeSystem **)(v7 + 64), (const Vec3 *)&v55, (const Vec3 *)&v52);
          VLDR            S20, [SP,#0x128+var_90]
          VLDR            S22, [SP,#0x128+var_88]
          VLDR            S24, [SP,#0x128+var_9C]
          VLDR            S26, [SP,#0x128+var_94]
        RopeSystem::getPoints((RopeSystem *)&v46, *(_DWORD *)(v7 + 64));
        v18 = v46;
        if ( RopePoints::size(v46) >= 2 )
          __asm
          {
            VSUB.F32        S2, S24, S20
            VSUB.F32        S0, S18, S16
            VSUB.F32        S6, S26, S22
            VMUL.F32        S4, S2, S2
            VSTR            S2, [SP,#0x128+var_EC]
            VMUL.F32        S8, S0, S0
            VSTR            S0, [SP,#0x128+var_E8]
            VMUL.F32        S10, S6, S6
            VSTR            S6, [SP,#0x128+var_E4]
            VADD.F32        S4, S8, S4
            VLDR            S8, =1.1921e-7
            VADD.F32        S4, S4, S10
            VSQRT.F32       S4, S4
            VCMPE.F32       S4, S8
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            _R1 = Vec3::UNIT_X[0];
            _R2 = Vec3::UNIT_X[1];
            _R0 = Vec3::UNIT_X[2];
            __asm { VMOV            S2, R1 }
            v43 = Vec3::UNIT_X[0];
            __asm { VMOV            S4, R2 }
            v44 = Vec3::UNIT_X[1];
            __asm { VMOV            S6, R0 }
            v45 = Vec3::UNIT_X[2];
          else
            __asm
            {
              VMOV.F32        S8, #1.0
              VDIV.F32        S8, S8, S4
              VMUL.F32        S2, S8, S2
              VMUL.F32        S4, S8, S0
              VMUL.F32        S6, S8, S6
              VSTR            S2, [SP,#0x128+var_EC]
              VSTR            S4, [SP,#0x128+var_E8]
              VSTR            S6, [SP,#0x128+var_E4]
            }
          _R0 = &Vec3::UNIT_Y;
            VLDR            S8, [R0,#4]
            VLDR            S10, [R0,#8]
            VLDR            S0, [R0]
            VMUL.F32        S12, S8, S6
            VMUL.F32        S14, S10, S4
            VMUL.F32        S1, S0, S6
            VMUL.F32        S10, S2, S10
            VMUL.F32        S3, S2, S8
            VMUL.F32        S0, S0, S4
          _R0 = &Vec3::ZERO;
            VSUB.F32        S8, S14, S12
            VSUB.F32        S10, S1, S10
            VSUB.F32        S12, S3, S0
            VCMPE.F32       S8, S0
            VSTR            S8, [SP,#0x128+var_F8]
            VSTR            S10, [SP,#0x128+var_F4]
            VSTR            S12, [SP,#0x128+var_F0]
          if ( _ZF )
            _R0 = &Vec3::ZERO;
              VLDR            S14, [R0,#4]
              VCMPE.F32       S10, S14
              VMRS            APSR_nzcv, FPSCR
            if ( _ZF )
              __asm
              {
                VLDREQ          S14, [R0,#8]
                VCMPEEQ.F32     S12, S14
                VMRSEQ          APSR_nzcv, FPSCR
              }
              _R1 = Vec3::UNIT_X[0];
              _R2 = Vec3::UNIT_X[1];
              _R0 = Vec3::UNIT_X[2];
              __asm { VMOV            S8, R1 }
              v40 = Vec3::UNIT_X[0];
              __asm { VMOV            S10, R2 }
              v41 = Vec3::UNIT_X[1];
              __asm { VMOV            S12, R0 }
              v42 = Vec3::UNIT_X[2];
            VMUL.F32        S14, S8, S8
            VMUL.F32        S1, S10, S10
            VMUL.F32        S3, S12, S12
            VMUL.F32        S5, S2, S12
            VMUL.F32        S7, S2, S10
            VMUL.F32        S9, S8, S4
            VADD.F32        S14, S1, S14
            VADD.F32        S14, S14, S3
            VMUL.F32        S3, S6, S10
            VMUL.F32        S6, S8, S6
            VSQRT.F32       S1, S14
            VMUL.F32        S14, S4, S12
            VSUB.F32        S4, S5, S6
            VSUB.F32        S6, S9, S7
            VSUB.F32        S2, S3, S14
            VLDR            S14, =0.0001
            VCMPE.F32       S1, S14
            VSTR            S2, [SP,#0x128+var_104]
            VSTR            S4, [SP,#0x128+var_100]
            VSTR            S6, [SP,#0x128+var_FC]
          if ( _NF ^ _VF )
            __asm { VMOV.F32        S1, S0 }
              VLDR            S10, [R0,#4]
              VLDR            S12, [R0,#8]
              VDIV.F32        S12, S12, S1
              VDIV.F32        S10, S10, S1
              VDIV.F32        S1, S8, S1
            VMUL.F32        S8, S2, S2
            VMUL.F32        S3, S4, S4
            VMUL.F32        S5, S6, S6
            VADD.F32        S8, S3, S8
            VADD.F32        S8, S8, S5
            VSQRT.F32       S3, S8
            VLDR            S8, =0.025
            VCMPE.F32       S3, S14
            VMUL.F32        S1, S1, S8
            VMUL.F32        S10, S10, S8
            VMUL.F32        S12, S12, S8
            VSTR            S1, [SP,#0x128+var_F8]
              VLDR            S4, [R0,#4]
              VLDR            S6, [R0,#8]
              VDIV.F32        S6, S6, S3
              VDIV.F32        S4, S4, S3
              VDIV.F32        S0, S2, S3
            VMUL.F32        S0, S0, S8
            VMUL.F32        S2, S4, S8
            VMUL.F32        S4, S6, S8
            VSTR            S0, [SP,#0x128+var_104]
            VSTR            S2, [SP,#0x128+var_100]
            VSTR            S4, [SP,#0x128+var_FC]
          if ( RopeSystem::isCut(*(RopeSystem **)(v7 + 64)) == 1 )
            v30 = RopeSystem::getCutNode(*(RopeSystem **)(v7 + 64));
              VLDR            S0, [R4,#4]
              VSTR            S0, [SP,#0x128+var_114]
            MobRenderer::_drawRopeRange(
              v4,
              _R4,
              0,
              v30 - 1,
              (int)&v40,
              (int)&v39,
              (int)&v43,
              (unsigned int)v18,
              (mce::TexturePtr *)&v67,
              v38,
              (int)&v61,
              0);
            v31 = RopePoints::size(v18);
              v30,
              v31,
              v32,
              (int)&v58);
            v33 = RopePoints::size(v18);
              v33,
        RopePointsRef::~RopePointsRef((RopePointsRef *)&v46);
      else
          VLDR            S0, [R11]
          VLDR            S6, [SP,#0x128+var_C0]
          VLDR            S2, [R11,#4]
          VLDR            S8, [SP,#0x128+var_BC]
          VADD.F32        S0, S6, S0
          VLDR            S4, [R11,#8]
          VLDR            S10, [SP,#0x128+var_B8]
          VADD.F32        S2, S8, S2
          VLDR            S6, [SP,#0x128+var_9C]
          VADD.F32        S4, S10, S4
          VLDR            S8, [SP,#0x128+var_98]
          VLDR            S10, [SP,#0x128+var_94]
          VSTR            S0, [SP,#0x128+var_CC]
          VLDR            S0, [SP,#0x128+var_90]
          VSTR            S2, [SP,#0x128+var_C8]
          VSUB.F32        S0, S6, S0
          VSTR            S4, [SP,#0x128+var_C4]
          VLDR            S4, [SP,#0x128+var_88]
          VSUB.F32        S2, S8, S2
          VSUB.F32        S4, S10, S4
          VSTR            S0, [SP,#0x128+var_D8]
          VSTR            S2, [SP,#0x128+var_D4]
          VSTR            S4, [SP,#0x128+var_D0]
        MobRenderer::_drawClassicLeash(v4, _R4, (int)&v48, (int)&v47, (int)&v67);
      result = mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v67);
    }
  return result;
}


int __fastcall MobRenderer::getSneakingHeightOffset(MobRenderer *this)
{
  return 0;
}


int __fastcall MobRenderer::getBob(MobRenderer *this, Mob *_R1, float _R2)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R1,#0x1A0]
    VMOV            S2, R2
    VCVT.F32.S32    S0, S0
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}


int __fastcall MobRenderer::_drawClassicLeash(MobRenderer *this, BaseEntityRenderContext *a2, const Vec3 *a3, const Vec3 *a4, mce::TexturePtr *a5)
{
  MobRenderer *v5; // r10@1
  Tessellator *v8; // r5@1
  float v19; // ST00_4@4
  mce::TexturePtr *v20; // r9@6
  int v21; // r0@7
  float v29; // ST00_4@11
  int result; // r0@13
  int v31; // r1@14
  float v32; // [sp+0h] [bp-78h]@0
  BaseEntityRenderContext *v33; // [sp+Ch] [bp-6Ch]@1

  v5 = this;
  _R7 = a4;
  _R4 = a3;
  v33 = a2;
  v8 = (Tessellator *)BaseEntityRenderContext::getTessellator(a2);
  Tessellator::begin((int)v8, 3, 48, 0);
  Tessellator::normal(v8, 0.0, 1.0, 0.0);
  __asm
  {
    VMOV.F32        S16, #24.0
    VLDR            S18, =0.041667
    VMOV.F32        S22, #0.125
    VLDR            S20, =0.055556
    VMOV.F32        S24, #0.5
    VLDR            S26, =0.0
    VMOV.F32        S28, #1.0
    VLDR            S30, =0.025
  }
  _R9 = 0;
  do
    __asm
    {
      VMOV            S0, R9
      VMOV.F32        S21, S26
      VCVT.F32.S32    S0, S0
      VLDR            S6, [R7]
      VLDR            S10, [R7,#8]
      VLDR            S8, [R7,#4]
      VLDR            S14, [R4,#4]
      VLDR            S1, [R4,#8]
      VLDR            S12, [R4]
    }
    if ( !_ZF )
      __asm { VMOVNE.F32      S21, S28 }
      VMUL.F32        S2, S0, S18
      VSTR            S21, [SP,#0x78+var_78]
      VSUB.F32        S0, S16, S0
      VMUL.F32        S4, S2, S2
      VMUL.F32        S0, S0, S20
      VMUL.F32        S6, S6, S2
      VADD.F32        S4, S4, S2
      VADD.F32        S0, S0, S22
      VMUL.F32        S2, S10, S2
      VADD.F32        S17, S6, S12
      VMUL.F32        S4, S4, S24
      VADD.F32        S0, S0, S14
      VADD.F32        S2, S2, S1
      VMOV            R1, S17
      VMUL.F32        S4, S4, S8
      VMOV            R6, S2
      VADD.F32        S19, S0, S4
      VMOV            R2, S19
    Tessellator::vertexUV(v8, _R1, _R2, _R6, v32, 0.0);
      VADD.F32        S0, S17, S30
      VADD.F32        S2, S19, S30
      VMOV            R1, S0
      VMOV            R2, S2
    Tessellator::vertexUV(v8, _R1, _R2, _R6, v19, 1.0);
    ++_R9;
  while ( _R9 != 25 );
  if ( Tessellator::forceTessellateIntercept(v8) )
    v20 = a5;
    Tessellator::triggerIntercept(v8, (MobRenderer *)((char *)v5 + 168), a5);
  else
    v21 = BaseEntityRenderContext::getScreenContext(v33);
    Tessellator::draw((char *)v8, v21, (int)v5 + 168, (int)a5);
  _R6 = 0;
      VMOV            S0, R6
      VMOV.F32        S23, S26
      VLDR            S8, [R4,#4]
      VLDR            S14, [R7,#4]
      VLDR            S12, [R7]
      VLDR            S1, [R7,#8]
      VLDR            S6, [R4]
      VLDR            S10, [R4,#8]
      __asm { VMOVNE.F32      S23, S28 }
      VSTR            S23, [SP,#0x78+var_78]
      VADD.F32        S0, S0, S8
      VMUL.F32        S8, S12, S2
      VMUL.F32        S2, S1, S2
      VMUL.F32        S4, S4, S14
      VADD.F32        S19, S8, S6
      VADD.F32        S21, S2, S10
      VADD.F32        S17, S0, S4
      VMOV            R1, S19
      VMOV            R3, S21
      VMOV            R2, S0
    Tessellator::vertexUV(v8, _R1, _R2, _R3, v32, 0.0);
      VADD.F32        S0, S19, S30
      VADD.F32        S2, S21, S30
      VMOV            R2, S17
      VMOV            R3, S2
    Tessellator::vertexUV(v8, _R1, _R2, _R3, v29, 1.0);
    ++_R6;
  while ( _R6 != 25 );
    result = j_j_j__ZN11Tessellator16triggerInterceptERKN3mce11MaterialPtrERKNS0_10TexturePtrE(
               v8,
               (MobRenderer *)((char *)v5 + 168),
               v20);
    v31 = BaseEntityRenderContext::getScreenContext(v33);
    result = j_j_j__ZN11Tessellator4drawER13ScreenContextRKN3mce11MaterialPtrERKNS2_10TexturePtrE_0(
               (char *)v8,
               v31,
               (int)v5 + 168,
               (int)v20);
  return result;
}


int __fastcall MobRenderer::renderModel(int a1, BaseEntityRenderContext *this, int a3, int a4, int a5)
{
  int v6; // r8@1
  __int64 *v8; // r4@1
  int v9; // r9@1
  int v11; // r0@1
  float v17; // r3@1
  float v19; // r3@1
  float v21; // r3@2
  float v24; // r1@3
  float v26; // r1@3
  float v29; // r1@12
  float v30; // r3@12
  int v37; // r1@19
  void (__fastcall *v38)(int, _DWORD, int *, int); // r4@19
  int v39; // r0@19
  void (__fastcall *v41)(int, _DWORD, int, int); // r10@19
  char *v44; // r0@19
  void (__fastcall *v46)(int, _DWORD, int, _DWORD); // r4@19
  int v47; // r0@19
  int v52; // r3@23
  float v54; // r1@23
  int v56; // r0@23
  int v57; // r4@25
  int v58; // r0@27
  __int64 v59; // r2@29
  int v60; // r3@29
  int v62; // [sp+1Ch] [bp-4Ch]@19
  int v63; // [sp+24h] [bp-44h]@19
  int v64; // [sp+28h] [bp-40h]@14
  char v65; // [sp+30h] [bp-38h]@1

  _R7 = a1;
  v6 = a4;
  _R11 = this;
  *(_DWORD *)(a4 + 32) = a5;
  v8 = (__int64 *)a3;
  v9 = BaseEntityRenderContext::getScreenContext(this);
  _KR00_8 = *v8;
  v11 = BaseEntityRenderContext::getWorldMatrix(_R11);
  MatrixStack::push((MatrixStack *)&v65, v11);
  _R0 = (*(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)_R7 + 56))(_R7, _KR00_8, *((_DWORD *)_R11 + 1));
  __asm
  {
    VMOV            S0, R0
    VSTR            S0, [R8,#0x14]
  }
  *(_BYTE *)(v6 + 25) = Entity::isRiding((Entity *)_KR00_8);
  *(_BYTE *)(v6 + 24) = Entity::isBaby((Entity *)_KR00_8);
  _R0 = mce::Math::lerpRotate(*(mce::Math **)(_KR00_8 + 3416), *(float *)(_KR00_8 + 3412), *((float *)_R11 + 1), v17);
    VSTR            S0, [R7,#0xC4]
  _R0 = mce::Math::lerpRotate(*(mce::Math **)(_KR00_8 + 3424), *(float *)(_KR00_8 + 3420), *((float *)_R11 + 1), v19);
    VSTR            S0, [R7,#0xC0]
  if ( Entity::isRiding((Entity *)_KR00_8) == 1 && Entity::hasCategory(*(_DWORD *)(_KR00_8 + 512), 2) == 1 )
    _R0 = mce::Math::lerpRotate(
            *(mce::Math **)(*(_DWORD *)(_KR00_8 + 512) + 3416),
            *(float *)(*(_DWORD *)(_KR00_8 + 512) + 3412),
            *((float *)_R11 + 1),
            v21);
    __asm
    {
      VMOV            S0, R0
      VSTR            S0, [R7,#0xC4]
      VLDR            S2, [R7,#0xC0]
      VSUB.F32        S0, S2, S0
      VMOV            R0, S0
    }
    _R0 = mce::Math::wrapDegrees(_R0, v24);
      VMOV            S2, R0
      VLDR            S0, =-85.0
      VLDR            S4, =85.0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S2, S4
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S2 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S0, S4 }
      VLDR            S4, =50.0
      VABS.F32        S2, S0
      __asm
      {
        VCMPE.F32       S0, #0.0
        VLDR            S4, =-50.0
        VMRS            APSR_nzcv, FPSCR
        VMOV.F32        S6, #0.75
        VADD.F32        S2, S2, S4
        VMOV.F32        S4, #-0.75
        VMUL.F32        S6, S2, S6
        VMUL.F32        S2, S2, S4
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S6, S2 }
      __asm { VADD.F32        S0, S6, S0 }
    _R0 = mce::Math::wrapDegrees(_R0, v26);
  if ( Entity::getStatusFlag(_KR00_8, 38) == 1 )
    _R0 = *(_DWORD *)(_KR00_8 + 416);
      VMOV.F32        S0, #3.25
      VCVT.F32.S32    S2, S2
      VMUL.F32        S0, S2, S0
    _R0 = mce::Math::cos(_R0, v29);
      VMOV.F32        S2, #0.25
    _R0 = &mce::Math::PI;
      VMUL.F32        S0, S0, S2
      VLDR            S2, [R0]
      VLDR            S2, [R7,#0xC4]
      VADD.F32        S0, S0, S2
  Entity::getInterpolatedRotation((Entity *)&v64, *(float *)&_KR00_8, *((float *)_R11 + 1), v30);
  *(_DWORD *)(_R7 + 200) = v64;
  if ( *(_BYTE *)(_R7 + 136) )
    *(_BYTE *)(_KR00_8 + 228) = 1;
    _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 76))(v6);
    __asm { VMOV            S16, R0 }
  else
    __asm { VLDR            S16, =0.0 }
  if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_KR00_8 + 312))(_KR00_8) == 1 )
    _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)_R7 + 80))(_R7);
    VNEG.F32        S0, S16
    VLDR            S2, [R5,#0x13C]
  v37 = *(_DWORD *)(HIDWORD(_KR00_8) + 8);
    VSUB.F32        S0, S0, S2
    VLDR            S2, [R4,#4]
  v38 = *(void (__fastcall **)(int, _DWORD, int *, int))(*(_DWORD *)_R7 + 48);
  v62 = *(_DWORD *)HIDWORD(_KR00_8);
    VADD.F32        S0, S0, S2
    VSTR            S0, [SP,#0x68+var_48]
  v63 = v37;
  v39 = MatrixStack::MatrixStackRef::operator*((int)&v65);
  v38(_R7, _KR00_8, &v62, v39);
  _R4 = (*(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)_R7 + 60))(_R7, _KR00_8, *((_DWORD *)_R11 + 1));
    VMOV            S0, R4
    VSTR            S0, [R7,#0xBC]
    VLDR            S16, [R7,#0xC4]
  v41 = *(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)_R7 + 52);
  MatrixStack::MatrixStackRef::operator*((int)&v65);
    VMOV            R3, S16
    VLDR            S0, [R11,#4]
    VSTR            S0, [SP,#0x68+var_64]
  v41(_R7, _KR00_8, _R4, _R3);
  *(_DWORD *)(_R7 + 204) = 1031798784;
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v65);
    VLDR            S0, [R0]
    VNEG.F32        S0, S0
    VSTR            S0, [R0]
    VLDR            S0, [R0,#4]
    VSTR            S0, [R0,#4]
    VLDR            S0, [R0,#8]
    VSTR            S0, [R0,#8]
    VLDR            S0, [R0,#0xC]
    VSTR            S0, [R0,#0xC]
    VLDR            S0, [R0,#0x10]
    VSTR            S0, [R0,#0x10]
    VLDR            S0, [R0,#0x14]
    VSTR            S0, [R0,#0x14]
    VLDR            S0, [R0,#0x18]
    VSTR            S0, [R0,#0x18]
    VLDR            S0, [R0,#0x1C]
    VSTR            S0, [R0,#0x1C]
  v44 = Entity::getEntityData((Entity *)_KR00_8);
  _R0 = SynchedEntityData::getFloat((SynchedEntityData *)v44, 39);
    VLDR            S2, [R7,#0xCC]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R7,#0xCC]
  v46 = *(void (__fastcall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)_R7 + 68);
  v47 = MatrixStack::MatrixStackRef::operator*((int)&v65);
  v46(_R7, _KR00_8, v47, *((_DWORD *)_R11 + 1));
    VMOV.F32        S0, #-24.0
    VLDR            S4, [R0,#0x18]
    VLDR            S6, [R0,#0x1C]
    VLDR            S8, [R0,#0x10]
    VLDR            S10, [R0,#0x34]
    VLDR            S12, [R0,#0x38]
    VLDR            S14, [R0,#0x3C]
    VLDR            S2, =-0.0078125
    VLDR            S2, [R0,#0x14]
    VMUL.F32        S2, S2, S0
    VMUL.F32        S4, S4, S0
    VMUL.F32        S8, S0, S8
    VMUL.F32        S0, S6, S0
    VLDR            S6, [R0,#0x30]
    VADD.F32        S2, S10, S2
    VADD.F32        S4, S12, S4
    VADD.F32        S6, S6, S8
    VADD.F32        S0, S14, S0
    VSTR            S6, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S0, [R0,#0x3C]
  _R0 = _KR00_8 + 3480;
    VLDR            S6, [R11,#4]
  _R0 = _KR00_8 + 3484;
  __asm { VLDR            S2, [R0] }
  _R0 = _KR00_8 + 3488;
    VSUB.F32        S4, S2, S0
    VMUL.F32        S4, S4, S6
    VADD.F32        S0, S4, S0
    VMOV.F32        S4, #-1.0
    VSTR            S0, [R7,#0xB8]
    VADD.F32        S0, S0, S4
    VMUL.F32        S0, S0, S2
    VLDR            S2, [R0]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R7,#0xB4]
  if ( Entity::isBaby((Entity *)_KR00_8) == 1 )
      VMOVEQ.F32      S0, #1.5
      VLDREQ          S2, [R7,#0xB4]
      VMULEQ.F32      S0, S2, S0
      VSTREQ          S0, [R7,#0xB4]
    VMOV.F32        S0, #1.0
    VLDR            S2, [R7,#0xB8]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    *(_DWORD *)(_R7 + 184) = 1065353216;
  v52 = *((_DWORD *)_R11 + 1);
  EntityShaderManager::_setupShaderParameters(_R7, v9, *(float *)&_KR00_8);
    VLDR            S0, [R7,#0xC0]
    VLDR            S2, [R7,#0xC4]
    VMOV            R0, S0
  _R4 = mce::Math::wrapDegrees(_R0, v54);
  v56 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_KR00_8 + 400))(_KR00_8);
  __asm { VMOV            S16, R4 }
  if ( v56 == 1 )
      VLDR            S0, [R11,#4]
      VSTR            S0, [SP,#0x68+var_68]
    (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 68))(
      v6,
      _KR00_8,
      *(_QWORD *)(_R7 + 180),
      *(_QWORD *)(_R7 + 180) >> 32);
      VLDR            S0, [R7,#0xBC]
      VLDR            S2, [R7,#0xB8]
      VLDR            S4, [R7,#0xC8]
      VLDR            S6, [R7,#0xCC]
      VSTR            S2, [SP,#0x68+var_68]
      VSTR            S0, [SP,#0x68+var_64]
      VSTR            S16, [SP,#0x68+var_60]
      VSTR            S4, [SP,#0x68+var_5C]
      VSTR            S6, [SP,#0x68+var_58]
    (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v6 + 60))(v6, v9, _KR00_8, *(_DWORD *)(_R7 + 180));
      VLDR            S2, [R7,#0xC8]
      VLDR            S4, [R7,#0xCC]
      VSTR            S16, [SP,#0x68+var_64]
      VSTR            S2, [SP,#0x68+var_60]
    (*(void (__fastcall **)(int, BaseEntityRenderContext *, _DWORD, _DWORD))(*(_DWORD *)_R7 + 76))(
      _R7,
      _R11,
      *((_DWORD *)_R11 + 1));
  v57 = 0;
  do
    if ( (*(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)_R7 + 40))(_R7, v9, _KR00_8, HIDWORD(_KR00_8)) >= 0 )
      v58 = *(_DWORD *)(_R7 + 208);
      if ( v58 )
        *(_BYTE *)(v58 + 25) = *(_BYTE *)(v6 + 25);
        *(_BYTE *)(v58 + 24) = *(_BYTE *)(v6 + 24);
        *(_DWORD *)(v58 + 20) = *(_DWORD *)(v6 + 20);
      v59 = *(_QWORD *)(_R7 + 180);
        VLDR            S0, [R11,#4]
        VSTR            S0, [SP,#0x68+var_68]
      (*(void (__cdecl **)(int))(*(_DWORD *)v58 + 68))(v58);
        VLDR            S0, [R7,#0xC8]
        VLDR            S2, [R7,#0xCC]
        VLDR            S4, [R7,#0xBC]
        VLDR            S6, [R7,#0xB8]
      v60 = *(_DWORD *)(_R7 + 180);
        VSTR            S6, [SP,#0x68+var_68]
        VSTR            S4, [SP,#0x68+var_64]
        VSTR            S16, [SP,#0x68+var_60]
        VSTR            S0, [SP,#0x68+var_5C]
        VSTR            S2, [SP,#0x68+var_58]
      (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(_R7 + 208) + 60))(*(_DWORD *)(_R7 + 208));
    ++v57;
  while ( v57 != 4 );
    VLDR            S0, [R7,#0xB8]
    VLDR            S2, [R7,#0xBC]
    VLDR            S4, [R7,#0xB4]
    VLDR            S6, [R7,#0xC8]
    VLDR            S8, [R7,#0xCC]
    VSTR            S4, [SP,#0x68+var_68]
    VSTR            S2, [SP,#0x68+var_60]
    VSTR            S16, [SP,#0x68+var_5C]
    VSTR            S6, [SP,#0x68+var_58]
    VSTR            S8, [SP,#0x68+var_54]
  (*(void (__fastcall **)(int, BaseEntityRenderContext *, int, _DWORD))(*(_DWORD *)_R7 + 72))(_R7, _R11, v6, _KR00_8);
  *(_BYTE *)(_KR00_8 + 228) = 0;
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v65);
}


int __fastcall MobRenderer::render(int a1, BaseEntityRenderContext *a2, int *a3)
{
  int v3; // r6@1
  int *v4; // r4@1
  BaseEntityRenderContext *v5; // r5@1
  int v6; // r1@1
  int v7; // r7@1
  int v8; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = *a3;
  v7 = *(_DWORD *)(a1 + 140);
  v8 = (*(int (**)(void))(*(_DWORD *)a1 + 84))();
  return MobRenderer::renderModel(v3, v5, (int)v4, v7, v8);
}


int __fastcall MobRenderer::_drawClassicLeash(int a1, BaseEntityRenderContext *this, int a3, int a4, int a5)
{
  return MobRenderer::_drawClassicLeash(
           (MobRenderer *)a1,
           this,
           (const Vec3 *)a3,
           (const Vec3 *)a4,
           (mce::TexturePtr *)a5);
}


void __fastcall MobRenderer::setupPosition(int a1, int a2, int _R2, int _R3)
{
  MobRenderer::setupPosition(a1, a2, _R2, _R3);
}


Tessellator *__fastcall MobRenderer::_drawRopeRange(int a1, BaseEntityRenderContext *this, int a3, int a4, int a5, int a6, int a7, unsigned int a8, mce::TexturePtr *a9, float a10, int a11, int a12)
{
  return MobRenderer::_drawRopeRange(
           (MobRenderer *)a1,
           this,
           a3,
           a4,
           (const Vec3 *)a5,
           (const Vec3 *)a6,
           (const Vec3 *)a7,
           (const RopePoints *)a8,
           a9,
           a10,
           (Vec3 *)a11,
           (Vec3 *)a12);
}


int __fastcall MobRenderer::_calcLeashOffset(MobRenderer *this, Vec3 *a2, float a3)
{
  int result; // r0@1
  int v20; // r1@1
  int v21; // r2@1
  __int64 v22; // [sp+0h] [bp-F0h]@1
  __int64 v23; // [sp+8h] [bp-E8h]@1
  __int64 v24; // [sp+10h] [bp-E0h]@1
  __int64 v25; // [sp+18h] [bp-D8h]@1
  __int64 v26; // [sp+20h] [bp-D0h]@1
  __int64 v27; // [sp+28h] [bp-C8h]@1
  float v28; // [sp+40h] [bp-B0h]@1
  __int64 v29; // [sp+50h] [bp-A0h]@1
  __int64 v30; // [sp+58h] [bp-98h]@1
  __int64 v31; // [sp+70h] [bp-80h]@1
  __int64 v32; // [sp+78h] [bp-78h]@1
  char v33; // [sp+80h] [bp-70h]@1
  int v34; // [sp+B0h] [bp-40h]@1
  int v35; // [sp+B4h] [bp-3Ch]@1
  int v36; // [sp+B8h] [bp-38h]@1

  _R4 = a2;
  _R6 = a3;
  _aeabi_memclr8(&v28, 56);
  __asm
  {
    VLDR            S0, =0.017453
    VMOV            S2, R6
    VMUL.F32        S0, S2, S0
    VMOV            R6, S0
  }
  _R7 = cosf(_R6);
  _R0 = sinf(_R6);
    VMOV            S2, R0
    VMOV            S6, R7
  _R5 = &Matrix::IDENTITY;
    VLDR            S0, [R5,#0x24]
    VLDR            S4, [R5,#0x20]
    VLDR            S8, [R5]
    VMUL.F32        S1, S0, S2
    VLDR            S10, [R5,#4]
    VMUL.F32        S3, S4, S2
    VMUL.F32        S9, S8, S6
    VLDR            S12, [R5,#8]
    VMUL.F32        S7, S10, S6
    VLDR            S14, [R5,#0xC]
    VLDR            S5, [R5,#0x28]
    VMUL.F32        S15, S12, S6
    VLDR            S11, [R5,#0x2C]
    VMUL.F32        S18, S14, S6
    VMUL.F32        S13, S5, S2
    VMUL.F32        S16, S11, S2
    VMUL.F32        S8, S8, S2
    VSUB.F32        S3, S9, S3
    VSUB.F32        S1, S7, S1
    VMUL.F32        S4, S4, S6
    VMUL.F32        S10, S10, S2
    VMUL.F32        S0, S0, S6
    VMUL.F32        S12, S12, S2
    VMUL.F32        S2, S14, S2
    VSTR            S3, [SP,#0xF0+var_B0]
    VSUB.F32        S7, S15, S13
    VSTR            S1, [SP,#0xF0+var_AC]
    VMUL.F32        S1, S5, S6
    VMUL.F32        S6, S11, S6
    VSUB.F32        S9, S18, S16
    VADD.F32        S4, S4, S8
    VADD.F32        S0, S0, S10
    VSTR            S7, [SP,#0xF0+var_A8]
    VADD.F32        S8, S1, S12
    VADD.F32        S2, S6, S2
    VSTR            S9, [SP,#0xF0+var_A4]
  v29 = qword_27E89F8;
  v30 = qword_27E8A00;
    VSTR            S4, [SP,#0xF0+var_90]
    VSTR            S0, [SP,#0xF0+var_8C]
    VSTR            S8, [SP,#0xF0+var_88]
    VSTR            S2, [SP,#0xF0+var_84]
  v31 = *(_QWORD *)&qword_27E8A18;
  v32 = *(_QWORD *)&qword_27E8A20;
  _aeabi_memclr8(&v22, 56);
  _R0 = *(_QWORD *)&Matrix::IDENTITY;
  _R2 = qword_27E89F0;
  __asm { VMOV            S0, R0 }
  _R7 = qword_27E89F8;
  __asm { VMOV            S2, R1 }
  _R6 = HIDWORD(qword_27E89F8);
  __asm { VMOV            S4, R2 }
  v22 = *(_QWORD *)&Matrix::IDENTITY;
    VMOV            S6, R3
    VMOV            S8, R7
  _R0 = qword_27E8A00;
  __asm { VMOV            S10, R6 }
  v23 = qword_27E89F0;
  __asm { VMOV            S12, R0 }
  v24 = qword_27E89F8;
  __asm { VMOV            S5, R1 }
  _R2 = qword_27E8A08;
  __asm { VMOV            S7, R2 }
  v25 = qword_27E8A00;
  __asm { VMOV            S9, R3 }
  v26 = qword_27E8A08;
  v27 = qword_27E8A10;
    VLDR            S14, [R4]
    VLDR            S1, [R4,#4]
    VMUL.F32        S0, S0, S14
    VLDR            S3, [R4,#8]
    VMUL.F32        S8, S8, S1
    VMUL.F32        S2, S2, S14
    VMUL.F32        S10, S10, S1
    VMUL.F32        S4, S4, S14
    VMUL.F32        S12, S12, S1
    VMUL.F32        S6, S6, S14
    VMUL.F32        S14, S5, S1
    VMOV            S1, R7
    VMOV            S5, R6
    VADD.F32        S0, S8, S0
    VMUL.F32        S7, S7, S3
    VADD.F32        S2, S10, S2
    VMUL.F32        S8, S9, S3
    VADD.F32        S4, S12, S4
    VMUL.F32        S10, S1, S3
    VADD.F32        S6, S14, S6
    VLDR            S14, [R5,#0x3C]
    VMUL.F32        S12, S5, S3
    VADD.F32        S0, S0, S7
    VADD.F32        S2, S2, S8
    VLDR            S8, [R5,#0x30]
    VADD.F32        S4, S4, S10
    VLDR            S10, [R5,#0x34]
    VADD.F32        S6, S6, S12
    VLDR            S12, [R5,#0x38]
    VADD.F32        S0, S0, S8
    VADD.F32        S2, S2, S10
    VADD.F32        S4, S4, S12
    VADD.F32        S6, S6, S14
    VSTR            S0, [SP,#0xF0+var_C0]
    VSTR            S2, [SP,#0xF0+var_BC]
    VSTR            S4, [SP,#0xF0+var_B8]
    VSTR            S6, [SP,#0xF0+var_B4]
  glm::detail::operator*<float>((int)&v33, (int)&v28, (int)&v22);
  result = v34;
  v20 = v35;
  v21 = v36;
  *(_DWORD *)_R4 = v34;
  *((_DWORD *)_R4 + 1) = v20;
  *((_DWORD *)_R4 + 2) = v21;
  return result;
}


void __fastcall MobRenderer::setupPosition(int a1, int a2, int _R2, int _R3)
{
  __asm
  {
    VLDR            S0, [R3]
    VLDR            S8, [R2]
    VLDR            S2, [R3,#4]
    VLDR            S10, [R2,#4]
    VMUL.F32        S0, S0, S8
    VLDR            S14, [R3,#0x14]
    VMUL.F32        S2, S2, S8
    VLDR            S1, [R3,#0x10]
    VLDR            S4, [R3,#8]
    VMUL.F32        S14, S14, S10
    VLDR            S6, [R3,#0xC]
    VMUL.F32        S1, S1, S10
    VLDR            S3, [R3,#0x18]
    VMUL.F32        S4, S4, S8
    VLDR            S5, [R3,#0x1C]
    VMUL.F32        S6, S6, S8
    VMUL.F32        S3, S3, S10
    VLDR            S12, [R2,#8]
    VMUL.F32        S10, S5, S10
    VLDR            S7, [R3,#0x20]
    VLDR            S8, [R3,#0x24]
    VMUL.F32        S5, S7, S12
    VLDR            S7, [R3,#0x28]
    VADD.F32        S0, S1, S0
    VADD.F32        S2, S14, S2
    VLDR            S14, [R3,#0x2C]
    VMUL.F32        S8, S8, S12
    VMUL.F32        S1, S7, S12
    VADD.F32        S4, S3, S4
    VADD.F32        S6, S10, S6
    VLDR            S10, [R3,#0x34]
    VMUL.F32        S12, S14, S12
    VADD.F32        S0, S0, S5
    VADD.F32        S2, S2, S8
    VLDR            S8, [R3,#0x30]
    VADD.F32        S4, S4, S1
    VADD.F32        S6, S6, S12
    VLDR            S12, [R3,#0x38]
    VADD.F32        S0, S0, S8
    VLDR            S8, [R3,#0x3C]
    VADD.F32        S2, S2, S10
    VADD.F32        S4, S4, S12
    VADD.F32        S6, S6, S8
    VSTR            S0, [R3,#0x30]
    VSTR            S2, [R3,#0x34]
    VSTR            S4, [R3,#0x38]
    VSTR            S6, [R3,#0x3C]
  }
}


Tessellator *__fastcall MobRenderer::_drawRopeRange(MobRenderer *this, BaseEntityRenderContext *a2, int a3, int a4, const Vec3 *a5, const Vec3 *a6, const Vec3 *a7, const RopePoints *a8, mce::TexturePtr *a9, float a10, Vec3 *a11, Vec3 *a12)
{
  BaseEntityRenderContext *v12; // r10@1
  MobRenderer *v13; // r7@1
  int v14; // r4@1
  Tessellator *result; // r0@1
  int *v20; // r8@2
  float *v21; // r6@2
  Tessellator *v38; // r7@6
  float v40; // r9@8
  Tessellator *v42; // r7@11
  Tessellator *v46; // r7@13
  int v49; // r0@16
  mce::MaterialPtr *v51; // [sp+18h] [bp-140h]@2
  int v52; // [sp+28h] [bp-130h]@4
  int v53; // [sp+2Ch] [bp-12Ch]@1
  int v54; // [sp+30h] [bp-128h]@1
  int v55; // [sp+34h] [bp-124h]@5
  Tessellator *v56; // [sp+38h] [bp-120h]@1
  int v57; // [sp+3Ch] [bp-11Ch]@5
  int v58; // [sp+40h] [bp-118h]@5
  int v59; // [sp+44h] [bp-114h]@5
  int v60; // [sp+48h] [bp-110h]@5
  int v61; // [sp+4Ch] [bp-10Ch]@5
  int v62; // [sp+50h] [bp-108h]@5
  float v63; // [sp+54h] [bp-104h]@9
  int v66; // [sp+60h] [bp-F8h]@5
  int v67; // [sp+64h] [bp-F4h]@5
  int v68; // [sp+68h] [bp-F0h]@5
  int v69; // [sp+6Ch] [bp-ECh]@5
  int v70; // [sp+70h] [bp-E8h]@5
  int v71; // [sp+74h] [bp-E4h]@5
  int v72; // [sp+78h] [bp-E0h]@5
  int v73; // [sp+7Ch] [bp-DCh]@5
  int v74; // [sp+80h] [bp-D8h]@5
  int v75; // [sp+84h] [bp-D4h]@5
  int v76; // [sp+88h] [bp-D0h]@5
  int v77; // [sp+8Ch] [bp-CCh]@5
  int v78; // [sp+90h] [bp-C8h]@5
  int v79; // [sp+94h] [bp-C4h]@5
  int v80; // [sp+98h] [bp-C0h]@5
  int v81; // [sp+9Ch] [bp-BCh]@5
  int v82; // [sp+A4h] [bp-B4h]@2
  int v83; // [sp+A8h] [bp-B0h]@5
  int v84; // [sp+ACh] [bp-ACh]@5
  int v85; // [sp+B0h] [bp-A8h]@5
  int v86; // [sp+B4h] [bp-A4h]@5
  int v87; // [sp+B8h] [bp-A0h]@5
  int v88; // [sp+BCh] [bp-9Ch]@5
  int v89; // [sp+C0h] [bp-98h]@5
  int v90; // [sp+C4h] [bp-94h]@5
  int v91; // [sp+C8h] [bp-90h]@5
  int v92; // [sp+CCh] [bp-8Ch]@5
  int v93; // [sp+D0h] [bp-88h]@5
  int v94; // [sp+D4h] [bp-84h]@5
  int v95; // [sp+D8h] [bp-80h]@5
  int v96; // [sp+DCh] [bp-7Ch]@5
  int v97; // [sp+E0h] [bp-78h]@5
  float v98; // [sp+E4h] [bp-74h]@2

  v12 = a2;
  v13 = this;
  v53 = a4;
  v54 = a3;
  v14 = a4 - a3;
  result = (Tessellator *)BaseEntityRenderContext::getTessellator(a2);
  v56 = result;
  if ( v14 >= 1 )
  {
    __asm
    {
      VMOV.F32        S18, #1.0
      VLDR            S16, =0.0
    }
    v20 = &v82;
    v51 = (MobRenderer *)((char *)v13 + 168);
    v21 = &v98;
      VMOV.F32        S0, S16
      VLDR            S27, [SP,#0x158+arg_14]
    if ( v53 & 1 )
      __asm { VMOVNE.F32      S0, S18 }
    v52 = 4 * v14;
    __asm { VSTR            S0, [SP,#0x158+var_144] }
    _R1 = 0;
    do
      _R0 = a6;
      __asm { VMOV            S0, R1 }
      v55 = _R1;
      __asm
      {
        VLDR            S2, =90.0
        VLDR            S30, [R0]
        VLDR            S17, [R0,#4]
        VLDR            S26, [R0,#8]
      }
      _R0 = a5;
        VLDR            S19, [R0]
        VLDR            S21, [R0,#4]
        VLDR            S28, [R0,#8]
        VCVT.F32.S32    S0, S0
      v66 = 1065353216;
      *(_DWORD *)((unsigned int)&v66 | 4) = 0;
      *(_DWORD *)(((unsigned int)&v66 | 4) + 4) = 0;
      *(_DWORD *)(((unsigned int)&v66 | 4) + 8) = 0;
      *(_DWORD *)(((unsigned int)&v66 | 4) + 0xC) = 0;
      __asm { VMUL.F32        S0, S0, S2 }
      v71 = 1065353216;
      v72 = 0;
      v73 = 0;
      v74 = 0;
      v75 = 0;
      v76 = 1065353216;
      v77 = 0;
      v78 = 0;
      v79 = 0;
      v80 = 0;
      v81 = 1065353216;
      __asm { VSTR            S0, [SP,#0x158+var_74] }
      glm::rotate<float>((int)v20, (int)&v66, (int)v21, (int)a7);
      v60 = v82;
      v66 = v82;
      v57 = v83;
      v67 = v83;
      v59 = v84;
      v68 = v84;
      v69 = v85;
      _R4 = v86;
      _R8 = v87;
      _R5 = v88;
      v70 = v86;
      v71 = v87;
      v72 = v88;
      v73 = v89;
      _R9 = v90;
      _R6 = v91;
      v74 = v90;
      v75 = v91;
      v58 = v92;
      v76 = v92;
      v77 = v93;
      _R11 = v94;
      v78 = v94;
      v62 = v95;
      v79 = v95;
      v61 = v96;
      v80 = v96;
      v81 = v97;
      Tessellator::begin((int)v56, 3, v52, 0);
      Tessellator::normal(v56, 0.0, 1.0, 0.0);
      _R0 = v57;
        VMOV            S6, R8
        VMOV            S2, R4
      v20 = &v82;
        VMOV            S10, R5
        VMOV            S0, R0
      _R0 = v60;
        VMUL.F32        S14, S2, S21
        VMUL.F32        S1, S0, S19
        VMOV            S4, R0
      _R0 = v59;
        VMUL.F32        S3, S6, S21
        VMUL.F32        S12, S4, S19
        VMOV            S8, R0
      _R0 = v58;
        VMUL.F32        S7, S10, S21
        VMUL.F32        S5, S8, S19
        VMUL.F32        S0, S0, S30
        VMUL.F32        S6, S6, S17
        VMOV            S13, R0
      _R0 = v62;
        VMUL.F32        S4, S4, S30
        VMUL.F32        S2, S2, S17
        VMOV            S9, R9
        VMOV            S11, R6
        VMUL.F32        S8, S8, S30
        VMUL.F32        S10, S10, S17
        VADD.F32        S12, S14, S12
        VMUL.F32        S14, S9, S28
        VADD.F32        S1, S3, S1
        VADD.F32        S5, S7, S5
        VMUL.F32        S3, S11, S28
        VMUL.F32        S7, S13, S28
        VADD.F32        S0, S6, S0
        VMUL.F32        S6, S11, S26
        VADD.F32        S2, S2, S4
        VMUL.F32        S4, S9, S26
        VADD.F32        S8, S10, S8
        VMUL.F32        S10, S13, S26
        VADD.F32        S12, S12, S14
        VADD.F32        S14, S1, S3
        VADD.F32        S1, S5, S7
        VADD.F32        S0, S0, S6
        VMOV            S6, R0
      _R0 = v61;
        VMOV            S4, R11
        VADD.F32        S8, S8, S10
        VMOV            S10, R0
      _R0 = a11;
        VADD.F32        S20, S12, S4
        VADD.F32        S26, S14, S6
        VADD.F32        S28, S1, S10
        VADD.F32        S17, S2, S4
        VADD.F32        S19, S0, S6
        VADD.F32        S21, S8, S10
        VNEG.F32        S29, S20
        VNEG.F32        S25, S26
        VNEG.F32        S30, S28
      if ( !_ZF )
        __asm
        {
          VLDR            S22, [R0]
          VLDR            S24, [R0,#4]
          VLDR            S23, [R0,#8]
        }
        v38 = (Tessellator *)BaseEntityRenderContext::getTessellator(v12);
        _R0 = BaseEntityRenderContext::getCameraTargetPosition(v12);
          VLDR            S0, [R0]
          VSUB.F32        S6, S29, S17
          VLDR            S2, [R0,#4]
          VLDR            S4, [R0,#8]
          VSUB.F32        S22, S22, S0
          VSUB.F32        S24, S24, S2
          VSUB.F32        S0, S25, S19
          VSUB.F32        S23, S23, S4
          VSUB.F32        S2, S30, S21
          VADD.F32        S4, S6, S22
          VADD.F32        S0, S0, S24
          VADD.F32        S2, S2, S23
          VSTR            S4, [SP,#0x158+var_B4]
          VSTR            S0, [SP,#0x158+var_B0]
          VSTR            S2, [SP,#0x158+var_AC]
        Tessellator::vertexUV(v38, (const Vec3 *)&v82, 0LL);
          VADD.F32        S0, S17, S20
          VADD.F32        S2, S19, S26
          VADD.F32        S4, S21, S28
          VADD.F32        S0, S0, S22
          VADD.F32        S2, S2, S24
          VADD.F32        S4, S4, S23
          VSTR            S0, [SP,#0x158+var_74]
          VSTR            S2, [SP,#0x158+var_70]
          VSTR            S4, [SP,#0x158+var_6C]
        Tessellator::vertexUV(v38, (const Vec3 *)&v98, 4575657221408423936LL);
        VSTR            S29, [SP,#0x158+var_11C]
        VSTR            S25, [SP,#0x158+var_118]
        VSTR            S30, [SP,#0x158+var_114]
        VSTR            S28, [SP,#0x158+var_110]
        VSTR            S26, [SP,#0x158+var_10C]
        VSTR            S20, [SP,#0x158+var_108]
      if ( v53 > v54 )
        __asm { VLDR            S0, [SP,#0x158+var_110] }
        v40 = *(float *)&v54;
          VADD.F32        S29, S21, S0
          VLDR            S0, [SP,#0x158+var_10C]
          VADD.F32        S31, S19, S0
          VLDR            S0, [SP,#0x158+var_108]
          VADD.F32        S24, S17, S0
          VLDR            S0, [SP,#0x158+var_114]
          VSUB.F32        S22, S0, S21
          VLDR            S0, [SP,#0x158+var_118]
          VSUB.F32        S23, S0, S19
          VLDR            S0, [SP,#0x158+var_11C]
          VSUB.F32        S25, S0, S17
        do
          __asm { VMOV            R3, S27 }
          RopePoints::getInterpolated((RopePoints *)&v63, (unsigned int)a8, v40, _R3);
          __asm
          {
            VMOV.F32        S20, S16
            VLDR            S26, [SP,#0x158+var_100]
            VMOV.F32        S30, S27
            VLDR            S27, [SP,#0x158+var_104]
            VLDR            S28, [SP,#0x158+var_FC]
          }
          if ( !_ZF )
            __asm { VMOVNE.F32      S20, S18 }
          v42 = (Tessellator *)BaseEntityRenderContext::getTessellator(v12);
          _R0 = BaseEntityRenderContext::getCameraTargetPosition(v12);
            VMOV            R5, S20
            VLDR            S0, [R0]
            VLDR            S2, [R0,#4]
            VLDR            S4, [R0,#8]
            VSUB.F32        S27, S27, S0
            VSUB.F32        S20, S26, S2
            VSUB.F32        S26, S28, S4
            VADD.F32        S0, S25, S27
            VADD.F32        S2, S23, S20
            VADD.F32        S4, S22, S26
            VSTR            S0, [SP,#0x158+var_B4]
            VSTR            S2, [SP,#0x158+var_B0]
            VSTR            S4, [SP,#0x158+var_AC]
          Tessellator::vertexUV(v42, (const Vec3 *)&v82, _R5);
            VADD.F32        S0, S24, S27
            VADD.F32        S2, S31, S20
            VADD.F32        S4, S29, S26
            VMOV.F32        S27, S30
            VSTR            S0, [SP,#0x158+var_74]
            VSTR            S2, [SP,#0x158+var_70]
            VSTR            S4, [SP,#0x158+var_6C]
          Tessellator::vertexUV(v42, (const Vec3 *)&v98, __PAIR__(1065353216, _R5));
          ++LODWORD(v40);
        while ( v53 != LODWORD(v40) );
      _R0 = a12;
      v21 = &v98;
      if ( a12 )
          VLDR            S20, [R0]
          VLDR            S22, [R0,#4]
          VLDR            S24, [R0,#8]
        v46 = (Tessellator *)BaseEntityRenderContext::getTessellator(v12);
          VLDR            S8, [SP,#0x158+var_144]
          VMOV            R5, S8
          VSUB.F32        S20, S20, S0
          VLDR            S6, [SP,#0x158+var_11C]
          VSUB.F32        S22, S22, S2
          VSUB.F32        S24, S24, S4
          VLDR            S2, [SP,#0x158+var_114]
          VSUB.F32        S6, S6, S17
          VSUB.F32        S0, S0, S19
          VSUB.F32        S2, S2, S21
          VADD.F32        S4, S6, S20
        Tessellator::vertexUV(v46, (const Vec3 *)&v82, _R5);
          VLDR            S2, [SP,#0x158+var_10C]
          VLDR            S4, [SP,#0x158+var_110]
          VADD.F32        S0, S17, S0
          VADD.F32        S2, S19, S2
          VADD.F32        S4, S21, S4
          VADD.F32        S0, S0, S20
          VADD.F32        S2, S2, S22
          VADD.F32        S4, S4, S24
        Tessellator::vertexUV(v46, (const Vec3 *)&v98, __PAIR__(1065353216, _R5));
      if ( Tessellator::forceTessellateIntercept(v56) == 1 )
        result = (Tessellator *)Tessellator::triggerIntercept(v56, v51, a9);
      else
        v49 = BaseEntityRenderContext::getScreenContext(v12);
        result = (Tessellator *)Tessellator::draw((char *)v56, v49, (int)v51, (int)a9);
      _R1 = v55 + 1;
    while ( v55 != 1 );
  }
  return result;
}


void __fastcall MobRenderer::renderDebug(int a1, BaseEntityRenderContext *a2, int *a3)
{
  MobRenderer::renderDebug(a1, a2, a3);
}


void __fastcall MobRenderer::renderDebug(int a1, BaseEntityRenderContext *a2, int *a3)
{
  int v3; // r4@1
  Options *v4; // r9@1
  int v5; // r0@3
  int v6; // r6@3
  bool v8; // zf@11
  PathNavigation *v9; // r0@22
  Path *v10; // r0@22
  Path *v11; // r6@22
  signed int v15; // r7@25
  int v16; // r6@27
  float v17; // r3@30
  int *v18; // r5@30
  int *v19; // r7@30
  int v20; // t1@31
  char *v21; // r0@33
  unsigned int *v22; // r2@35
  signed int v23; // r1@37
  int v24; // [sp+0h] [bp-48h]@30
  char *v25; // [sp+8h] [bp-40h]@26
  int v27; // [sp+10h] [bp-38h]@26
  char *v28; // [sp+14h] [bp-34h]@2
  int v30; // [sp+1Ch] [bp-2Ch]@26

  v3 = *a3;
  v4 = (Options *)BaseEntityRenderContext::getOptions(a2);
  if ( Options::getDevFindMobs(v4) == 1 )
    AABB::getCenter((AABB *)&v28, v3 + 264);
  Options::getDevRenderBoundingBoxes(v4);
  v5 = Options::getDevRenderAttachPos(v4);
  v6 = v5;
  if ( v5 >= 1 )
  {
    _ZF = v5 == 6;
    if ( v5 != 6 )
      _ZF = v5 == 1;
    if ( _ZF )
      Entity::getAttachPos((AABB *)&v28, v3, 3, 0);
    if ( (v6 | 4) == 6 )
      Entity::getAttachPos((AABB *)&v28, v3, 6, 0);
    v8 = v6 == 6;
    if ( v6 != 6 )
      v8 = v6 == 3;
    if ( v8 )
      Entity::getAttachPos((AABB *)&v28, v3, 7, 0);
    if ( (v6 | 2) == 6 )
      Entity::getAttachPos((AABB *)&v28, v3, 1, 0);
    if ( (unsigned int)(v6 - 5) <= 1 )
      Entity::getAttachPos((AABB *)&v28, v3, 0, 0);
  }
  if ( Options::getDevRenderPaths(v4) == 1 && Mob::getNavigation((Mob *)v3) )
    v9 = (PathNavigation *)Mob::getNavigation((Mob *)v3);
    v10 = (Path *)PathNavigation::getPath(v9);
    v11 = v10;
    if ( v10 )
    {
      if ( Path::getSize(v10) >= 1 )
      {
        Path::getIndex(v11);
        Path::getPos((Path *)&v28, v11, v3, 0);
        __asm
        {
          VLDR            S16, =0.1
          VLDR            S0, [SP,#0x48+var_30]
          VADD.F32        S0, S0, S16
          VSTR            S0, [SP,#0x48+var_30]
        }
        if ( Path::getSize(v11) >= 2 )
          v15 = 1;
          do
          {
            Path::getPos((Path *)&v25, v11, v3, v15);
            __asm { VLDR            S0, [SP,#0x48+var_3C] }
            ++v15;
            __asm
            {
              VADD.F32        S0, S0, S16
              VSTR            S0, [SP,#0x48+var_3C]
            }
            v28 = v25;
            __asm { VSTR            S0, [SP,#0x48+var_30] }
            v30 = v27;
          }
          while ( v15 < Path::getSize(v11) );
      }
    }
    v16 = Entity::getTarget((Entity *)v3);
    if ( v16 )
      Entity::getAttachPos((AABB *)&v25, v16, 3, 0);
  if ( Options::getDevRenderCoordinateSystems(v4) == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
    Entity::getInterpolatedRotation((Entity *)&v24, *(float *)&v3, 0.0, v17);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 84))(v3, 0);
    (*(void (__fastcall **)(char **, int, _DWORD))(*(_DWORD *)v3 + 80))(&v28, v3, 0);
    v18 = (int *)(*(_QWORD *)(v3 + 476) >> 32);
    v19 = (int *)*(_QWORD *)(v3 + 476);
    while ( v18 != v19 )
      v20 = *v19;
      ++v19;
      (*(void (__fastcall **)(char **))(*(_DWORD *)v20 + 80))(&v25);
  if ( Options::getDevRenderGoalState(v4) == 1 )
    v28 = (char *)&unk_28898CC;
    (*(void (__fastcall **)(int, char **))(*(_DWORD *)v3 + 600))(v3, &v28);
    v21 = v28 - 12;
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v28 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      else
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v21);
}


int __fastcall MobRenderer::setArmor(int result, Model *a2)
{
  *(_DWORD *)(result + 208) = a2;
  return result;
}


int __fastcall MobRenderer::MobRenderer(int a1, int *a2, mce::TexturePtr *a3)
{
  mce::TexturePtr *v3; // r6@1
  int v4; // r4@1
  int *v5; // r5@1
  mce::TextureGroup *v6; // r0@1
  int v7; // r0@1
  void *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+8h] [bp-20h]@1

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = (mce::TextureGroup *)mce::TexturePtr::getGroup(a3);
  EntityRenderer::EntityRenderer((BaseEntityRenderer *)v4, v6, 0);
  *(_DWORD *)v4 = &off_26DBB8C;
  *(_BYTE *)(v4 + 136) = 0;
  v7 = *v5;
  *v5 = 0;
  *(_DWORD *)(v4 + 140) = v7;
  mce::TexturePtr::TexturePtr(v4 + 144, (int)v3);
  sub_119C884((void **)&v12, "entity_lead_base");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v4 + 168),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v12);
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  }
  *(_DWORD *)(v4 + 188) = 0;
  *(_DWORD *)(v4 + 192) = 0;
  *(_DWORD *)(v4 + 196) = 0;
  *(_DWORD *)(v4 + 200) = 0;
  *(_DWORD *)(v4 + 204) = 0;
  *(_DWORD *)(v4 + 208) = 0;
  *(_DWORD *)(v4 + 180) = 0;
  *(_DWORD *)(v4 + 184) = 0;
  *(_DWORD *)(v4 + 212) = 3;
  *(_BYTE *)(v4 + 216) = 1;
  _aeabi_memclr4(v4 + 220, 424);
  return v4;
}


void __fastcall MobRenderer::~MobRenderer(MobRenderer *this)
{
  MobRenderer::~MobRenderer(this);
}


char *__fastcall MobRenderer::getSkinPtr(MobRenderer *this, Entity *a2)
{
  return (char *)this + 144;
}


BaseEntityRenderer *__fastcall MobRenderer::~MobRenderer(MobRenderer *this)
{
  MobRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DBB8C;
  mce::MaterialPtr::~MaterialPtr((MobRenderer *)((char *)this + 168));
  mce::TexturePtr::~TexturePtr((MobRenderer *)((char *)v1 + 144));
  v2 = *((_DWORD *)v1 + 35);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 35) = 0;
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}


signed int __fastcall MobRenderer::getFlipDegrees(MobRenderer *this, const Mob *a2)
{
  return 1119092736;
}


Vec3 *__fastcall MobRenderer::_getLeashPins(MobRenderer *this, Entity *a2, float a3, Vec3 *a4, Vec3 *a5, Vec3 *a6, Vec3 *a7, Vec3 *a8)
{
  Vec3 *v8; // r8@1
  int v11; // r0@1
  float v12; // r3@1
  int v13; // r7@1
  RopeSystem *v14; // r0@1
  int v20; // r0@4
  int v21; // r5@5
  MobRenderer *v22; // r0@5
  int v25; // r0@6
  int v29; // r10@6
  int v30; // r0@6
  Vec3 *result; // r0@7
  int v36; // r1@8
  int v37; // r2@8
  int v38; // r0@9
  int v39; // r1@9
  signed int v40; // r0@9
  LocalPlayer *v41; // r5@9
  ClientInstance *v44; // r0@16
  int v45; // r11@17
  int v46; // ST18_4@17
  int v47; // ST14_4@17
  int v48; // ST20_4@17
  int v49; // ST1C_4@17
  int v50; // r7@17
  int v51; // r0@17
  int v52; // ST38_4@17
  ClientInstance *v53; // r0@17
  Options *v54; // r0@17
  int v55; // r7@17
  ClientInstance *v56; // r0@17
  Options *v57; // r0@17
  int v58; // r0@17
  int v59; // r10@17
  ClientInstance *v60; // r0@17
  Options *v61; // r0@17
  int v62; // r11@17
  LocalPlayer *v63; // r0@17
  ClientInstance *v64; // r0@17
  Options *v65; // r0@17
  int v66; // r0@17
  __int64 v69; // [sp+10h] [bp-88h]@0
  __int64 v70; // [sp+18h] [bp-80h]@0
  int v71; // [sp+24h] [bp-74h]@16
  int v72; // [sp+28h] [bp-70h]@9
  int v73; // [sp+2Ch] [bp-6Ch]@5
  __int64 v74; // [sp+30h] [bp-68h]@6
  MobRenderer *v75; // [sp+38h] [bp-60h]@1
  int v76; // [sp+3Ch] [bp-5Ch]@17
  int v77; // [sp+40h] [bp-58h]@17
  int v78; // [sp+44h] [bp-54h]@17
  int v79; // [sp+48h] [bp-50h]@17
  int v80; // [sp+4Ch] [bp-4Ch]@17
  int v81; // [sp+50h] [bp-48h]@17
  int v82; // [sp+54h] [bp-44h]@5
  int v83; // [sp+58h] [bp-40h]@5
  MobRenderer *v84; // [sp+5Ch] [bp-3Ch]@5
  unsigned int v85; // [sp+60h] [bp-38h]@1
  unsigned int v86; // [sp+64h] [bp-34h]@1

  v75 = this;
  v8 = a4;
  _R5 = a3;
  _R6 = a2;
  Entity::getRenderLeashHolder((Entity *)&v85, (int)a2);
  v11 = Entity::getLevel(_R6);
  v13 = Level::fetchEntity(v11, 0, v85, v86, 0);
  v14 = (RopeSystem *)*((_DWORD *)_R6 + 16);
  _R4 = a8;
  __asm { VMOV            S16, R5 }
  if ( v14 )
  {
    if ( v13 )
    {
      RopeSystem::storeEndPinEntity((int)v14, &v85);
    }
    else
      *(_QWORD *)&v85 = *(_QWORD *)RopeSystem::getEndPinEntity(v14);
      v20 = Entity::getLevel(_R6);
      v13 = Level::fetchEntity(v20, 0, v85, v86, 0);
  }
  v73 = LODWORD(_R5);
  v21 = mce::Math::lerpRotate(*((mce::Math **)_R6 + 854), *((float *)_R6 + 853), _R5, v12);
  (*(void (__fastcall **)(int *))(**((_DWORD **)v75 + 35) + 72))(&v82);
  *(_DWORD *)a8 = v82;
  *((_DWORD *)a8 + 1) = v83;
  v22 = v84;
  *((_DWORD *)a8 + 2) = v84;
  MobRenderer::_calcLeashOffset(v22, a8, COERCE_FLOAT(v21 ^ 0x80000000));
  _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R6 + 56))(_R6);
  __asm
    VLDR            S0, [R0]
    VLDR            S6, [R6,#0x48]
    VLDR            S2, [R0,#4]
    VLDR            S8, [R6,#0x4C]
    VSUB.F32        S6, S6, S0
    VLDR            S4, [R0,#8]
    VLDR            S10, [R6,#0x50]
    VSUB.F32        S8, S8, S2
    VSUB.F32        S10, S10, S4
    VMUL.F32        S6, S6, S16
    VMUL.F32        S8, S8, S16
    VMUL.F32        S10, S10, S16
    VADD.F32        S0, S6, S0
    VLDR            S6, [R4]
    VADD.F32        S2, S8, S2
    VLDR            S8, [R4,#4]
    VADD.F32        S4, S10, S4
    VLDR            S10, [R4,#8]
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S10
    VSTR            S0, [R8]
    VSTR            S2, [R8,#4]
    VSTR            S4, [R8,#8]
    VADD.F32        S6, S6, S6
    VADD.F32        S8, S8, S8
    VADD.F32        S10, S10, S10
    VSTR            S0, [R9]
    VSTR            S2, [R9,#4]
    VSTR            S4, [R9,#8]
  if ( _ZF )
    result = *(Vec3 **)v8;
    *(_DWORD *)a7 = *(_DWORD *)v8;
    v36 = *((_DWORD *)v8 + 1);
    *((_DWORD *)a7 + 1) = v36;
    v37 = *((_DWORD *)v8 + 2);
    *((_DWORD *)a7 + 2) = v37;
    *(_DWORD *)a5 = result;
    *((_DWORD *)a5 + 1) = v36;
    *((_DWORD *)a5 + 2) = v37;
    return result;
  v25 = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 56))(v13);
  _R11 = *(_QWORD *)(v13 + 72);
  _R9 = *(_DWORD *)(v13 + 80);
  LODWORD(v74) = *(_QWORD *)(v13 + 72) >> 32;
  v29 = *(_QWORD *)v25 >> 32;
  _R5 = *(_QWORD *)v25;
  HIDWORD(v74) = *(_DWORD *)(v25 + 8);
  v30 = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 488))(v13);
  if ( EntityClassTree::isOfType(v30, 88) )
    _R4 = 1051931443;
    _R7 = v29;
    _R6 = 0;
    _R8 = 0;
    result = a7;
LABEL_22:
    *(_QWORD *)&_R1 = v74;
    goto LABEL_23;
  v72 = _R5;
  v38 = Entity::getLevel(_R6);
  v40 = Level::getPlayer(v38, v39, v85, v86);
  v41 = (LocalPlayer *)v40;
  if ( !v40 )
    _R4 = 0;
LABEL_19:
LABEL_21:
    _R5 = v72;
    goto LABEL_22;
  HIDWORD(_R0) = (*(int (**)(void))(*(_DWORD *)v40 + 932))();
  LODWORD(_R0) = *((_DWORD *)_R6 + 16);
  if ( SHIDWORD(_R0) < 2 )
    *(_BYTE *)_R0 = 0;
  else if ( !*(_BYTE *)_R0 )
    __asm { VLDR            S0, =0.15 }
    HIDWORD(_R0) = &Vec3::UNIT_Y;
    __asm
      VLDR            S2, [R1]
      VLDR            S4, [R1,#4]
      VLDR            S6, [R1,#8]
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S0, S6, S0
    LODWORD(v69) = 1;
      VMOV            R1, S2
      VMOV            R2, S4
      VMOV            R3, S0
    RopeSystem::addWave(_R0, _R2, 1053609165, 0, 0, 0, v69, v70);
    **((_BYTE **)_R6 + 16) = 1;
  _R8 = *((_DWORD *)v41 + 1177);
  _R4 = *((_DWORD *)v41 + 1176);
  _R6 = *((_DWORD *)v41 + 1175);
  if ( (*(int (__fastcall **)(LocalPlayer *))(*(_DWORD *)v41 + 1408))(v41) != 1 )
    goto LABEL_19;
  v71 = _R11;
  v44 = (ClientInstance *)LocalPlayer::getClientInstance(v41);
  if ( ClientInstance::isRealityFullVRMode(v44) != 1 )
    goto LABEL_21;
  v45 = *(_QWORD *)(v13 + 76);
  v46 = *(_QWORD *)(v13 + 76) >> 32;
  v47 = *(_DWORD *)(v13 + 72);
  v48 = *(_DWORD *)(v13 + 108);
  v49 = *(_DWORD *)(v13 + 112);
  v50 = *(_DWORD *)(v13 + 116);
  v51 = LocalPlayer::isFlying(v41);
  v52 = (int)v75 + 212;
  VrComfortMove::tick(v52, v48, v49, v50, v47, v45, v46, v51);
  v53 = (ClientInstance *)LocalPlayer::getClientInstance(v41);
  v54 = (Options *)ClientInstance::getOptions(v53);
  v55 = Options::getVRLinearMotion(v54);
  v56 = (ClientInstance *)LocalPlayer::getClientInstance(v41);
  v57 = (Options *)ClientInstance::getOptions(v56);
  v58 = Options::getVRLinearJump(v57);
  VrComfortMove::getRenderPosition(COERCE_FLOAT(&v79), v52, v73, v72, v29, SHIDWORD(v74), v55, v58);
  _R7 = v80;
  v59 = v79;
  HIDWORD(v74) = v81;
  v60 = (ClientInstance *)LocalPlayer::getClientInstance(v41);
  v61 = (Options *)ClientInstance::getOptions(v60);
  v62 = Options::getVRLinearMotion(v61);
  v63 = v41;
  _R5 = v59;
  v64 = (ClientInstance *)LocalPlayer::getClientInstance(v63);
  v65 = (Options *)ClientInstance::getOptions(v64);
  v66 = Options::getVRLinearJump(v65);
  VrComfortMove::getRenderPosition(COERCE_FLOAT(&v76), v52, v73, v71, v74, _R9, v62, v66);
  _R2 = HIDWORD(v74);
  _R1 = v77;
  _R11 = v76;
  _R9 = v78;
  result = a7;
LABEL_23:
    VMOV            S0, R7
    VMOV            S10, R1
    VMOV            S2, R2
    VMOV            S4, R9
    VMOV            S6, R5
    VMOV            S8, R11
    VSUB.F32        S4, S4, S2
    VSUB.F32        S8, S8, S6
    VSUB.F32        S10, S10, S0
    VMUL.F32        S14, S4, S16
    VMUL.F32        S12, S8, S16
    VADD.F32        S1, S10, S10
    VADD.F32        S4, S4, S4
    VADD.F32        S14, S14, S2
    VADD.F32        S12, S12, S6
    VADD.F32        S1, S1, S0
    VADD.F32        S0, S10, S0
    VADD.F32        S6, S8, S6
    VADD.F32        S2, S4, S2
    VMOV            S10, R6
    VMOV            S4, R8
    VMOV            S8, R4
    VADD.F32        S12, S12, S10
    VADD.F32        S0, S0, S8
    VADD.F32        S14, S14, S4
    VADD.F32        S6, S6, S10
    VADD.F32        S8, S1, S8
    VADD.F32        S2, S2, S4
    VSTR            S12, [R10]
    VSTR            S0, [R10,#4]
    VSTR            S14, [R10,#8]
    VSTR            S6, [R0]
    VSTR            S8, [R0,#4]
    VSTR            S2, [R0,#8]
  return result;
}


void __fastcall MobRenderer::~MobRenderer(MobRenderer *this)
{
  MobRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DBB8C;
  mce::MaterialPtr::~MaterialPtr((MobRenderer *)((char *)this + 168));
  mce::TexturePtr::~TexturePtr((MobRenderer *)((char *)v1 + 144));
  v2 = *((_DWORD *)v1 + 35);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 35) = 0;
  EntityRenderer::~EntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}
