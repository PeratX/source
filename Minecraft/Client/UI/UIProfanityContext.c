

int __fastcall UIProfanityContext::UIProfanityContext(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1

  v3 = a1;
  *(_DWORD *)a1 = 0;
  v4 = a3;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<std::string const,int>,true> const*)#1}>(
    (unsigned int *)a1,
    a2);
  *(_DWORD *)(v3 + 28) = 0;
  v5 = v3 + 28;
  *(_DWORD *)(v5 + 4) = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 12) = *(_DWORD *)(v4 + 12);
  *(_QWORD *)(v5 + 16) = *(_QWORD *)(v4 + 16);
  std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_assign<std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::(std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>> const&)::{lambda(std::__detail::_Hash_node<std::string,true> const*)#1}>(
    (unsigned int *)(v3 + 28),
    v4);
  return v3;
}


UIProfanityContext *__fastcall UIProfanityContext::~UIProfanityContext(UIProfanityContext *this)
{
  UIProfanityContext *v1; // r10@1
  unsigned __int64 *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  unsigned __int64 *v5; // r6@11
  int v6; // r1@11
  void *v7; // r0@11
  char *v8; // r0@13
  unsigned __int64 *v9; // r7@16
  unsigned int *v10; // r2@18
  signed int v11; // r1@20
  unsigned __int64 *v12; // r6@26
  int v13; // r1@26
  void *v14; // r0@26
  char *v15; // r0@28

  v1 = this;
  v2 = (unsigned __int64 *)*((_DWORD *)this + 9);
  while ( v2 )
  {
    v5 = v2;
    v6 = *v2 >> 32;
    v2 = (unsigned __int64 *)*v2;
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex(v3);
        while ( __strex(v4 - 1, v3) );
      }
      else
        v4 = (*v3)--;
      if ( v4 <= 0 )
        j_j_j_j_j__ZdlPv_9(v7);
    }
    operator delete(v5);
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 28), 4 * (*(_QWORD *)((char *)v1 + 28) >> 32));
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 10) = 0;
  v8 = (char *)*((_DWORD *)v1 + 7);
  if ( v8 && (char *)v1 + 52 != v8 )
    operator delete(v8);
  v9 = (unsigned __int64 *)*((_DWORD *)v1 + 2);
  while ( v9 )
    v12 = v9;
    v13 = *v9 >> 32;
    v9 = (unsigned __int64 *)*v9;
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v13 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
    operator delete(v12);
  _aeabi_memclr4(*(_QWORD *)v1, 4 * (*(_QWORD *)v1 >> 32));
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  v15 = *(char **)v1;
  if ( *(_DWORD *)v1 && (char *)v1 + 24 != v15 )
    operator delete(v15);
  return v1;
}
