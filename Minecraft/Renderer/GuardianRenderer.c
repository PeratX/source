

BaseEntityRenderer *__fastcall GuardianRenderer::~GuardianRenderer(GuardianRenderer *this)
{
  GuardianRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DB714;
  v2 = *((_DWORD *)this + 281);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 281) = 0;
  mce::TexturePtr::~TexturePtr((GuardianRenderer *)((char *)v1 + 1100));
  mce::TexturePtr::~TexturePtr((GuardianRenderer *)((char *)v1 + 1076));
  return j_j_j__ZN11MobRendererD2Ev(v1);
}


int __fastcall GuardianRenderer::GuardianRenderer(int a1, mce::TextureGroup *a2, const GeometryPtr *a3)
{
  int v3; // r4@1
  const GeometryPtr *v4; // r8@1
  mce::TextureGroup *v5; // r7@1
  GuardianModel *v6; // r5@1
  char *v7; // r0@1
  char *v8; // r0@2
  char *v9; // r0@5
  char *v10; // r0@6
  char *v11; // r0@7
  char *v12; // r0@8
  GuardianModel *v13; // r7@9
  int result; // r0@9
  unsigned int *v15; // r2@10
  signed int v16; // r1@12
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  unsigned int *v19; // r2@18
  signed int v20; // r1@20
  unsigned int *v21; // r2@22
  signed int v22; // r1@24
  unsigned int *v23; // r2@26
  signed int v24; // r1@28
  unsigned int *v25; // r2@30
  signed int v26; // r1@32
  char *v27; // [sp+4h] [bp-64h]@7
  char *v28; // [sp+8h] [bp-60h]@7
  int v29; // [sp+Ch] [bp-5Ch]@7
  char *v30; // [sp+14h] [bp-54h]@5
  char *v31; // [sp+18h] [bp-50h]@5
  int v32; // [sp+1Ch] [bp-4Ch]@5
  char *v33; // [sp+24h] [bp-44h]@1
  char *v34; // [sp+28h] [bp-40h]@1
  int v35; // [sp+2Ch] [bp-3Ch]@1
  char v36; // [sp+30h] [bp-38h]@1
  GuardianModel *v37; // [sp+48h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (GuardianModel *)operator new(0xED8u);
  GuardianModel::GuardianModel(v6, v4, 0);
  v37 = v6;
  sub_119C884((void **)&v33, "textures/entity/guardian");
  v34 = v33;
  v33 = (char *)&unk_28898CC;
  v35 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v36, v5, (int)&v34, 0);
  MobRenderer::MobRenderer(v3, (int *)&v37, (mce::TexturePtr *)&v36);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v36);
  v7 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = v33 - 12;
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v33 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  if ( v37 )
    (*(void (**)(void))(*(_DWORD *)v37 + 4))();
  v37 = 0;
  *(_DWORD *)v3 = &off_26DB714;
  *(_DWORD *)(v3 + 644) = 3;
  *(_BYTE *)(v3 + 648) = 1;
  _aeabi_memclr4(v3 + 652, 424);
  sub_119C884((void **)&v30, "textures/entity/guardian_elder");
  v31 = v30;
  v32 = 0;
  v30 = (char *)&unk_28898CC;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 1076), v5, (int)&v31, 0);
  v9 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v31 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = v30 - 12;
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v30 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v27, "textures/entity/guardian_beam");
  v28 = v27;
  v27 = (char *)&unk_28898CC;
  v29 = 0;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 1100), v5, (int)&v28, 0);
  v11 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v28 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = v27 - 12;
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v27 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = (GuardianModel *)operator new(0xED8u);
  GuardianModel::GuardianModel(v13, v4, 1);
  *(_DWORD *)(v3 + 1124) = v13;
  result = v3;
  *((_DWORD *)v13 + 8) = v3 + 1076;
  return result;
}


float __fastcall GuardianRenderer::render(int a1, int a2, __int64 *a3)
{
  __int64 *v3; // r7@1
  int v4; // r10@1
  float result; // r0@2
  int v12; // r0@4
  Tessellator *v15; // r11@7
  int v16; // r0@7
  float v28; // r0@20
  int v37; // r4@22
  void *v38; // r0@22
  unsigned int *v39; // r2@25
  signed int v40; // r1@27
  int v41; // [sp+0h] [bp-170h]@0
  int v42; // [sp+0h] [bp-170h]@20
  float v43; // [sp+4h] [bp-16Ch]@0
  __int64 v47; // [sp+14h] [bp-15Ch]@16
  int v48; // [sp+1Ch] [bp-154h]@16
  int v61; // [sp+54h] [bp-11Ch]@22
  char v62; // [sp+58h] [bp-118h]@22
  int v63; // [sp+64h] [bp-10Ch]@22
  int v64; // [sp+6Ch] [bp-104h]@22
  float v65; // [sp+74h] [bp-FCh]@22
  int v66; // [sp+80h] [bp-F0h]@22
  float v67; // [sp+84h] [bp-ECh]@22
  float v68; // [sp+90h] [bp-E0h]@22
  float v69; // [sp+9Ch] [bp-D4h]@22
  float v70; // [sp+A8h] [bp-C8h]@22
  float v71; // [sp+B4h] [bp-BCh]@22
  float v72; // [sp+C0h] [bp-B0h]@22
  float v73; // [sp+CCh] [bp-A4h]@22
  float v74; // [sp+D8h] [bp-98h]@22
  float v75; // [sp+E4h] [bp-8Ch]@9
  float v78; // [sp+F0h] [bp-80h]@7
  char v81; // [sp+FCh] [bp-74h]@7

  v3 = a3;
  v4 = a1;
  _KR00_8 = *a3;
  _R6 = a2;
  if ( Guardian::isElderGhost((Guardian *)*a3) == 1 )
  {
    __asm
    {
      VLDR            S0, [R6,#4]
      VSTR            S0, [SP,#0x170+var_16C]
    }
    result = COERCE_FLOAT(GuardianRenderer::_renderGuardianGhost(v4, (BaseEntityRenderContext *)_R6, _KR00_8, SHIDWORD(_KR00_8), v41, v43));
  }
  else
    if ( Guardian::isElder((Guardian *)_KR00_8) )
      v12 = v4 + 1076;
    else
      v12 = v4 + 144;
    MobRenderer::renderModel(v4, (BaseEntityRenderContext *)_R6, (int)v3, *(_DWORD *)(v4 + 140), v12);
    result = COERCE_FLOAT(Guardian::getTargetEntity((Guardian *)_KR00_8));
    _R7 = result;
    if ( result != 0.0 )
      _R8 = Guardian::getAttackAnimationScale((Guardian *)_KR00_8, *(float *)(_R6 + 4));
      v15 = (Tessellator *)BaseEntityRenderContext::getTessellator((BaseEntityRenderContext *)_R6);
      v16 = BaseEntityRenderContext::getWorldMatrix((BaseEntityRenderContext *)_R6);
      MatrixStack::push((MatrixStack *)&v81, v16);
      Entity::getInterpolatedPosition((Entity *)&v78, _R7, *(_DWORD *)(_R6 + 4));
      __asm
      {
        VMOV.F32        S16, #-0.5
        VLDR            S0, [R7,#0x134]
        VLDR            S2, [SP,#0x170+var_7C]
        VMUL.F32        S0, S0, S16
        VADD.F32        S0, S2, S0
        VSTR            S0, [SP,#0x170+var_7C]
      }
      if ( Guardian::isElder((Guardian *)_KR00_8) == 1 )
        __asm
        {
          VLDR            S0, [R7,#0x134]
          VLDR            S2, [SP,#0x170+var_7C]
          VMUL.F32        S0, S0, S16
          VADD.F32        S0, S2, S0
          VSTR            S0, [SP,#0x170+var_7C]
        }
      Entity::getInterpolatedPosition((Entity *)&v75, *(float *)&_KR00_8, *(_DWORD *)(_R6 + 4));
        VLDR            S16, [SP,#0x170+var_8C]
        VLDR            S18, [SP,#0x170+var_88]
        VLDR            S20, [SP,#0x170+var_84]
        VLDR            S22, [SP,#0x170+var_80]
        VLDR            S24, [SP,#0x170+var_7C]
        VLDR            S26, [SP,#0x170+var_78]
      Tessellator::begin((int)v15, 1, 90, 0);
        VSUB.F32        S2, S22, S16
        VSUB.F32        S4, S24, S18
        VSUB.F32        S6, S26, S20
        VMUL.F32        S0, S2, S2
        VMUL.F32        S8, S4, S4
        VMUL.F32        S10, S6, S6
        VADD.F32        S0, S8, S0
        VADD.F32        S0, S0, S10
        VSQRT.F32       S8, S0
        VLDR            S0, [R4]
        VSTR            S0, [SP,#0x170+var_138]
        VLDR            S0, [R4,#4]
        VSTR            S0, [SP,#0x170+var_13C]
        VLDR            S0, [R4,#8]
        VSTR            S0, [SP,#0x170+var_144]
        VLDR            S0, [R5,#0x178]
        VSTR            S0, [SP,#0x170+var_140]
        VLDR            S0, [R5,#0x17C]
        VSTR            S0, [SP,#0x170+var_148]
        VLDR            S0, [R5,#0x180]
        VSTR            S0, [SP,#0x170+var_14C]
        VLDR            S0, =0.0001
        VCMPE.F32       S8, S0
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm { VSTR            S8, [SP,#0x170+var_150] }
        _R0 = &Vec3::ZERO;
          VLDR            S28, [R0]
          VLDR            S26, [R0,#4]
          VLDR            S24, [R0,#8]
      else
          VDIV.F32        S24, S6, S8
          VDIV.F32        S26, S4, S8
          VDIV.F32        S28, S2, S8
          VSTR            S8, [SP,#0x170+var_150]
      _R0 = &Vec3::UNIT_Y;
        VLDR            S2, [R0]
        VLDR            S4, [R0,#4]
        VLDR            S6, [R0,#8]
        VMUL.F32        S8, S2, S26
        VMUL.F32        S10, S4, S28
        VMUL.F32        S12, S6, S28
        VMUL.F32        S2, S2, S24
        VMUL.F32        S4, S4, S24
        VMUL.F32        S6, S6, S26
        VSUB.F32        S8, S10, S8
        VSUB.F32        S2, S2, S12
        VSUB.F32        S4, S6, S4
        VMUL.F32        S6, S8, S26
        VMUL.F32        S8, S8, S28
        VMUL.F32        S10, S2, S24
        VMUL.F32        S14, S2, S28
        VMUL.F32        S12, S4, S24
        VMUL.F32        S1, S4, S26
        VSUB.F32        S2, S10, S6
        VSUB.F32        S4, S8, S12
        VSUB.F32        S6, S1, S14
        VMUL.F32        S8, S2, S2
        VMUL.F32        S10, S4, S4
        VMUL.F32        S12, S6, S6
        VADD.F32        S8, S10, S8
        VADD.F32        S8, S8, S12
        VSQRT.F32       S8, S8
        *(_QWORD *)&_R1 = *(_QWORD *)&Vec3::ZERO;
        _R0 = dword_2822498;
          VDIV.F32        S6, S6, S8
          VDIV.F32        S4, S4, S8
          VDIV.F32        S2, S2, S8
          VMOV            R0, S6
          VMOV            R2, S4
          VMOV            R1, S2
        VMOV            S6, R2
        VMOV            S16, R1
        VMOV            S10, R0
        VSTR            S6, [SP,#0x170+var_134]
        VMUL.F32        S4, S6, S28
        VMUL.F32        S2, S16, S26
        VSTR            S10, [SP,#0x170+var_130]
        VMUL.F32        S8, S10, S26
        VMUL.F32        S6, S6, S24
        VMUL.F32        S10, S10, S28
        VMUL.F32        S12, S16, S24
        VSUB.F32        S4, S4, S2
        VSUB.F32        S2, S8, S6
        VSUB.F32        S6, S12, S10
        VMUL.F32        S10, S2, S2
        v47 = *(_QWORD *)&Vec3::ZERO;
        v48 = dword_2822498;
          VDIV.F32        S0, S4, S8
          VDIV.F32        S4, S6, S8
          VMOV            R0, S0
        v48 = _R0;
        __asm { VMOV            R0, S4 }
        HIDWORD(v47) = _R0;
        __asm { VMOV            R0, S2 }
        LODWORD(v47) = _R0;
      Guardian::isElder((Guardian *)_KR00_8);
        VMOV            S0, R8
        VLDR            S2, =0.25098
        VLDR            S4, =0.74902
        VMUL.F32        S0, S0, S0
        VLDR            S8, =0.12549
      _R0 = &mce::Math::PI;
        VMUL.F32        S6, S0, S2
        VMUL.F32        S0, S0, S4
        VLDR            S4, =0.50196
        VSUB.F32        S21, S4, S6
        VLDR            S4, [R5,#0x1A0]
        VADD.F32        S29, S0, S2
        VLDR            S2, =0.034907
        VADD.F32        S27, S0, S8
        VLDR            S0, =0.05236
        VSTR            S21, [SP,#0x170+var_160]
        VSTR            S29, [SP,#0x170+var_168]
        VSTR            S27, [SP,#0x170+var_164]
      if ( !_ZF )
        __asm { VMOVNE.F32      S2, S0 }
        VCVT.F32.S32    S0, S4
        VLDR            S4, [R0]
        VLDR            S6, [R6,#4]
        VMUL.F32        S2, S2, S4
        VADD.F32        S0, S0, S6
        VMUL.F32        S0, S2, S0
        VMOV            R4, S0
      _R7 = cosf(_R4);
      v28 = sinf(_R4);
      __asm { VMOV            R1, S29 }
      _R4 = v28;
        VMOV            R2, S27
        VMOV            R3, S21
      _R0 = &Matrix::IDENTITY;
        VLDR            S0, [R0,#0x30]
        VLDR            S30, [R0,#4]
        VSTR            S0, [SP,#0x170+var_124]
        VLDR            S0, [R0,#0x34]
        VLDR            S31, [R0,#8]
        VSTR            S0, [SP,#0x170+var_128]
        VLDR            S0, [R0,#0x38]
        VLDR            S23, [R0]
        VLDR            S19, [R0,#0x14]
        VLDR            S20, [R0,#0x18]
        VLDR            S25, [R0,#0x10]
        VLDR            S22, [R0,#0x20]
        VLDR            S17, [R0,#0x24]
        VLDR            S18, [R0,#0x28]
        VSTR            S0, [SP,#0x170+var_12C]
      Tessellator::color(v15, _R1, _R2, _R3, 1.0);
      Tessellator::normal(v15, 0.0, 1.0, 0.0);
        VLDR            S0, [SP,#0x170+var_144]
        VMUL.F32        S4, S24, S24
        VLDR            S2, [SP,#0x170+var_14C]
        VMOV            S12, R4
        VADD.F32        S27, S2, S0
        VLDR            S0, [SP,#0x170+var_13C]
        VLDR            S2, [SP,#0x170+var_148]
        VLDR            S2, [SP,#0x170+var_140]
        VLDR            S0, [SP,#0x170+var_138]
        VMUL.F32        S2, S26, S26
        VMUL.F32        S0, S28, S28
        VMOV.F32        S2, #1.0
        VADD.F32        S0, S0, S4
        VMOV            S4, R7
        VSQRT.F32       S0, S0
        VDIV.F32        S0, S2, S0
        VSUB.F32        S2, S2, S4
        VMUL.F32        S6, S0, S28
        VMUL.F32        S10, S0, S24
        VMUL.F32        S0, S0, S26
        VMUL.F32        S8, S6, S2
        VMUL.F32        S1, S10, S12
        VMUL.F32        S5, S0, S12
        VMUL.F32        S12, S6, S12
        VMUL.F32        S14, S8, S6
        VMUL.F32        S3, S8, S0
        VMUL.F32        S8, S8, S10
        VADD.F32        S14, S14, S4
        VADD.F32        S3, S3, S1
        VSUB.F32        S8, S8, S5
        VMUL.F32        S7, S14, S31
        VMUL.F32        S9, S3, S20
        VMUL.F32        S11, S14, S23
        VMUL.F32        S13, S3, S25
        VMUL.F32        S14, S14, S30
        VMUL.F32        S3, S3, S19
        VADD.F32        S7, S9, S7
        VMUL.F32        S9, S8, S18
        VADD.F32        S11, S13, S11
        VMUL.F32        S13, S0, S2
        VMUL.F32        S2, S10, S2
        VADD.F32        S14, S3, S14
        VADD.F32        S29, S7, S9
        VMUL.F32        S7, S13, S0
        VMUL.F32        S9, S13, S6
        VMUL.F32        S6, S2, S6
        VMUL.F32        S2, S2, S10
        VMUL.F32        S13, S13, S10
        VSTR            S29, [SP,#0x170+var_140]
        VADD.F32        S7, S7, S4
        VSUB.F32        S1, S9, S1
        VSUB.F32        S0, S0, S12
        VADD.F32        S6, S6, S5
        VADD.F32        S2, S2, S4
        VADD.F32        S12, S13, S12
        VMUL.F32        S15, S7, S19
        VMUL.F32        S9, S1, S30
        VMUL.F32        S21, S7, S20
        VMUL.F32        S3, S6, S23
        VMUL.F32        S30, S6, S30
        VMUL.F32        S5, S0, S25
        VMUL.F32        S19, S0, S19
        VMUL.F32        S6, S6, S31
        VMUL.F32        S0, S0, S20
        VADD.F32        S9, S15, S9
        VMUL.F32        S15, S1, S31
        VMUL.F32        S4, S1, S23
        VMUL.F32        S1, S8, S22
        VMUL.F32        S10, S7, S25
        VMUL.F32        S8, S8, S17
        VMUL.F32        S13, S12, S17
        VADD.F32        S15, S21, S15
        VMUL.F32        S21, S12, S22
        VMUL.F32        S12, S12, S18
        VADD.F32        S4, S10, S4
        VMUL.F32        S10, S2, S18
        VADD.F32        S14, S14, S8
        VADD.F32        S20, S11, S1
        VMUL.F32        S6, S2, S17
        VADD.F32        S8, S19, S30
        VADD.F32        S7, S15, S12
        VADD.F32        S9, S9, S13
        VADD.F32        S18, S0, S10
        VLDR            S10, [SP,#0x170+var_134]
        VMUL.F32        S2, S2, S22
        VSTR            S14, [SP,#0x170+var_144]
        VADD.F32        S22, S4, S21
        VADD.F32        S12, S5, S3
        VMUL.F32        S4, S14, S16
        VMUL.F32        S0, S29, S16
        VSTR            S7, [SP,#0x170+var_148]
        VMUL.F32        S14, S20, S16
        VSTR            S9, [SP,#0x170+var_14C]
        VADD.F32        S23, S8, S6
        VLDR            S6, [SP,#0x170+var_12C]
        VLDR            S8, [SP,#0x170+var_128]
        VMOV.F32        S21, S27
        VLDR            S27, =0.15
        VADD.F32        S25, S12, S2
        VADD.F32        S4, S4, S8
        VMUL.F32        S2, S7, S10
        VMUL.F32        S6, S9, S10
        VMUL.F32        S8, S22, S10
        VLDR            S10, [SP,#0x170+var_124]
        VADD.F32        S10, S14, S10
        VLDR            S14, [SP,#0x170+var_130]
        VMUL.F32        S12, S18, S14
        VADD.F32        S0, S0, S2
        VADD.F32        S4, S4, S6
        VMUL.F32        S2, S23, S14
        VMUL.F32        S6, S25, S14
        VADD.F32        S0, S0, S12
        VADD.F32        S2, S4, S2
        VADD.F32        S4, S8, S6
        VMOV.F32        S6, #0.25
        __asm { VMOVNE.F32      S27, S6 }
        VLDR            S17, [SP,#0x170+var_138]
        VMUL.F32        S30, S27, S4
        VLDR            S31, [SP,#0x170+var_13C]
        VMUL.F32        S19, S27, S2
        VMUL.F32        S29, S27, S0
        VADD.F32        S0, S30, S17
        VADD.F32        S2, S19, S31
        VADD.F32        S4, S29, S21
        VSTR            S0, [SP,#0x170+var_98]
        VSTR            S2, [SP,#0x170+var_94]
        VSTR            S4, [SP,#0x170+var_90]
      Tessellator::vertexUV(v15, (const Vec3 *)&v74, 0LL);
        VSUB.F32        S0, S17, S30
        VSUB.F32        S2, S31, S19
        VSUB.F32        S4, S21, S29
        VSTR            S0, [SP,#0x170+var_A4]
        VSTR            S2, [SP,#0x170+var_A0]
        VSTR            S4, [SP,#0x170+var_9C]
      Tessellator::vertexUV(v15, (const Vec3 *)&v73, 1056964608LL);
        VMOV.F32        S0, #0.5
        VLDR            S2, [SP,#0x170+var_150]
        VADD.F32        S16, S2, S0
        VMUL.F32        S2, S26, S16
        VMUL.F32        S0, S28, S16
        VMUL.F32        S4, S24, S16
        VADD.F32        S26, S2, S31
        VADD.F32        S24, S0, S17
        VADD.F32        S28, S4, S21
        VSUB.F32        S2, S26, S19
        VSUB.F32        S0, S24, S30
        VSUB.F32        S4, S28, S29
        VSTR            S0, [SP,#0x170+var_B0]
        VSTR            S2, [SP,#0x170+var_AC]
        VSTR            S4, [SP,#0x170+var_A8]
      Tessellator::vertexUV(v15, (const Vec3 *)&v72, 4575657222465388544LL);
        VADD.F32        S0, S30, S24
        VADD.F32        S2, S19, S26
        VADD.F32        S4, S29, S28
        VSTR            S0, [SP,#0x170+var_BC]
        VSTR            S2, [SP,#0x170+var_B8]
        VSTR            S4, [SP,#0x170+var_B4]
      Tessellator::vertexUV(v15, (const Vec3 *)&v71, 4575657221408423936LL);
      _R0 = v47;
        VLDR            S4, [SP,#0x170+var_144]
        VLDR            S6, [SP,#0x170+var_140]
        VMOV            S0, R0
      _R0 = HIDWORD(v47);
        VLDR            S12, [SP,#0x170+var_128]
        VMUL.F32        S4, S4, S0
        VLDR            S8, [SP,#0x170+var_148]
        VMUL.F32        S6, S6, S0
        VLDR            S10, [SP,#0x170+var_14C]
        VMUL.F32        S0, S20, S0
        VLDR            S14, [SP,#0x170+var_124]
        VMOV            S2, R0
      _R0 = v48;
        VMUL.F32        S8, S8, S2
        VMUL.F32        S10, S10, S2
        VADD.F32        S4, S4, S12
        VLDR            S12, [SP,#0x170+var_12C]
        VMUL.F32        S2, S22, S2
        VADD.F32        S6, S6, S12
        VADD.F32        S0, S0, S14
        VMOV            S12, R0
        VMUL.F32        S14, S18, S12
        VADD.F32        S4, S4, S10
        VMUL.F32        S10, S25, S12
        VADD.F32        S6, S6, S8
        VMUL.F32        S8, S23, S12
        VADD.F32        S2, S6, S14
        VMUL.F32        S22, S27, S2
        VMUL.F32        S18, S27, S0
        VMUL.F32        S20, S27, S4
        VADD.F32        S4, S22, S21
        VADD.F32        S0, S18, S17
        VADD.F32        S2, S20, S31
        VSTR            S0, [SP,#0x170+var_C8]
        VSTR            S2, [SP,#0x170+var_C4]
        VSTR            S4, [SP,#0x170+var_C0]
      Tessellator::vertexUV(v15, (const Vec3 *)&v70, 0LL);
        VSUB.F32        S0, S17, S18
        VSUB.F32        S2, S31, S20
        VSUB.F32        S4, S21, S22
        VSTR            S0, [SP,#0x170+var_D4]
        VSTR            S2, [SP,#0x170+var_D0]
        VSTR            S4, [SP,#0x170+var_CC]
      Tessellator::vertexUV(v15, (const Vec3 *)&v69, 1056964608LL);
        VSUB.F32        S0, S24, S18
        VSUB.F32        S2, S26, S20
        VSUB.F32        S4, S28, S22
        VSTR            S0, [SP,#0x170+var_E0]
        VSTR            S2, [SP,#0x170+var_DC]
        VSTR            S4, [SP,#0x170+var_D8]
      Tessellator::vertexUV(v15, (const Vec3 *)&v68, 4575657222465388544LL);
        VADD.F32        S0, S18, S24
        VADD.F32        S2, S20, S26
        VADD.F32        S4, S22, S28
        VSTR            S0, [SP,#0x170+var_EC]
        VSTR            S2, [SP,#0x170+var_E8]
        VSTR            S4, [SP,#0x170+var_E4]
      Tessellator::vertexUV(v15, (const Vec3 *)&v67, 4575657221408423936LL);
      v37 = BaseEntityRenderContext::getScreenContext((BaseEntityRenderContext *)_R6);
        VLDR            S0, [SP,#0x170+var_168]
        VMOV.F32        S4, #4.0
        VLDR            S6, =0.4
        VSTR            S0, [SP,#0x170+var_FC]
        VLDR            S0, [SP,#0x170+var_164]
        VSTR            S0, [SP,#0x170+var_F8]
        VLDR            S0, [SP,#0x170+var_160]
        VSTR            S0, [SP,#0x170+var_F4]
        VMUL.F32        S4, S16, S4
      v66 = 1065353216;
        VLDR            S0, [R5,#0x1A0]
        VCVT.F32.S32    S0, S0
        VLDR            S2, [R6,#4]
      v63 = 0;
        VMUL.F32        S0, S0, S6
        VSTR            S0, [SP,#0x170+var_108]
      v64 = 1065353216;
        VSTR            S4, [SP,#0x170+var_100]
        VSTR            S2, [SP,#0x170+var_170]
      EntityShaderManager::_setupShaderParameters(v4, v37, *(float *)&_KR00_8, COERCE_FLOAT(&v65), v42, (int)&v63);
      sub_119C884((void **)&v61, "entity_beam");
      mce::MaterialPtr::MaterialPtr(
        (mce::MaterialPtr *)&v62,
        (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
        &v61);
      Tessellator::draw((char *)v15, v37, (int)&v62, v4 + 1100);
      mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v62);
      v38 = (void *)(v61 - 12);
      if ( (int *)(v61 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v61 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
        else
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v38);
      result = COERCE_FLOAT(MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v81));
  return result;
}


void __fastcall GuardianRenderer::~GuardianRenderer(GuardianRenderer *this)
{
  GuardianRenderer::~GuardianRenderer(this);
}


int __fastcall GuardianRenderer::_renderGuardianGhost(GuardianRenderer *this, BaseEntityRenderContext *a2, Entity *a3, const Vec3 *a4, float a5, float a6)
{
  BaseEntityRenderContext *v6; // r5@1
  int v10; // r0@1
  int v15; // r0@1
  int v16; // r0@1
  int v17; // r1@1
  void (__fastcall *v18)(GuardianRenderer *, Entity *, int *, int); // r4@1
  int v19; // r0@1
  void (__fastcall *v20)(GuardianRenderer *, Entity *, _DWORD, _DWORD); // r4@1
  void (__fastcall *v22)(GuardianRenderer *, Entity *, int); // r4@1
  int v23; // r0@1
  char *v25; // r0@1
  float v28; // r1@1
  int v29; // r5@1
  float v30; // r1@1
  int v31; // r7@1
  int v32; // r4@1
  float v39; // r1@2
  float v41; // r1@2
  int v44; // [sp+14h] [bp-A4h]@1
  BaseEntityRenderContext *v45; // [sp+18h] [bp-A0h]@1
  int v46; // [sp+1Ch] [bp-9Ch]@1
  int v47; // [sp+24h] [bp-94h]@1
  int v48; // [sp+2Ch] [bp-8Ch]@1
  char v49; // [sp+30h] [bp-88h]@1
  int v50; // [sp+38h] [bp-80h]@1
  int v51; // [sp+3Ch] [bp-7Ch]@1
  int v52; // [sp+40h] [bp-78h]@1
  int v53; // [sp+44h] [bp-74h]@1
  int v54; // [sp+48h] [bp-70h]@1
  signed int v55; // [sp+4Ch] [bp-6Ch]@1
  int v56; // [sp+50h] [bp-68h]@1
  int v57; // [sp+54h] [bp-64h]@1

  v6 = a2;
  _R6 = this;
  _R7 = a4;
  _R8 = a3;
  v45 = a2;
  v10 = BaseEntityRenderContext::getScreenContext(a2);
  __asm { VLDR            S16, [SP,#0xB8+arg_4] }
  v46 = v10;
  v54 = 1065353216;
  v55 = 1065353216;
  v56 = 1065353216;
  v57 = 1050253722;
  v52 = 0;
  v53 = 0;
  v50 = 0;
  v51 = 0;
  __asm { VSTR            S16, [SP,#0xB8+var_AC] }
  EntityShaderManager::_setupShaderParameters(
    (int)_R6,
    v10,
    *(float *)&_R8,
    COERCE_FLOAT(&Color::NIL),
    (unsigned int)&v54,
    (int)&v50,
    1065353216);
  v15 = BaseEntityRenderContext::getWorldMatrix(v6);
  MatrixStack::push((MatrixStack *)&v49, v15);
  v16 = *((_DWORD *)_R6 + 281);
  *(_DWORD *)(v16 + 20) = 0;
  *(_BYTE *)(v16 + 25) = 0;
  *(_BYTE *)(v16 + 24) = 0;
  *((_DWORD *)_R6 + 48) = 0;
  *((_DWORD *)_R6 + 49) = 0;
  *((_DWORD *)_R6 + 50) = 0;
  __asm
  {
    VLDR            S0, [R8,#0x13C]
    VLDR            S2, [R7,#4]
    VSUB.F32        S0, S2, S0
  }
  v17 = *((_DWORD *)_R7 + 2);
  v18 = *(void (__fastcall **)(GuardianRenderer *, Entity *, int *, int))(*(_DWORD *)_R6 + 48);
  v47 = *(_DWORD *)_R7;
  __asm { VSTR            S0, [SP,#0xB8+var_90] }
  v48 = v17;
  v19 = MatrixStack::MatrixStackRef::operator*((int)&v49);
  v18(_R6, _R8, &v47, v19);
  v20 = *(void (__fastcall **)(GuardianRenderer *, Entity *, _DWORD, _DWORD))(*(_DWORD *)_R6 + 52);
  MatrixStack::MatrixStackRef::operator*((int)&v49);
  __asm { VSTR            S16, [SP,#0xB8+var_B4] }
  v20(_R6, _R8, 0, 0);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v49);
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
  v22 = *(void (__fastcall **)(GuardianRenderer *, Entity *, int))(*(_DWORD *)_R6 + 68);
  v23 = MatrixStack::MatrixStackRef::operator*((int)&v49);
  __asm { VMOV            R3, S16 }
  v44 = _R3;
  v22(_R6, _R8, v23);
  *((_DWORD *)_R6 + 51) = 1031798784;
  v25 = Entity::getEntityData(_R8);
  _R0 = SynchedEntityData::getFloat((SynchedEntityData *)v25, 39);
    VMOV            S0, R0
    VLDR            S2, [R6,#0xCC]
    VMUL.F32        S0, S2, S0
    VMOV.F32        S2, #0.125
    VSTR            S0, [R6,#0xCC]
  *((_DWORD *)_R6 + 45) = 0;
  *((_DWORD *)_R6 + 46) = 0;
    VLDR            S0, [R8,#0x1A0]
    VCVT.F32.S32    S0, S0
    VADD.F32        S18, S0, S16
    VMUL.F32        S0, S18, S2
    VMOV            R0, S0
  mce::Math::sin(_R0, v28);
  v29 = *((_DWORD *)_R6 + 281);
    VLDR            S0, [R6,#0xCC]
    VSTR            S0, [SP,#0xB8+var_AC]
  (*(void (__fastcall **)(_DWORD, Entity *, _DWORD, _DWORD))(*(_DWORD *)v29 + 80))(*((_DWORD *)_R6 + 281), _R8, 0, 0);
    VMOV.F32        S24, #1.0
    VMOV.F32        S26, #16.0
  v31 = v29 + 1160;
  __asm { VLDR            S22, =0.1 }
  v32 = 0;
  _R0 = &mce::Math::PI;
  _R10 = 0;
  __asm { VLDR            S20, [R0] }
  do
    _R0 = (char *)&GuardianModel::SPIKE_ANGLES + v32;
    __asm { VMOV            S2, R10 }
    _R11 = (char *)&GuardianModel::SPIKE_POSITIONS + v32;
    __asm
    {
      VLDR            S0, [R0]
      VCVT.F32.S32    S2, S2
      VMUL.F32        S0, S0, S20
      VADD.F32        S2, S2, S18
      VSTR            S0, [R7,#0x24]
      VLDR            S0, [R0,#4]
      VMOV            R5, S2
      VSTR            S0, [R7,#0x28]
      VLDR            S0, [R0,#8]
      VSTR            S0, [R7,#0x2C]
      VLDR            S28, [R11]
    }
    _R0 = mce::Math::cos(_R5, v30);
      VMOV            S0, R0
      VMUL.F32        S0, S0, S22
      VADD.F32        S0, S0, S24
      VMUL.F32        S0, S0, S28
      VSTR            S0, [R7]
      VLDR            S28, [R11,#4]
    _R0 = mce::Math::cos(_R5, v39);
      VADD.F32        S0, S0, S26
      VSTR            S0, [R7,#4]
      VLDR            S28, [R11,#8]
    _R0 = mce::Math::cos(_R5, v41);
    __asm { VMOV            S0, R0 }
    ++_R10;
    v32 += 12;
      VSTR            S0, [R7,#8]
    v31 += 220;
  while ( _NF ^ _VF );
  if ( !(*(int (__fastcall **)(Entity *))(*(_DWORD *)_R8 + 172))(_R8) )
    __asm { VSTR            S16, [SP,#0xB8+var_B8] }
    (*(void (__cdecl **)(_DWORD, Entity *, _DWORD))(**((_DWORD **)_R6 + 281) + 68))(*((_DWORD *)_R6 + 281), _R8, 0);
      VLDR            S0, [R6,#0xCC]
      VSTR            S0, [SP,#0xB8+var_A8]
    (*(void (__cdecl **)(_DWORD, int, Entity *, _DWORD))(**((_DWORD **)_R6 + 281) + 60))(
      *((_DWORD *)_R6 + 281),
      v46,
      _R8,
      0);
      VSTR            S0, [SP,#0xB8+var_AC]
    (*(void (__fastcall **)(GuardianRenderer *, BaseEntityRenderContext *, Entity *, int))(*(_DWORD *)_R6 + 76))(
      _R6,
      v45,
      v44);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v49);
}


void __fastcall GuardianRenderer::_getPosition(GuardianRenderer *this, Entity *a2, float _R2, float _R3, int a5)
{
  __asm
  {
    VLDR            S0, [R2,#0x48]
    VMOV            S14, R3
    VLDR            S6, [R2,#0x54]
    VLDR            S2, [R2,#0x4C]
    VLDR            S8, [R2,#0x58]
    VSUB.F32        S0, S0, S6
    VLDR            S4, [R2,#0x50]
    VLDR            S10, [R2,#0x5C]
    VSUB.F32        S2, S2, S8
    VLDR            S12, [SP,#arg_0]
    VADD.F32        S8, S8, S14
    VSUB.F32        S4, S4, S10
    VMUL.F32        S0, S0, S12
    VMUL.F32        S2, S2, S12
    VMUL.F32        S4, S4, S12
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S4, S10
    VSTR            S0, [R0]
    VSTR            S2, [R0,#4]
    VSTR            S4, [R0,#8]
  }
}


Guardian *__fastcall GuardianRenderer::setupScale(int a1, Guardian *a2, int a3)
{
  Guardian *v3; // r5@1
  Guardian *result; // r0@1

  v3 = a2;
  _R4 = a3;
  result = (Guardian *)Guardian::isElder(a2);
  if ( result == (Guardian *)1 )
  {
    __asm { VLDR            S0, [R4] }
    result = (Guardian *)((char *)v3 + 4308);
    __asm
    {
      VLDR            S2, [R0]
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R4]
      VLDR            S0, [R4,#4]
      VSTR            S0, [R4,#4]
      VLDR            S0, [R4,#8]
      VSTR            S0, [R4,#8]
      VLDR            S0, [R4,#0xC]
      VSTR            S0, [R4,#0xC]
      VLDR            S0, [R4,#0x10]
      VSTR            S0, [R4,#0x10]
      VLDR            S0, [R4,#0x14]
      VSTR            S0, [R4,#0x14]
      VLDR            S0, [R4,#0x18]
      VSTR            S0, [R4,#0x18]
      VLDR            S0, [R4,#0x1C]
      VSTR            S0, [R4,#0x1C]
      VLDR            S0, [R4,#0x20]
      VSTR            S0, [R4,#0x20]
      VLDR            S0, [R4,#0x24]
      VSTR            S0, [R4,#0x24]
      VLDR            S0, [R4,#0x28]
      VSTR            S0, [R4,#0x28]
      VLDR            S0, [R4,#0x2C]
      VSTR            S0, [R4,#0x2C]
    }
  }
  return result;
}


int __fastcall GuardianRenderer::_renderGuardianGhost(int a1, BaseEntityRenderContext *this, int a3, int a4, int a5, float a6)
{
  return GuardianRenderer::_renderGuardianGhost(
           (GuardianRenderer *)a1,
           this,
           (Entity *)a3,
           (const Vec3 *)a4,
           *(float *)&a5,
           a6);
}


void __fastcall GuardianRenderer::~GuardianRenderer(GuardianRenderer *this)
{
  GuardianRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DB714;
  v2 = *((_DWORD *)this + 281);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 281) = 0;
  mce::TexturePtr::~TexturePtr((GuardianRenderer *)((char *)v1 + 1100));
  mce::TexturePtr::~TexturePtr((GuardianRenderer *)((char *)v1 + 1076));
  MobRenderer::~MobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}
