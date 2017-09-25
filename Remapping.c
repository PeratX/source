

int __fastcall Remapping::allowRemap(const void **a1)
{
  const void **v1; // r4@1
  int v2; // r5@1
  char *v3; // r7@2
  int v4; // r0@2
  char v5; // r1@4

  v1 = a1;
  v2 = 0;
  while ( 1 )
  {
    v3 = (char *)&unk_26D93B0 + v2;
    v4 = sub_119C9E8(v1, *(const char **)((char *)&unk_26D93B0 + v2 + 4));
    if ( !v4 )
      break;
    v2 += 12;
    if ( v2 == 396 )
    {
      v5 = 1;
      return ((unsigned __int8)v4 | (unsigned __int8)v5) & 1;
    }
  }
  LOBYTE(v4) = v3[8];
  v5 = 0;
  if ( v3[8] )
    LOBYTE(v4) = 1;
  return ((unsigned __int8)v4 | (unsigned __int8)v5) & 1;
}
