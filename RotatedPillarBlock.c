

int __fastcall RotatedPillarBlock::getPlacementDataValue(RotatedPillarBlock *this, Entity *a2, const BlockPos *a3, int a4, const Vec3 *a5, int a6)
{
  int v6; // r5@2
  BlockState *v7; // r0@4
  int v8; // r5@4

  if ( (unsigned int)(a4 - 2) > 3 )
    v6 = 0;
  else
    v6 = dword_2610A9C[a4 - 2];
  v7 = (BlockState *)Block::getBlockState((int)this, 12);
  v8 = v6 << (*(_QWORD *)v7 + 1 - (unsigned int)(*(_QWORD *)v7 >> 32));
  return (unsigned __int8)(a6 & ~(unsigned __int8)BlockState::getMask(v7)) | (unsigned __int8)v8;
}


int __fastcall RotatedPillarBlock::RotatedPillarBlock(int a1, const void **a2, char a3, int a4)
{
  int result; // r0@1
  __int64 v5; // r1@1

  result = Block::Block(a1, a2, a3, a4);
  *(_DWORD *)result = &off_2712CD0;
  v5 = *(_QWORD *)(result + 24);
  LODWORD(v5) = v5 | 0x100000;
  *(_QWORD *)(result + 24) = v5;
  return result;
}


void __fastcall RotatedPillarBlock::~RotatedPillarBlock(RotatedPillarBlock *this)
{
  RotatedPillarBlock::~RotatedPillarBlock(this);
}


void __fastcall RotatedPillarBlock::~RotatedPillarBlock(RotatedPillarBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


ItemInstance *__fastcall RotatedPillarBlock::asItemInstance(RotatedPillarBlock *this, BlockSource *a2, const BlockPos *a3, int a4, unsigned __int8 a5)
{
  BlockSource *v5; // r5@1
  ItemInstance *v6; // r8@1
  __int64 v7; // kr00_8@1
  BlockState *v8; // r0@1
  int v9; // r4@1
  int v10; // r6@1

  v5 = a2;
  v6 = this;
  v7 = *(_QWORD *)Block::getBlockState((int)a2, 24);
  v8 = (BlockState *)Block::getBlockState((int)v5, 24);
  v10 = *(_QWORD *)v8 >> 32;
  v9 = *(_QWORD *)v8;
  BlockState::getMask(v8);
  return ItemInstance::ItemInstance(
           v6,
           *((_BYTE *)v5 + 4),
           1,
           (unsigned __int8)(((a5 >> (1 - BYTE4(v7) + v7)) & (0xFu >> (4 - BYTE4(v7)))) << (v9 + 1 - v10)));
}


unsigned int __fastcall RotatedPillarBlock::getType(RotatedPillarBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = (unsigned __int8)this;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mQuartzBlock, 24);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


unsigned int __fastcall RotatedPillarBlock::getVariant(RotatedPillarBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mQuartzBlock, 24);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


signed int __fastcall RotatedPillarBlock::getMappedFace(RotatedPillarBlock *this, signed __int8 a2, int a3)
{
  signed __int8 v3; // r4@1
  unsigned __int8 v4; // r5@1
  unsigned __int64 *v5; // r0@1
  unsigned int v6; // r0@1

  v3 = a2;
  v4 = a3;
  v5 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  v6 = (0xFu >> (4 - (*v5 >> 32))) & (v4 >> (*v5 + 1 - (*v5 >> 32)));
  if ( v6 == 2 )
  {
    if ( (v3 & 0xFE) == 2 )
      return 1;
  }
  else if ( v6 == 1 )
    if ( (v3 & 0xFE) == 4 )
  else if ( !v6 && (unsigned __int8)v3 < 2u )
    return 1;
  return 5;
}
