

WorldGenerationProgressHandler *__fastcall WorldGenerationProgressHandler::~WorldGenerationProgressHandler(WorldGenerationProgressHandler *this)
{
  WorldGenerationProgressHandler *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26D7498;
  v2 = (void (*)(void))*((_DWORD *)this + 6);
  if ( v2 )
    v2();
  return v1;
}


int __fastcall WorldGenerationProgressHandler::WorldGenerationProgressHandler(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  void (__fastcall *v6)(int, int, signed int); // r3@1

  v3 = a1;
  v4 = a2;
  *(_DWORD *)(a1 + 4) = 5;
  v5 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = &off_26D7498;
  *(_BYTE *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 24) = 0;
  v6 = *(void (__fastcall **)(int, int, signed int))(a3 + 8);
  if ( v6 )
  {
    v6(a1 + 16, a3, 2);
    *(_DWORD *)(v3 + 28) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v3 + 24) = *(_DWORD *)(v5 + 8);
  }
  if ( v4 == 1 )
    *(_DWORD *)(v3 + 8) = 2;
  return v3;
}


void __fastcall WorldGenerationProgressHandler::getProgressMessage(WorldGenerationProgressHandler *this, MinecraftScreenModel *a2, int a3)
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
      sub_DA7364((void **)&v8, "progressScreen.message.locating");
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


int __fastcall WorldGenerationProgressHandler::onExit(WorldGenerationProgressHandler *this, MinecraftScreenModel *a2)
{
  MinecraftScreenModel *v2; // r4@1
  int v3; // r1@1

  v2 = a2;
  v3 = (*(int (**)(void))(*(_DWORD *)this + 24))();
  return j_j_j__ZN20MinecraftScreenModel14cancelJoinGameE12LoadingState((int)v2, v3);
}


void __fastcall WorldGenerationProgressHandler::getProgressMessage(WorldGenerationProgressHandler *this, MinecraftScreenModel *a2, int a3)
{
  WorldGenerationProgressHandler::getProgressMessage(this, a2, a3);
}


void __fastcall WorldGenerationProgressHandler::~WorldGenerationProgressHandler(WorldGenerationProgressHandler *this)
{
  WorldGenerationProgressHandler::~WorldGenerationProgressHandler(this);
}


signed int __fastcall WorldGenerationProgressHandler::getLoadingState(WorldGenerationProgressHandler *this, MinecraftScreenModel *a2)
{
  MinecraftScreenModel *v2; // r6@1
  WorldGenerationProgressHandler *v3; // r4@1
  int v4; // r0@1
  signed int v5; // r5@1
  signed int result; // r0@7

  v2 = a2;
  v3 = this;
  v4 = MinecraftScreenModel::getWorldLoadingState(a2);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 == 16 && MinecraftScreenModel::isUPnPCompleted(v2) != 1 )
      v5 = 2;
    if ( !*((_BYTE *)v3 + 12) )
      v5 |= 0x40000000u;
    result = v5;
  }
  else
    result = 2;
      result = 1073741952;
  return result;
}


void __fastcall WorldGenerationProgressHandler::~WorldGenerationProgressHandler(WorldGenerationProgressHandler *this)
{
  WorldGenerationProgressHandler *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_26D7498;
  v2 = (void (*)(void))*((_DWORD *)this + 6);
  if ( v2 )
    v2();
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall WorldGenerationProgressHandler::onStart(int result, MinecraftScreenModel *a2)
{
  if ( *(_DWORD *)(result + 24) )
    result = (*(int (__fastcall **)(_DWORD))(result + 28))(result + 16);
  return result;
}
