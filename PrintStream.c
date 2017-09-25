

void __fastcall PrintStream::println(int a1)
{
  int v1; // r4@1
  void (__fastcall *v2)(int, int *); // r5@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v1 = a1;
  (*(void (**)(void))(*(_DWORD *)a1 + 8))();
  v2 = *(void (__fastcall **)(int, int *))(*(_DWORD *)v1 + 8);
  sub_21E94B4((void **)&v6, "\n");
  v2(v1, &v6);
  v3 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
}


void __fastcall PrintStream::println(int a1)
{
  PrintStream::println(a1);
}
