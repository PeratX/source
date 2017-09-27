

int __fastcall PatternEntry::PatternEntry(int a1, _BYTE *a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  void (__fastcall *v5)(int, int, signed int); // r3@1

  v3 = a1;
  *(_BYTE *)a1 = *a2;
  v4 = a3;
  *(_DWORD *)(a1 + 12) = 0;
  v5 = *(void (__fastcall **)(int, int, signed int))(a3 + 8);
  if ( v5 )
  {
    v5(a1 + 4, a3, 2);
    *(_DWORD *)(v3 + 16) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v3 + 12) = *(_DWORD *)(v4 + 8);
  }
  return v3;
}
