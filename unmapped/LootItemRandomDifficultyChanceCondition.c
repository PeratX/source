

int __fastcall LootItemRandomDifficultyChanceCondition::LootItemRandomDifficultyChanceCondition(int a1, Json::Value *a2)
{
  int v2; // r4@1
  Json::Value *v3; // r6@1
  int v4; // r5@1
  Json::Value *v5; // r0@1
  int v6; // r7@1
  Json::Value *v7; // r0@1
  int v13; // t1@1
  Json::Value *v14; // r0@1
  int v16; // t1@1
  Json::Value *v17; // r0@1
  int v19; // t1@1
  Json::Value *v20; // r0@1
  int v22; // t1@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_2725AD8;
  *(_DWORD *)(a1 + 4) = 0;
  v4 = a1 + 4;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  j_std::vector<float,std::allocator<float>>::_M_default_append(a1 + 4, 4u);
  v5 = (Json::Value *)j_Json::Value::operator[](v3, "default_chance");
  v6 = j_Json::Value::asFloat(v5, 0.0);
  v7 = (Json::Value *)j_Json::Value::operator[](v3, "peaceful");
  _R0 = j_Json::Value::asFloat(v7, *(float *)&v6);
  __asm { VMOV            S0, R0 }
  v13 = *(_DWORD *)v4;
  __asm { VSTR            S0, [R0] }
  v14 = (Json::Value *)j_Json::Value::operator[](v3, "easy");
  _R0 = j_Json::Value::asFloat(v14, *(float *)&v6);
  v16 = *(_DWORD *)v4;
  __asm { VSTR            S0, [R0,#4] }
  v17 = (Json::Value *)j_Json::Value::operator[](v3, "normal");
  _R0 = j_Json::Value::asFloat(v17, *(float *)&v6);
  v19 = *(_DWORD *)v4;
  __asm { VSTR            S0, [R0,#8] }
  v20 = (Json::Value *)j_Json::Value::operator[](v3, "hard");
  _R0 = j_Json::Value::asFloat(v20, *(float *)&v6);
  v22 = *(_DWORD *)(v2 + 4);
  __asm { VSTR            S0, [R0,#0xC] }
  return v2;
}


signed int __fastcall LootItemRandomDifficultyChanceCondition::applies(LootItemRandomDifficultyChanceCondition *this, Random *a2, LootTableContext *a3)
{
  LootItemRandomDifficultyChanceCondition *v3; // r5@1
  LootTableContext *v4; // r4@1
  Level *v10; // r0@1
  signed int result; // r0@1

  v3 = this;
  v4 = a3;
  _R0 = j_Random::_genRandInt32(a2);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S16, D0
  }
  v10 = (Level *)j_LootTableContext::getLevel(v4);
  _R0 = *((_DWORD *)v3 + 1) + 4 * j_Level::getDifficulty(v10);
  __asm { VLDR            S0, [R0] }
  result = 0;
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


LootItemRandomDifficultyChanceCondition *__fastcall LootItemRandomDifficultyChanceCondition::~LootItemRandomDifficultyChanceCondition(LootItemRandomDifficultyChanceCondition *this)
{
  LootItemRandomDifficultyChanceCondition *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2725AD8;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


Json::Value *__fastcall LootItemRandomDifficultyChanceCondition::deserialize(_DWORD *a1, const Json::Value *a2)
{
  _DWORD *v2; // r5@1
  const Json::Value *v3; // r6@1
  void *v4; // r4@1
  Json::Value *result; // r0@1
  int v6; // [sp+0h] [bp-20h]@1

  v2 = a1;
  v3 = a2;
  v4 = j_operator new(0x10u);
  j_Json::Value::Value((Json::Value *)&v6, v3);
  j_LootItemRandomDifficultyChanceCondition::LootItemRandomDifficultyChanceCondition((int)v4, (Json::Value *)&v6);
  result = j_Json::Value::~Value((Json::Value *)&v6);
  *v2 = v4;
  return result;
}


void __fastcall LootItemRandomDifficultyChanceCondition::~LootItemRandomDifficultyChanceCondition(LootItemRandomDifficultyChanceCondition *this)
{
  LootItemRandomDifficultyChanceCondition *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2725AD8;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall LootItemRandomDifficultyChanceCondition::~LootItemRandomDifficultyChanceCondition(LootItemRandomDifficultyChanceCondition *this)
{
  LootItemRandomDifficultyChanceCondition::~LootItemRandomDifficultyChanceCondition(this);
}
