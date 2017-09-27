

void __fastcall NameableDescription::~NameableDescription(NameableDescription *this)
{
  NameableDescription *v1; // r0@1

  v1 = j_NameableDescription::~NameableDescription(this);
  j_j_j__ZdlPv_7((void *)v1);
}


Json::Value *__fastcall NameableDescription::parseData(NameableDescription *this, Json::Value *a2)
{
  NameableDescription *v2; // r5@1
  Json::Value *v3; // r8@1
  __int64 v4; // kr00_8@1
  NameAction *v5; // r0@2
  const char *v6; // r3@4
  const char *v7; // r3@4
  Json::Value *v8; // r0@10
  bool v10; // [sp+0h] [bp-38h]@9
  char v11; // [sp+8h] [bp-30h]@8
  char v12; // [sp+10h] [bp-28h]@4

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 4);
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = (NameAction *)v4;
    do
      v5 = (NameAction *)((char *)j_NameAction::~NameAction(v5) + 52);
    while ( (NameAction *)HIDWORD(v4) != v5 );
  }
  *((_DWORD *)v2 + 2) = v4;
  j_Json::Value::Value(&v12, 0);
  j_Parser::parse(v3, (const Json::Value *)&v12, (Json::Value *)"name_actions", v6);
  if ( !j_Json::Value::isNull((Json::Value *)&v12) )
    if ( j_Json::Value::isObject((Json::Value *)&v12) == 1 )
    {
      j_NameableDescription::parseNameActions(v2, (Json::Value *)&v12);
    }
    else if ( j_Json::Value::isArray((Json::Value *)&v12) == 1 )
      j_Json::Value::begin((Json::Value *)&v11, (int)&v12);
      while ( 1 )
      {
        j_Json::Value::end((Json::Value *)&v10, (int)&v12);
        if ( j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v11, (const Json::ValueIteratorBase *)&v10) == 1 )
          break;
        v8 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v11);
        j_NameableDescription::parseNameActions(v2, v8);
        j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v11);
      }
  j_Parser::parse(v3, (NameableDescription *)((char *)v2 + 16), (DefinitionTrigger *)"default_trigger", v7);
  j_Parser::parse(v3, (NameableDescription *)((char *)v2 + 56), (bool *)"alwaysShow", 0, v10);
  j_Parser::parse(v3, (NameableDescription *)((char *)v2 + 57), (bool *)"allowNameTagRenaming", (const char *)1, v10);
  return j_Json::Value::~Value((Json::Value *)&v12);
}


const char *__fastcall NameableDescription::getJsonName(NameableDescription *this)
{
  return "minecraft:nameable";
}


NameAction *__fastcall NameableDescription::parseNameActions(NameableDescription *this, Json::Value *a2)
{
  NameableDescription *v2; // r4@1
  Json::Value *v3; // r6@1
  __int64 v4; // kr00_8@1
  __int64 v5; // r0@2
  char *v6; // r2@2
  signed int v7; // r0@2
  unsigned int v8; // r6@2
  int v10; // [sp+0h] [bp-60h]@1
  int v11; // [sp+4h] [bp-5Ch]@1
  int v12; // [sp+8h] [bp-58h]@1
  void *v13; // [sp+Ch] [bp-54h]@1
  void *v14; // [sp+10h] [bp-50h]@1
  void **v15; // [sp+14h] [bp-4Ch]@1
  int v16; // [sp+18h] [bp-48h]@1
  int v17; // [sp+1Ch] [bp-44h]@1
  int v18; // [sp+20h] [bp-40h]@1
  int v19; // [sp+24h] [bp-3Ch]@1
  int v20; // [sp+28h] [bp-38h]@1
  int v21; // [sp+2Ch] [bp-34h]@1
  int v22; // [sp+30h] [bp-30h]@1

  v2 = this;
  v3 = a2;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = &unk_28898CC;
  v14 = &unk_28898CC;
  v22 = 0;
  v20 = 0;
  v21 = 0;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v15 = &off_26F1930;
  j_Parser::parse(a2, (Json::Value *)&v13, (DefinitionTrigger *)"on_named", 0);
  j_Parser::parse((int)v3, (int)&v10, "name_filter");
  v4 = *((_QWORD *)v2 + 1);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    j_std::vector<NameAction,std::allocator<NameAction>>::_M_emplace_back_aux<NameAction const&>(
      (unsigned __int64 *)((char *)v2 + 4),
      (int)&v10);
  }
  else
    v5 = *(_QWORD *)&v10;
    v6 = 0;
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(v4 + 4) = 0;
    v7 = HIDWORD(v5) - v5;
    *(_DWORD *)(v4 + 8) = 0;
    v8 = v7 >> 2;
    if ( v7 >> 2 )
    {
      if ( v8 >= 0x40000000 )
        sub_21E57F4();
      v6 = (char *)j_operator new(v7);
    }
    *(_DWORD *)v4 = v6;
    *(_DWORD *)(v4 + 4) = v6;
    *(_DWORD *)(v4 + 8) = &v6[4 * v8];
    *(_DWORD *)(v4 + 4) = j_std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                            v10,
                            v11,
                            (int)v6);
    j_DefinitionTrigger::DefinitionTrigger((int *)(v4 + 12), (int *)&v13);
    *((_DWORD *)v2 + 2) += 52;
  return j_NameAction::~NameAction((NameAction *)&v10);
}


void __fastcall NameableDescription::~NameableDescription(NameableDescription *this)
{
  NameableDescription::~NameableDescription(this);
}


const char *__fastcall NameableDescription::getDescription(NameableDescription *this)
{
  return "Allows this entity to be named (e.g. using a name tag)";
}


NameableDescription *__fastcall NameableDescription::~NameableDescription(NameableDescription *this)
{
  NameableDescription *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  NameAction *v6; // r0@3
  NameAction *v7; // r5@3
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  unsigned int *v11; // r2@13
  signed int v12; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_271EA14;
  FilterGroup::~FilterGroup((NameableDescription *)((char *)this + 24));
  v2 = *((_DWORD *)v1 + 5);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 4);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v4 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v7 = (NameAction *)(*(_QWORD *)((char *)v1 + 4) >> 32);
  v6 = (NameAction *)*(_QWORD *)((char *)v1 + 4);
  if ( v6 != v7 )
    do
      v6 = (NameAction *)((char *)NameAction::~NameAction(v6) + 52);
    while ( v7 != v6 );
    v6 = (NameAction *)*((_DWORD *)v1 + 1);
  if ( v6 )
    operator delete((void *)v6);
  return v1;
}


void __fastcall NameableDescription::getDocumentation(int a1, int a2)
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
  int *v16; // r0@10
  void *v17; // r0@10
  void *v18; // r0@11
  void *v19; // r0@12
  int *v20; // r0@13
  void *v21; // r0@13
  void *v22; // r0@14
  void *v23; // r0@15
  int *v24; // r0@16
  void *v25; // r0@16
  void *v26; // r0@17
  void *v27; // r0@18
  unsigned int *v28; // r2@20
  signed int v29; // r1@22
  unsigned int *v30; // r2@24
  signed int v31; // r1@26
  unsigned int *v32; // r2@28
  signed int v33; // r1@30
  unsigned int *v34; // r2@32
  signed int v35; // r1@34
  unsigned int *v36; // r2@36
  signed int v37; // r1@38
  unsigned int *v38; // r2@40
  signed int v39; // r1@42
  unsigned int *v40; // r2@44
  signed int v41; // r1@46
  unsigned int *v42; // r2@48
  signed int v43; // r1@50
  unsigned int *v44; // r2@52
  signed int v45; // r1@54
  unsigned int *v46; // r2@56
  signed int v47; // r1@58
  unsigned int *v48; // r2@60
  signed int v49; // r1@62
  unsigned int *v50; // r2@64
  signed int v51; // r1@66
  unsigned int *v52; // r2@68
  signed int v53; // r1@70
  unsigned int *v54; // r2@72
  signed int v55; // r1@74
  unsigned int *v56; // r2@76
  signed int v57; // r1@78
  unsigned int *v58; // r2@80
  signed int v59; // r1@82
  unsigned int *v60; // r2@84
  signed int v61; // r1@86
  unsigned int *v62; // r2@88
  signed int v63; // r1@90
  int v64; // [sp+8h] [bp-A0h]@16
  int v65; // [sp+10h] [bp-98h]@16
  int v66; // [sp+18h] [bp-90h]@16
  int v67; // [sp+20h] [bp-88h]@13
  int v68; // [sp+28h] [bp-80h]@13
  int v69; // [sp+30h] [bp-78h]@13
  int v70; // [sp+38h] [bp-70h]@10
  int v71; // [sp+40h] [bp-68h]@10
  int v72; // [sp+48h] [bp-60h]@10
  int v73; // [sp+50h] [bp-58h]@7
  int v74; // [sp+58h] [bp-50h]@7
  int v75; // [sp+60h] [bp-48h]@7
  int v76; // [sp+68h] [bp-40h]@4
  int v77; // [sp+70h] [bp-38h]@4
  int v78; // [sp+78h] [bp-30h]@4
  int v79; // [sp+80h] [bp-28h]@1
  int v80; // [sp+88h] [bp-20h]@1
  int v81; // [sp+90h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v81, "name_actions");
  sub_21E94B4((void **)&v80, (const char *)&unk_257BC67);
  v3 = (int *)sub_21E94B4(
                (void **)&v79,
                "Describes the special names for this entity and the events to call when the entity acquires those names");
  v4 = j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::OBJECT_TYPE, (const void **)&v81, &v80, v3);
  v5 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v79 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v80 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v81 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v4[4] = 1;
  sub_21E94B4((void **)&v78, "on_named");
  sub_21E94B4((void **)&v77, (const char *)&unk_257BC67);
  v8 = (int *)sub_21E94B4(
                (void **)&v76,
                "Event to be called when this entity acquires the name specified in 'name_filter'");
  j_DocumentationSystem::Node::addNode((int)v4, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v78, &v77, v8);
  v9 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v76 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v77 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v78 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v75, "name_filter");
  sub_21E94B4((void **)&v74, (const char *)&unk_257BC67);
  v12 = (int *)sub_21E94B4(
                 (void **)&v73,
                 "List of special names that will cause the events defined in 'on_named' to fire");
  j_DocumentationSystem::Node::addNode(
    (int)v4,
    (int *)&DocumentationSystem::STRING_TYPE,
    (const void **)&v75,
    &v74,
    v12);
  v13 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v73 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v74 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v75 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v72, "default_trigger");
  sub_21E94B4((void **)&v71, (const char *)&unk_257BC67);
  v16 = (int *)sub_21E94B4((void **)&v70, "Trigger to run when the entity gets named");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v72, &v71, v16);
  v17 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v70 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v71 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v72 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v69, "alwaysShow");
  sub_21E94B4((void **)&v68, "false");
  v20 = (int *)sub_21E94B4((void **)&v67, "If true, the name will always be shown");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v69, &v68, v20);
  v21 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v67 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v68 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v69 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v66, "allowNameTagRenaming");
  sub_21E94B4((void **)&v65, "true");
  v24 = (int *)sub_21E94B4((void **)&v64, "If true, this entity can be renamed with name tags");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v66, &v65, v24);
  v25 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v64 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v65 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v66 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
}


void __fastcall NameableDescription::getDocumentation(int a1, int a2)
{
  NameableDescription::getDocumentation(a1, a2);
}
