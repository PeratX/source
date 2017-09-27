

_BYTE *__fastcall MenuPointer::MenuPointer(_BYTE *result)
{
  *result = 0;
  return result;
}


int __fastcall MenuPointer::isPressed(MenuPointer *this)
{
  return *(_BYTE *)this;
}


int __fastcall MenuPointer::setPressed(int result, bool a2)
{
  *(_BYTE *)result = a2;
  return result;
}
