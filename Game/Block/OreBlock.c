

unsigned int __fastcall OreBlock::getExperienceDrop(OreBlock *this, Random *a2)
{
  Block *v2; // r5@1
  Random *v3; // r4@1
  unsigned int result; // r0@2

  v2 = this;
  v3 = a2;
  if ( Block::isType(this, (const Block *)Block::mCoalOre) == 1 )
    return Random::_genRandInt32(v3) & 1;
  if ( Block::isType(v2, (const Block *)Block::mDiamondOre) == 1 )
    goto LABEL_12;
  if ( Block::isType(v2, (const Block *)Block::mLapisOre) == 1
    || Block::isType(v2, (const Block *)Block::mQuartzOre) == 1 )
  {
    return Random::_genRandInt32(v3) % 3 + 2;
  }
  if ( Block::isType(v2, (const Block *)Block::mEmeraldOre) == 1 )
LABEL_12:
    result = (Random::_genRandInt32(v3) & 3) + 3;
  else
    result = 0;
  return result;
}


_DWORD *__fastcall OreBlock::OreBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  Block::Block((int)v3, v5, v4, v6);
  *v3 = &off_2710668;
  return v3;
}


unsigned int __fastcall OreBlock::getResourceCount(OreBlock *this, Random *a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r8@1
  Random *v6; // r4@1
  OreBlock *v7; // r6@1
  int v8; // r0@2
  int v9; // r1@2
  unsigned int v10; // r7@3
  signed int v11; // r7@4
  unsigned int result; // r0@7
  int v13; // r0@10
  int v14; // r1@10

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  if ( a4 <= 0 )
  {
    v9 = *((_BYTE *)this + 4);
LABEL_6:
    if ( v9 == *(_BYTE *)(Block::mLapisOre + 4) )
      result = Random::_genRandInt32(v6) % 5 + 4;
    else
      result = 1;
    return result;
  }
  v8 = (*(int (**)(void))(*(_DWORD *)this + 264))();
  v9 = *((_BYTE *)v7 + 4);
  if ( v8 == v9 )
    goto LABEL_6;
  v10 = v4 + 2;
  if ( v10 )
    v11 = Random::_genRandInt32(v6) % v10 - 1;
  else
    v11 = -1;
  v13 = (*(int (__fastcall **)(OreBlock *, Random *, int, _DWORD))(*(_DWORD *)v7 + 268))(v7, v6, v5, 0);
  v14 = 1;
  if ( v11 > 0 )
    v14 = v11 + 1;
  return v13 * v14;
}


signed int __fastcall OreBlock::getSpawnResourcesAuxValue(OreBlock *this, unsigned __int8 a2)
{
  signed int result; // r0@1

  result = Block::isType(this, (const Block *)Block::mLapisOre);
  if ( result )
    result = 4;
  return result;
}


int __fastcall OreBlock::getResource(OreBlock *this, Random *a2, int a3, int a4)
{
  OreBlock *v4; // r4@1
  _DWORD **v5; // r0@2

  v4 = this;
  if ( Block::isType(this, (const Block *)Block::mCoalOre) == 1 )
  {
    v5 = Item::mCoal;
  }
  else if ( Block::isType(v4, (const Block *)Block::mDiamondOre) == 1 )
    v5 = &Item::mDiamond;
  else if ( Block::isType(v4, (const Block *)Block::mLapisOre) == 1 )
    v5 = &Item::mDye_powder;
  else if ( Block::isType(v4, (const Block *)Block::mEmeraldOre) == 1 )
    v5 = &Item::mEmerald;
  else
    if ( Block::isType(v4, (const Block *)Block::mQuartzOre) != 1 )
      return *((_BYTE *)v4 + 4);
    v5 = Item::mNetherQuartz;
  return *(_WORD *)(**v5 + 18);
}


signed int __fastcall OreBlock::canBeOriginalSurface(OreBlock *this)
{
  return 1;
}


void __fastcall OreBlock::~OreBlock(OreBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall OreBlock::~OreBlock(OreBlock *this)
{
  OreBlock::~OreBlock(this);
}
