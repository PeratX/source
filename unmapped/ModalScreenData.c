

int *__fastcall ModalScreenData::ModalScreenData(int *a1, int *a2)
{
  int *v2; // r6@1
  int *v3; // r4@1
  int v4; // r0@1

  v2 = a2;
  v3 = a1;
  sub_21E8AF4(a1, a2);
  std::vector<std::string,std::allocator<std::string>>::vector((int)(v3 + 1), (unsigned __int64 *)(v2 + 1));
  sub_21E8AF4(v3 + 4, v2 + 4);
  std::vector<std::string,std::allocator<std::string>>::vector((int)(v3 + 5), (unsigned __int64 *)(v2 + 5));
  sub_21E8AF4(v3 + 8, v2 + 8);
  sub_21E8AF4(v3 + 9, v2 + 9);
  sub_21E8AF4(v3 + 10, v2 + 10);
  sub_21E8AF4(v3 + 11, v2 + 11);
  v4 = v2[12];
  *((_BYTE *)v3 + 52) = *((_BYTE *)v2 + 52);
  v3[12] = v4;
  return v3;
}


ModalScreenData *__fastcall ModalScreenData::~ModalScreenData(ModalScreenData *this)
{
  ModalScreenData *v1; // r10@1
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
  void *v17; // r5@21
  void *v18; // r7@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  int *v21; // r0@31
  int *v22; // r0@36
  unsigned int *v24; // r2@38
  signed int v25; // r1@40
  unsigned int *v26; // r2@42
  signed int v27; // r1@44
  unsigned int *v28; // r2@46
  signed int v29; // r1@48
  unsigned int *v30; // r2@50
  signed int v31; // r1@52
  unsigned int *v32; // r2@54
  signed int v33; // r1@56
  unsigned int *v34; // r2@58
  signed int v35; // r1@60

  v1 = this;
  v2 = *((_DWORD *)this + 11);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 10);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v4 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 9);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v6 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 8);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v8 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v11 = (void *)(*(_QWORD *)((char *)v1 + 20) >> 32);
  v10 = (void *)*(_QWORD *)((char *)v1 + 20);
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
          j_j_j_j_j__ZdlPv_9(v14);
      }
      v10 = (char *)v10 + 4;
    while ( v10 != v11 );
    v10 = (void *)*((_DWORD *)v1 + 5);
  if ( v10 )
    operator delete(v10);
  v15 = *((_DWORD *)v1 + 4);
  v16 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v15 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  v18 = (void *)(*(_QWORD *)((char *)v1 + 4) >> 32);
  v17 = (void *)*(_QWORD *)((char *)v1 + 4);
  if ( v17 != v18 )
      v21 = (int *)(*(_DWORD *)v17 - 12);
      if ( v21 != &dword_28898C0 )
        v19 = (unsigned int *)(*(_DWORD *)v17 - 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j_j__ZdlPv_9(v21);
      v17 = (char *)v17 + 4;
    while ( v17 != v18 );
    v17 = (void *)*((_DWORD *)v1 + 1);
  if ( v17 )
    operator delete(v17);
  v22 = (int *)(*(_DWORD *)v1 - 12);
  if ( v22 != &dword_28898C0 )
    v34 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  return v1;
}
