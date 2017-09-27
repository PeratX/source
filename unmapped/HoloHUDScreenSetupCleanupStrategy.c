

_DWORD *__fastcall HoloHUDScreenSetupCleanupStrategy::HoloHUDScreenSetupCleanupStrategy(int a1, int a2)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)HoloUIScreenSetupCleanupStrategy::HoloUIScreenSetupCleanupStrategy(a1, a2);
  *result = &off_26E47C4;
  return result;
}


int __fastcall HoloHUDScreenSetupCleanupStrategy::cleanupScreen(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int result; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 4));
  result = (*(int (**)(void))(*(_DWORD *)v4 + 272))();
  if ( !result )
    result = j_j_j__ZN32HoloUIScreenSetupCleanupStrategy13cleanupScreenER13ScreenContext(v2, v3);
  return result;
}


int __fastcall HoloHUDScreenSetupCleanupStrategy::setupScreen(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r1@2
  int result; // r0@2

  v2 = a1;
  v3 = a2;
  v4 = ClientInstance::getHoloInput(*(ClientInstance **)(a1 + 4));
  if ( (*(int (**)(void))(*(_DWORD *)v4 + 272))() )
  {
    v5 = *(_DWORD *)(v2 + 4);
    result = j_j_j__ZN24ScreenSetupCleanupHelper25setupForStandardUIDrawingER13ScreenContextR14ClientInstance(v3);
  }
  else
    result = j_j_j__ZN32HoloUIScreenSetupCleanupStrategy11setupScreenER13ScreenContext(v2, v3);
  return result;
}


signed int __fastcall HoloHUDScreenSetupCleanupStrategy::getEyeRenderingMode(HoloHUDScreenSetupCleanupStrategy *this)
{
  int v1; // r0@1
  int v2; // r0@1
  signed int v3; // r1@1

  v1 = ClientInstance::getHoloInput(*((ClientInstance **)this + 1));
  v2 = (*(int (**)(void))(*(_DWORD *)v1 + 272))();
  v3 = 64;
  if ( !v2 )
    v3 = 1;
  return v3;
}


void __fastcall HoloHUDScreenSetupCleanupStrategy::~HoloHUDScreenSetupCleanupStrategy(HoloHUDScreenSetupCleanupStrategy *this)
{
  HoloHUDScreenSetupCleanupStrategy::~HoloHUDScreenSetupCleanupStrategy(this);
}


void __fastcall HoloHUDScreenSetupCleanupStrategy::~HoloHUDScreenSetupCleanupStrategy(HoloHUDScreenSetupCleanupStrategy *this)
{
  void *v1; // r0@1

  v1 = (void *)HoloUIScreenSetupCleanupStrategy::~HoloUIScreenSetupCleanupStrategy(this);
  j_j_j__ZdlPv_5(v1);
}


int __fastcall HoloHUDScreenSetupCleanupStrategy::_generateMatrixPatch(HoloHUDScreenSetupCleanupStrategy *this, int a2)
{
  HoloHUDScreenSetupCleanupStrategy *v2; // r4@1
  int v3; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = ClientInstance::getGameRenderer(*(ClientInstance **)(a2 + 4));
  _aeabi_memclr4(v2, 56);
  *(_DWORD *)v2 = *(_DWORD *)(v3 + 648);
  *((_DWORD *)v2 + 1) = *(_DWORD *)(v3 + 652);
  *((_DWORD *)v2 + 2) = *(_DWORD *)(v3 + 656);
  *((_DWORD *)v2 + 3) = *(_DWORD *)(v3 + 660);
  *((_DWORD *)v2 + 4) = *(_DWORD *)(v3 + 664);
  *((_DWORD *)v2 + 5) = *(_DWORD *)(v3 + 668);
  *((_DWORD *)v2 + 6) = *(_DWORD *)(v3 + 672);
  *((_DWORD *)v2 + 7) = *(_DWORD *)(v3 + 676);
  *((_DWORD *)v2 + 8) = *(_DWORD *)(v3 + 680);
  *((_DWORD *)v2 + 9) = *(_DWORD *)(v3 + 684);
  *((_DWORD *)v2 + 10) = *(_DWORD *)(v3 + 688);
  *((_DWORD *)v2 + 11) = *(_DWORD *)(v3 + 692);
  *((_DWORD *)v2 + 12) = *(_DWORD *)(v3 + 696);
  *((_DWORD *)v2 + 13) = *(_DWORD *)(v3 + 700);
  *((_DWORD *)v2 + 14) = *(_DWORD *)(v3 + 704);
  result = *(_DWORD *)(v3 + 708);
  *((_DWORD *)v2 + 15) = result;
  return result;
}
