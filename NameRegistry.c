

void __fastcall NameRegistry::findKeyForNameId(NameRegistry *this, int a2, int a3)
{
  NameRegistry *v3; // r4@1
  int v4; // r7@1
  int v5; // r11@2
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  __int64 v8; // r0@12
  void *v9; // r0@15
  int v10; // [sp+0h] [bp-30h]@3
  unsigned __int16 v11; // [sp+4h] [bp-2Ch]@11

  v3 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 )
  {
    v5 = a3;
    do
    {
      sub_21E8AF4(&v10, (int *)(v4 + 4));
      v11 = *(_WORD *)(v4 + 8);
      if ( v11 == v5 )
      {
        v8 = *(_QWORD *)((char *)v3 + 4);
        if ( (_DWORD)v8 == HIDWORD(v8) )
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
            (unsigned __int64 *)v3,
            &v10);
        else
          *((_DWORD *)v3 + 1) = sub_21E8AF4((int *)v8, &v10) + 1;
      }
      v9 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      v4 = *(_DWORD *)v4;
    }
    while ( v4 );
  }
}


signed int __fastcall NameRegistry::hasEntry(unsigned __int64 *a1, int **a2)
{
  int **v2; // r7@1
  unsigned __int64 *v3; // r5@1
  unsigned int v4; // r0@1
  unsigned int v5; // r9@1
  unsigned int v6; // r10@1
  int v7; // r11@1
  int v8; // r4@1
  int v9; // r6@2
  int *v10; // r8@2
  int v11; // r7@2
  _DWORD *v12; // r1@4
  size_t v13; // r2@4
  int v14; // r5@6
  signed int result; // r0@8

  v2 = a2;
  v3 = a1;
  v4 = sub_21B417C(*a2, *(*a2 - 3), -955291385);
  v5 = *v3 >> 32;
  v6 = v4;
  v7 = v4 % v5;
  v8 = *(_DWORD *)(*v3 + 4 * v7);
  if ( !v8 )
    goto LABEL_8;
  v9 = *(_DWORD *)v8;
  v10 = *v2;
  v11 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    if ( v11 == v6 )
    {
      v12 = *(_DWORD **)(v9 + 4);
      v13 = *(v10 - 3);
      if ( v13 == *(v12 - 3) && !memcmp(v10, v12, v13) )
        break;
    }
    v14 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
      v11 = *(_DWORD *)(v14 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v14 + 12) % v5 == v7 )
        continue;
  }
  if ( v8 )
    result = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
      result = 1;
  else
LABEL_8:
    result = 0;
  return result;
}


int __fastcall NameRegistry::NameRegistry(int a1, char a2)
{
  int v2; // r4@1
  char v3; // r5@1
  int v4; // r6@1
  unsigned int v5; // r0@1
  int v6; // r7@3
  void *v7; // r6@3
  char v9; // [sp+4h] [bp-1Ch]@4

  v2 = a1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v3 = a2;
  *(_DWORD *)(a1 + 16) = 1065353216;
  v4 = a1 + 16;
  *(_DWORD *)(a1 + 20) = 0;
  v5 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, a1 + 16)));
  *(_DWORD *)(v4 - 12) = v5;
  if ( v5 == 1 )
  {
    *(_DWORD *)(v2 + 24) = 0;
    v7 = (void *)(v2 + 24);
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)v2 = v7;
  *(_WORD *)(v2 + 28) = 0;
  *(_BYTE *)(v2 + 30) = v3;
  std::_Hashtable<std::string,std::pair<std::string const,short>,std::allocator<std::pair<std::string const,short>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<char const(&)[11],short const&>(
    &v9,
    (unsigned __int64 *)v2,
    "no_binding",
    &unk_262D314);
  return v2;
}


int __fastcall NameRegistry::getNameId(unsigned __int64 *a1, int **a2)
{
  unsigned __int64 *v2; // r5@1
  unsigned int v3; // r0@1
  unsigned __int64 v4; // kr00_8@1
  unsigned int v5; // r7@1
  unsigned int v6; // r5@1
  int v7; // r8@1
  int v8; // r9@2
  int v9; // r6@2
  _DWORD *v10; // r10@2
  _DWORD *v11; // r1@4
  unsigned int v12; // r6@4
  void *v13; // r0@9
  __int16 v14; // r0@10
  unsigned int v15; // r10@11
  unsigned int v16; // r9@11
  int v17; // r11@11
  int v18; // r4@11
  int v19; // r6@12
  int v20; // r7@12
  _DWORD *v21; // r8@12
  _DWORD *v22; // r1@14
  size_t v23; // r2@14
  int v24; // r5@16
  int result; // r0@18
  bool v26; // zf@22
  unsigned int *v27; // r2@31
  signed int v28; // r1@33
  int *v29; // [sp+0h] [bp-40h]@1
  unsigned __int64 *v30; // [sp+4h] [bp-3Ch]@1
  int v31; // [sp+8h] [bp-38h]@9
  __int16 v32; // [sp+12h] [bp-2Eh]@10

  v2 = a1;
  v29 = (int *)a2;
  v30 = a1;
  v3 = sub_21B417C(*a2, *(*a2 - 3), -955291385);
  v4 = *v2;
  v5 = v3;
  v6 = v3 % (*v2 >> 32);
  v7 = *(_DWORD *)(v4 + 4 * v6);
  if ( !v7 )
    goto LABEL_8;
  v8 = *(_DWORD *)v7;
  v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
  v10 = (_DWORD *)*v29;
  while ( 1 )
  {
    if ( v9 == v5 )
    {
      v11 = *(_DWORD **)(v8 + 4);
      v12 = *(v10 - 3);
      if ( v12 == *(v11 - 3) && !memcmp(v10, v11, *(v10 - 3)) )
        break;
    }
    if ( *(_DWORD *)v8 )
      v9 = *(_DWORD *)(v4 + 12);
      v7 = v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v4 + 12) % HIDWORD(v4) == v6 )
        continue;
  }
  v26 = v7 == 0;
  if ( v7 )
    v26 = *(_DWORD *)v7 == 0;
  if ( v26 )
LABEL_8:
    if ( *((_BYTE *)v30 + 30) )
      sub_21E94B4((void **)&v31, "Request for name: \"");
      v13 = (void *)(v31 - 12);
      if ( (int *)(v31 - 12) != &dword_28898C0 )
      {
        v27 = (unsigned int *)(v31 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
        }
        else
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      }
    v14 = *((_WORD *)v30 + 14);
    *((_WORD *)v30 + 14) = v14 + 1;
    v32 = v14;
    std::_Hashtable<std::string,std::pair<std::string const,short>,std::allocator<std::pair<std::string const,short>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,short>(
      &v31,
      v30,
      v29,
      &v32);
    v10 = (_DWORD *)*v29;
    v12 = *(_DWORD *)(*v29 - 12);
  v15 = sub_21B417C(v10, v12, -955291385);
  v16 = *v30 >> 32;
  v17 = v15 % v16;
  v18 = *(_DWORD *)(*v30 + 4 * v17);
  if ( v18 )
    v19 = *(_DWORD *)v18;
    v20 = *(_DWORD *)(*(_DWORD *)v18 + 12);
    v21 = (_DWORD *)*v29;
    while ( 1 )
      if ( v20 == v15 )
        v22 = *(_DWORD **)(v19 + 4);
        v23 = *(v21 - 3);
        if ( v23 == *(v22 - 3) && !memcmp(v21, v22, v23) )
          break;
      v24 = *(_DWORD *)v19;
      if ( !*(_DWORD *)v19 )
        LOWORD(result) = -1;
        return (signed __int16)result;
      v20 = *(_DWORD *)(v24 + 12);
      v18 = v19;
      v19 = *(_DWORD *)v19;
      if ( *(_DWORD *)(v24 + 12) % v16 != v17 )
    if ( v18 )
      if ( *(_DWORD *)v18 )
        LOWORD(result) = *(_WORD *)(*(_DWORD *)v18 + 8);
      else
    else
      LOWORD(result) = -1;
  else
    LOWORD(result) = -1;
  return (signed __int16)result;
}


void __fastcall NameRegistry::NameRegistry(NameRegistry *this, bool a2)
{
  NameRegistry::NameRegistry((int)this, a2);
}


int __fastcall NameRegistry::registerName(unsigned __int64 *a1, int **a2)
{
  unsigned __int64 *v2; // r4@1
  unsigned int v3; // r0@1
  unsigned __int64 v4; // kr00_8@1
  unsigned int v5; // r6@1
  unsigned int v6; // r4@1
  int v7; // r8@1
  int v8; // r9@2
  int v9; // r5@2
  _DWORD *v10; // r10@2
  const void *v11; // r1@4
  size_t v12; // r2@4
  int result; // r0@5
  int v14; // r7@6
  __int16 v15; // r0@8
  bool v16; // zf@10
  unsigned __int64 *v17; // [sp+0h] [bp-38h]@1
  int *v18; // [sp+4h] [bp-34h]@1
  char v19; // [sp+8h] [bp-30h]@8
  __int16 v20; // [sp+12h] [bp-26h]@8

  v2 = a1;
  v18 = (int *)a2;
  v17 = a1;
  v3 = sub_21B417C(*a2, *(*a2 - 3), -955291385);
  v4 = *v2;
  v5 = v3;
  v6 = v3 % (*v2 >> 32);
  v7 = *(_DWORD *)(v4 + 4 * v6);
  if ( !v7 )
    goto LABEL_8;
  v8 = *(_DWORD *)v7;
  v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
  v10 = (_DWORD *)*v18;
  while ( 1 )
  {
    if ( v9 == v5 )
    {
      v11 = *(const void **)(v8 + 4);
      v12 = *(v10 - 3);
      if ( v12 == *((_DWORD *)v11 - 3) )
      {
        result = memcmp(v10, v11, v12);
        if ( !result )
          break;
      }
    }
    v14 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
      v9 = *(_DWORD *)(v14 + 12);
      v7 = v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v14 + 12) % HIDWORD(v4) == v6 )
        continue;
  }
  v16 = v7 == 0;
  if ( v7 )
    result = *(_DWORD *)v7;
    v16 = *(_DWORD *)v7 == 0;
  if ( v16 )
LABEL_8:
    v15 = *((_WORD *)v17 + 14);
    *((_WORD *)v17 + 14) = v15 + 1;
    v20 = v15;
    result = std::_Hashtable<std::string,std::pair<std::string const,short>,std::allocator<std::pair<std::string const,short>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,short>(
               &v19,
               v17,
               v18,
               &v20);
  return result;
}
