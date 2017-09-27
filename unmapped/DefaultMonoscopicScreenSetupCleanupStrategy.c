

signed int __fastcall DefaultMonoscopicScreenSetupCleanupStrategy::getEyeRenderingMode(DefaultMonoscopicScreenSetupCleanupStrategy *this)
{
  return 1;
}


void __fastcall DefaultMonoscopicScreenSetupCleanupStrategy::~DefaultMonoscopicScreenSetupCleanupStrategy(DefaultMonoscopicScreenSetupCleanupStrategy *this)
{
  DefaultMonoscopicScreenSetupCleanupStrategy::~DefaultMonoscopicScreenSetupCleanupStrategy(this);
}


void __fastcall DefaultMonoscopicScreenSetupCleanupStrategy::~DefaultMonoscopicScreenSetupCleanupStrategy(DefaultMonoscopicScreenSetupCleanupStrategy *this)
{
  void *v1; // r0@1

  v1 = (void *)DefaultUIScreenSetupCleanupStrategy::~DefaultUIScreenSetupCleanupStrategy(this);
  j_j_j__ZdlPv_5(v1);
}


_DWORD *__fastcall DefaultMonoscopicScreenSetupCleanupStrategy::DefaultMonoscopicScreenSetupCleanupStrategy(int a1, int a2)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)DefaultUIScreenSetupCleanupStrategy::DefaultUIScreenSetupCleanupStrategy(a1, a2);
  *result = &off_26E478C;
  return result;
}
