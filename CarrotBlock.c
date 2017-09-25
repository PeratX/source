

void __fastcall CarrotBlock::~CarrotBlock(CarrotBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall CarrotBlock::CarrotBlock(int a1, const void **a2, int a3)
{
  int result; // r0@1

  result = CropBlock::CropBlock(a1, a2, a3);
  *(_DWORD *)result = &loc_27054C0;
  *(_DWORD *)(result + 24) = 0x2000000;
  *(_DWORD *)(result + 28) = 0;
  return result;
}


int __fastcall CarrotBlock::getBaseSeed(CarrotBlock *this)
{
  return Item::mCarrot;
}


signed int __fastcall CarrotBlock::getVariant(CarrotBlock *this, int a2)
{
  int v2; // r5@1
  unsigned __int64 *v3; // r0@1
  signed int result; // r0@2

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 17);
  if ( (signed int)((0xFu >> (4 - (*v3 >> 32))) & ((unsigned __int8)v2 >> (*v3 + 1 - (*v3 >> 32)))) < BushBlock::MAX_GROWTH[0] )
  {
    result = v2 >> 1;
    if ( v2 == 6 )
      result = 2;
  }
  else
    result = 3;
  return result;
}


unsigned int __fastcall CarrotBlock::getResourceCount(CarrotBlock *this, Random *a2, int a3, int a4)
{
  unsigned int result; // r0@2

  if ( a4 == -1 )
    result = 1;
  else
    result = Random::_genRandInt32(a2) % (a4 + 1) + 1;
  return result;
}


void __fastcall CarrotBlock::~CarrotBlock(CarrotBlock *this)
{
  CarrotBlock::~CarrotBlock(this);
}
