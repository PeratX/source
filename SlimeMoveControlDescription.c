

void __fastcall SlimeMoveControlDescription::getDocumentation(int a1, int a2)
{
  SlimeMoveControlDescription::getDocumentation(a1, a2);
}


const char *__fastcall SlimeMoveControlDescription::getJsonName(SlimeMoveControlDescription *this)
{
  return "minecraft:movement.jump";
}


Json::Value *__fastcall SlimeMoveControlDescription::parseData(SlimeMoveControlDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  SlimeMoveControlDescription *v3; // r5@1
  const char *v4; // r3@1
  float v6; // [sp+0h] [bp-10h]@0

  v2 = a2;
  v3 = this;
  j_Parser::parse(
    a2,
    (SlimeMoveControlDescription *)((char *)this + 4),
    (float *)"max_turn",
    (const char *)0x41F00000,
    v6);
  return j_j_j__ZN6Parser5parseERKN4Json5ValueER10FloatRangePKc_0(
           v2,
           (SlimeMoveControlDescription *)((char *)v3 + 8),
           (FloatRange *)"jump_delay",
           v4);
}


const char *__fastcall SlimeMoveControlDescription::getDescription(SlimeMoveControlDescription *this)
{
  return "Move control that causes the mob to jump as it moves with a specified delay between jumps.";
}


void __fastcall SlimeMoveControlDescription::getDocumentation(int a1, int a2)
{
  int v2; // r4@1
  int *v3; // r0@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  int v13; // [sp+8h] [bp-28h]@1
  int v14; // [sp+10h] [bp-20h]@1
  int v15; // [sp+18h] [bp-18h]@1

  v2 = a2;
  j_MoveControlDescription::getDocumentation(a1, a2);
  sub_21E94B4((void **)&v15, "jump_delay");
  sub_21E94B4((void **)&v14, "[0.0, 0.0]");
  v3 = (int *)sub_21E94B4((void **)&v13, "Delay after landing when using the slime move control.");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::RANGE_TYPE, (const void **)&v15, &v14, v3);
  v4 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v14 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v15 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}
