

signed int __fastcall FilterTestTemperatureValue::evaluate(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  BlockSource *v4; // r0@1
  Biome *v5; // r0@2
  int v6; // r0@2
  signed int result; // r0@2

  v2 = a2;
  v3 = a1;
  v4 = *(BlockSource **)(a2 + 12);
  if ( v4 )
  {
    v5 = (Biome *)BlockSource::getConstBiome(v4, (const BlockPos *)(a2 + 24));
    v6 = Biome::getTemperature(v5, *(const BlockSource **)(v2 + 12), (const BlockPos *)(v2 + 24));
    result = FilterTest::_testValuesWithOperator((FilterTest *)v3, *(float *)&v6, *(float *)(v3 + 8));
  }
  else
    result = 0;
  return result;
}
