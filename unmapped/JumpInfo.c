

int __fastcall JumpInfo::JumpInfo(int result, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a4;
  *(_DWORD *)(result + 12) = a5;
  return result;
}
