

signed int __fastcall Recipe::isAnyAuxValue(Recipe *this, const ItemInstance *a2)
{
  Recipe *v2; // r0@1
  int v3; // r1@1

  v2 = (Recipe *)ItemInstance::getId(this);
  return j_j_j__ZN6Recipe13isAnyAuxValueEi(v2, v3);
}


    while ( Recipe::itemsMatch(v5, (const ItemInstance *)(v9 + v10), v8) != 1 )
{
      v9 = *v4;
      ++v11;
      v10 += 72;
      if ( v11 >= 954437177 * ((HIDWORD(v9) - (signed int)v9) >> 3) )
        return v9;
    }
    v9 = *v3;
    if ( (_DWORD)v9 == HIDWORD(v9) )
    {
LABEL_11:
      if ( *v15 )
      {
        CompoundTag::clone((CompoundTag *)&v17, *v15);
        v13 = v17;
      }
      else
        v13 = 0;
        v17 = 0;
      v18 = v6;
      v19 = v7;
      v20 = v16;
      if ( v13 )
        CompoundTag::clone((CompoundTag *)&v21, v13);
        v21 = 0;
      sub_168504A((int)v3, (int)&v18);
      if ( v21 )
        (*(void (**)(void))(*(_DWORD *)v21 + 4))();
      LODWORD(v9) = v17;
      v21 = 0;
      if ( v17 )
        LODWORD(v9) = (*(int (**)(void))(*(_DWORD *)v17 + 4))();
    else
      while ( 1 )
        v12 = *(_DWORD *)v9 == v6;
        if ( *(_DWORD *)v9 == v6 )
          v12 = *(_DWORD *)(v9 + 4) == v7;
        if ( v12 )
          break;
        LODWORD(v9) = v9 + 16;
        if ( HIDWORD(v9) == (_DWORD)v9 )
          goto LABEL_11;
      *(_DWORD *)(v9 + 8) += v16;
  }
  return v9;
}


  if ( Recipe::getHeight(v3) >= 1 )
{
    v10 = 0;
    do
    {
      if ( Recipe::getWidth(v3) > 0 )
      {
        v11 = 0;
        do
        {
          v12 = (ItemInstance *)(*(int (__fastcall **)(Recipe *, int, int))(*(_DWORD *)v3 + 16))(v3, v11, v10);
          serialize<ItemInstance>::write(v12, v2);
          ++v11;
        }
        while ( v11 < Recipe::getWidth(v3) );
      }
      ++v10;
    }
    while ( v10 < Recipe::getHeight(v3) );
  }
  v13 = (unsigned __int64 *)(*(int (__fastcall **)(Recipe *))(*(_DWORD *)v3 + 20))(v3);
  v21 = operator new(1u);
  v22 = (void (*)(void))std::_Function_base::_Base_manager<serialize<ShapedRecipe>::write(ShapedRecipe const&,BinaryStream &)::{lambda(BinaryStream &,ItemInstance const&)#1}>::_M_manager;
  v23 = std::_Function_handler<void ()(BinaryStream &,ItemInstance const&),serialize<ShapedRecipe>::write(ShapedRecipe const&,BinaryStream &)::{lambda(BinaryStream &,ItemInstance const&)#1}>::_M_invoke;
  v14 = 954437177 * ((signed int)((*v13 >> 32) - *v13) >> 3);
  do
  {
    v15 = v14 & 0x7F;
    if ( 0 != v14 >> 7 )
      v15 = v14 | 0x80;
    v24 = v15;
    sub_21E7408(*(const void ***)(v2 + 20), &v24, 1u);
    v14 >>= 7;
  while ( v14 );
  v16 = (ItemInstance *)(*v13 >> 32);
  for ( i = (ItemInstance *)*v13; v16 != i; i = (ItemInstance *)((char *)i + 72) )
    if ( !v22 )
      sub_21E5F48();
    v23((int)&v21, v2, i);
  if ( v22 )
    v22();
  v18 = (_QWORD *)(*(int (__fastcall **)(Recipe *))(*(_DWORD *)v3 + 36))(v3);
  v19 = v18;
  *(_QWORD *)&v25 = *v18;
  sub_21E7408(*(const void ***)(v2 + 20), &v25, 8u);
  *(_QWORD *)&v25 = v19[1];
  return sub_21E7408(*(const void ***)(v2 + 20), &v25, 8u);
}


_DWORD *__fastcall Recipe::Recipe(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1
  int v3; // r6@1
  int v4; // r5@1
  int v5; // r12@1
  int v6; // r1@1
  int v7; // r2@1
  int v8; // r3@1

  v2 = a1;
  v3 = (int)(a1 + 1);
  v4 = a2;
  *a1 = &off_2701314;
  ItemPack::ItemPack((int)(a1 + 1), a2 + 4);
  v5 = (int)(v2 + 8);
  v6 = *(_DWORD *)(v4 + 36);
  v7 = *(_DWORD *)(v4 + 40);
  v8 = *(_DWORD *)(v4 + 44);
  *(_DWORD *)v5 = *(_DWORD *)(v4 + 32);
  *(_DWORD *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 8) = v7;
  *(_DWORD *)(v5 + 12) = v8;
  ItemPack::getItemInstances((ItemPack *)(v2 + 14), v3);
  return v2;
}


signed int __fastcall Recipe::itemsMatch(Recipe *this, const ItemInstance *a2, int a3, int a4, const CompoundTag *a5)
{
  Recipe *v5; // r5@1
  int v6; // r4@1
  int v7; // r6@1
  const ItemInstance *v8; // r7@1
  signed int v9; // r0@4
  signed int result; // r0@12
  bool v11; // zf@13
  signed int v12; // r1@16
  signed int v13; // r1@17
  signed int v14; // r2@19
  bool v15; // zf@21
  int v16; // r1@21
  int v17; // r0@25
  bool v18; // zf@25
  int v19; // r0@29
  bool v20; // zf@33

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( *((_BYTE *)this + 15) )
  {
    if ( *(_DWORD *)this )
    {
      if ( ItemInstance::isNull(this) )
      {
        v9 = 0;
      }
      else
        v9 = *((_BYTE *)v5 + 14);
        if ( *((_BYTE *)v5 + 14) )
          v9 = 1;
    }
    else
      v9 = 0;
  }
  else
    v9 = 0;
  if ( !v6 && (signed int)v8 <= -1 && v9 != 1 )
    return 1;
  v11 = *((_BYTE *)v5 + 15) == 0;
  if ( *((_BYTE *)v5 + 15) )
    v11 = *(_DWORD *)v5 == 0;
  if ( v11 )
    return 0;
  v12 = ItemInstance::isNull(v5);
  result = 0;
  if ( !v12 )
    v13 = 0;
    if ( (signed int)v8 > -1 )
      v13 = 1;
    v14 = v6;
    if ( v6 )
      v14 = 1;
    v16 = v13 | v14;
    v15 = v16 == 0;
    if ( v16 )
      v15 = *((_BYTE *)v5 + 14) == 0;
    if ( !v15 )
      if ( (const ItemInstance *)ItemInstance::getId(v5) == v8 )
        v17 = ItemInstance::getAuxValue(v5);
        v18 = v7 == 0x7FFF;
        if ( v7 != 0x7FFF )
          v18 = (unsigned __int16)v17 == 0x7FFF;
        if ( v18 || v17 == v7 )
        {
          v19 = *(_DWORD *)ItemInstance::getUserData(v5);
          if ( (!v6 || v19) && (v6 || !v19) )
          {
            v20 = v6 == 0;
            if ( v6 )
              v20 = v19 == 0;
            if ( v20 || (*(int (**)(void))(*(_DWORD *)v19 + 28))() == 1 )
              return 1;
          }
        }
      return 0;
  return result;
}


Recipe *__fastcall Recipe::~Recipe(Recipe *this)
{
  Recipe *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6
  int v7; // r5@12
  int v8; // r0@13
  int v9; // r6@13
  char *v10; // r0@16

  v1 = this;
  *(_DWORD *)this = &off_2701314;
  *(_QWORD *)&v2 = *((_QWORD *)this + 7);
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
    v2 = *((_DWORD *)v1 + 14);
  }
  if ( v2 )
    operator delete((void *)v2);
  v7 = *((_DWORD *)v1 + 3);
  if ( v7 )
      v8 = *(_DWORD *)(v7 + 12);
      v9 = *(_DWORD *)v7;
      if ( v8 )
        (*(void (**)(void))(*(_DWORD *)v8 + 4))();
      operator delete((void *)v7);
      v7 = v9;
    while ( v9 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  v10 = (char *)*((_DWORD *)v1 + 1);
  if ( v10 && (char *)v1 + 28 != v10 )
    operator delete(v10);
  return v1;
}


char *__fastcall Recipe::getId(Recipe *this)
{
  return (char *)this + 32;
}


int __fastcall Recipe::countQuantityOfIngredient(Recipe *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r8@1
  Recipe *v3; // r6@1
  int v4; // r5@1
  int v5; // r7@1
  int v6; // r4@2
  int v7; // r4@5
  int v8; // r4@8

  v2 = a2;
  v3 = this;
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = (*(int (__fastcall **)(Recipe *, _DWORD, int))(*(_DWORD *)v3 + 16))(v3, 0, v5);
    if ( !ItemInstance::isNull((ItemInstance *)v6) && ItemInstance::sameItemAndAux((ItemInstance *)v6, v2) == 1 )
      v4 += *(_BYTE *)(v6 + 14);
    v7 = (*(int (__fastcall **)(Recipe *, signed int, int))(*(_DWORD *)v3 + 16))(v3, 1, v5);
    if ( !ItemInstance::isNull((ItemInstance *)v7) && ItemInstance::sameItemAndAux((ItemInstance *)v7, v2) == 1 )
      v4 += *(_BYTE *)(v7 + 14);
    v8 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v3 + 16))(v3, 2, v5);
    if ( !ItemInstance::isNull((ItemInstance *)v8) && ItemInstance::sameItemAndAux((ItemInstance *)v8, v2) == 1 )
      v4 += *(_BYTE *)(v8 + 14);
    ++v5;
  }
  while ( v5 != 3 );
  return v4;
}


int __fastcall Recipe::isMultiRecipe(Recipe *this)
{
  return 0;
}


void __fastcall Recipe::~Recipe(Recipe *this)
{
  Recipe *v1; // r0@1

  v1 = Recipe::~Recipe(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall Recipe::isAnyAuxValue(Recipe *this, int a2)
{
  signed int result; // r0@14
  signed int v3; // r1@15

  if ( (signed int)this <= 255
    && (Recipe *)*(_BYTE *)(Block::mWool + 4) != this
    && (Recipe *)*(_BYTE *)(Block::mStoneSlab + 4) != this
    && (Recipe *)*(_BYTE *)(Block::mStoneSlab2 + 4) != this
    && (Recipe *)*(_BYTE *)(Block::mSandStone + 4) != this
    && (Recipe *)*(_BYTE *)(Block::mRedSandstone + 4) != this
    && (Recipe *)*(_BYTE *)(Block::mLog + 4) != this
    && (Recipe *)*(_BYTE *)(Block::mLog2 + 4) != this
    && (Recipe *)*(_BYTE *)(Block::mSand + 4) != this
    && (Recipe *)*(_BYTE *)(Block::mWoodPlanks + 4) != this
    && (Recipe *)*(_BYTE *)(Block::mDoublePlant + 4) != this
    && (Recipe *)*(_BYTE *)(Block::mRedFlower + 4) != this
    && (Recipe *)*(_BYTE *)(Block::mStone + 4) != this )
  {
    v3 = 0;
    if ( (Recipe *)*(_BYTE *)(Block::mQuartzBlock + 4) != this )
      v3 = 1;
    result = v3;
  }
  else
    result = 0;
  return result;
}


char *__fastcall Recipe::getItems(Recipe *this)
{
  return (char *)this + 56;
}


signed int __fastcall Recipe::itemsMatch(Recipe *this, const ItemInstance *a2, const ItemInstance *a3)
{
  Recipe *v3; // r4@1
  const ItemInstance *v4; // r5@1
  int v5; // r0@1
  bool v6; // zf@1
  unsigned int v7; // r0@5
  unsigned int v8; // r0@6
  bool v9; // zf@7
  bool v10; // zf@13
  bool v11; // zf@18
  const ItemInstance *v12; // r6@23
  int v13; // r7@23
  int *v14; // r0@23
  signed int result; // r0@23
  const CompoundTag *v16; // [sp+0h] [bp-18h]@0

  v3 = this;
  v4 = a2;
  v5 = *((_BYTE *)this + 15);
  v6 = v5 == 0;
  if ( v5 )
    v6 = *(_DWORD *)v3 == 0;
  if ( v6 || ItemInstance::isNull(v3) || (v7 = *((_WORD *)v3 + 7), !(_BYTE)v7) )
  {
    v9 = *((_BYTE *)v4 + 15) == 0;
    if ( *((_BYTE *)v4 + 15) )
      v9 = *(_DWORD *)v4 == 0;
    if ( v9 || ItemInstance::isNull(v4) || !*((_BYTE *)v4 + 14) )
      return 1;
    v8 = *((_BYTE *)v3 + 15);
  }
  else
    v8 = v7 >> 8;
  v10 = v8 == 0;
  if ( v8 )
    v10 = *(_DWORD *)v3 == 0;
  if ( v10 || ItemInstance::isNull(v3) || !*((_BYTE *)v3 + 14) )
    goto LABEL_28;
  v11 = *((_BYTE *)v4 + 15) == 0;
  if ( *((_BYTE *)v4 + 15) )
    v11 = *(_DWORD *)v4 == 0;
  if ( v11 || ItemInstance::isNull(v4) || !*((_BYTE *)v4 + 14) )
LABEL_28:
    result = 0;
    v12 = (const ItemInstance *)ItemInstance::getId(v4);
    v13 = ItemInstance::getAuxValue(v4);
    v14 = (int *)ItemInstance::getUserData(v4);
    result = Recipe::itemsMatch(v3, v12, v13, *v14, v16);
  return result;
}


char *__fastcall Recipe::getItemPack(Recipe *this)
{
  return (char *)this + 4;
}


int __fastcall Recipe::getRemainingItems(Recipe *this, CraftingContainer *a2, int a3)
{
  Recipe *v3; // r4@1
  int result; // r0@1

  v3 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 44))(a3);
  if ( result )
    result = std::vector<ItemInstance *,std::allocator<ItemInstance *>>::_M_default_append((int)v3, result);
  return result;
}


void __fastcall Recipe::~Recipe(Recipe *this)
{
  Recipe::~Recipe(this);
}
