

DefinitionModifier *__fastcall DefinitionModifier::~DefinitionModifier(DefinitionModifier *this)
{
  DefinitionModifier *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  void *v7; // r5@16
  void *v8; // r7@16
  unsigned int *v9; // r2@18
  signed int v10; // r1@20
  int *v11; // r0@26

  v1 = this;
  v3 = (void *)(*(_QWORD *)((char *)this + 12) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 12);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 3);
  }
  if ( v2 )
    operator delete(v2);
  v8 = (void *)(*(_QWORD *)v1 >> 32);
  v7 = (void *)*(_QWORD *)v1;
  if ( v7 != v8 )
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
        v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v7 = (char *)v7 + 4;
    while ( v7 != v8 );
    v7 = *(void **)v1;
  if ( v7 )
    operator delete(v7);
  return v1;
}
