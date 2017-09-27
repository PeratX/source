

int __fastcall EnderChestBlockEntity::canPullOutItem(EnderChestBlockEntity *this, BlockSource *a2, int a3, int a4, const ItemInstance *a5)
{
  return 0;
}


int __fastcall EnderChestBlockEntity::EnderChestBlockEntity(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int result; // r0@1

  v5 = a4;
  result = ChestBlockEntity::ChestBlockEntity(a1, a2, a3, a4, a5, 0);
  *(_DWORD *)result = &off_2709960;
  *(_DWORD *)(result + 112) = &off_2709A28;
  *(_DWORD *)(result + 84) = v5;
  *(_BYTE *)(result + 256) = 1;
  return result;
}


void __fastcall EnderChestBlockEntity::createEnderChestBlockEntity(EnderChestBlockEntity *this, const BlockPos *a2)
{
  int v2; // [sp+8h] [bp-10h]@1
  int v3; // [sp+Ch] [bp-Ch]@1

  v3 = 23;
  v2 = 12;
  std::make_unique<EnderChestBlockEntity,BlockEntityType,char const(&)[11],BlockEntityRendererId,BlockPos const&>(
    (int *)this,
    &v3,
    "EnderChest",
    &v2,
    (int)a2);
}


int __fastcall EnderChestBlockEntity::canPushInItem(EnderChestBlockEntity *this, BlockSource *a2, int a3, int a4, const ItemInstance *a5)
{
  return 0;
}


void __fastcall EnderChestBlockEntity::~EnderChestBlockEntity(EnderChestBlockEntity *this)
{
  EnderChestBlockEntity::~EnderChestBlockEntity(this);
}


void __fastcall EnderChestBlockEntity::~EnderChestBlockEntity(EnderChestBlockEntity *this)
{
  RandomizableBlockEntityFillingContainer *v1; // r0@1

  v1 = ChestBlockEntity::~ChestBlockEntity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall EnderChestBlockEntity::createEnderChestBlockEntity(EnderChestBlockEntity *this, const BlockPos *a2)
{
  EnderChestBlockEntity::createEnderChestBlockEntity(this, a2);
}
