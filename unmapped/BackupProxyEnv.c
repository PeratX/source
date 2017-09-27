

int (**__fastcall BackupProxyEnv::GetChildren(int a1, int a2, int a3, int a4))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int v4; // r6@1
  int v5; // r5@1

  v4 = a2;
  v5 = a4;
  (*(void (**)(void))(**(_DWORD **)(a2 + 8) + 28))();
  return j_InMemoryFileStorage::populateFileList(v4 + 16, v5);
}


void __fastcall BackupProxyEnv::RenameFile(_DWORD *a1, int a2, int *a3, int *a4)
{
  BackupProxyEnv::RenameFile(a1, a2, a3, a4);
}


void __fastcall BackupProxyEnv::~BackupProxyEnv(BackupProxyEnv *this)
{
  void *v1; // r0@1

  v1 = (void *)j_BackupProxyEnv::~BackupProxyEnv(this);
  j_j_j__ZdlPv_7(v1);
}


int __fastcall BackupProxyEnv::BackupProxyEnv(__int64 a1)
{
  int v1; // r4@1
  int result; // r0@1

  v1 = a1;
  LODWORD(a1) = &off_27258A8;
  *(_QWORD *)v1 = a1;
  *(_DWORD *)(v1 + 8) = HIDWORD(a1);
  __dmb();
  *(_BYTE *)(v1 + 12) = 0;
  *(_BYTE *)(v1 + 13) = 0;
  *(_BYTE *)(v1 + 14) = 0;
  j_InMemoryFileStorage::InMemoryFileStorage((InMemoryFileStorage *)(v1 + 16), *(leveldb::Env **)(v1 + 8));
  result = v1;
  *(_DWORD *)(v1 + 56) = 0;
  return result;
}


_DWORD *__fastcall BackupProxyEnv::NewAppendableFile(_DWORD *result)
{
  *result = 0;
  return result;
}


void __fastcall BackupProxyEnv::RenameFile(_DWORD *a1, int a2, int *a3, int *a4)
{
  int v4; // r6@1
  unsigned __int8 *v5; // r7@1
  int *v6; // r9@1
  int *v7; // r10@1
  _DWORD *v8; // r4@1
  unsigned int v9; // r0@2
  void *v10; // r0@6
  int v11; // r4@10
  unsigned int *v12; // r1@11
  unsigned int v13; // r0@13
  int v14; // r8@15
  unsigned int *v15; // r1@16
  unsigned int v16; // r0@18
  unsigned int *v17; // r5@22
  unsigned int v18; // r0@24
  unsigned int *v19; // r5@28
  unsigned int v20; // r0@30
  void *v21; // r1@36
  void *v22; // r0@36
  const char *v23; // [sp+4h] [bp-3Ch]@4
  int v24; // [sp+8h] [bp-38h]@4
  void *v25; // [sp+Ch] [bp-34h]@4
  int v26; // [sp+10h] [bp-30h]@4
  void *ptr; // [sp+14h] [bp-2Ch]@35
  pthread_mutex_t *mutex; // [sp+18h] [bp-28h]@9
  int v29; // [sp+1Ch] [bp-24h]@9

  v4 = a2;
  v5 = (unsigned __int8 *)(a2 + 13);
  v6 = a4;
  v7 = a3;
  v8 = a1;
  do
    v9 = __ldrex(v5);
  while ( __strex(1u, v5) );
  __dmb();
  if ( v9 )
  {
    v25 = &unk_257BC67;
    v26 = 0;
    v23 = "RenameFile failed to obtain destructive lock";
    v24 = 44;
    j_leveldb::Status::Status(v8, 5, (int)&v25, (int)&v23);
    return;
  }
  if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v10 = j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v10 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v10 + 636))() == 1 )
    mutex = 0;
    v29 = 0;
    if ( j_InMemoryFileStorage::findFile(v4 + 16, v7, (int)&mutex) == 1 )
    {
      j_InMemoryFileStorage::deleteFile(v4 + 16, v6);
      j_InMemoryFile::rename(mutex, v6);
      __dmb();
      *v5 = 0;
      *v8 = 0;
      v11 = v29;
      if ( v29 )
      {
        v12 = (unsigned int *)(v29 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 == 1 )
          v19 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          if ( &pthread_create )
          {
            __dmb();
            do
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
          }
          else
            v20 = (*v19)--;
          if ( v20 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      }
      return;
    }
    v14 = v29;
    if ( v29 )
      v15 = (unsigned int *)(v29 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        v17 = (unsigned int *)(v14 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  (*(void (__fastcall **)(void **))(**(_DWORD **)(v4 + 8) + 48))(&ptr);
  *(_BYTE *)(v4 + 13) = 0;
  if ( ptr )
    v21 = j_leveldb::Status::CopyState((leveldb::Status *)ptr, 0);
    v22 = ptr;
    *v8 = v21;
    if ( v22 )
      j_operator delete[](v22);
    *v8 = 0;
}


int __fastcall BackupProxyEnv::pauseModificationsAndGetFiles(int a1, int a2)
{
  unsigned __int8 *v2; // r11@1
  int v3; // r10@1
  unsigned int v4; // r3@2
  unsigned __int8 *v5; // r0@4
  unsigned int v6; // r3@5
  unsigned __int8 *v7; // r9@8
  unsigned int v8; // r3@9
  const void **v9; // r5@13
  int v10; // r6@13
  int v11; // r0@13
  int v12; // r8@14
  const void **v13; // r7@15
  int v14; // r0@29
  const void **i; // r6@48
  const void **v16; // r7@56
  char *v17; // r1@58
  int (**v18)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@58
  unsigned int *v19; // r2@59
  signed int v20; // r4@61
  int (**v21)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r6@65
  char *v22; // r4@65
  int *v23; // r0@66
  int result; // r0@70
  const void **v25; // [sp+4h] [bp-34h]@57
  void *ptr; // [sp+8h] [bp-30h]@11
  char v27; // [sp+10h] [bp-28h]@58

  v2 = (unsigned __int8 *)(a2 + 14);
  v3 = a1;
  do
  {
    do
      v4 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v4 );
  v5 = (unsigned __int8 *)(a2 + 13);
    v6 = __ldrex(v5);
  while ( __strex(1u, v5) );
  __dmb();
  if ( v6 )
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 8) = 0;
    goto LABEL_70;
  v7 = (unsigned __int8 *)(a2 + 12);
      v8 = __ldrex(v7);
    while ( __strex(1u, v7) );
  while ( v8 );
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  (*(void (__fastcall **)(void **))(*(_DWORD *)a2 + 28))(&ptr);
  if ( ptr )
    j_operator delete[](ptr);
  v9 = (const void **)(*(_QWORD *)v3 >> 32);
  v10 = *(_QWORD *)v3;
  v11 = ((signed int)v9 - v10) >> 4;
  if ( v11 >= 1 )
    v12 = v11 + 1;
    {
      v13 = (const void **)v10;
      if ( !sub_21E7D6C((const void **)v10, ".") )
        goto LABEL_47;
      if ( !sub_21E7D6C((const void **)v10, "..") )
      if ( !sub_21E7D6C((const void **)v10, "LOCK") )
      v13 = (const void **)(v10 + 4);
      if ( !sub_21E7D6C((const void **)(v10 + 4), ".") )
      if ( !sub_21E7D6C((const void **)(v10 + 4), "..") )
      if ( !sub_21E7D6C((const void **)(v10 + 4), "LOCK") )
      v13 = (const void **)(v10 + 8);
      if ( !sub_21E7D6C((const void **)(v10 + 8), ".") )
      if ( !sub_21E7D6C((const void **)(v10 + 8), "..") )
      if ( !sub_21E7D6C((const void **)(v10 + 8), "LOCK") )
      v13 = (const void **)(v10 + 12);
      if ( !sub_21E7D6C((const void **)(v10 + 12), ".")
        || !sub_21E7D6C((const void **)(v10 + 12), "..")
        || !sub_21E7D6C((const void **)(v10 + 12), "LOCK") )
      {
      }
      --v12;
      v10 += 16;
    }
    while ( v12 > 1 );
  if ( 1 == ((signed int)v9 - v10) >> 2 )
    v13 = (const void **)v10;
LABEL_41:
    if ( sub_21E7D6C(v13, ".") && sub_21E7D6C(v13, "..") && sub_21E7D6C(v13, "LOCK") )
      v13 = v9;
    goto LABEL_47;
  v14 = ((signed int)v9 - v10) >> 2;
  if ( v14 == 2 )
  else
    if ( v14 != 3 )
      goto LABEL_47;
    if ( !sub_21E7D6C((const void **)v10, ".") )
    if ( !sub_21E7D6C((const void **)v10, "..") )
    if ( !sub_21E7D6C((const void **)v10, "LOCK") )
    v13 = (const void **)(v10 + 4);
  if ( sub_21E7D6C(v13, ".") && sub_21E7D6C(v13, "..") && sub_21E7D6C(v13, "LOCK") )
    ++v13;
    goto LABEL_41;
LABEL_47:
  if ( v13 != v9 )
    for ( i = v13 + 1; i != v9; ++v13 )
      while ( !sub_21E7D6C(i, ".") || !sub_21E7D6C(i, "..") || !sub_21E7D6C(i, "LOCK") )
        ++i;
        if ( v9 == i )
          goto LABEL_55;
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v13,
        (int *)i);
      ++i;
LABEL_55:
    v9 = v13;
  v16 = *(const void ***)(v3 + 4);
  if ( v9 != v16 )
    v25 = v9;
    if ( v16 != v9 )
      v17 = &v27;
      v18 = &pthread_create;
      do
        v23 = (int *)((char *)*v9 - 12);
        if ( v23 != &dword_28898C0 )
        {
          v19 = (unsigned int *)((char *)*v9 - 4);
          if ( v18 )
          {
            __dmb();
            do
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
          }
          else
            v20 = (*v19)--;
          if ( v20 <= 0 )
            v21 = v18;
            v22 = v17;
            j_j_j_j__ZdlPv_9(v23);
            v17 = v22;
            v18 = v21;
        }
        ++v9;
      while ( v9 != v16 );
    *(_DWORD *)(v3 + 4) = v25;
  *v7 = 0;
LABEL_70:
  result = 0;
  *v2 = 0;
  return result;
}


int __fastcall BackupProxyEnv::NewWritableFile(_DWORD *a1, int a2, int *a3, _DWORD *a4)
{
  int v4; // r7@1
  unsigned __int8 *v5; // r6@1
  _DWORD *v6; // r8@1
  _DWORD *v7; // r9@1
  int *v8; // r4@1
  unsigned int v9; // r1@2
  void *v10; // r0@5
  int v11; // r7@8
  void *v12; // r0@9
  void *v13; // r7@10
  unsigned int *v14; // r0@11
  unsigned int v15; // r1@13
  int v16; // r5@17
  unsigned int *v17; // r1@18
  unsigned int v18; // r0@20
  unsigned int *v19; // r4@24
  unsigned int v20; // r0@26
  int v21; // r4@31
  unsigned int *v22; // r1@32
  unsigned int v23; // r0@34
  unsigned int *v24; // r5@38
  unsigned int v25; // r0@40
  int v26; // r4@45
  unsigned int *v27; // r1@46
  unsigned int v28; // r0@48
  unsigned int *v29; // r5@52
  unsigned int v30; // r0@54
  int result; // r0@59
  unsigned int *v32; // r2@60
  signed int v33; // r1@62
  int v34; // [sp+4h] [bp-3Ch]@10
  int v35; // [sp+8h] [bp-38h]@10
  int v36; // [sp+Ch] [bp-34h]@10
  int v37; // [sp+10h] [bp-30h]@10
  int v38; // [sp+14h] [bp-2Ch]@9
  pthread_mutex_t *v39; // [sp+18h] [bp-28h]@8
  int v40; // [sp+1Ch] [bp-24h]@8

  v4 = a2;
  v5 = (unsigned __int8 *)(a2 + 12);
  v6 = a1;
  v7 = a4;
  v8 = a3;
  do
  {
    do
      v9 = __ldrex(v5);
    while ( __strex(1u, v5) );
    __dmb();
  }
  while ( v9 );
  if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v10 = j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v10 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v10 + 636))() )
    v11 = v4 + 16;
    v39 = 0;
    v40 = 0;
    if ( j_InMemoryFileStorage::findFile(v11, v8, (int)&v39) == 1 )
    {
      j_InMemoryFile::getFilename((InMemoryFile *)&v38, v39);
      j_InMemoryFileStorage::deleteFile(v11, &v38);
      v12 = (void *)(v38 - 12);
      if ( (int *)(v38 - 12) != &dword_28898C0 )
      {
        v32 = (unsigned int *)(v38 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
        }
        else
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      }
    }
    j_InMemoryFileStorage::createFile((int)&v36, v11, v8);
    v13 = j_operator new(0xCu);
    v34 = v36;
    v35 = v37;
    if ( v37 )
      v14 = (unsigned int *)(v37 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 + 1, v14) );
      else
        ++*v14;
    j_InMemoryWritableFile::InMemoryWritableFile((int)v13, (pthread_mutex_t **)&v34);
    *v7 = v13;
    v16 = v35;
    if ( v35 )
      v17 = (unsigned int *)(v35 + 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        v19 = (unsigned int *)(v16 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
    v21 = v37;
    *v6 = 0;
    if ( v21 )
      v22 = (unsigned int *)(v21 + 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        v24 = (unsigned int *)(v21 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
    v26 = v40;
    if ( v40 )
      v27 = (unsigned int *)(v40 + 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 == 1 )
        v29 = (unsigned int *)(v26 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
    (*(void (__fastcall **)(_DWORD *))(**(_DWORD **)(v4 + 8) + 16))(v6);
  result = 0;
  __dmb();
  *v5 = 0;
  return result;
}


int __fastcall BackupProxyEnv::Schedule(BackupProxyEnv *this, void (__cdecl *a2)(void *), void *a3)
{
  BackupProxyEnv *v3; // r6@1
  void *v4; // r4@1
  void (__cdecl *v5)(void *); // r5@1
  _DWORD *v6; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = j_operator new(0xCu);
  *v6 = v4;
  v6[1] = v5;
  v6[2] = v3;
  return (*(int (**)(void))(**((_DWORD **)v3 + 2) + 60))();
}


int __fastcall BackupProxyEnv::resumeModifications(int result)
{
  unsigned __int8 *v1; // r1@1
  unsigned int v2; // r3@2

  v1 = (unsigned __int8 *)(result + 14);
  do
  {
    do
      v2 = __ldrex(v1);
    while ( __strex(1u, v1) );
    __dmb();
  }
  while ( v2 );
  __dmb();
  *(_BYTE *)(result + 13) = 0;
  *(_BYTE *)(result + 14) = 0;
  return result;
}


int __fastcall BackupProxyEnv::notifyStart(int result)
{
  if ( *(_DWORD *)(result + 56) )
    result = (*(int (__fastcall **)(_DWORD, _DWORD))(result + 60))(result + 48, 0);
  return result;
}


int __fastcall BackupProxyEnv::notifyComplete(BackupProxyEnv *this)
{
  BackupProxyEnv *v1; // r4@1
  int result; // r0@1

  v1 = this;
  j_InMemoryFileStorage::flushToDisk((BackupProxyEnv *)((char *)this + 16));
  result = *((_DWORD *)v1 + 14);
  if ( result )
    result = (*((int (__fastcall **)(_DWORD, _DWORD))v1 + 15))((char *)v1 + 48, 1);
  return result;
}


int __fastcall BackupProxyEnv::FileExists(int a1, int *a2)
{
  int v2; // r5@1
  unsigned __int8 *v3; // r6@1
  int *v4; // r4@1
  unsigned int v5; // r1@2
  void *v6; // r0@5
  int v7; // r4@9
  int v8; // r5@12
  unsigned int *v9; // r1@13
  unsigned int v10; // r0@15
  unsigned int *v11; // r7@19
  unsigned int v12; // r0@21
  int v14; // [sp+4h] [bp-1Ch]@8
  int v15; // [sp+8h] [bp-18h]@8

  v2 = a1;
  v3 = (unsigned __int8 *)(a1 + 12);
  v4 = a2;
  do
  {
    do
      v5 = __ldrex(v3);
    while ( __strex(1u, v3) );
    __dmb();
  }
  while ( v5 );
  if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v6 = j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v6 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v6 + 636))() )
    v14 = 0;
    v15 = 0;
    if ( j_InMemoryFileStorage::findFile(v2 + 16, v4, (int)&v14) )
      v7 = 1;
    else
      v7 = (*(int (**)(void))(**(_DWORD **)(v2 + 8) + 24))();
    v8 = v15;
    if ( v15 )
    {
      v9 = (unsigned int *)(v15 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        v11 = (unsigned int *)(v8 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
    }
    v7 = (*(int (**)(void))(**(_DWORD **)(v2 + 8) + 24))();
  __dmb();
  *v3 = 0;
  return v7;
}


int __fastcall BackupProxyEnv::NewSequentialFile(_DWORD *a1, int a2, int *a3, _DWORD *a4)
{
  int v4; // r7@1
  unsigned __int8 *v5; // r5@1
  _DWORD *v6; // r8@1
  _DWORD *v7; // r9@1
  int *v8; // r6@1
  unsigned int v9; // r1@2
  void *v10; // r0@5
  void *v11; // r6@9
  unsigned int *v12; // r0@10
  unsigned int v13; // r1@12
  int v14; // r10@14
  unsigned int *v15; // r1@15
  unsigned int v16; // r0@17
  unsigned int *v17; // r4@21
  unsigned int v18; // r0@23
  int v19; // r4@26
  unsigned int *v20; // r1@27
  unsigned int v21; // r0@29
  unsigned int *v22; // r6@33
  unsigned int v23; // r0@35
  int result; // r0@41
  int v25; // r4@45
  unsigned int *v26; // r1@46
  unsigned int v27; // r0@48
  unsigned int *v28; // r6@52
  unsigned int v29; // r0@54
  int v30; // [sp+0h] [bp-30h]@9
  int v31; // [sp+4h] [bp-2Ch]@9
  int v32; // [sp+8h] [bp-28h]@8
  int v33; // [sp+Ch] [bp-24h]@8

  v4 = a2;
  v5 = (unsigned __int8 *)(a2 + 12);
  v6 = a1;
  v7 = a4;
  v8 = a3;
  do
  {
    do
      v9 = __ldrex(v5);
    while ( __strex(1u, v5) );
    __dmb();
  }
  while ( v9 );
  if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v10 = j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v10 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v10 + 636))() != 1 )
LABEL_40:
    (*(void (__fastcall **)(_DWORD *))(**(_DWORD **)(v4 + 8) + 8))(v6);
    goto LABEL_41;
  v32 = 0;
  v33 = 0;
  if ( j_InMemoryFileStorage::findFile(v4 + 16, v8, (int)&v32) != 1 )
    v14 = v33;
    if ( v33 )
    {
      v15 = (unsigned int *)(v33 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        v17 = (unsigned int *)(v14 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
        if ( &pthread_create )
        {
          __dmb();
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
        }
        else
          v18 = (*v17)--;
        if ( v18 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
    }
    goto LABEL_40;
  v11 = j_operator new(0x10u);
  v30 = v32;
  v31 = v33;
  if ( v33 )
    v12 = (unsigned int *)(v33 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
    else
      ++*v12;
  j_InMemorySequentialFile::InMemorySequentialFile((int)v11, (pthread_mutex_t **)&v30);
  *v7 = v11;
  v19 = v31;
  if ( v31 )
    v20 = (unsigned int *)(v31 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  v25 = v33;
  *v6 = 0;
  if ( v25 )
    v26 = (unsigned int *)(v25 + 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      v28 = (unsigned int *)(v25 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
LABEL_41:
  result = 0;
  __dmb();
  *v5 = 0;
  return result;
}


int __fastcall BackupProxyEnv::NewRandomAccessFile(_DWORD *a1, int a2, int *a3, _DWORD *a4)
{
  int v4; // r7@1
  unsigned __int8 *v5; // r5@1
  _DWORD *v6; // r8@1
  _DWORD *v7; // r9@1
  int *v8; // r6@1
  unsigned int v9; // r1@2
  void *v10; // r0@5
  void *v11; // r6@9
  unsigned int *v12; // r0@10
  unsigned int v13; // r1@12
  int v14; // r10@14
  unsigned int *v15; // r1@15
  unsigned int v16; // r0@17
  unsigned int *v17; // r4@21
  unsigned int v18; // r0@23
  int v19; // r4@26
  unsigned int *v20; // r1@27
  unsigned int v21; // r0@29
  unsigned int *v22; // r6@33
  unsigned int v23; // r0@35
  int result; // r0@41
  int v25; // r4@45
  unsigned int *v26; // r1@46
  unsigned int v27; // r0@48
  unsigned int *v28; // r6@52
  unsigned int v29; // r0@54
  int v30; // [sp+0h] [bp-30h]@9
  int v31; // [sp+4h] [bp-2Ch]@9
  int v32; // [sp+8h] [bp-28h]@8
  int v33; // [sp+Ch] [bp-24h]@8

  v4 = a2;
  v5 = (unsigned __int8 *)(a2 + 12);
  v6 = a1;
  v7 = a4;
  v8 = a3;
  do
  {
    do
      v9 = __ldrex(v5);
    while ( __strex(1u, v5) );
    __dmb();
  }
  while ( v9 );
  if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v10 = j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v10 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v10 + 636))() != 1 )
LABEL_40:
    (*(void (__fastcall **)(_DWORD *))(**(_DWORD **)(v4 + 8) + 12))(v6);
    goto LABEL_41;
  v32 = 0;
  v33 = 0;
  if ( j_InMemoryFileStorage::findFile(v4 + 16, v8, (int)&v32) != 1 )
    v14 = v33;
    if ( v33 )
    {
      v15 = (unsigned int *)(v33 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        v17 = (unsigned int *)(v14 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
        if ( &pthread_create )
        {
          __dmb();
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
        }
        else
          v18 = (*v17)--;
        if ( v18 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
    }
    goto LABEL_40;
  v11 = j_operator new(0xCu);
  v30 = v32;
  v31 = v33;
  if ( v33 )
    v12 = (unsigned int *)(v33 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
    else
      ++*v12;
  j_InMemoryRandomAccessFile::InMemoryRandomAccessFile((int)v11, (pthread_mutex_t **)&v30);
  *v7 = v11;
  v19 = v31;
  if ( v31 )
    v20 = (unsigned int *)(v31 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  v25 = v33;
  *v6 = 0;
  if ( v25 )
    v26 = (unsigned int *)(v25 + 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      v28 = (unsigned int *)(v25 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
LABEL_41:
  result = 0;
  __dmb();
  *v5 = 0;
  return result;
}


int __fastcall BackupProxyEnv::setCompactionCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 48;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 48);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 56);
  v10 = v13;
  *(_DWORD *)(v4 + 56) = v8;
  v14 = *(_DWORD *)(v4 + 60);
  *(_DWORD *)(v4 + 60) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


void __fastcall BackupProxyEnv::~BackupProxyEnv(BackupProxyEnv *this)
{
  BackupProxyEnv::~BackupProxyEnv(this);
}


int __fastcall BackupProxyEnv::~BackupProxyEnv(BackupProxyEnv *this)
{
  BackupProxyEnv *v1; // r4@1
  InMemoryFileStorage *v2; // r5@1
  void (*v3)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_27258A8;
  v2 = (BackupProxyEnv *)((char *)this + 16);
  j_InMemoryFileStorage::flushToDisk((BackupProxyEnv *)((char *)this + 16));
  v3 = (void (*)(void))*((_DWORD *)v1 + 14);
  if ( v3 )
    v3();
  j_InMemoryFileStorage::~InMemoryFileStorage(v2);
  return j_j_j__ZN7leveldb3EnvD2Ev_0(v1);
}


void __fastcall BackupProxyEnv::DeleteFile(_DWORD *a1, int a2, int *a3)
{
  BackupProxyEnv::DeleteFile(a1, a2, a3);
}


void __fastcall BackupProxyEnv::DeleteFile(_DWORD *a1, int a2, int *a3)
{
  int v3; // r5@1
  _DWORD *v4; // r4@1
  unsigned __int8 *v5; // r0@1
  int *v6; // r6@1
  unsigned int v7; // r1@2
  void *v8; // r0@7
  void *v9; // r1@12
  void *v10; // r0@12
  const char *v11; // [sp+4h] [bp-24h]@4
  int v12; // [sp+8h] [bp-20h]@4
  void *v13; // [sp+Ch] [bp-1Ch]@4
  int v14; // [sp+10h] [bp-18h]@4
  void *ptr; // [sp+14h] [bp-14h]@11

  v3 = a2;
  v4 = a1;
  v5 = (unsigned __int8 *)(a2 + 13);
  v6 = a3;
  do
    v7 = __ldrex(v5);
  while ( __strex(1u, v5) );
  __dmb();
  if ( v7 )
  {
    v13 = &unk_257BC67;
    v14 = 0;
    v11 = "DeleteFile failed to obtain destructive lock";
    v12 = 44;
    j_leveldb::Status::Status(v4, 5, (int)&v13, (int)&v11);
  }
  else
    if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v8 = j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v8 = &ServiceLocator<AppPlatform>::mDefaultService;
    if ( (*(int (**)(void))(**(_DWORD **)v8 + 636))() == 1 )
    {
      j_InMemoryFileStorage::deleteFile(v3 + 16, v6);
      __dmb();
      *(_BYTE *)(v3 + 13) = 0;
      *v4 = 0;
    }
      (*(void (__fastcall **)(void **))(**(_DWORD **)(v3 + 8) + 32))(&ptr);
      if ( ptr )
      {
        v9 = j_leveldb::Status::CopyState((leveldb::Status *)ptr, 0);
        v10 = ptr;
        *v4 = v9;
        if ( v10 )
          j_operator delete[](v10);
      }
      else
        *v4 = 0;
}
