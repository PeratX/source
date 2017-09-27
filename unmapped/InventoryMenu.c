

int __fastcall InventoryMenu::InventoryMenu(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r9@1
  int i; // r7@2
  int v7; // r1@5
  int v8; // r0@8
  ItemInstance *v9; // r1@8
  int v10; // r2@8
  int v11; // r7@10
  void *v12; // r10@10
  void *v13; // r6@10
  void *v14; // r8@11
  void *v15; // r0@12
  void *v16; // r0@14
  int v17; // r0@16
  int v18; // r5@21 OVERLAPPED
  int v19; // r6@21 OVERLAPPED
  void *v20; // r0@22
  void *v21; // r0@24
  int v22; // r0@26
  void (__fastcall *v24)(int, int, int); // [sp+4h] [bp-34h]@1
  ItemInstance *v25; // [sp+8h] [bp-30h]@1
  ItemInstance *v26; // [sp+Ch] [bp-2Ch]@1
  ItemInstance *v27; // [sp+10h] [bp-28h]@1

  v3 = a3;
  v4 = a1;
  BaseContainerMenu::BaseContainerMenu(a1, a2, 0);
  *(_DWORD *)v4 = &off_2700BB4;
  *(_DWORD *)(v4 + 4) = &off_2700BF8;
  *(_DWORD *)(v4 + 28) = v3;
  v5 = *(_DWORD *)(v4 + 8);
  v24 = *(void (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 1472);
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( v3 )
  {
    for ( i = 9; i < (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 44))(v3); ++i )
    {
      v7 = (*(int (**)(void))(**(_DWORD **)(v4 + 28) + 16))();
      if ( v26 == v27 )
      {
        std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
          (unsigned __int64 *)&v25,
          v7);
      }
      else
        ItemInstance::ItemInstance(v26, v7);
        v26 = (ItemInstance *)((char *)v26 + 72);
      v3 = *(_DWORD *)(v4 + 28);
    }
    v9 = v26;
    v10 = (int)v25;
    v8 = (int)v27;
  }
  else
    v8 = 0;
    v9 = 0;
    v10 = 0;
  v11 = v4 + 12;
  v12 = *(void **)(v4 + 12);
  v13 = *(void **)(v4 + 16);
  *(_DWORD *)v11 = v10;
  *(_DWORD *)(v11 + 4) = v9;
  *(_DWORD *)(v11 + 8) = v8;
  if ( v12 != v13 )
    v14 = v12;
    do
      v15 = (void *)*((_DWORD *)v14 + 13);
      if ( v15 )
        operator delete(v15);
      v16 = (void *)*((_DWORD *)v14 + 9);
      if ( v16 )
        operator delete(v16);
      v17 = *((_DWORD *)v14 + 2);
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 4))();
      *((_DWORD *)v14 + 2) = 0;
      v14 = (char *)v14 + 72;
    while ( v13 != v14 );
  if ( v12 )
    operator delete(v12);
  v24(v5, v4 + 4, v4 + 12);
  *(_QWORD *)&v18 = *(_QWORD *)&v25;
  if ( v25 != v26 )
      v20 = *(void **)(v18 + 52);
      if ( v20 )
        operator delete(v20);
      v21 = *(void **)(v18 + 36);
      if ( v21 )
        operator delete(v21);
      v22 = *(_DWORD *)(v18 + 8);
      if ( v22 )
        (*(void (**)(void))(*(_DWORD *)v22 + 4))();
      *(_DWORD *)(v18 + 8) = 0;
      v18 += 72;
    while ( v19 != v18 );
    v18 = (int)v25;
  if ( v18 )
    operator delete((void *)v18);
  return v4;
}


void __fastcall InventoryMenu::~InventoryMenu(InventoryMenu *this)
{
  InventoryMenu::~InventoryMenu(this);
}


void __fastcall InventoryMenu::~InventoryMenu(InventoryMenu *this)
{
  BaseContainerMenu *v1; // r0@1

  v1 = BaseContainerMenu::~BaseContainerMenu(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall InventoryMenu::getItems(InventoryMenu *this, int a2)
{
  InventoryMenu *v2; // r4@1
  int v3; // r5@1
  int result; // r0@1
  signed int i; // r6@2
  int v6; // r1@5
  __int64 v7; // kr00_8@5

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v3 = a2;
  *((_DWORD *)this + 2) = 0;
  result = *(_DWORD *)(a2 + 28);
  if ( result )
  {
    for ( i = 9; ; ++i )
    {
      result = (*(int (**)(void))(*(_DWORD *)result + 44))();
      if ( i >= result )
        break;
      v6 = (*(int (**)(void))(**(_DWORD **)(v3 + 28) + 16))();
      v7 = *(_QWORD *)((char *)v2 + 4);
      if ( (_DWORD)v7 == HIDWORD(v7) )
        std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
          (unsigned __int64 *)v2,
          v6);
      else
        *((_DWORD *)v2 + 1) = (char *)ItemInstance::ItemInstance((ItemInstance *)v7, v6) + 72;
      result = *(_DWORD *)(v3 + 28);
    }
  }
  return result;
}


void *__fastcall InventoryMenu::getSlot(InventoryMenu *this, int a2)
{
  int v2; // r0@1
  void *result; // r0@2

  v2 = *((_DWORD *)this + 7);
  if ( v2 )
    result = (void *)(*(int (**)(void))(*(_DWORD *)v2 + 16))();
  else
    result = &ItemInstance::EMPTY_ITEM;
  return result;
}


int __fastcall InventoryMenu::setSlot(InventoryMenu *this, int a2, const ItemInstance *a3)
{
  int result; // r0@1

  result = *((_DWORD *)this + 7);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 32))();
  return result;
}


int __fastcall InventoryMenu::removeSlot(InventoryMenu *this, int a2, int a3)
{
  int result; // r0@1

  result = *((_DWORD *)this + 7);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 36))();
  return result;
}
