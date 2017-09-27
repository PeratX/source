

int __fastcall AdventureSettings::AdventureSettings(int result)
{
  *(_DWORD *)result = 0;
  *(_BYTE *)(result + 4) = 1;
  return result;
}
