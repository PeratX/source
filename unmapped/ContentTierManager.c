

signed int *__fastcall ContentTierManager::ContentTierManager(signed int *a1)
{
  signed int *v1; // r4@1
  AppPlatform **v2; // r0@2
  __int64 v3; // r0@4
  signed int v4; // r0@5

  v1 = a1;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v3 = AppPlatform::getTotalMemory(*v2);
  if ( v3 )
    v4 = v3 / 0x10000000;
    v4 = 0x7FFFFFFF;
  *v1 = v4;
  return v1;
}


signed int __fastcall ContentTierManager::_calculateMemoryTier(ContentTierManager *this)
{
  ContentTierManager *v1; // r4@1
  AppPlatform **v2; // r0@2
  __int64 v3; // r0@4
  signed int result; // r0@5

  v1 = this;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v3 = AppPlatform::getTotalMemory(*v2);
  if ( v3 )
  {
    result = v3 / 0x10000000;
    *(_DWORD *)v1 = result;
  }
    result = 0x7FFFFFFF;
    *(_DWORD *)v1 = 0x7FFFFFFF;
  return result;
}


int __fastcall ContentTierManager::getContentTierInfo(ContentTierManager *this)
{
  return *(_DWORD *)this;
}
