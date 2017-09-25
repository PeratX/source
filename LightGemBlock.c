

void __fastcall LightGemBlock::~LightGemBlock(LightGemBlock *this)
{
  LightGemBlock::~LightGemBlock(this);
}


int __fastcall LightGemBlock::LightGemBlock(int a1, const void **a2, char a3, int a4)
{
  int result; // r0@1
  int v5; // lr@1
  __int64 v6; // r1@1

  result = Block::Block(a1, a2, a3, a4);
  v5 = result + 60;
  *(_DWORD *)result = &off_270DC58;
  v6 = *(_QWORD *)(result + 24);
  *(_DWORD *)(result + 28) = HIDWORD(v6);
  *(_DWORD *)(result + 24) = v6 | 0xC00000;
  *(_DWORD *)v5 = 1065353216;
  *(_DWORD *)(v5 + 4) = 1060945085;
  *(_DWORD *)(v5 + 8) = 1052556477;
  *(_DWORD *)(v5 + 12) = 0;
  return result;
}


void __fastcall LightGemBlock::~LightGemBlock(LightGemBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall LightGemBlock::getResourceCount(LightGemBlock *this, Random *a2, int a3, int a4)
{
  signed int result; // r0@2

  if ( a4 == -3 )
    result = 2;
  else
    result = Random::_genRandInt32(a2) % (a4 + 3) + 2;
  if ( result >= 4 )
    result = 4;
  return result;
}
