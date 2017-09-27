

signed int __fastcall Whitelist::isIgnoringPlayerLimit(unsigned __int64 *a1, int a2, const void **a3)
{
  int v3; // r7@1
  int v4; // r11@1
  const void **v5; // r4@1
  __int64 *v6; // r9@1
  __int64 *v7; // r10@2
  __int64 v8; // r0@3
  __int64 v9; // r2@3
  bool v10; // zf@4
  int v11; // r2@4
  __int64 v12; // r2@5
  _DWORD *v13; // r0@8
  size_t v14; // r2@8
  signed int result; // r0@12

  v4 = *a1 >> 32;
  v3 = *a1;
  v5 = a3;
  v6 = (__int64 *)a2;
  if ( v3 == v4 )
  {
LABEL_12:
    result = 0;
  }
  else
    v7 = (__int64 *)(a2 + 8);
    while ( 1 )
    {
      v8 = *v7;
      v9 = *v6;
      if ( *v6 | *v7 )
      {
        v11 = v9 ^ *(_QWORD *)(v3 + 8) | HIDWORD(v9) ^ (*(_QWORD *)(v3 + 8) >> 32);
        v10 = v11 == 0;
        if ( !v11 )
        {
          v12 = *(_QWORD *)(v3 + 16);
          HIDWORD(v8) ^= HIDWORD(v12);
          v10 = v8 == (unsigned int)v12;
        }
        if ( v10 )
          goto LABEL_16;
      }
      if ( sub_21E7D6C(v5, (const char *)&unk_257BC67) )
        v13 = *(_DWORD **)(v3 + 24);
        v14 = *(v13 - 3);
        if ( v14 == *((_DWORD *)*v5 - 3) && !memcmp(v13, *v5, v14) )
LABEL_16:
          if ( *(_BYTE *)(v3 + 28) )
            break;
      v3 += 32;
      if ( v4 == v3 )
        goto LABEL_12;
    }
    result = 1;
  return result;
}


void __fastcall Whitelist::clear(Whitelist *this)
{
  Whitelist *v1; // r8@1
  __int64 v2; // kr00_8@1
  int v3; // r7@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int *v10; // r0@20

  v1 = this;
  v2 = *(_QWORD *)this;
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      v8 = *(_DWORD *)(v3 + 24);
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v8 - 4);
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
      v10 = (int *)(*(_DWORD *)v3 - 12);
      if ( v10 != &dword_28898C0 )
        v6 = (unsigned int *)(*(_DWORD *)v3 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v3 += 32;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 1) = v2;
}


int __fastcall Whitelist::isAllowed(unsigned __int64 *a1, int a2, const void **a3)
{
  const void **v3; // r8@1
  __int64 v4; // r2@1
  bool v5; // zf@1
  int v6; // r4@4
  int v7; // r10@4
  int v8; // r5@4
  int v9; // r0@4
  __int64 v10; // kr08_8@5
  int v11; // r5@5
  bool v12; // zf@6
  bool v13; // zf@9
  bool v14; // zf@12
  bool v15; // zf@15
  int v16; // r7@20
  signed int v17; // r9@33
  int v18; // r0@39
  const void *v19; // r5@40
  int v20; // r7@40
  size_t v21; // r6@40
  _DWORD *v22; // r1@41
  _DWORD *v23; // r1@43
  _DWORD *v24; // r1@45
  _DWORD *v25; // r1@47
  int v26; // r0@51
  const void *v27; // r6@53
  size_t v28; // r5@53
  _DWORD *v29; // r1@55
  _DWORD *v30; // r1@58
  const void *v31; // r1@61
  signed int v32; // r0@69

  v3 = a3;
  v4 = *(_QWORD *)a2;
  v5 = *(_QWORD *)a2 == 0LL;
  if ( !*(_QWORD *)a2 )
    v5 = *(_QWORD *)(a2 + 8) == 0LL;
  if ( v5 )
  {
    v7 = *a1 >> 32;
    v6 = *a1;
    v17 = 0;
    goto LABEL_39;
  }
  v7 = *a1 >> 32;
  v6 = *a1;
  v8 = (v7 - v6) >> 7;
  v9 = *a1;
  if ( v8 >= 1 )
    v10 = *(_QWORD *)(a2 + 8);
    v11 = v8 + 1;
    v9 = v6;
    do
    {
      v12 = *(_QWORD *)(v9 + 8) == v4;
      if ( *(_QWORD *)(v9 + 8) == v4 )
        v12 = *(_QWORD *)(v9 + 16) == v10;
      if ( v12 )
        goto LABEL_37;
      v13 = *(_QWORD *)(v9 + 40) == v4;
      if ( *(_QWORD *)(v9 + 40) == v4 )
        v13 = *(_QWORD *)(v9 + 48) == v10;
      if ( v13 )
      {
        v9 += 32;
      }
      v14 = *(_QWORD *)(v9 + 72) == v4;
      if ( *(_QWORD *)(v9 + 72) == v4 )
        v14 = *(_QWORD *)(v9 + 80) == v10;
      if ( v14 )
        v9 += 64;
      v15 = *(_QWORD *)(v9 + 104) == v4;
      if ( *(_QWORD *)(v9 + 104) == v4 )
        v15 = *(_QWORD *)(v9 + 112) == v10;
      if ( v15 )
        v9 += 96;
      --v11;
      v9 += 128;
    }
    while ( v11 > 1 );
  if ( 1 == (v7 - v9) >> 5 )
LABEL_28:
    if ( *(_QWORD *)(v9 + 8) == v4 )
      if ( *(_QWORD *)(v9 + 16) != *(_QWORD *)(a2 + 8) )
        v9 = v7;
      goto LABEL_37;
    goto LABEL_32;
  v16 = (v7 - v9) >> 5;
  if ( v16 != 2 )
    if ( v16 != 3 )
LABEL_32:
      v9 = v7;
    if ( *(_QWORD *)(v9 + 8) == v4 && *(_QWORD *)(a2 + 8) == *(_QWORD *)(v9 + 16) )
    v9 += 32;
  if ( *(_QWORD *)(v9 + 8) != v4 || *(_QWORD *)(a2 + 8) != *(_QWORD *)(v9 + 16) )
    goto LABEL_28;
LABEL_37:
  v17 = 0;
  if ( v9 != v7 )
    v17 = 1;
LABEL_39:
  v18 = (v7 - v6) >> 7;
  if ( v18 < 1 )
LABEL_50:
    if ( 1 == (v7 - v6) >> 5 )
      v27 = *v3;
      v28 = *((_DWORD *)*v3 - 3);
    else
      v26 = (v7 - v6) >> 5;
      if ( v26 == 3 )
        v27 = *v3;
        v29 = *(_DWORD **)(v6 + 24);
        v28 = *((_DWORD *)*v3 - 3);
        if ( v28 == *(v29 - 3) && !memcmp(*v3, v29, *((_DWORD *)*v3 - 3)) )
          goto LABEL_69;
        v6 += 32;
      else
        if ( v26 != 2 )
          goto LABEL_65;
      v30 = *(_DWORD **)(v6 + 24);
      if ( v28 == *(v30 - 3) && !memcmp(v27, v30, v28) )
        goto LABEL_69;
      v6 += 32;
    v31 = *(const void **)(v6 + 24);
    if ( v28 == *((_DWORD *)v31 - 3) )
      if ( memcmp(v27, v31, v28) )
        v6 = v7;
      goto LABEL_69;
LABEL_65:
    v6 = v7;
    goto LABEL_69;
  v19 = *v3;
  v20 = v18 + 1;
  v21 = *((_DWORD *)*v3 - 3);
  while ( 1 )
    v22 = *(_DWORD **)(v6 + 24);
    if ( v21 == *(v22 - 3) && !memcmp(v19, v22, v21) )
      break;
    v23 = *(_DWORD **)(v6 + 56);
    if ( v21 == *(v23 - 3) && !memcmp(v19, v23, v21) )
    v24 = *(_DWORD **)(v6 + 88);
    if ( v21 == *(v24 - 3) && !memcmp(v19, v24, v21) )
      v6 += 64;
    v25 = *(_DWORD **)(v6 + 120);
    if ( v21 == *(v25 - 3) && !memcmp(v19, v25, v21) )
      v6 += 96;
    --v20;
    v6 += 128;
    if ( v20 <= 1 )
      goto LABEL_50;
LABEL_69:
  v32 = 0;
  if ( v6 != v7 )
    v32 = 1;
  return v32 | v17;
}


Whitelist *__fastcall Whitelist::~Whitelist(Whitelist *this)
{
  Whitelist *v1; // r11@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int *v10; // r0@20

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)this;
  if ( v2 != v3 )
  {
    do
    {
      v8 = *(_DWORD *)(v2 + 24);
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v8 - 4);
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
          j_j_j_j_j__ZdlPv_9(v9);
      }
      v10 = (int *)(*(_DWORD *)v2 - 12);
      if ( v10 != &dword_28898C0 )
        v6 = (unsigned int *)(*(_DWORD *)v2 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j_j__ZdlPv_9(v10);
      v2 += 32;
    }
    while ( v2 != v3 );
    v2 = *(_DWORD *)v1;
  }
  if ( v2 )
    operator delete((void *)v2);
  return v1;
}
