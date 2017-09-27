

char *__fastcall TcpTestProxy::failConnection(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  _BYTE *v5; // r6@1 OVERLAPPED
  char *result; // r0@2
  _BYTE *v7; // r5@3 OVERLAPPED
  int v8; // r0@3
  unsigned int v9; // r2@3
  unsigned int v10; // r0@5
  unsigned int v11; // r10@5
  char *v12; // r0@11
  char *v13; // r9@11
  char *v14; // r7@13
  int v15; // [sp+24h] [bp-Ch]@1
  int v16; // [sp+28h] [bp-8h]@1
  int v17; // [sp+2Ch] [bp-4h]@1

  v4 = a1;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  v5 = (_BYTE *)*(_QWORD *)(a1 + 20);
  if ( v5 == (_BYTE *)(*(_QWORD *)(a1 + 20) >> 32) )
  {
    v7 = *(_BYTE **)(a1 + 16);
    v8 = (v5 - v7) >> 2;
    v9 = 1041204193 * v8;
    if ( v5 == v7 )
      v9 = 1;
    v10 = v9 + 1041204193 * v8;
    v11 = v10;
    if ( v10 > 0x1F07C1F )
      v11 = 32537631;
    if ( v10 < v9 )
    if ( v11 )
    {
      if ( v11 >= 0x1F07C20 )
        sub_119C874();
      v12 = (char *)operator new(132 * v11);
      *(_QWORD *)(&v5 - 1) = *(_QWORD *)(v4 + 16);
      v13 = v12;
    }
    else
      v13 = 0;
    _aeabi_memcpy4(&v13[v5 - v7], &v15, 132);
    v14 = v13;
    if ( v7 != v5 )
      do
      {
        _aeabi_memcpy4(v14, v7, 132);
        v7 += 132;
        v14 += 132;
      }
      while ( v5 != v7 );
      v7 = *(_BYTE **)(v4 + 16);
    if ( v7 )
      operator delete(v7);
    *(_DWORD *)(v4 + 16) = v13;
    *(_DWORD *)(v4 + 20) = v14 + 132;
    result = &v13[132 * v11];
    *(_DWORD *)(v4 + 24) = result;
  }
  else
    _aeabi_memcpy4(v5, &v15, 132);
    result = (char *)(*(_DWORD *)(v4 + 20) + 132);
    *(_DWORD *)(v4 + 20) = result;
  return result;
}


signed int __fastcall TcpTestProxy::packetsAvailable(TcpTestProxy *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *((_QWORD *)this + 5);
  result = 0;
  if ( (_DWORD)v1 != HIDWORD(v1) )
    result = 1;
  return result;
}


char *__fastcall TcpTestProxy::completeConnection(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  _BYTE *v5; // r6@1 OVERLAPPED
  char *result; // r0@2
  _BYTE *v7; // r5@3 OVERLAPPED
  int v8; // r0@3
  unsigned int v9; // r2@3
  unsigned int v10; // r0@5
  unsigned int v11; // r10@5
  char *v12; // r0@11
  char *v13; // r9@11
  char *v14; // r7@13
  int v15; // [sp+24h] [bp-Ch]@1
  int v16; // [sp+28h] [bp-8h]@1
  int v17; // [sp+2Ch] [bp-4h]@1

  v4 = a1;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  v5 = (_BYTE *)*(_QWORD *)(a1 + 8);
  if ( v5 == (_BYTE *)(*(_QWORD *)(a1 + 8) >> 32) )
  {
    v7 = *(_BYTE **)(a1 + 4);
    v8 = (v5 - v7) >> 2;
    v9 = 1041204193 * v8;
    if ( v5 == v7 )
      v9 = 1;
    v10 = v9 + 1041204193 * v8;
    v11 = v10;
    if ( v10 > 0x1F07C1F )
      v11 = 32537631;
    if ( v10 < v9 )
    if ( v11 )
    {
      if ( v11 >= 0x1F07C20 )
        sub_119C874();
      v12 = (char *)operator new(132 * v11);
      *(_QWORD *)(&v5 - 1) = *(_QWORD *)(v4 + 4);
      v13 = v12;
    }
    else
      v13 = 0;
    _aeabi_memcpy4(&v13[v5 - v7], &v15, 132);
    v14 = v13;
    if ( v7 != v5 )
      do
      {
        _aeabi_memcpy4(v14, v7, 132);
        v7 += 132;
        v14 += 132;
      }
      while ( v5 != v7 );
      v7 = *(_BYTE **)(v4 + 4);
    if ( v7 )
      operator delete(v7);
    *(_DWORD *)(v4 + 4) = v13;
    *(_DWORD *)(v4 + 8) = v14 + 132;
    result = &v13[132 * v11];
    *(_DWORD *)(v4 + 12) = result;
  }
  else
    _aeabi_memcpy4(v5, &v15, 132);
    result = (char *)(*(_DWORD *)(v4 + 8) + 132);
    *(_DWORD *)(v4 + 8) = result;
  return result;
}


char *__fastcall TcpTestProxy::loseConnection(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  _BYTE *v5; // r6@1 OVERLAPPED
  char *result; // r0@2
  _BYTE *v7; // r5@3 OVERLAPPED
  int v8; // r0@3
  unsigned int v9; // r2@3
  unsigned int v10; // r0@5
  unsigned int v11; // r10@5
  char *v12; // r0@11
  char *v13; // r9@11
  char *v14; // r7@13
  int v15; // [sp+24h] [bp-Ch]@1
  int v16; // [sp+28h] [bp-8h]@1
  int v17; // [sp+2Ch] [bp-4h]@1

  v4 = a1;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  v5 = (_BYTE *)*(_QWORD *)(a1 + 32);
  if ( v5 == (_BYTE *)(*(_QWORD *)(a1 + 32) >> 32) )
  {
    v7 = *(_BYTE **)(a1 + 28);
    v8 = (v5 - v7) >> 2;
    v9 = 1041204193 * v8;
    if ( v5 == v7 )
      v9 = 1;
    v10 = v9 + 1041204193 * v8;
    v11 = v10;
    if ( v10 > 0x1F07C1F )
      v11 = 32537631;
    if ( v10 < v9 )
    if ( v11 )
    {
      if ( v11 >= 0x1F07C20 )
        sub_119C874();
      v12 = (char *)operator new(132 * v11);
      *(_QWORD *)(&v5 - 1) = *(_QWORD *)(v4 + 28);
      v13 = v12;
    }
    else
      v13 = 0;
    _aeabi_memcpy4(&v13[v5 - v7], &v15, 132);
    v14 = v13;
    if ( v7 != v5 )
      do
      {
        _aeabi_memcpy4(v14, v7, 132);
        v7 += 132;
        v14 += 132;
      }
      while ( v5 != v7 );
      v7 = *(_BYTE **)(v4 + 28);
    if ( v7 )
      operator delete(v7);
    *(_DWORD *)(v4 + 28) = v13;
    *(_DWORD *)(v4 + 32) = v14 + 132;
    result = &v13[132 * v11];
    *(_DWORD *)(v4 + 36) = result;
  }
  else
    _aeabi_memcpy4(v5, &v15, 132);
    result = (char *)(*(_DWORD *)(v4 + 32) + 132);
    *(_DWORD *)(v4 + 32) = result;
  return result;
}


int __fastcall TcpTestProxy::TcpTestProxy(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int result; // r0@1

  v1 = a1;
  *(_DWORD *)a1 = &off_26DF24C;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  v2 = a1 + 56;
  _aeabi_memclr4(a1 + 4, 48);
  result = v1;
  *(_DWORD *)(v1 + 64) = v2;
  *(_DWORD *)(v1 + 68) = v2;
  return result;
}


RakNet::SystemAddress *__fastcall TcpTestProxy::_generateSystemAddress(TcpTestProxy *this)
{
  RakNet::SystemAddress *result; // r0@1

  result = RakNet::SystemAddress::SystemAddress(this);
  *(_WORD *)result = 2;
  *((_DWORD *)result + 1) = ++dword_27D5D94;
  *((_WORD *)result + 1) = 8005;
  *((_WORD *)result + 64) = 8005;
  return result;
}


int __fastcall TcpTestProxy::~TcpTestProxy(TcpTestProxy *this)
{
  TcpTestProxy *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  void *v4; // r0@5
  void *v5; // r0@7

  v1 = this;
  *(_DWORD *)this = &off_26DF24C;
  std::_Rb_tree<RakNet::SystemAddress,std::pair<RakNet::SystemAddress const,std::shared_ptr<WebSocketTestServer>>,std::_Select1st<std::pair<RakNet::SystemAddress const,std::shared_ptr<WebSocketTestServer>>>,std::less<RakNet::SystemAddress>,std::allocator<std::pair<RakNet::SystemAddress const,std::shared_ptr<WebSocketTestServer>>>>::_M_erase(
    (int)this + 52,
    *((_DWORD *)this + 15));
  v2 = (void *)*((_DWORD *)v1 + 10);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 7);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 4);
  if ( v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 1);
  if ( v5 )
    operator delete(v5);
  return j_j_j__ZN8TcpProxyD2Ev(v1);
}


unsigned int *__fastcall TcpTestProxy::getServer(int a1, int a2, __int64 a3)
{
  int v3; // r8@1
  int v4; // r0@1
  int v5; // r6@1
  int v6; // r4@2
  int v7; // r7@3
  unsigned int *result; // r0@14
  unsigned int v9; // r1@17
  __int64 v10; // [sp+18h] [bp-8h]@1

  v10 = a3;
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 60);
  v5 = a2 + 56;
  if ( v4 )
  {
    v6 = a2 + 56;
    do
    {
      v7 = v4;
      while ( RakNet::SystemAddress::operator<(v7 + 16, (int)&v10) )
      {
        v7 = *(_DWORD *)(v7 + 12);
        if ( !v7 )
        {
          v7 = v6;
          goto LABEL_10;
        }
      }
      v4 = *(_DWORD *)(v7 + 8);
      v6 = v7;
    }
    while ( v4 );
  }
  else
    v7 = a2 + 56;
LABEL_10:
  if ( v7 == v5 )
    goto LABEL_23;
  if ( RakNet::SystemAddress::operator<((int)&v10, v7 + 16) )
    v7 = v5;
LABEL_23:
    result = 0;
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)v3 = *(_DWORD *)(v7 + 148);
    result = *(unsigned int **)(v7 + 152);
    *(_DWORD *)(v3 + 4) = result;
    if ( result )
      ++result;
      if ( &pthread_create )
        __dmb();
        do
          v9 = __ldrex(result);
        while ( __strex(v9 + 1, result) );
      else
        ++*result;
  return result;
}


int __fastcall TcpTestProxy::nextLostConnection(TcpTestProxy *this, int a2)
{
  int v2; // r4@1
  TcpTestProxy *v3; // r5@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  _aeabi_memcpy4(this, &unk_27D5D10, 132);
  result = *(_QWORD *)(v2 + 28) >> 32;
  if ( (unsigned int)*(_QWORD *)(v2 + 28) != result )
  {
    RakNet::SystemAddress::operator=((int)v3, result - 132);
    result = *(_DWORD *)(v2 + 32) - 132;
    *(_DWORD *)(v2 + 32) = result;
  }
  return result;
}


signed int __fastcall TcpTestProxy::close(int a1, int a2, int a3, int a4)
{
  int v4; // r8@1
  int v5; // r5@1
  signed int result; // r0@1
  int v7; // r4@2
  int v8; // r6@3
  int v9; // r5@14
  int v10; // r6@14
  unsigned int *v11; // r1@15
  unsigned int v12; // r0@17
  unsigned int *v13; // r4@21
  unsigned int v14; // r0@23
  int v15; // [sp+1Ch] [bp-Ch]@1
  int v16; // [sp+20h] [bp-8h]@1
  int v17; // [sp+24h] [bp-4h]@1

  v4 = a1;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  v5 = a1 + 56;
  result = *(_DWORD *)(a1 + 60);
  if ( result )
  {
    v7 = v5;
    do
    {
      v8 = result;
      while ( 1 )
      {
        result = RakNet::SystemAddress::operator<(v8 + 16, (int)&v15);
        if ( !result )
          break;
        v8 = *(_DWORD *)(v8 + 12);
        if ( !v8 )
        {
          v8 = v7;
          goto LABEL_10;
        }
      }
      result = *(_DWORD *)(v8 + 8);
      v7 = v8;
    }
    while ( result );
  }
  else
    v8 = v5;
LABEL_10:
  if ( v8 != v5 )
    result = RakNet::SystemAddress::operator<((int)&v15, v8 + 16);
    if ( result )
      v8 = v5;
    if ( v8 != v5 )
      v9 = sub_119D57C(v8, v5);
      v10 = *(_DWORD *)(v9 + 152);
      if ( v10 )
        v11 = (unsigned int *)(v10 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        else
          v12 = (*v11)--;
        if ( v12 == 1 )
          v13 = (unsigned int *)(v10 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          if ( &pthread_create )
          {
            __dmb();
            do
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
          }
          else
            v14 = (*v13)--;
          if ( v14 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
      operator delete((void *)v9);
      result = *(_DWORD *)(v4 + 72) - 1;
      *(_DWORD *)(v4 + 72) = result;
  return result;
}


void __fastcall TcpTestProxy::~TcpTestProxy(TcpTestProxy *this)
{
  TcpTestProxy::~TcpTestProxy(this);
}


int __fastcall TcpTestProxy::connect(RakNet::SystemAddress *a1, int a2)
{
  int v2; // r8@1
  RakNet::SystemAddress *v3; // r4@1
  char *v4; // r0@1
  int v5; // r5@2
  char *v6; // r6@3
  __int64 v7; // r0@13
  int v8; // r4@13
  unsigned int *v9; // r5@20
  int v10; // r4@27
  unsigned int *v11; // r5@34
  int v13; // [sp+4h] [bp-2Ch]@13
  char v14; // [sp+8h] [bp-28h]@13
  int v15; // [sp+Ch] [bp-24h]@13
  RakNet::SystemAddress *v16; // [sp+14h] [bp-1Ch]@12

  v2 = a2;
  v3 = a1;
  RakNet::SystemAddress::SystemAddress(a1);
  *(_WORD *)v3 = 2;
  *((_DWORD *)v3 + 1) = ++dword_27D5D94;
  *((_WORD *)v3 + 1) = 8005;
  *((_WORD *)v3 + 64) = 8005;
  v4 = *(char **)(v2 + 60);
  if ( v4 )
  {
    v5 = v2 + 56;
    do
    {
      v6 = v4;
      while ( RakNet::SystemAddress::operator<((int)(v6 + 16), (int)v3) )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = (char *)v5;
          goto LABEL_10;
        }
      }
      v4 = (char *)*((_DWORD *)v6 + 2);
      v5 = (int)v6;
    }
    while ( v4 );
  }
  else
    v6 = (char *)(v2 + 56);
LABEL_10:
  if ( v6 == (char *)(v2 + 56) || RakNet::SystemAddress::operator<((int)v3, (int)(v6 + 16)) == 1 )
    v16 = v3;
    v6 = j__ZNSt8_Rb_treeIN6RakNet13SystemAddressESt4pairIKS1_St10shared_ptrI19WebSocketTestServerEESt10_Select1stIS7_ESt4lessIS1_ESaIS7_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS3_EESI_IJEEEEESt17_Rb_tree_iteratorIS7_ESt23_Rb_tree_const_iteratorIS7_EDpOT_(
           v2 + 52,
           (int)v6,
           (int)&unk_262D15C,
           &v16);
  v13 = v2 + 40;
  j__ZNSt12__shared_ptrI19WebSocketTestServerLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRN6RakNet13SystemAddressEPSt6vectorIPNS6_6PacketESaISB_EEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v14,
    (int)&v16,
    (int)v3,
    &v13);
  v7 = *(_QWORD *)&v14;
  *(_DWORD *)&v14 = 0;
  v15 = 0;
  *((_DWORD *)v6 + 37) = v7;
  v8 = *((_DWORD *)v6 + 38);
  *((_DWORD *)v6 + 38) = HIDWORD(v7);
  if ( v8 )
    HIDWORD(v7) = v8 + 4;
    if ( &pthread_create )
      __dmb();
      do
        LODWORD(v7) = __ldrex((unsigned int *)HIDWORD(v7));
      while ( __strex(v7 - 1, (unsigned int *)HIDWORD(v7)) );
    else
      LODWORD(v7) = (*(_DWORD *)HIDWORD(v7))--;
    if ( (_DWORD)v7 == 1 )
      v9 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
        __dmb();
        do
          LODWORD(v7) = __ldrex(v9);
        while ( __strex(v7 - 1, v9) );
      else
        LODWORD(v7) = (*v9)--;
      if ( (_DWORD)v7 == 1 )
        LODWORD(v7) = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  v10 = v15;
  if ( v15 )
    HIDWORD(v7) = v15 + 4;
      v11 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          LODWORD(v7) = __ldrex(v11);
        while ( __strex(v7 - 1, v11) );
        LODWORD(v7) = (*v11)--;
        LODWORD(v7) = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  return v7;
}


int __fastcall TcpTestProxy::nextFailedConnectionAttempt(TcpTestProxy *this, int a2)
{
  int v2; // r4@1
  TcpTestProxy *v3; // r5@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  _aeabi_memcpy4(this, &unk_27D5D10, 132);
  result = *(_QWORD *)(v2 + 16) >> 32;
  if ( (unsigned int)*(_QWORD *)(v2 + 16) != result )
  {
    RakNet::SystemAddress::operator=((int)v3, result - 132);
    result = *(_DWORD *)(v2 + 20) - 132;
    *(_DWORD *)(v2 + 20) = result;
  }
  return result;
}


RakNet *__fastcall TcpTestProxy::send(int a1, const unsigned __int8 *a2, unsigned int a3, int a4)
{
  int v4; // r4@1
  const unsigned __int8 *v5; // r9@1
  unsigned int v6; // r8@1
  int v7; // r0@1
  int v8; // r7@1
  int v9; // r6@2
  int v10; // r5@3
  WebSocketTestServer *v11; // r0@14
  int v12; // r4@14
  unsigned int *v13; // r1@15
  unsigned int v14; // r2@17
  unsigned int *v15; // r1@24
  unsigned int v16; // r0@26
  unsigned int *v17; // r5@30
  unsigned int v18; // r0@32
  RakNet *result; // r0@37
  int v20; // [sp+0h] [bp-A8h]@1
  RakNet *v21; // [sp+84h] [bp-24h]@1
  int v22; // [sp+A4h] [bp-4h]@1

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v22 = a4;
  v21 = _stack_chk_guard;
  _aeabi_memcpy4(&v20, &v22, 132);
  v7 = *(_DWORD *)(v4 + 60);
  v8 = v4 + 56;
  if ( v7 )
  {
    v9 = v4 + 56;
    do
    {
      v10 = v7;
      while ( RakNet::SystemAddress::operator<(v10 + 16, (int)&v20) )
      {
        v10 = *(_DWORD *)(v10 + 12);
        if ( !v10 )
        {
          v10 = v9;
          goto LABEL_10;
        }
      }
      v7 = *(_DWORD *)(v10 + 8);
      v9 = v10;
    }
    while ( v7 );
  }
  else
    v10 = v4 + 56;
LABEL_10:
  if ( v10 != v8 )
    if ( RakNet::SystemAddress::operator<((int)&v20, v10 + 16) )
      v10 = v4 + 56;
    if ( v10 != v8 )
      v12 = *(_QWORD *)(v10 + 148) >> 32;
      v11 = (WebSocketTestServer *)*(_QWORD *)(v10 + 148);
      if ( v12 )
        v13 = (unsigned int *)(v12 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 + 1, v13) );
        else
          ++*v13;
      else
        v12 = 0;
      if ( v11 )
        WebSocketTestServer::writeToIncomingBuffer(v11, v5, v6);
        v15 = (unsigned int *)(v12 + 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 == 1 )
          v17 = (unsigned int *)(v12 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          if ( &pthread_create )
          {
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
          }
          else
            v18 = (*v17)--;
          if ( v18 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  result = (RakNet *)(_stack_chk_guard - v21);
  if ( _stack_chk_guard != v21 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall TcpTestProxy::nextPacket(TcpTestProxy *this)
{
  TcpTestProxy *v1; // r1@1
  __int64 v2; // kr00_8@1
  int result; // r0@2

  v1 = this;
  v2 = *((_QWORD *)this + 5);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    result = 0;
  }
  else
    result = *(_DWORD *)(HIDWORD(v2) - 4);
    *((_DWORD *)v1 + 11) = HIDWORD(v2) - 4;
  return result;
}


void __fastcall TcpTestProxy::~TcpTestProxy(TcpTestProxy *this)
{
  void *v1; // r0@1

  v1 = (void *)TcpTestProxy::~TcpTestProxy(this);
  j_j_j__ZdlPv_4(v1);
}


void __fastcall TcpTestProxy::deallocatePacket(int a1, int a2)
{
  TcpTestProxy::deallocatePacket(a1, a2);
}


void __fastcall TcpTestProxy::deallocatePacket(int a1, int a2)
{
  void *v2; // r4@1
  void *v3; // r0@2

  v2 = (void *)a2;
  if ( a2 )
  {
    v3 = *(void **)(a2 + 160);
    if ( v3 )
      free(v3);
    j_j_j__ZdlPv_4(v2);
  }
}


int __fastcall TcpTestProxy::nextCompletedConnectionAttempt(TcpTestProxy *this, int a2)
{
  int v2; // r4@1
  TcpTestProxy *v3; // r5@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  _aeabi_memcpy4(this, &unk_27D5D10, 132);
  result = *(_QWORD *)(v2 + 4) >> 32;
  if ( (unsigned int)*(_QWORD *)(v2 + 4) != result )
  {
    RakNet::SystemAddress::operator=((int)v3, result - 132);
    result = *(_DWORD *)(v2 + 8) - 132;
    *(_DWORD *)(v2 + 8) = result;
  }
  return result;
}
