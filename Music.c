

int __fastcall Music::Music(int a1, int a2, int *a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r4@1

  v5 = a1;
  *(_DWORD *)a1 = a2;
  v6 = a4;
  sub_119C854((int *)(a1 + 4), a3);
  *(_DWORD *)(v5 + 8) = v6;
  *(_DWORD *)(v5 + 12) = a5;
  return v5;
}


Music *__fastcall Music::~Music(Music *this)
{
  Music *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5

  v1 = this;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  return v1;
}
