

signed int __fastcall StartMenuScreenController::onOpen(StartMenuScreenController *this)
{
  StartMenuScreenController *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  result = MainMenuScreenModel::checkNewStoreOffersAvailable(*((MainMenuScreenModel **)this + 106));
  *((_BYTE *)v1 + 444) = result;
  return result;
}


int __fastcall StartMenuScreenController::_fetchInviteCount(StartMenuScreenController *this)
{
  StartMenuScreenController *v1; // r5@1
  __int64 v2; // kr00_8@1
  int v3; // r5@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  _QWORD *v6; // r0@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r2@10
  __int64 v9; // r1@13
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  int result; // r0@23
  unsigned int *v13; // r2@24
  unsigned int v14; // r1@26
  _QWORD *v15; // [sp+0h] [bp-28h]@13
  void (*v16)(void); // [sp+8h] [bp-20h]@7
  char v17; // [sp+10h] [bp-18h]@1
  int v18; // [sp+14h] [bp-14h]@1

  v1 = this;
  *((_BYTE *)this + 433) = 1;
  MinecraftScreenController::_getWeakPtrToThis<StartMenuScreenController>((int)&v17, (int)this);
  v2 = *(_QWORD *)&v17;
  v3 = *((_DWORD *)v1 + 106);
  if ( v18 )
  {
    v4 = (unsigned int *)(v18 + 8);
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
  v16 = 0;
  v6 = operator new(8u);
  *v6 = v2;
  if ( HIDWORD(v2) )
    v7 = (unsigned int *)(HIDWORD(v2) + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
      ++*v7;
  LODWORD(v9) = sub_125A1E0;
  v15 = v6;
  HIDWORD(v9) = sub_125A108;
  *(_QWORD *)&v16 = v9;
  MinecraftScreenModel::getRealmsInviteCount(v3, (int)&v15);
  if ( v16 )
    v16();
    v10 = (unsigned int *)(HIDWORD(v2) + 8);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  result = v18;
    v13 = (unsigned int *)(v18 + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall StartMenuScreenController::StartMenuScreenController(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r5@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r0@10
  unsigned int *v9; // r6@14
  unsigned int v10; // r0@16
  int v12; // [sp+4h] [bp-1Ch]@1
  int v13; // [sp+8h] [bp-18h]@1

  v2 = a1;
  v12 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v13 = v3;
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
  MainMenuScreenController::MainMenuScreenController(v2, (int)&v12);
  v6 = v13;
  if ( v13 )
    v7 = (unsigned int *)(v13 + 4);
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
  *(_DWORD *)v2 = &off_26E3884;
  *(_DWORD *)(v2 + 432) = 0;
  *(_BYTE *)(v2 + 436) = 1;
  *(_DWORD *)(v2 + 440) = 0;
  *(_BYTE *)(v2 + 444) = 0;
  *(_DWORD *)(v2 + 448) = &unk_28898CC;
  *(_DWORD *)(v2 + 456) = 0;
  *(_DWORD *)(v2 + 460) = 0;
  *(_DWORD *)(v2 + 464) = 0;
  *(_DWORD *)(v2 + 468) = 0;
  MinecraftScreenController::_setExitBehavior(v2, 1);
  StartMenuScreenController::_registerEventHandlers((StartMenuScreenController *)v2);
  StartMenuScreenController::_registerBindings((StartMenuScreenController *)v2);
  return v2;
}


int __fastcall StartMenuScreenController::promptConnect(StartMenuScreenController *this, int a2)
{
  StartMenuScreenController *v2; // r4@1
  int v3; // r5@1
  __int64 v4; // kr00_8@3
  unsigned int *v5; // r0@4
  unsigned int v6; // r1@6
  int result; // r0@8
  void (**v8)(void); // r5@9
  unsigned int v9; // r1@13
  _QWORD *v10; // r0@16
  unsigned int *v11; // r1@17
  unsigned int v12; // r2@19
  unsigned int v13; // r3@22
  void (*v14)(void); // r3@22
  unsigned int *v15; // r6@25
  unsigned int v16; // r0@27
  unsigned int v17; // r0@34
  int v18; // r0@39
  unsigned int *v19; // r2@40
  unsigned int v20; // r1@42
  int v21; // [sp+0h] [bp-48h]@48
  void (*v22)(void); // [sp+8h] [bp-40h]@9
  StartMenuScreenController *(__fastcall *v23)(int *, int); // [sp+Ch] [bp-3Ch]@48
  char v24; // [sp+10h] [bp-38h]@3
  int v25; // [sp+14h] [bp-34h]@3
  unsigned __int64 v26; // [sp+18h] [bp-30h]@22
  void (*v27)(void); // [sp+20h] [bp-28h]@2
  StartMenuScreenController *(__fastcall *v28)(int *, int); // [sp+24h] [bp-24h]@22
  unsigned __int64 v29; // [sp+28h] [bp-20h]@22
  void (*v30)(void); // [sp+30h] [bp-18h]@16
  StartMenuScreenController *(__fastcall *v31)(int *, int); // [sp+34h] [bp-14h]@22

  v2 = this;
  v3 = a2;
  if ( MinecraftScreenModel::isPlatformNX(*((MinecraftScreenModel **)this + 106)) == 1 )
  {
    v27 = 0;
    if ( v3 )
    {
      MinecraftScreenController::_getWeakPtrToThis<StartMenuScreenController>((int)&v24, (int)v2);
      v4 = *(_QWORD *)&v24;
      if ( v25 )
      {
        v5 = (unsigned int *)(v25 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 + 1, v5) );
        }
        else
          ++*v5;
            v9 = __ldrex(v5);
          while ( __strex(v9 + 1, v5) );
      }
      v30 = 0;
      v10 = operator new(8u);
      *v10 = v4;
      if ( HIDWORD(v4) )
        v11 = (unsigned int *)(HIDWORD(v4) + 8);
            v12 = __ldrex(v11);
          while ( __strex(v12 + 1, v11) );
          ++*v11;
      v13 = HIDWORD(v29);
      v29 = v26;
      v26 = __PAIR__(v13, (unsigned int)v10);
      v14 = v27;
      v27 = (void (*)(void))sub_1258920;
      v30 = v14;
      v31 = v28;
      v28 = sub_12587D4;
      if ( v14 )
        v14();
        v15 = (unsigned int *)(HIDWORD(v4) + 8);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
            v17 = __ldrex(v15);
          while ( __strex(v17 - 1, v15) );
          v17 = (*v15)--;
        if ( v17 == 1 )
      v18 = v25;
        v19 = (unsigned int *)(v25 + 8);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 == 1 )
          (*(void (**)(void))(*(_DWORD *)v18 + 12))();
      v22 = 0;
      v8 = &v22;
      if ( v27 )
        ((void (__fastcall *)(int *, unsigned __int64 *, signed int))v27)(&v21, &v26, 2);
        v23 = v28;
        v22 = v27;
    }
    else
    MinecraftScreenController::_attemptConnect((int)v2, (int)&v21);
    if ( *v8 )
      (*v8)();
    if ( v27 )
      v27();
    result = 1;
  }
  else
    result = j_j_j__ZN25StartMenuScreenController12promptSignInEv(v2);
  return result;
}


void __fastcall StartMenuScreenController::_registerEventHandlers(StartMenuScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  int v6; // r5@4
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  int v10; // r5@7
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7
  void *v13; // r0@9
  int v14; // r5@10
  _DWORD *v15; // r0@10
  __int64 v16; // r1@10
  void *v17; // r0@12
  int v18; // r5@13
  _DWORD *v19; // r0@13
  __int64 v20; // r1@13
  void *v21; // r0@15
  int v22; // r5@16
  _DWORD *v23; // r0@16
  __int64 v24; // r1@16
  void *v25; // r0@18
  int v26; // r5@19
  _DWORD *v27; // r0@19
  __int64 v28; // r1@19
  void *v29; // r0@21
  int v30; // r5@22
  _DWORD *v31; // r0@22
  __int64 v32; // r1@22
  void *v33; // r0@24
  int v34; // r5@25
  _DWORD *v35; // r0@25
  __int64 v36; // r1@25
  void *v37; // r0@27
  unsigned int *v38; // r2@29
  signed int v39; // r1@31
  unsigned int *v40; // r2@33
  signed int v41; // r1@35
  unsigned int *v42; // r2@37
  signed int v43; // r1@39
  unsigned int *v44; // r2@41
  signed int v45; // r1@43
  unsigned int *v46; // r2@45
  signed int v47; // r1@47
  unsigned int *v48; // r2@49
  signed int v49; // r1@51
  unsigned int *v50; // r2@53
  signed int v51; // r1@55
  unsigned int *v52; // r2@57
  signed int v53; // r1@59
  unsigned int *v54; // r2@61
  signed int v55; // r1@63
  _DWORD *v56; // [sp+4h] [bp-ECh]@25
  __int64 v57; // [sp+Ch] [bp-E4h]@25
  int v58; // [sp+18h] [bp-D8h]@25
  _DWORD *v59; // [sp+1Ch] [bp-D4h]@22
  __int64 v60; // [sp+24h] [bp-CCh]@22
  int v61; // [sp+30h] [bp-C0h]@22
  _DWORD *v62; // [sp+34h] [bp-BCh]@19
  __int64 v63; // [sp+3Ch] [bp-B4h]@19
  int v64; // [sp+48h] [bp-A8h]@19
  _DWORD *v65; // [sp+4Ch] [bp-A4h]@16
  __int64 v66; // [sp+54h] [bp-9Ch]@16
  int v67; // [sp+60h] [bp-90h]@16
  _DWORD *v68; // [sp+64h] [bp-8Ch]@13
  __int64 v69; // [sp+6Ch] [bp-84h]@13
  int v70; // [sp+78h] [bp-78h]@13
  _DWORD *v71; // [sp+7Ch] [bp-74h]@10
  __int64 v72; // [sp+84h] [bp-6Ch]@10
  int v73; // [sp+90h] [bp-60h]@10
  _DWORD *v74; // [sp+94h] [bp-5Ch]@7
  __int64 v75; // [sp+9Ch] [bp-54h]@7
  int v76; // [sp+A8h] [bp-48h]@7
  _DWORD *v77; // [sp+ACh] [bp-44h]@4
  __int64 v78; // [sp+B4h] [bp-3Ch]@4
  int v79; // [sp+C0h] [bp-30h]@4
  _DWORD *v80; // [sp+C4h] [bp-2Ch]@1
  __int64 v81; // [sp+CCh] [bp-24h]@1
  int v82; // [sp+D8h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v82, "button.menu_play");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v82);
  v3 = operator new(4u);
  LODWORD(v4) = sub_1258BD4;
  *v3 = v1;
  HIDWORD(v4) = sub_12589C4;
  v80 = v3;
  v81 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v80);
  if ( (_DWORD)v81 )
    ((void (*)(void))v81)();
  v5 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
  {
    v38 = (unsigned int *)(v82 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v79, "button.menu_achievements");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v79);
  v7 = operator new(4u);
  LODWORD(v8) = sub_1259020;
  *v7 = v1;
  HIDWORD(v8) = sub_1258E04;
  v77 = v7;
  v78 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v77);
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
  v9 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v79 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v76, "button.menu_settings");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v76);
  v11 = operator new(4u);
  LODWORD(v12) = sub_1259286;
  *v11 = v1;
  HIDWORD(v12) = sub_125924C;
  v74 = v11;
  v75 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  v13 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v76 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v73, "button.menu_how_to_play");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v73);
  v15 = operator new(4u);
  LODWORD(v16) = sub_12592D8;
  *v15 = v1;
  HIDWORD(v16) = sub_12592BC;
  v71 = v15;
  v72 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v71);
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  v17 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v73 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v70, "button.menu_skins");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v70);
  v19 = operator new(4u);
  LODWORD(v20) = sub_1259344;
  *v19 = v1;
  HIDWORD(v20) = sub_125930E;
  v68 = v19;
  v69 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v68);
  if ( (_DWORD)v69 )
    ((void (*)(void))v69)();
  v21 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v70 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v67, "button.menu_store");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v67);
  v23 = operator new(4u);
  LODWORD(v24) = sub_1259594;
  *v23 = v1;
  HIDWORD(v24) = sub_125937C;
  v65 = v23;
  v66 = v24;
  ScreenController::registerButtonClickHandler((int)v1, v22, (int)&v65);
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  v25 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v67 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v64, "button.xbl_signin");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v64);
  v27 = operator new(4u);
  LODWORD(v28) = sub_1259994;
  *v27 = v1;
  HIDWORD(v28) = sub_12597C0;
  v62 = v27;
  v63 = v28;
  ScreenController::registerButtonClickHandler((int)v1, v26, (int)&v62);
  if ( (_DWORD)v63 )
    ((void (*)(void))v63)();
  v29 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v64 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v61, "button.menu_invite_notification");
  v30 = MinecraftScreenController::_getNameId(v1, (int **)&v61);
  v31 = operator new(4u);
  LODWORD(v32) = sub_1259C2E;
  *v31 = v1;
  HIDWORD(v32) = sub_1259BF8;
  v59 = v31;
  v60 = v32;
  ScreenController::registerButtonClickHandler((int)v1, v30, (int)&v59);
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  v33 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v61 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v58, "button.menu_buy_game");
  v34 = MinecraftScreenController::_getNameId(v1, (int **)&v58);
  v35 = operator new(4u);
  LODWORD(v36) = sub_1259C92;
  *v35 = v1;
  HIDWORD(v36) = sub_1259C64;
  v56 = v35;
  v57 = v36;
  ScreenController::registerButtonClickHandler((int)v1, v34, (int)&v56);
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
  v37 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v58 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
}


MainMenuScreenController *__fastcall StartMenuScreenController::~StartMenuScreenController(StartMenuScreenController *this)
{
  MainMenuScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E3884;
  v2 = *((_DWORD *)this + 112);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


void **__fastcall StartMenuScreenController::_getButtonYDescription(StartMenuScreenController *this, int a2)
{
  void **v2; // r4@1
  int v3; // r0@1
  void **result; // r0@2

  v2 = (void **)this;
  v3 = MinecraftScreenModel::getUserManager(*(MinecraftScreenModel **)(a2 + 424));
  if ( (*(int (**)(void))(*(_DWORD *)v3 + 72))() )
    result = sub_21E94B4(v2, "usermanagement.changeUser");
  else
    result = MinecraftScreenController::_getButtonYDescription((MinecraftScreenController *)v2);
  return result;
}


int __fastcall StartMenuScreenController::handleLicenseChanged(int result)
{
  *(_BYTE *)(result + 432) = 1;
  return result;
}


void __fastcall StartMenuScreenController::_registerEventHandlers(StartMenuScreenController *this)
{
  StartMenuScreenController::_registerEventHandlers(this);
}


signed int __fastcall StartMenuScreenController::screenHandlesGamepadMenuButton(StartMenuScreenController *this)
{
  return 1;
}


void __fastcall StartMenuScreenController::_registerBindings(StartMenuScreenController *this)
{
  StartMenuScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@9
  __int64 v9; // r1@9
  __int64 v10; // r1@9
  _DWORD *v11; // r0@13
  __int64 v12; // r1@13
  __int64 v13; // r1@13
  _DWORD *v14; // r0@17
  __int64 v15; // r1@17
  __int64 v16; // r1@17
  _DWORD *v17; // r0@21
  __int64 v18; // r1@21
  __int64 v19; // r1@21
  _DWORD *v20; // r0@25
  __int64 v21; // r1@25
  __int64 v22; // r1@25
  _DWORD *v23; // r0@29
  __int64 v24; // r1@29
  __int64 v25; // r1@29
  _DWORD *v26; // r0@33
  __int64 v27; // r1@33
  __int64 v28; // r1@33
  _DWORD *v29; // r0@37
  __int64 v30; // r1@37
  __int64 v31; // r1@37
  _DWORD *v32; // r0@41
  __int64 v33; // r1@41
  __int64 v34; // r1@41
  _DWORD *v35; // r0@45
  __int64 v36; // r1@45
  __int64 v37; // r1@45
  _DWORD *v38; // r0@49
  __int64 v39; // r1@49
  __int64 v40; // r1@49
  _DWORD *v41; // r0@53
  __int64 v42; // r1@53
  __int64 v43; // r1@53
  _DWORD *v44; // r0@57
  __int64 v45; // r1@57
  __int64 v46; // r1@57
  void *v47; // [sp+4h] [bp-224h]@57
  __int64 v48; // [sp+Ch] [bp-21Ch]@57
  _DWORD *v49; // [sp+14h] [bp-214h]@57
  __int64 v50; // [sp+1Ch] [bp-20Ch]@57
  int v51; // [sp+24h] [bp-204h]@57
  void *v52; // [sp+28h] [bp-200h]@53
  __int64 v53; // [sp+30h] [bp-1F8h]@53
  _DWORD *v54; // [sp+38h] [bp-1F0h]@53
  __int64 v55; // [sp+40h] [bp-1E8h]@53
  int v56; // [sp+48h] [bp-1E0h]@53
  void *v57; // [sp+4Ch] [bp-1DCh]@49
  __int64 v58; // [sp+54h] [bp-1D4h]@49
  _DWORD *v59; // [sp+5Ch] [bp-1CCh]@49
  __int64 v60; // [sp+64h] [bp-1C4h]@49
  int v61; // [sp+6Ch] [bp-1BCh]@49
  void *v62; // [sp+70h] [bp-1B8h]@45
  __int64 v63; // [sp+78h] [bp-1B0h]@45
  _DWORD *v64; // [sp+80h] [bp-1A8h]@45
  __int64 v65; // [sp+88h] [bp-1A0h]@45
  int v66; // [sp+90h] [bp-198h]@45
  void *v67; // [sp+94h] [bp-194h]@41
  __int64 v68; // [sp+9Ch] [bp-18Ch]@41
  _DWORD *v69; // [sp+A4h] [bp-184h]@41
  __int64 v70; // [sp+ACh] [bp-17Ch]@41
  int v71; // [sp+B4h] [bp-174h]@41
  void *v72; // [sp+B8h] [bp-170h]@37
  __int64 v73; // [sp+C0h] [bp-168h]@37
  _DWORD *v74; // [sp+C8h] [bp-160h]@37
  __int64 v75; // [sp+D0h] [bp-158h]@37
  int v76; // [sp+D8h] [bp-150h]@37
  void *v77; // [sp+DCh] [bp-14Ch]@33
  __int64 v78; // [sp+E4h] [bp-144h]@33
  _DWORD *v79; // [sp+ECh] [bp-13Ch]@33
  __int64 v80; // [sp+F4h] [bp-134h]@33
  int v81; // [sp+FCh] [bp-12Ch]@33
  void *v82; // [sp+100h] [bp-128h]@29
  __int64 v83; // [sp+108h] [bp-120h]@29
  _DWORD *v84; // [sp+110h] [bp-118h]@29
  __int64 v85; // [sp+118h] [bp-110h]@29
  int v86; // [sp+120h] [bp-108h]@29
  void *v87; // [sp+124h] [bp-104h]@25
  __int64 v88; // [sp+12Ch] [bp-FCh]@25
  _DWORD *v89; // [sp+134h] [bp-F4h]@25
  __int64 v90; // [sp+13Ch] [bp-ECh]@25
  int v91; // [sp+144h] [bp-E4h]@25
  void *v92; // [sp+148h] [bp-E0h]@21
  __int64 v93; // [sp+150h] [bp-D8h]@21
  _DWORD *v94; // [sp+158h] [bp-D0h]@21
  __int64 v95; // [sp+160h] [bp-C8h]@21
  int v96; // [sp+168h] [bp-C0h]@21
  void *v97; // [sp+16Ch] [bp-BCh]@17
  __int64 v98; // [sp+174h] [bp-B4h]@17
  _DWORD *v99; // [sp+17Ch] [bp-ACh]@17
  __int64 v100; // [sp+184h] [bp-A4h]@17
  int v101; // [sp+18Ch] [bp-9Ch]@17
  void *v102; // [sp+190h] [bp-98h]@13
  __int64 v103; // [sp+198h] [bp-90h]@13
  _DWORD *v104; // [sp+1A0h] [bp-88h]@13
  __int64 v105; // [sp+1A8h] [bp-80h]@13
  int v106; // [sp+1B0h] [bp-78h]@13
  void *v107; // [sp+1B4h] [bp-74h]@9
  __int64 v108; // [sp+1BCh] [bp-6Ch]@9
  _DWORD *v109; // [sp+1C4h] [bp-64h]@9
  __int64 v110; // [sp+1CCh] [bp-5Ch]@9
  int v111; // [sp+1D4h] [bp-54h]@9
  void *v112; // [sp+1D8h] [bp-50h]@5
  __int64 v113; // [sp+1E0h] [bp-48h]@5
  _DWORD *v114; // [sp+1E8h] [bp-40h]@5
  __int64 v115; // [sp+1F0h] [bp-38h]@5
  int v116; // [sp+1F8h] [bp-30h]@5
  void *v117; // [sp+1FCh] [bp-2Ch]@1
  __int64 v118; // [sp+204h] [bp-24h]@1
  _DWORD *v119; // [sp+20Ch] [bp-1Ch]@1
  __int64 v120; // [sp+214h] [bp-14h]@1
  int v121; // [sp+21Ch] [bp-Ch]@1

  v1 = this;
  v121 = -999174946;
  v2 = operator new(4u);
  LODWORD(v3) = sub_1259CD8;
  *v2 = v1;
  HIDWORD(v3) = sub_1259CC8;
  v119 = v2;
  v120 = v3;
  v117 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v118 = v4;
  ScreenController::bindString((int)v1, &v121, (int)&v119, (int)&v117);
  if ( (_DWORD)v118 )
    ((void (*)(void))v118)();
  if ( (_DWORD)v120 )
    ((void (*)(void))v120)();
  v116 = 482554696;
  v5 = operator new(4u);
  LODWORD(v6) = sub_1259D1E;
  *v5 = v1;
  HIDWORD(v6) = sub_1259D0E;
  v114 = v5;
  v115 = v6;
  v112 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v113 = v7;
  ScreenController::bindString((int)v1, &v116, (int)&v114, (int)&v112);
  if ( (_DWORD)v113 )
    ((void (*)(void))v113)();
  if ( (_DWORD)v115 )
    ((void (*)(void))v115)();
  v111 = 2031204656;
  v8 = operator new(4u);
  LODWORD(v9) = sub_1259D64;
  *v8 = v1;
  HIDWORD(v9) = sub_1259D54;
  v109 = v8;
  v110 = v9;
  v107 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v108 = v10;
  ScreenController::bindString((int)v1, &v111, (int)&v109, (int)&v107);
  if ( (_DWORD)v108 )
    ((void (*)(void))v108)();
  if ( (_DWORD)v110 )
    ((void (*)(void))v110)();
  v106 = -672156574;
  v11 = operator new(4u);
  LODWORD(v12) = sub_1259DA6;
  *v11 = v1;
  HIDWORD(v12) = sub_1259D9A;
  v104 = v11;
  v105 = v12;
  v102 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v103 = v13;
  ScreenController::bindBool((int)v1, &v106, (int)&v104, (int)&v102);
  if ( (_DWORD)v103 )
    ((void (*)(void))v103)();
  if ( (_DWORD)v105 )
    ((void (*)(void))v105)();
  v101 = -1490711900;
  v14 = operator new(4u);
  LODWORD(v15) = sub_1259DE8;
  *v14 = v1;
  HIDWORD(v15) = sub_1259DDC;
  v99 = v14;
  v100 = v15;
  v97 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v98 = v16;
  ScreenController::bindBool((int)v1, &v101, (int)&v99, (int)&v97);
  if ( (_DWORD)v98 )
    ((void (*)(void))v98)();
  if ( (_DWORD)v100 )
    ((void (*)(void))v100)();
  v96 = 381094390;
  v17 = operator new(4u);
  LODWORD(v18) = sub_1259E2A;
  *v17 = v1;
  HIDWORD(v18) = sub_1259E1E;
  v94 = v17;
  v95 = v18;
  v92 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v93 = v19;
  ScreenController::bindBool((int)v1, &v96, (int)&v94, (int)&v92);
  if ( (_DWORD)v93 )
    ((void (*)(void))v93)();
  if ( (_DWORD)v95 )
    ((void (*)(void))v95)();
  v91 = -1065252189;
  v20 = operator new(4u);
  LODWORD(v21) = sub_1259E6C;
  *v20 = v1;
  HIDWORD(v21) = sub_1259E60;
  v89 = v20;
  v90 = v21;
  v87 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v88 = v22;
  ScreenController::bindBool((int)v1, &v91, (int)&v89, (int)&v87);
  if ( (_DWORD)v88 )
    ((void (*)(void))v88)();
  if ( (_DWORD)v90 )
    ((void (*)(void))v90)();
  v86 = 142802920;
  v23 = operator new(4u);
  LODWORD(v24) = sub_1259EB2;
  *v23 = v1;
  HIDWORD(v24) = sub_1259EA2;
  v84 = v23;
  v85 = v24;
  v82 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v83 = v25;
  ScreenController::bindString((int)v1, &v86, (int)&v84, (int)&v82);
  if ( (_DWORD)v83 )
    ((void (*)(void))v83)();
  if ( (_DWORD)v85 )
    ((void (*)(void))v85)();
  v81 = -267601119;
  v26 = operator new(4u);
  LODWORD(v27) = sub_1259F1C;
  *v26 = v1;
  HIDWORD(v27) = sub_1259EE8;
  v79 = v26;
  v80 = v27;
  v77 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v78 = v28;
  ScreenController::bindString((int)v1, &v81, (int)&v79, (int)&v77);
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  StringHash::StringHash<char [29]>(&v76, (int)"#realms_notification_visible");
  v29 = operator new(4u);
  LODWORD(v30) = sub_1259F62;
  *v29 = v1;
  HIDWORD(v30) = sub_1259F52;
  v74 = v29;
  v75 = v30;
  v72 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v73 = v31;
  ScreenController::bindBool((int)v1, &v76, (int)&v74, (int)&v72);
  if ( (_DWORD)v73 )
    ((void (*)(void))v73)();
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  v71 = 62571817;
  v32 = operator new(4u);
  LODWORD(v33) = sub_1259FA4;
  *v32 = v1;
  HIDWORD(v33) = sub_1259F98;
  v69 = v32;
  v70 = v33;
  v67 = operator new(1u);
  LODWORD(v34) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v34) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v68 = v34;
  ScreenController::bindBool((int)v1, &v71, (int)&v69, (int)&v67);
  if ( (_DWORD)v68 )
    ((void (*)(void))v68)();
  if ( (_DWORD)v70 )
    ((void (*)(void))v70)();
  v66 = -1542016824;
  v35 = operator new(4u);
  LODWORD(v36) = sub_1259FE6;
  *v35 = v1;
  HIDWORD(v36) = sub_1259FDA;
  v64 = v35;
  v65 = v36;
  v62 = operator new(1u);
  LODWORD(v37) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v37) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v63 = v37;
  ScreenController::bindBool((int)v1, &v66, (int)&v64, (int)&v62);
  if ( (_DWORD)v63 )
    ((void (*)(void))v63)();
  if ( (_DWORD)v65 )
    ((void (*)(void))v65)();
  v61 = -1086495250;
  v38 = operator new(4u);
  LODWORD(v39) = sub_125A02C;
  *v38 = v1;
  HIDWORD(v39) = sub_125A01C;
  v59 = v38;
  v60 = v39;
  v57 = operator new(1u);
  LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v40) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v58 = v40;
  ScreenController::bindBool((int)v1, &v61, (int)&v59, (int)&v57);
  if ( (_DWORD)v58 )
    ((void (*)(void))v58)();
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  v56 = 372551559;
  v41 = operator new(4u);
  LODWORD(v42) = sub_125A076;
  *v41 = v1;
  HIDWORD(v42) = sub_125A062;
  v54 = v41;
  v55 = v42;
  v52 = operator new(1u);
  LODWORD(v43) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v43) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v53 = v43;
  ScreenController::bindBool((int)v1, &v56, (int)&v54, (int)&v52);
  if ( (_DWORD)v53 )
    ((void (*)(void))v53)();
  if ( (_DWORD)v55 )
    ((void (*)(void))v55)();
  v51 = 359185495;
  v44 = operator new(4u);
  LODWORD(v45) = sub_125A0D2;
  *v44 = v1;
  HIDWORD(v45) = sub_125A0AC;
  v49 = v44;
  v50 = v45;
  v47 = operator new(1u);
  LODWORD(v46) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v46) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v48 = v46;
  ScreenController::bindBool((int)v1, &v51, (int)&v49, (int)&v47);
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
}


signed int __fastcall StartMenuScreenController::promptSignIn(StartMenuScreenController *this)
{
  StartMenuScreenController *v1; // r4@1
  int v2; // r0@2
  int v3; // r0@3
  signed int result; // r0@5
  int v5; // [sp+0h] [bp-18h]@6
  void (*v6)(void); // [sp+8h] [bp-10h]@6

  v1 = this;
  if ( MinecraftScreenModel::canSignInToXBL(*((MinecraftScreenModel **)this + 106)) != 1 )
    return 0;
  v2 = MinecraftScreenModel::getUserManager(*((MinecraftScreenModel **)v1 + 106));
  if ( (*(int (**)(void))(*(_DWORD *)v2 + 64))() == 1 )
  {
    v3 = MinecraftScreenModel::getUserManager(*((MinecraftScreenModel **)v1 + 106));
    if ( !(*(int (**)(void))(*(_DWORD *)v3 + 24))() )
    {
      StartMenuScreenController::promptConnect(v1, 1);
      return 0;
    }
  }
  if ( MinecraftScreenModel::tryNavigateToXblFirstLaunchScreen(*((MinecraftScreenModel **)v1 + 106)) )
    result = 8;
  else
    v6 = 0;
    MinecraftScreenController::_attemptSignIn((int)v1, (int)&v5);
    if ( v6 )
      v6();
    result = 1;
  return result;
}


void __fastcall StartMenuScreenController::_registerBindings(StartMenuScreenController *this)
{
  StartMenuScreenController::_registerBindings(this);
}


void __fastcall StartMenuScreenController::~StartMenuScreenController(StartMenuScreenController *this)
{
  MainMenuScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E3884;
  v2 = *((_DWORD *)this + 112);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  MainMenuScreenController::~MainMenuScreenController(v1);
  operator delete((void *)v1);
}


int __fastcall StartMenuScreenController::tick(StartMenuScreenController *this)
{
  StartMenuScreenController *v1; // r4@1
  int v2; // r5@1
  signed int v3; // r0@5
  __int64 v6; // r0@9
  signed int v7; // r3@11
  SkinPackCollectionModel *v8; // r0@18
  int v9; // r6@19
  int v10; // r0@20
  __int64 v11; // r0@23
  signed int v12; // r3@25
  int *v18; // r0@30
  void *v19; // r0@30
  void *v20; // r0@31
  unsigned int *v22; // r2@34
  signed int v23; // r1@36
  unsigned int *v24; // r2@38
  signed int v25; // r1@40
  int v26; // [sp+8h] [bp-38h]@30
  int v27; // [sp+Ch] [bp-34h]@30
  char v28; // [sp+10h] [bp-30h]@30
  __int64 v29; // [sp+18h] [bp-28h]@23
  __int64 v30; // [sp+20h] [bp-20h]@9

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  if ( MinecraftScreenModel::isDirty(*((MinecraftScreenModel **)v1 + 106)) == 1 )
  {
    MinecraftScreenModel::setIsDirty(*((MinecraftScreenModel **)v1 + 106), 0);
    v2 |= 1u;
  }
  if ( *((_BYTE *)v1 + 432) )
    *((_BYTE *)v1 + 432) = 0;
  v3 = MinecraftScreenModel::isRealmsEnabled(*((MinecraftScreenModel **)v1 + 106));
  _ZF = v3 == 1;
  if ( v3 == 1 )
    _ZF = *((_BYTE *)v1 + 433) == 0;
  if ( _ZF )
    sub_21E0378(&v30);
    v6 = v30 - *((_QWORD *)v1 + 57);
    _CF = (unsigned int)v6 >= 0x2A05F201;
    LODWORD(v6) = 0;
    if ( !_CF )
      LODWORD(v6) = 1;
    v7 = 0;
    if ( SHIDWORD(v6) < 1 )
      v7 = 1;
    if ( HIDWORD(v6) == 1 )
      v7 = v6;
    if ( !v7 )
      StartMenuScreenController::_fetchInviteCount(v1);
  if ( *((_BYTE *)v1 + 436) )
    v8 = (SkinPackCollectionModel *)MainMenuScreenModel::getSkinPackCollection(*((MainMenuScreenModel **)v1 + 106));
    SkinPackCollectionModel::checkPendingSkinPack(v8);
    *((_BYTE *)v1 + 436) = 0;
  v9 = *((_BYTE *)v1 + 435);
  if ( v9 == MinecraftScreenModel::signinInProgress(*((MinecraftScreenModel **)v1 + 106)) )
    v10 = *((_BYTE *)v1 + 435);
  else
    v10 = MinecraftScreenModel::signinInProgress(*((MinecraftScreenModel **)v1 + 106));
    *((_BYTE *)v1 + 435) = v10;
    *((_BYTE *)v1 + 432) = 1;
  if ( v10 )
    sub_21E0378(&v29);
    v11 = v29 - *((_QWORD *)v1 + 58);
    _CF = (unsigned int)v11 >= 0x3B9ACA01;
    LODWORD(v11) = 0;
      LODWORD(v11) = 1;
    v12 = 0;
    if ( SHIDWORD(v11) < 0 )
      v12 = 1;
    if ( !HIDWORD(v11) )
      v12 = v11;
    if ( !v12 )
    {
      sub_21E0378(&v28);
      *((_QWORD *)v1 + 58) = *(_QWORD *)&v28;
      _R1 = 1717986919;
      _R0 = *((_DWORD *)v1 + 110) + 1;
      __asm { SMMUL.W         R2, R0, R1 }
      *((_DWORD *)v1 + 110) = _R0 - 5 * (((signed int)_R2 >> 1) + (_R2 >> 31));
      sub_21E94B4((void **)&v26, "xbox.signingin");
      I18n::get(&v27, (int **)&v26);
      v18 = (int *)sub_21E7434((const void **)&v27, *((_DWORD *)v1 + 110), 46);
      EntityInteraction::setInteractText((int *)v1 + 112, v18);
      v19 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
      {
        v22 = (unsigned int *)(v27 - 4);
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
          j_j_j_j__ZdlPv_9(v19);
      }
      v20 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)(v26 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      *((_BYTE *)v1 + 432) = 1;
    }
  return v2;
}


void __fastcall StartMenuScreenController::~StartMenuScreenController(StartMenuScreenController *this)
{
  StartMenuScreenController::~StartMenuScreenController(this);
}
