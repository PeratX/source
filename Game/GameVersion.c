

int __fastcall GameVersion::serialize(GameVersion *this, int *a2)
{
  int *v2; // r5@1
  GameVersion *v3; // r4@1
  int v4; // r1@1
  void **v5; // r0@1
  void **v6; // r0@1
  void **v7; // r0@1
  void *v8; // r1@1
  int result; // r0@1
  int v10; // [sp+4h] [bp-14h]@1

  v2 = a2;
  v3 = this;
  v4 = *a2;
  v10 = 0;
  j_ListTagIntAdder::operator()((void **)&v10, v4);
  v5 = j_ListTagIntAdder::operator()((void **)&v10, v2[1]);
  v6 = j_ListTagIntAdder::operator()(v5, v2[2]);
  v7 = j_ListTagIntAdder::operator()(v6, v2[3]);
  v8 = *v7;
  *v7 = 0;
  result = v10;
  *(_DWORD *)v3 = v8;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


int __fastcall GameVersion::GameVersion(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


int __fastcall GameVersion::GameVersion(int result, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a4;
  *(_DWORD *)(result + 12) = a5;
  return result;
}


int __fastcall GameVersion::current(int result)
{
  *(_DWORD *)result = 1;
  *(_DWORD *)(result + 4) = 2;
  *(_QWORD *)(result + 8) = 347892350976LL;
  return result;
}


int __fastcall GameVersion::GameVersion(int a1, ListTag *a2)
{
  ListTag *v2; // r5@1
  int v3; // r4@1
  int v4; // r8@1
  int v5; // r7@1
  int v6; // r6@1
  int v7; // r0@1

  v2 = a2;
  v3 = a1;
  v4 = j_ListTag::getInt(a2, 0);
  v5 = j_ListTag::getInt(v2, 1);
  v6 = j_ListTag::getInt(v2, 2);
  v7 = j_ListTag::getInt(v2, 3);
  *(_DWORD *)v3 = v4;
  *(_DWORD *)(v3 + 4) = v5;
  *(_DWORD *)(v3 + 8) = v6;
  *(_DWORD *)(v3 + 12) = v7;
  return v3;
}


int __fastcall GameVersion::operator<(int a1, int a2)
{
  unsigned int v2; // r2@3
  unsigned int v3; // r3@3
  unsigned int v5; // r12@6
  unsigned int v6; // r3@6
  signed int v7; // r2@7
  unsigned int v8; // r1@10
  unsigned int v9; // r0@10
  bool v10; // cf@10
  bool v11; // zf@10
  signed int v12; // r0@10

  if ( *(_DWORD *)a1 < *(_DWORD *)a2 )
    goto LABEL_17;
  if ( *(_DWORD *)a1 > *(_DWORD *)a2 )
    return 0;
  v2 = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 < v2 )
  if ( v3 > v2 )
  v5 = *(_DWORD *)(a2 + 8);
  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 < v5 )
  {
LABEL_17:
    LOBYTE(v7) = 1;
    return v7 & 1;
  }
  v7 = 0;
  if ( v6 > v5 )
  v8 = *(_DWORD *)(a2 + 12);
  v9 = *(_DWORD *)(a1 + 12);
  v10 = v9 >= v8;
  v11 = v9 == v8;
  v12 = 0;
  if ( !v11 )
    v12 = 1;
  if ( !v10 )
    v7 = 1;
  return v12 & v7;
}
