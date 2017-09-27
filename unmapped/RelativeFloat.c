

int __fastcall RelativeFloat::RelativeFloat(int result)
{
  *(_DWORD *)result = 0;
  *(_BYTE *)(result + 4) = 1;
  return result;
}


int __fastcall RelativeFloat::getValue(RelativeFloat *this, float _R1)
{
  int result; // r0@3

  __asm
  {
    VLDR            S2, [R0]
    VMOV            S0, R1
    VADD.F32        S0, S2, S0
  }
  if ( !*((_BYTE *)this + 4) )
    __asm { VMOVEQ.F32      S0, S2 }
  __asm { VMOV            R0, S0 }
  return result;
}
