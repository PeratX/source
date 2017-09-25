

void __fastcall LoopbackPacketSender::flush(int a1, int a2, int a3)
{
  LoopbackPacketSender::flush(a1, a2, a3);
}


unsigned __int64 *__fastcall LoopbackPacketSender::sendBroadcast(LoopbackPacketSender *this, const Packet *a2)
{
  Player **v2; // r7@0
  Player **v3; // r9@0
  LoopbackPacketSender *v4; // r5@1
  const Packet *v5; // r8@1
  unsigned __int64 *result; // r0@1
  bool v7; // zf@1
  int (__fastcall *v8)(LoopbackPacketSender *, char *, const Packet *, int); // r4@4
  char *v9; // r6@4
  Player *v10; // t1@4
  int v11; // r0@4

  v4 = this;
  v5 = a2;
  result = (unsigned __int64 *)*((_DWORD *)this + 6);
  v7 = result == 0;
  if ( result )
  {
    v3 = (Player **)(*result >> 32);
    v2 = (Player **)*result;
    v7 = v2 == v3;
  }
  if ( !v7 )
    do
    {
      v8 = *(int (__fastcall **)(LoopbackPacketSender *, char *, const Packet *, int))(*(_DWORD *)v4 + 16);
      v9 = Player::getClientId(*v2);
      v10 = *v2;
      ++v2;
      v11 = Player::getClientSubId(v10);
      result = (unsigned __int64 *)v8(v4, v9, v5, v11);
    }
    while ( v3 != v2 );
  return result;
}


void __fastcall LoopbackPacketSender::flush(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  void (__fastcall *v5)(int *, int, signed int); // r3@1
  int v6; // r4@1
  int v7; // [sp+0h] [bp-20h]@2
  void (*v8)(void); // [sp+8h] [bp-18h]@1
  int v9; // [sp+Ch] [bp-14h]@2

  v3 = *(_DWORD *)(a1 + 8);
  v4 = a3;
  v8 = 0;
  v5 = *(void (__fastcall **)(int *, int, signed int))(a3 + 8);
  v6 = a2;
  if ( v5 )
  {
    v5(&v7, a3, 2);
    v9 = *(_DWORD *)(v4 + 12);
    v8 = *(void (**)(void))(v4 + 8);
  }
  NetworkHandler::flush(v3, v6, (int)&v7);
  if ( v8 )
    v8();
}


unsigned __int64 *__fastcall LoopbackPacketSender::sendBroadcast(LoopbackPacketSender *this, const NetworkIdentifier *a2, int a3, const Packet *a4)
{
  Player **v4; // r4@0
  Player **v5; // r10@0
  LoopbackPacketSender *v6; // r7@1
  unsigned __int64 *result; // r0@1
  const Packet *v8; // r9@1
  const NetworkIdentifier *v9; // r6@1
  bool v10; // zf@1
  int (__fastcall *v11)(LoopbackPacketSender *, char *, const Packet *, int); // r8@7
  char *v12; // r5@7
  int v13; // r0@7
  unsigned __int64 *v14; // [sp+0h] [bp-28h]@1

  v6 = this;
  v14 = (unsigned __int64 *)a3;
  result = (unsigned __int64 *)*((_DWORD *)this + 6);
  v8 = a4;
  v9 = a2;
  v10 = result == 0;
  if ( result )
  {
    v5 = (Player **)(*result >> 32);
    v4 = (Player **)*result;
    v10 = v4 == v5;
  }
  if ( !v10 )
    do
    {
      if ( *((_DWORD *)*v4 + 1134) != *((_DWORD *)v9 + 36)
        || NetworkIdentifier::equalsTypeData((Player *)((char *)*v4 + 4392), v9) != 1
        || (result = (unsigned __int64 *)Player::getClientSubId(*v4), result != v14) )
      {
        v11 = *(int (__fastcall **)(LoopbackPacketSender *, char *, const Packet *, int))(*(_DWORD *)v6 + 16);
        v12 = Player::getClientId(*v4);
        v13 = Player::getClientSubId(*v4);
        result = (unsigned __int64 *)v11(v6, v12, v8, v13);
      }
      ++v4;
    }
    while ( v5 != v4 );
  return result;
}


char *__fastcall LoopbackPacketSender::addLoopbackCallback(LoopbackPacketSender *this, NetEventCallback *a2)
{
  LoopbackPacketSender *v2; // r4@1
  NetEventCallback *v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r5@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 2);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = (void *)*((_DWORD *)v2 + 3);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *(_QWORD *)((char *)v2 + 12) >> 32;
      v6 = (void *)*(_QWORD *)((char *)v2 + 12);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v3;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *(_QWORD *)((char *)v2 + 12) = *(_QWORD *)&v10;
    *((_DWORD *)v2 + 5) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*((_DWORD *)v2 + 4) + 4);
    *((_DWORD *)v2 + 4) = result;
  return result;
}


LoopbackPacketSender *__fastcall LoopbackPacketSender::~LoopbackPacketSender(LoopbackPacketSender *this)
{
  LoopbackPacketSender *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E9270;
  v2 = (void *)*((_DWORD *)this + 3);
  if ( v2 )
    operator delete(v2);
  return v1;
}


int __fastcall LoopbackPacketSender::setUserList(int result, int a2)
{
  *(_DWORD *)(result + 24) = a2;
  return result;
}


void __fastcall LoopbackPacketSender::sendToClient(LoopbackPacketSender *this, const NetworkIdentifier *a2, const Packet *a3, unsigned __int8 a4)
{
  LoopbackPacketSender::sendToClient(this, a2, a3, a4);
}


NetEventCallback **__fastcall LoopbackPacketSender::removeLoopbackCallback(LoopbackPacketSender *this, NetEventCallback *a2)
{
  NetEventCallback **result; // r0@1
  NetEventCallback **i; // r2@1
  __int64 v4; // kr00_8@1

  v4 = *(_QWORD *)((char *)this + 12);
  result = (NetEventCallback **)(*(_QWORD *)((char *)this + 12) >> 32);
  for ( i = (NetEventCallback **)v4; result != i; ++i )
  {
    if ( *i == a2 )
      *i = 0;
  }
  return result;
}


int __fastcall LoopbackPacketSender::send(LoopbackPacketSender *this, Packet *a2)
{
  LoopbackPacketSender *v2; // r5@1
  Packet *v3; // r4@1
  int v4; // r0@1
  int v5; // r1@1
  int (__fastcall *v6)(LoopbackPacketSender *, Packet *); // r2@2

  v2 = this;
  v3 = a2;
  v4 = NetworkHandler::isServer(*((NetworkHandler **)this + 2));
  v5 = *(_DWORD *)v2;
  if ( v4 == 1 )
    v6 = *(int (__fastcall **)(LoopbackPacketSender *, Packet *))(v5 + 20);
  else
    v6 = *(int (__fastcall **)(LoopbackPacketSender *, Packet *))(v5 + 12);
  return v6(v2, v3);
}


void __fastcall LoopbackPacketSender::sendToClient(LoopbackPacketSender *this, const NetworkIdentifier *a2, const Packet *a3, unsigned __int8 a4)
{
  j_j_j__ZN14NetworkHandler4sendERK17NetworkIdentifierRK6Packeth(*((NetworkHandler **)this + 2), a2, a3, a4);
}


void __fastcall LoopbackPacketSender::~LoopbackPacketSender(LoopbackPacketSender *this)
{
  LoopbackPacketSender *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E9270;
  v2 = (void *)*((_DWORD *)this + 3);
  if ( v2 )
    operator delete(v2);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall LoopbackPacketSender::LoopbackPacketSender(int result, char a2, int a3)
{
  *(_BYTE *)(result + 4) = a2;
  *(_DWORD *)result = &off_26E9270;
  *(_DWORD *)(result + 8) = a3;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  return result;
}


void __fastcall LoopbackPacketSender::~LoopbackPacketSender(LoopbackPacketSender *this)
{
  LoopbackPacketSender::~LoopbackPacketSender(this);
}


RakNet *__fastcall LoopbackPacketSender::sendToServer(LoopbackPacketSender *this, Packet *a2)
{
  Packet *v2; // r4@1
  NetworkHandler *v3; // r5@1
  RakNet *result; // r0@1
  int v5; // [sp+0h] [bp-B0h]@1
  RakNet *v6; // [sp+9Ch] [bp-14h]@1

  v2 = a2;
  v6 = _stack_chk_guard;
  *((_BYTE *)a2 + 12) = *((_BYTE *)this + 4);
  v3 = (NetworkHandler *)*((_DWORD *)this + 2);
  NetworkHandler::getServerId((NetworkHandler *)&v5, (int)v3);
  NetworkHandler::send(v3, (const NetworkIdentifier *)&v5, v2, 0);
  result = (RakNet *)(_stack_chk_guard - v6);
  if ( _stack_chk_guard != v6 )
    _stack_chk_fail(result);
  return result;
}
