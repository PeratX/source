

int __fastcall ResourcePackInfoData::ResourcePackInfoData(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(v2 + 8);
  v7 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)v3 = v4;
  *(_DWORD *)(v3 + 4) = v5;
  *(_DWORD *)(v3 + 8) = v6;
  *(_DWORD *)(v3 + 12) = v7;
  SemVersion::SemVersion(v3 + 16, v2 + 16);
  *(_BYTE *)(v3 + 40) = *(_BYTE *)(v2 + 40);
  *(_QWORD *)(v3 + 48) = *(_QWORD *)(v2 + 48);
  sub_DA73B4((int *)(v3 + 56), (int *)(v2 + 56));
  sub_DA73B4((int *)(v3 + 60), (int *)(v2 + 60));
  return v3;
}


int __fastcall ResourcePackInfoData::ResourcePackInfoData(int a1, int a2, int a3, int a4, __int64 a5, int *a6, int *a7)
{
  int v7; // r5@1

  v7 = a1;
  PackIdVersion::PackIdVersion(a1, a2, a3, 0);
  *(_QWORD *)(v7 + 48) = a5;
  sub_21E8AF4((int *)(v7 + 56), a6);
  sub_21E8AF4((int *)(v7 + 60), a7);
  return v7;
}


ResourcePackInfoData *__fastcall ResourcePackInfoData::~ResourcePackInfoData(ResourcePackInfoData *this)
{
  ResourcePackInfoData *v1; // r5@1
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
  unsigned int *v13; // r2@7
  signed int v14; // r1@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r2@23
  signed int v22; // r1@25

  v1 = this;
  v2 = *((_DWORD *)this + 15);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 14);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v4 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 8);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v6 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 7);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v8 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 6);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v10 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  return v1;
}
