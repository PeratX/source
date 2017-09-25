

int __fastcall AttributeBuffInfo::AttributeBuffInfo(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 12) = -1;
  return result;
}
