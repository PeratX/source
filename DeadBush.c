

InstantaneousAttributeBuff *__fastcall DeadBush::playerDestroy(DeadBush *this, Player *a2, const BlockPos *a3, int a4)
{
  Player *v4; // r7@1
  Block *v5; // r6@1
  int v6; // r5@1
  const BlockPos *v7; // r8@1
  Level *v8; // r0@1
  ItemInstance *v9; // r0@2
  ItemInstance *v10; // r4@2
  int v11; // r0@2
  bool v12; // zf@2
  ItemInstance *v13; // r0@7
  BlockSource *v14; // r4@8
  InstantaneousAttributeBuff *result; // r0@14
  int v16; // [sp+0h] [bp-60h]@8
  int v17; // [sp+8h] [bp-58h]@12
  void *v18; // [sp+24h] [bp-3Ch]@10
  void *ptr; // [sp+34h] [bp-2Ch]@8

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)Entity::getLevel(a2);
  if ( Level::isClientSide(v8) )
    goto LABEL_18;
  v9 = (ItemInstance *)Player::getSelectedItem(v4);
  v10 = v9;
  v11 = *((_BYTE *)v9 + 15);
  v12 = v11 == 0;
  if ( v11 )
    v12 = *(_DWORD *)v10 == 0;
  if ( v12
    || ItemInstance::isNull(v10)
    || !*((_BYTE *)v10 + 14)
    || (v13 = (ItemInstance *)Player::getSelectedItem(v4), ItemInstance::getId(v13) != *(_WORD *)(Item::mShears + 18)) )
  {
LABEL_18:
    result = j_j_j__ZNK5Block13playerDestroyER6PlayerRK8BlockPosi(v5, v4, v7, v6);
  }
  else
    v14 = (BlockSource *)Entity::getRegion(v4);
    ItemInstance::ItemInstance((ItemInstance *)&v16, Block::mDeadBush, 1, v6);
    Block::popResource(v5, v14, v7, (const ItemInstance *)&v16);
    if ( ptr )
      operator delete(ptr);
    if ( v18 )
      operator delete(v18);
    if ( v17 )
      (*(void (**)(void))(*(_DWORD *)v17 + 4))();
    result = 0;
    v17 = 0;
  return result;
}


void __fastcall DeadBush::~DeadBush(DeadBush *this)
{
  DeadBush::~DeadBush(this);
}


void __fastcall DeadBush::~DeadBush(DeadBush *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall DeadBush::DeadBush(int a1, const void **a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(9);
  BushBlock::BushBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_27072F4;
  *(_DWORD *)(v3 + 20) = 5;
  return v3;
}


signed int __fastcall DeadBush::mayPlaceOn(DeadBush *this, const Block *a2)
{
  Block *v2; // r4@1
  signed int result; // r0@5

  v2 = a2;
  if ( Block::isType(a2, (const Block *)Block::mDirt)
    || Block::isType(v2, (const Block *)Block::mSand)
    || Block::isType(v2, (const Block *)Block::mHardenedClay)
    || Block::isType(v2, (const Block *)Block::mStainedClay) )
  {
    result = 1;
  }
  else
    result = Block::isType(v2, (const Block *)Block::mPodzol);
  return result;
}


unsigned int __fastcall DeadBush::getResourceCount(DeadBush *this, Random *a2, int a3, int a4)
{
  return Random::_genRandInt32(a2) % 3;
}
