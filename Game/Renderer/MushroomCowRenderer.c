

void __fastcall MushroomCowRenderer::~MushroomCowRenderer(MushroomCowRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = MobRenderer::~MobRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall MushroomCowRenderer::~MushroomCowRenderer(MushroomCowRenderer *this)
{
  MushroomCowRenderer::~MushroomCowRenderer(this);
}


int __fastcall MushroomCowRenderer::additionalRendering(MushroomCowRenderer *this, BaseEntityRenderContext *a2, Model *a3, Mob *a4, float a5, float a6, float a7, float a8, float a9, float a10)
{
  Mob *v10; // r4@1
  MushroomCowRenderer *v11; // r5@1
  Model *v12; // r10@1
  BaseEntityRenderContext *v13; // r7@1
  int result; // r0@1
  int v15; // r9@3
  Tessellator *v16; // r6@3
  BlockTessellator *v17; // r0@3
  mce::Buffer *v18; // r8@3
  int v19; // r0@3
  int v27; // r4@3
  BlockTessellator *v28; // r0@4
  char *v29; // r0@4
  int v31; // r4@6
  BlockTessellator *v32; // r0@7
  char *v33; // r0@7
  int v34; // r0@9
  int v35; // r7@9
  int v36; // r0@9
  int v39; // r4@9
  BlockTessellator *v40; // r0@10
  char *v41; // r0@10
  char v42; // [sp+Ch] [bp-124h]@11
  char v43; // [sp+24h] [bp-10Ch]@10
  char v44; // [sp+3Ch] [bp-F4h]@10
  char v45; // [sp+3Dh] [bp-F3h]@10
  char v46; // [sp+40h] [bp-F0h]@9
  char v47; // [sp+48h] [bp-E8h]@8
  char v48; // [sp+60h] [bp-D0h]@7
  char v49; // [sp+78h] [bp-B8h]@7
  char v50; // [sp+79h] [bp-B7h]@7
  char v51; // [sp+7Ch] [bp-B4h]@5
  char v52; // [sp+94h] [bp-9Ch]@4
  char v53; // [sp+ACh] [bp-84h]@4
  char v54; // [sp+ADh] [bp-83h]@4
  char v55; // [sp+B0h] [bp-80h]@3
  char v56; // [sp+B8h] [bp-78h]@3
  char v57; // [sp+B9h] [bp-77h]@3
  int v58; // [sp+BCh] [bp-74h]@3
  signed int v59; // [sp+C0h] [bp-70h]@3
  int v60; // [sp+C4h] [bp-6Ch]@3
  int v61; // [sp+C8h] [bp-68h]@3
  int v62; // [sp+CCh] [bp-64h]@3
  int v63; // [sp+D0h] [bp-60h]@3
  int v64; // [sp+D4h] [bp-5Ch]@3
  int v65; // [sp+D8h] [bp-58h]@3
  int v66; // [sp+DCh] [bp-54h]@3
  int v67; // [sp+E0h] [bp-50h]@3
  int v68; // [sp+E4h] [bp-4Ch]@3
  int v69; // [sp+E8h] [bp-48h]@3
  int v70; // [sp+ECh] [bp-44h]@3
  int v71; // [sp+F0h] [bp-40h]@3
  int v72; // [sp+F4h] [bp-3Ch]@3
  int v73; // [sp+F8h] [bp-38h]@3
  int v74; // [sp+FCh] [bp-34h]@3
  int v75; // [sp+100h] [bp-30h]@3
  int v76; // [sp+104h] [bp-2Ch]@3
  int v77; // [sp+108h] [bp-28h]@3

  v10 = a4;
  v11 = this;
  v12 = a3;
  v13 = a2;
  result = Entity::isBaby(a4);
  if ( !result )
  {
    result = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v10 + 172))(v10);
    if ( !result )
    {
      v15 = BaseEntityRenderContext::getScreenContext(v13);
      ShaderColor::setColor(*(ShaderColor **)(v15 + 48), (const Color *)&Color::WHITE);
      v16 = (Tessellator *)BaseEntityRenderContext::getTessellator(v13);
      v17 = (BlockTessellator *)*((_DWORD *)v11 + 161);
      v56 = *(_BYTE *)(Block::mRedMushroom + 4);
      v57 = 0;
      v18 = (mce::Buffer *)BlockTessellator::getMeshForBlock(v17, v16, (const FullBlock *)&v56);
      v19 = BaseEntityRenderContext::getWorldMatrix(v13);
      MatrixStack::push((MatrixStack *)&v55, v19);
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v55);
      __asm
      {
        VLDR            S0, [R0,#0x10]
        VNEG.F32        S0, S0
        VSTR            S0, [R0,#0x10]
        VLDR            S0, [R0,#0x14]
        VSTR            S0, [R0,#0x14]
        VLDR            S0, [R0,#0x18]
        VSTR            S0, [R0,#0x18]
        VLDR            S0, [R0,#0x1C]
        VSTR            S0, [R0,#0x1C]
      }
        VLDR            S0, =0.2
        VMOV.F32        S3, #0.5
        VLDR            S6, [R0,#0xC]
        VLDR            S4, [R0,#8]
        VLDR            S8, [R0,#0x10]
        VMUL.F32        S6, S6, S0
        VLDR            S5, =0.4
        VLDR            S10, [R0,#0x14]
        VLDR            S12, [R0,#0x18]
        VMUL.F32        S8, S8, S5
        VLDR            S14, [R0,#0x1C]
        VMUL.F32        S10, S10, S5
        VLDMIA          R0, {S1-S2}
        VMUL.F32        S12, S12, S5
        VMUL.F32        S14, S14, S5
        VMUL.F32        S2, S2, S0
        VLDR            S7, [R0,#0x20]
        VMUL.F32        S1, S1, S0
        VMUL.F32        S0, S4, S0
        VLDR            S4, [R0,#0x24]
        VMUL.F32        S5, S7, S3
        VLDR            S7, [R0,#0x28]
        VMUL.F32        S4, S4, S3
        VADD.F32        S6, S14, S6
        VADD.F32        S2, S10, S2
        VLDR            S10, [R0,#0x2C]
        VADD.F32        S8, S8, S1
        VADD.F32        S0, S12, S0
        VLDR            S12, [R0,#0x38]
        VMUL.F32        S1, S7, S3
        VMUL.F32        S10, S10, S3
        VADD.F32        S2, S2, S4
        VADD.F32        S8, S8, S5
        VADD.F32        S0, S0, S1
        VADD.F32        S4, S6, S10
        VLDR            S6, [R0,#0x30]
        VLDR            S10, [R0,#0x34]
        VADD.F32        S2, S2, S10
        VADD.F32        S6, S8, S6
        VLDR            S8, [R0,#0x3C]
        VADD.F32        S0, S0, S12
        VADD.F32        S4, S4, S8
        VSTR            S6, [R0,#0x30]
        VSTR            S2, [R0,#0x34]
        VSTR            S0, [R0,#0x38]
        VSTR            S4, [R0,#0x3C]
      v27 = MatrixStack::MatrixStackRef::operator->((int)&v55);
      v58 = 0;
      v59 = 1065353216;
      v60 = 0;
      v77 = 1109917696;
      glm::rotate<float>((int)&v61, v27, (int)&v77, (int)&v58);
      *(_DWORD *)v27 = v61;
      *(_DWORD *)(v27 + 4) = v62;
      *(_DWORD *)(v27 + 8) = v63;
      *(_DWORD *)(v27 + 12) = v64;
      *(_DWORD *)(v27 + 16) = v65;
      *(_DWORD *)(v27 + 20) = v66;
      *(_DWORD *)(v27 + 24) = v67;
      *(_DWORD *)(v27 + 28) = v68;
      *(_DWORD *)(v27 + 32) = v69;
      *(_DWORD *)(v27 + 36) = v70;
      *(_DWORD *)(v27 + 40) = v71;
      *(_DWORD *)(v27 + 44) = v72;
      *(_DWORD *)(v27 + 48) = v73;
      *(_DWORD *)(v27 + 52) = v74;
      *(_DWORD *)(v27 + 56) = v75;
      *(_DWORD *)(v27 + 60) = v76;
      if ( Tessellator::forceTessellateIntercept(v16) == 1 )
        v28 = (BlockTessellator *)*((_DWORD *)v11 + 161);
        v53 = *(_BYTE *)(Block::mRedMushroom + 4);
        v54 = 0;
        BlockTessellator::appendTessellatedBlock(v28, v16, (const FullBlock *)&v53);
        EntityRenderer::getAtlasTexture((EntityRenderer *)&v52, (int)v11);
        Tessellator::triggerIntercept(v16, (Model *)((char *)v12 + 1608), (const mce::TexturePtr *)&v52);
        v29 = &v52;
      else
        EntityRenderer::getAtlasTexture((EntityRenderer *)&v51, (int)v11);
        mce::Mesh::render(v18, v15, (int)v12 + 1608, (int)&v51, 0, 0);
        v29 = &v51;
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)v29);
        VLDR            S0, =0.1
        VLDR            S8, [R0]
        VLDR            S10, =-0.6
        VLDR            S14, [R0,#0x20]
        VMUL.F32        S8, S8, S0
        VLDR            S2, [R0,#4]
        VMUL.F32        S14, S14, S10
        VLDR            S12, [R0,#0x24]
        VLDR            S1, [R0,#0x28]
        VMUL.F32        S4, S4, S0
        VMUL.F32        S12, S12, S10
        VLDR            S3, [R0,#0x2C]
        VMUL.F32        S1, S1, S10
        VMUL.F32        S0, S6, S0
        VMUL.F32        S6, S3, S10
        VADD.F32        S8, S14, S8
        VADD.F32        S2, S12, S2
        VADD.F32        S4, S1, S4
        VADD.F32        S0, S6, S0
        VADD.F32        S4, S4, S12
        VADD.F32        S0, S0, S8
        VSTR            S4, [R0,#0x38]
        VSTR            S0, [R0,#0x3C]
      v31 = MatrixStack::MatrixStackRef::operator->((int)&v55);
      glm::rotate<float>((int)&v61, v31, (int)&v77, (int)&v58);
      *(_DWORD *)v31 = v61;
      *(_DWORD *)(v31 + 4) = v62;
      *(_DWORD *)(v31 + 8) = v63;
      *(_DWORD *)(v31 + 12) = v64;
      *(_DWORD *)(v31 + 16) = v65;
      *(_DWORD *)(v31 + 20) = v66;
      *(_DWORD *)(v31 + 24) = v67;
      *(_DWORD *)(v31 + 28) = v68;
      *(_DWORD *)(v31 + 32) = v69;
      *(_DWORD *)(v31 + 36) = v70;
      *(_DWORD *)(v31 + 40) = v71;
      *(_DWORD *)(v31 + 44) = v72;
      *(_DWORD *)(v31 + 48) = v73;
      *(_DWORD *)(v31 + 52) = v74;
      *(_DWORD *)(v31 + 56) = v75;
      *(_DWORD *)(v31 + 60) = v76;
        v32 = (BlockTessellator *)*((_DWORD *)v11 + 161);
        v49 = *(_BYTE *)(Block::mRedMushroom + 4);
        v50 = 0;
        BlockTessellator::appendTessellatedBlock(v32, v16, (const FullBlock *)&v49);
        EntityRenderer::getAtlasTexture((EntityRenderer *)&v48, (int)v11);
        Tessellator::triggerIntercept(v16, (Model *)((char *)v12 + 1608), (const mce::TexturePtr *)&v48);
        v33 = &v48;
        EntityRenderer::getAtlasTexture((EntityRenderer *)&v47, (int)v11);
        mce::Mesh::render(v18, v15, (int)v12 + 1608, (int)&v47, 0, 0);
        v33 = &v47;
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)v33);
      MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v55);
      v34 = BaseEntityRenderContext::getWorldMatrix(v13);
      MatrixStack::push((MatrixStack *)&v46, v34);
      v35 = *((_DWORD *)v11 + 35);
      v36 = MatrixStack::MatrixStackRef::operator*((int)&v46);
      ModelPart::translateTo(v35 + 48, v36, 1031798784);
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v46);
        VMOV.F32        S0, #0.75
        VLDR            S4, [R0,#0x14]
        VLDR            S6, [R0,#0x18]
        VLDR            S3, [R0,#0x10]
        VLDR            S2, =-0.2
        VLDR            S10, [R0,#0x20]
        VLDR            S14, [R0,#0x28]
        VMUL.F32        S10, S10, S2
        VLDR            S8, [R0,#0x1C]
        VMUL.F32        S12, S12, S2
        VLDR            S1, [R0,#0x2C]
        VMUL.F32        S14, S14, S2
        VMUL.F32        S3, S3, S0
        VMUL.F32        S0, S8, S0
        VMUL.F32        S2, S1, S2
        VADD.F32        S4, S12, S4
        VLDR            S14, [R0,#0x3C]
        VADD.F32        S8, S10, S3
        VADD.F32        S0, S2, S0
        VLDR            S2, [R0,#0x30]
        VADD.F32        S4, S4, S10
        VADD.F32        S6, S6, S12
        VADD.F32        S2, S8, S2
        VADD.F32        S0, S0, S14
        VSTR            S2, [R0,#0x30]
        VSTR            S4, [R0,#0x34]
        VSTR            S6, [R0,#0x38]
      v39 = MatrixStack::MatrixStackRef::operator->((int)&v46);
      v77 = 1094713344;
      glm::rotate<float>((int)&v61, v39, (int)&v77, (int)&v58);
      *(_DWORD *)v39 = v61;
      *(_DWORD *)(v39 + 4) = v62;
      *(_DWORD *)(v39 + 8) = v63;
      *(_DWORD *)(v39 + 12) = v64;
      *(_DWORD *)(v39 + 16) = v65;
      *(_DWORD *)(v39 + 20) = v66;
      *(_DWORD *)(v39 + 24) = v67;
      *(_DWORD *)(v39 + 28) = v68;
      *(_DWORD *)(v39 + 32) = v69;
      *(_DWORD *)(v39 + 36) = v70;
      *(_DWORD *)(v39 + 40) = v71;
      *(_DWORD *)(v39 + 44) = v72;
      *(_DWORD *)(v39 + 48) = v73;
      *(_DWORD *)(v39 + 52) = v74;
      *(_DWORD *)(v39 + 56) = v75;
      *(_DWORD *)(v39 + 60) = v76;
        v40 = (BlockTessellator *)*((_DWORD *)v11 + 161);
        v44 = *(_BYTE *)(Block::mRedMushroom + 4);
        v45 = 0;
        BlockTessellator::appendTessellatedBlock(v40, v16, (const FullBlock *)&v44);
        EntityRenderer::getAtlasTexture((EntityRenderer *)&v43, (int)v11);
        Tessellator::triggerIntercept(v16, (Model *)((char *)v12 + 1608), (const mce::TexturePtr *)&v43);
        v41 = &v43;
        EntityRenderer::getAtlasTexture((EntityRenderer *)&v42, (int)v11);
        mce::Mesh::render(v18, v15, (int)v12 + 1608, (int)&v42, 0, 0);
        v41 = &v42;
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)v41);
      result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v46);
    }
  }
  return result;
}


int __fastcall MushroomCowRenderer::MushroomCowRenderer(float a1, mce::TextureGroup *a2, int a3, int *a4, int a5)
{
  mce::TextureGroup *v5; // r7@1
  int v6; // r6@1
  int v7; // r8@1
  int v8; // r5@1
  char *v14; // r0@1
  char *v15; // r0@2
  unsigned int *v17; // r2@6
  signed int v18; // r1@8
  unsigned int *v19; // r2@10
  signed int v20; // r1@12
  char *v21; // [sp+4h] [bp-44h]@1
  char *v22; // [sp+8h] [bp-40h]@1
  int v23; // [sp+Ch] [bp-3Ch]@1
  char v24; // [sp+10h] [bp-38h]@1
  int v25; // [sp+28h] [bp-20h]@1

  v5 = a2;
  v6 = *a4;
  v7 = a3;
  v8 = LODWORD(a1);
  *a4 = 0;
  v25 = v6;
  sub_119C884((void **)&v21, "textures/entity/cow/mooshroom");
  v22 = v21;
  v23 = 0;
  v21 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v24, v5, (int)&v22, 0);
  __asm
  {
    VLDR            S0, [SP,#0x48+arg_0]
    VMOV            R3, S0
  }
  MobRenderer::MobRenderer(v8, &v25, (mce::TexturePtr *)&v24);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v24);
  v14 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v22 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v21 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  if ( v25 )
    (*(void (**)(void))(*(_DWORD *)v25 + 4))();
  *(_DWORD *)v8 = &off_26DBBEC;
  *(_DWORD *)(v8 + 644) = v7;
  return v8;
}
