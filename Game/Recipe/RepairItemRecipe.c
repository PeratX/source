

char *__fastcall RepairItemRecipe::getResultItem(RepairItemRecipe *this)
{
  return (char *)this + 68;
}


void __fastcall RepairItemRecipe::~RepairItemRecipe(RepairItemRecipe *this)
{
  RepairItemRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_2701350;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 68);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 72;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 17);
  }
  if ( v2 )
    operator delete((void *)v2);
  Recipe::~Recipe(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


void *__fastcall RepairItemRecipe::getIngredient(RepairItemRecipe *this, int a2, int a3)
{
  return &ItemInstance::EMPTY_ITEM;
}


int __fastcall RepairItemRecipe::getCraftingSize(RepairItemRecipe *this)
{
  return 0;
}


unsigned __int64 *__fastcall RepairItemRecipe::assemble(RepairItemRecipe *this, CraftingContainer *a2)
{
  RepairItemRecipe *v2; // r8@1
  CraftingContainer *v3; // r11@1
  int v4; // r4@1
  unsigned __int64 *v5; // r10@1
  int v6; // r5@1
  int v7; // r7@2
  void *v8; // r0@3
  void *v9; // r0@5
  int v10; // r0@7
  ItemInstance *v11; // r4@10
  ItemInstance *v12; // r5@10
  int v13; // r6@10
  int v14; // r0@13
  int v15; // r7@13
  int v16; // r0@13
  int v18; // r1@23
  bool v19; // zf@23
  int v20; // r1@31
  bool v21; // zf@31
  int v22; // r6@36
  int v23; // ST04_4@36
  int v24; // ST00_4@36
  int v25; // r9@36
  int v26; // r7@36
  int v28; // r0@36
  int v34; // r3@36
  __int64 v35; // r0@38
  void *v36; // r0@49
  void *v37; // r0@51
  int v38; // r0@53
  char v40; // [sp+8h] [bp-78h]@38
  int v41; // [sp+10h] [bp-70h]@45
  void *v42; // [sp+2Ch] [bp-54h]@43
  void *ptr; // [sp+3Ch] [bp-44h]@41
  ItemInstance *v44; // [sp+50h] [bp-30h]@10
  ItemInstance *v45; // [sp+54h] [bp-2Ch]@10
  ItemInstance *v46; // [sp+58h] [bp-28h]@10

  v2 = this;
  v3 = a2;
  v5 = (unsigned __int64 *)((char *)this + 68);
  v4 = *((_DWORD *)this + 17);
  v6 = *((_DWORD *)this + 18);
  if ( v6 != v4 )
  {
    v7 = *((_DWORD *)this + 17);
    do
    {
      v8 = *(void **)(v7 + 52);
      if ( v8 )
        operator delete(v8);
      v9 = *(void **)(v7 + 36);
      if ( v9 )
        operator delete(v9);
      v10 = *(_DWORD *)(v7 + 8);
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      *(_DWORD *)(v7 + 8) = 0;
      v7 += 72;
    }
    while ( v6 != v7 );
  }
  *((_DWORD *)v2 + 18) = v4;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  while ( v13 < (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v3 + 44))(v3) )
    v14 = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)v3 + 16))(v3, v13);
    v15 = v14;
    v16 = *(_BYTE *)(v14 + 15);
    _ZF = v16 == 0;
    if ( v16 )
      _ZF = *(_DWORD *)v15 == 0;
    if ( !_ZF && !ItemInstance::isNull((ItemInstance *)v15) && *(_BYTE *)(v15 + 14) )
      if ( v11 == v46 )
      {
        std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
          (unsigned __int64 *)&v44,
          v15);
        v11 = v45;
        v12 = v44;
      }
      else
        ItemInstance::ItemInstance(v11, v15);
        v11 = (ItemInstance *)((char *)v11 + 72);
        v45 = v11;
      if ( (unsigned int)(954437177 * ((v11 - v12) >> 3)) >= 2 )
        if ( *(_DWORD *)v15 != *(_DWORD *)v12 )
          goto LABEL_48;
        v18 = *((_BYTE *)v12 + 14);
        v19 = v18 == 1;
        if ( v18 == 1 )
          v19 = *(_BYTE *)(v15 + 14) == 1;
        if ( !v19 || (*(int (**)(void))(**(_DWORD **)v15 + 64))() != 1 )
    ++v13;
  if ( v11 - v12 == 144 && *(_DWORD *)v12 == *((_DWORD *)v12 + 18) )
    v20 = *((_BYTE *)v12 + 14);
    v21 = v20 == 1;
    if ( v20 == 1 )
      v21 = *((_BYTE *)v12 + 86) == 1;
    if ( v21 && (*(int (**)(void))(**(_DWORD **)v12 + 64))() == 1 )
      v22 = *(_DWORD *)v12;
      v23 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)v12 + 80))(*(_DWORD *)v12);
      v24 = ItemInstance::getDamageValue(v12);
      v25 = (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 80))(v22);
      v26 = ItemInstance::getDamageValue((ItemInstance *)((char *)v12 + 72));
      _R11 = (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 80))(v22);
      v28 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v22 + 80))(v22);
      _R1 = -1717986919;
      __asm { SMMUL.W         R2, R11, R1 }
      v34 = ((signed int)_R2 >> 3) + (_R2 >> 31) + v24 - v23 - v25 + v26 + v28;
      if ( v34 < 0 )
        v34 = 0;
      ItemInstance::ItemInstance((ItemInstance *)&v40, *(_DWORD *)v12, 1, v34);
      v35 = *((_QWORD *)v2 + 9);
      if ( (_DWORD)v35 == HIDWORD(v35) )
        std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance>(v5, (int)&v40);
        ItemInstance::ItemInstance((ItemInstance *)v35, (int)&v40);
        *((_DWORD *)v2 + 18) += 72;
      if ( ptr )
        operator delete(ptr);
      if ( v42 )
        operator delete(v42);
      if ( v41 )
        (*(void (**)(void))(*(_DWORD *)v41 + 4))();
      v41 = 0;
LABEL_48:
  if ( v12 != v11 )
      v36 = (void *)*((_DWORD *)v12 + 13);
      if ( v36 )
        operator delete(v36);
      v37 = (void *)*((_DWORD *)v12 + 9);
      if ( v37 )
        operator delete(v37);
      v38 = *((_DWORD *)v12 + 2);
      if ( v38 )
        (*(void (**)(void))(*(_DWORD *)v38 + 4))();
      *((_DWORD *)v12 + 2) = 0;
      v12 = (ItemInstance *)((char *)v12 + 72);
    while ( v11 != v12 );
    v11 = v44;
  if ( v11 )
    operator delete((void *)v11);
  return v5;
}


signed int __fastcall RepairItemRecipe::matches(RepairItemRecipe *this, CraftingContainer *a2, Level *a3)
{
  ItemInstance *v3; // r9@1
  CraftingContainer *v4; // r5@1
  int v5; // r4@1
  int v6; // r7@1
  int v7; // r0@4
  int v8; // r6@4
  int v9; // r0@4
  bool v10; // zf@4
  signed int v11; // r5@17
  void *v12; // r0@21
  void *v13; // r0@23
  int v14; // r0@25
  ItemInstance *v16; // [sp+4h] [bp-2Ch]@1
  ItemInstance *v17; // [sp+8h] [bp-28h]@1
  ItemInstance *v18; // [sp+Ch] [bp-24h]@1

  v3 = 0;
  v4 = a2;
  v5 = 0;
  v6 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  while ( v6 < (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v4 + 44))(v4) )
  {
    v7 = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)v4 + 16))(v4, v6);
    v8 = v7;
    v9 = *(_BYTE *)(v7 + 15);
    v10 = v9 == 0;
    if ( v9 )
      v10 = *(_DWORD *)v8 == 0;
    if ( !v10 && !ItemInstance::isNull((ItemInstance *)v8) && *(_BYTE *)(v8 + 14) )
    {
      if ( v3 == v18 )
      {
        std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
          (unsigned __int64 *)&v16,
          v8);
        v3 = v17;
        v5 = (int)v16;
      }
      else
        ItemInstance::ItemInstance(v3, v8);
        v3 = (ItemInstance *)((char *)v3 + 72);
        v17 = v3;
      if ( (unsigned int)(954437177 * (((signed int)v3 - v5) >> 3)) >= 2 )
        if ( *(_DWORD *)v8 != *(_DWORD *)v5 )
        {
          v11 = 0;
          goto LABEL_20;
        }
        if ( *(_BYTE *)(v5 + 14) != 1 )
        if ( *(_BYTE *)(v8 + 14) != 1 )
        if ( (*(int (**)(void))(**(_DWORD **)v8 + 64))() != 1 )
    }
    ++v6;
  }
  v11 = 0;
  if ( (ItemInstance *)((char *)v3 - v5) == (ItemInstance *)144 )
    v11 = 1;
LABEL_20:
  if ( (ItemInstance *)v5 != v3 )
    do
      v12 = *(void **)(v5 + 52);
      if ( v12 )
        operator delete(v12);
      v13 = *(void **)(v5 + 36);
      if ( v13 )
        operator delete(v13);
      v14 = *(_DWORD *)(v5 + 8);
      if ( v14 )
        (*(void (**)(void))(*(_DWORD *)v14 + 4))();
      *(_DWORD *)(v5 + 8) = 0;
      v5 += 72;
    while ( v3 != (ItemInstance *)v5 );
    v3 = v16;
  if ( v3 )
    operator delete((void *)v3);
  return v11;
}


signed int __fastcall RepairItemRecipe::size(RepairItemRecipe *this)
{
  return 4;
}


Recipe *__fastcall RepairItemRecipe::~RepairItemRecipe(RepairItemRecipe *this)
{
  RepairItemRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_2701350;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 68);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 72;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 17);
  }
  if ( v2 )
    operator delete((void *)v2);
  return j_j_j__ZN6RecipeD2Ev_0(v1);
}


void __fastcall RepairItemRecipe::~RepairItemRecipe(RepairItemRecipe *this)
{
  RepairItemRecipe::~RepairItemRecipe(this);
}


_DWORD *__fastcall RepairItemRecipe::RepairItemRecipe(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1
  int v3; // r5@1
  _DWORD *v4; // r0@1
  int v5; // r1@2
  int v6; // r2@2
  int v7; // r3@2
  int v8; // r5@2
  _DWORD *result; // r0@2
  int v10; // r3@3
  __int64 v11; // kr00_8@3

  v2 = a1;
  v3 = a2;
  *a1 = &off_2701314;
  ItemPack::ItemPack((int)(a1 + 1));
  v2[11] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[8] = 0;
  v4 = v2 + 8;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  *v2 = &off_2701350;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  if ( v3 )
  {
    v5 = *(_DWORD *)v3;
    v6 = *(_DWORD *)(v3 + 4);
    v7 = *(_DWORD *)(v3 + 8);
    v8 = *(_DWORD *)(v3 + 12);
    *v4 = v5;
    v2[9] = v6;
    v2[10] = v7;
    v2[11] = v8;
    result = v2;
  }
  else
    v10 = unk_2805894;
    v11 = qword_2805898;
    *v4 = RepairItemRecipe::ID;
    v2[9] = v10;
    *((_QWORD *)v2 + 5) = v11;
  return result;
}
