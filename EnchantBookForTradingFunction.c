

int __fastcall EnchantBookForTradingFunction::deserialize(_DWORD *a1, Json::Value *a2, int a3)
{
  _DWORD *v3; // r5@1
  int v4; // r7@1
  Json::Value *v5; // r6@1
  _DWORD *v6; // r0@1
  _DWORD *v7; // r4@1
  Json::Value *v8; // r0@1
  Json::Value *v9; // r0@1
  Json::Value *v10; // r0@1
  Json::Value *v11; // r0@1
  int result; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = j_operator new(0x20u);
  v7 = v6;
  v6[1] = *(_DWORD *)v4;
  *(_DWORD *)v4 = 0;
  v6[2] = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = 0;
  v6[3] = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  *v6 = &off_2724D5C;
  v8 = (Json::Value *)j_Json::Value::operator[](v5, "base_cost");
  v7[4] = j_Json::Value::asInt(v8, 2);
  v9 = (Json::Value *)j_Json::Value::operator[](v5, "per_level_cost");
  v7[7] = j_Json::Value::asInt(v9, 3);
  v10 = (Json::Value *)j_Json::Value::operator[](v5, "base_random_cost");
  v7[5] = j_Json::Value::asInt(v10, 5);
  v11 = (Json::Value *)j_Json::Value::operator[](v5, "per_level_random_cost");
  result = j_Json::Value::asInt(v11, 10);
  v7[6] = result;
  *v3 = v7;
  return result;
}


void __fastcall EnchantBookForTradingFunction::~EnchantBookForTradingFunction(EnchantBookForTradingFunction *this)
{
  EnchantBookForTradingFunction::~EnchantBookForTradingFunction(this);
}


void __fastcall EnchantBookForTradingFunction::~EnchantBookForTradingFunction(EnchantBookForTradingFunction *this)
{
  EnchantBookForTradingFunction *v1; // r4@1
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


signed int __fastcall EnchantBookForTradingFunction::apply(EnchantBookForTradingFunction *this, ItemInstance *a2, Random *a3, const Trade *a4, LootTableContext *a5)
{
  ItemInstance *v5; // r8@1
  Random *v6; // r5@1
  int v7; // r7@1
  int v8; // r0@1
  signed int v9; // r1@2
  int v10; // r6@3
  int v11; // r4@3
  int v12; // r0@3
  int v13; // r0@4
  unsigned int v14; // r1@5
  unsigned int v15; // r5@8
  __int64 v16; // r2@8
  const EnchantmentInstance *v17; // r2@8
  signed int v18; // r4@8
  char v20; // [sp+4h] [bp-24h]@8

  v5 = a2;
  v6 = a3;
  v7 = 0;
  v8 = Enchant::mEnchants;
  if ( (unk_2805F90 - (signed int)Enchant::mEnchants) >> 2 )
  {
    v9 = unk_2805F90 - Enchant::mEnchants;
    v7 = j_Random::_genRandInt32(a3) % (v9 >> 2);
    v8 = Enchant::mEnchants;
  }
  v10 = *(_DWORD *)(v8 + 4 * v7);
  v11 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v10 + 16))(*(_DWORD *)(v8 + 4 * v7));
  v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 20))(v10);
  if ( v12 >= v11 )
    v13 = v12 + 1;
    if ( v13 == v11 )
      v14 = 0;
    else
      v14 = j_Random::_genRandInt32(v6) % (v13 - v11);
    v11 += v14;
  v15 = j_Random::_genRandInt32(v6);
  LODWORD(v16) = v11;
  j_EnchantmentInstance::EnchantmentInstance(&v20, v7, v16);
  j_EnchantUtils::applyEnchant(v5, (ItemInstance *)&v20, v17);
  v18 = v15 % (10 * v11 + 5) + 3 * v11 + 2;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 48))(v10) == 1 )
    v18 *= 2;
    if ( v18 > 64 )
      v18 = 64;
  return v18;
}


signed int __fastcall EnchantBookForTradingFunction::apply(EnchantBookForTradingFunction *this, ItemInstance *a2, Random *a3, LootTableContext *a4)
{
  ItemInstance *v4; // r8@1
  Random *v5; // r6@1
  int v6; // r5@1
  int v7; // r0@1
  signed int v8; // r1@2
  int v9; // r4@3
  int v10; // r7@3
  int v11; // r0@3
  __int64 v12; // r2@3
  int v13; // r0@4
  unsigned int v14; // r1@5
  const EnchantmentInstance *v15; // r2@8
  int v17; // [sp+0h] [bp-20h]@8

  v4 = a2;
  v5 = a3;
  v6 = 0;
  v7 = Enchant::mEnchants;
  if ( (unk_2805F90 - (signed int)Enchant::mEnchants) >> 2 )
  {
    v8 = unk_2805F90 - Enchant::mEnchants;
    v6 = j_Random::_genRandInt32(a3) % (v8 >> 2);
    v7 = Enchant::mEnchants;
  }
  v9 = *(_DWORD *)(v7 + 4 * v6);
  v10 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v9 + 16))(*(_DWORD *)(v7 + 4 * v6));
  v11 = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 20))(v9);
  if ( v11 >= v10 )
    v13 = v11 + 1;
    if ( v13 == v10 )
      v14 = 0;
    else
      v14 = j_Random::_genRandInt32(v5) % (v13 - v10);
    v10 += v14;
  LODWORD(v12) = v10;
  j_EnchantmentInstance::EnchantmentInstance(&v17, v6, v12);
  return j_EnchantUtils::applyEnchant(v4, (ItemInstance *)&v17, v15);
}
