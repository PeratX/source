

void __fastcall PhysicsDescription::getDocumentation(int a1, int a2)
{
  PhysicsDescription::getDocumentation(a1, a2);
}


const char *__fastcall PhysicsDescription::getDescription(PhysicsDescription *this)
{
  return "Defines a dynamic type jump control that will change jump properties based on the speed modifier of the mob.";
}


void __fastcall PhysicsDescription::parseData(PhysicsDescription *this, Json::Value *a2, int a3, int a4, bool a5)
{
  Json::Value *v5; // r4@1
  PhysicsDescription *v6; // r5@1
  bool v7; // [sp+0h] [bp-10h]@0

  v5 = a2;
  v6 = this;
  j_Parser::parse(a2, (PhysicsDescription *)((char *)this + 4), (bool *)"has_gravity", (const char *)1, v7);
  j_j_j__ZN6Parser5parseERKN4Json5ValueERbPKcb_1(
    v5,
    (PhysicsDescription *)((char *)v6 + 5),
    (bool *)"has_collision",
    (const char *)1,
    a5);
}


void __fastcall PhysicsDescription::getDocumentation(int a1, int a2)
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
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  int v23; // [sp+8h] [bp-40h]@4
  int v24; // [sp+10h] [bp-38h]@4
  int v25; // [sp+18h] [bp-30h]@4
  int v26; // [sp+20h] [bp-28h]@1
  int v27; // [sp+28h] [bp-20h]@1
  int v28; // [sp+30h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v28, "has_gravity");
  sub_21E94B4((void **)&v27, "true");
  v3 = (int *)sub_21E94B4((void **)&v26, "Whether or not the entity is affected by gravity");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v28, &v27, v3);
  v4 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v27 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v28 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v25, "has_collision");
  sub_21E94B4((void **)&v24, "true");
  v7 = (int *)sub_21E94B4((void **)&v23, "Whether or not the object collides with things");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v25, &v24, v7);
  v8 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v23 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v24 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v25 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


const char *__fastcall PhysicsDescription::getJsonName(PhysicsDescription *this)
{
  return "minecraft:physics";
}


void __fastcall PhysicsDescription::parseData(PhysicsDescription *this, Json::Value *a2, int a3, int a4, bool a5)
{
  PhysicsDescription::parseData(this, a2, a3, a4, a5);
}
