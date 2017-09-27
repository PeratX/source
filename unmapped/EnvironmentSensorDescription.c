

const char *__fastcall EnvironmentSensorDescription::getDescription(EnvironmentSensorDescription *this)
{
  return "Creates a trigger based on environment conditions.";
}


const char *__fastcall EnvironmentSensorDescription::getJsonName(EnvironmentSensorDescription *this)
{
  return "minecraft:environment_sensor";
}


void __fastcall EnvironmentSensorDescription::getDocumentation(int a1, int a2)
{
  EnvironmentSensorDescription::getDocumentation(a1, a2);
}


EnvironmentSensorDescription *__fastcall EnvironmentSensorDescription::~EnvironmentSensorDescription(EnvironmentSensorDescription *this)
{
  EnvironmentSensorDescription *v1; // r11@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int *v10; // r0@20

  v1 = this;
  *(_DWORD *)this = &off_271E81C;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      j_FilterGroup::~FilterGroup((FilterGroup *)(v2 + 8));
      v8 = *(_DWORD *)(v2 + 4);
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v8 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v10 = (int *)(*(_DWORD *)v2 - 12);
      if ( v10 != &dword_28898C0 )
        v6 = (unsigned int *)(*(_DWORD *)v2 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v2 += 40;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 1);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  return v1;
}


signed int __fastcall EnvironmentSensorDescription::parseData(EnvironmentSensorDescription *this, Json::Value *a2, int a3, int a4, const char *a5)
{
  Json::Value *v5; // r4@1
  EnvironmentSensorDescription *v6; // r5@1
  signed int result; // r0@2
  Json::Value *v8; // r0@3
  int v9; // r2@3
  int v10; // r3@3
  int v11; // r2@5
  int v12; // r3@5
  const char *v13; // [sp+0h] [bp-28h]@0
  char v14; // [sp+4h] [bp-24h]@2
  char v15; // [sp+Ch] [bp-1Ch]@2

  v5 = a2;
  v6 = this;
  if ( j_Json::Value::isArray(a2) == 1 )
  {
    j_Json::Value::begin((Json::Value *)&v15, (int)v5);
    j_Json::Value::end((Json::Value *)&v14, (int)v5);
    result = j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v15, (const Json::ValueIteratorBase *)&v14);
    if ( result != 1 )
    {
      do
      {
        v8 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v15);
        j_EnvironmentSensorDescription::parseEnvironment(v6, v8, v9, v10, v13);
        j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v15);
        j_Json::Value::end((Json::Value *)&v14, (int)v5);
        result = j_Json::ValueIteratorBase::isEqual(
                   (Json::ValueIteratorBase *)&v15,
                   (const Json::ValueIteratorBase *)&v14);
      }
      while ( !result );
    }
  }
  else
    result = j_Json::Value::isObject(v5);
    if ( result == 1 )
      result = j_j_j__ZN28EnvironmentSensorDescription16parseEnvironmentERN4Json5ValueE_0(v6, v5, v11, v12, a5);
  return result;
}


void __fastcall EnvironmentSensorDescription::getDocumentation(int a1, int a2)
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
  sub_21E94B4((void **)&v15, "on_environment");
  sub_21E94B4((void **)&v14, (const char *)&unk_257BC67);
  v3 = (int *)sub_21E94B4(
                (void **)&v13,
                "The list of triggers that fire when the environment conditions match the given filter criteria.");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::LIST_TYPE, (const void **)&v15, &v14, v3);
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


void __fastcall EnvironmentSensorDescription::~EnvironmentSensorDescription(EnvironmentSensorDescription *this)
{
  EnvironmentSensorDescription::~EnvironmentSensorDescription(this);
}


int __fastcall EnvironmentSensorDescription::parseEnvironment(EnvironmentSensorDescription *this, Json::Value *a2, int a3, int a4, const char *a5)
{
  EnvironmentSensorDescription *v5; // r5@1
  Json::Value *v6; // r4@1
  __int64 v7; // r0@1
  int v8; // r6@2
  int v9; // r0@4
  const char *v10; // r3@4
  Json::Value *v11; // r1@4
  int result; // r0@5

  v5 = this;
  v6 = a2;
  v7 = *((_QWORD *)this + 1);
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    j_j__ZNSt6vectorI17DefinitionTriggerSaIS0_EE19_M_emplace_back_auxIJEEEvDpOT_((unsigned __int64 *)((char *)v5 + 4));
    v8 = *((_DWORD *)v5 + 2);
  }
  else
    *(_DWORD *)v7 = 0;
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)v7 = &unk_28898CC;
    *(_DWORD *)(v7 + 4) = &unk_28898CC;
    *(_DWORD *)(v7 + 36) = 0;
    *(_DWORD *)(v7 + 28) = 0;
    *(_DWORD *)(v7 + 32) = 0;
    *(_DWORD *)(v7 + 20) = 0;
    *(_DWORD *)(v7 + 24) = 0;
    *(_DWORD *)(v7 + 12) = 0;
    *(_DWORD *)(v7 + 16) = 0;
    *(_DWORD *)(v7 + 8) = &off_26F1930;
    v8 = *((_DWORD *)v5 + 2) + 40;
    *((_DWORD *)v5 + 2) = v8;
  v9 = j_Json::Value::isMember(v6, "on_environment");
  v11 = (Json::Value *)(v8 - 40);
  if ( v9 == 1 )
    result = j_j_j__ZN6Parser5parseERN4Json5ValueER17DefinitionTriggerPKc_1(
               v6,
               v11,
               (DefinitionTrigger *)"on_environment",
               v10);
    j_Parser::parse((int)v6, (int *)v11, "event", (const char *)&unk_257BC67);
    j_Parser::parse((int)v6, (int *)(v8 - 36), "target", "self");
    result = j_j_j__ZN6Parser5parseERKN4Json5ValueER11FilterGroupPKcS7__0(
               (const Json::Value *)(v8 - 32),
               (FilterGroup *)"filters",
               (const char *)&unk_257BC67,
               a5);
  return result;
}


void __fastcall EnvironmentSensorDescription::~EnvironmentSensorDescription(EnvironmentSensorDescription *this)
{
  EnvironmentSensorDescription *v1; // r11@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int *v10; // r0@20

  v1 = this;
  *(_DWORD *)this = &off_271E81C;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      j_FilterGroup::~FilterGroup((FilterGroup *)(v2 + 8));
      v8 = *(_DWORD *)(v2 + 4);
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v8 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v10 = (int *)(*(_DWORD *)v2 - 12);
      if ( v10 != &dword_28898C0 )
        v6 = (unsigned int *)(*(_DWORD *)v2 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v2 += 40;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 1);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  j_operator delete((void *)v1);
}
