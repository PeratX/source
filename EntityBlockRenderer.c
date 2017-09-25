

EntityBlockRenderer *__fastcall EntityBlockRenderer::~EntityBlockRenderer(EntityBlockRenderer *this)
{
  EntityBlockRenderer *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3
  int v4; // r0@5
  EntityBlockRenderer *result; // r0@9

  v1 = this;
  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 3) = 0;
  v3 = *((_DWORD *)v1 + 2);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 2) = 0;
  v4 = *((_DWORD *)v1 + 1);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 1) = 0;
  if ( *(_DWORD *)v1 )
    (*(void (**)(void))(**(_DWORD **)v1 + 4))();
  result = v1;
  *(_DWORD *)v1 = 0;
  return result;
}


ChestBlockEntity *__fastcall EntityBlockRenderer::EntityBlockRenderer(ChestBlockEntity *this)
{
  ChestBlockEntity *v1; // r4@1
  int v3; // [sp+4h] [bp-14h]@1

  v1 = this;
  ChestBlockEntity::createChestBlockEntity(this, (const BlockPos *)&BlockPos::MIN);
  EnderChestBlockEntity::createEnderChestBlockEntity((EnderChestBlockEntity *)&v3, (const BlockPos *)&BlockPos::MIN);
  *((_DWORD *)v1 + 1) = v3;
  v3 = 0;
  ShulkerBoxBlockEntity::createShulkerBoxBlockEntity(
    (ChestBlockEntity *)((char *)v1 + 8),
    (const BlockPos *)&BlockPos::MIN);
  ChestBlockEntity::createTrappedChestBlockEntity(
    (ChestBlockEntity *)((char *)v1 + 12),
  return v1;
}


BlockEntityRenderDispatcher *__fastcall EntityBlockRenderer::render(EntityBlockRenderer *this, BaseEntityRenderContext *a2, BlockSource *a3, const Block *a4, int a5, float a6)
{
  BaseEntityRenderContext *v6; // r5@1
  EntityBlockRenderer *v7; // r7@1
  Block *v8; // r4@1
  BlockSource *v9; // r8@1
  int v10; // r6@1
  _DWORD **v11; // r0@2
  BlockEntity *v12; // r3@2
  void **v13; // r1@2
  int *v14; // r2@2
  _DWORD *v15; // r0@4
  void *v16; // r1@4

  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = a3;
  v10 = BaseEntityRenderContext::getBlockEntityRenderDispatcher(a2);
  if ( Block::getBlockEntityType(v8) == 23 )
  {
    v11 = &Vec3::ZERO;
    v12 = (BlockEntity *)*((_DWORD *)v7 + 1);
    v13 = &mce::MaterialPtr::NONE;
    v14 = (int *)&mce::TexturePtr::NONE;
LABEL_8:
    v15 = *v11;
    v16 = *v13;
    return BlockEntityRenderDispatcher::render(v10, (int)v6, (int)v9, v12, (int)v15, 0, (int)v16, *v14, 0);
  }
  if ( Block::getBlockEntityType(v8) != 25 )
    if ( (Block *)Block::mTrappedChest == v8 )
    {
      v11 = &Vec3::ZERO;
      v13 = &mce::MaterialPtr::NONE;
      v12 = (BlockEntity *)*((_DWORD *)v7 + 3);
      v14 = (int *)&mce::TexturePtr::NONE;
    }
    else
      v12 = *(BlockEntity **)v7;
    goto LABEL_8;
  *((_DWORD *)v6 + 2) = a5;
  v14 = (int *)&mce::TexturePtr::NONE;
  v15 = &Vec3::ZERO;
  v12 = (BlockEntity *)*((_DWORD *)v7 + 2);
  v16 = &mce::MaterialPtr::NONE;
  return BlockEntityRenderDispatcher::render(v10, (int)v6, (int)v9, v12, (int)v15, 0, (int)v16, *v14, 0);
}
