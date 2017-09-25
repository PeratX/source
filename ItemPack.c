

int __fastcall ItemPack::IdAuxTag::IdAuxTag(int a1, int a2)
{
  int v2; // r4@1
  CompoundTag *v3; // r0@1
  int v4; // r1@1
  int result; // r0@2

  v2 = a1;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  v3 = (CompoundTag *)(a1 + 8);
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 )
  {
    CompoundTag::clone(v3, v4);
    result = v2;
  }
  else
    *(_DWORD *)v3 = 0;
  return result;
}


int __fastcall ItemPack::getCount(ItemPack *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r6@1
  ItemPack *v3; // r8@1
  int *v4; // r7@1
  signed int v5; // r5@1
  int v6; // r0@1
  int v7; // r9@4
  unsigned int v8; // r10@4
  int v9; // r5@4
  int v10; // r6@5
  int v11; // r7@5
  int v12; // r1@8
  bool v13; // zf@8
  int v14; // r4@14
  int v15; // r4@16
  unsigned __int64 v17; // [sp+4h] [bp-2Ch]@1
  int v18; // [sp+Ch] [bp-24h]@2

  v2 = a2;
  v3 = this;
  v4 = (int *)ItemInstance::getUserData(a2);
  v5 = ItemInstance::getId(v2);
  v6 = ItemInstance::getAuxValue(v2);
  v17 = __PAIR__(v6, v5);
  if ( *v4 )
  {
    CompoundTag::clone((CompoundTag *)&v18, *v4);
    v6 = HIDWORD(v17);
    v5 = v17;
  }
  else
    v18 = 0;
  v7 = v6 ^ v5;
  v8 = (v6 ^ (unsigned int)v5) % (unsigned int)(*(_QWORD *)v3 >> 32);
  v9 = *(_DWORD *)(*(_QWORD *)v3 + 4 * v8);
  if ( !v9 )
    v15 = 0;
    goto LABEL_19;
  v10 = *(_DWORD *)v9;
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 20);
  while ( 1 )
    if ( v11 != v7 || v17 != *(_QWORD *)(v10 + 4) )
      goto LABEL_14;
    v12 = *(_DWORD *)(v10 + 12);
    v13 = v18 == 0;
    if ( v18 )
      v13 = v12 == 0;
    if ( v13 )
      break;
    if ( (*(int (**)(void))(*(_DWORD *)v18 + 28))() )
      goto LABEL_22;
LABEL_14:
    v14 = *(_DWORD *)v10;
    if ( !*(_DWORD *)v10 )
    {
      v15 = 0;
      goto LABEL_19;
    }
    v11 = *(_DWORD *)(v14 + 20);
    v9 = v10;
    v10 = *(_DWORD *)v10;
    if ( *(_DWORD *)(v14 + 20) % *((_DWORD *)v3 + 1) != v8 )
  if ( v18 | v12 )
    goto LABEL_14;
LABEL_22:
  if ( v9 )
    if ( *(_DWORD *)v9 )
      v15 = *(_DWORD *)(*(_DWORD *)v9 + 16);
    else
LABEL_19:
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  return v15;
}


int __fastcall ItemPack::add(ItemPack *this, const ItemInstance *a2, int a3)
{
  ItemInstance *v3; // r5@1
  int v4; // r8@1
  ItemPack *v5; // r9@1
  int *v6; // r7@1
  signed int v7; // r6@1
  int v8; // r0@1
  int v9; // r10@4
  unsigned int v10; // r11@4
  int *v11; // r6@4
  int v12; // r7@5
  int v13; // r5@5
  int v14; // r1@9
  bool v15; // zf@9
  int v16; // r0@12
  int v17; // r4@15
  int result; // r0@18
  bool v19; // zf@21
  char v20; // [sp+4h] [bp-3Ch]@17
  int v21; // [sp+Ch] [bp-34h]@1
  int v22; // [sp+10h] [bp-30h]@1
  int v23; // [sp+14h] [bp-2Ch]@2
  int v24; // [sp+18h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  v24 = a3;
  v6 = (int *)ItemInstance::getUserData(a2);
  v7 = ItemInstance::getId(v3);
  v8 = ItemInstance::getAuxValue(v3);
  v21 = v7;
  v22 = v8;
  if ( *v6 )
  {
    CompoundTag::clone((CompoundTag *)&v23, *v6);
    v8 = v22;
    v7 = v21;
  }
  else
    v23 = 0;
  v9 = v8 ^ v7;
  v10 = (v8 ^ (unsigned int)v7) % (unsigned int)(*(_QWORD *)v5 >> 32);
  v11 = *(int **)(*(_QWORD *)v5 + 4 * v10);
  if ( !v11 )
    goto LABEL_17;
  v12 = *v11;
  v13 = *(_DWORD *)(*v11 + 20);
  while ( 1 )
    if ( v13 != v9 || v21 != *(_DWORD *)(v12 + 4) || v22 != *(_DWORD *)(v12 + 8) )
      goto LABEL_15;
    v14 = *(_DWORD *)(v12 + 12);
    v15 = v23 == 0;
    if ( v23 )
      v15 = v14 == 0;
    if ( v15 )
      break;
    v16 = (*(int (**)(void))(*(_DWORD *)v23 + 28))();
    if ( v16 )
      goto LABEL_21;
LABEL_15:
    v17 = *(_DWORD *)v12;
    if ( *(_DWORD *)v12 )
    {
      v13 = *(_DWORD *)(v17 + 20);
      v11 = (int *)v12;
      v12 = *(_DWORD *)v12;
      if ( *(_DWORD *)(v17 + 20) % *((_DWORD *)v5 + 1) == v10 )
        continue;
    }
  v16 = v23 | v14;
  if ( v23 | v14 )
    goto LABEL_15;
LABEL_21:
  v19 = v11 == 0;
  if ( v11 )
    v16 = *v11;
    v19 = *v11 == 0;
  if ( v19 )
LABEL_17:
    std::_Hashtable<ItemPack::IdAuxTag,std::pair<ItemPack::IdAuxTag const,int>,std::allocator<std::pair<ItemPack::IdAuxTag const,int>>,std::__detail::_Select1st,std::equal_to<ItemPack::IdAuxTag>,ItemPack::KeyHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<ItemPack::IdAuxTag&,int &>(
      (int *)&v20,
      (int)v5,
      (int)&v21,
      &v24);
    goto LABEL_18;
  *(_DWORD *)(v16 + 16) += v4;
LABEL_18:
  result = v23;
  if ( v23 )
    result = (*(int (**)(void))(*(_DWORD *)v23 + 4))();
  return result;
}


ItemInstance *__fastcall ItemPack::getRecipeItemInstance(ItemPack *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r5@1
  ItemInstance *v3; // r4@1
  ItemInstance *result; // r0@3

  v2 = a2;
  v3 = this;
  if ( Recipe::isAnyAuxValue(a2, a2) || ItemInstance::isDamageableItem(v2) == 1 )
  {
    ItemInstance::ItemInstance(v3, (int)v2);
    result = (ItemInstance *)ItemInstance::setAuxValue(v3, 0x7FFF);
  }
  else
    result = ItemInstance::ItemInstance(v3, (int)v2);
  return result;
}


int __fastcall ItemPack::getItemInstances(ItemPack *this, int a2)
{
  ItemPack *v2; // r4@1
  int result; // r0@1
  int i; // r6@1
  __int64 v5; // r0@2
  char v6; // [sp+8h] [bp-60h]@2
  int v7; // [sp+10h] [bp-58h]@9
  void *v8; // [sp+2Ch] [bp-3Ch]@7
  void *ptr; // [sp+3Ch] [bp-2Ch]@5

  v2 = this;
  result = 0;
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  for ( i = *(_DWORD *)(a2 + 8); i; i = *(_DWORD *)i )
  {
    ItemInstance::ItemInstance(
      (ItemInstance *)&v6,
      *(_QWORD *)(i + 4),
      *(_QWORD *)(i + 12) >> 32,
      *(_QWORD *)(i + 4) >> 32,
      *(_QWORD *)(i + 12));
    v5 = *(_QWORD *)((char *)v2 + 4);
    if ( (_DWORD)v5 == HIDWORD(v5) )
      std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance const&>(
        (unsigned __int64 *)v2,
        (int)&v6);
    else
      *((_DWORD *)v2 + 1) = (char *)ItemInstance::ItemInstance((ItemInstance *)v5, (int)&v6) + 72;
    if ( ptr )
      operator delete(ptr);
    if ( v8 )
      operator delete(v8);
    result = v7;
    if ( v7 )
      result = (*(int (**)(void))(*(_DWORD *)v7 + 4))();
  }
  return result;
}


_QWORD *__fastcall ItemPack::IdAuxTag::IdAuxTag(int a1, __int64 a2, int *a3)
{
  _QWORD *v3; // r4@1
  CompoundTag *v4; // r0@1
  _QWORD *result; // r0@2

  v3 = (_QWORD *)a1;
  v4 = (CompoundTag *)(a1 + 8);
  *v3 = a2;
  if ( *a3 )
  {
    CompoundTag::clone(v4, *a3);
    result = v3;
  }
  else
    *(_DWORD *)v4 = 0;
  return result;
}


int __fastcall ItemPack::ItemPack(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3
  int result; // r0@4

  v1 = a1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 1065353216;
  v2 = a1 + 16;
  *(_DWORD *)(a1 + 20) = 0;
  v3 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, a1 + 16)));
  *(_DWORD *)(v2 - 12) = v3;
  if ( v3 == 1 )
  {
    *(_DWORD *)(v1 + 24) = 0;
    v5 = (void *)(v1 + 24);
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  result = v1;
  *(_DWORD *)v1 = v5;
  return result;
}


signed int __fastcall ItemPack::remove(ItemPack *this, const ItemInstance *a2, int a3)
{
  ItemInstance *v3; // r5@1
  ItemPack *v4; // r9@1
  int v5; // r8@1
  int *v6; // r7@1
  signed int v7; // r6@1
  int v8; // r0@1
  int v9; // r10@4
  unsigned int v10; // r11@4
  int *v11; // r6@4
  int v12; // r7@5
  int v13; // r5@5
  int v14; // r1@8
  bool v15; // zf@8
  int v16; // r4@14
  signed int v17; // r6@16
  int v19; // r1@23
  int v20; // r0@24
  unsigned __int64 v21; // [sp+0h] [bp-30h]@1
  int v22; // [sp+8h] [bp-28h]@2

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (int *)ItemInstance::getUserData(a2);
  v7 = ItemInstance::getId(v3);
  v8 = ItemInstance::getAuxValue(v3);
  v21 = __PAIR__(v8, v7);
  if ( *v6 )
  {
    CompoundTag::clone((CompoundTag *)&v22, *v6);
    v8 = HIDWORD(v21);
    v7 = v21;
  }
  else
    v22 = 0;
  v9 = v8 ^ v7;
  v10 = (v8 ^ (unsigned int)v7) % (unsigned int)(*(_QWORD *)v4 >> 32);
  v11 = *(int **)(*(_QWORD *)v4 + 4 * v10);
  if ( !v11 )
    v17 = 0;
    goto LABEL_19;
  v12 = *v11;
  v13 = *(_DWORD *)(*v11 + 20);
  while ( 1 )
    if ( v13 != v9 || v21 != *(_QWORD *)(v12 + 4) )
      goto LABEL_14;
    v14 = *(_DWORD *)(v12 + 12);
    v15 = v22 == 0;
    if ( v22 )
      v15 = v14 == 0;
    if ( v15 )
      break;
    if ( (*(int (**)(void))(*(_DWORD *)v22 + 28))() )
      goto LABEL_22;
LABEL_14:
    v16 = *(_DWORD *)v12;
    if ( !*(_DWORD *)v12 )
    {
      v17 = 0;
      goto LABEL_19;
    }
    v13 = *(_DWORD *)(v16 + 20);
    v11 = (int *)v12;
    v12 = *(_DWORD *)v12;
    if ( *(_DWORD *)(v16 + 20) % *((_DWORD *)v4 + 1) != v10 )
  if ( v22 | v14 )
    goto LABEL_14;
LABEL_22:
  if ( v11 )
    v19 = *v11;
    if ( v19 )
      v20 = *(_DWORD *)(v19 + 16) - v5;
      *(_DWORD *)(v19 + 16) = v20;
      if ( v20 > -1 )
        v17 = 1;
      if ( v20 <= 0 )
        std::_Hashtable<ItemPack::IdAuxTag,std::pair<ItemPack::IdAuxTag const,int>,std::allocator<std::pair<ItemPack::IdAuxTag const,int>>,std::__detail::_Select1st,std::equal_to<ItemPack::IdAuxTag>,ItemPack::KeyHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::erase(
          (unsigned __int64 *)v4,
          v19);
LABEL_19:
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  return v17;
}


int __fastcall ItemPack::ItemPack(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r7@1
  unsigned int v6; // r1@1
  int v7; // r0@1
  _DWORD *v8; // r2@1

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)a2;
  v5 = a2 + 24;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v6 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 4) = v6;
  v7 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v3 + 8) = v7;
  *(_DWORD *)(v3 + 12) = *(_DWORD *)(v2 + 12);
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(v2 + 16);
  v8 = *(_DWORD **)v2;
  if ( v5 == *(_DWORD *)v2 )
  {
    v4 = v3 + 24;
    *(_DWORD *)v3 = v3 + 24;
    *(_DWORD *)(v3 + 24) = *v8;
  }
  if ( v7 )
    *(_DWORD *)(v4 + 4 * (*(_DWORD *)(v7 + 20) % v6)) = v3 + 8;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)v2 = v5;
  *(_DWORD *)(v2 + 4) = 1;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  return v3;
}
