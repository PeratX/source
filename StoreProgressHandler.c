

StoreProgressHandler *__fastcall StoreProgressHandler::~StoreProgressHandler(StoreProgressHandler *this)
{
  StoreProgressHandler *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  void (*v5)(void); // r3@4
  unsigned int *v7; // r12@7
  signed int v8; // r1@9

  v1 = this;
  *(_DWORD *)this = &off_26D773C;
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


void __fastcall StoreProgressHandler::getProgressMessage(StoreProgressHandler *this, MinecraftScreenModel *a2)
{
  StoreProgressHandler::getProgressMessage(this, a2);
}


void __fastcall StoreProgressHandler::~StoreProgressHandler(StoreProgressHandler *this)
{
  StoreProgressHandler::~StoreProgressHandler(this);
}


int __fastcall StoreProgressHandler::tick(int result, MinecraftScreenModel *a2)
{
  if ( *(_DWORD *)(result + 20) )
    result = (*(int (__fastcall **)(_DWORD))(result + 24))(result + 12);
  return result;
}


int __fastcall StoreProgressHandler::onCancel(int result, MinecraftScreenModel *a2)
{
  if ( *(_DWORD *)(result + 36) )
    result = (*(int (__fastcall **)(_DWORD))(result + 40))(result + 28);
  return result;
}


void __fastcall StoreProgressHandler::~StoreProgressHandler(StoreProgressHandler *this)
{
  StoreProgressHandler *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  void (*v5)(void); // r3@4
  unsigned int *v6; // r12@7
  signed int v7; // r1@9

  v1 = this;
  *(_DWORD *)this = &off_26D773C;
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


signed int __fastcall StoreProgressHandler::getLoadingState(StoreProgressHandler *this, MinecraftScreenModel *a2)
{
  return 0x40000000;
}


void __fastcall StoreProgressHandler::getProgressMessage(StoreProgressHandler *this, MinecraftScreenModel *a2)
{
  int *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v2 = (int *)this;
  sub_DA7364((void **)&v6, "progressScreen.message.waitingForStoreProducts");
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


int __fastcall StoreProgressHandler::StoreProgressHandler(int a1, int *a2, int a3, int a4)
{
  int v4; // r5@1
  int *v5; // r9@1
  int v6; // r4@1
  int v7; // r7@1
  void (__fastcall *v8)(int, int, signed int); // r3@1
  void (__fastcall *v9)(int, int, signed int); // r3@3

  v4 = a1;
  v5 = a2;
  *(_DWORD *)(a1 + 4) = 11;
  v6 = a3;
  v7 = a4;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = &off_26D773C;
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
