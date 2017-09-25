

int __fastcall LayerData::swap(int result)
{
  __int64 v1; // r1@1

  v1 = *(_QWORD *)result;
  *(_DWORD *)result = *(_QWORD *)result >> 32;
  *(_DWORD *)(result + 4) = v1;
  return result;
}
