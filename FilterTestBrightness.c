

signed int __fastcall FilterTestBrightness::evaluate(int a1, int a2)
{
  int v2; // r4@1
  BlockSource *v3; // r0@1
  signed int result; // r0@2
  int v5; // r0@3

  v2 = a1;
  v3 = *(BlockSource **)(a2 + 12);
  if ( v3 )
  {
    v5 = BlockSource::getBrightness(v3, (const BlockPos *)(a2 + 24));
    result = FilterTest::_testValuesWithOperator((FilterTest *)v2, *(float *)&v5, *(float *)(v2 + 8));
  }
  else
    result = 0;
  return result;
}
