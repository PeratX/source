

int __fastcall ClientInstance::requestImageFromUrl(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  void (__fastcall *v5)(int *, int, signed int); // r3@1
  int *v6; // r4@1
  int result; // r0@3
  int v8; // [sp+0h] [bp-20h]@2
  int (*v9)(void); // [sp+8h] [bp-18h]@1
  int v10; // [sp+Ch] [bp-14h]@2

  v3 = *(_DWORD *)(a1 + 620);
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
  result = ServerContentService::fetchImageData(v3, v6, (int)&v8);
  if ( v9 )
    result = v9();
  return result;
}


void __fastcall ClientInstance::clearInProgressBAI(ClientInstance *this)
{
  ClientInstance *v1; // r1@1
  void *v2; // r0@1

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 24);
  if ( v2 )
  {
    *((_DWORD *)v1 + 24) = 0;
    j_j_j__ZdlPv_3(v2);
  }
}


int __fastcall ClientInstance::teardown(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int v2; // r0@1
  int result; // r0@3

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 8) + 16))();
  v2 = *((_DWORD *)v1 + 10);
  *((_DWORD *)v1 + 10) = 0;
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  result = (*(int (**)(void))(**((_DWORD **)v1 + 17) + 44))();
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 22) = 0;
  *((_DWORD *)v1 + 23) = 0;
  return result;
}


int __fastcall ClientInstance::_onScreenSizeVariablesChanged(ClientInstance *a1, int a2)
{
  ClientInstance *v3; // r4@1
  Options *v8; // r0@1
  void *v11; // r0@1
  int result; // r0@1
  void *v13; // [sp+0h] [bp-30h]@1
  int (__cdecl *v14)(void **); // [sp+8h] [bp-28h]@1
  signed int (__fastcall *v15)(_QWORD **, _DWORD *); // [sp+Ch] [bp-24h]@1

  _R5 = a2;
  v3 = a1;
  __asm
  {
    VLDR            S0, [R5,#8]
    VLDR            S2, [R5,#0xC]
    VCVTR.S32.F32   S16, S0
    VCVTR.S32.F32   S18, S2
  }
  v8 = (Options *)ClientInstance::getOptions(a1);
    VMOV            R1, S16
    VMOV            R2, S18
  Options::onScreenSizeChanged(v8, _R1, _R2);
    VLDR            S16, [R5,#0x10]
    VLDR            S18, [R5,#0x14]
  v11 = operator new(8u);
    VCVTR.S32.F32   S0, S18
    VCVTR.S32.F32   S2, S16
  v13 = v11;
    VSTR            S2, [R0]
    VSTR            S0, [R0,#4]
  v14 = (int (__cdecl *)(void **))sub_BEBB5C;
  v15 = sub_BEBB42;
  result = ClientInstance::forEachScreen((int)v3, (int)&v13, 1);
  if ( v14 )
    result = v14(&v13);
  return result;
}


void __fastcall ClientInstance::initializeTrialWorld(ClientInstance *this, Player *a2)
{
  ClientInstance::initializeTrialWorld(this, a2);
}


  if ( ClientInstance::getLevel(*(ClientInstance **)(v8 + 20)) )
{
    v9 = *(_DWORD *)(v2 + 220);
    for ( j = v2 + 216; v9; v9 = *(_DWORD *)(v9 + 8) )
      j = v9;
    v11 = v2 + 216;
    if ( j != v5 )
    {
      if ( *(_BYTE *)(j + 16) )
        j = v2 + 216;
      v11 = j;
    }
    v12 = (Player *)ClientInstance::getLocalPlayer(*(ClientInstance **)(v11 + 20));
    v13 = (PlayerCommandOrigin *)operator new(0x18u);
    PlayerCommandOrigin::PlayerCommandOrigin(v13, v12);
    sub_DA7364((void **)&v31, "/difficulty ");
    sub_DA7364((void **)&v30, "normal");
    if ( v6 )
      if ( v6 == 1 )
      {
        sub_DA78A4((void **)&v30, "easy", (_BYTE *)4);
      }
      else if ( v6 == 3 )
        sub_DA78A4((void **)&v30, "hard", (_BYTE *)4);
    else
      sub_DA78A4((void **)&v30, "peaceful", (_BYTE *)8);
    sub_DA73B4(&v29, &v31);
    sub_DA7564((const void **)&v29, (const void **)&v30);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v31, &v29);
    v14 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v29 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      else
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
    v15 = *(_DWORD *)(v2 + 220);
    for ( k = v2 + 216; v15; v15 = *(_DWORD *)(v15 + 8) )
      k = v15;
    if ( k != v5 && !*(_BYTE *)(k + 16) )
      v5 = k;
    v17 = (Minecraft *)ClientInstance::getServerData(*(ClientInstance **)(v5 + 20));
    v18 = Minecraft::getCommands(v17);
    v28 = v13;
    v27 = MinecraftCommands::requestCommandExecution(v18, (int *)&v28, &v31, 3, 0);
    MCRESULT::isSuccess((MCRESULT *)&v27);
    if ( v28 )
      (*(void (**)(void))(*(_DWORD *)v28 + 4))();
    v28 = 0;
    v19 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v30 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9(v19);
    v20 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v31 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9(v20);
  }
}


int __fastcall ClientInstance::isInGame(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int result; // r0@2
  SceneStack *v3; // r0@5
  int v4; // r0@5

  v1 = this;
  if ( SceneStack::isEmpty(*((SceneStack **)this + 154)) )
  {
    result = 0;
  }
  else
    if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v1 + 6)) != v1
      || SceneStack::isEmpty(*((SceneStack **)v1 + 154)) != 1 )
    {
      v4 = SceneStack::getScreen(*((SceneStack **)v1 + 154));
    }
    else
      v3 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v1 + 6));
      v4 = SceneStack::getScreen(v3);
    result = (*(int (**)(void))(*(_DWORD *)v4 + 168))() ^ 1;
  return result;
}


int __fastcall ClientInstance::isVRTransitioning(ClientInstance *this)
{
  signed int v5; // r1@1
  signed int v6; // r0@1

  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S2, [R0,#0x6C]
  }
  v5 = 0;
  v6 = 0;
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, #0.0
  if ( _NF ^ _VF )
    v5 = 1;
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v6 = 1;
  return v6 & v5;
}


void __fastcall ClientInstance::showPlayerProfile(int a1, int *a2, __int64 a3, __int64 a4)
{
  int *v4; // r4@1
  int v5; // r5@1
  int v6; // r6@3
  int v7; // r4@3
  unsigned int *v8; // r1@4
  unsigned int v9; // r0@6
  __int64 *v10; // r0@8
  unsigned int *v11; // r5@11
  unsigned int v12; // r0@13
  int v13; // [sp+0h] [bp-28h]@3
  int v14; // [sp+4h] [bp-24h]@3
  __int64 v15; // [sp+8h] [bp-20h]@1
  __int64 v16; // [sp+10h] [bp-18h]@1

  v4 = a2;
  v5 = a1;
  v15 = a3;
  v16 = a4;
  if ( MinecraftGame::useMinecraftVersionOfXBLUI(*(MinecraftGame **)(a1 + 24))
    || MinecraftGame::isWin10MobileDevice(*(MinecraftGame **)(v5 + 24)) == 1 )
  {
    v6 = *(_DWORD *)(v5 + 616);
    SceneFactory::createXblGamerProfileCardScreen((unsigned __int64 *)&v13, *(_DWORD *)(v5 + 76), v4, (int)&v15);
    SceneStack::pushScreen(v6, (int)&v13, 0);
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
        v11 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    }
  }
  else
    v10 = (__int64 *)MinecraftGame::getMultiplayerServiceManager(*(MinecraftGame **)(v5 + 24));
    j_j_j__ZN6Social25MultiplayerServiceManager17showPlayerProfileERKSsNS_28MultiplayerServiceIdentifierE(
      v10,
      (int)v4,
      0);
}


int __fastcall ClientInstance::ClientInstance(int a1, int a2, int a3, char a4)
{
  int v4; // r4@1
  char v5; // r5@1
  MinecraftKeyboardManager *v6; // r6@1
  int v7; // r12@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r7@1
  int v11; // r12@1
  int v12; // r2@1
  int v13; // r3@1
  int v14; // r0@1
  double v15; // r0@1
  double v16; // r0@1
  int v17; // r6@3
  void *v18; // r5@3
  unsigned int v19; // r0@4
  int v20; // r6@6
  void *v21; // r5@6

  v4 = a1;
  v5 = a4;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26D63C0;
  *(_DWORD *)(a1 + 4) = &off_26D63EC;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = a3;
  *(_DWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  v6 = (MinecraftKeyboardManager *)operator new(0x30u);
  MinecraftKeyboardManager::MinecraftKeyboardManager(v6, (ClientInstance *)v4);
  *(_DWORD *)(v4 + 68) = v6;
  *(_DWORD *)(v4 + 96) = 0;
  *(_DWORD *)(v4 + 100) = 0;
  *(_DWORD *)(v4 + 88) = 0;
  *(_DWORD *)(v4 + 92) = 0;
  *(_DWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 84) = 0;
  *(_DWORD *)(v4 + 72) = 0;
  *(_DWORD *)(v4 + 76) = 0;
  *(_DWORD *)(v4 + 104) = 1065353216;
  *(_DWORD *)(v4 + 108) = 1065353216;
  *(_BYTE *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 116) = 0;
  *(_BYTE *)(v4 + 120) = 0;
  *(_BYTE *)(v4 + 121) = 0;
  *(_DWORD *)(v4 + 124) = 0;
  *(_BYTE *)(v4 + 128) = 0;
  *(_BYTE *)(v4 + 129) = 0;
  *(_DWORD *)(v4 + 140) = 0;
  *(_DWORD *)(v4 + 132) = operator new(1u);
  *(_DWORD *)(v4 + 140) = ZNSt14_Function_base13_Base_managerIN14ClientInstance16mCreditsCallbackMUlvE_EE10_M_managerERSt9_Any_dataRKS4_St18_Manager_operation;
  *(_DWORD *)(v4 + 144) = ZNSt17_Function_handlerIFvvEN14ClientInstance16mCreditsCallbackMUlvE_EE9_M_invokeERKSt9_Any_data;
  *(_DWORD *)(v4 + 152) = 0;
  *(_DWORD *)(v4 + 156) = 0;
  *(_DWORD *)(v4 + 164) = &unk_28898CC;
  *(_DWORD *)(v4 + 168) = 0;
  *(_DWORD *)(v4 + 172) = 0;
  *(_DWORD *)(v4 + 176) = 0;
  *(_DWORD *)(v4 + 180) = 0;
  *(_DWORD *)(v4 + 184) = 0;
  *(_DWORD *)(v4 + 188) = 1065353216;
  *(_DWORD *)(v4 + 192) = 0;
  mce::Camera::Camera((mce::Camera *)(v4 + 196));
  v7 = v4 + 564;
  v8 = unk_283E634;
  v9 = unk_283E638;
  v10 = unk_283E63C;
  *(float *)v7 = Color::BLACK;
  *(_DWORD *)(v7 + 4) = v8;
  *(_DWORD *)(v7 + 8) = v9;
  *(_DWORD *)(v7 + 12) = v10;
  v11 = v4 + 584;
  v12 = unk_283E634;
  v13 = unk_283E638;
  v14 = unk_283E63C;
  *(float *)v11 = Color::BLACK;
  *(_DWORD *)(v11 + 4) = v12;
  *(_DWORD *)(v11 + 8) = v13;
  *(_DWORD *)(v4 + 596) = v14;
  _aeabi_memclr4(v4 + 604, 64);
  *(_BYTE *)(v4 + 668) = v5;
  *(_DWORD *)(v4 + 688) = 0;
  *(_DWORD *)(v4 + 692) = 0;
  *(_BYTE *)(v4 + 680) = 0;
  *(_DWORD *)(v4 + 672) = 0;
  *(_DWORD *)(v4 + 676) = 0;
  *(_DWORD *)(v4 + 696) = -1082130432;
  _aeabi_memclr4(v4 + 700, 40);
  std::_Deque_base<std::string,std::allocator<std::string>>::_M_initialize_map(v4 + 700, 0);
  *(_DWORD *)(v4 + 748) = 0;
  *(_DWORD *)(v4 + 752) = 0;
  *(_DWORD *)(v4 + 756) = 1065353216;
  *(_DWORD *)(v4 + 760) = 0;
  LODWORD(v15) = v4 + 756;
  v16 = COERCE_DOUBLE(__PAIR__(10, sub_DA7744(v15)));
  *(_DWORD *)(v4 + 744) = LODWORD(v16);
  if ( LODWORD(v16) == 1 )
  {
    v18 = (void *)(v4 + 764);
    *(_DWORD *)(v4 + 764) = 0;
  }
  else
    if ( LODWORD(v16) >= 0x40000000 )
      sub_DA7414();
    v17 = 4 * LODWORD(v16);
    v18 = operator new(4 * LODWORD(v16));
    _aeabi_memclr4(v18, v17);
  *(_DWORD *)(v4 + 740) = v18;
  *(_DWORD *)(v4 + 776) = 0;
  *(_DWORD *)(v4 + 780) = 0;
  *(_DWORD *)(v4 + 784) = 1065353216;
  *(_DWORD *)(v4 + 788) = 0;
  LODWORD(v16) = v4 + 784;
  v19 = sub_DA7744(v16);
  *(_DWORD *)(v4 + 772) = v19;
  if ( v19 == 1 )
    v21 = (void *)(v4 + 792);
    *(_DWORD *)(v4 + 792) = 0;
    if ( v19 >= 0x40000000 )
    v20 = 4 * v19;
    v21 = operator new(4 * v19);
    _aeabi_memclr4(v21, v20);
  *(_DWORD *)(v4 + 768) = v21;
  return v4;
}


int __fastcall ClientInstance::setRealityModeFrameFactor(int result, const float *a2)
{
  *(float *)(result + 108) = *a2;
  return result;
}


void __fastcall ClientInstance::startExternalNetworkWorld(int a1, int a2, int *a3)
{
  ClientInstance::startExternalNetworkWorld(a1, a2, a3);
}


void __fastcall ClientInstance::_loadProfanityFilter(ClientInstance *this)
{
  ClientInstance *v1; // r8@1
  void *v2; // r0@2
  int v3; // r5@4
  __int64 v4; // kr00_8@4
  void *v5; // r0@4
  void *v6; // r0@5
  int *v7; // r5@6
  int *v8; // r4@7
  int *v9; // r6@7
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  void *v16; // r0@24
  int v17; // r11@25
  int v18; // r4@25
  char v19; // r9@25
  int v20; // r10@25
  signed int v21; // r8@27
  int v22; // r0@29
  char v23; // r6@29
  __int16 v24; // r7@31
  int *v25; // r1@35
  _DWORD *v26; // r0@36
  void *v27; // r5@38
  UIProfanityContext *v28; // r0@38
  UIProfanityContext *v29; // r0@39
  int *v30; // r4@40
  int *v31; // r6@40
  unsigned int *v32; // r2@42
  signed int v33; // r1@44
  int *v34; // r0@50
  void *v35; // r0@55
  unsigned int *v36; // r2@65
  signed int v37; // r1@67
  unsigned __int64 *v38; // [sp+4h] [bp-6Ch]@7
  int v39; // [sp+8h] [bp-68h]@7
  int *v40; // [sp+10h] [bp-60h]@6
  ClientInstance *v41; // [sp+14h] [bp-5Ch]@1
  char v42; // [sp+1Ch] [bp-54h]@35
  int v43; // [sp+24h] [bp-4Ch]@27
  int v44; // [sp+28h] [bp-48h]@7
  int *v45; // [sp+2Ch] [bp-44h]@6
  int *v46; // [sp+30h] [bp-40h]@6
  int v47; // [sp+3Ch] [bp-34h]@4
  int v48; // [sp+40h] [bp-30h]@4
  int v49; // [sp+44h] [bp-2Ch]@4

  v1 = this;
  v41 = this;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  v3 = *(_DWORD *)v2;
  v4 = *(_QWORD *)(**(_DWORD **)v2 + 372);
  sub_DA7364((void **)&v47, "profanity_filter.wlist");
  ((void (__fastcall *)(int *, int, int *))v4)(&v48, v3, &v47);
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(v4))(&v49, v3, &v48);
  v5 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v48 - 4);
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
      j_j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v47 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  Util::splitLines((int)&v45, &v49);
  v7 = v45;
  v40 = v46;
  if ( v45 != v46 )
    v39 = (int)v1 + 740;
    v38 = (unsigned __int64 *)((char *)v1 + 768);
    v8 = &v44;
    v9 = &dword_28898C0;
    do
      Util::stringTrim(v8, v7);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v7, v8);
      v16 = (void *)(v44 - 12);
      if ( (int *)(v44 - 12) != v9 )
      {
        v14 = (unsigned int *)(v44 - 4);
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
          j_j_j_j_j__ZdlPv_9(v16);
      }
      v17 = *v7;
      v18 = 0;
      v19 = 0;
      v20 = *(_DWORD *)(*v7 - 12);
      while ( 1 )
        v21 = j_utf8proc_iterate(v17, v20, &v43);
        if ( v21 < 1 )
          break;
        if ( (unsigned int)(v43 - 1) <= 0x7E )
          v22 = *v7;
          v23 = 0;
          if ( (unsigned __int8)v43 == 32 )
            v23 = 1;
          v24 = *(_WORD *)(tolower_tab_ + 2 * (unsigned __int8)v43 + 2);
          if ( *(_DWORD *)(v22 - 4) >= 0 )
          {
            sub_DA73C4((const void **)v7);
            v22 = *v7;
          }
          v19 |= v23;
          *(_BYTE *)(v22 + v18) = v24;
        v20 -= v21;
        v17 += v21;
        v18 += v21;
      if ( v19 & 1 )
        std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<std::string &>(
          &v42,
          v38,
          v7);
        v1 = v41;
        v25 = v40;
        v8 = &v44;
        v9 = &dword_28898C0;
      else
        v26 = (_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                          v39,
                          (int **)v7);
        *v26 = 1;
      ++v7;
    while ( v7 != v25 );
  v27 = operator new(0x38u);
  UIProfanityContext::UIProfanityContext((int)v27, (int)v1 + 740, (int)v1 + 768);
  v28 = (UIProfanityContext *)*((_DWORD *)v1 + 156);
  *((_DWORD *)v1 + 156) = v27;
  if ( v28 )
    v29 = UIProfanityContext::~UIProfanityContext(v28);
    operator delete((void *)v29);
  v31 = v46;
  v30 = v45;
      v34 = (int *)(*v30 - 12);
      if ( v34 != &dword_28898C0 )
        v32 = (unsigned int *)(*v30 - 4);
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j_j__ZdlPv_9(v34);
      ++v30;
    while ( v30 != v31 );
    v30 = v45;
  if ( v30 )
    operator delete(v30);
  v35 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v49 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9(v35);
}


void __fastcall ClientInstance::~ClientInstance(ClientInstance *this)
{
  ClientInstance *v1; // r0@1

  v1 = ClientInstance::~ClientInstance(this);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall ClientInstance::onFullVanillaPackOnStack(int result)
{
  *(_BYTE *)(result + 36) = 1;
  return result;
}


signed int __fastcall ClientInstance::isInBedScreen(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  signed int v2; // r4@2
  int v3; // r0@3
  void *v4; // r0@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  SceneStack::getScreenName((SceneStack *)&v8, *((__int64 **)this + 154));
  if ( sub_DA7374((const void **)&v8, "in_bed_screen") )
  {
    v2 = 0;
  }
  else
    v3 = SceneStack::getScheduledPopCount(*((SceneStack **)v1 + 154));
    if ( !v3 )
      v2 = 1;
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
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
  return v2;
}


void __fastcall ClientInstance::requestScreenshot(int a1, int a2)
{
  ClientInstance::requestScreenshot(a1, a2);
}


void __fastcall ClientInstance::navigateToPurchaseOfferScreen(int a1, StoreCatalogItemModel *a2, int a3)
{
  ClientInstance::navigateToPurchaseOfferScreen(a1, a2, a3);
}


void __fastcall ClientInstance::createUserAuthentication(int a1, int a2, unsigned int a3, unsigned int a4, const void **a5)
{
  int v5; // r4@1
  unsigned int v6; // r8@1
  unsigned int v7; // r6@1
  const ClientInstance *v8; // r0@1
  int v9; // r5@2
  void *v10; // r7@2
  UserAuthentication *v11; // r0@2
  UserAuthentication *v12; // r0@3
  int v13; // r4@4
  unsigned int *v14; // r1@5
  unsigned int v15; // r0@7
  unsigned int *v16; // r5@11
  unsigned int v17; // r0@13
  int v18; // [sp+8h] [bp-20h]@1
  int v19; // [sp+Ch] [bp-1Ch]@4

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = (const ClientInstance *)MinecraftGame::getUserManager(*(MinecraftGame **)(a1 + 24));
  Social::UserManager::getUser((Social::UserManager *)&v18, v8, v5);
  if ( v18 )
  {
    v9 = MinecraftGame::getRealms(*(MinecraftGame **)(v5 + 24));
    v10 = operator new(0x38u);
    UserAuthentication::UserAuthentication((int)v10, v5, __PAIR__(v6, v7), a5, v9);
    v11 = *(UserAuthentication **)(v5 + 72);
    *(_DWORD *)(v5 + 72) = v10;
    if ( v11 )
    {
      v12 = UserAuthentication::~UserAuthentication(v11);
      operator delete((void *)v12);
    }
  }
  v13 = v19;
  if ( v19 )
    v14 = (unsigned int *)(v19 + 4);
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


int __fastcall ClientInstance::isHoloCursorNeeded(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  SceneStack *v2; // r0@3
  int v3; // r0@3

  v1 = this;
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) != this
    || SceneStack::isEmpty(*((SceneStack **)v1 + 154)) != 1 )
  {
    v3 = SceneStack::getScreen(*((SceneStack **)v1 + 154));
  }
  else
    v2 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v1 + 6));
    v3 = SceneStack::getScreen(v2);
  return (*(int (**)(void))(*(_DWORD *)v3 + 168))();
}


void __fastcall ClientInstance::_startExternalNetworkWorld(int a1, const Social::GameConnectionInfo *a2, int *a3)
{
  int v3; // r7@1
  int *v4; // r5@1
  const Social::GameConnectionInfo *v5; // r6@1
  const ClientInstance *v6; // r0@1
  Social::XboxLiveUserManager *v7; // r9@1
  _WORD *v8; // r0@1
  int v9; // r5@1
  void *v10; // r1@1
  void *v11; // r1@1
  void *v12; // r1@1
  int *v13; // r2@1
  unsigned int v14; // r1@1
  int v15; // r0@1
  bool v16; // zf@1
  int v17; // r3@1
  int v18; // r7@1
  int v19; // r7@2
  void *v20; // r1@6
  void *v21; // r1@6
  char v22; // r0@6
  __int64 v23; // r0@6
  void *v24; // r0@8
  char *v25; // r0@9
  char *v26; // r0@10
  char *v27; // r0@11
  void *v28; // r0@12
  int v29; // r4@13
  unsigned int *v30; // r1@14
  unsigned int v31; // r0@16
  unsigned int *v32; // r5@20
  unsigned int v33; // r0@22
  unsigned int *v34; // r2@28
  signed int v35; // r1@30
  unsigned int *v36; // r2@32
  signed int v37; // r1@34
  unsigned int *v38; // r2@36
  signed int v39; // r1@38
  unsigned int *v40; // r2@40
  signed int v41; // r1@42
  unsigned int *v42; // r2@44
  signed int v43; // r1@46
  __int16 v44; // [sp+8h] [bp-88h]@1
  void *v45; // [sp+Ch] [bp-84h]@1
  void *v46; // [sp+10h] [bp-80h]@1
  int v47; // [sp+14h] [bp-7Ch]@1
  void *v48; // [sp+18h] [bp-78h]@1
  int *v49; // [sp+1Ch] [bp-74h]@1
  unsigned int v50; // [sp+20h] [bp-70h]@1
  int v51; // [sp+24h] [bp-6Ch]@1
  int v52; // [sp+28h] [bp-68h]@1
  int v53; // [sp+2Ch] [bp-64h]@1
  int v54; // [sp+30h] [bp-60h]@1
  int v55; // [sp+34h] [bp-5Ch]@1
  void *v56; // [sp+38h] [bp-58h]@6
  void *v57; // [sp+3Ch] [bp-54h]@6
  char v58; // [sp+40h] [bp-50h]@6
  int v59; // [sp+44h] [bp-4Ch]@1
  int v60; // [sp+48h] [bp-48h]@6
  void (*v61)(void); // [sp+50h] [bp-40h]@1
  int v62; // [sp+5Ch] [bp-34h]@1
  Social::User *v63; // [sp+60h] [bp-30h]@1
  int v64; // [sp+64h] [bp-2Ch]@13

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (const ClientInstance *)MinecraftGame::getUserManager(*(MinecraftGame **)(a1 + 24));
  Social::UserManager::getUser((Social::UserManager *)&v63, v6, v3);
  v7 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v63);
  sub_DA7364((void **)&v62, (const char *)&unk_257BC67);
  Social::GameConnectionInfo::GameConnectionInfo((Social::GameConnectionInfo *)&v44, v5);
  sub_DA73B4(&v59, v4);
  v61 = 0;
  v8 = operator new(0x44u);
  v9 = (int)v8;
  *(_DWORD *)v8 = v3;
  v8[2] = v44;
  v10 = v45;
  v45 = &unk_28898CC;
  *((_DWORD *)v8 + 2) = v10;
  v11 = v46;
  v46 = &unk_28898CC;
  *((_DWORD *)v8 + 3) = v11;
  *((_DWORD *)v8 + 4) = v47;
  v12 = v48;
  v48 = &unk_28898CC;
  *((_DWORD *)v8 + 5) = v12;
  v13 = v49;
  v14 = v50;
  v15 = v51;
  v16 = &v55 == v49;
  v17 = v52;
  *(_DWORD *)(v9 + 24) = v49;
  *(_DWORD *)(v9 + 28) = v14;
  *(_DWORD *)(v9 + 32) = v15;
  *(_DWORD *)(v9 + 36) = v17;
  v18 = v54;
  *(_DWORD *)(v9 + 40) = v53;
  *(_DWORD *)(v9 + 44) = v18;
  if ( v16 )
  {
    v19 = v9 + 48;
    *(_DWORD *)(v9 + 24) = v9 + 48;
    *(_DWORD *)(v9 + 48) = *v13;
  }
  else
    v19 = (int)v13;
  if ( v15 )
    *(_DWORD *)(v19 + 4 * (*(_DWORD *)(v15 + 8) % v14)) = v9 + 32;
  v54 = 0;
  v50 = 1;
  v55 = 0;
  v49 = &v55;
  v51 = 0;
  v52 = 0;
  v20 = v56;
  v56 = &unk_28898CC;
  *(_DWORD *)(v9 + 52) = v20;
  v21 = v57;
  v57 = &unk_28898CC;
  v22 = v58;
  *(_DWORD *)(v9 + 56) = v21;
  *(_BYTE *)(v9 + 60) = v22;
  sub_DA73B4((int *)(v9 + 64), &v59);
  LODWORD(v23) = sub_BEA6B8;
  v60 = v9;
  HIDWORD(v23) = sub_BE9568;
  *(_QWORD *)&v61 = v23;
  Social::XboxLiveUserManager::checkPrivilegeWithUIAsync(v7, 254, (int)&v62, (int)&v60);
  if ( v61 )
    v61();
  v24 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v59 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
    }
    else
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
  ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v49);
  v25 = (char *)v48 - 12;
  if ( (int *)((char *)v48 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)((char *)v48 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9(v25);
  v26 = (char *)v46 - 12;
  if ( (int *)((char *)v46 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)((char *)v46 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9(v26);
  v27 = (char *)v45 - 12;
  if ( (int *)((char *)v45 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)((char *)v45 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v62 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9(v28);
  v29 = v64;
  if ( v64 )
    v30 = (unsigned int *)(v64 + 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 == 1 )
      v32 = (unsigned int *)(v29 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 8))(v29);
      if ( &pthread_create )
      {
        __dmb();
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
      }
      else
        v33 = (*v32)--;
      if ( v33 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 12))(v29);
}


int __fastcall ClientInstance::getScreen(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  SceneStack *v2; // r0@3
  int result; // r0@3

  v1 = this;
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) != this
    || SceneStack::isEmpty(*((SceneStack **)v1 + 154)) != 1 )
  {
    result = SceneStack::getScreen(*((SceneStack **)v1 + 154));
  }
  else
    v2 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v1 + 6));
    result = SceneStack::getScreen(v2);
  return result;
}


signed int __fastcall ClientInstance::isHoloRealityMode(ClientInstance *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 29);
  result = 0;
  if ( v1 == 4 )
    result = 1;
  return result;
}


int __fastcall ClientInstance::_startLeaveGame(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int v2; // r3@1
  char *v3; // r0@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // r5@8
  MinecraftEventing *v7; // r0@8
  Social::UserManager *v8; // r0@8
  __int64 v9; // kr00_8@8
  void **v11; // [sp+0h] [bp-28h]@2
  int v12; // [sp+4h] [bp-24h]@2
  int v13; // [sp+8h] [bp-20h]@2
  char v14; // [sp+Ch] [bp-1Ch]@2
  char v15; // [sp+Dh] [bp-1Bh]@2
  char *v16; // [sp+10h] [bp-18h]@2

  v1 = this;
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) == this )
  {
    MinecraftGame::logoffAllSubclients(*((MinecraftGame **)v1 + 6));
  }
  else
    v12 = 2;
    v13 = 1;
    v14 = 0;
    v11 = &off_26D6400;
    v15 = 0;
    v16 = (char *)&unk_28898CC;
    (*(void (__cdecl **)(_DWORD, void ***, _DWORD, int))(**((_DWORD **)v1 + 12) + 8))(
      *((_DWORD *)v1 + 12),
      &v11,
      *(_DWORD *)(**((_DWORD **)v1 + 12) + 8),
      v2);
    v3 = v16 - 12;
    if ( (int *)(v16 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v16 - 4);
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
  v6 = 0;
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 22) = 0;
  *((_DWORD *)v1 + 23) = 0;
  *((_BYTE *)v1 + 680) = 0;
  ClientInputHandler::resetPlayerState(*((ClientInputHandler **)v1 + 16));
  GuiData::clearMessages(*((GuiData **)v1 + 164));
  v7 = (MinecraftEventing *)MinecraftGame::getEventing(*((MinecraftGame **)v1 + 6));
  MinecraftEventing::forceSendEvents(v7);
  v8 = (Social::UserManager *)MinecraftGame::getUserManager(*((MinecraftGame **)v1 + 6));
  Social::UserManager::saveUserEventInformation(v8);
  v9 = *((_QWORD *)v1 + 3);
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance((MinecraftGame *)v9) == v1 )
    v6 = MinecraftGame::isHostingLocalDedicatedServer(*((MinecraftGame **)v1 + 6));
  return Minecraft::startLeaveGame((Minecraft *)HIDWORD(v9), v6);
}


RakNet *__fastcall ClientInstance::createUserAuthentication(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  const ClientInstance *v2; // r0@1
  int v3; // r5@1
  Options *v4; // r0@1
  int v5; // r1@1
  unsigned int v6; // r0@1
  unsigned int *v7; // r2@2
  unsigned int v8; // r3@4
  __int64 v9; // kr00_8@7
  int v10; // r6@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r5@14
  unsigned int v14; // r0@16
  Social::XboxLiveUserManager *v15; // r0@24
  _DWORD *v16; // r1@25
  int v17; // r0@26
  void *v18; // r0@26
  int v19; // r0@29
  ClientInstance *v20; // r0@30
  Options *v21; // r0@30
  int *v22; // r0@30
  unsigned int v23; // r0@30
  int v24; // r0@30
  void *v25; // r0@30
  char *v26; // r0@31
  Options *v27; // r0@32
  char *v28; // r0@32
  int v29; // r1@32
  int v30; // r4@32
  unsigned int *v31; // r1@33
  unsigned int v32; // r0@35
  unsigned int *v33; // r5@39
  unsigned int v34; // r0@41
  RakNet *result; // r0@46
  unsigned int *v36; // r2@48
  signed int v37; // r1@50
  unsigned int *v38; // r2@52
  signed int v39; // r1@54
  unsigned int *v40; // r2@59
  signed int v41; // r1@61
  int v42; // [sp+10h] [bp-50h]@30
  int v43; // [sp+14h] [bp-4Ch]@26
  _DWORD *v44; // [sp+18h] [bp-48h]@25
  Social::User *v45; // [sp+1Ch] [bp-44h]@1
  int v46; // [sp+20h] [bp-40h]@1
  Social::User *v47; // [sp+24h] [bp-3Ch]@1
  int v48; // [sp+28h] [bp-38h]@1
  char v49; // [sp+2Fh] [bp-31h]@1
  char s; // [sp+34h] [bp-2Ch]@30
  RakNet *v51; // [sp+3Ch] [bp-24h]@1

  v1 = this;
  v51 = _stack_chk_guard;
  v49 = 0;
  v2 = (const ClientInstance *)MinecraftGame::getUserManager(*((MinecraftGame **)this + 6));
  Social::UserManager::getUser((Social::UserManager *)&v47, v2, (int)v1);
  v3 = *((_DWORD *)v1 + 6);
  v4 = (Options *)ClientInstance::getOptions(v1);
  v5 = Options::getDevResetClientId(v4);
  v6 = *((_BYTE *)v1 + 668);
  v45 = v47;
  v46 = v48;
  if ( v48 )
  {
    v7 = (unsigned int *)(v48 + 4);
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
  v9 = MinecraftGame::generateClientId(v3, v5, &v49, 0, v6, (int)&v45);
  v10 = v46;
  if ( v46 )
    v11 = (unsigned int *)(v46 + 4);
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
  if ( *((_BYTE *)v1 + 668) )
    if ( !v47
      || !Social::User::getPlatformConnectionState(v47)
      || (v15 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v47),
          !Social::XboxLiveUserManager::isSignedIn(v15)) )
      v16 = &unk_28898CC;
      v44 = &unk_28898CC;
      if ( v47 )
        v17 = Social::User::getLiveUser(v47);
        Social::XboxLiveUserManager::getCurrentGamertag((Social::XboxLiveUserManager *)&v43, v17);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)&v44,
          &v43);
        v18 = (void *)(v43 - 12);
        if ( (int *)(v43 - 12) != &dword_28898C0 )
        {
          v38 = (unsigned int *)(v43 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
          }
          else
            v39 = (*v38)--;
          if ( v39 <= 0 )
            j_j_j_j_j__ZdlPv_9(v18);
        }
        v16 = v44;
      if ( *(v16 - 3) )
        v19 = ClientInstance::getOptions(v1);
        Options::setOverrideUsername(v19, (int *)&v44);
        snprintf(&s, 8u, "(%d)", *((_BYTE *)v1 + 668));
        v20 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v1 + 6));
        v21 = (Options *)ClientInstance::getOptions(v20);
        v22 = (int *)Options::getDisplayedUsername(v21);
        sub_DA73B4(&v42, v22);
        v23 = strlen(&s);
        sub_DA73D4((const void **)&v42, &s, v23);
        v24 = ClientInstance::getOptions(v1);
        Options::setOverrideUsername(v24, &v42);
        v25 = (void *)(v42 - 12);
        if ( (int *)(v42 - 12) != &dword_28898C0 )
          v40 = (unsigned int *)(v42 - 4);
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
            v41 = (*v40)--;
          if ( v41 <= 0 )
            j_j_j_j_j__ZdlPv_9(v25);
      v26 = (char *)(v44 - 3);
      if ( v44 - 3 != &dword_28898C0 )
        v36 = v44 - 1;
        if ( &pthread_create )
          __dmb();
          do
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
        else
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j_j__ZdlPv_9(v26);
  v27 = (Options *)ClientInstance::getOptions(v1);
  v28 = Options::getDisplayedUsername(v27);
  ClientInstance::createUserAuthentication((int)v1, v29, v9, HIDWORD(v9), (const void **)v28);
  v30 = v48;
    v31 = (unsigned int *)(v48 + 4);
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
  result = (RakNet *)(_stack_chk_guard - v51);
  if ( _stack_chk_guard != v51 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall ClientInstance::_isItemFetched(int a1, int **a2)
{
  int **v2; // r4@1
  int v3; // r0@1

  v2 = a2;
  v3 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(a1 + 24));
  return j_j_j__ZN22StoreCatalogRepository13isItemFetchedERKSs(v3, v2);
}


Social::MultiplayerServiceManager *__fastcall ClientInstance::onLevelExit(ClientInstance *this)
{
  ClientInstance *v1; // r4@1

  v1 = this;
  *((_DWORD *)this + 4) = 0;
  GuiData::clearAllTTSMessages(*((GuiData **)this + 164));
  return j_j_j__ZN13MinecraftGame17onClientLevelExitER14ClientInstancej(*((MinecraftGame **)v1 + 6), v1, 0);
}


char *__fastcall ClientInstance::setLastPointerLocation(ClientInstance *this, float a2, float a3, float a4)
{
  char *v4; // r0@1

  v4 = (char *)this + 604;
  *(float *)v4 = a2;
  *((float *)v4 + 1) = a3;
  *((float *)v4 + 2) = a4;
  return v4 + 12;
}


unsigned int __fastcall ClientInstance::setupLevelRendering(ClientInstance *this, Level *a2, Entity *a3)
{
  ClientInstance *v3; // r4@1
  Entity *v4; // r6@1
  Level *v5; // r5@1
  GameRenderer *v6; // r0@1
  GameRenderer *v7; // r7@1
  Dimension *v8; // r0@1
  unsigned int v9; // r11@1
  int v10; // r9@1
  unsigned int v11; // r8@1
  int v12; // r10@1
  SoundEngine *v13; // r0@1
  int v14; // r1@1
  unsigned int result; // r0@1
  int v16; // r4@3
  unsigned int *v17; // r1@4
  unsigned int *v18; // r5@10
  int v19; // r4@17
  unsigned int *v20; // r1@18
  unsigned int *v21; // r5@24
  char v22; // [sp+20h] [bp-38h]@1
  int v23; // [sp+24h] [bp-34h]@3
  char v24; // [sp+28h] [bp-30h]@1
  int v25; // [sp+2Ch] [bp-2Ch]@17
  int v26; // [sp+30h] [bp-28h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (GameRenderer *)MinecraftGame::getGameRenderer(*((MinecraftGame **)this + 6));
  GameRenderer::setClient(v6, v3);
  *((_DWORD *)v3 + 22) = v4;
  v7 = (GameRenderer *)MinecraftGame::getGameRenderer(*((MinecraftGame **)v3 + 6));
  v8 = (Dimension *)Entity::getDimension(v4);
  GameRenderer::setLevel(v7, v5, v8);
  Level::addListener(v5, (LevelListener *)(*((_DWORD *)v3 + 6) + 20));
  v9 = *((_DWORD *)v3 + 23);
  ClientInstance::getOptionsPtr((ClientInstance *)&v24, (int)v3);
  v10 = MinecraftGame::getTextures(*((MinecraftGame **)v3 + 6));
  MinecraftGame::getTextureAtlas((MinecraftGame *)&v22, *((_DWORD *)v3 + 6));
  v11 = *((_DWORD *)v3 + 13);
  v12 = MinecraftGame::getGameRenderer(*((MinecraftGame **)v3 + 6));
  MinecraftGame::getSoundEngine(*((MinecraftGame **)v3 + 6));
  MinecraftGame::getGeometryGroup(*((MinecraftGame **)v3 + 6));
  v13 = (SoundEngine *)MinecraftGame::getSoundEngine(*((MinecraftGame **)v3 + 6));
  SoundEngine::getSounds(v13);
  std::make_unique<LevelRenderer,ClientInstance &,Level &,std::shared_ptr<Options>,mce::TextureGroup &,std::shared_ptr<TextureAtlas>,LocalPlayer &,HolographicPlatform &,GameRenderer &,SoundEngine &,GeometryGroup &,SoundMapping const&>(
    (int)&v26,
    (int)v3,
    (int)v5,
    (int)&v24,
    __PAIR__(&v22, v10),
    __PAIR__(v11, v9),
    v12);
  v14 = v26;
  v26 = 0;
  result = *((_DWORD *)v3 + 10);
  *((_DWORD *)v3 + 10) = v14;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  v16 = v23;
  if ( v23 )
  {
    v17 = (unsigned int *)(v23 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
    }
    else
      result = (*v17)--;
    if ( result == 1 )
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
      }
      else
        result = (*v18)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  }
  v19 = v25;
  if ( v25 )
    v20 = (unsigned int *)(v25 + 4);
        result = __ldrex(v20);
      while ( __strex(result - 1, v20) );
      result = (*v20)--;
      v21 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          result = __ldrex(v21);
        while ( __strex(result - 1, v21) );
        result = (*v21)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  return result;
}


int __fastcall ClientInstance::getSplitScreenInfo(ClientInstance *this, int a2)
{
  int v2; // r4@1
  ClientInstance *v3; // r5@1
  Options *v4; // r0@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  *((_DWORD *)this + 1) = MinecraftGame::getClientInstanceCount(*(MinecraftGame **)(a2 + 24));
  *(_DWORD *)v3 = *(_BYTE *)(v2 + 668);
  v4 = (Options *)ClientInstance::getOptions((ClientInstance *)v2);
  result = Options::getSplitscreenDirection(v4);
  *((_DWORD *)v3 + 2) = result;
  return result;
}


_DWORD *__fastcall ClientInstance::forEachAlwaysAcceptInputScreenWithTop(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r5@2
  void (__fastcall *v5)(int *, int, signed int); // r3@2
  _DWORD *result; // r0@4
  SceneStack *v7; // r0@6
  __int64 v8; // r2@6
  void (__fastcall *v9)(char *, int, signed int); // r3@6
  int v10; // [sp+0h] [bp-38h]@3
  int (*v11)(void); // [sp+8h] [bp-30h]@2
  int v12; // [sp+Ch] [bp-2Ch]@3
  char v13; // [sp+10h] [bp-28h]@7
  int (*v14)(void); // [sp+18h] [bp-20h]@6
  int v15; // [sp+1Ch] [bp-1Ch]@7
  char v16; // [sp+20h] [bp-18h]@6

  v2 = a1;
  v3 = a2;
  if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(a1 + 24)) == a1 )
  {
    v7 = (SceneStack *)MinecraftGame::getMainSceneStack(*(MinecraftGame **)(v2 + 24));
    LODWORD(v8) = *(_DWORD *)(v2 + 616);
    CompositeSceneStackView::CompositeSceneStackView((CompositeSceneStackView *)&v16, v7, v8);
    v14 = 0;
    v9 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
    if ( v9 )
    {
      v9(&v13, v3, 2);
      v15 = *(_DWORD *)(v3 + 12);
      v14 = *(int (**)(void))(v3 + 8);
    }
    result = CompositeSceneStackView::forEachAlwaysAcceptInputScreenWithTop((int)&v16, (int)&v13);
    if ( v14 )
      result = (_DWORD *)v14();
  }
  else
    v4 = *(_DWORD *)(v2 + 616);
    v11 = 0;
    v5 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
    if ( v5 )
      v5(&v10, v3, 2);
      v12 = *(_DWORD *)(v3 + 12);
      v11 = *(int (**)(void))(v3 + 8);
    result = SceneStack::forEachAlwaysAcceptInputScreenWithTop(v4, (int)&v10);
    if ( v11 )
      result = (_DWORD *)v11();
  return result;
}


void __fastcall ClientInstance::onClientInputInitComplete(ClientInstance *this)
{
  ClientInstance::onClientInputInitComplete(this);
}


int __fastcall ClientInstance::setOpenControllerDisconnectScreen(int result, bool a2)
{
  *(_BYTE *)(result + 121) = a2;
  return result;
}


int __fastcall ClientInstance::onActiveResourcePacksChanged(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int result; // r0@1
  EntityRenderDispatcher *v3; // r5@2
  GeometryGroup *v4; // r6@2
  mce::TextureGroup *v5; // r0@2

  v1 = this;
  result = *((_BYTE *)this + 36);
  if ( result )
  {
    BlockTessellator::clearBlockCache(*((BlockTessellator **)v1 + 158));
    v3 = (EntityRenderDispatcher *)*((_DWORD *)v1 + 160);
    v4 = (GeometryGroup *)MinecraftGame::getGeometryGroup(*((MinecraftGame **)v1 + 6));
    v5 = (mce::TextureGroup *)MinecraftGame::getTextures(*((MinecraftGame **)v1 + 6));
    EntityRenderDispatcher::initializeEntityRenderers(v3, v4, v5, *((BlockTessellator **)v1 + 158));
    ItemInHandRenderer::onActiveResourcePacksChanged(*((ItemInHandRenderer **)v1 + 162));
    result = j_j_j__ZN12CachedScenes10clearCacheEv(*((CachedScenes **)v1 + 20));
  }
  return result;
}


int __fastcall ClientInstance::onAppSuspended(ClientInstance *this)
{
  ClientInstance *v1; // r4@1

  v1 = this;
  BlockTessellator::clearBlockCache(*((BlockTessellator **)this + 158));
  return j_j_j__ZN18ItemInHandRenderer14onAppSuspendedEv(*((ItemInHandRenderer **)v1 + 162));
}


char *__fastcall ClientInstance::getViewportInfo(ClientInstance *this)
{
  return (char *)this + 168;
}


int __fastcall ClientInstance::isScreenReplaceable(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  SceneStack *v2; // r0@3
  int result; // r0@3

  v1 = this;
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) != this
    || SceneStack::isEmpty(*((SceneStack **)v1 + 154)) != 1 )
  {
    result = SceneStack::isScreenReplaceable(*((SceneStack **)v1 + 154));
  }
  else
    v2 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v1 + 6));
    result = SceneStack::isScreenReplaceable(v2);
  return result;
}


int __fastcall ClientInstance::getLightTexture(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int result; // r0@1
  mce::TextureGroup *v3; // r5@2
  char *v4; // r6@2
  LightTexture *v5; // r5@2
  void *v6; // r0@2
  void *v7; // r0@4
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  int v10; // [sp+0h] [bp-20h]@2

  v1 = this;
  result = *((_DWORD *)this + 11);
  if ( !result )
  {
    v3 = (mce::TextureGroup *)MinecraftGame::getTextures(*((MinecraftGame **)v1 + 6));
    mce::TextureGroup::getLocationFor((void **)&v10, 0);
    v4 = mce::TextureGroup::getTexturePair(v3, (const ResourceLocation *)&v10);
    v5 = (LightTexture *)operator new(0x34u);
    LightTexture::LightTexture(v5, (TexturePair *)v4);
    v6 = (void *)*((_DWORD *)v1 + 11);
    *((_DWORD *)v1 + 11) = v5;
    if ( v6 )
      operator delete(v6);
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
    result = *((_DWORD *)v1 + 11);
  }
  return result;
}


signed int __fastcall ClientInstance::isHoloscreenMode(ClientInstance *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 29);
  result = 0;
  if ( v1 == 2 )
    result = 1;
  return result;
}


signed int __fastcall ClientInstance::isPrimaryClient(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int v2; // r0@1
  signed int v3; // r1@1

  v1 = this;
  v2 = MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6));
  v3 = 0;
  if ( (ClientInstance *)v2 == v1 )
    v3 = 1;
  return v3;
}


ClientInputHandler *__fastcall ClientInstance::onMobEffectsChange(ClientInstance *this)
{
  ClientInstance *v1; // r1@1
  ClientInputHandler *result; // r0@1

  v1 = this;
  result = (ClientInputHandler *)*((_DWORD *)this + 16);
  if ( result )
    result = (ClientInputHandler *)j_j_j__ZN18ClientInputHandler19onMobEffectsChangedERK16MobEffectsLayout(
                                     result,
                                     *((const MobEffectsLayout **)v1 + 165));
  return result;
}


signed int __fastcall ClientInstance::readyForShutdown(ClientInstance *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 4) | 2;
  result = 0;
  if ( v1 == 2 )
    result = 1;
  return result;
}


void __fastcall ClientInstance::onLevelCorrupt(ClientInstance *this)
{
  ClientInstance *v1; // r8@1
  Level *v2; // r0@1
  char *v3; // r0@1
  int *v4; // r5@1
  const void **v5; // r0@1
  const void **v6; // r0@1
  __int64 v7; // kr00_8@1
  unsigned int v8; // r1@1
  const void **v9; // r0@3
  __int64 v10; // r0@5
  void *v11; // r5@5
  void *v12; // r7@5
  unsigned int *v13; // r2@7
  signed int v14; // r1@9
  int *v15; // r0@15
  void *v16; // r0@20
  char *v17; // r0@21
  void *v18; // r0@22
  void *v19; // r0@23
  void *v20; // r0@24
  char *v21; // r0@25
  void *v22; // r0@26
  void *v23; // r0@27
  void *v24; // r0@28
  unsigned int *v25; // r2@30
  signed int v26; // r1@32
  unsigned int *v27; // r2@34
  signed int v28; // r1@36
  unsigned int *v29; // r2@38
  signed int v30; // r1@40
  unsigned int *v31; // r2@42
  signed int v32; // r1@44
  unsigned int *v33; // r2@46
  signed int v34; // r1@48
  unsigned int *v35; // r2@50
  signed int v36; // r1@52
  unsigned int *v37; // r2@54
  signed int v38; // r1@56
  unsigned int *v39; // r2@58
  signed int v40; // r1@60
  unsigned int *v41; // r2@62
  signed int v42; // r1@64
  int v43; // [sp+8h] [bp-58h]@27
  int v44; // [sp+Ch] [bp-54h]@5
  void *v45; // [sp+10h] [bp-50h]@5
  void *v46; // [sp+14h] [bp-4Ch]@5
  int v47; // [sp+20h] [bp-40h]@1
  int v48; // [sp+24h] [bp-3Ch]@1
  int v49; // [sp+28h] [bp-38h]@1
  char *v50; // [sp+2Ch] [bp-34h]@1
  unsigned int v51; // [sp+30h] [bp-30h]@1
  char *v52; // [sp+34h] [bp-2Ch]@5
  int v53; // [sp+38h] [bp-28h]@5

  v1 = this;
  v2 = (Level *)Minecraft::getLevel(*((Minecraft **)this + 7));
  v3 = Level::getLevelData(v2);
  v4 = (int *)LevelData::getLevelName((LevelData *)v3);
  ColorFormat::ColorCodeFromColor((ColorFormat *)&v49, (const Color *)&Color::WHITE);
  v5 = sub_DA7948((const void **)&v49, 0, (unsigned int)"\"%", (_BYTE *)2);
  v50 = (char *)*v5;
  *v5 = &unk_28898CC;
  v6 = sub_DA73D4((const void **)&v50, "\" ", 2u);
  v51 = (unsigned int)*v6;
  *v6 = &unk_28898CC;
  sub_DA7364((void **)&v47, "worldError.writeCorrupted");
  I18n::get(&v48, (int **)&v47);
  v7 = *(_QWORD *)(v51 - 12);
  v8 = *(_DWORD *)(v48 - 12) + v7;
  if ( v8 > HIDWORD(v7) && v8 <= *(_DWORD *)(v48 - 8) )
    v9 = sub_DA7948((const void **)&v48, 0, v51, (_BYTE *)v7);
  else
    v9 = sub_DA7564((const void **)&v51, (const void **)&v48);
  v52 = (char *)*v9;
  *v9 = &unk_28898CC;
  sub_DA73B4(&v44, v4);
  ParameterStringify::stringify<std::string>((int)&v45, &v44);
  LODWORD(v10) = &v53;
  Util::simpleFormat(v10, (__int64 *)&v45);
  v12 = v46;
  v11 = v45;
  if ( v45 != v46 )
  {
    do
    {
      v15 = (int *)(*(_DWORD *)v11 - 12);
      if ( v15 != &dword_28898C0 )
      {
        v13 = (unsigned int *)(*(_DWORD *)v11 - 4);
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
          j_j_j_j_j__ZdlPv_9(v15);
      }
      v11 = (char *)v11 + 4;
    }
    while ( v11 != v12 );
    v11 = v45;
  }
  if ( v11 )
    operator delete(v11);
  v16 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v44 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  v17 = v52 - 12;
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v52 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v48 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v47 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v51 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  v21 = v50 - 12;
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v50 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v49 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  MinecraftGame::requestLeaveGame(*((MinecraftGame **)v1 + 6), 1, 0);
  sub_DA7364((void **)&v43, (const char *)&unk_257BC67);
  ClientInstance::_navigateToDisconnectScreen((int)v1, &v43, &v53);
  v23 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v43 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v53 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
}


int __fastcall ClientInstance::_updateScreenSizeVariables(float a1, _QWORD *a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r8@1
  signed int v12; // r7@1
  int v13; // r0@1
  signed int v14; // r6@1
  signed int v15; // r0@1
  Options *v18; // r0@6
  __int64 v19; // r0@6
  int v21; // r0@14
  GuiData *v22; // r0@21
  int v23; // r1@21
  GuiData *v26; // r6@22
  __int64 v27; // r0@22
  int v28; // r2@22
  float v35; // [sp+0h] [bp-78h]@21
  __int64 v36; // [sp+8h] [bp-70h]@22
  float v37; // [sp+18h] [bp-60h]@22
  char v38; // [sp+20h] [bp-58h]@22
  float v39; // [sp+28h] [bp-50h]@22
  float v40; // [sp+30h] [bp-48h]@22

  v5 = LODWORD(a1);
  v6 = a4;
  _R9 = a3;
  _R5 = a2;
  __asm { VLDR            S18, [SP,#0x78+arg_0] }
  v12 = *(_BYTE *)(LODWORD(a1) + 668);
  v13 = MinecraftGame::getClientInstanceCount(*(MinecraftGame **)(LODWORD(a1) + 24));
  v14 = v13;
  _ZF = v13 == 2;
  v15 = v12;
  if ( _ZF )
    v15 = 1;
  if ( !v12 )
    v15 = 0;
  _R11 = dword_262C08C[2 * v15];
  _R10 = dword_262C08C[2 * v15 + 1];
  if ( v14 < 2 )
  {
    __asm
    {
      VMOV.F32        S16, #1.0
      VMOV.F32        S20, S16
    }
  }
  else
    v18 = (Options *)ClientInstance::getOptions((ClientInstance *)v5);
    v19 = (unsigned int)Options::getSplitscreenDirection(v18);
      VMOV.F32        S0, #0.5
      VMOV.F32        S20, S0
    if ( _ZF )
      __asm
      {
        VMOVEQ.F32      S20, S16
        VMOVEQ.F32      S16, S0
      }
    _ZF = v14 == 2;
    if ( v14 > 2 )
        VMOVGT.F32      S20, S0
        VMOVGT.F32      S16, S0
    if ( !_ZF )
      HIDWORD(v19) = 1;
    if ( (_DWORD)v19 != 1 )
      LODWORD(v19) = 0;
    _ZF = v19 == 0;
    v21 = _R10;
      _R10 = _R11;
    else
      v21 = _R11;
    _R11 = v21;
  __asm
    VCMPE.F32       S18, #0.0
    VMRS            APSR_nzcv, FPSCR
      VMOV            S0, R9
      VLDR            S4, [R5]
      VLDR            S6, [R5,#4]
      VMUL.F32        S2, S16, S0
      VMUL.F32        S0, S20, S0
      VMUL.F32        S2, S2, S4
      VMUL.F32        S0, S0, S6
      VSTR            S2, [SP,#0x78+var_78]
      VSTR            S0, [SP,#0x78+var_74]
    v22 = (GuiData *)ClientInstance::_calculateGuiScaleIndex(v5, (int)&v35, v6);
    _R0 = GuiData::resolveGuiScale(v22, v23);
    __asm { VMOV            S18, R0 }
  __asm { VMOV            R1, S18 }
  v26 = *(GuiData **)(v5 + 656);
  GuiData::setGuiScale(*(GuiData **)(v5 + 656), _R1);
  GuiData::getGuiScale(v26);
    VLDR            S0, [R5]
    VLDR            S2, [R5,#4]
    VMUL.F32        S0, S0, S16
    VMUL.F32        S2, S2, S20
    VSTR            S0, [SP,#0x78+var_50]
    VSTR            S2, [SP,#0x78+var_4C]
  GuiData::ceilToGuiScale((int)&v40, (int)v26, (int)&v39);
    VMOV            S0, R11
    VLDR            S2, [R5]
    VLDR            S4, [R5,#4]
    VMOV            S6, R10
    VMUL.F32        S0, S2, S0
    VMUL.F32        S2, S4, S6
    VSTR            S0, [SP,#0x78+var_60]
    VSTR            S2, [SP,#0x78+var_5C]
  GuiData::ceilToGuiScale((int)&v38, (int)v26, (int)&v37);
  v27 = *(_QWORD *)&v38;
  *(_QWORD *)(v5 + 168) = *(_QWORD *)&v40;
  v28 = v5 + 176;
  *(_QWORD *)v28 = v27;
  *(_DWORD *)(v28 + 8) = 0;
  *(_DWORD *)(v28 + 12) = 1065353216;
  _R0 = GuiData::getInvGuiScale(v26);
    VLDR            S0, [SP,#0x78+var_48]
    VMOV            S4, R0
    VLDR            S2, [SP,#0x78+var_44]
    VMUL.F32        S0, S0, S4
    VMUL.F32        S16, S2, S4
    VMOV            R0, S0
  _R0 = roundf(_R0);
    VMOV            R1, S16
    VMOV            S16, R0
  _R0 = roundf(_R1);
    VMOV            S0, R0
    VCVTR.S32.F32   S2, S16
    VCVTR.S32.F32   S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S0, S0
  *(_QWORD *)&v35 = *_R5;
  v36 = *(_QWORD *)&v40;
    VSTR            S2, [SP,#0x78+var_68]
    VSTR            S0, [SP,#0x78+var_64]
  GuiData::setScreenSizeData((int)v26, (int)&v35);
  return ClientInstance::_onScreenSizeVariablesChanged((ClientInstance *)v5, (int)&v35);
}


int __fastcall ClientInstance::setDefaultPlayscreenTab(int result, int a2)
{
  *(_DWORD *)(result + 124) = a2;
  return result;
}


_DWORD *__fastcall ClientInstance::_processNewGazeHoloScreenData(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  SceneStack *v4; // r0@6
  int v5; // r0@8
  int v6; // r0@8
  MinecraftGame *v8; // r0@12
  unsigned __int64 v9; // kr28_8@13
  unsigned __int64 v10; // kr30_8@13
  unsigned __int64 v12; // kr38_8@13
  SceneStack *v17; // r0@15
  int v18; // r0@15
  GuiData *v28; // r6@31
  SceneStack *v32; // r0@37
  int v33; // r0@37
  _DWORD *result; // r0@39
  signed int v35; // r6@43
  char v38; // r6@45
  int v39; // r5@47
  SceneStack *v40; // r0@47
  int v41; // r0@47
  int v42; // r7@49
  int v43; // r0@49
  char v44; // r1@50
  int v45; // [sp+8h] [bp-198h]@13
  unsigned int v46; // [sp+Ch] [bp-194h]@13
  float v47; // [sp+10h] [bp-190h]@13
  float v48; // [sp+14h] [bp-18Ch]@13
  int v49; // [sp+18h] [bp-188h]@13
  unsigned int v50; // [sp+1Ch] [bp-184h]@13
  unsigned int v51; // [sp+20h] [bp-180h]@13
  unsigned int v52; // [sp+24h] [bp-17Ch]@13
  unsigned int v53; // [sp+28h] [bp-178h]@13
  ClientInstance *v54; // [sp+2Ch] [bp-174h]@15
  __int64 v55; // [sp+30h] [bp-170h]@13
  char v56; // [sp+38h] [bp-168h]@19
  __int64 v57; // [sp+78h] [bp-128h]@19
  __int64 v58; // [sp+80h] [bp-120h]@19
  int v59; // [sp+88h] [bp-118h]@19
  float v60; // [sp+8Ch] [bp-114h]@19
  int v61; // [sp+90h] [bp-110h]@19
  int v62; // [sp+94h] [bp-10Ch]@19
  float v63; // [sp+98h] [bp-108h]@19
  __int64 v64; // [sp+9Ch] [bp-104h]@19
  int v65; // [sp+A4h] [bp-FCh]@19
  float v66; // [sp+A8h] [bp-F8h]@19
  float v67; // [sp+ACh] [bp-F4h]@19
  int v68; // [sp+B0h] [bp-F0h]@19
  int v69; // [sp+B4h] [bp-ECh]@19
  unsigned __int64 v70; // [sp+B8h] [bp-E8h]@13
  unsigned __int64 v71; // [sp+C0h] [bp-E0h]@13
  __int64 v72; // [sp+C8h] [bp-D8h]@13
  __int64 v73; // [sp+D0h] [bp-D0h]@13
  __int64 v74; // [sp+D8h] [bp-C8h]@13
  int v75; // [sp+E0h] [bp-C0h]@13
  __int64 v76; // [sp+E4h] [bp-BCh]@13
  float v77; // [sp+ECh] [bp-B4h]@13
  unsigned __int64 v78; // [sp+F0h] [bp-B0h]@13
  __int64 v79; // [sp+F8h] [bp-A8h]@19
  __int64 v80; // [sp+100h] [bp-A0h]@19
  int v81; // [sp+108h] [bp-98h]@19
  float v82; // [sp+10Ch] [bp-94h]@19
  int v83; // [sp+110h] [bp-90h]@19
  int v84; // [sp+114h] [bp-8Ch]@19
  float v85; // [sp+118h] [bp-88h]@19
  __int64 v86; // [sp+11Ch] [bp-84h]@19
  int v87; // [sp+124h] [bp-7Ch]@19
  float v88; // [sp+128h] [bp-78h]@19
  float v89; // [sp+12Ch] [bp-74h]@19
  int v90; // [sp+130h] [bp-70h]@19
  int v91; // [sp+134h] [bp-6Ch]@19

  v1 = this;
  v2 = *((_DWORD *)this + 13);
  *(_BYTE *)(v2 + 720) = 0;
  v3 = *(_BYTE *)(v2 + 661);
  if ( *((_DWORD *)this + 29) == 4
    && (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 76))(v2) == 1
    && !(*((_DWORD *)v1 + 27) & 0x7FFFFFFF) )
  {
    if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v1 + 6)) != v1
      || SceneStack::isEmpty(*((SceneStack **)v1 + 154)) != 1 )
    {
      v4 = (SceneStack *)*((_DWORD *)v1 + 154);
    }
    else
      v4 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v1 + 6));
    v5 = SceneStack::getScreen(v4);
    v6 = (*(int (**)(void))(*(_DWORD *)v5 + 172))();
    _ZF = v3 == 0;
    if ( !v3 )
      _ZF = v6 == 1;
    if ( _ZF )
      v8 = (MinecraftGame *)*((_DWORD *)v1 + 6);
LABEL_39:
      result = (_DWORD *)MinecraftGame::getGameRenderer(v8);
      *((_BYTE *)result + 812) = 0;
      return result;
  }
  v55 = *(_QWORD *)&v2;
  _aeabi_memclr8(&v70, 60);
  v9 = *(_QWORD *)&Matrix::IDENTITY;
  v52 = v9 >> 32;
  v53 = v9;
  v70 = *(_QWORD *)&Matrix::IDENTITY;
  v10 = qword_27E89F0;
  v50 = v10 >> 32;
  v51 = v10;
  v71 = qword_27E89F0;
  v12 = qword_27E89F8;
  _R5 = v12 >> 32;
  v45 = v12;
  v72 = qword_27E89F8;
  _KR18_8 = qword_27E8A00;
  _R8 = qword_27E8A08;
  _R10 = unk_27E8A10;
  _R6 = qword_27E8A14;
  v73 = qword_27E8A00;
  v74 = qword_27E8A08;
  v75 = unk_27E8A10;
  v49 = HIDWORD(qword_27E8A14);
  v76 = qword_27E8A14;
  v48 = unk_27E8A1C;
  v77 = unk_27E8A1C;
  v78 = *(_QWORD *)&qword_27E8A20;
  v46 = *((_DWORD *)&qword_27E8A20 + 1);
  v47 = qword_27E8A20;
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v1 + 6)) != v1
    || SceneStack::isEmpty(*((SceneStack **)v1 + 154)) != 1 )
    v54 = v1;
    v18 = SceneStack::getScreen(*((SceneStack **)v1 + 154));
  else
    v17 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v1 + 6));
    v18 = SceneStack::getScreen(v17);
  if ( !__PAIR__(HIDWORD(v55), (*(int (**)(void))(*(_DWORD *)v18 + 168))()) )
    _R0 = v45;
    __asm
      VMOV            S18, R5
      VMOV            S20, R7
      VMOV            S22, R11
      VMOV            S16, R0
      VMOV            S24, R8
      VMOV            S26, R9
      VMOV            S28, R10
      VMOV            S30, R6
    _R0 = MinecraftGame::getGameRenderer(*((MinecraftGame **)v54 + 6));
      VLDR            S0, =0.017453
      VLDR            S2, [R0,#0x318]
      VMUL.F32        S0, S2, S0
      VMOV            R6, S0
    _R0 = cosf(_R6);
    __asm { VMOV            S17, R0 }
    _R0 = sinf(_R6);
      VMOV            S0, R0
      VMUL.F32        S2, S16, S17
    v70 = __PAIR__(v52, v53);
      VMUL.F32        S4, S24, S0
      VMUL.F32        S6, S18, S17
      VMUL.F32        S8, S26, S0
      VMUL.F32        S10, S20, S17
    v71 = __PAIR__(v50, v51);
      VMUL.F32        S12, S28, S0
      VMUL.F32        S14, S22, S17
      VMUL.F32        S1, S30, S0
      VMUL.F32        S3, S16, S0
      VMUL.F32        S5, S24, S17
      VMUL.F32        S7, S18, S0
      VMUL.F32        S11, S20, S0
      VMUL.F32        S9, S26, S17
      VMUL.F32        S13, S28, S17
      VMUL.F32        S0, S22, S0
      VMUL.F32        S15, S30, S17
      VADD.F32        S2, S4, S2
      VADD.F32        S4, S8, S6
      VADD.F32        S6, S12, S10
      VADD.F32        S8, S1, S14
      VSUB.F32        S10, S5, S3
      VSUB.F32        S12, S9, S7
      VSUB.F32        S14, S13, S11
      VSUB.F32        S0, S15, S0
      VSTR            S2, [SP,#0x1A0+var_D8]
      VSTR            S4, [SP,#0x1A0+var_D8+4]
      VSTR            S6, [SP,#0x1A0+var_D0]
      VSTR            S8, [SP,#0x1A0+var_D0+4]
      VSTR            S10, [SP,#0x1A0+var_C8]
      VSTR            S12, [SP,#0x1A0+var_C8+4]
      VSTR            S14, [SP,#0x1A0+var_C0]
      VSTR            S0, [SP,#0x1A0+var_BC]
    HIDWORD(v76) = v49;
    v77 = v48;
    v78 = __PAIR__(v46, LODWORD(v47));
  HolographicPlatform::getTransform((int)&v57, v55, 19, 8, 0);
  HolographicPlatform::getTransform((int)&v56, v55, 8, 6, 0);
  glm::detail::operator*<float>((int)&v79, (int)&v57, (int)&v70);
  v57 = v79;
  v58 = v80;
  v59 = v81;
  v60 = v82;
  v61 = v83;
  v62 = v84;
  v63 = v85;
  v64 = v86;
  v65 = v87;
  v66 = v88;
  v67 = v89;
  v68 = v90;
  v69 = v91;
  glm::detail::operator*<float>((int)&v79, (int)&v56, (int)&v57);
  _R0 = dword_BDCD1C;
  if ( HIDWORD(v55) )
    _R0 = &dword_BDCD1C[1];
  __asm
    VLDR            S8, [SP,#0x1A0+var_70]
    VLDR            S0, [R0]
    VCMPE.F32       S8, S0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    v8 = (MinecraftGame *)*((_DWORD *)v54 + 6);
    goto LABEL_39;
    VLDR            S10, [SP,#0x1A0+var_84+4]
    VABS.F32        S12, S10
    VLDR            S14, =0.000001
    VLDR            S4, [SP,#0x1A0+var_88]
    VLDR            S0, [SP,#0x1A0+var_84]
    VLDR            S6, [SP,#0x1A0+var_78]
    VLDR            S2, [SP,#0x1A0+var_74]
    VCMPE.F32       S12, S14
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm { VLDR            S8, =0.0 }
      VNEG.F32        S8, S8
      VDIV.F32        S8, S8, S10
    VMUL.F32        S4, S8, S4
    VADD.F32        S16, S4, S6
    VMOV.F32        S4, #1.0
    VABS.F32        S6, S16
    VCMPE.F32       S6, S4
  if ( !(_NF ^ _VF) )
    goto LABEL_58;
    VMUL.F32        S0, S8, S0
    VADD.F32        S18, S0, S2
    VABS.F32        S0, S18
    VCMPE.F32       S0, S4
LABEL_58:
  HolographicPlatform::getTransform((int)&v79, *((_DWORD *)v54 + 13), 6, 5, 0);
    VLDR            S0, [SP,#0x1A0+var_A8]
    VLDR            S2, [SP,#0x1A0+var_A8+4]
    VLDR            S4, [SP,#0x1A0+var_98]
    VMUL.F32        S0, S0, S16
    VLDR            S6, [SP,#0x1A0+var_94]
    VMUL.F32        S2, S2, S16
    VMUL.F32        S4, S4, S18
  v28 = (GuiData *)*((_DWORD *)v54 + 164);
    VMUL.F32        S6, S6, S18
    VADD.F32        S0, S4, S0
    VLDR            S4, [SP,#0x1A0+var_74]
    VADD.F32        S2, S6, S2
    VADD.F32        S22, S0, S6
    VADD.F32        S20, S2, S4
  _R7 = GuiData::getGuiScale(*((GuiData **)v54 + 164));
  _R0 = GuiData::getGuiScale(v28);
    VMOV            S0, R0
    VMOV            S2, R7
  _R7 = v55;
  __asm { VMUL.F32        S0, S0, S20 }
  *(_BYTE *)(v55 + 720) = 1;
    VMUL.F32        S2, S2, S22
    VCVTR.S32.F32   S20, S0
    VCVTR.S32.F32   S22, S2
  if ( *(_BYTE *)(v55 + 722) )
      VSTRNE          S16, [R7,#0x2C0]
      VSTRNE          S18, [R7,#0x2C4]
    *(_BYTE *)(v55 + 722) = 0;
  if ( ClientInputHandler::getHoloUIInputMode(*((ClientInputHandler **)v54 + 16)) == 2
    || ClientInputHandler::getHoloUIInputMode(*((ClientInputHandler **)v54 + 16)) == 3
    && ((ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v54 + 6)) != v54
     || SceneStack::isEmpty(*((SceneStack **)v54 + 154)) != 1 ? (v33 = SceneStack::getScreen(*((SceneStack **)v54 + 154))) : (v32 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v54 + 6)), v33 = SceneStack::getScreen(v32)),
        !(*(int (**)(void))(*(_DWORD *)v33 + 168))()) )
      VMOV            R6, S20
      VMOV            R5, S22
    LODWORD(v79) = ClientInputHandler::getCurrentInputMode(*((ClientInputHandler **)v54 + 16));
    WORD2(v79) = _R5;
    WORD3(v79) = _R6;
    LOBYTE(v80) = 0;
    v38 = ClientInputCallbacks::handlePointerLocation(v54, (int)&v79, 2);
    if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v54 + 6)) != v54
      || SceneStack::isEmpty(*((SceneStack **)v54 + 154)) != 1 )
      v39 = v55;
      v41 = SceneStack::getScreen(*((SceneStack **)v54 + 154));
      v40 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v54 + 6));
      v41 = SceneStack::getScreen(v40);
    v42 = (*(int (**)(void))(*(_DWORD *)v41 + 168))();
    v43 = MinecraftGame::getGameRenderer(*((MinecraftGame **)v54 + 6));
    if ( v42 == 1 )
      v44 = 1;
      if ( HIDWORD(v55) )
      {
        *(_BYTE *)(v43 + 812) = v38;
LABEL_55:
        __asm
        {
          VSTR            S16, [R5,#0x2C8]
          VSTR            S18, [R5,#0x2CC]
        }
        *(_BYTE *)(v39 + 722) = 1;
        result = (_DWORD *)MinecraftGame::getGameRenderer(*((MinecraftGame **)v54 + 6));
          VSTR            S16, [R0,#0x180]
          VSTR            S18, [R0,#0x184]
        return result;
      }
      v44 = 0;
    *(_BYTE *)(v43 + 812) = v44;
    goto LABEL_55;
  v35 = ClientInputHandler::getHoloUIInputMode(*((ClientInputHandler **)v54 + 16));
  result = (_DWORD *)MinecraftGame::getGameRenderer(*((MinecraftGame **)v54 + 6));
  *((_BYTE *)result + 812) = v35 == 3;
    VLDR            S0, [R7,#0x2C0]
    VLDR            S2, [R7,#0x2C4]
    VSUB.F32        S0, S16, S0
    VSUB.F32        S2, S18, S2
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.3
    VSQRT.F32       S0, S0
    VCMPE.F32       S0, S2
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = ClientInputHandler::updateHoloUIInputMode(*((unsigned __int64 **)v54 + 16), 2, 0);
  return result;
}


void __fastcall ClientInstance::resetPrimaryClient(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 8) + 16))();
  v2 = *((_DWORD *)v1 + 10);
  *((_DWORD *)v1 + 10) = 0;
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  (*(void (**)(void))(**((_DWORD **)v1 + 17) + 44))();
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 22) = 0;
  *((_DWORD *)v1 + 23) = 0;
  Minecraft::resetGameSession(*((Minecraft **)v1 + 7));
  *(_WORD *)((char *)v1 + 677) = 0;
}


void __fastcall ClientInstance::onLevelCorrupt(ClientInstance *this)
{
  ClientInstance::onLevelCorrupt(this);
}


signed int __fastcall ClientInstance::isSplitScreenActive(ClientInstance *this)
{
  unsigned int v1; // r0@1
  signed int v2; // r1@1

  v1 = MinecraftGame::getClientInstanceCount(*((MinecraftGame **)this + 6));
  v2 = 0;
  if ( v1 > 1 )
    v2 = 1;
  return v2;
}


       || (v16 = ClientInstance::getHoloInput(v9), (*(int (**)(void))(*(_DWORD *)v16 + 280))() == 1))
{
    {
      if ( !*(_BYTE *)(v5 + 112) )
      {
        *(_BYTE *)(v5 + 112) = 1;
        if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
          v18 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
        else
          v18 = &ServiceLocator<AppPlatform>::mDefaultService;
        (*(void (**)(void))(**(_DWORD **)v18 + 72))();
      }
    }
    else
      MinecraftGame::releaseMouse((MinecraftGame *)v5);
    _R0 = GuiData::getScreenSizeData(v10);
    __asm
      VLDR            S0, [R0,#0x10]
      VLDR            S2, [R0,#0x14]
      VCVTR.S32.F32   S0, S0
      VCVTR.S32.F32   S2, S2
      VMOV            R1, S0
      VMOV            R2, S2
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v4 + 12))(v4, _R1, _R2);
    v26 = ClientInstance::getHoloInput(v9);
    if ( (*(int (**)(void))(*(_DWORD *)v26 + 44))() == 1 )
      v27 = (ClientInputHandler *)ClientInstance::getInput(v9);
      v28 = ClientInputHandler::getHoloUIInputMode(v27);
      v29 = (unsigned __int64 *)ClientInstance::getInput(v9);
      ClientInputHandler::updateHoloUIInputMode(v29, v28, 1);
    v30 = *(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 80);
    v31 = ClientInstance::getCurrentInputMode(v9);
    v30(v4, v31);
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 28))(v4);
    if ( ClientInstance::shouldUseLastPointerLocationOnFocusChange(v9) == 1 )
      _R0 = ClientInstance::getLastPointerLocation(v9);
      __asm
        VLDR            S16, [R0]
        VLDR            S18, [R0,#4]
      v33 = ClientInstance::getCurrentInputMode(v9);
        VCVTR.S32.F32   S0, S16
        VCVTR.S32.F32   S2, S18
      v44 = v33;
      __asm { VMOV            R0, S0 }
      v45 = _R0;
      __asm { VMOV            R0, S2 }
      v46 = _R0;
      v47 = 1;
      (*(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)v4 + 100))(v4, &v44, 0);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 244))(v4) == 1 )
      v36 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 236))(v4);
      v37 = *(_DWORD *)(v5 + 504);
      v43 = ClientInstance::getUserId(v9);
      (*(void (__fastcall **)(int *, int))(*(_DWORD *)v4 + 228))(&v42, v4);
      MinecraftEventing::fireEventScreenChanged(v37, (unsigned int *)&v43, (const char **)&v42, v36);
      v38 = (void *)(v42 - 12);
      if ( (int *)(v42 - 12) != &dword_28898C0 )
        v40 = (unsigned int *)(v42 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
        }
          v41 = (*v40)--;
        if ( v41 <= 0 )
          j_j_j_j_j__ZdlPv_9(v38);
  }
  if ( v11 )
  {
    v39 = (Level *)ClientInstance::getLevel(v9);
    Level::saveGameData(v39);
}


void __fastcall ClientInstance::postInitRenderResources(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  mce::TextureGroup *v2; // r5@1
  BlockTessellator *v3; // r7@2
  ItemInHandRenderer *v4; // r6@2
  int v5; // r0@2
  ItemRenderer *v6; // r6@4
  int v7; // r0@4
  EntityRenderDispatcher *v8; // r5@6
  SkinGeometryGroup *v9; // r6@6
  mce::TextureGroup *v10; // r2@6

  v1 = this;
  v2 = (mce::TextureGroup *)MinecraftGame::getTextures(*((MinecraftGame **)this + 6));
  if ( v2 )
  {
    v3 = (BlockTessellator *)*((_DWORD *)v1 + 158);
    v4 = (ItemInHandRenderer *)operator new(0x1A0u);
    ItemInHandRenderer::ItemInHandRenderer(v4, v1, v3, v2);
    v5 = *((_DWORD *)v1 + 162);
    *((_DWORD *)v1 + 162) = v4;
    if ( v5 )
      (*(void (**)(void))(*(_DWORD *)v5 + 4))();
    v6 = (ItemRenderer *)operator new(0x128u);
    ItemRenderer::ItemRenderer(v6, v2);
    v7 = *((_DWORD *)v1 + 163);
    *((_DWORD *)v1 + 163) = v6;
    if ( v7 )
      (*(void (**)(void))(*(_DWORD *)v7 + 4))();
    v8 = (EntityRenderDispatcher *)*((_DWORD *)v1 + 160);
    v9 = (SkinGeometryGroup *)MinecraftGame::getSkinGeometryGroup(*((MinecraftGame **)v1 + 6));
    v10 = (mce::TextureGroup *)MinecraftGame::getTextures(*((MinecraftGame **)v1 + 6));
    j_j_j__ZN22EntityRenderDispatcher24initializePlayerRendererER17SkinGeometryGroupRN3mce12TextureGroupE(v8, v9, v10);
  }
}


int __fastcall ClientInstance::currentScreenShouldStealMouse(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  SceneStack *v2; // r0@3
  int v3; // r0@5
  int result; // r0@7

  v1 = this;
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) != this
    || SceneStack::isEmpty(*((SceneStack **)v1 + 154)) != 1 )
  {
    v2 = (SceneStack *)*((_DWORD *)v1 + 154);
  }
  else
    v2 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v1 + 6));
  v3 = SceneStack::getScreen(v2);
  if ( (*(int (**)(void))(*(_DWORD *)v3 + 172))() || (*(int (**)(void))(**((_DWORD **)v1 + 13) + 280))() == 1 )
    result = (*(int (**)(void))(**((_DWORD **)v1 + 13) + 316))() ^ 1;
    result = 0;
  return result;
}


ClientInstance *__fastcall ClientInstance::_syncDestroyGame(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  Scheduler *v2; // r0@1
  _DWORD *v3; // r0@2
  int v4; // r1@2
  int v5; // r0@4
  ClientInstance *result; // r0@6
  Scheduler *v7; // r0@9
  _DWORD *v8; // r0@10
  int v9; // r1@10
  __int64 v10; // [sp+4h] [bp-1Ch]@2

  v1 = this;
  v2 = (Scheduler *)Minecraft::isLeaveGameDone(*((Minecraft **)this + 7));
  if ( !v2 )
  {
    do
    {
      v3 = Scheduler::singleton(v2);
      Scheduler::processCoroutines((int)v3, v4, 0, 0);
      v10 = 4294967296000000LL;
      nanosleep((const struct timespec *)&v10, 0);
      v2 = (Scheduler *)Minecraft::isLeaveGameDone(*((Minecraft **)v1 + 7));
    }
    while ( v2 != (Scheduler *)1 );
  }
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v1 + 6)) == v1 )
    v7 = (Scheduler *)MinecraftGame::isLeaveGameDone(*((MinecraftGame **)v1 + 6));
    if ( !v7 )
      do
      {
        v8 = Scheduler::singleton(v7);
        Scheduler::processCoroutines((int)v8, v9, 0, 0);
        v10 = 4294967296000000LL;
        nanosleep((const struct timespec *)&v10, 0);
        v7 = (Scheduler *)MinecraftGame::isLeaveGameDone(*((MinecraftGame **)v1 + 6));
      }
      while ( v7 != (Scheduler *)1 );
    result = (ClientInstance *)MinecraftGame::destroyGame(*((MinecraftGame **)v1 + 6));
  else
    (*(void (**)(void))(**((_DWORD **)v1 + 8) + 16))();
    v5 = *((_DWORD *)v1 + 10);
    *((_DWORD *)v1 + 10) = 0;
    if ( v5 )
      (*(void (**)(void))(*(_DWORD *)v5 + 4))();
    (*(void (**)(void))(**((_DWORD **)v1 + 17) + 44))();
    *((_DWORD *)v1 + 21) = 0;
    *((_DWORD *)v1 + 22) = 0;
    *((_DWORD *)v1 + 23) = 0;
    Minecraft::resetGameSession(*((Minecraft **)v1 + 7));
    result = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v1 + 6));
    if ( result != v1 )
      result = (ClientInstance *)MinecraftGame::queueSubclientRemoval(*((MinecraftGame **)v1 + 6), *((_BYTE *)v1 + 668));
  return result;
}


int __fastcall ClientInstance::setUITexture(int result, mce::Texture *a2)
{
  *(_DWORD *)(result + 192) = a2;
  return result;
}


int __fastcall ClientInstance::getTopScreen(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  SceneStack *v2; // r0@4
  int result; // r0@4

  v1 = this;
  if ( ((ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) != this
     || SceneStack::isEmpty(*((SceneStack **)v1 + 154)) != 1)
    && SceneStack::isEmpty(*((SceneStack **)v1 + 154)) != 1 )
  {
    result = SceneStack::getTopScreen(*((SceneStack **)v1 + 154));
  }
  else
    v2 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v1 + 6));
    result = SceneStack::getTopScreen(v2);
  return result;
}


char *__fastcall ClientInstance::getClientPlayMode(ClientInstance *this)
{
  return (char *)this + 116;
}


int __fastcall ClientInstance::tickBuildAction(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int v2; // r6@1
  int result; // r0@2
  Timer *v4; // r10@3
  int *v5; // r1@4
  signed int v6; // r9@9
  int v7; // r0@13
  Level *v8; // r11@13
  bool v9; // zf@13
  int *v10; // r0@16
  int v11; // r7@17
  int v12; // r5@17
  int v13; // r5@17
  const BlockPos *v14; // r8@17
  int v15; // r9@20
  int (__fastcall *v16)(int, const BlockPos *, _DWORD, char *); // r5@20
  char *v17; // r0@20
  char *v18; // r0@22
  int v19; // r2@23
  int v20; // r0@27
  bool v21; // zf@27
  int v22; // r6@33
  void (__fastcall *v23)(int, const BlockPos *, _DWORD); // r5@33
  char *v24; // r0@33
  void *v25; // r0@34
  char v26; // [sp+3h] [bp-25h]@20

  v1 = this;
  v2 = *((_DWORD *)this + 23);
  if ( !v2 || (result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 784))(*((_DWORD *)this + 23))) == 0 )
  {
    v4 = (Timer *)Minecraft::getTimer(*((Minecraft **)v1 + 7));
    if ( ClientInputHandler::allowInteract(*((ClientInputHandler **)v1 + 16)) == 1 )
    {
      v5 = (int *)*((_DWORD *)v1 + 24);
      if ( v5 )
      {
        if ( v2 )
        {
          LocalPlayer::registerFramewiseActionOrStop((LocalPlayer *)v2);
          v5 = (int *)*((_DWORD *)v1 + 24);
        }
        if ( *v5 & 8 || !(*v5 & 3) )
          ClientInputCallbacks::handleBuildAction(v1, v5);
          v6 = 1;
        else
          v6 = 0;
      }
      else
        v6 = 0;
    }
    else
      v6 = 0;
    v7 = Minecraft::getLevel(*((Minecraft **)v1 + 7));
    v8 = (Level *)v7;
    v9 = v2 == 0;
    if ( v2 )
      v9 = v7 == 0;
    if ( v9 )
      goto LABEL_37;
    v10 = (int *)*((_DWORD *)v1 + 24);
    if ( v10 )
      v11 = *v10;
      v12 = *v10 & 0x21;
      v13 = v12 != 0;
      v14 = (const BlockPos *)(Level::getHitResult(v8) + 8);
      if ( v11 & 6 )
        if ( !*(_DWORD *)Level::getHitResult(v8) && !Level::getHitResult(v8)[64] )
          v15 = *(_DWORD *)(v2 + 5172);
          v16 = *(int (__fastcall **)(int, const BlockPos *, _DWORD, char *))(*(_DWORD *)v15 + 16);
          v17 = Level::getHitResult(v8);
          if ( v16(v15, v14, v17[4], &v26) == 1 )
          {
            if ( Timer::getTicks(v4) > *((_DWORD *)v1 + 25) )
            {
              v18 = Level::getHitResult(v8);
              Player::crackBlock((Player *)v2, v14, v18[4]);
            }
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 1276))(v2);
            if ( v26 )
              ClientInputCallbacks::vibrate(v1, (ClientInstance *)0x18, v19);
            goto LABEL_37;
          }
          v25 = (void *)*((_DWORD *)v1 + 24);
          if ( v25 )
            *((_DWORD *)v1 + 24) = 0;
            operator delete(v25);
LABEL_36:
        ClientInstance::stopDestroying(v1);
LABEL_37:
        result = Timer::getTicks(v4);
        *((_DWORD *)v1 + 25) = result;
        return result;
      v13 = 0;
    if ( !*(_BYTE *)(v2 + 5228) )
      v20 = *(_DWORD *)Level::getHitResult(v8);
      v21 = v20 == 0;
      if ( !v20 )
        v21 = v13 == 1;
      if ( v21 && !((Level::getHitResult(v8)[64] != 0) | v6) )
        v22 = *(_DWORD *)(v2 + 5172);
        v23 = *(void (__fastcall **)(int, const BlockPos *, _DWORD))(*(_DWORD *)v22 + 32);
        v24 = Level::getHitResult(v8);
        v23(v22, v14, v24[4]);
        (*(void (**)(void))(**(_DWORD **)(v2 + 5172) + 36))();
    goto LABEL_36;
  }
  return result;
}


int __fastcall ClientInstance::setVoiceSystem(int a1, int *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int result; // r0@1

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  result = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(v2 + 56) = v3;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


int __fastcall ClientInstance::getServerConnectionTime(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int result; // r0@1
  __int64 v9; // [sp+0h] [bp-10h]@1

  v1 = this;
  sub_DA7B9C(&v9);
  _R0 = _aeabi_l2d(v9 - *((_DWORD *)v1 + 172), (unsigned __int64)(v9 - *((_QWORD *)v1 + 86)) >> 32);
  __asm
  {
    VLDR            D0, =1.0e-9
    VMOV            D1, R0, R1
    VMUL.F64        D0, D1, D0
    VMOV            R0, R1, D0
  }
  return result;
}


signed int __fastcall ClientInstance::useLowFrequencyUIRender(ClientInstance *this)
{
  ClientInstance *v1; // r5@1
  GameRenderer *v2; // r0@1
  signed int v3; // r4@1

  v1 = this;
  v2 = (GameRenderer *)MinecraftGame::getGameRenderer(*((MinecraftGame **)this + 6));
  v3 = 0;
  if ( GameRenderer::useLowFrequencyUIRender(v2) == 1
    && (unsigned int)MinecraftGame::getClientInstanceCount(*((MinecraftGame **)v1 + 6)) > 1 )
  {
    v3 = 1;
  }
  return v3;
}


void __fastcall ClientInstance::onGameSessionReset(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  MinecraftCommands *v2; // r0@2
  CommandRegistry *v3; // r5@2
  MinecraftGame *v4; // r2@2
  ClientCommands *v5; // r0@5
  MinecraftGame *v6; // r2@5

  v1 = this;
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) == this )
  {
    v2 = (MinecraftCommands *)Minecraft::getCommands(*((Minecraft **)v1 + 7));
    v3 = (CommandRegistry *)MinecraftCommands::getRegistry(v2);
    if ( CommandRegistry::hasCommands(v3) )
      CommandRegistry::popState(v3);
    else
      ClientCommands::init(v3, *((CommandRegistry **)v1 + 6), v4);
    CommandRegistry::pushState(v3);
    v5 = (ClientCommands *)Minecraft::getCommands(*((Minecraft **)v1 + 7));
    ClientCommands::setupStartMenuScreen(v5, *((MinecraftCommands **)v1 + 6), v6);
    j_j_j__ZN15CommandRegistry5readyEv(v3);
  }
}


int __fastcall ClientInstance::getScreen(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  SceneStack *v2; // r0@3
  int result; // r0@3

  v1 = this;
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) != this
    || SceneStack::isEmpty(*((SceneStack **)v1 + 154)) != 1 )
  {
    result = SceneStack::getScreen(*((SceneStack **)v1 + 154));
  }
  else
    v2 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v1 + 6));
    result = SceneStack::getScreen(v2);
  return result;
}


int __fastcall ClientInstance::getOptions(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  const ClientInstance *v2; // r0@1
  char *v3; // r0@1
  int v4; // r5@1
  int v5; // r4@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r0@4
  unsigned int *v8; // r6@8
  unsigned int v9; // r0@10
  Social::User *v11; // [sp+0h] [bp-18h]@1
  int v12; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = (const ClientInstance *)MinecraftGame::getUserManager(*((MinecraftGame **)this + 6));
  Social::UserManager::getUser((Social::UserManager *)&v11, v2, (int)v1);
  v3 = Social::User::getOptions(v11);
  v4 = v12;
  v5 = *(_DWORD *)v3;
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
      v8 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
  return v5;
}


char *__fastcall ClientInstance::getShaderColor(ClientInstance *this)
{
  return (char *)this + 564;
}


int __fastcall ClientInstance::getCurrentSceneStack(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) == this )
    result = j_j_j__ZN12SceneFactory20getCurrentSceneStackEv(*((SceneFactory **)v1 + 19));
  else
    result = *((_DWORD *)v1 + 154);
  return result;
}


int __fastcall ClientInstance::getOptions(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  const ClientInstance *v2; // r0@1
  int v3; // r4@1
  int v4; // r5@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r6@8
  unsigned int v8; // r0@10
  Social::User *v10; // [sp+0h] [bp-18h]@1
  int v11; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = (const ClientInstance *)MinecraftGame::getUserManager(*((MinecraftGame **)this + 6));
  Social::UserManager::getUser((Social::UserManager *)&v10, v2, (int)v1);
  v3 = v11;
  v4 = *(_DWORD *)Social::User::getOptions(v10);
  if ( v3 )
  {
    v5 = (unsigned int *)(v3 + 4);
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
      v7 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  return v4;
}


int __fastcall ClientInstance::useController(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( (unsigned int)(ClientInputHandler::getCurrentInputMode(*((ClientInputHandler **)this + 16)) - 3) >= 2 )
    result = (*(int (**)(void))(**((_DWORD **)v1 + 13) + 108))();
  else
    result = 1;
  return result;
}


int __fastcall ClientInstance::setCreditsCallback(int a1, int a2)
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
  v9 = v4 + 132;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 132);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 140);
  v10 = v13;
  *(_DWORD *)(v4 + 140) = v8;
  v14 = *(_DWORD *)(v4 + 144);
  *(_DWORD *)(v4 + 144) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


int __fastcall ClientInstance::setPlayer(int result, LocalPlayer *a2)
{
  *(_DWORD *)(result + 92) = a2;
  return result;
}


signed int __fastcall ClientInstance::isExitingLevel(ClientInstance *this)
{
  signed int result; // r0@2
  unsigned int v2; // r1@3

  if ( *((_BYTE *)this + 678) )
  {
    result = 1;
  }
  else
    v2 = *((_DWORD *)this + 29) - 7;
    result = 0;
    if ( v2 < 2 )
      result = 1;
  return result;
}


_DWORD *__fastcall ClientInstance::adjustGazeCursorByMouse(ClientInstance *this, float a2, float a3)
{
  ClientInstance *v3; // r4@1
  Options *v11; // r0@1
  GuiData *v14; // r5@9
  _DWORD *result; // r0@9
  float v20; // [sp+8h] [bp-80h]@9
  float v21; // [sp+Ch] [bp-7Ch]@9
  char v22; // [sp+10h] [bp-78h]@9

  v3 = this;
  _R5 = a3;
  _R6 = a2;
  _R7 = GuiData::getScreenSizeData(*((GuiData **)this + 164));
  __asm
  {
    VMOV.F32        S16, #2.0
    VLDR            S20, [R7]
    VMOV.F32        S18, #4.0
    VLDR            S22, [R7,#4]
    VMOV            S24, R5
  }
  v11 = (Options *)ClientInstance::getOptions(v3);
  _R0 = Options::getVRMouseUISensitivity(v11);
  __asm { VDIV.F32        S2, S20, S22 }
  _R1 = *((_DWORD *)v3 + 13);
    VLDR            S0, [R7,#4]
    VMOV            S6, R6
    VMUL.F32        S4, S24, S18
    VLDR            S10, [R1,#0x2CC]
    VDIV.F32        S0, S16, S0
    VMUL.F32        S6, S6, S18
    VMUL.F32        S2, S4, S2
    VMOV            S4, R0
    VMOV.F32        S8, #-1.0
    VMOV.F32        S12, #1.0
    VMUL.F32        S6, S6, S4
    VMUL.F32        S2, S2, S4
    VLDR            S4, [R1,#0x2C8]
    VADD.F32        S16, S0, S8
    VSUB.F32        S0, S12, S0
    VADD.F32        S4, S4, S6
    VSUB.F32        S2, S10, S2
    VMOV.F32        S18, S16
    VCMPE.F32       S4, S16
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, S16
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S18, S4 }
    VCMPE.F32       S4, S0
    __asm { VMOVGT.F32      S16, S2 }
    VCMPE.F32       S2, S0
    __asm { VMOVGT.F32      S18, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S16, S0 }
    VSTR            S18, [R1,#0x2C8]
    VSTR            S16, [R1,#0x2CC]
  HolographicPlatform::getTransform((int)&v20, _R1, 6, 5, 0);
    VLDR            S0, [SP,#0x88+var_80]
    VLDR            S2, [SP,#0x88+var_7C]
    VLDR            S4, [SP,#0x88+var_70]
    VMUL.F32        S0, S0, S18
    VLDR            S6, [SP,#0x88+var_6C]
    VMUL.F32        S2, S2, S18
    VMUL.F32        S4, S4, S16
  v14 = (GuiData *)*((_DWORD *)v3 + 164);
    VMUL.F32        S6, S6, S16
    VADD.F32        S0, S4, S0
    VLDR            S4, [SP,#0x88+var_50]
    VADD.F32        S2, S6, S2
    VLDR            S6, [SP,#0x88+var_4C]
    VADD.F32        S20, S0, S4
    VADD.F32        S22, S2, S6
  _R0 = GuiData::getGuiScale(*((GuiData **)v3 + 164));
  __asm { VMOV            S24, R0 }
  _R0 = GuiData::getGuiScale(v14);
    VMOV            S0, R0
    VMUL.F32        S20, S24, S20
    VMUL.F32        S22, S0, S22
  v20 = COERCE_FLOAT(ClientInputHandler::getCurrentInputMode(*((ClientInputHandler **)v3 + 16)));
    VCVTR.S32.F32   S0, S20
    VCVTR.S32.F32   S2, S22
    VMOV            R0, S0
  LOWORD(v21) = _R0;
  __asm { VMOV            R0, S2 }
  HIWORD(v21) = _R0;
  v22 = 0;
  ClientInputCallbacks::handlePointerLocation(v3, (int)&v20, 0);
  *(_BYTE *)(MinecraftGame::getGameRenderer(*((MinecraftGame **)v3 + 6)) + 812) = 1;
  MinecraftGame::getGameRenderer(*((MinecraftGame **)v3 + 6));
    VSTR            S18, [R0,#0x180]
    VSTR            S16, [R0,#0x184]
  result = (_DWORD *)ClientInputHandler::getHoloUIInputMode(*((ClientInputHandler **)v3 + 16));
  if ( result != (_DWORD *)3 )
    result = ClientInputHandler::updateHoloUIInputMode(*((unsigned __int64 **)v3 + 16), 3, 0);
  return result;
}


void __fastcall ClientInstance::onClientCreatedLevel(int a1, int *a2, int *a3)
{
  ClientInstance::onClientCreatedLevel(a1, a2, a3);
}


  if ( ClientInstance::isScreenReplaceable(a2) == 1 )
{
    v3 = ClientInstance::getClientSceneStack(v2);
    v4 = ClientInstance::getSceneFactory(v2);
    SceneFactory::createPauseScreen((SceneFactory *)&v10, v4);
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


void __fastcall ClientInstance::init(ClientInstance *this, SoundEngine *a2, minecraft::api::Api *a3, FilePathManager *a4, NetworkHandler *a5, Timer *a6, Timer *a7, Social::UserManager *a8, int a9)
{
  unsigned __int64 v9; // r8@1
  FilePathManager *v10; // r11@1
  ClientInstance *v11; // r4@1
  HolographicPlatform *v12; // r5@1
  int v13; // r0@1
  VoiceSystem *v14; // r5@3
  int v15; // r0@3
  int v16; // r1@5
  TaskGroup *v17; // r0@5
  TaskGroup *v18; // r0@6
  char v19; // r6@7
  void *v20; // r5@7
  int v21; // r0@7
  SoundEngine *v22; // r0@9
  __int64 v23; // r0@9
  int v24; // r6@9
  int v25; // r0@10
  __int64 v26; // kr00_8@11
  int v27; // r8@11
  int v28; // r10@11
  int v29; // r9@11
  void *v30; // r5@11
  char v31; // r2@11
  __int64 v32; // ST08_8@11
  Minecraft *v33; // r0@13
  Minecraft *v34; // r0@14
  ClientInstanceTestInterface *v35; // r5@15
  int v36; // r0@15
  AppPlatform **v37; // r0@18
  char v38; // r6@20
  void *v39; // r5@20
  CachedScenes *v40; // r0@20
  CachedScenes *v41; // r0@21
  MinecraftGame *v42; // r6@22
  void *v43; // r5@22
  SceneFactory *v44; // r0@22
  SceneFactory *v45; // r0@23
  AppPlatform **v46; // r0@25
  int *v47; // r0@27
  void *v48; // r5@27
  int v49; // r0@27
  void *v50; // r0@29
  MinecraftInputHandler *v51; // r0@30
  int v52; // r5@32
  void (__fastcall *v53)(int, _DWORD **); // r6@32
  _DWORD *v54; // r0@32
  __int64 v55; // r1@32
  int v56; // r5@34
  void (__fastcall *v57)(int, _DWORD **); // r6@34
  _DWORD *v58; // r0@34
  __int64 v59; // r1@34
  MobEffectsLayout *v60; // r5@36
  int v61; // r6@36
  void *v62; // r0@37
  const ClientInstance *v63; // r0@40
  char *v64; // r0@40
  int v65; // r5@41
  unsigned int *v66; // r1@42
  unsigned int v67; // r0@44
  unsigned int *v68; // r6@48
  unsigned int v69; // r0@50
  int v70; // r6@55
  _DWORD *v71; // r5@55
  unsigned int *v72; // r0@56
  unsigned int v73; // r1@58
  int v74; // r0@61
  unsigned int *v75; // r2@62
  unsigned int v76; // r1@64
  SkinRepositoryClientInterface *v77; // r0@69
  SkinRepositoryClientInterface *v78; // r0@70
  int v79; // r5@71
  unsigned int *v80; // r1@72
  unsigned int v81; // r0@74
  unsigned int *v82; // r6@78
  unsigned int v83; // r0@80
  char *v84; // r0@85
  unsigned int *v85; // r2@87
  signed int v86; // r1@89
  unsigned int *v87; // r2@91
  signed int v88; // r1@93
  unsigned int *v89; // r2@95
  signed int v90; // r1@97
  int v91; // [sp+14h] [bp-DCh]@0
  unsigned __int64 v92; // [sp+44h] [bp-ACh]@9
  int v93; // [sp+4Ch] [bp-A4h]@55
  int v94; // [sp+50h] [bp-A0h]@55
  int v95; // [sp+54h] [bp-9Ch]@55
  int v96; // [sp+5Ch] [bp-94h]@40
  int v97; // [sp+60h] [bp-90h]@41
  char v98; // [sp+64h] [bp-8Ch]@40
  const char *v99; // [sp+6Ch] [bp-84h]@40
  char *v100; // [sp+70h] [bp-80h]@40
  char *v101; // [sp+74h] [bp-7Ch]@40
  int v102; // [sp+78h] [bp-78h]@40
  _DWORD *v103; // [sp+7Ch] [bp-74h]@34
  __int64 v104; // [sp+84h] [bp-6Ch]@34
  _DWORD *v105; // [sp+8Ch] [bp-64h]@32
  __int64 v106; // [sp+94h] [bp-5Ch]@32
  int v107; // [sp+9Ch] [bp-54h]@27
  __int64 v108; // [sp+A0h] [bp-50h]@17
  int v109; // [sp+A8h] [bp-48h]@5
  int v110; // [sp+ACh] [bp-44h]@11
  __int64 v111; // [sp+B0h] [bp-40h]@40
  const char *v112; // [sp+B8h] [bp-38h]@40
  int v113; // [sp+BCh] [bp-34h]@40
  int v114; // [sp+C0h] [bp-30h]@55
  int v115; // [sp+C4h] [bp-2Ch]@55

  v9 = __PAIR__((unsigned int)a2, (unsigned int)a3);
  v10 = a4;
  v11 = this;
  ClientInstance::registerToUserManager(this, a8, a9);
  v12 = (HolographicPlatform *)operator new(0x2D4u);
  HolographicPlatform::HolographicPlatform(v12);
  v13 = *((_DWORD *)v11 + 13);
  *((_DWORD *)v11 + 13) = v12;
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  v14 = (VoiceSystem *)operator new(8u);
  VoiceSystem::VoiceSystem(v14);
  v15 = *((_DWORD *)v11 + 14);
  *((_DWORD *)v11 + 14) = v14;
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  std::make_unique<TaskGroup,WorkerPool &,char const(&)[20]>(&v109, WorkerPool::ASYNC, "A client task group");
  v16 = v109;
  v109 = 0;
  v17 = (TaskGroup *)*((_DWORD *)v11 + 157);
  *((_DWORD *)v11 + 157) = v16;
  if ( v17 )
  {
    v18 = TaskGroup::~TaskGroup(v17);
    operator delete((void *)v18);
  }
  v19 = *((_BYTE *)v11 + 668);
  v20 = operator new(0x1Cu);
  LoopbackPacketSender::LoopbackPacketSender((int)v20, v19, (int)a5);
  v21 = *((_DWORD *)v11 + 12);
  *((_DWORD *)v11 + 12) = v20;
  if ( v21 )
    (*(void (**)(void))(*(_DWORD *)v21 + 4))();
  v92 = v9;
  v22 = (SoundEngine *)MinecraftGame::getSoundEngine(*((MinecraftGame **)v11 + 6));
  SoundEngine::addListener(v22, *((_BYTE *)v11 + 668));
  LODWORD(v23) = operator new(0x18u);
  v24 = v23;
  ExternalFileLevelStorageSource::ExternalFileLevelStorageSource(v23);
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v11 + 6)) == v11 )
    v25 = MinecraftGame::getUserManager(*((MinecraftGame **)v11 + 6));
    ExternalFileLevelStorageSource::addObserver(v24, v25);
  v26 = *(_QWORD *)((char *)v11 + 20);
  v27 = MinecraftGame::getEventing((MinecraftGame *)HIDWORD(v26));
  v28 = *((_DWORD *)v11 + 12);
  v29 = MinecraftGame::getContentTierManager(*((MinecraftGame **)v11 + 6));
  v30 = operator new(0x90u);
  v31 = *((_BYTE *)v11 + 668);
  v110 = v24;
  HIDWORD(v32) = &unk_27C5A10;
  LODWORD(v32) = &dword_27C59F8;
  Minecraft::Minecraft(
    (int)v30,
    v26,
    (int)v11,
    (int)v11 + 4,
    SHIDWORD(v92),
    v92,
    v32,
    (int)v10,
    v91,
    0LL,
    v27,
    (int)a5,
    v28,
    v31,
    (int)a6,
    (int)a7,
    v29,
    &v110);
  if ( v110 )
    (*(void (**)(void))(*(_DWORD *)v110 + 4))();
  v33 = (Minecraft *)*((_DWORD *)v11 + 7);
  *((_DWORD *)v11 + 7) = v30;
  if ( v33 )
    v34 = Minecraft::~Minecraft(v33);
    operator delete((void *)v34);
  v35 = (ClientInstanceTestInterface *)operator new(8u);
  ClientInstanceTestInterface::ClientInstanceTestInterface(v35, v11);
  v36 = *((_DWORD *)v11 + 8);
  *((_DWORD *)v11 + 8) = v35;
  if ( v36 )
    (*(void (**)(void))(*(_DWORD *)v36 + 4))();
    v35 = (ClientInstanceTestInterface *)*((_DWORD *)v11 + 8);
  (*(void (__fastcall **)(ClientInstanceTestInterface *))(*(_DWORD *)v35 + 8))(v35);
  *(_QWORD *)((char *)v11 + 604) = *(_QWORD *)&Vec3::ZERO;
  *((_DWORD *)v11 + 153) = dword_2822498;
  sub_DA7B9C(&v108);
  *((_QWORD *)v11 + 19) = v108;
  *((_BYTE *)v11 + 160) = 0;
  sub_DA78A4((void **)v11 + 41, (char *)&unk_257BC67, 0);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v37 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v37 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v38 = AppPlatform::isLowMemoryDevice(*v37);
  v39 = operator new(0x20u);
  CachedScenes::CachedScenes((int)v39, v38);
  v40 = (CachedScenes *)*((_DWORD *)v11 + 20);
  *((_DWORD *)v11 + 20) = v39;
  if ( v40 )
    v41 = CachedScenes::~CachedScenes(v40);
    operator delete((void *)v41);
  v42 = (MinecraftGame *)*((_DWORD *)v11 + 6);
  v43 = operator new(0x14u);
  SceneFactory::SceneFactory((int)v43, v42, v11);
  v44 = (SceneFactory *)*((_DWORD *)v11 + 19);
  *((_DWORD *)v11 + 19) = v43;
  if ( v44 )
    v45 = SceneFactory::~SceneFactory(v44);
    operator delete((void *)v45);
    v46 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v46 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v47 = AppPlatform::getTempPath(*v46);
  sub_DA73B4(&v107, v47);
  sub_DA73D4((const void **)&v107, "/ServerContent", 0xEu);
  v48 = operator new(0x2Cu);
  ServerContentService::ServerContentService((int)v48, &v107);
  v49 = *((_DWORD *)v11 + 155);
  *((_DWORD *)v11 + 155) = v48;
  if ( v49 )
    (*(void (**)(void))(*(_DWORD *)v49 + 4))();
  v50 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v107 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
    }
    else
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j_j__ZdlPv_9(v50);
  ClientInstance::_initSceneStack(v11);
  v51 = (MinecraftInputHandler *)MinecraftGame::getInput(*((MinecraftGame **)v11 + 6));
  if ( v51 )
    MinecraftInputHandler::initClientInput(v51, v11);
  v52 = *((_DWORD *)v11 + 17);
  v53 = *(void (__fastcall **)(int, _DWORD **))(*(_DWORD *)v52 + 60);
  v54 = operator new(4u);
  LODWORD(v55) = sub_BE85F0;
  *v54 = v11;
  HIDWORD(v55) = sub_BE85E4;
  v105 = v54;
  v106 = v55;
  v53(v52, &v105);
  if ( (_DWORD)v106 )
    ((void (*)(void))v106)();
  v56 = *((_DWORD *)v11 + 17);
  v57 = *(void (__fastcall **)(int, _DWORD **))(*(_DWORD *)v56 + 56);
  v58 = operator new(4u);
  LODWORD(v59) = sub_BE8636;
  *v58 = v11;
  HIDWORD(v59) = sub_BE8626;
  v103 = v58;
  v104 = v59;
  v57(v56, &v103);
  if ( (_DWORD)v104 )
    ((void (*)(void))v104)();
  v60 = (MobEffectsLayout *)operator new(0x40u);
  MobEffectsLayout::MobEffectsLayout(v60, v11);
  v61 = *((_DWORD *)v11 + 165);
  *((_DWORD *)v11 + 165) = v60;
  if ( v61 )
    v62 = *(void **)(v61 + 20);
    if ( v62 )
      operator delete(v62);
    operator delete((void *)v61);
  v63 = (const ClientInstance *)MinecraftGame::getUserManager(*((MinecraftGame **)v11 + 6));
  Social::UserManager::getUser((Social::UserManager *)&v96, v63, (int)v11);
  Social::User::getSettingsDirectoryPath((Social::User *)&v98, v96);
  v111 = *(_QWORD *)&v98;
  v112 = "custom.png";
  v113 = -1;
  Core::PathBuffer<std::string>::_join<Core::PathPart>((const void **)&v99, (unsigned int)&v111, 2u);
  sub_DA7364((void **)&v100, v99);
  v101 = v100;
  v100 = (char *)&unk_28898CC;
  v102 = 3;
  v64 = (char *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v99 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j_j__ZdlPv_9(v64);
  v65 = v97;
  if ( v97 )
    v66 = (unsigned int *)(v97 + 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 == 1 )
      v68 = (unsigned int *)(v65 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v65 + 8))(v65);
      if ( &pthread_create )
      {
        __dmb();
        do
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
      }
      else
        v69 = (*v68)--;
      if ( v69 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v65 + 12))(v65);
  v70 = MinecraftGame::getSkinRepository(*((MinecraftGame **)v11 + 6));
  ClientInstance::getOptionsPtr((ClientInstance *)&v94, (int)v11);
  v93 = ClientInstance::getUserId(v11);
  v71 = operator new(0xA0u);
  v114 = v94;
  v115 = v95;
  if ( v95 )
    v72 = (unsigned int *)(v95 + 8);
        v73 = __ldrex(v72);
      while ( __strex(v73 + 1, v72) );
      ++*v72;
  SkinRepositoryClientInterface::SkinRepositoryClientInterface(v71, v70, (int)&v114, (unsigned int *)&v93, (int)&v101);
  v74 = v115;
  if ( v115 )
    v75 = (unsigned int *)(v115 + 8);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 == 1 )
      (*(void (**)(void))(*(_DWORD *)v74 + 12))();
  v77 = (SkinRepositoryClientInterface *)*((_DWORD *)v11 + 168);
  *((_DWORD *)v11 + 168) = v71;
  if ( v77 )
    v78 = SkinRepositoryClientInterface::~SkinRepositoryClientInterface(v77);
    operator delete((void *)v78);
  v79 = v95;
    v80 = (unsigned int *)(v95 + 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 == 1 )
      v82 = (unsigned int *)(v79 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v79 + 8))(v79);
          v83 = __ldrex(v82);
        while ( __strex(v83 - 1, v82) );
        v83 = (*v82)--;
      if ( v83 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v79 + 12))(v79);
  SkinRepositoryClientInterface::initialize(*((SkinRepositoryClientInterface **)v11 + 168));
  ClientInstance::_loadProfanityFilter(v11);
  v84 = v101 - 12;
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v101 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j_j__ZdlPv_9(v84);
}


int __fastcall ClientInstance::update(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  unsigned int v2; // r5@9
  void *v3; // r0@9
  int v4; // r5@11
  void (__fastcall *v5)(int, signed int); // r6@11
  Social::UserManager *v6; // r0@11
  signed int v7; // r0@11
  int v8; // r5@12
  int *v9; // r6@12
  int v11; // r5@18
  unsigned int *v12; // r1@19
  unsigned int v13; // r0@21
  unsigned int *v14; // r6@25
  unsigned int v15; // r0@27
  unsigned int *v16; // r2@29
  signed int v17; // r1@31
  char v18; // [sp+4h] [bp-24h]@18
  int v19; // [sp+8h] [bp-20h]@18
  int v20; // [sp+Ch] [bp-1Ch]@9

  v1 = this;
  *((_BYTE *)this + 128) = 1;
  if ( *((_BYTE *)this + 677) )
  {
    if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) == this )
    {
      MinecraftGame::startLeaveGame(*((MinecraftGame **)v1 + 6));
      ClientInstance::_startLeaveGame(v1);
      if ( !*((_BYTE *)v1 + 676) )
        ClientInstance::_syncDestroyGame(v1);
    }
    else
      if ( *((_BYTE *)v1 + 679) )
      {
        SceneStack::flushStack(*((SceneStack **)v1 + 154), 1, 0);
      }
    *((_BYTE *)v1 + 677) = 0;
  }
  else if ( !*((_BYTE *)this + 678) )
    *((_BYTE *)this + 120) = Minecraft::update(*((Minecraft **)this + 7));
    (*(void (**)(void))(**((_DWORD **)v1 + 8) + 12))();
    if ( (*(int (**)(void))(**((_DWORD **)v1 + 13) + 44))() == 1 )
      ClientInstance::_processNewGazeHoloScreenData(v1);
    MinecraftKeyboardManager::delayedInputResume(*((MinecraftKeyboardManager **)v1 + 17));
    if ( *((_BYTE *)v1 + 121) )
      SceneStack::getScreenName((SceneStack *)&v20, *((__int64 **)v1 + 154));
      v2 = sub_DA7BFC(&v20, "progress_screen", 0, 0xFu);
      v3 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v20 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9(v3);
      if ( v2 == -1 )
        v4 = MinecraftGame::getUserManager(*((MinecraftGame **)v1 + 6));
        v5 = *(void (__fastcall **)(int, signed int))(*(_DWORD *)v4 + 76);
        v6 = (Social::UserManager *)MinecraftGame::getUserManager(*((MinecraftGame **)v1 + 6));
        v7 = Social::UserManager::getClientCID(v6, v1);
        v5(v4, v7);
        if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v1 + 6)) == v1 )
          v9 = (int *)((char *)v1 + 76);
          v8 = SceneFactory::getCurrentSceneStack(*((SceneFactory **)v1 + 19));
          v8 = *((_DWORD *)v1 + 154);
        SceneFactory::createGamepadDisconnectScreen((SceneFactory *)&v18, *v9);
        SceneStack::pushScreen(v8, (int)&v18, 0);
        v11 = v19;
        if ( v19 )
          v12 = (unsigned int *)(v19 + 4);
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
        *((_BYTE *)v1 + 121) = 0;
  *((_BYTE *)v1 + 128) = 0;
  return *((_BYTE *)v1 + 120);
}


void __fastcall ClientInstance::setDisableInput(ClientInstance *this, int a2)
{
  ClientInstance::setDisableInput(this, a2);
}


int __fastcall ClientInstance::onGuiScaleOffsetChanged(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  char *v2; // r5@1
  int v3; // r0@1
  Option *v4; // r0@1
  int v5; // r6@1
  int v6; // r0@1
  Option *v7; // r0@1
  int v8; // r0@1

  v1 = this;
  v2 = GuiData::getScreenSizeData(*((GuiData **)this + 164));
  v3 = ClientInstance::getOptions(v1);
  v4 = (Option *)Options::get(v3, 40);
  v5 = Option::getFloat(v4);
  v6 = ClientInstance::getOptions(v1);
  v7 = (Option *)Options::get(v6, 39);
  v8 = Option::getInt(v7);
  return ClientInstance::_updateScreenSizeVariables(*(float *)&v1, v2, v5, v8, 0);
}


int __fastcall ClientInstance::onTick(ClientInstance *this, int a2, int a3)
{
  int v3; // r9@1
  int v4; // r6@1
  ClientInstance *v5; // r4@1
  int v6; // r0@1
  int v7; // r7@2
  void (__fastcall *v8)(int, signed int); // r5@2
  signed int v9; // r0@2
  int v10; // r7@4
  Level *v11; // r8@5
  GameRenderer *v12; // r0@5
  GameRenderer *v13; // r0@5
  Entity *v14; // r1@5
  SceneStack *v15; // r0@9
  int v16; // r0@11
  int v17; // r0@12
  bool v18; // zf@12
  mce::TextureGroup *v19; // r0@16
  int v20; // r5@18
  SceneStack *v21; // r0@19
  _DWORD *v22; // r0@21
  SceneStack *v23; // r0@24
  _DWORD *v25; // [sp+4h] [bp-34h]@21
  void (*v26)(void); // [sp+Ch] [bp-2Ch]@21
  int (__fastcall *v27)(_QWORD **, _DWORD *); // [sp+10h] [bp-28h]@21
  int v28; // [sp+14h] [bp-24h]@1
  int v29; // [sp+18h] [bp-20h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v28 = a3;
  v29 = a2;
  v6 = *((_DWORD *)this + 23);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 5172);
    v8 = *(void (__fastcall **)(int, signed int))(*(_DWORD *)v7 + 68);
    v9 = OfferRepository::isTrial(*(OfferRepository **)(*((_DWORD *)v5 + 6) + 296));
    v8(v7, v9);
  }
  if ( !Minecraft::getSimPaused(*((Minecraft **)v5 + 7)) )
    v10 = *((_DWORD *)v5 + 10);
    if ( v10 )
    {
      v11 = (Level *)Minecraft::getLevel(*((Minecraft **)v5 + 7));
      MobEffectsLayout::tick(*((MobEffectsLayout **)v5 + 165));
      GuiData::tick(*((GuiData **)v5 + 164));
      v12 = (GameRenderer *)MinecraftGame::getGameRenderer(*((MinecraftGame **)v5 + 6));
      GameRenderer::setClient(v12, v5);
      v13 = (GameRenderer *)MinecraftGame::getGameRenderer(*((MinecraftGame **)v5 + 6));
      GameRenderer::tick(v13);
      LevelRenderer::tick((LevelRenderer *)v10);
      SeasonsRenderer::tick(*(SeasonsRenderer **)(v10 + 1572));
      v14 = (Entity *)*((_DWORD *)v5 + 23);
      if ( v14 )
        Level::animateTick(v11, v14);
      if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v5 + 6)) != v5
        || SceneStack::isEmpty(*((SceneStack **)v5 + 154)) != 1 )
      {
        v15 = (SceneStack *)*((_DWORD *)v5 + 154);
      }
      else
        v15 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v5 + 6));
      v16 = SceneStack::getScreen(v15);
      if ( (*(int (**)(void))(*(_DWORD *)v16 + 152))() == 1 )
        v17 = MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v5 + 6));
        v18 = v17 == (_DWORD)v5;
        if ( (ClientInstance *)v17 == v5 )
          v18 = v4 == v3;
        if ( v18 )
        {
          v19 = (mce::TextureGroup *)MinecraftGame::getTextures(*((MinecraftGame **)v5 + 6));
          mce::TextureGroup::tick(v19);
        }
        ParticleEngine::tick(*(ParticleEngine **)(v10 + 1568));
    }
  v20 = MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v5 + 6));
  if ( (ClientInstance *)v20 == v5 )
    v21 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v5 + 6));
    SceneStack::setScreenTickingFlag(v21, 1);
  SceneStack::setScreenTickingFlag(*((SceneStack **)v5 + 154), 1);
  if ( !*(_BYTE *)(*((_DWORD *)v5 + 6) + 444) )
    v22 = operator new(8u);
    *v22 = &v29;
    v22[1] = &v28;
    v25 = v22;
    v26 = (void (*)(void))sub_BEAF6C;
    v27 = sub_BEAF4C;
    ClientInstance::forEachVisibleScreen((int)v5, (int)&v25, 0);
    if ( v26 )
      v26();
    v23 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v5 + 6));
    SceneStack::setScreenTickingFlag(v23, 0);
  SceneStack::setScreenTickingFlag(*((SceneStack **)v5 + 154), 0);
  ClientInstance::updateScheduledScreen(v5);
  return (*(int (**)(void))(**((_DWORD **)v5 + 155) + 8))();
}


char *__fastcall ClientInstance::getDictationText(ClientInstance *this)
{
  return (char *)this + 164;
}


int __fastcall ClientInstance::setRealityModeToggleTriggered(int result, bool a2)
{
  *(_BYTE *)(result + 112) = a2;
  return result;
}


int __fastcall ClientInstance::_needsAsyncLateJoin(ClientInstance *this)
{
  ClientInstance *v1; // r5@1
  const ClientInstance *v2; // r0@1
  __int64 v3; // kr00_8@1
  Social::XboxLiveUserManager *v4; // r0@2
  int v5; // r5@4
  Skin *v6; // r0@7
  int v7; // r1@7
  SkinPack *v8; // r0@8
  Pack *v9; // r0@8
  PackManifest *v10; // r0@8
  signed int v11; // r0@8
  unsigned int *v12; // r1@13
  unsigned int v13; // r0@15
  unsigned int *v14; // r6@19
  unsigned int v15; // r0@21
  Social::User *v17; // [sp+0h] [bp-18h]@1

  v1 = this;
  v2 = (const ClientInstance *)MinecraftGame::getUserManager(*((MinecraftGame **)this + 6));
  Social::UserManager::getUser((Social::UserManager *)&v17, v2, (int)v1);
  v3 = *(_QWORD *)&v17;
  if ( Social::User::isReady(v17) == 1 )
  {
    v4 = (Social::XboxLiveUserManager *)Social::User::getLiveUser((Social::User *)v3);
    if ( Social::XboxLiveUserManager::isSignedIn(v4) || !Social::User::canSignInToXBL((Social::User *)v3) )
    {
      if ( MinecraftGame::isPrimaryLevelMultiplayer(*((MinecraftGame **)v1 + 6)) == 1 )
      {
        v6 = SkinRepositoryClientInterface::getSelectedSkin(*((SkinRepositoryClientInterface **)v1 + 168));
        if ( v6 )
        {
          v8 = (SkinPack *)Skin::getSkinPack(v6);
          v9 = (Pack *)SkinPack::getPack(v8);
          v10 = (PackManifest *)Pack::getManifest(v9);
          v7 = PackManifest::isPlatformLocked(v10) ^ 1;
          v11 = 1;
        }
        else
          v11 = 0;
        v5 = v11 & v7 ^ 1;
      }
      else
        v5 = 0;
    }
    else
      v5 = 1;
  }
  else
    v5 = 1;
  if ( HIDWORD(v3) )
    v12 = (unsigned int *)(HIDWORD(v3) + 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(HIDWORD(v3) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 8))(HIDWORD(v3));
      if ( &pthread_create )
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
  return v5;
}


unsigned int *__fastcall ClientInstance::getUser(ClientInstance *this, int a2)
{
  int v2; // r4@1
  ClientInstance *v3; // r5@1
  const ClientInstance *v4; // r0@1

  v2 = a2;
  v3 = this;
  v4 = (const ClientInstance *)MinecraftGame::getUserManager(*(MinecraftGame **)(a2 + 24));
  return Social::UserManager::getUser(v3, v4, v2);
}


int __fastcall ClientInstance::refreshScreenSizeData(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  char *v2; // r5@1
  int v3; // r0@1
  Option *v4; // r0@1
  int v5; // r6@1
  int v6; // r0@1
  Option *v7; // r0@1
  int v8; // r0@1

  v1 = this;
  v2 = GuiData::getScreenSizeData(*((GuiData **)this + 164));
  v3 = ClientInstance::getOptions(v1);
  v4 = (Option *)Options::get(v3, 40);
  v5 = Option::getFloat(v4);
  v6 = ClientInstance::getOptions(v1);
  v7 = (Option *)Options::get(v6, 39);
  v8 = Option::getInt(v7);
  return ClientInstance::_updateScreenSizeVariables(*(float *)&v1, v2, v5, v8, 0);
}


signed int __fastcall ClientInstance::getControllerId(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  Social::UserManager *v2; // r0@1

  v1 = this;
  v2 = (Social::UserManager *)MinecraftGame::getUserManager(*((MinecraftGame **)this + 6));
  return j_j_j__ZNK6Social11UserManager12getClientCIDERK14ClientInstance(v2, v1);
}


unsigned __int64 *__fastcall ClientInstance::_getScenePreparedForOffer(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  unsigned __int64 *v2; // r4@2
  _DWORD *v3; // r0@4
  int v4; // r5@7
  int v5; // r5@8
  int v6; // r0@8
  _DWORD *v8; // [sp+0h] [bp-28h]@4
  void (*v9)(void); // [sp+8h] [bp-20h]@4
  signed int (__fastcall *v10)(_DWORD *, int); // [sp+Ch] [bp-1Ch]@4
  char v11; // [sp+13h] [bp-15h]@4
  int v12; // [sp+14h] [bp-14h]@4

  v1 = this;
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) == this )
    v2 = (unsigned __int64 *)SceneFactory::getCurrentSceneStack(*((SceneFactory **)v1 + 19));
  else
    v2 = (unsigned __int64 *)*((_DWORD *)v1 + 154);
  v12 = 0;
  v11 = 0;
  v3 = operator new(8u);
  *v3 = &v12;
  v3[1] = &v11;
  v8 = v3;
  v9 = (void (*)(void))sub_BEBB08;
  v10 = sub_BEBA1C;
  SceneStack::forEachScreen(v2, (int)&v8, 1);
  if ( v9 )
    v9();
  if ( v11 )
  {
    v4 = v12;
    if ( v4 > SceneStack::getScheduledPopCount((SceneStack *)v2) )
    {
      v5 = v12;
      v6 = SceneStack::getScheduledPopCount((SceneStack *)v2);
      SceneStack::schedulePopScreen((SceneStack *)v2, v5 - v6);
    }
  }
  return v2;
}


StoreSearchQuery *__fastcall ClientInstance::_fetchStoreItem(int a1, int **a2, int *a3)
{
  int *v3; // r4@1
  int **v4; // r5@1
  int v5; // r0@1
  StoreSearchQuery *result; // r0@1
  int v7; // [sp+0h] [bp-20h]@1
  int (*v8)(void); // [sp+8h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(a1 + 24));
  v8 = 0;
  result = StoreCatalogRepository::fetchStoreItem(v5, v4, v3, (int)&v7);
  if ( v8 )
    result = (StoreSearchQuery *)v8();
  return result;
}


char *__fastcall ClientInstance::setupClientGame(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  UserAuthentication *v6; // r7@2
  const ClientInstance *v7; // r0@3
  Social::XboxLiveUserManager *v8; // r0@3
  int v9; // r0@4
  Social::XboxLiveUserManager *v10; // r0@4
  int v11; // r8@4
  int v12; // r7@4
  unsigned int *v13; // r1@5
  unsigned int v14; // r0@7
  unsigned int *v15; // r4@12
  unsigned int v16; // r0@14
  int v17; // r7@19
  unsigned int *v18; // r1@20
  unsigned int v19; // r0@22
  unsigned int *v20; // r4@26
  unsigned int v21; // r0@28
  int v22; // r0@32
  void (__fastcall *v23)(int *, int, signed int); // r3@35
  int v24; // r6@35
  void *v25; // r0@37
  int v26; // r1@37
  __int64 v27; // r0@41
  int v28; // r0@41
  int v29; // r11@41
  int v30; // r10@41
  char *v31; // r4@41
  int v32; // r6@41
  __int64 v33; // r8@41
  void *v34; // r7@41
  __int64 v35; // r2@41
  int *v36; // r0@41
  signed int v37; // r1@41
  int *v38; // r6@41
  int v39; // t1@42
  int v40; // r4@43
  char *result; // r0@47
  int v42; // [sp+0h] [bp-1A8h]@41
  int v43; // [sp+4h] [bp-1A4h]@43
  int v44; // [sp+8h] [bp-1A0h]@43
  int v45; // [sp+Ch] [bp-19Ch]@43
  int v46; // [sp+10h] [bp-198h]@43
  int v47; // [sp+14h] [bp-194h]@43
  int v48; // [sp+18h] [bp-190h]@43
  int v49; // [sp+1Ch] [bp-18Ch]@43
  int v50; // [sp+20h] [bp-188h]@43
  int v51; // [sp+24h] [bp-184h]@43
  int v52; // [sp+28h] [bp-180h]@43
  int v53; // [sp+2Ch] [bp-17Ch]@43
  int v54; // [sp+30h] [bp-178h]@43
  int v55; // [sp+34h] [bp-174h]@43
  int v56; // [sp+38h] [bp-170h]@43
  int v57; // [sp+3Ch] [bp-16Ch]@43
  int v58; // [sp+40h] [bp-168h]@43
  int v59; // [sp+44h] [bp-164h]@43
  int v60; // [sp+48h] [bp-160h]@43
  int v61; // [sp+4Ch] [bp-15Ch]@43
  int v62; // [sp+50h] [bp-158h]@43
  int v63; // [sp+54h] [bp-154h]@43
  int v64; // [sp+58h] [bp-150h]@43
  int v65; // [sp+5Ch] [bp-14Ch]@43
  int v66; // [sp+60h] [bp-148h]@43
  int v67; // [sp+64h] [bp-144h]@43
  int v68; // [sp+68h] [bp-140h]@43
  int v69; // [sp+6Ch] [bp-13Ch]@43
  int v70; // [sp+70h] [bp-138h]@43
  int v71; // [sp+74h] [bp-134h]@43
  int v72; // [sp+78h] [bp-130h]@43
  int v73; // [sp+7Ch] [bp-12Ch]@43
  int v74; // [sp+80h] [bp-128h]@43
  int v75; // [sp+84h] [bp-124h]@43
  int v76; // [sp+88h] [bp-120h]@43
  int v77; // [sp+8Ch] [bp-11Ch]@43
  int v78; // [sp+90h] [bp-118h]@41
  int v79; // [sp+94h] [bp-114h]@41
  int v80; // [sp+98h] [bp-110h]@41
  int v81; // [sp+9Ch] [bp-10Ch]@41
  __int64 v82; // [sp+A0h] [bp-108h]@41
  int v83; // [sp+A8h] [bp-100h]@41
  int v84; // [sp+ACh] [bp-FCh]@2
  void *v85; // [sp+B0h] [bp-F8h]@43
  int v86; // [sp+B4h] [bp-F4h]@35
  int v87; // [sp+B8h] [bp-F0h]@36
  void (__fastcall *v88)(int *, int *, signed int); // [sp+C0h] [bp-E8h]@35
  int v89; // [sp+C4h] [bp-E4h]@36
  void *v90; // [sp+C8h] [bp-E0h]@37
  void (*v91)(void); // [sp+D0h] [bp-D8h]@37
  char *(__fastcall *v92)(int *, int *); // [sp+D4h] [bp-D4h]@37
  Social::User *v93; // [sp+D8h] [bp-D0h]@4
  int v94; // [sp+DCh] [bp-CCh]@4
  Social::User *v95; // [sp+E0h] [bp-C8h]@3
  int v96; // [sp+E4h] [bp-C4h]@19
  char v97; // [sp+E8h] [bp-C0h]@41
  int v98; // [sp+F0h] [bp-B8h]@41
  RakNet *v99; // [sp+180h] [bp-28h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v99 = _stack_chk_guard;
  MinecraftGame::setIsInGame(*(MinecraftGame **)(a1 + 24), 1);
  if ( v5 == 1 )
  {
    v84 = v4;
    v6 = *(UserAuthentication **)(v3 + 72);
    goto LABEL_41;
  }
  v7 = (const ClientInstance *)MinecraftGame::getUserManager(*(MinecraftGame **)(v3 + 24));
  Social::UserManager::getUser((Social::UserManager *)&v95, v7, v3);
  v8 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v95);
  if ( Social::XboxLiveUserManager::isSignedIn(v8) == 1 )
    v9 = MinecraftGame::getUserManager(*(MinecraftGame **)(v3 + 24));
    Social::UserManager::getPrimaryUser((Social::UserManager *)&v93, v9);
    v10 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v93);
    v11 = Social::XboxLiveUserManager::isSignedIn(v10);
    v12 = v94;
    if ( v94 )
    {
      v13 = (unsigned int *)(v94 + 4);
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
  else
    v11 = 0;
  v17 = v96;
  if ( !v96 )
    goto LABEL_52;
  v18 = (unsigned int *)(v96 + 4);
  if ( &pthread_create )
    __dmb();
    do
      v19 = __ldrex(v18);
    while ( __strex(v19 - 1, v18) );
    v19 = (*v18)--;
  if ( v19 != 1 )
  v20 = (unsigned int *)(v17 + 8);
  (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      v21 = __ldrex(v20);
    while ( __strex(v21 - 1, v20) );
    v21 = (*v20)--;
  if ( v21 == 1 )
    v22 = *(_DWORD *)v17;
    (*(void (__fastcall **)(int))(v22 + 12))(v17);
    if ( !v11 )
LABEL_41:
      v27 = *(_QWORD *)(v3 + 24);
      v83 = *(_QWORD *)(v3 + 24) >> 32;
      v28 = MinecraftGame::getClientNetworkSystem((MinecraftGame *)v27);
      NetworkHandler::getPrimaryNetworkId((NetworkHandler *)&v97, v28);
      v29 = MinecraftGame::getClientNetworkSystem(*(MinecraftGame **)(v3 + 24));
      v30 = *(_DWORD *)(v3 + 48);
      v31 = UserAuthentication::getLocalKeys(v6);
      v32 = MinecraftGame::getSoundEngine(*(MinecraftGame **)(v3 + 24));
      LODWORD(v33) = UserAuthentication::getLocalCertificate(v6);
      HIDWORD(v33) = Minecraft::getCommands(*(Minecraft **)(v3 + 28));
      v34 = operator new(0x180u);
      v82 = v33;
      v35 = *(_QWORD *)&v97;
      v36 = &v98;
      v80 = (int)v31;
      v81 = v32;
      v37 = 144;
      v38 = &v42;
      v78 = v29;
      v79 = v30;
      do
        v39 = *v36;
        ++v36;
        v37 -= 4;
        *v38 = v39;
        ++v38;
      while ( v37 );
      LegacyClientNetworkHandler::LegacyClientNetworkHandler(
        (int)v34,
        v3,
        v35,
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
        v56,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81,
        (int *)v82,
        SHIDWORD(v82));
      v40 = v84;
      v85 = v34;
      Minecraft::startClientGame(v83, (int *)&v85);
      if ( v85 )
        (*(void (**)(void))(*(_DWORD *)v85 + 8))();
      v85 = 0;
      if ( !*(_DWORD *)(v40 + 8) )
        sub_DA7654();
      (*(void (__fastcall **)(int, signed int))(v40 + 12))(v40, 1);
      goto LABEL_47;
LABEL_52:
    if ( v11 != 1 )
      goto LABEL_41;
  v86 = v3;
  v88 = 0;
  v23 = *(void (__fastcall **)(int *, int, signed int))(v84 + 8);
  v24 = 0;
  if ( v23 )
    v23(&v87, v84, 2);
    v89 = *(_DWORD *)(v84 + 12);
    v24 = *(_DWORD *)(v84 + 8);
    v88 = *(void (__fastcall **)(int *, int *, signed int))(v84 + 8);
  v91 = 0;
  v25 = operator new(0x14u);
  *(_DWORD *)v25 = v86;
  *(_QWORD *)((char *)v25 + 4) = *(_QWORD *)&v87;
  v26 = v89;
  *((_DWORD *)v25 + 3) = v24;
  *((_DWORD *)v25 + 4) = v26;
  v90 = v25;
  v91 = (void (*)(void))sub_BE8E30;
  v92 = sub_BE8C60;
  UserAuthentication::getGlobalCertificate((int *)v6, (int)&v90);
  if ( v91 )
    v91();
  if ( v88 )
    v88(&v87, &v87, 3);
LABEL_47:
  result = (char *)(_stack_chk_guard - v99);
  if ( _stack_chk_guard != v99 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall ClientInstance::onGameModeChanged(ClientInstance *this)
{
  ClientInstance::onGameModeChanged(this);
}


signed int __fastcall ClientInstance::shouldUseLastPointerLocationOnFocusChange(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  signed int result; // r0@2
  signed int v3; // r5@4

  v1 = this;
  if ( ClientInputHandler::getCurrentInputMode(*((ClientInputHandler **)this + 16)) == 1 )
  {
    result = 1;
  }
  else if ( (*(int (**)(void))(**((_DWORD **)v1 + 13) + 44))() == 1 )
    v3 = 0;
    if ( (unsigned int)(ClientInputHandler::getCurrentInputMode(*((ClientInputHandler **)v1 + 16)) - 3) <= 1
      && ClientInputHandler::getHoloUIInputMode(*((ClientInputHandler **)v1 + 16)) == 2 )
    {
      v3 = 1;
    }
    result = v3;
  else
    result = 0;
  return result;
}


int __fastcall ClientInstance::updateChunkRadius(int result)
{
  LocalPlayer *v1; // r4@1
  Options *v2; // r0@2
  int v3; // r1@2

  v1 = *(LocalPlayer **)(result + 92);
  if ( v1 )
  {
    v2 = (Options *)ClientInstance::getOptions((ClientInstance *)result);
    v3 = Options::getViewDistanceChunks(v2);
    result = (int)j_j_j__ZN11LocalPlayer18requestChunkRadiusEj(v1, v3);
  }
  return result;
}


int __fastcall ClientInstance::isARVRClient(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 13) + 76))() )
    result = 1;
  else
    result = (*(int (**)(void))(**((_DWORD **)v1 + 13) + 80))();
  return result;
}


int __fastcall ClientInstance::setCameraTargetEntity(int result, Entity *a2)
{
  *(_DWORD *)(result + 88) = a2;
  return result;
}


int __fastcall ClientInstance::setHoloInput(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r2@1
  int v4; // r0@1
  int v5; // r5@3
  int result; // r0@3

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  v4 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(v2 + 52) = v3;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  v5 = ClientInstance::getOptions((ClientInstance *)v2);
  result = (*(int (**)(void))(**(_DWORD **)(v2 + 52) + 76))();
  *(_BYTE *)(v5 + 37) = result;
  return result;
}


char *__fastcall ClientInstance::_getViewPortModifiers(int a1, int a2, int a3)
{
  ClientInstance *v3; // r7@1
  int v4; // r8@1
  int v5; // r9@1
  signed int v6; // r4@1
  int v7; // r6@1
  signed int v8; // r1@1
  signed int v9; // r5@5
  int v10; // r11@5
  char *result; // r0@5
  int v12; // r10@5
  signed int v13; // r4@6
  Options *v14; // r0@8
  char *v15; // r1@8
  signed int v16; // r2@10
  bool v17; // zf@10
  int v18; // r1@10

  v3 = (ClientInstance *)a1;
  v4 = a3;
  v5 = a2;
  v6 = *(_BYTE *)(a1 + 668);
  v7 = MinecraftGame::getClientInstanceCount(*(MinecraftGame **)(a1 + 24));
  v8 = v6;
  if ( v7 == 2 )
    v8 = 1;
  if ( !v6 )
    v8 = 0;
  v9 = 1065353216;
  v10 = dword_262C08C[2 * v8];
  result = (char *)&dword_262C08C[2 * v8];
  v12 = *((_DWORD *)result + 1);
  if ( v7 < 2 )
  {
    v18 = dword_262C08C[2 * v8];
    v16 = 1065353216;
  }
  else
    v13 = 0;
    if ( v7 != 2 )
      v13 = 1;
    v14 = (Options *)ClientInstance::getOptions(v3);
    result = (char *)Options::getSplitscreenDirection(v14);
    v15 = result;
    if ( result != (char *)1 )
      v15 = 0;
    v16 = 1056964608;
    v17 = ((unsigned int)v15 | v13) == 0;
    v18 = v12;
    if ( v17 )
      v12 = v10;
    else
      v18 = v10;
    if ( result == (char *)1 )
      v16 = 1065353216;
    if ( v7 > 2 )
      v16 = 1056964608;
      v9 = 1056964608;
  *(_DWORD *)v5 = v9;
  *(_DWORD *)(v5 + 4) = v16;
  *(_DWORD *)v4 = v18;
  *(_DWORD *)(v4 + 4) = v12;
  return result;
}


int __fastcall ClientInstance::_getSceneStackChangedThisFrame(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  SceneStack *v2; // r0@1
  int result; // r0@2

  v1 = this;
  v2 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)this + 6));
  if ( SceneStack::hasChangedThisFrame(v2) )
    result = 1;
  else
    result = SceneStack::hasChangedThisFrame(*((SceneStack **)v1 + 154));
  return result;
}


void __fastcall ClientInstance::onGameModeChanged(ClientInstance *this)
{
  ClientInputHandler *v1; // r4@1
  int v2; // r4@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r5@8
  unsigned int v6; // r0@10
  int v7; // [sp+0h] [bp-40h]@1
  int v8; // [sp+28h] [bp-18h]@1

  v1 = (ClientInputHandler *)*((_DWORD *)this + 16);
  Config::createConfig((Config *)&v7, this);
  ClientInputHandler::onConfigChanged(v1, (const Config *)&v7);
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


void __fastcall ClientInstance::setClientInputHandler(int a1, int *a2)
{
  ClientInstance::setClientInputHandler(a1, a2);
}


ThirdPartyInfo *__fastcall ClientInstance::connectToThirdParyServer(int a1, int **a2, int *a3, int a4)
{
  int v4; // r6@1
  int v5; // r8@1
  int *v6; // r7@1
  int **v7; // r5@1
  int v8; // r0@1
  void *v9; // r0@1
  void *v10; // r0@2
  void *v11; // r0@3
  void *v12; // r0@4
  unsigned int *v14; // r2@6
  signed int v15; // r1@8
  unsigned int *v16; // r2@10
  signed int v17; // r1@12
  unsigned int *v18; // r2@14
  signed int v19; // r1@16
  unsigned int *v20; // r2@18
  signed int v21; // r1@20
  int v22; // [sp+Ch] [bp-84h]@1
  char v23; // [sp+10h] [bp-80h]@1
  int v24; // [sp+14h] [bp-7Ch]@4
  int v25; // [sp+18h] [bp-78h]@3
  int v26; // [sp+20h] [bp-70h]@2
  int v27; // [sp+24h] [bp-6Ch]@2
  char v28; // [sp+4Ch] [bp-44h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = MinecraftGame::getThirdPartyServerRepository(*(MinecraftGame **)(a1 + 24));
  ThirdPartyServerRepository::findThirdPartyInfo((int)&v28, v8, v7);
  Social::GameConnectionInfo::GameConnectionInfo((int)&v23, -1, v6, v5, (int)&v28);
  sub_DA7364((void **)&v22, (const char *)&unk_257BC67);
  ClientInstance::startExternalNetworkWorld(v4, (int)&v23, &v22);
  v9 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v22 - 4);
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
      j_j_j_j_j__ZdlPv_9(v9);
  }
  ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v27);
  v10 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v26 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v25 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v24 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  return ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v28);
}


StoreSearchQuery *__fastcall ClientInstance::linkToAllOffers(ClientInstance *this, int a2, int a3, int a4, int a5)
{
  int *v5; // r5@1
  int *v6; // r7@1
  ClientInstance *v7; // r6@1
  StoreSearchQuery *result; // r0@2
  unsigned __int64 *v9; // r8@3
  int v10; // r0@3
  void *v11; // r0@3
  int v12; // r6@4
  int v13; // r4@4
  unsigned int *v14; // r1@5
  unsigned int v15; // r0@7
  unsigned int *v16; // r5@11
  unsigned int v17; // r0@13
  void *v18; // r0@18
  char *v19; // r4@19
  int v20; // r6@19
  unsigned int *v21; // r2@21
  signed int v22; // r1@23
  int *v23; // r0@29
  void *v24; // r0@34
  void *v25; // r0@35
  void *v26; // r0@36
  unsigned int *v27; // r2@39
  signed int v28; // r1@41
  unsigned int *v29; // r2@43
  signed int v30; // r1@45
  unsigned int *v31; // r2@47
  signed int v32; // r1@49
  unsigned int *v33; // r2@51
  signed int v34; // r1@53
  unsigned int *v35; // r2@55
  signed int v36; // r1@57
  int v37; // [sp+8h] [bp-98h]@4
  char *v38; // [sp+Ch] [bp-94h]@4
  char *v39; // [sp+10h] [bp-90h]@4
  char *v40; // [sp+14h] [bp-8Ch]@4
  int v41; // [sp+1Ch] [bp-84h]@4
  int v42; // [sp+20h] [bp-80h]@4
  int v43; // [sp+28h] [bp-78h]@4
  char v44; // [sp+2Ch] [bp-74h]@4
  int v45; // [sp+30h] [bp-70h]@4
  int v46; // [sp+38h] [bp-68h]@3
  int v47[16]; // [sp+3Ch] [bp-64h]@3

  v5 = (int *)a3;
  v6 = (int *)a2;
  v7 = this;
  if ( a4 || (result = (StoreSearchQuery *)Minecraft::getLevel(*((Minecraft **)this + 7))) == 0 )
  {
    v9 = ClientInstance::_getScenePreparedForOffer(v7);
    v10 = StoreSearchQuery::StoreSearchQuery((int)v47, (int *)a5);
    SearchQuery::setCreatorID(v10, v6);
    sub_DA7364((void **)&v46, "random");
    StoreSearchQuery::setSortType((int)v47, &v46);
    v11 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
    {
      v27 = (unsigned int *)(v46 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      }
      else
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j_j__ZdlPv_9(v11);
    }
    v12 = *((_DWORD *)v7 + 19);
    sub_DA7364((void **)&v43, "store.showalloffers.list.back");
    sub_DA7364((void **)&v41, "store.showalloffers.list.title");
    sub_DA73B4(&v37, v5);
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v38 = (char *)operator new(4u);
    v40 = v38 + 4;
    v39 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v37,
                    (int)&v38,
                    (int)v38);
    I18n::get(&v42, &v41, (unsigned __int64 *)&v38);
    SceneFactory::createStoreItemListScreen((unsigned __int64 *)&v44, v12, v47, &v43, &v42);
    SceneStack::pushScreen((int)v9, (int)&v44, 0);
    v13 = v45;
    if ( v45 )
      v14 = (unsigned int *)(v45 + 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
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
    v18 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v42 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j_j__ZdlPv_9(v18);
    v20 = (int)v39;
    v19 = v38;
    if ( v38 != v39 )
      do
        v23 = (int *)(*(_DWORD *)v19 - 12);
        if ( v23 != &dword_28898C0 )
          v21 = (unsigned int *)(*(_DWORD *)v19 - 4);
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
            j_j_j_j_j__ZdlPv_9(v23);
        v19 += 4;
      while ( v19 != (char *)v20 );
      v19 = v38;
    if ( v19 )
      operator delete(v19);
    v24 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v37 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j_j__ZdlPv_9(v24);
    v25 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v41 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j_j__ZdlPv_9(v25);
    v26 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v43 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j_j__ZdlPv_9(v26);
    result = StoreSearchQuery::~StoreSearchQuery((StoreSearchQuery *)v47);
  }
  return result;
}


    if ( ClientInstance::getLocalPlayer(v12) )
{
    else
      sub_DA73B4(&v31, (int *)&Util::EMPTY_STRING);
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v13 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v13 = &ServiceLocator<AppPlatform>::mDefaultService;
    v14 = *(_DWORD *)v13;
    v15 = *(void (__fastcall **)(int, int, int *, int *))(**(_DWORD **)v13 + 544);
    sub_DA7364((void **)&v30, (const char *)&unk_257BC67);
    sub_DA7364((void **)&v29, "0");
    MinecraftScreenModel::getPlayerSessionId((MinecraftScreenModel *)v11);
    v15(v14, v2 + 24, &v30, &v29);
    v16 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
    {
      v23 = (unsigned int *)(v29 - 4);
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
        j_j_j_j_j__ZdlPv_9(v16);
    }
    v17 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v30 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9(v17);
    MinecraftScreenModel::sendPurchaseReceiptsToServer((MinecraftScreenModel *)v11);
    v18 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v31 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j_j__ZdlPv_9(v18);
  }
  if ( v4 )
  {
    v19 = (unsigned int *)(v4 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      v21 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
}


__int16 *__fastcall ClientInstance::computeScreenCoordsFromScreenNormCoords(ClientInstance *this, float a2, float a3, __int16 *a4, __int16 *a5)
{
  ClientInstance *v5; // r7@1
  __int16 *v7; // r4@1
  GuiData *v13; // r5@1
  __int16 *result; // r0@1
  float v19; // [sp+8h] [bp-78h]@1

  v5 = this;
  _R6 = a2;
  v7 = a4;
  _R5 = a3;
  HolographicPlatform::getTransform((int)&v19, *((_DWORD *)this + 13), 6, 5, 0);
  __asm
  {
    VMOV            S10, R5
    VLDR            S6, [SP,#0x80+var_68]
    VMOV            S0, R6
    VLDR            S2, [SP,#0x80+var_78]
    VMUL.F32        S6, S6, S10
  }
  v13 = (GuiData *)*((_DWORD *)v5 + 164);
    VMUL.F32        S2, S2, S0
    VLDR            S4, [SP,#0x80+var_74]
    VLDR            S8, [SP,#0x80+var_64]
    VMUL.F32        S16, S4, S0
    VMUL.F32        S18, S8, S10
    VLDR            S22, [SP,#0x80+var_44]
    VADD.F32        S2, S6, S2
    VLDR            S6, [SP,#0x80+var_48]
    VADD.F32        S20, S2, S6
  _R0 = GuiData::getGuiScale(*((GuiData **)v5 + 164));
    VMOV            S0, R0
    VADD.F32        S2, S18, S16
    VMUL.F32        S0, S0, S20
    VADD.F32        S16, S2, S22
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  *v7 = _R0;
  _R0 = GuiData::getGuiScale(v13);
  __asm { VMOV            S0, R0 }
  result = a5;
    VMUL.F32        S0, S0, S16
    VMOV            R1, S0
  *a5 = _R1;
  return result;
}


void __fastcall ClientInstance::linkToOffer(int a1, const void **a2, int a3, const void **a4, const void **a5, int a6)
{
  ClientInstance::linkToOffer(a1, a2, a3, a4, a5, a6);
}


  if ( ClientInstance::shouldUseLastPointerLocationOnFocusChange(v7) == 1 )
{
    _R0 = ClientInstance::getLastPointerLocation(v7);
    __asm
    {
      VLDR            S16, [R0]
      VLDR            S18, [R0,#4]
    }
    v22 = ClientInstance::getCurrentInputMode(v7);
      VCVTR.S32.F32   S0, S16
      VCVTR.S32.F32   S2, S18
    v41 = v22;
    __asm { VMOV            R0, S0 }
    v42 = _R0;
    __asm { VMOV            R0, S2 }
    v43 = _R0;
    v44 = 1;
    (*(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)v2 + 100))(v2, &v41, 0);
  }
  v25 = ClientInstance::getLevel(v7);
  v26 = (ClientInputHandler *)ClientInstance::getInput(v7);
  v27 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 168))(v2);
  v28 = v25;
  v29 = v27 ^ 1;
  if ( v25 )
    v28 = 1;
  ClientInputHandler::pushInputMapping(v26, v28 & v29);
  if ( ((*(int (__fastcall **)(int))(*(_DWORD *)v2 + 172))(v2)
     || (v30 = ClientInstance::getHoloInput(v7), (*(int (**)(void))(*(_DWORD *)v30 + 280))() == 1))
    && (v31 = ClientInstance::getHoloInput(v7), !(*(int (**)(void))(*(_DWORD *)v31 + 316))()) )
  {
    if ( !*(_BYTE *)(v3 + 112) )
      *(_BYTE *)(v3 + 112) = 1;
      if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
        v32 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      else
        v32 = &ServiceLocator<AppPlatform>::mDefaultService;
      (*(void (**)(void))(**(_DWORD **)v32 + 72))();
  else
    MinecraftGame::releaseMouse((MinecraftGame *)v3);
    v33 = (Level *)ClientInstance::getLevel(v7);
    Level::saveGameData(v33);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 244))(v2) == 1 )
    v34 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 236))(v2);
    v35 = *(_DWORD *)(v3 + 504);
    v40 = ClientInstance::getUserId(v7);
    (*(void (__fastcall **)(int *, int))(*(_DWORD *)v2 + 228))(&v39, v2);
    MinecraftEventing::fireEventScreenChanged(v35, (unsigned int *)&v40, (const char **)&v39, v34);
    v36 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v39 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
      }
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j_j__ZdlPv_9(v36);
}


char *__fastcall ClientInstance::getRealityModeFrameFactor(ClientInstance *this)
{
  return (char *)this + 108;
}


void __fastcall ClientInstance::_loadProfanityFilter(ClientInstance *this)
{
  ClientInstance::_loadProfanityFilter(this);
}


int __fastcall ClientInstance::onSafeZoneChanged(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  char *v2; // r5@1
  int v3; // r0@1
  Option *v4; // r0@1
  int v5; // r6@1
  int v6; // r0@1
  Option *v7; // r0@1
  int v8; // r0@1

  v1 = this;
  v2 = GuiData::getScreenSizeData(*((GuiData **)this + 164));
  v3 = ClientInstance::getOptions(v1);
  v4 = (Option *)Options::get(v3, 40);
  v5 = Option::getFloat(v4);
  v6 = ClientInstance::getOptions(v1);
  v7 = (Option *)Options::get(v6, 39);
  v8 = Option::getInt(v7);
  return ClientInstance::_updateScreenSizeVariables(*(float *)&v1, v2, v5, v8, 0);
}


ClientInstance *__fastcall ClientInstance::~ClientInstance(ClientInstance *this)
{
  ClientInstance *v1; // r10@1
  SoundEngine *v2; // r0@2
  UserAuthentication *v3; // r0@3
  UserAuthentication *v4; // r0@4
  Minecraft *v5; // r0@5
  Minecraft *v6; // r0@6
  unsigned __int64 *v7; // r7@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned __int64 *v10; // r6@17
  int v11; // r1@17
  void *v12; // r0@17
  char *v13; // r0@19
  unsigned __int64 *v14; // r7@22
  unsigned int *v15; // r2@24
  signed int v16; // r1@26
  unsigned __int64 *v17; // r6@32
  int v18; // r1@32
  void *v19; // r0@32
  char *v20; // r0@34
  int v21; // r1@37
  int v22; // r2@37
  int v23; // r3@37
  int v24; // r7@37
  __int64 v25; // kr10_8@37
  int v26; // r4@37
  void *v27; // r0@37
  unsigned int v28; // r6@38
  unsigned int v29; // r1@38
  unsigned int v30; // r7@39
  void *v31; // t1@40
  SkinRepositoryClientInterface *v32; // r0@43
  SkinRepositoryClientInterface *v33; // r0@44
  ToastManager *v34; // r0@45
  ToastManager *v35; // r0@46
  int v36; // r5@47
  void *v37; // r0@48
  int v38; // r0@51
  int v39; // r0@53
  int v40; // r0@55
  EntityBlockRenderer *v41; // r0@57
  EntityBlockRenderer *v42; // r0@58
  int v43; // r0@59
  int v44; // r5@61
  BlockTessellator *v45; // r0@63
  BlockTessellator *v46; // r0@64
  TaskGroup *v47; // r0@65
  TaskGroup *v48; // r0@66
  UIProfanityContext *v49; // r0@67
  UIProfanityContext *v50; // r0@68
  int v51; // r0@69
  SceneStack *v52; // r0@71
  SceneStack *v53; // r0@72
  void *v54; // r0@73
  void *v55; // r0@75
  void *v56; // r0@77
  int v57; // r1@79
  void *v58; // r0@79
  void (*v59)(void); // r3@80
  void *v60; // r0@82
  CachedScenes *v61; // r0@84
  CachedScenes *v62; // r0@85
  SceneFactory *v63; // r0@86
  SceneFactory *v64; // r0@87
  UserAuthentication *v65; // r0@88
  UserAuthentication *v66; // r0@89
  int v67; // r0@90
  ClientInputHandler *v68; // r0@92
  ClientInputHandler *v69; // r0@93
  int v70; // r0@94
  int v71; // r0@96
  int v72; // r0@98
  int v73; // r0@100
  void *v74; // r0@102
  int v75; // r0@104
  int v76; // r0@106
  Minecraft *v77; // r0@108
  Minecraft *v78; // r0@109
  int v79; // r0@110
  unsigned int *v80; // r2@111
  unsigned int v81; // r1@113
  unsigned int *v83; // r2@119
  signed int v84; // r1@121
  int v85; // [sp+4h] [bp-44h]@37
  __int64 v86; // [sp+8h] [bp-40h]@37
  int v87; // [sp+10h] [bp-38h]@37
  int v88; // [sp+14h] [bp-34h]@37
  int v89; // [sp+18h] [bp-30h]@37
  int v90; // [sp+1Ch] [bp-2Ch]@37
  int v91; // [sp+20h] [bp-28h]@37

  v1 = this;
  *(_DWORD *)this = &off_26D63C0;
  *((_DWORD *)this + 1) = &off_26D63EC;
  MinecraftGame::releaseClientSubId(*((MinecraftGame **)this + 6), *((_BYTE *)this + 668));
  if ( MinecraftGame::getSoundEngine(*((MinecraftGame **)v1 + 6)) )
  {
    v2 = (SoundEngine *)MinecraftGame::getSoundEngine(*((MinecraftGame **)v1 + 6));
    SoundEngine::removeListener(v2, *((_BYTE *)v1 + 668));
  }
  v3 = (UserAuthentication *)*((_DWORD *)v1 + 18);
  *((_DWORD *)v1 + 18) = 0;
  if ( v3 )
    v4 = UserAuthentication::~UserAuthentication(v3);
    operator delete((void *)v4);
  (*(void (**)(void))(**((_DWORD **)v1 + 15) + 20))();
  v5 = (Minecraft *)*((_DWORD *)v1 + 7);
  *((_DWORD *)v1 + 7) = 0;
  if ( v5 )
    v6 = Minecraft::~Minecraft(v5);
    operator delete((void *)v6);
  TaskGroup::flush(*((TaskGroup **)v1 + 157));
  v7 = (unsigned __int64 *)*((_DWORD *)v1 + 194);
  while ( v7 )
    v10 = v7;
    v11 = *v7 >> 32;
    v7 = (unsigned __int64 *)*v7;
    v12 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v11 - 4);
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
        j_j_j_j_j__ZdlPv_9(v12);
    }
    operator delete(v10);
  _aeabi_memclr4(*((_QWORD *)v1 + 96), 4 * (*((_QWORD *)v1 + 96) >> 32));
  *((_DWORD *)v1 + 194) = 0;
  *((_DWORD *)v1 + 195) = 0;
  v13 = (char *)*((_DWORD *)v1 + 192);
  if ( v13 && (char *)v1 + 792 != v13 )
    operator delete(v13);
  v14 = (unsigned __int64 *)*((_DWORD *)v1 + 187);
  while ( v14 )
    v17 = v14;
    v18 = *v14 >> 32;
    v14 = (unsigned __int64 *)*v14;
    v19 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v18 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9(v19);
    operator delete(v17);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 740), 4 * (*(_QWORD *)((char *)v1 + 740) >> 32));
  *((_DWORD *)v1 + 187) = 0;
  *((_DWORD *)v1 + 188) = 0;
  v20 = (char *)*((_DWORD *)v1 + 185);
  if ( v20 && (char *)v1 + 764 != v20 )
    operator delete(v20);
  v21 = *((_DWORD *)v1 + 178);
  v22 = *((_DWORD *)v1 + 179);
  v23 = *((_DWORD *)v1 + 180);
  v24 = *((_DWORD *)v1 + 181);
  v25 = *((_QWORD *)v1 + 91);
  v26 = *((_DWORD *)v1 + 184);
  v88 = *((_DWORD *)v1 + 177);
  v89 = v21;
  v90 = v22;
  v91 = v23;
  v85 = v24;
  v86 = v25;
  v87 = v26;
  std::deque<std::string,std::allocator<std::string>>::_M_destroy_data_aux((int)v1 + 700, (int)&v88, (int)&v85);
  v27 = (void *)*((_DWORD *)v1 + 175);
  if ( v27 )
    v28 = *((_DWORD *)v1 + 184);
    v29 = *((_DWORD *)v1 + 180);
    if ( v29 < v28 + 4 )
      v30 = v29 - 4;
      do
        v31 = *(void **)(v30 + 4);
        v30 += 4;
        operator delete(v31);
      while ( v30 < v28 );
      v27 = (void *)*((_DWORD *)v1 + 175);
    operator delete(v27);
  v32 = (SkinRepositoryClientInterface *)*((_DWORD *)v1 + 168);
  if ( v32 )
    v33 = SkinRepositoryClientInterface::~SkinRepositoryClientInterface(v32);
    operator delete((void *)v33);
  *((_DWORD *)v1 + 168) = 0;
  v34 = (ToastManager *)*((_DWORD *)v1 + 166);
  if ( v34 )
    v35 = ToastManager::~ToastManager(v34);
    operator delete((void *)v35);
  *((_DWORD *)v1 + 166) = 0;
  v36 = *((_DWORD *)v1 + 165);
  if ( v36 )
    v37 = *(void **)(v36 + 20);
    if ( v37 )
      operator delete(v37);
    operator delete((void *)v36);
  *((_DWORD *)v1 + 165) = 0;
  v38 = *((_DWORD *)v1 + 164);
  if ( v38 )
    (*(void (**)(void))(*(_DWORD *)v38 + 4))();
  *((_DWORD *)v1 + 164) = 0;
  v39 = *((_DWORD *)v1 + 163);
  if ( v39 )
    (*(void (**)(void))(*(_DWORD *)v39 + 4))();
  *((_DWORD *)v1 + 163) = 0;
  v40 = *((_DWORD *)v1 + 162);
  if ( v40 )
    (*(void (**)(void))(*(_DWORD *)v40 + 4))();
  *((_DWORD *)v1 + 162) = 0;
  v41 = (EntityBlockRenderer *)*((_DWORD *)v1 + 161);
  if ( v41 )
    v42 = EntityBlockRenderer::~EntityBlockRenderer(v41);
    operator delete((void *)v42);
  *((_DWORD *)v1 + 161) = 0;
  v43 = *((_DWORD *)v1 + 160);
  if ( v43 )
    (*(void (**)(void))(*(_DWORD *)v43 + 4))();
  *((_DWORD *)v1 + 160) = 0;
  v44 = *((_DWORD *)v1 + 159);
  if ( v44 )
    std::_Rb_tree<BlockEntityRendererId,std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>,std::_Select1st<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::_M_erase(
      *((_DWORD *)v1 + 159),
      *(_DWORD *)(v44 + 8));
    operator delete((void *)v44);
  *((_DWORD *)v1 + 159) = 0;
  v45 = (BlockTessellator *)*((_DWORD *)v1 + 158);
  if ( v45 )
    v46 = BlockTessellator::~BlockTessellator(v45);
    operator delete((void *)v46);
  *((_DWORD *)v1 + 158) = 0;
  v47 = (TaskGroup *)*((_DWORD *)v1 + 157);
  if ( v47 )
    v48 = TaskGroup::~TaskGroup(v47);
    operator delete((void *)v48);
  *((_DWORD *)v1 + 157) = 0;
  v49 = (UIProfanityContext *)*((_DWORD *)v1 + 156);
  if ( v49 )
    v50 = UIProfanityContext::~UIProfanityContext(v49);
    operator delete((void *)v50);
  *((_DWORD *)v1 + 156) = 0;
  v51 = *((_DWORD *)v1 + 155);
  if ( v51 )
    (*(void (**)(void))(*(_DWORD *)v51 + 4))();
  *((_DWORD *)v1 + 155) = 0;
  v52 = (SceneStack *)*((_DWORD *)v1 + 154);
  if ( v52 )
    v53 = SceneStack::~SceneStack(v52);
    operator delete((void *)v53);
  *((_DWORD *)v1 + 154) = 0;
  v54 = (void *)*((_DWORD *)v1 + 57);
  if ( v54 )
    operator delete(v54);
  v55 = (void *)*((_DWORD *)v1 + 53);
  if ( v55 )
    operator delete(v55);
  v56 = (void *)*((_DWORD *)v1 + 49);
  if ( v56 )
    operator delete(v56);
  v57 = *((_DWORD *)v1 + 41);
  v58 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v57 - 4);
    if ( &pthread_create )
      __dmb();
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
    else
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9(v58);
  v59 = (void (*)(void))*((_DWORD *)v1 + 35);
  if ( v59 )
    v59();
  v60 = (void *)*((_DWORD *)v1 + 24);
  if ( v60 )
    operator delete(v60);
  *((_DWORD *)v1 + 24) = 0;
  v61 = (CachedScenes *)*((_DWORD *)v1 + 20);
  if ( v61 )
    v62 = CachedScenes::~CachedScenes(v61);
    operator delete((void *)v62);
  *((_DWORD *)v1 + 20) = 0;
  v63 = (SceneFactory *)*((_DWORD *)v1 + 19);
  if ( v63 )
    v64 = SceneFactory::~SceneFactory(v63);
    operator delete((void *)v64);
  *((_DWORD *)v1 + 19) = 0;
  v65 = (UserAuthentication *)*((_DWORD *)v1 + 18);
  if ( v65 )
    v66 = UserAuthentication::~UserAuthentication(v65);
    operator delete((void *)v66);
  v67 = *((_DWORD *)v1 + 17);
  if ( v67 )
    (*(void (**)(void))(*(_DWORD *)v67 + 4))();
  *((_DWORD *)v1 + 17) = 0;
  v68 = (ClientInputHandler *)*((_DWORD *)v1 + 16);
  if ( v68 )
    v69 = ClientInputHandler::~ClientInputHandler(v68);
    operator delete((void *)v69);
  *((_DWORD *)v1 + 16) = 0;
  v70 = *((_DWORD *)v1 + 15);
  if ( v70 )
    (*(void (**)(void))(*(_DWORD *)v70 + 4))();
  *((_DWORD *)v1 + 15) = 0;
  v71 = *((_DWORD *)v1 + 14);
  if ( v71 )
    (*(void (**)(void))(*(_DWORD *)v71 + 4))();
  *((_DWORD *)v1 + 14) = 0;
  v72 = *((_DWORD *)v1 + 13);
  if ( v72 )
    (*(void (**)(void))(*(_DWORD *)v72 + 4))();
  *((_DWORD *)v1 + 13) = 0;
  v73 = *((_DWORD *)v1 + 12);
  if ( v73 )
    (*(void (**)(void))(*(_DWORD *)v73 + 4))();
  *((_DWORD *)v1 + 12) = 0;
  v74 = (void *)*((_DWORD *)v1 + 11);
  if ( v74 )
    operator delete(v74);
  *((_DWORD *)v1 + 11) = 0;
  v75 = *((_DWORD *)v1 + 10);
  if ( v75 )
    (*(void (**)(void))(*(_DWORD *)v75 + 4))();
  *((_DWORD *)v1 + 10) = 0;
  v76 = *((_DWORD *)v1 + 8);
  if ( v76 )
    (*(void (**)(void))(*(_DWORD *)v76 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  v77 = (Minecraft *)*((_DWORD *)v1 + 7);
  if ( v77 )
    v78 = Minecraft::~Minecraft(v77);
    operator delete((void *)v78);
  v79 = *((_DWORD *)v1 + 3);
  if ( v79 )
    v80 = (unsigned int *)(v79 + 8);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 == 1 )
      (*(void (**)(void))(*(_DWORD *)v79 + 12))();
  return v1;
}


char *__fastcall ClientInstance::getNormalizedViewportSize(ClientInstance *this, int a2)
{
  char *result; // r0@1

  _R4 = a2;
  result = GuiData::getScreenSizeData(*(GuiData **)(a2 + 656));
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S4, [R4,#0xA8]
    VLDR            S2, [R0,#4]
    VLDR            S6, [R4,#0xAC]
    VDIV.F32        S0, S4, S0
    VDIV.F32        S2, S6, S2
    VSTR            S0, [R5]
    VSTR            S2, [R5,#4]
  }
  return result;
}


signed int __fastcall ClientInstance::currentInputModeIsGamePadOrMotionController(ClientInstance *this)
{
  unsigned int v1; // r1@1
  signed int result; // r0@1

  v1 = ClientInputHandler::getCurrentInputMode(*((ClientInputHandler **)this + 16)) - 3;
  result = 0;
  if ( v1 < 2 )
    result = 1;
  return result;
}


int __fastcall ClientInstance::forEachScreen(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  unsigned __int64 *v6; // r6@2
  void (__fastcall *v7)(int *, int, signed int); // r3@2
  int result; // r0@4
  SceneStack *v9; // r0@6
  __int64 v10; // r2@6
  void (__fastcall *v11)(char *, int, signed int); // r3@6
  int v12; // [sp+0h] [bp-38h]@3
  int (*v13)(void); // [sp+8h] [bp-30h]@2
  int v14; // [sp+Ch] [bp-2Ch]@3
  char v15; // [sp+10h] [bp-28h]@7
  int (*v16)(void); // [sp+18h] [bp-20h]@6
  int v17; // [sp+1Ch] [bp-1Ch]@7
  char v18; // [sp+20h] [bp-18h]@6

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(a1 + 24)) == a1 )
  {
    v9 = (SceneStack *)MinecraftGame::getMainSceneStack(*(MinecraftGame **)(v3 + 24));
    LODWORD(v10) = *(_DWORD *)(v3 + 616);
    CompositeSceneStackView::CompositeSceneStackView((CompositeSceneStackView *)&v18, v9, v10);
    v16 = 0;
    v11 = *(void (__fastcall **)(char *, int, signed int))(v5 + 8);
    if ( v11 )
    {
      v11(&v15, v5, 2);
      v17 = *(_DWORD *)(v5 + 12);
      v16 = *(int (**)(void))(v5 + 8);
    }
    result = CompositeSceneStackView::forEachScreen((int)&v18, (int)&v15, v4);
    if ( v16 )
      result = v16();
  }
  else
    v6 = *(unsigned __int64 **)(v3 + 616);
    v13 = 0;
    v7 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
    if ( v7 )
      v7(&v12, v5, 2);
      v14 = *(_DWORD *)(v5 + 12);
      v13 = *(int (**)(void))(v5 + 8);
    result = SceneStack::forEachScreen(v6, (int)&v12, v4);
    if ( v13 )
      result = v13();
  return result;
}


void __fastcall ClientInstance::resetBai(ClientInstance *this, int a2)
{
  ClientInstance *v2; // r4@1
  int v3; // r5@1
  void *v4; // r0@1
  void *v5; // r6@1
  _DWORD *v6; // r0@3

  v2 = this;
  v3 = a2;
  v4 = (void *)*((_DWORD *)this + 24);
  v5 = 0;
  if ( v4 )
  {
    *((_DWORD *)v2 + 24) = 0;
    operator delete(v4);
    v5 = (void *)*((_DWORD *)v2 + 24);
  }
  v6 = operator new(4u);
  *v6 = v3;
  *((_DWORD *)v2 + 24) = v6;
  if ( v5 )
    j_j_j__ZdlPv_3(v5);
}


int __fastcall ClientInstance::getUserId(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  const ClientInstance *v2; // r0@1
  int v3; // r4@1
  int v4; // r5@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r6@8
  unsigned int v8; // r0@10
  Social::User *v10; // [sp+0h] [bp-18h]@1
  int v11; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = (const ClientInstance *)MinecraftGame::getUserManager(*((MinecraftGame **)this + 6));
  Social::UserManager::getUser((Social::UserManager *)&v10, v2, (int)v1);
  v3 = v11;
  v4 = Social::User::getLocalUserId(v10);
  if ( v3 )
  {
    v5 = (unsigned int *)(v3 + 4);
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
      v7 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  return v4;
}


void __fastcall ClientInstance::requestScreenshot(int a1, int a2)
{
  j_j_j__ZN13MinecraftGame17requestScreenshotERK17ScreenshotOptions(*(_DWORD *)(a1 + 24), a2);
}


int __fastcall ClientInstance::onScreenSizeChanged(ClientInstance *this, int a2, int a3, float a4)
{
  int v4; // r8@1
  ClientInstance *v7; // r5@1
  int v8; // r0@1
  Option *v9; // r0@1
  int v10; // r4@1
  int v11; // r0@1
  Option *v12; // r0@1
  int v13; // r0@1
  float v19; // [sp+8h] [bp-20h]@1

  v4 = LODWORD(a4);
  _R6 = a3;
  _R7 = a2;
  v7 = this;
  v8 = ClientInstance::getOptions(this);
  v9 = (Option *)Options::get(v8, 40);
  v10 = Option::getFloat(v9);
  v11 = ClientInstance::getOptions(v7);
  v12 = (Option *)Options::get(v11, 39);
  v13 = Option::getInt(v12);
  __asm
  {
    VMOV            S0, R7
    VMOV            S2, R6
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VSTR            S0, [SP,#0x28+var_20]
    VSTR            S2, [SP,#0x28+var_1C]
  }
  return ClientInstance::_updateScreenSizeVariables(*(float *)&v7, &v19, v10, v13, v4);
}


  if ( ClientInstance::getLevel(*(ClientInstance **)(v4 + 20)) )
{
  else
    result = !Options::hasOverrideUsername((Options *)v1[1]);
  return result;
}


void __fastcall ClientInstance::_startExternalNetworkWorld(int a1, const Social::GameConnectionInfo *a2, int *a3)
{
  ClientInstance::_startExternalNetworkWorld(a1, a2, a3);
}


signed int __fastcall ClientInstance::setupPlayScreenForLeaveGame(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int v2; // r0@4
  bool v3; // zf@4
  signed int result; // r0@8

  v1 = this;
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) == this )
    *(_BYTE *)(MinecraftGame::getGameRenderer(*((MinecraftGame **)v1 + 6)) + 812) = 0;
  if ( !(*(int (**)(void))(**((_DWORD **)v1 + 13) + 44))() )
    goto LABEL_12;
  *(_DWORD *)(MinecraftGame::getGameRenderer(*((MinecraftGame **)v1 + 6)) + 796) = 0;
  *(_DWORD *)(MinecraftGame::getGameRenderer(*((MinecraftGame **)v1 + 6)) + 800) = 1065353216;
  v2 = *((_DWORD *)v1 + 29);
  v3 = v2 == 6;
  if ( v2 != 6 )
    v3 = v2 == 8;
  if ( v3 )
  {
    result = 8;
    *((_DWORD *)v1 + 29) = 8;
  }
  else
LABEL_12:
    result = 7;
    *((_DWORD *)v1 + 29) = 7;
  return result;
}


signed int __fastcall ClientInstance::isPreGame(ClientInstance *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = Minecraft::getLevel(*((Minecraft **)this + 7));
  v2 = 0;
  if ( !v1 )
    v2 = 1;
  return v2;
}


void __fastcall ClientInstance::onPlayerLoaded(ClientInstance *this, Player *a2)
{
  ClientInstance::onPlayerLoaded(this, a2);
}


void __fastcall ClientInstance::clearInProgressBAI(ClientInstance *this)
{
  ClientInstance::clearInProgressBAI(this);
}


  if ( ClientInstance::isValidMultiplayerSkin(a2) )
{
    Social::GameConnectionInfo::GameConnectionInfo((int)&v52, -1, (int *)(v3 + 44), *(_DWORD *)(v3 + 48), v3);
    sub_21E94B4((void **)&v51, "transferServer");
    ClientInstance::startExternalNetworkWorld((int)v2, (int)&v52, &v51);
    v4 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
    {
      v37 = (unsigned int *)(v51 - 4);
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
        j_j_j_j__ZdlPv_9(v4);
    }
    ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v56);
    v5 = (void *)(v55 - 12);
    if ( (int *)(v55 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v55 - 4);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    v6 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v54 - 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    v7 = (void *)(v53 - 12);
    if ( (int *)(v53 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v53 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        goto LABEL_80;
LABEL_79:
      v9 = (*v8)--;
LABEL_80:
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
      return;
  }
  else if ( ClientInstance::isPrimaryClient(v2) == 1 )
  {
    v10 = ClientInstance::getMainSceneStack(v2);
    v11 = ClientInstance::getSceneFactory(v2);
    SceneFactory::createStartMenuScreen((SceneFactory *)&v67, v11);
    SceneStack::pushScreen(v10, (int)&v67, 1);
    v12 = v68;
    if ( v68 )
      v13 = (unsigned int *)(v68 + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        v21 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
        if ( &pthread_create )
        {
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        }
        else
          v22 = (*v21)--;
        if ( v22 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
    v25 = ClientInstance::getMainSceneStack(v2);
    v26 = ClientInstance::getSceneFactory(v2);
    sub_21E94B4((void **)&v64, "disconnectionScreen.lockedSkin.title");
    sub_21E94B4((void **)&v63, "disconnectionScreen.lockedSkin");
    v27 = (int *)sub_21E94B4((void **)&v62, (const char *)&unk_257BC67);
    SceneFactory::createDisconnectScreen((unsigned __int64 *)&v65, v26, &v64, &v63, v27);
    SceneStack::pushScreen(v25, (int)&v65, 0);
    v28 = v66;
    if ( v66 )
      v29 = (unsigned int *)(v66 + 4);
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
    v35 = (void *)(v62 - 12);
    if ( (int *)(v62 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v62 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
    v36 = (void *)(v63 - 12);
    if ( (int *)(v63 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v63 - 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
    v7 = (void *)(v64 - 12);
    if ( (int *)(v64 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v64 - 4);
      goto LABEL_79;
  else
    v15 = ClientInstance::getClientSceneStack(v2);
    v16 = ClientInstance::getSceneFactory(v2);
    sub_21E94B4((void **)&v59, "disconnectionScreen.lockedSkin.title");
    sub_21E94B4((void **)&v58, "disconnectionScreen.lockedSkin");
    v17 = (int *)sub_21E94B4((void **)&v57, (const char *)&unk_257BC67);
    SceneFactory::createDisconnectScreen((unsigned __int64 *)&v60, v16, &v59, &v58, v17);
    SceneStack::pushScreen(v15, (int)&v60, 1);
    v18 = v61;
    if ( v61 )
      v19 = (unsigned int *)(v61 + 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        v23 = (unsigned int *)(v18 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
    v33 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v57 - 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
    v34 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v58 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
    v7 = (void *)(v59 - 12);
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v59 - 4);
}


int __fastcall ClientInstance::setServerPingTime(int result, float a2)
{
  *(float *)(result + 696) = a2;
  return result;
}


int __fastcall ClientInstance::isNotVLRMode(ClientInstance *this)
{
  int v1; // r0@1
  int result; // r0@2
  signed int v3; // r2@3
  signed int v4; // r1@5

  v1 = *((_DWORD *)this + 29);
  if ( v1 )
  {
    v3 = 0;
    if ( v1 != 6 )
      v3 = 1;
    v4 = 0;
    if ( v1 != 8 )
      v4 = 1;
    result = v4 & v3;
  }
  else
    result = 1;
  return result;
}


void __fastcall ClientInstance::requestLeaveGame(ClientInstance *this, int a2, bool a3)
{
  ClientInstance *v3; // r5@1
  int v4; // r6@1
  int v5; // r0@1
  bool v6; // r8@1
  int v7; // r7@5
  int v8; // r7@5
  unsigned int *v9; // r1@6
  unsigned int v10; // r0@8
  unsigned int *v11; // r4@12
  unsigned int v12; // r0@14
  int v13; // r0@22
  bool v14; // zf@22
  signed int v15; // r0@26
  int v16; // r4@28
  int v17; // r7@28
  unsigned int *v18; // r1@29
  unsigned int v19; // r0@31
  unsigned int *v20; // r4@35
  unsigned int v21; // r0@37
  int v22; // [sp+0h] [bp-28h]@28
  int v23; // [sp+4h] [bp-24h]@28
  char v24; // [sp+8h] [bp-20h]@5
  int v25; // [sp+Ch] [bp-1Ch]@5

  v3 = this;
  *(_WORD *)((char *)this + 677) = 257;
  v4 = a2;
  v5 = *((_DWORD *)this + 10);
  v6 = a3;
  *((_DWORD *)v3 + 10) = 0;
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  if ( v4 == 1 )
  {
    SceneStack::flushStack(*((SceneStack **)v3 + 154), 1, 0);
    if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v3 + 6)) == v3 )
    {
      v7 = MinecraftGame::getMainSceneStack(*((MinecraftGame **)v3 + 6));
      SceneFactory::createStartMenuScreen((SceneFactory *)&v24, *((_DWORD *)v3 + 19));
      SceneStack::pushScreen(v7, (int)&v24, 1);
      v8 = v25;
      if ( v25 )
      {
        v9 = (unsigned int *)(v25 + 4);
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
      if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v3 + 6)) == v3 )
        *(_BYTE *)(MinecraftGame::getGameRenderer(*((MinecraftGame **)v3 + 6)) + 812) = 0;
      if ( !(*(int (**)(void))(**((_DWORD **)v3 + 13) + 44))() )
        goto LABEL_45;
      *(_DWORD *)(MinecraftGame::getGameRenderer(*((MinecraftGame **)v3 + 6)) + 796) = 0;
      *(_DWORD *)(MinecraftGame::getGameRenderer(*((MinecraftGame **)v3 + 6)) + 800) = 1065353216;
      v13 = *((_DWORD *)v3 + 29);
      v14 = v13 == 6;
      if ( v13 != 6 )
        v14 = v13 == 8;
      if ( v14 )
        v15 = 8;
      else
LABEL_45:
        v15 = 7;
      *((_DWORD *)v3 + 29) = v15;
      v16 = MinecraftGame::getMainSceneStack(*((MinecraftGame **)v3 + 6));
      SceneFactory::createPlayScreen((unsigned __int64 *)&v22, *((_DWORD *)v3 + 19), *((_DWORD *)v3 + 31));
      SceneStack::pushScreen(v16, (int)&v22, 0);
      v17 = v23;
      if ( v23 )
        v18 = (unsigned int *)(v23 + 4);
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
    }
  }
  *((_BYTE *)v3 + 676) = v4;
  *((_BYTE *)v3 + 679) = v6;
}


int __fastcall ClientInstance::forEachVisibleScreen(int a1, int a2, int a3)
{
  int v3; // r9@1
  int v4; // r4@1
  SceneStack *v5; // r0@8
  int v6; // r0@8
  int v7; // r8@9
  SceneStack *v8; // r0@17
  int v9; // r0@18
  int v10; // r7@21
  int v11; // r10@21
  int v12; // r5@22
  _QWORD *v13; // r6@22
  void (__fastcall *v14)(char *, int, signed int); // r3@22
  int result; // r0@26
  SceneStack *v16; // r0@28
  __int64 v17; // r2@28
  int v18; // r5@28
  void (__fastcall *v19)(char *, int, signed int); // r3@28
  char v20; // [sp+8h] [bp-48h]@23
  int (*v21)(void); // [sp+10h] [bp-40h]@22
  int v22; // [sp+14h] [bp-3Ch]@23
  char v23; // [sp+18h] [bp-38h]@29
  int (*v24)(void); // [sp+20h] [bp-30h]@28
  int v25; // [sp+24h] [bp-2Ch]@29
  char v26; // [sp+28h] [bp-28h]@28

  v3 = a2;
  v4 = a1;
  if ( a3 == 1 )
  {
    if ( (*(int (**)(void))(**(_DWORD **)(a1 + 52) + 276))() == 1 )
    {
      if ( *(_DWORD *)(v4 + 116) == 4 )
      {
        if ( (*(int (**)(void))(**(_DWORD **)(v4 + 52) + 76))() == 1 )
        {
          if ( *(_DWORD *)(v4 + 108) & 0x7FFFFFFF )
          {
            v7 = 0;
          }
          else
            if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(v4 + 24)) != v4
              || SceneStack::isEmpty(*(SceneStack **)(v4 + 616)) != 1 )
            {
              v6 = SceneStack::getScreen(*(SceneStack **)(v4 + 616));
            }
            else
              v5 = (SceneStack *)MinecraftGame::getMainSceneStack(*(MinecraftGame **)(v4 + 24));
              v6 = SceneStack::getScreen(v5);
            if ( (*(int (**)(void))(*(_DWORD *)v6 + 168))() )
              v7 = 0;
              v8 = (SceneStack *)MinecraftGame::getMainSceneStack(*(MinecraftGame **)(v4 + 24));
              if ( SceneStack::hasChangedThisFrame(v8) )
                v9 = 1;
              else
                v9 = SceneStack::hasChangedThisFrame(*(SceneStack **)(v4 + 616));
              v7 = v9 ^ 1;
        }
        else
          v7 = 0;
      }
      else
        v7 = 0;
    }
    else
      v7 = 0;
  }
  else
    v7 = 0;
  v10 = MinecraftGame::getUIRenderClient(*(MinecraftGame **)(v4 + 24));
  v11 = *(_BYTE *)(v4 + 668);
  if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(v4 + 24)) == v4 )
    v16 = (SceneStack *)MinecraftGame::getMainSceneStack(*(MinecraftGame **)(v4 + 24));
    LODWORD(v17) = *(_DWORD *)(v4 + 616);
    CompositeSceneStackView::CompositeSceneStackView((CompositeSceneStackView *)&v26, v16, v17);
    v18 = 0;
    v24 = 0;
    v19 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
    if ( v19 )
      v19(&v23, v3, 2);
      v25 = *(_DWORD *)(v3 + 12);
      v24 = *(int (**)(void))(v3 + 8);
    if ( v10 != v11 )
      v18 = 1;
    result = CompositeSceneStackView::forEachVisibleScreen(
               (unsigned __int64 *)&v26,
               (int)&v23,
               *(_BYTE *)(v4 + 120),
               v7,
               v18);
    if ( v24 )
      result = v24();
    v12 = 0;
    v13 = *(_QWORD **)(v4 + 616);
    v21 = 0;
    v14 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
    if ( v14 )
      v14(&v20, v3, 2);
      v22 = *(_DWORD *)(v3 + 12);
      v21 = *(int (**)(void))(v3 + 8);
      v12 = 1;
    result = SceneStack::forEachVisibleScreen(v13, (int)&v20, *(_BYTE *)(v4 + 120), v7, v12);
    if ( v21 )
      result = v21();
  return result;
}


int __fastcall ClientInstance::initCommands(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int *v2; // r8@1
  Automation::AutomationClient *v3; // r7@1
  int v4; // r5@1
  CommandOutputSender *v5; // r6@1
  int v6; // r5@3
  _DWORD *v7; // r0@3
  int result; // r0@3
  _DWORD *v9; // [sp+4h] [bp-2Ch]@3
  int (*v10)(void); // [sp+Ch] [bp-24h]@3
  signed int (__fastcall *v11)(int **); // [sp+10h] [bp-20h]@3
  CommandOutputSender *v12; // [sp+14h] [bp-1Ch]@1

  v1 = this;
  Minecraft::initCommands(*((Minecraft **)this + 7));
  v2 = (int *)Minecraft::getCommands(*((Minecraft **)v1 + 7));
  v3 = (Automation::AutomationClient *)(*(int (**)(void))(**((_DWORD **)v1 + 6) + 128))();
  v4 = *((_DWORD *)v1 + 164);
  v5 = (CommandOutputSender *)operator new(0xCu);
  ClientCommandOutputSender::ClientCommandOutputSender(v5, v3, v4);
  v12 = v5;
  MinecraftCommands::setOutputSender(v2, (int *)&v12);
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 4))();
  v12 = 0;
  v6 = Minecraft::getCommands(*((Minecraft **)v1 + 7));
  v7 = operator new(4u);
  *v7 = v1;
  v9 = v7;
  v10 = (int (*)(void))sub_BEB324;
  v11 = sub_BEB204;
  result = MinecraftCommands::registerChatPermissionsCallback(v6, (int)&v9);
  if ( v10 )
    result = v10();
  return result;
}


int __fastcall ClientInstance::setClientPlayMode(int result, _DWORD *a2)
{
  *(_DWORD *)(result + 116) = *a2;
  return result;
}


int __fastcall ClientInstance::getTopScreen(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  SceneStack *v2; // r0@4
  int result; // r0@4

  v1 = this;
  if ( ((ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) != this
     || SceneStack::isEmpty(*((SceneStack **)v1 + 154)) != 1)
    && SceneStack::isEmpty(*((SceneStack **)v1 + 154)) != 1 )
  {
    result = SceneStack::getTopScreen(*((SceneStack **)v1 + 154));
  }
  else
    v2 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v1 + 6));
    result = SceneStack::getTopScreen(v2);
  return result;
}


unsigned int __fastcall ClientInstance::_fetchItemAndNavigateToPurchaseScreen(ClientInstance *a1, int *a2, const void **a3, int *a4, int a5)
{
  int *v5; // r5@1
  const void **v6; // r7@1
  ClientInstance *v7; // r10@1
  unsigned __int64 *v8; // r6@1
  int v9; // r4@1
  int v10; // r12@1
  int v11; // r11@1
  unsigned int *v12; // r0@2
  unsigned int v13; // r1@2
  unsigned int v14; // r2@5
  unsigned int v15; // r3@6
  int v16; // r4@9
  unsigned int *v17; // r8@9
  unsigned int v18; // r1@13
  unsigned int v19; // r1@17
  unsigned int v20; // r0@23
  unsigned int v21; // r0@30
  unsigned int *v22; // r0@34
  unsigned int v23; // r1@36
  size_t v24; // r2@39
  void *v25; // r5@41
  unsigned int *v26; // r0@42
  unsigned int v27; // r1@44
  unsigned int *v28; // r0@48
  unsigned int v29; // r1@50
  int v30; // r4@57
  unsigned int *v31; // r1@58
  unsigned int v32; // r0@60
  unsigned int *v33; // r6@64
  unsigned int v34; // r0@66
  MinecraftGame **v35; // r9@68
  NetworkHandler *v36; // r0@68
  ThirdPartyInfo *v37; // r5@68
  int *v38; // r5@69
  void *v39; // r7@69
  unsigned int *v40; // r0@70
  unsigned int v41; // r1@72
  void *v42; // r0@77
  void *v43; // r0@78
  int v44; // r0@79
  unsigned int *v45; // r2@80
  unsigned int v46; // r1@82
  void *v47; // r0@87
  int v48; // r4@88
  int *v49; // r0@88
  int v50; // r4@88
  unsigned int *v51; // r1@89
  unsigned int v52; // r0@91
  unsigned int *v53; // r5@95
  unsigned int v54; // r0@97
  void *v55; // r0@102
  void *v56; // r0@105
  int v57; // r0@107
  int v58; // r4@109
  unsigned int *v59; // r1@110
  unsigned int v60; // r0@112
  unsigned int *v61; // r5@116
  unsigned int v62; // r0@118
  void *v63; // r0@123
  void *v64; // r0@124
  int v65; // r0@125
  unsigned int *v66; // r2@126
  unsigned int v67; // r1@128
  unsigned int result; // r0@135
  int v69; // r4@140
  unsigned int *v70; // r1@141
  unsigned int *v71; // r5@147
  unsigned int *v72; // r2@155
  signed int v73; // r1@157
  unsigned int *v74; // r2@159
  signed int v75; // r1@161
  unsigned int *v76; // r2@163
  signed int v77; // r1@165
  unsigned int *v78; // r2@167
  signed int v79; // r1@169
  unsigned int *v80; // r2@171
  signed int v81; // r1@173
  unsigned int *v82; // r2@175
  signed int v83; // r1@177
  unsigned int *v84; // r2@179
  signed int v85; // r1@181
  unsigned int *v86; // r0@193
  unsigned int v87; // r1@195
  int v88; // r4@202
  unsigned int *v89; // r1@203
  unsigned int v90; // r0@205
  unsigned int *v91; // r5@209
  unsigned int v92; // r0@211
  void *v93; // r0@236
  void *v94; // r0@237
  int v95; // r0@238
  unsigned int *v96; // r2@239
  unsigned int v97; // r1@241
  void *v98; // r0@246
  int v99; // r4@247
  int *v100; // r0@247
  int v101; // r4@247
  unsigned int *v102; // r1@248
  unsigned int v103; // r0@250
  unsigned int *v104; // r5@254
  unsigned int v105; // r0@256
  void *v106; // r0@261
  void *v107; // r0@264
  unsigned int *v108; // r2@265
  signed int v109; // r1@267
  unsigned int *v110; // r2@269
  signed int v111; // r1@271
  unsigned int *v112; // r2@273
  signed int v113; // r1@275
  unsigned int *v114; // r2@277
  signed int v115; // r1@279
  unsigned int *v116; // r2@281
  signed int v117; // r1@283
  int v118; // [sp+10h] [bp-128h]@2
  int *v119; // [sp+14h] [bp-124h]@39
  int *v120; // [sp+18h] [bp-120h]@1
  int v121; // [sp+20h] [bp-118h]@88
  void *v122; // [sp+24h] [bp-114h]@88
  int v123; // [sp+2Ch] [bp-10Ch]@88
  char v124; // [sp+30h] [bp-108h]@88
  int v125; // [sp+34h] [bp-104h]@88
  int v126; // [sp+3Ch] [bp-FCh]@247
  void *v127; // [sp+40h] [bp-F8h]@247
  int v128; // [sp+48h] [bp-F0h]@247
  char v129; // [sp+4Ch] [bp-ECh]@247
  int v130; // [sp+50h] [bp-E8h]@247
  int v131; // [sp+54h] [bp-E4h]@28
  int v132; // [sp+58h] [bp-E0h]@28
  int v133; // [sp+5Ch] [bp-DCh]@33
  int v134; // [sp+60h] [bp-D8h]@33
  int v135; // [sp+64h] [bp-D4h]@33
  int v136; // [sp+68h] [bp-D0h]@33
  int v137; // [sp+6Ch] [bp-CCh]@33
  int v138; // [sp+70h] [bp-C8h]@1
  int v139; // [sp+74h] [bp-C4h]@33
  char v140; // [sp+78h] [bp-C0h]@1
  char v141; // [sp+80h] [bp-B8h]@198
  void (*v142)(void); // [sp+88h] [bp-B0h]@198
  int v143; // [sp+90h] [bp-A8h]@69
  int v144; // [sp+94h] [bp-A4h]@69
  int v145; // [sp+98h] [bp-A0h]@192
  int v146; // [sp+9Ch] [bp-9Ch]@192
  int v147; // [sp+A0h] [bp-98h]@192
  int v148; // [sp+A4h] [bp-94h]@192
  int v149; // [sp+A8h] [bp-90h]@192
  char v150; // [sp+ACh] [bp-8Ch]@198
  void (*v151)(void); // [sp+B4h] [bp-84h]@200
  int v152; // [sp+BCh] [bp-7Ch]@69
  char v153; // [sp+C0h] [bp-78h]@53
  void (*v154)(void); // [sp+C8h] [bp-70h]@53
  int v155; // [sp+D0h] [bp-68h]@41
  int v156; // [sp+D4h] [bp-64h]@41
  int v157; // [sp+D8h] [bp-60h]@47
  int v158; // [sp+DCh] [bp-5Ch]@47
  int v159; // [sp+E0h] [bp-58h]@47
  int v160; // [sp+E4h] [bp-54h]@47
  int v161; // [sp+E8h] [bp-50h]@47
  char v162; // [sp+ECh] [bp-4Ch]@53
  void (*v163)(void); // [sp+F4h] [bp-44h]@55
  int v164; // [sp+100h] [bp-38h]@41
  char v165; // [sp+104h] [bp-34h]@107
  void (*v166)(void); // [sp+10Ch] [bp-2Ch]@107

  v5 = a4;
  v6 = a3;
  v120 = a2;
  v7 = a1;
  v8 = ClientInstance::_getScenePreparedForOffer(a1);
  j__ZNSt12__shared_ptrI12AsyncTrackerLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v138);
  v9 = v138;
  sub_DA7F0C(&v140);
  v10 = v9 + 8;
  *(_QWORD *)v10 = *(_QWORD *)&v140;
  *(_DWORD *)(v10 + 8) = 10;
  *(_DWORD *)(v9 + 20) = 0;
  *(_BYTE *)(v9 + 24) = 0;
  *(_BYTE *)(v9 + 1) = 0;
  v11 = *((_DWORD *)v7 + 3);
  if ( !v11 )
    std::__throw_bad_weak_ptr();
  v118 = (int)v8;
  v12 = (unsigned int *)(v11 + 4);
  v13 = *(_DWORD *)(v11 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v13 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v14 = __ldrex(v12);
      if ( v14 == v13 )
        break;
      __clrex();
      v13 = v14;
    }
    v15 = __strex(v13 + 1, v12);
    v13 = v14;
  }
  while ( v15 );
  __dmb();
  v16 = *((_DWORD *)v7 + 2);
  v17 = (unsigned int *)(v11 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v18 = __ldrex(v17);
    while ( __strex(v18 + 1, v17) );
  else
    ++*v17;
      v19 = __ldrex(v12);
    while ( __strex(v19 - 1, v12) );
    v19 = (*v12)--;
  if ( v19 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
    if ( &pthread_create )
      do
        v20 = __ldrex(v17);
      while ( __strex(v20 - 1, v17) );
    else
      v20 = (*v17)--;
    if ( v20 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v131 = v16;
  v132 = v11;
      v21 = __ldrex(v17);
    while ( __strex(v21 + 1, v17) );
  sub_DA73B4(&v133, v120);
  sub_DA73B4(&v134, v5);
  v135 = a5;
  v136 = v138;
  v137 = v139;
  if ( v139 )
    v22 = (unsigned int *)(v139 + 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      ++*v22;
  v119 = (int *)v6;
  v24 = *((_DWORD *)*v6 - 3);
  if ( v24 == *((_DWORD *)CatalogContentType::ThirdPartyOffer - 3)
    && !memcmp(*v6, CatalogContentType::ThirdPartyOffer, v24) )
    v35 = (MinecraftGame **)((char *)v7 + 24);
    v36 = (NetworkHandler *)MinecraftGame::getClientNetworkSystem(*((MinecraftGame **)v7 + 6));
    v37 = (ThirdPartyInfo *)(NetworkHandler::getConnectionInfo(v36) + 20);
    if ( ThirdPartyInfo::isValid(v37) == 1 )
      v38 = (int *)ThirdPartyInfo::getCreatorName(v37);
      v39 = operator new(0x34u);
      sub_DA73B4(&v152, v38);
      v143 = v131;
      v144 = v132;
      if ( v132 )
      {
        v40 = (unsigned int *)(v132 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v41 = __ldrex(v40);
          while ( __strex(v41 + 1, v40) );
        }
        else
          ++*v40;
      }
      sub_DA73B4(&v145, &v133);
      sub_DA73B4(&v146, &v134);
      v147 = v135;
      v148 = v136;
      v149 = v137;
      if ( v137 )
        v86 = (unsigned int *)(v137 + 4);
            v87 = __ldrex(v86);
          while ( __strex(v87 + 1, v86) );
          ++*v86;
      sub_BEBF18((int)&v150, (int)&v143);
      v142 = 0;
      ThirdPartyServerItemProgressHandler::ThirdPartyServerItemProgressHandler((int)v39, &v152, (int)&v150, (int)&v141);
      if ( v142 )
        v142();
      if ( v151 )
        v151();
      v88 = v149;
      if ( v149 )
        v89 = (unsigned int *)(v149 + 4);
            v90 = __ldrex(v89);
          while ( __strex(v90 - 1, v89) );
          v90 = (*v89)--;
        if ( v90 == 1 )
          v91 = (unsigned int *)(v88 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v88 + 8))(v88);
          if ( &pthread_create )
          {
            __dmb();
            do
              v92 = __ldrex(v91);
            while ( __strex(v92 - 1, v91) );
          }
          else
            v92 = (*v91)--;
          if ( v92 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v88 + 12))(v88);
      v93 = (void *)(v146 - 12);
      if ( (int *)(v146 - 12) != &dword_28898C0 )
        v110 = (unsigned int *)(v146 - 4);
            v111 = __ldrex(v110);
          while ( __strex(v111 - 1, v110) );
          v111 = (*v110)--;
        if ( v111 <= 0 )
          j_j_j_j_j__ZdlPv_9(v93);
      v94 = (void *)(v145 - 12);
      if ( (int *)(v145 - 12) != &dword_28898C0 )
        v112 = (unsigned int *)(v145 - 4);
            v113 = __ldrex(v112);
          while ( __strex(v113 - 1, v112) );
          v113 = (*v112)--;
        if ( v113 <= 0 )
          j_j_j_j_j__ZdlPv_9(v94);
      v95 = v144;
      if ( v144 )
        v96 = (unsigned int *)(v144 + 8);
            v97 = __ldrex(v96);
          while ( __strex(v97 - 1, v96) );
          v97 = (*v96)--;
        if ( v97 == 1 )
          (*(void (**)(void))(*(_DWORD *)v95 + 12))();
      v98 = (void *)(v152 - 12);
      if ( (int *)(v152 - 12) != &dword_28898C0 )
        v114 = (unsigned int *)(v152 - 4);
            v115 = __ldrex(v114);
          while ( __strex(v115 - 1, v114) );
          v115 = (*v114)--;
        if ( v115 <= 0 )
          j_j_j_j_j__ZdlPv_9(v98);
      v99 = *((_DWORD *)v7 + 19);
      sub_DA7364((void **)&v128, "hydrating_item_for_upsell");
      v127 = v39;
      v100 = (int *)sub_DA7364((void **)&v126, (const char *)&unk_257BC67);
      SceneFactory::createModalProgressScreen((int)&v129, v99, (int)&v128, COERCE_FLOAT(&v127), 0, 0, v100, 1061997773);
      SceneStack::pushScreen((int)v8, (int)&v129, 0);
      v101 = v130;
      if ( v130 )
        v102 = (unsigned int *)(v130 + 4);
            v103 = __ldrex(v102);
          while ( __strex(v103 - 1, v102) );
          v103 = (*v102)--;
        if ( v103 == 1 )
          v104 = (unsigned int *)(v101 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v101 + 8))(v101);
              v105 = __ldrex(v104);
            while ( __strex(v105 - 1, v104) );
            v105 = (*v104)--;
          if ( v105 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v101 + 12))(v101);
      v106 = (void *)(v126 - 12);
      if ( (int *)(v126 - 12) != &dword_28898C0 )
        v116 = (unsigned int *)(v126 - 4);
            v117 = __ldrex(v116);
          while ( __strex(v117 - 1, v116) );
          v117 = (*v116)--;
        if ( v117 <= 0 )
          j_j_j_j_j__ZdlPv_9(v106);
      if ( v127 )
        (*(void (**)(void))(*(_DWORD *)v127 + 4))();
      v127 = 0;
      v107 = (void *)(v128 - 12);
      if ( (int *)(v128 - 12) != &dword_28898C0 )
        v108 = (unsigned int *)(v128 - 4);
            v109 = __ldrex(v108);
          while ( __strex(v109 - 1, v108) );
          v109 = (*v108)--;
        if ( v109 <= 0 )
          j_j_j_j_j__ZdlPv_9(v107);
    v25 = operator new(0x30u);
    sub_DA7364((void **)&v164, "store.fetchingItem");
    v155 = v131;
    v156 = v132;
    if ( v132 )
      v26 = (unsigned int *)(v132 + 8);
      if ( &pthread_create )
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 + 1, v26) );
      else
        ++*v26;
    sub_DA73B4(&v157, &v133);
    sub_DA73B4(&v158, &v134);
    v159 = v135;
    v160 = v136;
    v161 = v137;
    if ( v137 )
      v28 = (unsigned int *)(v137 + 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 + 1, v28) );
        ++*v28;
    sub_BEBF18((int)&v162, (int)&v155);
    v154 = 0;
    StoreProgressHandler::StoreProgressHandler((int)v25, &v164, (int)&v162, (int)&v153);
    if ( v154 )
      v154();
    if ( v163 )
      v163();
    v30 = v161;
    if ( v161 )
      v31 = (unsigned int *)(v161 + 4);
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
    v42 = (void *)(v158 - 12);
    if ( (int *)(v158 - 12) != &dword_28898C0 )
      v76 = (unsigned int *)(v158 - 4);
          v77 = __ldrex(v76);
        while ( __strex(v77 - 1, v76) );
        v77 = (*v76)--;
      if ( v77 <= 0 )
        j_j_j_j_j__ZdlPv_9(v42);
    v43 = (void *)(v157 - 12);
    if ( (int *)(v157 - 12) != &dword_28898C0 )
      v78 = (unsigned int *)(v157 - 4);
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
        v79 = (*v78)--;
      if ( v79 <= 0 )
        j_j_j_j_j__ZdlPv_9(v43);
    v44 = v156;
    if ( v156 )
      v45 = (unsigned int *)(v156 + 8);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 == 1 )
        (*(void (**)(void))(*(_DWORD *)v44 + 12))();
    v47 = (void *)(v164 - 12);
    if ( (int *)(v164 - 12) != &dword_28898C0 )
      v80 = (unsigned int *)(v164 - 4);
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        v81 = (*v80)--;
      if ( v81 <= 0 )
        j_j_j_j_j__ZdlPv_9(v47);
    v48 = *((_DWORD *)v7 + 19);
    sub_DA7364((void **)&v123, "hydrating_item_for_upsell");
    v122 = v25;
    v49 = (int *)sub_DA7364((void **)&v121, (const char *)&unk_257BC67);
    SceneFactory::createModalProgressScreen((int)&v124, v48, (int)&v123, COERCE_FLOAT(&v122), 0, 0, v49, 1061997773);
    SceneStack::pushScreen(v118, (int)&v124, 0);
    v50 = v125;
    if ( v125 )
      v51 = (unsigned int *)(v125 + 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 == 1 )
        v53 = (unsigned int *)(v50 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 8))(v50);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 12))(v50);
    v55 = (void *)(v121 - 12);
    if ( (int *)(v121 - 12) != &dword_28898C0 )
      v82 = (unsigned int *)(v121 - 4);
          v83 = __ldrex(v82);
        while ( __strex(v83 - 1, v82) );
        v83 = (*v82)--;
      if ( v83 <= 0 )
        j_j_j_j_j__ZdlPv_9(v55);
    if ( v122 )
      (*(void (**)(void))(*(_DWORD *)v122 + 4))();
    v122 = 0;
    v56 = (void *)(v123 - 12);
    if ( (int *)(v123 - 12) != &dword_28898C0 )
      v84 = (unsigned int *)(v123 - 4);
          v85 = __ldrex(v84);
        while ( __strex(v85 - 1, v84) );
        v85 = (*v84)--;
      if ( v85 <= 0 )
        j_j_j_j_j__ZdlPv_9(v56);
  v57 = MinecraftGame::getStoreCatalog(*v35);
  v166 = 0;
  StoreCatalogRepository::fetchStoreItem(v57, (int **)v120, v119, (int)&v165);
  if ( v166 )
    v166();
  v58 = v137;
  if ( v137 )
    v59 = (unsigned int *)(v137 + 4);
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
  v63 = (void *)(v134 - 12);
  if ( (int *)(v134 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v134 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j_j__ZdlPv_9(v63);
  v64 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v133 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j_j__ZdlPv_9(v64);
  v65 = v132;
  if ( v132 )
    v66 = (unsigned int *)(v132 + 8);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 == 1 )
      (*(void (**)(void))(*(_DWORD *)v65 + 12))();
      result = __ldrex(v17);
    while ( __strex(result - 1, v17) );
    result = (*v17)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v69 = v139;
    v70 = (unsigned int *)(v139 + 4);
        result = __ldrex(v70);
      while ( __strex(result - 1, v70) );
      result = (*v70)--;
    if ( result == 1 )
      v71 = (unsigned int *)(v69 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v69 + 8))(v69);
          result = __ldrex(v71);
        while ( __strex(result - 1, v71) );
        result = (*v71)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v69 + 12))(v69);
  return result;
}


int __fastcall ClientInstance::onInitMinecraftGame(ClientInstance *this)
{
  ClientInstance *v1; // r1@1
  int result; // r0@1

  v1 = this;
  result = *((_DWORD *)this + 10);
  *((_DWORD *)v1 + 10) = 0;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


signed int __fastcall ClientInstance::isMultiPlayerClient(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  Level *v2; // r0@2
  signed int result; // r0@4

  v1 = this;
  if ( Minecraft::getLevel(*((Minecraft **)this + 7))
    && (v2 = (Level *)Minecraft::getLevel(*((Minecraft **)v1 + 7)), Level::isMultiplayerGame(v2) == 1) )
  {
    if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)v1 + 6)) == v1 )
      result = !MinecraftGame::isHostingLocalDedicatedServer(*((MinecraftGame **)v1 + 6));
    else
      result = 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall ClientInstance::useTouchscreen(ClientInstance *this)
{
  ClientInputHandler *v1; // r0@1
  signed int v2; // r4@1

  v1 = (ClientInputHandler *)*((_DWORD *)this + 16);
  v2 = 0;
  if ( v1 && ClientInputHandler::getCurrentInputMode(v1) == 2 )
    v2 = 1;
  return v2;
}


void __fastcall ClientInstance::onPlayerLoaded(ClientInstance *this, Player *a2)
{
  j_j_j__ZN13MinecraftGame14onPlayerLoadedER14ClientInstanceR6Player(*((MinecraftGame **)this + 6), this, a2);
}


int __fastcall ClientInstance::createSkin(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  ClientSkinInfoData *v2; // r5@1
  int result; // r0@1

  v1 = this;
  v2 = (ClientSkinInfoData *)operator new(0x24u);
  result = ClientSkinInfoData::ClientSkinInfoData(v2);
  *(_DWORD *)v1 = v2;
  return result;
}


int __fastcall ClientInstance::getMouseGrabbed(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) == this )
    result = MinecraftGame::getMouseGrabbed(*((MinecraftGame **)v1 + 6));
  else
    result = 0;
  return result;
}


signed int __fastcall ClientInstance::isRealityFullVRMode(ClientInstance *this)
{
  signed int result; // r0@2
  int v3; // r1@3

  _R4 = this;
  if ( *((_DWORD *)this + 29) == 4 )
  {
    v3 = (*(int (**)(void))(**((_DWORD **)this + 13) + 76))();
    result = 0;
    if ( v3 == 1 )
    {
      __asm
      {
        VLDR            S0, [R4,#0x6C]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        result = 1;
    }
  }
  else
  return result;
}


int __fastcall ClientInstance::isValidMultiplayerSkin(ClientInstance *this)
{
  Skin *v1; // r0@1
  SkinPack *v2; // r0@2
  Pack *v3; // r0@2
  PackManifest *v4; // r0@2
  int result; // r0@2

  v1 = SkinRepositoryClientInterface::getSelectedSkin(*((SkinRepositoryClientInterface **)this + 168));
  if ( v1 )
  {
    v2 = (SkinPack *)Skin::getSkinPack(v1);
    v3 = (Pack *)SkinPack::getPack(v2);
    v4 = (PackManifest *)Pack::getManifest(v3);
    result = (PackManifest::isPlatformLocked(v4) ^ 1) & 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall ClientInstance::setDisableInput(ClientInstance *this, int a2)
{
  ClientInstance *v2; // r4@1
  int v3; // r5@1

  v2 = this;
  v3 = a2;
  ClientInputHandler::setDisableInput(*((ClientInputHandler **)this + 16), a2);
  if ( v3 == 1 )
    j_j_j__ZN18ClientInputHandler23releaseButtonsAndSticksEv(*((ClientInputHandler **)v2 + 16));
}


int __fastcall ClientInstance::isShowingMenu(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  SceneStack *v2; // r0@3
  int v3; // r0@3

  v1 = this;
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) != this
    || SceneStack::isEmpty(*((SceneStack **)v1 + 154)) != 1 )
  {
    v3 = SceneStack::getScreen(*((SceneStack **)v1 + 154));
  }
  else
    v2 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v1 + 6));
    v3 = SceneStack::getScreen(v2);
  return (*(int (**)(void))(*(_DWORD *)v3 + 168))();
}


void __fastcall ClientInstance::onClientCreatedLevel(int a1, int *a2, int *a3)
{
  int *v3; // r6@1
  int v4; // r4@1
  int v5; // r0@1
  int *v6; // r5@1
  int v7; // r2@1
  void (*v8)(void); // r3@1
  int v9; // r0@3
  int v10; // r2@3
  int v11; // [sp+4h] [bp-1Ch]@3
  int v12; // [sp+8h] [bp-18h]@1

  v3 = a3;
  v4 = a1;
  v5 = *a3;
  v6 = a2;
  *(_DWORD *)(v4 + 92) = *a3;
  (*(void (**)(void))(*(_DWORD *)v5 + 1248))();
  v7 = *v3;
  v8 = *(void (**)(void))(*(_DWORD *)*v6 + 56);
  *v3 = 0;
  v12 = v7;
  v8();
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 32))();
  v12 = 0;
  v9 = *(_DWORD *)(v4 + 28);
  v10 = *v6;
  *v6 = 0;
  v11 = v10;
  Minecraft::onClientCreatedLevel(v9, &v11);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  v11 = 0;
  MinecraftGame::onClientCreatedLevel(*(MinecraftGame **)(v4 + 24), (ClientInstance *)v4);
}


int __fastcall ClientInstance::getUser(ClientInstance *this, int a2)
{
  int v2; // r4@1
  ClientInstance *v3; // r5@1
  const ClientInstance *v4; // r0@1
  int result; // r0@1
  int v6; // [sp+0h] [bp-18h]@1
  int v7; // [sp+4h] [bp-14h]@1

  v2 = a2;
  v3 = this;
  v4 = (const ClientInstance *)MinecraftGame::getUserManager(*(MinecraftGame **)(a2 + 24));
  Social::UserManager::getUser((Social::UserManager *)&v6, v4, v2);
  *(_DWORD *)v3 = v6;
  result = v7;
  *((_DWORD *)v3 + 1) = v7;
  return result;
}


int __fastcall ClientInstance::_initSceneStack(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  unsigned int v2; // r6@1
  void *v3; // r5@1
  SceneStack *v4; // r0@1
  SceneStack *v5; // r0@2
  _DWORD *v6; // r0@3
  __int64 v7; // r1@3
  int v8; // r5@5
  _DWORD *v9; // r0@5
  int v10; // r5@7
  _DWORD *v11; // r0@7
  int result; // r0@7
  _DWORD *v13; // [sp+0h] [bp-40h]@7
  int (__cdecl *v14)(_DWORD); // [sp+8h] [bp-38h]@7
  void (__fastcall *v15)(int **, int, int); // [sp+Ch] [bp-34h]@7
  _DWORD *v16; // [sp+10h] [bp-30h]@5
  void (*v17)(void); // [sp+18h] [bp-28h]@5
  void (__fastcall *v18)(int **, int); // [sp+1Ch] [bp-24h]@5
  _DWORD *v19; // [sp+20h] [bp-20h]@3
  __int64 v20; // [sp+28h] [bp-18h]@3

  v1 = this;
  v2 = *((_DWORD *)this + 20);
  v3 = operator new(0x60u);
  SceneStack::SceneStack((int)v3, v2);
  v4 = (SceneStack *)*((_DWORD *)v1 + 154);
  *((_DWORD *)v1 + 154) = v3;
  if ( v4 )
  {
    v5 = SceneStack::~SceneStack(v4);
    operator delete((void *)v5);
    v3 = (void *)*((_DWORD *)v1 + 154);
  }
  v6 = operator new(4u);
  LODWORD(v7) = sub_BEB4B8;
  *v6 = v1;
  HIDWORD(v7) = sub_BEB35C;
  v19 = v6;
  v20 = v7;
  SceneStack::setPrePushScreenCallback((int)v3, (int)&v19);
  if ( (_DWORD)v20 )
    ((void (*)(void))v20)();
  v8 = *((_DWORD *)v1 + 154);
  v9 = operator new(4u);
  *v9 = v1;
  v16 = v9;
  v17 = (void (*)(void))sub_BEB750;
  v18 = sub_BEB4F0;
  SceneStack::setPushScreenCallback(v8, (int)&v16);
  if ( v17 )
    v17();
  v10 = *((_DWORD *)v1 + 154);
  v11 = operator new(4u);
  *v11 = v1;
  v13 = v11;
  v14 = (int (__cdecl *)(_DWORD))sub_BEB9E4;
  v15 = sub_BEB788;
  result = SceneStack::setPopCallback(v10, (int)&v13);
  if ( v14 )
    result = v14(&v13);
  return result;
}


int __fastcall ClientInstance::stopDestroying(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int result; // r0@1
  int v3; // r1@2
  bool v4; // zf@2
  Level *v5; // r0@5
  char *v6; // r5@5
  int v7; // [sp+4h] [bp-1Ch]@5
  int v8; // [sp+8h] [bp-18h]@6
  int v9; // [sp+Ch] [bp-14h]@7

  v1 = this;
  result = *((_DWORD *)this + 23);
  if ( result )
  {
    v3 = *((_DWORD *)v1 + 7);
    v4 = v3 == 0;
    if ( v3 )
      v4 = *(_BYTE *)(result + 5228) == 0;
    if ( !v4 )
    {
      (*(void (**)(void))(*(_DWORD *)result + 1280))();
      v5 = (Level *)Entity::getLevel(*((Entity **)v1 + 23));
      v6 = Level::getHitResult(v5);
      (*(void (**)(void))(**(_DWORD **)(*((_DWORD *)v1 + 23) + 5172) + 20))();
      GameMode::getDestroyBlockPos((GameMode *)&v7, *(_DWORD *)(*((_DWORD *)v1 + 23) + 5172));
      if ( v7 != *((_DWORD *)v6 + 2) || v8 != *((_DWORD *)v6 + 3) || (result = v9, v9 != *((_DWORD *)v6 + 4)) )
        result = (*(int (**)(void))(**(_DWORD **)(*((_DWORD *)v1 + 23) + 5172) + 20))();
    }
  }
  return result;
}


  if ( ClientInstance::getControllerId(a2) != *(_DWORD *)v3 )
{
    ClientInstance::resetPlayerMovement(v2);
    j_j_j__ZN14ClientInstance15setDisableInputEb(v2, *(_BYTE *)(v3 + 4));
  }
}


char *__fastcall ClientInstance::getLastPointerLocation(ClientInstance *this)
{
  return (char *)this + 604;
}


char *__fastcall ClientInstance::getSentMessageHistory(ClientInstance *this)
{
  return (char *)this + 700;
}


void __fastcall ClientInstance::getScreenNames(ClientInstance *this, int a2)
{
  MinecraftGame::getScreenNames(this, *(_DWORD *)(a2 + 24));
}


void __fastcall ClientInstance::startExternalNetworkWorld(int a1, int a2, int *a3)
{
  int v3; // r6@1
  int v4; // r7@1
  int *v5; // r8@1
  const ClientInstance *v6; // r0@3
  Social::XboxLiveUserManager *v7; // r0@3
  int v8; // r9@3
  int v9; // r4@3
  unsigned int *v10; // r1@4
  unsigned int v11; // r0@6
  int v12; // r5@9
  char *v18; // r0@9
  int v19; // r3@9
  void *v20; // r0@10
  void *v21; // r0@11
  unsigned int *v22; // r2@12
  signed int v23; // r1@14
  unsigned int *v24; // r5@18
  unsigned int v25; // r0@20
  void *v26; // r0@27
  void *v27; // r0@28
  int v28; // r4@31
  unsigned int v29; // r1@32
  unsigned int *v30; // r0@32
  unsigned int v31; // r2@35
  unsigned int v32; // r3@36
  int v33; // r11@37
  unsigned int *v34; // r10@37
  unsigned int v35; // r1@39
  unsigned int v36; // r1@44
  unsigned int v37; // r0@50
  int v38; // r5@56
  int *v39; // r6@56
  SceneFactory *v40; // t1@57
  int v41; // r9@58
  unsigned int v42; // r0@60
  _DWORD *v43; // r0@63
  int v44; // r6@63
  int v45; // r0@63
  unsigned int *v46; // r0@64
  unsigned int v47; // r1@66
  void *v48; // r1@69
  void *v49; // r1@69
  int *v50; // r2@69
  unsigned int v51; // r1@69
  int v52; // r0@69
  int v53; // r3@69
  int v54; // r5@69
  int v55; // r5@70
  void *v56; // r1@74
  void *v57; // r1@74
  char v58; // r0@74
  __int64 v59; // r0@74
  int v60; // r4@74
  unsigned int *v61; // r1@75
  unsigned int v62; // r0@77
  unsigned int *v63; // r5@81
  unsigned int v64; // r0@83
  unsigned int *v65; // r2@85
  signed int v66; // r1@87
  unsigned int *v67; // r2@89
  signed int v68; // r1@91
  unsigned int *v69; // r2@93
  signed int v70; // r1@95
  void *v71; // r0@109
  char *v72; // r0@110
  char *v73; // r0@111
  char *v74; // r0@112
  int v75; // r0@113
  unsigned int *v76; // r2@114
  unsigned int v77; // r1@116
  void *v78; // r0@121
  void *v79; // r0@122
  void *v80; // r0@123
  void *v81; // r0@124
  unsigned int v82; // r0@127
  unsigned int *v83; // r2@144
  signed int v84; // r1@146
  unsigned int *v85; // r2@148
  signed int v86; // r1@150
  unsigned int *v87; // r2@152
  signed int v88; // r1@154
  unsigned int *v89; // r2@156
  signed int v90; // r1@158
  unsigned int *v91; // r2@160
  signed int v92; // r1@162
  unsigned int *v93; // r2@164
  signed int v94; // r1@166
  unsigned int *v95; // r2@168
  signed int v96; // r1@170
  unsigned int *v97; // r2@172
  signed int v98; // r1@174
  __int64 v99; // [sp+0h] [bp-128h]@0
  int v100; // [sp+14h] [bp-114h]@61
  int v101; // [sp+18h] [bp-110h]@63
  int v102; // [sp+20h] [bp-108h]@10
  int v103; // [sp+28h] [bp-100h]@10
  int v104; // [sp+2Ch] [bp-FCh]@58
  int v105; // [sp+30h] [bp-F8h]@58
  __int16 v106; // [sp+34h] [bp-F4h]@63
  char *v107; // [sp+38h] [bp-F0h]@69
  void *v108; // [sp+3Ch] [bp-ECh]@69
  int v109; // [sp+40h] [bp-E8h]@69
  void *v110; // [sp+44h] [bp-E4h]@69
  int *v111; // [sp+48h] [bp-E0h]@69
  unsigned int v112; // [sp+4Ch] [bp-DCh]@69
  int v113; // [sp+50h] [bp-D8h]@69
  int v114; // [sp+54h] [bp-D4h]@69
  int v115; // [sp+58h] [bp-D0h]@69
  int v116; // [sp+5Ch] [bp-CCh]@69
  int v117; // [sp+60h] [bp-C8h]@69
  void *v118; // [sp+64h] [bp-C4h]@74
  void *v119; // [sp+68h] [bp-C0h]@74
  char v120; // [sp+6Ch] [bp-BCh]@74
  int v121; // [sp+70h] [bp-B8h]@63
  int v122; // [sp+74h] [bp-B4h]@74
  void (*v123)(void); // [sp+7Ch] [bp-ACh]@63
  int v124; // [sp+88h] [bp-A0h]@58
  int v125; // [sp+90h] [bp-98h]@58
  int v126; // [sp+98h] [bp-90h]@58
  int v127; // [sp+A0h] [bp-88h]@58
  char v128; // [sp+A4h] [bp-84h]@74
  int v129; // [sp+A8h] [bp-80h]@74
  char v130; // [sp+ACh] [bp-7Ch]@27
  int v131; // [sp+B0h] [bp-78h]@29
  int v132; // [sp+B4h] [bp-74h]@28
  int v133; // [sp+BCh] [bp-6Ch]@27
  int v134; // [sp+C0h] [bp-68h]@27
  Social::User *v135; // [sp+E8h] [bp-40h]@3
  int v136; // [sp+ECh] [bp-3Ch]@3
  __int64 v137; // [sp+F0h] [bp-38h]@9

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( MinecraftGame::hasNetworkPrivileges(*(MinecraftGame **)(a1 + 24), 1) != 1 )
  {
    if ( ThirdPartyInfo::isValid((ThirdPartyInfo *)(v4 + 20)) == 1 )
    {
      v12 = MinecraftGame::getEventing(*(MinecraftGame **)(v3 + 24));
      sub_DA7B9C(&v137);
      _R0 = _aeabi_l2d(v137 - *(_DWORD *)(v3 + 688), (unsigned __int64)(v137 - *(_QWORD *)(v3 + 688)) >> 32);
      __asm
      {
        VMOV            D1, R0, R1
        VLDR            D0, =1.0e-9
        VMUL.F64        D8, D1, D0
      }
      v18 = ThirdPartyInfo::getCreatorName((ThirdPartyInfo *)(v4 + 20));
      __asm { VSTR            D8, [SP,#0x128+var_128] }
      MinecraftEventing::fireServerConnectionEvent(
        COERCE_DOUBLE(__PAIR__(2, v12)),
        -1082130432,
        v19,
        v99,
        (const char **)v18);
      *(_DWORD *)(v3 + 696) = -1082130432;
    }
    sub_DA7364((void **)&v103, "disconnectionScreen.cantConnect");
    sub_DA7364((void **)&v102, "disconnectionScreen.noInternet");
    ClientInstance::_navigateToDisconnectScreen(v3, &v103, &v102);
    v20 = (void *)(v102 - 12);
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v65 = (unsigned int *)(v102 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
      else
        v66 = (*v65)--;
      if ( v66 <= 0 )
        j_j_j_j_j__ZdlPv_9(v20);
    v21 = (void *)(v103 - 12);
    if ( (int *)(v103 - 12) == &dword_28898C0 )
      return;
    v22 = (unsigned int *)(v103 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
LABEL_102:
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9(v21);
LABEL_101:
    v23 = (*v22)--;
    goto LABEL_102;
  }
  if ( !(*(int (**)(void))(**(_DWORD **)(v3 + 24) + 136))() )
    v6 = (const ClientInstance *)MinecraftGame::getUserManager(*(MinecraftGame **)(v3 + 24));
    Social::UserManager::getUser((Social::UserManager *)&v135, v6, v3);
    v7 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v135);
    v8 = Social::XboxLiveUserManager::isSignedIn(v7);
    v9 = v136;
    if ( !v136 )
      goto LABEL_212;
    v10 = (unsigned int *)(v136 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 != 1 )
    v24 = (unsigned int *)(v9 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
      if ( !v8 )
        goto LABEL_31;
LABEL_212:
      if ( v8 != 1 )
LABEL_31:
        v28 = *(_DWORD *)(v3 + 12);
        if ( !v28 )
          std::__throw_bad_weak_ptr();
        v29 = *(_DWORD *)(v28 + 4);
        v30 = (unsigned int *)(v28 + 4);
        {
          while ( 1 )
          {
            if ( !v29 )
              std::__throw_bad_weak_ptr();
            __dmb();
            v31 = __ldrex(v30);
            if ( v31 == v29 )
              break;
            __clrex();
            v29 = v31;
          }
          v32 = __strex(v29 + 1, v30);
          v29 = v31;
        }
        while ( v32 );
        v33 = *(_DWORD *)(v3 + 8);
        v34 = (unsigned int *)(v28 + 8);
        if ( &pthread_create )
          __dmb();
          do
            v35 = __ldrex(v34);
          while ( __strex(v35 + 1, v34) );
        else
          ++*v34;
            v36 = __ldrex(v30);
          while ( __strex(v36 - 1, v30) );
          v36 = (*v30)--;
        if ( v36 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 8))(v28);
          if ( &pthread_create )
            do
              v37 = __ldrex(v34);
            while ( __strex(v37 - 1, v34) );
          else
            v37 = (*v34)--;
          if ( v37 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
        if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(v3 + 24)) == v3 )
          v40 = *(SceneFactory **)(v3 + 76);
          v39 = (int *)(v3 + 76);
          v38 = SceneFactory::getCurrentSceneStack(v40);
          v38 = *(_DWORD *)(v3 + 616);
        v41 = *v39;
        sub_DA7364((void **)&v127, "xbox.externalServer.title");
        sub_DA7364((void **)&v126, "xbox.externalServer.line1");
        sub_DA7364((void **)&v125, (const char *)&unk_257BC67);
        sub_DA7364((void **)&v124, "textures/ui/massive_servers");
        v104 = v33;
        v105 = v28;
            v42 = __ldrex(v34);
          while ( __strex(v42 + 1, v34) );
          v100 = v38;
        Social::GameConnectionInfo::GameConnectionInfo(
          (Social::GameConnectionInfo *)&v106,
          (const Social::GameConnectionInfo *)v4);
        sub_DA73B4(&v121, v5);
        v123 = 0;
        v43 = operator new(0x48u);
        v44 = (int)v43;
        *v43 = v104;
        v45 = v105;
        v101 = v28;
        *(_DWORD *)(v44 + 4) = v105;
        if ( v45 )
          v46 = (unsigned int *)(v45 + 8);
              v47 = __ldrex(v46);
            while ( __strex(v47 + 1, v46) );
            ++*v46;
        *(_WORD *)(v44 + 8) = v106;
        *(_DWORD *)(v44 + 12) = v107;
        v107 = (char *)&unk_28898CC;
        v48 = v108;
        v108 = &unk_28898CC;
        *(_DWORD *)(v44 + 16) = v48;
        *(_DWORD *)(v44 + 20) = v109;
        v49 = v110;
        v110 = &unk_28898CC;
        *(_DWORD *)(v44 + 24) = v49;
        v50 = v111;
        v51 = v112;
        v52 = v113;
        _ZF = &v117 == v111;
        v53 = v114;
        *(_DWORD *)(v44 + 28) = v111;
        *(_DWORD *)(v44 + 32) = v51;
        *(_DWORD *)(v44 + 36) = v52;
        *(_DWORD *)(v44 + 40) = v53;
        v54 = v116;
        *(_DWORD *)(v44 + 44) = v115;
        *(_DWORD *)(v44 + 48) = v54;
        if ( _ZF )
          v55 = v44 + 52;
          *(_DWORD *)(v44 + 28) = v44 + 52;
          *(_DWORD *)(v44 + 52) = *v50;
          v55 = (int)v50;
        if ( v52 )
          *(_DWORD *)(v55 + 4 * (*(_DWORD *)(v52 + 8) % v51)) = v44 + 36;
        v116 = 0;
        v112 = 1;
        v117 = 0;
        v111 = &v117;
        v113 = 0;
        v114 = 0;
        v56 = v118;
        v118 = &unk_28898CC;
        *(_DWORD *)(v44 + 56) = v56;
        v57 = v119;
        v119 = &unk_28898CC;
        v58 = v120;
        *(_DWORD *)(v44 + 60) = v57;
        *(_BYTE *)(v44 + 64) = v58;
        sub_DA73B4((int *)(v44 + 68), &v121);
        LODWORD(v59) = sub_BE921C;
        v122 = v44;
        HIDWORD(v59) = sub_BE8EE8;
        *(_QWORD *)&v123 = v59;
        SceneFactory::createXblOptionalSignInScreen((int)&v128, v41, &v127, &v126, &v125, &v124, (int)&v122, 1);
        SceneStack::pushScreen(v100, (int)&v128, 0);
        v60 = v129;
        if ( v129 )
          v61 = (unsigned int *)(v129 + 4);
              v62 = __ldrex(v61);
            while ( __strex(v62 - 1, v61) );
            v62 = (*v61)--;
          if ( v62 == 1 )
            v63 = (unsigned int *)(v60 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v60 + 8))(v60);
            if ( &pthread_create )
            {
              __dmb();
              do
                v64 = __ldrex(v63);
              while ( __strex(v64 - 1, v63) );
            }
            else
              v64 = (*v63)--;
            if ( v64 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v60 + 12))(v60);
        if ( v123 )
          v123();
        v71 = (void *)(v121 - 12);
        if ( (int *)(v121 - 12) != &dword_28898C0 )
          v83 = (unsigned int *)(v121 - 4);
              v84 = __ldrex(v83);
            while ( __strex(v84 - 1, v83) );
            v84 = (*v83)--;
          if ( v84 <= 0 )
            j_j_j_j_j__ZdlPv_9(v71);
        ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v111);
        v72 = (char *)v110 - 12;
        if ( (int *)((char *)v110 - 12) != &dword_28898C0 )
          v85 = (unsigned int *)((char *)v110 - 4);
              v86 = __ldrex(v85);
            while ( __strex(v86 - 1, v85) );
            v86 = (*v85)--;
          if ( v86 <= 0 )
            j_j_j_j_j__ZdlPv_9(v72);
        v73 = (char *)v108 - 12;
        if ( (int *)((char *)v108 - 12) != &dword_28898C0 )
          v87 = (unsigned int *)((char *)v108 - 4);
              v88 = __ldrex(v87);
            while ( __strex(v88 - 1, v87) );
            v88 = (*v87)--;
          if ( v88 <= 0 )
            j_j_j_j_j__ZdlPv_9(v73);
        v74 = v107 - 12;
        if ( (int *)(v107 - 12) != &dword_28898C0 )
          v89 = (unsigned int *)(v107 - 4);
              v90 = __ldrex(v89);
            while ( __strex(v90 - 1, v89) );
            v90 = (*v89)--;
          if ( v90 <= 0 )
            j_j_j_j_j__ZdlPv_9(v74);
        v75 = v105;
        if ( v105 )
          v76 = (unsigned int *)(v105 + 8);
              v77 = __ldrex(v76);
            while ( __strex(v77 - 1, v76) );
            v77 = (*v76)--;
          if ( v77 == 1 )
            (*(void (**)(void))(*(_DWORD *)v75 + 12))();
        v78 = (void *)(v124 - 12);
        if ( (int *)(v124 - 12) != &dword_28898C0 )
          v91 = (unsigned int *)(v124 - 4);
              v92 = __ldrex(v91);
            while ( __strex(v92 - 1, v91) );
            v92 = (*v91)--;
          if ( v92 <= 0 )
            j_j_j_j_j__ZdlPv_9(v78);
        v79 = (void *)(v125 - 12);
        if ( (int *)(v125 - 12) != &dword_28898C0 )
          v93 = (unsigned int *)(v125 - 4);
              v94 = __ldrex(v93);
            while ( __strex(v94 - 1, v93) );
            v94 = (*v93)--;
          if ( v94 <= 0 )
            j_j_j_j_j__ZdlPv_9(v79);
        v80 = (void *)(v126 - 12);
        if ( (int *)(v126 - 12) != &dword_28898C0 )
          v95 = (unsigned int *)(v126 - 4);
              v96 = __ldrex(v95);
            while ( __strex(v96 - 1, v95) );
            v96 = (*v95)--;
          if ( v96 <= 0 )
            j_j_j_j_j__ZdlPv_9(v80);
        v81 = (void *)(v127 - 12);
        if ( (int *)(v127 - 12) != &dword_28898C0 )
          v97 = (unsigned int *)(v127 - 4);
              v98 = __ldrex(v97);
            while ( __strex(v98 - 1, v97) );
            v98 = (*v97)--;
          if ( v98 <= 0 )
            j_j_j_j_j__ZdlPv_9(v81);
            v82 = __ldrex(v34);
          while ( __strex(v82 - 1, v34) );
          v82 = (*v34)--;
        if ( v82 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v101 + 12))(v101);
        return;
  Social::GameConnectionInfo::GameConnectionInfo(
    (Social::GameConnectionInfo *)&v130,
    (const Social::GameConnectionInfo *)v4);
  ClientInstance::_startExternalNetworkWorld(v3, (const Social::GameConnectionInfo *)&v130, v5);
  ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v134);
  v26 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v133 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v132 - 12);
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v132 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j_j__ZdlPv_9(v27);
  v21 = (void *)(v131 - 12);
  if ( (int *)(v131 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v131 - 4);
      goto LABEL_102;
    goto LABEL_101;
}


int __fastcall ClientInstance::clearDictationDataAvailable(int result)
{
  *(_BYTE *)(result + 160) = 0;
  return result;
}


    if ( ClientInstance::isPrimaryClient((ClientInstance *)v2)
{
    {
      v4 = operator new(8u);
      LODWORD(v5) = sub_F01718;
      *v4 = v2;
      HIDWORD(v5) = sub_F016C6;
      v6 = v4;
      v7 = v5;
      result = ClientInstance::forEachVisibleScreen(v2, (int)&v6, 1);
      if ( (_DWORD)v7 )
        result = ((int (__cdecl *)(_QWORD **))v7)(&v6);
    }
  }
  return result;
}


_DWORD *__fastcall ClientInstance::forEachAlwaysAcceptInputScreen(int a1, int a2, _DWORD *a3)
{
  int v3; // r6@1
  _DWORD *v4; // r4@1
  int v5; // r5@1
  unsigned __int64 *v6; // r6@2
  void (__fastcall *v7)(int *, int, signed int); // r3@2
  _DWORD *result; // r0@4
  SceneStack *v9; // r0@6
  __int64 v10; // r2@6
  void (__fastcall *v11)(char *, int, signed int); // r3@6
  int v12; // [sp+0h] [bp-38h]@3
  int (*v13)(void); // [sp+8h] [bp-30h]@2
  int v14; // [sp+Ch] [bp-2Ch]@3
  char v15; // [sp+10h] [bp-28h]@7
  int (*v16)(void); // [sp+18h] [bp-20h]@6
  int v17; // [sp+1Ch] [bp-1Ch]@7
  char v18; // [sp+20h] [bp-18h]@6

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(a1 + 24)) == a1 )
  {
    v9 = (SceneStack *)MinecraftGame::getMainSceneStack(*(MinecraftGame **)(v3 + 24));
    LODWORD(v10) = *(_DWORD *)(v3 + 616);
    CompositeSceneStackView::CompositeSceneStackView((CompositeSceneStackView *)&v18, v9, v10);
    v16 = 0;
    v11 = *(void (__fastcall **)(char *, int, signed int))(v5 + 8);
    if ( v11 )
    {
      v11(&v15, v5, 2);
      v17 = *(_DWORD *)(v5 + 12);
      v16 = *(int (**)(void))(v5 + 8);
    }
    result = CompositeSceneStackView::forEachAlwaysAcceptInputScreen((int)&v18, (int)&v15, v4);
    if ( v16 )
      result = (_DWORD *)v16();
  }
  else
    v6 = *(unsigned __int64 **)(v3 + 616);
    v13 = 0;
    v7 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
    if ( v7 )
      v7(&v12, v5, 2);
      v14 = *(_DWORD *)(v5 + 12);
      v13 = *(int (**)(void))(v5 + 8);
    result = SceneStack::forEachAlwaysAcceptInputScreen(v6, (int)&v12, v4);
    if ( v13 )
      result = (_DWORD *)v13();
  return result;
}


void __fastcall ClientInstance::initializeRenderResources(ClientInstance *this)
{
  ClientInstance::initializeRenderResources(this);
}


void __fastcall ClientInstance::showPlayerProfile(int a1, int *a2, __int64 a3, __int64 a4)
{
  ClientInstance::showPlayerProfile(a1, a2, a3, a4);
}


int __fastcall ClientInstance::isMultiPlayerHost(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  Level *v2; // r0@2
  Level *v3; // r0@3
  int result; // r0@3

  v1 = this;
  if ( Minecraft::getLevel(*((Minecraft **)this + 7))
    && (v2 = (Level *)Minecraft::getLevel(*((Minecraft **)v1 + 7)), Level::isMultiplayerGame(v2) == 1) )
  {
    v3 = (Level *)Minecraft::getLevel(*((Minecraft **)v1 + 7));
    result = Level::isClientSide(v3) ^ 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall ClientInstance::init(ClientInstance *this, SoundEngine *a2, minecraft::api::Api *a3, FilePathManager *a4, NetworkHandler *a5, Timer *a6, Timer *a7, Social::UserManager *a8, int a9)
{
  ClientInstance::init(this, a2, a3, a4, a5, a6, a7, a8, a9);
}


void __fastcall ClientInstance::initializeRenderResources(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  void *v2; // r5@1
  int v3; // r0@1
  void *v4; // r5@3
  BlockTessellator *v5; // r0@3
  BlockTessellator *v6; // r0@4
  BlockEntityRenderDispatcher *v7; // r5@5
  int v8; // r6@5
  EntityRenderDispatcher *v9; // r5@7
  int v10; // r0@7
  ChestBlockEntity *v11; // r5@9
  EntityBlockRenderer *v12; // r0@9
  EntityBlockRenderer *v13; // r0@10

  v1 = this;
  v2 = operator new(0x328u);
  GuiData::GuiData((int)v2, v1);
  v3 = *((_DWORD *)v1 + 164);
  *((_DWORD *)v1 + 164) = v2;
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  v4 = operator new(0xDE00u);
  BlockTessellator::BlockTessellator((int)v4, 0);
  v5 = (BlockTessellator *)*((_DWORD *)v1 + 158);
  *((_DWORD *)v1 + 158) = v4;
  if ( v5 )
  {
    v6 = BlockTessellator::~BlockTessellator(v5);
    operator delete((void *)v6);
  }
  v7 = (BlockEntityRenderDispatcher *)operator new(0x18u);
  BlockEntityRenderDispatcher::BlockEntityRenderDispatcher(v7);
  v8 = *((_DWORD *)v1 + 159);
  *((_DWORD *)v1 + 159) = v7;
  if ( v8 )
    std::_Rb_tree<BlockEntityRendererId,std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>,std::_Select1st<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::_M_erase(
      v8,
      *(_DWORD *)(v8 + 8));
    operator delete((void *)v8);
  v9 = (EntityRenderDispatcher *)operator new(0x14Cu);
  EntityRenderDispatcher::EntityRenderDispatcher(v9, *((_BYTE *)v1 + 668));
  v10 = *((_DWORD *)v1 + 160);
  *((_DWORD *)v1 + 160) = v9;
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  v11 = (ChestBlockEntity *)operator new(0x10u);
  EntityBlockRenderer::EntityBlockRenderer(v11);
  v12 = (EntityBlockRenderer *)*((_DWORD *)v1 + 161);
  *((_DWORD *)v1 + 161) = v11;
  if ( v12 )
    v13 = EntityBlockRenderer::~EntityBlockRenderer(v12);
    j_j_j__ZdlPv_3((void *)v13);
}


void __fastcall ClientInstance::requestLeaveGame(ClientInstance *this, int a2, bool a3)
{
  ClientInstance::requestLeaveGame(this, a2, a3);
}


ClientInstance *__fastcall ClientInstance::refocusMouse(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  ClientInstance *result; // r0@1

  v1 = this;
  result = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6));
  if ( result == v1 )
    result = (ClientInstance *)j_j_j__ZN13MinecraftGame12refocusMouseEv(*((MinecraftGame **)v1 + 6));
  return result;
}


char *__fastcall ClientInstance::_joinWorldInProgress(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  const ClientInstance *v2; // r0@1
  Social::XboxLiveUserManager *v3; // r0@1
  int v4; // r0@2
  int v5; // r0@3
  void *v6; // r0@4
  const ClientInstance *v7; // r0@5
  Social::XboxLiveUserManager *v8; // r0@5
  int v9; // r0@6
  Social::XboxLiveUserManager *v10; // r0@6
  int v11; // r5@6
  int v12; // r6@6
  unsigned int *v13; // r1@7
  unsigned int v14; // r0@9
  unsigned int *v15; // r7@14
  unsigned int v16; // r0@16
  int v17; // r6@21
  unsigned int *v18; // r1@22
  unsigned int v19; // r0@24
  unsigned int *v20; // r7@28
  unsigned int v21; // r0@30
  int *v22; // r5@36
  _DWORD *v23; // r0@36
  __int64 v24; // r1@36
  __int64 v25; // r0@38
  int v26; // r0@38
  int v27; // r10@38
  int v28; // r8@38
  char *v29; // r11@38
  int v30; // r9@38
  int *v31; // r7@38
  int v32; // r6@38
  void *v33; // r5@38
  __int64 v34; // r2@38
  int *v35; // r0@38
  signed int v36; // r1@38
  int *v37; // r7@38
  int v38; // t1@39
  void *v39; // r5@43
  int v40; // r0@45
  int v41; // r0@46
  int v42; // r9@50
  int v43; // r8@50
  __int64 v44; // kr00_8@51
  __int64 v45; // kr08_8@51
  __int64 v46; // kr10_8@51
  __int64 v47; // kr18_8@51
  int v48; // r1@51
  int v49; // r0@51
  int v50; // r4@52
  unsigned int *v51; // r1@53
  unsigned int v52; // r0@55
  unsigned int *v53; // r5@59
  unsigned int v54; // r0@61
  void *v55; // r0@66
  int v56; // r4@67
  unsigned int *v57; // r1@68
  unsigned int v58; // r0@70
  unsigned int *v59; // r5@74
  unsigned int v60; // r0@76
  char *result; // r0@81
  unsigned int *v62; // r2@83
  signed int v63; // r1@85
  unsigned int *v64; // r2@87
  signed int v65; // r1@89
  int v66; // [sp+0h] [bp-218h]@38
  int v67; // [sp+4h] [bp-214h]@40
  int v68; // [sp+8h] [bp-210h]@40
  int v69; // [sp+Ch] [bp-20Ch]@40
  int v70; // [sp+10h] [bp-208h]@40
  int v71; // [sp+14h] [bp-204h]@40
  int v72; // [sp+18h] [bp-200h]@40
  int v73; // [sp+1Ch] [bp-1FCh]@40
  int v74; // [sp+20h] [bp-1F8h]@40
  int v75; // [sp+24h] [bp-1F4h]@40
  int v76; // [sp+28h] [bp-1F0h]@40
  int v77; // [sp+2Ch] [bp-1ECh]@40
  int v78; // [sp+30h] [bp-1E8h]@40
  int v79; // [sp+34h] [bp-1E4h]@40
  int v80; // [sp+38h] [bp-1E0h]@40
  int v81; // [sp+3Ch] [bp-1DCh]@40
  int v82; // [sp+40h] [bp-1D8h]@40
  int v83; // [sp+44h] [bp-1D4h]@40
  int v84; // [sp+48h] [bp-1D0h]@40
  int v85; // [sp+4Ch] [bp-1CCh]@40
  int v86; // [sp+50h] [bp-1C8h]@40
  int v87; // [sp+54h] [bp-1C4h]@40
  int v88; // [sp+58h] [bp-1C0h]@40
  int v89; // [sp+5Ch] [bp-1BCh]@40
  int v90; // [sp+60h] [bp-1B8h]@40
  int v91; // [sp+64h] [bp-1B4h]@40
  int v92; // [sp+68h] [bp-1B0h]@40
  int v93; // [sp+6Ch] [bp-1ACh]@40
  int v94; // [sp+70h] [bp-1A8h]@40
  int v95; // [sp+74h] [bp-1A4h]@40
  int v96; // [sp+78h] [bp-1A0h]@40
  int v97; // [sp+7Ch] [bp-19Ch]@40
  int v98; // [sp+80h] [bp-198h]@40
  int v99; // [sp+84h] [bp-194h]@40
  int v100; // [sp+88h] [bp-190h]@40
  int v101; // [sp+8Ch] [bp-18Ch]@40
  int v102; // [sp+90h] [bp-188h]@38
  int v103; // [sp+94h] [bp-184h]@38
  int v104; // [sp+98h] [bp-180h]@38
  int v105; // [sp+9Ch] [bp-17Ch]@38
  int *v106; // [sp+A0h] [bp-178h]@38
  int v107; // [sp+A4h] [bp-174h]@38
  int v108; // [sp+ACh] [bp-16Ch]@38
  int v109; // [sp+B0h] [bp-168h]@50
  int v110; // [sp+B4h] [bp-164h]@51
  __int64 v111; // [sp+B8h] [bp-160h]@51
  __int64 v112; // [sp+C0h] [bp-158h]@51
  __int64 v113; // [sp+C8h] [bp-150h]@51
  __int64 v114; // [sp+D0h] [bp-148h]@51
  int v115; // [sp+DCh] [bp-13Ch]@50
  char v116; // [sp+E0h] [bp-138h]@52
  int v117; // [sp+E4h] [bp-134h]@52
  int v118; // [sp+E8h] [bp-130h]@43
  int v119; // [sp+ECh] [bp-12Ch]@47
  __int64 v120; // [sp+F0h] [bp-128h]@51
  __int64 v121; // [sp+F8h] [bp-120h]@51
  __int64 v122; // [sp+100h] [bp-118h]@45
  __int64 v123; // [sp+108h] [bp-110h]@45
  void *v124; // [sp+114h] [bp-104h]@40
  _DWORD *v125; // [sp+118h] [bp-100h]@36
  __int64 v126; // [sp+120h] [bp-F8h]@36
  Social::User *v127; // [sp+128h] [bp-F0h]@6
  int v128; // [sp+12Ch] [bp-ECh]@6
  Social::User *v129; // [sp+130h] [bp-E8h]@5
  int v130; // [sp+134h] [bp-E4h]@21
  int v131; // [sp+138h] [bp-E0h]@2
  Social::User *v132; // [sp+13Ch] [bp-DCh]@1
  int v133; // [sp+140h] [bp-D8h]@67
  char v134; // [sp+144h] [bp-D4h]@43
  void (*v135)(void); // [sp+14Ch] [bp-CCh]@43
  char v136; // [sp+158h] [bp-C0h]@38
  int v137; // [sp+160h] [bp-B8h]@38
  RakNet *v138; // [sp+1F0h] [bp-28h]@1

  v1 = this;
  v138 = _stack_chk_guard;
  v2 = (const ClientInstance *)MinecraftGame::getUserManager(*((MinecraftGame **)this + 6));
  Social::UserManager::getUser((Social::UserManager *)&v132, v2, (int)v1);
  v3 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v132);
  if ( Social::XboxLiveUserManager::isSignedIn(v3) == 1 )
  {
    v4 = Social::User::getLiveUser(v132);
    Social::XboxLiveUserManager::getCurrentGamertag((Social::XboxLiveUserManager *)&v131, v4);
    if ( *(_DWORD *)(v131 - 12) )
    {
      v5 = ClientInstance::getOptions(v1);
      Options::setOverrideUsername(v5, &v131);
    }
    ClientInstance::createUserAuthentication(v1);
    v6 = (void *)(v131 - 12);
    if ( (int *)(v131 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v131 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
      }
      else
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j_j__ZdlPv_9(v6);
  }
  v7 = (const ClientInstance *)MinecraftGame::getUserManager(*((MinecraftGame **)v1 + 6));
  Social::UserManager::getUser((Social::UserManager *)&v129, v7, (int)v1);
  v8 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v129);
  if ( Social::XboxLiveUserManager::isSignedIn(v8) == 1 )
    v9 = MinecraftGame::getUserManager(*((MinecraftGame **)v1 + 6));
    Social::UserManager::getPrimaryUser((Social::UserManager *)&v127, v9);
    v10 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v127);
    v11 = Social::XboxLiveUserManager::isSignedIn(v10);
    v12 = v128;
    if ( v128 )
      v13 = (unsigned int *)(v128 + 4);
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
  else
    v11 = 0;
  v17 = v130;
  if ( v130 )
    v18 = (unsigned int *)(v130 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 == 1 )
      v20 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  if ( v11 == 1 )
    v22 = (int *)*((_DWORD *)v1 + 18);
    v23 = operator new(4u);
    LODWORD(v24) = sub_BE8A80;
    *v23 = v1;
    HIDWORD(v24) = sub_BE88E8;
    v125 = v23;
    v126 = v24;
    UserAuthentication::getGlobalCertificate(v22, (int)&v125);
    if ( (_DWORD)v126 )
      ((void (*)(void))v126)();
    v25 = *((_QWORD *)v1 + 3);
    v108 = *((_QWORD *)v1 + 3) >> 32;
    v26 = MinecraftGame::getClientNetworkSystem((MinecraftGame *)v25);
    NetworkHandler::getLocalNetworkId((NetworkHandler *)&v136, v26);
    v27 = MinecraftGame::getClientNetworkSystem(*((MinecraftGame **)v1 + 6));
    v28 = *((_DWORD *)v1 + 12);
    v29 = UserAuthentication::getLocalKeys(*((UserAuthentication **)v1 + 18));
    v30 = *(_DWORD *)(*((_DWORD *)v1 + 6) + 264);
    v31 = (int *)UserAuthentication::getLocalCertificate(*((UserAuthentication **)v1 + 18));
    v32 = Minecraft::getCommands(*((Minecraft **)v1 + 7));
    v33 = operator new(0x180u);
    v107 = v32;
    v34 = *(_QWORD *)&v136;
    v35 = &v137;
    v106 = v31;
    v36 = 144;
    v37 = &v66;
    v104 = (int)v29;
    v105 = v30;
    v102 = v27;
    v103 = v28;
    do
      v38 = *v35;
      ++v35;
      v36 -= 4;
      *v37 = v38;
      ++v37;
    while ( v36 );
    LegacyClientNetworkHandler::LegacyClientNetworkHandler(
      (int)v33,
      (int)v1,
      v34,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104,
      v105,
      v106,
      v107);
    v124 = v33;
    Minecraft::joinWorldInProgress(v108, (int *)&v124);
    if ( v124 )
      (*(void (**)(void))(*(_DWORD *)v124 + 8))();
    v124 = 0;
  _aeabi_memclr8(&v118, 40);
  std::_Deque_base<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::_M_initialize_map(
    (int)&v118,
    0);
  v39 = operator new(0x20u);
  v135 = 0;
  WorldGenerationProgressHandler::WorldGenerationProgressHandler((int)v39, 1, (int)&v134);
  if ( v135 )
    v135();
  v40 = v122;
  if ( (_DWORD)v122 == (_DWORD)v123 - 4 )
    if ( (unsigned int)(v119 - ((HIDWORD(v123) - v118) >> 2)) <= 1 )
      std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::_M_reallocate_map(
        (int)&v118,
        1u,
        0);
    *(_DWORD *)(HIDWORD(v123) + 4) = operator new(0x200u);
    *(_DWORD *)v122 = v39;
    HIDWORD(v123) += 4;
    v41 = *(_DWORD *)HIDWORD(v123);
    HIDWORD(v122) = v41;
    LODWORD(v123) = v41 + 512;
    v41 = v40 + 4;
  LODWORD(v122) = v41;
  v42 = *((_DWORD *)v1 + 19);
  v43 = *((_DWORD *)v1 + 154);
  sub_DA7364((void **)&v115, "local_world_load");
  _aeabi_memclr8(&v109, 40);
    (int)&v109,
  if ( v118 )
    v44 = v111;
    v45 = v112;
    v112 = v121;
    v111 = v120;
    v120 = v44;
    v121 = v45;
    v46 = v113;
    v47 = v114;
    v114 = v123;
    v113 = v122;
    v122 = v46;
    v123 = v47;
    v48 = v109;
    v109 = v118;
    v118 = v48;
    v49 = v110;
    v110 = v119;
    v119 = v49;
  SceneFactory::createProgressScreen((unsigned __int64 *)&v116, v42, &v115, (int)&v109, 1, 0, 0);
  SceneStack::pushScreen(v43, (int)&v116, 0);
  v50 = v117;
  if ( v117 )
    v51 = (unsigned int *)(v117 + 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 == 1 )
      v53 = (unsigned int *)(v50 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 8))(v50);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 12))(v50);
  std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::~deque((int)&v109);
  v55 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v115 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9(v55);
  std::deque<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>,std::allocator<std::unique_ptr<ProgressHandler,std::default_delete<ProgressHandler>>>>::~deque((int)&v118);
  v56 = v133;
  if ( v133 )
    v57 = (unsigned int *)(v133 + 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 == 1 )
      v59 = (unsigned int *)(v56 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v56 + 8))(v56);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v56 + 12))(v56);
  result = (char *)(_stack_chk_guard - v138);
  if ( _stack_chk_guard != v138 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall ClientInstance::initializeTrialWorld(ClientInstance *this, Player *a2)
{
  j_j_j__ZN13MinecraftGame20initializeTrialWorldEP6Player(*((MinecraftGame **)this + 6), a2);
}


void __fastcall ClientInstance::setupTransitionForCredits(int a1, signed int a2, unsigned int *a3)
{
  int v3; // r4@1
  signed int v4; // r5@1
  int v5; // r0@1
  bool v6; // zf@1
  SceneStack *v7; // r0@7
  int v8; // r0@9
  int v9; // r7@9
  void *v10; // r0@9
  int v11; // r6@11
  int v12; // r4@11
  void (__fastcall *v13)(char *, signed int, signed int); // r3@11
  int v14; // r4@13
  unsigned int *v15; // r1@14
  unsigned int v16; // r0@16
  void (__fastcall *v17)(int *, signed int, signed int); // r3@18
  __int64 *v18; // r6@19
  void (*v19)(void); // r3@19
  __int64 *v20; // r0@19
  int *v21; // r8@19
  void (*v22)(void); // r3@20
  __int64 v23; // kr00_8@23
  void (*v24)(void); // r6@23
  unsigned int *v25; // r5@29
  unsigned int v26; // r0@31
  int v27; // [sp+0h] [bp-58h]@19
  void (*v28)(void); // [sp+8h] [bp-50h]@18
  __int64 *v29; // [sp+Ch] [bp-4Ch]@19
  char v30; // [sp+10h] [bp-48h]@12
  void (*v31)(void); // [sp+18h] [bp-40h]@11
  int v32; // [sp+1Ch] [bp-3Ch]@12
  char v33; // [sp+20h] [bp-38h]@13
  int v34; // [sp+24h] [bp-34h]@13
  int v35; // [sp+28h] [bp-30h]@9
  __int64 v36; // [sp+30h] [bp-28h]@19
  void (*v37)(void); // [sp+38h] [bp-20h]@19
  __int64 *v38; // [sp+3Ch] [bp-1Ch]@20

  v3 = a1;
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 116);
  v6 = v5 == 8;
  if ( v5 != 8 )
    v6 = v5 == 6;
  if ( !v6 )
    goto LABEL_49;
  if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(v3 + 24)) != v3
    || SceneStack::isEmpty(*(SceneStack **)(v3 + 616)) != 1 )
  {
    v7 = *(SceneStack **)(v3 + 616);
  }
  else
    v7 = (SceneStack *)MinecraftGame::getMainSceneStack(*(MinecraftGame **)(v3 + 24));
  v8 = SceneStack::getScreen(v7);
  (*(void (__fastcall **)(int *))(*(_DWORD *)v8 + 228))(&v35);
  v9 = sub_DA7374((const void **)&v35, "in_game_reality_transition_screen");
  a2 = v35;
  a3 = (unsigned int *)&dword_28898C0;
  v10 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    a3 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        a2 = __ldrex(a3);
      while ( __strex(a2 - 1, a3) );
    }
    else
      a2 = (*a3)--;
    if ( a2 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  if ( !v9 )
LABEL_49:
    *(_BYTE *)(v3 + 112) = 1;
    *(_BYTE *)(v3 + 129) = 1;
    v28 = 0;
    v17 = *(void (__fastcall **)(int *, signed int, signed int))(v4 + 8);
    if ( v17 )
      v17(&v27, v4, 2);
      v18 = (__int64 *)(v3 + 132);
      v29 = *(__int64 **)(v4 + 12);
      v19 = *(void (**)(void))(v4 + 8);
      v37 = 0;
      v20 = &v36;
      v21 = (int *)&v37;
      v28 = v19;
      if ( v19 )
      {
        ((void (__fastcall *)(__int64 *, int *, signed int))v19)(&v36, &v27, 2);
        v20 = v29;
        v22 = v28;
        v38 = v29;
        v37 = v28;
        *(_QWORD *)&a2 = v36;
LABEL_23:
        v23 = *v18;
        v36 = *v18;
        *v18 = *(_QWORD *)&a2;
        v24 = *(void (**)(void))(v3 + 140);
        *v21 = (int)v24;
        *(_DWORD *)(v3 + 140) = v22;
        v38 = *(__int64 **)(v3 + 144);
        *(_DWORD *)(v3 + 144) = v20;
        if ( v24 )
        {
          v24();
          v22 = v28;
        }
        if ( v22 )
          v22();
        return;
      }
    v22 = 0;
    goto LABEL_23;
  v11 = *(_DWORD *)(v3 + 76);
  v12 = *(_DWORD *)(v3 + 616);
  v31 = 0;
  v13 = *(void (__fastcall **)(char *, signed int, signed int))(v4 + 8);
  if ( v13 )
    v13(&v30, v4, 2);
    v32 = *(_DWORD *)(v4 + 12);
    v31 = *(void (**)(void))(v4 + 8);
  SceneFactory::createCreditsScreen((unsigned __int64 *)&v33, v11, (int)&v30);
  SceneStack::pushScreen(v12, (int)&v33, 0);
  v14 = v34;
  if ( v34 )
    v15 = (unsigned int *)(v34 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v25 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      else
        v26 = (*v25)--;
      if ( v26 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  if ( v31 )
    v31();
}


void __fastcall ClientInstance::resetPrimaryClient(ClientInstance *this)
{
  ClientInstance::resetPrimaryClient(this);
}


void __fastcall ClientInstance::postInitRenderResources(ClientInstance *this)
{
  ClientInstance::postInitRenderResources(this);
}


signed int __fastcall ClientInstance::navigateToPurchaseScreenIfCreatorValid(int a1, StoreCatalogItemModel *a2, const void **a3, int a4)
{
  const void **v4; // r7@1
  int v5; // r6@1
  int v6; // r4@1
  StoreCatalogItemModel *v7; // r5@1
  _DWORD *v8; // r1@2
  size_t v9; // r2@2
  signed int result; // r0@4

  v4 = a3;
  v5 = a1;
  v6 = a4;
  v7 = a2;
  if ( !*((_DWORD *)*a3 - 3)
    || (v8 = *(_DWORD **)StoreCatalogItemModel::getCreatorId(a2), v9 = *((_DWORD *)*v4 - 3), v9 == *(v8 - 3))
    && !memcmp(*v4, v8, v9) )
  {
    ClientInstance::navigateToPurchaseOfferScreen(v5, v7, v6);
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall ClientInstance::setMoveTurnInput(int a1, int *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int result; // r0@1

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  result = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(v2 + 60) = v3;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


void __fastcall ClientInstance::~ClientInstance(ClientInstance *this)
{
  ClientInstance::~ClientInstance(this);
}


void __fastcall ClientInstance::_navigateToDisconnectScreen(int a1, int *a2, int *a3)
{
  ClientInstance::_navigateToDisconnectScreen(a1, a2, a3);
}


int __fastcall ClientInstance::getCameraEntity(ClientInstance *this)
{
  ClientInstance *v1; // r1@1
  int result; // r0@1

  v1 = this;
  result = *((_DWORD *)this + 21);
  if ( !result )
    result = *((_DWORD *)v1 + 23);
  return result;
}


ClientInstance *__fastcall ClientInstance::_removeSubclient(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  ClientInstance *result; // r0@1

  v1 = this;
  result = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6));
  if ( result != v1 )
    result = (ClientInstance *)j_j_j__ZN13MinecraftGame21queueSubclientRemovalEh(
                                 *((MinecraftGame **)v1 + 6),
                                 *((_BYTE *)v1 + 668));
  return result;
}


  if ( ClientInstance::getLevel(*(ClientInstance **)(v5 + 16)) )
{
    v6 = MinecraftGame::getLevelArchiver(*(MinecraftGame **)(v5 + 12));
    v7 = ClientInstance::getLevel(*(ClientInstance **)(v5 + 16));
    v37 = v5;
    FilePickerSettings::FilePickerSettings((int)&v38, v4);
    v55 = 0;
    v8 = operator new(0x50u);
    *(_DWORD *)v8 = v5;
    *(_QWORD *)((char *)v8 + 4) = *(_QWORD *)&v38;
    v9 = v39;
    v39 = 0;
    *((_DWORD *)v8 + 3) = v9;
    *((_DWORD *)v8 + 4) = v40;
    *(_QWORD *)((char *)v8 + 20) = v41;
    v10 = v42;
    v42 = 0;
    *((_DWORD *)v8 + 7) = v10;
    *((_DWORD *)v8 + 8) = v43;
    *(_QWORD *)((char *)v8 + 36) = v44;
    v11 = v45;
    v45 = 0;
    *((_DWORD *)v8 + 11) = v11;
    *((_DWORD *)v8 + 12) = v46;
    v12 = v47;
    v47 = 0;
    *((_DWORD *)v8 + 13) = v12;
    v13 = v48;
    v48 = 0;
    *((_DWORD *)v8 + 14) = v13;
    v14 = v49;
    v49 = 0;
    *((_DWORD *)v8 + 15) = v14;
    v15 = v51;
    *((_DWORD *)v8 + 16) = v50;
    *((_DWORD *)v8 + 17) = v15;
    *((_DWORD *)v8 + 18) = v52;
    v52 = &unk_28898CC;
    *((_DWORD *)v8 + 19) = v53;
    v53 = &unk_28898CC;
    v54 = v8;
    v55 = (void (*)(void))sub_CF1E18;
    v56 = sub_CF1DEA;
    LevelArchiver::archiveLevel((int)&v57, v6, v7, 0, v3, (int)&v54);
    if ( v55 )
      v55();
    FilePickerSettings::~FilePickerSettings((FilePickerSettings *)&v38);
    v16 = *(_QWORD *)(v5 + 20);
    sub_DA7364((void **)&v34, "progressScreen.message.exporting");
    sub_DA7364((void **)&v33, "export");
    SceneFactory::createImportExportProgressScreen((unsigned __int64 *)&v35, SHIDWORD(v16), &v34, COERCE_FLOAT(&v33));
    SceneStack::pushScreen(v16, (int)&v35, 0);
    v17 = v36;
    if ( v36 )
    {
      v18 = (unsigned int *)(v36 + 4);
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
        v20 = (unsigned int *)(v17 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
    }
    v22 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v33 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j_j__ZdlPv_9(v22);
    v23 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v34 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j_j__ZdlPv_9(v23);
    v24 = v58;
    if ( v58 )
      v25 = (unsigned int *)(v58 + 4);
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
  }
}


char *__fastcall ClientInstance::getPlatformId(ClientInstance *this, int a2)
{
  int v2; // r4@1
  ClientInstance *v3; // r5@1
  const ClientInstance *v4; // r0@1
  int v5; // r4@1
  char *result; // r0@2
  unsigned int *v7; // r1@3
  unsigned int *v8; // r1@8
  unsigned int v9; // r0@10
  unsigned int *v10; // r5@14
  unsigned int *v11; // r6@20
  unsigned int v12; // r0@22
  int v13; // [sp+0h] [bp-18h]@1
  int v14; // [sp+4h] [bp-14h]@1

  v2 = a2;
  v3 = this;
  v4 = (const ClientInstance *)MinecraftGame::getUserManager(*(MinecraftGame **)(a2 + 24));
  Social::UserManager::getUser((Social::UserManager *)&v13, v4, v2);
  v5 = v14;
  if ( v13 )
  {
    result = (char *)(*(int (__fastcall **)(ClientInstance *))(*(_DWORD *)v13 + 28))(v3);
    if ( v5 )
    {
      v7 = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (char *)__ldrex(v7);
        while ( __strex((unsigned int)(result - 1), v7) );
      }
      else
        result = (char *)(*v7)--;
      if ( result == (char *)1 )
        v10 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (char *)__ldrex(v10);
          while ( __strex((unsigned int)(result - 1), v10) );
        }
        else
          result = (char *)(*v10)--;
        if ( result == (char *)1 )
          result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
    }
  }
  else
    if ( v14 )
      v8 = (unsigned int *)(v14 + 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 == 1 )
        v11 = (unsigned int *)(v5 + 8);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
    result = (char *)&unk_28898CC;
    *(_DWORD *)v3 = &unk_28898CC;
  return result;
}


signed int __fastcall ClientInstance::isHoloviewerMode(ClientInstance *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 29);
  result = 0;
  if ( v1 == 3 )
    result = 1;
  return result;
}


void __fastcall ClientInstance::onGameSessionReset(ClientInstance *this)
{
  ClientInstance::onGameSessionReset(this);
}


int __fastcall ClientInstance::_calculateGuiScaleIndex(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  AppPlatform **v6; // r0@2
  int v7; // r0@4

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v6 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v6 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v7 = AppPlatform::getUIScalingRules(*v6);
  if ( v7 == 4 )
  {
    if ( (unsigned int)MinecraftGame::getClientInstanceCount(*(MinecraftGame **)(v3 + 24)) >= 2 )
      return GuiData::getGuiScaleIndexForSplitscreenConsole(v5) + v4;
  }
  else if ( v7 )
    return GuiData::getGuiScaleIndexForSmallScreen(v5) + v4;
  return GuiData::getGuiScaleIndexForLargeScreen(v5) + v4;
}


void __fastcall ClientInstance::setupTransitionForCredits(int a1, signed int a2, unsigned int *a3)
{
  ClientInstance::setupTransitionForCredits(a1, a2, a3);
}


void __fastcall ClientInstance::startSubClientLateJoin(ClientInstance *this)
{
  ClientInstance::startSubClientLateJoin(this);
}


_QWORD *__fastcall ClientInstance::onGameEventNotification(int a1)
{
  int v1; // r5@1
  _QWORD *result; // r0@2
  SceneStack *v3; // r0@3
  __int64 v4; // r2@3
  _QWORD *v5; // r0@3
  int v6; // [sp+0h] [bp-18h]@3

  v1 = a1;
  if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(a1 + 24)) == a1 )
  {
    v3 = (SceneStack *)MinecraftGame::getMainSceneStack(*(MinecraftGame **)(v1 + 24));
    LODWORD(v4) = *(_DWORD *)(v1 + 616);
    v5 = CompositeSceneStackView::CompositeSceneStackView((CompositeSceneStackView *)&v6, v3, v4);
    result = CompositeSceneStackView::onGameEventNotification((int)v5);
  }
  else
    result = j_j_j__ZN10SceneStack23onGameEventNotificationEN2ui21GameEventNotificationE(*(_QWORD **)(v1 + 616));
  return result;
}


int __fastcall ClientInstance::setCameraEntity(int result, Entity *a2)
{
  *(_DWORD *)(result + 84) = a2;
  return result;
}


RakNet *__fastcall ClientInstance::registerToUserManager(ClientInstance *this, Social::UserManager *a2, int a3)
{
  ClientInstance *v3; // r4@1
  int v4; // r0@1
  unsigned int v5; // r3@2
  unsigned int *v6; // r0@2
  unsigned int v7; // r6@5
  unsigned int v8; // r5@6
  int v9; // r5@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r0@10
  unsigned int *v12; // r6@14
  unsigned int v13; // r0@16
  int v15; // [sp+0h] [bp-18h]@7
  int v16; // [sp+4h] [bp-14h]@1

  v3 = this;
  v4 = *((_DWORD *)this + 3);
  v16 = v4;
  if ( !v4 )
    std::__throw_bad_weak_ptr();
  v5 = *(_DWORD *)(v4 + 4);
  v6 = (unsigned int *)(v4 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v5 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
        break;
      __clrex();
      v5 = v7;
    }
    v8 = __strex(v5 + 1, v6);
    v5 = v7;
  }
  while ( v8 );
  __dmb();
  v15 = *((_DWORD *)v3 + 2);
  Social::UserManager::setUserClient((int)a2, a3, (int)&v15);
  v9 = v16;
  if ( v16 )
    v10 = (unsigned int *)(v16 + 4);
    if ( &pthread_create )
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
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
  return ClientInstance::createUserAuthentication(v3);
}


int __fastcall ClientInstance::getCreditsCallback(ClientInstance *this, int a2)
{
  ClientInstance *v2; // r4@1
  int result; // r0@1
  int v4; // r5@1
  void (__fastcall *v5)(ClientInstance *, int, signed int); // r3@1

  v2 = this;
  result = 0;
  v4 = a2;
  *((_DWORD *)v2 + 2) = 0;
  v5 = *(void (__fastcall **)(ClientInstance *, int, signed int))(a2 + 140);
  if ( v5 )
  {
    v5(v2, a2 + 132, 2);
    *((_DWORD *)v2 + 3) = *(_DWORD *)(v4 + 144);
    result = *(_DWORD *)(v4 + 140);
    *((_DWORD *)v2 + 2) = result;
  }
  return result;
}


int __fastcall ClientInstance::isLivingroomMode(ClientInstance *this)
{
  int v1; // r0@1
  signed int v2; // r2@1
  signed int v3; // r1@1

  v1 = *((_DWORD *)this + 29);
  v2 = 0;
  v3 = 0;
  if ( v1 == 8 )
    v2 = 1;
  if ( v1 == 6 )
    v3 = 1;
  return v3 | v2;
}


void __fastcall ClientInstance::resetGameSession(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 8) + 16))();
  v2 = *((_DWORD *)v1 + 10);
  *((_DWORD *)v1 + 10) = 0;
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  (*(void (**)(void))(**((_DWORD **)v1 + 17) + 44))();
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 22) = 0;
  *((_DWORD *)v1 + 23) = 0;
  j_j_j__ZN9Minecraft16resetGameSessionEv(*((Minecraft **)v1 + 7));
}


ClientInstance *__fastcall ClientInstance::grabMouse(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  ClientInstance *result; // r0@1

  v1 = this;
  result = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6));
  if ( result == v1 )
    result = (ClientInstance *)j_j_j__ZN13MinecraftGame9grabMouseEv(*((MinecraftGame **)v1 + 6));
  return result;
}


int __fastcall ClientInstance::updateScheduledScreen(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int v2; // r0@2
  SceneStack *v3; // r0@3
  __int64 v4; // r2@3
  CompositeSceneStackView *v5; // r0@3
  int v6; // r5@4
  int v13; // [sp+0h] [bp-18h]@3

  v1 = this;
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) == this )
  {
    v3 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v1 + 6));
    LODWORD(v4) = *((_DWORD *)v1 + 154);
    v5 = (CompositeSceneStackView *)CompositeSceneStackView::CompositeSceneStackView(
                                      (CompositeSceneStackView *)&v13,
                                      v3,
                                      v4);
    v2 = CompositeSceneStackView::updateScheduledScreen(v5);
  }
  else
    v2 = SceneStack::updateScheduledScreen(*((SceneStack **)v1 + 154));
  v6 = v2;
  _R0 = MinecraftGame::getGameRenderer(*((MinecraftGame **)v1 + 6));
  __asm
    VLDR            S0, [R0,#0x31C]
    VLDR            S2, [R0,#0x320]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _ZF )
    *(_DWORD *)(MinecraftGame::getGameRenderer(*((MinecraftGame **)v1 + 6)) + 800) = 0;
  return v6;
}


void __fastcall ClientInstance::startSubClientLateJoin(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int v2; // r5@1
  int v3; // r5@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r6@8
  unsigned int v7; // r0@10
  int v8; // r5@15
  int v9; // r5@15
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  unsigned int *v12; // r6@22
  unsigned int v13; // r0@24
  int v14; // r5@30
  int v15; // r6@30
  _DWORD *v16; // r0@30
  int v17; // r4@30
  unsigned int *v18; // r1@31
  unsigned int v19; // r0@33
  unsigned int *v20; // r5@38
  unsigned int v21; // r0@40
  _DWORD *v22; // [sp+0h] [bp-38h]@30
  void (*v23)(void); // [sp+8h] [bp-30h]@30
  char *(__fastcall *v24)(ClientInstance ***); // [sp+Ch] [bp-2Ch]@30
  char v25; // [sp+10h] [bp-28h]@30
  int v26; // [sp+14h] [bp-24h]@30
  char v27; // [sp+18h] [bp-20h]@15
  int v28; // [sp+1Ch] [bp-1Ch]@15
  char v29; // [sp+20h] [bp-18h]@1
  int v30; // [sp+24h] [bp-14h]@1

  v1 = this;
  v2 = *((_DWORD *)this + 154);
  SceneFactory::createToastScreen((SceneFactory *)&v29, *((_DWORD *)this + 19));
  SceneStack::pushScreen(v2, (int)&v29, 1);
  v3 = v30;
  if ( v30 )
  {
    v4 = (unsigned int *)(v30 + 4);
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
  v8 = *((_DWORD *)v1 + 154);
  SceneFactory::createCubeMapScreen((SceneFactory *)&v27, *((_DWORD *)v1 + 19), 1);
  SceneStack::pushScreen(v8, (int)&v27, 0);
  v9 = v28;
  if ( v28 )
    v10 = (unsigned int *)(v28 + 4);
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
  if ( ClientInstance::_needsAsyncLateJoin(v1) == 1 )
    v14 = *((_DWORD *)v1 + 154);
    v15 = *((_DWORD *)v1 + 19);
    v16 = operator new(4u);
    *v16 = v1;
    v22 = v16;
    v23 = (void (*)(void))sub_BE88B0;
    v24 = sub_BE88A8;
    SceneFactory::createLateJoinPreGameScreen((unsigned __int64 *)&v25, v15, (int)&v22);
    SceneStack::pushScreen(v14, (int)&v25, 0);
    v17 = v26;
    if ( v26 )
      v18 = (unsigned int *)(v26 + 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        v20 = (unsigned int *)(v17 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
    if ( v23 )
      v23();
  else
    ClientInstance::_joinWorldInProgress(v1);
}


void __fastcall ClientInstance::linkToOffer(int a1, const void **a2, int a3, const void **a4, const void **a5, int a6)
{
  const void **v6; // r7@1
  const void **v7; // r5@1
  int v8; // r4@1
  int v9; // r0@3
  void *v10; // r1@3
  _DWORD *v11; // r1@5
  size_t v12; // r2@5
  char v13; // [sp+4h] [bp-1Ch]@4

  v6 = a4;
  v7 = a2;
  v8 = a1;
  if ( a3 || !Minecraft::getLevel(*(Minecraft **)(a1 + 28)) )
  {
    v9 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(v8 + 24));
    v10 = (void *)StoreCatalogRepository::getStoreCatalogItemByProductId(v9, v7);
    if ( v10 )
    {
      StoreCatalogItemModel::StoreCatalogItemModel(&v13, v10);
      if ( !*((_DWORD *)*a5 - 3)
        || (v11 = *(_DWORD **)StoreCatalogItemModel::getCreatorId((StoreCatalogItemModel *)&v13),
            v12 = *((_DWORD *)*a5 - 3),
            v12 == *(v11 - 3))
        && !memcmp(*a5, v11, v12) )
      {
        ClientInstance::navigateToPurchaseOfferScreen(v8, (StoreCatalogItemModel *)&v13, a6);
      }
    }
    else
      ClientInstance::_fetchItemAndNavigateToPurchaseScreen((ClientInstance *)v8, (int *)v7, v6, (int *)a5, a6);
  }
}


void __fastcall ClientInstance::setClientInputHandler(int a1, int *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  ClientInputHandler *v4; // r0@1
  ClientInputHandler *v5; // r0@2

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  v4 = *(ClientInputHandler **)(a1 + 64);
  *(_DWORD *)(v2 + 64) = v3;
  if ( v4 )
  {
    v5 = ClientInputHandler::~ClientInputHandler(v4);
    j_j_j__ZdlPv_3((void *)v5);
  }
}


int __fastcall ClientInstance::isInMultiplayerGame(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  int result; // r0@2
  Level *v3; // r0@3

  v1 = this;
  if ( Minecraft::getLevel(*((Minecraft **)this + 7)) )
  {
    v3 = (Level *)Minecraft::getLevel(*((Minecraft **)v1 + 7));
    result = Level::isMultiplayerGame(v3);
  }
  else
    result = 0;
  return result;
}


void __fastcall ClientInstance::_navigateToDisconnectScreen(int a1, int *a2, int *a3)
{
  int v3; // r6@1
  int *v4; // r8@1
  int *v5; // r5@1
  int v6; // r7@2
  int v7; // r6@2
  int *v8; // r0@2
  int v9; // r4@2
  unsigned int *v10; // r1@3
  unsigned int v11; // r0@5
  int v12; // r7@7
  int v13; // r7@7
  unsigned int *v14; // r1@8
  unsigned int v15; // r0@10
  unsigned int *v16; // r5@14
  unsigned int v17; // r0@16
  unsigned int *v18; // r4@20
  unsigned int v19; // r0@22
  void *v20; // r0@27
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  int v23; // r7@35
  int v24; // r6@35
  int *v25; // r0@35
  int v26; // r4@35
  unsigned int *v27; // r1@36
  unsigned int v28; // r0@38
  unsigned int *v29; // r5@42
  unsigned int v30; // r0@44
  int v31; // [sp+8h] [bp-40h]@2
  char v32; // [sp+Ch] [bp-3Ch]@2
  int v33; // [sp+10h] [bp-38h]@2
  int v34; // [sp+18h] [bp-30h]@35
  char v35; // [sp+1Ch] [bp-2Ch]@35
  int v36; // [sp+20h] [bp-28h]@35
  char v37; // [sp+24h] [bp-24h]@7
  int v38; // [sp+28h] [bp-20h]@7

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(a1 + 24)) == a1 )
  {
    v12 = MinecraftGame::getMainSceneStack(*(MinecraftGame **)(v3 + 24));
    SceneFactory::createStartMenuScreen((SceneFactory *)&v37, *(_DWORD *)(v3 + 76));
    SceneStack::pushScreen(v12, (int)&v37, 1);
    v13 = v38;
    if ( v38 )
    {
      v14 = (unsigned int *)(v38 + 4);
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
        v18 = (unsigned int *)(v13 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
    }
    v23 = MinecraftGame::getMainSceneStack(*(MinecraftGame **)(v3 + 24));
    v24 = *(_DWORD *)(v3 + 76);
    v25 = (int *)sub_DA7364((void **)&v34, (const char *)&unk_257BC67);
    SceneFactory::createDisconnectScreen((unsigned __int64 *)&v35, v24, v5, v4, v25);
    SceneStack::pushScreen(v23, (int)&v35, 0);
    v26 = v36;
    if ( v36 )
      v27 = (unsigned int *)(v36 + 4);
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
    v20 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v34 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        goto LABEL_56;
      goto LABEL_55;
  }
  else
    v6 = *(_DWORD *)(v3 + 76);
    v7 = *(_DWORD *)(v3 + 616);
    v8 = (int *)sub_DA7364((void **)&v31, (const char *)&unk_257BC67);
    SceneFactory::createDisconnectScreen((unsigned __int64 *)&v32, v6, v5, v4, v8);
    SceneStack::pushScreen(v7, (int)&v32, 1);
    v9 = v33;
    if ( v33 )
      v10 = (unsigned int *)(v33 + 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        v16 = (unsigned int *)(v9 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
    v20 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v31 - 4);
LABEL_55:
      v22 = (*v21)--;
LABEL_56:
      if ( v22 <= 0 )
        j_j_j_j_j__ZdlPv_9(v20);
      return;
}


char *__fastcall ClientInstance::getCamera(ClientInstance *this)
{
  return (char *)this + 196;
}


int __fastcall ClientInstance::setLivingRoomForCredits(int result, bool a2)
{
  *(_BYTE *)(result + 129) = a2;
  return result;
}


void __fastcall ClientInstance::navigateToPurchaseOfferScreen(int a1, StoreCatalogItemModel *a2, int a3)
{
  int v3; // r4@1
  int v4; // r10@1
  StoreCatalogItemModel *v5; // r7@1
  ContentCatalogService *v6; // r5@1
  int *v7; // r0@1
  const StoreCatalogItemModel *v8; // r8@1
  int v9; // r9@2
  char *v10; // r6@5
  Json::Value *v11; // r4@7
  int v12; // r4@11
  unsigned int *v13; // r1@12
  unsigned int v14; // r0@14
  int v15; // r6@17
  char *v16; // r0@17
  char *v17; // r0@18
  int *v18; // r0@19
  int v19; // r4@19
  unsigned int *v20; // r1@20
  unsigned int v21; // r0@22
  unsigned int *v22; // r1@25
  unsigned int v23; // r0@27
  int *v24; // r0@30
  int v25; // r4@30
  unsigned int *v26; // r1@31
  unsigned int v27; // r0@33
  unsigned int *v28; // r5@37
  unsigned int v29; // r0@39
  int *v30; // r0@42
  char *v31; // r0@42
  void *v32; // r0@42
  int v33; // r4@43
  char *v34; // r7@43
  char *v35; // r1@44
  int (**v36)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@44
  void *v37; // r0@48
  unsigned int *v38; // r5@52
  unsigned int v39; // r0@54
  unsigned int *v40; // r2@62
  signed int v41; // r6@64
  char *v42; // r5@68
  int (**v43)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r6@68
  int *v44; // r0@69
  void *v45; // r0@74
  void *v46; // r0@75
  int v47; // r4@76
  unsigned int *v48; // r1@77
  unsigned int v49; // r0@79
  unsigned int *v50; // r1@84
  unsigned int v51; // r0@86
  unsigned int *v52; // r2@88
  signed int v53; // r1@90
  unsigned int *v54; // r2@92
  signed int v55; // r1@94
  unsigned int *v56; // r2@96
  signed int v57; // r1@98
  unsigned int *v58; // r5@102
  unsigned int v59; // r0@104
  void *v60; // r0@120
  void *v61; // r0@121
  __int64 v62; // r4@122
  unsigned int *v63; // r5@129
  unsigned int v64; // r0@131
  void *v65; // r0@145
  void *v66; // r0@146
  unsigned int *v67; // r2@154
  signed int v68; // r1@156
  unsigned int *v69; // r2@158
  signed int v70; // r1@160
  unsigned int *v71; // r2@170
  signed int v72; // r1@172
  unsigned int *v73; // r2@174
  signed int v74; // r1@176
  unsigned int *v75; // r2@178
  signed int v76; // r1@180
  unsigned int *v77; // r2@182
  signed int v78; // r1@184
  unsigned int *v79; // r2@186
  signed int v80; // r1@188
  char v81; // [sp+Ch] [bp-B4h]@83
  int v82; // [sp+10h] [bp-B0h]@83
  char v83; // [sp+14h] [bp-ACh]@76
  int v84; // [sp+18h] [bp-A8h]@76
  int v85; // [sp+1Ch] [bp-A4h]@42
  char *v86; // [sp+20h] [bp-A0h]@42
  char *v87; // [sp+24h] [bp-9Ch]@42
  char *v88; // [sp+28h] [bp-98h]@42
  int v89; // [sp+30h] [bp-90h]@42
  int v90; // [sp+34h] [bp-8Ch]@42
  int v91; // [sp+38h] [bp-88h]@42
  int v92; // [sp+3Ch] [bp-84h]@147
  int v93; // [sp+44h] [bp-7Ch]@42
  int v94; // [sp+48h] [bp-78h]@42
  char v95; // [sp+4Ch] [bp-74h]@30
  int v96; // [sp+50h] [bp-70h]@30
  int v97; // [sp+54h] [bp-6Ch]@30
  int v98; // [sp+58h] [bp-68h]@122
  int v99; // [sp+60h] [bp-60h]@30
  int v100; // [sp+64h] [bp-5Ch]@30
  char v101; // [sp+68h] [bp-58h]@11
  int v102; // [sp+6Ch] [bp-54h]@11
  char v103; // [sp+70h] [bp-50h]@24
  int v104; // [sp+74h] [bp-4Ch]@24
  int v105; // [sp+7Ch] [bp-44h]@19
  char v106; // [sp+80h] [bp-40h]@19
  int v107; // [sp+84h] [bp-3Ch]@19
  char *v108; // [sp+8Ch] [bp-34h]@5
  char *v109; // [sp+90h] [bp-30h]@8
  char v110; // [sp+94h] [bp-2Ch]@8
  char v111; // [sp+98h] [bp-28h]@44

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (ContentCatalogService *)MinecraftGame::getContentCatalogService(*(MinecraftGame **)(a1 + 24));
  v7 = (int *)StoreCatalogItemModel::getLastModifiedDate(v5);
  StoreCatalogItemModel::hydrateItem((int *)v5, v6, v7);
  v8 = *(const StoreCatalogItemModel **)(v3 + 76);
  if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(v3 + 24)) == v3 )
    v9 = SceneFactory::getCurrentSceneStack(*(SceneFactory **)(v3 + 76));
  else
    v9 = *(_DWORD *)(v3 + 616);
  if ( StoreCatalogItemModel::getStoreCategory(v5) == 3 )
  {
    v10 = StoreCatalogItemModel::getMetadata(v5);
    sub_DA7364((void **)&v108, "realms.2players");
    if ( Json::Value::isNull((Json::Value *)v10)
      || Json::Value::isObject((Json::Value *)v10) != 1
      || (v11 = (Json::Value *)Json::Value::operator[]((int)v10, "realmsTier"), Json::Value::isString(v11) != 1) )
    {
      v109 = v108;
      v108 = (char *)&unk_28898CC;
    }
    else
      jsonValConversion<std::string>::as((int *)&v109, (int)&v110, (int)v11);
    v15 = sub_DA7374((const void **)&v109, "realms.2players");
    v16 = v109 - 12;
    if ( (int *)(v109 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v109 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
      }
      else
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j_j__ZdlPv_9(v16);
    v17 = v108 - 12;
    if ( (int *)(v108 - 12) != &dword_28898C0 )
      v54 = (unsigned int *)(v108 - 4);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 <= 0 )
        j_j_j_j_j__ZdlPv_9(v17);
    v18 = (int *)sub_DA7364((void **)&v105, "store");
    SceneFactory::createCreateWorldUpsellScreen((unsigned __int64 *)&v106, (int)v8, 1, v15 != 0, 0, 0, v18);
    SceneStack::pushScreen(v9, (int)&v106, 0);
    v19 = v107;
    if ( v107 )
      v20 = (unsigned int *)(v107 + 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 == 1 )
        v28 = (unsigned int *)(v19 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
    v37 = (void *)(v105 - 12);
    if ( (int *)(v105 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)(v105 - 4);
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j_j__ZdlPv_9(v37);
    return;
  }
  if ( !StoreCatalogItemModel::getStoreCategory(v5) )
    SceneFactory::createSkinPackPurchaseScreen((SceneFactory *)&v103, v8, v5);
    SceneStack::pushScreen(v9, (int)&v103, 0);
    v12 = v104;
    if ( !v104 )
      return;
    v22 = (unsigned int *)(v104 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 != 1 )
    v38 = (unsigned int *)(v12 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
    if ( !&pthread_create )
      goto LABEL_139;
    __dmb();
    do
      v39 = __ldrex(v38);
    while ( __strex(v39 - 1, v38) );
    goto LABEL_140;
  if ( StoreCatalogItemModel::getStoreCategory(v5) == 1 )
    SceneFactory::createResourcePackPurchaseScreen((unsigned __int64 *)&v101, (int)v8, v5, v4);
    SceneStack::pushScreen(v9, (int)&v101, 0);
    v12 = v102;
    if ( !v102 )
    v13 = (unsigned int *)(v102 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 != 1 )
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      goto LABEL_140;
LABEL_139:
    v39 = (*v38)--;
  if ( StoreCatalogItemModel::getStoreCategory(v5) != 5 )
    if ( StoreCatalogItemModel::getStoreCategory(v5) == 2 )
      MashupTab::buildTabCollection((int)&v91, v5, v4);
      v30 = (int *)StoreCatalogItemModel::getProductId(v5);
      EntityInteraction::setInteractText(&v94, v30);
      sub_DA7364((void **)&v89, "store.mashup.unlockAll");
      sub_DA73B4(&v85, (int *)&Util::EMPTY_STRING);
      v86 = 0;
      v87 = 0;
      v88 = 0;
      v31 = (char *)operator new(4u);
      v86 = v31;
      v88 = v31 + 4;
      v87 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                      (int)&v85,
                      (int)&v86,
                      (int)v31);
      I18n::get(&v90, &v89, (unsigned __int64 *)&v86);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v93, &v90);
      v32 = (void *)(v90 - 12);
      if ( (int *)(v90 - 12) != &dword_28898C0 )
        v71 = (unsigned int *)(v90 - 4);
            v72 = __ldrex(v71);
          while ( __strex(v72 - 1, v71) );
          v72 = (*v71)--;
        if ( v72 <= 0 )
          j_j_j_j_j__ZdlPv_9(v32);
      v33 = (int)v87;
      v34 = v86;
      if ( v86 != v87 )
        v35 = &v111;
        v36 = &pthread_create;
          v44 = (int *)(*(_DWORD *)v34 - 12);
          if ( v44 != &dword_28898C0 )
          {
            v40 = (unsigned int *)(*(_DWORD *)v34 - 4);
            if ( v36 )
            {
              __dmb();
              do
                v41 = __ldrex(v40);
              while ( __strex(v41 - 1, v40) );
            }
            else
              v41 = (*v40)--;
            if ( v41 <= 0 )
              v42 = v35;
              v43 = v36;
              j_j_j_j_j__ZdlPv_9(v44);
              v36 = v43;
              v35 = v42;
          }
          v34 += 4;
        while ( v34 != (char *)v33 );
        v34 = v86;
      if ( v34 )
        operator delete(v34);
      v45 = (void *)(v85 - 12);
      if ( (int *)(v85 - 12) != &dword_28898C0 )
        v73 = (unsigned int *)(v85 - 4);
            v74 = __ldrex(v73);
          while ( __strex(v74 - 1, v73) );
          v74 = (*v73)--;
        if ( v74 <= 0 )
          j_j_j_j_j__ZdlPv_9(v45);
      v46 = (void *)(v89 - 12);
      if ( (int *)(v89 - 12) != &dword_28898C0 )
        v75 = (unsigned int *)(v89 - 4);
            v76 = __ldrex(v75);
          while ( __strex(v76 - 1, v75) );
          v76 = (*v75)--;
        if ( v76 <= 0 )
          j_j_j_j_j__ZdlPv_9(v46);
      SceneFactory::createMashupScreen((unsigned __int64 *)&v83, (int)v8, (int)&v91, v4);
      SceneStack::pushScreen(v9, (int)&v83, 0);
      v47 = v84;
      if ( v84 )
        v48 = (unsigned int *)(v84 + 4);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          v49 = (*v48)--;
        if ( v49 == 1 )
          v63 = (unsigned int *)(v47 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
          if ( &pthread_create )
            __dmb();
            do
              v64 = __ldrex(v63);
            while ( __strex(v64 - 1, v63) );
          else
            v64 = (*v63)--;
          if ( v64 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
      v65 = (void *)(v94 - 12);
      if ( (int *)(v94 - 12) != &dword_28898C0 )
        v77 = (unsigned int *)(v94 - 4);
            v78 = __ldrex(v77);
          while ( __strex(v78 - 1, v77) );
          v78 = (*v77)--;
        if ( v78 <= 0 )
          j_j_j_j_j__ZdlPv_9(v65);
      v66 = (void *)(v93 - 12);
      if ( (int *)(v93 - 12) != &dword_28898C0 )
        v79 = (unsigned int *)(v93 - 4);
            v80 = __ldrex(v79);
          while ( __strex(v80 - 1, v79) );
          v80 = (*v79)--;
        if ( v80 <= 0 )
          j_j_j_j_j__ZdlPv_9(v66);
      v62 = *(_QWORD *)&v91;
      if ( v91 != v92 )
          if ( *(_DWORD *)v62 )
            (*(void (**)(void))(**(_DWORD **)v62 + 4))();
          *(_DWORD *)v62 = 0;
          LODWORD(v62) = v62 + 4;
        while ( HIDWORD(v62) != (_DWORD)v62 );
        LODWORD(v62) = v91;
      goto LABEL_152;
    if ( StoreCatalogItemModel::getStoreCategory(v5) != 6 && StoreCatalogItemModel::getStoreCategory(v5) != 7 )
    SceneFactory::createServerItemPurchaseScreen((unsigned __int64 *)&v81, (int)v8, v5, v4);
    SceneStack::pushScreen(v9, (int)&v81, 0);
    v12 = v82;
    if ( !v82 )
    v50 = (unsigned int *)(v82 + 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 != 1 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v12 + 8))(v12);
LABEL_140:
    if ( v39 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  MashupTab::buildTabCollection((int)&v97, v5, v4);
  v24 = (int *)StoreCatalogItemModel::getProductId(v5);
  EntityInteraction::setInteractText(&v100, v24);
  sub_DA78A4((void **)&v99, "store.world.unlock", (_BYTE *)0x12);
  SceneFactory::createMashupScreen((unsigned __int64 *)&v95, (int)v8, (int)&v97, v4);
  SceneStack::pushScreen(v9, (int)&v95, 0);
  v25 = v96;
  if ( v96 )
    v26 = (unsigned int *)(v96 + 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      v58 = (unsigned int *)(v25 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
  v60 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v100 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j_j__ZdlPv_9(v60);
  v61 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v99 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j_j__ZdlPv_9(v61);
  v62 = *(_QWORD *)&v97;
  if ( v97 != v98 )
      if ( *(_DWORD *)v62 )
        (*(void (**)(void))(**(_DWORD **)v62 + 4))();
      *(_DWORD *)v62 = 0;
      LODWORD(v62) = v62 + 4;
    while ( HIDWORD(v62) != (_DWORD)v62 );
    LODWORD(v62) = v97;
LABEL_152:
  if ( (_DWORD)v62 )
    operator delete((void *)v62);
}


int __fastcall ClientInstance::setViewportInfo(int result, int a2)
{
  *(_DWORD *)(result + 168) = *(_DWORD *)a2;
  *(_DWORD *)(result + 172) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 176) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 180) = *(_DWORD *)(a2 + 12);
  *(_QWORD *)(result + 184) = *(_QWORD *)(a2 + 16);
  return result;
}


unsigned int *__fastcall ClientInstance::getOptionsPtr(ClientInstance *this, int a2)
{
  int v2; // r5@1
  ClientInstance *v3; // r4@1
  const ClientInstance *v4; // r0@1
  char *v5; // r0@2
  unsigned int *result; // r0@2
  unsigned int v7; // r1@5
  int v8; // r4@9
  unsigned int *v9; // r1@10
  unsigned int *v10; // r5@16
  Social::User *v11; // [sp+0h] [bp-18h]@1
  int v12; // [sp+4h] [bp-14h]@9

  v2 = a2;
  v3 = this;
  v4 = (const ClientInstance *)MinecraftGame::getUserManager(*(MinecraftGame **)(a2 + 24));
  Social::UserManager::getUser((Social::UserManager *)&v11, v4, v2);
  if ( v11 )
  {
    v5 = Social::User::getOptions(v11);
    *(_DWORD *)v3 = *(_DWORD *)v5;
    result = (unsigned int *)*((_DWORD *)v5 + 1);
    *((_DWORD *)v3 + 1) = result;
    if ( result )
    {
      ++result;
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(result);
        while ( __strex(v7 + 1, result) );
      }
      else
        ++*result;
    }
  }
  else
    result = 0;
    *(_DWORD *)v3 = 0;
    *((_DWORD *)v3 + 1) = 0;
  v8 = v12;
  if ( v12 )
    v9 = (unsigned int *)(v12 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = (unsigned int *)__ldrex(v9);
      while ( __strex((unsigned int)result - 1, v9) );
    else
      result = (unsigned int *)(*v9)--;
    if ( result == (unsigned int *)1 )
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          result = (unsigned int *)__ldrex(v10);
        while ( __strex((unsigned int)result - 1, v10) );
        result = (unsigned int *)(*v10)--;
      if ( result == (unsigned int *)1 )
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return result;
}


ClientInstance *__fastcall ClientInstance::releaseMouse(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  ClientInstance *result; // r0@1

  v1 = this;
  result = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6));
  if ( result == v1 )
    result = (ClientInstance *)j_j_j__ZN13MinecraftGame12releaseMouseEv(*((MinecraftGame **)v1 + 6));
  return result;
}


int __fastcall ClientInstance::onInternetUpdate(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  SceneStack *v2; // r0@3
  int v3; // r0@5

  v1 = this;
  if ( (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*((MinecraftGame **)this + 6)) != this
    || SceneStack::isEmpty(*((SceneStack **)v1 + 154)) != 1 )
  {
    v2 = (SceneStack *)*((_DWORD *)v1 + 154);
  }
  else
    v2 = (SceneStack *)MinecraftGame::getMainSceneStack(*((MinecraftGame **)v1 + 6));
  v3 = SceneStack::getScreen(v2);
  return (*(int (**)(void))(*(_DWORD *)v3 + 24))();
}


void __fastcall ClientInstance::onClientInputInitComplete(ClientInstance *this)
{
  ClientInstance *v1; // r4@1
  void *v2; // r5@1
  ToastManager *v3; // r0@1
  ToastManager *v4; // r0@2

  v1 = this;
  v2 = operator new(0x38u);
  ToastManager::ToastManager((int)v2, v1);
  v3 = (ToastManager *)*((_DWORD *)v1 + 166);
  *((_DWORD *)v1 + 166) = v2;
  if ( v3 )
  {
    v4 = ToastManager::~ToastManager(v3);
    j_j_j__ZdlPv_3((void *)v4);
  }
}


void __fastcall ClientInstance::resetBai(ClientInstance *this, int a2)
{
  ClientInstance::resetBai(this, a2);
}


int __fastcall ClientInstance::setDisplayPosition(int result, bool a2)
{
  *(_BYTE *)(result + 680) = a2;
  return result;
}


char *__fastcall ClientInstance::getDarkShaderColor(ClientInstance *this)
{
  return (char *)this + 584;
}


void __fastcall ClientInstance::createUserAuthentication(int a1, int a2, unsigned int a3, unsigned int a4, const void **a5)
{
  ClientInstance::createUserAuthentication(a1, a2, a3, a4, a5);
}
