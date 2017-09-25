

void __fastcall OculusPostEntitlement::send(OculusPostEntitlement *this)
{
  OculusPostEntitlement *v1; // r4@1
  const char *v2; // r1@1
  void *v3; // r0@3
  void *v4; // r0@4
  int v5; // r6@5
  void *v6; // r0@5
  void *v7; // r0@6
  void *v8; // r0@7
  int v9; // r6@8
  void *v10; // r0@8
  void *v11; // r0@9
  void *v12; // r0@10
  int *v13; // r5@11
  void *v14; // r0@13
  void *v15; // r0@14
  int *v16; // r5@15
  void *v17; // r0@17
  void *v18; // r0@18
  int *v19; // r5@19
  void *v20; // r0@21
  void *v21; // r0@22
  int *v22; // r5@23
  void *v23; // r0@25
  void *v24; // r0@26
  int *v25; // r5@27
  void *v26; // r0@29
  void *v27; // r0@30
  int *v28; // r6@32
  void *v29; // r0@34
  void *v30; // r0@35
  void *v31; // r0@38
  void *v32; // r0@39
  void *v33; // r0@40
  __int64 v34; // kr00_8@41
  unsigned int *v35; // r0@42
  unsigned int v36; // r1@44
  unsigned int *v37; // r0@48
  unsigned int v38; // r1@50
  unsigned int *v39; // r0@54
  unsigned int v40; // r1@56
  __int64 v41; // r0@60
  int v42; // r7@60
  unsigned int *v43; // r1@61
  unsigned int v44; // r0@63
  unsigned int *v45; // r4@67
  unsigned int v46; // r0@69
  int v47; // r4@74
  unsigned int *v48; // r1@75
  unsigned int v49; // r0@77
  unsigned int *v50; // r7@81
  unsigned int v51; // r0@83
  int v52; // r4@88
  unsigned int *v53; // r1@89
  unsigned int v54; // r0@91
  unsigned int *v55; // r7@95
  unsigned int v56; // r0@97
  int v57; // r4@102
  unsigned int *v58; // r1@103
  unsigned int v59; // r0@105
  unsigned int *v60; // r7@109
  unsigned int v61; // r0@111
  int v62; // r4@116
  unsigned int *v63; // r1@117
  unsigned int v64; // r0@119
  unsigned int *v65; // r7@123
  unsigned int v66; // r0@125
  int v67; // r0@130
  unsigned int *v68; // r1@131
  unsigned int v69; // r2@132
  int v70; // r4@135
  unsigned int *v71; // r1@136
  unsigned int v72; // r0@138
  unsigned int *v73; // r7@142
  unsigned int v74; // r0@144
  unsigned int *v75; // r1@150
  unsigned int v76; // r0@152
  unsigned int *v77; // r4@156
  unsigned int v78; // r0@158
  void *v79; // r0@163
  int v80; // r4@164
  unsigned int *v81; // r1@165
  unsigned int v82; // r0@167
  unsigned int *v83; // r5@171
  unsigned int v84; // r0@173
  void *v85; // r0@178
  unsigned int *v86; // r2@180
  signed int v87; // r1@182
  unsigned int *v88; // r2@184
  signed int v89; // r1@186
  unsigned int *v90; // r2@188
  signed int v91; // r1@190
  unsigned int *v92; // r2@192
  signed int v93; // r1@194
  unsigned int *v94; // r2@196
  signed int v95; // r1@198
  unsigned int *v96; // r2@200
  signed int v97; // r1@202
  unsigned int *v98; // r2@204
  signed int v99; // r1@206
  unsigned int *v100; // r2@208
  signed int v101; // r1@210
  unsigned int *v102; // r2@212
  signed int v103; // r1@214
  unsigned int *v104; // r2@216
  signed int v105; // r1@218
  unsigned int *v106; // r2@220
  signed int v107; // r1@222
  unsigned int *v108; // r2@224
  signed int v109; // r1@226
  unsigned int *v110; // r2@228
  signed int v111; // r1@230
  unsigned int *v112; // r2@232
  signed int v113; // r1@234
  unsigned int *v114; // r2@236
  signed int v115; // r1@238
  unsigned int *v116; // r2@240
  signed int v117; // r1@242
  unsigned int *v118; // r2@244
  signed int v119; // r1@246
  unsigned int *v120; // r2@248
  signed int v121; // r1@250
  unsigned int *v122; // r2@252
  signed int v123; // r1@254
  unsigned int *v124; // r2@256
  signed int v125; // r1@258
  unsigned int *v126; // r2@260
  signed int v127; // r1@262
  unsigned int *v128; // r2@264
  signed int v129; // r1@266
  unsigned int *v130; // r2@268
  signed int v131; // r1@270
  unsigned int *v132; // r2@272
  signed int v133; // r1@274
  unsigned int *v134; // r2@276
  signed int v135; // r1@278
  __int64 v136; // [sp+0h] [bp-140h]@53
  int v137; // [sp+8h] [bp-138h]@53
  web::http::details::_http_request *v138; // [sp+Ch] [bp-134h]@47
  int v139; // [sp+10h] [bp-130h]@47
  char v140; // [sp+14h] [bp-12Ch]@53
  int v141; // [sp+18h] [bp-128h]@116
  char v142; // [sp+1Ch] [bp-124h]@53
  int v143; // [sp+20h] [bp-120h]@102
  char v144; // [sp+24h] [bp-11Ch]@59
  int v145; // [sp+28h] [bp-118h]@60
  int v146; // [sp+2Ch] [bp-114h]@40
  int v147; // [sp+30h] [bp-110h]@40
  int v148; // [sp+34h] [bp-10Ch]@163
  int v149; // [sp+54h] [bp-ECh]@38
  int v150; // [sp+58h] [bp-E8h]@36
  int v151; // [sp+5Ch] [bp-E4h]@8
  int v152; // [sp+60h] [bp-E0h]@8
  int v153; // [sp+68h] [bp-D8h]@8
  int v154; // [sp+6Ch] [bp-D4h]@5
  int v155; // [sp+70h] [bp-D0h]@5
  int v156; // [sp+78h] [bp-C8h]@5
  int v157; // [sp+7Ch] [bp-C4h]@4
  web::http::details::_http_request *v158; // [sp+80h] [bp-C0h]@4
  int v159; // [sp+84h] [bp-BCh]@47
  int v160; // [sp+88h] [bp-B8h]@3
  int v161; // [sp+8Ch] [bp-B4h]@3
  int *v162[2]; // [sp+A8h] [bp-98h]@3
  int v163; // [sp+B4h] [bp-8Ch]@3
  char v164; // [sp+B8h] [bp-88h]@4
  int v165; // [sp+BCh] [bp-84h]@32
  int v166; // [sp+C0h] [bp-80h]@32
  int v167; // [sp+C8h] [bp-78h]@32
  int v168; // [sp+CCh] [bp-74h]@27
  int v169; // [sp+D0h] [bp-70h]@27
  int v170; // [sp+D8h] [bp-68h]@27
  int v171; // [sp+DCh] [bp-64h]@23
  int v172; // [sp+E0h] [bp-60h]@23
  int v173; // [sp+E8h] [bp-58h]@23
  int v174; // [sp+ECh] [bp-54h]@19
  int v175; // [sp+F0h] [bp-50h]@19
  int v176; // [sp+F8h] [bp-48h]@19
  int v177; // [sp+FCh] [bp-44h]@15
  int v178; // [sp+100h] [bp-40h]@15
  int v179; // [sp+108h] [bp-38h]@15
  int v180; // [sp+10Ch] [bp-34h]@11
  int v181; // [sp+110h] [bp-30h]@11
  int v182; // [sp+118h] [bp-28h]@11
  int v183; // [sp+11Ch] [bp-24h]@11

  v1 = this;
  v2 = "/v7.0/sync/oculus/all";
  if ( *(_DWORD *)(*((_DWORD *)this + 20) - 12) )
    v2 = "/v7.0/sync/oculus/grant";
  sub_21E94B4((void **)&v163, v2);
  web::uri::uri((web::uri *)&v160, "https://purchase.mp.microsoft.com/");
  web::http::client::http_client::http_client((web::http::client::http_client *)v162, (const web::uri *)&v160);
  web::details::uri_components::~uri_components((web::details::uri_components *)&v161);
  v3 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
  {
    v86 = (unsigned int *)(v160 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
    }
    else
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  sub_21E8AF4(&v157, (int *)&web::http::methods::POST);
  std::__shared_ptr<web::http::details::_http_request,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<web::http::details::_http_request>,std::string>(
    (int)&v158,
    (int)&v164,
    &v157);
  v4 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v157 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = (int)v158;
  sub_21E94B4((void **)&v156, "MS-CorrelationId");
  mce::UUID::asString((mce::UUID *)&v154);
  utility::conversions::to_string_t(&v155, &v154);
  web::http::http_headers::add<std::string>(v5 + 20, &v156, &v155);
  v6 = (void *)(v155 - 12);
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v155 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v154 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v156 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (int)v158;
  sub_21E94B4((void **)&v153, "MS-RequestId");
  mce::UUID::asString((mce::UUID *)&v151);
  utility::conversions::to_string_t(&v152, &v151);
  web::http::http_headers::add<std::string>(v9 + 20, &v153, &v152);
  v10 = (void *)(v152 - 12);
  if ( (int *)(v152 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v152 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v151 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v153 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  web::json::value::value((web::json::value *)&v183);
  sub_21E94B4((void **)&v182, "appId");
  v13 = (int *)web::json::value::operator[]((int)&v183);
  utility::conversions::to_string_t(&v180, (int *)v1 + 15);
  web::json::value::value(&v181, &v180);
  web::json::value::operator=(v13, &v181);
  if ( v181 )
    (*(void (**)(void))(*(_DWORD *)v181 + 96))();
  v181 = 0;
  v14 = (void *)(v180 - 12);
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v180 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v182 - 12);
  if ( (int *)(v182 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v182 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v179, "language");
  v16 = (int *)web::json::value::operator[]((int)&v183);
  utility::conversions::to_string_t(&v177, (int *)v1 + 16);
  web::json::value::value(&v178, &v177);
  web::json::value::operator=(v16, &v178);
  if ( v178 )
    (*(void (**)(void))(*(_DWORD *)v178 + 96))();
  v178 = 0;
  v17 = (void *)(v177 - 12);
  if ( (int *)(v177 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v177 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v179 - 12);
  if ( (int *)(v179 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v179 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v176, "market");
  v19 = (int *)web::json::value::operator[]((int)&v183);
  utility::conversions::to_string_t(&v174, (int *)v1 + 17);
  web::json::value::value(&v175, &v174);
  web::json::value::operator=(v19, &v175);
  if ( v175 )
    (*(void (**)(void))(*(_DWORD *)v175 + 96))();
  v175 = 0;
  v20 = (void *)(v174 - 12);
  if ( (int *)(v174 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v174 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v176 - 12);
  if ( (int *)(v176 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v176 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v173, "purchaseKey");
  v22 = (int *)web::json::value::operator[]((int)&v183);
  utility::conversions::to_string_t(&v171, (int *)v1 + 18);
  web::json::value::value(&v172, &v171);
  web::json::value::operator=(v22, &v172);
  if ( v172 )
    (*(void (**)(void))(*(_DWORD *)v172 + 96))();
  v172 = 0;
  v23 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v171 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v173 - 12);
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v173 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v170, "userAccessToken");
  v25 = (int *)web::json::value::operator[]((int)&v183);
  utility::conversions::to_string_t(&v168, (int *)v1 + 19);
  web::json::value::value(&v169, &v168);
  web::json::value::operator=(v25, &v169);
  if ( v169 )
    (*(void (**)(void))(*(_DWORD *)v169 + 96))();
  v169 = 0;
  v26 = (void *)(v168 - 12);
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v168 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v170 - 12);
  if ( (int *)(v170 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v170 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  if ( *(_DWORD *)(*((_DWORD *)v1 + 20) - 12) )
    sub_21E94B4((void **)&v167, "skuId");
    v28 = (int *)web::json::value::operator[]((int)&v183);
    utility::conversions::to_string_t(&v165, (int *)v1 + 20);
    web::json::value::value(&v166, &v165);
    web::json::value::operator=(v28, &v166);
    if ( v166 )
      (*(void (**)(void))(*(_DWORD *)v166 + 96))();
    v166 = 0;
    v29 = (void *)(v165 - 12);
    if ( (int *)(v165 - 12) != &dword_28898C0 )
      v132 = (unsigned int *)(v165 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v133 = __ldrex(v132);
        while ( __strex(v133 - 1, v132) );
      }
      else
        v133 = (*v132)--;
      if ( v133 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    v30 = (void *)(v167 - 12);
    if ( (int *)(v167 - 12) != &dword_28898C0 )
      v134 = (unsigned int *)(v167 - 4);
          v135 = __ldrex(v134);
        while ( __strex(v135 - 1, v134) );
        v135 = (*v134)--;
      if ( v135 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
  web::json::value::serialize((web::json::value *)&v150, (int)&v183);
  if ( v183 )
    (*(void (**)(void))(*(_DWORD *)v183 + 96))();
  sub_21E94B4((void **)&v149, "application/json");
  web::http::http_request::set_body((int *)&v158, &v150, &v149);
  v31 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v149 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = (void *)(v150 - 12);
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v150 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  utility::conversions::to_string_t(&v146, &v163);
  web::uri::uri((int)&v147, &v146);
  v33 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v126 = (unsigned int *)(v146 - 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 - 1, v126) );
      v127 = (*v126)--;
    if ( v127 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  web::http::details::_http_request::set_request_uri(v158, (const web::uri *)&v147);
  v34 = *((_QWORD *)v1 + 15);
  if ( HIDWORD(v34) )
    v35 = (unsigned int *)(HIDWORD(v34) + 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 + 1, v35) );
      ++*v35;
  v138 = v158;
  v139 = v159;
  if ( v159 )
    v37 = (unsigned int *)(v159 + 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 + 1, v37) );
      ++*v37;
  v137 = 0;
  web::http::client::http_client::request((pplx::details::platform *)&v140, v162, (int)&v138, &v137);
  sub_14131E0((int)&v142, (int)&v140);
  v136 = v34;
    v39 = (unsigned int *)(HIDWORD(v34) + 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 + 1, v39) );
      ++*v39;
  sub_1413B00((int)&v144, (int)&v142, (int)&v136);
  if ( (char *)v1 + 44 != &v144 )
    v41 = *(_QWORD *)&v144;
    *(_DWORD *)&v144 = 0;
    v145 = 0;
    *((_DWORD *)v1 + 11) = v41;
    v42 = *((_DWORD *)v1 + 12);
    *((_DWORD *)v1 + 12) = HIDWORD(v41);
    if ( v42 )
      v43 = (unsigned int *)(v42 + 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 == 1 )
        v45 = (unsigned int *)(v42 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 8))(v42);
        if ( &pthread_create )
        {
          __dmb();
          do
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
        }
        else
          v46 = (*v45)--;
        if ( v46 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 12))(v42);
  v47 = v145;
  if ( v145 )
    v48 = (unsigned int *)(v145 + 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 == 1 )
      v50 = (unsigned int *)(v47 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
  v52 = HIDWORD(v136);
  if ( HIDWORD(v136) )
    v53 = (unsigned int *)(HIDWORD(v136) + 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 == 1 )
      v55 = (unsigned int *)(v52 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 8))(v52);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 12))(v52);
  v57 = v143;
  if ( v143 )
    v58 = (unsigned int *)(v143 + 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 == 1 )
      v60 = (unsigned int *)(v57 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v57 + 8))(v57);
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
        v61 = (*v60)--;
      if ( v61 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v57 + 12))(v57);
  v62 = v141;
  if ( v141 )
    v63 = (unsigned int *)(v141 + 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 == 1 )
      v65 = (unsigned int *)(v62 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v62 + 8))(v62);
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
        v66 = (*v65)--;
      if ( v66 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v62 + 12))(v62);
  v67 = v137;
  if ( v137 )
    v68 = (unsigned int *)(v137 + 4);
    __dmb();
    do
      v69 = __ldrex(v68);
    while ( __strex(v69 - 1, v68) );
    if ( v69 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v67 + 8))(v67);
  v70 = v139;
  if ( v139 )
    v71 = (unsigned int *)(v139 + 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 == 1 )
      v73 = (unsigned int *)(v70 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v70 + 8))(v70);
          v74 = __ldrex(v73);
        while ( __strex(v74 - 1, v73) );
        v74 = (*v73)--;
      if ( v74 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v70 + 12))(v70);
    v75 = (unsigned int *)(HIDWORD(v34) + 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 == 1 )
      v77 = (unsigned int *)(HIDWORD(v34) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v34) + 8))(HIDWORD(v34));
          v78 = __ldrex(v77);
        while ( __strex(v78 - 1, v77) );
        v78 = (*v77)--;
      if ( v78 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v34) + 12))(HIDWORD(v34));
  web::details::uri_components::~uri_components((web::details::uri_components *)&v148);
  v79 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v128 = (unsigned int *)(v147 - 4);
        v129 = __ldrex(v128);
      while ( __strex(v129 - 1, v128) );
      v129 = (*v128)--;
    if ( v129 <= 0 )
      j_j_j_j__ZdlPv_9(v79);
  v80 = v159;
    v81 = (unsigned int *)(v159 + 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 == 1 )
      v83 = (unsigned int *)(v80 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v80 + 8))(v80);
          v84 = __ldrex(v83);
        while ( __strex(v84 - 1, v83) );
        v84 = (*v83)--;
      if ( v84 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v80 + 12))(v80);
  web::http::client::http_client::~http_client((web::http::client::http_client *)v162);
  v85 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v130 = (unsigned int *)(v163 - 4);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 <= 0 )
      j_j_j_j__ZdlPv_9(v85);
}


int __fastcall OculusPostEntitlement::OculusPostEntitlement(int a1, int a2, int *a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r6@1
  int *v7; // r7@1
  int v8; // r12@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r3@1
  void (__fastcall *v12)(int, int, signed int); // r3@1
  char v14; // [sp+Bh] [bp-1Dh]@3
  char v15; // [sp+Ch] [bp-1Ch]@3

  v5 = a1;
  v6 = a4;
  v7 = a3;
  RequestHandler::RequestHandler(a1, a2, -1, -1, 15);
  *(_DWORD *)v5 = &off_26E8520;
  OculusPostData::OculusPostData((int *)(v5 + 60), v7);
  v8 = v5 + 88;
  v9 = *(_DWORD *)(v6 + 4);
  v10 = *(_DWORD *)(v6 + 8);
  v11 = *(_DWORD *)(v6 + 12);
  *(_DWORD *)v8 = *(_DWORD *)v6;
  *(_DWORD *)(v8 + 4) = v9;
  *(_DWORD *)(v8 + 8) = v10;
  *(_DWORD *)(v8 + 12) = v11;
  *(_DWORD *)(v5 + 112) = 0;
  v12 = *(void (__fastcall **)(int, int, signed int))(a5 + 8);
  if ( v12 )
  {
    v12(v5 + 104, a5, 2);
    *(_DWORD *)(v5 + 116) = *(_DWORD *)(a5 + 12);
    *(_DWORD *)(v5 + 112) = *(_DWORD *)(a5 + 8);
  }
  v14 = 0;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(v5 + 120, (int)&v15, &v14);
  return v5;
}


int __fastcall OculusPostEntitlement::onComplete(OculusPostEntitlement *this)
{
  OculusPostEntitlement *v1; // r4@1
  int result; // r0@1
  void (__fastcall *v3)(char *, char *, signed int); // r3@2

  v1 = this;
  result = *((_DWORD *)this + 28);
  if ( result )
  {
    result = ((int (__fastcall *)(char *, _DWORD))*(_QWORD *)((char *)v1 + 116))(
               (char *)v1 + 104,
               *(_BYTE *)(*(_QWORD *)((char *)v1 + 116) >> 32));
    v3 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 28);
    if ( v3 )
    {
      v3((char *)v1 + 104, (char *)v1 + 104, 3);
      result = 0;
      *((_DWORD *)v1 + 28) = 0;
      *((_DWORD *)v1 + 29) = 0;
    }
  }
  return result;
}


RequestHandler *__fastcall OculusPostEntitlement::~OculusPostEntitlement(OculusPostEntitlement *this)
{
  OculusPostEntitlement *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  void (*v7)(void); // r3@15

  v1 = this;
  *(_DWORD *)this = &off_26E8520;
  v2 = *((_DWORD *)this + 31);
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
  v7 = (void (*)(void))*((_DWORD *)v1 + 28);
  if ( v7 )
    v7();
  OculusPostData::~OculusPostData((OculusPostEntitlement *)((char *)v1 + 60));
  return j_j_j__ZN14RequestHandlerD2Ev(v1);
}


void __fastcall OculusPostEntitlement::send(OculusPostEntitlement *this)
{
  OculusPostEntitlement::send(this);
}


void __fastcall OculusPostEntitlement::~OculusPostEntitlement(OculusPostEntitlement *this)
{
  OculusPostEntitlement *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  void (*v7)(void); // r3@15

  v1 = this;
  *(_DWORD *)this = &off_26E8520;
  v2 = *((_DWORD *)this + 31);
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
  v7 = (void (*)(void))*((_DWORD *)v1 + 28);
  if ( v7 )
    v7();
  OculusPostData::~OculusPostData((OculusPostEntitlement *)((char *)v1 + 60));
  RequestHandler::~RequestHandler(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall OculusPostEntitlement::~OculusPostEntitlement(OculusPostEntitlement *this)
{
  OculusPostEntitlement::~OculusPostEntitlement(this);
}
