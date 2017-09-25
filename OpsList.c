

OpsList *__fastcall OpsList::~OpsList(OpsList *this)
{
  OpsList *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11

  v1 = this;
  v3 = (void *)(*(_QWORD *)((char *)this + 4) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete(v2);
  return v1;
}


void __fastcall OpsList::clear(OpsList *this)
{
  OpsList *v1; // r11@1
  __int64 v2; // kr00_8@1
  _DWORD *v3; // r6@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 4);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = (_DWORD *)v2;
    do
    {
      v6 = (int *)(*v3 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*v3 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      ++v3;
    }
    while ( v3 != (_DWORD *)HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 2) = v2;
}


signed int __fastcall OpsList::isOp(int a1, const void **a2)
{
  const void *v2; // r9@1
  size_t v3; // r4@1
  int v4; // r6@2
  const void **v5; // r8@2
  int v6; // r0@2
  int v7; // r5@3
  const void **v8; // r7@5
  _DWORD *v9; // r1@6
  _DWORD *v10; // r1@8
  _DWORD *v11; // r1@10
  int v12; // r0@14
  signed int result; // r0@19

  v2 = *a2;
  v3 = *((_DWORD *)*a2 - 3);
  if ( !v3 )
    return 0;
  v5 = (const void **)(*(_QWORD *)(a1 + 4) >> 32);
  v4 = *(_QWORD *)(a1 + 4);
  v6 = ((signed int)v5 - v4) >> 4;
  if ( v6 >= 1 )
  {
    v7 = v6 + 1;
    do
    {
      if ( v3 == *(_DWORD *)(*(_DWORD *)v4 - 12) )
      {
        v8 = (const void **)v4;
        if ( !memcmp(v2, *(const void **)v4, v3) )
          goto LABEL_30;
      }
      v8 = (const void **)(v4 + 4);
      v9 = *(_DWORD **)(v4 + 4);
      if ( v3 == *(v9 - 3) && !memcmp(v2, v9, v3) )
        goto LABEL_30;
      v8 = (const void **)(v4 + 8);
      v10 = *(_DWORD **)(v4 + 8);
      if ( v3 == *(v10 - 3) && !memcmp(v2, v10, v3) )
      v8 = (const void **)(v4 + 12);
      v11 = *(_DWORD **)(v4 + 12);
      if ( v3 == *(v11 - 3) && !memcmp(v2, v11, v3) )
      --v7;
      v4 += 16;
    }
    while ( v7 > 1 );
  }
  if ( 1 == ((signed int)v5 - v4) >> 2 )
    v8 = (const void **)v4;
LABEL_25:
    if ( v3 == *((_DWORD *)*v8 - 3) )
      if ( memcmp(v2, *v8, v3) )
        v8 = v5;
      goto LABEL_30;
    goto LABEL_29;
  v12 = ((signed int)v5 - v4) >> 2;
  if ( v12 == 2 )
LABEL_22:
    if ( v3 == *((_DWORD *)*v8 - 3) && !memcmp(v2, *v8, v3) )
    ++v8;
    goto LABEL_25;
  if ( v12 == 3 )
    if ( v3 == *(_DWORD *)(*(_DWORD *)v4 - 12) )
      v8 = (const void **)v4;
      if ( !memcmp(v2, *(const void **)v4, v3) )
    v8 = (const void **)(v4 + 4);
    goto LABEL_22;
LABEL_29:
  v8 = v5;
LABEL_30:
  result = 0;
  if ( v8 != v5 )
    result = 1;
  return result;
}


int __fastcall OpsList::OpsList(int result, char a2)
{
  *(_BYTE *)result = a2;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}
