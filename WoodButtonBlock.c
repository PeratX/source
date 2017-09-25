

_DWORD *__fastcall WoodButtonBlock::WoodButtonBlock(int a1, const void **a2, char a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)ButtonBlock::ButtonBlock(a1, a2, a3, 1);
  *result = &off_2717920;
  return result;
}


void __fastcall WoodButtonBlock::~WoodButtonBlock(WoodButtonBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall WoodButtonBlock::~WoodButtonBlock(WoodButtonBlock *this)
{
  WoodButtonBlock::~WoodButtonBlock(this);
}
