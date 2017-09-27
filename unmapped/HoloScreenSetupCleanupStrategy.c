

int __fastcall HoloScreenSetupCleanupStrategy::setupScreen(int a1, int a2)
{
  int v2; // r4@1
  __int64 v4; // [sp+0h] [bp-50h]@1
  __int64 v5; // [sp+8h] [bp-48h]@1
  __int64 v6; // [sp+10h] [bp-40h]@1
  __int64 v7; // [sp+18h] [bp-38h]@1
  __int64 v8; // [sp+20h] [bp-30h]@1
  __int64 v9; // [sp+28h] [bp-28h]@1
  __int64 v10; // [sp+30h] [bp-20h]@1
  __int64 v11; // [sp+38h] [bp-18h]@1

  v2 = a2;
  mce::WorldConstantsHolographic::getMatrixPatch(*(_DWORD *)(a2 + 32) + 36, a1 + 4);
  mce::WorldConstantsHolographic::resetViewProjOverride((mce::WorldConstantsHolographic *)(*(_DWORD *)(v2 + 32) + 36));
  _aeabi_memclr8(&v4, 60);
  v4 = *(_QWORD *)&Matrix::IDENTITY;
  v5 = qword_27E89F0;
  v6 = qword_27E89F8;
  v7 = qword_27E8A00;
  v8 = qword_27E8A08;
  v9 = qword_27E8A10;
  v10 = *(_QWORD *)&qword_27E8A18;
  v11 = *(_QWORD *)&qword_27E8A20;
  return mce::WorldConstantsHolographic::setMatrixPatch(*(_DWORD *)(v2 + 32) + 36, (int)&v4);
}


signed int __fastcall HoloScreenSetupCleanupStrategy::getEyeRenderingMode(HoloScreenSetupCleanupStrategy *this)
{
  return 8;
}


int __fastcall HoloScreenSetupCleanupStrategy::HoloScreenSetupCleanupStrategy(int result)
{
  *(_DWORD *)result = &off_26E483C;
  *(_DWORD *)(result + 4) = 1065353216;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_QWORD *)(result + 24) = 1065353216LL;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 1065353216;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 60) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 64) = 1065353216;
  return result;
}
