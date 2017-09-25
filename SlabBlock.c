

signed int __fastcall SlabBlock::getResourceCount(SlabBlock *this, Random *a2, int a3, int a4)
{
  int v4; // r1@1
  signed int result; // r0@1

  v4 = *((_BYTE *)this + 648);
  result = 2;
  if ( !v4 )
    result = 1;
  return result;
}


int __fastcall SlabBlock::checkIsPathable(SlabBlock *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  Entity *v4; // r6@1
  Block *v5; // r7@1
  const BlockPos *v6; // r4@1
  const BlockPos *v7; // r8@1
  const BlockPos *v8; // r0@1
  int v9; // r2@1
  bool v10; // zf@1
  unsigned __int8 v11; // r5@5
  BlockState *v12; // r0@5
  int result; // r0@6
  unsigned __int8 v14; // [sp+4h] [bp-1Ch]@1
  unsigned __int8 v15; // [sp+5h] [bp-1Bh]@5
  unsigned __int8 v16; // [sp+7h] [bp-19h]@5

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (const BlockPos *)Entity::getRegion(a2);
  BlockSource::getBlockAndData((BlockSource *)&v14, v8, (int)v6);
  v9 = *(_BYTE *)(Block::mWoodenSlab + 4);
  v10 = v9 == v14;
  if ( v9 != v14 )
    v10 = *(_BYTE *)(Block::mStoneSlab + 4) == v14;
  if ( (v10 || *(_BYTE *)(Block::mStoneSlab2 + 4) == v14)
    && (v11 = v15,
        v12 = (BlockState *)Block::getBlockState(Block::mStoneSlab, 37),
        v16 = v11,
        BlockState::getBool(v12, &v16) != 1) )
  {
    result = 1;
  }
  else
    result = Block::checkIsPathable(v5, v4, v7, v6);
  return result;
}


AABB *__fastcall SlabBlock::getVisualShape(SlabBlock *this, unsigned __int8 a2, AABB *a3, bool a4)
{
  AABB *v4; // r4@1
  unsigned __int8 v5; // r5@1
  BlockState *v6; // r0@3
  signed int v7; // r2@4
  __int64 v8; // r0@4
  signed __int64 v10; // [sp+0h] [bp-20h]@2
  float v11; // [sp+8h] [bp-18h]@4
  unsigned __int8 v12; // [sp+Fh] [bp-11h]@3

  v4 = a3;
  v5 = a2;
  if ( *((_BYTE *)this + 648) )
  {
    v10 = 4575657222473777152LL;
LABEL_6:
    v11 = 1.0;
    v8 = (unsigned int)v4;
    v7 = 0;
    goto LABEL_7;
  }
  v6 = (BlockState *)Block::getBlockState(Block::mStoneSlab, 37);
  v12 = v5;
  if ( BlockState::getBool(v6, &v12) != 1 )
    v10 = 4539628425454813184LL;
    goto LABEL_6;
  v10 = 4575657222473777152LL;
  v7 = 1056964608;
  v11 = 1.0;
  v8 = (unsigned int)v4;
LABEL_7:
  AABB::set(v8, (unsigned int)v7, *(float *)&v10, *((float *)&v10 + 1), v11);
  return v4;
}


unsigned int __fastcall SlabBlock::getMobToSpawn(SlabBlock *this, BlockSource *a2, const BlockPos *a3)
{
  Block *v3; // r6@1
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  int v6; // r2@1
  bool v7; // zf@1
  unsigned __int8 v8; // r7@5
  BlockState *v9; // r0@5
  unsigned int result; // r0@6
  unsigned __int8 v11; // [sp+0h] [bp-18h]@1
  unsigned __int8 v12; // [sp+1h] [bp-17h]@5
  unsigned __int8 v13; // [sp+3h] [bp-15h]@5

  v3 = this;
  v4 = a3;
  v5 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v11, a2, (int)a3);
  v6 = *(_BYTE *)(Block::mWoodenSlab + 4);
  v7 = v6 == v11;
  if ( v6 != v11 )
    v7 = *(_BYTE *)(Block::mStoneSlab + 4) == v11;
  if ( (v7 || *(_BYTE *)(Block::mStoneSlab2 + 4) == v11)
    && (v8 = v12,
        v9 = (BlockState *)Block::getBlockState(Block::mStoneSlab, 37),
        v13 = v8,
        BlockState::getBool(v9, &v13) == 1) )
  {
    result = Block::getMobToSpawn(v3, v5, v4);
  }
  else
    result = 0;
  return result;
}


signed int __fastcall SlabBlock::getRedstoneProperty(SlabBlock *this, BlockSource *a2, const BlockPos *a3)
{
  unsigned __int8 v3; // r4@1
  BlockState *v4; // r0@1
  signed int result; // r0@1
  unsigned __int8 v6; // [sp+7h] [bp-9h]@1

  v3 = BlockSource::getData(a2, a3);
  v4 = (BlockState *)Block::getBlockState(Block::mStoneSlab, 37);
  v6 = v3;
  result = BlockState::getBool(v4, &v6);
  if ( result )
    result = 0x800000;
  return result;
}


int __fastcall SlabBlock::getPlacementDataValue(SlabBlock *this, Entity *a2, const BlockPos *a3, int a4, const Vec3 *a5, int a6)
{
  int v6; // r4@1
  BlockState *v12; // r0@5
  signed int v13; // r5@5

  v6 = a6;
  if ( !*((_BYTE *)this + 648) )
  {
    if ( !a4 )
      goto LABEL_9;
    if ( a4 != 1 )
    {
      __asm { VMOV.F32        S0, #0.5 }
      _R1 = a5;
      __asm
      {
        VLDR            S2, [R1,#4]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_9:
        v12 = (BlockState *)Block::getBlockState((int)this, 37);
        v13 = 1 << (*(_QWORD *)v12 + 1 - (unsigned int)(*(_QWORD *)v12 >> 32));
        v6 = (unsigned __int8)(a6 & ~(unsigned __int8)BlockState::getMask(v12) | v13);
    }
  }
  return v6;
}


int __fastcall SlabBlock::SlabBlock(int a1, const void **a2, char a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r4@1

  v5 = a4;
  v6 = a1;
  Block::Block(a1, a2, a3, a5);
  *(_DWORD *)v6 = &off_2713CE8;
  *(_BYTE *)(v6 + 648) = v5;
  Block::setSolid((Block *)v6, v5);
  Block::setPushesOutItems((Block *)v6, 1);
  if ( !*(_BYTE *)(v6 + 648) )
  {
    *(_DWORD *)(v6 + 24) = 2;
    *(_DWORD *)(v6 + 28) = 0;
  }
  return v6;
}


_BOOL4 __fastcall SlabBlock::isObstructingChests(SlabBlock *this, BlockSource *a2, const BlockPos *a3)
{
  unsigned __int8 v3; // r4@1
  BlockState *v4; // r0@1
  unsigned __int8 v6; // [sp+7h] [bp-9h]@1

  v3 = BlockSource::getData(a2, a3);
  v4 = (BlockState *)Block::getBlockState(Block::mStoneSlab, 37);
  v6 = v3;
  return !BlockState::getBool(v4, &v6);
}


int __fastcall SlabBlock::canBeSilkTouched(SlabBlock *this)
{
  return 0;
}


_BOOL4 __fastcall SlabBlock::isBottomSlab(SlabBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  BlockState *v3; // r0@1
  unsigned __int8 v5; // [sp+7h] [bp-9h]@1

  v2 = (unsigned __int8)this;
  v3 = (BlockState *)Block::getBlockState(Block::mStoneSlab, 37);
  v5 = v2;
  return !BlockState::getBool(v3, &v5);
}


_BOOL4 __fastcall SlabBlock::isBottomSlab(SlabBlock *this, BlockSource *a2, const BlockPos *a3)
{
  unsigned __int8 v3; // r4@1
  BlockState *v4; // r0@1
  unsigned __int8 v6; // [sp+7h] [bp-9h]@1

  v3 = BlockSource::getData(a2, a3);
  v4 = (BlockState *)Block::getBlockState(Block::mStoneSlab, 37);
  v6 = v3;
  return !BlockState::getBool(v4, &v6);
}


void __fastcall SlabBlock::~SlabBlock(SlabBlock *this)
{
  SlabBlock::~SlabBlock(this);
}


signed int __fastcall SlabBlock::isSlabBlock(SlabBlock *this)
{
  return 1;
}


void __fastcall SlabBlock::~SlabBlock(SlabBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}
