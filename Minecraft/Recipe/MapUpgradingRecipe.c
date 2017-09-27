

_DWORD *__fastcall MapUpgradingRecipe::MapUpgradingRecipe(_DWORD *a1, int a2)
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
  *v2 = &off_27012D8;
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


void __fastcall MapUpgradingRecipe::~MapUpgradingRecipe(MapUpgradingRecipe *this)
{
  MapUpgradingRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_27012D8;
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


int __fastcall MapUpgradingRecipe::getCraftingSize(MapUpgradingRecipe *this)
{
  return 0;
}


signed int __fastcall MapUpgradingRecipe::matches(MapUpgradingRecipe *this, CraftingContainer *a2, Level *a3)
{
  CraftingContainer *v3; // r5@1
  int i; // r6@1
  int v5; // r0@4
  int v6; // r4@4
  int v7; // r0@4
  bool v8; // zf@4
  int v9; // r0@9
  bool v10; // zf@9
  bool v11; // zf@13
  __int64 v12; // r0@16
  bool v13; // zf@22
  __int64 v14; // r0@25
  signed int v15; // r4@32
  bool v16; // zf@33
  __int64 v17; // r0@36
  bool v18; // zf@39
  __int64 v19; // r0@42
  int v20; // r1@45
  const ItemInstance *v21; // r1@45
  Level *v23; // [sp+4h] [bp-C4h]@1
  __int64 v24; // [sp+8h] [bp-C0h]@45
  int v25; // [sp+10h] [bp-B8h]@1
  int v26; // [sp+18h] [bp-B0h]@55
  char v27; // [sp+1Eh] [bp-AAh]@25
  char v28; // [sp+1Fh] [bp-A9h]@22
  void *v29; // [sp+34h] [bp-94h]@53
  void *ptr; // [sp+44h] [bp-84h]@51
  int v31; // [sp+58h] [bp-70h]@1
  int v32; // [sp+60h] [bp-68h]@61
  char v33; // [sp+66h] [bp-62h]@16
  char v34; // [sp+67h] [bp-61h]@13
  void *v35; // [sp+7Ch] [bp-4Ch]@59
  void *v36; // [sp+8Ch] [bp-3Ch]@57

  v23 = a3;
  v3 = a2;
  ItemInstance::ItemInstance((int)&v31);
  ItemInstance::ItemInstance((int)&v25);
  for ( i = 0; i < (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v3 + 44))(v3); ++i )
  {
    v5 = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)v3 + 16))(v3, i);
    v6 = v5;
    v7 = *(_BYTE *)(v5 + 15);
    v8 = v7 == 0;
    if ( v7 )
      v8 = *(_DWORD *)v6 == 0;
    if ( !v8 && !ItemInstance::isNull((ItemInstance *)v6) && *(_BYTE *)(v6 + 14) )
    {
      v9 = *(_DWORD *)v6;
      v10 = *(_DWORD *)v6 == Item::mFilledMap;
      if ( *(_DWORD *)v6 != Item::mFilledMap )
        v10 = v9 == Item::mEmptyMap;
      if ( v10 )
      {
        v11 = v34 == 0;
        if ( v34 )
          v11 = v31 == 0;
        if ( v11 )
          goto LABEL_66;
        v12 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v31);
        if ( !v33 )
          HIDWORD(v12) = 1;
        if ( v12 )
        {
LABEL_66:
          ItemInstance::operator=((int)&v31, v6);
          continue;
        }
        v9 = *(_DWORD *)v6;
      }
      if ( v9 == Item::mCompass )
        v13 = v28 == 0;
        if ( v28 )
          v13 = v25 == 0;
        if ( v13 )
          goto LABEL_67;
        v14 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v25);
        if ( !v27 )
          HIDWORD(v14) = 1;
        if ( v14 )
LABEL_67:
          ItemInstance::operator=((int)&v25, v6);
      if ( v9 )
        v15 = 0;
        goto LABEL_51;
      if ( *(_DWORD *)(v6 + 4) )
    }
  }
  v15 = 0;
  v16 = v34 == 0;
  if ( v34 )
    v16 = v31 == 0;
  if ( !v16 )
    v17 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v31);
    v15 = 0;
    if ( !v33 )
      HIDWORD(v17) = 1;
    if ( !v17 )
      v18 = v28 == 0;
      if ( v28 )
        v18 = v25 == 0;
      if ( !v18 )
        v19 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v25);
          HIDWORD(v19) = 1;
        if ( !v19 )
          MapItem::getMapId((MapItem *)&v24, (const ItemInstance *)&v31);
          if ( Level::getMapSavedData((int)v23, v20, v24) )
          {
            v15 = !MapItem::doesDisplayPlayerMarkers((MapItem *)&v31, v21);
          }
          else
            v15 = 0;
            if ( v31 == Item::mEmptyMap )
              v15 = 1;
LABEL_51:
  if ( ptr )
    operator delete(ptr);
  if ( v29 )
    operator delete(v29);
  if ( v26 )
    (*(void (**)(void))(*(_DWORD *)v26 + 4))();
  if ( v36 )
    operator delete(v36);
  if ( v35 )
    operator delete(v35);
  if ( v32 )
    (*(void (**)(void))(*(_DWORD *)v32 + 4))();
  return v15;
}


Recipe *__fastcall MapUpgradingRecipe::~MapUpgradingRecipe(MapUpgradingRecipe *this)
{
  MapUpgradingRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_27012D8;
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


MapUpgradingRecipe *__fastcall MapUpgradingRecipe::assemble(MapUpgradingRecipe *this, CraftingContainer *a2)
{
  MapUpgradingRecipe *v2; // r8@1
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
  int v14; // r4@19
  int v15; // r0@19
  bool v16; // zf@19
  __int64 v17; // r0@26
  ItemInstance *v18; // r1@28
  __int64 v19; // r0@28
  int v20; // r0@35
  int v22; // [sp+0h] [bp-100h]@26
  int v23; // [sp+8h] [bp-F8h]@41
  void *v24; // [sp+24h] [bp-DCh]@39
  void *v25; // [sp+34h] [bp-CCh]@37
  char v26; // [sp+48h] [bp-B8h]@28
  int v27; // [sp+50h] [bp-B0h]@35
  void *v28; // [sp+6Ch] [bp-94h]@33
  void *ptr; // [sp+7Ch] [bp-84h]@31
  int v30; // [sp+90h] [bp-70h]@1
  int v31; // [sp+98h] [bp-68h]@48
  char v32; // [sp+9Eh] [bp-62h]@16
  char v33; // [sp+9Fh] [bp-61h]@13
  void *v34; // [sp+B4h] [bp-4Ch]@46
  void *v35; // [sp+C4h] [bp-3Ch]@44

  v2 = this;
  v3 = a2;
  ItemInstance::ItemInstance((int)&v30);
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
    v11 = v33 == 0;
    if ( v33 )
      v11 = v30 == 0;
    if ( !v11 )
      v12 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v30);
      if ( !v32 )
        HIDWORD(v12) = 1;
      if ( !v12 )
        break;
    v13 = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)v3 + 16))(v3, i);
    v14 = v13;
    v15 = *(_BYTE *)(v13 + 15);
    v16 = v15 == 0;
    if ( v15 )
      v16 = *(_DWORD *)v14 == 0;
    if ( !v16 && !ItemInstance::isNull((ItemInstance *)v14) && *(_BYTE *)(v14 + 14) )
      if ( *(_DWORD *)v14 == Item::mFilledMap )
      {
        ItemInstance::operator=((int)&v30, v14);
        ItemInstance::ItemInstance((ItemInstance *)&v26, (int)&v30);
        ItemInstance::set((ItemInstance *)&v26, 1);
        EmptyMapItem::addPlayerMarker((EmptyMapItem *)&v26, v18);
        v19 = *((_QWORD *)v2 + 9);
        if ( (_DWORD)v19 == HIDWORD(v19) )
        {
          std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
            (unsigned __int64 *)((char *)v2 + 68),
            (int)&v26);
        }
        else
          ItemInstance::ItemInstance((ItemInstance *)v19, (int)&v26);
          *((_DWORD *)v2 + 18) += 72;
        if ( ptr )
          operator delete(ptr);
        if ( v28 )
          operator delete(v28);
        v20 = v27;
        goto LABEL_42;
      }
      if ( *(_DWORD *)v14 == Item::mEmptyMap )
        ItemInstance::ItemInstance((ItemInstance *)&v22, *(_WORD *)(Item::mEmptyMap + 18), 1, 2);
        ItemInstance::set((ItemInstance *)&v22, 1);
        v17 = *((_QWORD *)v2 + 9);
        if ( (_DWORD)v17 == HIDWORD(v17) )
            (int)&v22);
          ItemInstance::ItemInstance((ItemInstance *)v17, (int)&v22);
        if ( v25 )
          operator delete(v25);
        if ( v24 )
          operator delete(v24);
        v20 = v23;
LABEL_42:
        if ( v20 )
          (*(void (**)(void))(*(_DWORD *)v20 + 4))();
  if ( v35 )
    operator delete(v35);
  if ( v34 )
    operator delete(v34);
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  return (MapUpgradingRecipe *)((char *)v2 + 68);
}


_DWORD *__fastcall MapUpgradingRecipe::MapUpgradingRecipe(_DWORD *a1)
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
  *v1 = &off_27012D8;
  v1[17] = 0;
  v1[18] = 0;
  v1[19] = 0;
  v3 = unk_2805604;
  v5 = HIDWORD(qword_2805608);
  v4 = qword_2805608;
  *(_DWORD *)v2 = MapUpgradingRecipe::ID;
  *(_DWORD *)(v2 + 4) = v3;
  *(_DWORD *)(v2 + 8) = v4;
  v1[11] = v5;
  return v1;
}


char *__fastcall MapUpgradingRecipe::getResultItem(MapUpgradingRecipe *this)
{
  return (char *)this + 68;
}


void *__fastcall MapUpgradingRecipe::getIngredient(MapUpgradingRecipe *this, int a2, int a3)
{
  return &ItemInstance::EMPTY_ITEM;
}


void __fastcall MapUpgradingRecipe::~MapUpgradingRecipe(MapUpgradingRecipe *this)
{
  MapUpgradingRecipe::~MapUpgradingRecipe(this);
}


signed int __fastcall MapUpgradingRecipe::size(MapUpgradingRecipe *this)
{
  return 9;
}
