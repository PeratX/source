

signed int __fastcall ThirdPartyInfo::isEligible(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r2@2
  _DWORD *v5; // r1@3
  size_t v6; // r3@3
  unsigned int v7; // r0@4
  signed int result; // r0@6

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a2;
  if ( v2 )
  {
    v4 = *a2;
    while ( 1 )
    {
      v5 = *(_DWORD **)(v2 + 4);
      v6 = *(v5 - 3);
      if ( *(_DWORD *)(v4 - 12) >= v6 )
      {
        v7 = sub_21E7848(v3, v5, 0xFFFFFFFF, v6);
        v4 = *v3;
        if ( v7 == *(_DWORD *)(*v3 - 12) - *(_DWORD *)(*(_DWORD *)(v2 + 4) - 12) )
          break;
      }
      v2 = *(_DWORD *)v2;
      if ( !v2 )
        goto LABEL_6;
    }
    result = 1;
  }
  else
LABEL_6:
    result = 0;
  return result;
}


char *__fastcall ThirdPartyInfo::getCreatorName(ThirdPartyInfo *this)
{
  return (char *)this + 32;
}


char *__fastcall ThirdPartyInfo::getCreatorId(ThirdPartyInfo *this)
{
  return (char *)this + 28;
}


ThirdPartyInfo *__fastcall ThirdPartyInfo::~ThirdPartyInfo(ThirdPartyInfo *this)
{
  ThirdPartyInfo *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  v2 = *((_DWORD *)this + 8);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 7);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  std::unordered_set<std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>::~unordered_set((int)v1);
  return v1;
}


int __fastcall ThirdPartyInfo::ThirdPartyInfo(double a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3

  v1 = LODWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 1065353216;
  LODWORD(a1) += 16;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = sub_21E6254(a1);
  *(_DWORD *)(v1 + 4) = v2;
  if ( v2 == 1 )
  {
    *(_DWORD *)(v1 + 24) = 0;
    v4 = (void *)(v1 + 24);
  }
  else
    if ( v2 >= 0x40000000 )
      sub_21E57F4();
    v3 = 4 * v2;
    v4 = operator new(4 * v2);
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)v1 = v4;
  sub_21E94B4((void **)(v1 + 28), (const char *)&unk_257BC67);
  *(_DWORD *)(v1 + 32) = &unk_28898CC;
  *(_BYTE *)(v1 + 36) = 0;
  return v1;
}


int __fastcall ThirdPartyInfo::ThirdPartyInfo(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_assign<std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::(std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>> const&)::{lambda(std::__detail::_Hash_node<std::string,true> const*)#1}>(
    (unsigned int *)a1,
    a2);
  sub_DA73B4((int *)(v2 + 28), (int *)(v3 + 28));
  sub_DA73B4((int *)(v2 + 32), (int *)(v3 + 32));
  *(_BYTE *)(v2 + 36) = *(_BYTE *)(v3 + 36);
  return v2;
}


int __fastcall ThirdPartyInfo::isValid(ThirdPartyInfo *this)
{
  int result; // r0@2

  if ( *(_DWORD *)(*((_DWORD *)this + 7) - 12) )
    result = *((_DWORD *)this + 3) != 0;
  else
    result = 0;
  return result;
}
