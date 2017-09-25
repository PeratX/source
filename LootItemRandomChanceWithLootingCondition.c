

int __fastcall LootItemRandomChanceWithLootingCondition::LootItemRandomChanceWithLootingCondition(int result, int a2, int a3)
{
  *(_DWORD *)result = &off_2725AB0;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = a3;
  return result;
}


signed int __fastcall LootItemRandomChanceWithLootingCondition::applies(LootItemRandomChanceWithLootingCondition *this, Random *a2, LootTableContext *a3)
{
  LootTableContext *v3; // r6@1
  Random *v5; // r5@1
  int v6; // r0@1
  int v7; // r0@2
  signed int result; // r0@4

  v3 = a3;
  _R4 = this;
  v5 = a2;
  v6 = j_LootTableContext::getKillerEntity(a3);
  if ( j_Entity::hasCategory(v6, 2) == 1 )
  {
    v7 = j_LootTableContext::getKillerEntity(v3);
    _R0 = j_EnchantUtils::getBestEnchantLevel((EnchantUtils *)0xE, v7, 4);
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S16, S0
    }
  }
  else
    __asm { VLDR            S16, =0.0 }
  _R0 = j_Random::_genRandInt32(v5);
  __asm
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
  result = 0;
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VLDR            S4, [R4,#8]
    VLDR            S2, [R4,#4]
    VMUL.F32        S4, S4, S16
    VCVT.F32.F64    S0, D0
    VADD.F32        S2, S4, S2
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


_DWORD *__fastcall LootItemRandomChanceWithLootingCondition::deserialize(_DWORD *a1, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  _DWORD *v3; // r4@1
  Json::Value *v4; // r0@1
  int v5; // r6@1
  Json::Value *v6; // r0@1
  int v7; // r5@1
  _DWORD *result; // r0@1

  v2 = a2;
  v3 = a1;
  v4 = (Json::Value *)j_Json::Value::operator[](a2, "chance");
  v5 = j_Json::Value::asFloat(v4, 0.0);
  v6 = (Json::Value *)j_Json::Value::operator[](v2, "looting_multiplier");
  v7 = j_Json::Value::asFloat(v6, 0.0);
  result = j_operator new(0xCu);
  *result = &off_2725AB0;
  result[1] = v5;
  result[2] = v7;
  *v3 = result;
  return result;
}
