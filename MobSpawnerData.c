

_DWORD *__fastcall MobSpawnerData::MobSpawnerData(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _DWORD *v8; // r10@1
  int v9; // r4@1
  int v10; // r6@1
  int v11; // r0@1
  int v12; // r3@1
  int v13; // r4@1
  int v14; // r6@1
  int v15; // r7@1
  int v16; // r0@1
  int v17; // r3@1
  int v18; // r4@1
  int v19; // r5@1
  int v20; // r6@1
  int v21; // r7@1
  void (__fastcall *v22)(_DWORD *, int, signed int); // r3@1
  void (__fastcall *v23)(_DWORD *, int, signed int); // r3@3
  void (__fastcall *v24)(_DWORD *, int, signed int); // r3@5

  v8 = a1;
  v9 = a4;
  v10 = a2;
  *a1 = a3;
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)(a1 + 1));
  v8[4] = v10;
  v8[5] = v9;
  v8[6] = a5;
  v11 = (int)(v8 + 7);
  v12 = *(_DWORD *)(a6 + 4);
  v13 = *(_DWORD *)(a6 + 8);
  v14 = *(_DWORD *)(a6 + 12);
  v15 = *(_DWORD *)(a6 + 16);
  *(_DWORD *)v11 = *(_DWORD *)a6;
  *(_DWORD *)(v11 + 4) = v12;
  *(_DWORD *)(v11 + 8) = v13;
  *(_DWORD *)(v11 + 12) = v14;
  *(_DWORD *)(v11 + 16) = v15;
  v16 = (int)(v8 + 12);
  v17 = *(_DWORD *)(a6 + 24);
  v18 = *(_DWORD *)(a6 + 28);
  v19 = *(_DWORD *)(a6 + 32);
  v20 = *(_DWORD *)(a6 + 36);
  v21 = *(_DWORD *)(a6 + 40);
  *(_DWORD *)v16 = *(_DWORD *)(a6 + 20);
  *(_DWORD *)(v16 + 4) = v17;
  *(_DWORD *)(v16 + 8) = v18;
  *(_DWORD *)(v16 + 12) = v19;
  *(_DWORD *)(v16 + 16) = v20;
  *(_DWORD *)(v16 + 20) = v21;
  v8[20] = 0;
  v22 = *(void (__fastcall **)(_DWORD *, int, signed int))(a6 + 52);
  if ( v22 )
  {
    v22(v8 + 18, a6 + 44, 2);
    v8[21] = *(_DWORD *)(a6 + 56);
    v8[20] = *(_DWORD *)(a6 + 52);
  }
  v8[24] = 0;
  v23 = *(void (__fastcall **)(_DWORD *, int, signed int))(a7 + 8);
  if ( v23 )
    v23(v8 + 22, a7, 2);
    v8[25] = *(_DWORD *)(a7 + 12);
    v8[24] = *(_DWORD *)(a7 + 8);
  v8[28] = 0;
  v24 = *(void (__fastcall **)(_DWORD *, int, signed int))(a8 + 8);
  if ( v24 )
    v24(v8 + 26, a8, 2);
    v8[29] = *(_DWORD *)(a8 + 12);
    v8[28] = *(_DWORD *)(a8 + 8);
  return v8;
}


int __fastcall MobSpawnerData::MobSpawnerData(int a1, int a2)
{
  int v2; // r10@1
  int v3; // r9@1
  int v4; // r3@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r1@1
  int v8; // r3@1
  int v9; // r4@1
  int v10; // r5@1
  int v11; // r7@1
  int v12; // r1@1
  int v13; // r3@1
  int v14; // r4@1
  int v15; // r5@1
  int v16; // r6@1
  int v17; // r7@1
  void (__fastcall *v18)(int, int, signed int); // r3@1
  void (__fastcall *v19)(int, int, signed int); // r3@3
  void (__fastcall *v20)(int, int, signed int); // r3@5

  v2 = a2;
  v3 = a1;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((int *)(a1 + 4), (int *)(a2 + 4));
  v4 = v3 + 16;
  v5 = *(_DWORD *)(v2 + 20);
  v6 = *(_DWORD *)(v2 + 24);
  *(_DWORD *)v4 = *(_DWORD *)(v2 + 16);
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  v7 = v3 + 28;
  v8 = *(_DWORD *)(v2 + 32);
  v9 = *(_DWORD *)(v2 + 36);
  v10 = *(_DWORD *)(v2 + 40);
  v11 = *(_DWORD *)(v2 + 44);
  *(_DWORD *)v7 = *(_DWORD *)(v2 + 28);
  *(_DWORD *)(v7 + 4) = v8;
  *(_DWORD *)(v7 + 8) = v9;
  *(_DWORD *)(v7 + 12) = v10;
  *(_DWORD *)(v7 + 16) = v11;
  v12 = v3 + 48;
  v13 = *(_DWORD *)(v2 + 52);
  v14 = *(_DWORD *)(v2 + 56);
  v15 = *(_DWORD *)(v2 + 60);
  v16 = *(_DWORD *)(v2 + 64);
  v17 = *(_DWORD *)(v2 + 68);
  *(_DWORD *)v12 = *(_DWORD *)(v2 + 48);
  *(_DWORD *)(v12 + 4) = v13;
  *(_DWORD *)(v12 + 8) = v14;
  *(_DWORD *)(v12 + 12) = v15;
  *(_DWORD *)(v12 + 16) = v16;
  *(_DWORD *)(v12 + 20) = v17;
  *(_DWORD *)(v3 + 80) = 0;
  v18 = *(void (__fastcall **)(int, int, signed int))(v2 + 80);
  if ( v18 )
  {
    v18(v3 + 72, v2 + 72, 2);
    *(_DWORD *)(v3 + 84) = *(_DWORD *)(v2 + 84);
    *(_DWORD *)(v3 + 80) = *(_DWORD *)(v2 + 80);
  }
  *(_DWORD *)(v3 + 96) = 0;
  v19 = *(void (__fastcall **)(int, int, signed int))(v2 + 96);
  if ( v19 )
    v19(v3 + 88, v2 + 88, 2);
    *(_DWORD *)(v3 + 100) = *(_DWORD *)(v2 + 100);
    *(_DWORD *)(v3 + 96) = *(_DWORD *)(v2 + 96);
  *(_DWORD *)(v3 + 112) = 0;
  v20 = *(void (__fastcall **)(int, int, signed int))(v2 + 112);
  if ( v20 )
    v20(v3 + 104, v2 + 104, 2);
    *(_DWORD *)(v3 + 116) = *(_DWORD *)(v2 + 116);
    *(_DWORD *)(v3 + 112) = *(_DWORD *)(v2 + 112);
  return v3;
}


MobSpawnerData *__fastcall MobSpawnerData::~MobSpawnerData(MobSpawnerData *this)
{
  MobSpawnerData *v1; // r5@1
  void (*v2)(void); // r3@1
  void (*v3)(void); // r3@3
  void (*v4)(void); // r3@5
  int v5; // r1@7
  void *v6; // r0@7
  int v7; // r1@8
  void *v8; // r0@8
  int v9; // r1@9
  void *v10; // r0@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21

  v1 = this;
  v2 = (void (*)(void))*((_DWORD *)this + 28);
  if ( v2 )
    v2();
  v3 = (void (*)(void))*((_DWORD *)v1 + 24);
  if ( v3 )
    v3();
  v4 = (void (*)(void))*((_DWORD *)v1 + 20);
  if ( v4 )
    v4();
  v5 = *((_DWORD *)v1 + 3);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v5 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = *((_DWORD *)v1 + 2);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v7 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = *((_DWORD *)v1 + 1);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v9 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  return v1;
}


int __fastcall MobSpawnerData::MobSpawnerData(int a1, int a2, int *a3, int a4, __int64 a5, int a6)
{
  int v6; // r10@1
  int v7; // r4@1
  int v8; // r0@1
  int v9; // r3@1
  int v10; // r4@1
  int v11; // r5@1
  int v12; // r7@1
  int v13; // r0@1
  int v14; // r3@1
  int v15; // r4@1
  int v16; // r5@1
  int v17; // r6@1
  int v18; // r7@1
  void (__fastcall *v19)(int, int, signed int); // r3@1
  int result; // r0@3

  v6 = a1;
  v7 = a2;
  *(_DWORD *)a1 = a4;
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((int *)(a1 + 4), a3);
  *(_DWORD *)(v6 + 16) = v7;
  *(_QWORD *)(v6 + 20) = a5;
  v8 = v6 + 28;
  v9 = *(_DWORD *)(a6 + 4);
  v10 = *(_DWORD *)(a6 + 8);
  v11 = *(_DWORD *)(a6 + 12);
  v12 = *(_DWORD *)(a6 + 16);
  *(_DWORD *)v8 = *(_DWORD *)a6;
  *(_DWORD *)(v8 + 4) = v9;
  *(_DWORD *)(v8 + 8) = v10;
  *(_DWORD *)(v8 + 12) = v11;
  *(_DWORD *)(v8 + 16) = v12;
  v13 = v6 + 48;
  v14 = *(_DWORD *)(a6 + 24);
  v15 = *(_DWORD *)(a6 + 28);
  v16 = *(_DWORD *)(a6 + 32);
  v17 = *(_DWORD *)(a6 + 36);
  v18 = *(_DWORD *)(a6 + 40);
  *(_DWORD *)v13 = *(_DWORD *)(a6 + 20);
  *(_DWORD *)(v13 + 4) = v14;
  *(_DWORD *)(v13 + 8) = v15;
  *(_DWORD *)(v13 + 12) = v16;
  *(_DWORD *)(v13 + 16) = v17;
  *(_DWORD *)(v13 + 20) = v18;
  *(_DWORD *)(v6 + 80) = 0;
  v19 = *(void (__fastcall **)(int, int, signed int))(a6 + 52);
  if ( v19 )
  {
    v19(v6 + 72, a6 + 44, 2);
    *(_DWORD *)(v6 + 84) = *(_DWORD *)(a6 + 56);
    *(_DWORD *)(v6 + 80) = *(_DWORD *)(a6 + 52);
  }
  *(_DWORD *)(v6 + 96) = 0;
  result = v6;
  *(_DWORD *)(v6 + 112) = 0;
  return result;
}
