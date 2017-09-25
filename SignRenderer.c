

int __fastcall SignRenderer::_renderText(SignRenderer *this, BaseEntityRenderContext *a2, BlockEntity *a3, float a4)
{
  BaseEntityRenderContext *v4; // r9@1
  SignRenderer *v5; // r8@1
  BlockEntity *v7; // r6@1
  int v8; // r0@1
  Font *v9; // r4@1
  int v16; // r0@1
  int *v17; // r0@1
  int *v19; // r10@1
  const void **v20; // r8@1
  char *v21; // r7@1
  unsigned int *v22; // r2@2
  signed int v23; // r1@4
  unsigned int *v24; // r2@6
  signed int v25; // r1@8
  char *v26; // r0@18
  int v27; // r0@18
  const void **v29; // r5@22
  const void **v30; // r0@22
  int *v31; // r8@22
  char *v32; // r0@22
  int v33; // r10@23
  char *v36; // r0@23
  int v37; // r5@21
  char *v40; // r0@26
  void **v41; // r0@27
  void *v42; // r0@27
  unsigned int *v44; // r2@29
  signed int v45; // r1@31
  unsigned int *v46; // r2@33
  signed int v47; // r1@35
  int v48; // [sp+0h] [bp-148h]@0
  int v49; // [sp+30h] [bp-118h]@1
  char *v50; // [sp+34h] [bp-114h]@1
  char *v51; // [sp+38h] [bp-110h]@6
  _DWORD *v52; // [sp+3Ch] [bp-10Ch]@1
  void **v53; // [sp+40h] [bp-108h]@1
  int v54; // [sp+44h] [bp-104h]@28
  void **v55; // [sp+48h] [bp-100h]@27
  void **v56; // [sp+4Ch] [bp-FCh]@27
  int v57; // [sp+68h] [bp-E0h]@28
  int v58; // [sp+70h] [bp-D8h]@27
  int v59; // [sp+74h] [bp-D4h]@28
  char v60; // [sp+FCh] [bp-4Ch]@1

  v4 = a2;
  v5 = this;
  _R5 = a4;
  v7 = a3;
  v8 = BaseEntityRenderContext::getWorldMatrix(a2);
  MatrixStack::push((MatrixStack *)&v60, v8);
  v9 = (Font *)BaseEntityRenderContext::getFont(v4);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v60);
  __asm
  {
    VMOV            S16, R5
    VLDR            S0, =0.46
    VLDR            S2, =0.07
    VMUL.F32        S0, S16, S0
    VLDR            S4, [R0,#0x14]
    VMUL.F32        S2, S16, S2
    VLDR            S6, [R0,#0x18]
    VLDR            S10, [R0,#0x20]
    VLDR            S12, [R0,#0x24]
    VLDR            S14, [R0,#0x28]
    VLDR            S3, [R0,#0x10]
    VLDR            S8, [R0,#0x1C]
    VLDR            S1, [R0,#0x2C]
    VMUL.F32        S4, S4, S0
    VMUL.F32        S12, S12, S2
    VMUL.F32        S3, S3, S0
    VMUL.F32        S6, S6, S0
    VMUL.F32        S14, S14, S2
    VMUL.F32        S10, S10, S2
    VMUL.F32        S0, S8, S0
    VMUL.F32        S2, S1, S2
    VADD.F32        S4, S12, S4
    VLDR            S12, [R0,#0x38]
    VADD.F32        S6, S14, S6
    VLDR            S14, [R0,#0x3C]
    VADD.F32        S8, S10, S3
    VLDR            S10, [R0,#0x34]
    VADD.F32        S0, S2, S0
    VLDR            S2, [R0,#0x30]
    VADD.F32        S4, S4, S10
    VADD.F32        S6, S6, S12
    VADD.F32        S2, S8, S2
    VADD.F32        S0, S0, S14
    VSTR            S2, [R0,#0x30]
    VSTR            S4, [R0,#0x34]
    VSTR            S6, [R0,#0x38]
    VSTR            S0, [R0,#0x3C]
  }
    VLDR            S0, =0.015625
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
    VNMUL.F32       S2, S0, S2
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
  v16 = BaseEntityRenderContext::getScreenContext(v4);
  v17 = SignBlockEntity::getMessage(v7, *(const UIProfanityContext **)(v16 + 56));
  sub_119DC40((int)&v53, (unsigned int *)v17, 24);
    VMOV.F32        S16, #-2.0
    VMOV.F32        S18, #0.5
  _R11 = 0;
  v19 = &dword_28898C0;
  v49 = (int)v5 + 576;
  v20 = (const void **)&v50;
  v21 = (char *)&unk_28898CC;
  v52 = &unk_28898CC;
  do
    v26 = sub_119D71C((char *)&v53, (const void **)&v52, 10);
    v27 = (int)&v26[*(_DWORD *)(*(_DWORD *)v26 - 12)];
    if ( !v27 || *(_DWORD *)(v27 + 20) & 5 )
      break;
    _R5 = Font::getWrapHeight(v9);
    __asm
    {
      VMOV            S0, R11
      VCVT.F32.S32    S20, S0
    }
    SignBlockEntity::getSelectedLine(v7);
      VADD.F32        S2, S20, S16
      VMOV            S0, R5
      VMUL.F32        S20, S0, S2
    if ( _ZF )
      v50 = v21;
      v29 = v20;
      sub_119CAF8(v20, *(v52 - 3) + 2);
      sub_119C894(v20, "> ", 2u);
      sub_119C8A4(v20, (const void **)&v52);
      v30 = sub_119C894(v20, " <", 2u);
      v31 = v19;
      v51 = (char *)*v30;
      *v30 = v21;
      v32 = v50 - 12;
      if ( (int *)(v50 - 12) != v19 )
      {
        v22 = (unsigned int *)(v50 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        }
        else
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v32);
      }
      v33 = BaseEntityRenderContext::getScreenContext(v4);
      _R0 = -Font::getLineLength((int)v9, (int *)&v51, 1065353216, 0);
      __asm
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
        VMUL.F32        S0, S0, S18
        VMOV            R3, S0
        VSTR            S20, [SP,#0x148+var_148]
      Font::drawCached(*(float *)&v9, v33, (int)&v51, _R3, v48, (int)&Color::BLACK, 0, 0.0, v49, -1, 0, 0);
      v19 = v31;
      v36 = v51 - 12;
      if ( (int *)(v51 - 12) != v31 )
        v24 = (unsigned int *)(v51 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v36);
      v20 = v29;
      v21 = (char *)&unk_28898CC;
    else
      v37 = BaseEntityRenderContext::getScreenContext(v4);
      _R0 = -Font::getLineLength((int)v9, (int *)&v52, 1065353216, 0);
      Font::drawCached(*(float *)&v9, v37, (int)&v52, _R3, v48, (int)&Color::BLACK, 0, 0.0, v49, -1, 0, 0);
    ++_R11;
  while ( _R11 < 4 );
  v40 = (char *)(v52 - 3);
  if ( v52 - 3 != &dword_28898C0 )
    v44 = v52 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  v41 = off_26D3F84;
  v53 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v53) = off_26D3F80[0];
  v55 = v41;
  v56 = &off_27734E8;
  v42 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v58 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
  v56 = &off_26D40A8;
  sub_119C954((unsigned int **)&v57);
  v53 = (void **)off_26D3F68;
  *(void ***)((char *)&v53 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v54 = 0;
  sub_119C964(&v59);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v60);
}


void __fastcall SignRenderer::~SignRenderer(SignRenderer *this)
{
  SignRenderer::~SignRenderer(this);
}


BaseEntityRenderer *__fastcall SignRenderer::SignRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r7@1
  BaseEntityRenderer *v3; // r4@1
  void *v4; // r0@1
  char *v5; // r0@2
  char *v6; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  char *v14; // [sp+8h] [bp-30h]@2
  char *v15; // [sp+Ch] [bp-2Ch]@2
  int v16; // [sp+10h] [bp-28h]@2
  int v17; // [sp+18h] [bp-20h]@1

  v2 = a2;
  v3 = a1;
  BaseEntityRenderer::BaseEntityRenderer(a1);
  *(_DWORD *)v3 = &off_26DB124;
  SignModel::SignModel((BaseEntityRenderer *)((char *)v3 + 76));
  sub_119C884((void **)&v17, "sign_text");
  mce::MaterialPtr::MaterialPtr(
    (BaseEntityRenderer *)((char *)v3 + 576),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v17);
  v4 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  sub_119C884((void **)&v14, "textures/entity/sign");
  v15 = v14;
  v14 = (char *)&unk_28898CC;
  v16 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 588), v2, (int)&v15, 0);
  v5 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v15 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  return v3;
}


void __fastcall SignRenderer::~SignRenderer(SignRenderer *this)
{
  SignRenderer *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB124;
  v2 = (SignRenderer *)((char *)this + 136);
  mce::TexturePtr::~TexturePtr((SignRenderer *)((char *)this + 588));
  mce::MaterialPtr::~MaterialPtr((SignRenderer *)((char *)v1 + 576));
  *((_DWORD *)v1 + 19) = &off_26DB140;
  ModelPart::~ModelPart((SignRenderer *)((char *)v1 + 356));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((SignRenderer *)((char *)v1 + 124));
  Model::~Model((SignRenderer *)((char *)v1 + 76));
  BlockEntityRenderer::~BlockEntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall SignRenderer::~SignRenderer(SignRenderer *this)
{
  SignRenderer *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DB124;
  v2 = (SignRenderer *)((char *)this + 136);
  mce::TexturePtr::~TexturePtr((SignRenderer *)((char *)this + 588));
  mce::MaterialPtr::~MaterialPtr((SignRenderer *)((char *)v1 + 576));
  *((_DWORD *)v1 + 19) = &off_26DB140;
  ModelPart::~ModelPart((SignRenderer *)((char *)v1 + 356));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((SignRenderer *)((char *)v1 + 124));
  Model::~Model((SignRenderer *)((char *)v1 + 76));
  return j_j_j__ZN19BlockEntityRendererD2Ev(v1);
}


int __fastcall SignRenderer::render(SignRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  SignRenderer *v4; // r5@1
  BlockEntityRenderData *v5; // r7@1
  const BlockPos *v6; // r9@1 OVERLAPPED
  BlockEntity *v7; // r10@1 OVERLAPPED
  char *v9; // r0@1
  int v10; // r4@1
  int v11; // r0@1
  int v12; // r4@2
  int v18; // r6@2
  int v22; // r4@9
  int v23; // r6@9
  int v25; // r0@10
  char *v27; // r6@13
  int v28; // r0@13
  int v30; // [sp+0h] [bp-B8h]@0
  int v31; // [sp+Ch] [bp-ACh]@1
  int v32; // [sp+10h] [bp-A8h]@1
  int v33; // [sp+14h] [bp-A4h]@1
  __int64 v34; // [sp+18h] [bp-A0h]@11
  char v35; // [sp+24h] [bp-94h]@10
  char v36; // [sp+2Ch] [bp-8Ch]@1
  unsigned __int8 v37; // [sp+34h] [bp-84h]@1
  unsigned __int8 v38; // [sp+35h] [bp-83h]@2
  int v39; // [sp+38h] [bp-80h]@8
  signed int v40; // [sp+3Ch] [bp-7Ch]@8
  int v41; // [sp+40h] [bp-78h]@8
  int v42; // [sp+44h] [bp-74h]@8
  int v43; // [sp+48h] [bp-70h]@8
  int v44; // [sp+4Ch] [bp-6Ch]@8
  int v45; // [sp+50h] [bp-68h]@8
  int v46; // [sp+54h] [bp-64h]@8
  int v47; // [sp+58h] [bp-60h]@8
  int v48; // [sp+5Ch] [bp-5Ch]@8
  int v49; // [sp+60h] [bp-58h]@8
  int v50; // [sp+64h] [bp-54h]@8
  int v51; // [sp+68h] [bp-50h]@8
  int v52; // [sp+6Ch] [bp-4Ch]@8
  int v53; // [sp+70h] [bp-48h]@8
  int v54; // [sp+74h] [bp-44h]@8
  int v55; // [sp+78h] [bp-40h]@8
  int v56; // [sp+7Ch] [bp-3Ch]@8
  int v57; // [sp+80h] [bp-38h]@8
  float v58; // [sp+84h] [bp-34h]@8

  _R8 = a2;
  v4 = this;
  v5 = a3;
  v33 = BaseEntityRenderContext::getScreenContext(a2);
  *(_QWORD *)&v6 = *(_QWORD *)v5;
  _KR00_8 = *((_QWORD *)v5 + 1);
  v32 = *((_QWORD *)v5 + 1) >> 32;
  v31 = *((_DWORD *)v5 + 4);
  v9 = BlockEntity::getPosition((BlockEntity *)(*(_QWORD *)v5 >> 32));
  BlockSource::getBlockAndData((BlockSource *)&v37, v6, (int)v9);
  v10 = Block::mBlocks[v37];
  v11 = BaseEntityRenderContext::getWorldMatrix(_R8);
  MatrixStack::push((MatrixStack *)&v36, v11);
  if ( v10 == Block::mSign )
  {
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v36);
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S4, [R6]
      VMOV.F32        S2, #0.4375
      VLDR            S6, [R6,#4]
      VLDR            S8, [R6,#8]
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
    }
    v22 = v38;
    v23 = MatrixStack::MatrixStackRef::operator->((int)&v36);
    __asm { VLDR            S2, =-0.0625 }
    _R0 = 360 * v22;
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
    v39 = 0;
    v40 = 1065353216;
    v41 = 0;
      VMUL.F32        S0, S0, S2
      VSTR            S0, [SP,#0xB8+var_34]
    glm::rotate<float>((int)&v42, v23, (int)&v58, (int)&v39);
    *(_DWORD *)v23 = v42;
    *(_DWORD *)(v23 + 4) = v43;
    *(_DWORD *)(v23 + 8) = v44;
    *(_DWORD *)(v23 + 12) = v45;
    *(_DWORD *)(v23 + 16) = v46;
    *(_DWORD *)(v23 + 20) = v47;
    *(_DWORD *)(v23 + 24) = v48;
    *(_DWORD *)(v23 + 28) = v49;
    *(_DWORD *)(v23 + 32) = v50;
    *(_DWORD *)(v23 + 36) = v51;
    *(_DWORD *)(v23 + 40) = v52;
    *(_DWORD *)(v23 + 44) = v53;
    *(_DWORD *)(v23 + 48) = v54;
    *(_DWORD *)(v23 + 52) = v55;
    *(_DWORD *)(v23 + 56) = v56;
    *(_DWORD *)(v23 + 60) = v57;
    *((_BYTE *)v4 + 409) = 1;
  }
  else
    v12 = v38;
      VLDR            S2, [R6]
      VLDR            S4, [R6,#4]
      VLDR            S6, [R6,#8]
      VLDR            S8, [R0]
      VADD.F32        S2, S2, S0
      VADD.F32        S0, S6, S0
      VMUL.F32        S6, S8, S2
      VMUL.F32        S1, S1, S4
      VMUL.F32        S10, S10, S2
      VMUL.F32        S8, S8, S4
      VMUL.F32        S14, S14, S2
      VMUL.F32        S2, S12, S2
      VMUL.F32        S3, S3, S4
      VMUL.F32        S4, S5, S4
      VADD.F32        S2, S3, S2
      VADD.F32        S4, S4, S14
      VADD.F32        S2, S2, S1
      VADD.F32        S0, S4, S0
      VLDR            S4, [R0,#0x30]
      VADD.F32        S4, S6, S4
      VADD.F32        S2, S2, S12
      VSTR            S4, [R0,#0x30]
      VSTR            S2, [R0,#0x38]
    v18 = MatrixStack::MatrixStackRef::operator->((int)&v36);
    _R0 = dword_EC4858;
    if ( v12 == 2 )
      _R0 = &dword_EC4858[1];
      VLDR            S2, =-90.0
      VLDR            S0, [R0]
    if ( v12 == 4 )
      __asm { VMOVEQ.F32      S0, S2 }
    __asm { VLDR            S2, =90.0 }
    if ( v12 == 5 )
    __asm { VSTR            S0, [SP,#0xB8+var_34] }
    glm::rotate<float>((int)&v42, v18, (int)&v58, (int)&v39);
    *(_DWORD *)v18 = v42;
    *(_DWORD *)(v18 + 4) = v43;
    *(_DWORD *)(v18 + 8) = v44;
    *(_DWORD *)(v18 + 12) = v45;
    *(_DWORD *)(v18 + 16) = v46;
    *(_DWORD *)(v18 + 20) = v47;
    *(_DWORD *)(v18 + 24) = v48;
    *(_DWORD *)(v18 + 28) = v49;
    *(_DWORD *)(v18 + 32) = v50;
    *(_DWORD *)(v18 + 36) = v51;
    *(_DWORD *)(v18 + 40) = v52;
    *(_DWORD *)(v18 + 44) = v53;
    *(_DWORD *)(v18 + 48) = v54;
    *(_DWORD *)(v18 + 52) = v55;
    *(_DWORD *)(v18 + 56) = v56;
    *(_DWORD *)(v18 + 60) = v57;
      VMOV.F32        S0, #0.3125
      VLDR            S4, [R0,#0x14]
      VMOV.F32        S2, #-0.4375
      VLDR            S6, [R0,#0x18]
      VLDR            S10, [R0,#0x20]
      VLDR            S14, [R0,#0x28]
      VLDR            S3, [R0,#0x10]
      VLDR            S8, [R0,#0x1C]
      VLDR            S1, [R0,#0x2C]
      VMUL.F32        S4, S4, S0
      VMUL.F32        S12, S12, S2
      VMUL.F32        S3, S3, S0
      VMUL.F32        S6, S6, S0
      VMUL.F32        S0, S8, S0
      VMUL.F32        S2, S1, S2
      VSUB.F32        S4, S12, S4
      VSUB.F32        S6, S14, S6
      VLDR            S14, [R0,#0x3C]
      VSUB.F32        S8, S10, S3
      VSUB.F32        S0, S2, S0
      VADD.F32        S4, S4, S10
      VADD.F32        S6, S6, S12
      VADD.F32        S2, S8, S2
      VADD.F32        S0, S0, S14
      VSTR            S4, [R0,#0x34]
      VSTR            S6, [R0,#0x38]
    *((_BYTE *)v4 + 409) = 0;
  v25 = BaseEntityRenderContext::getWorldMatrix(_R8);
  MatrixStack::push((MatrixStack *)&v35, v25);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v35);
  __asm
    VLDR            S0, =0.66667
    VLDR            S2, [R0]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R0]
    VLDR            S2, [R0,#4]
    VSTR            S2, [R0,#4]
    VLDR            S2, [R0,#8]
    VSTR            S2, [R0,#8]
    VLDR            S2, [R0,#0xC]
    VMUL.F32        S0, S2, S0
    VLDR            S2, =-0.66667
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
  if ( *((_DWORD *)v5 + 5) )
    v34 = 4611686019509518336LL;
    v34 = *(_QWORD *)&Vec2::ONE;
  v27 = BlockEntity::getPosition(v7);
  __asm { VLDR            S16, [R8,#4] }
  v28 = BaseEntityRenderContext::isIgnoringLightning(_R8);
  __asm { VSTR            S16, [SP,#0xB8+var_B8] }
  EntityShaderManager::_setupShaderParameters((int)v4, v33, (int)v6, (int)v27, v30, v28, &v34);
  BlockEntityRenderer::_renderModel((int)v4, v33, (int)v4 + 76, (int)v4 + 588, v32, v31);
  MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v35);
  SignRenderer::_renderText(v4, _R8, v7, 0.66667);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v36);
}
