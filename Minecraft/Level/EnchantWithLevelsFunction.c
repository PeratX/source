

void __fastcall EnchantWithLevelsFunction::~EnchantWithLevelsFunction(EnchantWithLevelsFunction *this)
{
  EnchantWithLevelsFunction::~EnchantWithLevelsFunction(this);
}


void __fastcall EnchantWithLevelsFunction::~EnchantWithLevelsFunction(EnchantWithLevelsFunction *this)
{
  EnchantWithLevelsFunction *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_2719858;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}


_DWORD *__fastcall EnchantWithLevelsFunction::deserialize(_DWORD *a1, Json::Value *a2, int a3)
{
  Json::Value *v3; // r6@1
  _DWORD *v4; // r8@1
  int v5; // r5@1
  const Json::Value *v6; // r0@1
  Json::Value *v7; // r0@1
  _DWORD *result; // r0@1
  int v9; // [sp+0h] [bp-30h]@1
  __int64 v10; // [sp+10h] [bp-20h]@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v10 = 0LL;
  v6 = (const Json::Value *)j_Json::Value::operator[](a2, "levels");
  j_Json::Value::Value((Json::Value *)&v9, v6);
  j_RandomValueBounds::deserialize((int *)&v10, (Json::Value *)&v9);
  j_Json::Value::~Value((Json::Value *)&v9);
  v7 = (Json::Value *)j_Json::Value::operator[](v3, "treasure");
  LOBYTE(v3) = j_Json::Value::asBool(v7, 0);
  result = j_operator new(0x1Cu);
  result[1] = *(_DWORD *)v5;
  *(_DWORD *)v5 = 0;
  result[2] = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v5 + 4) = 0;
  result[3] = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  *result = &off_2724DA4;
  *((_QWORD *)result + 2) = v10;
  *((_BYTE *)result + 24) = (_BYTE)v3;
  *v4 = result;
  return result;
}


void __fastcall EnchantWithLevelsFunction::apply(EnchantWithLevelsFunction *this, ItemInstance *a2, Random *a3, LootTableContext *a4, bool a5)
{
  EnchantWithLevelsFunction::apply(this, a2, a3, a4, a5);
}


void __fastcall EnchantWithLevelsFunction::apply(EnchantWithLevelsFunction *this, ItemInstance *a2, Random *a3, LootTableContext *a4, bool a5)
{
  EnchantWithLevelsFunction *v5; // r5@1
  ItemInstance *v6; // r4@1
  ItemInstance *v7; // r1@1

  v5 = this;
  v6 = a2;
  v7 = (ItemInstance *)j_RandomValueBounds::getInt((EnchantWithLevelsFunction *)((char *)this + 16), a3);
  j_j_j__ZN12EnchantUtils15randomlyEnchantER12ItemInstanceiib_0(v6, v7, 0, *((_BYTE *)v5 + 24), a5);
}
