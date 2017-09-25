

signed int __fastcall MobSpawnInfo::categoryID(signed int a1)
{
  if ( a1 < 4864 )
  {
    if ( a1 == 783 )
      return 3;
    if ( a1 == 2816 )
      return 1;
  }
  else
    if ( a1 == 4864 )
      return 0;
    if ( a1 == 8960 )
      return 2;
    if ( a1 == 33024 )
      return 4;
  return -1;
}
