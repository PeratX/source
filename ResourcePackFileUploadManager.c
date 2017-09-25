

void __fastcall ResourcePackFileUploadManager::~ResourcePackFileUploadManager(ResourcePackFileUploadManager *this)
{
  ResourcePackFileUploadManager::~ResourcePackFileUploadManager(this);
}


int __fastcall ResourcePackFileUploadManager::ResourcePackFileUploadManager(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r0@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  int v7; // r0@7
  unsigned int *v8; // r0@8
  unsigned int v9; // r1@10
  int v10; // r5@13
  unsigned int *v11; // r1@14
  unsigned int v12; // r0@16
  unsigned int *v13; // r6@20
  unsigned int v14; // r0@22
  int v15; // r5@27
  unsigned int *v16; // r1@28
  unsigned int v17; // r0@30
  unsigned int *v18; // r6@34
  unsigned int v19; // r0@36
  int v21; // [sp+0h] [bp-20h]@7
  int v22; // [sp+4h] [bp-1Ch]@7
  int v23; // [sp+8h] [bp-18h]@1
  int v24; // [sp+Ch] [bp-14h]@1

  v3 = a1;
  v23 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  v24 = v4;
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v21 = *(_DWORD *)a3;
  v7 = *(_DWORD *)(a3 + 4);
  v22 = v7;
  if ( v7 )
    v8 = (unsigned int *)(v7 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  FileUploadManager::FileUploadManager(v3, (int)&v23, (int)&v21);
  v10 = v22;
  if ( v22 )
    v11 = (unsigned int *)(v22 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  v15 = v24;
  if ( v24 )
    v16 = (unsigned int *)(v24 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  *(_DWORD *)v3 = &off_26EC130;
  *(_DWORD *)(v3 + 152) = 0;
  *(_DWORD *)(v3 + 156) = 0;
  *(_DWORD *)(v3 + 160) = 0;
  return v3;
}


void __fastcall ResourcePackFileUploadManager::~ResourcePackFileUploadManager(ResourcePackFileUploadManager *this)
{
  ResourcePackFileUploadManager *v1; // r0@1

  v1 = ResourcePackFileUploadManager::~ResourcePackFileUploadManager(this);
  j_j_j__ZdlPv_6((void *)v1);
}


ResourcePackFileUploadManager *__fastcall ResourcePackFileUploadManager::~ResourcePackFileUploadManager(ResourcePackFileUploadManager *this)
{
  ResourcePackFileUploadManager *v1; // r9@1
  __int64 v2; // r4@1
  unsigned int *v3; // r2@8
  signed int v4; // r1@10
  int *v5; // r0@16
  int v7; // [sp+4h] [bp-4Ch]@3
  int v8; // [sp+8h] [bp-48h]@3
  char v9; // [sp+Ch] [bp-44h]@3
  void (__fastcall *v10)(char *, char *, signed int); // [sp+14h] [bp-3Ch]@3
  int v11; // [sp+20h] [bp-30h]@2
  int v12; // [sp+24h] [bp-2Ch]@2

  v1 = this;
  *(_DWORD *)this = &off_26EC130;
  LODWORD(v2) = *((_QWORD *)this + 19) >> 32;
  HIDWORD(v2) = *((_QWORD *)this + 19);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    do
    {
      v11 = *(_DWORD *)HIDWORD(v2);
      v12 = *(_DWORD *)(v11 - 12);
      if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v11) == 1 )
      {
        v7 = *(_DWORD *)HIDWORD(v2);
        v8 = *(_DWORD *)(v7 - 12);
        Core::FileSystem::deleteEmptyDirectory((int)&v9, (__int64 *)&v7);
        if ( v10 )
          v10(&v9, &v9, 3);
      }
      HIDWORD(v2) += 4;
    }
    while ( (_DWORD)v2 != HIDWORD(v2) );
    v2 = *((_QWORD *)v1 + 19);
    if ( (_DWORD)v2 != HIDWORD(v2) )
      do
        v5 = (int *)(*(_DWORD *)v2 - 12);
        if ( v5 != &dword_28898C0 )
        {
          v3 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
            j_j_j_j__ZdlPv_9(v5);
        }
        LODWORD(v2) = v2 + 4;
      while ( (_DWORD)v2 != HIDWORD(v2) );
      HIDWORD(v2) = *((_DWORD *)v1 + 38);
  }
  if ( HIDWORD(v2) )
    operator delete((void *)HIDWORD(v2));
  FileUploadManager::~FileUploadManager(v1);
  return v1;
}


unsigned int __fastcall ResourcePackFileUploadManager::_uploadResourcePackFolder(int a1, int *a2, int a3, int *a4)
{
  int v4; // r5@1
  int *v5; // r7@1
  __int64 v6; // r0@1
  int *v7; // r10@1
  int v8; // r11@1
  int v9; // r8@4
  unsigned int v10; // r1@5
  unsigned int *v11; // r0@5
  unsigned int v12; // r2@8
  unsigned int v13; // r3@9
  int v14; // r5@10
  unsigned int *v15; // r4@10
  unsigned int v16; // r1@12
  unsigned int v17; // r1@17
  unsigned int v18; // r0@23
  int v19; // r9@28
  unsigned int v20; // r0@30
  _DWORD *v21; // r0@33
  int v22; // r6@33
  int v23; // r0@33
  unsigned int *v24; // r0@34
  unsigned int v25; // r1@36
  __int64 v26; // r0@39
  void *v27; // r0@43
  void *v28; // r0@44
  void *v29; // r0@45
  int v30; // r0@46
  unsigned int *v31; // r2@47
  unsigned int v32; // r1@49
  unsigned int result; // r0@56
  unsigned int *v34; // r2@62
  signed int v35; // r1@64
  unsigned int *v36; // r2@66
  signed int v37; // r1@68
  unsigned int *v38; // r2@70
  signed int v39; // r1@72
  char v40; // [sp+8h] [bp-60h]@39
  void (*v41)(void); // [sp+10h] [bp-58h]@39
  int v42; // [sp+18h] [bp-50h]@28
  int v43; // [sp+1Ch] [bp-4Ch]@28
  int v44; // [sp+20h] [bp-48h]@33
  int v45; // [sp+24h] [bp-44h]@33
  int v46; // [sp+28h] [bp-40h]@33
  int v47; // [sp+2Ch] [bp-3Ch]@33
  int v48; // [sp+30h] [bp-38h]@39
  void (*v49)(void); // [sp+38h] [bp-30h]@33

  v4 = a1;
  v5 = a2;
  v6 = *(_QWORD *)(a1 + 156);
  v7 = a4;
  v8 = a3;
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)(v4 + 152),
      a4);
  }
  else
    sub_21E8AF4((int *)v6, a4);
    *(_DWORD *)(v4 + 156) += 4;
  v9 = *(_DWORD *)(v4 + 8);
  if ( !v9 )
    std::__throw_bad_weak_ptr();
  v10 = *(_DWORD *)(v9 + 4);
  v11 = (unsigned int *)(v9 + 4);
  do
    while ( 1 )
    {
      if ( !v10 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v12 = __ldrex(v11);
      if ( v12 == v10 )
        break;
      __clrex();
      v10 = v12;
    }
    v13 = __strex(v10 + 1, v11);
    v10 = v12;
  while ( v13 );
  __dmb();
  v14 = *(_DWORD *)(v4 + 4);
  v15 = (unsigned int *)(v9 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v16 = __ldrex(v15);
    while ( __strex(v16 + 1, v15) );
    ++*v15;
      v17 = __ldrex(v11);
    while ( __strex(v17 - 1, v11) );
    v17 = (*v11)--;
  if ( v17 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
    if ( &pthread_create )
      do
        v18 = __ldrex(v15);
      while ( __strex(v18 - 1, v15) );
    else
      v18 = (*v15)--;
    if ( v18 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  v19 = TaskGroup::DISK;
  v42 = v14;
  v43 = v9;
      v20 = __ldrex(v15);
    while ( __strex(v20 + 1, v15) );
  sub_21E8AF4(&v44, v5);
  sub_21E8AF4(&v45, (int *)v8);
  v46 = *(_DWORD *)(v8 + 4);
  sub_21E8AF4(&v47, v7);
  v49 = 0;
  v21 = operator new(0x18u);
  v22 = (int)v21;
  *v21 = v42;
  v23 = v43;
  *(_DWORD *)(v22 + 4) = v43;
  if ( v23 )
    v24 = (unsigned int *)(v23 + 8);
        v25 = __ldrex(v24);
      while ( __strex(v25 + 1, v24) );
      ++*v24;
  sub_21E8AF4((int *)(v22 + 8), &v44);
  sub_21E8AF4((int *)(v22 + 12), &v45);
  *(_DWORD *)(v22 + 16) = v46;
  sub_21E8AF4((int *)(v22 + 20), &v47);
  HIDWORD(v26) = sub_163A6B4;
  v48 = v22;
  LODWORD(v26) = sub_163ADB8;
  *(_QWORD *)&v49 = v26;
  v41 = 0;
  TaskGroup::queue(v19, (int)&v48, (int)&v40, 1u, 0xFFFFFFFF);
  if ( v41 )
    v41();
  if ( v49 )
    v49();
  v27 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v47 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v45 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v44 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = v43;
  if ( v43 )
    v31 = (unsigned int *)(v43 + 8);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 == 1 )
      (*(void (**)(void))(*(_DWORD *)v30 + 12))();
      result = __ldrex(v15);
    while ( __strex(result - 1, v15) );
    result = (*v15)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  return result;
}


RakNet *__fastcall ResourcePackFileUploadManager::uploadResourcePack(int a1, int *a2, int a3, int a4, int a5)
{
  int v5; // r8@1
  int v6; // r7@1
  int v7; // r5@1
  const void **v8; // r6@1
  char *v9; // r0@2
  AppPlatform **v10; // r0@6
  int *v11; // r0@8
  int v12; // r7@8
  __int64 v13; // r2@8
  int v14; // r4@8
  __int64 v15; // r0@8
  void *v16; // r0@8
  void *v17; // r0@9
  void *v18; // r0@10
  void *v19; // r0@11
  RakNet *result; // r0@12
  unsigned int *v21; // r2@14
  signed int v22; // r1@16
  unsigned int *v23; // r2@18
  signed int v24; // r1@20
  unsigned int *v25; // r2@22
  signed int v26; // r1@24
  unsigned int *v27; // r2@34
  signed int v28; // r1@36
  unsigned int *v29; // r2@38
  signed int v30; // r1@40
  int v31; // [sp+4h] [bp-454h]@8
  int v32; // [sp+8h] [bp-450h]@8
  int v33; // [sp+Ch] [bp-44Ch]@3
  char *v34; // [sp+10h] [bp-448h]@2
  int v35; // [sp+14h] [bp-444h]@1
  int v36; // [sp+18h] [bp-440h]@8
  int v37; // [sp+1Ch] [bp-43Ch]@8
  __int64 v38; // [sp+20h] [bp-438h]@8
  char v39; // [sp+34h] [bp-424h]@8
  int v40; // [sp+38h] [bp-420h]@8
  RakNet *v41; // [sp+43Ch] [bp-1Ch]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = (const void **)a2;
  v41 = _stack_chk_guard;
  sub_21E8AF4(&v35, a2);
  if ( a5 == 1 )
  {
    v34 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v34, *((_DWORD *)*v8 - 3) + 8);
    sub_21E7408((const void **)&v34, "premium/", 8u);
    sub_21E72F0((const void **)&v34, v8);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      &v35,
      (int *)&v34);
    v9 = v34 - 12;
    if ( (int *)(v34 - 12) != &dword_28898C0 )
    {
      v25 = (unsigned int *)(v34 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      }
      else
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    }
  }
  ResourceLocation::getFullPath((ResourceLocation *)&v33, v7);
  if ( v6 == 1 )
    FileUploadManager::uploadFile(v5, &v35, (int)&v33, 0x100000, 0);
  else
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v10 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v10 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
    v11 = AppPlatform::getTempPath(*v10);
    v12 = *v11;
    LODWORD(v13) = *v8;
    v14 = *(_DWORD *)(*v11 - 12);
    Util::format((Util *)&v31, "%s.zip", v13);
    LODWORD(v15) = v31;
    HIDWORD(v15) = *(_DWORD *)(v31 - 12);
    v36 = v12;
    v37 = v14;
    v38 = v15;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v39, (int)&v36, 2);
    sub_21E94B4((void **)&v32, (const char *)&v40);
    v16 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v31 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    ResourcePackFileUploadManager::_uploadResourcePackFolder(v5, &v35, v7, &v32);
    v17 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v32 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v35 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  result = (RakNet *)(_stack_chk_guard - v41);
  if ( _stack_chk_guard != v41 )
    _stack_chk_fail(result);
  return result;
}
