

BaseEntityRenderer *__fastcall FallingBlockRenderer::FallingBlockRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2, int a3)
{
  int v3; // r5@1
  BaseEntityRenderer *v4; // r4@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v3 = a3;
  v4 = a1;
  EntityRenderer::EntityRenderer(a1, a2, 0);
  *(_DWORD *)v4 = &off_26DB574;
  *((_DWORD *)v4 + 34) = v3;
  sub_119C884((void **)&v9, "entity_static");
  mce::MaterialPtr::MaterialPtr(
    (BaseEntityRenderer *)((char *)v4 + 140),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v9);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  return v4;
}


BlockSource *__fastcall FallingBlockRenderer::render(int a1, BaseEntityRenderContext *a2, __int64 *a3)
{
  int v4; // r9@1
  __int64 *v5; // r4@1
  int v6; // r0@1
  int v8; // r8@1
  int v9; // r7@1
  BlockSource *result; // r0@1
  BlockSource *v11; // r5@1
  Block *v12; // r0@3
  Block *v13; // r0@4
  int v18; // r0@5
  int v19; // r0@5
  Tessellator *v21; // r5@5
  int v22; // r1@5
  BlockTessellator *v23; // r0@5
  char *v24; // r0@6
  mce::Buffer *v25; // r5@7
  int v26; // [sp+0h] [bp-88h]@0
  char v27; // [sp+Ch] [bp-7Ch]@7
  char v28; // [sp+24h] [bp-64h]@6
  char v29; // [sp+3Ch] [bp-4Ch]@5
  char v30; // [sp+44h] [bp-44h]@1
  char v31; // [sp+50h] [bp-38h]@1
  int v32; // [sp+54h] [bp-34h]@4
  unsigned __int8 v33; // [sp+5Ch] [bp-2Ch]@1

  _R6 = a2;
  v4 = a1;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  _KR00_8 = *v5;
  v8 = v6;
  FallingBlock::getBlock((FallingBlock *)&v33, *v5);
  v9 = Block::mBlocks[v33];
  Entity::getCenter((Entity *)&v30, *(float *)&_KR00_8, *((_DWORD *)_R6 + 1));
  BlockPos::BlockPos((int)&v31, (int)&v30);
  result = (BlockSource *)Entity::getRegion((Entity *)_KR00_8);
  v11 = result;
  if ( v9 )
  {
    result = (BlockSource *)BlockID::AIR;
    if ( *(_BYTE *)(v9 + 4) != BlockID::AIR )
    {
      v12 = (Block *)BlockSource::getBlock(v11, (const BlockPos *)&v31);
      if ( Block::isType(v12, (const Block *)v9) == 1 )
      {
        do
        {
          ++v32;
          v13 = (Block *)BlockSource::getBlock(v11, (const BlockPos *)&v31);
        }
        while ( Block::isType(v13, (const Block *)v9) );
      }
      __asm { VLDR            S16, [R6,#4] }
      v18 = BaseEntityRenderContext::isIgnoringLightning(_R6);
      __asm { VSTR            S16, [SP,#0x88+var_88] }
      EntityShaderManager::_setupShaderParameters(v4, v8, (int)v11, (int)&v31, v26, v18, &Vec2::ONE);
      v19 = BaseEntityRenderContext::getWorldMatrix(_R6);
      MatrixStack::push((MatrixStack *)&v29, v19);
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v29);
      __asm
        VLDR            S0, [R0]
        VLDR            S8, [R10]
        VLDR            S2, [R0,#4]
        VLDR            S10, [R10,#4]
        VMUL.F32        S0, S0, S8
        VLDR            S14, [R0,#0x14]
        VMUL.F32        S2, S2, S8
        VLDR            S1, [R0,#0x10]
        VLDR            S4, [R0,#8]
        VMUL.F32        S14, S14, S10
        VLDR            S6, [R0,#0xC]
        VMUL.F32        S1, S1, S10
        VLDR            S3, [R0,#0x18]
        VMUL.F32        S4, S4, S8
        VLDR            S5, [R0,#0x1C]
        VMUL.F32        S6, S6, S8
        VMUL.F32        S3, S3, S10
        VLDR            S12, [R10,#8]
        VMUL.F32        S10, S5, S10
        VLDR            S7, [R0,#0x20]
        VLDR            S8, [R0,#0x24]
        VMUL.F32        S5, S7, S12
        VLDR            S7, [R0,#0x28]
        VADD.F32        S0, S1, S0
        VADD.F32        S2, S14, S2
        VLDR            S14, [R0,#0x2C]
        VMUL.F32        S8, S8, S12
        VMUL.F32        S1, S7, S12
        VADD.F32        S4, S3, S4
        VADD.F32        S6, S10, S6
        VLDR            S10, [R0,#0x34]
        VMUL.F32        S12, S14, S12
        VADD.F32        S0, S0, S5
        VADD.F32        S2, S2, S8
        VLDR            S8, [R0,#0x30]
        VADD.F32        S4, S4, S1
        VADD.F32        S6, S6, S12
        VLDR            S12, [R0,#0x38]
        VADD.F32        S0, S0, S8
        VLDR            S8, [R0,#0x3C]
        VADD.F32        S2, S2, S10
        VADD.F32        S4, S4, S12
        VADD.F32        S6, S6, S8
        VSTR            S0, [R0,#0x30]
        VSTR            S2, [R0,#0x34]
        VSTR            S4, [R0,#0x38]
        VSTR            S6, [R0,#0x3C]
      v21 = (Tessellator *)BaseEntityRenderContext::getTessellator(_R6);
      v22 = Tessellator::forceTessellateIntercept(v21);
      v23 = *(BlockTessellator **)(v4 + 136);
      if ( v22 == 1 )
        BlockTessellator::appendTessellatedBlock(v23, v21, (const FullBlock *)&v33);
        EntityRenderer::getAtlasTexture((EntityRenderer *)&v28, v4);
        Tessellator::triggerIntercept(v21, (const mce::MaterialPtr *)(v4 + 140), (const mce::TexturePtr *)&v28);
        v24 = &v28;
      else
        v25 = (mce::Buffer *)BlockTessellator::getMeshForBlock(v23, v21, (const FullBlock *)&v33);
        EntityRenderer::getAtlasTexture((EntityRenderer *)&v27, v4);
        mce::Mesh::render(v25, v8, v4 + 140, (int)&v27, 0, 0);
        v24 = &v27;
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)v24);
      result = (BlockSource *)MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v29);
    }
  }
  return result;
}


void __fastcall FallingBlockRenderer::~FallingBlockRenderer(FallingBlockRenderer *this)
{
  EntityRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB574;
  mce::MaterialPtr::~MaterialPtr((FallingBlockRenderer *)((char *)this + 140));
  EntityRenderer::~EntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


BaseEntityRenderer *__fastcall FallingBlockRenderer::~FallingBlockRenderer(FallingBlockRenderer *this)
{
  EntityRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB574;
  mce::MaterialPtr::~MaterialPtr((FallingBlockRenderer *)((char *)this + 140));
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}


void __fastcall FallingBlockRenderer::~FallingBlockRenderer(FallingBlockRenderer *this)
{
  FallingBlockRenderer::~FallingBlockRenderer(this);
}
