

char *__fastcall LocalWorldInfo::getLevelSummary(LocalWorldInfo *this)
{
  return (char *)this + 32;
}


char *__fastcall LocalWorldInfo::getDate(LocalWorldInfo *this)
{
  return (char *)this + 20;
}


char *__fastcall LocalWorldInfo::getWorldIconPath(LocalWorldInfo *this)
{
  return (char *)this + 84;
}


char *__fastcall LocalWorldInfo::getLevelSummary(LocalWorldInfo *this)
{
  return (char *)this + 32;
}


LocalWorldInfo *__fastcall LocalWorldInfo::~LocalWorldInfo(LocalWorldInfo *this)
{
  LocalWorldInfo *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r1@5
  void *v11; // r0@5
  unsigned int *v13; // r2@7
  signed int v14; // r1@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r2@23
  signed int v22; // r1@25

  v1 = this;
  LevelSummary::~LevelSummary((LocalWorldInfo *)((char *)this + 32));
  v2 = *((_DWORD *)v1 + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 5);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v4 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 4);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v6 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = *((_DWORD *)v1 + 3);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v8 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = *((_DWORD *)v1 + 2);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v10 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  return v1;
}


char *__fastcall LocalWorldInfo::getGameType(LocalWorldInfo *this)
{
  return (char *)this + 24;
}


  if ( LocalWorldInfo::hasLocalStorage(v4) )
{
    result = 0;
  }
  else
  {
    v6 = (LocalWorldInfo *)PlayScreenModel::getLocalWorldAtIndex(*(PlayScreenModel **)(v3 + 432), v2);
    result = LocalWorldInfo::hasCloudStorage(v6);
  return result;
}


int __fastcall LocalWorldInfo::LocalWorldInfo(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  int *v4; // r7@1
  struct tm *v5; // r0@1
  void *v6; // r0@2
  void *v7; // r0@4
  void *v8; // r0@5
  unsigned __int64 v9; // r2@6
  int v10; // r1@6
  void *v11; // r0@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  unsigned int *v17; // r2@22
  signed int v18; // r1@24
  int v19; // [sp+0h] [bp-50h]@12
  int v20; // [sp+4h] [bp-4Ch]@5
  int v21; // [sp+8h] [bp-48h]@4
  time_t v22; // [sp+Ch] [bp-44h]@1
  time_t timer; // [sp+10h] [bp-40h]@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = 1;
  sub_119C884((void **)(a1 + 8), (const char *)&unk_257BC67);
  v4 = (int *)(v2 + 12);
  sub_119C884((void **)(v2 + 12), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 16), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 20), (const char *)&unk_257BC67);
  sub_119C884((void **)(v2 + 24), (const char *)&unk_257BC67);
  *(_WORD *)(v2 + 28) = 0;
  *(_BYTE *)(v2 + 31) = 0;
  LevelSummary::LevelSummary((int *)(v2 + 32), (int *)v3);
  EntityInteraction::setInteractText((int *)(v2 + 16), (int *)(v3 + 4));
  timer = *(_DWORD *)(v3 + 8);
  v5 = localtime(&timer);
  v22 = mktime(v5);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v6 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v6 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v6 + 388))(&v21);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v2 + 20),
    &v21);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v4 = (int *)(v2 + 12);
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  GameTypeConv::gameTypeToString((void **)&v20, *(_DWORD *)(v3 + 12));
    (int *)(v2 + 24),
    &v20);
  v8 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v20 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = *(_QWORD *)(v3 + 32);
  v10 = 0;
  if ( (unsigned int)v9 < 0x2710 )
    v10 = 1;
  if ( HIDWORD(v9) )
    v10 = 0;
  if ( v10 )
    v9 = 10000LL;
  Util::getFilesizeString((Util *)&v19, v10, v9);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v4, &v19);
  v11 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v19 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  *(_BYTE *)(v2 + 28) = 1;
  return v2;
}


char *__fastcall LocalWorldInfo::getScreenshotTexture(LocalWorldInfo *this)
{
  return (char *)this + 8;
}


  if ( LocalWorldInfo::hasLocalStorage(v4) == 1 )
{
    v6 = (LocalWorldInfo *)PlayScreenModel::getLocalWorldAtIndex(*(PlayScreenModel **)(v3 + 432), v2);
    result = LocalWorldInfo::hasCloudStorage(v6) ^ 1;
  }
  else
  {
    result = 0;
  return result;
}


int __fastcall LocalWorldInfo::LocalWorldInfo(int a1)
{
  int v1; // r6@1

  v1 = a1;
  *(_DWORD *)a1 = 0;
  sub_119C884((void **)(a1 + 8), (const char *)&unk_257BC67);
  sub_119C884((void **)(v1 + 12), (const char *)&unk_257BC67);
  sub_119C884((void **)(v1 + 16), (const char *)&unk_257BC67);
  sub_119C884((void **)(v1 + 20), (const char *)&unk_257BC67);
  sub_119C884((void **)(v1 + 24), (const char *)&unk_257BC67);
  *(_WORD *)(v1 + 28) = 0;
  *(_BYTE *)(v1 + 31) = 0;
  LevelSummary::LevelSummary((int *)(v1 + 32));
  return v1;
}


  if ( LocalWorldInfo::hasLocalStorage(v4) == 1 )
{
    v6 = (LocalWorldInfo *)PlayScreenModel::getLocalWorldAtIndex(*(PlayScreenModel **)(v3 + 432), v2);
    result = LocalWorldInfo::hasCloudStorage(v6);
  }
  else
  {
    result = 0;
  return result;
}


int __fastcall LocalWorldInfo::setCloudStorage(int result, bool a2)
{
  *(_BYTE *)(result + 29) = a2;
  return result;
}


signed int __fastcall LocalWorldInfo::hasDate(LocalWorldInfo *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 10);
  result = 0;
  if ( v1 != -1 )
    result = 1;
  return result;
}


char *__fastcall LocalWorldInfo::getFilesize(LocalWorldInfo *this)
{
  return (char *)this + 12;
}


int __fastcall LocalWorldInfo::LocalWorldInfo(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1

  v2 = a2;
  v3 = a1;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  sub_15901A4((int *)(a1 + 8), (int *)(a2 + 8));
  sub_15901A4((int *)(v3 + 12), (int *)(v2 + 12));
  sub_15901A4((int *)(v3 + 16), (int *)(v2 + 16));
  sub_15901A4((int *)(v3 + 20), (int *)(v2 + 20));
  sub_15901A4((int *)(v3 + 24), (int *)(v2 + 24));
  *(_DWORD *)(v3 + 28) = *(_DWORD *)(v2 + 28);
  LevelSummary::LevelSummary((int *)(v3 + 32), (int *)(v2 + 32));
  return v3;
}


int __fastcall LocalWorldInfo::LocalWorldInfo(int a1, int a2)
{
  int v2; // r5@1

  v2 = a1;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = &unk_28898CC;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = &unk_28898CC;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = &unk_28898CC;
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a2 + 20) = &unk_28898CC;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = &unk_28898CC;
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  LevelSummary::LevelSummary((int *)(a1 + 32), (int *)(a2 + 32));
  return v2;
}


int __fastcall LocalWorldInfo::markAsDirty(int result)
{
  *(_BYTE *)(result + 31) = 1;
  return result;
}


char *__fastcall LocalWorldInfo::getWorldName(LocalWorldInfo *this)
{
  return (char *)this + 16;
}
