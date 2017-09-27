

_DWORD *__fastcall LogBlock::LogBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = j_Material::getMaterial(2);
  j_RotatedPillarBlock::RotatedPillarBlock((int)v3, v5, v4, v6);
  *v3 = &off_2723360;
  return v3;
}


void __fastcall LogBlock::~LogBlock(LogBlock *this)
{
  LogBlock::~LogBlock(this);
}


void __fastcall LogBlock::~LogBlock(LogBlock *this)
{
  Block *v1; // r0@1

  v1 = j_Block::~Block(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall LogBlock::getResourceCount(LogBlock *this, Random *a2, int a3, int a4)
{
  return 1;
}


int __fastcall LogBlock::getSpawnResourcesAuxValue(LogBlock *this, int a2)
{
  unsigned int v2; // r8@1
  LogBlock *v3; // r5@1
  __int64 v4; // r6@1
  BlockState *v5; // r0@1
  int v6; // r4@1
  int v7; // r5@1

  v2 = a2;
  v3 = this;
  v4 = *(_QWORD *)j_Block::getBlockState((int)this, 24);
  v5 = (BlockState *)j_Block::getBlockState((int)v3, 24);
  v6 = *(_QWORD *)v5 >> 32;
  v7 = *(_QWORD *)v5;
  j_BlockState::getMask(v5);
  return (unsigned __int8)((unsigned __int8)((v2 >> (1 - BYTE4(v4) + v4)) & (0xFu >> (4 - BYTE4(v4)))) << (v7 + 1 - v6));
}


int __fastcall LogBlock::onRemove(LogBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  Block *v6; // r6@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  j_LeafBlock::runDecay(a2, a3, (const BlockPos *)4, a4);
  return j_j_j__ZNK5Block8onRemoveER11BlockSourceRK8BlockPos_0(v6, v5, v4);
}
