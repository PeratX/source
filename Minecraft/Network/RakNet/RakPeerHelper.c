

signed int __fastcall RakPeerHelper::getIPv6BoundPort(RakPeerHelper *this)
{
  int v1; // r1@1
  signed int result; // r0@2

  v1 = *((_DWORD *)this + 2);
  if ( v1 >= 0 )
    result = *((_WORD *)this + v1 + 6);
  else
    result = 0xFFFF;
  return result;
}


unsigned int __fastcall RakPeerHelper::peerStartup(RakPeerHelper *this, RakNet::RakPeerInterface *a2, int a3, unsigned __int16 a4, unsigned __int16 a5)
{
  RakPeerHelper *v5; // r10@1
  RakNet::RakPeerInterface *v6; // r11@1
  unsigned __int16 v7; // r6@1
  int v8; // r8@1
  __int16 *v9; // r9@2
  unsigned __int16 v10; // r7@2
  __int64 v11; // r0@2
  int v12; // r0@4
  __int16 *v13; // r2@7
  signed int v14; // r7@7
  int v15; // r1@7
  int (__fastcall *v16)(RakNet::RakPeerInterface *, int, __int16 *, signed int); // r6@7
  RakNet::RakPeerInterface *v17; // r0@7
  unsigned int result; // r0@8
  __int64 v19; // r0@10
  __int64 v20; // r2@10
  __int64 v21; // r6@10
  __int64 v22; // r2@10
  __int64 v23; // r6@10
  int v24; // r5@10
  __int64 v25; // r6@10
  __int16 *v26; // r1@15
  signed int v27; // r2@15
  signed int v28; // r6@19
  __int64 v29; // r0@27
  __int64 v30; // r2@27
  int v31; // r5@27
  int v32; // r7@27
  __int64 v33; // r2@27
  int v34; // r5@27
  int v35; // r7@27
  int v36; // r5@27
  __int64 v37; // r6@27
  __int16 v38[17]; // [sp+4h] [bp-114h]@2
  __int16 v39; // [sp+26h] [bp-F2h]@6
  unsigned __int16 v40; // [sp+38h] [bp-E0h]@2
  __int16 v41; // [sp+5Ah] [bp-BEh]@6
  char v42; // [sp+6Ch] [bp-ACh]@20
  __int16 v43; // [sp+ECh] [bp-2Ch]@20
  RakNet *v44; // [sp+F0h] [bp-28h]@1

  v5 = this;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  v44 = _stack_chk_guard;
  if ( !a2 )
  {
    result = 11;
    goto LABEL_22;
  }
  v9 = v38;
  v10 = a5;
  RakNet::SocketDescriptor::SocketDescriptor((RakNet::SocketDescriptor *)v38, a4, 0);
  RakNet::SocketDescriptor::SocketDescriptor((RakNet::SocketDescriptor *)&v40, a5, 0);
  LODWORD(v11) = *((_DWORD *)v5 + 1);
  HIDWORD(v11) = 1;
  if ( (signed int)v11 >= 0 )
    v7 = *((_WORD *)v5 + v11 + 6);
  v38[0] = v7;
  v12 = *((_DWORD *)v5 + 2);
  if ( v12 >= 0 )
    v10 = *((_WORD *)v5 + v12 + 6);
  LODWORD(v11) = 0;
  v40 = v10;
  *(_QWORD *)((char *)v5 + 4) = v11;
  v39 = 2;
  v41 = 10;
  if ( (*(int (**)(void))(**((_DWORD **)v5 + 4) + 8))() == 1 )
    v13 = v38;
    *((_DWORD *)v5 + 2) = -1;
    v14 = 1;
    v15 = v8;
    v16 = *(int (__fastcall **)(RakNet::RakPeerInterface *, int, __int16 *, signed int))(*(_DWORD *)v6 + 8);
    v17 = v6;
LABEL_12:
    result = v16(v17, v15, v13, 1);
LABEL_13:
    *(_DWORD *)v5 = result;
    goto LABEL_14;
  if ( (*(int (**)(void))(**((_DWORD **)v5 + 4) + 12))() == 1 )
    v19 = *(_QWORD *)((char *)v5 + 4);
    HIDWORD(v19) = &v38[26 * HIDWORD(v19)];
    LODWORD(v19) = &v38[26 * v19];
    v20 = *(_QWORD *)HIDWORD(v19);
    v21 = *(_QWORD *)(HIDWORD(v19) + 8);
    HIDWORD(v19) += 16;
    *(_QWORD *)v19 = v20;
    *(_QWORD *)(v19 + 8) = v21;
    LODWORD(v19) = v19 + 16;
    v22 = *(_QWORD *)HIDWORD(v19);
    v23 = *(_QWORD *)(HIDWORD(v19) + 8);
    *(_QWORD *)v19 = v22;
    *(_QWORD *)(v19 + 8) = v23;
    HIDWORD(v22) = *(_DWORD *)(HIDWORD(v19) + 4);
    v24 = *(_DWORD *)(HIDWORD(v19) + 8);
    v25 = *(_QWORD *)(HIDWORD(v19) + 12);
    *(_DWORD *)v19 = *(_DWORD *)HIDWORD(v19);
    *(_DWORD *)(v19 + 4) = HIDWORD(v22);
    *(_DWORD *)(v19 + 8) = v24;
    *(_QWORD *)(v19 + 12) = v25;
    *(_QWORD *)((char *)v5 + 4) = 0xFFFFFFFFLL;
LABEL_11:
    v13 = v9;
    goto LABEL_12;
  v14 = 2;
  result = (*(int (__fastcall **)(RakNet::RakPeerInterface *, int, __int16 *, signed int))(*(_DWORD *)v6 + 8))(
             v6,
             v8,
             v38,
             2);
  *(_DWORD *)v5 = result;
  if ( result == 5 )
    v14 = 2;
    v38[26 * *((_DWORD *)v5 + 2)] = 0;
    result = (*(int (__fastcall **)(RakNet::RakPeerInterface *, int, __int16 *, signed int))(*(_DWORD *)v6 + 8))(
               v6,
               v8,
               v38,
               2);
    goto LABEL_13;
  if ( result == 4 )
    v9 = v38;
               1);
    if ( result != 4 )
    {
      v14 = 1;
      *((_DWORD *)v5 + 2) = -1;
LABEL_14:
      if ( result == 5 )
      {
        v26 = v38;
        v27 = 0;
        do
        {
          ++v27;
          *v26 = 0;
          v26 += 26;
        }
        while ( v27 < v14 );
        result = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, signed int))(*(_DWORD *)v6 + 8))(v6, v8, v38, v14);
        *(_DWORD *)v5 = result;
      }
      goto LABEL_18;
    }
    v29 = *(_QWORD *)((char *)v5 + 4);
    HIDWORD(v29) = &v38[26 * HIDWORD(v29)];
    LODWORD(v29) = &v38[26 * v29];
    v30 = *(_QWORD *)HIDWORD(v29);
    v31 = *(_DWORD *)(HIDWORD(v29) + 8);
    v32 = *(_DWORD *)(HIDWORD(v29) + 12);
    HIDWORD(v29) += 16;
    *(_QWORD *)v29 = v30;
    *(_DWORD *)(v29 + 8) = v31;
    *(_DWORD *)(v29 + 12) = v32;
    LODWORD(v29) = v29 + 16;
    v33 = *(_QWORD *)HIDWORD(v29);
    v34 = *(_DWORD *)(HIDWORD(v29) + 8);
    v35 = *(_DWORD *)(HIDWORD(v29) + 12);
    *(_QWORD *)v29 = v33;
    *(_DWORD *)(v29 + 8) = v34;
    *(_DWORD *)(v29 + 12) = v35;
    HIDWORD(v33) = *(_DWORD *)(HIDWORD(v29) + 4);
    v36 = *(_DWORD *)(HIDWORD(v29) + 8);
    v37 = *(_QWORD *)(HIDWORD(v29) + 12);
    *(_DWORD *)v29 = *(_DWORD *)HIDWORD(v29);
    *(_DWORD *)(v29 + 4) = HIDWORD(v33);
    *(_DWORD *)(v29 + 8) = v36;
    *(_QWORD *)(v29 + 12) = v37;
    goto LABEL_11;
LABEL_18:
  if ( result <= 1 )
    v28 = 0;
    do
      (*(void (__fastcall **)(char *, RakNet::RakPeerInterface *, signed int))(*(_DWORD *)v6 + 216))(&v42, v6, v28);
      *((_WORD *)v5 + v28++ + 6) = v43;
    while ( v28 < v14 );
    result = *(_DWORD *)v5;
LABEL_22:
  if ( _stack_chk_guard != v44 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall RakPeerHelper::getIPv4BoundPort(RakPeerHelper *this)
{
  int v1; // r1@1
  signed int result; // r0@2

  v1 = *((_DWORD *)this + 1);
  if ( v1 >= 0 )
    result = *((_WORD *)this + v1 + 6);
  else
    result = 0xFFFF;
  return result;
}


signed int __fastcall RakPeerHelper::isIPv4Supported(RakPeerHelper *this)
{
  signed int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 1);
  result = 0;
  if ( v1 > -1 )
    result = 1;
  return result;
}


signed int __fastcall RakPeerHelper::isIPv6Supported(RakPeerHelper *this)
{
  signed int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 2);
  result = 0;
  if ( v1 > -1 )
    result = 1;
  return result;
}


signed int __fastcall RakPeerHelper::_resetToIPv6Only(RakPeerHelper *this, RakNet::SocketDescriptor *a2, int *a3)
{
  __int64 v3; // kr00_8@1
  char *v4; // r8@1
  char *v5; // r1@1
  int v6; // r3@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r6@1
  int v10; // r3@1
  int v11; // r4@1
  int v12; // r5@1
  int v13; // r6@1
  int v14; // r4@1
  int v15; // r5@1
  int v16; // r6@1
  int v17; // r7@1
  signed int result; // r0@1

  v3 = *(_QWORD *)((char *)this + 4);
  v4 = (char *)a2 + 52 * HIDWORD(v3);
  v5 = (char *)a2 + 52 * v3;
  v6 = *(_DWORD *)v4;
  v7 = *((_DWORD *)v4 + 1);
  v8 = *((_DWORD *)v4 + 2);
  v9 = *((_DWORD *)v4 + 3);
  v4 += 16;
  *(_DWORD *)v5 = v6;
  *((_DWORD *)v5 + 1) = v7;
  *((_DWORD *)v5 + 2) = v8;
  *((_DWORD *)v5 + 3) = v9;
  v5 += 16;
  v10 = *(_DWORD *)v4;
  v11 = *((_DWORD *)v4 + 1);
  v12 = *((_DWORD *)v4 + 2);
  v13 = *((_DWORD *)v4 + 3);
  *(_DWORD *)v5 = v10;
  *((_DWORD *)v5 + 1) = v11;
  *((_DWORD *)v5 + 2) = v12;
  *((_DWORD *)v5 + 3) = v13;
  v14 = *((_DWORD *)v4 + 1);
  v15 = *((_DWORD *)v4 + 2);
  v16 = *((_DWORD *)v4 + 3);
  v17 = *((_DWORD *)v4 + 4);
  *(_DWORD *)v5 = *(_DWORD *)v4;
  *((_DWORD *)v5 + 1) = v14;
  *((_DWORD *)v5 + 2) = v15;
  *((_DWORD *)v5 + 3) = v16;
  *((_DWORD *)v5 + 4) = v17;
  *((_DWORD *)this + 1) = -1;
  *((_DWORD *)this + 2) = 0;
  result = 1;
  *a3 = 1;
  return result;
}


int __fastcall RakPeerHelper::RakPeerHelper(int result, int a2)
{
  *(_QWORD *)result = -4294967285LL;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = a2;
  return result;
}


int __fastcall RakPeerHelper::getResult(RakPeerHelper *this)
{
  return *(_DWORD *)this;
}


signed int __fastcall RakPeerHelper::getConnectionIndex(RakPeerHelper *this, const Social::GameConnectionInfo *a2)
{
  signed int v2; // r1@2

  if ( *(_WORD *)a2 == 2 )
  {
    v2 = *((_DWORD *)this + 2);
    if ( v2 <= -1 )
      v2 = *((_DWORD *)this + 1);
  }
  else
    v2 = *((_DWORD *)this + 1);
  return v2;
}
