

void __fastcall LootingEnchantFunction::~LootingEnchantFunction(LootingEnchantFunction *this)
{
  LootingEnchantFunction *v1; // r4@1
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


void __fastcall LootingEnchantFunction::~LootingEnchantFunction(LootingEnchantFunction *this)
{
  LootingEnchantFunction::~LootingEnchantFunction(this);
}


_DWORD *__fastcall LootingEnchantFunction::deserialize(_DWORD *a1, Json::Value *a2, int a3)
{
  int v3; // r5@1
  _DWORD *v4; // r4@1
  const Json::Value *v5; // r0@1
  _DWORD *result; // r0@1
  int v7; // [sp+0h] [bp-30h]@1
  __int64 v8; // [sp+10h] [bp-20h]@1

  v3 = a3;
  v4 = a1;
  v8 = 0LL;
  v5 = (const Json::Value *)j_Json::Value::operator[](a2, "count");
  j_Json::Value::Value((Json::Value *)&v7, v5);
  j_RandomValueBounds::deserialize((int *)&v8, (Json::Value *)&v7);
  j_Json::Value::~Value((Json::Value *)&v7);
  result = j_operator new(0x18u);
  result[1] = *(_DWORD *)v3;
  *(_DWORD *)v3 = 0;
  result[2] = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v3 + 4) = 0;
  result[3] = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  *result = &off_2724DD4;
  *((_QWORD *)result + 2) = v8;
  *v4 = result;
  return result;
}


int *__fastcall LootingEnchantFunction::apply(LootingEnchantFunction *this, ItemInstance *a2, Random *a3, LootTableContext *a4)
{
  LootTableContext *v4; // r7@1
  LootingEnchantFunction *v5; // r6@1
  Random *v6; // r5@1
  ItemInstance *v7; // r4@1
  int *result; // r0@1
  int v9; // r0@2
  int v18; // r5@5
  int v20; // r6@5
  int v21; // r3@5

  v4 = a4;
  v5 = this;
  v6 = a3;
  v7 = a2;
  result = (int *)j_LootTableContext::getKillerEntity(a4);
  if ( result )
  {
    v9 = j_LootTableContext::getKillerEntity(v4);
    result = (int *)j_Entity::hasCategory(v9, 2);
    if ( result == (int *)1 )
    {
      result = (int *)j_LootTableContext::getKillerEntity(v4);
      if ( result )
      {
        result = (int *)j_EnchantUtils::getBestEnchantLevel((EnchantUtils *)0xE, (int)result, 4);
        _R7 = result;
        if ( result )
        {
          _R0 = j_RandomValueBounds::getFloat((LootingEnchantFunction *)((char *)v5 + 16), v6);
          __asm
          {
            VMOV            S0, R7
            VMOV            S2, R0
            VCVT.F32.S32    S0, S0
            VMUL.F32        S0, S2, S0
            VMOV            R0, S0
          }
          _R0 = j_roundf(_R0);
          __asm { VMOV            S16, R0 }
          v18 = j_ItemInstance::getId(v7);
            VCVTR.S32.F32   S0, S16
            VMOV            R1, S0
          v20 = _R1 + *((_BYTE *)v7 + 14);
          v21 = j_ItemInstance::getAuxValue(v7);
          result = j_j_j__ZN12ItemInstance4initEiii_1(v7, v18, v20, v21);
        }
      }
    }
  }
  return result;
}
