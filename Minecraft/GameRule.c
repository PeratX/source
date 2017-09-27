

int __fastcall GameRule::GameRule(int result, int a2, char a3)
{
  *(_BYTE *)result = a3;
  *(_BYTE *)(result + 1) = 3;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


int __fastcall GameRule::GameRule(int result)
{
  *(_BYTE *)result = 1;
  *(_BYTE *)(result + 1) = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


int __fastcall GameRule::resetType(int result, char a2)
{
  *(_BYTE *)(result + 1) = a2;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


int __fastcall GameRule::GameRule(int result, int a2, char a3)
{
  *(_BYTE *)result = a3;
  *(_BYTE *)(result + 1) = 2;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


int __fastcall GameRule::setFloat(int result, float a2)
{
  *(float *)(result + 4) = a2;
  return result;
}


int __fastcall GameRule::setBool(int result, bool a2)
{
  *(_BYTE *)(result + 4) = a2;
  return result;
}


int __fastcall GameRule::GameRule(int result, char a2, char a3)
{
  *(_BYTE *)result = a3;
  *(_BYTE *)(result + 1) = 1;
  *(_BYTE *)(result + 4) = a2;
  return result;
}


int __fastcall GameRule::setInt(int result, int a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}


int __fastcall GameRule::shouldSave(GameRule *this)
{
  return *(_BYTE *)this;
}
