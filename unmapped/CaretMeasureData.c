

int __fastcall CaretMeasureData::CaretMeasureData(int result, int a2, char a3)
{
  *(_DWORD *)result = a2;
  *(_BYTE *)(result + 4) = a3;
  return result;
}
