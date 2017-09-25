

MinecraftUICustomRenderer *__fastcall HudProgressRenderer::HudProgressRenderer(MinecraftUICustomRenderer *a1)
{
  MinecraftUICustomRenderer *v1; // r4@1

  v1 = a1;
  MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)v1 = &off_26E0450;
  *((_DWORD *)v1 + 2) = 0;
  mce::Mesh::Mesh((MinecraftUICustomRenderer *)((char *)v1 + 12));
  mce::Mesh::Mesh((MinecraftUICustomRenderer *)((char *)v1 + 112));
  return v1;
}


int __fastcall HudProgressRenderer::_buildOuterFeedbackCircle(HudProgressRenderer *this, Tessellator *a2, ClientInstance *a3, int a4, float a5, float a6)
{
  Tessellator *v6; // r10@1
  ClientInstance *v8; // r8@1
  float v10; // r1@1
  float v19; // r1@3
  float v21; // r1@3
  float v23; // r1@3
  int v24; // r0@3
  GuiData *v34; // r0@4
  char *v35; // r5@4
  char v37; // [sp+4h] [bp-BCh]@4

  v6 = a2;
  _R9 = a4;
  v8 = a3;
  _R4 = 0;
  Tessellator::begin(a2, 4 * a4, 0);
  __asm
  {
    VMOV            S0, R9
    VCVT.F32.S32    S0, S0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VLDR            S18, [SP,#0xC0+arg_4]
      VLDR            S20, [SP,#0xC0+arg_0]
    }
    _R0 = &mce::Math::TAU;
      VLDR            S2, [R0]
      VDIV.F32        S16, S2, S0
    do
      __asm
      {
        VMOV            S0, R4
        VCVT.F32.S32    S0, S0
        VMUL.F32        S0, S0, S16
        VMOV            R7, S0
        VADD.F32        S22, S0, S16
      }
      _R0 = mce::Math::cos(_R7, v10);
        VMOV            R5, S22
        VMOV            S22, R0
      _R6 = mce::Math::cos(_R5, v19);
      _R0 = mce::Math::sin(_R7, v21);
      __asm { VMOV            S24, R0 }
      v24 = mce::Math::sin(_R5, v23);
      __asm { VMUL.F32        S0, S22, S18 }
      _R5 = v24;
        VMUL.F32        S2, S24, S18
        VMOV            R1, S0
        VMOV            R2, S2
      Tessellator::vertex(v6, _R1, _R2, 0.0);
        VMOV            S26, R6
        VMOV            S28, R5
        VMUL.F32        S0, S26, S18
        VMUL.F32        S2, S28, S18
        VMUL.F32        S0, S26, S20
        VMUL.F32        S2, S28, S20
        VMUL.F32        S0, S22, S20
        VMUL.F32        S2, S24, S20
      ++_R4;
    while ( _R9 != _R4 );
  v34 = (GuiData *)ClientInstance::getGuiData(v8);
  v35 = GuiData::getRcFeedbackOuter(v34);
  Tessellator::end((Tessellator *)&v37, (const char *)v6, 0, 0);
  mce::Mesh::operator=((int)v35, (int)&v37);
  return mce::Mesh::~Mesh((mce::Mesh *)&v37);
}


void __fastcall HudProgressRenderer::~HudProgressRenderer(HudProgressRenderer *this)
{
  MinecraftUICustomRenderer *v1; // r4@1
  mce::Mesh *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E0450;
  v2 = (HudProgressRenderer *)((char *)this + 12);
  mce::Mesh::~Mesh((HudProgressRenderer *)((char *)this + 112));
  mce::Mesh::~Mesh(v2);
  MinecraftUICustomRenderer::~MinecraftUICustomRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall HudProgressRenderer::_buildFeedbackCircle(HudProgressRenderer *this, Tessellator *a2, ClientInstance *a3)
{
  ClientInstance *v3; // r4@1
  Tessellator *v4; // r5@1
  void *v5; // r0@2
  HudProgressRenderer *v11; // r0@6
  float v12; // ST00_4@6
  float v14; // [sp+0h] [bp-20h]@0
  float v15; // [sp+4h] [bp-1Ch]@0

  v3 = a3;
  v4 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v5 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v5 = &ServiceLocator<AppPlatform>::mDefaultService;
  _R0 = (HudProgressRenderer *)(*(int (**)(void))(**(_DWORD **)v5 + 344))();
  __asm
  {
    VLDR            S0, =3.9996
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VLDR            S2, =40.0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S2, S0 }
    VLDR            S0, =0.95
    VSTR            S2, [SP,#0x20+var_20]
    VMUL.F32        S16, S2, S0
    VSTR            S16, [SP,#0x20+var_1C]
  v11 = (HudProgressRenderer *)HudProgressRenderer::_buildOuterFeedbackCircle(_R0, v4, v3, 24, v14, v15);
  __asm { VSTR            S16, [SP,#0x20+var_20] }
  return HudProgressRenderer::_buildInnerFeedbackCircle(v11, v4, v3, 24, v12);
}


int __fastcall HudProgressRenderer::clone(HudProgressRenderer *this)
{
  HudProgressRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI19HudProgressRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


void __fastcall HudProgressRenderer::~HudProgressRenderer(HudProgressRenderer *this)
{
  HudProgressRenderer::~HudProgressRenderer(this);
}


int __fastcall HudProgressRenderer::~HudProgressRenderer(HudProgressRenderer *this)
{
  MinecraftUICustomRenderer *v1; // r4@1
  mce::Mesh *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E0450;
  v2 = (HudProgressRenderer *)((char *)this + 12);
  mce::Mesh::~Mesh((HudProgressRenderer *)((char *)this + 112));
  mce::Mesh::~Mesh(v2);
  return j_j_j__ZN25MinecraftUICustomRendererD2Ev_0(v1);
}


signed int __fastcall HudProgressRenderer::render(HudProgressRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  ClientInstance *v6; // r5@1
  HudProgressRenderer *v7; // r7@1
  UIControl *v8; // r4@1
  MinecraftUIRenderContext *v9; // r6@1
  GuiData *v10; // r0@1
  int v11; // r3@1
  signed int result; // r0@1
  int v13; // [sp+0h] [bp-30h]@0
  char v14; // [sp+Ch] [bp-24h]@2

  v6 = a3;
  v7 = this;
  v8 = a4;
  v9 = a2;
  v10 = (GuiData *)ClientInstance::getGuiData(a3);
  GuiData::getScreenSizeData(v10);
  result = HudProgressRenderer::_renderProgressIndicator(v7, v9, v6, v11, v13, 1.0);
  if ( result == 1 )
  {
    UIControl::getAABB((UIControl *)&v14, (int)v8);
    result = RectangleArea::operator=((int)a6, (int)&v14);
  }
  return result;
}


int __fastcall HudProgressRenderer::_buildInnerFeedbackCircle(HudProgressRenderer *this, Tessellator *a2, ClientInstance *a3, int a4, float a5)
{
  Tessellator *v5; // r4@1
  ClientInstance *v7; // r8@1
  float v8; // r1@1
  float v17; // r1@3
  signed int v21; // r7@5
  GuiData *v22; // r0@9
  char *v23; // r5@9
  char v25; // [sp+4h] [bp-9Ch]@9

  v5 = a2;
  _R6 = a4;
  v7 = a3;
  Tessellator::begin((int)a2, 2, a4 + 2, 0);
  Tessellator::vertex(v5, 0.0, 0.0, 0.0);
  __asm
  {
    VMOV            S0, R6
    VCVT.F32.S32    S0, S0
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    Tessellator::beginIndices(v5, 0);
  else
    _R5 = 1;
    __asm { VLDR            S18, [SP,#0xA0+arg_0] }
    _R0 = &mce::Math::TAU;
    __asm
    {
      VLDR            S2, [R0]
      VDIV.F32        S16, S2, S0
    }
    do
      --_R5;
      __asm
      {
        VMOV            S0, R5
        VCVT.F32.S32    S0, S0
        VMUL.F32        S0, S0, S16
        VMOV            R7, S0
      }
      _R0 = mce::Math::cos(_R7, v8);
      __asm { VMOV            S20, R0 }
      _R0 = mce::Math::sin(_R7, v17);
        VMOV            S0, R0
        VMUL.F32        S2, S20, S18
        VMUL.F32        S0, S0, S18
        VMOV            R1, S2
        VMOV            R2, S0
      Tessellator::vertex(v5, _R1, _R2, 0.0);
    while ( _R6 + _R5 );
    if ( _R6 >= 0 )
      v21 = -1;
      do
        Tessellator::triangle(v5, 0, v21 + 2, (v21 + 2) % (_R6 + 1) + 1);
        ++v21;
      while ( _R6 != v21 );
  v22 = (GuiData *)ClientInstance::getGuiData(v7);
  v23 = GuiData::getRcFeedbackInner(v22);
  Tessellator::end((Tessellator *)&v25, (const char *)v5, 0, 0);
  mce::Mesh::operator=((int)v23, (int)&v25);
  return mce::Mesh::~Mesh((mce::Mesh *)&v25);
}


signed int __fastcall HudProgressRenderer::_renderProgressIndicator(HudProgressRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, int a4, int a5, float a6)
{
  ClientInstance *v6; // r6@1
  MinecraftUIRenderContext *v8; // r4@1
  Options *v9; // r0@1
  signed int result; // r0@2
  int v11; // r10@3
  GuiData *v12; // r8@3
  Player *v13; // r0@3
  int v14; // r4@3
  int v15; // r5@3
  Player *v16; // r0@3
  int v17; // r7@3
  ClientInputHandler *v18; // r0@3
  GuiData *v20; // r0@7
  int v30; // r0@7
  float v31; // r2@7
  int v35; // r0@13
  GuiData *v37; // r0@13
  char *v38; // r0@13
  Tessellator *v39; // r5@14
  void *v40; // r0@15
  HudProgressRenderer *v42; // r0@19
  float v43; // ST00_4@19
  Level *v44; // r0@23
  int v45; // r1@23
  ShaderColor *v46; // r0@23
  int v47; // r0@28
  ShaderColor *v49; // r0@28
  GuiData *v50; // r0@28
  char *v51; // r7@28
  char *v52; // r0@28
  GuiData *v54; // r0@28
  char *v55; // r5@28
  char *v56; // r0@28
  GuiData *v57; // r0@30
  char *v58; // r5@30
  char *v59; // r0@30
  float v60; // [sp+0h] [bp-78h]@0
  float v61; // [sp+4h] [bp-74h]@0
  int v62; // [sp+8h] [bp-70h]@28
  signed int v63; // [sp+Ch] [bp-6Ch]@28
  int v64; // [sp+10h] [bp-68h]@28
  int v65; // [sp+18h] [bp-60h]@26
  signed int v66; // [sp+1Ch] [bp-5Ch]@26
  int v67; // [sp+20h] [bp-58h]@26
  int v68; // [sp+28h] [bp-50h]@29
  signed int v69; // [sp+2Ch] [bp-4Ch]@29
  int v70; // [sp+30h] [bp-48h]@29
  char v71; // [sp+38h] [bp-40h]@7

  v6 = a3;
  _R11 = this;
  v8 = a2;
  v9 = (Options *)ClientInstance::getOptions(a3);
  if ( Options::getHideHud(v9) )
  {
    result = 0;
  }
  else
    v11 = MinecraftUIRenderContext::getScreenContext(v8);
    v12 = *(GuiData **)(v11 + 24);
    v13 = (Player *)ClientInstance::getLocalPlayer(v6);
    v14 = *(_DWORD *)Player::getSelectedItem(v13);
    v15 = Item::mBow;
    v16 = (Player *)ClientInstance::getLocalPlayer(v6);
    v17 = *(_DWORD *)Player::getItemInUse(v16);
    v18 = (ClientInputHandler *)ClientInstance::getInput(v6);
    if ( ClientInputHandler::useFreeformPickDirection(v18) == 1 )
    {
      _ZF = v14 == v15;
      if ( v14 == v15 )
        _ZF = v14 == v17;
      if ( _ZF )
      {
        result = 0;
      }
      else
        MatrixStack::push((MatrixStack *)&v71, *(_DWORD *)(v11 + 16) + 16);
        v20 = (GuiData *)ClientInstance::getGuiData(v6);
        _R5 = GuiData::getInvGuiScale(v20);
        _R0 = GuiData::getPointerX(v12);
        __asm
        {
          VMOV            S0, R0
          VCVT.F32.S32    S18, S0
        }
        _R4 = GuiData::getPointerY(v12);
        _R0 = MatrixStack::MatrixStackRef::operator->((int)&v71);
          VMOV            S2, R4
          VMOV            S16, R5
          VCVT.F32.S32    S2, S2
          VLDR            S6, [R0,#8]
          VMUL.F32        S0, S18, S16
          VLDR            S8, [R0,#0xC]
          VLDR            S10, [R0,#0x10]
          VLDR            S12, [R0,#0x14]
          VLDR            S14, [R0,#0x18]
          VLDR            S1, [R0,#0x1C]
          VLDMIA          R0, {S3-S4}
          VMUL.F32        S2, S2, S16
          VMUL.F32        S4, S4, S0
          VMUL.F32        S3, S3, S0
          VMUL.F32        S6, S6, S0
          VMUL.F32        S0, S8, S0
          VMUL.F32        S12, S12, S2
          VMUL.F32        S10, S10, S2
          VMUL.F32        S14, S14, S2
          VMUL.F32        S2, S1, S2
          VADD.F32        S4, S12, S4
          VLDR            S12, [R0,#0x38]
          VADD.F32        S8, S10, S3
          VLDR            S10, [R0,#0x34]
          VADD.F32        S6, S14, S6
          VLDR            S14, [R0,#0x3C]
          VADD.F32        S0, S2, S0
          VLDR            S2, [R0,#0x30]
          VADD.F32        S4, S4, S10
          VADD.F32        S2, S8, S2
          VADD.F32        S6, S6, S12
          VADD.F32        S0, S0, S14
          VSTR            S2, [R0,#0x30]
          VSTR            S4, [R0,#0x34]
          VSTR            S6, [R0,#0x38]
          VSTR            S0, [R0,#0x3C]
          VMOV.F32        S0, #3.5
          VLDR            S2, [R0]
          VMUL.F32        S0, S16, S0
          VMUL.F32        S2, S2, S0
          VSTR            S2, [R0]
          VLDR            S2, [R0,#4]
          VSTR            S2, [R0,#4]
          VLDR            S2, [R0,#8]
          VSTR            S2, [R0,#8]
          VLDR            S2, [R0,#0xC]
          VSTR            S2, [R0,#0xC]
          VLDR            S2, [R0,#0x10]
          VSTR            S2, [R0,#0x10]
          VLDR            S2, [R0,#0x14]
          VSTR            S2, [R0,#0x14]
          VLDR            S2, [R0,#0x18]
          VSTR            S2, [R0,#0x18]
          VLDR            S2, [R0,#0x1C]
          VSTR            S2, [R0,#0x1C]
          VLDR            S2, [R0,#0x20]
          VSTR            S2, [R0,#0x20]
          VLDR            S2, [R0,#0x24]
          VSTR            S2, [R0,#0x24]
          VLDR            S2, [R0,#0x28]
          VSTR            S2, [R0,#0x28]
          VLDR            S2, [R0,#0x2C]
          VMUL.F32        S0, S2, S0
          VSTR            S0, [R0,#0x2C]
        v30 = GuiData::getShowProgress(v12);
        __asm { VLDR            S0, [R11,#8] }
        if ( v30 == 1 )
          __asm { VMOV            R0, S0 }
          _R0 = GuiData::calcNewAlpha(_R0, 1.0, v31);
        else
          _R0 = GuiData::calcNewAlpha(_R0, 0.0, v31);
          VSTR            S0, [R11,#8]
        v35 = ClientInstance::getLocalPlayer(v6);
        _R9 = GameMode::getDestroyProgress(*(GameMode **)(v35 + 5172));
        v37 = (GuiData *)ClientInstance::getGuiData(v6);
        v38 = GuiData::getRcFeedbackOuter(v37);
        if ( !mce::Mesh::isValid((mce::Mesh *)v38) )
          v39 = *(Tessellator **)(v11 + 40);
          if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
            v40 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
          else
            v40 = &ServiceLocator<AppPlatform>::mDefaultService;
          _R0 = (HudProgressRenderer *)(*(int (**)(void))(**(_DWORD **)v40 + 344))();
          __asm
          {
            VMOV            S0, R0
            VLDR            S2, =3.9996
            VMUL.F32        S0, S0, S2
            VLDR            S2, =40.0
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _NF ^ _VF )
            __asm { VMOVLT.F32      S2, S0 }
            VLDR            S0, =0.95
            VMUL.F32        S16, S2, S0
            VSTR            S2, [SP,#0x78+var_78]
            VSTR            S16, [SP,#0x78+var_74]
          v42 = (HudProgressRenderer *)HudProgressRenderer::_buildOuterFeedbackCircle(_R0, v39, v6, 24, v60, v61);
          __asm { VSTR            S16, [SP,#0x78+var_78] }
          HudProgressRenderer::_buildInnerFeedbackCircle(v42, v39, v6, 24, v43);
          VMOV            S16, R9
          VLDR            S18, [R11,#4]
          VCMPE.F32       S16, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          goto LABEL_34;
          VLDR            S0, [R11,#8]
          VCMPE.F32       S0, #0.0
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_34:
            VCMPE.F32       S16, #0.0
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            v47 = ClientInstance::getLocalPlayer(v6);
            _R5 = GameMode::getOldDestroyProgress(*(GameMode **)(v47 + 5172));
            __asm
            {
              VLDR            S0, =0.8
              VLDR            S2, [R11,#8]
              VMUL.F32        S0, S18, S0
            }
            v49 = *(ShaderColor **)(v11 + 48);
            v62 = 1065353216;
            v63 = 1065353216;
            v64 = 1065353216;
              VMUL.F32        S0, S0, S2
              VSTR            S0, [SP,#0x78+var_64]
            ShaderColor::setColor(v49, (const Color *)&v62);
            v50 = (GuiData *)ClientInstance::getGuiData(v6);
            v51 = GuiData::getRcFeedbackOuter(v50);
            v52 = GuiData::getInvFillMat(v12);
            mce::Mesh::render((mce::Buffer *)v51, v11, (int)v52, 0, 0);
            _R0 = MatrixStack::MatrixStackRef::operator->((int)&v71);
              VMOV            S2, R5
              VLDR            S0, [SP,#0x78+arg_4]
              VSUB.F32        S4, S16, S2
              VMUL.F32        S0, S4, S0
              VMOV.F32        S4, #0.5
              VADD.F32        S0, S0, S2
              VLDR            S2, [R0]
              VMUL.F32        S0, S0, S4
              VADD.F32        S0, S0, S4
              VMUL.F32        S2, S2, S0
              VSTR            S2, [R0]
              VLDR            S2, [R0,#4]
              VSTR            S2, [R0,#4]
              VLDR            S2, [R0,#8]
              VSTR            S2, [R0,#8]
              VLDR            S2, [R0,#0xC]
              VSTR            S2, [R0,#0xC]
              VLDR            S2, [R0,#0x10]
              VSTR            S2, [R0,#0x10]
              VLDR            S2, [R0,#0x14]
              VSTR            S2, [R0,#0x14]
              VLDR            S2, [R0,#0x18]
              VSTR            S2, [R0,#0x18]
              VLDR            S2, [R0,#0x1C]
              VMUL.F32        S0, S2, S0
              VSTR            S0, [R0,#0x1C]
            v54 = (GuiData *)ClientInstance::getGuiData(v6);
            v55 = GuiData::getRcFeedbackInner(v54);
            v56 = GuiData::getInvFillMat(v12);
            mce::Mesh::render((mce::Buffer *)v55, v11, (int)v56, 0, 0);
          v44 = (Level *)ClientInstance::getLevel(v6);
          v45 = *(_DWORD *)Level::getHitResult(v44);
          v46 = *(ShaderColor **)(v11 + 48);
          __asm { VLDR            S0, [R11,#8] }
          if ( (v45 & 0xFFFFFFFE) == 2 )
              VLDR            S2, =0.4
              VMUL.F32        S4, S18, S2
              VCMPE.F32       S0, S2
              VMRS            APSR_nzcv, FPSCR
            if ( _NF ^ _VF )
              __asm { VMOVLT.F32      S2, S0 }
            v65 = 1065353216;
            v66 = 1065353216;
            v67 = 1065353216;
            __asm { VSTR            S2, [SP,#0x78+var_54] }
            ShaderColor::setColor(v46, (const Color *)&v65);
            __asm { VLDR            S2, =0.8 }
            v68 = 1065353216;
            v69 = 1065353216;
            __asm { VMUL.F32        S2, S18, S2 }
            v70 = 1065353216;
              VSTR            S0, [SP,#0x78+var_44]
            ShaderColor::setColor(v46, (const Color *)&v68);
          v57 = (GuiData *)ClientInstance::getGuiData(v6);
          v58 = GuiData::getRcFeedbackOuter(v57);
          v59 = GuiData::getInvFillMat(v12);
          mce::Mesh::render((mce::Buffer *)v58, v11, (int)v59, 0, 0);
        MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v71);
        result = 1;
    }
    else
      result = 0;
  return result;
}
