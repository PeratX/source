

int __fastcall BlockPosIterator::BlockPosIterator(int result, int a2, int a3)
{
  int v3; // r3@1
  int v4; // r12@1
  int v5; // lr@1
  __int64 v6; // r4@7
  int v7; // r2@7
  __int64 v8; // r6@7
  int v9; // r1@7
  int v10; // r2@13

  v3 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  v5 = *(_DWORD *)(a2 + 8);
  if ( *(_DWORD *)a3 < *(_DWORD *)a2 )
    v3 = *(_DWORD *)a3;
  if ( *(_DWORD *)(a3 + 4) < v4 )
    v4 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 + 8) < v5 )
    v5 = *(_DWORD *)(a3 + 8);
  *(_DWORD *)result = v3;
  *(_DWORD *)(result + 4) = v4;
  *(_DWORD *)(result + 8) = v5;
  v6 = *(_QWORD *)a3;
  v7 = *(_DWORD *)(a3 + 8);
  v8 = *(_QWORD *)a2;
  v9 = *(_DWORD *)(a2 + 8);
  if ( (signed int)v8 < (signed int)v6 )
    LODWORD(v8) = v6;
  if ( SHIDWORD(v8) < SHIDWORD(v6) )
    HIDWORD(v8) = HIDWORD(v6);
  if ( v9 < v7 )
    v9 = v7;
  v10 = result + 20;
  *(_QWORD *)(result + 12) = v8;
  *(_DWORD *)v10 = v9;
  *(_DWORD *)(v10 + 4) = v3;
  *(_DWORD *)(v10 + 8) = v4;
  *(_DWORD *)(v10 + 12) = v5;
  *(_BYTE *)(result + 36) = 0;
  return result;
}


int __fastcall BlockPosIterator::begin(int result, int a2)
{
  int v2; // r2@1
  signed int v3; // r3@1
  int v4; // r12@1
  int v5; // lr@1
  __int64 v6; // kr00_8@1
  int v7; // r5@1
  int v8; // r6@3
  int v9; // r7@3
  int v10; // r1@13
  int v11; // r1@13

  v2 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_DWORD *)a2;
  if ( v5 < *(_DWORD *)a2 )
    v7 = *(_DWORD *)(a2 + 12);
  v8 = *(_DWORD *)(a2 + 4);
  v9 = *(_DWORD *)(a2 + 8);
  if ( (signed int)v6 < v3 )
    v8 = v6;
  if ( SHIDWORD(v6) < v4 )
    v9 = HIDWORD(v6);
  if ( v2 < v5 )
    v2 = *(_DWORD *)(a2 + 12);
  if ( v3 < (signed int)v6 )
    v3 = v6;
  if ( v4 < SHIDWORD(v6) )
    v4 = HIDWORD(v6);
  v10 = result + 12;
  *(_DWORD *)result = v7;
  *(_DWORD *)(result + 4) = v8;
  *(_DWORD *)(result + 8) = v9;
  *(_DWORD *)v10 = v2;
  *(_DWORD *)(v10 + 4) = v3;
  *(_DWORD *)(v10 + 8) = v4;
  v11 = result + 24;
  *(_DWORD *)v11 = v7;
  *(_DWORD *)(v11 + 4) = v8;
  *(_DWORD *)(v11 + 8) = v9;
  *(_BYTE *)(result + 36) = 0;
  return result;
}


int __fastcall BlockPosIterator::end(int result, int a2)
{
  int v2; // r2@1
  signed int v3; // r3@1
  int v4; // r12@1
  int v5; // lr@1
  __int64 v6; // kr00_8@1
  int v7; // r5@1
  int v8; // r6@3
  int v9; // r7@3
  int v10; // r5@13

  v2 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_DWORD *)a2;
  if ( v5 < *(_DWORD *)a2 )
    v7 = *(_DWORD *)(a2 + 12);
  v8 = *(_DWORD *)(a2 + 4);
  v9 = *(_DWORD *)(a2 + 8);
  if ( (signed int)v6 < v3 )
    v8 = *(_QWORD *)(a2 + 16);
  if ( SHIDWORD(v6) < v4 )
    v9 = *(_QWORD *)(a2 + 16) >> 32;
  if ( v2 < v5 )
    v2 = *(_DWORD *)(a2 + 12);
  if ( v3 < (signed int)v6 )
    v3 = *(_QWORD *)(a2 + 16);
  if ( v4 < SHIDWORD(v6) )
    v4 = *(_QWORD *)(a2 + 16) >> 32;
  *(_DWORD *)result = v7;
  *(_DWORD *)(result + 4) = v8;
  *(_DWORD *)(result + 8) = v9;
  v10 = result + 12;
  *(_DWORD *)v10 = v2;
  *(_DWORD *)(v10 + 4) = v3;
  *(_DWORD *)(v10 + 8) = v4;
  *(_DWORD *)(v10 + 12) = v5;
  *(_QWORD *)(result + 28) = v6;
  *(_BYTE *)(result + 36) = 1;
  return result;
}
