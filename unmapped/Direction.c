

signed int __fastcall Direction::getDirection(Direction *this, float _R1, float a3)
{
  signed int result; // r0@1
  signed int v8; // r1@1

  __asm { VMOV            S2, R0 }
  result = 0;
  __asm { VMOV            S0, R1 }
  v8 = 3;
  __asm
  {
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, #0.0
    VABS.F32        S4, S0
    VABS.F32        S6, S2
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v8 = 1;
    VCMPE.F32       S6, S4
    result = 2;
  __asm { VMRS            APSR_nzcv, FPSCR }
    result = v8;
  return result;
}


signed int __fastcall Direction::getDirection(Direction *this, int a2, int a3, int a4, int a5)
{
  signed int v7; // r2@1
  signed int result; // r0@1

  _R0 = (char *)this - a3;
  _R1 = a2 - a4;
  v7 = 3;
  __asm
  {
    VMOV            S0, R1
    VMOV            S2, R0
  }
  result = 0;
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v7 = 1;
  if ( _R1 > 0 )
    result = 2;
    VABS.F32        S0, S0
    VABS.F32        S2, S2
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
    result = v7;
  return result;
}
