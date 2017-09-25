

int __fastcall FrostWalkerEnchant::getMaxCost(FrostWalkerEnchant *this, int a2)
{
  return (*(int (**)(void))(*(_DWORD *)this + 8))() + 15;
}


void __fastcall FrostWalkerEnchant::~FrostWalkerEnchant(FrostWalkerEnchant *this)
{
  FrostWalkerEnchant::~FrostWalkerEnchant(this);
}


void __fastcall FrostWalkerEnchant::~FrostWalkerEnchant(FrostWalkerEnchant *this)
{
  Enchant *v1; // r0@1

  v1 = Enchant::~Enchant(this);
  j_j_j__ZdlPv_6((void *)v1);
}


_DWORD *__fastcall FrostWalkerEnchant::FrostWalkerEnchant(int a1, EnchantUtils *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Enchant::Enchant(a1, a2, a3, a4, a5, a6, a7);
  *result = &off_27016F4;
  return result;
}


signed int __fastcall FrostWalkerEnchant::isTreasureOnly(FrostWalkerEnchant *this)
{
  return 1;
}


int __fastcall FrostWalkerEnchant::getMinCost(FrostWalkerEnchant *this, int a2)
{
  return 10 * a2;
}


signed int __fastcall FrostWalkerEnchant::getMaxLevel(FrostWalkerEnchant *this)
{
  return 2;
}
