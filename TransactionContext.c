

int __fastcall TransactionContext::TransactionContext(int a1, int *a2)
{
  int v2; // r4@1

  v2 = a1;
  *(_DWORD *)(a1 + 8) = 0;
  sub_119C854((int *)(a1 + 16), a2);
  *(_DWORD *)(v2 + 20) = &unk_28898CC;
  return v2;
}


int __fastcall TransactionContext::TransactionContext(int result)
{
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 16) = &unk_28898CC;
  *(_DWORD *)(result + 20) = &unk_28898CC;
  return result;
}


TransactionContext *__fastcall TransactionContext::~TransactionContext(TransactionContext *this)
{
  TransactionContext *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  void (__fastcall *v6)(TransactionContext *, TransactionContext *, signed int); // r3@3
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12

  v1 = this;
  v2 = *((_DWORD *)this + 5);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 4);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v4 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void (__fastcall *)(TransactionContext *, TransactionContext *, signed int))*((_DWORD *)v1 + 2);
  if ( v6 )
    v6(v1, v1, 3);
  return v1;
}
