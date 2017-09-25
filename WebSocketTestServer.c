

char *__fastcall WebSocketTestServer::sendDataFrame(WebSocketTestServer *a1, const unsigned __int8 **a2, int a3, int a4, int a5)
{
  WebSocketTestServer *v5; // r4@1
  int v6; // r5@1
  int v7; // r6@1
  const unsigned __int8 **v8; // r7@1
  int v9; // r0@1
  signed int v10; // r3@1
  char *result; // r0@3
  int v12; // [sp+Ch] [bp-12Ch]@1
  unsigned __int8 *v13; // [sp+18h] [bp-120h]@3
  RakNet *v14; // [sp+120h] [bp-18h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v14 = _stack_chk_guard;
  v9 = RakNet::BitStream::BitStream((RakNet::BitStream *)&v12);
  v10 = a5;
  if ( a5 )
    v10 = -16711936;
  RakWebSocketDataFrame::writeFrameToStream(v9, *v8, *((_DWORD *)*v8 - 3), v7, v6, v10);
  WebSocketTestServer::sendPacket(v5, v13, (unsigned int)(v12 + 7) >> 3);
  RakNet::BitStream::~BitStream((RakNet::BitStream *)&v12);
  result = (char *)(_stack_chk_guard - v14);
  if ( _stack_chk_guard != v14 )
    _stack_chk_fail(result);
  return result;
}


HttpHeaders *__fastcall WebSocketTestServer::sendOpenHandshakeResponse(int a1, const void **a2, _DWORD *a3)
{
  int v3; // r6@1
  _DWORD *v4; // r7@1
  const void **v5; // r5@1
  void *v6; // r0@1
  void *v7; // r0@2
  void *v8; // r0@3
  void *v9; // r0@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  int v19; // [sp+8h] [bp-60h]@3
  int v20; // [sp+10h] [bp-58h]@3
  int v21; // [sp+18h] [bp-50h]@1
  int v22; // [sp+20h] [bp-48h]@1
  char v23; // [sp+24h] [bp-44h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  HttpHeaders::HttpHeaders((int)&v23);
  sub_119C884((void **)&v22, "Upgrade");
  sub_119C884((void **)&v21, "websocket");
  HttpHeaders::addHeader((int)&v23, (const void **)&v22, &v21);
  v6 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v22 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v20, "Connection");
  sub_119C884((void **)&v19, "Upgrade");
  HttpHeaders::addHeader((int)&v23, (const void **)&v20, &v19);
  v8 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v19 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v20 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  WebSocketTestServer::sendOpenHandshakeResponse(v3, v5, v4, (HttpHeaders *)&v23);
  return HttpHeaders::~HttpHeaders((HttpHeaders *)&v23);
}


int __fastcall WebSocketTestServer::readOpeningHandshakeHeaders(WebSocketTestServer *this, int a2)
{
  int v2; // r5@1
  WebSocketTestServer *v3; // r4@1

  v2 = a2 + 412;
  v3 = this;
  HttpHeaders::parse((HttpHeaders *)(a2 + 412), (RakNet::BitStream *)(a2 + 4));
  return HttpHeaders::HttpHeaders((int)v3, v2);
}


void __fastcall WebSocketTestServer::sendOpenHandshakeResponse(int a1, const void **a2)
{
  const void **v2; // r4@1
  int v3; // r5@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_119C884((void **)&v7, "101");
  WebSocketTestServer::sendOpenHandshakeResponse(v3, v2, &v7);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
}


void __fastcall WebSocketTestServer::readNextFrame(WebSocketTestServer *this, int a2)
{
  RakWebSocketDataFrameParser::readFrame(this, (RakNet::BitStream *)(a2 + 456), a2 + 4);
}


char *__fastcall WebSocketTestServer::sendTextFrame(WebSocketTestServer *a1, const unsigned __int8 **a2, int a3)
{
  WebSocketTestServer *v3; // r4@1
  signed int v4; // r5@1
  const unsigned __int8 **v5; // r6@1
  int v6; // r0@1
  char *result; // r0@3
  int v8; // [sp+8h] [bp-128h]@1
  unsigned __int8 *v9; // [sp+14h] [bp-11Ch]@3
  RakNet *v10; // [sp+11Ch] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v10 = _stack_chk_guard;
  v6 = RakNet::BitStream::BitStream((RakNet::BitStream *)&v8);
  if ( v4 )
    v4 = -16711936;
  RakWebSocketDataFrame::writeFrameToStream(v6, *v5, *((_DWORD *)*v5 - 3), 1, 1, v4);
  WebSocketTestServer::sendPacket(v3, v9, (unsigned int)(v8 + 7) >> 3);
  RakNet::BitStream::~BitStream((RakNet::BitStream *)&v8);
  result = (char *)(_stack_chk_guard - v10);
  if ( _stack_chk_guard != v10 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall WebSocketTestServer::writeToIncomingBuffer(WebSocketTestServer *this, const unsigned __int8 *a2, unsigned int a3)
{
  const unsigned __int8 *v3; // r5@1
  RakNet::BitStream *v4; // r6@1
  unsigned int v5; // r4@1

  v3 = a2;
  v4 = (WebSocketTestServer *)((char *)this + 4);
  v5 = a3;
  if ( *((_DWORD *)this + 1) == *((_DWORD *)this + 3) )
    RakNet::BitStream::Reset(v4);
  return j_j_j__ZN6RakNet9BitStream17WriteAlignedBytesEPKhj_0(v4, v3, v5);
}


char *__fastcall WebSocketTestServer::sendOpenHandshakeResponse(int a1, const void **a2, _DWORD *a3, HttpHeaders *a4)
{
  WebSocketTestServer *v4; // r5@1
  const void **v5; // r6@1
  HttpHeaders *v6; // r7@1
  _DWORD *v7; // r4@1
  int i; // r4@1
  void *v9; // r0@4
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  char *v12; // r0@13
  void *v13; // r0@13
  __int64 v14; // r2@14
  unsigned __int8 *v15; // r0@14
  void *v16; // r0@15
  unsigned __int8 *v17; // r0@16
  void *v18; // r0@17
  char *result; // r0@18
  unsigned int *v20; // r2@20
  signed int v21; // r1@22
  unsigned int *v22; // r2@24
  signed int v23; // r1@26
  unsigned int *v24; // r2@28
  signed int v25; // r1@30
  unsigned int *v26; // r2@32
  signed int v27; // r1@34
  unsigned int *v28; // r2@36
  signed int v29; // r1@38
  _DWORD *v30; // [sp+8h] [bp-128h]@1
  unsigned __int8 *v31; // [sp+10h] [bp-120h]@14
  int v32; // [sp+14h] [bp-11Ch]@13
  int v33; // [sp+18h] [bp-118h]@13
  unsigned __int8 *v34; // [sp+1Ch] [bp-114h]@13
  int v35; // [sp+20h] [bp-110h]@4
  int v36; // [sp+28h] [bp-108h]@1
  char v37; // [sp+30h] [bp-100h]@13
  char v38; // [sp+44h] [bp-ECh]@13
  RakNet *v39; // [sp+108h] [bp-28h]@1

  v4 = (WebSocketTestServer *)a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v39 = _stack_chk_guard;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 4);
  sub_119C884((void **)&v36, (const char *)&unk_257BC67);
  v30 = v7;
  for ( i = *(_DWORD *)(HttpHeaders::getHeaders(v6) + 12); i != HttpHeaders::getHeaders(v6) + 4; i = sub_119CB48(i) )
  {
    Util::format((Util *)&v35, "%s: %s\r\n", *(_QWORD *)(i + 16));
    sub_119C8A4((const void **)&v36, (const void **)&v35);
    v9 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v35 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    }
  }
  v34 = (unsigned __int8 *)&unk_28898CC;
  sub_119C8A4((const void **)&v34, v5);
  sub_119C894((const void **)&v34, "258EAFA5-E914-47DA-95CA-C5AB0DC85B11", 0x24u);
  CSHA1::CSHA1((CSHA1 *)&v38);
  CSHA1::Reset((CSHA1 *)&v38);
  CSHA1::Update((CSHA1 *)&v38, v34, *((_DWORD *)v34 - 3));
  CSHA1::Final((CSHA1 *)&v38);
  v12 = CSHA1::GetHash((CSHA1 *)&v38);
  _aeabi_memcpy(&v37, v12, 20);
  Util::base64_encode((Util *)&v32, (const unsigned __int8 *)&v37, 0x14u, 1);
  Util::stringTrim(&v33, &v32);
  v13 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  LODWORD(v14) = *v30;
  HIDWORD(v14) = v36;
  Util::format((Util *)&v31, "HTTP/1.1 %s Switching Protocols\r\n%sSec-WebSocket-Accept: %s\r\n\r\n", v14, v33);
  WebSocketTestServer::sendPacket(v4, v31, *((_DWORD *)v31 - 3));
  v15 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v31 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v33 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  CSHA1::~CSHA1((CSHA1 *)&v38);
  v17 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v34 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v36 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  result = (char *)(_stack_chk_guard - v39);
  if ( _stack_chk_guard != v39 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall WebSocketTestServer::sendOpenHandshakeResponse(int a1, const void **a2)
{
  WebSocketTestServer::sendOpenHandshakeResponse(a1, a2);
}


int __fastcall WebSocketTestServer::WebSocketTestServer(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1

  v3 = a1;
  v4 = a2;
  *(_DWORD *)a1 = a3;
  RakNet::BitStream::BitStream((RakNet::BitStream *)(a1 + 4));
  _aeabi_memcpy4(v3 + 280, v4, 132);
  HttpHeaders::HttpHeaders(v3 + 412);
  RakWebSocketDataFrameParser::RakWebSocketDataFrameParser((RakWebSocketDataFrameParser *)(v3 + 456), 0);
  return v3;
}


char *__fastcall WebSocketTestServer::readOpeningHandshakeRequestLine(int a1, int *a2)
{
  HttpHeaders *v2; // r4@1
  int *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = (HttpHeaders *)(a1 + 412);
  v3 = a2;
  HttpHeaders::parse((HttpHeaders *)(a1 + 412), (RakNet::BitStream *)(a1 + 4));
  HttpHeaders::getStatusCode((HttpHeaders *)&v8, (int)v2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v8);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  return HttpHeaders::getStatusLine(v2);
}


void __fastcall WebSocketTestServer::readNextFrame(WebSocketTestServer *this, int a2)
{
  WebSocketTestServer::readNextFrame(this, a2);
}


char *__fastcall WebSocketTestServer::sendPingFrame(WebSocketTestServer *a1, const unsigned __int8 **a2)
{
  WebSocketTestServer *v2; // r4@1
  const unsigned __int8 **v3; // r5@1
  int v4; // r0@1
  char *result; // r0@1
  int v6; // [sp+8h] [bp-128h]@1
  unsigned __int8 *v7; // [sp+14h] [bp-11Ch]@1
  RakNet *v8; // [sp+11Ch] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v8 = _stack_chk_guard;
  v4 = RakNet::BitStream::BitStream((RakNet::BitStream *)&v6);
  RakWebSocketDataFrame::writeFrameToStream(v4, *v3, *((_DWORD *)*v3 - 3), 9, 1, 0);
  WebSocketTestServer::sendPacket(v2, v7, (unsigned int)(v6 + 7) >> 3);
  RakNet::BitStream::~BitStream((RakNet::BitStream *)&v6);
  result = (char *)(_stack_chk_guard - v8);
  if ( _stack_chk_guard != v8 )
    _stack_chk_fail(result);
  return result;
}


WebSocketTestServer *__fastcall WebSocketTestServer::~WebSocketTestServer(WebSocketTestServer *this)
{
  WebSocketTestServer *v1; // r4@1

  v1 = this;
  RakWebSocketDataFrameParser::~RakWebSocketDataFrameParser((WebSocketTestServer *)((char *)this + 456));
  HttpHeaders::~HttpHeaders((WebSocketTestServer *)((char *)v1 + 412));
  RakNet::BitStream::~BitStream((WebSocketTestServer *)((char *)v1 + 4));
  return v1;
}


int __fastcall WebSocketTestServer::sendPacket(int result, const unsigned __int8 *a2, unsigned int a3)
{
  int v3; // r6@1
  unsigned int v4; // r9@1
  int v5; // r5@1
  const unsigned __int8 *v6; // r8@1
  void *v7; // r7@2
  __int64 v8; // r0@2
  void *v9; // r10@5
  signed int v10; // r1@5
  unsigned int v11; // r2@5
  unsigned int v12; // r1@7
  unsigned int v13; // r4@7
  char *v14; // r11@13
  char *v15; // r7@15
  int v16; // r7@17
  int v17; // r4@20

  v3 = result;
  v4 = a3;
  v5 = *(_DWORD *)result;
  v6 = a2;
  if ( *(_DWORD *)result )
  {
    v7 = operator new(0xA8u);
    _aeabi_memclr8(v7, 168);
    RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)v7);
    RakNet::RakNetGUID::RakNetGUID((RakNet::RakNetGUID *)((char *)v7 + 136));
    v8 = *(_QWORD *)(v5 + 4);
    if ( (_DWORD)v8 == HIDWORD(v8) )
    {
      v9 = *(void **)v5;
      v10 = v8 - *(_DWORD *)v5;
      v11 = v10 >> 2;
      if ( !(v10 >> 2) )
        v11 = 1;
      v12 = v11 + (v10 >> 2);
      v13 = v12;
      if ( 0 != v12 >> 30 )
        v13 = 0x3FFFFFFF;
      if ( v12 < v11 )
      if ( v13 )
      {
        if ( v13 >= 0x40000000 )
          sub_119C874();
        v14 = (char *)operator new(4 * v13);
        LODWORD(v8) = *(_QWORD *)v5 >> 32;
        v9 = (void *)*(_QWORD *)v5;
      }
      else
        v14 = 0;
      *(_DWORD *)&v14[v8 - (_DWORD)v9] = v7;
      v15 = &v14[v8 - (_DWORD)v9];
      if ( 0 != ((signed int)v8 - (signed int)v9) >> 2 )
        _aeabi_memmove4(v14, v9);
      v16 = (int)(v15 + 4);
      if ( v9 )
        operator delete(v9);
      *(_DWORD *)v5 = v14;
      *(_DWORD *)(v5 + 4) = v16;
      *(_DWORD *)(v5 + 8) = &v14[4 * v13];
    }
    else
      *(_DWORD *)v8 = v7;
      *(_DWORD *)(v5 + 4) += 4;
    RakNet::SystemAddress::operator=(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 4) - 4), v3 + 280);
    v17 = *(_DWORD *)v3;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 4) - 4) + 152) = v4;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v17 + 4) - 4) + 160) = malloc(v4);
    result = j_j___aeabi_memcpy_3(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v17 + 4) - 4) + 160), (int)v6, v4);
  }
  return result;
}
