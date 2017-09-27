

void __fastcall Store::getUserAccessTokenAsync(int a1, int a2, int a3)
{
  Store::getUserAccessTokenAsync(a1, a2, a3);
}


signed int __fastcall Store::isReadyToMakePurchases(Store *this)
{
  return 1;
}


void __fastcall Store::getUserAccessTokenAsync(int a1, int a2, int a3)
{
  int v3; // r4@1
  void (__fastcall *v4)(int, _DWORD, char **); // r3@2
  char *v5; // r0@2
  char *v6; // r0@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  char *v11; // [sp+0h] [bp-28h]@1
  char *v12; // [sp+4h] [bp-24h]@2

  v3 = a3;
  sub_DA73B4((int *)&v11, (int *)&Util::EMPTY_STRING);
  if ( !*(_DWORD *)(v3 + 8) )
    sub_DA7654();
  v4 = *(void (__fastcall **)(int, _DWORD, char **))(v3 + 12);
  v12 = v11;
  v11 = (char *)&unk_28898CC;
  v4(v3, 0, &v12);
  v5 = v12 - 12;
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  }
  v6 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
}
