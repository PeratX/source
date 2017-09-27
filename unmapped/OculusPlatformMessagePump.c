

int __fastcall OculusPlatformMessagePump::handleOVRPlatformMessage(unsigned __int64 *a1)
{
  int result; // r0@1
  int v2; // r5@1
  unsigned __int64 v3; // kr00_8@1
  int v4; // r6@2
  bool v5; // zf@4

  v3 = *a1;
  result = *a1 >> 32;
  v2 = v3;
  if ( (_DWORD)v3 != result )
  {
    v4 = result - 4;
    do
    {
      result = (*(int (**)(void))(**(_DWORD **)v2 + 8))();
      if ( result )
        break;
      v5 = v4 == v2;
      v2 += 4;
    }
    while ( !v5 );
  }
  return result;
}


int __fastcall OculusPlatformMessagePump::OculusPlatformMessagePump(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 12) = 1;
  return result;
}


int __fastcall OculusPlatformMessagePump::addOVRPlatformMessageHandler(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r8@1
  __int64 v4; // r0@1
  int result; // r0@2
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
    result = (int)&v11[4 * v10];
    *(_QWORD *)v2 = *(_QWORD *)&v11;
    *(_DWORD *)(v2 + 8) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = *(_DWORD *)(v2 + 4) + 4;
    *(_DWORD *)(v2 + 4) = result;
  return result;
}


_DWORD *__fastcall OculusPlatformMessagePump::removeOVRPlatformMessageHandler(unsigned __int64 *a1, int a2)
{
  unsigned __int64 *v2; // r6@1
  _DWORD *v3; // r2@1
  int v4; // r3@1
  int v5; // r0@1
  int v6; // r4@2
  bool v7; // zf@3
  _DWORD *result; // r0@3
  int v9; // r5@6
  bool v10; // zf@6
  int v11; // r0@11
  _DWORD *v12; // r1@24
  bool v13; // zf@24

  v2 = a1;
  v3 = (_DWORD *)(*a1 >> 32);
  v4 = *a1;
  v5 = ((signed int)v3 - v4) >> 4;
  if ( v5 < 1 )
  {
LABEL_10:
    if ( 1 == ((signed int)v3 - v4) >> 2 )
    {
      result = (_DWORD *)v4;
    }
    else
      v11 = ((signed int)v3 - v4) >> 2;
      if ( v11 == 2 )
      {
        result = (_DWORD *)v4;
      }
      else
        if ( v11 != 3 )
        {
          result = v3;
          goto LABEL_23;
        }
        if ( *(_DWORD *)v4 == a2 )
        result = (_DWORD *)(v4 + 4);
      if ( *result == a2 )
        goto LABEL_23;
      ++result;
    if ( *result != a2 )
      result = v3;
  }
  else
    v6 = v5 + 1;
    while ( 1 )
      v7 = *(_DWORD *)v4 == a2;
      if ( *(_DWORD *)v4 != a2 )
        v7 = *(_DWORD *)(v4 + 4) == a2;
      if ( v7 )
        break;
      result = (_DWORD *)(v4 + 8);
      v9 = *(_DWORD *)(v4 + 8);
      v10 = v9 == a2;
      if ( v9 != a2 )
        result = (_DWORD *)(v4 + 12);
        v10 = *(_DWORD *)(v4 + 12) == a2;
      if ( v10 )
      --v6;
      v4 += 16;
      if ( v6 <= 1 )
        goto LABEL_10;
LABEL_23:
  if ( result != v3 )
    v12 = result + 1;
    v13 = result + 1 == v3;
    if ( result + 1 != v3 )
      v13 = v3 == v12;
    if ( !v13 )
      _aeabi_memmove4(result, v12);
      v3 = (_DWORD *)*((_DWORD *)v2 + 1);
    result = v3 - 1;
    *((_DWORD *)v2 + 1) = v3 - 1;
  return result;
}
