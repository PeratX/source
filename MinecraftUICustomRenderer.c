

void __fastcall MinecraftUICustomRenderer::~MinecraftUICustomRenderer(MinecraftUICustomRenderer *this)
{
  MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
}


void __fastcall MinecraftUICustomRenderer::~MinecraftUICustomRenderer(MinecraftUICustomRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)UICustomRenderer::~UICustomRenderer(this);
  j_j_j__ZdlPv_3(v1);
}


_QWORD *__fastcall MinecraftUICustomRenderer::MinecraftUICustomRenderer(_QWORD *a1)
{
  _QWORD *result; // r0@1

  result = UICustomRenderer::UICustomRenderer(a1);
  *(_DWORD *)result = &off_26D6CDC;
  return result;
}
