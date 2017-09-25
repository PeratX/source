

void __fastcall LateJoinPreGameScreenController::~LateJoinPreGameScreenController(LateJoinPreGameScreenController *this)
{
  LateJoinPreGameScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E23CC;
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
      j_j_j_j_j__ZdlPv_9_2(v3);
  }
  v4 = (void (*)(void))*((_DWORD *)v1 + 108);
  if ( v4 )
    v4();
  MinecraftScreenController::~MinecraftScreenController(v1);
  operator delete((void *)v1);
}


ModalScreenData *__fastcall LateJoinPreGameScreenController::_handleUserReadyToJoinGame(LateJoinPreGameScreenController *this)
{
  LateJoinPreGameScreenController *v1; // r4@1
  ModalScreenData *result; // r0@3

  v1 = this;
  if ( MinecraftScreenModel::isPrimaryLevelMultiplayer(*((MinecraftScreenModel **)this + 95)) != 1
    || MinecraftScreenModel::isValidMultiplayerSkin(*((MinecraftScreenModel **)v1 + 95)) )
  {
    MinecraftScreenModel::leaveScreen(*((MinecraftScreenModel **)v1 + 95));
    result = (ModalScreenData *)*((_DWORD *)v1 + 108);
    if ( result )
      result = (ModalScreenData *)(*((int (__fastcall **)(_DWORD))v1 + 109))((char *)v1 + 424);
  }
  else
    result = j_j_j__ZN31LateJoinPreGameScreenController15_warnLockedSkinEv(v1);
  return result;
}


unsigned int __fastcall LateJoinPreGameScreenController::_isAnimatingTextVisible(LateJoinPreGameScreenController *this)
{
  unsigned int v1; // r0@1
  signed int v2; // r1@1

  v1 = *((_WORD *)this + 220);
  v2 = 0;
  if ( v1 < 0x100 )
    v2 = 1;
  v1 = (unsigned __int8)v1;
  if ( (_BYTE)v1 )
    v1 = 1;
  return v1 | v2;
}


void __fastcall LateJoinPreGameScreenController::_promptForXBLSignIn(LateJoinPreGameScreenController *this)
{
  LateJoinPreGameScreenController::_promptForXBLSignIn(this);
}


ModalScreenData *__fastcall LateJoinPreGameScreenController::_warnLockedSkin(LateJoinPreGameScreenController *this)
{
  LateJoinPreGameScreenController *v1; // r5@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  _QWORD *v5; // r0@7
  __int64 v6; // r2@7 OVERLAPPED
  unsigned int *v7; // r1@8
  int (__fastcall *v8)(_DWORD *, void **, int); // r1@13
  unsigned int *v9; // r1@16
  unsigned int v10; // r0@18
  int v11; // r0@23
  unsigned int *v12; // r2@24
  unsigned int v13; // r1@26
  _QWORD *v15; // [sp+0h] [bp-60h]@13
  void (*v16)(void); // [sp+8h] [bp-58h]@7
  char v17; // [sp+10h] [bp-50h]@1
  int v18; // [sp+14h] [bp-4Ch]@1
  void *v19; // [sp+18h] [bp-48h]@1
  int v20; // [sp+1Ch] [bp-44h]@1
  int v21; // [sp+20h] [bp-40h]@1
  int v22; // [sp+24h] [bp-3Ch]@1
  void *v23; // [sp+28h] [bp-38h]@1
  int v24; // [sp+2Ch] [bp-34h]@1
  int v25; // [sp+30h] [bp-30h]@1
  int v26; // [sp+34h] [bp-2Ch]@1
  void *v27; // [sp+38h] [bp-28h]@1
  void *v28; // [sp+3Ch] [bp-24h]@1
  void *v29; // [sp+40h] [bp-20h]@1
  void *v30; // [sp+44h] [bp-1Ch]@1
  int v31; // [sp+48h] [bp-18h]@1
  char v32; // [sp+4Ch] [bp-14h]@1

  v1 = this;
  *((_BYTE *)this + 445) = 1;
  v19 = &unk_28898CC;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = &unk_28898CC;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = &unk_28898CC;
  v28 = &unk_28898CC;
  v29 = &unk_28898CC;
  v30 = &unk_28898CC;
  v31 = 1;
  v32 = 0;
  sub_15903F4(&v19, "disconnectionScreen.lockedSkin.title", (_BYTE *)0x24);
  sub_15903F4(&v23, "disconnectionScreen.lockedSkin", (_BYTE *)0x1E);
  sub_15903F4(&v28, "options.skin.change", (_BYTE *)0x13);
  sub_15903F4(&v30, "options.goBack", (_BYTE *)0xE);
  MinecraftScreenController::_getWeakPtrToThis<LateJoinPreGameScreenController>((int)&v17, (int)v1);
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
  v5 = operator new(8u);
  *v5 = v2;
  if ( HIDWORD(v2) )
    v7 = (unsigned int *)(HIDWORD(v2) + 8);
      {
        LODWORD(v6) = __ldrex(v7);
        HIDWORD(v6) = __strex(v6 + 1, v7);
      }
      while ( HIDWORD(v6) );
      ++*v7;
  v8 = sub_11BA81C;
  v15 = v5;
  LODWORD(v6) = sub_11BA6C8;
  *(_QWORD *)&v16 = *(__int64 *)((char *)&v6 - 4);
  LODWORD(v6) = &v15;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v19, v6);
  if ( v16 )
    v16();
    v9 = (unsigned int *)(HIDWORD(v2) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  v11 = v18;
    v12 = (unsigned int *)(v18 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (**)(void))(*(_DWORD *)v11 + 12))();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v19);
}


void __fastcall LateJoinPreGameScreenController::~LateJoinPreGameScreenController(LateJoinPreGameScreenController *this)
{
  LateJoinPreGameScreenController::~LateJoinPreGameScreenController(this);
}


signed int __fastcall LateJoinPreGameScreenController::_promptForPlatformConnection(LateJoinPreGameScreenController *this)
{
  LateJoinPreGameScreenController *v1; // r5@1
  signed int result; // r0@1
  __int64 v3; // kr00_8@2
  int v4; // r5@2
  unsigned int *v5; // r0@3
  unsigned int v6; // r1@5
  _QWORD *v7; // r0@8
  unsigned int *v8; // r1@9
  unsigned int v9; // r2@11
  __int64 v10; // r1@14
  unsigned int *v11; // r1@17
  unsigned int v12; // r0@19
  unsigned int *v13; // r2@25
  unsigned int v14; // r1@27
  _QWORD *v15; // [sp+0h] [bp-28h]@14
  void (*v16)(void); // [sp+8h] [bp-20h]@8
  char v17; // [sp+10h] [bp-18h]@2
  int v18; // [sp+14h] [bp-14h]@2

  v1 = this;
  result = MinecraftScreenModel::isPlatformNX(*((MinecraftScreenModel **)this + 95));
  if ( result == 1 )
  {
    MinecraftScreenController::_getWeakPtrToThis<LateJoinPreGameScreenController>((int)&v17, (int)v1);
    v3 = *(_QWORD *)&v17;
    v4 = *((_DWORD *)v1 + 95);
    if ( v18 )
    {
      v5 = (unsigned int *)(v18 + 8);
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
    v16 = 0;
    v7 = operator new(8u);
    *v7 = v3;
    if ( HIDWORD(v3) )
      v8 = (unsigned int *)(HIDWORD(v3) + 8);
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
        ++*v8;
    LODWORD(v10) = sub_11BA5F4;
    v15 = v7;
    HIDWORD(v10) = sub_11BA48C;
    *(_QWORD *)&v16 = v10;
    MinecraftScreenModel::navigateToPlatformNetworkConnectConfirmationScreen(v4, (int)&v15);
    if ( v16 )
      v16();
      v11 = (unsigned int *)(HIDWORD(v3) + 8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
    result = v18;
      v13 = (unsigned int *)(v18 + 8);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  }
  return result;
}


signed int __fastcall LateJoinPreGameScreenController::_tickAnimatingText(LateJoinPreGameScreenController *this, int a2)
{
  LateJoinPreGameScreenController *v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r0@1
  signed int v5; // r1@1
  int v6; // r6@1
  signed int v7; // r7@1
  int v8; // r1@5
  __int64 v10; // r0@6
  void *v17; // r0@19
  void *v18; // r0@20
  unsigned int *v19; // r2@21
  signed int v20; // r1@23
  void *v21; // r0@25
  signed int result; // r0@27
  unsigned int *v23; // r2@32
  signed int v24; // r1@34
  unsigned int *v25; // r2@36
  signed int v26; // r1@38
  int v27; // [sp+4h] [bp-3Ch]@25
  int v28; // [sp+8h] [bp-38h]@25
  int v29; // [sp+10h] [bp-30h]@19
  int v30; // [sp+14h] [bp-2Ch]@19
  char v31; // [sp+18h] [bp-28h]@13
  __int64 v32; // [sp+20h] [bp-20h]@6

  v2 = this;
  v3 = a2;
  v4 = *((_WORD *)this + 220);
  v5 = 0;
  v6 = *((_BYTE *)v2 + 446);
  v7 = 0;
  if ( v4 < 0x100 )
    v5 = 1;
  v4 = (unsigned __int8)v4;
  if ( (_BYTE)v4 )
    v4 = 1;
  v8 = v5 | v4;
  *((_BYTE *)v2 + 446) = v8;
  if ( v8 )
  {
    sub_15903C4(&v32);
    v10 = v32 - *((_QWORD *)v2 + 57);
    _CF = (unsigned int)v10 >= 0x3B9ACA01;
    LODWORD(v10) = 0;
    if ( !_CF )
      LODWORD(v10) = 1;
    if ( SHIDWORD(v10) < 0 )
      v7 = 1;
    if ( !HIDWORD(v10) )
      v7 = v10;
    if ( !v7 )
    {
      sub_15903C4(&v31);
      *((_QWORD *)v2 + 57) = *(_QWORD *)&v31;
      _R1 = 1717986919;
      _R0 = *((_DWORD *)v2 + 113) + 1;
      __asm { SMMUL.W         R1, R0, R1 }
      *((_DWORD *)v2 + 113) = _R0 - 5 * (((signed int)_R1 >> 1) + (_R1 >> 31));
      goto LABEL_18;
    }
    if ( v3 )
LABEL_18:
      if ( *((_BYTE *)v2 + 440) )
      {
        sub_1590164((void **)&v29, "xbox.signingin");
        I18n::get(&v30, (int **)&v29);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)v2 + 112,
          &v30);
        v17 = (void *)(v30 - 12);
        if ( (int *)(v30 - 12) != &dword_28898C0 )
        {
          v23 = (unsigned int *)(v30 - 4);
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
            j_j_j_j_j__ZdlPv_9_2(v17);
        }
        v18 = (void *)(v29 - 12);
        if ( (int *)(v29 - 12) == &dword_28898C0 )
          goto LABEL_27;
        v19 = (unsigned int *)(v29 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          goto LABEL_45;
      }
      else
        sub_1590164((void **)&v27, "lateJoinScreen.waitingForUserReady");
        I18n::get(&v28, (int **)&v27);
          &v28);
        v21 = (void *)(v28 - 12);
        if ( (int *)(v28 - 12) != &dword_28898C0 )
          v25 = (unsigned int *)(v28 - 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j_j__ZdlPv_9_2(v21);
        v18 = (void *)(v27 - 12);
        if ( (int *)(v27 - 12) == &dword_28898C0 )
        v19 = (unsigned int *)(v27 - 4);
      v20 = (*v19)--;
LABEL_45:
      if ( v20 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v18);
LABEL_27:
      sub_15903D4((const void **)v2 + 112, *((_DWORD *)v2 + 113), 46);
      return 1;
    v8 = *((_BYTE *)v2 + 446);
  }
  else if ( v6 )
    *((_DWORD *)v2 + 113) = 0;
    *((_DWORD *)v2 + 114) = 0;
    *((_DWORD *)v2 + 115) = 2147483648;
  result = 0;
  if ( v6 != v8 )
    result = 1;
  return result;
}


void __fastcall LateJoinPreGameScreenController::_promptForXBLSignIn(LateJoinPreGameScreenController *this)
{
  LateJoinPreGameScreenController *v1; // r4@1
  int v2; // r4@2
  const void **v3; // r0@2
  __int64 v4; // kr00_8@2
  unsigned int v5; // r1@2
  const void **v6; // r0@4
  void *v7; // r0@6
  __int64 v8; // r1@6
  void *v9; // r0@8
  void *v10; // r0@9
  char *v11; // r0@10
  void *v12; // r0@11
  void *v13; // r0@12
  void *v14; // r0@13
  void *v15; // r0@14
  void *v16; // r0@15
  void *v17; // r0@16
  unsigned int *v18; // r2@18
  signed int v19; // r1@20
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  unsigned int *v22; // r2@26
  signed int v23; // r1@28
  unsigned int *v24; // r2@30
  signed int v25; // r1@32
  unsigned int *v26; // r2@34
  signed int v27; // r1@36
  unsigned int *v28; // r2@38
  signed int v29; // r1@40
  unsigned int *v30; // r2@42
  signed int v31; // r1@44
  unsigned int *v32; // r2@46
  signed int v33; // r1@48
  unsigned int *v34; // r2@50
  signed int v35; // r1@52
  void *v36; // [sp+Ch] [bp-5Ch]@6
  __int64 v37; // [sp+14h] [bp-54h]@6
  int v38; // [sp+20h] [bp-48h]@6
  int v39; // [sp+28h] [bp-40h]@6
  int v40; // [sp+30h] [bp-38h]@2
  int v41; // [sp+34h] [bp-34h]@2
  int v42; // [sp+3Ch] [bp-2Ch]@2
  int v43; // [sp+40h] [bp-28h]@2
  unsigned int v44; // [sp+44h] [bp-24h]@2
  char *v45; // [sp+48h] [bp-20h]@6
  int v46; // [sp+50h] [bp-18h]@2

  v1 = this;
  if ( !MinecraftScreenModel::tryNavigateToXblFirstLaunchScreen(*((MinecraftScreenModel **)this + 95)) )
  {
    v2 = *((_DWORD *)v1 + 95);
    sub_1590164((void **)&v46, "xbox.signin");
    sub_1590164((void **)&v42, "xbox.genericsignin.line1");
    I18n::get(&v43, (int **)&v42);
    v3 = sub_1590224((const void **)&v43, "\n\n", 2u);
    v44 = (unsigned int)*v3;
    *v3 = &unk_28898CC;
    sub_1590164((void **)&v40, "xbox.genericsignin.line2");
    I18n::get(&v41, (int **)&v40);
    v4 = *(_QWORD *)(v44 - 12);
    v5 = *(_DWORD *)(v41 - 12) + v4;
    if ( v5 > HIDWORD(v4) && v5 <= *(_DWORD *)(v41 - 8) )
      v6 = sub_1590244((const void **)&v41, 0, v44, (_BYTE *)v4);
    else
      v6 = sub_1590394((const void **)&v44, (const void **)&v41);
    v45 = (char *)*v6;
    *v6 = &unk_28898CC;
    sub_1590164((void **)&v39, "xbox.genericsignin.line3");
    sub_1590164((void **)&v38, "textures/ui/train");
    v7 = operator new(1u);
    LODWORD(v8) = sub_11BA69A;
    v36 = v7;
    HIDWORD(v8) = nullsub_57;
    v37 = v8;
    MinecraftScreenModel::navigateToXblOptionalSignInScreen(v2, &v46, (int *)&v45, &v39, &v38, (int)&v36);
    if ( (_DWORD)v37 )
      ((void (*)(void))v37)();
    v9 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
    {
      v18 = (unsigned int *)(v38 - 4);
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
        j_j_j_j_j__ZdlPv_9_2(v9);
    }
    v10 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v39 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v10);
    v11 = v45 - 12;
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v45 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v11);
    v12 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v41 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v12);
    v13 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v40 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v13);
    v14 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v44 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v14);
    v15 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v43 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v15);
    v16 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v42 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v16);
    v17 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v46 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v17);
  }
}


void __fastcall LateJoinPreGameScreenController::_registerBindings(LateJoinPreGameScreenController *this)
{
  LateJoinPreGameScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  void *v8; // [sp+0h] [bp-50h]@5
  __int64 v9; // [sp+8h] [bp-48h]@5
  _DWORD *v10; // [sp+10h] [bp-40h]@5
  __int64 v11; // [sp+18h] [bp-38h]@5
  int v12; // [sp+20h] [bp-30h]@5
  void *v13; // [sp+24h] [bp-2Ch]@1
  __int64 v14; // [sp+2Ch] [bp-24h]@1
  _DWORD *v15; // [sp+34h] [bp-1Ch]@1
  __int64 v16; // [sp+3Ch] [bp-14h]@1
  char v17; // [sp+44h] [bp-Ch]@1

  v1 = this;
  StringHash::StringHash<char [24]>(&v17, (int)"#animating_text_visible");
  v2 = operator new(4u);
  LODWORD(v3) = sub_11BA3F4;
  *v2 = v1;
  HIDWORD(v3) = sub_11BA3E4;
  v15 = v2;
  v16 = v3;
  v13 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v14 = v4;
  ScreenController::bindBool((int)v1, (int *)&v17, (int)&v15, (int)&v13);
  if ( (_DWORD)v14 )
    ((void (*)(void))v14)();
  if ( (_DWORD)v16 )
    ((void (*)(void))v16)();
  v12 = 1312864144;
  v5 = operator new(4u);
  LODWORD(v6) = sub_11BA454;
  *v5 = v1;
  HIDWORD(v6) = sub_11BA42C;
  v10 = v5;
  v11 = v6;
  v8 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v9 = v7;
  ScreenController::bindString((int)v1, &v12, (int)&v10, (int)&v8);
  if ( (_DWORD)v9 )
    ((void (*)(void))v9)();
  if ( (_DWORD)v11 )
    ((void (*)(void))v11)();
}


void __fastcall LateJoinPreGameScreenController::_registerBindings(LateJoinPreGameScreenController *this)
{
  LateJoinPreGameScreenController::_registerBindings(this);
}


LateJoinPreGameScreenController *__fastcall LateJoinPreGameScreenController::~LateJoinPreGameScreenController(LateJoinPreGameScreenController *this)
{
  LateJoinPreGameScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E23CC;
  v2 = *((_DWORD *)this + 112);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v3);
  }
  v4 = (void (*)(void))*((_DWORD *)v1 + 108);
  if ( v4 )
    v4();
  MinecraftScreenController::~MinecraftScreenController(v1);
  return v1;
}


int __fastcall LateJoinPreGameScreenController::tick(LateJoinPreGameScreenController *this)
{
  LateJoinPreGameScreenController *v1; // r4@1
  int v2; // r5@1
  int v3; // r0@1
  int v4; // r6@1
  signed int v5; // r0@1
  int v6; // r1@1

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  v3 = LateJoinPreGameScreenController::_tickUserState(v1);
  v4 = v3;
  v5 = LateJoinPreGameScreenController::_tickAnimatingText(v1, v3);
  v6 = v2 | 1;
  if ( v5 )
    v2 |= 1u;
  if ( v4 )
    v2 = v6;
  return v2;
}


signed int __fastcall LateJoinPreGameScreenController::_tickUserState(LateJoinPreGameScreenController *this)
{
  LateJoinPreGameScreenController *v1; // r5@1
  signed int v2; // r4@2
  unsigned int v4; // r6@4
  int v5; // r0@7
  MinecraftScreenModel *v6; // r0@9
  int v7; // [sp+0h] [bp-30h]@20
  void (*v8)(void); // [sp+8h] [bp-28h]@20
  char v9; // [sp+10h] [bp-20h]@17
  void (*v10)(void); // [sp+18h] [bp-18h]@17

  v1 = this;
  if ( *((_BYTE *)this + 445) )
    return 0;
  v4 = MinecraftScreenModel::isUserReady(*((MinecraftScreenModel **)this + 95));
  if ( v4 == *((_BYTE *)v1 + 441) )
  {
    v2 = 0;
  }
  else
    *((_BYTE *)v1 + 441) = v4;
    v2 = 1;
  v5 = MinecraftScreenModel::signinInProgress(*((MinecraftScreenModel **)v1 + 95));
  if ( v5 != *((_BYTE *)v1 + 440) )
    *((_BYTE *)v1 + 440) = v5;
  v6 = (MinecraftScreenModel *)*((_DWORD *)v1 + 95);
  if ( v4 == 1 )
    if ( !MinecraftScreenModel::isSignedInToXBL(v6)
      && MinecraftScreenModel::canSignInToXBL(*((MinecraftScreenModel **)v1 + 95)) )
    {
      if ( *((_BYTE *)v1 + 440) )
        return v2;
      if ( MinecraftScreenModel::needPlatformConnectionBeforeXBLSignIn(*((MinecraftScreenModel **)v1 + 95)) != 1
        || MinecraftScreenModel::isUserConnectedToPlatform(*((MinecraftScreenModel **)v1 + 95)) )
      {
        if ( MinecraftScreenModel::requiresXBLSigninToPlay(*((MinecraftScreenModel **)v1 + 95)) == 1 )
        {
          if ( !*((_BYTE *)v1 + 444) )
          {
            *((_BYTE *)v1 + 444) = 1;
            v10 = 0;
            MinecraftScreenController::_attemptSignIn((int)v1, (int)&v9);
            if ( v10 )
              v10();
            return v2;
          }
        }
        else if ( !*((_BYTE *)v1 + 443) )
          *((_BYTE *)v1 + 443) = 1;
          LateJoinPreGameScreenController::_promptForXBLSignIn(v1);
          return v2;
      }
      else if ( *((_BYTE *)v1 + 442) )
        LateJoinPreGameScreenController::_promptForPlatformConnection(v1);
    }
    if ( MinecraftScreenModel::isPrimaryLevelMultiplayer(*((MinecraftScreenModel **)v1 + 95)) != 1
      || MinecraftScreenModel::isValidMultiplayerSkin(*((MinecraftScreenModel **)v1 + 95)) )
      MinecraftScreenModel::leaveScreen(*((MinecraftScreenModel **)v1 + 95));
      if ( *((_DWORD *)v1 + 108) )
        (*((void (__fastcall **)(_DWORD))v1 + 109))((char *)v1 + 424);
    else
      LateJoinPreGameScreenController::_warnLockedSkin(v1);
  else if ( !MinecraftScreenModel::isUserWaitingForPlatformConnection(v6) )
    v8 = 0;
    MinecraftScreenController::_attemptConnect((int)v1, (int)&v7);
    if ( v8 )
      v8();
  return v2;
}


int __fastcall LateJoinPreGameScreenController::LateJoinPreGameScreenController(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  void (__fastcall *v13)(int, int, signed int); // r3@21
  int v15; // [sp+0h] [bp-20h]@1
  int v16; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  v15 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v16 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  MinecraftScreenController::MinecraftScreenController(v3, (MinecraftScreenModel **)&v15);
  v8 = v16;
  if ( v16 )
    v9 = (unsigned int *)(v16 + 4);
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
  *(_DWORD *)v3 = &off_26E23CC;
  *(_DWORD *)(v3 + 432) = 0;
  v13 = *(void (__fastcall **)(int, int, signed int))(v4 + 8);
  if ( v13 )
    v13(v3 + 424, v4, 2);
    *(_DWORD *)(v3 + 436) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v3 + 432) = *(_DWORD *)(v4 + 8);
  *(_BYTE *)(v3 + 440) = 0;
  *(_BYTE *)(v3 + 441) = 0;
  *(_BYTE *)(v3 + 442) = 1;
  *(_DWORD *)(v3 + 443) = 0;
  *(_DWORD *)(v3 + 448) = &unk_28898CC;
  *(_DWORD *)(v3 + 452) = 0;
  *(_DWORD *)(v3 + 456) = 0;
  *(_DWORD *)(v3 + 460) = 0;
  MinecraftScreenController::_setExitBehavior(v3, 3);
  LateJoinPreGameScreenController::_registerBindings((LateJoinPreGameScreenController *)v3);
  return v3;
}
