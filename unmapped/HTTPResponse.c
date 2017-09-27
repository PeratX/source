

void **__fastcall HTTPResponse::HTTPResponse(void **a1)
{
  void **v1; // r4@1
  double v2; // r0@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3

  v1 = a1;
  sub_DA7364(a1, (const char *)&unk_257BC67);
  v1[3] = 0;
  v1[4] = 0;
  v1[5] = (void *)1065353216;
  LODWORD(v2) = v1 + 5;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v3 = sub_DA7744(v2);
  v1[2] = (void *)v3;
  if ( v3 == 1 )
  {
    v1[7] = 0;
    v5 = v1 + 7;
  }
  else
    if ( v3 >= 0x40000000 )
      sub_DA7414();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  v1[1] = v5;
  *((_QWORD *)v1 + 4) = 4294967196LL;
  return v1;
}
