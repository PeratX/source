

int __fastcall DimensionConversionData::DimensionConversionData(int result, int a2, int a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r1@1

  v3 = *(_QWORD *)a2;
  v4 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)result = v3;
  *(_QWORD *)(result + 8) = *(_QWORD *)(&a3 - 1);
  return result;
}
