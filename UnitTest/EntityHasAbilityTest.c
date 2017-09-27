

int __fastcall EntityHasAbilityTest::evaluate(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void **v4; // r0@4
  int result; // r0@5
  int v6; // r1@6

  v2 = *(_DWORD *)(a2 + 4);
  v3 = a1;
  if ( v2 && j_Entity::hasCategory(*(_DWORD *)(a2 + 4), 1) == 1 )
  {
    switch ( *(_DWORD *)(v3 + 8) )
    {
      case 0:
        v4 = &Abilities::INVULNERABLE;
        goto LABEL_16;
      case 1:
        v4 = &Abilities::FLYING;
      case 2:
        v4 = &Abilities::INSTABUILD;
      case 3:
        v4 = &Abilities::LIGHTNING;
      case 4:
        v4 = &Abilities::FLYSPEED;
      case 5:
        v4 = &Abilities::WALKSPEED;
      case 6:
        v4 = &Abilities::NOCLIP;
      case 7:
        v4 = &Abilities::MAYFLY;
      case 8:
        v4 = &Abilities::WORLDBUILDER;
      case 9:
        v4 = &Abilities::MUTED;
LABEL_16:
        v6 = j_Abilities::getBool(v2 + 4320, (int **)*v4);
        break;
      default:
        v6 = 0;
    }
    result = j_FilterTest::_testValuesWithOperator((FilterTest *)v3, v6, 1);
  }
  else
    result = 0;
  return result;
}
