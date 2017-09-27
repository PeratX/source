

ThirdPartyServer *__fastcall ThirdPartyServerRepository::_processSearchResponse(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, void *a15, int a16, int a17, char a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, char a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, char a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, void *a51, int a52, int a53, int a54, int a55, char a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  return ThirdPartyServerRepository::_processSearchResponse(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46,
           a47,
           a48,
           a49,
           a50,
           a51,
           a52,
           a53,
           a54,
           a55,
           a56,
           a57,
           a58,
           a59,
           a60,
           a61,
           a62,
           a63);
}


int __fastcall ThirdPartyServerRepository::findThirdPartyInfo(int a1, int a2, int **a3)
{
  int v3; // r4@1
  int v4; // r0@1
  void *v5; // r1@1

  v3 = a1;
  v4 = std::_Hashtable<std::string,std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>,std::allocator<std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a2 + 28),
         a3);
  v5 = &unk_27D6E84;
  if ( v4 )
    v5 = (void *)(v4 + 8);
  return ThirdPartyInfo::ThirdPartyInfo(v3, (int)v5);
}


ThirdPartyServer *__fastcall ThirdPartyServerRepository::_processSearchResponse(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, void *a15, int a16, int a17, char a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, char a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, char a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, void *a51, int a52, int a53, int a54, int a55, char a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  int v63; // r11@1
  int v64; // r8@1
  ThirdPartyServer *result; // r0@1
  _DWORD *v66; // r4@2
  int v67; // r9@2
  unsigned int *v68; // r2@4
  signed int v69; // r1@6
  _DWORD *v70; // r7@12
  ThirdPartyServer *v71; // r0@12
  ThirdPartyServer *v72; // r6@12
  int v73; // r1@17
  void *v74; // r0@17
  _DWORD *v75; // r4@19
  int v76; // r10@21
  int *v77; // r4@22
  char *v78; // r5@22
  Json::Value *v79; // r7@25
  char *v80; // r0@28
  char *v81; // r0@29
  char v82; // r0@31
  Json::Value *v83; // r6@33
  Json::Value *v84; // r6@39
  char *v85; // r0@42
  char *v86; // r0@43
  _BYTE *v87; // r0@44
  void *v88; // r0@49
  Json::Value *v89; // r6@52
  char *v90; // r0@55
  char *v91; // r0@56
  __int16 v92; // r0@58
  Json::Value *v93; // r7@60
  unsigned int *v94; // r2@64
  signed int v95; // r1@66
  unsigned int *v96; // r2@68
  signed int v97; // r1@70
  unsigned int *v98; // r2@72
  signed int v99; // r1@74
  unsigned int *v100; // r2@76
  signed int v101; // r1@78
  bool v102; // zf@81
  unsigned int v103; // r7@84
  unsigned int v104; // r11@84
  __int64 v105; // r0@84
  int v106; // r4@84
  int v107; // r8@85
  _DWORD *v108; // r10@85
  int v109; // r6@85
  size_t v110; // r2@87
  int v111; // r5@89
  int v112; // r10@91
  int v113; // r7@91
  ThirdPartyServer *v114; // r0@91
  ThirdPartyServer *v115; // r4@91
  __int64 v116; // kr28_8@96
  ThirdPartyServer *v117; // r0@96
  ContentCatalogService *v118; // r7@102
  __int64 v119; // r0@102
  char *v120; // r2@102
  unsigned int v121; // r4@102
  int v122; // r6@105
  _DWORD *v123; // r0@105
  int v124; // r1@105
  int v125; // r1@105
  int v126; // r4@107
  int v127; // r7@107
  void (__fastcall *v128)(int, int, signed int); // r3@108
  char *v129; // r0@114
  int v130; // r4@115
  int v131; // r7@115
  void (__fastcall *v132)(int, int, signed int); // r3@116
  void *v133; // r0@122
  void *v134; // r0@123
  bool v135; // zf@126
  __int64 v136; // r0@131
  unsigned int *v137; // r2@133
  signed int v138; // r1@135
  unsigned int *v139; // r2@137
  signed int v140; // r1@139
  unsigned int *v141; // r2@157
  signed int v142; // r1@159
  unsigned int *v143; // r2@169
  signed int v144; // r1@171
  unsigned int *v145; // r2@173
  signed int v146; // r1@175
  unsigned int *v147; // r2@177
  signed int v148; // r1@179
  int *v149; // r4@199
  int *v150; // r5@199
  int v151; // r6@200
  int j; // r7@200
  int v153; // r7@203
  int v154; // r6@203
  int v155; // r5@204
  int (__fastcall *v156)(int, int, signed int); // r3@205
  __int64 v157; // kr48_8@208
  int v158; // r5@209
  int (__fastcall *v159)(int, int, signed int); // r3@210
  unsigned __int64 *v160; // [sp+10h] [bp-1B0h]@22
  ThirdPartyServer *v161; // [sp+28h] [bp-198h]@21
  unsigned __int64 v162; // [sp+2Ch] [bp-194h]@84
  int *v163; // [sp+34h] [bp-18Ch]@23
  unsigned __int64 *i; // [sp+38h] [bp-188h]@19
  char *v165; // [sp+58h] [bp-168h]@102
  char *v166; // [sp+5Ch] [bp-164h]@102
  char *v167; // [sp+60h] [bp-160h]@102
  char *v168; // [sp+64h] [bp-15Ch]@102
  _DWORD *v169; // [sp+68h] [bp-158h]@105
  void (*v170)(void); // [sp+70h] [bp-150h]@105
  int (__fastcall *v171)(int, int); // [sp+74h] [bp-14Ch]@105
  __int64 v172; // [sp+78h] [bp-148h]@102
  int v173; // [sp+80h] [bp-140h]@102
  int v174; // [sp+84h] [bp-13Ch]@102
  int v175; // [sp+88h] [bp-138h]@102
  char v176; // [sp+8Ch] [bp-134h]@131
  int v177[9]; // [sp+94h] [bp-12Ch]@91
  void *v178; // [sp+B8h] [bp-108h]@91
  void *v179; // [sp+BCh] [bp-104h]@91
  int v180; // [sp+C0h] [bp-100h]@91
  char v181; // [sp+C4h] [bp-FCh]@91
  void *ptr; // [sp+ECh] [bp-D4h]@91
  ThirdPartyServer *v183; // [sp+F0h] [bp-D0h]@91
  char v184; // [sp+F8h] [bp-C8h]@91
  int v185[9]; // [sp+100h] [bp-C0h]@91
  char v186; // [sp+124h] [bp-9Ch]@91
  char *v187; // [sp+12Ch] [bp-94h]@50
  char *v188; // [sp+130h] [bp-90h]@53
  int v189; // [sp+134h] [bp-8Ch]@49
  char *v190; // [sp+13Ch] [bp-84h]@37
  char *v191; // [sp+140h] [bp-80h]@40
  char *v192; // [sp+148h] [bp-78h]@23
  char *v193; // [sp+14Ch] [bp-74h]@26
  char v194; // [sp+150h] [bp-70h]@22
  int v195[2]; // [sp+168h] [bp-58h]@20
  void *s1; // [sp+170h] [bp-50h]@23
  int v197; // [sp+174h] [bp-4Ch]@23
  int v198; // [sp+178h] [bp-48h]@23
  _BYTE *v199; // [sp+17Ch] [bp-44h]@42
  int v200; // [sp+184h] [bp-3Ch]@55
  __int16 v201; // [sp+188h] [bp-38h]@81
  char v202; // [sp+18Ah] [bp-36h]@37
  char v203; // [sp+18Ch] [bp-34h]@26
  char v204; // [sp+190h] [bp-30h]@40
  char v205; // [sp+194h] [bp-2Ch]@53

  v63 = a2;
  v64 = a1;
  result = *(ThirdPartyServer **)a2;
  if ( *(_DWORD *)a2 <= 0 )
  {
    v149 = (int *)(v64 + 68);
    v150 = (int *)(v64 + 64);
LABEL_203:
    v153 = *v149;
    v154 = *v150;
    if ( *v149 != *v150 )
    {
      v155 = *v150;
      do
      {
        v156 = *(int (__fastcall **)(int, int, signed int))(v155 + 8);
        if ( v156 )
          result = (ThirdPartyServer *)v156(v155, v155, 3);
        v155 += 16;
      }
      while ( v153 != v155 );
    }
    *v149 = v154;
    v157 = *(_QWORD *)(v64 + 76);
    if ( HIDWORD(v157) != (_DWORD)v157 )
      v158 = *(_QWORD *)(v64 + 76);
        v159 = *(int (__fastcall **)(int, int, signed int))(v158 + 8);
        if ( v159 )
          result = (ThirdPartyServer *)v159(v158, v158, 3);
        v158 += 16;
      while ( HIDWORD(v157) != v158 );
    *(_DWORD *)(v64 + 80) = v157;
    return result;
  }
  v66 = *(_DWORD **)(v64 + 36);
  v67 = v64 + 28;
  while ( v66 )
    v70 = v66;
    v66 = (_DWORD *)*v66;
    v72 = (ThirdPartyServer *)(*((_QWORD *)v70 + 6) >> 32);
    v71 = (ThirdPartyServer *)*((_QWORD *)v70 + 6);
    if ( v71 != v72 )
        v71 = (ThirdPartyServer *)((char *)ThirdPartyServer::~ThirdPartyServer(v71) + 36);
      while ( v72 != v71 );
      v71 = (ThirdPartyServer *)v70[12];
    if ( v71 )
      operator delete((void *)v71);
    ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)(v70 + 2));
    v73 = v70[1];
    v74 = (void *)(v73 - 12);
    if ( (int *)(v73 - 12) != &dword_28898C0 )
      v68 = (unsigned int *)(v73 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
      else
        v69 = (*v68)--;
      if ( v69 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v74);
    operator delete(v70);
  _aeabi_memclr4(*(_QWORD *)(v64 + 28), 4 * (*(_QWORD *)(v64 + 28) >> 32));
  *(_DWORD *)(v64 + 36) = 0;
  *(_DWORD *)(v64 + 40) = 0;
  v75 = *(_DWORD **)(v64 + 8);
  for ( i = (unsigned __int64 *)(v64 + 28); v75; v75 = (_DWORD *)*v75 )
    std::_Hashtable<std::string,std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>,std::allocator<std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>&>(
      (int)v195,
      v64 + 28,
      (int)(v75 + 1));
  result = (ThirdPartyServer *)(*(_QWORD *)(v63 + 4) >> 32);
  v76 = *(_QWORD *)(v63 + 4);
  v161 = result;
  if ( (ThirdPartyServer *)v76 == result )
LABEL_200:
    v151 = *(_DWORD *)(v64 + 64);
    for ( j = *(_DWORD *)(v64 + 68); j != v151; v151 += 16 )
      if ( !*(_DWORD *)(v151 + 8) )
        sub_119C8E4();
      result = (ThirdPartyServer *)(*(int (__fastcall **)(int, int))(v151 + 12))(v151, v67);
    goto LABEL_203;
  v160 = (unsigned __int64 *)(v64 + 76);
  v77 = v195;
  v78 = &v194;
  while ( 1 )
    ThirdPartyServer::ThirdPartyServer((int)v77);
    PropertyBag::PropertyBag(v78, (int *)(v76 + 60));
    EntityInteraction::setInteractText(&v197, (int *)(v76 + 12));
    EntityInteraction::setInteractText(&v198, (int *)(v76 + 16));
    EntityInteraction::setInteractText((int *)&s1, (int *)(v76 + 44));
    v163 = (int *)(v76 + 8);
    EntityInteraction::setInteractText(&v195[1], (int *)(v76 + 8));
    sub_119C884((void **)&v192, (const char *)&unk_257BC67);
    if ( Json::Value::isNull((Json::Value *)v78)
      || Json::Value::isObject((Json::Value *)v78) != 1
      || (v79 = (Json::Value *)Json::Value::operator[]((int)v78, "creatorName"), Json::Value::isString(v79) != 1) )
      v193 = v192;
      v192 = (char *)&unk_28898CC;
    else
      jsonValConversion<std::string>::as((int *)&v193, (int)&v203, (int)v79);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      v77,
      (int *)&v193);
    v80 = v193 - 12;
    if ( (int *)(v193 - 12) != &dword_28898C0 )
      v94 = (unsigned int *)(v193 - 4);
          v95 = __ldrex(v94);
        while ( __strex(v95 - 1, v94) );
        v95 = (*v94)--;
      if ( v95 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v80);
    v81 = v192 - 12;
    if ( (int *)(v192 - 12) != &dword_28898C0 )
      v96 = (unsigned int *)(v192 - 4);
          v97 = __ldrex(v96);
        while ( __strex(v97 - 1, v96) );
        v97 = (*v96)--;
      if ( v97 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v81);
    if ( Json::Value::isNull((Json::Value *)v78) )
      v82 = 0;
    else if ( Json::Value::isObject((Json::Value *)v78) == 1 )
      v83 = (Json::Value *)Json::Value::operator[]((int)v78, "requireXBL");
      if ( Json::Value::isBool(v83) == 1 )
        v82 = Json::Value::asBool(v83, 0);
        v82 = 0;
    v202 = v82;
    sub_119C884((void **)&v190, (const char *)&unk_257BC67);
      || (v84 = (Json::Value *)Json::Value::operator[]((int)v78, "whitelistUrl"), Json::Value::isString(v84) != 1) )
      v191 = v190;
      v190 = (char *)&unk_28898CC;
      jsonValConversion<std::string>::as((int *)&v191, (int)&v204, (int)v84);
      (int *)&v199,
      (int *)&v191);
    v85 = v191 - 12;
    if ( (int *)(v191 - 12) != &dword_28898C0 )
      v98 = (unsigned int *)(v191 - 4);
          v99 = __ldrex(v98);
        while ( __strex(v99 - 1, v98) );
        v99 = (*v98)--;
      if ( v99 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v85);
    v86 = v190 - 12;
    if ( (int *)(v190 - 12) != &dword_28898C0 )
      v100 = (unsigned int *)(v190 - 4);
          v101 = __ldrex(v100);
        while ( __strex(v101 - 1, v100) );
        v101 = (*v100)--;
      if ( v101 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v86);
    v87 = v199;
    if ( !*((_DWORD *)v199 - 3) )
      break;
    if ( *((_DWORD *)v199 - 1) >= 0 )
      sub_119CB68((const void **)&v199);
      v87 = v199;
    if ( *v87 == 42 )
      if ( !*((_DWORD *)v87 - 3) )
        sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", 1, 0);
      sub_119C8C4((void **)&v189, (int *)&v199, 1u, 0xFFFFFFFF);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v199,
        &v189);
      v88 = (void *)(v189 - 12);
      if ( (int *)(v189 - 12) != &dword_28898C0 )
        v141 = (unsigned int *)(v189 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v142 = __ldrex(v141);
          while ( __strex(v142 - 1, v141) );
        }
        else
          v142 = (*v141)--;
        if ( v142 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v88);
    sub_119C884((void **)&v187, (const char *)&unk_257BC67);
      || (v89 = (Json::Value *)Json::Value::operator[]((int)v78, "url"), Json::Value::isString(v89) != 1) )
      v188 = v187;
      v187 = (char *)&unk_28898CC;
      jsonValConversion<std::string>::as((int *)&v188, (int)&v205, (int)v89);
      &v200,
      (int *)&v188);
    v90 = v188 - 12;
    if ( (int *)(v188 - 12) != &dword_28898C0 )
      v137 = (unsigned int *)(v188 - 4);
          v138 = __ldrex(v137);
        while ( __strex(v138 - 1, v137) );
        v138 = (*v137)--;
      if ( v138 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v90);
    v91 = v187 - 12;
    if ( (int *)(v187 - 12) != &dword_28898C0 )
      v139 = (unsigned int *)(v187 - 4);
          v140 = __ldrex(v139);
        while ( __strex(v140 - 1, v139) );
        v140 = (*v139)--;
      if ( v140 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v91);
      v92 = 0;
    else if ( Json::Value::isObject((Json::Value *)&v194) == 1 )
      v93 = (Json::Value *)Json::Value::operator[]((int)&v194, "port");
      if ( Json::Value::isInt(v93) || Json::Value::isUInt(v93) == 1 )
        v92 = Json::Value::asInt(v93, 0);
        v92 = 0;
    v102 = v92 == 0;
    v201 = v92;
    if ( v92 )
      v102 = *(_DWORD *)(v200 - 12) == 0;
    if ( v102 )
    v103 = sub_119C9A4((int *)s1, *((_DWORD *)s1 - 3), -955291385);
    v104 = *(_QWORD *)(v64 + 28) >> 32;
    v162 = __PAIR__(v76, v64);
    HIDWORD(v105) = v103 % v104;
    v106 = *(_DWORD *)(*(_QWORD *)(v64 + 28) + 4 * (v103 % v104));
    if ( !v106 )
      goto LABEL_91;
    v107 = *(_DWORD *)v106;
    v108 = s1;
    v109 = *(_DWORD *)(*(_DWORD *)v106 + 60);
    while ( 1 )
      if ( v109 == v103 )
        HIDWORD(v105) = *(_DWORD *)(v107 + 4);
        v110 = *(v108 - 3);
        if ( v110 == *(_DWORD *)(HIDWORD(v105) - 12) && !memcmp(v108, (const void *)HIDWORD(v105), v110) )
          break;
      v111 = *(_DWORD *)v107;
      if ( *(_DWORD *)v107 )
        v109 = *(_DWORD *)(v111 + 60);
        HIDWORD(v105) = *(_DWORD *)(v111 + 60) % v104;
        v106 = v107;
        v107 = *(_DWORD *)v107;
        if ( HIDWORD(v105) == v103 % v104 )
          continue;
    v135 = v106 == 0;
    if ( v106 )
      v106 = *(_DWORD *)v106;
      v135 = v106 == 0;
    if ( v135 )
LABEL_91:
      LODWORD(v105) = v185;
      ThirdPartyInfo::ThirdPartyInfo(v105);
      v67 = (int)i;
      v112 = HIDWORD(v162);
      v64 = v162;
      EntityInteraction::setInteractText(&v185[8], v195);
      EntityInteraction::setInteractText(&v185[7], (int *)&s1);
      std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<std::string &>(
        &v184,
        (unsigned __int64 *)v185,
        (int *)&v199);
      v186 = v202;
      v113 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>,std::allocator<std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
               i,
               (int **)&s1);
      ThirdPartyServer::ThirdPartyServer(v177, v195);
      v178 = 0;
      v179 = 0;
      v180 = 0;
      std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>::_M_range_initialize<ThirdPartyServer const*>(
        (char **)&v178,
        v177,
        (int *)&v178);
      ThirdPartyInfo::ThirdPartyInfo((int)&v181, (int)v185);
      std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>::vector((int)&ptr, (unsigned __int64 *)&v178);
      std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>::operator=(
        v113,
        (int)&v181);
      v115 = v183;
      v114 = (ThirdPartyServer *)ptr;
      if ( ptr != (void *)v183 )
          v114 = (ThirdPartyServer *)((char *)ThirdPartyServer::~ThirdPartyServer(v114) + 36);
        while ( v115 != v114 );
        v114 = (ThirdPartyServer *)ptr;
      if ( v114 )
        operator delete((void *)v114);
      ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v181);
      v116 = *(_QWORD *)&v178;
      v117 = (ThirdPartyServer *)v178;
      if ( v178 != v179 )
          v117 = (ThirdPartyServer *)((char *)ThirdPartyServer::~ThirdPartyServer(v117) + 36);
        while ( (ThirdPartyServer *)HIDWORD(v116) != v117 );
      if ( (_DWORD)v116 )
        operator delete((void *)v116);
      ThirdPartyServer::~ThirdPartyServer((ThirdPartyServer *)v177);
      ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)v185);
      if ( v202 )
        *(_BYTE *)(v106 + 44) = 1;
        &v176,
        (unsigned __int64 *)(v106 + 8),
      v136 = *(_QWORD *)(v106 + 52);
      if ( (_DWORD)v136 == HIDWORD(v136) )
        std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>::_M_emplace_back_aux<ThirdPartyServer&>(
          (unsigned __int64 *)(v106 + 48),
          v195);
        ThirdPartyServer::ThirdPartyServer((int *)v136, v195);
        *(_DWORD *)(v106 + 52) += 36;
    if ( *(_DWORD *)(*(_DWORD *)(v112 + 48) - 12) )
      sub_119C854(&v175, v163);
      FetchImageParams::FetchImageParams((const void **)&v174, (unsigned int *)(v112 + 48), 485331304648LL);
      v172 = 0LL;
      v173 = 0;
      std::vector<std::function<void ()(std::string const&,std::string const&)>,std::allocator<std::function<void ()(std::string const&,std::string const&)>>>::operator=(
        (int)&v172,
        v160);
      v118 = *(ContentCatalogService **)(v64 + 60);
      sub_119C854((int *)&v165, &v175);
      v119 = v172;
      v120 = 0;
      v166 = 0;
      v167 = 0;
      v168 = 0;
      v121 = (HIDWORD(v172) - (signed int)v172) >> 4;
      if ( v121 )
        if ( v121 >= 0x10000000 )
          sub_119C874();
        v120 = (char *)operator new(HIDWORD(v172) - v172);
        v119 = v172;
      v166 = v120;
      v167 = v120;
      v168 = &v120[16 * v121];
      v122 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::function<void ()(std::string const&,std::string const&)> const*,std::vector<std::function<void ()(std::string const&,std::string const&)>,std::allocator<std::function<void ()(std::string const&,std::string const&)>>>>,std::function<void ()(std::string const&,std::string const&)>*>(
               v119,
               SHIDWORD(v119),
               (int)v120);
      v167 = (char *)v122;
      v170 = 0;
      v123 = operator new(0x10u);
      *v123 = v165;
      v165 = (char *)&unk_28898CC;
      v124 = (int)v166;
      v123[1] = v124;
      v125 = (int)v168;
      v123[2] = v122;
      v123[3] = v125;
      v169 = v123;
      v171 = sub_10F02BC;
      v170 = (void (*)(void))sub_10F02E8;
      ContentCatalogService::fetchImageData(v118, &v174, (int)&v169);
      if ( v170 )
        v170();
      v126 = (int)v167;
      v127 = (int)v166;
      if ( v166 != v167 )
          v128 = *(void (__fastcall **)(int, int, signed int))(v127 + 8);
          if ( v128 )
            v128(v127, v127, 3);
          v127 += 16;
        while ( v126 != v127 );
        v127 = (int)v166;
      if ( v127 )
        operator delete((void *)v127);
      v129 = v165 - 12;
      if ( (int *)(v165 - 12) != &dword_28898C0 )
        v143 = (unsigned int *)(v165 - 4);
            v144 = __ldrex(v143);
          while ( __strex(v144 - 1, v143) );
          v144 = (*v143)--;
        if ( v144 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v129);
      v130 = HIDWORD(v172);
      v131 = v172;
      if ( (_DWORD)v172 != HIDWORD(v172) )
          v132 = *(void (__fastcall **)(int, int, signed int))(v131 + 8);
          if ( v132 )
            v132(v131, v131, 3);
          v131 += 16;
        while ( v130 != v131 );
        v131 = v172;
      if ( v131 )
        operator delete((void *)v131);
      v133 = (void *)(v174 - 12);
      if ( (int *)(v174 - 12) != &dword_28898C0 )
        v145 = (unsigned int *)(v174 - 4);
            v146 = __ldrex(v145);
          while ( __strex(v146 - 1, v145) );
          v146 = (*v145)--;
        if ( v146 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v133);
      v134 = (void *)(v175 - 12);
      if ( (int *)(v175 - 12) != &dword_28898C0 )
        v147 = (unsigned int *)(v175 - 4);
            v148 = __ldrex(v147);
          while ( __strex(v148 - 1, v147) );
          v148 = (*v147)--;
        if ( v148 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v134);
    v78 = &v194;
    Json::Value::~Value((Json::Value *)&v194);
    v77 = v195;
    ThirdPartyServer::~ThirdPartyServer((ThirdPartyServer *)v195);
    v76 = v112 + 68;
    result = v161;
    if ( (ThirdPartyServer *)v76 == v161 )
      goto LABEL_200;
  Json::Value::~Value((Json::Value *)&v194);
  return ThirdPartyServer::~ThirdPartyServer((ThirdPartyServer *)v195);
}


signed int __fastcall ThirdPartyServerRepository::injectTestServer(int a1, int *a2, int a3, int *a4, char a5)
{
  __int16 v5; // r5@1
  int *v6; // r7@1
  bool v7; // zf@1
  int v8; // r8@1
  int *v9; // r4@3
  signed int result; // r0@3
  int v11; // r7@5
  __int64 v12; // r0@5
  int *v13; // r0@6
  int v14; // r6@6
  int v15; // r0@6
  ThirdPartyServer *v16; // r0@6
  ThirdPartyServer *v17; // r5@6
  void *v18; // r5@11 OVERLAPPED
  ThirdPartyServer *v19; // r6@11 OVERLAPPED
  ThirdPartyServer *v20; // r0@12
  int v21; // r4@16
  int v22; // r0@16
  ThirdPartyServer *v23; // r0@16
  ThirdPartyServer *v24; // r4@16
  __int64 v25; // r4@21
  ThirdPartyServer *v26; // r0@22
  int v27[9]; // [sp+4h] [bp-13Ch]@16
  ThirdPartyServer *v28; // [sp+28h] [bp-118h]@16
  ThirdPartyServer *v29; // [sp+2Ch] [bp-114h]@16
  int v30; // [sp+30h] [bp-110h]@16
  char v31; // [sp+34h] [bp-10Ch]@16
  __int64 v32; // [sp+5Ch] [bp-E4h]@16
  int v33[9]; // [sp+68h] [bp-D8h]@6
  ThirdPartyServer *v34; // [sp+8Ch] [bp-B4h]@6
  ThirdPartyServer *v35; // [sp+90h] [bp-B0h]@6
  int v36; // [sp+94h] [bp-ACh]@6
  char v37; // [sp+98h] [bp-A8h]@6
  __int64 ptr; // [sp+C0h] [bp-80h]@6
  char v39; // [sp+CCh] [bp-74h]@6
  int v40[9]; // [sp+D4h] [bp-6Ch]@6
  char v41; // [sp+F8h] [bp-48h]@6
  int v42[8]; // [sp+FCh] [bp-44h]@5
  __int16 v43; // [sp+11Ch] [bp-24h]@5
  char v44; // [sp+11Eh] [bp-22h]@5

  v5 = a3;
  v6 = a2;
  v7 = a3 == 0;
  v8 = a1;
  if ( a3 )
    v7 = *(_DWORD *)(*a2 - 12) == 0;
  v9 = a4;
  result = 0;
  if ( !v7 )
  {
    if ( *(_DWORD *)(*a4 - 12) )
    {
      ThirdPartyServer::ThirdPartyServer((int)v42);
      EntityInteraction::setInteractText(&v42[7], v6);
      v43 = v5;
      EntityInteraction::setInteractText(&v42[2], v9);
      v44 = a5;
      EntityInteraction::setInteractText(&v42[5], v6);
      v11 = std::_Hashtable<std::string,std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>,std::allocator<std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
              (unsigned __int64 *)(v8 + 28),
              (int **)v9);
      if ( !(std::_Hashtable<std::string,std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>,std::allocator<std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
               (unsigned __int64 *)v8,
               (int **)v9) | v11) )
      {
        LODWORD(v12) = v40;
        ThirdPartyInfo::ThirdPartyInfo(v12);
        EntityInteraction::setInteractText(&v40[7], &v42[2]);
        v13 = (int *)ThirdPartyServer::getCreatorName((ThirdPartyServer *)v42);
        EntityInteraction::setInteractText(&v40[8], v13);
        std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<std::string &>(
          &v39,
          (unsigned __int64 *)v40,
          &v42[5]);
        v41 = v44;
        v14 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>,std::allocator<std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                (unsigned __int64 *)(v8 + 28),
                (int **)v9);
        ThirdPartyServer::ThirdPartyServer(v33, v42);
        v34 = 0;
        v35 = 0;
        v36 = 0;
        std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>::_M_range_initialize<ThirdPartyServer const*>(
          (char **)&v34,
          v33,
          (int *)&v34);
        v15 = ThirdPartyInfo::ThirdPartyInfo((int)&v37, (int)v40);
        std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>::vector(v15 + 40, (unsigned __int64 *)&v34);
        std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>::operator=(
          v14,
          (int)&v37);
        v17 = (ThirdPartyServer *)HIDWORD(ptr);
        v16 = (ThirdPartyServer *)ptr;
        if ( (_DWORD)ptr != HIDWORD(ptr) )
        {
          do
            v16 = (ThirdPartyServer *)((char *)ThirdPartyServer::~ThirdPartyServer(v16) + 36);
          while ( v17 != v16 );
          v16 = (ThirdPartyServer *)ptr;
        }
        if ( v16 )
          operator delete((void *)v16);
        ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v37);
        *(_QWORD *)&v18 = *(_QWORD *)&v34;
        if ( v34 != v35 )
          v20 = v34;
            v20 = (ThirdPartyServer *)((char *)ThirdPartyServer::~ThirdPartyServer(v20) + 36);
          while ( v19 != v20 );
        if ( v18 )
          operator delete(v18);
        ThirdPartyServer::~ThirdPartyServer((ThirdPartyServer *)v33);
        v21 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>,std::allocator<std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                (unsigned __int64 *)v8,
        ThirdPartyServer::ThirdPartyServer(v27, v42);
        v28 = 0;
        v29 = 0;
        v30 = 0;
          (char **)&v28,
          v27,
          (int *)&v28);
        v22 = ThirdPartyInfo::ThirdPartyInfo((int)&v31, (int)v40);
        std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>::vector(v22 + 40, (unsigned __int64 *)&v28);
          v21,
          (int)&v31);
        v24 = (ThirdPartyServer *)HIDWORD(v32);
        v23 = (ThirdPartyServer *)v32;
        if ( (_DWORD)v32 != HIDWORD(v32) )
            v23 = (ThirdPartyServer *)((char *)ThirdPartyServer::~ThirdPartyServer(v23) + 36);
          while ( v24 != v23 );
          v23 = (ThirdPartyServer *)v32;
        if ( v23 )
          operator delete((void *)v23);
        ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)&v31);
        v25 = *(_QWORD *)&v28;
        if ( v28 != v29 )
          v26 = v28;
            v26 = (ThirdPartyServer *)((char *)ThirdPartyServer::~ThirdPartyServer(v26) + 36);
          while ( (ThirdPartyServer *)HIDWORD(v25) != v26 );
        if ( (_DWORD)v25 )
          operator delete((void *)v25);
        ThirdPartyServer::~ThirdPartyServer((ThirdPartyServer *)v27);
        ThirdPartyInfo::~ThirdPartyInfo((ThirdPartyInfo *)v40);
      }
      ThirdPartyServer::~ThirdPartyServer((ThirdPartyServer *)v42);
      result = 1;
    }
    else
      result = 0;
  }
  return result;
}


_BOOL4 __fastcall ThirdPartyServerRepository::isThirdPartyRegistered(int a1, int **a2)
{
  return std::_Hashtable<std::string,std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>,std::allocator<std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
           (unsigned __int64 *)(a1 + 28),
           a2) != 0;
}


int __fastcall ThirdPartyServerRepository::setup(ThirdPartyServerRepository *this, MinecraftEventing *a2, Social::UserManager *a3)
{
  ThirdPartyServerRepository *v3; // r5@1
  Social::UserManager *v4; // r4@1
  MinecraftEventing *v5; // r6@1
  AppPlatform **v6; // r0@2
  int *v7; // r0@4
  int *v8; // r0@4
  int v9; // r1@4
  int v10; // r0@4
  void *v11; // r0@6
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  int v15; // [sp+0h] [bp-28h]@4
  int v16; // [sp+4h] [bp-24h]@4

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v6 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v6 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v7 = AppPlatform::getTempPath(*v6);
  v8 = sub_119C854(&v15, v7);
  sub_119C894((const void **)v8, "/ContentCache/ThirdPartyServer/", 0x1Fu);
  std::make_unique<ContentCatalogService,std::string>(&v16, &v15);
  v9 = v16;
  v16 = 0;
  v10 = *((_DWORD *)v3 + 15);
  *((_DWORD *)v3 + 15) = v9;
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  v11 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  }
  ServiceClient::setEventing(*((ServiceClient **)v3 + 15), v5);
  return ServiceClient::setUserManager(*((ServiceClient **)v3 + 15), v4);
}


int __fastcall ThirdPartyServerRepository::~ThirdPartyServerRepository(ThirdPartyServerRepository *this)
{
  ThirdPartyServerRepository *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void (__fastcall *v4)(int, int, signed int); // r3@2
  int v5; // r5@8 OVERLAPPED
  int v6; // r6@8 OVERLAPPED
  void (__fastcall *v7)(int, int, signed int); // r3@9
  int v8; // r0@15

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 76);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void (__fastcall **)(int, int, signed int))(v2 + 8);
      if ( v4 )
        v4(v2, v2, 3);
      v2 += 16;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 19);
  }
  if ( v2 )
    operator delete((void *)v2);
  *(_QWORD *)&v5 = *((_QWORD *)v1 + 8);
  if ( v5 != v6 )
      v7 = *(void (__fastcall **)(int, int, signed int))(v5 + 8);
      if ( v7 )
        v7(v5, v5, 3);
      v5 += 16;
    while ( v6 != v5 );
    v5 = *((_DWORD *)v1 + 16);
  if ( v5 )
    operator delete((void *)v5);
  v8 = *((_DWORD *)v1 + 15);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  *((_DWORD *)v1 + 15) = 0;
  std::unordered_map<std::string,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>>>::~unordered_map((int)v1 + 28);
  return j_j_j__ZNSt13unordered_mapISsSt4pairI14ThirdPartyInfoSt6vectorI16ThirdPartyServerSaIS3_EEESt4hashISsESt8equal_toISsESaIS0_IKSsS6_EEED2Ev((int)v1);
}


int __fastcall ThirdPartyServerRepository::ThirdPartyServerRepository(double a1)
{
  int v1; // r4@1
  double v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3
  unsigned int v5; // r0@4
  int v6; // r6@6
  void *v7; // r5@6

  v1 = LODWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 1065353216;
  LODWORD(a1) += 16;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(a1)));
  *(_DWORD *)(v1 + 4) = LODWORD(v2);
  if ( LODWORD(v2) == 1 )
  {
    *(_DWORD *)(v1 + 24) = 0;
    v4 = (void *)(v1 + 24);
  }
  else
    if ( LODWORD(v2) >= 0x40000000 )
      sub_119C874();
    v3 = 4 * LODWORD(v2);
    v4 = operator new(4 * LODWORD(v2));
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)v1 = v4;
  *(_DWORD *)(v1 + 36) = 0;
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 44) = 1065353216;
  LODWORD(v2) = v1 + 44;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v5 = sub_119C844(v2);
  *(_DWORD *)(v1 + 32) = v5;
  if ( v5 == 1 )
    *(_DWORD *)(v1 + 52) = 0;
    v7 = (void *)(v1 + 52);
    if ( v5 >= 0x40000000 )
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)(v1 + 28) = v7;
  *(_BYTE *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 64) = 0;
  *(_DWORD *)(v1 + 68) = 0;
  *(_DWORD *)(v1 + 72) = 0;
  *(_DWORD *)(v1 + 76) = 0;
  *(_DWORD *)(v1 + 80) = 0;
  *(_DWORD *)(v1 + 84) = 0;
  return v1;
}


SearchQuery *__fastcall ThirdPartyServerRepository::fetch(int a1, int *a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  int v6; // r7@1
  int v7; // r5@1
  int *v8; // r8@1
  void (__fastcall *v9)(int, int, signed int); // r3@2
  int v10; // r7@6
  void (__fastcall *v11)(int, int, signed int); // r3@7
  SearchQuery *result; // r0@11
  void *v13; // r0@12
  int v14; // r0@13
  void *v15; // r0@13
  ContentCatalogService *v16; // r5@14
  _DWORD *v17; // r0@14
  __int64 v18; // r1@14
  unsigned int *v19; // r2@18
  signed int v20; // r1@20
  unsigned int *v21; // r2@22
  signed int v22; // r1@24
  _DWORD *v23; // [sp+4h] [bp-64h]@14
  __int64 v24; // [sp+Ch] [bp-5Ch]@14
  int v25; // [sp+14h] [bp-54h]@13
  int v26; // [sp+1Ch] [bp-4Ch]@12
  int v27[11]; // [sp+20h] [bp-48h]@12

  v4 = a1;
  v5 = a4;
  v6 = *(_QWORD *)(a1 + 68);
  v7 = a3;
  v8 = a2;
  if ( v6 == *(_QWORD *)(a1 + 68) >> 32 )
  {
    std::vector<std::function<void ()(std::unordered_map<std::string,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>>> const&)>,std::allocator<std::function<void ()(std::unordered_map<std::string,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>>> const&)>>>::_M_emplace_back_aux<std::function<void ()(std::unordered_map<std::string,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::pair<ThirdPartyInfo,std::vector<ThirdPartyServer,std::allocator<ThirdPartyServer>>>>>> const&)> const&>(
      (_QWORD *)(a1 + 64),
      a3);
  }
  else
    *(_DWORD *)(v6 + 8) = 0;
    v9 = *(void (__fastcall **)(int, int, signed int))(a3 + 8);
    if ( v9 )
    {
      v9(v6, a3, 2);
      *(_DWORD *)(v6 + 12) = *(_DWORD *)(v7 + 12);
      *(_DWORD *)(v6 + 8) = *(_DWORD *)(v7 + 8);
      v6 = *(_DWORD *)(v4 + 68);
    }
    *(_DWORD *)(v4 + 68) = v6 + 16;
  v10 = *(_QWORD *)(v4 + 80);
  if ( v10 == *(_QWORD *)(v4 + 80) >> 32 )
    std::vector<std::function<void ()(std::string const&,std::string const&)>,std::allocator<std::function<void ()(std::string const&,std::string const&)>>>::_M_emplace_back_aux<std::function<void ()(std::string const&,std::string const&)> const&>(
      (_QWORD *)(v4 + 76),
      v5);
    *(_DWORD *)(v10 + 8) = 0;
    v11 = *(void (__fastcall **)(int, int, signed int))(v5 + 8);
    if ( v11 )
      v11(v10, v5, 2);
      *(_DWORD *)(v10 + 12) = *(_DWORD *)(v5 + 12);
      *(_DWORD *)(v10 + 8) = *(_DWORD *)(v5 + 8);
      v10 = *(_DWORD *)(v4 + 80);
    *(_DWORD *)(v4 + 80) = v10 + 16;
  result = (SearchQuery *)*(_BYTE *)(v4 + 56);
  if ( !*(_BYTE *)(v4 + 56) )
    *(_BYTE *)(v4 + 56) = 1;
    sub_119C884((void **)&v26, "3PP");
    SearchQuery::SearchQuery((int)v27, &v26);
    v13 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v26 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v13);
    v14 = I18n::getCurrentLanguage((I18n *)v13);
    Localization::getFullLanguageCode((Localization *)&v25, v14);
    SearchQuery::setAcceptLanguage((char *)v27, &v25);
    v15 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v25 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    SearchQuery::setPlatform((int)v27, v8);
    v16 = *(ContentCatalogService **)(v4 + 60);
    v17 = operator new(4u);
    LODWORD(v18) = sub_10EF91C;
    *v17 = v4;
    HIDWORD(v18) = sub_10EF908;
    v23 = v17;
    v24 = v18;
    ContentCatalogService::searchCatalog(v16, v27, (int)&v23);
    if ( (_DWORD)v24 )
      ((void (*)(void))v24)();
    result = SearchQuery::~SearchQuery((SearchQuery *)v27);
  return result;
}


int __fastcall ThirdPartyServerRepository::findThirdPartyInfoForUrl(int a1, int a2, int *a3)
{
  _DWORD *v3; // r7@1
  int *v4; // r5@1
  int v5; // r4@1
  int v6; // r0@5
  void *v7; // r1@5

  v3 = *(_DWORD **)(a2 + 36);
  v4 = a3;
  v5 = a1;
  while ( v3 )
  {
    if ( ThirdPartyInfo::isEligible((int)(v3 + 2), v4) )
    {
      v6 = v5;
      v7 = v3 + 2;
      return ThirdPartyInfo::ThirdPartyInfo(v6, (int)v7);
    }
    v3 = (_DWORD *)*v3;
  }
  v6 = v5;
  v7 = &unk_27D6E84;
  return ThirdPartyInfo::ThirdPartyInfo(v6, (int)v7);
}
