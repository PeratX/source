

signed int __fastcall WorkbenchBlock::isCraftingBlock(WorkbenchBlock *this)
{
  return 1;
}


signed int __fastcall WorkbenchBlock::use(WorkbenchBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Player *v4; // r5@1
  const BlockPos *v5; // r4@1

  v4 = a2;
  v5 = a3;
  if ( Player::canUseAbility((int)a2, &Abilities::OPEN_CONTAINERS) == 1 )
    (*(void (__fastcall **)(Player *, const BlockPos *, signed int))(*(_DWORD *)v4 + 1268))(v4, v5, 1);
  return 1;
}


void __fastcall WorkbenchBlock::~WorkbenchBlock(WorkbenchBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


Block *__fastcall WorkbenchBlock::WorkbenchBlock(Block *a1, const void **a2, char a3)
{
  Block *v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(2);
  Block::Block((int)v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_271803C;
  Block::setIsInteraction(v3, 1);
  return v3;
}


void __fastcall WorkbenchBlock::~WorkbenchBlock(WorkbenchBlock *this)
{
  WorkbenchBlock::~WorkbenchBlock(this);
}
