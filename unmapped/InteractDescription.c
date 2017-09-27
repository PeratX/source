

Interaction *__fastcall InteractDescription::parseData(InteractDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  InteractDescription *v3; // r4@1
  Interaction *result; // r0@2
  Json::Value *v5; // r0@5
  char v6; // [sp+4h] [bp-24h]@4
  char v7; // [sp+Ch] [bp-1Ch]@4

  v2 = a2;
  v3 = this;
  if ( j_Json::Value::isObject(a2) == 1 )
  {
    result = j_j_j__ZN19InteractDescription16parseInteractionERN4Json5ValueE_0(v3, v2);
  }
  else
    result = (Interaction *)j_Json::Value::isArray(v2);
    if ( result == (Interaction *)1 )
    {
      j_Json::Value::begin((Json::Value *)&v7, (int)v2);
      j_Json::Value::end((Json::Value *)&v6, (int)v2);
      result = (Interaction *)j_Json::ValueIteratorBase::isEqual(
                                (Json::ValueIteratorBase *)&v7,
                                (const Json::ValueIteratorBase *)&v6);
      if ( result != (Interaction *)1 )
      {
        do
        {
          v5 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v7);
          j_InteractDescription::parseInteraction(v3, v5);
          j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v7);
          result = (Interaction *)j_Json::ValueIteratorBase::isEqual(
                                    (Json::ValueIteratorBase *)&v7,
                                    (const Json::ValueIteratorBase *)&v6);
        }
        while ( !result );
      }
    }
  return result;
}


Interaction *__fastcall InteractDescription::parseInteraction(InteractDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  InteractDescription *v3; // r4@1
  const char *v8; // r3@1
  const char *v9; // r3@3
  const char *v10; // r3@5
  __int64 v11; // r0@8
  const char *v13; // [sp+0h] [bp-98h]@1
  char v14; // [sp+10h] [bp-88h]@1
  float v15; // [sp+24h] [bp-74h]@1
  int v16; // [sp+28h] [bp-70h]@1
  char v17; // [sp+2Ch] [bp-6Ch]@1
  char v18; // [sp+2Dh] [bp-6Bh]@1
  int v19; // [sp+30h] [bp-68h]@1
  int v20; // [sp+34h] [bp-64h]@1
  int v21; // [sp+38h] [bp-60h]@1
  void *v22; // [sp+3Ch] [bp-5Ch]@1
  void *v23; // [sp+40h] [bp-58h]@1
  void *v24; // [sp+44h] [bp-54h]@1
  int v25; // [sp+48h] [bp-50h]@1
  int v26; // [sp+4Ch] [bp-4Ch]@1
  int v27; // [sp+50h] [bp-48h]@1
  int v28; // [sp+54h] [bp-44h]@1
  int v29; // [sp+58h] [bp-40h]@1
  int v30; // [sp+5Ch] [bp-3Ch]@1
  void *v31; // [sp+60h] [bp-38h]@1
  void *v32; // [sp+64h] [bp-34h]@1
  void **v33; // [sp+68h] [bp-30h]@1
  int v34; // [sp+6Ch] [bp-2Ch]@1
  int v35; // [sp+70h] [bp-28h]@1
  int v36; // [sp+74h] [bp-24h]@1
  int v37; // [sp+78h] [bp-20h]@1
  int v38; // [sp+7Ch] [bp-1Ch]@1
  int v39; // [sp+80h] [bp-18h]@1
  int v40; // [sp+84h] [bp-14h]@1

  v2 = a2;
  v3 = this;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = &unk_28898CC;
  v23 = &unk_28898CC;
  v28 = 0;
  v29 = 0;
  v26 = 0;
  v27 = 0;
  v24 = &unk_28898CC;
  v25 = 0;
  v30 = 0;
  v31 = &unk_28898CC;
  v32 = &unk_28898CC;
  v40 = 0;
  v38 = 0;
  v39 = 0;
  v36 = 0;
  v37 = 0;
  v34 = 0;
  v35 = 0;
  v33 = &off_26F1930;
  j_Parser::parse(a2, (const Json::Value *)&v15, (float *)"cooldown", 0, *(float *)&v13);
  __asm
  {
    VMOV.F32        S0, #20.0
    VLDR            S2, [SP,#0x98+var_74]
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [SP,#0x98+var_70]
  }
  j_Parser::parse(v2, (const Json::Value *)((unsigned int)&v16 | 4), (bool *)"swing", 0, (bool)v13);
  j_Parser::parse(v2, (const Json::Value *)((unsigned int)&v16 | 5), (bool *)"use_item", 0, (bool)v13);
  j_Parser::parse(v2, (const Json::Value *)&v19, (int *)"hurt_item", 0, (int)v13);
  j_Parser::parse((int)v2, (int *)&v22, "interact_text", (const char *)&unk_257BC67);
  j_Json::Value::Value(&v14, 0);
  j_Parser::parse(v2, (const Json::Value *)&v14, (Json::Value *)"add_items", v8);
  if ( j_Json::Value::isObject((Json::Value *)&v14) == 1 )
    j_Parser::parse((int)&v14, (int *)&v23, "table", (const char *)&unk_257BC67);
  j_Json::Value::Value(&v13, 0);
  j_Parser::parse(v2, (const Json::Value *)&v13, (Json::Value *)"spawn_items", v9);
  if ( j_Json::Value::isObject((Json::Value *)&v13) == 1 )
    j_Parser::parse((int)&v13, (int *)&v24, "table", (const char *)&unk_257BC67);
  j_Parser::parse((int)v2, (int)&v20, "transform_to_item", (const char *)&unk_257BC67);
  j_Parser::parse((int)v2, (int)&v25, "play_sounds", (const char *)&unk_257BC67);
  j_Parser::parse((int)v2, (int)&v28, "spawn_entities", (const char *)&unk_257BC67);
  if ( j_Json::Value::isMember(v2, "on_interact") == 1 )
    j_Parser::parse(v2, (Json::Value *)&v31, (DefinitionTrigger *)"on_interact", v10);
  else
    j_Parser::parse((int)v2, (int *)&v31, "event", (const char *)&unk_257BC67);
    j_Parser::parse((int)v2, (int *)&v32, "target", "self");
    j_Parser::parse(v2, (const Json::Value *)&v33, (FilterGroup *)"filters", (const char *)&unk_257BC67, v13);
  v11 = *((_QWORD *)v3 + 1);
  if ( (_DWORD)v11 == HIDWORD(v11) )
    j_std::vector<Interaction,std::allocator<Interaction>>::_M_emplace_back_aux<Interaction&>(
      (unsigned __int64 *)((char *)v3 + 4),
      (int)&v16);
    j_Interaction::Interaction(v11, (int)&v16);
    *((_DWORD *)v3 + 2) += 96;
  j_Json::Value::~Value((Json::Value *)&v13);
  j_Json::Value::~Value((Json::Value *)&v14);
  return j_Interaction::~Interaction((Interaction *)&v16);
}


void __fastcall InteractDescription::~InteractDescription(InteractDescription *this)
{
  InteractDescription *v1; // r4@1
  Interaction *v2; // r0@1
  Interaction *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271E8AC;
  v3 = (Interaction *)(*(_QWORD *)((char *)this + 4) >> 32);
  v2 = (Interaction *)*(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
      v2 = (Interaction *)((char *)j_Interaction::~Interaction(v2) + 96);
    while ( v3 != v2 );
    v2 = (Interaction *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall InteractDescription::getDocumentation(int a1, int a2)
{
  InteractDescription::getDocumentation(a1, a2);
}


void __fastcall InteractDescription::~InteractDescription(InteractDescription *this)
{
  InteractDescription::~InteractDescription(this);
}


const char *__fastcall InteractDescription::getDescription(InteractDescription *this)
{
  return "Defines interactions with this entity.";
}


InteractDescription *__fastcall InteractDescription::~InteractDescription(InteractDescription *this)
{
  InteractDescription *v1; // r4@1
  Interaction *v2; // r0@1
  Interaction *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271E8AC;
  v3 = (Interaction *)(*(_QWORD *)((char *)this + 4) >> 32);
  v2 = (Interaction *)*(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
      v2 = (Interaction *)((char *)j_Interaction::~Interaction(v2) + 96);
    while ( v3 != v2 );
    v2 = (Interaction *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  return v1;
}


void __fastcall InteractDescription::getDocumentation(int a1, int a2)
{
  int v2; // r6@1
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
  int *v15; // r0@10
  void *v16; // r0@10
  void *v17; // r0@11
  void *v18; // r0@12
  int *v19; // r0@13
  void *v20; // r0@13
  void *v21; // r0@14
  void *v22; // r0@15
  int *v23; // r0@16
  char *v24; // r5@16
  void *v25; // r0@16
  void *v26; // r0@17
  void *v27; // r0@18
  int *v28; // r0@19
  void *v29; // r0@19
  void *v30; // r0@20
  void *v31; // r0@21
  int *v32; // r0@22
  char *v33; // r5@22
  void *v34; // r0@22
  void *v35; // r0@23
  void *v36; // r0@24
  int *v37; // r0@25
  void *v38; // r0@25
  void *v39; // r0@26
  void *v40; // r0@27
  int *v41; // r0@28
  void *v42; // r0@28
  void *v43; // r0@29
  void *v44; // r0@30
  int *v45; // r0@31
  void *v46; // r0@31
  void *v47; // r0@32
  void *v48; // r0@33
  int *v49; // r0@34
  void *v50; // r0@34
  void *v51; // r0@35
  void *v52; // r0@36
  int *v53; // r0@37
  void *v54; // r0@37
  void *v55; // r0@38
  void *v56; // r0@39
  unsigned int *v57; // r2@41
  signed int v58; // r1@43
  unsigned int *v59; // r2@45
  signed int v60; // r1@47
  unsigned int *v61; // r2@49
  signed int v62; // r1@51
  unsigned int *v63; // r2@53
  signed int v64; // r1@55
  unsigned int *v65; // r2@57
  signed int v66; // r1@59
  unsigned int *v67; // r2@61
  signed int v68; // r1@63
  unsigned int *v69; // r2@65
  signed int v70; // r1@67
  unsigned int *v71; // r2@69
  signed int v72; // r1@71
  unsigned int *v73; // r2@73
  signed int v74; // r1@75
  unsigned int *v75; // r2@77
  signed int v76; // r1@79
  unsigned int *v77; // r2@81
  signed int v78; // r1@83
  unsigned int *v79; // r2@85
  signed int v80; // r1@87
  unsigned int *v81; // r2@89
  signed int v82; // r1@91
  unsigned int *v83; // r2@93
  signed int v84; // r1@95
  unsigned int *v85; // r2@97
  signed int v86; // r1@99
  unsigned int *v87; // r2@101
  signed int v88; // r1@103
  unsigned int *v89; // r2@105
  signed int v90; // r1@107
  unsigned int *v91; // r2@109
  signed int v92; // r1@111
  unsigned int *v93; // r2@113
  signed int v94; // r1@115
  unsigned int *v95; // r2@117
  signed int v96; // r1@119
  unsigned int *v97; // r2@121
  signed int v98; // r1@123
  unsigned int *v99; // r2@125
  signed int v100; // r1@127
  unsigned int *v101; // r2@129
  signed int v102; // r1@131
  unsigned int *v103; // r2@133
  signed int v104; // r1@135
  unsigned int *v105; // r2@137
  signed int v106; // r1@139
  unsigned int *v107; // r2@141
  signed int v108; // r1@143
  unsigned int *v109; // r2@145
  signed int v110; // r1@147
  unsigned int *v111; // r2@149
  signed int v112; // r1@151
  unsigned int *v113; // r2@153
  signed int v114; // r1@155
  unsigned int *v115; // r2@157
  signed int v116; // r1@159
  unsigned int *v117; // r2@161
  signed int v118; // r1@163
  unsigned int *v119; // r2@165
  signed int v120; // r1@167
  unsigned int *v121; // r2@169
  signed int v122; // r1@171
  unsigned int *v123; // r2@173
  signed int v124; // r1@175
  unsigned int *v125; // r2@177
  signed int v126; // r1@179
  unsigned int *v127; // r2@181
  signed int v128; // r1@183
  unsigned int *v129; // r2@185
  signed int v130; // r1@187
  unsigned int *v131; // r2@189
  signed int v132; // r1@191
  unsigned int *v133; // r2@193
  signed int v134; // r1@195
  int v135; // [sp+8h] [bp-148h]@37
  int v136; // [sp+10h] [bp-140h]@37
  int v137; // [sp+18h] [bp-138h]@37
  int v138; // [sp+20h] [bp-130h]@34
  int v139; // [sp+28h] [bp-128h]@34
  int v140; // [sp+30h] [bp-120h]@34
  int v141; // [sp+38h] [bp-118h]@31
  int v142; // [sp+40h] [bp-110h]@31
  int v143; // [sp+48h] [bp-108h]@31
  int v144; // [sp+50h] [bp-100h]@28
  int v145; // [sp+58h] [bp-F8h]@28
  int v146; // [sp+60h] [bp-F0h]@28
  int v147; // [sp+68h] [bp-E8h]@25
  int v148; // [sp+70h] [bp-E0h]@25
  int v149; // [sp+78h] [bp-D8h]@25
  int v150; // [sp+80h] [bp-D0h]@22
  int v151; // [sp+88h] [bp-C8h]@22
  int v152; // [sp+90h] [bp-C0h]@22
  int v153; // [sp+98h] [bp-B8h]@19
  int v154; // [sp+A0h] [bp-B0h]@19
  int v155; // [sp+A8h] [bp-A8h]@19
  int v156; // [sp+B0h] [bp-A0h]@16
  int v157; // [sp+B8h] [bp-98h]@16
  int v158; // [sp+C0h] [bp-90h]@16
  int v159; // [sp+C8h] [bp-88h]@13
  int v160; // [sp+D0h] [bp-80h]@13
  int v161; // [sp+D8h] [bp-78h]@13
  int v162; // [sp+E0h] [bp-70h]@10
  int v163; // [sp+E8h] [bp-68h]@10
  int v164; // [sp+F0h] [bp-60h]@10
  int v165; // [sp+F8h] [bp-58h]@7
  int v166; // [sp+100h] [bp-50h]@7
  int v167; // [sp+108h] [bp-48h]@7
  int v168; // [sp+110h] [bp-40h]@4
  int v169; // [sp+118h] [bp-38h]@4
  int v170; // [sp+120h] [bp-30h]@4
  int v171; // [sp+128h] [bp-28h]@1
  int v172; // [sp+130h] [bp-20h]@1
  int v173; // [sp+138h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v173, "cooldown");
  sub_21E94B4((void **)&v172, "0.0");
  v3 = (int *)sub_21E94B4((void **)&v171, "Time in seconds before this entity can be interacted with again");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v173, &v172, v3);
  v4 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
  {
    v57 = (unsigned int *)(v171 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
    }
    else
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v172 - 12);
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v172 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v173 - 12);
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v173 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v170, "swing");
  sub_21E94B4((void **)&v169, "false");
  v7 = (int *)sub_21E94B4(
                (void **)&v168,
                "If true, the player will do the 'swing' animation when interacting with this entity");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v170, &v169, v7);
  v8 = (void *)(v168 - 12);
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v168 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v169 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v170 - 12);
  if ( (int *)(v170 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v170 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v167, "use_item");
  sub_21E94B4((void **)&v166, "false");
  v11 = (int *)sub_21E94B4((void **)&v165, "If true, the interaction will use an item");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v167, &v166, v11);
  v12 = (void *)(v165 - 12);
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v165 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v166 - 12);
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v166 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v167 - 12);
  if ( (int *)(v167 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v167 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v164, "hurt_item");
  sub_21E94B4((void **)&v163, "0");
  v15 = (int *)sub_21E94B4(
                 (void **)&v162,
                 "The amount of damage the item will take when used to interact with this entity. A value of 0 means the "
                 "item won't lose durability");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v164, &v163, v15);
  v16 = (void *)(v162 - 12);
  if ( (int *)(v162 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v162 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v163 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v164 - 12);
  if ( (int *)(v164 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v164 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v161, "interact_text");
  sub_21E94B4((void **)&v160, (const char *)&unk_257BC67);
  v19 = (int *)sub_21E94B4(
                 (void **)&v159,
                 "Text to show when the player is able to interact in this way with this entity when playing with Touch-screen controls");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v161, &v160, v19);
  v20 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v159 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v160 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v161 - 12);
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v161 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v158, "add_items");
  sub_21E94B4((void **)&v157, (const char *)&unk_257BC67);
  v23 = (int *)sub_21E94B4(
                 (void **)&v156,
                 "Loot table with items to add to the player's inventory upon successful interaction");
  v24 = j_DocumentationSystem::Node::addNode(
          v2,
          (int *)&DocumentationSystem::OBJECT_TYPE,
          (const void **)&v158,
          &v157,
          v23);
  v25 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v156 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v157 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v158 - 12);
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v158 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v24[4] = 1;
  sub_21E94B4((void **)&v155, "table");
  sub_21E94B4((void **)&v154, (const char *)&unk_257BC67);
  v28 = (int *)sub_21E94B4((void **)&v153, "File path, relative to the Behavior Pack's path, to the loot table file");
  j_DocumentationSystem::Node::addNode(
    (int)v24,
    (int *)&DocumentationSystem::STRING_TYPE,
    (const void **)&v155,
    &v154,
    v28);
  v29 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v153 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v154 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v155 - 12);
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v155 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  sub_21E94B4((void **)&v152, "spawn_items");
  sub_21E94B4((void **)&v151, (const char *)&unk_257BC67);
  v32 = (int *)sub_21E94B4((void **)&v150, "Loot table with items to drop on the ground upon successful interaction");
  v33 = j_DocumentationSystem::Node::addNode(
          (const void **)&v152,
          &v151,
          v32);
  v34 = (void *)(v150 - 12);
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v150 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v101 = (unsigned int *)(v151 - 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = (void *)(v152 - 12);
  if ( (int *)(v152 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v152 - 4);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v33[4] = 1;
  sub_21E94B4((void **)&v149, "table");
  sub_21E94B4((void **)&v148, (const char *)&unk_257BC67);
  v37 = (int *)sub_21E94B4((void **)&v147, "File path, relative to the Behavior Pack's path, to the loot table file");
    (int)v33,
    (const void **)&v149,
    &v148,
    v37);
  v38 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v147 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  v39 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v148 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v149 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  sub_21E94B4((void **)&v146, "transform_to_item");
  sub_21E94B4((void **)&v145, (const char *)&unk_257BC67);
  v41 = (int *)sub_21E94B4(
                 (void **)&v144,
                 "The item used will transform to this item upon successful interaction. Format: itemName:auxValue");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v146, &v145, v41);
  v42 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v111 = (unsigned int *)(v144 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  v43 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v145 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v146 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  sub_21E94B4((void **)&v143, "play_sounds");
  sub_21E94B4((void **)&v142, (const char *)&unk_257BC67);
  v45 = (int *)sub_21E94B4((void **)&v141, "List of sounds to play when the interaction occurs");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v143, &v142, v45);
  v46 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v141 - 4);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  v47 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v119 = (unsigned int *)(v142 - 4);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  v48 = (void *)(v143 - 12);
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v121 = (unsigned int *)(v143 - 4);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  sub_21E94B4((void **)&v140, "spawn_entities");
  sub_21E94B4((void **)&v139, (const char *)&unk_257BC67);
  v49 = (int *)sub_21E94B4((void **)&v138, "List of entities to spawn when the interaction occurs");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v140, &v139, v49);
  v50 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v123 = (unsigned int *)(v138 - 4);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  v51 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v125 = (unsigned int *)(v139 - 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 <= 0 )
      j_j_j_j__ZdlPv_9(v51);
  v52 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v127 = (unsigned int *)(v140 - 4);
        v128 = __ldrex(v127);
      while ( __strex(v128 - 1, v127) );
      v128 = (*v127)--;
    if ( v128 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  sub_21E94B4((void **)&v137, "on_interact");
  sub_21E94B4((void **)&v136, (const char *)&unk_257BC67);
  v53 = (int *)sub_21E94B4((void **)&v135, "Event to fire when the interaction occurs");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v137, &v136, v53);
  v54 = (void *)(v135 - 12);
  if ( (int *)(v135 - 12) != &dword_28898C0 )
    v129 = (unsigned int *)(v135 - 4);
        v130 = __ldrex(v129);
      while ( __strex(v130 - 1, v129) );
      v130 = (*v129)--;
    if ( v130 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  v55 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v131 = (unsigned int *)(v136 - 4);
        v132 = __ldrex(v131);
      while ( __strex(v132 - 1, v131) );
      v132 = (*v131)--;
    if ( v132 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  v56 = (void *)(v137 - 12);
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v133 = (unsigned int *)(v137 - 4);
        v134 = __ldrex(v133);
      while ( __strex(v134 - 1, v133) );
      v134 = (*v133)--;
    if ( v134 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
}


const char *__fastcall InteractDescription::getJsonName(InteractDescription *this)
{
  return "minecraft:interact";
}
