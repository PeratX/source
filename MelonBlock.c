

void __fastcall MelonBlock::~MelonBlock(MelonBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall MelonBlock::~MelonBlock(MelonBlock *this)
{
  MelonBlock::~MelonBlock(this);
}


signed int __fastcall MelonBlock::getResourceCount(MelonBlock *this, Random *a2, int a3, int a4)
{
  signed int result; // r0@2

  if ( a4 == -5 )
    result = 3;
  else
    result = Random::_genRandInt32(a2) % (a4 + 5) + 3;
  if ( result >= 9 )
    result = 9;
  return result;
}


int __fastcall MelonBlock::MelonBlock(int a1, const void **a2, char a3)
{
  int v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(24);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270E658;
  *(_DWORD *)(v3 + 24) = 35651584;
  *(_DWORD *)(v3 + 28) = 0;
  return v3;
}
