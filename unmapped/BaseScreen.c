

int __fastcall BaseScreen::screenDrawsLast(BaseScreen *this)
{
  return 0;
}


signed int __fastcall BaseScreen::isShowingMenu(BaseScreen *this)
{
  return 1;
}


signed int __fastcall BaseScreen::renderOnlyWhenTopMost(BaseScreen *this)
{
  return 1;
}


int __fastcall BaseScreen::isPlayScreen(BaseScreen *this)
{
  return 0;
}


int __fastcall BaseScreen::alwaysAcceptsInput(BaseScreen *this)
{
  return 0;
}


int __fastcall BaseScreen::lowFreqRendering(BaseScreen *this)
{
  return 0;
}


int __fastcall BaseScreen::screenIsNotFlushable(BaseScreen *this)
{
  return 0;
}


int __fastcall BaseScreen::BaseScreen(int result)
{
  *(_DWORD *)result = &off_26E09E0;
  *(_DWORD *)(result + 4) = 1;
  *(_DWORD *)(result + 8) = 1;
  *(_BYTE *)(result + 12) = 1;
  *(_BYTE *)(result + 13) = 0;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


int __fastcall BaseScreen::cleanupForRendering(int a1)
{
  int result; // r0@1

  result = *(_DWORD *)(a1 + 16);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall BaseScreen::~BaseScreen(BaseScreen *this)
{
  BaseScreen *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E09E0;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  return j_j_j__ZN13AbstractSceneD2Ev(v1);
}


int __fastcall BaseScreen::handleBackEvent(BaseScreen *this, bool a2)
{
  return 0;
}


int __fastcall BaseScreen::setupForRendering(int a1)
{
  int result; // r0@1

  result = *(_DWORD *)(a1 + 16);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 8))();
  return result;
}


int __fastcall BaseScreen::getEyeRenderingMode(BaseScreen *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 16))();
  else
    result = 0;
  return result;
}


int __fastcall BaseScreen::setSize(int result, __int64 a2)
{
  *(_QWORD *)(result + 4) = a2;
  return result;
}


int *__fastcall BaseScreen::getEventProperties(BaseScreen *this)
{
  char v1; // r0@1
  double v2; // r0@2
  unsigned int v3; // r0@3
  int v4; // r5@5
  int *v5; // r4@5

  v1 = byte_27D9CE4;
  __dmb();
  if ( !(v1 & 1) && j___cxa_guard_acquire(&byte_27D9CE4) )
  {
    unk_27D9D00 = 0;
    unk_27D9D04 = 0;
    dword_27D9D08 = 1065353216;
    LODWORD(v2) = &dword_27D9D08;
    *(_DWORD *)algn_27D9D0C = 0;
    v3 = sub_119C844(v2);
    dword_27D9CFC = v3;
    if ( v3 == 1 )
    {
      dword_27D9D10 = 0;
      v5 = &dword_27D9D10;
    }
    else
      if ( v3 >= 0x40000000 )
        sub_119C874();
      v4 = 4 * v3;
      v5 = (int *)operator new(4 * v3);
      _aeabi_memclr4(v5, v4);
    dword_27D9CF8 = (int)v5;
    _cxa_atexit(std::unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~unordered_map);
    j___cxa_guard_release(&byte_27D9CE4);
  }
  return &dword_27D9CF8;
}


int __fastcall BaseScreen::setScreenSetupCleanup(int a1, int *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int result; // r0@1

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  result = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(v2 + 16) = v3;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


int __fastcall BaseScreen::screenHandlesGamepadMenuButton(BaseScreen *this)
{
  return 0;
}


int __fastcall BaseScreen::drawRectangleArea(float a1, float a2, float a3, float a4, int a5, int a6, int a7, int a8)
{
  GuiData *v8; // r5@1
  Tessellator *v10; // r4@1
  float v27; // [sp+0h] [bp-70h]@3
  float v28; // [sp+4h] [bp-6Ch]@3

  v8 = *(GuiData **)(LODWORD(a1) + 24);
  _R7 = a2;
  v10 = *(Tessellator **)(LODWORD(a1) + 40);
  _R11 = a4;
  _R10 = a3;
  __asm { VLDR            S16, [R7] }
  _R6 = GuiData::getInvGuiScale(*(GuiData **)(LODWORD(a1) + 24));
  __asm { VLDR            S18, [R7,#4] }
  _R9 = GuiData::getInvGuiScale(v8);
  __asm { VLDR            S20, [R7,#8] }
  _R8 = GuiData::getInvGuiScale(v8);
  __asm
  {
    VLDR            S22, [R7,#0xC]
    VMOV            S24, R6
  }
  _R0 = GuiData::getInvGuiScale(v8);
    VLDR            S4, [SP,#0x70+arg_4]
    VMOV            S0, R0
    VMUL.F32        S2, S24, S16
    VLDR            S16, [SP,#0x70+arg_0]
    VCMPE.F32       S4, #0.0
    VLDR            S26, [SP,#0x70+arg_8]
    VMRS            APSR_nzcv, FPSCR
    VMUL.F32        S0, S0, S22
    VMOV            S6, R11
    VLDR            S28, [SP,#0x70+arg_C]
    VCVT.F32.S32    S22, S6
    VMOV.F32        S6, S16
    VMOV            R6, S2
    VMOV            R5, S0
    VMOV            S0, R10
  if ( !_ZF )
    __asm { VMOVNE.F32      S6, S4 }
    VCVT.F32.S32    S24, S0
    VADD.F32        S0, S6, S22
    VMUL.F32        S30, S24, S26
    VMUL.F32        S17, S0, S28
    VSTR            S30, [SP,#0x70+var_70]
    VSTR            S17, [SP,#0x70+var_6C]
  Tessellator::vertexUV(v10, _R6, _R5, 0.0, v27, v28);
    VMOV            S0, R9
    VMUL.F32        S0, S0, S18
    VMOV            R7, S0
    VADD.F32        S0, S24, S16
    VMUL.F32        S16, S0, S26
    VSTMEA          SP, {S16-S17}
  Tessellator::vertexUV(v10, _R7, _R5, 0.0, v27, v28);
    VMOV            S0, R8
    VMUL.F32        S18, S22, S28
    VMUL.F32        S0, S0, S20
    VSTR            S16, [SP,#0x70+var_70]
    VSTR            S18, [SP,#0x70+var_6C]
  return Tessellator::vertexUV(v10, _R6, _R5, 0.0, v27, v28);
}


int __fastcall BaseScreen::setWantsTextOnly(int result, bool a2)
{
  *(_BYTE *)(result + 13) = a2;
  return result;
}


void __fastcall BaseScreen::~BaseScreen(BaseScreen *this)
{
  BaseScreen::~BaseScreen(this);
}


int __fastcall BaseScreen::renderGameBehind(BaseScreen *this)
{
  return 0;
}


void __fastcall BaseScreen::~BaseScreen(BaseScreen *this)
{
  BaseScreen *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E09E0;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  AbstractScene::~AbstractScene(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall BaseScreen::ignoreAsTop(BaseScreen *this)
{
  return 0;
}


int __fastcall BaseScreen::isModal(BaseScreen *this)
{
  return 0;
}


int __fastcall BaseScreen::setShouldSendEvents(int result, bool a2)
{
  *(_BYTE *)(result + 12) = a2;
  return result;
}


int __fastcall BaseScreen::shouldStealMouse(BaseScreen *this)
{
  return 0;
}


void *__fastcall BaseScreen::getRenderingAABB(BaseScreen *this)
{
  char v1; // r0@1

  v1 = byte_27D9CE0;
  __dmb();
  if ( !(v1 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27D9CE0) )
  {
    RectangleArea::RectangleArea((RectangleArea *)&unk_27D9CE8);
    j___cxa_guard_release((unsigned int *)&byte_27D9CE0);
  }
  return &unk_27D9CE8;
}


int __fastcall BaseScreen::closeOnPlayerHurt(BaseScreen *this)
{
  return 0;
}


int __fastcall BaseScreen::absorbsInput(BaseScreen *this)
{
  return 0;
}
