

TouchTextButtonBinding *__fastcall TouchTextButtonBinding::~TouchTextButtonBinding(TouchTextButtonBinding *this)
{
  TouchTextButtonBinding *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int *v8; // r0@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20

  v1 = this;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v4 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 1);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v6 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = (int *)(*(_DWORD *)v1 - 12);
  if ( v8 != &dword_28898C0 )
    v16 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  return v1;
}


int *__fastcall TouchTextButtonBinding::TouchTextButtonBinding(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1
  int v4; // r1@1
  int v5; // r0@1
  int v6; // r3@1
  int v7; // r6@1
  int v8; // r7@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r3@1
  int v12; // r5@1
  int v13; // r6@1
  int v14; // r7@1
  int v15; // r1@1
  int v16; // r2@1
  int v17; // r3@1
  int v18; // r5@1
  int v19; // r6@1
  int v20; // r7@1
  int *result; // r0@1

  v2 = a2;
  v3 = a1;
  sub_119C854(a1, a2);
  sub_119C854(v3 + 1, v2 + 1);
  sub_119C854(v3 + 2, v2 + 2);
  sub_119C854(v3 + 3, v2 + 3);
  v4 = (int)(v3 + 4);
  v6 = v2[5];
  v7 = v2[6];
  v8 = v2[7];
  v5 = (int)(v2 + 8);
  *(_DWORD *)v4 = v2[4];
  *(_DWORD *)(v4 + 4) = v6;
  *(_DWORD *)(v4 + 8) = v7;
  *(_DWORD *)(v4 + 12) = v8;
  v9 = (int)(v3 + 8);
  v10 = v2[8];
  v11 = v2[9];
  v12 = v2[10];
  v13 = *(_DWORD *)(v5 + 12);
  v14 = *(_DWORD *)(v5 + 16);
  v5 += 20;
  *(_DWORD *)v9 = v10;
  *(_DWORD *)(v9 + 4) = v11;
  *(_DWORD *)(v9 + 8) = v12;
  *(_DWORD *)(v9 + 12) = v13;
  *(_DWORD *)(v9 + 16) = v14;
  v15 = (int)(v3 + 13);
  v16 = *(_DWORD *)v5;
  v17 = *(_DWORD *)(v5 + 4);
  v18 = *(_DWORD *)(v5 + 8);
  v19 = *(_DWORD *)(v5 + 12);
  v20 = *(_DWORD *)(v5 + 16);
  result = v3;
  *(_DWORD *)v15 = v16;
  *(_DWORD *)(v15 + 4) = v17;
  *(_DWORD *)(v15 + 8) = v18;
  *(_DWORD *)(v15 + 12) = v19;
  *(_DWORD *)(v15 + 16) = v20;
  return result;
}


int *__fastcall TouchTextButtonBinding::TouchTextButtonBinding(int *a1, int *a2, int *a3, int *a4, int *a5, int a6, int a7, int a8, __int64 a9, char a10, int a11)
{
  int *v11; // r5@1
  int *v12; // r7@1
  int *v13; // r4@1
  int v14; // r0@1
  int v15; // r2@1
  int v16; // r3@1
  int v17; // r7@1
  int v18; // r0@1
  int v19; // r2@1
  int v20; // r3@1
  int v21; // r7@1
  int *result; // r0@1

  v11 = a4;
  v12 = a3;
  v13 = a1;
  sub_119C854(a1, a2);
  sub_119C854(v13 + 1, v12);
  sub_119C854(v13 + 2, v11);
  sub_119C854(v13 + 3, a5);
  v14 = (int)(v13 + 4);
  v15 = *(_DWORD *)(a6 + 4);
  v16 = *(_DWORD *)(a6 + 8);
  v17 = *(_DWORD *)(a6 + 12);
  *(_DWORD *)v14 = *(_DWORD *)a6;
  *(_DWORD *)(v14 + 4) = v15;
  *(_DWORD *)(v14 + 8) = v16;
  *(_DWORD *)(v14 + 12) = v17;
  v18 = (int)(v13 + 8);
  v19 = *(_DWORD *)(a6 + 20);
  v20 = *(_DWORD *)(a6 + 24);
  v21 = *(_DWORD *)(a6 + 28);
  *(_DWORD *)v18 = *(_DWORD *)(a6 + 16);
  *(_DWORD *)(v18 + 4) = v19;
  *(_DWORD *)(v18 + 8) = v20;
  *(_DWORD *)(v18 + 12) = v21;
  result = v13;
  v13[12] = a7;
  v13[13] = a8;
  *((_QWORD *)v13 + 7) = a9;
  *((_BYTE *)v13 + 64) = a10;
  v13[17] = a11;
  return result;
}
