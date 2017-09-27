

_DWORD *__fastcall BookshelfBlock::BookshelfBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(2);
  Block::Block((int)v3, v5, v4, v6);
  *v3 = &loc_2704CC0;
  return v3;
}


void __fastcall BookshelfBlock::~BookshelfBlock(BookshelfBlock *this)
{
  BookshelfBlock::~BookshelfBlock(this);
}


void __fastcall BookshelfBlock::~BookshelfBlock(BookshelfBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall BookshelfBlock::getResourceCount(BookshelfBlock *this, Random *a2, int a3, int a4)
{
  return 3;
}
