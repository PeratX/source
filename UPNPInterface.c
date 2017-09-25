

char *__fastcall UPNPInterface::getExternalIP(UPNPInterface *this)
{
  return (char *)this + 640;
}


char *__fastcall UPNPInterface::getPortMappingv4(UPNPInterface *this)
{
  return (char *)this + 16;
}


unsigned __int64 *__fastcall UPNPInterface::_changeUpnpState(unsigned __int64 *result, _DWORD *a2, int a3)
{
  _DWORD *v3; // r5@1
  int v4; // r4@1
  int v5; // r8@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // r11@20
  void (__fastcall *v11)(int, int *, int *, _DWORD); // r6@20
  void *v12; // r0@20
  void *v13; // r0@21
  int i; // [sp+10h] [bp-48h]@2
  int v15; // [sp+18h] [bp-40h]@4
  int v16; // [sp+20h] [bp-38h]@8

  v3 = a2;
  v4 = a3;
  if ( *a2 != a3 )
  {
    v5 = *result;
    for ( i = *result >> 32; v5 != i; v5 += 4 )
    {
      v10 = *(_DWORD *)v5;
      v11 = *(void (__fastcall **)(int, int *, int *, _DWORD))(**(_DWORD **)v5 + 8);
      sub_21E94B4((void **)&v16, "UPNP");
      sub_21E94B4((void **)&v15, "UPNP");
      v11(v10, &v16, &v15, *v3);
      v12 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v15 - 4);
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
          j_j_j_j__ZdlPv_9(v12);
      }
      v13 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v16 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
    }
    *v3 = v4;
    result = (unsigned __int64 *)&Social::Events::eventSequenceNumber;
    ++Social::Events::eventSequenceNumber;
  }
  return result;
}


int __fastcall UPNPInterface::retrieveExternalIPv4(UPNPInterface *this)
{
  UPNPInterface *v1; // r4@1
  int result; // r0@1
  void *v3; // r0@3
  _DWORD *v4; // r0@4
  int v5; // r12@6
  unsigned int *v6; // r12@8
  signed int v7; // r1@10
  _DWORD *v8; // [sp+8h] [bp-30h]@4
  int (__fastcall *v9)(void **, _DWORD **, int); // [sp+10h] [bp-28h]@4
  int (*v10)(); // [sp+14h] [bp-24h]@4
  int v11; // [sp+1Ch] [bp-1Ch]@3
  char v12; // [sp+20h] [bp-18h]@6

  v1 = this;
  result = *((_DWORD *)this + 225);
  if ( result != 1 )
  {
    result = *((_BYTE *)v1 + 912);
    if ( !*((_BYTE *)v1 + 912) )
    {
      sub_21E94B4((void **)&v11, "Get External IPv4");
      UPNPInterface::_changeUpnpState((unsigned __int64 *)v1, (_DWORD *)v1 + 225, 1);
      v3 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v11 - 4);
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
          j_j_j_j__ZdlPv_9(v3);
      }
      *((_BYTE *)v1 + 912) = 1;
      v4 = operator new(4u);
      *v4 = v1;
      v8 = v4;
      v9 = sub_1558BFC;
      v10 = sub_1558AEC;
      UPNPInterface::_retrieveExternalIPv4((int)v1, (int)&v8);
      if ( v9 )
        ((void (__cdecl *)(_DWORD **, _DWORD **))v9)(&v8, &v8);
      sub_21E034C(&v12);
      result = *(_DWORD *)&v12;
      v5 = (int)v1 + 920;
      *(_QWORD *)v5 = *(_QWORD *)&v12;
      *(_DWORD *)(v5 + 8) = 3;
      *((_DWORD *)v1 + 233) = 0;
      *((_BYTE *)v1 + 936) = 0;
      *((_BYTE *)v1 + 913) = 0;
    }
  }
  return result;
}


int __fastcall UPNPInterface::_createPortMapping(int a1, int a2, const char *a3, int a4, int a5)
{
  int v5; // r6@0 OVERLAPPED
  int v6; // r8@1
  void (__fastcall *v7)(int *, int, signed int); // r3@1
  const char *v8; // r9@1
  int v9; // r10@1
  int v10; // r5@2 OVERLAPPED
  void *v11; // r0@4
  int result; // r0@4
  int v13; // [sp+4h] [bp-44h]@1
  int v14; // [sp+8h] [bp-40h]@2
  int (__fastcall *v15)(int *, int *, signed int); // [sp+10h] [bp-38h]@1
  int v16; // [sp+14h] [bp-34h]@2
  void *v17; // [sp+18h] [bp-30h]@4
  int (*v18)(void); // [sp+20h] [bp-28h]@4
  char *(__fastcall *v19)(int **, const char *); // [sp+24h] [bp-24h]@4

  v13 = a1;
  v15 = 0;
  v6 = a4;
  v7 = *(void (__fastcall **)(int *, int, signed int))(a5 + 8);
  v8 = a3;
  v9 = a2;
  if ( v7 )
  {
    v7(&v14, a5, 2);
    v5 = *(_DWORD *)(a5 + 12);
    v16 = *(_DWORD *)(a5 + 12);
    v10 = *(_DWORD *)(a5 + 8);
    v15 = *(int (__fastcall **)(int *, int *, signed int))(a5 + 8);
  }
  else
    v10 = 0;
  v18 = 0;
  v11 = operator new(0x14u);
  *(_DWORD *)v11 = v13;
  *(_QWORD *)((char *)v11 + 4) = *(_QWORD *)&v14;
  *(_QWORD *)((char *)v11 + 12) = *(_QWORD *)(&v5 - 1);
  v17 = v11;
  v18 = (int (*)(void))sub_1558D4C;
  v19 = sub_1558C34;
  result = UPNPCreatePortMappingAsync(v9, 3000, v8, v6, (int)&v17);
  if ( v18 )
    result = v18();
  if ( v15 )
    result = v15(&v14, &v14, 3);
  return result;
}


int __fastcall UPNPInterface::createIPv4PortMapping(UPNPInterface *this, int a2)
{
  UPNPInterface *v2; // r4@1
  int v3; // r5@1
  int result; // r0@1
  void *v5; // r0@3
  const char *v6; // r6@4
  _DWORD *v7; // r0@4
  int v8; // r12@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  _DWORD *v11; // [sp+8h] [bp-30h]@4
  void (*v12)(void); // [sp+10h] [bp-28h]@4
  int (__fastcall *v13)(int **, int, int, int); // [sp+14h] [bp-24h]@4
  int v14; // [sp+1Ch] [bp-1Ch]@3
  char v15; // [sp+20h] [bp-18h]@6

  v2 = this;
  v3 = a2;
  result = *((_DWORD *)this + 70);
  if ( result != 1 )
  {
    result = *((_BYTE *)v2 + 288);
    if ( !*((_BYTE *)v2 + 288) )
    {
      sub_21E94B4((void **)&v14, "IPv4 Port Mapping");
      UPNPInterface::_changeUpnpState((unsigned __int64 *)v2, (_DWORD *)v2 + 70, 1);
      v5 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
      {
        v9 = (unsigned int *)(v14 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v5);
      }
      *((_BYTE *)v2 + 288) = 1;
      v6 = MAPPING_DESCRIPTOR[0];
      v7 = operator new(4u);
      *v7 = v2;
      v11 = v7;
      v12 = (void (*)(void))sub_1558968;
      v13 = sub_1558858;
      UPNPInterface::_createPortMapping((int)v2, v3, v6, 0, (int)&v11);
      if ( v12 )
        v12();
      sub_21E034C(&v15);
      result = *(_DWORD *)&v15;
      v8 = (int)v2 + 296;
      *(_QWORD *)v8 = *(_QWORD *)&v15;
      *(_DWORD *)(v8 + 8) = 3;
      *((_DWORD *)v2 + 77) = 0;
      *((_BYTE *)v2 + 312) = 0;
      *((_BYTE *)v2 + 289) = 0;
    }
  }
  return result;
}


char *__fastcall UPNPInterface::getPortMappingv6(UPNPInterface *this)
{
  return (char *)this + 328;
}


int __fastcall UPNPInterface::_retrieveExternalIPv4(int a1, int a2)
{
  int v2; // r6@0 OVERLAPPED
  int v3; // r5@1
  void (__fastcall *v4)(int *); // r3@1
  int (__fastcall *v5)(int *, int *, signed int); // r5@2 OVERLAPPED
  void *v6; // r0@4
  int result; // r0@4
  int v8; // [sp+0h] [bp-38h]@1
  int v9; // [sp+4h] [bp-34h]@2
  int (__fastcall *v10)(int *, int *, signed int); // [sp+Ch] [bp-2Ch]@1
  int v11; // [sp+10h] [bp-28h]@2
  void *v12; // [sp+14h] [bp-24h]@4
  int (*v13)(void); // [sp+1Ch] [bp-1Ch]@4
  int (*v14)(); // [sp+20h] [bp-18h]@4

  v8 = a1;
  v3 = a2;
  v10 = 0;
  v4 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v4 )
  {
    v4(&v9);
    v2 = *(_DWORD *)(v3 + 12);
    v11 = *(_DWORD *)(v3 + 12);
    v5 = *(int (__fastcall **)(int *, int *, signed int))(v3 + 8);
    v10 = v5;
  }
  else
    v5 = 0;
  v13 = 0;
  v6 = operator new(0x14u);
  *(_DWORD *)v6 = v8;
  *(_QWORD *)((char *)v6 + 4) = *(_QWORD *)&v9;
  *(_QWORD *)((char *)v6 + 12) = *(_QWORD *)(&v2 - 1);
  v12 = v6;
  v13 = (int (*)(void))sub_1558FF4;
  v14 = sub_1558EDC;
  result = UPNPGetExternalIPAsync(3000, (int)&v12);
  if ( v13 )
    result = v13();
  if ( v10 )
    result = v10(&v9, &v9, 3);
  return result;
}


int __fastcall UPNPInterface::removeConnectionStateListener(int result, int a2)
{
  int v2; // r2@1
  _DWORD *v3; // r12@1
  int v4; // r3@1
  int v5; // lr@2
  bool v6; // zf@3
  _DWORD *v7; // r3@3
  int v8; // r4@6
  bool v9; // zf@6
  int v10; // r3@11

  v3 = (_DWORD *)(*(_QWORD *)result >> 32);
  v2 = *(_QWORD *)result;
  v4 = ((signed int)v3 - v2) >> 4;
  if ( v4 < 1 )
  {
LABEL_10:
    if ( 1 == ((signed int)v3 - v2) >> 2 )
    {
      v7 = (_DWORD *)v2;
    }
    else
      v10 = ((signed int)v3 - v2) >> 2;
      if ( v10 == 2 )
      {
        v7 = (_DWORD *)v2;
      }
      else
        if ( v10 != 3 )
        {
          v7 = (_DWORD *)(*(_QWORD *)result >> 32);
          goto LABEL_23;
        }
        if ( *(_DWORD *)v2 == a2 )
        v7 = (_DWORD *)(v2 + 4);
      if ( *v7 == a2 )
        goto LABEL_23;
      ++v7;
    if ( *v7 != a2 )
      v7 = (_DWORD *)(*(_QWORD *)result >> 32);
  }
  else
    v5 = v4 + 1;
    while ( 1 )
      v6 = *(_DWORD *)v2 == a2;
      if ( *(_DWORD *)v2 != a2 )
        v6 = *(_DWORD *)(v2 + 4) == a2;
      if ( v6 )
        break;
      v7 = (_DWORD *)(v2 + 8);
      v8 = *(_DWORD *)(v2 + 8);
      v9 = v8 == a2;
      if ( v8 != a2 )
        v7 = (_DWORD *)(v2 + 12);
        v9 = *(_DWORD *)(v2 + 12) == a2;
      if ( v9 )
      --v5;
      v2 += 16;
      if ( v5 <= 1 )
        goto LABEL_10;
LABEL_23:
  if ( v7 != v3 )
    *(_DWORD *)(result + 4) = v7;
  return result;
}


char *__fastcall UPNPInterface::addConnectionStateListener(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r5@3
  signed int v7; // r1@3
  unsigned int v8; // r2@3
  unsigned int v9; // r1@5
  unsigned int v10; // r6@5
  char *v11; // r7@11 OVERLAPPED
  char *v12; // r8@13
  int v13; // r8@15 OVERLAPPED

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = *(void **)v2;
    v7 = v4 - *(_DWORD *)v2;
    v8 = v7 >> 2;
    if ( !(v7 >> 2) )
      v8 = 1;
    v9 = v8 + (v7 >> 2);
    v10 = v9;
    if ( 0 != v9 >> 30 )
      v10 = 0x3FFFFFFF;
    if ( v9 < v8 )
    if ( v10 )
    {
      if ( v10 >= 0x40000000 )
        sub_21E57F4();
      v11 = (char *)operator new(4 * v10);
      LODWORD(v4) = *(_QWORD *)v2 >> 32;
      v6 = (void *)*(_QWORD *)v2;
    }
    else
      v11 = 0;
    *(_DWORD *)&v11[v4 - (_DWORD)v6] = v3;
    v12 = &v11[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v11, v6);
    v13 = (int)(v12 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v11[4 * v10];
    *(_QWORD *)v2 = *(_QWORD *)&v11;
    *(_DWORD *)(v2 + 8) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*(_DWORD *)(v2 + 4) + 4);
    *(_DWORD *)(v2 + 4) = result;
  return result;
}


int __fastcall UPNPInterface::createIPv6PortMapping(UPNPInterface *this, int a2)
{
  UPNPInterface *v2; // r4@1
  int v3; // r5@1
  int result; // r0@1
  void *v5; // r0@3
  const char *v6; // r6@4
  _DWORD *v7; // r0@4
  int v8; // r12@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  _DWORD *v11; // [sp+8h] [bp-30h]@4
  void (*v12)(void); // [sp+10h] [bp-28h]@4
  int (*v13)(); // [sp+14h] [bp-24h]@4
  int v14; // [sp+1Ch] [bp-1Ch]@3
  char v15; // [sp+20h] [bp-18h]@6

  v2 = this;
  v3 = a2;
  result = *((_DWORD *)this + 148);
  if ( result != 1 )
  {
    result = *((_BYTE *)v2 + 600);
    if ( !*((_BYTE *)v2 + 600) )
    {
      sub_21E94B4((void **)&v14, "IPv6 Port Mapping");
      UPNPInterface::_changeUpnpState((unsigned __int64 *)v2, (_DWORD *)v2 + 148, 1);
      v5 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
      {
        v9 = (unsigned int *)(v14 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v5);
      }
      *((_BYTE *)v2 + 600) = 1;
      v6 = MAPPING_DESCRIPTOR[0];
      v7 = operator new(4u);
      *v7 = v2;
      v11 = v7;
      v12 = (void (*)(void))sub_1558AB4;
      v13 = sub_15589A0;
      UPNPInterface::_createPortMapping((int)v2, v3, v6, 1, (int)&v11);
      if ( v12 )
        v12();
      sub_21E034C(&v15);
      result = *(_DWORD *)&v15;
      v8 = (int)v2 + 608;
      *(_QWORD *)v8 = *(_QWORD *)&v15;
      *(_DWORD *)(v8 + 8) = 3;
      *((_DWORD *)v2 + 155) = 0;
      *((_BYTE *)v2 + 624) = 0;
      *((_BYTE *)v2 + 601) = 0;
    }
  }
  return result;
}


int __fastcall UPNPInterface::tick(UPNPInterface *this)
{
  UPNPInterface *v1; // r4@1
  unsigned __int8 *v2; // r5@1
  unsigned int v3; // r0@2
  int v4; // r0@4
  __int64 v5; // r1@5
  int (*v6)(void); // r7@5
  void (__fastcall *v7)(_DWORD); // r0@5
  int (*v8)(void); // r3@5
  int v9; // r0@7
  void (*v10)(void); // r3@7
  int v11; // r0@10
  int v12; // r0@13
  signed int v13; // r5@17
  __int64 v14; // kr00_8@18
  signed int v15; // r1@18
  signed __int64 v16; // r2@18
  __int64 v17; // kr08_8@27
  bool v18; // cf@27
  signed __int64 v19; // r2@27
  signed int v20; // r1@29
  int result; // r0@35
  __int64 v22; // kr10_8@36
  signed __int64 v23; // r2@36
  signed int v24; // r1@38
  __int64 v25; // [sp+0h] [bp-48h]@5
  int (*v26)(void); // [sp+8h] [bp-40h]@1
  void (__fastcall *v27)(_DWORD); // [sp+Ch] [bp-3Ch]@5
  __int64 v28; // [sp+10h] [bp-38h]@5
  int (*v29)(void); // [sp+18h] [bp-30h]@5
  void (__fastcall *v30)(_DWORD); // [sp+1Ch] [bp-2Ch]@5

  v1 = this;
  v2 = (unsigned __int8 *)this + 992;
  v26 = 0;
  while ( 1 )
  {
    do
    {
      do
        v3 = __ldrex(v2);
      while ( __strex(1u, v2) );
      __dmb();
    }
    while ( v3 );
    v4 = *((_DWORD *)v1 + 240);
    if ( *((_DWORD *)v1 + 244) == v4 )
      break;
    LODWORD(v5) = *(_DWORD *)v4;
    HIDWORD(v5) = *(_DWORD *)(v4 + 4);
    v6 = *(int (**)(void))(v4 + 8);
    *(_DWORD *)(v4 + 8) = 0;
    v7 = *(void (__fastcall **)(_DWORD))(v4 + 12);
    v28 = v25;
    v25 = v5;
    v8 = v26;
    v26 = v6;
    v29 = v8;
    v30 = v27;
    v27 = v7;
    if ( v8 )
      ((void (__fastcall *)(__int64 *, __int64 *, signed int))v8)(&v28, &v28, 3);
    v9 = *((_DWORD *)v1 + 240);
    v10 = *(void (**)(void))(v9 + 8);
    if ( v9 == *((_DWORD *)v1 + 242) - 16 )
      if ( v10 )
        v10();
      operator delete(*((void **)v1 + 241));
      v12 = *((_DWORD *)v1 + 243);
      *((_DWORD *)v1 + 243) = v12 + 4;
      v11 = *(_DWORD *)(v12 + 4);
      *((_DWORD *)v1 + 241) = v11;
      *((_DWORD *)v1 + 242) = v11 + 512;
    else
      {
        v9 = *((_DWORD *)v1 + 240);
      }
      v11 = v9 + 16;
    *((_DWORD *)v1 + 240) = v11;
    __dmb();
    *v2 = 0;
    if ( !v26 )
      sub_21E5F48();
    v27(&v25);
  }
  v13 = 0;
  __dmb();
  *((_BYTE *)v1 + 992) = 0;
  if ( *((_DWORD *)v1 + 225) == 1 )
    sub_21E034C(&v28);
    v14 = v28 - *((_QWORD *)v1 + 115);
    v15 = 0;
    v16 = 1000000000LL * *((_QWORD *)v1 + 116);
    if ( (unsigned int)v16 >= (unsigned int)v14 )
      v15 = 1;
    if ( SHIDWORD(v16) >= SHIDWORD(v14) )
      v13 = 1;
    if ( HIDWORD(v16) == HIDWORD(v14) )
      v13 = v15;
    if ( !v13 )
      *((_BYTE *)v1 + 904) = 0;
      *((_DWORD *)v1 + 225) = 4;
  if ( *((_DWORD *)v1 + 70) == 1 )
    v19 = 1000000000LL * *((_QWORD *)v1 + 38);
    v17 = v28 - *((_QWORD *)v1 + 37);
    v18 = (unsigned int)v19 >= (unsigned int)v17;
    LODWORD(v19) = 0;
    if ( v18 )
      LODWORD(v19) = 1;
    v20 = 0;
    if ( SHIDWORD(v19) >= SHIDWORD(v17) )
      v20 = 1;
    if ( HIDWORD(v19) == HIDWORD(v17) )
      v20 = v19;
    if ( !v20 )
      *((_BYTE *)v1 + 284) = 0;
      *((_DWORD *)v1 + 70) = 4;
  result = *((_DWORD *)v1 + 148);
  if ( result == 1 )
    v23 = 1000000000LL * *((_QWORD *)v1 + 77);
    v22 = v28 - *((_QWORD *)v1 + 76);
    v18 = (unsigned int)v23 >= (unsigned int)v22;
    LODWORD(v23) = 0;
      LODWORD(v23) = 1;
    result = 0;
    v24 = 0;
    if ( SHIDWORD(v23) >= SHIDWORD(v22) )
      v24 = 1;
    if ( HIDWORD(v23) == HIDWORD(v22) )
      v24 = v23;
    if ( !v24 )
      *((_BYTE *)v1 + 596) = 0;
      result = 4;
      *((_DWORD *)v1 + 148) = 4;
  if ( v26 )
    result = v26();
  return result;
}


const char *__fastcall UPNPInterface::_stateToString(int a1, unsigned int a2)
{
  const char *result; // r0@2

  if ( a2 > 5 )
    result = "UNKNOWN";
  else
    result = off_26EA750[a2];
  return result;
}
