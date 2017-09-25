

RideableDescription *__fastcall RideableDescription::~RideableDescription(RideableDescription *this)
{
  RideableDescription *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void *v4; // r0@2
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_271F2D0;
  v2 = *((_DWORD *)this + 13);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)v1 + 28,
    *((_DWORD *)v1 + 9));
  v4 = (void *)*((_DWORD *)v1 + 4);
  if ( v4 )
    j_operator delete(v4);
  return v1;
}


const char *__fastcall RideableDescription::getDescription(RideableDescription *this)
{
  return "Determines whether this entity can be ridden. Allows specifying the different seat positions and quantity.";
}


void __fastcall RideableDescription::~RideableDescription(RideableDescription *this)
{
  RideableDescription *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void *v4; // r0@2
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_271F2D0;
  v2 = *((_DWORD *)this + 13);
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
  j_std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)v1 + 28,
    *((_DWORD *)v1 + 9));
  v4 = (void *)*((_DWORD *)v1 + 4);
  if ( v4 )
    j_operator delete(v4);
  j_operator delete((void *)v1);
}


void __fastcall RideableDescription::getDocumentation(int a1, int a2)
{
  RideableDescription::getDocumentation(a1, a2);
}


const char *__fastcall RideableDescription::getJsonName(RideableDescription *this)
{
  return "minecraft:rideable";
}


void __fastcall RideableDescription::getDocumentation(int a1, int a2)
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
  int *v15; // r0@10
  void *v16; // r0@10
  void *v17; // r0@11
  void *v18; // r0@12
  int *v19; // r0@13
  void *v20; // r0@13
  void *v21; // r0@14
  void *v22; // r0@15
  int *v23; // r0@16
  void *v24; // r0@16
  void *v25; // r0@17
  void *v26; // r0@18
  int *v27; // r0@19
  char *v28; // r4@19
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
  void *v45; // r0@31
  void *v46; // r0@32
  void *v47; // r0@33
  int *v48; // r0@34
  void *v49; // r0@34
  void *v50; // r0@35
  void *v51; // r0@36
  unsigned int *v52; // r2@38
  signed int v53; // r1@40
  unsigned int *v54; // r2@42
  signed int v55; // r1@44
  unsigned int *v56; // r2@46
  signed int v57; // r1@48
  unsigned int *v58; // r2@50
  signed int v59; // r1@52
  unsigned int *v60; // r2@54
  signed int v61; // r1@56
  unsigned int *v62; // r2@58
  signed int v63; // r1@60
  unsigned int *v64; // r2@62
  signed int v65; // r1@64
  unsigned int *v66; // r2@66
  signed int v67; // r1@68
  unsigned int *v68; // r2@70
  signed int v69; // r1@72
  unsigned int *v70; // r2@74
  signed int v71; // r1@76
  unsigned int *v72; // r2@78
  signed int v73; // r1@80
  unsigned int *v74; // r2@82
  signed int v75; // r1@84
  unsigned int *v76; // r2@86
  signed int v77; // r1@88
  unsigned int *v78; // r2@90
  signed int v79; // r1@92
  unsigned int *v80; // r2@94
  signed int v81; // r1@96
  unsigned int *v82; // r2@98
  signed int v83; // r1@100
  unsigned int *v84; // r2@102
  signed int v85; // r1@104
  unsigned int *v86; // r2@106
  signed int v87; // r1@108
  unsigned int *v88; // r2@110
  signed int v89; // r1@112
  unsigned int *v90; // r2@114
  signed int v91; // r1@116
  unsigned int *v92; // r2@118
  signed int v93; // r1@120
  unsigned int *v94; // r2@122
  signed int v95; // r1@124
  unsigned int *v96; // r2@126
  signed int v97; // r1@128
  unsigned int *v98; // r2@130
  signed int v99; // r1@132
  unsigned int *v100; // r2@134
  signed int v101; // r1@136
  unsigned int *v102; // r2@138
  signed int v103; // r1@140
  unsigned int *v104; // r2@142
  signed int v105; // r1@144
  unsigned int *v106; // r2@146
  signed int v107; // r1@148
  unsigned int *v108; // r2@150
  signed int v109; // r1@152
  unsigned int *v110; // r2@154
  signed int v111; // r1@156
  unsigned int *v112; // r2@158
  signed int v113; // r1@160
  unsigned int *v114; // r2@162
  signed int v115; // r1@164
  unsigned int *v116; // r2@166
  signed int v117; // r1@168
  unsigned int *v118; // r2@170
  signed int v119; // r1@172
  unsigned int *v120; // r2@174
  signed int v121; // r1@176
  unsigned int *v122; // r2@178
  signed int v123; // r1@180
  int v124; // [sp+8h] [bp-130h]@34
  int v125; // [sp+10h] [bp-128h]@34
  int v126; // [sp+18h] [bp-120h]@34
  int v127; // [sp+20h] [bp-118h]@31
  int v128; // [sp+28h] [bp-110h]@31
  int v129; // [sp+30h] [bp-108h]@31
  int v130; // [sp+38h] [bp-100h]@28
  int v131; // [sp+40h] [bp-F8h]@28
  int v132; // [sp+48h] [bp-F0h]@28
  int v133; // [sp+50h] [bp-E8h]@25
  int v134; // [sp+58h] [bp-E0h]@25
  int v135; // [sp+60h] [bp-D8h]@25
  int v136; // [sp+68h] [bp-D0h]@22
  int v137; // [sp+70h] [bp-C8h]@22
  int v138; // [sp+78h] [bp-C0h]@22
  int v139; // [sp+80h] [bp-B8h]@19
  int v140; // [sp+88h] [bp-B0h]@19
  int v141; // [sp+90h] [bp-A8h]@19
  int v142; // [sp+98h] [bp-A0h]@16
  int v143; // [sp+A0h] [bp-98h]@16
  int v144; // [sp+A8h] [bp-90h]@16
  int v145; // [sp+B0h] [bp-88h]@13
  int v146; // [sp+B8h] [bp-80h]@13
  int v147; // [sp+C0h] [bp-78h]@13
  int v148; // [sp+C8h] [bp-70h]@10
  int v149; // [sp+D0h] [bp-68h]@10
  int v150; // [sp+D8h] [bp-60h]@10
  int v151; // [sp+E0h] [bp-58h]@7
  int v152; // [sp+E8h] [bp-50h]@7
  int v153; // [sp+F0h] [bp-48h]@7
  int v154; // [sp+F8h] [bp-40h]@4
  int v155; // [sp+100h] [bp-38h]@4
  int v156; // [sp+108h] [bp-30h]@4
  int v157; // [sp+110h] [bp-28h]@1
  int v158; // [sp+118h] [bp-20h]@1
  int v159; // [sp+120h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v159, "seat_count");
  sub_21E94B4((void **)&v158, "1");
  v3 = (int *)sub_21E94B4((void **)&v157, "The number of entities that can ride this entity at the same time");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v159, &v158, v3);
  v4 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
  {
    v52 = (unsigned int *)(v157 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
    }
    else
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v158 - 12);
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v158 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v159 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v156, "crouching_skip_interact");
  sub_21E94B4((void **)&v155, "true");
  v7 = (int *)sub_21E94B4(
                (void **)&v154,
                "If true, this entity can't be interacted with if the entity interacting with it is crouching");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v156, &v155, v7);
  v8 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v154 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v155 - 12);
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v155 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v156 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v153, "interact_text");
  sub_21E94B4((void **)&v152, (const char *)&unk_257BC67);
  v11 = (int *)sub_21E94B4(
                 (void **)&v151,
                 "The text to display when the player can interact with the entity when playing with Touch-screen controls");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v153, &v152, v11);
  v12 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v151 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v152 - 12);
  if ( (int *)(v152 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v152 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v153 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v150, "family_types");
  sub_21E94B4((void **)&v149, (const char *)&unk_257BC67);
  v15 = (int *)sub_21E94B4((void **)&v148, "List of entities that can ride this entity");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::LIST_TYPE, (const void **)&v150, &v149, v15);
  v16 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v148 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v149 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v150 - 12);
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v150 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v147, "controlling_seat");
  sub_21E94B4((void **)&v146, "0");
  v19 = (int *)sub_21E94B4((void **)&v145, "The seat that designates the driver of the entity");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v147, &v146, v19);
  v20 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v145 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v146 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v147 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v144, "pull_in_entities");
  sub_21E94B4((void **)&v143, "false");
  v23 = (int *)sub_21E94B4(
                 (void **)&v142,
                 "If true, this entity will pull in entities that are in the correct family_types into any available seats");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v144, &v143, v23);
  v24 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v142 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v143 - 12);
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v143 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v144 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v141, "seats");
  sub_21E94B4((void **)&v140, (const char *)&unk_257BC67);
  v27 = (int *)sub_21E94B4(
                 (void **)&v139,
                 "The list of positions and number of riders for each position for entities riding this entity");
  v28 = j_DocumentationSystem::Node::addNode(
          v2,
          (int *)&DocumentationSystem::LIST_TYPE,
          (const void **)&v141,
          &v140,
          v27);
  v29 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v139 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v140 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v141 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v28[4] = 1;
  sub_21E94B4((void **)&v138, "position");
  sub_21E94B4((void **)&v137, "[0.0, 0.0, 0.0]");
  v32 = (int *)sub_21E94B4((void **)&v136, "Position of this seat relative to this entity's position");
  j_DocumentationSystem::Node::addNode(
    (int)v28,
    (int *)&DocumentationSystem::VEC3_TYPE,
    (const void **)&v138,
    &v137,
    v32);
  v33 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v136 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v137 - 12);
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v137 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v138 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  sub_21E94B4((void **)&v135, "min_rider_count");
  sub_21E94B4((void **)&v134, "0");
  v36 = (int *)sub_21E94B4(
                 (void **)&v133,
                 "Defines the minimum number of riders that need to be riding this entity before this seat can be used");
    (int *)&DocumentationSystem::INT_TYPE,
    (const void **)&v135,
    &v134,
    v36);
  v37 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v133 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v38 = (void *)(v134 - 12);
  if ( (int *)(v134 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v134 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  v39 = (void *)(v135 - 12);
  if ( (int *)(v135 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v135 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  sub_21E94B4((void **)&v132, "max_rider_count");
  sub_21E94B4((void **)&v131, "0");
  v40 = (int *)sub_21E94B4(
                 (void **)&v130,
                 "Defines the maximum number of riders that can be riding this entity for this seat to be valid");
    (const void **)&v132,
    &v131,
    v40);
  v41 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v130 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  v42 = (void *)(v131 - 12);
  if ( (int *)(v131 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v131 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  v43 = (void *)(v132 - 12);
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v132 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  sub_21E94B4((void **)&v129, "rotate_rider_by");
  sub_21E94B4((void **)&v128, "0.0");
  v44 = (int *)sub_21E94B4((void **)&v127, "Offset to rotate riders by");
    (int *)&DocumentationSystem::FLOAT_TYPE,
    (const void **)&v129,
    &v128,
    v44);
  v45 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v127 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v46 = (void *)(v128 - 12);
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v128 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  v47 = (void *)(v129 - 12);
  if ( (int *)(v129 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v129 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  sub_21E94B4((void **)&v126, "lock_rider_rotation");
  sub_21E94B4((void **)&v125, "181.0");
  v48 = (int *)sub_21E94B4(
                 (void **)&v124,
                 "Angle in degrees that a rider is allowed to rotate while riding this entity. Omit this property for no limit");
    (const void **)&v126,
    &v125,
    v48);
  v49 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v124 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  v50 = (void *)(v125 - 12);
  if ( (int *)(v125 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v125 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  v51 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v126 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j__ZdlPv_9(v51);
}


char *__fastcall RideableDescription::parseSeatDescription(RideableDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r6@1
  RideableDescription *v3; // r4@1
  int v4; // ST00_4@1
  int v5; // ST00_4@1
  float v6; // ST00_4@1
  Json::Value *v7; // r0@1
  float v8; // ST00_4@1
  __int64 v9; // r0@1
  int v10; // r2@2
  int v11; // r3@2
  int v12; // r7@2
  int v13; // r0@2
  int v14; // r2@2
  int v15; // r3@2
  int v16; // r7@2
  char *result; // r0@2
  Vec3 *v18; // [sp+0h] [bp-48h]@0
  int v19; // [sp+4h] [bp-44h]@1
  int v20; // [sp+8h] [bp-40h]@1
  int v21; // [sp+Ch] [bp-3Ch]@1
  int v22; // [sp+10h] [bp-38h]@1
  int v23; // [sp+14h] [bp-34h]@1
  int v24; // [sp+18h] [bp-30h]@1
  int v25; // [sp+1Ch] [bp-2Ch]@1
  int v26; // [sp+20h] [bp-28h]@1
  int v27; // [sp+24h] [bp-24h]@1
  char v28; // [sp+28h] [bp-20h]@1
  int v29; // [sp+2Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  v28 = 0;
  v26 = 0;
  v27 = 0;
  v24 = 0;
  v25 = 0;
  v22 = 0;
  v23 = 0;
  v29 = 1127546880;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  j_Parser::parse(a2, (const Json::Value *)&v22, (Vec3 *)"position", (const char *)&v19, v18);
  j_Parser::parse(v2, (const Json::Value *)&v25, (int *)"min_rider_count", 0, v4);
  j_Parser::parse(v2, (const Json::Value *)&v26, (int *)"max_rider_count", 0, v5);
  j_Parser::parse(v2, (const Json::Value *)&v27, (float *)"rotate_rider_by", 0, v6);
  v7 = (Json::Value *)j_Json::Value::operator[](v2, "lock_rider_rotation");
  v28 = j_Json::Value::isNull(v7) ^ 1;
  j_Parser::parse(v2, (const Json::Value *)&v29, (float *)"lock_rider_rotation", (const char *)0x43350000, v8);
  v9 = *(_QWORD *)((char *)v3 + 20);
  if ( (_DWORD)v9 == HIDWORD(v9) )
  {
    LODWORD(v9) = (char *)v3 + 16;
    result = j_std::vector<SeatDescription,std::allocator<SeatDescription>>::_M_emplace_back_aux<SeatDescription const&>(v9);
  }
  else
    v10 = v23;
    v11 = v24;
    v12 = v25;
    *(_DWORD *)v9 = v22;
    *(_DWORD *)(v9 + 4) = v10;
    *(_DWORD *)(v9 + 8) = v11;
    *(_DWORD *)(v9 + 12) = v12;
    v13 = v9 + 16;
    v14 = v27;
    v15 = *(_DWORD *)&v28;
    v16 = v29;
    *(_DWORD *)v13 = v26;
    *(_DWORD *)(v13 + 4) = v14;
    *(_DWORD *)(v13 + 8) = v15;
    *(_DWORD *)(v13 + 12) = v16;
    result = (char *)(*((_DWORD *)v3 + 5) + 32);
    *((_DWORD *)v3 + 5) = result;
  return result;
}


Json::Value *__fastcall RideableDescription::parseData(RideableDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  RideableDescription *v3; // r4@1
  const char *v4; // r3@1
  Json::Value *v5; // r0@5
  int v7; // [sp+0h] [bp-30h]@1
  char v8; // [sp+8h] [bp-28h]@3
  char v9; // [sp+10h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  j_Parser::parse(a2, (RideableDescription *)((char *)this + 4), (int *)"seat_count", (const char *)1, v7);
  j_Parser::parse(v2, (RideableDescription *)((char *)v3 + 12), (bool *)"crouching_skip_interact", (const char *)1, v7);
  j_Parser::parse((int)v2, (int *)v3 + 13, "interact_text", (const char *)&unk_257BC67);
  j_Parser::parse((int)v2, (int)v3 + 28, "family_types");
  j_Parser::parse(v2, (RideableDescription *)((char *)v3 + 8), (int *)"controlling_seat", 0, v7);
  j_Parser::parse(v2, (RideableDescription *)((char *)v3 + 56), (bool *)"pull_in_entities", 0, v7);
  j_Json::Value::Value(&v9, 0);
  j_Parser::parse(v2, (const Json::Value *)&v9, (Json::Value *)"seats", v4);
  if ( j_Json::Value::isNull((Json::Value *)&v9) || j_Json::Value::isArray((Json::Value *)&v9) != 1 )
  {
    if ( !j_Json::Value::isNull((Json::Value *)&v9) && j_Json::Value::isObject((Json::Value *)&v9) == 1 )
      j_RideableDescription::parseSeatDescription(v3, (Json::Value *)&v9);
  }
  else
    j_Json::Value::begin((Json::Value *)&v8, (int)&v9);
    j_Json::Value::end((Json::Value *)&v7, (int)&v9);
    while ( j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v8, (const Json::ValueIteratorBase *)&v7) != 1 )
    {
      v5 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v8);
      j_RideableDescription::parseSeatDescription(v3, v5);
      j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v8);
    }
  return j_Json::Value::~Value((Json::Value *)&v9);
}


void __fastcall RideableDescription::~RideableDescription(RideableDescription *this)
{
  RideableDescription::~RideableDescription(this);
}
