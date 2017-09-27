

Recipe *__fastcall MapCloningRecipe::~MapCloningRecipe(MapCloningRecipe *this)
{
  MapCloningRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_2701260;
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


signed int __fastcall MapCloningRecipe::size(MapCloningRecipe *this)
{
  return 9;
}


_DWORD *__fastcall MapCloningRecipe::MapCloningRecipe(_DWORD *a1)
{
  _DWORD *v1; // r4@1
  int v2; // r12@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // kr04_4@1

  v1 = a1;
  *a1 = &off_2701314;
  ItemPack::ItemPack((int)(a1 + 1));
  v2 = (int)(v1 + 8);
  v1[10] = 0;
  v1[11] = 0;
  v1[8] = 0;
  v1[9] = 0;
  v1[14] = 0;
  v1[15] = 0;
  v1[16] = 0;
  *v1 = &off_2701260;
  v1[17] = 0;
  v1[18] = 0;
  v1[19] = 0;
  v3 = unk_28053E4;
  v5 = HIDWORD(qword_28053E8);
  v4 = qword_28053E8;
  *(_DWORD *)v2 = MapCloningRecipe::ID;
  *(_DWORD *)(v2 + 4) = v3;
  *(_DWORD *)(v2 + 8) = v4;
  v1[11] = v5;
  return v1;
}


char *__fastcall MapCloningRecipe::getResultItem(MapCloningRecipe *this)
{
  return (char *)this + 68;
}


void __fastcall MapCloningRecipe::~MapCloningRecipe(MapCloningRecipe *this)
{
  MapCloningRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_2701260;
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


void __fastcall MapCloningRecipe::~MapCloningRecipe(MapCloningRecipe *this)
{
  MapCloningRecipe::~MapCloningRecipe(this);
}


MapCloningRecipe *__fastcall MapCloningRecipe::assemble(MapCloningRecipe *this, CraftingContainer *a2)
{
  MapCloningRecipe *v2; // r9@1
  CraftingContainer *v3; // r6@1
  int v4; // r8@1
  int v5; // r5@1
  int v6; // r4@2
  void *v7; // r0@3
  void *v8; // r0@5
  int v9; // r0@7
  signed int v10; // r4@10
  int i; // r7@10
  int v12; // r0@13
  int v13; // r5@13
  int v14; // r0@13
  bool v15; // zf@13
  bool v16; // zf@22
  __int64 v17; // r0@25
  bool v18; // zf@29
  int v19; // r5@35
  int v20; // r0@35
  int *v21; // r0@35
  __int64 v22; // r0@37
  int v24; // [sp+4h] [bp-BCh]@35
  char v25; // [sp+8h] [bp-B8h]@35
  int v26; // [sp+10h] [bp-B0h]@44
  void *v27; // [sp+2Ch] [bp-94h]@42
  void *v28; // [sp+3Ch] [bp-84h]@40
  int v29; // [sp+50h] [bp-70h]@1
  int v30; // [sp+58h] [bp-68h]@50
  char v31; // [sp+5Eh] [bp-62h]@25
  char v32; // [sp+5Fh] [bp-61h]@22
  void *v33; // [sp+74h] [bp-4Ch]@48
  void *ptr; // [sp+84h] [bp-3Ch]@46

  v2 = this;
  v3 = a2;
  ItemInstance::ItemInstance((int)&v29);
  v4 = *((_DWORD *)v2 + 17);
  v5 = *((_DWORD *)v2 + 18);
  if ( v5 != v4 )
  {
    v6 = *((_DWORD *)v2 + 17);
    do
    {
      v7 = *(void **)(v6 + 52);
      if ( v7 )
        operator delete(v7);
      v8 = *(void **)(v6 + 36);
      if ( v8 )
        operator delete(v8);
      v9 = *(_DWORD *)(v6 + 8);
      if ( v9 )
        (*(void (**)(void))(*(_DWORD *)v9 + 4))();
      *(_DWORD *)(v6 + 8) = 0;
      v6 += 72;
    }
    while ( v5 != v6 );
  }
  v10 = 0;
  *((_DWORD *)v2 + 18) = v4;
  for ( i = 0; i < (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v3 + 44))(v3); ++i )
    v12 = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)v3 + 16))(v3, i);
    v13 = v12;
    v14 = *(_BYTE *)(v12 + 15);
    v15 = v14 == 0;
    if ( v14 )
      v15 = *(_DWORD *)v13 == 0;
    if ( !v15 && !ItemInstance::isNull((ItemInstance *)v13) && *(_BYTE *)(v13 + 14) )
      if ( *(_DWORD *)v13 == Item::mFilledMap )
      {
        v16 = v32 == 0;
        if ( v32 )
          v16 = v29 == 0;
        if ( !v16 )
        {
          v17 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v29);
          if ( !v31 )
            HIDWORD(v17) = 1;
          if ( !v17 )
            goto LABEL_46;
        }
        ItemInstance::operator=((int)&v29, v13);
      }
      else
        if ( *(_DWORD *)v13 != Item::mEmptyMap )
          goto LABEL_46;
        ++v10;
  v18 = v32 == 0;
  if ( v32 )
    v18 = v29 == 0;
  if ( !v18 && !ItemInstance::isNull((ItemInstance *)&v29) && v10 >= 1 && v31 )
    v19 = Item::mFilledMap;
    v20 = ItemInstance::getAuxValue((ItemInstance *)&v29);
    ItemInstance::ItemInstance((ItemInstance *)&v25, v19, v10 + 1, v20);
    v21 = (int *)ItemInstance::getUserData((ItemInstance *)&v29);
    CompoundTag::clone((CompoundTag *)&v24, *v21);
    ItemInstance::setUserData((int)&v25, &v24);
    if ( v24 )
      (*(void (**)(void))(*(_DWORD *)v24 + 4))();
    v24 = 0;
    v22 = *((_QWORD *)v2 + 9);
    if ( (_DWORD)v22 == HIDWORD(v22) )
      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
        (unsigned __int64 *)((char *)v2 + 68),
        (int)&v25);
    else
      ItemInstance::ItemInstance((ItemInstance *)v22, (int)&v25);
      *((_DWORD *)v2 + 18) += 72;
    if ( v28 )
      operator delete(v28);
    if ( v27 )
      operator delete(v27);
    if ( v26 )
      (*(void (**)(void))(*(_DWORD *)v26 + 4))();
LABEL_46:
  if ( ptr )
    operator delete(ptr);
  if ( v33 )
    operator delete(v33);
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return (MapCloningRecipe *)((char *)v2 + 68);
}


_DWORD *__fastcall MapCloningRecipe::MapCloningRecipe(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1
  int v3; // r5@1
  int v4; // r12@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1

  v2 = a1;
  v3 = a2;
  *a1 = &off_2701314;
  ItemPack::ItemPack((int)(a1 + 1));
  v2[10] = 0;
  v2[11] = 0;
  v4 = (int)(v2 + 8);
  v2[8] = 0;
  v2[9] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  *v2 = &off_2701260;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v5 = *(_DWORD *)(v3 + 4);
  v6 = *(_DWORD *)(v3 + 8);
  v7 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)v4 = *(_DWORD *)v3;
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  return v2;
}


signed int __fastcall MapCloningRecipe::getCraftingSize(MapCloningRecipe *this)
{
  return 1;
}


void *__fastcall MapCloningRecipe::getIngredient(MapCloningRecipe *this, int a2, int a3)
{
  return &ItemInstance::EMPTY_ITEM;
}


int __fastcall MapCloningRecipe::matches(MapCloningRecipe *this, CraftingContainer *a2, Level *a3)
{
  CraftingContainer *v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r9@1
  int v7; // r0@4
  int v8; // r7@4
  int v9; // r0@4
  bool v10; // zf@4
  bool v11; // zf@13
  __int64 v12; // r0@16
  signed int v13; // r4@20
  signed int v14; // r0@21
  int v16; // [sp+0h] [bp-70h]@1
  int v17; // [sp+8h] [bp-68h]@34
  unsigned __int8 v18; // [sp+Eh] [bp-62h]@16
  char v19; // [sp+Fh] [bp-61h]@13
  void *v20; // [sp+24h] [bp-4Ch]@32
  void *ptr; // [sp+34h] [bp-3Ch]@30

  v3 = a2;
  ItemInstance::ItemInstance((int)&v16);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  while ( v4 < (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v3 + 44))(v3) )
  {
    v7 = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)v3 + 16))(v3, v4);
    v8 = v7;
    v9 = *(_BYTE *)(v7 + 15);
    v10 = v9 == 0;
    if ( v9 )
      v10 = *(_DWORD *)v8 == 0;
    if ( !v10 && !ItemInstance::isNull((ItemInstance *)v8) && *(_BYTE *)(v8 + 14) )
    {
      if ( *(_DWORD *)v8 == Item::mFilledMap )
      {
        v11 = v19 == 0;
        if ( v19 )
          v11 = v16 == 0;
        if ( !v11 )
        {
          v12 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v16);
          if ( !v18 )
            HIDWORD(v12) = 1;
          if ( !v12 )
            goto LABEL_30;
        }
        ItemInstance::operator=((int)&v16, v8);
      }
      else
        if ( *(_DWORD *)v8 != Item::mEmptyMap )
          v6 = 0;
          goto LABEL_30;
        ++v5;
    }
    ++v4;
  }
  v13 = 0;
  if ( v19 )
    v14 = 0;
    if ( v16 )
      if ( ItemInstance::isNull((ItemInstance *)&v16) )
        v14 = 0;
        v14 = v18;
        if ( v18 )
          v14 = 1;
  else
  if ( v5 > 0 )
    v13 = 1;
  v6 = v13 & v14;
LABEL_30:
  if ( ptr )
    operator delete(ptr);
  if ( v20 )
    operator delete(v20);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  return v6;
}
