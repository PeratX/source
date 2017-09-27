

int __fastcall MultiplyValueAmplifier::MultiplyValueAmplifier(int result, int a2)
{
  *(_DWORD *)result = &off_271A340;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


int __fastcall MultiplyValueAmplifier::getAmount(MultiplyValueAmplifier *this, int a2, float a3)
{
  int result; // r0@1

  _R1 = a2 + 1;
  __asm
  {
    VMOV            S0, R1
    VCVT.F32.S32    S0, S0
    VLDR            S2, [R0,#4]
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}
