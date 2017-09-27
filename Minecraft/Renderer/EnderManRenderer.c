

int __fastcall EnderManRenderer::render(int a1, BaseEntityRenderContext *a2, Entity **a3)
{
  int *v3; // r4@1
  int v4; // r6@1
  Entity *v5; // r7@1
  BaseEntityRenderContext *v6; // r8@1
  int v7; // r5@1
  char v8; // r0@1
  Random *v9; // r7@4
  char v11; // [sp+0h] [bp-20h]@1

  v3 = (int *)a3;
  v4 = a1;
  v5 = *a3;
  v6 = a2;
  v7 = *(_DWORD *)(a1 + 140);
  *(_BYTE *)(v7 + 4309) = Entity::isAngry(*a3);
  EnderMan::getCarryingBlock((EnderMan *)&v11, (int)v5);
  v8 = v11;
  if ( v11 )
    v8 = 1;
  *(_BYTE *)(v7 + 4308) = v8;
  if ( *(_BYTE *)(v7 + 4309) )
  {
    v9 = (Entity *)((char *)v5 + 552);
    Random::nextGaussian(v9);
  }
  return MobRenderer::render(v4, v6, v3);
}


void __fastcall EnderManRenderer::~EnderManRenderer(EnderManRenderer *this)
{
  EnderManRenderer::~EnderManRenderer(this);
}


int __fastcall EnderManRenderer::additionalRendering(EnderManRenderer *this, BaseEntityRenderContext *a2, Model *a3, Mob *a4, float a5, float a6, float a7, float a8, float a9, float a10)
{
  Mob *v14; // r6@1
  BaseEntityRenderContext *v15; // r9@1
  EnderManRenderer *v16; // r8@1
  int result; // r0@1
  int v18; // r0@2
  int v20; // r7@2
  int v21; // r7@2
  BlockGraphics *v23; // r7@2
  Tessellator *v24; // r6@2
  int v25; // r1@2
  BlockTessellator *v26; // r0@2
  unsigned int v27; // r0@3
  char *v28; // r5@5
  mce::Buffer *v29; // r6@6
  int v30; // r5@6
  unsigned int v31; // r0@6
  char *v32; // r7@8
  char *v33; // r0@10
  float v34; // [sp+0h] [bp-C8h]@0
  float v35; // [sp+4h] [bp-C4h]@0
  float v36; // [sp+8h] [bp-C0h]@0
  float v37; // [sp+Ch] [bp-BCh]@0
  float v38; // [sp+10h] [bp-B8h]@0
  float v39; // [sp+14h] [bp-B4h]@0
  char v40; // [sp+1Ch] [bp-ACh]@12
  char v41; // [sp+34h] [bp-94h]@10
  unsigned __int8 v42; // [sp+4Ch] [bp-7Ch]@2
  char v43; // [sp+50h] [bp-78h]@2
  unsigned __int8 v44; // [sp+58h] [bp-70h]@1
  int v45; // [sp+5Ch] [bp-6Ch]@2
  signed int v46; // [sp+60h] [bp-68h]@2
  int v47; // [sp+64h] [bp-64h]@2
  int v48; // [sp+68h] [bp-60h]@2
  int v49; // [sp+6Ch] [bp-5Ch]@2
  int v50; // [sp+70h] [bp-58h]@2
  int v51; // [sp+74h] [bp-54h]@2
  int v52; // [sp+78h] [bp-50h]@2
  int v53; // [sp+7Ch] [bp-4Ch]@2
  int v54; // [sp+80h] [bp-48h]@2
  int v55; // [sp+84h] [bp-44h]@2
  int v56; // [sp+88h] [bp-40h]@2
  int v57; // [sp+8Ch] [bp-3Ch]@2
  int v58; // [sp+90h] [bp-38h]@2
  int v59; // [sp+94h] [bp-34h]@2
  int v60; // [sp+98h] [bp-30h]@2
  int v61; // [sp+9Ch] [bp-2Ch]@2
  int v62; // [sp+A0h] [bp-28h]@2
  int v63; // [sp+A4h] [bp-24h]@2
  int v64; // [sp+A8h] [bp-20h]@2

  __asm { VLDR            S6, [SP,#0xC8+arg_0] }
  v14 = a4;
  __asm { VLDR            S0, [SP,#0xC8+arg_C] }
  v15 = a2;
  __asm { VLDR            S2, [SP,#0xC8+arg_8] }
  v16 = this;
  __asm
  {
    VLDR            S4, [SP,#0xC8+arg_4]
    VLDR            S8, [SP,#0xC8+arg_10]
    VLDR            S10, [SP,#0xC8+arg_14]
    VSTR            S6, [SP,#0xC8+var_C8]
    VSTR            S4, [SP,#0xC8+var_C4]
    VSTR            S2, [SP,#0xC8+var_C0]
    VSTR            S0, [SP,#0xC8+var_BC]
    VSTR            S8, [SP,#0xC8+var_B8]
    VSTR            S10, [SP,#0xC8+var_B4]
  }
  MobRenderer::additionalRendering(this, a2, a3, a4, v34, v35, v36, v37, v38, v39);
  EnderMan::getCarryingBlock((EnderMan *)&v44, (int)v14);
  result = v44;
  if ( v44 )
    v18 = BaseEntityRenderContext::getWorldMatrix(v15);
    MatrixStack::push((MatrixStack *)&v43, v18);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v43);
    __asm
    {
      VMOV.F32        S0, #0.6875
      VLDR            S4, [R0,#0x14]
      VMOV.F32        S2, #-0.75
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
    v20 = MatrixStack::MatrixStackRef::operator->((int)&v43);
    v45 = 1065353216;
    v46 = 0;
    v47 = 0;
    v64 = 1101004800;
    glm::rotate<float>((int)&v48, v20, (int)&v64, (int)&v45);
    *(_DWORD *)v20 = v48;
    *(_DWORD *)(v20 + 4) = v49;
    *(_DWORD *)(v20 + 8) = v50;
    *(_DWORD *)(v20 + 12) = v51;
    *(_DWORD *)(v20 + 16) = v52;
    *(_DWORD *)(v20 + 20) = v53;
    *(_DWORD *)(v20 + 24) = v54;
    *(_DWORD *)(v20 + 28) = v55;
    *(_DWORD *)(v20 + 32) = v56;
    *(_DWORD *)(v20 + 36) = v57;
    *(_DWORD *)(v20 + 40) = v58;
    *(_DWORD *)(v20 + 44) = v59;
    *(_DWORD *)(v20 + 48) = v60;
    *(_DWORD *)(v20 + 52) = v61;
    *(_DWORD *)(v20 + 56) = v62;
    *(_DWORD *)(v20 + 60) = v63;
    v21 = MatrixStack::MatrixStackRef::operator->((int)&v43);
    v45 = 0;
    v46 = 1065353216;
    v64 = 1110704128;
    glm::rotate<float>((int)&v48, v21, (int)&v64, (int)&v45);
    *(_DWORD *)v21 = v48;
    *(_DWORD *)(v21 + 4) = v49;
    *(_DWORD *)(v21 + 8) = v50;
    *(_DWORD *)(v21 + 12) = v51;
    *(_DWORD *)(v21 + 16) = v52;
    *(_DWORD *)(v21 + 20) = v53;
    *(_DWORD *)(v21 + 24) = v54;
    *(_DWORD *)(v21 + 28) = v55;
    *(_DWORD *)(v21 + 32) = v56;
    *(_DWORD *)(v21 + 36) = v57;
    *(_DWORD *)(v21 + 40) = v58;
    *(_DWORD *)(v21 + 44) = v59;
    *(_DWORD *)(v21 + 48) = v60;
    *(_DWORD *)(v21 + 52) = v61;
    *(_DWORD *)(v21 + 56) = v62;
    *(_DWORD *)(v21 + 60) = v63;
      VMOV.F32        S0, #-0.5
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
      VMOV.F32        S2, #0.5
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
    EnderMan::getCarryingBlock((EnderMan *)&v42, (int)v14);
    v23 = (BlockGraphics *)BlockGraphics::mBlocks[v42];
    v24 = (Tessellator *)BaseEntityRenderContext::getTessellator(v15);
    v25 = Tessellator::forceTessellateIntercept(v24);
    v26 = (BlockTessellator *)*((_DWORD *)v16 + 161);
    if ( v25 == 1 )
      BlockTessellator::appendTessellatedBlock(v26, v24, (const FullBlock *)&v42);
      v27 = BlockGraphics::getRenderLayer(v23);
      if ( v27 <= 8 && (1 << v27) & 0x1B0 )
        v28 = EntityShaderManager::getTransparentEntityMaterial(v16);
      else
        v28 = EntityShaderManager::getStaticMaterial(v16);
      EntityRenderer::getAtlasTexture((EntityRenderer *)&v41, (int)v16);
      Tessellator::triggerIntercept(v24, (const mce::MaterialPtr *)v28, (const mce::TexturePtr *)&v41);
      v33 = &v41;
    else
      v29 = (mce::Buffer *)BlockTessellator::getMeshForBlock(v26, v24, (const FullBlock *)&v42);
      v30 = BaseEntityRenderContext::getScreenContext(v15);
      v31 = BlockGraphics::getRenderLayer(v23);
      if ( v31 <= 8 && (1 << v31) & 0x1B0 )
        v32 = EntityShaderManager::getTransparentEntityMaterial(v16);
        v32 = EntityShaderManager::getStaticMaterial(v16);
      EntityRenderer::getAtlasTexture((EntityRenderer *)&v40, (int)v16);
      mce::Mesh::render(v29, v30, (int)v32, (int)&v40, 0, 0);
      v33 = &v40;
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)v33);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v43);
  return result;
}


void __fastcall EnderManRenderer::~EnderManRenderer(EnderManRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = MobRenderer::~MobRenderer(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall EnderManRenderer::EnderManRenderer(int a1, mce::TextureGroup *a2, const GeometryPtr *a3, int a4)
{
  int v4; // r5@1
  int v5; // r8@1
  const GeometryPtr *v6; // r4@1
  mce::TextureGroup *v7; // r6@1
  EnderManModel *v8; // r7@1
  char *v9; // r0@1
  char *v10; // r0@2
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  unsigned int *v14; // r2@10
  signed int v15; // r1@12
  char *v16; // [sp+4h] [bp-44h]@1
  char *v17; // [sp+8h] [bp-40h]@1
  int v18; // [sp+Ch] [bp-3Ch]@1
  char v19; // [sp+10h] [bp-38h]@1
  EnderManModel *v20; // [sp+28h] [bp-20h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = (EnderManModel *)operator new(0x11D8u);
  EnderManModel::EnderManModel(v8, v6);
  v20 = v8;
  sub_21E94B4((void **)&v16, "textures/entity/enderman/enderman");
  v17 = v16;
  v16 = (char *)&unk_28898CC;
  v18 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v19, v7, (int)&v17, 0);
  MobRenderer::MobRenderer(v4, (int *)&v20, (mce::TexturePtr *)&v19);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v19);
  v9 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v17 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  v10 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  if ( v20 )
    (*(void (**)(void))(*(_DWORD *)v20 + 4))();
  *(_DWORD *)v4 = &off_26E6C4C;
  *(_DWORD *)(v4 + 644) = v5;
  return v4;
}


char *__fastcall EnderManRenderer::_getBlockMaterial(EnderManRenderer *this, const BlockGraphics *a2)
{
  EntityShaderManager *v2; // r4@1
  unsigned int v3; // r0@1
  char *result; // r0@3

  v2 = this;
  v3 = BlockGraphics::getRenderLayer(a2);
  if ( v3 <= 8 && (1 << v3) & 0x1B0 )
    result = EntityShaderManager::getTransparentEntityMaterial(v2);
  else
    result = EntityShaderManager::getStaticMaterial(v2);
  return result;
}
