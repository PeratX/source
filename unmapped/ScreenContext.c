

int __fastcall ScreenContext::ScreenContext(UIScreenContext *a1, int a2, int a3, int a4, __int64 a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, float a15)
{
  int v15; // r4@1
  int v16; // r5@1
  int v17; // r6@1
  int result; // r0@1
  int v19; // r2@1

  v15 = a4;
  v16 = a3;
  v17 = a2;
  result = UIScreenContext::UIScreenContext(a1, a13, a14, a15);
  *(_DWORD *)(result + 12) = v17;
  *(_DWORD *)(result + 16) = v16;
  *(_DWORD *)(result + 20) = v15;
  *(_QWORD *)(result + 24) = a5;
  *(_DWORD *)(result + 32) = a6;
  v19 = result + 36;
  *(_DWORD *)v19 = a7;
  *(_DWORD *)(v19 + 4) = a8;
  *(_DWORD *)(v19 + 8) = a11;
  *(_DWORD *)(result + 48) = a9;
  *(_DWORD *)(result + 52) = a10;
  *(_DWORD *)(result + 56) = a12;
  return result;
}
