

signed int __fastcall Description::startParsing(Description *this, Json::Value *a2, Json::Value *a3, const char *a4)
{
  Json::Value *v4; // r5@1
  const char *v5; // r4@1
  Json::Value *v6; // r6@1
  const Json::Value *v7; // r0@2
  signed int result; // r0@2
  int v9; // [sp+0h] [bp-20h]@2

  v4 = a3;
  v5 = a4;
  v6 = a2;
  if ( Json::Value::isMember(a3, a4) == 1 )
  {
    v7 = (const Json::Value *)Json::Value::operator[](v4, v5);
    Json::Value::operator=((int)v6, v7);
    Json::Value::removeMember((Json::Value *)&v9, (const char *)v4, v5);
    Json::Value::~Value((Json::Value *)&v9);
    result = 1;
  }
  else
    result = 0;
  return result;
}


Description *__fastcall Description::parseDescription(Description *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  Description *v3; // r4@1
  const char *v4; // r6@1
  const Json::Value *v5; // r0@2
  int v7; // [sp+0h] [bp-30h]@1
  char v8; // [sp+10h] [bp-20h]@2

  v2 = a2;
  v3 = this;
  Json::Value::Value(&v7, 0);
  v4 = (const char *)(*(int (__fastcall **)(Description *))(*(_DWORD *)v3 + 4))(v3);
  if ( Json::Value::isMember(v2, v4) == 1 )
  {
    v5 = (const Json::Value *)Json::Value::operator[](v2, v4);
    Json::Value::operator=((int)&v7, v5);
    Json::Value::removeMember((Json::Value *)&v8, (const char *)v2, v4);
    Json::Value::~Value((Json::Value *)&v8);
    if ( Json::Value::isBool((Json::Value *)&v7) != 1 || Json::Value::asBool((Json::Value *)&v7, 0) )
      (*(void (__fastcall **)(Description *, int *))(*(_DWORD *)v3 + 24))(v3, &v7);
    else
      v3 = 0;
  }
  else
    v3 = 0;
  Json::Value::~Value((Json::Value *)&v7);
  return v3;
}


void __fastcall Description::registerProperties(Description *this)
{
  Description::registerProperties(this);
}


int __fastcall Description::getId(int **a1)
{
  return *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                      (int)&Description::NAME_TO_ID_MAP,
                      a1);
}


int __fastcall Description::registerDescription(Description *this, DocumentationSystem *a2)
{
  Description *v2; // r4@1
  DocumentationSystem *v3; // r8@1
  const char *v4; // r5@1
  char *v5; // r0@1
  int v6; // r7@1
  signed int *v7; // r0@1
  char *v8; // r7@1
  void *v9; // r0@1
  void *v10; // r0@2
  void *v11; // r0@3
  const char *v12; // r0@4
  char *v13; // r6@4
  void *v14; // r0@4
  const char *v15; // r0@5
  char *v16; // r5@5
  void *v17; // r0@5
  void *v18; // r0@6
  unsigned int *v20; // r2@8
  signed int v21; // r1@10
  unsigned int *v22; // r2@12
  signed int v23; // r1@14
  unsigned int *v24; // r2@16
  signed int v25; // r1@18
  unsigned int *v26; // r2@20
  signed int v27; // r1@22
  unsigned int *v28; // r2@24
  signed int v29; // r1@26
  unsigned int *v30; // r2@28
  signed int v31; // r1@30
  int v32; // [sp+4h] [bp-44h]@5
  int v33; // [sp+Ch] [bp-3Ch]@5
  int v34; // [sp+14h] [bp-34h]@4
  int v35; // [sp+1Ch] [bp-2Ch]@1
  int v36; // [sp+20h] [bp-28h]@1
  int v37; // [sp+28h] [bp-20h]@1

  v2 = this;
  v3 = a2;
  v4 = (const char *)(*(int (**)(void))(*(_DWORD *)this + 4))();
  v5 = DocumentationSystem::getPage((int)v3, (const void **)&DocumentationSystem::NODE_COMPONENTIDS);
  v6 = (int)v5;
  v5[4] = 1;
  sub_21E8190((void **)v5 + 6, (char *)&unk_257BC67, 0);
  sub_21E8190((void **)(v6 + 28), "JSON Name", (_BYTE *)9);
  sub_21E8190((void **)(v6 + 32), (char *)&unk_257BC67, 0);
  sub_21E8190((void **)(v6 + 36), "ID", (_BYTE *)2);
  sub_21E94B4((void **)&v37, v4);
  sub_21E94B4((void **)&v35, v4);
  v7 = (signed int *)std::__detail::_Map_base<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       (int)&Description::NAME_TO_ID_MAP,
                       (int **)&v35);
  Util::toString<int,(void *)0,(void *)0>((void **)&v36, *v7);
  v8 = DocumentationSystem::Node::addNode(v6, (const void **)&v37, &v36);
  v9 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  v10 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v35 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v37 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v8[6] = 0;
  v12 = (const char *)(**(int (__fastcall ***)(Description *))v2)(v2);
  sub_21E94B4((void **)&v34, v12);
  v13 = DocumentationSystem::getPage((int)v3, (const void **)&v34);
  v14 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v34 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v33, v4);
  v15 = (const char *)(*(int (__fastcall **)(Description *))(*(_DWORD *)v2 + 8))(v2);
  sub_21E94B4((void **)&v32, v15);
  v16 = DocumentationSystem::Node::addNode((int)v13, (const void **)&v33, &v32);
  v17 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v32 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v33 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v16[4] = 1;
  return (*(int (__fastcall **)(Description *, char *))(*(_DWORD *)v2 + 12))(v2, v16);
}


void __fastcall Description::registerTriggers(Description *this)
{
  void *v1; // r0@1
  void *v2; // r0@2
  void *v3; // r0@3
  void *v4; // r0@4
  void *v5; // r0@5
  void *v6; // r0@6
  void *v7; // r0@7
  void *v8; // r0@8
  void *v9; // r0@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  unsigned int *v12; // r2@15
  signed int v13; // r1@17
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  unsigned int *v16; // r2@23
  signed int v17; // r1@25
  unsigned int *v18; // r2@27
  signed int v19; // r1@29
  unsigned int *v20; // r2@31
  signed int v21; // r1@33
  unsigned int *v22; // r2@35
  signed int v23; // r1@37
  unsigned int *v24; // r2@39
  signed int v25; // r1@41
  unsigned int *v26; // r2@43
  signed int v27; // r1@45
  int v28; // [sp+8h] [bp-58h]@9
  int v29; // [sp+10h] [bp-50h]@8
  int v30; // [sp+18h] [bp-48h]@7
  int v31; // [sp+20h] [bp-40h]@6
  int v32; // [sp+28h] [bp-38h]@5
  int v33; // [sp+30h] [bp-30h]@4
  int v34; // [sp+38h] [bp-28h]@3
  int v35; // [sp+40h] [bp-20h]@2
  int v36; // [sp+48h] [bp-18h]@1

  sub_21E94B4((void **)&v36, "minecraft:on_death");
  Description::registerJsonName((int **)&v36);
  v1 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v1);
  }
  sub_21E94B4((void **)&v35, "minecraft:on_friendly_anger");
  Description::registerJsonName((int **)&v35);
  v2 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v35 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  sub_21E94B4((void **)&v34, "minecraft:on_hurt");
  Description::registerJsonName((int **)&v34);
  v3 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v34 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  sub_21E94B4((void **)&v33, "minecraft:on_hurt_by_player");
  Description::registerJsonName((int **)&v33);
  v4 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v33 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  sub_21E94B4((void **)&v32, "minecraft:on_ignite");
  Description::registerJsonName((int **)&v32);
  v5 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v32 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v31, "minecraft:on_start_landing");
  Description::registerJsonName((int **)&v31);
  v6 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v31 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v30, "minecraft:on_start_takeoff");
  Description::registerJsonName((int **)&v30);
  v7 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v30 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v29, "minecraft:on_target_acquired");
  Description::registerJsonName((int **)&v29);
  v8 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v29 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v28, "minecraft:on_target_escape");
  Description::registerJsonName((int **)&v28);
  v9 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v28 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


void __fastcall Description::registerComponents(Description *this)
{
  void *v1; // r0@1
  void *v2; // r0@2
  void *v3; // r0@3
  void *v4; // r0@4
  void *v5; // r0@5
  void *v6; // r0@6
  void *v7; // r0@7
  void *v8; // r0@8
  void *v9; // r0@9
  void *v10; // r0@10
  void *v11; // r0@11
  void *v12; // r0@12
  void *v13; // r0@13
  void *v14; // r0@14
  void *v15; // r0@15
  void *v16; // r0@16
  void *v17; // r0@17
  void *v18; // r0@18
  void *v19; // r0@19
  void *v20; // r0@20
  void *v21; // r0@21
  void *v22; // r0@22
  void *v23; // r0@23
  void *v24; // r0@24
  void *v25; // r0@25
  void *v26; // r0@26
  void *v27; // r0@27
  void *v28; // r0@28
  void *v29; // r0@29
  void *v30; // r0@30
  void *v31; // r0@31
  void *v32; // r0@32
  void *v33; // r0@33
  void *v34; // r0@34
  void *v35; // r0@35
  void *v36; // r0@36
  void *v37; // r0@37
  void *v38; // r0@38
  void *v39; // r0@39
  void *v40; // r0@40
  void *v41; // r0@41
  void *v42; // r0@42
  void *v43; // r0@43
  void *v44; // r0@44
  void *v45; // r0@45
  void *v46; // r0@46
  void *v47; // r0@47
  unsigned int *v48; // r2@49
  signed int v49; // r1@51
  unsigned int *v50; // r2@53
  signed int v51; // r1@55
  unsigned int *v52; // r2@57
  signed int v53; // r1@59
  unsigned int *v54; // r2@61
  signed int v55; // r1@63
  unsigned int *v56; // r2@65
  signed int v57; // r1@67
  unsigned int *v58; // r2@69
  signed int v59; // r1@71
  unsigned int *v60; // r2@73
  signed int v61; // r1@75
  unsigned int *v62; // r2@77
  signed int v63; // r1@79
  unsigned int *v64; // r2@81
  signed int v65; // r1@83
  unsigned int *v66; // r2@85
  signed int v67; // r1@87
  unsigned int *v68; // r2@89
  signed int v69; // r1@91
  unsigned int *v70; // r2@93
  signed int v71; // r1@95
  unsigned int *v72; // r2@97
  signed int v73; // r1@99
  unsigned int *v74; // r2@101
  signed int v75; // r1@103
  unsigned int *v76; // r2@105
  signed int v77; // r1@107
  unsigned int *v78; // r2@109
  signed int v79; // r1@111
  unsigned int *v80; // r2@113
  signed int v81; // r1@115
  unsigned int *v82; // r2@117
  signed int v83; // r1@119
  unsigned int *v84; // r2@121
  signed int v85; // r1@123
  unsigned int *v86; // r2@125
  signed int v87; // r1@127
  unsigned int *v88; // r2@129
  signed int v89; // r1@131
  unsigned int *v90; // r2@133
  signed int v91; // r1@135
  unsigned int *v92; // r2@137
  signed int v93; // r1@139
  unsigned int *v94; // r2@141
  signed int v95; // r1@143
  unsigned int *v96; // r2@145
  signed int v97; // r1@147
  unsigned int *v98; // r2@149
  signed int v99; // r1@151
  unsigned int *v100; // r2@153
  signed int v101; // r1@155
  unsigned int *v102; // r2@157
  signed int v103; // r1@159
  unsigned int *v104; // r2@161
  signed int v105; // r1@163
  unsigned int *v106; // r2@165
  signed int v107; // r1@167
  unsigned int *v108; // r2@169
  signed int v109; // r1@171
  unsigned int *v110; // r2@173
  signed int v111; // r1@175
  unsigned int *v112; // r2@177
  signed int v113; // r1@179
  unsigned int *v114; // r2@181
  signed int v115; // r1@183
  unsigned int *v116; // r2@185
  signed int v117; // r1@187
  unsigned int *v118; // r2@189
  signed int v119; // r1@191
  unsigned int *v120; // r2@193
  signed int v121; // r1@195
  unsigned int *v122; // r2@197
  signed int v123; // r1@199
  unsigned int *v124; // r2@201
  signed int v125; // r1@203
  unsigned int *v126; // r2@205
  signed int v127; // r1@207
  unsigned int *v128; // r2@209
  signed int v129; // r1@211
  unsigned int *v130; // r2@213
  signed int v131; // r1@215
  unsigned int *v132; // r2@217
  signed int v133; // r1@219
  unsigned int *v134; // r2@221
  signed int v135; // r1@223
  unsigned int *v136; // r2@225
  signed int v137; // r1@227
  unsigned int *v138; // r2@229
  signed int v139; // r1@231
  unsigned int *v140; // r2@233
  signed int v141; // r1@235
  int v142; // [sp+8h] [bp-188h]@47
  int v143; // [sp+10h] [bp-180h]@46
  int v144; // [sp+18h] [bp-178h]@45
  int v145; // [sp+20h] [bp-170h]@44
  int v146; // [sp+28h] [bp-168h]@43
  int v147; // [sp+30h] [bp-160h]@42
  int v148; // [sp+38h] [bp-158h]@41
  int v149; // [sp+40h] [bp-150h]@40
  int v150; // [sp+48h] [bp-148h]@39
  int v151; // [sp+50h] [bp-140h]@38
  int v152; // [sp+58h] [bp-138h]@37
  int v153; // [sp+60h] [bp-130h]@36
  int v154; // [sp+68h] [bp-128h]@35
  int v155; // [sp+70h] [bp-120h]@34
  int v156; // [sp+78h] [bp-118h]@33
  int v157; // [sp+80h] [bp-110h]@32
  int v158; // [sp+88h] [bp-108h]@31
  int v159; // [sp+90h] [bp-100h]@30
  int v160; // [sp+98h] [bp-F8h]@29
  int v161; // [sp+A0h] [bp-F0h]@28
  int v162; // [sp+A8h] [bp-E8h]@27
  int v163; // [sp+B0h] [bp-E0h]@26
  int v164; // [sp+B8h] [bp-D8h]@25
  int v165; // [sp+C0h] [bp-D0h]@24
  int v166; // [sp+C8h] [bp-C8h]@23
  int v167; // [sp+D0h] [bp-C0h]@22
  int v168; // [sp+D8h] [bp-B8h]@21
  int v169; // [sp+E0h] [bp-B0h]@20
  int v170; // [sp+E8h] [bp-A8h]@19
  int v171; // [sp+F0h] [bp-A0h]@18
  int v172; // [sp+F8h] [bp-98h]@17
  int v173; // [sp+100h] [bp-90h]@16
  int v174; // [sp+108h] [bp-88h]@15
  int v175; // [sp+110h] [bp-80h]@14
  int v176; // [sp+118h] [bp-78h]@13
  int v177; // [sp+120h] [bp-70h]@12
  int v178; // [sp+128h] [bp-68h]@11
  int v179; // [sp+130h] [bp-60h]@10
  int v180; // [sp+138h] [bp-58h]@9
  int v181; // [sp+140h] [bp-50h]@8
  int v182; // [sp+148h] [bp-48h]@7
  int v183; // [sp+150h] [bp-40h]@6
  int v184; // [sp+158h] [bp-38h]@5
  int v185; // [sp+160h] [bp-30h]@4
  int v186; // [sp+168h] [bp-28h]@3
  int v187; // [sp+170h] [bp-20h]@2
  int v188; // [sp+178h] [bp-18h]@1

  sub_21E94B4((void **)&v188, "minecraft:addrider");
  Description::registerJsonName((int **)&v188);
  v1 = (void *)(v188 - 12);
  if ( (int *)(v188 - 12) != &dword_28898C0 )
  {
    v48 = (unsigned int *)(v188 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
    }
    else
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v1);
  }
  sub_21E94B4((void **)&v187, "minecraft:ageable");
  Description::registerJsonName((int **)&v187);
  v2 = (void *)(v187 - 12);
  if ( (int *)(v187 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v187 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  sub_21E94B4((void **)&v186, "minecraft:angry");
  Description::registerJsonName((int **)&v186);
  v3 = (void *)(v186 - 12);
  if ( (int *)(v186 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v186 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  sub_21E94B4((void **)&v185, "minecraft:boostable");
  Description::registerJsonName((int **)&v185);
  v4 = (void *)(v185 - 12);
  if ( (int *)(v185 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v185 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  sub_21E94B4((void **)&v184, "minecraft:breathable");
  Description::registerJsonName((int **)&v184);
  v5 = (void *)(v184 - 12);
  if ( (int *)(v184 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v184 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v183, "minecraft:breedable");
  Description::registerJsonName((int **)&v183);
  v6 = (void *)(v183 - 12);
  if ( (int *)(v183 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v183 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v182, "minecraft:caster");
  Description::registerJsonName((int **)&v182);
  v7 = (void *)(v182 - 12);
  if ( (int *)(v182 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v182 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v181, "minecraft:damage_sensor");
  Description::registerJsonName((int **)&v181);
  v8 = (void *)(v181 - 12);
  if ( (int *)(v181 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v181 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v180, "minecraft:environment_sensor");
  Description::registerJsonName((int **)&v180);
  v9 = (void *)(v180 - 12);
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v180 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v179, "minecraft:equippable");
  Description::registerJsonName((int **)&v179);
  v10 = (void *)(v179 - 12);
  if ( (int *)(v179 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v179 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v178, "minecraft:explode");
  Description::registerJsonName((int **)&v178);
  v11 = (void *)(v178 - 12);
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v178 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v177, "minecraft:healable");
  Description::registerJsonName((int **)&v177);
  v12 = (void *)(v177 - 12);
  if ( (int *)(v177 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v177 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v176, "minecraft:interact");
  Description::registerJsonName((int **)&v176);
  v13 = (void *)(v176 - 12);
  if ( (int *)(v176 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v176 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v175, "minecraft:inventory");
  Description::registerJsonName((int **)&v175);
  v14 = (void *)(v175 - 12);
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v175 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v174, "minecraft:item_hopper");
  Description::registerJsonName((int **)&v174);
  v15 = (void *)(v174 - 12);
  if ( (int *)(v174 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v174 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v173, "minecraft:jump.dynamic");
  Description::registerJsonName((int **)&v173);
  v16 = (void *)(v173 - 12);
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v173 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v172, "minecraft:jump.static");
  Description::registerJsonName((int **)&v172);
  v17 = (void *)(v172 - 12);
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v172 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v171, "minecraft:leashable");
  Description::registerJsonName((int **)&v171);
  v18 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v171 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v170, "minecraft:lookat");
  Description::registerJsonName((int **)&v170);
  v19 = (void *)(v170 - 12);
  if ( (int *)(v170 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v170 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v169, "minecraft:movement.basic");
  Description::registerJsonName((int **)&v169);
  v20 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v169 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v168, "minecraft:movement.jump");
  Description::registerJsonName((int **)&v168);
  v21 = (void *)(v168 - 12);
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v168 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v167, "minecraft:movement.skip");
  Description::registerJsonName((int **)&v167);
  v22 = (void *)(v167 - 12);
  if ( (int *)(v167 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v167 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v166, "minecraft:movement.fly");
  Description::registerJsonName((int **)&v166);
  v23 = (void *)(v166 - 12);
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v166 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v165, "minecraft:nameable");
  Description::registerJsonName((int **)&v165);
  v24 = (void *)(v165 - 12);
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v165 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v164, "minecraft:navigation.climb");
  Description::registerJsonName((int **)&v164);
  v25 = (void *)(v164 - 12);
  if ( (int *)(v164 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v164 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v163, "minecraft:navigation.float");
  Description::registerJsonName((int **)&v163);
  v26 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v163 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v162, "minecraft:navigation.fly");
  Description::registerJsonName((int **)&v162);
  v27 = (void *)(v162 - 12);
  if ( (int *)(v162 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v162 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v161, "minecraft:navigation.swim");
  Description::registerJsonName((int **)&v161);
  v28 = (void *)(v161 - 12);
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v161 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v160, "minecraft:navigation.walk");
  Description::registerJsonName((int **)&v160);
  v29 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v160 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v159, "minecraft:peek");
  Description::registerJsonName((int **)&v159);
  v30 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v159 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v158, "minecraft:projectile");
  Description::registerJsonName((int **)&v158);
  v31 = (void *)(v158 - 12);
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v158 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  sub_21E94B4((void **)&v157, "minecraft:rail_movement");
  Description::registerJsonName((int **)&v157);
  v32 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v157 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  sub_21E94B4((void **)&v156, "minecraft:rail_sensor");
  Description::registerJsonName((int **)&v156);
  v33 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v156 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v155, "minecraft:rideable");
  Description::registerJsonName((int **)&v155);
  v34 = (void *)(v155 - 12);
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v155 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  sub_21E94B4((void **)&v154, "minecraft:scale_by_age");
  Description::registerJsonName((int **)&v154);
  v35 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v154 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  sub_21E94B4((void **)&v153, "minecraft:shareables");
  Description::registerJsonName((int **)&v153);
  v36 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v153 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  sub_21E94B4((void **)&v152, "minecraft:shooter");
  Description::registerJsonName((int **)&v152);
  v37 = (void *)(v152 - 12);
  if ( (int *)(v152 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v152 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v151, "minecraft:sittable");
  Description::registerJsonName((int **)&v151);
  v38 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v151 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  sub_21E94B4((void **)&v150, "minecraft:spawn_entity");
  Description::registerJsonName((int **)&v150);
  v39 = (void *)(v150 - 12);
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v150 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  sub_21E94B4((void **)&v149, "minecraft:tameable");
  Description::registerJsonName((int **)&v149);
  v40 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v126 = (unsigned int *)(v149 - 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 - 1, v126) );
      v127 = (*v126)--;
    if ( v127 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  sub_21E94B4((void **)&v148, "minecraft:tamemount");
  Description::registerJsonName((int **)&v148);
  v41 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v128 = (unsigned int *)(v148 - 4);
        v129 = __ldrex(v128);
      while ( __strex(v129 - 1, v128) );
      v129 = (*v128)--;
    if ( v129 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  sub_21E94B4((void **)&v147, "minecraft:target_nearby_sensor");
  Description::registerJsonName((int **)&v147);
  v42 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v130 = (unsigned int *)(v147 - 4);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  sub_21E94B4((void **)&v146, "minecraft:teleport");
  Description::registerJsonName((int **)&v146);
  v43 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v132 = (unsigned int *)(v146 - 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  sub_21E94B4((void **)&v145, "minecraft:tick_world");
  Description::registerJsonName((int **)&v145);
  v44 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v134 = (unsigned int *)(v145 - 4);
        v135 = __ldrex(v134);
      while ( __strex(v135 - 1, v134) );
      v135 = (*v134)--;
    if ( v135 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  sub_21E94B4((void **)&v144, "minecraft:timer");
  Description::registerJsonName((int **)&v144);
  v45 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v136 = (unsigned int *)(v144 - 4);
        v137 = __ldrex(v136);
      while ( __strex(v137 - 1, v136) );
      v137 = (*v136)--;
    if ( v137 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  sub_21E94B4((void **)&v143, "minecraft:trade_table");
  Description::registerJsonName((int **)&v143);
  v46 = (void *)(v143 - 12);
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v138 = (unsigned int *)(v143 - 4);
        v139 = __ldrex(v138);
      while ( __strex(v139 - 1, v138) );
      v139 = (*v138)--;
    if ( v139 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  sub_21E94B4((void **)&v142, "minecraft:transformation");
  Description::registerJsonName((int **)&v142);
  v47 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v140 = (unsigned int *)(v142 - 4);
        v141 = __ldrex(v140);
      while ( __strex(v141 - 1, v140) );
      v141 = (*v140)--;
    if ( v141 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
}


void __fastcall Description::registerAttributes(Description *this)
{
  Description::registerAttributes(this);
}


int __fastcall Description::getName(Description *this, int a2)
{
  Description *v2; // r9@1
  int v3; // r8@1
  int v4; // r0@1
  _DWORD *v5; // r4@2
  Description *v6; // r7@2
  _DWORD *v7; // r5@4
  bool v8; // zf@7
  _DWORD *v9; // r0@11

  v2 = this;
  v3 = (unsigned int)this % unk_27FDBF0;
  v4 = *(_DWORD *)(Description::ID_TO_NAME_MAP + 4 * ((unsigned int)this % unk_27FDBF0));
  if ( !v4 )
    goto LABEL_11;
  v5 = *(_DWORD **)v4;
  v6 = *(Description **)(*(_DWORD *)v4 + 4);
  while ( v6 != v2 )
  {
    v7 = (_DWORD *)*v5;
    if ( *v5 )
    {
      v6 = (Description *)v7[1];
      v4 = (int)v5;
      v5 = (_DWORD *)*v5;
      if ( v7[1] % unk_27FDBF0 == v3 )
        continue;
    }
  }
  v8 = v4 == 0;
  if ( v4 )
    v4 = *(_DWORD *)v4;
    v8 = v4 == 0;
  if ( v8 )
LABEL_11:
    v9 = operator new(0xCu);
    *v9 = 0;
    v9[1] = v2;
    v9[2] = &unk_28898CC;
    v4 = std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
           (int)&Description::ID_TO_NAME_MAP,
           v3,
           (unsigned int)v2,
           (int)v9);
  return v4 + 8;
}


void __fastcall Description::registerTriggers(Description *this)
{
  Description::registerTriggers(this);
}


void __fastcall Description::registerAttributes(Description *this)
{
  void *v1; // r0@1
  void *v2; // r0@2
  void *v3; // r0@3
  unsigned int *v4; // r2@5
  signed int v5; // r1@7
  unsigned int *v6; // r2@9
  signed int v7; // r1@11
  unsigned int *v8; // r2@13
  signed int v9; // r1@15
  int v10; // [sp+8h] [bp-28h]@3
  int v11; // [sp+10h] [bp-20h]@2
  int v12; // [sp+18h] [bp-18h]@1

  sub_21E94B4((void **)&v12, "minecraft:attack");
  Description::registerJsonName((int **)&v12);
  v1 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v1);
  }
  sub_21E94B4((void **)&v11, "minecraft:spell_effects");
  Description::registerJsonName((int **)&v11);
  v2 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v11 - 4);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  sub_21E94B4((void **)&v10, "minecraft:strength");
  Description::registerJsonName((int **)&v10);
  v3 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
}


void __fastcall Description::buildBuiltInEventDocumentation(Description *this, DocumentationSystem *a2)
{
  char *v2; // r0@1
  int v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  unsigned int *v18; // r2@22
  signed int v19; // r1@24
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  unsigned int *v22; // r2@30
  signed int v23; // r1@32
  unsigned int *v24; // r2@34
  signed int v25; // r1@36
  unsigned int *v26; // r2@38
  signed int v27; // r1@40
  int v28; // [sp+8h] [bp-50h]@7
  int v29; // [sp+10h] [bp-48h]@7
  int v30; // [sp+18h] [bp-40h]@5
  int v31; // [sp+20h] [bp-38h]@5
  int v32; // [sp+28h] [bp-30h]@3
  int v33; // [sp+30h] [bp-28h]@3
  int v34; // [sp+38h] [bp-20h]@1
  int v35; // [sp+40h] [bp-18h]@1

  v2 = DocumentationSystem::getPage((int)this, (const void **)&DocumentationSystem::NODE_EVENTS);
  v3 = (int)v2;
  v2[4] = 1;
  sub_21E8190((void **)v2 + 6, (char *)&unk_257BC67, 0);
  sub_21E8190((void **)(v3 + 32), (char *)&unk_257BC67, 0);
  sub_21E94B4((void **)&v35, "minecraft:entity_transformed");
  sub_21E94B4((void **)&v34, "Event called on an entity that transforms into another entity.");
  DocumentationSystem::Node::addNode(v3, (const void **)&v35, &v34);
  v4 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v35 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v33, "minecraft:entity_born");
  sub_21E94B4((void **)&v32, "Event called on an entity that is spawned through two entities breeding.");
  DocumentationSystem::Node::addNode(v3, (const void **)&v33, &v32);
  v6 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v32 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v33 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v31, "minecraft:entity_spawned");
  sub_21E94B4((void **)&v30, "Event called on an entity that is placed in the level.");
  DocumentationSystem::Node::addNode(v3, (const void **)&v31, &v30);
  v8 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v30 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v31 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v29, "minecraft:on_prime");
  sub_21E94B4((void **)&v28, "Event called on an entity whose fuse is lit and is ready to explode.");
  DocumentationSystem::Node::addNode(v3, (const void **)&v29, &v28);
  v10 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v28 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v29 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


void __fastcall Description::registerComponents(Description *this)
{
  Description::registerComponents(this);
}


int *__fastcall Description::registerJsonName(int **a1)
{
  int **v1; // r8@1
  unsigned int v2; // r10@1
  int v3; // r9@1
  int v4; // r0@1
  _DWORD *v5; // r5@2
  int v6; // r4@2
  _DWORD *v7; // r6@4
  bool v8; // zf@7
  _DWORD *v9; // r0@11

  v1 = a1;
  v2 = sub_21B417C(*a1, *(*a1 - 3), -955291385);
  *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
               (int)&Description::NAME_TO_ID_MAP,
               v1) = v2;
  v3 = v2 % unk_27FDBF0;
  v4 = *(_DWORD *)(Description::ID_TO_NAME_MAP + 4 * (v2 % unk_27FDBF0));
  if ( !v4 )
    goto LABEL_11;
  v5 = *(_DWORD **)v4;
  v6 = *(_DWORD *)(*(_DWORD *)v4 + 4);
  while ( v2 != v6 )
  {
    v7 = (_DWORD *)*v5;
    if ( *v5 )
    {
      v6 = v7[1];
      v4 = (int)v5;
      v5 = (_DWORD *)*v5;
      if ( v7[1] % unk_27FDBF0 == v3 )
        continue;
    }
  }
  v8 = v4 == 0;
  if ( v4 )
    v4 = *(_DWORD *)v4;
    v8 = v4 == 0;
  if ( v8 )
LABEL_11:
    v9 = operator new(0xCu);
    *v9 = 0;
    v9[1] = v2;
    v9[2] = &unk_28898CC;
    v4 = std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
           (int)&Description::ID_TO_NAME_MAP,
           v3,
           v2,
           (int)v9);
  return EntityInteraction::setInteractText((int *)(v4 + 8), (int *)v1);
}


void __fastcall Description::registerProperties(Description *this)
{
  void *v1; // r0@1
  void *v2; // r0@2
  void *v3; // r0@3
  void *v4; // r0@4
  void *v5; // r0@5
  void *v6; // r0@6
  void *v7; // r0@7
  void *v8; // r0@8
  void *v9; // r0@9
  void *v10; // r0@10
  void *v11; // r0@11
  void *v12; // r0@12
  void *v13; // r0@13
  void *v14; // r0@14
  void *v15; // r0@15
  void *v16; // r0@16
  void *v17; // r0@17
  void *v18; // r0@18
  void *v19; // r0@19
  void *v20; // r0@20
  void *v21; // r0@21
  void *v22; // r0@22
  void *v23; // r0@23
  void *v24; // r0@24
  void *v25; // r0@25
  void *v26; // r0@26
  void *v27; // r0@27
  void *v28; // r0@28
  void *v29; // r0@29
  void *v30; // r0@30
  void *v31; // r0@31
  void *v32; // r0@32
  void *v33; // r0@33
  void *v34; // r0@34
  void *v35; // r0@35
  void *v36; // r0@36
  void *v37; // r0@37
  unsigned int *v38; // r2@39
  signed int v39; // r1@41
  unsigned int *v40; // r2@43
  signed int v41; // r1@45
  unsigned int *v42; // r2@47
  signed int v43; // r1@49
  unsigned int *v44; // r2@51
  signed int v45; // r1@53
  unsigned int *v46; // r2@55
  signed int v47; // r1@57
  unsigned int *v48; // r2@59
  signed int v49; // r1@61
  unsigned int *v50; // r2@63
  signed int v51; // r1@65
  unsigned int *v52; // r2@67
  signed int v53; // r1@69
  unsigned int *v54; // r2@71
  signed int v55; // r1@73
  unsigned int *v56; // r2@75
  signed int v57; // r1@77
  unsigned int *v58; // r2@79
  signed int v59; // r1@81
  unsigned int *v60; // r2@83
  signed int v61; // r1@85
  unsigned int *v62; // r2@87
  signed int v63; // r1@89
  unsigned int *v64; // r2@91
  signed int v65; // r1@93
  unsigned int *v66; // r2@95
  signed int v67; // r1@97
  unsigned int *v68; // r2@99
  signed int v69; // r1@101
  unsigned int *v70; // r2@103
  signed int v71; // r1@105
  unsigned int *v72; // r2@107
  signed int v73; // r1@109
  unsigned int *v74; // r2@111
  signed int v75; // r1@113
  unsigned int *v76; // r2@115
  signed int v77; // r1@117
  unsigned int *v78; // r2@119
  signed int v79; // r1@121
  unsigned int *v80; // r2@123
  signed int v81; // r1@125
  unsigned int *v82; // r2@127
  signed int v83; // r1@129
  unsigned int *v84; // r2@131
  signed int v85; // r1@133
  unsigned int *v86; // r2@135
  signed int v87; // r1@137
  unsigned int *v88; // r2@139
  signed int v89; // r1@141
  unsigned int *v90; // r2@143
  signed int v91; // r1@145
  unsigned int *v92; // r2@147
  signed int v93; // r1@149
  unsigned int *v94; // r2@151
  signed int v95; // r1@153
  unsigned int *v96; // r2@155
  signed int v97; // r1@157
  unsigned int *v98; // r2@159
  signed int v99; // r1@161
  unsigned int *v100; // r2@163
  signed int v101; // r1@165
  unsigned int *v102; // r2@167
  signed int v103; // r1@169
  unsigned int *v104; // r2@171
  signed int v105; // r1@173
  unsigned int *v106; // r2@175
  signed int v107; // r1@177
  unsigned int *v108; // r2@179
  signed int v109; // r1@181
  unsigned int *v110; // r2@183
  signed int v111; // r1@185
  int v112; // [sp+8h] [bp-138h]@37
  int v113; // [sp+10h] [bp-130h]@36
  int v114; // [sp+18h] [bp-128h]@35
  int v115; // [sp+20h] [bp-120h]@34
  int v116; // [sp+28h] [bp-118h]@33
  int v117; // [sp+30h] [bp-110h]@32
  int v118; // [sp+38h] [bp-108h]@31
  int v119; // [sp+40h] [bp-100h]@30
  int v120; // [sp+48h] [bp-F8h]@29
  int v121; // [sp+50h] [bp-F0h]@28
  int v122; // [sp+58h] [bp-E8h]@27
  int v123; // [sp+60h] [bp-E0h]@26
  int v124; // [sp+68h] [bp-D8h]@25
  int v125; // [sp+70h] [bp-D0h]@24
  int v126; // [sp+78h] [bp-C8h]@23
  int v127; // [sp+80h] [bp-C0h]@22
  int v128; // [sp+88h] [bp-B8h]@21
  int v129; // [sp+90h] [bp-B0h]@20
  int v130; // [sp+98h] [bp-A8h]@19
  int v131; // [sp+A0h] [bp-A0h]@18
  int v132; // [sp+A8h] [bp-98h]@17
  int v133; // [sp+B0h] [bp-90h]@16
  int v134; // [sp+B8h] [bp-88h]@15
  int v135; // [sp+C0h] [bp-80h]@14
  int v136; // [sp+C8h] [bp-78h]@13
  int v137; // [sp+D0h] [bp-70h]@12
  int v138; // [sp+D8h] [bp-68h]@11
  int v139; // [sp+E0h] [bp-60h]@10
  int v140; // [sp+E8h] [bp-58h]@9
  int v141; // [sp+F0h] [bp-50h]@8
  int v142; // [sp+F8h] [bp-48h]@7
  int v143; // [sp+100h] [bp-40h]@6
  int v144; // [sp+108h] [bp-38h]@5
  int v145; // [sp+110h] [bp-30h]@4
  int v146; // [sp+118h] [bp-28h]@3
  int v147; // [sp+120h] [bp-20h]@2
  int v148; // [sp+128h] [bp-18h]@1

  sub_21E94B4((void **)&v148, "minecraft:ambient_sound_interval");
  Description::registerJsonName((int **)&v148);
  v1 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
  {
    v38 = (unsigned int *)(v148 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
    }
    else
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v1);
  }
  sub_21E94B4((void **)&v147, "minecraft:burns_in_daylight");
  Description::registerJsonName((int **)&v147);
  v2 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v147 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  sub_21E94B4((void **)&v146, "minecraft:can_climb");
  Description::registerJsonName((int **)&v146);
  v3 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v146 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  sub_21E94B4((void **)&v145, "minecraft:can_fly");
  Description::registerJsonName((int **)&v145);
  v4 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v145 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  sub_21E94B4((void **)&v144, "minecraft:can_power_jump");
  Description::registerJsonName((int **)&v144);
  v5 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v144 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v143, "minecraft:collision_box");
  Description::registerJsonName((int **)&v143);
  v6 = (void *)(v143 - 12);
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v143 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v142, "minecraft:color");
  Description::registerJsonName((int **)&v142);
  v7 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v142 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v141, "minecraft:default_look_angle");
  Description::registerJsonName((int **)&v141);
  v8 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v141 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v140, "minecraft:equipment");
  Description::registerJsonName((int **)&v140);
  v9 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v140 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v139, "minecraft:fire_immune");
  Description::registerJsonName((int **)&v139);
  v10 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v139 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v138, "minecraft:floats_in_liquid");
  Description::registerJsonName((int **)&v138);
  v11 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v138 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v137, "minecraft:flying_speed");
  Description::registerJsonName((int **)&v137);
  v12 = (void *)(v137 - 12);
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v137 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v136, "minecraft:foot_size");
  Description::registerJsonName((int **)&v136);
  v13 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v136 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v135, "minecraft:friction_modifier");
  Description::registerJsonName((int **)&v135);
  v14 = (void *)(v135 - 12);
  if ( (int *)(v135 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v135 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v134, "minecraft:ground_offset");
  Description::registerJsonName((int **)&v134);
  v15 = (void *)(v134 - 12);
  if ( (int *)(v134 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v134 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v133, "minecraft:hurt_when_wet");
  Description::registerJsonName((int **)&v133);
  v16 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v133 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v132, "minecraft:input_ground_controlled");
  Description::registerJsonName((int **)&v132);
  v17 = (void *)(v132 - 12);
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v132 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v131, "minecraft:is_baby");
  Description::registerJsonName((int **)&v131);
  v18 = (void *)(v131 - 12);
  if ( (int *)(v131 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v131 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v130, "minecraft:is_charged");
  Description::registerJsonName((int **)&v130);
  v19 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v130 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v129, "minecraft:is_chested");
  Description::registerJsonName((int **)&v129);
  v20 = (void *)(v129 - 12);
  if ( (int *)(v129 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v129 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v128, "minecraft:is_dyeable");
  Description::registerJsonName((int **)&v128);
  v21 = (void *)(v128 - 12);
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v128 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v127, "minecraft:is_ignited");
  Description::registerJsonName((int **)&v127);
  v22 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v127 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v126, "minecraft:is_saddled");
  Description::registerJsonName((int **)&v126);
  v23 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v126 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v125, "minecraft:is_shaking");
  Description::registerJsonName((int **)&v125);
  v24 = (void *)(v125 - 12);
  if ( (int *)(v125 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v125 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v124, "minecraft:is_sheared");
  Description::registerJsonName((int **)&v124);
  v25 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v124 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v123, "minecraft:is_stackable");
  Description::registerJsonName((int **)&v123);
  v26 = (void *)(v123 - 12);
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v123 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v122, "minecraft:is_tamed");
  Description::registerJsonName((int **)&v122);
  v27 = (void *)(v122 - 12);
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v122 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v121, "minecraft:item_controllable");
  Description::registerJsonName((int **)&v121);
  v28 = (void *)(v121 - 12);
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v121 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v120, "minecraft:loot");
  Description::registerJsonName((int **)&v120);
  v29 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v120 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v119, "minecraft:mark_variant");
  Description::registerJsonName((int **)&v119);
  v30 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v119 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v118, "minecraft:push_through");
  Description::registerJsonName((int **)&v118);
  v31 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v118 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  sub_21E94B4((void **)&v117, "minecraft:scale");
  Description::registerJsonName((int **)&v117);
  v32 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v117 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  sub_21E94B4((void **)&v116, "minecraft:sound_volume");
  Description::registerJsonName((int **)&v116);
  v33 = (void *)(v116 - 12);
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v116 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v115, "minecraft:type_family");
  Description::registerJsonName((int **)&v115);
  v34 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v115 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  sub_21E94B4((void **)&v114, "minecraft:variant");
  Description::registerJsonName((int **)&v114);
  v35 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v114 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  sub_21E94B4((void **)&v113, "minecraft:walk_animation_speed");
  Description::registerJsonName((int **)&v113);
  v36 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v113 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  sub_21E94B4((void **)&v112, "minecraft:wants_jockey");
  Description::registerJsonName((int **)&v112);
  v37 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v112 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
}
