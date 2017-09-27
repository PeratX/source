

void __fastcall LeaveLevelProgressHandler::~LeaveLevelProgressHandler(LeaveLevelProgressHandler *this)
{
  LeaveLevelProgressHandler::~LeaveLevelProgressHandler(this);
}


void __fastcall LeaveLevelProgressHandler::getProgressMessage(LeaveLevelProgressHandler *this, MinecraftScreenModel *a2)
{
  int *v2; // r4@1
  void *v3; // r0@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@9
  signed int v7; // r1@11
  int v8; // [sp+4h] [bp-2Ch]@7
  int v9; // [sp+Ch] [bp-24h]@2

  v2 = (int *)this;
  if ( *((_DWORD *)a2 + 6) == 0x4000 )
  {
    sub_DA7364((void **)&v9, "progressScreen.message.leaveLevel");
    I18n::get(v2, (int **)&v9);
    v3 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v9 - 4);
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
LABEL_18:
        j_j_j_j_j__ZdlPv_9(v3);
        return;
    }
  }
  else
    sub_DA7364((void **)&v8, "progressScreen.message.done");
    I18n::get(v2, (int **)&v8);
    v3 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
      v6 = (unsigned int *)(v8 - 4);
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
        v7 = (*v6)--;
      if ( v7 <= 0 )
        goto LABEL_18;
}


signed int __fastcall LeaveLevelProgressHandler::getLoadingState(LeaveLevelProgressHandler *this, MinecraftScreenModel *a2)
{
  signed int v2; // r0@1
  signed int v3; // r1@1

  v2 = MinecraftScreenModel::isLeaveGameDone(a2);
  v3 = 0x4000;
  if ( v2 )
    v3 = 16;
  return v3;
}


void __fastcall LeaveLevelProgressHandler::getProgressMessage(LeaveLevelProgressHandler *this, MinecraftScreenModel *a2)
{
  LeaveLevelProgressHandler::getProgressMessage(this, a2);
}


int __fastcall LeaveLevelProgressHandler::getLoadingProgress(LeaveLevelProgressHandler *this, MinecraftScreenModel *a2)
{
  return 0;
}


LeaveLevelProgressHandler *__fastcall LeaveLevelProgressHandler::~LeaveLevelProgressHandler(LeaveLevelProgressHandler *this)
{
  LeaveLevelProgressHandler *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26D7840;
  v2 = *((_DWORD *)this + 5);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


void __fastcall LeaveLevelProgressHandler::~LeaveLevelProgressHandler(LeaveLevelProgressHandler *this)
{
  LeaveLevelProgressHandler *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26D7840;
  v2 = *((_DWORD *)this + 5);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
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
  operator delete((void *)v1);
}


int __fastcall LeaveLevelProgressHandler::LeaveLevelProgressHandler(int result)
{
  *(_DWORD *)(result + 4) = 16;
  *(_DWORD *)result = &off_26D7840;
  *(_BYTE *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = &unk_28898CC;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 24) = 0x4000;
  return result;
}
