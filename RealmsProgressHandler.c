

int __fastcall RealmsProgressHandler::onCancel(int result, MinecraftScreenModel *a2)
{
  if ( *(_DWORD *)(result + 52) )
    result = (*(int (__fastcall **)(_DWORD))(result + 56))(result + 44);
  return result;
}


void __fastcall RealmsProgressHandler::~RealmsProgressHandler(RealmsProgressHandler *this)
{
  RealmsProgressHandler *v1; // r0@1

  v1 = RealmsProgressHandler::~RealmsProgressHandler(this);
  j_j_j__ZdlPv_3((void *)v1);
}


void __fastcall RealmsProgressHandler::~RealmsProgressHandler(RealmsProgressHandler *this)
{
  RealmsProgressHandler::~RealmsProgressHandler(this);
}


void __fastcall RealmsProgressHandler::getProgressMessage(RealmsProgressHandler *this, MinecraftScreenModel *a2)
{
  RealmsProgressHandler::getProgressMessage(this, a2);
}


int __fastcall RealmsProgressHandler::RealmsProgressHandler(int a1, int *a2, int a3, int a4, int a5)
{
  int v5; // r5@1
  int *v6; // r10@1
  int v7; // r6@1
  int v8; // r4@1
  void (__fastcall *v9)(int, int, signed int); // r3@1
  void (__fastcall *v10)(int, int, signed int); // r3@3
  void (__fastcall *v11)(int, int, signed int); // r3@5

  v5 = a1;
  v6 = a2;
  *(_DWORD *)(a1 + 4) = 7;
  v7 = a3;
  v8 = a4;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = &off_26D7568;
  *(_DWORD *)(a1 + 20) = 0;
  v9 = *(void (__fastcall **)(int, int, signed int))(a3 + 8);
  if ( v9 )
  {
    v9(a1 + 12, a3, 2);
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v5 + 20) = *(_DWORD *)(v7 + 8);
  }
  *(_DWORD *)(v5 + 36) = 0;
  v10 = *(void (__fastcall **)(int, int, signed int))(v8 + 8);
  if ( v10 )
    v10(v5 + 28, v8, 2);
    *(_DWORD *)(v5 + 40) = *(_DWORD *)(v8 + 12);
    *(_DWORD *)(v5 + 36) = *(_DWORD *)(v8 + 8);
  *(_DWORD *)(v5 + 52) = 0;
  v11 = *(void (__fastcall **)(int, int, signed int))(a5 + 8);
  if ( v11 )
    v11(v5 + 44, a5, 2);
    *(_DWORD *)(v5 + 56) = *(_DWORD *)(a5 + 12);
    *(_DWORD *)(v5 + 52) = *(_DWORD *)(a5 + 8);
  sub_DA73B4((int *)(v5 + 60), v6);
  return v5;
}


int __fastcall RealmsProgressHandler::tick(int result, MinecraftScreenModel *a2)
{
  if ( *(_DWORD *)(result + 36) )
    result = (*(int (__fastcall **)(_DWORD))(result + 40))(result + 28);
  return result;
}


int __fastcall RealmsProgressHandler::onStart(int result, MinecraftScreenModel *a2)
{
  if ( *(_DWORD *)(result + 20) )
    result = (*(int (__fastcall **)(_DWORD))(result + 24))(result + 12);
  return result;
}


void __fastcall RealmsProgressHandler::getProgressMessage(RealmsProgressHandler *this, MinecraftScreenModel *a2)
{
  int *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v2 = (int *)this;
  sub_DA7364((void **)&v6, "progressScreen.message.waitingForRealms");
  I18n::get(v2, (int **)&v6);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
}


RealmsProgressHandler *__fastcall RealmsProgressHandler::~RealmsProgressHandler(RealmsProgressHandler *this)
{
  RealmsProgressHandler *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  void (*v5)(void); // r3@4
  void (*v6)(void); // r3@6
  unsigned int *v8; // r12@9
  signed int v9; // r1@11

  v1 = this;
  *(_DWORD *)this = &off_26D7568;
  v2 = *((_DWORD *)this + 15);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void (*)(void))*((_DWORD *)v1 + 13);
  if ( v4 )
    v4();
  v5 = (void (*)(void))*((_DWORD *)v1 + 9);
  if ( v5 )
    v5();
  v6 = (void (*)(void))*((_DWORD *)v1 + 5);
  if ( v6 )
    v6();
  return v1;
}


signed int __fastcall RealmsProgressHandler::getLoadingState(RealmsProgressHandler *this, MinecraftScreenModel *a2)
{
  return 1073741832;
}


int __fastcall RealmsProgressHandler::onExit(RealmsProgressHandler *this, MinecraftScreenModel *a2)
{
  MinecraftScreenModel *v2; // r4@1

  v2 = a2;
  MinecraftScreenModel::abortAllRealmsRequests(a2);
  return j_j_j__ZN20MinecraftScreenModel11leaveScreenEv(v2);
}
