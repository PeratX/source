

Json::Value *__fastcall MountTameableDescription::parseData(MountTameableDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r6@1
  MountTameableDescription *v3; // r11@1
  char *v4; // ST00_4@1
  char *v5; // ST00_4@1
  const char *v6; // r3@1
  Json::ValueIteratorBase *v7; // r4@3
  const Json::Value *v8; // r6@3
  const Json::Value *v9; // r8@3
  const Item **v10; // r9@3
  Parser *v11; // r7@5
  char *v12; // ST00_4@5
  __int64 v13; // kr00_8@6
  __int64 v14; // r0@7
  char *v15; // r11@7
  signed int v16; // r0@7
  unsigned int v17; // r10@7
  Json::ValueIteratorBase *v18; // r9@10
  const Json::Value *v19; // r4@10
  const Json::Value *v20; // r8@10
  int v21; // r6@10
  int v22; // r0@12
  const char *v23; // r3@19
  const char *v24; // r3@19
  const Json::ValueIteratorBase *v25; // r5@21
  const Item **v26; // r4@21
  const Json::Value *v27; // r7@21
  const char *v28; // r6@21
  Parser *v29; // r0@23
  int v30; // r0@23
  char *v31; // r1@24 OVERLAPPED
  char *v32; // r2@24
  _BYTE *v33; // r6@26
  char *v34; // r7@26
  unsigned int v35; // r3@26
  unsigned int v36; // r2@28
  unsigned int v37; // r8@28
  const Item **v38; // r5@34
  int *v39; // r4@36
  int v40; // r9@38
  int v41; // r0@40
  char *v43; // [sp+0h] [bp-90h]@0
  char *v44; // [sp+0h] [bp-90h]@3
  char *v45; // [sp+0h] [bp-90h]@21
  unsigned __int64 *v46; // [sp+4h] [bp-8Ch]@3
  MountTameableDescription *v47; // [sp+8h] [bp-88h]@3
  int v48; // [sp+Ch] [bp-84h]@21
  char v49; // [sp+10h] [bp-80h]@21
  char v50; // [sp+18h] [bp-78h]@21
  char v51; // [sp+20h] [bp-70h]@19
  int v52; // [sp+30h] [bp-60h]@3
  int v53; // [sp+34h] [bp-5Ch]@5
  void *ptr; // [sp+38h] [bp-58h]@5
  _BYTE *v55; // [sp+3Ch] [bp-54h]@5
  int v56; // [sp+40h] [bp-50h]@5
  char v57; // [sp+48h] [bp-48h]@3
  char v58; // [sp+50h] [bp-40h]@3
  char v59; // [sp+58h] [bp-38h]@1

  v2 = a2;
  v3 = this;
  j_Parser::parse(a2, (MountTameableDescription *)((char *)this + 4), (int *)"minTemper", 0, (int)v43);
  j_Parser::parse(v2, (MountTameableDescription *)((char *)v3 + 8), (int *)"maxTemper", (const char *)0x64, (int)v4);
  j_Parser::parse((int)v2, (int *)v3 + 10, "feed_text", (const char *)&unk_257BC67);
  j_Parser::parse((int)v2, (int *)v3 + 11, "ride_text", (const char *)&unk_257BC67);
  j_Parser::parse(
    v2,
    (MountTameableDescription *)((char *)v3 + 12),
    (int *)"attemptTemperMod",
    (const char *)5,
    (int)v5);
  j_Json::Value::Value(&v59, 0);
  j_Parser::parse(v2, (const Json::Value *)&v59, (Json::Value *)"feedItems", v6);
  if ( !j_Json::Value::isNull((Json::Value *)&v59) && j_Json::Value::isArray((Json::Value *)&v59) == 1 )
  {
    j_Json::Value::begin((Json::Value *)&v58, (int)&v59);
    j_Json::Value::end((Json::Value *)&v57, (int)&v59);
    v7 = (Json::ValueIteratorBase *)&v58;
    v44 = (char *)v2;
    v8 = (const Json::Value *)&v52;
    v9 = (const Json::Value *)((unsigned int)&v52 | 4);
    v10 = (const Item **)"item";
    v46 = (unsigned __int64 *)((char *)v3 + 16);
    v47 = v3;
    while ( j_Json::ValueIteratorBase::isEqual(v7, (const Json::ValueIteratorBase *)&v57) != 1 )
    {
      v11 = (Parser *)j_Json::ValueIteratorBase::deref(v7);
      v53 = 1065353216;
      ptr = 0;
      v55 = 0;
      v56 = 0;
      j_Parser::parse(v11, v8, v10, (const char *)&unk_257BC67, v44);
      j_Parser::parse(v11, v9, (float *)"temperMod", 0, *(float *)&v12);
      if ( v52 )
      {
        v13 = *(_QWORD *)((char *)v47 + 20);
        if ( (_DWORD)v13 == HIDWORD(v13) )
        {
          j_std::vector<FeedItem,std::allocator<FeedItem>>::_M_emplace_back_aux<FeedItem const&>(v46, (int)v8);
        }
        else
          *(_QWORD *)v13 = *(_QWORD *)&v52;
          v14 = *(_QWORD *)&ptr;
          v15 = 0;
          *(_DWORD *)(v13 + 8) = 0;
          *(_DWORD *)(v13 + 12) = 0;
          v16 = HIDWORD(v14) - v14;
          *(_DWORD *)(v13 + 16) = 0;
          v17 = -858993459 * (v16 >> 2);
          if ( v16 )
          {
            if ( v17 >= 0xCCCCCCD )
              sub_21E57F4();
            v15 = (char *)j_operator new(v16);
          }
          *(_DWORD *)(v13 + 8) = v15;
          *(_DWORD *)(v13 + 12) = v15;
          v18 = v7;
          *(_DWORD *)(v13 + 16) = &v15[20 * v17];
          v19 = v9;
          v20 = v8;
          v21 = -858993459 * ((v55 - (_BYTE *)ptr) >> 2);
          if ( v55 != ptr )
            j___aeabi_memmove4_0((int)v15, (int)ptr);
          v22 = 5 * v21;
          v8 = v20;
          v9 = v19;
          *(_DWORD *)(v13 + 12) = &v15[4 * v22];
          v7 = v18;
          *((_DWORD *)v47 + 5) += 20;
          v10 = (const Item **)"item";
      }
      if ( ptr )
        j_operator delete(ptr);
      j_Json::ValueIteratorBase::increment(v7);
    }
    v2 = (Json::Value *)v44;
    v3 = v47;
  }
  j_Json::Value::Value(&v51, 0);
  j_Parser::parse(v2, (const Json::Value *)&v51, (Json::Value *)"autoRejectItems", v23);
  if ( !j_Json::Value::isNull((Json::Value *)&v51) && j_Json::Value::isArray((Json::Value *)&v51) == 1 )
    j_Json::Value::begin((Json::Value *)&v50, (int)&v51);
    j_Json::Value::end((Json::Value *)&v49, (int)&v51);
    v45 = (char *)v2;
    v25 = (const Json::ValueIteratorBase *)&v49;
    v26 = (const Item **)"item";
    v27 = (const Json::Value *)&v48;
    v28 = (const char *)&unk_257BC67;
    while ( j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v50, v25) != 1 )
      v29 = (Parser *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v50);
      j_Parser::parse(v29, v27, v26, v28, v45);
      v30 = v48;
      if ( v48 )
        *(_QWORD *)&v31 = *((_QWORD *)v3 + 4);
        if ( v31 == v32 )
          v33 = (_BYTE *)*((_DWORD *)v3 + 7);
          v34 = 0;
          v35 = (v31 - v33) >> 2;
          if ( !v35 )
            v35 = 1;
          v36 = v35 + ((v31 - v33) >> 2);
          v37 = v35 + ((v31 - v33) >> 2);
          if ( 0 != v36 >> 30 )
            v37 = 0x3FFFFFFF;
          if ( v36 < v35 )
          if ( v37 )
            if ( v37 >= 0x40000000 )
            v34 = (char *)j_operator new(4 * v37);
            v30 = v48;
            v38 = v26;
            v31 = (char *)(*(_QWORD *)((char *)v3 + 28) >> 32);
            v33 = (_BYTE *)*(_QWORD *)((char *)v3 + 28);
          else
          v39 = (int *)&v34[v31 - v33];
          *v39 = v30;
          if ( (v31 - v33) >> 2 )
            j___aeabi_memmove4_0((int)v34, (int)v33);
          v40 = (int)(v39 + 1);
          if ( v33 )
            j_operator delete(v33);
          v26 = v38;
          v41 = (int)&v34[4 * v37];
          *((_DWORD *)v3 + 7) = v34;
          *((_DWORD *)v3 + 8) = v40;
          v25 = (const Json::ValueIteratorBase *)&v49;
          v28 = (const char *)&unk_257BC67;
          v27 = (const Json::Value *)&v48;
          *((_DWORD *)v3 + 9) = v41;
          *(_DWORD *)v31 = v48;
          *((_DWORD *)v3 + 8) += 4;
      j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v50);
    v2 = (Json::Value *)v45;
  j_Parser::parse(v2, (MountTameableDescription *)((char *)v3 + 48), (DefinitionTrigger *)"tame_event", v24);
  j_Json::Value::~Value((Json::Value *)&v51);
  return j_Json::Value::~Value((Json::Value *)&v59);
}


const char *__fastcall MountTameableDescription::getJsonName(MountTameableDescription *this)
{
  return "minecraft:tamemount";
}


void __fastcall MountTameableDescription::getDocumentation(int a1, int a2)
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
  char *v37; // r5@25
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
  unsigned int *v49; // r2@35
  signed int v50; // r1@37
  unsigned int *v51; // r2@39
  signed int v52; // r1@41
  unsigned int *v53; // r2@43
  signed int v54; // r1@45
  unsigned int *v55; // r2@47
  signed int v56; // r1@49
  unsigned int *v57; // r2@51
  signed int v58; // r1@53
  unsigned int *v59; // r2@55
  signed int v60; // r1@57
  unsigned int *v61; // r2@59
  signed int v62; // r1@61
  unsigned int *v63; // r2@63
  signed int v64; // r1@65
  unsigned int *v65; // r2@67
  signed int v66; // r1@69
  unsigned int *v67; // r2@71
  signed int v68; // r1@73
  unsigned int *v69; // r2@75
  signed int v70; // r1@77
  unsigned int *v71; // r2@79
  signed int v72; // r1@81
  unsigned int *v73; // r2@83
  signed int v74; // r1@85
  unsigned int *v75; // r2@87
  signed int v76; // r1@89
  unsigned int *v77; // r2@91
  signed int v78; // r1@93
  unsigned int *v79; // r2@95
  signed int v80; // r1@97
  unsigned int *v81; // r2@99
  signed int v82; // r1@101
  unsigned int *v83; // r2@103
  signed int v84; // r1@105
  unsigned int *v85; // r2@107
  signed int v86; // r1@109
  unsigned int *v87; // r2@111
  signed int v88; // r1@113
  unsigned int *v89; // r2@115
  signed int v90; // r1@117
  unsigned int *v91; // r2@119
  signed int v92; // r1@121
  unsigned int *v93; // r2@123
  signed int v94; // r1@125
  unsigned int *v95; // r2@127
  signed int v96; // r1@129
  unsigned int *v97; // r2@131
  signed int v98; // r1@133
  unsigned int *v99; // r2@135
  signed int v100; // r1@137
  unsigned int *v101; // r2@139
  signed int v102; // r1@141
  unsigned int *v103; // r2@143
  signed int v104; // r1@145
  unsigned int *v105; // r2@147
  signed int v106; // r1@149
  unsigned int *v107; // r2@151
  signed int v108; // r1@153
  unsigned int *v109; // r2@155
  signed int v110; // r1@157
  unsigned int *v111; // r2@159
  signed int v112; // r1@161
  unsigned int *v113; // r2@163
  signed int v114; // r1@165
  int v115; // [sp+8h] [bp-118h]@31
  int v116; // [sp+10h] [bp-110h]@31
  int v117; // [sp+18h] [bp-108h]@31
  int v118; // [sp+20h] [bp-100h]@28
  int v119; // [sp+28h] [bp-F8h]@28
  int v120; // [sp+30h] [bp-F0h]@28
  int v121; // [sp+38h] [bp-E8h]@25
  int v122; // [sp+40h] [bp-E0h]@25
  int v123; // [sp+48h] [bp-D8h]@25
  int v124; // [sp+50h] [bp-D0h]@22
  int v125; // [sp+58h] [bp-C8h]@22
  int v126; // [sp+60h] [bp-C0h]@22
  int v127; // [sp+68h] [bp-B8h]@19
  int v128; // [sp+70h] [bp-B0h]@19
  int v129; // [sp+78h] [bp-A8h]@19
  int v130; // [sp+80h] [bp-A0h]@16
  int v131; // [sp+88h] [bp-98h]@16
  int v132; // [sp+90h] [bp-90h]@16
  int v133; // [sp+98h] [bp-88h]@13
  int v134; // [sp+A0h] [bp-80h]@13
  int v135; // [sp+A8h] [bp-78h]@13
  int v136; // [sp+B0h] [bp-70h]@10
  int v137; // [sp+B8h] [bp-68h]@10
  int v138; // [sp+C0h] [bp-60h]@10
  int v139; // [sp+C8h] [bp-58h]@7
  int v140; // [sp+D0h] [bp-50h]@7
  int v141; // [sp+D8h] [bp-48h]@7
  int v142; // [sp+E0h] [bp-40h]@4
  int v143; // [sp+E8h] [bp-38h]@4
  int v144; // [sp+F0h] [bp-30h]@4
  int v145; // [sp+F8h] [bp-28h]@1
  int v146; // [sp+100h] [bp-20h]@1
  int v147; // [sp+108h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v147, "minTemper");
  sub_21E94B4((void **)&v146, "0");
  v3 = (int *)sub_21E94B4((void **)&v145, "The minimum value for the entity's random starting temper");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v147, &v146, v3);
  v4 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
  {
    v49 = (unsigned int *)(v145 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
    }
    else
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v146 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v147 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v144, "maxTemper");
  sub_21E94B4((void **)&v143, "100");
  v7 = (int *)sub_21E94B4((void **)&v142, "The maximum value for the entity's random starting temper");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v144, &v143, v7);
  v8 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v142 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v143 - 12);
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v143 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v144 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v141, "feed_text");
  sub_21E94B4((void **)&v140, (const char *)&unk_257BC67);
  v11 = (int *)sub_21E94B4((void **)&v139, "The text that shows in the feeding interact button");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v141, &v140, v11);
  v12 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v139 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v140 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v141 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v138, "ride_text");
  sub_21E94B4((void **)&v137, (const char *)&unk_257BC67);
  v15 = (int *)sub_21E94B4((void **)&v136, "The text that shows in the riding interact button");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v138, &v137, v15);
  v16 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v136 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v137 - 12);
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v137 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v138 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v135, "attemptTemperMod");
  sub_21E94B4((void **)&v134, "5");
  v19 = (int *)sub_21E94B4((void **)&v133, "The amount the entity's temper will increase when mounted");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v135, &v134, v19);
  v20 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v133 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v134 - 12);
  if ( (int *)(v134 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v134 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v135 - 12);
  if ( (int *)(v135 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v135 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v132, "feedItems");
  sub_21E94B4((void **)&v131, (const char *)&unk_257BC67);
  v23 = (int *)sub_21E94B4(
                 (void **)&v130,
                 "The list of items that can be used to increase the entity's temper and speed up the taming process");
  v24 = j_DocumentationSystem::Node::addNode(
          v2,
          (int *)&DocumentationSystem::OBJECT_TYPE,
          (const void **)&v132,
          &v131,
          v23);
  v25 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v130 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v131 - 12);
  if ( (int *)(v131 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v131 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v132 - 12);
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v132 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v24[4] = 1;
  sub_21E94B4((void **)&v129, "item");
  sub_21E94B4((void **)&v128, (const char *)&unk_257BC67);
  v28 = (int *)sub_21E94B4(
                 (void **)&v127,
                 "Name of the item this entity likes and can be used to increase this entity's temper");
  j_DocumentationSystem::Node::addNode(
    (int)v24,
    (int *)&DocumentationSystem::STRING_TYPE,
    (const void **)&v129,
    &v128,
    v28);
  v29 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v127 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v128 - 12);
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v128 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v129 - 12);
  if ( (int *)(v129 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v129 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  sub_21E94B4((void **)&v126, "temperMod");
  sub_21E94B4((void **)&v125, "0.0");
  v32 = (int *)sub_21E94B4((void **)&v124, "The amount of temper this entity gains when fed this item");
    (int *)&DocumentationSystem::FLOAT_TYPE,
    (const void **)&v126,
    &v125,
    v32);
  v33 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v124 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v125 - 12);
  if ( (int *)(v125 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v125 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v126 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  sub_21E94B4((void **)&v123, "autoRejectItems");
  sub_21E94B4((void **)&v122, (const char *)&unk_257BC67);
  v36 = (int *)sub_21E94B4(
                 (void **)&v121,
                 "The list of items that, if carried while interacting with the entity, will anger it");
  v37 = j_DocumentationSystem::Node::addNode(
          (const void **)&v123,
          &v122,
          v36);
  v38 = (void *)(v121 - 12);
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v121 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  v39 = (void *)(v122 - 12);
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v122 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = (void *)(v123 - 12);
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v101 = (unsigned int *)(v123 - 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  v37[4] = 1;
  sub_21E94B4((void **)&v120, "item");
  sub_21E94B4((void **)&v119, (const char *)&unk_257BC67);
  v41 = (int *)sub_21E94B4(
                 (void **)&v118,
                 "Name of the item this entity dislikes and will cause it to get angry if used while untamed");
    (int)v37,
    (const void **)&v120,
    &v119,
    v41);
  v42 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v118 - 4);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  v43 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v119 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v120 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  sub_21E94B4((void **)&v117, "tame_event");
  sub_21E94B4((void **)&v116, (const char *)&unk_257BC67);
  v45 = (int *)sub_21E94B4((void **)&v115, "Event that triggers when the entity becomes tamed");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v117, &v116, v45);
  v46 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v115 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  v47 = (void *)(v116 - 12);
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v111 = (unsigned int *)(v116 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  v48 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v117 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
}


MountTameableDescription *__fastcall MountTameableDescription::~MountTameableDescription(MountTameableDescription *this)
{
  MountTameableDescription *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  void *v10; // r0@5
  int v11; // r5@7 OVERLAPPED
  int v12; // r6@7 OVERLAPPED
  void *v13; // r0@8
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29

  v1 = this;
  *(_DWORD *)this = &off_271E918;
  FilterGroup::~FilterGroup((MountTameableDescription *)((char *)this + 56));
  v2 = *((_DWORD *)v1 + 13);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 12);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v4 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 11);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v6 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 10);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v8 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)*((_DWORD *)v1 + 7);
  if ( v10 )
    operator delete(v10);
  *(_QWORD *)&v11 = *((_QWORD *)v1 + 2);
  if ( v11 != v12 )
    do
      v13 = *(void **)(v11 + 8);
      if ( v13 )
        operator delete(v13);
      v11 += 20;
    while ( v12 != v11 );
    v11 = *((_DWORD *)v1 + 4);
  if ( v11 )
    operator delete((void *)v11);
  return v1;
}


void __fastcall MountTameableDescription::getDocumentation(int a1, int a2)
{
  MountTameableDescription::getDocumentation(a1, a2);
}


void __fastcall MountTameableDescription::~MountTameableDescription(MountTameableDescription *this)
{
  MountTameableDescription *v1; // r0@1

  v1 = j_MountTameableDescription::~MountTameableDescription(this);
  j_j_j__ZdlPv_7((void *)v1);
}


const char *__fastcall MountTameableDescription::getDescription(MountTameableDescription *this)
{
  return "Allows the Entity to be tamed by mounting it.";
}


void __fastcall MountTameableDescription::~MountTameableDescription(MountTameableDescription *this)
{
  MountTameableDescription::~MountTameableDescription(this);
}
