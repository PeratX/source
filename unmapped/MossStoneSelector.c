

int __fastcall MossStoneSelector::next(MossStoneSelector *this, Random *a2, int a3, int a4, int a5, bool a6)
{
  MossStoneSelector *v6; // r4@1
  _DWORD *v12; // r0@1
  int result; // r0@3

  v6 = this;
  _R0 = j_Random::_genRandInt32(a2);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
  }
  v12 = &Block::mMossyCobblestone;
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, =0.4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    v12 = &Block::mCobblestone;
  *((_BYTE *)v6 + 4) = *(_BYTE *)(*v12 + 4);
  result = 0;
  *((_BYTE *)v6 + 5) = 0;
  return result;
}
