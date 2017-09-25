

_DWORD *__fastcall ShapelessRecipe::ShapelessRecipe(_DWORD *a1, int a2)
{
  int v2; // r5@1
  _DWORD *v3; // r4@1

  v2 = a2;
  v3 = a1;
  Recipe::Recipe(a1, a2);
  *v3 = &off_27013C8;
  std::vector<ItemInstance,std::allocator<ItemInstance>>::vector((int)(v3 + 17), (unsigned __int64 *)(v2 + 68));
  std::vector<ItemInstance,std::allocator<ItemInstance>>::vector((int)(v3 + 20), (unsigned __int64 *)(v2 + 80));
  return v3;
}


int __fastcall ShapelessRecipe::setId(int result, const mce::UUID *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 32) = v2;
  *(_DWORD *)(result + 36) = v3;
  *(_DWORD *)(result + 40) = v4;
  *(_DWORD *)(result + 44) = v5;
  return result;
}


char *__fastcall ShapelessRecipe::getResultItem(ShapelessRecipe *this)
{
  return (char *)this + 80;
}


signed int __fastcall ShapelessRecipe::isShapeless(ShapelessRecipe *this)
{
  return 1;
}


void __fastcall ShapelessRecipe::~ShapelessRecipe(ShapelessRecipe *this)
{
  ShapelessRecipe::~ShapelessRecipe(this);
}


signed int __fastcall ShapelessRecipe::matches(ShapelessRecipe *this, CraftingContainer *a2, Level *a3)
{
  ShapelessRecipe *v3; // r4@1
  CraftingContainer *v4; // r11@1
  __int64 v5; // r0@1
  const ItemInstance *v6; // r8@2
  signed int v7; // r0@3
  int v8; // r5@5
  MapItem *v9; // r7@5
  int v10; // r10@5
  int v11; // r4@6
  const ItemInstance *v12; // r0@7
  const ItemInstance *v13; // r6@7
  int v14; // r0@7
  bool v15; // zf@7
  int v16; // r9@17
  MapItem *v17; // r9@20
  signed int v18; // r0@21
  int v19; // r7@22
  void *v20; // r0@24
  void *v21; // r0@26
  int v22; // r0@28
  signed int v23; // r4@33
  const ItemInstance *v24; // r7@38
  void *v25; // r0@39
  void *v26; // r0@41
  int v27; // r0@43
  const ItemInstance *v29; // [sp+4h] [bp-3Ch]@12
  __int64 v30; // [sp+8h] [bp-38h]@15
  __int64 v31; // [sp+10h] [bp-30h]@5

  v3 = this;
  v4 = a2;
  v5 = *(_QWORD *)((char *)this + 68);
  if ( HIDWORD(v5) == (_DWORD)v5 )
  {
    v6 = 0;
    LODWORD(v5) = HIDWORD(v5);
  }
  else
    v7 = HIDWORD(v5) - v5;
    if ( (unsigned int)(954437177 * (v7 >> 3)) >= 0x38E38E4 )
      sub_21E57F4();
    v6 = (const ItemInstance *)operator new(v7);
    v5 = *(_QWORD *)((char *)v3 + 68);
  v8 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemInstance const*,std::vector<ItemInstance,std::allocator<ItemInstance>>>,ItemInstance*>(
         v5,
         SHIDWORD(v5),
         (int)v6);
  v9 = (MapItem *)&v31;
  v10 = 0;
  while ( 2 )
    v11 = 0;
    do
    {
      v12 = (const ItemInstance *)CraftingContainer::getItem(v4, v11, v10);
      v13 = v12;
      v14 = *((_BYTE *)v12 + 15);
      v15 = v14 == 0;
      if ( v14 )
        v15 = *(_DWORD *)v13 == 0;
      if ( !v15 && !ItemInstance::isNull(v13) && *((_BYTE *)v13 + 14) )
      {
        v29 = v6;
        if ( v6 == (const ItemInstance *)v8 )
        {
LABEL_36:
          v23 = 0;
          v6 = v29;
          goto LABEL_37;
        }
        while ( 1 )
          if ( *(_DWORD *)v6 )
          {
            if ( *(_DWORD *)v13 == *(_DWORD *)v6 )
            {
              MapItem::getMapId(v9, v6);
              MapItem::getMapId((MapItem *)&v30, v13);
              if ( !(v31 ^ v30) )
              {
                if ( (unsigned __int16)ItemInstance::getAuxValue(v6) == 0x7FFF )
                  break;
                v16 = ItemInstance::getAuxValue(v13);
                if ( v16 == ItemInstance::getAuxValue(v6) )
              }
            }
          }
          v6 = (const ItemInstance *)((char *)v6 + 72);
          if ( v6 == (const ItemInstance *)v8 )
            goto LABEL_36;
        v17 = v9;
        if ( (const ItemInstance *)((char *)v6 + 72) != (const ItemInstance *)v8 )
          v18 = v8 - ((_DWORD)v6 + 72);
          if ( v18 >= 1 )
            v19 = 954437177 * (v18 >> 3) + 1;
            do
              ItemInstance::operator=((int)v6, (int)v6 + 72);
              --v19;
              v6 = (const ItemInstance *)((char *)v6 + 72);
            while ( v19 > 1 );
        v20 = *(void **)(v8 - 20);
        v6 = v29;
        if ( v20 )
          operator delete(v20);
        v21 = *(void **)(v8 - 36);
        if ( v21 )
          operator delete(v21);
        v22 = *(_DWORD *)(v8 - 64);
        if ( v22 )
          (*(void (**)(void))(*(_DWORD *)v22 + 4))();
        *(_DWORD *)(v8 - 64) = 0;
        v8 -= 72;
        v9 = v17;
      }
      ++v11;
    }
    while ( v11 < 3 );
    if ( ++v10 < 3 )
      continue;
    break;
  v23 = 0;
  if ( v6 == (const ItemInstance *)v8 )
    v23 = 1;
LABEL_37:
  if ( v6 != (const ItemInstance *)v8 )
    v24 = v6;
      v25 = (void *)*((_DWORD *)v24 + 13);
      if ( v25 )
        operator delete(v25);
      v26 = (void *)*((_DWORD *)v24 + 9);
      if ( v26 )
        operator delete(v26);
      v27 = *((_DWORD *)v24 + 2);
      if ( v27 )
        (*(void (**)(void))(*(_DWORD *)v27 + 4))();
      *((_DWORD *)v24 + 2) = 0;
      v24 = (const ItemInstance *)((char *)v24 + 72);
    while ( (const ItemInstance *)v8 != v24 );
  if ( v6 )
    operator delete((void *)v6);
  return v23;
}


signed int __fastcall ShapelessRecipe::getCraftingSize(ShapelessRecipe *this)
{
  unsigned int v1; // r1@1
  signed int result; // r0@1

  v1 = 954437177 * ((signed int)((*(_QWORD *)((char *)this + 68) >> 32) - *(_QWORD *)((char *)this + 68)) >> 3);
  result = 0;
  if ( v1 > 4 )
    result = 1;
  return result;
}


void *__fastcall ShapelessRecipe::getIngredient(ShapelessRecipe *this, int a2, int a3)
{
  int v3; // r12@0
  ShapelessRecipe *v4; // lr@1
  bool v5; // zf@1
  bool v6; // nf@1
  unsigned __int8 v7; // vf@1
  void *result; // r0@3
  unsigned int v9; // r1@5
  __int64 v10; // kr00_8@5

  v4 = this;
  v7 = 0;
  v5 = (a3 | a2) == 0;
  v6 = (a3 | a2) < 0;
  if ( (a3 | a2) >= 0 )
  {
    v3 = *((_DWORD *)this + 12);
    v7 = __OFSUB__(v3, a2);
    v5 = v3 == a2;
    v6 = v3 - a2 < 0;
  }
  result = &ItemInstance::EMPTY_ITEM;
  if ( !((unsigned __int8)(v6 ^ v7) | v5) )
    if ( *((_DWORD *)v4 + 13) <= a3 )
    {
      result = &ItemInstance::EMPTY_ITEM;
    }
    else
      v9 = a2 + v3 * a3;
      v10 = *(_QWORD *)((char *)v4 + 68);
      if ( 954437177 * ((HIDWORD(v10) - (signed int)v10) >> 3) <= v9 )
        result = &ItemInstance::EMPTY_ITEM;
      else
        result = (void *)(v10 + 72 * v9);
  return result;
}


char *__fastcall ShapelessRecipe::getIngredients(ShapelessRecipe *this)
{
  return (char *)this + 68;
}


_DWORD *__fastcall ShapelessRecipe::ShapelessRecipe(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3, int a4)
{
  _DWORD *v4; // r4@1
  ItemPack *v5; // r6@1
  int v6; // r10@1
  unsigned __int64 *v7; // r7@1
  unsigned __int64 *v8; // r5@1
  unsigned __int64 v9; // r0@1
  int v10; // r7@2
  unsigned int v11; // r9@2
  __int64 v12; // r0@6
  signed __int64 v14; // r0@10
  int v15; // r1@12
  int v16; // r2@12
  int v17; // r3@12

  v4 = a1;
  v5 = (ItemPack *)(a1 + 1);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  *a1 = &off_2701314;
  ItemPack::ItemPack((int)(a1 + 1));
  v4[11] = 0;
  v4[9] = 0;
  v4[10] = 0;
  v4[8] = 0;
  v4[14] = 0;
  v4[15] = 0;
  v4[16] = 0;
  *v4 = &off_27013C8;
  std::vector<ItemInstance,std::allocator<ItemInstance>>::vector((int)(v4 + 17), v8);
  std::vector<ItemInstance,std::allocator<ItemInstance>>::vector((int)(v4 + 20), v7);
  v9 = *v8;
  if ( HIDWORD(v9) != (_DWORD)v9 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      if ( !ItemInstance::isNull((ItemInstance *)(v9 + v10)) )
        ItemPack::add(v5, (const ItemInstance *)(*(_DWORD *)v8 + v10), 1);
      v9 = *v8;
      v10 += 72;
      ++v11;
    }
    while ( v11 < 954437177 * ((HIDWORD(v9) - (signed int)v9) >> 3) );
  }
  LODWORD(v12) = 954437177 * ((signed int)((*(_QWORD *)(v4 + 17) >> 32) - *(_QWORD *)(v4 + 17)) >> 3);
  if ( (unsigned int)v12 >= 5 )
    v14 = 2863311531LL * (unsigned int)(v12 - 1);
    LODWORD(v12) = 3;
    HIDWORD(v12) >>= 1;
  else
    HIDWORD(v12) = v12 - 1;
    if ( (unsigned int)v12 >= 2 )
      LODWORD(v12) = 2;
  ++HIDWORD(v12);
  *((_QWORD *)v4 + 6) = v12;
  if ( v6 )
    v15 = *(_DWORD *)(v6 + 4);
    v16 = *(_DWORD *)(v6 + 8);
    v17 = *(_DWORD *)(v6 + 12);
    v4[8] = *(_DWORD *)v6;
    v4[9] = v15;
    v4[10] = v16;
    v4[11] = v17;
    ShapelessRecipe::generateUUID((ShapelessRecipe *)v4);
  return v4;
}


Recipe *__fastcall ShapelessRecipe::~ShapelessRecipe(ShapelessRecipe *this)
{
  ShapelessRecipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6
  int v7; // r5@12 OVERLAPPED
  int v8; // r6@12 OVERLAPPED
  void *v9; // r0@13
  void *v10; // r0@15
  int v11; // r0@17

  v1 = this;
  *(_DWORD *)this = &off_27013C8;
  *(_QWORD *)&v2 = *((_QWORD *)this + 10);
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
    v2 = *((_DWORD *)v1 + 20);
  }
  if ( v2 )
    operator delete((void *)v2);
  *(_QWORD *)&v7 = *(_QWORD *)((char *)v1 + 68);
  if ( v7 != v8 )
      v9 = *(void **)(v7 + 52);
      if ( v9 )
        operator delete(v9);
      v10 = *(void **)(v7 + 36);
      if ( v10 )
        operator delete(v10);
      v11 = *(_DWORD *)(v7 + 8);
      if ( v11 )
        (*(void (**)(void))(*(_DWORD *)v11 + 4))();
      *(_DWORD *)(v7 + 8) = 0;
      v7 += 72;
    while ( v8 != v7 );
    v7 = *((_DWORD *)v1 + 17);
  if ( v7 )
    operator delete((void *)v7);
  return j_j_j__ZN6RecipeD2Ev(v1);
}


Crypto::Hash::Hash *__fastcall ShapelessRecipe::generateUUID(ShapelessRecipe *this)
{
  ShapelessRecipe *v1; // r4@1
  const void *i; // r5@1
  const void *v3; // r7@1
  const void *j; // r5@3
  const void *v5; // r7@3
  int v6; // r1@5
  int v7; // r2@5
  int v8; // r3@5
  int v9; // r12@5
  int v11; // [sp+0h] [bp-30h]@5
  int v12; // [sp+4h] [bp-2Ch]@5
  int v13; // [sp+8h] [bp-28h]@5
  int v14; // [sp+Ch] [bp-24h]@5
  char v15; // [sp+10h] [bp-20h]@1

  v1 = this;
  Crypto::Hash::Hash::Hash((int)&v15, 0);
  v3 = (const void *)(*((_QWORD *)v1 + 10) >> 32);
  for ( i = (const void *)*((_QWORD *)v1 + 10); v3 != i; i = (char *)i + 72 )
    Crypto::Hash::Hash::update((Crypto::Hash::Hash *)&v15, i, 0x48u);
  v5 = (const void *)(*(_QWORD *)((char *)v1 + 68) >> 32);
  for ( j = (const void *)*(_QWORD *)((char *)v1 + 68); v5 != j; j = (char *)j + 72 )
    Crypto::Hash::Hash::update((Crypto::Hash::Hash *)&v15, j, 0x48u);
  Crypto::Hash::Hash::getUUID((Crypto::Hash::Hash *)&v11, (int)&v15);
  v6 = v12;
  v7 = v13;
  v8 = v14;
  v9 = (int)v1 + 32;
  *(_DWORD *)v9 = v11;
  *(_DWORD *)(v9 + 4) = v6;
  *(_DWORD *)(v9 + 8) = v7;
  *(_DWORD *)(v9 + 12) = v8;
  return Crypto::Hash::Hash::~Hash((Crypto::Hash::Hash *)&v15);
}


char *__fastcall ShapelessRecipe::assemble(ShapelessRecipe *this, CraftingContainer *a2)
{
  return (char *)this + 80;
}


char *__fastcall ShapelessRecipe::getItems(ShapelessRecipe *this)
{
  return (char *)this + 68;
}


void __fastcall ShapelessRecipe::~ShapelessRecipe(ShapelessRecipe *this)
{
  Recipe *v1; // r0@1

  v1 = ShapelessRecipe::~ShapelessRecipe(this);
  j_j_j__ZdlPv_6((void *)v1);
}
