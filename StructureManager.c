

int __fastcall StructureManager::getOrCreate(pthread_mutex_t *a1, int **a2)
{
  int v2; // r5@0
  pthread_mutex_t *v3; // r7@1
  int **v4; // r6@1
  int v5; // r0@1
  pthread_mutex_t *v6; // r4@2
  StructureTemplate *v7; // r5@9
  StructureTemplate *v8; // r0@10
  void *v9; // r0@11
  bool v10; // zf@12
  int v11; // r0@16
  unsigned int *v13; // r2@22
  signed int v14; // r1@24
  int v15; // [sp+4h] [bp-34h]@9
  StructureTemplate *v16; // [sp+8h] [bp-30h]@9
  int v17; // [sp+Ch] [bp-2Ch]@9
  pthread_mutex_t *mutex; // [sp+14h] [bp-24h]@1
  char v19; // [sp+18h] [bp-20h]@4

  v3 = a1;
  v4 = a2;
  SharedLock::SharedLock((int)&mutex, a1);
  v5 = std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<StructureTemplate,std::default_delete<StructureTemplate>>>,std::allocator<std::pair<std::string const,std::unique_ptr<StructureTemplate,std::default_delete<StructureTemplate>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)&v3->__nusers,
         v4);
  if ( v5 )
  {
    v2 = *(_DWORD *)(v5 + 8);
    v6 = 0;
  }
  else
    v6 = (pthread_mutex_t *)1;
  if ( v19 )
    std::shared_timed_mutex::unlock_shared(mutex);
  if ( v6 == (pthread_mutex_t *)1 )
    v2 = StructureManager::_readStructure(v3, (pthread_mutex_t *)v4);
  if ( !v2 )
    UniqueLock::UniqueLock((int)&mutex, v3);
    v7 = (StructureTemplate *)j_operator new(0x44u);
    StructureTemplate::StructureTemplate((int)v7);
    sub_21E8AF4(&v15, (int *)v4);
    v16 = v7;
    std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<StructureTemplate,std::default_delete<StructureTemplate>>>,std::allocator<std::pair<std::string const,std::unique_ptr<StructureTemplate,std::default_delete<StructureTemplate>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<std::string,std::unique_ptr<StructureTemplate,std::default_delete<StructureTemplate>>>>(
      (signed int)&v17,
      (unsigned __int64 *)&v3->__nusers,
      (int)&v15);
    if ( v16 )
    {
      v8 = StructureTemplate::~StructureTemplate(v16);
      j_operator delete((void *)v8);
    }
    v16 = 0;
    v9 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v15 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    v2 = *(_DWORD *)(v17 + 8);
    v10 = v19 == 0;
    if ( v19 )
      v6 = mutex;
      v10 = mutex == 0;
    if ( !v10 )
        v11 = j_pthread_mutex_lock(v6);
        if ( v11 )
          sub_21E5E14(v11);
        v6->__kind = 0;
        if ( &pthread_create )
          j_pthread_mutex_unlock(v6);
      sub_21E03D8((pthread_cond_t *)&v6->__count);
      v19 = 0;
  return v2;
}


signed int __fastcall StructureManager::load(int a1, StructureTemplate *a2, int *a3)
{
  StructureTemplate *v3; // r4@1
  int v4; // r1@1
  unsigned int v5; // r6@1
  int v6; // r7@1
  signed int result; // r0@4
  unsigned int v8; // r6@6
  int v9; // r7@6
  unsigned int v10; // r0@8
  _BYTE *v11; // r1@8
  char v12; // r2@9
  bool v13; // cf@9
  bool v14; // zf@9
  __int16 v15; // [sp+0h] [bp-40h]@1
  void **v16; // [sp+1Ch] [bp-24h]@1
  int v17; // [sp+20h] [bp-20h]@1
  int v18; // [sp+24h] [bp-1Ch]@1
  int *v19; // [sp+28h] [bp-18h]@1

  v17 = 0;
  v3 = a2;
  v4 = *a3;
  v5 = *(_DWORD *)(*a3 - 12);
  v18 = *(_DWORD *)(*a3 - 12);
  v19 = a3;
  v16 = &off_27193E8;
  LOBYTE(v15) = 0;
  v6 = *(_DWORD *)(v4 - 12);
  if ( v6 )
  {
    if ( v5 > 1 )
      v5 = 1;
    j___aeabi_memcpy((int)&v15, v4, v5);
    result = 0;
    v17 = v5;
    if ( (unsigned __int8)v15 == 10 )
    {
      v15 = 0;
      if ( v5 != v6 )
      {
        v8 = StringByteInput::numBytesLeft((StringByteInput *)&v16);
        v9 = v17;
        if ( v8 > 2 )
          v8 = 2;
        j___aeabi_memcpy((int)&v15, *v19 + v17, v8);
        v17 = v9 + v8;
        v10 = (unsigned int)&v15 | 1;
        v11 = (_BYTE *)((unsigned int)&v15 | 1);
        do
        {
          v12 = *(_BYTE *)(v10 - 1);
          *(_BYTE *)(v10 - 1) = *v11;
          *v11-- = v12;
          v13 = v10 >= (unsigned int)v11;
          v14 = v10++ == (_DWORD)v11;
        }
        while ( v14 || !v13 );
      }
      j_CompoundTag::CompoundTag(&v15);
      j_CompoundTag::load((CompoundTag *)&v15, (IDataInput *)&v16);
      StructureTemplate::load(v3, (CompoundTag *)&v15);
      j_CompoundTag::~CompoundTag((CompoundTag *)&v15);
      result = 1;
    }
  }
  else
  return result;
}


int __fastcall StructureManager::_readStructure(pthread_mutex_t *a1, pthread_mutex_t *a2)
{
  pthread_mutex_t *v2; // r4@1
  pthread_mutex_t *v3; // r5@1
  void *v4; // r0@2
  int v5; // r6@4
  void (__fastcall *v6)(int *, int, char **); // r7@4
  const void **v7; // r0@4
  char *v8; // r0@4
  void *v9; // r0@5
  StructureTemplate *v10; // r0@7
  StructureTemplate *v11; // r6@7
  int v12; // r0@7
  StructureTemplate *v13; // r0@10
  void *v14; // r0@11
  int v15; // r4@12
  void *v16; // r0@15
  bool v17; // zf@16
  int v18; // r0@20
  char *v19; // r0@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  unsigned int *v23; // r2@31
  signed int v24; // r1@33
  unsigned int *v25; // r2@35
  signed int v26; // r1@37
  unsigned int *v27; // r2@39
  signed int v28; // r1@41
  unsigned int *v29; // r2@59
  signed int v30; // r1@61
  int v31; // [sp+0h] [bp-40h]@9
  StructureTemplate *v32; // [sp+4h] [bp-3Ch]@9
  int v33; // [sp+8h] [bp-38h]@9
  int v34; // [sp+10h] [bp-30h]@4
  char *v35; // [sp+14h] [bp-2Ch]@4
  int v36; // [sp+18h] [bp-28h]@4
  pthread_mutex_t *mutex; // [sp+1Ch] [bp-24h]@1
  char v38; // [sp+20h] [bp-20h]@16
  char *v39; // [sp+24h] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  v39 = (char *)&unk_28898CC;
  UniqueLock::UniqueLock((int)&mutex, a1);
  if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = &ServiceLocator<AppPlatform>::mDefaultService;
  v5 = *(_DWORD *)v4;
  v6 = *(void (__fastcall **)(int *, int, char **))(**(_DWORD **)v4 + 372);
  sub_21E8AF4(&v34, (int *)&StructureBlockEntity::STRUCTURE_ASSET_FILE_PREFIX);
  sub_21E72F0((const void **)&v34, (const void **)v3);
  v7 = sub_21E72F0((const void **)&v34, (const void **)&StructureBlockEntity::STRUCTURE_FILE_POSTFIX);
  v35 = (char *)*v7;
  *v7 = &unk_28898CC;
  v6(&v36, v5, &v35);
  v8 = v35 - 12;
  if ( (int *)(v35 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v34 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  if ( !GzipUtil::decompressNBTFromAssets((int)&v36, (char *)&v39) )
    goto LABEL_14;
  v10 = (StructureTemplate *)j_operator new(0x44u);
  v11 = v10;
  v12 = StructureTemplate::StructureTemplate((int)v10);
  if ( StructureManager::load(v12, v11, (int *)&v39) != 1 || !*(_DWORD *)(v3->__lock - 12) )
    StructureTemplate::~StructureTemplate(v11);
    j_operator delete((void *)v11);
LABEL_14:
    v15 = 0;
    goto LABEL_15;
  sub_21E8AF4(&v31, &v3->__lock);
  v32 = v11;
  std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<StructureTemplate,std::default_delete<StructureTemplate>>>,std::allocator<std::pair<std::string const,std::unique_ptr<StructureTemplate,std::default_delete<StructureTemplate>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<std::string,std::unique_ptr<StructureTemplate,std::default_delete<StructureTemplate>>>>(
    (signed int)&v33,
    (unsigned __int64 *)&v2->__nusers,
    (int)&v31);
  if ( v32 )
    v13 = StructureTemplate::~StructureTemplate(v32);
    j_operator delete((void *)v13);
  v32 = 0;
  v14 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v31 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = *(_DWORD *)(v33 + 8);
LABEL_15:
  v16 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v36 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = v38 == 0;
  if ( v38 )
    v3 = mutex;
    v17 = mutex == 0;
  if ( !v17 )
      v18 = j_pthread_mutex_lock(v3);
      if ( v18 )
        sub_21E5E14(v18);
      v3->__kind = 0;
      if ( &pthread_create )
        j_pthread_mutex_unlock(v3);
    sub_21E03D8((pthread_cond_t *)&v3->__count);
    v38 = 0;
  v19 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v39 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  return v15;
}


int __fastcall StructureManager::StructureManager(int a1)
{
  int v1; // r4@1
  double v2; // r0@1
  unsigned int v3; // r0@1
  int v4; // r5@3
  void *v5; // r7@3
  int result; // r0@4

  v1 = a1;
  *(_DWORD *)a1 = 0;
  sub_21E03A4((_DWORD *)(a1 + 4));
  sub_21E03A4((_DWORD *)(v1 + 8));
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 28) = 0;
  *(_DWORD *)(v1 + 32) = 1065353216;
  LODWORD(v2) = v1 + 32;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v3 = sub_21E6254(v2);
  *(_DWORD *)(v1 + 20) = v3;
  if ( v3 == 1 )
  {
    *(_DWORD *)(v1 + 40) = 0;
    v5 = (void *)(v1 + 40);
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = j_operator new(4 * v3);
    j___aeabi_memclr4((int)v5, v4);
  result = v1;
  *(_DWORD *)(v1 + 16) = v5;
  return result;
}


int __fastcall StructureManager::get(pthread_mutex_t *a1, int **a2)
{
  int v2; // r6@0
  pthread_mutex_t *v3; // r5@1
  int **v4; // r4@1
  int v5; // r0@1
  signed int v6; // r7@2
  pthread_mutex_t *mutex; // [sp+4h] [bp-1Ch]@1
  char v9; // [sp+8h] [bp-18h]@4

  v3 = a1;
  v4 = a2;
  SharedLock::SharedLock((int)&mutex, a1);
  v5 = std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<StructureTemplate,std::default_delete<StructureTemplate>>>,std::allocator<std::pair<std::string const,std::unique_ptr<StructureTemplate,std::default_delete<StructureTemplate>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)&v3->__nusers,
         v4);
  if ( v5 )
  {
    v2 = *(_DWORD *)(v5 + 8);
    v6 = 0;
  }
  else
    v6 = 1;
  if ( v9 )
    std::shared_timed_mutex::unlock_shared(mutex);
  if ( v6 == 1 )
    v2 = StructureManager::_readStructure(v3, (pthread_mutex_t *)v4);
  return v2;
}
