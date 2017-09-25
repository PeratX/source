

void __fastcall ClientInputHandler::onConfigChanged(ClientInputHandler *this, const Config *a2)
{
  ClientInputHandler *v2; // r5@1
  const Config *v3; // r4@1
  __int64 v4; // kr00_8@1
  int v5; // r1@1

  v2 = this;
  v3 = a2;
  ClientBindingFactory::onConfigChanged(*((ClientBindingFactory **)this + 2), a2);
  ClientInputMappingFactory::onConfigChanged(*((ClientInputMappingFactory **)v2 + 3), v3);
  v4 = *(_QWORD *)v2;
  v5 = ClientInstance::getControllerId((ClientInstance *)*(_QWORD *)v2);
  j_j_j__ZN12InputHandler19refreshInputMappingEi((InputHandler *)HIDWORD(v4), v5);
}


unsigned int __fastcall ClientInputHandler::setDisableInput(ClientInputHandler *this, bool a2)
{
  bool v2; // r4@1
  __int64 v3; // kr00_8@1
  int v4; // r2@1

  v2 = a2;
  v3 = *(_QWORD *)this;
  v4 = ClientInstance::getControllerId((ClientInstance *)*(_QWORD *)this);
  return j_j_j__ZN12InputHandler15setDisableInputEbi((InputHandler *)HIDWORD(v3), v2, v4);
}


void __fastcall ClientInputHandler::getInteractText(ClientInputHandler *this, ClientInstance **a2)
{
  ClientInputHandler *v2; // r4@1
  int v3; // r1@1

  v2 = this;
  v3 = ClientInstance::getLocalPlayer(*a2);
  if ( v3 )
    Player::getInteractText(v2, v3);
  else
    sub_119C884((void **)v2, (const char *)&unk_257BC67);
}


unsigned int __fastcall ClientInputHandler::setSuspendInput(ClientInputHandler *this, bool a2)
{
  bool v2; // r4@1
  __int64 v3; // kr00_8@1
  int v4; // r2@1

  v2 = a2;
  v3 = *(_QWORD *)this;
  v4 = ClientInstance::getControllerId((ClientInstance *)*(_QWORD *)this);
  return j_j_j__ZN12InputHandler15setSuspendInputEbi((InputHandler *)HIDWORD(v3), v2, v4);
}


int __fastcall ClientInputHandler::ClientInputHandler(int a1, ClientInstance *a2, int a3)
{
  ClientInstance *v3; // r6@1
  int v4; // r4@1
  ClientBindingFactory *v5; // r5@1
  int v6; // r0@1
  int v7; // r0@3
  int v8; // r7@3
  __int64 v9; // r0@3
  int v10; // r5@3
  int v11; // r0@3

  v3 = a2;
  v4 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  sub_119C884((void **)(a1 + 16), "gamePlayNormal");
  sub_119C884((void **)(v4 + 20), "screenGazeController");
  *(_BYTE *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_WORD *)(v4 + 29) = 257;
  v5 = (ClientBindingFactory *)operator new(0x1DCu);
  ClientBindingFactory::ClientBindingFactory(v5, (const ClientInputHandler *)v4, v3);
  v6 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = v5;
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  v7 = ClientInstance::getHoloInput(*(ClientInstance **)v4);
  (*(void (**)(void))(*(_DWORD *)v7 + 76))();
  v8 = ClientInstance::isEduMode(*(ClientInstance **)v4);
  LODWORD(v9) = operator new(0xB0u);
  v10 = v9;
  ClientInputMappingFactory::ClientInputMappingFactory(v9, v8);
  v11 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = v10;
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  return v4;
}


const void **__fastcall ClientInputHandler::getCurrentInputMapping(ClientInputHandler *this)
{
  __int64 v1; // kr00_8@1
  int v2; // r0@1

  v1 = *(_QWORD *)this;
  v2 = ClientInstance::getControllerId((ClientInstance *)*(_QWORD *)this);
  return InputHandler::getCurrentInputMapping((InputHandler *)HIDWORD(v1), v2);
}


int __fastcall ClientInputHandler::getNameId(int a1, int **a2)
{
  int **v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)InputHandler::getButtonRegistry(*(InputHandler **)(a1 + 4));
  return j_j_j__ZN12NameRegistry9getNameIdERKSs_0(v3, v2);
}


int __fastcall ClientInputHandler::ignoreButtonRelease(ClientInputHandler *this)
{
  InputHandler *v1; // r4@1
  int v2; // r1@1

  v1 = (InputHandler *)(*(_QWORD *)this >> 32);
  v2 = ClientInstance::getControllerId((ClientInstance *)*(_QWORD *)this);
  return j_j_j__ZN12InputHandler22setIgnoreButtonReleaseEi(v1, v2);
}


signed int __fastcall ClientInputHandler::canInteract(ClientInputHandler *this)
{
  ClientInstance **v1; // r4@1
  Player *v2; // r0@2
  ItemInstance *v3; // r5@3
  bool v4; // zf@5
  bool v5; // zf@12
  Level *v6; // r0@17
  Level *v7; // r4@17
  signed int result; // r0@20

  v1 = (ClientInstance **)this;
  if ( !ClientInstance::getLevel(*(ClientInstance **)this) )
    goto LABEL_24;
  v2 = (Player *)ClientInstance::getLocalPlayer(*v1);
  if ( v2 )
    v3 = (ItemInstance *)Player::getSelectedItem(v2);
  else
    v3 = (ItemInstance *)&ItemInstance::EMPTY_ITEM;
  v4 = *((_BYTE *)v3 + 15) == 0;
  if ( *((_BYTE *)v3 + 15) )
    v4 = *(_DWORD *)v3 == 0;
  if ( v4 || ItemInstance::isNull(v3) || !*((_BYTE *)v3 + 14) || !(*(int (**)(void))(**(_DWORD **)v3 + 120))() )
  v5 = *((_BYTE *)v3 + 15) == 0;
    v5 = *(_DWORD *)v3 == 0;
  if ( !v5 && !ItemInstance::isNull(v3) && *((_BYTE *)v3 + 14)
    || (v6 = (Level *)ClientInstance::getLevel(*v1), (v7 = v6) != 0)
    && *(_DWORD *)Level::getHitResult(v6) == 1
    && *((_DWORD *)Level::getHitResult(v7) + 8) )
  {
    result = 1;
  }
LABEL_24:
    result = 0;
  return result;
}


ClientInputHandler *__fastcall ClientInputHandler::~ClientInputHandler(ClientInputHandler *this)
{
  ClientInputHandler *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r0@3
  int v7; // r0@5
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14

  v1 = this;
  v2 = *((_DWORD *)this + 5);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 4);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v4 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 3);
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  *((_DWORD *)v1 + 3) = 0;
  v7 = *((_DWORD *)v1 + 2);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  *((_DWORD *)v1 + 2) = 0;
  return v1;
}


  if ( ClientInputHandler::isSneaking(*(ClientInputHandler **)(v1 + 4)) )
{
  else
    result = ClientInputHandler::showSneakButton(*(ClientInputHandler **)(v1 + 4));
  return result;
}


int __fastcall ClientInputHandler::updateInteractActiveState(int result, bool a2)
{
  *(_BYTE *)(result + 27) = a2;
  return result;
}


void __fastcall ClientInputHandler::updateInputMapping(ClientInputHandler *this)
{
  ClientInputHandler *v1; // r4@1
  ClientInstance *v2; // r0@2
  int v3; // r5@2
  int *v4; // r4@2
  int v5; // r0@3
  int v6; // r0@5
  int v7; // r5@7
  int v8; // r0@7
  void *v9; // r0@7
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  int v12; // r0@12
  int v13; // r0@12
  int v14; // r5@12
  int v15; // r0@13
  int v16; // r0@18
  int v17; // [sp+8h] [bp-28h]@18
  int v18; // [sp+10h] [bp-20h]@13
  int v19; // [sp+18h] [bp-18h]@7

  v1 = this;
  if ( ClientInstance::isInGame(*(ClientInstance **)this) == 1 )
  {
    v3 = *(_QWORD *)v1 >> 32;
    v2 = (ClientInstance *)*(_QWORD *)v1;
    v4 = (int *)((char *)v1 + 16);
LABEL_5:
    v6 = ClientInstance::getControllerId(v2);
    j_j_j__ZN12InputHandler18updateInputMappingERKSsi(v3, v4, v6);
    return;
  }
  v5 = ClientInstance::getHoloInput(*(ClientInstance **)v1);
  if ( (*(int (**)(void))(*(_DWORD *)v5 + 44))() == 1 )
    v4 = (int *)((char *)v1 + 20);
    goto LABEL_5;
  if ( ClientInstance::isInBedScreen(*(ClientInstance **)v1) == 1 )
    v7 = *((_DWORD *)v1 + 1);
    sub_119C884((void **)&v19, "screenBed");
    v8 = ClientInstance::getControllerId(*(ClientInstance **)v1);
    InputHandler::updateInputMapping(v7, &v19, v8);
    v9 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) == &dword_28898C0 )
      return;
    v10 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      goto LABEL_24;
    }
  else
    v12 = ClientInstance::getTopScreen(*(ClientInstance **)v1);
    v13 = (*(int (**)(void))(**(_DWORD **)v12 + 252))();
    v14 = *((_DWORD *)v1 + 1);
    if ( v13 == 1 )
      sub_119C884((void **)&v18, "screenTextInputOnly");
      v15 = ClientInstance::getControllerId(*(ClientInstance **)v1);
      InputHandler::updateInputMapping(v14, &v18, v15);
      v9 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) == &dword_28898C0 )
        return;
      v10 = (unsigned int *)(v18 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        goto LABEL_24;
      }
    else
      sub_119C884((void **)&v17, "screen");
      v16 = ClientInstance::getControllerId(*(ClientInstance **)v1);
      InputHandler::updateInputMapping(v14, &v17, v16);
      v9 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) == &dword_28898C0 )
      v10 = (unsigned int *)(v17 - 4);
  v11 = (*v10)--;
LABEL_24:
  if ( v11 <= 0 )
    j_j_j_j_j__ZdlPv_9_1(v9);
}


int __fastcall ClientInputHandler::useFreeformPickDirection(ClientInputHandler *this)
{
  ClientInstance **v1; // r4@1
  InputHandler *v2; // r5@1
  int v3; // r0@1
  int result; // r0@2
  Options *v5; // r0@3

  v1 = (ClientInstance **)this;
  v2 = (InputHandler *)(*(_QWORD *)this >> 32);
  v3 = ClientInstance::getControllerId((ClientInstance *)*(_QWORD *)this);
  if ( InputHandler::getCurrentInputMode(v2, v3) == 2 )
  {
    v5 = (Options *)ClientInstance::getOptions(*v1);
    result = Options::getSplitControls(v5) ^ 1;
  }
  else
    result = 0;
  return result;
}


_DWORD *__fastcall ClientInputHandler::updateHoloUIInputMode(unsigned __int64 *a1, int a2, int a3)
{
  unsigned __int64 *v3; // r5@1
  int v4; // r6@1
  InputHandler *v5; // r7@1
  int v6; // r4@1
  int v7; // r0@1
  _BOOL4 v8; // r0@1
  _DWORD *result; // r0@2
  char *v10; // r1@5
  void **v11; // r0@5
  _BYTE *v12; // r2@5
  InputHandler *v13; // r6@9
  int v14; // r0@9
  const void **v15; // r0@9
  unsigned __int64 v16; // kr10_8@10
  int v17; // r0@10

  v3 = a1;
  v4 = a3;
  v5 = (InputHandler *)(*a1 >> 32);
  v6 = a2;
  v7 = ClientInstance::getControllerId((ClientInstance *)*a1);
  v8 = InputHandler::areButtonsDown(v5, v7);
  if ( v4 || (result = (_DWORD *)!v8, result == (_DWORD *)1) )
  {
    if ( v6 == 3 )
    {
      v11 = (void **)((char *)v3 + 20);
      v12 = (_BYTE *)13;
      v10 = "screenVRMouse";
    }
    else if ( v6 == 2 )
      v12 = (_BYTE *)20;
      v10 = "screenGazeController";
    else
      v10 = "screen";
      v12 = (_BYTE *)6;
    sub_119CAD8(v11, v10, v12);
    if ( !ClientInstance::isInGame(*(ClientInstance **)v3) )
      v13 = (InputHandler *)(*v3 >> 32);
      v14 = ClientInstance::getControllerId((ClientInstance *)*v3);
      v15 = InputHandler::getCurrentInputMapping(v13, v14);
      result = (_DWORD *)sub_119C9E8(v15, "gamePadRemappingBinding");
      if ( !result )
        return result;
      v16 = *v3;
      v17 = ClientInstance::getControllerId((ClientInstance *)*v3);
      InputHandler::updateInputMappingWithFlush(SHIDWORD(v16), (int *)v3 + 5, v17);
    result = j_j_j__ZN20ClientInputCallbacks26handleHoloInputModeChangedER14ClientInstance15HoloUIInputMode(
               *(_DWORD *)v3,
               v6);
  }
  return result;
}


void __fastcall ClientInputHandler::updateInputMode(int a1, int a2)
{
  int v2; // r4@1
  void **v3; // r0@2
  _BYTE *v4; // r2@2
  char *v5; // r1@2
  __int64 v6; // kr00_8@11
  int v7; // r2@11

  v2 = a1;
  switch ( a2 )
  {
    case 1:
      v3 = (void **)(a1 + 16);
      v4 = (_BYTE *)15;
      v5 = "gamePlayBoating";
      goto LABEL_9;
    case 2:
      v5 = "gamePlayFlying";
      break;
    case 3:
      sub_119CBA8((void **)(a1 + 16), "screenBed", (_BYTE *)9);
      return;
    case 4:
      v4 = (_BYTE *)16;
      v5 = "gamePlayMinecart";
    case 5:
      v5 = "gamePlayRiding";
    default:
      v5 = "gamePlayNormal";
  }
  v3 = (void **)(a1 + 16);
  v4 = (_BYTE *)14;
LABEL_9:
  sub_119CAD8(v3, v5, v4);
  if ( ClientInstance::isInGame(*(ClientInstance **)v2) == 1
    && ClientInstance::getControllerId(*(ClientInstance **)v2) != -1 )
    v6 = *(_QWORD *)v2;
    v7 = ClientInstance::getControllerId((ClientInstance *)*(_QWORD *)v2);
    j_j_j__ZN12InputHandler18updateInputMappingERKSsi(SHIDWORD(v6), (int *)(v2 + 16), v7);
}


void __fastcall ClientInputHandler::onConfigChanged(ClientInputHandler *this, const Config *a2)
{
  ClientInputHandler::onConfigChanged(this, a2);
}


char *__fastcall ClientInputHandler::getLastGameMode(ClientInputHandler *this)
{
  return (char *)this + 16;
}


int __fastcall ClientInputHandler::canPaddle(ClientInputHandler *this)
{
  int v1; // r0@1
  int v2; // r4@1
  bool v3; // zf@1
  _QWORD *v4; // r5@5
  int result; // r0@6

  v1 = ClientInstance::getLocalPlayer(*(ClientInstance **)this);
  v2 = v1;
  v3 = v1 == 0;
  if ( v1 )
  {
    v1 = *(_DWORD *)(v1 + 512);
    v3 = v1 == 0;
  }
  result = 0;
  if ( !v3 && Entity::hasCategory(v1, 131328) == 1 )
    v4 = *(_QWORD **)(*(_DWORD *)(v2 + 512) + 500);
    if ( *v4 == *(_QWORD *)Entity::getUniqueID((Entity *)v2) )
      result = 1;
  return result;
}


signed int __fastcall ClientInputHandler::getSplitscreenJoinPromptVisible(ClientInputHandler *this)
{
  MinecraftInputHandler *v1; // r0@1

  v1 = (MinecraftInputHandler *)ClientInstance::getMinecraftInput(*(ClientInstance **)this);
  return j_j_j__ZNK21MinecraftInputHandler31getSplitscreenJoinPromptVisibleEv(v1);
}


int __fastcall ClientInputHandler::getCurrentInputMode(ClientInputHandler *this)
{
  InputHandler *v1; // r4@1
  int v2; // r1@1

  v1 = (InputHandler *)(*(_QWORD *)this >> 32);
  v2 = ClientInstance::getControllerId((ClientInstance *)*(_QWORD *)this);
  return j_j_j__ZNK12InputHandler19getCurrentInputModeEi(v1, v2);
}


signed int __fastcall ClientInputHandler::getHoloUIInputMode(ClientInputHandler *this)
{
  const void **v1; // r4@1
  signed int result; // r0@2
  int v3; // r1@5

  v1 = (const void **)((char *)this + 20);
  if ( sub_119C9E8((const void **)this + 5, "screenGazeController") )
  {
    if ( sub_119C9E8(v1, "screen") )
    {
      v3 = sub_119C9E8(v1, "screenVRMouse");
      result = 0;
      if ( !v3 )
        result = 3;
    }
    else
      result = 1;
  }
  else
    result = 2;
  return result;
}


void __fastcall ClientInputHandler::getBoatExitText(ClientInputHandler *this, ClientInstance **a2)
{
  ClientInstance **v2; // r5@1
  void **v3; // r4@1
  int v4; // r0@1
  int v5; // r6@1
  bool v6; // zf@1
  InputHandler *v7; // r5@5
  __int64 v8; // kr00_8@5
  int v9; // r6@5
  int v10; // r0@5
  int v11; // r0@5
  int v12; // r2@5

  v2 = a2;
  v3 = (void **)this;
  v4 = ClientInstance::getLocalPlayer(*a2);
  v5 = v4;
  v6 = v4 == 0;
  if ( v4 )
  {
    v4 = *(_DWORD *)(v4 + 512);
    v6 = v4 == 0;
  }
  if ( v6 || Entity::hasCategory(v4, 131328) != 1 )
    sub_119C884(v3, (const char *)&unk_257BC67);
  else
    v8 = *(_QWORD *)v2;
    v7 = (InputHandler *)(*(_QWORD *)v2 >> 32);
    v9 = *(_DWORD *)(v5 + 512);
    v10 = ClientInstance::getControllerId((ClientInstance *)v8);
    v11 = InputHandler::getCurrentInputMode(v7, v10);
    v12 = 0;
    if ( v11 != 1 )
      v12 = 1;
    Boat::getExitText((Boat *)v3, v9, v12);
}


signed int __fastcall ClientInputHandler::allowPicking(ClientInputHandler *this)
{
  ClientInputHandler *v1; // r4@1
  InputHandler *v2; // r5@1
  int v3; // r0@1
  signed int result; // r0@2

  v1 = this;
  v2 = (InputHandler *)(*(_QWORD *)this >> 32);
  v3 = ClientInstance::getControllerId((ClientInstance *)*(_QWORD *)this);
  if ( InputHandler::getCurrentInputMode(v2, v3) == 2 )
  {
    result = *((_BYTE *)v1 + 27);
    if ( *((_BYTE *)v1 + 27) )
      result = 1;
  }
  else
    result = 1;
  return result;
}


void __fastcall ClientInputHandler::popInputMapping(ClientInputHandler *this, int a2)
{
  ClientInputHandler::popInputMapping(this, a2);
}


int __fastcall ClientInputHandler::_interactWithEntity(ClientInputHandler *this)
{
  Level *v1; // r0@1
  Level *v2; // r4@1
  int result; // r0@3

  v1 = (Level *)ClientInstance::getLevel(*(ClientInstance **)this);
  v2 = v1;
  if ( v1 && *(_DWORD *)Level::getHitResult(v1) == 1 )
    result = *((_DWORD *)Level::getHitResult(v2) + 8);
  else
    result = 0;
  return result;
}


void __fastcall ClientInputHandler::resetPlayerState(ClientInputHandler *this)
{
  ClientInputHandler::resetPlayerState(this);
}


void __fastcall ClientInputHandler::updateInputMapping(ClientInputHandler *this)
{
  ClientInputHandler::updateInputMapping(this);
}


void __fastcall ClientInputHandler::tick(int a1, void *a2, int a3, int a4, int a5)
{
  InputHandler::tick(*(_DWORD *)(a1 + 4), a2, a3, a4, a5);
}


int __fastcall ClientInputHandler::updatePlayerState(ClientInputHandler *this, const LocalPlayer *a2)
{
  ClientInputHandler *v2; // r4@1
  Entity *v3; // r6@1
  char *v4; // r5@1
  int v5; // r7@1
  int v6; // r1@3
  int v7; // r0@6
  char v8; // r2@6
  int result; // r0@8

  v2 = this;
  v3 = a2;
  v4 = (char *)a2 + 4320;
  v5 = Abilities::getBool((int)a2 + 4320, (int **)&Abilities::FLYING);
  if ( *((_BYTE *)v2 + 24) != v5 && !Entity::isRiding(v3) )
  {
    v6 = v5;
    if ( v5 )
      v6 = 2;
    ClientInputHandler::updateInputMode((int)v2, v6);
  }
  *((_BYTE *)v2 + 24) = v5;
  *((_BYTE *)v2 + 25) = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 312))(v3);
  v7 = Mob::getActiveEffectCount(v3);
  v8 = 0;
  if ( v7 > 0 )
    v8 = 1;
  *((_BYTE *)v2 + 28) = v8;
  result = Abilities::getBool((int)v4, (int **)&Abilities::INSTABUILD);
  *((_BYTE *)v2 + 26) = result;
  return result;
}


void __fastcall ClientInputHandler::pushInputMapping(ClientInputHandler *this, int a2)
{
  ClientInputHandler *v2; // r4@1
  int v3; // r5@1
  InputHandler *v4; // r6@1
  int v5; // r0@1
  const void **v6; // r0@1
  int v7; // r0@2
  ClientInstance *v8; // r0@4
  int v9; // r5@4
  int *v10; // r4@4
  int v11; // r0@5
  int v12; // r0@7
  signed int v13; // r0@8
  int v14; // r5@8
  int v15; // r0@9
  void *v16; // r0@9
  unsigned int *v17; // r2@10
  signed int v18; // r1@12
  int v19; // r0@14
  unsigned int *v20; // r2@16
  signed int v21; // r1@18
  int v22; // [sp+4h] [bp-2Ch]@14
  int v23; // [sp+Ch] [bp-24h]@9

  v2 = this;
  v3 = a2;
  v4 = (InputHandler *)(*(_QWORD *)this >> 32);
  v5 = ClientInstance::getControllerId((ClientInstance *)*(_QWORD *)this);
  v6 = InputHandler::getCurrentInputMapping(v4, v5);
  if ( !sub_119C9E8(v6, "screenTextInputOnly") )
  {
    v7 = ClientInstance::getKeyboardManager(*(ClientInstance **)v2);
    (*(void (**)(void))(*(_DWORD *)v7 + 16))();
    ClientInputHandler::updateInputMapping(v2);
  }
  if ( v3 == 1 )
    v9 = *(_QWORD *)v2 >> 32;
    v8 = (ClientInstance *)*(_QWORD *)v2;
    v10 = (int *)((char *)v2 + 16);
LABEL_7:
    v12 = ClientInstance::getControllerId(v8);
    j_j_j__ZN12InputHandler16pushInputMappingERKSsi(v9, v10, v12);
    return;
  v11 = ClientInstance::getHoloInput(*(ClientInstance **)v2);
  if ( (*(int (**)(void))(*(_DWORD *)v11 + 44))() == 1 )
    v10 = (int *)((char *)v2 + 20);
    goto LABEL_7;
  v13 = ClientInstance::isInBedScreen(*(ClientInstance **)v2);
  v14 = *((_DWORD *)v2 + 1);
  if ( v13 == 1 )
    sub_119C884((void **)&v23, "screenBed");
    v15 = ClientInstance::getControllerId(*(ClientInstance **)v2);
    InputHandler::pushInputMapping(v14, &v23, v15);
    v16 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
    {
      v17 = (unsigned int *)(v23 - 4);
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
LABEL_25:
        j_j_j_j_j__ZdlPv_9_1(v16);
        return;
    }
  else
    sub_119C884((void **)&v22, "screen");
    v19 = ClientInstance::getControllerId(*(ClientInstance **)v2);
    InputHandler::pushInputMapping(v14, &v22, v19);
    v16 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v22 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        goto LABEL_25;
}


int __fastcall ClientInputHandler::render(ClientInstance **a1, int a2)
{
  ClientInstance **v2; // r5@1
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r0@1
  int v6; // r4@1
  int v7; // r6@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // r1@11
  void *v11; // r0@11
  void **v13; // [sp+4h] [bp-54h]@1
  __int64 v14; // [sp+1Ch] [bp-3Ch]@1

  v2 = a1;
  v3 = a2;
  v4 = ClientInstance::getTextures(*a1);
  v5 = ClientInstance::getFont(*v2);
  MinecraftInputRenderContext::MinecraftInputRenderContext(&v13, v3, v4, v5);
  InputHandler::render(v2[1], (InputRenderContext *)&v13);
  MinecraftInputRenderContext::render((MinecraftInputRenderContext *)&v13);
  v13 = &off_26D90C8;
  v7 = HIDWORD(v14);
  v6 = v14;
  if ( (_DWORD)v14 != HIDWORD(v14) )
  {
    do
    {
      v10 = *(_DWORD *)(v6 + 32);
      v11 = (void *)(v10 - 12);
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
          j_j_j_j_j__ZdlPv_9_1(v11);
      }
      v6 += 36;
    }
    while ( v6 != v7 );
    v6 = v14;
  }
  if ( v6 )
    operator delete((void *)v6);
  return InputRenderContext::~InputRenderContext((InputRenderContext *)&v13);
}


signed int __fastcall ClientInputHandler::isMovingForward(ClientInputHandler *this)
{
  MoveInputHandler *v1; // r0@1

  v1 = (MoveInputHandler *)ClientInstance::getMoveTurnInput(*(ClientInstance **)this);
  return j_j_j__ZNK16MoveInputHandler15isMovingForwardEv(v1);
}


int __fastcall ClientInputHandler::setInputBindingMode(__int64 *a1)
{
  __int64 v1; // kr00_8@1

  v1 = *a1;
  ClientInstance::getControllerId((ClientInstance *)*a1);
  return j_j_j__ZN12InputHandler19setInputBindingModeE16InputBindingModei(SHIDWORD(v1));
}


void __fastcall ClientInputHandler::pushInputMapping(ClientInputHandler *this, int a2)
{
  ClientInputHandler::pushInputMapping(this, a2);
}


int __fastcall ClientInputHandler::onMobEffectsChanged(ClientInputHandler *this, const MobEffectsLayout *a2)
{
  return j_j_j__ZN20ClientBindingFactory19onMobEffectsChangedERK16MobEffectsLayout(
           *((ClientBindingFactory **)this + 2),
           a2);
}


void __fastcall ClientInputHandler::resetPlayerState(ClientInputHandler *this)
{
  ClientInstance **v1; // r5@1
  int *v2; // r4@1
  __int64 v3; // kr00_8@3
  int v4; // r2@3

  v1 = (ClientInstance **)this;
  v2 = (int *)((char *)this + 16);
  *((_WORD *)this + 12) = 0;
  *((_BYTE *)this + 28) = 0;
  *((_BYTE *)this + 26) = 0;
  sub_119CAD8((void **)this + 4, "gamePlayNormal", (_BYTE *)0xE);
  if ( ClientInstance::isInGame(*v1) == 1 && ClientInstance::getControllerId(*v1) != -1 )
  {
    v3 = *(_QWORD *)v1;
    v4 = ClientInstance::getControllerId((ClientInstance *)*(_QWORD *)v1);
    j_j_j__ZN12InputHandler18updateInputMappingERKSsi(SHIDWORD(v3), v2, v4);
  }
}


void __fastcall ClientInputHandler::popInputMapping(ClientInputHandler *this, int a2)
{
  ClientInputHandler *v2; // r4@1
  int v3; // r5@1
  __int64 v4; // kr00_8@1
  int v5; // r0@1
  __int64 v6; // kr08_8@2
  int v7; // r2@2

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)this;
  v5 = ClientInstance::getControllerId((ClientInstance *)*(_QWORD *)this);
  InputHandler::popInputMapping((InputHandler *)HIDWORD(v4), v5);
  if ( v3 == 1 )
  {
    v6 = *(_QWORD *)v2;
    v7 = ClientInstance::getControllerId((ClientInstance *)*(_QWORD *)v2);
    j_j_j__ZN12InputHandler18updateInputMappingERKSsi(SHIDWORD(v6), (int *)v2 + 4, v7);
  }
}


signed int __fastcall ClientInputHandler::showBoatExit(ClientInputHandler *this)
{
  ClientInstance **v1; // r4@1
  int v2; // r0@2
  bool v3; // zf@2
  signed int result; // r0@6

  v1 = (ClientInstance **)this;
  if ( ClientInputHandler::canInteract(this) )
    goto LABEL_10;
  v2 = ClientInstance::getLocalPlayer(*v1);
  v3 = v2 == 0;
  if ( v2 )
  {
    v2 = *(_DWORD *)(v2 + 512);
    v3 = v2 == 0;
  }
  if ( v3 || !Entity::hasCategory(v2, 131328) )
LABEL_10:
    result = 0;
  else
    result = 1;
  return result;
}


int __fastcall ClientInputHandler::getCursorPos(ClientInputHandler *this, float *a2, float *a3)
{
  ClientInstance **v3; // r6@1
  float *v4; // r4@1
  float *v5; // r5@1
  MinecraftInputHandler *v6; // r0@1

  v3 = (ClientInstance **)this;
  v4 = a3;
  v5 = a2;
  v6 = (MinecraftInputHandler *)ClientInstance::getMinecraftInput(*(ClientInstance **)this);
  return j_j_j__ZNK21MinecraftInputHandler12getCursorPosERfS0_R14ClientInstance(v6, v5, v4, *v3);
}


void __fastcall ClientInputHandler::releaseButtonsAndSticks(ClientInputHandler *this)
{
  ClientInstance **v1; // r4@1
  InputHandler *v2; // r5@1
  int v3; // r0@1
  const void **v4; // r6@1
  int v5; // r2@1

  v1 = (ClientInstance **)this;
  v2 = (InputHandler *)(*(_QWORD *)this >> 32);
  v3 = ClientInstance::getControllerId((ClientInstance *)*(_QWORD *)this);
  v4 = InputHandler::getCurrentInputMapping(v2, v3);
  v5 = ClientInstance::getControllerId(*v1);
  j_j_j__ZN12InputHandler23releaseButtonsAndSticksERKSsi((int)v2, (int)v4, v5);
}


  if ( ClientInputHandler::isSneaking(*(ClientInputHandler **)(v1 + 4)) == 1 )
{
  else
    result = 0;
  return result;
}


  if ( ClientInputHandler::getCurrentInputMode(*(ClientInputHandler **)(_R5 + 64))
{
    && (unsigned int)(ClientInputHandler::getCurrentInputMode(*(ClientInputHandler **)(_R5 + 64)) - 3) <= 1
    && ClientInputHandler::getHoloUIInputMode(*(ClientInputHandler **)(_R5 + 64)) == 2 )
  {
    __asm
    {
      VLDR            S16, [R5,#0x25C]
      VLDR            S18, [R5,#0x260]
    }
    v13 = ClientInputHandler::getCurrentInputMode(*(ClientInputHandler **)(_R5 + 64));
      VCVTR.S32.F32   S0, S16
      VCVTR.S32.F32   S2, S18
    v29 = v13;
    __asm { VMOV            R0, S0 }
    v30 = _R0;
    __asm { VMOV            R0, S2 }
    v31 = _R0;
    v32 = 1;
    (*(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)v2 + 100))(v2, &v29, 0);
  }
  v16 = Minecraft::getLevel(*(Minecraft **)(_R5 + 28));
  v17 = *(ClientInputHandler **)(_R5 + 64);
  v18 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 168))(v2);
  v19 = v16;
  v20 = v18 ^ 1;
  if ( v16 )
    v19 = 1;
  ClientInputHandler::pushInputMapping(v17, v19 & v20);
  if ( ((*(int (__fastcall **)(int))(*(_DWORD *)v2 + 172))(v2)
     || (*(int (**)(void))(**(_DWORD **)(_R5 + 52) + 280))() == 1)
    && !(*(int (**)(void))(**(_DWORD **)(_R5 + 52) + 316))() )
    if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(_R5 + 24)) == _R5 )
      MinecraftGame::grabMouse(*(MinecraftGame **)(_R5 + 24));
  else if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(_R5 + 24)) == _R5 )
    MinecraftGame::releaseMouse(*(MinecraftGame **)(_R5 + 24));
  if ( v16 && MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(_R5 + 24)) == _R5 )
    v21 = (Level *)Minecraft::getLevel(*(Minecraft **)(_R5 + 28));
    Level::saveGameData(v21);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 244))(v2) == 1 )
    v22 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 236))(v2);
    v23 = MinecraftGame::getEventing(*(MinecraftGame **)(_R5 + 24));
    v28 = ClientInstance::getUserId((ClientInstance *)_R5);
    (*(void (__fastcall **)(int *, int))(*(_DWORD *)v2 + 228))(&v27, v2);
    MinecraftEventing::fireEventScreenChanged(v23, (unsigned int *)&v28, (const char **)&v27, v22);
    v24 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v27 - 4);
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
        j_j_j_j_j__ZdlPv_9(v24);
}


_BOOL4 __fastcall ClientInputHandler::hasToast(ClientInputHandler *this)
{
  ToastManager *v1; // r0@1

  v1 = (ToastManager *)ClientInstance::getToastManager(*(ClientInstance **)this);
  return ToastManager::getCurrentToast(v1) != 0;
}


void __fastcall ClientInputHandler::updateInputMode(int a1, int a2)
{
  ClientInputHandler::updateInputMode(a1, a2);
}


void __fastcall ClientInputHandler::releaseButtonsAndSticks(ClientInputHandler *this)
{
  ClientInputHandler::releaseButtonsAndSticks(this);
}


signed int __fastcall ClientInputHandler::allowInteract(ClientInputHandler *this)
{
  return 1;
}


char *__fastcall ClientInputHandler::getLastHoloUIMode(ClientInputHandler *this)
{
  return (char *)this + 20;
}


ItemInstance *__fastcall ClientInputHandler::_interactWithItem(ClientInputHandler *this)
{
  Player *v1; // r0@1
  ItemInstance *v2; // r4@2
  bool v3; // zf@4

  v1 = (Player *)ClientInstance::getLocalPlayer(*(ClientInstance **)this);
  if ( v1 )
    v2 = (ItemInstance *)Player::getSelectedItem(v1);
  else
    v2 = (ItemInstance *)&ItemInstance::EMPTY_ITEM;
  v3 = *((_BYTE *)v2 + 15) == 0;
  if ( *((_BYTE *)v2 + 15) )
    v3 = *(_DWORD *)v2 == 0;
  if ( v3 || ItemInstance::isNull(v2) || !*((_BYTE *)v2 + 14) || !(*(int (**)(void))(**(_DWORD **)v2 + 120))() )
  return v2;
}
