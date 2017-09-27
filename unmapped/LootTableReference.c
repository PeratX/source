

LootTableReference *__fastcall LootTableReference::~LootTableReference(LootTableReference *this)
{
  LootTableReference *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r0@2
  char *v5; // r5@4
  char *v6; // r7@4
  unsigned int *v8; // r2@12
  signed int v9; // r1@14

  v1 = this;
  *(_DWORD *)this = &off_2725A60;
  v2 = *((_DWORD *)this + 7);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_2725A4C;
  v4 = *((_DWORD *)v1 + 6);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 8))();
  *((_DWORD *)v1 + 6) = 0;
  v6 = (char *)(*(_QWORD *)((char *)v1 + 12) >> 32);
  v5 = (char *)*(_QWORD *)((char *)v1 + 12);
  if ( v5 != v6 )
    do
      if ( *(_DWORD *)v5 )
        (*(void (**)(void))(**(_DWORD **)v5 + 4))();
      *(_DWORD *)v5 = 0;
      v5 += 4;
    while ( v6 != v5 );
    v5 = (char *)*((_DWORD *)v1 + 3);
  if ( v5 )
    j_operator delete(v5);
  return v1;
}


signed int __fastcall LootTableReference::_createItem(int a1, int a2, LootTableContext *a3, LootTableContext *a4)
{
  LootTableContext *v4; // r4@1
  int v5; // r7@1
  LootTableContext *v6; // r8@1
  int v7; // r6@1
  Level *v8; // r0@1
  char *v9; // r5@1
  int v10; // r0@1
  int v11; // r0@1
  Random *v12; // r1@1
  __int64 v13; // r4@2
  void *v14; // r0@4
  void *v15; // r0@6
  int v16; // r0@8
  __int64 v18; // r0@17
  void *v19; // r0@23
  void *v20; // r0@25
  int v21; // r0@27
  int v22; // [sp+4h] [bp-24h]@2
  int v23; // [sp+8h] [bp-20h]@2

  v4 = a4;
  v5 = a1;
  v6 = a3;
  v7 = a2;
  v8 = (Level *)j_LootTableContext::getLevel(a4);
  v9 = j_Level::getLootTables(v8);
  v10 = j_LootTableContext::getLevel(v4);
  v11 = (*(int (**)(void))(*(_DWORD *)v10 + 120))();
  v12 = (Random *)j_LootTables::lookupByName((int)v9, (unsigned int *)(v5 + 28), v11);
  if ( !v12 )
    return 0;
  j_LootTable::getRandomItems((LootTable *)&v22, v12, v6, v4);
  v13 = *(_QWORD *)&v22;
  if ( v23 == v22 )
  {
    if ( v22 != v23 )
    {
      do
      {
        v14 = *(void **)(v13 + 52);
        if ( v14 )
          j_operator delete(v14);
        v15 = *(void **)(v13 + 36);
        if ( v15 )
          j_operator delete(v15);
        v16 = *(_DWORD *)(v13 + 8);
        if ( v16 )
          (*(void (**)(void))(*(_DWORD *)v16 + 4))();
        *(_DWORD *)(v13 + 8) = 0;
        LODWORD(v13) = v13 + 72;
      }
      while ( HIDWORD(v13) != (_DWORD)v13 );
      LODWORD(v13) = v22;
    }
    if ( (_DWORD)v13 )
      j_operator delete((void *)v13);
  }
  if ( v23 - v22 > 0 )
    HIDWORD(v13) = 954437177 * ((v23 - v22) >> 3) + 1;
    do
      v18 = *(_QWORD *)(v7 + 4);
      if ( (_DWORD)v18 == HIDWORD(v18) )
        j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance>(
          (unsigned __int64 *)v7,
          v13);
      else
        j_ItemInstance::ItemInstance((ItemInstance *)v18, v13);
        *(_DWORD *)(v7 + 4) += 72;
      --HIDWORD(v13);
      LODWORD(v13) = v13 + 72;
    while ( SHIDWORD(v13) > 1 );
    v13 = *(_QWORD *)&v22;
  if ( (_DWORD)v13 != HIDWORD(v13) )
      v19 = *(void **)(v13 + 52);
      if ( v19 )
        j_operator delete(v19);
      v20 = *(void **)(v13 + 36);
      if ( v20 )
        j_operator delete(v20);
      v21 = *(_DWORD *)(v13 + 8);
      if ( v21 )
        (*(void (**)(void))(*(_DWORD *)v21 + 4))();
      *(_DWORD *)(v13 + 8) = 0;
    while ( HIDWORD(v13) != (_DWORD)v13 );
    HIDWORD(v13) = v22;
  if ( HIDWORD(v13) )
    j_operator delete((void *)HIDWORD(v13));
  return 1;
}


void __fastcall LootTableReference::deserialize(_DWORD *a1, Json::Value *a2, int a3, int a4, int a5)
{
  _DWORD *v5; // r6@1
  int v6; // r5@1
  void *v7; // r0@1
  _BYTE *v8; // r0@2
  int v9; // r2@3
  unsigned int v10; // r3@3
  void *v11; // r0@4
  void *v12; // r0@5
  unsigned int *v13; // r2@7
  signed int v14; // r1@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  int v19; // [sp+8h] [bp-30h]@5
  int v20; // [sp+Ch] [bp-2Ch]@4
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@1
  int v24; // [sp+20h] [bp-18h]@1

  v5 = a1;
  v23 = a4;
  v24 = a3;
  v6 = j_Json::Value::operator[](a2, "name");
  sub_21E94B4((void **)&v21, (const char *)&unk_257BC67);
  j_Json::Value::asString(&v22, v6, &v21);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = sub_21E78D0(&v22, 58, 0xFFFFFFFF);
  if ( v8 != (_BYTE *)-1 )
    v9 = (int)(v8 + 1);
    v10 = *(_DWORD *)(v22 - 12);
    if ( v10 < (unsigned int)(v8 + 1) )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v9, v10);
    sub_21E9040((void **)&v20, &v22, v9, 0xFFFFFFFF);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v22, &v20);
    v11 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v20 - 4);
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
        j_j_j_j__ZdlPv_9(v11);
  j_std::make_unique<LootTableReference,int &,int &,std::vector<std::unique_ptr<LootItemCondition,std::default_delete<LootItemCondition>>,std::allocator<std::unique_ptr<LootItemCondition,std::default_delete<LootItemCondition>>>> &,std::string &>(
    &v19,
    &v24,
    &v23,
    a5,
    &v22);
  *v5 = v19;
  v19 = 0;
  v12 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v22 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
}


void __fastcall LootTableReference::~LootTableReference(LootTableReference *this)
{
  LootTableReference *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r0@2
  char *v5; // r5@4
  char *v6; // r7@4
  unsigned int *v7; // r2@12
  signed int v8; // r1@14

  v1 = this;
  *(_DWORD *)this = &off_2725A60;
  v2 = *((_DWORD *)this + 7);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_2725A4C;
  v4 = *((_DWORD *)v1 + 6);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 8))();
  *((_DWORD *)v1 + 6) = 0;
  v6 = (char *)(*(_QWORD *)((char *)v1 + 12) >> 32);
  v5 = (char *)*(_QWORD *)((char *)v1 + 12);
  if ( v5 != v6 )
    do
      if ( *(_DWORD *)v5 )
        (*(void (**)(void))(**(_DWORD **)v5 + 4))();
      *(_DWORD *)v5 = 0;
      v5 += 4;
    while ( v6 != v5 );
    v5 = (char *)*((_DWORD *)v1 + 3);
  if ( v5 )
    j_operator delete(v5);
  j_operator delete((void *)v1);
}


void __fastcall LootTableReference::deserialize(_DWORD *a1, Json::Value *a2, int a3, int a4, int a5)
{
  LootTableReference::deserialize(a1, a2, a3, a4, a5);
}


void __fastcall LootTableReference::~LootTableReference(LootTableReference *this)
{
  LootTableReference::~LootTableReference(this);
}
