

const void **__fastcall FetchImageParams::FetchImageParams(const void **a1, unsigned int *a2, __int64 a3)
{
  unsigned int *v3; // r5@1
  const void **v4; // r4@1
  const void **v5; // r0@1
  void *v6; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-1Ch]@1

  v3 = a2;
  v4 = a1;
  Util::format((Util *)&v10, "?w=%d&h=%d&mode=scale", a3);
  v5 = sub_119C984((const void **)&v10, 0, *v3, *(_BYTE **)(*v3 - 12));
  *v4 = *v5;
  *v5 = &unk_28898CC;
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  return v4;
}
