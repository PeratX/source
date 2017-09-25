

int __fastcall GlobalPauseScreenController::GlobalPauseScreenController(int a1, int a2)
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
  int v11; // r5@21
  _DWORD *v12; // r0@21
  __int64 v13; // r1@21
  void *v14; // r0@23
  unsigned int *v16; // r2@25
  signed int v17; // r1@27
  _DWORD *v18; // [sp+4h] [bp-34h]@21
  __int64 v19; // [sp+Ch] [bp-2Ch]@21
  int v20; // [sp+18h] [bp-20h]@21
  int v21; // [sp+1Ch] [bp-1Ch]@1
  int v22; // [sp+20h] [bp-18h]@1

  v2 = a1;
  v21 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v22 = v3;
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
  ClientInstanceScreenController::ClientInstanceScreenController(v2, (int)&v21);
  v6 = v22;
  if ( v22 )
    v7 = (unsigned int *)(v22 + 4);
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
  *(_DWORD *)v2 = &off_26E2014;
  MinecraftScreenModel::setSimPaused(*(MinecraftScreenModel **)(v2 + 424), 1);
  sub_1590164((void **)&v20, "button.menu_quit");
  v11 = MinecraftScreenController::_getNameId((ScreenController *)v2, (int **)&v20);
  v12 = operator new(4u);
  LODWORD(v13) = sub_11A3380;
  *v12 = v2;
  HIDWORD(v13) = sub_11A336C;
  v18 = v12;
  v19 = v13;
  ScreenController::registerButtonClickHandler(v2, v11, (int)&v18);
  if ( (_DWORD)v19 )
    ((void (*)(void))v19)();
  v14 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v20 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_2(v14);
  return v2;
}


void __fastcall GlobalPauseScreenController::~GlobalPauseScreenController(GlobalPauseScreenController *this)
{
  ClientInstanceScreenController *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E2014;
  MinecraftScreenModel::setSimPaused(*((MinecraftScreenModel **)this + 106), 0);
  ClientInstanceScreenController::~ClientInstanceScreenController(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


ScreenController *__fastcall GlobalPauseScreenController::~GlobalPauseScreenController(GlobalPauseScreenController *this)
{
  ClientInstanceScreenController *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E2014;
  MinecraftScreenModel::setSimPaused(*((MinecraftScreenModel **)this + 106), 0);
  return j_j_j__ZN30ClientInstanceScreenControllerD2Ev(v1);
}


void __fastcall GlobalPauseScreenController::~GlobalPauseScreenController(GlobalPauseScreenController *this)
{
  GlobalPauseScreenController::~GlobalPauseScreenController(this);
}


int __fastcall GlobalPauseScreenController::tick(GlobalPauseScreenController *this)
{
  GlobalPauseScreenController *v1; // r4@1
  int v2; // r5@1

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  if ( !MinecraftScreenModel::getSimPaused(*((MinecraftScreenModel **)v1 + 106)) )
    (*(void (__fastcall **)(GlobalPauseScreenController *))(*(_DWORD *)v1 + 24))(v1);
  return v2;
}
