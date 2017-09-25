

_DWORD *__fastcall GravelBlock::GravelBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(14);
  HeavyBlock::HeavyBlock((int)v3, v5, v4, v6);
  *v3 = &off_270C62C;
  return v3;
}


signed int __fastcall GravelBlock::canBeOriginalSurface(GravelBlock *this)
{
  return 1;
}


void __fastcall GravelBlock::~GravelBlock(GravelBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall GravelBlock::getResource(GravelBlock *this, Random *a2, int a3, int a4)
{
  GravelBlock *v4; // r4@1
  int result; // r0@5

  v4 = this;
  if ( a4 >= 3 )
    a4 = 3;
  if ( -3 * a4 != -10 && Random::_genRandInt32(a2) % (-3 * a4 + 10) )
    result = *((_BYTE *)v4 + 4);
  else
    result = *(_WORD *)(Item::mFlint + 18);
  return result;
}


void __fastcall GravelBlock::~GravelBlock(GravelBlock *this)
{
  GravelBlock::~GravelBlock(this);
}


int __fastcall GravelBlock::getDustColor(int result, unsigned __int8 a2)
{
  *(_DWORD *)result = 1056997505;
  *(_DWORD *)(result + 4) = 1056504058;
  *(_DWORD *)(result + 8) = 1056372472;
  *(_DWORD *)(result + 12) = 1065353216;
  return result;
}
