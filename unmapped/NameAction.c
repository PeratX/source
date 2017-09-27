

NameAction *__fastcall NameAction::~NameAction(NameAction *this)
{
  NameAction *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  void *v6; // r5@3
  void *v7; // r7@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int *v10; // r0@13
  unsigned int *v12; // r2@19
  signed int v13; // r1@21
  unsigned int *v14; // r2@23
  signed int v15; // r1@25

  v1 = this;
  FilterGroup::~FilterGroup((NameAction *)((char *)this + 20));
  v2 = *((_DWORD *)v1 + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 3);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v4 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v7 = (void *)(*(_QWORD *)v1 >> 32);
  v6 = (void *)*(_QWORD *)v1;
  if ( v6 != v7 )
    do
      v10 = (int *)(*(_DWORD *)v6 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*(_DWORD *)v6 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
      }
      v6 = (char *)v6 + 4;
    while ( v6 != v7 );
    v6 = *(void **)v1;
  if ( v6 )
    operator delete(v6);
  return v1;
}
