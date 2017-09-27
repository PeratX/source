

signed int __fastcall FilterTestMoonIntensity::evaluate(int a1, int a2)
{
  int v2; // r4@1
  Dimension *v3; // r0@1
  signed int result; // r0@2
  int v5; // r0@3

  v2 = a1;
  v3 = *(Dimension **)(a2 + 16);
  if ( v3 )
  {
    v5 = j_Dimension::getMoonBrightness(v3);
    result = j_FilterTest::_testValuesWithOperator((FilterTest *)v2, *(float *)&v5, *(float *)(v2 + 8));
  }
  else
    result = 0;
  return result;
}
