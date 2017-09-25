

void __fastcall RailBlock::~RailBlock(RailBlock *this)
{
  RailBlock::~RailBlock(this);
}


void __fastcall RailBlock::~RailBlock(RailBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall RailBlock::getVariant(RailBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1
  signed int v4; // r1@1
  signed int result; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 32);
  v4 = (v2 >> (*v3 + 1 - (*v3 >> 32))) & (0xFu >> (4 - (*v3 >> 32)));
  result = 0;
  if ( v4 > 5 )
    result = 1;
  return result;
}


_DWORD *__fastcall RailBlock::RailBlock(int a1, const void **a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)BaseRailBlock::BaseRailBlock(a1, a2, a3, 0);
  *result = &off_2711C8C;
  return result;
}
