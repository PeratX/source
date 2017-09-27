

int __fastcall GameSession::GameSession(int a1, int a2, NetEventCallback **a3, int a4, int a5)
{
  int v5; // r4@1
  NetEventCallback *v6; // r1@1

  v5 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v6 = *a3;
  *a3 = 0;
  *(_DWORD *)(a1 + 12) = v6;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = a4;
  *(_BYTE *)(a1 + 24) = a5;
  j_NetworkHandler::registerClientInstance(*(NetworkHandler **)a1, v6, a5);
  return v5;
}


void __fastcall GameSession::startLeaveGame(GameSession *this)
{
  Level *v1; // r0@1

  v1 = (Level *)*((_DWORD *)this + 1);
  if ( v1 )
    j_j_j__ZN5Level14startLeaveGameEv(v1);
  else
    JUMPOUT(0, GameSession::isLeaveGameDone);
}


GameSession *__fastcall GameSession::~GameSession(GameSession *this)
{
  GameSession *v1; // r4@1
  NetEventCallback *v2; // r1@1
  int v3; // r0@3
  int v4; // r0@5
  int v5; // r0@7
  int v6; // r0@9
  GameSession *result; // r0@11

  v1 = this;
  v2 = (NetEventCallback *)*((_DWORD *)this + 4);
  if ( v2 )
    j_LoopbackPacketSender::removeLoopbackCallback(*((LoopbackPacketSender **)this + 5), v2);
  j_LoopbackPacketSender::setUserList(*((_DWORD *)v1 + 5), 0);
  j_NetworkHandler::unregisterClientOrServerInstance(*(NetworkHandler **)v1, (const unsigned __int8 *)v1 + 24);
  v3 = *((_DWORD *)v1 + 4);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 8))();
  *((_DWORD *)v1 + 4) = 0;
  v4 = *((_DWORD *)v1 + 3);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 8))();
  *((_DWORD *)v1 + 3) = 0;
  v5 = *((_DWORD *)v1 + 2);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 8))();
  *((_DWORD *)v1 + 2) = 0;
  v6 = *((_DWORD *)v1 + 1);
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  result = v1;
  *((_DWORD *)v1 + 1) = 0;
  return result;
}


int __fastcall GameSession::GameSession(int a1, int a2, int *a3, int a4, int *a5, int *a6, char a7)
{
  int v7; // r4@1
  int v8; // r0@1
  int v9; // r0@1
  int v10; // r1@1
  NetEventCallback *v11; // r1@3
  int v13; // [sp+4h] [bp-14h]@1

  v7 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  v8 = *a3;
  *a3 = 0;
  *(_DWORD *)(v7 + 8) = v8;
  *(_DWORD *)(v7 + 12) = 0;
  v9 = *a5;
  *a5 = 0;
  *(_DWORD *)(v7 + 16) = v9;
  *(_DWORD *)(v7 + 20) = a4;
  *(_BYTE *)(v7 + 24) = a7;
  j_NetworkHandler::registerServerInstance(*(NetworkHandler **)v7, *(NetEventCallback **)(v7 + 8));
  v10 = *a6;
  *a6 = 0;
  v13 = v10;
  j_GameSession::setLevel(v7, &v13);
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  v13 = 0;
  v11 = *(NetEventCallback **)(v7 + 16);
  if ( v11 )
    j_LoopbackPacketSender::addLoopbackCallback(*(LoopbackPacketSender **)(v7 + 20), v11);
  return v7;
}


void __fastcall GameSession::startLeaveGame(GameSession *this)
{
  GameSession::startLeaveGame(this);
}


int __fastcall GameSession::getNetEventCallback(GameSession *this)
{
  GameSession *v1; // r1@1
  int result; // r0@1

  v1 = this;
  result = *((_DWORD *)this + 2);
  if ( !result )
    result = *((_DWORD *)v1 + 3);
  return result;
}


int __fastcall GameSession::setLevel(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v4; // r1@1
  __int64 v5; // r0@3
  int v6; // r5@5
  char *v7; // r0@5

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  v4 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)(v2 + 4) = v3;
  if ( v4 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    v3 = *(_DWORD *)(v2 + 4);
  }
  j_Level::setPacketSender(v3, *(_DWORD *)(v2 + 20));
  v5 = *(_QWORD *)(v2 + 4);
  if ( !HIDWORD(v5) )
    HIDWORD(v5) = *(_DWORD *)(v2 + 12);
  j_Level::setNetEventCallback((Level *)v5, (NetEventCallback *)HIDWORD(v5));
  v6 = *(_DWORD *)(v2 + 20);
  v7 = j_Level::getUsers(*(Level **)(v2 + 4));
  j_LoopbackPacketSender::setUserList(v6, (int)v7);
  return j_j_j__ZN5Level23setFinishedInitializingEv(*(Level **)(v2 + 4));
}


Level *__fastcall GameSession::tick(GameSession *this)
{
  GameSession *v1; // r4@1
  Level *result; // r0@1

  v1 = this;
  result = (Level *)*((_DWORD *)this + 1);
  if ( result )
  {
    result = (Level *)j_Level::getTearingDown(result);
    if ( !result )
      result = (Level *)(*(int (**)(void))(**((_DWORD **)v1 + 1) + 72))();
  }
  return result;
}


signed int __fastcall GameSession::isLeaveGameDone(GameSession *this)
{
  Level *v1; // r0@1
  signed int result; // r0@2

  v1 = (Level *)*((_DWORD *)this + 1);
  if ( v1 )
    result = j_Level::isLeaveGameDone(v1);
  else
    result = 1;
  return result;
}
