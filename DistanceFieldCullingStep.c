

int __fastcall DistanceFieldCullingStep::DistanceFieldCullingStep(int result, char a2, char a3, char a4, int a5)
{
  *(_DWORD *)result = a5;
  *(_BYTE *)(result + 4) = a2;
  *(_BYTE *)(result + 5) = a3;
  *(_BYTE *)(result + 6) = a4;
  return result;
}
