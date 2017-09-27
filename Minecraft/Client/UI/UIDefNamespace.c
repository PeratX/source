

int *__fastcall UIDefNamespace::UIDefNamespace(int *a1, int *a2)
{
  int *v2; // r4@1
  double v3; // r0@1
  unsigned int v4; // r0@1
  int v5; // r6@3
  void *v6; // r5@3

  v2 = a1;
  sub_DA73B4(a1, a2);
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 1065353216;
  LODWORD(v3) = v2 + 5;
  *(_DWORD *)(LODWORD(v3) + 4) = 0;
  v4 = sub_DA7744(v3);
  v2[2] = v4;
  if ( v4 == 1 )
  {
    v2[7] = 0;
    v6 = v2 + 7;
  }
  else
    if ( v4 >= 0x40000000 )
      sub_DA7414();
    v5 = 4 * v4;
    v6 = operator new(4 * v4);
    _aeabi_memclr4(v6, v5);
  v2[1] = (int)v6;
  return v2;
}


void *__fastcall UIDefNamespace::findDefInNamespace(int a1, int **a2)
{
  int v2; // r0@1
  void *v3; // r1@1

  v2 = std::_Hashtable<std::string,std::pair<std::string const,Json::Value>,std::allocator<std::pair<std::string const,Json::Value>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a1 + 4),
         a2);
  v3 = &Json::Value::null;
  if ( v2 )
    v3 = (void *)(v2 + 16);
  return v3;
}


UIDefNamespace *__fastcall UIDefNamespace::~UIDefNamespace(UIDefNamespace *this)
{
  UIDefNamespace *v1; // r10@1
  _DWORD *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  _DWORD *v5; // r6@11
  Json::Value *v6; // r0@11
  int v7; // r1@11
  void *v8; // r0@11
  char *v9; // r0@13
  int *v10; // r0@16
  unsigned int *v12; // r2@18
  signed int v13; // r1@20

  v1 = this;
  v2 = (_DWORD *)*((_DWORD *)this + 3);
  while ( v2 )
  {
    v5 = v2;
    v6 = (Json::Value *)(v2 + 4);
    v2 = (_DWORD *)*v2;
    Json::Value::~Value(v6);
    v7 = v5[2];
    v8 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v7 - 4);
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
        j_j_j_j_j__ZdlPv_9(v8);
    }
    operator delete(v5);
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  v9 = (char *)*((_DWORD *)v1 + 1);
  if ( v9 && (char *)v1 + 28 != v9 )
    operator delete(v9);
  v10 = (int *)(*(_DWORD *)v1 - 12);
  if ( v10 != &dword_28898C0 )
    v12 = (unsigned int *)(*(_DWORD *)v1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  return v1;
}


signed int __fastcall UIDefNamespace::addDefToNamespace(int a1, int *a2, const Json::Value *a3)
{
  int v4; // [sp+0h] [bp-10h]@1

  return std::_Hashtable<std::string,std::pair<std::string const,Json::Value>,std::allocator<std::pair<std::string const,Json::Value>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,Json::Value&>(
           &v4,
           a1 + 4,
           a2,
           a3);
}
