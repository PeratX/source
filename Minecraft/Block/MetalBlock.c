

void __fastcall MetalBlock::~MetalBlock(MetalBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


_DWORD *__fastcall MetalBlock::MetalBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(4);
  Block::Block((int)v3, v5, v4, v6);
  *v3 = &off_270E858;
  return v3;
}


void __fastcall MetalBlock::~MetalBlock(MetalBlock *this)
{
  MetalBlock::~MetalBlock(this);
}
