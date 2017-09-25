

void __fastcall SearchingForSessionProgressHandler::onExit(SearchingForSessionProgressHandler *this, MinecraftScreenModel *a2)
{
  MinecraftScreenModel *v2; // r4@1
  void *v3; // r0@1
  void *v4; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  int v9; // [sp+4h] [bp-2Ch]@1
  int v10; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  MinecraftScreenModel::cancelJoinGame((int)a2, 32);
  MinecraftScreenModel::leaveScreen(v2);
  sub_DA7364((void **)&v10, "disconnectionScreen.cantConnect");
  sub_DA7364((void **)&v9, (const char *)&unk_257BC67);
  MinecraftScreenModel::navigateToDisconnectScreen((int)v2, &v10, &v9);
  v3 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v9 - 4);
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
  v4 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v10 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9(v4);
}


int __fastcall SearchingForSessionProgressHandler::SearchingForSessionProgressHandler(int result)
{
  *(_DWORD *)(result + 4) = 2;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)result = &off_26D7638;
  return result;
}


signed int __fastcall SearchingForSessionProgressHandler::getLoadingState(SearchingForSessionProgressHandler *this, MinecraftScreenModel *a2)
{
  int v2; // r0@1
  signed int v3; // r1@1

  v2 = MinecraftScreenModel::getIsWaitingForSession(a2);
  v3 = 16;
  if ( v2 )
    v3 = 0x40000000;
  return v3;
}


void __fastcall SearchingForSessionProgressHandler::onExit(SearchingForSessionProgressHandler *this, MinecraftScreenModel *a2)
{
  SearchingForSessionProgressHandler::onExit(this, a2);
}
