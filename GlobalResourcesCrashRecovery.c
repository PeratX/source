

int __fastcall GlobalResourcesCrashRecovery::_getResourceInitLockPath(GlobalResourcesCrashRecovery *this)
{
  GlobalResourcesCrashRecovery *v1; // r5@1
  __int64 v2; // r0@1
  void *v3; // r0@3
  int v4; // r1@5
  void *v5; // r0@5
  void *v6; // r0@6
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  unsigned int *v9; // r2@13
  signed int v10; // r1@15
  int v12; // [sp+4h] [bp-2Ch]@5
  int v13; // [sp+8h] [bp-28h]@5
  int v14; // [sp+10h] [bp-20h]@5
  int v15; // [sp+14h] [bp-1Ch]@5
  const char *v16; // [sp+18h] [bp-18h]@5
  int v17; // [sp+1Ch] [bp-14h]@5

  v1 = this;
  LODWORD(v2) = GlobalResourcesCrashRecovery::mResourceInitLockPath;
  HIDWORD(v2) = *(_DWORD *)(GlobalResourcesCrashRecovery::mResourceInitLockPath - 12);
  if ( !HIDWORD(v2) )
  {
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v3 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v3 = &ServiceLocator<AppPlatform>::mDefaultService;
    (*(void (__fastcall **)(int *))(**(_DWORD **)v3 + 280))(&v12);
    v4 = *(_DWORD *)(v12 - 12);
    v14 = v12;
    v15 = v4;
    v16 = "resource_init_lock";
    v17 = -1;
    Core::PathBuffer<std::string>::_join<Core::PathPart>((const void **)&v13, (unsigned int)&v14, 2u);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      &GlobalResourcesCrashRecovery::mResourceInitLockPath,
      &v13);
    v5 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    v6 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v12 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
    LODWORD(v2) = GlobalResourcesCrashRecovery::mResourceInitLockPath;
    HIDWORD(v2) = *(_DWORD *)(GlobalResourcesCrashRecovery::mResourceInitLockPath - 12);
  }
  *(_QWORD *)v1 = v2;
  return v2;
}


int __fastcall GlobalResourcesCrashRecovery::_getGlobalResourcesFilePath(GlobalResourcesCrashRecovery *this)
{
  GlobalResourcesCrashRecovery *v1; // r5@1
  __int64 v2; // r0@1
  void *v3; // r0@3
  int v4; // r3@5
  int v5; // r2@5
  void *v6; // r0@5
  void *v7; // r0@6
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v13; // [sp+4h] [bp-2Ch]@5
  int v14; // [sp+8h] [bp-28h]@5
  int v15; // [sp+10h] [bp-20h]@5
  int v16; // [sp+14h] [bp-1Ch]@5
  int v17; // [sp+18h] [bp-18h]@5
  int v18; // [sp+1Ch] [bp-14h]@5

  v1 = this;
  LODWORD(v2) = GlobalResourcesCrashRecovery::mGlobalResourcesFilePath;
  HIDWORD(v2) = *(_DWORD *)(GlobalResourcesCrashRecovery::mGlobalResourcesFilePath - 12);
  if ( !HIDWORD(v2) )
  {
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v3 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v3 = &ServiceLocator<AppPlatform>::mDefaultService;
    (*(void (__fastcall **)(int *))(**(_DWORD **)v3 + 280))(&v13);
    v4 = *(_DWORD *)(v13 - 12);
    v5 = *(_DWORD *)(MinecraftGame::RESOURCE_PACKS_SAVE_FILENAME - 12);
    v15 = v13;
    v16 = v4;
    v17 = MinecraftGame::RESOURCE_PACKS_SAVE_FILENAME;
    v18 = v5;
    Core::PathBuffer<std::string>::_join<Core::PathPart>((const void **)&v14, (unsigned int)&v15, 2u);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      &GlobalResourcesCrashRecovery::mGlobalResourcesFilePath,
      &v14);
    v6 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
    v7 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v13 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    LODWORD(v2) = GlobalResourcesCrashRecovery::mGlobalResourcesFilePath;
    HIDWORD(v2) = *(_DWORD *)(GlobalResourcesCrashRecovery::mGlobalResourcesFilePath - 12);
  }
  *(_QWORD *)v1 = v2;
  return v2;
}


RakNet *__fastcall GlobalResourcesCrashRecovery::createResourceLockOrResetGlobalResources(int a1)
{
  int v1; // r4@1
  RakNet *result; // r0@4
  __int64 v3; // [sp+4h] [bp-3Ch]@2
  __int64 v4; // [sp+Ch] [bp-34h]@1
  __int64 v5; // [sp+14h] [bp-2Ch]@4
  char v6; // [sp+1Ch] [bp-24h]@4
  int (*v7)(void); // [sp+24h] [bp-1Ch]@4

  v1 = a1;
  GlobalResourcesCrashRecovery::_getResourceInitLockPath((GlobalResourcesCrashRecovery *)&v4);
  if ( Core::FileSystem::fileExists(&v4)
    || (GlobalResourcesCrashRecovery::_getMenuLoadLockPath((GlobalResourcesCrashRecovery *)&v3),
        Core::FileSystem::fileExists(&v3) == 1) )
  {
    if ( !*(_DWORD *)(v1 + 8) )
      sub_119C8E4();
    (*(void (__fastcall **)(int))(v1 + 12))(v1);
    GlobalResourcesCrashRecovery::_getGlobalResourcesFilePath((GlobalResourcesCrashRecovery *)&v5);
    result = Core::FileSystem::deleteFile((int)&v6, &v5);
    if ( v7 )
      result = (RakNet *)v7();
  }
  else
    GlobalResourcesCrashRecovery::_getResourceInitLockPath((GlobalResourcesCrashRecovery *)&v5);
    result = Core::FileSystem::createEmptyFile((int)&v6, &v5);
  return result;
}


RakNet *__fastcall GlobalResourcesCrashRecovery::createMenuLoadLock(GlobalResourcesCrashRecovery *this)
{
  RakNet *result; // r0@1
  __int64 v2; // [sp+4h] [bp-24h]@1
  char v3; // [sp+Ch] [bp-1Ch]@1
  int (*v4)(void); // [sp+14h] [bp-14h]@1

  GlobalResourcesCrashRecovery::_getMenuLoadLockPath((GlobalResourcesCrashRecovery *)&v2);
  result = Core::FileSystem::createEmptyFile((int)&v3, &v2);
  if ( v4 )
    result = (RakNet *)v4();
  return result;
}


RakNet *__fastcall GlobalResourcesCrashRecovery::deleteResourceLoadLock(GlobalResourcesCrashRecovery *this)
{
  RakNet *result; // r0@1
  __int64 v2; // [sp+4h] [bp-24h]@1
  char v3; // [sp+Ch] [bp-1Ch]@1
  int (*v4)(void); // [sp+14h] [bp-14h]@1

  GlobalResourcesCrashRecovery::_getResourceInitLockPath((GlobalResourcesCrashRecovery *)&v2);
  result = Core::FileSystem::deleteFile((int)&v3, &v2);
  if ( v4 )
    result = (RakNet *)v4();
  return result;
}


RakNet *__fastcall GlobalResourcesCrashRecovery::_resetGlobalResources(GlobalResourcesCrashRecovery *this)
{
  RakNet *result; // r0@1
  __int64 v2; // [sp+4h] [bp-24h]@1
  char v3; // [sp+Ch] [bp-1Ch]@1
  int (*v4)(void); // [sp+14h] [bp-14h]@1

  GlobalResourcesCrashRecovery::_getGlobalResourcesFilePath((GlobalResourcesCrashRecovery *)&v2);
  result = Core::FileSystem::deleteFile((int)&v3, &v2);
  if ( v4 )
    result = (RakNet *)v4();
  return result;
}


RakNet *__fastcall GlobalResourcesCrashRecovery::deleteMenuLoadLock(GlobalResourcesCrashRecovery *this)
{
  RakNet *result; // r0@1
  __int64 v2; // [sp+4h] [bp-24h]@1
  char v3; // [sp+Ch] [bp-1Ch]@1
  int (*v4)(void); // [sp+14h] [bp-14h]@1

  GlobalResourcesCrashRecovery::_getMenuLoadLockPath((GlobalResourcesCrashRecovery *)&v2);
  result = Core::FileSystem::deleteFile((int)&v3, &v2);
  if ( v4 )
    result = (RakNet *)v4();
  return result;
}


RakNet *__fastcall GlobalResourcesCrashRecovery::_createResourceLoadLock(GlobalResourcesCrashRecovery *this)
{
  RakNet *result; // r0@1
  __int64 v2; // [sp+4h] [bp-24h]@1
  char v3; // [sp+Ch] [bp-1Ch]@1
  int (*v4)(void); // [sp+14h] [bp-14h]@1

  GlobalResourcesCrashRecovery::_getResourceInitLockPath((GlobalResourcesCrashRecovery *)&v2);
  result = Core::FileSystem::createEmptyFile((int)&v3, &v2);
  if ( v4 )
    result = (RakNet *)v4();
  return result;
}


int __fastcall GlobalResourcesCrashRecovery::_getMenuLoadLockPath(GlobalResourcesCrashRecovery *this)
{
  GlobalResourcesCrashRecovery *v1; // r5@1
  __int64 v2; // r0@1
  void *v3; // r0@3
  int v4; // r1@5
  void *v5; // r0@5
  void *v6; // r0@6
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  unsigned int *v9; // r2@13
  signed int v10; // r1@15
  int v12; // [sp+4h] [bp-2Ch]@5
  int v13; // [sp+8h] [bp-28h]@5
  int v14; // [sp+10h] [bp-20h]@5
  int v15; // [sp+14h] [bp-1Ch]@5
  const char *v16; // [sp+18h] [bp-18h]@5
  int v17; // [sp+1Ch] [bp-14h]@5

  v1 = this;
  LODWORD(v2) = GlobalResourcesCrashRecovery::mMenuLoadLockPath;
  HIDWORD(v2) = *(_DWORD *)(GlobalResourcesCrashRecovery::mMenuLoadLockPath - 12);
  if ( !HIDWORD(v2) )
  {
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v3 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v3 = &ServiceLocator<AppPlatform>::mDefaultService;
    (*(void (__fastcall **)(int *))(**(_DWORD **)v3 + 280))(&v12);
    v4 = *(_DWORD *)(v12 - 12);
    v14 = v12;
    v15 = v4;
    v16 = "menu_load_lock";
    v17 = -1;
    Core::PathBuffer<std::string>::_join<Core::PathPart>((const void **)&v13, (unsigned int)&v14, 2u);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      &GlobalResourcesCrashRecovery::mMenuLoadLockPath,
      &v13);
    v5 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    v6 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v12 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
    LODWORD(v2) = GlobalResourcesCrashRecovery::mMenuLoadLockPath;
    HIDWORD(v2) = *(_DWORD *)(GlobalResourcesCrashRecovery::mMenuLoadLockPath - 12);
  }
  *(_QWORD *)v1 = v2;
  return v2;
}
