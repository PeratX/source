

int (**__fastcall SoundRepository::clearEventMap(pthread_mutex_t *mutex))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  pthread_mutex_t *v1; // r4@1
  int v2; // r0@2
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@3

  v1 = mutex;
  if ( &pthread_create )
  {
    v2 = pthread_mutex_lock(mutex);
    if ( v2 )
      sub_21E5E14(v2);
    std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<SoundEvent>>,std::allocator<std::pair<std::string const,std::shared_ptr<SoundEvent>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&v1->__count);
    result = &pthread_create;
    if ( &pthread_create )
      result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(v1);
  }
  else
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_j_j__ZNSt10_HashtableISsSt4pairIKSsSt10shared_ptrI10SoundEventEESaIS5_ENSt8__detail10_Select1stESt8equal_toISsESt4hashISsENS7_18_Mod_range_hashingENS7_20_Default_ranged_hashENS7_20_Prime_rehash_policyENS7_17_Hashtable_traitsILb1ELb0ELb1EEEE5clearEv((int)&mutex->__count);
  return result;
}


unsigned int __fastcall SoundRepository::get(pthread_mutex_t *mutex, int **a2, int a3)
{
  pthread_mutex_t *v3; // r4@1
  int **v4; // r6@1
  int v5; // r0@2
  unsigned int v6; // r0@3
  __int64 v7; // kr00_8@3
  unsigned int v8; // r5@3
  unsigned int v9; // r4@3
  int *v10; // r8@3
  int v11; // r9@4
  int *v12; // r10@4
  int v13; // r6@4
  const void *v14; // r1@6
  size_t v15; // r2@6
  int v16; // r0@7
  unsigned int v17; // r6@11
  bool v19; // zf@14
  int v20; // r5@17
  int v21; // r7@17
  unsigned int *v22; // r3@18
  pthread_mutex_t *v23; // r0@18
  unsigned int v24; // r1@20
  Random *v25; // r0@27
  int v26; // r1@27 OVERLAPPED
  int v27; // r2@27
  signed int v28; // r2@27
  int v29; // r0@29
  int v30; // r1@30 OVERLAPPED
  int v31; // r2@30
  int v32; // r4@31
  int v33; // r1@31
  int v34; // r2@31
  int v35; // r3@31
  int v36; // r0@31
  unsigned int *v37; // r1@35
  unsigned int v38; // r0@37
  unsigned int *v39; // r4@41
  unsigned int v40; // r0@43
  int v41; // [sp+4h] [bp-2Ch]@1
  pthread_mutex_t *mutexa; // [sp+8h] [bp-28h]@3

  v3 = mutex;
  v4 = a2;
  v41 = a3;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock(mutex);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v6 = sub_21B417C(*v4, *(*v4 - 3), -955291385);
  v7 = *(_QWORD *)&v3->__count;
  v8 = v6;
  mutexa = v3;
  v9 = v6 % (unsigned int)(*(_QWORD *)&v3->__count >> 32);
  v10 = *(int **)(v7 + 4 * v9);
  if ( !v10 )
    goto LABEL_10;
  v11 = *v10;
  v12 = *v4;
  v13 = *(_DWORD *)(*v10 + 16);
  while ( 1 )
    if ( v13 == v8 )
    {
      v14 = *(const void **)(v11 + 4);
      v15 = *(v12 - 3);
      if ( v15 == *((_DWORD *)v14 - 3) )
      {
        v16 = memcmp(v12, v14, v15);
        if ( !v16 )
          break;
      }
    }
    if ( *(_DWORD *)v11 )
      v13 = *(_DWORD *)(v7 + 16);
      v10 = (int *)v11;
      v11 = *(_DWORD *)v11;
      if ( *(_DWORD *)(v7 + 16) % HIDWORD(v7) == v9 )
        continue;
  v19 = v10 == 0;
  if ( v10 )
    v16 = *v10;
    v19 = *v10 == 0;
  if ( v19 )
LABEL_10:
    if ( &pthread_create )
      pthread_mutex_unlock(mutexa);
      v17 = 0;
    else
  else
    v20 = *(_QWORD *)(v16 + 8) >> 32;
    v21 = *(_QWORD *)(v16 + 8);
    if ( v20 )
      v22 = (unsigned int *)(v20 + 4);
      v23 = mutexa;
      if ( &pthread_create )
        __dmb();
        do
          v24 = __ldrex(v22);
        while ( __strex(v24 + 1, v22) );
      else
        ++*v22;
      v20 = 0;
      pthread_mutex_unlock(v23);
    v17 = 0;
    if ( (unsigned int)*(_QWORD *)(v21 + 8) != *(_QWORD *)(v21 + 8) >> 32 )
      v25 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
      *(_QWORD *)&v26 = *(_QWORD *)(v21 + 8);
      v28 = v27 - v26;
      if ( 0 != v28 >> 2 )
        v17 = Random::_genRandInt32(v25) % (v28 >> 2);
        v26 = *(_DWORD *)(v21 + 8);
      v29 = *(_DWORD *)(v26 + 4 * v17);
      if ( v29 < 0 )
        v17 = 0;
        *(_QWORD *)&v30 = *(_QWORD *)(v21 + 20);
        if ( v29 >= -1431655765 * ((v31 - v30) >> 3) )
        {
          v17 = 0;
        }
        else
          v32 = v30 + 24 * v29;
          *(_BYTE *)v41 = *(_BYTE *)v32;
          EntityInteraction::setInteractText((int *)(v41 + 4), (int *)(v32 + 4));
          v33 = *(_DWORD *)(v32 + 8);
          v34 = *(_DWORD *)(v32 + 12);
          v35 = *(_DWORD *)(v32 + 16);
          *(_WORD *)(v41 + 20) = *(_WORD *)(v32 + 20);
          v36 = v41 + 8;
          v17 = 1;
          *(_DWORD *)v36 = v33;
          *(_DWORD *)(v36 + 4) = v34;
          *(_DWORD *)(v36 + 8) = v35;
      v37 = (unsigned int *)(v20 + 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 == 1 )
        v39 = (unsigned int *)(v20 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
        if ( &pthread_create )
          __dmb();
          do
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  return v17;
}


int (**__fastcall SoundRepository::add(pthread_mutex_t *mutex, int **a2, int a3))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  pthread_mutex_t *v3; // r4@1
  int **v4; // r5@1
  int v5; // r0@2
  unsigned int v6; // r5@3
  unsigned int v7; // r7@3
  unsigned int v8; // r4@3
  int v9; // r10@3
  int v10; // r11@4
  int v11; // r8@4
  _DWORD *v12; // r7@4
  _DWORD *v13; // r1@6
  size_t v14; // r2@6
  int v15; // r9@8
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@11
  bool v17; // zf@14
  pthread_mutex_t *mutexa; // [sp+4h] [bp-3Ch]@3
  unsigned __int64 *v19; // [sp+8h] [bp-38h]@3
  int v20; // [sp+Ch] [bp-34h]@1
  int *v21; // [sp+10h] [bp-30h]@3
  char v22; // [sp+14h] [bp-2Ch]@10

  v3 = mutex;
  v4 = a2;
  v20 = a3;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock(mutex);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v21 = (int *)v4;
  v6 = sub_21B417C(*v4, *(*v4 - 3), -955291385);
  mutexa = v3;
  v7 = v3->__count;
  v19 = (unsigned __int64 *)&v3->__count;
  v8 = v3->__owner;
  v9 = *(_DWORD *)(v7 + 4 * (v6 % v8));
  if ( !v9 )
    goto LABEL_10;
  v10 = *(_DWORD *)v9;
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 16);
  v12 = (_DWORD *)*v21;
  while ( 1 )
    if ( v11 == v6 )
    {
      v13 = *(_DWORD **)(v10 + 4);
      v14 = *(v12 - 3);
      if ( v14 == *(v13 - 3) && !memcmp(v12, v13, v14) )
        break;
    }
    v15 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
      v11 = *(_DWORD *)(v15 + 16);
      v9 = v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v15 + 16) % v8 == v6 % v8 )
        continue;
  v17 = v9 == 0;
  if ( v9 )
    v17 = *(_DWORD *)v9 == 0;
  if ( v17 )
LABEL_10:
    std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<SoundEvent>>,std::allocator<std::pair<std::string const,std::shared_ptr<SoundEvent>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,std::shared_ptr<SoundEvent>&>(
      &v22,
      v19,
      v21,
      v20);
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(mutexa);
  return result;
}
