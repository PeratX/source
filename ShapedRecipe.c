

Crypto::Hash::Hash *__fastcall ShapedRecipe::generateUUID(ShapedRecipe *this)
{
  ShapedRecipe *v1; // r4@1
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
  v3 = (const void *)(*(_QWORD *)((char *)v1 + 68) >> 32);
  for ( i = (const void *)*(_QWORD *)((char *)v1 + 68); v3 != i; i = (char *)i + 72 )
    Crypto::Hash::Hash::update((Crypto::Hash::Hash *)&v15, i, 0x48u);
  v5 = (const void *)(*((_QWORD *)v1 + 10) >> 32);
  for ( j = (const void *)*((_QWORD *)v1 + 10); v5 != j; j = (char *)j + 72 )
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


char *__fastcall ShapedRecipe::assemble(ShapedRecipe *this, CraftingContainer *a2)
{
  return (char *)this + 80;
}


Recipe *__fastcall ShapedRecipe::~ShapedRecipe(ShapedRecipe *this)
{
  ShapedRecipe *v1; // r4@1
  __int64 v2; // kr00_8@1
  int v3; // r5@2
  void *v4; // r0@3
  void *v5; // r0@5
  int v6; // r0@7
  int v7; // r5@10 OVERLAPPED
  int v8; // r6@10 OVERLAPPED
  void *v9; // r0@11
  void *v10; // r0@13
  int v11; // r0@15
  int v12; // r5@21 OVERLAPPED
  int v13; // r6@21 OVERLAPPED
  void *v14; // r0@22
  void *v15; // r0@24
  int v16; // r0@26

  v1 = this;
  *(_DWORD *)this = &off_270138C;
  v2 = *(_QWORD *)((char *)this + 68);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      v4 = *(void **)(v3 + 52);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v3 + 36);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v3 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v3 + 8) = 0;
      v3 += 72;
    }
    while ( HIDWORD(v2) != v3 );
  }
  *((_DWORD *)v1 + 18) = v2;
  *(_QWORD *)&v7 = *((_QWORD *)v1 + 10);
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
    v7 = *((_DWORD *)v1 + 20);
  if ( v7 )
    operator delete((void *)v7);
  *(_QWORD *)&v12 = *(_QWORD *)((char *)v1 + 68);
  if ( v12 != v13 )
      v14 = *(void **)(v12 + 52);
      if ( v14 )
        operator delete(v14);
      v15 = *(void **)(v12 + 36);
      if ( v15 )
        operator delete(v15);
      v16 = *(_DWORD *)(v12 + 8);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
      *(_DWORD *)(v12 + 8) = 0;
      v12 += 72;
    while ( v13 != v12 );
    v12 = *((_DWORD *)v1 + 17);
  if ( v12 )
    operator delete((void *)v12);
  return j_j_j__ZN6RecipeD2Ev_0(v1);
}


_DWORD *__fastcall ShapedRecipe::ShapedRecipe(_DWORD *a1, int a2)
{
  int v2; // r4@1
  _DWORD *result; // r0@1
  int v4; // r2@1
  int v5; // r2@1
  int v6; // r1@1
  int v7; // r1@1

  v2 = a2;
  result = Recipe::Recipe(a1, a2);
  *result = &off_270138C;
  result[17] = 0;
  result[18] = 0;
  result[19] = 0;
  result[17] = *(_DWORD *)(v2 + 68);
  *(_DWORD *)(v2 + 68) = 0;
  v4 = result[18];
  result[18] = *(_DWORD *)(v2 + 72);
  *(_DWORD *)(v2 + 72) = v4;
  v5 = result[19];
  result[19] = *(_DWORD *)(v2 + 76);
  *(_DWORD *)(v2 + 76) = v5;
  result[20] = 0;
  result[21] = 0;
  result[22] = 0;
  result[20] = *(_DWORD *)(v2 + 80);
  *(_DWORD *)(v2 + 80) = 0;
  v6 = result[21];
  result[21] = *(_DWORD *)(v2 + 84);
  *(_DWORD *)(v2 + 84) = v6;
  v7 = result[22];
  result[22] = *(_DWORD *)(v2 + 88);
  *(_DWORD *)(v2 + 88) = v7;
  result[12] = *(_DWORD *)(v2 + 48);
  result[13] = *(_DWORD *)(v2 + 52);
  return result;
}


_DWORD *__fastcall ShapedRecipe::ShapedRecipe(_DWORD *a1, int a2, int a3, unsigned __int64 *a4, unsigned __int64 *a5, int a6)
{
  _DWORD *v6; // r4@1
  ItemPack *v7; // r8@1
  unsigned __int64 *v8; // r7@1
  __int64 v9; // r5@1
  unsigned int v10; // r7@1
  int v11; // r6@2
  unsigned int v12; // r10@2
  __int64 v13; // r0@3
  int v14; // r5@4
  bool v15; // zf@4
  int v16; // r2@12
  int v17; // r3@12
  int v18; // r0@12

  v6 = a1;
  v7 = (ItemPack *)(a1 + 1);
  v8 = a4;
  HIDWORD(v9) = a3;
  LODWORD(v9) = a2;
  *a1 = &off_2701314;
  ItemPack::ItemPack((int)(a1 + 1));
  v6[11] = 0;
  v6[9] = 0;
  v6[10] = 0;
  v6[8] = 0;
  v6[14] = 0;
  v6[15] = 0;
  v6[16] = 0;
  *v6 = &off_270138C;
  std::vector<ItemInstance,std::allocator<ItemInstance>>::vector((int)(v6 + 17), v8);
  std::vector<ItemInstance,std::allocator<ItemInstance>>::vector((int)(v6 + 20), a5);
  v10 = HIDWORD(v9) * v9;
  *((_QWORD *)v6 + 6) = v9;
  if ( HIDWORD(v9) * (_DWORD)v9 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      v13 = *(_QWORD *)(v6 + 17);
      if ( 954437177 * ((HIDWORD(v13) - (signed int)v13) >> 3) > v12 )
      {
        v14 = v13 + v11;
        v15 = *(_BYTE *)(v13 + v11 + 15) == 0;
        if ( *(_BYTE *)(v13 + v11 + 15) )
          v15 = *(_DWORD *)(v13 + v11) == 0;
        if ( !v15 && !ItemInstance::isNull((ItemInstance *)v14) && *(_BYTE *)(v14 + 14) )
          ItemPack::add(v7, (const ItemInstance *)(v6[17] + v11), 1);
      }
      ++v12;
      v11 += 72;
    }
    while ( v12 < v10 );
  }
  if ( a6 )
    v16 = *(_DWORD *)(a6 + 4);
    v17 = *(_DWORD *)(a6 + 8);
    v18 = *(_DWORD *)(a6 + 12);
    v6[8] = *(_DWORD *)a6;
    v6[9] = v16;
    v6[10] = v17;
    v6[11] = v18;
  else
    ShapedRecipe::generateUUID((ShapedRecipe *)v6);
  return v6;
}


signed int __fastcall ShapedRecipe::matches(ShapedRecipe *this, CraftingContainer *a2, int a3, int a4, int a5)
{
  ShapedRecipe *v5; // r6@1
  CraftingContainer *v6; // r8@1
  int v7; // r7@1
  int v8; // r10@2
  int v9; // r4@2
  bool v10; // zf@4
  int v11; // r5@10
  signed int v12; // r11@11
  int v13; // r0@14
  int v14; // r1@14
  bool v15; // zf@14
  bool v16; // nf@14
  unsigned __int8 v17; // vf@14
  int v18; // r0@18
  ItemInstance *v19; // r0@21
  ItemInstance *v20; // r9@21
  int v21; // r0@21
  bool v22; // zf@21
  unsigned int v23; // r0@25
  unsigned int v24; // r0@26
  bool v25; // zf@27
  __int64 v26; // r0@30
  signed int v27; // r5@38
  bool v28; // zf@43
  signed int v29; // r0@49
  bool v30; // zf@62
  signed int result; // r0@69
  int v32; // [sp+4h] [bp-8Ch]@1
  int v33; // [sp+8h] [bp-88h]@2
  int v34; // [sp+Ch] [bp-84h]@1
  int v35; // [sp+10h] [bp-80h]@3
  int v36; // [sp+18h] [bp-78h]@60
  unsigned __int8 v37; // [sp+1Eh] [bp-72h]@30
  char v38; // [sp+1Fh] [bp-71h]@27
  void *v39; // [sp+34h] [bp-5Ch]@58
  void *ptr; // [sp+44h] [bp-4Ch]@56
  __int64 v41; // [sp+58h] [bp-38h]@3
  __int64 v42; // [sp+60h] [bp-30h]@3

  v5 = this;
  v6 = a2;
  v7 = 0;
  v32 = a3;
  v34 = -a4;
  do
  {
    v8 = v7 - a3;
    v9 = 0;
    v33 = ~(v7 - a3);
    do
    {
      ItemInstance::ItemInstance((int)&v35);
      v13 = v34 + v9;
      v14 = (v34 + v9) | v8;
      v17 = 0;
      v15 = v14 == 0;
      v16 = v14 < 0;
      if ( v14 >= 0 )
      {
        v14 = *((_DWORD *)v5 + 12);
        v17 = __OFSUB__(v14, v8);
        v15 = v14 == v8;
        v16 = v14 - v8 < 0;
      }
      if ( !((unsigned __int8)(v16 ^ v17) | v15) && v13 < *((_DWORD *)v5 + 13) )
        v18 = v13 * v14;
        if ( a5 == 1 )
          ItemInstance::operator=((int)&v35, *((_DWORD *)v5 + 17) + 72 * (v18 + v14 + v33));
        else
          ItemInstance::operator=((int)&v35, *((_DWORD *)v5 + 17) + 72 * (v18 + v8));
      v19 = (ItemInstance *)CraftingContainer::getItem(v6, v7, v9);
      v20 = v19;
      v21 = *((_BYTE *)v19 + 15);
      v22 = v21 == 0;
      if ( v21 )
        v22 = *(_DWORD *)v20 == 0;
      if ( v22 || ItemInstance::isNull(v20) || (v23 = *((_WORD *)v20 + 7), !(_BYTE)v23) )
        v12 = 7;
        v25 = v38 == 0;
        if ( v38 )
          v25 = v35 == 0;
        if ( v25 )
          goto LABEL_56;
        v26 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v35);
        if ( !v37 )
          HIDWORD(v26) = 1;
        if ( v26 )
        {
          v12 = 7;
        }
        v24 = *((_BYTE *)v20 + 15);
      else
        v24 = v23 >> 8;
      if ( v24 )
        if ( *(_DWORD *)v20 )
          if ( ItemInstance::isNull(v20) )
          {
            v27 = 0;
          }
          else
            v27 = *((_BYTE *)v20 + 14);
            if ( *((_BYTE *)v20 + 14) )
              v27 = 1;
          v27 = 0;
        v27 = 0;
      v28 = v38 == 0;
      if ( v38 )
        v28 = v35 == 0;
      if ( v28 || ItemInstance::isNull((ItemInstance *)&v35) == 1 )
        if ( v27 )
          v12 = 1;
        v29 = v37;
        if ( v37 )
          v29 = 1;
        if ( v27 != v29 )
      if ( v35 && *(_DWORD *)v20 == v35 )
        MapItem::getMapId((MapItem *)&v42, (const ItemInstance *)&v35);
        MapItem::getMapId((MapItem *)&v41, v20);
        if ( v42 ^ v41 )
          v10 = *((_BYTE *)v20 + 15) == 0;
          if ( *((_BYTE *)v20 + 15) )
            v10 = *(_DWORD *)v20 == 0;
          v12 = 0;
          if ( !v10 && !ItemInstance::isNull(v20) )
            {
              if ( (unsigned __int16)ItemInstance::getAuxValue((ItemInstance *)&v35) != 0x7FFF )
              {
                v11 = ItemInstance::getAuxValue((ItemInstance *)&v35);
                if ( v11 != ItemInstance::getAuxValue(v20) )
                  v12 = 1;
              }
            }
        v12 = 1;
LABEL_56:
      if ( ptr )
        operator delete(ptr);
      if ( v39 )
        operator delete(v39);
      if ( v36 )
        (*(void (**)(void))(*(_DWORD *)v36 + 4))();
      v30 = v12 == 7;
      if ( v12 != 7 )
        v30 = v12 == 0;
      if ( !v30 )
        goto LABEL_69;
      ++v9;
    }
    while ( v9 < 3 );
    a3 = v32;
    ++v7;
  }
  while ( v7 < 3 );
  v12 = 2;
LABEL_69:
  result = 0;
  if ( v12 == 2 )
    result = 1;
  return result;
}


void __fastcall ShapedRecipe::~ShapedRecipe(ShapedRecipe *this)
{
  Recipe *v1; // r0@1

  v1 = ShapedRecipe::~ShapedRecipe(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall ShapedRecipe::setId(int result, const mce::UUID *a2)
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


void *__fastcall ShapedRecipe::getIngredient(ShapedRecipe *this, int a2, int a3)
{
  int v3; // r12@0
  ShapedRecipe *v4; // lr@1
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


char *__fastcall ShapedRecipe::getItems(ShapedRecipe *this)
{
  return (char *)this + 68;
}


int __fastcall ShapedRecipe::getCraftingSize(ShapedRecipe *this)
{
  signed int v1; // r1@1

  v1 = 0;
  if ( *((_DWORD *)this + 12) <= 2 && *((_DWORD *)this + 13) < 3 )
    v1 = 1;
  return v1 ^ 1;
}


int __fastcall ShapedRecipe::isShapeless(ShapedRecipe *this)
{
  return 0;
}


signed int __fastcall ShapedRecipe::matches(ShapedRecipe *this, CraftingContainer *a2, Level *a3)
{
  ShapedRecipe *v3; // r5@1
  CraftingContainer *v4; // r8@1
  signed int v5; // r0@1
  signed int v6; // r4@1
  signed int v7; // r1@2
  int v8; // r6@2
  int v9; // r7@4
  bool v10; // nf@9
  unsigned __int8 v11; // vf@9

  v3 = this;
  v4 = a2;
  v5 = *((_DWORD *)this + 12);
  v6 = 0;
  if ( v5 <= 3 )
  {
    v7 = *((_DWORD *)v3 + 13);
    v8 = 0;
    v6 = 1;
    while ( v7 > 3 )
    {
LABEL_9:
      v11 = __OFSUB__(v8, 3 - v5);
      v10 = v8++ - (3 - v5) < 0;
      if ( !(v10 ^ v11) )
        return 0;
    }
    v9 = -1;
    while ( !ShapedRecipe::matches(v3, v4, v8, ++v9, 1) )
      if ( ShapedRecipe::matches(v3, v4, v8, v9, 0) )
        return 1;
      v7 = *((_DWORD *)v3 + 13);
      if ( v9 >= 3 - v7 )
      {
        v5 = *((_DWORD *)v3 + 12);
        goto LABEL_9;
      }
  }
  return v6;
}


void __fastcall ShapedRecipe::~ShapedRecipe(ShapedRecipe *this)
{
  ShapedRecipe::~ShapedRecipe(this);
}


char *__fastcall ShapedRecipe::getResultItem(ShapedRecipe *this)
{
  return (char *)this + 80;
}
