

void __fastcall XblReportUserScreenController::_registerReportReasonDropdown(XblReportUserScreenController *this)
{
  XblReportUserScreenController::_registerReportReasonDropdown(this);
}


void __fastcall XblReportUserScreenController::_registerEventHandlers(XblReportUserScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  int v6; // r5@4
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  _DWORD *v14; // [sp+4h] [bp-44h]@4
  __int64 v15; // [sp+Ch] [bp-3Ch]@4
  int v16; // [sp+18h] [bp-30h]@4
  _DWORD *v17; // [sp+1Ch] [bp-2Ch]@1
  __int64 v18; // [sp+24h] [bp-24h]@1
  int v19; // [sp+30h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v19, "button.report");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v19);
  v3 = operator new(4u);
  LODWORD(v4) = sub_12AF554;
  *v3 = v1;
  HIDWORD(v4) = sub_12AF08C;
  v17 = v3;
  v18 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v17);
  if ( (_DWORD)v18 )
    ((void (*)(void))v18)();
  v5 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v19 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v16, "report_reason_text_box");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v16);
  v7 = operator new(4u);
  LODWORD(v8) = sub_12AFF48;
  *v7 = v1;
  HIDWORD(v8) = sub_12AFC04;
  v14 = v7;
  v15 = v8;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v6, (int)&v14);
  if ( (_DWORD)v15 )
    ((void (*)(void))v15)();
  v9 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


void __fastcall XblReportUserScreenController::_registerBindings(XblReportUserScreenController *this)
{
  XblReportUserScreenController::_registerBindings(this);
}


void __fastcall XblReportUserScreenController::_registerReportReasonDropdown(XblReportUserScreenController *this)
{
  XblReportUserScreenController *v1; // r8@1
  __int64 v2; // r6@1
  double v3; // r0@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  _DWORD *v12; // r11@8
  void *v13; // r0@8
  void *v14; // r0@9
  void *v15; // r0@10
  void *v16; // r0@11
  void *v17; // r0@12
  void *v18; // r0@13
  void *v19; // r0@14
  void *v20; // r4@15
  void *v21; // r6@15
  unsigned int *v22; // r2@17
  signed int v23; // r1@19
  int *v24; // r0@25
  void *v25; // r0@30
  void *v26; // r0@31
  int v27; // r4@32
  int *v28; // r5@32
  void *v29; // r0@34
  void *v30; // r0@35
  int v31; // r4@36
  _DWORD *v32; // r0@36
  __int64 v33; // r1@36
  char *v34; // r4@38
  size_t v35; // r0@38
  int i; // r1@38
  int v37; // t1@39
  _DWORD *v38; // r0@40
  __int64 v39; // r1@40
  __int64 v40; // r1@40
  char *v41; // r0@44
  const void **v42; // r0@45
  const char *v43; // r4@45
  size_t v44; // r0@45
  int v45; // r1@45
  const char *v46; // r3@46
  int v47; // t1@47
  _DWORD *v48; // r0@48
  __int64 v49; // r1@48
  __int64 v50; // r1@48
  char *v51; // r0@53
  __int64 v52; // r4@54
  unsigned int v53; // r6@54
  _DWORD *v54; // r0@57
  __int64 v55; // r2@57
  __int64 v56; // r1@57
  int v57; // r11@61
  unsigned int *v58; // r2@63
  signed int v59; // r1@65
  unsigned int *v60; // r2@67
  signed int v61; // r1@69
  _BYTE *v62; // r5@79
  size_t v63; // r0@79
  int j; // r1@79
  int v65; // t1@80
  int v66; // r4@81
  int *v67; // r5@81
  void *v68; // r0@85
  int v69; // r8@86
  int *v70; // r5@86
  void *v71; // r0@88
  void *v72; // r0@90
  _DWORD *v73; // r7@92
  unsigned int *v74; // r2@93
  signed int v75; // r1@95
  int *v76; // r0@101
  unsigned __int64 *v77; // r6@105
  unsigned int *v78; // r2@107
  signed int v79; // r1@109
  unsigned __int64 *v80; // r5@115
  int v81; // r1@115
  void *v82; // r0@115
  unsigned int *v83; // r2@121
  signed int v84; // r1@123
  unsigned int *v85; // r2@125
  signed int v86; // r1@127
  unsigned int *v87; // r2@129
  signed int v88; // r1@131
  unsigned int *v89; // r2@133
  signed int v90; // r1@135
  unsigned int *v91; // r2@137
  signed int v92; // r1@139
  unsigned int *v93; // r2@141
  signed int v94; // r1@143
  unsigned int *v95; // r2@145
  signed int v96; // r1@147
  unsigned int *v97; // r2@149
  signed int v98; // r1@151
  unsigned int *v99; // r2@153
  signed int v100; // r1@155
  unsigned int *v101; // r2@157
  signed int v102; // r1@159
  unsigned int *v103; // r2@161
  signed int v104; // r1@163
  unsigned int *v105; // r2@165
  signed int v106; // r1@167
  unsigned int *v107; // r2@169
  signed int v108; // r1@171
  unsigned int *v109; // r2@173
  signed int v110; // r1@175
  unsigned int *v111; // r2@177
  signed int v112; // r1@179
  unsigned int *v113; // r2@181
  signed int v114; // r1@183
  unsigned int *v115; // r2@185
  signed int v116; // r1@187
  unsigned int *v117; // r2@189
  signed int v118; // r1@191
  unsigned int *v119; // r2@193
  signed int v120; // r1@195
  unsigned int *v121; // r2@197
  signed int v122; // r1@199
  unsigned int *v123; // r2@201
  signed int v124; // r1@203
  unsigned int *v125; // r2@289
  signed int v126; // r1@291
  __int64 v127; // [sp+0h] [bp-228h]@1
  _DWORD *ptr; // [sp+20h] [bp-208h]@59
  int v129; // [sp+30h] [bp-1F8h]@8
  int v130; // [sp+34h] [bp-1F4h]@67
  int v131; // [sp+38h] [bp-1F0h]@86
  int v132; // [sp+3Ch] [bp-1ECh]@86
  int *v133; // [sp+40h] [bp-1E8h]@86
  int (__fastcall *v134)(void **, int *, int); // [sp+48h] [bp-1E0h]@86
  signed int (__fastcall *v135)(int, int); // [sp+4Ch] [bp-1DCh]@86
  void *v136; // [sp+50h] [bp-1D8h]@81
  int (__fastcall *v137)(void **, void **, int); // [sp+58h] [bp-1D0h]@81
  signed int (*v138)(); // [sp+5Ch] [bp-1CCh]@81
  int v139; // [sp+60h] [bp-1C8h]@63
  int v140; // [sp+64h] [bp-1C4h]@81
  XblReportUserScreenController *v141; // [sp+68h] [bp-1C0h]@81
  int *v142; // [sp+6Ch] [bp-1BCh]@81
  int (__fastcall *v143)(void **, int *, int); // [sp+74h] [bp-1B4h]@81
  signed int (__fastcall *v144)(int); // [sp+78h] [bp-1B0h]@81
  int v145; // [sp+7Ch] [bp-1ACh]@81
  void *v146; // [sp+80h] [bp-1A8h]@57
  __int64 v147; // [sp+88h] [bp-1A0h]@57
  _DWORD *v148; // [sp+90h] [bp-198h]@57
  __int64 v149; // [sp+98h] [bp-190h]@57
  int v150; // [sp+A0h] [bp-188h]@54
  void *v151; // [sp+A4h] [bp-184h]@48
  __int64 v152; // [sp+ACh] [bp-17Ch]@48
  _DWORD *v153; // [sp+B4h] [bp-174h]@48
  __int64 v154; // [sp+BCh] [bp-16Ch]@48
  char *v155; // [sp+C4h] [bp-164h]@45
  int v156; // [sp+C8h] [bp-160h]@48
  void *v157; // [sp+CCh] [bp-15Ch]@40
  __int64 v158; // [sp+D4h] [bp-154h]@40
  _DWORD *v159; // [sp+DCh] [bp-14Ch]@40
  __int64 v160; // [sp+E4h] [bp-144h]@40
  char *s; // [sp+ECh] [bp-13Ch]@38
  int v162; // [sp+F0h] [bp-138h]@40
  _DWORD *v163; // [sp+F4h] [bp-134h]@36
  __int64 v164; // [sp+FCh] [bp-12Ch]@36
  int v165; // [sp+104h] [bp-124h]@32
  XblReportUserScreenController *v166; // [sp+108h] [bp-120h]@32
  int *v167; // [sp+10Ch] [bp-11Ch]@32
  int (__fastcall *v168)(void **, int *, int); // [sp+114h] [bp-114h]@32
  void *v169; // [sp+118h] [bp-110h]@32
  int v170; // [sp+120h] [bp-108h]@32
  int v171; // [sp+128h] [bp-100h]@32
  int v172; // [sp+144h] [bp-E4h]@8
  void *v173; // [sp+148h] [bp-E0h]@8
  void *v174; // [sp+14Ch] [bp-DCh]@8
  char *v175; // [sp+150h] [bp-D8h]@8
  int v176; // [sp+158h] [bp-D0h]@8
  int v177; // [sp+15Ch] [bp-CCh]@8
  int v178; // [sp+160h] [bp-C8h]@8
  int v179; // [sp+164h] [bp-C4h]@8
  int v180; // [sp+168h] [bp-C0h]@8
  int v181; // [sp+16Ch] [bp-BCh]@8
  int v182; // [sp+170h] [bp-B8h]@8
  int v183; // [sp+174h] [bp-B4h]@8
  char v184; // [sp+178h] [bp-B0h]@8
  char v185; // [sp+180h] [bp-A8h]@1
  int v186; // [sp+184h] [bp-A4h]@1
  int v187; // [sp+188h] [bp-A0h]@1
  int v188; // [sp+18Ch] [bp-9Ch]@1
  int v189; // [sp+190h] [bp-98h]@1
  int v190; // [sp+194h] [bp-94h]@1
  int v191; // [sp+198h] [bp-90h]@1
  int v192; // [sp+19Ch] [bp-8Ch]@1
  int v193; // [sp+1A0h] [bp-88h]@1
  int v194; // [sp+1A4h] [bp-84h]@1
  int v195; // [sp+1A8h] [bp-80h]@1
  int v196; // [sp+1ACh] [bp-7Ch]@1
  int v197; // [sp+1B0h] [bp-78h]@1
  int v198; // [sp+1B4h] [bp-74h]@1
  int v199; // [sp+1B8h] [bp-70h]@1
  void *v200; // [sp+1BCh] [bp-6Ch]@1
  int v201; // [sp+1C0h] [bp-68h]@117
  unsigned __int64 *v202; // [sp+1C4h] [bp-64h]@61
  int v203; // [sp+1C8h] [bp-60h]@117
  int v204; // [sp+1D4h] [bp-54h]@118
  char v205; // [sp+1FCh] [bp-2Ch]@1

  v1 = this;
  sub_21E94B4((void **)&v186, (const char *)&unk_257BC67);
  v187 = 0;
  sub_21E94B4((void **)&v188, "#bio_location");
  v189 = 1;
  sub_21E94B4((void **)&v190, "#cheating");
  v191 = 2;
  sub_21E94B4((void **)&v192, "#name_or_gametag");
  v193 = 3;
  sub_21E94B4((void **)&v194, "#quitting_early");
  v195 = 4;
  sub_21E94B4((void **)&v196, "#unsporting_behavior");
  v197 = 5;
  sub_21E94B4((void **)&v198, "#voice_communication");
  v199 = 6;
  HIDWORD(v2) = &v205;
  LODWORD(v2) = &v185;
  v127 = v2;
  LODWORD(v3) = &v200;
  std::_Hashtable<std::string,std::pair<std::string const,Social::ReportReason>,std::allocator<std::pair<std::string const,Social::ReportReason>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,Social::ReportReason> const*>(
    v3,
    (int **)&v200,
    0);
  v4 = (void *)(v198 - 12);
  if ( (int *)(v198 - 12) != &dword_28898C0 )
  {
    v83 = (unsigned int *)(v198 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
    }
    else
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v196 - 12);
  if ( (int *)(v196 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v196 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v194 - 12);
  if ( (int *)(v194 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v194 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v192 - 12);
  if ( (int *)(v192 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v192 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v190 - 12);
  if ( (int *)(v190 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v190 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v188 - 12);
  if ( (int *)(v188 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v188 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v186 - 12);
  if ( (int *)(v186 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v186 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v176, "xbox.report.whyReport");
  sub_21E8AF4(&v172, (int *)v1 + 106);
  v173 = 0;
  v174 = 0;
  v175 = 0;
  v11 = operator new(4u);
  v173 = v11;
  v175 = (char *)v11 + 4;
  v174 = (void *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                   (int)&v172,
                   (int)&v173,
                   (int)v11);
  I18n::get(&v177, &v176, (unsigned __int64 *)&v173);
  sub_21E94B4((void **)&v178, "xbox.report.bioOrLocation");
  sub_21E94B4((void **)&v179, "xbox.report.cheating");
  sub_21E94B4((void **)&v180, "xbox.report.nameOrGamertag");
  sub_21E94B4((void **)&v181, "xbox.report.quittingEarly");
  sub_21E94B4((void **)&v182, "xbox.report.unsportingBehavior");
  sub_21E94B4((void **)&v183, "xbox.report.voiceCommunication");
  v12 = operator new(0x1Cu);
  v129 = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
           (int)&v177,
           (int)&v184,
           (int)v12);
  v13 = (void *)(v183 - 12);
  if ( (int *)(v183 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v183 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v182 - 12);
  if ( (int *)(v182 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v182 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v181 - 12);
  if ( (int *)(v181 - 12) != &dword_28898C0 )
    v101 = (unsigned int *)(v181 - 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v180 - 12);
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v180 - 4);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v179 - 12);
  if ( (int *)(v179 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v179 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v178 - 12);
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v178 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v177 - 12);
  if ( (int *)(v177 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v177 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v21 = v174;
  v20 = v173;
  if ( v173 != v174 )
    do
      v24 = (int *)(*(_DWORD *)v20 - 12);
      if ( v24 != &dword_28898C0 )
      {
        v22 = (unsigned int *)(*(_DWORD *)v20 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        }
        else
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      }
      v20 = (char *)v20 + 4;
    while ( v20 != v21 );
    v20 = v173;
  if ( v20 )
    operator delete(v20);
  v25 = (void *)(v172 - 12);
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v111 = (unsigned int *)(v172 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v176 - 12);
  if ( (int *)(v176 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v176 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v171, "report_reason_dropdown");
  sub_21E94B4((void **)&v170, "button.dropdown_exit");
  v27 = MinecraftScreenController::_getNameId(v1, (int **)&v170);
  sub_21E8AF4(&v165, &v171);
  v166 = v1;
  v168 = 0;
  v28 = (int *)operator new(8u);
  sub_21E8AF4(v28, &v165);
  v28[1] = (int)v166;
  v167 = v28;
  v168 = sub_12B0400;
  v169 = &loc_12B03F0;
  ScreenController::registerButtonClickHandler((int)v1, v27, (int)&v167);
  if ( v168 )
    ((void (__cdecl *)(int **, int **, signed int, int (__fastcall *)(void **, int *, int), _DWORD, _DWORD))v168)(
      &v167,
      3,
      v168,
      v127,
      HIDWORD(v127));
  v29 = (void *)(v165 - 12);
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v165 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v170 - 12);
  if ( (int *)(v170 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v170 - 4);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = MinecraftScreenController::_getNameId(v1, (int **)&v171);
  v32 = operator new(4u);
  LODWORD(v33) = sub_12B04AE;
  *v32 = v1;
  HIDWORD(v33) = sub_12B04A0;
  v163 = v32;
  v164 = v33;
  ScreenController::registerToggleChangeEventHandler((int)v1, v31, (int)&v163);
  if ( (_DWORD)v164 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v164)(
      &v163,
      v164,
  s = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&s, *(_DWORD *)(v171 - 12) + 1);
  sub_21E7408((const void **)&s, "#", 1u);
  sub_21E72F0((const void **)&s, (const void **)&v171);
  v34 = s;
  v35 = strlen(s);
  for ( i = -2128831035; v35; i = 16777619 * (i ^ v37) )
    v37 = (unsigned __int8)*v34++;
    --v35;
  v162 = i;
  v38 = operator new(4u);
  LODWORD(v39) = sub_12B04F4;
  *v38 = v1;
  HIDWORD(v39) = sub_12B04E4;
  v159 = v38;
  v160 = v39;
  v157 = operator new(1u);
  LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v40) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v158 = v40;
  ScreenController::bindBool((int)v1, &v162, (int)&v159, (int)&v157);
  if ( (_DWORD)v158 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v158)(
      &v157,
      v158,
  if ( (_DWORD)v160 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v160)(
      &v159,
      v160,
  v41 = s - 12;
  if ( (int *)(s - 12) != &dword_28898C0 )
    v119 = (unsigned int *)(s - 4);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  v155 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v155, *(_DWORD *)(v171 - 12) + 1);
  sub_21E7408((const void **)&v155, "#", 1u);
  sub_21E72F0((const void **)&v155, (const void **)&v171);
  v42 = sub_21E7408((const void **)&v155, "_visible", 8u);
  v43 = (const char *)*v42;
  *v42 = &unk_28898CC;
  v44 = strlen(v43);
  v45 = -2128831035;
  if ( v44 )
    v46 = v43;
      v47 = *v46++;
      --v44;
      v45 = 16777619 * (v45 ^ v47);
    while ( v44 );
  v156 = v45;
  v48 = operator new(4u);
  LODWORD(v49) = sub_12B053A;
  *v48 = v1;
  HIDWORD(v49) = sub_12B052A;
  v153 = v48;
  v154 = v49;
  v151 = operator new(1u);
  LODWORD(v50) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v50) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v152 = v50;
  ScreenController::bindBool((int)v1, &v156, (int)&v153, (int)&v151);
  if ( (_DWORD)v152 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v152)(
      &v151,
      v152,
  if ( (_DWORD)v154 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v154)(
      &v153,
      v154,
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v121 = (unsigned int *)(v43 - 4);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 <= 0 )
      j_j_j_j__ZdlPv_9((void *)(v43 - 12));
  v51 = v155 - 12;
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v123 = (unsigned int *)(v155 - 4);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 <= 0 )
      j_j_j_j__ZdlPv_9(v51);
  StringHash::StringHash<char [37]>(&v150, (int)"#report_reason_dropdown_toggle_label");
  LODWORD(v52) = 0;
  v53 = (v129 - (signed int)v12) >> 2;
  if ( v53 )
    if ( v53 >= 0x40000000 )
      sub_21E57F4();
    LODWORD(v52) = operator new(v129 - (_DWORD)v12);
  HIDWORD(v52) = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                   (int)v12,
                   v129,
                   v52);
  v54 = operator new(0x10u);
  HIDWORD(v55) = sub_12B0570;
  *(_QWORD *)v54 = v52;
  v54[2] = v52 + 4 * v53;
  v54[3] = v1;
  LODWORD(v55) = sub_12B0588;
  v148 = v54;
  v149 = v55;
  v146 = operator new(1u);
  LODWORD(v56) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v56) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v147 = v56;
  ScreenController::bindString((int)v1, &v150, (int)&v148, (int)&v146);
  if ( (_DWORD)v147 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v147)(
      &v146,
      v147,
  ptr = v12;
  if ( (_DWORD)v149 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v149)(
      &v148,
      v149,
  v57 = (int)v202;
  if ( v202 )
      v62 = *(_BYTE **)(v57 + 4);
      v63 = strlen(*(const char **)(v57 + 4));
      for ( j = -2128831035; v63; j = 16777619 * (j ^ v65) )
        v65 = *v62++;
        --v63;
      v145 = j;
      sub_21E8AF4(&v139, (int *)(v57 + 4));
      v66 = (int)v1;
      v140 = *(_DWORD *)(v57 + 8);
      v141 = v1;
      v143 = 0;
      v67 = (int *)operator new(0xCu);
      sub_21E8AF4(v67, &v139);
      v67[1] = v140;
      v67[2] = (int)v141;
      v142 = v67;
      v144 = sub_12B0658;
      v143 = sub_12B066C;
      v137 = 0;
      v136 = operator new(1u);
      v138 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v137 = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBool((int)v1, &v145, (int)&v142, (int)&v136);
      if ( v137 )
        v137(&v136, &v136, 3);
      if ( v143 )
        v143((void **)&v142, (int *)&v142, 3);
      v68 = (void *)(v139 - 12);
      if ( (int *)(v139 - 12) != &dword_28898C0 )
        v58 = (unsigned int *)(v139 - 4);
            v59 = __ldrex(v58);
          while ( __strex(v59 - 1, v58) );
          v59 = (*v58)--;
        if ( v59 <= 0 )
          j_j_j_j__ZdlPv_9(v68);
      v69 = MinecraftScreenController::_getNameId(v1, (int **)(v57 + 4));
      sub_21E8AF4(&v130, (int *)(v57 + 4));
      v131 = *(_DWORD *)(v57 + 8);
      v132 = v66;
      v134 = 0;
      v70 = (int *)operator new(0xCu);
      sub_21E8AF4(v70, &v130);
      v70[1] = v131;
      v70[2] = v132;
      v133 = v70;
      v135 = sub_12B0710;
      v134 = sub_12B0730;
      ScreenController::registerToggleChangeEventHandler(v66, v69, (int)&v133);
      if ( v134 )
        ((void (__cdecl *)(int **, int **, signed int, int (__fastcall *)(void **, int *, int), _DWORD, _DWORD))v134)(
          &v133,
          3,
          v134,
          v127,
          HIDWORD(v127));
      v1 = (XblReportUserScreenController *)v66;
      v71 = (void *)(v130 - 12);
      if ( (int *)(v130 - 12) != &dword_28898C0 )
        v60 = (unsigned int *)(v130 - 4);
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
          v61 = (*v60)--;
        if ( v61 <= 0 )
          j_j_j_j__ZdlPv_9(v71);
      v57 = *(_DWORD *)v57;
    while ( v57 );
  v72 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v125 = (unsigned int *)(v171 - 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 <= 0 )
      j_j_j_j__ZdlPv_9(v72);
  if ( ptr != (_DWORD *)v129 )
    v73 = ptr;
      v76 = (int *)(*v73 - 12);
      if ( v76 != &dword_28898C0 )
        v74 = (unsigned int *)(*v73 - 4);
            v75 = __ldrex(v74);
          while ( __strex(v75 - 1, v74) );
          v75 = (*v74)--;
        if ( v75 <= 0 )
          j_j_j_j__ZdlPv_9(v76);
      ++v73;
    while ( v73 != (_DWORD *)v129 );
  if ( ptr )
    operator delete(ptr);
  v77 = v202;
  while ( v77 )
    v80 = v77;
    v81 = *v77 >> 32;
    v77 = (unsigned __int64 *)*v77;
    v82 = (void *)(v81 - 12);
    if ( (int *)(v81 - 12) != &dword_28898C0 )
      v78 = (unsigned int *)(v81 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
      else
        v79 = (*v78)--;
      if ( v79 <= 0 )
        j_j_j_j__ZdlPv_9(v82);
    operator delete(v80);
  _aeabi_memclr4(v200, 4 * v201);
  v202 = 0;
  v203 = 0;
  if ( v200 )
    if ( &v204 != v200 )
      operator delete(v200);
}


void __fastcall XblReportUserScreenController::_registerEventHandlers(XblReportUserScreenController *this)
{
  XblReportUserScreenController::_registerEventHandlers(this);
}


void __fastcall XblReportUserScreenController::~XblReportUserScreenController(XblReportUserScreenController *this)
{
  XblReportUserScreenController::~XblReportUserScreenController(this);
}


int __fastcall XblReportUserScreenController::XblReportUserScreenController(int a1, int a2, int *a3, int *a4)
{
  int v4; // r4@1
  int *v5; // r8@1
  int v6; // r0@1
  int *v7; // r7@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r5@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r6@14
  unsigned int v14; // r0@16
  int v16; // [sp+4h] [bp-2Ch]@1
  int v17; // [sp+8h] [bp-28h]@1

  v4 = a1;
  v16 = *(_DWORD *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v17 = v6;
  if ( v6 )
  {
    v8 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  MinecraftScreenController::MinecraftScreenController(v4, (MinecraftScreenModel **)&v16);
  v10 = v17;
  if ( v17 )
    v11 = (unsigned int *)(v17 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  *(_DWORD *)v4 = &off_26E45C8;
  sub_21E8AF4((int *)(v4 + 424), v7);
  sub_21E8AF4((int *)(v4 + 428), v5);
  *(_DWORD *)(v4 + 432) = &unk_28898CC;
  *(_BYTE *)(v4 + 442) = 0;
  *(_WORD *)(v4 + 440) = 0;
  *(_DWORD *)(v4 + 436) = 0;
  XblReportUserScreenController::_registerEventHandlers((XblReportUserScreenController *)v4);
  XblReportUserScreenController::_registerBindings((XblReportUserScreenController *)v4);
  return v4;
}


XblReportUserScreenController *__fastcall XblReportUserScreenController::~XblReportUserScreenController(XblReportUserScreenController *this)
{
  XblReportUserScreenController *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_26E45C8;
  v2 = *((_DWORD *)this + 108);
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
  v4 = *((_DWORD *)v1 + 107);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v4 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 106);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v6 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  MinecraftScreenController::~MinecraftScreenController(v1);
  return v1;
}


int __fastcall XblReportUserScreenController::addStaticScreenVars(XblReportUserScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r9@1
  XblReportUserScreenController *v3; // r10@1
  int v4; // r6@1
  char *v5; // r0@1
  void *v6; // r0@1
  __int64 v7; // r6@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  int *v10; // r0@12
  void *v11; // r0@17
  void *v12; // r0@18
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  unsigned int *v16; // r2@24
  signed int v17; // r1@26
  unsigned int *v18; // r2@28
  signed int v19; // r1@30
  int v20; // [sp+4h] [bp-54h]@1
  char *v21; // [sp+8h] [bp-50h]@1
  char *v22; // [sp+Ch] [bp-4Ch]@1
  char *v23; // [sp+10h] [bp-48h]@1
  int v24; // [sp+18h] [bp-40h]@1
  int v25; // [sp+1Ch] [bp-3Ch]@1
  char v26; // [sp+20h] [bp-38h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$report_gamertag");
  sub_21E94B4((void **)&v24, "xbox.report.gamertag");
  sub_21E8AF4(&v20, (int *)v3 + 106);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v5 = (char *)operator new(4u);
  v21 = v5;
  v23 = v5 + 4;
  v22 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v20,
                  (int)&v21,
                  (int)v5);
  I18n::get(&v25, &v24, (unsigned __int64 *)&v21);
  Json::Value::Value((int)&v26, (const char **)&v25);
  Json::Value::operator=(v4, (const Json::Value *)&v26);
  Json::Value::~Value((Json::Value *)&v26);
  v6 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = *(_QWORD *)&v21;
  if ( v21 != v22 )
    do
      v10 = (int *)(*(_DWORD *)v7 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*(_DWORD *)v7 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      }
      LODWORD(v7) = v7 + 4;
    while ( (_DWORD)v7 != HIDWORD(v7) );
    LODWORD(v7) = v21;
  if ( (_DWORD)v7 )
    operator delete((void *)v7);
  v11 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v20 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v24 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return ScreenController::addStaticScreenVars(v3, v2);
}


void __fastcall XblReportUserScreenController::_registerBindings(XblReportUserScreenController *this)
{
  XblReportUserScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  _DWORD *v4; // r0@5
  __int64 v5; // r1@5
  __int64 v6; // r1@5
  void *v7; // [sp+0h] [bp-50h]@5
  __int64 v8; // [sp+8h] [bp-48h]@5
  _DWORD *v9; // [sp+10h] [bp-40h]@5
  __int64 v10; // [sp+18h] [bp-38h]@5
  int v11; // [sp+20h] [bp-30h]@5
  void *v12; // [sp+24h] [bp-2Ch]@1
  __int64 v13; // [sp+2Ch] [bp-24h]@1
  _DWORD *v14; // [sp+34h] [bp-1Ch]@1
  void (*v15)(void); // [sp+3Ch] [bp-14h]@1
  int *(__fastcall *v16)(int *, int); // [sp+40h] [bp-10h]@1
  char v17; // [sp+44h] [bp-Ch]@1

  v1 = this;
  XblReportUserScreenController::_registerReportReasonDropdown(this);
  StringHash::StringHash<char [25]>(&v17, (int)"#additional_report_notes");
  v2 = operator new(4u);
  *v2 = v1;
  v14 = v2;
  v15 = (void (*)(void))sub_12AFF8E;
  v16 = sub_12AFF7E;
  v12 = operator new(1u);
  LODWORD(v3) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v3) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v13 = v3;
  ScreenController::bindString((int)v1, (int *)&v17, (int)&v14, (int)&v12);
  if ( (_DWORD)v13 )
    ((void (*)(void))v13)();
  if ( v15 )
    v15();
  v11 = -1253190918;
  v4 = operator new(4u);
  LODWORD(v5) = sub_12AFFD4;
  *v4 = v1;
  HIDWORD(v5) = sub_12AFFC4;
  v9 = v4;
  v10 = v5;
  v7 = operator new(1u);
  LODWORD(v6) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v6) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v8 = v6;
  ScreenController::bindBool((int)v1, &v11, (int)&v9, (int)&v7);
  if ( (_DWORD)v8 )
    ((void (*)(void))v8)();
  if ( (_DWORD)v10 )
    ((void (*)(void))v10)();
}


void __fastcall XblReportUserScreenController::~XblReportUserScreenController(XblReportUserScreenController *this)
{
  XblReportUserScreenController *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_26E45C8;
  v2 = *((_DWORD *)this + 108);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 107);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v4 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 106);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v6 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  MinecraftScreenController::~MinecraftScreenController(v1);
  operator delete((void *)v1);
}
