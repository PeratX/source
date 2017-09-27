

signed int __fastcall LootItemRandomChanceCondition::applies(LootItemRandomChanceCondition *this, Random *a2, LootTableContext *a3)
{
  signed int result; // r0@1

  _R4 = this;
  _R0 = j_Random::_genRandInt32(a2);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
  }
  result = 0;
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, [R4,#4]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


_DWORD *__fastcall LootItemRandomChanceCondition::deserialize(_DWORD *a1, Json::Value *a2)
{
  _DWORD *v2; // r4@1
  Json::Value *v3; // r0@1
  int v4; // r5@1
  _DWORD *result; // r0@1

  v2 = a1;
  v3 = (Json::Value *)j_Json::Value::operator[](a2, "chance");
  v4 = j_Json::Value::asFloat(v3, 0.0);
  result = j_operator new(8u);
  *result = &off_2725A9C;
  result[1] = v4;
  *v2 = result;
  return result;
}


int __fastcall LootItemRandomChanceCondition::LootItemRandomChanceCondition(int result, int a2)
{
  *(_DWORD *)result = &off_2725A9C;
  *(_DWORD *)(result + 4) = a2;
  return result;
}
