

int __fastcall ClientInputCallbacks::handleToggleGameModeButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  int result; // r0@1
  int v4; // r0@2
  signed int v5; // r6@2
  int v6; // r0@3
  int v7; // r0@5
  void **v8; // [sp+4h] [bp-24h]@5
  signed int v9; // [sp+8h] [bp-20h]@5
  signed int v10; // [sp+Ch] [bp-1Ch]@5
  char v11; // [sp+10h] [bp-18h]@5
  int v12; // [sp+14h] [bp-14h]@5

  v2 = this;
  result = ClientInstance::getLocalPlayer(this);
  if ( result )
  {
    v4 = ClientInstance::getLocalPlayer(v2);
    v5 = 1;
    if ( !(*(int (**)(void))(*(_DWORD *)v4 + 656))() )
    {
      v6 = ClientInstance::getLocalPlayer(v2);
      v5 = 2;
      if ( (*(int (**)(void))(*(_DWORD *)v6 + 652))() )
        v5 = 0;
    }
    ClientInstance::getLocalPlayer(v2);
    v9 = 2;
    v10 = 1;
    v11 = 0;
    v8 = &off_26DA760;
    v12 = v5;
    v7 = ClientInstance::getPacketSender(v2);
    result = (*(int (**)(void))(*(_DWORD *)v7 + 8))();
  }
  return result;
}


void __fastcall ClientInputCallbacks::handleInventoryButtonPress(ClientInstance *a1, int a2)
{
  ClientInputCallbacks::handleInventoryButtonPress(a1, a2);
}


int __fastcall ClientInputCallbacks::handleDropAllButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  Player *v3; // r0@1
  int v4; // r5@1
  int v5; // r5@2
  int v6; // r0@2
  char v8; // [sp+Ch] [bp-2Ch]@2
  char v9; // [sp+18h] [bp-20h]@1
  int v10; // [sp+1Ch] [bp-1Ch]@1

  v2 = this;
  v3 = (Player *)ClientInstance::getLocalPlayer(this);
  v4 = Player::getSupplies(v3);
  PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v9, v4);
  if ( PlayerInventoryProxy::dropSlot(v4, v10, 0, 1, v9, 0) == 1 )
  {
    v5 = ClientInstance::getLevel(v2);
    v6 = ClientInstance::getLocalPlayer(v2);
    Entity::getAttachPos((AABB *)&v8, v6, 3, 0);
    Level::playSound(v5, 76, (int)&v8);
  }
  return ClientInstance::checkForPiracy(v2);
}


PlayerCommandOrigin *__fastcall ClientInputCallbacks::handleTimeStepForwardButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  Player *v3; // r6@1
  PlayerCommandOrigin *v4; // r5@1
  Minecraft *v5; // r0@1
  int v6; // r4@1
  void *v7; // r0@1
  PlayerCommandOrigin *result; // r0@2
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  int v11; // [sp+8h] [bp-28h]@1
  int v12; // [sp+10h] [bp-20h]@1
  PlayerCommandOrigin *v13; // [sp+14h] [bp-1Ch]@1

  v2 = this;
  v3 = (Player *)ClientInstance::getLocalPlayer(this);
  v4 = (PlayerCommandOrigin *)operator new(0x18u);
  PlayerCommandOrigin::PlayerCommandOrigin(v4, v3);
  v5 = (Minecraft *)ClientInstance::getServerData(v2);
  v6 = Minecraft::getCommands(v5);
  v13 = v4;
  sub_119C884((void **)&v12, "/time add 1000");
  v11 = MinecraftCommands::requestCommandExecution(v6, (int *)&v13, &v12, 3, 0);
  MCRESULT::isSuccess((MCRESULT *)&v11);
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v12 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  result = v13;
  if ( v13 )
    result = (PlayerCommandOrigin *)(*(int (**)(void))(*(_DWORD *)v13 + 4))();
  return result;
}


int __fastcall ClientInputCallbacks::handleCommandEvent(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1
  int result; // r0@1
  _DWORD *v7; // [sp+0h] [bp-20h]@1
  __int64 v8; // [sp+8h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  v4 = operator new(4u);
  LODWORD(v5) = sub_10F5192;
  *v4 = v3;
  HIDWORD(v5) = sub_10F517C;
  v7 = v4;
  v8 = v5;
  result = ClientInstance::forEachScreen(v2, (int)&v7, 1);
  if ( (_DWORD)v8 )
    result = ((int (__cdecl *)(_DWORD **))v8)(&v7);
  return result;
}


int __fastcall ClientInputCallbacks::handlePointerPressedButtonRelease(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  void *v3; // r0@2
  GuiData *v4; // r0@7
  int result; // r0@7
  ClientInputHandler *v6; // r0@8
  void *v7; // [sp+0h] [bp-20h]@4
  void (*v8)(void); // [sp+8h] [bp-18h]@4
  int (__fastcall *v9)(int, int); // [sp+Ch] [bp-14h]@4

  v2 = this;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v3 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v3 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (**)(void))(**(_DWORD **)v3 + 84))();
  v7 = operator new(1u);
  v8 = (void (*)(void))sub_10F4EEC;
  v9 = sub_10F4EE2;
  ClientInstance::forEachAlwaysAcceptInputScreenWithTop((int)v2, (int)&v7);
  if ( v8 )
    v8();
  if ( !ClientInstance::getLocalPlayer(v2)
    || (v4 = (GuiData *)ClientInstance::getGuiData(v2), (result = GuiData::handleClick(v4)) == 0) )
  {
    v6 = (ClientInputHandler *)ClientInstance::getInput(v2);
    ClientInputHandler::updateInteractActiveState(v6, 0);
    result = ClientInstance::getHoloInput(v2);
    *(_BYTE *)(result + 721) = 0;
  }
  return result;
}


void __fastcall ClientInputCallbacks::handleChangeUserRequest(ClientInputCallbacks *this, MinecraftGame *a2, int a3, bool a4)
{
  MinecraftGame *v4; // r6@1
  int v5; // r0@1
  int v6; // r7@2
  void *v7; // r0@2
  int v8; // r0@4
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  int v11; // [sp+4h] [bp-24h]@2

  v4 = this;
  v5 = MinecraftGame::getUserManager(this);
  if ( (*(int (**)(void))(*(_DWORD *)v5 + 72))() == 1 )
  {
    MinecraftGame::getScreenName((MinecraftGame *)&v11, (int)v4);
    v6 = sub_119C9E8((const void **)&v11, "start_screen");
    v7 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v11 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v7);
    }
    if ( !v6 )
      v8 = MinecraftGame::getUserManager(v4);
      (*(void (**)(void))(*(_DWORD *)v8 + 92))();
  }
}


const char *__fastcall ClientInputCallbacks::handleUIScalingRuleChange(ClientInputCallbacks *this, ClientInstance *a2)
{
  int *v2; // r0@2
  int v3; // r4@4
  AppPlatform **v4; // r0@5
  int v5; // r0@7
  AppPlatform **v6; // r0@8
  int v7; // r0@10

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = (int *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = (int *)&ServiceLocator<AppPlatform>::mDefaultService;
  v3 = *v2;
    v4 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v4 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v5 = AppPlatform::getUIScalingRules(*v4);
  AppPlatform::setUIScalingRules(v3, (v5 + 1) % 4);
    v6 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v6 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v7 = AppPlatform::getUIScalingRules(*v6);
  return j_j_j__ZN11AppPlatform23StringizeUIScalingRulesE14UIScalingRules(v7);
}


void __fastcall ClientInputCallbacks::handleToggleChatTextToSpeechButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  int v3; // r0@2
  Option *v4; // r5@2
  int v5; // r5@2
  void *v6; // r0@3
  MinecraftEventing *v7; // r0@5
  GuiData *v8; // r0@5

  v2 = this;
  if ( ClientInstance::isPrimaryClient(this) == 1 )
  {
    v3 = ClientInstance::getOptions(v2);
    v4 = (Option *)Options::get(v3, 131);
    Option::toggle(v4);
    v5 = Option::getBool(v4);
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v6 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v6 = &ServiceLocator<AppPlatform>::mDefaultService;
    (*(void (**)(void))(**(_DWORD **)v6 + 604))();
    v7 = (MinecraftEventing *)ClientInstance::getEventing(v2);
    MinecraftEventing::fireTextToSpeechToggled(v7, v5);
    v8 = (GuiData *)ClientInstance::getGuiData(v2);
    j_j_j__ZN7GuiData22setTextToSpeechEnabledEb(v8, v5);
  }
}


void __fastcall ClientInputCallbacks::handleBuildActionButtonRelease(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInputCallbacks::handleBuildActionButtonRelease(this, a2);
}


char *__fastcall ClientInputCallbacks::handleTextChar(ClientInstance *a1, const char **a2, char a3)
{
  char v3; // r5@1
  const char **v4; // r6@1
  ClientInstance *v5; // r7@1
  int v6; // r0@1
  int v7; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = ClientInstance::getScreen(a1);
  (*(void (**)(void))(*(_DWORD *)v6 + 116))();
  v7 = ClientInstance::getClientSceneStack(v5);
  return j_j_j__ZN10SceneStack14handleTextCharERKSsb(v7, v4, v3);
}


void __fastcall ClientInputCallbacks::handleIncreaseRenderDistanceButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  int v2; // r0@1
  Option *v3; // r0@1
  Option *v4; // r5@1
  char *v5; // r0@1
  char *v6; // r6@1
  _DWORD *v7; // r4@1
  int v8; // r1@1 OVERLAPPED
  int v9; // r2@1 OVERLAPPED
  signed int v10; // r0@1
  _DWORD *v11; // r0@3
  signed int v12; // r6@4
  int v13; // r0@6
  int v14; // r2@6
  int v15; // r1@7

  v2 = ClientInstance::getOptions(this);
  v3 = (Option *)Options::get(v2, 19);
  v4 = v3;
  v5 = Option::getValues(v3);
  v6 = v5;
  v7 = 0;
  *(_QWORD *)&v8 = *(_QWORD *)v5;
  v10 = v9 - v8;
  if ( (v9 - v8) >> 2 )
  {
    if ( (unsigned int)(v10 >> 2) >= 0x40000000 )
      sub_119C874();
    v11 = operator new(v10);
    *(_QWORD *)&v8 = *(_QWORD *)v6;
    v7 = v11;
  }
  v12 = v9 - v8;
  if ( v9 != v8 )
    _aeabi_memmove4(v7, v8);
  v13 = Option::getInt(v4);
  v14 = 0;
  if ( v12 >> 2 )
    while ( 1 )
    {
      v15 = v7[v14];
      if ( v15 > v13 )
        break;
      if ( ++v14 >= (unsigned int)(v12 >> 2) )
        goto LABEL_9;
    }
    Option::set(v4, v15);
  else
LABEL_9:
    if ( !v7 )
      return;
  j_j_j__ZdlPv_4(v7);
}


int __fastcall ClientInputCallbacks::handleHideSneakButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  int result; // r0@1

  result = ClientInstance::getInput(this);
  *(_BYTE *)(result + 30) = 0;
  return result;
}


void __fastcall ClientInputCallbacks::handleDecreaseRenderDistanceButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  int v2; // r0@1
  Option *v3; // r0@1
  Option *v4; // r5@1
  char *v5; // r0@1
  char *v6; // r6@1
  char *v7; // r4@1
  int v8; // r1@1 OVERLAPPED
  int v9; // r2@1 OVERLAPPED
  signed int v10; // r0@1
  char *v11; // r0@3
  signed int v12; // r6@4
  int v13; // r0@6
  signed int v14; // r2@6
  int v15; // r1@8
  int v16; // r1@8

  v2 = ClientInstance::getOptions(this);
  v3 = (Option *)Options::get(v2, 19);
  v4 = v3;
  v5 = Option::getValues(v3);
  v6 = v5;
  v7 = 0;
  *(_QWORD *)&v8 = *(_QWORD *)v5;
  v10 = v9 - v8;
  if ( (v9 - v8) >> 2 )
  {
    if ( (unsigned int)(v10 >> 2) >= 0x40000000 )
      sub_119C874();
    v11 = (char *)operator new(v10);
    *(_QWORD *)&v8 = *(_QWORD *)v6;
    v7 = v11;
  }
  v12 = v9 - v8;
  if ( v9 != v8 )
    _aeabi_memmove4(v7, v8);
  v13 = Option::getInt(v4);
  v14 = v12 >> 2;
  while ( v14 )
    v15 = (int)&v7[4 * v14--];
    v16 = *(_DWORD *)(v15 - 4);
    if ( v16 < v13 )
    {
      Option::set(v4, v16);
      goto LABEL_11;
    }
  if ( !v7 )
    return;
LABEL_11:
  j_j_j__ZdlPv_4(v7);
}


int __fastcall ClientInputCallbacks::handleLowMemoryWarningButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  AppPlatform **v2; // r0@2

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  return j_j_j__ZN11AppPlatform14_fireLowMemoryEv(*v2);
}


_DWORD *__fastcall ClientInputCallbacks::handleMenuButtonRelease(int a1, __int16 a2, char a3)
{
  int v3; // r4@1
  _DWORD *v4; // r0@1
  _DWORD *result; // r0@1
  _DWORD *v6; // [sp+4h] [bp-1Ch]@1
  int (*v7)(void); // [sp+Ch] [bp-14h]@1
  int (__fastcall *v8)(_QWORD **, _DWORD *); // [sp+10h] [bp-10h]@1
  char v9; // [sp+15h] [bp-Bh]@1
  __int16 v10; // [sp+16h] [bp-Ah]@1

  v3 = a1;
  v10 = a2;
  v9 = a3;
  v4 = operator new(8u);
  *v4 = &v10;
  v4[1] = &v9;
  v6 = v4;
  v7 = (int (*)(void))sub_10F4F3A;
  v8 = sub_10F4F1A;
  result = ClientInstance::forEachAlwaysAcceptInputScreenWithTop(v3, (int)&v6);
  if ( v7 )
    result = (_DWORD *)v7();
  return result;
}


int __fastcall ClientInputCallbacks::handleHideJumpButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  int result; // r0@1

  result = ClientInstance::getInput(this);
  *(_BYTE *)(result + 29) = 0;
  return result;
}


int __fastcall ClientInputCallbacks::handleTogglePlayerUpdateMobsButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  char v3; // r6@1
  int result; // r0@1

  v2 = this;
  v3 = *(_BYTE *)(ClientInstance::getLocalPlayer(this) + 4672) ^ 1;
  result = ClientInstance::getLocalPlayer(v2);
  *(_BYTE *)(result + 4672) = v3;
  return result;
}


int __fastcall ClientInputCallbacks::handlePointerLocationWithGazeOverride(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  float v3; // r5@1
  int v4; // r0@1
  int v6; // [sp+8h] [bp-20h]@1
  __int16 v7; // [sp+Ch] [bp-1Ch]@1
  __int16 v8; // [sp+Eh] [bp-1Ah]@1
  char v9; // [sp+10h] [bp-18h]@1
  __int16 v10; // [sp+14h] [bp-14h]@1
  __int16 v11; // [sp+16h] [bp-12h]@1

  v2 = this;
  v3 = *(float *)(ClientInstance::getHoloInput(this) + 712);
  v4 = ClientInstance::getHoloInput(v2);
  ClientInstance::computeScreenCoordsFromScreenNormCoords(v2, v3, *(float *)(v4 + 716), &v11, &v10);
  v6 = ClientInstance::getCurrentInputMode(v2);
  v7 = v11;
  v8 = v10;
  v9 = 0;
  return ClientInputCallbacks::handlePointerLocation(v2, (int)&v6, 0);
}


int __fastcall ClientInputCallbacks::handleDebugTexturesButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  Options *v3; // r0@1
  unsigned int v4; // r5@1
  int v5; // r0@1
  int result; // r0@2

  v2 = this;
  v3 = (Options *)ClientInstance::getOptions(this);
  v4 = Options::getRenderDebug(v3);
  v5 = ClientInstance::getOptions(v2);
  if ( v4 > 3 )
    result = j_j_j__ZN7Options14setRenderDebugE15DebugHudOptions(v5, 0);
  else
    result = j_j_j__ZN7Options14setRenderDebugE15DebugHudOptions(v5, 4);
  return result;
}


_DWORD *__fastcall ClientInputCallbacks::handleHoloInputModeChanged(int a1, int a2)
{
  int v2; // r4@1
  _DWORD *v3; // r0@1
  _DWORD *result; // r0@1
  _DWORD *v5; // [sp+4h] [bp-1Ch]@1
  int (*v6)(void); // [sp+Ch] [bp-14h]@1
  int (__fastcall *v7)(_DWORD ***, _DWORD *); // [sp+10h] [bp-10h]@1
  int v8; // [sp+14h] [bp-Ch]@1

  v2 = a1;
  v8 = a2;
  v3 = operator new(4u);
  *v3 = &v8;
  v5 = v3;
  v6 = (int (*)(void))sub_10F508C;
  v7 = sub_10F507C;
  result = ClientInstance::forEachAlwaysAcceptInputScreenWithTop(v2, (int)&v5);
  if ( v6 )
    result = (_DWORD *)v6();
  return result;
}


int __fastcall ClientInputCallbacks::handleDebugWorkerThreadsButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  Options *v3; // r0@1
  unsigned int v4; // r0@1
  int v5; // r0@3
  int result; // r0@3
  int v7; // r0@4

  v2 = this;
  v3 = (Options *)ClientInstance::getOptions(this);
  v4 = Options::getRenderDebug(v3);
  if ( v4 > 4 || v4 == 2 )
  {
    v7 = ClientInstance::getOptions(v2);
    result = j_j_j__ZN7Options14setRenderDebugE15DebugHudOptions(v7, 0);
  }
  else
    v5 = ClientInstance::getOptions(v2);
    result = j_j_j__ZN7Options14setRenderDebugE15DebugHudOptions(v5, 2);
  return result;
}


int __fastcall ClientInputCallbacks::handlePauseButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  int v3; // r5@2
  int v4; // r0@2
  int v5; // r5@2
  unsigned int *v6; // r1@3
  unsigned int v7; // r0@5
  unsigned int *v8; // r6@9
  unsigned int v9; // r0@11
  int v11; // [sp+0h] [bp-18h]@2
  int v12; // [sp+4h] [bp-14h]@2

  v2 = this;
  if ( ClientInstance::isScreenReplaceable(this) == 1 )
  {
    v3 = ClientInstance::getClientSceneStack(v2);
    v4 = ClientInstance::getSceneFactory(v2);
    SceneFactory::createPauseScreen((SceneFactory *)&v11, v4);
    SceneStack::pushScreen(v3, (int)&v11, 0);
    v5 = v12;
    if ( v12 )
    {
      v6 = (unsigned int *)(v12 + 4);
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
  return ClientInstance::checkForPiracy(v2);
}


int __fastcall ClientInputCallbacks::handleReloadResourcePacks(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  int v3; // r0@1
  int v4; // r6@1
  int v5; // r0@1
  int v6; // r8@1
  MinecraftGame *v7; // r0@1
  mce::TextureGroup *v8; // r0@1
  ResourcePackManager *v9; // r0@1
  ResourcePackManager *v10; // r0@1
  unsigned __int64 *v11; // r5@1
  ResourcePackManager *v12; // r9@1
  const ResourcePackRepository *v13; // r6@1
  ResourcePackStack *v14; // r7@1
  unsigned __int64 *v15; // r8@1
  ResourcePackManager *v16; // r6@3
  const ResourcePackRepository *v17; // r5@3
  ResourcePackStack *v18; // r7@3
  MinecraftGame *v19; // r0@5
  int v20; // r0@5
  ResourcePackStack *v22; // [sp+4h] [bp-24h]@3
  ResourcePackStack *v23; // [sp+8h] [bp-20h]@1

  v2 = this;
  v3 = ClientInstance::getResourcePackManager(this);
  v4 = ResourcePackManager::getStack(v3, 2);
  v5 = ClientInstance::getResourcePackManager(v2);
  v6 = ResourcePackManager::getStack(v5, 0);
  v7 = (MinecraftGame *)ClientInstance::getMinecraftGame(v2);
  v8 = (mce::TextureGroup *)MinecraftGame::getTextures(v7);
  mce::TextureGroup::clearLoadedResourcesRecord(v8);
  v9 = (ResourcePackManager *)ClientInstance::getResourcePackManager(v2);
  ResourcePackManager::clearStack(v9, 2, 0);
  v10 = (ResourcePackManager *)ClientInstance::getResourcePackManager(v2);
  ResourcePackManager::clearStack(v10, 0, 0);
  v11 = (unsigned __int64 *)(v4 + 4);
  v12 = (ResourcePackManager *)ClientInstance::getResourcePackManager(v2);
  v13 = (const ResourcePackRepository *)ClientInstance::getResourcePackRepository(v2);
  v14 = (ResourcePackStack *)operator new(0x14u);
  ResourcePackStack::ResourcePackStack(v14, v11, v13);
  v23 = v14;
  ResourcePackManager::setStack(v12, (int *)&v23, 2, 0);
  v15 = (unsigned __int64 *)(v6 + 4);
  if ( v23 )
    (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  v23 = 0;
  v16 = (ResourcePackManager *)ClientInstance::getResourcePackManager(v2);
  v17 = (const ResourcePackRepository *)ClientInstance::getResourcePackRepository(v2);
  v18 = (ResourcePackStack *)operator new(0x14u);
  ResourcePackStack::ResourcePackStack(v18, v15, v17);
  v22 = v18;
  ResourcePackManager::setStack(v16, (int *)&v22, 0, 1);
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  v22 = 0;
  v19 = (MinecraftGame *)ClientInstance::getMinecraftGame(v2);
  v20 = MinecraftGame::getResourceLoadManager(v19);
  return ResourceLoadManager::sync(v20, -1);
}


_DWORD *__fastcall ClientInputCallbacks::handleMenuButtonPress(int a1, __int16 a2, char a3)
{
  int v3; // r4@1
  _DWORD *v4; // r0@1
  _DWORD *result; // r0@1
  _DWORD *v6; // [sp+4h] [bp-1Ch]@1
  int (*v7)(void); // [sp+Ch] [bp-14h]@1
  int (__fastcall *v8)(_QWORD **, _DWORD *); // [sp+10h] [bp-10h]@1
  char v9; // [sp+15h] [bp-Bh]@1
  __int16 v10; // [sp+16h] [bp-Ah]@1

  v3 = a1;
  v10 = a2;
  v9 = a3;
  v4 = operator new(8u);
  *v4 = &v10;
  v4[1] = &v9;
  v6 = v4;
  v7 = (int (*)(void))sub_10F4EA8;
  v8 = sub_10F4E88;
  result = ClientInstance::forEachAlwaysAcceptInputScreenWithTop(v3, (int)&v6);
  if ( v7 )
    result = (_DWORD *)v7();
  return result;
}


int __fastcall ClientInputCallbacks::handleToggleUIProfile(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  Options *v3; // r0@1
  int v4; // r5@1
  int v5; // r0@1
  Option *v6; // r0@1

  v2 = this;
  v3 = (Options *)ClientInstance::getOptions(this);
  v4 = (Options::getUIProfile(v3) + 1) % 2;
  v5 = ClientInstance::getOptions(v2);
  v6 = (Option *)Options::get(v5, 41);
  return j_j_j__ZN6Option3setEi(v6, v4);
}


void __fastcall ClientInputCallbacks::handleToastInteractButtonRelease(ClientInputCallbacks *this, ClientInstance *a2)
{
  ToastManager *v2; // r0@1

  v2 = (ToastManager *)ClientInstance::getToastManager(this);
  j_j_j__ZN12ToastManager17handleToastButtonEv(v2);
}


char *__fastcall ClientInputCallbacks::handleDecrementMaxCullingStepsButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  Options *v3; // r0@1
  char *result; // r0@1
  LevelRenderer *v5; // r0@3
  char *v6; // r0@3
  char *v7; // r0@3
  LevelRenderer *v8; // r0@3
  char *v9; // r0@3

  v2 = this;
  v3 = (Options *)ClientInstance::getOptions(this);
  result = (char *)Options::getDevShowChunkMap(v3);
  if ( result == (char *)1 )
  {
    result = (char *)ClientInstance::getLevelRenderer(v2);
    if ( result )
    {
      v5 = (LevelRenderer *)ClientInstance::getLevelRenderer(v2);
      v6 = LevelRenderer::getLevelRendererPlayer(v5);
      v7 = LevelRendererCamera::getLevelBuilder((LevelRendererCamera *)v6);
      --*((_DWORD *)v7 + 1);
      v8 = (LevelRenderer *)ClientInstance::getLevelRenderer(v2);
      v9 = LevelRenderer::getLevelRendererPlayer(v8);
      result = j_j_j__ZN19LevelRendererCamera15getLevelBuilderEv((LevelRendererCamera *)v9);
    }
  }
  return result;
}


int __fastcall ClientInputCallbacks::handleDropButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  int v3; // r0@1
  int result; // r0@1
  Player *v5; // r0@2
  int v6; // r5@2
  int v7; // r5@3
  int v8; // r0@3
  char v9; // [sp+10h] [bp-28h]@3
  char v10; // [sp+1Ch] [bp-1Ch]@2
  int v11; // [sp+20h] [bp-18h]@2

  v2 = this;
  v3 = ClientInstance::getLocalPlayer(this);
  result = Player::canUseAbility(v3, &Abilities::DOORS_AND_SWITCHES);
  if ( result == 1 )
  {
    v5 = (Player *)ClientInstance::getLocalPlayer(v2);
    v6 = Player::getSupplies(v5);
    PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v10, v6);
    if ( PlayerInventoryProxy::dropSlot(v6, v11, 0, 0, v10, 0) == 1 )
    {
      v7 = ClientInstance::getLevel(v2);
      v8 = ClientInstance::getLocalPlayer(v2);
      Entity::getAttachPos((AABB *)&v9, v8, 3, 0);
      Level::playSound(v7, 76, (int)&v9);
    }
    result = ClientInstance::checkForPiracy(v2);
  }
  return result;
}


void __fastcall ClientInputCallbacks::handleBuildOrAttackButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInputCallbacks::handleBuildOrAttackButtonPress(this, a2);
}


int __fastcall ClientInputCallbacks::handleBuildAction(ClientInstance *a1, int *a2)
{
  int *v2; // r9@1
  ClientInstance *v3; // r10@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r8@1
  ClientInstance *v7; // r4@1
  Level *v8; // r0@1
  Level *v9; // r7@1
  char *v10; // r0@1
  bool v11; // zf@1
  char *v12; // r11@1
  int result; // r0@1
  signed int v14; // r0@5
  signed int v15; // r1@5
  int v16; // r0@12
  int v17; // r0@19
  unsigned int v18; // r1@19
  bool v19; // zf@19
  int v20; // r1@22
  int v21; // r1@25
  __int64 v22; // r0@25
  int v23; // r1@29
  BlockSource *v24; // r0@31
  Block *v25; // r8@31
  Material *v26; // r0@31
  signed int v27; // r7@32
  int v28; // r2@33
  ClientInputHandler *v29; // r0@39
  __int64 v30; // r0@40
  signed int v31; // r0@41
  signed int v32; // r2@41
  int v33; // r7@49
  int v34; // r8@49
  int v35; // r1@49
  int v36; // r4@52
  int v37; // r0@52
  char *v38; // r4@52
  int v39; // r6@52
  unsigned int *v40; // r2@54
  signed int v41; // r1@56
  int *v42; // r0@62
  void *v43; // r0@67
  void *v44; // r0@68
  unsigned int *v45; // r2@69
  signed int v46; // r1@71
  signed int v47; // r0@77
  signed int v48; // r1@77
  void *v49; // r0@85
  bool v50; // zf@85
  signed int v51; // r7@91
  signed int v52; // r4@91
  signed int v53; // r1@102
  signed int v54; // r0@102
  int v55; // r0@111
  bool v56; // zf@111
  int v57; // r0@115
  BlockSource *v58; // r0@117
  Block *v59; // r0@117
  Material *v60; // r0@117
  int v61; // r2@119
  int v62; // r2@120
  __int64 v63; // r0@123
  ItemInHandRenderer *v64; // r0@124
  bool v65; // zf@127
  __int64 v66; // r0@130
  int v67; // r0@133
  unsigned int *v68; // r2@136
  signed int v69; // r1@138
  int v70; // [sp+4h] [bp-E4h]@29
  unsigned int v71; // [sp+8h] [bp-E0h]@1
  unsigned int v72; // [sp+Ch] [bp-DCh]@1
  char v73; // [sp+13h] [bp-D5h]@120
  int v74; // [sp+14h] [bp-D4h]@117
  int v75; // [sp+18h] [bp-D0h]@117
  int v76; // [sp+1Ch] [bp-CCh]@117
  int v77; // [sp+20h] [bp-C8h]@123
  int v78; // [sp+24h] [bp-C4h]@123
  int v79; // [sp+28h] [bp-C0h]@85
  int v80; // [sp+30h] [bp-B8h]@96
  char v81; // [sp+36h] [bp-B2h]@89
  char v82; // [sp+37h] [bp-B1h]@85
  void *v83; // [sp+4Ch] [bp-9Ch]@94
  void *ptr; // [sp+5Ch] [bp-8Ch]@92
  int v85; // [sp+70h] [bp-78h]@52
  char *v86; // [sp+74h] [bp-74h]@52
  char *v87; // [sp+78h] [bp-70h]@52
  char *v88; // [sp+7Ch] [bp-6Ch]@52
  int v89; // [sp+84h] [bp-64h]@52
  char v90; // [sp+88h] [bp-60h]@31
  int v91; // [sp+8Ch] [bp-5Ch]@32
  int v92; // [sp+94h] [bp-54h]@31
  int v93; // [sp+98h] [bp-50h]@31
  int v94; // [sp+9Ch] [bp-4Ch]@31
  int v95; // [sp+A0h] [bp-48h]@50
  int v96; // [sp+A8h] [bp-40h]@25
  int v97; // [sp+ACh] [bp-3Ch]@25
  int v98; // [sp+B0h] [bp-38h]@40
  int v99; // [sp+B4h] [bp-34h]@40
  unsigned int v100; // [sp+B8h] [bp-30h]@1
  int v101; // [sp+BCh] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  v4 = ClientInstance::getLocalPlayer(a1);
  sub_119D2DC(&v100);
  v72 = v100;
  v5 = v101;
  v6 = *((_DWORD *)v3 + 39);
  v7 = (ClientInstance *)((char *)v3 + 152);
  v71 = *((_DWORD *)v3 + 38);
  v8 = (Level *)ClientInstance::getLevel(v3);
  v9 = v8;
  v10 = Level::getHitResult(v8);
  v11 = v4 == 0;
  v12 = v10;
  result = 1;
  if ( v4 )
    v11 = v9 == 0;
  if ( v11 )
    return result;
  if ( Player::isUsingItem((Player *)v4) )
    goto LABEL_144;
  v14 = 0;
  v15 = 0;
  if ( v71 >= v72 )
    v15 = 1;
  if ( v6 >= v5 )
    v14 = 1;
  if ( v6 == v5 )
    v14 = v15;
  if ( !v14 )
  {
    v16 = *v2;
    if ( (*v2 & 0x40 || v16 & 6 && !*(_DWORD *)v12)
      && (ClientInstance::useTouchscreen(v3) != 1
       || ClientInstance::useTouchscreen(v3) == 1 && (*(_DWORD *)v12 & 0xFFFFFFFE) != 2) )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 928))(v4);
    }
  }
  v17 = *(_DWORD *)v12;
  v18 = *(_DWORD *)v12 & 0xFFFFFFFE;
  v19 = v18 == 2;
  if ( v18 == 2 )
    v19 = v12[36] == 0;
  if ( v19 )
    if ( *(_BYTE *)v2 & 6 )
      if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 652))(v4) )
      {
        v29 = (ClientInputHandler *)ClientInstance::getInput(v3);
        if ( ClientInputHandler::getCurrentInputMode(v29) == 2 )
        {
          sub_119D2DC(&v98);
          HIDWORD(v30) = v99;
          LODWORD(v30) = v98 + 200000000;
          *(_QWORD *)v7 = v30 + 200000000;
        }
      }
    goto LABEL_77;
  v20 = *v2;
  if ( v17 != 1 )
    if ( v20 & 0x21 && (!v17 || v12[36]) )
      v23 = (int)(v12 + 40);
      v70 = v6;
      if ( !v17 )
        v23 = (int)(v12 + 8);
      v92 = *(_DWORD *)v23;
      v93 = *(_DWORD *)(v23 + 4);
      v94 = *(_DWORD *)(v23 + 8);
      v24 = (BlockSource *)Entity::getRegion((Entity *)v4);
      v25 = (Block *)BlockSource::getBlock(v24, (const BlockPos *)&v92);
      BlockPos::neighbor((BlockPos *)&v90, (int)&v92, v12[4]);
      v26 = (Material *)Block::getMaterial(v25);
      if ( !Material::isLiquid(v26) )
        v27 = v91;
        if ( v27 >= *(_WORD *)(Entity::getRegion((Entity *)v4) + 24) )
          v36 = ClientInstance::getGuiData(v3);
          sub_119C884((void **)&v89, "build.tooHigh");
          v37 = Entity::getRegion((Entity *)v4);
          Util::toString<short,(void *)0,(void *)0>((void **)&v85, *(_WORD *)(v37 + 24));
          v86 = 0;
          v87 = 0;
          v88 = 0;
          v86 = (char *)operator new(4u);
          v88 = v86 + 4;
          v87 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                          (int)&v85,
                          (int)&v86,
                          (int)v86);
          GuiData::displayLocalizableMessage(v36, &v89, (unsigned __int64 *)&v86, 0);
          v39 = (int)v87;
          v38 = v86;
          if ( v86 != v87 )
          {
            do
            {
              v42 = (int *)(*(_DWORD *)v38 - 12);
              if ( v42 != &dword_28898C0 )
              {
                v40 = (unsigned int *)(*(_DWORD *)v38 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v41 = __ldrex(v40);
                  while ( __strex(v41 - 1, v40) );
                }
                else
                  v41 = (*v40)--;
                if ( v41 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v42);
              }
              v38 += 4;
            }
            while ( v38 != (char *)v39 );
            v38 = v86;
          }
          if ( v38 )
            operator delete(v38);
          v43 = (void *)(v85 - 12);
          if ( (int *)(v85 - 12) != &dword_28898C0 )
            v68 = (unsigned int *)(v85 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v69 = __ldrex(v68);
              while ( __strex(v69 - 1, v68) );
            else
              v69 = (*v68)--;
            if ( v69 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v43);
          v44 = (void *)(v89 - 12);
          if ( (int *)(v89 - 12) != &dword_28898C0 )
            v45 = (unsigned int *)(v89 - 4);
                v46 = __ldrex(v45);
              while ( __strex(v46 - 1, v45) );
              v46 = (*v45)--;
            if ( v46 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v44);
          goto LABEL_144;
      v28 = v12[4];
      (*(void (**)(void))(**(_DWORD **)(v4 + 5172) + 24))();
      if ( (*(int (__fastcall **)(Block *))(*(_DWORD *)v25 + 60))(v25)
        || (*(int (__fastcall **)(Block *))(*(_DWORD *)v25 + 64))(v25)
        || (*(int (__fastcall **)(Block *))(*(_DWORD *)v25 + 68))(v25) )
        v6 = v70;
        goto LABEL_100;
      v6 = v70;
  if ( v20 & 0x48 )
    if ( v20 & 0x40 )
      v21 = *((_DWORD *)v12 + 8);
      (*(void (**)(void))(**(_DWORD **)(v4 + 5172) + 60))();
      sub_119D2DC(&v96);
      HIDWORD(v22) = v97;
      LODWORD(v22) = v96 + 200000000;
      *(_QWORD *)v7 = v22 + 200000000;
      ClientInstance::clearInProgressBAI(v3);
    return 0;
  v31 = 0;
  v32 = 0;
    v32 = 1;
    v31 = 1;
    v31 = v32;
  if ( !(v20 & 0x10) || v31 )
  v33 = v6;
  v34 = (*(int (**)(void))(**((_DWORD **)v12 + 8) + 264))();
  v35 = *((_DWORD *)v12 + 8);
  if ( (*(int (**)(void))(**(_DWORD **)(v4 + 5172) + 56))() == 1 )
    sub_119D2DC(&v95);
    *(_QWORD *)v7 = *(_QWORD *)&v95 + 200000000LL;
    ClientInstance::resetBai(v3, 16);
  v11 = v34 == 0;
  v6 = v33;
LABEL_77:
    v47 = 0;
    v48 = 0;
    if ( v71 >= v72 )
      v48 = 1;
    if ( v6 >= v5 )
      v47 = 1;
    if ( v6 == v5 )
      v47 = v48;
    if ( *v2 & 0x10 && !v47 )
      v49 = Player::getSelectedItem((Player *)v4);
      ItemInstance::ItemInstance((ItemInstance *)&v79, (int)v49);
      v50 = v82 == 0;
      if ( v82 )
        v50 = v79 == 0;
      if ( v50 || ItemInstance::isNull((ItemInstance *)&v79) || !v81 || Player::isUsingItem((Player *)v4) )
        v51 = 0;
        v52 = 0;
      else
        sub_119D2DC(&v77);
        HIDWORD(v63) = v78;
        LODWORD(v63) = v77 + 200000000;
        *(_QWORD *)v7 = v63 + 200000000;
        if ( GameMode::baseUseItem(*(GameMode **)(v4 + 5172), (ItemInstance *)&v79) == 1 )
          v64 = (ItemInHandRenderer *)ClientInstance::getItemInHandRenderer(v3);
          ItemInHandRenderer::onItemUsed(v64);
          v52 = 1;
        else
          v52 = 0;
        if ( Player::isUsingItem((Player *)v4) )
          goto LABEL_151;
        v65 = v82 == 0;
        if ( v82 )
          v65 = v79 == 0;
        if ( !v65 )
          v66 = (unsigned int)ItemInstance::isNull((ItemInstance *)&v79);
          v51 = 0;
          if ( !v81 )
            HIDWORD(v66) = 1;
          if ( !v66 )
            v67 = ItemInstance::isThrowable((ItemInstance *)&v79);
            v51 = 0;
            if ( v81 )
              if ( !(v67 ^ 1) )
LABEL_151:
                ClientInstance::resetBai(v3, 16);
                v51 = 1;
      if ( ptr )
        operator delete(ptr);
      if ( v83 )
        operator delete(v83);
      if ( v80 )
        (*(void (**)(void))(*(_DWORD *)v80 + 4))();
      if ( v51 | (v52 != 0) )
        return v51 ^ 1;
LABEL_100:
  if ( *(_DWORD *)v12 && !v12[36] )
  v53 = 0;
  v54 = 0;
    v54 = 1;
    v53 = 1;
    v53 = v54;
  if ( *v2 & 6 && !v53 )
    if ( !*(_BYTE *)(v4 + 5228) )
      v55 = Player::isUsingItem((Player *)v4);
      v56 = v55 == 0;
      if ( !v55 )
        v56 = v12[64] == 0;
      if ( v56 )
        v57 = (int)(v12 + 40);
        if ( !*(_DWORD *)v12 )
          v57 = (int)(v12 + 8);
        v74 = *(_DWORD *)v57;
        v75 = *(_DWORD *)(v57 + 4);
        v76 = *(_DWORD *)(v57 + 8);
        v58 = (BlockSource *)Entity::getRegion((Entity *)v4);
        v59 = (Block *)BlockSource::getBlock(v58, (const BlockPos *)&v74);
        v60 = (Material *)Block::getMaterial(v59);
        if ( !Material::isLiquid(v60) && !*(_BYTE *)(v4 + 5228) )
          v61 = v12[4];
          if ( (*(int (**)(void))(**(_DWORD **)(v4 + 5172) + 8))() != 1 )
            ClientInstance::clearInProgressBAI(v3);
            ClientInstance::stopDestroying(v3);
            return 0;
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 1276))(v4);
          if ( v73 )
            ClientInputCallbacks::vibrate(v3, (ClientInstance *)0x18, v62);
LABEL_144:
    result = 1;
  return result;
}


int __fastcall ClientInputCallbacks::handlePaddleButtonRelease(ClientInstance *a1, int a2)
{
  int v2; // r4@1
  ClientInstance *v3; // r5@1
  int result; // r0@1
  int v5; // r0@2

  v2 = a2;
  v3 = a1;
  result = ClientInstance::getLocalPlayer(a1);
  if ( result )
  {
    v5 = ClientInstance::getLocalPlayer(v3);
    result = j_j_j__ZN11LocalPlayer12stopPaddlingE4Side(v5, v2);
  }
  return result;
}


int __fastcall ClientInputCallbacks::handleChatButtonRelease(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  int result; // r0@2
  SceneStack *v4; // r0@3
  int v5; // r5@3
  int v6; // r0@3
  int v7; // r5@3
  unsigned int *v8; // r1@4
  unsigned int v9; // r0@6
  unsigned int *v10; // r6@10
  unsigned int v11; // r0@12
  ClientInputHandler *v12; // r0@17
  int v13; // [sp+0h] [bp-18h]@3
  int v14; // [sp+4h] [bp-14h]@3

  v2 = this;
  if ( ClientInstance::isScreenReplaceable(this) || (result = ClientInstance::isInBedScreen(v2), result == 1) )
  {
    v4 = (SceneStack *)ClientInstance::getClientSceneStack(v2);
    SceneStack::setBufferTextCharEvents(v4, 1);
    v5 = ClientInstance::getClientSceneStack(v2);
    v6 = ClientInstance::getSceneFactory(v2);
    SceneFactory::createChatScreen((SceneFactory *)&v13, v6);
    SceneStack::pushScreen(v5, (int)&v13, 0);
    v7 = v14;
    if ( v14 )
    {
      v8 = (unsigned int *)(v14 + 4);
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
    v12 = (ClientInputHandler *)ClientInstance::getInput(v2);
    result = ClientInputHandler::ignoreButtonRelease(v12);
  }
  return result;
}


int __fastcall ClientInputCallbacks::handleToggleSimulateTouchButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  void *v2; // r0@2

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  return (*(int (**)(void))(**(_DWORD **)v2 + 88))();
}


int __fastcall ClientInputCallbacks::handleCreativeBlockSelectButtonRelease(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  int v3; // r0@1
  int result; // r0@1
  LocalPlayer *v5; // r5@2
  Level *v6; // r0@2
  char *v7; // r1@2

  v2 = this;
  v3 = ClientInstance::getLocalPlayer(this);
  result = (*(int (**)(void))(*(_DWORD *)v3 + 652))();
  if ( result == 1 )
  {
    v5 = (LocalPlayer *)ClientInstance::getLocalPlayer(v2);
    v6 = (Level *)ClientInstance::getLevel(v2);
    v7 = Level::getHitResult(v6);
    result = j_j_j__ZN11LocalPlayer17pickBlockCreativeERK9HitResultb(v5, (const HitResult *)v7, 0);
  }
  return result;
}


void __fastcall ClientInputCallbacks::handleToggleChatTextToSpeechButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInputCallbacks::handleToggleChatTextToSpeechButtonPress(this, a2);
}


int __fastcall ClientInputCallbacks::handleDebugRenderChunksButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  Options *v3; // r0@1
  unsigned int v4; // r0@1
  int v5; // r0@3
  int result; // r0@3
  int v7; // r0@4

  v2 = this;
  v3 = (Options *)ClientInstance::getOptions(this);
  v4 = Options::getRenderDebug(v3);
  if ( v4 > 4 || v4 == 3 )
  {
    v7 = ClientInstance::getOptions(v2);
    result = j_j_j__ZN7Options14setRenderDebugE15DebugHudOptions(v7, 0);
  }
  else
    v5 = ClientInstance::getOptions(v2);
    result = j_j_j__ZN7Options14setRenderDebugE15DebugHudOptions(v5, 3);
  return result;
}


_DWORD *__fastcall ClientInputCallbacks::handleDirection(ClientInstance *a1, int a2, float a3, float a4, char a5)
{
  ClientInstance *v5; // r4@1
  _DWORD *v6; // r0@1
  _DWORD *result; // r0@6
  int v8; // r0@8
  _DWORD *v9; // [sp+0h] [bp-30h]@1
  void (*v10)(void); // [sp+8h] [bp-28h]@1
  int (__fastcall *v11)(int, _DWORD *); // [sp+Ch] [bp-24h]@1
  char v12; // [sp+13h] [bp-1Dh]@1
  float v13; // [sp+14h] [bp-1Ch]@1
  float v14; // [sp+18h] [bp-18h]@1
  _DWORD *v15; // [sp+1Ch] [bp-14h]@1

  v5 = a1;
  v15 = (_DWORD *)a2;
  v13 = a4;
  v14 = a3;
  v12 = a5;
  v6 = operator new(0x10u);
  *v6 = &v15;
  v6[1] = &v14;
  v6[2] = &v13;
  v6[3] = &v12;
  v9 = v6;
  v10 = (void (*)(void))sub_10F4FF8;
  v11 = sub_10F4FC2;
  ClientInstance::forEachScreen((int)v5, (int)&v9, 1);
  if ( v10 )
    v10();
  if ( !v15 || ClientInstance::getCurrentInputMode(v5) == 1 )
    *(_BYTE *)(ClientInstance::getHoloInput(v5) + 722) = 1;
  result = v15;
  if ( v15 == (_DWORD *)1 )
  {
    result = (_DWORD *)ClientInstance::getCurrentInputMode(v5);
    if ( result == (_DWORD *)1 )
    {
      v8 = ClientInstance::getHoloInput(v5);
      result = (_DWORD *)(*(int (**)(void))(*(_DWORD *)v8 + 44))();
      if ( result == (_DWORD *)1 )
      {
        result = (_DWORD *)ClientInstance::isHoloCursorNeeded(v5);
        if ( result == (_DWORD *)1 )
          result = ClientInstance::adjustGazeCursorByMouse(v5, v14, v13);
      }
    }
  }
  return result;
}


int __fastcall ClientInputCallbacks::handleTogglePerspectiveButtonRelease(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  int result; // r0@2
  Options *v4; // r0@4
  int v5; // r0@4
  int v6; // r5@4
  Options *v7; // r0@6

  v2 = this;
  if ( ClientInstance::isVRClient(this) == 1 )
  {
    result = ClientInstance::isScreenReplaceable(v2);
    if ( result == 1 )
      result = j_j_j__ZN14ClientInstance29setRealityModeToggleTriggeredEb(v2, 1);
  }
  else
    v4 = (Options *)ClientInstance::getOptions(v2);
    v5 = Options::getPlayerViewPerspective(v4);
    v6 = v5 + 1;
    if ( v5 > 1 )
      v6 = 0;
    v7 = (Options *)ClientInstance::getOptions(v2);
    result = j_j_j__ZN7Options24setPlayerViewPerspectiveEi(v7, v6);
  return result;
}


void __fastcall ClientInputCallbacks::handleToggleDayCycleActiveButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  Player *v3; // r6@1
  PlayerCommandOrigin *v4; // r5@1
  Level *v5; // r0@1
  unsigned __int64 *v6; // r0@1
  int v7; // r0@1
  const char *v8; // r1@1
  Minecraft *v9; // r0@3
  int v10; // r4@3
  char *v11; // r0@3
  void *v12; // r0@6
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  unsigned int *v15; // r2@12
  signed int v16; // r1@14
  int v17; // [sp+8h] [bp-28h]@3
  char *v18; // [sp+Ch] [bp-24h]@3
  PlayerCommandOrigin *v19; // [sp+10h] [bp-20h]@3
  int v20; // [sp+18h] [bp-18h]@3

  v2 = this;
  v3 = (Player *)ClientInstance::getLocalPlayer(this);
  v4 = (PlayerCommandOrigin *)operator new(0x18u);
  PlayerCommandOrigin::PlayerCommandOrigin(v4, v3);
  v5 = (Level *)ClientInstance::getLevel(v2);
  v6 = (unsigned __int64 *)Level::getGameRules(v5);
  v7 = GameRules::getBool(v6, (int **)&GameRules::DO_DAYLIGHT_CYCLE);
  v8 = "true";
  if ( !v7 )
    v8 = "false";
  sub_119C884((void **)&v20, v8);
  v9 = (Minecraft *)ClientInstance::getServerData(v2);
  v10 = Minecraft::getCommands(v9);
  v19 = v4;
  v18 = (char *)&unk_28898CC;
  sub_119CAF8((const void **)&v18, *(_DWORD *)(v20 - 12) + 10);
  sub_119C894((const void **)&v18, "/timelock ", 0xAu);
  sub_119C8A4((const void **)&v18, (const void **)&v20);
  v17 = MinecraftCommands::requestCommandExecution(v10, (int *)&v19, (int *)&v18, 3, 0);
  MCRESULT::isSuccess((MCRESULT *)&v17);
  v11 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v18 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v11);
  }
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  v19 = 0;
  v12 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v20 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
}


int __fastcall ClientInputCallbacks::handleControllerConnectionStateChange(ClientInputCallbacks *this, ClientInstance *a2, bool a3, int a4)
{
  char v4; // r5@1
  ClientInstance *v5; // r4@1
  int result; // r0@1

  v4 = (char)a2;
  v5 = this;
  result = ClientInstance::getCurrentInputMode(this);
  if ( result == 3 )
    result = j_j_j__ZN14ClientInstance33setOpenControllerDisconnectScreenEb(v5, v4 ^ 1);
  return result;
}


void __fastcall ClientInputCallbacks::handleDictationEvent(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInputCallbacks *v2; // r4@1
  int v3; // r0@1
  int v4; // r0@2
  _DWORD *v5; // r0@3
  void *v6; // r0@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  _DWORD *v9; // [sp+0h] [bp-28h]@3
  void (*v10)(void); // [sp+8h] [bp-20h]@3
  int (__fastcall *v11)(_DWORD **, _DWORD *); // [sp+Ch] [bp-1Ch]@3
  int v12; // [sp+10h] [bp-18h]@2

  v2 = this;
  v3 = ClientInstance::getVoiceSystem(this);
  if ( (*(int (**)(void))(*(_DWORD *)v3 + 8))() == 1 )
  {
    v4 = ClientInstance::getVoiceSystem(v2);
    VoiceSystem::getDictationStr((VoiceSystem *)&v12, v4);
    if ( *(_DWORD *)(v12 - 12) )
    {
      EntityInteraction::setInteractText((int *)v2 + 41, &v12);
      *((_BYTE *)v2 + 160) = 1;
      v5 = operator new(4u);
      *v5 = &v12;
      v9 = v5;
      v10 = (void (*)(void))sub_10F5146;
      v11 = sub_10F5136;
      ClientInstance::forEachAlwaysAcceptInputScreenWithTop((int)v2, (int)&v9);
      if ( v10 )
        v10();
    }
    v6 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v12 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v6);
  }
}


void __fastcall ClientInputCallbacks::handleDestoryOrAttackButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInputCallbacks::handleDestoryOrAttackButtonPress(this, a2);
}


int __fastcall ClientInputCallbacks::handlePaddleButtonPress(ClientInstance *a1, int a2)
{
  int v2; // r4@1
  ClientInstance *v3; // r5@1
  int result; // r0@1
  int v5; // r0@2

  v2 = a2;
  v3 = a1;
  result = ClientInstance::getLocalPlayer(a1);
  if ( result )
  {
    v5 = ClientInstance::getLocalPlayer(v3);
    result = j_j_j__ZN11LocalPlayer13startPaddlingE4Side(v5, v2);
  }
  return result;
}


_DWORD *__fastcall ClientInputCallbacks::handlePointerPressedButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInputCallbacks *v2; // r4@1
  int v3; // r0@2
  signed int v4; // r5@2
  _DWORD *result; // r0@4
  GuiData *v6; // r0@8
  ClientInputHandler *v7; // r0@9
  void *v8; // [sp+0h] [bp-28h]@4
  int (__fastcall *v9)(void **, void **, int); // [sp+8h] [bp-20h]@4
  int (__fastcall *v10)(int, int); // [sp+Ch] [bp-1Ch]@4
  __int64 v11; // [sp+10h] [bp-18h]@2

  v2 = this;
  if ( ClientInstance::isPrimaryClient(this) == 1 )
  {
    v3 = ClientInstance::getToastManager(v2);
    v11 = *(_QWORD *)((char *)v2 + 604);
    v4 = ToastManager::handleToastClicked(v3, (unsigned __int64 *)&v11);
  }
  else
    v4 = 0;
  v8 = operator new(1u);
  v9 = sub_10F4E5A;
  v10 = sub_10F4E50;
  result = ClientInstance::forEachAlwaysAcceptInputScreenWithTop((int)v2, (int)&v8);
  if ( v9 )
    result = (_DWORD *)((int (__cdecl *)(void **))v9)(&v8);
  if ( !v4 )
    if ( !ClientInstance::getLocalPlayer(v2)
      || (v6 = (GuiData *)ClientInstance::getGuiData(v2), (result = (_DWORD *)GuiData::wasToolbarClicked(v6)) == 0) )
    {
      v7 = (ClientInputHandler *)ClientInstance::getInput(v2);
      result = (_DWORD *)ClientInputHandler::updateInteractActiveState(v7, 1);
    }
  return result;
}


void __fastcall ClientInputCallbacks::handleMobEffectsButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInputCallbacks::handleMobEffectsButtonPress(this, a2);
}


int __fastcall ClientInputCallbacks::handleReloadUIDefinitions(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  MinecraftGame *v3; // r0@1
  CachedScenes *v4; // r0@1

  v2 = this;
  v3 = (MinecraftGame *)ClientInstance::getMinecraftGame(this);
  MinecraftGame::handleReloadUIDefinitions(v3);
  v4 = (CachedScenes *)ClientInstance::getCachedScenes(v2);
  return j_j_j__ZN12CachedScenes10clearCacheEv_0(v4);
}


void __fastcall ClientInputCallbacks::handleToastInteractButtonRelease(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInputCallbacks::handleToastInteractButtonRelease(this, a2);
}


_DWORD *__fastcall ClientInputCallbacks::handleSetGazeControllerMode(ClientInputCallbacks *this, ClientInstance *a2)
{
  unsigned __int64 *v2; // r0@1

  *(_BYTE *)(ClientInstance::getGameRenderer(this) + 812) = 0;
  v2 = (unsigned __int64 *)ClientInstance::getInput(this);
  return j_j_j__ZN18ClientInputHandler21updateHoloUIInputModeE15HoloUIInputModeb(v2, 1, 0);
}


void __fastcall ClientInputCallbacks::handleMobEffectsButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  Mob *v3; // r0@2
  int v4; // r5@3
  int v5; // r0@3
  int v6; // r4@3
  unsigned int *v7; // r1@4
  unsigned int v8; // r0@6
  unsigned int *v9; // r5@10
  unsigned int v10; // r0@12
  int v11; // [sp+0h] [bp-18h]@3
  int v12; // [sp+4h] [bp-14h]@3

  v2 = this;
  if ( ClientInstance::isScreenReplaceable(this) == 1 )
  {
    v3 = (Mob *)ClientInstance::getLocalPlayer(v2);
    if ( Mob::getActiveEffectCount(v3) >= 1 )
    {
      v4 = ClientInstance::getClientSceneStack(v2);
      v5 = ClientInstance::getSceneFactory(v2);
      SceneFactory::createMobEffectsScreen((SceneFactory *)&v11, v5);
      SceneStack::pushScreen(v4, (int)&v11, 0);
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
    }
  }
}


int __fastcall ClientInputCallbacks::handleToggleNoClipButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  int v2; // r0@1
  Ability *v3; // r4@1
  char v4; // r1@1

  v2 = ClientInstance::getLocalPlayer(this);
  v3 = (Ability *)Abilities::getAbility(v2 + 4320, (int **)&Abilities::NOCLIP);
  v4 = Ability::getBool(v3) ^ 1;
  return j_j_j__ZN7Ability7setBoolEb(v3, v4);
}


int __fastcall ClientInputCallbacks::handleDismountButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  int result; // r0@1
  int v4; // r0@2

  v2 = this;
  result = ClientInstance::getLocalPlayer(this);
  if ( result )
  {
    v4 = ClientInstance::getLocalPlayer(v2);
    result = (*(int (**)(void))(*(_DWORD *)v4 + 596))();
  }
  return result;
}


void __fastcall ClientInputCallbacks::handleShowUpsellScreen(ClientInputCallbacks *this, ClientInstance *a2, bool a3)
{
  ClientInstance *v3; // r4@1
  ClientInstance *v4; // r5@1
  int v5; // r6@1
  int v6; // r0@1
  int v7; // r4@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r5@8
  unsigned int v11; // r0@10
  int v12; // [sp+0h] [bp-18h]@1
  int v13; // [sp+4h] [bp-14h]@1

  v3 = a2;
  v4 = this;
  v5 = ClientInstance::getClientSceneStack(this);
  v6 = ClientInstance::getSceneFactory(v4);
  SceneFactory::createUpsellScreen((SceneFactory *)&v12, v6, (int)v3);
  SceneStack::pushScreen(v5, (int)&v12, 0);
  v7 = v13;
  if ( v13 )
  {
    v8 = (unsigned int *)(v13 + 4);
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
}


char *__fastcall ClientInputCallbacks::handleIncrementMaxCullingStepsButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  Options *v3; // r0@1
  char *result; // r0@1
  LevelRenderer *v5; // r0@3
  char *v6; // r0@3
  char *v7; // r0@3
  LevelRenderer *v8; // r0@3
  char *v9; // r0@3

  v2 = this;
  v3 = (Options *)ClientInstance::getOptions(this);
  result = (char *)Options::getDevShowChunkMap(v3);
  if ( result == (char *)1 )
  {
    result = (char *)ClientInstance::getLevelRenderer(v2);
    if ( result )
    {
      v5 = (LevelRenderer *)ClientInstance::getLevelRenderer(v2);
      v6 = LevelRenderer::getLevelRendererPlayer(v5);
      v7 = LevelRendererCamera::getLevelBuilder((LevelRendererCamera *)v6);
      ++*((_DWORD *)v7 + 1);
      v8 = (LevelRenderer *)ClientInstance::getLevelRenderer(v2);
      v9 = LevelRenderer::getLevelRendererPlayer(v8);
      result = j_j_j__ZN19LevelRendererCamera15getLevelBuilderEv((LevelRendererCamera *)v9);
    }
  }
  return result;
}


int __fastcall ClientInputCallbacks::handleInventoryMoveButtonPress(ClientInputCallbacks *this, ClientInstance *a2, int a3)
{
  ClientInstance *v3; // r5@1
  ClientInstance *v4; // r4@1
  int result; // r0@1
  int v6; // r0@2
  GuiData *v7; // r0@3
  int v8; // r6@3
  Player *v9; // r0@3
  int v10; // r0@3
  signed int v11; // r0@3
  int v12; // r5@5
  Player *v13; // r0@5
  int v14; // r0@5
  int v15; // [sp+0h] [bp-18h]@3
  int v16; // [sp+4h] [bp-14h]@3

  v3 = a2;
  v4 = this;
  result = ClientInstance::getLocalPlayer(this);
  if ( result )
  {
    v6 = ClientInstance::getScreen(v4);
    result = (*(int (**)(void))(*(_DWORD *)v6 + 164))();
    if ( result == 1 )
    {
      v7 = (GuiData *)ClientInstance::getGuiData(v4);
      v8 = GuiData::getNumSlots(v7);
      v9 = (Player *)ClientInstance::getLocalPlayer(v4);
      v10 = Player::getSupplies(v9);
      PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v15, v10);
      v11 = (signed int)v3 + v16;
      if ( (signed int)v3 + v16 < 0 )
        v11 += v8;
      v12 = v11 % v8;
      v13 = (Player *)ClientInstance::getLocalPlayer(v4);
      v14 = Player::getSupplies(v13);
      result = PlayerInventoryProxy::selectSlot(v14, v12, 0);
    }
  }
  return result;
}


int __fastcall ClientInputCallbacks::handleSlotSelectButtonPress(ClientInputCallbacks *this, ClientInstance *a2, int a3)
{
  ClientInstance *v3; // r4@1
  ClientInstance *v4; // r5@1
  int result; // r0@1
  int v6; // r0@2
  GuiData *v7; // r0@4
  Player *v8; // r0@6
  int v9; // r0@6

  v3 = a2;
  v4 = this;
  result = ClientInstance::getLocalPlayer(this);
  if ( result )
  {
    v6 = ClientInstance::getScreen(v4);
    result = (*(int (**)(void))(*(_DWORD *)v6 + 164))();
    if ( (signed int)v3 >= 1 && result == 1 )
    {
      v7 = (GuiData *)ClientInstance::getGuiData(v4);
      result = GuiData::getNumSlots(v7);
      if ( result >= (signed int)v3 )
      {
        v8 = (Player *)ClientInstance::getLocalPlayer(v4);
        v9 = Player::getSupplies(v8);
        result = j_j_j__ZN20PlayerInventoryProxy10selectSlotEi11ContainerID_0(v9, (int)v3 - 1, 0);
      }
    }
  }
  return result;
}


int __fastcall ClientInputCallbacks::handleNextAVCStatButtonRelease(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  signed int v3; // r5@1
  int v4; // r0@2
  int result; // r0@2

  v2 = this;
  v3 = 100;
  do
  {
    v4 = ClientInstance::getLevel(v2);
    result = (*(int (**)(void))(*(_DWORD *)v4 + 72))();
    --v3;
  }
  while ( v3 );
  return result;
}


int __fastcall ClientInputCallbacks::handleHideSneakButtonRelease(ClientInputCallbacks *this, ClientInstance *a2)
{
  int result; // r0@1

  result = ClientInstance::getInput(this);
  *(_BYTE *)(result + 30) = 1;
  return result;
}


void __fastcall ClientInputCallbacks::handleDestoryOrAttackButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  int v3; // r0@1
  int *v4; // r0@3

  v2 = this;
  v3 = ClientInstance::getHoloInput(this);
  if ( (*(int (**)(void))(*(_DWORD *)v3 + 44))() != 1 || !*(_BYTE *)(ClientInstance::getGameRenderer(v2) + 812) )
  {
    ClientInstance::resetBai(v2, 68);
    v4 = (int *)ClientInstance::getInProgressBAI(v2);
    if ( ClientInputCallbacks::handleBuildAction(v2, v4) == 1 )
      j_j_j__ZN14ClientInstance8resetBaiEi(v2, 10);
  }
}


int __fastcall ClientInputCallbacks::handleSuspendResumeButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  AppPlatform **v2; // r0@2
  AppPlatform **v3; // r0@5

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  AppPlatform::_fireAppSuspended(*v2);
    v3 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v3 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  return j_j_j__ZN11AppPlatform15_fireAppResumedEv(*v3);
}


void __fastcall ClientInputCallbacks::handleBuildActionButtonRelease(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  Player *v3; // r0@1
  Player *v4; // r5@1

  v2 = this;
  v3 = (Player *)ClientInstance::getLocalPlayer(this);
  v4 = v3;
  if ( v3 && Player::isUsingItem(v3) == 1 )
    (*(void (**)(void))(**((_DWORD **)v4 + 1293) + 64))();
  j_j_j__ZN14ClientInstance18clearInProgressBAIEv(v2);
}


void __fastcall ClientInputCallbacks::handleDecreaseRenderDistanceButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInputCallbacks::handleDecreaseRenderDistanceButtonPress(this, a2);
}


int __fastcall ClientInputCallbacks::handleStickCursorButtonRelease(ClientInputCallbacks *this, ClientInstance *a2)
{
  int result; // r0@1

  result = ClientInstance::getHoloInput(this);
  *(_BYTE *)(result + 688) = 0;
  return result;
}


int __fastcall ClientInputCallbacks::handleToggleEnableNewScreensDebugButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  int v2; // r0@1
  bool v3; // r1@1

  v2 = ScreenView::isDebugRendering(this);
  return j_j_j__ZN10ScreenView17setDebugRenderingEb((ScreenView *)(v2 ^ 1), v3);
}


void __fastcall ClientInputCallbacks::handleChangeUserRequest(ClientInputCallbacks *this, MinecraftGame *a2, int a3, bool a4)
{
  ClientInputCallbacks::handleChangeUserRequest(this, a2, a3, a4);
}


int __fastcall ClientInputCallbacks::handleInteractButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  int v3; // [sp+4h] [bp-Ch]@1

  v3 = 16;
  return ClientInputCallbacks::handleBuildAction(this, &v3);
}


void __fastcall ClientInputCallbacks::handleInputModeChanged(ClientInstance *a1, int a2)
{
  int v2; // r5@1
  ClientInstance *v3; // r4@1
  int v4; // r0@1
  _DWORD *v5; // r0@1
  int v6; // r0@5
  bool v7; // zf@5
  int v8; // r0@12
  ClientInputHandler *v9; // r0@13
  int v10; // r4@14
  unsigned int *v11; // r1@15
  unsigned int v12; // r0@17
  unsigned int *v13; // r5@21
  unsigned int v14; // r0@23
  char v15; // [sp+4h] [bp-54h]@12
  int v16; // [sp+2Ch] [bp-2Ch]@14
  _DWORD *v17; // [sp+34h] [bp-24h]@1
  void (*v18)(void); // [sp+3Ch] [bp-1Ch]@1
  int (__fastcall *v19)(_DWORD ***, _DWORD *); // [sp+40h] [bp-18h]@1
  int v20; // [sp+44h] [bp-14h]@1

  v2 = a2;
  v3 = a1;
  v20 = a2;
  v4 = ClientInstance::getOptions(a1);
  Options::updateInputMode(v4, v2);
  v5 = operator new(4u);
  *v5 = &v20;
  v17 = v5;
  v18 = (void (*)(void))sub_10F5046;
  v19 = sub_10F5036;
  ClientInstance::forEachAlwaysAcceptInputScreenWithTop((int)v3, (int)&v17);
  if ( v18 )
    v18();
  if ( v20 == 2 )
    goto LABEL_9;
  if ( v20 == 1 )
  {
    v6 = ClientInstance::currentScreenShouldStealMouse(v3);
    v7 = v20 == 2;
    if ( v20 != 2 )
      v7 = (v6 ^ 1) == 1;
    if ( !v7 )
    {
      if ( v20 == 1 && ClientInstance::currentScreenShouldStealMouse(v3) == 1 )
        ClientInstance::grabMouse(v3);
LABEL_10:
      if ( v20 == 1 )
        goto LABEL_12;
      goto LABEL_11;
    }
LABEL_9:
    ClientInstance::releaseMouse(v3);
    goto LABEL_10;
  }
LABEL_11:
  ClientInstance::refocusMouse(v3);
LABEL_12:
  Config::createConfig((Config *)&v15, v3);
  v8 = ClientInstance::getGuiData(v3);
  (*(void (**)(void))(*(_DWORD *)v8 + 8))();
  if ( ClientInstance::getInput(v3) )
    v9 = (ClientInputHandler *)ClientInstance::getInput(v3);
    ClientInputHandler::onConfigChanged(v9, (const Config *)&v15);
  v10 = v16;
  if ( v16 )
    v11 = (unsigned int *)(v16 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
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
}


int __fastcall ClientInputCallbacks::handleHideJumpButtonRelease(ClientInputCallbacks *this, ClientInstance *a2)
{
  int result; // r0@1

  result = ClientInstance::getInput(this);
  *(_BYTE *)(result + 29) = 1;
  return result;
}


void __fastcall ClientInputCallbacks::handleToggleShowChunkMapButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInputCallbacks::handleToggleShowChunkMapButtonPress(this, a2);
}


void __fastcall ClientInputCallbacks::handleToggleShowChunkMapButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  int v3; // r0@1
  Option *v4; // r0@1
  Options *v5; // r0@1

  v2 = this;
  v3 = ClientInstance::getOptions(this);
  v4 = (Option *)Options::get(v3, 90);
  Option::toggle(v4);
  v5 = (Options *)ClientInstance::getOptions(v2);
  j_j_j__ZN7Options4saveEb_0(v5, 0);
}


int __fastcall ClientInputCallbacks::handleDropAllItemsButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  int v2; // r0@1
  Player *v3; // r4@1
  int result; // r0@1
  int v5; // r0@2
  int v6; // r5@2
  int v7; // r6@3
  int v8; // r0@4
  int v9; // r0@4
  int v10; // r7@4
  bool v11; // zf@4
  int v12; // r0@9

  v2 = ClientInstance::getLocalPlayer(this);
  v3 = (Player *)v2;
  result = Player::canUseAbility(v2, &Abilities::DOORS_AND_SWITCHES);
  if ( !result )
  {
    v5 = Player::getSupplies(v3);
    result = PlayerInventoryProxy::getContainerSize(v5, 0);
    v6 = result;
    if ( result != 9 )
    {
      v7 = 9;
      do
      {
        v8 = Player::getSupplies(v3);
        v9 = PlayerInventoryProxy::getItem(v8, v7, 0);
        v10 = v9;
        result = *(_BYTE *)(v9 + 15);
        v11 = result == 0;
        if ( result )
        {
          result = *(_DWORD *)v10;
          v11 = *(_DWORD *)v10 == 0;
        }
        if ( !v11 )
          result = ItemInstance::isNull((ItemInstance *)v10);
          if ( !result )
          {
            result = *(_BYTE *)(v10 + 14);
            if ( *(_BYTE *)(v10 + 14) )
            {
              v12 = Player::getSupplies(v3);
              result = PlayerInventoryProxy::dropSlot(v12, v7, 0, 1, 0, 0);
            }
          }
        ++v7;
      }
      while ( v6 != v7 );
    }
  }
  return result;
}


void __fastcall ClientInputCallbacks::handleIncreaseRenderDistanceButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInputCallbacks::handleIncreaseRenderDistanceButtonPress(this, a2);
}


void __fastcall ClientInputCallbacks::handleDictationEvent(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInputCallbacks::handleDictationEvent(this, a2);
}


int __fastcall ClientInputCallbacks::handleRenderDebugButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  Options *v2; // r0@1
  int v3; // r4@1
  int v4; // r0@1
  int result; // r0@3

  v2 = (Options *)ClientInstance::getOptions(this);
  v3 = (int)v2;
  v4 = Options::getRenderDebug(v2);
  if ( v4 == 5 )
  {
    result = j_j_j__ZN7Options14setRenderDebugE15DebugHudOptions(v3, 0);
  }
  else if ( v4 == 1 )
    result = j_j_j__ZN7Options14setRenderDebugE15DebugHudOptions(v3, 5);
  else
    result = j_j_j__ZN7Options14setRenderDebugE15DebugHudOptions(v3, 1);
  return result;
}


void __fastcall ClientInputCallbacks::handleBuildOrInteractButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  int v3; // r0@1
  int *v4; // r0@3

  v2 = this;
  v3 = ClientInstance::getHoloInput(this);
  if ( (*(int (**)(void))(*(_DWORD *)v3 + 44))() != 1 || !*(_BYTE *)(ClientInstance::getGameRenderer(v2) + 812) )
  {
    ClientInstance::resetBai(v2, 48);
    v4 = (int *)ClientInstance::getInProgressBAI(v2);
    if ( ClientInputCallbacks::handleBuildAction(v2, v4) == 1 )
      j_j_j__ZN14ClientInstance8resetBaiEi(v2, 17);
  }
}


void __fastcall ClientInputCallbacks::handleDestroyOrInteractButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInputCallbacks::handleDestroyOrInteractButtonPress(this, a2);
}


void __fastcall ClientInputCallbacks::handleDestroyOrInteractButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  int *v3; // r0@1

  v2 = this;
  ClientInstance::resetBai(this, 20);
  v3 = (int *)ClientInstance::getInProgressBAI(v2);
  if ( ClientInputCallbacks::handleBuildAction(v2, v3) == 1 )
    j_j_j__ZN14ClientInstance8resetBaiEi(v2, 18);
}


void __fastcall ClientInputCallbacks::handleBuildOrInteractButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInputCallbacks::handleBuildOrInteractButtonPress(this, a2);
}


int __fastcall ClientInputCallbacks::handleSetSpawnPositionButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r5@1
  int v3; // r0@1
  int v4; // r0@1
  int v5; // r0@1
  int v6; // r3@1
  int v8; // [sp+0h] [bp-40h]@1
  char v9; // [sp+Ch] [bp-34h]@1
  int v10; // [sp+10h] [bp-30h]@1
  int v11; // [sp+14h] [bp-2Ch]@1
  int v12; // [sp+18h] [bp-28h]@1
  int v13; // [sp+1Ch] [bp-24h]@1
  char v14; // [sp+20h] [bp-20h]@1
  int v15; // [sp+24h] [bp-1Ch]@1
  int v16; // [sp+28h] [bp-18h]@1
  int v17; // [sp+2Ch] [bp-14h]@1

  v2 = this;
  v3 = ClientInstance::getLocalPlayer(this);
  v4 = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  BlockPos::BlockPos((int)&v15, v4);
  v9 = 0;
  v10 = v15;
  v11 = v16 - 1;
  v12 = v17;
  v13 = 0;
  v14 = 1;
  v5 = ClientInstance::getPacketSender(v2);
  return (*(int (__cdecl **)(int, int *, _DWORD, int, void **, signed int, signed int, _DWORD, int))(*(_DWORD *)v5 + 8))(
           v5,
           &v8,
           *(_DWORD *)(*(_DWORD *)v5 + 8),
           v6,
           &off_26DFAB0,
           2,
           1,
           *(_DWORD *)&v9,
           v10);
}


void __fastcall ClientInputCallbacks::handleToggleDayCycleActiveButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInputCallbacks::handleToggleDayCycleActiveButtonPress(this, a2);
}


void __fastcall ClientInputCallbacks::handleBuildOrAttackButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  int *v3; // r0@1

  v2 = this;
  ClientInstance::resetBai(this, 96);
  v3 = (int *)ClientInstance::getInProgressBAI(v2);
  if ( ClientInputCallbacks::handleBuildAction(v2, v3) == 1 )
    j_j_j__ZN14ClientInstance8resetBaiEi(v2, 9);
}


int __fastcall ClientInputCallbacks::handleCreativeBlockSelectButtonReleaseWithData(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  int v3; // r0@1
  int result; // r0@1
  LocalPlayer *v5; // r5@2
  Level *v6; // r0@2
  char *v7; // r1@2

  v2 = this;
  v3 = ClientInstance::getLocalPlayer(this);
  result = (*(int (**)(void))(*(_DWORD *)v3 + 652))();
  if ( result == 1 )
  {
    v5 = (LocalPlayer *)ClientInstance::getLocalPlayer(v2);
    v6 = (Level *)ClientInstance::getLevel(v2);
    v7 = Level::getHitResult(v6);
    result = j_j_j__ZN11LocalPlayer17pickBlockCreativeERK9HitResultb(v5, (const HitResult *)v7, 1);
  }
  return result;
}


void __fastcall ClientInputCallbacks::handleConsoleButtonRelease(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInputCallbacks::handleConsoleButtonRelease(this, a2);
}


BackgroundTask *__fastcall ClientInputCallbacks::vibrate(ClientInputCallbacks *this, ClientInstance *a2, int a3)
{
  ClientInstance *v3; // r4@1
  ClientInputCallbacks *v4; // r5@1
  int v5; // r6@1
  int v6; // r0@1
  BackgroundTask *result; // r0@1
  int v8; // r6@2
  _DWORD *v9; // r0@2
  __int64 v10; // r1@2
  char v11; // [sp+8h] [bp-30h]@2
  int (*v12)(void); // [sp+10h] [bp-28h]@2
  _DWORD *v13; // [sp+18h] [bp-20h]@2
  __int64 v14; // [sp+20h] [bp-18h]@2

  v3 = a2;
  v4 = this;
  v5 = ClientInstance::getOptions(this);
  v6 = ClientInstance::getCurrentInputMode(v4);
  result = (BackgroundTask *)Options::getDestroyVibration(v5, v6);
  if ( result == (BackgroundTask *)1 )
  {
    v8 = *((_DWORD *)v4 + 157);
    v9 = operator new(8u);
    LODWORD(v10) = sub_10F5208;
    *v9 = v4;
    v9[1] = v3;
    HIDWORD(v10) = sub_10F51C8;
    v13 = v9;
    v14 = v10;
    v12 = 0;
    result = TaskGroup::queue(v8, (int)&v13, (int)&v11, 1u, 0xFFFFFFFF);
    if ( v12 )
      result = (BackgroundTask *)v12();
    if ( (_DWORD)v14 )
      result = (BackgroundTask *)((int (*)(void))v14)();
  }
  return result;
}


void __fastcall ClientInputCallbacks::handleInputModeChanged(ClientInstance *a1, int a2)
{
  ClientInputCallbacks::handleInputModeChanged(a1, a2);
}


int __fastcall ClientInputCallbacks::handleStickCursorButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  int result; // r0@1

  result = ClientInstance::getHoloInput(this);
  *(_BYTE *)(result + 688) = 1;
  return result;
}


int __fastcall ClientInputCallbacks::handlePointerLocation(ClientInstance *a1, int a2, char a3)
{
  int v3; // r5@1
  ClientInstance *v4; // r4@1
  GameRenderer *v5; // r0@1
  GuiData *v6; // r0@1
  _DWORD *v7; // r7@1
  int v8; // r6@1
  _DWORD *v9; // r0@1
  _DWORD *v19; // [sp+0h] [bp-28h]@1
  void (*v20)(void); // [sp+8h] [bp-20h]@1
  int (__fastcall *v21)(_QWORD **, _DWORD *); // [sp+Ch] [bp-1Ch]@1
  char v22; // [sp+13h] [bp-15h]@1

  v3 = a2;
  v4 = a1;
  v22 = a3;
  v5 = (GameRenderer *)ClientInstance::getGameRenderer(a1);
  GameRenderer::updatePointerLocation(v5, *(_DWORD *)(v3 + 4), *(_DWORD *)(v3 + 4) >> 16);
  v6 = (GuiData *)ClientInstance::getGuiData(v4);
  GuiData::updatePointerLocation(v6, *(_DWORD *)(v3 + 4), *(_DWORD *)(v3 + 4) >> 16);
  v7 = (_DWORD *)ClientInstance::getTopScreen(v4);
  v8 = (*(int (**)(void))(*(_DWORD *)*v7 + 100))();
  v9 = operator new(8u);
  *v9 = v3;
  v9[1] = &v22;
  v19 = v9;
  v20 = (void (*)(void))sub_10F4F88;
  v21 = sub_10F4F74;
  ClientInstance::forEachAlwaysAcceptInputScreen((int)v4, (int)&v19, v7);
  if ( v20 )
    v20();
  _R0 = *(_DWORD *)(v3 + 4);
  _R1 = (signed __int16)_R0;
  _R0 >>= 16;
  __asm
  {
    VMOV            S0, R1
    VMOV            S2, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VMOV            R1, S0
    VMOV            R2, S2
  }
  ClientInstance::setLastPointerLocation(v4, _R1, _R2, 0.0);
  return v8;
}


int __fastcall ClientInputCallbacks::handleVectorInput(ClientInstance *this, int a2, int a3, int a4, float a5, int a6)
{
  ClientInstance *v6; // r4@1
  int result; // r0@1
  int v12; // r0@2
  int v13; // r0@3
  _DWORD *v14; // r0@4
  int v15; // r1@4
  _DWORD *v16; // [sp+4h] [bp-34h]@4
  int (*v17)(void); // [sp+Ch] [bp-2Ch]@4
  signed int (__fastcall *v18)(int *, int *); // [sp+10h] [bp-28h]@4
  char v19; // [sp+17h] [bp-21h]@1
  float v20; // [sp+18h] [bp-20h]@4
  int v21; // [sp+1Ch] [bp-1Ch]@1
  int v22; // [sp+20h] [bp-18h]@1
  __int16 v23; // [sp+26h] [bp-12h]@1

  v6 = this;
  __asm { VLDR            S0, [SP,#0x38+arg_0] }
  v23 = a2;
  v21 = a4;
  v22 = a3;
  v19 = a6;
  result = a2 & 0xFFFFFFFC;
  __asm { VSTR            S0, [SP,#0x38+var_20] }
  if ( (a2 & 0xFFFFFFFC) == 8 )
  {
    v12 = ClientInstance::getVoiceSystem(v6);
    if ( (*(int (**)(void))(*(_DWORD *)v12 + 8))() != 1
      || (v13 = ClientInstance::getVoiceSystem(v6), result = (*(int (**)(void))(*(_DWORD *)v13 + 36))(), result != 5) )
    {
      v14 = operator new(0x14u);
      *v14 = &v23;
      v14[1] = &v22;
      v15 = (int)(v14 + 2);
      *(_DWORD *)v15 = &v21;
      *(_DWORD *)(v15 + 4) = &v20;
      *(_DWORD *)(v15 + 8) = &v19;
      v16 = v14;
      v17 = (int (*)(void))sub_10F50F6;
      v18 = sub_10F50C2;
      result = ClientInstance::forEachScreen((int)v6, (int)&v16, 1);
      if ( v17 )
        result = v17();
    }
  }
  return result;
}


void __fastcall ClientInputCallbacks::handleConsoleButtonRelease(ClientInputCallbacks *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  int v3; // r5@3
  int v4; // r0@3
  int v5; // r4@3
  unsigned int *v6; // r1@4
  unsigned int v7; // r0@6
  unsigned int *v8; // r5@10
  unsigned int v9; // r0@12
  int v10; // [sp+0h] [bp-18h]@3
  int v11; // [sp+4h] [bp-14h]@3

  v2 = this;
  if ( ClientInstance::isScreenReplaceable(this) || ClientInstance::isInBedScreen(v2) == 1 )
  {
    v3 = ClientInstance::getClientSceneStack(v2);
    v4 = ClientInstance::getSceneFactory(v2);
    SceneFactory::createConsoleScreen((SceneFactory *)&v10, v4);
    SceneStack::pushScreen(v3, (int)&v10, 0);
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
}


int __fastcall ClientInputCallbacks::handleToggleTexelAAButtonPress(ClientInputCallbacks *this, ClientInstance *a2)
{
  int v2; // r0@1
  Option *v3; // r0@1

  v2 = ClientInstance::getOptions(this);
  v3 = (Option *)Options::get(v2, 33);
  return j_j_j__ZN6Option6toggleEv(v3);
}


int __fastcall ClientInputCallbacks::handleCaretLocation(ClientInstance *a1)
{
  int v1; // r0@1

  v1 = ClientInstance::getScreen(a1);
  return (*(int (**)(void))(*(_DWORD *)v1 + 120))();
}


void __fastcall ClientInputCallbacks::handleInventoryButtonPress(ClientInstance *a1, int a2)
{
  int v2; // r5@1
  ClientInstance *v3; // r4@1
  int v4; // r0@3
  Entity *v5; // r0@4
  Level *v6; // r0@5
  int v7; // r0@6
  int v8; // r0@6
  int v9; // r6@7
  int v10; // r0@7
  int v11; // r4@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  int v14; // r0@12
  int v15; // r0@12
  ContainerComponent *v16; // r6@12
  int v17; // r6@14
  int v18; // r0@14
  unsigned int *v19; // r1@15
  unsigned int v20; // r0@17
  unsigned int *v21; // r5@21
  unsigned int v22; // r0@23
  Player *v23; // r0@25
  int v24; // [sp+0h] [bp-50h]@7
  int v25; // [sp+4h] [bp-4Ch]@7
  char v26; // [sp+8h] [bp-48h]@14
  int v27; // [sp+Ch] [bp-44h]@14
  __int64 v28; // [sp+10h] [bp-40h]@6
  void **v29; // [sp+18h] [bp-38h]@6
  int v30; // [sp+1Ch] [bp-34h]@6
  int v31; // [sp+20h] [bp-30h]@6
  char v32; // [sp+24h] [bp-2Ch]@6
  char v33; // [sp+25h] [bp-2Bh]@6
  __int64 v34; // [sp+28h] [bp-28h]@6
  __int64 v35; // [sp+30h] [bp-20h]@6
  int v36; // [sp+38h] [bp-18h]@6

  v2 = a2;
  v3 = a1;
  if ( ClientInstance::isScreenReplaceable(a1) == 1 )
  {
    if ( ClientInstance::getLocalPlayer(v3) )
    {
      v4 = ClientInstance::getLocalPlayer(v3);
      if ( (*(int (**)(void))(*(_DWORD *)v4 + 1348))() == 1 )
      {
        v5 = (Entity *)ClientInstance::getLocalPlayer(v3);
        if ( Entity::isRiding(v5) == 1 )
        {
          v6 = (Level *)ClientInstance::getLevel(v3);
          if ( Level::isClientSide(v6) == 1 )
          {
            v7 = ClientInstance::getLocalPlayer(v3);
            Entity::getRuntimeID((Entity *)&v28, *(_DWORD *)(v7 + 512));
            v30 = 2;
            v31 = 1;
            v32 = 0;
            v29 = &off_26DFA88;
            v33 = 6;
            v34 = v28;
            v36 = dword_2822498;
            v35 = *(_QWORD *)&Vec3::ZERO;
            v8 = ClientInstance::getPacketSender(v3);
            (*(void (**)(void))(*(_DWORD *)v8 + 8))();
            return;
          }
          v14 = ClientInstance::getLocalPlayer(v3);
          v15 = Entity::getContainerComponent(*(Entity **)(v14 + 512));
          v16 = (ContainerComponent *)v15;
          if ( v15 && (unsigned __int8)Container::getContainerType(*(Container **)(v15 + 4)) != 247 )
            v23 = (Player *)ClientInstance::getLocalPlayer(v3);
            j_j_j__ZN18ContainerComponent13openContainerER6Player(v16, v23);
          v17 = ClientInstance::getClientSceneStack(v3);
          v18 = ClientInstance::getSceneFactory(v3);
          SceneFactory::createInventoryScreen((int)&v26, v18, v2);
          SceneStack::pushScreen(v17, (int)&v26, 0);
          v11 = v27;
          if ( v27 )
            v19 = (unsigned int *)(v27 + 4);
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
              v21 = (unsigned int *)(v11 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v22 = __ldrex(v21);
                while ( __strex(v22 - 1, v21) );
                goto LABEL_33;
              }
LABEL_32:
              v22 = (*v21)--;
LABEL_33:
              if ( v22 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
              return;
        }
        else
          v9 = ClientInstance::getClientSceneStack(v3);
          v10 = ClientInstance::getSceneFactory(v3);
          SceneFactory::createInventoryScreen((int)&v24, v10, v2);
          SceneStack::pushScreen(v9, (int)&v24, 0);
          v11 = v25;
          if ( v25 )
            v12 = (unsigned int *)(v25 + 4);
                v13 = __ldrex(v12);
              while ( __strex(v13 - 1, v12) );
              v13 = (*v12)--;
            if ( v13 == 1 )
              goto LABEL_32;
      }
    }
  }
}
