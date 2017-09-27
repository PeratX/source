

signed int __fastcall TickNextTickData::operator<(int a1, int a2)
{
  __int64 v2; // kr00_8@1
  __int64 v3; // kr08_8@1
  int v4; // r2@2
  signed int result; // r0@2
  signed int v6; // r1@5

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16) )
  {
    v4 = *(_DWORD *)(a1 + 24);
    result = 0;
    if ( v4 < *(_DWORD *)(a2 + 24) )
      result = 1;
  }
  else
    v6 = 0;
    if ( (unsigned int)v3 < (unsigned int)v2 )
      v6 = 1;
    if ( HIDWORD(v3) < HIDWORD(v2) )
    if ( HIDWORD(v3) == HIDWORD(v2) )
      result = v6;
  return result;
}


int __fastcall TickNextTickData::TickNextTickData(int result, int a2, _BYTE *a3, _QWORD *a4, int a5)
{
  int v5; // r12@1

  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  v5 = result + 16;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_BYTE *)(result + 12) = *a3;
  *(_QWORD *)v5 = *a4;
  *(_DWORD *)(v5 + 8) = a5;
  return result;
}


signed int __fastcall TickNextTickData::operator>(int a1, int a2)
{
  __int64 v2; // kr00_8@1
  __int64 v3; // kr08_8@1
  int v4; // r2@2
  signed int result; // r0@2
  signed int v6; // r1@5

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16) )
  {
    v4 = *(_DWORD *)(a1 + 24);
    result = 0;
    if ( v4 > *(_DWORD *)(a2 + 24) )
      result = 1;
  }
  else
    v6 = 0;
    if ( (unsigned int)v3 > (unsigned int)v2 )
      v6 = 1;
    if ( HIDWORD(v3) > HIDWORD(v2) )
    if ( HIDWORD(v3) == HIDWORD(v2) )
      result = v6;
  return result;
}
