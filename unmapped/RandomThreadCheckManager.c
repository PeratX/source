

void __fastcall RandomThreadCheckManager::~RandomThreadCheckManager(RandomThreadCheckManager *this)
{
  RandomThreadCheckManager::~RandomThreadCheckManager(this);
}


unsigned int *__fastcall RandomThreadCheckManager::onAppResumed(RandomThreadCheckManager *this)
{
  unsigned int *result; // r0@1
  unsigned int v2; // r1@2

  result = (unsigned int *)((char *)this + 8);
  __dmb();
  do
    v2 = __ldrex(result);
  while ( __strex(v2 + 1, result) );
  return result;
}


void __fastcall RandomThreadCheckManager::~RandomThreadCheckManager(RandomThreadCheckManager *this)
{
  AppPlatformListener *v1; // r0@1

  v1 = AppPlatformListener::~AppPlatformListener(this);
  j_j_j__ZdlPv_3((void *)v1);
}
