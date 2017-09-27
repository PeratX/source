

_BYTE *__fastcall Ability::Ability(_BYTE *result)
{
  *result = 0;
  return result;
}


int __fastcall Ability::setBool(int result, bool a2)
{
  *(_BYTE *)(result + 4) = a2;
  return result;
}


_BOOL4 __fastcall Ability::hasOption(int a1, char a2)
{
  return (unsigned __int8)(*(_BYTE *)(a1 + 8) & a2) != 0;
}


int __fastcall Ability::Ability(int result, char a2, char a3)
{
  *(_BYTE *)result = 1;
  *(_BYTE *)(result + 4) = a2;
  *(_BYTE *)(result + 8) = a3;
  return result;
}


int __fastcall Ability::setFloat(int result, float a2)
{
  *(float *)(result + 4) = a2;
  return result;
}


int __fastcall Ability::Ability(int result, int a2, char a3)
{
  *(_BYTE *)result = 2;
  *(_DWORD *)(result + 4) = a2;
  *(_BYTE *)(result + 8) = a3;
  return result;
}


int __fastcall Ability::getType(Ability *this)
{
  return *(_BYTE *)this;
}
