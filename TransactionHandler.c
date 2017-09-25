

void __fastcall TransactionHandler::~TransactionHandler(TransactionHandler *this)
{
  TransactionHandler *v1; // r0@1

  v1 = TransactionHandler::~TransactionHandler(this);
  j_j_j__ZdlPv_4((void *)v1);
}


signed int __fastcall TransactionHandler::isIdle(TransactionHandler *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 1);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


void __fastcall TransactionHandler::~TransactionHandler(TransactionHandler *this)
{
  TransactionHandler::~TransactionHandler(this);
}


TransactionHandler *__fastcall TransactionHandler::~TransactionHandler(TransactionHandler *this)
{
  TransactionHandler *v1; // r4@1
  int v2; // r5@1
  int v3; // r1@2
  void *v4; // r0@2
  int v5; // r1@3
  void *v6; // r0@3
  void (__fastcall *v7)(int, int, signed int); // r3@4
  unsigned int *v9; // r12@8
  signed int v10; // r1@10
  unsigned int *v11; // r12@12
  signed int v12; // r1@14

  v1 = this;
  *(_DWORD *)this = &off_26DFA30;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 20);
    v4 = (void *)(v3 - 12);
    if ( (int *)(v3 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v3 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v4);
    }
    v5 = *(_DWORD *)(v2 + 16);
    v6 = (void *)(v5 - 12);
    if ( (int *)(v5 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v5 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
    v7 = *(void (__fastcall **)(int, int, signed int))(v2 + 8);
    if ( v7 )
      v7(v2, v2, 3);
    operator delete((void *)v2);
  }
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


_QWORD *__fastcall TransactionHandler::TransactionHandler(_QWORD *result)
{
  *result = (unsigned int)&off_26DFA30;
  return result;
}
