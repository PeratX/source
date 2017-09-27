

RakNet *__fastcall RakWebSocketClientTestAdapter::connectCompleteAndSendOpenHandshakeRequest(RakWebSocketClient *a1, int *a2)
{
  RakWebSocketClient *v2; // r8@1
  int v3; // r0@1
  int v4; // r1@1
  int v5; // r2@1
  int v6; // r3@1
  RakWebSocketClient *v7; // r4@1
  signed int v8; // r5@1
  int *v9; // r6@1
  int v10; // t1@2
  int v12; // [sp+0h] [bp-90h]@1

  v2 = a1;
  RakWebSocketClient::connect(a1, a2);
  v3 = *(_DWORD *)v2;
  v4 = *((_DWORD *)v2 + 1);
  v5 = *((_DWORD *)v2 + 2);
  v6 = *((_DWORD *)v2 + 3);
  v7 = (RakWebSocketClient *)((char *)v2 + 16);
  v8 = 120;
  v9 = &v12;
  do
  {
    v10 = *(_DWORD *)v7;
    v7 = (RakWebSocketClient *)((char *)v7 + 4);
    v8 -= 4;
    *v9 = v10;
    ++v9;
  }
  while ( v8 );
  TcpTestProxy::completeConnection(v3, v4, v5, v6);
  return RakWebSocketClient::tick(v2);
}


int __fastcall RakWebSocketClientTestAdapter::getProxy(RakWebSocketClientTestAdapter *this)
{
  return *(_DWORD *)this;
}


RakNet *__fastcall RakWebSocketClientTestAdapter::connectCompleteAndNegotiateWebSocket(RakWebSocketClient *a1, int *a2)
{
  RakWebSocketClient *v2; // r8@1
  int v3; // r0@1
  int v4; // r1@1
  int v5; // r2@1
  RakWebSocketClient *v6; // r6@1
  int v7; // r3@1
  RakWebSocketClient *v8; // r9@1
  signed int v9; // r4@1
  int *v10; // r7@1
  int v11; // t1@2
  int v12; // r1@3
  __int64 v13; // r2@3
  signed int v14; // r0@3
  int *v15; // r7@3
  int v16; // t1@4
  int v17; // r5@5
  void *v18; // r0@5
  int v19; // r5@6
  unsigned int *v20; // r1@7
  unsigned int v21; // r0@9
  unsigned int *v22; // r6@13
  unsigned int v23; // r0@15
  unsigned int *v25; // r2@21
  signed int v26; // r1@23
  int v27; // [sp+0h] [bp-B0h]@1
  int v28; // [sp+80h] [bp-30h]@5
  int v29; // [sp+84h] [bp-2Ch]@5
  int v30; // [sp+88h] [bp-28h]@6

  v2 = a1;
  RakWebSocketClient::connect(a1, a2);
  v3 = *(_DWORD *)v2;
  v4 = *((_DWORD *)v2 + 1);
  v5 = *((_DWORD *)v2 + 2);
  v6 = (RakWebSocketClient *)((char *)v2 + 16);
  v8 = (RakWebSocketClient *)((char *)v2 + 12);
  v7 = *((_DWORD *)v2 + 3);
  v9 = 120;
  v10 = &v27;
  do
  {
    v11 = *(_DWORD *)v6;
    v6 = (RakWebSocketClient *)((char *)v6 + 4);
    v9 -= 4;
    *v10 = v11;
    ++v10;
  }
  while ( v9 );
  TcpTestProxy::completeConnection(v3, v4, v5, v7);
  RakWebSocketClient::tick(v2);
  v12 = *(_DWORD *)v2;
  v13 = *(_QWORD *)((char *)v2 + 4);
  v14 = 124;
  v15 = &v27;
    v16 = *(_DWORD *)v8;
    v8 = (RakWebSocketClient *)((char *)v8 + 4);
    v14 -= 4;
    *v15 = v16;
    ++v15;
  while ( v14 );
  TcpTestProxy::getServer((int)&v29, v12, v13);
  v17 = v29;
  sub_119C854(&v28, (int *)v2 + 134);
  WebSocketTestServer::sendOpenHandshakeResponse(v17, (const void **)&v28);
  v18 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    }
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = v30;
  if ( v30 )
    v20 = (unsigned int *)(v30 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
      if ( &pthread_create )
      {
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      }
      else
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  return RakWebSocketClient::tick(v2);
}


RakNet *__fastcall RakWebSocketClientTestAdapter::tickFromFailToClose(RakWebSocketClientTestAdapter *this)
{
  RakWebSocketClient *v1; // r4@1

  v1 = this;
  RakWebSocketClient::tick(this);
  RakWebSocketClient::tick(v1);
  return j_j_j__ZN18RakWebSocketClient4tickEv(v1);
}


unsigned int *__fastcall RakWebSocketClientTestAdapter::getServer(RakWebSocketClientTestAdapter *this, int *a2)
{
  int *v2; // r3@1
  int *v3; // r12@1
  int v4; // r1@1
  signed int v5; // lr@1
  __int64 v6; // r2@1
  int *v7; // r4@1
  int v8; // t1@2
  int v10; // [sp+0h] [bp-90h]@1

  v2 = a2;
  v3 = a2 + 3;
  v4 = *a2;
  v5 = 124;
  v6 = *(_QWORD *)(v2 + 1);
  v7 = &v10;
  do
  {
    v8 = *v3;
    ++v3;
    v5 -= 4;
    *v7 = v8;
    ++v7;
  }
  while ( v5 );
  return TcpTestProxy::getServer((int)this, v4, v6);
}


RakNet *__fastcall RakWebSocketClientTestAdapter::connectCompleteAndSendOpenHandshakeRequest(RakWebSocketClient *a1, int *a2, unsigned __int64 *a3)
{
  RakWebSocketClient *v3; // r8@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  RakWebSocketClient *v8; // r4@1
  signed int v9; // r5@1
  int *v10; // r6@1
  int v11; // t1@2
  int v13; // [sp+0h] [bp-90h]@1

  v3 = a1;
  RakWebSocketClient::connect(a1, a2, a3);
  v4 = *(_DWORD *)v3;
  v5 = *((_DWORD *)v3 + 1);
  v6 = *((_DWORD *)v3 + 2);
  v7 = *((_DWORD *)v3 + 3);
  v8 = (RakWebSocketClient *)((char *)v3 + 16);
  v9 = 120;
  v10 = &v13;
  do
  {
    v11 = *(_DWORD *)v8;
    v8 = (RakWebSocketClient *)((char *)v8 + 4);
    v9 -= 4;
    *v10 = v11;
    ++v10;
  }
  while ( v9 );
  TcpTestProxy::completeConnection(v4, v5, v6, v7);
  return RakWebSocketClient::tick(v3);
}


int __fastcall RakWebSocketClientTestAdapter::RakWebSocketClientTestAdapter(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+4h] [bp-Ch]@1

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  v5 = v3;
  RakWebSocketClient::RakWebSocketClient(v2, &v5);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  return v2;
}
