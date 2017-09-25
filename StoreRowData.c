

StoreRowData *__fastcall StoreRowData::~StoreRowData(StoreRowData *this)
{
  StoreRowData *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  int v7; // r1@16
  void *v8; // r0@16
  int *v9; // r0@17
  unsigned int *v11; // r2@19
  signed int v12; // r1@21
  unsigned int *v13; // r2@23
  signed int v14; // r1@25

  v1 = this;
  v3 = (void *)(*((_QWORD *)this + 1) >> 32);
  v2 = (void *)*((_QWORD *)this + 1);
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
          j_j_j_j_j__ZdlPv_9_1(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 2);
  }
  if ( v2 )
    operator delete(v2);
  v7 = *((_DWORD *)v1 + 1);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = (int *)(*(_DWORD *)v1 - 12);
  if ( v9 != &dword_28898C0 )
    v13 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  return v1;
}
