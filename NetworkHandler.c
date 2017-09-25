

RakNet *__fastcall NetworkHandler::onNewOutgoingLocalConnection(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r10@1
  int v5; // r8@1
  __int64 v6; // r6@1
  __int64 v7; // kr00_8@1
  int *v8; // r4@2
  int v9; // r1@2
  __int64 v10; // r2@2
  int v11; // r0@2
  int v12; // r0@11
  int v13; // r0@13
  int v14; // r0@15
  int v15; // r0@17
  RakNet *result; // r0@19
  int v17; // [sp+0h] [bp-F0h]@1
  char v18; // [sp+8h] [bp-E8h]@1
  int v19; // [sp+A0h] [bp-50h]@1
  int v20; // [sp+A4h] [bp-4Ch]@1
  int v21; // [sp+A8h] [bp-48h]@1
  int v22; // [sp+ACh] [bp-44h]@1
  int v23; // [sp+B0h] [bp-40h]@1
  int v24; // [sp+B4h] [bp-3Ch]@1
  __int64 v25; // [sp+B8h] [bp-38h]@1
  char v26; // [sp+C0h] [bp-30h]@1
  RakNet *v27; // [sp+CCh] [bp-24h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v27 = _stack_chk_guard;
  sub_21E0378(&v17);
  v6 = *(_QWORD *)&v17;
  _aeabi_memcpy8(&v18, v5, 152);
  v22 = 0;
  v23 = 0;
  v20 = 0;
  v21 = 0;
  v25 = v6;
  v26 = 0;
  v24 = v4;
  v19 = 1;
  v7 = *(_QWORD *)(v3 + 32);
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    std::vector<NetworkHandler::Connection,std::allocator<NetworkHandler::Connection>>::_M_emplace_back_aux<NetworkHandler::Connection>(
      (unsigned __int64 *)(v3 + 28),
      (int)&v18);
    v8 = &v23;
    if ( v23 )
      (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  }
  else
    _aeabi_memcpy8(v7, &v18, 156);
    v20 = 0;
    *(_DWORD *)(v7 + 156) = 0;
    v21 = 0;
    *(_DWORD *)(v7 + 160) = 0;
    v22 = 0;
    *(_DWORD *)(v7 + 164) = 0;
    v23 = 0;
    *(_DWORD *)(v7 + 168) = 0;
    v9 = v24;
    v10 = v25;
    *(_BYTE *)(v7 + 184) = v26;
    v11 = v7 + 172;
    *(_DWORD *)v11 = v9;
    *(_QWORD *)(v11 + 4) = v10;
    *(_DWORD *)(v3 + 32) += 192;
  *v8 = 0;
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  if ( v21 )
    (*(void (**)(void))(*(_DWORD *)v21 + 4))();
  if ( v20 )
    (*(void (**)(void))(*(_DWORD *)v20 + 4))();
  v12 = *(_DWORD *)(v3 + 260);
  if ( v12 )
    (*(void (**)(void))(**(_DWORD **)v12 + 12))();
  v13 = *(_DWORD *)(v3 + 264);
  if ( v13 )
    (*(void (**)(void))(**(_DWORD **)v13 + 12))();
  v14 = *(_DWORD *)(v3 + 268);
  if ( v14 )
    (*(void (**)(void))(**(_DWORD **)v14 + 12))();
  v15 = *(_DWORD *)(v3 + 272);
  if ( v15 )
    (*(void (**)(void))(**(_DWORD **)v15 + 12))();
  result = (RakNet *)(_stack_chk_guard - v27);
  if ( _stack_chk_guard != v27 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall NetworkHandler::send(NetworkHandler *this, const NetworkIdentifier *a2, const Packet *a3, unsigned __int8 a4)
{
  NetworkHandler::send(this, a2, a3, a4);
}


int __fastcall NetworkHandler::getPeerForUser(NetworkHandler *this, const NetworkIdentifier *a2)
{
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  const NetworkIdentifier *v4; // r4@1
  int result; // r0@6

  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 28);
  v4 = a2;
  if ( v2 == v3 )
  {
LABEL_6:
    result = 0;
  }
  else
    while ( *(_BYTE *)(v2 + 184)
         || *((_DWORD *)v4 + 36) != *(_DWORD *)(v2 + 144)
         || NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)v2) != 1 )
    {
      v2 += 192;
      if ( v3 == v2 )
        goto LABEL_6;
    }
    result = *(_DWORD *)(v2 + 172);
  return result;
}


signed int __fastcall NetworkHandler::connect(int a1, const Social::GameConnectionInfo *a2, const Social::GameConnectionInfo *a3)
{
  const Social::GameConnectionInfo *v3; // r5@1
  int v4; // r4@2
  signed int v5; // r4@2
  int v7; // [sp+0h] [bp-88h]@2
  char v8; // [sp+3Ch] [bp-4Ch]@2

  v3 = a3;
  if ( *(_WORD *)a2 )
  {
    v4 = *(_DWORD *)(a1 + 12);
    Social::GameConnectionInfo::GameConnectionInfo((Social::GameConnectionInfo *)&v8, a2);
    Social::GameConnectionInfo::GameConnectionInfo((Social::GameConnectionInfo *)&v7, v3);
    v5 = RakNetInstance::connect(v4, &v8, (int)&v7);
    Social::GameConnectionInfo::~GameConnectionInfo((Social::GameConnectionInfo *)&v7);
    Social::GameConnectionInfo::~GameConnectionInfo((Social::GameConnectionInfo *)&v8);
  }
  else
    v5 = LocalConnector::connect(*(LocalConnector **)(a1 + 16));
  return v5;
}


int __fastcall NetworkHandler::getResourcePackUploadManager(int a1, int a2, NetworkIdentifier *a3, unsigned int a4)
{
  return j_j_j__ZN31ResourcePackTransmissionManager28getResourcePackUploadManagerER12PacketSenderRK17NetworkIdentifierRKSs(
           a1 + 204,
           a2,
           a3,
           a4);
}


void __fastcall NetworkHandler::registerClientInstance(NetworkHandler *this, NetEventCallback *a2, int a3)
{
  NetworkHandler::registerClientInstance(this, a2, a3);
}


NetworkHandler::IncomingPacketQueue *__fastcall NetworkHandler::IncomingPacketQueue::IncomingPacketQueue(NetworkHandler::IncomingPacketQueue *this, NetEventCallback *a2)
{
  NetworkHandler::IncomingPacketQueue *v2; // r4@1
  int v3; // r0@1
  __int64 v4; // kr00_8@2
  __int64 v5; // kr08_8@2
  __int64 v6; // kr10_8@2
  __int64 v7; // kr18_8@2
  __int64 v8; // kr20_8@2
  __int64 v9; // kr28_8@2
  int v10; // r1@2
  int v11; // r0@2
  int v13; // [sp+0h] [bp-40h]@1
  int v14; // [sp+4h] [bp-3Ch]@2
  __int64 v15; // [sp+8h] [bp-38h]@2
  __int64 v16; // [sp+10h] [bp-30h]@2
  __int64 v17; // [sp+18h] [bp-28h]@2
  __int64 v18; // [sp+20h] [bp-20h]@2

  v2 = this;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = 0;
  _aeabi_memclr8(&v13, 40);
  std::_Deque_base<std::unique_ptr<Packet,std::default_delete<Packet>>,std::allocator<std::unique_ptr<Packet,std::default_delete<Packet>>>>::_M_initialize_map(
    (int)&v13,
    0);
  _aeabi_memclr4((char *)v2 + 8, 40);
    (int)v2 + 8,
  v3 = v13;
  if ( v13 )
  {
    v4 = *((_QWORD *)v2 + 2);
    v5 = *((_QWORD *)v2 + 3);
    v6 = v15;
    *((_QWORD *)v2 + 3) = v16;
    *((_QWORD *)v2 + 2) = v6;
    v15 = v4;
    v16 = v5;
    v7 = *((_QWORD *)v2 + 4);
    v8 = *((_QWORD *)v2 + 5);
    v9 = v17;
    *((_QWORD *)v2 + 5) = v18;
    *((_QWORD *)v2 + 4) = v9;
    v17 = v7;
    v18 = v8;
    v10 = *((_DWORD *)v2 + 2);
    *((_DWORD *)v2 + 2) = v3;
    v13 = v10;
    v11 = *((_DWORD *)v2 + 3);
    *((_DWORD *)v2 + 3) = v14;
    v14 = v11;
  }
  std::deque<std::unique_ptr<Packet,std::default_delete<Packet>>,std::allocator<std::unique_ptr<Packet,std::default_delete<Packet>>>>::~deque((int)&v13);
  return v2;
}


RakNet *__fastcall NetworkHandler::onNewOutgoingConnection(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  int v6; // r3@1
  __int64 v7; // kr00_8@1
  int v8; // r0@2
  int v9; // r0@2
  int v10; // r0@2
  int v11; // r0@2
  int v12; // r1@2
  int v13; // r2@2
  int v14; // r3@2
  int v15; // r0@2
  int v16; // r0@12
  int v17; // r0@14
  int v18; // r0@16
  int v19; // r0@18
  RakNet *result; // r0@20
  __int64 v21; // [sp+10h] [bp-E0h]@1
  char v22; // [sp+18h] [bp-D8h]@1
  int v23; // [sp+B4h] [bp-3Ch]@2
  int v24; // [sp+B8h] [bp-38h]@2
  int v25; // [sp+BCh] [bp-34h]@2
  int v26; // [sp+C0h] [bp-30h]@2
  int v27; // [sp+C4h] [bp-2Ch]@2
  int v28; // [sp+C8h] [bp-28h]@2
  int v29; // [sp+CCh] [bp-24h]@2
  char v30; // [sp+D0h] [bp-20h]@2
  RakNet *v31; // [sp+D8h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v31 = _stack_chk_guard;
  sub_21E0378(&v21);
  NetworkHandler::Connection::Connection((int)&v22, v5, v4, v6, v21, 0);
  v7 = *(_QWORD *)(v3 + 32);
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    std::vector<NetworkHandler::Connection,std::allocator<NetworkHandler::Connection>>::_M_emplace_back_aux<NetworkHandler::Connection>(
      (unsigned __int64 *)(v3 + 28),
      (int)&v22);
  }
  else
    _aeabi_memcpy8(v7, &v22, 156);
    v8 = v23;
    v23 = 0;
    *(_DWORD *)(v7 + 156) = v8;
    v9 = v24;
    v24 = 0;
    *(_DWORD *)(v7 + 160) = v9;
    v10 = v25;
    v25 = 0;
    *(_DWORD *)(v7 + 164) = v10;
    v11 = v26;
    v26 = 0;
    *(_DWORD *)(v7 + 168) = v11;
    v12 = v27;
    v13 = v28;
    v14 = v29;
    *(_BYTE *)(v7 + 184) = v30;
    v15 = v7 + 172;
    *(_DWORD *)v15 = v12;
    *(_DWORD *)(v15 + 4) = v13;
    *(_DWORD *)(v15 + 8) = v14;
    *(_DWORD *)(v3 + 32) += 192;
  if ( v26 )
    (*(void (**)(void))(*(_DWORD *)v26 + 4))();
  v26 = 0;
  if ( v25 )
    (*(void (**)(void))(*(_DWORD *)v25 + 4))();
  v25 = 0;
  if ( v24 )
    (*(void (**)(void))(*(_DWORD *)v24 + 4))();
  v24 = 0;
  if ( v23 )
    (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  v23 = 0;
  v16 = *(_DWORD *)(v3 + 260);
  if ( v16 )
    (*(void (**)(void))(**(_DWORD **)v16 + 12))();
  v17 = *(_DWORD *)(v3 + 264);
  if ( v17 )
    (*(void (**)(void))(**(_DWORD **)v17 + 12))();
  v18 = *(_DWORD *)(v3 + 268);
  if ( v18 )
    (*(void (**)(void))(**(_DWORD **)v18 + 12))();
  v19 = *(_DWORD *)(v3 + 272);
  if ( v19 )
    (*(void (**)(void))(**(_DWORD **)v19 + 12))();
  result = (RakNet *)(_stack_chk_guard - v31);
  if ( _stack_chk_guard != v31 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall NetworkHandler::onOutgoingConnectionFailed(NetworkHandler *this)
{
  NetworkHandler *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3
  int v4; // r0@5
  int result; // r0@7

  v1 = this;
  v2 = *((_DWORD *)this + 65);
  if ( v2 )
    (*(void (**)(void))(**(_DWORD **)v2 + 16))();
  v3 = *((_DWORD *)v1 + 66);
  if ( v3 )
    (*(void (**)(void))(**(_DWORD **)v3 + 16))();
  v4 = *((_DWORD *)v1 + 67);
  if ( v4 )
    (*(void (**)(void))(**(_DWORD **)v4 + 16))();
  result = *((_DWORD *)v1 + 68);
  if ( result )
    result = (*(int (**)(void))(**(_DWORD **)result + 16))();
  return result;
}


void __fastcall NetworkHandler::unregisterClientOrServerInstance(NetworkHandler *this, const unsigned __int8 *a2)
{
  NetworkHandler::unregisterClientOrServerInstance(this, a2);
}


void __fastcall NetworkHandler::_sortAndPacketizeEvents(int a1, int a2)
{
  NetworkHandler::_sortAndPacketizeEvents(a1, a2);
}


RakNet *__fastcall NetworkHandler::onNewIncomingConnection(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r3@1
  __int64 v7; // kr00_8@1
  int v8; // r0@2
  int v9; // r0@2
  int v10; // r0@2
  int v11; // r0@2
  int v12; // r1@2
  int v13; // r2@2
  int v14; // r3@2
  int v15; // r0@2
  RakNet *result; // r0@12
  __int64 v17; // [sp+10h] [bp-E0h]@1
  char v18; // [sp+18h] [bp-D8h]@1
  int v19; // [sp+B4h] [bp-3Ch]@2
  int v20; // [sp+B8h] [bp-38h]@2
  int v21; // [sp+BCh] [bp-34h]@2
  int v22; // [sp+C0h] [bp-30h]@2
  int v23; // [sp+C4h] [bp-2Ch]@2
  int v24; // [sp+C8h] [bp-28h]@2
  int v25; // [sp+CCh] [bp-24h]@2
  char v26; // [sp+D0h] [bp-20h]@2
  RakNet *v27; // [sp+D8h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v27 = _stack_chk_guard;
  sub_21E0378(&v17);
  NetworkHandler::Connection::Connection((int)&v18, v5, v4, v6, v17, 0);
  v7 = *(_QWORD *)(v3 + 32);
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    std::vector<NetworkHandler::Connection,std::allocator<NetworkHandler::Connection>>::_M_emplace_back_aux<NetworkHandler::Connection>(
      (unsigned __int64 *)(v3 + 28),
      (int)&v18);
  }
  else
    _aeabi_memcpy8(v7, &v18, 156);
    v8 = v19;
    v19 = 0;
    *(_DWORD *)(v7 + 156) = v8;
    v9 = v20;
    v20 = 0;
    *(_DWORD *)(v7 + 160) = v9;
    v10 = v21;
    v21 = 0;
    *(_DWORD *)(v7 + 164) = v10;
    v11 = v22;
    v22 = 0;
    *(_DWORD *)(v7 + 168) = v11;
    v12 = v23;
    v13 = v24;
    v14 = v25;
    *(_BYTE *)(v7 + 184) = v26;
    v15 = v7 + 172;
    *(_DWORD *)v15 = v12;
    *(_DWORD *)(v15 + 4) = v13;
    *(_DWORD *)(v15 + 8) = v14;
    *(_DWORD *)(v3 + 32) += 192;
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  v22 = 0;
  if ( v21 )
    (*(void (**)(void))(*(_DWORD *)v21 + 4))();
  v21 = 0;
  if ( v20 )
    (*(void (**)(void))(*(_DWORD *)v20 + 4))();
  v20 = 0;
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  result = (RakNet *)(_stack_chk_guard - v27);
  if ( _stack_chk_guard != v27 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall NetworkHandler::setDefaultGamePortv6(int result, __int16 a2)
{
  *(_WORD *)(result + 280) = a2;
  return result;
}


char *__fastcall NetworkHandler::getConnections(NetworkHandler *this)
{
  return (char *)this + 28;
}


void __fastcall NetworkHandler::registerServerInstance(NetworkHandler *this, NetEventCallback *a2)
{
  NetworkHandler::registerServerInstance(this, a2);
}


int __fastcall NetworkHandler::Connection::Connection(int a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v6; // r7@1
  int v7; // r5@1
  int v8; // r4@1
  int result; // r0@2
  void *v10; // r6@3
  int v11; // r0@3
  void *v12; // r7@5
  int v13; // r0@5
  int v14; // r7@6
  __int64 v15; // r0@7
  int v16; // r6@7
  int v17; // r0@7

  v6 = a3;
  v7 = a1;
  _aeabi_memcpy8(a1, a2, 152);
  *(_DWORD *)(v7 + 156) = 0;
  v8 = v7 + 156;
  *(_DWORD *)(v8 + 12) = 0;
  *(_DWORD *)(v8 + 4) = 0;
  *(_DWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 20) = a5;
  *(_BYTE *)(v8 + 28) = 0;
  *(_DWORD *)(v8 - 4) = 0;
  if ( a6 == 1 )
  {
    *(_DWORD *)(v7 + 172) = v6;
    *(_DWORD *)(v7 + 152) = 1;
    result = v7;
  }
  else
    v10 = operator new(0x28u);
    EncryptedNetworkPeer::EncryptedNetworkPeer((int)v10, v6);
    v11 = *(_DWORD *)(v7 + 160);
    *(_DWORD *)(v7 + 160) = v10;
    if ( v11 )
    {
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
      v10 = *(void **)(v7 + 160);
    }
    v12 = operator new(8u);
    CompressedNetworkPeer::CompressedNetworkPeer((int)v12, (int)v10);
    v13 = *(_DWORD *)(v7 + 164);
    *(_DWORD *)(v7 + 164) = v12;
    if ( v13 )
      (*(void (**)(void))(*(_DWORD *)v13 + 4))();
      v14 = *(_DWORD *)(v7 + 164);
    LODWORD(v15) = operator new(0x30u);
    v16 = v15;
    BatchedNetworkPeer::BatchedNetworkPeer(v15);
    v17 = *(_DWORD *)(v7 + 168);
    *(_DWORD *)(v7 + 168) = v16;
    if ( v17 )
      (*(void (**)(void))(*(_DWORD *)v17 + 4))();
      v16 = *(_DWORD *)(v7 + 168);
    *(_DWORD *)(v7 + 172) = v16;
  return result;
}


NetworkHandler *__fastcall NetworkHandler::~NetworkHandler(NetworkHandler *this)
{
  NetworkHandler *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3
  int v4; // r0@5
  void *v5; // r5@7
  void *v6; // r5@9
  void *v7; // r5@11
  void *v8; // r5@13
  void *v9; // r5@14
  NetworkHandler *v10; // r6@14
  void *v11; // r5@17
  void *v12; // r5@19
  void *v13; // r5@21
  int v14; // r5@23 OVERLAPPED
  int v15; // r6@23 OVERLAPPED
  int v16; // r0@24
  int v17; // r0@26
  int v18; // r0@28
  int v19; // r0@30
  int v20; // r5@36
  int v21; // r1@37
  int v22; // r2@37
  int v23; // r3@37
  int v24; // r7@37
  int v25; // r6@37
  int v26; // r12@37
  int v27; // lr@37
  void *v28; // r0@37
  unsigned int v29; // r7@38
  unsigned int v30; // r1@38
  unsigned int v31; // r6@39
  void *v32; // t1@40
  int v33; // r0@46
  int v34; // r0@48
  int v35; // r0@50
  int v37; // [sp+0h] [bp-38h]@37
  int v38; // [sp+4h] [bp-34h]@37
  int v39; // [sp+8h] [bp-30h]@37
  int v40; // [sp+Ch] [bp-2Ch]@37
  int v41; // [sp+10h] [bp-28h]@37
  int v42; // [sp+14h] [bp-24h]@37
  int v43; // [sp+18h] [bp-20h]@37
  int v44; // [sp+1Ch] [bp-1Ch]@37

  v1 = this;
  *(_DWORD *)this = &off_26E9298;
  *((_DWORD *)this + 1) = &off_26E92D4;
  *((_DWORD *)this + 2) = &off_26E92F4;
  v2 = *((_DWORD *)this + 5);
  *((_DWORD *)v1 + 5) = 0;
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  v3 = *((_DWORD *)v1 + 4);
  *((_DWORD *)v1 + 4) = 0;
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  v4 = *((_DWORD *)v1 + 3);
  *((_DWORD *)v1 + 3) = 0;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  v5 = (void *)*((_DWORD *)v1 + 65);
  *((_DWORD *)v1 + 65) = 0;
  if ( v5 )
  {
    std::deque<std::unique_ptr<Packet,std::default_delete<Packet>>,std::allocator<std::unique_ptr<Packet,std::default_delete<Packet>>>>::~deque((int)v5 + 8);
    operator delete(v5);
  }
  v6 = (void *)*((_DWORD *)v1 + 66);
  *((_DWORD *)v1 + 66) = 0;
  if ( v6 )
    std::deque<std::unique_ptr<Packet,std::default_delete<Packet>>,std::allocator<std::unique_ptr<Packet,std::default_delete<Packet>>>>::~deque((int)v6 + 8);
    operator delete(v6);
  v7 = (void *)*((_DWORD *)v1 + 67);
  *((_DWORD *)v1 + 67) = 0;
  if ( v7 )
    std::deque<std::unique_ptr<Packet,std::default_delete<Packet>>,std::allocator<std::unique_ptr<Packet,std::default_delete<Packet>>>>::~deque((int)v7 + 8);
    operator delete(v7);
  v8 = (void *)*((_DWORD *)v1 + 68);
  *((_DWORD *)v1 + 68) = 0;
  if ( v8 )
    std::deque<std::unique_ptr<Packet,std::default_delete<Packet>>,std::allocator<std::unique_ptr<Packet,std::default_delete<Packet>>>>::~deque((int)v8 + 8);
    operator delete(v8);
    v9 = (void *)*((_DWORD *)v1 + 68);
    v10 = (NetworkHandler *)((char *)v1 + 272);
    if ( v9 )
    {
      std::deque<std::unique_ptr<Packet,std::default_delete<Packet>>,std::allocator<std::unique_ptr<Packet,std::default_delete<Packet>>>>::~deque((int)v9 + 8);
      operator delete(v9);
    }
  else
  *(_DWORD *)v10 = 0;
  v11 = (void *)*((_DWORD *)v1 + 67);
  if ( v11 )
    std::deque<std::unique_ptr<Packet,std::default_delete<Packet>>,std::allocator<std::unique_ptr<Packet,std::default_delete<Packet>>>>::~deque((int)v11 + 8);
    operator delete(v11);
  v12 = (void *)*((_DWORD *)v1 + 66);
  if ( v12 )
    std::deque<std::unique_ptr<Packet,std::default_delete<Packet>>,std::allocator<std::unique_ptr<Packet,std::default_delete<Packet>>>>::~deque((int)v12 + 8);
    operator delete(v12);
  v13 = (void *)*((_DWORD *)v1 + 65);
  if ( v13 )
    std::deque<std::unique_ptr<Packet,std::default_delete<Packet>>,std::allocator<std::unique_ptr<Packet,std::default_delete<Packet>>>>::~deque((int)v13 + 8);
    operator delete(v13);
  ResourcePackTransmissionManager::~ResourcePackTransmissionManager((NetworkHandler *)((char *)v1 + 204));
  *(_QWORD *)&v14 = *(_QWORD *)((char *)v1 + 28);
  if ( v14 != v15 )
    do
      v16 = *(_DWORD *)(v14 + 168);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
      *(_DWORD *)(v14 + 168) = 0;
      v17 = *(_DWORD *)(v14 + 164);
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 4))();
      *(_DWORD *)(v14 + 164) = 0;
      v18 = *(_DWORD *)(v14 + 160);
      if ( v18 )
        (*(void (**)(void))(*(_DWORD *)v18 + 4))();
      *(_DWORD *)(v14 + 160) = 0;
      v19 = *(_DWORD *)(v14 + 156);
      if ( v19 )
        (*(void (**)(void))(*(_DWORD *)v19 + 4))();
      *(_DWORD *)(v14 + 156) = 0;
      v14 += 192;
    while ( v15 != v14 );
    v14 = *((_DWORD *)v1 + 7);
  if ( v14 )
    operator delete((void *)v14);
  v20 = *((_DWORD *)v1 + 6);
  if ( v20 )
    v21 = *(_DWORD *)(v20 + 964);
    v22 = *(_DWORD *)(v20 + 968);
    v23 = *(_DWORD *)(v20 + 972);
    v24 = *(_DWORD *)(v20 + 976);
    v25 = *(_DWORD *)(v20 + 980);
    v26 = *(_DWORD *)(v20 + 984);
    v27 = *(_DWORD *)(v20 + 988);
    v41 = *(_DWORD *)(v20 + 960);
    v42 = v21;
    v43 = v22;
    v44 = v23;
    v37 = v24;
    v38 = v25;
    v39 = v26;
    v40 = v27;
    std::deque<std::function<void ()(void)>,std::allocator<std::function<void ()(void)>>>::_M_destroy_data_aux(
      v20 + 952,
      (int)&v41,
      (int)&v37);
    v28 = *(void **)(v20 + 952);
    if ( v28 )
      v29 = *(_DWORD *)(v20 + 988);
      v30 = *(_DWORD *)(v20 + 972);
      if ( v30 < v29 + 4 )
      {
        v31 = v30 - 4;
        do
        {
          v32 = *(void **)(v31 + 4);
          v31 += 4;
          operator delete(v32);
        }
        while ( v31 < v29 );
        v28 = *(void **)(v20 + 952);
      }
      operator delete(v28);
    if ( *(_DWORD *)v20 )
      operator delete(*(void **)v20);
    operator delete((void *)v20);
  *((_DWORD *)v1 + 6) = 0;
  v33 = *((_DWORD *)v1 + 5);
  if ( v33 )
    (*(void (**)(void))(*(_DWORD *)v33 + 4))();
  v34 = *((_DWORD *)v1 + 4);
  if ( v34 )
    (*(void (**)(void))(*(_DWORD *)v34 + 4))();
  v35 = *((_DWORD *)v1 + 3);
  if ( v35 )
    (*(void (**)(void))(*(_DWORD *)v35 + 4))();
  return v1;
}


int __fastcall NetworkHandler::update(NetworkHandler *this)
{
  NetworkHandler *v1; // r8@1
  __int64 i; // r6@1
  int v3; // r0@2
  int v5; // [sp+0h] [bp-28h]@3
  void (__fastcall *v6)(int *, int *, signed int); // [sp+8h] [bp-20h]@3

  v1 = this;
  for ( i = *(_QWORD *)((char *)this + 28); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 192 )
  {
    v3 = *(_DWORD *)(i + 168);
    if ( v3 )
    {
      v6 = 0;
      BatchedNetworkPeer::flush(v3, (int)&v5);
      if ( v6 )
        v6(&v5, &v5, 3);
    }
  }
  UPNPInterface::tick(*((UPNPInterface **)v1 + 6));
  RakNetServerLocator::update(*((RakNetServerLocator **)v1 + 5));
  RakNetInstance::tick(*((RakNetInstance **)v1 + 3));
  return ResourcePackTransmissionManager::update((NetworkHandler *)((char *)v1 + 204));
}


void __fastcall NetworkHandler::~NetworkHandler(NetworkHandler *this)
{
  NetworkHandler *v1; // r0@1

  v1 = NetworkHandler::~NetworkHandler(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall NetworkHandler::setCloseConnection(int result, const NetworkIdentifier *a2)
{
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  const NetworkIdentifier *i; // r4@1

  *(_QWORD *)&v2 = *(_QWORD *)(result + 28);
  for ( i = a2; v3 != v2; v2 += 192 )
  {
    result = *(_DWORD *)(v2 + 144);
    if ( *((_DWORD *)i + 36) == result )
    {
      result = NetworkIdentifier::equalsTypeData(i, (const NetworkIdentifier *)v2);
      if ( result == 1 )
        *(_BYTE *)(v2 + 184) = 1;
    }
  }
  return result;
}


int __fastcall NetworkHandler::getResourcePackDownloadManager(int a1, int a2, NetworkIdentifier *a3, int **a4)
{
  return j_j_j__ZN31ResourcePackTransmissionManager30getResourcePackDownloadManagerER12PacketSenderRK17NetworkIdentifierRKSs(
           (unsigned __int64 *)(a1 + 204),
           a2,
           a3,
           a4);
}


RakNet *__fastcall NetworkHandler::_eventLoop(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r10@1
  int v6; // r8@1
  int v7; // r0@2
  int v8; // r6@3
  _DWORD *v9; // r9@3
  int (__fastcall *v10)(int, int, int); // r6@4
  int v11; // r0@4
  int v12; // r6@6
  void (__fastcall *v13)(int, char *, _DWORD, _DWORD); // r7@6
  int v14; // r6@8
  _DWORD *v15; // r7@8
  int v16; // r0@11
  int v17; // r0@14
  int v18; // r5@17
  void (__fastcall *v19)(int, char *, signed int, _DWORD); // r9@17
  RakNet::SystemAddress *v20; // r0@17
  _DWORD **v21; // r4@21
  _DWORD *v22; // r5@21
  int v23; // r0@25
  int v24; // r0@25
  RakNet *result; // r0@28
  int v26; // [sp+4h] [bp-15Ch]@1
  char v27; // [sp+8h] [bp-158h]@17
  __int16 v28; // [sp+10h] [bp-150h]@17
  int v29; // [sp+18h] [bp-148h]@17
  char v30; // [sp+A0h] [bp-C0h]@6
  __int16 v31; // [sp+A8h] [bp-B8h]@6
  int v32; // [sp+B0h] [bp-B0h]@6
  RakNet *v33; // [sp+138h] [bp-28h]@1

  v4 = a4;
  v5 = a3;
  v26 = a1;
  v6 = a1 + 4 * a2 + 260;
  v33 = _stack_chk_guard;
  if ( &pthread_create )
  {
    v7 = pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)v6 + 4));
    if ( v7 )
      sub_21E5E14(v7);
  }
  v8 = *(_DWORD *)v6;
  v9 = *(_DWORD **)(*(_DWORD *)v6 + 16);
  if ( *(_DWORD **)(*(_DWORD *)v6 + 32) != v9 )
    while ( 1 )
    {
      v10 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 28);
      v11 = (*(int (__cdecl **)(_DWORD))(*(_DWORD *)*v9 + 8))(*v9);
      if ( v10(v5, v4, v11) == 1 )
      {
        (*(void (__cdecl **)(_DWORD, int))(*(_DWORD *)*v9 + 24))(*v9, v4);
      }
      else
        v12 = RakNetInstance::getPeer(*(RakNetInstance **)(v26 + 12));
        v13 = *(void (__fastcall **)(int, char *, _DWORD, _DWORD))(*(_DWORD *)v12 + 108);
        RakNet::RakNetGUID::RakNetGUID((RakNet::RakNetGUID *)&v30);
        RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)&v32);
        *(_QWORD *)&v30 = *(_QWORD *)v4;
        v31 = *(_WORD *)(v4 + 8);
        RakNet::SystemAddress::operator=((int)&v32, (int)&unk_27EA730);
        v13(v12, &v30, 0, 0);
      if ( *(_BYTE *)(v4 + 184) )
        break;
      v14 = *(_DWORD *)v6;
      v15 = *(_DWORD **)(*(_DWORD *)v6 + 16);
      if ( v15 == (_DWORD *)(*(_DWORD *)(*(_DWORD *)v6 + 24) - 4) )
        if ( *v15 )
          (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)*v15 + 4))(*v15, *(_DWORD *)(*(_DWORD *)*v15 + 4));
        *v15 = 0;
        operator delete(*(void **)(v14 + 20));
        v17 = *(_DWORD *)(v14 + 28);
        *(_DWORD *)(v14 + 28) = v17 + 4;
        v16 = *(_DWORD *)(v17 + 4);
        *(_DWORD *)(v14 + 20) = v16;
        *(_DWORD *)(v14 + 24) = v16 + 512;
        v16 = *(_DWORD *)(v14 + 16) + 4;
      *(_DWORD *)(v14 + 16) = v16;
      v8 = *(_DWORD *)v6;
      v9 = *(_DWORD **)(*(_DWORD *)v6 + 16);
      if ( *(_DWORD **)(*(_DWORD *)v6 + 32) == v9 )
        goto LABEL_26;
    }
    v18 = RakNetInstance::getPeer(*(RakNetInstance **)(v26 + 12));
    v19 = *(void (__fastcall **)(int, char *, signed int, _DWORD))(*(_DWORD *)v18 + 108);
    RakNet::RakNetGUID::RakNetGUID((RakNet::RakNetGUID *)&v27);
    v20 = RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)&v29);
    *(_QWORD *)&v27 = *(_QWORD *)v4;
    v28 = *(_WORD *)(v4 + 8);
    RakNet::SystemAddress::operator=((int)v20, (int)&unk_27EA730);
    v19(v18, &v27, 1, 0);
      v21 = (_DWORD **)(*(_DWORD *)v6 + 16);
      v22 = *v21;
      if ( *(_DWORD **)(*(_DWORD *)v6 + 32) == *v21 )
      if ( v22 == (_DWORD *)(*(_DWORD *)(v8 + 24) - 4) )
        if ( *v22 )
          (*(void (__cdecl **)(_DWORD))(*(_DWORD *)*v22 + 4))(*v22);
        *v22 = 0;
        operator delete(*(void **)(v8 + 20));
        v23 = *(_DWORD *)(v8 + 28);
        *(_DWORD *)(v8 + 28) = v23 + 4;
        v24 = *(_DWORD *)(v23 + 4);
        *(_DWORD *)(v8 + 20) = v24;
        *(_DWORD *)(v8 + 24) = v24 + 512;
        *(_DWORD *)(v8 + 16) = v24;
        ++*v21;
LABEL_26:
    pthread_mutex_unlock((pthread_mutex_t *)(v8 + 4));
  result = (RakNet *)(_stack_chk_guard - v33);
  if ( _stack_chk_guard != v33 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall NetworkHandler::useIPv4Only(NetworkHandler *this)
{
  return 0;
}


signed int __fastcall NetworkHandler::isHostingPlayer(NetworkHandler *this, const NetworkIdentifier *a2, const unsigned __int8 *a3)
{
  signed int result; // r0@3

  if ( *a3 != *((_BYTE *)this + 200) || *((_DWORD *)a2 + 36) != *((_DWORD *)this + 48) )
    result = 0;
  else
    result = NetworkIdentifier::equalsTypeData(a2, (NetworkHandler *)((char *)this + 48));
  return result;
}


NetworkIdentifier *__fastcall NetworkHandler::cleanupResourcePackManager(NetworkHandler *this, const NetworkIdentifier *a2)
{
  return j_j_j__ZN31ResourcePackTransmissionManager26cleanupResourcePackManagerERK17NetworkIdentifier(
           (NetworkHandler *)((char *)this + 204),
           a2);
}


int __fastcall NetworkHandler::resetLocalNetworkId(NetworkHandler *this)
{
  int v1; // r0@1

  v1 = RakNetInstance::getPeer(*((RakNetInstance **)this + 3));
  return (*(int (**)(void))(*(_DWORD *)v1 + 212))();
}


void __fastcall NetworkHandler::unregisterClientOrServerInstance(NetworkHandler *this, const unsigned __int8 *a2)
{
  char *v2; // r0@1
  void *v3; // r4@1

  v2 = (char *)this + 4 * *a2;
  v3 = (void *)*((_DWORD *)v2 + 65);
  *((_DWORD *)v2 + 65) = 0;
  if ( v3 )
  {
    std::deque<std::unique_ptr<Packet,std::default_delete<Packet>>,std::allocator<std::unique_ptr<Packet,std::default_delete<Packet>>>>::~deque((int)v3 + 8);
    j_j_j__ZdlPv_5(v3);
  }
}


RakNet *__fastcall NetworkHandler::closeConnection(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r6@1
  void (__fastcall *v6)(int, char *, signed int, _DWORD); // r8@1
  RakNet::SystemAddress *v7; // r0@1
  RakNetInstance *v8; // r5@1
  RakNet *result; // r0@1
  char v10; // [sp+8h] [bp-150h]@1
  char v11; // [sp+A0h] [bp-B8h]@1
  __int16 v12; // [sp+A8h] [bp-B0h]@1
  int v13; // [sp+B0h] [bp-A8h]@1
  RakNet *v14; // [sp+13Ch] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  v14 = _stack_chk_guard;
  (*(void (**)(void))(*(_DWORD *)a1 + 16))();
  v4 = RakNetInstance::getPeer(*(RakNetInstance **)(v2 + 12));
  v5 = v4;
  v6 = *(void (__fastcall **)(int, char *, signed int, _DWORD))(*(_DWORD *)v4 + 108);
  RakNet::RakNetGUID::RakNetGUID((RakNet::RakNetGUID *)&v11);
  v7 = RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)&v13);
  *(_QWORD *)&v11 = *(_QWORD *)v3;
  v12 = *(_WORD *)(v3 + 8);
  RakNet::SystemAddress::operator=((int)v7, (int)&unk_27EA730);
  v6(v5, &v11, 1, 0);
  v8 = *(RakNetInstance **)(v2 + 12);
  NetworkIdentifier::NetworkIdentifier((int)&v10, v3);
  RakNetInstance::_removePeer(v8, (const NetworkIdentifier *)&v10);
  result = (RakNet *)(_stack_chk_guard - v14);
  if ( _stack_chk_guard != v14 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall NetworkHandler::flush(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r9@1
  int i; // r5@1
  int v7; // r7@5
  void (__fastcall *v8)(int *, int, signed int); // r3@6
  int v9; // [sp+0h] [bp-30h]@7
  void (__fastcall *v10)(int *, int *, signed int); // [sp+8h] [bp-28h]@6
  int v11; // [sp+Ch] [bp-24h]@7

  v3 = *(_QWORD *)(a1 + 28) >> 32;
  v4 = *(_QWORD *)(a1 + 28);
  v5 = a3;
  for ( i = a2; v3 != v4; v4 += 192 )
  {
    if ( !*(_BYTE *)(v4 + 184)
      && *(_DWORD *)(i + 144) == *(_DWORD *)(v4 + 144)
      && NetworkIdentifier::equalsTypeData((NetworkIdentifier *)i, (const NetworkIdentifier *)v4) == 1 )
    {
      v7 = *(_DWORD *)(v4 + 168);
      if ( v7 )
      {
        v10 = 0;
        v8 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
        if ( v8 )
        {
          v8(&v9, v5, 2);
          v11 = *(_DWORD *)(v5 + 12);
          v10 = *(void (__fastcall **)(int *, int *, signed int))(v5 + 8);
        }
        BatchedNetworkPeer::flush(v7, (int)&v9);
        if ( v10 )
          v10(&v9, &v9, 3);
      }
    }
  }
}


int __fastcall NetworkHandler::enableAsyncFlush(int result, const NetworkIdentifier *a2)
{
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  const NetworkIdentifier *v4; // r4@1

  *(_QWORD *)&v2 = *(_QWORD *)(result + 28);
  v4 = a2;
  if ( v2 != v3 )
  {
    while ( 1 )
    {
      result = *(_BYTE *)(v2 + 184);
      if ( !*(_BYTE *)(v2 + 184) )
      {
        result = *(_DWORD *)(v2 + 144);
        if ( *((_DWORD *)v4 + 36) == result )
        {
          result = NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)v2);
          if ( result == 1 )
          {
            result = *(_DWORD *)(v2 + 168);
            if ( result )
              break;
          }
        }
      }
      v2 += 192;
      if ( v3 == v2 )
        return result;
    }
    result = j_j_j__ZN18BatchedNetworkPeer15setAsyncEnabledEb((BatchedNetworkPeer *)result, 1);
  }
  return result;
}


void __fastcall NetworkHandler::_sortAndPacketizeEvents(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r0@1
  int v5; // r0@3
  int v6; // r0@4
  int v7; // r0@7
  int v8; // r0@10
  int v9; // r9@14
  int v10; // r4@14
  unsigned int v11; // r8@14
  int v12; // r0@16
  int v13; // r4@20
  Packet **v14; // r0@21
  Packet *v15; // r1@22
  int v16; // r0@22
  Packet **v17; // r0@25
  Packet *v18; // r1@25
  int v19; // r0@25
  void *v20; // r0@29
  void *v21; // r0@30
  unsigned int *v22; // r2@31
  signed int v23; // r1@33
  unsigned int *v24; // r2@35
  signed int v25; // r1@37
  int v26; // r0@46
  int v27; // r0@49
  int v28; // r0@52
  int v29; // r0@55
  char *v30; // r0@58
  unsigned int *v31; // r2@60
  signed int v32; // r1@62
  char v33; // [sp+10h] [bp-50h]@15
  Packet *v34; // [sp+18h] [bp-48h]@14
  void **v35; // [sp+1Ch] [bp-44h]@14
  unsigned int v36; // [sp+20h] [bp-40h]@14
  int v37; // [sp+24h] [bp-3Ch]@30
  _DWORD *v38; // [sp+28h] [bp-38h]@17
  int v39; // [sp+2Ch] [bp-34h]@29
  _BYTE **v40; // [sp+34h] [bp-2Ch]@1

  v2 = a1;
  v3 = a2;
  v40 = (_BYTE **)&unk_28898CC;
  v4 = *(_DWORD *)(a1 + 260);
  if ( v4 && &pthread_create && (v5 = pthread_mutex_lock((pthread_mutex_t *)(v4 + 4))) != 0
    || (v6 = *(_DWORD *)(v2 + 264)) != 0
    && &pthread_create
    && (v5 = pthread_mutex_lock((pthread_mutex_t *)(v6 + 4))) != 0
    || (v7 = *(_DWORD *)(v2 + 268)) != 0
    && (v5 = pthread_mutex_lock((pthread_mutex_t *)(v7 + 4))) != 0
    || (v8 = *(_DWORD *)(v2 + 272)) != 0
    && (v5 = pthread_mutex_lock((pthread_mutex_t *)(v8 + 4))) != 0 )
  {
    sub_21E5E14(v5);
  }
  while ( !(*(int (**)(void))(**(_DWORD **)(v3 + 172) + 12))() )
    BinaryStream::BinaryStream((int)&v35, &v40);
    v9 = ReadOnlyBinaryStream::getUnsignedVarInt((ReadOnlyBinaryStream *)&v35);
    v10 = ReadOnlyBinaryStream::getByte((ReadOnlyBinaryStream *)&v35);
    v11 = v36;
    MinecraftPackets::createPacket((MinecraftPackets *)&v34, v9);
    if ( v34 )
    {
      sub_21E0378(&v33);
      *(_QWORD *)(v3 + 176) = *(_QWORD *)&v33;
      if ( Packet::readWithHeader(v34, (BinaryStream *)&v35) == 1 )
      {
        v12 = *(_DWORD *)(v2 + 40);
        if ( v12 )
        {
          if ( *(_DWORD *)(*v38 - 12) < v11 )
            v11 = *(_DWORD *)(*v38 - 12);
          v36 = v11;
          (*(void (**)(void))(*(_DWORD *)v12 + 12))();
        }
        v13 = *(_DWORD *)(v2 + 4 * v10 + 260);
        if ( v13 )
          v14 = *(Packet ***)(v13 + 32);
          if ( v14 == (Packet **)(*(_DWORD *)(v13 + 40) - 4) )
          {
            if ( (unsigned int)((*(_QWORD *)(v13 + 8) >> 32)
                              - ((signed int)(*(_DWORD *)(v13 + 44) - *(_QWORD *)(v13 + 8)) >> 2)) <= 1 )
              std::deque<std::unique_ptr<Packet,std::default_delete<Packet>>,std::allocator<std::unique_ptr<Packet,std::default_delete<Packet>>>>::_M_reallocate_map(
                v13 + 8,
                1u,
                0);
            *(_DWORD *)(*(_DWORD *)(v13 + 44) + 4) = operator new(0x200u);
            v17 = *(Packet ***)(v13 + 32);
            v18 = v34;
            v34 = 0;
            *v17 = v18;
            v19 = *(_DWORD *)(v13 + 44);
            *(_DWORD *)(v13 + 44) = v19 + 4;
            v16 = *(_DWORD *)(v19 + 4);
            *(_DWORD *)(v13 + 36) = v16;
            *(_DWORD *)(v13 + 40) = v16 + 512;
          }
          else
            v15 = v34;
            *v14 = v15;
            v16 = *(_DWORD *)(v13 + 32) + 4;
          *(_DWORD *)(v13 + 32) = v16;
      }
      sub_21E7EE0((const void **)&v40, 0, *(v40 - 3), 0);
      if ( v34 )
        (*(void (**)(void))(*(_DWORD *)v34 + 4))();
    }
    v35 = &off_26D53E4;
    v20 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v39 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v35 = &off_26E91A4;
    v21 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v37 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
  v26 = *(_DWORD *)(v2 + 260);
  if ( v26 && &pthread_create )
    pthread_mutex_unlock((pthread_mutex_t *)(v26 + 4));
  v27 = *(_DWORD *)(v2 + 264);
  if ( v27 && &pthread_create )
    pthread_mutex_unlock((pthread_mutex_t *)(v27 + 4));
  v28 = *(_DWORD *)(v2 + 268);
  if ( v28 && &pthread_create )
    pthread_mutex_unlock((pthread_mutex_t *)(v28 + 4));
  v29 = *(_DWORD *)(v2 + 272);
  if ( v29 && &pthread_create )
    pthread_mutex_unlock((pthread_mutex_t *)(v29 + 4));
  v30 = (char *)(v40 - 3);
  if ( (int *)(v40 - 3) != &dword_28898C0 )
    v31 = (unsigned int *)(v40 - 1);
    if ( &pthread_create )
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
}


int __fastcall NetworkHandler::setUseIPv6Only(int result, bool a2)
{
  *(_BYTE *)(result + 276) = a2;
  return result;
}


int __fastcall NetworkHandler::getEncryptedPeerForUser(NetworkHandler *this, const NetworkIdentifier *a2)
{
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  const NetworkIdentifier *v4; // r4@1
  signed int v5; // r0@3
  bool v6; // zf@3
  int result; // r0@7

  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 28);
  v4 = a2;
  if ( v2 == v3 )
  {
LABEL_7:
    result = 0;
  }
  else
    while ( 1 )
    {
      if ( *((_DWORD *)v4 + 36) == *(_DWORD *)(v2 + 144) )
      {
        v5 = NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)v2);
        v6 = v5 == 1;
        if ( v5 == 1 )
          v6 = *(_BYTE *)(v2 + 184) == 0;
        if ( v6 )
          break;
      }
      v2 += 192;
      if ( v3 == v2 )
        goto LABEL_7;
    }
    result = *(_DWORD *)(v2 + 160);
  return result;
}


RakNet *__fastcall NetworkHandler::runEvents(NetworkHandler *this)
{
  NetworkHandler *v1; // r4@1
  RakNet *result; // r0@1
  int i; // r5@1
  int v4; // r8@1
  int v5; // r0@2
  int v6; // r0@5
  int v7; // r0@8

  v1 = this;
  RakNetInstance::runEvents(*((RakNetInstance **)this + 3));
  result = (RakNet *)LocalConnector::runEvents(*((LocalConnector **)v1 + 4));
  v4 = *(_QWORD *)((char *)v1 + 28) >> 32;
  for ( i = *(_QWORD *)((char *)v1 + 28); v4 != i; i += 192 )
  {
    NetworkHandler::_sortAndPacketizeEvents((int)v1, i);
    v5 = *((_DWORD *)v1 + 65);
    if ( v5
      && 32 * (*(_DWORD *)(v5 + 44) - (*(_QWORD *)(v5 + 24) >> 32))
       + ((signed int)(*(_QWORD *)(v5 + 32) - (*(_QWORD *)(v5 + 32) >> 32)) >> 2)
       - 128
       + ((signed int)(*(_QWORD *)(v5 + 24) - *(_DWORD *)(v5 + 16)) >> 2) )
    {
      NetworkHandler::_eventLoop((int)v1, 0, *(_DWORD *)v5, i);
    }
    v6 = *((_DWORD *)v1 + 66);
    if ( v6
      && 32 * (*(_DWORD *)(v6 + 44) - (*(_QWORD *)(v6 + 24) >> 32))
       + ((signed int)(*(_QWORD *)(v6 + 32) - (*(_QWORD *)(v6 + 32) >> 32)) >> 2)
       + ((signed int)(*(_QWORD *)(v6 + 24) - *(_DWORD *)(v6 + 16)) >> 2) )
      NetworkHandler::_eventLoop((int)v1, 1, *(_DWORD *)v6, i);
    v7 = *((_DWORD *)v1 + 67);
    if ( v7
      && 32 * (*(_DWORD *)(v7 + 44) - (*(_QWORD *)(v7 + 24) >> 32))
       + ((signed int)(*(_QWORD *)(v7 + 32) - (*(_QWORD *)(v7 + 32) >> 32)) >> 2)
       + ((signed int)(*(_QWORD *)(v7 + 24) - *(_DWORD *)(v7 + 16)) >> 2) )
      NetworkHandler::_eventLoop((int)v1, 2, *(_DWORD *)v7, i);
    result = (RakNet *)*((_DWORD *)v1 + 68);
    if ( result )
      if ( 32 * (*((_DWORD *)result + 11) - (*((_QWORD *)result + 3) >> 32))
         + ((signed int)(*((_QWORD *)result + 4) - (*((_QWORD *)result + 4) >> 32)) >> 2)
         - 128
         + ((signed int)(*((_QWORD *)result + 3) - *((_DWORD *)result + 4)) >> 2) )
      {
        result = NetworkHandler::_eventLoop((int)v1, 3, *(_DWORD *)result, i);
      }
  }
  return result;
}


int __fastcall NetworkHandler::getLocalNetworkId(NetworkHandler *this, int a2)
{
  NetworkHandler *v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+0h] [bp-20h]@1

  v2 = this;
  v3 = RakNetInstance::getPeer(*(RakNetInstance **)(a2 + 12));
  (*(void (__fastcall **)(int *))(*(_DWORD *)v3 + 208))(&v5);
  return NetworkIdentifier::NetworkIdentifier((int)v2, (int)&v5);
}


int __fastcall NetworkHandler::onConnectionClosed(int a1, const NetworkIdentifier *a2, const void **a3)
{
  int v3; // r11@1
  const NetworkIdentifier *v4; // r6@1
  int v5; // r7@1
  int v6; // r5@1
  int v7; // r0@1
  int v8; // r4@2
  int v9; // r0@3
  int v10; // r9@4
  int v11; // r0@15
  const NetworkIdentifier *v12; // r4@18
  int v13; // r7@32
  int v14; // r1@33
  int v15; // r0@33
  int v16; // r1@35
  int v17; // r0@35
  int v18; // r1@37
  int v19; // r0@37
  int v20; // r1@39
  int v21; // r0@39
  int v22; // r0@41
  int v23; // r1@41
  int v24; // r2@41
  int v25; // r3@41
  int v26; // r4@42
  int result; // r0@46
  int v28; // r0@47
  int v29; // r0@49
  int v30; // r0@51
  const void **v31; // [sp+4h] [bp-2Ch]@1

  v3 = a1;
  v31 = a3;
  v4 = a2;
  ResourcePackTransmissionManager::cleanupResourcePackManager((ResourcePackTransmissionManager *)(a1 + 204), a2);
  v5 = *(_DWORD *)(v3 + 28);
  v6 = *(_DWORD *)(v3 + 32);
  v7 = -1431655765 * ((v6 - v5) >> 6) >> 2;
  if ( v7 < 1 )
  {
LABEL_15:
    v11 = -1431655765 * ((v6 - v5) >> 6);
    if ( v11 == 1 )
    {
      v12 = (const NetworkIdentifier *)((char *)v4 + 144);
      v10 = v5;
    }
    else
      if ( v11 == 3 )
      {
        v12 = (const NetworkIdentifier *)((char *)v4 + 144);
        if ( *(_DWORD *)(v5 + 144) == *((_DWORD *)v4 + 36) )
        {
          v10 = v5;
          if ( NetworkIdentifier::equalsTypeData((NetworkIdentifier *)v5, v4) )
            goto LABEL_31;
        }
        v10 = v5 + 192;
      }
      else
        if ( v11 != 2 )
          goto LABEL_30;
        v10 = v5;
      if ( *(_DWORD *)(v10 + 144) == *(_DWORD *)v12 && NetworkIdentifier::equalsTypeData((NetworkIdentifier *)v10, v4) )
        goto LABEL_31;
      v10 += 192;
    if ( *(_DWORD *)(v10 + 144) == *(_DWORD *)v12 )
      if ( !NetworkIdentifier::equalsTypeData((NetworkIdentifier *)v10, v4) )
        v10 = v6;
      goto LABEL_31;
LABEL_30:
    v10 = v6;
    goto LABEL_31;
  }
  v8 = v7 + 1;
  while ( 1 )
    v9 = *((_DWORD *)v4 + 36);
    if ( *(_DWORD *)(v5 + 144) == v9 )
      if ( NetworkIdentifier::equalsTypeData((NetworkIdentifier *)v5, v4) )
        break;
      v9 = *((_DWORD *)v4 + 36);
    if ( *(_DWORD *)(v5 + 336) == v9 )
      v10 = v5 + 192;
      if ( NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(v5 + 192), v4) )
    if ( *(_DWORD *)(v5 + 528) == v9 )
      v10 = v5 + 384;
      if ( NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(v5 + 384), v4) )
    if ( *(_DWORD *)(v5 + 720) == v9 )
      v10 = v5 + 576;
      if ( NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(v5 + 576), v4) )
    --v8;
    v5 += 768;
    if ( v8 <= 1 )
      goto LABEL_15;
LABEL_31:
  if ( v10 != v6 )
    v13 = v6 - 192;
    v6 = v10;
    while ( 1 )
      v26 = v10;
      if ( v13 == v10 )
      if ( *(_DWORD *)(v26 + 336) != *((_DWORD *)v4 + 36)
        || !NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(v26 + 192), v4) )
        *(_QWORD *)v6 = *(_QWORD *)v10;
        *(_WORD *)(v6 + 8) = *(_WORD *)(v26 + 200);
        _aeabi_memcpy8(v6 + 16, v26 + 208, 132);
        *(_DWORD *)(v6 + 152) = *(_DWORD *)(v26 + 344);
        v14 = *(_DWORD *)(v26 + 348);
        *(_DWORD *)(v26 + 348) = 0;
        v15 = *(_DWORD *)(v6 + 156);
        *(_DWORD *)(v6 + 156) = v14;
        if ( v15 )
          (*(void (**)(void))(*(_DWORD *)v15 + 4))();
        v16 = *(_DWORD *)(v26 + 352);
        *(_DWORD *)(v26 + 352) = 0;
        v17 = *(_DWORD *)(v6 + 160);
        *(_DWORD *)(v6 + 160) = v16;
        if ( v17 )
          (*(void (**)(void))(*(_DWORD *)v17 + 4))();
        v18 = *(_DWORD *)(v26 + 356);
        *(_DWORD *)(v26 + 356) = 0;
        v19 = *(_DWORD *)(v6 + 164);
        *(_DWORD *)(v6 + 164) = v18;
        if ( v19 )
          (*(void (**)(void))(*(_DWORD *)v19 + 4))();
        v20 = *(_DWORD *)(v26 + 360);
        *(_DWORD *)(v26 + 360) = 0;
        v21 = *(_DWORD *)(v6 + 168);
        *(_DWORD *)(v6 + 168) = v20;
        if ( v21 )
          (*(void (**)(void))(*(_DWORD *)v21 + 4))();
        v22 = *(_DWORD *)(v26 + 364);
        v23 = *(_DWORD *)(v26 + 368);
        v24 = *(_DWORD *)(v26 + 372);
        *(_BYTE *)(v6 + 184) = *(_BYTE *)(v26 + 376);
        v25 = v6 + 172;
        *(_DWORD *)v25 = v22;
        *(_DWORD *)(v25 + 4) = v23;
        *(_DWORD *)(v25 + 8) = v24;
        v6 += 192;
  std::vector<NetworkHandler::Connection,std::allocator<NetworkHandler::Connection>>::_M_erase(
    v3 + 28,
    v6,
    *(_DWORD *)(v3 + 32));
  result = sub_21E7D6C(v31, (const char *)&unk_257BC67);
  if ( result )
    v28 = *(_DWORD *)(v3 + 260);
    if ( v28 )
      (*(void (**)(void))(**(_DWORD **)v28 + 24))();
    v29 = *(_DWORD *)(v3 + 264);
    if ( v29 )
      (*(void (**)(void))(**(_DWORD **)v29 + 24))();
    v30 = *(_DWORD *)(v3 + 268);
    if ( v30 )
      (*(void (**)(void))(**(_DWORD **)v30 + 24))();
    result = *(_DWORD *)(v3 + 272);
    if ( result )
      result = (*(int (**)(void))(**(_DWORD **)result + 24))();
  return result;
}


signed int __fastcall NetworkHandler::isLocalConnectionId(NetworkHandler *this, const NetworkIdentifier *a2)
{
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  const NetworkIdentifier *v4; // r4@1
  signed int result; // r0@6

  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 28);
  v4 = a2;
  if ( v2 == v3 )
  {
LABEL_6:
    result = 0;
  }
  else
    while ( *(_DWORD *)(v2 + 152) != 1
         || *((_DWORD *)v4 + 36) != *(_DWORD *)(v2 + 144)
         || !NetworkIdentifier::equalsTypeData(v4, (const NetworkIdentifier *)v2) )
    {
      v2 += 192;
      if ( v3 == v2 )
        goto LABEL_6;
    }
    result = 1;
  return result;
}


int __fastcall NetworkHandler::getPrimaryNetworkId(NetworkHandler *this, int a2)
{
  NetworkHandler *v2; // r4@1
  int v3; // r0@1
  int v5; // [sp+0h] [bp-20h]@1

  v2 = this;
  v3 = RakNetInstance::getPeer(*(RakNetInstance **)(a2 + 12));
  (*(void (__fastcall **)(int *))(*(_DWORD *)v3 + 208))(&v5);
  return NetworkIdentifier::NetworkIdentifier((int)v2, (int)&v5);
}


int __fastcall NetworkHandler::setHostingPlayerIdentity(NetworkHandler *this, const NetworkIdentifier *a2, const unsigned __int8 *a3)
{
  const unsigned __int8 *v3; // r4@1
  NetworkHandler *v4; // r5@1
  int result; // r0@1

  v3 = a3;
  v4 = this;
  *((_QWORD *)this + 6) = *(_QWORD *)a2;
  *((_WORD *)this + 28) = *((_WORD *)a2 + 4);
  _aeabi_memcpy8((char *)this + 64, (char *)a2 + 16, 132);
  result = *v3;
  *((_BYTE *)v4 + 200) = result;
  return result;
}


int __fastcall NetworkHandler::getServerId(NetworkHandler *this, int a2)
{
  NetworkHandler *v2; // r4@1
  int v3; // r0@1
  int v4; // r0@2
  char *v5; // r5@2
  __int64 v6; // kr00_8@3
  int v8; // [sp+0h] [bp-30h]@5
  char v9; // [sp+10h] [bp-20h]@2

  v2 = this;
  v3 = *(_DWORD *)(a2 + 12);
  if ( *(_BYTE *)(v3 + 577) )
  {
    v4 = RakNetInstance::getPeer((RakNetInstance *)v3);
    v5 = &v9;
    (*(void (__fastcall **)(char *))(*(_DWORD *)v4 + 208))(&v9);
  }
  else
    v6 = *(_QWORD *)(a2 + 28);
    if ( (_DWORD)v6 != HIDWORD(v6) )
      return _aeabi_memcpy8(v2, v6, 152);
    v5 = (char *)&v8;
    RakNet::RakNetGUID::RakNetGUID((RakNet::RakNetGUID *)&v8);
  return NetworkIdentifier::NetworkIdentifier((int)v2, (int)v5);
}


void __fastcall NetworkHandler::~NetworkHandler(NetworkHandler *this)
{
  NetworkHandler::~NetworkHandler(this);
}


int __fastcall NetworkHandler::NetworkHandler(int a1)
{
  int v1; // r9@1
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r12@1
  int v5; // r1@1
  int v6; // r3@1
  int v7; // r2@1
  __int64 v8; // r0@1
  __int64 v9; // r0@1
  RakNetInstance *v10; // r6@1
  int v11; // r0@1
  int v12; // r0@3
  __int64 v13; // r0@3
  int v14; // r6@3
  int v15; // r0@3
  int v16; // r7@5
  double v17; // r0@5
  int v18; // r6@5
  int v19; // r0@5
  void *v20; // r7@7
  int v21; // r5@7
  int v22; // r1@8
  int v23; // r2@8
  int v24; // r3@8
  int v25; // r7@8
  __int64 v26; // kr00_8@8
  int v27; // r12@8
  void *v28; // r0@8
  unsigned int v29; // r4@9
  unsigned int v30; // r1@9
  unsigned int v31; // r7@10
  void *v32; // t1@11
  int v34; // [sp+0h] [bp-F0h]@3
  int v35; // [sp+10h] [bp-E0h]@8
  __int64 v36; // [sp+14h] [bp-DCh]@8
  int v37; // [sp+1Ch] [bp-D4h]@8
  int v38; // [sp+20h] [bp-D0h]@8
  int v39; // [sp+24h] [bp-CCh]@8
  int v40; // [sp+28h] [bp-C8h]@8
  int v41; // [sp+2Ch] [bp-C4h]@8
  char v42; // [sp+30h] [bp-C0h]@3
  RakNet *v43; // [sp+CCh] [bp-24h]@1

  v1 = a1;
  v43 = _stack_chk_guard;
  *(_DWORD *)a1 = &off_26E9298;
  *(_DWORD *)(a1 + 4) = &off_26E92D4;
  v2 = a1 + 4;
  *(_DWORD *)(a1 + 8) = &off_26E92F4;
  *(_DWORD *)(a1 + 12) = 0;
  v3 = a1 + 12;
  v4 = a1 + 48;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  v5 = unk_27EA724;
  v6 = *(_DWORD *)&word_27EA728;
  v7 = dword_27EA72C;
  *(_DWORD *)v4 = unk_27EA720;
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v3 + 48) = v7;
  _aeabi_memclr8(a1 + 64, 128);
  *(_DWORD *)(v3 + 180) = 3;
  LODWORD(v8) = v3 + 192;
  ResourcePackTransmissionManager::ResourcePackTransmissionManager(v8);
  *(_BYTE *)(v1 + 276) = 0;
  *(_DWORD *)(v1 + 260) = 0;
  *(_DWORD *)(v1 + 264) = 0;
  *(_DWORD *)(v1 + 268) = 0;
  *(_DWORD *)(v1 + 272) = 0;
  *(_WORD *)(v1 + 278) = SharedConstants::NetworkDefaultGamePort;
  *(_WORD *)(v1 + 280) = SharedConstants::NetworkDefaultGamePortv6;
  LODWORD(v9) = operator new(0x2A8u);
  v10 = (RakNetInstance *)v9;
  RakNetInstance::RakNetInstance(v9, v2);
  v11 = *(_DWORD *)v3;
  *(_DWORD *)v3 = v10;
  if ( v11 )
  {
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    v10 = *(RakNetInstance **)(v1 + 12);
  }
  v12 = RakNetInstance::getPeer(v10);
  (*(void (__fastcall **)(int *))(*(_DWORD *)v12 + 208))(&v34);
  NetworkIdentifier::NetworkIdentifier((int)&v42, (int)&v34);
  LODWORD(v13) = operator new(0xB8u);
  v14 = v13;
  LocalConnector::LocalConnector(v13, (int)&v42);
  v15 = *(_DWORD *)(v1 + 16);
  *(_DWORD *)(v1 + 16) = v14;
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  v16 = *(_DWORD *)v3;
  LODWORD(v17) = operator new(0x9Cu);
  v18 = LODWORD(v17);
  RakNetServerLocator::RakNetServerLocator(v17, v2);
  v19 = *(_DWORD *)(v1 + 20);
  *(_DWORD *)(v1 + 20) = v18;
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  v20 = operator new(0x3E8u);
  _aeabi_memclr4(v20, 1000);
  MPMCQueue<std::function<void ()(void)>>::MPMCQueue((int)v20 + 952);
  v21 = *(_DWORD *)(v1 + 24);
  *(_DWORD *)(v1 + 24) = v20;
  if ( v21 )
    v22 = *(_DWORD *)(v21 + 964);
    v23 = *(_DWORD *)(v21 + 968);
    v24 = *(_DWORD *)(v21 + 972);
    v25 = *(_DWORD *)(v21 + 976);
    v26 = *(_QWORD *)(v21 + 980);
    v27 = *(_DWORD *)(v21 + 988);
    v38 = *(_DWORD *)(v21 + 960);
    v39 = v22;
    v40 = v23;
    v41 = v24;
    v35 = v25;
    v36 = v26;
    v37 = v27;
    std::deque<std::function<void ()(void)>,std::allocator<std::function<void ()(void)>>>::_M_destroy_data_aux(
      v21 + 952,
      (int)&v38,
      (int)&v35);
    v28 = *(void **)(v21 + 952);
    if ( v28 )
    {
      v29 = *(_DWORD *)(v21 + 988);
      v30 = *(_DWORD *)(v21 + 972);
      if ( v30 < v29 + 4 )
      {
        v31 = v30 - 4;
        do
        {
          v32 = *(void **)(v31 + 4);
          v31 += 4;
          operator delete(v32);
        }
        while ( v31 < v29 );
        v28 = *(void **)(v21 + 952);
      }
      operator delete(v28);
    }
    if ( *(_DWORD *)v21 )
      operator delete(*(void **)v21);
    operator delete((void *)v21);
  if ( _stack_chk_guard != v43 )
    _stack_chk_fail(_stack_chk_guard - v43);
  return v1;
}


RakNet *__fastcall NetworkHandler::onNewIncomingLocalConnection(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r9@1
  int v5; // r7@1
  __int64 v6; // r5@1
  __int64 v7; // kr00_8@1
  int v8; // r1@2
  __int64 v9; // r2@2
  int v10; // r0@2
  int *v11; // r4@2
  RakNet *result; // r0@11
  int v13; // [sp+0h] [bp-E8h]@1
  char v14; // [sp+8h] [bp-E0h]@1
  int v15; // [sp+A0h] [bp-48h]@1
  int v16; // [sp+A4h] [bp-44h]@1
  int v17; // [sp+A8h] [bp-40h]@1
  int v18; // [sp+ACh] [bp-3Ch]@1
  int v19; // [sp+B0h] [bp-38h]@1
  int v20; // [sp+B4h] [bp-34h]@1
  __int64 v21; // [sp+B8h] [bp-30h]@1
  char v22; // [sp+C0h] [bp-28h]@1
  RakNet *v23; // [sp+C8h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v23 = _stack_chk_guard;
  sub_21E0378(&v13);
  v6 = *(_QWORD *)&v13;
  _aeabi_memcpy8(&v14, v5, 152);
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v21 = v6;
  v22 = 0;
  v20 = v4;
  v15 = 1;
  v7 = *(_QWORD *)(v3 + 32);
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    std::vector<NetworkHandler::Connection,std::allocator<NetworkHandler::Connection>>::_M_emplace_back_aux<NetworkHandler::Connection>(
      (unsigned __int64 *)(v3 + 28),
      (int)&v14);
    v11 = &v19;
    if ( v19 )
      (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  }
  else
    _aeabi_memcpy8(v7, &v14, 156);
    v16 = 0;
    *(_DWORD *)(v7 + 156) = 0;
    v17 = 0;
    *(_DWORD *)(v7 + 160) = 0;
    v18 = 0;
    *(_DWORD *)(v7 + 164) = 0;
    v19 = 0;
    *(_DWORD *)(v7 + 168) = 0;
    v8 = v20;
    v9 = v21;
    *(_BYTE *)(v7 + 184) = v22;
    v10 = v7 + 172;
    *(_DWORD *)v10 = v8;
    *(_QWORD *)(v10 + 4) = v9;
    *(_DWORD *)(v3 + 32) += 192;
  *v11 = 0;
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  result = (RakNet *)(_stack_chk_guard - v23);
  if ( _stack_chk_guard != v23 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall NetworkHandler::registerClientInstance(NetworkHandler *this, NetEventCallback *a2, int a3)
{
  NetworkHandler *v3; // r6@1
  int v4; // r5@1
  NetEventCallback *v5; // r7@1
  NetworkHandler::IncomingPacketQueue *v6; // r4@1
  void **v7; // r0@1
  void *v8; // r5@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (NetworkHandler::IncomingPacketQueue *)operator new(0x30u);
  NetworkHandler::IncomingPacketQueue::IncomingPacketQueue(v6, v5);
  v7 = (void **)((char *)v3 + 4 * v4 + 260);
  v8 = *v7;
  *v7 = (void *)v6;
  if ( v8 )
  {
    std::deque<std::unique_ptr<Packet,std::default_delete<Packet>>,std::allocator<std::unique_ptr<Packet,std::default_delete<Packet>>>>::~deque((int)v8 + 8);
    j_j_j__ZdlPv_5(v8);
  }
}


void __fastcall NetworkHandler::registerServerInstance(NetworkHandler *this, NetEventCallback *a2)
{
  NetworkHandler *v2; // r4@1
  NetEventCallback *v3; // r6@1
  NetworkHandler::IncomingPacketQueue *v4; // r5@1
  void *v5; // r6@1

  v2 = this;
  v3 = a2;
  v4 = (NetworkHandler::IncomingPacketQueue *)operator new(0x30u);
  NetworkHandler::IncomingPacketQueue::IncomingPacketQueue(v4, v3);
  v5 = (void *)*((_DWORD *)v2 + 65);
  *((_DWORD *)v2 + 65) = v4;
  if ( v5 )
  {
    std::deque<std::unique_ptr<Packet,std::default_delete<Packet>>,std::allocator<std::unique_ptr<Packet,std::default_delete<Packet>>>>::~deque((int)v5 + 8);
    j_j_j__ZdlPv_5(v5);
  }
}


void __fastcall NetworkHandler::send(NetworkHandler *this, const NetworkIdentifier *a2, const Packet *a3, unsigned __int8 a4)
{
  NetworkHandler *v4; // r6@1
  unsigned __int8 v5; // r10@1
  int v6; // r4@1
  int v7; // r7@1
  const Packet *v8; // r9@1
  const NetworkIdentifier *v9; // r5@1
  int v10; // r8@7
  unsigned int v11; // r0@8
  int v12; // r0@8
  void (__fastcall *v13)(int, int *, _DWORD, _DWORD); // r4@10
  void *v14; // r0@10
  void *v15; // r0@11
  void *v16; // r0@12
  unsigned int *v17; // r2@13
  signed int v18; // r1@15
  unsigned int *v19; // r2@17
  signed int v20; // r1@19
  unsigned int *v21; // r2@21
  signed int v22; // r1@23
  int v23; // [sp+0h] [bp-40h]@10
  void **v24; // [sp+4h] [bp-3Ch]@8
  int v25; // [sp+Ch] [bp-34h]@12
  int v26; // [sp+14h] [bp-2Ch]@11

  v4 = this;
  v5 = a4;
  v7 = *(_QWORD *)((char *)this + 28) >> 32;
  v6 = *(_QWORD *)((char *)this + 28);
  v8 = a3;
  v9 = a2;
  if ( v6 != v7 )
  {
    while ( *(_BYTE *)(v6 + 184)
         || *((_DWORD *)v9 + 36) != *(_DWORD *)(v6 + 144)
         || !NetworkIdentifier::equalsTypeData(v9, (const NetworkIdentifier *)v6) )
    {
      v6 += 192;
      if ( v7 == v6 )
        return;
    }
    v10 = *(_DWORD *)(v6 + 172);
    if ( v10 )
      BinaryStream::BinaryStream((BinaryStream *)&v24);
      v11 = (*(int (__fastcall **)(const Packet *))(*(_DWORD *)v8 + 8))(v8);
      BinaryStream::writeUnsignedVarInt((BinaryStream *)&v24, v11);
      BinaryStream::writeByte((BinaryStream *)&v24, v5);
      Packet::writeWithHeader(v8, (BinaryStream *)&v24);
      v12 = *((_DWORD *)v4 + 10);
      if ( v12 )
        (*(void (**)(void))(*(_DWORD *)v12 + 8))();
      v13 = *(void (__fastcall **)(int, int *, _DWORD, _DWORD))(*(_DWORD *)v10 + 8);
      BinaryStream::getAndReleaseData((BinaryStream *)&v23, (int)&v24);
      v13(v10, &v23, *((_DWORD *)v8 + 2), 0);
      v14 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
      {
        v19 = (unsigned int *)(v23 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
        }
        else
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      }
      v24 = &off_26D53E4;
      v15 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v26 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v24 = &off_26E91A4;
      v16 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v17 = (unsigned int *)(v25 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
  }
}


int __fastcall NetworkHandler::setDefaultGamePort(int result, __int16 a2)
{
  *(_WORD *)(result + 278) = a2;
  return result;
}


LocalConnector **__fastcall NetworkHandler::disconnect(NetworkHandler *this)
{
  NetworkHandler *v1; // r4@1
  LocalConnector **result; // r0@1
  __int64 v3; // kr00_8@1
  int v4; // r5@2
  int v5; // r0@3
  int v6; // r0@5
  int v7; // r0@7

  v1 = this;
  RakNetInstance::disconnect(*((RakNetInstance **)this + 3));
  result = LocalConnector::disconnect(*((LocalConnector **)v1 + 4));
  v3 = *(_QWORD *)((char *)v1 + 28);
  if ( HIDWORD(v3) != (_DWORD)v3 )
  {
    v4 = v3;
    do
    {
      v5 = *(_DWORD *)(v4 + 168);
      if ( v5 )
        (*(void (**)(void))(*(_DWORD *)v5 + 4))();
      *(_DWORD *)(v4 + 168) = 0;
      v6 = *(_DWORD *)(v4 + 164);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v4 + 164) = 0;
      v7 = *(_DWORD *)(v4 + 160);
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      *(_DWORD *)(v4 + 160) = 0;
      result = *(LocalConnector ***)(v4 + 156);
      if ( result )
        result = (LocalConnector **)(*((int (**)(void))*result + 1))();
      *(_DWORD *)(v4 + 156) = 0;
      v4 += 192;
    }
    while ( HIDWORD(v3) != v4 );
  }
  *((_DWORD *)v1 + 8) = v3;
  return result;
}


signed int __fastcall NetworkHandler::host(NetworkHandler *this, int a2, int a3, int a4)
{
  NetworkHandler *v4; // r4@1
  signed int result; // r0@2

  v4 = this;
  if ( RakNetInstance::host(*((RakNetInstance **)this + 3), a2, a3, a4) == 1 )
  {
    LocalConnector::host(*((LocalConnector **)v4 + 4));
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall NetworkHandler::onWebsocketRequest(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r6@1
  int v6; // r0@1
  int v7; // r8@1
  int v8; // r9@1
  int v9; // r4@2
  void (__fastcall *v10)(int, int, int, char *); // r5@2
  void (__fastcall *v11)(char *, int, signed int); // r3@2
  int v12; // r0@6
  int v13; // r4@7
  void (__fastcall *v14)(int, int, int, char *); // r5@7
  void (__fastcall *v15)(char *, int, signed int); // r3@7
  int v16; // r0@11
  int v17; // r4@12
  void (__fastcall *v18)(int, int, int, char *); // r5@12
  void (__fastcall *v19)(char *, int, signed int); // r3@12
  int result; // r0@16
  int v21; // r4@17
  int (__fastcall *v22)(int, int, int, char *); // r5@17
  void (__fastcall *v23)(char *, int, signed int); // r3@17
  char v24; // [sp+4h] [bp-2Ch]@3
  void (*v25)(void); // [sp+Ch] [bp-24h]@2
  int v26; // [sp+10h] [bp-20h]@3

  v4 = a1;
  v5 = a4;
  v6 = *(_DWORD *)(a1 + 260);
  v7 = a3;
  v8 = a2;
  if ( v6 )
  {
    v9 = *(_DWORD *)v6;
    v10 = *(void (__fastcall **)(int, int, int, char *))(**(_DWORD **)v6 + 32);
    v25 = 0;
    v11 = *(void (__fastcall **)(char *, int, signed int))(a4 + 8);
    if ( v11 )
    {
      v11(&v24, v5, 2);
      v26 = *(_DWORD *)(v5 + 12);
      v25 = *(void (**)(void))(v5 + 8);
    }
    v10(v9, v8, v7, &v24);
    if ( v25 )
      v25();
  }
  v12 = *(_DWORD *)(v4 + 264);
  if ( v12 )
    v13 = *(_DWORD *)v12;
    v14 = *(void (__fastcall **)(int, int, int, char *))(**(_DWORD **)v12 + 32);
    v15 = *(void (__fastcall **)(char *, int, signed int))(v5 + 8);
    if ( v15 )
      v15(&v24, v5, 2);
    v14(v13, v8, v7, &v24);
  v16 = *(_DWORD *)(v4 + 268);
  if ( v16 )
    v17 = *(_DWORD *)v16;
    v18 = *(void (__fastcall **)(int, int, int, char *))(**(_DWORD **)v16 + 32);
    v19 = *(void (__fastcall **)(char *, int, signed int))(v5 + 8);
    if ( v19 )
      v19(&v24, v5, 2);
    v18(v17, v8, v7, &v24);
  result = *(_DWORD *)(v4 + 272);
  if ( result )
    v21 = *(_DWORD *)result;
    v22 = *(int (__fastcall **)(int, int, int, char *))(**(_DWORD **)result + 32);
    v23 = *(void (__fastcall **)(char *, int, signed int))(v5 + 8);
    if ( v23 )
      v23(&v24, v5, 2);
    result = v22(v21, v8, v7, &v24);
      result = ((int (*)(void))v25)();
  return result;
}


void __fastcall NetworkHandler::flush(int a1, int a2, int a3)
{
  NetworkHandler::flush(a1, a2, a3);
}
