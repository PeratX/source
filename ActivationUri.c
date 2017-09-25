

ActivationUri *__fastcall ActivationUri::~ActivationUri(ActivationUri *this)
{
  ActivationUri *v1; // r4@1
  char *v2; // r0@1
  int *v3; // r0@4
  unsigned int *v5; // r12@6
  signed int v6; // r1@8

  v1 = this;
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)this + 4);
  v2 = (char *)*((_DWORD *)v1 + 1);
  if ( v2 && (char *)v1 + 28 != v2 )
    operator delete(v2);
  v3 = (int *)(*(_DWORD *)v1 - 12);
  if ( v3 != &dword_28898C0 )
  {
    v5 = (unsigned int *)(*(_DWORD *)v1 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}
