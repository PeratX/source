

Block *__fastcall ActivatorRailBlock::ActivatorRailBlock(int a1, const void **a2, int a3)
{
  Block *v3; // r4@1

  v3 = (Block *)a1;
  j_BaseRailBlock::BaseRailBlock(a1, a2, a3, 1);
  *(_DWORD *)v3 = &off_2721C64;
  j_Block::setTicking(v3, 0);
  return v3;
}


unsigned int __fastcall ActivatorRailBlock::getVariant(ActivatorRailBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)j_Block::getBlockState(Block::mActivatorRail, 31);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


void __fastcall ActivatorRailBlock::~ActivatorRailBlock(ActivatorRailBlock *this)
{
  Block *v1; // r0@1

  v1 = j_Block::~Block(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall ActivatorRailBlock::onRedstoneUpdate(ActivatorRailBlock *this, BlockSource *a2, const BlockPos *a3, int a4, bool a5)
{
  BlockSource *v5; // r5@1
  int v6; // r10@1
  BlockPos *v7; // r9@1
  Level *v8; // r0@1
  int result; // r0@1
  BlockState *v10; // r0@2
  BlockState *v11; // r7@2
  __int64 v12; // r0@2
  int v13; // r4@2
  int v14; // r0@2
  bool v15; // zf@2
  signed int v16; // r1@2
  signed int v17; // r6@4
  unsigned int v18; // r0@4
  int v19; // r4@4
  int v20; // r6@5
  unsigned int v21; // r0@5
  char v22; // [sp+8h] [bp-28h]@6
  char v23; // [sp+9h] [bp-27h]@6
  char v24; // [sp+Ch] [bp-24h]@2
  unsigned __int8 v25; // [sp+Dh] [bp-23h]@2

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)j_BlockSource::getLevel(a2);
  result = j_Level::isClientSide(v8);
  if ( !result )
  {
    j_BlockSource::getBlockAndData((BlockSource *)&v24, v5, (int)v7);
    v10 = (BlockState *)j_Block::getBlockState(Block::mActivatorRail, 31);
    v11 = v10;
    v12 = *(_QWORD *)v10;
    v13 = v25;
    v14 = v12 + 1 - HIDWORD(v12);
    v15 = (((unsigned int)v25 >> v14) & (0xFu >> (4 - BYTE4(v12)))) == 0;
    v16 = 0;
    if ( v15 )
      v16 = 1;
    v17 = v16 << v14;
    v18 = v13 & ~j_BlockState::getMask(v11);
    v19 = v17 | v18;
    v25 = v17 | v18;
    if ( v6 >= 1 )
    {
      v20 = *(_QWORD *)v11 + 1 - (*(_QWORD *)v11 >> 32);
      v21 = (j_BlockState::getMask(v11) ^ 0xFF) & v19;
      v19 = v21 | (1 << v20);
      v25 = v21 | (1 << v20);
    }
    v22 = v24;
    v23 = v19;
    result = j_BlockSource::setBlockAndData((int)v5, v7, (int)&v22, 3, 0);
  }
  return result;
}


void __fastcall ActivatorRailBlock::~ActivatorRailBlock(ActivatorRailBlock *this)
{
  ActivatorRailBlock::~ActivatorRailBlock(this);
}
