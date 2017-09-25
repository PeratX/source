

int __fastcall RenderableComponent::RenderableComponent(UIComponent *a1, UIControl *a2)
{
  int result; // r0@1

  result = UIComponent::UIComponent(a1, a2);
  *(_DWORD *)result = &off_26DFF54;
  *(_DWORD *)(result + 8) = 1065353216;
  return result;
}


void __fastcall RenderableComponent::setPropagatedAlpha(RenderableComponent *this, float _R1)
{
  RenderableComponent::setPropagatedAlpha(this, _R1);
}


void __fastcall RenderableComponent::~RenderableComponent(RenderableComponent *this)
{
  RenderableComponent::~RenderableComponent(this);
}


void __fastcall RenderableComponent::~RenderableComponent(RenderableComponent *this)
{
  void *v1; // r0@1

  v1 = (void *)UIComponent::~UIComponent(this);
  j_j_j__ZdlPv_4(v1);
}


void __fastcall RenderableComponent::setPropagatedAlpha(RenderableComponent *this, float _R1)
{
  __asm
  {
    VMOV            S2, R1
    VLDR            S0, =0.0
    VMOV.F32        S4, #1.0
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, S4
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VSTR            S0, [R0,#8] }
}


signed int __fastcall RenderableComponent::isRenderableComponent(RenderableComponent *this)
{
  return 1;
}
