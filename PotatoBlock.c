

unsigned int __fastcall PotatoBlock::getResourceCount(PotatoBlock *this, Random *a2, int a3, int a4)
{
  unsigned int result; // r0@2

  if ( a4 == -1 )
    result = 1;
  else
    result = Random::_genRandInt32(a2) % (a4 + 1) + 1;
  return result;
}


signed int __fastcall PotatoBlock::spawnResources(PotatoBlock *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  Block *v6; // r6@1
  unsigned __int8 v11; // r7@1
  const BlockPos *v12; // r8@1
  BlockSource *v13; // r5@1
  Level *v14; // r0@1
  Level *v15; // r4@1
  signed int result; // r0@1
  unsigned __int64 *v17; // r0@2
  char *v18; // r0@3
  float v19; // [sp+0h] [bp-68h]@0
  char v20; // [sp+8h] [bp-60h]@4
  int v21; // [sp+10h] [bp-58h]@8
  void *v22; // [sp+2Ch] [bp-3Ch]@6
  void *ptr; // [sp+3Ch] [bp-2Ch]@4

  v6 = this;
  __asm { VLDR            S0, [SP,#0x68+arg_0] }
  v11 = a4;
  v12 = a3;
  v13 = a2;
  __asm { VSTR            S0, [SP,#0x68+var_68] }
  CropBlock::spawnResources(this, a2, a3, a4, v19, a6);
  v14 = (Level *)BlockSource::getLevel(v13);
  v15 = v14;
  result = Level::isClientSide(v14);
  if ( !result )
  {
    v17 = (unsigned __int64 *)Block::getBlockState((int)v6, 17);
    result = (0xFu >> (4 - (*v17 >> 32))) & (v11 >> (*v17 + 1 - (*v17 >> 32)));
    if ( result >= BushBlock::MAX_GROWTH[0] )
    {
      v18 = Level::getRandom(v15);
      result = Random::_genRandInt32((Random *)v18) % 0x32;
      if ( !result )
      {
        ItemInstance::ItemInstance((ItemInstance *)&v20, Item::mPoisonous_potato);
        Block::popResource(v6, v13, v12, (const ItemInstance *)&v20);
        if ( ptr )
          operator delete(ptr);
        if ( v22 )
          operator delete(v22);
        if ( v21 )
          (*(void (**)(void))(*(_DWORD *)v21 + 4))();
        result = 0;
      }
    }
  }
  return result;
}


void __fastcall PotatoBlock::~PotatoBlock(PotatoBlock *this)
{
  PotatoBlock::~PotatoBlock(this);
}


void __fastcall PotatoBlock::~PotatoBlock(PotatoBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall PotatoBlock::getVariant(PotatoBlock *this, int a2)
{
  int v2; // r5@1
  unsigned __int64 *v3; // r0@1
  signed int result; // r0@2

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 17);
  if ( (signed int)((0xFu >> (4 - (*v3 >> 32))) & ((unsigned __int8)v2 >> (*v3 + 1 - (*v3 >> 32)))) < BushBlock::MAX_GROWTH[0] )
  {
    result = v2 >> 1;
    if ( v2 == 6 )
      result = 2;
  }
  else
    result = 3;
  return result;
}


int __fastcall PotatoBlock::PotatoBlock(int a1, const void **a2, int a3)
{
  int result; // r0@1

  result = CropBlock::CropBlock(a1, a2, a3);
  *(_DWORD *)result = &off_2711068;
  *(_DWORD *)(result + 24) = 0x2000000;
  *(_DWORD *)(result + 28) = 0;
  return result;
}


int __fastcall PotatoBlock::getBaseSeed(PotatoBlock *this)
{
  return Item::mPotato;
}
