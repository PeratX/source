

void __fastcall SetDataFromColorIndexFunction::apply(SetDataFromColorIndexFunction *this, ItemInstance *a2, Random *a3, LootTableContext *a4)
{
  ItemInstance *v4; // r4@1
  LootTableContext *v5; // r5@1
  void *v6; // r0@2
  Entity *v7; // r0@4
  int v8; // r0@4
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  int v11; // [sp+0h] [bp-18h]@2

  v4 = a2;
  v5 = a4;
  if ( j_ItemInstance::isDamageableItem(a2) == 1 )
  {
    j_ItemInstance::toString((ItemInstance *)&v11, (int)v4);
    v6 = (void *)(v11 - 12);
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
        j_j_j_j__ZdlPv_9(v6);
    }
  }
  else
    v7 = (Entity *)LootTableContext::getThisEntity(v5);
    v8 = j_Entity::getColor(v7);
    j_j_j__ZN12ItemInstance11setAuxValueEs_0(v4, v8);
}


_DWORD *__fastcall SetDataFromColorIndexFunction::deserialize(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // r5@1
  int v4; // r4@1
  _DWORD *result; // r0@1

  v3 = a1;
  v4 = a3;
  result = j_operator new(0x10u);
  result[1] = *(_DWORD *)v4;
  *(_DWORD *)v4 = 0;
  result[2] = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = 0;
  result[3] = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  *result = &off_2719840;
  *v3 = result;
  return result;
}


void __fastcall SetDataFromColorIndexFunction::~SetDataFromColorIndexFunction(SetDataFromColorIndexFunction *this)
{
  SetDataFromColorIndexFunction::~SetDataFromColorIndexFunction(this);
}


void __fastcall SetDataFromColorIndexFunction::apply(SetDataFromColorIndexFunction *this, ItemInstance *a2, Random *a3, LootTableContext *a4)
{
  SetDataFromColorIndexFunction::apply(this, a2, a3, a4);
}


void __fastcall SetDataFromColorIndexFunction::~SetDataFromColorIndexFunction(SetDataFromColorIndexFunction *this)
{
  SetDataFromColorIndexFunction *v1; // r4@1
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
