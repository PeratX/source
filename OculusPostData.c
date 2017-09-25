

int *__fastcall OculusPostData::OculusPostData(int *a1, int *a2, int *a3, int *a4, int *a5, int *a6, int *a7)
{
  int *v7; // r5@1
  int *v8; // r6@1
  int *v9; // r4@1

  v7 = a4;
  v8 = a3;
  v9 = a1;
  sub_21E8AF4(a1, a2);
  sub_21E8AF4(v9 + 1, v8);
  sub_21E8AF4(v9 + 2, v7);
  sub_21E8AF4(v9 + 3, a5);
  sub_21E8AF4(v9 + 4, a6);
  sub_21E8AF4(v9 + 5, a7);
  return v9;
}


int *__fastcall OculusPostData::OculusPostData(int *a1, int *a2)
{
  int *v2; // r6@1
  int *v3; // r4@1

  v2 = a2;
  v3 = a1;
  sub_21E8AF4(a1, a2);
  sub_21E8AF4(v3 + 1, v2 + 1);
  sub_21E8AF4(v3 + 2, v2 + 2);
  sub_21E8AF4(v3 + 3, v2 + 3);
  sub_21E8AF4(v3 + 4, v2 + 4);
  sub_21E8AF4(v3 + 5, v2 + 5);
  return v3;
}


OculusPostData *__fastcall OculusPostData::~OculusPostData(OculusPostData *this)
{
  OculusPostData *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r1@5
  void *v11; // r0@5
  int *v12; // r0@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  unsigned int *v16; // r2@12
  signed int v17; // r1@14
  unsigned int *v18; // r2@16
  signed int v19; // r1@18
  unsigned int *v20; // r2@20
  signed int v21; // r1@22
  unsigned int *v22; // r2@24
  signed int v23; // r1@26
  unsigned int *v24; // r2@28
  signed int v25; // r1@30

  v1 = this;
  v2 = *((_DWORD *)this + 5);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 4);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v4 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 3);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v6 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 2);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v8 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 1);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v10 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (int *)(*(_DWORD *)v1 - 12);
  if ( v12 != &dword_28898C0 )
    v24 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return v1;
}
