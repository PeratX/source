

void __fastcall EnchantRandomlyFunction::apply(EnchantRandomlyFunction *this, ItemInstance *a2, Random *a3, LootTableContext *a4, bool a5)
{
  EnchantRandomlyFunction::apply(this, a2, a3, a4, a5);
}


void __fastcall EnchantRandomlyFunction::~EnchantRandomlyFunction(EnchantRandomlyFunction *this)
{
  EnchantRandomlyFunction::~EnchantRandomlyFunction(this);
}


EnchantRandomlyFunction *__fastcall EnchantRandomlyFunction::~EnchantRandomlyFunction(EnchantRandomlyFunction *this)
{
  EnchantRandomlyFunction *v1; // r4@1
  void *v2; // r0@1
  char *v3; // r5@3 OVERLAPPED
  char *v4; // r6@3 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_2724D8C;
  v2 = (void *)*((_DWORD *)this + 4);
  if ( v2 )
    j_operator delete(v2);
  *(_DWORD *)v1 = &off_2719858;
  *(_QWORD *)&v3 = *(_QWORD *)((char *)v1 + 4);
  if ( v3 != v4 )
  {
    do
    {
      if ( *(_DWORD *)v3 )
        (*(void (**)(void))(**(_DWORD **)v3 + 4))();
      *(_DWORD *)v3 = 0;
      v3 += 4;
    }
    while ( v4 != v3 );
    v3 = (char *)*((_DWORD *)v1 + 1);
  }
  if ( v3 )
    j_operator delete(v3);
  return v1;
}


void __fastcall EnchantRandomlyFunction::apply(EnchantRandomlyFunction *this, ItemInstance *a2, Random *a3, LootTableContext *a4, bool a5)
{
  EnchantRandomlyFunction *v5; // r5@1
  ItemInstance *v6; // r4@1
  unsigned int v7; // kr00_4@1

  v5 = this;
  v6 = a2;
  v7 = j_Random::_genRandInt32(a3);
  j_j_j__ZN12EnchantUtils15randomlyEnchantER12ItemInstanceiib_0(
    v6,
    (ItemInstance *)(v7 % 0x1E),
    *((_BYTE *)v5 + 28),
    0,
    a5);
}


void __fastcall EnchantRandomlyFunction::~EnchantRandomlyFunction(EnchantRandomlyFunction *this)
{
  EnchantRandomlyFunction *v1; // r4@1
  void *v2; // r0@1
  char *v3; // r5@3 OVERLAPPED
  char *v4; // r6@3 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_2724D8C;
  v2 = (void *)*((_DWORD *)this + 4);
  if ( v2 )
    j_operator delete(v2);
  *(_DWORD *)v1 = &off_2719858;
  *(_QWORD *)&v3 = *(_QWORD *)((char *)v1 + 4);
  if ( v3 != v4 )
  {
    do
    {
      if ( *(_DWORD *)v3 )
        (*(void (**)(void))(**(_DWORD **)v3 + 4))();
      *(_DWORD *)v3 = 0;
      v3 += 4;
    }
    while ( v4 != v3 );
    v3 = (char *)*((_DWORD *)v1 + 1);
  }
  if ( v3 )
    j_operator delete(v3);
  j_j_j__ZdlPv_7((void *)v1);
}


_DWORD *__fastcall EnchantRandomlyFunction::deserialize(_DWORD *a1, Json::Value *a2, int a3)
{
  int v3; // r5@1
  _DWORD *v4; // r4@1
  Json::Value *v5; // r0@1
  char v6; // r6@1
  _DWORD *result; // r0@1

  v3 = a3;
  v4 = a1;
  v5 = (Json::Value *)j_Json::Value::operator[](a2, "treasure");
  v6 = j_Json::Value::asBool(v5, 0);
  result = j_operator new(0x20u);
  result[1] = *(_DWORD *)v3;
  *(_DWORD *)v3 = 0;
  result[2] = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v3 + 4) = 0;
  result[3] = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  *result = &off_2724D8C;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  *((_BYTE *)result + 28) = v6;
  *v4 = result;
  return result;
}
