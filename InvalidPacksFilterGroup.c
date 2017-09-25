

unsigned __int64 *__fastcall InvalidPacksFilterGroup::addFilter(unsigned __int64 *a1, int a2)
{
  unsigned __int64 *v2; // r4@1
  int v3; // r6@1
  _BYTE *v4; // r0@1
  _BYTE *v5; // r5@1
  unsigned __int64 v6; // kr00_8@1
  _BYTE *v7; // r12@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r7@2
  bool v11; // zf@3
  _BYTE *v12; // r3@3
  int v13; // r1@6
  bool v14; // zf@6
  int v15; // r3@10
  unsigned int v17; // r1@24
  unsigned int v18; // r8@26
  _BYTE *v19; // r7@29
  int v20; // r6@31
  int v21; // r6@33

  v2 = a1;
  v3 = a2;
  v6 = *a1;
  v4 = (_BYTE *)(*a1 >> 32);
  v5 = (_BYTE *)v6;
  v7 = &v4[-v6];
  v8 = v6;
  v9 = (signed int)&v4[-v6] >> 2;
  if ( v9 >= 1 )
  {
    v10 = v9 + 1;
    v8 = v6;
    do
    {
      v11 = *(_BYTE *)v8 == v3;
      v12 = (_BYTE *)v8;
      if ( *(_BYTE *)v8 != v3 )
      {
        v12 = (_BYTE *)(v8 + 1);
        v11 = *(_BYTE *)(v8 + 1) == v3;
      }
      if ( v11 )
        break;
      v12 = (_BYTE *)(v8 + 2);
      v13 = *(_BYTE *)(v8 + 2);
      v14 = v13 == v3;
      if ( v13 != v3 )
        v12 = (_BYTE *)(v8 + 3);
        v14 = *(_BYTE *)(v8 + 3) == v3;
      if ( v14 )
      --v10;
      v8 += 4;
    }
    while ( v10 > 1 );
LABEL_20:
    if ( v12 != v4 )
      return v2;
    goto LABEL_21;
  }
  v15 = (int)&v4[-v8];
  if ( &v4[-v8] == (_BYTE *)1 )
    v12 = (_BYTE *)v8;
  else
    if ( v15 == 2 )
    else
      if ( v15 != 3 )
        goto LABEL_21;
      if ( *(_BYTE *)v8 == v3 )
        goto LABEL_20;
      v12 = (_BYTE *)(v8 + 1);
    if ( *v12 == v3 )
      goto LABEL_20;
    ++v12;
  if ( *v12 == v3 )
    goto LABEL_20;
LABEL_21:
  if ( v4 != *((_BYTE **)v2 + 2) )
    *v4 = v3;
    *((_DWORD *)v2 + 1) = v4 + 1;
    return v2;
  if ( v7 == (_BYTE *)-1 )
    sub_21E5A04("vector::_M_emplace_back_aux");
  v17 = (unsigned int)&v4[-v6];
  if ( v4 == (_BYTE *)v6 )
    v17 = 1;
  v18 = (unsigned int)&v7[v17];
  if ( (unsigned int)&v7[v17] < v17 )
    v18 = -1;
  if ( v18 )
    v19 = operator new(v18);
    v4 = (_BYTE *)(*v2 >> 32);
    v5 = (_BYTE *)*v2;
    v19 = 0;
  v19[v4 - v5] = v3;
  v20 = (int)&v19[v4 - v5];
  if ( v4 != v5 )
    _aeabi_memmove(v19, v5);
  v21 = v20 + 1;
  if ( v5 )
    operator delete(v5);
  *(_DWORD *)v2 = v19;
  *((_DWORD *)v2 + 1) = v21;
  *((_DWORD *)v2 + 2) = &v19[v18];
  return v2;
}


int __fastcall InvalidPacksFilterGroup::InvalidPacksFilterGroup(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}
