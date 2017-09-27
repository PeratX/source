

int __fastcall EntityRenderData::EntityRenderData(int result, int a2, int a3, int a4)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a4;
  return result;
}
