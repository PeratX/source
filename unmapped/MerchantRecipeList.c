

void __fastcall MerchantRecipeList::~MerchantRecipeList(MerchantRecipeList *this)
{
  MerchantRecipeList::~MerchantRecipeList(this);
}


char *__fastcall MerchantRecipeList::addIfNewOrBetter(MerchantRecipeList *this, MerchantRecipe *a2)
{
  MerchantRecipeList *v2; // r4@1
  MerchantRecipe *v3; // r5@1
  ItemInstance *v4; // r1@1
  unsigned __int64 *v5; // r10@1
  ItemInstance *v6; // r0@1
  int v7; // r6@2
  unsigned int v8; // r9@2
  int v9; // r7@4
  __int64 v10; // r1@4
  char *result; // r0@7

  v2 = this;
  v3 = a2;
  v5 = (unsigned __int64 *)((char *)this + 4);
  v4 = (ItemInstance *)*((_DWORD *)this + 1);
  v6 = (ItemInstance *)*((_DWORD *)this + 2);
  if ( v6 != v4 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( MerchantRecipe::isSameButBetter(v3, (ItemInstance *)((char *)v4 + v7)) == 1 )
      {
        v9 = *(_DWORD *)v5 + v7;
        ItemInstance::operator=(v9, (int)v3);
        ItemInstance::operator=(v9 + 72, (int)v3 + 72);
        ItemInstance::operator=(v9 + 144, (int)v3 + 144);
        v10 = *((_QWORD *)v3 + 27);
        *(_BYTE *)(v9 + 224) = *((_BYTE *)v3 + 224);
        *(_QWORD *)(v9 + 216) = v10;
      }
      v6 = (ItemInstance *)(*(_QWORD *)((char *)v2 + 4) >> 32);
      v4 = (ItemInstance *)*(_QWORD *)((char *)v2 + 4);
      v7 += 232;
      ++v8;
    }
    while ( v8 < 1332920885 * ((v6 - v4) >> 3) );
  }
  if ( v6 == *((ItemInstance **)v2 + 3) )
    result = j_j_j__ZNSt6vectorI14MerchantRecipeSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_(v5, (int)v3);
  else
    MerchantRecipe::MerchantRecipe(v6, (int)v3);
    result = (char *)(*((_DWORD *)v2 + 2) + 232);
    *((_DWORD *)v2 + 2) = result;
  return result;
}


void __fastcall MerchantRecipeList::createTag(MerchantRecipeList *this, int a2)
{
  MerchantRecipeList::createTag(this, a2);
}


int __fastcall MerchantRecipeList::getMatchingRecipeFor(MerchantRecipeList *this, const ItemInstance *a2, __int64 a3)
{
  MerchantRecipeList *v3; // r7@1
  int v4; // r8@1
  const ItemInstance *v5; // r11@1
  int v6; // r4@2
  unsigned int v7; // r10@2
  int v8; // r5@3
  int v9; // r9@3
  unsigned int v10; // r6@4
  int v11; // r6@5
  bool v12; // zf@7
  int v13; // r6@12
  unsigned int v14; // r6@13
  __int64 v16; // [sp+4h] [bp-2Ch]@1

  v16 = a3;
  v3 = this;
  v4 = *(_QWORD *)((char *)this + 4);
  v5 = a2;
  if ( *(_QWORD *)((char *)this + 4) >> 32 != v4 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = v4 + v6;
      v9 = *(_DWORD *)v5;
      if ( v9 == *(_DWORD *)MerchantRecipe::getBuyAItem((MerchantRecipe *)(v4 + v6)) )
      {
        v10 = *((_BYTE *)v5 + 14);
        if ( v10 >= *(_BYTE *)(MerchantRecipe::getBuyAItem((MerchantRecipe *)(v4 + v6)) + 14) )
        {
          v11 = *(_DWORD *)HIDWORD(v16);
          if ( v11 == *(_DWORD *)MerchantRecipe::getSellItem((MerchantRecipe *)(v4 + v6)) )
          {
            if ( MerchantRecipe::hasSecondaryBuyItem((MerchantRecipe *)(v4 + v6)) != 1 )
              return v4 + 232 * v7;
            v12 = *(_BYTE *)(v16 + 15) == 0;
            if ( *(_BYTE *)(v16 + 15) )
              v12 = *(_DWORD *)v16 == 0;
            if ( !v12 && !ItemInstance::isNull((ItemInstance *)v16) )
            {
              if ( *(_BYTE *)(v16 + 14) )
              {
                v13 = *(_DWORD *)v16;
                if ( v13 == *(_DWORD *)MerchantRecipe::getBuyBItem((MerchantRecipe *)(v4 + v6)) )
                {
                  v14 = *(_BYTE *)(v16 + 14);
                  if ( v14 >= (unsigned __int8)MerchantRecipe::getBuyBItem((MerchantRecipe *)(v4 + v6))[14] )
                    return v8;
                }
              }
            }
          }
        }
      }
      v4 = *(_QWORD *)((char *)v3 + 4);
      v6 += 232;
      ++v7;
    }
    while ( v7 < 1332920885 * ((signed int)((*(_QWORD *)((char *)v3 + 4) >> 32) - v4) >> 3) );
  }
  return 0;
}


MerchantRecipe *__fastcall MerchantRecipeList::getRecipeFor(MerchantRecipeList *this, const ItemInstance *a2, const ItemInstance *a3, int a4)
{
  const ItemInstance *v4; // r9@1
  int v5; // r0@2
  char *v6; // r7@2
  int v7; // r1@2
  _DWORD *v8; // r10@2
  MerchantRecipe *v9; // r6@3
  ItemInstance *v10; // r7@3
  bool v11; // zf@7
  ItemInstance *v12; // r7@14
  unsigned int v13; // r4@18
  unsigned int v14; // r4@20
  int v15; // r4@25
  int v16; // r8@25
  ItemInstance *v17; // r5@26
  unsigned int v18; // r5@30
  ItemInstance *v19; // r5@32
  unsigned int v20; // r5@36
  ItemInstance *v22; // [sp+0h] [bp-28h]@1

  v4 = a3;
  v22 = a2;
  if ( a4 <= -1 )
  {
    v6 = (char *)this + 4;
    v5 = *((_DWORD *)this + 1);
    v8 = v6 + 4;
    v7 = *((_DWORD *)v6 + 1);
  }
  else
    if ( 1332920885 * ((v7 - v5) >> 3) > a4 )
    {
      v9 = (MerchantRecipe *)(v5 + 232 * a4);
      v10 = (ItemInstance *)MerchantRecipe::getBuyAItem((MerchantRecipe *)(v5 + 232 * a4));
      if ( *(_DWORD *)v22 == *(_DWORD *)v10
        && (ItemInstance::hasUserData(v10) != 1
         || ItemInstance::hasUserData(v22) == 1 && ItemInstance::hasSameUserData(v22, v10) == 1) )
      {
        v11 = *((_BYTE *)v4 + 15) == 0;
        if ( *((_BYTE *)v4 + 15) )
          v11 = *(_DWORD *)v4 == 0;
        if ( (v11 || ItemInstance::isNull(v4) || !*((_BYTE *)v4 + 14)) && MerchantRecipe::hasSecondaryBuyItem(v9) != 1
          || MerchantRecipe::hasSecondaryBuyItem(v9) == 1
          && (v12 = (ItemInstance *)MerchantRecipe::getBuyBItem(v9), *(_DWORD *)v4 == *(_DWORD *)v12)
          && (ItemInstance::hasUserData(v12) != 1
           || ItemInstance::hasUserData(v4) == 1 && ItemInstance::hasSameUserData(v4, v12) == 1) )
        {
          v13 = *((_BYTE *)v22 + 14);
          if ( v13 >= *(_BYTE *)(MerchantRecipe::getBuyAItem(v9) + 14) )
          {
            if ( MerchantRecipe::hasSecondaryBuyItem(v9) == 1 )
            {
              v14 = *((_BYTE *)v4 + 14);
              if ( v14 < (unsigned __int8)MerchantRecipe::getBuyBItem(v9)[14] )
                v9 = 0;
            }
            return v9;
          }
        }
      }
      return 0;
    }
  if ( v7 == v5 )
    return 0;
  v15 = 0;
  v16 = 0;
  while ( 1 )
    v9 = (MerchantRecipe *)(v5 + v15);
    v17 = (ItemInstance *)MerchantRecipe::getBuyAItem((MerchantRecipe *)(v5 + v15));
    if ( *(_DWORD *)v4 == *(_DWORD *)v17
      && (ItemInstance::hasUserData(v17) != 1
       || ItemInstance::hasUserData(v4) == 1 && ItemInstance::hasSameUserData(v4, v17) == 1) )
      v18 = *((_BYTE *)v22 + 14);
      if ( v18 >= *(_BYTE *)(MerchantRecipe::getBuyAItem(v9) + 14) && !MerchantRecipe::hasSecondaryBuyItem(v9) )
        v19 = (ItemInstance *)MerchantRecipe::getBuyBItem(v9);
        if ( *(_DWORD *)v4 == *(_DWORD *)v19
          && (ItemInstance::hasUserData(v19) != 1
           || ItemInstance::hasUserData(v4) == 1 && ItemInstance::hasSameUserData(v4, v19) == 1) )
          v20 = *((_BYTE *)v4 + 14);
          if ( v20 >= (unsigned __int8)MerchantRecipe::getBuyBItem(v9)[14] )
            break;
    v5 = *(_DWORD *)v6;
    v15 += 232;
    if ( ++v16 >= (unsigned int)(1332920885 * ((*v8 - *(_DWORD *)v6) >> 3)) )
  return v9;
}


MerchantRecipeList *__fastcall MerchantRecipeList::MerchantRecipeList(MerchantRecipeList *this, const CompoundTag *a2)
{
  MerchantRecipeList *v2; // r4@1

  v2 = this;
  *(_DWORD *)this = &off_2703908;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  MerchantRecipeList::load(this, a2);
  return v2;
}


MerchantRecipeList *__fastcall MerchantRecipeList::~MerchantRecipeList(MerchantRecipeList *this)
{
  MerchantRecipeList *v1; // r4@1
  MerchantRecipe *v2; // r0@1
  MerchantRecipe *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_2703908;
  v3 = (MerchantRecipe *)(*(_QWORD *)((char *)this + 4) >> 32);
  v2 = (MerchantRecipe *)*(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
      v2 = (MerchantRecipe *)((char *)MerchantRecipe::~MerchantRecipe(v2) + 232);
    while ( v3 != v2 );
    v2 = (MerchantRecipe *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete((void *)v2);
  return v1;
}


void __fastcall MerchantRecipeList::createTag(MerchantRecipeList *this, int a2)
{
  MerchantRecipeList *v2; // r4@1
  int v3; // r6@1
  void *v4; // r7@1
  void *v5; // r5@1
  __int64 v6; // r0@1
  int v7; // r8@2
  unsigned int v8; // r9@2
  int v9; // r0@3
  void *v10; // r0@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  void *v13; // [sp+Ch] [bp-3Ch]@8
  int v14; // [sp+14h] [bp-34h]@8
  int v15; // [sp+18h] [bp-30h]@3
  int v16; // [sp+1Ch] [bp-2Ch]@3

  v2 = this;
  v3 = a2;
  v4 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v4);
  *(_DWORD *)v2 = v4;
  v5 = operator new(0x14u);
  ListTag::ListTag((int)v5);
  v6 = *(_QWORD *)(v3 + 4);
  if ( HIDWORD(v6) != (_DWORD)v6 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      MerchantRecipe::createTag((MerchantRecipe *)&v15, v6 + v7);
      v9 = v15;
      v15 = 0;
      v16 = v9;
      ListTag::add((int)v5, &v16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
      v16 = 0;
      if ( v15 )
        (*(void (**)(void))(*(_DWORD *)v15 + 4))();
      v7 += 232;
      v6 = *(_QWORD *)(v3 + 4);
      ++v8;
    }
    while ( v8 < 1332920885 * ((HIDWORD(v6) - (signed int)v6) >> 3) );
  }
  sub_21E94B4((void **)&v14, "Recipes");
  v13 = v5;
  CompoundTag::put((int)v4, (const void **)&v14, (int *)&v13);
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  v13 = 0;
  v10 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


void __fastcall MerchantRecipeList::load(MerchantRecipeList *this, const CompoundTag *a2)
{
  MerchantRecipeList *v2; // r4@1
  const CompoundTag *v3; // r5@1
  MerchantRecipe *v4; // r6@1
  unsigned __int64 *v5; // r8@1
  MerchantRecipe *v6; // r7@1
  MerchantRecipe *v7; // r0@2
  ListTag *v8; // r6@4
  void *v9; // r0@4
  signed int v10; // r7@7
  const CompoundTag *v11; // r0@8
  __int64 v12; // r0@8
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  int v15; // [sp+0h] [bp-110h]@8
  int v16; // [sp+F0h] [bp-20h]@4

  v2 = this;
  v3 = a2;
  v5 = (unsigned __int64 *)((char *)this + 4);
  v4 = (MerchantRecipe *)*((_DWORD *)this + 1);
  v6 = (MerchantRecipe *)*((_DWORD *)this + 2);
  if ( v6 != v4 )
  {
    v7 = (MerchantRecipe *)*((_DWORD *)this + 1);
    do
      v7 = (MerchantRecipe *)((char *)MerchantRecipe::~MerchantRecipe(v7) + 232);
    while ( v6 != v7 );
  }
  *((_DWORD *)v2 + 2) = v4;
  sub_21E94B4((void **)&v16, "Recipes");
  v8 = (ListTag *)CompoundTag::getList((int)v3, (const void **)&v16);
  v9 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  if ( v8 && ListTag::size(v8) >= 1 )
    v10 = 0;
      v11 = (const CompoundTag *)ListTag::getCompound(v8, v10);
      MerchantRecipe::MerchantRecipe((int)&v15, v11);
      v12 = *((_QWORD *)v2 + 1);
      if ( (_DWORD)v12 == HIDWORD(v12) )
      {
        std::vector<MerchantRecipe,std::allocator<MerchantRecipe>>::_M_emplace_back_aux<MerchantRecipe>(v5, (int)&v15);
      }
      else
        MerchantRecipe::MerchantRecipe((ItemInstance *)v12, (int)&v15);
        *((_DWORD *)v2 + 2) += 232;
      MerchantRecipe::~MerchantRecipe((MerchantRecipe *)&v15);
      ++v10;
    while ( v10 < ListTag::size(v8) );
}


void __fastcall MerchantRecipeList::load(MerchantRecipeList *this, const CompoundTag *a2)
{
  MerchantRecipeList::load(this, a2);
}


int __fastcall MerchantRecipeList::MerchantRecipeList(int result)
{
  *(_QWORD *)result = (unsigned int)&off_2703908;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


signed int __fastcall MerchantRecipeList::isRequiredItem(MerchantRecipeList *this, const ItemInstance *a2, const ItemInstance *a3)
{
  ItemInstance *v3; // r5@1
  const ItemInstance *v4; // r4@1
  signed int result; // r0@2

  v3 = a2;
  v4 = a3;
  if ( *(_DWORD *)a2 == *(_DWORD *)a3 )
  {
    if ( ItemInstance::hasUserData(a3) == 1 )
    {
      if ( ItemInstance::hasUserData(v3) == 1 )
        result = ItemInstance::hasSameUserData(v3, v4);
      else
        result = 0;
    }
    else
      result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall MerchantRecipeList::~MerchantRecipeList(MerchantRecipeList *this)
{
  MerchantRecipeList *v1; // r4@1
  MerchantRecipe *v2; // r0@1
  MerchantRecipe *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_2703908;
  v3 = (MerchantRecipe *)(*(_QWORD *)((char *)this + 4) >> 32);
  v2 = (MerchantRecipe *)*(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
      v2 = (MerchantRecipe *)((char *)MerchantRecipe::~MerchantRecipe(v2) + 232);
    while ( v3 != v2 );
    v2 = (MerchantRecipe *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete((void *)v2);
  j_j_j__ZdlPv_6((void *)v1);
}
