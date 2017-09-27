

void __fastcall GamepadDisconnectScreenController::~GamepadDisconnectScreenController(GamepadDisconnectScreenController *this)
{
  ScreenController *v1; // r0@1

  v1 = MinecraftScreenController::~MinecraftScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall GamepadDisconnectScreenController::_showGamepadDisconnectPopup(GamepadDisconnectScreenController *this)
{
  GamepadDisconnectScreenController *v1; // r4@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  _QWORD *v5; // r0@7
  unsigned int *v6; // r1@8
  unsigned int v7; // r2@10
  __int64 v8; // r1@13
  unsigned int *v9; // r1@16
  unsigned int v10; // r0@18
  void *v11; // r0@23
  void *v12; // r0@24
  int result; // r0@25
  unsigned int *v14; // r2@26
  unsigned int v15; // r1@28
  unsigned int *v16; // r2@34
  signed int v17; // r1@36
  unsigned int *v18; // r2@38
  signed int v19; // r1@40
  _QWORD *v20; // [sp+4h] [bp-3Ch]@13
  void (*v21)(void); // [sp+Ch] [bp-34h]@7
  int v22; // [sp+18h] [bp-28h]@1
  int v23; // [sp+20h] [bp-20h]@1
  char v24; // [sp+24h] [bp-1Ch]@1
  int v25; // [sp+28h] [bp-18h]@1

  v1 = this;
  MinecraftScreenController::_getWeakPtrToThis<GamepadDisconnectScreenController>((int)&v24, (int)this);
  sub_1590164((void **)&v23, "gamepad_disconnect");
  sub_1590164((void **)&v22, "gamepad_disconnect.reconnectController");
  v2 = *(_QWORD *)&v24;
  if ( v25 )
  {
    v3 = (unsigned int *)(v25 + 8);
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
  v21 = 0;
  v5 = operator new(8u);
  *v5 = v2;
  if ( HIDWORD(v2) )
    v6 = (unsigned int *)(HIDWORD(v2) + 8);
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
      ++*v6;
  LODWORD(v8) = sub_11A2FC8;
  v20 = v5;
  HIDWORD(v8) = sub_11A2E8C;
  *(_QWORD *)&v21 = v8;
  MinecraftScreenController::_displayStandardModalPopup((int)v1, &v23, &v22, 3, (int)&v20);
  if ( v21 )
    v21();
    v9 = (unsigned int *)(HIDWORD(v2) + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  v11 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v22 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v11);
  v12 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v23 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v12);
  result = v25;
    v14 = (unsigned int *)(v25 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


_DWORD *__fastcall GamepadDisconnectScreenController::GamepadDisconnectScreenController(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r5@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r0@10
  unsigned int *v9; // r6@14
  unsigned int v10; // r0@16
  _DWORD *v11; // r0@21
  __int64 v12; // r1@21
  _DWORD *v14; // [sp+0h] [bp-28h]@21
  __int64 v15; // [sp+8h] [bp-20h]@21
  int v16; // [sp+10h] [bp-18h]@1
  int v17; // [sp+14h] [bp-14h]@1

  v2 = a1;
  v16 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v17 = v3;
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
  MinecraftScreenController::MinecraftScreenController((int)v2, (MinecraftScreenModel **)&v16);
  v6 = v17;
  if ( v17 )
    v7 = (unsigned int *)(v17 + 4);
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
  *v2 = &off_26E1F88;
  v11 = operator new(4u);
  LODWORD(v12) = sub_11A2E56;
  *v11 = v2;
  HIDWORD(v12) = sub_11A2E3A;
  v14 = v11;
  v15 = v12;
  ScreenController::registerInputModechangedEventHandler((int)v2, (int)&v14);
  if ( (_DWORD)v15 )
    ((void (*)(void))v15)();
  return v2;
}


void __fastcall GamepadDisconnectScreenController::~GamepadDisconnectScreenController(GamepadDisconnectScreenController *this)
{
  GamepadDisconnectScreenController::~GamepadDisconnectScreenController(this);
}


signed int __fastcall GamepadDisconnectScreenController::screenHandlesGamepadMenuButton(GamepadDisconnectScreenController *this)
{
  return 1;
}


int *__fastcall GamepadDisconnectScreenController::onOpen(GamepadDisconnectScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r1@1
  __int64 v3; // r2@1

  v1 = this;
  GamepadDisconnectScreenController::_showGamepadDisconnectPopup(this);
  return j_j_j__ZN16ScreenController6onOpenEv_0(v1, v2, v3);
}


int __fastcall GamepadDisconnectScreenController::tick(GamepadDisconnectScreenController *this)
{
  GamepadDisconnectScreenController *v1; // r4@1

  v1 = this;
  if ( MinecraftScreenModel::isControllerConnected(*((MinecraftScreenModel **)this + 95)) == 1 )
    MinecraftScreenModel::leaveScreen(*((MinecraftScreenModel **)v1 + 95));
  return 0;
}
