

void __fastcall ChalkboardRenderer::~ChalkboardRenderer(ChalkboardRenderer *this)
{
  ChalkboardRenderer::~ChalkboardRenderer(this);
}


int __fastcall ChalkboardRenderer::_getModel(int a1, int a2)
{
  int result; // r0@3

  if ( a2 == 2 )
  {
    result = a1 + 1528;
  }
  else if ( a2 == 1 )
    result = a1 + 808;
  else
    result = a1 + 88;
  return result;
}


int __fastcall ChalkboardRenderer::_getPixelWidth(ChalkboardRenderer *this, int _R1)
{
  int result; // r0@1

  __asm
  {
    VMOV            S2, R1
    VMOV.F32        S0, #-1.0
    VCVT.F32.S32    S2, S2
    VADD.F32        S0, S2, S0
    VLDR            S2, =95.0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =85.0
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}


int __fastcall ChalkboardRenderer::~ChalkboardRenderer(ChalkboardRenderer *this)
{
  ChalkboardRenderer *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DAF20;
  v2 = (ChalkboardRenderer *)((char *)this + 148);
  mce::TexturePtr::~TexturePtr((ChalkboardRenderer *)((char *)this + 2296));
  mce::TexturePtr::~TexturePtr((ChalkboardRenderer *)((char *)v1 + 2272));
  mce::TexturePtr::~TexturePtr((ChalkboardRenderer *)((char *)v1 + 2248));
  *((_DWORD *)v1 + 382) = &off_26E529C;
  ModelPart::~ModelPart((ChalkboardRenderer *)((char *)v1 + 2028));
  ModelPart::~ModelPart((ChalkboardRenderer *)((char *)v1 + 1808));
  ModelPart::~ModelPart((ChalkboardRenderer *)((char *)v1 + 1588));
  mce::MaterialPtr::~MaterialPtr((ChalkboardRenderer *)((char *)v1 + 1576));
  Model::~Model((ChalkboardRenderer *)((char *)v1 + 1528));
  *((_DWORD *)v1 + 202) = &off_26E529C;
  ModelPart::~ModelPart((ChalkboardRenderer *)((char *)v1 + 1308));
  ModelPart::~ModelPart((ChalkboardRenderer *)((char *)v1 + 1088));
  ModelPart::~ModelPart((ChalkboardRenderer *)((char *)v1 + 868));
  mce::MaterialPtr::~MaterialPtr((ChalkboardRenderer *)((char *)v1 + 856));
  Model::~Model((ChalkboardRenderer *)((char *)v1 + 808));
  *((_DWORD *)v1 + 22) = &off_26E529C;
  ModelPart::~ModelPart((ChalkboardRenderer *)((char *)v1 + 588));
  ModelPart::~ModelPart((ChalkboardRenderer *)((char *)v1 + 368));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((ChalkboardRenderer *)((char *)v1 + 136));
  Model::~Model((ChalkboardRenderer *)((char *)v1 + 88));
  mce::MaterialPtr::~MaterialPtr((ChalkboardRenderer *)((char *)v1 + 76));
  return j_j_j__ZN19BlockEntityRendererD2Ev(v1);
}


void __fastcall ChalkboardRenderer::~ChalkboardRenderer(ChalkboardRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)ChalkboardRenderer::~ChalkboardRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


int __fastcall ChalkboardRenderer::render(ChalkboardRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  ChalkboardRenderer *v4; // r4@1
  BlockEntityRenderData *v5; // r5@1
  int v6; // r0@1
  __int64 v7; // kr00_8@1
  int v8; // r6@1
  int result; // r0@1
  signed int v11; // r5@2
  int v12; // r10@2
  int v13; // r1@2
  ChalkboardModel *v14; // r0@4
  ChalkboardRenderer *v15; // r6@4
  int v16; // r4@4
  unsigned int v17; // r7@4
  ChalkboardModel *v22; // r0@5
  unsigned int v23; // r0@7
  int v24; // r0@8
  unsigned int v26; // r5@10
  char *v29; // r7@17
  int v30; // r0@17
  int v31; // r0@17
  int v35; // [sp+0h] [bp-B8h]@0
  ChalkboardModel *v36; // [sp+Ch] [bp-ACh]@4
  signed int v37; // [sp+10h] [bp-A8h]@4
  signed int v38; // [sp+14h] [bp-A4h]@2
  BlockSource *v39; // [sp+18h] [bp-A0h]@4
  int v40; // [sp+1Ch] [bp-9Ch]@3
  char v41; // [sp+20h] [bp-98h]@17
  char v42; // [sp+28h] [bp-90h]@8
  int v43; // [sp+30h] [bp-88h]@17
  int v44; // [sp+34h] [bp-84h]@17
  int v45; // [sp+38h] [bp-80h]@17
  int v46; // [sp+3Ch] [bp-7Ch]@17
  int v47; // [sp+40h] [bp-78h]@17
  int v48; // [sp+44h] [bp-74h]@17
  int v49; // [sp+48h] [bp-70h]@17
  int v50; // [sp+4Ch] [bp-6Ch]@17
  int v51; // [sp+50h] [bp-68h]@17
  int v52; // [sp+54h] [bp-64h]@17
  int v53; // [sp+58h] [bp-60h]@17
  int v54; // [sp+5Ch] [bp-5Ch]@17
  int v55; // [sp+60h] [bp-58h]@17
  int v56; // [sp+64h] [bp-54h]@17
  int v57; // [sp+68h] [bp-50h]@17
  int v58; // [sp+6Ch] [bp-4Ch]@17
  int v59; // [sp+70h] [bp-48h]@17
  int v60; // [sp+74h] [bp-44h]@17
  int v61; // [sp+78h] [bp-40h]@17
  float v62; // [sp+7Ch] [bp-3Ch]@17

  _R9 = a2;
  v4 = this;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  v7 = *(_QWORD *)v5;
  v8 = v6;
  _R8 = *((_DWORD *)v5 + 2);
  result = ChalkboardBlockEntity::isBaseChalkboard((ChalkboardBlockEntity *)(*(_QWORD *)v5 >> 32));
  if ( result != 1 )
    return result;
  v11 = ChalkboardBlockEntity::getWidth((ChalkboardBlockEntity *)HIDWORD(v7));
  v38 = ChalkboardBlockEntity::getHeight((ChalkboardBlockEntity *)HIDWORD(v7));
  v12 = ChalkboardBlockEntity::getChalkboardSize((ChalkboardBlockEntity *)HIDWORD(v7));
  v13 = ChalkboardBlockEntity::isOnGround((ChalkboardBlockEntity *)HIDWORD(v7));
  if ( v12 == 2 )
  {
    v37 = v11;
    v22 = (ChalkboardRenderer *)((char *)v4 + 1528);
    v40 = v8;
LABEL_7:
    v15 = v4;
    v36 = v22;
    v16 = v13;
    ChalkboardModel::showLegs(v22, v13);
    v39 = (BlockSource *)v7;
    v23 = ChalkboardBlockEntity::getRotation((ChalkboardBlockEntity *)HIDWORD(v7), (BlockSource *)v7);
    __asm { VLDR            S16, =0.0 }
    v17 = v23;
    goto LABEL_8;
  }
  v40 = v8;
  if ( v12 != 1 )
    v22 = (ChalkboardRenderer *)((char *)v4 + 88);
    goto LABEL_7;
  v14 = (ChalkboardRenderer *)((char *)v4 + 808);
  v15 = v4;
  v37 = v11;
  v16 = v13;
  v36 = v14;
  ChalkboardModel::showLegs(v14, v13);
  v39 = (BlockSource *)v7;
  v17 = ChalkboardBlockEntity::getRotation((ChalkboardBlockEntity *)HIDWORD(v7), (BlockSource *)v7);
  __asm { VMOV.F32        S16, #0.5 }
LABEL_8:
  v24 = BaseEntityRenderContext::getWorldMatrix(_R9);
  MatrixStack::push((MatrixStack *)&v42, v24);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v42);
  __asm
    VMOV.F32        S0, #0.5
    VLDR            S4, [R8]
    VMOV.F32        S2, #1.5
    VLDR            S6, [R8,#4]
    VLDR            S8, [R8,#8]
    VLDR            S10, [R0,#4]
    VLDR            S1, [R0,#0x10]
    VLDR            S12, [R0,#8]
    VLDR            S14, [R0,#0xC]
    VADD.F32        S4, S4, S0
    VLDR            S3, [R0,#0x18]
    VADD.F32        S2, S6, S2
    VLDR            S6, [R0]
    VADD.F32        S0, S8, S0
    VLDR            S8, [R0,#0x14]
    VLDR            S5, [R0,#0x1C]
    VLDR            S7, [R0,#0x20]
    VMUL.F32        S6, S6, S4
    VMUL.F32        S1, S1, S2
    VMUL.F32        S10, S10, S4
    VMUL.F32        S8, S8, S2
    VMUL.F32        S14, S14, S4
    VMUL.F32        S4, S12, S4
    VLDR            S12, [R0,#0x24]
    VMUL.F32        S3, S3, S2
    VMUL.F32        S2, S5, S2
    VMUL.F32        S5, S7, S0
    VLDR            S7, [R0,#0x28]
    VADD.F32        S6, S1, S6
    VADD.F32        S8, S8, S10
    VLDR            S10, [R0,#0x2C]
    VMUL.F32        S12, S12, S0
    VMUL.F32        S1, S7, S0
    VADD.F32        S4, S3, S4
    VMUL.F32        S0, S10, S0
    VLDR            S10, [R0,#0x34]
    VADD.F32        S2, S2, S14
    VADD.F32        S6, S6, S5
    VADD.F32        S8, S8, S12
    VLDR            S12, [R0,#0x38]
    VADD.F32        S4, S4, S1
    VADD.F32        S0, S2, S0
    VLDR            S2, [R0,#0x30]
    VLDR            S6, [R0,#0x3C]
    VADD.F32        S4, S4, S12
    VADD.F32        S0, S0, S6
    VSTR            S2, [R0,#0x30]
    VSTR            S8, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S0, [R0,#0x3C]
  if ( _ZF )
    v26 = ChalkboardBlockEntity::getRotation((ChalkboardBlockEntity *)HIDWORD(v7), v39);
    MatrixStack::MatrixStackRef::operator->((int)&v42);
    __asm { VMOV.F32        S2, #4.0 }
    _R0 = 360 * v26;
    __asm
    {
      VMOV.F32        S0, #16.0
      VMOV            S4, R0
      VCVT.F32.S32    S4, S4
    }
    if ( !_ZF )
      __asm { VMOVNE.F32      S0, S2 }
      VDIV.F32        S0, S4, S0
      VNEG.F32        S0, S0
  else
    if ( v17 - 1 > 2 )
      __asm { VLDR            S18, =0.0 }
    else
      _R0 = (char *)&unk_262CAE8 + 4 * (v17 - 1);
      __asm { VLDR            S18, [R0] }
    __asm { VNEG.F32        S0, S18 }
  v43 = 0;
  v44 = 1065353216;
  v45 = 0;
  __asm { VSTR            S0, [SP,#0xB8+var_3C] }
  glm::rotate<float>((int)&v46, v7, (int)&v62, (int)&v43);
  *(_DWORD *)v7 = v46;
  *(_DWORD *)(v7 + 4) = v47;
  *(_DWORD *)(v7 + 8) = v48;
  *(_DWORD *)(v7 + 12) = v49;
  *(_DWORD *)(v7 + 16) = v50;
  *(_DWORD *)(v7 + 20) = v51;
  *(_DWORD *)(v7 + 24) = v52;
  *(_DWORD *)(v7 + 28) = v53;
  *(_DWORD *)(v7 + 32) = v54;
  *(_DWORD *)(v7 + 36) = v55;
  *(_DWORD *)(v7 + 40) = v56;
  *(_DWORD *)(v7 + 44) = v57;
  *(_DWORD *)(v7 + 48) = v58;
  *(_DWORD *)(v7 + 52) = v59;
  *(_DWORD *)(v7 + 56) = v60;
  *(_DWORD *)(v7 + 60) = v61;
  v29 = BlockEntity::getPosition((BlockEntity *)HIDWORD(v7));
  __asm { VLDR            S18, [R9,#4] }
  v30 = BaseEntityRenderContext::isIgnoringLightning(_R9);
  __asm { VSTR            S18, [SP,#0xB8+var_B8] }
  EntityShaderManager::_setupShaderParameters((int)v15, v40, (int)v39, (int)v29, v35, v30, &Vec2::ONE);
  v31 = BaseEntityRenderContext::getWorldMatrix(_R9);
  MatrixStack::push((MatrixStack *)&v41, v31);
  if ( !v16 )
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v41);
      VMOV.F32        S0, #0.4375
      VLDR            S2, [R0,#0x20]
      VLDR            S4, [R0,#0x24]
      VLDR            S6, [R0,#0x28]
      VLDR            S8, [R0,#0x2C]
      VLDR            S10, [R0,#0x30]
      VLDR            S12, [R0,#0x34]
      VLDR            S14, [R0,#0x38]
      VMUL.F32        S2, S2, S0
      VLDR            S1, [R0,#0x3C]
      VMUL.F32        S4, S4, S0
      VMUL.F32        S6, S6, S0
      VMUL.F32        S0, S8, S0
      VSUB.F32        S2, S10, S2
      VSUB.F32        S4, S12, S4
      VSUB.F32        S6, S14, S6
      VSUB.F32        S0, S1, S0
      VSTR            S2, [R0,#0x30]
      VSTR            S4, [R0,#0x34]
      VSTR            S6, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v41);
    VLDR            S0, [R0,#4]
    VLDR            S2, [R0,#8]
    VLDR            S4, [R0,#0xC]
    VMUL.F32        S0, S0, S16
    VMUL.F32        S2, S2, S16
    VMUL.F32        S4, S4, S16
    VMUL.F32        S6, S6, S16
    VLDR            S8, [R0,#0x30]
    VLDR            S14, [R0,#0x3C]
    VADD.F32        S0, S10, S0
    VADD.F32        S2, S12, S2
    VADD.F32        S4, S14, S4
    VADD.F32        S6, S8, S6
    VSTR            S6, [R0,#0x30]
    VSTR            S0, [R0,#0x34]
    VSTR            S2, [R0,#0x38]
    VSTR            S4, [R0,#0x3C]
  ChalkboardRenderer::_renderText(v15, _R9, (ChalkboardBlockEntity *)HIDWORD(v7), v37 / 16, v38 / 16);
    VLDR            S0, =0.062375
    VLDR            S2, [R0]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R0]
    VLDR            S2, [R0,#4]
    VSTR            S2, [R0,#4]
    VSTR            S2, [R0,#8]
    VLDR            S2, [R0,#0xC]
    VMUL.F32        S0, S2, S0
    VLDR            S2, =-0.0625
    VSTR            S0, [R0,#0xC]
    VLDR            S0, [R0,#0x10]
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R0,#0x10]
    VLDR            S0, [R0,#0x14]
    VSTR            S0, [R0,#0x14]
    VLDR            S0, [R0,#0x18]
    VSTR            S0, [R0,#0x18]
    VLDR            S0, [R0,#0x1C]
    VSTR            S0, [R0,#0x1C]
    VLDR            S0, [R0,#0x20]
    VSTR            S0, [R0,#0x20]
    VLDR            S0, [R0,#0x24]
    VSTR            S0, [R0,#0x24]
    VLDR            S0, [R0,#0x28]
    VSTR            S0, [R0,#0x28]
    VLDR            S0, [R0,#0x2C]
    VSTR            S0, [R0,#0x2C]
  (*(void (**)(void))(*(_DWORD *)v36 + 56))();
  MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v41);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v42);
}


int __fastcall ChalkboardRenderer::_renderText(ChalkboardRenderer *this, BaseEntityRenderContext *a2, ChalkboardBlockEntity *a3, int a4, int a5)
{
  BaseEntityRenderContext *v5; // r6@1
  ChalkboardRenderer *v6; // r8@1
  ChalkboardBlockEntity *v8; // r5@1
  int v9; // r0@1
  int v15; // r7@3
  int v18; // r7@3
  int v20; // r7@3
  int v21; // r4@3
  int v22; // r0@3
  int *v23; // r0@3
  int v25; // [sp+4h] [bp-A4h]@0
  char v26; // [sp+20h] [bp-88h]@1
  int v27; // [sp+28h] [bp-80h]@3
  signed int v28; // [sp+2Ch] [bp-7Ch]@3
  int v29; // [sp+30h] [bp-78h]@3
  int v30; // [sp+34h] [bp-74h]@3
  int v31; // [sp+38h] [bp-70h]@3
  int v32; // [sp+3Ch] [bp-6Ch]@3
  int v33; // [sp+40h] [bp-68h]@3
  int v34; // [sp+44h] [bp-64h]@3
  int v35; // [sp+48h] [bp-60h]@3
  int v36; // [sp+4Ch] [bp-5Ch]@3
  int v37; // [sp+50h] [bp-58h]@3
  int v38; // [sp+54h] [bp-54h]@3
  int v39; // [sp+58h] [bp-50h]@3
  int v40; // [sp+5Ch] [bp-4Ch]@3
  int v41; // [sp+60h] [bp-48h]@3
  int v42; // [sp+64h] [bp-44h]@3
  int v43; // [sp+68h] [bp-40h]@3
  int v44; // [sp+6Ch] [bp-3Ch]@3
  int v45; // [sp+70h] [bp-38h]@3
  int v46; // [sp+74h] [bp-34h]@3

  v5 = a2;
  v6 = this;
  _R4 = a4;
  v8 = a3;
  v9 = BaseEntityRenderContext::getWorldMatrix(a2);
  MatrixStack::push((MatrixStack *)&v26, v9);
  _R0 = a5;
  __asm
  {
    VMOV            S2, R4
    VMOV.F32        S0, #-0.5
    VCVT.F32.S32    S16, S2
    VMOV            S2, R0
    VMOV.F32        S18, #0.25
    VCVT.F32.S32    S20, S2
  }
  if ( _ZF )
    __asm { VMOVEQ.F32      S18, S0 }
  v15 = MatrixStack::MatrixStackRef::operator->((int)&v26);
  v27 = 0;
  v28 = 1065353216;
  v29 = 0;
  v46 = 1127481344;
  glm::rotate<float>((int)&v30, v15, (int)&v46, (int)&v27);
  *(_DWORD *)v15 = v30;
  *(_DWORD *)(v15 + 4) = v31;
  *(_DWORD *)(v15 + 8) = v32;
  *(_DWORD *)(v15 + 12) = v33;
  *(_DWORD *)(v15 + 16) = v34;
  *(_DWORD *)(v15 + 20) = v35;
  *(_DWORD *)(v15 + 24) = v36;
  *(_DWORD *)(v15 + 28) = v37;
  *(_DWORD *)(v15 + 32) = v38;
  *(_DWORD *)(v15 + 36) = v39;
  *(_DWORD *)(v15 + 40) = v40;
  *(_DWORD *)(v15 + 44) = v41;
  *(_DWORD *)(v15 + 48) = v42;
  *(_DWORD *)(v15 + 52) = v43;
  *(_DWORD *)(v15 + 56) = v44;
  *(_DWORD *)(v15 + 60) = v45;
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v26);
    VMOV.F32        S0, #0.5
    VLDR            S4, =-0.1
    VMUL.F32        S2, S20, S18
    VLDR            S6, [R0,#8]
    VLDR            S8, [R0,#0xC]
    VLDR            S10, [R0,#0x10]
    VLDR            S12, [R0,#0x14]
    VLDR            S14, [R0,#0x18]
    VLDR            S1, [R0,#0x1C]
    VMUL.F32        S0, S16, S0
    VLDR            S5, =-0.0625
    VADD.F32        S0, S0, S4
    VLDR            S4, =-0.075
    VADD.F32        S2, S2, S4
    VLDMIA          R0, {S3-S4}
    VLDR            S7, [R0,#0x20]
    VMUL.F32        S3, S3, S0
    VMUL.F32        S4, S4, S0
    VMUL.F32        S10, S10, S2
    VMUL.F32        S12, S12, S2
    VMUL.F32        S8, S8, S0
    VMUL.F32        S0, S6, S0
    VLDR            S6, [R0,#0x24]
    VMUL.F32        S14, S14, S2
    VMUL.F32        S2, S1, S2
    VMUL.F32        S1, S7, S5
    VLDR            S7, [R0,#0x28]
    VADD.F32        S10, S10, S3
    VADD.F32        S4, S12, S4
    VLDR            S12, [R0,#0x2C]
    VMUL.F32        S6, S6, S5
    VMUL.F32        S3, S7, S5
    VADD.F32        S0, S14, S0
    VADD.F32        S2, S2, S8
    VMUL.F32        S12, S12, S5
    VADD.F32        S8, S10, S1
    VLDR            S10, [R0,#0x34]
    VADD.F32        S4, S4, S6
    VLDR            S6, [R0,#0x30]
    VADD.F32        S0, S0, S3
    VADD.F32        S2, S2, S12
    VLDR            S12, [R0,#0x38]
    VADD.F32        S6, S8, S6
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S4, S4, S10
    VADD.F32        S0, S0, S12
    VSTR            S6, [R0,#0x30]
    VSTR            S4, [R0,#0x34]
    VSTR            S0, [R0,#0x38]
    VSTR            S2, [R0,#0x3C]
  v18 = MatrixStack::MatrixStackRef::operator->((int)&v26);
  v28 = 0;
  v29 = 1065353216;
  glm::rotate<float>((int)&v30, v18, (int)&v46, (int)&v27);
  *(_DWORD *)v18 = v30;
  *(_DWORD *)(v18 + 4) = v31;
  *(_DWORD *)(v18 + 8) = v32;
  *(_DWORD *)(v18 + 12) = v33;
  *(_DWORD *)(v18 + 16) = v34;
  *(_DWORD *)(v18 + 20) = v35;
  *(_DWORD *)(v18 + 24) = v36;
  *(_DWORD *)(v18 + 28) = v37;
  *(_DWORD *)(v18 + 32) = v38;
  *(_DWORD *)(v18 + 36) = v39;
  *(_DWORD *)(v18 + 40) = v40;
  *(_DWORD *)(v18 + 44) = v41;
  *(_DWORD *)(v18 + 48) = v42;
  *(_DWORD *)(v18 + 52) = v43;
  *(_DWORD *)(v18 + 56) = v44;
  *(_DWORD *)(v18 + 60) = v45;
    VLDR            S0, =0.010417
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
    VSTR            S2, [R0,#0x1C]
    VLDR            S2, [R0,#0x20]
    VSTR            S2, [R0,#0x20]
    VLDR            S2, [R0,#0x24]
    VSTR            S2, [R0,#0x24]
    VLDR            S2, [R0,#0x28]
    VSTR            S2, [R0,#0x28]
    VLDR            S2, [R0,#0x2C]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R0,#0x2C]
  v20 = BaseEntityRenderContext::getFont(v5);
  v21 = BaseEntityRenderContext::getScreenContext(v5);
  v22 = BaseEntityRenderContext::getScreenContext(v5);
  v23 = ChalkboardBlockEntity::getText(v8, *(const UIProfanityContext **)(v22 + 56));
    VMOV.F32        S0, #-1.0
    VLDR            S2, =95.0
    VADD.F32        S0, S16, S0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =85.0
    VADD.F32        S0, S0, S2
    VSTR            S0, [SP,#0xA8+var_A4]
  Font::drawWordWrap(
    *(float *)&v20,
    *(float *)&v21,
    (int)v23,
    0.0,
    0,
    v25,
    (int)&Color::WHITE,
    1065353216,
    (int)v6 + 76);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v26);
}


BaseEntityRenderer *__fastcall ChalkboardRenderer::ChalkboardRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2, int a3)
{
  int v3; // r6@1
  mce::TextureGroup *v4; // r11@1
  BaseEntityRenderer *v5; // r4@1
  void *v6; // r0@1
  void *v7; // r0@2
  void *v8; // r0@3
  void *v9; // r0@4
  char *v10; // r0@5
  char *v11; // r0@6
  char *v12; // r0@7
  char *v13; // r0@8
  char *v14; // r0@9
  char *v15; // r0@10
  BaseEntityRenderer *result; // r0@11
  unsigned int *v17; // r2@12
  signed int v18; // r1@14
  unsigned int *v19; // r2@16
  signed int v20; // r1@18
  unsigned int *v21; // r2@20
  signed int v22; // r1@22
  unsigned int *v23; // r2@24
  signed int v24; // r1@26
  unsigned int *v25; // r2@28
  signed int v26; // r1@30
  unsigned int *v27; // r2@32
  signed int v28; // r1@34
  unsigned int *v29; // r2@36
  signed int v30; // r1@38
  unsigned int *v31; // r2@40
  signed int v32; // r1@42
  unsigned int *v33; // r2@44
  signed int v34; // r1@46
  unsigned int *v35; // r2@48
  signed int v36; // r1@50
  char *v37; // [sp+Ch] [bp-8Ch]@9
  char *v38; // [sp+10h] [bp-88h]@9
  int v39; // [sp+14h] [bp-84h]@9
  char *v40; // [sp+1Ch] [bp-7Ch]@7
  char *v41; // [sp+20h] [bp-78h]@7
  int v42; // [sp+24h] [bp-74h]@7
  char *v43; // [sp+2Ch] [bp-6Ch]@5
  char *v44; // [sp+30h] [bp-68h]@5
  int v45; // [sp+34h] [bp-64h]@5
  int v46; // [sp+3Ch] [bp-5Ch]@4
  char v47; // [sp+40h] [bp-58h]@4
  int v48; // [sp+4Ch] [bp-4Ch]@3
  char v49; // [sp+50h] [bp-48h]@3
  int v50; // [sp+5Ch] [bp-3Ch]@2
  char v51; // [sp+60h] [bp-38h]@2
  int v52; // [sp+6Ch] [bp-2Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  BaseEntityRenderer::BaseEntityRenderer(a1);
  *(_DWORD *)v5 = &off_26DAF20;
  sub_119C884((void **)&v52, "sign_text");
  mce::MaterialPtr::MaterialPtr(
    (BaseEntityRenderer *)((char *)v5 + 76),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v52);
  v6 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v52 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  sub_119C884((void **)&v50, "geometry.chalkboard_small");
  GeometryGroup::getGeometry((GeometryPtr *)&v51, v3, (const void **)&v50);
  ChalkboardModel::ChalkboardModel((BaseEntityRenderer *)((char *)v5 + 88), (const GeometryPtr *)&v51);
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v51);
  v7 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v50 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v48, "geometry.chalkboard_medium");
  GeometryGroup::getGeometry((GeometryPtr *)&v49, v3, (const void **)&v48);
  ChalkboardModel::ChalkboardModel((BaseEntityRenderer *)((char *)v5 + 808), (const GeometryPtr *)&v49);
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v49);
  v8 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v48 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v46, "geometry.chalkboard_large");
  GeometryGroup::getGeometry((GeometryPtr *)&v47, v3, (const void **)&v46);
  ChalkboardModel::ChalkboardModel((BaseEntityRenderer *)((char *)v5 + 1528), (const GeometryPtr *)&v47);
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v47);
  v9 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v46 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v43, "textures/item/chalkboard/chalkboard_small");
  v44 = v43;
  v43 = (char *)&unk_28898CC;
  v45 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 2248), v4, (int)&v44, 0);
  v10 = v44 - 12;
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v44 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = v43 - 12;
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v43 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v40, "textures/item/chalkboard/chalkboard_medium");
  v41 = v40;
  v40 = (char *)&unk_28898CC;
  v42 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 2272), v4, (int)&v41, 0);
  v12 = v41 - 12;
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v41 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = v40 - 12;
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v40 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v37, "textures/item/chalkboard/chalkboard_large");
  v38 = v37;
  v37 = (char *)&unk_28898CC;
  v39 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 2296), v4, (int)&v38, 0);
  v14 = v38 - 12;
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v38 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = v37 - 12;
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v37 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  *((_DWORD *)v5 + 30) = (char *)v5 + 2248;
  result = v5;
  *((_DWORD *)v5 + 210) = (char *)v5 + 2272;
  *((_DWORD *)v5 + 390) = (char *)v5 + 2296;
  return result;
}
