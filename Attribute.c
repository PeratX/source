

int __fastcall Attribute::getByName(AttributeCollection *a1)
{
  int **v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1

  v1 = (int **)a1;
  AttributeCollection::instance(a1);
  v2 = std::_Hashtable<std::string,std::pair<std::string const,Attribute *>,std::allocator<std::pair<std::string const,Attribute *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)&dword_27F7D94,
         v1);
  v3 = dword_27F7D9C;
  if ( v2 )
    v3 = v2;
  return *(_DWORD *)(v3 + 8);
}


int __fastcall Attribute::Attribute(int a1, int *a2, char a3, char a4)
{
  int v4; // r4@1
  int *v5; // r6@1
  int *v6; // r0@1

  v4 = a1;
  *(_BYTE *)a1 = a3;
  v5 = a2;
  *(_BYTE *)(a1 + 1) = a4;
  v6 = sub_21E8AF4((int *)(a1 + 4), a2);
  AttributeCollection::instance((AttributeCollection *)v6);
  *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,Attribute *>,std::allocator<std::pair<std::string const,Attribute *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
               (int)&dword_27F7D94,
               (int **)v5) = v4;
  return v4;
}


Attribute *__fastcall Attribute::~Attribute(Attribute *this)
{
  Attribute *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5

  v1 = this;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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


char *__fastcall Attribute::getName(Attribute *this)
{
  return (char *)this + 4;
}


int __fastcall Attribute::getRedefinitionMode(Attribute *this)
{
  return *(_BYTE *)this;
}
