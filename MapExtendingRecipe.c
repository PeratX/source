

MapItemSavedData *__fastcall MapExtendingRecipe::_updateMapInstance(MapExtendingRecipe *this, ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  MapExtendingRecipe *v3; // r5@1
  void *v4; // r6@2
  MapItemSavedData *v5; // r6@5
  int v6; // r7@5
  int v7; // r1@5
  MapItemSavedData *result; // r0@5
  int v9; // r7@6
  int *v10; // r0@6
  int v11; // r0@6
  int *v12; // r0@6
  int *v13; // r0@6
  __int64 v14; // [sp+8h] [bp-30h]@6
  int v15; // [sp+10h] [bp-28h]@6
  int v16; // [sp+14h] [bp-24h]@6
  __int64 v17; // [sp+18h] [bp-20h]@5
  void *v18; // [sp+20h] [bp-18h]@2

  v2 = a2;
  v3 = this;
  if ( !ItemInstance::hasUserData(a2) )
  {
    v4 = operator new(0x1Cu);
    CompoundTag::CompoundTag((int)v4);
    v18 = v4;
    ItemInstance::setUserData((int)v2, (int *)&v18);
    if ( v18 )
      (*(void (**)(void))(*(_DWORD *)v18 + 4))();
    v18 = 0;
  }
  v5 = Level::getMapSavedData(*((Level **)v3 + 20), v2);
  v6 = *((_DWORD *)v3 + 20);
  MapItemSavedData::getParentMapId((MapItemSavedData *)&v17, (int)v5);
  result = Level::getMapSavedData(v6, v7, v17);
  if ( result )
    v9 = *((_DWORD *)v3 + 20);
    MapItemSavedData::getMapId((MapItemSavedData *)&v14, v5);
    v10 = (int *)ItemInstance::getUserData(v2);
    v11 = CompoundTag::getBoolean(*v10, (const void **)&MapItem::TAG_MAP_INIT);
    Level::expandMapByID((int)&v15, v9, v14, v11);
    v12 = (int *)ItemInstance::getUserData(v2);
    CompoundTag::putInt64(*v12, (const void **)&MapItem::TAG_MAP_UUID, v15, v16);
    v13 = (int *)ItemInstance::getUserData(v2);
    result = (MapItemSavedData *)CompoundTag::putBoolean(*v13, (const void **)&MapItem::TAG_MAP_INIT, 1);
  return result;
}


Recipe *__fastcall MapExtendingRecipe::~MapExtendingRecipe(MapExtendingRecipe *this)
{
  MapExtendingRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_270129C;
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


char *__fastcall MapExtendingRecipe::getResultItem(MapExtendingRecipe *this)
{
  return (char *)this + 68;
}


void *__fastcall MapExtendingRecipe::getIngredient(MapExtendingRecipe *this, int a2, int a3)
{
  return &ItemInstance::EMPTY_ITEM;
}


_DWORD *__fastcall MapExtendingRecipe::MapExtendingRecipe(_DWORD *a1, int a2)
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
  *v2 = &off_270129C;
  v2[19] = 0;
  v2[20] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v5 = *(_DWORD *)(v3 + 4);
  v6 = *(_DWORD *)(v3 + 8);
  v7 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)v4 = *(_DWORD *)v3;
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  return v2;
}


signed int __fastcall MapExtendingRecipe::size(MapExtendingRecipe *this)
{
  return 9;
}


signed int __fastcall MapExtendingRecipe::getCraftingSize(MapExtendingRecipe *this)
{
  return 1;
}


void __fastcall MapExtendingRecipe::~MapExtendingRecipe(MapExtendingRecipe *this)
{
  MapExtendingRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_270129C;
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


int __fastcall MapExtendingRecipe::setLevel(int result, Level *a2)
{
  *(_DWORD *)(result + 80) = a2;
  return result;
}


MapExtendingRecipe *__fastcall MapExtendingRecipe::assemble(MapExtendingRecipe *this, CraftingContainer *a2)
{
  MapExtendingRecipe *v2; // r9@1
  CraftingContainer *v3; // r6@1
  int v4; // r10@1
  int v5; // r5@1
  int v6; // r4@2
  void *v7; // r0@3
  void *v8; // r0@5
  int v9; // r0@7
  int i; // r7@10
  bool v11; // zf@13
  __int64 v12; // r0@16
  int v13; // r0@19
  int v14; // r5@19
  int v15; // r0@19
  bool v16; // zf@19
  void *v17; // r5@27
  __int64 v18; // r0@30
  void *v20; // [sp+4h] [bp-B4h]@27
  char v21; // [sp+8h] [bp-B0h]@26
  int v22; // [sp+10h] [bp-A8h]@37
  void *v23; // [sp+2Ch] [bp-8Ch]@35
  void *v24; // [sp+3Ch] [bp-7Ch]@33
  int v25; // [sp+50h] [bp-68h]@1
  int v26; // [sp+58h] [bp-60h]@43
  char v27; // [sp+5Eh] [bp-5Ah]@16
  char v28; // [sp+5Fh] [bp-59h]@13
  void *v29; // [sp+74h] [bp-44h]@41
  void *ptr; // [sp+84h] [bp-34h]@39

  v2 = this;
  v3 = a2;
  ItemInstance::ItemInstance((int)&v25);
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
  *((_DWORD *)v2 + 18) = v4;
  for ( i = 0; i < (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v3 + 44))(v3); ++i )
    v11 = v28 == 0;
    if ( v28 )
      v11 = v25 == 0;
    if ( !v11 )
      v12 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v25);
      if ( !v27 )
        HIDWORD(v12) = 1;
      if ( !v12 )
        break;
    v13 = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)v3 + 16))(v3, i);
    v14 = v13;
    v15 = *(_BYTE *)(v13 + 15);
    v16 = v15 == 0;
    if ( v15 )
      v16 = *(_DWORD *)v14 == 0;
    if ( !v16
      && !ItemInstance::isNull((ItemInstance *)v14)
      && *(_BYTE *)(v14 + 14)
      && *(_DWORD *)v14 == Item::mFilledMap )
      ItemInstance::operator=((int)&v25, v14);
  ItemInstance::ItemInstance((ItemInstance *)&v21, (int)&v25);
  ItemInstance::set((ItemInstance *)&v21, 1);
  if ( !ItemInstance::hasUserData((ItemInstance *)&v21) )
    v17 = operator new(0x1Cu);
    CompoundTag::CompoundTag((int)v17);
    v20 = v17;
    ItemInstance::setUserData((int)&v21, (int *)&v20);
    if ( v20 )
      (*(void (**)(void))(*(_DWORD *)v20 + 4))();
    v20 = 0;
  MapExtendingRecipe::_updateMapInstance(v2, (ItemInstance *)&v21);
  v18 = *((_QWORD *)v2 + 9);
  if ( (_DWORD)v18 == HIDWORD(v18) )
    std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
      (unsigned __int64 *)((char *)v2 + 68),
      (int)&v21);
  else
    ItemInstance::ItemInstance((ItemInstance *)v18, (int)&v21);
    *((_DWORD *)v2 + 18) += 72;
  if ( v24 )
    operator delete(v24);
  if ( v23 )
    operator delete(v23);
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  if ( ptr )
    operator delete(ptr);
  if ( v29 )
    operator delete(v29);
  if ( v26 )
    (*(void (**)(void))(*(_DWORD *)v26 + 4))();
  return (MapExtendingRecipe *)((char *)v2 + 68);
}


void __fastcall MapExtendingRecipe::~MapExtendingRecipe(MapExtendingRecipe *this)
{
  MapExtendingRecipe::~MapExtendingRecipe(this);
}


int __fastcall MapExtendingRecipe::matches(MapExtendingRecipe *this, CraftingContainer *a2, Level *a3)
{
  MapExtendingRecipe *v3; // r9@1
  CraftingContainer *v4; // r6@1
  int v5; // r4@1
  signed int v6; // r7@1
  int v7; // r5@4
  int v8; // r0@8
  bool v9; // zf@8
  int v10; // r4@17
  int v11; // r1@29
  MapItemSavedData *v12; // r0@29
  signed int v13; // r1@29
  signed int v14; // r2@29
  Level *v16; // [sp+4h] [bp-7Ch]@1
  __int64 v17; // [sp+8h] [bp-78h]@29
  int v18; // [sp+10h] [bp-70h]@1
  int v19; // [sp+18h] [bp-68h]@38
  char v20; // [sp+1Eh] [bp-62h]@19
  char v21; // [sp+1Fh] [bp-61h]@15
  void *v22; // [sp+34h] [bp-4Ch]@36
  void *ptr; // [sp+44h] [bp-3Ch]@34

  v3 = this;
  v16 = a3;
  v4 = a2;
  ItemInstance::ItemInstance((int)&v18);
  v5 = 0;
  v6 = 0;
  while ( v5 < (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v4 + 44))(v4) )
  {
    v7 = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)v4 + 16))(v4, v5);
    if ( !*(_BYTE *)(v7 + 15) )
    {
      v10 = 0;
      goto LABEL_34;
    }
    if ( !*(_DWORD *)v7 )
    if ( ItemInstance::isNull((ItemInstance *)v7) )
    if ( !*(_BYTE *)(v7 + 14) )
    v8 = *(_DWORD *)v7;
    v9 = v5 == 4;
    if ( v5 == 4 )
      v9 = v8 == Item::mFilledMap;
    if ( v9 )
      ItemInstance::operator=((int)&v18, v7);
    else
      if ( v8 != Item::mPaper )
      {
        v10 = 0;
        goto LABEL_34;
      }
      ++v6;
    ++v5;
  }
  if ( v21 )
    if ( v18 )
      if ( !ItemInstance::isNull((ItemInstance *)&v18) && v6 >= 8 && v20 )
        if ( ItemInstance::getAuxValue((ItemInstance *)&v18) <= 2 )
        {
          MapItem::getMapId((MapItem *)&v17, (const ItemInstance *)&v18);
          v12 = Level::getMapSavedData((int)v16, v11, v17);
          v13 = 0;
          v14 = 0;
          if ( v12 )
          {
            *((_DWORD *)v3 + 20) = v16;
            if ( (signed int)*((_BYTE *)v12 + 36) < 4 )
              v13 = 1;
            v14 = v13;
            v13 = 1;
          }
          v10 = v13 & v14;
        }
        else
          v10 = 0;
  else
    v10 = 0;
LABEL_34:
  if ( ptr )
    operator delete(ptr);
  if ( v22 )
    operator delete(v22);
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  return v10;
}


_DWORD *__fastcall MapExtendingRecipe::MapExtendingRecipe(_DWORD *a1)
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
  *v1 = &off_270129C;
  v1[19] = 0;
  v1[20] = 0;
  v1[17] = 0;
  v1[18] = 0;
  v3 = unk_28054F4;
  v5 = HIDWORD(qword_28054F8);
  v4 = qword_28054F8;
  *(_DWORD *)v2 = MapExtendingRecipe::ID;
  *(_DWORD *)(v2 + 4) = v3;
  *(_DWORD *)(v2 + 8) = v4;
  v1[11] = v5;
  return v1;
}
