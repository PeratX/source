

void __fastcall RealmsLoadingLevelProgressHandler::~RealmsLoadingLevelProgressHandler(RealmsLoadingLevelProgressHandler *this)
{
  RealmsLoadingLevelProgressHandler *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  void (*v5)(void); // r3@4
  unsigned int *v6; // r12@7
  signed int v7; // r1@9

  v1 = this;
  *(_DWORD *)this = &off_26D75D0;
  v2 = *((_DWORD *)this + 11);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void (*)(void))*((_DWORD *)v1 + 9);
  if ( v4 )
    v4();
  v5 = (void (*)(void))*((_DWORD *)v1 + 5);
  if ( v5 )
    v5();
  operator delete((void *)v1);
}


int __fastcall RealmsLoadingLevelProgressHandler::getLoadingState(RealmsLoadingLevelProgressHandler *this, MinecraftScreenModel *a2)
{
  int result; // r0@1

  result = MinecraftScreenModel::getWorldLoadingState(a2);
  if ( !result )
    result = 1073741832;
  return result;
}


int __fastcall RealmsLoadingLevelProgressHandler::tick(int result, MinecraftScreenModel *a2)
{
  if ( *(_DWORD *)(result + 20) )
    result = (*(int (__fastcall **)(_DWORD))(result + 24))(result + 12);
  return result;
}


int __fastcall RealmsLoadingLevelProgressHandler::onCancel(RealmsLoadingLevelProgressHandler *this, MinecraftScreenModel *a2)
{
  int result; // r0@2

  if ( *((_DWORD *)this + 9) )
    result = (*((int (__fastcall **)(_DWORD))this + 10))((char *)this + 28);
  else
    result = j_j_j__ZN20MinecraftScreenModel14cancelJoinGameE12LoadingState((int)a2, 8);
  return result;
}


void __fastcall RealmsLoadingLevelProgressHandler::~RealmsLoadingLevelProgressHandler(RealmsLoadingLevelProgressHandler *this)
{
  RealmsLoadingLevelProgressHandler::~RealmsLoadingLevelProgressHandler(this);
}


void __fastcall RealmsLoadingLevelProgressHandler::getProgressMessage(RealmsLoadingLevelProgressHandler *this, MinecraftScreenModel *a2, int a3)
{
  int *v3; // r4@1
  int v4; // r0@1
  void *v5; // r0@4
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  int v8; // [sp+8h] [bp-28h]@14
  int v9; // [sp+10h] [bp-20h]@9
  int v10; // [sp+18h] [bp-18h]@4

  v3 = (int *)this;
  v4 = (*(int (__fastcall **)(MinecraftScreenModel *, int))(*(_DWORD *)a2 + 24))(a2, a3);
  if ( v4 != 2 )
  {
    if ( v4 == 16 )
    {
      sub_DA7364((void **)&v9, "progressScreen.message.done");
      I18n::get(v3, (int **)&v9);
      v5 = (void *)(v9 - 12);
      if ( (int *)(v9 - 12) == &dword_28898C0 )
        return;
      v6 = (unsigned int *)(v9 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
        goto LABEL_20;
      }
      goto LABEL_19;
    }
    if ( v4 != 4 )
      sub_DA7364((void **)&v8, "progressScreen.message.waitingForRealms");
      I18n::get(v3, (int **)&v8);
      v5 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) == &dword_28898C0 )
      v6 = (unsigned int *)(v8 - 4);
  }
  sub_DA7364((void **)&v10, "progressScreen.message.building");
  I18n::get(v3, (int **)&v10);
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) == &dword_28898C0 )
    return;
  v6 = (unsigned int *)(v10 - 4);
  if ( &pthread_create )
    __dmb();
    do
      v7 = __ldrex(v6);
    while ( __strex(v7 - 1, v6) );
    goto LABEL_20;
LABEL_19:
  v7 = (*v6)--;
LABEL_20:
  if ( v7 <= 0 )
    j_j_j_j_j__ZdlPv_9(v5);
}


void __fastcall RealmsLoadingLevelProgressHandler::getProgressMessage(RealmsLoadingLevelProgressHandler *this, MinecraftScreenModel *a2, int a3)
{
  RealmsLoadingLevelProgressHandler::getProgressMessage(this, a2, a3);
}


int __fastcall RealmsLoadingLevelProgressHandler::onExit(RealmsLoadingLevelProgressHandler *this, MinecraftScreenModel *a2)
{
  MinecraftScreenModel *v2; // r4@1

  v2 = a2;
  MinecraftScreenModel::abortAllRealmsRequests(a2);
  return j_j_j__ZN20MinecraftScreenModel11leaveScreenEv(v2);
}


int __fastcall RealmsLoadingLevelProgressHandler::RealmsLoadingLevelProgressHandler(int a1, int *a2, int a3, int a4)
{
  int v4; // r5@1
  int *v5; // r9@1
  int v6; // r4@1
  int v7; // r7@1
  void (__fastcall *v8)(int, int, signed int); // r3@1
  void (__fastcall *v9)(int, int, signed int); // r3@3

  v4 = a1;
  v5 = a2;
  *(_DWORD *)(a1 + 4) = 9;
  v6 = a3;
  v7 = a4;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = &off_26D75D0;
  *(_DWORD *)(a1 + 20) = 0;
  v8 = *(void (__fastcall **)(int, int, signed int))(a3 + 8);
  if ( v8 )
  {
    v8(a1 + 12, a3, 2);
    *(_DWORD *)(v4 + 24) = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v4 + 20) = *(_DWORD *)(v6 + 8);
  }
  *(_DWORD *)(v4 + 36) = 0;
  v9 = *(void (__fastcall **)(int, int, signed int))(v7 + 8);
  if ( v9 )
    v9(v4 + 28, v7, 2);
    *(_DWORD *)(v4 + 40) = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v4 + 36) = *(_DWORD *)(v7 + 8);
  sub_DA73B4((int *)(v4 + 44), v5);
  return v4;
}


RealmsLoadingLevelProgressHandler *__fastcall RealmsLoadingLevelProgressHandler::~RealmsLoadingLevelProgressHandler(RealmsLoadingLevelProgressHandler *this)
{
  RealmsLoadingLevelProgressHandler *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  void (*v5)(void); // r3@4
  unsigned int *v7; // r12@7
  signed int v8; // r1@9

  v1 = this;
  *(_DWORD *)this = &off_26D75D0;
  v2 = *((_DWORD *)this + 11);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void (*)(void))*((_DWORD *)v1 + 9);
  if ( v4 )
    v4();
  v5 = (void (*)(void))*((_DWORD *)v1 + 5);
  if ( v5 )
    v5();
  return v1;
}
