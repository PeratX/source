

int __fastcall BlockPalette::BlockPalette(int a1)
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
    v5 = j_operator new(4 * v3);
    j___aeabi_memclr4((int)v5, v4);
  result = v1;
  *(_DWORD *)v1 = v5;
  return result;
}


int __fastcall BlockPalette::clearMap(BlockPalette *this)
{
  BlockPalette *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  int result; // r0@3

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 2);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      j_operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  j___aeabi_memclr4(*(_QWORD *)v1, 4 * (*(_QWORD *)v1 >> 32));
  result = 0;
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  return result;
}


unsigned int __fastcall BlockPalette::getId(BlockPalette *this, const FullBlock *a2)
{
  BlockPalette *v2; // r9@1
  const FullBlock *v3; // r8@1
  int v4; // r0@1
  int v5; // r1@2
  __int64 v6; // kr00_8@5
  unsigned int v7; // r11@5
  int v8; // r10@5
  int v9; // r0@5
  _DWORD *v10; // r6@6
  int v11; // r5@6
  _DWORD *v12; // r7@8
  bool v13; // zf@12
  _DWORD *v14; // r0@16

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 2);
  if ( v4 )
  {
    v5 = *(_WORD *)a2;
    while ( *(_WORD *)(v4 + 8) != v5 )
    {
      v4 = *(_DWORD *)v4;
      if ( !v4 )
        goto LABEL_5;
    }
    v7 = *(_DWORD *)(v4 + 4);
  }
  else
LABEL_5:
    v6 = *(_QWORD *)v2;
    v7 = *((_DWORD *)v2 + 3);
    v8 = *((_DWORD *)v2 + 3) % (unsigned int)(*(_QWORD *)v2 >> 32);
    v9 = *(_DWORD *)(*(_QWORD *)v2 + 4 * v8);
    if ( !v9 )
      goto LABEL_16;
    v10 = *(_DWORD **)v9;
    v11 = *(_DWORD *)(*(_DWORD *)v9 + 4);
    while ( v7 != v11 )
      v12 = (_DWORD *)*v10;
      if ( *v10 )
      {
        v11 = v12[1];
        v9 = (int)v10;
        v10 = (_DWORD *)*v10;
        if ( v12[1] % HIDWORD(v6) == v8 )
          continue;
      }
    v13 = v9 == 0;
    if ( v9 )
      v9 = *(_DWORD *)v9;
      v13 = v9 == 0;
    if ( v13 )
LABEL_16:
      v14 = j_operator new(0xCu);
      *v14 = 0;
      v14[1] = v7;
      *((_WORD *)v14 + 4) = 0;
      v9 = std::_Hashtable<int,std::pair<int const,FullBlock>,std::allocator<std::pair<int const,FullBlock>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
             (int)v2,
             v8,
             v7,
             (int)v14);
    *(_BYTE *)(v9 + 8) = *(_BYTE *)v3;
    *(_BYTE *)(v9 + 9) = *((_BYTE *)v3 + 1);
  return v7;
}


int *__fastcall BlockPalette::addMapping(unsigned __int64 *a1, unsigned int a2, int a3)
{
  unsigned __int64 *v3; // r9@1
  unsigned int v4; // r11@1
  unsigned __int64 v5; // kr00_8@1
  int v6; // r8@1
  int v7; // r10@1
  int *result; // r0@1
  int *v9; // r5@2
  int v10; // r6@2
  int v11; // r7@4
  bool v12; // zf@7
  _DWORD *v13; // r0@11

  v3 = a1;
  v4 = a2;
  v5 = *a1;
  v6 = a3;
  v7 = a2 % (*a1 >> 32);
  result = *(int **)(*a1 + 4 * v7);
  if ( !result )
    goto LABEL_11;
  v9 = (int *)*result;
  v10 = *(_DWORD *)(*result + 4);
  while ( v10 != a2 )
  {
    v11 = *v9;
    if ( *v9 )
    {
      v10 = *(_DWORD *)(v11 + 4);
      result = (int *)v5;
      v9 = *(int **)v5;
      if ( *(_DWORD *)(v11 + 4) % HIDWORD(v5) == v7 )
        continue;
    }
  }
  v12 = result == 0;
  if ( result )
    result = (int *)*result;
    v12 = result == 0;
  if ( v12 )
LABEL_11:
    v13 = j_operator new(0xCu);
    *v13 = 0;
    v13[1] = v4;
    *((_WORD *)v13 + 4) = 0;
    result = (int *)std::_Hashtable<int,std::pair<int const,FullBlock>,std::allocator<std::pair<int const,FullBlock>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                      (int)v3,
                      v7,
                      v4,
                      (int)v13);
  *((_BYTE *)result + 8) = *(_BYTE *)v6;
  *((_BYTE *)result + 9) = *(_BYTE *)(v6 + 1);
  return result;
}


_DWORD *__fastcall BlockPalette::getBlock(BlockPalette *this, int a2)
{
  __int64 v2; // kr00_8@1
  unsigned int v3; // r6@1
  int **v4; // r0@1
  int *v5; // r4@2
  int v6; // r7@2
  int v7; // r5@4
  int *v8; // r1@6
  _DWORD *result; // r0@13

  v2 = *(_QWORD *)this;
  v3 = a2 % (unsigned int)(*(_QWORD *)this >> 32);
  v4 = *(int ***)(*(_QWORD *)this + 4 * v3);
  if ( v4 )
  {
    v5 = *v4;
    v6 = (*v4)[1];
    while ( v6 != a2 )
    {
      v7 = *v5;
      if ( !*v5 )
      {
        v8 = 0;
        goto LABEL_13;
      }
      v6 = *(_DWORD *)(v7 + 4);
      v4 = (int **)v2;
      v5 = *(int **)v2;
      if ( *(_DWORD *)(v7 + 4) % HIDWORD(v2) != v3 )
    }
    if ( v4 )
      v8 = *v4;
    else
      v8 = 0;
  }
  else
    v8 = 0;
LABEL_13:
  result = v8 + 2;
  if ( !v8 )
    result = &FullBlock::AIR;
  return result;
}
