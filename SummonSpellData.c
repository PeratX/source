

SummonSpellData *__fastcall SummonSpellData::~SummonSpellData(SummonSpellData *this)
{
  SummonSpellData *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  int v10; // r1@27
  void *v11; // r0@27
  int v12; // r1@28
  void *v13; // r0@28
  int v14; // r1@29
  void *v15; // r0@29

  v1 = this;
  v3 = *((_QWORD *)this + 7) >> 32;
  v2 = *((_QWORD *)this + 7);
  if ( v2 != v3 )
  {
    do
    {
      v10 = *(_DWORD *)(v2 + 40);
      v11 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v10 - 4);
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
          j_j_j_j__ZdlPv_9(v11);
      }
      v12 = *(_DWORD *)(v2 + 36);
      v13 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v12 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      v14 = *(_DWORD *)(v2 + 32);
      v15 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v14 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v2 += 56;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 14);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  j_FilterGroup::~FilterGroup((SummonSpellData *)((char *)v1 + 16));
  return v1;
}
