

_DWORD *__fastcall EnchantRandomEquipmentFunction::deserialize(_DWORD *a1, Json::Value *a2, int a3)
{
  int v3; // r5@1
  _DWORD *v4; // r4@1
  Json::Value *v5; // r0@1
  int v6; // r6@1
  _DWORD *result; // r0@1

  v3 = a3;
  v4 = a1;
  v5 = (Json::Value *)j_Json::Value::operator[](a2, "chance");
  v6 = j_Json::Value::asFloat(v5, 0.0);
  result = j_operator new(0x14u);
  result[1] = *(_DWORD *)v3;
  *(_DWORD *)v3 = 0;
  result[2] = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v3 + 4) = 0;
  result[3] = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  *result = &off_2724D74;
  result[4] = v6;
  *v4 = result;
  return result;
}


void __fastcall EnchantRandomEquipmentFunction::apply(EnchantRandomEquipmentFunction *this, ItemInstance *a2, Random *a3, LootTableContext *a4, bool a5)
{
  EnchantRandomEquipmentFunction::apply(this, a2, a3, a4, a5);
}


void __fastcall EnchantRandomEquipmentFunction::apply(EnchantRandomEquipmentFunction *this, ItemInstance *a2, Random *a3, LootTableContext *a4, bool a5)
{
  LootTableContext *v5; // r7@1
  Random *v7; // r5@1
  ItemInstance *v8; // r8@1
  int v9; // r4@1
  int v10; // r0@1
  unsigned int v11; // r0@1
  int v20; // [sp+14h] [bp-Ch]@0

  v5 = a4;
  _R6 = this;
  v7 = a3;
  v8 = a2;
  v9 = j_LootTableContext::getLevel(a4);
  v10 = j_LootTableContext::getThisEntity(v5);
  v11 = (*(int (**)(void))(*(_DWORD *)v10 + 524))();
  _R4 = j_Level::getSpecialMultiplier(v9, v11);
  _R0 = j_Random::_genRandInt32(v7);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VMOV            S16, R4
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VLDR            S2, [R6,#0x10]
    VCVT.F32.F64    S0, D0
    VMUL.F32        S2, S2, S16
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    JUMPOUT(__CS__, v20);
  __asm { VMOV.F32        S2, #5.0 }
  _R0 %= 0x12u;
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S16
    VADD.F32        S0, S0, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R1, S0
  j_j_j__ZN12EnchantUtils15randomlyEnchantER12ItemInstanceiib_0(v8, _R1, 0, 0, a5);
}


void __fastcall EnchantRandomEquipmentFunction::~EnchantRandomEquipmentFunction(EnchantRandomEquipmentFunction *this)
{
  EnchantRandomEquipmentFunction *v1; // r4@1
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


void __fastcall EnchantRandomEquipmentFunction::~EnchantRandomEquipmentFunction(EnchantRandomEquipmentFunction *this)
{
  EnchantRandomEquipmentFunction::~EnchantRandomEquipmentFunction(this);
}
