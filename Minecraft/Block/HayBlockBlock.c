

_DWORD *__fastcall HayBlockBlock::HayBlockBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(1);
  RotatedPillarBlock::RotatedPillarBlock((int)v3, v5, v4, v6);
  *v3 = &off_270C840;
  return v3;
}


void __fastcall HayBlockBlock::~HayBlockBlock(HayBlockBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall HayBlockBlock::~HayBlockBlock(HayBlockBlock *this)
{
  HayBlockBlock::~HayBlockBlock(this);
}
