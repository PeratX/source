

int __fastcall LocalConnector::getNatPunchInfo(LocalConnector *this)
{
  LocalConnector *v1; // r4@1
  int result; // r0@1

  v1 = this;
  *(_WORD *)this = 0;
  *((_BYTE *)this + 2) = 0;
  result = j___aeabi_memcpy4_0((int)this + 4, (int)&unk_2823320, 132);
  *((_DWORD *)v1 + 34) = 0;
  *((_DWORD *)v1 + 35) = 0;
  *((_DWORD *)v1 + 36) = 0;
  *((_DWORD *)v1 + 37) = 0;
  return result;
}


int __fastcall LocalConnector::getIPv4Port(LocalConnector *this)
{
  return 0;
}


int __fastcall LocalConnector::runEvents(LocalConnector *this)
{
  LocalConnector *v1; // r4@1
  __int64 v2; // r0@1
  char *v3; // r5@1
  __int64 v5; // [sp+0h] [bp-28h]@2
  void (__fastcall *v6)(__int64 *, __int64 *, signed int); // [sp+8h] [bp-20h]@2
  void (__fastcall *v7)(__int64 *); // [sp+Ch] [bp-1Ch]@2

  v1 = this;
  v3 = (char *)this + 172;
  LODWORD(v2) = *((_DWORD *)this + 43);
  if ( (_DWORD)v2 != *((_DWORD *)v3 + 1) )
  {
    do
    {
      v6 = 0;
      v5 = *(_QWORD *)v2;
      HIDWORD(v2) = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 8) = 0;
      v6 = (void (__fastcall *)(__int64 *, __int64 *, signed int))HIDWORD(v2);
      HIDWORD(v2) = *(_DWORD *)(v2 + 12);
      *(_DWORD *)(v2 + 12) = v7;
      v7 = (void (__fastcall *)(__int64 *))HIDWORD(v2);
      j_std::vector<std::function<void ()(void)>,std::allocator<std::function<void ()(void)>>>::_M_erase(
        (int)v3,
        *(_DWORD *)v3);
      if ( !v6 )
        sub_21E5F48();
      v7(&v5);
      if ( v6 )
        v6(&v5, &v5, 3);
      v2 = *(_QWORD *)((char *)v1 + 172);
    }
    while ( (_DWORD)v2 != HIDWORD(v2) );
  }
  return v2;
}


int __fastcall LocalConnector::getPort(LocalConnector *this)
{
  return 0;
}


int __fastcall LocalConnector::LocalConnector(__int64 a1, int a2)
{
  int v2; // r4@1

  v2 = a1;
  LODWORD(a1) = &off_2719EAC;
  *(_QWORD *)v2 = a1;
  j___aeabi_memcpy8_0(v2 + 8, a2, 152);
  *(_DWORD *)(v2 + 160) = 0;
  *(_DWORD *)(v2 + 164) = 0;
  *(_DWORD *)(v2 + 168) = 0;
  *(_DWORD *)(v2 + 172) = 0;
  *(_DWORD *)(v2 + 176) = 0;
  *(_DWORD *)(v2 + 180) = 0;
  return v2;
}


int __fastcall LocalConnector::isIPv4Supported(LocalConnector *this)
{
  return 0;
}


void *__fastcall LocalConnector::getConnectedGameInfo(LocalConnector *this)
{
  return &unk_28233D4;
}


void __fastcall LocalConnector::~LocalConnector(LocalConnector *this)
{
  LocalConnector *v1; // r0@1

  v1 = j_LocalConnector::~LocalConnector(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall LocalConnector::getLocalIps(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


int __fastcall LocalConnector::isIPv6Supported(LocalConnector *this)
{
  return 0;
}


void __fastcall LocalConnector::~LocalConnector(LocalConnector *this)
{
  LocalConnector::~LocalConnector(this);
}


signed int __fastcall LocalConnector::connect(LocalConnector *this)
{
  LocalConnector *v1; // r4@1
  signed int v2; // r6@1
  LocalConnector *v3; // r7@1
  int v4; // r5@2
  _DWORD *v5; // r0@2
  int v6; // r1@2 OVERLAPPED
  int v7; // r2@2
  int *v8; // r6@3
  int v9; // r7@6
  _DWORD *v10; // r0@6
  int v11; // r6@6
  __int64 v12; // r0@6
  __int64 v13; // kr00_8@7
  void (*v14)(void); // r2@7
  void *v15; // r2@7
  int v17; // [sp+0h] [bp-170h]@6
  void (*v18)(void); // [sp+8h] [bp-168h]@6
  void *v19; // [sp+Ch] [bp-164h]@6
  LocalConnector *v20; // [sp+10h] [bp-160h]@2
  _DWORD *v21; // [sp+14h] [bp-15Ch]@2
  char v22; // [sp+18h] [bp-158h]@6
  char v23; // [sp+B8h] [bp-B8h]@2
  RakNet *v24; // [sp+154h] [bp-1Ch]@1

  v1 = this;
  v2 = 0;
  v24 = _stack_chk_guard;
  v3 = LocalConnector::sLocalConnectivitySystem[0];
  if ( LocalConnector::sLocalConnectivitySystem[0] )
  {
    v4 = j_LocalConnector::onNewIncomingConnection(LocalConnector::sLocalConnectivitySystem[0], this);
    j___aeabi_memcpy8_0((int)&v23, (int)v3 + 8, 152);
    v20 = v3;
    v5 = j_operator new(0x14u);
    *v5 = &off_2719E90;
    v5[1] = 0;
    v5[2] = 0;
    v5[3] = 0;
    v5[4] = 0;
    v21 = v5;
    *(_QWORD *)&v6 = *(_QWORD *)((char *)v1 + 164);
    if ( v6 == v7 )
    {
      j_std::vector<LocalConnector::LocalConnection,std::allocator<LocalConnector::LocalConnection>>::_M_emplace_back_aux<LocalConnector::LocalConnection>(
        (_QWORD *)v1 + 20,
        (int)&v20);
      v8 = (int *)&v21;
      if ( v21 )
        (*(void (**)(void))(*v21 + 4))();
    }
    else
      *(_DWORD *)v6 = v3;
      v21 = 0;
      *(_DWORD *)(v6 + 4) = v5;
      *((_DWORD *)v1 + 41) = v6 + 8;
    *v8 = 0;
    v9 = *(_DWORD *)(*((_DWORD *)v1 + 41) - 4);
    *(_DWORD *)(v9 + 4) = v4;
    *(_DWORD *)(v4 + 4) = v9;
    j___aeabi_memcpy4_0((unsigned int)&v22 | 4, (int)&v23, 152);
    v10 = j_operator new(0xA8u);
    v11 = (int)v10;
    *v10 = v1;
    j___aeabi_memcpy4_0((int)(v10 + 1), (int)&v22, 156);
    *(_DWORD *)(v11 + 160) = v9;
    v17 = v11;
    v18 = (void (*)(void))sub_19A2CF4;
    v19 = &loc_19A2CE2;
    v12 = *((_QWORD *)v1 + 22);
    if ( (_DWORD)v12 == HIDWORD(v12) )
      j_std::vector<std::function<void ()(void)>,std::allocator<std::function<void ()(void)>>>::_M_emplace_back_aux<std::function<void ()(void)>>(
        (unsigned __int64 *)((char *)v1 + 172),
        (int)&v17);
      *(_DWORD *)(v12 + 8) = 0;
      v13 = *(_QWORD *)&v17;
      *(_QWORD *)&v17 = *(_QWORD *)v12;
      *(_QWORD *)v12 = v13;
      v14 = v18;
      v18 = *(void (**)(void))(v12 + 8);
      *(_DWORD *)(v12 + 8) = v14;
      v15 = v19;
      v19 = *(void **)(v12 + 12);
      *(_DWORD *)(v12 + 12) = v15;
      *((_DWORD *)v1 + 44) += 16;
    if ( v18 )
      v18();
    v2 = 1;
  }
  if ( _stack_chk_guard != v24 )
    j___stack_chk_fail_0(_stack_chk_guard - v24);
  return v2;
}


LocalConnector *__fastcall LocalConnector::~LocalConnector(LocalConnector *this)
{
  LocalConnector *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void (__fastcall *v4)(int, int, signed int); // r3@2
  int v5; // r5@8 OVERLAPPED
  int v6; // r6@8 OVERLAPPED
  int v7; // r0@9

  v1 = this;
  *(_DWORD *)this = &off_2719EAC;
  j_LocalConnector::disconnect(this);
  *(_QWORD *)&v2 = *(_QWORD *)((char *)v1 + 172);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void (__fastcall **)(int, int, signed int))(v2 + 8);
      if ( v4 )
        v4(v2, v2, 3);
      v2 += 16;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 43);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  *(_QWORD *)&v5 = *((_QWORD *)v1 + 20);
  if ( v5 != v6 )
      v7 = *(_DWORD *)(v5 + 4);
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      *(_DWORD *)(v5 + 4) = 0;
      v5 += 8;
    while ( v6 != v5 );
    v5 = *((_DWORD *)v1 + 40);
  if ( v5 )
    j_operator delete((void *)v5);
  return v1;
}


int __fastcall LocalConnector::host(int result)
{
  LocalConnector::sLocalConnectivitySystem[0] = (LocalConnector *)result;
  return result;
}


int __fastcall LocalConnector::onNewIncomingConnection(LocalConnector *this, LocalConnector *a2)
{
  LocalConnector *v2; // r4@1
  LocalConnector *v3; // r5@1
  _DWORD *v4; // r0@1
  __int64 v5; // r2@1
  int *v6; // r5@2
  int v7; // r5@5
  _DWORD *v8; // r0@5
  int v9; // r7@5
  __int64 v10; // r0@5
  __int64 v11; // kr00_8@6
  void (*v12)(void); // r2@6
  int (__fastcall *v13)(int); // r2@6
  int v15; // [sp+0h] [bp-170h]@5
  void (*v16)(void); // [sp+8h] [bp-168h]@5
  int (__fastcall *v17)(int); // [sp+Ch] [bp-164h]@5
  LocalConnector *v18; // [sp+10h] [bp-160h]@1
  _DWORD *v19; // [sp+14h] [bp-15Ch]@1
  char v20; // [sp+18h] [bp-158h]@5
  char v21; // [sp+B8h] [bp-B8h]@1
  RakNet *v22; // [sp+154h] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  v22 = _stack_chk_guard;
  j___aeabi_memcpy8_0((int)&v21, (int)a2 + 8, 152);
  v18 = v3;
  v4 = j_operator new(0x14u);
  *v4 = &off_2719E90;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v19 = v4;
  v5 = *(_QWORD *)((char *)v2 + 164);
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    j_std::vector<LocalConnector::LocalConnection,std::allocator<LocalConnector::LocalConnection>>::_M_emplace_back_aux<LocalConnector::LocalConnection>(
      (_QWORD *)v2 + 20,
      (int)&v18);
    v6 = (int *)&v19;
    if ( v19 )
      (*(void (**)(void))(*v19 + 4))();
  }
  else
    *(_DWORD *)v5 = v3;
    v19 = 0;
    *(_DWORD *)(v5 + 4) = v4;
    *((_DWORD *)v2 + 41) = v5 + 8;
  *v6 = 0;
  v7 = *(_DWORD *)(*((_DWORD *)v2 + 41) - 4);
  j___aeabi_memcpy4_0((unsigned int)&v20 | 4, (int)&v21, 152);
  v8 = j_operator new(0xA8u);
  v9 = (int)v8;
  *v8 = v2;
  j___aeabi_memcpy4_0((int)(v8 + 1), (int)&v20, 156);
  *(_DWORD *)(v9 + 160) = v7;
  v15 = v9;
  v16 = (void (*)(void))sub_19A2DD0;
  v17 = sub_19A2DBE;
  v10 = *((_QWORD *)v2 + 22);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    j_std::vector<std::function<void ()(void)>,std::allocator<std::function<void ()(void)>>>::_M_emplace_back_aux<std::function<void ()(void)>>(
      (unsigned __int64 *)((char *)v2 + 172),
      (int)&v15);
    *(_DWORD *)(v10 + 8) = 0;
    v11 = *(_QWORD *)&v15;
    *(_QWORD *)&v15 = *(_QWORD *)v10;
    *(_QWORD *)v10 = v11;
    v12 = v16;
    v16 = *(void (**)(void))(v10 + 8);
    *(_DWORD *)(v10 + 8) = v12;
    v13 = v17;
    v17 = *(int (__fastcall **)(int))(v10 + 12);
    *(_DWORD *)(v10 + 12) = v13;
    *((_DWORD *)v2 + 44) += 16;
  if ( v16 )
    v16();
  if ( _stack_chk_guard != v22 )
    j___stack_chk_fail_0(_stack_chk_guard - v22);
  return v7;
}


LocalConnector **__fastcall LocalConnector::disconnect(LocalConnector *this)
{
  LocalConnector *v1; // r4@1
  LocalConnector **v2; // r6@1
  LocalConnector **v3; // r9@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  LocalConnector *v6; // r7@11
  int v7; // r5@12
  void (__fastcall *v8)(int, char *, int *, signed int); // r10@12
  void *v9; // r0@12
  LocalConnector **v10; // r5@15
  int v11; // r7@16
  int v12; // r0@17
  __int64 v13; // r6@20
  int v14; // r5@21
  void (__fastcall *v15)(int, int, signed int); // r3@22
  LocalConnector **result; // r0@25
  int v17; // [sp+8h] [bp-30h]@3

  v1 = this;
  v2 = (LocalConnector **)(*((_QWORD *)this + 20) >> 32);
  v3 = (LocalConnector **)*((_QWORD *)this + 20);
  if ( v3 != v2 )
  {
    do
    {
      v6 = *v3;
      if ( *v3 )
      {
        v7 = *((_DWORD *)v1 + 1);
        v8 = *(void (__fastcall **)(int, char *, int *, signed int))(*(_DWORD *)v7 + 16);
        sub_21E94B4((void **)&v17, "Disconnected");
        v8(v7, (char *)v6 + 8, &v17, 1);
        v9 = (void *)(v17 - 12);
        if ( (int *)(v17 - 12) != &dword_28898C0 )
        {
          v4 = (unsigned int *)(v17 - 4);
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
            j_j_j_j__ZdlPv_9(v9);
        }
        j_LocalConnector::onRemoteDisconnected(*v3, v1);
      }
      v3 += 2;
    }
    while ( v3 != v2 );
    v10 = (LocalConnector **)(*((_QWORD *)v1 + 20) >> 32);
    v3 = (LocalConnector **)*((_QWORD *)v1 + 20);
    if ( v10 != v3 )
      v11 = *((_QWORD *)v1 + 20);
      do
        v12 = *(_DWORD *)(v11 + 4);
        if ( v12 )
          (*(void (**)(void))(*(_DWORD *)v12 + 4))();
        *(_DWORD *)(v11 + 4) = 0;
        v11 += 8;
      while ( v10 != (LocalConnector **)v11 );
  }
  *((_DWORD *)v1 + 41) = v3;
  v13 = *(_QWORD *)((char *)v1 + 172);
  if ( HIDWORD(v13) != (_DWORD)v13 )
    v14 = *(_QWORD *)((char *)v1 + 172);
      v15 = *(void (__fastcall **)(int, int, signed int))(v14 + 8);
      if ( v15 )
        v15(v14, v14, 3);
      v14 += 16;
    while ( HIDWORD(v13) != v14 );
  *((_DWORD *)v1 + 44) = v13;
  result = (LocalConnector **)LocalConnector::sLocalConnectivitySystem[0];
  if ( LocalConnector::sLocalConnectivitySystem[0] == v1 )
    result = LocalConnector::sLocalConnectivitySystem;
    LocalConnector::sLocalConnectivitySystem[0] = 0;
  return result;
}


int __fastcall LocalConnector::getIPv6Port(LocalConnector *this)
{
  return 0;
}


int __fastcall LocalConnector::getGUID(int result)
{
  int v1; // r3@1
  int v2; // r12@1
  int v3; // r1@1

  v1 = unk_2823314;
  v2 = *(_DWORD *)&word_2823318;
  v3 = dword_282331C;
  *(_DWORD *)result = unk_2823310;
  *(_DWORD *)(result + 4) = v1;
  *(_DWORD *)(result + 8) = v2;
  *(_DWORD *)(result + 12) = v3;
  return result;
}


RakNet *__fastcall LocalConnector::onRemoteDisconnected(LocalConnector *this, const LocalConnector *a2)
{
  LocalConnector *v2; // r4@1
  int v3; // r0@1
  int v4; // r2@1
  __int64 v5; // kr00_8@1
  int v6; // r3@1
  int v7; // r3@2
  int v8; // r6@3
  bool v9; // zf@3
  const LocalConnector *v10; // r7@6
  bool v11; // zf@6
  int v12; // r3@11
  int v13; // r7@21
  _DWORD *v14; // r6@21
  __int64 v15; // r0@21
  __int64 v16; // kr08_8@22
  void (*v17)(void); // r2@22
  int (__fastcall *v18)(int); // r2@22
  RakNet *result; // r0@26
  _DWORD *v20; // [sp+0h] [bp-C8h]@21
  void (*v21)(void); // [sp+8h] [bp-C0h]@21
  int (__fastcall *v22)(int); // [sp+Ch] [bp-BCh]@21
  char v23; // [sp+10h] [bp-B8h]@21
  RakNet *v24; // [sp+ACh] [bp-1Ch]@1

  v2 = this;
  v24 = _stack_chk_guard;
  v5 = *((_QWORD *)this + 20);
  v3 = *((_QWORD *)this + 20) >> 32;
  v4 = v5;
  v6 = (v3 - (signed int)v5) >> 5;
  if ( v6 >= 1 )
  {
    v7 = v6 + 1;
    do
    {
      v8 = v4;
      v9 = *(_DWORD *)v4 == (_DWORD)a2;
      if ( *(const LocalConnector **)v4 != a2 )
      {
        v8 = v4 + 8;
        v9 = *(_DWORD *)(v4 + 8) == (_DWORD)a2;
      }
      if ( v9 )
        goto LABEL_20;
      v8 = v4 + 16;
      v10 = *(const LocalConnector **)(v4 + 16);
      v11 = v10 == a2;
      if ( v10 != a2 )
        v8 = v4 + 24;
        v11 = *(_DWORD *)(v4 + 24) == (_DWORD)a2;
      if ( v11 )
      --v7;
      v4 += 32;
    }
    while ( v7 > 1 );
  }
  if ( 1 == (v3 - v4) >> 3 )
    v8 = v4;
LABEL_19:
    if ( *(const LocalConnector **)v8 != a2 )
      goto LABEL_26;
    goto LABEL_20;
  v12 = (v3 - v4) >> 3;
  if ( v12 == 2 )
  else
    if ( v12 != 3 )
    if ( *(const LocalConnector **)v4 == a2 )
      goto LABEL_20;
    v8 = v4 + 8;
  if ( *(const LocalConnector **)v8 != a2 )
    v8 += 8;
    goto LABEL_19;
LABEL_20:
  if ( v8 != v3 )
    *(_DWORD *)v8 = 0;
    j___aeabi_memcpy8_0((int)&v23, (int)a2 + 8, 152);
    v13 = *(_DWORD *)(v8 + 4);
    v14 = j_operator new(0xA0u);
    j___aeabi_memcpy8_0((int)v14, (int)&v23, 152);
    v14[38] = v13;
    v14[39] = v2;
    v20 = v14;
    v21 = (void (*)(void))sub_19A2FE4;
    v22 = sub_19A2E10;
    v15 = *((_QWORD *)v2 + 22);
    if ( (_DWORD)v15 == HIDWORD(v15) )
      j_std::vector<std::function<void ()(void)>,std::allocator<std::function<void ()(void)>>>::_M_emplace_back_aux<std::function<void ()(void)>>(
        (unsigned __int64 *)((char *)v2 + 172),
        (int)&v20);
    else
      *(_DWORD *)(v15 + 8) = 0;
      v16 = *(_QWORD *)&v20;
      *(_QWORD *)&v20 = *(_QWORD *)v15;
      *(_QWORD *)v15 = v16;
      v17 = v21;
      v21 = *(void (**)(void))(v15 + 8);
      *(_DWORD *)(v15 + 8) = v17;
      v18 = v22;
      v22 = *(int (__fastcall **)(int))(v15 + 12);
      *(_DWORD *)(v15 + 12) = v18;
      *((_DWORD *)v2 + 44) += 16;
    if ( v21 )
      v21();
LABEL_26:
  result = (RakNet *)(_stack_chk_guard - v24);
  if ( _stack_chk_guard != v24 )
    j___stack_chk_fail_0((int)result);
  return result;
}


int __fastcall LocalConnector::getRefinedLocalIps(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}
