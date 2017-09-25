

void __fastcall WorldConversionErrorReportScreenController::_registerReportReasonDropdown(WorldConversionErrorReportScreenController *this)
{
  ScreenController *v1; // r8@1
  __int64 v2; // r6@1
  double v3; // r0@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  __int64 v10; // r10@7
  void *v11; // r0@7
  void *v12; // r0@8
  void *v13; // r0@9
  void *v14; // r0@10
  void *v15; // r0@11
  void *v16; // r0@12
  int v17; // r4@13
  int *v18; // r5@13
  void *v19; // r0@15
  void *v20; // r0@16
  int v21; // r4@17
  _DWORD *v22; // r0@17
  __int64 v23; // r1@17
  char *v24; // r4@19
  size_t v25; // r0@19
  int i; // r1@19
  int v27; // t1@20
  _DWORD *v28; // r0@21
  __int64 v29; // r1@21
  __int64 v30; // r1@21
  char *v31; // r0@25
  const void **v32; // r0@26
  const char *v33; // r4@26
  size_t v34; // r0@26
  int v35; // r1@26
  const char *v36; // r3@27
  int v37; // t1@28
  _DWORD *v38; // r0@29
  __int64 v39; // r1@29
  __int64 v40; // r1@29
  char *v41; // r0@34
  __int64 v42; // r4@35
  unsigned int v43; // r6@35
  _DWORD *v44; // r0@38
  __int64 v45; // r2@38
  __int64 v46; // r1@38
  int v47; // r11@42
  unsigned int *v48; // r2@44
  signed int v49; // r1@46
  unsigned int *v50; // r2@48
  signed int v51; // r1@50
  _BYTE *v52; // r5@60
  size_t v53; // r0@60
  int j; // r1@60
  int v55; // t1@61
  int v56; // r4@62
  int *v57; // r5@62
  void *v58; // r0@66
  int v59; // r8@67
  int *v60; // r5@67
  void *v61; // r0@69
  void *v62; // r0@71
  _DWORD *v63; // r7@73
  unsigned int *v64; // r2@74
  signed int v65; // r1@76
  int *v66; // r0@82
  unsigned __int64 *v67; // r6@86
  unsigned int *v68; // r2@88
  signed int v69; // r1@90
  unsigned __int64 *v70; // r5@96
  int v71; // r1@96
  void *v72; // r0@96
  unsigned int *v73; // r2@102
  signed int v74; // r1@104
  unsigned int *v75; // r2@106
  signed int v76; // r1@108
  unsigned int *v77; // r2@110
  signed int v78; // r1@112
  unsigned int *v79; // r2@114
  signed int v80; // r1@116
  unsigned int *v81; // r2@118
  signed int v82; // r1@120
  unsigned int *v83; // r2@122
  signed int v84; // r1@124
  unsigned int *v85; // r2@126
  signed int v86; // r1@128
  unsigned int *v87; // r2@130
  signed int v88; // r1@132
  unsigned int *v89; // r2@134
  signed int v90; // r1@136
  unsigned int *v91; // r2@138
  signed int v92; // r1@140
  unsigned int *v93; // r2@142
  signed int v94; // r1@144
  unsigned int *v95; // r2@146
  signed int v96; // r1@148
  unsigned int *v97; // r2@150
  signed int v98; // r1@152
  unsigned int *v99; // r2@154
  signed int v100; // r1@156
  unsigned int *v101; // r2@158
  signed int v102; // r1@160
  unsigned int *v103; // r2@162
  signed int v104; // r1@164
  unsigned int *v105; // r2@166
  signed int v106; // r1@168
  unsigned int *v107; // r2@238
  signed int v108; // r1@240
  __int64 v109; // [sp+0h] [bp-200h]@1
  __int64 v110; // [sp+20h] [bp-1E0h]@40
  int v111; // [sp+34h] [bp-1CCh]@48
  int v112; // [sp+38h] [bp-1C8h]@67
  int v113; // [sp+3Ch] [bp-1C4h]@67
  int *v114; // [sp+40h] [bp-1C0h]@67
  int (__fastcall *v115)(void **, int *, int); // [sp+48h] [bp-1B8h]@67
  signed int (__fastcall *v116)(int, int); // [sp+4Ch] [bp-1B4h]@67
  void *v117; // [sp+50h] [bp-1B0h]@62
  int (__fastcall *v118)(void **, void **, int); // [sp+58h] [bp-1A8h]@62
  signed int (*v119)(); // [sp+5Ch] [bp-1A4h]@62
  int v120; // [sp+60h] [bp-1A0h]@44
  int v121; // [sp+64h] [bp-19Ch]@62
  ScreenController *v122; // [sp+68h] [bp-198h]@62
  int *v123; // [sp+6Ch] [bp-194h]@62
  int (__fastcall *v124)(void **, int *, int); // [sp+74h] [bp-18Ch]@62
  signed int (__fastcall *v125)(int); // [sp+78h] [bp-188h]@62
  int v126; // [sp+7Ch] [bp-184h]@62
  void *v127; // [sp+80h] [bp-180h]@38
  __int64 v128; // [sp+88h] [bp-178h]@38
  _DWORD *v129; // [sp+90h] [bp-170h]@38
  __int64 v130; // [sp+98h] [bp-168h]@38
  int v131; // [sp+A0h] [bp-160h]@35
  void *v132; // [sp+A4h] [bp-15Ch]@29
  __int64 v133; // [sp+ACh] [bp-154h]@29
  _DWORD *v134; // [sp+B4h] [bp-14Ch]@29
  __int64 v135; // [sp+BCh] [bp-144h]@29
  char *v136; // [sp+C4h] [bp-13Ch]@26
  int v137; // [sp+C8h] [bp-138h]@29
  void *v138; // [sp+CCh] [bp-134h]@21
  __int64 v139; // [sp+D4h] [bp-12Ch]@21
  _DWORD *v140; // [sp+DCh] [bp-124h]@21
  __int64 v141; // [sp+E4h] [bp-11Ch]@21
  char *s; // [sp+ECh] [bp-114h]@19
  int v143; // [sp+F0h] [bp-110h]@21
  _DWORD *v144; // [sp+F4h] [bp-10Ch]@17
  __int64 v145; // [sp+FCh] [bp-104h]@17
  int v146; // [sp+104h] [bp-FCh]@13
  ScreenController *v147; // [sp+108h] [bp-F8h]@13
  int *v148; // [sp+10Ch] [bp-F4h]@13
  int (__fastcall *v149)(void **, int *, int); // [sp+114h] [bp-ECh]@13
  void *v150; // [sp+118h] [bp-E8h]@13
  int v151; // [sp+120h] [bp-E0h]@13
  int v152; // [sp+128h] [bp-D8h]@13
  int v153; // [sp+144h] [bp-BCh]@7
  int v154; // [sp+148h] [bp-B8h]@7
  int v155; // [sp+14Ch] [bp-B4h]@7
  int v156; // [sp+150h] [bp-B0h]@7
  int v157; // [sp+154h] [bp-ACh]@7
  int v158; // [sp+158h] [bp-A8h]@7
  char v159; // [sp+15Ch] [bp-A4h]@7
  char v160; // [sp+164h] [bp-9Ch]@1
  int v161; // [sp+168h] [bp-98h]@1
  int v162; // [sp+16Ch] [bp-94h]@1
  int v163; // [sp+170h] [bp-90h]@1
  int v164; // [sp+174h] [bp-8Ch]@1
  int v165; // [sp+178h] [bp-88h]@1
  int v166; // [sp+17Ch] [bp-84h]@1
  int v167; // [sp+180h] [bp-80h]@1
  int v168; // [sp+184h] [bp-7Ch]@1
  int v169; // [sp+188h] [bp-78h]@1
  int v170; // [sp+18Ch] [bp-74h]@1
  int v171; // [sp+190h] [bp-70h]@1
  int v172; // [sp+194h] [bp-6Ch]@1
  void *ptr; // [sp+198h] [bp-68h]@1
  int v174; // [sp+19Ch] [bp-64h]@98
  unsigned __int64 *v175; // [sp+1A0h] [bp-60h]@42
  int v176; // [sp+1A4h] [bp-5Ch]@98
  int v177; // [sp+1B0h] [bp-50h]@99
  char v178; // [sp+1D4h] [bp-2Ch]@1

  v1 = this;
  sub_21E94B4((void **)&v161, (const char *)&unk_257BC67);
  v162 = 0;
  sub_21E94B4((void **)&v163, "#mobs");
  v164 = 1;
  sub_21E94B4((void **)&v165, "#terrain");
  v166 = 2;
  sub_21E94B4((void **)&v167, "#items_missing");
  v168 = 3;
  sub_21E94B4((void **)&v169, "#item_interaction");
  v170 = 4;
  sub_21E94B4((void **)&v171, "#world_conversion_failed");
  v172 = 5;
  HIDWORD(v2) = &v178;
  LODWORD(v2) = &v160;
  v109 = v2;
  LODWORD(v3) = &ptr;
  std::_Hashtable<std::string,std::pair<std::string const,WorldConversionError>,std::allocator<std::pair<std::string const,WorldConversionError>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,WorldConversionError> const*>(
    v3,
    (int **)&ptr,
    0);
  v4 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
  {
    v73 = (unsigned int *)(v171 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
    }
    else
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v169 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v167 - 12);
  if ( (int *)(v167 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v167 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v165 - 12);
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v165 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v163 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v161 - 12);
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v161 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v153, "worldConversionErrorReport.dropdown.default");
  sub_21E94B4((void **)&v154, "worldConversionErrorReport.dropdown.mobs");
  sub_21E94B4((void **)&v155, "worldConversionErrorReport.dropdown.terrain");
  sub_21E94B4((void **)&v156, "worldConversionErrorReport.dropdown.itemsMissing");
  sub_21E94B4((void **)&v157, "worldConversionErrorReport.dropdown.itemInteraction");
  sub_21E94B4((void **)&v158, "worldConversionErrorReport.dropdown.worldConversion");
  LODWORD(v10) = operator new(0x18u);
  HIDWORD(v10) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                   (int)&v153,
                   (int)&v159,
                   v10);
  v11 = (void *)(v158 - 12);
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v158 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v157 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v156 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v155 - 12);
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v155 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v154 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v153 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v152, "report_reason_dropdown");
  sub_21E94B4((void **)&v151, "button.dropdown_exit");
  v17 = MinecraftScreenController::_getNameId(v1, (int **)&v151);
  sub_21E8AF4(&v146, &v152);
  v147 = v1;
  v149 = 0;
  v18 = (int *)operator new(8u);
  sub_21E8AF4(v18, &v146);
  v18[1] = (int)v147;
  v148 = v18;
  v149 = sub_1283338;
  v150 = &loc_1283328;
  ScreenController::registerButtonClickHandler((int)v1, v17, (int)&v148);
  if ( v149 )
    ((void (__cdecl *)(int **, int **, signed int, int (__fastcall *)(void **, int *, int), char *, char *))v149)(
      &v148,
      3,
      v149,
      &v160,
      &v178);
  v19 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v146 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v151 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = MinecraftScreenController::_getNameId(v1, (int **)&v152);
  v22 = operator new(4u);
  LODWORD(v23) = sub_12833E6;
  *v22 = v1;
  HIDWORD(v23) = sub_12833D8;
  v144 = v22;
  v145 = v23;
  ScreenController::registerToggleChangeEventHandler((int)v1, v21, (int)&v144);
  if ( (_DWORD)v145 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v145)(
      &v144,
      v145,
      v109,
      HIDWORD(v109));
  s = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&s, *(_DWORD *)(v152 - 12) + 1);
  sub_21E7408((const void **)&s, "#", 1u);
  sub_21E72F0((const void **)&s, (const void **)&v152);
  v24 = s;
  v25 = strlen(s);
  for ( i = -2128831035; v25; i = 16777619 * (i ^ v27) )
    v27 = (unsigned __int8)*v24++;
    --v25;
  v143 = i;
  v28 = operator new(4u);
  LODWORD(v29) = sub_128342C;
  *v28 = v1;
  HIDWORD(v29) = sub_128341C;
  v140 = v28;
  v141 = v29;
  v138 = operator new(1u);
  LODWORD(v30) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v30) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v139 = v30;
  ScreenController::bindBool((int)v1, &v143, (int)&v140, (int)&v138);
  if ( (_DWORD)v139 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v139)(
      &v138,
      v139,
  if ( (_DWORD)v141 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v141)(
      &v140,
      v141,
  v31 = s - 12;
  if ( (int *)(s - 12) != &dword_28898C0 )
    v101 = (unsigned int *)(s - 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 - 1, v101) );
      v102 = (*v101)--;
    if ( v102 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v136 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v136, *(_DWORD *)(v152 - 12) + 1);
  sub_21E7408((const void **)&v136, "#", 1u);
  sub_21E72F0((const void **)&v136, (const void **)&v152);
  v32 = sub_21E7408((const void **)&v136, "_visible", 8u);
  v33 = (const char *)*v32;
  *v32 = &unk_28898CC;
  v34 = strlen(v33);
  v35 = -2128831035;
  if ( v34 )
    v36 = v33;
    do
      v37 = *v36++;
      --v34;
      v35 = 16777619 * (v35 ^ v37);
    while ( v34 );
  v137 = v35;
  v38 = operator new(4u);
  LODWORD(v39) = sub_1283472;
  *v38 = v1;
  HIDWORD(v39) = sub_1283462;
  v134 = v38;
  v135 = v39;
  v132 = operator new(1u);
  LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v40) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v133 = v40;
  ScreenController::bindBool((int)v1, &v137, (int)&v134, (int)&v132);
  if ( (_DWORD)v133 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v133)(
      &v132,
      v133,
  if ( (_DWORD)v135 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v135)(
      &v134,
      v135,
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v103 = (unsigned int *)(v33 - 4);
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j__ZdlPv_9((void *)(v33 - 12));
  v41 = v136 - 12;
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v136 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  StringHash::StringHash<char [37]>(&v131, (int)"#report_reason_dropdown_toggle_label");
  LODWORD(v42) = 0;
  v43 = (HIDWORD(v10) - (signed int)v10) >> 2;
  if ( v43 )
    if ( v43 >= 0x40000000 )
      sub_21E57F4();
    LODWORD(v42) = operator new(HIDWORD(v10) - v10);
  HIDWORD(v42) = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                   v10,
                   SHIDWORD(v10),
                   v42);
  v44 = operator new(0x10u);
  HIDWORD(v45) = sub_12834A8;
  *(_QWORD *)v44 = v42;
  v44[2] = v42 + 4 * v43;
  v44[3] = v1;
  LODWORD(v45) = sub_12834C0;
  v129 = v44;
  v130 = v45;
  v127 = operator new(1u);
  LODWORD(v46) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v46) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v128 = v46;
  ScreenController::bindString((int)v1, &v131, (int)&v129, (int)&v127);
  if ( (_DWORD)v128 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v128)(
      &v127,
      v128,
  v110 = v10;
  if ( (_DWORD)v130 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v130)(
      &v129,
      v130,
  v47 = (int)v175;
  if ( v175 )
      v52 = *(_BYTE **)(v47 + 4);
      v53 = strlen(*(const char **)(v47 + 4));
      for ( j = -2128831035; v53; j = 16777619 * (j ^ v55) )
      {
        v55 = *v52++;
        --v53;
      }
      v126 = j;
      sub_21E8AF4(&v120, (int *)(v47 + 4));
      v56 = (int)v1;
      v121 = *(_DWORD *)(v47 + 8);
      v122 = v1;
      v124 = 0;
      v57 = (int *)operator new(0xCu);
      sub_21E8AF4(v57, &v120);
      v57[1] = v121;
      v57[2] = (int)v122;
      v123 = v57;
      v125 = sub_1283590;
      v124 = sub_12835A4;
      v118 = 0;
      v117 = operator new(1u);
      v119 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v118 = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBool((int)v1, &v126, (int)&v123, (int)&v117);
      if ( v118 )
        v118(&v117, &v117, 3);
      if ( v124 )
        v124((void **)&v123, (int *)&v123, 3);
      v58 = (void *)(v120 - 12);
      if ( (int *)(v120 - 12) != &dword_28898C0 )
        v48 = (unsigned int *)(v120 - 4);
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
          j_j_j_j__ZdlPv_9(v58);
      v59 = MinecraftScreenController::_getNameId(v1, (int **)(v47 + 4));
      sub_21E8AF4(&v111, (int *)(v47 + 4));
      v112 = *(_DWORD *)(v47 + 8);
      v113 = v56;
      v115 = 0;
      v60 = (int *)operator new(0xCu);
      sub_21E8AF4(v60, &v111);
      v60[1] = v112;
      v60[2] = v113;
      v114 = v60;
      v116 = sub_1283648;
      v115 = sub_1283664;
      ScreenController::registerToggleChangeEventHandler(v56, v59, (int)&v114);
      if ( v115 )
        ((void (__cdecl *)(int **, int **, signed int, int (__fastcall *)(void **, int *, int), _DWORD, _DWORD))v115)(
          &v114,
          3,
          v115,
          v109,
          HIDWORD(v109));
      v1 = (ScreenController *)v56;
      v61 = (void *)(v111 - 12);
      if ( (int *)(v111 - 12) != &dword_28898C0 )
        v50 = (unsigned int *)(v111 - 4);
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 <= 0 )
          j_j_j_j__ZdlPv_9(v61);
      v47 = *(_DWORD *)v47;
    while ( v47 );
  v62 = (void *)(v152 - 12);
  if ( (int *)(v152 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v152 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j__ZdlPv_9(v62);
  if ( (_DWORD)v110 != HIDWORD(v110) )
    v63 = (_DWORD *)v110;
      v66 = (int *)(*v63 - 12);
      if ( v66 != &dword_28898C0 )
        v64 = (unsigned int *)(*v63 - 4);
            v65 = __ldrex(v64);
          while ( __strex(v65 - 1, v64) );
          v65 = (*v64)--;
        if ( v65 <= 0 )
          j_j_j_j__ZdlPv_9(v66);
      ++v63;
    while ( v63 != (_DWORD *)HIDWORD(v110) );
  if ( (_DWORD)v110 )
    operator delete((void *)v110);
  v67 = v175;
  while ( v67 )
    v70 = v67;
    v71 = *v67 >> 32;
    v67 = (unsigned __int64 *)*v67;
    v72 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v68 = (unsigned int *)(v71 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
      else
        v69 = (*v68)--;
      if ( v69 <= 0 )
        j_j_j_j__ZdlPv_9(v72);
    operator delete(v70);
  _aeabi_memclr4(ptr, 4 * v174);
  v175 = 0;
  v176 = 0;
  if ( ptr )
    if ( &v177 != ptr )
      operator delete(ptr);
}


int __fastcall WorldConversionErrorReportScreenController::_getWorldUploadCallback(WorldConversionErrorReportScreenController *this, int a2)
{
  WorldConversionErrorReportScreenController *v2; // r5@1
  __int64 v3; // kr00_8@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  unsigned int v6; // r1@9
  _QWORD *v7; // r0@12
  unsigned int *v8; // r6@13
  unsigned int v9; // r1@15
  __int64 v10; // r1@17
  unsigned int v11; // r0@21
  unsigned int v12; // r0@28
  int result; // r0@33
  unsigned int *v14; // r2@34
  unsigned int v15; // r1@36
  int v16; // [sp+0h] [bp-18h]@1
  int v17; // [sp+4h] [bp-14h]@1

  v2 = this;
  MinecraftScreenController::_getWeakPtrToThis<WorldConversionErrorReportScreenController>((int)&v16, a2);
  v3 = *(_QWORD *)&v16;
  if ( v17 )
  {
    v4 = (unsigned int *)(v17 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
        v6 = __ldrex(v4);
      while ( __strex(v6 + 1, v4) );
  }
  *((_DWORD *)v2 + 2) = 0;
  v7 = operator new(8u);
  *v7 = v3;
  if ( HIDWORD(v3) )
    v8 = (unsigned int *)(HIDWORD(v3) + 8);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
    *(_DWORD *)v2 = v7;
    *((_DWORD *)v2 + 2) = sub_1283D10;
    *((_DWORD *)v2 + 3) = sub_1283A50;
        v11 = __ldrex(v8);
      while ( __strex(v11 - 1, v8) );
      v11 = (*v8)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
        v12 = __ldrex(v8);
      while ( __strex(v12 - 1, v8) );
      v12 = (*v8)--;
    if ( v12 == 1 )
  else
    HIDWORD(v10) = sub_1283A50;
    LODWORD(v10) = sub_1283D10;
    *((_QWORD *)v2 + 1) = v10;
  result = v17;
    v14 = (unsigned int *)(v17 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall WorldConversionErrorReportScreenController::_getUploadWorldProgressHandlerCallback(WorldConversionErrorReportScreenController *this, int a2)
{
  WorldConversionErrorReportScreenController *v2; // r5@1
  __int64 v3; // kr00_8@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  _QWORD *v6; // r0@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r2@10
  __int64 v9; // r1@12
  unsigned int v10; // r0@16
  int result; // r0@21
  unsigned int *v12; // r2@22
  unsigned int v13; // r1@24
  int v14; // [sp+0h] [bp-18h]@1
  int v15; // [sp+4h] [bp-14h]@1

  v2 = this;
  MinecraftScreenController::_getWeakPtrToThis<WorldConversionErrorReportScreenController>((int)&v14, a2);
  v3 = *(_QWORD *)&v14;
  if ( v15 )
  {
    v4 = (unsigned int *)(v15 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  *((_DWORD *)v2 + 2) = 0;
  v6 = operator new(8u);
  *v6 = v3;
  if ( HIDWORD(v3) )
    v7 = (unsigned int *)(HIDWORD(v3) + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
      ++*v7;
    *(_DWORD *)v2 = v6;
    *((_DWORD *)v2 + 2) = sub_12837D4;
    *((_DWORD *)v2 + 3) = sub_1283708;
        v10 = __ldrex(v7);
      while ( __strex(v10 - 1, v7) );
      v10 = (*v7)--;
    if ( v10 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
  else
    HIDWORD(v9) = sub_1283708;
    LODWORD(v9) = sub_12837D4;
    *((_QWORD *)v2 + 1) = v9;
  result = v15;
    v12 = (unsigned int *)(v15 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall WorldConversionErrorReportScreenController::_registerReportReasonDropdown(WorldConversionErrorReportScreenController *this)
{
  WorldConversionErrorReportScreenController::_registerReportReasonDropdown(this);
}


void __fastcall WorldConversionErrorReportScreenController::_displayFailedModalDialog(WorldConversionErrorReportScreenController *this)
{
  WorldConversionErrorReportScreenController *v1; // r5@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  unsigned int *v5; // r0@8
  unsigned int v6; // r1@10
  _QWORD *v7; // r0@13
  __int64 v8; // r1@13
  void *v9; // r0@15
  void *v10; // r0@16
  unsigned int *v11; // r1@18
  unsigned int v12; // r0@20
  unsigned int *v13; // r5@24
  unsigned int v14; // r0@26
  unsigned int *v15; // r2@32
  signed int v16; // r1@34
  unsigned int *v17; // r2@36
  signed int v18; // r1@38
  _QWORD *v19; // [sp+4h] [bp-34h]@13
  __int64 v20; // [sp+Ch] [bp-2Ch]@13
  int v21; // [sp+18h] [bp-20h]@7
  int v22; // [sp+20h] [bp-18h]@7

  v1 = this;
  v2 = *((_QWORD *)this + 53);
  if ( HIDWORD(v2) )
  {
    v3 = (unsigned int *)(HIDWORD(v2) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
  }
  sub_21E94B4((void **)&v22, "worldConversion.feedback.failed.title");
  sub_21E94B4((void **)&v21, "worldConversion.feedback.failed.msg");
    v5 = (unsigned int *)(HIDWORD(v2) + 4);
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
      ++*v5;
  v7 = operator new(8u);
  LODWORD(v8) = sub_128396C;
  *v7 = v2;
  HIDWORD(v8) = sub_1283964;
  v19 = v7;
  v20 = v8;
  MinecraftScreenController::_displayStandardModalPopup((int)v1, &v22, &v21, 2, (int)&v19);
  if ( (_DWORD)v20 )
    ((void (*)(void))v20)();
  v9 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v21 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v22 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
    v11 = (unsigned int *)(HIDWORD(v2) + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(HIDWORD(v2) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 8))(HIDWORD(v2));
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
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
}


void __fastcall WorldConversionErrorReportScreenController::~WorldConversionErrorReportScreenController(WorldConversionErrorReportScreenController *this)
{
  WorldConversionErrorReportScreenController *v1; // r0@1

  v1 = WorldConversionErrorReportScreenController::~WorldConversionErrorReportScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall WorldConversionErrorReportScreenController::addStaticScreenVars(WorldConversionErrorReportScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  WorldConversionErrorReportScreenController *v3; // r5@1
  int v4; // r6@1
  int v6; // [sp+0h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$hide_report_reason_dropdown");
  Json::Value::Value((Json::Value *)&v6, *((_BYTE *)v3 + 456));
  Json::Value::operator=(v4, (const Json::Value *)&v6);
  Json::Value::~Value((Json::Value *)&v6);
  return ScreenController::addStaticScreenVars(v3, v2);
}


void __fastcall WorldConversionErrorReportScreenController::~WorldConversionErrorReportScreenController(WorldConversionErrorReportScreenController *this)
{
  WorldConversionErrorReportScreenController::~WorldConversionErrorReportScreenController(this);
}


void __fastcall WorldConversionErrorReportScreenController::_displaySuccessModalDialog(int a1, int *a2)
{
  WorldConversionErrorReportScreenController::_displaySuccessModalDialog(a1, a2);
}


void __fastcall WorldConversionErrorReportScreenController::_registerEventHandlers(WorldConversionErrorReportScreenController *this)
{
  WorldConversionErrorReportScreenController::_registerEventHandlers(this);
}


void __fastcall WorldConversionErrorReportScreenController::_displaySuccessModalDialog(int a1, int *a2)
{
  int v2; // r11@1
  int *v3; // r6@1
  __int64 v4; // kr00_8@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  void *v7; // r0@7
  char *v8; // r0@8
  void *v9; // r0@8
  int v10; // r4@9
  char *v11; // r6@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  int *v14; // r0@19
  void *v15; // r0@24
  void *v16; // r0@25
  unsigned int *v17; // r0@27
  unsigned int v18; // r1@29
  _QWORD *v19; // r0@32
  __int64 v20; // r1@32
  void *v21; // r0@34
  void *v22; // r0@35
  unsigned int *v23; // r1@37
  unsigned int v24; // r0@39
  unsigned int *v25; // r4@43
  unsigned int v26; // r0@45
  unsigned int *v27; // r2@51
  signed int v28; // r1@53
  unsigned int *v29; // r2@55
  signed int v30; // r1@57
  unsigned int *v31; // r2@59
  signed int v32; // r1@61
  unsigned int *v33; // r2@63
  signed int v34; // r1@65
  unsigned int *v35; // r2@67
  signed int v36; // r1@69
  unsigned int *v37; // r2@71
  signed int v38; // r1@73
  _QWORD *v39; // [sp+8h] [bp-68h]@32
  __int64 v40; // [sp+10h] [bp-60h]@32
  int v41; // [sp+1Ch] [bp-54h]@26
  int v42; // [sp+20h] [bp-50h]@8
  char *v43; // [sp+24h] [bp-4Ch]@8
  char *v44; // [sp+28h] [bp-48h]@8
  char *v45; // [sp+2Ch] [bp-44h]@8
  int v46; // [sp+34h] [bp-3Ch]@8
  int v47; // [sp+38h] [bp-38h]@8
  int v48; // [sp+40h] [bp-30h]@7
  int v49; // [sp+44h] [bp-2Ch]@7

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 424);
  if ( HIDWORD(v4) )
  {
    v5 = (unsigned int *)(HIDWORD(v4) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  sub_21E94B4((void **)&v48, "worldConversionErrorReport.sending.completeMessage.part1");
  I18n::get(&v49, (int **)&v48);
  v7 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v48 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E7408((const void **)&v49, "\n", 1u);
  sub_21E94B4((void **)&v46, "worldConversionErrorReport.sending.completeMessage.part2");
  sub_21E8AF4(&v42, v3);
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v8 = (char *)operator new(4u);
  v43 = v8;
  v45 = v8 + 4;
  v44 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v42,
                  (int)&v43,
                  (int)v8);
  I18n::get(&v47, &v46, (unsigned __int64 *)&v43);
  sub_21E72F0((const void **)&v49, (const void **)&v47);
  v9 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v47 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (int)v44;
  v11 = v43;
  if ( v43 != v44 )
    do
      v14 = (int *)(*(_DWORD *)v11 - 12);
      if ( v14 != &dword_28898C0 )
      {
        v12 = (unsigned int *)(*(_DWORD *)v11 - 4);
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
          j_j_j_j__ZdlPv_9(v14);
      }
      v11 += 4;
    while ( v11 != (char *)v10 );
    v11 = v43;
  if ( v11 )
    operator delete(v11);
  v15 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v42 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v46 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v41, "worldConversionErrorReport.sending.complete");
    v17 = (unsigned int *)(HIDWORD(v4) + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
      ++*v17;
  v19 = operator new(8u);
  LODWORD(v20) = sub_1283880;
  *v19 = v4;
  HIDWORD(v20) = sub_1283878;
  v39 = v19;
  v40 = v20;
  MinecraftScreenController::_displayStandardModalPopup(v2, &v41, &v49, 2, (int)&v39);
  if ( (_DWORD)v40 )
    ((void (*)(void))v40)();
  v21 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v41 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v49 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
    v23 = (unsigned int *)(HIDWORD(v4) + 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      v25 = (unsigned int *)(HIDWORD(v4) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
      if ( &pthread_create )
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      else
        v26 = (*v25)--;
      if ( v26 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
}


void __fastcall WorldConversionErrorReportScreenController::_registerEventHandlers(WorldConversionErrorReportScreenController *this)
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
  int v10; // r5@7
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7
  void *v13; // r0@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  _DWORD *v20; // [sp+4h] [bp-5Ch]@7
  __int64 v21; // [sp+Ch] [bp-54h]@7
  int v22; // [sp+18h] [bp-48h]@7
  _DWORD *v23; // [sp+1Ch] [bp-44h]@4
  __int64 v24; // [sp+24h] [bp-3Ch]@4
  int v25; // [sp+30h] [bp-30h]@4
  _DWORD *v26; // [sp+34h] [bp-2Ch]@1
  __int64 v27; // [sp+3Ch] [bp-24h]@1
  int v28; // [sp+48h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v28, "button.report");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v28);
  v3 = operator new(4u);
  LODWORD(v4) = sub_128296C;
  *v3 = v1;
  HIDWORD(v4) = sub_1281A7C;
  v26 = v3;
  v27 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  v5 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v28 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v25, "button.view_terms");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v25);
  v7 = operator new(4u);
  LODWORD(v8) = sub_1282EC4;
  *v7 = v1;
  HIDWORD(v8) = sub_1282DF4;
  v23 = v7;
  v24 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v23);
  if ( (_DWORD)v24 )
    ((void (*)(void))v24)();
  v9 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v25 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v22, "button.back");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v22);
  v11 = operator new(4u);
  LODWORD(v12) = sub_1282F0C;
  *v11 = v1;
  HIDWORD(v12) = sub_1282EFA;
  v20 = v11;
  v21 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v20);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  v13 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v22 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall WorldConversionErrorReportScreenController::_displayFailedModalDialog(WorldConversionErrorReportScreenController *this)
{
  WorldConversionErrorReportScreenController::_displayFailedModalDialog(this);
}


WorldConversionErrorReportScreenController *__fastcall WorldConversionErrorReportScreenController::~WorldConversionErrorReportScreenController(WorldConversionErrorReportScreenController *this)
{
  WorldConversionErrorReportScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r5@15
  int v8; // r1@16
  void *v9; // r0@16
  unsigned int *v11; // r2@19
  signed int v12; // r1@21

  v1 = this;
  *(_DWORD *)this = &off_26E3FF8;
  v2 = *((_DWORD *)this + 110);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  v7 = *((_DWORD *)v1 + 108);
  if ( v7 )
    v8 = *(_DWORD *)(v7 + 96);
    v9 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v8 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    LocalWorldInfo::~LocalWorldInfo((LocalWorldInfo *)v7);
    operator delete((void *)v7);
  *((_DWORD *)v1 + 108) = 0;
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


int __fastcall WorldConversionErrorReportScreenController::WorldConversionErrorReportScreenController(int a1, int a2, int a3, signed int a4)
{
  int v4; // r9@1
  int v5; // r4@1
  signed int v6; // r5@1
  int v7; // r8@1
  int v8; // r0@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  int v11; // r6@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  unsigned int *v14; // r7@14
  unsigned int v15; // r0@16
  void *v16; // r7@21
  char v17; // r0@21
  int v18; // r1@21
  unsigned int *v19; // r1@22
  unsigned int v20; // r2@24
  int v22; // [sp+0h] [bp-28h]@1
  int v23; // [sp+4h] [bp-24h]@1

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v22 = *(_DWORD *)a2;
  v7 = a3;
  v8 = *(_DWORD *)(a2 + 4);
  v23 = v8;
  if ( v8 )
  {
    v9 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
    }
    else
      ++*v9;
  }
  MainMenuScreenController::MainMenuScreenController(v5, (int)&v22);
  v11 = v23;
  if ( v23 )
    v12 = (unsigned int *)(v23 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  *(_DWORD *)v5 = &off_26E3FF8;
  v16 = operator new(0x68u);
  LocalWorldInfo::LocalWorldInfo((int)v16, v7);
  sub_21E8AF4((int *)v16 + 24, (int *)(v7 + 96));
  *(_DWORD *)(v5 + 432) = v16;
  v17 = v6;
  *(_DWORD *)(v5 + 436) = *(_DWORD *)v4;
  v18 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v5 + 440) = v18;
  if ( v18 )
    v19 = (unsigned int *)(v18 + 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 + 1, v19) );
      ++*v19;
  if ( v6 )
    v6 = 5;
  *(_DWORD *)(v5 + 444) = v6;
  *(_BYTE *)(v5 + 448) = 0;
  *(_DWORD *)(v5 + 452) = 0;
  *(_BYTE *)(v5 + 456) = v17;
  WorldConversionErrorReportScreenController::_registerEventHandlers((WorldConversionErrorReportScreenController *)v5);
  WorldConversionErrorReportScreenController::_registerReportReasonDropdown((WorldConversionErrorReportScreenController *)v5);
  PlayScreenModel::initLegacyWorldImporter(*(PlayScreenModel **)(v5 + 436));
  return v5;
}
