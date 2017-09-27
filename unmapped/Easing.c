

int __fastcall Easing::getEasingFunc(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1
  int v4; // r5@1
  int v5; // r6@1
  void (__fastcall *v6)(int, int, signed int); // r3@1
  int *v7; // r6@1
  void (__fastcall *v8)(int, int, signed int); // t1@1

  v2 = a1;
  *(_DWORD *)(a1 + 8) = 0;
  result = Easing::mEasingFuncs;
  v4 = Easing::mEasingFuncs + 16 * a2;
  v5 = Easing::mEasingFuncs + 16 * a2;
  v8 = *(void (__fastcall **)(int, int, signed int))(v5 + 8);
  v7 = (int *)(v5 + 8);
  v6 = v8;
  if ( v8 )
  {
    v6(v2, Easing::mEasingFuncs + 16 * a2, 2);
    *(_DWORD *)(v2 + 12) = *(_DWORD *)(v4 + 12);
    result = *v7;
    *(_DWORD *)(v2 + 8) = *v7;
  }
  return result;
}
