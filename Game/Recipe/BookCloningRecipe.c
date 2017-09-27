

char *__fastcall BookCloningRecipe::getResultItem(BookCloningRecipe *this)
{
  return (char *)this + 68;
}


_DWORD *__fastcall BookCloningRecipe::BookCloningRecipe(_DWORD *a1, int a2)
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
  *v2 = &off_27011E8;
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


Recipe *__fastcall BookCloningRecipe::~BookCloningRecipe(BookCloningRecipe *this)
{
  BookCloningRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_27011E8;
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


void *__fastcall BookCloningRecipe::getIngredient(BookCloningRecipe *this, int a2, int a3)
{
  return &ItemInstance::EMPTY_ITEM;
}


int __fastcall BookCloningRecipe::getCraftingSize(BookCloningRecipe *this)
{
  return 0;
}


void __fastcall BookCloningRecipe::~BookCloningRecipe(BookCloningRecipe *this)
{
  BookCloningRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_27011E8;
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


signed int __fastcall BookCloningRecipe::size(BookCloningRecipe *this)
{
  return 4;
}


int __fastcall BookCloningRecipe::matches(BookCloningRecipe *this, CraftingContainer *a2, Level *a3)
{
  CraftingContainer *v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r9@1
  int v7; // r0@4
  int v8; // r7@4
  int v9; // r0@4
  bool v10; // zf@4
  __int64 v11; // r0@9
  bool v12; // zf@13
  signed int v13; // r4@21
  signed int v14; // r0@22
  int v16; // [sp+0h] [bp-70h]@1
  int v17; // [sp+8h] [bp-68h]@35
  unsigned __int8 v18; // [sp+Eh] [bp-62h]@16
  char v19; // [sp+Fh] [bp-61h]@13
  void *v20; // [sp+24h] [bp-4Ch]@33
  void *ptr; // [sp+34h] [bp-3Ch]@31

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
      HIDWORD(v11) = Item::mWritten_book;
      if ( *(_DWORD *)v8 == Item::mWritten_book )
      {
        v12 = v19 == 0;
        if ( v19 )
          v12 = v16 == 0;
        if ( !v12 )
        {
          v11 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v16);
          if ( !v18 )
            HIDWORD(v11) = 1;
          if ( !v11 )
            goto LABEL_31;
        }
        if ( WrittenBookItem::canBeCopied((WrittenBookItem *)v8, (const ItemInstance *)HIDWORD(v11)) != 1 )
          v6 = 0;
          goto LABEL_31;
        ItemInstance::operator=((int)&v16, v8);
      }
      else
        if ( *(_DWORD *)v8 != Item::mWritable_book )
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
LABEL_31:
  if ( ptr )
    operator delete(ptr);
  if ( v20 )
    operator delete(v20);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  return v6;
}


_DWORD *__fastcall BookCloningRecipe::BookCloningRecipe(_DWORD *a1)
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
  *v1 = &off_27011E8;
  v1[17] = 0;
  v1[18] = 0;
  v1[19] = 0;
  v3 = unk_2805144;
  v5 = HIDWORD(qword_2805148);
  v4 = qword_2805148;
  *(_DWORD *)v2 = BookCloningRecipe::ID;
  *(_DWORD *)(v2 + 4) = v3;
  *(_DWORD *)(v2 + 8) = v4;
  v1[11] = v5;
  return v1;
}


BookCloningRecipe *__fastcall BookCloningRecipe::assemble(BookCloningRecipe *this, CraftingContainer *a2)
{
  BookCloningRecipe *v2; // r10@1
  CraftingContainer *v3; // r6@1
  int v4; // r8@1
  unsigned __int64 *v5; // r9@1
  int v6; // r5@1
  int v7; // r4@2
  void *v8; // r0@3
  void *v9; // r0@5
  int v10; // r0@7
  int v11; // r5@10
  int v12; // r7@10
  int v13; // r0@13
  int v14; // r4@13
  int v15; // r0@13
  bool v16; // zf@13
  __int64 v17; // r0@18
  bool v18; // zf@22
  bool v19; // zf@30
  int *v20; // r0@36
  int v21; // r4@38
  const ItemInstance *v22; // r1@38
  int v23; // r0@38
  void *v24; // r0@38
  void *v25; // r0@40
  __int64 v26; // r0@41
  __int64 v27; // r0@44
  unsigned int *v29; // r2@60
  signed int v30; // r1@62
  unsigned int *v31; // r2@68
  signed int v32; // r1@70
  int v33; // [sp+4h] [bp-CCh]@40
  int v34; // [sp+8h] [bp-C8h]@38
  int v35; // [sp+Ch] [bp-C4h]@36
  char v36; // [sp+10h] [bp-C0h]@36
  int v37; // [sp+18h] [bp-B8h]@51
  void *v38; // [sp+34h] [bp-9Ch]@49
  void *v39; // [sp+44h] [bp-8Ch]@47
  int v40; // [sp+58h] [bp-78h]@1
  int v41; // [sp+60h] [bp-70h]@57
  char v42; // [sp+66h] [bp-6Ah]@25
  char v43; // [sp+67h] [bp-69h]@22
  void *v44; // [sp+7Ch] [bp-54h]@55
  void *ptr; // [sp+8Ch] [bp-44h]@53

  v2 = this;
  v3 = a2;
  ItemInstance::ItemInstance((int)&v40);
  v5 = (unsigned __int64 *)((char *)v2 + 68);
  v4 = *((_DWORD *)v2 + 17);
  v6 = *((_DWORD *)v2 + 18);
  if ( v6 != v4 )
  {
    v7 = *((_DWORD *)v2 + 17);
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
  v11 = 0;
  *((_DWORD *)v2 + 18) = v4;
  v12 = 0;
  while ( v11 < (*(int (__fastcall **)(CraftingContainer *))(*(_DWORD *)v3 + 44))(v3) )
    v13 = (*(int (__fastcall **)(CraftingContainer *, int))(*(_DWORD *)v3 + 16))(v3, v11);
    v14 = v13;
    v15 = *(_BYTE *)(v13 + 15);
    v16 = v15 == 0;
    if ( v15 )
      v16 = *(_DWORD *)v14 == 0;
    if ( !v16 && !ItemInstance::isNull((ItemInstance *)v14) && *(_BYTE *)(v14 + 14) )
      HIDWORD(v17) = Item::mWritten_book;
      if ( *(_DWORD *)v14 == Item::mWritten_book )
      {
        v18 = v43 == 0;
        if ( v43 )
          v18 = v40 == 0;
        if ( !v18 )
        {
          v17 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v40);
          if ( !v42 )
            HIDWORD(v17) = 1;
          if ( !v17 )
            goto LABEL_53;
        }
        if ( WrittenBookItem::canBeCopied((WrittenBookItem *)v14, (const ItemInstance *)HIDWORD(v17)) != 1 )
          goto LABEL_53;
        ItemInstance::operator=((int)&v40, v14);
      }
      else
        if ( *(_DWORD *)v14 != Item::mWritable_book )
        ++v12;
    ++v11;
  v19 = v43 == 0;
  if ( v43 )
    v19 = v40 == 0;
  if ( !v19 && !ItemInstance::isNull((ItemInstance *)&v40) && v12 >= 1 && v42 )
    ItemInstance::ItemInstance((ItemInstance *)&v36, Item::mWritten_book, v12);
    v20 = (int *)ItemInstance::getUserData((ItemInstance *)&v40);
    CompoundTag::clone((CompoundTag *)&v35, *v20);
    ItemInstance::setUserData((int)&v36, &v35);
    if ( v35 )
      (*(void (**)(void))(*(_DWORD *)v35 + 4))();
    v35 = 0;
    v21 = *(_DWORD *)ItemInstance::getUserData((ItemInstance *)&v36);
    sub_21E91E0((void **)&v34, unk_2809184, WrittenBookItem::TAG_GENERATION);
    v23 = WrittenBookItem::getGeneration((WrittenBookItem *)&v40, v22);
    CompoundTag::putInt(v21, (const void **)&v34, v23 + 1);
    v24 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v34 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    if ( ItemInstance::hasCustomHoverName((ItemInstance *)&v40) == 1 )
      ItemInstance::getHoverName((ItemInstance *)&v33, (int)&v40);
      ItemInstance::setCustomName((int)&v36, &v33);
      v25 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v33 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
        else
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j__ZdlPv_9(v25);
    v26 = *((_QWORD *)v2 + 9);
    if ( (_DWORD)v26 == HIDWORD(v26) )
      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance&>(v5, (int)&v36);
    else
      ItemInstance::ItemInstance((ItemInstance *)v26, (int)&v36);
      *((_DWORD *)v2 + 18) += 72;
    ItemInstance::set((ItemInstance *)&v40, 1);
    v27 = *((_QWORD *)v2 + 9);
    if ( (_DWORD)v27 == HIDWORD(v27) )
      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance&>(v5, (int)&v40);
      ItemInstance::ItemInstance((ItemInstance *)v27, (int)&v40);
    if ( v39 )
      operator delete(v39);
    if ( v38 )
      operator delete(v38);
    if ( v37 )
      (*(void (**)(void))(*(_DWORD *)v37 + 4))();
LABEL_53:
  if ( ptr )
    operator delete(ptr);
  if ( v44 )
    operator delete(v44);
  if ( v41 )
    (*(void (**)(void))(*(_DWORD *)v41 + 4))();
  return (BookCloningRecipe *)((char *)v2 + 68);
}


void __fastcall BookCloningRecipe::~BookCloningRecipe(BookCloningRecipe *this)
{
  BookCloningRecipe::~BookCloningRecipe(this);
}
