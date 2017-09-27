

void __fastcall WorldFileUploadManager::~WorldFileUploadManager(WorldFileUploadManager *this)
{
  WorldFileUploadManager::~WorldFileUploadManager(this);
}


void __fastcall WorldFileUploadManager::_uploadLocalWorldLevel(int a1, int *a2, const void **a3, _DWORD *a4)
{
  int v4; // r7@1
  const void **v5; // r8@1
  int *v6; // r10@1
  int *v7; // r0@2
  int v8; // r5@3
  int (__fastcall *v9)(int, char *); // r6@3
  int v10; // ST00_4@4
  int v11; // r5@5
  void *v12; // r0@5
  signed int v13; // r4@7
  void *v14; // r0@12
  void *v15; // r0@13
  int *v16; // r0@15
  const void **v17; // r0@15
  const void **v18; // r0@15
  char *v19; // r0@15
  void *v20; // r0@16
  int v21; // r9@17
  unsigned int v22; // r1@18
  unsigned int *v23; // r0@18
  unsigned int v24; // r2@21
  unsigned int v25; // r3@22
  int v26; // r5@25
  unsigned int *v27; // r4@25
  unsigned int *v28; // r2@27
  signed int v29; // r1@29
  unsigned int *v30; // r2@31
  signed int v31; // r1@33
  unsigned int *v32; // r2@35
  signed int v33; // r1@37
  unsigned int *v34; // r2@39
  signed int v35; // r1@41
  unsigned int *v36; // r2@59
  signed int v37; // r1@61
  unsigned int v38; // r1@69
  unsigned int v39; // r1@73
  unsigned int v40; // r0@79
  int v41; // r7@84
  unsigned int v42; // r0@86
  void *v43; // r6@89
  unsigned int *v44; // r0@90
  unsigned int v45; // r1@92
  __int64 v46; // r0@95
  int v47; // r5@95
  unsigned int *v48; // r1@96
  unsigned int v49; // r0@98
  unsigned int *v50; // r6@102
  unsigned int v51; // r0@104
  void *v52; // r0@111
  unsigned int *v53; // r2@113
  unsigned int v54; // r1@115
  unsigned int v55; // r0@122
  char *v56; // r0@127
  unsigned int *v57; // r2@129
  signed int v58; // r1@131
  unsigned int *v59; // r2@133
  signed int v60; // r1@135
  int v61; // [sp+14h] [bp-1E4h]@89
  void *v62; // [sp+18h] [bp-1E0h]@95
  void (*v63)(void); // [sp+20h] [bp-1D8h]@89
  char v64; // [sp+28h] [bp-1D0h]@95
  int v65; // [sp+2Ch] [bp-1CCh]@95
  int v66; // [sp+30h] [bp-1C8h]@15
  char *v67; // [sp+34h] [bp-1C4h]@15
  char *v68; // [sp+38h] [bp-1C0h]@15
  char v69; // [sp+3Ch] [bp-1BCh]@5
  int v70; // [sp+40h] [bp-1B8h]@5
  int v71; // [sp+44h] [bp-1B4h]@4
  char v72; // [sp+48h] [bp-1B0h]@3
  int v73; // [sp+5Ch] [bp-19Ch]@2
  char v74; // [sp+60h] [bp-198h]@2
  int v75; // [sp+1D0h] [bp-28h]@2

  v4 = a1;
  *(_DWORD *)(a1 + 80) = 3;
  v5 = a3;
  v6 = a2;
  if ( !*(_DWORD *)(*a4 - 12) )
    goto LABEL_147;
  (*(void (__fastcall **)(char *))(**(_DWORD **)(a1 + 160) + 20))(&v74);
  v7 = (int *)LevelData::getPremiumTemplatePackId((LevelData *)&v74);
  sub_119C854(&v75, v7);
  LevelData::~LevelData((LevelData *)&v74);
  sub_119C854(&v73, (int *)&Util::EMPTY_STRING);
  if ( *(_DWORD *)(v75 - 12)
    && (v8 = *(_DWORD *)(v4 + 168),
        v9 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v8 + 20),
        mce::UUID::fromString((int)&v72, &v75),
        !v9(v8, &v72)) )
  {
    FileUploadManager::setFailed((FileUploadManager *)v4);
    v13 = 1;
  }
  else
    v10 = *(_DWORD *)(v4 + 168);
    (*(void (__fastcall **)(int *))(**(_DWORD **)(v4 + 160) + 28))(&v71);
    if ( !v71 )
      goto LABEL_148;
    (*(void (__fastcall **)(char *))(*(_DWORD *)v71 + 60))(&v69);
    v11 = *(_DWORD *)&v69;
    v12 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
    {
      v36 = (unsigned int *)(v70 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
      }
      else
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    }
    if ( !v11 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v71 + 48))(v71);
      v13 = 0;
    else
LABEL_148:
      FileUploadManager::setFailed((FileUploadManager *)v4);
      v13 = 1;
    if ( v71 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v71 + 4))(v71);
  v14 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v73 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v75 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  if ( !v13 )
LABEL_147:
    v16 = sub_119C854(&v66, (int *)(v4 + 152));
    sub_119C8A4((const void **)v16, v5);
    v17 = sub_119C894((const void **)&v66, ".", 1u);
    v67 = (char *)*v17;
    *v17 = &unk_28898CC;
    v18 = sub_119C8A4((const void **)&v67, (const void **)&LevelArchiver::EXTENSION_VANILLA);
    v68 = (char *)*v18;
    *v18 = &unk_28898CC;
    v19 = v67 - 12;
    if ( (int *)(v67 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v67 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
    v20 = (void *)(v66 - 12);
    if ( (int *)(v66 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v66 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v20);
    v21 = *(_DWORD *)(v4 + 8);
    if ( !v21 )
      std::__throw_bad_weak_ptr();
    v22 = *(_DWORD *)(v21 + 4);
    v23 = (unsigned int *)(v21 + 4);
    do
      while ( 1 )
        if ( !v22 )
          std::__throw_bad_weak_ptr();
        v24 = __ldrex(v23);
        if ( v24 == v22 )
          break;
        __clrex();
        v22 = v24;
      v25 = __strex(v22 + 1, v23);
      v22 = v24;
    while ( v25 );
    __dmb();
    v26 = *(_DWORD *)(v4 + 4);
    v27 = (unsigned int *)(v21 + 8);
        v38 = __ldrex(v27);
      while ( __strex(v38 + 1, v27) );
      ++*v27;
        v39 = __ldrex(v23);
      while ( __strex(v39 - 1, v23) );
      v39 = (*v23)--;
    if ( v39 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
          v40 = __ldrex(v27);
        while ( __strex(v40 - 1, v27) );
        v40 = (*v27)--;
      if ( v40 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
    v41 = *(_DWORD *)(v4 + 156);
        v42 = __ldrex(v27);
      while ( __strex(v42 + 1, v27) );
    sub_119C854(&v61, v6);
    v63 = 0;
    v43 = operator new(0xCu);
    *(_DWORD *)v43 = v26;
    *((_DWORD *)v43 + 1) = v21;
    if ( v21 )
      v44 = (unsigned int *)(v21 + 8);
          v45 = __ldrex(v44);
        while ( __strex(v45 + 1, v44) );
        ++*v44;
    sub_119C854((int *)v43 + 2, &v61);
    LODWORD(v46) = sub_10874D8;
    v62 = v43;
    HIDWORD(v46) = sub_1086FF4;
    *(_QWORD *)&v63 = v46;
    LevelArchiver::archiveLevel((int)&v64, v41, v5, 0, (int *)&v68, (int)&v62);
    v47 = v65;
    if ( v65 )
      v48 = (unsigned int *)(v65 + 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 == 1 )
        v50 = (unsigned int *)(v47 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
        if ( &pthread_create )
        {
          __dmb();
          do
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
        }
        else
          v51 = (*v50)--;
        if ( v51 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
    if ( v63 )
      v63();
    v52 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v61 - 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v52);
      v53 = (unsigned int *)(v21 + 8);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 == 1 )
        (*(void (**)(void))(*(_DWORD *)v21 + 12))();
        v55 = __ldrex(v27);
      while ( __strex(v55 - 1, v27) );
      v55 = (*v27)--;
    if ( v55 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
    v56 = v68 - 12;
    if ( (int *)(v68 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v68 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v56);
}


unsigned int __fastcall WorldFileUploadManager::uploadArchivedFile(int a1, int *a2, int a3)
{
  *(_DWORD *)(a1 + 80) = 1;
  return FileUploadManager::uploadFile(a1, a2, a3, 0x100000, 1);
}


void __fastcall WorldFileUploadManager::~WorldFileUploadManager(WorldFileUploadManager *this)
{
  FileUploadManager *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26DF3D4;
  v2 = *((_DWORD *)this + 38);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  FileUploadManager::~FileUploadManager(v1);
  operator delete((void *)v1);
}


void __fastcall WorldFileUploadManager::_uploadLocalWorldLevel(int a1, int *a2, const void **a3, _DWORD *a4)
{
  WorldFileUploadManager::_uploadLocalWorldLevel(a1, a2, a3, a4);
}


FileUploadManager *__fastcall WorldFileUploadManager::~WorldFileUploadManager(WorldFileUploadManager *this)
{
  FileUploadManager *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26DF3D4;
  v2 = *((_DWORD *)this + 38);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  FileUploadManager::~FileUploadManager(v1);
  return v1;
}


int __fastcall WorldFileUploadManager::WorldFileUploadManager(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
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
  FileUploadManager::FileUploadManager(v7, (int)&v30, (int)&v28);
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
  *(_DWORD *)v7 = &off_26DF3D4;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v25 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v25 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v26 = AppPlatform::getTempPath(*v25);
  sub_119C854((int *)(v7 + 152), v26);
  sub_119C894((const void **)(v7 + 152), "/", 1u);
  *(_DWORD *)(v7 + 156) = v8;
  *(_DWORD *)(v7 + 160) = a6;
  *(_DWORD *)(v7 + 164) = a5;
  *(_DWORD *)(v7 + 168) = a7;
  FileUploadManager::setUseStream((FileUploadManager *)v7, 1);
  return v7;
}


unsigned int __fastcall WorldFileUploadManager::uploadLocalWorldLevel(int a1, int *a2, int *a3)
{
  int v3; // r7@1
  int *v4; // r9@1
  int v5; // r8@1
  int *v6; // r6@1
  unsigned int v7; // r1@2
  unsigned int *v8; // r0@2
  unsigned int v9; // r2@5
  unsigned int v10; // r3@6
  int v11; // r5@7
  unsigned int *v12; // r4@7
  unsigned int v13; // r1@9
  unsigned int v14; // r1@14
  unsigned int v15; // r0@20
  int *v16; // r10@25
  unsigned int v17; // r0@27
  void *v18; // r6@30
  unsigned int *v19; // r0@31
  unsigned int v20; // r1@33
  __int64 v21; // r0@36
  void *v22; // r0@38
  void *v23; // r0@39
  unsigned int *v24; // r2@41
  unsigned int v25; // r1@43
  unsigned int result; // r0@50
  unsigned int *v27; // r2@56
  signed int v28; // r1@58
  unsigned int *v29; // r2@60
  signed int v30; // r1@62
  int v31; // [sp+8h] [bp-40h]@30
  int v32; // [sp+Ch] [bp-3Ch]@30
  void *v33; // [sp+10h] [bp-38h]@36
  void (*v34)(void); // [sp+18h] [bp-30h]@30

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = a2;
  if ( !v5 )
    std::__throw_bad_weak_ptr();
  v7 = *(_DWORD *)(v5 + 4);
  v8 = (unsigned int *)(v5 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v7 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v9 = __ldrex(v8);
      if ( v9 == v7 )
        break;
      __clrex();
      v7 = v9;
    }
    v10 = __strex(v7 + 1, v8);
    v7 = v9;
  }
  while ( v10 );
  __dmb();
  v11 = *(_DWORD *)(v3 + 4);
  v12 = (unsigned int *)(v5 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v13 = __ldrex(v12);
    while ( __strex(v13 + 1, v12) );
  else
    ++*v12;
      v14 = __ldrex(v8);
    while ( __strex(v14 - 1, v8) );
    v14 = (*v8)--;
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
  v16 = *(int **)(v3 + 164);
      v17 = __ldrex(v12);
    while ( __strex(v17 + 1, v12) );
  sub_119C854(&v31, v6);
  sub_119C854(&v32, v4);
  v34 = 0;
  v18 = operator new(0x10u);
  *(_DWORD *)v18 = v11;
  *((_DWORD *)v18 + 1) = v5;
  if ( v5 )
    v19 = (unsigned int *)(v5 + 8);
        v20 = __ldrex(v19);
      while ( __strex(v20 + 1, v19) );
      ++*v19;
  sub_119C854((int *)v18 + 2, &v31);
  sub_119C854((int *)v18 + 3, &v32);
  LODWORD(v21) = sub_1087CD0;
  v33 = v18;
  HIDWORD(v21) = sub_108796C;
  *(_QWORD *)&v34 = v21;
  UserAuthentication::getGlobalCertificate(v16, (int)&v33);
  if ( v34 )
    v34();
  v22 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v32 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  v23 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v31 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
    v24 = (unsigned int *)(v5 + 8);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 == 1 )
      (*(void (**)(void))(*(_DWORD *)v5 + 12))();
      result = __ldrex(v12);
    while ( __strex(result - 1, v12) );
    result = (*v12)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return result;
}
