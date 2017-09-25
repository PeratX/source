

signed int __fastcall LootItemRandomChanceWithSpecialModifierCondition::applies(LootItemRandomChanceWithSpecialModifierCondition *this, Random *a2, LootTableContext *a3)
{
  LootTableContext *v4; // r4@1
  int v10; // r5@1
  int v11; // r0@1
  unsigned int v12; // r0@1
  signed int result; // r0@1

  _R5 = this;
  v4 = a3;
  _R0 = j_Random::_genRandInt32(a2);
  __asm
  {
    VMOV            S0, R0
    VCVT.F64.U32    D8, S0
    VLDR            S18, [R5,#4]
  }
  v10 = j_LootTableContext::getLevel(v4);
  v11 = j_LootTableContext::getThisEntity(v4);
    VLDR            D0, =2.32830644e-10
    VMUL.F64        D8, D8, D0
  v12 = (*(int (**)(void))(*(_DWORD *)v11 + 524))();
  _R0 = j_Level::getSpecialMultiplier(v10, v12);
  __asm { VMOV            S0, R0 }
  result = 0;
    VCVT.F32.F64    S2, D8
    VMUL.F32        S0, S0, S18
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


int __fastcall LootItemRandomChanceWithSpecialModifierCondition::LootItemRandomChanceWithSpecialModifierCondition(int result, int a2)
{
  *(_DWORD *)result = &off_2725AC4;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


_DWORD *__fastcall LootItemRandomChanceWithSpecialModifierCondition::deserialize(_DWORD *a1, Json::Value *a2)
{
  _DWORD *v2; // r4@1
  Json::Value *v3; // r0@1
  int v4; // r5@1
  _DWORD *result; // r0@1

  v2 = a1;
  v3 = (Json::Value *)j_Json::Value::operator[](a2, "max_chance");
  v4 = j_Json::Value::asFloat(v3, 0.0);
  result = j_operator new(8u);
  *result = &off_2725AC4;
  result[1] = v4;
  *v2 = result;
  return result;
}
