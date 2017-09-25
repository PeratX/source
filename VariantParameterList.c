

_BOOL4 __fastcall VariantParameterList::hasParameter(unsigned __int64 *a1, int **a2)
{
  return j_std::_Hashtable<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
           a1,
           a2) != 0;
}


__int64 __fastcall VariantParameterList::getParameterType(unsigned __int64 *a1, int **a2)
{
  int v2; // r0@1
  __int64 result; // r0@2

  v2 = j_std::_Hashtable<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a1,
         a2);
  if ( v2 )
    result = *(_QWORD *)(v2 + 16);
  else
    result = 0LL;
  return result;
}
