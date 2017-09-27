

int __fastcall PackStats::PackStats(double a1)
{
  int v1; // r4@1
  double v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3
  unsigned int v5; // r0@4
  int v6; // r6@6
  void *v7; // r5@6

  v1 = LODWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 1065353216;
  LODWORD(a1) += 16;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(a1)));
  *(_DWORD *)(v1 + 4) = LODWORD(v2);
  if ( LODWORD(v2) == 1 )
  {
    *(_DWORD *)(v1 + 24) = 0;
    v4 = (void *)(v1 + 24);
  }
  else
    if ( LODWORD(v2) >= 0x40000000 )
      sub_21E57F4();
    v3 = 4 * LODWORD(v2);
    v4 = operator new(4 * LODWORD(v2));
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)v1 = v4;
  *(_DWORD *)(v1 + 36) = 0;
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 44) = 1065353216;
  LODWORD(v2) = v1 + 44;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v5 = sub_21E6254(v2);
  *(_DWORD *)(v1 + 32) = v5;
  if ( v5 == 1 )
    *(_DWORD *)(v1 + 52) = 0;
    v7 = (void *)(v1 + 52);
    if ( v5 >= 0x40000000 )
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)(v1 + 28) = v7;
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 64) = 0;
  *(_DWORD *)(v1 + 68) = 0;
  return v1;
}


PackStats *__fastcall PackStats::~PackStats(PackStats *this)
{
  PackStats *v1; // r10@1
  unsigned __int64 *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  unsigned __int64 *v5; // r6@11
  int v6; // r1@11
  void *v7; // r0@11
  char *v8; // r0@13
  unsigned __int64 *v9; // r7@16
  unsigned int *v10; // r2@18
  signed int v11; // r1@20
  unsigned __int64 *v12; // r6@26
  int v13; // r1@26
  void *v14; // r0@26
  char *v15; // r0@28

  v1 = this;
  v2 = (unsigned __int64 *)*((_DWORD *)this + 9);
  while ( v2 )
  {
    v5 = v2;
    v6 = *v2 >> 32;
    v2 = (unsigned __int64 *)*v2;
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex(v3);
        while ( __strex(v4 - 1, v3) );
      }
      else
        v4 = (*v3)--;
      if ( v4 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    operator delete(v5);
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 28), 4 * (*(_QWORD *)((char *)v1 + 28) >> 32));
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 10) = 0;
  v8 = (char *)*((_DWORD *)v1 + 7);
  if ( v8 && (char *)v1 + 52 != v8 )
    operator delete(v8);
  v9 = (unsigned __int64 *)*((_DWORD *)v1 + 2);
  while ( v9 )
    v12 = v9;
    v13 = *v9 >> 32;
    v9 = (unsigned __int64 *)*v9;
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v13 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    operator delete(v12);
  _aeabi_memclr4(*(_QWORD *)v1, 4 * (*(_QWORD *)v1 >> 32));
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  v15 = *(char **)v1;
  if ( *(_DWORD *)v1 && (char *)v1 + 24 != v15 )
    operator delete(v15);
  return v1;
}
