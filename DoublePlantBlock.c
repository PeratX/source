

int __fastcall DoublePlantBlock::onLoaded(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  DoublePlantBlock *v5; // r7@1
  unsigned __int8 v6; // r0@1
  unsigned __int8 v7; // r9@1
  BlockState *v8; // r0@1
  int result; // r0@1
  signed int v10; // r6@2
  int v11; // r1@2
  int v12; // r2@2
  char v13; // r8@2
  BlockState *v14; // r0@3
  int v15; // r6@3
  int v16; // r10@3
  char v17; // r0@3
  char v18; // [sp+Ch] [bp-34h]@3
  int v19; // [sp+10h] [bp-30h]@2
  int v20; // [sp+14h] [bp-2Ch]@2
  int v21; // [sp+18h] [bp-28h]@2
  unsigned __int8 v22; // [sp+1Fh] [bp-21h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = BlockSource::getData(a2, a3);
  v7 = v6;
  v22 = v6;
  v8 = (BlockState *)Block::getBlockState((int)v5, 11);
  result = BlockState::getBool(v8, &v22);
  if ( result == 1 )
  {
    v10 = DoublePlantBlock::getType(v5, v4, v3);
    v11 = *((_DWORD *)v3 + 1);
    v12 = *((_DWORD *)v3 + 2);
    v19 = *(_DWORD *)v3;
    v20 = v11 - 1;
    v21 = v12;
    result = DoublePlantBlock::getType(v5, v4, (const BlockPos *)&v19);
    v13 = result;
    if ( v10 != result )
    {
      v14 = (BlockState *)Block::getBlockState((int)v5, 24);
      v16 = *(_QWORD *)v14 >> 32;
      v15 = *(_QWORD *)v14;
      v17 = BlockState::getMask(v14);
      v18 = *((_BYTE *)v5 + 4);
      result = BlockSource::setBlockAndData((int)v4, v3, &v18, v7 & ~v17 | (v13 << (v15 + 1 - v16)), 3, 0);
    }
  }
  return result;
}


signed int __fastcall DoublePlantBlock::popGrassResources(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3, int a4, Player *a5)
{
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  Block *v7; // r6@1
  char v8; // r0@1
  int v9; // r3@2
  signed int result; // r0@10
  int v11; // [sp+0h] [bp-60h]@4
  int v12; // [sp+8h] [bp-58h]@8
  void *v13; // [sp+24h] [bp-3Ch]@6
  void *ptr; // [sp+34h] [bp-2Ch]@4

  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = DoublePlantBlock::getType(this, a2, a3);
  if ( (unsigned __int8)(v8 | 1) == 3 )
  {
    v9 = 1;
    if ( v8 == 3 )
      v9 = 2;
    ItemInstance::ItemInstance((ItemInstance *)&v11, Block::mTallgrass, 2, v9);
    Block::popResource(v7, v6, v5, (const ItemInstance *)&v11);
    if ( ptr )
      operator delete(ptr);
    if ( v13 )
      operator delete(v13);
    if ( v12 )
      (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    v12 = 0;
    result = 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall DoublePlantBlock::mayPlace(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4)
{
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r4@1
  int v6; // r1@2
  int v7; // r2@2
  signed int result; // r0@2
  int v9; // [sp+4h] [bp-1Ch]@2
  int v10; // [sp+8h] [bp-18h]@2
  int v11; // [sp+Ch] [bp-14h]@2

  v4 = a3;
  v5 = a2;
  if ( Block::mayPlace(this, a2, a3) == 1 )
  {
    v6 = *((_DWORD *)v4 + 1);
    v7 = *((_DWORD *)v4 + 2);
    v9 = *(_DWORD *)v4;
    v10 = v6 + 1;
    v11 = v7;
    result = BlockSource::isEmptyBlock(v5, (const BlockPos *)&v9);
  }
  else
    result = 0;
  return result;
}


ItemInstance *__fastcall DoublePlantBlock::asItemInstance(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r4@1
  ItemInstance *v5; // r5@1
  int v6; // r0@1

  v4 = a2;
  v5 = this;
  v6 = DoublePlantBlock::getType(a2, a3, (const BlockPos *)a4);
  return ItemInstance::ItemInstance(v5, (int)v4, 1, v6);
}


signed int __fastcall DoublePlantBlock::placeAt(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3, unsigned __int8 a4, int a5, Entity *a6, ItemUseCallback *a7)
{
  unsigned __int8 v7; // r9@1
  const BlockPos *v8; // r7@1
  DoublePlantBlock *v9; // r6@1
  WorldChangeTransaction *v10; // r0@1
  BlockState *v11; // r0@1
  char v12; // r4@1
  int v13; // r5@1
  char v14; // r0@1
  int v15; // r2@1
  int v16; // r3@1
  signed int v17; // r4@1
  char v19; // [sp+4h] [bp-44h]@1
  char v20; // [sp+5h] [bp-43h]@1
  int v21; // [sp+8h] [bp-40h]@1
  int v22; // [sp+Ch] [bp-3Ch]@1
  int v23; // [sp+10h] [bp-38h]@1
  char v24; // [sp+14h] [bp-34h]@1
  unsigned __int8 v25; // [sp+15h] [bp-33h]@1
  char v26; // [sp+18h] [bp-30h]@1

  v7 = a4;
  v8 = a3;
  v9 = this;
  v10 = (WorldChangeTransaction *)WorldChangeTransaction::WorldChangeTransaction(
                                    (int)&v26,
                                    (int)a2,
                                    1,
                                    (int)a6,
                                    (int)a7);
  v24 = *((_BYTE *)v9 + 4);
  v25 = v7;
  WorldChangeTransaction::setBlock(v10, v8, (const FullBlock *)&v24, a5);
  v11 = (BlockState *)Block::getBlockState((int)v9, 11);
  v12 = *(_QWORD *)v11 >> 32;
  v13 = *(_QWORD *)v11;
  v14 = BlockState::getMask(v11);
  v15 = *((_DWORD *)v8 + 1);
  v16 = *((_DWORD *)v8 + 2);
  v21 = *(_DWORD *)v8;
  v22 = v15 + 1;
  v23 = v16;
  v19 = *((_BYTE *)v9 + 4);
  v20 = v7 & ~v14 | (1 << (v13 + 1 - v12));
  WorldChangeTransaction::setBlock((WorldChangeTransaction *)&v26, (const BlockPos *)&v21, (const FullBlock *)&v19, a5);
  v17 = WorldChangeTransaction::apply((WorldChangeTransaction *)&v26);
  WorldChangeTransaction::~WorldChangeTransaction((WorldChangeTransaction *)&v26);
  return v17;
}


int __fastcall DoublePlantBlock::getColor(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3, unsigned __int8 a4)
{
  int result; // r0@2

  if ( (unsigned __int8)(DoublePlantBlock::getType(this, a2, a3) | 1) == 3 )
    result = (*(int (**)(void))(*(_DWORD *)Block::mGrass + 392))();
  else
    result = 0xFFFFFF;
  return result;
}


int __fastcall DoublePlantBlock::getVisualShape(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5)
{
  DoublePlantBlock *v5; // r5@1
  AABB *v6; // r4@1
  int (__fastcall *v7)(DoublePlantBlock *, unsigned int, AABB *, int); // r6@1
  unsigned int v8; // r0@1

  v5 = this;
  v6 = a4;
  v7 = *(int (__fastcall **)(DoublePlantBlock *, unsigned int, AABB *, int))(*(_DWORD *)this + 420);
  v8 = BlockSource::getData(a2, a3);
  return v7(v5, v8, v6, a5);
}


int __fastcall DoublePlantBlock::canSurvive(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r6@1
  BlockSource *v4; // r4@1
  DoublePlantBlock *v5; // r5@1
  BlockState *v6; // r0@1
  _BOOL4 v7; // r0@1
  __int64 v8; // kr00_8@1
  int v9; // r0@2
  int v10; // r1@3
  int v11; // r2@3
  const BlockPos *v12; // r2@3
  BushBlock *v13; // r0@3
  BlockSource *v14; // r1@3
  int v15; // r0@4
  unsigned __int8 v17; // [sp+0h] [bp-40h]@4
  __int64 v18; // [sp+4h] [bp-3Ch]@4
  int v19; // [sp+Ch] [bp-34h]@4
  int v20; // [sp+10h] [bp-30h]@3
  int v21; // [sp+14h] [bp-2Ch]@3
  int v22; // [sp+18h] [bp-28h]@3
  unsigned __int8 v23; // [sp+1Ch] [bp-24h]@2
  __int64 v24; // [sp+20h] [bp-20h]@2
  int v25; // [sp+28h] [bp-18h]@2
  unsigned __int8 v26; // [sp+2Fh] [bp-11h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v26 = BlockSource::getData(a2, a3);
  v6 = (BlockState *)Block::getBlockState((int)v5, 11);
  v7 = BlockState::getBool(v6, &v26);
  v8 = *(_QWORD *)v3;
  if ( v7 == 1 )
  {
    v9 = *((_DWORD *)v3 + 2);
    v24 = v8 - 0x100000000LL;
    v25 = v9;
    BlockSource::getBlockID((BlockSource *)&v23, v4, (int)&v24);
    if ( v23 == *((_BYTE *)v5 + 4) )
    {
      v10 = *((_DWORD *)v3 + 1);
      v11 = *((_DWORD *)v3 + 2);
      v20 = *(_DWORD *)v3;
      v21 = v10 - 1;
      v22 = v11;
      v12 = (const BlockPos *)&v20;
      v13 = v5;
      v14 = v4;
      return BushBlock::canSurvive(v13, v14, v12);
    }
  }
  else
    v15 = *((_DWORD *)v3 + 2);
    v18 = v8 + 0x100000000LL;
    v19 = v15;
    BlockSource::getBlockID((BlockSource *)&v17, v4, (int)&v18);
    if ( v17 == *((_BYTE *)v5 + 4) )
      v12 = v3;
  return 0;
}


unsigned int __fastcall DoublePlantBlock::getOrientation(DoublePlantBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


int __fastcall DoublePlantBlock::canBeSilkTouched(DoublePlantBlock *this)
{
  return 0;
}


unsigned int __fastcall DoublePlantBlock::getSpawnResourcesAuxValue(DoublePlantBlock *this, int a2)
{
  unsigned int v2; // r4@1
  unsigned int result; // r0@2
  unsigned __int64 *v4; // r0@3

  v2 = a2;
  if ( (a2 | 1) == 3 )
  {
    result = 0;
  }
  else
    v4 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
    result = (0xFu >> (4 - (*v4 >> 32))) & (unsigned __int8)(v2 >> (*v4 + 1 - (*v4 >> 32)));
  return result;
}


InstantaneousAttributeBuff *__fastcall DoublePlantBlock::playerDestroy(DoublePlantBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  Player *v4; // r6@1
  Block *v5; // r7@1
  int v6; // r8@1
  const BlockPos *v7; // r5@1
  Level *v8; // r0@1
  ItemInstance *v9; // r0@2
  ItemInstance *v10; // r4@2
  int v11; // r0@2
  bool v12; // zf@2
  BlockSource *v13; // r0@8
  int v14; // r3@8
  InstantaneousAttributeBuff *result; // r0@8
  Player *v16; // [sp+0h] [bp-20h]@0

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)Entity::getLevel(a2);
  if ( Level::isClientSide(v8) )
    goto LABEL_12;
  v9 = (ItemInstance *)Player::getSelectedItem(v4);
  v10 = v9;
  v11 = *((_BYTE *)v9 + 15);
  v12 = v11 == 0;
  if ( v11 )
    v12 = *(_DWORD *)v10 == 0;
  if ( v12
    || ItemInstance::isNull(v10)
    || !*((_BYTE *)v10 + 14)
    || *(_DWORD *)Player::getSelectedItem(v4) != Item::mShears
    || (v13 = (BlockSource *)Entity::getRegion(v4),
        (result = (InstantaneousAttributeBuff *)DoublePlantBlock::popGrassResources(v5, v13, v7, v14, v16)) == 0) )
  {
LABEL_12:
    result = j_j_j__ZNK5Block13playerDestroyER6PlayerRK8BlockPosi(v5, v4, v7, v6);
  }
  return result;
}


unsigned int __fastcall DoublePlantBlock::randomlyModifyPosition(DoublePlantBlock *this, const BlockPos *a2, int *a3, unsigned int *a4)
{
  int *v4; // r5@1
  unsigned int *v5; // r4@1
  unsigned int v7; // r0@1
  unsigned int result; // r0@1

  v4 = a3;
  v5 = a4;
  _R6 = this;
  Vec3::Vec3((int)this, (int)a3);
  v7 = BlockPos::randomSeed((BlockPos *)v4);
  _R1 = (v7 >> 16) & 0xF;
  __asm
  {
    VLDR            S2, =-0.15
    VLDR            S6, =0.02
    VMOV            S0, R1
    VCVT.F32.S32    S0, S0
  }
  *v5 = v7;
  __asm { VLDR            S4, [R6] }
  result = (v7 >> 24) & 0xF;
    VADD.F32        S4, S4, S2
    VMUL.F32        S0, S0, S6
    VADD.F32        S0, S4, S0
    VMOV            S4, R0
    VCVT.F32.S32    S4, S4
    VSTR            S0, [R6]
    VLDR            S0, [R6,#8]
    VMUL.F32        S4, S4, S6
    VADD.F32        S0, S0, S2
    VADD.F32        S0, S0, S4
    VSTR            S0, [R6,#8]
  return result;
}


signed int __fastcall DoublePlantBlock::onFertilized(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4, ItemUseCallback *a5)
{
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  DoublePlantBlock *v7; // r6@1
  int v8; // r3@1
  signed int result; // r0@2
  Entity *v10; // [sp+0h] [bp-18h]@0

  v5 = a3;
  v6 = a2;
  v7 = this;
  if ( (DoublePlantBlock::getType(this, a2, a3) | 1) == 3 )
  {
    result = 0;
  }
  else
    DoublePlantBlock::popFlowerResources(v7, v6, v5, v8, v10);
    result = 1;
  return result;
}


int __fastcall DoublePlantBlock::checkAlive(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3)
{
  DoublePlantBlock *v3; // r6@1
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  int result; // r0@1
  BlockState *v7; // r0@2
  int v8; // r1@3
  int v9; // r2@3
  int v10; // r8@4
  int v11; // r1@4
  int v12; // r12@4
  int v13; // r6@4
  unsigned int v14; // r0@4
  __int16 v15; // [sp+Ch] [bp-64h]@4
  int v16; // [sp+10h] [bp-60h]@4
  signed int v17; // [sp+14h] [bp-5Ch]@4
  int v18; // [sp+18h] [bp-58h]@4
  int v19; // [sp+1Ch] [bp-54h]@4
  int v20; // [sp+20h] [bp-50h]@4
  int v21; // [sp+24h] [bp-4Ch]@4
  int v22; // [sp+28h] [bp-48h]@4
  int v23; // [sp+2Ch] [bp-44h]@4
  int v24; // [sp+30h] [bp-40h]@4
  char v25; // [sp+34h] [bp-3Ch]@4
  unsigned __int8 v26; // [sp+40h] [bp-30h]@3
  int v27; // [sp+44h] [bp-2Ch]@3
  int v28; // [sp+48h] [bp-28h]@3
  int v29; // [sp+4Ch] [bp-24h]@3
  unsigned __int8 v30; // [sp+53h] [bp-1Dh]@2

  v3 = this;
  v4 = a3;
  v5 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 324))();
  if ( !result )
  {
    v30 = BlockSource::getData(v5, v4);
    v7 = (BlockState *)Block::getBlockState((int)v3, 11);
    if ( !BlockState::getBool(v7, &v30)
      || (v8 = *((_DWORD *)v4 + 1),
          v9 = *((_DWORD *)v4 + 2),
          v27 = *(_DWORD *)v4,
          v28 = v8 - 1,
          v29 = v9,
          BlockSource::getBlockID((BlockSource *)&v26, v5, (int)&v27),
          result = *(_BYTE *)(Block::mTopSnow + 4),
          v26 != result) )
    {
      v10 = BlockSource::getLevel(v5);
      v16 = 1056964608;
      v17 = 1056964608;
      v18 = 1056964608;
      BlockPos::BlockPos((int)&v19, (int)&v16);
      v11 = *((_DWORD *)v4 + 1);
      v12 = *((_DWORD *)v4 + 2);
      v22 = *(_DWORD *)v4 + v19;
      v23 = v20 + v11;
      v24 = v21 + v12;
      Vec3::Vec3((int)&v25, (int)&v22);
      v13 = *((_BYTE *)v3 + 4);
      v14 = BlockSource::getData(v5, v4);
      Level::broadcastDimensionEvent(v10, v5, 2001, (int)&v25, v13 | (v14 << 8));
      v15 = FullBlock::AIR;
      result = BlockSource::setBlockAndData((int)v5, v4, (int)&v15, 3, 0);
    }
  }
  return result;
}


int __fastcall DoublePlantBlock::onPlace(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r7@1
  BlockSource *v4; // r4@1
  DoublePlantBlock *v5; // r6@1
  unsigned __int8 v6; // r0@1
  unsigned __int8 v7; // r5@1
  BlockState *v8; // r0@1
  int result; // r0@1
  BlockState *v10; // r0@2
  __int64 v11; // r8@2
  char v12; // r0@2
  int v13; // r2@2
  int v14; // r3@2
  char v15; // [sp+8h] [bp-30h]@2
  int v16; // [sp+Ch] [bp-2Ch]@2
  int v17; // [sp+10h] [bp-28h]@2
  int v18; // [sp+14h] [bp-24h]@2
  unsigned __int8 v19; // [sp+1Bh] [bp-1Dh]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = BlockSource::getData(a2, a3);
  v7 = v6;
  v19 = v6;
  v8 = (BlockState *)Block::getBlockState((int)v5, 11);
  result = BlockState::getBool(v8, &v19);
  if ( !result )
  {
    v10 = (BlockState *)Block::getBlockState((int)v5, 11);
    v11 = *(_QWORD *)v10;
    v12 = BlockState::getMask(v10);
    v13 = *((_DWORD *)v3 + 1);
    v14 = *((_DWORD *)v3 + 2);
    v16 = *(_DWORD *)v3;
    v17 = v13 + 1;
    v18 = v14;
    v15 = *((_BYTE *)v5 + 4);
    result = BlockSource::setBlockAndData(
               (int)v4,
               (BlockPos *)&v16,
               &v15,
               v7 & ~v12 | (1 << (v11 + 1 - BYTE4(v11))),
               3,
               0);
  }
  return result;
}


signed int __fastcall DoublePlantBlock::canBeBuiltOver(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3)
{
  int v3; // r1@1
  signed int result; // r0@1

  v3 = DoublePlantBlock::getType(this, a2, a3) | 1;
  result = 0;
  if ( v3 == 3 )
    result = 1;
  return result;
}


void __fastcall DoublePlantBlock::buildDescriptionId(DoublePlantBlock *this, int a2, unsigned int a3)
{
  DoublePlantBlock::buildDescriptionId(this, a2, a3);
}


signed int __fastcall DoublePlantBlock::getResource(DoublePlantBlock *this, Random *a2, int a3, int a4)
{
  Random *v4; // r4@1
  unsigned __int8 v5; // r6@1
  DoublePlantBlock *v6; // r5@1
  unsigned __int64 *v7; // r0@1
  unsigned int v8; // r0@1
  signed int result; // r0@3

  v4 = a2;
  v5 = a3;
  v6 = this;
  v7 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  v8 = (0xFu >> (4 - (*v7 >> 32))) & (unsigned __int8)(v5 >> (*v7 + 1 - (*v7 >> 32)));
  if ( v8 == 3 )
    goto LABEL_9;
  if ( v8 != 2 )
    return *((_BYTE *)v6 + 4);
  if ( Random::_genRandInt32(v4) & 7 )
LABEL_9:
    result = -1;
  else
    result = *(_WORD *)(Item::mSeeds_wheat + 18);
  return result;
}


unsigned int __fastcall DoublePlantBlock::getResourceCount(DoublePlantBlock *this, Random *a2, int a3, int a4)
{
  return Random::_genRandInt32(a2) % (2 * a4 | 1u) + 1;
}


signed int __fastcall DoublePlantBlock::getType(DoublePlantBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1
  signed int result; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  result = (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
  if ( result > 5 )
    result = 2;
  return result;
}


unsigned int __fastcall DoublePlantBlock::getVariant(DoublePlantBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


signed int __fastcall DoublePlantBlock::popFlowerResources(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3, int a4, Entity *a5)
{
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  Block *v7; // r6@1
  int v8; // r0@1
  int v10; // [sp+0h] [bp-60h]@1
  int v11; // [sp+8h] [bp-58h]@5
  void *v12; // [sp+24h] [bp-3Ch]@3
  void *ptr; // [sp+34h] [bp-2Ch]@1

  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = DoublePlantBlock::getType(this, a2, a3);
  ItemInstance::ItemInstance((ItemInstance *)&v10, Block::mDoublePlant, 1, v8);
  Block::popResource(v7, v6, v5, (const ItemInstance *)&v10);
  if ( ptr )
    operator delete(ptr);
  if ( v12 )
    operator delete(v12);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  return 1;
}


signed int __fastcall DoublePlantBlock::onGraphicsModeChanged(DoublePlantBlock *this, bool a2, int a3, bool a4)
{
  int v4; // r4@1
  DoublePlantBlock *v5; // r5@1
  signed int result; // r0@1

  v4 = a3;
  v5 = this;
  Block::onGraphicsModeChanged(this, a2, a3, a4);
  result = 5;
  if ( v4 )
    result = 0;
  *((_DWORD *)v5 + 5) = result;
  return result;
}


int __fastcall DoublePlantBlock::_isCoveredByTopSnow(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  DoublePlantBlock *v5; // r6@1
  BlockState *v6; // r0@1
  int v7; // r1@2
  int v8; // r2@2
  int result; // r0@3
  unsigned __int8 v10; // [sp+4h] [bp-24h]@2
  int v11; // [sp+8h] [bp-20h]@2
  int v12; // [sp+Ch] [bp-1Ch]@2
  int v13; // [sp+10h] [bp-18h]@2
  unsigned __int8 v14; // [sp+17h] [bp-11h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v14 = BlockSource::getData(a2, a3);
  v6 = (BlockState *)Block::getBlockState((int)v5, 11);
  result = 0;
  if ( BlockState::getBool(v6, &v14) == 1 )
  {
    v7 = *((_DWORD *)v3 + 1);
    v8 = *((_DWORD *)v3 + 2);
    v11 = *(_DWORD *)v3;
    v12 = v7 - 1;
    v13 = v8;
    BlockSource::getBlockID((BlockSource *)&v10, v4, (int)&v11);
    if ( v10 == *(_BYTE *)(Block::mTopSnow + 4) )
      result = 1;
  }
  return result;
}


signed int __fastcall DoublePlantBlock::playerWillDestroy(DoublePlantBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  Player *v4; // r4@1
  DoublePlantBlock *v5; // r6@1
  int v6; // r8@1
  const BlockPos *v7; // r7@1
  BlockSource *v8; // r5@1
  BlockState *v9; // r0@1
  int v10; // r1@2
  int v11; // r2@2
  signed int v12; // r4@3
  int v13; // r9@3
  int v14; // r1@3
  int v15; // r12@3
  int v17; // [sp+Ch] [bp-64h]@3
  signed int v18; // [sp+10h] [bp-60h]@3
  int v19; // [sp+14h] [bp-5Ch]@3
  int v20; // [sp+18h] [bp-58h]@3
  int v21; // [sp+1Ch] [bp-54h]@3
  int v22; // [sp+20h] [bp-50h]@3
  int v23; // [sp+24h] [bp-4Ch]@3
  int v24; // [sp+28h] [bp-48h]@3
  int v25; // [sp+2Ch] [bp-44h]@3
  char v26; // [sp+30h] [bp-40h]@3
  __int16 v27; // [sp+3Ch] [bp-34h]@3
  unsigned __int8 v28; // [sp+40h] [bp-30h]@2
  int v29; // [sp+44h] [bp-2Ch]@2
  int v30; // [sp+48h] [bp-28h]@2
  int v31; // [sp+4Ch] [bp-24h]@2
  unsigned __int8 v32; // [sp+53h] [bp-1Dh]@1

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (BlockSource *)Entity::getRegion(a2);
  v32 = BlockSource::getData(v8, v7);
  v9 = (BlockState *)Block::getBlockState((int)v5, 11);
  if ( BlockState::getBool(v9, &v32) != 1
    || (v10 = *((_DWORD *)v7 + 1),
        v11 = *((_DWORD *)v7 + 2),
        v29 = *(_DWORD *)v7,
        v30 = v10 - 1,
        v31 = v11,
        BlockSource::getBlockID((BlockSource *)&v28, v8, (int)&v29),
        v28 != *(_BYTE *)(Block::mTopSnow + 4)) )
  {
    v12 = Block::playerWillDestroy(v5, v4, v7, v6);
  }
  else
    v12 = 0;
    v27 = FullBlock::AIR;
    BlockSource::setBlockAndData((int)v8, v7, (int)&v27, 3, 0);
    v13 = BlockSource::getLevel(v8);
    v17 = 1056964608;
    v18 = 1056964608;
    v19 = 1056964608;
    BlockPos::BlockPos((int)&v20, (int)&v17);
    v14 = *((_DWORD *)v7 + 1);
    v15 = *((_DWORD *)v7 + 2);
    v23 = *(_DWORD *)v7 + v20;
    v24 = v21 + v14;
    v25 = v22 + v15;
    Vec3::Vec3((int)&v26, (int)&v23);
    Level::broadcastDimensionEvent(v13, v8, 2001, (int)&v26, *((_BYTE *)v5 + 4) | (unsigned __int16)((_WORD)v6 << 8));
  return v12;
}


int __fastcall DoublePlantBlock::neighborChanged(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  DoublePlantBlock *v4; // r6@1
  const BlockPos *v5; // r7@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r10@1
  int result; // r0@1
  unsigned int v9; // r8@2
  BlockState *v10; // r0@2
  BlockState *v11; // r0@7
  int v12; // r1@8
  int v13; // r2@8
  int v14; // r9@9
  int v15; // r1@9
  int v16; // r2@9
  __int16 v17; // [sp+8h] [bp-68h]@9
  int v18; // [sp+Ch] [bp-64h]@9
  signed int v19; // [sp+10h] [bp-60h]@9
  int v20; // [sp+14h] [bp-5Ch]@9
  int v21; // [sp+18h] [bp-58h]@9
  int v22; // [sp+1Ch] [bp-54h]@9
  int v23; // [sp+20h] [bp-50h]@9
  int v24; // [sp+24h] [bp-4Ch]@9
  int v25; // [sp+28h] [bp-48h]@9
  int v26; // [sp+2Ch] [bp-44h]@9
  char v27; // [sp+30h] [bp-40h]@9
  unsigned __int8 v28; // [sp+3Ch] [bp-34h]@8
  _DWORD v29[3]; // [sp+40h] [bp-30h]@2
  unsigned __int8 v30; // [sp+4Fh] [bp-21h]@7

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 324))();
  if ( !result )
  {
    v9 = BlockSource::getData(v7, v6);
    LOBYTE(v29[0]) = v9;
    v10 = (BlockState *)Block::getBlockState((int)v4, 11);
    if ( !BlockState::getBool(v10, (const unsigned __int8 *)v29)
      && *(_DWORD *)v6 == *(_DWORD *)v5
      && *((_DWORD *)v6 + 1) - 1 == *((_DWORD *)v5 + 1)
      && *((_DWORD *)v6 + 2) == *((_DWORD *)v5 + 2) )
    {
      (*(void (__fastcall **)(DoublePlantBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v4 + 276))(
        v4,
        v7,
        v6,
        v9);
    }
    v30 = BlockSource::getData(v7, v6);
    v11 = (BlockState *)Block::getBlockState((int)v4, 11);
    if ( !BlockState::getBool(v11, &v30)
      || (v12 = *((_DWORD *)v6 + 1),
          v13 = *((_DWORD *)v6 + 2),
          v29[0] = *(_DWORD *)v6,
          v29[1] = v12 - 1,
          v29[2] = v13,
          BlockSource::getBlockID((BlockSource *)&v28, v7, (int)v29),
          result = *(_BYTE *)(Block::mTopSnow + 4),
          v28 != result) )
      v14 = BlockSource::getLevel(v7);
      v18 = 1056964608;
      v19 = 1056964608;
      v20 = 1056964608;
      BlockPos::BlockPos((int)&v21, (int)&v18);
      v15 = *((_DWORD *)v6 + 1);
      v16 = *((_DWORD *)v6 + 2);
      v24 = *(_DWORD *)v6 + v21;
      v25 = v22 + v15;
      v26 = v23 + v16;
      Vec3::Vec3((int)&v27, (int)&v24);
      Level::broadcastDimensionEvent(v14, v7, 2001, (int)&v27, *((_BYTE *)v4 + 4) | (v9 << 8));
      v17 = FullBlock::AIR;
      result = BlockSource::setBlockAndData((int)v7, v6, (int)&v17, 3, 0);
  }
  return result;
}


signed int __fastcall DoublePlantBlock::getType(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r7@1
  BlockSource *v4; // r5@1
  DoublePlantBlock *v5; // r4@1
  unsigned int v6; // r6@1
  BlockState *v7; // r0@1
  int v8; // r1@2
  int v9; // r2@2
  unsigned int v10; // r5@2
  unsigned __int64 *v11; // r0@2
  int v12; // r0@2
  char v13; // r1@2
  unsigned int v14; // r1@2
  unsigned __int64 *v15; // r0@3
  char v16; // r1@3
  signed int result; // r0@4
  int v18; // [sp+4h] [bp-24h]@2
  int v19; // [sp+8h] [bp-20h]@2
  int v20; // [sp+Ch] [bp-1Ch]@2
  unsigned __int8 v21; // [sp+13h] [bp-15h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = BlockSource::getData(a2, a3);
  v21 = v6;
  v7 = (BlockState *)Block::getBlockState((int)v5, 11);
  if ( BlockState::getBool(v7, &v21) == 1 )
  {
    v8 = *((_DWORD *)v3 + 1);
    v9 = *((_DWORD *)v3 + 2);
    v18 = *(_DWORD *)v3;
    v19 = v8 - 1;
    v20 = v9;
    v10 = BlockSource::getData(v4, (const BlockPos *)&v18);
    v11 = (unsigned __int64 *)Block::getBlockState((int)v5, 24);
    v13 = *v11;
    v12 = *v11 >> 32;
    v14 = v10 >> (v13 + 1 - v12);
  }
  else
    v15 = (unsigned __int64 *)Block::getBlockState((int)v5, 24);
    v16 = *v15;
    v12 = *v15 >> 32;
    v14 = v6 >> (v16 + 1 - v12);
  result = (0xFu >> (4 - v12)) & v14;
  if ( result > 5 )
    result = 2;
  return result;
}


void __fastcall DoublePlantBlock::~DoublePlantBlock(DoublePlantBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall DoublePlantBlock::DoublePlantBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  AABB *v7; // r0@1
  void (__fastcall *v8)(int, int *, int *); // r3@1
  int v10; // [sp+4h] [bp-44h]@1
  signed int v11; // [sp+8h] [bp-40h]@1
  signed int v12; // [sp+Ch] [bp-3Ch]@1
  int v13; // [sp+10h] [bp-38h]@1
  int v14; // [sp+14h] [bp-34h]@1
  int v15; // [sp+18h] [bp-30h]@1
  int v16; // [sp+1Ch] [bp-2Ch]@1
  signed int v17; // [sp+20h] [bp-28h]@1
  signed int v18; // [sp+24h] [bp-24h]@1
  int v19; // [sp+28h] [bp-20h]@1
  int v20; // [sp+2Ch] [bp-1Ch]@1
  signed int v21; // [sp+30h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(9);
  BushBlock::BushBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_2707D04;
  v7 = (AABB *)AABB::AABB((AABB *)(v3 + 644));
  *(_DWORD *)(v3 + 20) = 5;
  v19 = 1050253722;
  v20 = 0;
  v21 = 1050253722;
  v16 = 1060320051;
  v17 = 1065353216;
  v18 = 1060320051;
  AABB::set(v7, (const Vec3 *)&v19, (const Vec3 *)&v16);
  v8 = *(void (__fastcall **)(int, int *, int *))(*(_DWORD *)v3 + 452);
  v13 = 1050253722;
  v14 = 0;
  v15 = 1050253722;
  v10 = 1060320051;
  v11 = 1058642330;
  v12 = 1060320051;
  v8(v3, &v13, &v10);
  return v3;
}


_BOOL4 __fastcall DoublePlantBlock::isTop(DoublePlantBlock *this, unsigned __int8 a2)
{
  BlockState *v2; // r0@1
  unsigned __int8 v4; // [sp+7h] [bp-9h]@1

  v4 = a2;
  v2 = (BlockState *)Block::getBlockState((int)this, 11);
  return BlockState::getBool(v2, &v4);
}


int __fastcall DoublePlantBlock::getColorForParticle(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  unsigned __int8 v4; // r6@1
  unsigned __int64 *v5; // r0@1
  signed int v6; // r0@1
  int result; // r0@3

  v4 = a4;
  v5 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  v6 = (0xFu >> (4 - (*v5 >> 32))) & (v4 >> (*v5 + 1 - (*v5 >> 32)));
  if ( v6 > 5 || (unsigned __int8)(v6 | 1) == 3 )
    result = (*(int (**)(void))(*(_DWORD *)Block::mGrass + 392))();
  else
    result = 0xFFFFFF;
  return result;
}


AABB *__fastcall DoublePlantBlock::getVisualShape(DoublePlantBlock *this, unsigned __int8 a2, AABB *a3, bool a4)
{
  unsigned __int8 v4; // r6@1
  bool v5; // r5@1
  AABB *v6; // r4@1
  Block *v7; // r7@1
  BlockState *v8; // r0@1
  __int64 v9; // r0@3
  unsigned __int8 v11; // [sp+3h] [bp-15h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = this;
  v11 = a2;
  v8 = (BlockState *)Block::getBlockState((int)this, 11);
  if ( BlockState::getBool(v8, &v11) == 1 )
  {
    v6 = (AABB *)Block::getVisualShape(v7, v4, v6, v5);
  }
  else
    HIDWORD(v9) = (char *)v7 + 644;
    LODWORD(v9) = v6;
    AABB::set(v9);
  return v6;
}


void __fastcall DoublePlantBlock::~DoublePlantBlock(DoublePlantBlock *this)
{
  DoublePlantBlock::~DoublePlantBlock(this);
}


unsigned int __fastcall DoublePlantBlock::getOrientation(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r7@1
  BlockSource *v4; // r5@1
  DoublePlantBlock *v5; // r4@1
  unsigned int v6; // r6@1
  BlockState *v7; // r0@1
  unsigned __int64 *v8; // r0@2
  int v9; // r0@2
  char v10; // r1@2
  unsigned int v11; // r1@2
  int v12; // r1@3
  int v13; // r2@3
  unsigned int v14; // r5@3
  unsigned __int64 *v15; // r0@3
  char v16; // r1@3
  int v18; // [sp+4h] [bp-24h]@3
  int v19; // [sp+8h] [bp-20h]@3
  int v20; // [sp+Ch] [bp-1Ch]@3
  unsigned __int8 v21; // [sp+13h] [bp-15h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = BlockSource::getData(a2, a3);
  v21 = v6;
  v7 = (BlockState *)Block::getBlockState((int)v5, 11);
  if ( BlockState::getBool(v7, &v21) == 1 )
  {
    v8 = (unsigned __int64 *)Block::getBlockState((int)v5, 12);
    v10 = *v8;
    v9 = *v8 >> 32;
    v11 = v6 >> (v10 + 1 - v9);
  }
  else
    v12 = *((_DWORD *)v3 + 1);
    v13 = *((_DWORD *)v3 + 2);
    v18 = *(_DWORD *)v3;
    v19 = v12 + 1;
    v20 = v13;
    v14 = BlockSource::getData(v4, (const BlockPos *)&v18);
    v15 = (unsigned __int64 *)Block::getBlockState((int)v5, 12);
    v16 = *v15;
    v9 = *v15 >> 32;
    v11 = v14 >> (v16 + 1 - v9);
  return (0xFu >> (4 - v9)) & v11;
}


_DWORD *__fastcall DoublePlantBlock::getAABB(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  DoublePlantBlock *v7; // r5@1
  AABB *v8; // r8@1
  const BlockPos *v9; // r6@1
  BlockSource *v10; // r7@1
  int v11; // r0@2
  BlockState *v12; // r0@2
  _BOOL4 v13; // r0@2
  void (__fastcall *v14)(int *, DoublePlantBlock *, int *); // r3@2
  int v15; // r1@3
  int v16; // r2@3
  const Vec3 *v21; // r1@3
  AABB *v22; // r0@3
  _DWORD *result; // r0@4
  char v24; // [sp+4h] [bp-4Ch]@5
  int v25; // [sp+10h] [bp-40h]@3
  int v27; // [sp+18h] [bp-38h]@3
  int v28; // [sp+1Ch] [bp-34h]@3
  int v29; // [sp+20h] [bp-30h]@3
  int v30; // [sp+24h] [bp-2Ch]@3
  int v31; // [sp+28h] [bp-28h]@3
  int v32; // [sp+30h] [bp-20h]@3
  unsigned __int8 v33; // [sp+37h] [bp-19h]@2

  v7 = this;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  if ( a6 == 1 )
  {
    v11 = (*(int (__fastcall **)(DoublePlantBlock *))(*(_DWORD *)this + 416))(this);
    AABB::set(v8, (const Vec3 *)v11, (const Vec3 *)(v11 + 12));
    v33 = BlockSource::getData(v10, v9);
    v12 = (BlockState *)Block::getBlockState((int)v7, 11);
    v13 = BlockState::getBool(v12, &v33);
    v14 = *(void (__fastcall **)(int *, DoublePlantBlock *, int *))(*(_DWORD *)v7 + 24);
    if ( v13 == 1 )
    {
      v15 = *((_DWORD *)v9 + 1);
      v16 = *((_DWORD *)v9 + 2);
      v28 = *(_DWORD *)v9;
      v29 = v15 - 1;
      v30 = v16;
      v14(&v25, v7, &v28);
      __asm
      {
        VMOV.F32        S0, #1.0
        VLDR            S2, [SP,#0x50+var_3C]
      }
      v31 = v25;
      v21 = (const Vec3 *)&v31;
        VADD.F32        S0, S2, S0
        VSTR            S0, [SP,#0x50+var_24]
      v32 = v27;
      v22 = v8;
    }
    else
      v14((int *)&v24, v7, (int *)v9);
      v21 = (const Vec3 *)&v24;
    result = (_DWORD *)AABB::move(v22, v21);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


_BOOL4 __fastcall DoublePlantBlock::isTop(DoublePlantBlock *this, BlockSource *a2, const BlockPos *a3)
{
  DoublePlantBlock *v3; // r4@1
  BlockState *v4; // r0@1
  unsigned __int8 v6; // [sp+7h] [bp-9h]@1

  v3 = this;
  v6 = BlockSource::getData(a2, a3);
  v4 = (BlockState *)Block::getBlockState((int)v3, 11);
  return BlockState::getBool(v4, &v6);
}


void __fastcall DoublePlantBlock::buildDescriptionId(DoublePlantBlock *this, int a2, unsigned int a3)
{
  DoublePlantBlock *v3; // r4@1
  unsigned int v4; // r5@1
  int v5; // r6@1
  char v6; // r0@1
  int *v7; // r0@4
  const void **v8; // r0@6
  const void **v9; // r0@6
  char *v10; // r0@6
  void *v11; // r0@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  int v16; // [sp+4h] [bp-34h]@4
  char *v17; // [sp+8h] [bp-30h]@6

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = byte_280D6F4;
  __dmb();
  if ( !(v6 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_280D6F4) )
  {
    sub_21E94B4((void **)&dword_280D6F8, "sunflower");
    sub_21E94B4((void **)&dword_280D6FC, "syringa");
    sub_21E94B4((void **)&dword_280D700, "grass");
    sub_21E94B4((void **)&dword_280D704, "fern");
    sub_21E94B4((void **)&dword_280D708, "rose");
    sub_21E94B4((void **)&dword_280D70C, "paeonia");
    _cxa_atexit(sub_ABB438);
    j___cxa_guard_release((unsigned int *)&byte_280D6F4);
  }
  v7 = sub_21E8AF4(&v16, (int *)(v5 + 8));
  sub_21E7408((const void **)v7, ".", 1u);
  if ( v4 > 5 )
    v4 = 0;
  v8 = sub_21E72F0((const void **)&v16, (const void **)&unk_280D6F0 + v4 + 2);
  v17 = (char *)*v8;
  *v8 = &unk_28898CC;
  v9 = sub_21E7408((const void **)&v17, ".name", 5u);
  *(_DWORD *)v3 = *v9;
  *v9 = &unk_28898CC;
  v10 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


signed int __fastcall DoublePlantBlock::getSecondPart(DoublePlantBlock *this, unsigned __int8 a2, const BlockPos *a3, BlockPos *a4)
{
  BlockPos *v4; // r4@1
  const BlockPos *v5; // r5@1
  BlockState *v6; // r0@1
  bool v7; // zf@1
  int v8; // r2@1
  int v9; // r3@1
  signed int v10; // r0@1
  signed int result; // r0@3
  unsigned __int8 v12; // [sp+7h] [bp-11h]@1

  v12 = a2;
  v4 = a4;
  v5 = a3;
  v6 = (BlockState *)Block::getBlockState((int)this, 11);
  v7 = BlockState::getBool(v6, &v12) == 0;
  v8 = *((_DWORD *)v5 + 1);
  v9 = *((_DWORD *)v5 + 2);
  v10 = 1;
  if ( !v7 )
    v10 = -1;
  *(_DWORD *)v4 = *(_DWORD *)v5;
  *((_DWORD *)v4 + 1) = v10 + v8;
  result = 1;
  *((_DWORD *)v4 + 2) = v9;
  return result;
}
