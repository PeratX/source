

int __fastcall CarrotOnAStickItem::CarrotOnAStickItem(int a1, const void **a2, __int16 a3)
{
  int v3; // r4@1

  v3 = a1;
  j_Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_2720878;
  *(_BYTE *)(v3 + 113) = 1;
  j_Item::setMaxStackSize((Item *)v3, 1u);
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 28))(v3, 26);
  return v3;
}


void __fastcall CarrotOnAStickItem::~CarrotOnAStickItem(CarrotOnAStickItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall CarrotOnAStickItem::~CarrotOnAStickItem(CarrotOnAStickItem *this)
{
  CarrotOnAStickItem::~CarrotOnAStickItem(this);
}


signed int __fastcall CarrotOnAStickItem::requiresInteract(CarrotOnAStickItem *this)
{
  return 1;
}


signed int __fastcall CarrotOnAStickItem::getEnchantSlot(CarrotOnAStickItem *this)
{
  return 0x2000;
}


signed int __fastcall CarrotOnAStickItem::isHandEquipped(CarrotOnAStickItem *this)
{
  return 1;
}


signed int __fastcall CarrotOnAStickItem::getEnchantValue(CarrotOnAStickItem *this)
{
  return 1;
}
