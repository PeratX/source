

unsigned __int64 *__fastcall ClientContentKeyProvider::setTempContentKeys(int a1, int a2)
{
  return j_j_j__ZNSt10_HashtableISsSt4pairIKSsSsESaIS2_ENSt8__detail10_Select1stESt8equal_toISsESt4hashISsENS4_18_Mod_range_hashingENS4_20_Default_ranged_hashENS4_20_Prime_rehash_policyENS4_17_Hashtable_traitsILb1ELb0ELb1EEEEaSERKSF__1(
           (unsigned __int64 *)(a1 + 8),
           a2);
}


ClientContentKeyProvider *__fastcall ClientContentKeyProvider::~ClientContentKeyProvider(ClientContentKeyProvider *this)
{
  ClientContentKeyProvider *v1; // r4@1
  char *v2; // r5@1
  char *v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26D6854;
  v2 = (char *)this + 32;
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)this + 8);
  v3 = (char *)*((_DWORD *)v1 + 2);
  if ( v3 && v2 != v3 )
    operator delete(v3);
  return v1;
}


void __fastcall ClientContentKeyProvider::~ClientContentKeyProvider(ClientContentKeyProvider *this)
{
  ClientContentKeyProvider::~ClientContentKeyProvider(this);
}


signed int __fastcall ClientContentKeyProvider::canAccess(ClientContentKeyProvider *this, const mce::UUID *a2)
{
  Entitlement *v2; // r0@1

  v2 = (Entitlement *)EntitlementManager::getEntitlement(*((EntitlementManager **)this + 1), a2);
  return j_j_j__ZNK11Entitlement7isOwnedEv(v2);
}


void __fastcall ClientContentKeyProvider::getContentKey(ClientContentKeyProvider *this, const mce::UUID *a2, const mce::UUID *a3)
{
  ClientContentKeyProvider::getContentKey(this, a2, a3);
}


void __fastcall ClientContentKeyProvider::~ClientContentKeyProvider(ClientContentKeyProvider *this)
{
  ClientContentKeyProvider *v1; // r4@1
  char *v2; // r5@1
  char *v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26D6854;
  v2 = (char *)this + 32;
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)this + 8);
  v3 = (char *)*((_DWORD *)v1 + 2);
  if ( v3 && v2 != v3 )
    operator delete(v3);
  j_j_j__ZdlPv_3((void *)v1);
}


void __fastcall ClientContentKeyProvider::getContentKey(ClientContentKeyProvider *this, const mce::UUID *a2, const mce::UUID *a3)
{
  int *v3; // r8@1
  const mce::UUID *v4; // r10@1
  const mce::UUID *v5; // r6@1
  unsigned int v6; // r4@1
  __int64 v7; // kr00_8@1
  unsigned int v8; // r6@1
  int v9; // r9@1
  int v10; // r10@2
  _DWORD *v11; // r11@2
  int v12; // r7@2
  _DWORD *v13; // r1@4
  size_t v14; // r2@4
  int v15; // r8@6
  int v16; // r4@8
  int v17; // r0@13
  unsigned int *v18; // r2@18
  signed int v19; // r1@20
  unsigned __int64 v20; // [sp+0h] [bp-38h]@2
  const mce::UUID *v21; // [sp+8h] [bp-30h]@1
  void *s1; // [sp+Ch] [bp-2Ch]@1

  v3 = (int *)this;
  v4 = a3;
  v5 = a2;
  mce::UUID::asString((mce::UUID *)&s1);
  v6 = sub_DA7754((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v7 = *((_QWORD *)v5 + 1);
  v21 = v5;
  v8 = v6 % (unsigned int)(*((_QWORD *)v5 + 1) >> 32);
  v9 = *(_DWORD *)(v7 + 4 * v8);
  if ( v9 )
  {
    v20 = __PAIR__((unsigned int)v4, (unsigned int)v3);
    v10 = *(_DWORD *)v9;
    v11 = s1;
    v12 = *(_DWORD *)(*(_DWORD *)v9 + 12);
    while ( 1 )
    {
      if ( v12 == v6 )
      {
        v13 = *(_DWORD **)(v10 + 4);
        v14 = *(v11 - 3);
        if ( v14 == *(v13 - 3) && !memcmp(v11, v13, v14) )
          break;
      }
      v15 = *(_DWORD *)v10;
      if ( *(_DWORD *)v10 )
        v12 = *(_DWORD *)(v15 + 12);
        v9 = v10;
        v10 = *(_DWORD *)v10;
        if ( *(_DWORD *)(v15 + 12) % HIDWORD(v7) == v8 )
          continue;
      v16 = 0;
      v4 = (const mce::UUID *)HIDWORD(v20);
      v3 = (int *)v20;
      goto LABEL_10;
    }
    v4 = (const mce::UUID *)HIDWORD(v20);
    if ( v9 )
      v16 = *(_DWORD *)v9;
    else
    v3 = (int *)v20;
  }
  else
    v16 = 0;
LABEL_10:
  if ( v11 - 3 != &dword_28898C0 )
    v18 = v11 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11 - 3);
  if ( v16 )
    sub_DA73B4(v3, (int *)(v16 + 8));
    v17 = EntitlementManager::getEntitlement(*((EntitlementManager **)v21 + 1), v4);
    Entitlement::getContentKey((Entitlement *)v3, v17);
}
