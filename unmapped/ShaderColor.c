

int __fastcall ShaderColor::setColor(int result, const Color *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = v3;
  *(_DWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 12) = v5;
  *(_BYTE *)(result + 16) = 1;
  return result;
}


int __fastcall ShaderColor::makeClean(int result)
{
  *(_BYTE *)(result + 16) = 0;
  return result;
}
