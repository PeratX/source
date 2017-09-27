

_DWORD *__fastcall BaseEntityRenderer::BaseEntityRenderer(_DWORD *a1)
{
  _DWORD *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@2
  void *v4; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v12; // [sp+8h] [bp-30h]@3
  int v13; // [sp+10h] [bp-28h]@2
  int v14; // [sp+18h] [bp-20h]@1

  v1 = a1;
  EntityShaderManager::EntityShaderManager(a1);
  *v1 = &off_26DCC50;
  sub_119C884((void **)&v14, "name_tag");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 10),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v14);
  v2 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  sub_119C884((void **)&v13, "name_tag_depth_tested");
    (mce::MaterialPtr *)(v1 + 13),
    &v13);
  v3 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v13 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  sub_119C884((void **)&v12, "name_text_depth_tested");
    (mce::MaterialPtr *)(v1 + 16),
    &v12);
  v4 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  return v1;
}


void __fastcall BaseEntityRenderer::~BaseEntityRenderer(BaseEntityRenderer *this)
{
  BaseEntityRenderer *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DCC50;
  v2 = (BaseEntityRenderer *)((char *)this + 16);
  mce::MaterialPtr::~MaterialPtr((BaseEntityRenderer *)((char *)this + 64));
  mce::MaterialPtr::~MaterialPtr((BaseEntityRenderer *)((char *)v1 + 52));
  mce::MaterialPtr::~MaterialPtr((BaseEntityRenderer *)((char *)v1 + 40));
  *(_DWORD *)v1 = &off_26DCC64;
  mce::MaterialPtr::~MaterialPtr((BaseEntityRenderer *)((char *)v1 + 28));
  mce::MaterialPtr::~MaterialPtr(v2);
  mce::MaterialPtr::~MaterialPtr((BaseEntityRenderer *)((char *)v1 + 4));
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall BaseEntityRenderer::_renderTextInternal(int a1, BaseEntityRenderContext *this, int a3, int a4, int a5, int a6, int a7, int a8)
{
  BaseEntityRenderContext *v8; // r7@1
  int v9; // r8@1
  int *v11; // r9@1
  int v12; // r11@1
  int v13; // r10@1
  int v14; // r0@1
  int v22; // r4@1
  int v24; // r4@1
  int v27; // r4@1
  Tessellator *v28; // r7@1
  int v32; // r2@1
  float v35; // [sp+24h] [bp-A4h]@1
  float v36; // [sp+30h] [bp-98h]@1
  char v38; // [sp+38h] [bp-90h]@1
  int v39; // [sp+40h] [bp-88h]@1
  signed int v40; // [sp+44h] [bp-84h]@1
  int v41; // [sp+48h] [bp-80h]@1
  int v42; // [sp+4Ch] [bp-7Ch]@1
  int v43; // [sp+50h] [bp-78h]@1
  int v44; // [sp+54h] [bp-74h]@1
  int v45; // [sp+58h] [bp-70h]@1
  int v46; // [sp+5Ch] [bp-6Ch]@1
  int v47; // [sp+60h] [bp-68h]@1
  int v48; // [sp+64h] [bp-64h]@1
  int v49; // [sp+68h] [bp-60h]@1
  int v50; // [sp+6Ch] [bp-5Ch]@1
  int v51; // [sp+70h] [bp-58h]@1
  int v52; // [sp+74h] [bp-54h]@1
  int v53; // [sp+78h] [bp-50h]@1
  int v54; // [sp+7Ch] [bp-4Ch]@1
  int v55; // [sp+80h] [bp-48h]@1
  int v56; // [sp+84h] [bp-44h]@1
  int v57; // [sp+88h] [bp-40h]@1
  float v58; // [sp+8Ch] [bp-3Ch]@1

  v8 = this;
  v9 = a1;
  _R6 = a4;
  v11 = (int *)a3;
  v12 = BaseEntityRenderContext::getScreenContext(this);
  v13 = BaseEntityRenderContext::getFont(v8);
  v14 = BaseEntityRenderContext::getWorldMatrix(v8);
  MatrixStack::push((MatrixStack *)&v38, v14);
  _R5 = BaseEntityRenderContext::getCameraTargetPosition(v8);
  _R4 = BaseEntityRenderContext::getCameraPosition(v8);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v38);
  __asm
  {
    VLDR            S0, [R5]
    VLDR            S6, [R6]
    VLDR            S2, [R5,#4]
    VLDR            S8, [R6,#4]
    VSUB.F32        S0, S6, S0
    VLDR            S12, [R0]
    VSUB.F32        S2, S8, S2
    VLDR            S14, [R0,#4]
    VLDR            S5, [R0,#0x14]
    VLDR            S7, [R0,#0x10]
    VLDR            S4, [R5,#8]
    VLDR            S10, [R6,#8]
    VLDR            S3, [R0,#0xC]
    VMUL.F32        S12, S12, S0
    VLDR            S9, [R0,#0x18]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S7, S7, S2
    VLDR            S1, [R0,#8]
    VMUL.F32        S14, S14, S0
    VLDR            S11, [R0,#0x1C]
    VMUL.F32        S5, S5, S2
    VLDR            S13, [R0,#0x20]
    VMUL.F32        S3, S3, S0
    VMUL.F32        S0, S1, S0
    VLDR            S1, [R0,#0x24]
    VMUL.F32        S9, S9, S2
    VMUL.F32        S2, S11, S2
    VMUL.F32        S11, S13, S4
    VLDR            S13, [R0,#0x28]
    VADD.F32        S12, S7, S12
    VADD.F32        S14, S5, S14
    VLDR            S5, [R0,#0x2C]
    VMUL.F32        S1, S1, S4
    VMUL.F32        S7, S13, S4
    VADD.F32        S0, S9, S0
    VADD.F32        S2, S2, S3
    VLDR            S3, [R0,#0x38]
    VMUL.F32        S4, S5, S4
    VADD.F32        S12, S12, S11
    VADD.F32        S14, S14, S1
    VLDR            S1, [R0,#0x34]
    VADD.F32        S0, S0, S7
    VADD.F32        S2, S2, S4
    VLDR            S4, [R0,#0x30]
    VADD.F32        S4, S12, S4
    VLDR            S12, [R0,#0x3C]
    VADD.F32        S0, S0, S3
    VADD.F32        S2, S2, S12
    VSTR            S4, [R0,#0x30]
    VSTR            S14, [R0,#0x34]
    VSTR            S0, [R0,#0x38]
    VSTR            S2, [R0,#0x3C]
    VLDR            S0, [R4]
    VLDR            S2, [R4,#4]
    VLDR            S4, [R4,#8]
    VSUB.F32        S0, S0, S6
    VSUB.F32        S2, S2, S8
    VSUB.F32        S4, S4, S10
    VSTR            S0, [SP,#0xC8+var_A4]
    VSTR            S2, [SP,#0xC8+var_A0]
    VSTR            S4, [SP,#0xC8+var_9C]
  }
  mce::MathUtility::getRotationFromNegZToVector((int)&v36, (int)&v35);
    VLDR            S16, [SP,#0xC8+var_98]
    VLDR            S18, [SP,#0xC8+var_94]
  v22 = MatrixStack::MatrixStackRef::operator->((int)&v38);
  v39 = 0;
  _R0 = &mce::Math::RADDEG;
  v40 = 1065353216;
  v41 = 0;
    VLDR            S0, [R0]
    VNMUL.F32       S0, S18, S0
    VSTR            S0, [SP,#0xC8+var_3C]
  glm::rotate<float>((int)&v42, v22, (int)&v58, (int)&v39);
  *(_DWORD *)v22 = v42;
  *(_DWORD *)(v22 + 4) = v43;
  *(_DWORD *)(v22 + 8) = v44;
  *(_DWORD *)(v22 + 12) = v45;
  *(_DWORD *)(v22 + 16) = v46;
  *(_DWORD *)(v22 + 20) = v47;
  *(_DWORD *)(v22 + 24) = v48;
  *(_DWORD *)(v22 + 28) = v49;
  *(_DWORD *)(v22 + 32) = v50;
  *(_DWORD *)(v22 + 36) = v51;
  *(_DWORD *)(v22 + 40) = v52;
  *(_DWORD *)(v22 + 44) = v53;
  *(_DWORD *)(v22 + 48) = v54;
  *(_DWORD *)(v22 + 52) = v55;
  *(_DWORD *)(v22 + 56) = v56;
  *(_DWORD *)(v22 + 60) = v57;
  v24 = MatrixStack::MatrixStackRef::operator->((int)&v38);
  v39 = 1065353216;
  v40 = 0;
    VMUL.F32        S0, S0, S16
  glm::rotate<float>((int)&v42, v24, (int)&v58, (int)&v39);
  *(_DWORD *)v24 = v42;
  *(_DWORD *)(v24 + 4) = v43;
  *(_DWORD *)(v24 + 8) = v44;
  *(_DWORD *)(v24 + 12) = v45;
  *(_DWORD *)(v24 + 16) = v46;
  *(_DWORD *)(v24 + 20) = v47;
  *(_DWORD *)(v24 + 24) = v48;
  *(_DWORD *)(v24 + 28) = v49;
  *(_DWORD *)(v24 + 32) = v50;
  *(_DWORD *)(v24 + 36) = v51;
  *(_DWORD *)(v24 + 40) = v52;
  *(_DWORD *)(v24 + 44) = v53;
  *(_DWORD *)(v24 + 48) = v54;
  *(_DWORD *)(v24 + 52) = v55;
  *(_DWORD *)(v24 + 56) = v56;
  *(_DWORD *)(v24 + 60) = v57;
    VLDR            S0, =-0.026667
    VLDR            S2, [R0]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R0]
    VLDR            S2, [R0,#4]
    VSTR            S2, [R0,#4]
    VLDR            S2, [R0,#8]
    VSTR            S2, [R0,#8]
    VLDR            S2, [R0,#0xC]
    VSTR            S2, [R0,#0xC]
    VLDR            S2, [R0,#0x10]
    VSTR            S2, [R0,#0x10]
    VLDR            S2, [R0,#0x14]
    VSTR            S2, [R0,#0x14]
    VLDR            S2, [R0,#0x18]
    VSTR            S2, [R0,#0x18]
    VLDR            S2, [R0,#0x1C]
    VMUL.F32        S0, S2, S0
    VLDR            S2, =0.026667
    VSTR            S0, [R0,#0x1C]
    VLDR            S0, [R0,#0x20]
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R0,#0x20]
    VLDR            S0, [R0,#0x24]
    VSTR            S0, [R0,#0x24]
    VLDR            S0, [R0,#0x28]
    VSTR            S0, [R0,#0x28]
    VLDR            S0, [R0,#0x2C]
    VSTR            S0, [R0,#0x2C]
  v27 = Font::getLineLength(v13, v11, 1065353216, 0);
  v28 = (Tessellator *)BaseEntityRenderContext::getTessellator(v8);
  ShaderColor::setColor(*(ShaderColor **)(v12 + 48), (const Color *)a8);
  Tessellator::begin(v28, 4, 0);
  __asm { VMOV.F32        S0, #-1.0 }
  _R0 = v27 / 2;
    VMOV            S2, R0
    VCVT.F32.S32    S16, S2
    VSUB.F32        S0, S0, S16
    VMOV            R4, S0
  Tessellator::vertex(v28, _R4, -1.0, 0.0);
  Tessellator::vertex(v28, _R4, 8.0, 0.0);
    VMOV.F32        S0, #1.0
    VADD.F32        S0, S16, S0
  v32 = a6;
  if ( !a6 )
    v32 = v9 + 40;
  Tessellator::draw((char *)v28, v12, v32);
    VNEG.F32        S0, S16
    VMOV            R3, S0
  Font::drawCached(*(float *)&v13, v12, (int)v11, _R3, 0, a5, 0, 0.0, a7, -1, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v38);
}


BaseEntityRenderer *__fastcall BaseEntityRenderer::~BaseEntityRenderer(BaseEntityRenderer *this)
{
  BaseEntityRenderer *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DCC50;
  v2 = (BaseEntityRenderer *)((char *)this + 16);
  mce::MaterialPtr::~MaterialPtr((BaseEntityRenderer *)((char *)this + 64));
  mce::MaterialPtr::~MaterialPtr((BaseEntityRenderer *)((char *)v1 + 52));
  mce::MaterialPtr::~MaterialPtr((BaseEntityRenderer *)((char *)v1 + 40));
  *(_DWORD *)v1 = &off_26DCC64;
  mce::MaterialPtr::~MaterialPtr((BaseEntityRenderer *)((char *)v1 + 28));
  mce::MaterialPtr::~MaterialPtr(v2);
  mce::MaterialPtr::~MaterialPtr((BaseEntityRenderer *)((char *)v1 + 4));
  return v1;
}


char *__fastcall BaseEntityRenderer::getDepthTestedNameTextMat(BaseEntityRenderer *this)
{
  return (char *)this + 64;
}


char *__fastcall BaseEntityRenderer::getDepthTestedNameTagMat(BaseEntityRenderer *this)
{
  return (char *)this + 52;
}


void __fastcall BaseEntityRenderer::~BaseEntityRenderer(BaseEntityRenderer *this)
{
  BaseEntityRenderer::~BaseEntityRenderer(this);
}


int __fastcall BaseEntityRenderer::renderText(int a1, BaseEntityRenderContext *this, int a3, int a4, int a5)
{
  BaseEntityRenderContext *v5; // r6@1
  int v6; // r7@1
  int v7; // r8@1
  int v8; // r9@1
  int v15; // r1@2
  int v16; // r2@2
  float *v17; // r0@2
  int *v19; // [sp+0h] [bp-50h]@2
  int v20; // [sp+4h] [bp-4Ch]@2
  float v21; // [sp+14h] [bp-3Ch]@2
  int v22; // [sp+24h] [bp-2Ch]@2
  int v23; // [sp+28h] [bp-28h]@2
  int v24; // [sp+2Ch] [bp-24h]@2

  v5 = this;
  v6 = a1;
  v7 = a4;
  v8 = a3;
  _R4 = a5;
  if ( BaseEntityRenderContext::isRealityFullVRMode(this) )
  {
    _R5 = &BaseEntityRenderer::NAME_TAG_COLOR;
    BaseEntityRenderer::_renderTextInternal(
      v6,
      v5,
      v8,
      v7,
      a5,
      v6 + 52,
      v6 + 64,
      (int)&BaseEntityRenderer::NAME_TAG_COLOR);
    __asm
    {
      VMOV.F32        S0, #0.25
      VLDR            S2, [R4,#0xC]
    }
    v15 = *(_DWORD *)(a5 + 4);
    v16 = *(_DWORD *)(a5 + 8);
    v22 = *(_DWORD *)a5;
    v23 = v15;
    v24 = v16;
    __asm { VLDR            S4, [R5,#4] }
    v17 = &v21;
      VLDR            S6, [R5,#8]
      VMUL.F32        S2, S2, S0
      VLDR            S8, [R5,#0xC]
      VMUL.F32        S4, S4, S0
      VMUL.F32        S6, S6, S0
      VSTR            S2, [SP,#0x50+var_20]
      VLDR            S2, [R5]
      VMUL.F32        S0, S8, S0
      VSTR            S2, [SP,#0x50+var_3C]
      VSTR            S4, [SP,#0x50+var_38]
      VSTR            S6, [SP,#0x50+var_34]
      VSTR            S0, [SP,#0x50+var_30]
    v19 = &v22;
    v20 = v6 + 40;
  }
  else
    v19 = (int *)a5;
    v17 = (float *)&BaseEntityRenderer::NAME_TAG_COLOR;
  return BaseEntityRenderer::_renderTextInternal(v6, v5, v8, v7, (int)v19, v20, 0, (int)v17);
}
