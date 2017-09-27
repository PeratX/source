

void __fastcall SmeltItemFunction::~SmeltItemFunction(SmeltItemFunction *this)
{
  SmeltItemFunction::~SmeltItemFunction(this);
}


_DWORD *__fastcall SmeltItemFunction::deserialize(_DWORD *a1, int a2, int a3)
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
  *result = &off_27198D0;
  *v3 = result;
  return result;
}


void __fastcall SmeltItemFunction::~SmeltItemFunction(SmeltItemFunction *this)
{
  SmeltItemFunction *v1; // r4@1
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


int __fastcall SmeltItemFunction::apply(SmeltItemFunction *this, ItemInstance *a2, Random *a3, LootTableContext *a4)
{
  ItemInstance *v4; // r4@1
  int v5; // r0@1
  int result; // r0@1
  FurnaceRecipes *v7; // r0@2
  int v8; // r5@9
  int v9; // r6@9
  int v10; // r0@9
  int v11; // [sp+0h] [bp-A0h]@2
  int v12; // [sp+8h] [bp-98h]@6
  void *v13; // [sp+24h] [bp-7Ch]@4
  void *ptr; // [sp+34h] [bp-6Ch]@2
  int v15; // [sp+48h] [bp-58h]@2
  int v16; // [sp+50h] [bp-50h]@14
  void *v17; // [sp+6Ch] [bp-34h]@12
  void *v18; // [sp+7Ch] [bp-24h]@10

  v4 = a2;
  v5 = LootTableContext::getThisEntity(a4);
  result = (*(int (**)(void))(*(_DWORD *)v5 + 320))();
  if ( result == 1 )
  {
    v7 = j_FurnaceRecipes::getInstance((FurnaceRecipes *)1);
    j_FurnaceRecipes::getResult((FurnaceRecipes *)&v11, v7, (int)v4);
    j_ItemInstance::ItemInstance((ItemInstance *)&v15, (int)&v11);
    if ( ptr )
      j_operator delete(ptr);
    if ( v13 )
      j_operator delete(v13);
    if ( v12 )
      (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    v12 = 0;
    if ( !j_ItemInstance::isNull((ItemInstance *)&v15) )
    {
      v8 = *((_BYTE *)v4 + 14);
      v9 = *(_WORD *)(v15 + 18);
      v10 = j_ItemInstance::getAuxValue(v4);
      j_ItemInstance::init(v4, v9, v8, v10);
    }
    if ( v18 )
      j_operator delete(v18);
    if ( v17 )
      j_operator delete(v17);
    result = v16;
    if ( v16 )
      result = (*(int (**)(void))(*(_DWORD *)v16 + 4))();
  }
  return result;
}
