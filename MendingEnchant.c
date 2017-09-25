

void __fastcall MendingEnchant::~MendingEnchant(MendingEnchant *this)
{
  MendingEnchant::~MendingEnchant(this);
}


_DWORD *__fastcall MendingEnchant::MendingEnchant(int a1, EnchantUtils *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Enchant::Enchant(a1, a2, a3, a4, a5, a6, a7);
  *result = &off_27017A8;
  return result;
}


int __fastcall MendingEnchant::getMinCost(MendingEnchant *this, int a2)
{
  return 25 * a2;
}


int __fastcall MendingEnchant::getMaxCost(MendingEnchant *this, int a2)
{
  return (*(int (**)(void))(*(_DWORD *)this + 8))() + 50;
}


signed int __fastcall MendingEnchant::getMaxLevel(MendingEnchant *this)
{
  return 1;
}


void __fastcall MendingEnchant::~MendingEnchant(MendingEnchant *this)
{
  Enchant *v1; // r0@1

  v1 = Enchant::~Enchant(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall MendingEnchant::isTreasureOnly(MendingEnchant *this)
{
  return 1;
}
