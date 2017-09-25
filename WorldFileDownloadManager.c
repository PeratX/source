

WorldFileDownloadManager *__fastcall WorldFileDownloadManager::~WorldFileDownloadManager(WorldFileDownloadManager *this)
{
  WorldFileDownloadManager *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_26DF3B8;
  v2 = *((_DWORD *)this + 33);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 32);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v4 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 31);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v6 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = *((_DWORD *)v1 + 26);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v8 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  FileDownloadManager::~FileDownloadManager(v1);
  return v1;
}


unsigned int __fastcall WorldFileDownloadManager::_importLevel(WorldFileDownloadManager *this)
{
  WorldFileDownloadManager *v1; // r5@1
  int v2; // r4@1
  unsigned int v3; // r0@2
  unsigned int *v4; // r7@2
  unsigned int v5; // r1@5
  unsigned int v6; // r2@6
  int v7; // r8@7
  unsigned int v8; // r0@9
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  unsigned int v11; // r0@19
  unsigned int v12; // r0@25
  unsigned int v13; // r0@32
  unsigned int v14; // r0@38
  int v15; // r5@43
  unsigned int v16; // r0@45
  _DWORD *v17; // r0@48
  unsigned int *v18; // r1@49
  unsigned int v19; // r2@51
  int v20; // r5@54
  unsigned int *v21; // r1@55
  unsigned int v22; // r0@57
  unsigned int *v23; // r7@61
  unsigned int v24; // r0@63
  char *v25; // r0@70
  unsigned int *v26; // r2@72
  unsigned int v27; // r1@74
  void *v28; // r0@79
  unsigned int result; // r0@82
  unsigned int *v30; // r2@88
  signed int v31; // r1@90
  unsigned int *v32; // r2@92
  signed int v33; // r1@94
  char *v34; // [sp+Ch] [bp-3Ch]@48
  _DWORD *v35; // [sp+10h] [bp-38h]@54
  void (*v36)(void); // [sp+18h] [bp-30h]@48
  char *(__fastcall *v37)(int, int); // [sp+1Ch] [bp-2Ch]@54
  char v38; // [sp+20h] [bp-28h]@54
  int v39; // [sp+24h] [bp-24h]@54
  int v40; // [sp+28h] [bp-20h]@43

  v1 = this;
  *((_DWORD *)this + 10) = 3;
  v2 = *((_DWORD *)this + 2);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *((_DWORD *)v1 + 1);
  if ( &pthread_create )
    __dmb();
    do
      v8 = __ldrex(v4);
    while ( __strex(v8 + 1, v4) );
  else
    ++*v4;
  v9 = (unsigned int *)(v2 + 8);
      v10 = __ldrex(v9);
    while ( __strex(v10 + 1, v9) );
    ++*v9;
      v11 = __ldrex(v4);
    while ( __strex(v11 - 1, v4) );
    v11 = (*v4)--;
  if ( v11 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v12 = __ldrex(v9);
      while ( __strex(v12 - 1, v9) );
    else
      v12 = (*v9)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      v13 = __ldrex(v4);
    while ( __strex(v13 - 1, v4) );
    v13 = (*v4)--;
  if ( v13 == 1 )
        v14 = __ldrex(v9);
      while ( __strex(v14 - 1, v9) );
      v14 = (*v9)--;
    if ( v14 == 1 )
  sub_119C854(&v40, (int *)v1 + 32);
  v15 = *((_DWORD *)v1 + 27);
      v16 = __ldrex(v9);
    while ( __strex(v16 + 1, v9) );
  sub_119C854((int *)&v34, &v40);
  v36 = 0;
  v17 = operator new(0xCu);
  *v17 = v7;
  v17[1] = v2;
  if ( v2 )
    v18 = (unsigned int *)(v2 + 8);
        v19 = __ldrex(v18);
      while ( __strex(v19 + 1, v18) );
      ++*v18;
  v17[2] = v34;
  v34 = (char *)&unk_28898CC;
  v35 = v17;
  v36 = (void (*)(void))sub_1085B54;
  v37 = sub_10858E4;
  LevelArchiver::importLevel((int)&v38, v15, &v40, (int)&v35);
  v20 = v39;
  if ( v39 )
    v21 = (unsigned int *)(v39 + 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      v23 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      }
      else
        v24 = (*v23)--;
      if ( v24 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  if ( v36 )
    v36();
  v25 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v34 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
    v26 = (unsigned int *)(v2 + 8);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  v28 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v40 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
      result = __ldrex(v9);
    while ( __strex(result - 1, v9) );
    result = (*v9)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


int __fastcall WorldFileDownloadManager::WorldFileDownloadManager(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r0@1
  unsigned int *v10; // r0@2
  unsigned int v11; // r1@4
  int v12; // r0@7
  unsigned int *v13; // r0@8
  unsigned int v14; // r1@10
  int v15; // r6@13
  unsigned int *v16; // r1@14
  unsigned int v17; // r0@16
  unsigned int *v18; // r7@20
  unsigned int v19; // r0@22
  int v20; // r6@27
  unsigned int *v21; // r1@28
  unsigned int v22; // r0@30
  unsigned int *v23; // r7@34
  unsigned int v24; // r0@36
  AppPlatform **v25; // r0@42
  int *v26; // r0@44
  int v28; // [sp+0h] [bp-28h]@7
  int v29; // [sp+4h] [bp-24h]@7
  int v30; // [sp+8h] [bp-20h]@1
  int v31; // [sp+Ch] [bp-1Ch]@1

  v7 = a1;
  v30 = *(_DWORD *)a3;
  v8 = a2;
  v9 = *(_DWORD *)(a3 + 4);
  v31 = v9;
  if ( v9 )
  {
    v10 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    }
    else
      ++*v10;
  }
  v28 = *(_DWORD *)a4;
  v12 = *(_DWORD *)(a4 + 4);
  v29 = v12;
  if ( v12 )
    v13 = (unsigned int *)(v12 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 + 1, v13) );
      ++*v13;
  FileDownloadManager::FileDownloadManager(v7, (int)&v30, (int)&v28);
  v15 = v29;
  if ( v29 )
    v16 = (unsigned int *)(v29 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
      if ( &pthread_create )
      {
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      }
      else
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v20 = v31;
  if ( v31 )
    v21 = (unsigned int *)(v31 + 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      v23 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  *(_DWORD *)v7 = &off_26DF3B8;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v25 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v25 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v26 = AppPlatform::getTempPath(*v25);
  sub_119C854((int *)(v7 + 104), v26);
  sub_119C894((const void **)(v7 + 104), "/", 1u);
  *(_DWORD *)(v7 + 108) = v8;
  *(_DWORD *)(v7 + 112) = a6;
  *(_DWORD *)(v7 + 116) = a5;
  *(_BYTE *)(v7 + 120) = 0;
  *(_BYTE *)(v7 + 121) = 0;
  *(_DWORD *)(v7 + 124) = &unk_28898CC;
  *(_DWORD *)(v7 + 128) = &unk_28898CC;
  *(_DWORD *)(v7 + 132) = &unk_28898CC;
  *(_DWORD *)(v7 + 136) = a7;
  return v7;
}


LevelData *__fastcall WorldFileDownloadManager::_transformLevel(int a1)
{
  int v1; // r6@1
  LevelData *result; // r0@1
  int *v3; // r0@2
  int v4; // ST00_4@2
  int v5; // r5@3
  void *v6; // r0@3
  void *v7; // r0@8
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  char v12; // [sp+8h] [bp-198h]@3
  int v13; // [sp+Ch] [bp-194h]@3
  int v14; // [sp+10h] [bp-190h]@2
  int v15; // [sp+14h] [bp-18Ch]@2
  char v16; // [sp+18h] [bp-188h]@2

  v1 = a1;
  result = *(LevelData **)(*(_DWORD *)(a1 + 124) - 12);
  if ( result )
  {
    (*(void (__fastcall **)(char *))(**(_DWORD **)(v1 + 112) + 20))(&v16);
    v3 = (int *)LevelData::getPremiumTemplatePackId((LevelData *)&v16);
    sub_119C854(&v15, v3);
    v4 = *(_DWORD *)(v1 + 136);
    (*(void (__fastcall **)(int *))(**(_DWORD **)(v1 + 112) + 28))(&v14);
    if ( v14 )
    {
      (*(void (__fastcall **)(char *))(*(_DWORD *)v14 + 60))(&v12);
      v5 = *(_DWORD *)&v12;
      v6 = (void *)(v13 - 12);
      if ( (int *)(v13 - 12) != &dword_28898C0 )
      {
        v10 = (unsigned int *)(v13 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v6);
      }
      if ( !v5 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v14 + 48))(v14);
      if ( v14 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v14 + 4))(v14);
    }
    v7 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v15 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      else
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    result = LevelData::~LevelData((LevelData *)&v16);
  }
  return result;
}


void __fastcall WorldFileDownloadManager::~WorldFileDownloadManager(WorldFileDownloadManager *this)
{
  WorldFileDownloadManager *v1; // r0@1

  v1 = WorldFileDownloadManager::~WorldFileDownloadManager(this);
  j_j_j__ZdlPv_4((void *)v1);
}


LevelData *__fastcall WorldFileDownloadManager::_setRealmData(double a1)
{
  int v1; // r4@1
  int *v2; // r10@1
  __int64 v3; // r6@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  void *v7; // r0@16
  void *v8; // r0@17
  void *v9; // r0@18
  char *v10; // r0@19
  void *v11; // r0@20
  unsigned int *v13; // r2@22
  signed int v14; // r1@24
  unsigned int *v15; // r2@26
  signed int v16; // r1@28
  unsigned int *v17; // r2@30
  signed int v18; // r1@32
  unsigned int *v19; // r2@34
  signed int v20; // r1@36
  unsigned int *v21; // r2@38
  signed int v22; // r1@40
  char *v23; // [sp+4h] [bp-1BCh]@19
  int v24; // [sp+8h] [bp-1B8h]@18
  int v25; // [sp+Ch] [bp-1B4h]@1
  char *v26; // [sp+10h] [bp-1B0h]@1
  char *v27; // [sp+14h] [bp-1ACh]@1
  char *v28; // [sp+18h] [bp-1A8h]@1
  int v29; // [sp+20h] [bp-1A0h]@1
  int v30; // [sp+24h] [bp-19Ch]@1
  char v31; // [sp+28h] [bp-198h]@1

  v1 = LODWORD(a1);
  LODWORD(a1) = &v31;
  v2 = (int *)HIDWORD(a1);
  LevelData::LevelData(a1);
  sub_119C884((void **)&v29, "realmsSettingsScreen.downloadWorldNameCopy");
  sub_119C854(&v25, (int *)(v1 + 132));
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v26 = (char *)operator new(4u);
  v28 = v26 + 4;
  v27 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v25,
                  (int)&v26,
                  (int)v26);
  I18n::get(&v30, &v29, (unsigned __int64 *)&v26);
  v3 = *(_QWORD *)&v26;
  if ( v26 != v27 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v3 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v3 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v6);
      }
      LODWORD(v3) = v3 + 4;
    }
    while ( (_DWORD)v3 != HIDWORD(v3) );
    LODWORD(v3) = v26;
  }
  if ( (_DWORD)v3 )
    operator delete((void *)v3);
  v7 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v29 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  ExternalFileLevelStorage::readLevelDataFromFile(v2, (LevelData *)&v31);
  LevelData::setLevelName((int)&v31, &v30);
  ExternalFileLevelStorage::saveLevelData(v2, (LevelData *)&v31);
  sub_119C854(&v24, v2);
  sub_119C894((const void **)&v24, "\\levelname.txt", 0xEu);
  ExternalFileLevelStorage::makeReadableLevelnameFile(&v24, &v30);
  v9 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v24 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v23 = (char *)&unk_28898CC;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v1 + 132),
    (int *)&v23);
  v10 = v23 - 12;
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v23 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v30 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  return LevelData::~LevelData((LevelData *)&v31);
}


void __fastcall WorldFileDownloadManager::~WorldFileDownloadManager(WorldFileDownloadManager *this)
{
  WorldFileDownloadManager::~WorldFileDownloadManager(this);
}


char *__fastcall WorldFileDownloadManager::update(WorldFileDownloadManager *this)
{
  WorldFileDownloadManager *v1; // r4@1
  char *result; // r0@1
  bool v3; // zf@1

  v1 = this;
  FileDownloadManager::update(this);
  result = (char *)*((_BYTE *)v1 + 121);
  v3 = result == 0;
  if ( *((_BYTE *)v1 + 121) )
  {
    result = (char *)*((_BYTE *)v1 + 120);
    v3 = result == 0;
  }
  if ( !v3 )
    WorldFileDownloadManager::_importLevel(v1);
    *((_BYTE *)v1 + 121) = 0;
    result = sub_119DB1C((const void **)v1 + 32, 0, *(_BYTE **)(*((_DWORD *)v1 + 32) - 12), 0);
  return result;
}


unsigned int __fastcall WorldFileDownloadManager::downloadArchivedFile(int a1, _DWORD *a2, int *a3)
{
  int v3; // r5@1
  _DWORD *v4; // r9@1
  int v5; // r4@1
  unsigned int v6; // r0@2
  unsigned int *v7; // r6@2
  unsigned int v8; // r1@5
  unsigned int v9; // r2@6
  int v10; // r8@7
  unsigned int v11; // r0@9
  unsigned int *v12; // r7@12
  unsigned int v13; // r0@14
  unsigned int v14; // r0@19
  unsigned int v15; // r0@25
  unsigned int v16; // r0@32
  unsigned int v17; // r0@38
  __int64 v18; // r2@43
  unsigned int v19; // r0@45
  _DWORD *v20; // r0@48
  unsigned int v21; // r1@50
  __int64 v22; // r1@53
  unsigned int v23; // r0@57
  void *v24; // r0@62
  int *v25; // r5@63
  unsigned int v26; // r0@65
  _DWORD *v27; // r0@68
  unsigned int v28; // r1@70
  __int64 v29; // r1@73
  unsigned int v30; // r0@77
  void *v31; // r0@82
  unsigned int result; // r0@85
  unsigned int *v33; // r2@91
  signed int v34; // r1@93
  unsigned int *v35; // r2@95
  signed int v36; // r1@97
  _DWORD *v37; // [sp+Ch] [bp-4Ch]@73
  void (*v38)(void); // [sp+14h] [bp-44h]@68
  _DWORD *v39; // [sp+1Ch] [bp-3Ch]@53
  void (*v40)(void); // [sp+24h] [bp-34h]@48
  int v41; // [sp+30h] [bp-28h]@43
  int v42; // [sp+34h] [bp-24h]@43

  v3 = a1;
  *(_DWORD *)(a1 + 40) = 1;
  v4 = a2;
  EntityInteraction::setInteractText((int *)(a1 + 132), a3);
  v5 = *(_DWORD *)(v3 + 8);
  if ( !v5 )
    std::__throw_bad_weak_ptr();
  v6 = *(_DWORD *)(v5 + 4);
  v7 = (unsigned int *)(v5 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v6 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v8 = __ldrex(v7);
      if ( v8 == v6 )
        break;
      __clrex();
      v6 = v8;
    }
    v9 = __strex(v6 + 1, v7);
    v6 = v8;
  }
  while ( v9 );
  __dmb();
  v10 = *(_DWORD *)(v3 + 4);
  if ( &pthread_create )
    __dmb();
    do
      v11 = __ldrex(v7);
    while ( __strex(v11 + 1, v7) );
  else
    ++*v7;
  v12 = (unsigned int *)(v5 + 8);
      v13 = __ldrex(v12);
    while ( __strex(v13 + 1, v12) );
    ++*v12;
      v14 = __ldrex(v7);
    while ( __strex(v14 - 1, v7) );
    v14 = (*v7)--;
  if ( v14 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
    if ( &pthread_create )
      do
        v15 = __ldrex(v12);
      while ( __strex(v15 - 1, v12) );
    else
      v15 = (*v12)--;
    if ( v15 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
      v16 = __ldrex(v7);
    while ( __strex(v16 - 1, v7) );
    v16 = (*v7)--;
  if ( v16 == 1 )
        v17 = __ldrex(v12);
      while ( __strex(v17 - 1, v12) );
      v17 = (*v12)--;
    if ( v17 == 1 )
  HIDWORD(v18) = *v4;
  LODWORD(v18) = *(_DWORD *)(v3 + 104);
  Util::format((Util *)&v42, "%s%s.%s", v18, LevelArchiver::EXTENSION_VANILLA);
  sub_119C884((void **)&v41, (const char *)&unk_257BC67);
      v19 = __ldrex(v12);
    while ( __strex(v19 + 1, v12) );
  v40 = 0;
  v20 = operator new(8u);
  *v20 = v10;
  v20[1] = v5;
      v21 = __ldrex(v12);
    while ( __strex(v21 + 1, v12) );
  LODWORD(v22) = sub_1085300;
  v39 = v20;
  HIDWORD(v22) = sub_1084E2C;
  *(_QWORD *)&v40 = v22;
  FileDownloadManager::downloadFile(v3, (int)v4, (int)&v41, &v42, 0, 0, (int)&v39);
  if ( v40 )
    v40();
      v23 = __ldrex(v12);
    while ( __strex(v23 - 1, v12) );
    v23 = (*v12)--;
  if ( v23 == 1 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v5 + 12))(v5);
  v24 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v41 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = *(int **)(v3 + 116);
      v26 = __ldrex(v12);
    while ( __strex(v26 + 1, v12) );
  v38 = 0;
  v27 = operator new(8u);
  *v27 = v10;
  v27[1] = v5;
      v28 = __ldrex(v12);
    while ( __strex(v28 + 1, v12) );
  LODWORD(v29) = sub_1085840;
  v37 = v27;
  HIDWORD(v29) = sub_1085634;
  *(_QWORD *)&v38 = v29;
  UserAuthentication::getGlobalCertificate(v25, (int)&v37);
  if ( v38 )
    v38();
      v30 = __ldrex(v12);
    while ( __strex(v30 - 1, v12) );
    v30 = (*v12)--;
  if ( v30 == 1 )
  v31 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v42 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
      result = __ldrex(v12);
    while ( __strex(result - 1, v12) );
    result = (*v12)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return result;
}
