

int __fastcall CachedScene::CachedScene(int result, int *a2, int a3, int *a4)
{
  int v4; // r12@1
  int v5; // r1@1
  int v6; // r1@1

  v4 = *a2;
  *a2 = 0;
  *(_DWORD *)result = v4;
  *(_DWORD *)(result + 4) = *(_DWORD *)a3;
  *(_DWORD *)(result + 8) = 0;
  v5 = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)(result + 8) = v5;
  *(_DWORD *)a3 = 0;
  v6 = *a4;
  *a4 = 0;
  *(_DWORD *)(result + 12) = v6;
  return result;
}
