

unsigned int __fastcall PoweredRailBlock::getVariant(PoweredRailBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 31);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


void __fastcall PoweredRailBlock::~PoweredRailBlock(PoweredRailBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall PoweredRailBlock::onRedstoneUpdate(PoweredRailBlock *this, BlockSource *a2, const BlockPos *a3, int a4, bool a5)
{
  BlockSource *v5; // r5@1
  PoweredRailBlock *v6; // r7@1
  int v7; // r6@1
  BlockPos *v8; // r4@1
  Level *v9; // r0@1
  int result; // r0@1
  BlockState *v11; // r0@2
  int v12; // r6@3
  int v13; // r7@3
  unsigned int v14; // r0@3
  int v15; // r6@4
  Dimension *v16; // r0@5
  _BYTE *v17; // r0@5
  _BYTE *v18; // r6@5
  char v19; // [sp+4h] [bp-1Ch]@5
  unsigned __int8 v20; // [sp+5h] [bp-1Bh]@5
  char v21; // [sp+8h] [bp-18h]@2
  unsigned __int8 v22; // [sp+9h] [bp-17h]@3

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v9);
  if ( !result )
  {
    BlockSource::getBlockAndData((BlockSource *)&v21, v5, (int)v8);
    v11 = (BlockState *)Block::getBlockState((int)v6, 31);
    if ( v7 < 1 )
    {
      v15 = v22;
      v14 = v15 & ~BlockState::getMask(v11);
    }
    else
      v12 = v22;
      v13 = *(_QWORD *)v11 + 1 - (*(_QWORD *)v11 >> 32);
      v14 = v12 & ~BlockState::getMask(v11) | (1 << v13);
    v22 = v14;
    v16 = (Dimension *)BlockSource::getDimension(v5);
    v17 = (_BYTE *)Dimension::getCircuitSystem(v16);
    v18 = v17;
    *v17 = 1;
    v19 = v21;
    v20 = v22;
    result = BlockSource::setBlockAndData((int)v5, v8, (int)&v19, 3, 0);
    *v18 = 0;
  }
  return result;
}


void __fastcall PoweredRailBlock::~PoweredRailBlock(PoweredRailBlock *this)
{
  PoweredRailBlock::~PoweredRailBlock(this);
}


_DWORD *__fastcall PoweredRailBlock::PoweredRailBlock(int a1, const void **a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)BaseRailBlock::BaseRailBlock(a1, a2, a3, 1);
  *result = &off_2711274;
  return result;
}
