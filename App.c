

int __fastcall App::saveState(App *this, void **a2, int *a3)
{
  return 0;
}


int __fastcall App::quit(int result)
{
  *(_BYTE *)(result + 9) = 1;
  return result;
}


void __fastcall App::~App(App *this)
{
  AppPlatformListener *v1; // r0@1

  v1 = AppPlatformListener::~AppPlatformListener(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall App::~App(App *this)
{
  App::~App(this);
}


int __fastcall App::init(int a1, int a2)
{
  int v2; // r4@1

  v2 = a1;
  *(_DWORD *)(a1 + 12) = a2;
  (*(void (**)(void))(*(_DWORD *)a1 + 112))();
  *(_BYTE *)(v2 + 8) = 1;
  return j_j_j__ZN19AppPlatformListener12initListenerEf_0((AppPlatformListener *)v2, 0.0);
}


_QWORD *__fastcall App::App(_QWORD *a1)
{
  _QWORD *result; // r0@1

  result = AppPlatformListener::AppPlatformListener(a1);
  *(_DWORD *)result = &off_26E8DB0;
  *((_BYTE *)result + 8) = 0;
  *((_BYTE *)result + 9) = 0;
  *((_DWORD *)result + 3) = 0;
  return result;
}


signed int __fastcall App::useTouchscreen(App *this)
{
  return 1;
}


int __fastcall App::changeContext(int a1, int a2)
{
  AppPlatform **v2; // r0@2

  *(_DWORD *)(a1 + 12) = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  return j_j_j__ZN11AppPlatform15_fireAppResumedEv_0(*v2);
}
