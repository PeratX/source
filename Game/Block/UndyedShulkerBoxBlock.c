

Block *__fastcall UndyedShulkerBoxBlock::UndyedShulkerBoxBlock(int a1, const void **a2, char a3)
{
  Block *result; // r0@1

  result = ShulkerBoxBlock::ShulkerBoxBlock(a1, a2, a3);
  *(_DWORD *)result = &off_2716B04;
  return result;
}


void __fastcall UndyedShulkerBoxBlock::~UndyedShulkerBoxBlock(UndyedShulkerBoxBlock *this)
{
  UndyedShulkerBoxBlock::~UndyedShulkerBoxBlock(this);
}


signed int __fastcall UndyedShulkerBoxBlock::getColor(UndyedShulkerBoxBlock *this, int a2)
{
  return -5606230;
}


void __fastcall UndyedShulkerBoxBlock::~UndyedShulkerBoxBlock(UndyedShulkerBoxBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall UndyedShulkerBoxBlock::getSpawnResourcesAuxValue(UndyedShulkerBoxBlock *this, unsigned __int8 a2)
{
  return 16;
}
