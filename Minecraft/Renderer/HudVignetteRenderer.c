

int __fastcall HudVignetteRenderer::~HudVignetteRenderer(HudVignetteRenderer *this)
{
  MinecraftUICustomRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E0490;
  mce::Mesh::~Mesh((HudVignetteRenderer *)((char *)this + 16));
  return j_j_j__ZN25MinecraftUICustomRendererD2Ev_0(v1);
}


MinecraftUICustomRenderer *__fastcall HudVignetteRenderer::HudVignetteRenderer(MinecraftUICustomRenderer *a1)
{
  MinecraftUICustomRenderer *v1; // r4@1

  v1 = a1;
  MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)v1 = &off_26E0490;
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  mce::Mesh::Mesh((MinecraftUICustomRenderer *)((char *)v1 + 16));
  return v1;
}


void __fastcall HudVignetteRenderer::~HudVignetteRenderer(HudVignetteRenderer *this)
{
  MinecraftUICustomRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E0490;
  mce::Mesh::~Mesh((HudVignetteRenderer *)((char *)this + 16));
  MinecraftUICustomRenderer::~MinecraftUICustomRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall HudVignetteRenderer::clone(HudVignetteRenderer *this)
{
  HudVignetteRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI19HudVignetteRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


int __fastcall HudVignetteRenderer::render(HudVignetteRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  ClientInstance *v6; // r5@1
  UIControl *v8; // r4@1
  MinecraftUIRenderContext *v9; // r8@1
  GuiData *v10; // r0@1
  Options *v16; // r0@1
  int result; // r0@1
  LevelRenderer *v21; // r0@5
  char *v22; // r0@5
  Json::Value *v24; // r6@9
  Json::Value *v25; // r6@12
  char v28; // [sp+8h] [bp-58h]@16

  v6 = a3;
  _R7 = this;
  v8 = a4;
  v9 = a2;
  v10 = (GuiData *)ClientInstance::getGuiData(a3);
  _R0 = GuiData::getScreenSizeData(v10);
  __asm
  {
    VLDR            S0, [R0,#0x10]
    VLDR            S2, [R0,#0x14]
    VCVTR.S32.F32   S16, S2
    VCVTR.S32.F32   S18, S0
  }
  v16 = (Options *)ClientInstance::getOptions(v6);
  result = Options::getFancyGraphics(v16);
  if ( result == 1 )
    result = ClientInstance::isARVRClient(v6);
    if ( !result )
    {
      __asm
      {
        VMOV            R9, S16
        VMOV            R10, S18
      }
      _R0 = ClientInstance::getCameraTargetEntity(v6);
        VLDR            S2, [R0,#0x4C]
        VLDR            S0, =0.016667
        VMOV.F32        S16, #1.0
        VLDR            S18, =0.0
        VMUL.F32        S20, S2, S0
        VLDR            S22, =0.7
        VMOV.F32        S0, S18
        VCMPE.F32       S20, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S0, S20 }
      __asm { VMUL.F32        S24, S0, S22 }
      v21 = (LevelRenderer *)ClientInstance::getLevelRenderer(v6);
      v22 = LevelRenderer::getLevelRendererPlayer(v21);
        VCMPE.F32       S20, S16
        __asm { VMOVGT.F32      S24, S22 }
      _R0 = (*(int (__fastcall **)(char *))(*(_DWORD *)v22 + 72))(v22);
        VMOV            S0, R0
        VLDR            S4, =0.95
        VADD.F32        S0, S0, S24
        VCMPE.F32       S0, S16
        __asm { VMOVGT.F32      S0, S16 }
        VLDR            S2, [R7,#0xC]
        VSUB.F32        S0, S0, S2
        VMUL.F32        S0, S0, S4
        VADD.F32        S0, S0, S2
        VSTR            S0, [R7,#0xC]
      v24 = (Json::Value *)(UIControl::getPropertyBag(v8) + 8);
      if ( PropertyBag::has(v24, 16, "opacity_override") == 1 )
        if ( !Json::Value::isNull(v24) && Json::Value::isObject(v24) == 1 )
        {
          v25 = (Json::Value *)Json::Value::operator[]((int)v24, "opacity_override");
          if ( Json::Value::isNumeric(v25) == 1 )
          {
            _R0 = Json::Value::asFloat(v25, 0.0);
            __asm { VMOV            S18, R0 }
          }
        }
      else
        __asm { VLDR            S18, [R7,#0xC] }
        VSUB.F32        S0, S16, S18
        VMOV            R3, S0
      result = HudVignetteRenderer::_renderVignette(_R7, v9, v6, _R3, __PAIR__(_R9, _R10));
      if ( result == 1 )
        UIControl::getAABB((UIControl *)&v28, (int)v8);
        result = RectangleArea::operator=((int)a6, (int)&v28);
    }
  return result;
}


signed int __fastcall HudVignetteRenderer::_renderVignette(HudVignetteRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, float _R3, __int64 a5)
{
  ClientInstance *v10; // r5@1
  int v11; // r0@1
  int v12; // r11@1
  Tessellator *v13; // r7@1
  GuiData *v14; // r0@1
  char *v15; // r0@1
  mce::Buffer *v16; // r9@1
  void *v19; // r0@5
  _DWORD *v20; // r0@5
  signed int result; // r0@5
  char v22; // [sp+4h] [bp-BCh]@5
  char v23; // [sp+Ch] [bp-B4h]@4
  int v24; // [sp+70h] [bp-50h]@4
  int v25; // [sp+74h] [bp-4Ch]@4
  int v26; // [sp+78h] [bp-48h]@4

  __asm
  {
    VLDR            S0, =0.9
    VMOV            S2, R3
  }
  _R8 = this;
  v10 = a3;
  __asm { VMUL.F32        S16, S2, S0 }
  v11 = MinecraftUIRenderContext::getScreenContext(a2);
  v12 = v11;
  v13 = *(Tessellator **)(v11 + 40);
  v14 = (GuiData *)ClientInstance::getGuiData(v10);
    VLDR            D9, =0.02
    VCVT.F64.F32    D10, S16
  v15 = GuiData::getVignette(v14);
  __asm { VCMPE.F64       D10, D9 }
  v16 = (mce::Buffer *)v15;
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = 0;
  else
    if ( mce::Mesh::isValid((mce::Mesh *)v15) != 1 )
      goto LABEL_9;
    __asm
    {
      VLDR            S0, [R8,#8]
      VLDR            S2, =0.02
      VSUB.F32        S0, S0, S16
      VABS.F32        S0, S0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_9:
      Tessellator::begin((int)v13, 2, 12, 0);
      v24 = 0;
      v25 = 0;
      v26 = 0;
      __asm { VSTR            S16, [SP,#0xC0+var_44] }
      Tessellator::color(v13, (const Color *)&v24);
      Tessellator::vertex(v13, 0.0, 0.0, 0.0);
      Tessellator::vertex(v13, 0.0, 1.0, 0.0);
      Tessellator::vertex(v13, 1.0, 1.0, 0.0);
      Tessellator::vertex(v13, 1.0, 0.0, 0.0);
      Tessellator::color(v13, (const Color *)&Color::NIL);
      Tessellator::vertex(v13, 0.2, 0.2, 0.0);
      Tessellator::vertex(v13, 0.1, 0.5, 0.0);
      Tessellator::vertex(v13, 0.2, 0.8, 0.0);
      Tessellator::vertex(v13, 0.5, 0.9, 0.0);
      Tessellator::vertex(v13, 0.8, 0.8, 0.0);
      Tessellator::vertex(v13, 0.9, 0.5, 0.0);
      Tessellator::vertex(v13, 0.8, 0.2, 0.0);
      Tessellator::vertex(v13, 0.5, 0.1, 0.0);
      Tessellator::beginIndices(v13, 0);
      Tessellator::triangle(v13, 0, 5u, 4u);
      Tessellator::triangle(v13, 0, 1u, 5u);
      Tessellator::triangle(v13, 5u, 1u, 6u);
      Tessellator::triangle(v13, 6u, 1u, 7u);
      Tessellator::triangle(v13, 7u, 1u, 2u);
      Tessellator::triangle(v13, 8u, 7u, 2u);
      Tessellator::triangle(v13, 9u, 8u, 2u);
      Tessellator::triangle(v13, 3u, 9u, 2u);
      Tessellator::triangle(v13, 3u, 0xAu, 9u);
      Tessellator::triangle(v13, 3u, 0xBu, 0xAu);
      Tessellator::triangle(v13, 0, 0xBu, 3u);
      Tessellator::triangle(v13, 0, 4u, 0xBu);
      Tessellator::end((Tessellator *)&v23, (const char *)v13, 0, 0);
      mce::Mesh::operator=((int)v16, (int)&v23);
      mce::Mesh::~Mesh((mce::Mesh *)&v23);
      __asm { VSTR            S16, [R8,#8] }
    MatrixStack::push((MatrixStack *)&v22, *(_DWORD *)(v12 + 16) + 16);
    _R0 = (ScreenRenderer *)MatrixStack::MatrixStackRef::operator->((int)&v22);
    _KR00_8 = a5;
      VMOV            S0, R2
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R0]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R0]
      VLDR            S2, [R0,#4]
      VSTR            S2, [R0,#4]
      VLDR            S2, [R0,#8]
      VSTR            S2, [R0,#8]
      VLDR            S2, [R0,#0xC]
      VMUL.F32        S0, S2, S0
      VMOV            S2, R1
      VCVT.F32.S32    S2, S2
      VSTR            S0, [R0,#0xC]
      VLDR            S0, [R0,#0x10]
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R0,#0x10]
      VLDR            S0, [R0,#0x14]
      VSTR            S0, [R0,#0x14]
      VLDR            S0, [R0,#0x18]
      VSTR            S0, [R0,#0x18]
      VLDR            S0, [R0,#0x1C]
      VSTR            S0, [R0,#0x1C]
    v19 = ScreenRenderer::singleton(_R0);
    v20 = ScreenRenderer::getMaterial((int)v19, 2);
    mce::Mesh::render(v16, v12, (int)v20, 0, 0);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v22);
    result = 1;
  return result;
}


void __fastcall HudVignetteRenderer::~HudVignetteRenderer(HudVignetteRenderer *this)
{
  HudVignetteRenderer::~HudVignetteRenderer(this);
}
