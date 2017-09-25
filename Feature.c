

int __fastcall Feature::setTransaction(int result, WorldChangeTransaction *a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


int __fastcall Feature::_getBlockID(Feature *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  Feature *v4; // r4@1
  WorldChangeTransaction *v5; // r0@1
  const BlockPos *v6; // r5@1
  BlockSource *v7; // r6@1
  FullBlock *v8; // r0@2
  int v9; // r0@3
  int result; // r0@5

  v4 = this;
  v5 = (WorldChangeTransaction *)*((_DWORD *)a2 + 2);
  v6 = a4;
  v7 = a3;
  if ( v5 && (v8 = (FullBlock *)WorldChangeTransaction::getBlock(v5, a4)) != 0 )
    v9 = FullBlock::getBlock(v8);
  else
    v9 = BlockSource::getBlock(v7, v6);
  result = *(_BYTE *)(v9 + 4);
  *(_BYTE *)v4 = result;
  return result;
}


int __fastcall Feature::_placeBlock(Feature *this, BlockSource *a2, const BlockPos *a3, const FullBlock *a4)
{
  int result; // r0@2
  char v5; // [sp+4h] [bp-Ch]@3
  char v6; // [sp+5h] [bp-Bh]@3

  if ( *((_DWORD *)this + 2) )
  {
    WorldChangeTransaction::setBlock(*((WorldChangeTransaction **)this + 2), a3, a4, 3);
    result = 1;
  }
  else
    v5 = *(_BYTE *)a4;
    v6 = *((_BYTE *)a4 + 1);
    result = BlockSource::setBlockAndData((int)a2, a3, (int)&v5, 3, *((_DWORD *)this + 1));
  return result;
}


int __fastcall Feature::_getBlock(Feature *this, BlockSource *a2, const BlockPos *a3)
{
  WorldChangeTransaction *v3; // r0@1
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  FullBlock *v6; // r0@2
  int result; // r0@3

  v3 = (WorldChangeTransaction *)*((_DWORD *)this + 2);
  v4 = a3;
  v5 = a2;
  if ( v3 && (v6 = (FullBlock *)WorldChangeTransaction::getBlock(v3, a3)) != 0 )
    result = FullBlock::getBlock(v6);
  else
    result = BlockSource::getBlock(v5, v4);
  return result;
}


int __fastcall Feature::_setManuallyPlaced(int result, Entity *a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}


signed int __fastcall Feature::_isEmptyBlock(Feature *this, BlockSource *a2, const BlockPos *a3)
{
  WorldChangeTransaction *v3; // r0@1
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  FullBlock *v6; // r0@2
  int v7; // r0@3
  int v8; // r2@5
  signed int result; // r0@5

  v3 = (WorldChangeTransaction *)*((_DWORD *)this + 2);
  v4 = a3;
  v5 = a2;
  if ( v3 && (v6 = (FullBlock *)WorldChangeTransaction::getBlock(v3, a3)) != 0 )
    v7 = FullBlock::getBlock(v6);
  else
    v7 = BlockSource::getBlock(v5, v4);
  v8 = *(_BYTE *)(v7 + 4);
  result = 0;
  if ( v8 == *(_BYTE *)(Block::mAir + 4) )
    result = 1;
  return result;
}


int __fastcall Feature::_getMaterial(Feature *this, BlockSource *a2, const BlockPos *a3)
{
  WorldChangeTransaction *v3; // r0@1
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  FullBlock *v6; // r0@2
  Block *v7; // r0@3
  int result; // r0@3
  Block *v9; // r0@4

  v3 = (WorldChangeTransaction *)*((_DWORD *)this + 2);
  v4 = a3;
  v5 = a2;
  if ( v3 && (v6 = (FullBlock *)WorldChangeTransaction::getBlock(v3, a3)) != 0 )
  {
    v7 = (Block *)FullBlock::getBlock(v6);
    result = j_j_j__ZNK5Block11getMaterialEv_1(v7);
  }
  else
    v9 = (Block *)BlockSource::getBlock(v5, v4);
    result = j_j_j__ZNK5Block11getMaterialEv_1(v9);
  return result;
}


_BOOL4 __fastcall Feature::_getManuallyPlaced(Feature *this)
{
  return *((_DWORD *)this + 1) != 0;
}


unsigned int __fastcall Feature::_getFullBlock(Feature *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  Feature *v4; // r4@1
  WorldChangeTransaction *v5; // r0@1
  const BlockPos *v6; // r5@1
  const BlockPos *v7; // r6@1
  int v8; // r0@2
  unsigned int result; // r0@3

  v4 = this;
  v5 = (WorldChangeTransaction *)*((_DWORD *)a2 + 2);
  v6 = a4;
  v7 = a3;
  if ( v5 && (v8 = WorldChangeTransaction::getBlock(v5, a4)) != 0 )
  {
    *(_BYTE *)v4 = *(_BYTE *)v8;
    result = *(_BYTE *)(v8 + 1);
    *((_BYTE *)v4 + 1) = result;
  }
  else
    result = BlockSource::getBlockAndData(v4, v7, (int)v6);
  return result;
}


int __fastcall Feature::_setBlockAndData(Feature *this, BlockSource *a2, const BlockPos *a3, const FullBlock *a4)
{
  int result; // r0@2
  char v5; // [sp+4h] [bp-Ch]@3
  char v6; // [sp+5h] [bp-Bh]@3

  if ( *((_DWORD *)this + 2) )
  {
    WorldChangeTransaction::setBlock(*((WorldChangeTransaction **)this + 2), a3, a4, 3);
    result = 1;
  }
  else
    v5 = *(_BYTE *)a4;
    v6 = *((_BYTE *)a4 + 1);
    result = BlockSource::setBlockAndData((int)a2, a3, (int)&v5, 3, *((_DWORD *)this + 1));
  return result;
}


int __fastcall Feature::Feature(int result, int a2)
{
  *(_DWORD *)result = &off_2718A8C;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = 0;
  return result;
}
