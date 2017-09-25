

int __fastcall MinecraftGame::refocusMouse(MinecraftGame *this)
{
  void *v1; // r0@2
  int result; // r0@4
  void *v3; // r0@6
  void *v4; // r0@9

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  result = (*(int (**)(void))(**(_DWORD **)v1 + 80))();
  if ( !result )
  {
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v3 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v3 = &ServiceLocator<AppPlatform>::mDefaultService;
    (*(void (**)(void))(**(_DWORD **)v3 + 84))();
      v4 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v4 = &ServiceLocator<AppPlatform>::mDefaultService;
    result = (*(int (**)(void))(**(_DWORD **)v4 + 72))();
  }
  return result;
}


unsigned int __fastcall MinecraftGame::setDpadScale(MinecraftGame *this, float _R1)
{
  MinecraftGame *v2; // r4@1
  char *v3; // r7@1
  int v4; // r2@1
  char *i; // r0@1
  char *v10; // r1@3
  GuiData *v11; // r0@7
  void (*v14)(void); // r3@7
  int v15; // r5@7
  int v16; // r0@10
  unsigned int result; // r0@15
  int v18; // r1@16
  char *j; // r0@16
  int v20; // r4@21
  unsigned int *v21; // r1@22
  unsigned int *v22; // r5@28
  int v23; // [sp+0h] [bp-60h]@21
  int v24; // [sp+28h] [bp-38h]@21
  void *v25; // [sp+30h] [bp-30h]@7
  int (__fastcall *v26)(void **, void **, int); // [sp+38h] [bp-28h]@7
  void (__fastcall *v27)(int, ClientInstance *); // [sp+3Ch] [bp-24h]@7

  v2 = this;
  v3 = (char *)this + 216;
  v4 = *((_DWORD *)this + 55);
  for ( i = (char *)this + 216; v4; v4 = *(_DWORD *)(v4 + 8) )
    i = (char *)v4;
  __asm { VMOV            S16, R1 }
  v10 = v3;
  if ( i != v3 )
  {
    if ( i[16] )
      i = v3;
    v10 = i;
  }
  v11 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)v10 + 5));
  _R0 = GuiData::getScreenSizeData(v11);
  __asm
    VLDR            S2, [R0,#0xC]
    VMOV.F32        S4, #-3.0
    VLDR            S0, =0.010417
    VMUL.F32        S0, S2, S0
    VMOV.F32        S2, #3.0
    VADD.F32        S0, S0, S4
    VMUL.F32        S0, S0, S16
    VADD.F32        S0, S0, S2
    VMOV            R1, S0
  PixelCalc::setPixelsPerMillimeter(*((PixelCalc **)v2 + 113), _R1);
  v25 = operator new(1u);
  v14 = (void (*)(void))sub_C19F18;
  v26 = sub_C19F18;
  v27 = sub_C19DEC;
  v15 = *((_DWORD *)v2 + 56);
  if ( (char *)v15 == v3 )
    goto LABEL_37;
  do
    if ( !v14 )
      sub_DA7654();
    v27((int)&v25, *(ClientInstance **)(v15 + 20));
    v16 = sub_DA7F5C(v15);
    v14 = (void (*)(void))v26;
    v15 = v16;
  while ( (char *)v16 != v3 );
  if ( v26 )
LABEL_37:
    v14();
  result = *((_DWORD *)v2 + 63);
  if ( result )
    v18 = *((_DWORD *)v2 + 55);
    for ( j = v3; v18; v18 = *(_DWORD *)(v18 + 8) )
      j = (char *)v18;
    if ( j != v3 && !j[16] )
      v3 = j;
    Config::createConfig((Config *)&v23, *((ClientInstance **)v3 + 5));
    result = (*(int (**)(void))(**((_DWORD **)v2 + 63) + 8))();
    v20 = v24;
    if ( v24 )
    {
      v21 = (unsigned int *)(v24 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
      }
      else
        result = (*v21)--;
      if ( result == 1 )
        v22 = (unsigned int *)(v20 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v22);
          while ( __strex(result - 1, v22) );
        }
        else
          result = (*v22)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
    }
  return result;
}


void __fastcall MinecraftGame::initializeTrialWorld(MinecraftGame *this, Player *a2)
{
  MinecraftGame::initializeTrialWorld(this, a2);
}


int __fastcall MinecraftGame::getLaunchedForHMDPlatform(MinecraftGame *this)
{
  void *v1; // r0@2

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  return (*(int (**)(void))(**(_DWORD **)v1 + 448))();
}


      if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(_R4 + 24)) == _R4 )
{
    }
    else if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(_R4 + 24)) == _R4 )
    {
      MinecraftGame::releaseMouse(*(MinecraftGame **)(_R4 + 24));
    _R0 = GuiData::getScreenSizeData(*(GuiData **)(_R4 + 656));
    __asm
      VLDR            S0, [R0,#0x10]
      VLDR            S2, [R0,#0x14]
      VCVTR.S32.F32   S0, S0
      VCVTR.S32.F32   S2, S2
      VMOV            R1, S0
      VMOV            R2, S2
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v4 + 12))(v4, _R1, _R2);
    if ( (*(int (**)(void))(**(_DWORD **)(_R4 + 52) + 44))() == 1 )
      v18 = ClientInputHandler::getHoloUIInputMode(*(ClientInputHandler **)(_R4 + 64));
      ClientInputHandler::updateHoloUIInputMode(*(unsigned __int64 **)(_R4 + 64), v18, 1);
    v19 = *(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 80);
    v20 = ClientInputHandler::getCurrentInputMode(*(ClientInputHandler **)(_R4 + 64));
    v19(v4, v20);
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 28))(v4);
    if ( ClientInputHandler::getCurrentInputMode(*(ClientInputHandler **)(_R4 + 64)) == 1
      || (*(int (**)(void))(**(_DWORD **)(_R4 + 52) + 44))() == 1
      && (unsigned int)(ClientInputHandler::getCurrentInputMode(*(ClientInputHandler **)(_R4 + 64)) - 3) <= 1
      && ClientInputHandler::getHoloUIInputMode(*(ClientInputHandler **)(_R4 + 64)) == 2 )
      __asm
      {
        VLDR            S16, [R4,#0x25C]
        VLDR            S18, [R4,#0x260]
      }
      v21 = ClientInputHandler::getCurrentInputMode(*(ClientInputHandler **)(_R4 + 64));
        VCVTR.S32.F32   S0, S16
        VCVTR.S32.F32   S2, S18
      v32 = v21;
      __asm { VMOV            R0, S0 }
      v33 = _R0;
      __asm { VMOV            R0, S2 }
      v34 = _R0;
      v35 = 1;
      (*(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)v4 + 100))(v4, &v32, 0);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 244))(v4) == 1 )
      v24 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 236))(v4);
      v25 = MinecraftGame::getEventing(*(MinecraftGame **)(_R4 + 24));
      v31 = ClientInstance::getUserId((ClientInstance *)_R4);
      (*(void (__fastcall **)(int *, int))(*(_DWORD *)v4 + 228))(&v30, v4);
      MinecraftEventing::fireEventScreenChanged(v25, (unsigned int *)&v31, (const char **)&v30, v24);
      v26 = (void *)(v30 - 12);
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v30 - 4);
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
          j_j_j_j_j__ZdlPv_9(v26);
  }
  if ( v6 )
  {
    if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(_R4 + 24)) == _R4 )
      v27 = (Level *)Minecraft::getLevel(*(Minecraft **)(_R4 + 28));
      Level::saveGameData(v27);
}


void __fastcall MinecraftGame::adjustClientsUISizeAndScale(MinecraftGame *this)
{
  MinecraftGame::adjustClientsUISizeAndScale(this);
}


int __fastcall MinecraftGame::getClientInstance(MinecraftGame *this, int a2)
{
  char *v2; // r3@1
  char *v3; // r2@1
  char *v4; // r12@2
  char *v5; // r0@3

  v2 = (char *)*((_DWORD *)this + 55);
  v3 = (char *)this + 216;
  if ( v2 )
  {
    v4 = (char *)this + 216;
    do
    {
      v5 = v2;
      while ( (unsigned __int8)v5[16] < (unsigned int)a2 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 216;
LABEL_10:
  if ( v5 != v3 && (unsigned __int8)v5[16] <= (unsigned int)a2 )
    v3 = v5;
  return *((_DWORD *)v3 + 5);
}


void __fastcall MinecraftGame::onPrimaryUserConnectComplete(int a1, int a2, int a3)
{
  MinecraftGame::onPrimaryUserConnectComplete(a1, a2, a3);
}


void __fastcall MinecraftGame::onPlayerLoaded(MinecraftGame *this, ClientInstance *a2, Player *a3)
{
  MinecraftGame::onPlayerLoaded(this, a2, a3);
}


int *__fastcall MinecraftGame::getScreenName(MinecraftGame *this, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r1@1
  MinecraftGame *v5; // r4@1
  int i; // r0@1
  int v7; // r1@3
  SceneStack *v8; // r0@7
  __int64 *v9; // r1@8
  int v10; // r1@9
  int j; // r0@9

  v2 = a2;
  v3 = a2 + 216;
  v4 = *(_DWORD *)(a2 + 220);
  v5 = this;
  for ( i = v3; v4; v4 = *(_DWORD *)(v4 + 8) )
    i = v4;
  v7 = v3;
  if ( i != v3 )
  {
    if ( *(_BYTE *)(i + 16) )
      i = v3;
    v7 = i;
  }
  v8 = (SceneStack *)ClientInstance::getClientSceneStack(*(ClientInstance **)(v7 + 20));
  if ( SceneStack::isEmpty(v8) == 1 )
    v9 = *(__int64 **)(v2 + 104);
  else
    v10 = *(_DWORD *)(v2 + 220);
    for ( j = v3; v10; v10 = *(_DWORD *)(v10 + 8) )
      j = v10;
    if ( j != v3 && !*(_BYTE *)(j + 16) )
      v3 = j;
    v9 = (__int64 *)ClientInstance::getClientSceneStack(*(ClientInstance **)(v3 + 20));
  return SceneStack::getScreenName(v5, v9);
}


ResourcePackStack *__fastcall MinecraftGame::_buildVanillaClientStartStartupStack(MinecraftGame *this, int a2, int a3)
{
  MinecraftGame *v3; // r6@1
  int v4; // r7@1
  int v5; // r5@1
  ResourcePackStack *v6; // r0@1
  ResourcePackStack *v7; // r4@1
  int v8; // r0@1
  int v9; // r1@1
  int v10; // r1@3
  ResourcePackManager *v11; // r0@5
  ResourcePackStack *result; // r0@5
  ResourcePackStack *v13; // [sp+4h] [bp-10Ch]@5
  char v14; // [sp+8h] [bp-108h]@2
  char v15; // [sp+80h] [bp-90h]@4

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (ResourcePackStack *)operator new(0x14u);
  v7 = v6;
  *(_QWORD *)v6 = (unsigned int)&off_26EAC8C;
  *((_DWORD *)v6 + 2) = 0;
  *((_DWORD *)v6 + 3) = 0;
  *((_DWORD *)v6 + 4) = 0;
  v8 = *((_DWORD *)v3 + 78);
  v9 = *(_DWORD *)(v8 + 32);
  if ( v9 )
  {
    PackInstance::PackInstance((int)&v14, v9, -1, 0);
    ResourcePackStack::add((int)v7, (int)&v14, *((_DWORD *)v3 + 78), 0);
    PackReport::~PackReport((PackReport *)&v14);
    v8 = *((_DWORD *)v3 + 78);
  }
  v10 = *(_DWORD *)(v8 + 36);
  if ( v10 )
    PackInstance::PackInstance((int)&v15, v10, -1, 0);
    ResourcePackStack::add((int)v7, (int)&v15, *((_DWORD *)v3 + 78), 0);
    PackReport::~PackReport((PackReport *)&v15);
  MinecraftGame::_addVanillaMainPacks(v3, v7, v4);
  v11 = (ResourcePackManager *)*((_DWORD *)v3 + 80);
  v13 = v7;
  ResourcePackManager::setStack(v11, (int *)&v13, 3, v5);
  result = v13;
  if ( v13 )
    result = (ResourcePackStack *)(*(int (**)(void))(*(_DWORD *)v13 + 4))();
  return result;
}


Realms::World *__fastcall MinecraftGame::joinRealm(MinecraftGame *this, const Realms::World *a2)
{
  MinecraftGame *v2; // r4@1
  const Realms::World *v3; // r6@1
  int v4; // r4@1
  void *v5; // r7@1
  __int64 v6; // r0@1
  int v7; // ST00_4@1
  void *v8; // r5@1
  __int64 v9; // r0@1
  int v11; // [sp+8h] [bp-180h]@1
  void *v12; // [sp+50h] [bp-138h]@1
  void (*v13)(void); // [sp+58h] [bp-130h]@1
  MinecraftGame *v14; // [sp+60h] [bp-128h]@1
  int v15; // [sp+68h] [bp-120h]@1
  void *v16; // [sp+B0h] [bp-D8h]@1
  void (*v17)(void); // [sp+B8h] [bp-D0h]@1
  __int64 v18; // [sp+C0h] [bp-C8h]@1
  MinecraftGame *v19; // [sp+C8h] [bp-C0h]@1
  int v20; // [sp+D0h] [bp-B8h]@1
  MinecraftGame *v21; // [sp+118h] [bp-70h]@1
  int v22; // [sp+120h] [bp-68h]@1

  v2 = this;
  v3 = a2;
  v21 = this;
  Realms::World::World((Realms::World *)&v22, a2);
  v19 = v2;
  Realms::World::World((Realms::World *)&v20, v3);
  v4 = *((_DWORD *)v2 + 99);
  v18 = *(_QWORD *)v3;
  v14 = v21;
  Realms::World::World((Realms::World *)&v15, (const Realms::World *)&v22);
  v17 = 0;
  v5 = operator new(0x50u);
  *(_DWORD *)v5 = v14;
  Realms::World::World((Realms::World *)((char *)v5 + 8), (const Realms::World *)&v15);
  HIDWORD(v6) = sub_C1ACF4;
  v16 = v5;
  LODWORD(v6) = sub_C1BC0C;
  *(_QWORD *)&v17 = v6;
  v7 = (int)v19;
  Realms::World::World((Realms::World *)&v11, (const Realms::World *)&v20);
  v13 = 0;
  v8 = operator new(0x50u);
  *(_DWORD *)v8 = v7;
  Realms::World::World((Realms::World *)((char *)v8 + 8), (const Realms::World *)&v11);
  LODWORD(v9) = sub_C1BC8A;
  v12 = v8;
  HIDWORD(v9) = sub_C1BC66;
  *(_QWORD *)&v13 = v9;
  RealmsAPI::joinWorld(v4, &v18, (int)&v16, (int)&v12);
  if ( v13 )
    v13();
  Realms::World::~World((Realms::World *)&v11);
  if ( v17 )
    v17();
  Realms::World::~World((Realms::World *)&v15);
  Realms::World::~World((Realms::World *)&v20);
  return Realms::World::~World((Realms::World *)&v22);
}


signed int __fastcall MinecraftGame::transformResolution(MinecraftGame *this, int *a2, int *a3)
{
  int *v3; // r4@1
  signed int result; // r0@3

  v3 = a3;
  if ( MinecraftGame::isKindleFire(this, 1) != 1 || (unsigned int)(*v3 - 560) > 0x3C )
  {
    result = 0;
  }
  else
    *v3 = 580;
    result = 1;
  return result;
}


SoundEngine *__fastcall MinecraftGame::audioEngineOn(MinecraftGame *this)
{
  SoundEngine *result; // r0@1

  result = (SoundEngine *)*((_DWORD *)this + 66);
  if ( result )
    result = j_j_j__ZN11SoundEngine6enableEb(result, 1);
  return result;
}


char *__fastcall MinecraftGame::initOptionObservers(MinecraftGame *this, ClientInstance *a2)
{
  ClientInstance *v2; // r4@1
  MinecraftGame *v3; // r5@1

  v2 = a2;
  v3 = this;
  if ( ClientInstance::isPrimaryClient(a2) == 1 )
    MinecraftGame::_initPerMachineOptionObservers(v3);
  return j_j_j__ZN13MinecraftGame27_initPerUserOptionObserversER14ClientInstance(__PAIR__((unsigned int)v2, (unsigned int)v3));
}


void __fastcall MinecraftGame::setSmoothFontStyle(MinecraftGame *this)
{
  MinecraftGame::setSmoothFontStyle(this);
}


char *__fastcall MinecraftGame::preShutDown(MinecraftGame *this)
{
  MinecraftGame *v1; // r5@1
  char *v2; // r6@1
  int (__fastcall *v3)(void **, void **, int); // r3@1
  char *v4; // r4@1
  char *result; // r0@4
  void *v6; // [sp+0h] [bp-20h]@1
  int (__fastcall *v7)(void **, void **, int); // [sp+8h] [bp-18h]@1
  signed int (__fastcall *v8)(int, ClientInstance *); // [sp+Ch] [bp-14h]@1

  v1 = this;
  v2 = (char *)this + 216;
  v6 = operator new(1u);
  v3 = sub_C1A9C8;
  v7 = sub_C1A9C8;
  v8 = sub_C1A9C2;
  v4 = (char *)*((_DWORD *)v1 + 56);
  if ( v4 == (char *)v1 + 216 )
    goto LABEL_11;
  do
  {
    if ( !v3 )
      sub_DA7654();
    v8((int)&v6, *((ClientInstance **)v4 + 5));
    result = (char *)sub_DA7F5C((int)v4);
    v3 = v7;
    v4 = result;
  }
  while ( result != v2 );
  if ( v7 )
LABEL_11:
    result = (char *)((int (__cdecl *)(void **))v3)(&v6);
  return result;
}


int __fastcall MinecraftGame::onAppFocusGained(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  int result; // r0@1
  int v3; // r7@2
  int v4; // r1@2
  int i; // r0@2
  int v6; // r1@4
  int v7; // r0@8
  void (*v8)(void); // r3@8
  int v9; // r5@8
  int v10; // r0@11
  int v11; // r1@16
  int j; // r0@16
  int v13; // r0@21
  bool v14; // zf@21
  void *v15; // r0@26
  void *v16; // [sp+4h] [bp-24h]@8
  int (__fastcall *v17)(void **, void **, int); // [sp+Ch] [bp-1Ch]@8
  int (__fastcall *v18)(int, ClientInstance *); // [sp+10h] [bp-18h]@8

  v1 = this;
  result = SceneStack::getScheduledPopCount(*((SceneStack **)this + 26));
  if ( result <= 0 )
  {
    v3 = (int)v1 + 216;
    *((_BYTE *)v1 + 444) = 0;
    v4 = *((_DWORD *)v1 + 55);
    for ( i = (int)v1 + 216; v4; v4 = *(_DWORD *)(v4 + 8) )
      i = v4;
    v6 = (int)v1 + 216;
    if ( i != v3 )
    {
      if ( *(_BYTE *)(i + 16) )
        i = (int)v1 + 216;
      v6 = i;
    }
    v7 = ClientInstance::getHoloInput(*(ClientInstance **)(v6 + 20));
    (*(void (**)(void))(*(_DWORD *)v7 + 24))();
    v16 = operator new(1u);
    v8 = (void (*)(void))sub_C1A8A8;
    v17 = sub_C1A8A8;
    v18 = sub_C1A896;
    v9 = *((_DWORD *)v1 + 56);
    if ( v9 == v3 )
      goto LABEL_31;
    do
      if ( !v8 )
        sub_DA7654();
      v18((int)&v16, *(ClientInstance **)(v9 + 20));
      v10 = sub_DA7F5C(v9);
      v8 = (void (*)(void))v17;
      v9 = v10;
    while ( v10 != v3 );
    if ( v17 )
LABEL_31:
      v8();
    v11 = *((_DWORD *)v1 + 55);
    for ( j = (int)v1 + 216; v11; v11 = *(_DWORD *)(v11 + 8) )
      j = v11;
    if ( j != v3 && !*(_BYTE *)(j + 16) )
      v3 = j;
    v13 = ClientInstance::getScreen(*(ClientInstance **)(v3 + 20));
    result = (*(int (**)(void))(*(_DWORD *)v13 + 172))();
    v14 = result == 1;
    if ( result == 1 )
      result = *((_BYTE *)v1 + 112);
      v14 = result == 0;
    if ( v14 )
      *((_BYTE *)v1 + 112) = 1;
      if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
        v15 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      else
        v15 = &ServiceLocator<AppPlatform>::mDefaultService;
      result = (*(int (**)(void))(**(_DWORD **)v15 + 72))();
  }
  return result;
}


int __fastcall MinecraftGame::getPrimaryGuiData(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  return ClientInstance::getGuiData(*((ClientInstance **)v2 + 5));
}


int __fastcall MinecraftGame::getPrimaryLocalPlayer(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  return j_j_j__ZN14ClientInstance14getLocalPlayerEv(*((ClientInstance **)v2 + 5));
}


void __fastcall MinecraftGame::getScreenNames(MinecraftGame *this, int a2)
{
  MinecraftGame::getScreenNames(this, a2);
}


int __fastcall MinecraftGame::_initMinecraftGame(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  void *v2; // r0@2
  int *v3; // r6@4
  void *v4; // r0@4
  _DWORD *v5; // r5@4
  DevAssertListenerCollection *v6; // r0@4
  _DWORD *v7; // r5@6
  _DWORD *v8; // r0@6
  void (*v9)(void); // r3@8
  int v10; // r5@8
  int v11; // r0@11
  int v12; // r5@16
  void (*v13)(void); // r3@17
  int v14; // r7@17
  int v15; // r5@20
  void (*v16)(void); // r3@21
  int v17; // r6@21
  PixelCalc *v18; // r5@24
  void *v19; // r0@24
  AppPlatform **v20; // r0@27
  char v21; // r5@29
  void *v22; // r6@29
  CachedScenes *v23; // r0@29
  CachedScenes *v24; // r0@30
  void *v25; // r5@31
  SceneStack *v26; // r0@31
  SceneStack *v27; // r0@32
  _DWORD *v28; // r0@33
  __int64 v29; // r1@33
  int v30; // r5@35
  _DWORD *v31; // r0@35
  int v32; // r5@37
  _DWORD *v33; // r0@37
  _DWORD *v35; // [sp+0h] [bp-58h]@37
  void (*v36)(void); // [sp+8h] [bp-50h]@37
  void (__fastcall *v37)(int **, int, int); // [sp+Ch] [bp-4Ch]@37
  _DWORD *v38; // [sp+10h] [bp-48h]@35
  void (*v39)(void); // [sp+18h] [bp-40h]@35
  void (__fastcall *v40)(int **, int); // [sp+1Ch] [bp-3Ch]@35
  _DWORD *v41; // [sp+20h] [bp-38h]@33
  __int64 v42; // [sp+28h] [bp-30h]@33
  void *v43; // [sp+30h] [bp-28h]@8
  int (__fastcall *v44)(void **, void **, int); // [sp+38h] [bp-20h]@8
  int (__fastcall *v45)(int, ClientInstance *); // [sp+3Ch] [bp-1Ch]@8
  _DWORD *v46; // [sp+40h] [bp-18h]@6

  v1 = this;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  v3 = (int *)(*(int (**)(void))(**(_DWORD **)v2 + 296))();
  v4 = operator new(0x18u);
  v5 = v4;
  *(_DWORD *)v4 = &off_26D65D4;
  sub_DA73B4((int *)v4 + 1, v3);
  v5[2] = &off_26D6614;
  v5[3] = &off_26D662C;
  v5[4] = &off_26D663C;
  v5[5] = &off_26D6650;
  v6 = (DevAssertListenerCollection *)*((_DWORD *)v1 + 103);
  *((_DWORD *)v1 + 103) = v5;
  if ( v6 )
    v6 = (DevAssertListenerCollection *)(*(int (**)(void))(*(_DWORD *)v6 + 4))();
  v7 = DevAssertListenerCollection::get(v6);
  v8 = operator new(8u);
  *v8 = &off_26DF3A4;
  v8[1] = v1;
  v46 = v8;
  DevAssertListenerCollection::add((int)v7, (int *)&v46);
  if ( v46 )
    (*(void (**)(void))(*v46 + 4))();
  v46 = 0;
  __dmb();
  *((_BYTE *)v1 + 656) = 0;
  *((_BYTE *)v1 + 697) = 0;
  v43 = operator new(1u);
  v9 = (void (*)(void))sub_C141EE;
  v44 = sub_C141EE;
  v45 = sub_C141E8;
  v10 = *((_DWORD *)v1 + 56);
  if ( (MinecraftGame *)v10 == (MinecraftGame *)((char *)v1 + 216) )
    goto LABEL_42;
  do
  {
    if ( !v9 )
      sub_DA7654();
    v45((int)&v43, *(ClientInstance **)(v10 + 20));
    v11 = sub_DA7F5C(v10);
    v9 = (void (*)(void))v44;
    v10 = v11;
  }
  while ( (MinecraftGame *)v11 != (MinecraftGame *)((char *)v1 + 216) );
  if ( v44 )
LABEL_42:
    v9();
  *((_BYTE *)v1 + 113) = 0;
  v12 = *((_DWORD *)v1 + 32);
  if ( v12 )
    do
    {
      v13 = *(void (**)(void))(v12 + 16);
      v14 = *(_DWORD *)v12;
      if ( v13 )
        v13();
      operator delete((void *)v12);
      v12 = v14;
    }
    while ( v14 );
  _aeabi_memclr4(*((_QWORD *)v1 + 15), 4 * (*((_QWORD *)v1 + 15) >> 32));
  *((_DWORD *)v1 + 32) = 0;
  *((_DWORD *)v1 + 33) = 0;
  v15 = *((_DWORD *)v1 + 39);
  if ( v15 )
      v16 = *(void (**)(void))(v15 + 16);
      v17 = *(_DWORD *)v15;
      if ( v16 )
        v16();
      operator delete((void *)v15);
      v15 = v17;
    while ( v17 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 148), 4 * (*(_QWORD *)((char *)v1 + 148) >> 32));
  *((_DWORD *)v1 + 39) = 0;
  *((_DWORD *)v1 + 40) = 0;
  *((_BYTE *)v1 + 488) = 0;
  *((_BYTE *)v1 + 489) = 0;
  *((_BYTE *)v1 + 444) = 0;
  v18 = (PixelCalc *)operator new(8u);
  PixelCalc::PixelCalc(v18, 1.0);
  v19 = (void *)*((_DWORD *)v1 + 113);
  *((_DWORD *)v1 + 113) = v18;
  if ( v19 )
    operator delete(v19);
  *((_DWORD *)v1 + 118) = 0;
  *((_DWORD *)v1 + 119) = 0;
  *((_DWORD *)v1 + 123) = -1;
  *((_DWORD *)v1 + 124) = -1;
  *((_WORD *)v1 + 254) = 0;
  *((_BYTE *)v1 + 528) = 0;
    v20 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v20 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v21 = AppPlatform::isLowMemoryDevice(*v20);
  v22 = operator new(0x20u);
  CachedScenes::CachedScenes((int)v22, v21);
  v23 = (CachedScenes *)*((_DWORD *)v1 + 27);
  *((_DWORD *)v1 + 27) = v22;
  if ( v23 )
    v24 = CachedScenes::~CachedScenes(v23);
    operator delete((void *)v24);
    v22 = (void *)*((_DWORD *)v1 + 27);
  v25 = operator new(0x60u);
  SceneStack::SceneStack((int)v25, (unsigned int)v22);
  v26 = (SceneStack *)*((_DWORD *)v1 + 26);
  *((_DWORD *)v1 + 26) = v25;
  if ( v26 )
    v27 = SceneStack::~SceneStack(v26);
    operator delete((void *)v27);
    v25 = (void *)*((_DWORD *)v1 + 26);
  v28 = operator new(4u);
  LODWORD(v29) = sub_C143F0;
  *v28 = v1;
  HIDWORD(v29) = sub_C1421C;
  v41 = v28;
  v42 = v29;
  SceneStack::setPrePushScreenCallback((int)v25, (int)&v41);
  if ( (_DWORD)v42 )
    ((void (*)(void))v42)();
  v30 = *((_DWORD *)v1 + 26);
  v31 = operator new(4u);
  *v31 = v1;
  v38 = v31;
  v39 = (void (*)(void))sub_C1470C;
  v40 = sub_C14470;
  SceneStack::setPushScreenCallback(v30, (int)&v38);
  if ( v39 )
    v39();
  v32 = *((_DWORD *)v1 + 26);
  v33 = operator new(4u);
  *v33 = v1;
  v35 = v33;
  v36 = (void (*)(void))sub_C149DC;
  v37 = sub_C14744;
  SceneStack::setPopCallback(v32, (int)&v35);
  if ( v36 )
    v36();
  return bsd_signal(13, 1);
}


signed int __fastcall MinecraftGame::isLeaveGameDone(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  char *v2; // r6@1
  int i; // r5@1
  signed int result; // r0@5
  ServerInstance *v5; // r0@6

  v1 = this;
  v2 = (char *)this + 216;
  for ( i = *((_DWORD *)this + 56); (char *)i != v2; i = sub_DA7FEC(i) )
  {
    if ( ClientInstance::isLeaveGameDone(*(ClientInstance **)(i + 20)) != 1 )
      return 0;
  }
  v5 = (ServerInstance *)*((_DWORD *)v1 + 50);
  if ( v5 )
    result = ServerInstance::isLeaveGameDone(v5);
  else
    result = 1;
  return result;
}


int __fastcall MinecraftGame::setHoloscreenHalfWidth(MinecraftGame *this, float _R1)
{
  int result; // r0@1

  result = *((_DWORD *)this + 13);
  if ( result )
  {
    __asm
    {
      VMOVNE          S0, R1
      VSTRNE          S0, [R0,#8]
    }
  }
  return result;
}


void __fastcall MinecraftGame::initializeTrialWorld(MinecraftGame *this, Player *a2)
{
  MinecraftGame *v2; // r5@1
  Entity *v3; // r8@1
  int *v4; // r4@3
  __int64 v5; // kr00_8@4
  int v6; // r6@4
  int v7; // r0@4
  int v8; // r0@4
  int v9; // r0@5
  int v10; // r0@5
  BlockSource *v11; // r0@5
  int v12; // r7@5
  Entity *v13; // r9@5
  void *v14; // r8@5
  int v15; // r6@5
  int v16; // r7@36
  void *v17; // r5@36
  int v18; // r0@38
  int v19; // r0@38
  int v20; // r0@38
  int v21; // r0@38
  int v22; // r0@38
  int v23; // r0@38
  int v24; // r0@38
  int v25; // r0@38
  void *v26; // r5@39
  void *v27; // r0@40
  void *v28; // r0@42
  int v29; // r0@44
  char v30; // [sp+10h] [bp-228h]@38
  char v31; // [sp+14h] [bp-224h]@38
  char v32; // [sp+18h] [bp-220h]@38
  char v33; // [sp+1Ch] [bp-21Ch]@38
  char v34; // [sp+20h] [bp-218h]@5
  int v35; // [sp+28h] [bp-210h]@33
  void *v36; // [sp+44h] [bp-1F4h]@31
  void *v37; // [sp+54h] [bp-1E4h]@29
  int v38; // [sp+68h] [bp-1D0h]@5
  int v39; // [sp+70h] [bp-1C8h]@27
  void *v40; // [sp+8Ch] [bp-1ACh]@25
  void *v41; // [sp+9Ch] [bp-19Ch]@23
  int v42; // [sp+B0h] [bp-188h]@5
  int v43; // [sp+B8h] [bp-180h]@21
  void *v44; // [sp+D4h] [bp-164h]@19
  void *v45; // [sp+E4h] [bp-154h]@17
  int v46; // [sp+F8h] [bp-140h]@5
  int v47; // [sp+100h] [bp-138h]@15
  void *v48; // [sp+11Ch] [bp-11Ch]@13
  void *v49; // [sp+12Ch] [bp-10Ch]@11
  int v50; // [sp+140h] [bp-F8h]@5
  int v51; // [sp+148h] [bp-F0h]@9
  void *v52; // [sp+164h] [bp-D4h]@7
  void *ptr; // [sp+174h] [bp-C4h]@5
  int v54; // [sp+188h] [bp-B0h]@5
  char v55; // [sp+18Ch] [bp-ACh]@5
  char v56; // [sp+190h] [bp-A8h]@5
  char v57; // [sp+194h] [bp-A4h]@4
  char v58; // [sp+198h] [bp-A0h]@4
  int v59; // [sp+19Ch] [bp-9Ch]@3
  int v60; // [sp+1A0h] [bp-98h]@3
  int v61; // [sp+1A4h] [bp-94h]@3
  signed int v62; // [sp+1A8h] [bp-90h]@3
  signed int v63; // [sp+1ACh] [bp-8Ch]@3
  int v64; // [sp+1B0h] [bp-88h]@3
  signed int v65; // [sp+1B4h] [bp-84h]@3
  signed int v66; // [sp+1B8h] [bp-80h]@3
  signed int v67; // [sp+1BCh] [bp-7Ch]@3
  signed int v68; // [sp+1C0h] [bp-78h]@3
  int v69; // [sp+1C4h] [bp-74h]@3
  signed int v70; // [sp+1C8h] [bp-70h]@3
  signed int v71; // [sp+1CCh] [bp-6Ch]@3
  int v72; // [sp+1D0h] [bp-68h]@3
  signed int v73; // [sp+1D4h] [bp-64h]@3
  signed int v74; // [sp+1D8h] [bp-60h]@3
  __int64 v75; // [sp+1DCh] [bp-5Ch]@3
  signed int v76; // [sp+1E4h] [bp-54h]@3
  __int64 v77; // [sp+1E8h] [bp-50h]@3
  signed int v78; // [sp+1F0h] [bp-48h]@3
  __int64 v79; // [sp+1F4h] [bp-44h]@3
  signed int v80; // [sp+1FCh] [bp-3Ch]@3
  __int64 v81; // [sp+200h] [bp-38h]@3
  signed int v82; // [sp+208h] [bp-30h]@3
  signed __int64 v83; // [sp+20Ch] [bp-2Ch]@3
  int v84; // [sp+214h] [bp-24h]@4

  v2 = this;
  v3 = a2;
  if ( *((_BYTE *)this + 508) && OfferRepository::isTrial(*((OfferRepository **)this + 74)) == 1 )
  {
    *((_BYTE *)v2 + 508) = 0;
    v59 = 1040;
    v60 = 66;
    v4 = &v59;
    v61 = -29;
    v62 = 1041;
    v63 = 66;
    v64 = -29;
    v65 = 1042;
    v66 = 66;
    v67 = -29;
    v68 = 1040;
    v69 = 66;
    v70 = -30;
    v71 = 1041;
    v72 = 66;
    v73 = -30;
    v74 = 1042;
    v75 = -128849018814LL;
    v76 = 1043;
    v77 = -128849018814LL;
    v78 = 1041;
    v79 = -133143986110LL;
    v80 = 1042;
    v81 = -133143986110LL;
    v82 = 1043;
    v83 = -133143986110LL;
    do
    {
      v5 = *(_QWORD *)v4;
      v6 = v4[2];
      v7 = Entity::getRegion(v3);
      v58 = *(_BYTE *)(Block::mGrass + 4);
      BlockSource::setBlock(v7, v5, SHIDWORD(v5), v6, &v58, 0);
      v8 = Entity::getRegion(v3);
      v57 = *(_BYTE *)(Block::mDirt + 4);
      BlockSource::setBlock(v8, v5, HIDWORD(v5) - 1, v6, &v57, 0);
      v4 += 3;
    }
    while ( v4 != &v84 );
    v9 = Entity::getRegion(v3);
    v56 = *(_BYTE *)(Block::mTorch + 4);
    BlockSource::setBlock(v9, 1041, 67, -30, &v56, 0);
    v10 = Entity::getRegion(v3);
    v55 = *(_BYTE *)(Block::mChest + 4);
    BlockSource::setBlockAndData(v10, 1042, 67, -30, &v55, 2, 0);
    v11 = (BlockSource *)Entity::getRegion(v3);
    v12 = BlockSource::getBlockEntity(v11, 1042, 67, -30);
    ItemInstance::ItemInstance((ItemInstance *)&v34, Item::mHatchet_wood, 1);
    v13 = v3;
    ItemInstance::ItemInstance((ItemInstance *)&v38, Item::mShovel_wood, 1);
    ItemInstance::ItemInstance((ItemInstance *)&v42, Item::mSword_wood, 1);
    ItemInstance::ItemInstance((ItemInstance *)&v46, Item::mString, 3);
    ItemInstance::ItemInstance((ItemInstance *)&v50, Item::mApple, 1);
    v14 = operator new(0x168u);
    v15 = std::__uninitialized_copy<false>::__uninit_copy<ItemInstance const*,ItemInstance*>(
            (int)&v34,
            (int)&v54,
            (int)v14);
    if ( ptr )
      operator delete(ptr);
    if ( v52 )
      operator delete(v52);
    if ( v51 )
      (*(void (**)(void))(*(_DWORD *)v51 + 4))();
    v51 = 0;
    if ( v49 )
      operator delete(v49);
    if ( v48 )
      operator delete(v48);
    if ( v47 )
      (*(void (**)(void))(*(_DWORD *)v47 + 4))();
    v47 = 0;
    if ( v45 )
      operator delete(v45);
    if ( v44 )
      operator delete(v44);
    if ( v43 )
      (*(void (**)(void))(*(_DWORD *)v43 + 4))();
    v43 = 0;
    if ( v41 )
      operator delete(v41);
    if ( v40 )
      operator delete(v40);
    if ( v39 )
      (*(void (**)(void))(*(_DWORD *)v39 + 4))();
    v39 = 0;
    if ( v37 )
      operator delete(v37);
    if ( v36 )
      operator delete(v36);
    if ( v35 )
      (*(void (**)(void))(*(_DWORD *)v35 + 4))();
    v35 = 0;
    if ( v14 != (void *)v15 )
      v16 = v12 + 112;
      v17 = v14;
      do
      {
        (*(void (__fastcall **)(int, void *, signed int))(*(_DWORD *)v16 + 116))(v16, v17, 1);
        v17 = (char *)v17 + 72;
      }
      while ( (void *)v15 != v17 );
    v18 = Entity::getRegion(v13);
    v33 = BlockID::AIR;
    BlockSource::setBlock(v18, 1029, 64, -12, &v33, 0);
    v19 = Entity::getRegion(v13);
    BlockSource::setBlock(v19, 1029, 64, -13, &v33, 0);
    v20 = Entity::getRegion(v13);
    BlockSource::setBlock(v20, 1029, 63, -12, &v33, 0);
    v21 = Entity::getRegion(v13);
    BlockSource::setBlock(v21, 1029, 63, -14, &v33, 0);
    v22 = Entity::getRegion(v13);
    BlockSource::setBlock(v22, 1029, 62, -13, &v33, 0);
    v23 = Entity::getRegion(v13);
    v32 = *(_BYTE *)(Block::mGrass + 4);
    BlockSource::setBlock(v23, 1029, 62, -12, &v32, 0);
    v24 = Entity::getRegion(v13);
    v31 = *(_BYTE *)(Block::mGrass + 4);
    BlockSource::setBlock(v24, 1029, 61, -13, &v31, 0);
    v25 = Entity::getRegion(v13);
    v30 = *(_BYTE *)(Block::mTorch + 4);
    BlockSource::setBlock(v25, 1029, 63, -13, &v30, 0);
      v26 = v14;
        v27 = (void *)*((_DWORD *)v26 + 13);
        if ( v27 )
          operator delete(v27);
        v28 = (void *)*((_DWORD *)v26 + 9);
        if ( v28 )
          operator delete(v28);
        v29 = *((_DWORD *)v26 + 2);
        if ( v29 )
          (*(void (**)(void))(*(_DWORD *)v29 + 4))();
        *((_DWORD *)v26 + 2) = 0;
        v26 = (char *)v26 + 72;
      while ( (void *)v15 != v26 );
    if ( v14 )
      operator delete(v14);
  }
}


BackgroundTask *__fastcall MinecraftGame::initFoliageAndBlockTextureTessellator(MinecraftGame *this)
{
  MinecraftGame *v1; // r10@1
  int v2; // r8@1
  void *v3; // r0@1
  __int64 v4; // kr00_8@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  _DWORD *v7; // r0@7
  __int64 v8; // r1@7
  __int64 v9; // kr08_8@13
  int v10; // r6@13
  unsigned int *v11; // r0@14
  unsigned int v12; // r1@16
  _DWORD *v13; // r0@19
  __int64 v14; // r1@19
  BackgroundTask *result; // r0@19
  int v16; // r4@23
  unsigned int *v17; // r1@24
  unsigned int *v18; // r5@30
  char v19; // [sp+8h] [bp-4Ch]@19
  int (*v20)(void); // [sp+10h] [bp-44h]@19
  _DWORD *v21; // [sp+18h] [bp-3Ch]@19
  __int64 v22; // [sp+20h] [bp-34h]@19
  _DWORD *v23; // [sp+28h] [bp-2Ch]@7
  __int64 v24; // [sp+30h] [bp-24h]@7
  char v25; // [sp+38h] [bp-1Ch]@7
  void (*v26)(void); // [sp+40h] [bp-14h]@1
  void *ptr; // [sp+48h] [bp-Ch]@1
  char *v28; // [sp+4Ch] [bp-8h]@1
  char *v29; // [sp+50h] [bp-4h]@1
  int v30; // [sp+54h] [bp+0h]@1
  int v31; // [sp+58h] [bp+4h]@1

  v1 = this;
  j__ZNSt12__shared_ptrISt13unordered_mapI16ResourceLocationPKN3mce11ImageBufferESt4hashIS1_ESt8equal_toIS1_ESaISt4pairIKS1_S5_EEELN9__gnu_cxx12_Lock_policyE2EEC2ISaISE_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v30);
  v2 = *((_DWORD *)v1 + 165);
  v3 = operator new(8u);
  ptr = v3;
  v29 = (char *)v3 + 8;
  *(_DWORD *)v3 = 128;
  *((_DWORD *)v3 + 1) = 16;
  v28 = (char *)v3 + 8;
  v26 = 0;
  v4 = *(_QWORD *)&v30;
  if ( v31 )
  {
    v5 = (unsigned int *)(v31 + 4);
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
  v7 = operator new(0xCu);
  LODWORD(v8) = sub_C2281C;
  *v7 = v1;
  v7[1] = v4;
  HIDWORD(v8) = sub_C22710;
  v7[2] = HIDWORD(v4);
  v23 = v7;
  v24 = v8;
  ResourceLoadManager::loadResource(v2, 256, (unsigned __int64 *)&ptr, (int)&v25, (int)&v23);
  if ( (_DWORD)v24 )
    ((void (*)(void))v24)();
  if ( v26 )
    v26();
  if ( ptr )
    operator delete(ptr);
  v9 = *(_QWORD *)&v30;
  v10 = *((_DWORD *)v1 + 165);
    v11 = (unsigned int *)(v31 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      ++*v11;
  v13 = operator new(0xCu);
  LODWORD(v14) = sub_C22CD8;
  *v13 = v1;
  v13[1] = v9;
  HIDWORD(v14) = sub_C22CBC;
  v13[2] = HIDWORD(v9);
  v21 = v13;
  v22 = v14;
  v20 = 0;
  result = ResourceLoadManager::loadResource(v10, 0x40000000, 256, (int)&v21, (int)&v19);
  if ( v20 )
    result = (BackgroundTask *)v20();
  if ( (_DWORD)v22 )
    result = (BackgroundTask *)((int (*)(void))v22)();
  v16 = v31;
    v17 = (unsigned int *)(v31 + 4);
        result = (BackgroundTask *)__ldrex(v17);
      while ( __strex((unsigned int)result - 1, v17) );
      result = (BackgroundTask *)(*v17)--;
    if ( result == (BackgroundTask *)1 )
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (BackgroundTask *)__ldrex(v18);
        while ( __strex((unsigned int)result - 1, v18) );
      }
      else
        result = (BackgroundTask *)(*v18)--;
      if ( result == (BackgroundTask *)1 )
        result = (BackgroundTask *)(*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return result;
}


void __fastcall MinecraftGame::setupCommandParser(MinecraftGame *this)
{
  MinecraftGame::setupCommandParser(this);
}


signed int __fastcall MinecraftGame::registerUpsellScreen(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  signed int result; // r0@1
  int v3; // r1@2
  int v4; // r5@2
  int i; // r0@2
  int v6; // r1@4
  int v7; // r1@9
  int j; // r0@9
  int v9; // r5@14
  int (__fastcall *v10)(int, _DWORD **); // r6@14
  _DWORD *v11; // r0@14
  __int64 v12; // r1@14
  _DWORD *v13; // [sp+0h] [bp-20h]@14
  __int64 v14; // [sp+8h] [bp-18h]@14

  v1 = this;
  result = OfferRepository::isTrial(*((OfferRepository **)this + 74));
  if ( result == 1 )
  {
    v3 = *((_DWORD *)v1 + 55);
    v4 = (int)v1 + 216;
    for ( i = (int)v1 + 216; v3; v3 = *(_DWORD *)(v3 + 8) )
      i = v3;
    v6 = (int)v1 + 216;
    if ( i != v4 )
    {
      if ( *(_BYTE *)(i + 16) )
        i = (int)v1 + 216;
      v6 = i;
    }
    result = ClientInstance::getLocalPlayer(*(ClientInstance **)(v6 + 20));
    if ( result )
      v7 = *((_DWORD *)v1 + 55);
      for ( j = (int)v1 + 216; v7; v7 = *(_DWORD *)(v7 + 8) )
        j = v7;
      if ( j != v4 && !*(_BYTE *)(j + 16) )
        v4 = j;
      v9 = *(_DWORD *)(ClientInstance::getLocalPlayer(*(ClientInstance **)(v4 + 20)) + 5172);
      v10 = *(int (__fastcall **)(int, _DWORD **))(*(_DWORD *)v9 + 76);
      v11 = operator new(0xCu);
      LODWORD(v12) = std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<void (MinecraftGame::*)(bool)> ()(MinecraftGame*,std::_Placeholder<1>)>>::_M_manager;
      HIDWORD(v12) = std::_Function_handler<void ()(bool),std::_Bind<std::_Mem_fn<void (MinecraftGame::*)(bool)> ()(MinecraftGame*,std::_Placeholder<1>)>>::_M_invoke;
      *v11 = MinecraftGame::handleShowUpsellScreen;
      v11[1] = 0;
      v11[2] = v1;
      v13 = v11;
      v14 = v12;
      result = v10(v9, &v13);
      if ( (_DWORD)v14 )
        result = ((int (__cdecl *)(_DWORD **))v14)(&v13);
  }
  return result;
}


void __fastcall MinecraftGame::_joinServerInstanceThread(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  _QWORD *v2; // r5@2
  int v3; // r0@4
  unsigned int *v4; // r0@7
  unsigned int v5; // r1@8
  pthread_t *v6; // r5@10
  int v7; // r5@13
  int v8; // r5@15
  pthread_t v9; // [sp+4h] [bp-14h]@2

  v1 = this;
  if ( *((_DWORD *)this + 175) )
  {
    __dmb();
    *((_BYTE *)this + 697) = 0;
    Semaphore::notify(*((pthread_mutex_t **)this + 176));
    Semaphore::wait(*((pthread_mutex_t **)v1 + 177));
    sub_DA7424(*((pthread_t **)v1 + 175));
    v9 = pthread_self();
    ASSIGN_SERVER_THREAD((int *)&v9);
    v2 = (_QWORD *)RandomThreadCheckManager::mInstance;
    if ( RandomThreadCheckManager::mInstance )
      goto LABEL_21;
    if ( ServiceLocator<AppPlatform>::mDefaultService )
    {
      v2 = operator new(0xCu);
      AppPlatformListener::AppPlatformListener(v2);
      *(_DWORD *)v2 = &off_26D6730;
      *((_DWORD *)v2 + 2) = 0;
      v3 = RandomThreadCheckManager::mInstance;
      RandomThreadCheckManager::mInstance = v2;
      if ( v3 )
      {
        (*(void (**)(void))(*(_DWORD *)v3 + 4))();
        v2 = (_QWORD *)RandomThreadCheckManager::mInstance;
      }
      if ( v2 )
LABEL_21:
        v4 = (unsigned int *)(v2 + 1);
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 + 1, v4) );
    }
    v6 = (pthread_t *)*((_DWORD *)v1 + 175);
    *((_DWORD *)v1 + 175) = 0;
    if ( v6 )
      if ( !pthread_equal(*v6, 0) )
        std::terminate();
      operator delete(v6);
    v7 = *((_DWORD *)v1 + 177);
    *((_DWORD *)v1 + 177) = 0;
    if ( v7 )
      sub_DA7F4C((pthread_cond_t *)(v7 + 4));
      operator delete((void *)v7);
    v8 = *((_DWORD *)v1 + 176);
    *((_DWORD *)v1 + 176) = 0;
    if ( v8 )
      sub_DA7F4C((pthread_cond_t *)(v8 + 4));
      operator delete((void *)v8);
  }
}


char *__fastcall MinecraftGame::getClientInstanceMap(MinecraftGame *this)
{
  return (char *)this + 212;
}


int __fastcall MinecraftGame::setPrimaryLocalPlayer(MinecraftGame *this, LocalPlayer *a2)
{
  int v2; // r3@1
  char *v3; // r0@1
  char *i; // r2@1

  v2 = *((_DWORD *)this + 55);
  v3 = (char *)this + 216;
  for ( i = v3; v2; v2 = *(_DWORD *)(v2 + 8) )
    i = (char *)v2;
  if ( i != v3 && !i[16] )
    v3 = i;
  return j_j_j__ZN14ClientInstance9setPlayerEP11LocalPlayer(*((ClientInstance **)v3 + 5), a2);
}


int __fastcall MinecraftGame::_enableServerInstanceThread(MinecraftGame *this, int a2)
{
  MinecraftGame *v2; // r4@1
  char v3; // r0@1
  int result; // r0@1
  char v5; // r1@2
  void *v6; // r5@7
  int v7; // r6@7
  void *v8; // r5@9
  int v9; // r6@9
  pthread_t *v10; // r6@11
  pthread_t *v11; // r5@11
  _QWORD *v12; // r5@14
  int v13; // r0@16
  unsigned int *v14; // r0@19
  unsigned int v15; // r1@20
  int v16; // [sp+4h] [bp-24h]@22
  int v17; // [sp+8h] [bp-20h]@22
  MinecraftGame *v18; // [sp+Ch] [bp-1Ch]@11
  int (__fastcall *v19)(MinecraftGame *); // [sp+10h] [bp-18h]@11
  int v20; // [sp+14h] [bp-14h]@11

  v2 = this;
  v3 = *((_BYTE *)this + 697);
  __dmb();
  result = v3 & 1;
  if ( result != a2 )
  {
    __dmb();
    *((_BYTE *)v2 + 697) = a2;
    v5 = *((_BYTE *)v2 + 697);
    result = *((_DWORD *)v2 + 175);
    if ( v5 & 1 )
    {
      if ( !result )
      {
        v6 = operator new(0xCu);
        Semaphore::Semaphore((int)v6);
        v7 = *((_DWORD *)v2 + 176);
        *((_DWORD *)v2 + 176) = v6;
        if ( v7 )
        {
          sub_DA7F4C((pthread_cond_t *)(v7 + 4));
          operator delete((void *)v7);
        }
        v8 = operator new(0xCu);
        Semaphore::Semaphore((int)v8);
        v9 = *((_DWORD *)v2 + 177);
        *((_DWORD *)v2 + 177) = v8;
        if ( v9 )
          sub_DA7F4C((pthread_cond_t *)(v9 + 4));
          operator delete((void *)v9);
        v18 = v2;
        v19 = MinecraftGame::_runServerInstanceThread;
        v20 = 0;
        v10 = (pthread_t *)operator new(4u);
        std::thread::thread<void (MinecraftGame::*)(void),MinecraftGame*>(v10, (__int64 *)&v19, (int *)&v18);
        v11 = (pthread_t *)*((_DWORD *)v2 + 175);
        *((_DWORD *)v2 + 175) = v10;
        if ( v11 )
          if ( !pthread_equal(*v11, 0) )
            std::terminate();
          operator delete(v11);
        v12 = (_QWORD *)RandomThreadCheckManager::mInstance;
        if ( RandomThreadCheckManager::mInstance )
          goto LABEL_26;
        if ( ServiceLocator<AppPlatform>::mDefaultService )
          v12 = operator new(0xCu);
          AppPlatformListener::AppPlatformListener(v12);
          *(_DWORD *)v12 = &off_26D6730;
          *((_DWORD *)v12 + 2) = 0;
          v13 = RandomThreadCheckManager::mInstance;
          RandomThreadCheckManager::mInstance = v12;
          if ( v13 )
          {
            (*(void (**)(void))(*(_DWORD *)v13 + 4))();
            v12 = (_QWORD *)RandomThreadCheckManager::mInstance;
          }
          if ( v12 )
LABEL_26:
            v14 = (unsigned int *)(v12 + 1);
            __dmb();
            do
              v15 = __ldrex(v14);
            while ( __strex(v15 + 1, v14) );
        v17 = **((_DWORD **)v2 + 175);
        v16 = 0;
        ThreadUtil::setThreadPriority((pthread_t *)&v17, (pthread_t **)&v16);
        result = ServerInstance::onStandaloneThreadEnabled(*((ServerInstance **)v2 + 50), 1);
      }
    }
    else if ( result )
      MinecraftGame::_joinServerInstanceThread(v2);
      result = j_j_j__ZN14ServerInstance25onStandaloneThreadEnabledEb(*((ServerInstance **)v2 + 50), 0);
  }
  return result;
}


void __fastcall MinecraftGame::runRegionalOfferChecks(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  char *v2; // r5@1
  int v3; // r1@1
  char *i; // r0@1
  char *v5; // r1@3
  int v6; // r0@7
  int v7; // r1@8
  char *j; // r0@8
  int v9; // r0@13
  void *v10; // r0@15
  unsigned int v11; // r10@19
  char *v12; // r2@19
  __int64 v13; // r0@21
  unsigned int v14; // r6@21
  char *v15; // r0@24
  void *v16; // r0@28
  char *v17; // r0@30
  unsigned int *v18; // r2@32
  signed int v19; // r1@34
  char *k; // [sp+8h] [bp-30h]@19

  v1 = this;
  v2 = (char *)this + 216;
  v3 = *((_DWORD *)this + 55);
  for ( i = (char *)this + 216; v3; v3 = *(_DWORD *)(v3 + 8) )
    i = (char *)v3;
  v5 = v2;
  if ( i != v2 )
  {
    if ( i[16] )
      i = v2;
    v5 = i;
  }
  v6 = ClientInstance::getHoloInput(*((ClientInstance **)v5 + 5));
  if ( !(*(int (**)(void))(*(_DWORD *)v6 + 44))() )
    v7 = *((_DWORD *)v1 + 55);
    for ( j = v2; v7; v7 = *(_DWORD *)(v7 + 8) )
      j = (char *)v7;
    if ( j != v2 && !j[16] )
      v2 = j;
    v9 = ClientInstance::getHoloInput(*((ClientInstance **)v2 + 5));
    if ( !(*(int (**)(void))(*(_DWORD *)v9 + 76))() )
    {
      v10 = *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) ? ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) : &ServiceLocator<AppPlatform>::mDefaultService;
      if ( !(*(int (**)(void))(**(_DWORD **)v10 + 560))()
        && Social::MultiplayerServiceManager::getInRegionPage(*((Social::MultiplayerServiceManager **)v1 + 87)) == 1 )
      {
        Social::MultiplayerServiceManager::setInRegionPage(*((Social::MultiplayerServiceManager **)v1 + 87), 0);
        v11 = 0;
        v12 = (char *)&unk_28898CC;
        for ( k = (char *)&unk_28898CC; ; v12 = k )
        {
          v13 = *(_QWORD *)(v12 - 12);
          v14 = v13 + 1;
          if ( (unsigned int)(v13 + 1) > HIDWORD(v13) || *((_DWORD *)v12 - 1) >= 1 )
          {
            sub_DA7404((const void **)&k, v14);
            v12 = k;
            LODWORD(v13) = *((_DWORD *)k - 3);
          }
          v12[v13] = aISeeThePlayerY[v11 % 0x1B] ^ byte_262C0C8[v11];
          v15 = k;
          if ( (int *)(k - 12) != &dword_28898C0 )
            *((_DWORD *)k - 1) = 0;
            *((_DWORD *)v15 - 3) = v14;
            v15[v14] = byte_26C67B8[0];
          if ( ++v11 > 0x30 )
            break;
        }
        MinecraftEventing::fireEventRegionalPopupShown(*((MinecraftEventing **)v1 + 126));
        if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
          v16 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
        else
          v16 = &ServiceLocator<AppPlatform>::mDefaultService;
        (*(void (**)(void))(**(_DWORD **)v16 + 420))();
        v17 = k - 12;
        if ( (int *)(k - 12) != &dword_28898C0 )
          v18 = (unsigned int *)(k - 4);
          if ( &pthread_create )
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          else
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j_j__ZdlPv_9(v17);
      }
    }
}


void __fastcall MinecraftGame::getResourcePackProgress(MinecraftGame *this, int a2)
{
  MinecraftGame::getResourcePackProgress(this, a2);
}


signed int __fastcall MinecraftGame::captureScreenAsImage(MinecraftGame *this, mce::ImageBuffer *a2)
{
  mce::ImageBuffer *v2; // r4@1
  signed int v3; // r5@1
  unsigned int v4; // r4@2
  const char *v5; // r5@2
  int v6; // r0@2
  char v8; // [sp+8h] [bp-38h]@2
  int v9; // [sp+1Ch] [bp-24h]@2
  int v10; // [sp+20h] [bp-20h]@2
  void *ptr; // [sp+24h] [bp-1Ch]@1
  int v12; // [sp+28h] [bp-18h]@1
  int v13; // [sp+2Ch] [bp-14h]@1

  v2 = a2;
  ptr = 0;
  v12 = 0;
  v13 = 0;
  mce::RenderContextImmediate::get(0);
  v3 = 0;
  if ( mce::RenderContext::captureScreenAsRGB() )
  {
    mce::ImageDescription::ImageDescription((int)&v8, v10, v9, 116, 1, 0);
    mce::ImageBuffer::allocateStorage(v2, (const mce::ImageDescription *)&v8);
    v4 = mce::ImageBuffer::get(v2, 0);
    v5 = (const char *)ptr;
    v6 = mce::ImageDescription::getStorageSize((mce::ImageDescription *)&v8);
    _aeabi_memcpy(v4, v5, v6);
    v3 = 1;
  }
  if ( ptr )
    operator delete(ptr);
  return v3;
}


void __fastcall MinecraftGame::returnJoinLobbyResultBasedOnPendingRealmsInvites(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  char *v2; // r0@1
  int v3; // r2@1
  int v4; // r6@1
  char *i; // r1@1
  int v6; // r5@6
  int v7; // r4@6
  _DWORD *v8; // r0@6
  _DWORD *v9; // [sp+0h] [bp-20h]@6
  void (*v10)(void); // [sp+8h] [bp-18h]@6
  void (__fastcall *v11)(int **, int, signed int); // [sp+Ch] [bp-14h]@6

  v1 = this;
  v2 = (char *)this + 216;
  v3 = *((_DWORD *)v1 + 55);
  v4 = *((_DWORD *)v1 + 26);
  for ( i = v2; v3; v3 = *(_DWORD *)(v3 + 8) )
    i = (char *)v3;
  if ( i != v2 && !i[16] )
    v2 = i;
  v6 = ClientInstance::getSceneFactory(*((ClientInstance **)v2 + 5));
  v7 = *((_DWORD *)v1 + 99);
  v8 = operator new(8u);
  *v8 = v4;
  v8[1] = v6;
  v9 = v8;
  v10 = (void (*)(void))sub_C1FB0C;
  v11 = sub_C1F590;
  RealmsAPI::getInviteCount(v7, (int)&v9);
  if ( v10 )
    v10();
}


_DWORD *__fastcall MinecraftGame::onAppSuspended(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  int (*v2)(void); // r3@1
  int v3; // r5@1
  mce::Mesh *v4; // r0@4
  int v5; // r0@9
  char v6; // r0@9
  int v7; // r0@9
  NetworkHandler *v8; // r0@10
  int v9; // r0@10
  void *v11; // [sp+4h] [bp-24h]@1
  int (__fastcall *v12)(void **, void **, int); // [sp+Ch] [bp-1Ch]@1
  int (__fastcall *v13)(int, ClientInstance *); // [sp+10h] [bp-18h]@1

  v1 = this;
  MinecraftEventing::fireEventAppSuspended(*((MinecraftEventing **)this + 126));
  (*(void (__fastcall **)(MinecraftGame *))(*(_DWORD *)v1 + 56))(v1);
  MinecraftEventing::forceSendEvents(*((MinecraftEventing **)v1 + 126));
  Social::UserManager::onAppSuspended(*((Social::UserManager **)v1 + 86));
  mce::RenderGraph::clearRenderGraph((mce::RenderGraph *)(*((_DWORD *)v1 + 12) + 140));
  mce::TextureGroup::unloadAll(*((mce::TextureGroup **)v1 + 15), 1);
  mce::TextureGroup::unloadAll(*((mce::TextureGroup **)v1 + 16), 1);
  v11 = operator new(1u);
  v2 = (int (*)(void))sub_C1A8F0;
  v12 = sub_C1A8F0;
  v13 = sub_C1A8D6;
  v3 = *((_DWORD *)v1 + 56);
  if ( (MinecraftGame *)v3 == (MinecraftGame *)((char *)v1 + 216) )
    goto LABEL_14;
  do
  {
    if ( !v2 )
      sub_DA7654();
    v13((int)&v11, *(ClientInstance **)(v3 + 20));
    v4 = (mce::Mesh *)sub_DA7F5C(v3);
    v2 = (int (*)(void))v12;
    v3 = (int)v4;
  }
  while ( v4 != (MinecraftGame *)((char *)v1 + 216) );
  if ( v12 )
LABEL_14:
    v4 = (mce::Mesh *)v2();
  mce::Mesh::clearGlobalBuffers(v4);
  v5 = NetworkHandler::getConnector(*((NetworkHandler **)v1 + 84));
  (*(void (**)(void))(*(_DWORD *)v5 + 12))();
  v6 = *((_BYTE *)v1 + 697);
  __dmb();
  *((_BYTE *)v1 + 696) = v6 & 1;
  MinecraftGame::_enableServerInstanceThread(v1, 0);
  v7 = *((_DWORD *)v1 + 50);
  if ( v7 )
    v8 = (NetworkHandler *)Minecraft::getNetworkHandler(*(Minecraft **)(v7 + 8));
    v9 = NetworkHandler::getConnector(v8);
    (*(void (**)(void))(*(_DWORD *)v9 + 12))();
  mce::TextureGroup::mCanLoadTextures = 1;
  return TaskGroup::sync_DEPRECATED_ASK_TOMMO(TaskGroup::DISK);
}


char *__fastcall MinecraftGame::handleIdentityGained(MinecraftGame *this)
{
  MinecraftGame *v1; // r5@1
  char *v2; // r6@1
  int (__fastcall *v3)(void **, void **, int); // r3@1
  char *v4; // r4@1
  char *result; // r0@4
  void *v6; // [sp+0h] [bp-20h]@1
  int (__fastcall *v7)(void **, void **, int); // [sp+8h] [bp-18h]@1
  int (__fastcall *v8)(int, ClientInstance *); // [sp+Ch] [bp-14h]@1

  v1 = this;
  v2 = (char *)this + 216;
  v6 = operator new(1u);
  v3 = sub_C246CE;
  v7 = sub_C246CE;
  v8 = sub_C246BA;
  v4 = (char *)*((_DWORD *)v1 + 56);
  if ( v4 == (char *)v1 + 216 )
    goto LABEL_11;
  do
  {
    if ( !v3 )
      sub_DA7654();
    v8((int)&v6, *((ClientInstance **)v4 + 5));
    result = (char *)sub_DA7F5C((int)v4);
    v3 = v7;
    v4 = result;
  }
  while ( result != v2 );
  if ( v7 )
LABEL_11:
    result = (char *)((int (__cdecl *)(void **))v3)(&v6);
  return result;
}


int __fastcall MinecraftGame::setDisableInputForAllOtherClients(MinecraftGame *this, int a2, int a3)
{
  MinecraftGame *v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  _DWORD *v6; // r0@1
  int (__cdecl *v7)(_DWORD); // r3@1
  int v8; // r4@1
  int v9; // r6@1
  int result; // r0@4
  _DWORD *v11; // [sp+0h] [bp-20h]@1
  int (__fastcall *v12)(void **, _QWORD **, int); // [sp+8h] [bp-18h]@1
  void (__fastcall *v13)(int *, ClientInstance *); // [sp+Ch] [bp-14h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(8u);
  *v6 = v5;
  v6[1] = v4;
  v7 = (int (__cdecl *)(_DWORD))sub_C1A944;
  v11 = v6;
  v12 = sub_C1A944;
  v13 = sub_C1A91E;
  v8 = *((_DWORD *)v3 + 56);
  v9 = (int)v3 + 216;
  if ( v8 == v9 )
    goto LABEL_11;
  do
  {
    if ( !v7 )
      sub_DA7654();
    v13((int *)&v11, *(ClientInstance **)(v8 + 20));
    result = sub_DA7F5C(v8);
    v7 = (int (__cdecl *)(_DWORD))v12;
    v8 = result;
  }
  while ( result != v9 );
  if ( v12 )
LABEL_11:
    result = v7(&v11);
  return result;
}


void __fastcall MinecraftGame::onActiveResourcePacksChanged(MinecraftGame *this, ResourcePackManager *a2, int a3, int a4, char a5, int a6, int a7, int a8, char a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  j_j_j__ZN13MinecraftGame29_onActiveResourcePacksChangedER19ResourcePackManagerb(
    this,
    a2,
    1,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24,
    a25,
    a26,
    a27,
    a28,
    a29,
    a30,
    a31,
    a32,
    a33,
    a34,
    a35,
    a36,
    a37,
    a38,
    a39,
    a40,
    a41,
    a42,
    a43,
    a44,
    a45,
    a46,
    a47,
    a48,
    a49,
    a50,
    a51,
    a52,
    a53,
    a54,
    a55,
    a56,
    a57,
    a58,
    a59,
    a60,
    a61,
    a62,
    a63);
}


void __fastcall MinecraftGame::getCurrentLevelSummary(MinecraftGame *this, int a2)
{
  int *v2; // r4@1
  int v3; // r0@1
  Level *v4; // r5@2
  int v5; // r2@3
  int v6; // r0@3
  int i; // r1@3
  Minecraft *v8; // r0@8
  int v9; // r0@11
  int *v10; // r0@11
  double v11; // r0@11
  void *v12; // r0@11
  char *v13; // r5@12
  char *v14; // r6@15
  char *v15; // r0@16
  LevelSummary *v16; // r0@20
  LevelSummary *v17; // r4@20
  unsigned int *v18; // r2@26
  signed int v19; // r1@28
  int v20; // [sp+4h] [bp-24h]@11
  void *ptr; // [sp+8h] [bp-20h]@1
  char *v22; // [sp+Ch] [bp-1Ch]@1
  int v23; // [sp+10h] [bp-18h]@1

  v2 = (int *)this;
  ptr = 0;
  v22 = 0;
  v23 = 0;
  v3 = *(_DWORD *)(a2 + 200);
  if ( v3 )
  {
    v4 = (Level *)Minecraft::getLevel(*(Minecraft **)(v3 + 8));
  }
  else
    v5 = *(_DWORD *)(a2 + 220);
    v6 = a2 + 216;
    for ( i = a2 + 216; v5; v5 = *(_DWORD *)(v5 + 8) )
      i = v5;
    if ( i != v6 && !*(_BYTE *)(i + 16) )
      v6 = i;
    v8 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v6 + 20));
    v4 = (Level *)Minecraft::getLevel(v8);
  if ( v4 )
    if ( Level::hasLevelStorage(v4) == 1 )
    {
      v9 = Level::getLevelStorage(v4);
      v10 = (int *)(*(int (**)(void))(*(_DWORD *)v9 + 28))();
      sub_DA73B4(&v20, v10);
      LODWORD(v11) = &ptr;
      ExternalFileLevelStorageSource::addLevelSummaryIfExists(v11);
      v12 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
      {
        v18 = (unsigned int *)(v20 - 4);
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
          j_j_j_j_j__ZdlPv_9(v12);
      }
    }
  v13 = v22;
  if ( ptr == v22 )
    if ( (v22 - (_BYTE *)ptr) >> 6 )
      if ( (unsigned int)((v22 - (_BYTE *)ptr) >> 6) >= 2 )
        v14 = (char *)ptr + 64;
        if ( v22 != (char *)ptr + 64 )
          v15 = (char *)ptr + 64;
            v15 = (char *)LevelSummary::~LevelSummary((LevelSummary *)v15) + 64;
          while ( v13 != v15 );
        v22 = v14;
    else
      std::vector<LevelSummary,std::allocator<LevelSummary>>::_M_default_append((int)&ptr, 1u);
  LevelSummary::LevelSummary(v2, (int *)ptr);
  v17 = (LevelSummary *)v22;
  v16 = (LevelSummary *)ptr;
  if ( ptr != v22 )
    do
      v16 = (LevelSummary *)((char *)LevelSummary::~LevelSummary(v16) + 64);
    while ( v17 != v16 );
    v16 = (LevelSummary *)ptr;
  if ( v16 )
    operator delete((void *)v16);
}


void __fastcall MinecraftGame::setResourcePacksInfoData(MinecraftGame *this, const ResourcePacksInfoData *a2)
{
  MinecraftGame *v2; // r10@1
  unsigned __int64 *v3; // r4@1
  __int64 v4; // r0@1
  int v5; // r4@1
  int v6; // r0@1
  int v7; // r6@1
  int v8; // r5@2
  __int64 i; // r0@2
  int *v10; // r2@4
  int v11; // r5@8
  int j; // r6@8
  int *v13; // r2@9
  __int64 v14; // r0@13
  PackInstance *v15; // r4@14
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  char *v22; // r0@39
  __int64 v23; // r8@39
  int v24; // r0@39
  int v25; // r4@40
  __int64 v26; // r0@41
  int v27; // r6@43
  int v28; // r0@58
  int v29; // r4@78
  int v30; // r9@78
  int v31; // r0@78
  int v32; // r8@79
  __int64 v33; // r0@80
  int v34; // r6@82
  int v35; // r0@97
  void *v36; // r0@117
  void *v37; // r0@118
  void *v38; // r0@119
  int v39; // r6@125
  unsigned int *v40; // r2@127
  signed int v41; // r1@129
  unsigned int *v42; // r2@131
  signed int v43; // r1@133
  int v44; // r5@143
  int v45; // r1@143
  void *v46; // r0@143
  int v47; // r1@144
  void *v48; // r0@144
  char *v49; // [sp+10h] [bp-90h]@1
  char v50; // [sp+18h] [bp-88h]@39
  int v51; // [sp+20h] [bp-80h]@23
  int v52; // [sp+24h] [bp-7Ch]@19
  int v53; // [sp+28h] [bp-78h]@15
  __int64 v54; // [sp+30h] [bp-70h]@14
  __int64 v55; // [sp+38h] [bp-68h]@42
  __int64 v56; // [sp+44h] [bp-5Ch]@13
  int v57; // [sp+4Ch] [bp-54h]@13
  void *ptr; // [sp+50h] [bp-50h]@1
  int v59; // [sp+54h] [bp-4Ch]@1
  int v60; // [sp+58h] [bp-48h]@1
  void *v61; // [sp+5Ch] [bp-44h]@1
  int v62; // [sp+60h] [bp-40h]@146
  int v63; // [sp+64h] [bp-3Ch]@125
  int v64; // [sp+68h] [bp-38h]@146
  int v65; // [sp+74h] [bp-2Ch]@147

  v2 = this;
  v3 = (unsigned __int64 *)((char *)a2 + 16);
  *((_BYTE *)this + 564) = *(_BYTE *)a2;
  v49 = (char *)this + 568;
  std::vector<ResourcePackInfoData,std::allocator<ResourcePackInfoData>>::operator=(
    (int)this + 568,
    (unsigned __int64 *)((char *)a2 + 4));
  std::vector<ResourcePackInfoData,std::allocator<ResourcePackInfoData>>::operator=((int)v2 + 580, v3);
  HIDWORD(v4) = (char *)v2 + 564;
  v5 = *((_DWORD *)v2 + 78);
  LODWORD(v4) = &v61;
  ResourcePacksInfoData::collectKeys(v4);
  ResourcePackRepository::addCachedResourcePacks(v5, (int)&v61);
  ptr = 0;
  v59 = 0;
  v60 = 0;
  v6 = *(_QWORD *)((char *)v2 + 580) >> 32;
  v7 = *(_QWORD *)((char *)v2 + 580);
  if ( v7 != v6 )
  {
    v8 = v6 - 64;
    for ( i = 0LL; ; i = *(_QWORD *)&v59 )
    {
      v10 = (int *)(v7 + 60);
      if ( (_DWORD)i == HIDWORD(i) )
      {
        std::vector<PackInstanceId,std::allocator<PackInstanceId>>::_M_emplace_back_aux<PackIdVersion &,std::string &>(
          (unsigned __int64 *)&ptr,
          v7,
          v10);
      }
      else
        PackInstanceId::PackInstanceId(i, v7, v10);
        v59 += 56;
      if ( v8 == v7 )
        break;
      v7 += 64;
    }
  }
  v11 = *((_QWORD *)v2 + 71) >> 32;
  for ( j = *((_QWORD *)v2 + 71); v11 != j; j += 64 )
    v13 = (int *)(j + 60);
    if ( v59 == v60 )
      std::vector<PackInstanceId,std::allocator<PackInstanceId>>::_M_emplace_back_aux<PackIdVersion &,std::string &>(
        (unsigned __int64 *)&ptr,
        j,
        v13);
    else
      PackInstanceId::PackInstanceId(v59, j, v13);
      v59 += 56;
  v56 = 0LL;
  v57 = 0;
  ResourcePackRepository::getResourcePacksByPackId(v5, (unsigned __int64 *)&ptr, (int)&v56);
  v14 = v56;
  if ( (_DWORD)v56 != HIDWORD(v56) )
    v15 = (PackInstance *)&v54;
    do
      PackInstance::getPackId(v15, HIDWORD(v14) - 120);
      v22 = PackInstance::getVersion((PackInstance *)(HIDWORD(v56) - 120));
      SemVersion::SemVersion((int)&v50, (int)v22);
      v23 = *(_QWORD *)((char *)v2 + 580);
      v24 = (HIDWORD(v23) - (signed int)v23) >> 8;
      if ( v24 >= 1 )
        v25 = v24 + 1;
        do
        {
          v26 = v54;
          if ( *(_QWORD *)v23 == v54 )
          {
            v26 = *(_QWORD *)v23;
            if ( v55 == *(_QWORD *)(v23 + 8) )
            {
              v27 = v23;
              if ( SemVersion::operator==(v23 + 16, (int)&v50) )
                goto LABEL_76;
              v26 = v54;
            }
          }
          v27 = v23 + 64;
          if ( *(_QWORD *)(v23 + 64) == v26 && v55 == *(_QWORD *)(v23 + 72) )
            if ( SemVersion::operator==(v23 + 80, (int)&v50) )
              goto LABEL_76;
            v26 = v54;
          v27 = v23 + 128;
          if ( *(_QWORD *)(v23 + 128) == v26 && v55 == *(_QWORD *)(v23 + 136) )
            if ( SemVersion::operator==(v23 + 144, (int)&v50) )
          v27 = v23 + 192;
          if ( v26 == *(_QWORD *)(v23 + 192)
            && !(v55 ^ *(_QWORD *)(v23 + 200))
            && SemVersion::operator==(v23 + 208, (int)&v50) )
            goto LABEL_76;
          --v25;
          LODWORD(v23) = v23 + 256;
        }
        while ( v25 > 1 );
      if ( 1 == (HIDWORD(v23) - (signed int)v23) >> 6 )
        v27 = v23;
        v28 = (HIDWORD(v23) - (signed int)v23) >> 6;
        if ( v28 == 2 )
          v27 = v23;
        else
          if ( v28 != 3 )
            goto LABEL_75;
          if ( !(v54 ^ *(_QWORD *)v23) && !(v55 ^ *(_QWORD *)(v23 + 8)) )
            v27 = v23;
            if ( SemVersion::operator==(v23 + 16, (int)&v50) )
        if ( !(v54 ^ *(_QWORD *)v27) && !(v55 ^ *(_QWORD *)(v27 + 8)) && SemVersion::operator==(v27 + 16, (int)&v50) )
          goto LABEL_76;
        v27 += 64;
      if ( v54 ^ *(_QWORD *)v27 || v55 ^ *(_QWORD *)(v27 + 8) )
LABEL_75:
        v27 = HIDWORD(v23);
        goto LABEL_76;
      if ( !SemVersion::operator==(v27 + 16, (int)&v50) )
LABEL_76:
      if ( v27 != *((_DWORD *)v2 + 146) )
        std::vector<ResourcePackInfoData,std::allocator<ResourcePackInfoData>>::_M_erase((int)v2 + 580, v27);
      v30 = *((_QWORD *)v2 + 71) >> 32;
      v29 = *((_QWORD *)v2 + 71);
      v31 = (v30 - v29) >> 8;
      if ( v31 >= 1 )
        v32 = v31 + 1;
          v33 = v54;
          if ( !(*(_QWORD *)v29 ^ v54) )
            v33 = *(_QWORD *)v29;
            if ( v55 == *(_QWORD *)(v29 + 8) )
              v34 = v29;
              if ( SemVersion::operator==(v29 + 16, (int)&v50) )
                goto LABEL_115;
              v33 = v54;
          v34 = v29 + 64;
          if ( *(_QWORD *)(v29 + 64) == v33 && v55 == *(_QWORD *)(v29 + 72) )
            if ( SemVersion::operator==(v29 + 80, (int)&v50) )
              goto LABEL_115;
            v33 = v54;
          v34 = v29 + 128;
          if ( *(_QWORD *)(v29 + 128) == v33 && v55 == *(_QWORD *)(v29 + 136) )
            if ( SemVersion::operator==(v29 + 144, (int)&v50) )
          v34 = v29 + 192;
          if ( v33 == *(_QWORD *)(v29 + 192)
            && !(v55 ^ *(_QWORD *)(v29 + 200))
            && SemVersion::operator==(v29 + 208, (int)&v50) )
            goto LABEL_115;
          --v32;
          v29 += 256;
        while ( v32 > 1 );
      if ( 1 == (v30 - v29) >> 6 )
        v34 = v29;
LABEL_109:
        if ( !(v54 ^ *(_QWORD *)v34) && !(v55 ^ *(_QWORD *)(v34 + 8)) )
          if ( !SemVersion::operator==(v34 + 16, (int)&v50) )
            v34 = v30;
          goto LABEL_115;
        goto LABEL_114;
      v35 = (v30 - v29) >> 6;
      if ( v35 == 2 )
LABEL_105:
        if ( !(v54 ^ *(_QWORD *)v34) && !(v55 ^ *(_QWORD *)(v34 + 8)) && SemVersion::operator==(v34 + 16, (int)&v50) )
        v34 += 64;
        goto LABEL_109;
      if ( v35 == 3 )
        if ( !(v54 ^ *(_QWORD *)v29) && !(v55 ^ *(_QWORD *)(v29 + 8)) )
          v34 = v29;
          if ( SemVersion::operator==(v29 + 16, (int)&v50) )
        v34 = v29 + 64;
        goto LABEL_105;
LABEL_114:
      v34 = v30;
LABEL_115:
      if ( v34 != *((_DWORD *)v2 + 143) )
        std::vector<ResourcePackInfoData,std::allocator<ResourcePackInfoData>>::_M_erase((int)v49, v34);
      HIDWORD(v56) -= 120;
      PackReport::~PackReport((PackReport *)HIDWORD(v56));
      v15 = (PackInstance *)&v54;
      v36 = (void *)(v53 - 12);
      if ( (int *)(v53 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v53 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9(v36);
      v37 = (void *)(v52 - 12);
      if ( (int *)(v52 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v52 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j_j__ZdlPv_9(v37);
      v38 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != &dword_28898C0 )
        v20 = (unsigned int *)(v51 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j_j__ZdlPv_9(v38);
      v14 = v56;
    while ( (_DWORD)v56 != HIDWORD(v56) );
  if ( (_DWORD)v14 )
    operator delete((void *)v14);
  std::_Destroy<PackInstanceId *>((int)ptr, v59);
  if ( ptr )
    operator delete(ptr);
  v39 = v63;
  while ( v39 )
    v44 = v39;
    v45 = *(_DWORD *)(v39 + 8);
    v39 = *(_DWORD *)v39;
    v46 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v45 - 4);
      if ( &pthread_create )
        __dmb();
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j_j__ZdlPv_9(v46);
    v47 = *(_DWORD *)(v44 + 4);
    v48 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v47 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j_j__ZdlPv_9(v48);
    operator delete((void *)v44);
  _aeabi_memclr4(v61, 4 * v62);
  v63 = 0;
  v64 = 0;
  if ( v61 )
    if ( &v65 != v61 )
      operator delete(v61);
}


MinecraftGame *__fastcall MinecraftGame::logoffAllSubclients(MinecraftGame *this)
{
  MinecraftGame *v1; // r5@1
  _DWORD *v2; // r0@1
  int (__cdecl *v3)(_DWORD); // r3@1
  MinecraftGame *v4; // r4@1
  MinecraftGame *result; // r0@4
  _DWORD *v6; // [sp+0h] [bp-20h]@1
  int (__fastcall *v7)(void **, _DWORD **, int); // [sp+8h] [bp-18h]@1
  unsigned int (__fastcall *v8)(int **, ClientInstance *); // [sp+Ch] [bp-14h]@1

  v1 = this;
  v2 = operator new(4u);
  *v2 = v1;
  v3 = (int (__cdecl *)(_DWORD))sub_C19D72;
  v6 = v2;
  v7 = sub_C19D72;
  v8 = sub_C19CDE;
  v4 = (MinecraftGame *)*((_DWORD *)v1 + 56);
  if ( v4 == (MinecraftGame *)((char *)v1 + 216) )
    goto LABEL_11;
  do
  {
    if ( !v3 )
      sub_DA7654();
    v8(&v6, *((ClientInstance **)v4 + 5));
    result = (MinecraftGame *)sub_DA7F5C((int)v4);
    v3 = (int (__cdecl *)(_DWORD))v7;
    v4 = result;
  }
  while ( result != (MinecraftGame *)((char *)v1 + 216) );
  if ( v7 )
LABEL_11:
    result = (MinecraftGame *)v3(&v6);
  return result;
}


int __fastcall MinecraftGame::resetInhibitInputDueToTextBoxMode(int result)
{
  *(_BYTE *)(result + 113) = 0;
  return result;
}


signed int __fastcall MinecraftGame::hasAllValidMultiplayerSkin(MinecraftGame *this)
{
  int v1; // r4@1
  char *v2; // r5@1

  v1 = *((_DWORD *)this + 56);
  v2 = (char *)this + 216;
  while ( (char *)v1 != v2 )
  {
    if ( ClientInstance::isValidMultiplayerSkin(*(ClientInstance **)(v1 + 20)) != 1 )
      return 0;
    v1 = sub_DA7FEC(v1);
  }
  return 1;
}


void __fastcall MinecraftGame::adjustClientsUISizeAndScale(MinecraftGame *this, int a2, int a3, float a4)
{
  MinecraftGame::adjustClientsUISizeAndScale(this, a2, a3, a4);
}


int __fastcall MinecraftGame::useController(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  return j_j_j__ZNK14ClientInstance13useControllerEv(*((ClientInstance **)v2 + 5));
}


int __fastcall MinecraftGame::setIsInGame(int result, bool a2)
{
  __dmb();
  *(_BYTE *)(result + 656) = a2;
  return result;
}


void __fastcall MinecraftGame::getCurrentLevelSummary(MinecraftGame *this, int a2)
{
  MinecraftGame::getCurrentLevelSummary(this, a2);
}


_QWORD *__fastcall MinecraftGame::handleInvite(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  int v2; // r2@2
  int v3; // r0@2
  int v4; // r5@2
  int i; // r1@2
  int v6; // r0@7
  int v7; // r5@7
  unsigned int *v8; // r1@8
  unsigned int v9; // r0@10
  int v10; // r6@13
  int v11; // r5@13
  int v12; // r7@13
  int v13; // r1@17
  int v14; // r0@17
  int k; // r5@17
  int v16; // r6@23
  int *v17; // r0@23
  int v18; // r5@23
  unsigned int *v19; // r1@24
  unsigned int v20; // r0@26
  int v21; // r2@28
  int v22; // r0@28
  int v23; // r5@28
  int j; // r1@28
  int v25; // r0@33
  unsigned int *v26; // r1@34
  unsigned int v27; // r0@36
  int v28; // r1@38
  int l; // r0@38
  Minecraft *v30; // r0@44
  _QWORD *result; // r0@45
  unsigned int *v32; // r6@51
  unsigned int v33; // r0@53
  void *v34; // r0@56
  unsigned int *v35; // r2@57
  signed int v36; // r1@59
  _QWORD *m; // r4@70
  unsigned int *v38; // r6@76
  unsigned int v39; // r0@78
  void *v40; // r0@83
  void *v41; // r0@84
  unsigned int *v42; // r2@87
  signed int v43; // r1@89
  unsigned int *v44; // r2@91
  signed int v45; // r1@93
  int v46; // [sp+4h] [bp-4Ch]@56
  int v47; // [sp+Ch] [bp-44h]@23
  int v48; // [sp+14h] [bp-3Ch]@23
  int v49; // [sp+1Ch] [bp-34h]@23
  char v50; // [sp+20h] [bp-30h]@23
  int v51; // [sp+24h] [bp-2Ch]@23
  char v52; // [sp+28h] [bp-28h]@33
  int v53; // [sp+2Ch] [bp-24h]@33
  char v54; // [sp+30h] [bp-20h]@7
  int v55; // [sp+34h] [bp-1Ch]@7

  v1 = this;
  if ( OfferRepository::isTrial(*((OfferRepository **)this + 74)) == 1 )
  {
    v2 = *((_DWORD *)v1 + 55);
    v3 = (int)v1 + 216;
    v4 = *((_DWORD *)v1 + 26);
    for ( i = (int)v1 + 216; v2; v2 = *(_DWORD *)(v2 + 8) )
      i = v2;
    if ( i != v3 && !*(_BYTE *)(i + 16) )
      v3 = i;
    v6 = ClientInstance::getSceneFactory(*(ClientInstance **)(v3 + 20));
    SceneFactory::createNoInvitesOrJoiningScreen((SceneFactory *)&v54, v6);
    SceneStack::pushScreen(v4, (int)&v54, 0);
    v7 = v55;
    if ( !v55 )
      return Social::MultiplayerServiceManager::clearInviteHandle(*((_QWORD **)v1 + 87), 0);
    v8 = (unsigned int *)(v55 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 != 1 )
    v32 = (unsigned int *)(v7 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      goto LABEL_68;
LABEL_67:
    v33 = (*v32)--;
LABEL_68:
    if ( v33 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    return Social::MultiplayerServiceManager::clearInviteHandle(*((_QWORD **)v1 + 87), 0);
  }
  if ( !MinecraftGame::hasNetworkPrivileges(v1, 1) )
    v21 = *((_DWORD *)v1 + 55);
    v22 = (int)v1 + 216;
    v23 = *((_DWORD *)v1 + 26);
    for ( j = (int)v1 + 216; v21; v21 = *(_DWORD *)(v21 + 8) )
      j = v21;
    if ( j != v22 && !*(_BYTE *)(j + 16) )
      v22 = j;
    v25 = ClientInstance::getSceneFactory(*(ClientInstance **)(v22 + 20));
    SceneFactory::createNoWifiWarningScreen((SceneFactory *)&v52, v25);
    SceneStack::pushScreen(v23, (int)&v52, 0);
    v7 = v53;
    if ( !v53 )
    v26 = (unsigned int *)(v53 + 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 != 1 )
    goto LABEL_67;
  v10 = (int)v1 + 216;
  v11 = *((_DWORD *)v1 + 56);
  v12 = (int)v1 + 216;
  while ( v11 != v10 )
    if ( ClientInstance::isValidMultiplayerSkin(*(ClientInstance **)(v11 + 20)) != 1 )
      v13 = *((_DWORD *)v1 + 55);
      v14 = (int)v1 + 216;
      for ( k = *((_DWORD *)v1 + 26); v13; v13 = *(_DWORD *)(v13 + 8) )
        v14 = v13;
      if ( v14 != v10 )
      {
        if ( !*(_BYTE *)(v14 + 16) )
          v10 = v14;
        v12 = v10;
      }
      v16 = ClientInstance::getSceneFactory(*(ClientInstance **)(v12 + 20));
      sub_DA7364((void **)&v49, "disconnectionScreen.lockedSkin.title");
      sub_DA7364((void **)&v48, "disconnectionScreen.lockedSkin");
      v17 = (int *)sub_DA7364((void **)&v47, (const char *)&unk_257BC67);
      SceneFactory::createDisconnectScreen((unsigned __int64 *)&v50, v16, &v49, &v48, v17);
      SceneStack::pushScreen(k, (int)&v50, 0);
      v18 = v51;
      if ( v51 )
        v19 = (unsigned int *)(v51 + 4);
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
          v38 = (unsigned int *)(v18 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          if ( &pthread_create )
          {
            __dmb();
            do
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
          }
          else
            v39 = (*v38)--;
          if ( v39 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
      v40 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v42 = (unsigned int *)(v47 - 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j_j__ZdlPv_9(v40);
      v41 = (void *)(v48 - 12);
      if ( (int *)(v48 - 12) != &dword_28898C0 )
        v44 = (unsigned int *)(v48 - 4);
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j_j__ZdlPv_9(v41);
      v34 = (void *)(v49 - 12);
      if ( (int *)(v49 - 12) == &dword_28898C0 )
        return Social::MultiplayerServiceManager::clearInviteHandle(*((_QWORD **)v1 + 87), 0);
      v35 = (unsigned int *)(v49 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        goto LABEL_100;
      goto LABEL_99;
    v11 = sub_DA7FEC(v11);
  v28 = *((_DWORD *)v1 + 55);
  for ( l = (int)v1 + 216; v28; v28 = *(_DWORD *)(v28 + 8) )
    l = v28;
  if ( l != v10 )
    if ( *(_BYTE *)(l + 16) )
      l = (int)v1 + 216;
    v12 = l;
  v30 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v12 + 20));
  if ( Minecraft::getLevel(v30) )
    result = (_QWORD *)Social::MultiplayerServiceManager::checkIsInviteForCurrentGame(
                         *((unsigned __int64 **)v1 + 87),
                         0);
    if ( result == (_QWORD *)1 )
      return result;
    if ( result == (_QWORD *)2 )
      for ( m = (_QWORD *)*((_DWORD *)v1 + 56); m != (_QWORD *)v10; m = result )
        ClientInstance::requestLeaveGame(*((ClientInstance **)m + 5), 1, 0);
        result = (_QWORD *)sub_DA7F5C((int)m);
    if ( result == (_QWORD *)3 )
      return j_j_j__ZN6Social25MultiplayerServiceManager17clearInviteHandleENS_28MultiplayerServiceIdentifierE(
               *((_QWORD **)v1 + 87),
               0);
  result = (_QWORD *)Social::MultiplayerServiceManager::needToHandleInvite(*((_QWORD **)v1 + 87), 0);
  if ( result != (_QWORD *)1 )
    return result;
  Social::MultiplayerServiceManager::getInviteHandle(&v46, *((unsigned __int64 **)v1 + 87), 0);
  MinecraftGame::joinLiveGame((int)v1, &v46, 0);
  v34 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v46 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
LABEL_100:
      if ( v36 <= 0 )
        j_j_j_j_j__ZdlPv_9(v34);
LABEL_99:
    v36 = (*v35)--;
    goto LABEL_100;
  return Social::MultiplayerServiceManager::clearInviteHandle(*((_QWORD **)v1 + 87), 0);
}


PackReport *__fastcall MinecraftGame::_addVanillaMainPacks(MinecraftGame *this, ResourcePackStack *a2, int a3)
{
  MinecraftGame *v3; // r5@1
  ResourcePackStack *v4; // r4@1
  int v5; // r6@1
  int v6; // r1@1
  int v7; // r0@5
  int v8; // r1@5
  int v10; // [sp+0h] [bp-F0h]@7
  char v11; // [sp+78h] [bp-78h]@6
  char v12; // [sp+F0h] [bp+0h]@2
  char v13; // [sp+168h] [bp+78h]@4

  v3 = this;
  v4 = a2;
  v5 = a3;
  v6 = *(_DWORD *)(*((_DWORD *)this + 78) + 56);
  if ( v6 )
  {
    PackInstance::PackInstance((int)&v12, v6, -1, 0);
    ResourcePackStack::add((int)v4, (int)&v12, *((_DWORD *)v3 + 78), 0);
    PackReport::~PackReport((PackReport *)&v12);
  }
  if ( v5 == 1 )
    PackInstance::PackInstance((int)&v13, *(_DWORD *)(*((_DWORD *)v3 + 78) + 48), -1, 0);
    ResourcePackStack::add((int)v4, (int)&v13, *((_DWORD *)v3 + 78), 0);
    PackReport::~PackReport((PackReport *)&v13);
  v7 = *((_DWORD *)v3 + 78);
  v8 = *(_DWORD *)(v7 + 52);
  if ( v8 )
    PackInstance::PackInstance((int)&v11, v8, -1, 0);
    ResourcePackStack::add((int)v4, (int)&v11, *((_DWORD *)v3 + 78), 0);
    PackReport::~PackReport((PackReport *)&v11);
    v7 = *((_DWORD *)v3 + 78);
  PackInstance::PackInstance((int)&v10, *(_DWORD *)(v7 + 40), -1, 0);
  ResourcePackStack::add((int)v4, (int)&v10, *((_DWORD *)v3 + 78), 0);
  return PackReport::~PackReport((PackReport *)&v10);
}


MinecraftGame *__fastcall MinecraftGame::getSituationalMusic(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  char *v2; // r6@1
  int v3; // r1@1
  char *i; // r0@1
  char *v5; // r1@3
  Entity *v6; // r5@7
  int v7; // r1@8
  char *j; // r0@8
  __int64 *v9; // r0@13
  int v10; // r6@13
  void *v11; // r0@13
  BlockSource *v12; // r0@16
  void **v13; // r0@17
  _DWORD *v14; // r5@20
  int *v15; // r1@20
  int v16; // r1@20
  BlockSource *v18; // r0@22
  unsigned __int64 *v19; // r6@23
  __int64 v20; // kr00_8@23
  MinecraftGame *v21; // r9@23
  int v22; // r0@24
  int v23; // r1@24
  int v24; // r0@24
  int v25; // r5@29
  unsigned int *v26; // r2@32
  signed int v27; // r1@34
  int v28; // [sp+8h] [bp-30h]@13

  v1 = this;
  v2 = (char *)this + 216;
  v3 = *((_DWORD *)this + 55);
  for ( i = (char *)this + 216; v3; v3 = *(_DWORD *)(v3 + 8) )
    i = (char *)v3;
  v5 = v2;
  if ( i != v2 )
  {
    if ( i[16] )
      i = v2;
    v5 = i;
  }
  v6 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)v5 + 5));
  if ( !v6 )
    v13 = &MusicManager::MENU;
    goto LABEL_20;
  v7 = *((_DWORD *)v1 + 55);
  for ( j = v2; v7; v7 = *(_DWORD *)(v7 + 8) )
    j = (char *)v7;
  if ( j != v2 && !j[16] )
    v2 = j;
  v9 = (__int64 *)ClientInstance::getClientSceneStack(*((ClientInstance **)v2 + 5));
  SceneStack::getScreenName((SceneStack *)&v28, v9);
  v10 = sub_DA7374((const void **)&v28, "credits_screen");
  v11 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v28 - 4);
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
      j_j_j_j_j__ZdlPv_9(v11);
  if ( !v10 )
    v13 = (void **)&MusicManager::CREDITS;
  if ( Entity::isRegionValid(v6) == 1 )
    v12 = (BlockSource *)Entity::getRegion(v6);
    if ( BlockSource::getDimensionId(v12) == 1 )
      v13 = (void **)MusicManager::NETHER;
LABEL_20:
      v14 = *v13;
      v15 = (int *)((char *)*v13 + 4);
      *((_DWORD *)v1 + 68) = *(_DWORD *)*v13;
      EntityInteraction::setInteractText((int *)v1 + 69, v15);
      v16 = v14[3];
      *((_DWORD *)v1 + 70) = v14[2];
      *((_DWORD *)v1 + 71) = v16;
      return (MinecraftGame *)((char *)v1 + 272);
    v18 = (BlockSource *)Entity::getRegion(v6);
    if ( BlockSource::getDimensionId(v18) != 2 )
      v25 = (int)v6 + 4320;
      if ( Abilities::getBool(v25, (int **)&Abilities::INSTABUILD) != 1
        || Abilities::getBool(v25, (int **)&Abilities::MAYFLY) != 1 )
      {
        v13 = (void **)MusicManager::GAME;
      }
      else
        v13 = (void **)MusicManager::CREATIVE;
      goto LABEL_20;
    v20 = *(_QWORD *)Player::getTrackedBosses(v6);
    v19 = (unsigned __int64 *)v20;
    v21 = (MinecraftGame *)((char *)v1 + 280);
    if ( (_DWORD)v20 != HIDWORD(v20) )
        v22 = Entity::getLevel(v6);
        v24 = Level::fetchEntity(v22, v23, *v19, *v19 >> 32, 0);
        if ( v24 && Entity::hasType(v24, 2869) == 1 )
        {
          *((_DWORD *)v1 + 68) = MusicManager::ENDBOSS;
          EntityInteraction::setInteractText((int *)v1 + 69, (int *)algn_27D54C4);
          *(_QWORD *)v21 = *(_QWORD *)&algn_27D54C4[4];
        }
        ++v19;
      while ( (unsigned __int64 *)HIDWORD(v20) != v19 );
    *((_DWORD *)v1 + 68) = MusicManager::END;
    EntityInteraction::setInteractText((int *)v1 + 69, (int *)algn_27D54B4);
    *(_QWORD *)v21 = *(_QWORD *)&algn_27D54B4[4];
  return (MinecraftGame *)((char *)v1 + 272);
}


int __fastcall MinecraftGame::getServerNetworkHandler(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  char *v2; // r0@1
  int v3; // r2@1
  char *i; // r1@1
  Minecraft *v5; // r0@6
  int result; // r0@6
  int v7; // r0@7
  bool v8; // zf@7

  v1 = this;
  v2 = (char *)this + 216;
  v3 = *((_DWORD *)v1 + 55);
  for ( i = v2; v3; v3 = *(_DWORD *)(v3 + 8) )
    i = (char *)v3;
  if ( i != v2 && !i[16] )
    v2 = i;
  v5 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)v2 + 5));
  result = Minecraft::getServerNetworkHandler(v5);
  if ( !result )
  {
    v7 = *((_DWORD *)v1 + 50);
    v8 = v7 == 0;
    if ( v7 )
    {
      v7 = *(_DWORD *)(v7 + 8);
      v8 = v7 == 0;
    }
    if ( v8 )
      result = 0;
    else
      result = j_j_j__ZN9Minecraft23getServerNetworkHandlerEv_0((Minecraft *)v7);
  }
  return result;
}


int __fastcall MinecraftGame::reloadMaterials(MinecraftGame *this, int a2, int a3)
{
  int v3; // r8@1
  MinecraftGame *v4; // r4@1
  void *v5; // r0@3
  mce::ShaderGroup *v6; // r6@4
  char *v7; // r0@4
  char *v8; // r0@5
  int v9; // r0@7
  int v10; // r4@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  void *v13; // r0@13
  signed int v14; // r6@14
  char *v15; // r0@14
  char *v16; // r0@15
  int v17; // r0@16
  signed int v18; // r0@16
  int v19; // r7@16
  int v20; // r6@16
  unsigned int *v21; // r1@17
  unsigned int v22; // r0@19
  unsigned int *v23; // r5@23
  unsigned int v24; // r0@25
  unsigned int *v25; // r5@29
  unsigned int v26; // r0@31
  unsigned int *v28; // r2@44
  signed int v29; // r1@46
  unsigned int *v30; // r2@48
  signed int v31; // r1@50
  unsigned int *v32; // r2@52
  signed int v33; // r1@54
  unsigned int *v34; // r2@56
  signed int v35; // r1@58
  unsigned int *v36; // r2@60
  signed int v37; // r1@62
  Options *v38; // [sp+Ch] [bp-1B4h]@7
  int v39; // [sp+10h] [bp-1B0h]@7
  char *v40; // [sp+18h] [bp-1A8h]@4
  char *v41; // [sp+1Ch] [bp-1A4h]@4
  int v42; // [sp+20h] [bp-1A0h]@4
  Options *v43; // [sp+24h] [bp-19Ch]@16
  int v44; // [sp+28h] [bp-198h]@16
  char *v45; // [sp+30h] [bp-190h]@14
  char *v46; // [sp+34h] [bp-18Ch]@14
  int v47; // [sp+38h] [bp-188h]@14
  char v48; // [sp+3Ch] [bp-184h]@14
  int v49; // [sp+44h] [bp-17Ch]@37
  char v50; // [sp+D0h] [bp-F0h]@14
  int v51; // [sp+D8h] [bp-E8h]@37
  int v52; // [sp+164h] [bp-5Ch]@13
  char v53; // [sp+168h] [bp-58h]@13

  v3 = a2;
  v4 = this;
  if ( a3 == 1 )
  {
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v5 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v5 = &ServiceLocator<AppPlatform>::mDefaultService;
    (*(void (__fastcall **)(int *))(**(_DWORD **)v5 + 288))(&v52);
    mce::ShaderGroup::ShaderGroup(&v53, &v52);
    v13 = (void *)(v52 - 12);
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
        j_j_j_j_j__ZdlPv_9(v13);
    }
    mce::RenderMaterialGroup::RenderMaterialGroup((mce::RenderMaterialGroup *)&v50);
    mce::RenderMaterialGroup::RenderMaterialGroup((mce::RenderMaterialGroup *)&v48);
    mce::RenderMaterialGroup::setTextureGroup(
      (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
      *((mce::TextureGroup **)v4 + 15));
    mce::RenderMaterialGroup::setTextureGroup((mce::RenderMaterialGroup *)&v50, *((mce::TextureGroup **)v4 + 15));
    mce::RenderMaterialGroup::setTextureGroup((mce::RenderMaterialGroup *)&v48, *((mce::TextureGroup **)v4 + 15));
    sub_DA7364((void **)&v45, "materials/common.json");
    v46 = v45;
    v45 = (char *)&unk_28898CC;
    v47 = 0;
    v14 = mce::RenderMaterialGroup::loadList(
            (mce::RenderMaterialGroup *)&v50,
            (mce::ShaderGroup *)&v53,
            (const ResourceLocation *)&v46,
            *((ResourcePackManager **)v4 + 80),
            *((ResourceLoadManager **)v4 + 165),
            1);
    v15 = v46 - 12;
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v46 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j_j__ZdlPv_9(v15);
    v16 = v45 - 12;
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v45 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j_j__ZdlPv_9(v16);
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v43, (int)v4);
    v17 = Options::getFancyGraphics(v43);
    v18 = MinecraftGame::_reloadFancy(v4, v17, (mce::ShaderGroup *)&v53, (mce::RenderMaterialGroup *)&v48, 1);
    v19 = v44;
    v20 = v14 & v18;
    if ( v44 )
      v21 = (unsigned int *)(v44 + 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
        v23 = (unsigned int *)(v19 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
    if ( v20 == 1 )
      mce::ShaderGroup::operator=(*((_DWORD *)v4 + 10), (int)&v53);
      mce::RenderMaterialGroup::setMaterialMap((int)&mce::RenderMaterialGroup::common, (int)&v51);
      mce::RenderMaterialGroup::setMaterialMap((int)&mce::RenderMaterialGroup::switchable, (int)&v49);
    mce::RenderMaterialGroup::~RenderMaterialGroup((mce::RenderMaterialGroup *)&v48);
    mce::RenderMaterialGroup::~RenderMaterialGroup((mce::RenderMaterialGroup *)&v50);
    mce::ShaderGroup::~ShaderGroup((mce::ShaderGroup *)&v53);
  }
  else
      *((mce::TextureGroup **)this + 15));
    v6 = (mce::ShaderGroup *)*((_DWORD *)v4 + 10);
    sub_DA7364((void **)&v40, "materials/common.json");
    v41 = v40;
    v42 = 0;
    v40 = (char *)&unk_28898CC;
    mce::RenderMaterialGroup::loadList(
      v6,
      (const ResourceLocation *)&v41,
      *((ResourcePackManager **)v4 + 80),
      *((ResourceLoadManager **)v4 + 165),
      0);
    v7 = v41 - 12;
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v41 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j_j__ZdlPv_9(v7);
    v8 = v40 - 12;
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v40 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9(v8);
    if ( v3 == 1 )
      MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v38, (int)v4);
      v9 = Options::getFancyGraphics(v38);
      MinecraftGame::_reloadFancy(
        v4,
        v9,
        *((mce::ShaderGroup **)v4 + 10),
        (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
        0);
      v10 = v39;
      if ( v39 )
        v11 = (unsigned int *)(v39 + 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 == 1 )
          v25 = (unsigned int *)(v10 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          if ( &pthread_create )
          {
            __dmb();
            do
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
          }
          else
            v26 = (*v25)--;
          if ( v26 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
    v20 = 1;
  return v20;
}


int __fastcall MinecraftGame::useMinecraftVersionOfXBLUI(MinecraftGame *this)
{
  return 0;
}


int __fastcall MinecraftGame::setRenderingSize(MinecraftGame *this, int a2, int a3)
{
  MinecraftGame *v5; // r6@1

  _R5 = a2;
  _R4 = a3;
  v5 = this;
  MinecraftGame::isKindleFire(this, 1);
  __asm
  {
    VMOV            S0, R4
    VLDR            S2, =580.0
    VMOV            S4, R5
    VCVT.F32.S32    S0, S0
    VMOV.F32        S6, S0
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S6, S2 }
  __asm { VCVT.F32.S32    S2, S4 }
  if ( (unsigned int)(_R4 - 560) < 0x3D )
    __asm { VMOVCC.F32      S0, S6 }
    VSTR            S2, [R0,#0x14]
    VSTR            S0, [R0,#0x18]
  return j_j_j__ZN12GameRenderer17createRenderGraphEb(*((GameRenderer **)v5 + 12), 0);
}


int __fastcall MinecraftGame::updateDownloadingPack(int a1, int **a2, int a3, int a4, int a5)
{
  int v5; // r6@1
  int v6; // r4@1
  int v7; // r5@1
  int result; // r0@2

  v5 = a1;
  v6 = a4;
  v7 = a3;
  if ( a5 == 1 )
  {
    std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_erase(
      (unsigned __int64 *)(a1 + 600),
      a2);
    result = *(_DWORD *)(v5 + 612);
    if ( !result )
      result = j_j_j__ZN13MinecraftGame23onGameEventNotificationEN2ui21GameEventNotificationE(v5, 9);
  }
  else
    result = std::_Hashtable<std::string,std::pair<std::string const,unsigned long long>,std::allocator<std::pair<std::string const,unsigned long long>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
               (unsigned __int64 *)(a1 + 628),
               a2);
    if ( result )
    {
      *(_DWORD *)(result + 16) = v7;
      *(_DWORD *)(result + 20) = v6;
    }
  return result;
}


void __fastcall MinecraftGame::getGlobalResourcePacksPath(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  char *v2; // r0@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  char *v5; // [sp+4h] [bp-24h]@1
  char *v6; // [sp+8h] [bp-20h]@1
  int v7; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  sub_DA73B4((int *)&v5, (int *)&MinecraftGame::RESOURCE_PACKS_SAVE_FILENAME);
  v6 = v5;
  v5 = (char *)&unk_28898CC;
  v7 = 4;
  ResourceLocation::getFullPath(v1, (int)&v6);
  v2 = v6 - 12;
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v3 = (unsigned int *)(v6 - 4);
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
      j_j_j_j_j__ZdlPv_9(v2);
  }
}


void __fastcall MinecraftGame::setResourcePacksInfoData(MinecraftGame *this, const ResourcePacksInfoData *a2)
{
  MinecraftGame::setResourcePacksInfoData(this, a2);
}


void __fastcall MinecraftGame::addDownloadingPack(int a1, int *a2, __int64 a3)
{
  int v3; // r5@1
  int *v4; // r4@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+0h] [bp-30h]@1
  int v9; // [sp+8h] [bp-28h]@1
  int v10; // [sp+Ch] [bp-24h]@1
  char v11; // [sp+14h] [bp-1Ch]@1

  v3 = a1;
  v4 = a2;
  *(_QWORD *)(a1 + 592) += a3;
  std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<std::string &>(
    &v11,
    (unsigned __int64 *)(a1 + 600),
    a2);
  sub_DA73B4(&v8, v4);
  v9 = 0;
  v10 = 0;
  std::_Hashtable<std::string,std::pair<std::string const,unsigned long long>,std::allocator<std::pair<std::string const,unsigned long long>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<std::string,unsigned long long>>(
    (unsigned __int64 *)(v3 + 628),
    (int)&v8);
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
      j_j_j_j_j__ZdlPv_9(v5);
  }
}


signed int __fastcall MinecraftGame::onAppPaused(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  MinecraftEventing::fireEventAppPaused(*((MinecraftEventing **)this + 126));
  result = 1;
  *((_BYTE *)v1 + 444) = 1;
  return result;
}


void __fastcall MinecraftGame::getScreenNames(MinecraftGame *this, int a2)
{
  int v2; // r5@1
  MinecraftGame *v3; // r11@1
  int v4; // r2@1
  int v5; // r0@1
  int i; // r1@1
  unsigned __int64 *v7; // r0@6
  int *v8; // r4@6
  int *v9; // r5@6
  __int64 v10; // r0@7
  int *v11; // r6@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int *v14; // r0@21
  int *v15; // [sp+4h] [bp-3Ch]@6
  int *v16; // [sp+8h] [bp-38h]@6

  v2 = a2;
  v3 = this;
  SceneStack::getScreenNames(this, *(unsigned __int64 **)(a2 + 104));
  v4 = *(_DWORD *)(v2 + 220);
  v5 = v2 + 216;
  for ( i = v2 + 216; v4; v4 = *(_DWORD *)(v4 + 8) )
    i = v4;
  if ( i != v5 && !*(_BYTE *)(i + 16) )
    v5 = i;
  v7 = (unsigned __int64 *)ClientInstance::getClientSceneStack(*(ClientInstance **)(v5 + 20));
  SceneStack::getScreenNames((SceneStack *)&v15, v7);
  v8 = v16;
  v9 = v15;
  if ( v15 != v16 )
  {
    do
    {
      v10 = *(_QWORD *)((char *)v3 + 4);
      if ( (_DWORD)v10 == HIDWORD(v10) )
      {
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)v3,
          v9);
      }
      else
        sub_DA73B4((int *)v10, v9);
        *((_DWORD *)v3 + 1) += 4;
      ++v9;
    }
    while ( v8 != v9 );
    v9 = v16;
    v11 = v15;
    if ( v15 != v16 )
      do
        v14 = (int *)(*v11 - 12);
        if ( v14 != &dword_28898C0 )
        {
          v12 = (unsigned int *)(*v11 - 4);
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
            j_j_j_j_j__ZdlPv_9(v14);
        }
        ++v11;
      while ( v11 != v9 );
      v9 = v15;
  }
  if ( v9 )
    operator delete(v9);
}


signed int __fastcall MinecraftGame::getForceMonoscopic(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  char *v2; // r5@1
  int v3; // r1@1
  char *i; // r0@1
  char *v5; // r1@3
  int v6; // r1@8
  char *j; // r0@8
  char *v8; // r1@10
  int v9; // r1@15
  char *k; // r0@15
  signed int result; // r0@21

  v1 = this;
  v2 = (char *)this + 216;
  v3 = *((_DWORD *)this + 55);
  for ( i = (char *)this + 216; v3; v3 = *(_DWORD *)(v3 + 8) )
    i = (char *)v3;
  v5 = v2;
  if ( i != v2 )
  {
    if ( i[16] )
      i = v2;
    v5 = i;
  }
  if ( !ClientInstance::getLevel(*((ClientInstance **)v5 + 5)) )
    goto LABEL_25;
  v6 = *((_DWORD *)v1 + 55);
  for ( j = v2; v6; v6 = *(_DWORD *)(v6 + 8) )
    j = (char *)v6;
  v8 = v2;
  if ( j != v2 )
    if ( j[16] )
      j = v2;
    v8 = j;
  if ( ClientInstance::isShowingMenu(*((ClientInstance **)v8 + 5)) != 1 )
  v9 = *((_DWORD *)v1 + 55);
  for ( k = v2; v9; v9 = *(_DWORD *)(v9 + 8) )
    k = (char *)v9;
  if ( k != v2 && !k[16] )
    v2 = k;
  if ( ClientInstance::isRealityFullVRMode(*((ClientInstance **)v2 + 5)) )
    result = 1;
  else
LABEL_25:
    result = 0;
  return result;
}


void __fastcall MinecraftGame::handleResourcePackConfirmation(int a1, int (**a2)(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg), int a3)
{
  int *v3; // r7@0
  int (**v4)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r5@1
  int v5; // r9@1
  int v6; // r4@1
  bool v7; // r2@2
  int v8; // r6@6
  int v9; // r11@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  void *v12; // r0@16
  bool v13; // zf@18
  unsigned int *v14; // r2@22
  signed int v15; // r1@24
  void *v16; // r0@30
  int v17; // r0@32
  int *v18; // r1@34
  int *v19; // r2@34
  int v20; // r1@38
  int v21; // r2@39
  int v22; // r0@39
  int i; // r1@39
  int v24; // r0@44
  unsigned __int64 *v25; // r5@44
  unsigned int *v26; // r2@46
  signed int v27; // r1@48
  unsigned __int64 *v28; // r7@54
  int v29; // r1@54
  void *v30; // r0@54
  int v31; // r5@56
  unsigned int *v32; // r2@58
  signed int v33; // r1@60
  void *v34; // r7@66
  int v35; // r1@66
  void *v36; // r0@66
  int v37; // [sp+Ch] [bp-84h]@22
  int v38; // [sp+10h] [bp-80h]@7
  char v39; // [sp+14h] [bp-7Ch]@16
  int v40; // [sp+18h] [bp-78h]@6
  int v41; // [sp+1Ch] [bp-74h]@6
  int *v42; // [sp+20h] [bp-70h]@6
  int *v43; // [sp+24h] [bp-6Ch]@6
  int v44; // [sp+28h] [bp-68h]@6
  void **v45; // [sp+2Ch] [bp-64h]@5
  int v46; // [sp+30h] [bp-60h]@5
  int v47; // [sp+34h] [bp-5Ch]@5
  char v48; // [sp+38h] [bp-58h]@5
  int v49; // [sp+3Ch] [bp-54h]@68
  int v50; // [sp+40h] [bp-50h]@5
  int v51; // [sp+44h] [bp-4Ch]@5
  int *v52; // [sp+48h] [bp-48h]@5
  int *v53; // [sp+4Ch] [bp-44h]@5
  int v54; // [sp+50h] [bp-40h]@5
  char v55; // [sp+54h] [bp-3Ch]@5
  char v56; // [sp+58h] [bp-38h]@16
  char v57; // [sp+64h] [bp-2Ch]@30

  v4 = a2;
  v5 = a1;
  v6 = a3;
  if ( (unsigned __int8)((_BYTE)a2 - 1) <= 1u )
  {
    v7 = 0;
    if ( (unsigned __int8)a2 == 2 )
      v7 = 1;
    MinecraftEventing::fireEventRespondedToAcceptContent(
      *(MinecraftEventing **)(a1 + 504),
      (const ResourcePacksInfoData *)(a1 + 564),
      v7);
  }
  v46 = 2;
  v47 = 1;
  v48 = 0;
  v45 = &off_26D676C;
  v54 = 0;
  v50 = 0;
  v51 = 0;
  v52 = &v50;
  v53 = &v50;
  v55 = (char)v4;
  if ( (unsigned __int8)v4 == 2 )
    v44 = 0;
    v40 = 0;
    v41 = 0;
    v42 = &v40;
    v43 = &v40;
    v9 = *(_QWORD *)(v5 + 568) >> 32;
    v8 = *(_QWORD *)(v5 + 568);
    if ( v8 != v9 )
    {
      v3 = &v38;
      v4 = &pthread_create;
      do
      {
        mce::UUID::asString((mce::UUID *)&v38);
        std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_emplace_unique<std::string>(
          (int)&v56,
          (int)&v39,
          (const void **)&v38);
        v12 = (void *)(v38 - 12);
        if ( (int *)(v38 - 12) != &dword_28898C0 )
        {
          v10 = (unsigned int *)(v38 - 4);
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
            j_j_j_j_j__ZdlPv_9(v12);
        }
        v8 += 64;
      }
      while ( v8 != v9 );
    }
    v13 = v6 == 0;
    if ( v6 )
      v3 = (int *)(*(_QWORD *)(v5 + 580) >> 32);
      v4 = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))*(_QWORD *)(v5 + 580);
      v13 = (int *)v4 == v3;
    if ( !v13 )
        mce::UUID::asString((mce::UUID *)&v37);
          (int)&v57,
          (const void **)&v37);
        v16 = (void *)(v37 - 12);
        if ( (int *)(v37 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v37 - 4);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j_j__ZdlPv_9(v16);
        v4 += 16;
      while ( (int *)v4 != v3 );
    v17 = v41;
    if ( v51 )
      if ( v41 )
        v41 = v51;
        v51 = v17;
        v18 = v52;
        v52 = v42;
        v42 = v18;
        v19 = v43;
        v43 = v53;
        v53 = v19;
        *(_DWORD *)(v17 + 4) = &v50;
        *(_DWORD *)(v41 + 4) = &v40;
      else
        v42 = v52;
        *(_DWORD *)(v51 + 4) = &v40;
        v51 = 0;
        v52 = &v50;
        v53 = &v50;
    else if ( v41 )
      v51 = v41;
      v52 = v42;
      v53 = v43;
      *(_DWORD *)(v41 + 4) = &v50;
      v41 = 0;
      v42 = &v40;
      v43 = &v40;
    v20 = v44;
    v44 = v54;
    v54 = v20;
    std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
      (int)&v39,
      v41);
  v21 = *(_DWORD *)(v5 + 220);
  v22 = v5 + 216;
  for ( i = v5 + 216; v21; v21 = *(_DWORD *)(v21 + 8) )
    i = v21;
  if ( i != v22 && !*(_BYTE *)(i + 16) )
    v22 = i;
  v24 = ClientInstance::getPacketSender(*(ClientInstance **)(v22 + 20));
  (*(void (**)(void))(*(_DWORD *)v24 + 8))();
  *(_DWORD *)(v5 + 592) = 0;
  *(_DWORD *)(v5 + 596) = 0;
  v25 = *(unsigned __int64 **)(v5 + 608);
  while ( v25 )
    v28 = v25;
    v29 = *v25 >> 32;
    v25 = (unsigned __int64 *)*v25;
    v30 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v29 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9(v30);
    operator delete(v28);
  _aeabi_memclr4(*(_QWORD *)(v5 + 600), 4 * (*(_QWORD *)(v5 + 600) >> 32));
  *(_DWORD *)(v5 + 608) = 0;
  *(_DWORD *)(v5 + 612) = 0;
  v31 = *(_DWORD *)(v5 + 636);
  while ( v31 )
    v34 = (void *)v31;
    v35 = *(_DWORD *)(v31 + 8);
    v31 = *(_DWORD *)v31;
    v36 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v35 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9(v36);
    operator delete(v34);
  _aeabi_memclr4(*(_QWORD *)(v5 + 628), 4 * (*(_QWORD *)(v5 + 628) >> 32));
  *(_DWORD *)(v5 + 636) = 0;
  *(_DWORD *)(v5 + 640) = 0;
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)&v49,
    v51);
}


void __fastcall MinecraftGame::_refreshEntitlements(MinecraftGame *this)
{
  MinecraftGame *v1; // r8@1
  PackInstance *v2; // r5@1
  PackInstance *v3; // r11@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  unsigned int *v10; // r2@27
  signed int v11; // r1@29
  PackManifest *v12; // r6@35
  char *v13; // r4@35
  int v14; // r7@36
  int v15; // r1@36
  int v16; // r2@36
  int v17; // r3@36
  Entitlement *v18; // r0@36
  signed int v19; // r10@36
  void *v20; // r0@36
  void *v21; // r0@37
  void *v22; // r0@38
  int v23; // r0@40
  char *v24; // r1@41
  char *v25; // r0@43
  int **v26; // r9@45
  ResourcePackManager *v27; // r0@46
  int v28; // r7@50
  int v29; // r1@50
  int v30; // r5@50
  int v31; // r0@50
  int v32; // r1@52
  int v33; // r0@56
  int v34; // r5@56
  unsigned int *v35; // r1@57
  unsigned int v36; // r0@59
  unsigned int *v37; // r4@63
  unsigned int v38; // r0@65
  int *v39; // r4@71
  int *v40; // r8@71
  void **v41; // r5@71
  unsigned int *v42; // r2@72
  signed int v43; // r1@74
  unsigned int *v44; // r2@76
  signed int v45; // r1@78
  unsigned int *v46; // r2@80
  signed int v47; // r1@82
  unsigned int *v48; // r2@84
  signed int v49; // r1@86
  int v50; // r1@104
  int j; // r0@104
  int v52; // r1@106
  int v53; // r10@110
  void *v54; // r0@110
  int *v55; // r10@110
  void *v56; // r0@110
  void *v57; // r0@111
  void *v58; // r4@112
  void *v59; // r7@112
  unsigned int *v60; // r2@114
  signed int v61; // r1@116
  int *v62; // r0@122
  void *v63; // r0@127
  void *v64; // r0@128
  int **v65; // r6@130
  unsigned int *v66; // r2@132
  signed int v67; // r1@134
  int *v68; // r0@140
  int **v69; // [sp+10h] [bp-B0h]@70
  MinecraftGame *v70; // [sp+14h] [bp-ACh]@50
  int i; // [sp+18h] [bp-A8h]@50
  int v72; // [sp+24h] [bp-9Ch]@71
  int v73; // [sp+28h] [bp-98h]@71
  void *ptr; // [sp+2Ch] [bp-94h]@110
  void *v75; // [sp+30h] [bp-90h]@110
  char *v76; // [sp+34h] [bp-8Ch]@110
  int v77; // [sp+3Ch] [bp-84h]@84
  int v78; // [sp+40h] [bp-80h]@71
  char v79; // [sp+44h] [bp-7Ch]@56
  int v80; // [sp+48h] [bp-78h]@56
  char *v81; // [sp+4Ch] [bp-74h]@40
  int v82; // [sp+50h] [bp-70h]@36
  int v83; // [sp+54h] [bp-6Ch]@36
  int v84; // [sp+58h] [bp-68h]@36
  int v85; // [sp+5Ch] [bp-64h]@36
  int v86; // [sp+60h] [bp-60h]@36
  int v87; // [sp+68h] [bp-58h]@11
  int v88; // [sp+6Ch] [bp-54h]@7
  int v89; // [sp+70h] [bp-50h]@3
  char v90; // [sp+78h] [bp-48h]@36
  int **v91; // [sp+84h] [bp-3Ch]@1
  int **v92; // [sp+88h] [bp-38h]@1
  int **v93; // [sp+8Ch] [bp-34h]@1
  __int64 v94; // [sp+90h] [bp-30h]@46

  v1 = this;
  ResourcePackRepository::refreshPacks(*((ResourcePackRepository **)this + 78));
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v3 = (PackInstance *)(*(_QWORD *)(*(_DWORD *)(*((_DWORD *)v1 + 80) + 64) + 4) >> 32);
  v2 = (PackInstance *)*(_QWORD *)(*(_DWORD *)(*((_DWORD *)v1 + 80) + 64) + 4);
  if ( v2 != v3 )
  {
    do
    {
      v12 = (PackManifest *)PackInstance::getManifest(v2);
      v13 = PackManifest::getIdentity(v12);
      if ( PackManifest::isPremium(v12) == 1 )
      {
        v14 = *((_DWORD *)v1 + 91);
        v15 = *((_DWORD *)v13 + 1);
        v16 = *((_DWORD *)v13 + 2);
        v17 = *((_DWORD *)v13 + 3);
        v82 = *(_DWORD *)v13;
        v83 = v15;
        v84 = v16;
        v85 = v17;
        SemVersion::SemVersion((int)&v86, (int)(v13 + 16));
        v90 = v13[40];
        v18 = (Entitlement *)EntitlementManager::getEntitlement(v14, (int)&v82);
        v19 = Entitlement::isOwned(v18);
        v20 = (void *)(v89 - 12);
        if ( (int *)(v89 - 12) != &dword_28898C0 )
        {
          v4 = (unsigned int *)(v89 - 4);
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
            j_j_j_j_j__ZdlPv_9(v20);
        }
        v21 = (void *)(v88 - 12);
        if ( (int *)(v88 - 12) != &dword_28898C0 )
          v6 = (unsigned int *)(v88 - 4);
              v7 = __ldrex(v6);
            while ( __strex(v7 - 1, v6) );
            v7 = (*v6)--;
          if ( v7 <= 0 )
            j_j_j_j_j__ZdlPv_9(v21);
        v22 = (void *)(v87 - 12);
        if ( (int *)(v87 - 12) != &dword_28898C0 )
          v8 = (unsigned int *)(v87 - 4);
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j_j__ZdlPv_9(v22);
        if ( !v19 )
          PackManifest::getName((PackManifest *)&v81, (int)v12);
          v23 = (int)v92;
          if ( v92 == v93 )
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
              (unsigned __int64 *)&v91,
              &v81);
            v24 = v81;
            *v92 = (int *)v81;
            v24 = (char *)&unk_28898CC;
            v81 = (char *)&unk_28898CC;
            v92 = (int **)(v23 + 4);
          v25 = v24 - 12;
          if ( (int *)(v24 - 12) != &dword_28898C0 )
            v10 = (unsigned int *)(v24 - 4);
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
              j_j_j_j_j__ZdlPv_9(v25);
      }
      v2 = (PackInstance *)((char *)v2 + 120);
    }
    while ( v2 != v3 );
    v26 = v92;
    if ( v91 != v92 )
      MinecraftGame::_deserializeGlobalResourcePacks((MinecraftGame *)((char *)&v94 + 4), (int)v1);
      v27 = (ResourcePackManager *)*((_DWORD *)v1 + 80);
      v94 = HIDWORD(v94);
      ResourcePackManager::setStack(v27, (int *)&v94, 2, 1);
      if ( (_DWORD)v94 )
        (*(void (**)(void))(*(_DWORD *)v94 + 4))();
      LODWORD(v94) = 0;
      if ( HIDWORD(v94) )
        (*(void (**)(void))(*(_DWORD *)HIDWORD(v94) + 4))();
      v28 = (int)v1 + 216;
      v29 = *((_DWORD *)v1 + 55);
      v30 = *((_DWORD *)v1 + 26);
      v31 = (int)v1 + 216;
      v70 = v1;
      for ( i = (int)v1 + 216; v29; v29 = *(_DWORD *)(v29 + 8) )
        v31 = v29;
      v32 = (int)v1 + 216;
      if ( v31 != v28 )
        if ( *(_BYTE *)(v31 + 16) )
          v31 = (int)v1 + 216;
        v32 = v31;
      v33 = ClientInstance::getSceneFactory(*(ClientInstance **)(v32 + 20));
      SceneFactory::createStartMenuScreen((SceneFactory *)&v79, v33);
      SceneStack::pushScreen(v30, (int)&v79, 1);
      v34 = v80;
      if ( v80 )
        v35 = (unsigned int *)(v80 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
        else
          v36 = (*v35)--;
        if ( v36 == 1 )
          v37 = (unsigned int *)(v34 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
      v26 = v91;
      v69 = v92;
      if ( v91 != v92 )
        v39 = &v73;
        v40 = &v78;
        v41 = (void **)&v72;
        do
          v50 = *((_DWORD *)v70 + 55);
          for ( j = v28; v50; v50 = *(_DWORD *)(v50 + 8) )
            j = v50;
          v52 = v28;
          if ( j != v28 )
            if ( *(_BYTE *)(j + 16) )
              j = v28;
            v52 = j;
          v53 = ClientInstance::getToastManager(*(ClientInstance **)(v52 + 20));
          sub_DA7364((void **)&v77, "resourcePack.toast.unownedContent.title");
          I18n::get(v39, v26);
          ptr = 0;
          v75 = 0;
          v76 = 0;
          v54 = operator new(4u);
          ptr = v54;
          v76 = (char *)v54 + 4;
          v75 = (void *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                          (int)v39,
                          (int)&ptr,
                          (int)v54);
          I18n::get(v40, &v77, (unsigned __int64 *)&ptr);
          sub_DA7364(v41, "resourcePack.toast.unownedContent.subtitle");
          ToastManager::pushToast(v53, 6, v40, (int *)v41, (int *)&Util::EMPTY_STRING);
          v55 = v39;
          v56 = (void *)(v72 - 12);
          if ( (int *)(v72 - 12) != &dword_28898C0 )
            v42 = (unsigned int *)(v72 - 4);
                v43 = __ldrex(v42);
              while ( __strex(v43 - 1, v42) );
              v43 = (*v42)--;
            if ( v43 <= 0 )
              j_j_j_j_j__ZdlPv_9(v56);
          v57 = (void *)(v78 - 12);
          if ( (int *)(v78 - 12) != &dword_28898C0 )
            v44 = (unsigned int *)(v78 - 4);
                v45 = __ldrex(v44);
              while ( __strex(v45 - 1, v44) );
              v45 = (*v44)--;
            if ( v45 <= 0 )
              j_j_j_j_j__ZdlPv_9(v57);
          v58 = v75;
          v59 = ptr;
          if ( ptr != v75 )
              v62 = (int *)(*(_DWORD *)v59 - 12);
              if ( v62 != &dword_28898C0 )
              {
                v60 = (unsigned int *)(*(_DWORD *)v59 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v61 = __ldrex(v60);
                  while ( __strex(v61 - 1, v60) );
                }
                else
                  v61 = (*v60)--;
                if ( v61 <= 0 )
                  j_j_j_j_j__ZdlPv_9(v62);
              }
              v59 = (char *)v59 + 4;
            while ( v59 != v58 );
            v59 = ptr;
          if ( v59 )
            operator delete(v59);
          v40 = &v78;
          v63 = (void *)(v73 - 12);
          if ( (int *)(v73 - 12) != &dword_28898C0 )
            v46 = (unsigned int *)(v73 - 4);
                v47 = __ldrex(v46);
              while ( __strex(v47 - 1, v46) );
              v47 = (*v46)--;
            if ( v47 <= 0 )
              j_j_j_j_j__ZdlPv_9(v63);
          v41 = (void **)&v72;
          v39 = v55;
          v64 = (void *)(v77 - 12);
          if ( (int *)(v77 - 12) != &dword_28898C0 )
            v48 = (unsigned int *)(v77 - 4);
                v49 = __ldrex(v48);
              while ( __strex(v49 - 1, v48) );
              v49 = (*v48)--;
            if ( v49 <= 0 )
              j_j_j_j_j__ZdlPv_9(v64);
          v28 = i;
          ++v26;
        while ( v26 != v69 );
        v26 = v92;
        v65 = v91;
        if ( v91 != v92 )
            v68 = *v65 - 3;
            if ( v68 != &dword_28898C0 )
              v66 = (unsigned int *)(*v65 - 1);
              if ( &pthread_create )
                __dmb();
                do
                  v67 = __ldrex(v66);
                while ( __strex(v67 - 1, v66) );
              else
                v67 = (*v66)--;
              if ( v67 <= 0 )
                j_j_j_j_j__ZdlPv_9(v68);
            ++v65;
          while ( v65 != v26 );
          v26 = v91;
    if ( v26 )
      operator delete(v26);
  }
}


void __fastcall MinecraftGame::getGlobalResourcePacksPath(MinecraftGame *this)
{
  MinecraftGame::getGlobalResourcePacksPath(this);
}


void __fastcall MinecraftGame::getResourcePackProgress(MinecraftGame *this, int a2)
{
  __int64 v2; // r2@1

  HIDWORD(v2) = *(_DWORD *)(a2 + 640);
  LODWORD(v2) = HIDWORD(v2) - *(_DWORD *)(a2 + 612);
  Util::format(this, "[%d / %d]", v2);
}


int __fastcall MinecraftGame::getPrimarySceneFactory(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  return ClientInstance::getSceneFactory(*((ClientInstance **)v2 + 5));
}


int __fastcall MinecraftGame::getLocalServerLevel(MinecraftGame *this)
{
  int v1; // r1@1
  int result; // r0@2
  int v3; // r2@3
  char *v4; // r0@3
  char *i; // r1@3
  Minecraft *v6; // r0@8

  v1 = *((_DWORD *)this + 50);
  if ( v1 )
  {
    result = j_j_j__ZNK9Minecraft8getLevelEv_0(*(Minecraft **)(v1 + 8));
  }
  else
    v3 = *((_DWORD *)this + 55);
    v4 = (char *)this + 216;
    for ( i = v4; v3; v3 = *(_DWORD *)(v3 + 8) )
      i = (char *)v3;
    if ( i != v4 && !i[16] )
      v4 = i;
    v6 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)v4 + 5));
    result = j_j_j__ZNK9Minecraft8getLevelEv_0(v6);
  return result;
}


char *__fastcall MinecraftGame::_initPerMachineOptionObservers(MinecraftGame *this)
{
  __int64 v1; // r4@1 OVERLAPPED
  int v2; // r6@1 OVERLAPPED
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r7@8
  unsigned int v6; // r0@10
  BoolOption *v7; // r6@16
  int v8; // r6@18
  _DWORD *v9; // r0@18
  __int64 v10; // r1@18
  int v11; // r6@20
  _DWORD *v12; // r0@20
  __int64 v13; // r1@20
  int v14; // r6@22
  _QWORD *v15; // r0@22
  int v16; // r6@24
  _QWORD *v17; // r0@24
  __int64 v18; // r1@24
  int v19; // r6@26
  _DWORD *v20; // r0@26
  __int64 v21; // r1@26
  int v22; // r6@28
  _DWORD *v23; // r0@28
  __int64 v24; // r1@28
  int v25; // r6@30
  _DWORD *v26; // r0@30
  __int64 v27; // r1@30
  int v28; // r6@32
  _QWORD *v29; // r0@32
  __int64 v30; // r1@32
  int v31; // r6@34
  _QWORD *v32; // r0@34
  __int64 v33; // r1@34
  int v34; // r6@36
  _DWORD *v35; // r0@36
  __int64 v36; // r1@36
  int v37; // r6@38
  _DWORD *v38; // r0@38
  __int64 v39; // r1@38
  int v40; // r6@40
  _DWORD *v41; // r0@40
  __int64 v42; // r1@40
  int v43; // r6@42
  _DWORD *v44; // r0@42
  __int64 v45; // r1@42
  int v46; // r6@44
  _DWORD *v47; // r0@44
  __int64 v48; // r1@44
  int v49; // r6@46
  _DWORD *v50; // r0@46
  __int64 v51; // r1@46
  int v52; // r6@48
  _DWORD *v53; // r0@48
  __int64 v54; // r1@48
  int v55; // r6@50
  _DWORD *v56; // r0@50
  __int64 v57; // r1@50
  int v58; // r6@52
  _DWORD *v59; // r0@52
  __int64 v60; // r1@52
  int v61; // r6@54
  _QWORD *v62; // r0@54
  __int64 v63; // r1@54
  int v64; // r6@56
  _DWORD *v65; // r0@56
  __int64 v66; // r1@56
  int v67; // r6@58
  _DWORD *v68; // r0@58
  __int64 v69; // r1@58
  int v70; // r6@60
  _DWORD *v71; // r0@60
  __int64 v72; // r1@60
  int v73; // r6@62
  _DWORD *v74; // r0@62
  __int64 v75; // r1@62
  int v76; // r6@64
  _DWORD *v77; // r0@64
  __int64 v78; // r1@64
  _DWORD *v79; // r0@66
  __int64 v80; // r1@66
  char *result; // r0@66
  _DWORD *v82; // [sp+4h] [bp-1ACh]@66
  __int64 v83; // [sp+Ch] [bp-1A4h]@66
  _DWORD *v84; // [sp+14h] [bp-19Ch]@64
  __int64 v85; // [sp+1Ch] [bp-194h]@64
  _DWORD *v86; // [sp+24h] [bp-18Ch]@62
  __int64 v87; // [sp+2Ch] [bp-184h]@62
  _DWORD *v88; // [sp+34h] [bp-17Ch]@60
  __int64 v89; // [sp+3Ch] [bp-174h]@60
  _DWORD *v90; // [sp+44h] [bp-16Ch]@58
  __int64 v91; // [sp+4Ch] [bp-164h]@58
  _DWORD *v92; // [sp+54h] [bp-15Ch]@56
  __int64 v93; // [sp+5Ch] [bp-154h]@56
  _QWORD *v94; // [sp+64h] [bp-14Ch]@54
  __int64 v95; // [sp+6Ch] [bp-144h]@54
  _DWORD *v96; // [sp+74h] [bp-13Ch]@52
  __int64 v97; // [sp+7Ch] [bp-134h]@52
  _DWORD *v98; // [sp+84h] [bp-12Ch]@50
  __int64 v99; // [sp+8Ch] [bp-124h]@50
  _DWORD *v100; // [sp+94h] [bp-11Ch]@48
  __int64 v101; // [sp+9Ch] [bp-114h]@48
  _DWORD *v102; // [sp+A4h] [bp-10Ch]@46
  __int64 v103; // [sp+ACh] [bp-104h]@46
  _DWORD *v104; // [sp+B4h] [bp-FCh]@44
  __int64 v105; // [sp+BCh] [bp-F4h]@44
  _DWORD *v106; // [sp+C4h] [bp-ECh]@42
  __int64 v107; // [sp+CCh] [bp-E4h]@42
  _DWORD *v108; // [sp+D4h] [bp-DCh]@40
  __int64 v109; // [sp+DCh] [bp-D4h]@40
  _DWORD *v110; // [sp+E4h] [bp-CCh]@38
  __int64 v111; // [sp+ECh] [bp-C4h]@38
  _DWORD *v112; // [sp+F4h] [bp-BCh]@36
  __int64 v113; // [sp+FCh] [bp-B4h]@36
  _QWORD *v114; // [sp+104h] [bp-ACh]@34
  __int64 v115; // [sp+10Ch] [bp-A4h]@34
  _QWORD *v116; // [sp+114h] [bp-9Ch]@32
  __int64 v117; // [sp+11Ch] [bp-94h]@32
  _DWORD *v118; // [sp+124h] [bp-8Ch]@30
  __int64 v119; // [sp+12Ch] [bp-84h]@30
  _DWORD *v120; // [sp+134h] [bp-7Ch]@28
  __int64 v121; // [sp+13Ch] [bp-74h]@28
  _DWORD *v122; // [sp+144h] [bp-6Ch]@26
  __int64 v123; // [sp+14Ch] [bp-64h]@26
  _QWORD *v124; // [sp+154h] [bp-5Ch]@24
  __int64 v125; // [sp+15Ch] [bp-54h]@24
  _QWORD *v126; // [sp+164h] [bp-4Ch]@22
  void (*v127)(void); // [sp+16Ch] [bp-44h]@22
  signed int (__fastcall *v128)(__int64 **); // [sp+170h] [bp-40h]@22
  _DWORD *v129; // [sp+174h] [bp-3Ch]@20
  __int64 v130; // [sp+17Ch] [bp-34h]@20
  _DWORD *v131; // [sp+184h] [bp-2Ch]@18
  __int64 v132; // [sp+18Ch] [bp-24h]@18
  char v133; // [sp+194h] [bp-1Ch]@1
  int v134; // [sp+198h] [bp-18h]@1

  LODWORD(v1) = this;
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v133, (int)this);
  *(__int64 *)((char *)&v1 + 4) = *(_QWORD *)&v133;
  if ( v134 )
  {
    v3 = (unsigned int *)(v134 + 4);
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
  if ( OfferRepository::isTrial(*(OfferRepository **)(v1 + 296)) == 1 )
    v7 = (BoolOption *)Options::get(SHIDWORD(v1), 140);
    if ( !Option::hasOverrideSource(v7) )
      BoolOption::set(v7, 0);
  v8 = Options::get(SHIDWORD(v1), 77);
  v9 = operator new(4u);
  LODWORD(v10) = sub_C206EC;
  *v9 = v1;
  HIDWORD(v10) = sub_C206D8;
  v131 = v9;
  v132 = v10;
  Option::registerLock(v8, v1, (int)&v131);
  if ( (_DWORD)v132 )
    ((void (*)(void))v132)();
  v11 = Options::get(SHIDWORD(v1), 140);
  v12 = operator new(4u);
  LODWORD(v13) = sub_C2076A;
  *v12 = v1;
  HIDWORD(v13) = sub_C20722;
  v129 = v12;
  v130 = v13;
  Option::registerLock(v11, v1, (int)&v129);
  if ( (_DWORD)v130 )
    ((void (*)(void))v130)();
  v14 = Options::get(SHIDWORD(v1), 5);
  v15 = operator new(8u);
  *v15 = v1;
  v126 = v15;
  v127 = (void (*)(void))sub_C208FC;
  v128 = sub_C207A0;
  Option::registerLock(v14, v1, (int)&v126);
  if ( v127 )
    v127();
  v16 = Options::get(SHIDWORD(v1), 4);
  v17 = operator new(8u);
  LODWORD(v18) = sub_C2097C;
  *v17 = v1;
  HIDWORD(v18) = sub_C20936;
  v124 = v17;
  v125 = v18;
  Option::registerLock(v16, v1, (int)&v124);
  if ( (_DWORD)v125 )
    ((void (*)(void))v125)();
  v19 = Options::get(SHIDWORD(v1), 129);
  v20 = operator new(4u);
  LODWORD(v21) = sub_C209EC;
  *v20 = v1;
  HIDWORD(v21) = sub_C209B6;
  v122 = v20;
  v123 = v21;
  Option::registerLock(v19, v1, (int)&v122);
  if ( (_DWORD)v123 )
    ((void (*)(void))v123)();
  v22 = Options::get(SHIDWORD(v1), 130);
  v23 = operator new(4u);
  LODWORD(v24) = sub_C20A3A;
  *v23 = v1;
  HIDWORD(v24) = sub_C20A22;
  v120 = v23;
  v121 = v24;
  Option::registerLock(v22, v1, (int)&v120);
  if ( (_DWORD)v121 )
    ((void (*)(void))v121)();
  v25 = Options::get(SHIDWORD(v1), 3);
  v26 = operator new(4u);
  LODWORD(v27) = sub_C20A88;
  *v26 = v1;
  HIDWORD(v27) = sub_C20A70;
  v118 = v26;
  v119 = v27;
  Option::registerObserver(v25, v1, (int)&v118);
  if ( (_DWORD)v119 )
    ((void (*)(void))v119)();
  v28 = Options::get(SHIDWORD(v1), 140);
  v29 = operator new(8u);
  LODWORD(v30) = sub_C20CB0;
  *v29 = v1;
  HIDWORD(v30) = sub_C20AC0;
  v116 = v29;
  v117 = v30;
  Option::registerObserver(v28, v1, (int)&v116);
  if ( (_DWORD)v117 )
    ((void (*)(void))v117)();
  v31 = Options::get(SHIDWORD(v1), 4);
  v32 = operator new(8u);
  LODWORD(v33) = sub_C20D82;
  *v32 = v1;
  HIDWORD(v33) = sub_C20CEA;
  v114 = v32;
  v115 = v33;
  Option::registerObserver(v31, v1, (int)&v114);
  if ( (_DWORD)v115 )
    ((void (*)(void))v115)();
  v34 = Options::get(SHIDWORD(v1), 22);
  v35 = operator new(8u);
  LODWORD(v36) = sub_C20E48;
  *v35 = v1;
  v35[1] = v1;
  HIDWORD(v36) = sub_C20DBC;
  v112 = v35;
  v113 = v36;
  Option::registerObserver(v34, v1, (int)&v112);
  if ( (_DWORD)v113 )
    ((void (*)(void))v113)();
  v37 = Options::get(SHIDWORD(v1), 23);
  v38 = operator new(4u);
  LODWORD(v39) = sub_C20F4C;
  *v38 = v1;
  HIDWORD(v39) = sub_C20ECC;
  v110 = v38;
  v111 = v39;
  Option::registerObserver(v37, v1, (int)&v110);
  if ( (_DWORD)v111 )
    ((void (*)(void))v111)();
  v40 = Options::get(SHIDWORD(v1), 24);
  v41 = operator new(4u);
  LODWORD(v42) = sub_C20F4C;
  *v41 = v1;
  HIDWORD(v42) = sub_C20ECC;
  v108 = v41;
  v109 = v42;
  Option::registerObserver(v40, v1, (int)&v108);
  if ( (_DWORD)v109 )
    ((void (*)(void))v109)();
  v43 = Options::get(SHIDWORD(v1), 36);
  v44 = operator new(4u);
  LODWORD(v45) = sub_C20FD8;
  *v44 = v1;
  HIDWORD(v45) = sub_C20F84;
  v106 = v44;
  v107 = v45;
  Option::registerObserver(v43, v1, (int)&v106);
  if ( (_DWORD)v107 )
    ((void (*)(void))v107)();
  v46 = Options::get(SHIDWORD(v1), 32);
  v47 = operator new(4u);
  LODWORD(v48) = sub_C2102A;
  *v47 = v1;
  HIDWORD(v48) = sub_C2100E;
  v104 = v47;
  v105 = v48;
  Option::registerObserver(v46, v1, (int)&v104);
  if ( (_DWORD)v105 )
    ((void (*)(void))v105)();
  v49 = Options::get(SHIDWORD(v1), 33);
  v50 = operator new(4u);
  LODWORD(v51) = sub_C2108C;
  *v50 = v1;
  HIDWORD(v51) = sub_C21060;
  v102 = v50;
  v103 = v51;
  Option::registerObserver(v49, v1, (int)&v102);
  if ( (_DWORD)v103 )
    ((void (*)(void))v103)();
  v52 = Options::get(SHIDWORD(v1), 19);
  v53 = operator new(4u);
  LODWORD(v54) = sub_C21150;
  *v53 = v1;
  HIDWORD(v54) = sub_C210C4;
  v100 = v53;
  v101 = v54;
  Option::registerObserver(v52, v1, (int)&v100);
  if ( (_DWORD)v101 )
    ((void (*)(void))v101)();
  v55 = Options::get(SHIDWORD(v1), 51);
  v56 = operator new(4u);
  LODWORD(v57) = sub_C21288;
  *v56 = v1;
  HIDWORD(v57) = sub_C211FC;
  v98 = v56;
  v99 = v57;
  Option::registerObserver(v55, v1, (int)&v98);
  if ( (_DWORD)v99 )
    ((void (*)(void))v99)();
  v58 = Options::get(SHIDWORD(v1), 39);
  v59 = operator new(4u);
  LODWORD(v60) = sub_C213C0;
  *v59 = v1;
  HIDWORD(v60) = sub_C21334;
  v96 = v59;
  v97 = v60;
  Option::registerObserver(v58, v1, (int)&v96);
  if ( (_DWORD)v97 )
    ((void (*)(void))v97)();
  v61 = Options::get(SHIDWORD(v1), 40);
  v62 = operator new(8u);
  LODWORD(v63) = sub_C214B8;
  *v62 = v1;
  HIDWORD(v63) = sub_C2142C;
  v94 = v62;
  v95 = v63;
  Option::registerObserver(v61, v1, (int)&v94);
  if ( (_DWORD)v95 )
    ((void (*)(void))v95)();
  v64 = Options::get(SHIDWORD(v1), 1);
  v65 = operator new(4u);
  LODWORD(v66) = sub_C218D4;
  *v65 = v1;
  HIDWORD(v66) = sub_C21528;
  v92 = v65;
  v93 = v66;
  Option::registerObserver(v64, v1, (int)&v92);
  if ( (_DWORD)v93 )
    ((void (*)(void))v93)();
  v67 = Options::get(SHIDWORD(v1), 129);
  v68 = operator new(4u);
  LODWORD(v69) = sub_C21A98;
  *v68 = v1;
  HIDWORD(v69) = sub_C2190C;
  v90 = v68;
  v91 = v69;
  Option::registerObserver(v67, v1, (int)&v90);
  if ( (_DWORD)v91 )
    ((void (*)(void))v91)();
  v70 = Options::get(SHIDWORD(v1), 130);
  v71 = operator new(4u);
  LODWORD(v72) = sub_C21E00;
  *v71 = v1;
  HIDWORD(v72) = sub_C21B28;
  v88 = v71;
  v89 = v72;
  Option::registerObserver(v70, v1, (int)&v88);
  if ( (_DWORD)v89 )
    ((void (*)(void))v89)();
  v73 = Options::get(SHIDWORD(v1), 131);
  v74 = operator new(4u);
  LODWORD(v75) = sub_C21F04;
  *v74 = v1;
  HIDWORD(v75) = sub_C21EB0;
  v86 = v74;
  v87 = v75;
  Option::registerObserver(v73, v1, (int)&v86);
  if ( (_DWORD)v87 )
    ((void (*)(void))v87)();
  v76 = Options::get(SHIDWORD(v1), 103);
  v77 = operator new(4u);
  LODWORD(v78) = sub_C21F56;
  *v77 = v1;
  HIDWORD(v78) = sub_C21F3A;
  v84 = v77;
  v85 = v78;
  Option::registerObserver(v76, v1, (int)&v84);
  if ( (_DWORD)v85 )
    ((void (*)(void))v85)();
  HIDWORD(v1) = Options::get(SHIDWORD(v1), 149);
  v79 = operator new(4u);
  LODWORD(v80) = sub_C22014;
  *v79 = v1;
  HIDWORD(v80) = sub_C21F8C;
  v82 = v79;
  v83 = v80;
  result = Option::registerObserver(SHIDWORD(v1), v1, (int)&v82);
  if ( (_DWORD)v83 )
    result = (char *)((int (*)(void))v83)();
  return result;
}


int __fastcall MinecraftGame::isDedicatedServer(MinecraftGame *this)
{
  return 0;
}


int __fastcall MinecraftGame::_addVanillaVRPack(int result, ResourcePackStack *a2, int a3)
{
  ResourcePackStack *v3; // r4@1
  int v4; // r5@1
  int v5; // [sp+0h] [bp-88h]@2

  v3 = a2;
  v4 = result;
  if ( a3 == 1 )
  {
    PackInstance::PackInstance((int)&v5, *(_DWORD *)(*(_DWORD *)(result + 312) + 48), -1, 0);
    ResourcePackStack::add((int)v3, (int)&v5, *(_DWORD *)(v4 + 312), 0);
    result = (int)PackReport::~PackReport((PackReport *)&v5);
  }
  return result;
}


ResourcePackStack *__fastcall MinecraftGame::_buildVanillaClientStack(MinecraftGame *this, int a2, int a3)
{
  MinecraftGame *v3; // r6@1
  int v4; // r7@1
  int v5; // r5@1
  ResourcePackStack *v6; // r4@1
  int v7; // r1@1
  ResourcePackManager *v8; // r0@3
  ResourcePackStack *result; // r0@3
  ResourcePackStack *v10; // [sp+4h] [bp-94h]@3
  char v11; // [sp+8h] [bp-90h]@2

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (ResourcePackStack *)operator new(0x14u);
  *(_QWORD *)v6 = (unsigned int)&off_26EAC8C;
  *((_DWORD *)v6 + 2) = 0;
  *((_DWORD *)v6 + 3) = 0;
  *((_DWORD *)v6 + 4) = 0;
  v7 = *(_DWORD *)(*((_DWORD *)v3 + 78) + 32);
  if ( v7 )
  {
    PackInstance::PackInstance((int)&v11, v7, -1, 0);
    ResourcePackStack::add((int)v6, (int)&v11, *((_DWORD *)v3 + 78), 0);
    PackReport::~PackReport((PackReport *)&v11);
  }
  MinecraftGame::_addVanillaMainPacks(v3, v6, v4);
  v8 = (ResourcePackManager *)*((_DWORD *)v3 + 80);
  v10 = v6;
  ResourcePackManager::setStack(v8, (int *)&v10, 3, v5);
  result = v10;
  if ( v10 )
    result = (ResourcePackStack *)(*(int (**)(void))(*(_DWORD *)v10 + 4))();
  return result;
}


void __fastcall MinecraftGame::onClientCreatedLevel(MinecraftGame *this, ClientInstance *a2)
{
  MinecraftGame::onClientCreatedLevel(this, a2);
}


unsigned __int64 __fastcall MinecraftGame::startFrame(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  __int64 v8; // kr00_8@3
  unsigned int *v9; // r1@4
  unsigned int v10; // r0@6
  unsigned int *v11; // r7@10
  unsigned int v12; // r0@12
  int v13; // r0@18
  int v14; // r5@20
  unsigned int *v15; // r1@21
  unsigned int v16; // r0@23
  unsigned int *v17; // r6@27
  unsigned int v18; // r0@29
  mce::RenderContext *v19; // r0@35
  mce::RenderContextImmediate *v20; // r0@35
  mce::RenderContext *v21; // r0@35
  __int64 v26; // [sp+0h] [bp-50h]@0
  Options *v27; // [sp+8h] [bp-48h]@18
  int v28; // [sp+Ch] [bp-44h]@20
  char v29; // [sp+10h] [bp-40h]@3
  int v30; // [sp+14h] [bp-3Ch]@3
  int v31; // [sp+18h] [bp-38h]@1
  double v32; // [sp+20h] [bp-30h]@1
  unsigned int v34; // [sp+30h] [bp-20h]@1

  v1 = this;
  v32 = 0.0;
  v34 = 1;
  v31 = unk_27F636C;
  unk_27F636C = &v31;
  _R0 = getTimeS();
  __asm
  {
    VMOV            D0, R0, R2
    VSTR            D0, [SP,#0x50+var_30]
    VSTR            D0, [SP,#0x50+var_28]
  }
  _R2 = v31;
  if ( v31 )
    __asm
    {
      VMOV            D0, R0, R1
      VLDR            D1, [R2,#8]
      VADD.F64        D0, D1, D0
      VSTR            D0, [R2,#8]
    }
  MinecraftGame::tickInput(v1);
  PerfTimer::mEnabled = 0;
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v29, (int)v1);
  v8 = *(_QWORD *)&v29;
  if ( v30 )
    v9 = (unsigned int *)(v30 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(HIDWORD(v8) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 8))(HIDWORD(v8));
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
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 12))(HIDWORD(v8));
  if ( (_DWORD)v8 )
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v27, (int)v1);
    v13 = Options::getRenderDebug(v27);
    if ( v13 )
      LOBYTE(v13) = 1;
    v14 = v28;
    PerfTimer::mEnabled = v13;
    if ( v28 )
      v15 = (unsigned int *)(v28 + 4);
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
  if ( !*((_BYTE *)v1 + 444) )
    v19 = (mce::RenderContext *)mce::RenderContextImmediate::get((mce::RenderContextImmediate *)*((_BYTE *)v1 + 444));
    v20 = (mce::RenderContextImmediate *)mce::RenderContext::enableThreadedSubmitMode(v19, *((_BYTE *)v1 + 116));
    v21 = (mce::RenderContext *)mce::RenderContextImmediate::get(v20);
    mce::RenderContext::beginFrame(v21);
  LODWORD(_R0) = getTimeS();
    VMOV            D1, R0, R1
    VLDR            D0, [SP,#0x50+var_30]
    VADD.F64        D2, D0, D1
    VSTR            D2, [SP,#0x50+var_30]
    VLDR            D0, [SP,#0x50+var_28]
    VADD.F64        D0, D0, D1
  HIDWORD(_R0) = v31;
      VLDR            D2, [R1,#8]
      VSUB.F64        D1, D2, D1
      VSTR            D1, [R1,#8]
      VLDR            D2, [SP,#0x50+var_30]
  __asm { VMOV            R2, R3, D2 }
  LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
  unk_27F636C = v31;
  __asm { VSTR            D0, [SP,#0x50+var_50] }
  return __PAIR__(v34, ProfilerLite::_endScope(_R0, _R2, _R3, v26));
}


void __fastcall MinecraftGame::updateFoliageColors(MinecraftGame *this)
{
  MinecraftGame::updateFoliageColors(this);
}


void __fastcall MinecraftGame::sendLocalMessage(int a1, int *a2, int *a3)
{
  int *v3; // r4@1
  int v4; // r2@1
  int v5; // r0@1
  int *v6; // r5@1
  int i; // r1@1
  int v8; // r6@6
  void **v9; // r0@6
  void *v10; // r0@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int v13; // [sp+14h] [bp-1Ch]@6

  v3 = a3;
  v4 = *(_DWORD *)(a1 + 220);
  v5 = a1 + 216;
  v6 = a2;
  for ( i = v5; v4; v4 = *(_DWORD *)(v4 + 8) )
    i = v4;
  if ( i != v5 && !*(_BYTE *)(i + 16) )
    v5 = i;
  v8 = ClientInstance::getGuiData(*(ClientInstance **)(v5 + 20));
  v9 = sub_DA7364((void **)&v13, (const char *)&unk_257BC67);
  GuiData::addMessage(v8, v6, v3, 1092616192, 0, 0, (const void **)v9);
  v10 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v13 - 4);
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
      j_j_j_j_j__ZdlPv_9(v10);
  }
}


void __fastcall MinecraftGame::onPlayerLoaded(MinecraftGame *this, ClientInstance *a2, Player *a3)
{
  Player *v3; // r6@1
  MinecraftGame *v4; // r5@1
  ClientInstance *v5; // r10@1
  Minecraft *v6; // r0@2
  void (***v7)(void); // r0@2
  Minecraft *v8; // r0@2
  Level *v9; // r0@2
  Minecraft *v10; // r0@3
  ServerNetworkHandler *v11; // r6@3
  Minecraft *v12; // r0@4
  Level *v13; // r0@4
  int *v14; // r7@6
  int v15; // r0@6
  int v16; // r5@6
  unsigned int *v17; // r1@7
  unsigned int v18; // r0@9
  Level *v19; // r0@11
  ServerNetworkHandler *v20; // r0@12
  int v21; // r5@16
  const void **v22; // r0@16
  void *v23; // r5@16
  void *v24; // r7@16
  unsigned int *v25; // r2@18
  signed int v26; // r1@20
  int *v27; // r0@26
  char *v28; // r0@31
  void *v29; // r0@32
  void *v30; // r0@33
  unsigned int *v31; // r2@34
  signed int v32; // r1@36
  unsigned int *v33; // r6@40
  unsigned int v34; // r0@42
  unsigned int *v35; // r2@47
  signed int v36; // r1@49
  unsigned int *v37; // r2@51
  signed int v38; // r1@53
  GuiData *v39; // r0@58
  __int64 v40; // [sp+0h] [bp-48h]@16
  int v41; // [sp+8h] [bp-40h]@16
  int v42; // [sp+10h] [bp-38h]@16
  int v43; // [sp+14h] [bp-34h]@16
  char *v44; // [sp+18h] [bp-30h]@16
  Options *v45; // [sp+1Ch] [bp-2Ch]@6
  int v46; // [sp+20h] [bp-28h]@6

  v3 = a3;
  v4 = this;
  v5 = a2;
  if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)a3 + 1408))(a3) == 1 )
  {
    v6 = (Minecraft *)ClientInstance::getServerData(v5);
    v7 = (void (***)(void))Minecraft::getNetEventCallback(v6);
    (**v7)();
    v8 = (Minecraft *)ClientInstance::getServerData(v5);
    v9 = (Level *)Minecraft::getLevel(v8);
    if ( !Level::isClientSide(v9) )
    {
      v10 = (Minecraft *)ClientInstance::getServerData(v5);
      v11 = (ServerNetworkHandler *)Minecraft::getServerNetworkHandler(v10);
      if ( v11 )
      {
        v12 = (Minecraft *)ClientInstance::getServerData(v5);
        v13 = (Level *)Minecraft::getLevel(v12);
        if ( Level::isMultiplayerGame(v13) == 1 )
        {
          if ( MinecraftGame::hasNetworkPrivileges(v4, 1) == 1 )
          {
            MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v45, (int)v4);
            v14 = (int *)Options::getDisplayedUsername(v45);
            v15 = MinecraftGame::isServerVisible(v4);
            ServerNetworkHandler::allowIncomingConnections((int)v11, v14, v15);
            v16 = v46;
            if ( v46 )
            {
              v17 = (unsigned int *)(v46 + 4);
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
                v33 = (unsigned int *)(v16 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v34 = __ldrex(v33);
                  while ( __strex(v34 - 1, v33) );
                }
                else
                  v34 = (*v33)--;
                if ( v34 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
            }
          }
          else
            ServerNetworkHandler::disallowIncomingConnections(v11);
            v21 = ClientInstance::getGuiData(v5);
            sub_DA7364((void **)&v42, "disconnectionScreen.nowifi");
            I18n::get(&v43, (int **)&v42);
            v22 = sub_DA7948((const void **)&v43, 0, dword_27C5D80, *(_BYTE **)(dword_27C5D80 - 12));
            v44 = (char *)*v22;
            *v22 = &unk_28898CC;
            v40 = 0LL;
            v41 = 0;
            GuiData::displayLocalizableMessage(v21, (int *)&v44, (unsigned __int64 *)&v40, 0);
            v24 = (void *)HIDWORD(v40);
            v23 = (void *)v40;
            if ( (_DWORD)v40 != HIDWORD(v40) )
              do
                v27 = (int *)(*(_DWORD *)v23 - 12);
                if ( v27 != &dword_28898C0 )
                  v25 = (unsigned int *)(*(_DWORD *)v23 - 4);
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
                    j_j_j_j_j__ZdlPv_9(v27);
                v23 = (char *)v23 + 4;
              while ( v23 != v24 );
              v23 = (void *)v40;
            if ( v23 )
              operator delete(v23);
            v28 = v44 - 12;
            if ( (int *)(v44 - 12) != &dword_28898C0 )
              v35 = (unsigned int *)(v44 - 4);
                  v36 = __ldrex(v35);
                while ( __strex(v36 - 1, v35) );
                v36 = (*v35)--;
              if ( v36 <= 0 )
                j_j_j_j_j__ZdlPv_9(v28);
            v29 = (void *)(v43 - 12);
            if ( (int *)(v43 - 12) != &dword_28898C0 )
              v37 = (unsigned int *)(v43 - 4);
                  v38 = __ldrex(v37);
                while ( __strex(v38 - 1, v37) );
                v38 = (*v37)--;
              if ( v38 <= 0 )
                j_j_j_j_j__ZdlPv_9(v29);
            v30 = (void *)(v42 - 12);
            if ( (int *)(v42 - 12) != &dword_28898C0 )
              v31 = (unsigned int *)(v42 - 4);
                  v32 = __ldrex(v31);
                while ( __strex(v32 - 1, v31) );
                v32 = (*v31)--;
              if ( v32 <= 0 )
                j_j_j_j_j__ZdlPv_9(v30);
        }
        else
          ServerNetworkHandler::disallowIncomingConnections(v11);
      }
    }
    v39 = (GuiData *)ClientInstance::getGuiData(v5);
    GuiData::onLevelGenerated(v39);
  }
  else
    v19 = (Level *)Minecraft::getLevel(*(Minecraft **)(*((_DWORD *)v4 + 50) + 8));
    if ( !Level::isClientSide(v19) )
      v20 = (ServerNetworkHandler *)Minecraft::getServerNetworkHandler(*(Minecraft **)(*((_DWORD *)v4 + 50) + 8));
      if ( v20 )
        j_j_j__ZN20ServerNetworkHandler24onReady_ClientGenerationER6PlayerRK17NetworkIdentifier(
          v20,
          v3,
          (Player *)((char *)v3 + 4392));
}


int __fastcall MinecraftGame::_buildLoadingVanillaClientStack(MinecraftGame *this, int a2)
{
  MinecraftGame *v2; // r5@1
  int v3; // r6@1
  _DWORD *v4; // r0@1
  int v5; // r4@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r1@3
  ResourcePackManager *v9; // r0@7
  int result; // r0@7
  int v11; // [sp+4h] [bp-17Ch]@7
  char v12; // [sp+8h] [bp-178h]@2
  char v13; // [sp+80h] [bp-100h]@4
  char v14; // [sp+F8h] [bp-88h]@6

  v2 = this;
  v3 = a2;
  v4 = operator new(0x14u);
  v5 = (int)v4;
  *(_QWORD *)v4 = (unsigned int)&off_26EAC8C;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v6 = *((_DWORD *)v2 + 78);
  v7 = *(_DWORD *)(v6 + 32);
  if ( v7 )
  {
    PackInstance::PackInstance((int)&v12, v7, -1, 0);
    ResourcePackStack::add(v5, (int)&v12, *((_DWORD *)v2 + 78), 0);
    PackReport::~PackReport((PackReport *)&v12);
    v6 = *((_DWORD *)v2 + 78);
  }
  v8 = *(_DWORD *)(v6 + 36);
  if ( v8 )
    PackInstance::PackInstance((int)&v13, v8, -1, 0);
    ResourcePackStack::add(v5, (int)&v13, *((_DWORD *)v2 + 78), 0);
    PackReport::~PackReport((PackReport *)&v13);
  if ( v3 == 1 )
    PackInstance::PackInstance((int)&v14, *(_DWORD *)(*((_DWORD *)v2 + 78) + 48), -1, 0);
    ResourcePackStack::add(v5, (int)&v14, *((_DWORD *)v2 + 78), 0);
    PackReport::~PackReport((PackReport *)&v14);
  v9 = (ResourcePackManager *)*((_DWORD *)v2 + 80);
  v11 = v5;
  ResourcePackManager::setStack(v9, &v11, 3, 1);
  result = v11;
  if ( v11 )
    result = (*(int (**)(void))(*(_DWORD *)v11 + 4))();
  return result;
}


void __fastcall MinecraftGame::adjustClientsUISizeAndScale(MinecraftGame *this, int a2, int a3, float a4)
{
  MinecraftGame *v4; // r4@1
  _DWORD *v5; // r0@1
  int (__fastcall *v6)(void **, void **, int); // r3@1
  int v7; // r7@1
  int v8; // r5@1
  int v9; // r0@4
  int v10; // r1@9
  int i; // r0@9
  int v12; // r0@14
  _DWORD *v13; // [sp+0h] [bp-30h]@1
  int (__fastcall *v14)(void **, void **, int); // [sp+8h] [bp-28h]@1
  int (__fastcall *v15)(int, ClientInstance *); // [sp+Ch] [bp-24h]@1
  float v16; // [sp+10h] [bp-20h]@1
  int v17; // [sp+14h] [bp-1Ch]@1
  int v18; // [sp+18h] [bp-18h]@1

  v4 = this;
  v18 = a2;
  v16 = a4;
  v17 = a3;
  *((_BYTE *)this + 544) = 0;
  v5 = operator new(0xCu);
  *v5 = &v18;
  v5[1] = &v17;
  v6 = sub_C18438;
  v5[2] = &v16;
  v7 = (int)v4 + 216;
  v13 = v5;
  v14 = sub_C18438;
  v15 = sub_C18416;
  v8 = *((_DWORD *)v4 + 56);
  if ( (MinecraftGame *)v8 == (MinecraftGame *)((char *)v4 + 216) )
    goto LABEL_20;
  do
  {
    if ( !v6 )
      sub_DA7654();
    v15((int)&v13, *(ClientInstance **)(v8 + 20));
    v9 = sub_DA7F5C(v8);
    v6 = v14;
    v8 = v9;
  }
  while ( v9 != v7 );
  if ( v14 )
LABEL_20:
    ((void (__cdecl *)(_DWORD **))v6)(&v13);
  v10 = *((_DWORD *)v4 + 55);
  for ( i = (int)v4 + 216; v10; v10 = *(_DWORD *)(v10 + 8) )
    i = v10;
  if ( i != v7 && !*(_BYTE *)(i + 16) )
    v7 = i;
  v12 = ClientInstance::getHoloInput(*(ClientInstance **)(v7 + 20));
  if ( !(*(int (__cdecl **)(int))(*(_DWORD *)v12 + 44))(v12) )
    GameRenderer::createRenderGraph(*((GameRenderer **)v4 + 12), 0);
  if ( *((_BYTE *)v4 + 668) )
    MinecraftGame::setSmoothFontStyle(v4);
}


int __fastcall MinecraftGame::onAppPreSuspended(MinecraftGame *this)
{
  mce::RenderContext *v1; // r0@1

  *((_BYTE *)this + 444) = 1;
  v1 = (mce::RenderContext *)mce::RenderContextImmediate::get(this);
  return j_j_j__ZN3mce13RenderContext24enableThreadedSubmitModeEb(v1, 0);
}


int __fastcall MinecraftGame::getPrimaryClientInstanceTestInterface(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  return ClientInstance::getTestInterface(*((ClientInstance **)v2 + 5));
}


void __fastcall MinecraftGame::setSmoothFontStyle(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  char *v2; // r0@1
  int v3; // r2@1
  char *i; // r1@1
  GuiData *v5; // r5@6
  int *v6; // r0@6
  int v7; // r6@6
  unsigned int *v8; // r1@7
  unsigned int v9; // r0@9
  unsigned int *v10; // r7@13
  unsigned int v11; // r0@15
  Font **v17; // r4@25
  int v18; // t1@25
  void *v19; // r0@25
  void *v20; // r0@26
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  int v23; // t1@31
  void *v24; // r0@31
  void *v25; // r0@33
  unsigned int *v26; // r2@35
  signed int v27; // r1@37
  unsigned int *v28; // r2@39
  signed int v29; // r1@41
  unsigned int *v30; // r2@59
  signed int v31; // r1@61
  int v32; // [sp+8h] [bp-40h]@25
  int v33; // [sp+10h] [bp-38h]@25
  int v34; // [sp+18h] [bp-30h]@31
  int v35; // [sp+20h] [bp-28h]@31
  Options *v36; // [sp+24h] [bp-24h]@6
  int v37; // [sp+28h] [bp-20h]@6
  int v38; // [sp+2Ch] [bp-1Ch]@6

  v1 = this;
  v2 = (char *)this + 216;
  v3 = *((_DWORD *)v1 + 55);
  for ( i = v2; v3; v3 = *(_DWORD *)(v3 + 8) )
    i = (char *)v3;
  if ( i != v2 && !i[16] )
    v2 = i;
  v5 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)v2 + 5));
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v36, (int)v1);
  v6 = (int *)Options::getLanguage(v36);
  sub_DA73B4(&v38, v6);
  v7 = v37;
  if ( v37 )
  {
    v8 = (unsigned int *)(v37 + 4);
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
  _R0 = GuiData::getGuiScale(v5);
  __asm
    VMOV.F32        S2, #1.0
    VMOV            S0, R0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !_ZF
    && sub_DA7374((const void **)&v38, "zh_TW")
    && sub_DA7374((const void **)&v38, "ja_JP")
    && sub_DA7374((const void **)&v38, "ko_KR")
    && sub_DA7374((const void **)&v38, "zh_CN") )
    v18 = *((_DWORD *)v1 + 21);
    v17 = (Font **)((char *)v1 + 84);
    sub_DA7364((void **)&v33, (const char *)&unk_257BC67);
    sub_DA7364((void **)&v32, "font/smooth/smooth_");
    Font::switchFontsource(v18, &v33, &v32);
    v19 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v32 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j_j__ZdlPv_9(v19);
    v20 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v33 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        goto LABEL_48;
      goto LABEL_47;
  else
    v23 = *((_DWORD *)v1 + 21);
    sub_DA7364((void **)&v35, "font/default8");
    sub_DA7364((void **)&v34, "font/glyph_");
    Font::switchFontsource(v23, &v35, &v34);
    v24 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v34 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j_j__ZdlPv_9(v24);
    v20 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v35 - 4);
LABEL_48:
        if ( v22 <= 0 )
          j_j_j_j_j__ZdlPv_9(v20);
        goto LABEL_33;
LABEL_47:
      v22 = (*v21)--;
      goto LABEL_48;
LABEL_33:
  Font::clearCache(*v17);
  v25 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v38 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v25);
}


void __fastcall MinecraftGame::onPrimaryUserConnectComplete(int a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r4@1
  int v5; // r2@2
  int v6; // r0@2
  int v7; // r6@2
  int i; // r1@2
  int v9; // r0@7
  int v10; // r6@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r7@14
  unsigned int v14; // r0@16
  __int64 v15; // kr00_8@22
  unsigned int *v16; // r1@23
  unsigned int v17; // r0@25
  unsigned int *v18; // r7@29
  unsigned int v19; // r0@31
  Option *v20; // r0@36
  void *v22; // r0@38
  BoolOption *v26; // r7@41
  int v27; // r2@43
  int v28; // r0@43
  int v29; // r6@43
  int j; // r1@43
  int v31; // r0@48
  int v32; // r6@48
  unsigned int *v33; // r1@49
  unsigned int *v34; // r5@55
  PatchNotesModel **v35; // r0@62
  PatchNotesModel **v36; // r6@62
  PatchNotesModel *v37; // r0@62
  int v38; // r2@65
  int v39; // r0@65
  int v40; // r7@65
  int k; // r1@65
  int v42; // r1@70
  PatchNotesModel *v43; // r0@70
  int v44; // r6@70
  unsigned int *v45; // r1@71
  unsigned int v46; // r0@73
  unsigned int *v47; // r5@77
  unsigned int v48; // r0@79
  PatchNotesModel *v49; // r0@85
  int v50; // r0@87
  int v52; // r0@91
  int v53; // r2@94
  int v54; // r0@94
  int v55; // r6@94
  int l; // r1@94
  int v57; // r0@99
  int v58; // r6@99
  unsigned int *v59; // r1@100
  unsigned int v60; // r0@102
  unsigned int *v61; // r5@106
  unsigned int v62; // r0@108
  int v63; // r7@116
  int v64; // r0@117
  int v65; // r6@117
  unsigned int *v66; // r1@118
  unsigned int v67; // r0@120
  unsigned int *v68; // r5@124
  unsigned int v69; // r0@126
  int v70; // r6@131
  unsigned int *v71; // r1@132
  unsigned int v72; // r0@134
  unsigned int *v73; // r5@138
  unsigned int v74; // r0@140
  int v75; // r0@146
  bool v76; // zf@146
  void *v77; // r0@151
  int v78; // r2@154
  int v79; // r0@154
  int v80; // r5@154
  int m; // r1@154
  int v82; // r0@159
  int v83; // r5@159
  unsigned int *v84; // r1@160
  unsigned int v85; // r0@162
  unsigned int *v86; // r6@166
  unsigned int v87; // r0@168
  int v88; // r1@173
  int v89; // r7@173
  int n; // r0@173
  int v91; // r1@175
  int v92; // r5@179
  int v93; // r1@181
  int v94; // r0@181
  int ii; // r5@181
  int v96; // r1@183
  int v97; // r0@187
  int v98; // r5@187
  unsigned int *v99; // r1@188
  unsigned int v100; // r0@190
  unsigned int *v101; // r6@194
  unsigned int v102; // r0@196
  void *v103; // r0@202
  int v104; // r1@206
  int v105; // r0@206
  int jj; // r5@206
  int v107; // r0@211
  int v108; // r4@211
  unsigned int *v109; // r1@212
  unsigned int v110; // r0@214
  unsigned int *v111; // r5@218
  unsigned int v112; // r0@220
  char v113; // [sp+4h] [bp-7Ch]@211
  int v114; // [sp+8h] [bp-78h]@211
  char v115; // [sp+Ch] [bp-74h]@187
  int v116; // [sp+10h] [bp-70h]@187
  char v117; // [sp+14h] [bp-6Ch]@159
  int v118; // [sp+18h] [bp-68h]@159
  Options *v119; // [sp+1Ch] [bp-64h]@117
  int v120; // [sp+20h] [bp-60h]@117
  Options *v121; // [sp+24h] [bp-5Ch]@115
  int v122; // [sp+28h] [bp-58h]@131
  char v123; // [sp+2Ch] [bp-54h]@99
  void (*v124)(void); // [sp+34h] [bp-4Ch]@99
  char v125; // [sp+3Ch] [bp-44h]@99
  int v126; // [sp+40h] [bp-40h]@99
  PatchNotesModel *v127; // [sp+44h] [bp-3Ch]@70
  char v128; // [sp+48h] [bp-38h]@70
  int v129; // [sp+4Ch] [bp-34h]@70
  char v130; // [sp+50h] [bp-30h]@48
  int v131; // [sp+54h] [bp-2Ch]@48
  char v132; // [sp+58h] [bp-28h]@22
  int v133; // [sp+5Ch] [bp-24h]@22
  char v134; // [sp+60h] [bp-20h]@7
  int v135; // [sp+64h] [bp-1Ch]@7

  v3 = a2;
  v4 = a1;
  if ( a3 == 1 )
  {
    v5 = *(_DWORD *)(a1 + 220);
    v6 = a1 + 216;
    v7 = *(_DWORD *)(v4 + 104);
    for ( i = v4 + 216; v5; v5 = *(_DWORD *)(v5 + 8) )
      i = v5;
    if ( i != v6 && !*(_BYTE *)(i + 16) )
      v6 = i;
    v9 = ClientInstance::getSceneFactory(*(ClientInstance **)(v6 + 20));
    SceneFactory::createStartMenuScreen((SceneFactory *)&v134, v9);
    SceneStack::pushScreen(v7, (int)&v134, 1);
    v10 = v135;
    if ( v135 )
    {
      v11 = (unsigned int *)(v135 + 4);
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
  }
  if ( (*(int (**)(void))(**(_DWORD **)(v4 + 344) + 24))() == 1 )
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v132, v4);
    v15 = *(_QWORD *)&v132;
    if ( v133 )
      v16 = (unsigned int *)(v133 + 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        v18 = (unsigned int *)(HIDWORD(v15) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v15) + 8))(HIDWORD(v15));
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v15) + 12))(HIDWORD(v15));
    v20 = (Option *)Options::get(v15, 162);
    _R0 = (PatchNotesModel *)Option::getBool(v20);
    if ( !_R0 )
      v22 = *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) ? ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) : &ServiceLocator<AppPlatform>::mDefaultService;
      _R0 = (PatchNotesModel *)(*(int (**)(void))(**(_DWORD **)v22 + 576))();
      __asm
        VMOV.F32        S0, #1.0
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( !_ZF )
        v26 = (BoolOption *)Options::get(v15, 162);
        if ( !Option::hasOverrideSource(v26) )
          BoolOption::set(v26, 1);
        Options::save((Options *)v15, 0);
        v27 = *(_DWORD *)(v4 + 220);
        v28 = v4 + 216;
        v29 = *(_DWORD *)(v4 + 104);
        for ( j = v4 + 216; v27; v27 = *(_DWORD *)(v27 + 8) )
          j = v27;
        if ( j != v28 && !*(_BYTE *)(j + 16) )
          v28 = j;
        v31 = ClientInstance::getSceneFactory(*(ClientInstance **)(v28 + 20));
        SceneFactory::createSafeZoneScreen((SceneFactory *)&v130, v31);
        SceneStack::pushScreen(v29, (int)&v130, 0);
        v32 = v131;
        if ( v131 )
          v33 = (unsigned int *)(v131 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              _R0 = (PatchNotesModel *)__ldrex(v33);
            while ( __strex((unsigned int)_R0 - 1, v33) );
          }
          else
            _R0 = (PatchNotesModel *)(*v33)--;
          if ( _R0 == (PatchNotesModel *)1 )
            v34 = (unsigned int *)(v32 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
            if ( &pthread_create )
            {
              __dmb();
              do
                _R0 = (PatchNotesModel *)__ldrex(v34);
              while ( __strex((unsigned int)_R0 - 1, v34) );
            }
            else
              _R0 = (PatchNotesModel *)(*v34)--;
            if ( _R0 == (PatchNotesModel *)1 )
              _R0 = (PatchNotesModel *)(*(int (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
    v35 = PatchNotesModel::getPreloadedPatchNotes(_R0);
    v36 = v35;
    v37 = *v35;
    if ( v37 && PatchNotesModel::isNew(v37) == 1 && !PatchNotesModel::failed(*v36) )
      v38 = *(_DWORD *)(v4 + 220);
      v39 = v4 + 216;
      v40 = *(_DWORD *)(v4 + 104);
      for ( k = v4 + 216; v38; v38 = *(_DWORD *)(v38 + 8) )
        k = v38;
      if ( k != v39 && !*(_BYTE *)(k + 16) )
        v39 = k;
      v42 = ClientInstance::getSceneFactory(*(ClientInstance **)(v39 + 20));
      v43 = *v36;
      *v36 = 0;
      v127 = v43;
      SceneFactory::createPatchNotesScreen((unsigned __int64 *)&v128, v42, &v127);
      SceneStack::pushScreen(v40, (int)&v128, 0);
      v44 = v129;
      if ( v129 )
        v45 = (unsigned int *)(v129 + 4);
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
          v46 = (*v45)--;
        if ( v46 == 1 )
          v47 = (unsigned int *)(v44 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
              v48 = __ldrex(v47);
            while ( __strex(v48 - 1, v47) );
            v48 = (*v47)--;
          if ( v48 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
      if ( v127 )
        v49 = PatchNotesModel::~PatchNotesModel(v127);
        operator delete((void *)v49);
      v127 = 0;
  v50 = (*(int (**)(void))(**(_DWORD **)(v4 + 344) + 68))();
  _ZF = v3 == 2;
  if ( v3 != 2 )
    _ZF = (v50 ^ 1) == 1;
  if ( _ZF )
    v52 = NetworkHandler::getServerLocator(*(NetworkHandler **)(v4 + 336));
    (*(void (**)(void))(*(_DWORD *)v52 + 16))();
  if ( v3 != 2 && (*(int (**)(void))(**(_DWORD **)(v4 + 344) + 40))() == 1 )
    v53 = *(_DWORD *)(v4 + 220);
    v54 = v4 + 216;
    v55 = *(_DWORD *)(v4 + 104);
    for ( l = v4 + 216; v53; v53 = *(_DWORD *)(v53 + 8) )
      l = v53;
    if ( l != v54 && !*(_BYTE *)(l + 16) )
      v54 = l;
    v57 = ClientInstance::getSceneFactory(*(ClientInstance **)(v54 + 20));
    v124 = 0;
    SceneFactory::createOnlinePlayNotificationScreen((unsigned __int64 *)&v125, v57, (int)&v123);
    SceneStack::pushScreen(v55, (int)&v125, 0);
    v58 = v126;
    if ( v126 )
      v59 = (unsigned int *)(v126 + 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 == 1 )
        v61 = (unsigned int *)(v58 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v58 + 8))(v58);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
          v62 = (*v61)--;
        if ( v62 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v58 + 12))(v58);
    if ( v124 )
      v124();
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v121, v4);
  if ( Options::getHasEverLoggedIntoXbl(v121) )
    v63 = 0;
  else
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v119, v4);
    v64 = Options::getHasChosenNotToSignInToXbl(v119);
    v65 = v120;
    v63 = v64 ^ 1;
    if ( v120 )
      v66 = (unsigned int *)(v120 + 4);
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
        v67 = (*v66)--;
      if ( v67 == 1 )
        v68 = (unsigned int *)(v65 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v65 + 8))(v65);
            v69 = __ldrex(v68);
          while ( __strex(v69 - 1, v68) );
          v69 = (*v68)--;
        if ( v69 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v65 + 12))(v65);
  v70 = v122;
  if ( v122 )
    v71 = (unsigned int *)(v122 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
    else
      v72 = (*v71)--;
    if ( v72 == 1 )
      v73 = (unsigned int *)(v70 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v70 + 8))(v70);
          v74 = __ldrex(v73);
        while ( __strex(v74 - 1, v73) );
        v74 = (*v73)--;
      if ( v74 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v70 + 12))(v70);
  if ( v63 == 1 )
    v75 = (*(int (**)(void))(**(_DWORD **)(v4 + 344) + 64))();
    v76 = v3 == 2;
    if ( v3 != 2 )
      v76 = (v75 ^ 1) == 1;
    if ( v76 )
      v77 = *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) ? ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) : &ServiceLocator<AppPlatform>::mDefaultService;
      if ( !(*(int (**)(void))(**(_DWORD **)v77 + 640))() )
        v78 = *(_DWORD *)(v4 + 220);
        v79 = v4 + 216;
        v80 = *(_DWORD *)(v4 + 104);
        for ( m = v4 + 216; v78; v78 = *(_DWORD *)(v78 + 8) )
          m = v78;
        if ( m != v79 && !*(_BYTE *)(m + 16) )
          v79 = m;
        v82 = ClientInstance::getSceneFactory(*(ClientInstance **)(v79 + 20));
        SceneFactory::createXblFirstLaunchScreen((SceneFactory *)&v117, v82);
        SceneStack::pushScreen(v80, (int)&v117, 0);
        v83 = v118;
        if ( v118 )
          v84 = (unsigned int *)(v118 + 4);
              v85 = __ldrex(v84);
            while ( __strex(v85 - 1, v84) );
            v85 = (*v84)--;
          if ( v85 == 1 )
            v86 = (unsigned int *)(v83 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v83 + 8))(v83);
                v87 = __ldrex(v86);
              while ( __strex(v87 - 1, v86) );
              v87 = (*v86)--;
            if ( v87 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v83 + 12))(v83);
  v88 = *(_DWORD *)(v4 + 220);
  v89 = v4 + 216;
  for ( n = v4 + 216; v88; v88 = *(_DWORD *)(v88 + 8) )
    n = v88;
  v91 = v4 + 216;
  if ( n != v89 )
    if ( *(_BYTE *)(n + 16) )
      n = v4 + 216;
    v91 = n;
  v92 = ClientInstance::getHoloInput(*(ClientInstance **)(v91 + 20));
  if ( (*(int (**)(void))(*(_DWORD *)v92 + 44))() == 1 && (*(int (__fastcall **)(int))(*(_DWORD *)v92 + 76))(v92) == 1 )
    v93 = *(_DWORD *)(v4 + 220);
    v94 = v4 + 216;
    for ( ii = *(_DWORD *)(v4 + 104); v93; v93 = *(_DWORD *)(v93 + 8) )
      v94 = v93;
    v96 = v4 + 216;
    if ( v94 != v89 )
      if ( *(_BYTE *)(v94 + 16) )
        v94 = v4 + 216;
      v96 = v94;
    v97 = ClientInstance::getSceneFactory(*(ClientInstance **)(v96 + 20));
    SceneFactory::createVRAlignScreen((SceneFactory *)&v115, v97);
    SceneStack::pushScreen(ii, (int)&v115, 0);
    v98 = v116;
    if ( v116 )
      v99 = (unsigned int *)(v116 + 4);
          v100 = __ldrex(v99);
        while ( __strex(v100 - 1, v99) );
        v100 = (*v99)--;
      if ( v100 == 1 )
        v101 = (unsigned int *)(v98 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v98 + 8))(v98);
            v102 = __ldrex(v101);
          while ( __strex(v102 - 1, v101) );
          v102 = (*v101)--;
        if ( v102 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v98 + 12))(v98);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v103 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v103 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v103 + 588))() == 1
    && !GameControllerManager::hasAdequateConnectedGameController((GameControllerManager *)&GameControllerManager::sGamePadManager) )
    v104 = *(_DWORD *)(v4 + 220);
    v105 = v4 + 216;
    for ( jj = *(_DWORD *)(v4 + 104); v104; v104 = *(_DWORD *)(v104 + 8) )
      v105 = v104;
    if ( v105 != v89 && !*(_BYTE *)(v105 + 16) )
      v89 = v105;
    v107 = ClientInstance::getSceneFactory(*(ClientInstance **)(v89 + 20));
    SceneFactory::createConnectGamepadScreen((SceneFactory *)&v113, v107);
    SceneStack::pushScreen(jj, (int)&v113, 0);
    v108 = v114;
    if ( v114 )
      v109 = (unsigned int *)(v114 + 4);
          v110 = __ldrex(v109);
        while ( __strex(v110 - 1, v109) );
        v110 = (*v109)--;
      if ( v110 == 1 )
        v111 = (unsigned int *)(v108 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v108 + 8))(v108);
            v112 = __ldrex(v111);
          while ( __strex(v112 - 1, v111) );
          v112 = (*v111)--;
        if ( v112 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v108 + 12))(v108);
}


int __fastcall MinecraftGame::destroyGame(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  int v2; // r2@2
  char *v3; // r0@2
  int i; // r1@2
  void (__fastcall *v5)(char *, char *, signed int); // r3@7
  ServerInstance *v6; // r0@9
  ServerInstance *v7; // r0@10
  int result; // r0@11

  v1 = this;
  if ( *((_DWORD *)this + 172) )
  {
    v2 = *((_DWORD *)this + 55);
    v3 = (char *)this + 216;
    for ( i = (int)v1 + 216; v2; v2 = *(_DWORD *)(v2 + 8) )
      i = v2;
    if ( (char *)i != v3 && !*(_BYTE *)(i + 16) )
      v3 = (char *)i;
    (*((void (__fastcall **)(_DWORD, _DWORD))v1 + 173))((char *)v1 + 680, *((_DWORD *)v3 + 5));
    v5 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 172);
    if ( v5 )
    {
      v5((char *)v1 + 680, (char *)v1 + 680, 3);
      *((_DWORD *)v1 + 172) = 0;
      *((_DWORD *)v1 + 173) = 0;
    }
  }
  MinecraftGame::_removePendingSubclients(v1);
  ClientInstance::resetPrimaryClient(*(ClientInstance **)(*((_DWORD *)v1 + 56) + 20));
  MinecraftGame::_joinServerInstanceThread(v1);
  v6 = (ServerInstance *)*((_DWORD *)v1 + 50);
  *((_DWORD *)v1 + 50) = 0;
  if ( v6 )
    v7 = ServerInstance::~ServerInstance(v6);
    operator delete((void *)v7);
  result = *((_DWORD *)v1 + 112);
  if ( result )
    *(_BYTE *)(result + 4) = 1;
    result = 0;
    *((_DWORD *)v1 + 112) = 0;
  return result;
}


int __fastcall MinecraftGame::getPrimaryLocalPlayer(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  return j_j_j__ZNK14ClientInstance14getLocalPlayerEv(*((ClientInstance **)v2 + 5));
}


void __fastcall MinecraftGame::updateGraphics(MinecraftGame *this, ClientInstance *a2, const Timer *a3)
{
  MinecraftGame *v3; // r9@1
  Timer *v4; // r8@1
  ClientInstance *v5; // r4@1
  int v6; // r0@1
  GameRenderer *v13; // r4@6
  int v14; // r0@6
  int v18; // r1@9
  int v19; // r10@9
  int i; // r0@9
  int v21; // r1@11
  int v22; // r0@15
  int v23; // r4@16
  MinecraftGame *v24; // r0@16
  int j; // r6@16
  int v26; // r5@19
  int v27; // r4@19
  __int64 v28; // r0@19
  _QWORD *v29; // r7@21
  unsigned int v30; // r3@21
  unsigned int v31; // r2@23
  unsigned int v32; // r11@23
  _QWORD *v33; // r3@30
  char *v34; // r5@30
  __int64 *v35; // r2@30
  __int64 v36; // kr00_8@31
  int v37; // r4@37
  int v38; // r0@37
  __int64 v39; // [sp+0h] [bp-68h]@0
  void *ptr; // [sp+Ch] [bp-5Ch]@16
  char *v41; // [sp+10h] [bp-58h]@16
  char *v42; // [sp+14h] [bp-54h]@16
  int v43; // [sp+18h] [bp-50h]@4
  double v44; // [sp+20h] [bp-48h]@4
  int v46; // [sp+30h] [bp-38h]@4
  struct timespec requested_time; // [sp+3Ch] [bp-2Ch]@3

  v3 = this;
  v4 = a3;
  v5 = a2;
  GameRenderer::setClient(*((GameRenderer **)this + 12), a2);
  v6 = ClientInstance::getHoloInput(v5);
  if ( (*(int (**)(void))(*(_DWORD *)v6 + 328))() == 1 )
  {
    if ( *((_BYTE *)v3 + 444) )
    {
      requested_time.tv_sec = 0;
      requested_time.tv_nsec = 1000000;
      nanosleep(&requested_time, 0);
    }
    else
      v44 = 0.0;
      v46 = 12;
      v43 = unk_27F636C;
      unk_27F636C = &v43;
      _R0 = getTimeS();
      __asm
      {
        VMOV            D0, R0, R2
        VSTR            D0, [SP,#0x68+var_48]
        VSTR            D0, [SP,#0x68+var_40]
      }
      _R2 = v43;
      if ( v43 )
        __asm
        {
          VMOV            D0, R0, R1
          VLDR            D1, [R2,#8]
          VADD.F64        D0, D1, D0
          VSTR            D0, [R2,#8]
        }
      v13 = (GameRenderer *)*((_DWORD *)v3 + 12);
      v14 = Timer::getAlpha(v4);
      GameRenderer::render(v13, *(float *)&v14);
      LODWORD(_R0) = getTimeS();
        VMOV            D1, R0, R1
        VLDR            D0, [SP,#0x68+var_48]
        VADD.F64        D2, D0, D1
        VSTR            D2, [SP,#0x68+var_48]
        VLDR            D0, [SP,#0x68+var_40]
        VADD.F64        D0, D0, D1
      HIDWORD(_R0) = v43;
          VLDR            D2, [R1,#8]
          VSUB.F64        D1, D2, D1
          VSTR            D1, [R1,#8]
          VLDR            D2, [SP,#0x68+var_48]
      __asm { VMOV            R2, R3, D2 }
      LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
      unk_27F636C = v43;
      __asm { VSTR            D0, [SP,#0x68+var_68] }
      ProfilerLite::_endScope(_R0, _R2, _R3, v39);
  }
  mce::TextureGroup::trimLRUCache(*((mce::TextureGroup **)v3 + 16));
  v18 = *((_DWORD *)v3 + 55);
  v19 = (int)v3 + 216;
  for ( i = (int)v3 + 216; v18; v18 = *(_DWORD *)(v18 + 8) )
    i = v18;
  v21 = (int)v3 + 216;
  if ( i != v19 )
    if ( *(_BYTE *)(i + 16) )
      i = (int)v3 + 216;
    v21 = i;
  v22 = ClientInstance::getHoloInput(*(ClientInstance **)(v21 + 20));
  if ( (*(int (**)(void))(*(_DWORD *)v22 + 332))() == 1 )
    v23 = *((_DWORD *)v3 + 67);
    v24 = MinecraftGame::getSituationalMusic(v3);
    MusicManager::update(v23, (int)v24);
    ptr = 0;
    v41 = 0;
    v42 = 0;
    for ( j = *((_DWORD *)v3 + 56); j != v19; j = sub_DA7F5C(j) )
      v26 = *(_BYTE *)(j + 16);
      v27 = ClientInstance::getCameraEntity(*(ClientInstance **)(j + 20));
      HIDWORD(v28) = v41;
      if ( v41 == v42 )
        LODWORD(v28) = ptr;
        v29 = 0;
        v30 = (v41 - (_BYTE *)ptr) >> 3;
        if ( !v30 )
          v30 = 1;
        v31 = v30 + ((v41 - (_BYTE *)ptr) >> 3);
        v32 = v30 + ((v41 - (_BYTE *)ptr) >> 3);
        if ( 0 != v31 >> 29 )
          v32 = 0x1FFFFFFF;
        if ( v31 < v30 )
        if ( v32 )
          if ( v32 >= 0x20000000 )
            sub_DA7414();
          v29 = operator new(8 * v32);
          v28 = *(_QWORD *)&ptr;
        v33 = v29;
        *(_DWORD *)((char *)v29 + HIDWORD(v28) - v28) = v26;
        v34 = (char *)v29;
        *(_DWORD *)((char *)v29 + HIDWORD(v28) - v28 + 4) = v27;
        v35 = (__int64 *)v28;
        if ( HIDWORD(v28) != (_DWORD)v28 )
          do
          {
            v36 = *v35;
            ++v35;
            *v33 = v36;
            ++v33;
          }
          while ( (__int64 *)HIDWORD(v28) != v35 );
          v34 = (char *)v29 + ((HIDWORD(v28) - 8 - v28) & 0xFFFFFFF8) + 8;
          LODWORD(v28) = ptr;
        if ( (_DWORD)v28 )
          operator delete((void *)v28);
        ptr = v29;
        v41 = v34 + 8;
        v42 = (char *)&v29[v32];
      else
        *(_DWORD *)v41 = v26;
        *(_DWORD *)(HIDWORD(v28) + 4) = v27;
        v41 += 8;
    v37 = *((_DWORD *)v3 + 66);
    v38 = Timer::getAlpha(v4);
    SoundEngine::update(v37, (unsigned __int64 *)&ptr, v38);
    if ( ptr )
      operator delete(ptr);
}


signed int __fastcall MinecraftGame::getDefaultNetworkMaxPlayers(MinecraftGame *this)
{
  signed int result; // r0@2
  void *v2; // r0@4
  AppPlatform **v3; // r0@8
  __int64 v4; // r0@10
  signed int v5; // r3@10
  signed int v6; // r1@13

  if ( (*(int (**)(void))(*(_DWORD *)this + 136))() )
  {
    result = 30;
  }
  else
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v2 = &ServiceLocator<AppPlatform>::mDefaultService;
    if ( (*(int (**)(void))(**(_DWORD **)v2 + 436))() == 1 )
      goto LABEL_20;
      v3 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v3 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
    v4 = AppPlatform::getAvailableMemory(*v3);
    v5 = 0;
    if ( (unsigned int)v4 > 0x9C400000 )
      v5 = 1;
    v6 = HIDWORD(v4) ? 1 : v5;
    if ( v6 )
      result = 8;
LABEL_20:
      result = 5;
  return result;
}


void __fastcall MinecraftGame::startLeaveGame(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  Social::MultiplayerServiceManager *v2; // r0@1
  ResourcePackRepository *v3; // r0@3
  ResourcePackManager *v4; // r0@5
  bool v5; // zf@5
  ServerInstance *v6; // r0@9
  int v7; // r5@12
  unsigned int *v8; // r1@13
  unsigned int v9; // r0@15
  unsigned int *v10; // r6@20
  unsigned int v11; // r0@22
  DebugUdpProxy *v12; // r0@27
  DebugUdpProxy *v13; // r0@28
  Options *v14; // [sp+0h] [bp-18h]@12
  int v15; // [sp+4h] [bp-14h]@12

  v1 = this;
  __dmb();
  *((_BYTE *)this + 656) = 0;
  GameRenderer::setLevel(*((GameRenderer **)this + 12), 0, 0);
  v2 = (Social::MultiplayerServiceManager *)*((_DWORD *)v1 + 87);
  if ( v2 )
    Social::MultiplayerServiceManager::leaveGame(v2);
  v3 = (ResourcePackRepository *)*((_DWORD *)v1 + 78);
  if ( v3 )
  {
    ResourcePackRepository::removePacksLoadedFromCache(v3);
    ResourcePackRepository::removePacksLoadedFromWorld(*((ResourcePackRepository **)v1 + 78));
  }
  v4 = (ResourcePackManager *)*((_DWORD *)v1 + 80);
  v5 = v4 == 0;
  if ( v4 )
    v5 = *((_BYTE *)v1 + 546) == 0;
  if ( !v5 )
    ResourcePackManager::setCanUseGlobalPackStack(v4, 1);
    ResourcePackManager::clearStack(*((ResourcePackManager **)v1 + 80), 0, 0);
    ResourcePackManager::clearStack(*((ResourcePackManager **)v1 + 80), 1, 1);
  NetworkHandler::disconnect(*((NetworkHandler **)v1 + 84));
  Social::MultiplayerServiceManager::setNetworkHandler(
    *((Social::MultiplayerServiceManager **)v1 + 87),
    *((NetworkHandler **)v1 + 84));
  v6 = (ServerInstance *)*((_DWORD *)v1 + 50);
  if ( v6 )
    ServerInstance::startLeaveGame(v6);
  NetworkHandler::disconnect(*((NetworkHandler **)v1 + 85));
  if ( *((_DWORD *)v1 + 62) )
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v14, (int)v1);
    Options::unregisterObserver(v14, *((void **)v1 + 62));
    v7 = v15;
    if ( v15 )
    {
      v8 = (unsigned int *)(v15 + 4);
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
    v12 = (DebugUdpProxy *)*((_DWORD *)v1 + 62);
    *((_DWORD *)v1 + 62) = 0;
    if ( v12 )
      v13 = DebugUdpProxy::~DebugUdpProxy(v12);
      j_j_j__ZdlPv_3((void *)v13);
  else
}


void __fastcall MinecraftGame::handleLicenseChanged(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  int v2; // r7@1
  void (*v3)(void); // r3@1
  int v4; // r5@1
  int v5; // r0@4
  int v6; // r1@9
  int i; // r0@9
  int v8; // r1@11
  int v9; // r1@16
  int j; // r0@16
  MinecraftEventing *v11; // r0@21
  bool v12; // r2@21
  void *v13; // [sp+4h] [bp-24h]@1
  int (__fastcall *v14)(void **, void **, int); // [sp+Ch] [bp-1Ch]@1
  void (__fastcall *v15)(int, ClientInstance *); // [sp+10h] [bp-18h]@1

  v1 = this;
  SceneStack::handleLicenseChanged(*((SceneStack **)this + 26));
  v2 = (int)v1 + 216;
  v13 = operator new(1u);
  v3 = (void (*)(void))sub_C2468C;
  v14 = sub_C2468C;
  v15 = sub_C2467C;
  v4 = *((_DWORD *)v1 + 56);
  if ( (MinecraftGame *)v4 == (MinecraftGame *)((char *)v1 + 216) )
    goto LABEL_24;
  do
  {
    if ( !v3 )
      sub_DA7654();
    v15((int)&v13, *(ClientInstance **)(v4 + 20));
    v5 = sub_DA7F5C(v4);
    v3 = (void (*)(void))v14;
    v4 = v5;
  }
  while ( v5 != v2 );
  if ( v14 )
LABEL_24:
    v3();
  v6 = *((_DWORD *)v1 + 55);
  for ( i = (int)v1 + 216; v6; v6 = *(_DWORD *)(v6 + 8) )
    i = v6;
  v8 = (int)v1 + 216;
  if ( i != v2 )
    if ( *(_BYTE *)(i + 16) )
      i = (int)v1 + 216;
    v8 = i;
  if ( ClientInstance::getLevel(*(ClientInstance **)(v8 + 20)) )
    v9 = *((_DWORD *)v1 + 55);
    for ( j = (int)v1 + 216; v9; v9 = *(_DWORD *)(v9 + 8) )
      j = v9;
    if ( j != v2 && !*(_BYTE *)(j + 16) )
      v2 = j;
    v11 = (MinecraftEventing *)ClientInstance::getLocalPlayer(*(ClientInstance **)(v2 + 20));
    MinecraftEventing::fireEventSetValidForAchievements(v11, (Player *)1, v12);
}


signed int __fastcall MinecraftGame::addSubClientInstanceAndAssociateToUser(__int64 this)
{
  __int64 v1; // r4@1
  unsigned int v2; // r6@3
  int v3; // r6@6
  void (__fastcall *v4)(int, _DWORD **, _DWORD); // r7@6
  _DWORD *v5; // r0@6
  __int64 v6; // r1@6
  signed int v7; // r4@8
  MinecraftOptionValue *v9; // r6@10
  int v10; // r6@10
  unsigned int *v11; // r1@11
  unsigned int v12; // r0@13
  unsigned int *v13; // r7@17
  unsigned int v14; // r0@19
  int v15; // r8@26
  MinecraftEventing *v16; // r7@26
  void *v17; // r0@26
  __int64 v18; // r1@26
  int v19; // r6@28
  unsigned int *v20; // r1@29
  unsigned int v21; // r0@31
  unsigned int *v22; // r7@35
  unsigned int v23; // r0@37
  int v24; // r10@43
  int v25; // r7@43
  int v26; // r9@43
  unsigned int *v27; // r0@45
  unsigned int v28; // r1@47
  unsigned int *v29; // r1@52
  unsigned int v30; // r0@54
  unsigned int *v31; // r6@58
  unsigned int v32; // r0@60
  int v33; // r7@66
  int v34; // r1@66
  int v35; // r6@66
  int i; // r0@66
  int v37; // r1@68
  GuiData *v38; // r0@72
  char *v39; // r0@72
  int v40; // r0@72
  ClientInputHandler *v41; // r0@72
  MobEffectsLayout *v42; // r0@72
  _DWORD *v43; // r0@74
  void (*v44)(void); // r3@74
  int v45; // r4@74
  int v46; // r0@77
  int v47; // r4@82
  unsigned int *v48; // r1@83
  unsigned int v49; // r0@85
  unsigned int *v50; // r5@89
  unsigned int v51; // r0@91
  int v52; // r4@96
  unsigned int *v53; // r1@97
  unsigned int v54; // r0@99
  unsigned int *v55; // r5@103
  unsigned int v56; // r0@105
  int v57; // r5@111
  unsigned int *v58; // r1@112
  unsigned int v59; // r0@114
  unsigned int *v60; // r6@118
  unsigned int v61; // r0@120
  int v62; // r5@125
  unsigned int *v63; // r1@126
  unsigned int v64; // r0@128
  unsigned int *v65; // r6@132
  unsigned int v66; // r0@134
  _DWORD *v67; // [sp+14h] [bp-CCh]@74
  void (*v68)(void); // [sp+1Ch] [bp-C4h]@74
  void (__fastcall *v69)(int, const ClientInstance *); // [sp+20h] [bp-C0h]@74
  char v70; // [sp+24h] [bp-BCh]@72
  int v71; // [sp+4Ch] [bp-94h]@82
  ClientInstance *v72; // [sp+54h] [bp-8Ch]@43
  int v73; // [sp+58h] [bp-88h]@43
  void *v74; // [sp+5Ch] [bp-84h]@26
  __int64 v75; // [sp+64h] [bp-7Ch]@26
  int v76; // [sp+6Ch] [bp-74h]@26
  int v77; // [sp+70h] [bp-70h]@26
  int v78; // [sp+74h] [bp-6Ch]@26
  int v79; // [sp+78h] [bp-68h]@111
  char v80; // [sp+7Ch] [bp-64h]@26
  Social::User *v81; // [sp+84h] [bp-5Ch]@10
  int v82; // [sp+88h] [bp-58h]@10
  int v83; // [sp+8Ch] [bp-54h]@10
  char v84; // [sp+92h] [bp-4Eh]@10
  char v85; // [sp+93h] [bp-4Dh]@10
  MinecraftOptionValue *v86; // [sp+94h] [bp-4Ch]@10
  char v87; // [sp+9Bh] [bp-45h]@10
  int v88; // [sp+9Ch] [bp-44h]@10
  int v89; // [sp+A0h] [bp-40h]@26
  _DWORD *v90; // [sp+A4h] [bp-3Ch]@6
  __int64 v91; // [sp+ACh] [bp-34h]@6
  char v92; // [sp+B7h] [bp-29h]@5
  char v93; // [sp+B8h] [bp-28h]@10
  char v94; // [sp+BCh] [bp-24h]@43

  v1 = this;
  if ( MinecraftGame::isSplitscreenJoinEnabled((MinecraftGame *)this) != 1 )
    return 0;
  if ( !*(_DWORD *)(v1 + 196) )
  v2 = *(_BYTE *)(*(_DWORD *)(v1 + 188) + 16);
  if ( Social::UserManager::userHasClient(*(Social::UserManager **)(v1 + 344), SHIDWORD(v1))
    || v2 > *(_DWORD *)(v1 + 500) )
  {
  }
  v92 = v2;
  if ( (*(int (**)(void))(**(_DWORD **)(v1 + 344) + 84))() == 1 )
    v3 = *(_DWORD *)(v1 + 344);
    v4 = *(void (__fastcall **)(int, _DWORD **, _DWORD))(*(_DWORD *)v3 + 88);
    v5 = operator new(0xCu);
    LODWORD(v6) = std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<bool (MinecraftGame::*)(int)> ()(MinecraftGame*,std::_Placeholder<1>)>>::_M_manager;
    HIDWORD(v6) = std::_Function_handler<void ()(int),std::_Bind<std::_Mem_fn<bool (MinecraftGame::*)(int)> ()(MinecraftGame*,std::_Placeholder<1>)>>::_M_invoke;
    *v5 = MinecraftGame::addSubClientInstanceAndAssociateToUser;
    v5[1] = 0;
    v5[2] = v1;
    v90 = v5;
    v91 = v6;
    v4(v3, &v90, HIDWORD(v1));
    if ( (_DWORD)v91 )
      ((void (*)(void))v91)();
  v87 = 0;
  v9 = (MinecraftOptionValue *)operator new(0xCu);
  MinecraftOptionValue::MinecraftOptionValue(v9, (MinecraftGame *)v1, 1);
  v86 = v9;
  v85 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 136))(v1);
  v84 = 0;
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v81, *(_DWORD *)(v1 + 344));
  v83 = *(_DWORD *)Social::User::getOptions(v81);
  std::__shared_ptr<Options,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<Options>,bool,std::unique_ptr<MinecraftOptionValue,std::default_delete<std::default_delete>>,bool,bool,Options*>(
    (int)&v88,
    (int)&v93,
    &v87,
    (int *)&v86,
    &v85,
    &v84,
    &v83);
  v10 = v82;
  if ( v82 )
    v11 = (unsigned int *)(v82 + 4);
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
  if ( v86 )
    (*(void (**)(void))(*(_DWORD *)v86 + 4))();
  v86 = 0;
  CallbackToken::CallbackToken((int)&v80);
  v15 = *(_DWORD *)(v1 + 344);
  v16 = *(MinecraftEventing **)(v1 + 504);
  v76 = v88;
  v77 = v89;
  v88 = 0;
  v89 = 0;
  v17 = operator new(1u);
  LODWORD(v18) = sub_C18698;
  v74 = v17;
  HIDWORD(v18) = nullsub_4;
  v75 = v18;
  Social::UserManager::addSecondaryUser((int)&v78, v15, &v80, SHIDWORD(v1), v16, (int)&v76, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  v19 = v77;
  if ( v77 )
    v20 = (unsigned int *)(v77 + 4);
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
  if ( v78 )
    CallbackToken::release((CallbackToken *)&v80);
    std::_Rb_tree<unsigned char,unsigned char,std::_Identity<unsigned char>,std::less<unsigned char>,std::allocator<unsigned char>>::erase(
      v1 + 176,
      &v92);
    j__ZNSt12__shared_ptrI14ClientInstanceLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR13MinecraftGameS7_RhEEESt19_Sp_make_shared_tagRKT_DpOT0_(
      (int)&v72,
      (int)&v94,
      v1,
    v24 = std::map<unsigned char,std::shared_ptr<ClientInstance>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<ClientInstance>>>>::operator[](
            v1 + 212,
            &v92);
    *(_DWORD *)v24 = v72;
    v25 = *(_DWORD *)(v24 + 4);
    v26 = v73;
    if ( v73 != v25 )
      if ( v73 )
        v27 = (unsigned int *)(v73 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 + 1, v27) );
          v25 = *(_DWORD *)(v24 + 4);
        }
        else
          ++*v27;
      if ( v25 )
        v29 = (unsigned int *)(v25 + 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 == 1 )
          v31 = (unsigned int *)(v25 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
          if ( &pthread_create )
          {
            __dmb();
            do
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
          }
          else
            v32 = (*v31)--;
          if ( v32 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
      *(_DWORD *)(v24 + 4) = v26;
    v33 = *(_DWORD *)(v1 + 336);
    ClientInstance::init(
      v72,
      (SoundEngine *)(*(_QWORD *)(v1 + 260) >> 32),
      *(minecraft::api::Api **)(v1 + 412),
      (FilePathManager *)*(_QWORD *)(v1 + 260),
      *(NetworkHandler **)(v1 + 336),
      (Timer *)*(_QWORD *)(v1 + 240),
      (Timer *)(*(_QWORD *)(v1 + 240) >> 32),
      *(Social::UserManager **)(v1 + 344),
      SHIDWORD(v1));
    ClientInstance::initCommands(v72);
    ClientInstance::initializeRenderResources(v72);
    ClientInstance::postInitRenderResources(v72);
    ClientInstance::onFullVanillaPackOnStack(v72);
    ClientInstance::onActiveResourcePacksChanged(v72);
    HIDWORD(v1) = ClientInstance::getGuiData(v72);
    v34 = *(_DWORD *)(v1 + 220);
    v35 = v1 + 216;
    for ( i = v1 + 216; v34; v34 = *(_DWORD *)(v34 + 8) )
      i = v34;
    v37 = v1 + 216;
    if ( i != v35 )
      if ( *(_BYTE *)(i + 16) )
        i = v1 + 216;
      v37 = i;
    v38 = (GuiData *)ClientInstance::getGuiData(*(ClientInstance **)(v37 + 20));
    v39 = GuiData::getScreenSizeData(v38);
    GuiData::setScreenSizeData(SHIDWORD(v1), (int)v39);
    MinecraftGame::adjustClientsUISizeAndScale((MinecraftGame *)v1);
    Config::createConfig((Config *)&v70, v72);
    v40 = ClientInstance::getGuiData(v72);
    (*(void (**)(void))(*(_DWORD *)v40 + 8))();
    v41 = (ClientInputHandler *)ClientInstance::getInput(v72);
    ClientInputHandler::onConfigChanged(v41, (const Config *)&v70);
    v42 = (MobEffectsLayout *)ClientInstance::getMobEffectsLayout(v72);
    MobEffectsLayout::onConfigChanged(v42, (const Config *)&v70);
    HIDWORD(v1) = v72;
    if ( ClientInstance::isPrimaryClient(v72) == 1 )
      MinecraftGame::_initPerMachineOptionObservers((MinecraftGame *)v1);
    MinecraftGame::_initPerUserOptionObservers(v1);
    ClientInstance::startSubClientLateJoin(v72);
    v43 = operator new(4u);
    *v43 = v1;
    v44 = (void (*)(void))sub_C18AF6;
    v67 = v43;
    v68 = (void (*)(void))sub_C18AF6;
    v69 = sub_C18AEA;
    v45 = *(_DWORD *)(v1 + 224);
    if ( v45 == v35 )
      goto LABEL_141;
    do
      if ( !v44 )
        sub_DA7654();
      v69((int)&v67, *(const ClientInstance **)(v45 + 20));
      v46 = sub_DA7F5C(v45);
      v44 = v68;
      v45 = v46;
    while ( v46 != v35 );
    if ( v68 )
LABEL_141:
      v44();
    v47 = v71;
    if ( v71 )
      v48 = (unsigned int *)(v71 + 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 == 1 )
        v50 = (unsigned int *)(v47 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
    v52 = v73;
    if ( v73 )
      v53 = (unsigned int *)(v73 + 4);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 == 1 )
        v55 = (unsigned int *)(v52 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 8))(v52);
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
          v56 = (*v55)--;
        if ( v56 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 12))(v52);
    v7 = 1;
  else
    v7 = 0;
  v57 = v79;
  if ( v79 )
    v58 = (unsigned int *)(v79 + 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 == 1 )
      v60 = (unsigned int *)(v57 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v57 + 8))(v57);
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
        v61 = (*v60)--;
      if ( v61 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v57 + 12))(v57);
  CallbackToken::~CallbackToken((CallbackToken *)&v80);
  v62 = v89;
  if ( v89 )
    v63 = (unsigned int *)(v89 + 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 == 1 )
      v65 = (unsigned int *)(v62 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v62 + 8))(v62);
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
        v66 = (*v65)--;
      if ( v66 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v62 + 12))(v62);
  return v7;
}


int __fastcall MinecraftGame::getTextureAtlas(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 380);
  v2 = *(_DWORD *)(a2 + 384);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    result = v2 + 4;
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


void __fastcall MinecraftGame::requestScreenshot(int a1, int a2)
{
  MinecraftGame::requestScreenshot(a1, a2);
}


int __fastcall MinecraftGame::isStartingGame(MinecraftGame *this)
{
  char v1; // r0@1

  v1 = *((_BYTE *)this + 656);
  __dmb();
  return v1 & 1;
}


void __fastcall MinecraftGame::setLaunchedForHMD(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@2
  int v5; // r0@5

  v2 = a1;
  v3 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (**)(void))(**(_DWORD **)v4 + 444))();
  MinecraftEventing::updateEditionType(*(MinecraftEventing **)(v2 + 504));
  if ( v3 == 1 )
  {
    v5 = mce::Singleton<mce::RendererSettings>::mInstance;
    *(_BYTE *)(mce::Singleton<mce::RendererSettings>::mInstance + 8) = 0;
    *(_BYTE *)(v5 + 48) = 0;
  }
}


int __fastcall MinecraftGame::isPrimaryLevelMultiplayer(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1
  Level *v4; // r0@6
  int result; // r0@7

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  v4 = (Level *)ClientInstance::getLevel(*((ClientInstance **)v2 + 5));
  if ( v4 )
    result = Level::isMultiplayerGame(v4);
  else
    result = 0;
  return result;
}


int __fastcall MinecraftGame::getPrimaryClientInstanceTestInterface(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  return ClientInstance::getTestInterface(*((ClientInstance **)v2 + 5));
}


void __fastcall MinecraftGame::_joinServerInstanceThread(MinecraftGame *this)
{
  MinecraftGame::_joinServerInstanceThread(this);
}


unsigned int *__fastcall MinecraftGame::_updateProfiler(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  int v2; // r8@1
  unsigned int *result; // r0@1
  __int64 v4; // r6@1
  unsigned int *v5; // r1@2
  unsigned int *v6; // r5@8
  int v7; // r5@16
  int v8; // r6@16
  unsigned int *v9; // r1@17
  unsigned int v10; // r0@19
  unsigned int *v11; // r7@23
  unsigned int v12; // r0@25
  int v13; // r1@31
  int v14; // r5@31
  int i; // r0@31
  int v16; // r1@33
  int v17; // r1@38
  int j; // r0@38
  int v19; // r5@45
  char v20; // r6@45
  int v21; // r3@45
  unsigned int *v22; // r5@47
  int v23; // r6@47
  unsigned int *v24; // r1@48
  int v25; // r5@52
  bool v26; // r9@53
  signed int v27; // r10@53
  int v28; // r8@57
  AppPlatform **v29; // r0@58
  __int64 v30; // kr00_8@60
  AppPlatform **v31; // r0@61
  int v32; // r6@65
  unsigned int *v33; // r1@66
  unsigned int *v34; // r7@72
  int v35; // r6@80
  unsigned int *v36; // r1@81
  unsigned int *v37; // r7@87
  unsigned int *v38; // r7@93
  int v39; // r6@100
  unsigned int *v40; // r1@101
  unsigned int *v41; // r7@107
  unsigned int *v42; // r1@115
  unsigned int *v43; // r5@131
  int v44; // r6@131
  unsigned int *v45; // r1@132
  unsigned int *v46; // r1@137
  unsigned int *v47; // r7@143
  unsigned int *v48; // r5@149
  int (__fastcall *v49)(MinecraftGame *); // r1@157
  __int64 v50; // [sp+8h] [bp-68h]@63
  Options *v51; // [sp+10h] [bp-60h]@130
  int v52; // [sp+14h] [bp-5Ch]@131
  Options *v53; // [sp+18h] [bp-58h]@45
  int v54; // [sp+1Ch] [bp-54h]@47
  Options *v55; // [sp+20h] [bp-50h]@45
  int v56; // [sp+24h] [bp-4Ch]@114
  Options *v57; // [sp+28h] [bp-48h]@57
  int v58; // [sp+2Ch] [bp-44h]@65
  Options *v59; // [sp+30h] [bp-40h]@54
  int v60; // [sp+34h] [bp-3Ch]@80
  Options *v61; // [sp+38h] [bp-38h]@52
  int v62; // [sp+3Ch] [bp-34h]@100
  Options *v63; // [sp+40h] [bp-30h]@16
  int v64; // [sp+44h] [bp-2Ch]@16
  char v65; // [sp+48h] [bp-28h]@1
  int v66; // [sp+4Ch] [bp-24h]@1

  v1 = this;
  v2 = mce::Singleton<mce::RendererSettings>::mInstance;
  result = MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v65, (int)this);
  v4 = *(_QWORD *)&v65;
  if ( v66 )
  {
    v5 = (unsigned int *)(v66 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = (unsigned int *)__ldrex(v5);
      while ( __strex((unsigned int)result - 1, v5) );
    }
    else
      result = (unsigned int *)(*v5)--;
    if ( result == (unsigned int *)1 )
      v6 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (unsigned int *)__ldrex(v6);
        while ( __strex((unsigned int)result - 1, v6) );
      }
      else
        result = (unsigned int *)(*v6)--;
      if ( result == (unsigned int *)1 )
        result = (unsigned int *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  }
  if ( !(_DWORD)v4 )
    return result;
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v63, (int)v1);
  v7 = Options::getDevBenchmarkModeTime(v63);
  v8 = v64;
  if ( v64 )
    v9 = (unsigned int *)(v64 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  if ( v7 )
    v13 = *((_DWORD *)v1 + 55);
    v14 = (int)v1 + 216;
    for ( i = (int)v1 + 216; v13; v13 = *(_DWORD *)(v13 + 8) )
      i = v13;
    v16 = (int)v1 + 216;
    if ( i != v14 )
      if ( *(_BYTE *)(i + 16) )
        i = (int)v1 + 216;
      v16 = i;
    result = (unsigned int *)ClientInstance::getLevel(*(ClientInstance **)(v16 + 20));
    if ( !result )
      return result;
    v17 = *((_DWORD *)v1 + 55);
    for ( j = (int)v1 + 216; v17; v17 = *(_DWORD *)(v17 + 8) )
      j = v17;
    if ( j != v14 && !*(_BYTE *)(j + 16) )
      v14 = j;
    result = (unsigned int *)ClientInstance::getLocalPlayer(*(ClientInstance **)(v14 + 20));
    result = (unsigned int *)LocalPlayer::getLoadingState((LocalPlayer *)result);
    if ( result != (unsigned int *)16 )
    v19 = *(_BYTE *)(v2 + 48);
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v55, (int)v1);
    v20 = Options::getDevEnableProfilerOutput(v55);
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v53, (int)v1);
    v21 = Options::getDevBenchmarkModeTime(v53);
    if ( v19 != 1 )
      v19 = 0;
    result = (unsigned int *)ProfilerLite::tick(
                               (ProfilerLite *)&ProfilerLite::gProfilerLiteInstance,
                               v19,
                               v20,
                               v21,
                               -1LL,
                               -1LL);
    v22 = result;
    v23 = v54;
    if ( v54 )
      v24 = (unsigned int *)(v54 + 4);
          result = (unsigned int *)__ldrex(v24);
        while ( __strex((unsigned int)result - 1, v24) );
        result = (unsigned int *)(*v24)--;
        v38 = (unsigned int *)(v23 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (unsigned int *)__ldrex(v38);
          while ( __strex((unsigned int)result - 1, v38) );
        }
        else
          result = (unsigned int *)(*v38)--;
        if ( result == (unsigned int *)1 )
          result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
    v39 = v56;
    if ( !v56 )
      goto LABEL_129;
    v42 = (unsigned int *)(v56 + 4);
        result = (unsigned int *)__ldrex(v42);
      while ( __strex((unsigned int)result - 1, v42) );
      result = (unsigned int *)(*v42)--;
    if ( result != (unsigned int *)1 )
    v41 = (unsigned int *)(v39 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 8))(v39);
        result = (unsigned int *)__ldrex(v41);
      while ( __strex((unsigned int)result - 1, v41) );
      goto LABEL_126;
LABEL_125:
    result = (unsigned int *)(*v41)--;
    goto LABEL_126;
  v25 = *(_BYTE *)(v2 + 48);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v61, (int)v1);
  if ( Options::getDevEnableProfilerOutput(v61) )
    v26 = 1;
    v27 = 0;
  else
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v59, (int)v1);
    v26 = 0;
    if ( Options::getRenderDebug(v59) == 5 )
      v26 = 1;
    v27 = 1;
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v57, (int)v1);
  v28 = Options::getDevBenchmarkModeTime(v57);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v29 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v29 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v30 = AppPlatform::getUsedMemory(*v29);
    v31 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v31 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v50 = AppPlatform::getMaximumUsedMemory(*v31);
  if ( v25 != 1 )
    v25 = 0;
  result = (unsigned int *)ProfilerLite::tick(
                             (ProfilerLite *)&ProfilerLite::gProfilerLiteInstance,
                             v25,
                             v26,
                             v28,
                             v30,
                             v50);
  v22 = result;
  v32 = v58;
  if ( v58 )
    v33 = (unsigned int *)(v58 + 4);
        result = (unsigned int *)__ldrex(v33);
      while ( __strex((unsigned int)result - 1, v33) );
      result = (unsigned int *)(*v33)--;
      v34 = (unsigned int *)(v32 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
          result = (unsigned int *)__ldrex(v34);
        while ( __strex((unsigned int)result - 1, v34) );
        result = (unsigned int *)(*v34)--;
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
  if ( v27 == 1 )
    v35 = v60;
    if ( v60 )
      v36 = (unsigned int *)(v60 + 4);
          result = (unsigned int *)__ldrex(v36);
        while ( __strex((unsigned int)result - 1, v36) );
        result = (unsigned int *)(*v36)--;
        v37 = (unsigned int *)(v35 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
            result = (unsigned int *)__ldrex(v37);
          while ( __strex((unsigned int)result - 1, v37) );
          result = (unsigned int *)(*v37)--;
          result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
  v39 = v62;
  if ( !v62 )
    goto LABEL_129;
  v40 = (unsigned int *)(v62 + 4);
  if ( &pthread_create )
    __dmb();
    do
      result = (unsigned int *)__ldrex(v40);
    while ( __strex((unsigned int)result - 1, v40) );
    result = (unsigned int *)(*v40)--;
  if ( result != (unsigned int *)1 )
  v41 = (unsigned int *)(v39 + 8);
  (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 8))(v39);
  if ( !&pthread_create )
    goto LABEL_125;
  __dmb();
  do
    result = (unsigned int *)__ldrex(v41);
  while ( __strex((unsigned int)result - 1, v41) );
LABEL_126:
  if ( result == (unsigned int *)1 )
    result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v39 + 12))(v39);
    if ( !v22 )
    goto LABEL_130;
LABEL_129:
  if ( v22 != (unsigned int *)1 )
LABEL_130:
  MinecraftEventing::fireEventPerformanceMetrics(*((_DWORD *)v1 + 126), (int)&unk_27F6370);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v51, (int)v1);
  result = (unsigned int *)Options::getDevBenchmarkModeTime(v51);
  if ( result )
    result = (unsigned int *)ProfilerLite::isBenchmarkModeDone((ProfilerLite *)&ProfilerLite::gProfilerLiteInstance);
    v43 = result;
    v44 = v52;
    if ( v52 )
      v45 = (unsigned int *)(v52 + 4);
          result = (unsigned int *)__ldrex(v45);
        while ( __strex((unsigned int)result - 1, v45) );
        result = (unsigned int *)(*v45)--;
        v47 = (unsigned int *)(v44 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
            result = (unsigned int *)__ldrex(v47);
          while ( __strex((unsigned int)result - 1, v47) );
          result = (unsigned int *)(*v47)--;
          result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
    if ( v43 == (unsigned int *)1 )
      v49 = *(int (__fastcall **)(MinecraftGame *))(*(_DWORD *)v1 + 104);
      return (unsigned int *)v49(v1);
    v1 = (MinecraftGame *)v52;
      v46 = (unsigned int *)(v52 + 4);
          result = (unsigned int *)__ldrex(v46);
        while ( __strex((unsigned int)result - 1, v46) );
        result = (unsigned int *)(*v46)--;
        v48 = (unsigned int *)((char *)v1 + 8);
        (*(void (__fastcall **)(MinecraftGame *))(*(_DWORD *)v1 + 8))(v1);
            result = (unsigned int *)__ldrex(v48);
          while ( __strex((unsigned int)result - 1, v48) );
          result = (unsigned int *)(*v48)--;
          v49 = *(int (__fastcall **)(MinecraftGame *))(*(_DWORD *)v1 + 12);
          return (unsigned int *)v49(v1);
  return result;
}


void __fastcall MinecraftGame::returnJoinLobbyResultBasedOnPendingRealmsInvites(MinecraftGame *this)
{
  MinecraftGame::returnJoinLobbyResultBasedOnPendingRealmsInvites(this);
}


void __fastcall MinecraftGame::_onActiveResourcePacksChanged(MinecraftGame *this, ResourcePackManager *a2, int a3)
{
  MinecraftGame *v3; // r5@1
  int v4; // r8@1
  ResourcePackManager *v5; // r6@1
  char v6; // r0@1
  SkinRepository *v7; // r7@3
  ResourcePackManager *v8; // r4@3
  char *v9; // r0@3
  int v10; // r7@3
  unsigned int *v11; // r1@4
  unsigned int v12; // r0@6
  unsigned int *v13; // r4@10
  unsigned int v14; // r0@12
  __int64 v15; // r0@17
  void *v16; // r2@17
  int v17; // r6@17
  unsigned int v18; // r4@17
  int v19; // r2@20
  ResourceLocationPair *v20; // r0@20
  ResourceLocationPair *v21; // r4@20
  int v22; // r6@25
  void *v23; // r0@25
  _DWORD *v24; // r0@25
  __int64 v25; // r1@25
  SoundEngine *v26; // r0@31
  char v27; // r1@31
  int v28; // r6@31
  _DWORD *v29; // r0@31
  __int64 v30; // r1@31
  char v31; // r0@36
  int v32; // r6@37
  _DWORD *v33; // r0@37
  __int64 v34; // r1@37
  int v35; // r6@41
  _DWORD *v36; // r0@41
  __int64 v37; // r1@41
  int v38; // r6@45
  _DWORD *v39; // r0@45
  __int64 v40; // r1@45
  int v41; // r6@49
  void *v42; // r0@49
  _DWORD *v43; // r0@49
  __int64 v44; // r1@49
  int v45; // r6@55
  void *v46; // r0@55
  _DWORD *v47; // r0@55
  __int64 v48; // r1@55
  int v49; // r6@61
  void *v50; // r0@61
  _DWORD *v51; // r0@61
  __int64 v52; // r1@61
  int v53; // r6@67
  void *v54; // r0@67
  _DWORD *v55; // r0@67
  __int64 v56; // r1@67
  int v57; // r6@73
  _DWORD *v58; // r0@73
  __int64 v59; // r1@73
  int v60; // r6@78
  void *v61; // r0@78
  _DWORD *v62; // r0@78
  __int64 v63; // r1@78
  int v64; // r6@84
  _DWORD *v65; // r0@84
  __int64 v66; // r1@84
  int v67; // r6@88
  _DWORD *v68; // r0@88
  __int64 v69; // r1@88
  ResourceLocationPair *v70; // r0@92
  ResourceLocationPair *v71; // r4@92
  _DWORD *v72; // [sp+8h] [bp-220h]@88
  __int64 v73; // [sp+10h] [bp-218h]@88
  char v74; // [sp+18h] [bp-210h]@88
  void (*v75)(void); // [sp+20h] [bp-208h]@88
  _DWORD *v76; // [sp+28h] [bp-200h]@84
  __int64 v77; // [sp+30h] [bp-1F8h]@84
  char v78; // [sp+38h] [bp-1F0h]@84
  void (*v79)(void); // [sp+40h] [bp-1E8h]@84
  _DWORD *v80; // [sp+48h] [bp-1E0h]@78
  __int64 v81; // [sp+50h] [bp-1D8h]@78
  char v82; // [sp+58h] [bp-1D0h]@78
  void (*v83)(void); // [sp+60h] [bp-1C8h]@78
  void *v84; // [sp+68h] [bp-1C0h]@78
  char *v85; // [sp+6Ch] [bp-1BCh]@78
  char *v86; // [sp+70h] [bp-1B8h]@78
  _DWORD *v87; // [sp+74h] [bp-1B4h]@73
  __int64 v88; // [sp+7Ch] [bp-1ACh]@73
  char v89; // [sp+84h] [bp-1A4h]@73
  void (*v90)(void); // [sp+8Ch] [bp-19Ch]@73
  _DWORD *v91; // [sp+94h] [bp-194h]@67
  __int64 v92; // [sp+9Ch] [bp-18Ch]@67
  char v93; // [sp+A4h] [bp-184h]@67
  void (*v94)(void); // [sp+ACh] [bp-17Ch]@67
  void *v95; // [sp+B4h] [bp-174h]@67
  char *v96; // [sp+B8h] [bp-170h]@67
  char *v97; // [sp+BCh] [bp-16Ch]@67
  _DWORD *v98; // [sp+C0h] [bp-168h]@61
  __int64 v99; // [sp+C8h] [bp-160h]@61
  char v100; // [sp+D0h] [bp-158h]@61
  void (*v101)(void); // [sp+D8h] [bp-150h]@61
  void *v102; // [sp+E0h] [bp-148h]@61
  char *v103; // [sp+E4h] [bp-144h]@61
  char *v104; // [sp+E8h] [bp-140h]@61
  _DWORD *v105; // [sp+ECh] [bp-13Ch]@55
  __int64 v106; // [sp+F4h] [bp-134h]@55
  char v107; // [sp+FCh] [bp-12Ch]@55
  void (*v108)(void); // [sp+104h] [bp-124h]@55
  void *v109; // [sp+10Ch] [bp-11Ch]@55
  char *v110; // [sp+110h] [bp-118h]@55
  char *v111; // [sp+114h] [bp-114h]@55
  _DWORD *v112; // [sp+118h] [bp-110h]@49
  __int64 v113; // [sp+120h] [bp-108h]@49
  char v114; // [sp+128h] [bp-100h]@49
  void (*v115)(void); // [sp+130h] [bp-F8h]@49
  void *v116; // [sp+138h] [bp-F0h]@49
  char *v117; // [sp+13Ch] [bp-ECh]@49
  char *v118; // [sp+140h] [bp-E8h]@49
  _DWORD *v119; // [sp+144h] [bp-E4h]@45
  __int64 v120; // [sp+14Ch] [bp-DCh]@45
  char v121; // [sp+154h] [bp-D4h]@45
  void (*v122)(void); // [sp+15Ch] [bp-CCh]@45
  _DWORD *v123; // [sp+164h] [bp-C4h]@41
  __int64 v124; // [sp+16Ch] [bp-BCh]@41
  char v125; // [sp+174h] [bp-B4h]@41
  void (*v126)(void); // [sp+17Ch] [bp-ACh]@41
  _DWORD *v127; // [sp+184h] [bp-A4h]@37
  __int64 v128; // [sp+18Ch] [bp-9Ch]@37
  char v129; // [sp+194h] [bp-94h]@37
  void (*v130)(void); // [sp+19Ch] [bp-8Ch]@37
  _DWORD *v131; // [sp+1A4h] [bp-84h]@31
  __int64 v132; // [sp+1ACh] [bp-7Ch]@31
  char v133; // [sp+1B4h] [bp-74h]@31
  void (*v134)(void); // [sp+1BCh] [bp-6Ch]@31
  _DWORD *v135; // [sp+1C4h] [bp-64h]@25
  __int64 v136; // [sp+1CCh] [bp-5Ch]@25
  char v137; // [sp+1D4h] [bp-54h]@25
  void (*v138)(void); // [sp+1DCh] [bp-4Ch]@25
  void *v139; // [sp+1E4h] [bp-44h]@25
  char *v140; // [sp+1E8h] [bp-40h]@25
  char *v141; // [sp+1ECh] [bp-3Ch]@25
  __int64 ptr; // [sp+1F0h] [bp-38h]@17
  unsigned int v143; // [sp+1F8h] [bp-30h]@17
  void *v144; // [sp+1FCh] [bp-2Ch]@17
  ResourceLocationPair *v145; // [sp+200h] [bp-28h]@17
  Options *v146; // [sp+208h] [bp-20h]@3
  int v147; // [sp+20Ch] [bp-1Ch]@3

  v3 = this;
  *((_BYTE *)this + 546) = 0;
  v4 = a3;
  v5 = a2;
  ResourceLoadManager::cancel(*((ResourceLoadManager **)this + 165));
  ResourcePackManager::clearPackReports(*((ResourcePackManager **)v3 + 80));
  MinecraftGame::reloadMaterials(v3, 1, 0);
  v6 = *((_BYTE *)v3 + 656);
  __dmb();
  if ( v6 & 1 )
  {
    mce::TextureGroup::unloadAll(*((mce::TextureGroup **)v3 + 16), 1);
    mce::RenderMaterialGroup::startLoadAsync((mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common);
    mce::RenderMaterialGroup::startLoadAsync((mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable);
  }
  GeometryGroup::unloadGeometries(*((GeometryGroup **)v3 + 82));
  GeometryGroup::loadModelPackFiles(*((GeometryGroup **)v3 + 82));
  v7 = (SkinRepository *)*((_DWORD *)v3 + 25);
  v8 = (ResourcePackManager *)*((_DWORD *)v3 + 80);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v146, (int)v3);
  v9 = Options::getLanguage(v146);
  I18n::loadLanguages(v8, v7, (const void **)v9);
  v10 = v147;
  if ( v147 )
    v11 = (unsigned int *)(v147 + 4);
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
  ResourcePackManager::onLanguageChanged(*((ResourcePackManager **)v3 + 80));
  UIRepository::clearLoadedUITextureInfo(*((UIRepository **)v3 + 17));
  ResourcePackManager::findAllTexturesInUse((ResourcePackManager *)&v144, (int)v5);
  v15 = *(_QWORD *)&v144;
  v16 = 0;
  v17 = *((_DWORD *)v3 + 15);
  ptr = 0LL;
  v143 = 0;
  v18 = (v145 - (ResourceLocationPair *)v144) >> 6;
  if ( v18 )
    if ( v18 >= 0x4000000 )
      sub_DA7414();
    v16 = operator new(v145 - (ResourceLocationPair *)v144);
    v15 = *(_QWORD *)&v144;
  ptr = __PAIR__(
          std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ResourceLocationPair const*,std::vector<ResourceLocationPair,std::allocator<ResourceLocationPair>>>,ResourceLocationPair*>(
            v15,
            SHIDWORD(v15),
            (int)v16),
          (unsigned int)v16);
  v143 = v19 + (v18 << 6);
  mce::TextureGroup::loadTextures(v17, (unsigned __int64 *)&ptr);
  v21 = (ResourceLocationPair *)HIDWORD(ptr);
  v20 = (ResourceLocationPair *)ptr;
  if ( (_DWORD)ptr != HIDWORD(ptr) )
    do
      v20 = (ResourceLocationPair *)((char *)ResourceLocationPair::~ResourceLocationPair(v20) + 64);
    while ( v21 != v20 );
    v20 = (ResourceLocationPair *)ptr;
  if ( v20 )
    operator delete((void *)v20);
  v22 = *((_DWORD *)v3 + 165);
  v23 = operator new(8u);
  v139 = v23;
  v141 = (char *)v23 + 8;
  *(_DWORD *)v23 = 1;
  *((_DWORD *)v23 + 1) = 8;
  v140 = (char *)v23 + 8;
  v138 = 0;
  v24 = operator new(4u);
  LODWORD(v25) = sub_C23178;
  *v24 = v3;
  HIDWORD(v25) = sub_C230F8;
  v135 = v24;
  v136 = v25;
  ResourceLoadManager::loadResource(v22, 0x40000000, (unsigned __int64 *)&v139, (int)&v137, (int)&v135);
  if ( (_DWORD)v136 )
    ((void (*)(void))v136)();
  if ( v138 )
    v138();
  if ( v139 )
    operator delete(v139);
  v26 = (SoundEngine *)*((_DWORD *)v3 + 66);
  v27 = *((_BYTE *)v3 + 656);
  SoundEngine::load(v26, v27 & 1);
  v28 = *((_DWORD *)v3 + 165);
  v134 = 0;
  v29 = operator new(4u);
  LODWORD(v30) = sub_C231EC;
  *v29 = v3;
  HIDWORD(v30) = sub_C231E2;
  v131 = v29;
  v132 = v30;
  ResourceLoadManager::loadResource(v28, 1, 1, (int)&v133, (int)&v131);
  if ( (_DWORD)v132 )
    ((void (*)(void))v132)();
  if ( v134 )
    v134();
  if ( v4 == 1 )
    mce::TextureGroup::removeTickingTextures(*((mce::TextureGroup **)v3 + 15));
    v31 = *((_BYTE *)v3 + 656);
    __dmb();
    if ( v31 & 1 )
      v32 = *((_DWORD *)v3 + 165);
      v130 = 0;
      v33 = operator new(4u);
      LODWORD(v34) = sub_C234C0;
      *v33 = v3;
      HIDWORD(v34) = sub_C23224;
      v127 = v33;
      v128 = v34;
      ResourceLoadManager::loadResource(v32, 16, 1, (int)&v129, (int)&v127);
      if ( (_DWORD)v128 )
        ((void (*)(void))v128)();
      if ( v130 )
        v130();
      v35 = *((_DWORD *)v3 + 165);
      v126 = 0;
      v36 = operator new(4u);
      LODWORD(v37) = sub_C2392C;
      *v36 = v3;
      HIDWORD(v37) = sub_C23698;
      v123 = v36;
      v124 = v37;
      ResourceLoadManager::loadResource(v35, 32, 1, (int)&v125, (int)&v123);
      if ( (_DWORD)v124 )
        ((void (*)(void))v124)();
      if ( v126 )
        v126();
      v38 = *((_DWORD *)v3 + 165);
      v122 = 0;
      v39 = operator new(4u);
      LODWORD(v40) = sub_C23ADC;
      *v39 = v3;
      HIDWORD(v40) = sub_C23964;
      v119 = v39;
      v120 = v40;
      ResourceLoadManager::loadResource(v38, 128, 16, (int)&v121, (int)&v119);
      if ( (_DWORD)v120 )
        ((void (*)(void))v120)();
      if ( v122 )
        v122();
      v41 = *((_DWORD *)v3 + 165);
      v42 = operator new(8u);
      v116 = v42;
      v118 = (char *)v42 + 8;
      *(_DWORD *)v42 = 32;
      *((_DWORD *)v42 + 1) = 16;
      v117 = (char *)v42 + 8;
      v115 = 0;
      v43 = operator new(4u);
      LODWORD(v44) = sub_C23CD4;
      *v43 = v3;
      HIDWORD(v44) = sub_C23B14;
      v112 = v43;
      v113 = v44;
      ResourceLoadManager::loadResource(v41, 0x40000000, (unsigned __int64 *)&v116, (int)&v114, (int)&v112);
      if ( (_DWORD)v113 )
        ((void (*)(void))v113)();
      if ( v115 )
        v115();
      if ( v116 )
        operator delete(v116);
      v45 = *((_DWORD *)v3 + 165);
      v46 = operator new(8u);
      v109 = v46;
      v111 = (char *)v46 + 8;
      *(_DWORD *)v46 = 16;
      *((_DWORD *)v46 + 1) = 32;
      v110 = (char *)v46 + 8;
      v108 = 0;
      v47 = operator new(4u);
      LODWORD(v48) = sub_C23D90;
      *v47 = v3;
      HIDWORD(v48) = sub_C23D54;
      v105 = v47;
      v106 = v48;
      ResourceLoadManager::loadResource(v45, 0x40000000, (unsigned __int64 *)&v109, (int)&v107, (int)&v105);
      if ( (_DWORD)v106 )
        ((void (*)(void))v106)();
      if ( v108 )
        v108();
      if ( v109 )
        operator delete(v109);
      v49 = *((_DWORD *)v3 + 165);
      v50 = operator new(8u);
      v102 = v50;
      v104 = (char *)v50 + 8;
      *(_DWORD *)v50 = 8;
      *((_DWORD *)v50 + 1) = 16;
      v103 = (char *)v50 + 8;
      v101 = 0;
      v51 = operator new(4u);
      LODWORD(v52) = sub_C23E48;
      *v51 = v3;
      HIDWORD(v52) = sub_C23DC8;
      v98 = v51;
      v99 = v52;
      ResourceLoadManager::loadResource(v49, 0x40000000, (unsigned __int64 *)&v102, (int)&v100, (int)&v98);
      if ( (_DWORD)v99 )
        ((void (*)(void))v99)();
      if ( v101 )
        v101();
      if ( v102 )
        operator delete(v102);
      v53 = *((_DWORD *)v3 + 165);
      v54 = operator new(8u);
      v95 = v54;
      v97 = (char *)v54 + 8;
      *(_DWORD *)v54 = 16;
      *((_DWORD *)v54 + 1) = 32;
      v96 = (char *)v54 + 8;
      v94 = 0;
      v55 = operator new(4u);
      LODWORD(v56) = sub_C2405C;
      *v55 = v3;
      HIDWORD(v56) = sub_C24052;
      v91 = v55;
      v92 = v56;
      ResourceLoadManager::loadResource(v53, 0x40000000, (unsigned __int64 *)&v95, (int)&v93, (int)&v91);
      if ( (_DWORD)v92 )
        ((void (*)(void))v92)();
      if ( v94 )
        v94();
      if ( v95 )
        operator delete(v95);
      v57 = *((_DWORD *)v3 + 165);
      v90 = 0;
      v58 = operator new(4u);
      LODWORD(v59) = sub_C2409A;
      *v58 = v3;
      HIDWORD(v59) = sub_C24092;
      v87 = v58;
      v88 = v59;
      ResourceLoadManager::loadResource(v57, 0x40000000, 1, (int)&v89, (int)&v87);
      if ( (_DWORD)v88 )
        ((void (*)(void))v88)();
      if ( v90 )
        v90();
      MinecraftGame::initFoliageAndBlockTextureTessellator(v3);
    v60 = *((_DWORD *)v3 + 165);
    v61 = operator new(8u);
    v84 = v61;
    v86 = (char *)v61 + 8;
    *(_DWORD *)v61 = 1;
    *((_DWORD *)v61 + 1) = 64;
    v85 = (char *)v61 + 8;
    v83 = 0;
    v62 = operator new(4u);
    LODWORD(v63) = sub_C2410A;
    *v62 = v3;
    HIDWORD(v63) = sub_C240D0;
    v80 = v62;
    v81 = v63;
    ResourceLoadManager::loadResource(v60, 0x40000000, (unsigned __int64 *)&v84, (int)&v82, (int)&v80);
    if ( (_DWORD)v81 )
      ((void (*)(void))v81)();
    if ( v83 )
      v83();
    if ( v84 )
      operator delete(v84);
  MinecraftGame::handleReloadUIDefinitions(v3);
  v64 = *((_DWORD *)v3 + 165);
  v79 = 0;
  v65 = operator new(4u);
  LODWORD(v66) = sub_C24348;
  *v65 = v3;
  HIDWORD(v66) = sub_C24140;
  v76 = v65;
  v77 = v66;
  ResourceLoadManager::loadResource(v64, 4, 0, (int)&v78, (int)&v76);
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  if ( v79 )
    v79();
  v67 = *((_DWORD *)v3 + 165);
  v75 = 0;
  v68 = operator new(8u);
  LODWORD(v69) = sub_C24428;
  *v68 = v3;
  v68[1] = v4;
  HIDWORD(v69) = sub_C2437E;
  v72 = v68;
  v73 = v69;
  ResourceLoadManager::loadResource(v67, 0x40000000, -1, (int)&v74, (int)&v72);
  if ( (_DWORD)v73 )
    ((void (*)(void))v73)();
  if ( v75 )
    v75();
  v71 = v145;
  v70 = (ResourceLocationPair *)v144;
  if ( v144 != (void *)v145 )
      v70 = (ResourceLocationPair *)((char *)ResourceLocationPair::~ResourceLocationPair(v70) + 64);
    while ( v71 != v70 );
    v70 = (ResourceLocationPair *)v144;
  if ( v70 )
    operator delete((void *)v70);
}


int __fastcall MinecraftGame::isIPv4Supported(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1
  Minecraft *v4; // r0@6
  int v5; // r0@6

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  v4 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)v2 + 5));
  v5 = Minecraft::getServerLocator(v4);
  return (*(int (**)(void))(*(_DWORD *)v5 + 36))();
}


int __fastcall MinecraftGame::currentScreenShouldStealMouse(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1
  int v4; // r0@6

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  v4 = ClientInstance::getScreen(*((ClientInstance **)v2 + 5));
  return (*(int (**)(void))(*(_DWORD *)v4 + 172))();
}


int __fastcall MinecraftGame::getClientInstance(MinecraftGame *this, int a2)
{
  char *v2; // r3@1
  char *v3; // r2@1
  char *v4; // r12@2
  char *v5; // r0@3

  v2 = (char *)*((_DWORD *)this + 55);
  v3 = (char *)this + 216;
  if ( v2 )
  {
    v4 = (char *)this + 216;
    do
    {
      v5 = v2;
      while ( (unsigned __int8)v5[16] < (unsigned int)a2 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 216;
LABEL_10:
  if ( v5 != v3 && (unsigned __int8)v5[16] <= (unsigned int)a2 )
    v3 = v5;
  return *((_DWORD *)v3 + 5);
}


void __fastcall MinecraftGame::_pushAlwaysActiveScreens(MinecraftGame *this)
{
  MinecraftGame *v1; // r8@1
  char *v2; // r4@1
  int v3; // r1@1
  int v4; // r5@1
  char *i; // r0@1
  char *v6; // r1@3
  int v7; // r0@7
  int v8; // r5@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r6@14
  unsigned int v12; // r0@16
  int v13; // r1@21
  char *v14; // r0@21
  int j; // r5@21
  char *v16; // r1@23
  int v17; // r0@27
  int v18; // r5@27
  unsigned int *v19; // r1@28
  unsigned int v20; // r0@30
  unsigned int *v21; // r6@34
  unsigned int v22; // r0@36
  int v23; // r1@41
  char *v24; // r0@41
  int k; // r5@41
  char *v26; // r1@43
  int v27; // r0@47
  int v28; // r5@47
  unsigned int *v29; // r1@48
  unsigned int v30; // r0@50
  unsigned int *v31; // r6@54
  unsigned int v32; // r0@56
  int v33; // r1@61
  char *l; // r0@61
  char *v35; // r1@63
  int v36; // r5@67
  int v37; // r1@68
  char *v38; // r0@68
  int m; // r6@68
  char *v40; // r1@70
  int v41; // r0@74
  int v42; // r6@74
  unsigned int *v43; // r1@75
  unsigned int v44; // r0@77
  unsigned int *v45; // r7@81
  unsigned int v46; // r0@83
  int v47; // r1@89
  char *v48; // r0@89
  int n; // r5@89
  int v50; // r0@94
  int v51; // r4@94
  unsigned int *v52; // r1@95
  unsigned int v53; // r0@97
  unsigned int *v54; // r5@101
  unsigned int v55; // r0@103
  int v56; // [sp+0h] [bp-40h]@94
  int v57; // [sp+4h] [bp-3Ch]@94
  char v58; // [sp+8h] [bp-38h]@74
  int v59; // [sp+Ch] [bp-34h]@74
  char v60; // [sp+10h] [bp-30h]@47
  int v61; // [sp+14h] [bp-2Ch]@47
  char v62; // [sp+18h] [bp-28h]@27
  int v63; // [sp+1Ch] [bp-24h]@27
  char v64; // [sp+20h] [bp-20h]@7
  int v65; // [sp+24h] [bp-1Ch]@7

  v1 = this;
  v2 = (char *)this + 216;
  v3 = *((_DWORD *)this + 55);
  v4 = *((_DWORD *)this + 26);
  for ( i = (char *)this + 216; v3; v3 = *(_DWORD *)(v3 + 8) )
    i = (char *)v3;
  v6 = v2;
  if ( i != v2 )
  {
    if ( i[16] )
      i = v2;
    v6 = i;
  }
  v7 = ClientInstance::getSceneFactory(*((ClientInstance **)v6 + 5));
  SceneFactory::createCubeMapScreen((SceneFactory *)&v64, v7, 0);
  SceneStack::pushScreen(v4, (int)&v64, 0);
  v8 = v65;
  if ( v65 )
    v9 = (unsigned int *)(v65 + 4);
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
  v13 = *((_DWORD *)v1 + 55);
  v14 = v2;
  for ( j = *((_DWORD *)v1 + 26); v13; v13 = *(_DWORD *)(v13 + 8) )
    v14 = (char *)v13;
  v16 = v2;
  if ( v14 != v2 )
    if ( v14[16] )
      v14 = v2;
    v16 = v14;
  v17 = ClientInstance::getSceneFactory(*((ClientInstance **)v16 + 5));
  SceneFactory::createDebugScreen((SceneFactory *)&v62, v17);
  SceneStack::pushScreen(j, (int)&v62, 0);
  v18 = v63;
  if ( v63 )
    v19 = (unsigned int *)(v63 + 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      v21 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  v23 = *((_DWORD *)v1 + 55);
  v24 = v2;
  for ( k = *((_DWORD *)v1 + 26); v23; v23 = *(_DWORD *)(v23 + 8) )
    v24 = (char *)v23;
  v26 = v2;
  if ( v24 != v2 )
    if ( v24[16] )
      v24 = v2;
    v26 = v24;
  v27 = ClientInstance::getSceneFactory(*((ClientInstance **)v26 + 5));
  SceneFactory::createToastScreen((SceneFactory *)&v60, v27);
  SceneStack::pushScreen(k, (int)&v60, 0);
  v28 = v61;
  if ( v61 )
    v29 = (unsigned int *)(v61 + 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 == 1 )
      v31 = (unsigned int *)(v28 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 8))(v28);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
  v33 = *((_DWORD *)v1 + 55);
  for ( l = v2; v33; v33 = *(_DWORD *)(v33 + 8) )
    l = (char *)v33;
  v35 = v2;
  if ( l != v2 )
    if ( l[16] )
      l = v2;
    v35 = l;
  v36 = ClientInstance::getHoloInput(*((ClientInstance **)v35 + 5));
  if ( (*(int (**)(void))(*(_DWORD *)v36 + 44))() == 1 )
    v37 = *((_DWORD *)v1 + 55);
    v38 = v2;
    for ( m = *((_DWORD *)v1 + 26); v37; v37 = *(_DWORD *)(v37 + 8) )
      v38 = (char *)v37;
    v40 = v2;
    if ( v38 != v2 )
      if ( v38[16] )
        v38 = v2;
      v40 = v38;
    v41 = ClientInstance::getSceneFactory(*((ClientInstance **)v40 + 5));
    SceneFactory::createHolographicPostRenderScreen((SceneFactory *)&v58, v41);
    SceneStack::pushScreen(m, (int)&v58, 0);
    v42 = v59;
    if ( v59 )
      v43 = (unsigned int *)(v59 + 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 == 1 )
        v45 = (unsigned int *)(v42 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 8))(v42);
        if ( &pthread_create )
        {
          __dmb();
          do
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
        }
        else
          v46 = (*v45)--;
        if ( v46 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 12))(v42);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v36 + 268))(v36) == 2 )
      v47 = *((_DWORD *)v1 + 55);
      v48 = v2;
      for ( n = *((_DWORD *)v1 + 26); v47; v47 = *(_DWORD *)(v47 + 8) )
        v48 = (char *)v47;
      if ( v48 != v2 && !v48[16] )
        v2 = v48;
      v50 = ClientInstance::getSceneFactory(*((ClientInstance **)v2 + 5));
      SceneFactory::createHolographicCursorScreen((SceneFactory *)&v56, v50);
      SceneStack::pushScreen(n, (int)&v56, 0);
      v51 = v57;
      if ( v57 )
        v52 = (unsigned int *)(v57 + 4);
            v53 = __ldrex(v52);
          while ( __strex(v53 - 1, v52) );
          v53 = (*v52)--;
        if ( v53 == 1 )
          v54 = (unsigned int *)(v51 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v51 + 8))(v51);
          if ( &pthread_create )
          {
            __dmb();
            do
              v55 = __ldrex(v54);
            while ( __strex(v55 - 1, v54) );
          }
          else
            v55 = (*v54)--;
          if ( v55 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v51 + 12))(v51);
}


signed int __fastcall MinecraftGame::useTouchscreen(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  return j_j_j__ZNK14ClientInstance14useTouchscreenEv(*((ClientInstance **)v2 + 5));
}


int __fastcall MinecraftGame::setPrimaryCameraTargetEntity(MinecraftGame *this, Entity *a2)
{
  int v2; // r3@1
  char *v3; // r0@1
  char *i; // r2@1

  v2 = *((_DWORD *)this + 55);
  v3 = (char *)this + 216;
  for ( i = v3; v2; v2 = *(_DWORD *)(v2 + 8) )
    i = (char *)v2;
  if ( i != v3 && !i[16] )
    v3 = i;
  return j_j_j__ZN14ClientInstance21setCameraTargetEntityEP6Entity(*((ClientInstance **)v3 + 5), a2);
}


PackReport *__fastcall MinecraftGame::_addVanillaBasePack(MinecraftGame *this, ResourcePackStack *a2)
{
  MinecraftGame *v2; // r5@1
  ResourcePackStack *v3; // r4@1
  PackReport *result; // r0@1
  int v5; // r1@1
  int v6; // [sp+0h] [bp-88h]@2

  v2 = this;
  v3 = a2;
  result = (PackReport *)*((_DWORD *)this + 78);
  v5 = *((_DWORD *)result + 8);
  if ( v5 )
  {
    PackInstance::PackInstance((int)&v6, v5, -1, 0);
    ResourcePackStack::add((int)v3, (int)&v6, *((_DWORD *)v2 + 78), 0);
    result = PackReport::~PackReport((PackReport *)&v6);
  }
  return result;
}


void __fastcall MinecraftGame::addDownloadingPack(int a1, int *a2, __int64 a3)
{
  MinecraftGame::addDownloadingPack(a1, a2, a3);
}


void __fastcall MinecraftGame::requestScreenshot(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r10@1
  int v4; // r1@1
  int v5; // r6@1
  int i; // r0@1
  int v7; // r1@3
  int v8; // r0@7
  int v9; // r1@8
  int j; // r0@8
  Entity *v11; // r0@13
  int v12; // r8@14
  int v13; // r3@14
  int v14; // r4@14
  int v15; // r6@14
  int v16; // r7@14
  __int16 v17; // r1@14
  void *v18; // r0@14
  void *v19; // r0@15
  unsigned int *v20; // r2@19
  signed int v21; // r1@21
  unsigned int *v22; // r2@23
  signed int v23; // r1@25
  int v24; // [sp+8h] [bp-78h]@14
  int v25; // [sp+Ch] [bp-74h]@14
  int v26; // [sp+10h] [bp-70h]@14
  int v27; // [sp+14h] [bp-6Ch]@14
  int v28; // [sp+18h] [bp-68h]@14
  __int16 v29; // [sp+1Ch] [bp-64h]@14
  int v30; // [sp+20h] [bp-60h]@14
  __int16 v31; // [sp+24h] [bp-5Ch]@14
  char v32; // [sp+26h] [bp-5Ah]@14
  int v33; // [sp+28h] [bp-58h]@14
  void *ptr; // [sp+30h] [bp-50h]@14
  int v35; // [sp+34h] [bp-4Ch]@14
  int v36; // [sp+38h] [bp-48h]@14
  int v37; // [sp+3Ch] [bp-44h]@14
  int v38; // [sp+40h] [bp-40h]@14
  int v39; // [sp+44h] [bp-3Ch]@14
  int v40; // [sp+48h] [bp-38h]@14
  int v41; // [sp+4Ch] [bp-34h]@14
  int v42; // [sp+50h] [bp-30h]@14
  char v43; // [sp+54h] [bp-2Ch]@14

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 220);
  v5 = a1 + 216;
  for ( i = a1 + 216; v4; v4 = *(_DWORD *)(v4 + 8) )
    i = v4;
  v7 = v5;
  if ( i != v5 )
  {
    if ( *(_BYTE *)(i + 16) )
      i = v5;
    v7 = i;
  }
  v8 = ClientInstance::getHoloInput(*(ClientInstance **)(v7 + 20));
  if ( !(*(int (**)(void))(*(_DWORD *)v8 + 76))() )
    v9 = *(_DWORD *)(v2 + 220);
    for ( j = v5; v9; v9 = *(_DWORD *)(v9 + 8) )
      j = v9;
    if ( j != v5 && !*(_BYTE *)(j + 16) )
      v5 = j;
    v11 = (Entity *)ClientInstance::getLocalPlayer(*(ClientInstance **)(v5 + 20));
    if ( v11 )
    {
      v40 = 0;
      v41 = 0;
      v38 = 0;
      v39 = 0;
      v36 = 0;
      v37 = 0;
      ptr = 0;
      v35 = 0;
      v42 = 1;
      v43 = 0;
      v12 = Entity::getLevel(v11);
      v13 = *(_DWORD *)(v3 + 4);
      v14 = *(_DWORD *)(v3 + 8);
      v15 = *(_DWORD *)(v3 + 12);
      v16 = *(_DWORD *)(v3 + 16);
      v24 = *(_DWORD *)v3;
      v25 = v13;
      v26 = v14;
      v27 = v15;
      v28 = v16;
      v29 = *(_WORD *)(v3 + 20);
      sub_DA73B4(&v30, (int *)(v3 + 24));
      v17 = *(_WORD *)(v3 + 28);
      v32 = *(_BYTE *)(v3 + 30);
      v31 = v17;
      sub_DA73B4(&v33, (int *)(v3 + 32));
      Level::takePicture(v12);
      v18 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
      {
        v20 = (unsigned int *)(v33 - 4);
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
          j_j_j_j_j__ZdlPv_9(v18);
      }
      v19 = (void *)(v30 - 12);
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v30 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j_j__ZdlPv_9(v19);
      if ( ptr )
        operator delete(ptr);
    }
}


char *__fastcall MinecraftGame::_initPerUserOptionObservers(__int64 this)
{
  __int64 v1; // r4@1
  int v2; // r6@1
  int v3; // r7@1
  _DWORD *v4; // r0@1
  int v5; // r7@3
  _QWORD *v6; // r0@3
  __int64 v7; // r1@3
  int v8; // r7@5
  _QWORD *v9; // r0@5
  __int64 v10; // r1@5
  int v11; // r7@7
  _QWORD *v12; // r0@7
  __int64 v13; // r1@7
  int v14; // r7@9
  _QWORD *v15; // r0@9
  __int64 v16; // r1@9
  int v17; // r7@11
  _QWORD *v18; // r0@11
  __int64 v19; // r1@11
  int v20; // r6@13
  _QWORD *v21; // r0@13
  __int64 v22; // r1@13
  char *result; // r0@13
  _QWORD *v24; // [sp+4h] [bp-84h]@13
  __int64 v25; // [sp+Ch] [bp-7Ch]@13
  _QWORD *v26; // [sp+14h] [bp-74h]@11
  __int64 v27; // [sp+1Ch] [bp-6Ch]@11
  _QWORD *v28; // [sp+24h] [bp-64h]@9
  __int64 v29; // [sp+2Ch] [bp-5Ch]@9
  _QWORD *v30; // [sp+34h] [bp-54h]@7
  __int64 v31; // [sp+3Ch] [bp-4Ch]@7
  _QWORD *v32; // [sp+44h] [bp-44h]@5
  __int64 v33; // [sp+4Ch] [bp-3Ch]@5
  _QWORD *v34; // [sp+54h] [bp-34h]@3
  __int64 v35; // [sp+5Ch] [bp-2Ch]@3
  _DWORD *v36; // [sp+64h] [bp-24h]@1
  void (*v37)(void); // [sp+6Ch] [bp-1Ch]@1
  int (__fastcall *v38)(int **); // [sp+70h] [bp-18h]@1

  v1 = this;
  v2 = ClientInstance::getOptions((ClientInstance *)HIDWORD(this));
  v3 = Options::get(v2, 0);
  v4 = operator new(8u);
  *v4 = v1;
  v4[1] = v2;
  v36 = v4;
  v37 = (void (*)(void))sub_C220CA;
  v38 = sub_C2208C;
  Option::registerLock(v3, v1, (int)&v36);
  if ( v37 )
    v37();
  v5 = Options::get(v2, 16);
  v6 = operator new(8u);
  LODWORD(v7) = sub_C22224;
  *v6 = v1;
  HIDWORD(v7) = sub_C22104;
  v34 = v6;
  v35 = v7;
  Option::registerObserver(v5, v1, (int)&v34);
  if ( (_DWORD)v35 )
    ((void (*)(void))v35)();
  v8 = Options::get(v2, 17);
  v9 = operator new(8u);
  LODWORD(v10) = sub_C22224;
  *v9 = v1;
  HIDWORD(v10) = sub_C22104;
  v32 = v9;
  v33 = v10;
  Option::registerObserver(v8, v1, (int)&v32);
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  v11 = Options::get(v2, 18);
  v12 = operator new(8u);
  LODWORD(v13) = sub_C22224;
  *v12 = v1;
  HIDWORD(v13) = sub_C22104;
  v30 = v12;
  v31 = v13;
  Option::registerObserver(v11, v1, (int)&v30);
  if ( (_DWORD)v31 )
    ((void (*)(void))v31)();
  v14 = Options::get(v2, 133);
  v15 = operator new(8u);
  LODWORD(v16) = sub_C22224;
  *v15 = v1;
  HIDWORD(v16) = sub_C22104;
  v28 = v15;
  v29 = v16;
  Option::registerObserver(v14, v1, (int)&v28);
  if ( (_DWORD)v29 )
    ((void (*)(void))v29)();
  v17 = Options::get(v2, 132);
  v18 = operator new(8u);
  LODWORD(v19) = sub_C22224;
  *v18 = v1;
  HIDWORD(v19) = sub_C22104;
  v26 = v18;
  v27 = v19;
  Option::registerObserver(v17, v1, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  v20 = Options::get(v2, 44);
  v21 = operator new(8u);
  LODWORD(v22) = sub_C22224;
  *v21 = v1;
  HIDWORD(v22) = sub_C22104;
  v24 = v21;
  v25 = v22;
  result = Option::registerObserver(v20, v1, (int)&v24);
  if ( (_DWORD)v25 )
    result = (char *)((int (*)(void))v25)();
  return result;
}


MinecraftGame *__fastcall MinecraftGame::_removePendingSubclients(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  char *v2; // r10@1
  int v3; // r5@1
  char v4; // r8@1
  char *v5; // r6@2
  int v6; // r1@3
  int v7; // r7@3
  int v8; // r2@4
  int v9; // r8@14
  int v10; // r9@14
  int v11; // r11@14
  unsigned int *v12; // r1@15
  unsigned int v13; // r0@17
  unsigned int *v14; // r7@21
  unsigned int v15; // r0@23
  MinecraftGame *result; // r0@30
  _DWORD *v17; // r0@31
  int (*v18)(void); // r3@31
  MinecraftGame *v19; // r5@31
  _DWORD *v20; // [sp+4h] [bp-34h]@31
  int (*v21)(void); // [sp+Ch] [bp-2Ch]@31
  void (__fastcall *v22)(int, const ClientInstance *); // [sp+10h] [bp-28h]@31

  v1 = this;
  v2 = (char *)this + 424;
  v3 = *((_DWORD *)this + 108);
  v4 = 0;
  if ( (MinecraftGame *)v3 != (MinecraftGame *)((char *)this + 424) )
  {
    v5 = (char *)this + 216;
    v4 = 0;
    do
    {
      v6 = *((_DWORD *)v1 + 55);
      v7 = (int)v1 + 216;
      if ( v6 )
      {
        v8 = (int)v1 + 216;
        do
        {
          v7 = v6;
          while ( *(_BYTE *)(v7 + 16) < (unsigned int)*(_BYTE *)(v3 + 16) )
          {
            v7 = *(_DWORD *)(v7 + 12);
            if ( !v7 )
            {
              v7 = v8;
              goto LABEL_10;
            }
          }
          v6 = *(_DWORD *)(v7 + 8);
          v8 = v7;
        }
        while ( v6 );
      }
LABEL_10:
      if ( (char *)v7 != v5 )
        if ( *(_BYTE *)(v3 + 16) < (unsigned int)*(_BYTE *)(v7 + 16) )
          v7 = (int)v1 + 216;
        if ( (char *)v7 != v5 )
          v9 = ClientInstance::getControllerId(*(ClientInstance **)(v7 + 20));
          MinecraftGame::_deinitOptionObservers(v1, *(ClientInstance **)(v7 + 20));
          GameRenderer::onSubClientRemoved(*((GameRenderer **)v1 + 12), *(const ClientInstance **)(v7 + 20));
          v10 = sub_DA800C(v7, (int)v1 + 216);
          v11 = *(_DWORD *)(v10 + 24);
          if ( v11 )
            v12 = (unsigned int *)(v11 + 4);
            if ( &pthread_create )
              __dmb();
              do
                v13 = __ldrex(v12);
              while ( __strex(v13 - 1, v12) );
            else
              v13 = (*v12)--;
            if ( v13 == 1 )
              v14 = (unsigned int *)(v11 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v15 = __ldrex(v14);
                while ( __strex(v15 - 1, v14) );
              }
              else
                v15 = (*v14)--;
              if ( v15 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
          operator delete((void *)v10);
          --*((_DWORD *)v1 + 58);
          Social::UserManager::removeUser(*((Social::UserManager **)v1 + 86), v9);
          v4 = 1;
      v3 = sub_DA7FEC(v3);
    }
    while ( (char *)v3 != v2 );
  }
  std::_Rb_tree<unsigned char,unsigned char,std::_Identity<unsigned char>,std::less<unsigned char>,std::allocator<unsigned char>>::_M_erase(
    (int)v1 + 420,
    *((_DWORD *)v1 + 107));
  result = 0;
  *((_DWORD *)v1 + 107) = 0;
  *((_DWORD *)v1 + 108) = v2;
  *((_DWORD *)v1 + 109) = v2;
  *((_DWORD *)v1 + 110) = 0;
  if ( v4 & 1 )
    MinecraftGame::adjustClientsUISizeAndScale(v1);
    v17 = operator new(4u);
    *v17 = v1;
    v18 = (int (*)(void))sub_C19DB4;
    v20 = v17;
    v21 = (int (*)(void))sub_C19DB4;
    v22 = sub_C19DA8;
    v19 = (MinecraftGame *)*((_DWORD *)v1 + 56);
    if ( v19 == (MinecraftGame *)((char *)v1 + 216) )
      goto LABEL_41;
      if ( !v18 )
        sub_DA7654();
      v22((int)&v20, *((const ClientInstance **)v19 + 5));
      result = (MinecraftGame *)sub_DA7F5C((int)v19);
      v18 = v21;
      v19 = result;
    while ( result != (MinecraftGame *)((char *)v1 + 216) );
    if ( v21 )
LABEL_41:
      result = (MinecraftGame *)v18();
  return result;
}


int __fastcall MinecraftGame::getResourcePackDownloadingProgress(int a1, int *a2)
{
  int v2; // r7@1
  int *v3; // r8@1
  __int64 v4; // r0@1
  unsigned __int64 v5; // r4@2
  unsigned int v6; // r2@3
  unsigned int v7; // kr00_4@3
  const void **v8; // r0@4
  __int64 v9; // kr10_8@4
  unsigned int v10; // r1@4
  const void **v11; // r0@6
  char *v16; // r0@9
  void *v17; // r0@10
  void *v18; // r0@11
  void *v19; // r0@12
  int result; // r0@14
  unsigned int *v23; // r2@15
  signed int v24; // r1@17
  unsigned int *v25; // r2@19
  signed int v26; // r1@21
  unsigned int *v27; // r2@23
  signed int v28; // r1@25
  unsigned int *v29; // r2@27
  signed int v30; // r1@29
  int v31; // [sp+4h] [bp-34h]@4
  int v32; // [sp+8h] [bp-30h]@4
  unsigned int v33; // [sp+Ch] [bp-2Ch]@4
  char *v34; // [sp+10h] [bp-28h]@9

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 592);
  if ( v4 )
  {
    LODWORD(v4) = *(_DWORD *)(v2 + 636);
    v5 = 0LL;
    if ( (_DWORD)v4 )
    {
      do
      {
        HIDWORD(v4) = *(_DWORD *)v4;
        v6 = *(_QWORD *)(v4 + 16) >> 32;
        v7 = *(_QWORD *)(v4 + 16);
        LODWORD(v4) = HIDWORD(v4);
        v5 += __PAIR__(v6, v7);
      }
      while ( HIDWORD(v4) );
    }
    Util::getFilesizeString((Util *)&v32, SHIDWORD(v4), v5);
    v8 = sub_DA73D4((const void **)&v32, " / ", 3u);
    v33 = (unsigned int)*v8;
    *v8 = &unk_28898CC;
    Util::getFilesizeString((Util *)&v31, (int)&unk_28898CC, *(_QWORD *)(v2 + 592));
    v9 = *(_QWORD *)(v33 - 12);
    v10 = *(_DWORD *)(v31 - 12) + v9;
    if ( v10 > HIDWORD(v9) && v10 <= *(_DWORD *)(v31 - 8) )
      v11 = sub_DA7948((const void **)&v31, 0, v33, (_BYTE *)v9);
    else
      v11 = sub_DA7564((const void **)&v33, (const void **)&v31);
    v34 = (char *)*v11;
    *v11 = &unk_28898CC;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      v3,
      (int *)&v34);
    v16 = v34 - 12;
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v34 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9(v16);
    v17 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v31 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9(v17);
    v18 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v33 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j_j__ZdlPv_9(v18);
    v19 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v32 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j_j__ZdlPv_9(v19);
    _R0 = _aeabi_ul2f(v5, HIDWORD(v5));
    __asm { VMOV            S16, R0 }
    _R0 = _aeabi_ul2f(*(_QWORD *)(v2 + 592), *(_QWORD *)(v2 + 592) >> 32);
    __asm
      VMOV            S0, R0
      VDIV.F32        S0, S16, S0
  }
  else
    __asm { VLDR            S0, =0.0 }
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall MinecraftGame::getHoloscreenHalfWidth(MinecraftGame *this)
{
  int result; // r0@4

  _R0 = *((_DWORD *)this + 13);
  if ( _R0 )
    __asm { VLDRNE          S0, [R0,#8] }
  else
    __asm { VMOVEQ.F32      S0, #1.0 }
  __asm { VMOV            R0, S0 }
  return result;
}


unsigned int __fastcall MinecraftGame::queueSubclientRemoval(MinecraftGame *this, int a2)
{
  MinecraftGame *v2; // r4@1
  char *v3; // r8@1
  int v4; // r0@1
  unsigned int v5; // r6@1
  int v6; // r7@1
  int *v7; // r0@2
  unsigned int v8; // r1@2
  int v9; // r0@5
  unsigned int result; // r0@6
  int v11; // r5@11
  _BYTE *v12; // r0@15

  v2 = this;
  v3 = (char *)this + 424;
  v4 = *((_DWORD *)this + 107);
  v5 = a2;
  v6 = (int)v3;
  if ( v4 )
  {
    do
    {
      v6 = v4;
      v7 = (int *)(v4 + 12);
      v8 = *(_BYTE *)(v6 + 16);
      if ( v8 > v5 )
        v7 = (int *)(v6 + 8);
      v4 = *v7;
    }
    while ( v4 );
    v9 = v6;
    if ( v8 <= v5 )
LABEL_8:
      result = *(_BYTE *)(v9 + 16);
      if ( result >= v5 )
        return result;
      goto LABEL_9;
  }
  result = *((_DWORD *)v2 + 108);
  if ( v6 != result )
    v9 = sub_DA7F9C(v6);
    goto LABEL_8;
LABEL_9:
  if ( v6 )
    if ( v3 == (char *)v6 )
      v11 = 1;
    else
      v11 = 0;
      if ( *(_BYTE *)(v6 + 16) > v5 )
        v11 = 1;
    v12 = operator new(0x14u);
    v12[16] = v5;
    sub_DA7FAC(v11, (int)v12, v6, (int)v3);
    result = *((_DWORD *)v2 + 110) + 1;
    *((_DWORD *)v2 + 110) = result;
  return result;
}


void __fastcall MinecraftGame::_pushAlwaysActiveScreens(MinecraftGame *this)
{
  MinecraftGame::_pushAlwaysActiveScreens(this);
}


int __fastcall MinecraftGame::isIPv6Supported(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1
  Minecraft *v4; // r0@6
  int v5; // r0@6

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  v4 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)v2 + 5));
  v5 = Minecraft::getServerLocator(v4);
  return (*(int (**)(void))(*(_DWORD *)v5 + 40))();
}


unsigned int __fastcall MinecraftGame::AllowedToProcedePastStartMenu(MinecraftGame *this)
{
  unsigned int v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  Social::User *v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@1

  Social::UserManager::getPrimaryUser((Social::UserManager *)&v8, *((_DWORD *)this + 86));
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


int __fastcall MinecraftGame::setAppWillTerminate(int result, bool a2)
{
  *(_BYTE *)(result + 669) = a2;
  return result;
}


void __fastcall MinecraftGame::muteAudio(MinecraftGame *this)
{
  SoundEngine *v1; // r0@1

  v1 = (SoundEngine *)*((_DWORD *)this + 66);
  if ( v1 )
    j_j_j__ZN11SoundEngine4muteEv(v1);
  else
    JUMPOUT(0, MinecraftGame::unMuteAudio);
}


RakNet *__fastcall MinecraftGame::initImpl(MinecraftGame *this)
{
  MinecraftGame *v1; // r11@1
  AppPlatform **v2; // r0@2
  PatchNotesModel *v3; // r0@4
  _DWORD *v4; // r4@4
  ResourceLoadManager *v5; // r0@4
  ResourceLoadManager *v6; // r0@5
  void *v7; // r0@7
  void *v8; // r4@10
  void **v9; // r5@10
  void *v10; // r0@15
  int v11; // r5@17
  void (__fastcall *v12)(HolographicPlatform **, int, int); // r4@17
  void *v13; // r0@18
  int v14; // r0@20
  HolographicPlatform *v15; // r0@20
  void *v16; // r0@22
  void *v17; // r0@25
  int v18; // r5@27
  void (__fastcall *v19)(HolographicPlatform **, int, int); // r4@27
  void *v20; // r0@28
  int v21; // r0@30
  HolographicPlatform *v22; // r1@30
  bool v23; // zf@30
  Scheduler *v24; // r4@34
  unsigned int v25; // r0@34
  char v26; // r5@34
  MinecraftOptionValue *v27; // r6@34
  int v28; // r4@34
  Options *v29; // r7@34
  int v30; // r4@36
  MinecraftEventing *v31; // r5@36
  int v32; // r5@36
  unsigned int *v33; // r1@37
  unsigned int v34; // r0@39
  unsigned int *v35; // r4@43
  unsigned int v36; // r0@45
  __int64 v37; // r0@50
  int v38; // r5@50
  unsigned int *v39; // r1@51
  unsigned int v40; // r0@53
  unsigned int *v41; // r4@57
  unsigned int v42; // r0@59
  int v43; // r5@64
  unsigned int *v44; // r1@65
  unsigned int v45; // r0@67
  unsigned int *v46; // r4@71
  unsigned int v47; // r0@73
  int v48; // r4@78
  _DWORD *v49; // r0@78
  __int64 v50; // r1@78
  int v51; // r4@80
  double v52; // r0@80
  int v53; // r5@80
  unsigned int v54; // r0@80
  int v55; // r6@82
  void *v56; // r4@82
  int v57; // r0@83
  ContentTierManager *v58; // r4@85
  void *v59; // r0@85
  int v60; // r5@87
  _DWORD *v61; // r4@87
  void *v62; // r0@87
  void *v63; // r0@90
  int *v64; // r0@92
  void *v65; // r5@92
  char *v66; // r0@92
  FilePathManager *v67; // r0@93
  FilePathManager *v68; // r0@94
  char *v69; // r0@95
  void *v70; // r0@97
  int v71; // r4@99
  void (__fastcall *v72)(int, _DWORD **); // r5@99
  _DWORD *v73; // r0@99
  __int64 v74; // r1@99
  int v75; // r5@101
  void *v76; // r0@102
  void *v77; // r0@104
  int v78; // r5@105
  void *v79; // r0@106
  void *v80; // r0@108
  int v81; // r5@109
  AppPlatform **v82; // r0@110
  int *v83; // r0@112
  void *v84; // r0@112
  int v85; // r5@113
  AppPlatform **v86; // r0@114
  int *v87; // r0@116
  int v88; // r5@116
  int v89; // r2@116
  unsigned int v90; // r4@116
  const void **v91; // r0@118
  char *v92; // r0@118
  void *v93; // r0@119
  int v94; // r5@120
  unsigned int *v95; // r1@121
  unsigned int v96; // r0@123
  unsigned int *v97; // r4@127
  unsigned int v98; // r0@129
  void *v99; // r5@134
  _DWORD *v100; // r0@134
  __int64 v101; // r1@134
  void *v102; // r5@138
  _DWORD *v103; // r0@138
  __int64 v104; // r1@138
  void *v105; // r5@142
  _DWORD *v106; // r0@142
  __int64 v107; // r1@142
  void *v108; // r5@146
  _DWORD *v109; // r0@146
  __int64 v110; // r1@146
  void *v111; // r5@150
  _DWORD *v112; // r0@150
  __int64 v113; // r1@150
  void *v114; // r5@154
  _DWORD *v115; // r0@154
  __int64 v116; // r1@154
  void *v117; // r5@158
  _DWORD *v118; // r0@158
  __int64 v119; // r1@158
  ScreenshotLoader *v120; // r4@162
  void *v121; // r5@164
  _DWORD *v122; // r0@164
  __int64 v123; // r1@164
  int v124; // r4@168
  void (__fastcall *v125)(int, _DWORD **); // r5@168
  _DWORD *v126; // r0@168
  __int64 v127; // r1@168
  int v128; // r5@170
  unsigned int *v129; // r1@171
  unsigned int v130; // r0@173
  unsigned int *v131; // r4@177
  unsigned int v132; // r0@179
  int v133; // r4@184
  _DWORD *v134; // r0@184
  __int64 v135; // r1@184
  int v136; // r5@186
  unsigned int *v137; // r1@187
  unsigned int v138; // r0@189
  unsigned int *v139; // r4@193
  unsigned int v140; // r0@195
  int v141; // r5@200
  void *v142; // r4@200
  PackSourceFactory *v143; // r0@200
  PackSourceFactory *v144; // r0@201
  int v145; // r5@202
  unsigned int *v146; // r1@203
  unsigned int v147; // r0@205
  unsigned int *v148; // r4@209
  unsigned int v149; // r0@211
  int v150; // r5@216
  int v151; // r8@216
  __int64 v152; // kr08_8@216
  int v153; // r6@216
  _DWORD *v154; // r4@216
  ResourcePackRepository *v155; // r0@216
  ResourcePackRepository *v156; // r0@217
  int v157; // r5@219
  int v158; // r6@219
  unsigned int *v159; // r1@220
  unsigned int v160; // r0@222
  int v161; // r5@224
  unsigned int *v162; // r1@225
  unsigned int v163; // r0@227
  unsigned int *v164; // r4@231
  unsigned int v165; // r0@233
  unsigned int *v166; // r4@237
  unsigned int v167; // r0@239
  Option *v168; // r0@250
  int *v169; // r0@250
  int v170; // r5@250
  unsigned int *v171; // r1@251
  unsigned int v172; // r0@253
  unsigned int *v173; // r4@257
  unsigned int v174; // r0@259
  unsigned int *v175; // r2@262
  signed int v176; // r1@264
  unsigned int *v177; // r2@266
  signed int v178; // r1@268
  unsigned int *v179; // r2@270
  signed int v180; // r1@272
  unsigned int *v181; // r2@274
  signed int v182; // r1@276
  unsigned int *v183; // r2@278
  signed int v184; // r1@280
  unsigned int *v185; // r2@282
  signed int v186; // r1@284
  unsigned int *v187; // r2@286
  signed int v188; // r1@288
  int v189; // r1@293
  int v190; // r0@294
  void *v191; // r0@295
  int v192; // r4@296
  _DWORD *v193; // r0@296
  __int64 v194; // r1@296
  int v195; // r5@298
  unsigned int *v196; // r1@299
  unsigned int v197; // r0@301
  unsigned int *v198; // r4@305
  unsigned int v199; // r0@307
  int v200; // r5@312
  void *v201; // r0@313
  void *v202; // r0@315
  void *v203; // r0@316
  int v204; // r5@317
  unsigned int *v205; // r1@318
  unsigned int v206; // r0@320
  unsigned int *v207; // r4@324
  unsigned int v208; // r0@326
  int v209; // r5@331
  int *v210; // r0@331
  void *v211; // r0@331
  int v212; // r5@332
  unsigned int *v213; // r1@333
  unsigned int v214; // r0@335
  unsigned int *v215; // r4@339
  unsigned int v216; // r0@341
  int v217; // r5@346
  unsigned int *v218; // r1@347
  unsigned int v219; // r0@349
  unsigned int *v220; // r4@353
  unsigned int v221; // r0@355
  int v222; // r5@360
  int v223; // r8@360
  __int64 v224; // kr10_8@360
  int v225; // r6@360
  _DWORD *v226; // r4@360
  ResourcePackRepository *v227; // r0@360
  ResourcePackRepository *v228; // r0@361
  int v229; // r6@362
  void *v230; // r5@362
  _DWORD *v231; // r0@362
  __int64 v232; // r1@362
  int v233; // r0@366
  ResourceLoadManager *v234; // r5@366
  mce::TextureGroup *v235; // r4@366
  mce::TextureGroup *v236; // r0@366
  mce::TextureGroup *v237; // r0@367
  ResourceLoadManager *v238; // r4@368
  mce::TextureGroup *v239; // r5@368
  mce::TextureGroup *v240; // r0@368
  mce::TextureGroup *v241; // r0@369
  AppPlatform **v242; // r0@371
  int v243; // r0@373
  unsigned int v244; // r1@373
  int v245; // r5@375
  double v246; // r0@375
  int v247; // r4@375
  UIRepository *v248; // r0@375
  UIRepository *v249; // r0@376
  int v250; // r5@377
  int v251; // r6@377
  void *v252; // r4@377
  int v253; // r0@377
  int v254; // r4@379
  int v255; // r6@379
  void *v256; // r5@379
  int v257; // r0@379
  int v258; // r8@381
  unsigned int v259; // r6@381
  int v260; // r9@381
  unsigned int v261; // r7@381
  void *v262; // r4@381
  int v263; // r0@381
  __int64 v264; // r0@383
  int v265; // r4@383
  int v266; // r10@383
  _DWORD *v267; // r4@384
  unsigned int *v268; // r2@386
  signed int v269; // r1@388
  _DWORD *v270; // r7@394
  UIDefNamespace *v271; // r0@394
  int v272; // r1@394
  void *v273; // r0@394
  void *v274; // r0@396
  void *v275; // r0@401
  int *v276; // r0@403
  int v277; // r5@403
  unsigned int *v278; // r1@404
  unsigned int v279; // r0@406
  unsigned int *v280; // r4@410
  unsigned int v281; // r0@412
  int v282; // r5@417
  unsigned int *v283; // r1@418
  unsigned int v284; // r0@420
  unsigned int *v285; // r4@424
  unsigned int v286; // r0@426
  int v287; // r5@431
  unsigned int *v288; // r1@432
  unsigned int v289; // r0@434
  unsigned int *v290; // r4@438
  unsigned int v291; // r0@440
  int v292; // r5@445
  unsigned int *v293; // r1@446
  unsigned int v294; // r0@448
  unsigned int *v295; // r4@452
  unsigned int v296; // r0@454
  int v297; // r5@459
  unsigned int *v298; // r1@460
  unsigned int v299; // r0@462
  unsigned int *v300; // r4@466
  unsigned int v301; // r0@468
  int v302; // r5@473
  unsigned int *v303; // r1@474
  unsigned int v304; // r0@476
  unsigned int *v305; // r4@480
  unsigned int v306; // r0@482
  int v307; // r2@487
  _DWORD *v308; // r0@488
  int v309; // r2@490
  _DWORD *v310; // r0@491
  AppPlatform *v311; // r0@493
  int v312; // r5@493
  void *v313; // r4@493
  int v314; // r1@493
  void *v315; // r4@495
  int v316; // r2@495
  int v317; // r0@495
  void *v318; // r4@497
  int v319; // r2@497
  int v320; // r0@497
  int v321; // r4@499
  int v322; // r5@499
  int v323; // r6@499
  int v324; // r1@500
  int *v325; // r1@501
  unsigned int v326; // r0@501
  bool v327; // cf@504
  int v328; // r0@504
  int v329; // r4@511
  _BYTE *v330; // r0@515
  int v331; // r6@516
  int v332; // r1@517
  int *v333; // r1@518
  unsigned int v334; // r0@518
  int v335; // r0@521
  int v336; // r4@528
  _BYTE *v337; // r0@532
  int v338; // r6@533
  int *v339; // r1@534
  unsigned int v340; // r0@534
  int v341; // r0@537
  int v342; // r4@544
  _BYTE *v343; // r0@548
  void *v344; // r5@549
  int *v345; // r6@549
  int *v346; // r7@549
  void **v347; // r4@549
  RealmsAPI *v348; // r0@549
  RealmsAPI *v349; // r0@550
  int v350; // r5@551
  unsigned int *v351; // r1@552
  unsigned int v352; // r0@554
  unsigned int *v353; // r4@558
  unsigned int v354; // r0@560
  int v355; // r5@565
  unsigned int *v356; // r1@566
  unsigned int v357; // r0@568
  unsigned int *v358; // r4@572
  unsigned int v359; // r0@574
  int v360; // r5@579
  unsigned int *v361; // r1@580
  unsigned int v362; // r0@582
  unsigned int *v363; // r4@586
  unsigned int v364; // r0@588
  void *v365; // r5@593
  int v366; // r4@595
  void (__cdecl *v367)(int, int, signed int); // r3@596
  void *v368; // r5@599
  int v369; // r4@601
  void (__cdecl *v370)(int, int, signed int); // r3@602
  int v371; // r1@605
  int v372; // r0@605
  int v373; // r5@607
  unsigned int *v374; // r1@608
  unsigned int v375; // r0@610
  unsigned int *v376; // r4@614
  unsigned int v377; // r0@616
  SoundPlayer *v378; // r5@621
  MusicManager *v379; // r4@621
  void *v380; // r0@621
  unsigned int *v381; // r0@624
  unsigned int v382; // r1@626
  __int64 v383; // kr18_8@629
  __int64 v384; // r8@629
  NetworkHandler *v385; // r10@629
  minecraft::api::Api *v386; // r7@629
  Social::UserManager *v387; // r5@629
  ClientInstance *v388; // r4@629
  int v389; // r0@629
  int v390; // r5@629
  unsigned int *v391; // r1@630
  unsigned int v392; // r0@632
  unsigned int *v393; // r4@636
  unsigned int v394; // r0@638
  void *v395; // r4@643
  int v396; // r0@643
  int v397; // r1@645
  int v398; // r10@645
  int i; // r0@645
  int v400; // r1@647
  int v401; // r0@651
  HolographicPlatform *v402; // r2@651
  int v403; // r0@653
  int j; // r1@653
  int v405; // r1@655
  int v406; // r6@659
  int v407; // r5@659
  void (__fastcall *v408)(int, int, int *, int *); // r4@659
  void *v409; // r0@659
  __int64 v410; // r1@659
  void *v411; // r0@659
  __int64 v412; // r1@659
  int v413; // r4@663
  int v414; // r5@663
  unsigned int *v415; // r1@664
  unsigned int v416; // r0@666
  unsigned int *v417; // r4@670
  unsigned int v418; // r0@672
  int v419; // r5@677
  int *v420; // r5@677
  int v421; // r1@677
  int v422; // r0@677
  int k; // r6@677
  int v424; // r1@679
  int v425; // r7@683
  int v426; // r8@683
  int v427; // r9@683
  void *v428; // r4@683
  int v429; // r0@683
  int v430; // r5@685
  unsigned int *v431; // r1@686
  unsigned int v432; // r0@688
  unsigned int *v433; // r4@692
  unsigned int v434; // r0@694
  int v435; // r5@699
  unsigned int *v436; // r1@700
  unsigned int v437; // r0@702
  unsigned int *v438; // r4@706
  unsigned int v439; // r0@708
  int v440; // r4@713
  _DWORD *v441; // r0@713
  __int64 v442; // r1@713
  int v443; // r1@715
  int l; // r0@715
  int v445; // r1@717
  Minecraft *v446; // r0@721
  NetworkHandler *v447; // r4@721
  char v448; // r0@721
  int v449; // r5@721
  unsigned int *v450; // r1@722
  unsigned int v451; // r0@724
  unsigned int *v452; // r4@728
  unsigned int v453; // r0@730
  void *v454; // r0@736
  int v455; // r4@738
  void (__fastcall *v456)(int, int); // r5@738
  int v457; // r0@738
  int v458; // r5@738
  unsigned int *v459; // r1@739
  unsigned int v460; // r0@741
  unsigned int *v461; // r4@745
  unsigned int v462; // r0@747
  Social::UserManager *v463; // r4@752
  Social::MultiplayerServiceManager *v464; // r6@752
  Social::MultiplayerServiceManager *v465; // r0@752
  Social::MultiplayerServiceManager *v466; // r0@753
  void *v467; // r0@755
  char *v468; // r4@757
  char *v469; // r5@757
  __int64 v470; // kr28_8@764
  int v471; // r5@764
  _DWORD *v472; // r0@764
  __int64 v473; // r1@764
  int v474; // r0@764
  int m; // r1@764
  int v476; // r1@766
  Minecraft *v477; // r0@770
  NetworkHandler *v478; // r0@770
  int v479; // r3@772
  int v480; // r3@772
  int v481; // r5@772
  unsigned int *v482; // r1@773
  unsigned int v483; // r0@775
  unsigned int *v484; // r4@779
  unsigned int v485; // r0@781
  int v486; // r0@786
  int n; // r1@786
  int v488; // r1@788
  Minecraft *v489; // r0@792
  int v490; // r7@792
  int v491; // r0@792
  int v492; // r1@794
  int ii; // r0@794
  int v494; // r1@796
  int v495; // r4@800
  MinecraftInputHandler *v496; // r5@800
  int v497; // r0@800
  int v498; // r5@802
  int v499; // r1@802
  int jj; // r0@802
  int v501; // r1@804
  void *v502; // r0@808
  int v503; // r5@808
  unsigned int *v504; // r1@809
  unsigned int v505; // r0@811
  unsigned int *v506; // r4@815
  unsigned int v507; // r0@817
  void (__fastcall *v508)(int, int *); // r4@822
  int v509; // r5@822
  unsigned int *v510; // r1@823
  unsigned int v511; // r0@825
  unsigned int *v512; // r4@829
  unsigned int v513; // r0@831
  mce::RenderMaterial *v514; // r0@836
  ScreenRenderer *v515; // r0@836
  ScreenRenderer *v516; // r0@836
  int v517; // r1@836
  int kk; // r0@836
  int v519; // r1@838
  int v520; // r1@842
  int v521; // r0@842
  int ll; // r5@842
  int v523; // r1@844
  int v524; // r0@848
  int v525; // r5@848
  unsigned int *v526; // r1@849
  unsigned int v527; // r0@851
  unsigned int *v528; // r4@855
  unsigned int v529; // r0@857
  int v530; // r1@862
  int mm; // r0@862
  ClientInstance *v532; // r4@867
  _BYTE *v533; // r5@867
  int v534; // r0@867
  void *v535; // r0@870
  int v536; // r5@872
  unsigned int *v537; // r1@873
  unsigned int v538; // r0@875
  unsigned int *v539; // r4@879
  unsigned int v540; // r0@881
  int v541; // r4@886
  void *v542; // r0@886
  __int64 v543; // r1@886
  int v544; // r4@888
  unsigned int *v545; // r1@889
  unsigned int v546; // r0@891
  unsigned int *v547; // r5@895
  unsigned int v548; // r0@897
  LevelSummary *v549; // r0@902
  LevelSummary *v550; // r4@902
  int v551; // r4@907
  unsigned int *v552; // r1@908
  unsigned int v553; // r0@910
  unsigned int *v554; // r5@914
  unsigned int v555; // r0@916
  int v556; // r4@921
  unsigned int *v557; // r1@922
  unsigned int v558; // r0@924
  unsigned int *v559; // r5@928
  unsigned int v560; // r0@930
  void *v561; // r0@935
  Options *v562; // r0@937
  RakNet *result; // r0@940
  unsigned int *v564; // r2@942
  signed int v565; // r1@944
  unsigned int *v566; // r2@946
  signed int v567; // r1@948
  unsigned int *v568; // r2@950
  signed int v569; // r1@952
  unsigned int *v570; // r2@954
  signed int v571; // r1@956
  unsigned int *v572; // r2@1001
  signed int v573; // r1@1003
  char v574; // [sp+0h] [bp-390h]@772
  int v575; // [sp+0h] [bp-390h]@786
  int v576; // [sp+4h] [bp-38Ch]@772
  int v577; // [sp+4h] [bp-38Ch]@786
  int v578; // [sp+8h] [bp-388h]@772
  int v579; // [sp+8h] [bp-388h]@786
  int v580; // [sp+Ch] [bp-384h]@683
  int v581; // [sp+Ch] [bp-384h]@786
  char v582; // [sp+10h] [bp-380h]@629
  int v583; // [sp+10h] [bp-380h]@786
  int v584; // [sp+14h] [bp-37Ch]@0
  int v585; // [sp+14h] [bp-37Ch]@786
  DebugLog *v586; // [sp+18h] [bp-378h]@659
  int v587; // [sp+18h] [bp-378h]@786
  int *v588; // [sp+1Ch] [bp-374h]@677
  int v589; // [sp+1Ch] [bp-374h]@786
  int v590; // [sp+20h] [bp-370h]@677
  int v591; // [sp+20h] [bp-370h]@786
  int v592; // [sp+24h] [bp-36Ch]@786
  int v593; // [sp+28h] [bp-368h]@786
  int v594; // [sp+2Ch] [bp-364h]@786
  void (*v595)(void); // [sp+30h] [bp-360h]@786
  int v596; // [sp+34h] [bp-35Ch]@786
  int v597; // [sp+38h] [bp-358h]@786
  int v598; // [sp+3Ch] [bp-354h]@786
  Options *v599; // [sp+40h] [bp-350h]@786
  int v600; // [sp+44h] [bp-34Ch]@786
  int v601; // [sp+48h] [bp-348h]@786
  int v602; // [sp+4Ch] [bp-344h]@786
  int v603; // [sp+50h] [bp-340h]@786
  int v604; // [sp+54h] [bp-33Ch]@786
  int v605; // [sp+58h] [bp-338h]@786
  int v606; // [sp+5Ch] [bp-334h]@786
  void *ptr; // [sp+60h] [bp-330h]@786
  LevelSummary *v608; // [sp+64h] [bp-32Ch]@786
  int v609; // [sp+68h] [bp-328h]@786
  int v610; // [sp+6Ch] [bp-324h]@772
  int v611; // [sp+70h] [bp-320h]@772
  Options *v612; // [sp+74h] [bp-31Ch]@772
  int v613; // [sp+78h] [bp-318h]@772
  int v614; // [sp+7Ch] [bp-314h]@786
  char v615; // [sp+7Fh] [bp-311h]@772
  int v616; // [sp+80h] [bp-310h]@764
  int v617; // [sp+84h] [bp-30Ch]@786
  __int64 v618; // [sp+88h] [bp-308h]@764
  char *v619; // [sp+90h] [bp-300h]@757
  int v620; // [sp+94h] [bp-2FCh]@757
  int v621; // [sp+98h] [bp-2F8h]@786
  Options *v622; // [sp+9Ch] [bp-2F4h]@738
  int v623; // [sp+A0h] [bp-2F0h]@738
  Options *v624; // [sp+A4h] [bp-2ECh]@721
  int v625; // [sp+A8h] [bp-2E8h]@721
  int v626; // [sp+ACh] [bp-2E4h]@713
  int v627; // [sp+B0h] [bp-2E0h]@786
  __int64 v628; // [sp+B4h] [bp-2DCh]@713
  Options *v629; // [sp+BCh] [bp-2D4h]@677
  int v630; // [sp+C0h] [bp-2D0h]@685
  Options *v631; // [sp+C4h] [bp-2CCh]@677
  int v632; // [sp+C8h] [bp-2C8h]@699
  int v633; // [sp+CCh] [bp-2C4h]@663
  int v634; // [sp+D0h] [bp-2C0h]@663
  int v635; // [sp+D4h] [bp-2BCh]@659
  int v636; // [sp+D8h] [bp-2B8h]@786
  __int64 v637; // [sp+DCh] [bp-2B4h]@659
  int v638; // [sp+E4h] [bp-2ACh]@659
  int v639; // [sp+E8h] [bp-2A8h]@786
  __int64 v640; // [sp+ECh] [bp-2A4h]@659
  int v641; // [sp+F4h] [bp-29Ch]@651
  Social::User *v642; // [sp+F8h] [bp-298h]@629
  int v643; // [sp+FCh] [bp-294h]@629
  char v644; // [sp+100h] [bp-290h]@629
  int v645; // [sp+108h] [bp-288h]@623
  int v646; // [sp+10Ch] [bp-284h]@623
  int v647; // [sp+110h] [bp-280h]@623
  int v648; // [sp+114h] [bp-27Ch]@623
  int v649; // [sp+118h] [bp-278h]@623
  int v650; // [sp+11Ch] [bp-274h]@623
  char v651; // [sp+120h] [bp-270h]@605
  int v652; // [sp+124h] [bp-26Ch]@607
  int v653; // [sp+128h] [bp-268h]@605
  Options *v654; // [sp+12Ch] [bp-264h]@549
  int v655; // [sp+130h] [bp-260h]@551
  Options *v656; // [sp+134h] [bp-25Ch]@549
  int v657; // [sp+138h] [bp-258h]@565
  Social::User *v658; // [sp+13Ch] [bp-254h]@549
  int v659; // [sp+140h] [bp-250h]@579
  Options *v660; // [sp+144h] [bp-24Ch]@403
  int v661; // [sp+148h] [bp-248h]@403
  Options *v662; // [sp+14Ch] [bp-244h]@403
  int v663; // [sp+150h] [bp-240h]@417
  Options *v664; // [sp+154h] [bp-23Ch]@403
  int v665; // [sp+158h] [bp-238h]@431
  Options *v666; // [sp+15Ch] [bp-234h]@403
  int v667; // [sp+160h] [bp-230h]@445
  Options *v668; // [sp+164h] [bp-22Ch]@403
  int v669; // [sp+168h] [bp-228h]@459
  Options *v670; // [sp+16Ch] [bp-224h]@403
  int v671; // [sp+170h] [bp-220h]@473
  int v672; // [sp+174h] [bp-21Ch]@403
  int v673; // [sp+178h] [bp-218h]@383
  char v674[4]; // [sp+17Ch] [bp-214h]@364
  Options *v675; // [sp+180h] [bp-210h]@331
  int v676; // [sp+184h] [bp-20Ch]@332
  int v677; // [sp+188h] [bp-208h]@331
  int v678; // [sp+18Ch] [bp-204h]@331
  int v679; // [sp+190h] [bp-200h]@346
  int v680; // [sp+194h] [bp-1FCh]@315
  int v681; // [sp+198h] [bp-1F8h]@315
  int v682; // [sp+19Ch] [bp-1F4h]@312
  int v683; // [sp+1A0h] [bp-1F0h]@317
  int v684; // [sp+1A4h] [bp-1ECh]@296
  __int64 v685; // [sp+1ACh] [bp-1E4h]@296
  Social::User *v686; // [sp+1B4h] [bp-1DCh]@296
  int v687; // [sp+1B8h] [bp-1D8h]@298
  int v688; // [sp+1BCh] [bp-1D4h]@250
  int v689; // [sp+1C0h] [bp-1D0h]@250
  int v690; // [sp+1C4h] [bp-1CCh]@250
  Options *v691; // [sp+1C8h] [bp-1C8h]@218
  int v692; // [sp+1CCh] [bp-1C4h]@219
  int v693; // [sp+1D0h] [bp-1C0h]@200
  int v694; // [sp+1D4h] [bp-1BCh]@202
  int v695; // [sp+1D8h] [bp-1B8h]@184
  __int64 v696; // [sp+1E0h] [bp-1B0h]@184
  Social::User *v697; // [sp+1E8h] [bp-1A8h]@184
  int v698; // [sp+1ECh] [bp-1A4h]@186
  _DWORD *v699; // [sp+1F0h] [bp-1A0h]@168
  __int64 v700; // [sp+1F8h] [bp-198h]@168
  int v701; // [sp+200h] [bp-190h]@168
  int v702; // [sp+204h] [bp-18Ch]@170
  void *v703; // [sp+208h] [bp-188h]@166
  ScreenshotLoader *v704; // [sp+20Ch] [bp-184h]@162
  void *v705; // [sp+210h] [bp-180h]@160
  void *v706; // [sp+214h] [bp-17Ch]@156
  void *v707; // [sp+218h] [bp-178h]@152
  void *v708; // [sp+21Ch] [bp-174h]@148
  void *v709; // [sp+220h] [bp-170h]@144
  void *v710; // [sp+224h] [bp-16Ch]@140
  void *v711; // [sp+228h] [bp-168h]@136
  const char *v712; // [sp+22Ch] [bp-164h]@116
  int v713; // [sp+230h] [bp-160h]@116
  int v714; // [sp+234h] [bp-15Ch]@116
  int v715; // [sp+238h] [bp-158h]@120
  int v716; // [sp+23Ch] [bp-154h]@118
  char *v717; // [sp+240h] [bp-150h]@118
  int v718; // [sp+244h] [bp-14Ch]@112
  int v719; // [sp+248h] [bp-148h]@108
  int v720; // [sp+24Ch] [bp-144h]@104
  _DWORD *v721; // [sp+250h] [bp-140h]@99
  __int64 v722; // [sp+258h] [bp-138h]@99
  char *v723; // [sp+260h] [bp-130h]@92
  _DWORD *v724; // [sp+264h] [bp-12Ch]@78
  __int64 v725; // [sp+26Ch] [bp-124h]@78
  char v726; // [sp+274h] [bp-11Ch]@50
  int v727; // [sp+278h] [bp-118h]@50
  char v728; // [sp+27Ch] [bp-114h]@36
  int v729; // [sp+280h] [bp-110h]@36
  Options *v730; // [sp+284h] [bp-10Ch]@34
  HolographicPlatform *v731; // [sp+288h] [bp-108h]@30
  HolographicPlatform *v732; // [sp+28Ch] [bp-104h]@20
  MinecraftOptionValue *v733; // [sp+290h] [bp-100h]@34
  char v734; // [sp+294h] [bp-FCh]@50
  char *v735; // [sp+298h] [bp-F8h]@92
  _DWORD *v736; // [sp+2A0h] [bp-F0h]@134
  void (*v737)(void); // [sp+2A8h] [bp-E8h]@134
  _DWORD *v738; // [sp+2B0h] [bp-E0h]@138
  void (*v739)(void); // [sp+2B8h] [bp-D8h]@138
  _DWORD *v740; // [sp+2C0h] [bp-D0h]@142
  void (*v741)(void); // [sp+2C8h] [bp-C8h]@142
  _DWORD *v742; // [sp+2D0h] [bp-C0h]@146
  void (*v743)(void); // [sp+2D8h] [bp-B8h]@146
  _DWORD *v744; // [sp+2E0h] [bp-B0h]@150
  void (*v745)(void); // [sp+2E8h] [bp-A8h]@150
  _DWORD *v746; // [sp+2F0h] [bp-A0h]@154
  void (*v747)(void); // [sp+2F8h] [bp-98h]@154
  _DWORD *v748; // [sp+300h] [bp-90h]@158
  void (*v749)(void); // [sp+308h] [bp-88h]@158
  _DWORD *v750; // [sp+310h] [bp-80h]@164
  void (*v751)(void); // [sp+318h] [bp-78h]@164
  _DWORD *v752; // [sp+320h] [bp-70h]@362
  void (*v753)(void); // [sp+328h] [bp-68h]@362
  int (*v754)(void); // [sp+330h] [bp-60h]@593
  void (__cdecl *v755)(int (**)(void), int (**)(void), signed int); // [sp+338h] [bp-58h]@593
  int (__fastcall *v756)(int (**)(void)); // [sp+33Ch] [bp-54h]@593
  int (*v757)(void); // [sp+340h] [bp-50h]@599
  void (__cdecl *v758)(int (**)(void), int (**)(void), signed int); // [sp+348h] [bp-48h]@599
  int (__fastcall *v759)(int (**)(void)); // [sp+34Ch] [bp-44h]@599
  char v760; // [sp+350h] [bp-40h]@623
  char v761; // [sp+358h] [bp-38h]@605
  RakNet *v762; // [sp+368h] [bp-28h]@1

  v1 = this;
  v762 = _stack_chk_guard;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v3 = (PatchNotesModel *)AppPlatform::calculateIfLowMemoryDevice(*v2);
  PatchNotesModel::preloadPatchNotes(v3);
  v4 = operator new(0x24u);
  _aeabi_memclr4(v4, 36);
  v4[6] = v4 + 4;
  v4[7] = v4 + 4;
  v5 = (ResourceLoadManager *)*((_DWORD *)v1 + 165);
  *((_DWORD *)v1 + 165) = v4;
  if ( v5 )
  {
    v6 = ResourceLoadManager::~ResourceLoadManager(v5);
    operator delete((void *)v6);
  }
    v7 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v7 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v7 + 448))() == 1 )
    v8 = operator new(0x10u);
    OculusPlatformMessagePump::OculusPlatformMessagePump((int)v8);
    v9 = (void **)*((_DWORD *)v1 + 72);
    *((_DWORD *)v1 + 72) = v8;
    if ( v9 )
    {
      if ( *v9 )
        operator delete(*v9);
      operator delete(v9);
    }
    v10 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v10 = &ServiceLocator<AppPlatform>::mDefaultService;
  v11 = *(_DWORD *)v10;
  v12 = *(void (__fastcall **)(HolographicPlatform **, int, int))(**(_DWORD **)v10 + 240);
    v13 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v13 = &ServiceLocator<AppPlatform>::mDefaultService;
  v14 = (*(int (**)(void))(**(_DWORD **)v13 + 448))();
  v12(&v732, v11, v14);
  v15 = v732;
  if ( !v732 )
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v16 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v16 = &ServiceLocator<AppPlatform>::mDefaultService;
    (*(void (**)(void))(**(_DWORD **)v16 + 444))();
    MinecraftEventing::updateEditionType(*((MinecraftEventing **)v1 + 126));
      v17 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v17 = &ServiceLocator<AppPlatform>::mDefaultService;
    v18 = *(_DWORD *)v17;
    v19 = *(void (__fastcall **)(HolographicPlatform **, int, int))(**(_DWORD **)v17 + 240);
      v20 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v20 = &ServiceLocator<AppPlatform>::mDefaultService;
    v21 = (*(int (**)(void))(**(_DWORD **)v20 + 448))();
    v19(&v731, v18, v21);
    v15 = v732;
    v22 = v731;
    v731 = 0;
    v23 = v732 == 0;
    v732 = v22;
    if ( !v23 )
      (*(void (**)(void))(*(_DWORD *)v15 + 4))();
      v15 = v731;
      if ( v731 )
        v15 = (HolographicPlatform *)(*(int (**)(void))(*(_DWORD *)v731 + 4))();
  v24 = (Scheduler *)Scheduler::singleton(v15);
  v25 = (*(int (**)(void))(*(_DWORD *)v732 + 48))();
  Scheduler::setTargetFPS(v24, v25);
  MinecraftGame::setupRenderer(v1, v732);
  v26 = (*(int (**)(void))(*(_DWORD *)v732 + 76))();
  v27 = (MinecraftOptionValue *)operator new(0xCu);
  MinecraftOptionValue::MinecraftOptionValue(v27, v1, 0);
  v28 = (*(int (__fastcall **)(MinecraftGame *))(*(_DWORD *)v1 + 136))(v1);
  v29 = (Options *)operator new(0x78u);
  v733 = v27;
  Options::Options((int)v29, v26, (int *)&v733, v28, 1, 0);
  v730 = v29;
  if ( v733 )
    (*(void (**)(void))(*(_DWORD *)v733 + 4))();
  v30 = *((_DWORD *)v1 + 86);
  v31 = (MinecraftEventing *)*((_DWORD *)v1 + 126);
  std::__shared_ptr<Options,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<Options,std::default_delete<Options>>(
    (int)&v728,
    (int *)&v730);
  Social::UserManager::createPrimaryUser(v30, v31, (int)&v728);
  v32 = v729;
  if ( v729 )
    v33 = (unsigned int *)(v729 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 == 1 )
      v35 = (unsigned int *)(v32 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
      if ( &pthread_create )
      {
        __dmb();
        do
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
      }
      else
        v36 = (*v35)--;
      if ( v36 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
  std::__shared_ptr<EntitlementManager,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<EntitlementManager>,MinecraftEventing &,Social::UserManager &>(
    (int)&v726,
    (int)&v734,
    *((MinecraftEventing **)v1 + 126),
    *((Social::UserManager **)v1 + 86));
  v37 = *(_QWORD *)&v726;
  *(_DWORD *)&v726 = 0;
  v727 = 0;
  *((_DWORD *)v1 + 91) = v37;
  v38 = *((_DWORD *)v1 + 92);
  *((_DWORD *)v1 + 92) = HIDWORD(v37);
  if ( v38 )
    v39 = (unsigned int *)(v38 + 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 == 1 )
      v41 = (unsigned int *)(v38 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 8))(v38);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 12))(v38);
  v43 = v727;
  if ( v727 )
    v44 = (unsigned int *)(v727 + 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 == 1 )
      v46 = (unsigned int *)(v43 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 8))(v43);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 12))(v43);
  v48 = *((_DWORD *)v1 + 86);
  v49 = operator new(4u);
  LODWORD(v50) = sub_C151D8;
  *v49 = v1;
  HIDWORD(v50) = sub_C151C0;
  v724 = v49;
  v725 = v50;
  Social::UserManager::registerSignInHandler(v48, (int)&v724);
  if ( (_DWORD)v725 )
    ((void (*)(void))v725)();
  v51 = *((_DWORD *)v1 + 91);
  LODWORD(v52) = operator new(0x24u);
  v53 = LODWORD(v52);
  *(_DWORD *)LODWORD(v52) = &off_26D6854;
  *(_DWORD *)(LODWORD(v52) + 4) = v51;
  *(_DWORD *)(LODWORD(v52) + 16) = 0;
  *(_DWORD *)(LODWORD(v52) + 20) = 0;
  *(_DWORD *)(LODWORD(v52) + 24) = 1065353216;
  LODWORD(v52) += 24;
  *(_DWORD *)(LODWORD(v52) + 4) = 0;
  v54 = sub_DA7744(v52);
  *(_DWORD *)(v53 + 12) = v54;
  if ( v54 == 1 )
    *(_DWORD *)(v53 + 32) = 0;
    v56 = (void *)(v53 + 32);
    if ( v54 >= 0x40000000 )
      sub_DA7414();
    v55 = 4 * v54;
    v56 = operator new(4 * v54);
    _aeabi_memclr4(v56, v55);
  *(_DWORD *)(v53 + 8) = v56;
  v57 = *((_DWORD *)v1 + 130);
  *((_DWORD *)v1 + 130) = v53;
  if ( v57 )
    (*(void (**)(void))(*(_DWORD *)v57 + 4))();
  v58 = (ContentTierManager *)operator new(4u);
  ContentTierManager::ContentTierManager(v58);
  v59 = (void *)*((_DWORD *)v1 + 168);
  *((_DWORD *)v1 + 168) = v58;
  if ( v59 )
    operator delete(v59);
  v60 = *((_DWORD *)v1 + 126);
  v61 = operator new(4u);
  PackManifestFactory::PackManifestFactory(v61, v60);
  v62 = (void *)*((_DWORD *)v1 + 131);
  *((_DWORD *)v1 + 131) = v61;
  if ( v62 )
    operator delete(v62);
    v63 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v63 = &ServiceLocator<AppPlatform>::mDefaultService;
  v64 = (int *)(*(int (**)(void))(**(_DWORD **)v63 + 264))();
  sub_DA73B4((int *)&v723, v64);
  sub_DA73D4((const void **)&v723, "/", 1u);
  v65 = operator new(0x20u);
  v735 = v723;
  v723 = (char *)&unk_28898CC;
  FilePathManager::FilePathManager((int)v65, (int *)&v735, 0);
  v66 = v735 - 12;
  if ( (int *)(v735 - 12) != &dword_28898C0 )
    v175 = (unsigned int *)(v735 - 4);
        v176 = __ldrex(v175);
      while ( __strex(v176 - 1, v175) );
      v176 = (*v175)--;
    if ( v176 <= 0 )
      j_j_j_j_j__ZdlPv_9(v66);
  v67 = (FilePathManager *)*((_DWORD *)v1 + 65);
  *((_DWORD *)v1 + 65) = v65;
  if ( v67 )
    v68 = FilePathManager::~FilePathManager(v67);
    operator delete((void *)v68);
  v69 = v723 - 12;
  if ( (int *)(v723 - 12) != &dword_28898C0 )
    v177 = (unsigned int *)(v723 - 4);
        v178 = __ldrex(v177);
      while ( __strex(v178 - 1, v177) );
      v178 = (*v177)--;
    if ( v178 <= 0 )
      j_j_j_j_j__ZdlPv_9(v69);
    v70 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v70 = &ServiceLocator<AppPlatform>::mDefaultService;
  v71 = *(_DWORD *)v70;
  v72 = *(void (__fastcall **)(int, _DWORD **))(**(_DWORD **)v70 + 228);
  v73 = operator new(4u);
  LODWORD(v74) = sub_C15B1C;
  *v73 = v1;
  HIDWORD(v74) = sub_C15828;
  v721 = v73;
  v722 = v74;
  v72(v71, &v721);
  if ( (_DWORD)v722 )
    ((void (*)(void))v722)();
  v75 = *((_DWORD *)v1 + 65);
    v76 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v76 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v76 + 28))(&v720);
  FilePathManager::setPackagePath(v75, &v720);
  v77 = (void *)(v720 - 12);
  if ( (int *)(v720 - 12) != &dword_28898C0 )
    v179 = (unsigned int *)(v720 - 4);
        v180 = __ldrex(v179);
      while ( __strex(v180 - 1, v179) );
      v180 = (*v179)--;
    if ( v180 <= 0 )
      j_j_j_j_j__ZdlPv_9(v77);
  v78 = *((_DWORD *)v1 + 65);
    v79 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v79 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v79 + 20))(&v719);
  FilePathManager::setDataUrl(v78, &v719);
  v80 = (void *)(v719 - 12);
  if ( (int *)(v719 - 12) != &dword_28898C0 )
    v181 = (unsigned int *)(v719 - 4);
        v182 = __ldrex(v181);
      while ( __strex(v182 - 1, v181) );
      v182 = (*v181)--;
    if ( v182 <= 0 )
      j_j_j_j_j__ZdlPv_9(v80);
  v81 = *((_DWORD *)v1 + 65);
    v82 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v82 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v83 = AppPlatform::getTempPath(*v82);
  sub_DA73B4(&v718, v83);
  sub_DA73D4((const void **)&v718, "/", 1u);
  FilePathManager::setTemporaryFilePath(v81, &v718);
  v84 = (void *)(v718 - 12);
  if ( (int *)(v718 - 12) != &dword_28898C0 )
    v183 = (unsigned int *)(v718 - 4);
        v184 = __ldrex(v183);
      while ( __strex(v184 - 1, v183) );
      v184 = (*v183)--;
    if ( v184 <= 0 )
      j_j_j_j_j__ZdlPv_9(v84);
  v85 = *((_DWORD *)v1 + 65);
    v86 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v86 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v87 = AppPlatform::getTempPath(*v86);
  FilePathManager::setCacheFilePath(v85, v87);
  v88 = *((_DWORD *)v1 + 65);
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v714, *((_DWORD *)v1 + 86));
  Social::User::getSettingsDirectoryPath((Social::User *)&v712, v714);
  v89 = v713;
  v90 = (unsigned int)v712;
  if ( v713 == -1 )
    v89 = strlen(v712);
  sub_DA73F4((void **)&v716, v90, v89);
  v91 = sub_DA73D4((const void **)&v716, "/", 1u);
  v717 = (char *)*v91;
  *v91 = &unk_28898CC;
  FilePathManager::setSettingsPath(v88, (int *)&v717);
  v92 = v717 - 12;
  if ( (int *)(v717 - 12) != &dword_28898C0 )
    v185 = (unsigned int *)(v717 - 4);
        v186 = __ldrex(v185);
      while ( __strex(v186 - 1, v185) );
      v186 = (*v185)--;
    if ( v186 <= 0 )
      j_j_j_j_j__ZdlPv_9(v92);
  v93 = (void *)(v716 - 12);
  if ( (int *)(v716 - 12) != &dword_28898C0 )
    v187 = (unsigned int *)(v716 - 4);
        v188 = __ldrex(v187);
      while ( __strex(v188 - 1, v187) );
      v188 = (*v187)--;
    if ( v188 <= 0 )
      j_j_j_j_j__ZdlPv_9(v93);
  v94 = v715;
  if ( v715 )
    v95 = (unsigned int *)(v715 + 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 == 1 )
      v97 = (unsigned int *)(v94 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v94 + 8))(v94);
          v98 = __ldrex(v97);
        while ( __strex(v98 - 1, v97) );
        v98 = (*v97)--;
      if ( v98 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v94 + 12))(v94);
  v99 = operator new(0x14u);
  v737 = 0;
  v100 = operator new(4u);
  LODWORD(v101) = sub_C15BAA;
  *v100 = v1;
  HIDWORD(v101) = sub_C15B9A;
  v736 = v100;
  *(_QWORD *)&v737 = v101;
  AppResourceLoader::AppResourceLoader((int)v99, (int)&v736);
  if ( v737 )
    v737();
  v711 = v99;
  Resource::registerLoader(1, (int *)&v711);
  if ( v711 )
    (*(void (**)(void))(*(_DWORD *)v711 + 4))();
  v711 = 0;
  v102 = operator new(0x14u);
  v739 = 0;
  v103 = operator new(4u);
  LODWORD(v104) = sub_C15BF0;
  *v103 = v1;
  HIDWORD(v104) = sub_C15BE0;
  v738 = v103;
  *(_QWORD *)&v739 = v104;
  AppResourceLoader::AppResourceLoader((int)v102, (int)&v738);
  if ( v739 )
    v739();
  v710 = v102;
  Resource::registerLoader(7, (int *)&v710);
  if ( v710 )
    (*(void (**)(void))(*(_DWORD *)v710 + 4))();
  v710 = 0;
  v105 = operator new(0x14u);
  v741 = 0;
  v106 = operator new(4u);
  LODWORD(v107) = sub_C15C36;
  *v106 = v1;
  HIDWORD(v107) = sub_C15C26;
  v740 = v106;
  *(_QWORD *)&v741 = v107;
  AppResourceLoader::AppResourceLoader((int)v105, (int)&v740);
  if ( v741 )
    v741();
  v709 = v105;
  Resource::registerLoader(8, (int *)&v709);
  if ( v709 )
    (*(void (**)(void))(*(_DWORD *)v709 + 4))();
  v709 = 0;
  v108 = operator new(0x14u);
  v743 = 0;
  v109 = operator new(4u);
  LODWORD(v110) = sub_C15C7C;
  *v109 = v1;
  HIDWORD(v110) = sub_C15C6C;
  v742 = v109;
  *(_QWORD *)&v743 = v110;
  AppResourceLoader::AppResourceLoader((int)v108, (int)&v742);
  if ( v743 )
    v743();
  v708 = v108;
  Resource::registerLoader(4, (int *)&v708);
  if ( v708 )
    (*(void (**)(void))(*(_DWORD *)v708 + 4))();
  v708 = 0;
  v111 = operator new(0x14u);
  v745 = 0;
  v112 = operator new(4u);
  LODWORD(v113) = sub_C15CC2;
  *v112 = v1;
  HIDWORD(v113) = sub_C15CB2;
  v744 = v112;
  *(_QWORD *)&v745 = v113;
  AppResourceLoader::AppResourceLoader((int)v111, (int)&v744);
  if ( v745 )
    v745();
  v707 = v111;
  Resource::registerLoader(5, (int *)&v707);
  if ( v707 )
    (*(void (**)(void))(*(_DWORD *)v707 + 4))();
  v707 = 0;
  v114 = operator new(0x14u);
  v747 = 0;
  v115 = operator new(4u);
  LODWORD(v116) = sub_C15D10;
  *v115 = v1;
  HIDWORD(v116) = sub_C15CF8;
  v746 = v115;
  *(_QWORD *)&v747 = v116;
  AppResourceLoader::AppResourceLoader((int)v114, (int)&v746);
  if ( v747 )
    v747();
  v706 = v114;
  Resource::registerLoader(2, (int *)&v706);
  if ( v706 )
    (*(void (**)(void))(*(_DWORD *)v706 + 4))();
  v706 = 0;
  v117 = operator new(0x14u);
  v749 = 0;
  v118 = operator new(4u);
  LODWORD(v119) = sub_C15D60;
  *v118 = v1;
  HIDWORD(v119) = sub_C15D48;
  v748 = v118;
  *(_QWORD *)&v749 = v119;
  AppResourceLoader::AppResourceLoader((int)v117, (int)&v748);
  if ( v749 )
    v749();
  v705 = v117;
  Resource::registerLoader(3, (int *)&v705);
  if ( v705 )
    (*(void (**)(void))(*(_DWORD *)v705 + 4))();
  v705 = 0;
  v120 = (ScreenshotLoader *)operator new(0x18u);
  ScreenshotLoader::ScreenshotLoader(v120, v1);
  v704 = v120;
  Resource::registerLoader(9, (int *)&v704);
  if ( v704 )
    (*(void (**)(void))(*(_DWORD *)v704 + 4))();
  v704 = 0;
  v121 = operator new(0x14u);
  v751 = 0;
  v122 = operator new(4u);
  LODWORD(v123) = sub_C15DB0;
  *v122 = v1;
  HIDWORD(v123) = sub_C15D98;
  v750 = v122;
  *(_QWORD *)&v751 = v123;
  AppResourceLoader::AppResourceLoader((int)v121, (int)&v750);
  if ( v751 )
    v751();
  v703 = v121;
  Resource::registerLoader(10, (int *)&v703);
  if ( v703 )
    (*(void (**)(void))(*(_DWORD *)v703 + 4))();
  v703 = 0;
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v701, *((_DWORD *)v1 + 86));
  v124 = v701;
  v125 = *(void (__fastcall **)(int, _DWORD **))(*(_DWORD *)v701 + 24);
  v126 = operator new(4u);
  LODWORD(v127) = sub_C162A8;
  *v126 = v1;
  HIDWORD(v127) = sub_C15DE8;
  v699 = v126;
  v700 = v127;
  v125(v124, &v699);
  if ( (_DWORD)v700 )
    ((void (*)(void))v700)();
  v128 = v702;
  if ( v702 )
    v129 = (unsigned int *)(v702 + 4);
        v130 = __ldrex(v129);
      while ( __strex(v130 - 1, v129) );
      v130 = (*v129)--;
    if ( v130 == 1 )
      v131 = (unsigned int *)(v128 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v128 + 8))(v128);
          v132 = __ldrex(v131);
        while ( __strex(v132 - 1, v131) );
        v132 = (*v131)--;
      if ( v132 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v128 + 12))(v128);
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v697, *((_DWORD *)v1 + 86));
  v133 = Social::User::getLiveUser(v697);
  v134 = operator new(4u);
  LODWORD(v135) = sub_C16AE6;
  *v134 = v1;
  HIDWORD(v135) = sub_C16ADE;
  v695 = (int)v134;
  v696 = v135;
  Social::XboxLiveUserManager::registerSignInHandler(v133, (int)&v695);
  if ( (_DWORD)v696 )
    ((void (*)(void))v696)();
  v136 = v698;
  if ( v698 )
    v137 = (unsigned int *)(v698 + 4);
        v138 = __ldrex(v137);
      while ( __strex(v138 - 1, v137) );
      v138 = (*v137)--;
    if ( v138 == 1 )
      v139 = (unsigned int *)(v136 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v136 + 8))(v136);
          v140 = __ldrex(v139);
        while ( __strex(v140 - 1, v139) );
        v140 = (*v139)--;
      if ( v140 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v136 + 12))(v136);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v693, (int)v1);
  v141 = v693;
  v142 = operator new(0x28u);
  PackSourceFactory::PackSourceFactory((int)v142, v141);
  v143 = (PackSourceFactory *)*((_DWORD *)v1 + 169);
  *((_DWORD *)v1 + 169) = v142;
  if ( v143 )
    v144 = PackSourceFactory::~PackSourceFactory(v143);
    operator delete((void *)v144);
  v145 = v694;
  if ( v694 )
    v146 = (unsigned int *)(v694 + 4);
        v147 = __ldrex(v146);
      while ( __strex(v147 - 1, v146) );
      v147 = (*v146)--;
    if ( v147 == 1 )
      v148 = (unsigned int *)(v145 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v145 + 8))(v145);
          v149 = __ldrex(v148);
        while ( __strex(v149 - 1, v148) );
        v149 = (*v148)--;
      if ( v149 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v145 + 12))(v145);
  v150 = *((_DWORD *)v1 + 65);
  v151 = *((_DWORD *)v1 + 126);
  v152 = *((_QWORD *)v1 + 65);
  v153 = *((_DWORD *)v1 + 169);
  v154 = operator new(0xACu);
  ResourcePackRepository::ResourcePackRepository(v154, v151, SHIDWORD(v152), v152, v150, v153);
  v155 = (ResourcePackRepository *)*((_DWORD *)v1 + 78);
  *((_DWORD *)v1 + 78) = v154;
  if ( v155 )
    v156 = ResourcePackRepository::~ResourcePackRepository(v155);
    operator delete((void *)v156);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v691, (int)v1);
  if ( Options::getHasEverLoggedIntoXbl(v691) != 1 )
    v161 = v692;
    if ( v692 )
      v162 = (unsigned int *)(v692 + 4);
          v163 = __ldrex(v162);
        while ( __strex(v163 - 1, v162) );
        v163 = (*v162)--;
      if ( v163 == 1 )
        v164 = (unsigned int *)(v161 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v161 + 8))(v161);
        if ( &pthread_create )
        {
          __dmb();
          do
            v165 = __ldrex(v164);
          while ( __strex(v165 - 1, v164) );
        }
        else
          v165 = (*v164)--;
        if ( v165 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v161 + 12))(v161);
    goto LABEL_248;
  v157 = EntitlementManager::hasAnActiveDeviceAccount(*((EntitlementManager **)v1 + 91));
  v158 = v692;
  if ( v692 )
    v159 = (unsigned int *)(v692 + 4);
        v160 = __ldrex(v159);
      while ( __strex(v160 - 1, v159) );
      v160 = (*v159)--;
    if ( v160 == 1 )
      v166 = (unsigned int *)(v158 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v158 + 8))(v158);
          v167 = __ldrex(v166);
        while ( __strex(v167 - 1, v166) );
        v167 = (*v166)--;
      if ( v167 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v158 + 12))(v158);
  if ( v157 )
LABEL_248:
    if ( EntitlementManager::hasAnActiveDeviceAccount(*((EntitlementManager **)v1 + 91)) == 1 )
      EntitlementManager::refreshEntitlements(*((EntitlementManager **)v1 + 91));
      ResourcePackRepository::refreshPacks(*((ResourcePackRepository **)v1 + 78));
    goto LABEL_296;
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v688, (int)v1);
  v168 = (Option *)Options::get(v688, 141);
  v169 = (int *)Option::getString(v168);
  sub_DA73B4(&v690, v169);
  v170 = v689;
  if ( v689 )
    v171 = (unsigned int *)(v689 + 4);
        v172 = __ldrex(v171);
      while ( __strex(v172 - 1, v171) );
      v172 = (*v171)--;
    if ( v172 == 1 )
      v173 = (unsigned int *)(v170 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v170 + 8))(v170);
          v174 = __ldrex(v173);
        while ( __strex(v174 - 1, v173) );
        v174 = (*v173)--;
      if ( v174 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v170 + 12))(v170);
  v189 = v690;
  if ( *(_DWORD *)(v690 - 12) )
    v190 = *((_DWORD *)v1 + 91);
    EntitlementManager::readEntitlementsAsImposter();
    v189 = v690;
  v191 = (void *)(v189 - 12);
  if ( (int *)(v189 - 12) != &dword_28898C0 )
    v572 = (unsigned int *)(v189 - 4);
        v573 = __ldrex(v572);
      while ( __strex(v573 - 1, v572) );
      v573 = (*v572)--;
    if ( v573 <= 0 )
      j_j_j_j_j__ZdlPv_9(v191);
LABEL_296:
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v686, *((_DWORD *)v1 + 86));
  v192 = Social::User::getLiveUser(v686);
  v193 = operator new(4u);
  LODWORD(v194) = sub_C16B24;
  *v193 = v1;
  HIDWORD(v194) = sub_C16B1C;
  v684 = (int)v193;
  v685 = v194;
  Social::XboxLiveUserManager::registerSignOutHandler(v192, (int)&v684);
  if ( (_DWORD)v685 )
    ((void (*)(void))v685)();
  v195 = v687;
  if ( v687 )
    v196 = (unsigned int *)(v687 + 4);
        v197 = __ldrex(v196);
      while ( __strex(v197 - 1, v196) );
      v197 = (*v196)--;
    if ( v197 == 1 )
      v198 = (unsigned int *)(v195 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v195 + 8))(v195);
          v199 = __ldrex(v198);
        while ( __strex(v199 - 1, v198) );
        v199 = (*v198)--;
      if ( v199 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v195 + 12))(v195);
  xbox::services::xbox_live_app_config::get_app_config_singleton((xbox::services::xbox_live_app_config *)&v682);
  v200 = v682;
    v201 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v201 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v201 + 488))(&v680);
  utility::conversions::to_string_t(&v681, &v680);
  xbox::services::xbox_live_app_config::set_title_telemetry_device_id(v200, &v681);
  v202 = (void *)(v681 - 12);
  if ( (int *)(v681 - 12) != &dword_28898C0 )
    v564 = (unsigned int *)(v681 - 4);
        v565 = __ldrex(v564);
      while ( __strex(v565 - 1, v564) );
      v565 = (*v564)--;
    if ( v565 <= 0 )
      j_j_j_j_j__ZdlPv_9(v202);
  v203 = (void *)(v680 - 12);
  if ( (int *)(v680 - 12) != &dword_28898C0 )
    v566 = (unsigned int *)(v680 - 4);
        v567 = __ldrex(v566);
      while ( __strex(v567 - 1, v566) );
      v567 = (*v566)--;
    if ( v567 <= 0 )
      j_j_j_j_j__ZdlPv_9(v203);
  v204 = v683;
  if ( v683 )
    v205 = (unsigned int *)(v683 + 4);
        v206 = __ldrex(v205);
      while ( __strex(v206 - 1, v205) );
      v206 = (*v205)--;
    if ( v206 == 1 )
      v207 = (unsigned int *)(v204 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v204 + 8))(v204);
          v208 = __ldrex(v207);
        while ( __strex(v208 - 1, v207) );
        v208 = (*v207)--;
      if ( v208 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v204 + 12))(v204);
  xbox::services::xbox_live_app_config::get_app_config_singleton((xbox::services::xbox_live_app_config *)&v678);
  v209 = v678;
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v675, (int)v1);
  v210 = (int *)Options::getXboxLiveSandbox(v675);
  utility::conversions::to_string_t(&v677, v210);
  xbox::services::xbox_live_app_config::set_sandbox(v209, &v677);
  v211 = (void *)(v677 - 12);
  if ( (int *)(v677 - 12) != &dword_28898C0 )
    v568 = (unsigned int *)(v677 - 4);
        v569 = __ldrex(v568);
      while ( __strex(v569 - 1, v568) );
      v569 = (*v568)--;
    if ( v569 <= 0 )
      j_j_j_j_j__ZdlPv_9(v211);
  v212 = v676;
  if ( v676 )
    v213 = (unsigned int *)(v676 + 4);
        v214 = __ldrex(v213);
      while ( __strex(v214 - 1, v213) );
      v214 = (*v213)--;
    if ( v214 == 1 )
      v215 = (unsigned int *)(v212 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v212 + 8))(v212);
          v216 = __ldrex(v215);
        while ( __strex(v216 - 1, v215) );
        v216 = (*v215)--;
      if ( v216 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v212 + 12))(v212);
  v217 = v679;
  if ( v679 )
    v218 = (unsigned int *)(v679 + 4);
        v219 = __ldrex(v218);
      while ( __strex(v219 - 1, v218) );
      v219 = (*v218)--;
    if ( v219 == 1 )
      v220 = (unsigned int *)(v217 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v217 + 8))(v217);
          v221 = __ldrex(v220);
        while ( __strex(v221 - 1, v220) );
        v221 = (*v220)--;
      if ( v221 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v217 + 12))(v217);
  v222 = *((_DWORD *)v1 + 65);
  v223 = *((_DWORD *)v1 + 126);
  v224 = *((_QWORD *)v1 + 65);
  v225 = *((_DWORD *)v1 + 169);
  v226 = operator new(0xACu);
  ResourcePackRepository::ResourcePackRepository(v226, v223, SHIDWORD(v224), v224, v222, v225);
  v227 = (ResourcePackRepository *)*((_DWORD *)v1 + 78);
  *((_DWORD *)v1 + 78) = v226;
  if ( v227 )
    v228 = ResourcePackRepository::~ResourcePackRepository(v227);
    operator delete((void *)v228);
  v229 = *((_DWORD *)v1 + 168);
  v230 = operator new(0x54u);
  v753 = 0;
  v231 = operator new(4u);
  LODWORD(v232) = sub_C16B6A;
  *v231 = v1;
  HIDWORD(v232) = sub_C16B5A;
  v752 = v231;
  *(_QWORD *)&v753 = v232;
  ResourcePackManager::ResourcePackManager((int)v230, (int)&v752, v229);
  if ( v753 )
    v753();
  *((_DWORD *)v1 + 80) = v230;
  *(_DWORD *)v674 = v230;
  Resource::registerLoader(0, (int *)v674);
  if ( *(_DWORD *)v674 )
    (*(void (**)(void))(**(_DWORD **)v674 + 4))();
  *(_DWORD *)v674 = 0;
  v233 = (*(int (**)(void))(*(_DWORD *)v732 + 76))();
  MinecraftGame::_buildLoadingVanillaClientStack(v1, v233);
  v234 = (ResourceLoadManager *)*((_DWORD *)v1 + 165);
  v235 = (mce::TextureGroup *)operator new(0x80u);
  mce::TextureGroup::TextureGroup(v235, v234);
  v236 = (mce::TextureGroup *)*((_DWORD *)v1 + 15);
  *((_DWORD *)v1 + 15) = v235;
  if ( v236 )
    v237 = mce::TextureGroup::~TextureGroup(v236);
    operator delete((void *)v237);
  v238 = (ResourceLoadManager *)*((_DWORD *)v1 + 165);
  v239 = (mce::TextureGroup *)operator new(0x80u);
  mce::TextureGroup::TextureGroup(v239, v238);
  v240 = (mce::TextureGroup *)*((_DWORD *)v1 + 16);
  *((_DWORD *)v1 + 16) = v239;
  if ( v240 )
    v241 = mce::TextureGroup::~TextureGroup(v240);
    operator delete((void *)v241);
    v239 = (mce::TextureGroup *)*((_DWORD *)v1 + 16);
    v242 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v242 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v243 = AppPlatform::isLowMemoryDevice(*v242);
  v244 = 62914560;
  if ( v243 )
    v244 = 20971520;
  mce::TextureGroup::enableLRUCache(v239, v244);
  v245 = *((_DWORD *)v1 + 80);
  LODWORD(v246) = operator new(0x38u);
  v247 = LODWORD(v246);
  UIRepository::UIRepository(v246);
  v248 = (UIRepository *)*((_DWORD *)v1 + 17);
  *((_DWORD *)v1 + 17) = v247;
  if ( v248 )
    v249 = UIRepository::~UIRepository(v248);
    operator delete((void *)v249);
  v250 = *((_DWORD *)v1 + 80);
  v251 = *((_DWORD *)v1 + 165);
  v252 = operator new(0x4Cu);
  GeometryGroup::GeometryGroup((int)v252, v250, v251);
  v253 = *((_DWORD *)v1 + 82);
  *((_DWORD *)v1 + 82) = v252;
  if ( v253 )
    (*(void (**)(void))(*(_DWORD *)v253 + 4))();
  v254 = *((_DWORD *)v1 + 80);
  v255 = *((_DWORD *)v1 + 165);
  v256 = operator new(0x4Cu);
  SkinGeometryGroup::SkinGeometryGroup((int)v256, v254, v255);
  v257 = *((_DWORD *)v1 + 83);
  *((_DWORD *)v1 + 83) = v256;
  if ( v257 )
    (*(void (**)(void))(*(_DWORD *)v257 + 4))();
    v256 = (void *)*((_DWORD *)v1 + 83);
  v258 = *((_DWORD *)v1 + 15);
  v259 = *((_DWORD *)v1 + 91);
  v260 = *((_DWORD *)v1 + 131);
  v261 = *((_DWORD *)v1 + 169);
  v262 = operator new(0x78u);
  SkinRepository::SkinRepository((int)v262, (int)v256, v258, v260, __PAIR__(v259, v261));
  v263 = *((_DWORD *)v1 + 25);
  *((_DWORD *)v1 + 25) = v262;
  if ( v263 )
    (*(void (**)(void))(*(_DWORD *)v263 + 4))();
  ResourcePackManager::registerResourcePackListener(*((_DWORD *)v1 + 80), (unsigned int)v1 + 24);
  LODWORD(v264) = operator new(0x30u);
  v265 = v264;
  UIDefRepository::UIDefRepository(v264);
  v673 = 0;
  v266 = *((_DWORD *)v1 + 64);
  *((_DWORD *)v1 + 64) = v265;
  if ( v266 )
    Json::Value::~Value((Json::Value *)(v266 + 32));
    v267 = *(_DWORD **)(v266 + 8);
    while ( v267 )
      v270 = v267;
      v271 = (UIDefNamespace *)(v267 + 2);
      v267 = (_DWORD *)*v267;
      UIDefNamespace::~UIDefNamespace(v271);
      v272 = v270[1];
      v273 = (void *)(v272 - 12);
      if ( (int *)(v272 - 12) != &dword_28898C0 )
        v268 = (unsigned int *)(v272 - 4);
            v269 = __ldrex(v268);
          while ( __strex(v269 - 1, v268) );
          v269 = (*v268)--;
        if ( v269 <= 0 )
          j_j_j_j_j__ZdlPv_9(v273);
      operator delete(v270);
    _aeabi_memclr4(*(_QWORD *)v266, 4 * (*(_QWORD *)v266 >> 32));
    *(_DWORD *)(v266 + 8) = 0;
    *(_DWORD *)(v266 + 12) = 0;
    v274 = *(void **)v266;
    if ( *(_DWORD *)v266 && (void *)(v266 + 24) != v274 )
      operator delete(v274);
    operator delete((void *)v266);
  std::unique_ptr<UIDefRepository,std::default_delete<UIDefRepository>>::~unique_ptr(&v673);
  (*(void (**)(void))(*(_DWORD *)v732 + 140))();
    v275 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v275 = &ServiceLocator<AppPlatform>::mDefaultService;
  v276 = (int *)(*(int (**)(void))(**(_DWORD **)v275 + 284))();
  sub_DA73B4(&v672, v276);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v670, (int)v1);
  Options::getDevLogFlushImmediate(v670);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v668, (int)v1);
  Options::getDevLogTimestamp(v668);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v666, (int)v1);
  Options::getDevLogTrace(v666);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v664, (int)v1);
  Options::getDevLogAppend(v664);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v662, (int)v1);
  Options::getDevLogPriorityFilter(v662);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v660, (int)v1);
  Options::getDevLogAreaFilter(v660);
  DebugLog::createLog((DebugLog *)&v672);
  v277 = v661;
  if ( v661 )
    v278 = (unsigned int *)(v661 + 4);
        v279 = __ldrex(v278);
      while ( __strex(v279 - 1, v278) );
      v279 = (*v278)--;
    if ( v279 == 1 )
      v280 = (unsigned int *)(v277 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v277 + 8))(v277);
          v281 = __ldrex(v280);
        while ( __strex(v281 - 1, v280) );
        v281 = (*v280)--;
      if ( v281 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v277 + 12))(v277);
  v282 = v663;
  if ( v663 )
    v283 = (unsigned int *)(v663 + 4);
        v284 = __ldrex(v283);
      while ( __strex(v284 - 1, v283) );
      v284 = (*v283)--;
    if ( v284 == 1 )
      v285 = (unsigned int *)(v282 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v282 + 8))(v282);
          v286 = __ldrex(v285);
        while ( __strex(v286 - 1, v285) );
        v286 = (*v285)--;
      if ( v286 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v282 + 12))(v282);
  v287 = v665;
  if ( v665 )
    v288 = (unsigned int *)(v665 + 4);
        v289 = __ldrex(v288);
      while ( __strex(v289 - 1, v288) );
      v289 = (*v288)--;
    if ( v289 == 1 )
      v290 = (unsigned int *)(v287 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v287 + 8))(v287);
          v291 = __ldrex(v290);
        while ( __strex(v291 - 1, v290) );
        v291 = (*v290)--;
      if ( v291 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v287 + 12))(v287);
  v292 = v667;
  if ( v667 )
    v293 = (unsigned int *)(v667 + 4);
        v294 = __ldrex(v293);
      while ( __strex(v294 - 1, v293) );
      v294 = (*v293)--;
    if ( v294 == 1 )
      v295 = (unsigned int *)(v292 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v292 + 8))(v292);
          v296 = __ldrex(v295);
        while ( __strex(v296 - 1, v295) );
        v296 = (*v295)--;
      if ( v296 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v292 + 12))(v292);
  v297 = v669;
  if ( v669 )
    v298 = (unsigned int *)(v669 + 4);
        v299 = __ldrex(v298);
      while ( __strex(v299 - 1, v298) );
      v299 = (*v298)--;
    if ( v299 == 1 )
      v300 = (unsigned int *)(v297 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v297 + 8))(v297);
          v301 = __ldrex(v300);
        while ( __strex(v301 - 1, v300) );
        v301 = (*v300)--;
      if ( v301 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v297 + 12))(v297);
  v302 = v671;
  if ( v671 )
    v303 = (unsigned int *)(v671 + 4);
        v304 = __ldrex(v303);
      while ( __strex(v304 - 1, v303) );
      v304 = (*v303)--;
    if ( v304 == 1 )
      v305 = (unsigned int *)(v302 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v302 + 8))(v302);
          v306 = __ldrex(v305);
        while ( __strex(v306 - 1, v305) );
        v306 = (*v305)--;
      if ( v306 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v302 + 12))(v302);
    v308 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v308 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__cdecl **)(_DWORD, _DWORD, int))(*(_DWORD *)*v308 + 440))(*v308, *(_DWORD *)(*(_DWORD *)*v308 + 440), v307);
    v310 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v310 = &ServiceLocator<AppPlatform>::mDefaultService;
  v311 = (AppPlatform *)(*(int (__cdecl **)(_DWORD, _DWORD, int))(*(_DWORD *)*v310 + 436))(
                          *v310,
                          *(_DWORD *)(*(_DWORD *)*v310 + 436),
                          v309);
  AppPlatform::getAvailableHWThreadCount(v311);
  v312 = *((_DWORD *)v1 + 65);
  v313 = operator new(0x1188u);
  DevConsoleLogger::DevConsoleLogger((int)v313, v312);
  v314 = *((_DWORD *)v1 + 81);
  *((_DWORD *)v1 + 81) = v313;
  if ( v314 )
    std::default_delete<DevConsoleLogger>::operator()((int)v1 + 324, v314);
  v315 = operator new(0x120u);
  NetworkHandler::NetworkHandler((int)v315);
  v317 = *((_DWORD *)v1 + 84);
  *((_DWORD *)v1 + 84) = v315;
  if ( v317 )
    (*(void (__cdecl **)(int, _DWORD, int))(*(_DWORD *)v317 + 4))(v317, *(_DWORD *)(*(_DWORD *)v317 + 4), v316);
  v318 = operator new(0x120u);
  NetworkHandler::NetworkHandler((int)v318);
  v320 = *((_DWORD *)v1 + 85);
  *((_DWORD *)v1 + 85) = v318;
  if ( v320 )
    (*(void (__cdecl **)(int, _DWORD, int))(*(_DWORD *)v320 + 4))(v320, *(_DWORD *)(*(_DWORD *)v320 + 4), v319);
  v321 = *((_DWORD *)v1 + 46);
  v322 = (int)v1 + 180;
  v323 = (int)v1 + 180;
  if ( v321 )
    v324 = *((_DWORD *)v1 + 46);
    do
      v323 = v324;
      v325 = (int *)(v324 + 12);
      v326 = *(_BYTE *)(v323 + 16);
      if ( v326 > 1 )
        v325 = (int *)(v323 + 8);
      v324 = *v325;
    while ( v324 );
    v327 = v326 >= 2;
    v328 = v323;
    if ( !v327 )
LABEL_508:
      if ( *(_BYTE *)(v328 + 16) )
        goto LABEL_516;
      goto LABEL_509;
  if ( v323 != *((_DWORD *)v1 + 47) )
    v328 = sub_DA7F9C(v323);
    goto LABEL_508;
LABEL_509:
  if ( v323 )
    if ( v322 == v323 )
      v329 = 1;
      v329 = 0;
      if ( (unsigned int)*(_BYTE *)(v323 + 16) > 1 )
        v329 = 1;
    v330 = operator new(0x14u);
    v330[16] = 1;
    sub_DA7FAC(v329, (int)v330, v323, (int)v1 + 180);
    ++*((_DWORD *)v1 + 49);
    v321 = *((_DWORD *)v1 + 46);
LABEL_516:
  v331 = (int)v1 + 180;
    v332 = v321;
      v331 = v332;
      v333 = (int *)(v332 + 12);
      v334 = *(_BYTE *)(v331 + 16);
      if ( v334 > 2 )
        v333 = (int *)(v331 + 8);
      v332 = *v333;
    while ( v332 );
    v327 = v334 >= 3;
    v335 = v331;
LABEL_525:
      if ( (unsigned int)*(_BYTE *)(v335 + 16) > 1 )
        goto LABEL_533;
      goto LABEL_526;
  if ( v331 != *((_DWORD *)v1 + 47) )
    v335 = sub_DA7F9C(v331);
    goto LABEL_525;
LABEL_526:
  if ( v331 )
    if ( v322 == v331 )
      v336 = 1;
      v336 = 0;
      if ( (unsigned int)*(_BYTE *)(v331 + 16) > 2 )
        v336 = 1;
    v337 = operator new(0x14u);
    v337[16] = 2;
    sub_DA7FAC(v336, (int)v337, v331, (int)v1 + 180);
LABEL_533:
  v338 = (int)v1 + 180;
      v338 = v321;
      v339 = (int *)(v321 + 12);
      v340 = *(_BYTE *)(v321 + 16);
      if ( v340 > 3 )
        v339 = (int *)(v321 + 8);
      v321 = *v339;
    while ( *v339 );
    v327 = v340 >= 4;
    v341 = v338;
LABEL_541:
      if ( (unsigned int)*(_BYTE *)(v341 + 16) > 2 )
        goto LABEL_549;
      goto LABEL_542;
  if ( v338 != *((_DWORD *)v1 + 47) )
    v341 = sub_DA7F9C(v338);
    goto LABEL_541;
LABEL_542:
  if ( v338 )
    if ( v322 == v338 )
      v342 = 1;
      v342 = 0;
      if ( (unsigned int)*(_BYTE *)(v338 + 16) > 3 )
        v342 = 1;
    v343 = operator new(0x14u);
    v343[16] = 3;
    sub_DA7FAC(v342, (int)v343, v338, (int)v1 + 180);
LABEL_549:
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v658, *((_DWORD *)v1 + 86));
  v344 = (void *)Social::User::getLiveUser(v658);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v656, (int)v1);
  v345 = (int *)Options::getRealmsEndpoint(v656);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v654, (int)v1);
  v346 = (int *)Options::getRealmsRelyingParty(v654);
  v347 = (void **)operator new(0x68u);
  RealmsAPI::RealmsAPI(v347, v344, v345, v346);
  v348 = (RealmsAPI *)*((_DWORD *)v1 + 99);
  *((_DWORD *)v1 + 99) = v347;
  if ( v348 )
    v349 = RealmsAPI::~RealmsAPI(v348);
    operator delete((void *)v349);
  v350 = v655;
  if ( v655 )
    v351 = (unsigned int *)(v655 + 4);
        v352 = __ldrex(v351);
      while ( __strex(v352 - 1, v351) );
      v352 = (*v351)--;
    if ( v352 == 1 )
      v353 = (unsigned int *)(v350 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v350 + 8))(v350);
          v354 = __ldrex(v353);
        while ( __strex(v354 - 1, v353) );
        v354 = (*v353)--;
      if ( v354 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v350 + 12))(v350);
  v355 = v657;
  if ( v657 )
    v356 = (unsigned int *)(v657 + 4);
        v357 = __ldrex(v356);
      while ( __strex(v357 - 1, v356) );
      v357 = (*v356)--;
    if ( v357 == 1 )
      v358 = (unsigned int *)(v355 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v355 + 8))(v355);
          v359 = __ldrex(v358);
        while ( __strex(v359 - 1, v358) );
        v359 = (*v358)--;
      if ( v359 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v355 + 12))(v355);
  v360 = v659;
  if ( v659 )
    v361 = (unsigned int *)(v659 + 4);
        v362 = __ldrex(v361);
      while ( __strex(v362 - 1, v361) );
      v362 = (*v361)--;
    if ( v362 == 1 )
      v363 = (unsigned int *)(v360 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v360 + 8))(v360);
          v364 = __ldrex(v363);
        while ( __strex(v364 - 1, v363) );
        v364 = (*v363)--;
      if ( v364 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v360 + 12))(v360);
  v365 = operator new(0x40u);
  v754 = getTimeMs;
  v755 = (void (__cdecl *)(int (**)(void), int (**)(void), signed int))std::_Function_base::_Base_manager<int (*)(void)>::_M_manager;
  v756 = std::_Function_handler<int ()(void),int (*)(void)>::_M_invoke;
  Timer::Timer((int)v365, 1101004800, (int)&v754);
  if ( v755 )
    v755(&v754, &v754, 3);
  v366 = *((_DWORD *)v1 + 60);
  *((_DWORD *)v1 + 60) = v365;
  if ( v366 )
    v367 = *(void (__cdecl **)(int, int, signed int))(v366 + 56);
    if ( v367 )
      v367(v366 + 48, v366 + 48, 3);
    operator delete((void *)v366);
  v368 = operator new(0x40u);
  v757 = getTimeMs;
  v758 = (void (__cdecl *)(int (**)(void), int (**)(void), signed int))std::_Function_base::_Base_manager<int (*)(void)>::_M_manager;
  v759 = std::_Function_handler<int ()(void),int (*)(void)>::_M_invoke;
  Timer::Timer((int)v368, 1101004800, (int)&v757);
  if ( v758 )
    v758(&v757, &v757, 3);
  v369 = *((_DWORD *)v1 + 61);
  *((_DWORD *)v1 + 61) = v368;
  if ( v369 )
    v370 = *(void (__cdecl **)(int, int, signed int))(v369 + 56);
    if ( v370 )
      v370(v369 + 48, v369 + 48, 3);
    operator delete((void *)v369);
  (*(void (__cdecl **)(HolographicPlatform *, char *, _DWORD))(*(_DWORD *)v732 + 16))(
    v732,
    &v761,
    *(_DWORD *)(*(_DWORD *)v732 + 16));
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v651, (int)v1);
  std::make_unique<SoundEngine,std::shared_ptr<Options>,SoundSystemGUID &,ResourcePackManager &,ResourceLoadManager &>(
    &v653,
    (int)&v651,
    *((_DWORD *)v1 + 80),
    *((_DWORD *)v1 + 165));
  v371 = v653;
  v653 = 0;
  v372 = *((_DWORD *)v1 + 66);
  *((_DWORD *)v1 + 66) = v371;
  if ( v372 )
    (*(void (**)(void))(*(_DWORD *)v372 + 4))();
  v373 = v652;
  if ( v652 )
    v374 = (unsigned int *)(v652 + 4);
        v375 = __ldrex(v374);
      while ( __strex(v375 - 1, v374) );
      v375 = (*v374)--;
    if ( v375 == 1 )
      v376 = (unsigned int *)(v373 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v373 + 8))(v373);
          v377 = __ldrex(v376);
        while ( __strex(v377 - 1, v376) );
        v377 = (*v376)--;
      if ( v377 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v373 + 12))(v373);
  v378 = (SoundPlayer *)*((_DWORD *)v1 + 66);
  v379 = (MusicManager *)operator new(0x10u);
  MusicManager::MusicManager(v379, v378);
  v380 = (void *)*((_DWORD *)v1 + 67);
  *((_DWORD *)v1 + 67) = v379;
  if ( v380 )
    operator delete(v380);
  v648 = 0;
  j__ZNSt12__shared_ptrI14ClientInstanceLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJR13MinecraftGameS7_iEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v649,
    (int)&v760,
    (int)v1,
    (char *)&v648);
  LOBYTE(v645) = 0;
  v646 = v649;
  v647 = v650;
  if ( v650 )
    v381 = (unsigned int *)(v650 + 4);
        v382 = __ldrex(v381);
      while ( __strex(v382 + 1, v381) );
      ++*v381;
  std::_Rb_tree<unsigned char,std::pair<unsigned char const,std::shared_ptr<ClientInstance>>,std::_Select1st<std::pair<unsigned char const,std::shared_ptr<ClientInstance>>>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<ClientInstance>>>>::_M_insert_unique<std::pair&<unsigned char,std::shared_ptr<ClientInstance>>>(
    (int)&v644,
    (int)v1 + 212,
    &v645);
  v383 = *((_QWORD *)v1 + 30);
  v384 = *(_QWORD *)((char *)v1 + 260);
  v385 = (NetworkHandler *)*((_DWORD *)v1 + 84);
  v386 = (minecraft::api::Api *)*((_DWORD *)v1 + 103);
  v387 = (Social::UserManager *)*((_DWORD *)v1 + 86);
  v388 = (ClientInstance *)v649;
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v642, (int)v387);
  v389 = Social::User::getGameControllerId(v642);
  ClientInstance::init(
    v388,
    (SoundEngine *)HIDWORD(v384),
    v386,
    (FilePathManager *)v384,
    v385,
    (Timer *)v383,
    (Timer *)HIDWORD(v383),
    v387,
    v389);
  v390 = v643;
  if ( v643 )
    v391 = (unsigned int *)(v643 + 4);
        v392 = __ldrex(v391);
      while ( __strex(v392 - 1, v391) );
      v392 = (*v391)--;
    if ( v392 == 1 )
      v393 = (unsigned int *)(v390 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v390 + 8))(v390);
          v394 = __ldrex(v393);
        while ( __strex(v394 - 1, v393) );
        v394 = (*v393)--;
      if ( v394 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v390 + 12))(v390);
  v395 = operator new(0x14u);
  TestClientInterface::TestClientInterface((int)v395, (int)v1);
  v396 = *((_DWORD *)v1 + 59);
  *((_DWORD *)v1 + 59) = v395;
  if ( v396 )
    (*(void (**)(void))(*(_DWORD *)v396 + 4))();
  v397 = *((_DWORD *)v1 + 55);
  v398 = (int)v1 + 216;
  for ( i = (int)v1 + 216; v397; v397 = *(_DWORD *)(v397 + 8) )
    i = v397;
  v400 = (int)v1 + 216;
  if ( i != v398 )
    if ( *(_BYTE *)(i + 16) )
      i = (int)v1 + 216;
    v400 = i;
  v401 = *(_DWORD *)(v400 + 20);
  v402 = v732;
  v732 = 0;
  v641 = (int)v402;
  ClientInstance::setHoloInput(v401, &v641);
  if ( v641 )
    (*(void (**)(void))(*(_DWORD *)v641 + 4))();
  v641 = 0;
  v403 = (int)v1 + 216;
  for ( j = *((_DWORD *)v1 + 55); j; j = *(_DWORD *)(j + 8) )
    v403 = j;
  v405 = (int)v1 + 216;
  if ( v403 != v398 )
    if ( *(_BYTE *)(v403 + 16) )
      v403 = (int)v1 + 216;
    v405 = v403;
  v586 = (DebugLog *)ClientInstance::getHoloInput(*(ClientInstance **)(v405 + 20));
  DebugLog::initializeLogExtensions(v586);
  v406 = *((_DWORD *)v1 + 103);
  v407 = *((_DWORD *)v1 + 65);
  v408 = *(void (__fastcall **)(int, int, int *, int *))(*(_DWORD *)v406 + 8);
  v409 = operator new(1u);
  LODWORD(v410) = sub_C16EF0;
  v638 = (int)v409;
  HIDWORD(v410) = sub_C16EB8;
  v640 = v410;
  v411 = operator new(1u);
  LODWORD(v412) = sub_C16F58;
  v635 = (int)v411;
  HIDWORD(v412) = sub_C16F20;
  v637 = v412;
  v408(v406, v407, &v638, &v635);
  if ( (_DWORD)v637 )
    ((void (*)(void))v637)();
  if ( (_DWORD)v640 )
    ((void (*)(void))v640)();
  (*(void (**)(void))(**((_DWORD **)v1 + 103) + 28))();
  (*(void (**)(void))(**((_DWORD **)v1 + 103) + 32))();
  (*(void (**)(void))(**((_DWORD **)v1 + 103) + 36))();
  NetworkHandler::setDefaultGamePort(*((NetworkHandler **)v1 + 84), 0);
  NetworkHandler::setDefaultGamePortv6(*((NetworkHandler **)v1 + 84), 0);
  v413 = *((_DWORD *)v1 + 126);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v633, (int)v1);
  MinecraftEventing::registerOptionsObserver(v413, (int)&v633);
  v414 = v634;
  if ( v634 )
    v415 = (unsigned int *)(v634 + 4);
        v416 = __ldrex(v415);
      while ( __strex(v416 - 1, v415) );
      v416 = (*v415)--;
    if ( v416 == 1 )
      v417 = (unsigned int *)(v414 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v414 + 8))(v414);
          v418 = __ldrex(v417);
        while ( __strex(v418 - 1, v417) );
        v418 = (*v417)--;
      if ( v418 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v414 + 12))(v414);
  v419 = *((_DWORD *)v1 + 126);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v631, (int)v1);
  v590 = v419;
  v588 = (int *)Options::getRealmsEndpointPayment(v631);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v629, (int)v1);
  v420 = (int *)Options::getRealmsRelyingPartyPayment(v629);
  v421 = *((_DWORD *)v1 + 55);
  v422 = (int)v1 + 216;
  for ( k = *((_DWORD *)v1 + 86); v421; v421 = *(_DWORD *)(v421 + 8) )
    v422 = v421;
  v424 = (int)v1 + 216;
  if ( v422 != v398 )
    if ( *(_BYTE *)(v422 + 16) )
      v422 = (int)v1 + 216;
    v424 = v422;
  v425 = *((_DWORD *)v1 + 72);
  v426 = *((_DWORD *)v1 + 91);
  v427 = *(_DWORD *)(v424 + 20);
  v428 = operator new(0xA0u);
  OfferRepository::OfferRepository((int)v428, v590, v588, v420, k, v427, v425, v426);
  v429 = *((_DWORD *)v1 + 74);
  *((_DWORD *)v1 + 74) = v428;
  if ( v429 )
    (*(void (**)(void))(*(_DWORD *)v429 + 4))();
  v430 = v630;
  if ( v630 )
    v431 = (unsigned int *)(v630 + 4);
        v432 = __ldrex(v431);
      while ( __strex(v432 - 1, v431) );
      v432 = (*v431)--;
    if ( v432 == 1 )
      v433 = (unsigned int *)(v430 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v430 + 8))(v430);
          v434 = __ldrex(v433);
        while ( __strex(v434 - 1, v433) );
        v434 = (*v433)--;
      if ( v434 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v430 + 12))(v430);
  v435 = v632;
  if ( v632 )
    v436 = (unsigned int *)(v632 + 4);
        v437 = __ldrex(v436);
      while ( __strex(v437 - 1, v436) );
      v437 = (*v436)--;
    if ( v437 == 1 )
      v438 = (unsigned int *)(v435 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v435 + 8))(v435);
          v439 = __ldrex(v438);
        while ( __strex(v439 - 1, v438) );
        v439 = (*v438)--;
      if ( v439 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v435 + 12))(v435);
  v440 = *((_DWORD *)v1 + 74);
  v441 = operator new(4u);
  LODWORD(v442) = sub_C16F8E;
  *v441 = v1;
  HIDWORD(v442) = sub_C16F86;
  v626 = (int)v441;
  v628 = v442;
  OfferRepository::registerLicenseChangeCallback(v440, (int)&v626);
  if ( (_DWORD)v628 )
    ((void (*)(void))v628)();
  v443 = *((_DWORD *)v1 + 55);
  for ( l = (int)v1 + 216; v443; v443 = *(_DWORD *)(v443 + 8) )
    l = v443;
  v445 = (int)v1 + 216;
  if ( l != v398 )
    if ( *(_BYTE *)(l + 16) )
      l = (int)v1 + 216;
    v445 = l;
  v446 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v445 + 20));
  v447 = (NetworkHandler *)Minecraft::getNetworkHandler(v446);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v624, (int)v1);
  v448 = Options::getUseIPv6Only(v624);
  NetworkHandler::setUseIPv6Only(v447, v448);
  v449 = v625;
  if ( v625 )
    v450 = (unsigned int *)(v625 + 4);
        v451 = __ldrex(v450);
      while ( __strex(v451 - 1, v450) );
      v451 = (*v450)--;
    if ( v451 == 1 )
      v452 = (unsigned int *)(v449 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v449 + 8))(v449);
          v453 = __ldrex(v452);
        while ( __strex(v453 - 1, v452) );
        v453 = (*v452)--;
      if ( v453 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v449 + 12))(v449);
    v454 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v454 = &ServiceLocator<AppPlatform>::mDefaultService;
  v455 = *(_DWORD *)v454;
  v456 = *(void (__fastcall **)(int, int))(**(_DWORD **)v454 + 604);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v622, (int)v1);
  v457 = Options::getChatTextToSpeechEnabled(v622);
  v456(v455, v457);
  v458 = v623;
  if ( v623 )
    v459 = (unsigned int *)(v623 + 4);
        v460 = __ldrex(v459);
      while ( __strex(v460 - 1, v459) );
      v460 = (*v459)--;
    if ( v460 == 1 )
      v461 = (unsigned int *)(v458 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v458 + 8))(v458);
          v462 = __ldrex(v461);
        while ( __strex(v462 - 1, v461) );
        v462 = (*v461)--;
      if ( v462 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v458 + 12))(v458);
  v463 = (Social::UserManager *)*((_DWORD *)v1 + 86);
  v464 = (Social::MultiplayerServiceManager *)operator new(0x38u);
  Social::MultiplayerServiceManager::MultiplayerServiceManager(v464, v463);
  v465 = (Social::MultiplayerServiceManager *)*((_DWORD *)v1 + 87);
  *((_DWORD *)v1 + 87) = v464;
  if ( v465 )
    v466 = Social::MultiplayerServiceManager::~MultiplayerServiceManager(v465);
    operator delete((void *)v466);
    v464 = (Social::MultiplayerServiceManager *)*((_DWORD *)v1 + 87);
    v467 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v467 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(char **))(**(_DWORD **)v467 + 648))(&v619);
  Social::MultiplayerServiceManager::RegisterServiceList((Social::MultiplayerService ***)v464, (int)&v619);
  v468 = (char *)v620;
  v469 = v619;
  if ( v619 != (char *)v620 )
      if ( *(_DWORD *)v469 )
        (*(void (**)(void))(**(_DWORD **)v469 + 4))();
      *(_DWORD *)v469 = 0;
      v469 += 4;
    while ( v468 != v469 );
    v469 = v619;
  if ( v469 )
    operator delete(v469);
  v470 = *((_QWORD *)v1 + 43);
  v471 = *((_DWORD *)v1 + 126);
  v472 = operator new(4u);
  HIDWORD(v473) = sub_C16FC4;
  *v472 = v1;
  v616 = (int)v472;
  LODWORD(v473) = sub_C170B0;
  v618 = v473;
  v474 = (int)v1 + 216;
  for ( m = *((_DWORD *)v1 + 55); m; m = *(_DWORD *)(m + 8) )
    v474 = m;
  v476 = (int)v1 + 216;
  if ( v474 != v398 )
    if ( *(_BYTE *)(v474 + 16) )
      v474 = (int)v1 + 216;
    v476 = v474;
  v477 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v476 + 20));
  v478 = (NetworkHandler *)Minecraft::getNetworkHandler(v477);
  Social::MultiplayerServiceManager::initialize((NetworkHandler *)HIDWORD(v470), v470, v471, (int)&v616, v478);
  if ( (_DWORD)v618 )
    ((void (*)(void))v618)();
  v615 = 0;
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v612, (int)v1);
  Options::getDevResetClientId(v612);
  v610 = 0;
  v611 = 0;
  MinecraftGame::generateClientId((int)v1, 0, &v615, v479, 0LL, (int)&v610);
  v481 = v613;
  if ( v613 )
    v482 = (unsigned int *)(v613 + 4);
        v483 = __ldrex(v482);
        v480 = __strex(v483 - 1, v482);
      while ( v480 );
      v483 = (*v482)--;
    if ( v483 == 1 )
      v484 = (unsigned int *)(v481 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v481 + 8))(v481);
          v485 = __ldrex(v484);
        while ( __strex(v485 - 1, v484) );
        v485 = (*v484)--;
      if ( v485 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v481 + 12))(v481);
  MinecraftGame::_onActiveResourcePacksChanged(
    0,
    v480,
    v574,
    v576,
    v578,
    v580,
    v582,
    v584,
    (int)v586,
    (int)v588,
    v590,
    v593,
    v594,
    (int)v595,
    v596,
    v597,
    v598,
    (int)v599,
    v600,
    v601,
    v602,
    v603,
    v604,
    v605,
    v606,
    (int)ptr,
    (int)v608,
    v609,
    v610,
    v611,
    (int)v612,
    v613,
    v614,
    v616,
    v617,
    v618,
    SHIDWORD(v618),
    (int)v619,
    v620,
    v621,
    (int)v622,
    v623,
    (int)v624,
    v625,
    v626,
    v627,
    v628,
    SHIDWORD(v628),
    (int)v629,
    v630,
    (int)v631,
    v632,
    v633,
    v634,
    v635,
    v636,
    v637,
    SHIDWORD(v637),
    v638,
    v639);
  ptr = 0;
  v608 = 0;
  v486 = (int)v1 + 216;
  v609 = 0;
  for ( n = *((_DWORD *)v1 + 55); n; n = *(_DWORD *)(n + 8) )
    v486 = n;
  v488 = (int)v1 + 216;
  if ( v486 != v398 )
    if ( *(_BYTE *)(v486 + 16) )
      v486 = (int)v1 + 216;
    v488 = v486;
  v489 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v488 + 20));
  v490 = v587;
  v491 = Minecraft::getLevelSource(v489);
  (*(void (**)(void))(*(_DWORD *)v491 + 12))();
  if ( v615 )
    MinecraftEventing::fireEventClientIdCreated(*((MinecraftEventing **)v1 + 126), (v608 - (LevelSummary *)ptr) >> 6);
  v492 = *((_DWORD *)v1 + 55);
  for ( ii = (int)v1 + 216; v492; v492 = *(_DWORD *)(v492 + 8) )
    ii = v492;
  v494 = (int)v1 + 216;
  if ( ii != v398 )
    if ( *(_BYTE *)(ii + 16) )
      ii = (int)v1 + 216;
    v494 = ii;
  v495 = *(_DWORD *)(v494 + 20);
  v496 = (MinecraftInputHandler *)operator new(0x1Cu);
  MinecraftInputHandler::MinecraftInputHandler((int)v496, v495);
  v497 = *((_DWORD *)v1 + 63);
  *((_DWORD *)v1 + 63) = v496;
  if ( v497 )
    (*(void (**)(void))(*(_DWORD *)v497 + 4))();
    v496 = (MinecraftInputHandler *)*((_DWORD *)v1 + 63);
  MinecraftInputHandler::init(v496);
  v498 = *((_DWORD *)v1 + 126);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v605, (int)v1);
  v499 = *((_DWORD *)v1 + 55);
  for ( jj = (int)v1 + 216; v499; v499 = *(_DWORD *)(v499 + 8) )
    jj = v499;
  v501 = (int)v1 + 216;
  if ( jj != v398 )
    if ( *(_BYTE *)(jj + 16) )
      jj = (int)v1 + 216;
    v501 = jj;
  v502 = (void *)ClientInstance::getCurrentInputMode(*(ClientInstance **)(v501 + 20));
  MinecraftEventing::fireEventOptionsUpdated(
    v498,
    (int)&v605,
    v502,
    1,
    v575,
    v577,
    v579,
    v581,
    v583,
    v585,
    v587,
    v589,
    v591,
    v592,
    (char)v612);
  v503 = v606;
  if ( v606 )
    v504 = (unsigned int *)(v606 + 4);
        v505 = __ldrex(v504);
      while ( __strex(v505 - 1, v504) );
      v505 = (*v504)--;
    if ( v505 == 1 )
      v506 = (unsigned int *)(v503 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v503 + 8))(v503);
          v507 = __ldrex(v506);
        while ( __strex(v507 - 1, v506) );
        v507 = (*v506)--;
      if ( v507 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v503 + 12))(v503);
  v508 = *(void (__fastcall **)(int, int *))(*(_DWORD *)v490 + 8);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v603, (int)v1);
  v508(v490, &v603);
  v509 = v604;
  if ( v604 )
    v510 = (unsigned int *)(v604 + 4);
        v511 = __ldrex(v510);
      while ( __strex(v511 - 1, v510) );
      v511 = (*v510)--;
    if ( v511 == 1 )
      v512 = (unsigned int *)(v509 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v509 + 8))(v509);
          v513 = __ldrex(v512);
        while ( __strex(v513 - 1, v512) );
        v513 = (*v512)--;
      if ( v513 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v509 + 12))(v509);
  v514 = (mce::RenderMaterial *)((*(int (__fastcall **)(int))(*(_DWORD *)v490 + 44))(v490) ^ 1);
  *((_BYTE *)v1 + 547) = (_BYTE)v514;
  v515 = (ScreenRenderer *)mce::RenderMaterial::initContext(v514);
  v516 = (ScreenRenderer *)ScreenRenderer::singleton(v515);
  ScreenRenderer::loadMaterials(v516, *((mce::TextureGroup **)v1 + 15));
  MinecraftEventing::fireEventHardwareInfo(*((MinecraftEventing **)v1 + 126));
  MinecraftEventing::fireEventStartClient(*((MinecraftEventing **)v1 + 126));
  v517 = *((_DWORD *)v1 + 55);
  for ( kk = (int)v1 + 216; v517; v517 = *(_DWORD *)(v517 + 8) )
    kk = v517;
  v519 = (int)v1 + 216;
  if ( kk != v398 )
    if ( *(_BYTE *)(kk + 16) )
      kk = (int)v1 + 216;
    v519 = kk;
  ClientInstance::initializeRenderResources(*(ClientInstance **)(v519 + 20));
  v520 = *((_DWORD *)v1 + 55);
  v521 = (int)v1 + 216;
  for ( ll = *((_DWORD *)v1 + 26); v520; v520 = *(_DWORD *)(v520 + 8) )
    v521 = v520;
  v523 = (int)v1 + 216;
  if ( v521 != v398 )
    if ( *(_BYTE *)(v521 + 16) )
      v521 = (int)v1 + 216;
    v523 = v521;
  v524 = ClientInstance::getSceneFactory(*(ClientInstance **)(v523 + 20));
  SceneFactory::createStartupScreen((SceneFactory *)&v601, v524);
  SceneStack::pushScreen(ll, (int)&v601, 0);
  v525 = v602;
  if ( v602 )
    v526 = (unsigned int *)(v602 + 4);
        v527 = __ldrex(v526);
      while ( __strex(v527 - 1, v526) );
      v527 = (*v526)--;
    if ( v527 == 1 )
      v528 = (unsigned int *)(v525 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v525 + 8))(v525);
          v529 = __ldrex(v528);
        while ( __strex(v529 - 1, v528) );
        v529 = (*v528)--;
      if ( v529 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v525 + 12))(v525);
  v530 = *((_DWORD *)v1 + 55);
  for ( mm = (int)v1 + 216; v530; v530 = *(_DWORD *)(v530 + 8) )
    mm = v530;
  if ( mm != v398 && !*(_BYTE *)(mm + 16) )
    v398 = mm;
  v532 = *(ClientInstance **)(v398 + 20);
  v533 = operator new(0x338u);
  GameRenderer::GameRenderer((int)v533, v532);
  v534 = *((_DWORD *)v1 + 12);
  *((_DWORD *)v1 + 12) = v533;
  if ( v534 )
    (*(void (**)(void))(*(_DWORD *)v534 + 4))();
    v533 = (_BYTE *)*((_DWORD *)v1 + 12);
    v535 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v535 = &ServiceLocator<AppPlatform>::mDefaultService;
  v533[224] = (*(int (**)(void))(**(_DWORD **)v535 + 196))();
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v599, (int)v1);
  Options::checkVersionUpdate(v599);
  v536 = v600;
  if ( v600 )
    v537 = (unsigned int *)(v600 + 4);
        v538 = __ldrex(v537);
      while ( __strex(v538 - 1, v537) );
      v538 = (*v537)--;
    if ( v538 == 1 )
      v539 = (unsigned int *)(v536 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v536 + 8))(v536);
          v540 = __ldrex(v539);
        while ( __strex(v540 - 1, v539) );
        v540 = (*v539)--;
      if ( v540 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v536 + 12))(v536);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v597, (int)v1);
  v541 = Options::get(v597, 144);
  v542 = operator new(1u);
  LODWORD(v543) = sub_C17138;
  v593 = (int)v542;
  HIDWORD(v543) = sub_C170E8;
  *(_QWORD *)&v595 = v543;
  Option::registerObserver(v541, (int)v1, (int)&v593);
  if ( v595 )
    v595();
  v544 = v598;
  if ( v598 )
    v545 = (unsigned int *)(v598 + 4);
        v546 = __ldrex(v545);
      while ( __strex(v546 - 1, v545) );
      v546 = (*v545)--;
    if ( v546 == 1 )
      v547 = (unsigned int *)(v544 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v544 + 8))(v544);
          v548 = __ldrex(v547);
        while ( __strex(v548 - 1, v547) );
        v548 = (*v547)--;
      if ( v548 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v544 + 12))(v544);
  v550 = v608;
  v549 = (LevelSummary *)ptr;
  if ( ptr != (void *)v608 )
      v549 = (LevelSummary *)((char *)LevelSummary::~LevelSummary(v549) + 64);
    while ( v550 != v549 );
    v549 = (LevelSummary *)ptr;
  if ( v549 )
    operator delete((void *)v549);
  v551 = v647;
  if ( v647 )
    v552 = (unsigned int *)(v647 + 4);
        v553 = __ldrex(v552);
      while ( __strex(v553 - 1, v552) );
      v553 = (*v552)--;
    if ( v553 == 1 )
      v554 = (unsigned int *)(v551 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v551 + 8))(v551);
          v555 = __ldrex(v554);
        while ( __strex(v555 - 1, v554) );
        v555 = (*v554)--;
      if ( v555 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v551 + 12))(v551);
  v556 = v650;
    v557 = (unsigned int *)(v650 + 4);
        v558 = __ldrex(v557);
      while ( __strex(v558 - 1, v557) );
      v558 = (*v557)--;
    if ( v558 == 1 )
      v559 = (unsigned int *)(v556 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v556 + 8))(v556);
          v560 = __ldrex(v559);
        while ( __strex(v560 - 1, v559) );
        v560 = (*v559)--;
      if ( v560 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v556 + 12))(v556);
  v561 = (void *)(v672 - 12);
  if ( (int *)(v672 - 12) != &dword_28898C0 )
    v570 = (unsigned int *)(v672 - 4);
        v571 = __ldrex(v570);
      while ( __strex(v571 - 1, v570) );
      v571 = (*v570)--;
    if ( v571 <= 0 )
      j_j_j_j_j__ZdlPv_9(v561);
  if ( v730 )
    v562 = Options::~Options(v730);
    operator delete((void *)v562);
  if ( v732 )
    (*(void (**)(void))(*(_DWORD *)v732 + 4))();
  result = (RakNet *)(_stack_chk_guard - v762);
  if ( _stack_chk_guard != v762 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall MinecraftGame::grabMouse(int result)
{
  void *v1; // r0@3

  if ( !*(_BYTE *)(result + 112) )
  {
    *(_BYTE *)(result + 112) = 1;
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v1 = &ServiceLocator<AppPlatform>::mDefaultService;
    result = (*(int (**)(void))(**(_DWORD **)v1 + 72))();
  }
  return result;
}


int __fastcall MinecraftGame::setHasConnectionToRemoteServer(int result, bool a2)
{
  *(_BYTE *)(result + 445) = a2;
  return result;
}


unsigned __int8 *__fastcall MinecraftGame::resetStaticStates(MinecraftGame *this)
{
  HudHungerRenderer *v1; // r0@1
  unsigned __int8 *v2; // r0@1

  v1 = (HudHungerRenderer *)HudHeartRenderer::reloadTexutres(this);
  v2 = HudHungerRenderer::reloadTexutres(v1);
  return j_j_j__ZN18HudBubblesRenderer14reloadTexutresEv((HudBubblesRenderer *)v2);
}


void __fastcall MinecraftGame::joinRealmFromInvite(int a1, const Realms::World *a2)
{
  MinecraftGame::joinRealmFromInvite(a1, a2);
}


int __fastcall MinecraftGame::setGenerateDocumentation(int result, bool a2)
{
  *(_BYTE *)(result + 548) = a2;
  return result;
}


void __fastcall MinecraftGame::joinRealmsGame(MinecraftGame *this, const Realms::World *a2, const Social::GameConnectionInfo *a3)
{
  MinecraftGame::joinRealmsGame(this, a2, a3);
}


int __fastcall MinecraftGame::isServerVisible(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  int v2; // r4@2
  int v3; // r1@3
  int v4; // r5@3
  int i; // r0@3
  int v6; // r1@5
  int v7; // r1@10
  int j; // r0@10
  Minecraft *v9; // r0@15
  Level *v10; // r0@15
  int v11; // r5@16
  unsigned int *v12; // r1@17
  unsigned int v13; // r0@19
  unsigned int *v14; // r6@23
  unsigned int v15; // r0@25
  Options *v17; // [sp+0h] [bp-18h]@16
  int v18; // [sp+4h] [bp-14h]@16

  v1 = this;
  if ( OfferRepository::isTrial(*((OfferRepository **)this + 74)) )
  {
    v2 = 0;
  }
  else
    v3 = *((_DWORD *)v1 + 55);
    v4 = (int)v1 + 216;
    for ( i = (int)v1 + 216; v3; v3 = *(_DWORD *)(v3 + 8) )
      i = v3;
    v6 = (int)v1 + 216;
    if ( i != v4 )
    {
      if ( *(_BYTE *)(i + 16) )
        i = (int)v1 + 216;
      v6 = i;
    }
    if ( ClientInstance::getLevel(*(ClientInstance **)(v6 + 20)) )
      v7 = *((_DWORD *)v1 + 55);
      for ( j = (int)v1 + 216; v7; v7 = *(_DWORD *)(v7 + 8) )
        j = v7;
      if ( j != v4 && !*(_BYTE *)(j + 16) )
        v4 = j;
      v9 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v4 + 20));
      v10 = (Level *)Minecraft::getLevel(v9);
      v2 = Level::hasLANBroadcast(v10);
    else
      MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v17, (int)v1);
      v2 = Options::getServerVisible(v17);
      v11 = v18;
      if ( v18 )
      {
        v12 = (unsigned int *)(v18 + 4);
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
          v14 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          if ( &pthread_create )
          {
            __dmb();
            do
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
          }
          else
            v15 = (*v14)--;
          if ( v15 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      }
  return v2;
}


MinecraftGame *__fastcall MinecraftGame::~MinecraftGame(MinecraftGame *this)
{
  MinecraftGame *v1; // r8@1
  __int64 v2; // r1@1
  ResourceLoadManager *v3; // r0@1
  ResourceLoadManager *v4; // r0@2
  ResourcePackRepository *v5; // r0@3
  ResourcePackRepository *v6; // r0@4
  WorldTemplateManager *v7; // r0@5
  WorldTemplateManager *v8; // r0@6
  GlobalResourcesCrashRecovery *v9; // r0@7
  _DWORD *v10; // r0@7
  int v11; // r7@7
  void (*v12)(void); // r3@7
  int v13; // r5@7
  int v14; // r0@10
  int v15; // r5@16
  unsigned int *v16; // r1@17
  unsigned int v17; // r0@19
  unsigned int *v18; // r6@23
  unsigned int v19; // r0@25
  SceneStack *v20; // r0@30
  SceneStack *v21; // r0@31
  int v22; // r0@32
  Social::MultiplayerServiceManager *v23; // r0@34
  Social::MultiplayerServiceManager *v24; // r0@35
  void (*v25)(void); // r3@36
  int v26; // r5@36
  int v27; // r0@39
  RealmsAPI *v28; // r0@44
  RealmsAPI *v29; // r0@45
  ServerInstance *v30; // r0@46
  ServerInstance *v31; // r0@47
  LevelLoader *v32; // r0@48
  LevelLoader *v33; // r0@49
  ExternalContentManager *v34; // r0@50
  ExternalContentManager *v35; // r0@51
  int v36; // r0@52
  int v37; // r0@54
  UIRepository *v38; // r0@56
  UIRepository *v39; // r0@57
  mce::TextureGroup *v40; // r0@58
  mce::TextureGroup *v41; // r0@59
  mce::TextureGroup *v42; // r0@60
  mce::TextureGroup *v43; // r0@61
  int v44; // r5@62
  unsigned int *v45; // r1@63
  unsigned int v46; // r0@65
  unsigned int *v47; // r6@69
  unsigned int v48; // r0@71
  AppPlatform *v49; // r0@76
  void *v50; // r0@76
  int v51; // r0@78
  int v52; // r1@79
  int v53; // r0@80
  int v54; // r0@82
  int v55; // r0@84
  int v56; // r0@86
  int v57; // r0@88
  PackSourceFactory *v58; // r0@90
  PackSourceFactory *v59; // r0@91
  I18n *v60; // r0@92
  Resource *v61; // r0@92
  int v62; // r6@92
  unsigned int *v63; // r1@93
  unsigned int v64; // r0@95
  unsigned int *v65; // r5@99
  unsigned int v66; // r0@101
  int v67; // r6@106
  int v68; // r6@108
  pthread_t *v69; // r6@110
  void (*v70)(void); // r3@113
  PackSourceFactory *v71; // r0@115
  PackSourceFactory *v72; // r0@116
  void *v73; // r0@117
  ResourceLoadManager *v74; // r0@119
  ResourceLoadManager *v75; // r0@120
  int v76; // r6@121
  unsigned int *v77; // r2@123
  signed int v78; // r1@125
  void *v79; // r7@131
  int v80; // r1@131
  void *v81; // r0@131
  char *v82; // r0@133
  unsigned __int64 *v83; // r5@136
  unsigned int *v84; // r2@138
  signed int v85; // r1@140
  unsigned __int64 *v86; // r7@146
  int v87; // r1@146
  void *v88; // r0@146
  char *v89; // r0@148
  ResourcePackInfoData *v90; // r0@151
  ResourcePackInfoData *v91; // r5@151
  ResourcePackInfoData *v92; // r0@156
  ResourcePackInfoData *v93; // r5@156
  int v94; // r1@161
  void *v95; // r0@161
  int v96; // r6@162
  unsigned int *v97; // r1@163
  unsigned int v98; // r0@165
  unsigned int *v99; // r5@169
  unsigned int v100; // r0@171
  int v101; // r1@176
  void *v102; // r0@176
  void *v103; // r0@177
  int v104; // r0@179
  ExternalContentManager *v105; // r0@181
  ExternalContentManager *v106; // r0@182
  LevelLoader *v107; // r0@183
  LevelLoader *v108; // r0@184
  int v109; // r0@185
  int v110; // r1@187
  void *v111; // r0@187
  int v112; // r1@188
  void *v113; // r0@188
  void *v114; // r0@189
  int v115; // r0@191
  int v116; // r0@193
  ActiveDirectoryIdentity *v117; // r0@195
  ActiveDirectoryIdentity *v118; // r0@196
  int v119; // r6@197
  unsigned int *v120; // r1@198
  unsigned int v121; // r0@200
  unsigned int *v122; // r5@204
  unsigned int v123; // r0@206
  RealmsAPI *v124; // r0@211
  RealmsAPI *v125; // r0@212
  int v126; // r6@213
  unsigned int *v127; // r1@214
  unsigned int v128; // r0@216
  unsigned int *v129; // r5@220
  unsigned int v130; // r0@222
  int v131; // r6@227
  unsigned int *v132; // r1@228
  unsigned int v133; // r0@230
  unsigned int *v134; // r5@234
  unsigned int v135; // r0@236
  int v136; // r6@241
  unsigned int *v137; // r1@242
  unsigned int v138; // r0@244
  unsigned int *v139; // r5@248
  unsigned int v140; // r0@250
  int v141; // r6@255
  unsigned int *v142; // r1@256
  unsigned int v143; // r0@258
  unsigned int *v144; // r5@262
  unsigned int v145; // r0@264
  int v146; // r0@269
  int v147; // r0@271
  int v148; // r0@273
  Social::MultiplayerServiceManager *v149; // r0@275
  Social::MultiplayerServiceManager *v150; // r0@276
  int v151; // r0@277
  int v152; // r0@279
  int v153; // r0@281
  int v154; // r0@283
  int v155; // r0@285
  int v156; // r1@287
  WorldTemplateManager *v157; // r0@289
  WorldTemplateManager *v158; // r0@290
  ResourcePackRepository *v159; // r0@291
  ResourcePackRepository *v160; // r0@292
  ThirdPartyServerRepository *v161; // r0@293
  void *v162; // r0@294
  int v163; // r0@295
  int v164; // r0@297
  int v165; // r0@299
  DownloadMonitor *v166; // r0@301
  DownloadMonitor *v167; // r0@302
  void **v168; // r6@303
  int v169; // r1@307
  void *v170; // r0@307
  void *v171; // r0@308
  int v172; // r0@310
  FilePathManager *v173; // r0@312
  FilePathManager *v174; // r0@313
  int v175; // r0@314
  DebugUdpProxy *v176; // r0@316
  DebugUdpProxy *v177; // r0@317
  int v178; // r6@318
  void (*v179)(void); // r3@319
  int v180; // r6@322
  void (*v181)(void); // r3@323
  int v182; // r0@326
  int v183; // r5@328
  unsigned int *v184; // r1@329
  unsigned int v185; // r0@331
  unsigned int *v186; // r6@335
  unsigned int v187; // r0@337
  ServerInstance *v188; // r0@342
  ServerInstance *v189; // r0@343
  int v190; // r5@344
  void (*v191)(void); // r3@345
  int v192; // r7@345
  char *v193; // r0@348
  int v194; // r5@351
  void (*v195)(void); // r3@352
  int v196; // r6@352
  char *v197; // r0@355
  CachedScenes *v198; // r0@358
  CachedScenes *v199; // r0@359
  SceneStack *v200; // r0@360
  SceneStack *v201; // r0@361
  int v202; // r0@362
  int v203; // r0@364
  int v204; // r1@366
  EmoticonManager *v205; // r0@368
  EmoticonManager *v206; // r0@369
  int v207; // r0@370
  int v208; // r0@372
  int v209; // r0@374
  int v210; // r0@376
  UIRepository *v211; // r0@378
  UIRepository *v212; // r0@379
  mce::TextureGroup *v213; // r0@380
  mce::TextureGroup *v214; // r0@381
  mce::TextureGroup *v215; // r0@382
  mce::TextureGroup *v216; // r0@383
  int v217; // r1@384
  int v218; // r0@386
  int v219; // r0@388
  int v220; // r0@390
  int v221; // r0@392
  unsigned int *v223; // r2@395
  signed int v224; // r1@397
  unsigned int *v225; // r2@399
  signed int v226; // r1@401
  unsigned int *v227; // r2@403
  signed int v228; // r1@405
  unsigned int *v229; // r2@407
  signed int v230; // r1@409
  unsigned int *v231; // r2@411
  signed int v232; // r1@413
  void *v233; // [sp+8h] [bp-50h]@36
  int (__fastcall *v234)(void **, void **, int); // [sp+10h] [bp-48h]@36
  int (__fastcall *v235)(int, ClientInstance *); // [sp+14h] [bp-44h]@36
  Options *v236; // [sp+18h] [bp-40h]@16
  int v237; // [sp+1Ch] [bp-3Ch]@16
  _DWORD *v238; // [sp+20h] [bp-38h]@7
  void (*v239)(void); // [sp+28h] [bp-30h]@7
  Options *(__fastcall *v240)(MinecraftGame ***, ClientInstance *); // [sp+2Ch] [bp-2Ch]@7

  v1 = this;
  *(_DWORD *)this = &off_26D646C;
  LODWORD(v2) = &off_26D6514;
  HIDWORD(v2) = &off_26D653C;
  *((_QWORD *)this + 2) = v2;
  *((_DWORD *)this + 6) = &off_26D65B8;
  MinecraftGame::_joinServerInstanceThread(this);
  v3 = (ResourceLoadManager *)*((_DWORD *)v1 + 165);
  *((_DWORD *)v1 + 165) = 0;
  if ( v3 )
  {
    v4 = ResourceLoadManager::~ResourceLoadManager(v3);
    operator delete((void *)v4);
  }
  *((_DWORD *)v1 + 80) = 0;
  v5 = (ResourcePackRepository *)*((_DWORD *)v1 + 78);
  *((_DWORD *)v1 + 78) = 0;
  if ( v5 )
    v6 = ResourcePackRepository::~ResourcePackRepository(v5);
    operator delete((void *)v6);
  v7 = (WorldTemplateManager *)*((_DWORD *)v1 + 79);
  *((_DWORD *)v1 + 79) = 0;
  if ( v7 )
    v8 = WorldTemplateManager::~WorldTemplateManager(v7);
    operator delete((void *)v8);
  SaveTransactionManager::deleteShowIconFunction(*((SaveTransactionManager **)v1 + 51));
  (*(void (**)(void))(**((_DWORD **)v1 + 59) + 16))();
  v9 = (GlobalResourcesCrashRecovery *)DevConsoleLogger::terminate(*((DevConsoleLogger **)v1 + 81));
  GlobalResourcesCrashRecovery::deleteResourceLoadLock(v9);
  MinecraftGame::_unregisterOnInitUriListeners(v1);
  v10 = operator new(4u);
  v11 = (int)v1 + 216;
  *v10 = v1;
  v12 = (void (*)(void))sub_C1417E;
  v238 = v10;
  v239 = (void (*)(void))sub_C1417E;
  v240 = sub_C14176;
  v13 = *((_DWORD *)v1 + 56);
  if ( (MinecraftGame *)v13 == (MinecraftGame *)((char *)v1 + 216) )
    goto LABEL_438;
  do
    if ( !v12 )
      sub_DA7654();
    v240((MinecraftGame ***)&v238, *(ClientInstance **)(v13 + 20));
    v14 = sub_DA7F5C(v13);
    v12 = v239;
    v13 = v14;
  while ( v14 != v11 );
  if ( v239 )
LABEL_438:
    v12();
  if ( *((_DWORD *)v1 + 62) )
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v236, (int)v1);
    Options::unregisterObserver(v236, *((void **)v1 + 62));
    v15 = v237;
    if ( v237 )
    {
      v16 = (unsigned int *)(v237 + 4);
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
    }
  v20 = (SceneStack *)*((_DWORD *)v1 + 26);
  *((_DWORD *)v1 + 26) = 0;
  if ( v20 )
    v21 = SceneStack::~SceneStack(v20);
    operator delete((void *)v21);
  v22 = *((_DWORD *)v1 + 13);
  *((_DWORD *)v1 + 13) = 0;
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  v23 = (Social::MultiplayerServiceManager *)*((_DWORD *)v1 + 87);
  *((_DWORD *)v1 + 87) = 0;
  if ( v23 )
    v24 = Social::MultiplayerServiceManager::~MultiplayerServiceManager(v23);
    operator delete((void *)v24);
  v233 = operator new(1u);
  v25 = (void (*)(void))sub_C141BA;
  v234 = sub_C141BA;
  v235 = sub_C141B4;
  v26 = *((_DWORD *)v1 + 56);
  if ( v26 == v11 )
    goto LABEL_439;
    if ( !v25 )
    v235((int)&v233, *(ClientInstance **)(v26 + 20));
    v27 = sub_DA7F5C(v26);
    v25 = (void (*)(void))v234;
    v26 = v27;
  while ( v27 != v11 );
  if ( v234 )
LABEL_439:
    v25();
  v28 = (RealmsAPI *)*((_DWORD *)v1 + 99);
  *((_DWORD *)v1 + 99) = 0;
  if ( v28 )
    v29 = RealmsAPI::~RealmsAPI(v28);
    operator delete((void *)v29);
  v30 = (ServerInstance *)*((_DWORD *)v1 + 50);
  *((_DWORD *)v1 + 50) = 0;
  if ( v30 )
    v31 = ServerInstance::~ServerInstance(v30);
    operator delete((void *)v31);
  v32 = (LevelLoader *)*((_DWORD *)v1 + 128);
  *((_DWORD *)v1 + 128) = 0;
  if ( v32 )
    v33 = LevelLoader::~LevelLoader(v32);
    operator delete((void *)v33);
  v34 = (ExternalContentManager *)*((_DWORD *)v1 + 129);
  *((_DWORD *)v1 + 129) = 0;
  if ( v34 )
    v35 = ExternalContentManager::~ExternalContentManager(v34);
    operator delete((void *)v35);
  v36 = *((_DWORD *)v1 + 18);
  *((_DWORD *)v1 + 18) = 0;
  if ( v36 )
    (*(void (**)(void))(*(_DWORD *)v36 + 4))();
  v37 = *((_DWORD *)v1 + 12);
  *((_DWORD *)v1 + 12) = 0;
  if ( v37 )
    (*(void (**)(void))(*(_DWORD *)v37 + 4))();
  v38 = (UIRepository *)*((_DWORD *)v1 + 17);
  *((_DWORD *)v1 + 17) = 0;
  if ( v38 )
    v39 = UIRepository::~UIRepository(v38);
    operator delete((void *)v39);
  v40 = (mce::TextureGroup *)*((_DWORD *)v1 + 15);
  *((_DWORD *)v1 + 15) = 0;
  if ( v40 )
    v41 = mce::TextureGroup::~TextureGroup(v40);
    operator delete((void *)v41);
  v42 = (mce::TextureGroup *)*((_DWORD *)v1 + 16);
  *((_DWORD *)v1 + 16) = 0;
  if ( v42 )
    v43 = mce::TextureGroup::~TextureGroup(v42);
    operator delete((void *)v43);
  *((_DWORD *)v1 + 95) = 0;
  v44 = *((_DWORD *)v1 + 96);
  *((_DWORD *)v1 + 96) = 0;
  if ( v44 )
    v45 = (unsigned int *)(v44 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
    else
      v46 = (*v45)--;
    if ( v46 == 1 )
      v47 = (unsigned int *)(v44 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
  AppPlatformListener::terminate((AppPlatformListener *)&mce::RenderMaterialGroup::common);
  v49 = AppPlatformListener::terminate((AppPlatformListener *)&mce::RenderMaterialGroup::switchable);
  MinecraftGame::teardownRenderer(v49, *((_BYTE *)v1 + 669));
  v50 = (void *)mce::Singleton<mce::RendererSettings>::mInstance;
  mce::Singleton<mce::RendererSettings>::mInstance = 0;
  if ( v50 )
    operator delete(v50);
  v51 = *((_DWORD *)v1 + 103);
  if ( v51 )
    v52 = *((_BYTE *)v1 + 669);
    (*(void (**)(void))(*(_DWORD *)v51 + 24))();
    if ( *((_BYTE *)v1 + 669) )
      v53 = *((_DWORD *)v1 + 103);
      *((_DWORD *)v1 + 103) = 0;
      if ( v53 )
        (*(void (**)(void))(*(_DWORD *)v53 + 4))();
  v54 = *((_DWORD *)v1 + 126);
  *((_DWORD *)v1 + 126) = 0;
  if ( v54 )
    (*(void (**)(void))(*(_DWORD *)v54 + 4))();
  v55 = *((_DWORD *)v1 + 66);
  *((_DWORD *)v1 + 66) = 0;
  if ( v55 )
    (*(void (**)(void))(*(_DWORD *)v55 + 4))();
  v56 = *((_DWORD *)v1 + 86);
  *((_DWORD *)v1 + 86) = 0;
  if ( v56 )
    (*(void (**)(void))(*(_DWORD *)v56 + 4))();
  v57 = *((_DWORD *)v1 + 63);
  *((_DWORD *)v1 + 63) = 0;
  if ( v57 )
    (*(void (**)(void))(*(_DWORD *)v57 + 4))();
  v58 = (PackSourceFactory *)*((_DWORD *)v1 + 169);
  *((_DWORD *)v1 + 169) = 0;
  if ( v58 )
    v59 = PackSourceFactory::~PackSourceFactory(v58);
    operator delete((void *)v59);
  DebugLog::closeLog(v58);
  v60 = (I18n *)ProfilerLite::shutdown((ProfilerLite *)&ProfilerLite::gProfilerLiteInstance);
  v61 = (Resource *)I18n::clearLanguages(v60);
  Resource::clearLoaders(v61);
  mce::TextureGroup::mCanLoadTextures = 0;
  *((_DWORD *)v1 + 51) = 0;
  v62 = *((_DWORD *)v1 + 52);
  *((_DWORD *)v1 + 52) = 0;
  if ( v62 )
    v63 = (unsigned int *)(v62 + 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 == 1 )
      v65 = (unsigned int *)(v62 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v62 + 8))(v62);
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
        v66 = (*v65)--;
      if ( v66 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v62 + 12))(v62);
  std::_Rb_tree<unsigned char,std::pair<unsigned char const,std::shared_ptr<ClientInstance>>,std::_Select1st<std::pair<unsigned char const,std::shared_ptr<ClientInstance>>>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<ClientInstance>>>>::_M_erase(
    (int)v1 + 212,
    *((_DWORD *)v1 + 55));
  *((_DWORD *)v1 + 55) = 0;
  *((_DWORD *)v1 + 56) = v11;
  *((_DWORD *)v1 + 57) = v11;
  *((_DWORD *)v1 + 58) = 0;
  v67 = *((_DWORD *)v1 + 177);
  if ( v67 )
    sub_DA7F4C((pthread_cond_t *)(v67 + 4));
    operator delete((void *)v67);
  *((_DWORD *)v1 + 177) = 0;
  v68 = *((_DWORD *)v1 + 176);
  if ( v68 )
    sub_DA7F4C((pthread_cond_t *)(v68 + 4));
    operator delete((void *)v68);
  *((_DWORD *)v1 + 176) = 0;
  v69 = (pthread_t *)*((_DWORD *)v1 + 175);
  if ( v69 )
    if ( !pthread_equal(*v69, 0) )
      std::terminate();
    operator delete(v69);
  *((_DWORD *)v1 + 175) = 0;
  v70 = (void (*)(void))*((_DWORD *)v1 + 172);
  if ( v70 )
    v70();
  v71 = (PackSourceFactory *)*((_DWORD *)v1 + 169);
  if ( v71 )
    v72 = PackSourceFactory::~PackSourceFactory(v71);
    operator delete((void *)v72);
  v73 = (void *)*((_DWORD *)v1 + 168);
  if ( v73 )
    operator delete(v73);
  *((_DWORD *)v1 + 168) = 0;
  v74 = (ResourceLoadManager *)*((_DWORD *)v1 + 165);
  if ( v74 )
    v75 = ResourceLoadManager::~ResourceLoadManager(v74);
    operator delete((void *)v75);
  v76 = *((_DWORD *)v1 + 159);
  while ( v76 )
    v79 = (void *)v76;
    v80 = *(_DWORD *)(v76 + 8);
    v76 = *(_DWORD *)v76;
    v81 = (void *)(v80 - 12);
    if ( (int *)(v80 - 12) != &dword_28898C0 )
      v77 = (unsigned int *)(v80 - 4);
          v78 = __ldrex(v77);
        while ( __strex(v78 - 1, v77) );
        v78 = (*v77)--;
      if ( v78 <= 0 )
        j_j_j_j_j__ZdlPv_9(v81);
    operator delete(v79);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 628), 4 * (*(_QWORD *)((char *)v1 + 628) >> 32));
  *((_DWORD *)v1 + 159) = 0;
  *((_DWORD *)v1 + 160) = 0;
  v82 = (char *)*((_DWORD *)v1 + 157);
  if ( v82 && (char *)v1 + 652 != v82 )
    operator delete(v82);
  v83 = (unsigned __int64 *)*((_DWORD *)v1 + 152);
  while ( v83 )
    v86 = v83;
    v87 = *v83 >> 32;
    v83 = (unsigned __int64 *)*v83;
    v88 = (void *)(v87 - 12);
    if ( (int *)(v87 - 12) != &dword_28898C0 )
      v84 = (unsigned int *)(v87 - 4);
          v85 = __ldrex(v84);
        while ( __strex(v85 - 1, v84) );
        v85 = (*v84)--;
      if ( v85 <= 0 )
        j_j_j_j_j__ZdlPv_9(v88);
    operator delete(v86);
  _aeabi_memclr4(*((_QWORD *)v1 + 75), 4 * (*((_QWORD *)v1 + 75) >> 32));
  *((_DWORD *)v1 + 152) = 0;
  *((_DWORD *)v1 + 153) = 0;
  v89 = (char *)*((_DWORD *)v1 + 150);
  if ( v89 && (char *)v1 + 624 != v89 )
    operator delete(v89);
  v91 = (ResourcePackInfoData *)(*(_QWORD *)((char *)v1 + 580) >> 32);
  v90 = (ResourcePackInfoData *)*(_QWORD *)((char *)v1 + 580);
  if ( v90 != v91 )
    do
      v90 = (ResourcePackInfoData *)((char *)ResourcePackInfoData::~ResourcePackInfoData(v90) + 64);
    while ( v91 != v90 );
    v90 = (ResourcePackInfoData *)*((_DWORD *)v1 + 145);
  if ( v90 )
    operator delete((void *)v90);
  v93 = (ResourcePackInfoData *)(*((_QWORD *)v1 + 71) >> 32);
  v92 = (ResourcePackInfoData *)*((_QWORD *)v1 + 71);
  if ( v92 != v93 )
      v92 = (ResourcePackInfoData *)((char *)ResourcePackInfoData::~ResourcePackInfoData(v92) + 64);
    while ( v93 != v92 );
    v92 = (ResourcePackInfoData *)*((_DWORD *)v1 + 142);
  if ( v92 )
    operator delete((void *)v92);
  v94 = *((_DWORD *)v1 + 140);
  v95 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v223 = (unsigned int *)(v94 - 4);
        v224 = __ldrex(v223);
      while ( __strex(v224 - 1, v223) );
      v224 = (*v223)--;
    if ( v224 <= 0 )
      j_j_j_j_j__ZdlPv_9(v95);
  v96 = *((_DWORD *)v1 + 139);
  if ( v96 )
    v97 = (unsigned int *)(v96 + 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 == 1 )
      v99 = (unsigned int *)(v96 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v96 + 8))(v96);
          v100 = __ldrex(v99);
        while ( __strex(v100 - 1, v99) );
        v100 = (*v99)--;
      if ( v100 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v96 + 12))(v96);
  v101 = *((_DWORD *)v1 + 133);
  v102 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v225 = (unsigned int *)(v101 - 4);
        v226 = __ldrex(v225);
      while ( __strex(v226 - 1, v225) );
      v226 = (*v225)--;
    if ( v226 <= 0 )
      j_j_j_j_j__ZdlPv_9(v102);
  v103 = (void *)*((_DWORD *)v1 + 131);
  if ( v103 )
    operator delete(v103);
  *((_DWORD *)v1 + 131) = 0;
  v104 = *((_DWORD *)v1 + 130);
  if ( v104 )
    (*(void (**)(void))(*(_DWORD *)v104 + 4))();
  *((_DWORD *)v1 + 130) = 0;
  v105 = (ExternalContentManager *)*((_DWORD *)v1 + 129);
  if ( v105 )
    v106 = ExternalContentManager::~ExternalContentManager(v105);
    operator delete((void *)v106);
  v107 = (LevelLoader *)*((_DWORD *)v1 + 128);
  if ( v107 )
    v108 = LevelLoader::~LevelLoader(v107);
    operator delete((void *)v108);
  v109 = *((_DWORD *)v1 + 126);
  if ( v109 )
    (*(void (**)(void))(*(_DWORD *)v109 + 4))();
  v110 = *((_DWORD *)v1 + 121);
  v111 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v227 = (unsigned int *)(v110 - 4);
        v228 = __ldrex(v227);
      while ( __strex(v228 - 1, v227) );
      v228 = (*v227)--;
    if ( v228 <= 0 )
      j_j_j_j_j__ZdlPv_9(v111);
  v112 = *((_DWORD *)v1 + 120);
  v113 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v229 = (unsigned int *)(v112 - 4);
        v230 = __ldrex(v229);
      while ( __strex(v230 - 1, v229) );
      v230 = (*v229)--;
    if ( v230 <= 0 )
      j_j_j_j_j__ZdlPv_9(v113);
  v114 = (void *)*((_DWORD *)v1 + 113);
  if ( v114 )
    operator delete(v114);
  *((_DWORD *)v1 + 113) = 0;
  std::_Rb_tree<unsigned char,unsigned char,std::_Identity<unsigned char>,std::less<unsigned char>,std::allocator<unsigned char>>::_M_erase(
    (int)v1 + 420,
    *((_DWORD *)v1 + 107));
  v115 = *((_DWORD *)v1 + 104);
  if ( v115 )
    (*(void (**)(void))(*(_DWORD *)v115 + 4))();
  *((_DWORD *)v1 + 104) = 0;
  v116 = *((_DWORD *)v1 + 103);
  if ( v116 )
    (*(void (**)(void))(*(_DWORD *)v116 + 4))();
  *((_DWORD *)v1 + 103) = 0;
  v117 = (ActiveDirectoryIdentity *)*((_DWORD *)v1 + 102);
  if ( v117 )
    v118 = ActiveDirectoryIdentity::~ActiveDirectoryIdentity(v117);
    operator delete((void *)v118);
  *((_DWORD *)v1 + 102) = 0;
  v119 = *((_DWORD *)v1 + 101);
  if ( v119 )
    v120 = (unsigned int *)(v119 + 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 == 1 )
      v122 = (unsigned int *)(v119 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v119 + 8))(v119);
          v123 = __ldrex(v122);
        while ( __strex(v123 - 1, v122) );
        v123 = (*v122)--;
      if ( v123 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v119 + 12))(v119);
  v124 = (RealmsAPI *)*((_DWORD *)v1 + 99);
  if ( v124 )
    v125 = RealmsAPI::~RealmsAPI(v124);
    operator delete((void *)v125);
  v126 = *((_DWORD *)v1 + 98);
  if ( v126 )
    v127 = (unsigned int *)(v126 + 4);
        v128 = __ldrex(v127);
      while ( __strex(v128 - 1, v127) );
      v128 = (*v127)--;
    if ( v128 == 1 )
      v129 = (unsigned int *)(v126 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v126 + 8))(v126);
          v130 = __ldrex(v129);
        while ( __strex(v130 - 1, v129) );
        v130 = (*v129)--;
      if ( v130 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v126 + 12))(v126);
  v131 = *((_DWORD *)v1 + 96);
  if ( v131 )
    v132 = (unsigned int *)(v131 + 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 == 1 )
      v134 = (unsigned int *)(v131 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v131 + 8))(v131);
          v135 = __ldrex(v134);
        while ( __strex(v135 - 1, v134) );
        v135 = (*v134)--;
      if ( v135 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v131 + 12))(v131);
  v136 = *((_DWORD *)v1 + 94);
  if ( v136 )
    v137 = (unsigned int *)(v136 + 4);
        v138 = __ldrex(v137);
      while ( __strex(v138 - 1, v137) );
      v138 = (*v137)--;
    if ( v138 == 1 )
      v139 = (unsigned int *)(v136 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v136 + 8))(v136);
          v140 = __ldrex(v139);
        while ( __strex(v140 - 1, v139) );
        v140 = (*v139)--;
      if ( v140 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v136 + 12))(v136);
  v141 = *((_DWORD *)v1 + 92);
  if ( v141 )
    v142 = (unsigned int *)(v141 + 4);
        v143 = __ldrex(v142);
      while ( __strex(v143 - 1, v142) );
      v143 = (*v142)--;
    if ( v143 == 1 )
      v144 = (unsigned int *)(v141 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v141 + 8))(v141);
          v145 = __ldrex(v144);
        while ( __strex(v145 - 1, v144) );
        v145 = (*v144)--;
      if ( v145 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v141 + 12))(v141);
  v146 = *((_DWORD *)v1 + 90);
  if ( v146 )
    (*(void (**)(void))(*(_DWORD *)v146 + 4))();
  *((_DWORD *)v1 + 90) = 0;
  v147 = *((_DWORD *)v1 + 89);
  if ( v147 )
    (*(void (**)(void))(*(_DWORD *)v147 + 4))();
  *((_DWORD *)v1 + 89) = 0;
  v148 = *((_DWORD *)v1 + 88);
  if ( v148 )
    (*(void (**)(void))(*(_DWORD *)v148 + 4))();
  *((_DWORD *)v1 + 88) = 0;
  v149 = (Social::MultiplayerServiceManager *)*((_DWORD *)v1 + 87);
  if ( v149 )
    v150 = Social::MultiplayerServiceManager::~MultiplayerServiceManager(v149);
    operator delete((void *)v150);
  v151 = *((_DWORD *)v1 + 86);
  if ( v151 )
    (*(void (**)(void))(*(_DWORD *)v151 + 4))();
  v152 = *((_DWORD *)v1 + 85);
  if ( v152 )
    (*(void (**)(void))(*(_DWORD *)v152 + 4))();
  *((_DWORD *)v1 + 85) = 0;
  v153 = *((_DWORD *)v1 + 84);
  if ( v153 )
    (*(void (**)(void))(*(_DWORD *)v153 + 4))();
  *((_DWORD *)v1 + 84) = 0;
  v154 = *((_DWORD *)v1 + 83);
  if ( v154 )
    (*(void (**)(void))(*(_DWORD *)v154 + 4))();
  *((_DWORD *)v1 + 83) = 0;
  v155 = *((_DWORD *)v1 + 82);
  if ( v155 )
    (*(void (**)(void))(*(_DWORD *)v155 + 4))();
  *((_DWORD *)v1 + 82) = 0;
  v156 = *((_DWORD *)v1 + 81);
  if ( v156 )
    std::default_delete<DevConsoleLogger>::operator()((int)v1 + 324, v156);
  *((_DWORD *)v1 + 81) = 0;
  v157 = (WorldTemplateManager *)*((_DWORD *)v1 + 79);
  if ( v157 )
    v158 = WorldTemplateManager::~WorldTemplateManager(v157);
    operator delete((void *)v158);
  v159 = (ResourcePackRepository *)*((_DWORD *)v1 + 78);
  if ( v159 )
    v160 = ResourcePackRepository::~ResourcePackRepository(v159);
    operator delete((void *)v160);
  v161 = (ThirdPartyServerRepository *)*((_DWORD *)v1 + 77);
  if ( v161 )
    v162 = (void *)ThirdPartyServerRepository::~ThirdPartyServerRepository(v161);
    operator delete(v162);
  *((_DWORD *)v1 + 77) = 0;
  v163 = *((_DWORD *)v1 + 76);
  if ( v163 )
    (*(void (**)(void))(*(_DWORD *)v163 + 4))();
  *((_DWORD *)v1 + 76) = 0;
  v164 = *((_DWORD *)v1 + 75);
  if ( v164 )
    (*(void (**)(void))(*(_DWORD *)v164 + 4))();
  *((_DWORD *)v1 + 75) = 0;
  v165 = *((_DWORD *)v1 + 74);
  if ( v165 )
    (*(void (**)(void))(*(_DWORD *)v165 + 4))();
  *((_DWORD *)v1 + 74) = 0;
  v166 = (DownloadMonitor *)*((_DWORD *)v1 + 73);
  if ( v166 )
    v167 = DownloadMonitor::~DownloadMonitor(v166);
    operator delete((void *)v167);
  *((_DWORD *)v1 + 73) = 0;
  v168 = (void **)*((_DWORD *)v1 + 72);
  if ( v168 )
    if ( *v168 )
      operator delete(*v168);
    operator delete(v168);
  *((_DWORD *)v1 + 72) = 0;
  v169 = *((_DWORD *)v1 + 69);
  v170 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v231 = (unsigned int *)(v169 - 4);
        v232 = __ldrex(v231);
      while ( __strex(v232 - 1, v231) );
      v232 = (*v231)--;
    if ( v232 <= 0 )
      j_j_j_j_j__ZdlPv_9(v170);
  v171 = (void *)*((_DWORD *)v1 + 67);
  if ( v171 )
    operator delete(v171);
  *((_DWORD *)v1 + 67) = 0;
  v172 = *((_DWORD *)v1 + 66);
  if ( v172 )
    (*(void (**)(void))(*(_DWORD *)v172 + 4))();
  v173 = (FilePathManager *)*((_DWORD *)v1 + 65);
  if ( v173 )
    v174 = FilePathManager::~FilePathManager(v173);
    operator delete((void *)v174);
  *((_DWORD *)v1 + 65) = 0;
  std::unique_ptr<UIDefRepository,std::default_delete<UIDefRepository>>::~unique_ptr((_DWORD *)v1 + 64);
  v175 = *((_DWORD *)v1 + 63);
  if ( v175 )
    (*(void (**)(void))(*(_DWORD *)v175 + 4))();
  v176 = (DebugUdpProxy *)*((_DWORD *)v1 + 62);
  if ( v176 )
    v177 = DebugUdpProxy::~DebugUdpProxy(v176);
    operator delete((void *)v177);
  *((_DWORD *)v1 + 62) = 0;
  v178 = *((_DWORD *)v1 + 61);
  if ( v178 )
    v179 = *(void (**)(void))(v178 + 56);
    if ( v179 )
      v179();
    operator delete((void *)v178);
  *((_DWORD *)v1 + 61) = 0;
  v180 = *((_DWORD *)v1 + 60);
  if ( v180 )
    v181 = *(void (**)(void))(v180 + 56);
    if ( v181 )
      v181();
    operator delete((void *)v180);
  *((_DWORD *)v1 + 60) = 0;
  v182 = *((_DWORD *)v1 + 59);
  if ( v182 )
    (*(void (**)(void))(*(_DWORD *)v182 + 4))();
  *((_DWORD *)v1 + 59) = 0;
  v183 = *((_DWORD *)v1 + 52);
  if ( v183 )
    v184 = (unsigned int *)(v183 + 4);
        v185 = __ldrex(v184);
      while ( __strex(v185 - 1, v184) );
      v185 = (*v184)--;
    if ( v185 == 1 )
      v186 = (unsigned int *)(v183 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v183 + 8))(v183);
          v187 = __ldrex(v186);
        while ( __strex(v187 - 1, v186) );
        v187 = (*v186)--;
      if ( v187 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v183 + 12))(v183);
  v188 = (ServerInstance *)*((_DWORD *)v1 + 50);
  if ( v188 )
    v189 = ServerInstance::~ServerInstance(v188);
    operator delete((void *)v189);
    (int)v1 + 176,
    *((_DWORD *)v1 + 46));
  v190 = *((_DWORD *)v1 + 39);
  if ( v190 )
      v191 = *(void (**)(void))(v190 + 16);
      v192 = *(_DWORD *)v190;
      if ( v191 )
        v191();
      operator delete((void *)v190);
      v190 = v192;
    while ( v192 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 148), 4 * (*(_QWORD *)((char *)v1 + 148) >> 32));
  *((_DWORD *)v1 + 39) = 0;
  *((_DWORD *)v1 + 40) = 0;
  v193 = (char *)*((_DWORD *)v1 + 37);
  if ( v193 && (char *)v1 + 172 != v193 )
    operator delete(v193);
  v194 = *((_DWORD *)v1 + 32);
  if ( v194 )
      v195 = *(void (**)(void))(v194 + 16);
      v196 = *(_DWORD *)v194;
      if ( v195 )
        v195();
      operator delete((void *)v194);
      v194 = v196;
    while ( v196 );
  _aeabi_memclr4(*((_QWORD *)v1 + 15), 4 * (*((_QWORD *)v1 + 15) >> 32));
  *((_DWORD *)v1 + 32) = 0;
  *((_DWORD *)v1 + 33) = 0;
  v197 = (char *)*((_DWORD *)v1 + 30);
  if ( v197 && (char *)v1 + 144 != v197 )
    operator delete(v197);
  v198 = (CachedScenes *)*((_DWORD *)v1 + 27);
  if ( v198 )
    v199 = CachedScenes::~CachedScenes(v198);
    operator delete((void *)v199);
  *((_DWORD *)v1 + 27) = 0;
  v200 = (SceneStack *)*((_DWORD *)v1 + 26);
  if ( v200 )
    v201 = SceneStack::~SceneStack(v200);
    operator delete((void *)v201);
  v202 = *((_DWORD *)v1 + 25);
  if ( v202 )
    (*(void (**)(void))(*(_DWORD *)v202 + 4))();
  *((_DWORD *)v1 + 25) = 0;
  v203 = *((_DWORD *)v1 + 24);
  if ( v203 )
    (*(void (**)(void))(*(_DWORD *)v203 + 4))();
  *((_DWORD *)v1 + 24) = 0;
  v204 = *((_DWORD *)v1 + 23);
  if ( v204 )
    std::default_delete<TextToIconMapper>::operator()((int)v1 + 92, v204);
  *((_DWORD *)v1 + 23) = 0;
  v205 = (EmoticonManager *)*((_DWORD *)v1 + 22);
  if ( v205 )
    v206 = EmoticonManager::~EmoticonManager(v205);
    operator delete((void *)v206);
  *((_DWORD *)v1 + 22) = 0;
  v207 = *((_DWORD *)v1 + 21);
  if ( v207 )
    (*(void (**)(void))(*(_DWORD *)v207 + 4))();
  *((_DWORD *)v1 + 21) = 0;
  v208 = *((_DWORD *)v1 + 20);
  if ( v208 )
    (*(void (**)(void))(*(_DWORD *)v208 + 4))();
  *((_DWORD *)v1 + 20) = 0;
  v209 = *((_DWORD *)v1 + 19);
  if ( v209 )
    (*(void (**)(void))(*(_DWORD *)v209 + 4))();
  *((_DWORD *)v1 + 19) = 0;
  v210 = *((_DWORD *)v1 + 18);
  if ( v210 )
    (*(void (**)(void))(*(_DWORD *)v210 + 4))();
  v211 = (UIRepository *)*((_DWORD *)v1 + 17);
  if ( v211 )
    v212 = UIRepository::~UIRepository(v211);
    operator delete((void *)v212);
  v213 = (mce::TextureGroup *)*((_DWORD *)v1 + 16);
  if ( v213 )
    v214 = mce::TextureGroup::~TextureGroup(v213);
    operator delete((void *)v214);
  v215 = (mce::TextureGroup *)*((_DWORD *)v1 + 15);
  if ( v215 )
    v216 = mce::TextureGroup::~TextureGroup(v215);
    operator delete((void *)v216);
  v217 = *((_DWORD *)v1 + 14);
  if ( v217 )
    std::default_delete<ExternalServerFile>::operator()((int)v1 + 56, v217);
  *((_DWORD *)v1 + 14) = 0;
  v218 = *((_DWORD *)v1 + 13);
  if ( v218 )
    (*(void (**)(void))(*(_DWORD *)v218 + 4))();
  v219 = *((_DWORD *)v1 + 12);
  if ( v219 )
    (*(void (**)(void))(*(_DWORD *)v219 + 4))();
  v220 = *((_DWORD *)v1 + 11);
  if ( v220 )
    (*(void (**)(void))(*(_DWORD *)v220 + 4))();
  *((_DWORD *)v1 + 11) = 0;
  v221 = *((_DWORD *)v1 + 10);
  if ( v221 )
    (*(void (**)(void))(*(_DWORD *)v221 + 4))();
  *((_DWORD *)v1 + 10) = 0;
  MinecraftGraphics::~MinecraftGraphics((MinecraftGame *)((char *)v1 + 32));
  AppPlatformListener::~AppPlatformListener(v1);
  return v1;
}


int __fastcall MinecraftGame::getPrimaryClientInstance(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  return *((_DWORD *)v2 + 5);
}


int __fastcall MinecraftGame::isInRealm(MinecraftGame *this)
{
  Social::MultiplayerServiceManager *v1; // r0@1
  int result; // r0@2

  v1 = (Social::MultiplayerServiceManager *)*((_DWORD *)this + 87);
  if ( v1 )
    result = Social::MultiplayerServiceManager::isInRealm(v1);
  else
    result = 0;
  return result;
}


void __fastcall MinecraftGame::joinRealmsGame(MinecraftGame *this, const Realms::World *a2, const Social::GameConnectionInfo *a3)
{
  MinecraftGame *v3; // r6@1
  const Social::GameConnectionInfo *v4; // r4@1
  void *v5; // r0@1
  void *v6; // r0@2
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int v14; // [sp+0h] [bp-50h]@1
  int v15; // [sp+4h] [bp-4Ch]@3
  int v16; // [sp+8h] [bp-48h]@2
  int v17; // [sp+10h] [bp-40h]@1
  int v18; // [sp+14h] [bp-3Ch]@1

  v3 = this;
  v4 = a3;
  Social::MultiplayerServiceManager::setRealm(*((Social::MultiplayerServiceManager **)this + 87), a2);
  Social::GameConnectionInfo::GameConnectionInfo((Social::GameConnectionInfo *)&v14, v4);
  MinecraftGame::joinMultiplayer((int)v3, (int)&v14, 0);
  ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v18);
  v5 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v17 - 4);
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
      j_j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v16 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v15 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
}


Level *__fastcall MinecraftGame::waitAsyncSuspendWork(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1
  Minecraft *v4; // r0@6
  Level *result; // r0@6

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  v4 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)v2 + 5));
  result = (Level *)Minecraft::getLevel(v4);
  if ( result )
    result = (Level *)j_j_j__ZN5Level20waitAsyncSuspendWorkEv(result);
  else
    JUMPOUT(0, MinecraftGame::onAppPaused);
  return result;
}


void __fastcall MinecraftGame::teardownRenderer(MinecraftGame *this, int a2)
{
  int v2; // r4@1
  mce::RenderContext *v3; // r0@1
  int v4; // r5@1
  mce::GlobalConstantBufferManager *v5; // r0@3
  mce::GlobalConstantBufferManager *v6; // r0@4
  mce::ConstantBufferMetaDataManager *v7; // r0@5
  mce::ConstantBufferMetaDataManager *v8; // r0@6
  mce::RenderDevice *v9; // r0@8
  mce::DeviceInformationBase *v10; // r0@9

  v2 = a2;
  v3 = (mce::RenderContext *)mce::RenderContextImmediate::get(this);
  mce::RenderContext::enableThreadedSubmitMode(v3, 0);
  v4 = mce::Singleton<mce::GlobalConstantBuffers>::mInstance;
  mce::Singleton<mce::GlobalConstantBuffers>::mInstance = 0;
  if ( v4 )
  {
    mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::ConstantBufferConstantsBase *)(v4 + 736));
    mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::ConstantBufferConstantsBase *)(v4 + 720));
    mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::ConstantBufferConstantsBase *)(v4 + 684));
    mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::ConstantBufferConstantsBase *)(v4 + 668));
    mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::ConstantBufferConstantsBase *)(v4 + 628));
    mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::ConstantBufferConstantsBase *)(v4 + 616));
    mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::ConstantBufferConstantsBase *)(v4 + 588));
    mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::ConstantBufferConstantsBase *)(v4 + 548));
    mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::ConstantBufferConstantsBase *)(v4 + 516));
    mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::ConstantBufferConstantsBase *)(v4 + 36));
    mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::ConstantBufferConstantsBase *)(v4 + 12));
    mce::ConstantBufferConstantsBase::~ConstantBufferConstantsBase((mce::ConstantBufferConstantsBase *)v4);
    operator delete((void *)v4);
  }
  v5 = (mce::GlobalConstantBufferManager *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  mce::Singleton<mce::GlobalConstantBufferManager>::mInstance = 0;
  if ( v5 )
    v6 = mce::GlobalConstantBufferManager::~GlobalConstantBufferManager(v5);
    operator delete((void *)v6);
  v7 = (mce::ConstantBufferMetaDataManager *)mce::Singleton<mce::ConstantBufferMetaDataManager>::mInstance;
  mce::Singleton<mce::ConstantBufferMetaDataManager>::mInstance = 0;
  if ( v7 )
    v8 = mce::ConstantBufferMetaDataManager::~ConstantBufferMetaDataManager(v7);
    operator delete((void *)v8);
  if ( v2 == 1 )
    v9 = mce::Singleton<mce::RenderDevice>::mInstance;
    mce::Singleton<mce::RenderDevice>::mInstance = 0;
    if ( v9 )
    {
      v10 = mce::RenderDevice::~RenderDevice(v9);
      j_j_j__ZdlPv_3((void *)v10);
    }
}


int __fastcall MinecraftGame::getCurrentInputMode(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  return j_j_j__ZNK14ClientInstance19getCurrentInputModeEv(*((ClientInstance **)v2 + 5));
}


void __fastcall MinecraftGame::handleShowUpsellScreen(MinecraftGame *this, int a2)
{
  MinecraftGame *v2; // r6@1
  int v3; // r4@1
  char *v4; // r7@1
  int v5; // r1@1
  char *i; // r0@1
  char *v7; // r1@3
  int v8; // r0@7
  int v9; // r1@7
  int v10; // r5@7
  char *j; // r0@7
  int v12; // r0@12
  int v13; // r4@12
  unsigned int *v14; // r1@13
  unsigned int v15; // r0@15
  unsigned int *v16; // r5@19
  unsigned int v17; // r0@21
  char v18; // [sp+4h] [bp-1Ch]@12
  int v19; // [sp+8h] [bp-18h]@12

  v2 = this;
  v3 = a2;
  v4 = (char *)this + 216;
  v5 = *((_DWORD *)this + 55);
  for ( i = (char *)this + 216; v5; v5 = *(_DWORD *)(v5 + 8) )
    i = (char *)v5;
  v7 = v4;
  if ( i != v4 )
  {
    if ( i[16] )
      i = v4;
    v7 = i;
  }
  v8 = ClientInstance::getCurrentSceneStack(*((ClientInstance **)v7 + 5));
  v9 = *((_DWORD *)v2 + 55);
  v10 = v8;
  for ( j = v4; v9; v9 = *(_DWORD *)(v9 + 8) )
    j = (char *)v9;
  if ( j != v4 && !j[16] )
    v4 = j;
  v12 = ClientInstance::getSceneFactory(*((ClientInstance **)v4 + 5));
  SceneFactory::createUpsellScreen((SceneFactory *)&v18, v12, v3);
  SceneStack::pushScreen(v10, (int)&v18, 0);
  v13 = v19;
  if ( v19 )
    v14 = (unsigned int *)(v19 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
}


      if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(v57 + 24)) == v57 )
{
        v66 = *(SceneFactory **)(v57 + 76);
        v65 = (int *)(v57 + 76);
        v64 = SceneFactory::getCurrentSceneStack(v66);
      }
      else
      {
        v64 = *(_DWORD *)(v57 + 616);
      v67 = *v65;
      sub_DA7364((void **)&v146, "joining_multiplayer_external_server");
      v145 = v56;
      SceneFactory::createNetworkProgressScreen((unsigned __int64 *)&v147, v67, &v146, &v145);
      SceneStack::pushScreen(v64, (int)&v147, 0);
      v68 = v148;
      if ( v148 )
        v69 = (unsigned int *)(v148 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v70 = __ldrex(v69);
          while ( __strex(v70 - 1, v69) );
        }
        else
          v70 = (*v69)--;
        if ( v70 == 1 )
          v71 = (unsigned int *)(v68 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v68 + 8))(v68);
          if ( &pthread_create )
          {
            __dmb();
            do
              v72 = __ldrex(v71);
            while ( __strex(v72 - 1, v71) );
          }
          else
            v72 = (*v71)--;
          if ( v72 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v68 + 12))(v68);
      if ( v145 )
        (*(void (**)(void))(*(_DWORD *)v145 + 4))();
      v145 = 0;
      v73 = (void *)(v146 - 12);
      if ( (int *)(v146 - 12) != &dword_28898C0 )
        v101 = (unsigned int *)(v146 - 4);
            v102 = __ldrex(v101);
          while ( __strex(v102 - 1, v101) );
          v102 = (*v101)--;
        if ( v102 <= 0 )
          j_j_j_j_j__ZdlPv_9(v73);
      ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v168);
      v74 = (void *)(v167 - 12);
      if ( (int *)(v167 - 12) != &dword_28898C0 )
        v103 = (unsigned int *)(v167 - 4);
            v104 = __ldrex(v103);
          while ( __strex(v104 - 1, v103) );
          v104 = (*v103)--;
        if ( v104 <= 0 )
          j_j_j_j_j__ZdlPv_9(v74);
      v75 = (char *)(v166 - 12);
      if ( (int *)(v166 - 12) != &dword_28898C0 )
        v105 = (unsigned int *)(v166 - 4);
            v106 = __ldrex(v105);
          while ( __strex(v106 - 1, v105) );
          v106 = (*v105)--;
        if ( v106 <= 0 )
          j_j_j_j_j__ZdlPv_9(v75);
      v36 = (void *)(v165 - 12);
      if ( (int *)(v165 - 12) == &dword_28898C0 )
        goto LABEL_68;
      v37 = (unsigned int *)(v165 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        goto LABEL_154;
    }
    else
    {
      v24 = (ThirdPartyInfo *)(v2 + 6);
      if ( ThirdPartyInfo::isValid((ThirdPartyInfo *)(v2 + 6)) == 1 )
        v25 = MinecraftGame::getEventing(*(MinecraftGame **)(v3 + 24));
        sub_DA7B9C(&v174);
        v26 = *(_QWORD *)(v3 + 688);
        v27 = *(_QWORD *)&v174;
        v28 = ThirdPartyInfo::getCreatorName(v24);
        _R0 = _aeabi_l2d(v27 - v26, (unsigned __int64)(v27 - v26) >> 32);
        __asm
          VLDR            D0, =1.0e-9
          VMOV            D1, R0, R1
          VMUL.F64        D0, D1, D0
          VSTR            D0, [SP,#0x298+var_298]
        MinecraftEventing::fireServerConnectionEvent(
          COERCE_DOUBLE(__PAIR__(4, v25)),
          -1082130432,
          v34,
          v107,
          (const char **)v28);
        *(_DWORD *)(v3 + 696) = -1082130432;
      sub_DA7364((void **)&v170, "disconnectionScreen.invalidIP");
      sub_DA7364((void **)&v169, (const char *)&unk_257BC67);
      ClientInstance::_navigateToDisconnectScreen(v3, &v170, &v169);
      v35 = (void *)(v169 - 12);
      if ( (int *)(v169 - 12) != &dword_28898C0 )
        v85 = (unsigned int *)(v169 - 4);
            v86 = __ldrex(v85);
          while ( __strex(v86 - 1, v85) );
          v86 = (*v85)--;
        if ( v86 <= 0 )
          j_j_j_j_j__ZdlPv_9(v35);
      v36 = (void *)(v170 - 12);
      if ( (int *)(v170 - 12) == &dword_28898C0 )
LABEL_68:
        v76 = (void *)(v194 - 12);
        if ( (int *)(v194 - 12) != &dword_28898C0 )
          v81 = (unsigned int *)(v194 - 4);
              v82 = __ldrex(v81);
            while ( __strex(v82 - 1, v81) );
            v82 = (*v81)--;
          if ( v82 <= 0 )
            j_j_j_j_j__ZdlPv_9(v76);
        v77 = (void *)(v193 - 12);
        if ( (int *)(v193 - 12) != &dword_28898C0 )
          v83 = (unsigned int *)(v193 - 4);
              v84 = __ldrex(v83);
            while ( __strex(v84 - 1, v83) );
            v84 = (*v83)--;
          if ( v84 <= 0 )
            j_j_j_j_j__ZdlPv_9(v77);
        v42 = (void *)(v192 - 12);
        if ( (int *)(v192 - 12) == &dword_28898C0 )
          goto LABEL_71;
        v43 = (unsigned int *)(v192 - 4);
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
          goto LABEL_90;
        goto LABEL_89;
      v37 = (unsigned int *)(v170 - 4);
LABEL_154:
        if ( v38 <= 0 )
          j_j_j_j_j__ZdlPv_9(v36);
    v38 = (*v37)--;
    goto LABEL_154;
  }
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v23 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v23 = &ServiceLocator<AppPlatform>::mDefaultService;
  v39 = (*(int (**)(void))(**(_DWORD **)v23 + 644))();
  v40 = "permissions.MultiplayerSessionsOnConsole";
  if ( !v39 )
    v40 = "networkWorld.multiplayerPrivilegesBlocked";
  sub_DA7364((void **)&v173, v40);
  sub_DA7364((void **)&v172, (const char *)&unk_257BC67);
  ClientInstance::_navigateToDisconnectScreen(v3, &v172, &v173);
  v41 = (void *)(v172 - 12);
  if ( (int *)(v172 - 12) != &dword_28898C0 )
  {
    v79 = (unsigned int *)(v172 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j_j__ZdlPv_9(v41);
  v42 = (void *)(v173 - 12);
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v173 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
LABEL_90:
      if ( v44 <= 0 )
        j_j_j_j_j__ZdlPv_9(v42);
      goto LABEL_71;
LABEL_89:
    v44 = (*v43)--;
    goto LABEL_90;
LABEL_71:
  result = (char *)(_stack_chk_guard - v195);
  if ( _stack_chk_guard != v195 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall MinecraftGame::releaseMouse(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  int result; // r0@1
  int v3; // r1@2
  int v4; // r5@2
  int i; // r0@2
  int v6; // r1@4
  int v7; // r1@9
  int j; // r0@9
  LocalPlayer *v9; // r0@14
  void *v10; // r0@16

  v1 = this;
  result = *((_BYTE *)this + 112);
  if ( result )
  {
    v3 = *((_DWORD *)v1 + 55);
    v4 = (int)v1 + 216;
    for ( i = (int)v1 + 216; v3; v3 = *(_DWORD *)(v3 + 8) )
      i = v3;
    v6 = (int)v1 + 216;
    if ( i != v4 )
    {
      if ( *(_BYTE *)(i + 16) )
        i = (int)v1 + 216;
      v6 = i;
    }
    if ( ClientInstance::getLocalPlayer(*(ClientInstance **)(v6 + 20)) )
      v7 = *((_DWORD *)v1 + 55);
      for ( j = (int)v1 + 216; v7; v7 = *(_DWORD *)(v7 + 8) )
        j = v7;
      if ( j != v4 && !*(_BYTE *)(j + 16) )
        v4 = j;
      v9 = (LocalPlayer *)ClientInstance::getLocalPlayer(*(ClientInstance **)(v4 + 20));
      LocalPlayer::clearMovementState(v9);
    *((_BYTE *)v1 + 112) = 0;
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v10 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v10 = &ServiceLocator<AppPlatform>::mDefaultService;
    result = (*(int (**)(void))(**(_DWORD **)v10 + 76))();
  }
  return result;
}


unsigned int __fastcall MinecraftGame::setUISizeAndScale(MinecraftGame *this, int a2, int a3, float a4)
{
  signed int v4; // r7@1
  float v5; // r5@1
  int v6; // r6@1
  MinecraftGame *v7; // r4@1
  bool v8; // zf@1
  int v9; // r2@1
  Option *v10; // r0@9
  int v11; // r5@9
  int v12; // r6@9
  unsigned int *v13; // r1@10
  unsigned int v14; // r0@12
  unsigned int *v15; // r7@16
  unsigned int v16; // r0@18
  int v18; // [sp+4h] [bp-1Ch]@9
  int v19; // [sp+8h] [bp-18h]@9

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = this;
  v8 = MinecraftGame::isKindleFire(this, 1) == 0;
  v9 = v6;
  if ( !v8 )
    v9 = 580;
  if ( (unsigned int)(v6 - 560) >= 0x3D )
    v9 = v6;
  if ( !v9 )
    v9 = 140;
  if ( !v4 )
    v4 = 240;
  MinecraftGame::adjustClientsUISizeAndScale(v7, v4, v9, v5);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v18, (int)v7);
  v10 = (Option *)Options::get(v18, 3);
  v11 = Option::getFloat(v10);
  v12 = v19;
  if ( v19 )
  {
    v13 = (unsigned int *)(v19 + 4);
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
      v15 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  }
  return j_j_j__ZN13MinecraftGame12setDpadScaleEf(v7, *(float *)&v11);
}


void __fastcall MinecraftGame::unMuteAudio(MinecraftGame *this)
{
  MinecraftGame::unMuteAudio(this);
}


signed int __fastcall MinecraftGame::onLowMemory(MinecraftGame *this)
{
  SubChunk *v1; // r0@1

  v1 = (SubChunk *)LevelChunk::trimMemoryPool(this);
  return j_j_j__ZN8SubChunk14trimMemoryPoolEv(v1);
}


int __fastcall MinecraftGame::forEachClientInstance(int result, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r4@1

  v2 = *(_DWORD *)(result + 224);
  v3 = result + 216;
  v4 = a2;
  while ( v2 != v3 )
  {
    if ( !*(_DWORD *)(v4 + 8) )
      sub_DA7654();
    (*(void (__fastcall **)(_DWORD, _DWORD))(v4 + 12))(v4, *(_DWORD *)(v2 + 20));
    result = sub_DA7F5C(v2);
    v2 = result;
  }
  return result;
}


void __fastcall MinecraftGame::onActiveResourcePacksChanged(MinecraftGame *this, ResourcePackManager *a2, int a3, int a4, char a5, int a6, int a7, int a8, char a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  MinecraftGame::onActiveResourcePacksChanged(
    this,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24,
    a25,
    a26,
    a27,
    a28,
    a29,
    a30,
    a31,
    a32,
    a33,
    a34,
    a35,
    a36,
    a37,
    a38,
    a39,
    a40,
    a41,
    a42,
    a43,
    a44,
    a45,
    a46,
    a47,
    a48,
    a49,
    a50,
    a51,
    a52,
    a53,
    a54,
    a55,
    a56,
    a57,
    a58,
    a59,
    a60,
    a61,
    a62,
    a63);
}


unsigned int *__fastcall MinecraftGame::getPrimaryUserOptions(MinecraftGame *this, int a2)
{
  MinecraftGame *v2; // r4@1
  char *v3; // r0@2
  unsigned int *result; // r0@2
  unsigned int v5; // r1@5
  int v6; // r4@9
  unsigned int *v7; // r1@10
  unsigned int *v8; // r5@16
  Social::User *v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@9

  v2 = this;
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v9, *(_DWORD *)(a2 + 344));
  if ( v9 )
  {
    v3 = Social::User::getOptions(v9);
    *(_DWORD *)v2 = *(_DWORD *)v3;
    result = (unsigned int *)*((_DWORD *)v3 + 1);
    *((_DWORD *)v2 + 1) = result;
    if ( result )
    {
      ++result;
      if ( &pthread_create )
      {
        __dmb();
        do
          v5 = __ldrex(result);
        while ( __strex(v5 + 1, result) );
      }
      else
        ++*result;
    }
  }
  else
    result = 0;
    *(_DWORD *)v2 = 0;
    *((_DWORD *)v2 + 1) = 0;
  v6 = v10;
  if ( v10 )
    v7 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = (unsigned int *)__ldrex(v7);
      while ( __strex((unsigned int)result - 1, v7) );
    else
      result = (unsigned int *)(*v7)--;
    if ( result == (unsigned int *)1 )
      v8 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
          result = (unsigned int *)__ldrex(v8);
        while ( __strex((unsigned int)result - 1, v8) );
        result = (unsigned int *)(*v8)--;
      if ( result == (unsigned int *)1 )
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return result;
}


signed int __fastcall MinecraftGame::canAddSplitscreenSubClient(MinecraftGame *this, int a2)
{
  int v2; // r5@1
  MinecraftGame *v3; // r4@1
  unsigned int v4; // r6@3
  signed int result; // r0@4

  v2 = a2;
  v3 = this;
  if ( MinecraftGame::isSplitscreenJoinEnabled(this) == 1
    && *((_DWORD *)v3 + 49)
    && (v4 = *(_BYTE *)(*((_DWORD *)v3 + 47) + 16),
        !Social::UserManager::userHasClient(*((Social::UserManager **)v3 + 86), v2)) )
  {
    result = 0;
    if ( v4 <= *((_DWORD *)v3 + 125) )
      result = 1;
  }
  else
  return result;
}


void __fastcall MinecraftGame::onClientUISizeAndScaleChanged(MinecraftGame *this)
{
  if ( *((_BYTE *)this + 668) )
    j_j_j__ZN13MinecraftGame18setSmoothFontStyleEv(this);
  else
    JUMPOUT(*((_BYTE *)this + 668) != 0, MinecraftGame::adjustClientsUISizeAndScale);
}


void __fastcall MinecraftGame::navigateToPlayScreenFriendsTab(MinecraftGame *this)
{
  MinecraftGame *v1; // r5@1
  char *v2; // r6@1
  int v3; // r1@1
  char *i; // r0@1
  char *v5; // r1@3
  int v6; // r1@8
  char *v7; // r0@8
  int j; // r4@8
  int v9; // r0@13
  int v10; // r4@13
  unsigned int *v11; // r1@14
  unsigned int v12; // r0@16
  unsigned int *v13; // r5@20
  unsigned int v14; // r0@22
  int v15; // [sp+0h] [bp-18h]@13
  int v16; // [sp+4h] [bp-14h]@13

  v1 = this;
  v2 = (char *)this + 216;
  v3 = *((_DWORD *)this + 55);
  for ( i = (char *)this + 216; v3; v3 = *(_DWORD *)(v3 + 8) )
    i = (char *)v3;
  v5 = v2;
  if ( i != v2 )
  {
    if ( i[16] )
      i = v2;
    v5 = i;
  }
  if ( !ClientInstance::getLevel(*((ClientInstance **)v5 + 5)) )
    v6 = *((_DWORD *)v1 + 55);
    v7 = v2;
    for ( j = *((_DWORD *)v1 + 26); v6; v6 = *(_DWORD *)(v6 + 8) )
      v7 = (char *)v6;
    if ( v7 != v2 && !v7[16] )
      v2 = v7;
    v9 = ClientInstance::getSceneFactory(*((ClientInstance **)v2 + 5));
    SceneFactory::createPlayScreen((unsigned __int64 *)&v15, v9, 1);
    SceneStack::pushScreen(j, (int)&v15, 0);
    v10 = v16;
    if ( v16 )
    {
      v11 = (unsigned int *)(v16 + 4);
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
}


_DWORD *__fastcall MinecraftGame::resetThreadCallbacks(MinecraftGame *this)
{
  ResourcePackManager::unRegisterAllResourcePackListener(*((ResourcePackManager **)this + 80));
  return j_j_j__ZN9TaskGroup25sync_DEPRECATED_ASK_TOMMOEv_0(TaskGroup::DISK);
}


int __fastcall MinecraftGame::_cycleRoundRobinClientSubId(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  char *v2; // r5@1
  char *v3; // r2@1
  char *v4; // r0@1
  char *v5; // r3@2
  int v6; // r0@12
  int result; // r0@16

  v1 = this;
  v2 = (char *)this + 216;
  v3 = (char *)*((_DWORD *)this + 55);
  v4 = (char *)this + 216;
  if ( v3 )
  {
    v5 = v2;
    do
    {
      v4 = v3;
      while ( (unsigned __int8)v4[16] < (unsigned int)*((_BYTE *)v1 + 544) )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v5;
          goto LABEL_8;
        }
      }
      v3 = (char *)*((_DWORD *)v4 + 2);
      v5 = v4;
    }
    while ( v3 );
  }
LABEL_8:
  if ( v4 == v2 )
    goto LABEL_19;
  if ( *((_BYTE *)v1 + 544) < (unsigned int)(unsigned __int8)v4[16] )
    v4 = v2;
LABEL_19:
    v6 = *((_DWORD *)v1 + 56);
  else
    v6 = sub_DA7F5C((int)v4);
    if ( (char *)v6 == v2 )
      v6 = *((_DWORD *)v1 + 56);
  result = ClientInstance::getClientSubId(*(ClientInstance **)(v6 + 20));
  *((_BYTE *)v1 + 544) = result;
  return result;
}


int __fastcall MinecraftGame::tickInput(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  int v2; // r7@1
  void (*v3)(void); // r3@1
  int v4; // r5@1
  int v5; // r0@4
  int v6; // r1@9
  int v7; // r0@9
  int i; // r8@9
  int v9; // r1@11
  int v10; // r6@15
  char *v11; // r0@15
  int v12; // r1@15
  int v13; // r5@15
  int j; // r0@15
  int v15; // r1@17
  int v16; // r0@21
  int v17; // r0@21
  void (*v18)(void); // r3@21
  int v19; // r5@21
  int v20; // r0@24
  void *v22; // [sp+8h] [bp-38h]@21
  int (__fastcall *v23)(void **, void **, int); // [sp+10h] [bp-30h]@21
  int (__fastcall *v24)(int, ClientInstance *); // [sp+14h] [bp-2Ch]@21
  void *v25; // [sp+18h] [bp-28h]@1
  int (__fastcall *v26)(void **, void **, int); // [sp+20h] [bp-20h]@1
  int (__fastcall *v27)(int, ClientInstance *); // [sp+24h] [bp-1Ch]@1

  v1 = this;
  SceneStack::setScreenTickingFlag(*((SceneStack **)this + 26), 1);
  v2 = (int)v1 + 216;
  v25 = operator new(1u);
  v3 = (void (*)(void))sub_C19C04;
  v26 = sub_C19C04;
  v27 = sub_C19BF2;
  v4 = *((_DWORD *)v1 + 56);
  if ( (MinecraftGame *)v4 == (MinecraftGame *)((char *)v1 + 216) )
    goto LABEL_32;
  do
  {
    if ( !v3 )
      sub_DA7654();
    v27((int)&v25, *(ClientInstance **)(v4 + 20));
    v5 = sub_DA7F5C(v4);
    v3 = (void (*)(void))v26;
    v4 = v5;
  }
  while ( v5 != v2 );
  if ( v26 )
LABEL_32:
    v3();
  v6 = *((_DWORD *)v1 + 55);
  v7 = (int)v1 + 216;
  for ( i = *((_DWORD *)v1 + 63); v6; v6 = *(_DWORD *)(v6 + 8) )
    v7 = v6;
  v9 = (int)v1 + 216;
  if ( v7 != v2 )
    if ( *(_BYTE *)(v7 + 16) )
      v7 = (int)v1 + 216;
    v9 = v7;
  v10 = *(_DWORD *)(v9 + 20);
  v11 = Social::UserManager::retrieveCIDToClientMap(*((Social::UserManager **)v1 + 86));
  v12 = *((_DWORD *)v1 + 55);
  v13 = (int)v11;
  for ( j = (int)v1 + 216; v12; v12 = *(_DWORD *)(v12 + 8) )
    j = v12;
  v15 = (int)v1 + 216;
  if ( j != v2 )
    if ( *(_BYTE *)(j + 16) )
      j = (int)v1 + 216;
    v15 = j;
  v16 = ClientInstance::getHoloInput(*(ClientInstance **)(v15 + 20));
  v17 = (*(int (**)(void))(*(_DWORD *)v16 + 56))();
  MinecraftInputHandler::tick(i, v1, v10, v13, v17);
  SceneStack::setScreenTickingFlag(*((SceneStack **)v1 + 26), 0);
  v22 = operator new(1u);
  v18 = (void (*)(void))sub_C19C64;
  v23 = sub_C19C64;
  v24 = sub_C19C32;
  v19 = *((_DWORD *)v1 + 56);
  if ( v19 == v2 )
    goto LABEL_33;
    if ( !v18 )
    v24((int)&v22, *(ClientInstance **)(v19 + 20));
    v20 = sub_DA7F5C(v19);
    v18 = (void (*)(void))v23;
    v19 = v20;
  while ( v20 != v2 );
  if ( v23 )
LABEL_33:
    v18();
  return MinecraftInputHandler::clearInputDeviceQueues(*((MinecraftInputHandler **)v1 + 63));
}


int __fastcall MinecraftGame::getPrimaryMinecraft(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  return ClientInstance::getServerData(*((ClientInstance **)v2 + 5));
}


void __fastcall MinecraftGame::navigateToPlayScreenFriendsTab(MinecraftGame *this)
{
  MinecraftGame::navigateToPlayScreenFriendsTab(this);
}


void __fastcall MinecraftGame::~MinecraftGame(MinecraftGame *this)
{
  MinecraftGame *v1; // r0@1

  v1 = MinecraftGame::~MinecraftGame(this);
  j_j_j__ZdlPv_3((void *)v1);
}


__int64 __fastcall MinecraftGame::generateClientId(int a1, int a2, _BYTE *a3, int a4, __int64 a5, int a6)
{
  int v6; // r5@1
  _BYTE *v7; // r8@1
  Social::XboxLiveUserManager *v8; // r0@3
  int v9; // r4@4
  int v10; // r5@4
  unsigned int *v11; // r0@6
  unsigned int v12; // r1@8
  unsigned int v13; // r9@10
  unsigned int v14; // r10@10
  Social::XboxLiveUserManager *v15; // r0@11
  int v16; // r6@11
  int v17; // r4@11
  unsigned int *v18; // r1@12
  unsigned int v19; // r0@14
  unsigned int *v20; // r7@18
  unsigned int v21; // r0@20
  int v22; // r0@27
  __int64 v23; // kr00_8@27
  void *v24; // r0@27
  int v25; // r6@28
  unsigned int *v26; // r1@29
  unsigned int v27; // r0@31
  unsigned int *v28; // r4@35
  unsigned int v29; // r0@37
  __int64 v30; // r4@42
  unsigned int *v31; // r1@45
  unsigned int v32; // r0@47
  unsigned int *v33; // r6@51
  unsigned int v34; // r0@53
  char v35; // r0@60
  char v36; // r4@61
  unsigned __int64 v37; // r2@64
  char v38; // r0@66
  char *v39; // r0@67
  char *v40; // r0@72
  __int64 v41; // r0@75
  char v42; // r0@76
  void *v43; // r0@79
  int v44; // r6@87
  unsigned int *v45; // r1@88
  unsigned int v46; // r0@90
  unsigned int *v47; // r7@94
  unsigned int v48; // r0@96
  unsigned int *v50; // r2@104
  signed int v51; // r1@106
  unsigned int *v52; // r2@108
  signed int v53; // r1@110
  unsigned int *v54; // r2@112
  signed int v55; // r1@114
  char v56; // [sp+8h] [bp-EE0h]@77
  void (*v57)(void); // [sp+10h] [bp-ED8h]@77
  unsigned __int64 v58; // [sp+1Ch] [bp-ECCh]@77
  int *v59; // [sp+9E4h] [bp-504h]@76
  int v60; // [sp+9E8h] [bp-500h]@76
  char v61; // [sp+9ECh] [bp-4FCh]@76
  void (__cdecl *v62)(char *); // [sp+9F4h] [bp-4F4h]@81
  char v63; // [sp+9FCh] [bp-4ECh]@76
  void *v64; // [sp+A00h] [bp-4E8h]@76
  int v65; // [sp+A04h] [bp-4E4h]@76
  char v66; // [sp+A08h] [bp-4E0h]@73
  void (__cdecl *v67)(char *); // [sp+A10h] [bp-4D8h]@73
  char v68; // [sp+A1Ch] [bp-4CCh]@66
  void (*v69)(void); // [sp+A24h] [bp-4C4h]@70
  char v70; // [sp+A2Ch] [bp-4BCh]@66
  char *s; // [sp+A30h] [bp-4B8h]@64
  char v72; // [sp+A34h] [bp-4B4h]@61
  void (__cdecl *v73)(char *); // [sp+A3Ch] [bp-4ACh]@61
  char v74; // [sp+A44h] [bp-4A4h]@61
  unsigned __int64 v75; // [sp+A48h] [bp-4A0h]@61
  int *v76; // [sp+A54h] [bp-494h]@60
  int v77; // [sp+A58h] [bp-490h]@60
  char v78; // [sp+A5Ch] [bp-48Ch]@60
  void (__cdecl *v79)(char *); // [sp+A64h] [bp-484h]@84
  char v80; // [sp+A6Ch] [bp-47Ch]@60
  unsigned __int64 *v81; // [sp+A70h] [bp-478h]@60
  int v82; // [sp+A74h] [bp-474h]@60
  int v83; // [sp+A78h] [bp-470h]@60
  int v84; // [sp+A7Ch] [bp-46Ch]@60
  __int64 v85; // [sp+A80h] [bp-468h]@60
  Social::User *v86; // [sp+A8Ch] [bp-45Ch]@27
  int v87; // [sp+A90h] [bp-458h]@28
  int v88; // [sp+A94h] [bp-454h]@27
  Social::User *v89; // [sp+A98h] [bp-450h]@11
  int v90; // [sp+A9Ch] [bp-44Ch]@11
  Social::User *v91; // [sp+AA0h] [bp-448h]@1
  int v92; // [sp+AA4h] [bp-444h]@4
  int v93; // [sp+AA8h] [bp-440h]@60
  int v94; // [sp+AACh] [bp-43Ch]@60
  const char *v95; // [sp+AB0h] [bp-438h]@60
  int v96; // [sp+AB4h] [bp-434h]@60
  char v97; // [sp+ABCh] [bp-42Ch]@60
  int v98; // [sp+AC0h] [bp-428h]@60
  int v99; // [sp+EC0h] [bp-28h]@60
  RakNet *v100; // [sp+EC4h] [bp-24h]@1

  v6 = a1;
  v7 = a3;
  v100 = _stack_chk_guard;
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v91, *(_DWORD *)(a1 + 344));
  if ( *(_DWORD *)a6 )
  {
    if ( Social::User::getPlatformConnectionState(*(Social::User **)a6) )
    {
      v8 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(*(Social::User **)a6);
      if ( Social::XboxLiveUserManager::isSignedIn(v8) == 1 )
      {
        v91 = *(Social::User **)a6;
        v9 = *(_DWORD *)(a6 + 4);
        v10 = v92;
        if ( v9 != v92 )
        {
          if ( v9 )
          {
            v11 = (unsigned int *)(v9 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v12 = __ldrex(v11);
              while ( __strex(v12 + 1, v11) );
              v10 = v92;
            }
            else
              ++*v11;
          }
          if ( v10 )
            v31 = (unsigned int *)(v10 + 4);
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
              v32 = (*v31)--;
            if ( v32 == 1 )
              v33 = (unsigned int *)(v10 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v34 = __ldrex(v33);
                while ( __strex(v34 - 1, v33) );
              }
              else
                v34 = (*v33)--;
              if ( v34 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
          v92 = v9;
        }
        goto LABEL_59;
      }
    }
  }
  v13 = HIDWORD(a5);
  v14 = a5;
  if ( !a5 )
LABEL_59:
    v14 = 0;
    v13 = 0;
    goto LABEL_60;
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v89, *(_DWORD *)(v6 + 344));
  v15 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v89);
  v16 = Social::XboxLiveUserManager::isSignedIn(v15);
  v17 = v90;
  if ( !v90 )
    goto LABEL_129;
  v18 = (unsigned int *)(v90 + 4);
  if ( &pthread_create )
    __dmb();
    do
      v19 = __ldrex(v18);
    while ( __strex(v19 - 1, v18) );
  else
    v19 = (*v18)--;
  if ( v19 != 1 )
  v20 = (unsigned int *)(v17 + 8);
  (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      v21 = __ldrex(v20);
    while ( __strex(v21 - 1, v20) );
    v21 = (*v20)--;
  if ( v21 != 1 )
LABEL_129:
    if ( v16 == 1 )
      goto LABEL_27;
LABEL_60:
    *v7 = 0;
    v85 = 0LL;
    Social::User::getSettingsDirectoryPath((Social::User *)&v83, (int)v91);
    v94 = v84;
    v93 = v83;
    v95 = "clientId.txt";
    v96 = -1;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v97, (int)&v93, 2);
    v76 = &v98;
    v81 = 0;
    v82 = 0;
    v77 = v99;
    Core::File::open((int)&v78, (int)&v81, (__int64 *)&v76, 1);
    v35 = v80;
    v80 |= 2u;
    if ( v35 & 1 )
      v75 = 0LL;
      Core::FileImpl::getSize((Core::FileImpl *)&v72, v81);
      v36 = v74;
      v74 |= 2u;
      if ( v73 )
        v73(&v72);
      if ( v36 & 1 )
        s = (char *)&unk_28898CC;
        sub_DA7F7C((char *)&s, v75, 0);
        LODWORD(v37) = s;
        if ( *((_DWORD *)s - 1) >= 0 )
          sub_DA73C4((const void **)&s);
          LODWORD(v37) = s;
        HIDWORD(v37) = HIDWORD(v75);
        Core::FileImpl::readExactly((Core::FileImpl *)&v68, v81, v37, v75);
        v38 = v70;
        v70 |= 2u;
        if ( v38 & 1 )
          v39 = s;
          if ( *((_DWORD *)s - 1) >= 0 )
            sub_DA73C4((const void **)&s);
            v39 = s;
          sscanf(v39, "%llu", &v85);
        if ( v69 )
          v69();
        v40 = s - 12;
        if ( (int *)(s - 12) != &dword_28898C0 )
          v52 = (unsigned int *)(s - 4);
          if ( &pthread_create )
            __dmb();
            do
              v53 = __ldrex(v52);
            while ( __strex(v53 - 1, v52) );
          else
            v53 = (*v52)--;
          if ( v53 <= 0 )
            j_j_j_j_j__ZdlPv_9(v40);
      Core::File::close((Core::File *)&v66, (int *)&v81);
      if ( v67 )
        v67(&v66);
    v41 = v85;
    if ( !v85 )
      v64 = 0;
      v59 = &v98;
      v65 = 0;
      v60 = v99;
      Core::File::open((int)&v61, (int)&v64, (__int64 *)&v59, 14);
      v42 = v63;
      v63 |= 2u;
      if ( v42 & 1 )
        Crypto::Random::Random::Random((int)&v58 + 4);
        Crypto::Random::Random::fillType((unsigned int)&v58 + 4, (int)&v85, 8u);
        Util::format((Util *)&v58, "%llu", v85, 0);
        Core::FileImpl::write((Core::FileImpl *)&v56, v64, (unsigned int)v58, *(_DWORD *)(v58 - 12));
        if ( v57 )
          v57();
        *v7 = 1;
        v43 = (void *)(v58 - 12);
        if ( (int *)(v58 - 12) != &dword_28898C0 )
          v54 = (unsigned int *)(v58 - 4);
              v55 = __ldrex(v54);
            while ( __strex(v55 - 1, v54) );
            v55 = (*v54)--;
          if ( v55 <= 0 )
            j_j_j_j_j__ZdlPv_9(v43);
        Crypto::Random::Random::~Random((FILE **)&v58 + 1);
      if ( v62 )
        v62(&v61);
      Core::File::~File((Core::File *)&v64);
      v41 = v85;
    v30 = v41 + __PAIR__(v13, v14);
    if ( v79 )
      v79(&v78);
    Core::File::~File((Core::File *)&v81);
    goto LABEL_87;
  (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  if ( !v16 )
LABEL_27:
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v86, *(_DWORD *)(v6 + 344));
  v22 = Social::User::getLiveUser(v86);
  Social::XboxLiveUserManager::getCurrentXUID((Social::XboxLiveUserManager *)&v88, v22);
  v23 = Util::u64FromString((const char **)&v88);
  v24 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v88 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
    else
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
  v25 = v87;
  if ( v87 )
    v26 = (unsigned int *)(v87 + 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      v28 = (unsigned int *)(v25 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
      if ( &pthread_create )
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
      else
        v29 = (*v28)--;
      if ( v29 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
  v30 = v23 + a5;
LABEL_87:
  v44 = v92;
  if ( v92 )
    v45 = (unsigned int *)(v92 + 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 == 1 )
      v47 = (unsigned int *)(v44 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 8))(v44);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 12))(v44);
  if ( _stack_chk_guard != v100 )
    _stack_chk_fail(_stack_chk_guard - v100);
  return v30;
}


unsigned __int64 __fastcall MinecraftGame::endFrame(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  int *v8; // r0@5
  int v9; // r1@7
  int v10; // r6@7
  int v11; // r9@7
  int i; // r0@7
  int v13; // r1@9
  ClientInstance *v14; // r5@13
  GuiData *v17; // r7@15
  ToastManager *v18; // r0@16
  int v19; // r0@17
  int v20; // r0@18
  signed __int64 v24; // r0@22
  AppPlatform **v25; // r0@24
  mce::RenderContextImmediate *v26; // r0@25
  int v27; // r1@26
  int j; // r0@26
  int v29; // r0@31
  int v30; // r0@31
  int v31; // r1@31
  int v32; // r2@31
  int v33; // r3@31
  int v34; // r0@32
  MinecraftGame *v35; // r0@34
  HolographicPlatform *v36; // r0@34
  AppPlatform **v37; // r0@35
  mce::RenderContextImmediate *v38; // r0@37
  mce::RenderContext *v39; // r0@37
  mce::RenderContext *v40; // r0@38
  int v45; // r0@42
  int v49; // r0@42
  __int64 v50; // [sp+0h] [bp-E0h]@0
  __int64 v51; // [sp+0h] [bp-E0h]@15
  char v52; // [sp+8h] [bp-D8h]@42
  char v53; // [sp+18h] [bp-C8h]@42
  int v54; // [sp+28h] [bp-B8h]@31
  int v55; // [sp+2Ch] [bp-B4h]@31
  int v56; // [sp+30h] [bp-B0h]@31
  int v57; // [sp+34h] [bp-ACh]@31
  char v58; // [sp+38h] [bp-A8h]@15
  int v59; // [sp+48h] [bp-98h]@13
  double v60; // [sp+50h] [bp-90h]@13
  unsigned int v62; // [sp+60h] [bp-80h]@13
  int v63; // [sp+68h] [bp-78h]@1
  double v64; // [sp+70h] [bp-70h]@1
  unsigned int v66; // [sp+80h] [bp-60h]@1
  char v67; // [sp+88h] [bp-58h]@1

  v1 = this;
  GameRenderer::makeScreenContext((GameRenderer *)&v67, *((float *)this + 12), 1065353216);
  v64 = 0.0;
  v66 = 30;
  v63 = unk_27F636C;
  unk_27F636C = &v63;
  _R0 = getTimeS();
  __asm
  {
    VMOV            D0, R0, R2
    VSTR            D0, [SP,#0xE0+var_70]
    VSTR            D0, [SP,#0xE0+var_68]
  }
  _R2 = v63;
  if ( v63 )
    __asm
    {
      VMOV            D0, R0, R1
      VLDR            D1, [R2,#8]
      VADD.F64        D0, D1, D0
      VSTR            D0, [R2,#8]
    }
  if ( !*((_BYTE *)v1 + 444) )
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v8 = (int *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v8 = (int *)&ServiceLocator<AppPlatform>::mDefaultService;
    v9 = *((_DWORD *)v1 + 55);
    v10 = (int)v1 + 216;
    v11 = *v8;
    for ( i = (int)v1 + 216; v9; v9 = *(_DWORD *)(v9 + 8) )
      i = v9;
    v13 = (int)v1 + 216;
    if ( i != v10 )
      if ( *(_BYTE *)(i + 16) )
        i = (int)v1 + 216;
      v13 = i;
    v14 = *(ClientInstance **)(v13 + 20);
    v60 = 0.0;
    v62 = 31;
    v59 = unk_27F636C;
    unk_27F636C = &v59;
    _R0 = getTimeS();
      VNEG.F64        D1, D0
      VSTR            D1, [SP,#0xE0+var_90]
      VSTR            D1, [SP,#0xE0+var_88]
    _R0 = v59;
    if ( v59 )
      __asm
      {
        VLDR            D1, [R0,#8]
        VADD.F64        D0, D1, D0
        VSTR            D0, [R0,#8]
      }
    HIDWORD(v51) = 1;
    RectangleArea::RectangleArea(COERCE_FLOAT(&v58), 0, 0, 1065353216, 1065353216);
    v17 = (GuiData *)ClientInstance::getGuiData(v14);
    if ( ClientInstance::isHoloCursorNeeded(v14)
      || (v18 = (ToastManager *)ClientInstance::getToastManager(v14), ToastManager::getCurrentToast(v18)) )
      v19 = ClientInstance::getHoloInput(v14);
      (*(void (**)(void))(*(_DWORD *)v19 + 300))();
      v27 = *((_DWORD *)v1 + 55);
      for ( j = (int)v1 + 216; v27; v27 = *(_DWORD *)(v27 + 8) )
        j = v27;
      if ( j != v10 && !*(_BYTE *)(j + 16) )
        v10 = j;
      v29 = ClientInstance::getScreen(*(ClientInstance **)(v10 + 20));
      v30 = (*(int (**)(void))(*(_DWORD *)v29 + 220))();
      v31 = *(_DWORD *)v30;
      v32 = *(_DWORD *)(v30 + 4);
      v33 = *(_DWORD *)(v30 + 8);
      v57 = *(_DWORD *)(v30 + 12);
      v54 = v31;
      v55 = v32;
      v56 = v33;
      if ( RectangleArea::isEmpty((RectangleArea *)&v54) == 1 )
        v34 = ClientInstance::getHoloInput(v14);
        (*(void (**)(void))(*(_DWORD *)v34 + 300))();
      else
        v45 = ClientInstance::getHoloInput(v14);
        _R8 = (*(int (**)(void))(*(_DWORD *)v45 + 304))();
        _R0 = GuiData::getScreenSizeData(v17);
        __asm
        {
          VMOV            S0, R8
          VLDR            S2, [R0,#0x14]
          VDIV.F32        S0, S0, S2
          VMOV            R2, S0
        }
        RectangleArea::grow((RectangleArea *)&v53, COERCE_FLOAT(&v54), _R2);
        RectangleArea::operator=((int)&v54, (int)&v53);
        RectangleArea::clampToNorm((RectangleArea *)&v52, (int)&v54);
        RectangleArea::operator=((int)&v54, (int)&v52);
        v49 = ClientInstance::getHoloInput(v14);
        (*(void (**)(void))(*(_DWORD *)v49 + 300))();
    v20 = ClientInstance::getHoloInput(v14);
    if ( !(*(int (**)(void))(*(_DWORD *)v20 + 320))() )
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 128))(v11);
    LODWORD(_R0) = getTimeS();
      VMOV            D1, R0, R1
      VLDR            D0, [SP,#0xE0+var_90]
      VADD.F64        D2, D0, D1
      VSTR            D2, [SP,#0xE0+var_90]
      VLDR            D0, [SP,#0xE0+var_88]
      VADD.F64        D0, D0, D1
      VSTR            D0, [SP,#0xE0+var_88]
    HIDWORD(_R0) = v59;
        VLDR            D2, [R1,#8]
        VSUB.F64        D1, D2, D1
        VSTR            D1, [R1,#8]
        VLDR            D2, [SP,#0xE0+var_90]
    __asm { VMOV            R2, R3, D2 }
    LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
    unk_27F636C = v59;
    __asm { VSTR            D0, [SP,#0xE0+var_E0] }
    v24 = __PAIR__(v62, ProfilerLite::_endScope(_R0, _R2, _R3, v51));
    if ( mce::RenderDevice::deviceWasLostOnPresent(mce::Singleton<mce::RenderDevice>::mInstance) == 1 )
      if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
        v25 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
        v25 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
      v35 = (MinecraftGame *)AppPlatform::_fireAppSuspended(*v25);
      MinecraftGame::teardownRenderer(v35, 1);
      v36 = (HolographicPlatform *)ClientInstance::getHoloInput(v14);
      MinecraftGame::setupRenderer(v1, v36);
        v37 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
        v37 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
      v38 = (mce::RenderContextImmediate *)AppPlatform::_fireAppResumed(*v37);
      v39 = (mce::RenderContext *)mce::RenderContextImmediate::get(v38);
      v26 = (mce::RenderContextImmediate *)mce::RenderContext::createWindowSizeDependentResources(v39);
      v26 = (mce::RenderContextImmediate *)(*(int (__fastcall **)(int))(*(_DWORD *)v11 + 132))(v11);
    v40 = (mce::RenderContext *)mce::RenderContextImmediate::get(v26);
    mce::RenderContext::endFrame(v40);
  LODWORD(_R0) = getTimeS();
    VMOV            D1, R0, R1
    VLDR            D0, [SP,#0xE0+var_70]
    VADD.F64        D2, D0, D1
    VSTR            D2, [SP,#0xE0+var_70]
    VLDR            D0, [SP,#0xE0+var_68]
    VADD.F64        D0, D0, D1
  HIDWORD(_R0) = v63;
      VLDR            D2, [R1,#8]
      VSUB.F64        D1, D2, D1
      VSTR            D1, [R1,#8]
      VLDR            D2, [SP,#0xE0+var_70]
  __asm { VMOV            R2, R3, D2 }
  LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
  unk_27F636C = v63;
  __asm { VSTR            D0, [SP,#0xE0+var_E0] }
  return __PAIR__(v66, ProfilerLite::_endScope(_R0, _R2, _R3, v50));
}


_BOOL4 __fastcall MinecraftGame::isHostingLocalDedicatedServer(MinecraftGame *this)
{
  return *((_DWORD *)this + 50) != 0;
}


void __fastcall MinecraftGame::_refreshEntitlements(MinecraftGame *this)
{
  MinecraftGame::_refreshEntitlements(this);
}


void __fastcall MinecraftGame::setLaunchedForHMD(int a1, int a2)
{
  MinecraftGame::setLaunchedForHMD(a1, a2);
}


ActiveDirectoryIdentity *__fastcall MinecraftGame::displayActiveDirectoryLoginDialog(MinecraftGame *this)
{
  ActiveDirectoryIdentity *result; // r0@1

  result = (ActiveDirectoryIdentity *)*((_DWORD *)this + 102);
  if ( result )
    result = (ActiveDirectoryIdentity *)j_j_j__ZN23ActiveDirectoryIdentity11getIdentityEv(result);
  else
    JUMPOUT(0, MinecraftGame::getUIMeasureStrategy);
  return result;
}


int __fastcall MinecraftGame::handleBack(MinecraftGame *this, int a2)
{
  MinecraftGame *v2; // r4@1
  int v3; // r6@1
  char *v4; // r7@1
  int v5; // r1@1
  char *i; // r0@1
  char *v7; // r1@3
  int v8; // r0@7
  int v9; // r1@7
  Mob *v10; // r5@7
  char *j; // r0@7
  char *v12; // r1@9
  Minecraft *v13; // r0@13
  int v14; // r4@15
  int v15; // r1@16
  char *ii; // r0@16
  int v17; // r0@21
  int v18; // r1@22
  char *k; // r0@22
  char *v20; // r1@24
  int v21; // r0@28
  int v22; // r2@28
  char *l; // r1@28
  char *v24; // r2@30
  int v25; // r0@35
  int v26; // r0@37
  int v27; // r1@37
  int v28; // r5@37
  char *n; // r0@37
  char *v30; // r1@39
  int v31; // r0@43
  int v32; // r5@43
  unsigned int *v33; // r1@44
  unsigned int v34; // r0@46
  int v35; // r1@49
  char *m; // r0@49
  SceneStack *v37; // r0@54
  unsigned int *v38; // r6@57
  unsigned int v39; // r0@59
  int v40; // r5@65
  char v42; // [sp+4h] [bp-1Ch]@43
  int v43; // [sp+8h] [bp-18h]@43

  v2 = this;
  v3 = a2;
  v4 = (char *)this + 216;
  v5 = *((_DWORD *)this + 55);
  for ( i = (char *)this + 216; v5; v5 = *(_DWORD *)(v5 + 8) )
    i = (char *)v5;
  v7 = v4;
  if ( i != v4 )
  {
    if ( i[16] )
      i = v4;
    v7 = i;
  }
  v8 = ClientInstance::getLocalPlayer(*((ClientInstance **)v7 + 5));
  v9 = *((_DWORD *)v2 + 55);
  v10 = (Mob *)v8;
  for ( j = v4; v9; v9 = *(_DWORD *)(v9 + 8) )
    j = (char *)v9;
  v12 = v4;
  if ( j != v4 )
    if ( j[16] )
      j = v4;
    v12 = j;
  v13 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)v12 + 5));
  if ( Minecraft::getLevel(v13) )
    if ( v3 )
    {
      v14 = 1;
    }
    else
      v18 = *((_DWORD *)v2 + 55);
      for ( k = v4; v18; v18 = *(_DWORD *)(v18 + 8) )
        k = (char *)v18;
      v20 = v4;
      if ( k != v4 )
      {
        if ( k[16] )
          k = v4;
        v20 = k;
      }
      v21 = ClientInstance::isShowingMenu(*((ClientInstance **)v20 + 5));
      v22 = *((_DWORD *)v2 + 55);
      for ( l = v4; v22; v22 = *(_DWORD *)(v22 + 8) )
        l = (char *)v22;
      v24 = v4;
      if ( l != v4 )
        if ( l[16] )
          l = v4;
        v24 = l;
      if ( v21 == 1 )
        v25 = ClientInstance::getScreen(*((ClientInstance **)v24 + 5));
        if ( (*(int (**)(void))(*(_DWORD *)v25 + 112))() )
        {
          v14 = 1;
        }
        else if ( Mob::getHealth(v10) < 1 )
        else
          v35 = *((_DWORD *)v2 + 55);
          for ( m = v4; v35; v35 = *(_DWORD *)(v35 + 8) )
            m = (char *)v35;
          if ( m != v4 && !m[16] )
            v4 = m;
          v37 = (SceneStack *)ClientInstance::getClientSceneStack(*((ClientInstance **)v4 + 5));
          SceneStack::schedulePopScreen(v37, 1);
      else
        v26 = ClientInstance::getClientSceneStack(*((ClientInstance **)v24 + 5));
        v27 = *((_DWORD *)v2 + 55);
        v28 = v26;
        for ( n = v4; v27; v27 = *(_DWORD *)(v27 + 8) )
          n = (char *)v27;
        v30 = v4;
        if ( n != v4 )
          if ( n[16] )
            n = v4;
          v30 = n;
        v31 = ClientInstance::getSceneFactory(*((ClientInstance **)v30 + 5));
        SceneFactory::createPauseScreen((SceneFactory *)&v42, v31);
        SceneStack::pushScreen(v28, (int)&v42, 0);
        v32 = v43;
        if ( v43 )
          v33 = (unsigned int *)(v43 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v34 = __ldrex(v33);
            while ( __strex(v34 - 1, v33) );
          }
          else
            v34 = (*v33)--;
          if ( v34 == 1 )
            v38 = (unsigned int *)(v32 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
            if ( &pthread_create )
            {
              __dmb();
              do
                v39 = __ldrex(v38);
              while ( __strex(v39 - 1, v38) );
            }
            else
              v39 = (*v38)--;
            if ( v39 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
        v40 = *((_DWORD *)v2 + 56);
        v14 = 0;
        while ( (char *)v40 != v4 )
          ClientInstance::requestLeaveGame(*(ClientInstance **)(v40 + 20), 1, 0);
          v40 = sub_DA7F5C(v40);
  else
    v15 = *((_DWORD *)v2 + 55);
    for ( ii = v4; v15; v15 = *(_DWORD *)(v15 + 8) )
      ii = (char *)v15;
    if ( ii != v4 && !ii[16] )
      v4 = ii;
    v17 = ClientInstance::getScreen(*((ClientInstance **)v4 + 5));
    v14 = (*(int (**)(void))(*(_DWORD *)v17 + 112))();
  return v14;
}


void __fastcall MinecraftGame::handleLicenseChanged(MinecraftGame *this)
{
  MinecraftGame::handleLicenseChanged(this);
}


int __fastcall MinecraftGame::_registerOnInitUriListeners(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  GameArguments *v2; // r5@1
  int v3; // r0@1
  void *v4; // r0@4
  int v5; // r1@6
  Social::MultiplayerServiceManager *v6; // r6@6
  Social::InviteUriListener *v7; // r5@6
  int v8; // r0@6
  void *v9; // r0@9
  int v10; // r1@11
  int v11; // r1@11
  int v12; // r0@11
  int v13; // r5@13
  unsigned int *v14; // r1@14
  unsigned int v15; // r0@16
  unsigned int *v16; // r6@20
  unsigned int v17; // r0@22
  void *v18; // r0@28
  int v19; // r5@30
  void (__fastcall *v20)(int, int *, _DWORD); // r6@30
  void *v21; // r0@30
  void *v22; // r0@33
  int v23; // r5@35
  void (__fastcall *v24)(int, int); // r6@35
  int v25; // r0@35
  void *v26; // r0@37
  unsigned int *v28; // r2@40
  signed int v29; // r1@42
  int v30; // [sp+4h] [bp-24h]@30
  char v31; // [sp+8h] [bp-20h]@11
  int v32; // [sp+Ch] [bp-1Ch]@13
  int v33; // [sp+10h] [bp-18h]@11

  v1 = this;
  v2 = (GameArguments *)operator new(8u);
  GameArguments::GameArguments(v2, v1);
  v3 = *((_DWORD *)v1 + 11);
  *((_DWORD *)v1 + 11) = v2;
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = &ServiceLocator<AppPlatform>::mDefaultService;
  v5 = *((_DWORD *)v1 + 11);
  (*(void (**)(void))(**(_DWORD **)v4 + 516))();
  v6 = (Social::MultiplayerServiceManager *)*((_DWORD *)v1 + 87);
  v7 = (Social::InviteUriListener *)operator new(8u);
  Social::InviteUriListener::InviteUriListener(v7, v6);
  v8 = *((_DWORD *)v1 + 88);
  *((_DWORD *)v1 + 88) = v7;
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
    v9 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v9 = &ServiceLocator<AppPlatform>::mDefaultService;
  v10 = *((_DWORD *)v1 + 88);
  (*(void (**)(void))(**(_DWORD **)v9 + 516))();
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v31, (int)v1);
  std::make_unique<Social::RealmsUriListener,std::shared_ptr<Options>>(&v33, (int)&v31);
  v11 = v33;
  v33 = 0;
  v12 = *((_DWORD *)v1 + 89);
  *((_DWORD *)v1 + 89) = v11;
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 4))();
  v13 = v32;
  if ( v32 )
  {
    v14 = (unsigned int *)(v32 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  }
    v18 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v18 = &ServiceLocator<AppPlatform>::mDefaultService;
  v19 = *(_DWORD *)v18;
  v20 = *(void (__fastcall **)(int, int *, _DWORD))(**(_DWORD **)v18 + 520);
  sub_DA7364((void **)&v30, "setRealmsConfig");
  v20(v19, &v30, *((_DWORD *)v1 + 89));
  v21 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v30 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9(v21);
  if ( *((_DWORD *)v1 + 104) )
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v22 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v22 = &ServiceLocator<AppPlatform>::mDefaultService;
    v23 = *(_DWORD *)v22;
    v24 = *(void (__fastcall **)(int, int))(**(_DWORD **)v22 + 516);
    v25 = (*(int (__fastcall **)(MinecraftGame *))(*(_DWORD *)v1 + 128))(v1);
    v24(v23, v25);
    v26 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v26 = &ServiceLocator<AppPlatform>::mDefaultService;
  return (*(int (**)(void))(**(_DWORD **)v26 + 532))();
}


int __fastcall MinecraftGame::getPrimaryCameraTargetEntity(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  return j_j_j__ZNK14ClientInstance21getCameraTargetEntityEv(*((ClientInstance **)v2 + 5));
}


void __fastcall MinecraftGame::setupRenderer(MinecraftGame *this, HolographicPlatform *a2)
{
  MinecraftGame::setupRenderer(this, a2);
}


int __fastcall MinecraftGame::setMultithreadedRendering(int result, bool a2)
{
  *(_BYTE *)(result + 116) = a2;
  return result;
}


void __fastcall MinecraftGame::adjustClientsUISizeAndScale(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  char *v2; // r7@1
  void (*v3)(void); // r3@1
  int v4; // r5@1
  int v5; // r0@4
  int v6; // r1@9
  int i; // r0@9
  int v8; // r0@14
  void *v9; // [sp+4h] [bp-24h]@1
  int (__fastcall *v10)(void **, void **, int); // [sp+Ch] [bp-1Ch]@1
  int (__fastcall *v11)(int, ClientInstance *); // [sp+10h] [bp-18h]@1

  v1 = this;
  *((_BYTE *)this + 544) = 0;
  v2 = (char *)this + 216;
  v9 = operator new(1u);
  v3 = (void (*)(void))sub_C183E8;
  v10 = sub_C183E8;
  v11 = sub_C183D4;
  v4 = *((_DWORD *)v1 + 56);
  if ( (MinecraftGame *)v4 == (MinecraftGame *)((char *)v1 + 216) )
    goto LABEL_20;
  do
  {
    if ( !v3 )
      sub_DA7654();
    v11((int)&v9, *(ClientInstance **)(v4 + 20));
    v5 = sub_DA7F5C(v4);
    v3 = (void (*)(void))v10;
    v4 = v5;
  }
  while ( (char *)v5 != v2 );
  if ( v10 )
LABEL_20:
    v3();
  v6 = *((_DWORD *)v1 + 55);
  for ( i = (int)v1 + 216; v6; v6 = *(_DWORD *)(v6 + 8) )
    i = v6;
  if ( (char *)i != v2 && !*(_BYTE *)(i + 16) )
    v2 = (char *)i;
  v8 = ClientInstance::getHoloInput(*((ClientInstance **)v2 + 5));
  if ( !(*(int (**)(void))(*(_DWORD *)v8 + 44))() )
    GameRenderer::createRenderGraph(*((GameRenderer **)v1 + 12), 0);
  if ( *((_BYTE *)v1 + 668) )
    MinecraftGame::setSmoothFontStyle(v1);
}


int __fastcall MinecraftGame::_unregisterOnInitUriListeners(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  void *v2; // r0@2
  int v3; // r1@4
  void *v4; // r0@5
  int v5; // r1@7
  void *v6; // r0@8
  int v7; // r1@10
  void *v8; // r0@11
  int v9; // r5@13
  int (__fastcall *v10)(int, int); // r6@13
  int v11; // r1@13

  v1 = this;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  v3 = *((_DWORD *)v1 + 11);
  (*(void (**)(void))(**(_DWORD **)v2 + 524))();
    v4 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v4 = &ServiceLocator<AppPlatform>::mDefaultService;
  v5 = *((_DWORD *)v1 + 88);
  (*(void (**)(void))(**(_DWORD **)v4 + 524))();
    v6 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v6 = &ServiceLocator<AppPlatform>::mDefaultService;
  v7 = *((_DWORD *)v1 + 89);
  (*(void (**)(void))(**(_DWORD **)v6 + 524))();
    v8 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v8 = &ServiceLocator<AppPlatform>::mDefaultService;
  v9 = *(_DWORD *)v8;
  v10 = *(int (__fastcall **)(int, int))(**(_DWORD **)v8 + 524);
  v11 = (*(int (__fastcall **)(MinecraftGame *))(*(_DWORD *)v1 + 128))(v1);
  return v10(v9, v11);
}


_DWORD *__fastcall MinecraftGame::onPushNotificationReceived(int a1, _DWORD *a2)
{
  int v2; // r2@1
  int v3; // r0@1
  _DWORD *v4; // r4@1
  int i; // r1@1
  int v6; // r0@6

  v2 = *(_DWORD *)(a1 + 220);
  v3 = a1 + 216;
  v4 = a2;
  for ( i = v3; v2; v2 = *(_DWORD *)(v2 + 8) )
    i = v2;
  if ( i != v3 && !*(_BYTE *)(i + 16) )
    v3 = i;
  v6 = ClientInstance::getToastManager(*(ClientInstance **)(v3 + 20));
  return j_j_j__ZN12ToastManager24pushNotificationReceivedERK23PushNotificationMessage(v6, v4);
}


void __fastcall MinecraftGame::onLanguageSubpacksChanged(MinecraftGame *this)
{
  MinecraftGame::onLanguageSubpacksChanged(this);
}


int __fastcall MinecraftGame::isWin10MobileDevice(MinecraftGame *this)
{
  void *v1; // r0@2
  int result; // r0@5
  void *v3; // r0@7

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v1 + 440))() == 7 )
  {
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v3 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v3 = &ServiceLocator<AppPlatform>::mDefaultService;
    result = (*(int (**)(void))(**(_DWORD **)v3 + 436))();
    if ( result != 1 )
      result = 0;
  }
    result = 0;
  return result;
}


signed int __fastcall MinecraftGame::isKindleFire(MinecraftGame *this, int a2)
{
  void *v2; // r0@3
  signed int v3; // r5@4
  void *v4; // r0@11
  void *v5; // r0@12
  unsigned int *v7; // r2@14
  signed int v8; // r1@16
  unsigned int *v9; // r2@18
  signed int v10; // r1@20
  int v11; // [sp+0h] [bp-28h]@6
  unsigned int v12; // [sp+4h] [bp-24h]@6

  if ( a2 == 1 )
  {
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v2 = &ServiceLocator<AppPlatform>::mDefaultService;
    (*(void (__fastcall **)(unsigned int *))(**(_DWORD **)v2 + 468))(&v12);
    Util::toLower((void **)&v11, *(_DWORD *)(v12 - 12), v12);
    if ( sub_DA7BFC(&v11, "kindle", 0, 6u) == -1 )
    {
      v3 = 0;
    }
      if ( sub_DA7BFC(&v11, "fire", 0, 4u) != -1 )
        v3 = 1;
    v4 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v11 - 4);
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
    v5 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v12 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9(v5);
  }
  else
    v3 = 0;
  return v3;
}


void __fastcall MinecraftGame::joinRealmFromInvite(int a1, const Realms::World *a2)
{
  int v2; // r4@1
  void *v3; // r8@1
  void *v4; // r5@1
  __int64 v5; // r0@1
  int v6; // r2@3
  int v7; // r0@3
  int v8; // r6@3
  int i; // r1@3
  int v10; // r4@8
  int v11; // r4@8
  unsigned int *v12; // r1@9
  unsigned int v13; // r0@11
  unsigned int *v14; // r5@15
  unsigned int v15; // r0@17
  void *v16; // r0@24
  unsigned int *v17; // r2@26
  signed int v18; // r1@28
  void *v19; // [sp+4h] [bp-E4h]@8
  int v20; // [sp+Ch] [bp-DCh]@8
  char v21; // [sp+10h] [bp-D8h]@8
  int v22; // [sp+14h] [bp-D4h]@8
  int v23; // [sp+18h] [bp-D0h]@1
  int v24; // [sp+20h] [bp-C8h]@1
  int v25; // [sp+68h] [bp-80h]@1
  int v26; // [sp+70h] [bp-78h]@1
  void *v27; // [sp+BCh] [bp-2Ch]@1
  void (*v28)(void); // [sp+C4h] [bp-24h]@1

  v2 = a1;
  v23 = a1;
  Realms::World::World((Realms::World *)&v24, a2);
  v3 = operator new(0x38u);
  v25 = v23;
  Realms::World::World((Realms::World *)&v26, (const Realms::World *)&v24);
  v28 = 0;
  v4 = operator new(0x50u);
  *(_DWORD *)v4 = v25;
  Realms::World::World((Realms::World *)((char *)v4 + 8), (const Realms::World *)&v26);
  LODWORD(v5) = sub_C1BCEE;
  v27 = v4;
  HIDWORD(v5) = sub_C1BCE4;
  *(_QWORD *)&v28 = v5;
  GameServerConnectProgressHandler::GameServerConnectProgressHandler((int)v3, 3, (int)&v27, 0);
  if ( v28 )
    v28();
  Realms::World::~World((Realms::World *)&v26);
  Realms::World::~World((Realms::World *)&v24);
  v6 = *(_DWORD *)(v2 + 220);
  v7 = v2 + 216;
  v8 = *(_DWORD *)(v2 + 104);
  for ( i = v2 + 216; v6; v6 = *(_DWORD *)(v6 + 8) )
    i = v6;
  if ( i != v7 && !*(_BYTE *)(i + 16) )
    v7 = i;
  v10 = ClientInstance::getSceneFactory(*(ClientInstance **)(v7 + 20));
  sub_DA7364((void **)&v20, "joining_xboxLive_game");
  v19 = v3;
  SceneFactory::createRealmNetworkProgressScreen((unsigned __int64 *)&v21, v10, &v20, (int *)&v19);
  SceneStack::pushScreen(v8, (int)&v21, 0);
  v11 = v22;
  if ( v22 )
  {
    v12 = (unsigned int *)(v22 + 4);
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
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  }
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  v19 = 0;
  v16 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v20 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
}


void __fastcall MinecraftGame::startLeaveGame(MinecraftGame *this)
{
  MinecraftGame::startLeaveGame(this);
}


    if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(v4 + 24))
{
    {
      v7 = SceneStack::getScreen(*(SceneStack **)(v4 + 616));
    }
    else
      v6 = (SceneStack *)MinecraftGame::getMainSceneStack(*(MinecraftGame **)(v4 + 24));
      v7 = SceneStack::getScreen(v6);
    result = (*(int (**)(void))(*(_DWORD *)v7 + 168))();
    if ( !result )
      v8 = (GameRenderer *)MinecraftGame::getGameRenderer(*(MinecraftGame **)(v4 + 24));
      result = GameRenderer::recenterHoloUI(v8);
  }
  v9 = (_DWORD)v2 == 0;
  if ( (_DWORD)v2 )
  {
    result = *(_DWORD *)(v4 + 92);
    v9 = result == 0;
  if ( !v9 )
    result = ClientInstance::stopDestroying((ClientInstance *)v4);
  if ( HIDWORD(v2) )
    v10 = (unsigned int *)(HIDWORD(v2) + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v10);
      while ( __strex(result - 1, v10) );
      result = (*v10)--;
    if ( result == 1 )
      v11 = (unsigned int *)(HIDWORD(v2) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 8))(HIDWORD(v2));
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v11);
        while ( __strex(result - 1, v11) );
      }
      else
        result = (*v11)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  return result;
}


void __fastcall MinecraftGame::initPost(MinecraftGame *this)
{
  MinecraftGame *v1; // r10@1
  void *v2; // r0@2
  __int64 v3; // r0@4
  int v4; // r5@4
  unsigned int *v5; // r1@5
  unsigned int v6; // r0@7
  unsigned int *v7; // r4@11
  unsigned int v8; // r0@13
  int v9; // r5@18
  unsigned int *v10; // r1@19
  unsigned int v11; // r0@21
  unsigned int *v12; // r4@25
  unsigned int v13; // r0@27
  int v14; // r5@32
  AppPlatform **v15; // r0@33
  int *v16; // r0@35
  void *v17; // r6@35
  int v18; // r0@35
  void *v19; // r0@37
  int v20; // r5@38
  void *v21; // r0@39
  void *v22; // r0@41
  AppPlatform **v23; // r0@43
  int *v24; // r0@45
  int v25; // r1@45
  int v26; // r0@45
  void *v27; // r0@47
  __int64 v28; // kr00_8@48
  void *v29; // r0@48
  double v30; // r0@49
  ThirdPartyServerRepository *v31; // r5@49
  ThirdPartyServerRepository *v32; // r0@49
  void *v33; // r0@50
  void *v34; // r5@51
  LevelLoader *v35; // r0@51
  LevelLoader *v36; // r0@52
  int v37; // r1@53
  int v38; // r7@53
  int i; // r0@53
  int v40; // r1@55
  unsigned int v41; // r5@59
  _DWORD *v42; // r0@61
  int v43; // r1@63
  int j; // r0@63
  int v45; // r1@65
  int v46; // r0@69
  int v47; // r0@69
  ResourcePackManager *v48; // r0@69
  void (*v49)(void); // r3@73
  int v50; // r5@73
  int v51; // r0@76
  int v52; // r3@81
  int v53; // r5@81
  unsigned int *v54; // r1@82
  unsigned int v55; // r0@84
  unsigned int *v56; // r4@88
  unsigned int v57; // r0@90
  int v58; // r1@95
  int k; // r0@95
  int v60; // r1@97
  int v61; // r4@101
  int v62; // r8@101
  __int64 v63; // kr08_8@101
  int v64; // r6@101
  void *v65; // r5@101
  WorldTemplateManager *v66; // r0@101
  WorldTemplateManager *v67; // r0@102
  _DWORD *v68; // r0@103
  int v69; // r5@103
  int v70; // r1@103
  int l; // r0@103
  int v72; // r1@105
  Minecraft *v73; // r0@109
  ResourcePackManager *v74; // r0@109
  int v75; // r0@111
  int m; // r1@111
  int v77; // r1@113
  Minecraft *v78; // r0@117
  int v79; // r1@117
  int n; // r0@117
  int v81; // r1@119
  ScreenRenderer *v82; // r0@123
  int v83; // r1@123
  EmoticonManager *v84; // r0@123
  EmoticonManager *v85; // r0@124
  int v86; // r0@125
  int v87; // r1@125
  int v88; // r0@125
  int v89; // r0@127
  int v90; // r1@127
  int v91; // r0@127
  int v92; // r0@129
  int v93; // r1@129
  int v94; // r0@129
  int v95; // r0@131
  int v96; // r1@131
  int v97; // r0@131
  __int64 v98; // r0@133
  int v99; // r6@133
  int v100; // r1@133
  int v101; // r1@135
  int ii; // r0@135
  int v103; // r1@137
  const UIProfanityContext *v104; // r4@141
  MinecraftUIMeasureStrategy *v105; // r6@141
  int v106; // r0@141
  int v107; // r1@144
  int jj; // r0@144
  int v109; // r1@146
  int v110; // r6@150
  void *v111; // r0@150
  void *v112; // r0@151
  double v113; // r0@152
  int v114; // r6@152
  int v115; // r1@152
  Automation::AutomationClient *v116; // r6@154
  int v117; // r0@154
  char v118; // r0@156
  int v119; // r5@156
  unsigned int *v120; // r1@157
  unsigned int v121; // r0@159
  unsigned int *v122; // r4@163
  unsigned int v123; // r0@165
  int v124; // r1@170
  int kk; // r0@170
  int v126; // r1@172
  Minecraft *v127; // r0@176
  int *v128; // r8@176
  int v129; // r1@176
  int v130; // r0@176
  Automation::AutomationClient *ll; // r9@176
  int v132; // r1@178
  int v133; // r4@182
  CommandOutputSender *v134; // r6@182
  int v135; // r0@184
  int mm; // r1@184
  int v137; // r1@186
  Minecraft *v138; // r0@190
  int v139; // r6@190
  _DWORD *v140; // r0@190
  __int64 v141; // r1@190
  int v142; // r8@192
  int v143; // r7@192
  __int64 v144; // r0@192
  int v145; // r6@192
  int v146; // r9@194
  unsigned int v147; // r7@194
  int v148; // r8@194
  int v149; // r4@194
  unsigned int v150; // r11@194
  void *v151; // r6@194
  int v152; // r0@194
  void *v153; // r0@196
  int v154; // r6@197
  int v155; // r7@197
  _DWORD *v156; // r5@197
  _DWORD *v157; // r0@197
  __int64 v158; // r1@197
  void *v159; // r0@199
  _DWORD *v160; // r6@199
  unsigned int *v161; // r0@199
  unsigned int v162; // r1@202
  int v163; // r0@205
  unsigned int *v164; // r2@206
  unsigned int v165; // r1@208
  int v166; // r5@214
  unsigned int *v167; // r1@215
  unsigned int v168; // r0@217
  unsigned int *v169; // r4@221
  unsigned int v170; // r0@223
  int v171; // r0@228
  int v172; // r1@228
  unsigned int *v173; // r1@229
  unsigned int v174; // r2@231
  int v175; // r5@234
  unsigned int *v176; // r1@235
  unsigned int v177; // r0@237
  unsigned int *v178; // r4@241
  unsigned int v179; // r0@243
  int v180; // r0@248
  int nn; // r1@248
  int v182; // r1@250
  Minecraft *v183; // r0@254
  int v184; // r0@254
  int v185; // r11@254
  __int64 v186; // kr20_8@254
  int v187; // r4@254
  int v188; // r7@254
  __int64 v189; // kr28_8@254
  void *v190; // r6@254
  ExternalContentManager *v191; // r0@254
  ExternalContentManager *v192; // r0@255
  int v193; // r1@256
  int v194; // r8@256
  int i1; // r0@256
  int v196; // r1@258
  int v197; // r11@262
  int v198; // r5@262
  int v199; // r9@262
  int v200; // r7@262
  int v201; // r4@262
  void *v202; // r6@262
  DownloadMonitor *v203; // r0@262
  DownloadMonitor *v204; // r0@263
  int v205; // r5@264
  unsigned int *v206; // r1@265
  unsigned int v207; // r0@267
  unsigned int *v208; // r4@271
  unsigned int v209; // r0@273
  int v210; // r4@278
  int v211; // r0@280
  unsigned int *v212; // r2@281
  unsigned int v213; // r1@283
  signed int v214; // r8@288
  MinecraftGame *v215; // r6@288
  int v216; // r5@290
  int v217; // r7@290
  unsigned int *v218; // r1@291
  unsigned int v219; // r0@293
  unsigned int *v220; // r4@297
  unsigned int v221; // r0@299
  unsigned int *v222; // r2@301
  signed int v223; // r1@303
  unsigned int *v224; // r2@305
  signed int v225; // r1@307
  unsigned int *v226; // r2@309
  signed int v227; // r1@311
  unsigned int *v228; // r2@313
  signed int v229; // r1@315
  unsigned int *v230; // r2@317
  signed int v231; // r1@319
  __int64 v232; // r6@325
  int v233; // r4@326
  int *v234; // r5@327
  bool v235; // zf@328
  int v236; // r5@331
  _DWORD *v237; // r0@331
  __int64 v238; // r1@331
  int v239; // r5@333
  unsigned int *v240; // r1@334
  unsigned int v241; // r0@336
  unsigned int *v242; // r4@340
  unsigned int v243; // r0@342
  void *v244; // r5@349
  LevelSettings *v245; // r0@349
  int v246; // r4@349
  char *v247; // r0@349
  void *v248; // r0@350
  void *v249; // r0@351
  _DWORD *v250; // r0@352
  MinecraftGame *v251; // r7@352
  __int64 v252; // r1@352
  int v253; // r6@352
  void (__fastcall *v254)(int, char *); // r4@352
  int v255; // r1@356
  int i2; // r0@356
  int v257; // r1@358
  int v258; // r0@362
  int v259; // r0@362
  int v260; // r1@363
  int v261; // r0@363
  int i3; // r5@363
  int v263; // r0@368
  int v264; // r4@368
  unsigned int *v265; // r1@369
  unsigned int v266; // r0@371
  unsigned int *v267; // r5@375
  unsigned int v268; // r0@377
  LevelSummary *v269; // r0@384
  LevelSummary *v270; // r4@384
  void *v271; // r0@389
  unsigned int *v272; // r2@391
  signed int v273; // r1@393
  unsigned int *v274; // r2@411
  signed int v275; // r1@413
  unsigned int *v276; // r2@415
  signed int v277; // r1@417
  unsigned int *v278; // r2@435
  signed int v279; // r1@437
  unsigned int *v280; // r2@439
  signed int v281; // r1@441
  unsigned int *v282; // r2@443
  signed int v283; // r1@445
  int v284; // [sp+1Ch] [bp-304h]@256
  int v285; // [sp+20h] [bp-300h]@256
  int v286; // [sp+24h] [bp-2FCh]@256
  int v287; // [sp+28h] [bp-2F8h]@256
  int v288; // [sp+30h] [bp-2F0h]@190
  char v289; // [sp+34h] [bp-2ECh]@368
  int v290; // [sp+38h] [bp-2E8h]@368
  char v291; // [sp+3Ch] [bp-2E4h]@353
  __int64 v292; // [sp+44h] [bp-2DCh]@352
  _DWORD *v293; // [sp+4Ch] [bp-2D4h]@352
  __int64 v294; // [sp+54h] [bp-2CCh]@352
  char v295; // [sp+5Ch] [bp-2C4h]@349
  char *v296; // [sp+124h] [bp-1FCh]@349
  int v297; // [sp+128h] [bp-1F8h]@349
  int v298; // [sp+12Ch] [bp-1F4h]@349
  _DWORD *v299; // [sp+130h] [bp-1F0h]@331
  __int64 v300; // [sp+138h] [bp-1E8h]@331
  int v301; // [sp+140h] [bp-1E0h]@331
  int v302; // [sp+144h] [bp-1DCh]@333
  char v303; // [sp+148h] [bp-1D8h]@331
  Options *v304; // [sp+150h] [bp-1D0h]@290
  int v305; // [sp+154h] [bp-1CCh]@290
  char v306; // [sp+158h] [bp-1C8h]@288
  char v307; // [sp+170h] [bp-1B0h]@278
  void (*v308)(void); // [sp+178h] [bp-1A8h]@278
  int v309; // [sp+180h] [bp-1A0h]@278
  int v310; // [sp+184h] [bp-19Ch]@278
  int v311; // [sp+188h] [bp-198h]@262
  int v312; // [sp+18Ch] [bp-194h]@264
  void *ptr; // [sp+190h] [bp-190h]@248
  LevelSummary *v314; // [sp+194h] [bp-18Ch]@248
  int v315; // [sp+198h] [bp-188h]@248
  int v316; // [sp+19Ch] [bp-184h]@228
  int v317; // [sp+1A0h] [bp-180h]@228
  int v318; // [sp+1A4h] [bp-17Ch]@196
  int v319; // [sp+1A8h] [bp-178h]@192
  _DWORD *v320; // [sp+1ACh] [bp-174h]@190
  __int64 v321; // [sp+1B4h] [bp-16Ch]@190
  CommandOutputSender *v322; // [sp+1BCh] [bp-164h]@182
  Options *v323; // [sp+1C0h] [bp-160h]@156
  int v324; // [sp+1C4h] [bp-15Ch]@156
  int v325; // [sp+1CCh] [bp-154h]@150
  int v326; // [sp+1D4h] [bp-14Ch]@150
  int v327; // [sp+1D8h] [bp-148h]@131
  int v328; // [sp+1DCh] [bp-144h]@131
  int v329; // [sp+1E0h] [bp-140h]@129
  int v330; // [sp+1E4h] [bp-13Ch]@129
  int v331; // [sp+1E8h] [bp-138h]@127
  int v332; // [sp+1ECh] [bp-134h]@127
  int v333; // [sp+1F0h] [bp-130h]@125
  int v334; // [sp+1F4h] [bp-12Ch]@125
  int v335; // [sp+1F8h] [bp-128h]@123
  int v336; // [sp+1FCh] [bp-124h]@109
  char v337; // [sp+200h] [bp-120h]@103
  int v338; // [sp+27Ch] [bp-A4h]@81
  int v339; // [sp+280h] [bp-A0h]@81
  Options *v340; // [sp+284h] [bp-9Ch]@81
  int v341; // [sp+288h] [bp-98h]@81
  char v342; // [sp+28Fh] [bp-91h]@81
  void *v343; // [sp+290h] [bp-90h]@73
  int (__fastcall *v344)(void **, void **, int); // [sp+298h] [bp-88h]@73
  int (__fastcall *v345)(int, ClientInstance *); // [sp+29Ch] [bp-84h]@73
  _DWORD *v346; // [sp+2A0h] [bp-80h]@61
  void (*v347)(void); // [sp+2A8h] [bp-78h]@61
  int (__fastcall *v348)(_QWORD **); // [sp+2ACh] [bp-74h]@61
  char v349; // [sp+2B3h] [bp-6Dh]@61
  int v350; // [sp+2B4h] [bp-6Ch]@48
  int v351; // [sp+2B8h] [bp-68h]@45
  int v352; // [sp+2BCh] [bp-64h]@45
  int v353; // [sp+2C0h] [bp-60h]@41
  int v354; // [sp+2C4h] [bp-5Ch]@35
  char v355; // [sp+2C8h] [bp-58h]@4
  int v356; // [sp+2CCh] [bp-54h]@4
  int v357; // [sp+2D0h] [bp-50h]@4
  char v358; // [sp+2D4h] [bp-4Ch]@4
  __int64 v359; // [sp+2D8h] [bp-48h]@69
  int v360; // [sp+2E0h] [bp-40h]@192
  int v361; // [sp+2E4h] [bp-3Ch]@192
  _DWORD *v362; // [sp+2E8h] [bp-38h]@197
  __int64 v363; // [sp+2F0h] [bp-30h]@197

  v1 = this;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v2 + 280))(&v357);
  std::__shared_ptr<RemixService,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RemixService>,Social::UserManager &,MinecraftEventing &>(
    (int)&v355,
    (int)&v358,
    *((Social::UserManager **)v1 + 86),
    *((MinecraftEventing **)v1 + 126));
  v3 = *(_QWORD *)&v355;
  *(_DWORD *)&v355 = 0;
  v356 = 0;
  *((_DWORD *)v1 + 100) = v3;
  v4 = *((_DWORD *)v1 + 101);
  *((_DWORD *)v1 + 101) = HIDWORD(v3);
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
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
  v9 = v356;
  if ( v356 )
    v10 = (unsigned int *)(v356 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  v14 = *((_DWORD *)v1 + 126);
    v15 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v15 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v16 = AppPlatform::getTempPath(*v15);
  sub_DA73B4(&v354, v16);
  sub_DA73D4((const void **)&v354, "/Treatments/", 0xCu);
  v17 = operator new(0x4Cu);
  TreatmentService::TreatmentService((int)v17, v14, &v354);
  v18 = *((_DWORD *)v1 + 90);
  *((_DWORD *)v1 + 90) = v17;
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  v19 = (void *)(v354 - 12);
  if ( (int *)(v354 - 12) != &dword_28898C0 )
    v222 = (unsigned int *)(v354 - 4);
        v223 = __ldrex(v222);
      while ( __strex(v223 - 1, v222) );
      v223 = (*v222)--;
    if ( v223 <= 0 )
      j_j_j_j_j__ZdlPv_9(v19);
  v20 = *((_DWORD *)v1 + 90);
    v21 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v21 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v21 + 488))(&v353);
  TreatmentService::fetchTreatmentsFor(v20, &v353);
  v22 = (void *)(v353 - 12);
  if ( (int *)(v353 - 12) != &dword_28898C0 )
    v224 = (unsigned int *)(v353 - 4);
        v225 = __ldrex(v224);
      while ( __strex(v225 - 1, v224) );
      v225 = (*v224)--;
    if ( v225 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
    v23 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v23 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v24 = AppPlatform::getTempPath(*v23);
  sub_DA73B4(&v351, v24);
  sub_DA73D4((const void **)&v351, "/ContentCache/StoreOffers/", 0x1Au);
  std::make_unique<ContentCatalogService,std::string>(&v352, &v351);
  v25 = v352;
  v352 = 0;
  v26 = *((_DWORD *)v1 + 75);
  *((_DWORD *)v1 + 75) = v25;
  if ( v26 )
    (*(void (**)(void))(*(_DWORD *)v26 + 4))();
  v27 = (void *)(v351 - 12);
  if ( (int *)(v351 - 12) != &dword_28898C0 )
    v226 = (unsigned int *)(v351 - 4);
        v227 = __ldrex(v226);
      while ( __strex(v227 - 1, v226) );
      v227 = (*v226)--;
    if ( v227 <= 0 )
      j_j_j_j_j__ZdlPv_9(v27);
  ServiceClient::setEventing(*((ServiceClient **)v1 + 75), *((MinecraftEventing **)v1 + 126));
  ServiceClient::setUserManager(*((ServiceClient **)v1 + 75), *((Social::UserManager **)v1 + 86));
  v28 = *((_QWORD *)v1 + 37);
  OfferRepository::getStoreId((OfferRepository *)&v350, v28, 1);
  ContentCatalogService::setPlatformOverride(SHIDWORD(v28), &v350);
  v29 = (void *)(v350 - 12);
  if ( (int *)(v350 - 12) != &dword_28898C0 )
    v228 = (unsigned int *)(v350 - 4);
        v229 = __ldrex(v228);
      while ( __strex(v229 - 1, v228) );
      v229 = (*v228)--;
    if ( v229 <= 0 )
      j_j_j_j_j__ZdlPv_9(v29);
  LODWORD(v30) = operator new(0x58u);
  v31 = (ThirdPartyServerRepository *)LODWORD(v30);
  ThirdPartyServerRepository::ThirdPartyServerRepository(v30);
  v32 = (ThirdPartyServerRepository *)*((_DWORD *)v1 + 77);
  *((_DWORD *)v1 + 77) = v31;
  if ( v32 )
    v33 = (void *)ThirdPartyServerRepository::~ThirdPartyServerRepository(v32);
    operator delete(v33);
    v31 = (ThirdPartyServerRepository *)*((_DWORD *)v1 + 77);
  ThirdPartyServerRepository::setup(v31, *((MinecraftEventing **)v1 + 126), *((Social::UserManager **)v1 + 86));
  v34 = operator new(0x1Cu);
  LevelLoader::LevelLoader((int)v34, (int)v1);
  v35 = (LevelLoader *)*((_DWORD *)v1 + 128);
  *((_DWORD *)v1 + 128) = v34;
  if ( v35 )
    v36 = LevelLoader::~LevelLoader(v35);
    operator delete((void *)v36);
  v37 = *((_DWORD *)v1 + 55);
  v38 = (int)v1 + 216;
  for ( i = (int)v1 + 216; v37; v37 = *(_DWORD *)(v37 + 8) )
    i = v37;
  v40 = (int)v1 + 216;
  if ( i != v38 )
    if ( *(_BYTE *)(i + 16) )
      i = (int)v1 + 216;
    v40 = i;
  v41 = *(_DWORD *)(v40 + 20);
  if ( ClientInstance::isPrimaryClient(*(ClientInstance **)(v40 + 20)) == 1 )
    MinecraftGame::_initPerMachineOptionObservers(v1);
  MinecraftGame::_initPerUserOptionObservers(__PAIR__(v41, (unsigned int)v1));
  v349 = 0;
  v42 = operator new(8u);
  *v42 = v1;
  v42[1] = &v349;
  v346 = v42;
  v347 = (void (*)(void))sub_C1745C;
  v348 = sub_C1738C;
  GlobalResourcesCrashRecovery::createResourceLockOrResetGlobalResources((int)&v346);
  if ( v347 )
    v347();
  v43 = *((_DWORD *)v1 + 55);
  for ( j = (int)v1 + 216; v43; v43 = *(_DWORD *)(v43 + 8) )
    j = v43;
  v45 = (int)v1 + 216;
  if ( j != v38 )
    if ( *(_BYTE *)(j + 16) )
      j = (int)v1 + 216;
    v45 = j;
  v46 = ClientInstance::getHoloInput(*(ClientInstance **)(v45 + 20));
  v47 = (*(int (**)(void))(*(_DWORD *)v46 + 76))();
  MinecraftGame::_buildVanillaClientStartStartupStack(v1, 0, v47);
  MinecraftGame::_deserializeGlobalResourcePacks((MinecraftGame *)((char *)&v359 + 4), (int)v1);
  v48 = (ResourcePackManager *)*((_DWORD *)v1 + 80);
  v359 = HIDWORD(v359);
  ResourcePackManager::setStack(v48, (int *)&v359, 2, 1);
  if ( (_DWORD)v359 )
    (*(void (**)(void))(*(_DWORD *)v359 + 4))();
  LODWORD(v359) = 0;
  if ( HIDWORD(v359) )
    (*(void (**)(void))(*(_DWORD *)HIDWORD(v359) + 4))();
  v343 = operator new(1u);
  v49 = (void (*)(void))sub_C17566;
  v344 = sub_C17566;
  v345 = sub_C17560;
  v50 = *((_DWORD *)v1 + 56);
  if ( v50 == v38 )
    goto LABEL_460;
  do
    if ( !v49 )
      sub_DA7654();
    v345((int)&v343, *(ClientInstance **)(v50 + 20));
    v51 = sub_DA7F5C(v50);
    v49 = (void (*)(void))v344;
    v50 = v51;
  while ( v51 != v38 );
  if ( v344 )
LABEL_460:
    v49();
  v342 = 0;
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v340, (int)v1);
  Options::getDevResetClientId(v340);
  v338 = 0;
  v339 = 0;
  MinecraftGame::generateClientId((int)v1, 0, &v342, v52, 0LL, (int)&v338);
  v53 = v341;
  if ( v341 )
    v54 = (unsigned int *)(v341 + 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 == 1 )
      v56 = (unsigned int *)(v53 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 8))(v53);
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v53 + 12))(v53);
  v58 = *((_DWORD *)v1 + 55);
  for ( k = (int)v1 + 216; v58; v58 = *(_DWORD *)(v58 + 8) )
    k = v58;
  v60 = (int)v1 + 216;
  if ( k != v38 )
    if ( *(_BYTE *)(k + 16) )
      k = (int)v1 + 216;
    v60 = k;
  ClientInstance::postInitRenderResources(*(ClientInstance **)(v60 + 20));
  v61 = *((_DWORD *)v1 + 75);
  v62 = *((_DWORD *)v1 + 91);
  v63 = *((_QWORD *)v1 + 65);
  v64 = *((_DWORD *)v1 + 169);
  v65 = operator new(0x28u);
  WorldTemplateManager::WorldTemplateManager((int)v65, v62, SHIDWORD(v63), v63, v61, v64);
  v66 = (WorldTemplateManager *)*((_DWORD *)v1 + 79);
  *((_DWORD *)v1 + 79) = v65;
  if ( v66 )
    v67 = WorldTemplateManager::~WorldTemplateManager(v66);
    operator delete((void *)v67);
  v68 = operator new(0x14u);
  v69 = (int)v68;
  *(_QWORD *)v68 = (unsigned int)&off_26EAC8C;
  v68[2] = 0;
  v68[3] = 0;
  v68[4] = 0;
  PackInstance::PackInstance((int)&v337, *(_DWORD *)(*((_DWORD *)v1 + 78) + 44), -1, 0);
  ResourcePackStack::add(v69, (int)&v337, *((_DWORD *)v1 + 78), 0);
  PackReport::~PackReport((PackReport *)&v337);
  v70 = *((_DWORD *)v1 + 55);
  for ( l = (int)v1 + 216; v70; v70 = *(_DWORD *)(v70 + 8) )
    l = v70;
  v72 = (int)v1 + 216;
  if ( l != v38 )
    if ( *(_BYTE *)(l + 16) )
      l = (int)v1 + 216;
    v72 = l;
  v73 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v72 + 20));
  v74 = (ResourcePackManager *)Minecraft::getResourceLoader(v73);
  v336 = v69;
  ResourcePackManager::setStack(v74, &v336, 3, 1);
  if ( v336 )
    (*(void (**)(void))(*(_DWORD *)v336 + 4))();
  v336 = 0;
  v75 = (int)v1 + 216;
  for ( m = *((_DWORD *)v1 + 55); m; m = *(_DWORD *)(m + 8) )
    v75 = m;
  v77 = (int)v1 + 216;
  if ( v75 != v38 )
    if ( *(_BYTE *)(v75 + 16) )
      v75 = (int)v1 + 216;
    v77 = v75;
  v78 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v77 + 20));
  Minecraft::init(v78, 0);
  v79 = *((_DWORD *)v1 + 55);
  for ( n = (int)v1 + 216; v79; v79 = *(_DWORD *)(v79 + 8) )
    n = v79;
  v81 = (int)v1 + 216;
  if ( n != v38 )
    if ( *(_BYTE *)(n + 16) )
      n = (int)v1 + 216;
    v81 = n;
  (*(void (**)(void))(**(_DWORD **)(v81 + 20) + 24))();
  ClientSkinInfoData::mTextures = *((_DWORD *)v1 + 15);
  v82 = (ScreenRenderer *)ScreenRenderer::singleton((ScreenRenderer *)&ClientSkinInfoData::mTextures);
  ScreenRenderer::loadMaterials(v82, *((mce::TextureGroup **)v1 + 15));
  std::make_unique<EmoticonManager,char const(&)[15]>((int **)&v335, "font/emoticons");
  v83 = v335;
  v335 = 0;
  v84 = (EmoticonManager *)*((_DWORD *)v1 + 22);
  *((_DWORD *)v1 + 22) = v83;
  if ( v84 )
    v85 = EmoticonManager::~EmoticonManager(v84);
    operator delete((void *)v85);
  v86 = *((_DWORD *)v1 + 15);
  v333 = v86;
  std::make_unique<Font,char const(&)[14],char const(&)[12],mce::TextureGroup *>(
    &v334,
    "font/default8",
    "font/glyph_",
    &v333);
  v87 = v334;
  v334 = 0;
  v88 = *((_DWORD *)v1 + 18);
  *((_DWORD *)v1 + 18) = v87;
  if ( v88 )
    (*(void (**)(void))(*(_DWORD *)v88 + 4))();
  v89 = *((_DWORD *)v1 + 15);
  v331 = v89;
  std::make_unique<Font,char const(&)[15],char const(&)[1],mce::TextureGroup *>(
    &v332,
    "font/ascii_sga",
    (const char *)&unk_257BC67,
    &v331);
  v90 = v332;
  v332 = 0;
  v91 = *((_DWORD *)v1 + 19);
  *((_DWORD *)v1 + 19) = v90;
  if ( v91 )
    (*(void (**)(void))(*(_DWORD *)v91 + 4))();
  v92 = *((_DWORD *)v1 + 15);
  v329 = v92;
  std::make_unique<Font,char const(&)[1],char const(&)[12],mce::TextureGroup *>(
    &v330,
    &v329);
  v93 = v330;
  v330 = 0;
  v94 = *((_DWORD *)v1 + 20);
  *((_DWORD *)v1 + 20) = v93;
  if ( v94 )
    (*(void (**)(void))(*(_DWORD *)v94 + 4))();
  v95 = *((_DWORD *)v1 + 15);
  v327 = v95;
  std::make_unique<Font,char const(&)[1],char const(&)[20],mce::TextureGroup *>(
    &v328,
    "font/smooth/smooth_",
    &v327);
  v96 = v328;
  v328 = 0;
  v97 = *((_DWORD *)v1 + 21);
  *((_DWORD *)v1 + 21) = v96;
  if ( v97 )
    (*(void (**)(void))(*(_DWORD *)v97 + 4))();
  LODWORD(v98) = operator new(0x3Cu);
  v99 = v98;
  TextToIconMapper::TextToIconMapper(v98);
  v100 = *((_DWORD *)v1 + 23);
  *((_DWORD *)v1 + 23) = v99;
  if ( v100 )
    std::default_delete<TextToIconMapper>::operator()((int)v1 + 92, v100);
  MinecraftGame::setSmoothFontStyle(v1);
  v101 = *((_DWORD *)v1 + 55);
  for ( ii = (int)v1 + 216; v101; v101 = *(_DWORD *)(v101 + 8) )
    ii = v101;
  v103 = (int)v1 + 216;
  if ( ii != v38 )
    if ( *(_BYTE *)(ii + 16) )
      ii = (int)v1 + 216;
    v103 = ii;
  v104 = (const UIProfanityContext *)ClientInstance::getUIProfanityContext(*(ClientInstance **)(v103 + 20));
  v105 = (MinecraftUIMeasureStrategy *)operator new(8u);
  MinecraftUIMeasureStrategy::MinecraftUIMeasureStrategy(v105, v104);
  v106 = *((_DWORD *)v1 + 24);
  *((_DWORD *)v1 + 24) = v105;
  if ( v106 )
    (*(void (**)(void))(*(_DWORD *)v106 + 4))();
  if ( v349 )
    v107 = *((_DWORD *)v1 + 55);
    for ( jj = (int)v1 + 216; v107; v107 = *(_DWORD *)(v107 + 8) )
      jj = v107;
    v109 = (int)v1 + 216;
    if ( jj != v38 )
      if ( *(_BYTE *)(jj + 16) )
        jj = (int)v1 + 216;
      v109 = jj;
    v110 = ClientInstance::getToastManager(*(ClientInstance **)(v109 + 20));
    sub_DA7364((void **)&v326, "resourcePack.crashRecovery.title");
    sub_DA7364((void **)&v325, "resourcePack.crashRecovery.message");
    ToastManager::pushToast(v110, 5, &v326, &v325, (int *)&Util::EMPTY_STRING);
    v111 = (void *)(v325 - 12);
    if ( (int *)(v325 - 12) != &dword_28898C0 )
      v274 = (unsigned int *)(v325 - 4);
          v275 = __ldrex(v274);
        while ( __strex(v275 - 1, v274) );
        v275 = (*v274)--;
      if ( v275 <= 0 )
        j_j_j_j_j__ZdlPv_9(v111);
    v112 = (void *)(v326 - 12);
    if ( (int *)(v326 - 12) != &dword_28898C0 )
      v276 = (unsigned int *)(v326 - 4);
          v277 = __ldrex(v276);
        while ( __strex(v277 - 1, v276) );
        v277 = (*v276)--;
      if ( v277 <= 0 )
        j_j_j_j_j__ZdlPv_9(v112);
  MinecraftGame::_pushAlwaysActiveScreens(v1);
  *((_BYTE *)v1 + 116) = 1;
  LODWORD(v113) = operator new(0x20u);
  v114 = LODWORD(v113);
  ExternalServerFile::ExternalServerFile(v113);
  v115 = *((_DWORD *)v1 + 14);
  *((_DWORD *)v1 + 14) = v114;
  if ( v115 )
    std::default_delete<ExternalServerFile>::operator()((int)v1 + 56, v115);
  ExternalServerFile::load(*((ExternalServerFile **)v1 + 14));
  v116 = (Automation::AutomationClient *)operator new(0x2F0u);
  Automation::AutomationClient::AutomationClient(v116, (int)v1 + 16);
  v117 = *((_DWORD *)v1 + 104);
  *((_DWORD *)v1 + 104) = v116;
  if ( v117 )
    (*(void (**)(void))(*(_DWORD *)v117 + 4))();
    v116 = (Automation::AutomationClient *)*((_DWORD *)v1 + 104);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v323, (int)v1);
  v118 = Options::getRequireWebsocketEncryption(v323);
  Automation::AutomationClient::setRequireEncryption(v116, v118);
  v119 = v324;
  if ( v324 )
    v120 = (unsigned int *)(v324 + 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 == 1 )
      v122 = (unsigned int *)(v119 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v119 + 8))(v119);
          v123 = __ldrex(v122);
        while ( __strex(v123 - 1, v122) );
        v123 = (*v122)--;
      if ( v123 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v119 + 12))(v119);
  v124 = *((_DWORD *)v1 + 55);
  for ( kk = (int)v1 + 216; v124; v124 = *(_DWORD *)(v124 + 8) )
    kk = v124;
  v126 = (int)v1 + 216;
  if ( kk != v38 )
    if ( *(_BYTE *)(kk + 16) )
      kk = (int)v1 + 216;
    v126 = kk;
  v127 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v126 + 20));
  v128 = (int *)Minecraft::getCommands(v127);
  v129 = *((_DWORD *)v1 + 55);
  v130 = (int)v1 + 216;
  for ( ll = (Automation::AutomationClient *)*((_DWORD *)v1 + 104); v129; v129 = *(_DWORD *)(v129 + 8) )
    v130 = v129;
  v132 = (int)v1 + 216;
  if ( v130 != v38 )
    if ( *(_BYTE *)(v130 + 16) )
      v130 = (int)v1 + 216;
    v132 = v130;
  v133 = ClientInstance::getGuiData(*(ClientInstance **)(v132 + 20));
  v134 = (CommandOutputSender *)operator new(0xCu);
  ClientCommandOutputSender::ClientCommandOutputSender(v134, ll, v133);
  v322 = v134;
  MinecraftCommands::setOutputSender(v128, (int *)&v322);
  if ( v322 )
    (*(void (**)(void))(*(_DWORD *)v322 + 4))();
  v322 = 0;
  v135 = (int)v1 + 216;
  for ( mm = *((_DWORD *)v1 + 55); mm; mm = *(_DWORD *)(mm + 8) )
    v135 = mm;
  v137 = (int)v1 + 216;
  if ( v135 != v38 )
    if ( *(_BYTE *)(v135 + 16) )
      v135 = (int)v1 + 216;
    v137 = v135;
  v288 = (int)v1 + 216;
  v138 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v137 + 20));
  v139 = Minecraft::getCommands(v138);
  v140 = operator new(4u);
  LODWORD(v141) = sub_C176B0;
  *v140 = v1;
  HIDWORD(v141) = sub_C17594;
  v320 = v140;
  v321 = v141;
  MinecraftCommands::registerChatPermissionsCallback(v139, (int)&v320);
  if ( (_DWORD)v321 )
    ((void (*)(void))v321)();
  v142 = *((_DWORD *)v1 + 126);
  v143 = (*(int (__fastcall **)(MinecraftGame *))(*(_DWORD *)v1 + 128))(v1);
  v144 = __PAIR__(v143, (unsigned int)operator new(0x38u));
  v145 = v144;
  v360 = v357;
  v361 = *(_DWORD *)(v357 - 12);
  Social::Events::AutomationEventLogger::AutomationEventLogger(v144);
  v319 = v145;
  MinecraftEventing::addListener(v142, &v319);
  if ( v319 )
    (*(void (**)(void))(*(_DWORD *)v319 + 4))();
  v319 = 0;
  v146 = *((_DWORD *)v1 + 75);
  v147 = *((_QWORD *)v1 + 39) >> 32;
  v148 = *((_QWORD *)v1 + 39);
  v149 = *((_QWORD *)v1 + 45) >> 32;
  v150 = *((_QWORD *)v1 + 45);
  v151 = operator new(0x128u);
  StoreCatalogRepository::StoreCatalogRepository((unsigned int)v151, v146, v149, v148, __PAIR__(v150, v147));
  v152 = *((_DWORD *)v1 + 76);
  *((_DWORD *)v1 + 76) = v151;
  if ( v152 )
    (*(void (**)(void))(*(_DWORD *)v152 + 4))();
    v151 = (void *)*((_DWORD *)v1 + 76);
  OfferRepository::getStoreId((OfferRepository *)&v318, *((_DWORD *)v1 + 74), 1);
  StoreCatalogRepository::setStoreID((int)v151, &v318);
  v153 = (void *)(v318 - 12);
  if ( (int *)(v318 - 12) != &dword_28898C0 )
    v230 = (unsigned int *)(v318 - 4);
        v231 = __ldrex(v230);
      while ( __strex(v231 - 1, v230) );
      v231 = (*v230)--;
    if ( v231 <= 0 )
      j_j_j_j_j__ZdlPv_9(v153);
  v154 = *((_DWORD *)v1 + 65);
  v155 = *((_DWORD *)v1 + 78);
  v156 = operator new(0x40u);
  v157 = operator new(4u);
  LODWORD(v158) = sub_C177EC;
  *v157 = v1;
  HIDWORD(v158) = sub_C176E8;
  v362 = v157;
  v363 = v158;
  LevelArchiver::LevelArchiver((int)v156, v154, v155, (int)&v362);
  if ( (_DWORD)v363 )
    ((void (*)(void))v363)();
  v159 = operator new(0x14u);
  v160 = v159;
  *((_DWORD *)v159 + 1) = 1;
  *((_DWORD *)v159 + 2) = 1;
  v161 = (unsigned int *)((char *)v159 + 8);
  *v160 = &off_26D68AC;
  v160[4] = v156;
  if ( v156 )
    *v156 = v156;
        v162 = __ldrex(v161);
      while ( __strex(v162 + 1, v161) );
      *v161 = 2;
    v163 = v156[1];
    if ( v163 )
      v164 = (unsigned int *)(v163 + 8);
          v165 = __ldrex(v164);
        while ( __strex(v165 - 1, v164) );
        v165 = (*v164)--;
      if ( v165 == 1 )
        (*(void (**)(void))(*(_DWORD *)v163 + 12))();
    v156[1] = v160;
  *((_DWORD *)v1 + 93) = v156;
  v166 = *((_DWORD *)v1 + 94);
  *((_DWORD *)v1 + 94) = v160;
  if ( v166 )
    v167 = (unsigned int *)(v166 + 4);
        v168 = __ldrex(v167);
      while ( __strex(v168 - 1, v167) );
      v168 = (*v167)--;
    if ( v168 == 1 )
      v169 = (unsigned int *)(v166 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v166 + 8))(v166);
          v170 = __ldrex(v169);
        while ( __strex(v170 - 1, v169) );
        v170 = (*v169)--;
      if ( v170 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v166 + 12))(v166);
  v171 = *((_DWORD *)v1 + 93);
  v316 = *((_DWORD *)v1 + 91);
  v172 = *((_DWORD *)v1 + 92);
  v317 = v172;
  if ( v172 )
    v173 = (unsigned int *)(v172 + 4);
        v174 = __ldrex(v173);
      while ( __strex(v174 + 1, v173) );
      ++*v173;
  LevelArchiver::setEntitlementManager(v171, (int)&v316);
  v175 = v317;
  if ( v317 )
    v176 = (unsigned int *)(v317 + 4);
        v177 = __ldrex(v176);
      while ( __strex(v177 - 1, v176) );
      v177 = (*v176)--;
    if ( v177 == 1 )
      v178 = (unsigned int *)(v175 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v175 + 8))(v175);
          v179 = __ldrex(v178);
        while ( __strex(v179 - 1, v178) );
        v179 = (*v178)--;
      if ( v179 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v175 + 12))(v175);
  ptr = 0;
  v314 = 0;
  v315 = 0;
  v180 = (int)v1 + 216;
  for ( nn = *((_DWORD *)v1 + 55); nn; nn = *(_DWORD *)(nn + 8) )
    v180 = nn;
  v182 = (int)v1 + 216;
  if ( v180 != v288 )
    if ( *(_BYTE *)(v180 + 16) )
      v180 = (int)v1 + 216;
    v182 = v180;
  v183 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v182 + 20));
  v184 = Minecraft::getLevelSource(v183);
  (*(void (**)(void))(*(_DWORD *)v184 + 12))();
  v185 = *((_DWORD *)v1 + 25);
  v186 = *((_QWORD *)v1 + 39);
  v187 = *((_DWORD *)v1 + 128);
  v188 = *((_DWORD *)v1 + 169);
  v189 = *((_QWORD *)v1 + 65);
  v190 = operator new(0x6Cu);
  ExternalContentManager::ExternalContentManager(
    (int)v190,
    v187,
    v186,
    SHIDWORD(v186),
    SHIDWORD(v189),
    v189,
    v185,
    v188);
  v191 = (ExternalContentManager *)*((_DWORD *)v1 + 129);
  *((_DWORD *)v1 + 129) = v190;
  if ( v191 )
    v192 = ExternalContentManager::~ExternalContentManager(v191);
    operator delete((void *)v192);
  v287 = *((_DWORD *)v1 + 75);
  v193 = *((_DWORD *)v1 + 55);
  v284 = *((_DWORD *)v1 + 79);
  v194 = *((_DWORD *)v1 + 80);
  v286 = *((_DWORD *)v1 + 78);
  v285 = *((_DWORD *)v1 + 126);
  for ( i1 = (int)v1 + 216; v193; v193 = *(_DWORD *)(v193 + 8) )
    i1 = v193;
  v196 = (int)v1 + 216;
  if ( i1 != v288 )
    if ( *(_BYTE *)(i1 + 16) )
      i1 = (int)v1 + 216;
    v196 = i1;
  v197 = (int)v1 + 216;
  v198 = ClientInstance::getToastManager(*(ClientInstance **)(v196 + 20));
  v199 = *((_DWORD *)v1 + 66);
  v200 = *((_DWORD *)v1 + 129);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v311, (int)v1);
  v201 = v311;
  v202 = operator new(0xCCu);
  DownloadMonitor::DownloadMonitor((int)v202, v287, v285, v286, v194, v284, v198, v199, v200, v201);
  v203 = (DownloadMonitor *)*((_DWORD *)v1 + 73);
  *((_DWORD *)v1 + 73) = v202;
  if ( v203 )
    v204 = DownloadMonitor::~DownloadMonitor(v203);
    operator delete((void *)v204);
  v205 = v312;
  if ( v312 )
    v206 = (unsigned int *)(v312 + 4);
        v207 = __ldrex(v206);
      while ( __strex(v207 - 1, v206) );
      v207 = (*v206)--;
    if ( v207 == 1 )
      v208 = (unsigned int *)(v205 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v205 + 8))(v205);
          v209 = __ldrex(v208);
        while ( __strex(v209 - 1, v208) );
        v209 = (*v208)--;
      if ( v209 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v205 + 12))(v205);
  v210 = *((_DWORD *)v1 + 73);
  v309 = 0;
  v310 = 0;
  StoreCatalogRepository::getDownloadCallback((StoreCatalogRepository *)&v307, *((_DWORD *)v1 + 76));
  DownloadMonitor::addDownloadCallback(v210, (int)&v309, (int)&v307);
  if ( v308 )
    v308();
  v211 = v310;
  if ( v310 )
    v212 = (unsigned int *)(v310 + 8);
        v213 = __ldrex(v212);
      while ( __strex(v213 - 1, v212) );
      v213 = (*v212)--;
    if ( v213 == 1 )
      (*(void (**)(void))(*(_DWORD *)v211 + 12))();
  v214 = OfferRepository::isGameLicensed(*((OfferRepository **)v1 + 74));
  OfferRepository::getExtraLicenseData((OfferRepository *)&v306, *((_DWORD *)v1 + 74));
  MinecraftEventing::fireEventLicenseCheck(*((_DWORD *)v1 + 126), v214, (int)&v306);
  MinecraftEventing::forceSendEvents(*((MinecraftEventing **)v1 + 126));
  v215 = v1;
  if ( v214 == 1 )
    if ( ptr == (void *)v314 )
      goto LABEL_461;
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v304, (int)v1);
    v216 = Options::getDevAutoLoadLevel(v304);
    v217 = v305;
    if ( v305 )
      v218 = (unsigned int *)(v305 + 4);
          v219 = __ldrex(v218);
        while ( __strex(v219 - 1, v218) );
        v219 = (*v218)--;
      if ( v219 == 1 )
        v220 = (unsigned int *)(v217 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v217 + 8))(v217);
        if ( &pthread_create )
        {
          __dmb();
          do
            v221 = __ldrex(v220);
          while ( __strex(v221 - 1, v220) );
        }
        else
          v221 = (*v220)--;
        if ( v221 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v217 + 12))(v217);
    if ( v216 )
      v232 = *(_QWORD *)&ptr;
      if ( ptr != (void *)v314 )
        v233 = v314 - (LevelSummary *)ptr;
        std::__introsort_loop<__gnu_cxx::__normal_iterator<LevelSummary *,std::vector<LevelSummary,std::allocator<LevelSummary>>>,int,__gnu_cxx::__ops::_Iter_less_iter>(
          (int)ptr,
          (int)v314,
          2 * (31 - __clz((v314 - (LevelSummary *)ptr) >> 6)));
        if ( v233 <= 1024 )
          std::__insertion_sort<__gnu_cxx::__normal_iterator<LevelSummary *,std::vector<LevelSummary,std::allocator<LevelSummary>>>,__gnu_cxx::__ops::_Iter_less_iter>(
            (LevelSummary *)v232,
            (LevelSummary *)HIDWORD(v232));
          v234 = (int *)(v232 + 1024);
            (LevelSummary *)(v232 + 1024));
          if ( (_DWORD)v232 + 1024 != HIDWORD(v232) )
          {
            do
            {
              std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<LevelSummary *,std::vector<LevelSummary,std::allocator<LevelSummary>>>,__gnu_cxx::__ops::_Val_less_iter>(v234);
              v234 = (int *)(v232 + 1088);
              v235 = HIDWORD(v232) - 1024 == (_DWORD)v232 + 64;
              LODWORD(v232) = v232 + 64;
            }
            while ( !v235 );
          }
      v244 = ptr;
      sub_DA73B4(&v298, (int *)ptr);
      sub_DA73B4(&v297, (int *)v244 + 1);
      v296 = (char *)&unk_28898CC;
      v215 = v1;
      v246 = *((_BYTE *)v244 + 40) != 0;
      v245 = (LevelSettings *)LevelSettings::LevelSettings((LevelSettings *)&v295);
      MinecraftGame::startLocalServer((int)v1, &v298, &v297, (int *)&v296, v246, v245);
      LevelSettings::~LevelSettings((LevelSettings *)&v295);
      v247 = v296 - 12;
      if ( (int *)(v296 - 12) != &dword_28898C0 )
        v278 = (unsigned int *)(v296 - 4);
            v279 = __ldrex(v278);
          while ( __strex(v279 - 1, v278) );
          v279 = (*v278)--;
        if ( v279 <= 0 )
          j_j_j_j_j__ZdlPv_9(v247);
      v248 = (void *)(v297 - 12);
      if ( (int *)(v297 - 12) != &dword_28898C0 )
        v280 = (unsigned int *)(v297 - 4);
            v281 = __ldrex(v280);
          while ( __strex(v281 - 1, v280) );
          v281 = (*v280)--;
        if ( v281 <= 0 )
          j_j_j_j_j__ZdlPv_9(v248);
      v249 = (void *)(v298 - 12);
      if ( (int *)(v298 - 12) != &dword_28898C0 )
        v282 = (unsigned int *)(v298 - 4);
            v283 = __ldrex(v282);
          while ( __strex(v283 - 1, v282) );
          v283 = (*v282)--;
        if ( v283 <= 0 )
          j_j_j_j_j__ZdlPv_9(v249);
LABEL_461:
      Social::UserManager::getPrimaryUser((Social::UserManager *)&v301, *((_DWORD *)v1 + 86));
      v236 = v301;
      v237 = operator new(4u);
      LODWORD(v238) = sub_C17C92;
      *v237 = v1;
      HIDWORD(v238) = sub_C17C88;
      v299 = v237;
      v300 = v238;
      Social::User::connectAsync((int)&v303, v236, (int)&v299);
      if ( (_DWORD)v300 )
        ((void (*)(void))v300)();
      v239 = v302;
      if ( v302 )
        v240 = (unsigned int *)(v302 + 4);
            v241 = __ldrex(v240);
          while ( __strex(v241 - 1, v240) );
          v241 = (*v240)--;
        if ( v241 == 1 )
          v242 = (unsigned int *)(v239 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v239 + 8))(v239);
          if ( &pthread_create )
            __dmb();
              v243 = __ldrex(v242);
            while ( __strex(v243 - 1, v242) );
          else
            v243 = (*v242)--;
          if ( v243 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v239 + 12))(v239);
      CallbackToken::release((CallbackToken *)&v303);
      CallbackToken::~CallbackToken((CallbackToken *)&v303);
  MinecraftGame::_registerOnInitUriListeners(v215);
  v250 = operator new(0xCu);
  v251 = v215;
  HIDWORD(v252) = std::_Function_handler<RakNet::RakNetGUID ()(void),std::_Bind<std::_Mem_fn<RakNet::RakNetGUID (MinecraftGame::*)(void)> ()(MinecraftGame*)>>::_M_invoke;
  LODWORD(v252) = std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<RakNet::RakNetGUID (MinecraftGame::*)(void)> ()(MinecraftGame*)>>::_M_manager;
  *(_QWORD *)v250 = (unsigned int)MinecraftGame::getServerGUID;
  v250[2] = v215;
  v293 = v250;
  v294 = v252;
  v253 = NetworkHandler::getServerLocator(*((NetworkHandler **)v215 + 84));
  v254 = *(void (__fastcall **)(int, char *))(*(_DWORD *)v253 + 44);
  LODWORD(v292) = 0;
  if ( (_DWORD)v294 )
    ((void (__fastcall *)(char *, _DWORD **, signed int))v294)(&v291, &v293, 2);
    v292 = v294;
  v254(v253, &v291);
  if ( (_DWORD)v292 )
    ((void (*)(void))v292)();
  (*(void (**)(void))(**((_DWORD **)v251 + 59) + 8))();
  v255 = *((_DWORD *)v251 + 55);
  for ( i2 = (int)v1 + 216; v255; v255 = *(_DWORD *)(v255 + 8) )
    i2 = v255;
  v257 = (int)v1 + 216;
  if ( i2 != v288 )
    if ( *(_BYTE *)(i2 + 16) )
      i2 = (int)v1 + 216;
    v257 = i2;
  v258 = ClientInstance::getHoloInput(*(ClientInstance **)(v257 + 20));
  v259 = (*(int (**)(void))(*(_DWORD *)v258 + 76))();
  MinecraftGame::_buildVanillaClientStack(v251, 0, v259);
  *((_BYTE *)v251 + 668) = 1;
  if ( !v214 )
    v260 = *((_DWORD *)v251 + 55);
    v261 = (int)v1 + 216;
    for ( i3 = *((_DWORD *)v251 + 26); v260; v260 = *(_DWORD *)(v260 + 8) )
      v261 = v260;
    if ( v261 != v288 && !*(_BYTE *)(v261 + 16) )
      v197 = v261;
    v263 = ClientInstance::getSceneFactory(*(ClientInstance **)(v197 + 20));
    SceneFactory::createNoLicenseScreen((SceneFactory *)&v289, v263);
    SceneStack::pushScreen(i3, (int)&v289, 1);
    v264 = v290;
    if ( v290 )
      v265 = (unsigned int *)(v290 + 4);
          v266 = __ldrex(v265);
        while ( __strex(v266 - 1, v265) );
        v266 = (*v265)--;
      if ( v266 == 1 )
        v267 = (unsigned int *)(v264 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v264 + 8))(v264);
            v268 = __ldrex(v267);
          while ( __strex(v268 - 1, v267) );
          v268 = (*v267)--;
        if ( v268 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v264 + 12))(v264);
    ((void (*)(void))v294)();
  v270 = v314;
  v269 = (LevelSummary *)ptr;
  if ( ptr != (void *)v314 )
    do
      v269 = (LevelSummary *)((char *)LevelSummary::~LevelSummary(v269) + 64);
    while ( v270 != v269 );
    v269 = (LevelSummary *)ptr;
  if ( v269 )
    operator delete((void *)v269);
  v271 = (void *)(v357 - 12);
  if ( (int *)(v357 - 12) != &dword_28898C0 )
    v272 = (unsigned int *)(v357 - 4);
        v273 = __ldrex(v272);
      while ( __strex(v273 - 1, v272) );
      v273 = (*v272)--;
    if ( v273 <= 0 )
      j_j_j_j_j__ZdlPv_9(v271);
}


int __fastcall MinecraftGame::setEduMode(int result, bool a2)
{
  *(_BYTE *)(result + 488) = a2;
  return result;
}


int __fastcall MinecraftGame::getServerGUID(MinecraftGame *this, int a2)
{
  MinecraftGame *v2; // r4@1
  int v3; // r0@1
  NetworkHandler *v4; // r0@2
  int v5; // r0@2
  int result; // r0@2
  int v7; // r2@3
  int v8; // r3@3

  v2 = this;
  v3 = *(_DWORD *)(a2 + 200);
  if ( v3 )
  {
    v4 = (NetworkHandler *)Minecraft::getNetworkHandler(*(Minecraft **)(v3 + 8));
    v5 = NetworkHandler::getConnector(v4);
    result = (*(int (__fastcall **)(MinecraftGame *))(*(_DWORD *)v5 + 72))(v2);
  }
  else
    v7 = unk_27C5C64;
    v8 = *(_DWORD *)&word_27C5C68;
    result = dword_27C5C6C;
    *(_DWORD *)v2 = unk_27C5C60;
    *((_DWORD *)v2 + 1) = v7;
    *((_DWORD *)v2 + 2) = v8;
    *((_DWORD *)v2 + 3) = result;
  return result;
}


int __fastcall MinecraftGame::_loadLastGlobalResourcePacksFromFile(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  ResourcePackManager *v2; // r0@1
  int result; // r0@3
  __int64 v4; // [sp+0h] [bp-10h]@1

  v1 = this;
  MinecraftGame::_deserializeGlobalResourcePacks((MinecraftGame *)((char *)&v4 + 4), (int)this);
  v2 = (ResourcePackManager *)*((_DWORD *)v1 + 80);
  v4 = HIDWORD(v4);
  ResourcePackManager::setStack(v2, (int *)&v4, 2, 1);
  if ( (_DWORD)v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  LODWORD(v4) = 0;
  result = HIDWORD(v4);
  if ( HIDWORD(v4) )
    result = (*(int (__cdecl **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 4))(HIDWORD(v4));
  return result;
}


void __fastcall MinecraftGame::handleReloadUIDefinitions(MinecraftGame *this)
{
  MinecraftGame::handleReloadUIDefinitions(this);
}


int __fastcall MinecraftGame::onGameEventNotification(int a1, int a2)
{
  int v2; // r5@1
  _DWORD *v3; // r0@1
  int (*v4)(void); // r3@1
  int v5; // r4@1
  int result; // r0@4
  _DWORD *v7; // [sp+4h] [bp-24h]@1
  int (*v8)(void); // [sp+Ch] [bp-1Ch]@1
  _QWORD *(__fastcall *v9)(int ***, int); // [sp+10h] [bp-18h]@1
  int v10; // [sp+14h] [bp-14h]@1

  v2 = a1;
  v10 = a2;
  v3 = operator new(4u);
  *v3 = &v10;
  v4 = (int (*)(void))sub_C1A98C;
  v7 = v3;
  v8 = (int (*)(void))sub_C1A98C;
  v9 = sub_C1A97E;
  v5 = *(_DWORD *)(v2 + 224);
  if ( v5 == v2 + 216 )
    goto LABEL_11;
  do
  {
    if ( !v4 )
      sub_DA7654();
    v9((int ***)&v7, *(_DWORD *)(v5 + 20));
    result = sub_DA7F5C(v5);
    v4 = v8;
    v5 = result;
  }
  while ( result != v2 + 216 );
  if ( v8 )
LABEL_11:
    result = v4();
  return result;
}


int __fastcall MinecraftGame::setResetCallbackObject(int result, int a2)
{
  *(_DWORD *)(result + 448) = a2;
  return result;
}


int __fastcall MinecraftGame::onAppFocusLost(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  AppPlatform **v2; // r0@2
  AppPlatform **v3; // r0@5
  AppPlatform **v4; // r0@9
  int v5; // r1@12
  int v6; // r7@12
  int i; // r0@12
  int v8; // r1@14
  int v9; // r0@18
  void (*v10)(void); // r3@18
  int v11; // r5@18
  int v12; // r0@21
  int v13; // r1@26
  int j; // r0@26
  int v15; // r1@28
  int v16; // r0@32
  int v17; // r1@33
  int k; // r0@33
  int v19; // r1@35
  Minecraft *v20; // r0@39
  Automation::AutomationClient *v21; // r0@40
  void (*v22)(void); // r3@42
  int v23; // r5@42
  int v24; // r0@45
  void *v26; // [sp+4h] [bp-34h]@42
  int (__fastcall *v27)(void **, void **, int); // [sp+Ch] [bp-2Ch]@42
  void (__fastcall *v28)(int, ClientInstance *); // [sp+10h] [bp-28h]@42
  void *v29; // [sp+14h] [bp-24h]@18
  int (__fastcall *v30)(void **, void **, int); // [sp+1Ch] [bp-1Ch]@18
  int (__fastcall *v31)(int, ClientInstance *); // [sp+20h] [bp-18h]@18

  v1 = this;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  AppPlatform::isKeyboardVisible(*v2);
    v3 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v3 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  if ( !AppPlatform::isKeyboardVisible(*v3) )
  {
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v4 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v4 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
    AppPlatform::isKeyboardVisible(*v4);
  }
  v5 = *((_DWORD *)v1 + 55);
  v6 = (int)v1 + 216;
  for ( i = (int)v1 + 216; v5; v5 = *(_DWORD *)(v5 + 8) )
    i = v5;
  v8 = (int)v1 + 216;
  if ( i != v6 )
    if ( *(_BYTE *)(i + 16) )
      i = (int)v1 + 216;
    v8 = i;
  v9 = ClientInstance::getHoloInput(*(ClientInstance **)(v8 + 20));
  (*(void (**)(void))(*(_DWORD *)v9 + 20))();
  v29 = operator new(1u);
  v10 = (void (*)(void))sub_C1A70C;
  v30 = sub_C1A70C;
  v31 = sub_C1A6FA;
  v11 = *((_DWORD *)v1 + 56);
  if ( v11 == v6 )
    goto LABEL_53;
  do
    if ( !v10 )
      sub_DA7654();
    v31((int)&v29, *(ClientInstance **)(v11 + 20));
    v12 = sub_DA7F5C(v11);
    v10 = (void (*)(void))v30;
    v11 = v12;
  while ( v12 != v6 );
  if ( v30 )
LABEL_53:
    v10();
  v13 = *((_DWORD *)v1 + 55);
  for ( j = (int)v1 + 216; v13; v13 = *(_DWORD *)(v13 + 8) )
    j = v13;
  v15 = (int)v1 + 216;
  if ( j != v6 )
    if ( *(_BYTE *)(j + 16) )
      j = (int)v1 + 216;
    v15 = j;
  v16 = ClientInstance::getHoloInput(*(ClientInstance **)(v15 + 20));
  if ( !(*(int (**)(void))(*(_DWORD *)v16 + 308))() )
    v17 = *((_DWORD *)v1 + 55);
    for ( k = (int)v1 + 216; v17; v17 = *(_DWORD *)(v17 + 8) )
      k = v17;
    v19 = (int)v1 + 216;
    if ( k != v6 )
    {
      if ( *(_BYTE *)(k + 16) )
        k = (int)v1 + 216;
      v19 = k;
    }
    v20 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v19 + 20));
    if ( Minecraft::getLevel(v20) )
      v21 = (Automation::AutomationClient *)*((_DWORD *)v1 + 104);
      if ( !v21 || !Automation::AutomationClient::isReady(v21) )
      {
        v26 = operator new(1u);
        v22 = (void (*)(void))sub_C1A868;
        v27 = sub_C1A868;
        v28 = sub_C1A73C;
        v23 = *((_DWORD *)v1 + 56);
        if ( v23 == v6 )
          goto LABEL_54;
        do
        {
          if ( !v22 )
            sub_DA7654();
          v28((int)&v26, *(ClientInstance **)(v23 + 20));
          v24 = sub_DA7F5C(v23);
          v22 = (void (*)(void))v27;
          v23 = v24;
        }
        while ( v24 != v6 );
        if ( v27 )
LABEL_54:
          v22();
      }
  return MinecraftGame::releaseMouse(v1);
}


int __fastcall MinecraftGame::onUserSignin(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  Social::XboxLiveUserManager *v2; // r0@1
  int v3; // r5@1
  int v4; // r6@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r7@8
  unsigned int v8; // r0@10
  int v9; // r1@16
  int v10; // r6@16
  int i; // r0@16
  int v12; // r1@18
  int j; // r5@23
  int v14; // r0@26
  int v15; // r5@26
  unsigned int *v16; // r1@27
  unsigned int v17; // r0@29
  unsigned int *v18; // r7@34
  unsigned int v19; // r0@36
  Option *v20; // r5@41
  int v21; // r5@43
  unsigned int *v22; // r1@44
  unsigned int v23; // r0@46
  unsigned int *v24; // r7@50
  unsigned int v25; // r0@52
  int v26; // r0@57
  int v27; // r5@57
  unsigned int *v28; // r1@58
  unsigned int v29; // r0@60
  unsigned int *v30; // r7@64
  unsigned int v31; // r0@66
  int v32; // r5@72
  unsigned int *v33; // r1@73
  unsigned int v34; // r0@75
  unsigned int *v35; // r7@79
  unsigned int v36; // r0@81
  int v37; // r5@86
  unsigned int *v38; // r1@87
  unsigned int v39; // r0@89
  unsigned int *v40; // r7@93
  unsigned int v41; // r0@95
  int v42; // r5@100
  unsigned int *v43; // r1@101
  unsigned int v44; // r0@103
  unsigned int *v45; // r7@107
  unsigned int v46; // r0@109
  int v47; // r5@114
  unsigned int *v48; // r1@115
  unsigned int v49; // r0@117
  unsigned int *v50; // r7@121
  unsigned int v51; // r0@123
  void *v52; // r0@129
  void *v53; // r0@130
  int (__fastcall *v54)(void **, void **, int); // r3@131
  int v55; // r4@131
  int result; // r0@134
  unsigned int *v57; // r2@140
  signed int v58; // r1@142
  unsigned int *v59; // r2@144
  signed int v60; // r1@146
  void *v61; // [sp+0h] [bp-70h]@131
  int (__fastcall *v62)(void **, void **, int); // [sp+8h] [bp-68h]@131
  int (__fastcall *v63)(int, ClientInstance *); // [sp+Ch] [bp-64h]@131
  Options *v64; // [sp+10h] [bp-60h]@114
  int v65; // [sp+14h] [bp-5Ch]@114
  Options *v66; // [sp+18h] [bp-58h]@100
  int v67; // [sp+1Ch] [bp-54h]@100
  Options *v68; // [sp+20h] [bp-50h]@86
  int v69; // [sp+24h] [bp-4Ch]@86
  int v70; // [sp+28h] [bp-48h]@72
  int v71; // [sp+2Ch] [bp-44h]@72
  Social::User *v72; // [sp+30h] [bp-40h]@57
  int v73; // [sp+34h] [bp-3Ch]@57
  int v74; // [sp+38h] [bp-38h]@57
  int v75; // [sp+3Ch] [bp-34h]@41
  int v76; // [sp+40h] [bp-30h]@43
  Social::User *v77; // [sp+44h] [bp-2Ch]@26
  int v78; // [sp+48h] [bp-28h]@26
  int v79; // [sp+4Ch] [bp-24h]@26
  Social::User *v80; // [sp+50h] [bp-20h]@1
  int v81; // [sp+54h] [bp-1Ch]@1

  v1 = this;
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v80, *((_DWORD *)this + 86));
  v2 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v80);
  v3 = Social::XboxLiveUserManager::isSignedIn(v2);
  v4 = v81;
  if ( v81 )
  {
    v5 = (unsigned int *)(v81 + 4);
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
  if ( v3 )
    v9 = *((_DWORD *)v1 + 55);
    v10 = (int)v1 + 216;
    for ( i = (int)v1 + 216; v9; v9 = *(_DWORD *)(v9 + 8) )
      i = v9;
    v12 = (int)v1 + 216;
    if ( i != v10 )
      if ( *(_BYTE *)(i + 16) )
        i = (int)v1 + 216;
      v12 = i;
    if ( ClientInstance::isInGame(*(ClientInstance **)(v12 + 20)) == 1 )
      for ( j = *((_DWORD *)v1 + 56); j != v10; j = sub_DA7F5C(j) )
        ClientInstance::requestLeaveGame(*(ClientInstance **)(j + 20), 1, 0);
    Social::UserManager::getPrimaryUser((Social::UserManager *)&v77, *((_DWORD *)v1 + 86));
    v14 = Social::User::getLiveUser(v77);
    Social::XboxLiveUserManager::getCurrentXUID((Social::XboxLiveUserManager *)&v79, v14);
    v15 = v78;
    if ( v78 )
      v16 = (unsigned int *)(v78 + 4);
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
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v75, (int)v1);
    v20 = (Option *)Options::get(v75, 141);
    if ( !Option::hasOverrideSource(v20) )
      StringOption::set((int)v20, (const void **)&v79);
    v21 = v76;
    if ( v76 )
      v22 = (unsigned int *)(v76 + 4);
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
    Social::UserManager::getPrimaryUser((Social::UserManager *)&v72, *((_DWORD *)v1 + 86));
    v26 = Social::User::getLiveUser(v72);
    Social::XboxLiveUserManager::getCurrentGamertag((Social::XboxLiveUserManager *)&v74, v26);
    v27 = v73;
    if ( v73 )
      v28 = (unsigned int *)(v73 + 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 == 1 )
        v30 = (unsigned int *)(v27 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
          v31 = (*v30)--;
        if ( v31 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
    if ( *(_DWORD *)(v74 - 12) )
      MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v70, (int)v1);
      Options::setOverrideUsername(v70, &v74);
      v32 = v71;
      if ( v71 )
        v33 = (unsigned int *)(v71 + 4);
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
          v34 = (*v33)--;
        if ( v34 == 1 )
          v35 = (unsigned int *)(v32 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
          if ( &pthread_create )
          {
            __dmb();
            do
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
          }
          else
            v36 = (*v35)--;
          if ( v36 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
      SceneStack::onGameEventNotification(*((_QWORD **)v1 + 26));
      MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v68, (int)v1);
      Options::setHasEverLoggedIntoXbl(v68, 1);
      v37 = v69;
      if ( v69 )
        v38 = (unsigned int *)(v69 + 4);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 == 1 )
          v40 = (unsigned int *)(v37 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 8))(v37);
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
            v41 = (*v40)--;
          if ( v41 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 12))(v37);
      MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v66, (int)v1);
      Options::setHasChosenNotToSignInToXbl(v66, 0);
      v42 = v67;
      if ( v67 )
        v43 = (unsigned int *)(v67 + 4);
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
          v44 = (*v43)--;
        if ( v44 == 1 )
          v45 = (unsigned int *)(v42 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 8))(v42);
              v46 = __ldrex(v45);
            while ( __strex(v46 - 1, v45) );
            v46 = (*v45)--;
          if ( v46 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 12))(v42);
      MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v64, (int)v1);
      Options::save(v64, 0);
      v47 = v65;
      if ( v65 )
        v48 = (unsigned int *)(v65 + 4);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          v49 = (*v48)--;
        if ( v49 == 1 )
          v50 = (unsigned int *)(v47 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
            v51 = (*v50)--;
          if ( v51 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
      MinecraftEventing::fireEventHardwareInfo(*((MinecraftEventing **)v1 + 126));
      MinecraftEventing::fireEventStartClient(*((MinecraftEventing **)v1 + 126));
    MinecraftGame::_refreshEntitlements(v1);
    v52 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v74 - 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j_j__ZdlPv_9(v52);
    v53 = (void *)(v79 - 12);
    if ( (int *)(v79 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v79 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j_j__ZdlPv_9(v53);
  else
  v61 = operator new(1u);
  v54 = sub_C22EB0;
  v62 = sub_C22EB0;
  v63 = sub_C22E9E;
  v55 = *((_DWORD *)v1 + 56);
  if ( v55 == v10 )
    goto LABEL_157;
  do
    if ( !v54 )
      sub_DA7654();
    v63((int)&v61, *(ClientInstance **)(v55 + 20));
    result = sub_DA7F5C(v55);
    v54 = v62;
    v55 = result;
  while ( result != v10 );
  if ( v62 )
LABEL_157:
    result = ((int (__cdecl *)(void **))v54)(&v61);
  return result;
}


int __fastcall MinecraftGame::setPrimaryCameraEntity(MinecraftGame *this, Entity *a2)
{
  int v2; // r3@1
  char *v3; // r0@1
  char *i; // r2@1

  v2 = *((_DWORD *)this + 55);
  v3 = (char *)this + 216;
  for ( i = v3; v2; v2 = *(_DWORD *)(v2 + 8) )
    i = (char *)v2;
  if ( i != v3 && !i[16] )
    v3 = i;
  return j_j_j__ZN14ClientInstance15setCameraEntityEP6Entity(*((ClientInstance **)v3 + 5), a2);
}


SoundEngine *__fastcall MinecraftGame::audioEngineOff(MinecraftGame *this)
{
  SoundEngine *result; // r0@1

  result = (SoundEngine *)*((_DWORD *)this + 66);
  if ( result )
    result = j_j_j__ZN11SoundEngine6enableEb(result, 0);
  return result;
}


Realms::World *__fastcall MinecraftGame::joinRealmFromInvite(MinecraftGame *this, const Social::MultiplayerGameInfo *a2)
{
  MinecraftGame *v2; // r4@1
  const Social::MultiplayerGameInfo *v3; // r5@1
  __int64 v5; // [sp+0h] [bp-58h]@1
  void *v6; // [sp+Ch] [bp-4Ch]@1
  void *v7; // [sp+10h] [bp-48h]@1
  void *v8; // [sp+14h] [bp-44h]@1
  void *v9; // [sp+18h] [bp-40h]@1
  char v10; // [sp+28h] [bp-30h]@1
  int v11; // [sp+2Ch] [bp-2Ch]@1
  int v12; // [sp+30h] [bp-28h]@1
  char v13; // [sp+34h] [bp-24h]@1
  char v14; // [sp+35h] [bp-23h]@1
  char v15; // [sp+36h] [bp-22h]@1
  int v16; // [sp+38h] [bp-20h]@1
  int v17; // [sp+3Ch] [bp-1Ch]@1
  int v18; // [sp+40h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v6 = &unk_28898CC;
  v7 = &unk_28898CC;
  v8 = &unk_28898CC;
  v9 = &unk_28898CC;
  v10 = 0;
  v11 = 0;
  v12 = 2;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v5 = *((_QWORD *)a2 + 6);
  EntityInteraction::setInteractText((int *)&v8, (int *)a2 + 3);
  EntityInteraction::setInteractText((int *)&v6, (int *)v3 + 8);
  v11 = GameTypeConv::stringToGameType((unsigned int *)v3 + 9);
  MinecraftGame::joinRealm(v2, (const Realms::World *)&v5);
  return Realms::World::~World((Realms::World *)&v5);
}


int __fastcall MinecraftGame::joinMultiplayer(int a1, int a2, int a3)
{
  int v3; // r10@1
  int v4; // r6@1
  int v5; // r8@1
  int v6; // r5@1
  int v7; // r7@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r0@4
  unsigned int *v10; // r4@8
  unsigned int v11; // r0@10
  void *v12; // r0@17
  void *v13; // r0@18
  void *v14; // r0@19
  int v15; // r1@20
  DebugUdpProxy *v16; // r0@20
  DebugUdpProxy *v17; // r0@21
  int v18; // r5@22
  int v19; // r7@22
  _DWORD *v20; // r0@22
  __int64 v21; // r1@22
  int v22; // r5@24
  unsigned int *v23; // r1@25
  unsigned int v24; // r0@27
  unsigned int *v25; // r4@31
  unsigned int v26; // r0@33
  int v27; // r5@38
  int v28; // r0@38
  int v29; // r5@38
  unsigned int *v30; // r1@39
  unsigned int v31; // r0@41
  unsigned int *v32; // r4@45
  unsigned int v33; // r0@47
  __int16 v34; // r4@52
  const char **v35; // r0@52
  int v36; // r0@52
  void *v37; // r0@52
  void *v38; // r0@53
  void *v39; // r0@54
  void *v40; // r0@55
  int v41; // r2@56
  int v42; // r0@56
  int i; // r1@56
  int v44; // r9@61
  _WORD *v45; // r0@61
  int v46; // r5@61
  void *v47; // r1@61
  void *v48; // r1@61
  void *v49; // r1@61
  int *v50; // r2@61
  unsigned int v51; // r1@61
  int v52; // r0@61
  int v53; // r3@61
  int v54; // r7@61
  int v55; // r6@62
  void *v56; // r1@66
  void *v57; // r1@66
  char *v58; // r0@68
  char *v59; // r0@69
  char *v60; // r0@70
  unsigned int *v62; // r2@72
  signed int v63; // r1@74
  unsigned int *v64; // r2@76
  signed int v65; // r1@78
  unsigned int *v66; // r2@80
  signed int v67; // r1@82
  unsigned int *v68; // r2@84
  signed int v69; // r1@86
  unsigned int *v70; // r2@88
  signed int v71; // r1@90
  unsigned int *v72; // r2@92
  signed int v73; // r1@94
  unsigned int *v74; // r2@96
  signed int v75; // r1@98
  unsigned int *v76; // r2@128
  signed int v77; // r1@130
  unsigned int *v78; // r2@132
  signed int v79; // r1@134
  unsigned int *v80; // r2@136
  signed int v81; // r1@138
  __int16 v82; // [sp+8h] [bp-128h]@61
  void *v83; // [sp+Ch] [bp-124h]@61
  void *v84; // [sp+10h] [bp-120h]@61
  int v85; // [sp+14h] [bp-11Ch]@61
  void *v86; // [sp+18h] [bp-118h]@61
  int *v87; // [sp+1Ch] [bp-114h]@61
  unsigned int v88; // [sp+20h] [bp-110h]@61
  int v89; // [sp+24h] [bp-10Ch]@61
  int v90; // [sp+28h] [bp-108h]@61
  int v91; // [sp+2Ch] [bp-104h]@61
  int v92; // [sp+30h] [bp-100h]@61
  int v93; // [sp+34h] [bp-FCh]@61
  void *v94; // [sp+38h] [bp-F8h]@66
  void *v95; // [sp+3Ch] [bp-F4h]@66
  char v96; // [sp+40h] [bp-F0h]@66
  int v97; // [sp+44h] [bp-ECh]@66
  void (*v98)(void); // [sp+4Ch] [bp-E4h]@61
  void (__fastcall *v99)(int *, int); // [sp+50h] [bp-E0h]@66
  int v100; // [sp+58h] [bp-D8h]@52
  __int16 v101; // [sp+5Ch] [bp-D4h]@52
  int v102; // [sp+60h] [bp-D0h]@52
  int v103; // [sp+64h] [bp-CCh]@52
  int v104; // [sp+68h] [bp-C8h]@52
  int v105; // [sp+6Ch] [bp-C4h]@52
  int v106; // [sp+70h] [bp-C0h]@52
  int v107; // [sp+8Ch] [bp-A4h]@52
  int v108; // [sp+90h] [bp-A0h]@52
  char v109; // [sp+94h] [bp-9Ch]@52
  Options *v110; // [sp+98h] [bp-98h]@38
  int v111; // [sp+9Ch] [bp-94h]@38
  _DWORD *v112; // [sp+A0h] [bp-90h]@22
  __int64 v113; // [sp+A8h] [bp-88h]@22
  int v114; // [sp+B0h] [bp-80h]@22
  int v115; // [sp+B4h] [bp-7Ch]@24
  int v116; // [sp+B8h] [bp-78h]@20
  int v117; // [sp+BCh] [bp-74h]@20
  int v118; // [sp+C0h] [bp-70h]@20
  __int16 v119; // [sp+C4h] [bp-6Ch]@17
  int v120; // [sp+C8h] [bp-68h]@17
  int v121; // [sp+CCh] [bp-64h]@17
  int v122; // [sp+D0h] [bp-60h]@17
  int v123; // [sp+D4h] [bp-5Ch]@17
  int v124; // [sp+D8h] [bp-58h]@17
  int v125; // [sp+F4h] [bp-3Ch]@17
  int v126; // [sp+F8h] [bp-38h]@17
  char v127; // [sp+FCh] [bp-34h]@17
  Options *v128; // [sp+100h] [bp-30h]@1
  int v129; // [sp+104h] [bp-2Ch]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v128, a1);
  v6 = Options::getDevConnectionQuality(v128);
  v7 = v129;
  if ( v129 )
  {
    v8 = (unsigned int *)(v129 + 4);
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
  if ( v6 )
    if ( !*(_WORD *)v4 )
      Social::GameConnectionInfo::GameConnectionInfo(
        (int)&v119,
        1,
        (int *)(v4 + 4),
        *(_DWORD *)(v4 + 12),
        (int)&unk_27C5CF4);
      *(_WORD *)v4 = v119;
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        &v120);
        (int *)(v4 + 8),
        &v121);
      *(_DWORD *)(v4 + 12) = v122;
        (int *)(v4 + 16),
        &v123);
      std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_move_assign(
        v4 + 20,
        (int)&v124);
        (int *)(v4 + 48),
        &v125);
        (int *)(v4 + 52),
        &v126);
      *(_BYTE *)(v4 + 56) = v127;
      ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v124);
      v12 = (void *)(v123 - 12);
      if ( (int *)(v123 - 12) != &dword_28898C0 )
        v76 = (unsigned int *)(v123 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v77 = __ldrex(v76);
          while ( __strex(v77 - 1, v76) );
        }
        else
          v77 = (*v76)--;
        if ( v77 <= 0 )
          j_j_j_j_j__ZdlPv_9(v12);
      v13 = (void *)(v121 - 12);
      if ( (int *)(v121 - 12) != &dword_28898C0 )
        v78 = (unsigned int *)(v121 - 4);
            v79 = __ldrex(v78);
          while ( __strex(v79 - 1, v78) );
          v79 = (*v78)--;
        if ( v79 <= 0 )
          j_j_j_j_j__ZdlPv_9(v13);
      v14 = (void *)(v120 - 12);
      if ( (int *)(v120 - 12) != &dword_28898C0 )
        v80 = (unsigned int *)(v120 - 4);
            v81 = __ldrex(v80);
          while ( __strex(v81 - 1, v80) );
          v81 = (*v80)--;
        if ( v81 <= 0 )
          j_j_j_j_j__ZdlPv_9(v14);
    v117 = *(_DWORD *)(v4 + 4);
    v116 = *(_DWORD *)(v4 + 12);
    std::make_unique<DebugUdpProxy,char const*,int>((int **)&v118, (const char **)&v117, (__int16 *)&v116);
    v15 = v118;
    v118 = 0;
    v16 = *(DebugUdpProxy **)(v3 + 248);
    *(_DWORD *)(v3 + 248) = v15;
    if ( v16 )
      v17 = DebugUdpProxy::~DebugUdpProxy(v16);
      operator delete((void *)v17);
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v114, v3);
    v18 = Options::get(v114, 95);
    v19 = *(_DWORD *)(v3 + 248);
    v20 = operator new(4u);
    LODWORD(v21) = sub_C1FC60;
    *v20 = v3;
    HIDWORD(v21) = sub_C1FB48;
    v112 = v20;
    v113 = v21;
    Option::registerObserver(v18, v19, (int)&v112);
    if ( (_DWORD)v113 )
      ((void (*)(void))v113)();
    v22 = v115;
    if ( v115 )
      v23 = (unsigned int *)(v115 + 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 == 1 )
        v25 = (unsigned int *)(v22 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
    v27 = *(_DWORD *)(v3 + 248);
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v110, v3);
    v28 = Options::getDevConnectionQuality(v110);
    DebugUdpProxy::setQuality(v27, v28);
    v29 = v111;
    if ( v111 )
      v30 = (unsigned int *)(v111 + 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        v32 = (unsigned int *)(v29 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 8))(v29);
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 12))(v29);
    v34 = *(_WORD *)v4;
    v35 = (const char **)DebugUdpProxy::getHost(*(DebugUdpProxy **)(v3 + 248));
    sub_DA7364((void **)&v100, *v35);
    v36 = DebugUdpProxy::getPort(*(DebugUdpProxy **)(v3 + 248));
    Social::GameConnectionInfo::GameConnectionInfo((int)&v101, v34, &v100, v36, (int)&unk_27C5CF4);
    *(_WORD *)v4 = v101;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v4 + 4),
      &v102);
      (int *)(v4 + 8),
      &v103);
    *(_DWORD *)(v4 + 12) = v104;
      (int *)(v4 + 16),
      &v105);
    std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_move_assign(
      v4 + 20,
      (int)&v106);
      (int *)(v4 + 48),
      &v107);
      (int *)(v4 + 52),
      &v108);
    *(_BYTE *)(v4 + 56) = v109;
    ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v106);
    v37 = (void *)(v105 - 12);
    if ( (int *)(v105 - 12) != &dword_28898C0 )
      v68 = (unsigned int *)(v105 - 4);
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
        v69 = (*v68)--;
      if ( v69 <= 0 )
        j_j_j_j_j__ZdlPv_9(v37);
    v38 = (void *)(v103 - 12);
    if ( (int *)(v103 - 12) != &dword_28898C0 )
      v70 = (unsigned int *)(v103 - 4);
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
        v71 = (*v70)--;
      if ( v71 <= 0 )
        j_j_j_j_j__ZdlPv_9(v38);
    v39 = (void *)(v102 - 12);
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v72 = (unsigned int *)(v102 - 4);
          v73 = __ldrex(v72);
        while ( __strex(v73 - 1, v72) );
        v73 = (*v72)--;
      if ( v73 <= 0 )
        j_j_j_j_j__ZdlPv_9(v39);
    v40 = (void *)(v100 - 12);
    if ( (int *)(v100 - 12) != &dword_28898C0 )
      v74 = (unsigned int *)(v100 - 4);
          v75 = __ldrex(v74);
        while ( __strex(v75 - 1, v74) );
        v75 = (*v74)--;
      if ( v75 <= 0 )
        j_j_j_j_j__ZdlPv_9(v40);
  v41 = *(_DWORD *)(v3 + 220);
  v42 = v3 + 216;
  for ( i = v3 + 216; v41; v41 = *(_DWORD *)(v41 + 8) )
    i = v41;
  if ( i != v42 && !*(_BYTE *)(i + 16) )
    v42 = i;
  v44 = *(_DWORD *)(v42 + 20);
  Social::GameConnectionInfo::GameConnectionInfo(
    (Social::GameConnectionInfo *)&v82,
    (const Social::GameConnectionInfo *)v4);
  v98 = 0;
  v45 = operator new(0x40u);
  v46 = (int)v45;
  *(_DWORD *)v45 = v3;
  v45[2] = v82;
  v47 = v83;
  v83 = &unk_28898CC;
  *((_DWORD *)v45 + 2) = v47;
  v48 = v84;
  v84 = &unk_28898CC;
  *((_DWORD *)v45 + 3) = v48;
  *((_DWORD *)v45 + 4) = v85;
  v49 = v86;
  v86 = &unk_28898CC;
  *((_DWORD *)v45 + 5) = v49;
  v50 = v87;
  v51 = v88;
  v52 = v89;
  v53 = v90;
  *(_DWORD *)(v46 + 24) = v87;
  *(_DWORD *)(v46 + 28) = v51;
  *(_DWORD *)(v46 + 32) = v52;
  *(_DWORD *)(v46 + 36) = v53;
  v54 = v92;
  *(_DWORD *)(v46 + 40) = v91;
  *(_DWORD *)(v46 + 44) = v54;
  if ( &v93 == v50 )
    v55 = v46 + 48;
    *(_DWORD *)(v46 + 24) = v46 + 48;
    *(_DWORD *)(v46 + 48) = *v50;
  else
    v55 = (int)v50;
  if ( v52 )
    *(_DWORD *)(v55 + 4 * (*(_DWORD *)(v52 + 8) % v51)) = v46 + 32;
  v92 = 0;
  v88 = 1;
  v93 = 0;
  v87 = &v93;
  v89 = 0;
  v90 = 0;
  v56 = v94;
  v94 = &unk_28898CC;
  *(_DWORD *)(v46 + 52) = v56;
  v57 = v95;
  v95 = &unk_28898CC;
  *(_DWORD *)(v46 + 56) = v57;
  *(_BYTE *)(v46 + 60) = v96;
  v97 = v46;
  v98 = (void (*)(void))sub_C20594;
  v99 = sub_C1FC98;
  ClientInstance::setupClientGame(v44, (int)&v97, v5);
  if ( v98 )
    v98();
  ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v87);
  v58 = (char *)v86 - 12;
  if ( (int *)((char *)v86 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)((char *)v86 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9(v58);
  v59 = (char *)v84 - 12;
  if ( (int *)((char *)v84 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)((char *)v84 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j_j__ZdlPv_9(v59);
  v60 = (char *)v83 - 12;
  if ( (int *)((char *)v83 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)((char *)v83 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j_j__ZdlPv_9(v60);
  return Social::MultiplayerServiceManager::setAllServicesActive(*(Social::MultiplayerServiceManager **)(v3 + 348), 0);
}


char *__fastcall MinecraftGame::handleIdentityLost(MinecraftGame *this)
{
  MinecraftGame *v1; // r5@1
  char *v2; // r6@1
  int (__fastcall *v3)(void **, void **, int); // r3@1
  char *v4; // r4@1
  char *result; // r0@4
  void *v6; // [sp+0h] [bp-20h]@1
  int (__fastcall *v7)(void **, void **, int); // [sp+8h] [bp-18h]@1
  int (__fastcall *v8)(int, ClientInstance *); // [sp+Ch] [bp-14h]@1

  v1 = this;
  v2 = (char *)this + 216;
  v6 = operator new(1u);
  v3 = sub_C24710;
  v7 = sub_C24710;
  v8 = sub_C246FC;
  v4 = (char *)*((_DWORD *)v1 + 56);
  if ( v4 == (char *)v1 + 216 )
    goto LABEL_11;
  do
  {
    if ( !v3 )
      sub_DA7654();
    v8((int)&v6, *((ClientInstance **)v4 + 5));
    result = (char *)sub_DA7F5C((int)v4);
    v3 = v7;
    v4 = result;
  }
  while ( result != v2 );
  if ( v7 )
LABEL_11:
    result = (char *)((int (__cdecl *)(void **))v3)(&v6);
  return result;
}


int __fastcall MinecraftGame::isSplitscreenJoinEnabled(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1
  ClientInstance *v4; // r4@6
  void *v5; // r0@7
  int result; // r0@12

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  v4 = (ClientInstance *)*((_DWORD *)v2 + 5);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v5 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v5 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v5 + 196))() != 1
    || ClientInstance::isExitingLevel(v4)
    || !ClientInstance::getLevel(v4) )
  {
    result = 0;
  }
    result = ClientInstance::getLevelRenderer(v4) != 0;
  return result;
}


int __fastcall MinecraftGame::requestLeaveGame(int result, int a2, bool a3)
{
  bool v3; // r4@1
  int v4; // r5@1
  int v5; // r7@1
  int i; // r6@1

  v3 = a3;
  v4 = a2;
  v5 = result + 216;
  for ( i = *(_DWORD *)(result + 224); i != v5; i = result )
  {
    ClientInstance::requestLeaveGame(*(ClientInstance **)(i + 20), v4, v3);
    result = sub_DA7F5C(i);
  }
  return result;
}


void __fastcall MinecraftGame::updateFoliageColors(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  mce::TextureGroup *v2; // r5@1
  char *v3; // r8@1
  char *v4; // r0@1
  char *v5; // r0@2
  mce::TextureGroup *v6; // r5@3
  char *v7; // r9@3
  char *v8; // r0@3
  char *v9; // r0@4
  mce::TextureGroup *v10; // r5@5
  char *v11; // r10@5
  char *v12; // r0@5
  char *v13; // r0@6
  mce::TextureGroup *v14; // r5@7
  char *v15; // r11@7
  char *v16; // r0@7
  char *v17; // r0@8
  mce::TextureGroup *v18; // r6@9
  char *v19; // r6@9
  char *v20; // r0@9
  char *v21; // r0@10
  mce::TextureGroup *v22; // r7@11
  char *v23; // r7@11
  char *v24; // r0@11
  mce::TextureContainer *v25; // r1@12
  char *v26; // r0@12
  mce::TextureContainer *v27; // r1@13
  mce::TextureContainer *v28; // r1@13
  mce::TextureContainer *v29; // r1@13
  mce::TextureContainer *v30; // r1@13
  mce::TextureContainer *v31; // r1@13
  mce::TextureGroup *v32; // r5@13
  char *v33; // r0@13
  char *v34; // r0@14
  mce::TextureGroup *v35; // r5@15
  char *v36; // r0@15
  char *v37; // r0@16
  mce::TextureGroup *v38; // r5@17
  char *v39; // r0@17
  char *v40; // r0@18
  mce::TextureGroup *v41; // r5@19
  char *v42; // r0@19
  char *v43; // r0@20
  mce::TextureGroup *v44; // r5@21
  char *v45; // r0@21
  char *v46; // r0@22
  mce::TextureGroup *v47; // r4@23
  char *v48; // r0@23
  char *v49; // r0@24
  unsigned int *v50; // r2@26
  signed int v51; // r1@28
  unsigned int *v52; // r2@30
  signed int v53; // r1@32
  unsigned int *v54; // r2@34
  signed int v55; // r1@36
  unsigned int *v56; // r2@38
  signed int v57; // r1@40
  unsigned int *v58; // r2@42
  signed int v59; // r1@44
  unsigned int *v60; // r2@46
  signed int v61; // r1@48
  unsigned int *v62; // r2@50
  signed int v63; // r1@52
  unsigned int *v64; // r2@54
  signed int v65; // r1@56
  unsigned int *v66; // r2@58
  signed int v67; // r1@60
  unsigned int *v68; // r2@62
  signed int v69; // r1@64
  unsigned int *v70; // r2@66
  signed int v71; // r1@68
  unsigned int *v72; // r2@70
  unsigned int *v73; // r2@74
  signed int v74; // r1@76
  unsigned int *v75; // r2@78
  signed int v76; // r1@80
  unsigned int *v77; // r2@82
  signed int v78; // r1@84
  unsigned int *v79; // r2@86
  signed int v80; // r1@88
  unsigned int *v81; // r2@90
  signed int v82; // r1@92
  unsigned int *v83; // r2@94
  signed int v84; // r1@96
  unsigned int *v85; // r2@98
  signed int v86; // r1@100
  unsigned int *v87; // r2@102
  signed int v88; // r1@104
  unsigned int *v89; // r2@106
  signed int v90; // r1@108
  unsigned int *v91; // r2@110
  signed int v92; // r1@112
  unsigned int *v93; // r2@114
  signed int v94; // r1@116
  unsigned int *v95; // r2@118
  signed int v96; // r1@120
  char *v97; // [sp+4h] [bp-E4h]@23
  char *v98; // [sp+8h] [bp-E0h]@23
  int v99; // [sp+Ch] [bp-DCh]@23
  char *v100; // [sp+14h] [bp-D4h]@21
  char *v101; // [sp+18h] [bp-D0h]@21
  int v102; // [sp+1Ch] [bp-CCh]@21
  char *v103; // [sp+24h] [bp-C4h]@19
  char *v104; // [sp+28h] [bp-C0h]@19
  int v105; // [sp+2Ch] [bp-BCh]@19
  char *v106; // [sp+34h] [bp-B4h]@17
  char *v107; // [sp+38h] [bp-B0h]@17
  int v108; // [sp+3Ch] [bp-ACh]@17
  char *v109; // [sp+44h] [bp-A4h]@15
  char *v110; // [sp+48h] [bp-A0h]@15
  int v111; // [sp+4Ch] [bp-9Ch]@15
  char *v112; // [sp+54h] [bp-94h]@13
  char *v113; // [sp+58h] [bp-90h]@13
  int v114; // [sp+5Ch] [bp-8Ch]@13
  mce::TextureContainer *v115; // [sp+64h] [bp-84h]@11
  char *v116; // [sp+68h] [bp-80h]@11
  int v117; // [sp+6Ch] [bp-7Ch]@11
  char *v118; // [sp+74h] [bp-74h]@9
  char *v119; // [sp+78h] [bp-70h]@9
  int v120; // [sp+7Ch] [bp-6Ch]@9
  char *v121; // [sp+84h] [bp-64h]@7
  char *v122; // [sp+88h] [bp-60h]@7
  int v123; // [sp+8Ch] [bp-5Ch]@7
  char *v124; // [sp+94h] [bp-54h]@5
  char *v125; // [sp+98h] [bp-50h]@5
  int v126; // [sp+9Ch] [bp-4Ch]@5
  char *v127; // [sp+A4h] [bp-44h]@3
  char *v128; // [sp+A8h] [bp-40h]@3
  int v129; // [sp+ACh] [bp-3Ch]@3
  char *v130; // [sp+B4h] [bp-34h]@1
  char *v131; // [sp+B8h] [bp-30h]@1
  int v132; // [sp+BCh] [bp-2Ch]@1

  v1 = this;
  v2 = (mce::TextureGroup *)*((_DWORD *)this + 15);
  sub_DA7364((void **)&v130, "textures/colormap/foliage");
  v131 = v130;
  v130 = (char *)&unk_28898CC;
  v132 = 0;
  v3 = mce::TextureGroup::getTexturePair(v2, (const ResourceLocation *)&v131);
  v4 = v131 - 12;
  if ( (int *)(v131 - 12) != &dword_28898C0 )
  {
    v50 = (unsigned int *)(v131 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
    }
    else
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9(v4);
  }
  v5 = v130 - 12;
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v130 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = (mce::TextureGroup *)*((_DWORD *)v1 + 15);
  sub_DA7364((void **)&v127, "textures/colormap/evergreen");
  v128 = v127;
  v127 = (char *)&unk_28898CC;
  v129 = 0;
  v7 = mce::TextureGroup::getTexturePair(v6, (const ResourceLocation *)&v128);
  v8 = v128 - 12;
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v128 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  v9 = v127 - 12;
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v127 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = (mce::TextureGroup *)*((_DWORD *)v1 + 15);
  sub_DA7364((void **)&v124, "textures/colormap/birch");
  v125 = v124;
  v124 = (char *)&unk_28898CC;
  v126 = 0;
  v11 = mce::TextureGroup::getTexturePair(v10, (const ResourceLocation *)&v125);
  v12 = v125 - 12;
  if ( (int *)(v125 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v125 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  v13 = v124 - 12;
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v124 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  v14 = (mce::TextureGroup *)*((_DWORD *)v1 + 15);
  sub_DA7364((void **)&v121, "textures/colormap/swamp_foliage");
  v122 = v121;
  v121 = (char *)&unk_28898CC;
  v123 = 0;
  v15 = mce::TextureGroup::getTexturePair(v14, (const ResourceLocation *)&v122);
  v16 = v122 - 12;
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v122 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  v17 = v121 - 12;
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v121 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  v18 = (mce::TextureGroup *)*((_DWORD *)v1 + 15);
  sub_DA7364((void **)&v118, "textures/colormap/swamp_grass");
  v119 = v118;
  v118 = (char *)&unk_28898CC;
  v120 = 0;
  v19 = mce::TextureGroup::getTexturePair(v18, (const ResourceLocation *)&v119);
  v20 = v119 - 12;
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v119 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  v21 = v118 - 12;
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v118 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j_j__ZdlPv_9(v21);
  v22 = (mce::TextureGroup *)*((_DWORD *)v1 + 15);
  sub_DA7364((void **)&v115, "textures/colormap/grass");
  v116 = (char *)v115;
  v115 = (mce::TextureContainer *)&unk_28898CC;
  v117 = 0;
  v23 = mce::TextureGroup::getTexturePair(v22, (const ResourceLocation *)&v116);
  v24 = v116 - 12;
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v116 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
  v25 = v115;
  v26 = (char *)v115 - 12;
  if ( (int *)((char *)v115 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)((char *)v115 - 4);
        v25 = (mce::TextureContainer *)__ldrex(v72);
      while ( __strex((unsigned int)v25 - 1, v72) );
      v25 = (mce::TextureContainer *)(*v72)--;
    if ( (signed int)v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v26);
  FoliageColor::setFoliageColorPalette((FoliageColor *)(v3 + 64), v25);
  FoliageColor::setFoliageEvergreenColorPalette((FoliageColor *)(v7 + 64), v27);
  FoliageColor::setFoliageBirchColorPalette((FoliageColor *)(v11 + 64), v28);
  FoliageColor::setFoliageSwampColorPalette((FoliageColor *)(v15 + 64), v29);
  FoliageColor::setSwampGrassColorPalette((FoliageColor *)(v19 + 64), v30);
  FoliageColor::setGrassColorPalette((FoliageColor *)(v23 + 64), v31);
  v32 = (mce::TextureGroup *)*((_DWORD *)v1 + 15);
  sub_DA7364((void **)&v112, "textures/colormap/foliage");
  v113 = v112;
  v112 = (char *)&unk_28898CC;
  v114 = 0;
  mce::TextureGroup::unloadTexture(v32, (const ResourceLocation *)&v113);
  v33 = v113 - 12;
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v113 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j_j__ZdlPv_9(v33);
  v34 = v112 - 12;
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v112 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j_j__ZdlPv_9(v34);
  v35 = (mce::TextureGroup *)*((_DWORD *)v1 + 15);
  sub_DA7364((void **)&v109, "textures/colormap/evergreen");
  v110 = v109;
  v109 = (char *)&unk_28898CC;
  v111 = 0;
  mce::TextureGroup::unloadTexture(v35, (const ResourceLocation *)&v110);
  v36 = v110 - 12;
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v110 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j_j__ZdlPv_9(v36);
  v37 = v109 - 12;
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v109 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j_j__ZdlPv_9(v37);
  v38 = (mce::TextureGroup *)*((_DWORD *)v1 + 15);
  sub_DA7364((void **)&v106, "textures/colormap/birch");
  v107 = v106;
  v106 = (char *)&unk_28898CC;
  v108 = 0;
  mce::TextureGroup::unloadTexture(v38, (const ResourceLocation *)&v107);
  v39 = v107 - 12;
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v107 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j_j__ZdlPv_9(v39);
  v40 = v106 - 12;
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v106 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9(v40);
  v41 = (mce::TextureGroup *)*((_DWORD *)v1 + 15);
  sub_DA7364((void **)&v103, "textures/colormap/swamp_foliage");
  v104 = v103;
  v103 = (char *)&unk_28898CC;
  v105 = 0;
  mce::TextureGroup::unloadTexture(v41, (const ResourceLocation *)&v104);
  v42 = v104 - 12;
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v104 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j_j__ZdlPv_9(v42);
  v43 = v103 - 12;
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v103 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j_j__ZdlPv_9(v43);
  v44 = (mce::TextureGroup *)*((_DWORD *)v1 + 15);
  sub_DA7364((void **)&v100, "textures/colormap/swamp_grass");
  v101 = v100;
  v100 = (char *)&unk_28898CC;
  v102 = 0;
  mce::TextureGroup::unloadTexture(v44, (const ResourceLocation *)&v101);
  v45 = v101 - 12;
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v101 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j_j__ZdlPv_9(v45);
  v46 = v100 - 12;
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v100 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j_j__ZdlPv_9(v46);
  v47 = (mce::TextureGroup *)*((_DWORD *)v1 + 15);
  sub_DA7364((void **)&v97, "textures/colormap/grass");
  v98 = v97;
  v97 = (char *)&unk_28898CC;
  v99 = 0;
  mce::TextureGroup::unloadTexture(v47, (const ResourceLocation *)&v98);
  v48 = v98 - 12;
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v98 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j_j__ZdlPv_9(v48);
  v49 = v97 - 12;
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v97 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j_j__ZdlPv_9(v49);
}


PackReport *__fastcall MinecraftGame::_addVanillaLoadingScreensPack(MinecraftGame *this, ResourcePackStack *a2)
{
  MinecraftGame *v2; // r5@1
  ResourcePackStack *v3; // r4@1
  PackReport *result; // r0@1
  int v5; // r1@1
  int v6; // [sp+0h] [bp-88h]@2

  v2 = this;
  v3 = a2;
  result = (PackReport *)*((_DWORD *)this + 78);
  v5 = *((_DWORD *)result + 9);
  if ( v5 )
  {
    PackInstance::PackInstance((int)&v6, v5, -1, 0);
    ResourcePackStack::add((int)v3, (int)&v6, *((_DWORD *)v2 + 78), 0);
    result = PackReport::~PackReport((PackReport *)&v6);
  }
  return result;
}


signed int __fastcall MinecraftGame::composeScreenshot(int a1, mce::ImageBuffer *a2, int a3)
{
  int v3; // r6@1
  mce::ImageBuffer *v4; // r8@1
  int v5; // r5@1
  int v7; // r1@1
  int i; // r0@1
  int v9; // r1@3
  Level *v10; // r0@7
  Player *v12; // r7@10
  int v13; // r1@10
  int j; // r0@10
  Entity *v15; // r0@15
  const void **v16; // r0@15
  char *v17; // r0@15
  void *v18; // r0@16
  char v19; // r5@18
  signed int v20; // r4@21
  struct tm *v21; // r0@24
  __int64 v22; // kr00_8@24
  __int64 v23; // kr08_8@24
  __int64 v24; // kr10_8@24
  __int64 v25; // r2@24
  void *v26; // r0@24
  __int64 v27; // r2@26
  int v28; // r6@27
  void *v29; // r0@28
  void *v30; // r0@29
  void *v31; // r0@31
  char *v32; // r6@33
  char *v33; // r0@33
  mce::ImageBuffer *v34; // r1@33
  mce::ImageBuffer *v35; // r0@33
  char *v36; // r0@36
  char *v37; // r0@37
  ImageUtils *v38; // r6@38
  mce::ImageBuffer *v39; // r7@39
  char *v40; // r0@39
  unsigned int v41; // r3@39
  const mce::ImageBuffer *v42; // r3@39
  int v43; // r6@41
  char *v49; // r0@43
  __int64 v50; // r2@43
  __int64 v56; // r0@53
  void *v57; // r0@65
  void **v58; // r5@66
  void **v59; // r7@66
  _BYTE *v60; // r0@75
  int v61; // r2@76
  unsigned int v62; // r3@76
  void *v63; // r0@77
  char *v64; // r0@79
  unsigned int *v66; // r2@81
  signed int v67; // r1@83
  unsigned int *v68; // r2@85
  signed int v69; // r1@87
  unsigned int *v70; // r2@89
  signed int v71; // r1@91
  unsigned int *v72; // r2@97
  signed int v73; // r1@99
  int v74; // r2@101
  signed int v75; // r1@103
  unsigned int *v76; // r2@105
  signed int v77; // r1@107
  unsigned int *v78; // r2@109
  signed int v79; // r1@111
  unsigned int *v80; // r2@113
  signed int v81; // r1@115
  int v82; // r2@132
  signed int v83; // r1@134
  unsigned int *v84; // r2@136
  signed int v85; // r1@138
  unsigned int *v86; // r2@152
  signed int v87; // r1@154
  bool v88; // [sp+0h] [bp-F8h]@0
  int v89; // [sp+14h] [bp-E4h]@77
  char *v90; // [sp+1Ch] [bp-DCh]@36
  char *v91; // [sp+20h] [bp-D8h]@36
  int v92; // [sp+24h] [bp-D4h]@36
  void **v93; // [sp+28h] [bp-D0h]@36
  void **v94; // [sp+2Ch] [bp-CCh]@66
  int v95; // [sp+34h] [bp-C4h]@65
  int v96; // [sp+60h] [bp-98h]@31
  int v97; // [sp+64h] [bp-94h]@28
  int v98; // [sp+68h] [bp-90h]@28
  int v99; // [sp+6Ch] [bp-8Ch]@28
  int v100; // [sp+70h] [bp-88h]@26
  int v101; // [sp+74h] [bp-84h]@26
  int v102; // [sp+78h] [bp-80h]@26
  int v103; // [sp+7Ch] [bp-7Ch]@24
  time_t timer; // [sp+80h] [bp-78h]@24
  void *v105; // [sp+84h] [bp-74h]@18
  int v106; // [sp+88h] [bp-70h]@18
  char v107; // [sp+8Ch] [bp-6Ch]@18
  void (*v108)(void); // [sp+94h] [bp-64h]@18
  char v109; // [sp+9Ch] [bp-5Ch]@18
  void *v110; // [sp+A0h] [bp-58h]@17
  int v111; // [sp+A4h] [bp-54h]@17
  int v112; // [sp+A8h] [bp-50h]@15
  char *v113; // [sp+ACh] [bp-4Ch]@15
  void *v114; // [sp+B0h] [bp-48h]@1

  v3 = a1;
  v4 = a2;
  v5 = a1 + 216;
  _R9 = a3;
  v114 = &unk_28898CC;
  v7 = *(_DWORD *)(a1 + 220);
  for ( i = a1 + 216; v7; v7 = *(_DWORD *)(v7 + 8) )
    i = v7;
  v9 = v5;
  if ( i != v5 )
  {
    if ( *(_BYTE *)(i + 16) )
      i = v5;
    v9 = i;
  }
  v10 = (Level *)ClientInstance::getLevel(*(ClientInstance **)(v9 + 20));
  _ZF = v10 == 0;
  if ( v10 )
    _ZF = *(_BYTE *)(_R9 + 29) == 0;
  if ( !_ZF )
    v12 = (Player *)Level::getPhotoStorage(v10);
    v13 = *(_DWORD *)(v3 + 220);
    for ( j = v5; v13; v13 = *(_DWORD *)(v13 + 8) )
      j = v13;
    if ( j != v5 && !*(_BYTE *)(j + 16) )
      v5 = j;
    v15 = (Entity *)ClientInstance::getLocalPlayer(*(ClientInstance **)(v5 + 20));
    PhotoStorage::getPhotoPath((PhotoStorage *)&v112, v12, v15);
    v16 = sub_DA73D4((const void **)&v112, "/", 1u);
    v113 = (char *)*v16;
    *v16 = &unk_28898CC;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v114,
      (int *)&v113);
    v17 = v113 - 12;
    if ( (int *)(v113 - 12) != &dword_28898C0 )
    {
      v68 = (unsigned int *)(v113 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
      }
      else
        v69 = (*v68)--;
      if ( v69 <= 0 )
        j_j_j_j_j__ZdlPv_9(v17);
    }
    v18 = (void *)(v112 - 12);
    if ( (int *)(v112 - 12) != &dword_28898C0 )
      v70 = (unsigned int *)(v112 - 4);
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
        v71 = (*v70)--;
      if ( v71 <= 0 )
        j_j_j_j_j__ZdlPv_9(v18);
    v110 = v114;
    v111 = *((_DWORD *)v114 - 3);
    if ( !Core::FileSystem::fileOrDirectoryExists((__int64 *)&v110) )
      v105 = v114;
      v106 = *((_DWORD *)v114 - 3);
      Core::FileSystem::createDirectoryRecursively((int)&v107, (__int64 *)&v105);
      v19 = v109;
      v109 |= 2u;
      if ( v108 )
        v108();
      if ( !(v19 & 1) )
        v20 = 0;
        goto LABEL_79;
  if ( *(_DWORD *)(*(_DWORD *)(_R9 + 24) - 12) )
    sub_DA7564((const void **)&v114, (const void **)(_R9 + 24));
  else
    timer = time(0);
    v21 = localtime(&timer);
    v22 = *(_QWORD *)&v21->tm_sec;
    v23 = *(_QWORD *)&v21->tm_hour;
    v24 = *(_QWORD *)&v21->tm_mon;
    ++dword_27C5DB0;
    LODWORD(v25) = HIDWORD(v24) + 1900;
    HIDWORD(v25) = v24 + 1;
    Util::format(
      (Util *)&v103,
      "%d-%02d-%02d_%02d.%02d[%02d]",
      v25,
      HIDWORD(v23),
      (_DWORD)v23,
      HIDWORD(v22),
      (_DWORD)v22,
      dword_27C5DB0);
    sub_DA7564((const void **)&v114, (const void **)&v103);
    v26 = (void *)(v103 - 12);
    if ( (int *)(v103 - 12) != &dword_28898C0 )
      v72 = (unsigned int *)(v103 - 4);
          v73 = __ldrex(v72);
        while ( __strex(v73 - 1, v72) );
        v73 = (*v72)--;
      if ( v73 <= 0 )
        j_j_j_j_j__ZdlPv_9(v26);
  if ( !*(_BYTE *)(_R9 + 28) )
    sub_DA73B4(&v100, (int *)&v114);
    sub_DA73D4((const void **)&v100, ".png", 4u);
    v101 = v100;
    v102 = *(_DWORD *)(v100 - 12);
    if ( Core::FileSystem::fileExists((__int64 *)&v101) )
      v28 = 1;
    else
      sub_DA73B4(&v97, (int *)&v114);
      sub_DA73D4((const void **)&v97, ".jpeg", 5u);
      v98 = v97;
      v99 = *(_DWORD *)(v97 - 12);
      v28 = Core::FileSystem::fileExists((__int64 *)&v98);
      v29 = (void *)(v97 - 12);
      if ( (int *)(v97 - 12) != &dword_28898C0 )
        v82 = v97 - 4;
        if ( &pthread_create )
        {
          __dmb();
          do
          {
            v83 = __ldrex((unsigned int *)v27);
            HIDWORD(v27) = v83 - 1;
          }
          while ( __strex(v83 - 1, (unsigned int *)v27) );
        }
        else
          v83 = *(_DWORD *)v27;
          HIDWORD(v27) = *(_DWORD *)v27 - 1;
          *(_DWORD *)v27 = HIDWORD(v27);
        if ( v83 <= 0 )
          j_j_j_j_j__ZdlPv_9(v29);
    v30 = (void *)(v100 - 12);
    if ( (int *)(v100 - 12) != &dword_28898C0 )
      v74 = v100 - 4;
          v75 = __ldrex((unsigned int *)v27);
          HIDWORD(v27) = v75 - 1;
        while ( __strex(v75 - 1, (unsigned int *)v27) );
        v75 = *(_DWORD *)v27;
        HIDWORD(v27) = *(_DWORD *)v27 - 1;
        *(_DWORD *)v27 = HIDWORD(v27);
      if ( v75 <= 0 )
        j_j_j_j_j__ZdlPv_9(v30);
    if ( v28 == 1 )
      LODWORD(v27) = ++dword_27C5DB4;
      Util::format((Util *)&v96, "_%d", v27);
      sub_DA7564((const void **)&v114, (const void **)&v96);
      v31 = (void *)(v96 - 12);
      if ( (int *)(v96 - 12) != &dword_28898C0 )
        v84 = (unsigned int *)(v96 - 4);
            v85 = __ldrex(v84);
          while ( __strex(v85 - 1, v84) );
          v85 = (*v84)--;
        if ( v85 <= 0 )
          j_j_j_j_j__ZdlPv_9(v31);
  if ( !*(_BYTE *)(_R9 + 21) )
    if ( *(_BYTE *)_R9 )
      __asm
        VLDR            S0, [R9,#4]
        VLDR            S2, [R9,#8]
        VCVT.F32.S32    S16, S2
        VCVT.F32.S32    S18, S0
      _R5 = *(_DWORD *)mce::ImageBuffer::getImageDescription(v4);
      _R0 = mce::ImageBuffer::getImageDescription(v4);
        VLDR            S0, [R0,#4]
        VMOV            S2, R5
        VCVT.F32.U32    S20, S2
        VCVT.F32.U32    S22, S0
      v49 = mce::ImageBuffer::getImageDescription(v4);
      __asm { VDIV.F32        S0, S18, S16 }
      _R6 = *(_QWORD *)v49;
        VDIV.F32        S2, S20, S22
        VSUB.F32        S2, S0, S2
        VLDR            S6, =1.1921e-7
        VABS.F32        S4, S2
        VCMPE.F32       S4, S6
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
          VCMPE.F32       S2, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          __asm
            VMOV            S2, R7
            VCVT.F32.U32    S2, S2
            VMUL.F32        S0, S2, S0
            VMOV            R0, S0
          _R0 = ceilf(_R0);
            VMOV            S0, R0
            VCVTR.U32.F32   S0, S0
            VMOV            R6, S0
            VMOV            S2, R6
            VDIV.F32        S0, S2, S0
            VMOV            R7, S0
        if ( ImageUtils::cropImage(v4, (mce::ImageBuffer *)_R6, HIDWORD(_R6), 1u, v88) != 1 )
          v20 = 0;
          goto LABEL_79;
      if ( *(_BYTE *)(_R9 + 20) )
        v56 = *(_QWORD *)(_R9 + 12);
        v50 = 0LL;
        if ( HIDWORD(v56) < HIDWORD(_R6) )
          HIDWORD(v50) = 1;
        if ( (unsigned int)v56 < (unsigned int)_R6 )
          LODWORD(v50) = 1;
        if ( v50 )
          _R6 = *(_QWORD *)(_R9 + 12);
      if ( ImageUtils::scaleImage(v4, (mce::ImageBuffer *)_R6, HIDWORD(_R6), HIDWORD(v50)) != 1 )
      sub_DA73D4((const void **)&v114, ".jpeg", 5u);
      if ( !ImageUtils::saveJPEG(v4, (int *)&v114, 90) )
      sub_DA73D4((const void **)&v114, ".png", 4u);
      if ( ImageUtils::savePNG() != 1 )
    goto LABEL_75;
  v32 = mce::ImageBuffer::getImageDescription(v4);
  v33 = mce::ImageBuffer::getImageDescription(v4);
  v34 = *(mce::ImageBuffer **)v32;
  v35 = (mce::ImageBuffer *)*((_DWORD *)v33 + 1);
  if ( (unsigned int)v35 < *(_DWORD *)v32 )
    v34 = v35;
  if ( ImageUtils::cropImage(v4, v34, (unsigned int)v34, 1u, v88) != 1 )
    v20 = 0;
    goto LABEL_79;
  sub_DA7364((void **)&v90, "textures/ui/screenshot_frame");
  v91 = v90;
  v90 = (char *)&unk_28898CC;
  v92 = 0;
  Resource::loadTexture((Resource *)&v93, (const ResourceLocation *)&v91);
  v36 = v91 - 12;
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v91 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j_j__ZdlPv_9(v36);
  v37 = v90 - 12;
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v90 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j_j__ZdlPv_9(v37);
  v38 = (ImageUtils *)mce::TextureContainer::getImage((mce::TextureContainer *)&v93, 0);
  if ( !mce::ImageBuffer::isEmpty(v38) )
    v39 = *(mce::ImageBuffer **)mce::ImageBuffer::getImageDescription(v4);
    v40 = mce::ImageBuffer::getImageDescription(v4);
    if ( !ImageUtils::scaleImage(v38, v39, *((_DWORD *)v40 + 1), v41) )
      v43 = 1;
      goto LABEL_65;
    if ( ImageUtils::overlayImage(v4, v38, 0, v42) != 1 )
  sub_DA73D4((const void **)&v114, ".jpeg", 5u);
  v43 = ImageUtils::saveJPEG(v4, (int *)&v114, 90) ^ 1;
LABEL_65:
  v57 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v95 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j_j__ZdlPv_9(v57);
  v59 = v94;
  v58 = v93;
  if ( v93 != v94 )
    do
      if ( *v58 )
        operator delete(*v58);
      v58 += 10;
    while ( v59 != v58 );
    v58 = v93;
  if ( v58 )
    operator delete(v58);
  if ( v43 )
LABEL_75:
  EntityInteraction::setInteractText((int *)(_R9 + 32), (int *)&v114);
  v60 = sub_DA822C((int *)&v114, 47, 0xFFFFFFFF);
  if ( v60 != (_BYTE *)-1 )
    v61 = (int)(v60 + 1);
    v62 = *((_DWORD *)v114 - 3);
    if ( v62 < (unsigned int)(v60 + 1) )
      sub_DA7584("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v61, v62);
    sub_DA7574((void **)&v89, (int *)&v114, v61, 0xFFFFFFFF);
      &v89);
    v63 = (void *)(v89 - 12);
    if ( (int *)(v89 - 12) != &dword_28898C0 )
      v86 = (unsigned int *)(v89 - 4);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      if ( v87 <= 0 )
        j_j_j_j_j__ZdlPv_9(v63);
  v20 = 1;
LABEL_79:
  v64 = (char *)v114 - 12;
  if ( (int *)((char *)v114 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)((char *)v114 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j_j__ZdlPv_9(v64);
  return v20;
}


int __fastcall MinecraftGame::getPrimaryClientInstance(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  return *((_DWORD *)v2 + 5);
}


char *__fastcall MinecraftGame::getResourcePacksInfoData(MinecraftGame *this)
{
  return (char *)this + 564;
}


App *__fastcall MinecraftGame::MinecraftGame(App *a1, int a2, char **a3)
{
  App *v3; // r4@1
  __int64 v4; // r1@1
  double v5; // r0@1
  double v6; // r0@1
  int v7; // r6@3
  void *v8; // r5@3
  unsigned int v9; // r0@4
  int v10; // r6@6
  void *v11; // r5@6
  int v12; // r11@7
  double v13; // r0@7
  double v14; // r0@7
  int v15; // r6@9
  void *v16; // r5@9
  unsigned int v17; // r0@10
  int v18; // r6@12
  void *v19; // r5@12
  mce::RendererSettings *v20; // r5@13
  void *v21; // r0@13
  int v22; // r1@15
  int v23; // r0@15
  void *v24; // r0@19
  int *v25; // r5@21
  __int64 v26; // r0@21
  int v27; // r6@21
  unsigned int *v28; // r1@22
  unsigned int v29; // r0@24
  unsigned int *v30; // r7@28
  unsigned int v31; // r0@30
  int v32; // r6@35
  unsigned int *v33; // r1@36
  unsigned int v34; // r0@38
  unsigned int *v35; // r7@42
  unsigned int v36; // r0@44
  void *v37; // r0@49
  MinecraftEventing *v38; // r6@50
  int v39; // r0@50
  int v40; // r7@52
  SaveTransactionManager *v41; // r6@52
  _DWORD *v42; // r0@52
  __int64 v43; // r1@52
  int v44; // r0@54
  int v45; // r6@54
  unsigned int *v46; // r1@55
  unsigned int v47; // r0@57
  unsigned int *v48; // r7@61
  unsigned int v49; // r0@63
  SaveTransactionManager *v50; // r0@69
  void *v51; // r0@71
  int *v52; // r0@73
  void *v53; // r9@73
  char *v54; // r0@73
  FilePathManager *v55; // r0@74
  FilePathManager *v56; // r0@75
  char *v57; // r0@76
  void *v58; // r0@78
  int v59; // r6@80
  void (__fastcall *v60)(int, _DWORD **); // r7@80
  _DWORD *v61; // r0@80
  __int64 v62; // r1@80
  unsigned int *v64; // r2@89
  signed int v65; // r1@91
  unsigned int *v66; // r2@93
  signed int v67; // r1@95
  unsigned int *v68; // r2@97
  signed int v69; // r1@99
  _DWORD *v70; // [sp+18h] [bp-90h]@80
  __int64 v71; // [sp+20h] [bp-88h]@80
  char *v72; // [sp+28h] [bp-80h]@73
  SaveTransactionManager *v73; // [sp+2Ch] [bp-7Ch]@52
  int v74; // [sp+30h] [bp-78h]@50
  int v75; // [sp+34h] [bp-74h]@50
  char v76; // [sp+38h] [bp-70h]@50
  void (*v77)(void); // [sp+40h] [bp-68h]@82
  char v78; // [sp+48h] [bp-60h]@50
  int v79; // [sp+4Ch] [bp-5Ch]@21
  char v80; // [sp+50h] [bp-58h]@21
  int v81; // [sp+54h] [bp-54h]@21
  int v82; // [sp+58h] [bp-50h]@15
  int v83; // [sp+60h] [bp-48h]@21
  _DWORD *v84; // [sp+64h] [bp-44h]@52
  void (*v85)(void); // [sp+6Ch] [bp-3Ch]@52
  int v86; // [sp+74h] [bp-34h]@54
  int v87; // [sp+78h] [bp-30h]@54
  char *v88; // [sp+7Ch] [bp-2Ch]@73

  v3 = a1;
  App::App(a1, a2, a3);
  *(_DWORD *)v3 = &off_26D646C;
  LODWORD(v4) = &off_26D6514;
  HIDWORD(v4) = &off_26D653C;
  *((_QWORD *)v3 + 2) = v4;
  *((_DWORD *)v3 + 6) = &off_26D65B8;
  *((_DWORD *)v3 + 7) = 1024;
  MinecraftGraphics::MinecraftGraphics((App *)((char *)v3 + 32));
  *((_BYTE *)v3 + 114) = 0;
  *((_BYTE *)v3 + 115) = 0;
  *((_BYTE *)v3 + 116) = 0;
  *((_DWORD *)v3 + 32) = 0;
  *((_DWORD *)v3 + 33) = 0;
  _aeabi_memclr4((char *)v3 + 40, 73);
  *((_DWORD *)v3 + 34) = 1065353216;
  *((_DWORD *)v3 + 35) = 0;
  LODWORD(v5) = (char *)v3 + 136;
  v6 = COERCE_DOUBLE(__PAIR__(10, sub_DA7744(v5)));
  *((_DWORD *)v3 + 31) = LODWORD(v6);
  if ( LODWORD(v6) == 1 )
  {
    *((_DWORD *)v3 + 36) = 0;
    v8 = (char *)v3 + 144;
  }
  else
    if ( LODWORD(v6) >= 0x40000000 )
      sub_DA7414();
    v7 = 4 * LODWORD(v6);
    v8 = operator new(4 * LODWORD(v6));
    _aeabi_memclr4(v8, v7);
  *((_DWORD *)v3 + 30) = v8;
  *((_DWORD *)v3 + 39) = 0;
  *((_DWORD *)v3 + 40) = 0;
  *((_DWORD *)v3 + 41) = 1065353216;
  LODWORD(v6) = (char *)v3 + 164;
  *(_DWORD *)(LODWORD(v6) + 4) = 0;
  v9 = sub_DA7744(v6);
  *((_DWORD *)v3 + 38) = v9;
  if ( v9 == 1 )
    *((_DWORD *)v3 + 43) = 0;
    v11 = (char *)v3 + 172;
    if ( v9 >= 0x40000000 )
    v10 = 4 * v9;
    v11 = operator new(4 * v9);
    _aeabi_memclr4(v11, v10);
  *((_DWORD *)v3 + 37) = v11;
  *((_DWORD *)v3 + 46) = 0;
  *((_DWORD *)v3 + 47) = 0;
  *((_DWORD *)v3 + 48) = 0;
  *((_DWORD *)v3 + 49) = 0;
  *((_DWORD *)v3 + 45) = 0;
  *((_DWORD *)v3 + 47) = (char *)v3 + 180;
  *((_DWORD *)v3 + 48) = (char *)v3 + 180;
  *((_DWORD *)v3 + 50) = 0;
  *((_DWORD *)v3 + 51) = 0;
  *((_DWORD *)v3 + 52) = 0;
  *((_DWORD *)v3 + 54) = 0;
  v12 = (int)v3 + 216;
  *(_DWORD *)(v12 + 4) = 0;
  *(_DWORD *)(v12 + 8) = 0;
  *(_DWORD *)(v12 + 12) = 0;
  *(_DWORD *)(v12 + 16) = 0;
  *(_DWORD *)(v12 + 8) = v12;
  *(_DWORD *)(v12 + 12) = v12;
  _aeabi_memclr4((char *)v3 + 236, 36);
  *((_DWORD *)v3 + 68) = MusicManager::MENU;
  sub_DA73B4((int *)v3 + 69, (int *)&unk_27D5474);
  *((_QWORD *)v3 + 35) = qword_27D5478;
  *((_DWORD *)v3 + 106) = 0;
  *((_DWORD *)v3 + 107) = 0;
  *((_DWORD *)v3 + 108) = 0;
  *((_DWORD *)v3 + 109) = 0;
  *((_DWORD *)v3 + 110) = 0;
  *((_DWORD *)v3 + 78) = 0;
  *((_DWORD *)v3 + 79) = 0;
  *((_DWORD *)v3 + 76) = 0;
  *((_DWORD *)v3 + 77) = 0;
  *((_DWORD *)v3 + 74) = 0;
  *((_DWORD *)v3 + 75) = 0;
  *((_DWORD *)v3 + 72) = 0;
  *((_DWORD *)v3 + 73) = 0;
  _aeabi_memclr4((char *)v3 + 324, 96);
  *((_DWORD *)v3 + 108) = (char *)v3 + 424;
  *((_DWORD *)v3 + 109) = (char *)v3 + 424;
  *((_BYTE *)v3 + 445) = 0;
  *((_DWORD *)v3 + 116) = 0;
  *((_DWORD *)v3 + 117) = 0;
  *((_DWORD *)v3 + 114) = 0;
  *((_DWORD *)v3 + 115) = 0;
  *((_DWORD *)v3 + 112) = 0;
  *((_DWORD *)v3 + 113) = 0;
  *((_DWORD *)v3 + 120) = &unk_28898CC;
  *((_DWORD *)v3 + 121) = &unk_28898CC;
  *((_DWORD *)v3 + 125) = 4;
  *((_DWORD *)v3 + 126) = 0;
  *((_DWORD *)v3 + 130) = 0;
  *((_DWORD *)v3 + 131) = 0;
  *((_DWORD *)v3 + 128) = 0;
  *((_DWORD *)v3 + 129) = 0;
  *((_DWORD *)v3 + 133) = &unk_28898CC;
  *((_DWORD *)v3 + 138) = 0;
  *((_DWORD *)v3 + 139) = 0;
  *((_BYTE *)v3 + 548) = 0;
  *((_DWORD *)v3 + 136) = 0;
  *((_DWORD *)v3 + 134) = 0;
  *((_DWORD *)v3 + 135) = 0;
  sub_DA7364((void **)v3 + 140, (const char *)&unk_257BC67);
  *((_DWORD *)v3 + 146) = 0;
  *((_DWORD *)v3 + 147) = 0;
  *((_DWORD *)v3 + 144) = 0;
  *((_DWORD *)v3 + 145) = 0;
  *((_DWORD *)v3 + 142) = 0;
  *((_DWORD *)v3 + 143) = 0;
  *((_DWORD *)v3 + 152) = 0;
  *((_DWORD *)v3 + 153) = 0;
  *((_DWORD *)v3 + 154) = 1065353216;
  *((_DWORD *)v3 + 155) = 0;
  LODWORD(v13) = (char *)v3 + 616;
  v14 = COERCE_DOUBLE(__PAIR__(10, sub_DA7744(v13)));
  *((_DWORD *)v3 + 151) = LODWORD(v14);
  if ( LODWORD(v14) == 1 )
    v16 = (char *)v3 + 624;
    *((_DWORD *)v3 + 156) = 0;
    if ( LODWORD(v14) >= 0x40000000 )
    v15 = 4 * LODWORD(v14);
    v16 = operator new(4 * LODWORD(v14));
    _aeabi_memclr4(v16, v15);
  *((_DWORD *)v3 + 150) = v16;
  *((_DWORD *)v3 + 159) = 0;
  *((_DWORD *)v3 + 160) = 0;
  *((_DWORD *)v3 + 161) = 1065353216;
  *((_DWORD *)v3 + 162) = 0;
  LODWORD(v14) = (char *)v3 + 644;
  v17 = sub_DA7744(v14);
  *((_DWORD *)v3 + 158) = v17;
  if ( v17 == 1 )
    v19 = (char *)v3 + 652;
    *((_DWORD *)v3 + 163) = 0;
    if ( v17 >= 0x40000000 )
    v18 = 4 * v17;
    v19 = operator new(4 * v17);
    _aeabi_memclr4(v19, v18);
  *((_DWORD *)v3 + 157) = v19;
  *((_BYTE *)v3 + 656) = 0;
  *((_DWORD *)v3 + 168) = 0;
  *((_DWORD *)v3 + 169) = 0;
  *((_DWORD *)v3 + 172) = 0;
  *((_BYTE *)v3 + 696) = 0;
  *((_BYTE *)v3 + 697) = 0;
  *((_DWORD *)v3 + 175) = 0;
  *((_DWORD *)v3 + 176) = 0;
  *((_DWORD *)v3 + 177) = 0;
  *((_WORD *)v3 + 334) = 0;
  *((_DWORD *)v3 + 165) = 0;
  *((_DWORD *)v3 + 166) = 0;
  v20 = (mce::RendererSettings *)operator new(0x38u);
  mce::RendererSettings::RendererSettings(v20);
  v21 = (void *)mce::Singleton<mce::RendererSettings>::mInstance;
  mce::Singleton<mce::RendererSettings>::mInstance = v20;
  if ( v21 )
    operator delete(v21);
  mce::TextureGroup::mCanLoadTextures = 0;
  AppPlatformListener::initListener((AppPlatformListener *)&mce::RenderMaterialGroup::common, 1.0);
  AppPlatformListener::initListener((AppPlatformListener *)&mce::RenderMaterialGroup::switchable, 1.0);
  Social::UserManager::CreateUserManager((Social::UserManager *)&v82);
  v22 = v82;
  v82 = 0;
  v23 = *((_DWORD *)v3 + 86);
  *((_DWORD *)v3 + 86) = v22;
  if ( v23 )
    (*(void (**)(void))(*(_DWORD *)v23 + 4))();
    if ( v82 )
      (*(void (**)(void))(*(_DWORD *)v82 + 4))();
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v24 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v24 = &ServiceLocator<AppPlatform>::mDefaultService;
  v25 = (int *)(*(int (**)(void))(**(_DWORD **)v24 + 284))();
  sub_DA73B4(&v83, v25);
  v79 = v83;
  Core::FileStorageArea::createBasicDirectoryStorageArea((int)&v80, 1, &v79);
  v26 = *(_QWORD *)&v80;
  *(_DWORD *)&v80 = 0;
  v81 = 0;
  *((_DWORD *)v3 + 138) = v26;
  v27 = *((_DWORD *)v3 + 139);
  *((_DWORD *)v3 + 139) = HIDWORD(v26);
  if ( v27 )
    v28 = (unsigned int *)(v27 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 == 1 )
      v30 = (unsigned int *)(v27 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
      if ( &pthread_create )
      {
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
      }
      else
        v31 = (*v30)--;
      if ( v31 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
  v32 = v81;
  if ( v81 )
    v33 = (unsigned int *)(v81 + 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 == 1 )
      v35 = (unsigned int *)(v32 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
  v37 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v79 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j_j__ZdlPv_9(v37);
  v74 = *v25;
  v75 = *(_DWORD *)(v74 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v76, (__int64 *)&v74);
  v78 |= 2u;
  v38 = (MinecraftEventing *)operator new(0x38u);
  MinecraftEventing::MinecraftEventing((int)v38, v25);
  v39 = *((_DWORD *)v3 + 126);
  *((_DWORD *)v3 + 126) = v38;
  if ( v39 )
    (*(void (**)(void))(*(_DWORD *)v39 + 4))();
    v38 = (MinecraftEventing *)*((_DWORD *)v3 + 126);
  MinecraftEventing::init(v38, *((Social::UserManager **)v3 + 86));
  v40 = *((_DWORD *)v3 + 86);
  v41 = (SaveTransactionManager *)operator new(0x24u);
  v85 = 0;
  v42 = operator new(4u);
  LODWORD(v43) = sub_C13BC6;
  *v42 = v3;
  HIDWORD(v43) = sub_C13BB4;
  v84 = v42;
  *(_QWORD *)&v85 = v43;
  SaveTransactionManager::SaveTransactionManager((int)v41, v40, (int)&v84);
  v73 = v41;
  if ( v85 )
    v85();
  std::__shared_ptr<SaveTransactionManager,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<SaveTransactionManager,std::default_delete<SaveTransactionManager>>(
    (int)&v86,
    (int *)&v73);
  v44 = v86;
  v86 = *((_DWORD *)v3 + 51);
  *((_DWORD *)v3 + 51) = v44;
  v45 = *((_DWORD *)v3 + 52);
  *((_DWORD *)v3 + 52) = v87;
  v87 = v45;
  if ( v45 )
    v46 = (unsigned int *)(v45 + 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 == 1 )
      v48 = (unsigned int *)(v45 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v45 + 8))(v45);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v45 + 12))(v45);
  if ( v73 )
    v50 = SaveTransactionManager::~SaveTransactionManager(v73);
    operator delete((void *)v50);
  v73 = 0;
    v51 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v51 = &ServiceLocator<AppPlatform>::mDefaultService;
  v52 = (int *)(*(int (**)(void))(**(_DWORD **)v51 + 264))();
  sub_DA73B4((int *)&v72, v52);
  sub_DA73D4((const void **)&v72, "/", 1u);
  v53 = operator new(0x20u);
  v88 = v72;
  v72 = (char *)&unk_28898CC;
  FilePathManager::FilePathManager((int)v53, (int *)&v88, 0);
  v54 = v88 - 12;
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v88 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j_j__ZdlPv_9(v54);
  v55 = (FilePathManager *)*((_DWORD *)v3 + 65);
  *((_DWORD *)v3 + 65) = v53;
  if ( v55 )
    v56 = FilePathManager::~FilePathManager(v55);
    operator delete((void *)v56);
  v57 = v72 - 12;
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v72 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j_j__ZdlPv_9(v57);
    v58 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v58 = &ServiceLocator<AppPlatform>::mDefaultService;
  v59 = *(_DWORD *)v58;
  v60 = *(void (__fastcall **)(int, _DWORD **))(**(_DWORD **)v58 + 228);
  v61 = operator new(4u);
  LODWORD(v62) = sub_C140F8;
  *v61 = v3;
  HIDWORD(v62) = sub_C13E04;
  v70 = v61;
  v71 = v62;
  v60(v59, &v70);
  if ( (_DWORD)v71 )
    ((void (*)(void))v71)();
  ProfilerLite::init((int)&ProfilerLite::gProfilerLiteInstance, v25);
  MinecraftGame::_initMinecraftGame(v3);
  if ( v77 )
    v77();
  return v3;
}


void __fastcall MinecraftGame::onClientCreatedLevel(MinecraftGame *this, ClientInstance *a2)
{
  ClientInstance *v2; // r10@1
  MinecraftGame *v3; // r8@1
  Level *v4; // r9@1
  NetworkHandler *v5; // r0@1
  int v6; // r0@1
  int v7; // r4@1
  void *v8; // r0@2
  int v9; // r7@4
  void (__fastcall *v10)(void **, int, signed int, int); // r6@4
  Social::XboxLiveUserManager *v11; // r0@6
  signed int v12; // r4@6
  signed int v13; // r5@6
  int v14; // r0@8
  int v15; // r7@9
  unsigned int *v16; // r1@10
  unsigned int v17; // r0@12
  unsigned int *v18; // r4@16
  unsigned int v19; // r0@18
  unsigned __int64 *v20; // r11@23
  int v21; // r1@23 OVERLAPPED
  int v22; // r2@23 OVERLAPPED
  Social::User *v23; // r4@23
  void *v24; // r6@23
  unsigned int v25; // r7@23
  int v26; // r7@26
  int v27; // r6@30
  unsigned int *v28; // r1@31
  unsigned int v29; // r0@33
  unsigned int *v30; // r4@37
  unsigned int v31; // r0@39
  int v32; // r0@45
  void *ptr; // [sp+4h] [bp-4Ch]@23
  char *v34; // [sp+8h] [bp-48h]@23
  char *v35; // [sp+Ch] [bp-44h]@23
  Social::User *v36; // [sp+10h] [bp-40h]@23
  int v37; // [sp+14h] [bp-3Ch]@30
  Social::User *v38; // [sp+18h] [bp-38h]@6
  int v39; // [sp+1Ch] [bp-34h]@9
  void *v40; // [sp+20h] [bp-30h]@8
  int v41; // [sp+24h] [bp-2Ch]@23

  v2 = a2;
  v3 = this;
  v4 = (Level *)ClientInstance::getLevel(a2);
  v5 = (NetworkHandler *)ClientInstance::getClientNetworkSystem(v2);
  v6 = NetworkHandler::getConnectionInfo(v5);
  v7 = ThirdPartyInfo::isValid((ThirdPartyInfo *)(v6 + 20));
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v8 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v8 = &ServiceLocator<AppPlatform>::mDefaultService;
  v9 = *(_DWORD *)v8;
  v10 = *(void (__fastcall **)(void **, int, signed int, int))(**(_DWORD **)v8 + 652);
  if ( Social::MultiplayerServiceManager::isInRealm(*((Social::MultiplayerServiceManager **)v3 + 87)) | v7
    || Level::hasXBLBroadcast(v4) == 1 )
  {
    ClientInstance::getUser((ClientInstance *)&v38, (int)v2);
    v11 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v38);
    v12 = Social::XboxLiveUserManager::checkPrivilegeSilently(v11, 254);
    v13 = 1;
  }
    v13 = 0;
    v12 = 0;
  v14 = Level::hasPlatformBroadcast(v4);
  v10(&v40, v9, v12, v14);
  if ( v13 == 1 )
    v15 = v39;
    if ( v39 )
    {
      v16 = (unsigned int *)(v39 + 4);
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
    }
  v20 = (unsigned __int64 *)*((_DWORD *)v3 + 87);
  ClientInstance::getUser((ClientInstance *)&v36, (int)v2);
  *(_QWORD *)&v21 = *(_QWORD *)&v40;
  v23 = v36;
  v24 = 0;
  ptr = 0;
  v34 = 0;
  v35 = 0;
  v25 = (v41 - (signed int)v40) >> 2;
  if ( v25 )
    if ( v25 >= 0x40000000 )
      sub_DA7414();
    v24 = operator new(v41 - (_DWORD)v40);
    *(_QWORD *)&v21 = *(_QWORD *)&v40;
  ptr = v24;
  v34 = (char *)v24;
  v35 = (char *)v24 + 4 * v25;
  v26 = (v22 - v21) >> 2;
  if ( 0 != v26 )
    _aeabi_memmove4(v24, v21);
  v34 = (char *)v24 + 4 * v26;
  Social::MultiplayerServiceManager::onEnterLevel(v20, v23, v4, (int)&ptr);
  if ( ptr )
    operator delete(ptr);
  v27 = v37;
  if ( v37 )
    v28 = (unsigned int *)(v37 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    else
      v29 = (*v28)--;
    if ( v29 == 1 )
      v30 = (unsigned int *)(v27 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
  if ( ClientInstance::isPrimaryClient(v2) == 1 )
    v32 = NetworkHandler::getServerLocator(*((NetworkHandler **)v3 + 84));
    (*(void (**)(void))(*(_DWORD *)v32 + 24))();
    OfferRepository::isGameLicensed(*((OfferRepository **)v3 + 74));
  if ( v40 )
    operator delete(v40);
}


int __fastcall MinecraftGame::initEventing(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1

  v1 = this;
  MinecraftEventing::fireEventHardwareInfo(*((MinecraftEventing **)this + 126));
  return j_j_j__ZN17MinecraftEventing20fireEventStartClientEv(*((MinecraftEventing **)v1 + 126));
}


MinecraftGame *__fastcall MinecraftGame::setKeyboardForcedHeight(MinecraftGame *this, float a2)
{
  MinecraftGame *v2; // r5@1
  float v3; // r4@1
  float *v4; // r0@1
  int (__cdecl *v5)(float **); // r3@1
  MinecraftGame *v6; // r4@1
  MinecraftGame *result; // r0@4
  float *v8; // [sp+0h] [bp-20h]@1
  int (__cdecl *v9)(float **); // [sp+8h] [bp-18h]@1
  int (__fastcall *v10)(int **, ClientInstance *); // [sp+Ch] [bp-14h]@1

  v2 = this;
  v3 = a2;
  v4 = (float *)operator new(4u);
  *v4 = v3;
  v5 = (int (__cdecl *)(float **))sub_C22DF8;
  v8 = v4;
  v9 = (int (__cdecl *)(float **))sub_C22DF8;
  v10 = sub_C22DC0;
  v6 = (MinecraftGame *)*((_DWORD *)v2 + 56);
  if ( v6 == (MinecraftGame *)((char *)v2 + 216) )
    goto LABEL_11;
  do
  {
    if ( !v5 )
      sub_DA7654();
    v10((int **)&v8, *((ClientInstance **)v6 + 5));
    result = (MinecraftGame *)sub_DA7F5C((int)v6);
    v5 = v9;
    v6 = result;
  }
  while ( result != (MinecraftGame *)((char *)v2 + 216) );
  if ( v9 )
LABEL_11:
    result = (MinecraftGame *)v5(&v8);
  return result;
}


int __fastcall MinecraftGame::update(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  char v2; // r0@1
  int v3; // r0@2
  unsigned int v4; // r5@2
  void *v5; // r0@2
  PatchNotesModel *v11; // r0@5
  PatchNotesModel **v12; // r0@5
  PatchNotesModel **v13; // r8@5
  PatchNotesModel *v14; // r0@5
  _DWORD *v15; // r0@8
  int v16; // r5@8
  void (*v17)(void); // r3@8
  int v18; // r6@8
  int v19; // r0@11
  void *v20; // r0@17
  int result; // r0@19
  int v24; // r1@24
  int i; // r0@24
  int v26; // r1@26
  int v27; // r0@30
  _DWORD *v30; // r0@30
  void (*v31)(void); // r3@30
  int v32; // r6@30
  int v33; // r0@33
  int v34; // r2@41
  int v35; // r0@41
  int v36; // r3@42
  int v37; // r0@52
  char v38; // r0@54
  ServerInstance *v39; // r0@57
  Option *v40; // r0@60
  int v41; // r1@60
  signed int v42; // r6@60
  int v43; // r6@63
  unsigned int *v44; // r1@64
  unsigned int v45; // r0@66
  unsigned int *v46; // r2@68
  signed int v47; // r1@70
  unsigned int *v48; // r7@74
  unsigned int v49; // r0@76
  char v50; // r0@85
  _QWORD *v56; // r6@91
  int v57; // r0@93
  unsigned int *v58; // r0@96
  unsigned int v59; // r1@97
  _DWORD *v60; // r0@100
  void (*v61)(void); // r3@100
  int v62; // r6@100
  int v63; // r0@103
  int v64; // r0@108
  int v65; // r1@108
  int v66; // r2@109
  int v67; // r2@111
  ClientInstance *v68; // r6@115
  int j; // r1@115
  int v70; // r0@117
  Minecraft *v71; // r0@121
  const Timer *v72; // r0@121
  int v73; // r0@121
  char v75; // r0@122
  _QWORD *v78; // r6@126
  int v79; // r0@128
  unsigned int *v80; // r0@131
  unsigned int v81; // r1@132
  int v85; // r0@137
  int k; // r1@137
  int v87; // r1@139
  HolographicPlatform *v88; // r0@143
  OculusPlatformMessagePump *v89; // r0@145
  _DWORD *v92; // r6@150
  void (*v96)(void); // r3@153
  int v97; // r6@153
  int v98; // r0@156
  int v99; // r5@161 OVERLAPPED
  int v100; // r6@161 OVERLAPPED
  unsigned int *v101; // r1@162
  unsigned int v102; // r0@164
  unsigned int *v103; // r7@168
  unsigned int v104; // r0@170
  Option *v105; // r0@176
  int v107; // r7@176
  unsigned int *v108; // r1@177
  unsigned int v109; // r0@179
  unsigned int *v110; // r5@183
  unsigned int v111; // r0@185
  __int64 v112; // kr00_8@191
  int v116; // r0@192
  __time_t v117; // r6@192
  int v118; // r1@192
  signed int v121; // r0@193
  __int64 v125; // [sp+0h] [bp-140h]@0
  char v126; // [sp+8h] [bp-138h]@200
  int v127; // [sp+10h] [bp-130h]@191
  int v128; // [sp+18h] [bp-128h]@176
  int v129; // [sp+1Ch] [bp-124h]@176
  char v130; // [sp+20h] [bp-120h]@161
  int v131; // [sp+24h] [bp-11Ch]@161
  void *v132; // [sp+28h] [bp-118h]@153
  int (__fastcall *v133)(void **, void **, int); // [sp+30h] [bp-110h]@153
  int (__fastcall *v134)(int, ClientInstance *); // [sp+34h] [bp-10Ch]@153
  int v135; // [sp+38h] [bp-108h]@150
  Scheduler *v136; // [sp+40h] [bp-100h]@148
  double v137; // [sp+48h] [bp-F8h]@148
  int v139; // [sp+58h] [bp-E8h]@148
  int v140; // [sp+60h] [bp-E0h]@124
  double v141; // [sp+68h] [bp-D8h]@124
  int v143; // [sp+78h] [bp-C8h]@124
  _DWORD *v144; // [sp+80h] [bp-C0h]@100
  void (*v145)(void); // [sp+88h] [bp-B8h]@100
  int (__fastcall *v146)(int **, int); // [sp+8Ch] [bp-B4h]@100
  int v147; // [sp+90h] [bp-B0h]@86
  double v148; // [sp+98h] [bp-A8h]@86
  int v150; // [sp+A8h] [bp-98h]@86
  int v151; // [sp+B4h] [bp-8Ch]@60
  int v152; // [sp+B8h] [bp-88h]@63
  _DWORD *v153; // [sp+BCh] [bp-84h]@30
  void (*v154)(void); // [sp+C4h] [bp-7Ch]@30
  unsigned __int64 (__fastcall *v155)(char ***, ClientInstance *); // [sp+C8h] [bp-78h]@30
  char v156; // [sp+CFh] [bp-71h]@30
  int v157; // [sp+D0h] [bp-70h]@20
  double v158; // [sp+D8h] [bp-68h]@20
  int v160; // [sp+E8h] [bp-58h]@20
  _DWORD *v161; // [sp+F4h] [bp-4Ch]@8
  void (*v162)(void); // [sp+FCh] [bp-44h]@8
  int (__fastcall *v163)(int **, ClientInstance *); // [sp+100h] [bp-40h]@8
  int v164; // [sp+104h] [bp-3Ch]@2
  __int64 v165; // [sp+108h] [bp-38h]@1
  struct timespec requested_time; // [sp+118h] [bp-28h]@192

  v1 = this;
  sub_DA7F0C(&v165);
  v2 = *((_BYTE *)v1 + 656);
  __dmb();
  if ( !(v2 & 1) )
    goto LABEL_205;
  v3 = SceneStack::getTopScreen(*((SceneStack **)v1 + 26));
  (*(void (__fastcall **)(int *))(**(_DWORD **)v3 + 228))(&v164);
  v4 = sub_DA7BFC(&v164, "world_loading_progress_screen", 0, 0x1Du);
  v5 = (void *)(v164 - 12);
  if ( (int *)(v164 - 12) != &dword_28898C0 )
  {
    v46 = (unsigned int *)(v164 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
    }
    else
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == -1 )
LABEL_205:
    _R0 = getTimeS();
    __asm { VMOV            D0, R0, R1 }
    _R2 = &MinecraftGame::WORLD_PATH;
    __asm
      VLDR            D2, [R2,#0x10]
      VLDR            D1, [R2,#8]
      VSUB.F64        D2, D0, D2
      VADD.F64        D1, D2, D1
      VSTR            D1, [R2,#8]
      VSTR            D0, [R2,#0x10]
  v11 = (PatchNotesModel *)ResourceLoadManager::update(*((ResourceLoadManager **)v1 + 165));
  v12 = PatchNotesModel::getPreloadedPatchNotes(v11);
  v13 = v12;
  v14 = *v12;
  if ( v14 && !PatchNotesModel::ready(v14) )
    PatchNotesModel::update(*v13);
  MinecraftGame::_removePendingSubclients(v1);
  v15 = operator new(4u);
  v16 = (int)v1 + 216;
  *v15 = v1;
  v17 = (void (*)(void))sub_C18B76;
  v161 = v15;
  v162 = (void (*)(void))sub_C18B76;
  v163 = sub_C18B2C;
  v18 = *((_DWORD *)v1 + 56);
  if ( (MinecraftGame *)v18 == (MinecraftGame *)((char *)v1 + 216) )
    goto LABEL_206;
  do
    if ( !v17 )
      sub_DA7654();
    v163(&v161, *(ClientInstance **)(v18 + 20));
    v19 = sub_DA7F5C(v18);
    v17 = v162;
    v18 = v19;
  while ( v19 != v16 );
  if ( v162 )
LABEL_206:
    v17();
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v20 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v20 = &ServiceLocator<AppPlatform>::mDefaultService;
  result = (*(int (**)(void))(**(_DWORD **)v20 + 572))();
  if ( !result )
    MinecraftGame::_updateProfiler(v1);
    v158 = 0.0;
    v160 = 0;
    v157 = unk_27F636C;
    unk_27F636C = &v157;
      VMOV            D0, R0, R2
      VSTR            D0, [SP,#0x140+var_68]
      VSTR            D0, [SP,#0x140+var_60]
    _R2 = v157;
    if ( v157 )
      __asm
      {
        VMOV            D0, R0, R1
        VLDR            D1, [R2,#8]
        VADD.F64        D0, D1, D0
        VSTR            D0, [R2,#8]
      }
    MinecraftGame::startFrame(v1);
    if ( *((_BYTE *)v1 + 668) )
      DevConsoleLogger::update(*((DevConsoleLogger **)v1 + 81));
    v24 = *((_DWORD *)v1 + 55);
    for ( i = (int)v1 + 216; v24; v24 = *(_DWORD *)(v24 + 8) )
      i = v24;
    v26 = (int)v1 + 216;
    if ( i != v16 )
      if ( *(_BYTE *)(i + 16) )
        i = (int)v1 + 216;
      v26 = i;
    v27 = ClientInstance::getHoloInput(*(ClientInstance **)(v26 + 20));
    _R0 = (*(int (**)(void))(*(_DWORD *)v27 + 48))();
      VMOV            S2, R0
      VMOV.F32        S0, #1.0
      VCVT.F32.S32    S2, S2
      VDIV.F32        S0, S0, S2
      VMOV            R6, S0
    Timer::advanceTime(*((Timer **)v1 + 60), _R6);
    Timer::advanceTime(*((Timer **)v1 + 61), _R6);
    v156 = 0;
    v30 = operator new(4u);
    *v30 = &v156;
    v31 = (void (*)(void))sub_C18CC8;
    v153 = v30;
    v154 = (void (*)(void))sub_C18CC8;
    v155 = sub_C18BAC;
    v32 = *((_DWORD *)v1 + 56);
    if ( v32 == v16 )
      goto LABEL_207;
    do
      if ( !v31 )
        sub_DA7654();
      v155((char ***)&v153, *(ClientInstance **)(v32 + 20));
      v33 = sub_DA7F5C(v32);
      v31 = v154;
      v32 = v33;
    while ( v33 != v16 );
    if ( v154 )
LABEL_207:
      v31();
      (*(void (**)(void))(**((_DWORD **)v1 + 59) + 12))();
    if ( v156 )
      MinecraftGame::onTick(v1);
      v34 = *((_DWORD *)v1 + 55);
      v35 = (int)v1 + 216;
      if ( v34 )
        v36 = (int)v1 + 216;
        do
        {
          v35 = v34;
          while ( *(_BYTE *)(v35 + 16) < (unsigned int)*((_BYTE *)v1 + 544) )
          {
            v35 = *(_DWORD *)(v35 + 12);
            if ( !v35 )
            {
              v35 = v36;
              goto LABEL_48;
            }
          }
          v34 = *(_DWORD *)(v35 + 8);
          v36 = v35;
        }
        while ( v34 );
LABEL_48:
      if ( v35 == v16 )
        goto LABEL_208;
      if ( *((_BYTE *)v1 + 544) < (unsigned int)*(_BYTE *)(v35 + 16) )
        v35 = (int)v1 + 216;
LABEL_208:
        v38 = ClientInstance::getClientSubId(*(ClientInstance **)(*((_DWORD *)v1 + 56) + 20));
      else
        v37 = sub_DA7F5C(v35);
        if ( v37 == v16 )
          v37 = *((_DWORD *)v1 + 56);
        v38 = ClientInstance::getClientSubId(*(ClientInstance **)(v37 + 20));
      *((_BYTE *)v1 + 544) = v38;
    v39 = (ServerInstance *)*((_DWORD *)v1 + 50);
    if ( v39 )
      ServerInstance::mainThreadNetworkUpdate_HACK(v39);
      if ( !*((_BYTE *)v1 + 696) )
        if ( ServerInstance::allowMultiThreading(*((ServerInstance **)v1 + 50)) == 1 )
          MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v151, (int)v1);
          v40 = (Option *)Options::get(v151, 92);
          v41 = Option::getBool(v40);
          v42 = 1;
        else
          v42 = 0;
          v41 = 0;
        MinecraftGame::_enableServerInstanceThread(v1, v41);
        if ( v42 == 1 )
          v43 = v152;
          if ( v152 )
            v44 = (unsigned int *)(v152 + 4);
            if ( &pthread_create )
              __dmb();
              do
                v45 = __ldrex(v44);
              while ( __strex(v45 - 1, v44) );
            else
              v45 = (*v44)--;
            if ( v45 == 1 )
              v48 = (unsigned int *)(v43 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 8))(v43);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v49 = __ldrex(v48);
                while ( __strex(v49 - 1, v48) );
              }
              else
                v49 = (*v48)--;
              if ( v49 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 12))(v43);
      v50 = *((_BYTE *)v1 + 697);
      if ( v50 & 1 )
        v56 = (_QWORD *)RandomThreadCheckManager::mInstance;
        if ( RandomThreadCheckManager::mInstance )
          goto LABEL_209;
        if ( ServiceLocator<AppPlatform>::mDefaultService )
          v56 = operator new(0xCu);
          AppPlatformListener::AppPlatformListener(v56);
          *(_DWORD *)v56 = &off_26D6730;
          *((_DWORD *)v56 + 2) = 0;
          v57 = RandomThreadCheckManager::mInstance;
          RandomThreadCheckManager::mInstance = v56;
          if ( v57 )
            (*(void (**)(void))(*(_DWORD *)v57 + 4))();
            v56 = (_QWORD *)RandomThreadCheckManager::mInstance;
          if ( v56 )
LABEL_209:
            v58 = (unsigned int *)(v56 + 1);
            __dmb();
            do
              v59 = __ldrex(v58);
            while ( __strex(v59 + 1, v58) );
        Semaphore::notify(*((pthread_mutex_t **)v1 + 176));
        v148 = 0.0;
        v150 = 3;
        v147 = unk_27F636C;
        unk_27F636C = &v147;
        _R0 = getTimeS();
        __asm
          VMOV            D0, R0, R1
          VNEG.F64        D1, D0
          VSTR            D1, [SP,#0x140+var_A8]
          VSTR            D1, [SP,#0x140+var_A0]
        _R0 = v147;
        if ( v147 )
          __asm
            VLDR            D1, [R0,#8]
            VADD.F64        D0, D1, D0
            VSTR            D0, [R0,#8]
        ServerInstance::update(*((ServerInstance **)v1 + 50));
        LODWORD(_R0) = getTimeS();
          VMOV            D1, R0, R1
          VLDR            D0, [SP,#0x140+var_A8]
          VADD.F64        D2, D0, D1
          VSTR            D2, [SP,#0x140+var_A8]
          VLDR            D0, [SP,#0x140+var_A0]
          VADD.F64        D0, D0, D1
          VSTR            D0, [SP,#0x140+var_A0]
        HIDWORD(_R0) = v147;
            VLDR            D2, [R1,#8]
            VSUB.F64        D1, D2, D1
            VSTR            D1, [R1,#8]
            VLDR            D2, [SP,#0x140+var_A8]
        __asm { VMOV            R2, R3, D2 }
        LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
        unk_27F636C = v147;
        __asm { VSTR            D0, [SP,#0x140+var_140] }
        ProfilerLite::_endScope(_R0, _R2, _R3, v125);
    v60 = operator new(4u);
    *v60 = v1;
    v61 = (void (*)(void))sub_C18D60;
    v144 = v60;
    v145 = (void (*)(void))sub_C18D60;
    v146 = sub_C18D00;
    v62 = *((_DWORD *)v1 + 56);
    if ( v62 == v16 )
      goto LABEL_210;
      if ( !v61 )
      v146(&v144, *(_DWORD *)(v62 + 20));
      v63 = sub_DA7F5C(v62);
      v61 = v145;
      v62 = v63;
    while ( v63 != v16 );
    if ( v145 )
LABEL_210:
      v61();
    v64 = *((_DWORD *)v1 + 55);
    v65 = (int)v1 + 216;
    if ( v64 )
      v66 = *((_DWORD *)v1 + 55);
        v65 = v66;
        v66 = *(_DWORD *)(v66 + 8);
      while ( v66 );
    v67 = (int)v1 + 216;
    if ( v65 != v16 )
      if ( *(_BYTE *)(v65 + 16) )
        v65 = (int)v1 + 216;
      v67 = v65;
    v68 = *(ClientInstance **)(v67 + 20);
    for ( j = (int)v1 + 216; v64; v64 = *(_DWORD *)(v64 + 8) )
      j = v64;
    v70 = (int)v1 + 216;
    if ( j != v16 )
      if ( *(_BYTE *)(j + 16) )
        j = (int)v1 + 216;
      v70 = j;
    v71 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v70 + 20));
    v72 = (const Timer *)Minecraft::getTimer(v71);
    MinecraftGame::updateGraphics(v1, v68, v72);
    v73 = *((_DWORD *)v1 + 50);
    _ZF = v73 == 0;
    if ( v73 )
      v75 = *((_BYTE *)v1 + 697);
      _ZF = (v75 & 1) == 0;
    if ( !_ZF )
      v141 = 0.0;
      v143 = 3;
      v140 = unk_27F636C;
      unk_27F636C = &v140;
      _R0 = getTimeS();
        VNEG.F64        D1, D0
        VSTR            D1, [SP,#0x140+var_D8]
        VSTR            D1, [SP,#0x140+var_D0]
      _R0 = v140;
      if ( v140 )
          VLDR            D1, [R0,#8]
          VADD.F64        D0, D1, D0
          VSTR            D0, [R0,#8]
      Semaphore::wait(*((pthread_mutex_t **)v1 + 177));
      v78 = (_QWORD *)RandomThreadCheckManager::mInstance;
      if ( RandomThreadCheckManager::mInstance )
        goto LABEL_211;
      if ( ServiceLocator<AppPlatform>::mDefaultService )
        v78 = operator new(0xCu);
        AppPlatformListener::AppPlatformListener(v78);
        *(_DWORD *)v78 = &off_26D6730;
        *((_DWORD *)v78 + 2) = 0;
        v79 = RandomThreadCheckManager::mInstance;
        RandomThreadCheckManager::mInstance = v78;
        if ( v79 )
          (*(void (**)(void))(*(_DWORD *)v79 + 4))();
          v78 = (_QWORD *)RandomThreadCheckManager::mInstance;
        if ( v78 )
LABEL_211:
          v80 = (unsigned int *)(v78 + 1);
          __dmb();
          do
            v81 = __ldrex(v80);
          while ( __strex(v81 + 1, v80) );
      LODWORD(_R0) = getTimeS();
        VMOV            D1, R0, R1
        VLDR            D0, [SP,#0x140+var_D8]
        VADD.F64        D2, D0, D1
        VSTR            D2, [SP,#0x140+var_D8]
        VLDR            D0, [SP,#0x140+var_D0]
        VADD.F64        D0, D0, D1
        VSTR            D0, [SP,#0x140+var_D0]
      HIDWORD(_R0) = v140;
          VLDR            D2, [R1,#8]
          VSUB.F64        D1, D2, D1
          VSTR            D1, [R1,#8]
          VLDR            D2, [SP,#0x140+var_D8]
      __asm { VMOV            R2, R3, D2 }
      LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
      unk_27F636C = v140;
      __asm { VSTR            D0, [SP,#0x140+var_140] }
      ProfilerLite::_endScope(_R0, _R2, _R3, v125);
    *((_BYTE *)v1 + 545) = v156;
    v85 = (int)v1 + 216;
    for ( k = *((_DWORD *)v1 + 55); k; k = *(_DWORD *)(k + 8) )
      v85 = k;
    v87 = (int)v1 + 216;
    if ( v85 != v16 )
      if ( *(_BYTE *)(v85 + 16) )
        v85 = (int)v1 + 216;
      v87 = v85;
    v88 = (HolographicPlatform *)ClientInstance::getHoloInput(*(ClientInstance **)(v87 + 20));
    if ( HolographicPlatform::processHoloUITimeout(v88) == 1 )
      GameRenderer::recenterHoloUI(*((GameRenderer **)v1 + 12));
    v89 = (OculusPlatformMessagePump *)*((_DWORD *)v1 + 72);
    if ( v89 )
      OculusPlatformMessagePump::pumpMessages(v89);
    if ( !*((_BYTE *)v1 + 444) )
      v137 = 0.0;
      v139 = 29;
      v136 = (Scheduler *)unk_27F636C;
      unk_27F636C = &v136;
        VSTR            D1, [SP,#0x140+var_F8]
        VSTR            D1, [SP,#0x140+var_F0]
      _R0 = v136;
      if ( v136 )
      v92 = Scheduler::singleton(v136);
      sub_DA7F0C(&v135);
      Scheduler::processCoroutines(
        (int)v92,
        *((_QWORD *)v1 + 67) >> 32,
        v135 - *((_QWORD *)v1 + 67),
        (*(_QWORD *)&v135 - *((_QWORD *)v1 + 67)) >> 32);
        VLDR            D0, [SP,#0x140+var_F8]
        VSTR            D2, [SP,#0x140+var_F8]
        VLDR            D0, [SP,#0x140+var_F0]
        VSTR            D0, [SP,#0x140+var_F0]
      HIDWORD(_R0) = v136;
          VLDR            D2, [SP,#0x140+var_F8]
      unk_27F636C = v136;
    MinecraftGame::endFrame(v1);
    SceneStack::resetScreenChangeDirtyFlag(*((SceneStack **)v1 + 26));
    v132 = operator new(1u);
    v96 = (void (*)(void))sub_C18DFC;
    v133 = sub_C18DFC;
    v134 = sub_C18DEC;
    v97 = *((_DWORD *)v1 + 56);
    if ( v97 == v16 )
      goto LABEL_212;
      if ( !v96 )
      v134((int)&v132, *(ClientInstance **)(v97 + 20));
      v98 = sub_DA7F5C(v97);
      v96 = (void (*)(void))v133;
      v97 = v98;
    while ( v98 != v16 );
    if ( v133 )
LABEL_212:
      v96();
    Social::UserManager::getPrimaryUser((Social::UserManager *)&v130, *((_DWORD *)v1 + 86));
    *(_QWORD *)&v99 = *(_QWORD *)&v130;
    if ( v131 )
      v101 = (unsigned int *)(v131 + 4);
      if ( &pthread_create )
        __dmb();
          v102 = __ldrex(v101);
        while ( __strex(v102 - 1, v101) );
        v102 = (*v101)--;
      if ( v102 == 1 )
        v103 = (unsigned int *)(v100 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v100 + 8))(v100);
        if ( &pthread_create )
            v104 = __ldrex(v103);
          while ( __strex(v104 - 1, v103) );
          v104 = (*v103)--;
        if ( v104 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v100 + 12))(v100);
    if ( v99 )
      MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v128, (int)v1);
      v105 = (Option *)Options::get(v128, 35);
      _R6 = Option::getInt(v105);
      v107 = v129;
      if ( v129 )
        v108 = (unsigned int *)(v129 + 4);
            v109 = __ldrex(v108);
          while ( __strex(v109 - 1, v108) );
          v109 = (*v108)--;
        if ( v109 == 1 )
          v110 = (unsigned int *)(v107 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v107 + 8))(v107);
          if ( &pthread_create )
              v111 = __ldrex(v110);
            while ( __strex(v111 - 1, v110) );
          else
            v111 = (*v110)--;
          if ( v111 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v107 + 12))(v107);
      if ( _R6 >= 1 )
        sub_DA7F0C(&v127);
        v112 = v165;
        _R0 = _aeabi_l2f(v127 - v165, (unsigned __int64)(*(_QWORD *)&v127 - v165) >> 32);
          VMOV            S0, R6
          VMOV.F64        D1, #1.0
          VCVT.F64.S32    D0, S0
          VDIV.F64        D0, D1, D0
          VCVT.F32.F64    S0, D0
          VLDR            S2, =1.0e9
          VMUL.F32        S0, S0, S2
          VMOV            S2, R0
          VSUB.F32        S16, S0, S2
        _R0 = _aeabi_l2f(v112 - *((_DWORD *)v1 + 134), (unsigned __int64)(v112 - *((_QWORD *)v1 + 67)) >> 32);
          VMOV            S0, R0
          VSUB.F32        S16, S16, S0
          VCMPE.F32       S16, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            VLDR            S0, =1.0e-9
            VMUL.F32        S0, S16, S0
            VMOV            R0, S0
          v116 = _aeabi_f2lz(_R0);
          v117 = v116;
          _R0 = _aeabi_l2f(v116, v118);
            VLDR            S0, =-1.0e9
            VMOV            S2, R0
          requested_time.tv_sec = v117;
            VMUL.F32        S0, S2, S0
            VADD.F32        S0, S16, S0
          requested_time.tv_nsec = _aeabi_f2lz(_R0);
          nanosleep(&requested_time, 0);
    v121 = *((_DWORD *)v1 + 166);
    if ( v121 < 5 )
      *((_DWORD *)v1 + 166) = v121 + 1;
    else if ( !*((_BYTE *)v1 + 668) && (!*v13 || PatchNotesModel::ready(*v13) || PatchNotesModel::failed(*v13) == 1) )
      MinecraftGame::initPost(v1);
    sub_DA7F0C(&v126);
    *((_QWORD *)v1 + 67) = *(_QWORD *)&v126;
    LODWORD(_R0) = getTimeS();
      VMOV            D1, R0, R1
      VLDR            D0, [SP,#0x140+var_68]
      VADD.F64        D2, D0, D1
      VSTR            D2, [SP,#0x140+var_68]
      VLDR            D0, [SP,#0x140+var_60]
      VADD.F64        D0, D0, D1
    HIDWORD(_R0) = v157;
        VLDR            D2, [R1,#8]
        VSUB.F64        D1, D2, D1
        VSTR            D1, [R1,#8]
        VLDR            D2, [SP,#0x140+var_68]
    __asm { VMOV            R2, R3, D2 }
    LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
    unk_27F636C = v157;
    __asm { VSTR            D0, [SP,#0x140+var_140] }
    result = ProfilerLite::_endScope(_R0, _R2, _R3, v125);
  return result;
}


ResourcePackStack *__fastcall MinecraftGame::onVanillaPackDownloadComplete(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  int v2; // r2@1
  int v3; // r0@1
  int i; // r1@1
  int v5; // r0@6
  int v6; // r2@6

  v1 = this;
  ResourcePackRepository::updateVanillaPacks(*((ResourcePackRepository **)this + 78));
  v2 = *((_DWORD *)v1 + 55);
  v3 = (int)v1 + 216;
  for ( i = (int)v1 + 216; v2; v2 = *(_DWORD *)(v2 + 8) )
    i = v2;
  if ( i != v3 && !*(_BYTE *)(i + 16) )
    v3 = i;
  v5 = ClientInstance::getHoloInput(*(ClientInstance **)(v3 + 20));
  v6 = (*(int (**)(void))(*(_DWORD *)v5 + 76))();
  return j_j_j__ZN13MinecraftGame24_buildVanillaClientStackEbb(v1, 1, v6);
}


void __fastcall MinecraftGame::onLanguageSubpacksChanged(MinecraftGame *this)
{
  _DWORD *v1; // r10@1
  MinecraftGame *v2; // r6@1
  int *v3; // r0@1
  int *v4; // r5@1
  __int64 v5; // r0@1
  signed int v6; // r2@1
  int v7; // r5@4
  mce::TextureGroup *v8; // r0@4
  int v9; // r7@5
  _DWORD *v10; // r4@12
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  int *v13; // r0@21
  int *v14; // r4@25
  int *v15; // r6@25
  unsigned int *v16; // r2@27
  signed int v17; // r1@29
  int *v18; // r0@35
  int *v19; // [sp+4h] [bp-34h]@1
  int *v20; // [sp+8h] [bp-30h]@1
  int *v21; // [sp+Ch] [bp-2Ch]@1

  v1 = 0;
  v2 = this;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v3 = Font::getGlyphLocations((Font *)this);
  v4 = v3;
  v5 = *(_QWORD *)v3;
  v6 = HIDWORD(v5) - v5;
  if ( 0 != (HIDWORD(v5) - (signed int)v5) >> 3 )
  {
    if ( (unsigned int)(v6 >> 3) >= 0x20000000 )
      sub_DA7414();
    v1 = operator new(v6);
    v5 = *(_QWORD *)v4;
  }
  v7 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ResourceLocation const*,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>,ResourceLocation*>(
         v5,
         SHIDWORD(v5),
         (int)v1);
  v8 = (mce::TextureGroup *)*((_DWORD *)v2 + 15);
  if ( v1 != (_DWORD *)v7 )
    v9 = (int)v1;
    do
    {
      if ( mce::TextureGroup::isLoaded(v8, (const ResourceLocation *)v9, 0) == 1 )
      {
        if ( v20 == v21 )
        {
          std::vector<ResourceLocation,std::allocator<ResourceLocation>>::_M_emplace_back_aux<ResourceLocation const&>(
            &v19,
            v9);
        }
        else
          sub_DA73B4(v20, (int *)v9)[1] = *(_DWORD *)(v9 + 4);
          v20 += 2;
      }
      v8 = (mce::TextureGroup *)*((_DWORD *)v2 + 15);
      v9 += 8;
    }
    while ( v7 != v9 );
  mce::TextureGroup::loadListAsync((int)v8, 64, (unsigned __int64 *)&v19, 1);
    v10 = v1;
      v13 = (int *)(*v10 - 12);
      if ( v13 != &dword_28898C0 )
        v11 = (unsigned int *)(*v10 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j_j__ZdlPv_9(v13);
      v10 += 2;
    while ( v10 != (_DWORD *)v7 );
  if ( v1 )
    operator delete(v1);
  v15 = v20;
  v14 = v19;
  if ( v19 != v20 )
      v18 = (int *)(*v14 - 12);
      if ( v18 != &dword_28898C0 )
        v16 = (unsigned int *)(*v14 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9(v18);
      v14 += 2;
    while ( v14 != v15 );
    v14 = v19;
  if ( v14 )
    operator delete(v14);
}


void __fastcall MinecraftGame::updateGraphics(MinecraftGame *this, ClientInstance *a2, const Timer *a3)
{
  MinecraftGame::updateGraphics(this, a2, a3);
}


void __fastcall MinecraftGame::handleReloadUIDefinitions(MinecraftGame *this)
{
  MinecraftGame *v1; // r8@1
  int v2; // r6@1
  unsigned int v3; // r5@1
  char *v4; // r0@1
  char *v5; // r0@2
  int v6; // r5@3
  __int64 v7; // r10@4
  int v8; // r7@5
  Font *v9; // r0@8
  Font *v10; // r0@10
  Font *v11; // r0@12
  Font *v12; // r0@14
  PackReport *v13; // r0@16
  PackReport *v14; // r4@16
  unsigned int *v15; // r2@22
  signed int v16; // r1@24
  unsigned int *v17; // r2@26
  signed int v18; // r1@28
  void *v19; // [sp+4h] [bp-54h]@5
  void (__fastcall *v20)(void **, void **, signed int); // [sp+Ch] [bp-4Ch]@5
  char *v21; // [sp+18h] [bp-40h]@1
  char *v22; // [sp+1Ch] [bp-3Ch]@1
  int v23; // [sp+20h] [bp-38h]@1
  void *ptr; // [sp+24h] [bp-34h]@1
  PackReport *v25; // [sp+28h] [bp-30h]@1
  int v26; // [sp+2Ch] [bp-2Ch]@1

  v1 = this;
  ptr = 0;
  v25 = 0;
  v26 = 0;
  v2 = *((_DWORD *)this + 64);
  v3 = *(_DWORD *)(*((_DWORD *)this + 80) + 64);
  sub_DA7364((void **)&v21, "ui/_ui_defs.json");
  v22 = v21;
  v23 = 0;
  v21 = (char *)&unk_28898CC;
  UIDefRepository::loadDefsList(v2, (int)&v22, v3, (int)&ptr);
  v4 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v22 - 4);
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
      j_j_j_j_j__ZdlPv_9(v4);
  }
  v5 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v21 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  ResourcePackManager::mergePackReports(*((_DWORD *)v1 + 80), (unsigned int *)&ptr);
  v6 = *((_DWORD *)v1 + 56);
  if ( (MinecraftGame *)v6 != (MinecraftGame *)((char *)v1 + 216) )
    LODWORD(v7) = sub_C14A78;
    HIDWORD(v7) = sub_C14A68;
    do
      v8 = *(_DWORD *)(v6 + 20);
      v20 = 0;
      v19 = operator new(1u);
      *(_QWORD *)&v20 = v7;
      ClientInstance::forEachScreen(v8, (int)&v19, 1);
      if ( v20 )
        v20(&v19, &v19, 3);
      v6 = sub_DA7F5C(v6);
    while ( (MinecraftGame *)v6 != (MinecraftGame *)((char *)v1 + 216) );
  v9 = (Font *)*((_DWORD *)v1 + 18);
  if ( v9 )
    Font::clearCache(v9);
  v10 = (Font *)*((_DWORD *)v1 + 19);
  if ( v10 )
    Font::clearCache(v10);
  v11 = (Font *)*((_DWORD *)v1 + 20);
  if ( v11 )
    Font::clearCache(v11);
  v12 = (Font *)*((_DWORD *)v1 + 21);
  if ( v12 )
    Font::clearCache(v12);
  v14 = v25;
  v13 = (PackReport *)ptr;
  if ( ptr != (void *)v25 )
      v13 = (PackReport *)((char *)PackReport::~PackReport(v13) + 104);
    while ( v14 != v13 );
    v13 = (PackReport *)ptr;
  if ( v13 )
    operator delete((void *)v13);
}


int __fastcall MinecraftGame::checkForPiracy(MinecraftGame *this)
{
  return OfferRepository::isGameLicensed(*((OfferRepository **)this + 74)) ^ 1;
}


void __fastcall MinecraftGame::setupCommandParser(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  char *v2; // r0@1
  int v3; // r2@1
  char *i; // r1@1
  Minecraft *v5; // r0@6
  ClientCommands *v6; // r0@6
  LevelArchiver *v7; // r5@6
  const ActiveDirectoryIdentity *v8; // [sp+8h] [bp-10h]@0

  v1 = this;
  v2 = (char *)this + 216;
  v3 = *((_DWORD *)v1 + 55);
  for ( i = v2; v3; v3 = *(_DWORD *)(v3 + 8) )
    i = (char *)v3;
  if ( i != v2 && !i[16] )
    v2 = i;
  v7 = (LevelArchiver *)(*((_DWORD *)v1 + 50) != 0);
  v5 = (Minecraft *)ClientInstance::getServerData(*((ClientInstance **)v2 + 5));
  v6 = (ClientCommands *)Minecraft::getCommands(v5);
  ClientCommands::setupStandard(
    v6,
    v1,
    *((MinecraftGame **)v1 + 15),
    *((mce::TextureGroup **)v1 + 93),
    v7,
    *((_DWORD *)v1 + 102),
    v8);
}


int __fastcall MinecraftGame::setTransferCallback(int a1, int a2)
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
  v9 = v4 + 680;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 680);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 688);
  v10 = v13;
  *(_DWORD *)(v4 + 688) = v8;
  v14 = *(_DWORD *)(v4 + 692);
  *(_DWORD *)(v4 + 692) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


unsigned int __fastcall MinecraftGame::isPrimaryUserSigninInProgress(MinecraftGame *this)
{
  Social::XboxLiveUserManager *v1; // r0@1
  unsigned int v2; // r4@1
  int v3; // r5@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r6@8
  unsigned int v7; // r0@10
  Social::User *v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  Social::UserManager::getPrimaryUser((Social::UserManager *)&v9, *((_DWORD *)this + 86));
  v1 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v9);
  v2 = Social::XboxLiveUserManager::signinInProgress(v1);
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


void __fastcall MinecraftGame::muteAudio(MinecraftGame *this)
{
  MinecraftGame::muteAudio(this);
}


int __fastcall MinecraftGame::onNetworkMaxPlayersChanged(MinecraftGame *this, unsigned int a2)
{
  MinecraftGame *v2; // r4@1
  int v3; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  result = *((_DWORD *)this + 50);
  if ( result )
  {
    result = Minecraft::getLevel(*(Minecraft **)(result + 8));
    if ( result )
    {
      Social::MultiplayerServiceManager::setGameHostInfo(
        *((Social::MultiplayerServiceManager **)v2 + 87),
        (Level *)result,
        v3);
      result = j_j_j__ZN6Social25MultiplayerServiceManager13advertiseGameEv(*((Social::MultiplayerServiceManager **)v2
                                                                            + 87));
    }
  }
  return result;
}


signed int __fastcall MinecraftGame::isSRPlacementMode(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1
  int v4; // r1@6
  signed int result; // r0@6

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  v4 = *(_DWORD *)ClientInstance::getClientPlayMode(*((ClientInstance **)v2 + 5));
  result = 0;
  if ( v4 == 5 )
    result = 1;
  return result;
}


int __fastcall MinecraftGame::onAppResumed(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  int v2; // r1@1
  int v3; // r6@1
  int i; // r0@1
  int v5; // r1@3
  Minecraft *v6; // r0@7
  Level *v7; // r0@7
  Level *v8; // r5@7
  int v9; // r0@9
  mce::RenderMaterial *v10; // r0@10
  int v11; // r1@10
  int j; // r0@10
  int v13; // r0@15
  int v14; // r0@15
  mce::RenderContext *v15; // r0@15
  int v16; // r0@15
  bool v17; // zf@15
  int v18; // r0@19
  int v19; // r0@19
  NetworkHandler *v20; // r0@20
  int v21; // r0@20
  int result; // r0@21

  v1 = this;
  MinecraftEventing::fireEventAppResumed(*((MinecraftEventing **)this + 126));
  mce::TextureGroup::mCanLoadTextures = 0;
  Social::UserManager::onAppResumed(*((Social::UserManager **)v1 + 86));
  v2 = *((_DWORD *)v1 + 55);
  v3 = (int)v1 + 216;
  for ( i = (int)v1 + 216; v2; v2 = *(_DWORD *)(v2 + 8) )
    i = v2;
  v5 = (int)v1 + 216;
  if ( i != v3 )
  {
    if ( *(_BYTE *)(i + 16) )
      i = (int)v1 + 216;
    v5 = i;
  }
  v6 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v5 + 20));
  v7 = (Level *)Minecraft::getLevel(v6);
  v8 = v7;
  if ( v7 && Level::hasLevelStorage(v7) == 1 )
    v9 = Level::getLevelStorage(v8);
    (*(void (**)(void))(*(_DWORD *)v9 + 104))();
  v10 = (mce::RenderMaterial *)(*(int (__fastcall **)(MinecraftGame *))(*(_DWORD *)v1 + 52))(v1);
  mce::RenderMaterial::initContext(v10);
  v11 = *((_DWORD *)v1 + 55);
  for ( j = (int)v1 + 216; v11; v11 = *(_DWORD *)(v11 + 8) )
    j = v11;
  if ( j != v3 && !*(_BYTE *)(j + 16) )
    v3 = j;
  v13 = ClientInstance::getHoloInput(*(ClientInstance **)(v3 + 20));
  (*(void (**)(void))(*(_DWORD *)v13 + 32))();
  v14 = *((_DWORD *)v1 + 12);
  *(_BYTE *)(v14 + 813) = 1;
  *(_BYTE *)(v14 + 814) = 0;
  v15 = (mce::RenderContext *)mce::RenderContextImmediate::get((mce::RenderContextImmediate *)v14);
  mce::RenderContext::clearContextState(v15);
  GameRenderer::createRenderGraph(*((GameRenderer **)v1 + 12), 1);
  mce::TextureGroup::reloadAll(*((mce::TextureGroup **)v1 + 15));
  mce::TextureGroup::reloadAll(*((mce::TextureGroup **)v1 + 16));
  v16 = *((_DWORD *)v1 + 95);
  v17 = v16 == 0;
  if ( v16 )
    v17 = *((_DWORD *)v1 + 97) == 0;
  if ( !v17 )
    (*(void (**)(void))(*(_DWORD *)v16 + 24))();
    (*(void (**)(void))(**((_DWORD **)v1 + 97) + 24))();
  *((_BYTE *)v1 + 444) = 0;
  OfferRepository::isGameLicensed(*((OfferRepository **)v1 + 74));
  v18 = NetworkHandler::getConnector(*((NetworkHandler **)v1 + 84));
  (*(void (**)(void))(*(_DWORD *)v18 + 8))();
  v19 = *((_DWORD *)v1 + 50);
  if ( v19 )
    v20 = (NetworkHandler *)Minecraft::getNetworkHandler(*(Minecraft **)(v19 + 8));
    v21 = NetworkHandler::getConnector(v20);
    (*(void (**)(void))(*(_DWORD *)v21 + 8))();
  result = 0;
  *((_BYTE *)v1 + 696) = 0;
  return result;
}


int __fastcall MinecraftGame::_runServerInstanceThread(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  void *v2; // r0@1
  int result; // r0@4
  char v4; // r0@5
  ServerInstance *v5; // r0@6
  unsigned int *v6; // r12@10
  signed int v7; // r1@12
  pthread_t v8; // [sp+4h] [bp-24h]@2
  int v9; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  sub_DA7364((void **)&v9, "ServerInstance");
  SET_THREAD_NAME();
  v2 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v9 - 4);
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
  v8 = pthread_self();
  ASSIGN_SERVER_THREAD((int *)&v8);
  while ( 1 )
    result = *((_BYTE *)v1 + 697);
    __dmb();
    if ( !(result & 1) )
      break;
    Semaphore::wait(*((pthread_mutex_t **)v1 + 176));
    v4 = *((_BYTE *)v1 + 697);
    if ( v4 & 1 )
      v5 = (ServerInstance *)*((_DWORD *)v1 + 50);
      if ( v5 )
        ServerInstance::update(v5);
    Semaphore::notify(*((pthread_mutex_t **)v1 + 177));
  return result;
}


int __fastcall MinecraftGame::setTextboxText(int a1)
{
  int v1; // r2@1
  int v2; // r0@1
  int i; // r1@1
  int v4; // r0@6

  v1 = *(_DWORD *)(a1 + 220);
  v2 = a1 + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = v1;
  if ( i != v2 && !*(_BYTE *)(i + 16) )
    v2 = i;
  v4 = ClientInstance::getScreen(*(ClientInstance **)(v2 + 20));
  return (*(int (**)(void))(*(_DWORD *)v4 + 124))();
}


void __fastcall MinecraftGame::handleResourcePackConfirmation(int a1, int (**a2)(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg), int a3)
{
  MinecraftGame::handleResourcePackConfirmation(a1, a2, a3);
}


void __fastcall MinecraftGame::onTick(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  ActiveDirectoryIdentity *v2; // r0@1
  SkinRepository *v3; // r0@6
  int v4; // r2@11
  int v5; // r0@11
  int i; // r1@11
  Minecraft *v7; // r0@16
  int v8; // r1@16
  Social::UserManager *v9; // r5@19
  int v10; // r0@19
  bool v11; // r1@19
  void *v12; // r0@21
  Social::XboxLiveUserManager *v13; // r0@22
  int v14; // r5@22
  int v15; // r6@22
  unsigned int *v16; // r1@23
  unsigned int v17; // r0@25
  unsigned int *v18; // r7@29
  unsigned int v19; // r0@31
  Social::User *v20; // r5@42
  _DWORD *v21; // r0@42
  __int64 v22; // r1@42
  int v23; // r5@45
  unsigned int *v24; // r1@46
  unsigned int v25; // r0@48
  unsigned int *v26; // r6@52
  unsigned int v27; // r0@54
  int v28; // r1@59
  void *v29; // r0@60
  void *v30; // r0@62
  unsigned int *v31; // r2@64
  signed int v32; // r1@66
  unsigned int *v33; // r2@68
  signed int v34; // r1@70
  unsigned int *v35; // r2@72
  signed int v36; // r1@74
  int v37; // [sp+4h] [bp-54h]@60
  int v38; // [sp+8h] [bp-50h]@59
  _DWORD *v39; // [sp+Ch] [bp-4Ch]@42
  __int64 v40; // [sp+14h] [bp-44h]@42
  char v41; // [sp+1Ch] [bp-3Ch]@42
  Social::User *v42; // [sp+24h] [bp-34h]@39
  int v43; // [sp+28h] [bp-30h]@45
  Social::User *v44; // [sp+2Ch] [bp-2Ch]@22
  int v45; // [sp+30h] [bp-28h]@22
  int v46; // [sp+34h] [bp-24h]@19
  int v47; // [sp+38h] [bp-20h]@18
  int v48; // [sp+3Ch] [bp-1Ch]@18

  v1 = this;
  v2 = (ActiveDirectoryIdentity *)*((_DWORD *)this + 102);
  if ( v2 )
    ActiveDirectoryIdentity::tick(v2);
  if ( *((_BYTE *)v1 + 668) )
  {
    Automation::AutomationClient::tick(*((Automation::AutomationClient **)v1 + 104));
    ThirdPartyServerRepository::update(*((ThirdPartyServerRepository **)v1 + 77));
    EntitlementManager::tick(*((EntitlementManager **)v1 + 91));
    (*(void (**)(void))(**((_DWORD **)v1 + 90) + 8))();
    OfferRepository::update(*((OfferRepository **)v1 + 74));
    (*(void (**)(void))(**((_DWORD **)v1 + 75) + 8))();
    if ( StoreCatalogRepository::update(*((StoreCatalogRepository **)v1 + 76)) == 1 )
      MinecraftGame::onGameEventNotification((int)v1, 14);
    DownloadMonitor::update(*((DownloadMonitor **)v1 + 73));
    v3 = (SkinRepository *)*((_DWORD *)v1 + 25);
    if ( v3 )
      SkinRepository::update(v3);
  }
  MinecraftEventing::tick(*((MinecraftEventing **)v1 + 126));
  if ( Social::MultiplayerServiceManager::needToHandleInvite(*((_QWORD **)v1 + 87), 0) == 1 )
    MinecraftGame::handleInvite(v1);
  if ( !*((_BYTE *)v1 + 444) )
    v4 = *((_DWORD *)v1 + 55);
    v5 = (int)v1 + 216;
    for ( i = (int)v1 + 216; v4; v4 = *(_DWORD *)(v4 + 8) )
      i = v4;
    if ( i != v5 && !*(_BYTE *)(i + 16) )
      v5 = i;
    v7 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v5 + 20));
    v8 = Minecraft::getLevel(v7) != 0;
    Social::MultiplayerServiceManager::tick(*((Social::MultiplayerServiceManager **)v1 + 87), v8);
  (*(void (**)(void))(**((_DWORD **)v1 + 86) + 20))();
  if ( (*(int (**)(void))(**((_DWORD **)v1 + 86) + 96))() == 1 )
    MinecraftInputHandler::changeControllerId(*((MinecraftInputHandler **)v1 + 63), v48, v47);
  v9 = (Social::UserManager *)*((_DWORD *)v1 + 86);
  MinecraftGame::getScreenName((MinecraftGame *)&v46, (int)v1);
  v10 = sub_DA7374((const void **)&v46, "start_screen");
  v11 = 0;
  if ( !v10 )
    v11 = 1;
  Social::UserManager::updateMapping(v9, v11);
  v12 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v46 - 4);
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
      j_j_j_j_j__ZdlPv_9(v12);
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v44, *((_DWORD *)v1 + 86));
  v13 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v44);
  v14 = Social::XboxLiveUserManager::isSignedIn(v13);
  v15 = v45;
  if ( v45 )
    v16 = (unsigned int *)(v45 + 4);
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
  if ( v14 == 1 )
    RealmsAPI::update(*((RealmsAPI **)v1 + 99));
    Social::UserManager::getPrimaryUser((Social::UserManager *)&v42, *((_DWORD *)v1 + 86));
    if ( v42 && Social::User::needsPlatformReconnect(v42) == 1 && Social::User::getPlatformConnectionState(v42) != 2 )
      v20 = v42;
      v21 = operator new(4u);
      LODWORD(v22) = sub_C19BBC;
      *v21 = v1;
      HIDWORD(v22) = sub_C19BB2;
      v39 = v21;
      v40 = v22;
      Social::User::connectAsync((int)&v41, (int)v20, (int)&v39);
      if ( (_DWORD)v40 )
        ((void (*)(void))v40)();
      CallbackToken::release((CallbackToken *)&v41);
      CallbackToken::~CallbackToken((CallbackToken *)&v41);
    (*(void (**)(void))(**((_DWORD **)v1 + 100) + 8))();
    LevelLoader::checkForPendingLevelImport(*((LevelLoader **)v1 + 128));
    LevelLoader::checkForPendingLevelLoad(*((LevelLoader **)v1 + 128));
    v23 = v43;
    if ( v43 )
      v24 = (unsigned int *)(v43 + 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        v26 = (unsigned int *)(v23 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
        if ( &pthread_create )
        {
          __dmb();
          do
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
        }
        else
          v27 = (*v26)--;
        if ( v27 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
  JavaUtil::getXblInviteJson((JavaUtil *)&v38);
  v28 = v38;
  if ( *(_DWORD *)(v38 - 12) )
    sub_DA7364((void **)&v37, (const char *)&unk_257BC67);
    JavaUtil::setXblInviteJson(&v37);
    v29 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v37 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j_j__ZdlPv_9(v29);
    Social::MultiplayerServiceManager::setInviteHandle(*((unsigned __int64 **)v1 + 87), (int)&v38, 1, 0);
    v28 = v38;
  v30 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v28 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9(v30);
}


int __fastcall MinecraftGame::screenHandlesGamepadMenuButton(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  SceneStack *v2; // r0@1
  int result; // r0@3
  int v4; // r2@4
  int v5; // r0@4
  int i; // r1@4
  int v7; // r0@9

  v1 = this;
  v2 = (SceneStack *)*((_DWORD *)this + 26);
  if ( v2 && !SceneStack::isEmpty(v2) )
  {
    v4 = *((_DWORD *)v1 + 55);
    v5 = (int)v1 + 216;
    for ( i = (int)v1 + 216; v4; v4 = *(_DWORD *)(v4 + 8) )
      i = v4;
    if ( i != v5 && !*(_BYTE *)(i + 16) )
      v5 = i;
    v7 = ClientInstance::getScreen(*(ClientInstance **)(v5 + 20));
    result = (*(int (**)(void))(*(_DWORD *)v7 + 204))();
  }
  else
    result = 0;
  return result;
}


void __fastcall MinecraftGame::onUserSignout(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  Social::XboxLiveUserManager *v2; // r0@1
  int v3; // r5@1
  int v4; // r6@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r7@8
  unsigned int v8; // r0@10
  int v9; // r5@16
  int v10; // r0@16
  void *v11; // r0@16
  int v12; // r5@17
  unsigned int *v13; // r1@18
  unsigned int v14; // r0@20
  unsigned int *v15; // r6@24
  unsigned int v16; // r0@26
  int v17; // r5@31
  unsigned int *v18; // r1@32
  unsigned int v19; // r0@34
  unsigned int *v20; // r6@38
  unsigned int v21; // r0@40
  MinecraftEventing *v22; // r5@45
  const Social::XboxLiveUserManager *v23; // r0@45
  int v24; // r5@45
  unsigned int *v25; // r1@46
  unsigned int v26; // r0@48
  unsigned int *v27; // r6@52
  unsigned int v28; // r0@54
  Option *v29; // r5@59
  int v30; // r5@61
  unsigned int *v31; // r1@62
  unsigned int v32; // r0@64
  unsigned int *v33; // r6@68
  unsigned int v34; // r0@70
  int v35; // r5@75
  unsigned int *v36; // r1@76
  unsigned int v37; // r0@78
  unsigned int *v38; // r6@82
  unsigned int v39; // r0@84
  unsigned int *v40; // r2@90
  signed int v41; // r1@92
  Options *v42; // [sp+4h] [bp-4Ch]@75
  int v43; // [sp+8h] [bp-48h]@75
  int v44; // [sp+Ch] [bp-44h]@59
  int v45; // [sp+10h] [bp-40h]@61
  Social::User *v46; // [sp+14h] [bp-3Ch]@45
  int v47; // [sp+18h] [bp-38h]@45
  Social::User *v48; // [sp+1Ch] [bp-34h]@16
  int v49; // [sp+20h] [bp-30h]@17
  int v50; // [sp+24h] [bp-2Ch]@16
  int v51; // [sp+28h] [bp-28h]@16
  int v52; // [sp+2Ch] [bp-24h]@31
  Social::User *v53; // [sp+30h] [bp-20h]@1
  int v54; // [sp+34h] [bp-1Ch]@1

  v1 = this;
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v53, *((_DWORD *)this + 86));
  v2 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v53);
  v3 = Social::XboxLiveUserManager::isSignedIn(v2);
  v4 = v54;
  if ( v54 )
  {
    v5 = (unsigned int *)(v54 + 4);
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
  if ( !v3 )
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v51, (int)v1);
    v9 = v51;
    Social::UserManager::getPrimaryUser((Social::UserManager *)&v48, *((_DWORD *)v1 + 86));
    v10 = Social::User::getLiveUser(v48);
    Social::XboxLiveUserManager::getCurrentGamertag((Social::XboxLiveUserManager *)&v50, v10);
    Options::setOverrideUsername(v9, &v50);
    v11 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v50 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j_j__ZdlPv_9(v11);
    v12 = v49;
    if ( v49 )
      v13 = (unsigned int *)(v49 + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        v15 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
    v17 = v52;
    if ( v52 )
      v18 = (unsigned int *)(v52 + 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        v20 = (unsigned int *)(v17 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  SceneStack::onGameEventNotification(*((_QWORD **)v1 + 26));
  v22 = (MinecraftEventing *)*((_DWORD *)v1 + 126);
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v46, *((_DWORD *)v1 + 86));
  v23 = (const Social::XboxLiveUserManager *)Social::User::getLiveUser(v46);
  MinecraftEventing::fireEventSignOutOfXboxLive(v22, v23);
  v24 = v47;
  if ( v47 )
    v25 = (unsigned int *)(v47 + 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      v27 = (unsigned int *)(v24 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
  TreatmentService::clearCurrentTreatments(*((TreatmentService **)v1 + 90));
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v44, (int)v1);
  v29 = (Option *)Options::get(v44, 141);
  if ( !Option::hasOverrideSource(v29) )
    StringOption::set((int)v29, &Util::EMPTY_STRING);
  v30 = v45;
  if ( v45 )
    v31 = (unsigned int *)(v45 + 4);
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
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v42, (int)v1);
  Options::save(v42, 0);
  v35 = v43;
  if ( v43 )
    v36 = (unsigned int *)(v43 + 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 == 1 )
      v38 = (unsigned int *)(v35 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
  MinecraftGame::_refreshEntitlements(v1);
}


int __fastcall MinecraftGame::isInGame(MinecraftGame *this)
{
  char v1; // r0@1

  v1 = *((_BYTE *)this + 656);
  __dmb();
  return v1 & 1;
}


void __fastcall MinecraftGame::_onActiveResourcePacksChanged(int this, int a2, int a3, int a4, char a5, int a6, int a7, int a8, char a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  MinecraftGame::_onActiveResourcePacksChanged((MinecraftGame *)this, (ResourcePackManager *)a2, a3);
}


signed int __fastcall MinecraftGame::validateLocalLevel(int a1)
{
  int v1; // r7@1
  int v2; // r2@1
  int v3; // r0@1
  int i; // r1@1
  int v5; // r0@6
  int v6; // ST00_4@6

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 220);
  v3 = a1 + 216;
  for ( i = v3; v2; v2 = *(_DWORD *)(v2 + 8) )
    i = v2;
  if ( i != v3 && !*(_BYTE *)(i + 16) )
    v3 = i;
  v5 = ClientInstance::getServerData(*(ClientInstance **)(v3 + 20));
  v6 = *(_DWORD *)(v1 + 520);
  return Minecraft::validateLevel(v5);
}


int __fastcall MinecraftGame::setInhibitInputDueToTextBoxMode(int result)
{
  *(_BYTE *)(result + 113) = 1;
  return result;
}


RakNet *__fastcall MinecraftGame::_deserializeGlobalResourcePacks(MinecraftGame *this, int a2)
{
  MinecraftGame *v2; // r4@1
  int v3; // r5@1
  void *v4; // r0@1
  unsigned __int64 v5; // r2@2
  RakNet *result; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  RakNet *v9; // [sp+0h] [bp-10F8h]@1
  int v10; // [sp+4h] [bp-10F4h]@1
  int v11; // [sp+8h] [bp-10F0h]@1
  int v12; // [sp+Ch] [bp-10ECh]@1
  void **v13; // [sp+14h] [bp-10E4h]@1
  int v14; // [sp+18h] [bp-10E0h]@2
  void **v15; // [sp+1Ch] [bp-10DCh]@2
  int v16; // [sp+20h] [bp-10D8h]@2
  void **v17; // [sp+1050h] [bp-A8h]@2

  v2 = this;
  v3 = a2;
  v9 = _stack_chk_guard;
  MinecraftGame::getGlobalResourcePacksPath((MinecraftGame *)&v10);
  v11 = v10;
  v12 = *(_DWORD *)(v10 - 12);
  Core::FileStream::FileStream((int)&v13, (__int64 *)&v11, 24);
  v4 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v10 - 4);
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
  ResourcePackStack::deserialize(v2, (char *)&v13, *(ResourcePackRepository **)(v3 + 312));
  v13 = &off_26D66C4;
  v17 = &off_26D66EC;
  v15 = &off_26D66D8;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v16, (int)&off_26D66EC, v5);
  v13 = &off_26D670C;
  v17 = &off_26D6720;
  v14 = 0;
  sub_DA76E4(&v17);
  result = (RakNet *)(_stack_chk_guard - v9);
  if ( _stack_chk_guard != v9 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall MinecraftGame::setupRenderer(MinecraftGame *this, HolographicPlatform *a2)
{
  MinecraftGame *v2; // r9@1
  HolographicPlatform *v3; // r10@1
  mce::GlobalConstantBufferManager *v4; // r5@1
  mce::GlobalConstantBufferManager *v5; // r0@1
  mce::GlobalConstantBufferManager *v6; // r0@2
  mce::GlobalConstantBuffers *v7; // r8@3
  mce::ConstantBufferMetaDataManager *v8; // r6@4
  mce::ConstantBufferMetaDataManager *v9; // r0@4
  mce::ConstantBufferMetaDataManager *v10; // r0@5
  mce::GlobalConstantBuffers *v11; // r9@6
  void *v12; // r0@7
  int v13; // r7@9
  void (__fastcall *v14)(int *, int, int *); // r11@9
  void *v15; // r0@10
  int v16; // r4@12
  void (__fastcall *v17)(int *, int, int *); // r8@12
  void *v18; // r0@12
  void *v19; // r0@13
  void *v20; // r0@14
  mce::RenderDevice *v21; // r6@16
  mce::RenderDevice *v22; // r0@16
  mce::DeviceInformationBase *v23; // r0@17
  void *v24; // r0@19
  int v25; // r0@21
  bool v26; // r1@21
  mce::RenderDevice *v27; // r4@23
  mce::RenderContext *v28; // r0@23
  mce::DeviceInformation *v29; // r0@23
  void *v30; // r0@24
  void *v31; // r0@28
  _QWORD *v32; // r6@30
  int v33; // r0@30
  void *v34; // r0@32
  mce::RenderContext *v35; // r0@33
  char v36; // r0@33
  char v37; // r0@33
  int v38; // r0@33
  unsigned int *v39; // r2@34
  signed int v40; // r1@36
  unsigned int *v41; // r2@42
  signed int v42; // r1@44
  unsigned int *v43; // r2@46
  signed int v44; // r1@48
  unsigned int *v45; // r2@50
  signed int v46; // r1@52
  MinecraftGame *v47; // [sp+0h] [bp-40h]@6
  int v48; // [sp+4h] [bp-3Ch]@30
  int v49; // [sp+Ch] [bp-34h]@12
  int v50; // [sp+10h] [bp-30h]@12
  int v51; // [sp+14h] [bp-2Ch]@12

  v2 = this;
  v3 = a2;
  v4 = (mce::GlobalConstantBufferManager *)operator new(0x10u);
  mce::GlobalConstantBufferManager::GlobalConstantBufferManager(v4);
  v5 = (mce::GlobalConstantBufferManager *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  mce::Singleton<mce::GlobalConstantBufferManager>::mInstance = v4;
  if ( v5 )
  {
    v6 = mce::GlobalConstantBufferManager::~GlobalConstantBufferManager(v5);
    operator delete((void *)v6);
    v4 = (mce::GlobalConstantBufferManager *)mce::Singleton<mce::GlobalConstantBufferManager>::mInstance;
  }
  v7 = j__ZN3mce9SingletonINS_21GlobalConstantBuffersEE14createInstanceIJEEERS1_DpOT_();
  if ( !mce::Singleton<mce::ConstantBufferMetaDataManager>::mInstance )
    v8 = (mce::ConstantBufferMetaDataManager *)operator new(0x24u);
    mce::ConstantBufferMetaDataManager::ConstantBufferMetaDataManager(v8);
    v9 = (mce::ConstantBufferMetaDataManager *)mce::Singleton<mce::ConstantBufferMetaDataManager>::mInstance;
    mce::Singleton<mce::ConstantBufferMetaDataManager>::mInstance = v8;
    if ( v9 )
    {
      v10 = mce::ConstantBufferMetaDataManager::~ConstantBufferMetaDataManager(v9);
      operator delete((void *)v10);
      v8 = (mce::ConstantBufferMetaDataManager *)mce::Singleton<mce::ConstantBufferMetaDataManager>::mInstance;
    }
    v47 = v2;
    v11 = v7;
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v12 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v12 = &ServiceLocator<AppPlatform>::mDefaultService;
    v13 = *(_DWORD *)v12;
    v14 = *(void (__fastcall **)(int *, int, int *))(**(_DWORD **)v12 + 376);
      v15 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v15 = &ServiceLocator<AppPlatform>::mDefaultService;
    v16 = *(_DWORD *)v15;
    v17 = *(void (__fastcall **)(int *, int, int *))(**(_DWORD **)v15 + 372);
    sub_DA7364((void **)&v49, "uniforms.json");
    v17(&v50, v16, &v49);
    v14(&v51, v13, &v50);
    mce::ConstantBufferMetaDataManager::loadJsonFile(v8, v4, &v51);
    v7 = v11;
    v2 = v47;
    v18 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v51 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
      }
      else
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j_j__ZdlPv_9(v18);
    v19 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v50 - 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j_j__ZdlPv_9(v19);
    v20 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v49 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j_j__ZdlPv_9(v20);
  if ( !mce::Singleton<mce::RenderDevice>::mInstance )
    v21 = (mce::RenderDevice *)operator new(0x88u);
    mce::RenderDevice::RenderDevice(v21);
    v22 = mce::Singleton<mce::RenderDevice>::mInstance;
    mce::Singleton<mce::RenderDevice>::mInstance = v21;
    if ( v22 )
      v23 = mce::RenderDevice::~RenderDevice(v22);
      operator delete((void *)v23);
      v21 = mce::Singleton<mce::RenderDevice>::mInstance;
      v24 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v24 = &ServiceLocator<AppPlatform>::mDefaultService;
    v25 = (*(int (**)(void))(**(_DWORD **)v24 + 448))();
    v26 = 0;
    if ( v25 == 3 )
      v26 = 1;
    mce::RenderDeviceBase::setIsWindowsMR(v21, v26);
    v27 = mce::Singleton<mce::RenderDevice>::mInstance;
    v28 = (mce::RenderContext *)mce::RenderContextImmediate::get((mce::RenderContextImmediate *)&mce::Singleton<mce::RenderDevice>::mInstance);
    mce::RenderDevice::createDevice(v27, v28);
    v29 = (mce::DeviceInformation *)mce::RenderDeviceBase::getDeviceInformation(mce::Singleton<mce::RenderDevice>::mInstance);
    mce::DeviceInformation::findChipsetInfo(v29);
      v30 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v30 = &ServiceLocator<AppPlatform>::mDefaultService;
    (*(void (**)(void))(**(_DWORD **)v30 + 548))();
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v31 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v31 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v31 + 288))(&v48);
  v32 = operator new(0x38u);
  mce::ShaderGroup::ShaderGroup(v32, &v48);
  v33 = *((_DWORD *)v2 + 10);
  *((_DWORD *)v2 + 10) = v32;
  if ( v33 )
    (*(void (**)(void))(*(_DWORD *)v33 + 4))();
  v34 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v48 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9(v34);
  v35 = (mce::RenderContext *)mce::RenderContextImmediate::get((mce::RenderContextImmediate *)v34);
  mce::GlobalConstantBufferManager::allocateAndSetupConstantBuffersFromMetadata(v4, v35);
  v36 = (*(int (__fastcall **)(HolographicPlatform *))(*(_DWORD *)v3 + 44))(v3);
  mce::GlobalConstantBufferManager::setHolographic(v4, v36);
  v37 = (*(int (__fastcall **)(HolographicPlatform *))(*(_DWORD *)v3 + 68))(v3);
  mce::GlobalConstantBufferManager::setStereoEnabled(v4, v37 ^ 1);
  v38 = (*(int (__fastcall **)(HolographicPlatform *))(*(_DWORD *)v3 + 68))(v3);
  mce::GlobalConstantBuffers::init(v7, v38);
}


signed int __fastcall MinecraftGame::_reloadFancy(MinecraftGame *this, int a2, mce::ShaderGroup *a3, mce::RenderMaterialGroup *a4, int a5)
{
  MinecraftGame *v5; // r6@1
  mce::RenderMaterialGroup *v6; // r5@1
  mce::ShaderGroup *v7; // r4@1
  const char *v8; // r7@2
  int v9; // r2@3
  char *v10; // r0@3
  int i; // r1@3
  int v12; // r0@8
  signed int v13; // r4@10
  char *v14; // r0@10
  char *v15; // r0@11
  unsigned int *v17; // r2@13
  signed int v18; // r1@15
  unsigned int *v19; // r2@17
  signed int v20; // r1@19
  char *v21; // [sp+Ch] [bp-24h]@10
  char *v22; // [sp+10h] [bp-20h]@10
  int v23; // [sp+14h] [bp-1Ch]@10

  v5 = this;
  v6 = a4;
  v7 = a3;
  RopeSystem::sEnabled[0] = a2;
  if ( a2 )
  {
    v8 = "materials/fancy.json";
  }
  else
    v9 = *((_DWORD *)this + 55);
    v10 = (char *)this + 216;
    for ( i = (int)v5 + 216; v9; v9 = *(_DWORD *)(v9 + 8) )
      i = v9;
    if ( (char *)i != v10 && !*(_BYTE *)(i + 16) )
      v10 = (char *)i;
    v12 = ClientInstance::getHoloInput(*((ClientInstance **)v10 + 5));
    if ( !(*(int (**)(void))(*(_DWORD *)v12 + 44))() )
      v8 = "materials/sad.json";
  mce::RenderMaterialGroup::setTextureGroup(
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    *((mce::TextureGroup **)v5 + 15));
  sub_DA7364((void **)&v21, v8);
  v22 = v21;
  v21 = (char *)&unk_28898CC;
  v23 = 0;
  v13 = mce::RenderMaterialGroup::loadList(
          v6,
          v7,
          (const ResourceLocation *)&v22,
          *((ResourcePackManager **)v5 + 80),
          *((ResourceLoadManager **)v5 + 165),
          a5);
  v14 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v22 - 4);
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
      j_j_j_j_j__ZdlPv_9(v14);
  v15 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v21 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  return v13;
}


_BOOL4 __fastcall MinecraftGame::primaryLevelExists(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  return ClientInstance::getLevel(*((ClientInstance **)v2 + 5)) != 0;
}


Social::MultiplayerServiceManager *__fastcall MinecraftGame::onClientLevelExit(MinecraftGame *this, ClientInstance *a2, unsigned int a3)
{
  MinecraftGame *v3; // r5@1
  unsigned int v4; // r8@1
  ClientInstance *v5; // r6@1
  __int64 v6; // kr00_8@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r0@5
  unsigned int *v9; // r7@9
  unsigned int v10; // r0@11
  Social::MultiplayerServiceManager *v11; // r7@17
  int v12; // r6@17
  unsigned int *v13; // r1@18
  unsigned int v14; // r0@20
  unsigned int *v15; // r4@24
  unsigned int v16; // r0@26
  _DWORD *v17; // r0@31
  void (__cdecl *v18)(_DWORD); // r3@31
  int v19; // r6@31
  int v20; // r0@34
  Social::MultiplayerServiceManager *result; // r0@39
  int v22; // r0@42
  _DWORD *v23; // [sp+0h] [bp-40h]@31
  int (__fastcall *v24)(void **, _DWORD **, int); // [sp+8h] [bp-38h]@31
  void (__fastcall *v25)(_DWORD, _DWORD); // [sp+Ch] [bp-34h]@31
  unsigned __int8 v26; // [sp+13h] [bp-2Dh]@31
  Social::User *v27; // [sp+14h] [bp-2Ch]@17
  int v28; // [sp+18h] [bp-28h]@17
  char v29; // [sp+1Ch] [bp-24h]@2
  int v30; // [sp+20h] [bp-20h]@2

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( *((_DWORD *)this + 87) )
  {
    ClientInstance::getUser((ClientInstance *)&v29, (int)a2);
    v6 = *(_QWORD *)&v29;
    if ( v30 )
    {
      v7 = (unsigned int *)(v30 + 4);
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
        v9 = (unsigned int *)(HIDWORD(v6) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v6) + 8))(HIDWORD(v6));
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
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v6) + 12))(HIDWORD(v6));
    }
    if ( (_DWORD)v6 )
      v11 = (Social::MultiplayerServiceManager *)*((_DWORD *)v3 + 87);
      ClientInstance::getUser((ClientInstance *)&v27, (int)v5);
      Social::MultiplayerServiceManager::onExitLevel(v11, v27);
      v12 = v28;
      if ( v28 )
        v13 = (unsigned int *)(v28 + 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 == 1 )
          v15 = (unsigned int *)(v12 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  }
  v26 = 1;
  v17 = operator new(4u);
  *v17 = &v26;
  v18 = (void (__cdecl *)(_DWORD))sub_C19CA8;
  v23 = v17;
  v24 = sub_C19CA8;
  v25 = (void (__fastcall *)(_DWORD, _DWORD))sub_C19C92;
  v19 = *((_DWORD *)v3 + 56);
  if ( (MinecraftGame *)v19 == (MinecraftGame *)((char *)v3 + 216) )
    goto LABEL_47;
  do
    if ( !v18 )
      sub_DA7654();
    v25(&v23, *(_DWORD *)(v19 + 20));
    v20 = sub_DA7F5C(v19);
    v18 = (void (__cdecl *)(_DWORD))v24;
    v19 = v20;
  while ( (MinecraftGame *)v20 != (MinecraftGame *)((char *)v3 + 216) );
  if ( v24 )
LABEL_47:
    v18(&v23);
  result = (Social::MultiplayerServiceManager *)v26;
  if ( v26 )
    if ( (*(int (__cdecl **)(_DWORD))(**((_DWORD **)v3 + 86) + 68))(*((_DWORD *)v3 + 86)) != 1
      || (*(int (__cdecl **)(_DWORD))(**((_DWORD **)v3 + 86) + 24))(*((_DWORD *)v3 + 86)) == 1 )
      v22 = NetworkHandler::getServerLocator(*((NetworkHandler **)v3 + 84));
      (*(void (__cdecl **)(int))(*(_DWORD *)v22 + 16))(v22);
    result = (Social::MultiplayerServiceManager *)*((_DWORD *)v3 + 87);
    if ( result )
      result = (Social::MultiplayerServiceManager *)Social::MultiplayerServiceManager::onAllClientsExitedLevel(
                                                      result,
                                                      v4);
  return result;
}


signed int __fastcall MinecraftGame::canActivateKeyboard(MinecraftGame *this)
{
  MinecraftGame *v1; // r4@1
  void *v2; // r0@2
  int v3; // r0@5
  Level *v4; // r0@6
  int v6; // r2@10
  int v7; // r0@10
  int i; // r1@10

  v1 = this;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v2 + 64))() == 1 )
  {
    v3 = *((_DWORD *)v1 + 50);
    if ( v3 )
    {
      v4 = (Level *)Minecraft::getLevel(*(Minecraft **)(v3 + 8));
      if ( v4 && Level::getNumRemotePlayers(v4) > 1 )
        return 0;
    }
    else
      v6 = *((_DWORD *)v1 + 55);
      v7 = (int)v1 + 216;
      for ( i = (int)v1 + 216; v6; v6 = *(_DWORD *)(v6 + 8) )
        i = v6;
      if ( i != v7 && !*(_BYTE *)(i + 16) )
        v7 = i;
      if ( ClientInstance::getLevel(*(ClientInstance **)(v7 + 20)) )
  }
  return 1;
}


void __fastcall MinecraftGame::onUserSignout(MinecraftGame *this)
{
  MinecraftGame::onUserSignout(this);
}


RakNet *__fastcall MinecraftGame::startLocalServer(int a1, void *a2, int *a3, int *a4, int a5, LevelSettings *a6)
{
  int v6; // r4@1
  int *v7; // r8@1
  int *v8; // r7@1
  int *v9; // r6@1
  char v10; // r0@1
  int v11; // r5@3
  int v12; // r9@3
  int v13; // r1@7
  int v14; // r0@7
  int i; // r5@7
  int v16; // r1@9
  int v17; // r0@13
  int v18; // r5@13
  int v19; // r7@13
  unsigned int *v20; // r1@14
  unsigned int v21; // r0@16
  int v22; // r0@19
  int k; // r1@19
  int v24; // r1@21
  Minecraft *v25; // r0@25
  NetworkHandler *v26; // r0@25
  UPNPInterface *v27; // r0@25
  NetworkHandler *v28; // r0@26
  UPNPInterface *v29; // r0@26
  int v30; // r1@27
  int l; // r0@27
  int v32; // r6@29
  int v33; // r1@29
  UserAuthentication *v34; // r0@33
  const Certificate *v35; // r0@33
  void *v36; // r5@33
  _DWORD *v37; // r0@33
  __int64 v38; // r1@33
  int v39; // r0@35
  int v40; // r0@36
  ResourcePackProgressHandler *v41; // r5@40
  int v42; // r0@40
  int v43; // r0@41
  void *v44; // r5@45
  int v45; // r0@47
  int v46; // r0@48
  ResourceLoadProgressHandler *v47; // r5@52
  int v48; // r0@52
  int v49; // r0@53
  int v50; // r0@57
  int v51; // r1@57
  int m; // r8@57
  int v53; // r1@59
  int v54; // r10@63
  __int64 v55; // kr00_8@64
  __int64 v56; // kr08_8@64
  __int64 v57; // kr10_8@64
  __int64 v58; // kr18_8@64
  int v59; // r1@64
  int v60; // r0@64
  int v61; // r5@65
  unsigned int *v62; // r1@66
  unsigned int v63; // r0@68
  unsigned int *v64; // r4@72
  unsigned int v65; // r0@74
  void *v66; // r0@79
  int v67; // r0@80
  const char *v68; // r1@80
  int v69; // r2@80
  int v70; // r3@80
  int *v71; // r0@80
  int v72; // r10@81
  ResourcePackRepository *v73; // r0@81
  int v74; // r0@82
  const char *v75; // r1@82
  int v76; // r2@82
  int v77; // r3@82
  int *v78; // r0@82
  int v79; // r2@85
  int v80; // r2@87
  char *v81; // r5@89
  ResourcePackRepository *v82; // r6@89
  ResourcePackStack *v83; // r4@89
  char *v84; // r5@89
  ResourcePackRepository *v85; // r6@89
  ResourcePackStack *v86; // r7@89
  int v87; // r0@89
  ResourcePackStack *v88; // ST9C_4@89
  int v89; // r4@89
  int v90; // r1@89
  unsigned __int64 v91; // r2@89
  int v92; // r1@89
  unsigned __int64 v93; // r2@89
  int v94; // r0@92
  const char *v95; // r1@92
  int v96; // r2@92
  int v97; // r3@92
  int *v98; // r0@92
  int v99; // r6@93
  void *v100; // r0@93
  int v101; // r4@94
  ResourcePackStack *v102; // r6@94
  ResourcePackStack *v103; // r7@94
  ResourcePackStack *v104; // r0@94
  int v105; // r0@98
  char v106; // r6@98
  unsigned __int64 v107; // r2@99
  PackReport *v108; // r0@99
  int v109; // r4@99
  void ***v110; // r6@99
  int v111; // r0@102
  int v112; // r0@104
  char v113; // r6@104
  PackReport *v114; // r4@105
  signed int v115; // r8@110
  unsigned __int64 v116; // r2@113
  char v117; // r0@116
  char v118; // r0@119
  pthread_t *v119; // r0@122
  pthread_t v120; // r0@123
  int v121; // r1@125
  int v122; // r11@125
  int v123; // r10@125
  int v124; // r4@125
  int *v125; // r8@125
  int v126; // r6@125
  int v127; // r5@125
  int v128; // r7@125
  int v129; // ST9C_4@125
  unsigned int v130; // ST90_4@125
  int v131; // ST94_4@125
  void *v132; // r4@125
  _DWORD *v133; // r0@125
  __int64 v134; // r3@125
  __int64 v135; // ST50_8@125
  void *v136; // r4@125
  void *v137; // r0@127
  void *v138; // r0@128
  void *v139; // r0@129
  void *v140; // r0@130
  void *v141; // r0@131
  ServerInstance *v142; // r0@132
  ServerInstance *v143; // r0@133
  void *v144; // r5@134
  void *v145; // r7@134
  unsigned int *v146; // r2@136
  signed int v147; // r1@138
  int *v148; // r0@144
  int v149; // r5@149
  int v150; // r8@149
  unsigned int *v151; // r1@150
  unsigned int v152; // r0@152
  unsigned int *v153; // r4@156
  unsigned int v154; // r0@158
  int v155; // r5@163
  unsigned int *v156; // r1@164
  unsigned int v157; // r0@166
  unsigned int *v158; // r4@170
  unsigned int v159; // r0@172
  NetworkHandler *v160; // r5@177
  int v161; // r1@177
  int n; // r0@177
  int v163; // r1@179
  NetworkHandler *v164; // r5@183
  int v165; // r1@183
  int ii; // r0@183
  int v167; // r7@185
  int v168; // r1@185
  int v169; // r11@189
  int v170; // r6@189
  unsigned int *v171; // r1@190
  unsigned int v172; // r0@192
  unsigned int *v173; // r4@196
  unsigned int v174; // r0@198
  char v175; // r0@203
  Social::MultiplayerServiceManager *v176; // r6@203
  NetworkHandler *v177; // r0@203
  Level *v178; // r9@203
  char *v179; // r6@203
  int v180; // r5@203
  char v181; // r0@203
  unsigned __int64 *v182; // r10@203
  void *v183; // r0@205
  void *v184; // r0@212
  int v185; // r6@214
  void (__fastcall *v186)(void **, _DWORD, signed int, int); // r4@214
  signed int v187; // r7@215
  int v188; // r0@217
  int v189; // r1@217
  int jj; // r0@217
  int v191; // r1@224 OVERLAPPED
  int v192; // r2@224 OVERLAPPED
  Level *v193; // r10@224
  Social::User *v194; // r6@224
  int v195; // r9@224
  void *v196; // r7@224
  unsigned int v197; // r8@224
  int v198; // r5@227
  int v199; // r7@231
  unsigned int *v200; // r1@232
  unsigned int v201; // r0@234
  unsigned int *v202; // r4@238
  unsigned int v203; // r0@240
  void *v204; // r4@245
  __int64 v205; // r6@245
  char *v206; // r1@248
  unsigned int *v207; // r2@249
  signed int v208; // r4@251
  char *v209; // r4@255
  int *v210; // r0@256
  int v211; // r0@261
  char *v212; // r0@262
  char *v213; // r0@264
  int v214; // r0@265
  int v215; // r7@271
  void *v216; // r0@271
  void *v217; // r0@272
  unsigned int *v218; // r4@277
  unsigned int v219; // r0@279
  unsigned int *v220; // r2@281
  signed int v221; // r1@283
  unsigned int *v222; // r2@285
  signed int v223; // r1@287
  unsigned int *v224; // r2@289
  signed int v225; // r1@291
  unsigned int *v226; // r2@293
  signed int v227; // r1@295
  unsigned int *v228; // r2@297
  signed int v229; // r1@299
  unsigned int *v230; // r2@301
  signed int v231; // r1@303
  unsigned int *v232; // r2@305
  signed int v233; // r1@307
  unsigned int *v234; // r2@309
  signed int v235; // r1@311
  int v236; // r1@316
  int v237; // r0@316
  int j; // r5@316
  int v239; // r4@321
  int *v240; // r0@321
  int v241; // r4@321
  unsigned int *v242; // r1@322
  unsigned int v243; // r0@324
  unsigned int *v244; // r5@328
  unsigned int v245; // r0@330
  void *v246; // r0@335
  void *v247; // r0@336
  void *v248; // r0@337
  RakNet *v249; // r1@338
  RakNet *result; // r0@338
  unsigned int *v251; // r2@348
  signed int v252; // r1@350
  unsigned int *v253; // r2@352
  signed int v254; // r1@354
  unsigned int *v255; // r2@388
  signed int v256; // r1@390
  unsigned int *v257; // r2@392
  signed int v258; // r1@394
  unsigned int *v259; // r2@396
  signed int v260; // r1@398
  unsigned int *v261; // r2@411
  signed int v262; // r1@413
  unsigned int *v263; // r2@415
  signed int v264; // r1@417
  int v265; // [sp+8h] [bp-6C50h]@65
  int v266; // [sp+8h] [bp-6C50h]@271
  int v267; // [sp+Ch] [bp-6C4Ch]@65
  int v268; // [sp+84h] [bp-6BD4h]@125
  unsigned __int64 *v269; // [sp+88h] [bp-6BD0h]@220
  int *v270; // [sp+8Ch] [bp-6BCCh]@29
  Social::XboxLiveUserManager *v271; // [sp+8Ch] [bp-6BCCh]@189
  int *v272; // [sp+90h] [bp-6BC8h]@29
  int v273; // [sp+94h] [bp-6BC4h]@82
  int v274; // [sp+98h] [bp-6BC0h]@89
  ResourcePackManager *v275; // [sp+9Ch] [bp-6BBCh]@81
  ResourcePackManager *v276; // [sp+A0h] [bp-6BB8h]@81
  Minecraft *v277; // [sp+A4h] [bp-6BB4h]@25
  void *v278; // [sp+A8h] [bp-6BB0h]@1
  void *v279; // [sp+B0h] [bp-6BA8h]@224
  int v280; // [sp+B4h] [bp-6BA4h]@224
  int v281; // [sp+B8h] [bp-6BA0h]@224
  Social::User *v282; // [sp+BCh] [bp-6B9Ch]@224
  int v283; // [sp+C0h] [bp-6B98h]@231
  void *v284; // [sp+C4h] [bp-6B94h]@217
  int v285; // [sp+C8h] [bp-6B90h]@224
  Social::User *v286; // [sp+D0h] [bp-6B88h]@189
  int v287; // [sp+D4h] [bp-6B84h]@189
  int v288; // [sp+D8h] [bp-6B80h]@183
  void *v289; // [sp+F8h] [bp-6B60h]@125
  void *v290; // [sp+FCh] [bp-6B5Ch]@125
  int v291; // [sp+100h] [bp-6B58h]@125
  Options *v292; // [sp+104h] [bp-6B54h]@125
  int v293; // [sp+108h] [bp-6B50h]@149
  Options *v294; // [sp+10Ch] [bp-6B4Ch]@125
  int v295; // [sp+110h] [bp-6B48h]@163
  pthread_t v296; // [sp+114h] [bp-6B44h]@125
  int v297; // [sp+118h] [bp-6B40h]@272
  int v298; // [sp+11Ch] [bp-6B3Ch]@271
  void *ptr; // [sp+120h] [bp-6B38h]@105
  PackReport *v300; // [sp+124h] [bp-6B34h]@105
  int v301; // [sp+12Ch] [bp-6B2Ch]@102
  PackReport *v302; // [sp+130h] [bp-6B28h]@99
  PackReport *v303; // [sp+134h] [bp-6B24h]@99
  ResourcePackStack *v304; // [sp+13Ch] [bp-6B1Ch]@96
  ResourcePackStack *v305; // [sp+140h] [bp-6B18h]@94
  ResourcePackStack *v306; // [sp+144h] [bp-6B14h]@94
  __int64 v307; // [sp+148h] [bp-6B10h]@94
  int v308; // [sp+150h] [bp-6B08h]@94
  __int64 v309; // [sp+154h] [bp-6B04h]@94
  int v310; // [sp+15Ch] [bp-6AFCh]@93
  int *v311; // [sp+160h] [bp-6AF8h]@92
  __int64 v312; // [sp+164h] [bp-6AF4h]@89
  __int64 v313; // [sp+16Ch] [bp-6AECh]@89
  __int64 v314; // [sp+174h] [bp-6AE4h]@87
  char v315; // [sp+17Ch] [bp-6ADCh]@87
  void (*v316)(void); // [sp+184h] [bp-6AD4h]@87
  __int64 v317; // [sp+190h] [bp-6AC8h]@85
  char v318; // [sp+198h] [bp-6AC0h]@85
  void (*v319)(void); // [sp+1A0h] [bp-6AB8h]@85
  __int64 v320; // [sp+1ACh] [bp-6AACh]@83
  char v321; // [sp+1B4h] [bp-6AA4h]@83
  void (*v322)(void); // [sp+1BCh] [bp-6A9Ch]@83
  int *v323; // [sp+1C8h] [bp-6A90h]@82
  int *v324; // [sp+1CCh] [bp-6A8Ch]@80
  __int64 v325; // [sp+1D0h] [bp-6A88h]@80
  int v326; // [sp+1D8h] [bp-6A80h]@63
  int v327; // [sp+1DCh] [bp-6A7Ch]@64
  __int64 v328; // [sp+1E0h] [bp-6A78h]@64
  __int64 v329; // [sp+1E8h] [bp-6A70h]@64
  __int64 v330; // [sp+1F0h] [bp-6A68h]@64
  __int64 v331; // [sp+1F8h] [bp-6A60h]@64
  int v332; // [sp+204h] [bp-6A54h]@63
  char v333; // [sp+208h] [bp-6A50h]@65
  int v334; // [sp+20Ch] [bp-6A4Ch]@65
  int v335; // [sp+210h] [bp-6A48h]@33
  int v336; // [sp+214h] [bp-6A44h]@37
  __int64 v337; // [sp+218h] [bp-6A40h]@64
  __int64 v338; // [sp+220h] [bp-6A38h]@64
  __int64 v339; // [sp+228h] [bp-6A30h]@35
  __int64 v340; // [sp+230h] [bp-6A28h]@35
  char v341; // [sp+238h] [bp-6A20h]@33
  int v342; // [sp+24Ch] [bp-6A0Ch]@321
  int v343; // [sp+254h] [bp-6A04h]@321
  int v344; // [sp+25Ch] [bp-69FCh]@321
  char v345; // [sp+260h] [bp-69F8h]@321
  int v346; // [sp+264h] [bp-69F4h]@321
  char v347; // [sp+268h] [bp-69F0h]@13
  int v348; // [sp+26Ch] [bp-69ECh]@13
  _DWORD *v349; // [sp+270h] [bp-69E8h]@33
  void (*v350)(void); // [sp+278h] [bp-69E0h]@33
  char v351; // [sp+280h] [bp-69D8h]@45
  void (*v352)(void); // [sp+288h] [bp-69D0h]@45
  int *v353; // [sp+290h] [bp-69C8h]@80
  int v354; // [sp+294h] [bp-69C4h]@80
  const char *v355; // [sp+298h] [bp-69C0h]@80
  int v356; // [sp+29Ch] [bp-69BCh]@80
  _DWORD *v357; // [sp+2ACh] [bp-69ACh]@125
  void (*v358)(void); // [sp+2B4h] [bp-69A4h]@125
  int (__fastcall *v359)(int); // [sp+2B8h] [bp-69A0h]@125
  int v360; // [sp+2C0h] [bp-6998h]@125
  char v361; // [sp+2C4h] [bp-6994h]@125
  char v362; // [sp+380h] [bp-68D8h]@248
  int v363; // [sp+384h] [bp-68D4h]@183
  int v364; // [sp+38Ch] [bp-68CCh]@125
  int v365; // [sp+390h] [bp-68C8h]@125
  int v366; // [sp+394h] [bp-68C4h]@125
  int v367; // [sp+398h] [bp-68C0h]@125
  int v368; // [sp+41Ch] [bp-683Ch]@177
  void **v369; // [sp+4D4h] [bp-6784h]@94
  int v370; // [sp+4D8h] [bp-6780h]@113
  void **v371; // [sp+4DCh] [bp-677Ch]@113
  int v372; // [sp+4E0h] [bp-6778h]@113
  void **v373; // [sp+1510h] [bp-5748h]@113
  int v374; // [sp+1598h] [bp-56C0h]@94
  int v375; // [sp+159Ch] [bp-56BCh]@94
  int v376; // [sp+199Ch] [bp-52BCh]@94
  void **v377; // [sp+19A0h] [bp-52B8h]@94
  int v378; // [sp+19A4h] [bp-52B4h]@115
  void **v379; // [sp+19A8h] [bp-52B0h]@115
  int v380; // [sp+2A64h] [bp-41F4h]@94
  int v381; // [sp+2A68h] [bp-41F0h]@94
  int v382; // [sp+2E68h] [bp-3DF0h]@94
  int v383; // [sp+2E6Ch] [bp-3DECh]@92
  int v384; // [sp+2E70h] [bp-3DE8h]@93
  int v385; // [sp+3270h] [bp-39E8h]@94
  void **v386; // [sp+3274h] [bp-39E4h]@89
  int v387; // [sp+3278h] [bp-39E0h]@89
  void **v388; // [sp+327Ch] [bp-39DCh]@89
  int v389; // [sp+3280h] [bp-39D8h]@89
  void **v390; // [sp+42B0h] [bp-29A8h]@89
  int v391; // [sp+4338h] [bp-2920h]@89
  int v392; // [sp+433Ch] [bp-291Ch]@89
  int v393; // [sp+473Ch] [bp-251Ch]@89
  void **v394; // [sp+4740h] [bp-2518h]@89
  int v395; // [sp+4744h] [bp-2514h]@89
  void **v396; // [sp+4748h] [bp-2510h]@89
  int v397; // [sp+474Ch] [bp-250Ch]@89
  void **v398; // [sp+577Ch] [bp-14DCh]@89
  int v399; // [sp+5804h] [bp-1454h]@89
  int v400; // [sp+5808h] [bp-1450h]@89
  int v401; // [sp+5C08h] [bp-1050h]@89
  int v402; // [sp+5C0Ch] [bp-104Ch]@87
  int v403; // [sp+5C10h] [bp-1048h]@87
  int v404; // [sp+6010h] [bp-C48h]@87
  int v405; // [sp+6014h] [bp-C44h]@85
  int v406; // [sp+6018h] [bp-C40h]@85
  int v407; // [sp+6418h] [bp-840h]@85
  int v408; // [sp+641Ch] [bp-83Ch]@82
  int v409; // [sp+6420h] [bp-838h]@83
  int v410; // [sp+6820h] [bp-438h]@83
  int v411; // [sp+6824h] [bp-434h]@80
  int v412; // [sp+6828h] [bp-430h]@80
  int v413; // [sp+6C0Ch] [bp-4Ch]@269
  int v414; // [sp+6C28h] [bp-30h]@1
  RakNet *v415; // [sp+6C2Ch] [bp-2Ch]@1

  v6 = a1;
  v278 = a2;
  v7 = &v414;
  v8 = a4;
  v9 = a3;
  v415 = _stack_chk_guard;
  v10 = *(_BYTE *)(a1 + 656);
  __dmb();
  if ( v10 & 1 )
    goto LABEL_338;
  if ( a5 )
  {
    v11 = *(_DWORD *)(v6 + 224);
    v12 = v6 + 216;
    while ( v11 != v12 )
    {
      if ( ClientInstance::isValidMultiplayerSkin(*(ClientInstance **)(v11 + 20)) != 1 )
      {
        v13 = *(_DWORD *)(v6 + 220);
        v14 = v6 + 216;
        for ( i = *(_DWORD *)(v6 + 104); v13; v13 = *(_DWORD *)(v13 + 8) )
          v14 = v13;
        v16 = v6 + 216;
        if ( v14 != v12 )
        {
          if ( *(_BYTE *)(v14 + 16) )
            v14 = v6 + 216;
          v16 = v14;
        }
        v17 = ClientInstance::getSceneFactory(*(ClientInstance **)(v16 + 20));
        SceneFactory::createStartMenuScreen((SceneFactory *)&v347, v17);
        SceneStack::pushScreen(i, (int)&v347, 1);
        v18 = v348;
        v19 = v6;
        if ( v348 )
          v20 = (unsigned int *)(v348 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
          }
          else
            v21 = (*v20)--;
          if ( v21 == 1 )
            v218 = (unsigned int *)(v18 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
            if ( &pthread_create )
            {
              __dmb();
              do
                v219 = __ldrex(v218);
              while ( __strex(v219 - 1, v218) );
            }
            else
              v219 = (*v218)--;
            if ( v219 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
        v236 = *(_DWORD *)(v19 + 220);
        v237 = v12;
        for ( j = *(_DWORD *)(v19 + 104); v236; v236 = *(_DWORD *)(v236 + 8) )
          v237 = v236;
        if ( v237 != v12 && !*(_BYTE *)(v237 + 16) )
          v12 = v237;
        v239 = ClientInstance::getSceneFactory(*(ClientInstance **)(v12 + 20));
        sub_DA7364((void **)&v344, "disconnectionScreen.lockedSkin.title");
        sub_DA7364((void **)&v343, "disconnectionScreen.lockedSkin");
        v240 = (int *)sub_DA7364((void **)&v342, (const char *)&unk_257BC67);
        SceneFactory::createDisconnectScreen((unsigned __int64 *)&v345, v239, &v344, &v343, v240);
        SceneStack::pushScreen(j, (int)&v345, 0);
        v241 = v346;
        if ( v346 )
          v242 = (unsigned int *)(v346 + 4);
              v243 = __ldrex(v242);
            while ( __strex(v243 - 1, v242) );
            v243 = (*v242)--;
          if ( v243 == 1 )
            v244 = (unsigned int *)(v241 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v241 + 8))(v241);
                v245 = __ldrex(v244);
              while ( __strex(v245 - 1, v244) );
              v245 = (*v244)--;
            if ( v245 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v241 + 12))(v241);
        v246 = (void *)(v342 - 12);
        if ( (int *)(v342 - 12) != &dword_28898C0 )
          v255 = (unsigned int *)(v342 - 4);
              v256 = __ldrex(v255);
            while ( __strex(v256 - 1, v255) );
            v256 = (*v255)--;
          if ( v256 <= 0 )
            j_j_j_j_j__ZdlPv_9(v246);
        v247 = (void *)(v343 - 12);
        if ( (int *)(v343 - 12) != &dword_28898C0 )
          v257 = (unsigned int *)(v343 - 4);
              v258 = __ldrex(v257);
            while ( __strex(v258 - 1, v257) );
            v258 = (*v257)--;
          if ( v258 <= 0 )
            j_j_j_j_j__ZdlPv_9(v247);
        v248 = (void *)(v344 - 12);
        if ( (int *)(v344 - 12) != &dword_28898C0 )
          v259 = (unsigned int *)(v344 - 4);
              v260 = __ldrex(v259);
            while ( __strex(v260 - 1, v259) );
            v260 = (*v259)--;
          if ( v260 <= 0 )
            j_j_j_j_j__ZdlPv_9(v248);
        goto LABEL_338;
      }
      v11 = sub_DA7FEC(v11);
    }
  }
  else
  *(_BYTE *)(v6 + 656) = 1;
  v22 = v12;
  for ( k = *(_DWORD *)(v6 + 220); k; k = *(_DWORD *)(k + 8) )
    v22 = k;
  v24 = v12;
  if ( v22 != v12 )
    if ( *(_BYTE *)(v22 + 16) )
      v22 = v12;
    v24 = v22;
  v25 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v24 + 20));
  v277 = v25;
  v26 = (NetworkHandler *)Minecraft::getNetworkHandler(v25);
  v27 = (UPNPInterface *)NetworkHandler::getUPnPInterface(v26);
  if ( !UPNPInterface::getPortMappingv4(v27)[268] )
    v28 = (NetworkHandler *)Minecraft::getNetworkHandler(v277);
    v29 = (UPNPInterface *)NetworkHandler::getUPnPInterface(v28);
    UPNPInterface::createIPv4PortMapping(v29, SharedConstants::NetworkDefaultGamePort);
  v30 = *(_DWORD *)(v6 + 220);
  for ( l = v12; v30; v30 = *(_DWORD *)(v30 + 8) )
    l = v30;
  v270 = v8;
  v272 = v9;
  v32 = v6;
  v33 = v12;
  if ( l != v12 )
    if ( *(_BYTE *)(l + 16) )
      l = v12;
    v33 = l;
  v34 = (UserAuthentication *)ClientInstance::getUserAuthentication(*(ClientInstance **)(v33 + 20));
  v35 = (const Certificate *)UserAuthentication::getLocalCertificate(v34);
  ExtendedCertificate::getIdentity((ExtendedCertificate *)&v341, v35);
  _aeabi_memclr8(&v335, 40);
  std::_Deque_base<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::_M_initialize_map(
    (int)&v335,
    0);
  v36 = operator new(0x38u);
  v350 = 0;
  v37 = operator new(4u);
  LODWORD(v38) = sub_C1A224;
  *v37 = v6;
  HIDWORD(v38) = sub_C19F48;
  v349 = v37;
  *(_QWORD *)&v350 = v38;
  GameServerConnectProgressHandler::GameServerConnectProgressHandler((int)v36, 0, (int)&v349, 0);
  if ( v350 )
    v350();
  v39 = v339;
  if ( (_DWORD)v339 == (_DWORD)v340 - 4 )
    if ( (unsigned int)(v336 - ((HIDWORD(v340) - v335) >> 2)) <= 1 )
      std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::_M_reallocate_map(
        (int)&v335,
        1u,
        0);
    *(_DWORD *)(HIDWORD(v340) + 4) = operator new(0x200u);
    *(_DWORD *)v339 = v36;
    HIDWORD(v340) += 4;
    v40 = *(_DWORD *)HIDWORD(v340);
    HIDWORD(v339) = v40;
    LODWORD(v340) = v40 + 512;
    v40 = v39 + 4;
  LODWORD(v339) = v40;
  v41 = (ResourcePackProgressHandler *)operator new(0x38u);
  ResourcePackProgressHandler::ResourcePackProgressHandler(v41, 1);
  v42 = v339;
    *(_DWORD *)v339 = v41;
    v43 = *(_DWORD *)HIDWORD(v340);
    HIDWORD(v339) = v43;
    LODWORD(v340) = v43 + 512;
    v43 = v42 + 4;
  LODWORD(v339) = v43;
  v44 = operator new(0x20u);
  v352 = 0;
  WorldGenerationProgressHandler::WorldGenerationProgressHandler((int)v44, 1, (int)&v351);
  if ( v352 )
    v352();
  v45 = v339;
    *(_DWORD *)v339 = v44;
    v46 = *(_DWORD *)HIDWORD(v340);
    HIDWORD(v339) = v46;
    LODWORD(v340) = v46 + 512;
    v46 = v45 + 4;
  LODWORD(v339) = v46;
  v47 = (ResourceLoadProgressHandler *)operator new(0xCu);
  ResourceLoadProgressHandler::ResourceLoadProgressHandler(v47);
  v48 = v339;
    *(_DWORD *)v339 = v47;
    v49 = *(_DWORD *)HIDWORD(v340);
    HIDWORD(v339) = v49;
    LODWORD(v340) = v49 + 512;
    v49 = v48 + 4;
  LODWORD(v339) = v49;
  v50 = v12;
  v51 = *(_DWORD *)(v6 + 220);
  for ( m = *(_DWORD *)(v6 + 104); v51; v51 = *(_DWORD *)(v51 + 8) )
    v50 = v51;
  v53 = v12;
  if ( v50 != v12 )
    if ( *(_BYTE *)(v50 + 16) )
      v50 = v12;
    v53 = v50;
  v54 = ClientInstance::getSceneFactory(*(ClientInstance **)(v53 + 20));
  sub_DA7364((void **)&v332, "local_world_load");
  _aeabi_memclr8(&v326, 40);
    (int)&v326,
  if ( v335 )
    v55 = v328;
    v56 = v329;
    v328 = v337;
    v329 = v338;
    v337 = v55;
    v338 = v56;
    v57 = v330;
    v58 = v331;
    v331 = v340;
    v330 = v339;
    v339 = v57;
    v340 = v58;
    v59 = v326;
    v326 = v335;
    v335 = v59;
    v60 = v327;
    v327 = v336;
    v336 = v60;
  SceneFactory::createProgressScreen((unsigned __int64 *)&v333, v54, &v332, (int)&v326, 1, 1, 0);
  SceneStack::pushScreen(m, (int)&v333, 0);
  v61 = v334;
  if ( v334 )
    v62 = (unsigned int *)(v334 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
    else
      v63 = (*v62)--;
    if ( v63 == 1 )
      v64 = (unsigned int *)(v61 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 8))(v61);
      if ( &pthread_create )
        __dmb();
        do
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
      else
        v65 = (*v64)--;
      if ( v65 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 12))(v61);
  std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::~deque((int)&v326);
  v66 = (void *)(v332 - 12);
  if ( (int *)(v332 - 12) != &dword_28898C0 )
    v220 = (unsigned int *)(v332 - 4);
        v221 = __ldrex(v220);
      while ( __strex(v221 - 1, v220) );
      v221 = (*v220)--;
    if ( v221 <= 0 )
      j_j_j_j_j__ZdlPv_9(v66);
  v67 = Minecraft::getLevelSource(v277);
  (*(void (__fastcall **)(int **))(*(_DWORD *)v67 + 64))(&v324);
  v68 = *(const char **)v278;
  v69 = *(v324 - 3);
  v70 = *(_DWORD *)(*(_DWORD *)v278 - 12);
  v353 = v324;
  v354 = v69;
  v355 = v68;
  v356 = v70;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v411, (int)&v353, 2);
  LODWORD(v325) = &v412;
  HIDWORD(v325) = v414;
  *(_BYTE *)(v32 + 508) = Core::FileSystem::fileOrDirectoryExists(&v325) ^ 1;
  v71 = v324 - 3;
  if ( v324 - 3 != &dword_28898C0 )
    v222 = (unsigned int *)(v324 - 1);
        v223 = __ldrex(v222);
      while ( __strex(v223 - 1, v222) );
      v223 = (*v222)--;
    if ( v223 <= 0 )
      j_j_j_j_j__ZdlPv_9(v71);
  v276 = (ResourcePackManager *)Minecraft::getResourceLoader(v277);
  v72 = v32;
  v73 = *(ResourcePackRepository **)(v32 + 312);
  v275 = *(ResourcePackManager **)(v32 + 320);
  ResourcePackRepository::refreshPacks(v73);
  if ( *(_BYTE *)(v32 + 508) )
    v273 = v32;
    v74 = Minecraft::getLevelSource(v277);
    (*(void (__fastcall **)(int **))(*(_DWORD *)v74 + 64))(&v323);
    v75 = *(const char **)v278;
    v76 = *(v323 - 3);
    v77 = *(_DWORD *)(*(_DWORD *)v278 - 12);
    v353 = v323;
    v354 = v76;
    v355 = v75;
    v356 = v77;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v408, (int)&v353, 2);
    v78 = v323 - 3;
    if ( v323 - 3 != &dword_28898C0 )
      v234 = (unsigned int *)(v323 - 1);
          v235 = __ldrex(v234);
        while ( __strex(v235 - 1, v234) );
        v235 = (*v234)--;
      if ( v235 <= 0 )
        j_j_j_j_j__ZdlPv_9(v78);
    LODWORD(v320) = &v409;
    HIDWORD(v320) = v410;
    Core::FileSystem::createOneDirectory((int)&v321, &v320);
    if ( v322 )
      v322();
    v79 = *(_DWORD *)(ResourcePackRepository::RESOURCE_PACKS_PATH - 12);
    v353 = &v409;
    v354 = v410;
    v355 = (const char *)ResourcePackRepository::RESOURCE_PACKS_PATH;
    v356 = v79;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v405, (int)&v353, 2);
    LODWORD(v317) = &v406;
    HIDWORD(v317) = v407;
    Core::FileSystem::createOneDirectory((int)&v318, &v317);
    if ( v319 )
      v319();
    v80 = *(_DWORD *)(ResourcePackRepository::BEHAVIOR_PACK_PATH - 12);
    v355 = (const char *)ResourcePackRepository::BEHAVIOR_PACK_PATH;
    v356 = v80;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v402, (int)&v353, 2);
    LODWORD(v314) = &v403;
    HIDWORD(v314) = v404;
    Core::FileSystem::createOneDirectory((int)&v315, &v314);
    if ( v316 )
      v316();
    v81 = LevelSettings::getNewWorldResourcePackIdentities(a6);
    v82 = *(ResourcePackRepository **)(v273 + 312);
    v83 = (ResourcePackStack *)operator new(0x14u);
    ResourcePackStack::ResourcePackStack(v83, v81, v82);
    v84 = LevelSettings::getNewWorldBehaviorPackIdentities(a6);
    v85 = *(ResourcePackRepository **)(v273 + 312);
    v86 = (ResourcePackStack *)operator new(0x14u);
    ResourcePackStack::ResourcePackStack(v86, v84, v85);
    v355 = "world_resource_packs.json";
    v356 = -1;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v399, (int)&v353, 2);
    LODWORD(v313) = &v400;
    HIDWORD(v313) = v401;
    v87 = Core::FileStream::FileStream((int)&v394, &v313, 48);
    v88 = v83;
    ResourcePackStack::serialize((int)v83, (char *)(v87 + 8));
    v355 = "world_behavior_packs.json";
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v391, (int)&v353, 2);
    v89 = v393;
    _aeabi_memcpy4(&v400, &v392, v393 + 1);
    v401 = v89;
    LOBYTE(v392) = 0;
    v393 = 0;
    LODWORD(v312) = &v400;
    HIDWORD(v312) = v89;
    Core::FileStream::FileStream((int)&v386, &v312, 48);
    v274 = v12;
    ResourcePackStack::serialize((int)v86, (char *)&v388);
    v386 = &off_26D66C4;
    v390 = &off_26D66EC;
    v388 = &off_26D66D8;
    Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v389, v90, v91);
    v386 = &off_26D670C;
    v390 = &off_26D6720;
    v387 = 0;
    sub_DA76E4(&v390);
    v394 = &off_26D66C4;
    v398 = &off_26D66EC;
    v396 = &off_26D66D8;
    Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v397, v92, v93);
    v394 = &off_26D670C;
    v398 = &off_26D6720;
    v395 = 0;
    sub_DA76E4(&v398);
    (*(void (**)(void))(*(_DWORD *)v86 + 4))();
    (*(void (**)(void))(*(_DWORD *)v88 + 4))();
    v72 = v273;
  if ( !OfferRepository::isTrial(*(OfferRepository **)(v72 + 296)) )
    v94 = Minecraft::getLevelSource(v277);
    (*(void (__fastcall **)(int **))(*(_DWORD *)v94 + 64))(&v311);
    v95 = *(const char **)v278;
    v96 = *(v311 - 3);
    v97 = *(_DWORD *)(*(_DWORD *)v278 - 12);
    v353 = v311;
    v354 = v96;
    v355 = v95;
    v356 = v97;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v383, (int)&v353, 2);
    v98 = v311 - 3;
    if ( v311 - 3 != &dword_28898C0 )
      v251 = (unsigned int *)(v311 - 1);
          v252 = __ldrex(v251);
        while ( __strex(v252 - 1, v251) );
        v252 = (*v251)--;
      if ( v252 <= 0 )
        j_j_j_j_j__ZdlPv_9(v98);
    v99 = *(_DWORD *)(v72 + 312);
    sub_DA7364((void **)&v310, (const char *)&v384);
    ResourcePackRepository::addWorldResourcePacks(v99, &v310);
    v100 = (void *)(v310 - 12);
    if ( (int *)(v310 - 12) != &dword_28898C0 )
      v253 = (unsigned int *)(v310 - 4);
          v254 = __ldrex(v253);
        while ( __strex(v254 - 1, v253) );
        v254 = (*v253)--;
      if ( v254 <= 0 )
        j_j_j_j_j__ZdlPv_9(v100);
    v353 = &v384;
    v354 = v385;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v380, (int)&v353, 2);
    LODWORD(v309) = &v381;
    HIDWORD(v309) = v382;
    Core::FileStream::FileStream((int)&v377, &v309, 24);
    ResourcePackStack::deserialize(&v308, (char *)&v377, *(ResourcePackRepository **)(v72 + 312));
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v374, (int)&v353, 2);
    v101 = v376;
    _aeabi_memcpy4(&v381, &v375, v376 + 1);
    v382 = v101;
    LOBYTE(v375) = 0;
    v376 = 0;
    LODWORD(v307) = &v381;
    HIDWORD(v307) = v101;
    Core::FileStream::FileStream((int)&v369, &v307, 24);
    ResourcePackStack::deserialize(&v306, (char *)&v369, *(ResourcePackRepository **)(v72 + 312));
    v102 = (ResourcePackStack *)operator new(0x14u);
    *(_DWORD *)v102 = &off_26EAC8C;
    *((_DWORD *)v102 + 1) = 0;
    *((_DWORD *)v102 + 2) = 0;
    *((_DWORD *)v102 + 3) = 0;
    *((_DWORD *)v102 + 4) = 0;
    v103 = (ResourcePackStack *)operator new(0x14u);
    *(_DWORD *)v103 = &off_26EAC8C;
    *((_DWORD *)v103 + 1) = 0;
    *((_DWORD *)v103 + 2) = 0;
    *((_DWORD *)v103 + 3) = 0;
    v104 = v306;
    *((_DWORD *)v103 + 4) = 0;
    ResourcePackStack::getSplitStacks(v104, v103, v102);
    v305 = v103;
    ResourcePackManager::setStack(v275, (int *)&v305, 0, 0);
    if ( v305 )
      (*(void (**)(void))(*(_DWORD *)v305 + 4))();
    v304 = v102;
    v305 = 0;
    ResourcePackManager::setStack(v276, (int *)&v304, 1, 0);
    if ( v304 )
      (*(void (**)(void))(*(_DWORD *)v304 + 4))();
    v304 = 0;
    ResourcePackManager::ensureSupportedSubpacks(v276);
    v105 = ResourcePackManager::canSupportPacks(v276);
    v106 = v105;
    if ( v105 )
      ResourcePackManager::getIncompatiblePacks((ResourcePackManager *)&v302, (int)v276);
      sub_C054EC(v72, &v302, v106);
      v109 = (int)v303;
      v108 = v302;
      v110 = &v377;
      if ( v302 != v303 )
          v108 = (PackReport *)((char *)PackReport::~PackReport(v108) + 120);
        while ( (PackReport *)v109 != v108 );
        v108 = v302;
      v111 = v308;
      v308 = 0;
      v301 = v111;
      ResourcePackManager::setStack(v275, &v301, 1, 0);
      if ( v301 )
        (*(void (**)(void))(*(_DWORD *)v301 + 4))();
      v301 = 0;
      ResourcePackManager::ensureSupportedSubpacks(v275);
      v112 = ResourcePackManager::canSupportPacks(v275);
      v113 = v112;
      if ( !v112 )
        ResourcePackManager::handlePendingStackChanges(v276);
        if ( *(_BYTE *)(v72 + 508) )
          ResourcePackRepository::getPackManifestFactory(*(ResourcePackRepository **)(v72 + 312));
          v215 = ResourcePackRepository::getKeyProvider(*(ResourcePackRepository **)(v72 + 312));
          sub_DA7364((void **)&v298, (const char *)&v384);
          ResourcePackManager::copyPacksToNewLevel((int)v275, &v298, 1, *(PackSourceFactory **)(v72 + 676), v265, v215);
          v216 = (void *)(v298 - 12);
          if ( (int *)(v298 - 12) != &dword_28898C0 )
            v261 = (unsigned int *)(v298 - 4);
                v262 = __ldrex(v261);
              while ( __strex(v262 - 1, v261) );
              v262 = (*v261)--;
            if ( v262 <= 0 )
              j_j_j_j_j__ZdlPv_9(v216);
          sub_DA7364((void **)&v297, (const char *)&v384);
          ResourcePackManager::copyPacksToNewLevel((int)v276, &v297, 2, *(PackSourceFactory **)(v72 + 676), v266, v215);
          v217 = (void *)(v297 - 12);
          if ( (int *)(v297 - 12) != &dword_28898C0 )
            v263 = (unsigned int *)(v297 - 4);
                v264 = __ldrex(v263);
              while ( __strex(v264 - 1, v263) );
              v264 = (*v263)--;
            if ( v264 <= 0 )
              j_j_j_j_j__ZdlPv_9(v217);
          ResourcePackRepository::refreshPacks(*(ResourcePackRepository **)(v72 + 312));
        v115 = 1;
        v110 = &v377;
LABEL_111:
        if ( v306 )
          (*(void (**)(void))(*(_DWORD *)v306 + 4))();
        v369 = &off_26D66C4;
        v373 = &off_26D66EC;
        v371 = &off_26D66D8;
        Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v372, (int)&off_26D66EC, v107);
        v369 = &off_26D670C;
        v373 = &off_26D6720;
        v370 = 0;
        sub_DA76E4(&v373);
        if ( v308 )
          (*(void (**)(void))(*(_DWORD *)v308 + 4))();
        LODWORD(v116) = &v376;
        v377 = &off_26D66C4;
        v110[1039] = &off_26D66EC;
        v379 = &off_26D66D8;
        Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)(v110 + 3), (int)&off_26D66EC, v116);
        v377 = &off_26D670C;
        v110[1039] = &off_26D6720;
        v378 = 0;
        sub_DA76E4(v110 + 1039);
        if ( !v115 )
          goto LABEL_269;
        goto LABEL_116;
      ResourcePackManager::getIncompatiblePacks((ResourcePackManager *)&ptr, (int)v275);
      sub_C054EC(v72, &ptr, v113);
      v114 = v300;
      v108 = (PackReport *)ptr;
      if ( ptr != (void *)v300 )
        while ( v114 != v108 );
        v108 = (PackReport *)ptr;
    if ( v108 )
      operator delete((void *)v108);
    v115 = 0;
    goto LABEL_111;
  ResourcePackRepository::refreshPacks(*(ResourcePackRepository **)(v72 + 312));
LABEL_116:
  v117 = byte_27C5DA8;
  if ( !(v117 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27C5DA8) )
    unk_27C5DB8 = 0;
    unk_27C5DBC = 0;
    dword_27C5DC0 = 0;
    _cxa_atexit(Whitelist::~Whitelist);
    j___cxa_guard_release((unsigned int *)&byte_27C5DA8);
  v118 = byte_27C5DAC;
  if ( !(v118 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27C5DAC) )
    OpsList::OpsList((OpsList *)&unk_27C5DC4, 1);
    _cxa_atexit(OpsList::~OpsList);
    j___cxa_guard_release((unsigned int *)&byte_27C5DAC);
  v119 = *(pthread_t **)(v72 + 700);
  if ( v119 )
    v120 = *v119;
    v120 = pthread_self();
  v296 = v120;
  ASSIGN_SERVER_THREAD((int *)&v296);
  v121 = v72;
  v122 = *(_DWORD *)(v72 + 260);
  v123 = *(_DWORD *)(v72 + 520);
  v124 = v121;
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v294, v121);
  v125 = (int *)Options::getDisplayedUsername(v294);
  v126 = v124;
  v127 = *(_DWORD *)(v124 + 412);
  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v292, v124);
  v128 = Options::getMaxViewDistanceChunks(v292);
  v277 = (Minecraft *)MinecraftGame::isServerVisible((MinecraftGame *)v124);
  v273 = (*(int (__fastcall **)(int))(*(_DWORD *)v124 + 140))(v124);
  v289 = 0;
  v290 = 0;
  v291 = 0;
  v129 = *(_DWORD *)(v124 + 312);
  v268 = *(_DWORD *)(v124 + 340);
  v130 = *(_DWORD *)(v124 + 504);
  v131 = *(_DWORD *)(v124 + 672);
  v132 = operator new(0x2Cu);
  sub_DA73B4(&v367, (int *)v278);
  sub_DA73B4(&v366, v272);
  sub_DA73B4(&v365, v270);
  sub_DA73B4(&v364, v125);
  LevelSettings::LevelSettings((int)&v361, (int)a6);
  v278 = v132;
  v274 = v12;
  sub_DA7364((void **)&v360, "normal");
  v358 = 0;
  v133 = operator new(4u);
  *v133 = v126;
  HIDWORD(v134) = SharedConstants::NetworkDefaultGamePortv6;
  v357 = v133;
  LODWORD(v134) = SharedConstants::NetworkDefaultGamePort;
  v358 = (void (*)(void))sub_C1A6C4;
  v359 = sub_C1A6B8;
  v135 = v134;
  v136 = v278;
  ServerInstance::ServerInstance(
    (int)v278,
    v126 + 16,
    (unsigned int)&unk_27C5DB8,
    (unsigned int)&unk_27C5DC4,
    v122,
    v267,
    0LL,
    &v367,
    (int)&v366,
    (int)&v365,
    v123,
    &v364,
    (LevelSettings *)&v361,
    v127,
    v128,
    (int)v277,
    v135,
    SHIDWORD(v135),
    v273,
    0,
    (unsigned __int64 *)&v289,
    &v360,
    (int)&v341,
    v130,
    v268,
    v129,
    v131,
    v275,
    (int)v276,
    (int)&v357);
  if ( v358 )
    v358();
  v137 = (void *)(v360 - 12);
  if ( (int *)(v360 - 12) != &dword_28898C0 )
    v224 = (unsigned int *)(v360 - 4);
        v225 = __ldrex(v224);
      while ( __strex(v225 - 1, v224) );
      v225 = (*v224)--;
    if ( v225 <= 0 )
      j_j_j_j_j__ZdlPv_9(v137);
  LevelSettings::~LevelSettings((LevelSettings *)&v361);
  v138 = (void *)(v364 - 12);
  if ( (int *)(v364 - 12) != &dword_28898C0 )
    v226 = (unsigned int *)(v364 - 4);
        v227 = __ldrex(v226);
      while ( __strex(v227 - 1, v226) );
      v227 = (*v226)--;
    if ( v227 <= 0 )
      j_j_j_j_j__ZdlPv_9(v138);
  v139 = (void *)(v365 - 12);
  if ( (int *)(v365 - 12) != &dword_28898C0 )
    v228 = (unsigned int *)(v365 - 4);
        v229 = __ldrex(v228);
      while ( __strex(v229 - 1, v228) );
      v229 = (*v228)--;
    if ( v229 <= 0 )
      j_j_j_j_j__ZdlPv_9(v139);
  v140 = (void *)(v366 - 12);
  if ( (int *)(v366 - 12) != &dword_28898C0 )
    v230 = (unsigned int *)(v366 - 4);
        v231 = __ldrex(v230);
      while ( __strex(v231 - 1, v230) );
      v231 = (*v230)--;
    if ( v231 <= 0 )
      j_j_j_j_j__ZdlPv_9(v140);
  v141 = (void *)(v367 - 12);
  if ( (int *)(v367 - 12) != &dword_28898C0 )
    v232 = (unsigned int *)(v367 - 4);
        v233 = __ldrex(v232);
      while ( __strex(v233 - 1, v232) );
      v233 = (*v232)--;
    if ( v233 <= 0 )
      j_j_j_j_j__ZdlPv_9(v141);
  v142 = *(ServerInstance **)(v126 + 200);
  *(_DWORD *)(v126 + 200) = v136;
  if ( v142 )
    v143 = ServerInstance::~ServerInstance(v142);
    operator delete((void *)v143);
  v145 = v290;
  v144 = v289;
  if ( v289 != v290 )
    do
      v148 = (int *)(*(_DWORD *)v144 - 12);
      if ( v148 != &dword_28898C0 )
        v146 = (unsigned int *)(*(_DWORD *)v144 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v147 = __ldrex(v146);
          while ( __strex(v147 - 1, v146) );
        else
          v147 = (*v146)--;
        if ( v147 <= 0 )
          j_j_j_j_j__ZdlPv_9(v148);
      v144 = (char *)v144 + 4;
    while ( v144 != v145 );
    v144 = v289;
  if ( v144 )
    operator delete(v144);
  v149 = v293;
  v150 = v274;
  if ( v293 )
    v151 = (unsigned int *)(v293 + 4);
        v152 = __ldrex(v151);
      while ( __strex(v152 - 1, v151) );
      v152 = (*v151)--;
    if ( v152 == 1 )
      v153 = (unsigned int *)(v149 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v149 + 8))(v149);
          v154 = __ldrex(v153);
        while ( __strex(v154 - 1, v153) );
        v154 = (*v153)--;
      if ( v154 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v149 + 12))(v149);
  v155 = v295;
  if ( v295 )
    v156 = (unsigned int *)(v295 + 4);
        v157 = __ldrex(v156);
      while ( __strex(v157 - 1, v156) );
      v157 = (*v156)--;
    if ( v157 == 1 )
      v158 = (unsigned int *)(v155 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v155 + 8))(v155);
          v159 = __ldrex(v158);
        while ( __strex(v159 - 1, v158) );
        v159 = (*v158)--;
      if ( v159 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v155 + 12))(v155);
  v160 = (NetworkHandler *)(*(_QWORD *)(v126 + 336) >> 32);
  NetworkHandler::getLocalNetworkId((NetworkHandler *)&v368, *(_QWORD *)(v126 + 336));
  v161 = *(_DWORD *)(v126 + 220);
  for ( n = v150; v161; v161 = *(_DWORD *)(v161 + 8) )
    n = v161;
  v163 = v150;
  if ( n != v150 )
    if ( *(_BYTE *)(n + 16) )
      n = v150;
    v163 = n;
  BYTE3(v288) = ClientInstance::getClientSubId(*(ClientInstance **)(v163 + 20));
  NetworkHandler::setHostingPlayerIdentity(v160, (const NetworkIdentifier *)&v368, (const unsigned __int8 *)&v288 + 3);
  v164 = *(NetworkHandler **)(v126 + 336);
  NetworkHandler::getLocalNetworkId((NetworkHandler *)&v363, *(_DWORD *)(v126 + 336));
  v165 = *(_DWORD *)(v126 + 220);
  for ( ii = v150; v165; v165 = *(_DWORD *)(v165 + 8) )
    ii = v165;
  v167 = v126;
  v168 = v150;
  if ( ii != v150 )
    if ( *(_BYTE *)(ii + 16) )
      ii = v150;
    v168 = ii;
  BYTE2(v288) = ClientInstance::getClientSubId(*(ClientInstance **)(v168 + 20));
  NetworkHandler::setHostingPlayerIdentity(v164, (const NetworkIdentifier *)&v363, (const unsigned __int8 *)&v288 + 2);
  v169 = Minecraft::getServerNetworkHandler(*(Minecraft **)(*(_DWORD *)(v126 + 200) + 8));
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v286, *(_DWORD *)(v126 + 344));
  v271 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v286);
  v170 = v287;
  if ( v287 )
    v171 = (unsigned int *)(v287 + 4);
        v172 = __ldrex(v171);
      while ( __strex(v172 - 1, v171) );
      v172 = (*v171)--;
    if ( v172 == 1 )
      v173 = (unsigned int *)(v170 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v170 + 8))(v170);
          v174 = __ldrex(v173);
        while ( __strex(v174 - 1, v173) );
        v174 = (*v173)--;
      if ( v174 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v170 + 12))(v170);
  v175 = OfferRepository::isTrial(*(OfferRepository **)(v167 + 296));
  ServerNetworkHandler::setIsTrial((ServerNetworkHandler *)v169, v175);
  v176 = *(Social::MultiplayerServiceManager **)(v167 + 348);
  v177 = (NetworkHandler *)Minecraft::getNetworkHandler(*(Minecraft **)(*(_DWORD *)(v167 + 200) + 8));
  Social::MultiplayerServiceManager::setNetworkHandler(v176, v177);
  v178 = (Level *)Minecraft::getLevel(*(Minecraft **)(*(_DWORD *)(v167 + 200) + 8));
  v179 = Level::getLevelData(v178);
  v180 = v167;
  v181 = (*(int (**)(void))(*(_DWORD *)v167 + 136))();
  LevelData::setIsEduLevel((LevelData *)v179, v181);
  v182 = *(unsigned __int64 **)(v167 + 348);
  if ( Level::isMultiplayerGame(v178) == 1 )
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v183 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v183 = &ServiceLocator<AppPlatform>::mDefaultService;
    (*(void (**)(void))(**(_DWORD **)v183 + 408))();
  if ( Level::hasXBLBroadcast(v178) == 1 )
    Social::XboxLiveUserManager::checkPrivilegeSilently(v271, 254);
  Level::getXBLBroadcastMode(v178);
  Social::MultiplayerServiceManager::setShouldAdvertiseGame(v182);
  Social::MultiplayerServiceManager::setGameHostInfo(
    *(Social::MultiplayerServiceManager **)(v167 + 348),
    v178,
    *(_DWORD *)(v169 + 316));
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v184 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v184 = &ServiceLocator<AppPlatform>::mDefaultService;
  v185 = *(_DWORD *)v184;
  v186 = *(void (__fastcall **)(void **, _DWORD, signed int, int))(**(_DWORD **)v184 + 652);
    v187 = Social::XboxLiveUserManager::checkPrivilegeSilently(v271, 254);
    v187 = 0;
  v188 = Level::hasPlatformBroadcast(v178);
  v186(&v284, v185, v187, v188);
  v189 = *(_DWORD *)(v180 + 220);
  for ( jj = v150; v189; v189 = *(_DWORD *)(v189 + 8) )
    jj = v189;
  if ( jj == v150 )
    v269 = *(unsigned __int64 **)(v180 + 348);
    if ( !*(_BYTE *)(jj + 16) )
      v150 = jj;
  ClientInstance::getUser((ClientInstance *)&v282, *(_DWORD *)(v150 + 20));
  *(_QWORD *)&v191 = *(_QWORD *)&v284;
  v193 = v178;
  v194 = v282;
  v195 = v180;
  v196 = 0;
  v279 = 0;
  v280 = 0;
  v197 = (v285 - (signed int)v284) >> 2;
  v281 = 0;
  if ( v197 )
    if ( v197 >= 0x40000000 )
      sub_DA7414();
    v196 = operator new(v285 - (_DWORD)v284);
    *(_QWORD *)&v191 = *(_QWORD *)&v284;
  v279 = v196;
  v280 = (int)v196;
  v281 = (int)v196 + 4 * v197;
  v198 = (v192 - v191) >> 2;
  if ( 0 != v198 )
    _aeabi_memmove4(v196, v191);
  v280 = (int)v196 + 4 * v198;
  Social::MultiplayerServiceManager::onEnterLevel(v269, v194, v193, (int)&v279);
  if ( v279 )
    operator delete(v279);
  v199 = v283;
  if ( v283 )
    v200 = (unsigned int *)(v283 + 4);
        v201 = __ldrex(v200);
      while ( __strex(v201 - 1, v200) );
      v201 = (*v200)--;
    if ( v201 == 1 )
      v202 = (unsigned int *)(v199 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v199 + 8))(v199);
          v203 = __ldrex(v202);
        while ( __strex(v203 - 1, v202) );
        v203 = (*v202)--;
      if ( v203 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v199 + 12))(v199);
  Social::MultiplayerServiceManager::addObserver(*(_DWORD *)(v195 + 348), v169 + 8);
  Social::XboxLiveUserManager::addObserver((int)v271, v169 + 16);
  Social::XboxLiveUserManager::getXboxLiveBlockList((Social::XboxLiveUserManager *)&v277, (int)v271);
  v204 = v278;
  HIDWORD(v205) = v277;
  if ( (void *)v277 != v278 )
      v275 = 0;
      v276 = 0;
      v273 = 0;
      v274 = 0;
      ServerNetworkHandler::addToBlacklist(v169, (int)&v273, (int *)HIDWORD(v205));
      HIDWORD(v205) += 4;
    while ( v204 != (void *)HIDWORD(v205) );
    v205 = *(_QWORD *)&v277;
    if ( (void *)v277 != v278 )
      v206 = &v362;
        v210 = (int *)(*(_DWORD *)v205 - 12);
        if ( v210 != &dword_28898C0 )
          v207 = (unsigned int *)(*(_DWORD *)v205 - 4);
              v208 = __ldrex(v207);
            while ( __strex(v208 - 1, v207) );
            v208 = (*v207)--;
          if ( v208 <= 0 )
            v209 = v206;
            j_j_j_j_j__ZdlPv_9(v210);
            v206 = v209;
        LODWORD(v205) = v205 + 4;
      while ( (_DWORD)v205 != HIDWORD(v205) );
      HIDWORD(v205) = v277;
  if ( HIDWORD(v205) )
    operator delete((void *)HIDWORD(v205));
  v211 = ResourcePackManager::getStack(v268, 1);
  if ( (unsigned int)*(_QWORD *)(v211 + 4) != *(_QWORD *)(v211 + 4) >> 32 )
    v212 = Level::getLevelData(v193);
    LevelData::disableAchievements((LevelData *)v212);
  if ( OfferRepository::isTrial(*(OfferRepository **)(v195 + 296)) == 1 )
    v213 = Level::getLevelData(v193);
    LevelData::disableAchievements((LevelData *)v213);
  v214 = *(_DWORD *)(v195 + 408);
  if ( v214 )
    ServerNetworkHandler::setTenantId(v169, (int *)(v214 + 60));
    ServerNetworkHandler::setShareableIdentityToken(v169, (int *)(*(_DWORD *)(v195 + 408) + 72));
  OfferRepository::isGameLicensed(*(OfferRepository **)(v195 + 296));
  if ( v284 )
    operator delete(v284);
LABEL_269:
  std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::~deque((int)&v330 + 4);
  v7 = &v413;
LABEL_338:
  v249 = (RakNet *)v7[1];
  result = (RakNet *)(_stack_chk_guard - v249);
  if ( _stack_chk_guard != v249 )
    _stack_chk_fail(result);
  return result;
}


Options *__fastcall MinecraftGame::_deinitOptionObservers(MinecraftGame *this, ClientInstance *a2)
{
  MinecraftGame *v2; // r4@1
  Options *result; // r0@1
  int v4; // r4@3
  unsigned int *v5; // r1@4
  unsigned int *v6; // r5@10
  Options *v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@3

  v2 = this;
  ClientInstance::getOptionsPtr((ClientInstance *)&v7, (int)a2);
  result = v7;
  if ( v7 )
  {
    Options::unregisterObserver(v7, (void *)v2);
    result = (Options *)Options::unregisterLocks(v7, (void *)v2);
  }
  v4 = v8;
  if ( v8 )
    v5 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = (Options *)__ldrex(v5);
      while ( __strex((unsigned int)result - 1, v5) );
    }
    else
      result = (Options *)(*v5)--;
    if ( result == (Options *)1 )
      v6 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (Options *)__ldrex(v6);
        while ( __strex((unsigned int)result - 1, v6) );
      }
      else
        result = (Options *)(*v6)--;
      if ( result == (Options *)1 )
        result = (Options *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return result;
}


void __fastcall MinecraftGame::joinLiveGame(int a1, int *a2, int a3)
{
  MinecraftGame::joinLiveGame(a1, a2, a3);
}


void __fastcall MinecraftGame::~MinecraftGame(MinecraftGame *this)
{
  MinecraftGame::~MinecraftGame(this);
}


void __fastcall MinecraftGame::unMuteAudio(MinecraftGame *this)
{
  SoundEngine *v1; // r0@1

  v1 = (SoundEngine *)*((_DWORD *)this + 66);
  if ( v1 )
    j_j_j__ZN11SoundEngine6unMuteEv(v1);
  else
    JUMPOUT(0, MinecraftGame::setResourcePacksInfoData);
}


void __fastcall MinecraftGame::runRegionalOfferChecks(MinecraftGame *this)
{
  MinecraftGame::runRegionalOfferChecks(this);
}


unsigned int __fastcall MinecraftGame::releaseClientSubId(MinecraftGame *this, int a2)
{
  MinecraftGame *v2; // r4@1
  char *v3; // r8@1
  int v4; // r0@1
  unsigned int v5; // r6@1
  int v6; // r7@1
  int *v7; // r0@2
  unsigned int v8; // r1@2
  int v9; // r0@5
  unsigned int result; // r0@6
  int v11; // r5@11
  _BYTE *v12; // r0@15

  v2 = this;
  v3 = (char *)this + 180;
  v4 = *((_DWORD *)this + 46);
  v5 = a2;
  v6 = (int)v3;
  if ( v4 )
  {
    do
    {
      v6 = v4;
      v7 = (int *)(v4 + 12);
      v8 = *(_BYTE *)(v6 + 16);
      if ( v8 > v5 )
        v7 = (int *)(v6 + 8);
      v4 = *v7;
    }
    while ( v4 );
    v9 = v6;
    if ( v8 <= v5 )
LABEL_8:
      result = *(_BYTE *)(v9 + 16);
      if ( result >= v5 )
        return result;
      goto LABEL_9;
  }
  result = *((_DWORD *)v2 + 47);
  if ( v6 != result )
    v9 = sub_DA7F9C(v6);
    goto LABEL_8;
LABEL_9:
  if ( v6 )
    if ( v3 == (char *)v6 )
      v11 = 1;
    else
      v11 = 0;
      if ( *(_BYTE *)(v6 + 16) > v5 )
        v11 = 1;
    v12 = operator new(0x14u);
    v12[16] = v5;
    sub_DA7FAC(v11, (int)v12, v6, (int)v3);
    result = *((_DWORD *)v2 + 49) + 1;
    *((_DWORD *)v2 + 49) = result;
  return result;
}


int __fastcall MinecraftGame::hasNetworkPrivileges(MinecraftGame *this, bool a2)
{
  int v2; // r6@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r7@8
  unsigned int v6; // r0@10
  void *v7; // r0@16
  Options *v9; // [sp+4h] [bp-1Ch]@1
  int v10; // [sp+8h] [bp-18h]@1

  MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v9, (int)this);
  Options::getCanUseCellularData(v9);
  v2 = v10;
  if ( v10 )
  {
    v3 = (unsigned int *)(v10 + 4);
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
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v7 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v7 = &ServiceLocator<AppPlatform>::mDefaultService;
  return (*(int (**)(void))(**(_DWORD **)v7 + 408))();
}


void __fastcall MinecraftGame::joinLiveGame(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  void *v5; // r4@1
  void *v6; // r7@1
  void *v7; // r0@3
  void *v8; // r0@4
  int v9; // r2@5
  int v10; // r0@5
  int v11; // r6@5
  int i; // r1@5
  int v13; // r5@10
  int v14; // r4@10
  unsigned int *v15; // r1@11
  unsigned int v16; // r0@13
  unsigned int *v17; // r5@17
  unsigned int v18; // r0@19
  void *v19; // r0@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  unsigned int *v22; // r2@32
  signed int v23; // r1@34
  unsigned int *v24; // r2@36
  signed int v25; // r1@38
  void *v26; // [sp+4h] [bp-54h]@10
  int v27; // [sp+Ch] [bp-4Ch]@10
  char v28; // [sp+10h] [bp-48h]@10
  int v29; // [sp+14h] [bp-44h]@10
  int v30; // [sp+18h] [bp-40h]@1
  int v31; // [sp+1Ch] [bp-3Ch]@1
  int v32; // [sp+20h] [bp-38h]@1
  int v33; // [sp+24h] [bp-34h]@1
  int v34; // [sp+28h] [bp-30h]@1
  int v35; // [sp+2Ch] [bp-2Ch]@1
  void *v36; // [sp+30h] [bp-28h]@1
  void (*v37)(void); // [sp+38h] [bp-20h]@1
  int (__fastcall *v38)(int **); // [sp+3Ch] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  v30 = a1;
  sub_DA73B4(&v31, a2);
  v32 = v4;
  v5 = operator new(0x38u);
  v33 = v30;
  sub_DA73B4(&v34, &v31);
  v35 = v32;
  v37 = 0;
  v6 = operator new(0xCu);
  *(_DWORD *)v6 = v33;
  sub_DA73B4((int *)v6 + 1, &v34);
  *((_DWORD *)v6 + 2) = v35;
  v36 = v6;
  v37 = (void (*)(void))sub_C1BDAC;
  v38 = sub_C1BD48;
  GameServerConnectProgressHandler::GameServerConnectProgressHandler((int)v5, 1, (int)&v36, 0);
  if ( v37 )
    v37();
  v7 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v34 - 4);
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
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v31 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  v9 = *(_DWORD *)(v3 + 220);
  v10 = v3 + 216;
  v11 = *(_DWORD *)(v3 + 104);
  for ( i = v3 + 216; v9; v9 = *(_DWORD *)(v9 + 8) )
    i = v9;
  if ( i != v10 && !*(_BYTE *)(i + 16) )
    v10 = i;
  v13 = ClientInstance::getSceneFactory(*(ClientInstance **)(v10 + 20));
  sub_DA7364((void **)&v27, "joining_xboxLive_game");
  v26 = v5;
  SceneFactory::createNetworkProgressScreen((unsigned __int64 *)&v28, v13, &v27, (int *)&v26);
  SceneStack::pushScreen(v11, (int)&v28, 0);
  v14 = v29;
  if ( v29 )
    v15 = (unsigned int *)(v29 + 4);
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
  if ( v26 )
    (*(void (**)(void))(*(_DWORD *)v26 + 4))();
  v26 = 0;
  v19 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v27 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v19);
}


void __fastcall MinecraftGame::onTick(MinecraftGame *this)
{
  MinecraftGame::onTick(this);
}


signed int __fastcall MinecraftGame::tryGetIdForNewSubClient(MinecraftGame *this, int a2, unsigned __int8 *a3)
{
  unsigned __int8 *v3; // r4@1
  int v4; // r6@1
  MinecraftGame *v5; // r5@1
  unsigned int v6; // r7@3
  signed int result; // r0@5

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( MinecraftGame::isSplitscreenJoinEnabled(this) == 1
    && *((_DWORD *)v5 + 49)
    && (v6 = *(_BYTE *)(*((_DWORD *)v5 + 47) + 16),
        !Social::UserManager::userHasClient(*((Social::UserManager **)v5 + 86), v4))
    && v6 <= *((_DWORD *)v5 + 125) )
  {
    *v3 = v6;
    result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall MinecraftGame::initPost(MinecraftGame *this)
{
  MinecraftGame::initPost(this);
}


int __fastcall MinecraftGame::getPrimaryCameraEntity(MinecraftGame *this)
{
  int v1; // r2@1
  char *v2; // r0@1
  char *i; // r1@1

  v1 = *((_DWORD *)this + 55);
  v2 = (char *)this + 216;
  for ( i = v2; v1; v1 = *(_DWORD *)(v1 + 8) )
    i = (char *)v1;
  if ( i != v2 && !i[16] )
    v2 = i;
  return j_j_j__ZNK14ClientInstance15getCameraEntityEv(*((ClientInstance **)v2 + 5));
}


void __fastcall MinecraftGame::teardownRenderer(MinecraftGame *this, int a2)
{
  MinecraftGame::teardownRenderer(this, a2);
}
