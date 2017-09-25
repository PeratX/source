

int __fastcall BackgroundRenderer::render(BackgroundRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  ClientInstance *v6; // r4@1
  MinecraftUIRenderContext *v7; // r5@1
  GuiData *v8; // r0@1
  void *v10; // r7@1
  int v11; // r0@1
  GuiData *v16; // r0@1
  float v18; // ST00_4@1
  float v20; // [sp+0h] [bp-30h]@0
  float v21; // [sp+4h] [bp-2Ch]@0
  int v22; // [sp+Ch] [bp-24h]@1
  int v23; // [sp+10h] [bp-20h]@1
  int v24; // [sp+14h] [bp-1Ch]@1
  int v25; // [sp+18h] [bp-18h]@1

  v6 = a3;
  v7 = a2;
  v8 = (GuiData *)ClientInstance::getGuiData(a3);
  _R6 = GuiData::getScreenSizeData(v8);
  v10 = ScreenRenderer::singleton((ScreenRenderer *)_R6);
  v11 = MinecraftUIRenderContext::getScreenContext(v7);
  __asm
  {
    VLDR            S0, [R6,#8]
    VLDR            S2, [R6,#0xC]
  }
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 1056898816;
    VSTR            S2, [SP,#0x30+var_2C]
    VSTR            S0, [SP,#0x30+var_30]
  ScreenRenderer::fill(*(float *)&v10, *(float *)&v11, 0, 0.0, v20, v21, (const Color *)&v22);
  v16 = (GuiData *)ClientInstance::getGuiData(v6);
  _R0 = GuiData::getScreenSizeData(v16);
    VLDR            S0, [R0,#0x14]
  return RectangleArea::set(a6, 0.0, 0.0, *((float *)_R0 + 4), v18);
}


int __fastcall BackgroundRenderer::clone(BackgroundRenderer *this)
{
  BackgroundRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI18BackgroundRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


void __fastcall BackgroundRenderer::~BackgroundRenderer(BackgroundRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


_QWORD *__fastcall BackgroundRenderer::BackgroundRenderer(MinecraftUICustomRenderer *a1)
{
  _QWORD *result; // r0@1

  result = MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)result = &off_26DFFA4;
  return result;
}


void __fastcall BackgroundRenderer::~BackgroundRenderer(BackgroundRenderer *this)
{
  BackgroundRenderer::~BackgroundRenderer(this);
}
