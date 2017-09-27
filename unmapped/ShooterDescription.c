

void __fastcall ShooterDescription::~ShooterDescription(ShooterDescription *this)
{
  ShooterDescription *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271F33C;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_operator delete((void *)v1);
}


const char *__fastcall ShooterDescription::getJsonName(ShooterDescription *this)
{
  return "minecraft:shooter";
}


const char *__fastcall ShooterDescription::getDescription(ShooterDescription *this)
{
  return "Defines the entity's ranged attack behavior.";
}


void __fastcall ShooterDescription::getDocumentation(int a1, int a2)
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
  sub_21E94B4((void **)&v28, "def");
  sub_21E94B4((void **)&v27, (const char *)&unk_257BC67);
  v3 = (int *)sub_21E94B4(
                (void **)&v26,
                "Entity definition to use as projectile for the ranged attack. The entity definition must have the projec"
                "tile component to be able to be shot as a projectile");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v28, &v27, v3);
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
  sub_21E94B4((void **)&v25, "auxVal");
  sub_21E94B4((void **)&v24, "-1");
  v7 = (int *)sub_21E94B4((void **)&v23, "ID of the Potion effect to be applied on hit");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v25, &v24, v7);
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


ShooterDescription *__fastcall ShooterDescription::~ShooterDescription(ShooterDescription *this)
{
  ShooterDescription *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271F33C;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


void __fastcall ShooterDescription::getDocumentation(int a1, int a2)
{
  ShooterDescription::getDocumentation(a1, a2);
}


void __fastcall ShooterDescription::~ShooterDescription(ShooterDescription *this)
{
  ShooterDescription::~ShooterDescription(this);
}


int __fastcall ShooterDescription::parseData(ShooterDescription *this, Json::Value *a2)
{
  ShooterDescription *v2; // r5@1
  const void **v3; // r6@1
  Json::Value *v4; // r4@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+0h] [bp-20h]@1

  v2 = this;
  v3 = (const void **)((char *)this + 4);
  v4 = a2;
  j_Parser::parse((int)a2, (int *)this + 1, "def", (const char *)&unk_257BC67);
  j_EntityTypeResolveAlias((void **)&v9, v3, 1);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id((int *)v3, &v9);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  return j_Parser::parse(v4, (ShooterDescription *)((char *)v2 + 8), (int *)"auxVal", (const char *)0xFFFFFFFF, v9);
}
