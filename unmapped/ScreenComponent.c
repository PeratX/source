

unsigned int __fastcall ScreenComponent::clone(ScreenComponent *this, UIControl *a2, UIControl *a3)
{
  ScreenComponent *v3; // r4@1
  UIControl *v4; // r7@1
  UIControl *v5; // r6@1
  UIComponent *v6; // r5@1
  int v7; // r0@1
  __int16 v8; // r1@1
  unsigned int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (UIComponent *)operator new(0xCu);
  UIComponent::UIComponent(v6, v4);
  *(_DWORD *)v6 = &off_26E088C;
  v7 = *((_WORD *)v6 + 4);
  v8 = *((_WORD *)v5 + 4);
  *(_DWORD *)v3 = v6;
  result = v7 & 0xFFFFC000 | v8 & 1 | v8 & 2 | v8 & 4 | v8 & 0x18 | v8 & 0x60 | v8 & 0x180 | v8 & 0x600 | v8 & 0x1800 | v8 & 0x2000;
  *((_WORD *)v6 + 4) = result;
  return result;
}


int __fastcall ScreenComponent::setScreenIsNotFlushable(int result, __int16 a2)
{
  *(_WORD *)(result + 8) = a2 | *(_WORD *)(result + 8) & 0xFFFE;
  return result;
}


int __fastcall ScreenComponent::getIsVRMode(ScreenComponent *this)
{
  return *((_BYTE *)this + 9) & 1;
}


void __fastcall ScreenComponent::~ScreenComponent(ScreenComponent *this)
{
  ScreenComponent::~ScreenComponent(this);
}


unsigned int __fastcall ScreenComponent::getCloseOnPlayerHurt(ScreenComponent *this)
{
  return (*((_BYTE *)this + 9) & 0x10u) >> 4;
}


unsigned int __fastcall ScreenComponent::getIsShowingMenu(ScreenComponent *this)
{
  return (*((_BYTE *)this + 8) & 0x10u) >> 4;
}


int __fastcall ScreenComponent::setScreenDrawsLast(int result, __int16 a2)
{
  *(_WORD *)(result + 8) = *(_WORD *)(result + 8) & 0xFF7F | (a2 << 7);
  return result;
}


int __fastcall ScreenComponent::setRenderGameBehind(int result, __int16 a2)
{
  *(_WORD *)(result + 8) = *(_WORD *)(result + 8) & 0xFFFB | 4 * a2;
  return result;
}


int __fastcall ScreenComponent::setIsModal(int result, __int16 a2)
{
  *(_WORD *)(result + 8) = *(_WORD *)(result + 8) & 0xFFDF | 32 * a2;
  return result;
}


int __fastcall ScreenComponent::setShouldSendEvents(int result, __int16 a2)
{
  *(_WORD *)(result + 8) = *(_WORD *)(result + 8) & 0xFBFF | (a2 << 10);
  return result;
}


unsigned int __fastcall ScreenComponent::getIsModal(ScreenComponent *this)
{
  return (*((_BYTE *)this + 8) & 0x20u) >> 5;
}


int __fastcall ScreenComponent::setShouldStealMouse(int result, __int16 a2)
{
  *(_WORD *)(result + 8) = *(_WORD *)(result + 8) & 0xFFBF | (a2 << 6);
  return result;
}


unsigned int __fastcall ScreenComponent::getAbsorbsInput(ScreenComponent *this)
{
  return (*((_BYTE *)this + 8) & 8u) >> 3;
}


int __fastcall ScreenComponent::setLowFreqRendering(int result, __int16 a2)
{
  *(_WORD *)(result + 8) = *(_WORD *)(result + 8) & 0xF7FF | (a2 << 11);
  return result;
}


unsigned int __fastcall ScreenComponent::getScreenDrawsLast(ScreenComponent *this)
{
  return (unsigned int)*((_BYTE *)this + 8) >> 7;
}


int __fastcall ScreenComponent::setIsVRMode(int result, __int16 a2)
{
  *(_WORD *)(result + 8) = *(_WORD *)(result + 8) & 0xFEFF | (a2 << 8);
  return result;
}


unsigned int __fastcall ScreenComponent::getShouldStealMouse(ScreenComponent *this)
{
  return (*((_BYTE *)this + 8) & 0x40u) >> 6;
}


unsigned int __fastcall ScreenComponent::getRenderGameBehind(ScreenComponent *this)
{
  return (*((_BYTE *)this + 8) & 4u) >> 2;
}


unsigned int __fastcall ScreenComponent::getCacheScreen(ScreenComponent *this)
{
  return (*((_BYTE *)this + 9) & 0x20u) >> 5;
}


int __fastcall ScreenComponent::setIsShowingMenu(int result, __int16 a2)
{
  *(_WORD *)(result + 8) = *(_WORD *)(result + 8) & 0xFFEF | 16 * a2;
  return result;
}


unsigned int __fastcall ScreenComponent::getShouldSendEvents(ScreenComponent *this)
{
  return (*((_BYTE *)this + 9) & 4u) >> 2;
}


int __fastcall ScreenComponent::ScreenComponent(UIComponent *a1, UIControl *a2)
{
  int result; // r0@1

  result = UIComponent::UIComponent(a1, a2);
  *(_DWORD *)result = &off_26E088C;
  *(_WORD *)(result + 8) = *(_WORD *)(result + 8) & 0xC000 | 0x414;
  return result;
}


int __fastcall ScreenComponent::getScreenIsNotFlushable(ScreenComponent *this)
{
  return *((_WORD *)this + 4) & 1;
}


unsigned int __fastcall ScreenComponent::getAlwaysAcceptsInput(ScreenComponent *this)
{
  return (*((_BYTE *)this + 8) & 2u) >> 1;
}


unsigned int __fastcall ScreenComponent::getLowFreqRendering(ScreenComponent *this)
{
  return (*((_BYTE *)this + 9) & 8u) >> 3;
}


int __fastcall ScreenComponent::setAbsorbsInput(int result, __int16 a2)
{
  *(_WORD *)(result + 8) = *(_WORD *)(result + 8) & 0xFFF7 | 8 * a2;
  return result;
}


int __fastcall ScreenComponent::setAlwaysAcceptsInput(int result, __int16 a2)
{
  *(_WORD *)(result + 8) = *(_WORD *)(result + 8) & 0xFFFD | 2 * a2;
  return result;
}


int __fastcall ScreenComponent::setCacheScreen(int result, __int16 a2)
{
  *(_WORD *)(result + 8) = *(_WORD *)(result + 8) & 0xDFFF | (a2 << 13);
  return result;
}


int __fastcall ScreenComponent::setCloseOnPlayerHurt(int result, __int16 a2)
{
  *(_WORD *)(result + 8) = *(_WORD *)(result + 8) & 0xEFFF | (a2 << 12);
  return result;
}


unsigned int __fastcall ScreenComponent::getForceRenderBelow(ScreenComponent *this)
{
  return (*((_BYTE *)this + 9) & 2u) >> 1;
}


int __fastcall ScreenComponent::setForceRenderBelow(int result, __int16 a2)
{
  *(_WORD *)(result + 8) = *(_WORD *)(result + 8) & 0xFDFF | (a2 << 9);
  return result;
}


void __fastcall ScreenComponent::~ScreenComponent(ScreenComponent *this)
{
  void *v1; // r0@1

  v1 = (void *)UIComponent::~UIComponent(this);
  j_j_j__ZdlPv_4(v1);
}
