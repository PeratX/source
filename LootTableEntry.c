

void __fastcall LootTableEntry::~LootTableEntry(LootTableEntry *this)
{
  LootTableEntry::~LootTableEntry(this);
}


LootTableEntry *__fastcall LootTableEntry::~LootTableEntry(LootTableEntry *this)
{
  LootTableEntry *v1; // r4@1
  int v2; // r0@1
  char *v3; // r5@3
  char *v4; // r7@3

  v1 = this;
  *(_DWORD *)this = &off_2725A38;
  j_std::unique_ptr<LootTable,std::default_delete<LootTable>>::~unique_ptr((_DWORD *)this + 7);
  *(_DWORD *)v1 = &off_2725A4C;
  v2 = *((_DWORD *)v1 + 6);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 8))();
  *((_DWORD *)v1 + 6) = 0;
  v4 = (char *)(*(_QWORD *)((char *)v1 + 12) >> 32);
  v3 = (char *)*(_QWORD *)((char *)v1 + 12);
  if ( v3 != v4 )
  {
    do
    {
      if ( *(_DWORD *)v3 )
        (*(void (**)(void))(**(_DWORD **)v3 + 4))();
      *(_DWORD *)v3 = 0;
      v3 += 4;
    }
    while ( v4 != v3 );
    v3 = (char *)*((_DWORD *)v1 + 3);
  }
  if ( v3 )
    j_operator delete(v3);
  return v1;
}


_DWORD *__fastcall LootTableEntry::deserialize(_DWORD *a1, const Json::Value *a2)
{
  _DWORD *v2; // r4@1
  const Json::Value *v3; // r6@1
  _DWORD *v4; // r0@1
  int v5; // r5@1
  _DWORD *v6; // r0@1
  _DWORD *v7; // r5@1
  int v8; // r1@1
  int v10; // [sp+0h] [bp-28h]@1
  int v11; // [sp+10h] [bp-18h]@1
  int v12; // [sp+14h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v4 = j_operator new(0x10u);
  v5 = (int)v4;
  *(_QWORD *)v4 = (unsigned int)&unk_28898CC;
  v4[2] = 0;
  v4[3] = 0;
  v11 = (int)v4;
  j_Json::Value::Value((Json::Value *)&v10, v3);
  j_LootTable::deserialize(v5, (Json::Value *)&v10);
  j_Json::Value::~Value((Json::Value *)&v10);
  v6 = j_operator new(0x20u);
  v7 = v6;
  v8 = v11;
  v11 = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[1] = 0;
  v6[2] = 0;
  *v6 = &off_2725A38;
  v12 = 0;
  v6[7] = v8;
  j_std::unique_ptr<LootTable,std::default_delete<LootTable>>::~unique_ptr(&v12);
  *v2 = v7;
  return j_std::unique_ptr<LootTable,std::default_delete<LootTable>>::~unique_ptr(&v11);
}


void __fastcall LootTableEntry::~LootTableEntry(LootTableEntry *this)
{
  LootTableEntry *v1; // r4@1
  int v2; // r0@1
  char *v3; // r5@3
  char *v4; // r7@3

  v1 = this;
  *(_DWORD *)this = &off_2725A38;
  j_std::unique_ptr<LootTable,std::default_delete<LootTable>>::~unique_ptr((_DWORD *)this + 7);
  *(_DWORD *)v1 = &off_2725A4C;
  v2 = *((_DWORD *)v1 + 6);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 8))();
  *((_DWORD *)v1 + 6) = 0;
  v4 = (char *)(*(_QWORD *)((char *)v1 + 12) >> 32);
  v3 = (char *)*(_QWORD *)((char *)v1 + 12);
  if ( v3 != v4 )
  {
    do
    {
      if ( *(_DWORD *)v3 )
        (*(void (**)(void))(**(_DWORD **)v3 + 4))();
      *(_DWORD *)v3 = 0;
      v3 += 4;
    }
    while ( v4 != v3 );
    v3 = (char *)*((_DWORD *)v1 + 3);
  }
  if ( v3 )
    j_operator delete(v3);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall LootTableEntry::_createItem(int a1, int a2, LootTableContext *a3, LootTableContext *a4)
{
  int v4; // r6@1
  __int64 v5; // r4@1
  signed int v6; // r6@2
  __int64 v7; // r0@5
  void *v8; // r0@12
  void *v9; // r0@14
  int v10; // r0@16
  int v12; // [sp+0h] [bp-20h]@1
  int v13; // [sp+4h] [bp-1Ch]@1

  v4 = a2;
  j_LootTable::getRandomItems((LootTable *)&v12, *(Random **)(a1 + 28), a3, a4);
  v5 = *(_QWORD *)&v12;
  if ( v13 == v12 )
  {
    v6 = 0;
  }
  else
    if ( v13 - v12 >= 1 )
    {
      HIDWORD(v5) = 954437177 * ((v13 - v12) >> 3) + 1;
      do
      {
        v7 = *(_QWORD *)(v4 + 4);
        if ( (_DWORD)v7 == HIDWORD(v7) )
        {
          j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance>(
            (unsigned __int64 *)v4,
            v5);
        }
        else
          j_ItemInstance::ItemInstance((ItemInstance *)v7, v5);
          *(_DWORD *)(v4 + 4) += 72;
        --HIDWORD(v5);
        LODWORD(v5) = v5 + 72;
      }
      while ( SHIDWORD(v5) > 1 );
      v5 = *(_QWORD *)&v12;
    }
    v6 = 1;
  if ( (_DWORD)v5 != HIDWORD(v5) )
    do
      v8 = *(void **)(v5 + 52);
      if ( v8 )
        j_operator delete(v8);
      v9 = *(void **)(v5 + 36);
      if ( v9 )
        j_operator delete(v9);
      v10 = *(_DWORD *)(v5 + 8);
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      *(_DWORD *)(v5 + 8) = 0;
      LODWORD(v5) = v5 + 72;
    while ( HIDWORD(v5) != (_DWORD)v5 );
    HIDWORD(v5) = v12;
  if ( HIDWORD(v5) )
    j_operator delete((void *)HIDWORD(v5));
  return v6;
}
