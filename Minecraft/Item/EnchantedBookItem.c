

signed int __fastcall EnchantedBookItem::getEnchantSlot(EnchantedBookItem *this)
{
  return 0x7FFF;
}


void __fastcall EnchantedBookItem::~EnchantedBookItem(EnchantedBookItem *this)
{
  EnchantedBookItem::~EnchantedBookItem(this);
}


int __fastcall EnchantedBookItem::EnchantedBookItem(int a1, const void **a2, __int16 a3)
{
  int result; // r0@1

  result = j_Item::Item(a1, a2, a3);
  *(_DWORD *)result = &off_2720D14;
  *(_BYTE *)(result + 4) = 1;
  return result;
}


signed int __fastcall EnchantedBookItem::getEnchantValue(EnchantedBookItem *this)
{
  return 1;
}


void __fastcall EnchantedBookItem::~EnchantedBookItem(EnchantedBookItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall EnchantedBookItem::isGlint(EnchantedBookItem *this, const ItemInstance *a2)
{
  return 1;
}
