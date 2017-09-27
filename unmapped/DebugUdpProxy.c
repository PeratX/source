

int *__fastcall DebugUdpProxy::DebugUdpProxy(int *a1, int *a2, __int16 a3)
{
  int *v3; // r4@1
  __int16 v4; // r6@1
  int *v5; // r5@1
  unsigned int v6; // r0@1
  signed int v7; // r2@1
  signed int v8; // r1@1
  int v9; // r0@2
  int v10; // r6@2
  char *v11; // r0@3
  char v13; // [sp+8h] [bp-98h]@3
  RakNet *v14; // [sp+8Ch] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v14 = _stack_chk_guard;
  sub_21E8AF4(a1, a2);
  *((_WORD *)v3 + 2) = v4;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v6 = sub_21E67AC((int)&Random::mRandomDevice);
  v3[5] = v6;
  v7 = 7;
  v3[630] = 625;
  v8 = 1;
  *((_BYTE *)v3 + 2524) = 0;
  v3[632] = 0;
  v3[6] = v6;
  do
  {
    v9 = v6 ^ (v6 >> 30);
    v10 = v7 + 1812433253 * v9;
    v6 = v8++ + 1812433253 * v9;
    v3[v7++] = v10 - 6;
  }
  while ( v7 != 404 );
  v3[630] = 624;
  v3[633] = 398;
  v3[635] = 0;
  v3[636] = 0;
  v3[637] = 0;
  v3[638] = 0;
  v3[639] = 0;
  v3[640] = 0;
  v3[641] = 0;
  v3[642] = 0;
  _aeabi_memclr4(v3 + 663, 36);
  v3[3] = 0x7FFFFFFF;
  RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)&v13);
  RakNet::SystemAddress::FromString((RakNet::SystemAddress *)&v13, (const char *)*v5, 124, 0);
  *((_WORD *)v3 + 1328) = 2;
  v11 = RakNet::SystemAddress::ToString((RakNet::SystemAddress *)&v13, 0, 124);
  v3[665] = inet_addr(v11);
  *((_WORD *)v3 + 1329) = __rev(*((_WORD *)v3 + 2)) >> 16;
  v3[669] = inet_addr("127.0.0.1");
  DebugUdpProxy::_start((DebugUdpProxy *)v3);
  if ( _stack_chk_guard != v14 )
    _stack_chk_fail(_stack_chk_guard - v14);
  return v3;
}


char *__fastcall DebugUdpProxy::_start(DebugUdpProxy *this)
{
  DebugUdpProxy *v1; // r4@1
  _DWORD *v2; // r5@1
  _DWORD *v3; // r0@1
  int v4; // r5@1
  unsigned int *v5; // r1@2
  unsigned int v6; // r0@4
  unsigned int *v7; // r6@8
  unsigned int v8; // r0@10
  pthread_t v9; // r0@16
  char *result; // r0@17
  pthread_t newthread; // [sp+4h] [bp-3Ch]@1
  int optval; // [sp+8h] [bp-38h]@1
  signed int v13; // [sp+Ch] [bp-34h]@1
  _DWORD *v14; // [sp+10h] [bp-30h]@1
  int v15; // [sp+14h] [bp-2Ch]@1
  struct sockaddr addr; // [sp+18h] [bp-28h]@1
  RakNet *v17; // [sp+28h] [bp-18h]@1

  v1 = this;
  v17 = _stack_chk_guard;
  __dmb();
  *((_BYTE *)this + 2536) = 1;
  *((_DWORD *)this + 636) = socket(2, 2, 0);
  addr.sa_family = 2;
  *(_DWORD *)&addr.sa_data[2] = inet_addr("0.0.0.0");
  *(_WORD *)&addr.sa_data[0] = 14896;
  bind(*((_DWORD *)v1 + 636), &addr, 0x10u);
  optval = 0;
  v13 = 1;
  setsockopt(*((_DWORD *)v1 + 636), 1, 20, &optval, 8u);
  newthread = 0;
  v2 = operator new(0x10u);
  *v2 = &off_26E9224;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = v1;
  v3 = operator new(0x14u);
  v3[1] = 1;
  v3[2] = 1;
  *v3 = &off_26E9238;
  v3[4] = v2;
  v14 = v2;
  v15 = (int)v3;
  sub_21E99CC(&newthread, (int)&v14);
  v4 = v15;
  if ( v15 )
  {
    v5 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  }
  if ( !pthread_equal(*((_DWORD *)v1 + 635), 0) )
    std::terminate();
  v9 = *((_DWORD *)v1 + 635);
  *((_DWORD *)v1 + 635) = newthread;
  newthread = v9;
  if ( !pthread_equal(v9, 0) )
  result = (char *)(_stack_chk_guard - v17);
  if ( _stack_chk_guard != v17 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall DebugUdpProxy::_doTransfer(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  __int64 v8; // kr08_8@1
  int v9; // r9@1
  __int64 v10; // kr10_8@1
  signed __int64 v19; // r2@3
  signed int result; // r0@3
  int v21; // [sp+0h] [bp-48h]@1
  int v22; // [sp+4h] [bp-44h]@1
  int v23; // [sp+8h] [bp-40h]@1
  int v24; // [sp+Ch] [bp-3Ch]@1
  int v25; // [sp+10h] [bp-38h]@1
  int v26; // [sp+14h] [bp-34h]@1
  char v27; // [sp+18h] [bp-30h]@3

  v4 = a4;
  v5 = a1;
  _R7 = a2;
  v26 = *(_DWORD *)(a4 + 4);
  _R10 = a3;
  v25 = *(_DWORD *)(a4 + 8);
  v24 = *(_DWORD *)(a4 + 12);
  v8 = *(_QWORD *)(a4 + 16);
  v9 = *(_DWORD *)a4;
  v23 = *(_QWORD *)(a4 + 16) >> 32;
  v22 = *(_DWORD *)(a4 + 24);
  v21 = *(_DWORD *)(a4 + 28);
  v10 = *(_QWORD *)(a4 + 32);
  _R0 = Random::_genRandInt32((Random *)(a2 + 20));
  __asm
  {
    VMOV            S4, R0
    VLDR            S0, [R7,#0x10]
    VMOV            S2, R10
    VLDR            D3, =2.32830644e-10
    VCVT.F64.U32    D2, S4
    VCVT.F32.S32    S2, S2
    VMUL.F64        D2, D2, D3
    VLDR            S6, =0.00071429
    VMUL.F32        S2, S2, S6
    VMUL.F32        S0, S2, S0
    VCVT.F32.F64    S2, D2
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    goto LABEL_8;
  _R0 = *(_DWORD *)(_R7 + 12);
  _R1 = 1717986919;
  __asm { SMMUL.W         R0, R0, R1 }
  if ( v26 + v9 + v25 + v24 + (signed int)v8 + v23 + v22 + v21 + (signed int)v10 + HIDWORD(v10) >= (signed int)(((signed int)_R0 >> 2) + (_R0 >> 31)) )
LABEL_8:
    *(_DWORD *)v5 = 0;
    *(_DWORD *)(v5 + 4) = 0;
    result = 1;
  else
    sub_21E034C(&v27);
    v19 = 1000000LL * (*(_DWORD *)(_R7 + 8) / 2) + *(_QWORD *)&v27;
    *(_DWORD *)(v4 + 4 * *(_DWORD *)(_R7 + 2652)) += _R10;
    result = 0;
    *(_QWORD *)v5 = v19;
  *(_BYTE *)(v5 + 8) = result;
  return result;
}


char *__fastcall DebugUdpProxy::_sendDelayedPackets(DebugUdpProxy *this)
{
  DebugUdpProxy *v1; // r4@1
  int v2; // r1@1
  int v3; // r6@2
  signed int v4; // r0@2
  signed int v5; // r2@4
  int v6; // r2@9
  int v7; // r3@9
  int v8; // r6@9
  int v9; // r2@9
  int v10; // r0@9
  signed int v11; // r0@10
  int v12; // r6@11
  int v13; // r5@12
  int v14; // r0@15
  int v15; // r1@16
  int v16; // r6@17
  signed int v17; // r0@17
  signed int v18; // r2@19
  int v19; // r2@24
  int v20; // r3@24
  int v21; // r6@24
  int v22; // r2@24
  int v23; // r0@24
  signed int v24; // r0@25
  int v25; // r6@26
  int v26; // r5@27
  int v27; // r0@30
  signed __int64 v28; // r2@31
  char *v29; // r0@32
  char *result; // r0@33
  unsigned int v31; // [sp+8h] [bp-38h]@1
  int v32; // [sp+Ch] [bp-34h]@4
  struct sockaddr addr; // [sp+10h] [bp-30h]@9
  RakNet *v34; // [sp+20h] [bp-20h]@1

  v1 = this;
  v34 = _stack_chk_guard;
  sub_21E034C(&v31);
  v2 = *((_DWORD *)v1 + 637);
  if ( v2 != *((_DWORD *)v1 + 638) )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 2012);
      v4 = 0;
      if ( v31 >= *(_DWORD *)(v2 + 2008) )
        v4 = 1;
      v5 = 0;
      if ( v32 >= v3 )
        v5 = 1;
      if ( v32 == v3 )
        v5 = v4;
      if ( !v5 )
        break;
      v6 = *((_DWORD *)v1 + 669);
      v7 = *((_DWORD *)v1 + 670);
      v8 = *((_DWORD *)v1 + 671);
      *(_DWORD *)&addr.sa_family = *((_DWORD *)v1 + 668);
      *(_DWORD *)&addr.sa_data[2] = v6;
      *(_DWORD *)&addr.sa_data[6] = v7;
      *(_DWORD *)&addr.sa_data[10] = v8;
      sendto(*((_DWORD *)v1 + 636), (const void *)v2, *(_DWORD *)(v2 + 2000), 0, &addr, 0x10u);
      v2 = *((_DWORD *)v1 + 637);
      v9 = *((_DWORD *)v1 + 638);
      v10 = v2 + 2016;
      if ( v2 + 2016 != v9 )
      {
        v11 = v9 - v10;
        if ( v11 < 1 )
        {
          v10 = *((_DWORD *)v1 + 638);
        }
        else
          v12 = -1090785345 * (v11 >> 5) + 1;
          do
          {
            v13 = v2 + 2016;
            _aeabi_memcpy8(v2, v2 + 2016, 2016);
            --v12;
            v2 = v13;
          }
          while ( v12 > 1 );
          v2 = *((_DWORD *)v1 + 637);
      }
      v14 = v10 - 2016;
      *((_DWORD *)v1 + 638) = v14;
    }
    while ( v2 != v14 );
  }
  v15 = *((_DWORD *)v1 + 640);
  if ( v15 != *((_DWORD *)v1 + 641) )
      v16 = *(_DWORD *)(v15 + 2012);
      v17 = 0;
      if ( v31 < *(_DWORD *)(v15 + 2008) )
        v17 = 1;
      v18 = 0;
      if ( v32 < v16 )
        v18 = 1;
      if ( v32 == v16 )
        v18 = v17;
      if ( v18 )
      v19 = *((_DWORD *)v1 + 665);
      v20 = *((_DWORD *)v1 + 666);
      v21 = *((_DWORD *)v1 + 667);
      *(_DWORD *)&addr.sa_family = *((_DWORD *)v1 + 664);
      *(_DWORD *)&addr.sa_data[2] = v19;
      *(_DWORD *)&addr.sa_data[6] = v20;
      *(_DWORD *)&addr.sa_data[10] = v21;
      sendto(*((_DWORD *)v1 + 636), (const void *)v15, *(_DWORD *)(v15 + 2000), 0, &addr, 0x10u);
      v15 = *((_DWORD *)v1 + 640);
      v22 = *((_DWORD *)v1 + 641);
      v23 = v15 + 2016;
      if ( v15 + 2016 != v22 )
        v24 = v22 - v23;
        if ( v24 < 1 )
          v23 = *((_DWORD *)v1 + 641);
          v25 = -1090785345 * (v24 >> 5) + 1;
            v26 = v15 + 2016;
            _aeabi_memcpy8(v15, v15 + 2016, 2016);
            --v25;
            v15 = v26;
          while ( v25 > 1 );
          v15 = *((_DWORD *)v1 + 640);
      v27 = v23 - 2016;
      *((_DWORD *)v1 + 641) = v27;
    while ( v15 != v27 );
  v28 = *(_QWORD *)&v31 / 100000000LL % 10;
  if ( (_DWORD)v28 != *((_DWORD *)v1 + 663) )
    v29 = (char *)v1 + 4 * v28;
    *((_DWORD *)v29 + 643) = 0;
    *((_DWORD *)v29 + 653) = 0;
    *((_DWORD *)v1 + 663) = v28;
  result = (char *)(_stack_chk_guard - v34);
  if ( _stack_chk_guard != v34 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall DebugUdpProxy::getPort(DebugUdpProxy *this)
{
  return 12346;
}


char *__fastcall DebugUdpProxy::_addOutgoingPacket(DebugUdpProxy *this, const char (*a2)[2000], int a3)
{
  int v5; // r9@1
  int v6; // r10@1
  int v7; // r11@1
  int v8; // r8@1
  int v9; // r6@1
  int v10; // r7@1
  __int64 v19; // r6@3
  signed int v20; // r9@3
  char *result; // r0@4
  const char *v22; // [sp+4h] [bp-81Ch]@1
  int v23; // [sp+8h] [bp-818h]@1
  int v24; // [sp+Ch] [bp-814h]@1
  int v25; // [sp+10h] [bp-810h]@1
  int v26; // [sp+14h] [bp-80Ch]@1
  char v27; // [sp+18h] [bp-808h]@3
  int v28; // [sp+7E8h] [bp-38h]@3
  __int64 v29; // [sp+7F0h] [bp-30h]@3
  RakNet *v30; // [sp+7F8h] [bp-28h]@1

  _R4 = this;
  v22 = (const char *)a2;
  _R5 = a3;
  v30 = _stack_chk_guard;
  v26 = *((_DWORD *)this + 654);
  v25 = *((_DWORD *)this + 655);
  v5 = *((_DWORD *)this + 656);
  v6 = *((_DWORD *)this + 657);
  v7 = *((_DWORD *)this + 658);
  v24 = *((_DWORD *)this + 659);
  v23 = *((_DWORD *)this + 660);
  v8 = *((_DWORD *)this + 653);
  v9 = *((_DWORD *)this + 661);
  v10 = *((_DWORD *)this + 662);
  _R0 = Random::_genRandInt32((DebugUdpProxy *)((char *)this + 20));
  __asm
  {
    VMOV            S4, R0
    VLDR            S0, [R4,#0x10]
    VMOV            S2, R5
    VLDR            D3, =2.32830644e-10
    VCVT.F64.U32    D2, S4
    VCVT.F32.S32    S2, S2
    VMUL.F64        D2, D2, D3
    VLDR            S6, =0.00071429
    VMUL.F32        S2, S2, S6
    VMUL.F32        S0, S2, S0
    VCVT.F32.F64    S2, D2
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    _R0 = *((_DWORD *)_R4 + 3);
    _R1 = 1717986919;
    __asm { SMMUL.W         R0, R0, R1 }
    if ( v26 + v8 + v25 + v5 + v6 + v7 + v24 + v23 + v9 + v10 < (signed int)(((signed int)_R0 >> 2) + (_R0 >> 31)) )
    {
      sub_21E034C(&v27);
      v19 = *(_QWORD *)&v27;
      v20 = *((_DWORD *)_R4 + 2);
      *((_DWORD *)_R4 + *((_DWORD *)_R4 + 663) + 653) += _R5;
      _aeabi_memcpy(&v27, v22, _R5);
      v28 = _R5;
      v29 = 1000000LL * (v20 / 2) + v19;
      std::vector<DebugUdpProxy::DelayedPacket,std::allocator<DebugUdpProxy::DelayedPacket>>::emplace_back<DebugUdpProxy::DelayedPacket>(
        (int)_R4 + 2560,
        (int)&v27);
    }
  result = (char *)(_stack_chk_guard - v30);
  if ( _stack_chk_guard != v30 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall DebugUdpProxy::setQuality(int result, int a2)
{
  signed int v2; // r2@2
  signed int v3; // r3@2
  signed int v4; // r1@2
  __int64 v5; // r1@3

  switch ( a2 )
  {
    case 1:
      v2 = 15000000;
      v3 = 1008981770;
      v4 = 100;
      goto LABEL_7;
    case 2:
      v2 = 1500000;
      v3 = 1017370378;
      v4 = 200;
    case 3:
      v2 = 400000;
      v3 = 1022739087;
      v4 = 350;
    case 4:
      v2 = 200000;
      v3 = 1025758986;
      v4 = 500;
LABEL_7:
      *(_DWORD *)(result + 8) = v4;
      *(_DWORD *)(result + 12) = v2;
      *(_DWORD *)(result + 16) = v3;
      break;
    default:
      LODWORD(v5) = 0;
      HIDWORD(v5) = 0x7FFFFFFF;
      *(_QWORD *)(result + 8) = v5;
      *(_DWORD *)(result + 16) = 0;
  }
  return result;
}


char *__fastcall DebugUdpProxy::_routingLoop(DebugUdpProxy *this)
{
  DebugUdpProxy *v1; // r4@1
  char v2; // r0@1
  int v3; // r2@2
  int v4; // r1@7
  int v5; // r3@7
  int v6; // r7@7
  char v7; // r0@8
  char *result; // r0@9
  int v9; // [sp+Ch] [bp-80Ch]@2
  const char buf[2000]; // [sp+10h] [bp-808h]@2
  signed int v11; // [sp+14h] [bp-804h]@8
  struct sockaddr addr; // [sp+7E0h] [bp-38h]@2
  RakNet *v13; // [sp+7F0h] [bp-28h]@1

  v1 = this;
  v13 = _stack_chk_guard;
  v2 = *((_BYTE *)this + 2536);
  __dmb();
  if ( v2 & 1 )
  {
    do
    {
      v9 = 16;
      v3 = recvfrom(*((_DWORD *)v1 + 636), (void *)buf, 0x7D0u, 0, &addr, (socklen_t *)&v9);
      if ( v3 >= 1 )
      {
        if ( *(_DWORD *)&addr.sa_data[2] != *((_DWORD *)v1 + 665)
          || *(unsigned __int16 *)&addr.sa_data[0] != *((_WORD *)v1 + 1329) )
        {
          if ( *(_DWORD *)&addr.sa_data[2] == *((_DWORD *)v1 + 669) )
          {
            v4 = *(_DWORD *)&addr.sa_data[2];
            v5 = *(_DWORD *)&addr.sa_data[6];
            v6 = *(_DWORD *)&addr.sa_data[10];
            *((_DWORD *)v1 + 668) = *(_DWORD *)&addr.sa_family;
            *((_DWORD *)v1 + 669) = v4;
            *((_DWORD *)v1 + 670) = v5;
            *((_DWORD *)v1 + 671) = v6;
            DebugUdpProxy::_addOutgoingPacket(v1, (const char (*)[2000])buf, v3);
          }
        }
        else
          DebugUdpProxy::_addIncomingPacket(v1, (const char (*)[2000])buf, v3);
      }
      DebugUdpProxy::_sendDelayedPackets(v1);
      *(_DWORD *)buf = 0;
      v11 = 1000000;
      nanosleep((const struct timespec *)buf, 0);
      v7 = *((_BYTE *)v1 + 2536);
      __dmb();
    }
    while ( v7 & 1 );
  }
  result = (char *)(_stack_chk_guard - v13);
  if ( _stack_chk_guard != v13 )
    _stack_chk_fail(result);
  return result;
}


DebugUdpProxy *__fastcall DebugUdpProxy::~DebugUdpProxy(DebugUdpProxy *this)
{
  DebugUdpProxy *v1; // r4@1
  pthread_t *v2; // r6@1
  void *v3; // r0@1
  void *v4; // r0@3
  int *v5; // r0@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10

  v1 = this;
  v2 = (pthread_t *)((char *)this + 2540);
  __dmb();
  *((_BYTE *)this + 2536) = 0;
  sub_21E9834((pthread_t *)this + 635);
  close(*((_DWORD *)v1 + 636));
  *((_DWORD *)v1 + 636) = 0;
  v3 = (void *)*((_DWORD *)v1 + 640);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 637);
  if ( v4 )
    operator delete(v4);
  if ( !pthread_equal(*v2, 0) )
    std::terminate();
  v5 = (int *)(*(_DWORD *)v1 - 12);
  if ( v5 != &dword_28898C0 )
  {
    v7 = (unsigned int *)(*(_DWORD *)v1 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  return v1;
}


int __fastcall DebugUdpProxy::_stop(DebugUdpProxy *this)
{
  DebugUdpProxy *v1; // r4@1
  int result; // r0@1

  v1 = this;
  __dmb();
  *((_BYTE *)this + 2536) = 0;
  sub_21E9834((pthread_t *)this + 635);
  result = close(*((_DWORD *)v1 + 636));
  *((_DWORD *)v1 + 636) = 0;
  return result;
}


char *__fastcall DebugUdpProxy::_addIncomingPacket(DebugUdpProxy *this, const char (*a2)[2000], int a3)
{
  int v5; // r9@1
  int v6; // r10@1
  int v7; // r11@1
  int v8; // r8@1
  int v9; // r6@1
  int v10; // r7@1
  __int64 v19; // r6@3
  signed int v20; // r9@3
  char *result; // r0@4
  const char *v22; // [sp+4h] [bp-81Ch]@1
  int v23; // [sp+8h] [bp-818h]@1
  int v24; // [sp+Ch] [bp-814h]@1
  int v25; // [sp+10h] [bp-810h]@1
  int v26; // [sp+14h] [bp-80Ch]@1
  char v27; // [sp+18h] [bp-808h]@3
  int v28; // [sp+7E8h] [bp-38h]@3
  __int64 v29; // [sp+7F0h] [bp-30h]@3
  RakNet *v30; // [sp+7F8h] [bp-28h]@1

  _R4 = this;
  v22 = (const char *)a2;
  _R5 = a3;
  v30 = _stack_chk_guard;
  v26 = *((_DWORD *)this + 644);
  v25 = *((_DWORD *)this + 645);
  v24 = *((_DWORD *)this + 649);
  v23 = *((_DWORD *)this + 650);
  v5 = *((_DWORD *)this + 646);
  v6 = *((_DWORD *)this + 647);
  v7 = *((_DWORD *)this + 648);
  v8 = *((_DWORD *)this + 643);
  v9 = *((_DWORD *)this + 651);
  v10 = *((_DWORD *)this + 652);
  _R0 = Random::_genRandInt32((DebugUdpProxy *)((char *)this + 20));
  __asm
  {
    VMOV            S4, R0
    VLDR            S0, [R4,#0x10]
    VMOV            S2, R5
    VLDR            D3, =2.32830644e-10
    VCVT.F64.U32    D2, S4
    VCVT.F32.S32    S2, S2
    VMUL.F64        D2, D2, D3
    VLDR            S6, =0.00071429
    VMUL.F32        S2, S2, S6
    VMUL.F32        S0, S2, S0
    VCVT.F32.F64    S2, D2
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    _R0 = *((_DWORD *)_R4 + 3);
    _R1 = 1717986919;
    __asm { SMMUL.W         R0, R0, R1 }
    if ( v26 + v8 + v25 + v5 + v6 + v7 + v24 + v23 + v9 + v10 < (signed int)(((signed int)_R0 >> 2) + (_R0 >> 31)) )
    {
      sub_21E034C(&v27);
      v19 = *(_QWORD *)&v27;
      v20 = *((_DWORD *)_R4 + 2);
      *((_DWORD *)_R4 + *((_DWORD *)_R4 + 663) + 643) += _R5;
      _aeabi_memcpy(&v27, v22, _R5);
      v28 = _R5;
      v29 = 1000000LL * (v20 / 2) + v19;
      std::vector<DebugUdpProxy::DelayedPacket,std::allocator<DebugUdpProxy::DelayedPacket>>::emplace_back<DebugUdpProxy::DelayedPacket>(
        (int)_R4 + 2548,
        (int)&v27);
    }
  result = (char *)(_stack_chk_guard - v30);
  if ( _stack_chk_guard != v30 )
    _stack_chk_fail(result);
  return result;
}


void *__fastcall DebugUdpProxy::getHost(DebugUdpProxy *this)
{
  char v1; // r0@1

  v1 = byte_27EA4D0;
  __dmb();
  if ( !(v1 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27EA4D0) )
  {
    sub_21E94B4((void **)&unk_27EA4CC, "127.0.0.1");
    _cxa_atexit(sub_21E6EDC);
    j___cxa_guard_release((unsigned int *)&byte_27EA4D0);
  }
  return &unk_27EA4CC;
}
