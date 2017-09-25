

const char *__fastcall TransformationDescription::getJsonName(TransformationDescription *this)
{
  return "minecraft:transformation";
}


void __fastcall TransformationDescription::~TransformationDescription(TransformationDescription *this)
{
  TransformationDescription::~TransformationDescription(this);
}


void __fastcall TransformationDescription::getDocumentation(int a1, int a2)
{
  TransformationDescription::getDocumentation(a1, a2);
}


const char *__fastcall TransformationDescription::getDescription(TransformationDescription *this)
{
  return "Defines an entity's transformation from the current definition into another";
}


Json::Value *__fastcall TransformationDescription::parseData(TransformationDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  TransformationDescription *v3; // r4@1
  void *v4; // r0@1
  const char *v5; // r3@2
  const char *v6; // r3@2
  float v12; // ST00_4@5
  int v13; // ST00_4@5
  int v14; // ST00_4@5
  void *v15; // r0@8
  unsigned int *v17; // r2@10
  signed int v18; // r1@12
  unsigned int *v19; // r2@18
  signed int v20; // r1@20
  float v21; // [sp+0h] [bp-50h]@0
  float v22; // [sp+0h] [bp-50h]@5
  int v23; // [sp+8h] [bp-48h]@8
  float v24; // [sp+Ch] [bp-44h]@5
  char v25; // [sp+10h] [bp-40h]@2
  char v26; // [sp+20h] [bp-30h]@2
  int v27; // [sp+34h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  j_Parser::parse((int)a2, (int)this + 12, "begin_transform_sound", (const char *)&unk_257BC67);
  j_Parser::parse((int)v2, (int)v3 + 24, "transformation_sound", (const char *)&unk_257BC67);
  j_Parser::parse((int)v2, (int *)v3 + 1, "into", (const char *)&unk_257BC67);
  j_EntityTypeResolveAlias((void **)&v27, (const void **)v3 + 1, 1);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 1,
    &v27);
  v4 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  j_Json::Value::Value(&v26, 0);
  j_Parser::parse(v2, (const Json::Value *)&v26, (Json::Value *)"add", v5);
  j_Parser::parse((int)&v26, (int)v3 + 64, "component_groups");
  j_Json::Value::Value(&v25, 0);
  j_Parser::parse(v2, (const Json::Value *)&v25, (Json::Value *)"delay", v6);
  if ( j_Json::Value::isNumeric((Json::Value *)&v25) == 1 )
    _R0 = j_Json::Value::asFloat((Json::Value *)&v25, 0.0);
    __asm
      VMOV.F32        S2, #20.0
      VMOV            S0, R0
      VMUL.F32        S0, S0, S2
      VCVTR.S32.F32   S0, S0
      VSTR            S0, [R4,#8]
  else if ( j_Json::Value::isObject((Json::Value *)&v25) == 1 )
    j_Parser::parse((Parser *)&v25, (const Json::Value *)&v24, (float *)"value", 0, v21);
      VMOV.F32        S0, #20.0
      VLDR            S2, [SP,#0x50+var_44]
      VMUL.F32        S0, S2, S0
    j_Parser::parse(
      (Parser *)&v25,
      (TransformationDescription *)((char *)v3 + 36),
      (float *)"block_assist_chance",
      0,
      v12);
    j_Parser::parse((Parser *)&v25, (TransformationDescription *)((char *)v3 + 40), (int *)"block_radius", 0, v13);
    j_Parser::parse((Parser *)&v25, (TransformationDescription *)((char *)v3 + 44), (int *)"block_max", 0, v14);
    if ( *((_DWORD *)v3 + 11) <= 0 )
      *((_DWORD *)v3 + 11) = *((_DWORD *)v3 + 10);
    j_Parser::parse((Parser *)&v25, (TransformationDescription *)((char *)v3 + 48), (float *)"block_chance", 0, v22);
    j_Parser::parse((int)&v25, (int)v3 + 52, "block_types");
  else
    sub_21E94B4((void **)&v23, "Expected Number or Object.");
    j_JsonUtil::warningMessage(&v23);
    v15 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v23 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
  j_Json::Value::~Value((Json::Value *)&v25);
  return j_Json::Value::~Value((Json::Value *)&v26);
}


TransformationDescription *__fastcall TransformationDescription::~TransformationDescription(TransformationDescription *this)
{
  TransformationDescription *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  void *v7; // r5@16
  void *v8; // r7@16
  unsigned int *v9; // r2@18
  signed int v10; // r1@20
  int *v11; // r0@26
  void *v12; // r0@31
  void *v13; // r0@33
  int v14; // r1@35
  void *v15; // r0@35
  unsigned int *v17; // r2@37
  signed int v18; // r1@39

  v1 = this;
  *(_DWORD *)this = &off_271F45C;
  v3 = (void *)(*((_QWORD *)this + 8) >> 32);
  v2 = (void *)*((_QWORD *)this + 8);
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
    v2 = (void *)*((_DWORD *)v1 + 16);
  }
  if ( v2 )
    operator delete(v2);
  v8 = (void *)(*(_QWORD *)((char *)v1 + 52) >> 32);
  v7 = (void *)*(_QWORD *)((char *)v1 + 52);
  if ( v7 != v8 )
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
        v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v7 = (char *)v7 + 4;
    while ( v7 != v8 );
    v7 = (void *)*((_DWORD *)v1 + 13);
  if ( v7 )
    operator delete(v7);
  v12 = (void *)*((_DWORD *)v1 + 6);
  if ( v12 )
    operator delete(v12);
  v13 = (void *)*((_DWORD *)v1 + 3);
  if ( v13 )
    operator delete(v13);
  v14 = *((_DWORD *)v1 + 1);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  return v1;
}


void __fastcall TransformationDescription::getDocumentation(int a1, int a2)
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
  char *v16; // r5@10
  void *v17; // r0@10
  void *v18; // r0@11
  void *v19; // r0@12
  int *v20; // r0@13
  void *v21; // r0@13
  void *v22; // r0@14
  void *v23; // r0@15
  int *v24; // r0@16
  char *v25; // r4@16
  void *v26; // r0@16
  void *v27; // r0@17
  void *v28; // r0@18
  int *v29; // r0@19
  void *v30; // r0@19
  void *v31; // r0@20
  void *v32; // r0@21
  int *v33; // r0@22
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
  unsigned int *v53; // r2@38
  signed int v54; // r1@40
  unsigned int *v55; // r2@42
  signed int v56; // r1@44
  unsigned int *v57; // r2@46
  signed int v58; // r1@48
  unsigned int *v59; // r2@50
  signed int v60; // r1@52
  unsigned int *v61; // r2@54
  signed int v62; // r1@56
  unsigned int *v63; // r2@58
  signed int v64; // r1@60
  unsigned int *v65; // r2@62
  signed int v66; // r1@64
  unsigned int *v67; // r2@66
  signed int v68; // r1@68
  unsigned int *v69; // r2@70
  signed int v70; // r1@72
  unsigned int *v71; // r2@74
  signed int v72; // r1@76
  unsigned int *v73; // r2@78
  signed int v74; // r1@80
  unsigned int *v75; // r2@82
  signed int v76; // r1@84
  unsigned int *v77; // r2@86
  signed int v78; // r1@88
  unsigned int *v79; // r2@90
  signed int v80; // r1@92
  unsigned int *v81; // r2@94
  signed int v82; // r1@96
  unsigned int *v83; // r2@98
  signed int v84; // r1@100
  unsigned int *v85; // r2@102
  signed int v86; // r1@104
  unsigned int *v87; // r2@106
  signed int v88; // r1@108
  unsigned int *v89; // r2@110
  signed int v90; // r1@112
  unsigned int *v91; // r2@114
  signed int v92; // r1@116
  unsigned int *v93; // r2@118
  signed int v94; // r1@120
  unsigned int *v95; // r2@122
  signed int v96; // r1@124
  unsigned int *v97; // r2@126
  signed int v98; // r1@128
  unsigned int *v99; // r2@130
  signed int v100; // r1@132
  unsigned int *v101; // r2@134
  signed int v102; // r1@136
  unsigned int *v103; // r2@138
  signed int v104; // r1@140
  unsigned int *v105; // r2@142
  signed int v106; // r1@144
  unsigned int *v107; // r2@146
  signed int v108; // r1@148
  unsigned int *v109; // r2@150
  signed int v110; // r1@152
  unsigned int *v111; // r2@154
  signed int v112; // r1@156
  unsigned int *v113; // r2@158
  signed int v114; // r1@160
  unsigned int *v115; // r2@162
  signed int v116; // r1@164
  unsigned int *v117; // r2@166
  signed int v118; // r1@168
  unsigned int *v119; // r2@170
  signed int v120; // r1@172
  unsigned int *v121; // r2@174
  signed int v122; // r1@176
  unsigned int *v123; // r2@178
  signed int v124; // r1@180
  int v125; // [sp+8h] [bp-130h]@34
  int v126; // [sp+10h] [bp-128h]@34
  int v127; // [sp+18h] [bp-120h]@34
  int v128; // [sp+20h] [bp-118h]@31
  int v129; // [sp+28h] [bp-110h]@31
  int v130; // [sp+30h] [bp-108h]@31
  int v131; // [sp+38h] [bp-100h]@28
  int v132; // [sp+40h] [bp-F8h]@28
  int v133; // [sp+48h] [bp-F0h]@28
  int v134; // [sp+50h] [bp-E8h]@25
  int v135; // [sp+58h] [bp-E0h]@25
  int v136; // [sp+60h] [bp-D8h]@25
  int v137; // [sp+68h] [bp-D0h]@22
  int v138; // [sp+70h] [bp-C8h]@22
  int v139; // [sp+78h] [bp-C0h]@22
  int v140; // [sp+80h] [bp-B8h]@19
  int v141; // [sp+88h] [bp-B0h]@19
  int v142; // [sp+90h] [bp-A8h]@19
  int v143; // [sp+98h] [bp-A0h]@16
  int v144; // [sp+A0h] [bp-98h]@16
  int v145; // [sp+A8h] [bp-90h]@16
  int v146; // [sp+B0h] [bp-88h]@13
  int v147; // [sp+B8h] [bp-80h]@13
  int v148; // [sp+C0h] [bp-78h]@13
  int v149; // [sp+C8h] [bp-70h]@10
  int v150; // [sp+D0h] [bp-68h]@10
  int v151; // [sp+D8h] [bp-60h]@10
  int v152; // [sp+E0h] [bp-58h]@7
  int v153; // [sp+E8h] [bp-50h]@7
  int v154; // [sp+F0h] [bp-48h]@7
  int v155; // [sp+F8h] [bp-40h]@4
  int v156; // [sp+100h] [bp-38h]@4
  int v157; // [sp+108h] [bp-30h]@4
  int v158; // [sp+110h] [bp-28h]@1
  int v159; // [sp+118h] [bp-20h]@1
  int v160; // [sp+120h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v160, "begin_transform_sound");
  sub_21E94B4((void **)&v159, (const char *)&unk_257BC67);
  v3 = (int *)sub_21E94B4((void **)&v158, "Sound to play when the transformation starts");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v160, &v159, v3);
  v4 = (void *)(v158 - 12);
  if ( (int *)(v158 - 12) != &dword_28898C0 )
  {
    v53 = (unsigned int *)(v158 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
    }
    else
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v159 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v160 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v157, "transformation_sound");
  sub_21E94B4((void **)&v156, (const char *)&unk_257BC67);
  v7 = (int *)sub_21E94B4((void **)&v155, "Sound to play when the entity is done transforming");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v157, &v156, v7);
  v8 = (void *)(v155 - 12);
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v155 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v156 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v157 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v154, "into");
  sub_21E94B4((void **)&v153, (const char *)&unk_257BC67);
  v11 = (int *)sub_21E94B4((void **)&v152, "Entity Definition that this entity will transform into");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v154, &v153, v11);
  v12 = (void *)(v152 - 12);
  if ( (int *)(v152 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v152 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v153 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v154 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v151, "add");
  sub_21E94B4((void **)&v150, (const char *)&unk_257BC67);
  v15 = (int *)sub_21E94B4((void **)&v149, "List of components to add to the entity after the transformation");
  v16 = j_DocumentationSystem::Node::addNode(
          v2,
          (int *)&DocumentationSystem::OBJECT_TYPE,
          (const void **)&v151,
          &v150,
          v15);
  v17 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v149 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v150 - 12);
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v150 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v151 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v16[4] = 1;
  sub_21E94B4((void **)&v148, "component_groups");
  sub_21E94B4((void **)&v147, (const char *)&unk_257BC67);
  v20 = (int *)sub_21E94B4((void **)&v146, "Names of component groups to add");
  j_DocumentationSystem::Node::addNode(
    (int)v16,
    (int *)&DocumentationSystem::LIST_TYPE,
    (const void **)&v148,
    &v147,
    v20);
  v21 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v146 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v147 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v148 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v145, "delay");
  sub_21E94B4((void **)&v144, (const char *)&unk_257BC67);
  v24 = (int *)sub_21E94B4((void **)&v143, "Defines the properties of the delay for the transformation");
  v25 = j_DocumentationSystem::Node::addNode(
          (const void **)&v145,
          &v144,
          v24);
  v26 = (void *)(v143 - 12);
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v143 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v144 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v145 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v25[4] = 1;
  sub_21E94B4((void **)&v142, "value");
  sub_21E94B4((void **)&v141, "0.0");
  v29 = (int *)sub_21E94B4((void **)&v140, "Time in seconds before the entity transforms");
    (int)v25,
    (int *)&DocumentationSystem::FLOAT_TYPE,
    (const void **)&v142,
    &v141,
    v29);
  v30 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v140 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v141 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v142 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  sub_21E94B4((void **)&v139, "block_assist_chance");
  sub_21E94B4((void **)&v138, "0.0");
  v33 = (int *)sub_21E94B4(
                 (void **)&v137,
                 "Chance that the entity will look for nearby blocks that can speed up the transformation. Value must be "
                 "between 0.0 and 1.0");
    (const void **)&v139,
    &v138,
    v33);
  v34 = (void *)(v137 - 12);
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v137 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v138 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v139 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  sub_21E94B4((void **)&v136, "block_radius");
  sub_21E94B4((void **)&v135, "0");
  v37 = (int *)sub_21E94B4(
                 (void **)&v134,
                 "Distance in Blocks that the entity will search for blocks that can help the transformation");
    (int *)&DocumentationSystem::INT_TYPE,
    (const void **)&v136,
    &v135,
    v37);
  v38 = (void *)(v134 - 12);
  if ( (int *)(v134 - 12) != &dword_28898C0 )
    v101 = (unsigned int *)(v134 - 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  v39 = (void *)(v135 - 12);
  if ( (int *)(v135 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v135 - 4);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v136 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  sub_21E94B4((void **)&v133, "block_max");
  sub_21E94B4((void **)&v132, "0");
  v41 = (int *)sub_21E94B4(
                 (void **)&v131,
                 "Maximum number of blocks the entity will look for to aid in the transformation. If not defined or set t"
                 "o 0, it will be set to the block radius");
    (const void **)&v133,
    &v132,
    v41);
  v42 = (void *)(v131 - 12);
  if ( (int *)(v131 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v131 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  v43 = (void *)(v132 - 12);
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v132 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v111 = (unsigned int *)(v133 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  sub_21E94B4((void **)&v130, "block_chance");
  sub_21E94B4((void **)&v129, "0.0");
  v45 = (int *)sub_21E94B4((void **)&v128, "Chance that, once a block is found, will help speed up the transformation");
    (const void **)&v130,
    &v129,
    v45);
  v46 = (void *)(v128 - 12);
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v128 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  v47 = (void *)(v129 - 12);
  if ( (int *)(v129 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v129 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  v48 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v130 - 4);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  sub_21E94B4((void **)&v127, "block_types");
  sub_21E94B4((void **)&v126, (const char *)&unk_257BC67);
  v49 = (int *)sub_21E94B4((void **)&v125, "List of blocks that can help the transformation of this entity");
    (const void **)&v127,
    &v126,
    v49);
  v50 = (void *)(v125 - 12);
  if ( (int *)(v125 - 12) != &dword_28898C0 )
    v119 = (unsigned int *)(v125 - 4);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  v51 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v121 = (unsigned int *)(v126 - 4);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 <= 0 )
      j_j_j_j__ZdlPv_9(v51);
  v52 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v123 = (unsigned int *)(v127 - 4);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
}


void __fastcall TransformationDescription::~TransformationDescription(TransformationDescription *this)
{
  TransformationDescription *v1; // r0@1

  v1 = j_TransformationDescription::~TransformationDescription(this);
  j_j_j__ZdlPv_7((void *)v1);
}
