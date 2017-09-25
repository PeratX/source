

int *__fastcall AttributeCollection::instance(AttributeCollection *this)
{
  char v1; // r0@1
  double v2; // r0@2
  unsigned int v3; // r0@3
  int v4; // r5@5
  int *v5; // r4@5

  v1 = byte_27F7D90;
  __dmb();
  if ( !(v1 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27F7D90) )
  {
    dword_27F7D9C = 0;
    unk_27F7DA0 = 0;
    dword_27F7DA4 = 1065353216;
    LODWORD(v2) = &dword_27F7DA4;
    unk_27F7DA8 = 0;
    v3 = sub_21E6254(v2);
    dword_27F7D98 = v3;
    if ( v3 == 1 )
    {
      dword_27F7DAC = 0;
      v5 = &dword_27F7DAC;
    }
    else
      if ( v3 >= 0x40000000 )
        sub_21E57F4();
      v4 = 4 * v3;
      v5 = (int *)operator new(4 * v3);
      _aeabi_memclr4(v5, v4);
    dword_27F7D94 = (int)v5;
    _cxa_atexit(AttributeCollection::~AttributeCollection);
    j___cxa_guard_release((unsigned int *)&byte_27F7D90);
  }
  return &dword_27F7D94;
}


int __fastcall AttributeCollection::getAttribute(unsigned __int64 *a1, int **a2)
{
  unsigned __int64 *v2; // r4@1
  int v3; // r0@1

  v2 = a1;
  v3 = std::_Hashtable<std::string,std::pair<std::string const,Attribute *>,std::allocator<std::pair<std::string const,Attribute *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a1,
         a2);
  if ( !v3 )
    v3 = *((_DWORD *)v2 + 2);
  return *(_DWORD *)(v3 + 8);
}


signed int __fastcall AttributeCollection::hasAttribute(AttributeCollection *a1)
{
  int **v1; // r4@1
  AttributeCollection *v2; // r0@1
  signed int v3; // r4@1

  v1 = (int **)a1;
  AttributeCollection::instance(a1);
  v2 = (AttributeCollection *)std::_Hashtable<std::string,std::pair<std::string const,Attribute *>,std::allocator<std::pair<std::string const,Attribute *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                                (unsigned __int64 *)&dword_27F7D94,
                                v1);
  v3 = (signed int)v2;
  if ( v2 )
    v3 = 1;
  AttributeCollection::instance(v2);
  return v3;
}


AttributeCollection *__fastcall AttributeCollection::~AttributeCollection(AttributeCollection *this)
{
  AttributeCollection *v1; // r10@1
  unsigned __int64 *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  unsigned __int64 *v5; // r6@11
  int v6; // r1@11
  void *v7; // r0@11
  char *v8; // r0@13

  v1 = this;
  v2 = (unsigned __int64 *)*((_DWORD *)this + 2);
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
        j_j_j_j__ZdlPv_9(v7);
    }
    operator delete(v5);
  }
  _aeabi_memclr4(*(_QWORD *)v1, 4 * (*(_QWORD *)v1 >> 32));
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  v8 = *(char **)v1;
  if ( *(_DWORD *)v1 && (char *)v1 + 24 != v8 )
    operator delete(v8);
  return v1;
}


_DWORD *__fastcall AttributeCollection::addAttribute(int a1, int **a2, int a3)
{
  int v3; // r4@1
  _DWORD *result; // r0@1

  v3 = a3;
  result = (_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,Attribute *>,std::allocator<std::pair<std::string const,Attribute *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       a1,
                       a2);
  *result = v3;
  return result;
}
