

void __fastcall LootEnchant::~LootEnchant(LootEnchant *this)
{
  LootEnchant::~LootEnchant(this);
}


int __fastcall LootEnchant::getMaxCost(LootEnchant *this, int a2)
{
  return Enchant::getMinCost(this, a2) + 50;
}


void __fastcall LootEnchant::~LootEnchant(LootEnchant *this)
{
  Enchant *v1; // r0@1

  v1 = Enchant::~Enchant(this);
  j_j_j__ZdlPv_6((void *)v1);
}


_DWORD *__fastcall LootEnchant::LootEnchant(int a1, EnchantUtils *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Enchant::Enchant(a1, a2, a3, a4, a5, a6, a7);
  *result = &off_2701730;
  return result;
}


int __fastcall LootEnchant::getMinCost(LootEnchant *this, int a2)
{
  return 9 * a2 + 6;
}


signed int __fastcall LootEnchant::getMaxLevel(LootEnchant *this)
{
  return 3;
}
