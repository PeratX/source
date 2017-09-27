

signed int __fastcall HoloPlayspaceSetupCleanupStrategy::getEyeRenderingMode(HoloPlayspaceSetupCleanupStrategy *this)
{
  return 1;
}


int __fastcall HoloPlayspaceSetupCleanupStrategy::cleanupScreen(int a1, int a2)
{
  int v2; // r4@1
  mce::WorldConstantsHolographic *v3; // r1@1

  v2 = a2;
  mce::WorldConstantsHolographic::setMatrixPatch(*(_DWORD *)(a2 + 32) + 36, a1 + 8);
  return j_j_j__ZN24ScreenSetupCleanupHelper20cleanupFromVRDrawingERN3mce25WorldConstantsHolographicE_0(
           (ScreenSetupCleanupHelper *)(*(_DWORD *)(v2 + 32) + 36),
           v3);
}


int __fastcall HoloPlayspaceSetupCleanupStrategy::HoloPlayspaceSetupCleanupStrategy(int result, int a2)
{
  *(_DWORD *)result = &off_26E4804;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = 1065353216;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 28) = 1065353216LL;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 1065353216;
  *(_DWORD *)(result + 60) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 68) = 1065353216;
  return result;
}


int __fastcall HoloPlayspaceSetupCleanupStrategy::setupScreen(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  mce::WorldConstantsHolographic *v4; // r2@1

  v2 = a2;
  v3 = a1;
  mce::WorldConstantsHolographic::getMatrixPatch(*(_DWORD *)(a2 + 32) + 36, a1 + 8);
  mce::WorldConstantsHolographic::setMatrixPatch(*(_DWORD *)(v2 + 32) + 36, (int)&Matrix::IDENTITY);
  return j_j_j__ZN24ScreenSetupCleanupHelper17setupForVRDrawingER14ClientInstanceRN3mce25WorldConstantsHolographicE(
           *(ScreenSetupCleanupHelper **)(v3 + 4),
           (ClientInstance *)(*(_DWORD *)(v2 + 32) + 36),
           v4);
}
