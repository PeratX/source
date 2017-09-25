

const char *__fastcall IdentifierDescription::getDescription(IdentifierDescription *this)
{
  return "Sets the name for this entity's description.";
}


Description *__fastcall IdentifierDescription::parseIdentifier(IdentifierDescription *this, Json::Value *a2)
{
  Description *v2; // r4@1
  Json::Value *v3; // r5@1
  const char *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // [sp+4h] [bp-2Ch]@2
  char v10; // [sp+8h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  j_Json::Value::Value(&v10, 0);
  v4 = (const char *)(*(int (__fastcall **)(Description *))(*(_DWORD *)v2 + 4))(v2);
  if ( j_Description::startParsing(v2, (Json::Value *)&v10, v3, v4) == 1 )
  {
    j_Parser::parse((int)&v10, (int *)v2 + 1, "id", (const char *)&unk_257BC67);
    j_EntityTypeResolveAlias((void **)&v9, (const void **)v2 + 1, 1);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v2 + 1,
      &v9);
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
  }
  j_Json::Value::~Value((Json::Value *)&v10);
  return v2;
}


IdentifierDescription *__fastcall IdentifierDescription::~IdentifierDescription(IdentifierDescription *this)
{
  IdentifierDescription *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271ED2C;
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


void __fastcall IdentifierDescription::getDocumentation(int a1, int a2)
{
  IdentifierDescription::getDocumentation(a1, a2);
}


const char *__fastcall IdentifierDescription::getJsonName(IdentifierDescription *this)
{
  return "minecraft:identifier";
}


void __fastcall IdentifierDescription::~IdentifierDescription(IdentifierDescription *this)
{
  IdentifierDescription::~IdentifierDescription(this);
}


void __fastcall IdentifierDescription::getDocumentation(int a1, int a2)
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
  sub_21E94B4((void **)&v15, "id");
  sub_21E94B4((void **)&v14, (const char *)&unk_257BC67);
  v3 = (int *)sub_21E94B4((void **)&v13, "The identifier for this entity");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v15, &v14, v3);
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


void __fastcall IdentifierDescription::~IdentifierDescription(IdentifierDescription *this)
{
  IdentifierDescription *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271ED2C;
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
