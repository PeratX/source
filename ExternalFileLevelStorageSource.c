

void __fastcall ExternalFileLevelStorageSource::getLevelList(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  _DWORD *v6; // r0@1
  __int64 v7; // r1@1
  void *v8; // r0@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  _DWORD *v11; // [sp+4h] [bp-44h]@1
  __int64 v12; // [sp+Ch] [bp-3Ch]@1
  int v13; // [sp+14h] [bp-34h]@1
  int v14; // [sp+18h] [bp-30h]@1
  char v15; // [sp+1Ch] [bp-2Ch]@1
  void (*v16)(void); // [sp+24h] [bp-24h]@1
  int v17; // [sp+30h] [bp-18h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  j_FilePathManager::getWorldsPath((FilePathManager *)&v17, *(_DWORD *)(a1 + 4));
  v13 = v17;
  v14 = *(_DWORD *)(v17 - 12);
  v6 = j_operator new(0xCu);
  LODWORD(v7) = sub_196DA08;
  *v6 = v4;
  v6[1] = v5;
  HIDWORD(v7) = sub_196D688;
  v6[2] = v3;
  v11 = v6;
  v12 = v7;
  j_Core::FileSystem::iterateOverDirectory((int)&v15, (__int64 *)&v13, 258LL, (int)&v11);
  if ( v16 )
    v16();
  if ( (_DWORD)v12 )
    ((void (*)(void))v12)();
  v8 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
}


void __fastcall ExternalFileLevelStorageSource::setLevelData(int a1, const void **a2, LevelData *a3)
{
  LevelData *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v3 = a3;
  ExternalFileLevelStorageSource::_getFullPath(&v7, a1, a2);
  j_ExternalFileLevelStorage::saveLevelData(&v7, v3);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
}


void __fastcall ExternalFileLevelStorageSource::getBasePath(ExternalFileLevelStorageSource *this, int a2)
{
  j_FilePathManager::getWorldsPath(this, *(_DWORD *)(a2 + 4));
}


char *__fastcall ExternalFileLevelStorageSource::addObserver(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r8@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11
  char *v11; // r5@13
  int v12; // r5@15

  v2 = a2;
  v3 = a1;
  *(_DWORD *)(a2 + 4) = a1 + 8;
  v4 = *(_QWORD *)(a1 + 16);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = *(void **)(v3 + 12);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)j_operator new(4 * v9);
      LODWORD(v4) = *(_QWORD *)(v3 + 12) >> 32;
      v6 = (void *)*(_QWORD *)(v3 + 12);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v2;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      j___aeabi_memmove4((int)v10, (int)v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      j_operator delete(v6);
    result = &v10[4 * v9];
    *(_DWORD *)(v3 + 12) = v10;
    *(_DWORD *)(v3 + 16) = v12;
    *(_DWORD *)(v3 + 20) = result;
  }
  else
    *(_DWORD *)v4 = v2;
    result = (char *)(*(_DWORD *)(v3 + 16) + 4);
    *(_DWORD *)(v3 + 16) = result;
  return result;
}


void __fastcall ExternalFileLevelStorageSource::getLevelData(double a1, const void **a2)
{
  const void **v2; // r5@1
  int v3; // r6@1
  LevelData *v4; // r4@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = HIDWORD(a1);
  v4 = (LevelData *)LODWORD(a1);
  j_LevelData::LevelData(a1);
  ExternalFileLevelStorageSource::_getFullPath(&v8, v3, v2);
  j_ExternalFileLevelStorage::readLevelDataFromFile(&v8, v4);
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
}


void __fastcall ExternalFileLevelStorageSource::setLevelData(int a1, const void **a2, LevelData *a3)
{
  ExternalFileLevelStorageSource::setLevelData(a1, a2, a3);
}


void __fastcall ExternalFileLevelStorageSource::deleteLevel(int a1, const void **a2)
{
  int *v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@3
  int *v5; // r5@4
  void (*v6)(void); // r3@4
  _DWORD *v7; // r5@4 OVERLAPPED
  _DWORD *v8; // r6@4 OVERLAPPED
  void *v9; // r0@12
  unsigned int *v10; // r2@14
  signed int v11; // r1@16
  unsigned int *v12; // r2@18
  signed int v13; // r1@20
  int v14; // [sp+0h] [bp-48h]@4
  int *v15; // [sp+4h] [bp-44h]@4
  int (__fastcall *v16)(void **, int **, int); // [sp+Ch] [bp-3Ch]@4
  void (__fastcall *v17)(int **, _DWORD); // [sp+10h] [bp-38h]@4
  int v18; // [sp+14h] [bp-34h]@1
  int v19; // [sp+18h] [bp-30h]@1
  int v20; // [sp+1Ch] [bp-2Ch]@1
  char v21; // [sp+20h] [bp-28h]@1
  void (*v22)(void); // [sp+28h] [bp-20h]@1

  v2 = (int *)a2;
  v3 = a1;
  ExternalFileLevelStorageSource::_getFullPath(&v18, a1, a2);
  v19 = v18;
  v20 = *(_DWORD *)(v18 - 12);
  j_Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v21, (__int64 *)&v19);
  if ( v22 )
    v22();
  v4 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v18 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E8AF4(&v14, v2);
  v16 = 0;
  v5 = (int *)j_operator new(4u);
  sub_21E8AF4(v5, &v14);
  v15 = v5;
  v6 = (void (*)(void))sub_196DB64;
  v16 = sub_196DB64;
  v17 = (void (__fastcall *)(int **, _DWORD))&loc_196DB56;
  *(_QWORD *)&v7 = *(_QWORD *)(v3 + 12);
  if ( v7 == v8 )
    goto LABEL_32;
  do
    if ( !v6 )
      sub_21E5F48();
    v17(&v15, *v7);
    v6 = (void (*)(void))v16;
    ++v7;
  while ( v8 != v7 );
  if ( v16 )
LABEL_32:
    v6();
  v9 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


void __fastcall ExternalFileLevelStorageSource::getLevelData(double a1, const void **a2)
{
  ExternalFileLevelStorageSource::getLevelData(a1, a2);
}


void __fastcall ExternalFileLevelStorageSource::_getFullPath(int *a1, int a2, const void **a3)
{
  ExternalFileLevelStorageSource::_getFullPath(a1, a2, a3);
}


int __fastcall ExternalFileLevelStorageSource::ExternalFileLevelStorageSource(__int64 a1)
{
  int v1; // r4@1
  void *v2; // r0@3
  unsigned int *v4; // r2@5
  signed int v5; // r1@7
  int v6; // [sp+4h] [bp-3Ch]@1
  int v7; // [sp+8h] [bp-38h]@1
  int v8; // [sp+Ch] [bp-34h]@1
  char v9; // [sp+10h] [bp-30h]@1
  void (*v10)(void); // [sp+18h] [bp-28h]@1

  v1 = a1;
  LODWORD(a1) = &off_2719774;
  *(_QWORD *)v1 = a1;
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)(v1 + 16) = 0;
  *(_DWORD *)(v1 + 20) = 0;
  j_FilePathManager::getWorldsPath((FilePathManager *)&v6, SHIDWORD(a1));
  v7 = v6;
  v8 = *(_DWORD *)(v6 - 12);
  j_Core::FileSystem::createDirectoryRecursively((int)&v9, (__int64 *)&v7);
  if ( v10 )
    v10();
  v2 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
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
      j_j_j_j__ZdlPv_9(v2);
  }
  return v1;
}


void __fastcall ExternalFileLevelStorageSource::deleteLevel(int a1, const void **a2)
{
  ExternalFileLevelStorageSource::deleteLevel(a1, a2);
}


void __fastcall ExternalFileLevelStorageSource::copyLevelFromFilePath(int a1, int *a2)
{
  int *v2; // r4@1
  void *v3; // r0@7
  unsigned int *v4; // r2@9
  signed int v5; // r1@11
  int v6; // [sp+4h] [bp-74h]@5
  int v7; // [sp+8h] [bp-70h]@5
  int v8; // [sp+Ch] [bp-6Ch]@5
  int v9; // [sp+10h] [bp-68h]@5
  char v10; // [sp+14h] [bp-64h]@5
  void (*v11)(void); // [sp+1Ch] [bp-5Ch]@5
  int v12; // [sp+28h] [bp-50h]@3
  int v13; // [sp+2Ch] [bp-4Ch]@3
  char v14; // [sp+30h] [bp-48h]@3
  void (*v15)(void); // [sp+38h] [bp-40h]@3
  int v16; // [sp+44h] [bp-34h]@1
  int v17; // [sp+48h] [bp-30h]@1
  char v18; // [sp+4Ch] [bp-2Ch]@1
  void (*v19)(void); // [sp+54h] [bp-24h]@1
  int v20; // [sp+60h] [bp-18h]@1

  v2 = a2;
  j_FilePathManager::getWorldsPath((FilePathManager *)&v20, *(_DWORD *)(a1 + 4));
  v16 = v20;
  v17 = *(_DWORD *)(v20 - 12);
  j_Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v18, (__int64 *)&v16);
  if ( v19 )
    v19();
  v12 = v20;
  v13 = *(_DWORD *)(v20 - 12);
  j_Core::FileSystem::createDirectoryRecursively((int)&v14, (__int64 *)&v12);
  if ( v15 )
    v15();
  v8 = *v2;
  v9 = *(_DWORD *)(v8 - 12);
  v6 = v20;
  v7 = *(_DWORD *)(v20 - 12);
  j_Core::FileSystem::copyDirectoryAndContentsRecursively((int)&v10, (__int64 *)&v8, (__int64 *)&v6);
  if ( v11 )
    v11();
  v3 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v20 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
}


void __fastcall ExternalFileLevelStorageSource::getLevelList(int a1, int a2, int a3)
{
  ExternalFileLevelStorageSource::getLevelList(a1, a2, a3);
}


void __fastcall ExternalFileLevelStorageSource::notifyNewLevelFound(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  void (*v4)(void); // r3@1
  _DWORD *v5; // r5@1 OVERLAPPED
  _DWORD *v6; // r6@1 OVERLAPPED
  void *v7; // r0@9
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  int v10; // [sp+0h] [bp-28h]@1
  int *v11; // [sp+4h] [bp-24h]@1
  int (__fastcall *v12)(void **, int **, int); // [sp+Ch] [bp-1Ch]@1
  void (__fastcall *v13)(int **, _DWORD); // [sp+10h] [bp-18h]@1

  v2 = a1;
  sub_21E8AF4(&v10, a2);
  v12 = 0;
  v3 = (int *)j_operator new(4u);
  sub_21E8AF4(v3, &v10);
  v11 = v3;
  v4 = (void (*)(void))sub_196D5F0;
  v12 = sub_196D5F0;
  v13 = (void (__fastcall *)(int **, _DWORD))&loc_196D5E4;
  *(_QWORD *)&v5 = *(_QWORD *)(v2 + 12);
  if ( v5 == v6 )
    goto LABEL_21;
  do
  {
    if ( !v4 )
      sub_21E5F48();
    v13(&v11, *v5);
    v4 = (void (*)(void))v12;
    ++v5;
  }
  while ( v6 != v5 );
  if ( v12 )
LABEL_21:
    v4();
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall ExternalFileLevelStorageSource::getLevelList(int a1)
{
  int v1; // [sp+0h] [bp-20h]@1
  int v2; // [sp+4h] [bp-1Ch]@1
  int v3; // [sp+8h] [bp-18h]@1
  int *v4; // [sp+Ch] [bp-14h]@1
  int *v5; // [sp+10h] [bp-10h]@1
  int v6; // [sp+14h] [bp-Ch]@1

  v6 = 0;
  v2 = 0;
  v3 = 0;
  v4 = &v2;
  v5 = &v2;
  (*(void (**)(void))(*(_DWORD *)a1 + 16))();
  j_std::_Rb_tree<std::string,std::pair<std::string const,LevelSummary>,std::_Select1st<std::pair<std::string const,LevelSummary>>,std::less<std::string>,std::allocator<std::pair<std::string const,LevelSummary>>>::_M_erase(
    (int)&v1,
    v3);
}


void __fastcall ExternalFileLevelStorageSource::~ExternalFileLevelStorageSource(ExternalFileLevelStorageSource *this)
{
  ExternalFileLevelStorageSource *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_2719774;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 12);
  if ( v2 != v3 )
  {
    do
    {
      *(_DWORD *)(*(_DWORD *)v2 + 4) = 0;
      (*(void (**)(void))(**(_DWORD **)v2 + 8))();
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 3);
  }
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ExternalFileLevelStorageSource::createLevelStorage(_DWORD *a1, int a2, const void **a3, int *a4, int a5)
{
  ExternalFileLevelStorageSource::createLevelStorage(a1, a2, a3, a4, a5);
}


void __fastcall ExternalFileLevelStorageSource::notifyNewLevelFound(int a1, int *a2)
{
  ExternalFileLevelStorageSource::notifyNewLevelFound(a1, a2);
}


void __fastcall ExternalFileLevelStorageSource::_getFullPath(int *a1, int a2, const void **a3)
{
  int *v3; // r5@1
  const void **v4; // r4@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+0h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  j_FilePathManager::getWorldsPath((FilePathManager *)&v8, *(_DWORD *)(a2 + 4));
  sub_21E8AF4(v3, &v8);
  sub_21E72F0((const void **)v3, v4);
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
}


void __fastcall ExternalFileLevelStorageSource::getBasePath(ExternalFileLevelStorageSource *this, int a2)
{
  ExternalFileLevelStorageSource::getBasePath(this, a2);
}


void __fastcall ExternalFileLevelStorageSource::copyLevelFromFilePath(int a1, int *a2)
{
  ExternalFileLevelStorageSource::copyLevelFromFilePath(a1, a2);
}


void __fastcall ExternalFileLevelStorageSource::getLevelList(int a1)
{
  ExternalFileLevelStorageSource::getLevelList(a1);
}


ExternalFileLevelStorageSource *__fastcall ExternalFileLevelStorageSource::~ExternalFileLevelStorageSource(ExternalFileLevelStorageSource *this)
{
  ExternalFileLevelStorageSource *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_2719774;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 12);
  if ( v2 != v3 )
  {
    do
    {
      *(_DWORD *)(*(_DWORD *)v2 + 4) = 0;
      (*(void (**)(void))(**(_DWORD **)v2 + 8))();
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 3);
  }
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


void __fastcall ExternalFileLevelStorageSource::~ExternalFileLevelStorageSource(ExternalFileLevelStorageSource *this)
{
  ExternalFileLevelStorageSource::~ExternalFileLevelStorageSource(this);
}


void *__fastcall ExternalFileLevelStorageSource::getName(ExternalFileLevelStorageSource *this)
{
  return &unk_2820D14;
}


void __fastcall ExternalFileLevelStorageSource::createLevelStorage(_DWORD *a1, int a2, const void **a3, int *a4, int a5)
{
  _DWORD *v5; // r4@1
  int *v6; // r5@1
  int *v7; // r6@1
  void *v8; // r7@1
  int v9; // r1@1
  void *v10; // r0@1
  unsigned int *v11; // r2@3
  signed int v12; // r1@5
  int v13; // [sp+8h] [bp-20h]@1

  v5 = a1;
  v6 = a4;
  v7 = (int *)a3;
  ExternalFileLevelStorageSource::_getFullPath(&v13, a2, a3);
  v8 = j_operator new(0x88u);
  DBStorage::DBStorage((int)v8, v7, &v13, v6, a5);
  v9 = v13;
  *v5 = v8;
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v9 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  }
}


void __fastcall ExternalFileLevelStorageSource::_getFullPath(int *a1, int a2, const void **a3)
{
  int *v3; // r5@1
  const void **v4; // r4@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+0h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  j_FilePathManager::getWorldsPath((FilePathManager *)&v8, *(_DWORD *)(a2 + 4));
  sub_21E8AF4(v3, &v8);
  sub_21E72F0((const void **)v3, v4);
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
}


signed int __fastcall ExternalFileLevelStorageSource::addLevelSummaryIfExists(double a1)
{
  double v1; // r4@1
  __int64 v2; // r0@2
  __int64 v3; // r0@5
  signed int v4; // r4@7
  int v6; // [sp+0h] [bp-200h]@4
  int v7[16]; // [sp+40h] [bp-1C0h]@2
  char v8; // [sp+80h] [bp-180h]@1

  v1 = a1;
  LODWORD(a1) = &v8;
  j_LevelData::LevelData(a1);
  if ( j_ExternalFileLevelStorage::readLevelDataFromFile((int *)HIDWORD(v1), (LevelData *)&v8) == 1 )
  {
    LevelSummary::LevelSummary((int)v7, (LevelData *)&v8, (int *)HIDWORD(v1));
    v2 = *(_QWORD *)(LODWORD(v1) + 4);
    if ( (_DWORD)v2 == HIDWORD(v2) )
    {
      std::vector<LevelSummary,std::allocator<LevelSummary>>::_M_emplace_back_aux<LevelSummary&>(
        (unsigned __int64 *)LODWORD(v1),
        v7);
    }
    else
      j_LevelSummary::LevelSummary((int *)v2, v7);
      *(_DWORD *)(LODWORD(v1) + 4) += 64;
    j_LevelSummary::~LevelSummary((LevelSummary *)v7);
    v4 = 1;
  }
  else
    j_LevelSummary::LevelSummary(&v6);
    if ( ExternalFileLevelStorage::readShallowLevelSummaryFromSyncFile((int *)HIDWORD(v1), (int)&v6) == 1 )
      v3 = *(_QWORD *)(LODWORD(v1) + 4);
      if ( (_DWORD)v3 == HIDWORD(v3) )
      {
        std::vector<LevelSummary,std::allocator<LevelSummary>>::_M_emplace_back_aux<LevelSummary&>(
          (unsigned __int64 *)LODWORD(v1),
          &v6);
      }
      else
        j_LevelSummary::LevelSummary((int *)v3, &v6);
        *(_DWORD *)(LODWORD(v1) + 4) += 64;
      v4 = 1;
      v4 = 0;
    j_LevelSummary::~LevelSummary((LevelSummary *)&v6);
  j_LevelData::~LevelData((LevelData *)&v8);
  return v4;
}


signed int __fastcall ExternalFileLevelStorageSource::renameLevel(double a1, int *a2)
{
  int v2; // r6@1
  int *v3; // r8@1
  const void **v4; // r5@1
  signed int v5; // r7@1
  void *v6; // r0@1
  void *v7; // r0@3
  const void **v8; // r0@4
  char *v9; // r0@4
  void *v10; // r0@5
  signed int v11; // r4@6
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  unsigned int *v19; // r2@25
  signed int v20; // r1@27
  int v21; // [sp+0h] [bp-1A0h]@4
  char *v22; // [sp+4h] [bp-19Ch]@4
  int v23; // [sp+8h] [bp-198h]@3
  int v24; // [sp+Ch] [bp-194h]@1
  char v25; // [sp+10h] [bp-190h]@1

  v2 = LODWORD(a1);
  LODWORD(a1) = &v25;
  v3 = a2;
  v4 = (const void **)HIDWORD(a1);
  j_LevelData::LevelData(a1);
  ExternalFileLevelStorageSource::_getFullPath(&v24, v2, v4);
  v5 = j_ExternalFileLevelStorage::readLevelDataFromFile(&v24, (LevelData *)&v25);
  v6 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v24 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 == 1 )
    j_LevelData::setLevelName((int)&v25, v3);
    ExternalFileLevelStorageSource::_getFullPath(&v23, v2, v4);
    j_ExternalFileLevelStorage::saveLevelData(&v23, (LevelData *)&v25);
    v7 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v23 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    ExternalFileLevelStorageSource::_getFullPath(&v21, v2, v4);
    v8 = sub_21E7408((const void **)&v21, "/levelname.txt", 0xEu);
    v22 = (char *)*v8;
    *v8 = &unk_28898CC;
    j_ExternalFileLevelStorage::makeReadableLevelnameFile((int *)&v22, v3);
    v9 = v22 - 12;
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v22 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    v10 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v21 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v11 = 1;
  else
    v11 = 0;
  j_LevelData::~LevelData((LevelData *)&v25);
  return v11;
}
