

void __fastcall StoneButtonBlock::~StoneButtonBlock(StoneButtonBlock *this)
{
  StoneButtonBlock::~StoneButtonBlock(this);
}


_DWORD *__fastcall StoneButtonBlock::StoneButtonBlock(int a1, const void **a2, char a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)ButtonBlock::ButtonBlock(a1, a2, a3, 0);
  *result = &off_27150EC;
  return result;
}


void __fastcall StoneButtonBlock::~StoneButtonBlock(StoneButtonBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}
