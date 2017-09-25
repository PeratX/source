

void __fastcall SetItemDamageFunction::~SetItemDamageFunction(SetItemDamageFunction *this)
{
  SetItemDamageFunction::~SetItemDamageFunction(this);
}


void __fastcall SetItemDamageFunction::apply(SetItemDamageFunction *this, ItemInstance *a2, Random *a3, LootTableContext *a4)
{
  SetItemDamageFunction::apply(this, a2, a3, a4);
}


void __fastcall SetItemDamageFunction::~SetItemDamageFunction(SetItemDamageFunction *this)
{
  SetItemDamageFunction *v1; // r4@1
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
  j_j_j__ZdlPv_6((void *)v1);
}


_DWORD *__fastcall SetItemDamageFunction::deserialize(_DWORD *a1, Json::Value *a2, int a3)
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
  v5 = (const Json::Value *)j_Json::Value::operator[](a2, "damage");
  j_Json::Value::Value((Json::Value *)&v7, v5);
  RandomValueBounds::deserialize((int *)&v8, (Json::Value *)&v7);
  j_Json::Value::~Value((Json::Value *)&v7);
  result = j_operator new(0x18u);
  result[1] = *(_DWORD *)v3;
  *(_DWORD *)v3 = 0;
  result[2] = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v3 + 4) = 0;
  result[3] = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  *result = &off_27198A0;
  *((_QWORD *)result + 2) = v8;
  *v4 = result;
  return result;
}


void __fastcall SetItemDamageFunction::apply(SetItemDamageFunction *this, ItemInstance *a2, Random *a3, LootTableContext *a4)
{
  ItemInstance *v4; // r4@1
  SetItemDamageFunction *v5; // r6@1
  Random *v6; // r5@1
  float v14; // r1@2
  __int16 v15; // r0@2
  void *v16; // r0@3
  unsigned int *v17; // r2@5
  signed int v18; // r1@7
  int v19; // [sp+0h] [bp-28h]@3

  v4 = a2;
  v5 = this;
  v6 = a3;
  if ( j_ItemInstance::isDamageableItem(a2) == 1 )
  {
    _R0 = RandomValueBounds::getFloat((SetItemDamageFunction *)((char *)v5 + 16), v6);
    __asm
    {
      VMOV            S18, R0
      VMOV.F32        S16, #1.0
    }
    _R0 = j_ItemInstance::getMaxDamage(v4);
      VMOV            S0, R0
      VSUB.F32        S2, S16, S18
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S2
      VMOV            R0, S0
    v15 = j_mce::Math::floor(_R0, v14);
    j_j_j__ZN12ItemInstance11setAuxValueEs_0(v4, v15);
  }
  else
    j_ItemInstance::toString((ItemInstance *)&v19, (int)v4);
    v16 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v19 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
}
