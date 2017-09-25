

void __fastcall MinecraftGraphics::~MinecraftGraphics(MinecraftGraphics *this)
{
  MinecraftGraphics::~MinecraftGraphics(this);
}


AppPlatformListener *__fastcall MinecraftGraphics::MinecraftGraphics(AppPlatformListener *a1)
{
  AppPlatformListener *v1; // r4@1

  v1 = a1;
  AppPlatformListener::AppPlatformListener(a1);
  *(_DWORD *)v1 = &off_26DCC04;
  AppPlatformListener::initListener(v1, -3.4028e38);
  return v1;
}


void __fastcall MinecraftGraphics::~MinecraftGraphics(MinecraftGraphics *this)
{
  AppPlatformListener *v1; // r0@1

  v1 = AppPlatformListener::~AppPlatformListener(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall MinecraftGraphics::onAppSuspended(MinecraftGraphics *this)
{
  mce::RenderContext *v1; // r0@1

  v1 = (mce::RenderContext *)mce::RenderContextImmediate::get(this);
  return j_j_j__ZN3mce13RenderContext5flushEv(v1);
}
