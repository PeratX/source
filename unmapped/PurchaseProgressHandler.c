

void __fastcall PurchaseProgressHandler::getProgressMessage(PurchaseProgressHandler *this, MinecraftScreenModel *a2)
{
  int *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v2 = (int *)this;
  sub_DA7364((void **)&v6, "store.popup.purchaseInProgress.msg");
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


signed int __fastcall PurchaseProgressHandler::getLoadingState(PurchaseProgressHandler *this, MinecraftScreenModel *a2)
{
  return 0x100000;
}


void __fastcall PurchaseProgressHandler::getTitleText(PurchaseProgressHandler *this, int a2)
{
  PurchaseProgressHandler::getTitleText(this, a2);
}


void __fastcall PurchaseProgressHandler::getProgressMessage(PurchaseProgressHandler *this, MinecraftScreenModel *a2)
{
  PurchaseProgressHandler::getProgressMessage(this, a2);
}


PurchaseProgressHandler *__fastcall PurchaseProgressHandler::~PurchaseProgressHandler(PurchaseProgressHandler *this)
{
  PurchaseProgressHandler *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26D77D8;
  v2 = (void (*)(void))*((_DWORD *)this + 5);
  if ( v2 )
    v2();
  return v1;
}


int __fastcall PurchaseProgressHandler::tick(int result, MinecraftScreenModel *a2)
{
  if ( *(_DWORD *)(result + 20) )
    result = (*(int (__fastcall **)(_DWORD))(result + 24))(result + 12);
  return result;
}


void __fastcall PurchaseProgressHandler::~PurchaseProgressHandler(PurchaseProgressHandler *this)
{
  PurchaseProgressHandler::~PurchaseProgressHandler(this);
}


int __fastcall PurchaseProgressHandler::PurchaseProgressHandler(int a1, int a2, char a3)
{
  int v3; // r4@1
  int v4; // r6@1
  char v5; // r5@1
  void (__fastcall *v6)(int, int, signed int); // r3@1

  v3 = a1;
  v4 = a2;
  *(_DWORD *)(a1 + 4) = 12;
  v5 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = &off_26D77D8;
  *(_DWORD *)(a1 + 20) = 0;
  v6 = *(void (__fastcall **)(int, int, signed int))(a2 + 8);
  if ( v6 )
  {
    v6(a1 + 12, a2, 2);
    *(_DWORD *)(v3 + 24) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v3 + 20) = *(_DWORD *)(v4 + 8);
  }
  *(_BYTE *)(v3 + 28) = v5;
  return v3;
}


void __fastcall PurchaseProgressHandler::~PurchaseProgressHandler(PurchaseProgressHandler *this)
{
  PurchaseProgressHandler *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26D77D8;
  v2 = (void (*)(void))*((_DWORD *)this + 5);
  if ( v2 )
    v2();
  j_j_j__ZdlPv_3((void *)v1);
}


void __fastcall PurchaseProgressHandler::getTitleText(PurchaseProgressHandler *this, int a2)
{
  int *v2; // r4@1
  void *v3; // r0@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@2

  v2 = (int *)this;
  if ( *(_BYTE *)(a2 + 28) )
  {
    sub_DA7364((void **)&v6, "store.popup.purchaseInProgress.title");
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
  else
    sub_DA73B4((int *)this, (int *)&Util::EMPTY_STRING);
}
