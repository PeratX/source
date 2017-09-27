

void __fastcall RealmsSettingsScreenController::_uploadWorld(RealmsSettingsScreenController *this, int a2)
{
  int v2; // r4@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v2 = *((_DWORD *)this + 106);
  Util::toString<long long,(void *)0,(void *)0>((void **)&v6, a2, *((_QWORD *)this + 65));
  MainMenuScreenModel::navigateToLocalWorldPickerScreen(v2, &v6);
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
      j_j_j_j__ZdlPv_9(v3);
  }
}


void __fastcall RealmsSettingsScreenController::_registerBindings(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController::_registerBindings(this);
}


int __fastcall RealmsSettingsScreenController::_setAllowCheatsWithConfirmation(RealmsSettingsScreenController *this, int a2)
{
  RealmsSettingsScreenController *v2; // r5@1
  __int64 v3; // kr00_8@2
  unsigned int *v4; // r0@3
  unsigned int v5; // r1@5
  int result; // r0@7
  _BYTE *v7; // r0@9
  unsigned int *v8; // r1@10
  unsigned int v9; // r2@12
  __int64 v10; // r1@15
  unsigned int *v11; // r1@18
  unsigned int v12; // r0@20
  unsigned int *v13; // r2@26
  unsigned int v14; // r1@28
  _BYTE *v15; // [sp+0h] [bp-28h]@15
  void (*v16)(void); // [sp+8h] [bp-20h]@9
  char v17; // [sp+10h] [bp-18h]@2
  int v18; // [sp+14h] [bp-14h]@2

  v2 = this;
  if ( a2 == 1 )
  {
    MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v17, (int)this);
    v3 = *(_QWORD *)&v17;
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
    v7 = operator new(0xCu);
    *(_QWORD *)v7 = v3;
    if ( HIDWORD(v3) )
      v8 = (unsigned int *)(HIDWORD(v3) + 8);
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
        ++*v8;
    LODWORD(v10) = sub_13E6E74;
    v7[8] = 1;
    HIDWORD(v10) = sub_13E6CE0;
    v15 = v7;
    *(_QWORD *)&v16 = v10;
    SettingsScreenControllerBase::confirmationNoAchievementsDialog((int)v2, (int)&v15);
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
  else
    result = 0;
    *((_BYTE *)v2 + 644) = 0;
  return result;
}


void __fastcall RealmsSettingsScreenController::_getMaxPlayerLabelText(RealmsSettingsScreenController *this, int a2)
{
  int v2; // r5@1
  Util *v3; // r4@1
  __int64 v4; // r2@1
  char *v5; // r0@1
  void *v6; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+8h] [bp-28h]@1
  char *v12; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v11, "realmsSettingsScreen.maxPlayersLabelFormat");
  I18n::get((int *)&v12, (int **)&v11);
  LODWORD(v4) = *(_DWORD *)(v2 + 556);
  Util::format(v3, v12, v4);
  v5 = v12 - 12;
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


signed int __fastcall RealmsSettingsScreenController::_hasWorldInfoChanged(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r1@1
  size_t v4; // r2@1
  signed int result; // r0@5

  v1 = this;
  v2 = (_DWORD *)*((_DWORD *)this + 151);
  v3 = (_DWORD *)*((_DWORD *)v1 + 133);
  v4 = *(v2 - 3);
  if ( v4 == *(v3 - 3)
    && !memcmp(v2, v3, v4)
    && *((_DWORD *)v1 + 160) == *((_DWORD *)v1 + 142)
    && *((_DWORD *)v1 + 159) == *((_DWORD *)v1 + 141) )
  {
    result = 0;
    if ( *((_BYTE *)v1 + 644) != *((_BYTE *)v1 + 572) )
      result = 1;
  }
  else
    result = 1;
  return result;
}


RealmsSettingsScreenController *__fastcall RealmsSettingsScreenController::~RealmsSettingsScreenController(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r1@15
  void *v8; // r0@15
  int v9; // r1@16
  void *v10; // r0@16
  int v11; // r1@17
  void *v12; // r0@17
  void *v13; // r0@18
  unsigned int *v15; // r2@21
  signed int v16; // r1@23
  unsigned int *v17; // r2@25
  signed int v18; // r1@27
  unsigned int *v19; // r2@29
  signed int v20; // r1@31

  v1 = this;
  *(_DWORD *)this = &off_26E7E20;
  MinecraftScreenModel::abortAllRealmsRequests(*((MinecraftScreenModel **)this + 106));
  RealmsSettingsScreenController::RealmsVersionState::~RealmsVersionState((RealmsSettingsScreenController *)((char *)v1 + 712));
  v2 = *((_DWORD *)v1 + 175);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
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
  v7 = *((_DWORD *)v1 + 173);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v7 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = *((_DWORD *)v1 + 168);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v9 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = *((_DWORD *)v1 + 167);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v11 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  Realms::World::~World((RealmsSettingsScreenController *)((char *)v1 + 592));
  Realms::World::~World((RealmsSettingsScreenController *)((char *)v1 + 520));
  v13 = (void *)*((_DWORD *)v1 + 129);
  if ( v13 )
    operator delete(v13);
  *((_DWORD *)v1 + 129) = 0;
  SettingsScreenControllerBase::~SettingsScreenControllerBase(v1);
  return v1;
}


void __fastcall RealmsSettingsScreenController::_extendConsumableRealmHandler(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController::_extendConsumableRealmHandler(this);
}


int __fastcall RealmsSettingsScreenController::_showErrorPopupAndExitScreenAfterDismissed(int a1, int *a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r6@1
  int *v5; // r5@1
  __int64 v6; // kr00_8@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  _QWORD *v9; // r0@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r2@10
  __int64 v12; // r1@13
  unsigned int *v13; // r1@16
  unsigned int v14; // r0@18
  void *v15; // r0@23
  void *v16; // r0@24
  int result; // r0@25
  unsigned int *v18; // r2@26
  unsigned int v19; // r1@28
  unsigned int *v20; // r2@34
  signed int v21; // r1@36
  unsigned int *v22; // r2@38
  signed int v23; // r1@40
  _QWORD *v24; // [sp+4h] [bp-34h]@13
  void (*v25)(void); // [sp+Ch] [bp-2Ch]@7
  int v26; // [sp+14h] [bp-24h]@1
  int v27; // [sp+18h] [bp-20h]@1
  char v28; // [sp+1Ch] [bp-1Ch]@1
  int v29; // [sp+20h] [bp-18h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v28, a1);
  sub_21E8AF4(&v27, v4);
  sub_21E8AF4(&v26, v5);
  v6 = *(_QWORD *)&v28;
  if ( v29 )
  {
    v7 = (unsigned int *)(v29 + 8);
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
  v25 = 0;
  v9 = operator new(8u);
  *v9 = v6;
  if ( HIDWORD(v6) )
    v10 = (unsigned int *)(HIDWORD(v6) + 8);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  LODWORD(v12) = sub_13E0074;
  v24 = v9;
  HIDWORD(v12) = sub_13DFF38;
  *(_QWORD *)&v25 = v12;
  RealmsSettingsScreenController::_showErrorPopup(v3, &v27, &v26, (int)&v24);
  if ( v25 )
    v25();
    v13 = (unsigned int *)(HIDWORD(v6) + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v6) + 12))(HIDWORD(v6));
  v15 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v26 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v27 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  result = v29;
    v18 = (unsigned int *)(v29 + 8);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall RealmsSettingsScreenController::_getDurationLabelText(RealmsSettingsScreenController *this, int a2)
{
  int v2; // r5@1
  Util *v3; // r4@1
  __int64 v4; // r2@2
  char *v5; // r0@2
  void *v6; // r0@3
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  __int64 v9; // r2@8
  char *v10; // r0@10
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  int v15; // [sp+8h] [bp-28h]@2
  char *v16; // [sp+Ch] [bp-24h]@2
  int v17; // [sp+14h] [bp-1Ch]@8
  char *v18; // [sp+18h] [bp-18h]@8

  v2 = a2;
  v3 = this;
  if ( *(_DWORD *)(a2 + 664) )
  {
    sub_21E94B4((void **)&v15, "realmsSettingsScreen.subscriptionLabelFormat");
    I18n::get((int *)&v16, (int **)&v15);
    LODWORD(v4) = *(_DWORD *)(v2 + 676);
    Util::format(v3, v16, v4);
    v5 = v16 - 12;
    if ( (int *)(v16 - 12) != &dword_28898C0 )
    {
      v11 = (unsigned int *)(v16 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
    }
    v6 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v15 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        goto LABEL_26;
LABEL_25:
      v8 = (*v7)--;
LABEL_26:
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
      return;
  }
  else
    sub_21E94B4((void **)&v17, "realmsSettingsScreen.durationLabelFormat");
    I18n::get((int *)&v18, (int **)&v17);
    LODWORD(v9) = *(_DWORD *)(v2 + 680);
    if ( (signed int)v9 <= 0 )
      LODWORD(v9) = 0;
    Util::format(v3, v18, v9);
    v10 = v18 - 12;
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v18 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v6 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v17 - 4);
      goto LABEL_25;
}


RealmsSettingsScreenController::RealmsVersionState *__fastcall RealmsSettingsScreenController::RealmsVersionState::~RealmsVersionState(RealmsSettingsScreenController::RealmsVersionState *this)
{
  RealmsSettingsScreenController::RealmsVersionState *v1; // r11@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int *v10; // r0@20
  unsigned __int64 *v11; // r7@25
  unsigned int *v12; // r2@27
  signed int v13; // r1@29
  unsigned __int64 *v14; // r6@35
  int v15; // r1@35
  void *v16; // r0@35
  char *v17; // r0@37
  int v18; // r1@40
  void *v19; // r0@40
  unsigned int *v21; // r2@42
  signed int v22; // r1@44

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 60);
  if ( v2 != v3 )
  {
    do
    {
      v8 = *(_DWORD *)(v2 + 4);
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v8 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v10 = (int *)(*(_DWORD *)v2 - 12);
      if ( v10 != &dword_28898C0 )
        v6 = (unsigned int *)(*(_DWORD *)v2 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v2 += 16;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 15);
  }
  if ( v2 )
    operator delete((void *)v2);
  v11 = (unsigned __int64 *)*((_DWORD *)v1 + 10);
  while ( v11 )
    v14 = v11;
    v15 = *v11 >> 32;
    v11 = (unsigned __int64 *)*v11;
    v16 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v15 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    operator delete(v14);
  _aeabi_memclr4(*((_QWORD *)v1 + 4), 4 * (*((_QWORD *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 10) = 0;
  *((_DWORD *)v1 + 11) = 0;
  v17 = (char *)*((_DWORD *)v1 + 8);
  if ( v17 && (char *)v1 + 56 != v17 )
    operator delete(v17);
  Realms::RealmsConfigInfo::~RealmsConfigInfo((RealmsSettingsScreenController::RealmsVersionState *)((char *)v1 + 16));
  v18 = *((_DWORD *)v1 + 3);
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  return v1;
}


void __fastcall RealmsSettingsScreenController::_getCurrentRealmsVersionReference(RealmsSettingsScreenController *this, int a2)
{
  RealmsSettingsScreenController::_getCurrentRealmsVersionReference(this, a2);
}


ModalScreenData *__fastcall RealmsSettingsScreenController::_confirmCloseRealm(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r5@1
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
  sub_21E8190(&v23, "realmsSettingsScreen.closeRealmMessage", (_BYTE *)0x26);
  sub_21E8190(&v19, "realmsSettingsScreen.closeRealmTitle", (_BYTE *)0x24);
  sub_21E8190(&v28, "gui.yes", (_BYTE *)7);
  sub_21E8190(&v30, "gui.no", (_BYTE *)6);
  MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v17, (int)v1);
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
  v8 = sub_13E57F8;
  v15 = v5;
  LODWORD(v6) = sub_13E56A8;
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


int __fastcall RealmsSettingsScreenController::_saveAndJoinRealm(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r5@1
  __int64 v2; // kr00_8@1
  RealmsWhitelistScreenController *v3; // r5@1
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
  MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v17, (int)this);
  v2 = *(_QWORD *)&v17;
  v3 = (RealmsWhitelistScreenController *)*((_DWORD *)v1 + 174);
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
  LODWORD(v9) = sub_13E2BF0;
  v15 = v6;
  HIDWORD(v9) = sub_13E2A70;
  *(_QWORD *)&v16 = v9;
  RealmsWhitelistScreenController::sendInvites(v3, (int)&v15);
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


int __fastcall RealmsSettingsScreenController::tick(RealmsSettingsScreenController *this)
{
  int result; // r0@2

  if ( *((_BYTE *)this + 709) )
  {
    *((_BYTE *)this + 709) = 0;
    result = 1;
  }
  else
    result = j_j_j__ZN25MinecraftScreenController4tickEv_0(this);
  return result;
}


int __fastcall RealmsSettingsScreenController::_saveSettingsAndJoinRealm(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r5@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  _QWORD *v5; // r0@7
  unsigned int *v6; // r1@8
  unsigned int v7; // r2@10
  __int64 v8; // r1@13
  unsigned int *v9; // r1@16
  unsigned int v10; // r0@18
  int result; // r0@23
  unsigned int *v12; // r2@24
  unsigned int v13; // r1@26
  _QWORD *v14; // [sp+0h] [bp-28h]@13
  void (*v15)(void); // [sp+8h] [bp-20h]@7
  char v16; // [sp+10h] [bp-18h]@1
  int v17; // [sp+14h] [bp-14h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v16, (int)this);
  v2 = *(_QWORD *)&v16;
  if ( v17 )
  {
    v3 = (unsigned int *)(v17 + 8);
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
  v15 = 0;
  v5 = operator new(8u);
  *v5 = v2;
  if ( HIDWORD(v2) )
    v6 = (unsigned int *)(HIDWORD(v2) + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
      ++*v6;
  LODWORD(v8) = sub_13E2FF0;
  v14 = v5;
  HIDWORD(v8) = sub_13E2EB8;
  *(_QWORD *)&v15 = v8;
  RealmsSettingsScreenController::_saveSettings((int)v1, 1, (int)&v14);
  if ( v15 )
    v15();
    v9 = (unsigned int *)(HIDWORD(v2) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  result = v17;
    v12 = (unsigned int *)(v17 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall RealmsSettingsScreenController::_getRealmsVersionsGridSize(int result, int a2)
{
  int v2; // r1@1

  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  v2 = ((signed int)((*(_QWORD *)*(_DWORD *)(a2 + 784) >> 32) - *(_QWORD *)*(_DWORD *)(a2 + 784)) >> 4)
     + -10 * *(_DWORD *)(a2 + 712);
  if ( v2 > 10 )
    v2 = 10;
  if ( v2 >= 1 )
  {
    *(_DWORD *)result = 1;
    *(_DWORD *)(result + 4) = v2;
  }
  return result;
}


void __fastcall RealmsSettingsScreenController::_extendConsumableRealmHandler(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r4@1
  __int64 v2; // r1@2
  void *v3; // r0@4
  void *v4; // r0@5
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  char v7; // r6@10
  int v8; // r8@10
  signed int v9; // r7@10
  signed int v10; // r1@10
  void *v11; // r0@12
  void *v12; // r0@13
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  unsigned int *v15; // r2@20
  signed int v16; // r1@22
  unsigned int *v17; // r2@24
  signed int v18; // r1@26
  int v19; // [sp+0h] [bp-50h]@10
  int v20; // [sp+4h] [bp-4Ch]@10
  int v21; // [sp+8h] [bp-48h]@10
  int v22; // [sp+Ch] [bp-44h]@12
  char v23; // [sp+10h] [bp-40h]@12
  char v24; // [sp+11h] [bp-3Fh]@12
  void *v25; // [sp+14h] [bp-3Ch]@2
  __int64 v26; // [sp+1Ch] [bp-34h]@2
  int v27; // [sp+28h] [bp-28h]@2
  int v28; // [sp+30h] [bp-20h]@2

  v1 = this;
  if ( *((_DWORD *)this + 170) <= 360 )
  {
    v7 = *((_BYTE *)this + 552);
    v8 = *((_DWORD *)this + 106);
    v9 = *((_DWORD *)this + 139);
    v19 = 1;
    sub_21E8AF4(&v20, (int *)this + 151);
    sub_21E8AF4(&v21, (int *)v1 + 167);
    v10 = 0;
    if ( v9 > 5 )
      v10 = 1;
    v22 = v10;
    v23 = v7;
    v24 = 0;
    MainMenuScreenModel::navigateToRealmsCreateScreen(v8, (int)&v19);
    v11 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v21 - 4);
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
        j_j_j_j__ZdlPv_9(v11);
    }
    v12 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v20 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    *((_BYTE *)v1 + 685) = 1;
  }
  else
    sub_21E94B4((void **)&v28, "realmsCreateScreen.extendRealms.title");
    sub_21E94B4((void **)&v27, "realmsCreateScreen.extendRealms.content");
    v25 = operator new(1u);
    LODWORD(v2) = ZNSt14_Function_base13_Base_managerIZN30RealmsSettingsScreenController15_showErrorPopupESsSsSt8functionIFvbEEEd_UlbE_E10_M_managerERSt9_Any_dataRKS7_St18_Manager_operation;
    HIDWORD(v2) = ZNSt17_Function_handlerIFvbEZN30RealmsSettingsScreenController15_showErrorPopupESsSsSt8functionIS0_EEd_UlbE_E9_M_invokeERKSt9_Any_datab;
    v26 = v2;
    RealmsSettingsScreenController::_showErrorPopup((int)v1, &v28, &v27, (int)&v25);
    if ( (_DWORD)v26 )
      ((void (*)(void))v26)();
    v3 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v27 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v3);
    v4 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v5 = (unsigned int *)(v28 - 4);
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
        v6 = (*v5)--;
      if ( v6 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
}


RealmsSettingsScreenController::RealmsVersionState *__fastcall RealmsSettingsScreenController::RealmsVersionState::RealmsVersionState(RealmsSettingsScreenController::RealmsVersionState *this)
{
  RealmsSettingsScreenController::RealmsVersionState *v1; // r4@1
  double v2; // r0@1
  unsigned int v3; // r0@1
  int v4; // r5@3
  void *v5; // r7@3
  __int64 v6; // r0@4

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = -1;
  *((_BYTE *)this + 8) = 0;
  sub_21E8AF4((int *)this + 3, (int *)&Util::EMPTY_STRING);
  *((_DWORD *)v1 + 4) = &unk_28898CC;
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = 0;
  *((_DWORD *)v1 + 7) = 0;
  *((_DWORD *)v1 + 10) = 0;
  *((_DWORD *)v1 + 11) = 0;
  *((_DWORD *)v1 + 12) = 1065353216;
  LODWORD(v2) = (char *)v1 + 48;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v3 = sub_21E6254(v2);
  *((_DWORD *)v1 + 9) = v3;
  if ( v3 == 1 )
  {
    *((_DWORD *)v1 + 14) = 0;
    v5 = (char *)v1 + 56;
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  HIDWORD(v6) = (char *)v1 + 20;
  LODWORD(v6) = 0;
  *((_DWORD *)v1 + 8) = v5;
  *((_DWORD *)v1 + 15) = 0;
  *((_DWORD *)v1 + 16) = 0;
  *(_QWORD *)((char *)v1 + 68) = v6;
  return v1;
}


void *__fastcall RealmsSettingsScreenController::_getRealmsVersionBranchName(RealmsSettingsScreenController *this, int a2, int a3)
{
  int v3; // r2@1
  __int64 v4; // kr00_8@2
  void *result; // r0@3

  v3 = a3 + 10 * *(_DWORD *)(a2 + 712);
  if ( v3 < 0 || (v4 = *(_QWORD *)*(_DWORD *)(a2 + 784), v3 >= (HIDWORD(v4) - (signed int)v4) >> 4) )
    result = sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  else
    result = sub_21E8AF4((int *)this, (int *)(v4 + 16 * v3));
  return result;
}


void __fastcall RealmsSettingsScreenController::_registerEventHandlers(RealmsSettingsScreenController *this)
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
  int v38; // r5@28
  _DWORD *v39; // r0@28
  __int64 v40; // r1@28
  void *v41; // r0@30
  int v42; // r5@31
  _DWORD *v43; // r0@31
  __int64 v44; // r1@31
  void *v45; // r0@33
  int v46; // r5@34
  _DWORD *v47; // r0@34
  __int64 v48; // r1@34
  void *v49; // r0@36
  int v50; // r5@37
  _DWORD *v51; // r0@37
  __int64 v52; // r1@37
  void *v53; // r0@39
  int v54; // r5@40
  _DWORD *v55; // r0@40
  __int64 v56; // r1@40
  void *v57; // r0@42
  int v58; // r5@43
  _DWORD *v59; // r0@43
  __int64 v60; // r1@43
  void *v61; // r0@45
  int v62; // r5@46
  _DWORD *v63; // r0@46
  __int64 v64; // r1@46
  void *v65; // r0@48
  _DWORD *v66; // r0@49
  __int64 v67; // r1@49
  _DWORD *v68; // r0@49
  __int64 v69; // r1@49
  _DWORD *v70; // r0@49
  __int64 v71; // r1@49
  void *v72; // r0@55
  void *v73; // r0@56
  void *v74; // r0@57
  double v75; // r0@58
  void *v76; // r0@58
  void *v77; // r0@59
  void *v78; // r0@60
  void *v79; // r0@61
  _DWORD *v80; // r0@62
  __int64 v81; // r1@62
  _DWORD *v82; // r0@62
  __int64 v83; // r2@62
  void *v84; // r0@66
  void *v85; // r0@67
  double v86; // r0@68
  void *v87; // r0@68
  void *v88; // r0@69
  void *v89; // r0@70
  double v90; // r0@71
  char *v91; // r0@71
  char *v92; // r0@72
  char *v93; // r0@73
  char *v94; // r0@74
  char *v95; // r0@75
  char *v96; // r0@76
  _DWORD *v97; // r0@77
  __int64 v98; // r1@77
  _DWORD *v99; // r0@77
  __int64 v100; // r1@77
  void *v101; // r0@81
  void *v102; // r0@82
  int v103; // r5@83
  unsigned int *v104; // r2@85
  signed int v105; // r1@87
  void *v106; // r7@93
  int v107; // r1@93
  void *v108; // r0@93
  unsigned __int64 *v109; // r7@98
  unsigned int *v110; // r2@100
  signed int v111; // r1@102
  unsigned __int64 *v112; // r5@108
  int v113; // r1@108
  void *v114; // r0@108
  unsigned __int64 *v115; // r6@113
  unsigned int *v116; // r2@115
  signed int v117; // r1@117
  unsigned __int64 *v118; // r5@123
  int v119; // r1@123
  void *v120; // r0@123
  unsigned int *v121; // r2@129
  signed int v122; // r1@131
  unsigned int *v123; // r2@133
  signed int v124; // r1@135
  unsigned int *v125; // r2@137
  signed int v126; // r1@139
  unsigned int *v127; // r2@141
  signed int v128; // r1@143
  unsigned int *v129; // r2@145
  signed int v130; // r1@147
  unsigned int *v131; // r2@149
  signed int v132; // r1@151
  unsigned int *v133; // r2@153
  signed int v134; // r1@155
  unsigned int *v135; // r2@157
  signed int v136; // r1@159
  unsigned int *v137; // r2@161
  signed int v138; // r1@163
  unsigned int *v139; // r2@165
  signed int v140; // r1@167
  unsigned int *v141; // r2@169
  signed int v142; // r1@171
  unsigned int *v143; // r2@173
  signed int v144; // r1@175
  unsigned int *v145; // r2@177
  signed int v146; // r1@179
  unsigned int *v147; // r2@181
  signed int v148; // r1@183
  unsigned int *v149; // r2@185
  signed int v150; // r1@187
  unsigned int *v151; // r2@189
  signed int v152; // r1@191
  unsigned int *v153; // r2@193
  signed int v154; // r1@195
  unsigned int *v155; // r2@197
  signed int v156; // r1@199
  unsigned int *v157; // r2@201
  signed int v158; // r1@203
  unsigned int *v159; // r2@205
  signed int v160; // r1@207
  unsigned int *v161; // r2@209
  signed int v162; // r1@211
  unsigned int *v163; // r2@213
  signed int v164; // r1@215
  unsigned int *v165; // r2@217
  signed int v166; // r1@219
  unsigned int *v167; // r2@221
  signed int v168; // r1@223
  unsigned int *v169; // r2@225
  signed int v170; // r1@227
  unsigned int *v171; // r2@229
  signed int v172; // r1@231
  unsigned int *v173; // r2@233
  signed int v174; // r1@235
  unsigned int *v175; // r2@237
  signed int v176; // r1@239
  unsigned int *v177; // r2@241
  signed int v178; // r1@243
  unsigned int *v179; // r2@245
  signed int v180; // r1@247
  unsigned int *v181; // r2@249
  signed int v182; // r1@251
  unsigned int *v183; // r2@253
  signed int v184; // r1@255
  unsigned int *v185; // r2@257
  signed int v186; // r1@259
  unsigned int *v187; // r2@261
  signed int v188; // r1@263
  unsigned int *v189; // r2@265
  signed int v190; // r1@267
  unsigned int *v191; // r2@269
  signed int v192; // r1@271
  _DWORD *v193; // [sp+1Ch] [bp-364h]@77
  __int64 v194; // [sp+24h] [bp-35Ch]@77
  _DWORD *v195; // [sp+2Ch] [bp-354h]@77
  __int64 v196; // [sp+34h] [bp-34Ch]@77
  int v197; // [sp+40h] [bp-340h]@77
  int v198; // [sp+48h] [bp-338h]@77
  char *v199; // [sp+58h] [bp-328h]@71
  char *v200; // [sp+5Ch] [bp-324h]@71
  char *v201; // [sp+60h] [bp-320h]@71
  int v202; // [sp+64h] [bp-31Ch]@71
  char *v203; // [sp+68h] [bp-318h]@71
  int v204; // [sp+6Ch] [bp-314h]@71
  char *v205; // [sp+70h] [bp-310h]@71
  int v206; // [sp+74h] [bp-30Ch]@71
  char *v207; // [sp+78h] [bp-308h]@71
  void *ptr; // [sp+7Ch] [bp-304h]@71
  int v209; // [sp+80h] [bp-300h]@95
  int v210; // [sp+84h] [bp-2FCh]@83
  int v211; // [sp+88h] [bp-2F8h]@95
  int v212; // [sp+94h] [bp-2ECh]@96
  int v213; // [sp+A4h] [bp-2DCh]@68
  int v214; // [sp+A8h] [bp-2D8h]@68
  int v215; // [sp+ACh] [bp-2D4h]@68
  int v216; // [sp+B0h] [bp-2D0h]@68
  int v217; // [sp+B4h] [bp-2CCh]@68
  int v218; // [sp+B8h] [bp-2C8h]@68
  void *v219; // [sp+BCh] [bp-2C4h]@68
  int v220; // [sp+C0h] [bp-2C0h]@110
  unsigned __int64 *v221; // [sp+C4h] [bp-2BCh]@98
  int v222; // [sp+C8h] [bp-2B8h]@110
  int v223; // [sp+D4h] [bp-2ACh]@111
  _DWORD *v224; // [sp+D8h] [bp-2A8h]@62
  __int64 v225; // [sp+E0h] [bp-2A0h]@62
  _DWORD *v226; // [sp+E8h] [bp-298h]@62
  __int64 v227; // [sp+F0h] [bp-290h]@62
  int v228; // [sp+FCh] [bp-284h]@62
  int v229; // [sp+104h] [bp-27Ch]@62
  int v230; // [sp+114h] [bp-26Ch]@58
  int v231; // [sp+118h] [bp-268h]@58
  int v232; // [sp+11Ch] [bp-264h]@58
  int v233; // [sp+120h] [bp-260h]@58
  int v234; // [sp+124h] [bp-25Ch]@58
  int v235; // [sp+128h] [bp-258h]@58
  int v236; // [sp+12Ch] [bp-254h]@58
  int v237; // [sp+130h] [bp-250h]@58
  void *v238; // [sp+134h] [bp-24Ch]@58
  int v239; // [sp+138h] [bp-248h]@125
  unsigned __int64 *v240; // [sp+13Ch] [bp-244h]@113
  int v241; // [sp+140h] [bp-240h]@125
  int v242; // [sp+14Ch] [bp-234h]@126
  _DWORD *v243; // [sp+150h] [bp-230h]@49
  __int64 v244; // [sp+158h] [bp-228h]@49
  _DWORD *v245; // [sp+160h] [bp-220h]@49
  __int64 v246; // [sp+168h] [bp-218h]@49
  _DWORD *v247; // [sp+170h] [bp-210h]@49
  __int64 v248; // [sp+178h] [bp-208h]@49
  int v249; // [sp+184h] [bp-1FCh]@49
  int v250; // [sp+18Ch] [bp-1F4h]@49
  int v251; // [sp+194h] [bp-1ECh]@49
  _DWORD *v252; // [sp+198h] [bp-1E8h]@46
  __int64 v253; // [sp+1A0h] [bp-1E0h]@46
  int v254; // [sp+1ACh] [bp-1D4h]@46
  _DWORD *v255; // [sp+1B0h] [bp-1D0h]@43
  __int64 v256; // [sp+1B8h] [bp-1C8h]@43
  int v257; // [sp+1C4h] [bp-1BCh]@43
  _DWORD *v258; // [sp+1C8h] [bp-1B8h]@40
  __int64 v259; // [sp+1D0h] [bp-1B0h]@40
  int v260; // [sp+1DCh] [bp-1A4h]@40
  _DWORD *v261; // [sp+1E0h] [bp-1A0h]@37
  __int64 v262; // [sp+1E8h] [bp-198h]@37
  int v263; // [sp+1F4h] [bp-18Ch]@37
  _DWORD *v264; // [sp+1F8h] [bp-188h]@34
  __int64 v265; // [sp+200h] [bp-180h]@34
  int v266; // [sp+20Ch] [bp-174h]@34
  _DWORD *v267; // [sp+210h] [bp-170h]@31
  __int64 v268; // [sp+218h] [bp-168h]@31
  int v269; // [sp+224h] [bp-15Ch]@31
  _DWORD *v270; // [sp+228h] [bp-158h]@28
  __int64 v271; // [sp+230h] [bp-150h]@28
  int v272; // [sp+23Ch] [bp-144h]@28
  _DWORD *v273; // [sp+240h] [bp-140h]@25
  __int64 v274; // [sp+248h] [bp-138h]@25
  int v275; // [sp+254h] [bp-12Ch]@25
  _DWORD *v276; // [sp+258h] [bp-128h]@22
  __int64 v277; // [sp+260h] [bp-120h]@22
  int v278; // [sp+26Ch] [bp-114h]@22
  _DWORD *v279; // [sp+270h] [bp-110h]@19
  __int64 v280; // [sp+278h] [bp-108h]@19
  int v281; // [sp+284h] [bp-FCh]@19
  _DWORD *v282; // [sp+288h] [bp-F8h]@16
  __int64 v283; // [sp+290h] [bp-F0h]@16
  int v284; // [sp+29Ch] [bp-E4h]@16
  _DWORD *v285; // [sp+2A0h] [bp-E0h]@13
  __int64 v286; // [sp+2A8h] [bp-D8h]@13
  int v287; // [sp+2B4h] [bp-CCh]@13
  _DWORD *v288; // [sp+2B8h] [bp-C8h]@10
  __int64 v289; // [sp+2C0h] [bp-C0h]@10
  int v290; // [sp+2CCh] [bp-B4h]@10
  _DWORD *v291; // [sp+2D0h] [bp-B0h]@7
  __int64 v292; // [sp+2D8h] [bp-A8h]@7
  int v293; // [sp+2E4h] [bp-9Ch]@7
  _DWORD *v294; // [sp+2E8h] [bp-98h]@4
  __int64 v295; // [sp+2F0h] [bp-90h]@4
  int v296; // [sp+2FCh] [bp-84h]@4
  _DWORD *v297; // [sp+300h] [bp-80h]@1
  __int64 v298; // [sp+308h] [bp-78h]@1
  int v299; // [sp+314h] [bp-6Ch]@1

  v1 = this;
  sub_21E94B4((void **)&v299, "button.menu_exit");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v299);
  v3 = operator new(4u);
  LODWORD(v4) = sub_13DE130;
  *v3 = v1;
  HIDWORD(v4) = sub_13DDF68;
  v297 = v3;
  v298 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v297);
  if ( (_DWORD)v298 )
    ((void (*)(void))v298)();
  v5 = (void *)(v299 - 12);
  if ( (int *)(v299 - 12) != &dword_28898C0 )
  {
    v121 = (unsigned int *)(v299 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
    }
    else
      v122 = (*v121)--;
    if ( v122 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v296, "play_world_button");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v296);
  v7 = operator new(4u);
  LODWORD(v8) = sub_13DE39A;
  *v7 = v1;
  HIDWORD(v8) = sub_13DE38C;
  v294 = v7;
  v295 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v294);
  if ( (_DWORD)v295 )
    ((void (*)(void))v295)();
  v9 = (void *)(v296 - 12);
  if ( (int *)(v296 - 12) != &dword_28898C0 )
    v123 = (unsigned int *)(v296 - 4);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v293, "realm_name_text_box");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v293);
  v11 = operator new(4u);
  LODWORD(v12) = sub_13DE714;
  *v11 = v1;
  HIDWORD(v12) = sub_13DE3D0;
  v291 = v11;
  v292 = v12;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v10, (int)&v291);
  if ( (_DWORD)v292 )
    ((void (*)(void))v292)();
  v13 = (void *)(v293 - 12);
  if ( (int *)(v293 - 12) != &dword_28898C0 )
    v125 = (unsigned int *)(v293 - 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v290, "menu_reset_world");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v290);
  v15 = operator new(4u);
  LODWORD(v16) = sub_13DE758;
  *v15 = v1;
  HIDWORD(v16) = sub_13DE74A;
  v288 = v15;
  v289 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v288);
  if ( (_DWORD)v289 )
    ((void (*)(void))v289)();
  v17 = (void *)(v290 - 12);
  if ( (int *)(v290 - 12) != &dword_28898C0 )
    v127 = (unsigned int *)(v290 - 4);
        v128 = __ldrex(v127);
      while ( __strex(v128 - 1, v127) );
      v128 = (*v127)--;
    if ( v128 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v287, "menu_download_world");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v287);
  v19 = operator new(4u);
  LODWORD(v20) = sub_13DE79C;
  *v19 = v1;
  HIDWORD(v20) = sub_13DE78E;
  v285 = v19;
  v286 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v285);
  if ( (_DWORD)v286 )
    ((void (*)(void))v286)();
  v21 = (void *)(v287 - 12);
  if ( (int *)(v287 - 12) != &dword_28898C0 )
    v129 = (unsigned int *)(v287 - 4);
        v130 = __ldrex(v129);
      while ( __strex(v130 - 1, v129) );
      v130 = (*v129)--;
    if ( v130 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v284, "menu_upload_world");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v284);
  v23 = operator new(4u);
  LODWORD(v24) = sub_13DEA2C;
  *v23 = v1;
  HIDWORD(v24) = sub_13DE7D4;
  v282 = v23;
  v283 = v24;
  ScreenController::registerButtonClickHandler((int)v1, v22, (int)&v282);
  if ( (_DWORD)v283 )
    ((void (*)(void))v283)();
  v25 = (void *)(v284 - 12);
  if ( (int *)(v284 - 12) != &dword_28898C0 )
    v131 = (unsigned int *)(v284 - 4);
        v132 = __ldrex(v131);
      while ( __strex(v132 - 1, v131) );
      v132 = (*v131)--;
    if ( v132 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v281, "menu_realms_manage_subscription");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v281);
  v27 = operator new(4u);
  LODWORD(v28) = sub_13DEC66;
  *v27 = v1;
  HIDWORD(v28) = sub_13DEC58;
  v279 = v27;
  v280 = v28;
  ScreenController::registerButtonClickHandler((int)v1, v26, (int)&v279);
  if ( (_DWORD)v280 )
    ((void (*)(void))v280)();
  v29 = (void *)(v281 - 12);
  if ( (int *)(v281 - 12) != &dword_28898C0 )
    v133 = (unsigned int *)(v281 - 4);
        v134 = __ldrex(v133);
      while ( __strex(v134 - 1, v133) );
      v134 = (*v133)--;
    if ( v134 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v278, "menu_realms_renew_subscription");
  v30 = MinecraftScreenController::_getNameId(v1, (int **)&v278);
  v31 = operator new(4u);
  LODWORD(v32) = sub_13DECAA;
  *v31 = v1;
  HIDWORD(v32) = sub_13DEC9C;
  v276 = v31;
  v277 = v32;
  ScreenController::registerButtonClickHandler((int)v1, v30, (int)&v276);
  if ( (_DWORD)v277 )
    ((void (*)(void))v277)();
  v33 = (void *)(v278 - 12);
  if ( (int *)(v278 - 12) != &dword_28898C0 )
    v135 = (unsigned int *)(v278 - 4);
        v136 = __ldrex(v135);
      while ( __strex(v136 - 1, v135) );
      v136 = (*v135)--;
    if ( v136 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v275, "menu_realms_extend_consumable");
  v34 = MinecraftScreenController::_getNameId(v1, (int **)&v275);
  v35 = operator new(4u);
  LODWORD(v36) = sub_13DECEE;
  *v35 = v1;
  HIDWORD(v36) = sub_13DECE0;
  v273 = v35;
  v274 = v36;
  ScreenController::registerButtonClickHandler((int)v1, v34, (int)&v273);
  if ( (_DWORD)v274 )
    ((void (*)(void))v274)();
  v37 = (void *)(v275 - 12);
  if ( (int *)(v275 - 12) != &dword_28898C0 )
    v137 = (unsigned int *)(v275 - 4);
        v138 = __ldrex(v137);
      while ( __strex(v138 - 1, v137) );
      v138 = (*v137)--;
    if ( v138 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v272, "menu_realms_renew_consumable");
  v38 = MinecraftScreenController::_getNameId(v1, (int **)&v272);
  v39 = operator new(4u);
  LODWORD(v40) = sub_13DED32;
  *v39 = v1;
  HIDWORD(v40) = sub_13DED24;
  v270 = v39;
  v271 = v40;
  ScreenController::registerButtonClickHandler((int)v1, v38, (int)&v270);
  if ( (_DWORD)v271 )
    ((void (*)(void))v271)();
  v41 = (void *)(v272 - 12);
  if ( (int *)(v272 - 12) != &dword_28898C0 )
    v139 = (unsigned int *)(v272 - 4);
        v140 = __ldrex(v139);
      while ( __strex(v140 - 1, v139) );
      v140 = (*v139)--;
    if ( v140 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  sub_21E94B4((void **)&v269, "menu_open_realm");
  v42 = MinecraftScreenController::_getNameId(v1, (int **)&v269);
  v43 = operator new(4u);
  LODWORD(v44) = sub_13DED78;
  *v43 = v1;
  HIDWORD(v44) = sub_13DED68;
  v267 = v43;
  v268 = v44;
  ScreenController::registerButtonClickHandler((int)v1, v42, (int)&v267);
  if ( (_DWORD)v268 )
    ((void (*)(void))v268)();
  v45 = (void *)(v269 - 12);
  if ( (int *)(v269 - 12) != &dword_28898C0 )
    v141 = (unsigned int *)(v269 - 4);
        v142 = __ldrex(v141);
      while ( __strex(v142 - 1, v141) );
      v142 = (*v141)--;
    if ( v142 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  sub_21E94B4((void **)&v266, "menu_close_realm");
  v46 = MinecraftScreenController::_getNameId(v1, (int **)&v266);
  v47 = operator new(4u);
  LODWORD(v48) = sub_13DEDBC;
  *v47 = v1;
  HIDWORD(v48) = sub_13DEDAE;
  v264 = v47;
  v265 = v48;
  ScreenController::registerButtonClickHandler((int)v1, v46, (int)&v264);
  if ( (_DWORD)v265 )
    ((void (*)(void))v265)();
  v49 = (void *)(v266 - 12);
  if ( (int *)(v266 - 12) != &dword_28898C0 )
    v143 = (unsigned int *)(v266 - 4);
        v144 = __ldrex(v143);
      while ( __strex(v144 - 1, v143) );
      v144 = (*v143)--;
    if ( v144 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  sub_21E94B4((void **)&v263, "select_realm_branch");
  v50 = MinecraftScreenController::_getNameId(v1, (int **)&v263);
  v51 = operator new(4u);
  LODWORD(v52) = sub_13DEE06;
  *v51 = v1;
  HIDWORD(v52) = sub_13DEDF2;
  v261 = v51;
  v262 = v52;
  ScreenController::registerButtonClickHandler((int)v1, v50, (int)&v261);
  if ( (_DWORD)v262 )
    ((void (*)(void))v262)();
  v53 = (void *)(v263 - 12);
  if ( (int *)(v263 - 12) != &dword_28898C0 )
    v145 = (unsigned int *)(v263 - 4);
        v146 = __ldrex(v145);
      while ( __strex(v146 - 1, v145) );
      v146 = (*v145)--;
    if ( v146 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  sub_21E94B4((void **)&v260, "prev_page_button");
  v54 = MinecraftScreenController::_getNameId(v1, (int **)&v260);
  v55 = operator new(4u);
  LODWORD(v56) = sub_13DEE92;
  *v55 = v1;
  HIDWORD(v56) = sub_13DEE3C;
  v258 = v55;
  v259 = v56;
  ScreenController::registerButtonClickHandler((int)v1, v54, (int)&v258);
  if ( (_DWORD)v259 )
    ((void (*)(void))v259)();
  v57 = (void *)(v260 - 12);
  if ( (int *)(v260 - 12) != &dword_28898C0 )
    v147 = (unsigned int *)(v260 - 4);
        v148 = __ldrex(v147);
      while ( __strex(v148 - 1, v147) );
      v148 = (*v147)--;
    if ( v148 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  sub_21E94B4((void **)&v257, "next_page_button");
  v58 = MinecraftScreenController::_getNameId(v1, (int **)&v257);
  v59 = operator new(4u);
  LODWORD(v60) = sub_13DEF1E;
  *v59 = v1;
  HIDWORD(v60) = sub_13DEEC8;
  v255 = v59;
  v256 = v60;
  ScreenController::registerButtonClickHandler((int)v1, v58, (int)&v255);
  if ( (_DWORD)v256 )
    ((void (*)(void))v256)();
  v61 = (void *)(v257 - 12);
  if ( (int *)(v257 - 12) != &dword_28898C0 )
    v149 = (unsigned int *)(v257 - 4);
        v150 = __ldrex(v149);
      while ( __strex(v150 - 1, v149) );
      v150 = (*v149)--;
    if ( v150 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  sub_21E94B4((void **)&v254, "#version_filter_text_box");
  v62 = MinecraftScreenController::_getNameId(v1, (int **)&v254);
  v63 = operator new(4u);
  LODWORD(v64) = sub_13DF298;
  *v63 = v1;
  HIDWORD(v64) = sub_13DEF54;
  v252 = v63;
  v253 = v64;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v62, (int)&v252);
  if ( (_DWORD)v253 )
    ((void (*)(void))v253)();
  v65 = (void *)(v254 - 12);
  if ( (int *)(v254 - 12) != &dword_28898C0 )
    v151 = (unsigned int *)(v254 - 4);
        v152 = __ldrex(v151);
      while ( __strex(v152 - 1, v151) );
      v152 = (*v151)--;
    if ( v152 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
  sub_21E94B4((void **)&v251, "allow_cheats");
  sub_21E94B4((void **)&v250, "#allow_cheats");
  sub_21E94B4((void **)&v249, "#allow_cheats_enabled");
  v66 = operator new(4u);
  LODWORD(v67) = sub_13DF2E0;
  *v66 = v1;
  HIDWORD(v67) = sub_13DF2CE;
  v247 = v66;
  v248 = v67;
  v68 = operator new(4u);
  LODWORD(v69) = sub_13DF326;
  *v68 = v1;
  HIDWORD(v69) = sub_13DF316;
  v245 = v68;
  v246 = v69;
  v70 = operator new(4u);
  LODWORD(v71) = sub_13DF364;
  *v70 = v1;
  HIDWORD(v71) = sub_13DF35C;
  v243 = v70;
  v244 = v71;
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption(
    v1,
    (int **)&v251,
    (const char **)&v250,
    (const char **)&v249,
    (int)&v247,
    (int)&v245,
    (int)&v243);
  if ( (_DWORD)v244 )
    ((void (*)(void))v244)();
  if ( (_DWORD)v246 )
    ((void (*)(void))v246)();
  if ( (_DWORD)v248 )
    ((void (*)(void))v248)();
  v72 = (void *)(v249 - 12);
  if ( (int *)(v249 - 12) != &dword_28898C0 )
    v153 = (unsigned int *)(v249 - 4);
        v154 = __ldrex(v153);
      while ( __strex(v154 - 1, v153) );
      v154 = (*v153)--;
    if ( v154 <= 0 )
      j_j_j_j__ZdlPv_9(v72);
  v73 = (void *)(v250 - 12);
  if ( (int *)(v250 - 12) != &dword_28898C0 )
    v155 = (unsigned int *)(v250 - 4);
        v156 = __ldrex(v155);
      while ( __strex(v156 - 1, v155) );
      v156 = (*v155)--;
    if ( v156 <= 0 )
      j_j_j_j__ZdlPv_9(v73);
  v74 = (void *)(v251 - 12);
  if ( (int *)(v251 - 12) != &dword_28898C0 )
    v157 = (unsigned int *)(v251 - 4);
        v158 = __ldrex(v157);
      while ( __strex(v158 - 1, v157) );
      v158 = (*v157)--;
    if ( v158 <= 0 )
      j_j_j_j__ZdlPv_9(v74);
  sub_21E94B4((void **)&v230, "#world_difficulty_radio_peaceful");
  v231 = 0;
  sub_21E94B4((void **)&v232, "#world_difficulty_radio_easy");
  v233 = 1;
  sub_21E94B4((void **)&v234, "#world_difficulty_radio_normal");
  v235 = 2;
  sub_21E94B4((void **)&v236, "#world_difficulty_radio_hard");
  v237 = 3;
  LODWORD(v75) = &v238;
  std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,int> const*>(
    v75,
    (int **)&v238,
    0);
  v76 = (void *)(v236 - 12);
  if ( (int *)(v236 - 12) != &dword_28898C0 )
    v159 = (unsigned int *)(v236 - 4);
        v160 = __ldrex(v159);
      while ( __strex(v160 - 1, v159) );
      v160 = (*v159)--;
    if ( v160 <= 0 )
      j_j_j_j__ZdlPv_9(v76);
  v77 = (void *)(v234 - 12);
  if ( (int *)(v234 - 12) != &dword_28898C0 )
    v161 = (unsigned int *)(v234 - 4);
        v162 = __ldrex(v161);
      while ( __strex(v162 - 1, v161) );
      v162 = (*v161)--;
    if ( v162 <= 0 )
      j_j_j_j__ZdlPv_9(v77);
  v78 = (void *)(v232 - 12);
  if ( (int *)(v232 - 12) != &dword_28898C0 )
    v163 = (unsigned int *)(v232 - 4);
        v164 = __ldrex(v163);
      while ( __strex(v164 - 1, v163) );
      v164 = (*v163)--;
    if ( v164 <= 0 )
      j_j_j_j__ZdlPv_9(v78);
  v79 = (void *)(v230 - 12);
  if ( (int *)(v230 - 12) != &dword_28898C0 )
    v165 = (unsigned int *)(v230 - 4);
        v166 = __ldrex(v165);
      while ( __strex(v166 - 1, v165) );
      v166 = (*v165)--;
    if ( v166 <= 0 )
      j_j_j_j__ZdlPv_9(v79);
  sub_21E94B4((void **)&v229, "realms_difficulty");
  sub_21E94B4((void **)&v228, "#difficulty_option_label");
  v80 = operator new(4u);
  LODWORD(v81) = sub_13DF3A4;
  *v80 = v1;
  HIDWORD(v81) = sub_13DF39A;
  v226 = v80;
  v227 = v81;
  v82 = operator new(4u);
  *v82 = v1;
  v224 = v82;
  HIDWORD(v83) = sub_13DF3DA;
  LODWORD(v83) = sub_13DF3E4;
  v225 = v83;
  SettingsScreenControllerBase::setUpCallbacksForDropdownOption(
    (int)v1,
    &v229,
    (const char **)&v228,
    (int)&v238,
    (int)&difficultyLabels,
    (int)&v226,
    (int)&v224);
  if ( (_DWORD)v225 )
    ((void (*)(void))v225)();
  if ( (_DWORD)v227 )
    ((void (*)(void))v227)();
  v84 = (void *)(v228 - 12);
  if ( (int *)(v228 - 12) != &dword_28898C0 )
    v167 = (unsigned int *)(v228 - 4);
        v168 = __ldrex(v167);
      while ( __strex(v168 - 1, v167) );
      v168 = (*v167)--;
    if ( v168 <= 0 )
      j_j_j_j__ZdlPv_9(v84);
  v85 = (void *)(v229 - 12);
  if ( (int *)(v229 - 12) != &dword_28898C0 )
    v169 = (unsigned int *)(v229 - 4);
        v170 = __ldrex(v169);
      while ( __strex(v170 - 1, v169) );
      v170 = (*v169)--;
    if ( v170 <= 0 )
      j_j_j_j__ZdlPv_9(v85);
  sub_21E94B4((void **)&v213, "#world_game_mode_radio_survival");
  v214 = 0;
  sub_21E94B4((void **)&v215, "#world_game_mode_radio_creative");
  v216 = 1;
  sub_21E94B4((void **)&v217, "#world_game_mode_radio_adventure");
  v218 = 2;
  LODWORD(v86) = &v219;
    v86,
    (int **)&v219,
  v87 = (void *)(v217 - 12);
  if ( (int *)(v217 - 12) != &dword_28898C0 )
    v171 = (unsigned int *)(v217 - 4);
        v172 = __ldrex(v171);
      while ( __strex(v172 - 1, v171) );
      v172 = (*v171)--;
    if ( v172 <= 0 )
      j_j_j_j__ZdlPv_9(v87);
  v88 = (void *)(v215 - 12);
  if ( (int *)(v215 - 12) != &dword_28898C0 )
    v173 = (unsigned int *)(v215 - 4);
        v174 = __ldrex(v173);
      while ( __strex(v174 - 1, v173) );
      v174 = (*v173)--;
    if ( v174 <= 0 )
      j_j_j_j__ZdlPv_9(v88);
  v89 = (void *)(v213 - 12);
  if ( (int *)(v213 - 12) != &dword_28898C0 )
    v175 = (unsigned int *)(v213 - 4);
        v176 = __ldrex(v175);
      while ( __strex(v176 - 1, v175) );
      v176 = (*v175)--;
    if ( v176 <= 0 )
      j_j_j_j__ZdlPv_9(v89);
  GameTypeConv::gameTypeToString((void **)&v201, 0);
  v202 = 0;
  v203 = v201;
  v201 = (char *)&unk_28898CC;
  GameTypeConv::gameTypeToString((void **)&v200, 1);
  v204 = 1;
  v205 = v200;
  v200 = (char *)&unk_28898CC;
  GameTypeConv::gameTypeToString((void **)&v199, 2);
  v206 = 2;
  v207 = v199;
  v199 = (char *)&unk_28898CC;
  LODWORD(v90) = &ptr;
  std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_Hashtable<std::pair<int const,std::string> const*>(
    v90,
    (unsigned int *)&ptr,
  v91 = v207 - 12;
  if ( (int *)(v207 - 12) != &dword_28898C0 )
    v177 = (unsigned int *)(v207 - 4);
        v178 = __ldrex(v177);
      while ( __strex(v178 - 1, v177) );
      v178 = (*v177)--;
    if ( v178 <= 0 )
      j_j_j_j__ZdlPv_9(v91);
  v92 = v205 - 12;
  if ( (int *)(v205 - 12) != &dword_28898C0 )
    v179 = (unsigned int *)(v205 - 4);
        v180 = __ldrex(v179);
      while ( __strex(v180 - 1, v179) );
      v180 = (*v179)--;
    if ( v180 <= 0 )
      j_j_j_j__ZdlPv_9(v92);
  v93 = v203 - 12;
  if ( (int *)(v203 - 12) != &dword_28898C0 )
    v181 = (unsigned int *)(v203 - 4);
        v182 = __ldrex(v181);
      while ( __strex(v182 - 1, v181) );
      v182 = (*v181)--;
    if ( v182 <= 0 )
      j_j_j_j__ZdlPv_9(v93);
  v94 = v199 - 12;
  if ( (int *)(v199 - 12) != &dword_28898C0 )
    v183 = (unsigned int *)(v199 - 4);
        v184 = __ldrex(v183);
      while ( __strex(v184 - 1, v183) );
      v184 = (*v183)--;
    if ( v184 <= 0 )
      j_j_j_j__ZdlPv_9(v94);
  v95 = v200 - 12;
  if ( (int *)(v200 - 12) != &dword_28898C0 )
    v185 = (unsigned int *)(v200 - 4);
        v186 = __ldrex(v185);
      while ( __strex(v186 - 1, v185) );
      v186 = (*v185)--;
    if ( v186 <= 0 )
      j_j_j_j__ZdlPv_9(v95);
  v96 = v201 - 12;
  if ( (int *)(v201 - 12) != &dword_28898C0 )
    v187 = (unsigned int *)(v201 - 4);
        v188 = __ldrex(v187);
      while ( __strex(v188 - 1, v187) );
      v188 = (*v187)--;
    if ( v188 <= 0 )
      j_j_j_j__ZdlPv_9(v96);
  sub_21E94B4((void **)&v198, "realms_gamemode");
  sub_21E94B4((void **)&v197, "#gameMode_option_label");
  v97 = operator new(4u);
  LODWORD(v98) = sub_13DF424;
  *v97 = v1;
  HIDWORD(v98) = sub_13DF41A;
  v195 = v97;
  v196 = v98;
  v99 = operator new(4u);
  LODWORD(v100) = sub_13DF462;
  *v99 = v1;
  HIDWORD(v100) = sub_13DF45A;
  v193 = v99;
  v194 = v100;
    &v198,
    (const char **)&v197,
    (int)&v219,
    (int)&ptr,
    (int)&v195,
    (int)&v193);
  if ( (_DWORD)v194 )
    ((void (*)(void))v194)();
  if ( (_DWORD)v196 )
    ((void (*)(void))v196)();
  v101 = (void *)(v197 - 12);
  if ( (int *)(v197 - 12) != &dword_28898C0 )
    v189 = (unsigned int *)(v197 - 4);
        v190 = __ldrex(v189);
      while ( __strex(v190 - 1, v189) );
      v190 = (*v189)--;
    if ( v190 <= 0 )
      j_j_j_j__ZdlPv_9(v101);
  v102 = (void *)(v198 - 12);
  if ( (int *)(v198 - 12) != &dword_28898C0 )
    v191 = (unsigned int *)(v198 - 4);
        v192 = __ldrex(v191);
      while ( __strex(v192 - 1, v191) );
      v192 = (*v191)--;
    if ( v192 <= 0 )
      j_j_j_j__ZdlPv_9(v102);
  v103 = v210;
  while ( v103 )
    v106 = (void *)v103;
    v107 = *(_DWORD *)(v103 + 8);
    v103 = *(_DWORD *)v103;
    v108 = (void *)(v107 - 12);
    if ( (int *)(v107 - 12) != &dword_28898C0 )
      v104 = (unsigned int *)(v107 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v105 = __ldrex(v104);
        while ( __strex(v105 - 1, v104) );
      }
      else
        v105 = (*v104)--;
      if ( v105 <= 0 )
        j_j_j_j__ZdlPv_9(v108);
    operator delete(v106);
  _aeabi_memclr4(ptr, 4 * v209);
  v210 = 0;
  v211 = 0;
  if ( ptr && &v212 != ptr )
    operator delete(ptr);
  v109 = v221;
  while ( v109 )
    v112 = v109;
    v113 = *v109 >> 32;
    v109 = (unsigned __int64 *)*v109;
    v114 = (void *)(v113 - 12);
    if ( (int *)(v113 - 12) != &dword_28898C0 )
      v110 = (unsigned int *)(v113 - 4);
          v111 = __ldrex(v110);
        while ( __strex(v111 - 1, v110) );
        v111 = (*v110)--;
      if ( v111 <= 0 )
        j_j_j_j__ZdlPv_9(v114);
    operator delete(v112);
  _aeabi_memclr4(v219, 4 * v220);
  v221 = 0;
  v222 = 0;
  if ( v219 && &v223 != v219 )
    operator delete(v219);
  v115 = v240;
  while ( v115 )
    v118 = v115;
    v119 = *v115 >> 32;
    v115 = (unsigned __int64 *)*v115;
    v120 = (void *)(v119 - 12);
    if ( (int *)(v119 - 12) != &dword_28898C0 )
      v116 = (unsigned int *)(v119 - 4);
          v117 = __ldrex(v116);
        while ( __strex(v117 - 1, v116) );
        v117 = (*v116)--;
      if ( v117 <= 0 )
        j_j_j_j__ZdlPv_9(v120);
    operator delete(v118);
  _aeabi_memclr4(v238, 4 * v239);
  v240 = 0;
  v241 = 0;
  if ( v238 )
    if ( &v242 != v238 )
      operator delete(v238);
}


int __fastcall RealmsSettingsScreenController::_querySubscriptionInfo(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r6@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  int v5; // r5@7
  unsigned int *v6; // r1@8
  unsigned int v7; // r2@10
  _QWORD *v8; // r0@13
  unsigned int *v9; // r1@14
  unsigned int v10; // r2@16
  __int64 v11; // r1@19
  unsigned int *v12; // r5@22
  unsigned int v13; // r0@24
  unsigned int v14; // r0@31
  int result; // r0@36
  unsigned int *v16; // r2@37
  unsigned int v17; // r1@39
  _QWORD *v18; // [sp+0h] [bp-38h]@19
  void (*v19)(void); // [sp+8h] [bp-30h]@13
  __int64 v20; // [sp+10h] [bp-28h]@7
  char v21; // [sp+1Ch] [bp-1Ch]@1
  int v22; // [sp+20h] [bp-18h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v21, (int)this);
  v2 = *(_QWORD *)&v21;
  if ( v22 )
  {
    v3 = (unsigned int *)(v22 + 8);
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
  *((_BYTE *)v1 + 708) = 0;
  v5 = *((_DWORD *)v1 + 106);
  v20 = *((_QWORD *)v1 + 65);
  if ( HIDWORD(v2) )
    v6 = (unsigned int *)(HIDWORD(v2) + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
      ++*v6;
  v19 = 0;
  v8 = operator new(8u);
  *v8 = v2;
    v9 = (unsigned int *)(HIDWORD(v2) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  LODWORD(v11) = sub_13E6118;
  v18 = v8;
  HIDWORD(v11) = sub_13E5C2C;
  *(_QWORD *)&v19 = v11;
  MinecraftScreenModel::getSubscriptionDetails(v5, &v20, (int)&v18);
  if ( v19 )
    v19();
    v12 = (unsigned int *)(HIDWORD(v2) + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
        v14 = __ldrex(v12);
      while ( __strex(v14 - 1, v12) );
      v14 = (*v12)--;
    if ( v14 == 1 )
  result = v22;
    v16 = (unsigned int *)(v22 + 8);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall RealmsSettingsScreenController::_getSubscriptionOriginMismatchLabelText(RealmsSettingsScreenController *this, int a2)
{
  RealmsSettingsScreenController::_getSubscriptionOriginMismatchLabelText(this, a2);
}


void __fastcall RealmsSettingsScreenController::_getDurationLabelText(RealmsSettingsScreenController *this, int a2)
{
  RealmsSettingsScreenController::_getDurationLabelText(this, a2);
}


void __fastcall RealmsSettingsScreenController::_joinRealm(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r6@1
  __int64 v2; // kr00_8@5
  unsigned int *v3; // r0@6
  unsigned int v4; // r1@8
  int v5; // r4@9
  int v6; // r7@9
  signed int v7; // r1@10
  int v8; // r10@10
  signed int v9; // r12@10
  signed int v10; // r4@14
  unsigned int *v11; // r1@16
  unsigned int v12; // r2@18
  int v13; // r3@20
  unsigned int *v14; // r1@22
  unsigned int v15; // r2@24
  unsigned int v16; // r2@32
  unsigned int *v17; // r0@37
  unsigned int v18; // r1@39
  __int64 v19; // kr10_8@43
  unsigned int *v20; // r0@44
  unsigned int v21; // r1@46
  int v22; // r7@47
  int v23; // r2@48
  unsigned int *v24; // r0@51
  unsigned int v25; // r1@53
  signed int v26; // r0@56
  unsigned int *v27; // r0@60
  unsigned int v28; // r1@62
  unsigned int *v29; // r0@66
  unsigned int v30; // r1@68
  int v31; // r5@71
  int v32; // r12@71
  int v33; // r5@71
  signed int v34; // r5@71
  void *v35; // r0@71
  unsigned int *v36; // r0@73
  unsigned int v37; // r1@75
  unsigned int *v38; // r0@79
  unsigned int v39; // r1@81
  unsigned int *v40; // r0@85
  unsigned int v41; // r1@87
  _DWORD *v42; // r0@90
  unsigned int *v43; // r1@91
  unsigned int v44; // r2@93
  unsigned int *v45; // r1@97
  unsigned int v46; // r2@99
  unsigned int *v47; // r1@103
  unsigned int v48; // r2@105
  __int64 v49; // r1@108
  unsigned int *v50; // r0@109
  unsigned int v51; // r1@111
  _QWORD *v52; // r0@114
  unsigned int *v53; // r1@115
  unsigned int v54; // r2@117
  __int64 v55; // r1@120
  unsigned int *v56; // r1@123
  unsigned int v57; // r0@125
  unsigned int *v58; // r1@133
  unsigned int v59; // r0@135
  unsigned int *v60; // r1@141
  unsigned int v61; // r0@143
  unsigned int *v62; // r1@149
  unsigned int v63; // r0@151
  void *v64; // r0@156
  void *v65; // r5@157
  unsigned int *v66; // r0@158
  unsigned int v67; // r1@160
  unsigned int *v68; // r0@164
  unsigned int v69; // r1@166
  unsigned int *v70; // r0@170
  unsigned int v71; // r1@172
  _DWORD *v72; // r0@175
  unsigned int *v73; // r1@176
  unsigned int v74; // r2@178
  unsigned int *v75; // r1@182
  unsigned int v76; // r2@184
  unsigned int *v77; // r1@188
  unsigned int v78; // r2@190
  __int64 v79; // r1@193
  unsigned int *v80; // r1@196
  unsigned int v81; // r0@198
  unsigned int *v82; // r1@204
  unsigned int v83; // r0@206
  unsigned int *v84; // r1@212
  unsigned int v85; // r0@214
  int v86; // r6@219
  void *v87; // r0@223
  unsigned int *v88; // r1@225
  unsigned int v89; // r0@227
  unsigned int *v90; // r1@233
  unsigned int v91; // r0@235
  unsigned int *v92; // r1@241
  unsigned int v93; // r0@243
  unsigned int *v94; // r1@249
  unsigned int v95; // r0@251
  unsigned int *v96; // r1@257
  unsigned int v97; // r0@259
  unsigned int *v98; // r1@265
  unsigned int v99; // r0@267
  unsigned int *v100; // r1@273
  unsigned int v101; // r0@275
  unsigned int *v102; // r1@281
  unsigned int v103; // r0@283
  unsigned int *v104; // r1@289
  unsigned int v105; // r0@291
  int v106; // r0@296
  unsigned int *v107; // r2@297
  unsigned int v108; // r1@299
  unsigned int *v109; // r2@305
  signed int v110; // r1@307
  unsigned int *v111; // r2@309
  signed int v112; // r1@311
  unsigned int *v113; // r2@313
  signed int v114; // r1@315
  int v115; // [sp+8h] [bp-A8h]@10
  int v116; // [sp+Ch] [bp-A4h]@49
  int v117; // [sp+10h] [bp-A0h]@14
  void *v118; // [sp+14h] [bp-9Ch]@72
  signed int v119; // [sp+18h] [bp-98h]@65
  signed int v120; // [sp+18h] [bp-98h]@156
  int v121; // [sp+1Ch] [bp-94h]@10
  int v122; // [sp+20h] [bp-90h]@14
  signed int v123; // [sp+24h] [bp-8Ch]@49
  void *v124; // [sp+28h] [bp-88h]@219
  void *v125; // [sp+2Ch] [bp-84h]@219
  int v126; // [sp+34h] [bp-7Ch]@219
  int v127; // [sp+3Ch] [bp-74h]@71
  int v128; // [sp+40h] [bp-70h]@5
  int v129; // [sp+44h] [bp-6Ch]@5
  char v130; // [sp+48h] [bp-68h]@71
  _QWORD *v131; // [sp+54h] [bp-5Ch]@120
  void (*v132)(void); // [sp+5Ch] [bp-54h]@114
  _DWORD *v133; // [sp+64h] [bp-4Ch]@108
  void (*v134)(void); // [sp+6Ch] [bp-44h]@90
  int v135; // [sp+78h] [bp-38h]@72
  _DWORD *v136; // [sp+7Ch] [bp-34h]@193
  void (*v137)(void); // [sp+84h] [bp-2Ch]@175

  v1 = this;
  if ( !MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)this + 106), 1) )
  {
    j_j_j__ZN25MinecraftScreenController16_showNoWifiModalEv(v1);
    return;
  }
  if ( !MinecraftScreenModel::isLiveMultiplayerAllowed(*((MinecraftScreenModel **)v1 + 106)) )
    j_j_j__ZN25MinecraftScreenController25_showLiveMultiplayerModalEv(v1);
  if ( !MinecraftScreenModel::isValidMultiplayerSkin(*((MinecraftScreenModel **)v1 + 106)) )
    j_j_j__ZN24MainMenuScreenController31showInvalidMultiplayerSkinModalEv(v1);
  if ( *((_DWORD *)v1 + 132) == 2 )
    MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v128, (int)v1);
    *((_BYTE *)v1 + 710) = 0;
    v2 = *(_QWORD *)&v128;
    if ( !v129 )
    {
      v9 = 1;
      v122 = 0;
      v115 = v128;
      v8 = v128;
      v117 = v128;
      v10 = 1;
      v121 = 0;
      goto LABEL_43;
    }
    v3 = (unsigned int *)(v129 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
      v6 = v129;
      v5 = v128;
      if ( !v129 )
      {
        v7 = 1;
        v121 = 0;
        v6 = 0;
        v8 = v128;
        v115 = v128;
        v9 = 1;
LABEL_30:
        if ( &pthread_create )
        {
          __dmb();
          do
            v16 = __ldrex(v3);
          while ( __strex(v16 + 1, v3) );
        }
        else
          ++*v3;
        if ( v7 )
          v117 = v2;
          v10 = 1;
          v122 = v6;
          v17 = (unsigned int *)(v6 + 8);
          if ( &pthread_create )
          {
            v117 = v2;
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 + 1, v17) );
            v122 = v6;
          }
          else
            ++*v17;
          v10 = 0;
LABEL_43:
        v19 = *(_QWORD *)&v128;
        if ( !v129 )
          v22 = v128;
          v116 = 0;
          v123 = 1;
LABEL_59:
          if ( HIDWORD(v2) )
            v27 = (unsigned int *)(HIDWORD(v2) + 8);
            if ( &pthread_create )
            {
              __dmb();
              do
                v28 = __ldrex(v27);
              while ( __strex(v28 + 1, v27) );
            }
            else
              ++*v27;
          v119 = v9;
          if ( !v10 )
            v29 = (unsigned int *)(v122 + 8);
                v30 = __ldrex(v29);
              while ( __strex(v30 + 1, v29) );
              ++*v29;
          v31 = *((_DWORD *)v1 + 129);
          sub_21E034C(&v130);
          v32 = v31 + 8;
          *(_QWORD *)v32 = *(_QWORD *)&v130;
          *(_DWORD *)(v32 + 8) = 120;
          *(_DWORD *)(v31 + 20) = 0;
          *(_BYTE *)(v31 + 24) = 0;
          *(_BYTE *)(v31 + 1) = 0;
          v33 = *((_DWORD *)v1 + 106);
          sub_21E94B4((void **)&v127, (const char *)&unk_257BC67);
          MinecraftScreenModel::fireEventStartWorld(v33, 4, &v127);
          v34 = v119;
          v35 = (void *)(v127 - 12);
          if ( (int *)(v127 - 12) != &dword_28898C0 )
            v109 = (unsigned int *)(v127 - 4);
                v110 = __ldrex(v109);
              while ( __strex(v110 - 1, v109) );
              v34 = v119;
              v110 = (*v109)--;
            if ( v110 <= 0 )
              j_j_j_j__ZdlPv_9(v35);
          v118 = operator new(0x34u);
          sub_21E94B4((void **)&v135, "realmsSettingsScreen.joiningRealm");
          if ( !v34 )
            v36 = (unsigned int *)(v121 + 8);
                v37 = __ldrex(v36);
              while ( __strex(v37 + 1, v36) );
              ++*v36;
            v38 = (unsigned int *)(HIDWORD(v2) + 8);
                v39 = __ldrex(v38);
              while ( __strex(v39 + 1, v38) );
              ++*v38;
            v40 = (unsigned int *)(v122 + 8);
                v41 = __ldrex(v40);
              while ( __strex(v41 + 1, v40) );
              ++*v40;
          v134 = 0;
          v42 = operator new(0x18u);
          *v42 = v8;
          v42[1] = v121;
            v43 = (unsigned int *)(v121 + 8);
                v44 = __ldrex(v43);
              while ( __strex(v44 + 1, v43) );
              ++*v43;
          v42[2] = v117;
          v42[3] = HIDWORD(v2);
            v45 = (unsigned int *)(HIDWORD(v2) + 8);
                v46 = __ldrex(v45);
              while ( __strex(v46 + 1, v45) );
              ++*v45;
          v42[4] = v115;
          v42[5] = v122;
            v47 = (unsigned int *)(v122 + 8);
                v48 = __ldrex(v47);
              while ( __strex(v48 + 1, v47) );
              ++*v47;
          HIDWORD(v49) = sub_13E396C;
          v133 = v42;
          LODWORD(v49) = sub_13E3FDC;
          *(_QWORD *)&v134 = v49;
          if ( HIDWORD(v19) )
            v50 = (unsigned int *)(HIDWORD(v19) + 8);
                v51 = __ldrex(v50);
              while ( __strex(v51 + 1, v50) );
              ++*v50;
          v132 = 0;
          v52 = operator new(8u);
          *v52 = v19;
            v53 = (unsigned int *)(HIDWORD(v19) + 8);
                v54 = __ldrex(v53);
              while ( __strex(v54 + 1, v53) );
              ++*v53;
          LODWORD(v55) = sub_13E4B54;
          v131 = v52;
          HIDWORD(v55) = sub_13E4A08;
          *(_QWORD *)&v132 = v55;
          RealmsConnectProgressHandler::RealmsConnectProgressHandler((int)v118, &v135, (int)&v133, (int)&v131);
          if ( v132 )
            v132();
            v56 = (unsigned int *)(HIDWORD(v19) + 8);
                v57 = __ldrex(v56);
              while ( __strex(v57 - 1, v56) );
              v57 = (*v56)--;
            if ( v57 == 1 )
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v19) + 12))(HIDWORD(v19));
          if ( v134 )
            v134();
            v58 = (unsigned int *)(v122 + 8);
                v59 = __ldrex(v58);
              while ( __strex(v59 - 1, v58) );
              v59 = (*v58)--;
            if ( v59 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v122 + 12))(v122);
            v60 = (unsigned int *)(HIDWORD(v2) + 8);
                v61 = __ldrex(v60);
              while ( __strex(v61 - 1, v60) );
              v61 = (*v60)--;
            if ( v61 == 1 )
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
            v62 = (unsigned int *)(v121 + 8);
                v63 = __ldrex(v62);
              while ( __strex(v63 - 1, v62) );
              v63 = (*v62)--;
            if ( v63 == 1 )
              (*(void (**)(void))(*(_DWORD *)v121 + 12))();
          v120 = v34;
          v64 = (void *)(v135 - 12);
          if ( (int *)(v135 - 12) != &dword_28898C0 )
            v111 = (unsigned int *)(v135 - 4);
                v112 = __ldrex(v111);
              while ( __strex(v112 - 1, v111) );
              v112 = (*v111)--;
            if ( v112 <= 0 )
              j_j_j_j__ZdlPv_9(v64);
          v65 = operator new(0x38u);
          if ( !v123 )
            v66 = (unsigned int *)(v116 + 8);
                v67 = __ldrex(v66);
              while ( __strex(v67 + 1, v66) );
              ++*v66;
            v68 = (unsigned int *)(HIDWORD(v2) + 8);
                v69 = __ldrex(v68);
              while ( __strex(v69 + 1, v68) );
              ++*v68;
            v70 = (unsigned int *)(v122 + 8);
                v71 = __ldrex(v70);
              while ( __strex(v71 + 1, v70) );
              ++*v70;
          v137 = 0;
          v72 = operator new(0x18u);
          *v72 = v22;
          v72[1] = v116;
            v73 = (unsigned int *)(v116 + 8);
                v74 = __ldrex(v73);
              while ( __strex(v74 + 1, v73) );
              ++*v73;
          v72[2] = v117;
          v72[3] = HIDWORD(v2);
            v75 = (unsigned int *)(HIDWORD(v2) + 8);
                v76 = __ldrex(v75);
              while ( __strex(v76 + 1, v75) );
              ++*v75;
          v72[4] = v115;
          v72[5] = v122;
            v77 = (unsigned int *)(v122 + 8);
                v78 = __ldrex(v77);
              while ( __strex(v78 + 1, v77) );
              ++*v77;
          LODWORD(v79) = sub_13E4FB8;
          v136 = v72;
          HIDWORD(v79) = sub_13E4BF8;
          *(_QWORD *)&v137 = v79;
          GameServerConnectProgressHandler::GameServerConnectProgressHandler((int)v65, 3, (int)&v136, 1);
          if ( v137 )
            v137();
            v80 = (unsigned int *)(v122 + 8);
                v81 = __ldrex(v80);
              while ( __strex(v81 - 1, v80) );
              v81 = (*v80)--;
            if ( v81 == 1 )
            v82 = (unsigned int *)(HIDWORD(v2) + 8);
                v83 = __ldrex(v82);
              while ( __strex(v83 - 1, v82) );
              v83 = (*v82)--;
            if ( v83 == 1 )
            v84 = (unsigned int *)(v116 + 8);
                v85 = __ldrex(v84);
              while ( __strex(v85 - 1, v84) );
              v85 = (*v84)--;
            if ( v85 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v116 + 12))(v116);
          v86 = *((_DWORD *)v1 + 106);
          sub_21E94B4((void **)&v126, "realms_joining");
          v125 = v65;
          v124 = v118;
          MainMenuScreenModel::navigateToRealmsWorldProgressScreen(v86, &v126, (int *)&v125, (int *)&v124);
          if ( v124 )
            (*(void (**)(void))(*(_DWORD *)v124 + 4))();
          v124 = 0;
          if ( v125 )
            (*(void (**)(void))(*(_DWORD *)v125 + 4))();
          v125 = 0;
          v87 = (void *)(v126 - 12);
          if ( (int *)(v126 - 12) != &dword_28898C0 )
            v113 = (unsigned int *)(v126 - 4);
                v114 = __ldrex(v113);
              while ( __strex(v114 - 1, v113) );
              v114 = (*v113)--;
            if ( v114 <= 0 )
              j_j_j_j__ZdlPv_9(v87);
            v88 = (unsigned int *)(v122 + 8);
                v89 = __ldrex(v88);
              while ( __strex(v89 - 1, v88) );
              v89 = (*v88)--;
            if ( v89 == 1 )
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v122 + 12))(v122);
            v90 = (unsigned int *)(HIDWORD(v2) + 8);
                v91 = __ldrex(v90);
              while ( __strex(v91 - 1, v90) );
              v91 = (*v90)--;
            if ( v91 == 1 )
            v92 = (unsigned int *)(v116 + 8);
                v93 = __ldrex(v92);
              while ( __strex(v93 - 1, v92) );
              v93 = (*v92)--;
            if ( v93 == 1 )
            v94 = (unsigned int *)(HIDWORD(v19) + 8);
                v95 = __ldrex(v94);
              while ( __strex(v95 - 1, v94) );
              v95 = (*v94)--;
            if ( v95 == 1 )
            v96 = (unsigned int *)(v122 + 8);
                v97 = __ldrex(v96);
              while ( __strex(v97 - 1, v96) );
              v97 = (*v96)--;
            if ( v97 == 1 )
            v98 = (unsigned int *)(HIDWORD(v2) + 8);
                v99 = __ldrex(v98);
              while ( __strex(v99 - 1, v98) );
              v99 = (*v98)--;
            if ( v99 == 1 )
          if ( !v120 )
            v100 = (unsigned int *)(v121 + 8);
                v101 = __ldrex(v100);
              while ( __strex(v101 - 1, v100) );
              v101 = (*v100)--;
            if ( v101 == 1 )
            v102 = (unsigned int *)(v122 + 8);
                v103 = __ldrex(v102);
              while ( __strex(v103 - 1, v102) );
              v103 = (*v102)--;
            if ( v103 == 1 )
            v104 = (unsigned int *)(HIDWORD(v2) + 8);
                v105 = __ldrex(v104);
              while ( __strex(v105 - 1, v104) );
              v105 = (*v104)--;
            if ( v105 == 1 )
          v106 = v129;
          if ( v129 )
            v107 = (unsigned int *)(v129 + 8);
                v108 = __ldrex(v107);
              while ( __strex(v108 - 1, v107) );
              v108 = (*v107)--;
            if ( v108 == 1 )
              (*(void (**)(void))(*(_DWORD *)v106 + 12))();
          return;
        v20 = (unsigned int *)(v129 + 8);
            v21 = __ldrex(v20);
          while ( __strex(v21 + 1, v20) );
          if ( !v129 )
            v116 = 0;
            v26 = 1;
LABEL_58:
            v123 = v26;
            goto LABEL_59;
          v23 = v129;
          ++*v20;
        v116 = v23;
        v24 = (unsigned int *)(v23 + 8);
            v25 = __ldrex(v24);
          while ( __strex(v25 + 1, v24) );
          ++*v24;
        v26 = 0;
        goto LABEL_58;
      }
    else
      ++*v3;
    v11 = (unsigned int *)(v6 + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
        v115 = v5;
LABEL_29:
        v7 = 0;
        goto LABEL_30;
      v13 = v129;
      v13 = v6;
      v8 = v5;
      ++*v11;
    v121 = v13;
    v14 = (unsigned int *)(v13 + 8);
      v115 = v5;
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
    v9 = 0;
    goto LABEL_29;
}


signed int __fastcall RealmsSettingsScreenController::_handleRealmBranchButtonClick(RealmsSettingsScreenController *this, UIPropertyBag *a2)
{
  Json::Value *v2; // r5@1
  RealmsSettingsScreenController *v3; // r4@1
  signed int result; // r0@1
  Json::Value *v5; // r5@3

  v2 = (UIPropertyBag *)((char *)a2 + 8);
  v3 = this;
  result = Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8));
  if ( !result )
  {
    result = Json::Value::isObject(v2);
    if ( result == 1 )
    {
      v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
      if ( Json::Value::isInt(v5) || (result = Json::Value::isUInt(v5), result == 1) )
      {
        result = Json::Value::asInt(v5, 0);
        if ( result >= 0 )
          result = j_j_j__ZN30RealmsSettingsScreenController24_updateRealmBranchConfigEi(
                     v3,
                     result + 10 * *((_DWORD *)v3 + 178));
      }
    }
  }
  return result;
}


int __fastcall RealmsSettingsScreenController::_saveAndExitScreen(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r5@1
  __int64 v2; // kr00_8@1
  RealmsWhitelistScreenController *v3; // r5@1
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
  MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v17, (int)this);
  v2 = *(_QWORD *)&v17;
  v3 = (RealmsWhitelistScreenController *)*((_DWORD *)v1 + 174);
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
  LODWORD(v9) = sub_13E2E14;
  v15 = v6;
  HIDWORD(v9) = sub_13E2C94;
  *(_QWORD *)&v16 = v9;
  RealmsWhitelistScreenController::sendInvites(v3, (int)&v15);
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


int __fastcall RealmsSettingsScreenController::_updateRealmBranchConfig(int result, int a2)
{
  int v2; // r5@1
  int v3; // r7@1
  __int64 v4; // kr00_8@5
  unsigned int *v5; // r0@6
  unsigned int v6; // r1@8
  int v7; // r8@11
  int v8; // r7@11
  unsigned int *v9; // r0@12
  unsigned int v10; // r1@14
  _QWORD *v11; // r0@17
  unsigned int *v12; // r1@18
  unsigned int v13; // r2@20
  __int64 v14; // r1@23
  unsigned int *v15; // r5@26
  unsigned int v16; // r0@28
  unsigned int v17; // r0@35
  unsigned int *v18; // r2@41
  unsigned int v19; // r1@43
  _QWORD *v20; // [sp+0h] [bp-38h]@23
  void (*v21)(void); // [sp+8h] [bp-30h]@17
  __int64 v22; // [sp+10h] [bp-28h]@11
  char v23; // [sp+18h] [bp-20h]@5
  int v24; // [sp+1Ch] [bp-1Ch]@5

  v2 = a2;
  v3 = result;
  if ( a2 >= 0 )
  {
    result = (signed int)((*(_QWORD *)*(_DWORD *)(result + 784) >> 32) - *(_QWORD *)*(_DWORD *)(result + 784)) >> 4;
    if ( result > a2 )
    {
      result = *(_BYTE *)(v3 + 720);
      if ( !*(_BYTE *)(v3 + 720) )
      {
        result = *(_DWORD *)(v3 + 716);
        if ( result != a2 )
        {
          *(_DWORD *)(v3 + 716) = a2;
          *(_BYTE *)(v3 + 720) = 1;
          MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v23, v3);
          v4 = *(_QWORD *)&v23;
          if ( v24 )
          {
            v5 = (unsigned int *)(v24 + 8);
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
          v7 = *(_DWORD *)(v3 + 424);
          v22 = *(_QWORD *)(v3 + 520);
          v8 = **(_DWORD **)(v3 + 784);
          if ( HIDWORD(v4) )
            v9 = (unsigned int *)(HIDWORD(v4) + 8);
                v10 = __ldrex(v9);
              while ( __strex(v10 + 1, v9) );
              ++*v9;
          v21 = 0;
          v11 = operator new(8u);
          *v11 = v4;
            v12 = (unsigned int *)(HIDWORD(v4) + 8);
                v13 = __ldrex(v12);
              while ( __strex(v13 + 1, v12) );
              ++*v12;
          v20 = v11;
          LODWORD(v14) = sub_13E6C3C;
          HIDWORD(v14) = sub_13E6A40;
          *(_QWORD *)&v21 = v14;
          MinecraftScreenModel::updateRealmsConfig(v7, &v22, (int *)(v8 + 16 * v2 + 4), (int)&v20);
          if ( v21 )
            v21();
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
          result = v24;
            v18 = (unsigned int *)(v24 + 8);
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
              v19 = (*v18)--;
            if ( v19 == 1 )
              result = (*(int (**)(void))(*(_DWORD *)result + 12))();
        }
      }
    }
  }
  return result;
}


void *__fastcall RealmsSettingsScreenController::_getRealmsVersionReferenceId(RealmsSettingsScreenController *this, int a2, int a3)
{
  int v3; // r2@1
  __int64 v4; // kr00_8@2
  void *result; // r0@3

  v3 = a3 + 10 * *(_DWORD *)(a2 + 712);
  if ( v3 < 0 || (v4 = *(_QWORD *)*(_DWORD *)(a2 + 784), v3 >= (HIDWORD(v4) - (signed int)v4) >> 4) )
    result = sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  else
    result = sub_21E8AF4((int *)this, (int *)(v4 + 16 * v3 + 4));
  return result;
}


signed int __fastcall RealmsSettingsScreenController::_updateSubscriptionInformation(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  signed int v5; // r0@3
  int v6; // r1@6
  signed int result; // r0@12

  v2 = a2;
  v3 = a1;
  *(_DWORD *)(a1 + 664) = *(_DWORD *)a2;
  EntityInteraction::setInteractText((int *)(a1 + 668), (int *)(a2 + 4));
  EntityInteraction::setInteractText((int *)(v3 + 672), (int *)(v2 + 8));
  *(_QWORD *)(v3 + 676) = *(_QWORD *)(v2 + 12);
  *(_DWORD *)(v3 + 688) = 0;
  v4 = MainMenuScreenModel::getStoreSupportsSubscriptions(*(MainMenuScreenModel **)(v3 + 424));
  if ( *(_BYTE *)(v3 + 552) )
  {
    if ( v4 == 1 )
      v5 = 2;
    else
      v5 = 4;
    goto LABEL_11;
  }
  v6 = *(_DWORD *)(v3 + 664);
  if ( v6 )
    if ( v6 == 1 )
    {
      v5 = 1;
LABEL_11:
      *(_DWORD *)(v3 + 688) = v5;
      goto LABEL_12;
    }
  else if ( !v4 )
    v5 = 3;
LABEL_12:
  result = 257;
  *(_WORD *)(v3 + 708) = 257;
  return result;
}


int __fastcall RealmsSettingsScreenController::_queryInviteLink(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r6@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  int v5; // r5@6
  unsigned int v6; // r1@10
  _QWORD *v7; // r0@13
  unsigned int *v8; // r1@14
  unsigned int v9; // r2@16
  __int64 v10; // r1@19
  unsigned int *v11; // r5@22
  unsigned int v12; // r0@24
  unsigned int v13; // r0@31
  int result; // r0@36
  unsigned int *v15; // r2@37
  unsigned int v16; // r1@39
  _QWORD *v17; // [sp+0h] [bp-38h]@19
  void (*v18)(void); // [sp+8h] [bp-30h]@13
  __int64 v19; // [sp+10h] [bp-28h]@6
  char v20; // [sp+1Ch] [bp-1Ch]@1
  int v21; // [sp+20h] [bp-18h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v20, (int)this);
  v2 = *(_QWORD *)&v20;
  if ( v21 )
  {
    v3 = (unsigned int *)(v21 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
    v5 = *((_DWORD *)v1 + 95);
    v19 = *((_QWORD *)v1 + 65);
        v6 = __ldrex(v3);
      while ( __strex(v6 + 1, v3) );
  }
  else
  v18 = 0;
  v7 = operator new(8u);
  *v7 = v2;
  if ( HIDWORD(v2) )
    v8 = (unsigned int *)(HIDWORD(v2) + 8);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
  LODWORD(v10) = sub_13E699C;
  v17 = v7;
  HIDWORD(v10) = sub_13E6808;
  *(_QWORD *)&v18 = v10;
  MinecraftScreenModel::getInfiniteInviteLink(v5, &v19, (int)&v17);
  if ( v18 )
    v18();
    v11 = (unsigned int *)(HIDWORD(v2) + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
        v13 = __ldrex(v11);
      while ( __strex(v13 - 1, v11) );
      v13 = (*v11)--;
    if ( v13 == 1 )
  result = v21;
    v15 = (unsigned int *)(v21 + 8);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall RealmsSettingsScreenController::_refreshRealmsConfigDetails(RealmsSettingsScreenController *this, Realms::RealmsConfigInfo *a2)
{
  int v2; // r5@0
  RealmsSettingsScreenController *v3; // r10@1
  Realms::RealmsConfigInfo *v4; // r4@1
  int v5; // r7@1
  int v6; // r8@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  int v11; // r1@19
  void *v12; // r0@19
  int *v13; // r0@20
  int v14; // r11@22
  signed int v15; // r6@23
  int v16; // r9@23
  int v17; // r7@25
  int **v18; // r2@26
  int v19; // r6@30
  int v20; // r7@32
  int v21; // r8@33
  bool v22; // zf@34
  RealmsSettingsScreenController *v24; // [sp+4h] [bp-44h]@1
  char v25; // [sp+Ch] [bp-3Ch]@28

  v3 = this;
  v4 = a2;
  EntityInteraction::setInteractText((int *)this + 182, (int *)a2);
  v5 = *(_QWORD *)((char *)v3 + 732) >> 32;
  v6 = *(_QWORD *)((char *)v3 + 732);
  v24 = (RealmsSettingsScreenController *)((char *)v3 + 732);
  if ( v5 != v6 )
  {
    v2 = *(_QWORD *)((char *)v3 + 732);
    do
    {
      v11 = *(_DWORD *)(v2 + 4);
      v12 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
      {
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
          j_j_j_j__ZdlPv_9(v12);
      }
      v13 = (int *)(*(_DWORD *)v2 - 12);
      if ( v13 != &dword_28898C0 )
        v9 = (unsigned int *)(*(_DWORD *)v2 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      v2 += 16;
    }
    while ( v2 != v5 );
  }
  *((_DWORD *)v3 + 184) = v6;
  v14 = *(_QWORD *)((char *)v4 + 4);
  if ( (signed int)((*(_QWORD *)((char *)v4 + 4) >> 32) - v14) > 0 )
    v15 = 1;
    v2 = 0;
    v16 = 0;
    while ( 1 )
      v17 = v14 + v2;
      if ( v6 == *((_DWORD *)v3 + 185) )
        std::vector<Realms::RealmsConfigInfo::Version,std::allocator<Realms::RealmsConfigInfo::Version>>::_M_emplace_back_aux<Realms::RealmsConfigInfo::Version const&>(
          v24,
          v14 + v2);
        v18 = (int **)(v14 + v2);
      else
        sub_21E8AF4((int *)v6, (int *)(v14 + v2));
        sub_21E8AF4((int *)(v6 + 4), (int *)(v17 + 4));
        v18 = (int **)(v14 + 16 * v16);
        *(_QWORD *)(v6 + 8) = *(_QWORD *)(v17 + 8);
        *((_DWORD *)v3 + 184) += 16;
      std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert<std::string const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::string,true>>>>(
        (int *)&v25,
        (unsigned __int64 *)v3 + 93,
        v18);
      v14 = *(_QWORD *)((char *)v4 + 4);
      if ( v15 >= (signed int)((*(_QWORD *)((char *)v4 + 4) >> 32) - v14) >> 4 )
        break;
      ++v16;
      v6 = *((_DWORD *)v3 + 184);
      ++v15;
    v6 = *((_DWORD *)v3 + 184);
  v19 = *(_DWORD *)v24;
  if ( *(_DWORD *)v24 != v6 )
    sub_13E1B5C(*(_DWORD *)v24, v6, 2 * (31 - __clz((v6 - v19) >> 4)), 0);
    if ( v6 - v19 <= 256 )
      sub_13E25B8(v19, (int *)v6);
    else
      v20 = v19 + 256;
      sub_13E25B8(v19, (int *)(v19 + 256));
      if ( v19 + 256 != v6 )
        v21 = v6 - 256;
        do
          v2 &= 0xFFFFFF00;
          sub_13E27FC(v20);
          v20 = v19 + 272;
          v22 = v21 == v19 + 16;
          v19 += 16;
        while ( !v22 );
  return RealmsSettingsScreenController::_updateVersionsModel((int)v3, &Util::EMPTY_STRING, 1);
}


int __fastcall RealmsSettingsScreenController::_saveSettingsAndExitScreen(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r5@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  _QWORD *v5; // r0@7
  unsigned int *v6; // r1@8
  unsigned int v7; // r2@10
  __int64 v8; // r1@13
  unsigned int *v9; // r1@16
  unsigned int v10; // r0@18
  int result; // r0@23
  unsigned int *v12; // r2@24
  unsigned int v13; // r1@26
  _QWORD *v14; // [sp+0h] [bp-28h]@13
  void (*v15)(void); // [sp+8h] [bp-20h]@7
  char v16; // [sp+10h] [bp-18h]@1
  int v17; // [sp+14h] [bp-14h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v16, (int)this);
  v2 = *(_QWORD *)&v16;
  if ( v17 )
  {
    v3 = (unsigned int *)(v17 + 8);
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
  v15 = 0;
  v5 = operator new(8u);
  *v5 = v2;
  if ( HIDWORD(v2) )
    v6 = (unsigned int *)(HIDWORD(v2) + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
      ++*v6;
  LODWORD(v8) = sub_13E31D0;
  v14 = v5;
  HIDWORD(v8) = sub_13E3094;
  *(_QWORD *)&v15 = v8;
  RealmsSettingsScreenController::_saveSettings((int)v1, 0, (int)&v14);
  if ( v15 )
    v15();
    v9 = (unsigned int *)(HIDWORD(v2) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  result = v17;
    v12 = (unsigned int *)(v17 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall RealmsSettingsScreenController::_updateWorld(RealmsSettingsScreenController *this, Realms::World *a2)
{
  Realms::World *v2; // r10@1
  RealmsSettingsScreenController *v3; // r9@1
  int *v4; // r8@1
  int v5; // r1@1
  int v6; // r3@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r6@1
  int v10; // r7@1
  int v11; // r1@1
  __int16 v12; // r2@1
  int v13; // r0@1
  int v14; // r6@1
  int v15; // r7@2
  int v16; // r2@2
  int *i; // r0@2
  int *v18; // r1@4
  int v19; // r8@8
  __int64 v20; // kr10_8@8
  unsigned int *v21; // r0@9
  unsigned int v22; // r1@11
  __int64 v23; // kr18_8@14
  __int64 v24; // r6@14
  unsigned int v25; // r4@14
  _QWORD *v26; // r0@17
  unsigned int *v27; // r2@18
  unsigned int v28; // r3@20
  __int64 v29; // r2@23
  unsigned int *v30; // r1@26
  unsigned int v31; // r0@28
  int v32; // r0@33
  unsigned int *v33; // r2@34
  unsigned int v34; // r1@36
  int *v35; // r4@41
  int *v36; // r6@41
  unsigned int *v37; // r2@43
  signed int v38; // r1@45
  int *v39; // r0@51
  _QWORD *v40; // [sp+0h] [bp-58h]@23
  void (*v41)(void); // [sp+8h] [bp-50h]@17
  __int64 v42; // [sp+10h] [bp-48h]@8
  char v43; // [sp+1Ch] [bp-3Ch]@8
  int v44; // [sp+20h] [bp-38h]@8
  int *v45; // [sp+24h] [bp-34h]@1
  int *v46; // [sp+28h] [bp-30h]@1
  int v47; // [sp+2Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  v4 = (int *)((char *)this + 532);
  *((_QWORD *)this + 65) = *(_QWORD *)a2;
  *((_DWORD *)this + 132) = *((_DWORD *)a2 + 2);
  EntityInteraction::setInteractText((int *)this + 133, (int *)a2 + 3);
  EntityInteraction::setInteractText((int *)v3 + 134, (int *)v2 + 4);
  EntityInteraction::setInteractText((int *)v3 + 135, (int *)v2 + 5);
  EntityInteraction::setInteractText((int *)v3 + 136, (int *)v2 + 6);
  v5 = (int)v3 + 548;
  v6 = *((_DWORD *)v2 + 8);
  v7 = *((_DWORD *)v2 + 9);
  v8 = *((_DWORD *)v2 + 10);
  v9 = *((_DWORD *)v2 + 11);
  v10 = *((_DWORD *)v2 + 12);
  *(_DWORD *)v5 = *((_DWORD *)v2 + 7);
  *(_DWORD *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 8) = v7;
  *(_DWORD *)(v5 + 12) = v8;
  *(_DWORD *)(v5 + 16) = v9;
  *(_DWORD *)(v5 + 20) = v10;
  v11 = (int)v3 + 572;
  v12 = *((_WORD *)v2 + 26);
  *(_BYTE *)(v11 + 2) = *((_BYTE *)v2 + 54);
  *(_WORD *)v11 = v12;
  std::vector<Realms::InvitedPlayer,std::allocator<Realms::InvitedPlayer>>::operator=(
    (int)v3 + 576,
    (unsigned __int64 *)v2 + 7);
  *((_QWORD *)v3 + 74) = *((_QWORD *)v3 + 65);
  EntityInteraction::setInteractText((int *)v3 + 151, v4);
  *((_DWORD *)v3 + 160) = *((_DWORD *)v3 + 142);
  *((_DWORD *)v3 + 159) = *((_DWORD *)v3 + 141);
  *((_BYTE *)v3 + 644) = *((_BYTE *)v3 + 572);
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v13 = *((_QWORD *)v3 + 72) >> 32;
  v14 = *((_QWORD *)v3 + 72);
  if ( v14 != v13 )
  {
    v15 = v13 - 24;
    v16 = 0;
    for ( i = 0; ; i = v46 )
    {
      v18 = (int *)(v14 + 4);
      if ( i == (int *)v16 )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)&v45,
          v18);
      else
        v46 = sub_21E8AF4(i, v18) + 1;
      if ( v15 == v14 )
        break;
      v14 += 24;
      v16 = v47;
    }
  }
  MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v43, (int)v3);
  v19 = *((_DWORD *)v3 + 106);
  v42 = *((_QWORD *)v3 + 65);
  v20 = *(_QWORD *)&v43;
  if ( v44 )
    v21 = (unsigned int *)(v44 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 + 1, v21) );
    else
      ++*v21;
  v23 = *(_QWORD *)&v45;
  LODWORD(v24) = 0;
  v25 = v46 - v45;
  if ( v25 )
    if ( v25 >= 0x40000000 )
      sub_21E57F4();
    LODWORD(v24) = operator new((char *)v46 - (char *)v45);
  HIDWORD(v24) = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                   v23,
                   SHIDWORD(v23),
                   v24);
  v41 = 0;
  v26 = operator new(0x14u);
  *v26 = v20;
  if ( HIDWORD(v20) )
    v27 = (unsigned int *)(HIDWORD(v20) + 8);
        v28 = __ldrex(v27);
      while ( __strex(v28 + 1, v27) );
      ++*v27;
  HIDWORD(v29) = sub_13E0970;
  v26[1] = v24;
  LODWORD(v29) = sub_13E0F58;
  *((_DWORD *)v26 + 4) = v24 + 4 * v25;
  v40 = v26;
  *(_QWORD *)&v41 = v29;
  MinecraftScreenModel::getRealmsBlocklist(v19, &v42, (int)&v40);
  if ( v41 )
    v41();
    v30 = (unsigned int *)(HIDWORD(v20) + 8);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v20) + 12))(HIDWORD(v20));
  v32 = v44;
    v33 = (unsigned int *)(v44 + 8);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 == 1 )
      (*(void (**)(void))(*(_DWORD *)v32 + 12))();
  v36 = v46;
  v35 = v45;
  if ( v45 != v46 )
    do
      v39 = (int *)(*v35 - 12);
      if ( v39 != &dword_28898C0 )
      {
        v37 = (unsigned int *)(*v35 - 4);
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
          j_j_j_j__ZdlPv_9(v39);
      }
      ++v35;
    while ( v35 != v36 );
    v35 = v45;
  if ( v35 )
    operator delete(v35);
}


void __fastcall RealmsSettingsScreenController::_goToManageSubscriptionLink(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r4@1
  char v2; // r0@1
  double v3; // r0@2
  unsigned int v4; // r0@3
  int v5; // r6@5
  int *v6; // r5@5
  void **v7; // r0@8
  void *v8; // r0@8
  void **v9; // r0@9
  void *v10; // r0@9
  void **v11; // r0@10
  void *v12; // r0@10
  void **v13; // r0@11
  void *v14; // r0@11
  void **v15; // r0@12
  void *v16; // r0@12
  void **v17; // r0@13
  void *v18; // r0@13
  int *v19; // r0@14
  int v20; // r0@14
  void *v21; // r0@14
  unsigned int *v22; // r2@16
  signed int v23; // r1@18
  unsigned int *v24; // r2@24
  signed int v25; // r1@26
  unsigned int *v26; // r2@28
  signed int v27; // r1@30
  unsigned int *v28; // r2@32
  signed int v29; // r1@34
  unsigned int *v30; // r2@36
  signed int v31; // r1@38
  unsigned int *v32; // r2@40
  signed int v33; // r1@42
  unsigned int *v34; // r2@44
  signed int v35; // r1@46
  int v36; // [sp+0h] [bp-48h]@14
  int v37; // [sp+8h] [bp-40h]@13
  int v38; // [sp+10h] [bp-38h]@12
  int v39; // [sp+18h] [bp-30h]@11
  int v40; // [sp+20h] [bp-28h]@10
  int v41; // [sp+28h] [bp-20h]@9
  int v42; // [sp+30h] [bp-18h]@8

  v1 = this;
  v2 = byte_27E6A30;
  __dmb();
  if ( !(v2 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27E6A30) )
  {
    unk_27E6A78 = 0;
    dword_27E6A7C = 0;
    dword_27E6A80 = 1065353216;
    LODWORD(v3) = &dword_27E6A80;
    *(_DWORD *)algn_27E6A84 = 0;
    v4 = sub_21E6254(v3);
    dword_27E6A74 = v4;
    if ( v4 == 1 )
    {
      dword_27E6A88 = 0;
      v6 = &dword_27E6A88;
    }
    else
      if ( v4 >= 0x40000000 )
        sub_21E57F4();
      v5 = 4 * v4;
      v6 = (int *)operator new(4 * v4);
      _aeabi_memclr4(v6, v5);
    dword_27E6A70 = (int)v6;
    _cxa_atexit(std::unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~unordered_map);
    j___cxa_guard_release((unsigned int *)&byte_27E6A30);
  }
  if ( !dword_27E6A7C )
    sub_21E94B4((void **)&v42, "ios.store");
    v7 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                    (int)&dword_27E6A70,
                    (int **)&v42);
    sub_21E8190(v7, "http://aka.ms/mcappstore", (_BYTE *)0x18);
    v8 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v42 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    sub_21E94B4((void **)&v41, "android.googleplay");
    v9 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                    (int **)&v41);
    sub_21E8190(v9, "http://aka.ms/mcgoogleplay", (_BYTE *)0x1A);
    v10 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v41 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    sub_21E94B4((void **)&v40, "android.amazonappstore");
    v11 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int)&dword_27E6A70,
                     (int **)&v40);
    sub_21E8190(v11, "http://aka.ms/mcamazonstore", (_BYTE *)0x1B);
    v12 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v40 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    sub_21E94B4((void **)&v39, "uwp.store");
    v13 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)&v39);
    sub_21E8190(v13, "http://aka.ms/mcotherappstore", (_BYTE *)0x1D);
    v14 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v39 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    sub_21E94B4((void **)&v38, "oculus.store");
    v15 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)&v38);
    sub_21E8190(v15, "http://aka.ms/mcotherappstore", (_BYTE *)0x1D);
    v16 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v38 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    sub_21E94B4((void **)&v37, "other");
    v17 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)&v37);
    sub_21E8190(v17, "http://aka.ms/mcotherappstore", (_BYTE *)0x1D);
    v18 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v37 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
  v19 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                 (unsigned __int64 *)&dword_27E6A70,
                 (int **)v1 + 168);
  sub_21E8AF4(&v36, v19);
  v20 = *((_DWORD *)v1 + 106);
  MinecraftScreenModel::openUriLink();
  v21 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
}


int __fastcall RealmsSettingsScreenController::RealmsSettingsScreenController(int a1, int a2, const Realms::World *a3)
{
  int v3; // r6@1
  int v4; // r4@1
  const Realms::World *v5; // r8@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  int v9; // r7@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r0@10
  unsigned int *v12; // r5@14
  unsigned int v13; // r0@16
  void *v14; // r5@21
  void *v15; // r0@21
  int v16; // r0@23
  unsigned int *v17; // r0@24
  unsigned int v18; // r1@26
  int v19; // r5@29
  unsigned int *v20; // r1@30
  unsigned int v21; // r0@32
  unsigned int *v22; // r6@36
  unsigned int v23; // r0@38
  int v25; // [sp+4h] [bp-44h]@23
  int v26; // [sp+8h] [bp-40h]@23
  char v27; // [sp+Fh] [bp-39h]@21
  int v28; // [sp+10h] [bp-38h]@1
  int v29; // [sp+14h] [bp-34h]@1
  char v30; // [sp+20h] [bp-28h]@21

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v28 = *(_DWORD *)a2;
  v6 = *(_DWORD *)(a2 + 4);
  v29 = v6;
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 4);
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
  SettingsScreenControllerBase::SettingsScreenControllerBase(v4, (int)&v28);
  v9 = v29;
  if ( v29 )
    v10 = (unsigned int *)(v29 + 4);
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
  *(_DWORD *)v4 = &off_26E7E20;
  *(_DWORD *)(v4 + 516) = 0;
  Realms::World::World((Realms::World *)(v4 + 520), v5);
  *(_DWORD *)(v4 + 604) = &unk_28898CC;
  *(_DWORD *)(v4 + 608) = &unk_28898CC;
  *(_DWORD *)(v4 + 612) = &unk_28898CC;
  *(_DWORD *)(v4 + 616) = &unk_28898CC;
  *(_BYTE *)(v4 + 632) = 0;
  *(_DWORD *)(v4 + 636) = 0;
  *(_DWORD *)(v4 + 640) = 2;
  *(_BYTE *)(v4 + 644) = 0;
  *(_BYTE *)(v4 + 645) = 0;
  *(_BYTE *)(v4 + 646) = 0;
  *(_DWORD *)(v4 + 648) = 0;
  *(_DWORD *)(v4 + 652) = 0;
  *(_DWORD *)(v4 + 656) = 0;
  *(_DWORD *)(v4 + 664) = 0;
  *(_DWORD *)(v4 + 668) = 0;
  *(_DWORD *)(v4 + 672) = 0;
  *(_DWORD *)(v4 + 676) = 0;
  *(_DWORD *)(v4 + 680) = 0;
  *(_DWORD *)(v4 + 664) = 1;
  sub_21E94B4((void **)(v4 + 668), (const char *)&unk_257BC67);
  sub_21E94B4((void **)(v4 + 672), (const char *)&unk_257BC67);
  *(_BYTE *)(v4 + 684) = 0;
  *(_BYTE *)(v4 + 685) = 0;
  *(_DWORD *)(v4 + 688) = 0;
  *(_DWORD *)(v4 + 692) = &unk_28898CC;
  v27 = 1;
  std::__shared_ptr<RealmsWhitelistScreenController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RealmsWhitelistScreenController>,std::shared_ptr<MainMenuScreenModel> &,Realms::World const&,bool>(
    v4 + 696,
    (int)&v30,
    v3,
    v5,
    &v27);
  *(_DWORD *)(v4 + 704) = 0;
  *(_WORD *)(v4 + 708) = 0;
  RealmsSettingsScreenController::RealmsVersionState::RealmsVersionState((RealmsSettingsScreenController::RealmsVersionState *)(v4 + 712));
  v14 = operator new(0x28u);
  _aeabi_memclr8(v14, 40);
  v15 = *(void **)(v4 + 516);
  *(_DWORD *)(v4 + 516) = v14;
  if ( v15 )
    operator delete(v15);
  *(_QWORD *)(v4 + 592) = *(_QWORD *)(v4 + 520);
  EntityInteraction::setInteractText((int *)(v4 + 604), (int *)(v4 + 532));
  *(_DWORD *)(v4 + 640) = *(_DWORD *)(v4 + 568);
  *(_DWORD *)(v4 + 636) = *(_DWORD *)(v4 + 564);
  *(_BYTE *)(v4 + 644) = *(_BYTE *)(v4 + 572);
  MinecraftScreenController::_setExitBehavior(v4, 3);
  RealmsSettingsScreenController::_registerEventHandlers((RealmsSettingsScreenController *)v4);
  RealmsSettingsScreenController::_registerBindings((RealmsSettingsScreenController *)v4);
  v25 = *(_DWORD *)(v4 + 696);
  v16 = *(_DWORD *)(v4 + 700);
  v26 = v16;
  if ( v16 )
    v17 = (unsigned int *)(v16 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
      ++*v17;
  ScreenController::_registerSubController(v4, (int)&v25);
  v19 = v26;
  if ( v26 )
    v20 = (unsigned int *)(v26 + 4);
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
  return v4;
}


void __fastcall RealmsSettingsScreenController::_getSubscriptionOriginMismatchLabelText(RealmsSettingsScreenController *this, int a2)
{
  int *v2; // r4@1
  char *v3; // r4@1
  int v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r0@16
  void *v9; // r0@17
  void *v10; // r0@18
  unsigned int *v11; // r2@20
  signed int v12; // r1@22
  unsigned int *v13; // r2@24
  signed int v14; // r1@26
  unsigned int *v15; // r2@28
  signed int v16; // r1@30
  int v17; // [sp+0h] [bp-40h]@1
  char *v18; // [sp+4h] [bp-3Ch]@1
  char *v19; // [sp+8h] [bp-38h]@1
  char *v20; // [sp+Ch] [bp-34h]@1
  int v21; // [sp+14h] [bp-2Ch]@1
  int v22; // [sp+18h] [bp-28h]@1

  v2 = (int *)this;
  RealmsSettingsScreenController::_getLocalizedStoreDisplayName(&v22, a2, (int **)(a2 + 672));
  sub_21E94B4((void **)&v21, "realmsSettingsScreen.nonMatchingPurchasePlatformFormat");
  sub_21E8AF4(&v17, &v22);
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
          j_j_j_j__ZdlPv_9(v7);
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
    v11 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v21 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v22 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


void __fastcall RealmsSettingsScreenController::_uploadWorld(RealmsSettingsScreenController *this, int a2)
{
  RealmsSettingsScreenController::_uploadWorld(this, a2);
}


int __fastcall RealmsSettingsScreenController::_queryRealmsConfigInfo(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r6@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  int v5; // r5@7
  unsigned int *v6; // r0@8
  unsigned int v7; // r1@10
  _QWORD *v8; // r0@13
  unsigned int *v9; // r1@14
  unsigned int v10; // r2@16
  __int64 v11; // r1@19
  unsigned int *v12; // r5@22
  unsigned int v13; // r0@24
  unsigned int v14; // r0@31
  int result; // r0@36
  unsigned int *v16; // r2@37
  unsigned int v17; // r1@39
  _QWORD *v18; // [sp+0h] [bp-38h]@19
  void (*v19)(void); // [sp+8h] [bp-30h]@13
  __int64 v20; // [sp+10h] [bp-28h]@7
  char v21; // [sp+1Ch] [bp-1Ch]@1
  int v22; // [sp+20h] [bp-18h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v21, (int)this);
  v2 = *(_QWORD *)&v21;
  if ( v22 )
  {
    v3 = (unsigned int *)(v22 + 8);
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
  v5 = *((_DWORD *)v1 + 106);
  v20 = *((_QWORD *)v1 + 65);
  if ( HIDWORD(v2) )
    v6 = (unsigned int *)(HIDWORD(v2) + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
      ++*v6;
  v19 = 0;
  v8 = operator new(8u);
  *v8 = v2;
    v9 = (unsigned int *)(HIDWORD(v2) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
  LODWORD(v11) = sub_13E6764;
  v18 = v8;
  HIDWORD(v11) = sub_13E65EC;
  *(_QWORD *)&v19 = v11;
  MinecraftScreenModel::getRealmsConfigDetails(v5, &v20, (int)&v18);
  if ( v19 )
    v19();
    v12 = (unsigned int *)(HIDWORD(v2) + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
        v14 = __ldrex(v12);
      while ( __strex(v14 - 1, v12) );
      v14 = (*v12)--;
    if ( v14 == 1 )
  result = v22;
    v16 = (unsigned int *)(v22 + 8);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall RealmsSettingsScreenController::_getMaxPlayerLabelText(RealmsSettingsScreenController *this, int a2)
{
  RealmsSettingsScreenController::_getMaxPlayerLabelText(this, a2);
}


signed int __fastcall RealmsSettingsScreenController::_renewConsumableRealmHandler(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r4@1
  char v2; // r6@1
  int v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  signed int result; // r0@3
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+4h] [bp+0h]@1
  int v12; // [sp+8h] [bp+4h]@1
  int v13; // [sp+Ch] [bp+8h]@1
  int v14; // [sp+10h] [bp+Ch]@1
  char v15; // [sp+14h] [bp+10h]@1
  char v16; // [sp+15h] [bp+11h]@1

  v1 = this;
  v2 = *((_BYTE *)this + 552);
  v3 = *((_DWORD *)this + 106);
  v11 = 2;
  sub_21E8AF4(&v12, (int *)this + 151);
  sub_21E8AF4(&v13, (int *)v1 + 167);
  v14 = 1;
  v15 = v2;
  v16 = 0;
  MainMenuScreenModel::navigateToRealmsCreateScreen(v3, (int)&v11);
  v4 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v8 = __ldrex(v7);
        __strex(v8 - 1, v7);
      }
      while ( &v11 );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v12 - 4);
        v10 = __ldrex(v9);
        __strex(v10 - 1, v9);
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  result = 1;
  *((_BYTE *)v1 + 685) = 1;
  return result;
}


int __fastcall RealmsSettingsScreenController::_openCloseRealm(RealmsSettingsScreenController *this, bool a2)
{
  bool v2; // r4@1
  int v3; // r0@1
  int v4; // r8@1
  unsigned int *v5; // r3@2
  unsigned int v6; // r1@4
  int v7; // r9@5
  int v8; // lr@5
  signed int v9; // r7@6
  int v10; // r10@6
  int v11; // r12@6
  signed int v12; // r11@6
  unsigned int *v13; // r2@9
  unsigned int v14; // r7@11
  unsigned int *v15; // r7@15
  unsigned int v16; // r6@17
  unsigned int v17; // r6@24
  signed int v18; // r2@28
  unsigned int *v19; // r3@29
  unsigned int v20; // r7@31
  __int64 v21; // kr18_8@36
  unsigned int *v22; // r7@38
  unsigned int v23; // r6@39
  int v24; // r6@40
  __int64 *v25; // r7@40
  unsigned int *v26; // r6@44
  unsigned int v27; // r5@46
  unsigned int *v28; // r2@50
  unsigned int v29; // r6@52
  unsigned int *v30; // r2@56
  unsigned int v31; // r6@58
  int v32; // r5@61
  unsigned int *v33; // r2@62
  unsigned int v34; // r6@64
  unsigned int *v35; // r2@68
  unsigned int v36; // r3@70
  unsigned int *v37; // r0@74
  unsigned int v38; // r2@76
  unsigned int *v39; // r0@80
  unsigned int v40; // r1@82
  _DWORD *v41; // r1@85
  _DWORD *v42; // r0@85
  size_t v43; // r2@85
  int v44; // r6@91
  unsigned int *v45; // r0@92
  unsigned int v46; // r1@94
  int v47; // r5@97
  char v48; // r7@97
  unsigned int *v49; // r0@98
  unsigned int v50; // r1@100
  int v51; // r4@103
  unsigned int *v52; // r0@104
  unsigned int v53; // r1@106
  int v54; // r8@109
  unsigned int *v55; // r0@110
  unsigned int v56; // r1@112
  int v57; // r9@115
  unsigned int *v58; // r0@116
  unsigned int v59; // r1@118
  int v60; // r10@121
  unsigned int *v61; // r0@122
  unsigned int v62; // r1@124
  int v63; // r11@127
  unsigned int *v64; // r0@128
  unsigned int v65; // r1@130
  _DWORD *v66; // r0@133
  unsigned int *v67; // r1@134
  unsigned int v68; // r2@136
  unsigned int *v69; // r1@140
  unsigned int v70; // r2@142
  unsigned int *v71; // r1@146
  unsigned int v72; // r2@148
  unsigned int *v73; // r1@152
  unsigned int v74; // r2@154
  unsigned int *v75; // r1@158
  unsigned int v76; // r2@160
  unsigned int *v77; // r1@164
  unsigned int v78; // r2@166
  unsigned int *v79; // r1@170
  unsigned int v80; // r2@172
  __int64 v81; // r1@175
  unsigned int *v82; // r1@178
  unsigned int v83; // r0@180
  unsigned int *v84; // r1@186
  unsigned int v85; // r0@188
  unsigned int *v86; // r1@194
  unsigned int v87; // r0@196
  unsigned int *v88; // r1@202
  unsigned int v89; // r0@204
  unsigned int *v90; // r1@210
  unsigned int v91; // r0@212
  unsigned int *v92; // r1@218
  unsigned int v93; // r0@220
  unsigned int *v94; // r1@226
  unsigned int v95; // r0@228
  int v96; // r0@233
  unsigned int *v97; // r2@234
  unsigned int v98; // r1@236
  int v99; // r0@241
  unsigned int *v100; // r2@242
  unsigned int v101; // r1@244
  int v102; // r0@249
  unsigned int *v103; // r2@250
  unsigned int v104; // r1@252
  int v105; // r0@257
  unsigned int *v106; // r2@258
  unsigned int v107; // r1@260
  int v108; // r0@265
  unsigned int *v109; // r2@266
  unsigned int v110; // r1@268
  int v111; // r0@273
  unsigned int *v112; // r2@274
  unsigned int v113; // r1@276
  int v114; // r0@281
  unsigned int *v115; // r2@282
  unsigned int v116; // r1@284
  unsigned int *v117; // r1@290
  unsigned int v118; // r0@292
  unsigned int *v119; // r1@298
  unsigned int v120; // r0@300
  unsigned int *v121; // r1@306
  unsigned int v122; // r0@308
  unsigned int *v123; // r1@314
  unsigned int v124; // r0@316
  unsigned int *v125; // r1@322
  unsigned int v126; // r0@324
  unsigned int *v127; // r1@330
  unsigned int v128; // r0@332
  int result; // r0@337
  unsigned int *v130; // r2@338
  unsigned int v131; // r1@340
  char v132; // [sp+4h] [bp-DCh]@109
  int v133; // [sp+8h] [bp-D8h]@103
  int v134; // [sp+Ch] [bp-D4h]@115
  char v135; // [sp+10h] [bp-D0h]@127
  char v136; // [sp+14h] [bp-CCh]@115
  char v137; // [sp+18h] [bp-C8h]@115
  int v138; // [sp+1Ch] [bp-C4h]@109
  int v139; // [sp+20h] [bp-C0h]@121
  int v140; // [sp+24h] [bp-BCh]@127
  char v141; // [sp+28h] [bp-B8h]@133
  int v142; // [sp+2Ch] [bp-B4h]@115
  signed int v143; // [sp+30h] [bp-B0h]@121
  int v144; // [sp+34h] [bp-ACh]@109
  int v145; // [sp+38h] [bp-A8h]@91
  int v146; // [sp+3Ch] [bp-A4h]@103
  int v147; // [sp+40h] [bp-A0h]@97
  int v148; // [sp+44h] [bp-9Ch]@91
  char *v149; // [sp+48h] [bp-98h]@40
  RealmsSettingsScreenController *v150; // [sp+4Ch] [bp-94h]@1
  signed int v151; // [sp+50h] [bp-90h]@7
  _DWORD *v152; // [sp+54h] [bp-8Ch]@175
  void (*v153)(void); // [sp+5Ch] [bp-84h]@133
  __int64 v154; // [sp+64h] [bp-7Ch]@40
  bool v155; // [sp+6Ch] [bp-74h]@49
  int v156; // [sp+70h] [bp-70h]@49
  int v157; // [sp+74h] [bp-6Ch]@49
  int v158; // [sp+78h] [bp-68h]@55
  int v159; // [sp+7Ch] [bp-64h]@55
  bool v160; // [sp+80h] [bp-60h]@61
  int v161; // [sp+84h] [bp-5Ch]@61
  int v162; // [sp+88h] [bp-58h]@61
  bool v163; // [sp+8Ch] [bp-54h]@67
  bool v164; // [sp+90h] [bp-50h]@67
  int v165; // [sp+94h] [bp-4Ch]@67
  int v166; // [sp+98h] [bp-48h]@67
  int v167; // [sp+9Ch] [bp-44h]@73
  int v168; // [sp+A0h] [bp-40h]@73
  bool v169; // [sp+A4h] [bp-3Ch]@79
  int v170; // [sp+A8h] [bp-38h]@79
  int v171; // [sp+ACh] [bp-34h]@79
  bool v172; // [sp+B0h] [bp-30h]@85
  __int64 v173; // [sp+B4h] [bp-2Ch]@1

  v2 = a2;
  v150 = this;
  MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v173, (int)this);
  v4 = HIDWORD(v173);
  v3 = v173;
  if ( !HIDWORD(v173) )
  {
    v7 = 0;
    v12 = 1;
    v11 = v173;
    v8 = v173;
    v151 = 1;
    v10 = 0;
    goto LABEL_36;
  }
  v5 = (unsigned int *)(HIDWORD(v173) + 8);
  if ( !&pthread_create )
    v7 = HIDWORD(v173);
    ++*v5;
    goto LABEL_9;
  __dmb();
  do
    v6 = __ldrex(v5);
  while ( __strex(v6 + 1, v5) );
  v7 = HIDWORD(v173);
  v8 = v173;
  if ( HIDWORD(v173) )
LABEL_9:
    v13 = (unsigned int *)(v7 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 + 1, v13) );
      v10 = HIDWORD(v173);
      v11 = v173;
      if ( !HIDWORD(v173) )
      {
        v10 = 0;
        v12 = 1;
LABEL_21:
        v9 = 0;
        goto LABEL_22;
      }
    }
    else
      v10 = v7;
      v11 = v8;
      ++*v13;
    v15 = (unsigned int *)(v10 + 8);
        v16 = __ldrex(v15);
      while ( __strex(v16 + 1, v15) );
      ++*v15;
    v12 = 0;
    goto LABEL_21;
  v9 = 1;
  v10 = 0;
  v7 = 0;
  v11 = v173;
  v12 = 1;
LABEL_22:
  if ( &pthread_create )
    __dmb();
    do
      v17 = __ldrex(v5);
    while ( __strex(v17 + 1, v5) );
  else
  if ( v9 )
    v18 = 1;
    v19 = (unsigned int *)(v7 + 8);
        v20 = __ldrex(v19);
      while ( __strex(v20 + 1, v19) );
      ++*v19;
    v18 = 0;
  v151 = v18;
LABEL_36:
  v21 = v173;
    v154 = (unsigned int)v173;
    v25 = &v154;
    v149 = (char *)&v154 + 4;
    goto LABEL_49;
    v24 = HIDWORD(v173);
    ++*(_DWORD *)(HIDWORD(v173) + 8);
    v154 = v21;
LABEL_44:
    v26 = (unsigned int *)(v24 + 8);
        v27 = __ldrex(v26);
      while ( __strex(v27 + 1, v26) );
      ++*v26;
  v22 = (unsigned int *)(HIDWORD(v173) + 8);
    v23 = __ldrex(v22);
  while ( __strex(v23 + 1, v22) );
  v24 = HIDWORD(v173);
  v154 = v173;
  v25 = &v154;
  v149 = (char *)&v154 + 4;
    goto LABEL_44;
LABEL_49:
  v155 = v2;
  v156 = v11;
  v157 = v10;
  if ( !v12 )
    v28 = (unsigned int *)(v10 + 8);
        v29 = __ldrex(v28);
      while ( __strex(v29 + 1, v28) );
      ++*v28;
  v158 = v3;
  v159 = v4;
  if ( v4 )
    v30 = (unsigned int *)(v4 + 8);
        v31 = __ldrex(v30);
      while ( __strex(v31 + 1, v30) );
      ++*v30;
  v160 = v2;
  v32 = HIDWORD(v21);
  v161 = v8;
  v162 = v7;
  if ( !v151 )
    v33 = (unsigned int *)(v7 + 8);
        v34 = __ldrex(v33);
      while ( __strex(v34 + 1, v33) );
      v32 = HIDWORD(v21);
      ++*v33;
  v163 = v2;
  v164 = v2;
  v165 = v21;
  v166 = v32;
  if ( v32 )
    v35 = (unsigned int *)(v32 + 8);
        v36 = __ldrex(v35);
      while ( __strex(v36 + 1, v35) );
      ++*v35;
  v167 = v3;
  v168 = v4;
    v37 = (unsigned int *)(v4 + 8);
        v38 = __ldrex(v37);
      while ( __strex(v38 + 1, v37) );
      ++*v37;
  v169 = v2;
  v170 = v8;
  v171 = v7;
    v39 = (unsigned int *)(v7 + 8);
        v40 = __ldrex(v39);
      while ( __strex(v40 + 1, v39) );
      ++*v39;
  v172 = v2;
  v41 = (_DWORD *)*((_DWORD *)v150 + 133);
  v42 = (_DWORD *)*((_DWORD *)v150 + 151);
  v43 = *(v42 - 3);
  if ( v43 == *(v41 - 3)
    && !memcmp(v42, v41, v43)
    && *((_DWORD *)v150 + 160) == *((_DWORD *)v150 + 142)
    && *((_DWORD *)v150 + 159) == *((_DWORD *)v150 + 141)
    && *((_BYTE *)v150 + 644) == *((_BYTE *)v150 + 572) )
    sub_13D9EFC((int)&v154);
    v44 = *(_DWORD *)v25;
    v145 = v32;
    v148 = *(_DWORD *)v149;
    if ( *(_DWORD *)v149 )
      v45 = (unsigned int *)(v148 + 8);
      if ( &pthread_create )
        __dmb();
        do
          v46 = __ldrex(v45);
        while ( __strex(v46 + 1, v45) );
      else
        ++*v45;
    v47 = v156;
    v48 = v155;
    v147 = v157;
    if ( v157 )
      v49 = (unsigned int *)(v157 + 8);
          v50 = __ldrex(v49);
        while ( __strex(v50 + 1, v49) );
        ++*v49;
    v51 = v159;
    v146 = v4;
    v133 = v158;
    if ( v159 )
      v52 = (unsigned int *)(v159 + 8);
          v53 = __ldrex(v52);
        while ( __strex(v53 + 1, v52) );
        ++*v52;
    v144 = v7;
    v54 = v162;
    v138 = v161;
    v132 = v160;
    if ( v162 )
      v55 = (unsigned int *)(v162 + 8);
          v56 = __ldrex(v55);
        while ( __strex(v56 + 1, v55) );
        ++*v55;
    v137 = v163;
    v142 = v10;
    v136 = v164;
    v57 = v166;
    v134 = v165;
    if ( v166 )
      v58 = (unsigned int *)(v166 + 8);
          v59 = __ldrex(v58);
        while ( __strex(v59 + 1, v58) );
        ++*v58;
    v60 = v168;
    v143 = v12;
    v139 = v167;
    if ( v168 )
      v61 = (unsigned int *)(v168 + 8);
          v62 = __ldrex(v61);
        while ( __strex(v62 + 1, v61) );
        ++*v61;
    v63 = v171;
    v140 = v170;
    v135 = v169;
    if ( v171 )
      v64 = (unsigned int *)(v171 + 8);
          v65 = __ldrex(v64);
        while ( __strex(v65 + 1, v64) );
        ++*v64;
    v141 = v172;
    v153 = 0;
    v66 = operator new(0x50u);
    *v66 = v44;
    v66[1] = v148;
    if ( v148 )
      v67 = (unsigned int *)(v148 + 8);
          v68 = __ldrex(v67);
        while ( __strex(v68 + 1, v67) );
        ++*v67;
    *((_BYTE *)v66 + 8) = v48;
    v66[3] = v47;
    v66[4] = v147;
    if ( v147 )
      v69 = (unsigned int *)(v147 + 8);
          v70 = __ldrex(v69);
        while ( __strex(v70 + 1, v69) );
        ++*v69;
    v66[5] = v133;
    v66[6] = v51;
    v32 = v145;
    if ( v51 )
      v71 = (unsigned int *)(v51 + 8);
          v72 = __ldrex(v71);
        while ( __strex(v72 + 1, v71) );
        ++*v71;
    *((_BYTE *)v66 + 28) = v132;
    v66[8] = v138;
    v66[9] = v54;
    if ( v54 )
      v73 = (unsigned int *)(v54 + 8);
          v74 = __ldrex(v73);
        while ( __strex(v74 + 1, v73) );
        ++*v73;
    *((_BYTE *)v66 + 40) = v137;
    *((_BYTE *)v66 + 44) = v136;
    v66[12] = v134;
    v66[13] = v57;
    if ( v57 )
      v75 = (unsigned int *)(v57 + 8);
          v76 = __ldrex(v75);
        while ( __strex(v76 + 1, v75) );
        ++*v75;
    v66[14] = v139;
    v66[15] = v60;
    if ( v60 )
      v77 = (unsigned int *)(v60 + 8);
          v78 = __ldrex(v77);
        while ( __strex(v78 + 1, v77) );
        ++*v77;
    *((_BYTE *)v66 + 64) = v135;
    v66[17] = v140;
    v66[18] = v63;
    if ( v63 )
      v79 = (unsigned int *)(v63 + 8);
          v80 = __ldrex(v79);
        while ( __strex(v80 + 1, v79) );
        ++*v79;
    LODWORD(v81) = sub_13E58A4;
    HIDWORD(v81) = sub_13E589C;
    *((_BYTE *)v66 + 76) = v141;
    v152 = v66;
    *(_QWORD *)&v153 = v81;
    RealmsSettingsScreenController::_saveSettings((int)v150, 0, (int)&v152);
    if ( v153 )
      v153();
      v82 = (unsigned int *)(v63 + 8);
          v83 = __ldrex(v82);
        while ( __strex(v83 - 1, v82) );
        v83 = (*v82)--;
      if ( v83 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v63 + 12))(v63);
    v12 = v143;
      v84 = (unsigned int *)(v60 + 8);
          v85 = __ldrex(v84);
        while ( __strex(v85 - 1, v84) );
        v85 = (*v84)--;
      if ( v85 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v60 + 12))(v60);
    v10 = v142;
      v86 = (unsigned int *)(v57 + 8);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      if ( v87 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v57 + 12))(v57);
    v7 = v144;
      v88 = (unsigned int *)(v54 + 8);
          v89 = __ldrex(v88);
        while ( __strex(v89 - 1, v88) );
        v89 = (*v88)--;
      if ( v89 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 12))(v54);
    v4 = v146;
      v90 = (unsigned int *)(v51 + 8);
          v91 = __ldrex(v90);
        while ( __strex(v91 - 1, v90) );
        v91 = (*v90)--;
      if ( v91 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v51 + 12))(v51);
      v92 = (unsigned int *)(v147 + 8);
          v93 = __ldrex(v92);
        while ( __strex(v93 - 1, v92) );
        v93 = (*v92)--;
      if ( v93 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v147 + 12))(v147);
      v94 = (unsigned int *)(v148 + 8);
          v95 = __ldrex(v94);
        while ( __strex(v95 - 1, v94) );
        v95 = (*v94)--;
      if ( v95 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v148 + 12))(v148);
  v96 = v171;
  if ( v171 )
    v97 = (unsigned int *)(v171 + 8);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 == 1 )
      (*(void (**)(void))(*(_DWORD *)v96 + 12))();
  v99 = v168;
  if ( v168 )
    v100 = (unsigned int *)(v168 + 8);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 == 1 )
      (*(void (**)(void))(*(_DWORD *)v99 + 12))();
  v102 = v166;
  if ( v166 )
    v103 = (unsigned int *)(v166 + 8);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 == 1 )
      (*(void (**)(void))(*(_DWORD *)v102 + 12))();
  v105 = v162;
  if ( v162 )
    v106 = (unsigned int *)(v162 + 8);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 == 1 )
      (*(void (**)(void))(*(_DWORD *)v105 + 12))();
  v108 = v159;
  if ( v159 )
    v109 = (unsigned int *)(v159 + 8);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 == 1 )
      (*(void (**)(void))(*(_DWORD *)v108 + 12))();
  v111 = v157;
  if ( v157 )
    v112 = (unsigned int *)(v157 + 8);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 == 1 )
      (*(void (**)(void))(*(_DWORD *)v111 + 12))();
  v114 = *(_DWORD *)v149;
  if ( *(_DWORD *)v149 )
    v115 = (unsigned int *)(v114 + 8);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 == 1 )
      (*(void (**)(void))(*(_DWORD *)v114 + 12))();
    v117 = (unsigned int *)(v32 + 8);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
    v119 = (unsigned int *)(v7 + 8);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    v121 = (unsigned int *)(v4 + 8);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    v123 = (unsigned int *)(v10 + 8);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
    v125 = (unsigned int *)(v7 + 8);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 == 1 )
    v127 = (unsigned int *)(v4 + 8);
        v128 = __ldrex(v127);
      while ( __strex(v128 - 1, v127) );
      v128 = (*v127)--;
    if ( v128 == 1 )
  result = HIDWORD(v173);
    v130 = (unsigned int *)(HIDWORD(v173) + 8);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall RealmsSettingsScreenController::_setGameModeWithConfirmation(int result, int a2)
{
  int v2; // r5@1
  __int64 v3; // kr00_8@2
  unsigned int *v4; // r0@3
  unsigned int v5; // r1@5
  _DWORD *v6; // r0@9
  unsigned int *v7; // r1@10
  unsigned int v8; // r2@12
  __int64 v9; // r1@15
  unsigned int *v10; // r1@18
  unsigned int v11; // r0@20
  unsigned int *v12; // r2@26
  unsigned int v13; // r1@28
  _DWORD *v14; // [sp+0h] [bp-28h]@15
  void (*v15)(void); // [sp+8h] [bp-20h]@9
  char v16; // [sp+10h] [bp-18h]@2
  int v17; // [sp+14h] [bp-14h]@2

  v2 = result;
  if ( a2 == 1 )
  {
    MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v16, result);
    v3 = *(_QWORD *)&v16;
    if ( v17 )
    {
      v4 = (unsigned int *)(v17 + 8);
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
    v15 = 0;
    v6 = operator new(0xCu);
    *(_QWORD *)v6 = v3;
    if ( HIDWORD(v3) )
      v7 = (unsigned int *)(HIDWORD(v3) + 8);
          v8 = __ldrex(v7);
        while ( __strex(v8 + 1, v7) );
        ++*v7;
    LODWORD(v9) = sub_13E6540;
    v6[2] = 1;
    HIDWORD(v9) = sub_13E6464;
    v14 = v6;
    *(_QWORD *)&v15 = v9;
    SettingsScreenControllerBase::confirmationNoAchievementsDialog(v2, (int)&v14);
    if ( v15 )
      v15();
      v10 = (unsigned int *)(HIDWORD(v3) + 8);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
    result = v17;
      v12 = (unsigned int *)(v17 + 8);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  }
  else
    *(_DWORD *)(result + 636) = a2;
  return result;
}


void __fastcall RealmsSettingsScreenController::_getCurrentRealmsVersionReference(RealmsSettingsScreenController *this, int a2)
{
  int *v2; // r4@1
  void *v3; // r0@4
  unsigned int *v4; // r2@6
  signed int v5; // r1@8
  int v6; // [sp+4h] [bp-1Ch]@1

  v2 = (int *)this;
  sub_21E8AF4(&v6, (int *)(a2 + 728));
  if ( *(_DWORD *)(v6 - 12) )
    sub_21E8AF4(v2, &v6);
  else
    sub_21E94B4((void **)v2, "Awaiting response...");
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
      j_j_j_j__ZdlPv_9(v3);
  }
}


signed int __fastcall RealmsSettingsScreenController::_renewSubscriptionRealmHandler(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r4@1
  char v2; // r6@1
  int v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  signed int result; // r0@3
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+4h] [bp+0h]@1
  int v12; // [sp+8h] [bp+4h]@1
  int v13; // [sp+Ch] [bp+8h]@1
  int v14; // [sp+10h] [bp+Ch]@1
  char v15; // [sp+14h] [bp+10h]@1
  char v16; // [sp+15h] [bp+11h]@1

  v1 = this;
  v2 = *((_BYTE *)this + 552);
  v3 = *((_DWORD *)this + 106);
  v11 = 2;
  sub_21E8AF4(&v12, (int *)this + 151);
  sub_21E8AF4(&v13, (int *)v1 + 167);
  v14 = 1;
  v15 = v2;
  v16 = 0;
  MainMenuScreenModel::navigateToRealmsCreateScreen(v3, (int)&v11);
  v4 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v8 = __ldrex(v7);
        __strex(v8 - 1, v7);
      }
      while ( &v11 );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v12 - 4);
        v10 = __ldrex(v9);
        __strex(v10 - 1, v9);
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  result = 1;
  *((_BYTE *)v1 + 685) = 1;
  return result;
}


void __fastcall RealmsSettingsScreenController::_getLocalizedStoreDisplayName(int *a1, int a2, int **a3)
{
  int *v3; // r4@1
  int **v4; // r5@1
  char v5; // r0@1
  double v6; // r0@2
  unsigned int v7; // r0@3
  int v8; // r7@5
  int *v9; // r6@5
  void **v10; // r0@8
  void *v11; // r0@8
  void **v12; // r0@9
  void *v13; // r0@9
  void **v14; // r0@10
  void *v15; // r0@10
  void **v16; // r0@11
  void *v17; // r0@11
  void **v18; // r0@12
  void *v19; // r0@12
  void **v20; // r0@13
  void *v21; // r0@13
  void **v22; // r0@14
  void *v23; // r0@14
  void **v24; // r0@15
  void *v25; // r0@15
  int **v26; // r0@17
  void *v27; // r0@17
  unsigned int *v28; // r2@18
  signed int v29; // r1@20
  void *v30; // r0@22
  unsigned int *v31; // r2@25
  signed int v32; // r1@27
  unsigned int *v33; // r2@29
  signed int v34; // r1@31
  unsigned int *v35; // r2@33
  signed int v36; // r1@35
  unsigned int *v37; // r2@37
  signed int v38; // r1@39
  unsigned int *v39; // r2@49
  signed int v40; // r1@51
  unsigned int *v41; // r2@53
  signed int v42; // r1@55
  unsigned int *v43; // r2@57
  signed int v44; // r1@59
  unsigned int *v45; // r2@61
  signed int v46; // r1@63
  unsigned int *v47; // r2@65
  signed int v48; // r1@67
  int v49; // [sp+4h] [bp-64h]@22
  int v50; // [sp+8h] [bp-60h]@22
  int v51; // [sp+Ch] [bp-5Ch]@17
  int v52; // [sp+14h] [bp-54h]@15
  int v53; // [sp+1Ch] [bp-4Ch]@14
  int v54; // [sp+24h] [bp-44h]@13
  int v55; // [sp+2Ch] [bp-3Ch]@12
  int v56; // [sp+34h] [bp-34h]@11
  int v57; // [sp+3Ch] [bp-2Ch]@10
  int v58; // [sp+44h] [bp-24h]@9
  int v59; // [sp+4Ch] [bp-1Ch]@8

  v3 = a1;
  v4 = a3;
  v5 = byte_27E6A28;
  __dmb();
  if ( !(v5 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27E6A28) )
  {
    *(_DWORD *)algn_27E6A5C = 0;
    dword_27E6A60 = 0;
    dword_27E6A64 = 1065353216;
    LODWORD(v6) = &dword_27E6A64;
    unk_27E6A68 = 0;
    v7 = sub_21E6254(v6);
    dword_27E6A58 = v7;
    if ( v7 == 1 )
    {
      dword_27E6A6C = 0;
      v9 = &dword_27E6A6C;
    }
    else
      if ( v7 >= 0x40000000 )
        sub_21E57F4();
      v8 = 4 * v7;
      v9 = (int *)operator new(4 * v7);
      _aeabi_memclr4(v9, v8);
    dword_27E6A54 = (int)v9;
    _cxa_atexit(std::unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~unordered_map);
    j___cxa_guard_release((unsigned int *)&byte_27E6A28);
  }
  if ( !dword_27E6A60 )
    sub_21E94B4((void **)&v59, "ios.store");
    v10 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int)&dword_27E6A54,
                     (int **)&v59);
    sub_21E8190(v10, "realmsSettingsScreen.iosStoreDisplayName", (_BYTE *)0x28);
    v11 = (void *)(v59 - 12);
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v59 - 4);
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
        j_j_j_j__ZdlPv_9(v11);
    sub_21E94B4((void **)&v58, "android.googleplay");
    v12 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)&v58);
    sub_21E8190(v12, "realmsSettingsScreen.googlePlayStoreDisplayName", (_BYTE *)0x2F);
    v13 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v58 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    sub_21E94B4((void **)&v57, "uwp.store");
    v14 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)&v57);
    sub_21E8190(v14, "realmsSettingsScreen.windowsStoreDisplayName", (_BYTE *)0x2C);
    v15 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v57 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    sub_21E94B4((void **)&v56, "android.amazonappstore");
    v16 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)&v56);
    sub_21E8190(v16, "realmsSettingsScreen.amazonStoreDisplayName", (_BYTE *)0x2B);
    v17 = (void *)(v56 - 12);
    if ( (int *)(v56 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v56 - 4);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    sub_21E94B4((void **)&v55, "oculus.store");
    v18 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)&v55);
    sub_21E8190(v18, "realmsSettingsScreen.oculusStoreDisplayName", (_BYTE *)0x2B);
    v19 = (void *)(v55 - 12);
    if ( (int *)(v55 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v55 - 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    sub_21E94B4((void **)&v54, "xbox1.store");
    v20 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)&v54);
    sub_21E8190(v20, "realmsSettingsScreen.xboxOneStoreDisplayName", (_BYTE *)0x2C);
    v21 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v54 - 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    sub_21E94B4((void **)&v53, "other");
    v22 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)&v53);
    sub_21E8190(v22, "realmsSettingsScreen.unknownStoreDisplayName", (_BYTE *)0x2C);
    v23 = (void *)(v53 - 12);
    if ( (int *)(v53 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v53 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    sub_21E94B4((void **)&v52, (const char *)&unk_257BC67);
    v24 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (int **)&v52);
    sub_21E8190(v24, "realmsSettingsScreen.unknownStoreDisplayName", (_BYTE *)0x2C);
    v25 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v52 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
  sub_21E8AF4(v3, (int *)&Util::EMPTY_STRING);
  if ( std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)&dword_27E6A54,
         v4) )
    v26 = (int **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                    (unsigned __int64 *)&dword_27E6A54,
                    v4);
    I18n::get(&v51, v26);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v51);
    v27 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) == &dword_28898C0 )
      return;
    v28 = (unsigned int *)(v51 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      goto LABEL_46;
LABEL_45:
    v29 = (*v28)--;
LABEL_46:
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
    return;
  sub_21E94B4((void **)&v49, "realmsSettingsScreen.unknownStoreDisplayName");
  I18n::get(&v50, (int **)&v49);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v50);
  v30 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v50 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v27 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v49 - 4);
    goto LABEL_45;
}


void __fastcall RealmsSettingsScreenController::_registerBindings(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r0@5
  __int64 v4; // r1@5
  __int64 v5; // r1@5
  _DWORD *v6; // r0@9
  __int64 v7; // r1@9
  __int64 v8; // r1@9
  _DWORD *v9; // r0@13
  __int64 v10; // r1@13
  __int64 v11; // r1@13
  _DWORD *v12; // r0@17
  __int64 v13; // r1@17
  __int64 v14; // r1@17
  _DWORD *v15; // r0@21
  __int64 v16; // r1@21
  __int64 v17; // r1@21
  _DWORD *v18; // r0@25
  __int64 v19; // r1@25
  __int64 v20; // r1@25
  _DWORD *v21; // r0@29
  __int64 v22; // r1@29
  __int64 v23; // r1@29
  _DWORD *v24; // r0@33
  __int64 v25; // r1@33
  __int64 v26; // r1@33
  _DWORD *v27; // r0@37
  __int64 v28; // r1@37
  __int64 v29; // r1@37
  _DWORD *v30; // r0@41
  __int64 v31; // r1@41
  __int64 v32; // r1@41
  _DWORD *v33; // r0@45
  __int64 v34; // r1@45
  __int64 v35; // r1@45
  _DWORD *v36; // r0@49
  __int64 v37; // r1@49
  __int64 v38; // r1@49
  _DWORD *v39; // r0@53
  __int64 v40; // r1@53
  __int64 v41; // r1@53
  _DWORD *v42; // r0@57
  __int64 v43; // r1@57
  __int64 v44; // r1@57
  _DWORD *v45; // r0@61
  __int64 v46; // r1@61
  __int64 v47; // r1@61
  _DWORD *v48; // r0@65
  __int64 v49; // r1@65
  __int64 v50; // r1@65
  _DWORD *v51; // r0@69
  __int64 v52; // r1@69
  __int64 v53; // r1@69
  _DWORD *v54; // r0@73
  __int64 v55; // r1@73
  __int64 v56; // r1@73
  _DWORD *v57; // r0@77
  __int64 v58; // r1@77
  __int64 v59; // r1@77
  _DWORD *v60; // r0@81
  __int64 v61; // r1@81
  __int64 v62; // r1@81
  _DWORD *v63; // r0@85
  __int64 v64; // r1@85
  __int64 v65; // r1@85
  _DWORD *v66; // r0@89
  __int64 v67; // r1@89
  __int64 v68; // r1@89
  _DWORD *v69; // r0@93
  __int64 v70; // r1@93
  __int64 v71; // r1@93
  _DWORD *v72; // r0@97
  __int64 v73; // r1@97
  __int64 v74; // r1@97
  _DWORD *v75; // r0@101
  __int64 v76; // r1@101
  __int64 v77; // r1@101
  _DWORD *v78; // r0@105
  __int64 v79; // r1@105
  __int64 v80; // r1@105
  _DWORD *v81; // r0@109
  __int64 v82; // r1@109
  __int64 v83; // r1@109
  _DWORD *v84; // r0@113
  __int64 v85; // r1@113
  __int64 v86; // r1@113
  void *v87; // [sp+4h] [bp-424h]@113
  __int64 v88; // [sp+Ch] [bp-41Ch]@113
  _DWORD *v89; // [sp+14h] [bp-414h]@113
  __int64 v90; // [sp+1Ch] [bp-40Ch]@113
  int v91; // [sp+24h] [bp-404h]@113
  int v92; // [sp+28h] [bp-400h]@113
  void *v93; // [sp+2Ch] [bp-3FCh]@109
  __int64 v94; // [sp+34h] [bp-3F4h]@109
  _DWORD *v95; // [sp+3Ch] [bp-3ECh]@109
  __int64 v96; // [sp+44h] [bp-3E4h]@109
  int v97; // [sp+4Ch] [bp-3DCh]@109
  int v98; // [sp+50h] [bp-3D8h]@109
  void *v99; // [sp+54h] [bp-3D4h]@105
  __int64 v100; // [sp+5Ch] [bp-3CCh]@105
  _DWORD *v101; // [sp+64h] [bp-3C4h]@105
  __int64 v102; // [sp+6Ch] [bp-3BCh]@105
  int v103; // [sp+74h] [bp-3B4h]@105
  void *v104; // [sp+78h] [bp-3B0h]@101
  __int64 v105; // [sp+80h] [bp-3A8h]@101
  _DWORD *v106; // [sp+88h] [bp-3A0h]@101
  __int64 v107; // [sp+90h] [bp-398h]@101
  int v108; // [sp+98h] [bp-390h]@101
  void *v109; // [sp+9Ch] [bp-38Ch]@97
  __int64 v110; // [sp+A4h] [bp-384h]@97
  _DWORD *v111; // [sp+ACh] [bp-37Ch]@97
  __int64 v112; // [sp+B4h] [bp-374h]@97
  int v113; // [sp+BCh] [bp-36Ch]@97
  void *v114; // [sp+C0h] [bp-368h]@93
  __int64 v115; // [sp+C8h] [bp-360h]@93
  _DWORD *v116; // [sp+D0h] [bp-358h]@93
  __int64 v117; // [sp+D8h] [bp-350h]@93
  int v118; // [sp+E0h] [bp-348h]@93
  void *v119; // [sp+E4h] [bp-344h]@89
  __int64 v120; // [sp+ECh] [bp-33Ch]@89
  _DWORD *v121; // [sp+F4h] [bp-334h]@89
  __int64 v122; // [sp+FCh] [bp-32Ch]@89
  int v123; // [sp+104h] [bp-324h]@89
  void *v124; // [sp+108h] [bp-320h]@85
  __int64 v125; // [sp+110h] [bp-318h]@85
  _DWORD *v126; // [sp+118h] [bp-310h]@85
  __int64 v127; // [sp+120h] [bp-308h]@85
  int v128; // [sp+128h] [bp-300h]@85
  void *v129; // [sp+12Ch] [bp-2FCh]@81
  __int64 v130; // [sp+134h] [bp-2F4h]@81
  _DWORD *v131; // [sp+13Ch] [bp-2ECh]@81
  __int64 v132; // [sp+144h] [bp-2E4h]@81
  int v133; // [sp+14Ch] [bp-2DCh]@81
  void *v134; // [sp+150h] [bp-2D8h]@77
  __int64 v135; // [sp+158h] [bp-2D0h]@77
  _DWORD *v136; // [sp+160h] [bp-2C8h]@77
  __int64 v137; // [sp+168h] [bp-2C0h]@77
  int v138; // [sp+170h] [bp-2B8h]@77
  void *v139; // [sp+174h] [bp-2B4h]@73
  __int64 v140; // [sp+17Ch] [bp-2ACh]@73
  _DWORD *v141; // [sp+184h] [bp-2A4h]@73
  __int64 v142; // [sp+18Ch] [bp-29Ch]@73
  int v143; // [sp+194h] [bp-294h]@73
  void *v144; // [sp+198h] [bp-290h]@69
  __int64 v145; // [sp+1A0h] [bp-288h]@69
  _DWORD *v146; // [sp+1A8h] [bp-280h]@69
  __int64 v147; // [sp+1B0h] [bp-278h]@69
  int v148; // [sp+1B8h] [bp-270h]@69
  void *v149; // [sp+1BCh] [bp-26Ch]@65
  __int64 v150; // [sp+1C4h] [bp-264h]@65
  _DWORD *v151; // [sp+1CCh] [bp-25Ch]@65
  __int64 v152; // [sp+1D4h] [bp-254h]@65
  int v153; // [sp+1DCh] [bp-24Ch]@65
  void *v154; // [sp+1E0h] [bp-248h]@61
  __int64 v155; // [sp+1E8h] [bp-240h]@61
  _DWORD *v156; // [sp+1F0h] [bp-238h]@61
  __int64 v157; // [sp+1F8h] [bp-230h]@61
  int v158; // [sp+200h] [bp-228h]@61
  void *v159; // [sp+204h] [bp-224h]@57
  __int64 v160; // [sp+20Ch] [bp-21Ch]@57
  _DWORD *v161; // [sp+214h] [bp-214h]@57
  __int64 v162; // [sp+21Ch] [bp-20Ch]@57
  int v163; // [sp+224h] [bp-204h]@57
  void *v164; // [sp+228h] [bp-200h]@53
  __int64 v165; // [sp+230h] [bp-1F8h]@53
  _DWORD *v166; // [sp+238h] [bp-1F0h]@53
  __int64 v167; // [sp+240h] [bp-1E8h]@53
  int v168; // [sp+248h] [bp-1E0h]@53
  void *v169; // [sp+24Ch] [bp-1DCh]@49
  __int64 v170; // [sp+254h] [bp-1D4h]@49
  _DWORD *v171; // [sp+25Ch] [bp-1CCh]@49
  __int64 v172; // [sp+264h] [bp-1C4h]@49
  int v173; // [sp+26Ch] [bp-1BCh]@49
  void *v174; // [sp+270h] [bp-1B8h]@45
  __int64 v175; // [sp+278h] [bp-1B0h]@45
  _DWORD *v176; // [sp+280h] [bp-1A8h]@45
  __int64 v177; // [sp+288h] [bp-1A0h]@45
  int v178; // [sp+290h] [bp-198h]@45
  void *v179; // [sp+294h] [bp-194h]@41
  __int64 v180; // [sp+29Ch] [bp-18Ch]@41
  _DWORD *v181; // [sp+2A4h] [bp-184h]@41
  __int64 v182; // [sp+2ACh] [bp-17Ch]@41
  int v183; // [sp+2B4h] [bp-174h]@41
  void *v184; // [sp+2B8h] [bp-170h]@37
  __int64 v185; // [sp+2C0h] [bp-168h]@37
  _DWORD *v186; // [sp+2C8h] [bp-160h]@37
  __int64 v187; // [sp+2D0h] [bp-158h]@37
  int v188; // [sp+2D8h] [bp-150h]@37
  void *v189; // [sp+2DCh] [bp-14Ch]@33
  __int64 v190; // [sp+2E4h] [bp-144h]@33
  _DWORD *v191; // [sp+2ECh] [bp-13Ch]@33
  __int64 v192; // [sp+2F4h] [bp-134h]@33
  int v193; // [sp+2FCh] [bp-12Ch]@33
  void *v194; // [sp+300h] [bp-128h]@29
  __int64 v195; // [sp+308h] [bp-120h]@29
  _DWORD *v196; // [sp+310h] [bp-118h]@29
  __int64 v197; // [sp+318h] [bp-110h]@29
  int v198; // [sp+320h] [bp-108h]@29
  void *v199; // [sp+324h] [bp-104h]@25
  __int64 v200; // [sp+32Ch] [bp-FCh]@25
  _DWORD *v201; // [sp+334h] [bp-F4h]@25
  __int64 v202; // [sp+33Ch] [bp-ECh]@25
  int v203; // [sp+344h] [bp-E4h]@25
  void *v204; // [sp+348h] [bp-E0h]@21
  __int64 v205; // [sp+350h] [bp-D8h]@21
  _DWORD *v206; // [sp+358h] [bp-D0h]@21
  __int64 v207; // [sp+360h] [bp-C8h]@21
  int v208; // [sp+368h] [bp-C0h]@21
  void *v209; // [sp+36Ch] [bp-BCh]@17
  __int64 v210; // [sp+374h] [bp-B4h]@17
  _DWORD *v211; // [sp+37Ch] [bp-ACh]@17
  __int64 v212; // [sp+384h] [bp-A4h]@17
  int v213; // [sp+38Ch] [bp-9Ch]@17
  void *v214; // [sp+390h] [bp-98h]@13
  __int64 v215; // [sp+398h] [bp-90h]@13
  _DWORD *v216; // [sp+3A0h] [bp-88h]@13
  __int64 v217; // [sp+3A8h] [bp-80h]@13
  int v218; // [sp+3B0h] [bp-78h]@13
  void *v219; // [sp+3B4h] [bp-74h]@9
  __int64 v220; // [sp+3BCh] [bp-6Ch]@9
  _DWORD *v221; // [sp+3C4h] [bp-64h]@9
  __int64 v222; // [sp+3CCh] [bp-5Ch]@9
  int v223; // [sp+3D4h] [bp-54h]@9
  void *v224; // [sp+3D8h] [bp-50h]@5
  __int64 v225; // [sp+3E0h] [bp-48h]@5
  _DWORD *v226; // [sp+3E8h] [bp-40h]@5
  __int64 v227; // [sp+3F0h] [bp-38h]@5
  int v228; // [sp+3F8h] [bp-30h]@5
  void *v229; // [sp+3FCh] [bp-2Ch]@1
  void (*v230)(void); // [sp+404h] [bp-24h]@1
  signed int (*v231)(); // [sp+408h] [bp-20h]@1
  _DWORD *v232; // [sp+40Ch] [bp-1Ch]@1
  void (*v233)(void); // [sp+414h] [bp-14h]@1
  int *(__fastcall *v234)(int *, int); // [sp+418h] [bp-10h]@1
  int v235; // [sp+41Ch] [bp-Ch]@1

  v1 = this;
  v235 = 1273014912;
  v2 = operator new(4u);
  *v2 = v1;
  v232 = v2;
  v234 = sub_13DF498;
  v233 = (void (*)(void))sub_13DF4A8;
  v229 = operator new(1u);
  v231 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v230 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v235, (int)&v232, (int)&v229);
  if ( v230 )
    v230();
  if ( v233 )
    v233();
  v228 = 365782143;
  v3 = operator new(4u);
  LODWORD(v4) = sub_13DF4F8;
  *v3 = v1;
  HIDWORD(v4) = sub_13DF4E0;
  v226 = v3;
  v227 = v4;
  v224 = operator new(1u);
  LODWORD(v5) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v5) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v225 = v5;
  ScreenController::bindString((int)v1, &v228, (int)&v226, (int)&v224);
  if ( (_DWORD)v225 )
    ((void (*)(void))v225)();
  if ( (_DWORD)v227 )
    ((void (*)(void))v227)();
  v223 = 1166352037;
  v6 = operator new(4u);
  LODWORD(v7) = sub_13DF53E;
  *v6 = v1;
  HIDWORD(v7) = sub_13DF52E;
  v221 = v6;
  v222 = v7;
  v219 = operator new(1u);
  LODWORD(v8) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v8) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v220 = v8;
  ScreenController::bindString((int)v1, &v223, (int)&v221, (int)&v219);
  if ( (_DWORD)v220 )
    ((void (*)(void))v220)();
  if ( (_DWORD)v222 )
    ((void (*)(void))v222)();
  v218 = 1259283883;
  v9 = operator new(4u);
  LODWORD(v10) = sub_13DF586;
  *v9 = v1;
  HIDWORD(v10) = sub_13DF574;
  v216 = v9;
  v217 = v10;
  v214 = operator new(1u);
  LODWORD(v11) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v11) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v215 = v11;
  ScreenController::bindBool((int)v1, &v218, (int)&v216, (int)&v214);
  if ( (_DWORD)v215 )
    ((void (*)(void))v215)();
  if ( (_DWORD)v217 )
    ((void (*)(void))v217)();
  StringHash::StringHash<char [27]>(&v213, (int)"#open_realm_button_visible");
  v12 = operator new(4u);
  LODWORD(v13) = sub_13DF5D8;
  *v12 = v1;
  HIDWORD(v13) = sub_13DF5BC;
  v211 = v12;
  v212 = v13;
  v209 = operator new(1u);
  LODWORD(v14) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v14) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v210 = v14;
  ScreenController::bindBool((int)v1, &v213, (int)&v211, (int)&v209);
  if ( (_DWORD)v210 )
    ((void (*)(void))v210)();
  if ( (_DWORD)v212 )
    ((void (*)(void))v212)();
  StringHash::StringHash<char [28]>(&v208, (int)"#close_realm_button_visible");
  v15 = operator new(4u);
  LODWORD(v16) = sub_13DF632;
  *v15 = v1;
  HIDWORD(v16) = sub_13DF60E;
  v206 = v15;
  v207 = v16;
  v204 = operator new(1u);
  LODWORD(v17) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v17) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v205 = v17;
  ScreenController::bindBool((int)v1, &v208, (int)&v206, (int)&v204);
  if ( (_DWORD)v205 )
    ((void (*)(void))v205)();
  if ( (_DWORD)v207 )
    ((void (*)(void))v207)();
  v203 = 1339174216;
  v18 = operator new(4u);
  LODWORD(v19) = sub_13DF68C;
  *v18 = v1;
  HIDWORD(v19) = sub_13DF668;
  v201 = v18;
  v202 = v19;
  v199 = operator new(1u);
  LODWORD(v20) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v20) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v200 = v20;
  ScreenController::bindBool((int)v1, &v203, (int)&v201, (int)&v199);
  if ( (_DWORD)v200 )
    ((void (*)(void))v200)();
  if ( (_DWORD)v202 )
    ((void (*)(void))v202)();
  StringHash::StringHash<char [36]>(&v198, (int)"#realms_difficulty_dropdown_enabled");
  v21 = operator new(4u);
  LODWORD(v22) = sub_13DF6D4;
  *v21 = v1;
  HIDWORD(v22) = sub_13DF6C2;
  v196 = v21;
  v197 = v22;
  v194 = operator new(1u);
  LODWORD(v23) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v23) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v195 = v23;
  ScreenController::bindBool((int)v1, &v198, (int)&v196, (int)&v194);
  if ( (_DWORD)v195 )
    ((void (*)(void))v195)();
  if ( (_DWORD)v197 )
    ((void (*)(void))v197)();
  StringHash::StringHash<char [35]>(&v193, (int)"#realms_game_mode_dropdown_enabled");
  v24 = operator new(4u);
  LODWORD(v25) = sub_13DF71C;
  *v24 = v1;
  HIDWORD(v25) = sub_13DF70A;
  v191 = v24;
  v192 = v25;
  v189 = operator new(1u);
  LODWORD(v26) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v26) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v190 = v26;
  ScreenController::bindBool((int)v1, &v193, (int)&v191, (int)&v189);
  if ( (_DWORD)v190 )
    ((void (*)(void))v190)();
  if ( (_DWORD)v192 )
    ((void (*)(void))v192)();
  v188 = -829348552;
  v27 = operator new(4u);
  LODWORD(v28) = sub_13DF764;
  *v27 = v1;
  HIDWORD(v28) = sub_13DF752;
  v186 = v27;
  v187 = v28;
  v184 = operator new(1u);
  LODWORD(v29) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v29) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v185 = v29;
  ScreenController::bindBool((int)v1, &v188, (int)&v186, (int)&v184);
  if ( (_DWORD)v185 )
    ((void (*)(void))v185)();
  if ( (_DWORD)v187 )
    ((void (*)(void))v187)();
  v183 = -541726617;
  v30 = operator new(4u);
  LODWORD(v31) = sub_13DF7A6;
  *v30 = v1;
  HIDWORD(v31) = sub_13DF79A;
  v181 = v30;
  v182 = v31;
  v179 = operator new(1u);
  LODWORD(v32) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v32) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v180 = v32;
  ScreenController::bindBool((int)v1, &v183, (int)&v181, (int)&v179);
  if ( (_DWORD)v180 )
    ((void (*)(void))v180)();
  if ( (_DWORD)v182 )
    ((void (*)(void))v182)();
  StringHash::StringHash<char [30]>(&v178, (int)"#disabled_play_button_visible");
  v33 = operator new(4u);
  LODWORD(v34) = sub_13DF802;
  *v33 = v1;
  HIDWORD(v34) = sub_13DF7DC;
  v176 = v33;
  v177 = v34;
  v174 = operator new(1u);
  LODWORD(v35) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v35) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v175 = v35;
  ScreenController::bindBool((int)v1, &v178, (int)&v176, (int)&v174);
  if ( (_DWORD)v175 )
    ((void (*)(void))v175)();
  if ( (_DWORD)v177 )
    ((void (*)(void))v177)();
  StringHash::StringHash<char [23]>(&v173, (int)"#upload_button_enabled");
  v36 = operator new(4u);
  LODWORD(v37) = sub_13DF84A;
  *v36 = v1;
  HIDWORD(v37) = sub_13DF838;
  v171 = v36;
  v172 = v37;
  v169 = operator new(1u);
  LODWORD(v38) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v38) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v170 = v38;
  ScreenController::bindBool((int)v1, &v173, (int)&v171, (int)&v169);
  if ( (_DWORD)v170 )
    ((void (*)(void))v170)();
  if ( (_DWORD)v172 )
    ((void (*)(void))v172)();
  v168 = -1813329464;
  v39 = operator new(4u);
  LODWORD(v40) = sub_13DF890;
  *v39 = v1;
  HIDWORD(v40) = sub_13DF880;
  v166 = v39;
  v167 = v40;
  v164 = operator new(1u);
  LODWORD(v41) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v41) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v165 = v41;
  ScreenController::bindBool((int)v1, &v168, (int)&v166, (int)&v164);
  if ( (_DWORD)v165 )
    ((void (*)(void))v165)();
  if ( (_DWORD)v167 )
    ((void (*)(void))v167)();
  v163 = 1567302495;
  v42 = operator new(4u);
  LODWORD(v43) = sub_13DF8D2;
  *v42 = v1;
  HIDWORD(v43) = sub_13DF8C6;
  v161 = v42;
  v162 = v43;
  v159 = operator new(1u);
  LODWORD(v44) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v44) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v160 = v44;
  ScreenController::bindString((int)v1, &v163, (int)&v161, (int)&v159);
  if ( (_DWORD)v160 )
    ((void (*)(void))v160)();
  if ( (_DWORD)v162 )
    ((void (*)(void))v162)();
  v158 = -611684553;
  v45 = operator new(4u);
  LODWORD(v46) = sub_13DF914;
  *v45 = v1;
  HIDWORD(v46) = sub_13DF908;
  v156 = v45;
  v157 = v46;
  v154 = operator new(1u);
  LODWORD(v47) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v47) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v155 = v47;
  ScreenController::bindString((int)v1, &v158, (int)&v156, (int)&v154);
  if ( (_DWORD)v155 )
    ((void (*)(void))v155)();
  if ( (_DWORD)v157 )
    ((void (*)(void))v157)();
  StringHash::StringHash<char [38]>(&v153, (int)"#realm_subscription_origin_visibility");
  v48 = operator new(4u);
  LODWORD(v49) = sub_13DF9E4;
  *v48 = v1;
  HIDWORD(v49) = sub_13DF94C;
  v151 = v48;
  v152 = v49;
  v149 = operator new(1u);
  LODWORD(v50) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v50) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v150 = v50;
  ScreenController::bindBool((int)v1, &v153, (int)&v151, (int)&v149);
  if ( (_DWORD)v150 )
    ((void (*)(void))v150)();
  if ( (_DWORD)v152 )
    ((void (*)(void))v152)();
  StringHash::StringHash<char [27]>(&v148, (int)"#realm_subscription_origin");
  v51 = operator new(4u);
  LODWORD(v52) = sub_13DFA26;
  *v51 = v1;
  HIDWORD(v52) = sub_13DFA1A;
  v146 = v51;
  v147 = v52;
  v144 = operator new(1u);
  LODWORD(v53) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v53) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v145 = v53;
  ScreenController::bindString((int)v1, &v148, (int)&v146, (int)&v144);
  if ( (_DWORD)v145 )
    ((void (*)(void))v145)();
  if ( (_DWORD)v147 )
    ((void (*)(void))v147)();
  StringHash::StringHash<char [45]>(&v143, (int)"#realms_subscription_loading_message_visible");
  v54 = operator new(4u);
  LODWORD(v55) = sub_13DFA6E;
  *v54 = v1;
  HIDWORD(v55) = sub_13DFA5C;
  v141 = v54;
  v142 = v55;
  v139 = operator new(1u);
  LODWORD(v56) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v56) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v140 = v56;
  ScreenController::bindBool((int)v1, &v143, (int)&v141, (int)&v139);
  if ( (_DWORD)v140 )
    ((void (*)(void))v140)();
  if ( (_DWORD)v142 )
    ((void (*)(void))v142)();
  StringHash::StringHash<char [34]>(&v138, (int)"#realms_subscription_info_visible");
  v57 = operator new(4u);
  LODWORD(v58) = sub_13DFAB4;
  *v57 = v1;
  HIDWORD(v58) = sub_13DFAA4;
  v136 = v57;
  v137 = v58;
  v134 = operator new(1u);
  LODWORD(v59) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v59) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v135 = v59;
  ScreenController::bindBool((int)v1, &v138, (int)&v136, (int)&v134);
  if ( (_DWORD)v135 )
    ((void (*)(void))v135)();
  if ( (_DWORD)v137 )
    ((void (*)(void))v137)();
  StringHash::StringHash<char [36]>(&v133, (int)"#manage_subscription_button_visible");
  v60 = operator new(4u);
  LODWORD(v61) = sub_13DFB06;
  *v60 = v1;
  HIDWORD(v61) = sub_13DFAEA;
  v131 = v60;
  v132 = v61;
  v129 = operator new(1u);
  LODWORD(v62) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v62) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v130 = v62;
  ScreenController::bindBool((int)v1, &v133, (int)&v131, (int)&v129);
  if ( (_DWORD)v130 )
    ((void (*)(void))v130)();
  if ( (_DWORD)v132 )
    ((void (*)(void))v132)();
  StringHash::StringHash<char [35]>(&v128, (int)"#renew_subscription_button_visible");
  v63 = operator new(4u);
  LODWORD(v64) = sub_13DFB58;
  *v63 = v1;
  HIDWORD(v64) = sub_13DFB3C;
  v126 = v63;
  v127 = v64;
  v124 = operator new(1u);
  LODWORD(v65) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v65) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v125 = v65;
  ScreenController::bindBool((int)v1, &v128, (int)&v126, (int)&v124);
  if ( (_DWORD)v125 )
    ((void (*)(void))v125)();
  if ( (_DWORD)v127 )
    ((void (*)(void))v127)();
  StringHash::StringHash<char [34]>(&v123, (int)"#extend_consumable_button_visible");
  v66 = operator new(4u);
  LODWORD(v67) = sub_13DFBAA;
  *v66 = v1;
  HIDWORD(v67) = sub_13DFB8E;
  v121 = v66;
  v122 = v67;
  v119 = operator new(1u);
  LODWORD(v68) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v68) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v120 = v68;
  ScreenController::bindBool((int)v1, &v123, (int)&v121, (int)&v119);
  if ( (_DWORD)v120 )
    ((void (*)(void))v120)();
  if ( (_DWORD)v122 )
    ((void (*)(void))v122)();
  StringHash::StringHash<char [33]>(&v118, (int)"#renew_consumable_button_visible");
  v69 = operator new(4u);
  LODWORD(v70) = sub_13DFBFC;
  *v69 = v1;
  HIDWORD(v70) = sub_13DFBE0;
  v116 = v69;
  v117 = v70;
  v114 = operator new(1u);
  LODWORD(v71) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v71) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v115 = v71;
  ScreenController::bindBool((int)v1, &v118, (int)&v116, (int)&v114);
  if ( (_DWORD)v115 )
    ((void (*)(void))v115)();
  if ( (_DWORD)v117 )
    ((void (*)(void))v117)();
  StringHash::StringHash<char [27]>(&v113, (int)"#selected_branch_commit_id");
  v72 = operator new(4u);
  LODWORD(v73) = sub_13DFC3E;
  *v72 = v1;
  HIDWORD(v73) = sub_13DFC32;
  v111 = v72;
  v112 = v73;
  v109 = operator new(1u);
  LODWORD(v74) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v74) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v110 = v74;
  ScreenController::bindString((int)v1, &v113, (int)&v111, (int)&v109);
  if ( (_DWORD)v110 )
    ((void (*)(void))v110)();
  if ( (_DWORD)v112 )
    ((void (*)(void))v112)();
  v108 = -114582964;
  v75 = operator new(4u);
  LODWORD(v76) = sub_13DFCD8;
  *v75 = v1;
  HIDWORD(v76) = sub_13DFC74;
  v106 = v75;
  v107 = v76;
  v104 = operator new(1u);
  LODWORD(v77) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v77) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v105 = v77;
  ScreenController::bindString((int)v1, &v108, (int)&v106, (int)&v104);
  if ( (_DWORD)v105 )
    ((void (*)(void))v105)();
  if ( (_DWORD)v107 )
    ((void (*)(void))v107)();
  StringHash::StringHash<char [30]>(&v103, (int)"#realms_branch_grid_dimension");
  v78 = operator new(4u);
  LODWORD(v79) = sub_13DFD44;
  *v78 = v1;
  HIDWORD(v79) = sub_13DFD0E;
  v101 = v78;
  v102 = v79;
  v99 = operator new(1u);
  LODWORD(v80) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v80) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v100 = v80;
  ScreenController::bindGridSize((int)v1, &v103, (int)&v101, (int)&v99);
  if ( (_DWORD)v100 )
    ((void (*)(void))v100)();
  if ( (_DWORD)v102 )
    ((void (*)(void))v102)();
  StringHash::StringHash<char [25]>(&v98, (int)"realms_branch_collection");
  v97 = 1963860604;
  v81 = operator new(4u);
  LODWORD(v82) = sub_13DFDC4;
  *v81 = v1;
  HIDWORD(v82) = sub_13DFD7C;
  v95 = v81;
  v96 = v82;
  v93 = operator new(1u);
  LODWORD(v83) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v83) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v94 = v83;
  ScreenController::bindStringForCollection((int)v1, &v98, &v97, (int)&v95, (int)&v93);
  if ( (_DWORD)v94 )
    ((void (*)(void))v94)();
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  StringHash::StringHash<char [25]>(&v92, (int)"realms_branch_collection");
  v91 = -1721654707;
  v84 = operator new(4u);
  LODWORD(v85) = sub_13DFE44;
  *v84 = v1;
  HIDWORD(v85) = sub_13DFDFC;
  v89 = v84;
  v90 = v85;
  v87 = operator new(1u);
  LODWORD(v86) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v86) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v88 = v86;
  ScreenController::bindStringForCollection((int)v1, &v92, &v91, (int)&v89, (int)&v87);
  if ( (_DWORD)v88 )
    ((void (*)(void))v88)();
  if ( (_DWORD)v90 )
    ((void (*)(void))v90)();
}


unsigned int __fastcall RealmsSettingsScreenController::_getMaxPages(RealmsSettingsScreenController *this)
{
  unsigned int v1; // r1@1
  unsigned int result; // r0@1

  v1 = (signed int)((*(_QWORD *)*((_DWORD *)this + 196) >> 32) - *(_QWORD *)*((_DWORD *)this + 196)) >> 4;
  result = v1 / 0xA;
  if ( !(v1 % 0xA) )
    result = v1 / 0xA - 1;
  return result;
}


void **__fastcall RealmsSettingsScreenController::_getPageLabel(RealmsSettingsScreenController *this, int a2)
{
  void **v2; // r4@1
  unsigned int v3; // r2@1
  signed __int64 v4; // kr00_8@1
  unsigned int v5; // r5@1

  v2 = (void **)this;
  v3 = (signed int)((*(_QWORD *)*(_DWORD *)(a2 + 784) >> 32) - *(_QWORD *)*(_DWORD *)(a2 + 784)) >> 4;
  v4 = 3435973837LL * v3;
  v5 = v3 / 0xA;
  if ( !(v3 % 0xA) )
    v5 = (HIDWORD(v4) >> 3) - 1;
  sprintf(byte_27E69EC, "%d/%d", *(_DWORD *)(a2 + 712) + 1, v5 + 1);
  return sub_21E94B4(v2, byte_27E69EC);
}


void __fastcall RealmsSettingsScreenController::~RealmsSettingsScreenController(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r0@1

  v1 = RealmsSettingsScreenController::~RealmsSettingsScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall RealmsSettingsScreenController::_saveSettings(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r8@1
  int v5; // r11@1
  void *v6; // r0@1
  int v7; // r6@2
  signed int v8; // r6@2
  void *v9; // r0@2
  __int64 v10; // kr00_8@5
  unsigned int *v11; // r0@6
  unsigned int v12; // r1@8
  int v13; // r7@10
  signed int v14; // r4@11
  unsigned int *v15; // r0@13
  unsigned int v16; // r1@15
  int v17; // r5@20
  int v18; // r3@20
  void *v19; // r8@21
  unsigned int *v20; // r0@22
  unsigned int v21; // r1@24
  unsigned int *v22; // r1@27
  unsigned int v23; // r2@29
  _QWORD *v24; // r0@32
  unsigned int *v25; // r1@33
  unsigned int v26; // r2@35
  _QWORD *v27; // r0@38
  unsigned int *v28; // r1@39
  unsigned int v29; // r2@41
  __int64 v30; // r1@44
  unsigned int *v31; // r0@45
  unsigned int v32; // r1@47
  __int64 v33; // r1@50
  unsigned int *v34; // r0@51
  unsigned int v35; // r1@53
  _DWORD *v36; // r0@56
  unsigned int *v37; // r1@57
  unsigned int v38; // r2@59
  _DWORD *v39; // r0@62
  unsigned int *v40; // r1@63
  unsigned int v41; // r2@65
  __int64 v42; // r1@68
  unsigned int *v43; // r1@71
  unsigned int v44; // r0@73
  __int64 v45; // r1@76
  unsigned int *v46; // r1@79
  unsigned int v47; // r0@81
  unsigned int *v48; // r1@89
  unsigned int v49; // r0@91
  void *v50; // r0@96
  unsigned int *v51; // r2@97
  signed int v52; // r1@99
  unsigned int *v53; // r1@107
  unsigned int v54; // r0@109
  int v55; // r5@117
  void **v56; // r0@117
  void *v57; // r0@117
  void *v58; // r0@120
  int v59; // r9@121
  int v60; // r10@121
  __int64 v61; // kr08_8@121
  int v62; // r6@121
  unsigned int *v63; // r0@122
  unsigned int v64; // r1@124
  void (__fastcall *v65)(_DWORD, _DWORD, _DWORD); // r11@127
  void (__fastcall *v66)(int *); // r3@127
  void *v67; // r0@129
  int v68; // r12@129
  int *v69; // r3@129
  unsigned int *v70; // r1@130
  int v71; // r9@130
  int v72; // r10@131
  unsigned int v73; // r2@132
  __int64 v74; // kr10_8@137
  __int64 v75; // kr18_8@137
  int v76; // r1@137
  unsigned int *v77; // r2@144
  unsigned int v78; // r1@146
  unsigned int *v79; // r1@152
  unsigned int v80; // r0@154
  unsigned int *v81; // r1@160
  unsigned int v82; // r0@162
  int result; // r0@167
  unsigned int *v84; // r2@168
  unsigned int v85; // r1@170
  unsigned int *v86; // r2@176
  signed int v87; // r1@178
  unsigned int *v88; // r2@180
  signed int v89; // r1@182
  unsigned int *v90; // r2@184
  signed int v91; // r1@186
  unsigned int *v92; // r2@188
  signed int v93; // r1@190
  int *v94; // [sp+10h] [bp-100h]@5
  int v95; // [sp+14h] [bp-FCh]@1
  int v96; // [sp+1Ch] [bp-F4h]@10
  int v97; // [sp+1Ch] [bp-F4h]@121
  int v98; // [sp+28h] [bp-E8h]@121
  int v99; // [sp+2Ch] [bp-E4h]@121
  int v100; // [sp+30h] [bp-E0h]@128
  int v101; // [sp+34h] [bp-DCh]@137
  void (__fastcall *v102)(_DWORD, _DWORD, _DWORD); // [sp+38h] [bp-D8h]@127
  int v103; // [sp+3Ch] [bp-D4h]@128
  void *v104; // [sp+40h] [bp-D0h]@137
  void (*v105)(void); // [sp+48h] [bp-C8h]@129
  int (__fastcall *v106)(int, int); // [sp+4Ch] [bp-C4h]@137
  __int64 v107; // [sp+50h] [bp-C0h]@121
  int v108; // [sp+60h] [bp-B0h]@117
  void *v109; // [sp+64h] [bp-ACh]@117
  int v110; // [sp+6Ch] [bp-A4h]@117
  int v111; // [sp+70h] [bp-A0h]@2
  int v112; // [sp+74h] [bp-9Ch]@1
  int v113; // [sp+78h] [bp-98h]@1
  int v114; // [sp+7Ch] [bp-94h]@5
  char v115; // [sp+80h] [bp-90h]@20
  _DWORD *v116; // [sp+8Ch] [bp-84h]@68
  void (*v117)(void); // [sp+94h] [bp-7Ch]@56
  _QWORD *v118; // [sp+9Ch] [bp-74h]@44
  void (*v119)(void); // [sp+A4h] [bp-6Ch]@32
  int v120; // [sp+B0h] [bp-60h]@21
  _DWORD *v121; // [sp+B4h] [bp-5Ch]@76
  void (*v122)(void); // [sp+BCh] [bp-54h]@62
  _QWORD *v123; // [sp+C4h] [bp-4Ch]@50
  void (*v124)(void); // [sp+CCh] [bp-44h]@38
  char v125; // [sp+D4h] [bp-3Ch]@76
  void (*v126)(void); // [sp+DCh] [bp-34h]@26
  int v127; // [sp+E8h] [bp-28h]@26

  v3 = a1;
  v4 = a2;
  v95 = a3;
  MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v113, a1);
  Util::stringTrim(&v112, (int *)(v3 + 532));
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 532),
    &v112);
  v5 = v3;
  v6 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
  {
    v86 = (unsigned int *)(v112 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
    }
    else
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = *(_DWORD *)(v3 + 424);
  sub_21E8AF4(&v111, (int *)(v3 + 604));
  v8 = MinecraftScreenModel::isValidRealmName(v7, &v111);
  v9 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v111 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  if ( !v8 )
    EntityInteraction::setInteractText((int *)(v3 + 604), (int *)(v3 + 532));
  v94 = (int *)(v3 + 604);
  v10 = *(_QWORD *)&v113;
  if ( !v114 )
    v14 = 1;
    v96 = v113;
    v13 = 0;
    goto LABEL_20;
  v11 = (unsigned int *)(v114 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v12 = __ldrex(v11);
    while ( __strex(v12 + 1, v11) );
    if ( !v114 )
      v96 = v113;
      v13 = 0;
      v14 = 1;
      goto LABEL_20;
    v13 = v114;
  else
    ++*v11;
  v15 = (unsigned int *)(v13 + 8);
      v16 = __ldrex(v15);
    while ( __strex(v16 + 1, v15) );
    ++*v15;
  v14 = 0;
LABEL_20:
  v17 = *(_DWORD *)(v3 + 516);
  sub_21E034C(&v115);
  v18 = v17 + 8;
  *(_QWORD *)v18 = *(_QWORD *)&v115;
  *(_DWORD *)(v18 + 8) = 60;
  *(_DWORD *)(v18 + 12) = 0;
  *(_BYTE *)(v17 + 24) = 0;
  *(_BYTE *)(v17 + 1) = 0;
  if ( v4 == 1 )
    v19 = operator new(0x30u);
    sub_21E94B4((void **)&v120, "realmsSettingsScreen.updatingWorldInfo");
    if ( HIDWORD(v10) )
      v20 = (unsigned int *)(HIDWORD(v10) + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 + 1, v20) );
      }
      else
        ++*v20;
    v119 = 0;
    v24 = operator new(8u);
    *v24 = v10;
      v25 = (unsigned int *)(HIDWORD(v10) + 8);
          v26 = __ldrex(v25);
        while ( __strex(v26 + 1, v25) );
        ++*v25;
    HIDWORD(v30) = sub_13E3274;
    v118 = v24;
    LODWORD(v30) = sub_13E3408;
    *(_QWORD *)&v119 = v30;
    if ( !v14 )
      v31 = (unsigned int *)(v13 + 8);
          v32 = __ldrex(v31);
        while ( __strex(v32 + 1, v31) );
        ++*v31;
    v117 = 0;
    v36 = operator new(8u);
    *v36 = v96;
    v36[1] = v13;
      v37 = (unsigned int *)(v13 + 8);
          v38 = __ldrex(v37);
        while ( __strex(v38 + 1, v37) );
        ++*v37;
    LODWORD(v42) = sub_13E35F8;
    v116 = v36;
    HIDWORD(v42) = sub_13E34AC;
    *(_QWORD *)&v117 = v42;
    RealmsLoadingLevelProgressHandler::RealmsLoadingLevelProgressHandler((int)v19, &v120, (int)&v118, (int)&v116);
    if ( v117 )
      v117();
      v43 = (unsigned int *)(v13 + 8);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
    if ( v119 )
      v119();
      v48 = (unsigned int *)(HIDWORD(v10) + 8);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 12))(HIDWORD(v10));
    v50 = (void *)(v120 - 12);
    if ( (int *)(v120 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v120 - 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        goto LABEL_205;
      goto LABEL_204;
    v19 = operator new(0x40u);
    sub_21E94B4((void **)&v127, "realmsSettingsScreen.updatingWorldInfo");
    v126 = 0;
      v22 = (unsigned int *)(HIDWORD(v10) + 8);
          v23 = __ldrex(v22);
        while ( __strex(v23 + 1, v22) );
        ++*v22;
    v124 = 0;
    v27 = operator new(8u);
    *v27 = v10;
      v28 = (unsigned int *)(HIDWORD(v10) + 8);
          v29 = __ldrex(v28);
        while ( __strex(v29 + 1, v28) );
        ++*v28;
    HIDWORD(v33) = sub_13E3274;
    v123 = v27;
    LODWORD(v33) = sub_13E3408;
    *(_QWORD *)&v124 = v33;
      v34 = (unsigned int *)(v13 + 8);
          v35 = __ldrex(v34);
        while ( __strex(v35 + 1, v34) );
        ++*v34;
    v122 = 0;
    v39 = operator new(8u);
    *v39 = v96;
    v39[1] = v13;
      v40 = (unsigned int *)(v13 + 8);
          v41 = __ldrex(v40);
        while ( __strex(v41 + 1, v40) );
        ++*v40;
    LODWORD(v45) = sub_13E35F8;
    v121 = v39;
    HIDWORD(v45) = sub_13E34AC;
    *(_QWORD *)&v122 = v45;
    RealmsProgressHandler::RealmsProgressHandler((int)v19, &v127, (int)&v125, (int)&v123, (int)&v121);
    if ( v122 )
      v122();
      v46 = (unsigned int *)(v13 + 8);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 == 1 )
    if ( v124 )
      v124();
      v53 = (unsigned int *)(HIDWORD(v10) + 8);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 == 1 )
    if ( v126 )
      v126();
    v50 = (void *)(v127 - 12);
    if ( (int *)(v127 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v127 - 4);
LABEL_205:
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v50);
        goto LABEL_117;
LABEL_204:
      v52 = (*v51)--;
      goto LABEL_205;
LABEL_117:
  v55 = *(_DWORD *)(v5 + 424);
  sub_21E94B4((void **)&v110, "realms_update_realm_info");
  v109 = v19;
  v56 = sub_21E94B4((void **)&v108, (const char *)&unk_257BC67);
  MainMenuScreenModel::navigateToModalProgressScreen(v55, (int)&v110, (int)&v109, 0, (int)v56);
  v57 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v108 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  if ( v109 )
    (*(void (**)(void))(*(_DWORD *)v109 + 4))();
  v109 = 0;
  v58 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v110 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
  v59 = v5;
  v60 = *(_DWORD *)(v5 + 424);
  v107 = *(_QWORD *)(v5 + 592);
  v61 = *(_QWORD *)(v5 + 636);
  v62 = *(_BYTE *)(v5 + 644);
  v97 = *(_QWORD *)(v5 + 636) >> 32;
  v98 = v113;
  v99 = v114;
  if ( v114 )
    v63 = (unsigned int *)(v114 + 8);
        v64 = __ldrex(v63);
      while ( __strex(v64 + 1, v63) );
      ++*v63;
  v102 = 0;
  v65 = 0;
  v66 = *(void (__fastcall **)(int *))(v95 + 8);
  if ( v66 )
    v66(&v100);
    v103 = *(_DWORD *)(v95 + 12);
    v65 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v95 + 8);
    v102 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v95 + 8);
  v105 = 0;
  v67 = operator new(0x18u);
  v69 = (int *)(v59 + 608);
  *(_DWORD *)v67 = v98;
  *((_DWORD *)v67 + 1) = v99;
  if ( !v99 )
    v71 = v60;
LABEL_136:
    v72 = v61;
    goto LABEL_137;
  v70 = (unsigned int *)(v99 + 8);
  v71 = v60;
  if ( !&pthread_create )
    ++*v70;
    goto LABEL_136;
  v72 = v61;
  __dmb();
  do
    v73 = __ldrex(v70);
  while ( __strex(v73 + 1, v70) );
  v68 = *((_DWORD *)v67 + 5);
  v65 = v102;
LABEL_137:
  v74 = *(_QWORD *)&v100;
  v75 = *((_QWORD *)v67 + 1);
  v100 = *((_QWORD *)v67 + 1);
  v101 = HIDWORD(v75);
  *((_QWORD *)v67 + 1) = v74;
  v76 = v103;
  *((_DWORD *)v67 + 4) = v65;
  v103 = v68;
  *((_DWORD *)v67 + 5) = v76;
  v104 = v67;
  v105 = (void (*)(void))sub_13E3838;
  v106 = sub_13E369C;
  if ( v62 )
    LOBYTE(v62) = 1;
  MinecraftScreenModel::setRealmsWorldInfo(v71, &v107, v94, v69, v97, v72, v62, (int)&v104);
  if ( v105 )
    v105();
  if ( v102 )
    v102(&v100, &v100, 3);
  if ( v99 )
    v77 = (unsigned int *)(v99 + 8);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 == 1 )
      (*(void (**)(void))(*(_DWORD *)v99 + 12))();
  if ( !v14 )
    v79 = (unsigned int *)(v13 + 8);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v13 + 12))(v13);
  if ( HIDWORD(v10) )
    v81 = (unsigned int *)(HIDWORD(v10) + 8);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 12))(HIDWORD(v10));
  result = v114;
    v84 = (unsigned int *)(v114 + 8);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall RealmsSettingsScreenController::_goToManageSubscriptionLink(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController::_goToManageSubscriptionLink(this);
}


int __fastcall RealmsSettingsScreenController::_updateVersionsModel(int a1, const void **a2, int a3)
{
  int *v3; // r8@1
  int v4; // r4@1
  const void *v5; // r0@2
  _DWORD *v6; // r1@2
  size_t v7; // r2@2
  int result; // r0@3
  __int64 v9; // kr00_8@5
  _QWORD *v10; // r5@5
  int v11; // r10@6
  unsigned int *v12; // r2@7
  signed int v13; // r1@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  int v16; // r1@23
  void *v17; // r0@23
  int *v18; // r0@24
  int v19; // r7@26
  unsigned int *v20; // r2@29
  signed int v21; // r1@31
  unsigned int *v22; // r2@33
  signed int v23; // r1@35
  int i; // r0@27
  unsigned int v25; // r6@47
  void *v26; // r0@47
  int v27; // r6@49
  unsigned int v28; // r6@51
  void *v29; // r0@51
  int v30; // [sp+10h] [bp-48h]@26
  int v31; // [sp+14h] [bp-44h]@33
  int v32; // [sp+18h] [bp-40h]@29
  int v33; // [sp+38h] [bp-20h]@29

  v3 = (int *)a2;
  v4 = a1;
  if ( a3
    || (v5 = *a2, v6 = *(_DWORD **)(v4 + 724), v7 = *(_DWORD *)(*v3 - 12), v7 != *(v6 - 3))
    || (result = memcmp(v5, v6, v7)) != 0 )
  {
    EntityInteraction::setInteractText((int *)(v4 + 724), v3);
    *(_DWORD *)(v4 + 712) = 0;
    if ( *(_DWORD *)(*v3 - 12) )
    {
      v9 = *(_QWORD *)(v4 + 772);
      v10 = (_QWORD *)(v4 + 772);
      if ( HIDWORD(v9) != (_DWORD)v9 )
      {
        v11 = v9;
        do
        {
          v16 = *(_DWORD *)(v11 + 4);
          v17 = (void *)(v16 - 12);
          if ( (int *)(v16 - 12) != &dword_28898C0 )
          {
            v12 = (unsigned int *)(v16 - 4);
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
              j_j_j_j__ZdlPv_9(v17);
          }
          v18 = (int *)(*(_DWORD *)v11 - 12);
          if ( v18 != &dword_28898C0 )
            v14 = (unsigned int *)(*(_DWORD *)v11 - 4);
                v15 = __ldrex(v14);
              while ( __strex(v15 - 1, v14) );
              v15 = (*v14)--;
            if ( v15 <= 0 )
              j_j_j_j__ZdlPv_9(v18);
          v11 += 16;
        }
        while ( v11 != HIDWORD(v9) );
      }
      *(_DWORD *)(v4 + 776) = v9;
      result = *(_QWORD *)(v4 + 732) >> 32;
      v19 = *(_QWORD *)(v4 + 732);
      v30 = result;
      if ( v19 != result )
        for ( i = std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::find(
                    (unsigned __int64 *)(v4 + 744),
                    (int **)v3);
              ;
              i = std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::find(
                    (int **)v3) )
          if ( i )
            Util::toLower((void **)&v32, *(_DWORD *)(*(_DWORD *)v19 - 12), *(_DWORD *)v19);
            v25 = sub_21E76A0(&v32, (_BYTE *)*v3, 0, *(_DWORD *)(*v3 - 12));
            v26 = (void *)(v32 - 12);
            if ( (int *)(v32 - 12) != &dword_28898C0 )
              v20 = (unsigned int *)(v32 - 4);
              if ( v33 )
              {
                __dmb();
                do
                  v21 = __ldrex(v20);
                while ( __strex(v21 - 1, v20) );
              }
              else
                v21 = (*v20)--;
              if ( v21 <= 0 )
                j_j_j_j__ZdlPv_9(v26);
            if ( v25 != -1 )
              v27 = *(_QWORD *)(v4 + 776);
              if ( v27 != *(_QWORD *)(v4 + 776) >> 32 )
                sub_21E8AF4((int *)v27, (int *)v19);
                sub_21E8AF4((int *)(v27 + 4), (int *)(v19 + 4));
LABEL_55:
                *(_QWORD *)(v27 + 8) = *(_QWORD *)(v19 + 8);
                *(_DWORD *)(v4 + 776) += 16;
                goto LABEL_57;
LABEL_56:
              std::vector<Realms::RealmsConfigInfo::Version,std::allocator<Realms::RealmsConfigInfo::Version>>::_M_emplace_back_aux<Realms::RealmsConfigInfo::Version const&>(
                v10,
                v19);
              goto LABEL_57;
          else
            Util::toLower((void **)&v31, *(_DWORD *)(*(_DWORD *)(v19 + 4) - 12), *(_DWORD *)(v19 + 4));
            v28 = sub_21E76A0(&v31, (_BYTE *)*v3, 0, *(_DWORD *)(*v3 - 12));
            v29 = (void *)(v31 - 12);
            if ( (int *)(v31 - 12) != &dword_28898C0 )
              v22 = (unsigned int *)(v31 - 4);
                  v23 = __ldrex(v22);
                while ( __strex(v23 - 1, v22) );
                v23 = (*v22)--;
              if ( v23 <= 0 )
                j_j_j_j__ZdlPv_9(v29);
            if ( v28 != -1 )
                goto LABEL_55;
              goto LABEL_56;
LABEL_57:
          v19 += 16;
          result = v30;
          if ( v19 == v30 )
            break;
      *(_DWORD *)(v4 + 784) = v10;
    }
    else
      result = v4 + 732;
      *(_DWORD *)(v4 + 784) = v4 + 732;
  }
  return result;
}


int *__fastcall RealmsSettingsScreenController::getAdditionalScreenInfo(RealmsSettingsScreenController *this, int a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  char v4; // r0@1

  v2 = (int *)this;
  v3 = a2;
  v4 = byte_27E6A24;
  __dmb();
  if ( !(v4 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27E6A24) )
  {
    sub_21E94B4((void **)&dword_27E6A34, " - world");
    sub_21E94B4((void **)&dword_27E6A38, " - players");
    sub_21E94B4((void **)&dword_27E6A3C, " - subscription");
    sub_21E94B4((void **)&dword_27E6A40, " - dev options");
    _cxa_atexit(sub_A27144);
    j___cxa_guard_release((unsigned int *)&byte_27E6A24);
  }
  return sub_21E8AF4(v2, (int *)&unk_27E6A10 + *(_DWORD *)(v3 + 704) + 9);
}


signed int __fastcall RealmsSettingsScreenController::_shouldShowStoreMismatchMessage(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r4@1
  int v2; // r0@1
  char *v3; // r6@3
  _DWORD *v4; // r0@3
  char *v5; // r5@3
  size_t v6; // r2@3
  signed int v7; // r4@4
  unsigned int *v9; // r1@10
  signed int v10; // r0@12
  void *s2; // [sp+0h] [bp-18h]@3

  v1 = this;
  v2 = *((_DWORD *)this + 172);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      MinecraftScreenModel::getStoreId((MinecraftScreenModel *)&s2, *((_DWORD *)v1 + 106));
      v3 = (char *)s2;
      v4 = (_DWORD *)*((_DWORD *)v1 + 168);
      v5 = (char *)s2 - 12;
      v6 = *(v4 - 3);
      if ( v6 == *((_DWORD *)s2 - 3) )
        v7 = memcmp(v4, s2, v6) != 0;
      else
        v7 = 1;
      if ( (int *)v5 != &dword_28898C0 )
      {
        v9 = (unsigned int *)(v3 - 4);
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
          j_j_j_j__ZdlPv_9(v5);
      }
    }
    else
      v7 = 0;
  }
  else
    v7 = 1;
  return v7;
}


int __fastcall RealmsSettingsScreenController::_setGameDifficulty(int result, int a2)
{
  *(_DWORD *)(result + 640) = a2;
  return result;
}


int __fastcall RealmsSettingsScreenController::_resetRealm(RealmsSettingsScreenController *this)
{
  unsigned int v1; // r0@1
  int v2; // r11@1
  unsigned int *v3; // r3@2
  unsigned int v4; // r1@4
  int v5; // r9@5
  unsigned int v6; // lr@5
  signed int v7; // r7@6
  int v8; // r4@6
  unsigned int v9; // r12@6
  signed int v10; // r10@6
  signed int v11; // r5@7
  unsigned int *v12; // r2@9
  unsigned int v13; // r7@11
  unsigned int *v14; // r7@15
  unsigned int v15; // r6@17
  unsigned int v16; // r6@24
  unsigned int *v17; // r3@29
  unsigned int v18; // r7@31
  __int64 v19; // kr18_8@35
  unsigned int *v20; // r7@37
  unsigned int v21; // r6@38
  __int64 *v22; // r8@39
  int v23; // r7@39
  unsigned int *v24; // r7@43
  unsigned int v25; // r6@45
  unsigned int *v26; // r2@49
  unsigned int v27; // r7@51
  unsigned int *v28; // r2@55
  unsigned int v29; // r7@57
  int v30; // r6@60
  unsigned int *v31; // r2@61
  unsigned int v32; // r7@63
  unsigned int *v33; // r2@67
  unsigned int v34; // r3@69
  unsigned int *v35; // r0@73
  unsigned int v36; // r2@75
  unsigned int *v37; // r0@79
  unsigned int v38; // r1@81
  _DWORD *v39; // r1@84
  _DWORD *v40; // r0@84
  size_t v41; // r2@84
  int v42; // r4@90
  int v43; // r3@90
  unsigned int *v44; // r0@91
  unsigned int v45; // r1@93
  int v46; // r7@96
  unsigned int *v47; // r0@97
  unsigned int v48; // r1@99
  int v49; // r6@102
  unsigned int *v50; // r0@103
  unsigned int v51; // r1@105
  int v52; // r8@108
  unsigned int *v53; // r0@109
  unsigned int v54; // r1@111
  int v55; // r9@114
  unsigned int *v56; // r0@115
  unsigned int v57; // r1@117
  __int64 v58; // kr20_8@120
  unsigned int *v59; // r0@121
  unsigned int v60; // r1@123
  __int64 v61; // kr28_8@126
  unsigned int *v62; // r0@127
  unsigned int v63; // r1@129
  _DWORD *v64; // r0@132
  unsigned int *v65; // r1@133
  unsigned int v66; // r2@135
  unsigned int *v67; // r1@139
  unsigned int v68; // r2@141
  unsigned int *v69; // r1@145
  unsigned int v70; // r2@147
  unsigned int *v71; // r1@151
  unsigned int v72; // r2@153
  unsigned int *v73; // r1@157
  unsigned int v74; // r2@159
  unsigned int *v75; // r1@163
  unsigned int v76; // r2@165
  unsigned int *v77; // r1@169
  unsigned int v78; // r2@171
  __int64 v79; // r1@174
  unsigned int *v80; // r1@177
  unsigned int v81; // r0@179
  unsigned int *v82; // r1@185
  unsigned int v83; // r0@187
  unsigned int *v84; // r1@193
  unsigned int v85; // r0@195
  unsigned int *v86; // r1@201
  unsigned int v87; // r0@203
  unsigned int *v88; // r1@209
  unsigned int v89; // r0@211
  unsigned int *v90; // r1@217
  unsigned int v91; // r0@219
  unsigned int *v92; // r1@225
  unsigned int v93; // r0@227
  int v94; // r0@232
  unsigned int *v95; // r2@233
  unsigned int v96; // r1@235
  int v97; // r0@240
  unsigned int *v98; // r2@241
  unsigned int v99; // r1@243
  int v100; // r0@248
  unsigned int *v101; // r2@249
  unsigned int v102; // r1@251
  int v103; // r0@256
  unsigned int *v104; // r2@257
  unsigned int v105; // r1@259
  int v106; // r0@264
  unsigned int *v107; // r2@265
  unsigned int v108; // r1@267
  int v109; // r0@272
  unsigned int *v110; // r2@273
  unsigned int v111; // r1@275
  int v112; // r0@280
  unsigned int *v113; // r2@281
  unsigned int v114; // r1@283
  unsigned int *v115; // r1@289
  unsigned int v116; // r0@291
  unsigned int *v117; // r1@297
  unsigned int v118; // r0@299
  unsigned int *v119; // r1@305
  unsigned int v120; // r0@307
  unsigned int *v121; // r1@313
  unsigned int v122; // r0@315
  unsigned int *v123; // r1@321
  unsigned int v124; // r0@323
  unsigned int *v125; // r1@329
  unsigned int v126; // r0@331
  int result; // r0@336
  unsigned int *v128; // r2@337
  unsigned int v129; // r1@339
  int v130; // [sp+4h] [bp-ACh]@84
  int v131; // [sp+8h] [bp-A8h]@108
  int v132; // [sp+Ch] [bp-A4h]@114
  int v133; // [sp+10h] [bp-A0h]@102
  int v134; // [sp+14h] [bp-9Ch]@96
  int v135; // [sp+18h] [bp-98h]@108
  int v136; // [sp+1Ch] [bp-94h]@96
  signed int v137; // [sp+28h] [bp-88h]@89
  int v138; // [sp+2Ch] [bp-84h]@102
  char *v139; // [sp+30h] [bp-80h]@39
  RealmsSettingsScreenController *v140; // [sp+34h] [bp-7Ch]@1
  _DWORD *v141; // [sp+3Ch] [bp-74h]@174
  void (*v142)(void); // [sp+44h] [bp-6Ch]@132
  __int64 v143; // [sp+4Ch] [bp-64h]@39
  int v144; // [sp+54h] [bp-5Ch]@48
  int v145; // [sp+58h] [bp-58h]@48
  int v146; // [sp+5Ch] [bp-54h]@54
  int v147; // [sp+60h] [bp-50h]@54
  int v148; // [sp+64h] [bp-4Ch]@60
  int v149; // [sp+68h] [bp-48h]@60
  int v150; // [sp+6Ch] [bp-44h]@66
  int v151; // [sp+70h] [bp-40h]@66
  unsigned int v152; // [sp+74h] [bp-3Ch]@72
  int v153; // [sp+78h] [bp-38h]@72
  unsigned int v154; // [sp+7Ch] [bp-34h]@78
  int v155; // [sp+80h] [bp-30h]@78
  unsigned int v156; // [sp+84h] [bp-2Ch]@1
  int v157; // [sp+88h] [bp-28h]@1

  v140 = this;
  MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v156, (int)this);
  v2 = v157;
  v1 = v156;
  if ( !v157 )
  {
    v5 = 0;
    v10 = 1;
    v9 = v156;
    v6 = v156;
    v11 = 1;
    v8 = 0;
    goto LABEL_35;
  }
  v3 = (unsigned int *)(v157 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 + 1, v3) );
    v5 = v157;
    if ( !v157 )
    {
      v7 = 1;
      v8 = 0;
      v5 = 0;
      v9 = v156;
      v10 = 1;
      goto LABEL_22;
    }
  else
    ++*v3;
  v12 = (unsigned int *)(v5 + 8);
  if ( !&pthread_create )
    v8 = v5;
    v9 = v6;
    ++*v12;
    goto LABEL_15;
  __dmb();
  do
    v13 = __ldrex(v12);
  while ( __strex(v13 + 1, v12) );
  v8 = v157;
  v9 = v156;
  if ( v157 )
LABEL_15:
    v14 = (unsigned int *)(v8 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
    else
      ++*v14;
    v10 = 0;
    goto LABEL_21;
  v8 = 0;
  v10 = 1;
LABEL_21:
  v7 = 0;
LABEL_22:
      v16 = __ldrex(v3);
    while ( __strex(v16 + 1, v3) );
    if ( v7 )
      v11 = 1;
      goto LABEL_35;
  v17 = (unsigned int *)(v5 + 8);
      v18 = __ldrex(v17);
    while ( __strex(v18 + 1, v17) );
    ++*v17;
  v11 = 0;
LABEL_35:
  v19 = *(_QWORD *)&v156;
    v22 = &v143;
    v143 = v156;
    v139 = (char *)&v143 + 4;
    goto LABEL_48;
    ++*(_DWORD *)(v157 + 8);
    v143 = v19;
    v23 = HIDWORD(v19);
LABEL_43:
    v24 = (unsigned int *)(v23 + 8);
        v25 = __ldrex(v24);
      while ( __strex(v25 + 1, v24) );
      ++*v24;
  v20 = (unsigned int *)(v157 + 8);
    v21 = __ldrex(v20);
  while ( __strex(v21 + 1, v20) );
  v22 = &v143;
  v23 = v157;
  v143 = *(_QWORD *)&v156;
  v139 = (char *)&v143 + 4;
    goto LABEL_43;
LABEL_48:
  v144 = v9;
  v145 = v8;
  if ( !v10 )
    v26 = (unsigned int *)(v8 + 8);
        v27 = __ldrex(v26);
      while ( __strex(v27 + 1, v26) );
      ++*v26;
  v146 = v1;
  v147 = v2;
  if ( v2 )
    v28 = (unsigned int *)(v2 + 8);
        v29 = __ldrex(v28);
      while ( __strex(v29 + 1, v28) );
      ++*v28;
  v30 = HIDWORD(v19);
  v148 = v6;
  v149 = v5;
  if ( !v11 )
    v31 = (unsigned int *)(v5 + 8);
        v32 = __ldrex(v31);
      while ( __strex(v32 + 1, v31) );
      v30 = HIDWORD(v19);
      ++*v31;
  v150 = v19;
  v151 = v30;
  if ( v30 )
    v33 = (unsigned int *)(v30 + 8);
        v34 = __ldrex(v33);
      while ( __strex(v34 + 1, v33) );
      ++*v33;
  v152 = v1;
  v153 = v2;
    v35 = (unsigned int *)(v2 + 8);
        v36 = __ldrex(v35);
      while ( __strex(v36 + 1, v35) );
      ++*v35;
  v154 = v6;
  v155 = v5;
    v37 = (unsigned int *)(v5 + 8);
        v38 = __ldrex(v37);
      while ( __strex(v38 + 1, v37) );
      ++*v37;
  v130 = v8;
  v39 = (_DWORD *)*((_DWORD *)v140 + 133);
  v40 = (_DWORD *)*((_DWORD *)v140 + 151);
  v41 = *(v40 - 3);
  if ( v41 == *(v39 - 3)
    && !memcmp(v40, v39, v41)
    && *((_DWORD *)v140 + 160) == *((_DWORD *)v140 + 142)
    && *((_DWORD *)v140 + 159) == *((_DWORD *)v140 + 141)
    && *((_BYTE *)v140 + 644) == *((_BYTE *)v140 + 572) )
    v137 = v10;
    sub_13D7F48((int)&v143);
    v42 = *(_DWORD *)v22;
    v43 = *(_DWORD *)v139;
    if ( *(_DWORD *)v139 )
      v44 = (unsigned int *)(v43 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v45 = __ldrex(v44);
        while ( __strex(v45 + 1, v44) );
      }
      else
        ++*v44;
    v46 = v145;
    v136 = v30;
    v134 = v144;
    if ( v145 )
      v47 = (unsigned int *)(v145 + 8);
          v48 = __ldrex(v47);
        while ( __strex(v48 + 1, v47) );
        ++*v47;
    v49 = v147;
    v138 = v43;
    v133 = v146;
    if ( v147 )
      v50 = (unsigned int *)(v147 + 8);
          v51 = __ldrex(v50);
        while ( __strex(v51 + 1, v50) );
        ++*v50;
    v52 = v149;
    v135 = v5;
    v131 = v148;
    if ( v149 )
      v53 = (unsigned int *)(v149 + 8);
          v54 = __ldrex(v53);
        while ( __strex(v54 + 1, v53) );
        ++*v53;
    v55 = v151;
    v132 = v150;
    if ( v151 )
      v56 = (unsigned int *)(v151 + 8);
          v57 = __ldrex(v56);
        while ( __strex(v57 + 1, v56) );
        ++*v56;
    v58 = *(_QWORD *)&v152;
    if ( v153 )
      v59 = (unsigned int *)(v153 + 8);
          v60 = __ldrex(v59);
        while ( __strex(v60 + 1, v59) );
        ++*v59;
    v61 = *(_QWORD *)&v154;
    if ( v155 )
      v62 = (unsigned int *)(v155 + 8);
          v63 = __ldrex(v62);
        while ( __strex(v63 + 1, v62) );
        ++*v62;
    v142 = 0;
    v64 = operator new(0x38u);
    *v64 = v42;
    v64[1] = v138;
    if ( v138 )
      v65 = (unsigned int *)(v138 + 8);
          v66 = __ldrex(v65);
        while ( __strex(v66 + 1, v65) );
        ++*v65;
    v64[2] = v134;
    v64[3] = v46;
    if ( v46 )
      v67 = (unsigned int *)(v46 + 8);
          v68 = __ldrex(v67);
        while ( __strex(v68 + 1, v67) );
        ++*v67;
    v64[4] = v133;
    v64[5] = v49;
    if ( v49 )
      v69 = (unsigned int *)(v49 + 8);
          v70 = __ldrex(v69);
        while ( __strex(v70 + 1, v69) );
        ++*v69;
    v64[6] = v131;
    v64[7] = v52;
    if ( v52 )
      v71 = (unsigned int *)(v52 + 8);
          v72 = __ldrex(v71);
        while ( __strex(v72 + 1, v71) );
        ++*v71;
    v64[8] = v132;
    v64[9] = v55;
    if ( v55 )
      v73 = (unsigned int *)(v55 + 8);
          v74 = __ldrex(v73);
        while ( __strex(v74 + 1, v73) );
        ++*v73;
    *((_QWORD *)v64 + 5) = v58;
    if ( HIDWORD(v58) )
      v75 = (unsigned int *)(HIDWORD(v58) + 8);
          v76 = __ldrex(v75);
        while ( __strex(v76 + 1, v75) );
        ++*v75;
    *((_QWORD *)v64 + 6) = v61;
    if ( HIDWORD(v61) )
      v77 = (unsigned int *)(HIDWORD(v61) + 8);
          v78 = __ldrex(v77);
        while ( __strex(v78 + 1, v77) );
        ++*v77;
    LODWORD(v79) = sub_13E5348;
    v141 = v64;
    HIDWORD(v79) = sub_13E5340;
    *(_QWORD *)&v142 = v79;
    RealmsSettingsScreenController::_saveSettings((int)v140, 0, (int)&v141);
    if ( v142 )
      v142();
      v80 = (unsigned int *)(HIDWORD(v61) + 8);
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        v81 = (*v80)--;
      if ( v81 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v61) + 12))(HIDWORD(v61));
      v82 = (unsigned int *)(HIDWORD(v58) + 8);
          v83 = __ldrex(v82);
        while ( __strex(v83 - 1, v82) );
        v83 = (*v82)--;
      if ( v83 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v58) + 12))(HIDWORD(v58));
      v84 = (unsigned int *)(v55 + 8);
          v85 = __ldrex(v84);
        while ( __strex(v85 - 1, v84) );
        v85 = (*v84)--;
      if ( v85 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v55 + 12))(v55);
    v5 = v135;
      v86 = (unsigned int *)(v52 + 8);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      if ( v87 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 12))(v52);
      v88 = (unsigned int *)(v49 + 8);
          v89 = __ldrex(v88);
        while ( __strex(v89 - 1, v88) );
        v89 = (*v88)--;
      if ( v89 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 12))(v49);
    v30 = v136;
      v90 = (unsigned int *)(v46 + 8);
          v91 = __ldrex(v90);
        while ( __strex(v91 - 1, v90) );
        v91 = (*v90)--;
      if ( v91 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 12))(v46);
      v92 = (unsigned int *)(v138 + 8);
          v93 = __ldrex(v92);
        while ( __strex(v93 - 1, v92) );
        v93 = (*v92)--;
      if ( v93 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v138 + 12))(v138);
  v94 = v155;
  if ( v155 )
    v95 = (unsigned int *)(v155 + 8);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 == 1 )
      (*(void (**)(void))(*(_DWORD *)v94 + 12))();
  v97 = v153;
  if ( v153 )
    v98 = (unsigned int *)(v153 + 8);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 == 1 )
      (*(void (**)(void))(*(_DWORD *)v97 + 12))();
  v100 = v151;
  if ( v151 )
    v101 = (unsigned int *)(v151 + 8);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 == 1 )
      (*(void (**)(void))(*(_DWORD *)v100 + 12))();
  v103 = v149;
  if ( v149 )
    v104 = (unsigned int *)(v149 + 8);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 == 1 )
      (*(void (**)(void))(*(_DWORD *)v103 + 12))();
  v106 = v147;
  if ( v147 )
    v107 = (unsigned int *)(v147 + 8);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 == 1 )
      (*(void (**)(void))(*(_DWORD *)v106 + 12))();
  v109 = v145;
  if ( v145 )
    v110 = (unsigned int *)(v145 + 8);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 == 1 )
      (*(void (**)(void))(*(_DWORD *)v109 + 12))();
  v112 = *(_DWORD *)v139;
  if ( *(_DWORD *)v139 )
    v113 = (unsigned int *)(v112 + 8);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 == 1 )
      (*(void (**)(void))(*(_DWORD *)v112 + 12))();
    v115 = (unsigned int *)(v30 + 8);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
    v117 = (unsigned int *)(v5 + 8);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
    v119 = (unsigned int *)(v2 + 8);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  if ( !v137 )
    v121 = (unsigned int *)(v130 + 8);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 == 1 )
      (*(void (**)(void))(*(_DWORD *)v130 + 12))();
    v123 = (unsigned int *)(v5 + 8);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 == 1 )
    v125 = (unsigned int *)(v2 + 8);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 == 1 )
  result = v157;
    v128 = (unsigned int *)(v157 + 8);
        v129 = __ldrex(v128);
      while ( __strex(v129 - 1, v128) );
      v129 = (*v128)--;
    if ( v129 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall RealmsSettingsScreenController::_getLocalizedStoreDisplayName(int *a1, int a2, int **a3)
{
  RealmsSettingsScreenController::_getLocalizedStoreDisplayName(a1, a2, a3);
}


void __fastcall RealmsSettingsScreenController::_updateWorld(RealmsSettingsScreenController *this, Realms::World *a2)
{
  RealmsSettingsScreenController::_updateWorld(this, a2);
}


void __fastcall RealmsSettingsScreenController::~RealmsSettingsScreenController(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController::~RealmsSettingsScreenController(this);
}


int __fastcall RealmsSettingsScreenController::_handleChangePageButtonClick(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r2@1
  signed __int64 v4; // kr00_8@1
  signed int v5; // r4@1

  v2 = a2 + *(_DWORD *)(result + 712);
  v3 = (signed int)((*(_QWORD *)*(_DWORD *)(result + 784) >> 32) - *(_QWORD *)*(_DWORD *)(result + 784)) >> 4;
  v4 = 3435973837LL * v3;
  v5 = v3 / 0xA;
  if ( !(v3 % 0xA) )
    v5 = (HIDWORD(v4) >> 3) - 1;
  if ( v2 < v5 )
    v5 = v2;
  if ( v5 <= 0 )
    v5 = 0;
  *(_DWORD *)(result + 712) = v5;
  return result;
}


int __fastcall RealmsSettingsScreenController::_cancelAsyncCallsAndExitProgressScreen(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r4@1

  v1 = this;
  MinecraftScreenModel::abortAllRealmsRequests(*((MinecraftScreenModel **)this + 106));
  *(_BYTE *)(*((_DWORD *)v1 + 129) + 1) = 1;
  return j_j_j__ZN20MinecraftScreenModel11leaveScreenEv_1(*((MinecraftScreenModel **)v1 + 106));
}


void __fastcall RealmsSettingsScreenController::_registerEventHandlers(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController::_registerEventHandlers(this);
}


int __fastcall RealmsSettingsScreenController::_refreshWorldInfo(RealmsSettingsScreenController *this, bool a2)
{
  RealmsSettingsScreenController *v2; // r7@1
  bool v3; // r6@1
  __int64 v4; // kr00_8@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  __int64 v7; // r10@5
  signed int v8; // r9@6
  unsigned int *v9; // r0@9
  unsigned int v10; // r1@11
  int v11; // r6@15
  int v12; // r3@15
  void *v13; // r6@15
  unsigned int *v14; // r1@16
  unsigned int v15; // r2@18
  _QWORD *v16; // r0@21
  unsigned int *v17; // r1@22
  unsigned int v18; // r2@24
  __int64 v19; // r1@27
  unsigned int *v20; // r0@28
  unsigned int v21; // r1@30
  _QWORD *v22; // r0@33
  unsigned int *v23; // r1@34
  unsigned int v24; // r2@36
  __int64 v25; // r1@39
  unsigned int *v26; // r1@42
  unsigned int v27; // r0@44
  unsigned int *v28; // r1@52
  unsigned int v29; // r0@54
  void *v30; // r0@61
  int v31; // r5@62
  void **v32; // r0@62
  void *v33; // r0@62
  void *v34; // r0@65
  int v35; // r5@66
  __int64 v36; // kr08_8@66
  unsigned int *v37; // r0@67
  unsigned int v38; // r1@69
  _BYTE *v39; // r0@72
  unsigned int *v40; // r1@73
  unsigned int v41; // r2@75
  __int64 v42; // r1@78
  unsigned int *v43; // r1@81
  unsigned int v44; // r0@83
  unsigned int *v45; // r1@89
  unsigned int v46; // r7@91
  unsigned int *v47; // r1@97
  unsigned int v48; // r0@99
  int result; // r0@104
  unsigned int *v50; // r2@105
  unsigned int v51; // r1@107
  unsigned int *v52; // r2@113
  signed int v53; // r1@115
  unsigned int *v54; // r2@117
  signed int v55; // r1@119
  unsigned int *v56; // r2@121
  signed int v57; // r1@123
  bool v58; // [sp+4h] [bp-9Ch]@3
  _BYTE *v59; // [sp+8h] [bp-98h]@78
  void (*v60)(void); // [sp+10h] [bp-90h]@72
  __int64 v61; // [sp+18h] [bp-88h]@66
  int v62; // [sp+28h] [bp-78h]@62
  void *v63; // [sp+2Ch] [bp-74h]@62
  int v64; // [sp+34h] [bp-6Ch]@62
  __int64 v65; // [sp+38h] [bp-68h]@1
  _QWORD *v66; // [sp+40h] [bp-60h]@39
  void (*v67)(void); // [sp+48h] [bp-58h]@33
  _QWORD *v68; // [sp+50h] [bp-50h]@27
  void (*v69)(void); // [sp+58h] [bp-48h]@21
  char v70; // [sp+60h] [bp-40h]@15
  void (*v71)(void); // [sp+68h] [bp-38h]@15
  int v72; // [sp+74h] [bp-2Ch]@15

  v2 = this;
  v3 = a2;
  MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v65, (int)this);
  v4 = v65;
  if ( HIDWORD(v65) )
  {
    v5 = (unsigned int *)(HIDWORD(v65) + 8);
    if ( &pthread_create )
    {
      v58 = v3;
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
      v7 = v65;
      if ( !HIDWORD(v65) )
      {
        HIDWORD(v7) = 0;
        v8 = 1;
        goto LABEL_15;
      }
    }
    else
      ++*v5;
    v9 = (unsigned int *)(HIDWORD(v7) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
      ++*v9;
    v8 = 0;
  }
  else
    v58 = v3;
    v8 = 1;
    v7 = (unsigned int)v65;
LABEL_15:
  v11 = *((_DWORD *)v2 + 129);
  sub_21E034C(&v70);
  v12 = v11 + 8;
  *(_QWORD *)v12 = *(_QWORD *)&v70;
  *(_DWORD *)(v12 + 8) = 60;
  *(_DWORD *)(v12 + 12) = 0;
  *(_BYTE *)(v11 + 24) = 0;
  *(_BYTE *)(v11 + 1) = 0;
  v13 = operator new(0x40u);
  sub_21E94B4((void **)&v72, "realmsSettingsScreen.fetchingWorldInfo");
  v71 = 0;
  if ( HIDWORD(v4) )
    v14 = (unsigned int *)(HIDWORD(v4) + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  v69 = 0;
  v16 = operator new(8u);
  *v16 = v4;
    v17 = (unsigned int *)(HIDWORD(v4) + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
      ++*v17;
  HIDWORD(v19) = sub_13E0118;
  v68 = v16;
  LODWORD(v19) = sub_13E02C4;
  *(_QWORD *)&v69 = v19;
  if ( !v8 )
    v20 = (unsigned int *)(HIDWORD(v7) + 8);
        v21 = __ldrex(v20);
      while ( __strex(v21 + 1, v20) );
      ++*v20;
  v67 = 0;
  v22 = operator new(8u);
  *v22 = v7;
    v23 = (unsigned int *)(HIDWORD(v7) + 8);
        v24 = __ldrex(v23);
      while ( __strex(v24 + 1, v23) );
      ++*v23;
  LODWORD(v25) = sub_13E04BC;
  v66 = v22;
  HIDWORD(v25) = sub_13E0368;
  *(_QWORD *)&v67 = v25;
  RealmsProgressHandler::RealmsProgressHandler((int)v13, &v72, (int)&v70, (int)&v68, (int)&v66);
  if ( v67 )
    v67();
    v26 = (unsigned int *)(HIDWORD(v7) + 8);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 12))(HIDWORD(v7));
  if ( v69 )
    v69();
    v28 = (unsigned int *)(HIDWORD(v4) + 8);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  if ( v71 )
    v71();
  v30 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v72 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = *((_DWORD *)v2 + 106);
  sub_21E94B4((void **)&v64, "realms_fetching_world_info");
  v63 = v13;
  v32 = sub_21E94B4((void **)&v62, (const char *)&unk_257BC67);
  MainMenuScreenModel::navigateToModalProgressScreen(v31, (int)&v64, (int)&v63, 0, (int)v32);
  v33 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v62 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  if ( v63 )
    (*(void (**)(void))(*(_DWORD *)v63 + 4))();
  v63 = 0;
  v34 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v64 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = *((_DWORD *)v2 + 106);
  v61 = *((_QWORD *)v2 + 65);
  v36 = v65;
    v37 = (unsigned int *)(HIDWORD(v65) + 8);
        v38 = __ldrex(v37);
      while ( __strex(v38 + 1, v37) );
      ++*v37;
  v60 = 0;
  v39 = operator new(0xCu);
  *(_QWORD *)v39 = v36;
  if ( HIDWORD(v36) )
    v40 = (unsigned int *)(HIDWORD(v36) + 8);
        v41 = __ldrex(v40);
      while ( __strex(v41 + 1, v40) );
      ++*v40;
  LODWORD(v42) = sub_13E08C4;
  HIDWORD(v42) = sub_13E0560;
  v39[8] = v58;
  v59 = v39;
  *(_QWORD *)&v60 = v42;
  MinecraftScreenModel::getRealmsWorld(v35, &v61, (int)&v59);
  if ( v60 )
    v60();
    v43 = (unsigned int *)(HIDWORD(v36) + 8);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v36) + 12))(HIDWORD(v36));
    v45 = (unsigned int *)(HIDWORD(v7) + 8);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 == 1 )
    v47 = (unsigned int *)(HIDWORD(v4) + 8);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 == 1 )
  result = HIDWORD(v65);
    v50 = (unsigned int *)(HIDWORD(v65) + 8);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int *__fastcall RealmsSettingsScreenController::onOpen(RealmsSettingsScreenController *this, int a2, __int64 a3)
{
  RealmsSettingsScreenController *v3; // r4@1
  unsigned int v4; // r0@1
  unsigned int v5; // r0@2

  v3 = this;
  v4 = *((_WORD *)this + 342);
  if ( (_BYTE)v4 )
  {
    v5 = v4 >> 8;
  }
  else
    RealmsSettingsScreenController::_refreshWorldInfo(v3, 0);
    RealmsSettingsScreenController::_querySubscriptionInfo(v3);
    *((_BYTE *)v3 + 708) = 1;
    *((_BYTE *)v3 + 684) = 1;
    v5 = *((_BYTE *)v3 + 685);
  if ( v5 )
    RealmsSettingsScreenController::_refreshWorldInfo(v3, 1);
    *((_BYTE *)v3 + 685) = 0;
  return j_j_j__ZN16ScreenController6onOpenEv_0(v3, a2, a3);
}


void __fastcall RealmsSettingsScreenController::_getDifficultyStringFromIndex(RealmsSettingsScreenController *this, int a2, int a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  char v5; // r0@1

  v3 = (int *)this;
  v4 = a3;
  v5 = byte_27E6A2C;
  __dmb();
  if ( !(v5 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27E6A2C) )
  {
    sub_21E94B4((void **)&dword_27E6A44, "options.difficulty.peaceful");
    sub_21E94B4((void **)&dword_27E6A48, "options.difficulty.easy");
    sub_21E94B4((void **)&dword_27E6A4C, "options.difficulty.normal");
    sub_21E94B4((void **)&dword_27E6A50, "options.difficulty.hard");
    _cxa_atexit(sub_A272C0);
    j___cxa_guard_release((unsigned int *)&byte_27E6A2C);
  }
  I18n::get(v3, (int **)&unk_27E6A10 + v4 + 13);
}


int __fastcall RealmsSettingsScreenController::_downloadWorld(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r5@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  _DWORD *v5; // r0@7
  _DWORD *v6; // r1@7
  size_t v7; // r2@7
  int v8; // r1@11
  int v9; // r6@12
  void *v10; // r0@12
  unsigned int *v11; // r5@14
  unsigned int *v12; // r0@16
  unsigned int v13; // r1@18
  _QWORD *v14; // r0@21
  unsigned int *v15; // r1@22
  unsigned int v16; // r2@24
  __int64 v17; // r1@27
  unsigned int v18; // r0@32
  unsigned int v19; // r0@39
  int result; // r0@44
  unsigned int *v21; // r2@45
  unsigned int v22; // r1@47
  unsigned int *v23; // r2@53
  signed int v24; // r1@55
  int v25; // [sp+0h] [bp-30h]@12
  _QWORD *v26; // [sp+4h] [bp-2Ch]@27
  void (*v27)(void); // [sp+Ch] [bp-24h]@21
  char v28; // [sp+14h] [bp-1Ch]@1
  int v29; // [sp+18h] [bp-18h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v28, (int)this);
  v2 = *(_QWORD *)&v28;
  if ( v29 )
  {
    v3 = (unsigned int *)(v29 + 8);
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
  v5 = (_DWORD *)*((_DWORD *)v1 + 151);
  v6 = (_DWORD *)*((_DWORD *)v1 + 133);
  v7 = *(v5 - 3);
  if ( v7 == *(v6 - 3)
    && !memcmp(v5, v6, v7)
    && *((_DWORD *)v1 + 160) == *((_DWORD *)v1 + 142)
    && *((_DWORD *)v1 + 159) == *((_DWORD *)v1 + 141)
    && (v8 = *((_BYTE *)v1 + 644), v8 == *((_BYTE *)v1 + 572)) )
    v9 = *((_DWORD *)v1 + 106);
    Util::toString<long long,(void *)0,(void *)0>((void **)&v25, v8, *((_QWORD *)v1 + 65));
    MainMenuScreenModel::navigateToFileDownloadFile(v9, &v25, (int *)v1 + 133);
    v10 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v25 - 4);
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
        j_j_j_j__ZdlPv_9(v10);
    if ( HIDWORD(v2) )
      v11 = (unsigned int *)(HIDWORD(v2) + 8);
LABEL_37:
          v19 = __ldrex(v11);
        while ( __strex(v19 - 1, v11) );
        v19 = (*v11)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
      goto LABEL_44;
  else
      v12 = (unsigned int *)(HIDWORD(v2) + 8);
          v13 = __ldrex(v12);
        while ( __strex(v13 + 1, v12) );
        ++*v12;
    v27 = 0;
    v14 = operator new(8u);
    *v14 = v2;
      v15 = (unsigned int *)(HIDWORD(v2) + 8);
          v16 = __ldrex(v15);
        while ( __strex(v16 + 1, v15) );
        ++*v15;
    LODWORD(v17) = sub_13E63C0;
    v26 = v14;
    HIDWORD(v17) = sub_13E61BC;
    *(_QWORD *)&v27 = v17;
    RealmsSettingsScreenController::_saveSettings((int)v1, 0, (int)&v26);
    if ( v27 )
      v27();
          v18 = __ldrex(v11);
        while ( __strex(v18 - 1, v11) );
        v18 = (*v11)--;
      if ( v18 == 1 )
      goto LABEL_37;
LABEL_44:
  result = v29;
    v21 = (unsigned int *)(v29 + 8);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall RealmsSettingsScreenController::_joinRealm(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController::_joinRealm(this);
}


ModalScreenData *__fastcall RealmsSettingsScreenController::_confirmResetRealm(RealmsSettingsScreenController *this)
{
  RealmsSettingsScreenController *v1; // r5@1
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
  sub_21E8190(&v23, "realmsSettingsScreen.resetRealm", (_BYTE *)0x1F);
  sub_21E8190(&v19, "realmsSettingsScreen.confirmReset", (_BYTE *)0x21);
  sub_21E8190(&v28, "realmsSettingsScreen.reset", (_BYTE *)0x1A);
  sub_21E8190(&v30, "gui.cancel", (_BYTE *)0xA);
  MinecraftScreenController::_getWeakPtrToThis<RealmsSettingsScreenController>((int)&v17, (int)v1);
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
  v8 = sub_13E529C;
  v15 = v5;
  LODWORD(v6) = sub_13E514C;
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


ModalScreenData *__fastcall RealmsSettingsScreenController::_showErrorPopup(int a1, int *a2, int *a3, int a4)
{
  int v4; // r6@1
  int v5; // r7@1
  void (__fastcall *v6)(char *, int, signed int); // r3@1
  int *v7; // r4@1
  int *v8; // r5@1
  ModalScreenData *result; // r0@3
  char v10; // [sp+4h] [bp-24h]@2
  int (*v11)(void); // [sp+Ch] [bp-1Ch]@1
  int v12; // [sp+10h] [bp-18h]@2

  v4 = a1;
  v5 = a4;
  v11 = 0;
  v6 = *(void (__fastcall **)(char *, int, signed int))(a4 + 8);
  v7 = a3;
  v8 = a2;
  if ( v6 )
  {
    v6(&v10, v5, 2);
    v12 = *(_DWORD *)(v5 + 12);
    v11 = *(int (**)(void))(v5 + 8);
  }
  result = MinecraftScreenController::_displayStandardModalPopup(v4, v8, v7, 2, (int)&v10);
  if ( v11 )
    result = (ModalScreenData *)v11();
  return result;
}
