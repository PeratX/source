

int __fastcall UIHoloCursorRenderer::render(UIHoloCursorRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  ClientInstance *v6; // r5@1
  MinecraftUIRenderContext *v7; // r4@1
  int result; // r0@1
  int v9; // r5@4
  int v10; // r1@4

  v6 = a3;
  v7 = a2;
  result = ClientInstance::isHoloCursorNeeded(a3);
  if ( result == 1 )
  {
    result = *(_BYTE *)(ClientInstance::getGameRenderer(v6) + 812);
    if ( result )
    {
      result = ClientInstance::getHolosceneRenderer(v6);
      if ( result )
      {
        v9 = ClientInstance::getHolosceneRenderer(v6);
        v10 = MinecraftUIRenderContext::getScreenContext(v7);
        result = j_j_j__ZN17HolosceneRenderer18renderHoloUICursorER13ScreenContextb(v9, v10);
      }
    }
  }
  return result;
}


void __fastcall UIHoloCursorRenderer::~UIHoloCursorRenderer(UIHoloCursorRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


int __fastcall UIHoloCursorRenderer::clone(UIHoloCursorRenderer *this, int a2)
{
  int v2; // r4@1
  UIHoloCursorRenderer *v3; // r5@1
  int v4; // r0@1
  int result; // r0@1
  int v6; // [sp+4h] [bp-1Ch]@1
  int v7; // [sp+8h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  j__ZNSt12__shared_ptrI20UIHoloCursorRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v6);
  v4 = v6;
  *(_DWORD *)(v6 + 4) = *(_DWORD *)(v2 + 4);
  *(_DWORD *)v3 = v4;
  result = v7;
  *((_DWORD *)v3 + 1) = v7;
  return result;
}


void __fastcall UIHoloCursorRenderer::~UIHoloCursorRenderer(UIHoloCursorRenderer *this)
{
  UIHoloCursorRenderer::~UIHoloCursorRenderer(this);
}
