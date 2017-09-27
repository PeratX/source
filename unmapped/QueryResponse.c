

QueryResponse::QueryListDocument *__fastcall QueryResponse::QueryListDocument::~QueryListDocument(QueryResponse::QueryListDocument *this)
{
  QueryResponse::QueryListDocument *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  void *v10; // r5@5
  void *v11; // r7@5
  unsigned int *v12; // r2@7
  signed int v13; // r1@9
  int *v14; // r0@15
  int v15; // r1@20
  void *v16; // r0@20
  int v17; // r1@21
  void *v18; // r0@21
  void *v19; // r5@22
  void *v20; // r7@22
  unsigned int *v21; // r2@24
  signed int v22; // r1@26
  int *v23; // r0@32
  int v24; // r1@37
  void *v25; // r0@37
  int *v26; // r0@38
  unsigned int *v28; // r2@40
  signed int v29; // r1@42
  unsigned int *v30; // r2@44
  signed int v31; // r1@46
  unsigned int *v32; // r2@48
  signed int v33; // r1@50
  unsigned int *v34; // r2@52
  signed int v35; // r1@54
  unsigned int *v36; // r2@56
  signed int v37; // r1@58
  unsigned int *v38; // r2@60
  signed int v39; // r1@62
  unsigned int *v40; // r2@64
  signed int v41; // r1@66
  unsigned int *v42; // r2@68
  signed int v43; // r1@70

  v1 = this;
  v2 = *((_DWORD *)this + 13);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 12);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v4 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 11);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v6 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = *((_DWORD *)v1 + 10);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v8 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v11 = (void *)(*(_QWORD *)((char *)v1 + 28) >> 32);
  v10 = (void *)*(_QWORD *)((char *)v1 + 28);
  if ( v10 != v11 )
    do
      v14 = (int *)(*(_DWORD *)v10 - 12);
      if ( v14 != &dword_28898C0 )
      {
        v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v14);
      }
      v10 = (char *)v10 + 4;
    while ( v10 != v11 );
    v10 = (void *)*((_DWORD *)v1 + 7);
  if ( v10 )
    operator delete(v10);
  v15 = *((_DWORD *)v1 + 6);
  v16 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v15 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = *((_DWORD *)v1 + 5);
  v18 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v17 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v20 = (void *)(*((_QWORD *)v1 + 1) >> 32);
  v19 = (void *)*((_QWORD *)v1 + 1);
  if ( v19 != v20 )
      v23 = (int *)(*(_DWORD *)v19 - 12);
      if ( v23 != &dword_28898C0 )
        v21 = (unsigned int *)(*(_DWORD *)v19 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v23);
      v19 = (char *)v19 + 4;
    while ( v19 != v20 );
    v19 = (void *)*((_DWORD *)v1 + 2);
  if ( v19 )
    operator delete(v19);
  v24 = *((_DWORD *)v1 + 1);
  v25 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v24 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  v26 = (int *)(*(_DWORD *)v1 - 12);
  if ( v26 != &dword_28898C0 )
    v42 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  return v1;
}


QueryResponse *__fastcall QueryResponse::~QueryResponse(QueryResponse *this)
{
  QueryResponse *v1; // r10@1
  _DWORD *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  _DWORD *v5; // r6@11
  QueryResponse::QueryListDocument *v6; // r0@11
  int v7; // r1@11
  void *v8; // r0@11
  char *v9; // r0@13
  void *v10; // r5@16
  void *v11; // r7@16
  unsigned int *v12; // r2@18
  signed int v13; // r1@20
  int *v14; // r0@26

  v1 = this;
  v2 = (_DWORD *)*((_DWORD *)this + 6);
  while ( v2 )
  {
    v5 = v2;
    v6 = (QueryResponse::QueryListDocument *)(v2 + 2);
    v2 = (_DWORD *)*v2;
    QueryResponse::QueryListDocument::~QueryListDocument(v6);
    v7 = v5[1];
    v8 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v7 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex(v3);
        while ( __strex(v4 - 1, v3) );
      }
      else
        v4 = (*v3)--;
      if ( v4 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    }
    operator delete(v5);
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 2), 4 * (*((_QWORD *)v1 + 2) >> 32));
  *((_DWORD *)v1 + 6) = 0;
  *((_DWORD *)v1 + 7) = 0;
  v9 = (char *)*((_DWORD *)v1 + 4);
  if ( v9 && (char *)v1 + 40 != v9 )
    operator delete(v9);
  v11 = (void *)(*(_QWORD *)((char *)v1 + 4) >> 32);
  v10 = (void *)*(_QWORD *)((char *)v1 + 4);
  if ( v10 != v11 )
    do
      v14 = (int *)(*(_DWORD *)v10 - 12);
      if ( v14 != &dword_28898C0 )
        v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v14);
      v10 = (char *)v10 + 4;
    while ( v10 != v11 );
    v10 = (void *)*((_DWORD *)v1 + 1);
  if ( v10 )
    operator delete(v10);
  return v1;
}


int __fastcall QueryResponse::QueryResponse(double a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3

  v1 = LODWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 24) = 0;
  *(_DWORD *)(LODWORD(a1) + 28) = 0;
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)LODWORD(a1) = 0;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  *(_DWORD *)(LODWORD(a1) + 32) = 1065353216;
  LODWORD(a1) += 32;
  v2 = sub_119C844(a1);
  *(_DWORD *)(v1 + 20) = v2;
  if ( v2 == 1 )
  {
    *(_DWORD *)(v1 + 40) = 0;
    v4 = (void *)(v1 + 40);
  }
  else
    if ( v2 >= 0x40000000 )
      sub_119C874();
    v3 = 4 * v2;
    v4 = operator new(4 * v2);
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)(v1 + 16) = v4;
  return v1;
}
