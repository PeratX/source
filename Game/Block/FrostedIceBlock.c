

int __fastcall FrostedIceBlock::canBeSilkTouched(FrostedIceBlock *this)
{
  return 0;
}


int __fastcall FrostedIceBlock::neighborChanged(FrostedIceBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r10@1
  FrostedIceBlock *v6; // r6@1
  int result; // r0@1
  int v8; // r7@5
  _BYTE *v9; // r6@5
  signed int v10; // r5@5
  int v11; // t1@6
  void (__fastcall *v12)(FrostedIceBlock *, BlockSource *, const BlockPos *, unsigned int); // r5@11
  unsigned int v13; // r0@11
  FrostedIceBlock *v14; // [sp+Ch] [bp-3Ch]@5
  char v15; // [sp+10h] [bp-38h]@11
  unsigned __int8 v16; // [sp+14h] [bp-34h]@6
  char v17; // [sp+18h] [bp-30h]@6

  v4 = a3;
  v5 = a2;
  v6 = this;
  result = *(_DWORD *)a4;
  if ( *(_DWORD *)a3 == *(_DWORD *)a4 )
  {
    result = *((_DWORD *)a4 + 1);
    if ( *((_DWORD *)a3 + 1) == result )
    {
      result = *((_DWORD *)a4 + 2);
      if ( *((_DWORD *)a3 + 2) == result )
      {
        if ( !unk_2700410 )
          goto LABEL_14;
        v8 = unk_2700410 - 1;
        v14 = v6;
        v9 = (_BYTE *)Facing::ALL_FACES;
        v10 = 0;
        do
        {
          v11 = *v9++;
          BlockPos::neighbor((BlockPos *)&v17, (int)v4, v11);
          BlockSource::getBlockID((BlockSource *)&v16, v5, (int)&v17);
          result = *(_BYTE *)(Block::mFrostedIce + 4);
          if ( v16 == result )
            ++v10;
          if ( !v8 )
            break;
          --v8;
        }
        while ( v10 < 4 );
        v6 = v14;
        if ( v10 <= 1 )
LABEL_14:
          v12 = *(void (__fastcall **)(FrostedIceBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v6 + 276);
          v13 = BlockSource::getData(v5, v4);
          v12(v6, v5, v4, v13);
          v15 = *(_BYTE *)(Block::mStillWater + 4);
          result = BlockSource::setBlock((int)v5, v4, &v15, 3);
      }
    }
  }
  return result;
}


int __fastcall FrostedIceBlock::getResourceCount(FrostedIceBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


void __fastcall FrostedIceBlock::~FrostedIceBlock(FrostedIceBlock *this)
{
  FrostedIceBlock::~FrostedIceBlock(this);
}


signed int __fastcall FrostedIceBlock::playerWillDestroy(FrostedIceBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  Player *v4; // r6@1
  Block *v5; // r7@1
  int v6; // r8@1
  const BlockPos *v7; // r4@1
  ItemInstance *v8; // r5@1
  const ItemInstance *v9; // r2@1
  BlockSource *v10; // r0@4
  int v11; // r2@4
  int v12; // r3@4
  Material *v13; // r5@4
  int v14; // r0@6
  signed int result; // r0@6
  char v16; // [sp+8h] [bp-28h]@6
  char v17; // [sp+9h] [bp-27h]@6
  int v18; // [sp+Ch] [bp-24h]@4
  int v19; // [sp+10h] [bp-20h]@4
  int v20; // [sp+14h] [bp-1Ch]@4

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (ItemInstance *)Player::getSelectedItem(a2);
  if ( ItemInstance::isNull(v8) == 1 && EnchantUtils::hasEnchant((EnchantUtils *)0x10, (int)v8, v9)
    || (*(int (__fastcall **)(Player *))(*(_DWORD *)v4 + 652))(v4)
    || (v10 = (BlockSource *)Entity::getRegion(v4),
        v11 = *((_DWORD *)v7 + 1),
        v12 = *((_DWORD *)v7 + 2),
        v18 = *(_DWORD *)v7,
        v19 = v11 - 1,
        v20 = v12,
        v13 = (Material *)BlockSource::getMaterial(v10, (const BlockPos *)&v18),
        !Material::getBlocksMotion(v13))
    && Material::isLiquid(v13) != 1 )
  {
    result = Block::playerWillDestroy(v5, v4, v7, v6);
  }
  else
    v14 = Entity::getRegion(v4);
    v16 = *(_BYTE *)(Block::mFlowingWater + 4);
    v17 = 0;
    BlockSource::setBlockAndData(v14, v7, (int)&v16, 3, 0);
    result = 1;
  return result;
}


void __fastcall FrostedIceBlock::~FrostedIceBlock(FrostedIceBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall FrostedIceBlock::FrostedIceBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(18);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270BA2C;
  *(_DWORD *)(v3 + 76) = 1065017672;
  Block::setTicking((Block *)v3, 1);
  Block::setSolid((Block *)v3, 0);
  *(_DWORD *)(v3 + 20) = 1;
  return v3;
}


LevelChunk *__fastcall FrostedIceBlock::_slightlyMelt(FrostedIceBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4, int a5)
{
  BlockSource *v5; // r9@1
  const BlockPos *v6; // r11@1
  FrostedIceBlock *v7; // r6@1
  Random *v8; // r7@1
  unsigned int v9; // r0@1
  void (__fastcall *v10)(FrostedIceBlock *, BlockSource *, const BlockPos *, unsigned int); // r7@2
  unsigned int v11; // r0@2
  LevelChunk *result; // r0@2
  int v13; // r10@3
  _DWORD *v14; // r8@3
  int v15; // r0@5
  int v16; // r9@5
  _DWORD *v17; // r11@5
  FrostedIceBlock *v18; // r8@5
  FrostedIceBlock *v19; // r0@5
  LevelChunk **v20; // r4@8
  unsigned int v21; // kr00_4@8
  Random *v22; // [sp+10h] [bp-60h]@2
  BlockSource *v23; // [sp+14h] [bp-5Ch]@1
  char v24; // [sp+18h] [bp-58h]@5
  char v25; // [sp+24h] [bp-4Ch]@5
  unsigned __int8 v26; // [sp+30h] [bp-40h]@4
  char v27; // [sp+34h] [bp-3Ch]@4
  char v28; // [sp+40h] [bp-30h]@2
  char v29; // [sp+44h] [bp-2Ch]@8
  char v30; // [sp+48h] [bp-28h]@8

  v5 = a2;
  v6 = a3;
  v7 = this;
  v8 = a4;
  v23 = a2;
  v9 = BlockSource::getData(a2, a3) & 3;
  if ( v9 == 3 )
  {
    v22 = v8;
    v10 = *(void (__fastcall **)(FrostedIceBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v7 + 276);
    v11 = BlockSource::getData(v5, v6);
    v10(v7, v5, v6, v11);
    v28 = *(_BYTE *)(Block::mFlowingWater + 4);
    result = (LevelChunk *)BlockSource::setBlockAndData((int)v5, v6, &v28, 0, 3, 0);
    if ( a5 == 1 )
    {
      v13 = 0;
      v14 = &Block::mFrostedIce;
      do
      {
        BlockPos::neighbor((BlockPos *)&v27, (int)v6, v13);
        BlockSource::getBlockID((BlockSource *)&v26, v5, (int)&v27);
        if ( v26 == *(_BYTE *)(*v14 + 4) )
        {
          BlockPos::neighbor((BlockPos *)&v25, (int)v6, v13);
          v15 = BlockSource::getBlock(v5, (const BlockPos *)&v25);
          v16 = (int)v6;
          v17 = v14;
          v18 = (FrostedIceBlock *)v15;
          BlockPos::neighbor((BlockPos *)&v24, v16, v13);
          v19 = v18;
          v14 = v17;
          v6 = (const BlockPos *)v16;
          v5 = v23;
          FrostedIceBlock::_slightlyMelt(v19, v23, (const BlockPos *)&v24, v22, 0);
        }
        result = (LevelChunk *)(v13++ + 1);
      }
      while ( v13 < 6 );
    }
  }
  else
    v30 = *((_BYTE *)v7 + 4);
    BlockSource::setBlockAndData((int)v5, v6, &v30, v9 + 1, 3, 0);
    v20 = (LevelChunk **)BlockSource::getTickQueue(v5, v6);
    v29 = *((_BYTE *)v7 + 4);
    v21 = Random::_genRandInt32(v8);
    result = BlockTickingQueue::add(v20, v5, (int)v6, &v29, v21 % 0x14 + 20, 0);
  return result;
}


int __fastcall FrostedIceBlock::playerDestroy(FrostedIceBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r4@1
  Player *v5; // r5@1
  ItemInstance *v6; // r6@1
  const ItemInstance *v7; // r2@1
  int result; // r0@2
  BlockSource *v9; // r0@4
  BlockSource *v10; // r5@4
  Dimension *v11; // r0@4
  int v12; // r1@6
  int v13; // r2@6
  Material *v14; // r6@6
  char v15; // [sp+8h] [bp-20h]@8
  char v16; // [sp+9h] [bp-1Fh]@8
  int v17; // [sp+Ch] [bp-1Ch]@6
  int v18; // [sp+10h] [bp-18h]@6
  int v19; // [sp+14h] [bp-14h]@6

  v4 = a3;
  v5 = a2;
  Block::playerDestroy(this, a2, a3, a4);
  v6 = (ItemInstance *)Player::getSelectedItem(v5);
  if ( ItemInstance::isNull(v6) != 1 || (result = EnchantUtils::hasEnchant((EnchantUtils *)0x10, (int)v6, v7)) == 0 )
  {
    result = (*(int (__fastcall **)(Player *))(*(_DWORD *)v5 + 652))(v5);
    if ( !result )
    {
      v9 = (BlockSource *)Entity::getRegion(v5);
      v10 = v9;
      v11 = (Dimension *)BlockSource::getDimensionConst(v9);
      if ( Dimension::isUltraWarm(v11) == 1 )
      {
        result = j_j_j__ZN11BlockSource11removeBlockERK8BlockPos_0(v10, v4);
      }
      else
        v12 = *((_DWORD *)v4 + 1);
        v13 = *((_DWORD *)v4 + 2);
        v17 = *(_DWORD *)v4;
        v18 = v12 - 1;
        v19 = v13;
        v14 = (Material *)BlockSource::getMaterial(v10, (const BlockPos *)&v17);
        if ( Material::getBlocksMotion(v14) || (result = Material::isLiquid(v14), result == 1) )
        {
          v15 = *(_BYTE *)(Block::mFlowingWater + 4);
          v16 = 0;
          result = BlockSource::setBlockAndData((int)v10, v4, (int)&v15, 3, 0);
        }
    }
  }
  return result;
}


unsigned int __fastcall FrostedIceBlock::getTickDelay(FrostedIceBlock *this, Random *a2)
{
  return Random::_genRandInt32(a2) % 0x14 + 20;
}


signed int __fastcall FrostedIceBlock::_countNeighbors(FrostedIceBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r10@1
  const BlockPos *v4; // r9@1
  int v5; // r5@2
  _BYTE *v6; // r4@2
  signed int v7; // r6@2
  int v8; // t1@3
  unsigned __int8 v11; // [sp+4h] [bp-4h]@3
  int v12; // [sp+8h] [bp+0h]@3

  v3 = a2;
  v4 = a3;
  if ( unk_2700410 )
  {
    v5 = unk_2700410 - 1;
    v6 = (_BYTE *)Facing::ALL_FACES;
    v7 = 0;
    do
    {
      v8 = *v6++;
      BlockPos::neighbor((BlockPos *)&v12, (int)v4, v8);
      BlockSource::getBlockID((BlockSource *)&v11, v3, (int)&v12);
      if ( v11 == *(_BYTE *)(Block::mFrostedIce + 4) )
        ++v7;
      if ( v7 > 3 )
        break;
    }
    while ( v5-- != 0 );
  }
  else
  return v7;
}


LevelChunk *__fastcall FrostedIceBlock::tick(FrostedIceBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  FrostedIceBlock *v6; // r10@1
  Random *v7; // r9@1
  unsigned int v8; // r6@1
  int v9; // r9@3
  _BYTE *v10; // r6@3
  signed int v11; // r8@3
  int v12; // t1@4
  char *v13; // r7@9
  LevelChunk **v15; // r6@12
  unsigned int v16; // kr00_4@12
  unsigned __int64 v17; // [sp+8h] [bp-48h]@3
  Random *v18; // [sp+10h] [bp-40h]@3
  char v19; // [sp+14h] [bp-3Ch]@12
  unsigned __int8 v20; // [sp+18h] [bp-38h]@9
  unsigned __int8 v21; // [sp+1Ch] [bp-34h]@4
  char v22; // [sp+20h] [bp-30h]@4

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = BlockSource::getData(a2, a3);
  if ( !(Random::_genRandInt32(v7) % 3) || !unk_2700410 )
    goto LABEL_15;
  v17 = __PAIR__((unsigned int)v6, v8);
  v18 = v7;
  v9 = unk_2700410 - 1;
  v10 = (_BYTE *)Facing::ALL_FACES;
  v11 = 0;
  do
  {
    v12 = *v10++;
    BlockPos::neighbor((BlockPos *)&v22, (int)v4, v12);
    BlockSource::getBlockID((BlockSource *)&v21, v5, (int)&v22);
    if ( v21 == *(_BYTE *)(Block::mFrostedIce + 4) )
      ++v11;
    if ( !v9 )
      break;
    --v9;
  }
  while ( v11 < 4 );
  v7 = v18;
  v6 = (FrostedIceBlock *)HIDWORD(v17);
  LOBYTE(v8) = v17;
  if ( v11 >= 4 )
    v13 = (char *)(HIDWORD(v17) + 4);
  else
LABEL_15:
    BlockSource::getRawBrightness((BlockSource *)&v20, v5, (int)v4, 1);
    v13 = (char *)v6 + 4;
    if ( v20 > (signed int)(11 - (v8 & 3) - Block::mLightBlock[*((_BYTE *)v6 + 4)]) )
      return FrostedIceBlock::_slightlyMelt(v6, v5, v4, v7, 1);
  v15 = (LevelChunk **)BlockSource::getTickQueue(v5, v4);
  v19 = *v13;
  v16 = Random::_genRandInt32(v7);
  return BlockTickingQueue::add(v15, v5, (int)v4, &v19, v16 % 0x14 + 20, 0);
}


LevelChunk *__fastcall FrostedIceBlock::onPlace(FrostedIceBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  const BlockPos *v4; // r4@1
  LevelChunk **v5; // r6@1
  Level *v6; // r0@1
  char *v7; // r0@1
  unsigned int v8; // kr00_4@1
  char v10; // [sp+Ch] [bp-14h]@1

  v3 = a2;
  v4 = a3;
  v5 = (LevelChunk **)BlockSource::getTickQueue(a2, a3);
  v10 = *(_BYTE *)(Block::mFrostedIce + 4);
  v6 = (Level *)BlockSource::getLevel(v3);
  v7 = Level::getRandom(v6);
  v8 = Random::_genRandInt32((Random *)v7);
  return BlockTickingQueue::add(v5, v3, (int)v4, &v10, v8 % 0x14 + 20, 0);
}
