

signed int __fastcall IceBlock::playerWillDestroy(IceBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  Entity *v4; // r6@1
  Block *v5; // r7@1
  int v6; // r8@1
  const BlockPos *v7; // r4@1
  _BYTE *v8; // r0@1
  int v9; // r5@1
  int v10; // r0@1
  bool v11; // zf@1
  const ItemInstance *v12; // r2@4
  BlockSource *v13; // r5@8
  Dimension *v14; // r0@9
  int v15; // r1@11
  int v16; // r2@11
  Material *v17; // r9@11
  int v19; // [sp+4h] [bp-2Ch]@11
  int v20; // [sp+8h] [bp-28h]@11
  int v21; // [sp+Ch] [bp-24h]@11
  char v22; // [sp+10h] [bp-20h]@13

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = Player::getSelectedItem(a2);
  v9 = (int)v8;
  v10 = v8[15];
  v11 = v10 == 0;
  if ( v10 )
    v11 = *(_DWORD *)v9 == 0;
  if ( (v11
     || ItemInstance::isNull((ItemInstance *)v9)
     || !*(_BYTE *)(v9 + 14)
     || !EnchantUtils::hasEnchant((EnchantUtils *)0x10, v9, v12))
    && !(*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 652))(v4) )
  {
    v13 = (BlockSource *)Entity::getRegion(v4);
    if ( Block::isSolid(v5)
      || (v14 = (Dimension *)BlockSource::getDimensionConst(v13), Dimension::isUltraWarm(v14) == 1) )
    {
      BlockSource::removeBlock(v13, v7);
      return 1;
    }
    v15 = *((_DWORD *)v7 + 1);
    v16 = *((_DWORD *)v7 + 2);
    v19 = *(_DWORD *)v7;
    v20 = v15 - 1;
    v21 = v16;
    v17 = (Material *)BlockSource::getMaterial(v13, (const BlockPos *)&v19);
    if ( Material::getBlocksMotion(v17) || Material::isLiquid(v17) == 1 )
      v22 = *(_BYTE *)(Block::mFlowingWater + 4);
      BlockSource::setBlock((int)v13, v7, &v22, 3);
  }
  return Block::playerWillDestroy(v5, v4, v7, v6);
}


void __fastcall IceBlock::~IceBlock(IceBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall IceBlock::melt(IceBlock *this, BlockSource *a2, const BlockPos *a3)
{
  char v4; // [sp+4h] [bp-Ch]@1

  v4 = *(_BYTE *)(Block::mFlowingWater + 4);
  return BlockSource::setBlock((int)this, a2, &v4, 3);
}


int __fastcall IceBlock::tick(IceBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  IceBlock *v4; // r6@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  int result; // r0@1
  Dimension *v8; // r0@2
  void (__fastcall *v9)(IceBlock *, BlockSource *, const BlockPos *, unsigned int); // r7@4
  unsigned int v10; // r0@4
  char v11; // [sp+Ch] [bp-1Ch]@1
  unsigned __int8 v12; // [sp+Dh] [bp-1Bh]@1
  char v13; // [sp+10h] [bp-18h]@4

  v4 = this;
  v5 = a3;
  v6 = a2;
  BlockSource::getBrightnessPair((BlockSource *)&v11, a2, a3);
  result = 11 - Block::mLightBlock[*((_BYTE *)v4 + 4)];
  if ( v12 > result )
  {
    v8 = (Dimension *)BlockSource::getDimensionConst(v6);
    if ( Dimension::isUltraWarm(v8) == 1 )
    {
      result = BlockSource::removeBlock(v6, v5);
    }
    else
      v9 = *(void (__fastcall **)(IceBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v4 + 276);
      v10 = BlockSource::getData(v6, v5);
      v9(v4, v6, v5, v10);
      v13 = *(_BYTE *)(Block::mFlowingWater + 4);
      result = BlockSource::setBlock((int)v6, v5, &v13, 3);
  }
  return result;
}


int __fastcall IceBlock::getResourceCount(IceBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


int __fastcall IceBlock::IceBlock(int a1, const void **a2, char a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int v6; // r0@1
  char v7; // r6@3
  const void **v8; // r7@3
  int v9; // r0@3
  signed int v10; // r6@3
  int result; // r0@3

  v4 = a4;
  v5 = a1;
  v6 = 18;
  if ( a4 )
    v6 = 19;
  v7 = a3;
  v8 = a2;
  v9 = Material::getMaterial(v6);
  Block::Block(v5, v8, v7, v9);
  *(_DWORD *)v5 = &off_270D054;
  *(_DWORD *)(v5 + 76) = 1065017672;
  Block::setTicking((Block *)v5, v4 ^ 1);
  Block::setSolid((Block *)v5, v4);
  v10 = 1;
  Block::setPushesOutItems((Block *)v5, 1);
  result = v5;
  if ( v4 )
    v10 = 3;
  *(_DWORD *)(v5 + 20) = v10;
  return result;
}


void __fastcall IceBlock::~IceBlock(IceBlock *this)
{
  IceBlock::~IceBlock(this);
}
