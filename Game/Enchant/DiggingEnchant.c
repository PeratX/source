

void __fastcall DiggingEnchant::~DiggingEnchant(DiggingEnchant *this)
{
  Enchant *v1; // r0@1

  v1 = j_Enchant::~Enchant(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall DiggingEnchant::~DiggingEnchant(DiggingEnchant *this)
{
  DiggingEnchant::~DiggingEnchant(this);
}


_DWORD *__fastcall DiggingEnchant::DiggingEnchant(int a1, EnchantUtils *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)j_Enchant::Enchant(a1, a2, a3, a4, a5, a6, a7);
  *result = &off_2720E6C;
  return result;
}


int __fastcall DiggingEnchant::getMinCost(DiggingEnchant *this, int a2)
{
  unsigned int v2; // r0@1
  signed int v3; // r2@2
  signed int v4; // r0@2

  v2 = *((_DWORD *)this + 1) - 15;
  if ( v2 > 2 )
  {
    v4 = -1;
    v3 = -1;
  }
  else
    v3 = dword_262EB28[v2];
    v4 = dword_262EB1C[v2];
  return v4 + v3 * (a2 - 1);
}


int __fastcall DiggingEnchant::getMaxCost(DiggingEnchant *this, int a2)
{
  return j_Enchant::getMinCost(this, a2) + 50;
}


signed int __fastcall DiggingEnchant::getMaxLevel(DiggingEnchant *this)
{
  unsigned int v1; // r0@1
  signed int result; // r0@2

  v1 = *((_DWORD *)this + 1) - 15;
  if ( v1 <= 2 )
    result = dword_262EB34[v1];
  else
    result = -1;
  return result;
}
