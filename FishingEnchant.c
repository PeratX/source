

void __fastcall FishingEnchant::~FishingEnchant(FishingEnchant *this)
{
  Enchant *v1; // r0@1

  v1 = Enchant::~Enchant(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall FishingEnchant::getMaxCost(FishingEnchant *this, int a2)
{
  return Enchant::getMinCost(this, a2) + 50;
}


signed int __fastcall FishingEnchant::getMaxLevel(FishingEnchant *this)
{
  return 3;
}


_DWORD *__fastcall FishingEnchant::FishingEnchant(int a1, EnchantUtils *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Enchant::Enchant(a1, a2, a3, a4, a5, a6, a7);
  *result = &off_27016B8;
  return result;
}


int __fastcall FishingEnchant::getMinCost(FishingEnchant *this, int a2)
{
  return 9 * a2 + 6;
}


void __fastcall FishingEnchant::~FishingEnchant(FishingEnchant *this)
{
  FishingEnchant::~FishingEnchant(this);
}
