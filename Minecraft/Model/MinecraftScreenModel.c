

int __fastcall MinecraftScreenModel::getButtonTexture(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  void *v4; // r0@2
  int v5; // r0@4
  int v6; // r0@4

  v2 = a1;
  v3 = ClientInstance::getOptions(*(ClientInstance **)(a2 + 16));
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = &ServiceLocator<AppPlatform>::mDefaultService;
  v5 = (*(int (**)(void))(**(_DWORD **)v4 + 460))();
  v6 = Options::getGamePadRemappingByType(v3, v5);
  return GamePadRemappingLayout::getKeySpriteLocation(v2, v6);
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  return result;
}


int __fastcall MinecraftScreenModel::fireEventDevConsoleOpen(MinecraftScreenModel *this)
{
  MinecraftEventing *v1; // r0@1

  v1 = (MinecraftEventing *)MinecraftGame::getEventing(*((MinecraftGame **)this + 3));
  return j_j_j__ZN17MinecraftEventing23fireEventDevConsoleOpenEv(v1);
}


  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(_R4 + 380), 1) )
{
  v2 = MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(_R4 + 380), 0);
  _ZF = v2 == 1;
  if ( v2 == 1 )
    _ZF = *(_BYTE *)(_R4 + 440) == 0;
  if ( !_ZF || RemixProgressTracker::getState(*(RemixProgressTracker **)(_R4 + 424)) == 10 )
  {
LABEL_12:
    __asm
    {
      VMOV.F32        S0, #1.0
      VLDR            S2, [R4,#0x1B4]
    }
    result = 0;
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      result = 1;
  }
  else
  return result;
}


  if ( MinecraftScreenModel::isEduMode(*(MinecraftScreenModel **)(v1 + 380)) )
{
    result = 0;
  }
  else
  {
    result = *(_BYTE *)(v1 + 436);
    if ( *(_BYTE *)(v1 + 436) )
      result = 1;
  return result;
}


void __fastcall MinecraftScreenModel::navigateToStartScreen(MinecraftScreenModel *this)
{
  MinecraftScreenModel::navigateToStartScreen(this);
}


unsigned int __fastcall MinecraftScreenModel::refreshUserProfileData(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r6@1
  void (__fastcall *v5)(char *, int, signed int); // r3@1
  int v6; // r5@5
  unsigned int *v7; // r1@6
  unsigned int v8; // r0@8
  unsigned int *v9; // r6@12
  unsigned int v10; // r0@14
  Social::XboxLiveUserManager *v11; // r0@19
  unsigned int result; // r0@19
  int v13; // r4@19
  unsigned int *v14; // r1@20
  unsigned int *v15; // r5@26
  Social::User *v16; // [sp+0h] [bp-30h]@19
  int v17; // [sp+4h] [bp-2Ch]@19
  char v18; // [sp+8h] [bp-28h]@2
  void (*v19)(void); // [sp+10h] [bp-20h]@1
  int v20; // [sp+14h] [bp-1Ch]@2
  Social::User *v21; // [sp+18h] [bp-18h]@1
  int v22; // [sp+1Ch] [bp-14h]@5

  v2 = a1;
  v3 = a2;
  ClientInstance::getUser((ClientInstance *)&v21, *(_DWORD *)(a1 + 16));
  v4 = Social::User::getLiveUser(v21);
  v19 = 0;
  v5 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
  if ( v5 )
  {
    v5(&v18, v3, 2);
    v20 = *(_DWORD *)(v3 + 12);
    v19 = *(void (**)(void))(v3 + 8);
  }
  Social::XboxLiveUserManager::RefreshXboxLiveUserInfo(v4, (int)&v18);
  if ( v19 )
    v19();
  v6 = v22;
  if ( v22 )
    v7 = (unsigned int *)(v22 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  ClientInstance::getUser((ClientInstance *)&v16, *(_DWORD *)(v2 + 16));
  v11 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v16);
  result = Social::XboxLiveUserManager::needToRefreshPrivacyLists(v11);
  v13 = v17;
  if ( v17 )
    v14 = (unsigned int *)(v17 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  return result;
}


void __fastcall MinecraftScreenModel::getInfiniteInviteLink(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  __int64 *v4; // r6@1
  int v5; // r4@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  int v7; // [sp+0h] [bp-28h]@2
  void (*v8)(void); // [sp+8h] [bp-20h]@1
  int v9; // [sp+Ch] [bp-1Ch]@2
  __int64 v10; // [sp+10h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v10 = *v4;
  v8 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  if ( v6 )
  {
    v6(&v7, v3, 2);
    v9 = *(_DWORD *)(v3 + 12);
    v8 = *(void (**)(void))(v3 + 8);
  }
  RealmsAPI::getInfiniteInviteLink(v5, &v10, (int)&v7);
  if ( v8 )
    v8();
}


  if ( MinecraftScreenModel::tryNavigateToXblFirstLaunchScreen(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 8;
  }
  else
  {
    v4 = 0;
    MinecraftScreenController::_attemptSignIn(v1, (int)&v3);
    if ( v4 )
      v4();
    result = 1;
  return result;
}


  if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424))
{
    || !MinecraftScreenModel::isMultiPlayerClient(*(MinecraftScreenModel **)(v1 + 424)) )
  {
    result = MinecraftScreenModel::isTrial(*(MinecraftScreenModel **)(v1 + 424)) ^ 1;
  }
  else
    result = 0;
  return result;
}


unsigned int __fastcall MinecraftScreenModel::refreshFriends(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  void (__fastcall *v4)(int *, int, signed int); // r3@1
  unsigned int result; // r0@3
  int v6; // r4@5
  unsigned int *v7; // r1@6
  unsigned int *v8; // r5@12
  int v9; // [sp+0h] [bp-28h]@2
  int (*v10)(void); // [sp+8h] [bp-20h]@1
  int v11; // [sp+Ch] [bp-1Ch]@2
  Social::User *v12; // [sp+10h] [bp-18h]@1
  int v13; // [sp+14h] [bp-14h]@5

  v2 = a2;
  ClientInstance::getUser((ClientInstance *)&v12, *(_DWORD *)(a1 + 16));
  v3 = Social::User::getLiveUser(v12);
  v10 = 0;
  v4 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
  if ( v4 )
  {
    v4(&v9, v2, 2);
    v11 = *(_DWORD *)(v2 + 12);
    v10 = *(int (**)(void))(v2 + 8);
  }
  result = Social::XboxLiveUserManager::RefreshXboxLiveUserInfo(v3, (int)&v9);
  if ( v10 )
    result = v10();
  v6 = v13;
  if ( v13 )
    v7 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v7);
      while ( __strex(result - 1, v7) );
    }
    else
      result = (*v7)--;
    if ( result == 1 )
      v8 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v8);
        while ( __strex(result - 1, v8) );
      }
      else
        result = (*v8)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return result;
}


void __fastcall MinecraftScreenModel::navigateToPlatformNetworkConnectConfirmationScreen(int a1, int a2)
{
  MinecraftScreenModel::navigateToPlatformNetworkConnectConfirmationScreen(a1, a2);
}


int __fastcall MinecraftScreenModel::getLastDevConsoleMessage(MinecraftScreenModel *this)
{
  GuiData *v1; // r0@1

  v1 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 4));
  return GuiData::getLastDevConsoleMessage(v1);
}


unsigned int __fastcall MinecraftScreenModel::signIn(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  void (__fastcall *v4)(int *, int, signed int); // r3@1
  unsigned int result; // r0@3
  int v6; // r4@5
  unsigned int *v7; // r1@6
  unsigned int *v8; // r5@12
  int v9; // [sp+0h] [bp-28h]@2
  int (*v10)(void); // [sp+8h] [bp-20h]@1
  int v11; // [sp+Ch] [bp-1Ch]@2
  Social::User *v12; // [sp+10h] [bp-18h]@1
  int v13; // [sp+14h] [bp-14h]@5

  v2 = a2;
  ClientInstance::getUser((ClientInstance *)&v12, *(_DWORD *)(a1 + 16));
  v3 = Social::User::getLiveUser(v12);
  v10 = 0;
  v4 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
  if ( v4 )
  {
    v4(&v9, v2, 2);
    v11 = *(_DWORD *)(v2 + 12);
    v10 = *(int (**)(void))(v2 + 8);
  }
  result = Social::XboxLiveUserManager::signIn(v3, (int)&v9);
  if ( v10 )
    result = v10();
  v6 = v13;
  if ( v13 )
    v7 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v7);
      while ( __strex(result - 1, v7) );
    }
    else
      result = (*v7)--;
    if ( result == 1 )
      v8 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v8);
        while ( __strex(result - 1, v8) );
      }
      else
        result = (*v8)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return result;
}


void __fastcall MinecraftScreenModel::updateRealmsWhitelist(int a1, __int64 *a2, int a3, int a4)
{
  MinecraftScreenModel::updateRealmsWhitelist(a1, a2, a3, a4);
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  return result;
}


int __fastcall MinecraftScreenModel::getIpAddress(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel *v2; // r4@1
  NetworkHandler *v3; // r0@1
  int v4; // r0@1

  v2 = this;
  v3 = (NetworkHandler *)ClientInstance::getClientNetworkSystem(*(ClientInstance **)(a2 + 16));
  v4 = NetworkHandler::getConnector(v3);
  return (*(int (__fastcall **)(MinecraftScreenModel *))(*(_DWORD *)v4 + 20))(v2);
}


signed int __fastcall MinecraftScreenModel::hasEntitlementFor(MinecraftScreenModel *this, const PackIdVersion *a2)
{
  const PackIdVersion *v2; // r4@1
  int v3; // r5@1
  int v4; // r1@1
  int v5; // r2@1
  int v6; // r3@1
  Entitlement *v7; // r0@1
  signed int v8; // r4@1
  void *v9; // r0@1
  void *v10; // r0@2
  void *v11; // r0@3
  unsigned int *v13; // r2@5
  signed int v14; // r1@7
  unsigned int *v15; // r2@9
  signed int v16; // r1@11
  unsigned int *v17; // r2@13
  signed int v18; // r1@15
  int v19; // [sp+0h] [bp-48h]@1
  int v20; // [sp+4h] [bp-44h]@1
  int v21; // [sp+8h] [bp-40h]@1
  int v22; // [sp+Ch] [bp-3Ch]@1
  int v23; // [sp+10h] [bp-38h]@1
  int v24; // [sp+18h] [bp-30h]@3
  int v25; // [sp+1Ch] [bp-2Ch]@2
  int v26; // [sp+20h] [bp-28h]@1
  char v27; // [sp+28h] [bp-20h]@1

  v2 = a2;
  v3 = MinecraftGame::getEntitlementManager(*((MinecraftGame **)this + 3));
  v4 = *((_DWORD *)v2 + 1);
  v5 = *((_DWORD *)v2 + 2);
  v6 = *((_DWORD *)v2 + 3);
  v19 = *(_DWORD *)v2;
  v20 = v4;
  v21 = v5;
  v22 = v6;
  SemVersion::SemVersion((int)&v23, (int)v2 + 16);
  v27 = *((_BYTE *)v2 + 40);
  v7 = (Entitlement *)EntitlementManager::getEntitlement(v3, (int)&v19);
  v8 = Entitlement::isOwned(v7);
  v9 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9(v9);
  }
  v10 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v25 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v24 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  return v8;
}


signed int __fastcall MinecraftScreenModel::isXBLEnabled(MinecraftScreenModel *this)
{
  return 1;
}


  if ( MinecraftScreenModel::isMultiPlayerClient(*(MinecraftScreenModel **)(v1 + 424)) == 1 )
{
    v3 = MinecraftScreenModel::getPlayerAbilities(*(MinecraftScreenModel **)(v1 + 424));
    result = Abilities::getBool(v3, &Abilities::OPERATOR);
  }
  else
  {
    result = 1;
  return result;
}


  if ( MinecraftScreenModel::isXBLEnabled(*(MinecraftScreenModel **)(v1 + 424)) == 1 )
{
  else
    result = 0;
  return result;
}


void __fastcall MinecraftScreenModel::addToRealmsBlocklist(int a1, __int64 *a2, const void **a3, int a4)
{
  int v4; // r5@1
  const void **v5; // r4@1
  __int64 *v6; // r7@1
  int v7; // r6@1
  void (__fastcall *v8)(int *, int, signed int); // r3@1
  int v9; // [sp+0h] [bp-30h]@2
  void (*v10)(void); // [sp+8h] [bp-28h]@1
  int v11; // [sp+Ch] [bp-24h]@2
  __int64 v12; // [sp+10h] [bp-20h]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v12 = *v6;
  v10 = 0;
  v8 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v8 )
  {
    v8(&v9, v4, 2);
    v11 = *(_DWORD *)(v4 + 12);
    v10 = *(void (**)(void))(v4 + 8);
  }
  RealmsAPI::addToBlocklist(v7, &v12, v5, (int)&v9);
  if ( v10 )
    v10();
}


void __fastcall MinecraftScreenModel::generateFilePickerSettingsForScreenShots(int a1, int a2, __int64 *a3, int **a4)
{
  MinecraftScreenModel::generateFilePickerSettingsForScreenShots(a1, a2, a3, a4);
}


int __fastcall MinecraftScreenModel::getArchiverState(MinecraftScreenModel *this)
{
  LevelArchiver *v1; // r0@1

  v1 = (LevelArchiver *)MinecraftGame::getLevelArchiver(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK13LevelArchiver15getCurrentStateEv(v1);
}


  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 424), 1) )
{
    result = 0;
  }
  else
  {
    v3 = 0;
    if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 424), 0) == 1 )
    {
      v3 = 0;
      if ( !*(_BYTE *)(v1 + 444) )
      {
        v4 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*(MainMenuScreenModel **)(v1 + 424));
        if ( FileDownloadManager::getDownloadState(v4) != 5 )
          v3 = 1;
      }
    }
    result = v3;
  return result;
}


int __fastcall MinecraftScreenModel::getScreenContext_DEPRECATED_DO_NOT_USE(MinecraftScreenModel *this, float a2, int a3)
{
  GameRenderer *v3; // r5@1
  int v4; // r4@1
  int v5; // r0@1

  v3 = this;
  v4 = a3;
  v5 = MinecraftGame::getGameRenderer(*(MinecraftGame **)(LODWORD(a2) + 12));
  return GameRenderer::makeScreenContext(v3, *(float *)&v5, v4);
}


int __fastcall MinecraftScreenModel::destroyGame(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  signed int v2; // r1@1
  ClientInstance *v3; // r0@1
  SceneStack *v4; // r0@2
  int result; // r0@2
  SceneStack *v6; // r0@3
  int v7; // [sp+4h] [bp-Ch]@2

  v1 = this;
  v2 = ClientInstance::isPrimaryClient(*((ClientInstance **)this + 4));
  v3 = (ClientInstance *)*((_DWORD *)v1 + 4);
  if ( v2 )
  {
    v7 = 0;
    ClientInstance::setClientPlayMode((int)v3, &v7);
    *(_BYTE *)(ClientInstance::getGameRenderer(*((ClientInstance **)v1 + 4)) + 812) = 1;
    v4 = (SceneStack *)ClientInstance::getClientSceneStack(*((ClientInstance **)v1 + 4));
    SceneStack::flushStack(v4, 1, 0);
    result = MinecraftGame::destroyGame(*((MinecraftGame **)v1 + 3));
  }
  else
    v6 = (SceneStack *)ClientInstance::getClientSceneStack(v3);
    result = j_j_j__ZN10SceneStack10flushStackEbb(v6, 1, 0);
  return result;
}


void __fastcall MinecraftScreenModel::navigateToXblReportUserScreen(int a1, int *a2, int *a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r4@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r5@8
  unsigned int v8; // r0@10
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  v3 = *(_QWORD *)(a1 + 20);
  SceneFactory::createXblReportUserScreen((unsigned __int64 *)&v9, SHIDWORD(v3), a2, a3);
  SceneStack::pushScreen(v3, (int)&v9, 0);
  v4 = v10;
  if ( v10 )
  {
    v5 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
}


void __fastcall MinecraftScreenModel::acknowledgedAutoSave(MinecraftScreenModel *this)
{
  MinecraftScreenModel::acknowledgedAutoSave(this);
}


void __fastcall MinecraftScreenModel::navigateToXblOptionalSignInScreen(int a1, int *a2, int *a3, int *a4, int *a5, int a6)
{
  int v6; // r9@1
  int v7; // r4@1
  int *v8; // r5@1
  void (__fastcall *v9)(char *, int, signed int); // r3@1
  int *v10; // r10@1
  int *v11; // r7@1
  int v12; // r0@6
  unsigned int *v13; // r1@7
  unsigned int v14; // r2@9
  int *v15; // r5@11
  int v16; // r4@13
  unsigned int *v17; // r1@14
  unsigned int v18; // r0@16
  unsigned int *v19; // r6@20
  unsigned int v20; // r0@22
  int v21; // r4@27
  unsigned int *v22; // r1@28
  unsigned int v23; // r0@30
  unsigned int *v24; // r5@34
  unsigned int v25; // r0@36
  int v26; // [sp+10h] [bp-40h]@6
  int v27; // [sp+14h] [bp-3Ch]@6
  char v28; // [sp+18h] [bp-38h]@2
  void (*v29)(void); // [sp+20h] [bp-30h]@1
  int v30; // [sp+24h] [bp-2Ch]@2
  int v31; // [sp+28h] [bp-28h]@3
  int v32; // [sp+2Ch] [bp-24h]@6

  v6 = a1;
  v7 = *(_DWORD *)(a1 + 24);
  v29 = 0;
  v8 = a4;
  v9 = *(void (__fastcall **)(char *, int, signed int))(a6 + 8);
  v10 = a3;
  v11 = a2;
  if ( v9 )
  {
    v9(&v28, a6, 2);
    v30 = *(_DWORD *)(a6 + 12);
    v29 = *(void (**)(void))(a6 + 8);
  }
  SceneFactory::createXblOptionalSignInScreen((int)&v31, v7, v11, v10, v8, a5, (int)&v28, 1);
  if ( v29 )
    v29();
  if ( v31 )
    v12 = *(_DWORD *)(v6 + 20);
    v26 = v31;
    v27 = v32;
    if ( v32 )
    {
      v13 = (unsigned int *)(v32 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 + 1, v13) );
      }
      else
        ++*v13;
    }
    SceneStack::pushScreen(v12, (int)&v26, 0);
    v16 = v27;
    v15 = &v32;
    if ( v27 )
      v17 = (unsigned int *)(v27 + 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        v19 = (unsigned int *)(v16 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  else
  v21 = *v15;
  if ( *v15 )
    v22 = (unsigned int *)(v21 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    else
      v23 = (*v22)--;
    if ( v23 == 1 )
      v24 = (unsigned int *)(v21 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
}


signed int __fastcall MinecraftScreenModel::linkPlayerToScreen(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  Player *v2; // r0@1
  PlayerInventoryProxy *v3; // r10@1
  Player *v4; // r0@1
  PlayerInventoryProxy *v5; // r0@1
  signed int result; // r0@1
  signed int v7; // r9@1
  ItemInstance *v8; // r5@2
  int v9; // r7@2
  int v10; // r0@3
  int v11; // r6@3
  int v12; // r0@3
  int v13; // r4@3
  bool v14; // zf@3
  bool v15; // zf@7
  int v16; // r0@10
  char *v17; // r0@10
  char *v18; // r4@10
  __int64 v19; // r0@10
  int v20; // r8@11
  int v21; // r5@11
  int v22; // [sp+0h] [bp-70h]@2
  int v23; // [sp+8h] [bp-68h]@20
  void *v24; // [sp+24h] [bp-4Ch]@18
  void *ptr; // [sp+34h] [bp-3Ch]@16

  v1 = this;
  v2 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v3 = (PlayerInventoryProxy *)Player::getSupplies(v2);
  v4 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v1 + 4));
  v5 = (PlayerInventoryProxy *)Player::getSupplies(v4);
  result = PlayerInventoryProxy::getLinkedSlotsCount(v5);
  v7 = result;
  if ( result >= 1 )
  {
    v8 = (ItemInstance *)&v22;
    v9 = 0;
    do
    {
      v10 = PlayerInventoryProxy::getLinkedSlot(v3, v9);
      v11 = v10;
      v12 = PlayerInventoryProxy::getItem((int)v3, v10, 0);
      v13 = v12;
      result = *(_BYTE *)(v12 + 15);
      v14 = result == 0;
      if ( result )
      {
        result = *(_DWORD *)v13;
        v14 = *(_DWORD *)v13 == 0;
      }
      if ( !v14 )
        result = ItemInstance::isNull((ItemInstance *)v13);
        if ( !result )
        {
          v15 = v11 == v9 + v7;
          if ( v11 != v9 + v7 )
          {
            result = *(_BYTE *)(v13 + 14);
            v15 = result == 0;
          }
          if ( !v15 )
            ItemInstance::ItemInstance(v8, v13);
            v16 = PlayerInventoryProxy::getItem((int)v3, v9 + v7, 0);
            PlayerInventoryProxy::setItem((int)v3, v11, v16, 0);
            PlayerInventoryProxy::setItem((int)v3, v9 + v7, (int)v8, 0);
            v17 = PlayerInventoryProxy::getLinkedSlots(v3);
            v18 = v17;
            v19 = *(_QWORD *)v17;
            HIDWORD(v19) -= v19;
            if ( SHIDWORD(v19) >> 2 )
            {
              v20 = (SHIDWORD(v19) >> 2) - 1;
              v21 = 0;
              while ( 1 )
              {
                if ( *(_DWORD *)(v19 + 4 * v21) == v9 + v7 )
                  PlayerInventoryProxy::setLinkedSlot(v3, v21, v11);
                if ( v20 == v21 )
                  break;
                ++v21;
                LODWORD(v19) = *(_DWORD *)v18;
              }
            }
            PlayerInventoryProxy::linkSlot(v3, v9, v9 + v7);
            v8 = (ItemInstance *)&v22;
            if ( ptr )
              operator delete(ptr);
            if ( v24 )
              operator delete(v24);
            result = v23;
            if ( v23 )
              result = (*(int (**)(void))(*(_DWORD *)v23 + 4))();
        }
      ++v9;
    }
    while ( v9 < v7 );
  }
  return result;
}


int __fastcall MinecraftScreenModel::triggerNpcUpdateTelemetry(MinecraftScreenModel *this, Npc *a2)
{
  MinecraftScreenModel *v2; // r5@1
  Npc *v3; // r4@1
  int v4; // r0@1
  MinecraftEventing *v5; // r6@1
  int v6; // r0@1
  char v7; // r2@1

  v2 = this;
  v3 = a2;
  v4 = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v5 = (MinecraftEventing *)(*(int (**)(void))(*(_DWORD *)v4 + 1440))();
  v6 = ClientInstance::getLocalPlayer(*((ClientInstance **)v2 + 4));
  v7 = (*(int (**)(void))(*(_DWORD *)v6 + 648))();
  return j_j_j__ZN17MinecraftEventing29fireEventNpcPropertiesUpdatedER3Npcb(v5, v3, v7);
}


int __fastcall MinecraftScreenModel::getWorldConverterDevelopmentVersionString(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  return result;
}


void __fastcall MinecraftScreenModel::fireEventScreenChanged(int a1, int *a2)
{
  MinecraftScreenModel::fireEventScreenChanged(a1, a2);
}


  if ( MinecraftScreenModel::isPrimaryClient(*(MinecraftScreenModel **)(v1 + 424)) == 1 )
{
    sub_119CAD8(&v7, "deathScreen.quit.confirmToMainMenuTitleWarning", (_BYTE *)0x2E);
    sub_119CAD8(&v11, "deathScreen.quit.confirmToMainMenuWarning", (_BYTE *)0x29);
  }
  else
  {
    sub_119CAD8(&v7, "deathScreen.quit.secondaryClient.confirmLeaveTitleWarning", (_BYTE *)0x39);
    sub_119CAD8(&v11, "deathScreen.quit.secondaryClient.confirmLeaveWarning", (_BYTE *)0x34);
  v19 = 1;
  sub_119CAD8(&v16, "globalPauseScreen.quit", (_BYTE *)0x16);
  sub_119CAD8(&v18, "gui.cancel", (_BYTE *)0xA);
  v2 = operator new(4u);
  LODWORD(v3) = sub_1181FE2;
  *v2 = v1;
  HIDWORD(v3) = sub_1181FCE;
  v5 = v2;
  v6 = v3;
  HIDWORD(v3) = &v5;
  MinecraftScreenController::_displayCustomModalPopup(v1, (int)&v7, *(__int64 *)((char *)&v3 + 4));
  if ( (_DWORD)v6 )
    ((void (*)(void))v6)();
  ModalScreenData::~ModalScreenData((ModalScreenData *)&v7);
  return 0;
}


MinecraftScreenModel *__fastcall MinecraftScreenModel::~MinecraftScreenModel(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3
  char *v4; // r0@5
  char *v5; // r5@5
  int v6; // r6@6
  int v7; // r5@10
  unsigned int *v8; // r1@11
  unsigned int v9; // r0@13
  unsigned int *v10; // r6@17
  unsigned int v11; // r0@19
  int v12; // r0@24
  unsigned int *v13; // r2@25
  unsigned int v14; // r1@27

  v1 = this;
  *(_DWORD *)this = &off_26D8078;
  v2 = *((_DWORD *)this + 15);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 15) = 0;
  v3 = *((_DWORD *)v1 + 13);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 13) = 0;
  v5 = (char *)(*((_QWORD *)v1 + 5) >> 32);
  v4 = (char *)*((_QWORD *)v1 + 5);
  if ( v4 != v5 )
  {
    do
    {
      v6 = (int)(v4 + 64);
      (**(void (***)(void))v4)();
      v4 = (char *)v6;
    }
    while ( v5 != (char *)v6 );
    v4 = (char *)*((_DWORD *)v1 + 10);
  }
  if ( v4 )
    operator delete(v4);
  v7 = *((_DWORD *)v1 + 9);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  v12 = *((_DWORD *)v1 + 2);
  if ( v12 )
    v13 = (unsigned int *)(v12 + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      (*(void (**)(void))(*(_DWORD *)v12 + 12))();
  return v1;
}


void __fastcall MinecraftScreenModel::fetchRealmsWorlds(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void (__fastcall *v4)(int *, int, signed int); // r3@1
  int v5; // [sp+0h] [bp-20h]@2
  void (*v6)(void); // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@2

  v2 = a2;
  v3 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v6 = 0;
  v4 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
  if ( v4 )
  {
    v4(&v5, v2, 2);
    v7 = *(_DWORD *)(v2 + 12);
    v6 = *(void (**)(void))(v2 + 8);
  }
  RealmsAPI::fetchWorlds(v3, (int)&v5);
  if ( v6 )
    v6();
}


unsigned int __fastcall MinecraftScreenModel::selectSlot(int a1, int a2, Inventory *a3)
{
  Inventory *v3; // r4@1
  int v4; // r5@1
  Player *v5; // r0@1
  int v6; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = (Player *)ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 16));
  v6 = Player::getSupplies(v5);
  return j_j_j__ZN20PlayerInventoryProxy10selectSlotEi11ContainerID(v6, v4, v3);
}


ThirdPartyInfo *__fastcall MinecraftScreenModel::startExternalNetworkWorld(int a1, int *a2, int *a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  int *v6; // r7@1
  int *v7; // r8@1
  int v8; // r0@1
  int v9; // r5@1
  void *v10; // r0@1
  void *v11; // r0@2
  void *v12; // r0@3
  unsigned int *v14; // r2@5
  signed int v15; // r1@7
  unsigned int *v16; // r2@9
  signed int v17; // r1@11
  unsigned int *v18; // r2@13
  signed int v19; // r1@15
  char v20; // [sp+8h] [bp-80h]@1
  int v21; // [sp+Ch] [bp-7Ch]@3
  int v22; // [sp+10h] [bp-78h]@2
  int v23; // [sp+18h] [bp-70h]@1
  int v24; // [sp+1Ch] [bp-6Ch]@1
  char v25; // [sp+44h] [bp-44h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = MinecraftGame::getThirdPartyServerRepository(*(MinecraftGame **)(a1 + 12));
  ThirdPartyServerRepository::findThirdPartyInfoForUrl((int)&v25, v8, v6);
  v9 = *(_DWORD *)(v4 + 16);
  Social::GameConnectionInfo::GameConnectionInfo((int)&v20, -1, v6, v5, (int)&v25);
  ClientInstance::startExternalNetworkWorld(v9, (int)&v20, v7);
  ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v24);
  v10 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  }
  v11 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v22 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v21 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  return ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v25);
}


void __fastcall MinecraftScreenModel::getProfiles(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  int v7; // r4@5
  unsigned int *v8; // r1@6
  unsigned int v9; // r0@8
  unsigned int *v10; // r5@12
  unsigned int v11; // r0@14
  int v12; // [sp+0h] [bp-28h]@2
  void (*v13)(void); // [sp+8h] [bp-20h]@1
  int v14; // [sp+Ch] [bp-1Ch]@2
  Social::User *v15; // [sp+10h] [bp-18h]@1
  int v16; // [sp+14h] [bp-14h]@5

  v3 = a2;
  v4 = a3;
  ClientInstance::getUser((ClientInstance *)&v15, *(_DWORD *)(a1 + 16));
  v5 = Social::User::getLiveUser(v15);
  v13 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v6 )
  {
    v6(&v12, v4, 2);
    v14 = *(_DWORD *)(v4 + 12);
    v13 = *(void (**)(void))(v4 + 8);
  }
  Social::XboxLiveUserManager::getProfiles(COERCE_DOUBLE(__PAIR__(v3, v5)), (int)&v12);
  if ( v13 )
    v13();
  v7 = v16;
  if ( v16 )
    v8 = (unsigned int *)(v16 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
}


void __fastcall MinecraftScreenModel::getUserProfileDataByGamertag(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r6@1
  void *v6; // r0@1
  int v7; // r4@2
  unsigned int *v8; // r1@3
  unsigned int v9; // r0@5
  unsigned int *v10; // r5@9
  unsigned int v11; // r0@11
  unsigned int *v12; // r2@17
  signed int v13; // r1@19
  int v14; // [sp+4h] [bp-24h]@1
  Social::User *v15; // [sp+8h] [bp-20h]@1
  int v16; // [sp+Ch] [bp-1Ch]@2

  v3 = a1;
  v4 = a3;
  ClientInstance::getUser((ClientInstance *)&v15, *(_DWORD *)(a2 + 16));
  v5 = Social::User::getLiveUser(v15);
  sub_DA73B4(&v14, v4);
  Social::XboxLiveUserManager::getUserProfileDataByGamertag(v3, v5, (int **)&v14);
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  }
  v7 = v16;
  if ( v16 )
    v8 = (unsigned int *)(v16 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
}


int __fastcall MinecraftScreenModel::setRealmsWorldInfo(int a1, __int64 *a2, int *a3, int *a4, int a5, int a6, bool a7, int a8)
{
  int *v8; // r4@1
  int *v9; // r5@1
  __int64 *v10; // r7@1
  int v11; // r6@1
  void (__fastcall *v12)(char *, int, signed int); // r3@1
  int result; // r0@3
  char v14; // [sp+10h] [bp-30h]@2
  int (*v15)(void); // [sp+18h] [bp-28h]@1
  int v16; // [sp+1Ch] [bp-24h]@2
  __int64 v17; // [sp+20h] [bp-20h]@1

  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v17 = *v10;
  v15 = 0;
  v12 = *(void (__fastcall **)(char *, int, signed int))(a8 + 8);
  if ( v12 )
  {
    v12(&v14, a8, 2);
    v16 = *(_DWORD *)(a8 + 12);
    v15 = *(int (**)(void))(a8 + 8);
  }
  result = RealmsAPI::setWorldInfo(v11, &v17, v9, v8, a5, a6, a7, (int)&v14);
  if ( v15 )
    result = v15();
  return result;
}


void __fastcall MinecraftScreenModel::setRealmsShowFriendInvitesOnly(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel::setRealmsShowFriendInvitesOnly(this, a2);
}


void __fastcall MinecraftScreenModel::getUserProfileDataByXuid(int a1, int a2, int *a3)
{
  MinecraftScreenModel::getUserProfileDataByXuid(a1, a2, a3);
}


unsigned int __fastcall MinecraftScreenModel::blockUser(int a1, int *a2, int a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  int (__cdecl *v6)(__int64 *, __int64 *); // r1@1
  unsigned int result; // r0@1
  int v8; // r4@3
  unsigned int *v9; // r1@4
  unsigned int *v10; // r5@10
  __int64 v11; // [sp+0h] [bp-28h]@1
  int (__cdecl *v12)(__int64 *, __int64 *); // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1
  Social::User *v14; // [sp+10h] [bp-18h]@1
  int v15; // [sp+14h] [bp-14h]@3

  v3 = a2;
  v4 = a3;
  ClientInstance::getUser((ClientInstance *)&v14, *(_DWORD *)(a1 + 16));
  v5 = Social::User::getLiveUser(v14);
  v11 = *(_QWORD *)v4;
  v6 = *(int (__cdecl **)(__int64 *, __int64 *))(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v12 = v6;
  v13 = *(_DWORD *)(v4 + 12);
  result = Social::XboxLiveUserManager::blockUser(v5, v3, (int)&v11);
  if ( v12 )
    result = v12(&v11, &v11);
  v8 = v15;
  if ( v15 )
  {
    v9 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
    }
    else
      result = (*v9)--;
    if ( result == 1 )
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
      }
      else
        result = (*v10)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  return result;
}


  if ( MinecraftScreenModel::isValidMultiplayerSkin(*(MinecraftScreenModel **)(v1 + 424)) )
{
    v2 = operator new(4u);
    LODWORD(v3) = sub_112680E;
    *v2 = v1;
    HIDWORD(v3) = sub_11267F6;
    v5 = v2;
    v6 = v3;
    AddExternalServerScreenController::_saveFormDataThen(v1, (int)&v5);
    if ( (_DWORD)v6 )
      ((void (*)(void))v6)();
    result = 8;
  }
  else
  {
    MainMenuScreenController::showInvalidMultiplayerSkinModal((MainMenuScreenController *)v1);
    result = 0;
  return result;
}


int __fastcall MinecraftScreenModel::triggerWorldExportedTelemetry(MinecraftScreenModel *this, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r4@1
  unsigned int v5; // r5@1
  MinecraftEventing *v6; // r0@1
  int v7; // r1@1

  v4 = HIDWORD(a3);
  v5 = a3;
  v6 = (MinecraftEventing *)MinecraftGame::getEventing(*((MinecraftGame **)this + 3));
  return j_j_j__ZN17MinecraftEventing22fireEventWorldExportedExy(v6, v7, __PAIR__(v4, v5), a4);
}


int __fastcall MinecraftScreenModel::filterProfanityFromString(int a1, int a2)
{
  ClientInstance::getUIProfanityContext(*(ClientInstance **)(a2 + 16));
  return UIProfanityContext::filterProfanityFromString();
}


Realms::World *__fastcall MinecraftScreenModel::joinRealmFromInvite(int a1, const Realms::World *a2)
{
  int v2; // r4@1
  int v4; // [sp+0h] [bp-58h]@1

  v2 = *(_DWORD *)(a1 + 12);
  Realms::World::World((Realms::World *)&v4, a2);
  MinecraftGame::joinRealmFromInvite(v2, (const Realms::World *)&v4);
  return Realms::World::~World((Realms::World *)&v4);
}


int __fastcall MinecraftScreenModel::getButtonTexture(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  void *v4; // r0@2
  int v5; // r0@4
  int v6; // r0@4

  v2 = a1;
  v3 = ClientInstance::getOptions(*(ClientInstance **)(a2 + 16));
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = &ServiceLocator<AppPlatform>::mDefaultService;
  v5 = (*(int (**)(void))(**(_DWORD **)v4 + 460))();
  v6 = Options::getGamePadRemappingByType(v3, v5);
  return GamePadRemappingLayout::getKeySpriteLocation(v2, v6);
}


int __fastcall MinecraftScreenModel::getDefaultSkinIndexByType(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  Skin *v4; // r0@1

  v2 = a2;
  v3 = ClientInstance::getSkinRepositoryClientInterface(*(ClientInstance **)(a1 + 16));
  v4 = SkinRepositoryClientInterface::getDefaultSkin(v3, v2);
  return j_j_j__ZNK4Skin12getSkinIndexEv(v4);
}


int __fastcall MinecraftScreenModel::respawnPlayer(MinecraftScreenModel *this)
{
  int v1; // r0@1

  v1 = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return (*(int (**)(void))(*(_DWORD *)v1 + 1240))();
}


int __fastcall MinecraftScreenModel::setCursorSelectedItem(MinecraftScreenModel *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r4@1
  Player *v3; // r0@1

  v2 = a2;
  v3 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return j_j_j__ZN6Player21setCursorSelectedItemERK12ItemInstance(v3, v2);
}


void __fastcall MinecraftScreenModel::getVersionString(MinecraftScreenModel *this)
{
  MinecraftScreenModel::getVersionString(this);
}


  if ( *(_DWORD *)(v1 + 516) != 1 || MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) != 1 )
{
  else
    result = MinecraftScreenModel::isTrial(*(MinecraftScreenModel **)(v1 + 424)) ^ 1;
  return result;
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 48))();
  return result;
}


void __fastcall MinecraftScreenModel::generateFilePickerSettingsForExport(int a1, int a2, int *a3, int *a4, int a5)
{
  MinecraftScreenModel::generateFilePickerSettingsForExport(a1, a2, a3, a4, a5);
}


int __fastcall MinecraftScreenModel::isFullscreenKeyboard(MinecraftScreenModel *this)
{
  int v1; // r0@1

  v1 = ClientInstance::getKeyboardManager(*((ClientInstance **)this + 4));
  return (*(int (**)(void))(*(_DWORD *)v1 + 12))();
}


signed int __fastcall MinecraftScreenModel::isInputModeMotionController(MinecraftScreenModel *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = ClientInstance::getCurrentInputMode(*((ClientInstance **)this + 4));
  v2 = 0;
  if ( v1 == 4 )
    v2 = 1;
  return v2;
}


void __fastcall MinecraftScreenModel::getResourcePackProgress(MinecraftScreenModel *this, int a2)
{
  MinecraftGame::getResourcePackProgress(this, *(_DWORD *)(a2 + 12));
}


int __fastcall MinecraftScreenModel::isInputModeMouse(MinecraftScreenModel *this)
{
  int result; // r0@1

  result = ClientInstance::getCurrentInputMode(*((ClientInstance **)this + 4));
  if ( result != 1 )
    result = 0;
  return result;
}


void __fastcall MinecraftScreenModel::navigateToSkinPickerScreen(MinecraftScreenModel *this)
{
  MinecraftScreenModel::navigateToSkinPickerScreen(this);
}


Social::XboxLiveUserManager *__fastcall MinecraftScreenModel::getAchievementData(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r7@8
  unsigned int v6; // r0@10
  Social::XboxLiveUserManager *v7; // r0@16
  Social::XboxLiveUserManager *v8; // r4@16
  int v9; // r5@16
  unsigned int *v10; // r1@17
  unsigned int v11; // r0@19
  char v12; // r1@21
  unsigned int *v13; // r6@26
  unsigned int v14; // r0@28
  Social::User *v16; // [sp+4h] [bp-24h]@16
  int v17; // [sp+8h] [bp-20h]@16
  char v18; // [sp+Ch] [bp-1Ch]@1
  int v19; // [sp+10h] [bp-18h]@1

  v1 = this;
  ClientInstance::getUser((ClientInstance *)&v18, *((_DWORD *)this + 4));
  v2 = *(_QWORD *)&v18;
  if ( v19 )
  {
    v3 = (unsigned int *)(v19 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(HIDWORD(v2) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 8))(HIDWORD(v2));
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  }
  if ( (_DWORD)v2 )
    ClientInstance::getUser((ClientInstance *)&v16, *((_DWORD *)v1 + 4));
    v7 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v16);
    v8 = Social::XboxLiveUserManager::getPlayerAchievementData(v7);
    v9 = v17;
    if ( v17 )
      v10 = (unsigned int *)(v17 + 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        v13 = (unsigned int *)(v9 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  else
    v12 = byte_27C9614;
    __dmb();
    if ( v12 & 1 )
      v8 = (Social::XboxLiveUserManager *)&algn_27C9615[3];
    else if ( j___cxa_guard_acquire((unsigned int *)&byte_27C9614) )
      PlayerAchievementData::PlayerAchievementData((PlayerAchievementData *)&algn_27C9615[3]);
      _cxa_atexit(PlayerAchievementData::~PlayerAchievementData);
      j___cxa_guard_release((unsigned int *)&byte_27C9614);
  return v8;
}


void __fastcall MinecraftScreenModel::updateRealmsWhitelist(int a1, __int64 *a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  __int64 *v6; // r7@1
  int v7; // r4@1
  int v8; // r1@1
  int *v9; // r0@2
  int *v10; // r2@2
  int *v11; // r1@3
  int *v12; // r1@5
  void (__fastcall *v13)(int *, int, signed int); // r3@7
  int v14; // [sp+0h] [bp-48h]@8
  void (*v15)(void); // [sp+8h] [bp-40h]@7
  int v16; // [sp+Ch] [bp-3Ch]@8
  char v17; // [sp+10h] [bp-38h]@2
  int v18; // [sp+14h] [bp-34h]@1
  int *v19; // [sp+18h] [bp-30h]@1
  int *v20; // [sp+1Ch] [bp-2Ch]@1
  int *v21; // [sp+20h] [bp-28h]@1
  int v22; // [sp+24h] [bp-24h]@1
  __int64 v23; // [sp+28h] [bp-20h]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v23 = *v6;
  v22 = 0;
  v18 = 0;
  v19 = 0;
  v20 = &v18;
  v21 = &v18;
  v8 = *(_DWORD *)(v5 + 8);
  if ( v8 )
  {
    v9 = std::_Rb_tree<std::string,std::pair<std::string const,RealmsAPI::InviteAction>,std::_Select1st<std::pair<std::string const,RealmsAPI::InviteAction>>,std::less<std::string>,std::allocator<std::pair<std::string const,RealmsAPI::InviteAction>>>::_M_copy(
           (int)&v17,
           v8,
           (int)&v18);
    v10 = v9;
    v19 = v9;
    do
    {
      v11 = v10;
      v10 = (int *)v10[2];
    }
    while ( v10 );
    v20 = v11;
      v12 = v9;
      v9 = (int *)v9[3];
    while ( v9 );
    v21 = v12;
    v22 = *(_DWORD *)(v5 + 20);
  }
  v15 = 0;
  v13 = *(void (__fastcall **)(_DWORD *, int, signed int))(v4 + 8);
  if ( v13 )
    v13(&v14, v4, 2);
    v16 = *(_DWORD *)(v4 + 12);
    v15 = *(void (**)(void))(v4 + 8);
  RealmsAPI::updateWhitelist(v7, &v23, (int)&v17, (int)&v14);
  if ( v15 )
    v15();
  std::_Rb_tree<std::string,std::pair<std::string const,RealmsAPI::InviteAction>,std::_Select1st<std::pair<std::string const,RealmsAPI::InviteAction>>,std::less<std::string>,std::allocator<std::pair<std::string const,RealmsAPI::InviteAction>>>::_M_erase(
    (int)&v17,
    (int)v19);
}


int __fastcall MinecraftScreenModel::isOnlineClient(MinecraftScreenModel *this)
{
  Minecraft *v1; // r0@1

  v1 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)this + 4));
  return j_j_j__ZN9Minecraft14isOnlineClientEv(v1);
}


int __fastcall MinecraftScreenModel::isRealmsDisabledForBeta(MinecraftScreenModel *this)
{
  return 0;
}


void __fastcall MinecraftScreenModel::getSplitscreenJoinText(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel::getSplitscreenJoinText(this, a2);
}


signed int __fastcall MinecraftScreenModel::copyWorld(int a1, int *a2)
{
  int v2; // r9@1
  int *v3; // r5@1
  Minecraft *v4; // r0@1
  int v5; // r0@1
  void *v6; // r0@1
  __int64 v7; // r1@1
  int v8; // r0@3
  int v9; // r2@3
  int v10; // r3@3
  signed int v11; // r5@3
  double v12; // r0@3
  LevelSummary *v13; // r4@4
  LevelSummary *v14; // r5@4
  Minecraft *v15; // r0@11
  int v16; // r0@11
  int *v17; // r0@11
  char *v18; // r0@11
  void *v19; // r0@11
  char *v20; // r5@12
  int v21; // r7@12
  unsigned int *v22; // r2@14
  signed int v23; // r1@16
  int *v24; // r0@22
  void *v25; // r0@27
  void *v26; // r0@28
  int v27; // r0@29
  LevelSummary *v28; // r0@29
  LevelSummary *v29; // r4@29
  void *v30; // r0@37
  void *v31; // r0@38
  unsigned int *v33; // r2@42
  signed int v34; // r1@44
  unsigned int *v35; // r2@46
  signed int v36; // r1@48
  unsigned int *v37; // r2@58
  signed int v38; // r1@60
  unsigned int *v39; // r2@62
  signed int v40; // r1@64
  unsigned int *v41; // r2@66
  signed int v42; // r1@68
  int v43; // [sp+4h] [bp-A2Ch]@11
  char *v44; // [sp+8h] [bp-A28h]@11
  char *v45; // [sp+Ch] [bp-A24h]@11
  char *v46; // [sp+10h] [bp-A20h]@11
  int v47; // [sp+18h] [bp-A18h]@11
  int v48; // [sp+1Ch] [bp-A14h]@11
  char v49; // [sp+20h] [bp-A10h]@11
  __int64 ptr; // [sp+194h] [bp-89Ch]@4
  int v51; // [sp+19Ch] [bp-894h]@4
  int v52; // [sp+1A0h] [bp-890h]@3
  int v53; // [sp+1A4h] [bp-88Ch]@3
  __int64 v54; // [sp+1A8h] [bp-888h]@3
  char v55; // [sp+1B0h] [bp-880h]@3
  void (*v56)(void); // [sp+1B8h] [bp-878h]@35
  unsigned __int8 v57; // [sp+1C0h] [bp-870h]@3
  void *v58; // [sp+1C4h] [bp-86Ch]@1
  __int64 v59; // [sp+1CCh] [bp-864h]@1
  int v60; // [sp+1D4h] [bp-85Ch]@1
  int v61; // [sp+1D8h] [bp-858h]@1
  int v62; // [sp+1DCh] [bp-854h]@1
  int v63; // [sp+1E0h] [bp-850h]@1
  int v64; // [sp+1E8h] [bp-848h]@3
  int v65; // [sp+1ECh] [bp-844h]@3
  int v66; // [sp+1F0h] [bp-840h]@3
  int v67; // [sp+1F4h] [bp-83Ch]@3
  char v68; // [sp+1FCh] [bp-834h]@3
  int v69; // [sp+200h] [bp-830h]@3
  int v70; // [sp+600h] [bp-430h]@3
  char v71; // [sp+604h] [bp-42Ch]@1
  int v72; // [sp+608h] [bp-428h]@1
  RakNet *v73; // [sp+A0Ch] [bp-24h]@1

  v2 = a1;
  v3 = a2;
  v73 = _stack_chk_guard;
  v4 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(a1 + 16));
  v5 = Minecraft::getLevelSource(v4);
  (*(void (__fastcall **)(int *))(*(_DWORD *)v5 + 64))(&v63);
  v60 = v63;
  v61 = *(_DWORD *)(v63 - 12);
  v6 = operator new(1u);
  LODWORD(v7) = sub_CF1E7A;
  v58 = v6;
  HIDWORD(v7) = sub_CF1E70;
  v59 = v7;
  Core::FileSystem::createUniquePathFromSeed((int)&v71, (__int64 *)&v60, (int)&v58);
  sub_DA7364((void **)&v62, (const char *)&v72);
  if ( (_DWORD)v59 )
    ((void (*)(void))v59)();
  v8 = *v3;
  v9 = *(_DWORD *)(*v3 - 12);
  v10 = *(_DWORD *)(v63 - 12);
  v64 = v63;
  v65 = v10;
  v66 = v8;
  v67 = v9;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v68, (int)&v64, 2);
  LODWORD(v54) = &v69;
  HIDWORD(v54) = v70;
  v52 = v62;
  v53 = *(_DWORD *)(v62 - 12);
  Core::FileSystem::copyDirectoryAndContentsRecursively((int)&v55, &v54, (__int64 *)&v52);
  LOBYTE(v12) = v57;
  v11 = 0;
  HIDWORD(v12) = v57 | 2;
  v57 |= 2u;
  if ( LOBYTE(v12) & 1 )
  {
    ptr = 0LL;
    v51 = 0;
    LODWORD(v12) = &ptr;
    ExternalFileLevelStorageSource::addLevelSummaryIfExists(v12);
    v13 = (LevelSummary *)HIDWORD(ptr);
    v14 = (LevelSummary *)ptr;
    if ( HIDWORD(ptr) == (_DWORD)ptr )
    {
      if ( (_DWORD)ptr != HIDWORD(ptr) )
      {
        do
        {
          LevelSummary::~LevelSummary(v14);
          v14 = (LevelSummary *)((char *)v14 + 64);
        }
        while ( v13 != v14 );
        v14 = (LevelSummary *)ptr;
      }
      if ( v14 )
        operator delete((void *)v14);
      v11 = 0;
    }
    else
      v15 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v2 + 16));
      v16 = Minecraft::getLevelSource(v15);
      (*(void (__fastcall **)(char *))(*(_DWORD *)v16 + 20))(&v49);
      sub_DA7364((void **)&v47, "selectWorld.newWorld.copyOf");
      v17 = (int *)LevelData::getLevelName((LevelData *)&v49);
      sub_DA73B4(&v43, v17);
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v18 = (char *)operator new(4u);
      v44 = v18;
      v46 = v18 + 4;
      v45 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                      (int)&v43,
                      (int)&v44,
                      (int)v18);
      I18n::get(&v48, &v47, (unsigned __int64 *)&v44);
      LevelData::setLevelName((int)&v49, &v48);
      v19 = (void *)(v48 - 12);
      if ( (int *)(v48 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v48 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
        else
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j_j__ZdlPv_9(v19);
      v21 = (int)v45;
      v20 = v44;
      if ( v44 != v45 )
          v24 = (int *)(*(_DWORD *)v20 - 12);
          if ( v24 != &dword_28898C0 )
          {
            v22 = (unsigned int *)(*(_DWORD *)v20 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
            }
            else
              v23 = (*v22)--;
            if ( v23 <= 0 )
              j_j_j_j_j__ZdlPv_9(v24);
          }
          v20 += 4;
        while ( v20 != (char *)v21 );
        v20 = v44;
      if ( v20 )
        operator delete(v20);
      v25 = (void *)(v43 - 12);
      if ( (int *)(v43 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v43 - 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j_j__ZdlPv_9(v25);
      v26 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v47 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j_j__ZdlPv_9(v26);
      MinecraftScreenModel::saveLevelData(v2, ptr, (LevelData *)&v49);
      v27 = MinecraftGame::getUserManager(*(MinecraftGame **)(v2 + 12));
      Social::UserManager::forceCloudSaveOnWorld(v27);
      LevelData::~LevelData((LevelData *)&v49);
      v29 = (LevelSummary *)HIDWORD(ptr);
      v28 = (LevelSummary *)ptr;
          v28 = (LevelSummary *)((char *)LevelSummary::~LevelSummary(v28) + 64);
        while ( v29 != v28 );
        v28 = (LevelSummary *)ptr;
      if ( v28 )
        operator delete((void *)v28);
      v11 = 1;
  }
  if ( v56 )
    v56();
  v30 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v62 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v63 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9(v31);
  if ( _stack_chk_guard != v73 )
    _stack_chk_fail(_stack_chk_guard - v73);
  return v11;
}


            if ( MinecraftScreenModel::isAddFriendAllowed(*(MinecraftScreenModel **)(v1 + 380)) == 1 )
{
              v8 = MinecraftScreenModel::getHoloInput(*(MinecraftScreenModel **)(v1 + 380));
              if ( (*(int (**)(void))(*(_DWORD *)v8 + 88))() == 1 )
              {
                v56 = *(_DWORD *)v2;
                v9 = *(_DWORD *)(v2 + 4);
                v57 = v9;
                if ( v9 )
                {
                  v10 = (unsigned int *)(v9 + 8);
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
                v19 = 0;
                v59 = 0;
                v20 = *(void (__fastcall **)(int *, int, signed int))(v2 + 16);
                if ( v20 )
                  v20(&v58, v2 + 8, 2);
                  v60 = *(_DWORD *)(v2 + 20);
                  v19 = *(void (**)(void))(v2 + 16);
                  v59 = *(void (**)(void))(v2 + 16);
                v47 = v56;
                v48 = v57;
                if ( v57 )
                  v21 = (unsigned int *)(v57 + 8);
                      v22 = __ldrex(v21);
                    while ( __strex(v22 + 1, v21) );
                    v19 = v59;
                    ++*v21;
                v23 = 0;
                v51 = 0;
                if ( v19 )
                  ((void (__fastcall *)(int *, int *, signed int))v19)(&v49, &v58, 2);
                  v23 = v59;
                  v52 = v60;
                  v51 = v59;
                v54 = 0;
                v24 = operator new(0x18u);
                *(_DWORD *)v24 = v47;
                v26 = v48;
                *((_DWORD *)v24 + 1) = v48;
                if ( v26 )
                  v27 = (unsigned int *)(v26 + 8);
                      v28 = __ldrex(v27);
                    while ( __strex(v28 + 1, v27) );
                    v25 = *((_DWORD *)v24 + 5);
                    v23 = v51;
                    ++*v27;
                v29 = *(_QWORD *)&v49;
                v30 = *((_QWORD *)v24 + 1);
                v49 = *((_QWORD *)v24 + 1);
                v50 = HIDWORD(v30);
                *((_QWORD *)v24 + 1) = v29;
                LODWORD(v29) = v52;
                *((_DWORD *)v24 + 4) = v23;
                v52 = v25;
                *((_DWORD *)v24 + 5) = v29;
                v53 = v24;
                v54 = (void (*)(void))sub_CAF7B0;
                v55 = sub_CAF5E8;
                v45 = 0;
                v31 = *(void (__fastcall **)(char *, int, signed int))(v2 + 16);
                if ( v31 )
                  v31(&v44, v2 + 8, 2);
                  v46 = *(_DWORD *)(v2 + 20);
                  v45 = *(void (**)(void))(v2 + 16);
                MinecraftScreenController::_displayVRRemoveDeviceWarning(v1, (int)&v53);
                if ( v45 )
                  v45();
                if ( v54 )
                  v54();
                if ( v51 )
                  v51();
                v32 = v48;
                if ( v48 )
                  v33 = (unsigned int *)(v48 + 8);
                      v34 = __ldrex(v33);
                    while ( __strex(v34 - 1, v33) );
                    v34 = (*v33)--;
                  if ( v34 == 1 )
                    (*(void (**)(void))(*(_DWORD *)v32 + 12))();
                if ( v59 )
                  v59();
                v35 = v57;
                  v36 = (unsigned int *)(v57 + 8);
                      v37 = __ldrex(v36);
                    while ( __strex(v37 - 1, v36) );
                    v37 = (*v36)--;
                  if ( v37 == 1 )
                    (*(void (**)(void))(*(_DWORD *)v35 + 12))();
              }
              else if ( MinecraftScreenModel::useMinecraftVersionOfXBLUI(*(MinecraftScreenModel **)(v1 + 380)) == 1 )
                MinecraftScreenModel::navigateToXblFriendFinderScreen(*(MinecraftScreenModel **)(v1 + 380));
              else
                v17 = 0;
                v42 = 0;
                v18 = *(void (__fastcall **)(char *, int, signed int))(v2 + 16);
                if ( v18 )
                  v18(&v41, v2 + 8, 2);
                  v43 = *(_DWORD *)(v2 + 20);
                  v17 = *(_DWORD *)(v2 + 16);
                  v42 = *(void (**)(void))(v2 + 16);
                MinecraftScreenController::_showFriendFinder(v17, (int)&v41);
                if ( v42 )
                  v42();
            }
            else
            {
              if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
                v12 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
                v12 = &ServiceLocator<AppPlatform>::mDefaultService;
              v13 = (*(int (**)(void))(**(_DWORD **)v12 + 644))();
              v14 = "permissions.MultiplayerSessionsOnConsole";
              if ( !v13 )
                v14 = "permissions.AddFriends";
              sub_DA7364((void **)&v40, v14);
              MinecraftScreenController::_showInvalidPermissionsModal(v1, &v40);
              v15 = (void *)(v40 - 12);
              if ( (int *)(v40 - 12) != &dword_28898C0 )
                v38 = (unsigned int *)(v40 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v39 = __ldrex(v38);
                  while ( __strex(v39 - 1, v38) );
                else
                  v39 = (*v38)--;
                if ( v39 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v15);
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v4);
            while ( __strex(result - 1, v4) );
          else
            result = (*v4)--;
          if ( result == 1 )
            v16 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v16);
              while ( __strex(result - 1, v16) );
              result = (*v16)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return result;
        }
      }
      else
      {
        __clrex();
        result = v5;
    }
  }
  return result;
}


int __fastcall MinecraftScreenModel::getXboxLiveBlockList(MinecraftScreenModel *this, int a2)
{
  Social::XboxLiveUserManager *v2; // r4@1
  int v3; // r0@1
  int result; // r0@1
  int v5; // r4@1
  unsigned int *v6; // r1@2
  unsigned int *v7; // r5@8
  Social::User *v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  v2 = this;
  ClientInstance::getUser((ClientInstance *)&v8, *(_DWORD *)(a2 + 16));
  v3 = Social::User::getLiveUser(v8);
  result = Social::XboxLiveUserManager::getXboxLiveBlockList(v2, v3);
  v5 = v9;
  if ( v9 )
  {
    v6 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v6);
      while ( __strex(result - 1, v6) );
    }
    else
      result = (*v6)--;
    if ( result == 1 )
      v7 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v7);
        while ( __strex(result - 1, v7) );
      }
      else
        result = (*v7)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  return result;
}


void __fastcall MinecraftScreenModel::navigateToHowToPlayScreen(int a1, int a2)
{
  MinecraftScreenModel::navigateToHowToPlayScreen(a1, a2);
}


int __fastcall MinecraftScreenModel::fireglTFExportEvent(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getEventing(*(MinecraftGame **)(a1 + 12));
  return j_j_j__ZN17MinecraftEventing25fireRemixModelExportEventERK14glTFExportDataNS_13ExportOutcomeE(v5, v4, v3);
}


void __fastcall MinecraftScreenModel::closeRealmsWorld(int a1, __int64 *a2, int a3, int a4)
{
  MinecraftScreenModel::closeRealmsWorld(a1, a2, a3, a4);
}


int __fastcall MinecraftScreenModel::triggerRealmShared(int a1, const char **a2, int *a3, __int64 *a4)
{
  __int64 *v4; // r4@1
  int *v5; // r5@1
  const char **v6; // r6@1
  int v7; // r0@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = MinecraftGame::getEventing(*(MinecraftGame **)(a1 + 12));
  return j_j_j__ZN17MinecraftEventing20fireEventRealmSharedERKSsRKNS_14RealmShareModeERKN6Realms2IdE(v7, v6, v5, v4);
}


  if ( MinecraftScreenModel::isCreative(*(MinecraftScreenModel **)(v1 + 424)) == 1 )
{
  return 0;
}


void __fastcall MinecraftScreenModel::navigateToPermissionsScreen(int a1, int a2, __int64 a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r4@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r5@8
  unsigned int v8; // r0@10
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  v3 = *(_QWORD *)(a1 + 20);
  SceneFactory::createPermissionsScreen((unsigned __int64 *)&v9, SHIDWORD(v3), a3);
  SceneStack::pushScreen(v3, (int)&v9, 0);
  v4 = v10;
  if ( v10 )
  {
    v5 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
}


void __fastcall MinecraftScreenModel::getGlobalResourcePacksPath(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel::getGlobalResourcePacksPath(this, a2);
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v3 + 424)) == 1 )
{
    result = sub_21E94B4((void **)v2, (const char *)&unk_257BC67);
  }
  else
  {
    v6 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v3 + 424));
    result = (void *)(*(int (__fastcall **)(int *))(*(_DWORD *)v6 + 24))(v2);
  return result;
}


void __fastcall MinecraftScreenModel::getRealmsBlocklist(int a1, __int64 *a2, int a3)
{
  MinecraftScreenModel::getRealmsBlocklist(a1, a2, a3);
}


int __fastcall MinecraftScreenModel::cancelJoinGame(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = MinecraftGame::getEventing(*(MinecraftGame **)(a1 + 12));
  MinecraftEventing::fireEventJoinCanceled(v4, v3);
  return j_j_j__ZN13MinecraftGame16requestLeaveGameEbb(*(MinecraftGame **)(v2 + 12), 0, 0);
}


int __fastcall MinecraftScreenModel::needPlatformConnectionBeforeXBLSignIn(MinecraftScreenModel *this)
{
  int v1; // r0@1

  v1 = ClientInstance::getUserManager(*((ClientInstance **)this + 4));
  return (*(int (**)(void))(*(_DWORD *)v1 + 64))();
}


signed int __fastcall MinecraftScreenModel::isUPnPCompleted(MinecraftScreenModel *this)
{
  Social::MultiplayerServiceManager *v1; // r0@1
  UPNPInterface *v2; // r0@1
  signed int v3; // r4@1

  v1 = (Social::MultiplayerServiceManager *)MinecraftGame::getMultiplayerServiceManager(*((MinecraftGame **)this + 3));
  v2 = (UPNPInterface *)Social::MultiplayerServiceManager::getUPnPInterface(v1);
  v3 = 0;
  if ( v2 && *((_DWORD *)UPNPInterface::getPortMappingv4(v2) + 66) != 1 )
    v3 = 1;
  return v3;
}


signed int __fastcall MinecraftScreenModel::canPickSkin(MinecraftScreenModel *this)
{
  SkinRepository *v1; // r0@1

  v1 = (SkinRepository *)MinecraftGame::getSkinRepository(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK14SkinRepository11canPickSkinEv(v1);
}


int __fastcall MinecraftScreenModel::handControlsHud(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r5@1
  signed int v2; // r6@1
  Options *v3; // r0@1
  unsigned __int8 v4; // r4@1
  int v5; // r0@1
  int result; // r0@2

  v1 = this;
  v2 = ClientInstance::isRealityFullVRMode(*((ClientInstance **)this + 4));
  v3 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v1 + 4));
  v4 = Options::getVRHandControlsHUD(v3);
  v5 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 4));
  if ( v2 == 1 )
    result = (*(_BYTE *)(v5 + 660) != 0) & v4;
  else
    result = 0;
  return result;
}


    if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 432), 1) )
{
      if ( MinecraftScreenModel::isLiveMultiplayerAllowed(*(MinecraftScreenModel **)(v1 + 432)) )
      {
        v6 = MainMenuScreenModel::getStoreSupportsSubscriptions(*(MainMenuScreenModel **)(v1 + 432));
        v7 = v6;
        if ( v6 )
          v7 = 2;
        v8 = MainMenuScreenModel::isRealmsTrialStoreOfferAvailable(*(_DWORD *)(v1 + 432), v6, v7, 1);
        v9 = *(_DWORD *)(v1 + 432);
        sub_21E94B4((void **)&v43, (const char *)&unk_257BC67);
        sub_21E94B4((void **)&v42, (const char *)&unk_257BC67);
        v44 = 0;
        sub_21E8AF4(&v45, &v43);
        sub_21E8AF4(&v46, &v42);
        v47 = 1;
        v48 = 0;
        v49 = v8;
        MainMenuScreenModel::navigateToRealmsCreateScreen(v9, (int)&v44);
        v10 = (void *)(v46 - 12);
        if ( (int *)(v46 - 12) != &dword_28898C0 )
        {
          v32 = (unsigned int *)(v46 - 4);
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
            j_j_j_j__ZdlPv_9(v10);
        }
        v11 = (void *)(v45 - 12);
        if ( (int *)(v45 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v45 - 4);
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        v12 = (void *)(v42 - 12);
        if ( (int *)(v42 - 12) != &dword_28898C0 )
          v36 = (unsigned int *)(v42 - 4);
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        v13 = (void *)(v43 - 12);
        if ( (int *)(v43 - 12) == &dword_28898C0 )
          return 0;
        v14 = (unsigned int *)(v43 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          goto LABEL_69;
LABEL_68:
        v15 = (*v14)--;
LABEL_69:
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
        return 0;
      }
      MinecraftScreenController::_showLiveMultiplayerModal((MinecraftScreenController *)v1);
    }
    else
    {
      MinecraftScreenController::_showNoWifiModal((MinecraftScreenController *)v1);
    return 0;
  }
  if ( MinecraftScreenModel::tryNavigateToXblFirstLaunchScreen(v5) )
    return 8;
  MinecraftScreenController::_getWeakPtrToThis<WorldTemplatesScreenController>((int)&v40, v1);
  v16 = *(_QWORD *)&v40;
  if ( v41 )
  {
    v17 = (unsigned int *)(v41 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
      ++*v17;
  v39 = 0;
  v21 = operator new(8u);
  *v21 = v16;
  if ( HIDWORD(v16) )
    v22 = (unsigned int *)(HIDWORD(v16) + 8);
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      ++*v22;
  LODWORD(v24) = sub_12A1B68;
  v38 = v21;
  HIDWORD(v24) = sub_12A14DC;
  *(_QWORD *)&v39 = v24;
  MinecraftScreenController::_attemptSignIn(v1, (int)&v38);
  if ( v39 )
    v39();
    v25 = (unsigned int *)(HIDWORD(v16) + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v16) + 12))(HIDWORD(v16));
  v27 = v41;
    v28 = (unsigned int *)(v41 + 8);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      (*(void (**)(void))(*(_DWORD *)v27 + 12))();
  return 1;
}


void __fastcall MinecraftScreenModel::getRealmsWorld(int a1, __int64 *a2, int a3)
{
  MinecraftScreenModel::getRealmsWorld(a1, a2, a3);
}


signed int __fastcall MinecraftScreenModel::isDesktopScalingRules(MinecraftScreenModel *this)
{
  AppPlatform **v1; // r0@2
  int v2; // r0@4
  signed int v3; // r1@4

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v2 = AppPlatform::getUIScalingRules(*v1);
  v3 = 0;
  if ( !v2 )
    v3 = 1;
  return v3;
}


unsigned int __fastcall MinecraftScreenModel::silentSignin(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  void (__fastcall *v4)(int *, int, signed int); // r3@1
  unsigned int result; // r0@3
  int v6; // r4@5
  unsigned int *v7; // r1@6
  unsigned int *v8; // r5@12
  int v9; // [sp+0h] [bp-28h]@2
  int (*v10)(void); // [sp+8h] [bp-20h]@1
  int v11; // [sp+Ch] [bp-1Ch]@2
  Social::User *v12; // [sp+10h] [bp-18h]@1
  int v13; // [sp+14h] [bp-14h]@5

  v2 = a2;
  ClientInstance::getUser((ClientInstance *)&v12, *(_DWORD *)(a1 + 16));
  v3 = Social::User::getLiveUser(v12);
  v10 = 0;
  v4 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
  if ( v4 )
  {
    v4(&v9, v2, 2);
    v11 = *(_DWORD *)(v2 + 12);
    v10 = *(int (**)(void))(v2 + 8);
  }
  result = Social::XboxLiveUserManager::silentSignin(v3, (int)&v9);
  if ( v10 )
    result = v10();
  v6 = v13;
  if ( v13 )
    v7 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v7);
      while ( __strex(result - 1, v7) );
    }
    else
      result = (*v7)--;
    if ( result == 1 )
      v8 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v8);
        while ( __strex(result - 1, v8) );
      }
      else
        result = (*v8)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return result;
}


int __fastcall MinecraftScreenModel::deviceNeedsToBeRemovedForXblSignin(MinecraftScreenModel *this)
{
  int v1; // r0@1

  v1 = ClientInstance::getHoloInput(*((ClientInstance **)this + 4));
  return (*(int (**)(void))(*(_DWORD *)v1 + 88))();
}


_QWORD *__fastcall MinecraftScreenModel::sendDevConsoleMessage(int a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r0@1

  v2 = a2;
  v3 = ClientInstance::getGuiData(*(ClientInstance **)(a1 + 16));
  return j_j_j__ZN7GuiData24displayDevConsoleMessageERKSs(v3, v2);
}


void __fastcall MinecraftScreenModel::fetchScreenshotsPath(MinecraftScreenModel *this, int a2)
{
  Level *v2; // r4@1
  int v3; // r1@1

  v2 = this;
  v3 = ClientInstance::getLevel(*(ClientInstance **)(a2 + 16));
  if ( v3 )
    Level::getScreenshotsFolder(v2, v3);
  else
    *(_DWORD *)v2 = &unk_28898CC;
}


void *__fastcall MinecraftScreenModel::getExternalServerInfo(MinecraftScreenModel *this, int a2, unsigned int a3)
{
  ExternalServerFile *v3; // r5@1
  unsigned int v4; // r4@1
  int v5; // r0@1

  v3 = this;
  v4 = a3;
  v5 = MinecraftGame::getExternalServer(*(MinecraftGame **)(a2 + 12));
  return ExternalServerFile::getServerInfo(v3, v5, v4);
}


signed int __fastcall MinecraftScreenModel::isRealmsEnabled(MinecraftScreenModel *this)
{
  return 1;
}


void __fastcall MinecraftScreenModel::navigateToOptionsScreen(int a1, int a2, char a3)
{
  MinecraftScreenModel::navigateToOptionsScreen(a1, a2, a3);
}


void __fastcall MinecraftScreenModel::getStoreId(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel::getStoreId(this, a2);
}


void __fastcall MinecraftScreenModel::sendPlayerSkin(int a1, int **a2)
{
  MinecraftScreenModel::sendPlayerSkin(a1, a2);
}


int __fastcall MinecraftScreenModel::getActiveDirectoryAuthenticationState(MinecraftScreenModel *this)
{
  ActiveDirectoryIdentity *v1; // r0@1

  v1 = (ActiveDirectoryIdentity *)MinecraftGame::getActiveDirectoryIdentity(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK23ActiveDirectoryIdentity22getAuthenticationStateEv(v1);
}


signed int __fastcall MinecraftScreenModel::isPlatformNX(MinecraftScreenModel *this)
{
  void *v1; // r0@2
  int v2; // r0@4
  signed int v3; // r1@4

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  v2 = (*(int (**)(void))(**(_DWORD **)v1 + 440))();
  v3 = 0;
  if ( v2 == 12 )
    v3 = 1;
  return v3;
}


void __fastcall MinecraftScreenModel::navigateToXblConsoleSignInSucceededScreen(int a1, _DWORD *a2, int a3, char a4)
{
  int v4; // r8@1
  int v5; // r7@1
  int v6; // r5@1
  char v7; // r4@1
  void (__fastcall *v8)(char *, int, signed int); // r3@1
  _DWORD *v9; // r6@1
  int v10; // r0@6
  unsigned int *v11; // r1@7
  unsigned int v12; // r2@9
  int *v13; // r5@11
  int v14; // r4@13
  unsigned int *v15; // r1@14
  unsigned int v16; // r0@16
  unsigned int *v17; // r6@20
  unsigned int v18; // r0@22
  int v19; // r4@27
  unsigned int *v20; // r1@28
  unsigned int v21; // r0@30
  unsigned int *v22; // r5@34
  unsigned int v23; // r0@36
  int v24; // [sp+8h] [bp-38h]@6
  int v25; // [sp+Ch] [bp-34h]@6
  char v26; // [sp+10h] [bp-30h]@2
  void (*v27)(void); // [sp+18h] [bp-28h]@1
  int v28; // [sp+1Ch] [bp-24h]@2
  int v29; // [sp+20h] [bp-20h]@3
  int v30; // [sp+24h] [bp-1Ch]@6

  v4 = a1;
  v5 = *(_DWORD *)(a1 + 24);
  v6 = a3;
  v27 = 0;
  v7 = a4;
  v8 = *(void (__fastcall **)(char *, int, signed int))(a3 + 8);
  v9 = a2;
  if ( v8 )
  {
    v8(&v26, a3, 2);
    v28 = *(_DWORD *)(v6 + 12);
    v27 = *(void (**)(void))(v6 + 8);
  }
  SceneFactory::createXblConsoleSignInSucceededScreen((unsigned __int64 *)&v29, v5, v9, (int)&v26, v7);
  if ( v27 )
    v27();
  if ( v29 )
    v10 = *(_DWORD *)(v4 + 20);
    v24 = v29;
    v25 = v30;
    if ( v30 )
    {
      v11 = (unsigned int *)(v30 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 + 1, v11) );
      }
      else
        ++*v11;
    }
    SceneStack::pushScreen(v10, (int)&v24, 0);
    v13 = &v30;
    v14 = v25;
    if ( v25 )
      v15 = (unsigned int *)(v25 + 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
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
  else
  v19 = *v13;
  if ( *v13 )
    v20 = (unsigned int *)(v19 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    else
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
}


      if ( MinecraftScreenModel::isMultiPlayerClient(*(MinecraftScreenModel **)(v3 + 424))
{
            result = Abilities::getBool(v5, &Abilities::OPERATOR),
            result == 1) )
      {
        result = j_j_j__ZN20MinecraftScreenModel23sendSetDifficultyPacketE10Difficulty(*(_DWORD *)(v3 + 380), v2);
      }
    }
  }
  return result;
}


void __fastcall MinecraftScreenModel::navigateToRemixPreviewScreen(MinecraftScreenModel *this, const glTFExportData *a2)
{
  MinecraftScreenModel::navigateToRemixPreviewScreen(this, a2);
}


void __fastcall MinecraftScreenModel::getBuildDateISOString(MinecraftScreenModel *this)
{
  int *v1; // r4@1
  unsigned int v2; // r0@2
  char *v3; // r4@2
  int v4; // r6@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int *v7; // r0@12
  void *v8; // r0@17
  void *v9; // r0@18
  unsigned int *v10; // r2@19
  signed int v11; // r1@21
  void *v12; // r0@24
  unsigned int *v13; // r2@26
  signed int v14; // r1@28
  unsigned int *v15; // r2@30
  signed int v16; // r1@32
  int v17; // [sp+0h] [bp-40h]@2
  char *v18; // [sp+4h] [bp-3Ch]@2
  char *v19; // [sp+8h] [bp-38h]@2
  char *v20; // [sp+Ch] [bp-34h]@2
  int v21; // [sp+14h] [bp-2Ch]@2
  int v22; // [sp+18h] [bp-28h]@1

  v1 = (int *)this;
  Common::getBuildDateISOString((Common *)&v22);
  if ( *(_DWORD *)(v22 - 12) )
  {
    sub_DA7364((void **)&v21, "options.builddate.format");
    v2 = sub_DA7BFC(&v22, "T", 0, 1u);
    sub_DA7574((void **)&v17, &v22, 0, v2);
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v18 = (char *)operator new(4u);
    v20 = v18 + 4;
    v19 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v17,
                    (int)&v18,
                    (int)v18);
    I18n::get(v1, &v21, (unsigned __int64 *)&v18);
    v4 = (int)v19;
    v3 = v18;
    if ( v18 != v19 )
    {
      do
      {
        v7 = (int *)(*(_DWORD *)v3 - 12);
        if ( v7 != &dword_28898C0 )
        {
          v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
            j_j_j_j_j__ZdlPv_9(v7);
        }
        v3 += 4;
      }
      while ( v3 != (char *)v4 );
      v3 = v18;
    }
    if ( v3 )
      operator delete(v3);
    v8 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9(v8);
    v9 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v21 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j_j__ZdlPv_9(v9);
  }
  else
    sub_DA73B4(v1, (int *)&Util::EMPTY_STRING);
  v12 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
      __dmb();
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
}


int __fastcall MinecraftScreenModel::createJpegCommentWriter(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel *v2; // r4@1
  MinecraftGame *v3; // r6@1
  JpegCommentWriter *v4; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = *(MinecraftGame **)(a2 + 12);
  v4 = (JpegCommentWriter *)operator new(0x104u);
  result = JpegCommentWriter::JpegCommentWriter(v4, v3);
  *(_DWORD *)v2 = v4;
  return result;
}


int __fastcall MinecraftScreenModel::isVRComfortControlMode(MinecraftScreenModel *this)
{
  Options *v1; // r0@1

  v1 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  return j_j_j__ZNK7Options27getVROptionsComfortControlsEv(v1);
}


unsigned int __fastcall MinecraftScreenModel::isUserReady(MinecraftScreenModel *this)
{
  unsigned int v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  Social::User *v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  ClientInstance::getUser((ClientInstance *)&v8, *((_DWORD *)this + 4));
  v1 = Social::User::isReady(v8);
  v2 = v9;
  if ( v9 )
  {
    v3 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  return v1;
}


  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 380), 1) )
{
    result = 0;
  }
  else
  {
    v3 = 0;
    if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 380), 0) == 1 )
    {
      v3 = 0;
      if ( !*(_BYTE *)(v1 + 440) && RemixProgressTracker::getState(*(RemixProgressTracker **)(v1 + 424)) != 10 )
        v3 = 1;
    }
    result = v3;
  return result;
}


void __fastcall MinecraftScreenModel::getGlobalResourcePacksPath(MinecraftScreenModel *this, int a2)
{
  int v2; // r1@1

  v2 = *(_DWORD *)(a2 + 12);
  MinecraftGame::getGlobalResourcePacksPath(this);
}


  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 380), 1) )
{
    result = 0;
  }
  else
  {
    v3 = 0;
    if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 380), 0) == 1 )
    {
      v3 = 0;
      if ( !*(_BYTE *)(v1 + 440) && RemixProgressTracker::getState(*(RemixProgressTracker **)(v1 + 424)) != 10 )
        v3 = 1;
    }
    result = v3;
  return result;
}


BackgroundTask *__fastcall MinecraftScreenModel::setActiveDirectoryEulaAccepted(MinecraftScreenModel *this)
{
  ActiveDirectoryIdentity *v1; // r0@1

  v1 = (ActiveDirectoryIdentity *)MinecraftGame::getActiveDirectoryIdentity(*((MinecraftGame **)this + 3));
  return j_j_j__ZN23ActiveDirectoryIdentity15setEulaAcceptedEv(v1);
}


  if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)v1 + 106)) == 1 )
{
    *(_QWORD *)&v2 = *(_QWORD *)ContentManager::getSources(*((ContentManager **)v1 + 240));
    while ( v3 != v2 )
    {
      v4 = *v2;
      ++v2;
      (*(void (**)(void))(*(_DWORD *)v4 + 16))();
    }
  }
  v8 = 0;
  v5 = WorldSettingsScreenController::_copyResourcePacks((int)v1, (int)&v7);
  if ( v8 )
    v8();
  if ( !v5 )
    MinecraftScreenModel::leaveScreen(*((MinecraftScreenModel **)v1 + 106));
  return 0;
}


void __fastcall MinecraftScreenModel::sendPlayerSkin(int a1, int **a2)
{
  int v2; // r4@1
  int **v3; // r5@1
  int v4; // r7@1
  int **v5; // ST34_4@2
  SkinRepositoryClientInterface *v6; // r0@2
  Skin *v7; // r5@2
  mce::TextureGroup *v8; // r0@2
  __int64 *v9; // ST30_4@2
  mce::TextureGroup *v10; // r0@2
  __int64 *v11; // ST2C_4@2
  int v12; // r6@2
  int v13; // ST24_4@2
  unsigned int v14; // ST28_4@2
  unsigned int v15; // r7@2
  int *v16; // r9@2
  int *v17; // r8@2
  char *v18; // r0@2
  int v19; // r1@2
  void *v20; // r0@2
  void *v21; // r0@3
  int v22; // r0@4
  int v23; // r4@4
  char *v24; // r0@4
  void *v25; // r0@4
  unsigned int *v26; // r2@6
  signed int v27; // r1@8
  unsigned int *v28; // r2@10
  signed int v29; // r1@12
  unsigned int *v30; // r2@14
  signed int v31; // r1@16
  int v32; // [sp+38h] [bp-88h]@2
  int v33; // [sp+3Ch] [bp-84h]@2
  char v34; // [sp+40h] [bp-80h]@2
  int v35; // [sp+94h] [bp-2Ch]@2

  v2 = a1;
  v3 = a2;
  v4 = ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 16));
  if ( v4 )
  {
    v5 = v3;
    v6 = (SkinRepositoryClientInterface *)ClientInstance::getSkinRepositoryClientInterface(*(ClientInstance **)(v2 + 16));
    v7 = SkinRepositoryClientInterface::getSelectedSkinOrDefault(v6, 0);
    v8 = (mce::TextureGroup *)ClientInstance::getTextures(*(ClientInstance **)(v2 + 16));
    v9 = (__int64 *)Skin::syncTextureData(v7, v8);
    v10 = (mce::TextureGroup *)ClientInstance::getTextures(*(ClientInstance **)(v2 + 16));
    v11 = (__int64 *)Skin::syncCapeTextureData(v7, v10);
    Skin::getSerializedGeometryData((Skin *)&v35, (SkinPack **)v7);
    v12 = *(_DWORD *)(v4 + 4572);
    v13 = *(_DWORD *)(v4 + 4568);
    v14 = *(_DWORD *)(v4 + 4564);
    v15 = *(_DWORD *)(v4 + 4560);
    v16 = (int *)Skin::getSerializable(v7);
    v17 = (int *)Skin::getGeometryName(v7);
    v18 = Skin::getLocName(v7);
    I18n::get(&v33, (int **)v18);
    I18n::get(&v32, v5);
    PlayerSkinPacket::PlayerSkinPacket(
      (int)&v34,
      v19,
      __PAIR__(v14, v15),
      v13,
      v12,
      v16,
      v9,
      v11,
      v17,
      &v35,
      &v33,
      &v32);
    v20 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
    {
      v26 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
      }
      else
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9(v20);
    }
    v21 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v33 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j_j__ZdlPv_9(v21);
    v22 = ClientInstance::getPacketSender(*(ClientInstance **)(v2 + 16));
    (*(void (**)(void))(*(_DWORD *)v22 + 8))();
    v23 = MinecraftGame::getEventing(*(MinecraftGame **)(v2 + 12));
    v24 = Skin::getSerializable(v7);
    MinecraftEventing::fireEventSkinChanged(v23, (const char **)v24);
    PlayerSkinPacket::~PlayerSkinPacket((PlayerSkinPacket *)&v34);
    v25 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v35 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j_j__ZdlPv_9(v25);
  }
}


void __fastcall MinecraftScreenModel::getCurrentGamertag(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel::getCurrentGamertag(this, a2);
}


int __fastcall MinecraftScreenModel::fireEventHowToPlayTopicChanged(int a1, const char **a2, int a3)
{
  int v3; // r4@1
  const char **v4; // r5@1
  int v5; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getEventing(*(MinecraftGame **)(a1 + 12));
  return j_j_j__ZN17MinecraftEventing30fireEventHowToPlayTopicChangedERKSs9InputMode(v5, v4, v3);
}


void __fastcall MinecraftScreenModel::getLevelData(MinecraftScreenModel *this, int a2)
{
  int v2; // r5@1
  MinecraftScreenModel *v3; // r4@1
  int v4; // r0@1
  Minecraft *v5; // r0@1
  int v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  v4 = ClientInstance::getLevel(*(ClientInstance **)(a2 + 16));
  Level::getLevelId((Level *)&v10, v4);
  v5 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v2 + 16));
  v6 = Minecraft::getLevelSource(v5);
  (*(void (__fastcall **)(MinecraftScreenModel *))(*(_DWORD *)v6 + 20))(v3);
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
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
      j_j_j_j_j__ZdlPv_9(v7);
  }
}


int __fastcall MinecraftScreenModel::getLevelData(int a1, int a2)
{
  int v2; // r5@1
  Minecraft *v3; // r0@1
  int v4; // r0@1

  v2 = a1;
  v3 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(a2 + 16));
  v4 = Minecraft::getLevelSource(v3);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v2);
}


int __fastcall MinecraftScreenModel::setRefreshPendingInvites(MinecraftScreenModel *this, bool a2)
{
  bool v2; // r4@1
  ToastManager *v3; // r0@1

  v2 = a2;
  v3 = (ToastManager *)ClientInstance::getToastManager(*((ClientInstance **)this + 4));
  return j_j_j__ZN12ToastManager24setRefreshPendingInvitesEb(v3, v2);
}


void __fastcall MinecraftScreenModel::navigateToRemixPreviewScreen(MinecraftScreenModel *this, const glTFExportData *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r4@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r5@8
  unsigned int v7; // r0@10
  int v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  v2 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createRemixPreviewScreen((SceneFactory *)&v8, (const glTFExportData *)HIDWORD(v2), (int)a2);
  SceneStack::pushScreen(v2, (int)&v8, 0);
  v3 = v9;
  if ( v9 )
  {
    v4 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
}


  if ( MinecraftScreenModel::isCreative(*(MinecraftScreenModel **)(v7 + 424))
{
  {
    v9 = ContainerManagerController::getItemInstance(*(_DWORD *)(v7 + 628), v6, v5);
    v10 = v9;
    v11 = *(_BYTE *)(v9 + 15);
    v12 = v11 == 0;
    if ( v11 )
      v12 = *(_DWORD *)v10 == 0;
    if ( v12 || ItemInstance::isNull((ItemInstance *)v10) || !*(_BYTE *)(v10 + 14) )
    {
      sub_119C854(v4, (int *)&Util::EMPTY_STRING);
    }
    else
      v13 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v7 + 424));
      v14 = *(_BYTE *)(v7 + 516);
      (*(void (__fastcall **)(int *))(*(_DWORD *)v13 + 12))(v4);
  }
  else
    v8 = (int **)CraftingContainerManagerController::getExpandoItemGroupName(*(_DWORD *)(v7 + 628), (int *)v6, v5);
    I18n::get(v4, v8);
}


void __fastcall MinecraftScreenModel::setRealmsShowFriendInvitesOnly(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel *v2; // r5@1
  int v3; // r4@1
  Options *v4; // r0@1
  Options *v5; // r0@1

  v2 = this;
  v3 = a2;
  v4 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  Options::setRealmsInviteShowFriendsOption(v4, v3);
  v5 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v2 + 4));
  j_j_j__ZN7Options4saveEb(v5, 0);
}


void __fastcall MinecraftScreenModel::leaveRealmsWorld(int a1, __int64 *a2, int a3)
{
  MinecraftScreenModel::leaveRealmsWorld(a1, a2, a3);
}


int __fastcall MinecraftScreenModel::wasXBLSessionCreated(MinecraftScreenModel *this)
{
  int v1; // r0@1

  v1 = MinecraftGame::getMultiplayerServiceManager(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK6Social25MultiplayerServiceManager20getSessionWasCreatedENS_28MultiplayerServiceIdentifierE(v1, 0);
}


void __fastcall MinecraftScreenModel::getSubscriptionDetails(int a1, __int64 *a2, int a3)
{
  MinecraftScreenModel::getSubscriptionDetails(a1, a2, a3);
}


int __fastcall MinecraftScreenModel::getServerSettingsId(MinecraftScreenModel *this)
{
  GuiData *v1; // r0@1

  v1 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 4));
  return j_j_j__ZN7GuiData19getServerSettingsIdEv(v1);
}


void __fastcall MinecraftScreenModel::generateFilePickerSettingsForExport(int a1, int a2, int *a3, int *a4, int a5)
{
  int v5; // r4@1
  int v6; // r8@1
  int *v7; // r5@1
  int *v8; // r7@1
  int v9; // r0@1
  void *v10; // r6@1
  int v11; // r0@1
  int v12; // r3@1
  void (*v13)(void); // r3@1
  int v14; // r1@1
  void *v15; // r0@3
  void *v16; // r0@4
  void *v17; // r0@5
  void *v18; // r0@6
  unsigned int *v19; // r2@8
  signed int v20; // r1@10
  unsigned int *v21; // r2@12
  signed int v22; // r1@14
  unsigned int *v23; // r2@16
  signed int v24; // r1@18
  unsigned int *v25; // r2@20
  signed int v26; // r1@22
  int v27; // [sp+4h] [bp-4Ch]@1
  int v28; // [sp+8h] [bp-48h]@1
  char v29; // [sp+Ch] [bp-44h]@1
  int v30; // [sp+10h] [bp-40h]@1
  int v31; // [sp+14h] [bp-3Ch]@1
  int v32; // [sp+18h] [bp-38h]@1
  char v33; // [sp+1Ch] [bp-34h]@1
  void *v34; // [sp+20h] [bp-30h]@1
  int v35; // [sp+24h] [bp-2Ch]@1
  void (*v36)(void); // [sp+28h] [bp-28h]@1
  int v37; // [sp+2Ch] [bp-24h]@1

  v5 = a2;
  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = MinecraftGame::getLevelArchiver(*(MinecraftGame **)(a2 + 12));
  LevelArchiver::generateFilePickerSettings(v6, v9, a5);
  FilePickerSettings::setDefaultFileName(v6, v7);
  FilePickerSettings::setPickerType(v6, 2);
  sub_DA73B4(&v27, v8);
  sub_DA73B4(&v28, v7);
  v29 = a5;
  v30 = v5;
  sub_DA73B4(&v31, &v27);
  sub_DA73B4(&v32, &v28);
  v33 = v29;
  v36 = 0;
  v10 = operator new(0x10u);
  *(_DWORD *)v10 = v30;
  sub_DA73B4((int *)v10 + 1, &v31);
  sub_DA73B4((int *)v10 + 2, &v32);
  v11 = v6 + 32;
  *((_BYTE *)v10 + 12) = v33;
  v34 = v10;
  v12 = v35;
  *(_QWORD *)&v34 = *(_QWORD *)(v6 + 32);
  *(_DWORD *)v11 = v10;
  *(_DWORD *)(v11 + 4) = v12;
  v13 = *(void (**)(void))(v6 + 40);
  *(_DWORD *)(v6 + 40) = sub_CEF730;
  v14 = *(_DWORD *)(v6 + 44);
  v36 = v13;
  v37 = v14;
  *(_DWORD *)(v6 + 44) = sub_CEED78;
  if ( v13 )
    v13();
  v15 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  }
  v16 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v31 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v28 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v27 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
}


void __fastcall MinecraftScreenModel::joinRealmsWorld(int a1, __int64 *a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  __int64 *v6; // r7@1
  int v7; // r4@1
  void (__fastcall *v8)(char *, int, signed int); // r3@1
  void (__fastcall *v9)(int *, int, signed int); // r3@3
  int v10; // [sp+0h] [bp-40h]@4
  void (*v11)(void); // [sp+8h] [bp-38h]@3
  int v12; // [sp+Ch] [bp-34h]@4
  char v13; // [sp+10h] [bp-30h]@2
  void (*v14)(void); // [sp+18h] [bp-28h]@1
  int v15; // [sp+1Ch] [bp-24h]@2
  __int64 v16; // [sp+20h] [bp-20h]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v16 = *v6;
  v14 = 0;
  v8 = *(void (__fastcall **)(char *, int, signed int))(v5 + 8);
  if ( v8 )
  {
    v8(&v13, v5, 2);
    v15 = *(_DWORD *)(v5 + 12);
    v14 = *(void (**)(void))(v5 + 8);
  }
  v11 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v9 )
    v9(&v10, v4, 2);
    v12 = *(_DWORD *)(v4 + 12);
    v11 = *(void (**)(void))(v4 + 8);
  RealmsAPI::joinWorld(v7, &v16, (int)&v13, (int)&v10);
  if ( v11 )
    v11();
  if ( v14 )
    v14();
}


void __fastcall MinecraftScreenModel::makeBackupOfLevel(MinecraftScreenModel *this, const LevelSummary *a2)
{
  const LevelSummary *v2; // r4@1
  MinecraftScreenModel *v3; // r5@1
  const void **v4; // r0@1
  void *v5; // r0@1
  void *v6; // r0@2
  Minecraft *v7; // r0@3
  int v8; // r5@3
  const void **v9; // r0@3
  void *v10; // r0@3
  void *v11; // r0@4
  void *v12; // r0@7
  void (__fastcall *v13)(int, int *, int *); // r6@8
  void *v14; // r0@8
  void *v15; // r0@9
  char *v16; // r0@10
  char *v17; // r0@11
  unsigned int *v18; // r2@13
  signed int v19; // r1@15
  unsigned int *v20; // r2@17
  signed int v21; // r1@19
  unsigned int *v22; // r2@21
  signed int v23; // r1@23
  unsigned int *v24; // r2@25
  signed int v25; // r1@27
  unsigned int *v26; // r2@29
  signed int v27; // r1@31
  unsigned int *v28; // r2@33
  signed int v29; // r1@35
  unsigned int *v30; // r2@37
  signed int v31; // r1@39
  unsigned int *v32; // r2@41
  signed int v33; // r1@43
  unsigned int *v34; // r2@45
  signed int v35; // r1@47
  int v36; // [sp+0h] [bp-60h]@8
  int v37; // [sp+4h] [bp-5Ch]@8
  int v38; // [sp+8h] [bp-58h]@5
  int v39; // [sp+Ch] [bp-54h]@5
  int v40; // [sp+10h] [bp-50h]@5
  const void *v41; // [sp+14h] [bp-4Ch]@5
  int v42; // [sp+18h] [bp-48h]@5
  char v43; // [sp+1Ch] [bp-44h]@5
  void (*v44)(void); // [sp+24h] [bp-3Ch]@5
  int v45; // [sp+30h] [bp-30h]@3
  int v46; // [sp+34h] [bp-2Ch]@3
  const void *v47; // [sp+38h] [bp-28h]@3
  int v48; // [sp+40h] [bp-20h]@1
  int v49; // [sp+44h] [bp-1Ch]@1
  char *v50; // [sp+48h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_DA7364((void **)&v48, "generator.old");
  I18n::get(&v49, (int **)&v48);
  v4 = sub_DA7948((const void **)&v49, 0, (unsigned int)"-", (_BYTE *)1);
  v50 = (char *)*v4;
  *v4 = &unk_28898CC;
  v5 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v49 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v48 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  v7 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)v3 + 4));
  v8 = Minecraft::getLevelSource(v7);
  (*(void (__fastcall **)(int *, int))(*(_DWORD *)v8 + 64))(&v45, v8);
  sub_DA73B4(&v46, &v45);
  sub_DA73D4((const void **)&v46, "/", 1u);
  v9 = sub_DA7564((const void **)&v46, (const void **)v2);
  v47 = *v9;
  *v9 = &unk_28898CC;
  v10 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v46 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v45 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  v41 = v47;
  v42 = *((_DWORD *)v47 - 3);
  sub_DA73B4(&v38, (int *)&v47);
  sub_DA7564((const void **)&v38, (const void **)&v50);
  v39 = v38;
  v40 = *(_DWORD *)(v38 - 12);
  Core::FileSystem::copyDirectoryAndContentsRecursively((int)&v43, (__int64 *)&v41, (__int64 *)&v39);
  if ( v44 )
    v44();
  v12 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v38 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  v13 = *(void (__fastcall **)(int, int *, int *))(*(_DWORD *)v8 + 44);
  sub_DA73B4(&v37, (int *)v2);
  sub_DA7564((const void **)&v37, (const void **)&v50);
  sub_DA73B4(&v36, (int *)v2 + 1);
  sub_DA7564((const void **)&v36, (const void **)&v50);
  v13(v8, &v37, &v36);
  v14 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v36 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v37 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  v16 = (char *)v47 - 12;
  if ( (int *)((char *)v47 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)((char *)v47 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  v17 = v50 - 12;
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v50 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
}


void __fastcall MinecraftScreenModel::requestClientLeaveGame(MinecraftScreenModel *this, int a2, bool a3)
{
  j_j_j__ZN14ClientInstance16requestLeaveGameEbb(*((ClientInstance **)this + 4), a2, a3);
}


int __fastcall MinecraftScreenModel::requiresXBLSigninToPlay(MinecraftScreenModel *this)
{
  void *v1; // r0@2

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  return (*(int (**)(void))(**(_DWORD **)v1 + 640))();
}


unsigned int __fastcall MinecraftScreenModel::getProfile(int a1, _BYTE **a2, int a3)
{
  _BYTE **v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  unsigned int result; // r0@3
  int v8; // r4@5
  unsigned int *v9; // r1@6
  unsigned int *v10; // r5@12
  int v11; // [sp+0h] [bp-28h]@2
  int (*v12)(void); // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@2
  Social::User *v14; // [sp+10h] [bp-18h]@1
  int v15; // [sp+14h] [bp-14h]@5

  v3 = a2;
  v4 = a3;
  ClientInstance::getUser((ClientInstance *)&v14, *(_DWORD *)(a1 + 16));
  v5 = Social::User::getLiveUser(v14);
  v12 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v6 )
  {
    v6(&v11, v4, 2);
    v13 = *(_DWORD *)(v4 + 12);
    v12 = *(int (**)(void))(v4 + 8);
  }
  result = Social::XboxLiveUserManager::getProfile(v5, v3, (int)&v11);
  if ( v12 )
    result = v12();
  v8 = v15;
  if ( v15 )
    v9 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
    }
    else
      result = (*v9)--;
    if ( result == 1 )
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
      }
      else
        result = (*v10)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return result;
}


unsigned int __fastcall MinecraftScreenModel::muteUser(int a1, int *a2, int a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  int (__cdecl *v6)(__int64 *, __int64 *); // r1@1
  unsigned int result; // r0@1
  int v8; // r4@3
  unsigned int *v9; // r1@4
  unsigned int *v10; // r5@10
  __int64 v11; // [sp+0h] [bp-28h]@1
  int (__cdecl *v12)(__int64 *, __int64 *); // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1
  Social::User *v14; // [sp+10h] [bp-18h]@1
  int v15; // [sp+14h] [bp-14h]@3

  v3 = a2;
  v4 = a3;
  ClientInstance::getUser((ClientInstance *)&v14, *(_DWORD *)(a1 + 16));
  v5 = Social::User::getLiveUser(v14);
  v11 = *(_QWORD *)v4;
  v6 = *(int (__cdecl **)(__int64 *, __int64 *))(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v12 = v6;
  v13 = *(_DWORD *)(v4 + 12);
  result = Social::XboxLiveUserManager::muteUser(v5, v3, (int)&v11);
  if ( v12 )
    result = v12(&v11, &v11);
  v8 = v15;
  if ( v15 )
  {
    v9 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
    }
    else
      result = (*v9)--;
    if ( result == 1 )
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
      }
      else
        result = (*v10)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  return result;
}


void __fastcall MinecraftScreenModel::navigateToGamePlayScreen(MinecraftScreenModel *this)
{
  MinecraftScreenModel::navigateToGamePlayScreen(this);
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  return result;
}


signed int __fastcall MinecraftScreenModel::isGearVR(MinecraftScreenModel *this)
{
  int v1; // r0@1
  void *v2; // r0@3
  signed int v3; // r4@4
  void *v4; // r0@8
  unsigned int *v6; // r12@10
  signed int v7; // r1@12
  int v8; // [sp+4h] [bp-1Ch]@6

  v1 = ClientInstance::getHoloInput(*((ClientInstance **)this + 4));
  if ( (*(int (**)(void))(*(_DWORD *)v1 + 44))() == 1 )
  {
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v2 = &ServiceLocator<AppPlatform>::mDefaultService;
    (*(void (__fastcall **)(int *))(**(_DWORD **)v2 + 552))(&v8);
    v3 = 0;
    if ( !sub_DA7374((const void **)&v8, "gear_vr") )
      v3 = 1;
    v4 = (void *)(v8 - 12);
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
        j_j_j_j_j__ZdlPv_9(v4);
    }
  }
  else
  return v3;
}


signed int __fastcall MinecraftScreenModel::isAddFriendAllowed(MinecraftScreenModel *this)
{
  Social::XboxLiveUserManager *v1; // r0@1
  signed int v2; // r4@1
  int v3; // r5@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r6@8
  unsigned int v7; // r0@10
  Social::User *v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  ClientInstance::getUser((ClientInstance *)&v9, *((_DWORD *)this + 4));
  v1 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v9);
  v2 = Social::XboxLiveUserManager::checkPrivilegeSilently(v1, 255);
  v3 = v10;
  if ( v10 )
  {
    v4 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  return v2;
}


signed int __fastcall MinecraftScreenModel::isAchievementDataCached(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r7@8
  unsigned int v6; // r0@10
  Social::XboxLiveUserManager *v7; // r0@16
  signed int v8; // r4@16
  int v9; // r5@16
  unsigned int *v10; // r1@17
  unsigned int v11; // r0@19
  unsigned int *v12; // r6@24
  unsigned int v13; // r0@26
  Social::User *v15; // [sp+4h] [bp-24h]@16
  int v16; // [sp+8h] [bp-20h]@16
  char v17; // [sp+Ch] [bp-1Ch]@1
  int v18; // [sp+10h] [bp-18h]@1

  v1 = this;
  ClientInstance::getUser((ClientInstance *)&v17, *((_DWORD *)this + 4));
  v2 = *(_QWORD *)&v17;
  if ( v18 )
  {
    v3 = (unsigned int *)(v18 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(HIDWORD(v2) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 8))(HIDWORD(v2));
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  }
  if ( (_DWORD)v2 )
    ClientInstance::getUser((ClientInstance *)&v15, *((_DWORD *)v1 + 4));
    v7 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v15);
    v8 = Social::XboxLiveUserManager::isAchievementDataCached(v7);
    v9 = v16;
    if ( v16 )
      v10 = (unsigned int *)(v16 + 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        v12 = (unsigned int *)(v9 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  else
    v8 = 0;
  return v8;
}


int __fastcall MinecraftScreenModel::getCurrentToast(MinecraftScreenModel *this)
{
  ToastManager *v1; // r0@1

  v1 = (ToastManager *)ClientInstance::getToastManager(*((ClientInstance **)this + 4));
  return j_j_j__ZNK12ToastManager15getCurrentToastEv(v1);
}


int __fastcall MinecraftScreenModel::hasLocalPlayer(MinecraftScreenModel *this)
{
  Entity *v1; // r0@1
  int result; // r0@2

  v1 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  if ( v1 )
    result = Entity::isRemoved(v1) ^ 1;
  else
    result = 0;
  return result;
}


void __fastcall MinecraftScreenModel::requestClientLeaveGame(MinecraftScreenModel *this, int a2, bool a3)
{
  MinecraftScreenModel::requestClientLeaveGame(this, a2, a3);
}


int __fastcall MinecraftScreenModel::supportsVibration(MinecraftScreenModel *this)
{
  void *v1; // r0@2

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  return (*(int (**)(void))(**(_DWORD **)v1 + 364))();
}


int __fastcall MinecraftScreenModel::sendSetDifficultyPacket(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  _DWORD *v4; // r0@1
  _DWORD *v5; // r4@1
  int v6; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = operator new(0x14u);
  v5 = v4;
  v4[1] = 2;
  v4[2] = 1;
  *((_BYTE *)v4 + 12) = 0;
  *v4 = &off_26D8278;
  v4[4] = v3;
  v6 = ClientInstance::getPacketSender(*(ClientInstance **)(v2 + 16));
  (*(void (**)(void))(*(_DWORD *)v6 + 8))();
  return (*(int (__fastcall **)(_DWORD *))(*v5 + 4))(v5);
}


void __fastcall MinecraftScreenModel::getPrimaryLocalPlayerUUIDString(MinecraftScreenModel *this, int a2)
{
  mce::UUID *v2; // r4@1
  ClientInstance *v3; // r0@1

  v2 = this;
  v3 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(a2 + 12));
  if ( ClientInstance::getLocalPlayer(v3) )
    mce::UUID::asString(v2);
  else
    sub_DA73B4((int *)v2, (int *)&Util::EMPTY_STRING);
}


void __fastcall MinecraftScreenModel::getRealmsOnlinePlayers(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void (__fastcall *v4)(int *, int, signed int); // r3@1
  int v5; // [sp+0h] [bp-20h]@2
  void (*v6)(void); // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@2

  v2 = a2;
  v3 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v6 = 0;
  v4 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
  if ( v4 )
  {
    v4(&v5, v2, 2);
    v7 = *(_DWORD *)(v2 + 12);
    v6 = *(void (**)(void))(v2 + 8);
  }
  RealmsAPI::getOnlinePlayers(v3, (int)&v5);
  if ( v6 )
    v6();
}


void __fastcall MinecraftScreenModel::showPlayerProfile(int a1, int *a2, __int64 a3, __int64 a4)
{
  ClientInstance::showPlayerProfile(*(_DWORD *)(a1 + 16), a2, a3, a4);
}


signed int __fastcall MinecraftScreenModel::getTipText(int a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r0@1

  v2 = a2;
  v3 = ClientInstance::getGuiData(*(ClientInstance **)(a1 + 16));
  return j_j_j__ZN7GuiData13getTipMessageERSs(v3, v2);
}


  if ( MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v1 + 380)) )
{
    if ( !HIDWORD(v2) )
      goto LABEL_61;
    v5 = *(_DWORD *)(HIDWORD(v2) + 4);
    v6 = (unsigned int *)(HIDWORD(v2) + 4);
    while ( v5 )
    {
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
      {
        v8 = __strex(v5 + 1, v6);
        v5 = v7;
        if ( !v8 )
        {
          __dmb();
          v9 = (_DWORD)v2 == 0;
          if ( (_DWORD)v2 )
            v9 = *v6 == 0;
          if ( !v9 )
            ConvertPurchasesToXBLScreenController::_convertEntitlementsToXBL((ConvertPurchasesToXBLScreenController *)v2);
          if ( &pthread_create )
          {
            __dmb();
            do
              v10 = __ldrex(v6);
            while ( __strex(v10 - 1, v6) );
          }
          else
            v10 = (*v6)--;
          if ( v10 == 1 )
            v19 = (unsigned int *)(HIDWORD(v2) + 8);
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 8))(HIDWORD(v2));
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
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
          break;
        }
      }
      else
        __clrex();
    }
    v17 = (unsigned int *)(HIDWORD(v2) + 8);
    goto LABEL_54;
  }
  if ( HIDWORD(v2) )
  {
    v11 = (unsigned int *)(HIDWORD(v2) + 8);
    if ( &pthread_create )
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
    else
      ++*v11;
  v27 = 0;
  v13 = operator new(8u);
  *v13 = v2;
    v14 = (unsigned int *)(HIDWORD(v2) + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  LODWORD(v16) = sub_1163FF0;
  v26 = v13;
  HIDWORD(v16) = sub_1163EA4;
  *(_QWORD *)&v27 = v16;
  MinecraftScreenController::_attemptSignIn(v1, (int)&v26);
  if ( v27 )
    v27();
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
LABEL_54:
        v21 = __ldrex(v17);
      while ( __strex(v21 - 1, v17) );
      v21 = (*v17)--;
    if ( v21 == 1 )
LABEL_61:
  v22 = v29;
  if ( v29 )
    v23 = (unsigned int *)(v29 + 8);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      (*(void (**)(void))(*(_DWORD *)v22 + 12))();
  return 0;
}


signed int __fastcall MinecraftScreenModel::isOnSceneStack(int a1, const void **a2)
{
  int v2; // r5@1
  const void **v3; // r4@1
  unsigned __int64 *v4; // r0@1
  signed int result; // r0@2
  unsigned __int64 *v6; // r0@3

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int64 *)ClientInstance::getClientSceneStack(*(ClientInstance **)(a1 + 16));
  if ( SceneStack::isOnSceneStack(v4, v3) )
  {
    result = 1;
  }
  else
    v6 = (unsigned __int64 *)MinecraftGame::getMainSceneStack(*(MinecraftGame **)(v2 + 12));
    result = SceneStack::isOnSceneStack(v6, v3);
  return result;
}


int __fastcall MinecraftScreenModel::getNextToast(MinecraftScreenModel *this)
{
  ToastManager *v1; // r0@1

  v1 = (ToastManager *)ClientInstance::getToastManager(*((ClientInstance **)this + 4));
  return j_j_j__ZN12ToastManager12getNextToastEv(v1);
}


    && MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424))
{
  {
    MinecraftScreenModel::navigateToStartScreen(*(MinecraftScreenModel **)(v1 + 424));
  }
  return 0;
}


signed int __fastcall MinecraftScreenModel::isResourceLoadingFinished(MinecraftScreenModel *this)
{
  int v1; // r0@1

  v1 = MinecraftGame::getResourceLoadManager(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK19ResourceLoadManager11allCompleteE16ResourceLoadType(v1, -1);
}


void __fastcall MinecraftScreenModel::setNumberOfFriendsRealms(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel *v2; // r5@1
  int v3; // r4@1
  Options *v4; // r0@1
  Options *v5; // r0@1

  v2 = this;
  v3 = a2;
  v4 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  Options::setNumberOfFriendsRealms(v4, v3);
  v5 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v2 + 4));
  j_j_j__ZN7Options4saveEb(v5, 0);
}


int __fastcall MinecraftScreenModel::supportsMSAA(MinecraftScreenModel *this)
{
  void *v1; // r0@2

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  return (*(int (**)(void))(**(_DWORD **)v1 + 152))();
}


int __fastcall MinecraftScreenModel::saveLevelData(int a1, int a2, LevelData *a3)
{
  int v3; // r6@1
  LevelData *v4; // r10@1
  int v5; // r9@1
  Minecraft *v6; // r0@1
  int v7; // r0@1
  int v8; // r8@1
  int v9; // r11@1
  Minecraft *v10; // r0@1
  int v11; // r0@1
  Minecraft *v12; // r0@1
  int v13; // r0@1
  int v14; // r4@1
  void (__fastcall *v15)(int *, int, int, char *); // r5@1
  char *v16; // r7@1
  int v17; // r4@1
  void *v18; // r0@1
  int v19; // r4@3
  int v20; // r1@5
  _DWORD *v21; // r8@5
  Abilities *v22; // r9@6
  unsigned int *v23; // r2@7
  signed int v24; // r1@9
  unsigned int *v25; // r2@15
  signed int v26; // r1@17
  Abilities *v27; // r5@18
  unsigned int *v28; // r2@19
  signed int v29; // r1@21
  signed int v30; // r1@31
  CompoundTag *v31; // r4@36
  int v32; // r4@37
  void *v33; // r0@39
  CompoundTag *v34; // r9@41
  int v35; // r0@41
  char v36; // r9@41
  void *v37; // r0@43
  unsigned int *v38; // r2@44
  CompoundTag *v39; // r9@49
  int v40; // r0@49
  void *v41; // r0@49
  _DWORD *v42; // r6@53
  unsigned int *v43; // r2@55
  signed int v44; // r1@57
  int *v45; // r0@63
  int v46; // r0@68
  int result; // r0@69
  int v48; // [sp+14h] [bp-23Ch]@5
  int v49; // [sp+1Ch] [bp-234h]@6
  char v50; // [sp+34h] [bp-21Ch]@6
  _DWORD *v51; // [sp+38h] [bp-218h]@5
  int v52; // [sp+40h] [bp-210h]@19
  int v53; // [sp+48h] [bp-208h]@41
  int v54; // [sp+50h] [bp-200h]@15
  char v55; // [sp+54h] [bp-1FCh]@6
  CompoundTag *v56; // [sp+9Ch] [bp-1B4h]@34
  _DWORD *v57; // [sp+A0h] [bp-1B0h]@5
  _DWORD *v58; // [sp+A4h] [bp-1ACh]@5
  char v59; // [sp+ACh] [bp-1A4h]@1
  int v60; // [sp+B0h] [bp-1A0h]@1
  int v61; // [sp+B4h] [bp-19Ch]@1
  char v62; // [sp+B8h] [bp-198h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(a1 + 16));
  v7 = Minecraft::getLevelSource(v6);
  (*(void (__fastcall **)(char *))(*(_DWORD *)v7 + 20))(&v62);
  v8 = LevelData::getGameType((LevelData *)&v62);
  v9 = LevelData::getGameType(v4);
  LevelData::~LevelData((LevelData *)&v62);
  v10 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v3 + 16));
  v11 = Minecraft::getLevelSource(v10);
  (*(void (**)(void))(*(_DWORD *)v11 + 24))();
  v12 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v3 + 16));
  v13 = Minecraft::getLevelSource(v12);
  v14 = v13;
  v15 = *(void (__fastcall **)(int *, int, int, char *))(*(_DWORD *)v13 + 28);
  v16 = LevelData::getPremiumTemplatePackId(v4);
  MinecraftGame::getKeyProvider(*(MinecraftGame **)(v3 + 12));
  v15(&v61, v14, v5, v16);
  (*(void (__fastcall **)(char *))(*(_DWORD *)v61 + 60))(&v59);
  v17 = *(_DWORD *)&v59;
  v18 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v60 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  }
  if ( !v17 )
    v19 = LevelData::getGameType(v4);
    if ( v19 != 1 )
      LOBYTE(v19) = 0;
    (*(void (__fastcall **)(_DWORD **))(*(_DWORD *)v61 + 72))(&v57);
    v20 = v8;
    v48 = v3;
    v21 = v57;
    v51 = v58;
    if ( v57 != v58 )
      v49 = v20;
      v22 = (Abilities *)&v55;
      v50 = v19;
      {
        (*(void (__fastcall **)(CompoundTag **))(*(_DWORD *)v61 + 64))(&v56);
        if ( v56 )
        {
          Abilities::Abilities((int)v22);
          Abilities::loadSaveData(v22, v56);
          v27 = v22;
          if ( LevelData::hasCommandsEnabled(v4) != 1 )
            goto LABEL_73;
          v31 = v56;
          sub_DA7364((void **)&v54, "PlayerGameMode");
          if ( CompoundTag::contains((int)v31, (const void **)&v54) == 1 )
            v32 = Abilities::getCommandPermissions(v22) != 0;
          else
            v32 = 0;
          v33 = (void *)(v54 - 12);
          if ( (int *)(v54 - 12) != &dword_28898C0 )
          {
            v25 = (unsigned int *)(v54 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v26 = __ldrex(v25);
              while ( __strex(v26 - 1, v25) );
              v27 = v22;
            }
            else
              v26 = (*v25)--;
            if ( v26 <= 0 )
              j_j_j_j_j__ZdlPv_9(v33);
          }
          if ( v32 != 1 )
LABEL_73:
            v36 = v50;
            if ( v49 != v9 )
              v39 = v56;
              sub_DA7364((void **)&v52, "PlayerGameMode");
              v40 = LevelData::getGameType(v4);
              CompoundTag::putInt((int)v39, (const void **)&v52, v40);
              v36 = v50;
              v41 = (void *)(v52 - 12);
              if ( (int *)(v52 - 12) != &dword_28898C0 )
              {
                v28 = (unsigned int *)(v52 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v29 = __ldrex(v28);
                  while ( __strex(v29 - 1, v28) );
                }
                else
                  v29 = (*v28)--;
                if ( v29 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v41);
              }
            v34 = v56;
            sub_DA7364((void **)&v53, "PlayerGameMode");
            v35 = CompoundTag::getInt((int)v34, (const void **)&v53);
            v36 = v35;
            if ( v35 != 1 )
              v36 = 0;
            v37 = (void *)(v53 - 12);
            if ( (int *)(v53 - 12) != &dword_28898C0 )
              v38 = (unsigned int *)(v53 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v30 = __ldrex(v38);
                while ( __strex(v30 - 1, v38) );
              else
                v30 = (*v38)--;
              if ( v30 <= 0 )
                j_j_j_j_j__ZdlPv_9(v37);
          Abilities::setAbility((int)v27, (int **)&Abilities::INVULNERABLE, v36);
          Abilities::setAbility((int)v27, (int **)&Abilities::FLYING, 0);
          Abilities::setAbility((int)v27, (int **)&Abilities::MAYFLY, v36);
          Abilities::setAbility((int)v27, (int **)&Abilities::INSTABUILD, v36);
          Abilities::addSaveData(v27, v56);
          LevelStorage::savePlayerData(v61, (int)v21, (int)v56);
          v22 = v27;
          Abilities::~Abilities(v27);
          if ( v56 )
            (*(void (__cdecl **)(CompoundTag *))(*(_DWORD *)v56 + 4))(v56);
        }
        ++v21;
      }
      while ( v21 != v51 );
      v21 = v58;
      v42 = v57;
      if ( v57 != v58 )
        do
          v45 = (int *)(*v42 - 12);
          if ( v45 != &dword_28898C0 )
            v43 = (unsigned int *)(*v42 - 4);
                v44 = __ldrex(v43);
              while ( __strex(v44 - 1, v43) );
              v44 = (*v43)--;
            if ( v44 <= 0 )
              j_j_j_j_j__ZdlPv_9(v45);
          ++v42;
        while ( v42 != v21 );
        v21 = v57;
    if ( v21 )
      operator delete(v21);
    TaskGroup::sync_DEPRECATED_ASK_TOMMO(TaskGroup::DISK);
    v46 = MinecraftGame::getUserManager(*(MinecraftGame **)(v48 + 12));
    Social::UserManager::forceCloudSaveOnWorld(v46);
  result = v61;
  if ( v61 )
    result = (*(int (__cdecl **)(int))(*(_DWORD *)v61 + 4))(v61);
  return result;
}


void __fastcall MinecraftScreenModel::rebindKeys(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  ClientInputHandler *v2; // r5@1
  int v3; // r4@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r5@8
  unsigned int v7; // r0@10
  int v8; // [sp+0h] [bp-40h]@1
  int v9; // [sp+28h] [bp-18h]@1

  v1 = this;
  v2 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)this + 4));
  Config::createConfig((Config *)&v8, *((ClientInstance **)v1 + 4));
  ClientInputHandler::onConfigChanged(v2, (const Config *)&v8);
  v3 = v9;
  if ( v9 )
  {
    v4 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
}


void __fastcall MinecraftScreenModel::navigateToXblGamerProfileCardScreen(MinecraftScreenModel *this, Social::XboxProfile *a2)
{
  MinecraftScreenModel::navigateToXblGamerProfileCardScreen(this, a2);
}


void __fastcall MinecraftScreenModel::addToRealmsBlocklist(int a1, __int64 *a2, const void **a3, int a4)
{
  MinecraftScreenModel::addToRealmsBlocklist(a1, a2, a3, a4);
}


int __fastcall MinecraftScreenModel::isKeyboardActive(MinecraftScreenModel *this)
{
  int v1; // r0@1

  v1 = ClientInstance::getKeyboardManager(*((ClientInstance **)this + 4));
  return (*(int (**)(void))(*(_DWORD *)v1 + 28))();
}


int __fastcall MinecraftScreenModel::signinInProgress(MinecraftScreenModel *this)
{
  unsigned __int8 v1; // r4@0
  Social::XboxLiveUserManager *v2; // r0@2
  char v3; // r6@2
  int v4; // r5@4
  unsigned int *v5; // r1@5
  unsigned int v6; // r0@7
  unsigned int *v7; // r7@11
  unsigned int v8; // r0@13
  Social::User *v10; // [sp+4h] [bp-1Ch]@1
  int v11; // [sp+8h] [bp-18h]@4

  ClientInstance::getUser((ClientInstance *)&v10, *((_DWORD *)this + 4));
  if ( v10 )
  {
    v2 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v10);
    v1 = Social::XboxLiveUserManager::signinInProgress(v2);
    v3 = 0;
  }
  else
    v3 = 1;
  v4 = v11;
  if ( v11 )
    v5 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return (v1 | (unsigned __int8)v3) & 1;
}


void __fastcall MinecraftScreenModel::acceptRealmsLink(int a1, const void **a2, int a3)
{
  MinecraftScreenModel::acceptRealmsLink(a1, a2, a3);
}


  if ( MinecraftScreenModel::canPickSkin(*(MinecraftScreenModel **)(v1 + 424)) == 1 )
{
  else
    result = 0;
  return result;
}


int __fastcall MinecraftScreenModel::fireEventInventoryClosed(MinecraftScreenModel *this)
{
  MinecraftEventing *v1; // r0@1
  Player *v2; // r1@1

  v1 = (MinecraftEventing *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return j_j_j__ZN17MinecraftEventing27fireEventCraftingSessionEndEP6Player(v1, v2);
}


void __fastcall MinecraftScreenModel::joinRealmsGame(MinecraftScreenModel *this, const Realms::World *a2, const Social::GameConnectionInfo *a3)
{
  MinecraftScreenModel::joinRealmsGame(this, a2, a3);
}


int __fastcall MinecraftScreenModel::getIsWaitingForSession(MinecraftScreenModel *this)
{
  Social::MultiplayerServiceManager *v1; // r0@1

  v1 = (Social::MultiplayerServiceManager *)MinecraftGame::getMultiplayerServiceManager(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK6Social25MultiplayerServiceManager22getIsWaitingForSessionEv(v1);
}


int __fastcall MinecraftScreenModel::getDlcBatchModel(int a1, unsigned __int64 *a2)
{
  int v2; // r4@1
  unsigned __int64 *v3; // r6@1
  int v4; // r7@1
  unsigned __int64 *v5; // r8@1
  int v6; // r5@1
  int v7; // r7@4
  int v8; // r0@4
  __int64 v9; // r0@4
  int v11; // [sp+0h] [bp-58h]@4

  v2 = a1;
  v3 = a2;
  v5 = (unsigned __int64 *)(a1 + 40);
  v4 = *(_DWORD *)(a1 + 40);
  v6 = *(_DWORD *)(a1 + 44);
  if ( v4 == v6 )
  {
LABEL_4:
    v7 = MinecraftGame::getDownloadMonitor(*(MinecraftGame **)(v2 + 12));
    v8 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(v2 + 12));
    DlcBatchModel::DlcBatchModel((int)&v11, v7, v8, v3);
    v9 = *(_QWORD *)(v2 + 44);
    if ( (_DWORD)v9 == HIDWORD(v9) )
    {
      std::vector<DlcBatchModel,std::allocator<DlcBatchModel>>::_M_emplace_back_aux<DlcBatchModel>(v5, (int)&v11);
    }
    else
      DlcBatchModel::DlcBatchModel(v9, (int)&v11);
      *(_DWORD *)(v2 + 44) += 64;
    DlcBatchModel::~DlcBatchModel((DlcBatchModel *)&v11);
    v4 = *(_DWORD *)(v2 + 44) - 64;
  }
  else
    while ( !DlcBatchModel::compareToPackIds(v4, v3) )
      v4 += 64;
      if ( v6 == v4 )
        goto LABEL_4;
  return v4;
}


int __fastcall MinecraftScreenModel::supportsKeyboardMouse(MinecraftScreenModel *this)
{
  void *v1; // r0@2

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  return (*(int (**)(void))(**(_DWORD **)v1 + 168))();
}


char *__fastcall MinecraftScreenModel::getLocalPlayerEntityID(MinecraftScreenModel *this)
{
  Entity *v1; // r0@1

  v1 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return Entity::getUniqueID(v1);
}


void __fastcall MinecraftScreenModel::setNumberOfFriendsRealms(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel::setNumberOfFriendsRealms(this, a2);
}


char *__fastcall MinecraftScreenModel::getPlayerSessionId(MinecraftScreenModel *this)
{
  MinecraftEventing *v1; // r0@1

  v1 = (MinecraftEventing *)MinecraftGame::getEventing(*((MinecraftGame **)this + 3));
  return MinecraftEventing::getPlayerSessionId(v1);
}


unsigned int __fastcall MinecraftScreenModel::reportUser(int a1, int *a2, int a3, int *a4, int a5)
{
  int *v5; // r6@1
  int *v6; // r4@1
  int v7; // r5@1
  int v8; // r0@1
  int (*v9)(void); // r2@1
  unsigned int result; // r0@1
  int v11; // r4@3
  unsigned int *v12; // r1@4
  unsigned int *v13; // r5@10
  __int64 v14; // [sp+8h] [bp-28h]@1
  int (*v15)(void); // [sp+10h] [bp-20h]@1
  int v16; // [sp+14h] [bp-1Ch]@1
  Social::User *v17; // [sp+18h] [bp-18h]@1
  int v18; // [sp+1Ch] [bp-14h]@3

  v5 = a2;
  v6 = a4;
  v7 = a3;
  ClientInstance::getUser((ClientInstance *)&v17, *(_DWORD *)(a1 + 16));
  v8 = Social::User::getLiveUser(v17);
  v14 = *(_QWORD *)a5;
  v9 = *(int (**)(void))(a5 + 8);
  *(_DWORD *)(a5 + 8) = 0;
  v15 = v9;
  v16 = *(_DWORD *)(a5 + 12);
  result = Social::XboxLiveUserManager::reportUser(v8, v5, v7, v6, (int)&v14);
  if ( v15 )
    result = v15();
  v11 = v18;
  if ( v18 )
  {
    v12 = (unsigned int *)(v18 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
    }
    else
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  }
  return result;
}


signed int __fastcall MinecraftScreenModel::hasGestureControlEnabled(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  AppPlatform **v2; // r0@2
  signed int result; // r0@5
  int v4; // r1@6

  v1 = this;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  if ( AppPlatform::getUseTouchGestures(*v2) )
  {
    result = 1;
  }
    v4 = ClientInstance::getCurrentInputMode(*((ClientInstance **)v1 + 4));
    result = 0;
    if ( v4 == 2 )
      result = 1;
  return result;
}


signed int __fastcall MinecraftScreenModel::areAnyDownloadsActive(MinecraftScreenModel *this)
{
  DownloadMonitor *v1; // r0@1

  v1 = (DownloadMonitor *)MinecraftGame::getDownloadMonitor(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK15DownloadMonitor21areAnyDownloadsActiveEv(v1);
}


void __fastcall MinecraftScreenModel::navigateToXblConsoleSignInScreen(int a1, int *a2, int *a3)
{
  int v3; // r5@1
  int v4; // r0@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r2@5
  int *v7; // r5@7
  int v8; // r4@9
  unsigned int *v9; // r1@10
  unsigned int v10; // r0@12
  unsigned int *v11; // r6@16
  unsigned int v12; // r0@18
  int v13; // r4@23
  unsigned int *v14; // r1@24
  unsigned int v15; // r0@26
  unsigned int *v16; // r5@30
  unsigned int v17; // r0@32
  int v18; // [sp+0h] [bp-20h]@2
  int v19; // [sp+4h] [bp-1Ch]@2
  int v20; // [sp+8h] [bp-18h]@1
  int v21; // [sp+Ch] [bp-14h]@2

  v3 = a1;
  SceneFactory::createXblConsoleSignInScreen((unsigned __int64 *)&v20, *(_DWORD *)(a1 + 24), a2, a3);
  if ( v20 )
  {
    v4 = *(_DWORD *)(v3 + 20);
    v18 = v20;
    v19 = v21;
    if ( v21 )
    {
      v5 = (unsigned int *)(v21 + 4);
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
    SceneStack::pushScreen(v4, (int)&v18, 0);
    v7 = &v21;
    v8 = v19;
    if ( v19 )
      v9 = (unsigned int *)(v19 + 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
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
  else
  v13 = *v7;
  if ( *v7 )
    v14 = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
}


void __fastcall MinecraftScreenModel::navigateToRealmsSettingsScreen(MinecraftScreenModel *this, const Realms::World *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r4@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r5@8
  unsigned int v7; // r0@10
  int v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  v2 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createRealmsSettingsScreen((SceneFactory *)&v8, (const Realms::World *)HIDWORD(v2), a2);
  SceneStack::pushScreen(v2, (int)&v8, 0);
  v3 = v9;
  if ( v9 )
  {
    v4 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
}


void __fastcall MinecraftScreenModel::navigateToHowToPlayScreen(int a1, int a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r4@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r5@8
  unsigned int v7; // r0@10
  int v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  v2 = *(_QWORD *)(a1 + 20);
  SceneFactory::createHowToPlayScreen((unsigned __int64 *)&v8, SHIDWORD(v2), a2);
  SceneStack::pushScreen(v2, (int)&v8, 0);
  v3 = v9;
  if ( v9 )
  {
    v4 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
}


signed int __fastcall MinecraftScreenModel::tryNavigateToXblFirstLaunchScreen(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  Options *v2; // r0@1
  void *v3; // r0@3
  signed int result; // r0@6
  __int64 v5; // kr00_8@7
  int v6; // r4@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r0@10
  unsigned int *v9; // r5@14
  unsigned int v10; // r0@16
  int v11; // [sp+0h] [bp-18h]@7
  int v12; // [sp+4h] [bp-14h]@7

  v1 = this;
  v2 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  if ( Options::getHasEverLoggedIntoXbl(v2)
    || (!*(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) ? (v3 = &ServiceLocator<AppPlatform>::mDefaultService) : (v3 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService)),
        (*(int (**)(void))(**(_DWORD **)v3 + 640))()) )
  {
    result = 0;
  }
  else
    v5 = *(_QWORD *)((char *)v1 + 20);
    SceneFactory::createXblFirstLaunchScreen((SceneFactory *)&v11, SHIDWORD(v5));
    SceneStack::pushScreen(v5, (int)&v11, 0);
    v6 = v12;
    if ( v12 )
    {
      v7 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
    result = 1;
  return result;
}


int __fastcall MinecraftScreenModel::requestServerSettings(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r5@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r4@1
  int v4; // r0@1

  v1 = this;
  v2 = operator new(0x10u);
  v3 = v2;
  v2[1] = 2;
  v2[2] = 1;
  *((_BYTE *)v2 + 12) = 0;
  *v2 = &off_26D82A0;
  v4 = ClientInstance::getPacketSender(*((ClientInstance **)v1 + 4));
  (*(void (**)(void))(*(_DWORD *)v4 + 8))();
  return (*(int (__fastcall **)(_DWORD *))(*v3 + 4))(v3);
}


unsigned int __fastcall MinecraftScreenModel::signOut(MinecraftScreenModel *this)
{
  Social::XboxLiveUserManager *v1; // r0@1
  unsigned int result; // r0@1
  int v3; // r4@1
  unsigned int *v4; // r1@2
  unsigned int *v5; // r5@8
  Social::User *v6; // [sp+0h] [bp-18h]@1
  int v7; // [sp+4h] [bp-14h]@1

  ClientInstance::getUser((ClientInstance *)&v6, *((_DWORD *)this + 4));
  v1 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v6);
  result = Social::XboxLiveUserManager::signOut(v1);
  v3 = v7;
  if ( v7 )
  {
    v4 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v4);
      while ( __strex(result - 1, v4) );
    }
    else
      result = (*v4)--;
    if ( result == 1 )
      v5 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v5);
        while ( __strex(result - 1, v5) );
      }
      else
        result = (*v5)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  return result;
}


signed int __fastcall MinecraftScreenModel::isConfigurableRealmEnvironment(MinecraftScreenModel *this)
{
  Options *v1; // r0@1
  int v2; // r1@1
  signed int result; // r0@1

  v1 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  v2 = Options::getRealmsEnvironment(v1) | 1;
  result = 0;
  if ( v2 == 3 )
    result = 1;
  return result;
}


void __fastcall MinecraftScreenModel::setLanguage(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@1
  Options *v4; // r0@1
  Social::XboxLiveUserManager *v5; // r0@1
  int v6; // r5@1
  unsigned int *v7; // r1@2
  unsigned int v8; // r0@4
  unsigned int *v9; // r6@8
  unsigned int v10; // r0@10
  int v11; // r0@15
  ResourcePackManager *v12; // r0@15
  void *v13; // r0@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  Social::User *v16; // [sp+4h] [bp-24h]@1
  int v17; // [sp+8h] [bp-20h]@1
  int v18; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  v2 = I18n::getCurrentLanguage(this);
  Localization::getFullLanguageCode((Localization *)&v18, v2);
  v3 = ClientInstance::getOptions(*((ClientInstance **)v1 + 4));
  Options::setLanguage(v3, (const void **)&v18);
  v4 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v1 + 4));
  Options::save(v4, 0);
  ClientInstance::getUser((ClientInstance *)&v16, *((_DWORD *)v1 + 4));
  v5 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v16);
  Social::XboxLiveUserManager::setLocale(v5);
  v6 = v17;
  if ( v17 )
  {
    v7 = (unsigned int *)(v17 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
  v11 = ClientInstance::getFont(*((ClientInstance **)v1 + 4));
  Font::onLanguageChanged(v11, (const void **)&v18);
  v12 = (ResourcePackManager *)MinecraftGame::getResourcePackManager(*((MinecraftGame **)v1 + 3));
  ResourcePackManager::onLanguageChanged(v12);
  MinecraftGame::onGameEventNotification(*((_DWORD *)v1 + 3), 15);
  MinecraftGame::setSmoothFontStyle(*((MinecraftGame **)v1 + 3));
  v13 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v18 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
}


  if ( MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v1 + 380)) )
{
    v21 = &unk_28898CC;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = &unk_28898CC;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = &unk_28898CC;
    v30 = &unk_28898CC;
    v31 = &unk_28898CC;
    v32 = &unk_28898CC;
    v33 = 1;
    v34 = 0;
    sub_119CAD8(&v21, "xbl.skipSignIn.prompt.title", (_BYTE *)0x1B);
    sub_119CAD8(&v25, "xbl.skipSignIn.prompt.description", (_BYTE *)0x21);
    sub_119CAD8(&v30, "gui.continue", (_BYTE *)0xC);
    sub_119CAD8(&v32, "store.popup.goBack", (_BYTE *)0x12);
    MinecraftScreenController::_getWeakPtrToThis<ConvertPurchasesToXBLScreenController>((int)&v19, v1);
    v2 = *(_QWORD *)&v19;
    if ( v20 )
    {
      v3 = (unsigned int *)(v20 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex(v3);
        while ( __strex(v4 + 1, v3) );
      }
      else
        ++*v3;
          v5 = __ldrex(v3);
        while ( __strex(v5 + 1, v3) );
    }
    v18 = 0;
    v6 = operator new(8u);
    *v6 = v2;
    if ( HIDWORD(v2) )
      v8 = (unsigned int *)(HIDWORD(v2) + 8);
        {
          LODWORD(v7) = __ldrex(v8);
          HIDWORD(v7) = __strex(v7 + 1, v8);
        }
        while ( HIDWORD(v7) );
        ++*v8;
    v9 = sub_1164568;
    v17 = v6;
    LODWORD(v7) = sub_11643E0;
    *(_QWORD *)&v18 = *(__int64 *)((char *)&v7 - 4);
    LODWORD(v7) = &v17;
    MinecraftScreenController::_displayCustomModalPopup(v1, (int)&v21, v7);
    if ( v18 )
      v18();
      v10 = (unsigned int *)(HIDWORD(v2) + 8);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
          v12 = __ldrex(v10);
        while ( __strex(v12 - 1, v10) );
        v12 = (*v10)--;
      if ( v12 == 1 )
    v13 = v20;
      v14 = (unsigned int *)(v20 + 8);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (**)(void))(*(_DWORD *)v13 + 12))();
    ModalScreenData::~ModalScreenData((ModalScreenData *)&v21);
  }
  else
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 92))(v1);
    if ( *(_DWORD *)(v1 + 432) )
      (*(void (__fastcall **)(int, _DWORD))(v1 + 436))(v1 + 424, 0);
  return 0;
}


void __fastcall MinecraftScreenModel::fetchRealmsWorlds(int a1, int a2)
{
  MinecraftScreenModel::fetchRealmsWorlds(a1, a2);
}


  switch ( MinecraftScreenModel::getActiveDirectoryAuthenticationState(*(MinecraftScreenModel **)(v3 + 380)) )
{
    case 2:
    case 3:
    case 4:
      sub_119C884(v2, "authentication.loggingin");
      break;
    case 6:
      sub_119C854((int *)v2, (int *)&Util::EMPTY_STRING);
    case 8:
      sub_119C884((void **)&v56, "authentication.unauthenticated");
      I18n::get(&v57, (int **)&v56);
      v4 = sub_119C894((const void **)&v57, "\n", 1u);
      v58 = (unsigned int)*v4;
      *v4 = &unk_28898CC;
      sub_119C884((void **)&v54, "authentication.location");
      I18n::get(&v55, (int **)&v54);
      v5 = *(_QWORD *)(v58 - 12);
      v6 = *(_DWORD *)(v55 - 12) + v5;
      if ( v6 > HIDWORD(v5) && v6 <= *(_DWORD *)(v55 - 8) )
        v7 = sub_119C984((const void **)&v55, 0, v58, (_BYTE *)v5);
      else
        v7 = sub_119C8A4((const void **)&v58, (const void **)&v55);
      v59 = (char *)*v7;
      *v7 = &unk_28898CC;
      v17 = sub_119C894((const void **)&v59, "\n", 1u);
      v60 = (unsigned int)*v17;
      *v17 = &unk_28898CC;
      sub_119C884((void **)&v52, "authentication.hyperlink");
      I18n::get(&v53, (int **)&v52);
      v18 = *(_QWORD *)(v60 - 12);
      v19 = *(_DWORD *)(v53 - 12) + v18;
      if ( v19 > HIDWORD(v18) && v19 <= *(_DWORD *)(v53 - 8) )
        v20 = sub_119C984((const void **)&v53, 0, v60, (_BYTE *)v18);
        v20 = sub_119C8A4((const void **)&v60, (const void **)&v53);
      *v2 = (void *)*v20;
      *v20 = &unk_28898CC;
      v21 = (void *)(v53 - 12);
      if ( (int *)(v53 - 12) != &dword_28898C0 )
      {
        v31 = (unsigned int *)(v53 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
        }
        else
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v21);
      }
      v22 = (void *)(v52 - 12);
      if ( (int *)(v52 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v52 - 4);
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v22);
      v23 = (void *)(v60 - 12);
      if ( (int *)(v60 - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(v60 - 4);
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v23);
      v24 = v59 - 12;
      if ( (int *)(v59 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v59 - 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v24);
      v25 = (void *)(v55 - 12);
      if ( (int *)(v55 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v55 - 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v25);
      v26 = (void *)(v54 - 12);
      if ( (int *)(v54 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v54 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v26);
      v27 = (void *)(v58 - 12);
      if ( (int *)(v58 - 12) != &dword_28898C0 )
        v43 = (unsigned int *)(v58 - 4);
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
          v44 = (*v43)--;
        if ( v44 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v27);
      v28 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) != &dword_28898C0 )
        v45 = (unsigned int *)(v57 - 4);
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
          v46 = (*v45)--;
        if ( v46 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v28);
      v14 = (void *)(v56 - 12);
      if ( (int *)(v56 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v56 - 4);
        if ( !&pthread_create )
          goto LABEL_86;
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        goto LABEL_87;
    case 9:
      sub_119C884(
        v2,
        "We can't connect to the service you need right now. Check your network connection or try this again later.");
    case 5:
      sub_119C884((void **)&v51, "authentication.welcome");
      MinecraftScreenModel::getActiveDirectoryUsername((MinecraftScreenModel *)&v47, *(_DWORD *)(v3 + 380));
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v48 = (char *)operator new(4u);
      v50 = v48 + 4;
      v49 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                      (int)&v47,
                      (int)&v48,
                      (int)v48);
      I18n::get((int *)v2, &v51, (unsigned __int64 *)&v48);
      v9 = (int)v49;
      v8 = v48;
      if ( v48 != v49 )
          v12 = (int *)(*(_DWORD *)v8 - 12);
          if ( v12 != &dword_28898C0 )
          {
            v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
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
              j_j_j_j_j__ZdlPv_9_1(v12);
          }
          v8 += 4;
        while ( v8 != (char *)v9 );
        v8 = v48;
      if ( v8 )
        operator delete(v8);
      v13 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v47 - 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v13);
      v14 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v51 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
LABEL_86:
          v16 = (*v15)--;
LABEL_87:
        if ( v16 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v14);
    case 1:
      sub_119C884(v2, "authentication.pleaseSignIn");
    default:
  }
}


int __fastcall MinecraftScreenModel::renameLevel(int a1)
{
  Minecraft *v1; // r0@1
  int v2; // r0@1

  v1 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(a1 + 16));
  v2 = Minecraft::getLevelSource(v1);
  return (*(int (**)(void))(*(_DWORD *)v2 + 44))();
}


void __fastcall MinecraftScreenModel::getWorldfromLink(int a1, const void **a2, int a3)
{
  int v3; // r5@1
  const void **v4; // r4@1
  int v5; // r6@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  int v7; // [sp+0h] [bp-20h]@2
  void (*v8)(void); // [sp+8h] [bp-18h]@1
  int v9; // [sp+Ch] [bp-14h]@2

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v8 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  if ( v6 )
  {
    v6(&v7, v3, 2);
    v9 = *(_DWORD *)(v3 + 12);
    v8 = *(void (**)(void))(v3 + 8);
  }
  RealmsAPI::getWorldfromLink(v5, v4, (int)&v7);
  if ( v8 )
    v8();
}


int __fastcall MinecraftScreenModel::getCursorSelectedItemGroup(MinecraftScreenModel *this)
{
  return ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4)) + 5072;
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  return result;
}


int __fastcall MinecraftScreenModel::pickFile(MinecraftScreenModel *this, FilePickerSettings *a2)
{
  void *v2; // r0@2

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  return (*(int (**)(void))(**(_DWORD **)v2 + 144))();
}


int __fastcall MinecraftScreenModel::linkScreenToPlayer(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r5@1
  Options *v2; // r0@1
  int result; // r0@1
  Player *v4; // r0@2
  PlayerInventoryProxy *v5; // r4@2
  Player *v6; // r0@2
  PlayerInventoryProxy *v7; // r0@2
  int v8; // r5@2
  int v9; // r6@3

  v1 = this;
  v2 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  result = Options::getUIProfile(v2);
  if ( !result )
  {
    v4 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v1 + 4));
    v5 = (PlayerInventoryProxy *)Player::getSupplies(v4);
    v6 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v1 + 4));
    v7 = (PlayerInventoryProxy *)Player::getSupplies(v6);
    result = PlayerInventoryProxy::getLinkedSlotsCount(v7);
    v8 = result;
    if ( result >= 1 )
    {
      v9 = 0;
      do
      {
        result = PlayerInventoryProxy::linkSlot(v5, v9, v8 + v9);
        ++v9;
      }
      while ( v8 != v9 );
    }
  }
  return result;
}


int __fastcall MinecraftScreenModel::setScreenFadeAlpha(MinecraftScreenModel *this, float a2, float a3)
{
  float v3; // r4@1
  int result; // r0@1

  v3 = a3;
  *(float *)(ClientInstance::getGameRenderer(*((ClientInstance **)this + 4)) + 796) = a2;
  result = ClientInstance::getGameRenderer(*((ClientInstance **)this + 4));
  *(float *)(result + 800) = v3;
  return result;
}


unsigned int __fastcall MinecraftScreenModel::getXboxLiveFriends(MinecraftScreenModel *this, int a2)
{
  Social::XboxLiveUserManager *v2; // r4@1
  int v3; // r0@1
  unsigned int result; // r0@1
  int v5; // r4@1
  unsigned int *v6; // r1@2
  unsigned int *v7; // r5@8
  Social::User *v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  v2 = this;
  ClientInstance::getUser((ClientInstance *)&v8, *(_DWORD *)(a2 + 16));
  v3 = Social::User::getLiveUser(v8);
  result = Social::XboxLiveUserManager::getXboxLiveFriends(v2, v3);
  v5 = v9;
  if ( v9 )
  {
    v6 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v6);
      while ( __strex(result - 1, v6) );
    }
    else
      result = (*v6)--;
    if ( result == 1 )
      v7 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v7);
        while ( __strex(result - 1, v7) );
      }
      else
        result = (*v7)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  return result;
}


void __fastcall MinecraftScreenModel::getRealmsInviteCount(int a1, int a2)
{
  MinecraftScreenModel::getRealmsInviteCount(a1, a2);
}


signed int __fastcall MinecraftScreenModel::isValidRealmName(int a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  signed int v4; // r4@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  sub_DA73B4(&v9, v2);
  v4 = RealmsAPI::isValidRealmName(v3, &v9);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
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
      j_j_j_j_j__ZdlPv_9(v5);
  }
  return v4;
}


int __fastcall MinecraftScreenModel::MinecraftScreenModel(int a1, int a2, ClientInstance *a3, int a4, int a5)
{
  int v5; // r4@1
  ClientInstance *v6; // r5@1
  ClientInstanceModel *v7; // r6@1
  int v8; // r0@1

  v5 = a1;
  v6 = a3;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = &off_26D8078;
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a4;
  *(_DWORD *)(a1 + 24) = a5;
  *(_BYTE *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 256;
  *(_DWORD *)(a1 + 60) = 0;
  v7 = (ClientInstanceModel *)operator new(8u);
  ClientInstanceModel::ClientInstanceModel(v7, v6);
  v8 = *(_DWORD *)(v5 + 52);
  *(_DWORD *)(v5 + 52) = v7;
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  return v5;
}


void __fastcall MinecraftScreenModel::navigateToOptionsScreen(int a1, int a2, char a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r4@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r5@8
  unsigned int v8; // r0@10
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  v3 = *(_QWORD *)(a1 + 20);
  SceneFactory::createOptionsScreen((unsigned __int64 *)&v9, SHIDWORD(v3), a2, a3);
  SceneStack::pushScreen(v3, (int)&v9, 0);
  v4 = v10;
  if ( v10 )
  {
    v5 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
}


void __fastcall MinecraftScreenModel::getRealmsBlocklist(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  __int64 *v4; // r6@1
  int v5; // r4@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  int v7; // [sp+0h] [bp-28h]@2
  void (*v8)(void); // [sp+8h] [bp-20h]@1
  int v9; // [sp+Ch] [bp-1Ch]@2
  __int64 v10; // [sp+10h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v10 = *v4;
  v8 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  if ( v6 )
  {
    v6(&v7, v3, 2);
    v9 = *(_DWORD *)(v3 + 12);
    v8 = *(void (**)(void))(v3 + 8);
  }
  RealmsAPI::getBlocklist(v5, &v10, (int)&v7);
  if ( v8 )
    v8();
}


  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 424), 1) )
{
    result = 0;
  }
  else
  {
    v3 = 0;
    if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 424), 0) == 1 )
    {
      v3 = 0;
      if ( !*(_BYTE *)(v1 + 448) )
      {
        v4 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*(MainMenuScreenModel **)(v1 + 424));
        if ( FileUploadManager::getUploadState(v4) != 5 )
          v3 = 1;
      }
    }
    result = v3;
  return result;
}


int __fastcall MinecraftScreenModel::isCreative(MinecraftScreenModel *this)
{
  int v1; // r0@1

  v1 = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return (*(int (**)(void))(*(_DWORD *)v1 + 652))();
}


void __fastcall MinecraftScreenModel::navigateToDevConsole(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  signed int v3; // r5@1
  void *v4; // r0@1
  __int64 v5; // kr00_8@3
  int v6; // r4@3
  unsigned int *v7; // r1@4
  unsigned int v8; // r0@6
  unsigned int *v9; // r5@10
  unsigned int v10; // r0@12
  unsigned int *v11; // r2@18
  signed int v12; // r1@20
  int v13; // [sp+0h] [bp-28h]@3
  int v14; // [sp+4h] [bp-24h]@3
  int v15; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  v2 = (unsigned __int64 *)*((_DWORD *)this + 5);
  sub_DA7364((void **)&v15, "dev_console_screen");
  v3 = SceneStack::isOnSceneStack(v2, (const void **)&v15);
  v4 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v15 - 4);
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
      j_j_j_j_j__ZdlPv_9(v4);
  }
  if ( !v3 )
    v5 = *(_QWORD *)((char *)v1 + 20);
    SceneFactory::createDevConsole((SceneFactory *)&v13, SHIDWORD(v5));
    SceneStack::pushScreen(v5, (int)&v13, 0);
    v6 = v14;
    if ( v14 )
      v7 = (unsigned int *)(v14 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v9 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
}


char *__fastcall MinecraftScreenModel::getHitResult(MinecraftScreenModel *this)
{
  Level *v1; // r0@1

  v1 = (Level *)ClientInstance::getLevel(*((ClientInstance **)this + 4));
  return Level::getHitResult(v1);
}


void __fastcall MinecraftScreenModel::sendPurchaseReceiptsToServer(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r8@1
  NetworkHandler *v2; // r0@1
  int v3; // r0@1
  ThirdPartyInfo *v4; // r5@2
  int v5; // r6@3
  char *v6; // r0@3
  Entitlement *v7; // r0@3
  Entitlement *v8; // r5@3
  int v9; // r6@4
  int i; // r7@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  int v13; // r0@14
  char *v14; // r1@15
  char *v15; // r0@17
  int v16; // r0@19
  int v17; // r3@19
  void *v18; // r4@19
  void *v19; // r6@19
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  int *v22; // r0@29
  char **v23; // r4@34
  char **v24; // r6@34
  unsigned int *v25; // r2@36
  signed int v26; // r1@38
  int *v27; // r0@44
  void **v28; // [sp+0h] [bp-60h]@19
  int v29; // [sp+4h] [bp-5Ch]@19
  int v30; // [sp+8h] [bp-58h]@19
  char v31; // [sp+Ch] [bp-54h]@19
  __int64 v32; // [sp+10h] [bp-50h]@19
  int v33; // [sp+18h] [bp-48h]@19
  char *v34; // [sp+1Ch] [bp-44h]@14
  char **v35; // [sp+20h] [bp-40h]@4
  char **v36; // [sp+24h] [bp-3Ch]@4
  char **v37; // [sp+28h] [bp-38h]@4
  __int64 v38; // [sp+2Ch] [bp-34h]@3
  int v39; // [sp+34h] [bp-2Ch]@3

  v1 = this;
  v2 = (NetworkHandler *)ClientInstance::getClientNetworkSystem(*((ClientInstance **)this + 4));
  v3 = NetworkHandler::getConnectionInfo(v2);
  if ( *(_WORD *)v3 != 0xFFFF )
  {
    v4 = (ThirdPartyInfo *)(v3 + 20);
    if ( *(_DWORD *)(*(_DWORD *)ThirdPartyInfo::getCreatorId((ThirdPartyInfo *)(v3 + 20)) - 12) )
    {
      v38 = 0LL;
      v39 = 0;
      v5 = MinecraftGame::getEntitlementManager(*((MinecraftGame **)v1 + 3));
      v6 = ThirdPartyInfo::getCreatorId(v4);
      EntitlementManager::getEntitlementsByCreator(v5, (const void **)v6, (int)&v38);
      v8 = (Entitlement *)HIDWORD(v38);
      v7 = (Entitlement *)v38;
      if ( HIDWORD(v38) != (_DWORD)v38 )
      {
        v35 = 0;
        v36 = 0;
        v37 = 0;
        std::vector<std::string,std::allocator<std::string>>::reserve(
          (int)&v35,
          -1431655765 * ((HIDWORD(v38) - (signed int)v38) >> 4));
        v9 = HIDWORD(v38);
        for ( i = v38; i != v9; i += 48 )
        {
          sub_DA73B4((int *)&v34, (int *)(i + 36));
          v13 = (int)v36;
          if ( v36 == v37 )
          {
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
              (unsigned __int64 *)&v35,
              &v34);
            v14 = v34;
          }
          else
            *v36 = v34;
            v14 = (char *)&unk_28898CC;
            v34 = (char *)&unk_28898CC;
            v36 = (char **)(v13 + 4);
          v15 = v14 - 12;
          if ( (int *)(v14 - 12) != &dword_28898C0 )
            v11 = (unsigned int *)(v14 - 4);
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
              j_j_j_j_j__ZdlPv_9(v15);
        }
        v29 = 2;
        v30 = 1;
        v31 = 0;
        v28 = &off_26D8100;
        v32 = 0LL;
        v33 = 0;
        std::vector<std::string,std::allocator<std::string>>::operator=((int)&v32, (unsigned __int64 *)&v35);
        v16 = ClientInstance::getPacketSender(*((ClientInstance **)v1 + 4));
        (*(void (__cdecl **)(int, void ***, _DWORD, int))(*(_DWORD *)v16 + 8))(
          v16,
          &v28,
          *(_DWORD *)(*(_DWORD *)v16 + 8),
          v17);
        v19 = (void *)HIDWORD(v32);
        v18 = (void *)v32;
        if ( (_DWORD)v32 != HIDWORD(v32) )
          do
            v22 = (int *)(*(_DWORD *)v18 - 12);
            if ( v22 != &dword_28898C0 )
              v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v21 = __ldrex(v20);
                while ( __strex(v21 - 1, v20) );
              }
              else
                v21 = (*v20)--;
              if ( v21 <= 0 )
                j_j_j_j_j__ZdlPv_9(v22);
            v18 = (char *)v18 + 4;
          while ( v18 != v19 );
          v18 = (void *)v32;
        if ( v18 )
          operator delete(v18);
        v24 = v36;
        v23 = v35;
        if ( v35 != v36 )
            v27 = (int *)(*v23 - 12);
            if ( v27 != &dword_28898C0 )
              v25 = (unsigned int *)(*v23 - 4);
                  v26 = __ldrex(v25);
                while ( __strex(v26 - 1, v25) );
                v26 = (*v25)--;
              if ( v26 <= 0 )
                j_j_j_j_j__ZdlPv_9(v27);
            ++v23;
          while ( v23 != v24 );
          v23 = v35;
        if ( v23 )
          operator delete(v23);
        v8 = (Entitlement *)HIDWORD(v38);
        v7 = (Entitlement *)v38;
      }
      if ( v7 != v8 )
        do
          v7 = (Entitlement *)((char *)Entitlement::~Entitlement(v7) + 48);
        while ( v8 != v7 );
        v8 = (Entitlement *)v38;
      if ( v8 )
        operator delete((void *)v8);
    }
  }
}


int __fastcall MinecraftScreenModel::disableKeyboard(MinecraftScreenModel *this)
{
  int v1; // r0@1

  v1 = ClientInstance::getKeyboardManager(*((ClientInstance **)this + 4));
  return (*(int (**)(void))(*(_DWORD *)v1 + 16))();
}


int __fastcall MinecraftScreenModel::setIsDirty(int result, bool a2)
{
  *(_BYTE *)(result + 28) = a2;
  return result;
}


  if ( MinecraftScreenModel::isKeyboardActive(*(MinecraftScreenModel **)(v3 + 424)) != 1 )
{
    v4 = "gui.exit";
    return sub_119C884(v2, v4);
  }
  if ( !MinecraftScreenModel::isInputModeMouse(*(MinecraftScreenModel **)(v3 + 424)) )
LABEL_10:
    v4 = "gui.back";
  else
  return sub_119C884(v2, v4);
}


void __fastcall MinecraftScreenModel::leaveRealmsWorld(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  __int64 *v4; // r6@1
  int v5; // r4@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  int v7; // [sp+0h] [bp-28h]@2
  void (*v8)(void); // [sp+8h] [bp-20h]@1
  int v9; // [sp+Ch] [bp-1Ch]@2
  __int64 v10; // [sp+10h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v10 = *v4;
  v8 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  if ( v6 )
  {
    v6(&v7, v3, 2);
    v9 = *(_DWORD *)(v3 + 12);
    v8 = *(void (**)(void))(v3 + 8);
  }
  RealmsAPI::leaveWorld(v5, &v10, (int)&v7);
  if ( v8 )
    v8();
}


int __fastcall MinecraftScreenModel::setPlayerGameType(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r6@1
  int result; // r0@1
  int v5; // r5@1
  int v6; // r1@2

  v2 = a1;
  v3 = a2;
  result = ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 16));
  v5 = result;
  if ( result )
  {
    v6 = *v3;
    (*(void (**)(void))(*(_DWORD *)result + 1432))();
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 652))(v5);
    if ( result == 1 )
      result = (*(int (**)(void))(**(_DWORD **)(v2 + 52) + 68))();
  }
  return result;
}


int *__fastcall MinecraftScreenModel::getActiveDirectoryUsername(MinecraftScreenModel *this, int a2)
{
  int *v2; // r4@1
  int v3; // r0@1

  v2 = (int *)this;
  v3 = MinecraftGame::getActiveDirectoryIdentity(*(MinecraftGame **)(a2 + 12));
  return sub_DA73B4(v2, (int *)(v3 + 52));
}


      if ( MinecraftScreenModel::hasLocalDeviceEntitlements(*(MinecraftScreenModel **)(v10 + 380)) == 1 )
{
        v11 = *(_DWORD *)(v10 + 380);
        v17 = 0;
        MinecraftScreenModel::navigateToConvertPurchasesToXBLScreen(v11, (int)&v16);
        if ( v17 )
          v17();
      }
    }
  }
  if ( v3 )
  {
    v12 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
}


int __fastcall MinecraftScreenModel::canChangeZipPreference(MinecraftScreenModel *this)
{
  void *v1; // r0@2

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  return (*(int (**)(void))(**(_DWORD **)v1 + 628))();
}


  if ( MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v3 + 432)) )
{
    v4 = "selectTemplate.generateRandom";
  }
  else if ( *(_DWORD *)(v3 + 496) )
  {
    v5 = MinecraftScreenModel::isXBLEnabled(*(MinecraftScreenModel **)(v3 + 432));
    v4 = "selectTemplate.signIn";
    if ( !v5 )
      v4 = "selectTemplate.unableToSignIn";
  else
  return sub_21E94B4(v2, v4);
}


int __fastcall MinecraftScreenModel::completeServerForm(MinecraftScreenModel *this, unsigned int a2, const Json::Value *a3)
{
  MinecraftScreenModel *v3; // r4@1
  const Json::Value *v4; // r5@1
  unsigned int v5; // r6@1
  void *v6; // r0@1
  void *v7; // r5@1
  void *v8; // r0@1
  int v9; // r0@2
  void *v10; // r0@2
  unsigned int *v12; // r2@4
  signed int v13; // r1@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  int v16; // [sp+0h] [bp-4h]@1
  void **v17; // [sp+4h] [bp+0h]@1
  int v18; // [sp+8h] [bp+4h]@2

  v3 = this;
  v4 = a3;
  v5 = a2;
  Json::FastWriter::FastWriter((Json::FastWriter *)&v17);
  Json::FastWriter::write((Json::FastWriter *)&v16, (const Json::Value *)&v17, v4);
  v6 = operator new(0x18u);
  v7 = v6;
  *((_DWORD *)v6 + 1) = 2;
  *((_DWORD *)v6 + 2) = 1;
  *((_BYTE *)v6 + 12) = 0;
  *(_DWORD *)v6 = &off_26D8250;
  *((_DWORD *)v6 + 4) = v5;
  sub_DA73B4((int *)v6 + 5, &v16);
  v8 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v13 = __ldrex(v12);
        __strex(v13 - 1, v12);
      }
      while ( &v17 );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  }
  v9 = ClientInstance::getPacketSender(*((ClientInstance **)v3 + 4));
  (*(void (**)(void))(*(_DWORD *)v9 + 8))();
  (*(void (__fastcall **)(void *))(*(_DWORD *)v7 + 4))(v7);
  v17 = &off_2725B14;
  v10 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v18 - 4);
        v15 = __ldrex(v14);
        __strex(v15 - 1, v14);
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  return Json::Writer::~Writer((Json::Writer *)&v17);
}


void __fastcall MinecraftScreenModel::resetRealmsWorld(int a1, __int64 *a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  __int64 *v6; // r7@1
  int v7; // r4@1
  void (__fastcall *v8)(char *, int, signed int); // r3@1
  void (__fastcall *v9)(int *, int, signed int); // r3@3
  int v10; // [sp+0h] [bp-40h]@4
  void (*v11)(void); // [sp+8h] [bp-38h]@3
  int v12; // [sp+Ch] [bp-34h]@4
  char v13; // [sp+10h] [bp-30h]@2
  void (*v14)(void); // [sp+18h] [bp-28h]@1
  int v15; // [sp+1Ch] [bp-24h]@2
  __int64 v16; // [sp+20h] [bp-20h]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v16 = *v6;
  v14 = 0;
  v8 = *(void (__fastcall **)(char *, int, signed int))(v5 + 8);
  if ( v8 )
  {
    v8(&v13, v5, 2);
    v15 = *(_DWORD *)(v5 + 12);
    v14 = *(void (**)(void))(v5 + 8);
  }
  v11 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v9 )
    v9(&v10, v4, 2);
    v12 = *(_DWORD *)(v4 + 12);
    v11 = *(void (**)(void))(v4 + 8);
  RealmsAPI::resetWorld(v7, &v16, (int)&v13, (int)&v10);
  if ( v11 )
    v11();
  if ( v14 )
    v14();
}


int __fastcall MinecraftScreenModel::getSelectedSkinHandle(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel *v2; // r4@1
  SkinRepositoryClientInterface *v3; // r0@1
  Skin *v4; // r0@1
  Skin *v5; // r5@1
  SkinPack *v6; // r0@1
  char *v7; // r6@1
  unsigned __int64 v8; // r0@1
  int v9; // r2@1
  int v10; // r3@1
  int v11; // r5@1
  int v12; // r6@1

  v2 = this;
  v3 = (SkinRepositoryClientInterface *)ClientInstance::getSkinRepositoryClientInterface(*(ClientInstance **)(a2 + 16));
  v4 = SkinRepositoryClientInterface::getSelectedSkinOrDefault(v3, 0);
  v5 = v4;
  v6 = (SkinPack *)Skin::getSkinPack(v4);
  v7 = SkinPack::getId(v6);
  v8 = __PAIR__(&unk_28898CC, Skin::getSkinIndex(v5));
  v9 = *(_DWORD *)v7;
  v10 = *((_DWORD *)v7 + 1);
  v11 = *((_DWORD *)v7 + 2);
  v12 = *((_DWORD *)v7 + 3);
  *(_DWORD *)v2 = v9;
  *((_DWORD *)v2 + 1) = v10;
  *((_DWORD *)v2 + 2) = v11;
  *((_DWORD *)v2 + 3) = v12;
  *((_QWORD *)v2 + 2) = v8;
  return v8;
}


  if ( MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v3 + 424)) == 1 )
{
    result = 0;
    if ( !*(_BYTE *)(*(_DWORD *)(v3 + 436) + 48 * v2 + 40) )
      result = 1;
  }
  else
  {
    result = 1;
  return result;
}


void __fastcall MinecraftScreenModel::addSelectedSkinToRecentList(MinecraftScreenModel *this)
{
  MinecraftScreenModel::addSelectedSkinToRecentList(this);
}


int __fastcall MinecraftScreenModel::setRealmsCompatibility(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  *(_DWORD *)(result + 24) = v2;
  return result;
}


void __fastcall MinecraftScreenModel::acceptRealmsInvite(int a1, int *a2, int a3)
{
  MinecraftScreenModel::acceptRealmsInvite(a1, a2, a3);
}


char *__fastcall MinecraftScreenModel::getPlayerInventoryOptions(MinecraftScreenModel *this)
{
  LocalPlayer *v1; // r0@1

  v1 = (LocalPlayer *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return LocalPlayer::getInventoryOptions(v1);
}


int __fastcall MinecraftScreenModel::checkRealmsPaymentService(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void (__fastcall *v4)(int *, int, signed int); // r3@1
  int result; // r0@3
  int v6; // [sp+0h] [bp-20h]@2
  int (*v7)(void); // [sp+8h] [bp-18h]@1
  int v8; // [sp+Ch] [bp-14h]@2

  v2 = a2;
  v3 = MinecraftGame::getOfferRepository(*(MinecraftGame **)(a1 + 12));
  v7 = 0;
  v4 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
  if ( v4 )
  {
    v4(&v6, v2, 2);
    v8 = *(_DWORD *)(v2 + 12);
    v7 = *(int (**)(void))(v2 + 8);
  }
  result = OfferRepository::checkRealmsPaymentService(v3, (int)&v6);
  if ( v7 )
    result = v7();
  return result;
}


  if ( MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v3 + 424)) == 1 )
{
    result = *(_BYTE *)(*(_DWORD *)(v3 + 436) + 48 * v2 + 40);
    if ( *(_BYTE *)(*(_DWORD *)(v3 + 436) + 48 * v2 + 40) )
      result = 1;
  }
  else
  {
    result = 0;
  return result;
}


void __fastcall MinecraftScreenModel::navigateToConvertPurchasesToXBLScreen(int a1, int a2)
{
  __int64 v2; // r4@1
  int v3; // r6@1
  void (__fastcall *v4)(int *); // r3@1
  int v5; // r4@3
  unsigned int *v6; // r1@4
  unsigned int v7; // r0@6
  unsigned int *v8; // r5@10
  unsigned int v9; // r0@12
  int v10; // [sp+0h] [bp-28h]@2
  void (*v11)(void); // [sp+8h] [bp-20h]@1
  int v12; // [sp+Ch] [bp-1Ch]@2
  char v13; // [sp+10h] [bp-18h]@3
  int v14; // [sp+14h] [bp-14h]@3

  v2 = *(_QWORD *)(a1 + 20);
  v3 = a2;
  v11 = 0;
  v4 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v4 )
  {
    v4(&v10);
    v12 = *(_DWORD *)(v3 + 12);
    v11 = *(void (**)(void))(v3 + 8);
  }
  SceneFactory::createConvertPurchasesToXBLScreen((unsigned __int64 *)&v13, SHIDWORD(v2), (int)&v10);
  SceneStack::pushScreen(v2, (int)&v13, 0);
  v5 = v14;
  if ( v14 )
    v6 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  if ( v11 )
    v11();
}


void __fastcall MinecraftScreenModel::listRealmsInvites(int a1, int a2)
{
  MinecraftScreenModel::listRealmsInvites(a1, a2);
}


void __fastcall MinecraftScreenModel::rebindKeys(MinecraftScreenModel *this)
{
  MinecraftScreenModel::rebindKeys(this);
}


int __fastcall MinecraftScreenModel::handleHideToolTipsButtonPress(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  Options *v2; // r5@1
  Options *v3; // r0@1
  int v4; // r1@1

  v1 = this;
  v2 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  v3 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v1 + 4));
  v4 = Options::getHideToolTips(v3) ^ 1;
  return j_j_j__ZN7Options15setHideToolTipsEb(v2, v4);
}


char *__fastcall MinecraftScreenModel::getDevConsoleScreenMessages(MinecraftScreenModel *this)
{
  GuiData *v1; // r0@1

  v1 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 4));
  return GuiData::getDevConsoleScreenMessages(v1);
}


void __fastcall MinecraftScreenModel::resetRealmsWorld(int a1, __int64 *a2, int a3, int a4)
{
  MinecraftScreenModel::resetRealmsWorld(a1, a2, a3, a4);
}


char *__fastcall MinecraftScreenModel::getServerSettingsData(MinecraftScreenModel *this)
{
  GuiData *v1; // r0@1

  v1 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 4));
  return GuiData::getServerSettings(v1);
}


void __fastcall MinecraftScreenModel::startLocalServer(int a1, int *a2, LevelSettings *a3)
{
  int v3; // r6@1
  LevelSettings *v4; // r4@1
  int *v5; // r5@1
  void *v6; // r0@1
  void *v7; // r0@3
  void *v8; // r0@4
  int v9; // r0@5
  int v10; // r6@5
  int v11; // r5@5
  LevelSettings *v12; // r0@5
  void *v13; // r0@5
  void *v14; // r0@6
  void *v15; // r0@7
  void *v16; // r0@8
  char *v17; // r0@9
  unsigned int *v18; // r2@11
  signed int v19; // r1@13
  unsigned int *v20; // r2@15
  signed int v21; // r1@17
  unsigned int *v22; // r2@19
  signed int v23; // r1@21
  unsigned int *v24; // r2@23
  signed int v25; // r1@25
  unsigned int *v26; // r2@27
  signed int v27; // r1@29
  unsigned int *v28; // r2@31
  signed int v29; // r1@33
  unsigned int *v30; // r2@59
  signed int v31; // r1@61
  unsigned int *v32; // r2@63
  signed int v33; // r1@65
  char v34; // [sp+Ch] [bp-E8h]@5
  int v35; // [sp+D4h] [bp-20h]@5
  int v36; // [sp+D8h] [bp-1Ch]@5
  int v37; // [sp+DCh] [bp-18h]@5
  int v38; // [sp+E0h] [bp-14h]@5
  char *v39; // [sp+E4h] [bp-10h]@5
  int v40; // [sp+ECh] [bp-8h]@3
  int v41; // [sp+F0h] [bp-4h]@3
  int v42; // [sp+F4h] [bp+0h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  Util::stringTrim(&v42, a2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, &v42);
  v6 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v42 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v19 = __ldrex(v18);
        __strex(v19 - 1, v18);
      }
      while ( &v42 );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  }
  if ( !*(_DWORD *)(*v5 - 12) )
    sub_DA7364((void **)&v40, "createWorldScreen.defaultName");
    I18n::get(&v41, (int **)&v40);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, &v41);
    v7 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v41 - 4);
      if ( &pthread_create )
        __dmb();
        do
        {
          v31 = __ldrex(v30);
          __strex(v31 - 1, v30);
        }
        while ( &v42 );
      else
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j_j__ZdlPv_9(v7);
    v8 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v40 - 4);
          v33 = __ldrex(v32);
          __strex(v33 - 1, v32);
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9(v8);
  v39 = (char *)&unk_28898CC;
  Level::createUniqueLevelID((Level *)&v38, 0);
  v9 = MinecraftGame::getEventing(*(MinecraftGame **)(v3 + 12));
  MinecraftEventing::fireEventWorldGenerated(v9, (const char **)&v38, v4, 0);
  v10 = *(_DWORD *)(v3 + 12);
  sub_DA73B4(&v37, &v38);
  sub_DA73B4(&v36, v5);
  sub_DA73B4(&v35, (int *)&v39);
  v11 = LevelSettings::isMultiplayerGame(v4);
  v12 = (LevelSettings *)LevelSettings::LevelSettings((int)&v34, (int)v4);
  MinecraftGame::startLocalServer(v10, &v37, &v36, &v35, v11, v12);
  LevelSettings::~LevelSettings((LevelSettings *)&v34);
  v13 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v35 - 4);
        v21 = __ldrex(v20);
        __strex(v21 - 1, v20);
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v36 - 4);
        v23 = __ldrex(v22);
        __strex(v23 - 1, v22);
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v37 - 4);
        v25 = __ldrex(v24);
        __strex(v25 - 1, v24);
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v38 - 4);
        v27 = __ldrex(v26);
        __strex(v27 - 1, v26);
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  v17 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v39 - 4);
        v29 = __ldrex(v28);
        __strex(v29 - 1, v28);
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
}


int __fastcall MinecraftScreenModel::getPlayerCommandPermissionLevel(MinecraftScreenModel *this)
{
  int v1; // r0@1

  v1 = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return (*(int (**)(void))(*(_DWORD *)v1 + 604))();
}


void __fastcall MinecraftScreenModel::joinRealmsGame(MinecraftScreenModel *this, const Realms::World *a2, const Social::GameConnectionInfo *a3)
{
  j_j_j__ZN13MinecraftGame14joinRealmsGameERKN6Realms5WorldERKN6Social18GameConnectionInfoE(
    *((MinecraftGame **)this + 3),
    a2,
    a3);
}


void __fastcall MinecraftScreenModel::getRealmsWorld(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  __int64 *v4; // r6@1
  int v5; // r4@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  int v7; // [sp+0h] [bp-28h]@2
  void (*v8)(void); // [sp+8h] [bp-20h]@1
  int v9; // [sp+Ch] [bp-1Ch]@2
  __int64 v10; // [sp+10h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v10 = *v4;
  v8 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  if ( v6 )
  {
    v6(&v7, v3, 2);
    v9 = *(_DWORD *)(v3 + 12);
    v8 = *(void (**)(void))(v3 + 8);
  }
  RealmsAPI::getWorld(v5, &v10, (int)&v7);
  if ( v8 )
    v8();
}


void __fastcall MinecraftScreenModel::getCurrentXUID(MinecraftScreenModel *this, int a2)
{
  Social::XboxLiveUserManager *v2; // r4@1
  int v3; // r0@1
  int v4; // r4@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r5@8
  unsigned int v8; // r0@10
  Social::User *v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  v2 = this;
  ClientInstance::getUser((ClientInstance *)&v9, *(_DWORD *)(a2 + 16));
  v3 = Social::User::getLiveUser(v9);
  Social::XboxLiveUserManager::getCurrentXUID(v2, v3);
  v4 = v10;
  if ( v10 )
  {
    v5 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
}


            if ( MinecraftScreenModel::isAddFriendAllowed(*(MinecraftScreenModel **)(v1 + 380)) == 1 )
{
              v8 = MinecraftScreenModel::getHoloInput(*(MinecraftScreenModel **)(v1 + 380));
              if ( (*(int (**)(void))(*(_DWORD *)v8 + 88))() == 1 )
              {
                v60 = *(_DWORD *)v2;
                v9 = *(_DWORD *)(v2 + 4);
                v61 = v9;
                if ( v9 )
                {
                  v10 = (unsigned int *)(v9 + 8);
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
                sub_DA73B4(&v62, (int *)(v2 + 8));
                v64 = 0;
                v19 = *(void (__fastcall **)(int *, int, signed int))(v2 + 20);
                if ( v19 )
                  v19(&v63, v2 + 12, 2);
                  v65 = *(_DWORD *)(v2 + 24);
                  v64 = *(void (__fastcall **)(int *, int *, signed int))(v2 + 20);
                v51 = v60;
                v52 = v61;
                if ( v61 )
                  v20 = (unsigned int *)(v61 + 8);
                      v21 = __ldrex(v20);
                    while ( __strex(v21 + 1, v20) );
                    ++*v20;
                sub_DA73B4(&v53, &v62);
                v55 = 0;
                if ( v64 )
                  v64(&v54, &v63, 2);
                  v56 = v65;
                  v55 = v64;
                v58 = 0;
                v22 = operator new(0x1Cu);
                v23 = (int)v22;
                *v22 = v51;
                v24 = v52;
                *(_DWORD *)(v23 + 4) = v52;
                if ( v24 )
                  v25 = (unsigned int *)(v24 + 8);
                      v26 = __ldrex(v25);
                    while ( __strex(v26 + 1, v25) );
                    ++*v25;
                sub_DA73B4((int *)(v23 + 8), &v53);
                v27 = *(_QWORD *)&v54;
                *(_QWORD *)&v54 = *(_QWORD *)(v23 + 12);
                *(_QWORD *)(v23 + 12) = v27;
                *(_DWORD *)(v23 + 20) = v55;
                v28 = v56;
                v56 = *(_DWORD *)(v23 + 24);
                *(_DWORD *)(v23 + 24) = v28;
                v57 = v23;
                v58 = (void (__cdecl *)(int *))sub_CB057C;
                v59 = sub_CB03B0;
                v49 = 0;
                v29 = *(void (__fastcall **)(char *, int, signed int))(v2 + 20);
                if ( v29 )
                  v29(&v48, v2 + 12, 2);
                  v50 = *(_DWORD *)(v2 + 24);
                  v49 = *(void (__cdecl **)(char *))(v2 + 20);
                MinecraftScreenController::_displayVRRemoveDeviceWarning(v1, (int)&v57);
                if ( v49 )
                  v49(&v48);
                if ( v58 )
                  v58(&v57);
                if ( v55 )
                  v55(&v54, &v54, 3);
                v30 = (void *)(v53 - 12);
                if ( (int *)(v53 - 12) != &dword_28898C0 )
                  v40 = (unsigned int *)(v53 - 4);
                      v41 = __ldrex(v40);
                    while ( __strex(v41 - 1, v40) );
                    v41 = (*v40)--;
                  if ( v41 <= 0 )
                    j_j_j_j_j__ZdlPv_9(v30);
                v31 = v52;
                if ( v52 )
                  v32 = (unsigned int *)(v52 + 8);
                      v33 = __ldrex(v32);
                    while ( __strex(v33 - 1, v32) );
                    v33 = (*v32)--;
                  if ( v33 == 1 )
                    (*(void (__cdecl **)(int))(*(_DWORD *)v31 + 12))(v31);
                  v64(&v63, &v63, 3);
                v34 = (void *)(v62 - 12);
                if ( (int *)(v62 - 12) != &dword_28898C0 )
                  v42 = (unsigned int *)(v62 - 4);
                      v43 = __ldrex(v42);
                    while ( __strex(v43 - 1, v42) );
                    v43 = (*v42)--;
                  if ( v43 <= 0 )
                    j_j_j_j_j__ZdlPv_9(v34);
                v35 = v61;
                  v36 = (unsigned int *)(v61 + 8);
                      v37 = __ldrex(v36);
                    while ( __strex(v37 - 1, v36) );
                    v37 = (*v36)--;
                  if ( v37 == 1 )
                    (*(void (__cdecl **)(int))(*(_DWORD *)v35 + 12))(v35);
              }
              else
                v13 = 0;
                v46 = 0;
                v14 = *(void (__fastcall **)(char *, int, signed int))(v2 + 20);
                if ( v14 )
                  v14(&v45, v2 + 12, 2);
                  v47 = *(_DWORD *)(v2 + 24);
                  v13 = *(_DWORD *)(v2 + 20);
                  v46 = *(void (**)(void))(v2 + 20);
                MinecraftScreenController::_showUserProfile(v13, (const char **)(v2 + 8), (int)&v45);
                if ( v46 )
                  v46();
            }
            else
            {
              if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
                v12 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
                v12 = &ServiceLocator<AppPlatform>::mDefaultService;
              v15 = (*(int (**)(void))(**(_DWORD **)v12 + 644))();
              v16 = "permissions.MultiplayerSessionsOnConsole";
              if ( !v15 )
                v16 = "permissions.AddFriends";
              sub_DA7364((void **)&v44, v16);
              MinecraftScreenController::_showInvalidPermissionsModal(v1, &v44);
              v17 = (void *)(v44 - 12);
              if ( (int *)(v44 - 12) != &dword_28898C0 )
                v38 = (unsigned int *)(v44 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v39 = __ldrex(v38);
                  while ( __strex(v39 - 1, v38) );
                else
                  v39 = (*v38)--;
                if ( v39 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v17);
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v4);
            while ( __strex(result - 1, v4) );
          else
            result = (*v4)--;
          if ( result == 1 )
            v18 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v18);
              while ( __strex(result - 1, v18) );
              result = (*v18)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return result;
        }
      }
      else
      {
        __clrex();
        result = v5;
    }
  }
  return result;
}


void __fastcall MinecraftScreenModel::navigateToRemixUploadScreen(int a1, int a2)
{
  MinecraftScreenModel::navigateToRemixUploadScreen(a1, a2);
}


int __fastcall MinecraftScreenModel::confirmResourcePackDownload(int a1, int (**a2)(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg), int a3)
{
  int v3; // r5@1
  unsigned __int8 v4; // r4@1
  int result; // r0@1
  signed int v6; // r1@1

  v3 = a1;
  v4 = (unsigned __int8)a2;
  MinecraftGame::handleResourcePackConfirmation(*(_DWORD *)(a1 + 12), a2, a3);
  result = v4;
  v6 = 512;
  if ( v4 == 3 )
    v6 = 16;
  *(_DWORD *)(v3 + 56) = v6;
  return result;
}


int __fastcall MinecraftScreenModel::getCustomSkinHandle(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r0@1
  int v7; // r0@2
  Skin *v8; // r0@2
  Skin *v9; // r5@2
  SkinPack *v10; // r0@2
  char *v11; // r6@2
  __int64 v12; // r0@2
  int v13; // r2@2
  int v14; // r3@2
  int v15; // r6@2
  int v16; // r2@3
  unsigned int v17; // r3@3

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = ClientInstance::getSkinRepositoryClientInterface(*(ClientInstance **)(a2 + 16));
  if ( SkinRepositoryClientInterface::hasDefaultSkin(v6, v5) == 1 )
  {
    v7 = ClientInstance::getSkinRepositoryClientInterface(*(ClientInstance **)(v3 + 16));
    v8 = SkinRepositoryClientInterface::getDefaultSkin(v7, v5);
    v9 = v8;
    v10 = (SkinPack *)Skin::getSkinPack(v8);
    v11 = SkinPack::getId(v10);
    LODWORD(v12) = Skin::getSkinIndex(v9);
    HIDWORD(v12) = *(_DWORD *)v11;
    v13 = *((_DWORD *)v11 + 1);
    v14 = *((_DWORD *)v11 + 2);
    v15 = *((_DWORD *)v11 + 3);
    *(_DWORD *)v4 = HIDWORD(v12);
    *(_DWORD *)(v4 + 4) = v13;
    *(_DWORD *)(v4 + 8) = v14;
    *(_DWORD *)(v4 + 12) = v15;
  }
  else
    v16 = *(&mce::UUID::EMPTY + 1);
    LODWORD(v12) = HIDWORD(qword_287E930);
    v17 = qword_287E930;
    *(_DWORD *)v4 = mce::UUID::EMPTY;
    *(_DWORD *)(v4 + 4) = v16;
    *(_QWORD *)(v4 + 8) = __PAIR__(v12, v17);
    LODWORD(v12) = -1;
  HIDWORD(v12) = &unk_28898CC;
  *(_QWORD *)(v4 + 16) = v12;
  return v12;
}


  if ( MinecraftScreenModel::isHolographic(*(MinecraftScreenModel **)(**(_DWORD **)a2 + 424)) == 1 )
{
    result = sub_21E94B4(v3, "options.livingRoomFOV");
  }
  else
  {
    v5 = (int *)Option::getCaptionId(*(Option **)(v2 + 4));
    result = sub_21E8AF4((int *)v3, v5);
  return result;
}


signed int __fastcall MinecraftScreenModel::getNewJukeboxPopupItemText(int a1, int *a2, _BYTE *a3, char *a4)
{
  int v4; // r5@1
  char *v5; // r4@1
  _BYTE *v6; // r6@1
  int *v7; // r7@1
  int v8; // r0@1
  const void **v9; // r0@2
  char *v10; // r0@2
  void *v11; // r0@3
  int v12; // r0@4
  ClientInputHandler *v13; // r0@5
  char v14; // r0@6
  signed int v15; // r4@7
  ClientInputHandler *v16; // r0@9
  char *v17; // r0@11
  char *v18; // r0@12
  unsigned int *v20; // r2@14
  signed int v21; // r1@16
  unsigned int *v22; // r2@18
  signed int v23; // r1@20
  unsigned int *v24; // r2@22
  signed int v25; // r1@24
  unsigned int *v26; // r2@26
  signed int v27; // r1@28
  int v28; // [sp+0h] [bp-28h]@2
  char *v29; // [sp+4h] [bp-24h]@2
  char *v30; // [sp+8h] [bp-20h]@1
  char *v31; // [sp+Ch] [bp-1Ch]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v30 = (char *)&unk_28898CC;
  v31 = (char *)&unk_28898CC;
  v8 = ClientInstance::getGuiData(*(ClientInstance **)(a1 + 16));
  if ( GuiData::getNewJukeboxPopupNotice(v8, (int *)&v31, (int *)&v30) == 1 )
  {
    sub_DA73B4(&v28, (int *)&v31);
    sub_DA7564((const void **)&v28, (const void **)&Util::NEW_LINE);
    v9 = sub_DA7564((const void **)&v28, (const void **)&v30);
    v29 = (char *)*v9;
    *v9 = &unk_28898CC;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      v7,
      (int *)&v29);
    v10 = v29 - 12;
    if ( (int *)(v29 - 12) != &dword_28898C0 )
    {
      v24 = (unsigned int *)(v29 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      }
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9(v10);
    }
    v11 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v28 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9(v11);
    v12 = ClientInstance::getLocalPlayer(*(ClientInstance **)(v4 + 16));
    *v6 = (*(int (**)(void))(*(_DWORD *)v12 + 652))();
    if ( ClientInstance::getCurrentInputMode(*(ClientInstance **)(v4 + 16)) == 2 )
      v13 = (ClientInputHandler *)ClientInstance::getInput(*(ClientInstance **)(v4 + 16));
      if ( ClientInputHandler::canInteract(v13) )
        v14 = 1;
        v16 = (ClientInputHandler *)ClientInstance::getInput(*(ClientInstance **)(v4 + 16));
        v14 = ClientInputHandler::showBoatExit(v16);
    else
      v14 = 0;
    *v5 = v14;
    v15 = 1;
  }
  else
    v15 = 0;
  v17 = v30 - 12;
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v30 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  v18 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v31 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  return v15;
}


int __fastcall MinecraftScreenModel::getServerResourcePackManager(MinecraftScreenModel *this)
{
  Minecraft *v1; // r0@1

  v1 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)this + 4));
  return Minecraft::getResourceLoader(v1);
}


int __fastcall MinecraftScreenModel::getArbitraryPlayerAbilities(int a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r4@1
  int v3; // r0@1

  v2 = a2;
  v3 = ClientInstance::getLevel(*(ClientInstance **)(a1 + 16));
  return j_j_j__ZN5Level18getPlayerAbilitiesERK14EntityUniqueID(v3, v2);
}


  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 424), 1) )
{
    result = 0;
  }
  else
  {
    v3 = 0;
    if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 424), 0) == 1 )
    {
      v3 = 0;
      if ( !*(_BYTE *)(v1 + 448) )
      {
        v4 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*(MainMenuScreenModel **)(v1 + 424));
        if ( FileUploadManager::getUploadState(v4) != 5 )
          v3 = 1;
      }
    }
    result = v3;
  return result;
}


  if ( MinecraftScreenModel::isCreative(*(MinecraftScreenModel **)(v3 + 424)) )
{
    v4 = "craftingScreen.tab.search";
  }
  else
  {
    if ( *(_BYTE *)(v3 + 657) )
      v4 = "craftingScreen.tab.search.filter";
  return sub_119C884(v2, v4);
}


int __fastcall MinecraftScreenModel::isXBLInviteEnabled(MinecraftScreenModel *this)
{
  int v1; // r0@1

  v1 = MinecraftGame::getMultiplayerServiceManager(*((MinecraftGame **)this + 3));
  return j_j_j__ZN6Social25MultiplayerServiceManager15isInviteEnabledENS_28MultiplayerServiceIdentifierE(v1, 0);
}


int __fastcall MinecraftScreenModel::handleHideGUIButtonPress(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  Options *v2; // r5@1
  Options *v3; // r0@1
  int v4; // r1@1

  v1 = this;
  v2 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  v3 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v1 + 4));
  v4 = Options::getHideHud(v3) ^ 1;
  return j_j_j__ZN7Options10setHideGUIEb(v2, v4);
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = -1;
    *(_DWORD *)(v1 + 988) = -1;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 32))();
    *(_DWORD *)(v1 + 988) = result;
  return result;
}


int __fastcall MinecraftScreenModel::getNumberOfFriendsRealms(MinecraftScreenModel *this)
{
  Options *v1; // r0@1

  v1 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  return j_j_j__ZNK7Options24getNumberOfFriendsRealmsEv(v1);
}


void __fastcall MinecraftScreenModel::navigateToInviteScreen(MinecraftScreenModel *this)
{
  MinecraftScreenModel::navigateToInviteScreen(this);
}


signed int __fastcall MinecraftScreenModel::isEnabledTouchOrHolographic(MinecraftScreenModel *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = ClientInstance::getCurrentInputMode(*((ClientInstance **)this + 4));
  v2 = 0;
  if ( v1 == 2 )
    v2 = 1;
  return v2;
}


signed int __fastcall MinecraftScreenModel::getPlayerGameType(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  signed int result; // r0@3

  v1 = this;
  if ( ClientInstance::isPreGame(*((ClientInstance **)this + 4))
    || !ClientInstance::getLocalPlayer(*((ClientInstance **)v1 + 4)) )
  {
    result = -1;
  }
  else
    result = *(_DWORD *)(ClientInstance::getLocalPlayer(*((ClientInstance **)v1 + 4)) + 5232);
  return result;
}


void __fastcall MinecraftScreenModel::getProfiles(int a1, unsigned int a2, int a3)
{
  MinecraftScreenModel::getProfiles(a1, a2, a3);
}


int __fastcall MinecraftScreenModel::isSignedInToXBL(MinecraftScreenModel *this)
{
  int v1; // r4@0
  Social::XboxLiveUserManager *v2; // r0@2
  signed int v3; // r6@2
  int v4; // r5@4
  unsigned int *v5; // r1@5
  unsigned int v6; // r0@7
  unsigned int *v7; // r7@11
  unsigned int v8; // r0@13
  Social::User *v10; // [sp+4h] [bp-1Ch]@1
  int v11; // [sp+8h] [bp-18h]@4

  ClientInstance::getUser((ClientInstance *)&v10, *((_DWORD *)this + 4));
  if ( v10 )
  {
    v2 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v10);
    v1 = Social::XboxLiveUserManager::isSignedIn(v2);
    v3 = 1;
  }
  else
    v3 = 0;
  v4 = v11;
  if ( v11 )
    v5 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return v1 & v3;
}


void __fastcall MinecraftScreenModel::navigateToXblReportUserScreen(int a1, int *a2, int *a3)
{
  MinecraftScreenModel::navigateToXblReportUserScreen(a1, a2, a3);
}


unsigned int __fastcall MinecraftScreenModel::unMuteUser(int a1, int *a2, int a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  int (__cdecl *v6)(__int64 *, __int64 *); // r1@1
  unsigned int result; // r0@1
  int v8; // r4@3
  unsigned int *v9; // r1@4
  unsigned int *v10; // r5@10
  __int64 v11; // [sp+0h] [bp-28h]@1
  int (__cdecl *v12)(__int64 *, __int64 *); // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1
  Social::User *v14; // [sp+10h] [bp-18h]@1
  int v15; // [sp+14h] [bp-14h]@3

  v3 = a2;
  v4 = a3;
  ClientInstance::getUser((ClientInstance *)&v14, *(_DWORD *)(a1 + 16));
  v5 = Social::User::getLiveUser(v14);
  v11 = *(_QWORD *)v4;
  v6 = *(int (__cdecl **)(__int64 *, __int64 *))(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v12 = v6;
  v13 = *(_DWORD *)(v4 + 12);
  result = Social::XboxLiveUserManager::unMuteUser(v5, v3, (int)&v11);
  if ( v12 )
    result = v12(&v11, &v11);
  v8 = v15;
  if ( v15 )
  {
    v9 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
    }
    else
      result = (*v9)--;
    if ( result == 1 )
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
      }
      else
        result = (*v10)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  return result;
}


    if ( (a2 || MinecraftScreenModel::getDevCreateRealmWithoutPurchase(*(MinecraftScreenModel **)(v2 + 424)) == 1)
{
    {
      MinecraftScreenModel::getCurrentXUID((MinecraftScreenModel *)&v42, *(_DWORD *)(v2 + 424));
      v6 = MinecraftScreenModel::getDevCreateRealmWithoutPurchase(*(MinecraftScreenModel **)(v2 + 424));
      v7 = operator new(0x70u);
      RealmsTransactionContext::RealmsTransactionContext((int)v7, &v42, (int *)(v2 + 456), (int *)(v2 + 460), v6);
      v43 = v7;
      v8 = (void *)(v42 - 12);
      if ( (int *)(v42 - 12) != &dword_28898C0 )
      {
        v35 = (unsigned int *)(v42 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
        }
        else
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      }
      v9 = *(_QWORD *)(v3 + 4);
      v10 = (int)v43;
      if ( HIDWORD(v9) )
        v11 = (unsigned int *)(HIDWORD(v9) + 8);
            v12 = __ldrex(v11);
          while ( __strex(v12 + 1, v11) );
          ++*v11;
            v13 = __ldrex(v11);
          while ( __strex(v13 + 1, v11) );
      v46 = 0;
      v14 = operator new(0xCu);
      *(_DWORD *)v14 = v2;
      *(_QWORD *)((char *)v14 + 4) = v9;
        v15 = (unsigned int *)(HIDWORD(v9) + 8);
            v16 = __ldrex(v15);
          while ( __strex(v16 + 1, v15) );
          ++*v15;
      v44 = v14;
      v17 = v45;
      *(_QWORD *)&v44 = *(_QWORD *)v10;
      *(_DWORD *)v10 = v14;
      *(_DWORD *)(v10 + 4) = v17;
      v46 = *(void (**)(void))(v10 + 8);
      v18 = v46;
      *(_DWORD *)(v10 + 8) = sub_1204BF8;
      v47 = *(_DWORD *)(v10 + 12);
      *(_DWORD *)(v10 + 12) = sub_120490C;
      if ( v18 )
        v18();
        v19 = (unsigned int *)(HIDWORD(v9) + 8);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v9) + 12))(HIDWORD(v9));
            v21 = __ldrex(v19);
          while ( __strex(v21 - 1, v19) );
          v21 = (*v19)--;
        if ( v21 == 1 )
      v22 = *(_DWORD *)(v2 + 424);
      v23 = v43;
      v24 = *(_DWORD *)(v2 + 464);
      v25 = *(_DWORD *)(v2 + 468);
      v26 = *(_DWORD *)(v2 + 472);
      v27 = *(_BYTE *)(v2 + 476);
      v43 = 0;
      ptr = v23;
      v28 = MainMenuScreenModel::createRealmsWorld(v22, v24, v25, v26, v27, (int *)&ptr);
      v29 = ptr;
      if ( ptr )
        v30 = *((_DWORD *)ptr + 5);
        v31 = (void *)(v30 - 12);
        if ( (int *)(v30 - 12) != &dword_28898C0 )
          v37 = (unsigned int *)(v30 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
          }
          else
            v38 = (*v37)--;
          if ( v38 <= 0 )
            j_j_j_j__ZdlPv_9(v31);
        v32 = v29[4];
        v33 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v39 = (unsigned int *)(v32 - 4);
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
            v40 = (*v39)--;
          if ( v40 <= 0 )
            j_j_j_j__ZdlPv_9(v33);
        v34 = (void (__fastcall *)(_DWORD *, _DWORD *, signed int))v29[2];
        if ( v34 )
          v34(v29, v29, 3);
        operator delete(v29);
      ptr = 0;
      if ( !v28 )
        MinecraftScreenModel::leaveScreen(*(MinecraftScreenModel **)(v2 + 424));
        RealmsCreateScreenController::_errorDialogMaxRealms((RealmsCreateScreenController *)v2);
      result = std::unique_ptr<RealmsTransactionContext,std::default_delete<RealmsTransactionContext>>::~unique_ptr(&v43);
    }
    else
      MinecraftScreenModel::leaveScreen(*(MinecraftScreenModel **)(v2 + 424));
      result = RealmsCreateScreenController::_errorDialogPaymentServiceDown((RealmsCreateScreenController *)v2);
  }
  return result;
}


  if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v3 + 424)) == 1 )
{
    if ( LevelData::hasAchievementsDisabled((LevelData *)(v3 + 592)) )
    {
      v4 = "options.achievementsDisabled";
      goto LABEL_11;
    }
  }
  else
  {
    v5 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v3 + 424));
    if ( (*(int (**)(void))(*(_DWORD *)v5 + 20))() )
  if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v3 + 424)) == 1 )
    v6 = LevelData::achievementsWillBeDisabledOnLoad((LevelData *)(v3 + 592));
    v7 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v3 + 424));
    v6 = (*(int (**)(void))(*(_DWORD *)v7 + 16))();
  v4 = "options.achievementsDisabled.onLoad";
  if ( !v6 )
    v4 = "options.achievementsDisabled.notSignedIn";
LABEL_11:
  sub_21E94B4((void **)&v11, v4);
  I18n::get(v2, (int **)&v11);
  v8 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


int __fastcall MinecraftScreenModel::getVRShowComfortSelectScreen(MinecraftScreenModel *this)
{
  Options *v1; // r0@1

  v1 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  return j_j_j__ZNK7Options28getVRShowComfortSelectScreenEv(v1);
}


  if ( MinecraftScreenModel::isXBLEnabled(*(MinecraftScreenModel **)(v1 + 424)) == 1 )
{
    if ( MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v1 + 424)) == 1 )
      result = MainMenuScreenModel::isRealmsTrialStoreOfferAvailable(
                 *(_DWORD *)(v1 + 424),
                 *(_DWORD *)(v1 + 456),
                 *(_DWORD *)(v1 + 460),
                 *(_DWORD *)(v1 + 464));
    else
      result = 1;
  }
  else
  {
    result = 0;
  return result;
}


void __fastcall MinecraftScreenModel::navigateToRealmsSettingsScreen(MinecraftScreenModel *this, const Realms::World *a2)
{
  MinecraftScreenModel::navigateToRealmsSettingsScreen(this, a2);
}


int __fastcall MinecraftScreenModel::getNameRegistry(MinecraftScreenModel *this)
{
  ClientInputHandler *v1; // r0@1

  v1 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)this + 4));
  return j_j_j__ZN18ClientInputHandler15getNameRegistryEv(v1);
}


int __fastcall MinecraftScreenModel::getSelectedSlot(MinecraftScreenModel *this, int a2)
{
  PlayerInventoryProxy *v2; // r4@1
  Player *v3; // r0@1
  int v4; // r0@1

  v2 = this;
  v3 = (Player *)ClientInstance::getLocalPlayer(*(ClientInstance **)(a2 + 16));
  v4 = Player::getSupplies(v3);
  return PlayerInventoryProxy::getSelectedSlot(v2, v4);
}


int __fastcall MinecraftScreenModel::isControllerConnected(MinecraftScreenModel *this)
{
  signed int v1; // r0@1
  int v2; // r4@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  signed int v7; // r1@7
  int v8; // r0@11
  GameController *v9; // r5@11
  unsigned int *v10; // r2@14
  unsigned int v11; // r1@16
  int v12; // r5@18
  unsigned int *v13; // r1@26
  unsigned int v14; // r0@28
  unsigned int *v15; // r6@32
  unsigned int v16; // r0@34
  GameController *v18; // [sp+0h] [bp-18h]@1
  int v19; // [sp+4h] [bp-14h]@1

  v1 = ClientInstance::getControllerId(*((ClientInstance **)this + 4));
  GameControllerManager::getGameController(
    (GameControllerManager *)&v18,
    (int)&GameControllerManager::sGamePadManager,
    v1);
  v2 = v19;
  if ( v19 )
  {
    v3 = *(_DWORD *)(v19 + 4);
    v4 = (unsigned int *)(v19 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v3 )
        {
          v7 = 1;
          v2 = 0;
          goto LABEL_11;
        }
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
    v7 = 0;
    if ( !*v4 )
      v7 = 1;
LABEL_11:
    v8 = v19;
    v9 = v18;
    if ( v7 )
      v9 = 0;
    if ( v19 )
      v10 = (unsigned int *)(v19 + 8);
      if ( &pthread_create )
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (**)(void))(*(_DWORD *)v8 + 12))();
    if ( v9 )
      v12 = GameController::isConnected(v9);
    else
      v12 = 0;
    if ( v2 )
      v13 = (unsigned int *)(v2 + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        v15 = (unsigned int *)(v2 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
        if ( &pthread_create )
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        else
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  else
    v12 = 0;
  return v12;
}


void __fastcall MinecraftScreenModel::setNumberOfOwnedRealms(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel *v2; // r5@1
  int v3; // r4@1
  Options *v4; // r0@1
  Options *v5; // r0@1

  v2 = this;
  v3 = a2;
  v4 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  Options::setNumberOfOwnedRealms(v4, v3);
  v5 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v2 + 4));
  j_j_j__ZN7Options4saveEb(v5, 0);
}


        if ( MinecraftScreenModel::hasLocalDeviceEntitlements(*(MinecraftScreenModel **)(v3 + 380)) == 1 )
{
          v20 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(v3 + 380));
          if ( !Options::getStoreHasPurchasedCoins(v20) )
          {
            v21 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(v3 + 380));
            Options::setStoreHasPurchasedCoins(v21, 1);
            v22 = *(_DWORD *)(v3 + 380);
            v33 = 0;
            MinecraftScreenModel::navigateToConvertPurchasesToXBLScreen(v22, (int)&v32);
            if ( v33 )
              v33();
          }
        }
        v23 = (void *)(v41 - 12);
        if ( (int *)(v41 - 12) != &dword_28898C0 )
        {
          v28 = (unsigned int *)(v41 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
          else
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v23);
        break;
      case 7:
        MinecoinPurchaseScreenController::_dialogFulfillmentFailed((MinecoinPurchaseScreenController *)v3);
      default:
        return;
    }
  }
}


signed int __fastcall MinecraftScreenModel::isAnyDownloadActive(int a1, _QWORD *a2)
{
  _QWORD *v2; // r4@1
  int v3; // r0@1

  v2 = a2;
  v3 = MinecraftGame::getDownloadMonitor(*(MinecraftGame **)(a1 + 12));
  return j_j_j__ZNK15DownloadMonitor22isDownloadActiveForAnyERKSt6vectorISsSaISsEE(v3, v2);
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 5;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 40))();
  return result;
}


              if ( MinecraftScreenModel::isSignedInToXBL((MinecraftScreenModel *)v3) == 1 )
{
              else
                v16 = 0;
              MinecraftScreenModel::setNumberOfFriendsRealms((MinecraftScreenModel *)v3, v16 - *(_DWORD *)(v3 + 284));
              if ( v36 )
                v36();
              v17 = (void *)(v38 - 12);
              if ( (int *)(v38 - 12) != &dword_28898C0 )
              {
                v25 = (unsigned int *)(v38 - 4);
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
                  j_j_j_j__ZdlPv_9(v17);
              }
            }
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              v18 = __ldrex(v7);
            while ( __strex(v18 - 1, v7) );
          else
            v18 = (*v7)--;
          if ( v18 == 1 )
            v19 = (unsigned int *)(v5 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
            if ( &pthread_create )
            {
              __dmb();
              do
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
            else
              v20 = (*v19)--;
            if ( v20 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
          break;
        }
      }
      else
      {
        __clrex();
        v6 = v8;
    }
  }
  v22 = v28;
  v21 = (Realms::World *)ptr;
  if ( ptr != (void *)v28 )
  {
    do
      v21 = (Realms::World *)((char *)Realms::World::~World(v21) + 72);
    while ( v22 != v21 );
    v21 = (Realms::World *)ptr;
  if ( v21 )
    operator delete((void *)v21);
}


int __fastcall MinecraftScreenModel::getLocalPlayerUUID(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel *v2; // r4@1
  int v3; // r0@1
  int v4; // r12@1
  int v5; // r2@1
  int v6; // r3@1
  int result; // r0@1

  v2 = this;
  v3 = ClientInstance::getLocalPlayer(*(ClientInstance **)(a2 + 16));
  v4 = *(_DWORD *)(v3 + 4564);
  v5 = *(_DWORD *)(v3 + 4560);
  v6 = *(_DWORD *)(v3 + 4568);
  result = *(_DWORD *)(v3 + 4572);
  *(_DWORD *)v2 = v5;
  *((_DWORD *)v2 + 1) = v4;
  *((_DWORD *)v2 + 2) = v6;
  *((_DWORD *)v2 + 3) = result;
  return result;
}


int __fastcall MinecraftScreenModel::setCursorSelectedItemGroup(MinecraftScreenModel *this, const ItemGroup *a2)
{
  const ItemGroup *v2; // r4@1
  Player *v3; // r0@1

  v2 = a2;
  v3 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return j_j_j__ZN6Player26setCursorSelectedItemGroupERK9ItemGroup(v3, v2);
}


int __fastcall MinecraftScreenModel::hasFixedInventory(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  Player *v2; // r0@1
  PlayerInventoryProxy *v3; // r0@1
  Player *v4; // r0@2
  PlayerInventoryProxy *v5; // r0@2
  Level *v6; // r0@3
  char *v7; // r0@3
  int result; // r0@3

  v1 = this;
  v2 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v3 = (PlayerInventoryProxy *)Player::getSupplies(v2);
  if ( PlayerInventoryProxy::getFixedInventorySlotCount(v3) < 1
    || (v4 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)v1 + 4)),
        v5 = (PlayerInventoryProxy *)Player::getSupplies(v4),
        PlayerInventoryProxy::getFixedInventorySlotCount(v5) > 3) )
  {
    result = 0;
  }
  else
    v6 = (Level *)ClientInstance::getLevel(*((ClientInstance **)v1 + 4));
    v7 = Level::getLevelData(v6);
    result = LevelData::isEduLevel((LevelData *)v7);
  return result;
}


int __fastcall MinecraftScreenModel::supportsClipboard(MinecraftScreenModel *this)
{
  void *v1; // r0@2

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  return (*(int (**)(void))(**(_DWORD **)v1 + 176))();
}


  if ( MinecraftScreenModel::isLiveMultiplayerAllowed(*(MinecraftScreenModel **)(v1 + 432))
{
  {
    v2 = 1;
  }
  return v2;
}


void __fastcall MinecraftScreenModel::navigateToXblOptionalSignInScreen(int a1, int *a2, int *a3, int *a4, int *a5, int a6)
{
  MinecraftScreenModel::navigateToXblOptionalSignInScreen(a1, a2, a3, a4, a5, a6);
}


void __fastcall MinecraftScreenModel::setNumberOfOwnedRealms(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel::setNumberOfOwnedRealms(this, a2);
}


void __fastcall MinecraftScreenModel::navigateToVRSchemeScreen(MinecraftScreenModel *this, bool a2)
{
  MinecraftScreenModel::navigateToVRSchemeScreen(this, a2);
}


TextPacket *__fastcall MinecraftScreenModel::sendTrialWelcomeMessage(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r5@1
  void *v2; // r0@1
  void *v3; // r0@2
  int v4; // r0@3
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // [sp+8h] [bp-48h]@1
  int v11; // [sp+Ch] [bp-44h]@1
  char v12; // [sp+10h] [bp-40h]@1

  v1 = this;
  sub_DA7364((void **)&v10, "trial.survival.welcome");
  I18n::get(&v11, (int **)&v10);
  TextPacket::createRaw((int)&v12, &v11);
  v2 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v11 - 4);
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
      j_j_j_j_j__ZdlPv_9(v2);
  }
  v3 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  v4 = ClientInstance::getPacketSender(*((ClientInstance **)v1 + 4));
  (*(void (**)(void))(*(_DWORD *)v4 + 8))();
  return TextPacket::~TextPacket((TextPacket *)&v12);
}


void __fastcall MinecraftScreenModel::navigateToGamePlayScreen(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  int v2; // r5@1
  int v3; // r0@1
  int v4; // r4@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r5@8
  unsigned int v8; // r0@10
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = ClientInstance::getClientSceneStack(*((ClientInstance **)this + 4));
  v3 = ClientInstance::getSceneFactory(*((ClientInstance **)v1 + 4));
  SceneFactory::createGameplayScreen((SceneFactory *)&v9, v3);
  SceneStack::pushScreen(v2, (int)&v9, 1);
  v4 = v10;
  if ( v10 )
  {
    v5 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
}


  if ( MinecraftScreenModel::isTrial(*(MinecraftScreenModel **)(v1 + 424)) )
{
  else
    result = MinecraftScreenModel::isMultiPlayerClient(*(MinecraftScreenModel **)(v1 + 424)) ^ 1;
  return result;
}


int __fastcall MinecraftScreenModel::getGamepadRemappingLayout(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1

  v2 = a2;
  v3 = ClientInstance::getOptions(*(ClientInstance **)(a1 + 16));
  return Options::getGamePadRemappingByType(v3, v2);
}


signed int __fastcall MinecraftScreenModel::getSimPaused(MinecraftScreenModel *this)
{
  Minecraft *v1; // r0@1

  v1 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)this + 4));
  return j_j_j__ZNK9Minecraft12getSimPausedEv(v1);
}


signed int __fastcall MinecraftScreenModel::isPlayerHosting(int a1, unsigned __int64 *a2)
{
  int v2; // r4@1
  unsigned __int64 *v3; // r5@1
  int v4; // r0@1
  int v5; // r1@1
  Player *v6; // r5@1
  NetworkHandler *v7; // r4@2
  char *v8; // r6@2
  signed int result; // r0@2
  char v10; // [sp+7h] [bp-11h]@2

  v2 = a1;
  v3 = a2;
  v4 = ClientInstance::getLevel(*(ClientInstance **)(a1 + 16));
  v6 = (Player *)Level::getPlayer(v4, v5, *v3, *v3 >> 32);
  if ( v6 )
  {
    v7 = (NetworkHandler *)ClientInstance::getClientNetworkSystem(*(ClientInstance **)(v2 + 16));
    v8 = Player::getClientId(v6);
    v10 = Player::getClientSubId(v6);
    result = NetworkHandler::isHostingPlayer(v7, (const NetworkIdentifier *)v8, (const unsigned __int8 *)&v10);
  }
  else
    result = 0;
  return result;
}


  if ( MinecraftScreenModel::canSignInToXBL(*(MinecraftScreenModel **)(v1 + 424)) == 1 )
{
    MinecraftScreenController::_getWeakPtrToThis<StartMenuScreenController>((int)&v17, v1);
    v2 = *(_QWORD *)&v17;
    if ( v18 )
    {
      v3 = (unsigned int *)(v18 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex(v3);
        while ( __strex(v4 + 1, v3) );
      }
      else
        ++*v3;
    }
    v16 = 0;
    v6 = operator new(8u);
    *v6 = v2;
    if ( HIDWORD(v2) )
      v7 = (unsigned int *)(HIDWORD(v2) + 8);
          v8 = __ldrex(v7);
        while ( __strex(v8 + 1, v7) );
        ++*v7;
    LODWORD(v9) = sub_1259B54;
    v15 = v6;
    HIDWORD(v9) = sub_12599CC;
    *(_QWORD *)&v16 = v9;
    MinecraftScreenController::_attemptSignIn(v1, (int)&v15);
    if ( v16 )
      v16();
      v10 = (unsigned int *)(HIDWORD(v2) + 8);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
    v12 = v18;
      v13 = (unsigned int *)(v18 + 8);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (**)(void))(*(_DWORD *)v12 + 12))();
    result = 1;
  }
  else
  {
    result = 0;
  return result;
}


int __fastcall MinecraftScreenModel::getKeyboardRemappingLayout(MinecraftScreenModel *this)
{
  Options *v1; // r0@1

  v1 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  return j_j_j__ZN7Options20getKeyboardRemappingEv(v1);
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  return result;
}


  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 424), 1) )
{
    result = 0;
  }
  else
  {
    v3 = 0;
    if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 424), 0) == 1 )
    {
      v3 = 0;
      if ( !*(_BYTE *)(v1 + 444) )
      {
        v4 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*(MainMenuScreenModel **)(v1 + 424));
        if ( FileDownloadManager::getDownloadState(v4) != 5 )
          v3 = 1;
      }
    }
    result = v3;
  return result;
}


int *__fastcall MinecraftScreenModel::getPlayerName(MinecraftScreenModel *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  Options *v4; // r0@1
  int *v5; // r0@1
  int *result; // r0@1
  SkinRepositoryClientInterface *v7; // r0@2
  Skin *v8; // r0@2
  int *v9; // r0@2

  v2 = a2;
  v3 = (int *)this;
  v4 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(a2 + 16));
  v5 = (int *)Options::getDisplayedUsername(v4);
  sub_DA73B4(v3, v5);
  result = *(int **)(*v3 - 12);
  if ( !result )
  {
    v7 = (SkinRepositoryClientInterface *)ClientInstance::getSkinRepositoryClientInterface(*(ClientInstance **)(v2 + 16));
    v8 = SkinRepositoryClientInterface::getSelectedSkinOrDefault(v7, 0);
    v9 = (int *)Skin::getLocName(v8);
    result = EntityInteraction::setInteractText(v3, v9);
  }
  return result;
}


  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v2 + 424), 0) == 1 )
{
    v3 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*(MainMenuScreenModel **)(v2 + 424));
    if ( FileUploadManager::getUploadState(v3) == 4 )
      v1 = 1;
  }
  return v1;
}


  if ( MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v1 + 432))
{
    || *(_BYTE *)(v1 + 456)
    && PlayScreenModel::getRealmsFirstFetchComplete(*(PlayScreenModel **)(v1 + 432)) == 1
    && !PlayScreenModel::getRealmsStatus(*(PlayScreenModel **)(v1 + 432)) )
  {
    result = 0;
  }
  else
    v2 = MinecraftScreenModel::getNumberOfOwnedRealms(*(MinecraftScreenModel **)(v1 + 432));
    v3 = (Options *)MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(v1 + 432));
    v4 = Options::getShowRealmsTrialButtonFromPlayScreen(v3);
    if ( v2 < v4 )
      v2 = v4;
    if ( v2 > 0 )
      result = 1;
  return result;
}


int __fastcall MinecraftScreenModel::isXBLMultiplayerEnabled(MinecraftScreenModel *this)
{
  int v1; // r0@1

  v1 = MinecraftGame::getMultiplayerServiceManager(*((MinecraftGame **)this + 3));
  return j_j_j__ZN6Social25MultiplayerServiceManager15isInviteEnabledENS_28MultiplayerServiceIdentifierE(v1, 0);
}


void __fastcall MinecraftScreenModel::joinRealmsWorld(int a1, __int64 *a2, int a3, int a4)
{
  MinecraftScreenModel::joinRealmsWorld(a1, a2, a3, a4);
}


void __fastcall MinecraftScreenModel::navigateToRemixUploadScreen(int a1, int a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@4
  int v6; // r4@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r0@10
  unsigned int *v9; // r5@14
  unsigned int v10; // r0@16
  int v11; // r4@21
  unsigned int *v12; // r1@22
  unsigned int v13; // r0@24
  unsigned int *v14; // r5@28
  unsigned int v15; // r0@30
  int v16; // [sp+0h] [bp-20h]@1
  int v17; // [sp+4h] [bp-1Ch]@1
  char v18; // [sp+8h] [bp-18h]@7
  int v19; // [sp+Ch] [bp-14h]@7

  v2 = *(_QWORD *)(a1 + 20);
  v16 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v17 = v3;
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  SceneFactory::createRemixUploadScreen((unsigned __int64 *)&v18, SHIDWORD(v2), (int)&v16);
  SceneStack::pushScreen(v2, (int)&v18, 0);
  v6 = v19;
  if ( v19 )
    v7 = (unsigned int *)(v19 + 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  v11 = v17;
  if ( v17 )
    v12 = (unsigned int *)(v17 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
}


int __fastcall MinecraftScreenModel::getCommands(MinecraftScreenModel *this)
{
  Minecraft *v1; // r0@1

  v1 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)this + 4));
  return Minecraft::getCommands(v1);
}


int __fastcall MinecraftScreenModel::getCancellationToken(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 32);
  v2 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    result = v2 + 8;
    if ( &pthread_create )
    {
      __dmb();
      do
        v3 = __ldrex((unsigned int *)result);
      while ( __strex(v3 + 1, (unsigned int *)result) );
    }
    else
      ++*(_DWORD *)result;
  }
  return result;
}


void __fastcall MinecraftScreenModel::updateRealmsTrialAvailable(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void (__fastcall *v4)(int *, int, signed int); // r3@1
  int v5; // [sp+0h] [bp-20h]@2
  void (*v6)(void); // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@2

  v2 = a2;
  v3 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v6 = 0;
  v4 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
  if ( v4 )
  {
    v4(&v5, v2, 2);
    v7 = *(_DWORD *)(v2 + 12);
    v6 = *(void (**)(void))(v2 + 8);
  }
  RealmsAPI::updateTrialAvailable(v3, (int)&v5);
  if ( v6 )
    v6();
}


void __fastcall MinecraftScreenModel::getStoreId(MinecraftScreenModel *this, int a2)
{
  OfferRepository *v2; // r4@1
  int v3; // r0@1

  v2 = this;
  v3 = MinecraftGame::getOfferRepository(*(MinecraftGame **)(a2 + 12));
  OfferRepository::getStoreId(v2, v3, 0);
}


void __fastcall MinecraftScreenModel::acceptRealmsLink(int a1, const void **a2, int a3)
{
  int v3; // r5@1
  const void **v4; // r4@1
  int v5; // r6@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  int v7; // [sp+0h] [bp-20h]@2
  void (*v8)(void); // [sp+8h] [bp-18h]@1
  int v9; // [sp+Ch] [bp-14h]@2

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v8 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  if ( v6 )
  {
    v6(&v7, v3, 2);
    v9 = *(_DWORD *)(v3 + 12);
    v8 = *(void (**)(void))(v3 + 8);
  }
  RealmsAPI::acceptLink(v5, v4, (int)&v7);
  if ( v8 )
    v8();
}


void __fastcall MinecraftScreenModel::fireEventInventoryOpened(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel *v2; // r5@1
  Player *v3; // r4@1
  int v4; // r0@1
  MinecraftEventing *v5; // r0@1
  unsigned int v6; // r2@1

  v2 = this;
  v3 = (Player *)a2;
  v4 = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  MinecraftEventing::fireEventAwardAchievement(v4, 40);
  v5 = (MinecraftEventing *)ClientInstance::getLocalPlayer(*((ClientInstance **)v2 + 4));
  if ( v3 )
    v3 = (Player *)2;
  j_j_j__ZN17MinecraftEventing29fireEventCraftingSessionStartEP6Playerj(v5, v3, v6);
}


void __fastcall MinecraftScreenModel::sendRealmsWhitelistNotification(int a1, __int64 *a2)
{
  __int64 *v2; // r6@1
  unsigned __int64 *v3; // r4@1
  __int64 v4; // r0@1
  char *v5; // r5@1
  unsigned int v6; // r7@1
  void *v7; // r4@4
  void *v8; // r6@4
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  int *v11; // r0@14
  __int64 v12; // [sp+4h] [bp-34h]@1
  char *v13; // [sp+Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = (unsigned __int64 *)MinecraftGame::getMultiplayerServiceManager(*(MinecraftGame **)(a1 + 12));
  v4 = *v2;
  v5 = 0;
  v12 = 0LL;
  v13 = 0;
  v6 = (HIDWORD(v4) - (signed int)v4) >> 2;
  if ( v6 )
  {
    if ( v6 >= 0x40000000 )
      sub_DA7414();
    v5 = (char *)operator new(HIDWORD(v4) - v4);
    v4 = *v2;
  }
  v12 = __PAIR__(
          std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
            v4,
            SHIDWORD(v4),
            (int)v5),
          (unsigned int)v5);
  v13 = &v5[4 * v6];
  Social::MultiplayerServiceManager::sendRealmsWhitelistNotification(v3, &v12);
  v8 = (void *)HIDWORD(v12);
  v7 = (void *)v12;
  if ( (_DWORD)v12 != HIDWORD(v12) )
    do
    {
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
      {
        v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
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
          j_j_j_j_j__ZdlPv_9(v11);
      }
      v7 = (char *)v7 + 4;
    }
    while ( v7 != v8 );
    v7 = (void *)v12;
  if ( v7 )
    operator delete(v7);
}


void __fastcall MinecraftScreenModel::startLocalServer(MinecraftScreenModel *this, const LevelSummary *a2)
{
  MinecraftScreenModel::startLocalServer(this, a2);
}


signed int __fastcall MinecraftScreenModel::isRealmOwner(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  Social::MultiplayerServiceManager *v2; // r0@1
  int v3; // r5@1
  char *v4; // r6@2
  signed int v5; // r4@2
  _DWORD *v6; // r0@2
  char *v7; // r5@2
  size_t v8; // r2@2
  unsigned int *v9; // r1@6
  signed int v10; // r0@8
  void *s2; // [sp+0h] [bp-18h]@2

  v1 = this;
  v2 = (Social::MultiplayerServiceManager *)MinecraftGame::getMultiplayerServiceManager(*((MinecraftGame **)this + 3));
  v3 = Social::MultiplayerServiceManager::getRealmWorld(v2);
  if ( v3 )
  {
    MinecraftScreenModel::getCurrentXUID((MinecraftScreenModel *)&s2, (int)v1);
    v4 = (char *)s2;
    v5 = 0;
    v6 = *(_DWORD **)(v3 + 20);
    v7 = (char *)s2 - 12;
    v8 = *(v6 - 3);
    if ( v8 == *((_DWORD *)s2 - 3) && !memcmp(v6, s2, v8) )
      v5 = 1;
    if ( (int *)v7 != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v4 - 4);
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
        j_j_j_j_j__ZdlPv_9(v7);
    }
  }
  else
  return v5;
}


  if ( MinecraftScreenModel::_isPremiumLocked(*(MinecraftScreenModel **)(v2 + 424), *(const PackManifest **)(a2 + 60)) != 1 )
{
  if ( PackManifest::getPackOrigin(v3) != 1 )
    v4 = 1;
  return v4;
}


void __fastcall MinecraftScreenModel::getCurrentXUID(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel::getCurrentXUID(this, a2);
}


void __fastcall MinecraftScreenModel::navigateToAchievementScreen(MinecraftScreenModel *this)
{
  __int64 v1; // kr00_8@1
  int v2; // r4@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r5@8
  unsigned int v6; // r0@10
  int v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@1

  v1 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createAchievementScreen((SceneFactory *)&v7, (SceneStack *)HIDWORD(v1), v1);
  SceneStack::pushScreen(v1, (int)&v7, 0);
  v2 = v8;
  if ( v8 )
  {
    v3 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
}


int __fastcall MinecraftScreenModel::isKeyboardEnabled(MinecraftScreenModel *this)
{
  int v1; // r0@1

  v1 = ClientInstance::getKeyboardManager(*((ClientInstance **)this + 4));
  return (*(int (**)(void))(*(_DWORD *)v1 + 24))();
}


signed int __fastcall MinecraftScreenModel::isPremiumOwnedMissing(MinecraftScreenModel *this, const PackIdVersion *a2)
{
  MinecraftScreenModel *v2; // r5@1
  const PackIdVersion *v3; // r4@1
  ResourcePackRepository *v4; // r0@1
  signed int result; // r0@2
  int v6; // r5@3
  int v7; // r1@3
  int v8; // r2@3
  int v9; // r3@3
  Entitlement *v10; // r4@3
  void *v11; // r0@3
  void *v12; // r0@4
  void *v13; // r0@5
  unsigned int *v14; // r2@7
  signed int v15; // r1@9
  unsigned int *v16; // r2@11
  signed int v17; // r1@13
  unsigned int *v18; // r2@15
  signed int v19; // r1@17
  int v20; // [sp+0h] [bp-48h]@3
  int v21; // [sp+4h] [bp-44h]@3
  int v22; // [sp+8h] [bp-40h]@3
  int v23; // [sp+Ch] [bp-3Ch]@3
  int v24; // [sp+10h] [bp-38h]@3
  int v25; // [sp+18h] [bp-30h]@5
  int v26; // [sp+1Ch] [bp-2Ch]@4
  int v27; // [sp+20h] [bp-28h]@3
  char v28; // [sp+28h] [bp-20h]@3

  v2 = this;
  v3 = a2;
  v4 = (ResourcePackRepository *)MinecraftGame::getResourcePackRepository(*((MinecraftGame **)this + 3));
  if ( ResourcePackRepository::getResourcePackForPackId(v4, v3) )
  {
    result = 0;
  }
  else
    v6 = MinecraftGame::getEntitlementManager(*((MinecraftGame **)v2 + 3));
    v7 = *((_DWORD *)v3 + 1);
    v8 = *((_DWORD *)v3 + 2);
    v9 = *((_DWORD *)v3 + 3);
    v20 = *(_DWORD *)v3;
    v21 = v7;
    v22 = v8;
    v23 = v9;
    SemVersion::SemVersion((int)&v24, (int)v3 + 16);
    v28 = *((_BYTE *)v3 + 40);
    v10 = (Entitlement *)EntitlementManager::getEntitlement(v6, (int)&v20);
    v11 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
    {
      v14 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j_j__ZdlPv_9(v11);
    }
    v12 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v26 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v25 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j_j__ZdlPv_9(v13);
    result = Entitlement::isOwned(v10);
  return result;
}


  if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) == 1 )
{
    if ( LevelData::achievementsWillBeDisabledOnLoad((LevelData *)(v1 + 592)) )
      return 1;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    if ( (*(int (**)(void))(*(_DWORD *)v3 + 16))() )
  return MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v1 + 424)) ^ 1;
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  return result;
}


int __fastcall MinecraftScreenModel::sendSetAbilitiesPacket(int a1, int a2, unsigned __int64 *a3, int a4)
{
  int v4; // r7@1
  int v5; // r4@1
  unsigned __int64 *v6; // r5@1
  int v7; // r6@1
  Level *v8; // r0@1
  int v9; // r0@1
  int v10; // r3@1
  int v11; // r0@1
  char v13; // [sp+10h] [bp-48h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = (Level *)ClientInstance::getLevel(*(ClientInstance **)(a1 + 16));
  v9 = Level::getAdventureSettings(v8);
  AdventureSettingsPacket::AdventureSettingsPacket((int)&v13, v9, v7, v10, *v6, *v6 >> 32, v5);
  v11 = ClientInstance::getPacketSender(*(ClientInstance **)(v4 + 16));
  return (*(int (**)(void))(*(_DWORD *)v11 + 8))();
}


signed int __fastcall MinecraftScreenModel::isInputModeGamepad(MinecraftScreenModel *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = ClientInstance::getCurrentInputMode(*((ClientInstance **)this + 4));
  v2 = 0;
  if ( v1 == 3 )
    v2 = 1;
  return v2;
}


void __fastcall MinecraftScreenModel::navigateToVRSchemeScreen(MinecraftScreenModel *this, bool a2)
{
  MinecraftScreenModel *v2; // r5@1
  bool v3; // r4@1
  int v4; // r6@1
  int v5; // r4@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r0@4
  unsigned int *v8; // r5@8
  unsigned int v9; // r0@10
  int v10; // [sp+0h] [bp-18h]@1
  int v11; // [sp+4h] [bp-14h]@1

  v2 = this;
  v3 = a2;
  v4 = ClientInstance::getCurrentSceneStack(*((ClientInstance **)this + 4));
  SceneFactory::createVRControlScreen((SceneFactory *)&v10, *((_DWORD *)v2 + 6), v3);
  SceneStack::pushScreen(v4, (int)&v10, 0);
  v5 = v11;
  if ( v11 )
  {
    v6 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
}


void __fastcall MinecraftScreenModel::navigateToConvertPurchasesToXBLScreen(int a1, int a2)
{
  MinecraftScreenModel::navigateToConvertPurchasesToXBLScreen(a1, a2);
}


void __fastcall MinecraftScreenModel::navigateToXblFriendFinderScreen(MinecraftScreenModel *this)
{
  __int64 v1; // kr00_8@1
  int v2; // r4@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r5@8
  unsigned int v6; // r0@10
  int v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@1

  v1 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createXblFriendFinderScreen((SceneFactory *)&v7, SHIDWORD(v1));
  SceneStack::pushScreen(v1, (int)&v7, 0);
  v2 = v8;
  if ( v8 )
  {
    v3 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  return result;
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  return result;
}


int (**__fastcall MinecraftScreenModel::fireEventWorldGenerated(int a1, const char **a2, LevelSettings *a3, char a4))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  char v4; // r4@1
  LevelSettings *v5; // r5@1
  const char **v6; // r6@1
  int v7; // r0@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = MinecraftGame::getEventing(*(MinecraftGame **)(a1 + 12));
  return j_j_j__ZN17MinecraftEventing23fireEventWorldGeneratedERKSsRK13LevelSettingsb(v7, v6, v5, v4);
}


void __fastcall MinecraftScreenModel::navigateToDisconnectScreen(int a1, int *a2, int *a3)
{
  int v3; // r7@1
  int *v4; // r4@1
  int *v5; // r5@1
  __int64 v6; // r6@2
  int *v7; // r0@2
  int v8; // r4@2
  unsigned int *v9; // r1@3
  unsigned int v10; // r0@5
  __int64 v11; // r6@7
  int *v12; // r0@7
  int v13; // r4@7
  unsigned int *v14; // r1@8
  unsigned int v15; // r0@10
  unsigned int *v16; // r5@14
  unsigned int v17; // r0@16
  unsigned int *v18; // r5@20
  unsigned int v19; // r0@22
  void *v20; // r0@27
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  int v23; // [sp+Ch] [bp-34h]@7
  char v24; // [sp+10h] [bp-30h]@7
  int v25; // [sp+14h] [bp-2Ch]@7
  int v26; // [sp+1Ch] [bp-24h]@2
  char v27; // [sp+20h] [bp-20h]@2
  int v28; // [sp+24h] [bp-1Ch]@2

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( ClientInstance::isPrimaryClient(*(ClientInstance **)(a1 + 16)) == 1 )
  {
    MinecraftScreenModel::navigateToStartScreen((MinecraftScreenModel *)v3);
    v6 = *(_QWORD *)(v3 + 20);
    v7 = (int *)sub_DA7364((void **)&v26, (const char *)&unk_257BC67);
    SceneFactory::createDisconnectScreen((unsigned __int64 *)&v27, SHIDWORD(v6), v5, v4, v7);
    SceneStack::pushScreen(v6, (int)&v27, 0);
    v8 = v28;
    if ( v28 )
    {
      v9 = (unsigned int *)(v28 + 4);
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
        v16 = (unsigned int *)(v8 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
    }
    v20 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v26 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        goto LABEL_42;
LABEL_41:
      v22 = (*v21)--;
LABEL_42:
      if ( v22 <= 0 )
        j_j_j_j_j__ZdlPv_9(v20);
      return;
  }
  else
    v11 = *(_QWORD *)(v3 + 20);
    v12 = (int *)sub_DA7364((void **)&v23, (const char *)&unk_257BC67);
    SceneFactory::createDisconnectScreen((unsigned __int64 *)&v24, SHIDWORD(v11), v5, v4, v12);
    SceneStack::pushScreen(v11, (int)&v24, 1);
    v13 = v25;
    if ( v25 )
      v14 = (unsigned int *)(v25 + 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        v18 = (unsigned int *)(v13 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
    v20 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v23 - 4);
      goto LABEL_41;
}


void __fastcall MinecraftScreenModel::removeFromRealmsBlocklist(int a1, __int64 *a2, const void **a3, int a4)
{
  int v4; // r5@1
  const void **v5; // r4@1
  __int64 *v6; // r7@1
  int v7; // r6@1
  void (__fastcall *v8)(int *, int, signed int); // r3@1
  int v9; // [sp+0h] [bp-30h]@2
  void (*v10)(void); // [sp+8h] [bp-28h]@1
  int v11; // [sp+Ch] [bp-24h]@2
  __int64 v12; // [sp+10h] [bp-20h]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v12 = *v6;
  v10 = 0;
  v8 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v8 )
  {
    v8(&v9, v4, 2);
    v11 = *(_DWORD *)(v4 + 12);
    v10 = *(void (**)(void))(v4 + 8);
  }
  RealmsAPI::removeFromBlocklist(v7, &v12, v5, (int)&v9);
  if ( v10 )
    v10();
}


  if ( MinecraftScreenModel::isHolographic(*(MinecraftScreenModel **)(v1 + 424)) == 1 )
{
    v3 = MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(v1 + 424));
    v4 = (Option *)Options::get(v3, 83);
    v5 = Option::getValues(v4);
    if ( (unsigned int)((signed int)((*(_QWORD *)v5 >> 32) - *(_QWORD *)v5) >> 2) > 1 )
      v2 = 1;
  }
  return v2;
}


void __fastcall MinecraftScreenModel::getUserProfileDataByXuid(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r6@1
  void *v6; // r0@1
  int v7; // r4@2
  unsigned int *v8; // r1@3
  unsigned int v9; // r0@5
  unsigned int *v10; // r5@9
  unsigned int v11; // r0@11
  unsigned int *v12; // r2@17
  signed int v13; // r1@19
  int v14; // [sp+4h] [bp-24h]@1
  Social::User *v15; // [sp+8h] [bp-20h]@1
  int v16; // [sp+Ch] [bp-1Ch]@2

  v3 = a1;
  v4 = a3;
  ClientInstance::getUser((ClientInstance *)&v15, *(_DWORD *)(a2 + 16));
  v5 = Social::User::getLiveUser(v15);
  sub_DA73B4(&v14, v4);
  Social::XboxLiveUserManager::getUserProfileDataByXuid(v3, v5, (int **)&v14);
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  }
  v7 = v16;
  if ( v16 )
    v8 = (unsigned int *)(v16 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
}


void __fastcall MinecraftScreenModel::getResourcePackProgress(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel::getResourcePackProgress(this, a2);
}


  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 424), 1) )
{
    result = 0;
  }
  else
  {
    v3 = 0;
    if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 424), 0) == 1 )
    {
      v3 = 0;
      if ( !*(_BYTE *)(v1 + 448) )
      {
        v4 = (FileUploadManager *)MainMenuScreenModel::getWorldFileUploadManager(*(MainMenuScreenModel **)(v1 + 424));
        if ( FileUploadManager::getUploadState(v4) != 5 )
          v3 = 1;
      }
    }
    result = v3;
  return result;
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 1;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 52))() ^ 1;
  return result;
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  return result;
}


void __fastcall MinecraftScreenModel::addSelectedSkinToRecentList(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  SkinRepositoryClientInterface *v2; // r0@1
  Skin *v3; // r5@1
  int v4; // r4@2
  char *v5; // r1@2

  v1 = this;
  v2 = (SkinRepositoryClientInterface *)ClientInstance::getSkinRepositoryClientInterface(*((ClientInstance **)this + 4));
  v3 = SkinRepositoryClientInterface::getSelectedSkin(v2);
  if ( v3 )
  {
    v4 = ClientInstance::getSkinRepositoryClientInterface(*((ClientInstance **)v1 + 4));
    v5 = Skin::getSerializable(v3);
    j_j_j__ZN29SkinRepositoryClientInterface13addRecentSkinERKSs(v4, (Options **)v5);
  }
}


void __fastcall MinecraftScreenModel::navigateToDisconnectScreen(int a1, int *a2, int *a3)
{
  MinecraftScreenModel::navigateToDisconnectScreen(a1, a2, a3);
}


void (__fastcall *__fastcall MinecraftScreenModel::generateFilePickerSettingsForExport(MinecraftScreenModel *this, int a2))(int **a1, int a2, int *a3)
{
  int v2; // r5@1
  MinecraftScreenModel *v3; // r4@1
  int v4; // r6@1
  int v5; // r0@1
  void *v6; // r0@1
  Level *v7; // r0@2
  char *v8; // r0@2
  int *v9; // r0@2
  _DWORD *v10; // r0@2
  int v11; // r3@2
  int (*v12)(void); // r3@2
  int v13; // r1@2
  void (__fastcall *result)(int **, int, int *); // r0@2
  unsigned int *v15; // r2@5
  signed int v16; // r1@7
  int v17; // [sp+4h] [bp-2Ch]@1
  _DWORD *v18; // [sp+8h] [bp-28h]@2
  int v19; // [sp+Ch] [bp-24h]@2
  int (*v20)(void); // [sp+10h] [bp-20h]@2
  int v21; // [sp+14h] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  v4 = MinecraftGame::getLevelArchiver(*(MinecraftGame **)(a2 + 12));
  v5 = ClientInstance::getLevel(*(ClientInstance **)(v2 + 16));
  Level::getLevelId((Level *)&v17, v5);
  LevelArchiver::generateFilePickerSettings((int)v3, v4, 0);
  v6 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v17 - 4);
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
      j_j_j_j_j__ZdlPv_9(v6);
  }
  v7 = (Level *)ClientInstance::getLevel(*(ClientInstance **)(v2 + 16));
  v8 = Level::getLevelData(v7);
  v9 = (int *)LevelData::getLevelName((LevelData *)v8);
  FilePickerSettings::setDefaultFileName((int)v3, v9);
  FilePickerSettings::setPickerType((int)v3, 2);
  v10 = operator new(4u);
  *v10 = v2;
  v18 = v10;
  v11 = v19;
  *(_QWORD *)&v18 = *((_QWORD *)v3 + 4);
  *((_DWORD *)v3 + 8) = v10;
  *((_DWORD *)v3 + 9) = v11;
  v12 = (int (*)(void))*((_DWORD *)v3 + 10);
  *((_DWORD *)v3 + 10) = sub_CF1DB4;
  v13 = *((_DWORD *)v3 + 11);
  result = sub_CF1934;
  v20 = v12;
  v21 = v13;
  *((_DWORD *)v3 + 11) = sub_CF1934;
  if ( v12 )
    result = (void (__fastcall *)(int **, int, int *))v12();
  return result;
}


unsigned int *__fastcall MinecraftScreenModel::getExistingXboxLiveProfile(int a1, int a2, int **a3)
{
  int v3; // r5@1
  int **v4; // r4@1
  int v5; // r0@1
  unsigned int *result; // r0@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int *v9; // r5@8
  Social::User *v10; // [sp+0h] [bp-18h]@1
  int v11; // [sp+4h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  ClientInstance::getUser((ClientInstance *)&v10, *(_DWORD *)(a2 + 16));
  v5 = Social::User::getLiveUser(v10);
  result = Social::XboxLiveUserManager::getExistingXboxLiveProfile(v3, v5, v4);
  v7 = v11;
  if ( v11 )
  {
    v8 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = (unsigned int *)__ldrex(v8);
      while ( __strex((unsigned int)result - 1, v8) );
    }
    else
      result = (unsigned int *)(*v8)--;
    if ( result == (unsigned int *)1 )
      v9 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (unsigned int *)__ldrex(v9);
        while ( __strex((unsigned int)result - 1, v9) );
      }
      else
        result = (unsigned int *)(*v9)--;
      if ( result == (unsigned int *)1 )
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  return result;
}


int __fastcall MinecraftScreenModel::handleHidePaperDollButtonPress(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  Options *v2; // r5@1
  Options *v3; // r0@1
  int v4; // r1@1

  v1 = this;
  v2 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  v3 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v1 + 4));
  v4 = Options::getHidePaperDoll(v3) ^ 1;
  return j_j_j__ZN7Options16setHidePaperDollEb(v2, v4);
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  return result;
}


  if ( MinecraftScreenModel::wasXBLSessionCreated(*(MinecraftScreenModel **)(v1 + 380))
{
    || MinecraftScreenModel::isMultiPlayerGame(*(MinecraftScreenModel **)(v1 + 380)) != 1 )
  {
    result = 0;
  }
  else
    result = MinecraftScreenModel::isXBLSessionInfoValid(*(MinecraftScreenModel **)(v1 + 380)) ^ 1;
  return result;
}


int __fastcall MinecraftScreenModel::savePlayerInventoryOptions(int a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r0@1

  v2 = a2;
  v3 = ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 16));
  return j_j_j__ZN11LocalPlayer19setInventoryOptionsERK16InventoryOptions(v3, v2);
}


int __fastcall MinecraftScreenModel::getCurrentRealm(MinecraftScreenModel *this)
{
  Social::MultiplayerServiceManager *v1; // r0@1

  v1 = (Social::MultiplayerServiceManager *)MinecraftGame::getMultiplayerServiceManager(*((MinecraftGame **)this + 3));
  return Social::MultiplayerServiceManager::getRealmWorld(v1);
}


signed int __fastcall MinecraftScreenModel::isUserConnectedToPlatform(MinecraftScreenModel *this)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  signed int result; // r0@15
  Social::User *v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  ClientInstance::getUser((ClientInstance *)&v8, *((_DWORD *)this + 4));
  v1 = Social::User::getPlatformConnectionState(v8);
  v2 = v9;
  if ( v9 )
  {
    v3 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  result = 0;
  if ( v1 == 3 )
    result = 1;
  return result;
}


void __fastcall MinecraftScreenModel::getRealmsOnlinePlayers(int a1, int a2)
{
  MinecraftScreenModel::getRealmsOnlinePlayers(a1, a2);
}


int __fastcall MinecraftScreenModel::deleteLevel(int a1)
{
  Minecraft *v1; // r0@1
  int v2; // r0@1

  v1 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(a1 + 16));
  v2 = Minecraft::getLevelSource(v1);
  return (*(int (**)(void))(*(_DWORD *)v2 + 40))();
}


void __fastcall MinecraftScreenModel::navigateToPlatformNetworkConnectConfirmationScreen(int a1, int a2)
{
  __int64 v2; // r4@1
  int v3; // r6@1
  void (__fastcall *v4)(int *); // r3@1
  int v5; // r4@3
  unsigned int *v6; // r1@4
  unsigned int v7; // r0@6
  unsigned int *v8; // r5@10
  unsigned int v9; // r0@12
  int v10; // [sp+0h] [bp-28h]@2
  void (*v11)(void); // [sp+8h] [bp-20h]@1
  int v12; // [sp+Ch] [bp-1Ch]@2
  char v13; // [sp+10h] [bp-18h]@3
  int v14; // [sp+14h] [bp-14h]@3

  v2 = *(_QWORD *)(a1 + 20);
  v3 = a2;
  v11 = 0;
  v4 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v4 )
  {
    v4(&v10);
    v12 = *(_DWORD *)(v3 + 12);
    v11 = *(void (**)(void))(v3 + 8);
  }
  SceneFactory::createPlatformNetworkConnectConfirmationScreen((unsigned __int64 *)&v13, SHIDWORD(v2), (int)&v10);
  SceneStack::pushScreen(v2, (int)&v13, 0);
  v5 = v14;
  if ( v14 )
    v6 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  if ( v11 )
    v11();
}


unsigned int __fastcall MinecraftScreenModel::addFriend(int a1, int *a2, int a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  int (__cdecl *v6)(__int64 *, __int64 *); // r1@1
  unsigned int result; // r0@1
  int v8; // r4@3
  unsigned int *v9; // r1@4
  unsigned int *v10; // r5@10
  __int64 v11; // [sp+0h] [bp-28h]@1
  int (__cdecl *v12)(__int64 *, __int64 *); // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1
  Social::User *v14; // [sp+10h] [bp-18h]@1
  int v15; // [sp+14h] [bp-14h]@3

  v3 = a2;
  v4 = a3;
  ClientInstance::getUser((ClientInstance *)&v14, *(_DWORD *)(a1 + 16));
  v5 = Social::User::getLiveUser(v14);
  v11 = *(_QWORD *)v4;
  v6 = *(int (__cdecl **)(__int64 *, __int64 *))(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v12 = v6;
  v13 = *(_DWORD *)(v4 + 12);
  result = Social::XboxLiveUserManager::addFriend(v5, v3, (int)&v11);
  if ( v12 )
    result = v12(&v11, &v11);
  v8 = v15;
  if ( v15 )
  {
    v9 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
    }
    else
      result = (*v9)--;
    if ( result == 1 )
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
      }
      else
        result = (*v10)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  return result;
}


int __fastcall MinecraftScreenModel::supportsGamepad(MinecraftScreenModel *this)
{
  void *v1; // r0@2

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  return (*(int (**)(void))(**(_DWORD **)v1 + 172))();
}


int __fastcall MinecraftScreenModel::createInfiniteInviteLink(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  __int64 *v4; // r6@1
  int v5; // r4@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  int result; // r0@3
  int v8; // [sp+0h] [bp-28h]@2
  int (*v9)(void); // [sp+8h] [bp-20h]@1
  int v10; // [sp+Ch] [bp-1Ch]@2
  __int64 v11; // [sp+10h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v11 = *v4;
  v9 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  if ( v6 )
  {
    v6(&v8, v3, 2);
    v10 = *(_DWORD *)(v3 + 12);
    v9 = *(int (**)(void))(v3 + 8);
  }
  result = RealmsAPI::createInfiniteInviteLink(v5, &v11, (int)&v8);
  if ( v9 )
    result = v9();
  return result;
}


signed int __fastcall MinecraftScreenModel::addExternalServer(int a1, int *a2, void **a3, int a4)
{
  int v4; // r4@1
  void **v5; // r5@1
  int *v6; // r6@1
  ExternalServerFile *v7; // r0@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = (ExternalServerFile *)MinecraftGame::getExternalServer(*(MinecraftGame **)(a1 + 12));
  return j_j_j__ZN18ExternalServerFile9addServerERKSsS1_i(v7, v6, v5, v4);
}


void __fastcall MinecraftScreenModel::navigateToXblGamerProfileCardScreen(MinecraftScreenModel *this, Social::XboxProfile *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r4@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r5@8
  unsigned int v7; // r0@10
  int v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  v2 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createXblGamerProfileCardScreen((SceneFactory *)&v8, (Social::XboxProfile *)HIDWORD(v2), (int)a2);
  SceneStack::pushScreen(v2, (int)&v8, 0);
  v3 = v9;
  if ( v9 )
  {
    v4 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
}


char *__fastcall MinecraftScreenModel::saveScreenshots(int a1, int *a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 *v4; // r5@1
  int v5; // r4@1
  void *v6; // r6@1
  int v7; // r0@2
  int v8; // r7@3
  int *v9; // r4@4
  char *v10; // r8@4
  unsigned int v11; // r10@4
  const char *v12; // r1@5
  unsigned int v13; // r7@5
  int v14; // r0@6
  __int32 v15; // r1@10
  struct tm *v16; // r0@12
  char *v17; // r11@12
  void *v18; // r8@12
  char *v19; // r6@12
  int v20; // r6@13
  int v21; // r7@14
  char v22; // r0@16
  const void **v23; // r0@19
  unsigned int v24; // r0@19
  const void **v25; // r0@19
  int v26; // r4@19
  char *v27; // r0@19
  void *v28; // r0@20
  signed int v29; // r7@23
  int v30; // r11@25
  Core::FileImpl *v31; // r4@25
  void *v32; // r8@25
  char v33; // r6@25
  unsigned __int64 v34; // r2@25
  void *v35; // r0@32
  bool v36; // zf@33
  char v37; // r0@40
  unsigned int *v38; // r2@50
  signed int v39; // r1@52
  unsigned int *v40; // r2@54
  signed int v41; // r1@56
  unsigned int *v42; // r2@58
  signed int v43; // r1@60
  unsigned int *v44; // r2@62
  signed int v45; // r1@64
  signed int v46; // r0@83
  signed int v47; // r1@84
  void *v48; // r0@86
  char *result; // r0@87
  unsigned int *v50; // r2@89
  signed int v51; // r1@91
  int (**v52)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+50h] [bp-4Ch]@4
  int (**v53)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+54h] [bp-48h]@4
  void **v54; // [sp+60h] [bp-3Ch]@4
  void **v55; // [sp+64h] [bp-38h]@4
  void **v56; // [sp+68h] [bp-34h]@4
  void **v57; // [sp+6Ch] [bp-30h]@4
  void **v58; // [sp+70h] [bp-2Ch]@4
  int v59; // [sp+74h] [bp-28h]@3
  unsigned __int64 *v60; // [sp+88h] [bp-14h]@1
  RakNet *v61; // [sp+9Ch] [bp+0h]@1
  char v62; // [sp+A0h] [bp+4h]@48
  void (*v63)(void); // [sp+A8h] [bp+Ch]@48
  char v64; // [sp+B4h] [bp+18h]@4
  void (__fastcall *v65)(Core::FileImpl *, Core::FileImpl *, signed int); // [sp+BCh] [bp+20h]@43
  char v66; // [sp+C4h] [bp+28h]@40
  __int64 v67; // [sp+C8h] [bp+2Ch]@39
  char *v68; // [sp+D0h] [bp+34h]@25
  int v69; // [sp+D4h] [bp+38h]@25
  char v70; // [sp+D8h] [bp+3Ch]@25
  void (__cdecl *v71)(char *); // [sp+E0h] [bp+44h]@25
  char v72; // [sp+E8h] [bp+4Ch]@25
  void *v73; // [sp+ECh] [bp+50h]@25
  int v74; // [sp+F0h] [bp+54h]@25
  int v75; // [sp+F4h] [bp+58h]@19
  char *v76; // [sp+F8h] [bp+5Ch]@19
  char *v77; // [sp+FCh] [bp+60h]@19
  int v78; // [sp+100h] [bp+64h]@19
  void **v79; // [sp+104h] [bp+68h]@4
  int v80; // [sp+108h] [bp+6Ch]@33
  void **v81; // [sp+10Ch] [bp+70h]@12
  void **v82; // [sp+110h] [bp+74h]@19
  int v83; // [sp+12Ch] [bp+90h]@33
  int v84; // [sp+134h] [bp+98h]@32
  int v85; // [sp+138h] [bp+9Ch]@33
  char *v86; // [sp+1C0h] [bp+124h]@10
  int v87; // [sp+1C4h] [bp+128h]@10
  char v88; // [sp+1C8h] [bp+12Ch]@10
  void (__cdecl *v89)(char *); // [sp+1D0h] [bp+134h]@10
  File *v90; // [sp+1DCh] [bp+140h]@10
  int v91; // [sp+1E0h] [bp+144h]@5
  int v92; // [sp+1E4h] [bp+148h]@12
  int v93; // [sp+1E8h] [bp+14Ch]@12
  int v94; // [sp+1ECh] [bp+150h]@12
  int v95; // [sp+1F0h] [bp+154h]@12
  int v96; // [sp+1F4h] [bp+158h]@12
  int v97; // [sp+204h] [bp+168h]@1
  char v98; // [sp+20Ch] [bp+170h]@19
  int v99; // [sp+210h] [bp+174h]@19
  int v100; // [sp+614h] [bp+578h]@5
  char v101; // [sp+618h] [bp+57Ch]@5
  int v102; // [sp+A18h] [bp+97Ch]@5
  char v103; // [sp+A1Ch] [bp+980h]@40

  v4 = a3;
  v5 = a4;
  v60 = a3;
  v61 = _stack_chk_guard;
  sub_DA73B4(&v97, a2);
  v6 = j_zipOpen64(v97, 0);
  if ( !v6 )
    v7 = *(_DWORD *)_errno(0);
  v59 = v5;
  v8 = *v4;
  if ( *v4 >> 32 != v8 )
  {
    v9 = (int *)&v79;
    v10 = &v64;
    v58 = off_26D3F60;
    v11 = 0;
    v57 = (void **)off_26D3F6C;
    v56 = (void **)off_26D3F68;
    v54 = off_26D3F84;
    v55 = off_26D3F80[0];
    v53 = &pthread_create;
    v52 = &pthread_create;
    do
    {
      _aeabi_memclr8(&v91, 36);
      v12 = *(const char **)(v8 + 4 * v11);
      v13 = *((_DWORD *)v12 - 3);
      v100 = 1023;
      v101 = 0;
      v102 = 0;
      if ( v13 < 0x400 )
      {
        if ( v13 )
          _aeabi_memcpy(&v101, v12, v13);
        *((_BYTE *)&v100 + v13 + 4) = 0;
        v14 = v102 + v13;
      }
      else
        v14 = 0;
        v101 = 0;
      v102 = v14;
      v86 = &v101;
      v87 = v14;
      Core::FileSystem::getLastModificationTime((int)&v88, (__int64 *)&v86, (int)&v90);
      if ( v89 )
        v89(&v88);
      v16 = File::getLastModifiedDateAsLocalTime(v90, v15);
      v93 = v16->tm_hour;
      v94 = v16->tm_mday;
      v92 = v16->tm_min;
      v95 = v16->tm_mon;
      v91 = v16->tm_sec;
      v96 = v16->tm_year;
      sub_DA7794((int)v9, 24);
      v17 = v10;
      v18 = v6;
      v19 = (char *)*(v81 - 3) + (_DWORD)&v81;
      if ( v19[117] )
        v20 = (int)(v19 + 116);
        v21 = *((_DWORD *)v19 + 31);
        if ( !v21 )
          sub_DA7ACC();
        if ( *(_BYTE *)(v21 + 28) )
        {
          v22 = *(_BYTE *)(v21 + 61);
        }
        else
          sub_DA7A9C(*((_DWORD *)v19 + 31));
          v22 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v21 + 24))(v21, 32);
        v19[116] = v22;
        *(_BYTE *)(v20 + 1) = 1;
      ++v11;
      *(_BYTE *)v20 = 48;
      *(_DWORD *)((char *)*(v81 - 3) + (_DWORD)&v81 + 8) = 2;
      sub_DA8B64((char *)&v81);
      v77 = &v101;
      v78 = v102;
      Core::PathBuffer<Core::StackString<char,1024u>>::getEntryExtensionWithoutDot((int)&v98, (__int64 *)&v77);
      sub_DA77A4(&v75, (int)&v82);
      v23 = sub_DA73D4((const void **)&v75, ".", 1u);
      v76 = (char *)*v23;
      *v23 = &unk_28898CC;
      v24 = strlen((const char *)&v99);
      v25 = sub_DA73D4((const void **)&v76, (char *)&v99, v24);
      v26 = (int)*v25;
      v6 = v18;
      *v25 = &unk_28898CC;
      v27 = v76 - 12;
      if ( (int *)(v76 - 12) != &dword_28898C0 )
        v38 = (unsigned int *)(v76 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 <= 0 )
          j_j_j_j_j__ZdlPv_9(v27);
      v10 = v17;
      v28 = (void *)(v75 - 12);
      if ( (int *)(v75 - 12) != &dword_28898C0 )
        v40 = (unsigned int *)(v75 - 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
          v41 = (*v40)--;
        if ( v41 <= 0 )
          j_j_j_j_j__ZdlPv_9(v28);
      if ( !strcmp((const char *)&v99, "zip") )
        v29 = 6;
      else if ( j_zipOpenNewFileInZip3_64((int)v6, v26, (int)&v91, 0, 0, 0, 0, 0, 8, 7, 0, -15, 8, 0, 0, 0, 0) )
        v29 = 4;
        v73 = 0;
        v74 = 0;
        v68 = &v101;
        v69 = v102;
        v52 = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))((unsigned int)v52 & 0xFFFFFFC0 | 0x21);
        v53 = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))((unsigned int)v53 & 0xFFFFFF00 | (unsigned __int8)((unsigned __int8)v52 & 0xE1));
        Core::File::open((int)&v70, (int)&v73, (__int64 *)&v68, (char)v53);
        v30 = v26;
        v31 = (Core::FileImpl *)v10;
        v32 = v6;
        v33 = v72;
        v72 |= 2u;
        HIDWORD(v34) = v71;
        if ( v71 )
          v71(&v70);
        if ( v33 & 1 )
          v6 = v32;
          v10 = (char *)v31;
          v67 = 0LL;
          {
            v67 = 0LL;
            LODWORD(v34) = &v103;
            Core::FileImpl::read(v31, v73, v34, (unsigned __int64 *)0x20000, 0, (unsigned __int64 *)&v67);
            v37 = v66;
            v66 |= 2u;
            if ( v67 )
              v29 = j_zipWriteInFileInZip((int)v6, &v103, v67);
            else
              v29 = (v37 & 1) - 1;
            HIDWORD(v34) = v65;
            if ( v65 )
              v65(v31, v31, 3);
          }
          while ( !v29 && v67 );
          v26 = v30;
          if ( v73 )
            Core::File::close((Core::File *)&v62, (int *)&v73);
            if ( v63 )
              v63();
          v29 = 0;
        Core::File::~File((Core::File *)&v73);
        if ( v29 )
          v29 = 4;
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v42 = (unsigned int *)(v26 - 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j_j__ZdlPv_9((void *)(v26 - 12));
      v9 = (int *)&v79;
      v79 = v58;
      *(_DWORD *)((char *)*(v58 - 3) + (_DWORD)&v79) = v55;
      v81 = v54;
      v82 = &off_27734E8;
      v35 = (void *)(v84 - 12);
      if ( (int *)(v84 - 12) != &dword_28898C0 )
        v44 = (unsigned int *)(v84 - 4);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j_j__ZdlPv_9(v35);
      v82 = &off_26D40A8;
      sub_DA76D4((unsigned int **)&v83);
      v79 = v56;
      *(_DWORD *)((char *)*(v56 - 3) + (_DWORD)&v79) = v57;
      v80 = 0;
      sub_DA76E4(&v85);
      v36 = v29 == 6;
      if ( v29 != 6 )
        v36 = v29 == 0;
      if ( !v36 )
        break;
      v8 = *v60;
    }
    while ( v11 < (signed int)((*v60 >> 32) - v8) >> 2 );
  }
  v46 = j_zipClose((int)v6, 0);
  if ( !*(_DWORD *)(v59 + 24) )
    sub_DA7654();
  v47 = 0;
  if ( !v46 )
    v47 = 1;
  (*(void (__fastcall **)(int, signed int))(v59 + 28))(v59 + 16, v47);
  v48 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v97 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
    else
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9(v48);
  result = (char *)(_stack_chk_guard - v61);
  if ( _stack_chk_guard != v61 )
    _stack_chk_fail(result);
  return result;
}


  if ( MinecraftScreenModel::isCreative(*(MinecraftScreenModel **)(v1 + 424)) == 1 )
{
  return 0;
}


int __fastcall MinecraftScreenModel::shouldPushVRControlScreen(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  int result; // r0@2
  Options *v3; // r0@3

  v1 = this;
  if ( ClientInstance::isVRClient(*((ClientInstance **)this + 4)) == 1 )
  {
    v3 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v1 + 4));
    result = Options::getVRShowComfortSelectScreen(v3);
  }
  else
    result = 0;
  return result;
}


int __fastcall MinecraftScreenModel::setSimPaused(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel *v2; // r5@1
  int v3; // r4@1
  Minecraft *v4; // r0@1
  ClientInstance *v5; // r0@1
  int result; // r0@2

  v2 = this;
  v3 = a2;
  v4 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)this + 4));
  Minecraft::setSimTimePause(v4, v3);
  v5 = (ClientInstance *)*((_DWORD *)v2 + 4);
  if ( v3 == 1 )
    result = j_j_j__ZN14ClientInstance9muteAudioEv(v5);
  else
    result = j_j_j__ZN14ClientInstance11unMuteAudioEv(v5);
  return result;
}


unsigned int __fastcall MinecraftScreenModel::addFavorite(int a1, int *a2, int a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  int (__cdecl *v6)(__int64 *, __int64 *); // r1@1
  unsigned int result; // r0@1
  int v8; // r4@3
  unsigned int *v9; // r1@4
  unsigned int *v10; // r5@10
  __int64 v11; // [sp+0h] [bp-28h]@1
  int (__cdecl *v12)(__int64 *, __int64 *); // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1
  Social::User *v14; // [sp+10h] [bp-18h]@1
  int v15; // [sp+14h] [bp-14h]@3

  v3 = a2;
  v4 = a3;
  ClientInstance::getUser((ClientInstance *)&v14, *(_DWORD *)(a1 + 16));
  v5 = Social::User::getLiveUser(v14);
  v11 = *(_QWORD *)v4;
  v6 = *(int (__cdecl **)(__int64 *, __int64 *))(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v12 = v6;
  v13 = *(_DWORD *)(v4 + 12);
  result = Social::XboxLiveUserManager::favoriteUser(v5, v3, (int)&v11);
  if ( v12 )
    result = v12(&v11, &v11);
  v8 = v15;
  if ( v15 )
  {
    v9 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
    }
    else
      result = (*v9)--;
    if ( result == 1 )
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
      }
      else
        result = (*v10)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  return result;
}


int __fastcall MinecraftScreenModel::initializeRealmsWorld(int a1, __int64 *a2, int *a3, int *a4, int a5)
{
  int *v5; // r4@1
  int *v6; // r5@1
  __int64 *v7; // r7@1
  int v8; // r6@1
  void (__fastcall *v9)(char *, int, signed int); // r3@1
  int result; // r0@3
  char v11; // [sp+8h] [bp-30h]@2
  int (*v12)(void); // [sp+10h] [bp-28h]@1
  int v13; // [sp+14h] [bp-24h]@2
  __int64 v14; // [sp+18h] [bp-20h]@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v14 = *v7;
  v12 = 0;
  v9 = *(void (__fastcall **)(char *, int, signed int))(a5 + 8);
  if ( v9 )
  {
    v9(&v11, a5, 2);
    v13 = *(_DWORD *)(a5 + 12);
    v12 = *(int (**)(void))(a5 + 8);
  }
  result = RealmsAPI::initializeWorld(v8, &v14, v6, v5, (int)&v11);
  if ( v12 )
    result = v12();
  return result;
}


int __fastcall MinecraftScreenModel::setInputBindingMode(int a1)
{
  __int64 *v1; // r0@1

  v1 = (__int64 *)ClientInstance::getInput(*(ClientInstance **)(a1 + 16));
  return j_j_j__ZN18ClientInputHandler19setInputBindingModeE16InputBindingMode(v1);
}


void __fastcall MinecraftScreenModel::showPlayerProfile(int a1, int *a2, __int64 a3, __int64 a4)
{
  MinecraftScreenModel::showPlayerProfile(a1, a2, a3, a4);
}


    if ( MinecraftScreenModel::isKeyboardActive(*(MinecraftScreenModel **)(v1 + 424)) )
{
    if ( *(_DWORD *)(v1 + 440) )
    {
      v2 = *(void (__fastcall **)(int))(v1 + 444);
      v3 = v1 + 432;
      goto LABEL_4;
    }
LABEL_29:
    sub_119C8E4();
  }
  sub_119C884((void **)&v12, "text_box");
  if ( !*(_DWORD *)(v1 + 584) )
  (*(void (__fastcall **)(int, int *))(v1 + 588))(v1 + 576, &v12);
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  return 1;
}


void __fastcall MinecraftScreenModel::navigateToPlatformAchievementsConnectConfirmationScreen(int a1, int a2)
{
  MinecraftScreenModel::navigateToPlatformAchievementsConnectConfirmationScreen(a1, a2);
}


int __fastcall MinecraftScreenModel::fireEventStartWorld(int a1, int a2, int *a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getEventing(*(MinecraftGame **)(a1 + 12));
  return j_j_j__ZN17MinecraftEventing19fireEventStartWorldENS_11NetworkTypeERKSs(v5, v4, v3);
}


void __fastcall MinecraftScreenModel::getCurrentGamertag(MinecraftScreenModel *this, int a2)
{
  Social::XboxLiveUserManager *v2; // r4@1
  int v3; // r0@1
  int v4; // r4@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r5@8
  unsigned int v8; // r0@10
  Social::User *v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  v2 = this;
  ClientInstance::getUser((ClientInstance *)&v9, *(_DWORD *)(a2 + 16));
  v3 = Social::User::getLiveUser(v9);
  Social::XboxLiveUserManager::getCurrentGamertag(v2, v3);
  v4 = v10;
  if ( v10 )
  {
    v5 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
}


void __fastcall MinecraftScreenModel::rejectRealmsInvite(int a1, int *a2, int a3)
{
  MinecraftScreenModel::rejectRealmsInvite(a1, a2, a3);
}


int __fastcall MinecraftScreenModel::needToRefreshPendingInvites(MinecraftScreenModel *this)
{
  ToastManager *v1; // r0@1

  v1 = (ToastManager *)ClientInstance::getToastManager(*((ClientInstance **)this + 4));
  return j_j_j__ZNK12ToastManager24getRefreshPendingInvitesEv(v1);
}


int *__fastcall MinecraftScreenModel::getWorldPath(MinecraftScreenModel *this, int a2)
{
  int *v2; // r4@1
  Level *v3; // r0@1
  Level *v4; // r5@1
  int v5; // r0@3
  int *v6; // r1@3

  v2 = (int *)this;
  v3 = (Level *)ClientInstance::getLevel(*(ClientInstance **)(a2 + 16));
  v4 = v3;
  if ( v3 && Level::hasLevelStorage(v3) )
  {
    v5 = Level::getLevelStorage(v4);
    v6 = (int *)(*(int (**)(void))(*(_DWORD *)v5 + 28))();
  }
  else
    v6 = (int *)&Util::EMPTY_STRING;
  return sub_DA73B4(v2, v6);
}


char *__fastcall MinecraftScreenModel::getLevelPlayerList(MinecraftScreenModel *this)
{
  Level *v1; // r0@1

  v1 = (Level *)ClientInstance::getLevel(*((ClientInstance **)this + 4));
  return Level::getPlayerList(v1);
}


  if ( MinecraftScreenModel::isXBLEnabled(*(MinecraftScreenModel **)(v1 + 380))
{
    || MinecraftScreenModel::isMultiPlayerGame(*(MinecraftScreenModel **)(v1 + 380)) != 1 )
  {
    result = 0;
  }
  else
    result = MinecraftScreenModel::isXBLSessionInfoValid(*(MinecraftScreenModel **)(v1 + 380)) ^ 1;
  return result;
}


  if ( MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v1 + 432)) == 1 )
{
  else
    result = 1;
  return result;
}


void __fastcall MinecraftScreenModel::getRealmsMembers(int a1, __int64 *a2, int a3)
{
  MinecraftScreenModel::getRealmsMembers(a1, a2, a3);
}


  if ( MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v3 + 380))
{
  {
    sub_11CBAEC((int)&v41);
  }
  else
    v6 = *(_DWORD *)(v3 + 380);
    sub_1590164((void **)&v40, "store.coins.header");
    sub_1590164((void **)&v39, "store.purchase.signIn");
    sub_1590164((void **)&v38, "store.purchase.signInPart2");
    sub_1590164((void **)&v37, "textures/ui/storexblsignin");
    v7 = *(_QWORD *)&v41;
    if ( v42 )
    {
      v8 = (unsigned int *)(v42 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
        v2 = v43;
      }
      else
        ++*v8;
    }
    v36 = 0;
    v10 = operator new(0xCu);
    *(_QWORD *)v10 = v7;
    if ( HIDWORD(v7) )
      v11 = (unsigned int *)(HIDWORD(v7) + 8);
          v12 = __ldrex(v11);
        while ( __strex(v12 + 1, v11) );
        ++*v11;
    LODWORD(v13) = sub_11CBC94;
    v10[2] = v2;
    HIDWORD(v13) = sub_11CBC8C;
    v35 = v10;
    *(_QWORD *)&v36 = v13;
    MinecraftScreenModel::navigateToXblOptionalSignInScreen(v6, &v40, &v39, &v38, &v37, (int)&v35);
    if ( v36 )
      v36();
      v14 = (unsigned int *)(HIDWORD(v7) + 8);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 12))(HIDWORD(v7));
    v16 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v37 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v16);
    v17 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v38 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v17);
    v18 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v39 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v18);
    v19 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v40 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v19);
  v20 = v42;
  if ( v42 )
    v21 = (unsigned int *)(v42 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    else
      v22 = (*v21)--;
    if ( v22 == 1 )
      (*(void (**)(void))(*(_DWORD *)v20 + 12))();
  v23 = v45;
  if ( v45 )
    v24 = (unsigned int *)(v45 + 8);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 == 1 )
      (*(void (**)(void))(*(_DWORD *)v23 + 12))();
  return 0;
}


void __fastcall MinecraftScreenModel::acceptRealmsInvite(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int *v4; // r6@1
  int v5; // r4@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  void *v7; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  int v10; // [sp+0h] [bp-28h]@2
  void (*v11)(void); // [sp+8h] [bp-20h]@1
  int v12; // [sp+Ch] [bp-1Ch]@2
  int v13; // [sp+10h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  sub_DA73B4(&v13, v4);
  v11 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  if ( v6 )
  {
    v6(&v10, v3, 2);
    v12 = *(_DWORD *)(v3 + 12);
    v11 = *(void (**)(void))(v3 + 8);
  }
  RealmsAPI::acceptInvite(v5, &v13, (int)&v10);
  if ( v11 )
    v11();
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v13 - 4);
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
      j_j_j_j_j__ZdlPv_9(v7);
}


void __fastcall MinecraftScreenModel::fireEventInventoryOpened(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel::fireEventInventoryOpened(this, a2);
}


void __fastcall MinecraftScreenModel::setLanguage(MinecraftScreenModel *this)
{
  MinecraftScreenModel::setLanguage(this);
}


int __fastcall MinecraftScreenModel::supportsTouch(MinecraftScreenModel *this)
{
  void *v1; // r0@2

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  return (*(int (**)(void))(**(_DWORD **)v1 + 164))();
}


void __fastcall MinecraftScreenModel::getSplitscreenJoinText(MinecraftScreenModel *this, int a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  char *v4; // r4@1
  int v5; // r6@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int *v8; // r0@11
  void *v9; // r0@16
  void *v10; // r0@17
  unsigned int *v11; // r2@19
  signed int v12; // r1@21
  unsigned int *v13; // r2@23
  signed int v14; // r1@25
  int v15; // [sp+4h] [bp-3Ch]@1
  char *v16; // [sp+8h] [bp-38h]@1
  char *v17; // [sp+Ch] [bp-34h]@1
  char *v18; // [sp+10h] [bp-30h]@1
  int v19; // [sp+18h] [bp-28h]@1

  v2 = (int *)this;
  v3 = MinecraftGame::getClientInstanceCount(*(MinecraftGame **)(a2 + 12));
  sub_DA7364((void **)&v19, "splitscreen.joinPrompt");
  Util::toString<unsigned int,(void *)0,(void *)0>((void **)&v15, v3 + 1);
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v16 = (char *)operator new(4u);
  v18 = v16 + 4;
  v17 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v15,
                  (int)&v16,
                  (int)v16);
  I18n::get(v2, &v19, (unsigned __int64 *)&v16);
  v5 = (int)v17;
  v4 = v16;
  if ( v16 != v17 )
  {
    do
    {
      v8 = (int *)(*(_DWORD *)v4 - 12);
      if ( v8 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*(_DWORD *)v4 - 4);
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
          j_j_j_j_j__ZdlPv_9(v8);
      }
      v4 += 4;
    }
    while ( v4 != (char *)v5 );
    v4 = v16;
  }
  if ( v4 )
    operator delete(v4);
  v9 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v19 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
}


CallbackToken *__fastcall MinecraftScreenModel::connectToPlatformNetwork(int a1, int a2)
{
  int v2; // r6@0 OVERLAPPED
  int v3; // r5@1
  int v4; // r4@1
  void (__fastcall *v5)(int *, int, signed int); // r3@1
  void (*v6)(void); // r5@2 OVERLAPPED
  _DWORD *v7; // r0@4
  int v8; // r7@4
  int v9; // r4@8
  unsigned int *v10; // r1@9
  unsigned int v11; // r0@11
  unsigned int *v12; // r5@15
  unsigned int v13; // r0@17
  int v15; // [sp+0h] [bp-48h]@2
  int v16; // [sp+4h] [bp-44h]@4
  void (*v17)(void); // [sp+8h] [bp-40h]@1
  int v18; // [sp+Ch] [bp-3Ch]@2
  _DWORD *v19; // [sp+14h] [bp-34h]@4
  void (*v20)(void); // [sp+1Ch] [bp-2Ch]@4
  int (__fastcall *v21)(int *); // [sp+20h] [bp-28h]@4
  int v22; // [sp+24h] [bp-24h]@1
  int v23; // [sp+28h] [bp-20h]@8
  char v24; // [sp+2Ch] [bp-1Ch]@4

  v3 = a2;
  ClientInstance::getUser((ClientInstance *)&v22, *(_DWORD *)(a1 + 16));
  v4 = v22;
  v17 = 0;
  v5 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  if ( v5 )
  {
    v5(&v15, v3, 2);
    v2 = *(_DWORD *)(v3 + 12);
    v18 = *(_DWORD *)(v3 + 12);
    v6 = *(void (**)(void))(v3 + 8);
    v17 = v6;
  }
  else
    v6 = 0;
  v20 = 0;
  v7 = operator new(0x10u);
  v8 = v16;
  *v7 = v15;
  v7[1] = v8;
  *((_QWORD *)v7 + 1) = *(_QWORD *)(&v2 - 1);
  v19 = v7;
  v20 = (void (*)(void))sub_CF20F8;
  v21 = sub_CF20E8;
  Social::User::connectAsync((int)&v24, v4, (int)&v19);
  if ( v20 )
    v20();
  if ( v17 )
    v17();
  v9 = v23;
  if ( v23 )
    v10 = (unsigned int *)(v23 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  CallbackToken::release((CallbackToken *)&v24);
  return CallbackToken::~CallbackToken((CallbackToken *)&v24);
}


void __fastcall MinecraftScreenModel::logoffSubclient(MinecraftScreenModel *this)
{
  j_j_j__ZN14ClientInstance16requestLeaveGameEbb(*((ClientInstance **)this + 4), 0, 0);
}


signed int __fastcall MinecraftScreenModel::isLiveMultiplayerAllowed(MinecraftScreenModel *this)
{
  Social::XboxLiveUserManager *v1; // r0@1
  signed int v2; // r4@1
  int v3; // r5@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r6@8
  unsigned int v7; // r0@10
  Social::User *v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  ClientInstance::getUser((ClientInstance *)&v9, *((_DWORD *)this + 4));
  v1 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v9);
  v2 = Social::XboxLiveUserManager::checkPrivilegeSilently(v1, 254);
  v3 = v10;
  if ( v10 )
  {
    v4 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  return v2;
}


  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v2 + 424), 0) == 1 )
{
    v3 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*(MainMenuScreenModel **)(v2 + 424));
    if ( FileDownloadManager::getDownloadState(v3) == 4 )
      v1 = 1;
  }
  return v1;
}


int __fastcall MinecraftScreenModel::isLeftHanded(MinecraftScreenModel *this)
{
  Options *v1; // r0@1

  v1 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  return j_j_j__ZNK7Options12isLeftHandedEv(v1);
}


    if ( MinecraftScreenModel::isEduMode(*(MinecraftScreenModel **)(v1 + 380)) )
{
    v2 = PlayScreenModel::getFetchingThirdPartyWorldsInProgress(*(PlayScreenModel **)(v1 + 432)) ^ 1;
  }
  return v2;
}


int __fastcall MinecraftScreenModel::sendSetDefaultGameTypePacket(int a1, int a2)
{
  int v2; // r0@1
  void **v4; // [sp+4h] [bp-1Ch]@1
  int v5; // [sp+8h] [bp-18h]@1
  int v6; // [sp+Ch] [bp-14h]@1
  char v7; // [sp+10h] [bp-10h]@1
  int v8; // [sp+14h] [bp-Ch]@1

  v5 = 2;
  v6 = 1;
  v7 = 0;
  v4 = &off_26D80D8;
  v8 = a2;
  v2 = ClientInstance::getPacketSender(*(ClientInstance **)(a1 + 16));
  return (*(int (**)(void))(*(_DWORD *)v2 + 8))();
}


void __fastcall MinecraftScreenModel::savePlayerInventoryOptions(int a1, int *a2, int a3, int a4, int a5, char a6, char a7)
{
  MinecraftScreenModel::savePlayerInventoryOptions(a1, a2, a3, a4, a5, a6, a7);
}


int __fastcall MinecraftScreenModel::waitingResourcePackConfimation(int result)
{
  *(_DWORD *)(result + 56) = 256;
  return result;
}


int __fastcall MinecraftScreenModel::purchaseGame(MinecraftScreenModel *this)
{
  OfferRepository *v1; // r0@1

  v1 = (OfferRepository *)MinecraftGame::getOfferRepository(*((MinecraftGame **)this + 3));
  return j_j_j__ZN15OfferRepository12purchaseGameEv(v1);
}


signed int __fastcall MinecraftScreenModel::isDesktop(MinecraftScreenModel *this)
{
  void *v1; // r0@2
  int v2; // r0@4
  signed int v3; // r1@4

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  v2 = (*(int (**)(void))(**(_DWORD **)v1 + 436))();
  v3 = 0;
  if ( !v2 )
    v3 = 1;
  return v3;
}


void __fastcall MinecraftScreenModel::navigateToXblFriendFinderScreen(MinecraftScreenModel *this)
{
  MinecraftScreenModel::navigateToXblFriendFinderScreen(this);
}


int __fastcall MinecraftScreenModel::getLoadingProgress(MinecraftScreenModel *this)
{
  LocalPlayer *v1; // r0@1
  int result; // r0@6

  v1 = (LocalPlayer *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  if ( v1 )
  {
    _R0 = LocalPlayer::getPreloadingProgress(v1);
    __asm
    {
      VLDR            S2, =100.0
      VMOV            S0, R0
      VMUL.F32        S4, S0, S2
      VLDR            S0, =0.0
      VCMPE.F32       S4, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S4, S2
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S4 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S0, S2 }
    __asm { VMOV            R0, S0 }
  }
  else
      VMOV            R0, S0
  return result;
}


void __fastcall MinecraftScreenModel::getSubscriptionDetails(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  __int64 *v4; // r6@1
  int v5; // r4@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  int v7; // [sp+0h] [bp-28h]@2
  void (*v8)(void); // [sp+8h] [bp-20h]@1
  int v9; // [sp+Ch] [bp-1Ch]@2
  __int64 v10; // [sp+10h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v10 = *v4;
  v8 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  if ( v6 )
  {
    v6(&v7, v3, 2);
    v9 = *(_DWORD *)(v3 + 12);
    v8 = *(void (**)(void))(v3 + 8);
  }
  RealmsAPI::getSubscriptionDetails(v5, &v10, (int)&v7);
  if ( v8 )
    v8();
}


int __fastcall MinecraftScreenModel::getWorldLoadingState(MinecraftScreenModel *this)
{
  LocalPlayer *v1; // r0@1
  int result; // r0@2

  v1 = (LocalPlayer *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  if ( v1 )
    result = j_j_j__ZNK11LocalPlayer15getLoadingStateEv(v1);
  else
    result = 0;
  return result;
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  return result;
}


int __fastcall MinecraftScreenModel::setLastSelectedSlot(int a1, int a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = ClientInstance::getGuiData(*(ClientInstance **)(a1 + 16));
  return j_j_j__ZN7GuiData19setLastSelectedSlotEi11ContainerID(v5, v4, v3);
}


    if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
      result = 0;
    }
    else
    {
      v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
      result = (*(int (**)(void))(*(_DWORD *)v3 + 44))();
  }
  else
  {
    result = LevelData::hasStartWithMapEnabled((LevelData *)(v1 + 592));
  return result;
}


void __fastcall MinecraftScreenModel::getInfiniteInviteLink(int a1, __int64 *a2, int a3)
{
  MinecraftScreenModel::getInfiniteInviteLink(a1, a2, a3);
}


int __fastcall MinecraftScreenModel::setActiveDirectoryAuthenticationStateComplete(MinecraftScreenModel *this)
{
  ActiveDirectoryIdentity *v1; // r0@1

  v1 = (ActiveDirectoryIdentity *)MinecraftGame::getActiveDirectoryIdentity(*((MinecraftGame **)this + 3));
  return j_j_j__ZN23ActiveDirectoryIdentity30setAuthenticationStateCompleteEv(v1);
}


  if ( MinecraftScreenModel::isInGame(*(MinecraftScreenModel **)(v1 + 380))
{
  {
    MinecraftScreenModel::requestLeaveGame(*(MinecraftScreenModel **)(v1 + 380), 0);
  }
  MinecraftScreenModel::leaveScreen(*(MinecraftScreenModel **)(v1 + 380));
  return 0;
}


unsigned int __fastcall MinecraftScreenModel::unBlockUser(int a1, int *a2, int a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  int (__cdecl *v6)(__int64 *, __int64 *); // r1@1
  unsigned int result; // r0@1
  int v8; // r4@3
  unsigned int *v9; // r1@4
  unsigned int *v10; // r5@10
  __int64 v11; // [sp+0h] [bp-28h]@1
  int (__cdecl *v12)(__int64 *, __int64 *); // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1
  Social::User *v14; // [sp+10h] [bp-18h]@1
  int v15; // [sp+14h] [bp-14h]@3

  v3 = a2;
  v4 = a3;
  ClientInstance::getUser((ClientInstance *)&v14, *(_DWORD *)(a1 + 16));
  v5 = Social::User::getLiveUser(v14);
  v11 = *(_QWORD *)v4;
  v6 = *(int (__cdecl **)(__int64 *, __int64 *))(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v12 = v6;
  v13 = *(_DWORD *)(v4 + 12);
  result = Social::XboxLiveUserManager::unBlockUser(v5, v3, (int)&v11);
  if ( v12 )
    result = v12(&v11, &v11);
  v8 = v15;
  if ( v15 )
  {
    v9 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
    }
    else
      result = (*v9)--;
    if ( result == 1 )
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
      }
      else
        result = (*v10)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  return result;
}


  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 424), 1) )
{
    result = 0;
  }
  else
  {
    v3 = 0;
    if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 424), 0) == 1 )
    {
      v3 = 0;
      if ( !*(_BYTE *)(v1 + 444) )
      {
        v4 = (FileDownloadManager *)MainMenuScreenModel::getWorldFileDownloadManager(*(MainMenuScreenModel **)(v1 + 424));
        if ( FileDownloadManager::getDownloadState(v4) != 5 )
          v3 = 1;
      }
    }
    result = v3;
  return result;
}


_BOOL4 __fastcall MinecraftScreenModel::_isPremiumLocked(MinecraftScreenModel *this, const PackManifest *a2)
{
  PackManifest *v2; // r4@1
  int v3; // r5@1
  char *v4; // r0@1
  char *v5; // r6@1
  int v6; // r1@1
  int v7; // r2@1
  int v8; // r3@1
  Entitlement *v9; // r5@1
  void *v10; // r0@1
  void *v11; // r0@2
  void *v12; // r0@3
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  int v20; // [sp+0h] [bp-48h]@1
  int v21; // [sp+4h] [bp-44h]@1
  int v22; // [sp+8h] [bp-40h]@1
  int v23; // [sp+Ch] [bp-3Ch]@1
  int v24; // [sp+10h] [bp-38h]@1
  int v25; // [sp+18h] [bp-30h]@3
  int v26; // [sp+1Ch] [bp-2Ch]@2
  int v27; // [sp+20h] [bp-28h]@1
  char v28; // [sp+28h] [bp-20h]@1

  v2 = a2;
  v3 = MinecraftGame::getEntitlementManager(*((MinecraftGame **)this + 3));
  v4 = PackManifest::getIdentity(v2);
  v5 = v4;
  v6 = *((_DWORD *)v4 + 1);
  v7 = *((_DWORD *)v4 + 2);
  v8 = *((_DWORD *)v4 + 3);
  v20 = *(_DWORD *)v4;
  v21 = v6;
  v22 = v7;
  v23 = v8;
  SemVersion::SemVersion((int)&v24, (int)(v4 + 16));
  v28 = v5[40];
  v9 = (Entitlement *)EntitlementManager::getEntitlement(v3, (int)&v20);
  v10 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  }
  v11 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v26 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v25 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  return (Entitlement::isValid(v9) || PackManifest::isPremium(v2) == 1) && !Entitlement::isOwned(v9);
}


RakNet *__fastcall MinecraftScreenModel::setValidScreenshot(int a1, int *a2)
{
  int v2; // r6@1
  int *v3; // r4@1
  RakNet *result; // r0@1
  Level *v5; // r5@1
  Entity *v6; // r6@2
  Player *v7; // r0@3

  v2 = a1;
  v3 = a2;
  result = (RakNet *)ClientInstance::getLevel(*(ClientInstance **)(a1 + 16));
  v5 = result;
  if ( result )
  {
    result = (RakNet *)ClientInstance::getLocalPlayer(*(ClientInstance **)(v2 + 16));
    v6 = result;
    if ( result )
    {
      v7 = (Player *)Level::getPhotoStorage(v5);
      result = j_j_j__ZN12PhotoStorage18setValidLoosePhotoER6PlayerRKSs(v7, v6, v3);
    }
  }
  return result;
}


void __fastcall MinecraftScreenModel::readLoadingMessages(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel::readLoadingMessages(this, a2);
}


void __fastcall MinecraftScreenModel::navigateToInviteScreen(MinecraftScreenModel *this)
{
  __int64 v1; // kr00_8@1
  int v2; // r4@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r5@8
  unsigned int v6; // r0@10
  int v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@1

  v1 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createInviteScreen((SceneFactory *)&v7, (SceneStack *)HIDWORD(v1), v1);
  SceneStack::pushScreen(v1, (int)&v7, 0);
  v2 = v8;
  if ( v8 )
  {
    v3 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
}


char *__fastcall MinecraftScreenModel::devConsoleExecuteCommand(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r8@1
  Player *v4; // r7@1
  DevConsoleCommandOrigin *v5; // r6@2
  int v6; // r0@3
  char *v7; // r7@3
  int v8; // r4@3
  char *v9; // r0@3
  signed int v10; // r1@3
  int v11; // t1@4
  Minecraft *v12; // r0@6
  int v13; // r0@6
  int v14; // r4@6
  int v15; // r0@9
  char *result; // r0@10
  int v17; // [sp+4h] [bp-164h]@0
  char v18; // [sp+8h] [bp-160h]@3
  int v19; // [sp+Ch] [bp-15Ch]@5
  int v20; // [sp+10h] [bp-158h]@5
  int v21; // [sp+14h] [bp-154h]@5
  int v22; // [sp+18h] [bp-150h]@5
  int v23; // [sp+1Ch] [bp-14Ch]@5
  int v24; // [sp+20h] [bp-148h]@5
  int v25; // [sp+24h] [bp-144h]@5
  int v26; // [sp+28h] [bp-140h]@5
  int v27; // [sp+2Ch] [bp-13Ch]@5
  int v28; // [sp+30h] [bp-138h]@5
  int v29; // [sp+34h] [bp-134h]@5
  int v30; // [sp+38h] [bp-130h]@5
  int v31; // [sp+3Ch] [bp-12Ch]@5
  int v32; // [sp+40h] [bp-128h]@5
  int v33; // [sp+44h] [bp-124h]@5
  int v34; // [sp+48h] [bp-120h]@5
  int v35; // [sp+4Ch] [bp-11Ch]@5
  int v36; // [sp+50h] [bp-118h]@5
  int v37; // [sp+54h] [bp-114h]@5
  int v38; // [sp+58h] [bp-110h]@5
  int v39; // [sp+5Ch] [bp-10Ch]@5
  int v40; // [sp+60h] [bp-108h]@5
  int v41; // [sp+64h] [bp-104h]@5
  int v42; // [sp+68h] [bp-100h]@5
  int v43; // [sp+6Ch] [bp-FCh]@5
  int v44; // [sp+70h] [bp-F8h]@5
  int v45; // [sp+74h] [bp-F4h]@5
  int v46; // [sp+78h] [bp-F0h]@5
  int v47; // [sp+7Ch] [bp-ECh]@5
  int v48; // [sp+80h] [bp-E8h]@5
  int v49; // [sp+84h] [bp-E4h]@5
  int v50; // [sp+88h] [bp-E0h]@5
  int v51; // [sp+8Ch] [bp-DCh]@5
  int v52; // [sp+90h] [bp-D8h]@5
  int v53; // [sp+94h] [bp-D4h]@5
  int v54; // [sp+98h] [bp-D0h]@5
  int v55; // [sp+9Ch] [bp-CCh]@5
  int v56; // [sp+A0h] [bp-C8h]@3
  int v57; // [sp+A8h] [bp-C0h]@6
  DevConsoleCommandOrigin *v58; // [sp+ACh] [bp-BCh]@6
  char v59; // [sp+B0h] [bp-B8h]@3
  RakNet *v60; // [sp+14Ch] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  v60 = _stack_chk_guard;
  v4 = (Player *)ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 16));
  if ( v4 )
  {
    v5 = (DevConsoleCommandOrigin *)operator new(0xB8u);
    DevConsoleCommandOrigin::DevConsoleCommandOrigin(v5, v4);
  }
  else
    v6 = ClientInstance::getClientNetworkSystem(*(ClientInstance **)(v2 + 16));
    v7 = &v59;
    NetworkHandler::getPrimaryNetworkId((NetworkHandler *)&v59, v6);
    v8 = ClientInstance::getClientSubId(*(ClientInstance **)(v2 + 16));
    v56 = v8;
    v9 = &v18;
    v10 = 152;
    do
    {
      v11 = *(_DWORD *)v7;
      v7 += 4;
      v10 -= 4;
      *(_DWORD *)v9 = v11;
      v9 += 4;
    }
    while ( v10 );
    DevConsoleCommandOrigin::DevConsoleCommandOrigin(
      (int)v5,
      0,
      -1LL,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  v12 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v2 + 16));
  v13 = Minecraft::getCommands(v12);
  v58 = v5;
  v57 = MinecraftCommands::requestCommandExecution(v13, (int *)&v58, v3, 3, 0);
  v14 = MCRESULT::isSuccess((MCRESULT *)&v57);
  if ( v58 )
    (*(void (**)(void))(*(_DWORD *)v58 + 4))();
  v58 = 0;
  if ( v14 == 1 )
    v15 = MinecraftGame::getEventing(*(MinecraftGame **)(v2 + 12));
    MinecraftEventing::fireEventDevConsoleCommand(v15, (const char **)v3);
  result = (char *)(_stack_chk_guard - v60);
  if ( _stack_chk_guard != v60 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall MinecraftScreenModel::fetchScreenshotsPath(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel::fetchScreenshotsPath(this, a2);
}


int __fastcall MinecraftScreenModel::isXBLSessionInfoValid(MinecraftScreenModel *this)
{
  int v1; // r0@1

  v1 = MinecraftGame::getMultiplayerServiceManager(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK6Social25MultiplayerServiceManager17getSessionIsValidENS_28MultiplayerServiceIdentifierE(v1, 0);
}


void __fastcall MinecraftScreenModel::readEndPoem(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel *v2; // r4@1
  int v3; // r5@1
  char *v4; // r0@1
  char *v5; // r0@2
  char *v6; // r0@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  char *v13; // [sp+4h] [bp-24h]@1
  char *v14; // [sp+8h] [bp-20h]@1
  int v15; // [sp+Ch] [bp-1Ch]@1
  char *v16; // [sp+10h] [bp-18h]@1

  v2 = this;
  v16 = (char *)&unk_28898CC;
  v3 = MinecraftGame::getResourcePackManager(*(MinecraftGame **)(a2 + 12));
  sub_DA7364((void **)&v13, "credits/end.txt");
  v14 = v13;
  v13 = (char *)&unk_28898CC;
  v15 = 0;
  ResourcePackManager::loadText(v3, (int)&v14, (int *)&v16);
  v4 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v14 - 4);
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
      j_j_j_j_j__ZdlPv_9(v4);
  }
  v5 = v13 - 12;
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v13 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  Util::splitLines((int)v2, (int *)&v16);
  v6 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v16 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
}


void __fastcall MinecraftScreenModel::getWorldfromLink(int a1, const void **a2, int a3)
{
  MinecraftScreenModel::getWorldfromLink(a1, a2, a3);
}


int __fastcall MinecraftScreenModel::setVRControlMode(MinecraftScreenModel *this, int a2)
{
  int v2; // r4@1
  Options *v3; // r0@1

  v2 = a2;
  v3 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  return j_j_j__ZN7Options27setVROptionsComfortControlsEb(v3, v2);
}


              if ( MinecraftScreenModel::hasLocalDeviceEntitlements(*(MinecraftScreenModel **)(v2 + 380)) == 1 )
{
                v10 = *(_DWORD *)(v2 + 380);
                v17 = 0;
                v11 = 0;
                v12 = *(void (__fastcall **)(int *, int, signed int))(v3 + 16);
                if ( v12 )
                {
                  v12(&v16, v3 + 8, 2);
                  v18 = *(_DWORD *)(v3 + 20);
                  v11 = *(_DWORD *)(v3 + 16);
                  v17 = *(void (**)(void))(v3 + 16);
                }
                v20 = 0;
                v13 = operator new(0x10u);
                *(_QWORD *)v13 = *(_QWORD *)&v16;
                v14 = v18;
                v13[2] = v11;
                v13[3] = v14;
                v19 = v13;
                v20 = (void (*)(void))sub_12AC308;
                v21 = sub_12AC2F8;
                MinecraftScreenModel::navigateToConvertPurchasesToXBLScreen(v10, (int)&v19);
                if ( v20 )
                  v20();
                if ( v17 )
                  v17();
              }
              else
              {
                if ( !*(_DWORD *)(v3 + 16) )
                  sub_21E5F48();
                (*(void (__fastcall **)(int))(v3 + 20))(v3 + 8);
            }
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v6);
            while ( __strex(result - 1, v6) );
          else
            result = (*v6)--;
          if ( result == 1 )
            v15 = (unsigned int *)(v5 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = __ldrex(v15);
              while ( __strex(result - 1, v15) );
            else
              result = (*v15)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
          return result;
        }
      }
      else
      {
        __clrex();
        result = v7;
    }
  }
  return result;
}


  if ( MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v1 + 432)) == 1 )
{
  else
    result = 0;
  return result;
}


int __fastcall MinecraftScreenModel::getFixedInventorySlotCount(MinecraftScreenModel *this)
{
  Player *v1; // r0@1
  PlayerInventoryProxy *v2; // r0@1

  v1 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v2 = (PlayerInventoryProxy *)Player::getSupplies(v1);
  return j_j_j__ZNK20PlayerInventoryProxy26getFixedInventorySlotCountEv(v2);
}


  if ( MinecraftScreenModel::isLiveMultiplayerAllowed(*(MinecraftScreenModel **)(v1 + 432))
{
  {
    result = MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v1 + 432));
  }
  else
    result = 0;
  return result;
}


void __fastcall MinecraftScreenModel::generateFilePickerSettingsForScreenShots(int a1, int a2, __int64 *a3, int **a4)
{
  int **v4; // r4@1
  __int64 *v5; // r6@1
  int v6; // r8@1
  int v7; // r9@1
  void *v8; // r0@2
  void *v9; // r0@3
  void *v10; // r0@4
  void *v11; // r0@5
  __int64 v12; // r0@6
  _DWORD *v13; // r4@6
  signed int v14; // r2@6
  int v15; // r0@9
  int v16; // r10@9
  signed int v17; // r0@9
  _DWORD *v18; // r11@9
  int v19; // r4@12
  char *v20; // r7@12
  _DWORD *v21; // r5@12
  unsigned int v22; // r8@12
  int v23; // r0@15
  int v24; // r1@15
  int v25; // r3@15
  void (*v26)(void); // r3@15
  int v27; // r1@15
  _DWORD *v28; // r5@18
  unsigned int *v29; // r2@19
  signed int v30; // r1@21
  int *v31; // r0@27
  _DWORD *v32; // r4@32
  unsigned int *v33; // r2@33
  signed int v34; // r1@35
  int *v35; // r0@41
  unsigned int *v36; // r2@46
  signed int v37; // r1@48
  unsigned int *v38; // r2@50
  signed int v39; // r1@52
  unsigned int *v40; // r2@54
  signed int v41; // r1@56
  unsigned int *v42; // r2@58
  signed int v43; // r1@60
  _DWORD *ptr; // [sp+4h] [bp-54h]@9
  int v45; // [sp+8h] [bp-50h]@5
  int v46; // [sp+10h] [bp-48h]@2
  int v47; // [sp+14h] [bp-44h]@2
  int v48; // [sp+1Ch] [bp-3Ch]@2
  __int64 v49; // [sp+20h] [bp-38h]@15
  void (*v50)(void); // [sp+28h] [bp-30h]@12
  int v51; // [sp+2Ch] [bp-2Ch]@15

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  FilePickerSettings::FilePickerSettings(a1);
  if ( ClientInstance::getLevel(*(ClientInstance **)(v6 + 16)) )
  {
    sub_DA7364((void **)&v48, "zip");
    sub_DA7364((void **)&v46, "utility.zipFile");
    I18n::get(&v47, (int **)&v46);
    FilePickerSettings::addFileDescription(v7, &v48, &v47, 1);
    v8 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) != &dword_28898C0 )
    {
      v36 = (unsigned int *)(v47 - 4);
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
        j_j_j_j_j__ZdlPv_9(v8);
    }
    v9 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v46 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j_j__ZdlPv_9(v9);
    v10 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v48 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j_j__ZdlPv_9(v10);
    I18n::get(&v45, v4);
    FilePickerSettings::setDefaultFileName(v7, &v45);
    v11 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v45 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j_j__ZdlPv_9(v11);
    FilePickerSettings::setPickerType(v7, 2);
    v12 = *v5;
    v13 = 0;
    v14 = HIDWORD(v12) - v12;
    if ( (HIDWORD(v12) - (signed int)v12) >> 2 )
      if ( (unsigned int)(v14 >> 2) >= 0x40000000 )
        sub_DA7414();
      v13 = operator new(v14);
      v12 = *v5;
    v15 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
            v12,
            SHIDWORD(v12),
            (int)v13);
    v16 = v15;
    v17 = v15 - (_DWORD)v13;
    v18 = 0;
    ptr = v13;
    if ( v17 >> 2 )
      if ( (unsigned int)(v17 >> 2) >= 0x40000000 )
      v18 = operator new(v17);
    v19 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
            (int)v13,
            v16,
            (int)v18);
    v20 = 0;
    v50 = 0;
    v21 = operator new(0x10u);
    *v21 = v6;
    v21[1] = 0;
    v21[2] = 0;
    v21[3] = 0;
    v22 = (v19 - (signed int)v18) >> 2;
    if ( 0 != v22 )
      if ( v22 >= 0x40000000 )
      v20 = (char *)operator new(v19 - (_DWORD)v18);
    v21[1] = v20;
    v21[2] = v20;
    v21[3] = &v20[4 * v22];
    v23 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
            (int)v18,
            v19,
            (int)v20);
    v24 = v7 + 32;
    v21[2] = v23;
    LODWORD(v49) = v21;
    v25 = HIDWORD(v49);
    v49 = *(_QWORD *)(v7 + 32);
    *(_DWORD *)v24 = v21;
    *(_DWORD *)(v24 + 4) = v25;
    v26 = *(void (**)(void))(v7 + 40);
    *(_DWORD *)(v7 + 40) = sub_CF2334;
    v27 = *(_DWORD *)(v7 + 44);
    v50 = v26;
    v51 = v27;
    *(_DWORD *)(v7 + 44) = sub_CF2326;
    if ( v26 )
      v26();
    if ( v18 != (_DWORD *)v19 )
      v28 = v18;
      do
        v31 = (int *)(*v28 - 12);
        if ( v31 != &dword_28898C0 )
        {
          v29 = (unsigned int *)(*v28 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
          }
          else
            v30 = (*v29)--;
          if ( v30 <= 0 )
            j_j_j_j_j__ZdlPv_9(v31);
        }
        ++v28;
      while ( v28 != (_DWORD *)v19 );
    if ( v18 )
      operator delete(v18);
    if ( ptr != (_DWORD *)v16 )
      v32 = ptr;
        v35 = (int *)(*v32 - 12);
        if ( v35 != &dword_28898C0 )
          v33 = (unsigned int *)(*v32 - 4);
              v34 = __ldrex(v33);
            while ( __strex(v34 - 1, v33) );
            v34 = (*v33)--;
          if ( v34 <= 0 )
            j_j_j_j_j__ZdlPv_9(v35);
        ++v32;
      while ( v32 != (_DWORD *)v16 );
    if ( ptr )
      operator delete(ptr);
  }
}


int __fastcall MinecraftScreenModel::supportsDeviceAccounts(MinecraftScreenModel *this)
{
  EntitlementManager *v1; // r0@1

  v1 = (EntitlementManager *)MinecraftGame::getEntitlementManager(*((MinecraftGame **)this + 3));
  return j_j_j__ZN18EntitlementManager22supportsDeviceAccountsEv(v1);
}


  if ( *(_BYTE *)(v1 + 873) && MinecraftScreenModel::isInputModeTouch(*(MinecraftScreenModel **)(v1 + 380)) )
{
    result = 0;
  }
  else
  {
    v3 = *(_DWORD *)(v1 + 628);
    sub_119C884((void **)&v7, (const char *)&unk_257BC67);
    CraftingContainerManagerController::setSearchString(v3, &v7);
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
        j_j_j_j_j__ZdlPv_9_1(v4);
    }
    CraftingContainerManagerController::clearAllRecipes(*(CraftingContainerManagerController **)(v1 + 628));
    CraftingScreenController::_savePlayerInventoryOptions((CraftingScreenController *)v1);
    *CraftingContainerManagerController::getCraftingInformation(*(CraftingContainerManagerController **)(v1 + 628)) = 0;
    result = 1;
  return result;
}


int __fastcall MinecraftScreenModel::requestImageFromUrl(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  void (__fastcall *v5)(int *, int, signed int); // r3@1
  int *v6; // r4@1
  int result; // r0@3
  int v8; // [sp+0h] [bp-20h]@2
  int (*v9)(void); // [sp+8h] [bp-18h]@1
  int v10; // [sp+Ch] [bp-14h]@2

  v3 = *(_DWORD *)(a1 + 16);
  v4 = a3;
  v9 = 0;
  v5 = *(void (__fastcall **)(int *, int, signed int))(a3 + 8);
  v6 = a2;
  if ( v5 )
  {
    v5(&v8, a3, 2);
    v10 = *(_DWORD *)(v4 + 12);
    v9 = *(int (**)(void))(v4 + 8);
  }
  result = ClientInstance::requestImageFromUrl(v3, v6, (int)&v8);
  if ( v9 )
    result = v9();
  return result;
}


void __fastcall MinecraftScreenModel::savePlayerInventoryOptions(int a1, int *a2, int a3, int a4, int a5, char a6, char a7)
{
  int v7; // r4@1
  int v8; // r5@1
  int *v9; // r6@1
  int v10; // r7@1
  void *v11; // r0@1
  unsigned int *v12; // r2@3
  signed int v13; // r1@5
  int v14; // [sp+4h] [bp-2Ch]@1
  int v15; // [sp+8h] [bp-28h]@1
  int v16; // [sp+Ch] [bp-24h]@1
  char v17; // [sp+10h] [bp-20h]@1
  char v18; // [sp+11h] [bp-1Fh]@1
  char v19; // [sp+12h] [bp-1Eh]@1

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 16));
  sub_DA73B4(&v14, v9);
  v15 = v8;
  v16 = v7;
  v17 = a5;
  v18 = a6;
  v19 = a7;
  LocalPlayer::setInventoryOptions(v10, &v14);
  v11 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  }
}


            if ( MinecraftScreenModel::hasLocalDeviceEntitlements(*(MinecraftScreenModel **)(v1 + 380)) == 1 )
{
              v9 = *(_DWORD *)(v1 + 380);
              v12 = 0;
              MinecraftScreenModel::navigateToConvertPurchasesToXBLScreen(v9, (int)&v11);
              if ( v12 )
                v12();
            }
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v5);
            while ( __strex(result - 1, v5) );
          else
            result = (*v5)--;
          if ( result == 1 )
            v10 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = __ldrex(v10);
              while ( __strex(result - 1, v10) );
            else
              result = (*v10)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return result;
        }
      }
      else
      {
        __clrex();
        v4 = v6;
    }
  }
  return result;
}


    && MinecraftScreenModel::isMultiPlayerClient(*(MinecraftScreenModel **)(v1 + 424)) == 1 )
{
    v2 = MinecraftScreenModel::getPlayerAbilities(*(MinecraftScreenModel **)(v1 + 380));
    if ( Abilities::getBool(v2, &Abilities::OPERATOR) != 1 )
      v3 = 0;
  }
  return (MinecraftScreenModel::isTrial(*(MinecraftScreenModel **)(v1 + 424)) ^ 1) & v3;
}


int __fastcall MinecraftScreenModel::triggerBoardTextUpdatedTelemetry(MinecraftScreenModel *this, ChalkboardBlockEntity *a2)
{
  ChalkboardBlockEntity *v2; // r4@1
  int v3; // r0@1
  MinecraftEventing *v4; // r0@1

  v2 = a2;
  v3 = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v4 = (MinecraftEventing *)(*(int (**)(void))(*(_DWORD *)v3 + 1440))();
  return j_j_j__ZN17MinecraftEventing25fireEventBoardTextUpdatedER21ChalkboardBlockEntity(v4, v2);
}


int __fastcall MinecraftScreenModel::getCursorSelectedItem(MinecraftScreenModel *this)
{
  return ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4)) + 5000;
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  return result;
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 1;
    *(_BYTE *)(v1 + 984) = 1;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 8))();
    *(_BYTE *)(v1 + 984) = result;
  return result;
}


int __fastcall MinecraftScreenModel::getLevelSource(MinecraftScreenModel *this)
{
  Minecraft *v1; // r0@1

  v1 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)this + 4));
  return Minecraft::getLevelSource(v1);
}


void __fastcall MinecraftScreenModel::getLevelData(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel::getLevelData(this, a2);
}


char *__fastcall MinecraftScreenModel::getLevelPlayerList(MinecraftScreenModel *this)
{
  Level *v1; // r0@1

  v1 = (Level *)ClientInstance::getLevel(*((ClientInstance **)this + 4));
  return Level::getPlayerList(v1);
}


void __fastcall MinecraftScreenModel::getRealmsMembers(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  __int64 *v4; // r6@1
  int v5; // r4@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  int v7; // [sp+0h] [bp-28h]@2
  void (*v8)(void); // [sp+8h] [bp-20h]@1
  int v9; // [sp+Ch] [bp-1Ch]@2
  __int64 v10; // [sp+10h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v10 = *v4;
  v8 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  if ( v6 )
  {
    v6(&v7, v3, 2);
    v9 = *(_DWORD *)(v3 + 12);
    v8 = *(void (**)(void))(v3 + 8);
  }
  RealmsAPI::getWorldMembers(v5, &v10, (int)&v7);
  if ( v8 )
    v8();
}


int __fastcall MinecraftScreenModel::getHotbarSlotCount(MinecraftScreenModel *this)
{
  GuiData *v1; // r0@1

  v1 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 4));
  return j_j_j__ZNK7GuiData11getNumSlotsEv(v1);
}


void __fastcall MinecraftScreenModel::rejectRealmsInvite(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int *v4; // r6@1
  int v5; // r4@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  void *v7; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  int v10; // [sp+0h] [bp-28h]@2
  void (*v11)(void); // [sp+8h] [bp-20h]@1
  int v12; // [sp+Ch] [bp-1Ch]@2
  int v13; // [sp+10h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  sub_DA73B4(&v13, v4);
  v11 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  if ( v6 )
  {
    v6(&v10, v3, 2);
    v12 = *(_DWORD *)(v3 + 12);
    v11 = *(void (**)(void))(v3 + 8);
  }
  RealmsAPI::rejectInvite(v5, &v13, (int)&v10);
  if ( v11 )
    v11();
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v13 - 4);
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
      j_j_j_j_j__ZdlPv_9(v7);
}


int __fastcall MinecraftScreenModel::isRealmLevel(MinecraftScreenModel *this)
{
  Social::MultiplayerServiceManager *v1; // r0@1

  v1 = (Social::MultiplayerServiceManager *)MinecraftGame::getMultiplayerServiceManager(*((MinecraftGame **)this + 3));
  return j_j_j__ZN6Social25MultiplayerServiceManager9isInRealmEv(v1);
}


int __fastcall MinecraftScreenModel::pickCustomSkin(int a1, int a2)
{
  __int64 v2; // r6@0
  int v3; // r9@1
  int v4; // r6@1
  void *v5; // r0@2
  int v6; // r4@4
  int (__fastcall *v7)(int, _DWORD, _DWORD **); // r8@4
  void (__fastcall *v8)(int *, int, signed int); // r3@4
  int v9; // r5@7
  _DWORD *v10; // r0@7
  int v11; // r1@7
  int result; // r0@7
  int v13; // [sp+0h] [bp-48h]@5
  int v14; // [sp+4h] [bp-44h]@7
  int (*v15)(void); // [sp+8h] [bp-40h]@4
  int v16; // [sp+Ch] [bp-3Ch]@5
  int v17; // [sp+10h] [bp-38h]@7
  _DWORD *v18; // [sp+18h] [bp-30h]@7
  int (*v19)(void); // [sp+20h] [bp-28h]@7
  int (__fastcall *v20)(int); // [sp+24h] [bp-24h]@7

  v3 = a1;
  v4 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v5 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v5 = &ServiceLocator<AppPlatform>::mDefaultService;
  v6 = *(_DWORD *)v5;
  v7 = *(int (__fastcall **)(int, _DWORD, _DWORD **))(**(_DWORD **)v5 + 208);
  v15 = 0;
  v8 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v8 )
  {
    v8(&v13, v4, 2);
    HIDWORD(v2) = *(_DWORD *)(v4 + 12);
    v16 = *(_DWORD *)(v2 + 12);
    LODWORD(v2) = *(_DWORD *)(v2 + 8);
    v15 = (int (*)(void))v2;
  }
    LODWORD(v2) = 0;
  v17 = *(_DWORD *)(v3 + 16);
  v9 = v17;
  v19 = 0;
  v10 = operator new(0x14u);
  v11 = v14;
  *v10 = v13;
  v10[1] = v11;
  *((_QWORD *)v10 + 1) = v2;
  v10[4] = v9;
  v18 = v10;
  v19 = (int (*)(void))sub_CF21E4;
  v20 = sub_CF2176;
  result = v7(v6, 0, &v18);
  if ( v19 )
    result = v19();
  if ( v15 )
    result = v15();
  return result;
}


signed int __fastcall MinecraftScreenModel::isUserWaitingForPlatformConnection(MinecraftScreenModel *this)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  signed int result; // r0@15
  Social::User *v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  ClientInstance::getUser((ClientInstance *)&v8, *((_DWORD *)this + 4));
  v1 = Social::User::getPlatformConnectionState(v8);
  v2 = v9;
  if ( v9 )
  {
    v3 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  result = 0;
  if ( v1 == 2 )
    result = 1;
  return result;
}


void __fastcall MinecraftScreenModel::startLocalServer(MinecraftScreenModel *this, const LevelSummary *a2)
{
  const LevelSummary *v2; // r5@1
  MinecraftScreenModel *v3; // r4@1
  int v4; // r0@3
  void *v5; // r0@3
  int v6; // r6@4
  int (__fastcall *v7)(int, char *); // r7@5
  int v8; // r4@6
  LevelSettings *v9; // r0@6
  int v10; // r5@6
  void *v11; // r0@6
  void *v12; // r0@7
  void *v13; // r0@8
  void *v14; // r0@9
  unsigned int *v15; // r2@10
  signed int v16; // r1@12
  void *v17; // r0@14
  void *v18; // r0@20
  unsigned int *v19; // r2@26
  signed int v20; // r1@28
  unsigned int *v21; // r2@34
  signed int v22; // r1@36
  unsigned int *v23; // r2@38
  signed int v24; // r1@40
  unsigned int *v25; // r2@46
  signed int v26; // r1@48
  unsigned int *v27; // r2@50
  signed int v28; // r1@52
  unsigned int *v29; // r2@54
  signed int v30; // r1@56
  char v31; // [sp+Ch] [bp-12Ch]@6
  int v32; // [sp+D4h] [bp-64h]@6
  int v33; // [sp+D8h] [bp-60h]@6
  int v34; // [sp+DCh] [bp-5Ch]@6
  char v35; // [sp+E0h] [bp-58h]@5
  int v36; // [sp+F4h] [bp-44h]@4
  int v37; // [sp+FCh] [bp-3Ch]@3
  int v38; // [sp+104h] [bp-34h]@20
  int v39; // [sp+10Ch] [bp-2Ch]@20
  int v40; // [sp+114h] [bp-24h]@14
  int v41; // [sp+11Ch] [bp-1Ch]@14

  v2 = a2;
  v3 = this;
  if ( LevelSummary::isNetworkCompatible(a2) )
  {
    if ( LevelSummary::isEditionCompatible(v2) )
    {
      sub_DA7364((void **)&v37, (const char *)&unk_257BC67);
      v4 = MinecraftGame::getEventing(*((MinecraftGame **)v3 + 3));
      MinecraftEventing::fireEventStartWorld(v4, 0, &v37);
      v5 = (void *)(v37 - 12);
      if ( (int *)(v37 - 12) != &dword_28898C0 )
      {
        v21 = (unsigned int *)(v37 - 4);
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
          j_j_j_j_j__ZdlPv_9(v5);
      }
      sub_DA73B4(&v36, (int *)v2 + 14);
      v6 = MinecraftGame::getAccessibilityProvider(*((MinecraftGame **)v3 + 3));
      if ( !*(_DWORD *)(v36 - 12)
        || (v7 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v6 + 20),
            mce::UUID::fromString((int)&v35, &v36),
            v7(v6, &v35) == 1) )
        v8 = *((_DWORD *)v3 + 3);
        sub_DA73B4(&v34, (int *)v2);
        sub_DA73B4(&v33, (int *)v2 + 1);
        sub_DA73B4(&v32, &v36);
        v10 = *((_BYTE *)v2 + 40) != 0;
        v9 = (LevelSettings *)LevelSettings::LevelSettings((LevelSettings *)&v31);
        MinecraftGame::startLocalServer(v8, &v34, &v33, &v32, v10, v9);
        LevelSettings::~LevelSettings((LevelSettings *)&v31);
        v11 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v25 = (unsigned int *)(v32 - 4);
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
            j_j_j_j_j__ZdlPv_9(v11);
        v12 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != &dword_28898C0 )
          v27 = (unsigned int *)(v33 - 4);
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
            v28 = (*v27)--;
          if ( v28 <= 0 )
            j_j_j_j_j__ZdlPv_9(v12);
        v13 = (void *)(v34 - 12);
        if ( (int *)(v34 - 12) != &dword_28898C0 )
          v29 = (unsigned int *)(v34 - 4);
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
            v30 = (*v29)--;
          if ( v30 <= 0 )
            j_j_j_j_j__ZdlPv_9(v13);
      v14 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v36 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          goto LABEL_31;
LABEL_30:
        v16 = (*v15)--;
LABEL_31:
        if ( v16 <= 0 )
          j_j_j_j_j__ZdlPv_9(v14);
        return;
    }
    else
      sub_DA7364((void **)&v39, "disconnectionScreen.cantConnect");
      sub_DA7364((void **)&v38, "disconnectionScreen.editionMismatch");
      MinecraftScreenModel::navigateToDisconnectScreen((int)v3, &v39, &v38);
      v18 = (void *)(v38 - 12);
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v38 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j_j__ZdlPv_9(v18);
      v14 = (void *)(v39 - 12);
      if ( (int *)(v39 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v39 - 4);
        goto LABEL_30;
  }
  else
    sub_DA7364((void **)&v41, "disconnectionScreen.cantConnect");
    sub_DA7364((void **)&v40, "disconnectionScreen.futureVersion");
    MinecraftScreenModel::navigateToDisconnectScreen((int)v3, &v41, &v40);
    v17 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v40 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j_j__ZdlPv_9(v17);
    v14 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v41 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        goto LABEL_31;
      goto LABEL_30;
}


void __fastcall MinecraftScreenModel::getRealmsConfigDetails(int a1, __int64 *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  __int64 *v5; // r6@1
  Options *v6; // r0@1
  int v7; // r5@2
  void (__fastcall *v8)(int *, int, signed int); // r3@2
  int v9; // [sp+0h] [bp-28h]@3
  void (*v10)(void); // [sp+8h] [bp-20h]@2
  int v11; // [sp+Ch] [bp-1Ch]@3
  __int64 v12; // [sp+10h] [bp-18h]@2

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(a1 + 16));
  if ( (Options::getRealmsEnvironment(v6) | 1) == 3 )
  {
    v7 = MinecraftGame::getRealms(*(MinecraftGame **)(v3 + 12));
    v12 = *v5;
    v10 = 0;
    v8 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
    if ( v8 )
    {
      v8(&v9, v4, 2);
      v11 = *(_DWORD *)(v4 + 12);
      v10 = *(void (**)(void))(v4 + 8);
    }
    RealmsAPI::getRealmsConfigDetails(v7, &v12, (int)&v9);
    if ( v10 )
      v10();
  }
}


int __fastcall MinecraftScreenModel::isHolographic(MinecraftScreenModel *this)
{
  int v1; // r0@1

  v1 = ClientInstance::getHoloInput(*((ClientInstance **)this + 4));
  return (*(int (**)(void))(*(_DWORD *)v1 + 44))();
}


int __fastcall MinecraftScreenModel::getXuidsInLobby(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel *v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = this;
  v3 = (unsigned __int64 *)MinecraftGame::getMultiplayerServiceManager(*(MinecraftGame **)(a2 + 12));
  return Social::MultiplayerServiceManager::getUidsInLobby((int)v2, v3, 0);
}


int __fastcall MinecraftScreenModel::triggerPortfolioExportedTelemetry(MinecraftScreenModel *this, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  MinecraftEventing *v6; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v6 = (MinecraftEventing *)(*(int (**)(void))(*(_DWORD *)v5 + 1440))();
  return j_j_j__ZN17MinecraftEventing26fireEventPortfolioExportedEii(v6, v4, v3);
}


int __fastcall MinecraftScreenModel::isPlayerValid(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  int v2; // r0@2
  Entity *v3; // r0@3
  int result; // r0@3

  v1 = this;
  if ( ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4))
    && (v2 = ClientInstance::getLocalPlayer(*((ClientInstance **)v1 + 4)),
        (*(int (**)(void))(*(_DWORD *)v2 + 316))() == 1) )
  {
    v3 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v1 + 4));
    result = Entity::isRemoved(v3) ^ 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall MinecraftScreenModel::recenterVRAlignment(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r5@1
  int v2; // r0@1
  int v3; // r4@1
  int result; // r0@1

  v1 = this;
  v2 = ClientInstance::getHoloInput(*((ClientInstance **)this + 4));
  v3 = v2;
  result = (*(int (**)(void))(*(_DWORD *)v2 + 308))();
  if ( result == 1 )
  {
    (*(void (__fastcall **)(int, signed int, _DWORD))(*(_DWORD *)v3 + 132))(v3, 1065353216, 0);
    *(_BYTE *)(ClientInstance::getGameRenderer(*((ClientInstance **)v1 + 4)) + 814) = 1;
    result = 2;
    *(_DWORD *)(v3 + 652) = 2;
  }
  return result;
}


_DWORD *__fastcall MinecraftScreenModel::pushToast(int a1, int a2, int *a3, int *a4, int *a5)
{
  int *v5; // r4@1
  int *v6; // r5@1
  int v7; // r6@1
  int v8; // r0@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = ClientInstance::getToastManager(*(ClientInstance **)(a1 + 16));
  return j_j_j__ZN12ToastManager9pushToastE16ToastMessageTypeRKSsS2_S2_(v8, v7, v6, v5, a5);
}


signed int __fastcall MinecraftScreenModel::getInventorySlotCount(MinecraftScreenModel *this)
{
  return 27;
}


signed int __fastcall MinecraftScreenModel::getSplitscreenJoinPromptVisible(MinecraftScreenModel *this)
{
  ClientInputHandler *v1; // r0@1

  v1 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)this + 4));
  return j_j_j__ZNK18ClientInputHandler31getSplitscreenJoinPromptVisibleEv(v1);
}


  if ( MinecraftScreenModel::isInputModeMouse(*(MinecraftScreenModel **)(v4 + 424)) == 1 )
{
    ControlsSettingsScreenController::_handleKeyboardRawInputEvent(v4, v2);
  }
  else if ( MinecraftScreenModel::isInputModeGamepad(*(MinecraftScreenModel **)(v4 + 424)) == 1
         && ControlsSettingsScreenController::_handleGamepadRawInputEvent(v4, v2) != 1 )
  {
    return 1;
  MinecraftScreenModel::setInputBindingMode(*(_DWORD *)(v4 + 424));
  return 1;
}


unsigned int __fastcall MinecraftScreenModel::removeFriend(int a1, int *a2, int a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  int (__cdecl *v6)(__int64 *, __int64 *); // r1@1
  unsigned int result; // r0@1
  int v8; // r4@3
  unsigned int *v9; // r1@4
  unsigned int *v10; // r5@10
  __int64 v11; // [sp+0h] [bp-28h]@1
  int (__cdecl *v12)(__int64 *, __int64 *); // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1
  Social::User *v14; // [sp+10h] [bp-18h]@1
  int v15; // [sp+14h] [bp-14h]@3

  v3 = a2;
  v4 = a3;
  ClientInstance::getUser((ClientInstance *)&v14, *(_DWORD *)(a1 + 16));
  v5 = Social::User::getLiveUser(v14);
  v11 = *(_QWORD *)v4;
  v6 = *(int (__cdecl **)(__int64 *, __int64 *))(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v12 = v6;
  v13 = *(_DWORD *)(v4 + 12);
  result = Social::XboxLiveUserManager::removeFriend(v5, v3, (int)&v11);
  if ( v12 )
    result = v12(&v11, &v11);
  v8 = v15;
  if ( v15 )
  {
    v9 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
    }
    else
      result = (*v9)--;
    if ( result == 1 )
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
      }
      else
        result = (*v10)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  return result;
}


  if ( MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v1 + 432))
{
  {
    result = 0;
  }
  else if ( *(_BYTE *)(v1 + 456) && PlayScreenModel::getRealmsFirstFetchComplete(*(PlayScreenModel **)(v1 + 432)) == 1 )
    result = PlayScreenModel::getRealmsStatus(*(PlayScreenModel **)(v1 + 432)) != 0;
  else
    result = 1;
  return result;
}


  if ( MinecraftScreenModel::_isPremiumLocked(*(MinecraftScreenModel **)(v4 + 424), *(const PackManifest **)(v5 + 60)) )
{
  v6 = PackManifest::getPackCategory(*(PackManifest **)(v5 + 60));
  v9 = v6 == 1;
  if ( v6 != 1 )
  {
    v8 = *(_QWORD *)(v5 + 24);
    v9 = v8 == 0;
  }
  if ( v9 )
LABEL_9:
    result = sub_21E8AF4(v3, (int *)&Util::EMPTY_STRING);
  else
    result = Util::getFilesizeString((Util *)v3, v7, v8);
  return result;
}


int __fastcall MinecraftScreenModel::fireEventFileTransmissionState(int a1, int a2, int a3, int a4, double a5, __int64 a6, __int64 a7)
{
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r6@1
  int v10; // r0@1

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = MinecraftGame::getEventing(*(MinecraftGame **)(a1 + 12));
  return j_j_j__ZN17MinecraftEventing30fireEventFileTransmissionStateENS_25FileTransmissionDirectionENS_21FileTransmissionStateENS_20FileTransmissionTypeERKSsyd(
           v10,
           v9,
           v8,
           v7,
           a5,
           a6,
           a7);
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v3 + 424)) == 1 )
{
    sub_21E94B4((void **)&v17, (const char *)&unk_257BC67);
  }
  else
  {
    v5 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v3 + 424));
    (*(void (__fastcall **)(int *))(*(_DWORD *)v5 + 24))(&v17);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v18 = (char *)operator new(4u);
  v20 = v18 + 4;
  v19 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v17,
                  (int)&v18,
                  (int)v18);
  I18n::get(v2, &v21, (unsigned __int64 *)&v18);
  v7 = (int)v19;
  v6 = v18;
  if ( v18 != v19 )
    do
    {
      v10 = (int *)(*(_DWORD *)v6 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*(_DWORD *)v6 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
      }
      v6 += 4;
    }
    while ( v6 != (char *)v7 );
    v6 = v18;
  if ( v6 )
    operator delete(v6);
  v11 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v21 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
}


  if ( MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v1 + 380)) )
{
  else
    result = MinecraftScreenModel::hasLocalDeviceEntitlements(*(MinecraftScreenModel **)(v1 + 380)) ^ 1;
  return result;
}


void __fastcall MinecraftScreenModel::readEndPoem(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel::readEndPoem(this, a2);
}


int __fastcall MinecraftScreenModel::getRealmsShowFriendInvitesOnly(MinecraftScreenModel *this)
{
  Options *v1; // r0@1

  v1 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  return j_j_j__ZNK7Options32getRealmsInviteShowFriendsOptionEv(v1);
}


signed int __fastcall MinecraftScreenModel::getLinkedSlotCount(MinecraftScreenModel *this)
{
  Player *v1; // r0@1
  PlayerInventoryProxy *v2; // r0@1

  v1 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  v2 = (PlayerInventoryProxy *)Player::getSupplies(v1);
  return j_j_j__ZNK20PlayerInventoryProxy19getLinkedSlotsCountEv_0(v2);
}


int __fastcall MinecraftScreenModel::triggerRealmUrlGenerated(int a1, const char **a2, __int64 *a3)
{
  __int64 *v3; // r4@1
  const char **v4; // r5@1
  int v5; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getEventing(*(MinecraftGame **)(a1 + 12));
  return j_j_j__ZN17MinecraftEventing26fireEventRealmUrlGeneratedERKSsRKN6Realms2IdE(v5, v4, v3);
}


int __fastcall MinecraftScreenModel::hasLocalDeviceEntitlements(MinecraftScreenModel *this)
{
  EntitlementManager *v1; // r0@1

  v1 = (EntitlementManager *)MinecraftGame::getEntitlementManager(*((MinecraftGame **)this + 3));
  return j_j_j__ZN18EntitlementManager24hasAnActiveDeviceAccountEv(v1);
}


int __fastcall MinecraftScreenModel::addDownloadCallback(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  void (__fastcall *v9)(int *, int, signed int); // r3@7
  int result; // r0@11
  unsigned int *v11; // r2@12
  unsigned int v12; // r1@14
  int v13; // [sp+0h] [bp-28h]@8
  void (*v14)(void); // [sp+8h] [bp-20h]@7
  int v15; // [sp+Ch] [bp-1Ch]@8
  int v16; // [sp+10h] [bp-18h]@1
  int v17; // [sp+14h] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getDownloadMonitor(*(MinecraftGame **)(a1 + 12));
  v16 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(v4 + 4);
  v17 = v6;
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  v14 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
  if ( v9 )
    v9(&v13, v3, 2);
    v15 = *(_DWORD *)(v3 + 12);
    v14 = *(void (**)(void))(v3 + 8);
  DownloadMonitor::addDownloadCallback(v5, (int)&v16, (int)&v13);
  if ( v14 )
    v14();
  result = v17;
  if ( v17 )
    v11 = (unsigned int *)(v17 + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall MinecraftScreenModel::isAchievementDataUpdating(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r7@8
  unsigned int v6; // r0@10
  Social::XboxLiveUserManager *v7; // r0@16
  int v8; // r4@16
  int v9; // r5@16
  unsigned int *v10; // r1@17
  unsigned int v11; // r0@19
  unsigned int *v12; // r6@24
  unsigned int v13; // r0@26
  Social::User *v15; // [sp+4h] [bp-24h]@16
  int v16; // [sp+8h] [bp-20h]@16
  char v17; // [sp+Ch] [bp-1Ch]@1
  int v18; // [sp+10h] [bp-18h]@1

  v1 = this;
  ClientInstance::getUser((ClientInstance *)&v17, *((_DWORD *)this + 4));
  v2 = *(_QWORD *)&v17;
  if ( v18 )
  {
    v3 = (unsigned int *)(v18 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(HIDWORD(v2) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 8))(HIDWORD(v2));
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  }
  if ( (_DWORD)v2 )
    ClientInstance::getUser((ClientInstance *)&v15, *((_DWORD *)v1 + 4));
    v7 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v15);
    v8 = Social::XboxLiveUserManager::isAchievementDataUpdating(v7);
    v9 = v16;
    if ( v16 )
      v10 = (unsigned int *)(v16 + 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        v12 = (unsigned int *)(v9 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  else
    v8 = 0;
  return v8;
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  return result;
}


signed int __fastcall MinecraftScreenModel::findAndEditExternalServer(int a1, int *a2, int *a3, int a4, int a5)
{
  int v5; // r4@1
  int *v6; // r5@1
  int *v7; // r6@1
  int v8; // r0@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = MinecraftGame::getExternalServer(*(MinecraftGame **)(a1 + 12));
  return ExternalServerFile::findAndEditServer(v8, v7, v6, v5, a5);
}


int __fastcall MinecraftScreenModel::getDevCreateRealmWithoutPurchase(MinecraftScreenModel *this)
{
  Options *v1; // r0@1

  v1 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  return j_j_j__ZNK7Options32getDevCreateRealmWithoutPurchaseEv(v1);
}


int __fastcall MinecraftScreenModel::getContentTierInfo(MinecraftScreenModel *this)
{
  ContentTierManager *v1; // r0@1

  v1 = (ContentTierManager *)MinecraftGame::getContentTierManager(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK18ContentTierManager18getContentTierInfoEv(v1);
}


int __fastcall MinecraftScreenModel::setMaxDevConsoleMessages(MinecraftScreenModel *this, int a2)
{
  int v2; // r4@1
  GuiData *v3; // r0@1

  v2 = a2;
  v3 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 4));
  return j_j_j__ZN7GuiData24setDevConsoleMaxMessagesEi(v3, v2);
}


void __fastcall MinecraftScreenModel::navigateToPlatformStoreConnectConfirmationScreen(int a1, int a2)
{
  __int64 v2; // r4@1
  int v3; // r6@1
  void (__fastcall *v4)(int *); // r3@1
  int v5; // r4@3
  unsigned int *v6; // r1@4
  unsigned int v7; // r0@6
  unsigned int *v8; // r5@10
  unsigned int v9; // r0@12
  int v10; // [sp+0h] [bp-28h]@2
  void (*v11)(void); // [sp+8h] [bp-20h]@1
  int v12; // [sp+Ch] [bp-1Ch]@2
  char v13; // [sp+10h] [bp-18h]@3
  int v14; // [sp+14h] [bp-14h]@3

  v2 = *(_QWORD *)(a1 + 20);
  v3 = a2;
  v11 = 0;
  v4 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v4 )
  {
    v4(&v10);
    v12 = *(_DWORD *)(v3 + 12);
    v11 = *(void (**)(void))(v3 + 8);
  }
  SceneFactory::createPlatformStoreConnectConfirmationScreen((unsigned __int64 *)&v13, SHIDWORD(v2), (int)&v10);
  SceneStack::pushScreen(v2, (int)&v13, 0);
  v5 = v14;
  if ( v14 )
    v6 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  if ( v11 )
    v11();
}


void __fastcall MinecraftScreenModel::startLocalServer(int a1, int *a2, LevelSettings *a3)
{
  MinecraftScreenModel::startLocalServer(a1, a2, a3);
}


void __fastcall MinecraftScreenModel::listRealmsInvites(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void (__fastcall *v4)(int *, int, signed int); // r3@1
  int v5; // [sp+0h] [bp-20h]@2
  void (*v6)(void); // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@2

  v2 = a2;
  v3 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v6 = 0;
  v4 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
  if ( v4 )
  {
    v4(&v5, v2, 2);
    v7 = *(_DWORD *)(v2 + 12);
    v6 = *(void (**)(void))(v2 + 8);
  }
  RealmsAPI::listInvites(v3, (int)&v5);
  if ( v6 )
    v6();
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  return result;
}


void __fastcall MinecraftScreenModel::navigateToStartScreen(MinecraftScreenModel *this)
{
  __int64 v1; // kr00_8@1
  int v2; // r4@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r5@8
  unsigned int v6; // r0@10
  int v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@1

  v1 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createStartMenuScreen((SceneFactory *)&v7, SHIDWORD(v1));
  SceneStack::pushScreen(v1, (int)&v7, 1);
  v2 = v8;
  if ( v8 )
  {
    v3 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
}


_BOOL4 __fastcall MinecraftScreenModel::isRiding(MinecraftScreenModel *this)
{
  Entity *v1; // r0@1

  v1 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return j_j_j__ZNK6Entity8isRidingEv_0(v1);
}


void __fastcall MinecraftScreenModel::updateRealmsTrialAvailable(int a1, int a2)
{
  MinecraftScreenModel::updateRealmsTrialAvailable(a1, a2);
}


int *__fastcall MinecraftScreenModel::removeExternalServer(MinecraftScreenModel *this, int a2)
{
  int v2; // r4@1
  ExternalServerFile *v3; // r0@1

  v2 = a2;
  v3 = (ExternalServerFile *)MinecraftGame::getExternalServer(*((MinecraftGame **)this + 3));
  return j_j_j__ZN18ExternalServerFile12removeServerEi(v3, v2);
}


  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v3 + 380), 0) == 1 )
{
  if ( v4 < 1 )
    result = sub_21E94B4(v2, (const char *)&unk_257BC67);
  else
    result = Util::toString<int,(void *)0,(void *)0>(v2, v4);
  return result;
}


void __fastcall MinecraftScreenModel::navigateToPermissionsScreen(int a1, int a2, __int64 a3)
{
  MinecraftScreenModel::navigateToPermissionsScreen(a1, a2, a3);
}


int __fastcall MinecraftScreenModel::getPlayerAbilities(MinecraftScreenModel *this)
{
  return ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4)) + 4320;
}


int __fastcall MinecraftScreenModel::getActiveDirectoryIdentity(MinecraftScreenModel *this)
{
  ActiveDirectoryIdentity *v1; // r0@1

  v1 = (ActiveDirectoryIdentity *)MinecraftGame::getActiveDirectoryIdentity(*((MinecraftGame **)this + 3));
  return j_j_j__ZN23ActiveDirectoryIdentity11getIdentityEv(v1);
}


signed int __fastcall MinecraftScreenModel::getNewPopupItemText(int a1, int *a2, _BYTE *a3, char *a4)
{
  int v4; // r5@1
  char *v5; // r4@1
  _BYTE *v6; // r6@1
  int *v7; // r7@1
  int v8; // r0@1
  const void **v9; // r0@2
  char *v10; // r0@2
  void *v11; // r0@3
  int v12; // r0@4
  ClientInputHandler *v13; // r0@5
  char v14; // r0@6
  signed int v15; // r4@7
  ClientInputHandler *v16; // r0@9
  char *v17; // r0@11
  char *v18; // r0@12
  unsigned int *v20; // r2@14
  signed int v21; // r1@16
  unsigned int *v22; // r2@18
  signed int v23; // r1@20
  unsigned int *v24; // r2@22
  signed int v25; // r1@24
  unsigned int *v26; // r2@26
  signed int v27; // r1@28
  int v28; // [sp+0h] [bp-28h]@2
  char *v29; // [sp+4h] [bp-24h]@2
  char *v30; // [sp+8h] [bp-20h]@1
  char *v31; // [sp+Ch] [bp-1Ch]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v30 = (char *)&unk_28898CC;
  v31 = (char *)&unk_28898CC;
  v8 = ClientInstance::getGuiData(*(ClientInstance **)(a1 + 16));
  if ( GuiData::getNewPopupNotice(v8, (int *)&v31, (int *)&v30) == 1 )
  {
    sub_DA73B4(&v28, (int *)&v31);
    sub_DA7564((const void **)&v28, (const void **)&Util::NEW_LINE);
    v9 = sub_DA7564((const void **)&v28, (const void **)&v30);
    v29 = (char *)*v9;
    *v9 = &unk_28898CC;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      v7,
      (int *)&v29);
    v10 = v29 - 12;
    if ( (int *)(v29 - 12) != &dword_28898C0 )
    {
      v24 = (unsigned int *)(v29 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      }
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9(v10);
    }
    v11 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v28 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9(v11);
    v12 = ClientInstance::getLocalPlayer(*(ClientInstance **)(v4 + 16));
    *v6 = (*(int (**)(void))(*(_DWORD *)v12 + 652))();
    if ( ClientInstance::getCurrentInputMode(*(ClientInstance **)(v4 + 16)) == 2 )
      v13 = (ClientInputHandler *)ClientInstance::getInput(*(ClientInstance **)(v4 + 16));
      if ( ClientInputHandler::canInteract(v13) )
        v14 = 1;
        v16 = (ClientInputHandler *)ClientInstance::getInput(*(ClientInstance **)(v4 + 16));
        v14 = ClientInputHandler::showBoatExit(v16);
    else
      v14 = 0;
    *v5 = v14;
    v15 = 1;
  }
  else
    v15 = 0;
  v17 = v30 - 12;
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v30 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  v18 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v31 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  return v15;
}


void __fastcall MinecraftScreenModel::navigateToPlatformAchievementsConnectConfirmationScreen(int a1, int a2)
{
  __int64 v2; // r4@1
  int v3; // r6@1
  void (__fastcall *v4)(int *); // r3@1
  int v5; // r4@3
  unsigned int *v6; // r1@4
  unsigned int v7; // r0@6
  unsigned int *v8; // r5@10
  unsigned int v9; // r0@12
  int v10; // [sp+0h] [bp-28h]@2
  void (*v11)(void); // [sp+8h] [bp-20h]@1
  int v12; // [sp+Ch] [bp-1Ch]@2
  char v13; // [sp+10h] [bp-18h]@3
  int v14; // [sp+14h] [bp-14h]@3

  v2 = *(_QWORD *)(a1 + 20);
  v3 = a2;
  v11 = 0;
  v4 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v4 )
  {
    v4(&v10);
    v12 = *(_DWORD *)(v3 + 12);
    v11 = *(void (**)(void))(v3 + 8);
  }
  SceneFactory::createPlatformAchievementsConnectConfirmationScreen((unsigned __int64 *)&v13, SHIDWORD(v2), (int)&v10);
  SceneStack::pushScreen(v2, (int)&v13, 0);
  v5 = v14;
  if ( v14 )
    v6 = (unsigned int *)(v14 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  if ( v11 )
    v11();
}


void __fastcall MinecraftScreenModel::getRealmsConfigDetails(int a1, __int64 *a2, int a3)
{
  MinecraftScreenModel::getRealmsConfigDetails(a1, a2, a3);
}


void __fastcall MinecraftScreenModel::doNotSignIntoXbl(MinecraftScreenModel *this)
{
  MinecraftScreenModel::doNotSignIntoXbl(this);
}


              if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) == 1 )
{
            }
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v5);
            while ( __strex(result - 1, v5) );
          else
            result = (*v5)--;
          if ( result == 1 )
            v14 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = __ldrex(v14);
              while ( __strex(result - 1, v14) );
            else
              result = (*v14)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return result;
        }
      }
      else
      {
        __clrex();
        v4 = v6;
    }
  }
  return result;
}


  if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 380), 1) )
{
    result = 0;
  }
  else
  {
    v3 = 0;
    if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v1 + 380), 0) == 1 )
    {
      v3 = 0;
      if ( !*(_BYTE *)(v1 + 440) && RemixProgressTracker::getState(*(RemixProgressTracker **)(v1 + 424)) != 10 )
        v3 = 1;
    }
    result = v3;
  return result;
}


void __fastcall MinecraftScreenModel::sendRealmsWhitelistNotification(int a1, __int64 *a2)
{
  MinecraftScreenModel::sendRealmsWhitelistNotification(a1, a2);
}


void __fastcall MinecraftScreenModel::getBuildDateISOString(MinecraftScreenModel *this)
{
  MinecraftScreenModel::getBuildDateISOString(this);
}


unsigned int __fastcall MinecraftScreenModel::removeFavorite(int a1, int *a2, int a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  int (__cdecl *v6)(__int64 *, __int64 *); // r1@1
  unsigned int result; // r0@1
  int v8; // r4@3
  unsigned int *v9; // r1@4
  unsigned int *v10; // r5@10
  __int64 v11; // [sp+0h] [bp-28h]@1
  int (__cdecl *v12)(__int64 *, __int64 *); // [sp+8h] [bp-20h]@1
  int v13; // [sp+Ch] [bp-1Ch]@1
  Social::User *v14; // [sp+10h] [bp-18h]@1
  int v15; // [sp+14h] [bp-14h]@3

  v3 = a2;
  v4 = a3;
  ClientInstance::getUser((ClientInstance *)&v14, *(_DWORD *)(a1 + 16));
  v5 = Social::User::getLiveUser(v14);
  v11 = *(_QWORD *)v4;
  v6 = *(int (__cdecl **)(__int64 *, __int64 *))(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v12 = v6;
  v13 = *(_DWORD *)(v4 + 12);
  result = Social::XboxLiveUserManager::unfavoriteUser(v5, v3, (int)&v11);
  if ( v12 )
    result = v12(&v11, &v11);
  v8 = v15;
  if ( v15 )
  {
    v9 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v9);
      while ( __strex(result - 1, v9) );
    }
    else
      result = (*v9)--;
    if ( result == 1 )
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v10);
        while ( __strex(result - 1, v10) );
      }
      else
        result = (*v10)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  return result;
}


signed int __fastcall MinecraftScreenModel::abortAllRealmsRequests(MinecraftScreenModel *this)
{
  RealmsAPI *v1; // r0@1

  v1 = (RealmsAPI *)MinecraftGame::getRealms(*((MinecraftGame **)this + 3));
  return j_j_j__ZN9RealmsAPI16abortAllRequestsEv(v1);
}


Level *__fastcall MinecraftScreenModel::fetchScreenshots(int a1, _QWORD *a2)
{
  _QWORD *v2; // r11@1
  int v3; // r9@1
  __int64 v4; // kr00_8@1
  int *v5; // r1@2
  _DWORD *v6; // r7@2
  int (**v7)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@2
  unsigned int *v8; // r2@3
  signed int v9; // r6@5
  int *v10; // r4@9
  int (**v11)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r6@9
  int *v12; // r0@10
  Level *result; // r0@12
  Level *v14; // r6@12
  Entity *v15; // r5@13
  Player *v16; // r0@14
  int v17; // [sp+0h] [bp-28h]@2

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = &v17;
    v6 = (_DWORD *)v4;
    v7 = &pthread_create;
    do
    {
      v12 = (int *)(*v6 - 12);
      if ( v12 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*v6 - 4);
        if ( v7 )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 <= 0 )
          v10 = v5;
          v11 = v7;
          j_j_j_j_j__ZdlPv_9(v12);
          v7 = v11;
          v5 = v10;
      }
      ++v6;
    }
    while ( v6 != (_DWORD *)HIDWORD(v4) );
  }
  *((_DWORD *)v2 + 1) = v4;
  result = (Level *)ClientInstance::getLevel(*(ClientInstance **)(v3 + 16));
  v14 = result;
  if ( result )
    result = (Level *)ClientInstance::getLocalPlayer(*(ClientInstance **)(v3 + 16));
    v15 = result;
    if ( result )
      v16 = (Player *)Level::getPhotoStorage(v14);
      result = PhotoStorage::getLoosePhotos(v16, v15, v2);
  return result;
}


void __fastcall MinecraftScreenModel::navigateToXblGamerProfileCardScreen(int a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // kr00_8@1
  int v5; // r4@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r0@4
  unsigned int *v8; // r5@8
  unsigned int v9; // r0@10
  int v10; // [sp+0h] [bp-28h]@1
  int v11; // [sp+4h] [bp-24h]@1
  __int64 v12; // [sp+8h] [bp-20h]@1
  __int64 v13; // [sp+10h] [bp-18h]@1

  v12 = a3;
  v13 = a4;
  v4 = *(_QWORD *)(a1 + 20);
  SceneFactory::createXblGamerProfileCardScreen((unsigned __int64 *)&v10, SHIDWORD(v4), a2, (int)&v12);
  SceneStack::pushScreen(v4, (int)&v10, 0);
  v5 = v11;
  if ( v11 )
  {
    v6 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
}


int __fastcall MinecraftScreenModel::convertLocalEntitlementsToXBL(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void (__fastcall *v4)(int *, int, signed int); // r3@1
  int result; // r0@3
  int v6; // [sp+0h] [bp-20h]@2
  int (*v7)(void); // [sp+8h] [bp-18h]@1
  int v8; // [sp+Ch] [bp-14h]@2

  v2 = a2;
  v3 = MinecraftGame::getEntitlementManager(*(MinecraftGame **)(a1 + 12));
  v7 = 0;
  v4 = *(void (__fastcall **)(int *, int, signed int))(v2 + 8);
  if ( v4 )
  {
    v4(&v6, v2, 2);
    v8 = *(_DWORD *)(v2 + 12);
    v7 = *(int (**)(void))(v2 + 8);
  }
  result = EntitlementManager::transferDeviceAccountToXboxLive(v3, (int)&v6);
  if ( v7 )
    result = v7();
  return result;
}


void __fastcall MinecraftScreenModel::~MinecraftScreenModel(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r0@1

  v1 = MinecraftScreenModel::~MinecraftScreenModel(this);
  j_j_j__ZdlPv_3((void *)v1);
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  return result;
}


void __fastcall MinecraftScreenModel::acknowledgedAutoSave(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  Options *v2; // r0@1
  Options *v3; // r0@1

  v1 = this;
  v2 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  Options::setAcknowledgedAutoSave(v2, 1);
  v3 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v1 + 4));
  j_j_j__ZN7Options4saveEb(v3, 0);
}


void __fastcall MinecraftScreenModel::makeBackupOfLevel(MinecraftScreenModel *this, const LevelSummary *a2)
{
  MinecraftScreenModel::makeBackupOfLevel(this, a2);
}


void __fastcall MinecraftScreenModel::openRealmsWorld(int a1, __int64 *a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  __int64 *v6; // r7@1
  int v7; // r4@1
  void (__fastcall *v8)(char *, int, signed int); // r3@1
  void (__fastcall *v9)(int *, int, signed int); // r3@3
  int v10; // [sp+0h] [bp-40h]@4
  void (*v11)(void); // [sp+8h] [bp-38h]@3
  int v12; // [sp+Ch] [bp-34h]@4
  char v13; // [sp+10h] [bp-30h]@2
  void (*v14)(void); // [sp+18h] [bp-28h]@1
  int v15; // [sp+1Ch] [bp-24h]@2
  __int64 v16; // [sp+20h] [bp-20h]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v16 = *v6;
  v14 = 0;
  v8 = *(void (__fastcall **)(char *, int, signed int))(v5 + 8);
  if ( v8 )
  {
    v8(&v13, v5, 2);
    v15 = *(_DWORD *)(v5 + 12);
    v14 = *(void (**)(void))(v5 + 8);
  }
  v11 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v9 )
    v9(&v10, v4, 2);
    v12 = *(_DWORD *)(v4 + 12);
    v11 = *(void (**)(void))(v4 + 8);
  RealmsAPI::openWorld(v7, &v16, (int)&v13, (int)&v10);
  if ( v11 )
    v11();
  if ( v14 )
    v14();
}


void __fastcall MinecraftScreenModel::sendPurchaseReceiptsToServer(MinecraftScreenModel *this)
{
  MinecraftScreenModel::sendPurchaseReceiptsToServer(this);
}


int __fastcall MinecraftScreenModel::getNumberOfOwnedRealms(MinecraftScreenModel *this)
{
  Options *v1; // r0@1

  v1 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  return j_j_j__ZNK7Options22getNumberOfOwnedRealmsEv(v1);
}


int *__fastcall MinecraftScreenModel::editExternalServer(int a1, unsigned int a2, int *a3, int *a4, int a5, int a6)
{
  int *v6; // r4@1
  int *v7; // r5@1
  unsigned int v8; // r6@1
  ExternalServerFile *v9; // r0@1

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = (ExternalServerFile *)MinecraftGame::getExternalServer(*(MinecraftGame **)(a1 + 12));
  return ExternalServerFile::editServer(v9, v8, v7, v6, a5, a6);
}


  if ( MinecraftScreenModel::isSignedInToXBL(*(MinecraftScreenModel **)(v1 + 380)) )
{
  else
    result = MinecraftScreenModel::hasLocalDeviceEntitlements(*(MinecraftScreenModel **)(v1 + 380));
  return result;
}


    if ( MinecraftScreenModel::isAnyDownloadActive(v23, &v118) == 1 )
{
      v28 = (int)v119;
      v27 = v118;
      v29 = *(_BYTE *)(*(_DWORD *)(v14 + 12) + 70);
      if ( v118 != v119 )
      {
        v30 = &v121;
        do
        {
          v35 = (int *)(*(_DWORD *)v27 - 12);
          if ( v35 != &dword_28898C0 )
          {
            v31 = (unsigned int *)(*(_DWORD *)v27 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
            }
            else
              v32 = (*v31)--;
            if ( v32 <= 0 )
              v33 = v15;
              v34 = v30;
              j_j_j_j_j__ZdlPv_9_1(v35);
              v30 = v34;
              v15 = v33;
          }
          v27 += 4;
        }
        while ( v27 != (char *)v28 );
        v27 = v118;
      }
      if ( v27 )
        operator delete(v27);
      if ( v29 )
        v36 = *(_DWORD *)(v14 + 12);
        *(_BYTE *)(v36 + 76) = 0;
        v116 = v36;
        v37 = *(_DWORD *)(v14 + 16);
        v117 = v37;
        if ( v37 )
          v38 = (unsigned int *)(v37 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v39 = __ldrex(v38);
            while ( __strex(v39 + 1, v38) );
          else
            ++*v38;
        DlcPreCheckScreenHandler::_startDownload(v101, (int)&v116);
        v67 = v117;
        if ( v117 )
          v68 = (unsigned int *)(v117 + 4);
              v69 = __ldrex(v68);
            while ( __strex(v69 - 1, v68) );
            v69 = (*v68)--;
          if ( v69 == 1 )
            v70 = (unsigned int *)(v67 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 8))(v67);
                v71 = __ldrex(v70);
              while ( __strex(v71 - 1, v70) );
              goto LABEL_195;
LABEL_194:
            v71 = (*v70)--;
            goto LABEL_195;
LABEL_197:
        if ( !v15 )
          return;
        goto LABEL_198;
    }
    else
    {
      v40 = (int)v119;
      v41 = v118;
        v42 = &v121;
        v43 = &pthread_create;
          v48 = (int *)(*(_DWORD *)v41 - 12);
          if ( v48 != &dword_28898C0 )
            v44 = (unsigned int *)(*(_DWORD *)v41 - 4);
            if ( v43 )
                v45 = __ldrex(v44);
              while ( __strex(v45 - 1, v44) );
              v45 = (*v44)--;
            if ( v45 <= 0 )
              v46 = v43;
              v47 = v42;
              j_j_j_j_j__ZdlPv_9_1(v48);
              v42 = v47;
              v43 = v46;
          v41 += 4;
        while ( v41 != (char *)v40 );
        v41 = v118;
      if ( v41 )
        operator delete(v41);
    v49 = MainMenuScreenModel::hasUnownedDlcDependencies(
            *(_DWORD *)(v101 + 8),
            (unsigned __int64 *)(*(_DWORD *)(v14 + 12) + 44));
    v50 = *(_DWORD *)(v14 + 12);
    v51 = v49 == 1;
    if ( v49 == 1 )
      v51 = *(_BYTE *)(v50 + 72) == 0;
    if ( v51 )
      v114 = *(_DWORD *)(v14 + 12);
      v61 = *(_DWORD *)(v14 + 16);
      v115 = v61;
      if ( v61 )
        v62 = (unsigned int *)(v61 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v63 = __ldrex(v62);
          while ( __strex(v63 + 1, v62) );
        else
          ++*v62;
      DlcPreCheckScreenHandler::_promptUnownedPacks(v101, (int)&v114);
      v67 = v115;
      if ( !v115 )
        goto LABEL_197;
      v78 = (unsigned int *)(v115 + 4);
      if ( &pthread_create )
        __dmb();
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
      else
        v79 = (*v78)--;
      if ( v79 != 1 )
      v70 = (unsigned int *)(v67 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 8))(v67);
      if ( !&pthread_create )
        goto LABEL_194;
      __dmb();
      do
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v52 = MainMenuScreenModel::hasOwnedMissingDlcDependencies(*(_DWORD *)(v101 + 8), (unsigned __int64 *)(v50 + 44));
      v53 = *(_DWORD *)(v14 + 12);
      v54 = *(_QWORD *)(v53 + 4);
      if ( !v52 || (_DWORD)v54 != HIDWORD(v54) )
        if ( (_DWORD)v54 != HIDWORD(v54) )
          if ( MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v101 + 8), 0) )
            v55 = *(_DWORD *)(v14 + 12);
            if ( (unsigned int)*(_QWORD *)(v55 + 4) == *(_QWORD *)(v55 + 4) >> 32 || *(_BYTE *)(v55 + 73) )
              v56 = MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v101 + 8), 1);
              v57 = *(_DWORD *)(v14 + 12);
              if ( v56 == 1 || *(_BYTE *)(v57 + 75) )
              {
                if ( (unsigned int)*(_QWORD *)(v57 + 4) == *(_QWORD *)(v57 + 4) >> 32 )
                {
                  if ( *(_DWORD *)(v57 + 36) )
                    (*(void (__fastcall **)(int))(v57 + 40))(v57 + 28);
                  goto LABEL_197;
                }
                v102 = *(_DWORD *)(v14 + 12);
                v58 = *(_DWORD *)(v14 + 16);
                v103 = v58;
                if ( v58 )
                  v59 = (unsigned int *)(v58 + 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v60 = __ldrex(v59);
                    while ( __strex(v60 + 1, v59) );
                  }
                  else
                    ++*v59;
                DlcPreCheckScreenHandler::_startDownload(v101, (int)&v102);
                v67 = v103;
                if ( !v103 )
                v92 = (unsigned int *)(v103 + 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v93 = __ldrex(v92);
                  while ( __strex(v93 - 1, v92) );
                else
                  v93 = (*v92)--;
                if ( v93 != 1 )
                v70 = (unsigned int *)(v67 + 8);
                (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v67 + 8))(v67);
                if ( !&pthread_create )
                  goto LABEL_194;
                __dmb();
                do
                  v71 = __ldrex(v70);
                while ( __strex(v71 - 1, v70) );
              }
              else
                *(_BYTE *)(v57 + 76) = 1;
                *(_BYTE *)(v57 + 75) = 1;
                v104 = v57;
                v89 = *(_DWORD *)(v14 + 16);
                v105 = v89;
                if ( v89 )
                  v90 = (unsigned int *)(v89 + 4);
                      v91 = __ldrex(v90);
                    while ( __strex(v91 + 1, v90) );
                    ++*v90;
                DlcPreCheckScreenHandler::_startDownload(v101, (int)&v104);
                v67 = v105;
                if ( !v105 )
                v96 = (unsigned int *)(v105 + 4);
                    v97 = __ldrex(v96);
                  while ( __strex(v97 - 1, v96) );
                  v97 = (*v96)--;
                if ( v97 != 1 )
              v106 = *(_DWORD *)(v14 + 12);
              v84 = *(_DWORD *)(v14 + 16);
              v107 = v84;
              if ( v84 )
                v85 = (unsigned int *)(v84 + 4);
                    v86 = __ldrex(v85);
                  while ( __strex(v86 + 1, v85) );
                  ++*v85;
              DlcPreCheckScreenHandler::_checkStorage(v101, (int)&v106);
              v67 = v107;
              if ( !v107 )
                goto LABEL_197;
              v94 = (unsigned int *)(v107 + 4);
              if ( &pthread_create )
                  v95 = __ldrex(v94);
                while ( __strex(v95 - 1, v94) );
                v95 = (*v94)--;
              if ( v95 != 1 )
              v70 = (unsigned int *)(v67 + 8);
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v67 + 8))(v67);
              if ( !&pthread_create )
                goto LABEL_194;
            v108 = *(_DWORD *)(v14 + 12);
            v64 = *(_DWORD *)(v14 + 16);
            v109 = v64;
            if ( v64 )
              v65 = (unsigned int *)(v64 + 4);
                  v66 = __ldrex(v65);
                while ( __strex(v66 + 1, v65) );
                ++*v65;
            DlcPreCheckScreenHandler::_promptNoInternet(v101, (int)&v108);
            v67 = v109;
            if ( !v109 )
              goto LABEL_197;
            v82 = (unsigned int *)(v109 + 4);
                v83 = __ldrex(v82);
              while ( __strex(v83 - 1, v82) );
              v83 = (*v82)--;
            if ( v83 != 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v67 + 8))(v67);
            if ( !&pthread_create )
              goto LABEL_194;
              v71 = __ldrex(v70);
            while ( __strex(v71 - 1, v70) );
          goto LABEL_195;
        goto LABEL_93;
      if ( !*(_BYTE *)(v53 + 74) )
LABEL_93:
        v110 = *(_DWORD *)(v14 + 12);
        v75 = *(_DWORD *)(v14 + 16);
        v111 = v75;
        if ( v75 )
          v76 = (unsigned int *)(v75 + 4);
              v77 = __ldrex(v76);
            while ( __strex(v77 + 1, v76) );
            ++*v76;
        DlcPreCheckScreenHandler::_tryContinue(v101, (int)&v110);
        v67 = v111;
        if ( !v111 )
          goto LABEL_197;
        v80 = (unsigned int *)(v111 + 4);
            v81 = __ldrex(v80);
          while ( __strex(v81 - 1, v80) );
          v81 = (*v80)--;
        if ( v81 != 1 )
        v70 = (unsigned int *)(v67 + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v67 + 8))(v67);
        if ( !&pthread_create )
          goto LABEL_194;
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
        goto LABEL_195;
      v112 = *(_DWORD *)(v14 + 12);
      v72 = *(_DWORD *)(v14 + 16);
      v113 = v72;
      if ( v72 )
        v73 = (unsigned int *)(v72 + 4);
            v74 = __ldrex(v73);
          while ( __strex(v74 + 1, v73) );
          ++*v73;
      DlcPreCheckScreenHandler::_findMissingOwnedContent(v101, (int)&v112);
      v67 = v113;
      if ( !v113 )
      v87 = (unsigned int *)(v113 + 4);
          v88 = __ldrex(v87);
        while ( __strex(v88 - 1, v87) );
        v88 = (*v87)--;
      if ( v88 != 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v67 + 8))(v67);
LABEL_195:
    if ( v71 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 12))(v67);
    goto LABEL_197;
  }
}


signed int __fastcall MinecraftScreenModel::isLevelLoadingProgressScreen(MinecraftScreenModel *this)
{
  unsigned int v1; // r5@1
  void *v2; // r0@1
  signed int result; // r0@2
  unsigned int *v4; // r2@5
  signed int v5; // r1@7
  int v6; // [sp+4h] [bp-1Ch]@1

  SceneStack::getScreenName((SceneStack *)&v6, *((__int64 **)this + 5));
  v1 = sub_DA7BFC(&v6, "loading_progress_screen", 0, 0x17u);
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
      j_j_j_j_j__ZdlPv_9(v2);
  }
  result = 0;
  if ( v1 != -1 )
    result = 1;
  return result;
}


void __fastcall MinecraftScreenModel::navigateToDevConsole(MinecraftScreenModel *this)
{
  MinecraftScreenModel::navigateToDevConsole(this);
}


int __fastcall MinecraftScreenModel::updateRealmsConfig(int a1, __int64 *a2, int *a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  int *v6; // r4@1
  __int64 *v7; // r7@1
  Options *v8; // r0@1
  int result; // r0@1
  int v10; // r6@2
  void (__fastcall *v11)(int *, int, signed int); // r3@2
  int v12; // [sp+0h] [bp-30h]@3
  int (*v13)(void); // [sp+8h] [bp-28h]@2
  int v14; // [sp+Ch] [bp-24h]@3
  __int64 v15; // [sp+10h] [bp-20h]@2

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(a1 + 16));
  result = Options::getRealmsEnvironment(v8) | 1;
  if ( result == 3 )
  {
    v10 = MinecraftGame::getRealms(*(MinecraftGame **)(v4 + 12));
    v15 = *v7;
    v13 = 0;
    v11 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
    if ( v11 )
    {
      v11(&v12, v5, 2);
      v14 = *(_DWORD *)(v5 + 12);
      v13 = *(int (**)(void))(v5 + 8);
    }
    result = RealmsAPI::updateRealmsConfig(v10, &v15, v6, (int)&v12);
    if ( v13 )
      result = v13();
  }
  return result;
}


void __fastcall MinecraftScreenModel::doNotSignIntoXbl(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  Options *v2; // r0@1
  Options *v3; // r0@1

  v1 = this;
  v2 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 4));
  Options::setHasChosenNotToSignInToXbl(v2, 1);
  v3 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v1 + 4));
  j_j_j__ZN7Options4saveEb(v3, 0);
}


int __fastcall MinecraftScreenModel::isPlayerOnXboxLive(int a1, int a2)
{
  int v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)MinecraftGame::getMultiplayerServiceManager(*(MinecraftGame **)(a1 + 12));
  return j_j_j__ZNK6Social25MultiplayerServiceManager14isPlayerOnlineERKSsNS_28MultiplayerServiceIdentifierE(v3, v2, 0);
}


signed int __fastcall MinecraftScreenModel::isTrial(MinecraftScreenModel *this)
{
  OfferRepository *v1; // r0@1

  v1 = (OfferRepository *)MinecraftGame::getOfferRepository(*((MinecraftGame **)this + 3));
  return j_j_j__ZNK15OfferRepository7isTrialEv(v1);
}


void __fastcall MinecraftScreenModel::navigateToSkinPickerScreen(MinecraftScreenModel *this)
{
  __int64 v1; // kr00_8@1
  int v2; // r4@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r5@8
  unsigned int v6; // r0@10
  int v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@1

  v1 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createSkinPickerScreen((SceneFactory *)&v7, SHIDWORD(v1));
  SceneStack::pushScreen(v1, (int)&v7, 0);
  v2 = v8;
  if ( v8 )
  {
    v3 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
}


  else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
{
    result = 0;
  }
  else
  {
    v3 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 56))();
  return result;
}


signed int __fastcall MinecraftScreenModel::isInputModeTouch(MinecraftScreenModel *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = ClientInstance::getCurrentInputMode(*((ClientInstance **)this + 4));
  v2 = 0;
  if ( v1 == 2 )
    v2 = 1;
  return v2;
}


int __fastcall MinecraftScreenModel::getPlayerPermissionLevel(MinecraftScreenModel *this)
{
  Player *v1; // r0@1

  v1 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 4));
  return j_j_j__ZNK6Player24getPlayerPermissionLevelEv(v1);
}


void __fastcall MinecraftScreenModel::readLoadingMessages(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel *v2; // r10@1
  int v3; // r5@1
  char *v4; // r0@1
  char *v5; // r0@2
  int v6; // r5@4
  int v7; // r11@5
  __int64 v8; // r0@5
  int v9; // r1@6
  void *v10; // r0@8
  void *v11; // r0@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  char *v16; // r0@28
  unsigned int *v17; // r2@30
  signed int v18; // r1@32
  unsigned int *v19; // r2@34
  signed int v20; // r1@36
  unsigned int *v21; // r2@38
  signed int v22; // r1@40
  int v23; // [sp+8h] [bp-D8h]@5
  void *v24; // [sp+Ch] [bp-D4h]@5
  char v25; // [sp+10h] [bp-D0h]@4
  char v26; // [sp+18h] [bp-C8h]@4
  char v27; // [sp+20h] [bp-C0h]@3
  char v28; // [sp+90h] [bp-50h]@3
  char *v29; // [sp+A8h] [bp-38h]@1
  char *v30; // [sp+ACh] [bp-34h]@1
  int v31; // [sp+B0h] [bp-30h]@1
  char *v32; // [sp+B4h] [bp-2Ch]@1

  v2 = this;
  v32 = (char *)&unk_28898CC;
  v3 = MinecraftGame::getResourcePackManager(*(MinecraftGame **)(a2 + 12));
  sub_DA7364((void **)&v29, "loading_messages.json");
  v30 = v29;
  v29 = (char *)&unk_28898CC;
  v31 = 0;
  ResourcePackManager::loadText(v3, (int)&v30, (int *)&v32);
  v4 = v30 - 12;
  if ( (int *)(v30 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v30 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v4);
  }
  v5 = v29 - 12;
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v29 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  Json::Value::Value(&v28, 0);
  Json::Reader::Reader((Json::Reader *)&v27);
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  if ( Json::Reader::parse((int)&v27, (int *)&v32, (int)&v28, 1) == 1 )
    v6 = Json::Value::operator[]((Json::Value *)&v28, "loading_messages");
    Json::Value::begin((Json::Value *)&v26, v6);
    Json::Value::end((Json::Value *)&v25, v6);
    while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v26, (const Json::ValueIteratorBase *)&v25) != 1 )
      v7 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v26);
      sub_DA7364((void **)&v23, (const char *)&unk_257BC67);
      Json::Value::asString((int *)&v24, v7, &v23);
      v8 = *(_QWORD *)((char *)v2 + 4);
      if ( (_DWORD)v8 == HIDWORD(v8) )
      {
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
          (unsigned __int64 *)v2,
          &v24);
        v9 = (int)v24;
      }
      else
        *(_DWORD *)v8 = v24;
        HIDWORD(v8) = &unk_28898CC;
        v24 = &unk_28898CC;
        *((_DWORD *)v2 + 1) = v8 + 4;
      v10 = (void *)(v9 - 12);
      if ( (int *)(v9 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v9 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9(v10);
      v11 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v23 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j_j__ZdlPv_9(v11);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v26);
  Json::Reader::~Reader((Json::Reader *)&v27);
  Json::Value::~Value((Json::Value *)&v28);
  v16 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v32 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
}


signed int __fastcall MinecraftScreenModel::dropItemsFromPlayer(MinecraftScreenModel *this, const ItemInstance *a2, int a3)
{
  const ItemInstance *v3; // r6@1
  MinecraftScreenModel *v4; // r4@1
  signed int result; // r0@1
  int v6; // r5@1
  bool v7; // zf@1
  int v8; // r0@8
  int v9; // [sp+0h] [bp-58h]@6
  int v10; // [sp+8h] [bp-50h]@12
  void *v11; // [sp+24h] [bp-34h]@10
  void *ptr; // [sp+34h] [bp-24h]@8

  v3 = a2;
  v4 = this;
  result = *((_BYTE *)a2 + 15);
  v6 = a3;
  v7 = result == 0;
  if ( *((_BYTE *)a2 + 15) )
  {
    result = *(_DWORD *)a2;
    v7 = *(_DWORD *)a2 == 0;
  }
  if ( !v7 )
    result = ItemInstance::isNull(a2);
    if ( !result )
    {
      result = *((_BYTE *)v3 + 14);
      if ( *((_BYTE *)v3 + 14) )
      {
        ItemInstance::ItemInstance((ItemInstance *)&v9, (int)v3);
        if ( v6 <= -1 )
          LOBYTE(v6) = *((_BYTE *)v3 + 14);
        ItemInstance::set((ItemInstance *)&v9, (unsigned __int8)v6);
        v8 = ClientInstance::getLocalPlayer(*((ClientInstance **)v4 + 4));
        (*(void (**)(void))(*(_DWORD *)v8 + 664))();
        if ( ptr )
          operator delete(ptr);
        if ( v11 )
          operator delete(v11);
        result = v10;
        if ( v10 )
          result = (*(int (**)(void))(*(_DWORD *)v10 + 4))();
      }
    }
  return result;
}


void __fastcall MinecraftScreenModel::getRealmsInviteCount(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  Options *v4; // r0@1
  int v5; // r2@2
  _DWORD *v6; // r4@2
  int *i; // r0@3
  int *v8; // r1@5
  int v9; // r6@9
  void (__fastcall *v10)(char *, int, signed int); // r3@9
  int v11; // r4@13
  int *v12; // r5@13
  int v13; // r4@15
  void (__fastcall *v14)(char *, int, signed int); // r3@15
  unsigned int *v15; // r2@19
  signed int v16; // r1@21
  int *v17; // r0@27
  _DWORD *v18; // r7@32
  unsigned int *v19; // r2@34
  signed int v20; // r1@36
  _DWORD *v21; // r6@42
  Social::XboxProfile *v22; // r0@42
  int v23; // r1@42
  void *v24; // r0@42
  bool v25; // zf@44
  char v26; // [sp+4h] [bp-74h]@16
  void (*v27)(void); // [sp+Ch] [bp-6Ch]@15
  int v28; // [sp+10h] [bp-68h]@16
  char v29; // [sp+14h] [bp-64h]@10
  void (*v30)(void); // [sp+1Ch] [bp-5Ch]@9
  int v31; // [sp+20h] [bp-58h]@10
  int *v32; // [sp+24h] [bp-54h]@2
  int *v33; // [sp+28h] [bp-50h]@2
  int v34; // [sp+2Ch] [bp-4Ch]@2
  char v35; // [sp+30h] [bp-48h]@2
  void *ptr; // [sp+34h] [bp-44h]@44
  int v37; // [sp+38h] [bp-40h]@44
  _DWORD *v38; // [sp+3Ch] [bp-3Ch]@2
  int v39; // [sp+40h] [bp-38h]@44
  int v40; // [sp+4Ch] [bp-2Ch]@45

  v2 = a1;
  v3 = a2;
  v4 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(a1 + 16));
  if ( Options::getRealmsInviteShowFriendsOption(v4) == 1 )
  {
    MinecraftScreenModel::getXboxLiveFriends((MinecraftScreenModel *)&v35, v2);
    v5 = 0;
    v32 = 0;
    v33 = 0;
    v6 = v38;
    v34 = 0;
    if ( v38 )
    {
      for ( i = 0; ; i = v33 )
      {
        v8 = v6 + 2;
        if ( i == (int *)v5 )
        {
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
            (unsigned __int64 *)&v32,
            v8);
        }
        else
          sub_DA73B4(i, v8);
          ++v33;
        v6 = (_DWORD *)*v6;
        if ( !v6 )
          break;
        v5 = v34;
      }
    }
    v9 = MinecraftGame::getRealms(*(MinecraftGame **)(v2 + 12));
    v30 = 0;
    v10 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
    if ( v10 )
      v10(&v29, v3, 2);
      v31 = *(_DWORD *)(v3 + 12);
      v30 = *(void (**)(void))(v3 + 8);
    RealmsAPI::getInviteCountFriendsOnly(v9, (int)&v29, (__int64 *)&v32);
    if ( v30 )
      v30();
    v11 = (int)v33;
    v12 = v32;
    if ( v32 != v33 )
      do
        v17 = (int *)(*v12 - 12);
        if ( v17 != &dword_28898C0 )
          v15 = (unsigned int *)(*v12 - 4);
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
            j_j_j_j_j__ZdlPv_9(v17);
        ++v12;
      while ( v12 != (int *)v11 );
      v12 = v32;
    if ( v12 )
      operator delete(v12);
    v18 = v38;
    while ( v18 )
      v21 = v18;
      v22 = (Social::XboxProfile *)(v18 + 2);
      v18 = (_DWORD *)*v18;
      Social::XboxProfile::~XboxProfile(v22);
      v23 = v21[1];
      v24 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
        v19 = (unsigned int *)(v23 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j_j__ZdlPv_9(v24);
      operator delete(v21);
    _aeabi_memclr4(ptr, 4 * v37);
    v38 = 0;
    v39 = 0;
    v25 = ptr == 0;
    if ( ptr )
      v25 = &v40 == ptr;
    if ( !v25 )
      operator delete(ptr);
  }
  else
    v13 = MinecraftGame::getRealms(*(MinecraftGame **)(v2 + 12));
    v27 = 0;
    v14 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
    if ( v14 )
      v14(&v26, v3, 2);
      v28 = *(_DWORD *)(v3 + 12);
      v27 = *(void (**)(void))(v3 + 8);
    RealmsAPI::getInviteCount(v13, (int)&v26);
    if ( v27 )
      v27();
}


void __fastcall MinecraftScreenModel::navigateToVRInformationScreen(MinecraftScreenModel *this)
{
  MinecraftScreenModel::navigateToVRInformationScreen(this);
}


int __fastcall MinecraftScreenModel::_isPremium(MinecraftScreenModel *this, const PackManifest *a2)
{
  PackManifest *v2; // r4@1
  MinecraftScreenModel *v3; // r5@1
  int result; // r0@2
  int v5; // r5@3
  char *v6; // r0@3
  char *v7; // r4@3
  int v8; // r1@3
  int v9; // r2@3
  int v10; // r3@3
  Entitlement *v11; // r4@3
  void *v12; // r0@3
  void *v13; // r0@4
  void *v14; // r0@5
  unsigned int *v15; // r2@7
  signed int v16; // r1@9
  unsigned int *v17; // r2@11
  signed int v18; // r1@13
  unsigned int *v19; // r2@15
  signed int v20; // r1@17
  int v21; // [sp+0h] [bp-48h]@3
  int v22; // [sp+4h] [bp-44h]@3
  int v23; // [sp+8h] [bp-40h]@3
  int v24; // [sp+Ch] [bp-3Ch]@3
  int v25; // [sp+10h] [bp-38h]@3
  int v26; // [sp+18h] [bp-30h]@5
  int v27; // [sp+1Ch] [bp-2Ch]@4
  int v28; // [sp+20h] [bp-28h]@3
  char v29; // [sp+28h] [bp-20h]@3

  v2 = a2;
  v3 = this;
  if ( PackManifest::getPackCategory(a2) == 2 )
  {
    result = 1;
  }
  else
    v5 = MinecraftGame::getEntitlementManager(*((MinecraftGame **)v3 + 3));
    v6 = PackManifest::getIdentity(v2);
    v7 = v6;
    v8 = *((_DWORD *)v6 + 1);
    v9 = *((_DWORD *)v6 + 2);
    v10 = *((_DWORD *)v6 + 3);
    v21 = *(_DWORD *)v6;
    v22 = v8;
    v23 = v9;
    v24 = v10;
    SemVersion::SemVersion((int)&v25, (int)(v6 + 16));
    v29 = v7[40];
    v11 = (Entitlement *)EntitlementManager::getEntitlement(v5, (int)&v21);
    v12 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
    {
      v15 = (unsigned int *)(v28 - 4);
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
        j_j_j_j_j__ZdlPv_9(v12);
    }
    v13 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v27 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v26 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
    result = Entitlement::isValid(v11);
  return result;
}


LevelData *__fastcall MinecraftScreenModel::_processWorldTemplate(int a1, int *a2, int *a3, int a4)
{
  int v4; // r7@1
  int v5; // r10@1
  int *v6; // r8@1
  int *v7; // r11@1
  Minecraft *v8; // r0@1
  int v9; // r0@1
  Minecraft *v10; // r0@1
  int v11; // r5@1
  void (__fastcall *v12)(int *, int, int *, char *); // r6@1
  char *v13; // r4@1
  int v14; // r4@3
  void *v15; // r0@3
  int v16; // r4@7
  signed int v17; // r5@7
  void *v18; // r0@7
  int v19; // r4@9
  void *v20; // r0@9
  int v21; // r9@11
  unsigned int *v22; // r0@12
  unsigned int v23; // r1@14
  void *v24; // r6@17
  int v25; // r5@17
  int v26; // r2@17
  void (__fastcall *v27)(char *, int, signed int); // r3@17
  _DWORD *v28; // r0@19
  int v29; // r1@19
  int v30; // r4@25
  unsigned int *v31; // r1@26
  unsigned int v32; // r0@28
  unsigned int *v33; // r5@32
  unsigned int v34; // r0@34
  unsigned int *v35; // r2@36
  signed int v36; // r1@38
  void *v37; // r0@43
  void *v38; // r0@44
  int v39; // r4@47
  unsigned int *v40; // r1@48
  unsigned int v41; // r0@50
  unsigned int *v42; // r5@54
  unsigned int v43; // r0@56
  unsigned int *v45; // r2@66
  signed int v46; // r1@68
  unsigned int *v47; // r2@70
  signed int v48; // r1@72
  unsigned int *v49; // r2@74
  signed int v50; // r1@76
  unsigned int *v51; // r2@82
  signed int v52; // r1@84
  char v53; // [sp+8h] [bp-208h]@18
  void (*v54)(void); // [sp+10h] [bp-200h]@17
  int v55; // [sp+14h] [bp-1FCh]@18
  _DWORD *v56; // [sp+1Ch] [bp-1F4h]@19
  void (*v57)(void); // [sp+24h] [bp-1ECh]@19
  int (__fastcall *v58)(int *); // [sp+28h] [bp-1E8h]@19
  int v59; // [sp+2Ch] [bp-1E4h]@11
  int v60; // [sp+30h] [bp-1E0h]@11
  int v61; // [sp+34h] [bp-1DCh]@11
  int v62; // [sp+38h] [bp-1D8h]@11
  int v63; // [sp+3Ch] [bp-1D4h]@11
  void *v64; // [sp+40h] [bp-1D0h]@17
  void (*v65)(void); // [sp+48h] [bp-1C8h]@17
  signed int (__fastcall *v66)(int); // [sp+4Ch] [bp-1C4h]@17
  int v67; // [sp+54h] [bp-1BCh]@9
  int v68; // [sp+5Ch] [bp-1B4h]@7
  int v69; // [sp+60h] [bp-1B0h]@7
  char v70; // [sp+64h] [bp-1ACh]@3
  int v71; // [sp+68h] [bp-1A8h]@3
  int v72; // [sp+6Ch] [bp-1A4h]@1
  int v73; // [sp+70h] [bp-1A0h]@1
  int v74; // [sp+74h] [bp-19Ch]@11
  char v75; // [sp+78h] [bp-198h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(a1 + 16));
  v9 = Minecraft::getLevelSource(v8);
  (*(void (__fastcall **)(char *))(*(_DWORD *)v9 + 20))(&v75);
  v10 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v4 + 16));
  v11 = Minecraft::getLevelSource(v10);
  v12 = *(void (__fastcall **)(int *, int, int *, char *))(*(_DWORD *)v11 + 28);
  v13 = LevelData::getPremiumTemplatePackId((LevelData *)&v75);
  MinecraftGame::getKeyProvider(*(MinecraftGame **)(v4 + 12));
  v12(&v72, v11, v7, v13);
  std::__shared_ptr<LevelStorage,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<LevelStorage,std::default_delete<LevelStorage>>(
    (int)&v73,
    &v72);
  if ( v72 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v72 + 4))(v72);
  v72 = 0;
  (*(void (__fastcall **)(char *))(*(_DWORD *)v73 + 60))(&v70);
  v14 = *(_DWORD *)&v70;
  v15 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
  {
    v35 = (unsigned int *)(v71 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
    }
    else
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  }
  if ( v14 )
    if ( !*(_DWORD *)(v5 + 8) )
      sub_DA7654();
    (*(void (__fastcall **)(int, _DWORD))(v5 + 12))(v5, 0);
  else
    (*(void (__fastcall **)(int *))(*(_DWORD *)v73 + 68))(&v69);
    v16 = v69;
    sub_DA7364((void **)&v68, "PlayerGameMode");
    v17 = CompoundTag::contains(v16, (const void **)&v68);
    v18 = (void *)(v68 - 12);
    if ( (int *)(v68 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v68 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
      }
      else
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j_j__ZdlPv_9(v18);
    if ( v17 == 1 )
      v19 = v69;
      sub_DA7364((void **)&v67, "PlayerGameMode");
      CompoundTag::remove(v19, (const void **)&v67);
      v20 = (void *)(v67 - 12);
      if ( (int *)(v67 - 12) != &dword_28898C0 )
        v51 = (unsigned int *)(v67 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
        }
        else
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j_j__ZdlPv_9(v20);
      LevelStorage::saveData(v73, (int)&LevelStorage::LOCAL_PLAYER_TAG, v69);
    v59 = v4;
    v21 = TaskGroup::DISK;
    sub_DA73B4(&v60, v7);
    sub_DA73B4(&v61, v6);
    v62 = v73;
    v63 = v74;
    if ( v74 )
      v22 = (unsigned int *)(v74 + 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 + 1, v22) );
        ++*v22;
    v65 = 0;
    v24 = operator new(0x14u);
    *(_DWORD *)v24 = v59;
    sub_DA73B4((int *)v24 + 1, &v60);
    sub_DA73B4((int *)v24 + 2, &v61);
    v25 = 0;
    *((_DWORD *)v24 + 3) = v62;
    v26 = v63;
    v63 = 0;
    *((_DWORD *)v24 + 4) = v26;
    v62 = 0;
    v64 = v24;
    v65 = (void (*)(void))sub_CF11EC;
    v66 = sub_CEFF34;
    v54 = 0;
    v27 = *(void (__fastcall **)(char *, int, signed int))(v5 + 8);
    if ( v27 )
      v27(&v53, v5, 2);
      v55 = *(_DWORD *)(v5 + 12);
      v25 = *(_DWORD *)(v5 + 8);
      v54 = *(void (**)(void))(v5 + 8);
    v57 = 0;
    v28 = operator new(0x10u);
    *(_QWORD *)v28 = *(_QWORD *)&v53;
    v29 = v55;
    v28[2] = v25;
    v28[3] = v29;
    v56 = v28;
    v57 = (void (*)(void))sub_CF18B6;
    v58 = sub_CF18A4;
    TaskGroup::queue(v21, (int)&v64, (int)&v56, 1u, 0xFFFFFFFF);
    if ( v57 )
      v57();
    if ( v54 )
      v54();
    if ( v65 )
      v65();
    v30 = v63;
    if ( v63 )
      v31 = (unsigned int *)(v63 + 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 == 1 )
        v33 = (unsigned int *)(v30 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
          v34 = (*v33)--;
        if ( v34 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
    v37 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v61 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j_j__ZdlPv_9(v37);
    v38 = (void *)(v60 - 12);
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v60 - 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j_j__ZdlPv_9(v38);
    if ( v69 )
      (*(void (**)(void))(*(_DWORD *)v69 + 4))();
  v39 = v74;
  if ( v74 )
    v40 = (unsigned int *)(v74 + 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 == 1 )
      v42 = (unsigned int *)(v39 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 8))(v39);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 12))(v39);
  return LevelData::~LevelData((LevelData *)&v75);
}


void __fastcall MinecraftScreenModel::openRealmsWorld(int a1, __int64 *a2, int a3, int a4)
{
  MinecraftScreenModel::openRealmsWorld(a1, a2, a3, a4);
}


void __fastcall MinecraftScreenModel::navigateToAchievementScreen(MinecraftScreenModel *this)
{
  MinecraftScreenModel::navigateToAchievementScreen(this);
}


int __fastcall MinecraftScreenModel::canSignInToXBL(MinecraftScreenModel *this)
{
  int v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  Social::User *v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  ClientInstance::getUser((ClientInstance *)&v8, *((_DWORD *)this + 4));
  v1 = Social::User::canSignInToXBL(v8);
  v2 = v9;
  if ( v9 )
  {
    v3 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  return v1;
}


void __fastcall MinecraftScreenModel::fireEventScreenChanged(int a1, int *a2)
{
  int v2; // r6@1
  int *v3; // r4@1
  int v4; // r5@1
  double v5; // r0@4
  unsigned int v6; // r0@4
  int v7; // r6@6
  int *v8; // r4@6
  int v9; // r7@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int v14; // r6@25
  int v15; // r1@25
  void *v16; // r0@25
  int v17; // r1@26
  void *v18; // r0@26
  void *v19; // r0@31
  unsigned int *v20; // r2@34
  signed int v21; // r1@36
  void *ptr; // [sp+4h] [bp-4Ch]@7
  unsigned int v23; // [sp+8h] [bp-48h]@4
  int v24; // [sp+Ch] [bp-44h]@4
  int v25; // [sp+10h] [bp-40h]@4
  signed int v26; // [sp+14h] [bp-3Ch]@4
  int v27; // [sp+18h] [bp-38h]@4
  int v28; // [sp+1Ch] [bp-34h]@29
  int v29; // [sp+20h] [bp-30h]@2
  int v30; // [sp+24h] [bp-2Ch]@1

  v2 = a1;
  v3 = a2;
  v4 = MinecraftGame::getEventing(*(MinecraftGame **)(a1 + 12));
  v30 = ClientInstance::getUserId(*(ClientInstance **)(v2 + 16));
  if ( *(_DWORD *)(*v3 - 12) )
    sub_DA73B4(&v29, v3);
  else
    MinecraftGame::getScreenName((MinecraftGame *)&v29, *(_DWORD *)(v2 + 12));
  v24 = 0;
  v25 = 0;
  v26 = 1065353216;
  v27 = 0;
  HIDWORD(v5) = 10;
  LODWORD(v5) = &v26;
  v6 = sub_DA7744(v5);
  v23 = v6;
  if ( v6 == 1 )
  {
    v8 = &v28;
    v28 = 0;
  }
    if ( v6 >= 0x40000000 )
      sub_DA7414();
    v7 = 4 * v6;
    v8 = (int *)operator new(4 * v6);
    _aeabi_memclr4(v8, v7);
  ptr = v8;
  MinecraftEventing::fireEventScreenChanged(v4, (unsigned int *)&v30, (const char **)&v29, (int)&ptr);
  v9 = v24;
  while ( v9 )
    v14 = v9;
    v15 = *(_DWORD *)(v9 + 8);
    v9 = *(_DWORD *)v9;
    v16 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v15 - 4);
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
        j_j_j_j_j__ZdlPv_9(v16);
    }
    v17 = *(_DWORD *)(v14 + 4);
    v18 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v17 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9(v18);
    operator delete((void *)v14);
  _aeabi_memclr4(ptr, 4 * v23);
  if ( ptr && &v28 != ptr )
    operator delete(ptr);
  v19 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9(v19);
}


void __fastcall MinecraftScreenModel::navigateToPlatformStoreConnectConfirmationScreen(int a1, int a2)
{
  MinecraftScreenModel::navigateToPlatformStoreConnectConfirmationScreen(a1, a2);
}


int __fastcall MinecraftScreenModel::getCustomSkinIndex(MinecraftScreenModel *this)
{
  SkinRepositoryClientInterface *v1; // r0@1

  v1 = (SkinRepositoryClientInterface *)ClientInstance::getSkinRepositoryClientInterface(*((ClientInstance **)this + 4));
  return j_j_j__ZNK29SkinRepositoryClientInterface22getLastCustomSkinIndexEv(v1);
}


void __fastcall MinecraftScreenModel::navigateToVRInformationScreen(MinecraftScreenModel *this)
{
  __int64 v1; // kr00_8@1
  int v2; // r4@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r5@8
  unsigned int v6; // r0@10
  int v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@1

  v1 = *(_QWORD *)((char *)this + 20);
  SceneFactory::createVRInformationScreen((SceneFactory *)&v7, SHIDWORD(v1));
  SceneStack::pushScreen(v1, (int)&v7, 0);
  v2 = v8;
  if ( v8 )
  {
    v3 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
}


int __fastcall MinecraftScreenModel::getLevelBasePath(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel *v2; // r4@1
  Minecraft *v3; // r0@1
  int v4; // r0@1

  v2 = this;
  v3 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(a2 + 16));
  v4 = Minecraft::getLevelSource(v3);
  return (*(int (__fastcall **)(MinecraftScreenModel *))(*(_DWORD *)v4 + 64))(v2);
}


void __fastcall MinecraftScreenModel::~MinecraftScreenModel(MinecraftScreenModel *this)
{
  MinecraftScreenModel::~MinecraftScreenModel(this);
}


int __fastcall MinecraftScreenModel::showSignInButton(MinecraftScreenModel *this)
{
  Social::XboxLiveUserManager *v1; // r0@1
  void *v2; // r0@3
  int v3; // r4@4
  int v4; // r5@7
  unsigned int *v5; // r1@8
  unsigned int v6; // r0@10
  unsigned int *v7; // r6@14
  unsigned int v8; // r0@16
  Social::User *v10; // [sp+0h] [bp-18h]@1
  int v11; // [sp+4h] [bp-14h]@7

  ClientInstance::getUser((ClientInstance *)&v10, *((_DWORD *)this + 4));
  v1 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v10);
  if ( Social::XboxLiveUserManager::showSignInButton(v1) == 1 )
  {
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v2 = &ServiceLocator<AppPlatform>::mDefaultService;
    v3 = (*(int (**)(void))(**(_DWORD **)v2 + 640))() ^ 1;
  }
  else
    v3 = 0;
  v4 = v11;
  if ( v11 )
    v5 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return v3;
}


unsigned __int64 *__fastcall MinecraftScreenModel::invitePlayers(int a1, int a2)
{
  int v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)MinecraftGame::getMultiplayerServiceManager(*(MinecraftGame **)(a1 + 12));
  return j_j_j__ZN6Social25MultiplayerServiceManager13invitePlayersERKSt6vectorISsSaISsEENS_28MultiplayerServiceIdentifierE(
           v3,
           v2,
           0);
}


int __fastcall MinecraftScreenModel::getPrimaryLocalPlayerUUID(MinecraftScreenModel *this, int a2)
{
  MinecraftScreenModel *v2; // r4@1
  ClientInstance *v3; // r0@1
  int v4; // r0@1
  int v5; // r12@2
  int v6; // r2@2
  int v7; // r3@2
  int result; // r0@2

  v2 = this;
  v3 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(a2 + 12));
  v4 = ClientInstance::getLocalPlayer(v3);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 4564);
    v6 = *(_DWORD *)(v4 + 4560);
    v7 = *(_DWORD *)(v4 + 4568);
    result = *(_DWORD *)(v4 + 4572);
    *(_DWORD *)v2 = v6;
    *((_DWORD *)v2 + 1) = v5;
    *((_DWORD *)v2 + 2) = v7;
    *((_DWORD *)v2 + 3) = result;
  }
  else
    result = 0;
    *(_DWORD *)v2 = 0;
    *((_DWORD *)v2 + 1) = 0;
    *((_DWORD *)v2 + 2) = 0;
    *((_DWORD *)v2 + 3) = 0;
  return result;
}


void __fastcall MinecraftScreenModel::closeRealmsWorld(int a1, __int64 *a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  __int64 *v6; // r7@1
  int v7; // r4@1
  void (__fastcall *v8)(char *, int, signed int); // r3@1
  void (__fastcall *v9)(int *, int, signed int); // r3@3
  int v10; // [sp+0h] [bp-40h]@4
  void (*v11)(void); // [sp+8h] [bp-38h]@3
  int v12; // [sp+Ch] [bp-34h]@4
  char v13; // [sp+10h] [bp-30h]@2
  void (*v14)(void); // [sp+18h] [bp-28h]@1
  int v15; // [sp+1Ch] [bp-24h]@2
  __int64 v16; // [sp+20h] [bp-20h]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = MinecraftGame::getRealms(*(MinecraftGame **)(a1 + 12));
  v16 = *v6;
  v14 = 0;
  v8 = *(void (__fastcall **)(char *, int, signed int))(v5 + 8);
  if ( v8 )
  {
    v8(&v13, v5, 2);
    v15 = *(_DWORD *)(v5 + 12);
    v14 = *(void (**)(void))(v5 + 8);
  }
  v11 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v4 + 8);
  if ( v9 )
    v9(&v10, v4, 2);
    v12 = *(_DWORD *)(v4 + 12);
    v11 = *(void (**)(void))(v4 + 8);
  RealmsAPI::closeWorld(v7, &v16, (int)&v13, (int)&v10);
  if ( v11 )
    v11();
  if ( v14 )
    v14();
}


void __fastcall MinecraftScreenModel::removeFromRealmsBlocklist(int a1, __int64 *a2, const void **a3, int a4)
{
  MinecraftScreenModel::removeFromRealmsBlocklist(a1, a2, a3, a4);
}


void __fastcall MinecraftScreenModel::getVersionString(MinecraftScreenModel *this)
{
  MinecraftScreenModel *v1; // r4@1
  const void **v2; // r0@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  Common::getGameVersionStringNet((Common *)&v6);
  v2 = sub_DA7948((const void **)&v6, 0, (unsigned int)"v", (_BYTE *)1);
  *(_DWORD *)v1 = *v2;
  *v2 = &unk_28898CC;
  v3 = (void *)(v6 - 12);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
}
