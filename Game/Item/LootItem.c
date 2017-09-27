

void __fastcall LootItem::~LootItem(LootItem *this)
{
  LootItem::~LootItem(this);
}


void __fastcall LootItem::~LootItem(LootItem *this)
{
  LootItem *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED
  int v4; // r0@8
  char *v5; // r5@10
  char *v6; // r7@10

  v1 = this;
  *(_DWORD *)this = &off_2725B00;
  *(_QWORD *)&v2 = *((_QWORD *)this + 4);
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
    v2 = (char *)*((_DWORD *)v1 + 8);
  }
  if ( v2 )
    j_operator delete(v2);
  *(_DWORD *)v1 = &off_2725A4C;
  v4 = *((_DWORD *)v1 + 6);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 8))();
  *((_DWORD *)v1 + 6) = 0;
  v6 = (char *)(*(_QWORD *)((char *)v1 + 12) >> 32);
  v5 = (char *)*(_QWORD *)((char *)v1 + 12);
  if ( v5 != v6 )
      if ( *(_DWORD *)v5 )
        (*(void (**)(void))(**(_DWORD **)v5 + 4))();
      *(_DWORD *)v5 = 0;
      v5 += 4;
    while ( v6 != v5 );
    v5 = (char *)*((_DWORD *)v1 + 3);
  if ( v5 )
    j_operator delete(v5);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall LootItem::deserialize(_DWORD *a1, Json::Value *a2, int a3, int a4, int a5)
{
  Json::Value *v5; // r7@1
  _DWORD *v6; // r8@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r4@1
  void *v10; // r0@1
  _BYTE *v11; // r0@2
  int v12; // r2@3
  unsigned int v13; // r3@3
  void *v14; // r0@4
  int *v15; // r4@5
  const Json::Value *v16; // r0@5
  _DWORD *v17; // r0@5
  int v18; // r1@5
  int v19; // r1@5
  int v20; // r1@5
  void *v21; // r0@5
  unsigned int *v22; // r2@7
  signed int v23; // r1@9
  unsigned int *v24; // r2@11
  signed int v25; // r1@13
  unsigned int *v26; // r2@15
  signed int v27; // r1@17
  int v28; // [sp+0h] [bp-48h]@5
  int v29; // [sp+10h] [bp-38h]@5
  int v30; // [sp+14h] [bp-34h]@5
  int v31; // [sp+18h] [bp-30h]@5
  int v32; // [sp+1Ch] [bp-2Ch]@4
  int v33; // [sp+24h] [bp-24h]@1
  int v34; // [sp+28h] [bp-20h]@1

  v5 = a2;
  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = j_Json::Value::operator[](a2, "name");
  sub_21E94B4((void **)&v33, (const char *)&unk_257BC67);
  j_Json::Value::asString(&v34, v9, &v33);
  v10 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    }
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  v11 = sub_21E78D0(&v34, 58, 0xFFFFFFFF);
  if ( v11 != (_BYTE *)-1 )
    v12 = (int)(v11 + 1);
    v13 = *(_DWORD *)(v34 - 12);
    if ( v13 < (unsigned int)(v11 + 1) )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v12, v13);
    sub_21E9040((void **)&v32, &v34, v12, 0xFFFFFFFF);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v34, &v32);
    v14 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
      }
      else
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
  v15 = j_Item::lookupByName((unsigned int *)&v34, 1);
  v16 = (const Json::Value *)j_Json::Value::operator[](v5, "functions");
  j_Json::Value::Value((Json::Value *)&v28, v16);
  j_LootItemFunctions::deserialize((int)&v29, (Json::Value *)&v28);
  j_Json::Value::~Value((Json::Value *)&v28);
  v17 = j_operator new(0x2Cu);
  v17[1] = v8;
  v17[2] = v7;
  v17[3] = *(_DWORD *)a5;
  *(_DWORD *)a5 = 0;
  v17[4] = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(a5 + 4) = 0;
  v17[5] = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(a5 + 8) = 0;
  v17[6] = 0;
  *v17 = &off_2725B00;
  v18 = v29;
  v29 = 0;
  v17[7] = v15;
  v17[8] = v18;
  v19 = v30;
  v30 = 0;
  v17[9] = v19;
  v17[10] = v31;
  v20 = v34;
  *v6 = v17;
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v20 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
}


signed int __fastcall LootItem::_createItem(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r10@1
  int v4; // r1@1
  LootItemFunction **v5; // r4@2
  LootItemFunction **v6; // r9@2
  __int64 *v7; // r0@3
  bool v8; // zf@4
  int v9; // r6@8
  unsigned int v10; // r0@8
  int v11; // r5@8
  __int64 v12; // r0@10
  signed int v13; // r4@12
  int v14; // r7@15
  __int64 v15; // r0@17
  int v17; // [sp+0h] [bp-B0h]@15
  int v18; // [sp+8h] [bp-A8h]@24
  void *v19; // [sp+24h] [bp-8Ch]@22
  void *ptr; // [sp+34h] [bp-7Ch]@20
  int v21; // [sp+48h] [bp-68h]@2
  int v22; // [sp+4Ch] [bp-64h]@5
  int v23; // [sp+50h] [bp-60h]@34
  unsigned __int8 v24; // [sp+56h] [bp-5Ah]@8
  void *v25; // [sp+6Ch] [bp-44h]@32
  void *v26; // [sp+7Ch] [bp-34h]@30

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 28);
  if ( v4 )
  {
    j_ItemInstance::ItemInstance((ItemInstance *)&v21, v4);
    v6 = (LootItemFunction **)(*(_QWORD *)(v2 + 32) >> 32);
    v5 = (LootItemFunction **)*(_QWORD *)(v2 + 32);
    if ( v5 == v6 )
    {
LABEL_8:
      v9 = v24;
      v10 = j_ItemInstance::getMaxStackSize((ItemInstance *)&v21);
      v11 = v10;
      if ( v9 )
      {
        if ( v9 >= v10 )
        {
          do
          {
            j_ItemInstance::ItemInstance((ItemInstance *)&v17, (int)&v21);
            v14 = v9;
            if ( v11 < v9 )
              v14 = v11;
            j_ItemInstance::set((ItemInstance *)&v17, v14);
            v15 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v15 == HIDWORD(v15) )
            {
              j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
                (unsigned __int64 *)v3,
                (int)&v17);
            }
            else
              j_ItemInstance::ItemInstance((ItemInstance *)v15, (int)&v17);
              *(_DWORD *)(v3 + 4) += 72;
            if ( ptr )
              j_operator delete(ptr);
            if ( v19 )
              j_operator delete(v19);
            v9 -= v14;
            if ( v18 )
              (*(void (**)(void))(*(_DWORD *)v18 + 4))();
          }
          while ( v9 > 0 );
        }
        else
          v12 = *(_QWORD *)(v3 + 4);
          if ( (_DWORD)v12 == HIDWORD(v12) )
            j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance>(
              (unsigned __int64 *)v3,
              (int)&v21);
          else
            j_ItemInstance::ItemInstance((ItemInstance *)v12, (int)&v21);
            *(_DWORD *)(v3 + 4) += 72;
        v13 = 1;
      }
      else
        v13 = 0;
    }
    else
      while ( 1 )
        v7 = (__int64 *)j_LootItemFunction::getConditions(*v5);
        if ( j_LootItemConditions::allApply(v7) == 1 )
          (*(void (**)(void))(*(_DWORD *)*v5 + 8))();
          v8 = v21 == 0;
          if ( !v21 )
            v8 = v22 == 0;
          if ( v8 )
            break;
        ++v5;
        if ( v6 == v5 )
          goto LABEL_8;
      v13 = 0;
    if ( v26 )
      j_operator delete(v26);
    if ( v25 )
      j_operator delete(v25);
    if ( v23 )
      (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  }
  else
    v13 = 0;
  return v13;
}


LootPoolEntry *__fastcall LootItem::~LootItem(LootItem *this)
{
  LootItem *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_2725B00;
  *(_QWORD *)&v2 = *((_QWORD *)this + 4);
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
    v2 = (char *)*((_DWORD *)v1 + 8);
  }
  if ( v2 )
    j_operator delete(v2);
  return j_j_j__ZN13LootPoolEntryD2Ev(v1);
}


void __fastcall LootItem::deserialize(_DWORD *a1, Json::Value *a2, int a3, int a4, int a5)
{
  LootItem::deserialize(a1, a2, a3, a4, a5);
}
