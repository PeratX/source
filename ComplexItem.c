

void __fastcall ComplexItem::~ComplexItem(ComplexItem *this)
{
  ComplexItem::~ComplexItem(this);
}


int __fastcall ComplexItem::getUpdatePacket(int result, const ItemInstance *a2, Level *a3, Entity *a4)
{
  *(_DWORD *)result = 0;
  return result;
}


void __fastcall ComplexItem::~ComplexItem(ComplexItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


_DWORD *__fastcall ComplexItem::ComplexItem(int a1, const void **a2, __int16 a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)j_Item::Item(a1, a2, a3);
  *result = &off_2720AB0;
  return result;
}


signed int __fastcall ComplexItem::isComplex(ComplexItem *this)
{
  return 1;
}
