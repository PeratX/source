

const char *__fastcall TickWorldDescription::getDescription(TickWorldDescription *this)
{
  return "Defines if the entity ticks the world and the radius around it to tick.";
}


const char *__fastcall TickWorldDescription::getJsonName(TickWorldDescription *this)
{
  return "minecraft:tick_world";
}


void __fastcall TickWorldDescription::getDocumentation(int a1, int a2)
{
  TickWorldDescription::getDocumentation(a1, a2);
}


void __fastcall TickWorldDescription::getDocumentation(int a1, int a2)
{
  int v2; // r5@1
  int *v3; // r0@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  int *v7; // r0@4
  void *v8; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  int *v11; // r0@7
  void *v12; // r0@7
  void *v13; // r0@8
  void *v14; // r0@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r2@23
  signed int v22; // r1@25
  unsigned int *v23; // r2@27
  signed int v24; // r1@29
  unsigned int *v25; // r2@31
  signed int v26; // r1@33
  unsigned int *v27; // r2@35
  signed int v28; // r1@37
  unsigned int *v29; // r2@39
  signed int v30; // r1@41
  unsigned int *v31; // r2@43
  signed int v32; // r1@45
  int v33; // [sp+8h] [bp-58h]@7
  int v34; // [sp+10h] [bp-50h]@7
  int v35; // [sp+18h] [bp-48h]@7
  int v36; // [sp+20h] [bp-40h]@4
  int v37; // [sp+28h] [bp-38h]@4
  int v38; // [sp+30h] [bp-30h]@4
  int v39; // [sp+38h] [bp-28h]@1
  int v40; // [sp+40h] [bp-20h]@1
  int v41; // [sp+48h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v41, "radius");
  sub_21E94B4((void **)&v40, "2");
  v3 = (int *)sub_21E94B4((void **)&v39, "The area around the entity to tick. Default: 2. Allowed range: 2-6.");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::UINT_TYPE, (const void **)&v41, &v40, v3);
  v4 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v39 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v40 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v41 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v38, "distance_to_players");
  sub_21E94B4((void **)&v37, "128");
  v7 = (int *)sub_21E94B4(
                (void **)&v36,
                "The distance at which the closest player has to be before this entity despawns. This option will be igno"
                "red if never_despawn is true. Min: 128 blocks.");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v38, &v37, v7);
  v8 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v36 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v37 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v38 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v35, "never_despawn");
  sub_21E94B4((void **)&v34, "true");
  v11 = (int *)sub_21E94B4(
                 (void **)&v33,
                 "If true, this entity will not despawn even if players are far away. If false, distance_to_players will "
                 "be used to determine when to despawn.");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v35, &v34, v11);
  v12 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v33 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v34 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v35 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}


void __fastcall TickWorldDescription::parseData(TickWorldDescription *this, Json::Value *a2, int a3, int a4, bool a5)
{
  Json::Value *v5; // r4@1
  TickWorldDescription *v6; // r5@1
  float v7; // ST00_4@1
  unsigned int v8; // [sp+0h] [bp-10h]@0

  v5 = a2;
  v6 = this;
  j_Parser::parse(a2, (TickWorldDescription *)((char *)this + 4), (unsigned int *)"radius", (const char *)2, v8);
  j_Parser::parse(
    v5,
    (TickWorldDescription *)((char *)v6 + 8),
    (float *)"distance_to_players",
    (const char *)0x43000000,
    v7);
  j_j_j__ZN6Parser5parseERKN4Json5ValueERbPKcb_1(
    (TickWorldDescription *)((char *)v6 + 12),
    (bool *)"never_despawn",
    (const char *)1,
    a5);
}


void __fastcall TickWorldDescription::parseData(TickWorldDescription *this, Json::Value *a2, int a3, int a4, bool a5)
{
  TickWorldDescription::parseData(this, a2, a3, a4, a5);
}
