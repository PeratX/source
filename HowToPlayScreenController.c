

int __fastcall HowToPlayScreenController::_updateRemappingLayout(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  void *v4; // r0@3
  int result; // r0@4
  int v6; // r0@6

  v2 = a1;
  *(_DWORD *)(a1 + 480) = a2;
  v3 = *(_DWORD *)(a1 + 380);
  if ( (unsigned int)(a2 - 3) > 1 )
  {
    result = MinecraftScreenModel::getKeyboardRemappingLayout(*(MinecraftScreenModel **)(a1 + 380));
    *(_DWORD *)(v2 + 484) = result;
  }
  else
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v4 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v4 = &ServiceLocator<AppPlatform>::mDefaultService;
    v6 = (*(int (**)(void))(**(_DWORD **)v4 + 460))();
    result = MinecraftScreenModel::getGamepadRemappingLayout(v3, v6);
  return result;
}


int __fastcall HowToPlayScreenController::HowToPlayScreenController(int a1, int a2, int a3)
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
  int v14; // [sp+0h] [bp-20h]@1
  int v15; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  v14 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v15 = v5;
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
  MainMenuScreenController::MainMenuScreenController(v3, (int)&v14);
  v8 = v15;
  if ( v15 )
    v9 = (unsigned int *)(v15 + 4);
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
  *(_DWORD *)v3 = &off_26E2184;
  *(_DWORD *)(v3 + 432) = &unk_28898CC;
  *(_DWORD *)(v3 + 436) = -1;
  *(_DWORD *)(v3 + 440) = v4;
  *(_BYTE *)(v3 + 444) = 0;
  *(_BYTE *)(v3 + 445) = 0;
  *(_DWORD *)(v3 + 456) = 0;
  *(_DWORD *)(v3 + 472) = 0;
  HowToPlayScreenController::_init((HowToPlayScreenController *)v3);
  return v3;
}


HowToPlayScreenController *__fastcall HowToPlayScreenController::~HowToPlayScreenController(HowToPlayScreenController *this)
{
  HowToPlayScreenController *v1; // r4@1
  void (*v2)(void); // r3@1
  void (*v3)(void); // r3@3
  int v4; // r1@5
  void *v5; // r0@5
  unsigned int *v7; // r12@7
  signed int v8; // r1@9

  v1 = this;
  *(_DWORD *)this = &off_26E2184;
  v2 = (void (*)(void))*((_DWORD *)this + 118);
  if ( v2 )
    v2();
  v3 = (void (*)(void))*((_DWORD *)v1 + 114);
  if ( v3 )
    v3();
  v4 = *((_DWORD *)v1 + 108);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v4 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


int __fastcall HowToPlayScreenController::_isKeyboardBeingUsed(HowToPlayScreenController *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 120);
  if ( result != 1 )
    result = 0;
  return result;
}


int __fastcall HowToPlayScreenController::_isContentAreaFocused(HowToPlayScreenController *this)
{
  int result; // r0@2

  if ( (unsigned int)(*((_DWORD *)this + 120) - 3) <= 1 )
    result = *((_BYTE *)this + 445) != 0;
  else
    result = 0;
  return result;
}


int __fastcall HowToPlayScreenController::tick(HowToPlayScreenController *this)
{
  HowToPlayScreenController *v1; // r4@1
  int v2; // r0@4
  void *v3; // r0@6
  unsigned int *v5; // r2@8
  signed int v6; // r1@10
  int v7; // [sp+0h] [bp-28h]@3
  int v8; // [sp+4h] [bp-24h]@3
  unsigned __int8 v9; // [sp+8h] [bp-20h]@4
  char v10; // [sp+9h] [bp-1Fh]@3

  v1 = this;
  if ( !*((_BYTE *)this + 444) && *((_DWORD *)this + 114) )
  {
    sub_1590164((void **)&v8, "navigation_tab");
    v10 = 0;
    v7 = *((_DWORD *)v1 + 110);
    if ( !*((_DWORD *)v1 + 114) )
      sub_1590214();
    (*((void (__fastcall **)(_DWORD, _DWORD))v1 + 115))((char *)v1 + 448, &v7);
    v2 = v9;
    *((_BYTE *)v1 + 444) = v9;
    if ( v2 )
      *((_DWORD *)v1 + 109) = v7;
    v3 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v8 - 4);
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
  }
  return 0;
}


void **__fastcall HowToPlayScreenController::_getButtonBDescription(HowToPlayScreenController *this, int a2)
{
  void **result; // r0@3

  if ( (unsigned int)(*(_DWORD *)(a2 + 480) - 3) > 1 || *(_BYTE *)(a2 + 445) )
    result = sub_1590164((void **)this, "controller.buttonTip.back");
  else
    result = sub_1590164((void **)this, "controller.buttonTip.exit");
  return result;
}


void __fastcall HowToPlayScreenController::_registerControllerCallbacks(HowToPlayScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  _DWORD *v8; // [sp+4h] [bp-2Ch]@1
  __int64 v9; // [sp+Ch] [bp-24h]@1
  int v10; // [sp+18h] [bp-18h]@1

  v1 = this;
  sub_1590164((void **)&v10, "patch_notes_button");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11AABBE;
  *v3 = v1;
  HIDWORD(v4) = sub_11AABAC;
  v8 = v3;
  v9 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v8);
  if ( (_DWORD)v9 )
    ((void (*)(void))v9)();
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v10 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
}


char *__fastcall HowToPlayScreenController::_registerEventHandlers(HowToPlayScreenController *this)
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
  _DWORD *v10; // r0@7
  __int64 v11; // r1@7
  char *result; // r0@7
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  _DWORD *v17; // [sp+4h] [bp-54h]@7
  __int64 v18; // [sp+Ch] [bp-4Ch]@7
  _DWORD *v19; // [sp+14h] [bp-44h]@4
  __int64 v20; // [sp+1Ch] [bp-3Ch]@4
  int v21; // [sp+28h] [bp-30h]@4
  _DWORD *v22; // [sp+2Ch] [bp-2Ch]@1
  __int64 v23; // [sp+34h] [bp-24h]@1
  int v24; // [sp+40h] [bp-18h]@1

  v1 = this;
  sub_1590164((void **)&v24, "navigation_tab");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v24);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11AAFB0;
  *v3 = v1;
  HIDWORD(v4) = sub_11AABF4;
  v22 = v3;
  v23 = v4;
  ScreenController::registerToggleChangeEventHandler((int)v1, v2, (int)&v22);
  if ( (_DWORD)v23 )
    ((void (*)(void))v23)();
  v5 = (void *)(v24 - 12);
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
      j_j_j_j_j__ZdlPv_9_2(v5);
  }
  sub_1590164((void **)&v21, "button.back_to_selector_area");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v21);
  v7 = operator new(4u);
  LODWORD(v8) = sub_11AAFFE;
  *v7 = v1;
  HIDWORD(v8) = sub_11AAFE6;
  v19 = v7;
  v20 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v19);
  if ( (_DWORD)v20 )
    ((void (*)(void))v20)();
  v9 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v21 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v9);
  v10 = operator new(4u);
  LODWORD(v11) = sub_11AB098;
  *v10 = v1;
  HIDWORD(v11) = sub_11AB034;
  v17 = v10;
  v18 = v11;
  result = ScreenController::registerInputModechangedEventHandler((int)v1, (int)&v17);
  if ( (_DWORD)v18 )
    result = (char *)((int (*)(void))v18)();
  return result;
}


signed int __fastcall HowToPlayScreenController::_isTouchBeingUsed(HowToPlayScreenController *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 120);
  result = 0;
  if ( v1 == 2 )
    result = 1;
  return result;
}


signed int __fastcall HowToPlayScreenController::_isGamepadBeingUsed(HowToPlayScreenController *this)
{
  unsigned int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 120) - 3;
  result = 0;
  if ( v1 < 2 )
    result = 1;
  return result;
}


void __fastcall HowToPlayScreenController::_registerControllerCallbacks(HowToPlayScreenController *this)
{
  HowToPlayScreenController::_registerControllerCallbacks(this);
}


void __fastcall HowToPlayScreenController::~HowToPlayScreenController(HowToPlayScreenController *this)
{
  HowToPlayScreenController *v1; // r0@1

  v1 = HowToPlayScreenController::~HowToPlayScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall HowToPlayScreenController::setViewCommand(HowToPlayScreenController *this, ScreenViewCommand *a2)
{
  int v2; // lr@0
  ScreenViewCommand *v3; // r5@1
  HowToPlayScreenController *v4; // r4@1
  int v5; // r12@1
  int v6; // r0@1
  void (__fastcall *v7)(__int64 *, char *, signed int); // r3@1
  int v8; // r1@2
  int v9; // r2@4
  void (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int result; // r0@6
  void (__fastcall *v12)(__int64 *, char *, signed int); // r3@6
  int v13; // r1@7
  int v14; // r6@9
  int (__cdecl *v15)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@9
  __int64 v16; // [sp+0h] [bp-30h]@2
  void (__cdecl *v17)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-28h]@1
  int v18; // [sp+Ch] [bp-24h]@2
  __int64 v19; // [sp+10h] [bp-20h]@7
  int (__cdecl *v20)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+18h] [bp-18h]@6
  int v21; // [sp+1Ch] [bp-14h]@7

  v3 = a2;
  v4 = this;
  ScreenController::setViewCommand(this, a2);
  v6 = 0;
  v17 = 0;
  v7 = (void (__fastcall *)(__int64 *, char *, signed int))*((_DWORD *)v3 + 34);
  if ( v7 )
  {
    v7(&v16, (char *)v3 + 128, 2);
    v6 = *((_DWORD *)v3 + 35);
    v18 = *((_DWORD *)v3 + 35);
    v8 = *((_DWORD *)v3 + 34);
    v17 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v3 + 34);
    v2 = HIDWORD(v16);
    v5 = v16;
  }
  else
    v8 = 0;
  v9 = (int)v4 + 464;
  v16 = *((_QWORD *)v4 + 58);
  *(_DWORD *)v9 = v5;
  *(_DWORD *)(v9 + 4) = v2;
  v17 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 118);
  v10 = v17;
  *((_DWORD *)v4 + 118) = v8;
  v18 = *((_DWORD *)v4 + 119);
  *((_DWORD *)v4 + 119) = v6;
  if ( v10 )
    v10(&v16, &v16, 3, v10);
  result = 0;
  v20 = 0;
  v12 = (void (__fastcall *)(__int64 *, char *, signed int))*((_DWORD *)v3 + 6);
  if ( v12 )
    v12(&v19, (char *)v3 + 16, 2);
    result = *((_DWORD *)v3 + 7);
    v21 = *((_DWORD *)v3 + 7);
    v13 = *((_DWORD *)v3 + 6);
    v20 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v3 + 6);
    v12 = (void (__fastcall *)(__int64 *, char *, signed int))HIDWORD(v19);
    v5 = v19;
    v13 = 0;
  v14 = (int)v4 + 448;
  v19 = *((_QWORD *)v4 + 56);
  *(_DWORD *)v14 = v5;
  *(_DWORD *)(v14 + 4) = v12;
  v20 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 114);
  v15 = v20;
  *((_DWORD *)v4 + 114) = v13;
  v21 = *((_DWORD *)v4 + 115);
  *((_DWORD *)v4 + 115) = result;
  if ( v15 )
    result = v15(&v19, &v19, 3, v15, v16, HIDWORD(v16), v17, v18);
  return result;
}


int __fastcall HowToPlayScreenController::_isSplitscreenEnabled(HowToPlayScreenController *this)
{
  void *v1; // r0@2

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  return (*(int (**)(void))(**(_DWORD **)v1 + 196))();
}


int __fastcall HowToPlayScreenController::bind(int a1, int *a2, unsigned int a3, const char **a4, int a5)
{
  int *v5; // r7@1
  const char **v6; // r9@1
  unsigned int v7; // r10@1
  int v8; // r5@1
  signed int v9; // r4@1
  void *v10; // r0@1
  unsigned int v11; // r3@3
  void *v12; // r0@4
  int v13; // r0@5
  __int64 v14; // r2@5
  int v15; // r0@5
  void *v16; // r0@5
  int result; // r0@6
  unsigned int *v18; // r2@8
  signed int v19; // r1@10
  unsigned int *v20; // r2@16
  signed int v21; // r1@18
  unsigned int *v22; // r2@20
  signed int v23; // r1@22
  int v24; // [sp+4h] [bp-34h]@4
  int v25; // [sp+8h] [bp-30h]@4
  int v26; // [sp+10h] [bp-28h]@1

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a1;
  sub_1590164((void **)&v26, "#pre_process_");
  v9 = Util::startsWith(v5, &v26);
  v10 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9_2(v10);
  }
  if ( v9 == 1 )
    v11 = *(_DWORD *)(*v5 - 12);
    if ( v11 <= 0xC )
      sub_1590204("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", 13, v11);
    sub_15901F4((void **)&v24, v5, 0xDu, 0xFFFFFFFF);
    I18n::get(&v25, (int **)&v24);
    v12 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v24 - 4);
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
        j_j_j_j_j__ZdlPv_9_2(v12);
    v13 = MinecraftScreenModel::getTextToIconMapper(*(MinecraftScreenModel **)(v8 + 380));
    LODWORD(v14) = *(_QWORD *)(v8 + 480) >> 32;
    HIDWORD(v14) = *(_QWORD *)(v8 + 480);
    TextToIconMapper::preprocessText(v13, &v25, v14);
    v15 = MinecraftScreenModel::getEmoticonManager(*(MinecraftScreenModel **)(v8 + 380));
    EmoticonManager::emoticonifyTextInPlace(v15, (const void **)&v25);
    UIPropertyBag::set<std::string>(a5, *((_DWORD *)*v6 - 3), *v6, (const void **)&v25);
    v16 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v25 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9_2(v16);
    result = 1;
  else
    result = ScreenController::bind(v8, (int)v5, v7, (int)v6, a5);
  return result;
}


void __fastcall HowToPlayScreenController::_registerBindings(HowToPlayScreenController *this)
{
  HowToPlayScreenController *v1; // r4@1
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
  void *v38; // [sp+0h] [bp-1B8h]@45
  __int64 v39; // [sp+8h] [bp-1B0h]@45
  _DWORD *v40; // [sp+10h] [bp-1A8h]@45
  __int64 v41; // [sp+18h] [bp-1A0h]@45
  int v42; // [sp+20h] [bp-198h]@45
  void *v43; // [sp+24h] [bp-194h]@41
  __int64 v44; // [sp+2Ch] [bp-18Ch]@41
  _DWORD *v45; // [sp+34h] [bp-184h]@41
  __int64 v46; // [sp+3Ch] [bp-17Ch]@41
  int v47; // [sp+44h] [bp-174h]@41
  void *v48; // [sp+48h] [bp-170h]@37
  __int64 v49; // [sp+50h] [bp-168h]@37
  _DWORD *v50; // [sp+58h] [bp-160h]@37
  __int64 v51; // [sp+60h] [bp-158h]@37
  int v52; // [sp+68h] [bp-150h]@37
  void *v53; // [sp+6Ch] [bp-14Ch]@33
  __int64 v54; // [sp+74h] [bp-144h]@33
  _DWORD *v55; // [sp+7Ch] [bp-13Ch]@33
  __int64 v56; // [sp+84h] [bp-134h]@33
  int v57; // [sp+8Ch] [bp-12Ch]@33
  void *v58; // [sp+90h] [bp-128h]@29
  __int64 v59; // [sp+98h] [bp-120h]@29
  _DWORD *v60; // [sp+A0h] [bp-118h]@29
  __int64 v61; // [sp+A8h] [bp-110h]@29
  int v62; // [sp+B0h] [bp-108h]@29
  void *v63; // [sp+B4h] [bp-104h]@25
  __int64 v64; // [sp+BCh] [bp-FCh]@25
  _DWORD *v65; // [sp+C4h] [bp-F4h]@25
  __int64 v66; // [sp+CCh] [bp-ECh]@25
  int v67; // [sp+D4h] [bp-E4h]@25
  void *v68; // [sp+D8h] [bp-E0h]@21
  __int64 v69; // [sp+E0h] [bp-D8h]@21
  _DWORD *v70; // [sp+E8h] [bp-D0h]@21
  __int64 v71; // [sp+F0h] [bp-C8h]@21
  int v72; // [sp+F8h] [bp-C0h]@21
  void *v73; // [sp+FCh] [bp-BCh]@17
  __int64 v74; // [sp+104h] [bp-B4h]@17
  _DWORD *v75; // [sp+10Ch] [bp-ACh]@17
  __int64 v76; // [sp+114h] [bp-A4h]@17
  int v77; // [sp+11Ch] [bp-9Ch]@17
  void *v78; // [sp+120h] [bp-98h]@13
  __int64 v79; // [sp+128h] [bp-90h]@13
  _DWORD *v80; // [sp+130h] [bp-88h]@13
  __int64 v81; // [sp+138h] [bp-80h]@13
  int v82; // [sp+140h] [bp-78h]@13
  void *v83; // [sp+144h] [bp-74h]@9
  __int64 v84; // [sp+14Ch] [bp-6Ch]@9
  _DWORD *v85; // [sp+154h] [bp-64h]@9
  __int64 v86; // [sp+15Ch] [bp-5Ch]@9
  int v87; // [sp+164h] [bp-54h]@9
  void *v88; // [sp+168h] [bp-50h]@5
  __int64 v89; // [sp+170h] [bp-48h]@5
  _DWORD *v90; // [sp+178h] [bp-40h]@5
  __int64 v91; // [sp+180h] [bp-38h]@5
  int v92; // [sp+188h] [bp-30h]@5
  void *v93; // [sp+18Ch] [bp-2Ch]@1
  __int64 v94; // [sp+194h] [bp-24h]@1
  _DWORD *v95; // [sp+19Ch] [bp-1Ch]@1
  __int64 v96; // [sp+1A4h] [bp-14h]@1
  int v97; // [sp+1ACh] [bp-Ch]@1

  v1 = this;
  v97 = 1273014912;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11AA808;
  *v2 = v1;
  HIDWORD(v3) = sub_11AA7F8;
  v95 = v2;
  v96 = v3;
  v93 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v94 = v4;
  ScreenController::bindString((int)v1, &v97, (int)&v95, (int)&v93);
  if ( (_DWORD)v94 )
    ((void (*)(void))v94)();
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  StringHash::StringHash<char [23]>(&v92, (int)"#selector_area_focused");
  v5 = operator new(4u);
  LODWORD(v6) = sub_11AA85C;
  *v5 = v1;
  HIDWORD(v6) = sub_11AA83E;
  v90 = v5;
  v91 = v6;
  v88 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v89 = v7;
  ScreenController::bindBool((int)v1, &v92, (int)&v90, (int)&v88);
  if ( (_DWORD)v89 )
    ((void (*)(void))v89)();
  if ( (_DWORD)v91 )
    ((void (*)(void))v91)();
  v87 = -532179637;
  v8 = operator new(4u);
  LODWORD(v9) = sub_11AA8B0;
  *v8 = v1;
  HIDWORD(v9) = sub_11AA892;
  v85 = v8;
  v86 = v9;
  v83 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v84 = v10;
  ScreenController::bindBool((int)v1, &v87, (int)&v85, (int)&v83);
  if ( (_DWORD)v84 )
    ((void (*)(void))v84)();
  if ( (_DWORD)v86 )
    ((void (*)(void))v86)();
  v82 = -1462161691;
  v11 = operator new(4u);
  LODWORD(v12) = sub_11AA8F6;
  *v11 = v1;
  HIDWORD(v12) = sub_11AA8E6;
  v80 = v11;
  v81 = v12;
  v78 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v79 = v13;
  ScreenController::bindBool((int)v1, &v82, (int)&v80, (int)&v78);
  if ( (_DWORD)v79 )
    ((void (*)(void))v79)();
  if ( (_DWORD)v81 )
    ((void (*)(void))v81)();
  v77 = 1571258615;
  v14 = operator new(4u);
  LODWORD(v15) = sub_11AA940;
  *v14 = v1;
  HIDWORD(v15) = sub_11AA92C;
  v75 = v14;
  v76 = v15;
  v73 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v74 = v16;
  ScreenController::bindBool((int)v1, &v77, (int)&v75, (int)&v73);
  if ( (_DWORD)v74 )
    ((void (*)(void))v74)();
  if ( (_DWORD)v76 )
    ((void (*)(void))v76)();
  StringHash::StringHash<char [24]>(&v72, (int)"#gamepad_not_being_used");
  v17 = operator new(4u);
  LODWORD(v18) = sub_11AA98A;
  *v17 = v1;
  HIDWORD(v18) = sub_11AA976;
  v70 = v17;
  v71 = v18;
  v68 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v69 = v19;
  ScreenController::bindBool((int)v1, &v72, (int)&v70, (int)&v68);
  if ( (_DWORD)v69 )
    ((void (*)(void))v69)();
  if ( (_DWORD)v71 )
    ((void (*)(void))v71)();
  v67 = 1541012503;
  v20 = operator new(4u);
  LODWORD(v21) = sub_11AA9D2;
  *v20 = v1;
  HIDWORD(v21) = sub_11AA9C0;
  v65 = v20;
  v66 = v21;
  v63 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v64 = v22;
  ScreenController::bindBool((int)v1, &v67, (int)&v65, (int)&v63);
  if ( (_DWORD)v64 )
    ((void (*)(void))v64)();
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  v62 = 1045925777;
  v23 = operator new(4u);
  LODWORD(v24) = sub_11AAA1A;
  *v23 = v1;
  HIDWORD(v24) = sub_11AAA08;
  v60 = v23;
  v61 = v24;
  v58 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v59 = v25;
  ScreenController::bindBool((int)v1, &v62, (int)&v60, (int)&v58);
  if ( (_DWORD)v59 )
    ((void (*)(void))v59)();
  if ( (_DWORD)v61 )
    ((void (*)(void))v61)();
  v57 = -1386221320;
  v26 = operator new(4u);
  LODWORD(v27) = sub_11AAA8C;
  *v26 = v1;
  HIDWORD(v27) = sub_11AAA50;
  v55 = v26;
  v56 = v27;
  v53 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v54 = v28;
  ScreenController::bindBool((int)v1, &v57, (int)&v55, (int)&v53);
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  StringHash::StringHash<char [36]>(&v52, (int)"#controller_left_bumper_description");
  v29 = operator new(4u);
  LODWORD(v30) = sub_11AAADC;
  *v29 = v1;
  HIDWORD(v30) = sub_11AAAC4;
  v50 = v29;
  v51 = v30;
  v48 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v49 = v31;
  ScreenController::bindString((int)v1, &v52, (int)&v50, (int)&v48);
  if ( (_DWORD)v49 )
    ((void (*)(void))v49)();
  if ( (_DWORD)v51 )
    ((void (*)(void))v51)();
  StringHash::StringHash<char [37]>(&v47, (int)"#controller_right_bumper_description");
  v32 = operator new(4u);
  LODWORD(v33) = sub_11AAB2C;
  *v32 = v1;
  HIDWORD(v33) = sub_11AAB14;
  v45 = v32;
  v46 = v33;
  v43 = operator new(1u);
  LODWORD(v34) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v34) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v44 = v34;
  ScreenController::bindString((int)v1, &v47, (int)&v45, (int)&v43);
  if ( (_DWORD)v44 )
    ((void (*)(void))v44)();
  if ( (_DWORD)v46 )
    ((void (*)(void))v46)();
  StringHash::StringHash<char [24]>(&v42, (int)"#gamepad_helper_visible");
  v35 = operator new(4u);
  LODWORD(v36) = sub_11AAB76;
  *v35 = v1;
  HIDWORD(v36) = sub_11AAB62;
  v40 = v35;
  v41 = v36;
  v38 = operator new(1u);
  LODWORD(v37) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v37) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v39 = v37;
  ScreenController::bindBool((int)v1, &v42, (int)&v40, (int)&v38);
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
}


signed int __fastcall HowToPlayScreenController::_isSelectorAreaFocused(HowToPlayScreenController *this)
{
  HowToPlayScreenController *v1; // r1@1
  unsigned int v2; // r2@1
  signed int result; // r0@1

  v1 = this;
  v2 = *((_DWORD *)this + 120) - 3;
  result = 0;
  if ( v2 <= 1 && !*((_BYTE *)v1 + 445) )
    result = 1;
  return result;
}


char *__fastcall HowToPlayScreenController::_init(HowToPlayScreenController *this)
{
  HowToPlayScreenController *v1; // r4@1
  int v2; // r0@1
  int v3; // r5@1
  void *v4; // r0@3
  int v5; // r0@4
  int v6; // r0@6

  v1 = this;
  v2 = MinecraftScreenController::getInputMode(this);
  *((_DWORD *)v1 + 120) = v2;
  v3 = *((_DWORD *)v1 + 95);
  if ( (unsigned int)(v2 - 3) > 1 )
  {
    v5 = MinecraftScreenModel::getKeyboardRemappingLayout(*((MinecraftScreenModel **)v1 + 95));
  }
  else
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v4 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v4 = &ServiceLocator<AppPlatform>::mDefaultService;
    v6 = (*(int (**)(void))(**(_DWORD **)v4 + 460))();
    v5 = MinecraftScreenModel::getGamepadRemappingLayout(v3, v6);
  *((_DWORD *)v1 + 121) = v5;
  HowToPlayScreenController::_registerBindings(v1);
  HowToPlayScreenController::_registerControllerCallbacks(v1);
  return j_j_j__ZN25HowToPlayScreenController22_registerEventHandlersEv(v1);
}


void __fastcall HowToPlayScreenController::_registerBindings(HowToPlayScreenController *this)
{
  HowToPlayScreenController::_registerBindings(this);
}


void __fastcall HowToPlayScreenController::~HowToPlayScreenController(HowToPlayScreenController *this)
{
  HowToPlayScreenController::~HowToPlayScreenController(this);
}
