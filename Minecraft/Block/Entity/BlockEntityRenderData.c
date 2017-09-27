

int __fastcall BlockEntityRenderData::BlockEntityRenderData(int result, BlockSource *a2, BlockEntity *a3, const Vec3 *a4, const mce::MaterialPtr *a5, const mce::TexturePtr *a6, int a7)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a4;
  *(_DWORD *)(result + 12) = a5;
  *(_DWORD *)(result + 16) = a6;
  *(_DWORD *)(result + 20) = a7;
  return result;
}
