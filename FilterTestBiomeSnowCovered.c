

int __fastcall FilterTestBiomeSnowCovered::evaluate(int a1, int a2)
{
  int v2; // r4@1
  BlockSource *v3; // r0@1
  int result; // r0@2
  Biome *v5; // r0@3
  int v6; // r0@3

  v2 = a1;
  v3 = *(BlockSource **)(a2 + 12);
  if ( v3 )
  {
    v5 = (Biome *)BlockSource::getConstBiome(v3, (const BlockPos *)(a2 + 24));
    v6 = Biome::isSnowCovered(v5);
    result = FilterTest::_testValuesWithOperator((FilterTest *)v2, v6, *(_BYTE *)(v2 + 8));
  }
  else
    result = 0;
  return result;
}
