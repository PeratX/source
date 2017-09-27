

RakNet *__fastcall DebugScreenRenderer::render(DebugScreenRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  ClientInstance *v6; // r4@1
  MinecraftUIRenderContext *v7; // r5@1
  int v8; // r6@1
  int v9; // r1@1

  v6 = a3;
  v7 = a2;
  v8 = ClientInstance::getGameRenderer(a3);
  v9 = MinecraftUIRenderContext::getScreenContext(v7);
  return j_j_j__ZN12GameRenderer17renderDebugScreenER13ScreenContextR14ClientInstanceR13RectangleArea(v8, v9, (int)v6);
}


void __fastcall DebugScreenRenderer::~DebugScreenRenderer(DebugScreenRenderer *this)
{
  DebugScreenRenderer::~DebugScreenRenderer(this);
}


void __fastcall DebugScreenRenderer::~DebugScreenRenderer(DebugScreenRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


int __fastcall DebugScreenRenderer::clone(DebugScreenRenderer *this, int a2)
{
  int v2; // r4@1
  DebugScreenRenderer *v3; // r5@1
  int v4; // r0@1
  int result; // r0@1
  int v6; // [sp+4h] [bp-1Ch]@1
  int v7; // [sp+8h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  j__ZNSt12__shared_ptrI19DebugScreenRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v6);
  v4 = v6;
  *(_DWORD *)(v6 + 4) = *(_DWORD *)(v2 + 4);
  *(_DWORD *)v3 = v4;
  result = v7;
  *((_DWORD *)v3 + 1) = v7;
  return result;
}
