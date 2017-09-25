

void __fastcall HugeMushroomBlock::~HugeMushroomBlock(HugeMushroomBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall HugeMushroomBlock::getSpawnResourcesAuxValue(HugeMushroomBlock *this, unsigned __int8 a2)
{
  return 14;
}


signed int __fastcall HugeMushroomBlock::getResourceCount(HugeMushroomBlock *this, Random *a2, int a3, int a4)
{
  signed int result; // r0@1

  result = Random::_genRandInt32(a2) % 0xA - 7;
  if ( result < 0 )
    result = 0;
  return result;
}


int __fastcall HugeMushroomBlock::HugeMushroomBlock(int a1, const void **a2, char a3, int a4, int a5)
{
  int result; // r0@1

  result = Block::Block(a1, a2, a3, a4);
  *(_DWORD *)result = &off_270CE54;
  *(_DWORD *)(result + 644) = a5;
  return result;
}


void __fastcall HugeMushroomBlock::~HugeMushroomBlock(HugeMushroomBlock *this)
{
  HugeMushroomBlock::~HugeMushroomBlock(this);
}


int __fastcall HugeMushroomBlock::getResource(HugeMushroomBlock *this, Random *a2, int a3, int a4)
{
  _DWORD *v4; // r1@1

  v4 = &Block::mRedMushroom;
  if ( !*((_DWORD *)this + 161) )
    v4 = &Block::mBrownMushroom;
  return *(_BYTE *)(*v4 + 4);
}
