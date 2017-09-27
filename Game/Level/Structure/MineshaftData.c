

int __fastcall MineshaftData::MineshaftData(int result, bool a2)
{
  __asm
  {
    VMOV.F32        S2, #0.5
    VMOV.F32        S0, #1.0
  }
  if ( !_ZF )
    a2 = 5;
    __asm { VMOVNE.F32      S0, S2 }
  *(_BYTE *)result = *(_BYTE *)(Block::mWoodPlanks + 4);
  *(_BYTE *)(result + 1) = a2;
  *(_BYTE *)(result + 2) = *(_BYTE *)(Block::mFence + 4);
  *(_BYTE *)(result + 3) = a2;
  __asm { VSTR            S0, [R0,#4] }
  return result;
}
