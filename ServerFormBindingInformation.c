

Json::Value *__fastcall ServerFormBindingInformation::createBindingData(ServerFormBindingInformation *this, const Json::Value *a2)
{
  Json::Value *v2; // r7@1
  ServerFormBindingInformation *v3; // r8@1
  Json::Value *result; // r0@2
  int v5; // r5@4
  const Json::Value *v6; // r0@4
  void *v7; // r5@4
  signed int v8; // r6@4
  void *v9; // r5@5
  signed int v10; // r6@5
  void *v11; // r6@6
  Json::ValueIteratorBase *v12; // r6@6
  void **v13; // r11@6
  int *v14; // r4@6
  const Json::Value *v15; // r5@6
  int v16; // r10@8
  int v17; // r6@8
  void *v18; // r7@8
  void *v19; // r0@8
  void *v20; // r0@9
  int v21; // r11@10
  unsigned int v22; // r1@11
  unsigned int *v23; // r0@11
  unsigned int v24; // r2@14
  unsigned int v25; // r3@15
  int v26; // r4@18
  unsigned int *v27; // r8@18
  unsigned int *v28; // r2@20
  signed int v29; // r1@22
  unsigned int *v30; // r2@24
  signed int v31; // r1@26
  unsigned int v32; // r1@38
  unsigned int v33; // r1@42
  unsigned int v34; // r0@48
  int v35; // r6@53
  int v36; // r6@53
  void *v37; // r7@53
  unsigned int v38; // r0@55
  _DWORD *v39; // r0@58
  unsigned int v40; // r4@59
  unsigned int v41; // r1@60
  unsigned int v42; // r0@67
  int v43; // r0@72
  unsigned int v44; // r0@74
  void *v45; // r5@80
  signed int v46; // r6@80
  int v47; // r2@81
  unsigned int *v48; // r0@82
  unsigned int v49; // r1@82
  int v50; // r11@82
  unsigned int v51; // r2@85
  unsigned int v52; // r3@86
  ServerFormBindingInformation *v53; // r2@87
  unsigned int *v54; // r10@87
  int v55; // r8@87
  int v56; // r9@87
  unsigned int v57; // r1@89
  unsigned int v58; // r1@94
  unsigned int v59; // r0@100
  int v60; // r6@105
  int v61; // r5@105
  void *v62; // r6@105
  unsigned int v63; // r0@107
  _DWORD *v64; // r0@110
  unsigned int v65; // r1@112
  __int64 v66; // r1@115
  unsigned int v67; // r0@119
  int v68; // r5@124
  void *v69; // r6@124
  unsigned int v70; // r0@126
  _DWORD *v71; // r0@129
  int v72; // r4@130
  unsigned int v73; // r1@131
  __int64 v74; // r1@134
  unsigned int v75; // r0@138
  void *v76; // r6@143
  Json::ValueIteratorBase *v77; // r5@143
  const Json::ValueIteratorBase *v78; // r7@143
  const Json::Value *v79; // r11@144
  void *v80; // r6@144
  signed int v81; // r6@144
  int v82; // r6@145
  char *v83; // r5@145
  void *v84; // r6@146
  signed int v85; // r6@146
  int v86; // r6@147
  const Json::Value *v87; // r0@147
  Json::Value *v88; // r0@147
  int v89; // r6@148
  Json::Value *v90; // r0@149
  Json::Value *v92; // r0@149
  int v98; // r6@150
  const Json::Value *v99; // r0@150
  void *v100; // r6@151
  signed int v101; // r6@151
  int v102; // r6@152
  void *v103; // r6@153
  signed int v104; // r6@153
  int v105; // r6@154
  Json::Value *v106; // r6@154
  int v107; // r5@155
  void *v108; // r6@156
  signed int v109; // r6@156
  int v110; // r6@157
  int v111; // r6@158
  Json::Value *v112; // r0@159
  const Json::Value *v113; // r6@161
  int v114; // r0@162
  void *v115; // r6@163
  signed int v116; // r6@163
  int v117; // r6@164
  const Json::Value *v118; // r0@164
  int v119; // r0@165
  int v120; // r7@167
  void *v121; // r6@167
  Json::ValueIteratorBase *v122; // r5@167
  int v123; // r6@168
  int v124; // r5@168
  void *v125; // r0@168
  void *v126; // r0@169
  int v127; // r6@170
  bool v128; // r1@170
  int v129; // r0@172
  unsigned int *v130; // r2@173
  signed int v131; // r1@175
  unsigned int *v132; // r2@177
  signed int v133; // r1@179
  unsigned int v134; // ST40_4@190
  int v135; // r0@190
  int v136; // r6@190
  int v137; // r0@192
  unsigned int v138; // r3@194
  int v139; // r0@196
  unsigned int v140; // [sp+40h] [bp-290h]@167
  Json::Value *v141; // [sp+44h] [bp-28Ch]@6
  Json::Value *v142; // [sp+44h] [bp-28Ch]@82
  int v143; // [sp+50h] [bp-280h]@6
  int v144; // [sp+50h] [bp-280h]@143
  int v145; // [sp+54h] [bp-27Ch]@18
  unsigned int v146; // [sp+54h] [bp-27Ch]@143
  const char *v147[4]; // [sp+58h] [bp-278h]@163
  char v148; // [sp+68h] [bp-268h]@158
  char v149; // [sp+78h] [bp-258h]@157
  const char *v150[4]; // [sp+88h] [bp-248h]@156
  char v151; // [sp+98h] [bp-238h]@190
  char v152; // [sp+A8h] [bp-228h]@172
  int v153; // [sp+C0h] [bp-210h]@168
  int v154; // [sp+C4h] [bp-20Ch]@168
  char v155; // [sp+C8h] [bp-208h]@168
  char v156; // [sp+D8h] [bp-1F8h]@168
  char v157; // [sp+E8h] [bp-1E8h]@167
  char v158; // [sp+F0h] [bp-1E0h]@167
  char v159; // [sp+F8h] [bp-1D8h]@167
  char v160; // [sp+108h] [bp-1C8h]@154
  const char *v161[4]; // [sp+118h] [bp-1B8h]@153
  char v162; // [sp+128h] [bp-1A8h]@152
  const char *v163[4]; // [sp+138h] [bp-198h]@151
  char v164; // [sp+148h] [bp-188h]@148
  const char *v165[4]; // [sp+158h] [bp-178h]@146
  char v166; // [sp+168h] [bp-168h]@145
  const char *v167[4]; // [sp+178h] [bp-158h]@144
  char v168; // [sp+188h] [bp-148h]@144
  char v169; // [sp+198h] [bp-138h]@143
  char v170; // [sp+1A0h] [bp-130h]@143
  char v171; // [sp+1A8h] [bp-128h]@143
  _DWORD *v172; // [sp+1B8h] [bp-118h]@134
  void (*v173)(void); // [sp+1C0h] [bp-110h]@129
  _DWORD *v174; // [sp+1C8h] [bp-108h]@115
  void (*v175)(void); // [sp+1D0h] [bp-100h]@110
  char v176; // [sp+1D8h] [bp-F8h]@105
  const char *v177[4]; // [sp+1E8h] [bp-E8h]@80
  _DWORD *v178; // [sp+1F8h] [bp-D8h]@63
  void (*v179)(void); // [sp+200h] [bp-D0h]@58
  int (__fastcall *v180)(int, const char **); // [sp+204h] [bp-CCh]@63
  char v181; // [sp+208h] [bp-C8h]@53
  int v182; // [sp+220h] [bp-B0h]@6
  int v183; // [sp+224h] [bp-ACh]@6
  char v184; // [sp+228h] [bp-A8h]@6
  char v185; // [sp+238h] [bp-98h]@8
  char v186; // [sp+248h] [bp-88h]@6
  char v187; // [sp+250h] [bp-80h]@6
  char v188; // [sp+258h] [bp-78h]@6
  const char *v189[4]; // [sp+268h] [bp-68h]@5
  const char *v190[4]; // [sp+278h] [bp-58h]@4
  char v191; // [sp+288h] [bp-48h]@3
  char v192; // [sp+298h] [bp-38h]@2

  v2 = a2;
  v3 = this;
  if ( Json::Value::isNull(a2) == 1 )
  {
    Json::Value::Value(&v192, 0);
    Json::Value::operator=((int)v3 + 8, (const Json::Value *)&v192);
    result = Json::Value::~Value((Json::Value *)&v192);
    *((_BYTE *)v3 + 41) = 0;
    return result;
  }
  Json::Value::Value(&v191, 0);
  Json::Value::operator=((int)v3 + 8, (const Json::Value *)&v191);
  Json::Value::~Value((Json::Value *)&v191);
  *((_BYTE *)v3 + 40) = 1;
  if ( Json::Value::isObject(v2) != 1 )
    goto LABEL_197;
  v5 = Json::Value::operator[]((ServerFormBindingInformation *)((char *)v3 + 8), "title");
  v6 = (const Json::Value *)Json::Value::operator[]((int)v2, "title");
  Json::Value::operator=(v5, v6);
  v7 = Json::Value::operator[]((int)v2, "type");
  Json::Value::Value((Json::Value *)v190, "modal");
  v8 = Json::Value::operator==((int)v7, v190);
  Json::Value::~Value((Json::Value *)v190);
  if ( v8 )
  v9 = Json::Value::operator[]((int)v2, "type");
  Json::Value::Value((Json::Value *)v189, "form");
  v10 = Json::Value::operator==((int)v9, v189);
  Json::Value::~Value((Json::Value *)v189);
  if ( v10 == 1 )
    Json::Value::Value(&v188, 0);
    v11 = Json::Value::operator[]((int)v2, "buttons");
    Json::Value::begin((Json::Value *)&v187, (int)v11);
    Json::Value::end((Json::Value *)&v186, (int)v11);
    v12 = (Json::ValueIteratorBase *)&v187;
    v13 = (void **)&v182;
    v141 = (ServerFormBindingInformation *)((char *)v3 + 8);
    v14 = &v183;
    v15 = (const Json::Value *)&v184;
    v143 = 0;
    while ( Json::ValueIteratorBase::isEqual(v12, (const Json::ValueIteratorBase *)&v186) != 1 )
    {
      v16 = Json::ValueIteratorBase::deref(v12);
      Json::Value::Value(&v185, 0);
      v17 = Json::Value::operator[]((Json::Value *)&v185, "text");
      v18 = Json::Value::operator[](v16, "text");
      sub_21E94B4(v13, (const char *)&unk_257BC67);
      Json::Value::asString(v14, (int)v18, (int *)v13);
      Json::Value::Value((int)v15, (const char **)v14);
      Json::Value::operator=(v17, v15);
      Json::Value::~Value(v15);
      v19 = (void *)(v183 - 12);
      if ( (int *)(v183 - 12) != &dword_28898C0 )
      {
        v28 = (unsigned int *)(v183 - 4);
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
          j_j_j_j__ZdlPv_9(v19);
      }
      v20 = (void *)(v182 - 12);
      if ( (int *)(v182 - 12) != &dword_28898C0 )
        v30 = (unsigned int *)(v182 - 4);
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
          v31 = (*v30)--;
        if ( v31 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v21 = *((_DWORD *)v3 + 1);
      if ( !v21 )
        std::__throw_bad_weak_ptr();
      v22 = *(_DWORD *)(v21 + 4);
      v23 = (unsigned int *)(v21 + 4);
      do
        while ( 1 )
          if ( !v22 )
            std::__throw_bad_weak_ptr();
          v24 = __ldrex(v23);
          if ( v24 == v22 )
            break;
          __clrex();
          v22 = v24;
        v25 = __strex(v22 + 1, v23);
        v22 = v24;
      while ( v25 );
      __dmb();
      v145 = (int)v3;
      v26 = *(_DWORD *)v3;
      v27 = (unsigned int *)(v21 + 8);
      if ( &pthread_create )
        __dmb();
        do
          v32 = __ldrex(v27);
        while ( __strex(v32 + 1, v27) );
      else
        ++*v27;
          v33 = __ldrex(v23);
        while ( __strex(v33 - 1, v23) );
        v33 = (*v23)--;
      if ( v33 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
            v34 = __ldrex(v27);
          while ( __strex(v34 - 1, v27) );
          v34 = (*v27)--;
        if ( v34 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
      v35 = Json::Value::operator[]((Json::Value *)&v185, "image_fs");
      Json::Value::Value((Json::Value *)&v181, "InUserPackage");
      Json::Value::operator=(v35, (const Json::Value *)&v181);
      Json::Value::~Value((Json::Value *)&v181);
      v36 = Json::Value::operator[]((Json::Value *)&v185, "image");
      v37 = Json::Value::operator[](v16, "image");
          v38 = __ldrex(v27);
        while ( __strex(v38 + 1, v27) );
      v179 = 0;
      v39 = operator new(0x10u);
      *v39 = v26;
      v39[1] = v21;
        v40 = v143;
          v41 = __ldrex(v27);
        while ( __strex(v41 + 1, v27) );
      v39[2] = v40;
      v39[3] = &v185;
      v178 = v39;
      v180 = sub_1238160;
      v179 = (void (*)(void))sub_1238320;
      sub_12363C4(v145, v36, (int)v37, (int)&v178);
      if ( v179 )
        v179();
          v42 = __ldrex(v27);
        while ( __strex(v42 - 1, v27) );
        v42 = (*v27)--;
      if ( v42 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
      v43 = Json::Value::operator[]((int)&v188, v40);
      Json::Value::operator=(v43, (const Json::Value *)&v185);
        v12 = (Json::ValueIteratorBase *)&v187;
          v44 = __ldrex(v27);
        while ( __strex(v44 - 1, v27) );
        v44 = *v27;
        --*v27;
      v3 = (ServerFormBindingInformation *)v145;
      v143 = v40 + 1;
      if ( v44 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v21 + 12))(v21);
      Json::Value::~Value((Json::Value *)&v185);
      Json::ValueIteratorBase::increment(v12);
      v14 = &v183;
      v13 = (void **)&v182;
      v15 = (const Json::Value *)&v184;
    }
    v139 = Json::Value::operator[](v141, "buttons");
    Json::Value::operator=(v139, (const Json::Value *)&v188);
    Json::Value::~Value((Json::Value *)&v188);
  v45 = Json::Value::operator[]((int)v2, "type");
  Json::Value::Value((Json::Value *)v177, "custom_form");
  v46 = Json::Value::operator==((int)v45, v177);
  Json::Value::~Value((Json::Value *)v177);
  if ( v46 != 1 )
  v47 = *((_DWORD *)v3 + 1);
  if ( !v47 )
    std::__throw_bad_weak_ptr();
  v142 = (ServerFormBindingInformation *)((char *)v3 + 8);
  v48 = (unsigned int *)(v47 + 4);
  v49 = *(_DWORD *)(v47 + 4);
  v50 = *((_DWORD *)v3 + 1);
  do
    while ( 1 )
      if ( !v49 )
      v51 = __ldrex(v48);
      if ( v51 == v49 )
        break;
      __clrex();
      v49 = v51;
    v52 = __strex(v49 + 1, v48);
    v49 = v51;
  while ( v52 );
  v53 = v3;
  __dmb();
  v54 = (unsigned int *)(v50 + 8);
  v55 = *(_DWORD *)v3;
  v56 = (int)v53;
  if ( &pthread_create )
    __dmb();
    do
      v57 = __ldrex(v54);
    while ( __strex(v57 + 1, v54) );
  else
    ++*v54;
      v58 = __ldrex(v48);
    while ( __strex(v58 - 1, v48) );
    v58 = (*v48)--;
  if ( v58 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 8))(v50);
    if ( &pthread_create )
        v59 = __ldrex(v54);
      while ( __strex(v59 - 1, v54) );
    else
      v59 = (*v54)--;
    if ( v59 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 12))(v50);
  v60 = Json::Value::operator[](v142, "icon_fs");
  Json::Value::Value((Json::Value *)&v176, "InUserPackage");
  Json::Value::operator=(v60, (const Json::Value *)&v176);
  Json::Value::~Value((Json::Value *)&v176);
  v61 = Json::Value::operator[](v142, "icon");
  v62 = Json::Value::operator[]((int)v2, "icon");
      v63 = __ldrex(v54);
    while ( __strex(v63 + 1, v54) );
  v175 = 0;
  v64 = operator new(8u);
  *v64 = v55;
  v64[1] = v50;
      v65 = __ldrex(v54);
    while ( __strex(v65 + 1, v54) );
  LODWORD(v66) = sub_1238570;
  v174 = v64;
  HIDWORD(v66) = sub_12383D0;
  *(_QWORD *)&v175 = v66;
  sub_12363C4(v56, v61, (int)v62, (int)&v174);
  if ( v175 )
    v175();
      v67 = __ldrex(v54);
    while ( __strex(v67 - 1, v54) );
    v67 = (*v54)--;
  if ( v67 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 12))(v50);
  v68 = Json::Value::operator[](v142, "icon_outline");
  v69 = Json::Value::operator[]((int)v2, "icon");
      v70 = __ldrex(v54);
    while ( __strex(v70 + 1, v54) );
  v173 = 0;
  v71 = operator new(8u);
  *v71 = v55;
  v71[1] = v50;
    v72 = v56;
      v73 = __ldrex(v54);
    while ( __strex(v73 + 1, v54) );
  LODWORD(v74) = sub_12387B4;
  v172 = v71;
  HIDWORD(v74) = sub_1238614;
  *(_QWORD *)&v173 = v74;
  sub_12363C4(v72, v68, (int)v69, (int)&v172);
  if ( v173 )
    v173();
      v75 = __ldrex(v54);
    while ( __strex(v75 - 1, v54) );
    v75 = (*v54)--;
  if ( v75 == 1 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v50 + 12))(v50);
  Json::Value::Value(&v171, 0);
  v144 = v50;
  v76 = Json::Value::operator[]((int)v2, "content");
  Json::Value::begin((Json::Value *)&v170, (int)v76);
  Json::Value::end((Json::Value *)&v169, (int)v76);
  v77 = (Json::ValueIteratorBase *)&v170;
  v146 = 0;
  v78 = (const Json::ValueIteratorBase *)&v169;
  while ( Json::ValueIteratorBase::isEqual(v77, v78) != 1 )
    v79 = (const Json::Value *)Json::ValueIteratorBase::deref(v77);
    Json::Value::Value((Json::Value *)&v168, v79);
    v80 = Json::Value::operator[]((int)v79, "type");
    Json::Value::Value((Json::Value *)v167, "toggle");
    v81 = Json::Value::operator==((int)v80, v167);
    Json::Value::~Value((Json::Value *)v167);
    if ( v81 == 1 )
      v82 = Json::Value::operator[]((Json::Value *)&v168, "value");
      Json::Value::Value((Json::Value *)&v166, 0);
      v83 = &v166;
      Json::Value::operator=(v82, (const Json::Value *)&v166);
      goto LABEL_159;
    v84 = Json::Value::operator[]((int)v79, "type");
    Json::Value::Value((Json::Value *)v165, "slider");
    v85 = Json::Value::operator==((int)v84, v165);
    Json::Value::~Value((Json::Value *)v165);
    if ( v85 != 1 )
      v100 = Json::Value::operator[]((int)v79, "type");
      Json::Value::Value((Json::Value *)v163, "step_slider");
      v101 = Json::Value::operator==((int)v100, v163);
      Json::Value::~Value((Json::Value *)v163);
      if ( v101 == 1 )
        v102 = Json::Value::operator[]((Json::Value *)&v168, "value");
        Json::Value::Value((Json::Value *)&v162, 0);
        v83 = &v162;
        Json::Value::operator=(v102, (const Json::Value *)&v162);
        goto LABEL_159;
      v103 = Json::Value::operator[]((int)v79, "type");
      Json::Value::Value((Json::Value *)v161, "dropdown");
      v104 = Json::Value::operator==((int)v103, v161);
      Json::Value::~Value((Json::Value *)v161);
      if ( v104 == 1 )
        v105 = Json::Value::operator[]((Json::Value *)&v168, "enabled");
        Json::Value::Value((Json::Value *)&v160, 0);
        Json::Value::operator=(v105, (const Json::Value *)&v160);
        Json::Value::~Value((Json::Value *)&v160);
        v106 = (Json::Value *)Json::Value::operator[]((int)v79, "default");
        if ( Json::Value::isInt(v106) == 1 )
          v107 = Json::Value::asInt(v106, 0);
          v107 = 0;
        Json::Value::Value(&v159, 0);
        v120 = v107;
        v121 = Json::Value::operator[]((int)v79, "options");
        v122 = (Json::ValueIteratorBase *)&v158;
        Json::Value::begin((Json::Value *)&v158, (int)v121);
        Json::Value::end((Json::Value *)&v157, (int)v121);
        v140 = 0;
        while ( Json::ValueIteratorBase::isEqual(v122, (const Json::ValueIteratorBase *)&v157) != 1 )
          v123 = Json::ValueIteratorBase::deref(v122);
          Json::Value::Value(&v156, 0);
          v124 = Json::Value::operator[]((Json::Value *)&v156, "text");
          sub_21E94B4((void **)&v153, (const char *)&unk_257BC67);
          Json::Value::asString(&v154, v123, &v153);
          Json::Value::Value((int)&v155, (const char **)&v154);
          Json::Value::operator=(v124, (const Json::Value *)&v155);
          Json::Value::~Value((Json::Value *)&v155);
          v125 = (void *)(v154 - 12);
          if ( (int *)(v154 - 12) != &dword_28898C0 )
          {
            v130 = (unsigned int *)(v154 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v131 = __ldrex(v130);
              while ( __strex(v131 - 1, v130) );
            }
            else
              v131 = (*v130)--;
            if ( v131 <= 0 )
              j_j_j_j__ZdlPv_9(v125);
          }
          v126 = (void *)(v153 - 12);
          if ( (int *)(v153 - 12) != &dword_28898C0 )
            v132 = (unsigned int *)(v153 - 4);
                v133 = __ldrex(v132);
              while ( __strex(v133 - 1, v132) );
              v133 = (*v132)--;
            if ( v133 <= 0 )
              j_j_j_j__ZdlPv_9(v126);
          v127 = Json::Value::operator[]((Json::Value *)&v156, "value");
          v128 = 0;
          if ( v140 == v120 )
            v128 = 1;
          Json::Value::Value((Json::Value *)&v152, v128);
          Json::Value::operator=(v127, (const Json::Value *)&v152);
          Json::Value::~Value((Json::Value *)&v152);
          v129 = Json::Value::operator[]((int)&v159, v140);
          Json::Value::operator=(v129, (const Json::Value *)&v156);
          Json::Value::~Value((Json::Value *)&v156);
          ++v140;
          v122 = (Json::ValueIteratorBase *)&v158;
          Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v158);
        v134 = v120;
        v135 = Json::Value::operator[]((Json::Value *)&v168, "options");
        v78 = (const Json::ValueIteratorBase *)&v169;
        Json::Value::operator=(v135, (const Json::Value *)&v159);
        v136 = Json::Value::operator[]((Json::Value *)&v168, "value");
        Json::Value::Value((Json::Value *)&v151, v134);
        Json::Value::operator=(v136, (const Json::Value *)&v151);
        Json::Value::~Value((Json::Value *)&v151);
        v112 = (Json::Value *)&v159;
        v108 = Json::Value::operator[]((int)v79, "type");
        Json::Value::Value((Json::Value *)v150, "input");
        v109 = Json::Value::operator==((int)v108, v150);
        Json::Value::~Value((Json::Value *)v150);
        if ( v109 == 1 )
          v110 = Json::Value::operator[]((Json::Value *)&v168, "value");
          Json::Value::Value((Json::Value *)&v149, (const char *)&unk_257BC67);
          v83 = &v149;
          Json::Value::operator=(v110, (const Json::Value *)&v149);
          v111 = Json::Value::operator[]((Json::Value *)&v168, "value");
          Json::Value::Value(&v148, 0);
          v83 = &v148;
          Json::Value::operator=(v111, (const Json::Value *)&v148);
LABEL_159:
        v112 = (Json::Value *)v83;
      Json::Value::~Value(v112);
      goto LABEL_161;
    v86 = Json::Value::operator[]((Json::Value *)&v168, "value");
    v87 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v168, "min");
    Json::Value::operator=(v86, v87);
    v88 = (Json::Value *)Json::Value::operator[]((int)v79, "step");
    if ( Json::Value::isNull(v88) == 1 )
      v89 = Json::Value::operator[]((Json::Value *)&v168, "step");
      Json::Value::Value((Json::Value *)&v164, 1);
      Json::Value::operator=(v89, (const Json::Value *)&v164);
      Json::Value::~Value((Json::Value *)&v164);
    v90 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v168, "min");
    _R6 = Json::Value::asFloat(v90, 0.0);
    v92 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v168, "max");
    _R0 = Json::Value::asFloat(v92, 0.0);
    __asm
      VMOV            S0, R6
      VMOV            S2, R0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v98 = Json::Value::operator[]((Json::Value *)&v168, "max");
      v99 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v168, "min");
      Json::Value::operator=(v98, v99);
LABEL_161:
    v113 = (const Json::Value *)Json::Value::operator[]((int)v79, "default");
    if ( !Json::Value::isNull(v113) )
      v114 = Json::Value::operator[]((Json::Value *)&v168, "value");
      Json::Value::operator=(v114, v113);
    v115 = Json::Value::operator[]((int)v79, "type");
    Json::Value::Value((Json::Value *)v147, "slider");
    v116 = Json::Value::operator==((int)v115, v147);
    Json::Value::~Value((Json::Value *)v147);
    if ( v116 == 1 )
      v117 = Json::Value::operator[]((Json::Value *)&v168, "lastValue");
      v118 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v168, "value");
      Json::Value::operator=(v117, v118);
    v119 = Json::Value::operator[]((int)&v171, v146);
    Json::Value::operator=(v119, (const Json::Value *)&v168);
    Json::Value::~Value((Json::Value *)&v168);
    ++v146;
    v77 = (Json::ValueIteratorBase *)&v170;
    Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v170);
  v137 = Json::Value::operator[](v142, "contentItems");
  Json::Value::operator=(v137, (const Json::Value *)&v171);
  Json::Value::~Value((Json::Value *)&v171);
    v3 = (ServerFormBindingInformation *)v72;
      v138 = __ldrex(v54);
    while ( __strex(v138 - 1, v54) );
    v138 = *v54;
    --*v54;
  if ( v138 == 1 )
    (*(void (**)(void))(*(_DWORD *)v144 + 12))();
LABEL_197:
  result = (Json::Value *)256;
  *((_WORD *)v3 + 20) = 256;
  return result;
}
