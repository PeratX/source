

int __fastcall GlassBlock::getResourceCount(GlassBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


void __fastcall GlassBlock::~GlassBlock(GlassBlock *this)
{
  GlassBlock::~GlassBlock(this);
}


int __fastcall GlassBlock::GlassBlock(int a1, const void **a2, char a3, int a4)
{
  int v4; // r4@1

  v4 = a1;
  Block::Block(a1, a2, a3, a4);
  *(_DWORD *)v4 = &off_270BE2C;
  *(_DWORD *)(v4 + 20) = 1;
  Block::setSolid((Block *)v4, 0);
  Block::setPushesOutItems((Block *)v4, 1);
  return v4;
}


void __fastcall GlassBlock::~GlassBlock(GlassBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}
