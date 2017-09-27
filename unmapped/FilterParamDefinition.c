

FilterParamDefinition *__fastcall FilterParamDefinition::~FilterParamDefinition(FilterParamDefinition *this)
{
  FilterParamDefinition *v1; // r4@1
  _DWORD *v2; // r1@1
  _DWORD *v3; // r6@2
  char *v4; // r0@3
  int v5; // r1@6
  void *v6; // r0@6
  int v7; // r1@7
  void *v8; // r0@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15

  v1 = this;
  v2 = (_DWORD *)*((_DWORD *)this + 9);
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<std::string const,FilterInputDefinition>,true>>>::_M_deallocate_node(
        (int)v1 + 28,
        (int)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 28), 4 * (*(_QWORD *)((char *)v1 + 28) >> 32));
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 10) = 0;
  v4 = (char *)*((_DWORD *)v1 + 7);
  if ( v4 && (char *)v1 + 52 != v4 )
    operator delete(v4);
  v5 = *((_DWORD *)v1 + 4);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = *((_DWORD *)v1 + 2);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v7 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  return v1;
}


int __fastcall FilterParamDefinition::FilterParamDefinition(int a1, int r1_0, __int64 a2, int *a3, int a4, int a5)
{
  int v6; // r6@1
  int v7; // r0@1
  int v9; // [sp+4h] [bp-1Ch]@1

  v6 = a1;
  *(_QWORD *)a1 = *(__int64 *)((char *)&a2 - 4);
  sub_21E8AF4((int *)(a1 + 8), (int *)HIDWORD(a2));
  *(_DWORD *)(v6 + 12) = *a3;
  sub_21E8AF4((int *)(v6 + 16), a3 + 1);
  *(_QWORD *)(v6 + 20) = *((_QWORD *)a3 + 1);
  *(_DWORD *)(v6 + 28) = 0;
  v7 = v6 + 28;
  *(_DWORD *)(v7 + 4) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 12) = *(_DWORD *)(a4 + 12);
  *(_QWORD *)(v7 + 16) = *(_QWORD *)(a4 + 16);
  v9 = v6 + 28;
  std::_Hashtable<std::string,std::pair<std::string const,FilterInputDefinition>,std::allocator<std::pair<std::string const,FilterInputDefinition>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<std::string,std::pair<std::string const,FilterInputDefinition>,std::allocator<std::pair<std::string const,FilterInputDefinition>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<std::string,std::pair<std::string const,FilterInputDefinition>,std::allocator<std::pair<std::string const,FilterInputDefinition>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<std::string const,FilterInputDefinition>,true> const*)#1}>(
    (unsigned int *)(v6 + 28),
    a4,
    &v9);
  return v6;
}
