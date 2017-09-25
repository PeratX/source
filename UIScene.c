

int __fastcall UIScene::_init(UIScene *this, int _R1, int _R2)
{
  float v8; // [sp+0h] [bp-10h]@1

  __asm
  {
    VMOV            S0, R1
    VMOV            S2, R2
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VSTR            S0, [SP,#0x10+var_10]
    VSTR            S2, [SP,#0x10+var_C]
  }
  return ScreenView::setSize(*((_DWORD *)this + 6), (int)&v8);
}


void __fastcall UIScene::handleTextChar(int a1, const void **a2, int a3, int a4)
{
  UIScene::handleTextChar(a1, a2, a3, a4);
}


BaseScreen *__fastcall UIScene::UIScene(BaseScreen *a1, int a2, unsigned int a3, int a4, int a5, int *a6, int a7, int a8, int *a9)
{
  int v9; // r5@1
  unsigned int v10; // r6@1
  int v11; // r7@1
  BaseScreen *v12; // r4@1

  v9 = a4;
  v10 = a3;
  v11 = a2;
  v12 = a1;
  BaseScreen::BaseScreen(a1);
  *(_DWORD *)v12 = &off_26D8F2C;
  *((_DWORD *)v12 + 5) = v11;
  std::make_unique<ScreenView,NameRegistry &,KeyboardManager &,std::shared_ptr<ScreenController> &,std::unique_ptr<VisualTree,std::default_delete<VisualTree>>,std::shared_ptr<UIControlFactory>,UIMeasureStrategy &,std::unique_ptr<LayoutManager,std::default_delete<LayoutManager>>>(
    (_DWORD *)v12 + 6,
    v10,
    v9,
    a5,
    a6,
    a7,
    a8,
    a9);
  return v12;
}


void __fastcall UIScene::handleButtonRelease(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, void *a12, int a13, int a14, int a15)
{
  UIScene::handleButtonRelease(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}


signed int __fastcall UIScene::_handlePointerLocation(int a1, int a2, int a3, int a4)
{
  return j_j_j__ZN10ScreenView21handlePointerLocationERKN3glm6detail5tvec2IfEEb11FocusImpact(
           *(_DWORD *)(a1 + 24),
           a2,
           a3,
           a4);
}


void __fastcall UIScene::handleDirection(int a1, int a2, int a3, int a4, int a5)
{
  ScreenView::handleDirection(*(_DWORD *)(a1 + 24), a2, a3, a4, a5);
}


int __fastcall UIScene::_setSize(int a1, int a2)
{
  int v2; // r0@1
  int v4; // [sp+0h] [bp-10h]@1
  int v5; // [sp+4h] [bp-Ch]@1

  v2 = *(_DWORD *)(a1 + 24);
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  return ScreenView::setSize(v2, (int)&v4);
}


void __fastcall UIScene::onFocusGained(UIScene *this)
{
  UIScene::onFocusGained(this);
}


void __fastcall UIScene::handleButtonPress(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, void *a12, int a13, int a14, int a15)
{
  j_j_j__ZN10ScreenView17handleButtonEventEs11ButtonState11FocusImpact(
    *(_DWORD *)(a1 + 24),
    a2,
    1,
    a3,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15);
}


void __fastcall UIScene::handleDirection(int a1, int a2, int a3, int a4, int a5)
{
  UIScene::handleDirection(a1, a2, a3, a4, a5);
}


signed int __fastcall UIScene::handlePointerLocation(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  GuiData *v6; // r7@1
  float v16; // [sp+0h] [bp-38h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (GuiData *)ClientInstance::getGuiData(*(ClientInstance **)(a1 + 20));
  _R0 = *(_WORD *)(v5 + 4);
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S16, S0
  }
  _R0 = GuiData::getInvGuiScale(v6);
  _R1 = *(_WORD *)(v5 + 6);
    VMOV            S20, R0
    VMOV            S0, R1
    VCVT.F32.S32    S18, S0
    VMUL.F32        S2, S16, S20
    VMUL.F32        S0, S18, S0
    VSTR            S2, [SP,#0x38+var_38]
    VSTR            S0, [SP,#0x38+var_34]
  return ScreenView::handlePointerLocation(*(_DWORD *)(v3 + 24), (int)&v16, *(_BYTE *)(v5 + 8), v4);
}


int __fastcall UIScene::handleCommandEvent(int a1)
{
  int v1; // r0@1

  v1 = *(_DWORD *)(a1 + 24);
  return j_j_j__ZN10ScreenView18handleCommandEventERK12VoiceCommand();
}


void __fastcall UIScene::handleButtonRelease(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, void *a12, int a13, int a14, int a15)
{
  j_j_j__ZN10ScreenView17handleButtonEventEs11ButtonState11FocusImpact(
    *(_DWORD *)(a1 + 24),
    a2,
    0,
    a3,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15);
}


void __fastcall UIScene::handleInputModeChanged(int a1, int a2)
{
  j_j_j__ZN10ScreenView22handleInputModeChangedE9InputMode(*(_DWORD *)(a1 + 24), a2);
}


void __fastcall UIScene::handleTextChar(int a1, const void **a2, int a3, int a4)
{
  j_j_j__ZN10ScreenView14handleTextCharERKSsb11FocusImpact(*(_DWORD *)(a1 + 24), a2, a3, a4);
}


void __fastcall UIScene::_handleButtonEvent(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, void *a12, int a13, int a14, int a15)
{
  j_j_j__ZN10ScreenView17handleButtonEventEs11ButtonState11FocusImpact(
    *(_DWORD *)(a1 + 24),
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15);
}


void __fastcall UIScene::handleRawInputEvent(int a1, int a2, char a3, char a4, char a5)
{
  ScreenView::handleRawInputEvent(*(ScreenView **)(a1 + 24), a2, a3, a4, a5);
}


void __fastcall UIScene::~UIScene(UIScene *this)
{
  UIScene *v1; // r4@1
  ScreenView *v2; // r0@1
  ScreenView *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_26D8F2C;
  v2 = (ScreenView *)*((_DWORD *)this + 6);
  if ( v2 )
  {
    v3 = ScreenView::~ScreenView(v2);
    operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 6) = 0;
  BaseScreen::~BaseScreen(v1);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall UIScene::~UIScene(UIScene *this)
{
  UIScene *v1; // r4@1
  ScreenView *v2; // r0@1
  ScreenView *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_26D8F2C;
  v2 = (ScreenView *)*((_DWORD *)this + 6);
  if ( v2 )
  {
    v3 = ScreenView::~ScreenView(v2);
    operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 6) = 0;
  return j_j_j__ZN10BaseScreenD2Ev(v1);
}


void __fastcall UIScene::handleRawInputEvent(int a1, int a2, char a3, char a4, char a5)
{
  UIScene::handleRawInputEvent(a1, a2, a3, a4, a5);
}


void __fastcall UIScene::handleHoloInputModeChanged(int a1, int a2)
{
  UIScene::handleHoloInputModeChanged(a1, a2);
}


void __fastcall UIScene::cacheOnDelete(UIScene *this, CachedScenes *a2)
{
  j_j_j__ZN10ScreenView13cacheOnDeleteER12CachedScenes(*((ScreenView **)this + 6), a2);
}


MinecraftUIRenderContext *__fastcall UIScene::setupAndRender(int a1, int a2)
{
  int v2; // r4@1
  char v4; // [sp+4h] [bp-64h]@1

  v2 = a1;
  MinecraftUIRenderContext::MinecraftUIRenderContext((int)&v4, *(ClientInstance **)(a1 + 20), a2);
  ScreenView::setupAndRender(*(ScreenView **)(v2 + 24), (int)&v4);
  return MinecraftUIRenderContext::~MinecraftUIRenderContext((MinecraftUIRenderContext *)&v4);
}


void __fastcall UIScene::handleButtonPress(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, void *a12, int a13, int a14, int a15)
{
  UIScene::handleButtonPress(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}


void __fastcall UIScene::getScreenName(UIScene *this, int a2)
{
  ScreenView::getScreenName(this, *(_DWORD *)(a2 + 24));
}


void __fastcall UIScene::cacheOnDelete(UIScene *this, CachedScenes *a2)
{
  UIScene::cacheOnDelete(this, a2);
}


signed __int64 __fastcall UIScene::setSize(UIScene *this, int _R1, int _R2)
{
  UIScene *v7; // r4@1
  float v9; // [sp+0h] [bp-10h]@1

  __asm { VMOV            S0, R1 }
  v7 = this;
  __asm
  {
    VMOV            S2, R2
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VSTR            S0, [SP,#0x10+var_10]
    VSTR            S2, [SP,#0x10+var_C]
  }
  ScreenView::setSize(*((_DWORD *)this + 6), (int)&v9);
  return ScreenView::resize((ScreenView *)*((_DWORD *)v7 + 6));
}


void __fastcall UIScene::onFocusGained(UIScene *this)
{
  j_j_j__ZN10ScreenView13onFocusGainedEv(*((ScreenView **)this + 6));
}


void __fastcall UIScene::getScreenName(UIScene *this, int a2)
{
  UIScene::getScreenName(this, a2);
}


void __fastcall UIScene::handleInputModeChanged(int a1, int a2)
{
  UIScene::handleInputModeChanged(a1, a2);
}


int __fastcall UIScene::handleBackEvent(UIScene *this, bool a2)
{
  return 0;
}


Json::Value *__fastcall UIScene::reload(UIScene *this)
{
  UIScene *v1; // r4@1
  MinecraftGame **v2; // r5@1
  int v3; // r0@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-2Ch]@1
  char v9; // [sp+8h] [bp-28h]@1

  v1 = this;
  v2 = (MinecraftGame **)ClientInstance::getSceneFactory(*((ClientInstance **)this + 5));
  ScreenView::getScreenName((ScreenView *)&v8, *((_DWORD *)v1 + 6));
  v3 = ScreenView::getController(*((ScreenView **)v1 + 6));
  SceneFactory::generateGlobalVars((SceneFactory *)&v9, v2, (const char **)&v8, v3);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j_j__ZdlPv_9(v4);
  }
  ScreenView::reload(*((ScreenView **)v1 + 6), (const Json::Value *)&v9);
  return Json::Value::~Value((Json::Value *)&v9);
}


unsigned __int64 __fastcall UIScene::render(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  __int64 v14; // [sp+0h] [bp-90h]@0
  char v15; // [sp+Ch] [bp-84h]@3
  int v16; // [sp+60h] [bp-30h]@1
  double v17; // [sp+68h] [bp-28h]@1
  unsigned int v19; // [sp+78h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  v17 = 0.0;
  v19 = 18;
  v16 = unk_27F636C;
  unk_27F636C = &v16;
  _R0 = getTimeS();
  __asm
  {
    VMOV            D0, R0, R2
    VSTR            D0, [SP,#0x90+var_28]
    VSTR            D0, [SP,#0x90+var_20]
  }
  _R2 = v16;
  if ( v16 )
    __asm
    {
      VMOV            D0, R0, R1
      VLDR            D1, [R2,#8]
      VADD.F64        D0, D1, D0
      VSTR            D0, [R2,#8]
    }
  BaseScreen::setupForRendering(v2);
  MinecraftUIRenderContext::MinecraftUIRenderContext((int)&v15, *(ClientInstance **)(v2 + 20), v3);
  ScreenView::render(*(ScreenView **)(v2 + 24), (int)&v15);
  BaseScreen::cleanupForRendering(v2);
  MinecraftUIRenderContext::~MinecraftUIRenderContext((MinecraftUIRenderContext *)&v15);
  LODWORD(_R0) = getTimeS();
    VMOV            D1, R0, R1
    VLDR            D0, [SP,#0x90+var_28]
    VADD.F64        D2, D0, D1
    VSTR            D2, [SP,#0x90+var_28]
    VLDR            D0, [SP,#0x90+var_20]
    VADD.F64        D0, D0, D1
  HIDWORD(_R0) = v16;
      VLDR            D2, [R1,#8]
      VSUB.F64        D1, D2, D1
      VSTR            D1, [R1,#8]
      VLDR            D2, [SP,#0x90+var_28]
  __asm { VMOV            R2, R3, D2 }
  LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
  unk_27F636C = v16;
  __asm { VSTR            D0, [SP,#0x90+var_90] }
  return __PAIR__(v19, ProfilerLite::_endScope(_R0, _R2, _R3, v14));
}


int __fastcall UIScene::handleGazeGestureInput(float a1, int a2, int a3, int a4, int a5, int a6)
{
  int v11; // [sp+0h] [bp-10h]@0

  __asm
  {
    VLDR            S0, [SP,#0x10+arg_0]
    VSTR            S0, [SP,#0x10+var_10]
  }
  return ScreenView::handleGazeGestureInput(*(_DWORD *)(LODWORD(a1) + 24), a2, a3, a4, v11, a6);
}


void __fastcall UIScene::handleHoloInputModeChanged(int a1, int a2)
{
  j_j_j__ZN10ScreenView26handleHoloInputModeChangedE15HoloUIInputMode(*(_DWORD *)(a1 + 24), a2);
}


void __fastcall UIScene::~UIScene(UIScene *this)
{
  UIScene::~UIScene(this);
}
