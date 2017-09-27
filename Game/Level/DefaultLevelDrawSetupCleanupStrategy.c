

signed int __fastcall DefaultLevelDrawSetupCleanupStrategy::getEyeRenderingMode(DefaultLevelDrawSetupCleanupStrategy *this)
{
  return 1;
}


int __fastcall DefaultLevelDrawSetupCleanupStrategy::setupScreen(int a1, int a2)
{
  int v2; // r4@1

  v2 = *(_DWORD *)(a2 + 12);
  ClientInstance::getViewportInfo(*(ClientInstance **)(a1 + 4));
  return j_j_j__ZN3mce13RenderContext11setViewportERKNS_12ViewportInfoE();
}


int __fastcall DefaultLevelDrawSetupCleanupStrategy::DefaultLevelDrawSetupCleanupStrategy(int result, int a2)
{
  *(_DWORD *)result = &off_26E4770;
  *(_DWORD *)(result + 4) = a2;
  return result;
}
