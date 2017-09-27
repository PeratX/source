

int __fastcall SwimEnchant::getMinCost(SwimEnchant *this, int a2)
{
  int v2; // r0@1
  int result; // r0@2

  v2 = *((_DWORD *)this + 1);
  if ( (unsigned int)(v2 - 6) >= 2 )
  {
    if ( v2 == 8 )
      result = 1;
    else
      result = -1;
  }
  else
    result = 10 * a2;
  return result;
}


signed int __fastcall SwimEnchant::getMaxLevel(SwimEnchant *this)
{
  unsigned int v1; // r0@1
  signed int result; // r0@2

  v1 = *((_DWORD *)this + 1) - 6;
  if ( v1 <= 2 )
    result = dword_262E660[v1];
  else
    result = -1;
  return result;
}


_DWORD *__fastcall SwimEnchant::SwimEnchant(int a1, EnchantUtils *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Enchant::Enchant(a1, a2, a3, a4, a5, a6, a7);
  *result = &off_2701820;
  return result;
}


int __fastcall SwimEnchant::getMaxCost(SwimEnchant *this, int a2)
{
  unsigned int v2; // r2@1
  signed int v3; // r4@2

  v2 = *((_DWORD *)this + 1) - 6;
  if ( v2 > 2 )
    v3 = -1;
  else
    v3 = dword_262E654[v2];
  return (*(int (**)(void))(*(_DWORD *)this + 8))() * v3;
}


void __fastcall SwimEnchant::~SwimEnchant(SwimEnchant *this)
{
  SwimEnchant::~SwimEnchant(this);
}


void __fastcall SwimEnchant::~SwimEnchant(SwimEnchant *this)
{
  Enchant *v1; // r0@1

  v1 = Enchant::~Enchant(this);
  j_j_j__ZdlPv_6((void *)v1);
}
