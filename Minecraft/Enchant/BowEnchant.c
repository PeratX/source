

void __fastcall BowEnchant::~BowEnchant(BowEnchant *this)
{
  BowEnchant::~BowEnchant(this);
}


_DWORD *__fastcall BowEnchant::BowEnchant(int a1, EnchantUtils *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)j_Enchant::Enchant(a1, a2, a3, a4, a5, a6, a7);
  *result = &off_2720E30;
  return result;
}


signed int __fastcall BowEnchant::getMaxLevel(BowEnchant *this)
{
  unsigned int v1; // r0@1
  signed int result; // r0@2

  v1 = *((_DWORD *)this + 1) - 19;
  if ( v1 <= 3 )
    result = dword_2610AFC[v1];
  else
    result = -1;
  return result;
}


int __fastcall BowEnchant::getMinCost(BowEnchant *this, int a2)
{
  unsigned int v2; // r0@1
  signed int v3; // r2@2
  signed int v4; // r0@2

  v2 = *((_DWORD *)this + 1) - 19;
  if ( v2 > 3 )
  {
    v4 = -1;
    v3 = -1;
  }
  else
    v3 = dword_2610ADC[v2];
    v4 = dword_2610ACC[v2];
  return v4 + v3 * (a2 - 1);
}


int __fastcall BowEnchant::getMaxCost(BowEnchant *this, int a2)
{
  unsigned int v2; // r2@1
  signed int v3; // r4@2

  v2 = *((_DWORD *)this + 1) - 19;
  if ( v2 > 3 )
    v3 = -1;
  else
    v3 = dword_2610AEC[v2];
  return (*(int (**)(void))(*(_DWORD *)this + 8))() + v3;
}


void __fastcall BowEnchant::~BowEnchant(BowEnchant *this)
{
  Enchant *v1; // r0@1

  v1 = j_Enchant::~Enchant(this);
  j_j_j__ZdlPv_7((void *)v1);
}
