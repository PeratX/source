

RecipeIngredientSet *__fastcall RecipeIngredientSet::~RecipeIngredientSet(RecipeIngredientSet *this)
{
  RecipeIngredientSet *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 2);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*(_QWORD *)v1, 4 * (*(_QWORD *)v1 >> 32));
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  v4 = *(char **)v1;
  if ( *(_DWORD *)v1 && (char *)v1 + 24 != v4 )
    operator delete(v4);
  return v1;
}


signed int __fastcall RecipeIngredientSet::empty(RecipeIngredientSet *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 3);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


signed int *__fastcall RecipeIngredientSet::add(RecipeIngredientSet *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r10@1
  RecipeIngredientSet *v3; // r5@1
  unsigned int v4; // r0@2
  __int64 v5; // kr00_8@4
  unsigned int v6; // r8@4
  unsigned int v7; // r1@4
  int v8; // r11@4
  signed int **v9; // r6@4
  signed int *v10; // r7@5
  signed int *result; // r0@5
  signed int v12; // r4@5
  _DWORD *v13; // r5@7
  signed int v14; // r4@9
  signed int v15; // r7@10
  signed int *v16; // r10@18
  signed int v17; // r4@18
  signed int *v18; // r5@20
  unsigned int v19; // r0@21
  int v20; // r1@21
  bool v21; // zf@23
  _DWORD *v22; // r0@28
  signed int v23; // [sp+4h] [bp-2Ch]@18
  int v24; // [sp+8h] [bp-28h]@4

  v2 = a2;
  v3 = this;
  if ( ItemInstance::isDamageableItem(a2) == 1 )
    v4 = ItemInstance::getId(v2);
  else
    v4 = ItemInstance::getIdAuxEnchanted(v2);
  v5 = *(_QWORD *)v3;
  v6 = v4;
  v24 = (int)v3;
  v7 = v4 % (unsigned int)(*(_QWORD *)v3 >> 32);
  v8 = v7;
  v9 = *(signed int ***)(*(_QWORD *)v3 + 4 * v7);
  if ( !v9 )
  {
    v14 = 0;
    v15 = *((_BYTE *)v2 + 14);
LABEL_28:
    v22 = operator new(0xCu);
    *v22 = 0;
    v22[1] = v6;
    v22[2] = 0;
    result = (signed int *)std::_Hashtable<int,std::pair<int const,int>,std::allocator<std::pair<int const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                             v24,
                             v8,
                             v6,
                             (int)v22);
    goto LABEL_29;
  }
  v10 = *v9;
  result = *(signed int **)(v5 + 4 * v7);
  v12 = (*v9)[1];
  while ( v6 != v12 )
    v13 = (_DWORD *)*v10;
    if ( !*v10 )
    {
      v14 = 0;
      goto LABEL_17;
    }
    v12 = v13[1];
    result = v10;
    v10 = (signed int *)*v10;
    if ( v13[1] % HIDWORD(v5) != v7 )
  if ( result )
    v14 = *result;
    if ( *result )
      v14 = 1;
LABEL_17:
  v15 = *((_BYTE *)v2 + 14);
    goto LABEL_28;
  v16 = *v9;
  v23 = v14;
  v17 = (*v9)[1];
  while ( v6 != v17 )
    v18 = (signed int *)*v16;
    if ( !*v16 )
      v14 = v23;
      goto LABEL_28;
    v17 = v18[1];
    v19 = v18[1];
    v20 = v19 % HIDWORD(v5);
    result = (signed int *)(v19 / HIDWORD(v5));
    v9 = (signed int **)v16;
    v16 = (signed int *)*v16;
    if ( v20 != v8 )
  v21 = v9 == 0;
  v14 = v23;
  if ( v9 )
    result = *v9;
    v21 = *v9 == 0;
  if ( v21 )
LABEL_29:
  if ( v14 )
    v15 += result[2];
  result[2] = v15;
  return result;
}


int __fastcall RecipeIngredientSet::add(int result, _QWORD *a2)
{
  const ItemInstance *v2; // r5@1 OVERLAPPED
  const ItemInstance *v3; // r6@1 OVERLAPPED
  RecipeIngredientSet *i; // r4@1

  *(_QWORD *)&v2 = *a2;
  for ( i = (RecipeIngredientSet *)result; v3 != v2; v2 = (const ItemInstance *)((char *)v2 + 72) )
    result = (int)RecipeIngredientSet::add(i, v2);
  return result;
}


int __fastcall RecipeIngredientSet::RecipeIngredientSet(int a1)
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


signed int *__fastcall RecipeIngredientSet::set(int a1, unsigned __int64 *a2)
{
  int v2; // r4@1
  unsigned __int64 *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r6@2
  signed int *result; // r0@3
  const ItemInstance *v7; // r5@3
  const ItemInstance *i; // r6@3
  unsigned __int64 v9; // kr00_8@3

  v2 = a1;
  v3 = a2;
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    do
    {
      v5 = *(void **)v4;
      operator delete(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  _aeabi_memclr4(*(_QWORD *)v2, 4 * (*(_QWORD *)v2 >> 32));
  result = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  v9 = *v3;
  v7 = (const ItemInstance *)(*v3 >> 32);
  for ( i = (const ItemInstance *)v9; v7 != i; i = (const ItemInstance *)((char *)i + 72) )
    result = RecipeIngredientSet::add((RecipeIngredientSet *)v2, i);
  return result;
}
