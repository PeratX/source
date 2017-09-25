

Interaction *__fastcall Interaction::~Interaction(Interaction *this)
{
  Interaction *v1; // r8@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r5@3
  int v7; // r7@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int v14; // r1@29
  void *v15; // r0@29
  int v16; // r1@30
  void *v17; // r0@30
  int *v18; // r0@31
  void *v19; // r0@36
  int v20; // r1@38
  void *v21; // r0@38
  int v22; // r1@39
  void *v23; // r0@39
  int v24; // r1@40
  void *v25; // r0@40
  unsigned int *v27; // r2@42
  signed int v28; // r1@44
  unsigned int *v29; // r2@46
  signed int v30; // r1@48
  unsigned int *v31; // r2@50
  signed int v32; // r1@52
  unsigned int *v33; // r2@54
  signed int v34; // r1@56
  unsigned int *v35; // r2@58
  signed int v36; // r1@60

  v1 = this;
  FilterGroup::~FilterGroup((Interaction *)((char *)this + 64));
  v2 = *((_DWORD *)v1 + 15);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 14);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v4 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v7 = *(_QWORD *)((char *)v1 + 44) >> 32;
  v6 = *(_QWORD *)((char *)v1 + 44);
  if ( v6 != v7 )
    do
      v14 = *(_DWORD *)(v6 + 8);
      v15 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v14 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      }
      v16 = *(_DWORD *)(v6 + 4);
      v17 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v16 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v18 = (int *)(*(_DWORD *)v6 - 12);
      if ( v18 != &dword_28898C0 )
        v12 = (unsigned int *)(*(_DWORD *)v6 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v6 += 12;
    while ( v6 != v7 );
    v6 = *((_DWORD *)v1 + 11);
  if ( v6 )
    operator delete((void *)v6);
  v19 = (void *)*((_DWORD *)v1 + 8);
  if ( v19 )
    operator delete(v19);
  v20 = *((_DWORD *)v1 + 7);
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v20 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = *((_DWORD *)v1 + 6);
  v23 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v22 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = *((_DWORD *)v1 + 5);
  v25 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v24 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  return v1;
}


int __fastcall Interaction::Interaction(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r3@1
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r8@1
  __int64 v8; // r0@1
  char *v9; // r6@1
  int v10; // r5@1
  __int64 v11; // kr00_8@3

  v2 = a1;
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = *(_DWORD *)(a2 + 16);
  v7 = a2;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = v3;
  *(_DWORD *)(a1 + 8) = v4;
  *(_DWORD *)(a1 + 12) = v5;
  *(_DWORD *)(a1 + 16) = v6;
  sub_21E8AF4((int *)(a1 + 20), (int *)(a2 + 20));
  sub_21E8AF4((int *)(v2 + 24), (int *)(v7 + 24));
  sub_21E8AF4((int *)(v2 + 28), (int *)(v7 + 28));
  v8 = *(_QWORD *)(v7 + 32);
  v9 = 0;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  v10 = HIDWORD(v8) - v8;
  *(_DWORD *)(v2 + 40) = 0;
  if ( HIDWORD(v8) != (_DWORD)v8 )
    v9 = (char *)j_operator new(HIDWORD(v8) - v8);
  *(_DWORD *)(v2 + 32) = v9;
  *(_DWORD *)(v2 + 36) = v9;
  *(_DWORD *)(v2 + 40) = &v9[v10];
  v11 = *(_QWORD *)(v7 + 32);
  if ( HIDWORD(v11) != (_DWORD)v11 )
    j___aeabi_memmove_0((int)v9, v11);
  *(_DWORD *)(v2 + 36) = &v9[HIDWORD(v11) - v11];
  j_std::vector<EntityDefinitionIdentifier,std::allocator<EntityDefinitionIdentifier>>::vector(
    v2 + 44,
    (unsigned __int64 *)(v7 + 44));
  j_DefinitionTrigger::DefinitionTrigger((int *)(v2 + 56), (int *)(v7 + 56));
  return v2;
}
