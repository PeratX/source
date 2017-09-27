

const char *__fastcall BreedableDescription::getJsonName(BreedableDescription *this)
{
  return "minecraft:breedable";
}


BreedableType *__fastcall BreedableDescription::parseBreedTypes(BreedableDescription *this, Json::Value *a2)
{
  BreedableDescription *v2; // r4@1
  Json::Value *v3; // r5@1
  const char *v4; // r3@1
  __int64 v5; // r0@2
  _DWORD *v7; // [sp+0h] [bp-40h]@1
  void *v8; // [sp+4h] [bp-3Ch]@1
  void *v9; // [sp+8h] [bp-38h]@1
  void *v10; // [sp+Ch] [bp-34h]@1
  void **v11; // [sp+10h] [bp-30h]@1
  int v12; // [sp+14h] [bp-2Ch]@1
  int v13; // [sp+18h] [bp-28h]@1
  int v14; // [sp+1Ch] [bp-24h]@1
  int v15; // [sp+20h] [bp-20h]@1
  int v16; // [sp+24h] [bp-1Ch]@1
  int v17; // [sp+28h] [bp-18h]@1
  int v18; // [sp+2Ch] [bp-14h]@1

  v2 = this;
  v3 = a2;
  v7 = &unk_28898CC;
  v8 = &unk_28898CC;
  v9 = &unk_28898CC;
  v10 = &unk_28898CC;
  v18 = 0;
  v16 = 0;
  v17 = 0;
  v14 = 0;
  v15 = 0;
  v12 = 0;
  v13 = 0;
  v11 = &off_26F1930;
  j_Parser::parse((int)a2, (int *)&v7, "mateType", (const char *)&unk_257BC67);
  j_Parser::parse((int)v3, (int *)&v8, "babyType", (const char *)&unk_257BC67);
  j_Parser::parse(v3, (Json::Value *)&v9, (DefinitionTrigger *)"breed_event", v4);
  if ( *(v7 - 3) )
  {
    v5 = *((_QWORD *)v2 + 6);
    if ( (_DWORD)v5 == HIDWORD(v5) )
    {
      j_std::vector<BreedableType,std::allocator<BreedableType>>::_M_emplace_back_aux<BreedableType const&>(
        (unsigned __int64 *)((char *)v2 + 44),
        (int *)&v7);
    }
    else
      j_BreedableType::BreedableType((int *)v5, (int *)&v7);
      *((_DWORD *)v2 + 12) += 48;
  }
  return j_BreedableType::~BreedableType((BreedableType *)&v7);
}


void __fastcall BreedableDescription::getDocumentation(int a1, int a2)
{
  BreedableDescription::getDocumentation(a1, a2);
}


BreedableDescription *__fastcall BreedableDescription::~BreedableDescription(BreedableDescription *this)
{
  BreedableDescription *v1; // r4@1
  BreedableType *v2; // r0@1
  BreedableType *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271E7D4;
  v3 = (BreedableType *)(*(_QWORD *)((char *)this + 44) >> 32);
  v2 = (BreedableType *)*(_QWORD *)((char *)this + 44);
  if ( v2 != v3 )
  {
    do
      v2 = (BreedableType *)((char *)j_BreedableType::~BreedableType(v2) + 48);
    while ( v3 != v2 );
    v2 = (BreedableType *)*((_DWORD *)v1 + 11);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  j_std::_Rb_tree<Item const*,Item const*,std::_Identity<Item const*>,std::less<Item const*>,std::allocator<Item const*>>::_M_erase(
    (int)v1 + 20,
    *((_DWORD *)v1 + 7));
  return v1;
}


const char *__fastcall BreedableDescription::getDescription(BreedableDescription *this)
{
  return "Defines the way an entity can get into the 'love' state.";
}


void __fastcall BreedableDescription::~BreedableDescription(BreedableDescription *this)
{
  BreedableDescription::~BreedableDescription(this);
}


void __fastcall BreedableDescription::~BreedableDescription(BreedableDescription *this)
{
  BreedableDescription *v1; // r4@1
  BreedableType *v2; // r0@1
  BreedableType *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271E7D4;
  v3 = (BreedableType *)(*(_QWORD *)((char *)this + 44) >> 32);
  v2 = (BreedableType *)*(_QWORD *)((char *)this + 44);
  if ( v2 != v3 )
  {
    do
      v2 = (BreedableType *)((char *)j_BreedableType::~BreedableType(v2) + 48);
    while ( v3 != v2 );
    v2 = (BreedableType *)*((_DWORD *)v1 + 11);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  j_std::_Rb_tree<Item const*,Item const*,std::_Identity<Item const*>,std::less<Item const*>,std::allocator<Item const*>>::_M_erase(
    (int)v1 + 20,
    *((_DWORD *)v1 + 7));
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall BreedableDescription::getDocumentation(int a1, int a2)
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
  void *v33; // r0@22
  void *v34; // r0@23
  void *v35; // r0@24
  int *v36; // r0@25
  void *v37; // r0@25
  void *v38; // r0@26
  void *v39; // r0@27
  int *v40; // r0@28
  void *v41; // r0@28
  void *v42; // r0@29
  void *v43; // r0@30
  int *v44; // r0@31
  char *v45; // r4@31
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
  int *v57; // r0@40
  void *v58; // r0@40
  void *v59; // r0@41
  void *v60; // r0@42
  unsigned int *v61; // r2@44
  signed int v62; // r1@46
  unsigned int *v63; // r2@48
  signed int v64; // r1@50
  unsigned int *v65; // r2@52
  signed int v66; // r1@54
  unsigned int *v67; // r2@56
  signed int v68; // r1@58
  unsigned int *v69; // r2@60
  signed int v70; // r1@62
  unsigned int *v71; // r2@64
  signed int v72; // r1@66
  unsigned int *v73; // r2@68
  signed int v74; // r1@70
  unsigned int *v75; // r2@72
  signed int v76; // r1@74
  unsigned int *v77; // r2@76
  signed int v78; // r1@78
  unsigned int *v79; // r2@80
  signed int v80; // r1@82
  unsigned int *v81; // r2@84
  signed int v82; // r1@86
  unsigned int *v83; // r2@88
  signed int v84; // r1@90
  unsigned int *v85; // r2@92
  signed int v86; // r1@94
  unsigned int *v87; // r2@96
  signed int v88; // r1@98
  unsigned int *v89; // r2@100
  signed int v90; // r1@102
  unsigned int *v91; // r2@104
  signed int v92; // r1@106
  unsigned int *v93; // r2@108
  signed int v94; // r1@110
  unsigned int *v95; // r2@112
  signed int v96; // r1@114
  unsigned int *v97; // r2@116
  signed int v98; // r1@118
  unsigned int *v99; // r2@120
  signed int v100; // r1@122
  unsigned int *v101; // r2@124
  signed int v102; // r1@126
  unsigned int *v103; // r2@128
  signed int v104; // r1@130
  unsigned int *v105; // r2@132
  signed int v106; // r1@134
  unsigned int *v107; // r2@136
  signed int v108; // r1@138
  unsigned int *v109; // r2@140
  signed int v110; // r1@142
  unsigned int *v111; // r2@144
  signed int v112; // r1@146
  unsigned int *v113; // r2@148
  signed int v114; // r1@150
  unsigned int *v115; // r2@152
  signed int v116; // r1@154
  unsigned int *v117; // r2@156
  signed int v118; // r1@158
  unsigned int *v119; // r2@160
  signed int v120; // r1@162
  unsigned int *v121; // r2@164
  signed int v122; // r1@166
  unsigned int *v123; // r2@168
  signed int v124; // r1@170
  unsigned int *v125; // r2@172
  signed int v126; // r1@174
  unsigned int *v127; // r2@176
  signed int v128; // r1@178
  unsigned int *v129; // r2@180
  signed int v130; // r1@182
  unsigned int *v131; // r2@184
  signed int v132; // r1@186
  unsigned int *v133; // r2@188
  signed int v134; // r1@190
  unsigned int *v135; // r2@192
  signed int v136; // r1@194
  unsigned int *v137; // r2@196
  signed int v138; // r1@198
  unsigned int *v139; // r2@200
  signed int v140; // r1@202
  unsigned int *v141; // r2@204
  signed int v142; // r1@206
  unsigned int *v143; // r2@208
  signed int v144; // r1@210
  int v145; // [sp+8h] [bp-160h]@40
  int v146; // [sp+10h] [bp-158h]@40
  int v147; // [sp+18h] [bp-150h]@40
  int v148; // [sp+20h] [bp-148h]@37
  int v149; // [sp+28h] [bp-140h]@37
  int v150; // [sp+30h] [bp-138h]@37
  int v151; // [sp+38h] [bp-130h]@34
  int v152; // [sp+40h] [bp-128h]@34
  int v153; // [sp+48h] [bp-120h]@34
  int v154; // [sp+50h] [bp-118h]@31
  int v155; // [sp+58h] [bp-110h]@31
  int v156; // [sp+60h] [bp-108h]@31
  int v157; // [sp+68h] [bp-100h]@28
  int v158; // [sp+70h] [bp-F8h]@28
  int v159; // [sp+78h] [bp-F0h]@28
  int v160; // [sp+80h] [bp-E8h]@25
  int v161; // [sp+88h] [bp-E0h]@25
  int v162; // [sp+90h] [bp-D8h]@25
  int v163; // [sp+98h] [bp-D0h]@22
  int v164; // [sp+A0h] [bp-C8h]@22
  int v165; // [sp+A8h] [bp-C0h]@22
  int v166; // [sp+B0h] [bp-B8h]@19
  int v167; // [sp+B8h] [bp-B0h]@19
  int v168; // [sp+C0h] [bp-A8h]@19
  int v169; // [sp+C8h] [bp-A0h]@16
  int v170; // [sp+D0h] [bp-98h]@16
  int v171; // [sp+D8h] [bp-90h]@16
  int v172; // [sp+E0h] [bp-88h]@13
  int v173; // [sp+E8h] [bp-80h]@13
  int v174; // [sp+F0h] [bp-78h]@13
  int v175; // [sp+F8h] [bp-70h]@10
  int v176; // [sp+100h] [bp-68h]@10
  int v177; // [sp+108h] [bp-60h]@10
  int v178; // [sp+110h] [bp-58h]@7
  int v179; // [sp+118h] [bp-50h]@7
  int v180; // [sp+120h] [bp-48h]@7
  int v181; // [sp+128h] [bp-40h]@4
  int v182; // [sp+130h] [bp-38h]@4
  int v183; // [sp+138h] [bp-30h]@4
  int v184; // [sp+140h] [bp-28h]@1
  int v185; // [sp+148h] [bp-20h]@1
  int v186; // [sp+150h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v186, "requireTame");
  sub_21E94B4((void **)&v185, "true");
  v3 = (int *)sub_21E94B4((void **)&v184, "If true, the entities need to be tamed first before they can breed.");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v186, &v185, v3);
  v4 = (void *)(v184 - 12);
  if ( (int *)(v184 - 12) != &dword_28898C0 )
  {
    v61 = (unsigned int *)(v184 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
    }
    else
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v185 - 12);
  if ( (int *)(v185 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v185 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v186 - 12);
  if ( (int *)(v186 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v186 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v183, "extraBabyChance");
  sub_21E94B4((void **)&v182, "0.0");
  v7 = (int *)sub_21E94B4(
                (void **)&v181,
                "Chance that up to 16 babies will spawn between 0.0 and 1.0, where 1.0 is 100%");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v183, &v182, v7);
  v8 = (void *)(v181 - 12);
  if ( (int *)(v181 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v181 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v182 - 12);
  if ( (int *)(v182 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v182 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v183 - 12);
  if ( (int *)(v183 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v183 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v180, "breedCooldown");
  sub_21E94B4((void **)&v179, "60.0");
  v11 = (int *)sub_21E94B4((void **)&v178, "Time in seconds before the Entity can breed again");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v180, &v179, v11);
  v12 = (void *)(v178 - 12);
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v178 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v179 - 12);
  if ( (int *)(v179 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v179 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v180 - 12);
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v180 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v177, "inheritTamed");
  sub_21E94B4((void **)&v176, "true");
  v15 = (int *)sub_21E94B4((void **)&v175, "If true, the babies will be automatically tamed if its parents are");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v177, &v176, v15);
  v16 = (void *)(v175 - 12);
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v175 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v176 - 12);
  if ( (int *)(v176 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v176 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v177 - 12);
  if ( (int *)(v177 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v177 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v174, "allowSitting");
  sub_21E94B4((void **)&v173, "false");
  v19 = (int *)sub_21E94B4((void **)&v172, "If true, entities can breed while sitting");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v174, &v173, v19);
  v20 = (void *)(v172 - 12);
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v172 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v173 - 12);
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v173 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v174 - 12);
  if ( (int *)(v174 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v174 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v171, "mutation_factor");
  sub_21E94B4((void **)&v170, (const char *)&unk_257BC67);
  v23 = (int *)sub_21E94B4(
                 (void **)&v169,
                 "Determines how likely the babies are to NOT inherit one of their parent's variances. Values are between"
                 " 0.0 and 1.0, with a higher number meaning more likely to mutate");
  v24 = j_DocumentationSystem::Node::addNode(
          v2,
          (int *)&DocumentationSystem::OBJECT_TYPE,
          (const void **)&v171,
          &v170,
          v23);
  v25 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v169 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v170 - 12);
  if ( (int *)(v170 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v170 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v171 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v24[4] = 1;
  sub_21E94B4((void **)&v168, "variant");
  sub_21E94B4((void **)&v167, "0.0");
  v28 = (int *)sub_21E94B4((void **)&v166, "The percentage chance of a mutation on the entity's variant type");
  j_DocumentationSystem::Node::addNode(
    (int)v24,
    (int *)&DocumentationSystem::FLOAT_TYPE,
    (const void **)&v168,
    &v167,
    v28);
  v29 = (void *)(v166 - 12);
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v166 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v167 - 12);
  if ( (int *)(v167 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v167 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v168 - 12);
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v101 = (unsigned int *)(v168 - 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  sub_21E94B4((void **)&v165, "extra_variant");
  sub_21E94B4((void **)&v164, "0.0");
  v32 = (int *)sub_21E94B4((void **)&v163, "The percentage chance of a mutation on the entity's extra variant type");
    (const void **)&v165,
    &v164,
    v32);
  v33 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v163 - 4);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v164 - 12);
  if ( (int *)(v164 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v164 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = (void *)(v165 - 12);
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v165 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  sub_21E94B4((void **)&v162, "color");
  sub_21E94B4((void **)&v161, "0.0");
  v36 = (int *)sub_21E94B4((void **)&v160, "The percentage chance of a mutation on the entity's color");
    (const void **)&v162,
    &v161,
    v36);
  v37 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v160 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v38 = (void *)(v161 - 12);
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v111 = (unsigned int *)(v161 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  v39 = (void *)(v162 - 12);
  if ( (int *)(v162 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v162 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  sub_21E94B4((void **)&v159, "breedItems");
  sub_21E94B4((void **)&v158, (const char *)&unk_257BC67);
  v40 = (int *)sub_21E94B4((void **)&v157, "The list of items that can be used to get the entity into the 'love' state");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::LIST_TYPE, (const void **)&v159, &v158, v40);
  v41 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v157 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  v42 = (void *)(v158 - 12);
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v158 - 4);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  v43 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v119 = (unsigned int *)(v159 - 4);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  sub_21E94B4((void **)&v156, "breedsWith");
  sub_21E94B4((void **)&v155, (const char *)&unk_257BC67);
  v44 = (int *)sub_21E94B4((void **)&v154, "The list of entity definitions that this entity can breed with");
  v45 = j_DocumentationSystem::Node::addNode(
          (int *)&DocumentationSystem::LIST_TYPE,
          (const void **)&v156,
          &v155,
          v44);
  v46 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v121 = (unsigned int *)(v154 - 4);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  v47 = (void *)(v155 - 12);
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v123 = (unsigned int *)(v155 - 4);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  v48 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v125 = (unsigned int *)(v156 - 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  v45[4] = 1;
  sub_21E94B4((void **)&v153, "mateType");
  sub_21E94B4((void **)&v152, (const char *)&unk_257BC67);
  v49 = (int *)sub_21E94B4((void **)&v151, "The entity definition of this entity's mate");
    (int)v45,
    (int *)&DocumentationSystem::STRING_TYPE,
    (const void **)&v153,
    &v152,
    v49);
  v50 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v127 = (unsigned int *)(v151 - 4);
        v128 = __ldrex(v127);
      while ( __strex(v128 - 1, v127) );
      v128 = (*v127)--;
    if ( v128 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  v51 = (void *)(v152 - 12);
  if ( (int *)(v152 - 12) != &dword_28898C0 )
    v129 = (unsigned int *)(v152 - 4);
        v130 = __ldrex(v129);
      while ( __strex(v130 - 1, v129) );
      v130 = (*v129)--;
    if ( v130 <= 0 )
      j_j_j_j__ZdlPv_9(v51);
  v52 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v131 = (unsigned int *)(v153 - 4);
        v132 = __ldrex(v131);
      while ( __strex(v132 - 1, v131) );
      v132 = (*v131)--;
    if ( v132 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  sub_21E94B4((void **)&v150, "babyType");
  sub_21E94B4((void **)&v149, (const char *)&unk_257BC67);
  v53 = (int *)sub_21E94B4((void **)&v148, "The entity definition of this entity's babies");
    (const void **)&v150,
    &v149,
    v53);
  v54 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v133 = (unsigned int *)(v148 - 4);
        v134 = __ldrex(v133);
      while ( __strex(v134 - 1, v133) );
      v134 = (*v133)--;
    if ( v134 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  v55 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v135 = (unsigned int *)(v149 - 4);
        v136 = __ldrex(v135);
      while ( __strex(v136 - 1, v135) );
      v136 = (*v135)--;
    if ( v136 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  v56 = (void *)(v150 - 12);
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v137 = (unsigned int *)(v150 - 4);
        v138 = __ldrex(v137);
      while ( __strex(v138 - 1, v137) );
      v138 = (*v137)--;
    if ( v138 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  sub_21E94B4((void **)&v147, "breed_event");
  sub_21E94B4((void **)&v146, (const char *)&unk_257BC67);
  v57 = (int *)sub_21E94B4((void **)&v145, "Event to run when this entity breeds");
    (const void **)&v147,
    &v146,
    v57);
  v58 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v139 = (unsigned int *)(v145 - 4);
        v140 = __ldrex(v139);
      while ( __strex(v140 - 1, v139) );
      v140 = (*v139)--;
    if ( v140 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
  v59 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v141 = (unsigned int *)(v146 - 4);
        v142 = __ldrex(v141);
      while ( __strex(v142 - 1, v141) );
      v142 = (*v141)--;
    if ( v142 <= 0 )
      j_j_j_j__ZdlPv_9(v59);
  v60 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v143 = (unsigned int *)(v147 - 4);
        v144 = __ldrex(v143);
      while ( __strex(v144 - 1, v143) );
      v144 = (*v143)--;
    if ( v144 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
}


Json::Value *__fastcall BreedableDescription::parseData(BreedableDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  int *v9; // r1@1
  int *v10; // r0@5
  const char *v11; // r3@7
  const char *v15; // r3@11
  Json::Value *v16; // r0@16
  bool v18; // [sp+0h] [bp-50h]@1
  char v19; // [sp+8h] [bp-48h]@14
  char v20; // [sp+10h] [bp-40h]@11
  char v21; // [sp+20h] [bp-30h]@7
  int v22; // [sp+30h] [bp-20h]@5
  int v23; // [sp+34h] [bp-1Ch]@1
  int v24; // [sp+38h] [bp-18h]@1

  v2 = a2;
  _R4 = this;
  j_Parser::parse(a2, (BreedableDescription *)((char *)this + 4), (bool *)"requireTame", (const char *)1, v18);
  j_Parser::parse(v2, (BreedableDescription *)((char *)_R4 + 8), (float *)"extraBabyChance", 0, *(float *)&v18);
  v24 = 0;
  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S2, [R4,#8]
  }
  v23 = 1065353216;
  _R0 = &v24;
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
  v9 = &v23;
  if ( !(_NF ^ _VF) )
    _R0 = (int *)((char *)_R4 + 8);
    VLDR            S2, [R0]
    VCMPE.F32       S2, S0
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v9 = _R0;
  *((_DWORD *)_R4 + 2) = *v9;
  j_Parser::parse(
    v2,
    (BreedableDescription *)((char *)_R4 + 12),
    (float *)"breedCooldown",
    (const char *)0x42700000,
    *(float *)&v18);
  v22 = 0;
  v10 = &v22;
    VLDR            S0, [R4,#0xC]
    VCMPE.F32       S0, #0.0
    v10 = (int *)((char *)_R4 + 12);
  *((_DWORD *)_R4 + 3) = *v10;
  j_Parser::parse(v2, (BreedableDescription *)((char *)_R4 + 16), (bool *)"inheritTamed", (const char *)1, v18);
  j_Parser::parse(v2, (BreedableDescription *)((char *)_R4 + 17), (bool *)"allowSitting", 0, v18);
  j_Json::Value::Value(&v21, 0);
  j_Parser::parse(v2, (const Json::Value *)&v21, (Json::Value *)"mutation_factor", v11);
  if ( j_Json::Value::isObject((Json::Value *)&v21) == 1 )
    j_Parser::parse((Parser *)&v21, (BreedableDescription *)((char *)_R4 + 56), (float *)"variant", 0, *(float *)&v18);
    j_Parser::parse(
      (Parser *)&v21,
      (BreedableDescription *)((char *)_R4 + 60),
      (float *)"extra_variant",
      0,
      *(float *)&v18);
    j_Parser::parse((Parser *)&v21, (BreedableDescription *)((char *)_R4 + 64), (float *)"color", 0, *(float *)&v18);
  else if ( j_Json::Value::isNumeric((Json::Value *)&v21) == 1 )
    _R0 = j_Json::Value::asFloat((Json::Value *)&v21, *((float *)_R4 + 16));
    __asm
    {
      VMOV            S0, R0
      VSTR            S0, [R4,#0x40]
    }
    _R0 = j_Json::Value::asFloat((Json::Value *)&v21, *((float *)_R4 + 14));
      VSTR            S0, [R4,#0x38]
    _R0 = j_Json::Value::asFloat((Json::Value *)&v21, *((float *)_R4 + 15));
      VSTR            S0, [R4,#0x3C]
  j_Parser::parse(v2, (int)_R4 + 20, "breedItems");
  j_Json::Value::Value(&v20, 0);
  j_Parser::parse(v2, (const Json::Value *)&v20, (Json::Value *)"breedsWith", v15);
  if ( j_Json::Value::isObject((Json::Value *)&v20) == 1 )
    j_BreedableDescription::parseBreedTypes(_R4, (Json::Value *)&v20);
  else if ( j_Json::Value::isArray((Json::Value *)&v20) == 1 )
    j_Json::Value::begin((Json::Value *)&v19, (int)&v20);
    while ( 1 )
      j_Json::Value::end((Json::Value *)&v18, (int)&v20);
      if ( j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v19, (const Json::ValueIteratorBase *)&v18) == 1 )
        break;
      v16 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v19);
      j_BreedableDescription::parseBreedTypes(_R4, v16);
      j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v19);
  j_Json::Value::~Value((Json::Value *)&v20);
  return j_Json::Value::~Value((Json::Value *)&v21);
}
