

signed int __fastcall FilterTestMoonPhase::evaluate(int a1, int a2)
{
  int v2; // r4@1
  Dimension *v3; // r0@1
  signed int result; // r0@2

  v2 = a1;
  v3 = *(Dimension **)(a2 + 16);
  if ( v3 )
  {
    _R0 = j_Dimension::getMoonPhase(v3);
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VMOV            R1, S0
    }
    result = j_FilterTest::_testValuesWithOperator((FilterTest *)v2, _R1, *(float *)(v2 + 8));
  }
  else
    result = 0;
  return result;
}
