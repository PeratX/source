

int __fastcall DamageSensorDescription::parseData(DamageSensorDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  DamageSensorDescription *v3; // r4@1
  int result; // r0@2
  Json::Value *v5; // r0@5
  char v6; // [sp+4h] [bp-24h]@4
  char v7; // [sp+Ch] [bp-1Ch]@4

  v2 = a2;
  v3 = this;
  if ( j_Json::Value::isObject(a2) == 1 )
  {
    result = j_j_j__ZN23DamageSensorDescription12parseTriggerERN4Json5ValueE_0(v3, v2);
  }
  else
    result = j_Json::Value::isArray(v2);
    if ( result == 1 )
    {
      j_Json::Value::begin((Json::Value *)&v7, (int)v2);
      j_Json::Value::end((Json::Value *)&v6, (int)v2);
      result = j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v7, (const Json::ValueIteratorBase *)&v6);
      if ( result != 1 )
      {
        do
        {
          v5 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v7);
          j_DamageSensorDescription::parseTrigger(v3, v5);
          j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v7);
          result = j_Json::ValueIteratorBase::isEqual(
                     (Json::ValueIteratorBase *)&v7,
                     (const Json::ValueIteratorBase *)&v6);
        }
        while ( !result );
      }
    }
  return result;
}


DamageSensorDescription *__fastcall DamageSensorDescription::~DamageSensorDescription(DamageSensorDescription *this)
{
  DamageSensorDescription *v1; // r11@1
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
  *(_DWORD *)this = &off_271E7F8;
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
      v2 += 48;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 1);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  return v1;
}


int __fastcall DamageSensorDescription::parseTrigger(DamageSensorDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  DamageSensorDescription *v3; // r5@1
  __int64 v4; // kr00_8@1
  FilterGroup *v5; // r6@2
  char *v6; // r0@4
  char *v7; // r0@5
  int v8; // r6@6
  int v9; // r0@6
  const char *v10; // r3@6
  Json::Value *v11; // r1@6
  int result; // r0@7
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  const char *v17; // [sp+0h] [bp-48h]@1
  char *v18; // [sp+4h] [bp-44h]@1
  void **v19; // [sp+8h] [bp-40h]@1
  int v20; // [sp+Ch] [bp-3Ch]@1
  int v21; // [sp+10h] [bp-38h]@1
  int v22; // [sp+14h] [bp-34h]@1
  int v23; // [sp+18h] [bp-30h]@1
  int v24; // [sp+1Ch] [bp-2Ch]@1
  int v25; // [sp+20h] [bp-28h]@1
  int v26; // [sp+24h] [bp-24h]@1
  __int64 v27; // [sp+28h] [bp-20h]@2

  v2 = a2;
  v3 = this;
  j___aeabi_memclr8_0((int)&v17, 48);
  v17 = (const char *)&unk_28898CC;
  v18 = (char *)&unk_28898CC;
  v26 = 0;
  v24 = 0;
  v25 = 0;
  v22 = 0;
  v23 = 0;
  v20 = 0;
  v21 = 0;
  v19 = &off_26F1930;
  v4 = *((_QWORD *)v3 + 1);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    j_std::vector<DamageSensorTrigger,std::allocator<DamageSensorTrigger>>::_M_emplace_back_aux<DamageSensorTrigger>(
      (unsigned __int64 *)((char *)v3 + 4),
      (int)&v17);
    v5 = (FilterGroup *)&v19;
  }
  else
    *(_DWORD *)v4 = &unk_28898CC;
    v17 = (const char *)&unk_28898CC;
    *(_DWORD *)(v4 + 4) = v18;
    v18 = (char *)&unk_28898CC;
    j_FilterGroup::FilterGroup(v4 + 8, (int)&v19);
    *(_DWORD *)(v4 + 8) = &off_26F1930;
    *(_QWORD *)(v4 + 40) = v27;
    *((_DWORD *)v3 + 2) += 48;
  j_FilterGroup::~FilterGroup(v5);
  v6 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (char *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v3 + 2);
  j_Parser::parse(v2, (const Json::Value *)(v8 - 8), (bool *)"deals_damage", (const char *)1, (bool)v17);
  j_Parser::parse((int)v2, (signed int *)(v8 - 4), "cause", (const char *)&unk_257BC67);
  v9 = j_Json::Value::isMember(v2, "on_damage");
  v11 = (Json::Value *)(v8 - 48);
  if ( v9 == 1 )
    result = j_Parser::parse(v2, v11, (DefinitionTrigger *)"on_damage", v10);
    j_Parser::parse((int)v2, (int *)v11, "event", (const char *)&unk_257BC67);
    j_Parser::parse((int)v2, (int *)(v8 - 44), "target", "self");
    result = j_Parser::parse(
               v2,
               (const Json::Value *)(v8 - 40),
               (FilterGroup *)"filters",
               (const char *)&unk_257BC67,
               v17);
  return result;
}


void __fastcall DamageSensorDescription::~DamageSensorDescription(DamageSensorDescription *this)
{
  DamageSensorDescription *v1; // r11@1
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
  *(_DWORD *)this = &off_271E7F8;
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
      v2 += 48;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 1);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  j_operator delete((void *)v1);
}


const char *__fastcall DamageSensorDescription::getJsonName(DamageSensorDescription *this)
{
  return "minecraft:damage_sensor";
}


void __fastcall DamageSensorDescription::getDocumentation(int a1, int a2)
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
  sub_21E94B4((void **)&v41, "on_damage");
  sub_21E94B4((void **)&v40, (const char *)&unk_257BC67);
  v3 = (int *)sub_21E94B4(
                (void **)&v39,
                "List of triggers with the events to call when taking this specific kind of damage. Allows specifying fil"
                "ters for entity definitions and events");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::LIST_TYPE, (const void **)&v41, &v40, v3);
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
  sub_21E94B4((void **)&v38, "deals_damage");
  sub_21E94B4((void **)&v37, "true");
  v7 = (int *)sub_21E94B4(
                (void **)&v36,
                "If true, the damage dealt to the entity will take off health from it. Set to false to make the entity ig"
                "nore that damage");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v38, &v37, v7);
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
  sub_21E94B4((void **)&v35, "cause");
  sub_21E94B4((void **)&v34, (const char *)&unk_257BC67);
  v11 = (int *)sub_21E94B4((void **)&v33, "Type of damage that triggers this set of events");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v35, &v34, v11);
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


const char *__fastcall DamageSensorDescription::getDescription(DamageSensorDescription *this)
{
  return "Defines what events to call when this entity is damaged by specific entities or items. Can be either an array o"
         "r a single instance.";
}


void __fastcall DamageSensorDescription::getDocumentation(int a1, int a2)
{
  DamageSensorDescription::getDocumentation(a1, a2);
}


void __fastcall DamageSensorDescription::~DamageSensorDescription(DamageSensorDescription *this)
{
  DamageSensorDescription::~DamageSensorDescription(this);
}
