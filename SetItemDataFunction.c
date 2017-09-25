

void __fastcall SetItemDataFunction::apply(SetItemDataFunction *this, ItemInstance *a2, Random *a3, LootTableContext *a4)
{
  SetItemDataFunction::apply(this, a2, a3, a4);
}


_DWORD *__fastcall SetItemDataFunction::deserialize(_DWORD *a1, Json::Value *a2, int a3)
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
  v5 = (const Json::Value *)j_Json::Value::operator[](a2, "data");
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
  *result = &off_27198B8;
  *((_QWORD *)result + 2) = v8;
  *v4 = result;
  return result;
}


void __fastcall SetItemDataFunction::apply(SetItemDataFunction *this, ItemInstance *a2, Random *a3, LootTableContext *a4)
{
  ItemInstance *v4; // r4@1
  SetItemDataFunction *v5; // r6@1
  Random *v6; // r5@1
  void *v7; // r0@2
  __int16 v8; // r0@4
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  int v11; // [sp+0h] [bp-18h]@2

  v4 = a2;
  v5 = this;
  v6 = a3;
  if ( j_ItemInstance::isDamageableItem(a2) == 1 )
  {
    j_ItemInstance::toString((ItemInstance *)&v11, (int)v4);
    v7 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
  }
  else
    v8 = RandomValueBounds::getInt((SetItemDataFunction *)((char *)v5 + 16), v6);
    j_j_j__ZN12ItemInstance11setAuxValueEs_0(v4, v8);
}


void __fastcall SetItemDataFunction::~SetItemDataFunction(SetItemDataFunction *this)
{
  SetItemDataFunction::~SetItemDataFunction(this);
}


void __fastcall SetItemDataFunction::~SetItemDataFunction(SetItemDataFunction *this)
{
  SetItemDataFunction *v1; // r4@1
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
