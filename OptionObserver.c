

int __fastcall OptionObserver::OptionObserver(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r7@1
  int v6; // r6@1
  void (__fastcall *v7)(int, int, signed int); // r3@1
  void (__fastcall *v8)(int, int, signed int); // r3@3

  v4 = a1;
  *(_DWORD *)a1 = a2;
  v5 = a3;
  *(_DWORD *)(a1 + 12) = 0;
  v6 = a4;
  v7 = *(void (__fastcall **)(int, int, signed int))(a3 + 8);
  if ( v7 )
  {
    v7(a1 + 4, a3, 2);
    *(_DWORD *)(v4 + 16) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v4 + 12) = *(_DWORD *)(v5 + 8);
  }
  *(_DWORD *)(v4 + 28) = 0;
  v8 = *(void (__fastcall **)(int, int, signed int))(v6 + 8);
  if ( v8 )
    v8(v4 + 20, v6, 2);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v6 + 8);
  return v4;
}


int __fastcall OptionObserver::OptionObserver(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  void (__fastcall *v4)(int, int, signed int); // r3@1
  void (__fastcall *v5)(int, int, signed int); // r3@3

  v2 = a2;
  v3 = a1;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 12) = 0;
  v4 = *(void (__fastcall **)(int, int, signed int))(a2 + 12);
  if ( v4 )
  {
    v4(a1 + 4, a2 + 4, 2);
    *(_DWORD *)(v3 + 16) = *(_DWORD *)(v2 + 16);
    *(_DWORD *)(v3 + 12) = *(_DWORD *)(v2 + 12);
  }
  *(_DWORD *)(v3 + 28) = 0;
  v5 = *(void (__fastcall **)(int, int, signed int))(v2 + 28);
  if ( v5 )
    v5(v3 + 20, v2 + 20, 2);
    *(_DWORD *)(v3 + 32) = *(_DWORD *)(v2 + 32);
    *(_DWORD *)(v3 + 28) = *(_DWORD *)(v2 + 28);
  return v3;
}
