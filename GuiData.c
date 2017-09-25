

int __fastcall GuiData::setTouchToolbarArea(GuiData *this, const RectangleArea *a2, RectangleArea *a3)
{
  GuiData *v4; // r9@1
  int v10; // r7@1
  ClientInstance *v11; // r0@1
  signed int v13; // r4@1
  signed int v14; // kr04_4@1
  ClientInputHandler *v15; // r0@1
  int v16; // r0@1
  int v17; // r2@1
  int v19; // r4@3
  ClientInputHandler *v21; // r0@3
  ClientInputHandler *v22; // r0@5
  int v23; // r8@5
  AppPlatform **v26; // r0@7
  signed int v27; // r1@10
  signed int v28; // r0@10
  Player *v29; // r0@16
  Player *v30; // r11@16
  int v31; // r0@17
  int v32; // r6@17
  int v33; // r7@17
  ClientInputHandler *v34; // r0@17
  int v35; // r4@17
  int v36; // r0@23
  int v43; // r6@24
  int v44; // r5@24
  int v45; // r0@25
  char *v46; // r1@25
  int v47; // r0@27
  int v48; // r1@27
  int v49; // r2@27
  int v50; // r3@27
  int result; // r0@27
  int v52; // [sp+0h] [bp-80h]@0
  float v53; // [sp+8h] [bp-78h]@25
  int v54; // [sp+Ch] [bp-74h]@25
  char v55; // [sp+10h] [bp-70h]@25
  char v56; // [sp+20h] [bp-60h]@24
  char v57; // [sp+30h] [bp-50h]@17
  int v58; // [sp+34h] [bp-4Ch]@17

  _R5 = a2;
  v4 = this;
  __asm { VLDR            S0, [R5,#0x1C] }
  _R10 = a3;
  v10 = *((_DWORD *)a2 + 22);
  __asm { VCVTR.S32.F32   S0, S0 }
  v11 = (ClientInstance *)*((_DWORD *)a2 + 26);
  __asm { VMOV            R1, S0 }
  v14 = _R1;
  v13 = _R1 + (_R1 >> 31);
  v15 = (ClientInputHandler *)ClientInstance::getInput(v11);
  v16 = ClientInputHandler::getCurrentInputMode(v15);
  v17 = v14 / -2;
  if ( v16 == 2 )
    v17 = 10 - (v13 >> 1);
  __asm { VMOV            R0, S0 }
  v19 = v17 + _R0 / 2 + 10 * (v10 - *((_DWORD *)_R5 + 22));
  _R7 = v19 + 20;
  v21 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)_R5 + 26));
  if ( ClientInputHandler::getCurrentInputMode(v21) == 2 )
    _R7 = v19 + 10;
  __asm
  {
    VMOV            S0, R7
    VCVT.F32.S32    S0, S0
    VLDR            S2, [R5,#0x24]
    VMUL.F32        S16, S0, S2
  }
  v22 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)_R5 + 26));
  v23 = ClientInputHandler::getCurrentInputMode(v22);
  *((_DWORD *)_R5 + 22) = 9;
  if ( v23 == 2 )
    __asm
    {
      VMOV.F32        S0, #-0.5
      VLDR            S4, [R10,#4]
      VLDR            S2, [R10]
      VMUL.F32        S0, S16, S0
      VADD.F32        S0, S4, S0
      VSUB.F32        S0, S0, S2
      VDIV.F32        S0, S0, S16
      VMOV            R0, S0
    }
    _R0 = floorf(_R0);
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
      VSTR            S0, [R5,#0x58]
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v26 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v26 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
    if ( AppPlatform::getUIScalingRules(*v26) )
      v27 = *((_DWORD *)_R5 + 22);
      v28 = *((_DWORD *)_R5 + 22);
      if ( v27 <= 5 )
        v28 = 5;
      if ( v27 > 9 )
        v28 = 9;
      v28 = 9;
    *((_DWORD *)_R5 + 22) = v28;
    v29 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)_R5 + 26));
    v30 = v29;
    if ( v29 )
      v31 = Player::getSupplies(v29);
      PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v57, v31);
      v32 = *((_DWORD *)_R5 + 22);
      v33 = v58;
      v34 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)_R5 + 26));
      v35 = 0;
      if ( ClientInputHandler::getCurrentInputMode(v34) == 2 )
        --v32;
      if ( v33 > 0 )
        v35 = v33;
      if ( v33 > v32 )
        v35 = v32;
      v36 = Player::getSupplies(v30);
      PlayerInventoryProxy::selectSlot(v36, v35, 0);
  __asm { VMOV.F32        S0, #0.5 }
  _R0 = *((_DWORD *)_R5 + 22);
    VMOV            S2, R0
    VCVT.F32.S32    S2, S2
    VMUL.F32        S0, S16, S0
    VMUL.F32        S18, S0, S2
  _R0 = RectangleArea::centerX(_R10);
    VLDR            S0, [R10,#0xC]
    VMOV            S20, R0
    VSUB.F32        S22, S0, S16
    VMOV            S0, R0
    VSUB.F32        S2, S20, S18
    VADD.F32        S0, S0, S18
    VMOV            R2, S22
    VMOV            R1, S2
    VMOV            R3, S0
    VSTR            S0, [SP,#0x80+var_80]
  RectangleArea::RectangleArea(COERCE_FLOAT(&v56), _R1, _R2, _R3, v52);
  v43 = (int)_R5 + 108;
  RectangleArea::operator=((int)_R5 + 108, (int)&v56);
  v44 = (int)_R5 + 124;
    __asm { VSTR            S16, [SP,#0x80+var_78] }
    v54 = 0;
    RectangleArea::grow((int)&v55, v43, (int)&v53);
    v45 = v44;
    v46 = &v55;
  else
    v46 = (char *)v43;
  v47 = RectangleArea::operator=(v45, (int)v46);
  v48 = *(_DWORD *)v47;
  v49 = *(_DWORD *)(v47 + 4);
  v50 = *(_DWORD *)(v47 + 8);
  result = *(_DWORD *)(v47 + 12);
  *(_DWORD *)v4 = v48;
  *((_DWORD *)v4 + 1) = v49;
  *((_DWORD *)v4 + 2) = v50;
  *((_DWORD *)v4 + 3) = result;
  return result;
}


signed int __fastcall GuiData::wasToolbarClicked(GuiData *this)
{
  int v10; // r1@4
  int v12; // r0@4
  int v17; // r3@5
  signed int result; // r0@5

  _R4 = this;
  if ( ClientInstance::getMouseGrabbed(*((ClientInstance **)this + 26)) == 1
    && ClientInstance::useTouchscreen(*((ClientInstance **)_R4 + 26)) != 1 )
  {
    goto LABEL_13;
  }
  _R0 = *((_WORD *)_R4 + 37);
  _R1 = *((_WORD *)_R4 + 38);
  __asm
    VMOV            S0, R0
    VCVT.F32.S32    S16, S0
    VMOV            S0, R1
    VCVT.F32.S32    S0, S0
    VMOV            R1, S16
    VMOV            R2, S0
  if ( RectangleArea::isInside((GuiData *)((char *)_R4 + 124), _R1, _R2) != 1 )
    VLDR            S0, [R4,#0x1C]
    VLDR            S2, [R4,#0x28]
  v10 = *((_DWORD *)_R4 + 22);
    VCVTR.S32.F32   S0, S0
    VMUL.F32        S2, S2, S16
    VCVTR.S32.F32   S0, S2
  v12 = 10 * v10 - _R2 / 2;
  __asm { VMOV            R2, S0 }
  _R2 = _R2 + v12;
  if ( _R2 < 0 )
LABEL_13:
    result = 0;
  else
    _R0 = 1717986919;
    __asm { SMMUL.W         R0, R2, R0 }
    v17 = ((signed int)_R0 >> 3) + (_R0 >> 31);
    if ( v17 <= v10 && (unsigned int)(_R2 + 39) >= 0x14 )
    {
      result = *((_BYTE *)_R4 + 79);
      if ( *((_BYTE *)_R4 + 79) )
        result = 1;
    }
  return result;
}


char *__fastcall GuiData::getLastChatMessage(GuiData *this)
{
  __int64 v1; // kr00_8@1
  char *result; // r0@4

  v1 = *(_QWORD *)((char *)this + 172);
  if ( (_DWORD)v1 == HIDWORD(v1)
    || *((_BYTE *)this + 241) && GuiMessage::isForceVisible((GuiMessage *)(HIDWORD(v1) - 24)) != 1 )
  {
    result = (char *)&Util::EMPTY_STRING;
  }
  else
    result = j_j_j__ZNK10GuiMessage9getStringEv((GuiMessage *)(HIDWORD(v1) - 24));
  return result;
}


_QWORD *__fastcall GuiData::clearTitle(GuiData *this)
{
  GuiData *v1; // r4@1

  v1 = this;
  TitleMessage::clearTitleMessages((GuiData *)((char *)this + 200));
  return j_j_j__ZN14ClientInstance23onGameEventNotificationEN2ui21GameEventNotificationE(*((_DWORD *)v1 + 26));
}


int __fastcall GuiData::clearMessages(GuiData *this)
{
  char *v1; // r4@1
  int result; // r0@1

  v1 = (char *)this + 172;
  std::vector<GuiMessage,std::allocator<GuiMessage>>::_M_erase_at_end((int)this + 172, *((_DWORD *)this + 43));
  result = 0;
  *(v1 - 94) = 0;
  return result;
}


signed int __fastcall GuiData::getNewJukeboxPopupNotice(int a1, int *a2, int *a3)
{
  int *v4; // r6@1
  signed int v9; // r4@2
  signed int result; // r0@5

  _R5 = a1;
  v4 = a3;
  if ( *(_BYTE *)(a1 + 169) )
  {
    __asm
    {
      VMOV.F32        S0, #3.0
      VLDR            S2, [R5,#0xA4]
    }
    v9 = 0;
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      EntityInteraction::setInteractText(a2, (int *)(a1 + 148));
      EntityInteraction::setInteractText(v4, (int *)(_R5 + 152));
      *(_BYTE *)(_R5 + 169) = 0;
      v9 = 1;
    result = v9;
  }
  else
    result = 0;
  return result;
}


char *__fastcall GuiData::getTitleMessage(GuiData *this)
{
  return (char *)this + 200;
}


_QWORD *__fastcall GuiData::_addMessage(GuiData *this, const GuiMessage *a2)
{
  GuiData *v2; // r4@1
  int *v3; // r5@1
  __int64 v4; // r0@1
  int *v5; // r6@2
  int v6; // r0@2
  int v7; // r1@4
  int *v8; // r0@7
  int *v9; // r0@7
  const void **v10; // r0@7
  const void **v11; // r0@7
  char *v12; // r0@7
  void *v13; // r0@8
  unsigned int *v15; // r2@10
  signed int v16; // r1@12
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  int v19; // [sp+0h] [bp-30h]@7
  char *v20; // [sp+4h] [bp-2Ch]@7

  v2 = this;
  v3 = (int *)a2;
  v4 = *((_QWORD *)this + 22);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v5 = (int *)((char *)v2 + 172);
    std::vector<GuiMessage,std::allocator<GuiMessage>>::_M_emplace_back_aux<GuiMessage const&>(
      (unsigned __int64 *)((char *)v2 + 172),
      v3);
    v6 = *((_DWORD *)v2 + 44);
  }
  else
    GuiMessage::GuiMessage((int *)v4, v3);
    v6 = *((_DWORD *)v2 + 44) + 24;
    *((_DWORD *)v2 + 44) = v6;
  v7 = *v5;
  if ( (unsigned int)(-1431655765 * ((v6 - *v5) >> 3)) >= 0x65 )
    do
    {
      std::vector<GuiMessage,std::allocator<GuiMessage>>::_M_erase((int)v5, v7);
      v7 = *v5;
    }
    while ( (unsigned int)(-1431655765 * ((*((_DWORD *)v2 + 44) - *v5) >> 3)) > 0x64 );
  if ( GuiMessage::getTextToSpeech((GuiMessage *)v3) == 1 )
    v8 = (int *)GuiMessage::getUser((GuiMessage *)v3);
    v9 = sub_DA73B4(&v19, v8);
    sub_DA7714((const void **)v9, 1u, 32);
    v10 = (const void **)GuiMessage::getMessage((GuiMessage *)v3);
    v11 = sub_DA7564((const void **)&v19, v10);
    v20 = (char *)*v11;
    *v11 = &unk_28898CC;
    TTSManager::enqueueTTSEvent(*((_DWORD *)v2 + 191), (int *)&v20);
    v12 = v20 - 12;
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v20 - 4);
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
    v13 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v19 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j_j__ZdlPv_9(v13);
  return ClientInstance::onGameEventNotification(*((_DWORD *)v2 + 26));
}


int __fastcall GuiData::cubeSmoothStep(GuiData *this, float a2, float a3, float a4)
{
  int result; // r0@1

  __asm
  {
    VMOV.F32        S0, #-2.0
    VMOV            S2, R0
    VMOV.F32        S4, #3.0
    VMUL.F32        S0, S2, S0
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  return result;
}


int __fastcall GuiData::getCurrentDropSlot(int result, int a2)
{
  *(_QWORD *)result = *(_QWORD *)(a2 + 248);
  return result;
}


_QWORD *__fastcall GuiData::displayDevConsoleMessage(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 768);
  DevConsoleLogger::logMessage();
  return j_j_j__ZN7GuiData20addDevConsoleMessageERKSs(v2, v3);
}


void __fastcall GuiData::setTextToSpeechEnabled(GuiData *this, int a2)
{
  GuiData *v2; // r4@1
  const char *v3; // r3@1
  void *v4; // r0@3
  void *v5; // r0@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  int v10; // [sp+8h] [bp-28h]@3
  int v11; // [sp+Ch] [bp-24h]@3

  v2 = this;
  v3 = "accessibility.enableTTS";
  if ( !a2 )
    v3 = "accessibility.disableTTS";
  sub_DA7364((void **)&v10, v3);
  I18n::get(&v11, (int **)&v10);
  GuiData::displaySystemMessage((int)v2, &v11);
  v4 = (void *)(v11 - 12);
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
      j_j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
}


signed int __fastcall GuiData::itemCountItoa(GuiData *this, char *_R1, int a3)
{
  signed int result; // r0@2
  int v10; // r2@6

  if ( (signed int)_R1 >= 0 )
  {
    if ( (signed int)_R1 > 9 )
    {
      if ( (signed int)_R1 > 99 )
      {
        *(_DWORD *)this = 2832697;
        result = 3;
      }
      else
        _R2 = 1717986919;
        __asm { SMMUL.W         R2, R1, R2 }
        v10 = ((signed int)_R2 >> 2) + (_R2 >> 31);
        *(_BYTE *)this = v10 + 48;
        *((_BYTE *)this + 1) = (_BYTE)_R1 - 10 * v10 + 48;
        *((_BYTE *)this + 2) = 0;
        result = 2;
    }
    else
      *(_BYTE *)this = (_BYTE)_R1 + 48;
      *((_BYTE *)this + 1) = 0;
      result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall GuiData::setGuiScale(int result, float _R1)
{
  __asm { VMOV.F32        S0, #1.0 }
  *(float *)(result + 36) = _R1;
  __asm
  {
    VMOV            S2, R1
    VDIV.F32        S0, S0, S2
    VSTR            S0, [R0,#0x28]
  }
  return result;
}


char *__fastcall GuiData::getScreenSizeData(GuiData *this)
{
  return (char *)this + 12;
}


int __fastcall GuiData::floorAlignToScreenPixel(GuiData *this, float _R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R0,#0x24]
    VMOV            S4, R1
    VLDR            S2, [R0,#0x28]
    VMUL.F32        S0, S0, S4
    VCVTR.S32.F32   S0, S0
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}


_DWORD *__fastcall GuiData::postError(GuiData *this, int a2)
{
  GuiData *v2; // r8@1
  char *v3; // r4@1
  _DWORD *result; // r0@1
  int v5; // r6@1
  char *v6; // r3@2
  char *v7; // r2@2
  char *v8; // r1@3
  char *v9; // r7@14
  _DWORD **v10; // r0@15
  int v11; // r1@15
  int v12; // r0@18
  int v13; // r5@24
  _DWORD *v14; // r0@28
  char *v15; // r0@29
  void **v16; // r0@29
  void *v17; // r0@29
  void *v18; // r0@30
  void *v19; // r0@31
  void **v20; // r0@32
  void *v21; // r0@32
  unsigned int *v22; // r2@35
  signed int v23; // r1@37
  unsigned int *v24; // r2@39
  signed int v25; // r1@41
  unsigned int *v26; // r2@43
  signed int v27; // r1@45
  unsigned int *v28; // r2@47
  signed int v29; // r1@49
  int v30; // [sp+10h] [bp-E8h]@29
  int v31; // [sp+14h] [bp-E4h]@29
  int v32; // [sp+1Ch] [bp-DCh]@29
  void **v33; // [sp+20h] [bp-D8h]@29
  int v34; // [sp+24h] [bp-D4h]@33
  void **v35; // [sp+28h] [bp-D0h]@29
  void **v36; // [sp+2Ch] [bp-CCh]@29
  int v37; // [sp+48h] [bp-B0h]@33
  int v38; // [sp+50h] [bp-A8h]@32
  int v39; // [sp+54h] [bp-A4h]@33

  v2 = this;
  v3 = (char *)this + 52;
  result = (_DWORD *)*((_DWORD *)this + 14);
  v5 = a2;
  if ( result )
  {
    v6 = (char *)result;
    v7 = v3;
    do
    {
      v8 = v6;
      while ( *((_DWORD *)v8 + 4) < v5 )
      {
        v8 = (char *)*((_DWORD *)v8 + 3);
        if ( !v8 )
        {
          v8 = v7;
          goto LABEL_10;
        }
      }
      v6 = (char *)*((_DWORD *)v8 + 2);
      v7 = v8;
    }
    while ( v6 );
  }
  else
    v8 = v3;
LABEL_10:
  if ( v8 == v3 )
    goto LABEL_69;
  if ( *((_DWORD *)v8 + 4) > v5 )
LABEL_69:
    v9 = v3;
    if ( !result )
      goto LABEL_70;
      v9 = (char *)result;
      v10 = (_DWORD **)(result + 3);
      v11 = *((_DWORD *)v9 + 4);
      if ( v11 > v5 )
        v10 = (_DWORD **)(v9 + 8);
      result = *v10;
    while ( result );
    v12 = (int)v9;
    if ( v11 > v5 )
LABEL_70:
      if ( v9 == *((char **)v2 + 15) )
        goto LABEL_22;
      v12 = sub_DA7F9C((int)v9);
    if ( *(_DWORD *)(v12 + 16) >= v5 )
LABEL_29:
      sub_DA7794((int)&v33, 24);
      sub_DA78D4((char *)&v35, (int)"Something went wrong! (errcode ", 31);
      v15 = (char *)sub_DA78E4((int)&v35, v5);
      sub_DA78D4(v15, (int)")\n", 2);
      sub_DA7364((void **)&v32, "error");
      sub_DA77A4(&v31, (int)&v36);
      v16 = sub_DA7364((void **)&v30, (const char *)&unk_257BC67);
      GuiData::addMessage((int)v2, &v32, &v31, 1092616192, 0, 0, (const void **)v16);
      v17 = (void *)(v30 - 12);
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v30 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        else
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j_j__ZdlPv_9(v17);
      v18 = (void *)(v31 - 12);
      if ( (int *)(v31 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)(v31 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j_j__ZdlPv_9(v18);
      v19 = (void *)(v32 - 12);
      if ( (int *)(v32 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v32 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j_j__ZdlPv_9(v19);
      v20 = off_26D3F84;
      v33 = off_26D3F60;
      *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v33) = off_26D3F80[0];
      v35 = v20;
      v36 = &off_27734E8;
      v21 = (void *)(v38 - 12);
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v38 - 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j_j__ZdlPv_9(v21);
      v36 = &off_26D40A8;
      sub_DA76D4((unsigned int **)&v37);
      v33 = (void **)off_26D3F68;
      *(void ***)((char *)&v33 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
      v34 = 0;
      return sub_DA76E4(&v39);
LABEL_22:
    if ( v9 )
      if ( v3 == v9 )
        v13 = 1;
      else
        v13 = 0;
        if ( *((_DWORD *)v9 + 4) > v5 )
          v13 = 1;
      v14 = operator new(0x14u);
      v14[4] = v5;
      sub_DA7FAC(v13, (int)v14, (int)v9, (int)v3);
      ++*((_DWORD *)v2 + 17);
    goto LABEL_29;
  return result;
}


signed int __fastcall GuiData::displayClientMessage(int a1, int *a2)
{
  int *v2; // r5@1
  int v3; // r4@1
  void **v4; // r0@1
  void *v5; // r0@1
  void *v6; // r0@2
  signed int result; // r0@3
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int v12; // [sp+14h] [bp-2Ch]@1
  int v13; // [sp+1Ch] [bp-24h]@1

  v2 = a2;
  v3 = a1;
  sub_DA7364((void **)&v13, (const char *)&unk_257BC67);
  v4 = sub_DA7364((void **)&v12, (const char *)&unk_257BC67);
  GuiData::addMessage(v3, &v13, v2, 1092616192, 0, 0, (const void **)v4);
  v5 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v12 - 4);
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
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  result = *(_BYTE *)(v3 + 241);
  if ( *(_BYTE *)(v3 + 241) )
    result = 1065353216;
    *(_DWORD *)(v3 + 264) = 1065353216;
  return result;
}


int __fastcall GuiData::showTipMessage(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  int v4; // r0@1
  int result; // r0@1

  v2 = a1;
  v3 = (int *)(a1 + 272);
  EntityInteraction::setInteractText((int *)(a1 + 272), a2);
  v4 = ClientInstance::getFont(*(ClientInstance **)(v2 + 104));
  result = Font::getLineLength(v4, v3, 1065353216, 0);
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VSTR            S0, [R4,#0x114]
  }
  return result;
}


void __fastcall GuiData::displayAnnouncementMessage(int a1, int a2, int *a3, const void **a4)
{
  const void **v4; // r6@1
  int *v5; // r4@1
  int v6; // r5@1
  void *v7; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+14h] [bp-1Ch]@1

  v4 = a4;
  v5 = a3;
  v6 = a1;
  sub_DA7364((void **)&v10, (const char *)&unk_257BC67);
  GuiData::addMessage(v6, &v10, v5, 1092616192, 0, 1, v4);
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


void __fastcall GuiData::~GuiData(GuiData *this)
{
  GuiData::~GuiData(this);
}


signed int __fastcall GuiData::getGuiScaleIndexForSmallScreen(int _R0)
{
  signed int result; // r0@4

  __asm
  {
    VLDR            S0, =0.0047619
    VLDR            S4, [R0,#4]
    VLDR            S2, [R0]
    VLDR            S6, =0.003125
    VMUL.F32        S0, S4, S0
    VMUL.F32        S2, S2, S6
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV            R0, S0
    VMOV            R1, S2
  }
  if ( _R0 < _R1 )
    _R1 = _R0;
  if ( _R1 >= 2 )
    if ( _R1 >= 3 )
    {
      if ( _R1 >= 4 )
      {
        if ( _R1 >= 5 )
        {
          if ( _R1 >= 6 )
          {
            if ( _R1 >= 7 )
            {
              result = 7;
              if ( _R1 < 8 )
                result = 6;
            }
            else
              result = 5;
          }
          else
            result = 4;
        }
        else
          result = 3;
      }
      else
        result = 2;
    }
    else
      result = 1;
  else
    result = 0;
  return result;
}


int __fastcall GuiData::setDevConsoleMaxMessages(int result, int a2)
{
  *(_DWORD *)(result + 196) = a2;
  return result;
}


int __fastcall GuiData::ceilToGuiScale(int a1, int _R1, int _R2)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R2,#4]
    VLDR            S2, [R1,#0x24]
    VLDR            S16, [R2]
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV            R5, S0
    VMOV            R6, S2
    VCVTR.S32.F32   S0, S16
    VMOV            R4, S0
  }
  result = _R6 + _R4;
  if ( _R4 % _R6 )
    _R4 = result - _R4 % _R6;
    VMOV            S0, R4
    VCVT.F32.S32    S0, S0
  if ( !_ZF )
    _R5 = _R5 + _R6 - _R5 % _R6;
    VMOV            S2, R5
    VCVT.F32.S32    S2, S2
    VSTR            S0, [R8]
    VSTR            S2, [R8,#4]
  return result;
}


_QWORD *__fastcall GuiData::addDevConsoleMessage(int a1, int *a2)
{
  int v2; // r4@1
  __int64 v3; // kr00_8@1
  int v4; // r1@2
  int v5; // r0@4
  int v6; // r2@5
  signed int v7; // r3@6
  int v8; // r6@7
  int v9; // r5@8
  int v10; // r1@10
  void *v11; // r0@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 188);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)(a1 + 184),
      a2);
    v4 = *(_DWORD *)(v2 + 188);
  }
  else
    sub_DA73B4((int *)v3, a2);
    v4 = *(_DWORD *)(v2 + 188) + 4;
    *(_DWORD *)(v2 + 188) = v4;
  v5 = *(_DWORD *)(v2 + 184);
  if ( (unsigned int)((v4 - v5) >> 2) > *(_DWORD *)(v2 + 196) )
    v6 = v5 + 4;
    if ( v5 + 4 != v4 )
    {
      v7 = v4 - v6;
      v6 = v4;
      if ( v7 >= 1 )
      {
        v8 = (v7 >> 2) + 1;
        do
        {
          v9 = v5 + 4;
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)v5,
            (int *)(v5 + 4));
          --v8;
          v5 = v9;
        }
        while ( v8 > 1 );
        v6 = *(_DWORD *)(v2 + 188);
      }
    }
    *(_DWORD *)(v2 + 188) = v6 - 4;
    v10 = *(_DWORD *)(v6 - 4);
    v11 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v10 - 4);
      if ( &pthread_create )
        __dmb();
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      else
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j_j__ZdlPv_9(v11);
  return ClientInstance::onGameEventNotification(*(_DWORD *)(v2 + 104));
}


int __fastcall GuiData::ceilAlignToScreenPixel(GuiData *this, float _R1)
{
  int result; // r0@1

  _R4 = this;
  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R4,#0x24]
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  _R0 = mce::Math::ceil(_R0, _R1);
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VLDR            S2, [R4,#0x28]
    VMUL.F32        S0, S0, S2
  return result;
}


_QWORD *__fastcall GuiData::setServerSettings(int a1, int a2, int *a3)
{
  int v3; // r4@1

  v3 = a1;
  *(_DWORD *)(a1 + 224) = a2;
  EntityInteraction::setInteractText((int *)(a1 + 228), a3);
  return j_j_j__ZN14ClientInstance23onGameEventNotificationEN2ui21GameEventNotificationE(*(_DWORD *)(v3 + 104));
}


signed int __fastcall GuiData::displayLocalizableMessage(int a1, int *a2, unsigned __int64 *a3, char a4)
{
  int *v4; // r7@1
  char v5; // r5@1
  unsigned __int64 *v6; // r6@1
  int v7; // r4@1
  void **v8; // r0@1
  void *v9; // r0@1
  void *v10; // r0@2
  void *v11; // r0@3
  signed int result; // r0@4
  unsigned int *v13; // r2@7
  signed int v14; // r1@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  int v19; // [sp+10h] [bp-28h]@1
  int v20; // [sp+14h] [bp-24h]@1
  int v21; // [sp+1Ch] [bp-1Ch]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_DA7364((void **)&v21, (const char *)&unk_257BC67);
  I18n::get(&v20, v4, v6);
  v8 = sub_DA7364((void **)&v19, (const char *)&unk_257BC67);
  GuiData::addMessage(v7, &v21, &v20, 1092616192, 0, v5, (const void **)v8);
  v9 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v19 - 4);
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
  v10 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v20 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v21 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  result = *(_BYTE *)(v7 + 241);
  if ( *(_BYTE *)(v7 + 241) )
    result = 1065353216;
    *(_DWORD *)(v7 + 264) = 1065353216;
  return result;
}


signed int __fastcall GuiData::_getGuiScaleIndex(GuiData *this, float a2)
{
  signed int result; // r0@1

  __asm
  {
    VMOV.F32        S2, #1.0
    VMOV            S0, R0
  }
  result = 0;
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    __asm
    {
      VMOVGE.F32      S2, #2.0
      VCMPEGE.F32     S0, S2
      VMRSGE          APSR_nzcv, FPSCR
      VMOV.F32        S2, #3.0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      result = 1;
    else
      __asm
      {
        VMOV.F32        S2, #4.0
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        result = 2;
      else
        __asm
        {
          VMOV.F32        S2, #5.0
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          result = 3;
        else
          __asm
          {
            VMOV.F32        S2, #6.0
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _NF ^ _VF )
            result = 4;
          else
            __asm
            {
              VMOV.F32        S2, #7.0
              VCMPE.F32       S0, S2
              VMRS            APSR_nzcv, FPSCR
            }
            if ( _NF ^ _VF )
              result = 5;
            else
              __asm
              {
                VMOV.F32        S2, #8.0
                VCMPE.F32       S0, S2
                VMRS            APSR_nzcv, FPSCR
              }
              if ( _NF ^ _VF )
                result = 6;
              else
                result = 7;
  return result;
}


mce::TexturePtr *__fastcall GuiData::getAtlasTex(GuiData *this)
{
  GuiData *v1; // r5@1
  mce::TexturePtr *v2; // r4@1
  mce::TextureGroup *v3; // r5@2
  char *v4; // r0@2
  char *v5; // r0@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  char *v11; // [sp+8h] [bp-38h]@2
  char *v12; // [sp+Ch] [bp-34h]@2
  int v13; // [sp+10h] [bp-30h]@2
  char v14; // [sp+14h] [bp-2Ch]@2

  v1 = this;
  v2 = (GuiData *)((char *)this + 716);
  if ( !mce::TexturePtr::operator bool((int)this + 716) )
  {
    v3 = (mce::TextureGroup *)ClientInstance::getTextures(*((ClientInstance **)v1 + 26));
    sub_DA7364((void **)&v11, "atlas.terrain");
    v12 = v11;
    v11 = (char *)&unk_28898CC;
    v13 = 0;
    mce::TextureGroup::getTexture((mce::TexturePtr *)&v14, v3, (int)&v12, 0);
    mce::TexturePtr::operator=(v2, (mce::TexturePtr *)&v14);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v14);
    v4 = v12 - 12;
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
        j_j_j_j_j__ZdlPv_9(v4);
    }
    v5 = v11 - 12;
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v11 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9(v5);
  }
  return v2;
}


signed int __fastcall GuiData::getSlotIdAt(GuiData *this, int _R1, int _R2)
{
  int v10; // r1@3
  signed int v12; // kr00_4@3
  signed int result; // r0@3
  int v18; // r2@4
  int v19; // [sp+4h] [bp-Ch]@0

  __asm { VMOV            S0, R1 }
  _R4 = this;
  __asm
  {
    VCVT.F32.S32    S16, S0
    VMOV            S0, R2
    VCVT.F32.S32    S0, S0
    VMOV            R1, S16
    VMOV            R2, S0
  }
  if ( RectangleArea::isInside((GuiData *)((char *)this + 124), _R1, _R2) != 1 )
    JUMPOUT(__CS__, v19);
    VLDR            S0, [R4,#0x1C]
    VLDR            S2, [R4,#0x28]
  v10 = *((_DWORD *)_R4 + 22);
    VCVTR.S32.F32   S0, S0
    VMUL.F32        S2, S2, S16
    VCVTR.S32.F32   S0, S2
  v12 = _R2;
  __asm { VMOV            R2, S0 }
  _R2 = _R2 + 10 * v10 - v12 / 2;
  result = -1;
  if ( _R2 >= 0 )
    _R3 = 1717986919;
    __asm { SMMUL.W         R2, R2, R3 }
    v18 = ((signed int)_R2 >> 3) + (_R2 >> 31);
    if ( v18 <= v10 )
      result = v18;
  return result;
}


int __fastcall GuiData::forceMuteChat(int result)
{
  *(_WORD *)(result + 241) = 257;
  return result;
}


int __fastcall GuiData::GuiData(int a1, ClientInstance *a2)
{
  int v2; // r4@1
  ClientInstance *v3; // r9@1
  int v4; // r0@1
  int v5; // r5@1
  void *v6; // r0@1
  void *v7; // r0@2
  void *v8; // r0@3
  const UIProfanityContext *v9; // r11@4
  TTSManager *v10; // r9@4
  unsigned int *v12; // r2@5
  signed int v13; // r1@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  ClientInstance *v18; // [sp+24h] [bp-44h]@1
  int v19; // [sp+2Ch] [bp-3Ch]@3
  int v20; // [sp+34h] [bp-34h]@2
  int v21; // [sp+3Ch] [bp-2Ch]@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26D7420;
  AppPlatformListener::AppPlatformListener((_QWORD *)(a1 + 4));
  *(_DWORD *)v2 = &off_26D73CC;
  *(_DWORD *)(v2 + 4) = &off_26D73E4;
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 28) = 0;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 36) = 1077936128;
  *(_DWORD *)(v2 + 40) = 1051372203;
  *(_BYTE *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 52) = 0;
  v4 = v2 + 52;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 8) = v4;
  *(_DWORD *)(v4 + 12) = v4;
  MenuPointer::MenuPointer((MenuPointer *)(v2 + 72));
  *(_BYTE *)(v2 + 84) = 0;
  *(_WORD *)(v2 + 78) = 0;
  *(_DWORD *)(v2 + 74) = 0;
  *(_DWORD *)(v2 + 88) = 9;
  *(_DWORD *)(v2 + 104) = v3;
  RectangleArea::RectangleArea((RectangleArea *)(v2 + 108));
  RectangleArea::RectangleArea((RectangleArea *)(v2 + 124));
  *(_DWORD *)(v2 + 140) = &unk_28898CC;
  *(_DWORD *)(v2 + 144) = &unk_28898CC;
  *(_DWORD *)(v2 + 148) = &unk_28898CC;
  *(_DWORD *)(v2 + 152) = &unk_28898CC;
  *(_DWORD *)(v2 + 156) = 0;
  *(_DWORD *)(v2 + 160) = 0x40000000;
  *(_DWORD *)(v2 + 164) = 1077936128;
  *(_WORD *)(v2 + 168) = 0;
  *(_DWORD *)(v2 + 172) = 0;
  v5 = v2 + 172;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 12) = 0;
  *(_DWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 20) = 0;
  *(_DWORD *)(v5 + 24) = 100;
  TitleMessage::TitleMessage((TitleMessage *)(v2 + 200));
  *(_DWORD *)(v2 + 228) = &unk_28898CC;
  *(_DWORD *)(v2 + 232) = &unk_28898CC;
  *(_DWORD *)(v2 + 236) = 0;
  *(_DWORD *)(v2 + 240) = 0;
  *(_BYTE *)(v2 + 248) = -1;
  *(_DWORD *)(v2 + 252) = -1;
  *(_BYTE *)(v2 + 256) = -1;
  *(_DWORD *)(v2 + 260) = -1;
  *(_DWORD *)(v2 + 264) = 0;
  *(_BYTE *)(v2 + 268) = 0;
  *(_DWORD *)(v2 + 272) = &unk_28898CC;
  mce::Mesh::Mesh((mce::Mesh *)(v2 + 280));
  mce::Mesh::Mesh((mce::Mesh *)(v2 + 380));
  v18 = v3;
  mce::Mesh::Mesh((mce::Mesh *)(v2 + 480));
  mce::Mesh::Mesh((mce::Mesh *)(v2 + 580));
  sub_DA7364((void **)&v21, "ui_invert_overlay");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v2 + 680),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v21);
  v6 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v21 - 4);
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
  sub_DA7364((void **)&v20, "ui_crosshair");
    (mce::MaterialPtr *)(v2 + 692),
    &v20);
  v7 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v20 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  sub_DA7364((void **)&v19, "ui_textured");
    (mce::MaterialPtr *)(v2 + 704),
    &v19);
  v8 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v19 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v2 + 716));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v2 + 740));
  v9 = (const UIProfanityContext *)ClientInstance::getUIProfanityContext(v3);
  v10 = (TTSManager *)operator new(0x18u);
  TTSManager::TTSManager(v10, v9);
  *(_DWORD *)(v2 + 764) = v10;
  *(_DWORD *)(v2 + 768) = ClientInstance::getDevConsoleLogger(v18);
  sub_DA7F0C((_QWORD *)(v2 + 776));
  *(_DWORD *)(v2 + 788) = 0;
  *(_DWORD *)(v2 + 792) = 0;
  *(_DWORD *)(v2 + 796) = 0;
  *(_DWORD *)(v2 + 800) = 0;
  *(_DWORD *)(v2 + 804) = 0;
  *(_DWORD *)(v2 + 796) = v2 + 788;
  *(_DWORD *)(v2 + 800) = v2 + 788;
  return v2;
}


signed int __fastcall GuiData::_touchEnabledOrHolographic(GuiData *this)
{
  ClientInputHandler *v1; // r0@1
  int v2; // r0@1
  signed int v3; // r1@1

  v1 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)this + 26));
  v2 = ClientInputHandler::getCurrentInputMode(v1);
  v3 = 0;
  if ( v2 == 2 )
    v3 = 1;
  return v3;
}


void __fastcall GuiData::addMessage(int a1, int *a2, int *a3, int a4, int a5, char a6, const void **a7)
{
  int *v7; // r5@1
  int v8; // r9@1
  int *v9; // r7@1
  GuiData *v10; // r4@1
  signed int v11; // r6@1
  char *v12; // r0@4
  char *v13; // r4@4
  __int64 v14; // r0@4
  void *v15; // r0@7
  void *v16; // r0@8
  void *v17; // r0@9
  unsigned int *v18; // r2@11
  signed int v19; // r1@13
  unsigned int *v20; // r2@15
  signed int v21; // r1@17
  unsigned int *v22; // r2@19
  signed int v23; // r1@21
  int v24; // [sp+8h] [bp-38h]@2
  int v25; // [sp+Ch] [bp-34h]@8
  int v26; // [sp+10h] [bp-30h]@7

  v7 = a2;
  v8 = a4;
  v9 = a3;
  v10 = (GuiData *)a1;
  v11 = GuiData::_mayChat(a1, a7);
  if ( v11 != 2 )
  {
    GuiMessage::GuiMessage(&v24, v7, v9, v8, a5, a6);
    if ( v11 )
    {
      GuiData::_addMessage(v10, (const GuiMessage *)&v24);
    }
    else
      v12 = std::map<std::string,std::vector<GuiMessage,std::allocator<GuiMessage>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<GuiMessage,std::allocator<GuiMessage>>>>>::operator[](
              (int)v10 + 784,
              a7);
      v13 = v12;
      v14 = *(_QWORD *)(v12 + 4);
      if ( (_DWORD)v14 == HIDWORD(v14) )
      {
        std::vector<GuiMessage,std::allocator<GuiMessage>>::_M_emplace_back_aux<GuiMessage&>(
          (unsigned __int64 *)v13,
          &v24);
      }
      else
        GuiMessage::GuiMessage((int *)v14, &v24);
        *((_DWORD *)v13 + 1) += 24;
    v15 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j_j__ZdlPv_9(v15);
    v16 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v25 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j_j__ZdlPv_9(v16);
    v17 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v24 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9(v17);
  }
}


char *__fastcall GuiData::getInvFillMat(GuiData *this)
{
  return (char *)this + 680;
}


signed int __fastcall GuiData::_mayChat(int a1, _DWORD *a2)
{
  int v2; // r5@1
  Social::XboxLiveUserManager *v3; // r0@3
  _QWORD *v4; // r6@4
  signed int v5; // r8@5
  signed int v6; // r7@5
  int v7; // r0@5
  signed int v8; // r1@5
  signed int v9; // r4@8
  int v10; // r5@14
  unsigned int *v11; // r1@15
  unsigned int v12; // r0@17
  unsigned int *v13; // r6@21
  unsigned int v14; // r0@23
  Social::User *v16; // [sp+0h] [bp-20h]@2
  int v17; // [sp+4h] [bp-1Ch]@14

  v2 = a1;
  if ( *(_DWORD *)(*a2 - 12) )
  {
    ClientInstance::getUser((ClientInstance *)&v16, *(_DWORD *)(a1 + 104));
    if ( v16 )
    {
      v3 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v16);
      if ( Social::XboxLiveUserManager::isSignedIn(v3) )
      {
        v4 = (_QWORD *)ClientInstance::getMultiplayerServiceManager(*(ClientInstance **)(v2 + 104));
        if ( Social::MultiplayerServiceManager::hasID(v4) == 1 )
        {
          v5 = Social::MultiplayerServiceManager::isMutedPlayer(v4);
          v6 = Social::MultiplayerServiceManager::isBlockedPlayer(v4);
          v7 = ClientInstance::getFont(*(ClientInstance **)(v2 + 104));
          v8 = 0;
          if ( !v7 )
            v8 = 1;
          if ( v5 | v8 | v6 )
            v9 = 2;
          else
            v9 = Social::MultiplayerServiceManager::mayChatWith(v4);
        }
        else
          v9 = 0;
      }
      else
        v9 = 1;
    }
    else
      v9 = 1;
    v10 = v17;
    if ( v17 )
      v11 = (unsigned int *)(v17 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        v13 = (unsigned int *)(v10 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
        if ( &pthread_create )
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  }
  else
    v9 = 1;
  return v9;
}


signed int __fastcall GuiData::setNowPlaying(int a1, int *a2)
{
  int *v2; // r6@1
  int v3; // r9@1
  char *v4; // r0@1
  void *v5; // r0@1
  char *v6; // r5@2
  int v7; // r7@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  int *v10; // r0@12
  void *v11; // r0@17
  void *v12; // r0@18
  signed int result; // r0@19
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  unsigned int *v16; // r2@24
  signed int v17; // r1@26
  unsigned int *v18; // r2@28
  signed int v19; // r1@30
  int v20; // [sp+0h] [bp-40h]@1
  char *v21; // [sp+4h] [bp-3Ch]@1
  char *v22; // [sp+8h] [bp-38h]@1
  char *v23; // [sp+Ch] [bp-34h]@1
  int v24; // [sp+14h] [bp-2Ch]@1
  int v25; // [sp+18h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  sub_DA7364((void **)&v24, "record.nowPlaying");
  sub_DA73B4(&v20, v2);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v4 = (char *)operator new(4u);
  v21 = v4;
  v23 = v4 + 4;
  v22 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v20,
                  (int)&v21,
                  (int)v4);
  I18n::get(&v25, &v24, (unsigned __int64 *)&v21);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 232),
    &v25);
  v5 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v25 - 4);
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
      j_j_j_j_j__ZdlPv_9(v5);
  }
  v7 = (int)v22;
  v6 = v21;
  if ( v21 != v22 )
    do
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
          j_j_j_j_j__ZdlPv_9(v10);
      }
      v6 += 4;
    while ( v6 != (char *)v7 );
    v6 = v21;
  if ( v6 )
    operator delete(v6);
  v11 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v20 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v24 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  *(_DWORD *)(v3 + 236) = 60;
  result = 1;
  *(_BYTE *)(v3 + 240) = 1;
  return result;
}


signed int __fastcall GuiData::isTouchEnabledOrHolographic(GuiData *this)
{
  ClientInputHandler *v1; // r0@1
  int v2; // r0@1
  signed int v3; // r1@1

  v1 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)this + 26));
  v2 = ClientInputHandler::getCurrentInputMode(v1);
  v3 = 0;
  if ( v2 == 2 )
    v3 = 1;
  return v3;
}


signed int __fastcall GuiData::displayWhisperMessage(int a1, int *a2, int *a3, const void **a4)
{
  int v4; // r8@1
  int *v5; // r5@1
  const void **v6; // r9@1
  int *v7; // r6@1
  int *v8; // r0@1
  __int64 v9; // kr00_8@1
  unsigned int v10; // r1@1
  const void **v11; // r0@3
  char *v12; // r0@5
  void *v13; // r0@6
  char *v14; // r4@7
  int v15; // r6@7
  unsigned int *v16; // r2@9
  signed int v17; // r1@11
  int *v18; // r0@17
  void *v19; // r0@22
  void *v20; // r0@23
  void *v21; // r0@24
  void *v22; // r0@25
  signed int result; // r0@26
  unsigned int *v24; // r2@29
  signed int v25; // r1@31
  unsigned int *v26; // r2@33
  signed int v27; // r1@35
  unsigned int *v28; // r2@37
  signed int v29; // r1@39
  unsigned int *v30; // r2@41
  signed int v31; // r1@43
  unsigned int *v32; // r2@45
  signed int v33; // r1@47
  unsigned int *v34; // r2@49
  signed int v35; // r1@51
  int v36; // [sp+Ch] [bp-4Ch]@1
  int v37; // [sp+10h] [bp-48h]@1
  char *v38; // [sp+14h] [bp-44h]@1
  char *v39; // [sp+18h] [bp-40h]@1
  char *v40; // [sp+1Ch] [bp-3Ch]@1
  int v41; // [sp+24h] [bp-34h]@1
  int v42; // [sp+28h] [bp-30h]@1
  unsigned int v43; // [sp+2Ch] [bp-2Ch]@1
  char *v44; // [sp+30h] [bp-28h]@5

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = sub_DA73B4((int *)&v43, (int *)&unk_27C8204);
  sub_DA7564((const void **)v8, (const void **)&unk_27C8230);
  sub_DA7364((void **)&v41, "commands.message.display.incoming");
  sub_DA73B4(&v36, v5);
  sub_DA73B4(&v37, v7);
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v38 = (char *)operator new(8u);
  v40 = v38 + 8;
  v39 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v36,
                  (int)&v38,
                  (int)v38);
  I18n::get(&v42, &v41, (unsigned __int64 *)&v38);
  v9 = *(_QWORD *)(v43 - 12);
  v10 = *(_DWORD *)(v42 - 12) + v9;
  if ( v10 > HIDWORD(v9) && v10 <= *(_DWORD *)(v42 - 8) )
    v11 = sub_DA7948((const void **)&v42, 0, v43, (_BYTE *)v9);
  else
    v11 = sub_DA7564((const void **)&v43, (const void **)&v42);
  v44 = (char *)*v11;
  *v11 = &unk_28898CC;
  GuiData::addMessage(v4, v5, (int *)&v44, 1092616192, 0, 1, v6);
  v12 = v44 - 12;
  if ( (int *)(v44 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v44 - 4);
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
      j_j_j_j_j__ZdlPv_9(v12);
  }
  v13 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v42 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  v15 = (int)v39;
  v14 = v38;
  if ( v38 != v39 )
    do
      v18 = (int *)(*(_DWORD *)v14 - 12);
      if ( v18 != &dword_28898C0 )
      {
        v16 = (unsigned int *)(*(_DWORD *)v14 - 4);
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
          j_j_j_j_j__ZdlPv_9(v18);
      }
      v14 += 4;
    while ( v14 != (char *)v15 );
    v14 = v38;
  if ( v14 )
    operator delete(v14);
  v19 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v37 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v36 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v41 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v43 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  result = *(_BYTE *)(v4 + 241);
  if ( *(_BYTE *)(v4 + 241) )
    result = 1065353216;
    *(_DWORD *)(v4 + 264) = 1065353216;
  return result;
}


int __fastcall GuiData::_tickDelayedMessages(int result)
{
  int v1; // r4@1
  int v2; // r9@1
  int v3; // r6@1
  int v4; // r7@2
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  signed int v7; // r0@11
  const GuiMessage *i; // r5@14
  const GuiMessage *v9; // r7@14
  __int64 v10; // kr00_8@14
  int v11; // r6@16
  int v12; // r1@16
  void *v13; // r0@16

  v1 = result;
  v2 = result + 788;
  v3 = *(_DWORD *)(result + 796);
  if ( v3 != result + 788 )
  {
    v4 = *(_DWORD *)(result + 796);
    while ( 1 )
    {
      v7 = GuiData::_mayChat(v1, (_DWORD *)(v4 + 16));
      if ( v7 == 1 )
        break;
      if ( v7 )
        goto LABEL_16;
      result = sub_DA7F5C(v3);
      v4 = result;
LABEL_18:
      v3 = v4;
      if ( v4 == v2 )
        return result;
    }
    v10 = *(_QWORD *)(v4 + 20);
    v9 = (const GuiMessage *)(*(_QWORD *)(v4 + 20) >> 32);
    for ( i = (const GuiMessage *)v10; v9 != i; i = (const GuiMessage *)((char *)i + 24) )
      GuiData::_addMessage((GuiData *)v1, i);
LABEL_16:
    v4 = sub_DA7F5C(v3);
    v11 = sub_DA800C(v3, v2);
    std::vector<GuiMessage,std::allocator<GuiMessage>>::~vector((unsigned __int64 *)(v11 + 20));
    v12 = *(_DWORD *)(v11 + 16);
    v13 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v5 = (unsigned int *)(v12 - 4);
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
        j_j_j_j_j__ZdlPv_9(v13);
    operator delete((void *)v11);
    result = *(_DWORD *)(v1 + 804) - 1;
    *(_DWORD *)(v1 + 804) = result;
    goto LABEL_18;
  }
  return result;
}


signed int __fastcall GuiData::getTipMessage(int a1, int *a2)
{
  signed int result; // r0@2
  const void **v3; // r4@3

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 272) - 12) )
  {
    v3 = (const void **)(a1 + 272);
    EntityInteraction::setInteractText(a2, (int *)(a1 + 272));
    sub_DA7894(v3, 0, *((_BYTE **)*v3 - 3), 0);
    result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall GuiData::~GuiData(GuiData *this)
{
  GuiData *v1; // r0@1

  v1 = GuiData::~GuiData(this);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall GuiData::getFlashSlotStartTime(GuiData *this, int _R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            D0, [R0,#0x60]
    VMOV            R0, R1, D0
  }
  return result;
}


int __fastcall GuiData::renderSlotText(float a1, int a2, int a3, int _R3, int a5, int a6, int a7, int a8)
{
  int v9; // r9@1
  int v10; // r8@1
  int result; // r0@2
  unsigned int v12; // r0@4
  unsigned __int8 v17; // kr04_1@8
  int v19; // r10@13
  ClientInputHandler *v20; // r0@13
  int v21; // r7@13
  int v22; // r6@13
  ClientInputHandler *v23; // r0@13
  int v24; // r0@13
  signed int v27; // r1@13
  signed int v28; // kr00_4@13
  signed int v29; // r2@13
  int v30; // r3@13
  int v31; // r1@15
  ClientInstance *v35; // r0@20
  int v36; // r5@21
  void *v38; // r0@21
  unsigned int *v39; // r2@22
  signed int v40; // r1@24
  int v41; // r5@26
  int v43; // [sp+0h] [bp-A0h]@0
  __int64 v44; // [sp+10h] [bp-90h]@0
  int v45; // [sp+18h] [bp-88h]@0
  float v46; // [sp+1Ch] [bp-84h]@21
  int v47; // [sp+24h] [bp-7Ch]@21
  int v48; // [sp+28h] [bp-78h]@18
  __int64 v49; // [sp+2Ch] [bp-74h]@18
  int v50; // [sp+34h] [bp-6Ch]@18
  char v51; // [sp+38h] [bp-68h]@10
  int v52; // [sp+40h] [bp-60h]@3

  _R5 = a1;
  v9 = a3;
  v10 = a2;
  if ( a8 || (result = *(_BYTE *)(a3 + 14), (unsigned int)result >= 2) )
  {
    v52 = 0;
    if ( a6 == 1 )
    {
      v12 = *(_BYTE *)(a3 + 14);
      if ( v12 > 9 )
      {
        if ( v12 > 0x63 )
        {
          __asm { VMOV.F32        S20, #2.0 }
          v52 = 2832697;
        }
        else
          __asm { VMOV.F32        S20, #1.0 }
          v17 = *(_BYTE *)(a3 + 14);
          LOBYTE(v52) = v17 / 0xAu + 48;
          *(_WORD *)((char *)&v52 + 1) = (unsigned __int8)(v12 - 10 * (v17 / 0xAu) + 48);
      }
      else
        LOWORD(v52) = (unsigned __int8)(v12 + 48);
        __asm { VLDR            S20, =0.0 }
    }
    else
      __asm { VLDR            S20, =0.0 }
      LOBYTE(v52) = -99;
    __asm
      VMOV            S18, R3
      VLDR            S16, [SP,#0xA0+arg_0]
    MatrixStack::push((MatrixStack *)&v51, *(_DWORD *)(a2 + 16) + 16);
      VLDR            S0, =0.9
      VMOV.F32        S24, #0.5
      VLDR            S2, =0.3
      VLDR            S22, =0.4
    if ( _ZF )
      __asm { VLDR            S26, [R5,#0x28] }
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v51);
      __asm
        VLDR            S0, =0.45455
        VLDR            S2, [R0]
        VDIV.F32        S0, S0, S26
        VMUL.F32        S2, S2, S0
        VDIV.F32        S16, S16, S0
        VSTR            S2, [R0]
        VLDR            S2, [R0,#4]
        VDIV.F32        S18, S18, S0
        VSTR            S2, [R0,#4]
        VLDR            S2, [R0,#8]
        VSTR            S2, [R0,#8]
        VLDR            S2, [R0,#0xC]
        VSTR            S2, [R0,#0xC]
        VLDR            S2, [R0,#0x10]
        VSTR            S2, [R0,#0x10]
        VLDR            S2, [R0,#0x14]
        VSTR            S2, [R0,#0x14]
        VLDR            S2, [R0,#0x18]
        VSTR            S2, [R0,#0x18]
        VLDR            S2, [R0,#0x1C]
        VSTR            S2, [R0,#0x1C]
        VLDR            S2, [R0,#0x20]
        VSTR            S2, [R0,#0x20]
        VLDR            S2, [R0,#0x24]
        VSTR            S2, [R0,#0x24]
        VLDR            S2, [R0,#0x28]
        VSTR            S2, [R0,#0x28]
        VLDR            S2, [R0,#0x2C]
        VMUL.F32        S0, S2, S0
        VSTR            S0, [R0,#0x2C]
        VMOVNE.F32      S22, S2
        VMOVNE.F32      S24, S0
    __asm { VLDR            S0, [R5,#0x1C] }
    v19 = *(_DWORD *)(LODWORD(_R5) + 88);
    __asm { VCVTR.S32.F32   S26, S0 }
    v20 = (ClientInputHandler *)ClientInstance::getInput(*(ClientInstance **)(LODWORD(_R5) + 104));
    v21 = ClientInputHandler::getCurrentInputMode(v20);
    v22 = *(_DWORD *)(LODWORD(_R5) + 88);
    __asm { VCVTR.S32.F32   S28, S0 }
    v23 = (ClientInputHandler *)ClientInstance::getInput(*(ClientInstance **)(LODWORD(_R5) + 104));
    v24 = ClientInputHandler::getCurrentInputMode(v23);
      VMOV            R1, S26
      VMOV            R2, S28
    v28 = _R1;
    v27 = _R1 + (_R1 >> 31);
    v29 = _R2 + (_R2 >> 31);
    v30 = v28 / -2;
    if ( v21 == 2 )
      v30 = 10 - (v27 >> 1);
    v31 = v30 + (v29 >> 1) + 10 * (v19 - v22);
    _R2 = v31 + 20;
    if ( v24 == 2 )
      _R2 = v31 + 10;
      VMOV            S0, R2
      VCVT.F32.S32    S26, S0
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v51);
      VMUL.F32        S0, S26, S24
      VLDR            S10, [R0,#0x10]
      VMUL.F32        S2, S20, S22
      VLDR            S12, [R0,#0x14]
      VLDR            S14, [R0,#0x18]
      VLDR            S6, [R0,#8]
      VLDR            S8, [R0,#0xC]
      VLDR            S1, [R0,#0x1C]
      VLDMIA          R0, {S3-S4}
      VMUL.F32        S12, S12, S0
      VMUL.F32        S2, S2, S0
      VMUL.F32        S10, S10, S0
      VMUL.F32        S14, S14, S0
      VSUB.F32        S2, S0, S2
      VMUL.F32        S0, S1, S0
      VMUL.F32        S4, S4, S2
      VMUL.F32        S6, S6, S2
      VMUL.F32        S3, S3, S2
      VMUL.F32        S2, S8, S2
      VADD.F32        S4, S12, S4
      VLDR            S12, [R0,#0x38]
      VADD.F32        S6, S14, S6
      VLDR            S14, [R0,#0x3C]
      VADD.F32        S8, S10, S3
      VLDR            S10, [R0,#0x34]
      VADD.F32        S0, S0, S2
      VLDR            S2, [R0,#0x30]
      VADD.F32        S4, S4, S10
      VADD.F32        S6, S6, S12
      VADD.F32        S2, S8, S2
      VADD.F32        S0, S0, S14
      VSTR            S2, [R0,#0x30]
      VSTR            S4, [R0,#0x34]
      VSTR            S6, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
    if ( *(_BYTE *)(v9 + 14) )
      v50 = unk_283E61C;
      v48 = Color::WHITE;
      v49 = *(_QWORD *)&qword_283E614;
      v48 = 1061997774;
      v49 = 4561245708816796878LL;
      v50 = 1052819650;
    v35 = *(ClientInstance **)(LODWORD(_R5) + 104);
    if ( a7 == 1 )
      v36 = ClientInstance::getFont(v35);
      sub_DA7364((void **)&v47, (const char *)&v52);
      __asm { VMOV            R3, S18 }
      LODWORD(v44) = 0;
      __asm { VSTR            S16, [SP,#0xA0+var_A0] }
      Font::drawShadow(*(float *)&v36, v10, (int)&v47, _R3, *(float *)&v43, (int)&v48, 0LL, v44, v45, v46);
      v38 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v47 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          goto LABEL_34;
LABEL_33:
        v40 = (*v39)--;
LABEL_34:
        if ( v40 <= 0 )
          j_j_j_j_j__ZdlPv_9(v38);
        goto LABEL_27;
      v41 = ClientInstance::getFont(v35);
      sub_DA7364((void **)&v46, (const char *)&v52);
        VMOV            R3, S18
        VSTR            S16, [SP,#0xA0+var_A0]
      Font::draw(*(float *)&v41, v10, (int)&v46, _R3, v43, COERCE_FLOAT(&v48), 0.0, 0, -1, 0);
      v38 = (void *)(LODWORD(v46) - 12);
      if ( (int *)(LODWORD(v46) - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(LODWORD(v46) - 4);
        goto LABEL_33;
LABEL_27:
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v51);
  }
  return result;
}


char *__fastcall GuiData::getCursorMat(GuiData *this)
{
  return (char *)this + 704;
}


int __fastcall GuiData::setLastSelectedSlot(int result, int a2, unsigned __int8 a3)
{
  *(_DWORD *)(result + 256) = a3;
  *(_DWORD *)(result + 260) = a2;
  return result;
}


void __fastcall GuiData::displaySystemMessage(int a1, int *a2)
{
  GuiData::displaySystemMessage(a1, a2);
}


signed int __fastcall GuiData::displayChatMessage(int a1, int *a2, int *a3, const void **a4)
{
  int v4; // r4@1
  signed int result; // r0@1

  v4 = a1;
  GuiData::addMessage(a1, a2, a3, 1092616192, 0, 1, a4);
  result = *(_BYTE *)(v4 + 241);
  if ( *(_BYTE *)(v4 + 241) )
  {
    result = 1065353216;
    *(_DWORD *)(v4 + 264) = 1065353216;
  }
  return result;
}


char *__fastcall GuiData::getRcFeedbackOuter(GuiData *this)
{
  return (char *)this + 280;
}


int __fastcall GuiData::onConfigChanged(GuiData *this, const Config *a2)
{
  int v3; // [sp+0h] [bp-18h]@1

  return GuiData::setTouchToolbarArea((GuiData *)&v3, this, (GuiData *)((char *)this + 108));
}


char *__fastcall GuiData::getCrosshairMat(GuiData *this)
{
  return (char *)this + 692;
}


int __fastcall GuiData::getLastDevConsoleMessage(GuiData *this)
{
  return *((_DWORD *)this + 47) - 4;
}


char *__fastcall GuiData::getVignette(GuiData *this)
{
  return (char *)this + 480;
}


int __fastcall GuiData::toggleMuteChat(int result)
{
  if ( !*(_BYTE *)(result + 242) )
    *(_BYTE *)(result + 241) ^= 1u;
  return result;
}


signed int __fastcall GuiData::getGuiScaleIndexForSplitscreenConsole(int _R0)
{
  signed int result; // r0@4

  __asm
  {
    VLDR            S0, =0.0041667
    VLDR            S4, [R0,#4]
    VLDR            S2, [R0]
    VLDR            S6, =0.0023256
    VMUL.F32        S0, S4, S0
    VMUL.F32        S2, S2, S6
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV            R0, S0
    VMOV            R1, S2
  }
  if ( _R0 < _R1 )
    _R1 = _R0;
  if ( _R1 >= 2 )
    if ( _R1 >= 3 )
    {
      if ( _R1 >= 4 )
      {
        if ( _R1 >= 5 )
        {
          if ( _R1 >= 6 )
          {
            if ( _R1 >= 7 )
            {
              result = 7;
              if ( _R1 < 8 )
                result = 6;
            }
            else
              result = 5;
          }
          else
            result = 4;
        }
        else
          result = 3;
      }
      else
        result = 2;
    }
    else
      result = 1;
  else
    result = 0;
  return result;
}


char *__fastcall GuiData::_insertGuiMessage(GuiData *this, const GuiMessage *a2)
{
  GuiData *v2; // r4@1
  __int64 v3; // kr00_8@1
  char *result; // r0@2

  v2 = this;
  v3 = *((_QWORD *)this + 22);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = j_j_j__ZNSt6vectorI10GuiMessageSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_(
               (unsigned __int64 *)((char *)this + 172),
               (int *)a2);
  }
  else
    GuiMessage::GuiMessage((int *)v3, (int *)a2);
    result = (char *)(*((_DWORD *)v2 + 44) + 24);
    *((_DWORD *)v2 + 44) = result;
  return result;
}


int __fastcall GuiData::setShowProgress(int result, bool a2)
{
  *(_BYTE *)(result + 268) = a2;
  return result;
}


_QWORD *__fastcall GuiData::setTitle(int a1)
{
  int v1; // r4@1

  v1 = a1;
  TitleMessage::setTitle();
  return j_j_j__ZN14ClientInstance23onGameEventNotificationEN2ui21GameEventNotificationE(*(_DWORD *)(v1 + 104));
}


int __fastcall GuiData::getSlotPos(GuiData *this, int a2, int *a3, int *a4)
{
  int *v8; // r5@1
  int *v9; // r4@1
  int v11; // r6@1
  int v12; // r7@1
  ClientInputHandler *v13; // r0@1
  int result; // r0@3

  __asm { VLDR            S2, [R0,#0x1C] }
  v8 = a3;
  __asm { VLDR            S0, [R0,#0x20] }
  v9 = a4;
  __asm
  {
    VCVTR.S32.F32   S2, S2
    VCVTR.S32.F32   S16, S0
    VMOV            R3, S2
  }
  v11 = 20 * a2 + _R3 / 2 + -10 * *((_DWORD *)this + 22);
  v12 = v11 - 1;
  v13 = (ClientInputHandler *)ClientInstance::getInput(*((ClientInstance **)this + 26));
  ClientInputHandler::getCurrentInputMode(v13);
  __asm { VMOV            R0, S16 }
  if ( _ZF )
    v12 = v11 - 11;
  *v8 = v12;
  result = _R0 - 25;
  *v9 = result;
  return result;
}


char *__fastcall GuiData::getRcFeedbackInner(GuiData *this)
{
  return (char *)this + 380;
}


int __fastcall GuiData::tick(GuiData *this)
{
  int v2; // r4@1
  int v3; // r6@1
  GuiMessage *v5; // r5@1
  GuiMessage *v6; // r7@1
  int v11; // r0@5
  Player *v12; // r5@11
  int v13; // r0@12
  PlayerInventoryProxy *v14; // r0@14
  int *v15; // r5@14
  void *v17; // r0@20
  void *v18; // r0@21
  unsigned int *v20; // r2@24
  signed int v21; // r1@26
  unsigned int *v22; // r2@28
  signed int v23; // r1@30
  int v24; // [sp+0h] [bp-38h]@20
  int v25; // [sp+4h] [bp-34h]@20
  unsigned __int8 v26; // [sp+8h] [bp-30h]@12
  int v27; // [sp+Ch] [bp-2Ch]@12
  __int64 v28; // [sp+10h] [bp-28h]@1

  _R9 = this;
  sub_DA7F0C(&v28);
  v2 = HIDWORD(v28);
  v3 = v28;
  _R0 = _aeabi_l2f(v28 - *((_DWORD *)_R9 + 194), (unsigned __int64)(v28 - *((_QWORD *)_R9 + 97)) >> 32);
  v6 = (GuiMessage *)(*(_QWORD *)((char *)_R9 + 172) >> 32);
  v5 = (GuiMessage *)*(_QWORD *)((char *)_R9 + 172);
  if ( v5 != v6 )
  {
    __asm
    {
      VLDR            S0, =1.0e-9
      VMOV            S2, R0
      VMUL.F32        S0, S2, S0
      VMOV            R6, S0
    }
    do
      GuiMessage::decrementTime(v5, _R6);
      v5 = (GuiMessage *)((char *)v5 + 24);
    while ( v6 != v5 );
    v2 = HIDWORD(v28);
    v3 = v28;
  }
  *((_DWORD *)_R9 + 194) = v3;
  *((_DWORD *)_R9 + 195) = v2;
  __asm { VMOV.F32        S2, #2.0 }
  v11 = *((_DWORD *)_R9 + 59);
  if ( v11 > 0 )
    *((_DWORD *)_R9 + 59) = v11 - 1;
  ++*((_DWORD *)_R9 + 39);
  __asm
    VLDR            S0, [R9,#0xA0]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
      VLDRLT          S2, =0.05
      VADDLT.F32      S0, S0, S2
      VSTRLT          S0, [R9,#0xA0]
    VMOV.F32        S2, #3.0
    VLDR            S0, [R9,#0xA4]
      VSTRLT          S0, [R9,#0xA4]
  v12 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)_R9 + 26));
  if ( v12 )
    GuiData::_tickItemDrop(_R9);
    v13 = Player::getSupplies(v12);
    PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v26, v13);
    if ( *((_DWORD *)_R9 + 20) != v27 || *((_BYTE *)_R9 + 84) != v26 )
      v14 = (PlayerInventoryProxy *)Player::getSupplies(v12);
      v15 = (int *)PlayerInventoryProxy::getSelectedItem(v14);
      if ( *((_DWORD *)_R9 + 20) != -1 )
      {
        _ZF = *((_BYTE *)v15 + 15) == 0;
        if ( *((_BYTE *)v15 + 15) )
          _ZF = *v15 == 0;
        if ( !_ZF && !ItemInstance::isNull((ItemInstance *)v15) && *((_BYTE *)v15 + 14) )
        {
          ItemInstance::getHoverName((ItemInstance *)&v25, (int)v15);
          ItemInstance::getEffectName((ItemInstance *)&v24, v15);
          GuiData::showPopupNotice((int)_R9, (int **)&v25, &v24);
          v17 = (void *)(v24 - 12);
          if ( (int *)(v24 - 12) != &dword_28898C0 )
          {
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
              j_j_j_j_j__ZdlPv_9(v17);
          }
          v18 = (void *)(v25 - 12);
          if ( (int *)(v25 - 12) != &dword_28898C0 )
            v22 = (unsigned int *)(v25 - 4);
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
              v23 = (*v22)--;
            if ( v23 <= 0 )
              j_j_j_j_j__ZdlPv_9(v18);
        }
      }
      *((_DWORD *)_R9 + 20) = v27;
      *((_BYTE *)_R9 + 84) = v26;
  TTSManager::tick(*((TTSManager **)_R9 + 191));
  return GuiData::_tickDelayedMessages(_R9);
}


void __fastcall GuiData::setTextToSpeechEnabled(GuiData *this, int a2)
{
  GuiData::setTextToSpeechEnabled(this, a2);
}


char *__fastcall GuiData::getServerSettings(GuiData *this)
{
  return (char *)this + 228;
}


_QWORD *__fastcall GuiData::setActionBarMessage(int a1, int *a2)
{
  int v2; // r4@1

  v2 = a1;
  TitleMessage::setActionBarMessage(a1 + 200, a2);
  return j_j_j__ZN14ClientInstance23onGameEventNotificationEN2ui21GameEventNotificationE(*(_DWORD *)(v2 + 104));
}


int __fastcall GuiData::getPreexistingMessages(int result, int a2)
{
  if ( *(_BYTE *)(a2 + 78) )
  {
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(result + 8) = 0;
  }
  else
    *(_BYTE *)(a2 + 78) = 1;
    result = std::vector<GuiMessage,std::allocator<GuiMessage>>::vector(result, (unsigned __int64 *)(a2 + 172));
  return result;
}


signed int __fastcall GuiData::showJukeboxPopupNotice(int a1, int **a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  void *v5; // r0@1
  signed int result; // r0@2
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  I18n::get(&v9, a2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 148),
    &v9);
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
  EntityInteraction::setInteractText((int *)(v3 + 152), v4);
  *(_DWORD *)(v3 + 164) = 0;
  result = 1;
  *(_BYTE *)(v3 + 169) = 1;
  return result;
}


signed int __fastcall GuiData::getNewPopupNotice(int a1, int *a2, int *a3)
{
  int *v4; // r6@1
  signed int v9; // r4@2
  signed int result; // r0@5

  _R5 = a1;
  v4 = a3;
  if ( *(_BYTE *)(a1 + 168) )
  {
    __asm
    {
      VMOV.F32        S0, #2.0
      VLDR            S2, [R5,#0xA0]
    }
    v9 = 0;
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      EntityInteraction::setInteractText(a2, (int *)(a1 + 140));
      EntityInteraction::setInteractText(v4, (int *)(_R5 + 144));
      *(_BYTE *)(_R5 + 168) = 0;
      v9 = 1;
    result = v9;
  }
  else
    result = 0;
  return result;
}


char *__fastcall GuiData::getDevConsoleScreenMessages(GuiData *this)
{
  return (char *)this + 184;
}


int __fastcall GuiData::resolveGuiScale(GuiData *this, int a2)
{
  GuiData *v2; // r2@1

  v2 = this;
  if ( (signed int)this <= 0 )
    v2 = 0;
  if ( (signed int)this > 7 )
    v2 = (GuiData *)7;
  return GuiData::GUI_SCALE_VALUES[(signed int)v2];
}


int __fastcall GuiData::onAppSuspended(GuiData *this)
{
  GuiData *v1; // r4@1

  v1 = this;
  mce::Mesh::reset((GuiData *)((char *)this + 380));
  mce::Mesh::reset((GuiData *)((char *)v1 + 280));
  return j_j_j__ZN3mce4Mesh5resetEv((GuiData *)((char *)v1 + 480));
}


char *__fastcall GuiData::getMessageList(GuiData *this)
{
  return (char *)this + 172;
}


void __fastcall GuiData::addMessage(int a1, int *a2, int *a3, int a4, int a5, char a6, const void **a7)
{
  GuiData::addMessage(a1, a2, a3, a4, a5, a6, a7);
}


int __fastcall GuiData::calcNewAlpha(GuiData *this, float _R1, float a3)
{
  int result; // r0@6

  __asm
  {
    VMOV            S0, R1
    VMOV            S2, R0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    if ( _NF ^ _VF )
    {
      __asm
      {
        VLDR            S4, =-0.04
        VADD.F32        S2, S2, S4
        VMOV.F32        S4, #1.0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S2, S4
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S0, S2 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S0, S4 }
      __asm { VMOV.F32        S2, S0 }
    }
    __asm { VMOV            R0, S2 }
  else
    __asm
      VLDR            S4, =0.02
      VADD.F32        S4, S2, S4
      VLDR            S2, =0.0
      VCMPE.F32       S4, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S4, S0
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S4 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S2, S0 }
  return result;
}


void __fastcall GuiData::displaySystemMessage(int a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  void **v4; // r0@1
  void *v5; // r0@1
  void *v6; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+14h] [bp-2Ch]@1
  int v12; // [sp+1Ch] [bp-24h]@1

  v2 = a2;
  v3 = a1;
  sub_DA7364((void **)&v12, (const char *)&unk_257BC67);
  v4 = sub_DA7364((void **)&v11, (const char *)&unk_257BC67);
  GuiData::addMessage(v3, &v12, v2, 1092616192, 1, 0, (const void **)v4);
  v5 = (void *)(v11 - 12);
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
      j_j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v12 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
}


int __fastcall GuiData::ceilToGuiScale(GuiData *this, int a2)
{
  int v6; // r4@1
  int v8; // r1@1

  __asm { VLDR            S0, [R0,#0x24] }
  v6 = a2;
  __asm
  {
    VCVTR.S32.F32   S0, S0
    VMOV            R5, S0
  }
  v8 = a2 % _R5;
  if ( v8 )
    v6 = _R5 + v6 - v8;
  return v6;
}


int __fastcall GuiData::flashSlot(GuiData *this, int a2)
{
  int result; // r0@1

  *((_DWORD *)this + 23) = a2;
  result = getTimeS();
  __asm
  {
    VMOV            D0, R0, R1
    VSTR            D0, [R4,#0x60]
  }
  return result;
}


GuiData *__fastcall GuiData::~GuiData(GuiData *this)
{
  GuiData *v1; // r11@1
  char *v2; // r9@1
  int v3; // r1@1
  void *v4; // r0@1
  int v5; // r1@2
  void *v6; // r0@2
  int v7; // r1@3
  void *v8; // r0@3
  int v9; // r1@4
  void *v10; // r0@4
  int v11; // r1@5
  void *v12; // r0@5
  int v13; // r1@6
  void *v14; // r0@6
  __int64 v15; // r6@7
  unsigned int *v16; // r2@9
  signed int v17; // r1@11
  int *v18; // r0@17
  int v19; // r1@22
  void *v20; // r0@22
  int v21; // r1@23
  void *v22; // r0@23
  int v23; // r1@24
  void *v24; // r0@24
  int v25; // r1@25
  void *v26; // r0@25
  unsigned int *v28; // r2@27
  signed int v29; // r1@29
  unsigned int *v30; // r2@31
  signed int v31; // r1@33
  unsigned int *v32; // r2@35
  signed int v33; // r1@37
  unsigned int *v34; // r2@39
  signed int v35; // r1@41
  unsigned int *v36; // r2@43
  signed int v37; // r1@45
  unsigned int *v38; // r2@47
  signed int v39; // r1@49
  unsigned int *v40; // r2@51
  signed int v41; // r1@53
  unsigned int *v42; // r2@55
  signed int v43; // r1@57
  unsigned int *v44; // r2@59
  signed int v45; // r1@61
  unsigned int *v46; // r2@63
  signed int v47; // r1@65

  v1 = this;
  *(_DWORD *)this = &off_26D73CC;
  *((_DWORD *)this + 1) = &off_26D73E4;
  v2 = (char *)this + 4;
  std::_Rb_tree<std::string,std::pair<std::string const,std::vector<GuiMessage,std::allocator<GuiMessage>>>,std::_Select1st<std::pair<std::string const,std::vector<GuiMessage,std::allocator<GuiMessage>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<GuiMessage,std::allocator<GuiMessage>>>>>::_M_erase(
    (int)this + 784,
    *((_DWORD *)this + 198));
  std::unique_ptr<TTSManager,std::default_delete<TTSManager>>::~unique_ptr((_DWORD *)v2 + 190);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)(v2 + 736));
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)(v2 + 712));
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)(v2 + 700));
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)(v2 + 688));
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)(v2 + 676));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 576));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 476));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 376));
  mce::Mesh::~Mesh((mce::Mesh *)(v2 + 276));
  v3 = *((_DWORD *)v2 + 67);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v3 - 4);
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
      j_j_j_j_j__ZdlPv_9(v4);
  }
  v5 = *((_DWORD *)v1 + 58);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v5 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  v7 = *((_DWORD *)v1 + 57);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v7 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  v9 = *((_DWORD *)v1 + 55);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v9 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  v11 = *((_DWORD *)v1 + 51);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v11 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  v13 = *((_DWORD *)v1 + 50);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v13 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  v15 = *((_QWORD *)v1 + 23);
  if ( (_DWORD)v15 != HIDWORD(v15) )
    do
      v18 = (int *)(*(_DWORD *)v15 - 12);
      if ( v18 != &dword_28898C0 )
      {
        v16 = (unsigned int *)(*(_DWORD *)v15 - 4);
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
          j_j_j_j_j__ZdlPv_9(v18);
      }
      LODWORD(v15) = v15 + 4;
    while ( (_DWORD)v15 != HIDWORD(v15) );
    LODWORD(v15) = *((_DWORD *)v1 + 46);
  if ( (_DWORD)v15 )
    operator delete((void *)v15);
  std::vector<GuiMessage,std::allocator<GuiMessage>>::~vector((unsigned __int64 *)((char *)v1 + 172));
  v19 = *((_DWORD *)v1 + 38);
  v20 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v19 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  v21 = *((_DWORD *)v1 + 37);
  v22 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v21 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  v23 = *((_DWORD *)v1 + 36);
  v24 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v23 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
  v25 = *((_DWORD *)v1 + 35);
  v26 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v25 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9(v26);
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(
    (int)v1 + 48,
    *((_DWORD *)v1 + 14));
  AppPlatformListener::~AppPlatformListener((AppPlatformListener *)v2);
  return v1;
}


signed int __fastcall GuiData::_tickItemDrop(GuiData *this)
{
  unsigned int v2; // r6@1
  signed int v3; // r5@2
  int v4; // r7@2
  Player *v5; // r0@4
  Player *v6; // r8@4
  int v7; // r0@5
  int v8; // r0@6
  unsigned int *v9; // r10@10
  int v10; // r0@14
  int v11; // r0@14
  int v12; // r6@14
  int v13; // r0@14
  signed int result; // r0@21
  int v19; // r0@20
  int v20; // r6@20
  char v21; // [sp+Ch] [bp-2Ch]@20

  _R4 = this;
  v2 = 0;
  *((_BYTE *)this + 44) = 0;
  if ( MenuPointer::isPressed((GuiData *)((char *)this + 72)) == 1 )
  {
    v3 = *((_QWORD *)_R4 + 32) >> 32;
    v4 = *((_QWORD *)_R4 + 32);
    v2 = v4 & 0xFFFFFF00;
  }
  else
    v3 = -1;
    LOBYTE(v4) = -1;
  v5 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)_R4 + 26));
  v6 = v5;
  if ( !v5 )
    goto LABEL_25;
  v7 = Player::getSupplies(v5);
  v8 = (_BYTE)v4 ? PlayerInventoryProxy::getContainerSize(v7, v4) : *((_DWORD *)_R4 + 22);
  if ( v3 < 0 || v3 >= v8 )
  v9 = (unsigned int *)((char *)_R4 + 248);
  if ( v3 != *((_DWORD *)_R4 + 63) && (unsigned __int8)v4 != *(_BYTE *)v9
    || ClientInstance::isShowingMenu(*((ClientInstance **)_R4 + 26)) == 1 )
    *((_DWORD *)_R4 + 61) = 0;
    *v9 = (unsigned __int8)v4 | v2;
    *((_DWORD *)_R4 + 63) = v3;
  v10 = Player::getSupplies(v6);
  v11 = PlayerInventoryProxy::getItem(v10, *((_DWORD *)_R4 + 63), *((_BYTE *)_R4 + 248));
  v12 = v11;
  v13 = *(_BYTE *)(v11 + 15);
  _ZF = v13 == 0;
  if ( v13 )
    _ZF = *(_DWORD *)v12 == 0;
  if ( _ZF )
  if ( ItemInstance::isNull((ItemInstance *)v12) )
  if ( !*(_BYTE *)(v12 + 14) )
  __asm { VMOV.F32        S0, #1.0 }
  *((_BYTE *)_R4 + 44) = 1;
  __asm
    VLDR            S2, [R4,#0xF4]
    VADD.F32        S0, S2, S0
    VLDR            S2, =40.0
    VCMPE.F32       S0, S2
    VSTR            S0, [R4,#0xF4]
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
LABEL_25:
    result = *((_BYTE *)_R4 + 44);
    if ( *((_BYTE *)_R4 + 44) )
      return result;
    v19 = Player::getSupplies(v6);
    PlayerInventoryProxy::dropSlot(v19, *((_DWORD *)_R4 + 63), 0, 1, *((_BYTE *)_R4 + 248), 0);
    v20 = Entity::getLevel(v6);
    Entity::getAttachPos((AABB *)&v21, (int)v6, 3, 0);
    Level::playSound(v20, 76, (int)&v21);
    *((_BYTE *)_R4 + 44) = 0;
  result = -1;
  *((_DWORD *)_R4 + 61) = -1082130432;
  *((_DWORD *)_R4 + 62) = 255;
  *((_DWORD *)_R4 + 63) = -1;
  return result;
}


signed int __fastcall GuiData::showPopupNotice(int a1, int **a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  void *v5; // r0@1
  signed int result; // r0@2
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  I18n::get(&v9, a2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 140),
    &v9);
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
  EntityInteraction::setInteractText((int *)(v3 + 144), v4);
  *(_DWORD *)(v3 + 160) = 0;
  result = 1;
  *(_BYTE *)(v3 + 168) = 1;
  return result;
}


int __fastcall GuiData::setIsChatting(int result, bool a2)
{
  *(_BYTE *)(result + 243) = a2;
  return result;
}


signed int __fastcall GuiData::getGuiScaleIndexForLargeScreen(int _R0)
{
  signed int result; // r0@4

  __asm
  {
    VLDR            S0, =0.004
    VLDR            S4, [R0,#4]
    VLDR            S2, [R0]
    VLDR            S6, =0.0026596
    VMUL.F32        S0, S4, S0
    VMUL.F32        S2, S2, S6
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV            R0, S0
    VMOV            R1, S2
  }
  if ( _R0 < _R1 )
    _R1 = _R0;
  if ( _R1 >= 2 )
    if ( _R1 >= 3 )
    {
      if ( _R1 >= 4 )
      {
        if ( _R1 >= 5 )
        {
          if ( _R1 >= 6 )
          {
            if ( _R1 >= 7 )
            {
              result = 7;
              if ( _R1 < 8 )
                result = 6;
            }
            else
              result = 5;
          }
          else
            result = 4;
        }
        else
          result = 3;
      }
      else
        result = 2;
    }
    else
      result = 1;
  else
    result = 0;
  return result;
}


int __fastcall GuiData::getLastSelectedSlot(int result, int a2)
{
  *(_QWORD *)result = *(_QWORD *)(a2 + 256);
  return result;
}


void __fastcall GuiData::displayAnnouncementMessage(int a1, int a2, int *a3, const void **a4)
{
  GuiData::displayAnnouncementMessage(a1, a2, a3, a4);
}


int __fastcall GuiData::updatePointerLocation(int result, __int16 a2, __int16 a3)
{
  *(_WORD *)(result + 74) = a2;
  *(_WORD *)(result + 76) = a3;
  return result;
}


int __fastcall GuiData::setScreenSizeData(int a1, int a2)
{
  int result; // r0@1
  int v3; // r3@1
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r12@1
  int v7; // lr@1

  result = a1 + 12;
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = *(_DWORD *)(a2 + 16);
  v7 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = v3;
  *(_DWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 12) = v5;
  *(_DWORD *)(result + 16) = v6;
  *(_DWORD *)(result + 20) = v7;
  return result;
}


int __fastcall GuiData::isOddGuiScale(GuiData *this)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R0,#0x24]
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  result = _R0 % 2;
  if ( result != 1 )
    result = 0;
  return result;
}


int __fastcall GuiData::setToolbarWasRendered(int result, bool a2)
{
  *(_BYTE *)(result + 79) = a2;
  return result;
}


signed int __fastcall GuiData::handleClick(GuiData *this)
{
  int v2; // r0@1
  int v3; // r1@1
  ClientInstance *v4; // r0@1
  signed int v5; // r5@3
  int v14; // r0@8
  signed int v16; // kr00_4@8
  int v21; // r6@9
  int v22; // r0@11
  SceneStack *v23; // r0@14
  Player *v24; // r0@19
  int v25; // r0@19

  _R4 = this;
  v2 = ClientInstance::getHoloInput(*((ClientInstance **)this + 26));
  v3 = (*(int (**)(void))(*(_DWORD *)v2 + 44))();
  v4 = (ClientInstance *)*((_DWORD *)_R4 + 26);
  if ( v3 )
  {
    if ( !*(_BYTE *)(ClientInstance::getGameRenderer(v4) + 812) )
      return 0;
  }
  else if ( ClientInstance::getMouseGrabbed(v4) == 1 && !ClientInstance::useTouchscreen(*((ClientInstance **)_R4 + 26)) )
    return 0;
  if ( *((_BYTE *)_R4 + 79) )
    _R0 = *((_WORD *)_R4 + 37);
    _R1 = *((_WORD *)_R4 + 38);
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S16, S0
      VMOV            S0, R1
      VCVT.F32.S32    S0, S0
      VMOV            R1, S16
      VMOV            R2, S0
    }
    if ( RectangleArea::isInside((GuiData *)((char *)_R4 + 124), _R1, _R2) == 1 )
      __asm
      {
        VLDR            S0, [R4,#0x1C]
        VLDR            S2, [R4,#0x28]
      }
      v14 = *((_DWORD *)_R4 + 22);
        VCVTR.S32.F32   S0, S0
        VMUL.F32        S2, S2, S16
        VMOV            R2, S0
        VCVTR.S32.F32   S0, S2
      v16 = _R2;
      __asm { VMOV            R2, S0 }
      _R1 = 10 * v14 - v16 / 2 + _R2;
      if ( _R1 < 0 )
        v5 = 0;
      else
        _R2 = 1717986919;
        __asm { SMMUL.W         R2, R1, R2 }
        v21 = ((signed int)_R2 >> 3) + (_R2 >> 31);
        if ( v21 <= v14 && (unsigned int)(_R1 + 39) >= 0x14 )
        {
          v22 = ClientInstance::getScreen(*((ClientInstance **)_R4 + 26));
          if ( v21 == *((_DWORD *)_R4 + 22) )
          {
            if ( (*(int (**)(void))(*(_DWORD *)v22 + 168))() == 1 )
            {
              if ( *((_BYTE *)_R4 + 79) )
              {
                v23 = (SceneStack *)ClientInstance::getClientSceneStack(*((ClientInstance **)_R4 + 26));
                v5 = 1;
                SceneStack::schedulePopScreen(v23, 1);
              }
              else
                v5 = 0;
            }
            else
              v5 = 0;
          }
          else
            v24 = (Player *)ClientInstance::getLocalPlayer(*((ClientInstance **)_R4 + 26));
            v25 = Player::getSupplies(v24);
            PlayerInventoryProxy::selectSlot(v25, v21, 0);
            v5 = 1;
        }
    else
      v5 = 0;
  else
    v5 = 0;
  return v5;
}
