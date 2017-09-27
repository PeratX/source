

PackInstanceId *__fastcall PackInstanceId::~PackInstanceId(PackInstanceId *this)
{
  PackInstanceId *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20

  v1 = this;
  v2 = *((_DWORD *)this + 12);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 8);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v4 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 7);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v6 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 6);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v8 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  return v1;
}


int __fastcall PackInstanceId::PackInstanceId(int a1, int a2, int *a3)
{
  int v3; // r6@1
  int *v4; // r5@1
  int v5; // r4@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r1@1
  __int16 v11; // r1@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = *(_DWORD *)a2;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = *(_DWORD *)(v3 + 8);
  v9 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)v5 = v6;
  *(_DWORD *)(v5 + 4) = v7;
  *(_DWORD *)(v5 + 8) = v8;
  *(_DWORD *)(v5 + 12) = v9;
  v10 = *(_DWORD *)(v3 + 16);
  *(_WORD *)(v5 + 20) = *(_WORD *)(v3 + 20);
  *(_DWORD *)(v5 + 16) = v10;
  sub_21E8AF4((int *)(v5 + 24), (int *)(v3 + 24));
  sub_21E8AF4((int *)(v5 + 28), (int *)(v3 + 28));
  sub_21E8AF4((int *)(v5 + 32), (int *)(v3 + 32));
  v11 = *(_WORD *)(v3 + 36);
  *(_BYTE *)(v5 + 38) = *(_BYTE *)(v3 + 38);
  *(_WORD *)(v5 + 36) = v11;
  *(_BYTE *)(v5 + 40) = *(_BYTE *)(v3 + 40);
  sub_21E8AF4((int *)(v5 + 48), v4);
  return v5;
}
