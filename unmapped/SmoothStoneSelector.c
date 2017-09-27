

signed int __fastcall SmoothStoneSelector::next(SmoothStoneSelector *this, Random *a2, int a3, int a4, int a5, int a6)
{
  SmoothStoneSelector *v6; // r4@1
  signed int result; // r0@4

  v6 = this;
  if ( a6 == 1 )
  {
    *((_BYTE *)this + 4) = *(_BYTE *)(Block::mStoneBrick + 4);
    *((_BYTE *)this + 5) = 0;
    _R0 = j_Random::_genRandInt32(a2);
    __asm
    {
      VMOV            S0, R0
      VLDR            D1, =2.32830644e-10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D1
      VCVT.F32.F64    S0, D0
      VLDR            S2, =0.2
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      __asm
      {
        VMOV.F32        S2, #0.5
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        result = 1;
        *((_BYTE *)v6 + 5) = 1;
        return result;
        VLDR            S2, =0.55
      if ( !(_NF ^ _VF) )
        result = 0;
        *((_BYTE *)v6 + 5) = 0;
      *((_BYTE *)v6 + 4) = *(_BYTE *)(Block::mMonsterStoneEgg + 4);
    result = 2;
    *((_BYTE *)v6 + 5) = 2;
  }
  else
    *((_BYTE *)this + 4) = FullBlock::AIR;
    result = BYTE1(FullBlock::AIR);
    *((_BYTE *)v6 + 5) = BYTE1(FullBlock::AIR);
  return result;
}
