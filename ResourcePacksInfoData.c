

void __fastcall ResourcePacksInfoData::collectKeys(__int64 this)
{
  ResourcePacksInfoData::collectKeys(this);
}


void __fastcall ResourcePacksInfoData::collectKeys(__int64 this)
{
  int v1; // r8@1
  int v2; // r11@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3
  int v6; // r4@4
  int i; // r6@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  void *v10; // r0@14
  int v11; // r4@16
  int j; // r6@16
  unsigned int *v13; // r2@18
  signed int v14; // r1@20
  void *v15; // r0@26
  char v16; // [sp+8h] [bp-40h]@26
  int v17; // [sp+10h] [bp-38h]@18
  char v18; // [sp+14h] [bp-34h]@14
  int v19; // [sp+1Ch] [bp-2Ch]@6

  v1 = HIDWORD(this);
  v2 = this;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 1065353216;
  LODWORD(this) = this + 16;
  *(_DWORD *)(this + 4) = 0;
  v3 = sub_21E6254(*(double *)&this);
  *(_DWORD *)(v2 + 4) = v3;
  if ( v3 == 1 )
  {
    *(_DWORD *)(v2 + 24) = 0;
    v5 = (void *)(v2 + 24);
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  *(_DWORD *)v2 = v5;
  v6 = *(_QWORD *)(v1 + 16) >> 32;
  for ( i = *(_QWORD *)(v1 + 16); i != v6; i += 64 )
    if ( *(_DWORD *)(*(_DWORD *)(i + 56) - 12) )
    {
      mce::UUID::asString((mce::UUID *)&v19);
      std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string,std::string const&>(
        &v18,
        v2,
        &v19,
        (int *)(i + 56));
      v10 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v19 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      }
    }
  v11 = *(_QWORD *)(v1 + 4) >> 32;
  for ( j = *(_QWORD *)(v1 + 4); j != v11; j += 64 )
    if ( *(_DWORD *)(*(_DWORD *)(j + 56) - 12) )
      mce::UUID::asString((mce::UUID *)&v17);
        &v16,
        &v17,
        (int *)(j + 56));
      v15 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v17 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
}
