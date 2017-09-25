

int __fastcall DefaultUIScreenSetupCleanupStrategy::setupScreen(int a1, int a2)
{
  int v2; // r2@1

  v2 = *(_DWORD *)(a1 + 4);
  return j_j_j__ZN24ScreenSetupCleanupHelper25setupForStandardUIDrawingER13ScreenContextR14ClientInstance(a2);
}


int __fastcall DefaultUIScreenSetupCleanupStrategy::DefaultUIScreenSetupCleanupStrategy(int result, int a2)
{
  *(_DWORD *)result = &off_26E47A8;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


signed int __fastcall DefaultUIScreenSetupCleanupStrategy::getEyeRenderingMode(DefaultUIScreenSetupCleanupStrategy *this)
{
  DefaultUIScreenSetupCleanupStrategy *v1; // r4@1
  signed int result; // r0@2
  signed int v3; // r0@3
  signed int v4; // r1@3

  v1 = this;
  if ( ClientInstance::isLivingroomMode(*((ClientInstance **)this + 1)) )
  {
    result = 8;
  }
  else
    v3 = ClientInstance::useLowFrequencyUIRender(*((ClientInstance **)v1 + 1));
    v4 = 64;
    if ( v3 )
      v4 = 8;
    result = v4;
  return result;
}
