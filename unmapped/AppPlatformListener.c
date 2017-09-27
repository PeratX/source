

AppPlatformListener *__fastcall AppPlatformListener::~AppPlatformListener(AppPlatformListener *this)
{
  AppPlatformListener *v1; // r4@1
  AppPlatform *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E8E2C;
  v2 = (AppPlatform *)*((_DWORD *)this + 1);
  if ( v2 )
    AppPlatform::removeListener(v2, v1);
  return v1;
}


int __fastcall AppPlatformListener::initListener(AppPlatformListener *this, float a2)
{
  AppPlatformListener *v2; // r5@1
  float v3; // r4@1
  AppPlatform **v4; // r0@2
  AppPlatform *v5; // r0@4

  v2 = this;
  v3 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v5 = *v4;
  *((_DWORD *)v2 + 1) = v5;
  return j_j_j__ZN11AppPlatform11addListenerEP19AppPlatformListenerf(v5, v2, v3);
}


void __fastcall AppPlatformListener::~AppPlatformListener(AppPlatformListener *this)
{
  AppPlatformListener::~AppPlatformListener(this);
}


AppPlatform *__fastcall AppPlatformListener::terminate(AppPlatformListener *this)
{
  AppPlatformListener *v1; // r4@1
  AppPlatform *result; // r0@1

  v1 = this;
  (*(void (**)(void))(*(_DWORD *)this + 36))();
  result = (AppPlatform *)*((_DWORD *)v1 + 1);
  if ( result )
  {
    AppPlatform::removeListener(result, v1);
    result = 0;
    *((_DWORD *)v1 + 1) = 0;
  }
  return result;
}


_QWORD *__fastcall AppPlatformListener::AppPlatformListener(_QWORD *result)
{
  *result = (unsigned int)&off_26E8E2C;
  return result;
}


_QWORD *__fastcall AppPlatformListener::AppPlatformListener(_QWORD *a1)
{
  _QWORD *v1; // r4@1
  AppPlatform **v2; // r0@2
  AppPlatform *v3; // r0@4

  v1 = a1;
  *a1 = (unsigned int)&off_26E8E2C;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v3 = *v2;
  *((_DWORD *)v1 + 1) = v3;
  AppPlatform::addListener(v3, (AppPlatformListener *)v1, 1.0);
  return v1;
}


void __fastcall AppPlatformListener::~AppPlatformListener(AppPlatformListener *this)
{
  AppPlatformListener *v1; // r4@1
  AppPlatform *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E8E2C;
  v2 = (AppPlatform *)*((_DWORD *)this + 1);
  if ( v2 )
    AppPlatform::removeListener(v2, v1);
  j_j_j__ZdlPv_5((void *)v1);
}
