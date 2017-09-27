

int __fastcall UIComponent::onLayoutChange(UIComponent *this)
{
  return 0;
}


int __fastcall UIComponent::isRenderableComponent(UIComponent *this)
{
  return 0;
}


int __fastcall UIComponent::UIComponent(int result, int a2)
{
  *(_DWORD *)result = &off_26D6FD4;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


unsigned int __fastcall UIComponent::isLocked(UIComponent *this)
{
  UIComponent *v1; // r4@1
  unsigned int result; // r0@2

  v1 = this;
  if ( UIControl::getEnabled(*((UIControl **)this + 1)) == 1 )
    result = UIControl::areAllAncestorsEnabled(*((UIControl **)v1 + 1)) ^ 1;
  else
    result = 1;
  return result;
}


unsigned int __fastcall UIComponent::isHidden(UIComponent *this)
{
  UIComponent *v1; // r4@1
  unsigned int result; // r0@2

  v1 = this;
  if ( UIControl::getVisible(*((UIControl **)this + 1)) == 1 )
    result = UIControl::isVisibleInTree(*((UIControl **)v1 + 1)) ^ 1;
  else
    result = 1;
  return result;
}
