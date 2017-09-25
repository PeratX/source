

int *__fastcall HydrateParams::HydrateParams(int *a1, int *a2, int *a3, _DWORD *a4)
{
  _DWORD *v4; // r5@1
  int *v5; // r7@1
  int *v6; // r4@1
  _BYTE *v7; // r5@1
  char *v8; // r0@1
  int v9; // r6@1
  char v10; // r1@4
  int v11; // t1@4

  v4 = a4;
  v5 = a3;
  v6 = a1;
  sub_119C854(a1, a2);
  sub_119C854(v6 + 1, v5);
  v6[2] = (int)&unk_28898CC;
  *((_BYTE *)v6 + 12) = 0;
  sub_119E388((char *)v6 + 8, *(_DWORD *)(*v4 - 12), 0);
  v7 = (_BYTE *)*v4;
  v8 = (char *)v6[2];
  v9 = *((_DWORD *)v7 - 3);
  if ( *(_DWORD *)(v6[2] - 4) > -1 )
  {
    sub_119CB68((const void **)v6 + 2);
    v8 = (char *)v6[2];
  }
  for ( ; v9; ++v8 )
    v11 = *v7++;
    v10 = v11;
    if ( v11 == 95 )
      v10 = 45;
    --v9;
    *v8 = v10;
  return v6;
}


int *__fastcall HydrateParams::HydrateParams(int *a1, int *a2)
{
  int *v2; // r4@1
  int *v3; // r5@1

  v2 = a2;
  v3 = a1;
  sub_119C854(a1, a2);
  sub_119C854(v3 + 1, v2 + 1);
  sub_119C854(v3 + 2, v2 + 2);
  *((_BYTE *)v3 + 12) = *((_BYTE *)v2 + 12);
  return v3;
}


int __fastcall HydrateParams::disableEtag(int result)
{
  *(_BYTE *)(result + 12) = 1;
  return result;
}
