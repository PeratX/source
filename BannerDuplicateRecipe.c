

void *__fastcall BannerDuplicateRecipe::getIngredient(BannerDuplicateRecipe *this, int a2, int a3)
{
  return &ItemInstance::EMPTY_ITEM;
}


_DWORD *__fastcall BannerDuplicateRecipe::BannerDuplicateRecipe(_DWORD *a1)
{
  _DWORD *v1; // r4@1
  int v2; // r12@1
  int v3; // r2@1
  __int64 v4; // kr00_8@1
  _DWORD *result; // r0@1

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
  *v1 = &off_2701170;
  v1[17] = 0;
  v1[18] = 0;
  v1[19] = 0;
  v3 = unk_2805084;
  v4 = qword_2805088;
  *(_DWORD *)v2 = BannerDuplicateRecipe::ID;
  *(_DWORD *)(v2 + 4) = v3;
  *(_DWORD *)(v2 + 8) = v4;
  result = v1;
  v1[11] = HIDWORD(v4);
  return result;
}


int __fastcall BannerDuplicateRecipe::matches(BannerDuplicateRecipe *this, CraftingContainer *a2, Level *a3)
{
  CraftingContainer *v3; // r4@1
  int i; // r5@1
  int v5; // r0@4
  signed int v6; // r7@4
  bool v7; // zf@4
  __int64 v8; // r0@7
  const ItemInstance *v9; // r1@23
  int v10; // r10@25
  const ItemInstance *v11; // r1@25
  signed int v12; // r7@25
  const ItemInstance *v13; // r1@25
  const ItemInstance *v14; // r1@26
  int v15; // r4@22
  int v17; // [sp+0h] [bp-100h]@4
  int v18; // [sp+8h] [bp-F8h]@19
  char v19; // [sp+Eh] [bp-F2h]@7
  char v20; // [sp+Fh] [bp-F1h]@4
  void *v21; // [sp+24h] [bp-DCh]@17
  void *ptr; // [sp+34h] [bp-CCh]@15
  char v23; // [sp+48h] [bp-B8h]@1
  int v24; // [sp+50h] [bp-B0h]@49
  void *v25; // [sp+6Ch] [bp-94h]@47
  void *v26; // [sp+7Ch] [bp-84h]@45
  char v27; // [sp+90h] [bp-70h]@1
  int v28; // [sp+98h] [bp-68h]@55
  void *v29; // [sp+B4h] [bp-4Ch]@53
  void *v30; // [sp+C4h] [bp-3Ch]@51

  v3 = a2;
  ItemInstance::ItemInstance((int)&v27);
  ItemInstance::ItemInstance((int)&v23);
  for ( i = 0; i < (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v3 + 44))(v3); ++i )
  {
    v5 = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)v3 + 16))(v3, i);
    ItemInstance::ItemInstance((ItemInstance *)&v17, v5);
    v6 = 4;
    v7 = v20 == 0;
    if ( v20 )
      v7 = v17 == 0;
    if ( !v7 )
    {
      v8 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v17);
      if ( !v19 )
        HIDWORD(v8) = 1;
      if ( v8 )
      {
        v6 = 4;
        goto LABEL_15;
      }
      if ( !v17 )
      if ( v17 != Item::mBanner )
        v6 = 1;
      if ( !ItemInstance::isNull((ItemInstance *)&v27) && ItemInstance::isNull((ItemInstance *)&v23) != 1 )
      v10 = BannerBlockEntity::getBaseColor((BannerBlockEntity *)&v17, v9);
      v12 = BannerBlockEntity::getPatternCount((BannerBlockEntity *)&v17, v11);
      if ( ItemInstance::isNull((ItemInstance *)&v27) )
        if ( ItemInstance::isNull((ItemInstance *)&v23) )
        {
          if ( v12 < 1 )
            ItemInstance::operator=((int)&v23, (int)&v17);
          else
            ItemInstance::operator=((int)&v27, (int)&v17);
          goto LABEL_38;
        }
        if ( v12 < 1 )
          v6 = 1;
        else
          if ( v10 == BannerBlockEntity::getBaseColor((BannerBlockEntity *)&v23, v14) )
          {
LABEL_38:
            v6 = 0;
            goto LABEL_15;
          }
      else
        if ( v12 > 0 )
          goto LABEL_15;
        if ( v10 == BannerBlockEntity::getBaseColor((BannerBlockEntity *)&v27, v13) )
          ItemInstance::operator=((int)&v23, (int)&v17);
    }
LABEL_15:
    if ( ptr )
      operator delete(ptr);
    if ( v21 )
      operator delete(v21);
    if ( v18 )
      (*(void (**)(void))(*(_DWORD *)v18 + 4))();
    if ( (v6 | 4) != 4 )
      v15 = 0;
      goto LABEL_45;
  }
  if ( ItemInstance::isNull((ItemInstance *)&v27) )
    v15 = 0;
  else
    v15 = ItemInstance::isNull((ItemInstance *)&v23) ^ 1;
LABEL_45:
  if ( v26 )
    operator delete(v26);
  if ( v25 )
    operator delete(v25);
  if ( v24 )
    (*(void (**)(void))(*(_DWORD *)v24 + 4))();
  if ( v30 )
    operator delete(v30);
  if ( v29 )
    operator delete(v29);
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  return v15;
}


void __fastcall BannerDuplicateRecipe::~BannerDuplicateRecipe(BannerDuplicateRecipe *this)
{
  BannerDuplicateRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_2701170;
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


int __fastcall BannerDuplicateRecipe::getCraftingSize(BannerDuplicateRecipe *this)
{
  return 0;
}


Recipe *__fastcall BannerDuplicateRecipe::~BannerDuplicateRecipe(BannerDuplicateRecipe *this)
{
  BannerDuplicateRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_2701170;
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


signed int __fastcall BannerDuplicateRecipe::size(BannerDuplicateRecipe *this)
{
  return 2;
}


unsigned __int64 *__fastcall BannerDuplicateRecipe::assemble(BannerDuplicateRecipe *this, CraftingContainer *a2)
{
  BannerDuplicateRecipe *v2; // r10@1
  CraftingContainer *v3; // r4@1
  unsigned __int64 *v4; // r8@1
  int v5; // r9@1
  int v6; // r7@1
  int v7; // r5@2
  void *v8; // r0@3
  void *v9; // r0@5
  int v10; // r0@7
  int v11; // r7@11
  int v12; // r0@12
  bool v13; // zf@12
  __int64 v14; // r0@15
  __int64 v15; // r0@19
  int v17; // [sp+0h] [bp-B0h]@19
  int v18; // [sp+8h] [bp-A8h]@26
  void *v19; // [sp+24h] [bp-8Ch]@24
  void *ptr; // [sp+34h] [bp-7Ch]@22
  int v21; // [sp+48h] [bp-68h]@12
  int v22; // [sp+50h] [bp-60h]@32
  char v23; // [sp+56h] [bp-5Ah]@15
  char v24; // [sp+57h] [bp-59h]@12
  void *v25; // [sp+6Ch] [bp-44h]@30
  void *v26; // [sp+7Ch] [bp-34h]@28

  v2 = this;
  v3 = a2;
  v4 = (unsigned __int64 *)((char *)this + 68);
  v5 = *((_DWORD *)this + 17);
  v6 = *((_DWORD *)this + 18);
  if ( v6 != v5 )
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
  *((_DWORD *)v2 + 18) = v5;
  if ( (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v3 + 44))(v3) >= 1 )
    v11 = 0;
      v12 = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)v3 + 16))(v3, v11);
      ItemInstance::ItemInstance((ItemInstance *)&v21, v12);
      v13 = v24 == 0;
      if ( v24 )
        v13 = v21 == 0;
      if ( !v13 )
      {
        v14 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v21);
        if ( !v23 )
          HIDWORD(v14) = 1;
        if ( !v14 && BannerBlockEntity::getPatternCount((BannerBlockEntity *)&v21, 0) >= 1 )
        {
          ItemInstance::ItemInstance((ItemInstance *)&v17, (int)&v21);
          ItemInstance::set((ItemInstance *)&v17, 2);
          v15 = *((_QWORD *)v2 + 9);
          if ( (_DWORD)v15 == HIDWORD(v15) )
          {
            std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
              v4,
              (int)&v17);
          }
          else
            ItemInstance::ItemInstance((ItemInstance *)v15, (int)&v17);
            *((_DWORD *)v2 + 18) += 72;
          if ( ptr )
            operator delete(ptr);
          if ( v19 )
            operator delete(v19);
          if ( v18 )
            (*(void (**)(void))(*(_DWORD *)v18 + 4))();
        }
      }
      if ( v26 )
        operator delete(v26);
      if ( v25 )
        operator delete(v25);
      if ( v22 )
        (*(void (**)(void))(*(_DWORD *)v22 + 4))();
      ++v11;
    while ( v11 < (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v3 + 44))(v3) );
  return v4;
}


void __fastcall BannerDuplicateRecipe::~BannerDuplicateRecipe(BannerDuplicateRecipe *this)
{
  BannerDuplicateRecipe::~BannerDuplicateRecipe(this);
}


_DWORD *__fastcall BannerDuplicateRecipe::BannerDuplicateRecipe(_DWORD *a1, int a2)
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
  *v2 = &off_2701170;
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


char *__fastcall BannerDuplicateRecipe::getResultItem(BannerDuplicateRecipe *this)
{
  return (char *)this + 68;
}


int __fastcall BannerDuplicateRecipe::getRemainingItems(BannerDuplicateRecipe *this, CraftingContainer *a2, int a3)
{
  BannerDuplicateRecipe *v3; // r8@1
  int v4; // r5@1
  unsigned int v5; // r1@1
  int i; // r7@3
  int result; // r0@11
  int v8; // r0@12
  int v9; // [sp+0h] [bp-60h]@12
  int v10; // [sp+8h] [bp-58h]@8
  void *v11; // [sp+24h] [bp-3Ch]@6
  void *ptr; // [sp+34h] [bp-2Ch]@4

  v3 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v4 = a3;
  *((_DWORD *)this + 2) = 0;
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 44))(a3);
  if ( v5 )
    std::vector<ItemInstance *,std::allocator<ItemInstance *>>::_M_default_append((int)v3, v5);
  for ( i = 0; ; ++i )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 44))(v4);
    if ( i >= result )
      break;
    v8 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 16))(v4, i);
    ItemInstance::ItemInstance((ItemInstance *)&v9, v8);
    if ( !ItemInstance::isNull((ItemInstance *)&v9)
      && v9 == Item::mBanner
      && BannerBlockEntity::getPatternCount((BannerBlockEntity *)&v9, (const ItemInstance *)Item::mBanner) >= 1 )
    {
      *(_DWORD *)(*(_DWORD *)v3 + 4 * i) = &v9;
      ItemInstance::set((ItemInstance *)&v9, 1);
      if ( ptr )
        operator delete(ptr);
      if ( v11 )
        operator delete(v11);
      result = v10;
      if ( v10 )
        result = (*(int (**)(void))(*(_DWORD *)v10 + 4))();
      return result;
    }
    if ( ptr )
      operator delete(ptr);
    if ( v11 )
      operator delete(v11);
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  }
  return result;
}
