

int __fastcall PackSourceReport::getReport(PackSourceReport *this, const PackIdVersion *a2)
{
  const PackIdVersion *v2; // r8@1
  PackSourceReport *v3; // r11@1
  unsigned int v4; // r9@1
  unsigned int v5; // r10@1
  _DWORD *v6; // r7@1
  _DWORD *v7; // r5@2
  int v8; // r4@2
  _DWORD *v9; // r6@5
  int result; // r0@7

  v2 = a2;
  v3 = this;
  v4 = std::hash<PackIdVersion>::operator()((int)this, (int)a2);
  v5 = v4 % (unsigned int)(*(_QWORD *)v3 >> 32);
  v6 = *(_DWORD **)(*(_QWORD *)v3 + 4 * v5);
  if ( v6 )
  {
    v7 = (_DWORD *)*v6;
    v8 = *(_DWORD *)(*v6 + 160);
    while ( v8 != v4 || !PackIdVersion::operator==((int)v2, (int)(v7 + 2)) )
    {
      v9 = (_DWORD *)*v7;
      if ( !*v7 )
      {
        result = 0;
        goto LABEL_13;
      }
      v8 = v9[40];
      v6 = v7;
      v7 = (_DWORD *)*v7;
      if ( v9[40] % *((_DWORD *)v3 + 1) != v5 )
    }
    if ( v6 )
      result = *v6;
    else
      result = 0;
  }
  else
    result = 0;
LABEL_13:
  if ( result )
    result += 56;
  return result;
}


signed int __fastcall PackSourceReport::hasErrors(PackSourceReport *this)
{
  int i; // r4@1

  for ( i = *((_DWORD *)this + 2); i; i = *(_DWORD *)i )
  {
    if ( PackReport::hasErrors((PackReport *)(i + 56)) )
      return 1;
  }
  return 0;
}


int *__fastcall PackSourceReport::addReport(int a1, int a2, int *a3)
{
  int *v3; // r4@1
  int *v4; // r0@1

  v3 = a3;
  v4 = (int *)std::__detail::_Map_base<PackIdVersion,std::pair<PackIdVersion const,PackReport>,std::allocator<std::pair<PackIdVersion const,PackReport>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                a1,
                a2);
  return j_j_j__ZN10PackReportaSEOS_(v4, v3);
}


int __fastcall PackSourceReport::merge(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r5@1
  int *v5; // r0@2
  int v6; // r7@5
  int result; // r0@6
  int v8; // [sp+0h] [bp-18h]@5

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 )
  {
    do
    {
      v5 = (int *)std::__detail::_Map_base<PackIdVersion,std::pair<PackIdVersion const,PackReport>,std::allocator<std::pair<PackIdVersion const,PackReport>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                    v3,
                    v4 + 8);
      PackReport::operator=(v5, (int *)(v4 + 56));
      v4 = *(_DWORD *)v4;
    }
    while ( v4 );
    v4 = *(_DWORD *)(v2 + 8);
  }
      v6 = *(_DWORD *)v4;
      __gnu_cxx::new_allocator<std::pair<PackIdVersion const,PackReport>>::destroy<std::pair<PackIdVersion const,PackReport>>(
        (int)&v8,
        v4 + 8);
      operator delete((void *)v4);
      v4 = v6;
    while ( v6 );
  _aeabi_memclr4(*(_QWORD *)v2, 4 * (*(_QWORD *)v2 >> 32));
  result = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  return result;
}
