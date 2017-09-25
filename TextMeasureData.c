

int __fastcall TextMeasureData::TextMeasureData(int result, __int64 a2, char a3, char a4, char a5)
{
  *(_QWORD *)result = a2;
  *(_BYTE *)(result + 8) = a3;
  *(_BYTE *)(result + 9) = a4;
  *(_BYTE *)(result + 10) = a5;
  return result;
}
