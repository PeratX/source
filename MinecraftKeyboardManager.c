

int __fastcall MinecraftKeyboardManager::MinecraftKeyboardManager(int result, int a2)
{
  *(_DWORD *)result = &off_26D9344;
  *(_BYTE *)(result + 4) = 0;
  *(_BYTE *)(result + 5) &= 0xF8u;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 44) = a2;
  return result;
}


int __fastcall MinecraftKeyboardManager::_getInvGuiScale(MinecraftKeyboardManager *this)
{
  GuiData *v1; // r0@1

  v1 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 11));
  return j_j_j__ZNK7GuiData14getInvGuiScaleEv(v1);
}


int __fastcall MinecraftKeyboardManager::_getScreenPosFromClient(int a1, int a2, int a3)
{
  GuiData *v4; // r0@1
  int result; // r0@1

  _R4 = a3;
  v4 = (GuiData *)ClientInstance::getGuiData(*(ClientInstance **)(a2 + 44));
  result = GuiData::getGuiScale(v4);
  __asm
  {
    VLDR            S0, [R4]
    VMOV            S4, R0
    VLDR            S2, [R4,#4]
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [R5]
    VSTR            S2, [R5,#4]
  }
  return result;
}


void __fastcall MinecraftKeyboardManager::~MinecraftKeyboardManager(MinecraftKeyboardManager *this)
{
  MinecraftKeyboardManager *v1; // r0@1

  v1 = MinecraftKeyboardManager::~MinecraftKeyboardManager(this);
  j_j_j__ZdlPv_4((void *)v1);
}


signed int __fastcall MinecraftKeyboardManager::tryClaimKeyboardOwnership(MinecraftKeyboardManager *this)
{
  MinecraftKeyboardManager *v1; // r4@1
  int v2; // r5@1
  signed int result; // r0@3
  signed int v4; // r1@5

  v1 = this;
  v2 = MinecraftKeyboardManager::mGlobalKeyboardOwnerId;
  if ( MinecraftKeyboardManager::mGlobalKeyboardOwnerId == -1
    || v2 == ClientInstance::getControllerId(*((ClientInstance **)this + 11)) )
  {
    MinecraftKeyboardManager::mGlobalKeyboardOwnerId = ClientInstance::getControllerId(*((ClientInstance **)v1 + 11));
    if ( *((_DWORD *)v1 + 9) )
    {
      v4 = ClientInstance::getControllerId(*((ClientInstance **)v1 + 11));
      if ( !*((_DWORD *)v1 + 9) )
        sub_119C8E4();
      (*((void (__fastcall **)(_DWORD, _DWORD))v1 + 10))((char *)v1 + 28, v4);
    }
    result = 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall MinecraftKeyboardManager::disableKeyboard(MinecraftKeyboardManager *this)
{
  MinecraftKeyboardManager *v1; // r11@1
  signed int result; // r0@1
  void *v3; // r0@3
  int v4; // r0@5
  __int64 v5; // kr00_8@5
  _DWORD *v6; // r6@6
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  int *v9; // r0@15

  v1 = this;
  result = *((_BYTE *)this + 5);
  if ( result & 1 )
  {
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v3 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v3 = &ServiceLocator<AppPlatform>::mDefaultService;
    (*(void (**)(void))(**(_DWORD **)v3 + 52))();
    (*(void (__fastcall **)(MinecraftKeyboardManager *))(*(_DWORD *)v1 + 44))(v1);
    *((_BYTE *)v1 + 5) = *((_BYTE *)v1 + 5) & 0xFA | 4;
    v4 = ClientInstance::getTopScreen(*((ClientInstance **)v1 + 11));
    (*(void (**)(void))(**(_DWORD **)v4 + 256))();
    unk_27E7CE4 = Keyboard::_inputs;
    v5 = Keyboard::_inputText;
    if ( dword_27E7CF0 != (_DWORD)Keyboard::_inputText )
    {
      v6 = (_DWORD *)Keyboard::_inputText;
      do
      {
        v9 = (int *)(*v6 - 12);
        if ( v9 != &dword_28898C0 )
        {
          v7 = (unsigned int *)(*v6 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v9);
        }
        v6 += 3;
      }
      while ( v6 != (_DWORD *)HIDWORD(v5) );
    }
    dword_27E7CF0 = v5;
    dword_27E7CFC = Keyboard::_inputCaretLocation;
    Keyboard::_index = -1;
    Keyboard::_textIndex = -1;
    Keyboard::_caretLocationIndex = -1;
    result = *((_BYTE *)v1 + 5);
  }
  if ( result & 2 )
    *((_BYTE *)v1 + 5) = result & 0xFD;
    result = -1;
    Keyboard::_gameControllerId = -1;
  return result;
}


unsigned int __fastcall MinecraftKeyboardManager::isKeyboardEnabled(MinecraftKeyboardManager *this)
{
  return (*((_BYTE *)this + 5) & 2u) >> 1;
}


signed int __fastcall MinecraftKeyboardManager::canActivateKeyboard(MinecraftKeyboardManager *this)
{
  signed int result; // r0@2
  MinecraftGame *v2; // r0@3

  if ( *((_BYTE *)this + 5) & 1 )
  {
    result = 0;
  }
  else
    v2 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)this + 11));
    result = MinecraftGame::canActivateKeyboard(v2);
  return result;
}


signed int __fastcall MinecraftKeyboardManager::keyboardIsOwned(MinecraftKeyboardManager *this)
{
  signed int result; // r0@1

  result = 0;
  if ( MinecraftKeyboardManager::mGlobalKeyboardOwnerId != -1 )
    result = 1;
  return result;
}


int __fastcall MinecraftKeyboardManager::delayedInputResume(MinecraftKeyboardManager *this)
{
  MinecraftKeyboardManager *v1; // r11@1
  int result; // r0@1
  __int64 v3; // kr00_8@2
  _DWORD *v4; // r6@3
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int *v7; // r0@12

  v1 = this;
  result = *((_BYTE *)this + 4);
  if ( result )
  {
    *((_BYTE *)v1 + 4) = 0;
    unk_27E7CE4 = Keyboard::_inputs;
    v3 = Keyboard::_inputText;
    if ( dword_27E7CF0 != (_DWORD)Keyboard::_inputText )
    {
      v4 = (_DWORD *)Keyboard::_inputText;
      do
      {
        v7 = (int *)(*v4 - 12);
        if ( v7 != &dword_28898C0 )
        {
          v5 = (unsigned int *)(*v4 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v7);
        }
        v4 += 3;
      }
      while ( v4 != (_DWORD *)HIDWORD(v3) );
    }
    dword_27E7CF0 = v3;
    dword_27E7CFC = Keyboard::_inputCaretLocation;
    Keyboard::_index = -1;
    Keyboard::_textIndex = -1;
    Keyboard::_caretLocationIndex = -1;
    result = *((_DWORD *)v1 + 5);
    if ( result )
      result = (*((int (__fastcall **)(_DWORD))v1 + 6))((char *)v1 + 12);
  }
  return result;
}


signed int __fastcall MinecraftKeyboardManager::tryEnableKeyboard(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r8@1
  int v10; // r9@1
  void *v12; // r0@6
  signed int result; // r0@7
  ClientInstance **v14; // r6@8
  _BYTE *v15; // r5@8
  int v16; // r5@10
  void (__fastcall *v17)(int, int, int, int); // r11@10
  GuiData *v18; // r0@10
  _DWORD *v24; // r0@10

  v7 = a1;
  v8 = a2;
  v9 = a4;
  v10 = a3;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 28))() == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 16))(v7);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 40))(v7) == 1 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7) )
    {
      _R10 = a7;
      if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
        v12 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      else
        v12 = &ServiceLocator<AppPlatform>::mDefaultService;
      v16 = *(_DWORD *)v12;
      v14 = (ClientInstance **)(v7 + 44);
      v17 = *(void (__fastcall **)(int, int, int, int))(**(_DWORD **)v12 + 48);
      v18 = (GuiData *)ClientInstance::getGuiData(*(ClientInstance **)(v7 + 44));
      _R0 = GuiData::getGuiScale(v18);
      __asm
      {
        VMOV            S4, R0
        VLDR            S0, [R10]
        VLDR            S2, [R10,#4]
        VMUL.F32        S0, S0, S4
        VMUL.F32        S2, S2, S4
        VSTR            S0, [SP,#0x38+var_2C]
        VSTR            S2, [SP,#0x38+var_28]
      }
      v17(v16, v8, v10, v9);
      v15 = (_BYTE *)(v7 + 5);
      *(_BYTE *)(v7 + 5) |= 1u;
      v24 = (_DWORD *)ClientInstance::getTopScreen(*(ClientInstance **)(v7 + 44));
      (*(void (__cdecl **)(_DWORD, signed int, _DWORD))(*(_DWORD *)*v24 + 256))(
        *v24,
        1,
        *(_DWORD *)(*(_DWORD *)*v24 + 256));
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 52))(v7);
    }
    else
    *v15 |= 2u;
    Keyboard::_gameControllerId = ClientInstance::getControllerId(*v14);
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall MinecraftKeyboardManager::getKeyboardHeight(MinecraftKeyboardManager *this)
{
  GuiData *v6; // r0@3
  void *v8; // r0@5
  GuiData *v10; // r0@8
  int result; // r0@9

  _R4 = this;
  __asm
  {
    VLDR            S0, [R4,#8]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    v6 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 11));
    _R0 = GuiData::getGuiScale(v6);
    __asm
    {
      VMOV            S0, R0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm { VLDR            S0, [R4,#8] }
    else
      if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
        v8 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      else
        v8 = &ServiceLocator<AppPlatform>::mDefaultService;
      _R0 = (*(int (**)(void))(**(_DWORD **)v8 + 68))();
      __asm { VMOV            S16, R0 }
      v10 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)_R4 + 11));
      _R0 = GuiData::getInvGuiScale(v10);
      __asm
      {
        VMOV            S0, R0
        VMUL.F32        S0, S0, S16
      }
  __asm { VMOV            R0, S0 }
  return result;
}


signed int __fastcall MinecraftKeyboardManager::releaseKeyboardOwnership(MinecraftKeyboardManager *this)
{
  MinecraftKeyboardManager *v1; // r4@1
  int v2; // r5@1
  signed int result; // r0@1

  v1 = this;
  v2 = MinecraftKeyboardManager::mGlobalKeyboardOwnerId;
  result = ClientInstance::getControllerId(*((ClientInstance **)this + 11));
  if ( v2 == result )
  {
    MinecraftKeyboardManager::mGlobalKeyboardOwnerId = -1;
    result = 1;
    *((_BYTE *)v1 + 4) = 1;
  }
  return result;
}


int __fastcall MinecraftKeyboardManager::setResumeInputCallback(int a1, int a2)
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
  v9 = v4 + 12;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 12);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 20);
  v10 = v13;
  *(_DWORD *)(v4 + 20) = v8;
  v14 = *(_DWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 24) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


int __fastcall MinecraftKeyboardManager::isKeyboardActive(MinecraftKeyboardManager *this)
{
  return *((_BYTE *)this + 5) & 1;
}


int __fastcall MinecraftKeyboardManager::isFullScreenKeyboard(MinecraftKeyboardManager *this)
{
  void *v1; // r0@2

  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  return (*(int (**)(void))(**(_DWORD **)v1 + 64))();
}


unsigned int __fastcall MinecraftKeyboardManager::getKeyboardClosedEvent(MinecraftKeyboardManager *this)
{
  return (*((_BYTE *)this + 5) & 4u) >> 2;
}


MinecraftKeyboardManager *__fastcall MinecraftKeyboardManager::~MinecraftKeyboardManager(MinecraftKeyboardManager *this)
{
  MinecraftKeyboardManager *v1; // r4@1
  void (*v2)(void); // r3@1
  void (*v3)(void); // r3@3

  v1 = this;
  *(_DWORD *)this = &off_26D9344;
  MinecraftKeyboardManager::disableKeyboard(this);
  v2 = (void (*)(void))*((_DWORD *)v1 + 9);
  if ( v2 )
    v2();
  v3 = (void (*)(void))*((_DWORD *)v1 + 5);
  if ( v3 )
    v3();
  return v1;
}


void __fastcall MinecraftKeyboardManager::~MinecraftKeyboardManager(MinecraftKeyboardManager *this)
{
  MinecraftKeyboardManager::~MinecraftKeyboardManager(this);
}


int __fastcall MinecraftKeyboardManager::setForcedHeight(MinecraftKeyboardManager *this, float _R1)
{
  GuiData *v6; // r0@1
  int result; // r0@1

  __asm { VMOV            S16, R1 }
  v6 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 11));
  result = GuiData::getInvGuiScale(v6);
  __asm
  {
    VMOV            S0, R0
    VMUL.F32        S0, S0, S16
    VSTR            S0, [R4,#8]
  }
  return result;
}


int __fastcall MinecraftKeyboardManager::clearKeyboardClosedEvent(int result)
{
  *(_BYTE *)(result + 5) &= 0xFBu;
  return result;
}


int __fastcall MinecraftKeyboardManager::setDisableInputToOtherClientsCallback(int a1, int a2)
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
  v9 = v4 + 28;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 28);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 36);
  v10 = v13;
  *(_DWORD *)(v4 + 36) = v8;
  v14 = *(_DWORD *)(v4 + 40);
  *(_DWORD *)(v4 + 40) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


int __fastcall MinecraftKeyboardManager::_getGuiScale(MinecraftKeyboardManager *this)
{
  GuiData *v1; // r0@1

  v1 = (GuiData *)ClientInstance::getGuiData(*((ClientInstance **)this + 11));
  return j_j_j__ZNK7GuiData11getGuiScaleEv(v1);
}
