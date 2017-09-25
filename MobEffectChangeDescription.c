

MobEffectChangeDescription *__fastcall MobEffectChangeDescription::~MobEffectChangeDescription(MobEffectChangeDescription *this)
{
  MobEffectChangeDescription *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  void *v7; // r0@16

  v1 = this;
  *(_DWORD *)this = &off_271E744;
  v3 = (void *)(*((_QWORD *)this + 2) >> 32);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 4);
  }
  if ( v2 )
    j_operator delete(v2);
  v7 = (void *)*((_DWORD *)v1 + 1);
  if ( v7 )
    j_operator delete(v7);
  return v1;
}


void __fastcall MobEffectChangeDescription::getDocumentation(int a1, int a2)
{
  int v2; // r6@1
  int *v3; // r0@1
  char *v4; // r5@1
  void *v5; // r0@1
  void *v6; // r0@2
  void *v7; // r0@3
  int *v8; // r0@4
  void *v9; // r0@4
  void *v10; // r0@5
  void *v11; // r0@6
  int *v12; // r0@7
  void *v13; // r0@7
  void *v14; // r0@8
  void *v15; // r0@9
  unsigned int *v16; // r2@11
  signed int v17; // r1@13
  unsigned int *v18; // r2@15
  signed int v19; // r1@17
  unsigned int *v20; // r2@19
  signed int v21; // r1@21
  unsigned int *v22; // r2@23
  signed int v23; // r1@25
  unsigned int *v24; // r2@27
  signed int v25; // r1@29
  unsigned int *v26; // r2@31
  signed int v27; // r1@33
  unsigned int *v28; // r2@35
  signed int v29; // r1@37
  unsigned int *v30; // r2@39
  signed int v31; // r1@41
  unsigned int *v32; // r2@43
  signed int v33; // r1@45
  int v34; // [sp+8h] [bp-58h]@7
  int v35; // [sp+10h] [bp-50h]@7
  int v36; // [sp+18h] [bp-48h]@7
  int v37; // [sp+20h] [bp-40h]@4
  int v38; // [sp+28h] [bp-38h]@4
  int v39; // [sp+30h] [bp-30h]@4
  int v40; // [sp+38h] [bp-28h]@1
  int v41; // [sp+40h] [bp-20h]@1
  int v42; // [sp+48h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v42, "add_effects");
  sub_21E94B4((void **)&v41, (const char *)&unk_257BC67);
  v3 = (int *)sub_21E94B4((void **)&v40, "List of effects to add to this entity after adding this component");
  v4 = j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::LIST_TYPE, (const void **)&v42, &v41, v3);
  v5 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v41 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v42 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v4[4] = 1;
  sub_21E94B4((void **)&v39, "effect");
  sub_21E94B4((void **)&v38, (const char *)&unk_257BC67);
  v8 = (int *)sub_21E94B4(
                (void **)&v37,
                "Effect to add to this entity. Includes 'duration' in seconds, 'amplifier' level, 'ambient' if it is to b"
                "e considered an ambient effect, and 'visible' if the effect should be visible");
  j_DocumentationSystem::Node::addNode((int)v4, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v39, &v38, v8);
  v9 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v37 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v38 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v39 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v36, "remove_effects");
  sub_21E94B4((void **)&v35, (const char *)&unk_257BC67);
  v12 = (int *)sub_21E94B4(
                 (void **)&v34,
                 "List of names of effects to be removed from this entity after adding this component");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v36, &v35, v12);
  v13 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v34 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v35 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v36 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}


const char *__fastcall MobEffectChangeDescription::getDescription(MobEffectChangeDescription *this)
{
  return "Defines what mob effects to add and remove to the entity when adding this component.";
}


void __fastcall MobEffectChangeDescription::getDocumentation(int a1, int a2)
{
  MobEffectChangeDescription::getDocumentation(a1, a2);
}


void __fastcall MobEffectChangeDescription::~MobEffectChangeDescription(MobEffectChangeDescription *this)
{
  MobEffectChangeDescription::~MobEffectChangeDescription(this);
}


Json::Value *__fastcall MobEffectChangeDescription::parseData(MobEffectChangeDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r8@1
  MobEffectChangeDescription *v3; // r5@1
  const char *v4; // r3@1
  Parser *v5; // r4@5
  const char *v6; // r3@5
  __int64 v7; // r0@5
  int v8; // r2@6
  int v9; // r3@6
  int v10; // r4@6
  int v12; // [sp+0h] [bp-58h]@5
  int v13; // [sp+4h] [bp-54h]@6
  int v14; // [sp+8h] [bp-50h]@6
  int v15; // [sp+Ch] [bp-4Ch]@6
  char v16; // [sp+10h] [bp-48h]@3
  char v17; // [sp+18h] [bp-40h]@3
  char v18; // [sp+20h] [bp-38h]@1

  v2 = a2;
  v3 = this;
  j_Json::Value::Value(&v18, 0);
  j_Parser::parse(v2, (const Json::Value *)&v18, (Json::Value *)"add_effects", v4);
  if ( !j_Json::Value::isNull((Json::Value *)&v18) && j_Json::Value::isArray((Json::Value *)&v18) == 1 )
  {
    j_Json::Value::begin((Json::Value *)&v17, (int)&v18);
    j_Json::Value::end((Json::Value *)&v16, (int)&v18);
    while ( j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v17, (const Json::ValueIteratorBase *)&v16) != 1 )
    {
      v5 = (Parser *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v17);
      j_MobEffectInstance::MobEffectInstance((int)&v12);
      j_Parser::parse(v5, (const Json::Value *)&v12, (MobEffectInstance *)"effect", v6);
      v7 = *((_QWORD *)v3 + 1);
      if ( (_DWORD)v7 == HIDWORD(v7) )
      {
        j_std::vector<MobEffectInstance,std::allocator<MobEffectInstance>>::_M_emplace_back_aux<MobEffectInstance const&>(
          (unsigned __int64 *)((char *)v3 + 4),
          (int)&v12);
      }
      else
        v8 = v13;
        v9 = v14;
        v10 = v15;
        *(_DWORD *)v7 = v12;
        *(_DWORD *)(v7 + 4) = v8;
        *(_DWORD *)(v7 + 8) = v9;
        *(_DWORD *)(v7 + 12) = v10;
        *((_DWORD *)v3 + 2) += 16;
      j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v17);
    }
  }
  j_Parser::parse((int)v2, (int)v3 + 16, "remove_effects");
  return j_Json::Value::~Value((Json::Value *)&v18);
}


void __fastcall MobEffectChangeDescription::~MobEffectChangeDescription(MobEffectChangeDescription *this)
{
  MobEffectChangeDescription *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  void *v7; // r0@16

  v1 = this;
  *(_DWORD *)this = &off_271E744;
  v3 = (void *)(*((_QWORD *)this + 2) >> 32);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 4);
  }
  if ( v2 )
    j_operator delete(v2);
  v7 = (void *)*((_DWORD *)v1 + 1);
  if ( v7 )
    j_operator delete(v7);
  j_operator delete((void *)v1);
}


const char *__fastcall MobEffectChangeDescription::getJsonName(MobEffectChangeDescription *this)
{
  return "minecraft:spell_effects";
}
