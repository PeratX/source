

void __fastcall TradeScreenController::_registerCoalesceOrder(TradeScreenController *this)
{
  TradeScreenController *v1; // r8@1
  int v2; // r9@1
  int v3; // r0@1
  int v4; // r5@2
  int v5; // r7@2
  bool v6; // zf@3
  int v7; // r4@6
  bool v8; // zf@9
  int *v9; // r1@12
  _DWORD *v10; // r0@13
  int v11; // r9@16
  int v12; // r0@16
  int v13; // r5@17
  int v14; // r7@17
  bool v15; // zf@18
  int v16; // r4@21
  bool v17; // zf@24
  _DWORD *v18; // r0@28
  int *v19; // r1@29
  int v20; // r9@32
  int v21; // r0@32
  int v22; // r5@33
  int v23; // r7@33
  bool v24; // zf@34
  int v25; // r4@37
  bool v26; // zf@40
  _DWORD *v27; // r0@44
  int *v28; // r1@45
  int v29; // r9@48
  int v30; // r0@48
  int v31; // r5@49
  int v32; // r7@49
  bool v33; // zf@50
  int v34; // r4@53
  bool v35; // zf@56
  _DWORD *v36; // r0@60
  int *v37; // r1@61
  int v38; // r9@64
  int v39; // r0@64
  int v40; // r5@65
  int v41; // r7@65
  bool v42; // zf@66
  int v43; // r4@69
  bool v44; // zf@72
  _DWORD *v45; // r0@76
  unsigned __int64 *v46; // r8@77
  int v47; // r0@77
  int v48; // r9@77
  int v49; // r0@77
  int v50; // r5@78
  int v51; // r7@78
  bool v52; // zf@79
  int v53; // r4@82
  bool v54; // zf@85
  int *v55; // r1@88
  _DWORD *v56; // r0@89
  int v57; // r9@92
  int v58; // r0@92
  int v59; // r5@93
  int v60; // r7@93
  bool v61; // zf@94
  int v62; // r4@97
  bool v63; // zf@100
  _DWORD *v64; // r0@104
  int *v65; // r1@105
  int v66; // r9@108
  int v67; // r0@108
  int v68; // r5@109
  int v69; // r7@109
  bool v70; // zf@110
  int v71; // r4@113
  bool v72; // zf@116
  _DWORD *v73; // r0@120
  int *v74; // r1@121
  int v75; // r9@124
  int v76; // r0@124
  int v77; // r5@125
  int v78; // r7@125
  bool v79; // zf@126
  int v80; // r4@129
  bool v81; // zf@132
  _DWORD *v82; // r0@136
  int *v83; // r1@137
  int v84; // r9@140
  int v85; // r0@140
  int v86; // r5@141
  int v87; // r7@141
  bool v88; // zf@142
  int v89; // r4@145
  bool v90; // zf@148
  _DWORD *v91; // r0@152
  int v92; // r0@153
  int v93; // r9@153
  int v94; // r0@153
  int v95; // r5@154
  int v96; // r7@154
  bool v97; // zf@155
  int v98; // r4@158
  bool v99; // zf@161
  int *v100; // r1@164
  _DWORD *v101; // r0@165
  int v102; // r9@168
  int v103; // r0@168
  int v104; // r5@169
  int v105; // r7@169
  bool v106; // zf@170
  int v107; // r4@173
  bool v108; // zf@176
  _DWORD *v109; // r0@180
  int *v110; // r1@181
  int v111; // r9@184
  int v112; // r0@184
  int v113; // r5@185
  int v114; // r7@185
  bool v115; // zf@186
  int v116; // r4@189
  bool v117; // zf@192
  _DWORD *v118; // r0@196
  int *v119; // r1@197
  int v120; // r9@200
  int v121; // r0@200
  int v122; // r5@201
  int v123; // r7@201
  bool v124; // zf@202
  int v125; // r4@205
  bool v126; // zf@208
  _DWORD *v127; // r0@212
  int *v128; // r1@213
  int v129; // r9@216
  int v130; // r0@216
  int v131; // r5@217
  int v132; // r7@217
  bool v133; // zf@218
  int v134; // r4@221
  bool v135; // zf@224
  _DWORD *v136; // r0@228
  int v137; // r0@229
  int v138; // r9@229
  int v139; // r0@229
  int v140; // r5@230
  int v141; // r7@230
  bool v142; // zf@231
  int v143; // r4@234
  bool v144; // zf@237
  int *v145; // r1@240
  _DWORD *v146; // r0@241
  int v147; // r9@244
  int v148; // r0@244
  int v149; // r5@245
  int v150; // r7@245
  bool v151; // zf@246
  int v152; // r4@249
  bool v153; // zf@252
  _DWORD *v154; // r0@256
  int *v155; // r1@257
  int v156; // r9@260
  int v157; // r0@260
  int v158; // r5@261
  int v159; // r7@261
  bool v160; // zf@262
  int v161; // r4@265
  bool v162; // zf@268
  _DWORD *v163; // r0@272
  int *v164; // r1@273
  int v165; // r9@276
  int v166; // r0@276
  int v167; // r5@277
  int v168; // r7@277
  bool v169; // zf@278
  int v170; // r4@281
  bool v171; // zf@284
  _DWORD *v172; // r0@288
  int *v173; // r1@289
  int v174; // r9@292
  int v175; // r0@292
  int v176; // r5@293
  int v177; // r7@293
  bool v178; // zf@294
  int v179; // r4@297
  bool v180; // zf@300
  _DWORD *v181; // r0@304
  int v182; // r0@305
  int v183; // r9@305
  int v184; // r0@305
  int v185; // r5@306
  int v186; // r7@306
  bool v187; // zf@307
  int v188; // r4@310
  bool v189; // zf@313
  int *v190; // r1@316
  _DWORD *v191; // r0@317
  int v192; // r9@320
  int v193; // r0@320
  int v194; // r5@321
  int v195; // r7@321
  bool v196; // zf@322
  int v197; // r4@325
  bool v198; // zf@328
  _DWORD *v199; // r0@332
  int *v200; // r1@333
  int v201; // r9@336
  int v202; // r0@336
  int v203; // r5@337
  int v204; // r7@337
  bool v205; // zf@338
  int v206; // r4@341
  bool v207; // zf@344
  _DWORD *v208; // r0@348
  int *v209; // r1@349
  int v210; // r9@352
  int v211; // r0@352
  int v212; // r5@353
  int v213; // r7@353
  bool v214; // zf@354
  int v215; // r4@357
  bool v216; // zf@360
  _DWORD *v217; // r0@364
  int *v218; // r1@365
  int v219; // r9@368
  int v220; // r0@368
  int v221; // r5@369
  int v222; // r7@369
  bool v223; // zf@370
  int v224; // r4@373
  bool v225; // zf@376
  _DWORD *v226; // r0@380
  int v227; // r0@381
  int *v228; // r4@381
  int *v229; // r6@381
  unsigned int *v230; // r2@383
  signed int v231; // r1@385
  int *v232; // r0@391
  int *v233; // r4@396
  int *v234; // r6@396
  unsigned int *v235; // r2@398
  signed int v236; // r1@400
  int *v237; // r0@406
  int *v238; // r4@411
  int *v239; // r6@411
  unsigned int *v240; // r2@413
  signed int v241; // r1@415
  int *v242; // r0@421
  int *v243; // r4@426
  int *v244; // r6@426
  unsigned int *v245; // r2@428
  signed int v246; // r1@430
  int *v247; // r0@436
  int *v248; // r4@441
  int *v249; // r6@441
  unsigned int *v250; // r2@443
  signed int v251; // r1@445
  int *v252; // r0@451
  int *v253; // [sp+0h] [bp-60h]@305
  int *v254; // [sp+4h] [bp-5Ch]@305
  int *v255; // [sp+8h] [bp-58h]@305
  int *v256; // [sp+Ch] [bp-54h]@229
  int *v257; // [sp+10h] [bp-50h]@229
  int *v258; // [sp+14h] [bp-4Ch]@229
  int *v259; // [sp+18h] [bp-48h]@153
  int *v260; // [sp+1Ch] [bp-44h]@153
  int *v261; // [sp+20h] [bp-40h]@153
  int *v262; // [sp+24h] [bp-3Ch]@77
  int *v263; // [sp+28h] [bp-38h]@77
  int *v264; // [sp+2Ch] [bp-34h]@77
  int *v265; // [sp+30h] [bp-30h]@1
  int *v266; // [sp+34h] [bp-2Ch]@1
  int *v267; // [sp+38h] [bp-28h]@1

  v1 = this;
  v265 = 0;
  v266 = 0;
  v267 = 0;
  v2 = 0x18u % dword_27DDDBC;
  v3 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x18u % dword_27DDDBC));
  if ( v3 )
  {
    v4 = *(_DWORD *)v3;
    v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    while ( 1 )
    {
      v6 = v5 == 24;
      if ( v5 == 24 )
        v6 = *(_DWORD *)(v4 + 4) == 24;
      if ( v6 )
        break;
      v7 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 )
      {
        v5 = *(_DWORD *)(v7 + 12);
        v3 = v4;
        v4 = *(_DWORD *)v4;
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DDDBC == v2 )
          continue;
      }
      goto LABEL_13;
    }
    v8 = v3 == 0;
    if ( v3 )
      v3 = *(_DWORD *)v3;
      v8 = v3 == 0;
    if ( !v8 )
      v9 = (int *)(v3 + 8);
LABEL_15:
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)&v265,
        v9);
      goto LABEL_16;
  }
LABEL_13:
  v10 = operator new(0x10u);
  *v10 = 0;
  v10[1] = 24;
  v10[2] = &unk_28898CC;
  v9 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                 (int)&dword_27DDDB8,
                 v2,
                 0x18u,
                 (int)v10)
             + 8);
  if ( v266 == v267 )
    goto LABEL_15;
  sub_21E8AF4(v266, v9);
  ++v266;
LABEL_16:
  v11 = 0x1Du % dword_27DDDBC;
  v12 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Du % dword_27DDDBC));
  if ( !v12 )
    goto LABEL_28;
  v13 = *(_DWORD *)v12;
  v14 = *(_DWORD *)(*(_DWORD *)v12 + 12);
  while ( 1 )
    v15 = v14 == 29;
    if ( v14 == 29 )
      v15 = *(_DWORD *)(v13 + 4) == 29;
    if ( v15 )
      break;
    v16 = *(_DWORD *)v13;
    if ( *(_DWORD *)v13 )
      v14 = *(_DWORD *)(v16 + 12);
      v12 = v13;
      v13 = *(_DWORD *)v13;
      if ( *(_DWORD *)(v16 + 12) % (unsigned int)dword_27DDDBC == v11 )
        continue;
  v17 = v12 == 0;
  if ( v12 )
    v12 = *(_DWORD *)v12;
    v17 = v12 == 0;
  if ( v17 )
LABEL_28:
    v18 = operator new(0x10u);
    *v18 = 0;
    v18[1] = 29;
    v18[2] = &unk_28898CC;
    v12 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27DDDB8,
            v11,
            0x1Du,
            (int)v18);
  v19 = (int *)(v12 + 8);
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)&v265,
      v19);
  else
    sub_21E8AF4(v266, v19);
    ++v266;
  v20 = 0x1Eu % dword_27DDDBC;
  v21 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Eu % dword_27DDDBC));
  if ( !v21 )
    goto LABEL_44;
  v22 = *(_DWORD *)v21;
  v23 = *(_DWORD *)(*(_DWORD *)v21 + 12);
    v24 = v23 == 30;
    if ( v23 == 30 )
      v24 = *(_DWORD *)(v22 + 4) == 30;
    if ( v24 )
    v25 = *(_DWORD *)v22;
    if ( *(_DWORD *)v22 )
      v23 = *(_DWORD *)(v25 + 12);
      v21 = v22;
      v22 = *(_DWORD *)v22;
      if ( *(_DWORD *)(v25 + 12) % (unsigned int)dword_27DDDBC == v20 )
  v26 = v21 == 0;
  if ( v21 )
    v21 = *(_DWORD *)v21;
    v26 = v21 == 0;
  if ( v26 )
LABEL_44:
    v27 = operator new(0x10u);
    *v27 = 0;
    v27[1] = 30;
    v27[2] = &unk_28898CC;
    v21 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v20,
            0x1Eu,
            (int)v27);
  v28 = (int *)(v21 + 8);
      v28);
    sub_21E8AF4(v266, v28);
  v29 = 0x1Au % dword_27DDDBC;
  v30 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Au % dword_27DDDBC));
  if ( !v30 )
    goto LABEL_60;
  v31 = *(_DWORD *)v30;
  v32 = *(_DWORD *)(*(_DWORD *)v30 + 12);
    v33 = v32 == 26;
    if ( v32 == 26 )
      v33 = *(_DWORD *)(v31 + 4) == 26;
    if ( v33 )
    v34 = *(_DWORD *)v31;
    if ( *(_DWORD *)v31 )
      v32 = *(_DWORD *)(v34 + 12);
      v30 = v31;
      v31 = *(_DWORD *)v31;
      if ( *(_DWORD *)(v34 + 12) % (unsigned int)dword_27DDDBC == v29 )
  v35 = v30 == 0;
  if ( v30 )
    v30 = *(_DWORD *)v30;
    v35 = v30 == 0;
  if ( v35 )
LABEL_60:
    v36 = operator new(0x10u);
    *v36 = 0;
    v36[1] = 26;
    v36[2] = &unk_28898CC;
    v30 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v29,
            0x1Au,
            (int)v36);
  v37 = (int *)(v30 + 8);
      v37);
    sub_21E8AF4(v266, v37);
  v38 = 0x18u % dword_27DDDBC;
  v39 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x18u % dword_27DDDBC));
  if ( !v39 )
    goto LABEL_76;
  v40 = *(_DWORD *)v39;
  v41 = *(_DWORD *)(*(_DWORD *)v39 + 12);
    v42 = v41 == 24;
    if ( v41 == 24 )
      v42 = *(_DWORD *)(v40 + 4) == 24;
    if ( v42 )
    v43 = *(_DWORD *)v40;
    if ( *(_DWORD *)v40 )
      v41 = *(_DWORD *)(v43 + 12);
      v39 = v40;
      v40 = *(_DWORD *)v40;
      if ( *(_DWORD *)(v43 + 12) % (unsigned int)dword_27DDDBC == v38 )
  v44 = v39 == 0;
  if ( v39 )
    v39 = *(_DWORD *)v39;
    v44 = v39 == 0;
  if ( v44 )
LABEL_76:
    v45 = operator new(0x10u);
    *v45 = 0;
    v45[1] = 24;
    v45[2] = &unk_28898CC;
    v39 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v38,
            0x18u,
            (int)v45);
  v46 = (unsigned __int64 *)((char *)v1 + 572);
  v47 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v46,
          (int **)(v39 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v47, (unsigned __int64 *)&v265);
  v262 = 0;
  v263 = 0;
  v264 = 0;
  v48 = 0x1Au % dword_27DDDBC;
  v49 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Au % dword_27DDDBC));
  if ( v49 )
    v50 = *(_DWORD *)v49;
    v51 = *(_DWORD *)(*(_DWORD *)v49 + 12);
      v52 = v51 == 26;
      if ( v51 == 26 )
        v52 = *(_DWORD *)(v50 + 4) == 26;
      if ( v52 )
      v53 = *(_DWORD *)v50;
      if ( *(_DWORD *)v50 )
        v51 = *(_DWORD *)(v53 + 12);
        v49 = v50;
        v50 = *(_DWORD *)v50;
        if ( *(_DWORD *)(v53 + 12) % (unsigned int)dword_27DDDBC == v48 )
      goto LABEL_89;
    v54 = v49 == 0;
    if ( v49 )
      v49 = *(_DWORD *)v49;
      v54 = v49 == 0;
    if ( !v54 )
      v55 = (int *)(v49 + 8);
LABEL_91:
        (unsigned __int64 *)&v262,
        v55);
      goto LABEL_92;
LABEL_89:
  v56 = operator new(0x10u);
  *v56 = 0;
  v56[1] = 26;
  v56[2] = &unk_28898CC;
  v55 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27DDDB8,
                  v48,
                  0x1Au,
                  (int)v56)
              + 8);
  if ( v263 == v264 )
    goto LABEL_91;
  sub_21E8AF4(v263, v55);
  ++v263;
LABEL_92:
  v57 = 0x1Du % dword_27DDDBC;
  v58 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Du % dword_27DDDBC));
  if ( !v58 )
    goto LABEL_104;
  v59 = *(_DWORD *)v58;
  v60 = *(_DWORD *)(*(_DWORD *)v58 + 12);
    v61 = v60 == 29;
    if ( v60 == 29 )
      v61 = *(_DWORD *)(v59 + 4) == 29;
    if ( v61 )
    v62 = *(_DWORD *)v59;
    if ( *(_DWORD *)v59 )
      v60 = *(_DWORD *)(v62 + 12);
      v58 = v59;
      v59 = *(_DWORD *)v59;
      if ( *(_DWORD *)(v62 + 12) % (unsigned int)dword_27DDDBC == v57 )
  v63 = v58 == 0;
  if ( v58 )
    v58 = *(_DWORD *)v58;
    v63 = v58 == 0;
  if ( v63 )
LABEL_104:
    v64 = operator new(0x10u);
    *v64 = 0;
    v64[1] = 29;
    v64[2] = &unk_28898CC;
    v58 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v57,
            (int)v64);
  v65 = (int *)(v58 + 8);
      (unsigned __int64 *)&v262,
      v65);
    sub_21E8AF4(v263, v65);
    ++v263;
  v66 = 0x1Eu % dword_27DDDBC;
  v67 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Eu % dword_27DDDBC));
  if ( !v67 )
    goto LABEL_120;
  v68 = *(_DWORD *)v67;
  v69 = *(_DWORD *)(*(_DWORD *)v67 + 12);
    v70 = v69 == 30;
    if ( v69 == 30 )
      v70 = *(_DWORD *)(v68 + 4) == 30;
    if ( v70 )
    v71 = *(_DWORD *)v68;
    if ( *(_DWORD *)v68 )
      v69 = *(_DWORD *)(v71 + 12);
      v67 = v68;
      v68 = *(_DWORD *)v68;
      if ( *(_DWORD *)(v71 + 12) % (unsigned int)dword_27DDDBC == v66 )
  v72 = v67 == 0;
  if ( v67 )
    v67 = *(_DWORD *)v67;
    v72 = v67 == 0;
  if ( v72 )
LABEL_120:
    v73 = operator new(0x10u);
    *v73 = 0;
    v73[1] = 30;
    v73[2] = &unk_28898CC;
    v67 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v66,
            (int)v73);
  v74 = (int *)(v67 + 8);
      v74);
    sub_21E8AF4(v263, v74);
  v75 = 0x18u % dword_27DDDBC;
  v76 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x18u % dword_27DDDBC));
  if ( !v76 )
    goto LABEL_136;
  v77 = *(_DWORD *)v76;
  v78 = *(_DWORD *)(*(_DWORD *)v76 + 12);
    v79 = v78 == 24;
    if ( v78 == 24 )
      v79 = *(_DWORD *)(v77 + 4) == 24;
    if ( v79 )
    v80 = *(_DWORD *)v77;
    if ( *(_DWORD *)v77 )
      v78 = *(_DWORD *)(v80 + 12);
      v76 = v77;
      v77 = *(_DWORD *)v77;
      if ( *(_DWORD *)(v80 + 12) % (unsigned int)dword_27DDDBC == v75 )
  v81 = v76 == 0;
  if ( v76 )
    v76 = *(_DWORD *)v76;
    v81 = v76 == 0;
  if ( v81 )
LABEL_136:
    v82 = operator new(0x10u);
    *v82 = 0;
    v82[1] = 24;
    v82[2] = &unk_28898CC;
    v76 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v75,
            (int)v82);
  v83 = (int *)(v76 + 8);
      v83);
    sub_21E8AF4(v263, v83);
  v84 = 0x1Au % dword_27DDDBC;
  v85 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Au % dword_27DDDBC));
  if ( !v85 )
    goto LABEL_152;
  v86 = *(_DWORD *)v85;
  v87 = *(_DWORD *)(*(_DWORD *)v85 + 12);
    v88 = v87 == 26;
    if ( v87 == 26 )
      v88 = *(_DWORD *)(v86 + 4) == 26;
    if ( v88 )
    v89 = *(_DWORD *)v86;
    if ( *(_DWORD *)v86 )
      v87 = *(_DWORD *)(v89 + 12);
      v85 = v86;
      v86 = *(_DWORD *)v86;
      if ( *(_DWORD *)(v89 + 12) % (unsigned int)dword_27DDDBC == v84 )
  v90 = v85 == 0;
  if ( v85 )
    v85 = *(_DWORD *)v85;
    v90 = v85 == 0;
  if ( v90 )
LABEL_152:
    v91 = operator new(0x10u);
    *v91 = 0;
    v91[1] = 26;
    v91[2] = &unk_28898CC;
    v85 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v84,
            (int)v91);
  v92 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)(v85 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v92, (unsigned __int64 *)&v262);
  v259 = 0;
  v260 = 0;
  v261 = 0;
  v93 = 0x1Au % dword_27DDDBC;
  v94 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Au % dword_27DDDBC));
  if ( v94 )
    v95 = *(_DWORD *)v94;
    v96 = *(_DWORD *)(*(_DWORD *)v94 + 12);
      v97 = v96 == 26;
      if ( v96 == 26 )
        v97 = *(_DWORD *)(v95 + 4) == 26;
      if ( v97 )
      v98 = *(_DWORD *)v95;
      if ( *(_DWORD *)v95 )
        v96 = *(_DWORD *)(v98 + 12);
        v94 = v95;
        v95 = *(_DWORD *)v95;
        if ( *(_DWORD *)(v98 + 12) % (unsigned int)dword_27DDDBC == v93 )
      goto LABEL_165;
    v99 = v94 == 0;
    if ( v94 )
      v94 = *(_DWORD *)v94;
      v99 = v94 == 0;
    if ( !v99 )
      v100 = (int *)(v94 + 8);
LABEL_167:
        (unsigned __int64 *)&v259,
        v100);
      goto LABEL_168;
LABEL_165:
  v101 = operator new(0x10u);
  *v101 = 0;
  v101[1] = 26;
  v101[2] = &unk_28898CC;
  v100 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   (int)&dword_27DDDB8,
                   v93,
                   0x1Au,
                   (int)v101)
               + 8);
  if ( v260 == v261 )
    goto LABEL_167;
  sub_21E8AF4(v260, v100);
  ++v260;
LABEL_168:
  v102 = 0x1Du % dword_27DDDBC;
  v103 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Du % dword_27DDDBC));
  if ( !v103 )
    goto LABEL_180;
  v104 = *(_DWORD *)v103;
  v105 = *(_DWORD *)(*(_DWORD *)v103 + 12);
    v106 = v105 == 29;
    if ( v105 == 29 )
      v106 = *(_DWORD *)(v104 + 4) == 29;
    if ( v106 )
    v107 = *(_DWORD *)v104;
    if ( *(_DWORD *)v104 )
      v105 = *(_DWORD *)(v107 + 12);
      v103 = v104;
      v104 = *(_DWORD *)v104;
      if ( *(_DWORD *)(v107 + 12) % (unsigned int)dword_27DDDBC == v102 )
  v108 = v103 == 0;
  if ( v103 )
    v103 = *(_DWORD *)v103;
    v108 = v103 == 0;
  if ( v108 )
LABEL_180:
    v109 = operator new(0x10u);
    *v109 = 0;
    v109[1] = 29;
    v109[2] = &unk_28898CC;
    v103 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DDDB8,
             v102,
             0x1Du,
             (int)v109);
  v110 = (int *)(v103 + 8);
      (unsigned __int64 *)&v259,
      v110);
    sub_21E8AF4(v260, v110);
    ++v260;
  v111 = 0x1Eu % dword_27DDDBC;
  v112 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Eu % dword_27DDDBC));
  if ( !v112 )
    goto LABEL_196;
  v113 = *(_DWORD *)v112;
  v114 = *(_DWORD *)(*(_DWORD *)v112 + 12);
    v115 = v114 == 30;
    if ( v114 == 30 )
      v115 = *(_DWORD *)(v113 + 4) == 30;
    if ( v115 )
    v116 = *(_DWORD *)v113;
    if ( *(_DWORD *)v113 )
      v114 = *(_DWORD *)(v116 + 12);
      v112 = v113;
      v113 = *(_DWORD *)v113;
      if ( *(_DWORD *)(v116 + 12) % (unsigned int)dword_27DDDBC == v111 )
  v117 = v112 == 0;
  if ( v112 )
    v112 = *(_DWORD *)v112;
    v117 = v112 == 0;
  if ( v117 )
LABEL_196:
    v118 = operator new(0x10u);
    *v118 = 0;
    v118[1] = 30;
    v118[2] = &unk_28898CC;
    v112 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v111,
             0x1Eu,
             (int)v118);
  v119 = (int *)(v112 + 8);
      v119);
    sub_21E8AF4(v260, v119);
  v120 = 0x18u % dword_27DDDBC;
  v121 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x18u % dword_27DDDBC));
  if ( !v121 )
    goto LABEL_212;
  v122 = *(_DWORD *)v121;
  v123 = *(_DWORD *)(*(_DWORD *)v121 + 12);
    v124 = v123 == 24;
    if ( v123 == 24 )
      v124 = *(_DWORD *)(v122 + 4) == 24;
    if ( v124 )
    v125 = *(_DWORD *)v122;
    if ( *(_DWORD *)v122 )
      v123 = *(_DWORD *)(v125 + 12);
      v121 = v122;
      v122 = *(_DWORD *)v122;
      if ( *(_DWORD *)(v125 + 12) % (unsigned int)dword_27DDDBC == v120 )
  v126 = v121 == 0;
  if ( v121 )
    v121 = *(_DWORD *)v121;
    v126 = v121 == 0;
  if ( v126 )
LABEL_212:
    v127 = operator new(0x10u);
    *v127 = 0;
    v127[1] = 24;
    v127[2] = &unk_28898CC;
    v121 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v120,
             0x18u,
             (int)v127);
  v128 = (int *)(v121 + 8);
      v128);
    sub_21E8AF4(v260, v128);
  v129 = 0x1Du % dword_27DDDBC;
  v130 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Du % dword_27DDDBC));
  if ( !v130 )
    goto LABEL_228;
  v131 = *(_DWORD *)v130;
  v132 = *(_DWORD *)(*(_DWORD *)v130 + 12);
    v133 = v132 == 29;
    if ( v132 == 29 )
      v133 = *(_DWORD *)(v131 + 4) == 29;
    if ( v133 )
    v134 = *(_DWORD *)v131;
    if ( *(_DWORD *)v131 )
      v132 = *(_DWORD *)(v134 + 12);
      v130 = v131;
      v131 = *(_DWORD *)v131;
      if ( *(_DWORD *)(v134 + 12) % (unsigned int)dword_27DDDBC == v129 )
  v135 = v130 == 0;
  if ( v130 )
    v130 = *(_DWORD *)v130;
    v135 = v130 == 0;
  if ( v135 )
LABEL_228:
    v136 = operator new(0x10u);
    *v136 = 0;
    v136[1] = 29;
    v136[2] = &unk_28898CC;
    v130 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v129,
             (int)v136);
  v137 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           v46,
           (int **)(v130 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v137, (unsigned __int64 *)&v259);
  v256 = 0;
  v257 = 0;
  v258 = 0;
  v138 = 0x1Au % dword_27DDDBC;
  v139 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Au % dword_27DDDBC));
  if ( v139 )
    v140 = *(_DWORD *)v139;
    v141 = *(_DWORD *)(*(_DWORD *)v139 + 12);
      v142 = v141 == 26;
      if ( v141 == 26 )
        v142 = *(_DWORD *)(v140 + 4) == 26;
      if ( v142 )
      v143 = *(_DWORD *)v140;
      if ( *(_DWORD *)v140 )
        v141 = *(_DWORD *)(v143 + 12);
        v139 = v140;
        v140 = *(_DWORD *)v140;
        if ( *(_DWORD *)(v143 + 12) % (unsigned int)dword_27DDDBC == v138 )
      goto LABEL_241;
    v144 = v139 == 0;
    if ( v139 )
      v139 = *(_DWORD *)v139;
      v144 = v139 == 0;
    if ( !v144 )
      v145 = (int *)(v139 + 8);
LABEL_243:
        (unsigned __int64 *)&v256,
        v145);
      goto LABEL_244;
LABEL_241:
  v146 = operator new(0x10u);
  *v146 = 0;
  v146[1] = 26;
  v146[2] = &unk_28898CC;
  v145 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   v138,
                   (int)v146)
  if ( v257 == v258 )
    goto LABEL_243;
  sub_21E8AF4(v257, v145);
  ++v257;
LABEL_244:
  v147 = 0x1Du % dword_27DDDBC;
  v148 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Du % dword_27DDDBC));
  if ( !v148 )
    goto LABEL_256;
  v149 = *(_DWORD *)v148;
  v150 = *(_DWORD *)(*(_DWORD *)v148 + 12);
    v151 = v150 == 29;
    if ( v150 == 29 )
      v151 = *(_DWORD *)(v149 + 4) == 29;
    if ( v151 )
    v152 = *(_DWORD *)v149;
    if ( *(_DWORD *)v149 )
      v150 = *(_DWORD *)(v152 + 12);
      v148 = v149;
      v149 = *(_DWORD *)v149;
      if ( *(_DWORD *)(v152 + 12) % (unsigned int)dword_27DDDBC == v147 )
  v153 = v148 == 0;
  if ( v148 )
    v148 = *(_DWORD *)v148;
    v153 = v148 == 0;
  if ( v153 )
LABEL_256:
    v154 = operator new(0x10u);
    *v154 = 0;
    v154[1] = 29;
    v154[2] = &unk_28898CC;
    v148 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v147,
             (int)v154);
  v155 = (int *)(v148 + 8);
      (unsigned __int64 *)&v256,
      v155);
    sub_21E8AF4(v257, v155);
    ++v257;
  v156 = 0x1Eu % dword_27DDDBC;
  v157 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Eu % dword_27DDDBC));
  if ( !v157 )
    goto LABEL_272;
  v158 = *(_DWORD *)v157;
  v159 = *(_DWORD *)(*(_DWORD *)v157 + 12);
    v160 = v159 == 30;
    if ( v159 == 30 )
      v160 = *(_DWORD *)(v158 + 4) == 30;
    if ( v160 )
    v161 = *(_DWORD *)v158;
    if ( *(_DWORD *)v158 )
      v159 = *(_DWORD *)(v161 + 12);
      v157 = v158;
      v158 = *(_DWORD *)v158;
      if ( *(_DWORD *)(v161 + 12) % (unsigned int)dword_27DDDBC == v156 )
  v162 = v157 == 0;
  if ( v157 )
    v157 = *(_DWORD *)v157;
    v162 = v157 == 0;
  if ( v162 )
LABEL_272:
    v163 = operator new(0x10u);
    *v163 = 0;
    v163[1] = 30;
    v163[2] = &unk_28898CC;
    v157 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v156,
             (int)v163);
  v164 = (int *)(v157 + 8);
      v164);
    sub_21E8AF4(v257, v164);
  v165 = 0x18u % dword_27DDDBC;
  v166 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x18u % dword_27DDDBC));
  if ( !v166 )
    goto LABEL_288;
  v167 = *(_DWORD *)v166;
  v168 = *(_DWORD *)(*(_DWORD *)v166 + 12);
    v169 = v168 == 24;
    if ( v168 == 24 )
      v169 = *(_DWORD *)(v167 + 4) == 24;
    if ( v169 )
    v170 = *(_DWORD *)v167;
    if ( *(_DWORD *)v167 )
      v168 = *(_DWORD *)(v170 + 12);
      v166 = v167;
      v167 = *(_DWORD *)v167;
      if ( *(_DWORD *)(v170 + 12) % (unsigned int)dword_27DDDBC == v165 )
  v171 = v166 == 0;
  if ( v166 )
    v166 = *(_DWORD *)v166;
    v171 = v166 == 0;
  if ( v171 )
LABEL_288:
    v172 = operator new(0x10u);
    *v172 = 0;
    v172[1] = 24;
    v172[2] = &unk_28898CC;
    v166 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v165,
             (int)v172);
  v173 = (int *)(v166 + 8);
      v173);
    sub_21E8AF4(v257, v173);
  v174 = 0x1Eu % dword_27DDDBC;
  v175 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Eu % dword_27DDDBC));
  if ( !v175 )
    goto LABEL_304;
  v176 = *(_DWORD *)v175;
  v177 = *(_DWORD *)(*(_DWORD *)v175 + 12);
    v178 = v177 == 30;
    if ( v177 == 30 )
      v178 = *(_DWORD *)(v176 + 4) == 30;
    if ( v178 )
    v179 = *(_DWORD *)v176;
    if ( *(_DWORD *)v176 )
      v177 = *(_DWORD *)(v179 + 12);
      v175 = v176;
      v176 = *(_DWORD *)v176;
      if ( *(_DWORD *)(v179 + 12) % (unsigned int)dword_27DDDBC == v174 )
  v180 = v175 == 0;
  if ( v175 )
    v175 = *(_DWORD *)v175;
    v180 = v175 == 0;
  if ( v180 )
LABEL_304:
    v181 = operator new(0x10u);
    *v181 = 0;
    v181[1] = 30;
    v181[2] = &unk_28898CC;
    v175 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v174,
             (int)v181);
  v182 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v175 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v182, (unsigned __int64 *)&v256);
  v253 = 0;
  v254 = 0;
  v255 = 0;
  v183 = 0x1Au % dword_27DDDBC;
  v184 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Au % dword_27DDDBC));
  if ( v184 )
    v185 = *(_DWORD *)v184;
    v186 = *(_DWORD *)(*(_DWORD *)v184 + 12);
      v187 = v186 == 26;
      if ( v186 == 26 )
        v187 = *(_DWORD *)(v185 + 4) == 26;
      if ( v187 )
      v188 = *(_DWORD *)v185;
      if ( *(_DWORD *)v185 )
        v186 = *(_DWORD *)(v188 + 12);
        v184 = v185;
        v185 = *(_DWORD *)v185;
        if ( *(_DWORD *)(v188 + 12) % (unsigned int)dword_27DDDBC == v183 )
      goto LABEL_317;
    v189 = v184 == 0;
    if ( v184 )
      v184 = *(_DWORD *)v184;
      v189 = v184 == 0;
    if ( !v189 )
      v190 = (int *)(v184 + 8);
LABEL_319:
        (unsigned __int64 *)&v253,
        v190);
      goto LABEL_320;
LABEL_317:
  v191 = operator new(0x10u);
  *v191 = 0;
  v191[1] = 26;
  v191[2] = &unk_28898CC;
  v190 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   v183,
                   (int)v191)
  if ( v254 == v255 )
    goto LABEL_319;
  sub_21E8AF4(v254, v190);
  ++v254;
LABEL_320:
  v192 = 0x1Du % dword_27DDDBC;
  v193 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Du % dword_27DDDBC));
  if ( !v193 )
    goto LABEL_332;
  v194 = *(_DWORD *)v193;
  v195 = *(_DWORD *)(*(_DWORD *)v193 + 12);
    v196 = v195 == 29;
    if ( v195 == 29 )
      v196 = *(_DWORD *)(v194 + 4) == 29;
    if ( v196 )
    v197 = *(_DWORD *)v194;
    if ( *(_DWORD *)v194 )
      v195 = *(_DWORD *)(v197 + 12);
      v193 = v194;
      v194 = *(_DWORD *)v194;
      if ( *(_DWORD *)(v197 + 12) % (unsigned int)dword_27DDDBC == v192 )
  v198 = v193 == 0;
  if ( v193 )
    v193 = *(_DWORD *)v193;
    v198 = v193 == 0;
  if ( v198 )
LABEL_332:
    v199 = operator new(0x10u);
    *v199 = 0;
    v199[1] = 29;
    v199[2] = &unk_28898CC;
    v193 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v192,
             (int)v199);
  v200 = (int *)(v193 + 8);
      (unsigned __int64 *)&v253,
      v200);
    sub_21E8AF4(v254, v200);
    ++v254;
  v201 = 0x1Eu % dword_27DDDBC;
  v202 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Eu % dword_27DDDBC));
  if ( !v202 )
    goto LABEL_348;
  v203 = *(_DWORD *)v202;
  v204 = *(_DWORD *)(*(_DWORD *)v202 + 12);
    v205 = v204 == 30;
    if ( v204 == 30 )
      v205 = *(_DWORD *)(v203 + 4) == 30;
    if ( v205 )
    v206 = *(_DWORD *)v203;
    if ( *(_DWORD *)v203 )
      v204 = *(_DWORD *)(v206 + 12);
      v202 = v203;
      v203 = *(_DWORD *)v203;
      if ( *(_DWORD *)(v206 + 12) % (unsigned int)dword_27DDDBC == v201 )
  v207 = v202 == 0;
  if ( v202 )
    v202 = *(_DWORD *)v202;
    v207 = v202 == 0;
  if ( v207 )
LABEL_348:
    v208 = operator new(0x10u);
    *v208 = 0;
    v208[1] = 30;
    v208[2] = &unk_28898CC;
    v202 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v201,
             (int)v208);
  v209 = (int *)(v202 + 8);
      v209);
    sub_21E8AF4(v254, v209);
  v210 = 0x18u % dword_27DDDBC;
  v211 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x18u % dword_27DDDBC));
  if ( !v211 )
    goto LABEL_364;
  v212 = *(_DWORD *)v211;
  v213 = *(_DWORD *)(*(_DWORD *)v211 + 12);
    v214 = v213 == 24;
    if ( v213 == 24 )
      v214 = *(_DWORD *)(v212 + 4) == 24;
    if ( v214 )
    v215 = *(_DWORD *)v212;
    if ( *(_DWORD *)v212 )
      v213 = *(_DWORD *)(v215 + 12);
      v211 = v212;
      v212 = *(_DWORD *)v212;
      if ( *(_DWORD *)(v215 + 12) % (unsigned int)dword_27DDDBC == v210 )
  v216 = v211 == 0;
  if ( v211 )
    v211 = *(_DWORD *)v211;
    v216 = v211 == 0;
  if ( v216 )
LABEL_364:
    v217 = operator new(0x10u);
    *v217 = 0;
    v217[1] = 24;
    v217[2] = &unk_28898CC;
    v211 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v210,
             (int)v217);
  v218 = (int *)(v211 + 8);
      v218);
    sub_21E8AF4(v254, v218);
  v219 = 0x1Fu % dword_27DDDBC;
  v220 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Fu % dword_27DDDBC));
  if ( !v220 )
    goto LABEL_380;
  v221 = *(_DWORD *)v220;
  v222 = *(_DWORD *)(*(_DWORD *)v220 + 12);
    v223 = v222 == 31;
    if ( v222 == 31 )
      v223 = *(_DWORD *)(v221 + 4) == 31;
    if ( v223 )
    v224 = *(_DWORD *)v221;
    if ( *(_DWORD *)v221 )
      v222 = *(_DWORD *)(v224 + 12);
      v220 = v221;
      v221 = *(_DWORD *)v221;
      if ( *(_DWORD *)(v224 + 12) % (unsigned int)dword_27DDDBC == v219 )
  v225 = v220 == 0;
  if ( v220 )
    v220 = *(_DWORD *)v220;
    v225 = v220 == 0;
  if ( v225 )
LABEL_380:
    v226 = operator new(0x10u);
    *v226 = 0;
    v226[1] = 31;
    v226[2] = &unk_28898CC;
    v220 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v219,
             0x1Fu,
             (int)v226);
  v227 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v220 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v227, (unsigned __int64 *)&v253);
  v229 = v254;
  v228 = v253;
  if ( v253 != v254 )
    do
      v232 = (int *)(*v228 - 12);
      if ( v232 != &dword_28898C0 )
        v230 = (unsigned int *)(*v228 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v231 = __ldrex(v230);
          while ( __strex(v231 - 1, v230) );
        }
        else
          v231 = (*v230)--;
        if ( v231 <= 0 )
          j_j_j_j__ZdlPv_9(v232);
      ++v228;
    while ( v228 != v229 );
    v228 = v253;
  if ( v228 )
    operator delete(v228);
  v234 = v257;
  v233 = v256;
  if ( v256 != v257 )
      v237 = (int *)(*v233 - 12);
      if ( v237 != &dword_28898C0 )
        v235 = (unsigned int *)(*v233 - 4);
            v236 = __ldrex(v235);
          while ( __strex(v236 - 1, v235) );
          v236 = (*v235)--;
        if ( v236 <= 0 )
          j_j_j_j__ZdlPv_9(v237);
      ++v233;
    while ( v233 != v234 );
    v233 = v256;
  if ( v233 )
    operator delete(v233);
  v239 = v260;
  v238 = v259;
  if ( v259 != v260 )
      v242 = (int *)(*v238 - 12);
      if ( v242 != &dword_28898C0 )
        v240 = (unsigned int *)(*v238 - 4);
            v241 = __ldrex(v240);
          while ( __strex(v241 - 1, v240) );
          v241 = (*v240)--;
        if ( v241 <= 0 )
          j_j_j_j__ZdlPv_9(v242);
      ++v238;
    while ( v238 != v239 );
    v238 = v259;
  if ( v238 )
    operator delete(v238);
  v244 = v263;
  v243 = v262;
  if ( v262 != v263 )
      v247 = (int *)(*v243 - 12);
      if ( v247 != &dword_28898C0 )
        v245 = (unsigned int *)(*v243 - 4);
            v246 = __ldrex(v245);
          while ( __strex(v246 - 1, v245) );
          v246 = (*v245)--;
        if ( v246 <= 0 )
          j_j_j_j__ZdlPv_9(v247);
      ++v243;
    while ( v243 != v244 );
    v243 = v262;
  if ( v243 )
    operator delete(v243);
  v249 = v266;
  v248 = v265;
  if ( v265 != v266 )
      v252 = (int *)(*v248 - 12);
      if ( v252 != &dword_28898C0 )
        v250 = (unsigned int *)(*v248 - 4);
            v251 = __ldrex(v250);
          while ( __strex(v251 - 1, v250) );
          v251 = (*v250)--;
        if ( v251 <= 0 )
          j_j_j_j__ZdlPv_9(v252);
      ++v248;
    while ( v248 != v249 );
    v248 = v265;
  if ( v248 )
    operator delete(v248);
}


void __fastcall TradeScreenController::~TradeScreenController(TradeScreenController *this)
{
  ContainerScreenController *v1; // r0@1

  v1 = TradeScreenController::~TradeScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall TradeScreenController::~TradeScreenController(TradeScreenController *this)
{
  TradeScreenController::~TradeScreenController(this);
}


void __fastcall TradeScreenController::_registerEventHandlers(TradeScreenController *this)
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
  sub_21E94B4((void **)&v19, "button.cycle_recipe_left");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v19);
  v3 = operator new(4u);
  LODWORD(v4) = sub_1275A70;
  *v3 = v1;
  HIDWORD(v4) = sub_1275A50;
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
  sub_21E94B4((void **)&v16, "button.cycle_recipe_right");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v16);
  v7 = operator new(4u);
  LODWORD(v8) = sub_1275AD0;
  *v7 = v1;
  HIDWORD(v8) = sub_1275AA6;
  v14 = v7;
  v15 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v14);
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


signed int __fastcall TradeScreenController::_isStillValid(TradeScreenController *this)
{
  TradeScreenController *v1; // r4@1
  int v2; // r5@2
  int (__fastcall *v3)(int, int); // r6@2
  int v4; // r0@2
  signed int result; // r0@3

  v1 = this;
  if ( MinecraftScreenModel::isPlayerValid(*((MinecraftScreenModel **)this + 106)) != 1
    || (v2 = *((_DWORD *)v1 + 159),
        v3 = *(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 60),
        v4 = ClientInstanceScreenModel::getPickRange(*((ClientInstanceScreenModel **)v1 + 106)),
        v3(v2, v4) != 1) )
  {
    result = 0;
  }
  else
    result = ContainerScreenController::_isStillValid(v1);
  return result;
}


int __fastcall TradeScreenController::TradeScreenController(int a1, int a2, __int64 a3, int a4)
{
  int v4; // r4@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  unsigned int *v8; // r1@7
  int v9; // r5@7
  unsigned int v10; // r0@10
  unsigned int *v11; // r6@14
  unsigned int v12; // r0@16
  __int64 v13; // r0@21
  int v14; // r5@21
  unsigned int *v15; // r1@22
  unsigned int v16; // r0@24
  unsigned int *v17; // r6@28
  unsigned int v18; // r0@30
  int v19; // r5@35
  unsigned int *v20; // r1@36
  unsigned int v21; // r0@38
  unsigned int *v22; // r6@42
  unsigned int v23; // r0@44
  int v25; // [sp+0h] [bp-30h]@21
  int v26; // [sp+4h] [bp-2Ch]@21
  int v27; // [sp+8h] [bp-28h]@1
  int v28; // [sp+Ch] [bp-24h]@1
  __int64 v29; // [sp+10h] [bp-20h]@1

  v29 = a3;
  v4 = a1;
  v27 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  v28 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  ContainerScreenController::ContainerScreenController(v4, (int)&v27, a4);
  v9 = v28;
  if ( v28 )
    v8 = (unsigned int *)(v28 + 4);
        v10 = __ldrex(v8);
      while ( __strex(v10 - 1, v8) );
      v10 = (*v8)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
        {
          v12 = __ldrex(v11);
          v8 = (unsigned int *)(v12 - 1);
        }
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = *v11;
        v8 = (unsigned int *)(*v11 - 1);
        *v11 = (unsigned int)v8;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  *(_DWORD *)v4 = &off_26E3BCC;
  *(_DWORD *)(v4 + 628) = 0;
  *(_DWORD *)(v4 + 632) = 0;
  *(_DWORD *)(v4 + 636) = 0;
  *(_DWORD *)(v4 + 640) = 0;
  ContainerScreenController::setAssociatedEntityUniqueID(v4, (int)v8, v29);
  ContainerScreenController::createContainerManagerController<TradeContainerManagerModel,TradeContainerManagerController,EntityUniqueID const&>(
    (int)&v25,
    v4,
    &v29);
  v13 = *(_QWORD *)&v25;
  v25 = 0;
  v26 = 0;
  *(_DWORD *)(v4 + 636) = v13;
  v14 = *(_DWORD *)(v4 + 640);
  *(_DWORD *)(v4 + 640) = HIDWORD(v13);
  if ( v14 )
    v15 = (unsigned int *)(v14 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v19 = v26;
  if ( v26 )
    v20 = (unsigned int *)(v26 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  *(_DWORD *)(v4 + 632) = TradeContainerManagerController::getRecipeListSize(*(TradeContainerManagerController **)(v4 + 636));
  TradeContainerManagerController::setRecipeIndex(
    *(TradeContainerManagerController **)(v4 + 636),
    *(_DWORD *)(v4 + 628));
  TradeScreenController::_registerEventHandlers((TradeScreenController *)v4);
  TradeScreenController::_registerBindings((TradeScreenController *)v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 152))(v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 156))(v4);
  return v4;
}


ContainerScreenController *__fastcall TradeScreenController::~TradeScreenController(TradeScreenController *this)
{
  TradeScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26E3BCC;
  (*(void (**)(void))(**((_DWORD **)this + 159) + 48))();
  v2 = *((_DWORD *)v1 + 160);
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
  return j_j_j__ZN25ContainerScreenControllerD2Ev_0(v1);
}


void __fastcall TradeScreenController::_registerEventHandlers(TradeScreenController *this)
{
  TradeScreenController::_registerEventHandlers(this);
}


void __fastcall TradeScreenController::_registerCoalesceOrder(TradeScreenController *this)
{
  TradeScreenController::_registerCoalesceOrder(this);
}


void __fastcall TradeScreenController::_setOfferDetails(TradeScreenController *this)
{
  j_j_j__ZN31TradeContainerManagerController14setRecipeIndexEi(
    *((TradeContainerManagerController **)this + 159),
    *((_DWORD *)this + 157));
}


void __fastcall TradeScreenController::_registerAutoPlaceOrder(TradeScreenController *this)
{
  TradeScreenController::_registerAutoPlaceOrder(this);
}


void __fastcall TradeScreenController::_registerBindings(TradeScreenController *this)
{
  __int64 v1; // r6@1
  TradeScreenController *v2; // r4@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  __int64 v5; // r1@1
  _DWORD *v6; // r0@5
  __int64 v7; // r1@5
  __int64 v8; // r1@5
  _DWORD *v9; // r0@9
  __int64 v10; // r1@9
  __int64 v11; // r1@9
  _DWORD *v12; // r0@13
  __int64 v13; // r1@13
  __int64 v14; // r1@13
  _DWORD *v15; // r0@17
  __int64 v16; // r1@17
  __int64 v17; // r1@17
  _DWORD *v18; // r0@21
  __int64 v19; // r1@21
  __int64 v20; // r1@21
  _DWORD *v21; // r0@25
  __int64 v22; // r1@25
  __int64 v23; // r1@25
  _DWORD *v24; // r0@29
  __int64 v25; // r1@29
  __int64 v26; // r1@29
  _DWORD *v27; // r0@33
  __int64 v28; // r1@33
  __int64 v29; // r1@33
  _DWORD *v30; // r0@37
  __int64 v31; // r1@37
  __int64 v32; // r1@37
  _DWORD *v33; // r0@41
  __int64 v34; // r1@41
  __int64 v35; // r1@41
  _DWORD *v36; // r0@45
  __int64 v37; // r1@45
  __int64 v38; // r1@45
  _DWORD *v39; // r0@49
  __int64 v40; // r1@49
  __int64 v41; // r1@49
  _DWORD *v42; // r0@53
  __int64 v43; // r1@53
  __int64 v44; // r1@53
  _DWORD *v45; // r0@57
  __int64 v46; // r1@57
  __int64 v47; // r1@57
  _DWORD *v48; // r0@61
  __int64 v49; // r1@61
  __int64 v50; // r1@61
  _DWORD *v51; // r0@65
  __int64 v52; // r1@65
  __int64 v53; // r1@65
  void *v54; // [sp+4h] [bp-2ACh]@65
  __int64 v55; // [sp+Ch] [bp-2A4h]@65
  _DWORD *v56; // [sp+14h] [bp-29Ch]@65
  __int64 v57; // [sp+1Ch] [bp-294h]@65
  int v58; // [sp+24h] [bp-28Ch]@65
  void *v59; // [sp+28h] [bp-288h]@61
  __int64 v60; // [sp+30h] [bp-280h]@61
  _DWORD *v61; // [sp+38h] [bp-278h]@61
  __int64 v62; // [sp+40h] [bp-270h]@61
  int v63; // [sp+48h] [bp-268h]@61
  void *v64; // [sp+4Ch] [bp-264h]@57
  __int64 v65; // [sp+54h] [bp-25Ch]@57
  _DWORD *v66; // [sp+5Ch] [bp-254h]@57
  __int64 v67; // [sp+64h] [bp-24Ch]@57
  int v68; // [sp+6Ch] [bp-244h]@57
  void *v69; // [sp+70h] [bp-240h]@53
  __int64 v70; // [sp+78h] [bp-238h]@53
  _DWORD *v71; // [sp+80h] [bp-230h]@53
  __int64 v72; // [sp+88h] [bp-228h]@53
  int v73; // [sp+90h] [bp-220h]@53
  void *v74; // [sp+94h] [bp-21Ch]@49
  __int64 v75; // [sp+9Ch] [bp-214h]@49
  _DWORD *v76; // [sp+A4h] [bp-20Ch]@49
  __int64 v77; // [sp+ACh] [bp-204h]@49
  int v78; // [sp+B4h] [bp-1FCh]@49
  int v79; // [sp+B8h] [bp-1F8h]@49
  void *v80; // [sp+BCh] [bp-1F4h]@45
  __int64 v81; // [sp+C4h] [bp-1ECh]@45
  _DWORD *v82; // [sp+CCh] [bp-1E4h]@45
  __int64 v83; // [sp+D4h] [bp-1DCh]@45
  int v84; // [sp+DCh] [bp-1D4h]@45
  void *v85; // [sp+E0h] [bp-1D0h]@41
  __int64 v86; // [sp+E8h] [bp-1C8h]@41
  _DWORD *v87; // [sp+F0h] [bp-1C0h]@41
  __int64 v88; // [sp+F8h] [bp-1B8h]@41
  int v89; // [sp+100h] [bp-1B0h]@41
  int v90; // [sp+104h] [bp-1ACh]@41
  void *v91; // [sp+108h] [bp-1A8h]@37
  __int64 v92; // [sp+110h] [bp-1A0h]@37
  _DWORD *v93; // [sp+118h] [bp-198h]@37
  __int64 v94; // [sp+120h] [bp-190h]@37
  int v95; // [sp+128h] [bp-188h]@37
  int v96; // [sp+12Ch] [bp-184h]@37
  void *v97; // [sp+130h] [bp-180h]@33
  __int64 v98; // [sp+138h] [bp-178h]@33
  _DWORD *v99; // [sp+140h] [bp-170h]@33
  __int64 v100; // [sp+148h] [bp-168h]@33
  int v101; // [sp+150h] [bp-160h]@33
  int v102; // [sp+154h] [bp-15Ch]@33
  void *v103; // [sp+158h] [bp-158h]@29
  __int64 v104; // [sp+160h] [bp-150h]@29
  _DWORD *v105; // [sp+168h] [bp-148h]@29
  __int64 v106; // [sp+170h] [bp-140h]@29
  __int64 v107; // [sp+178h] [bp-138h]@29
  void *v108; // [sp+180h] [bp-130h]@25
  __int64 v109; // [sp+188h] [bp-128h]@25
  _DWORD *v110; // [sp+190h] [bp-120h]@25
  __int64 v111; // [sp+198h] [bp-118h]@25
  int v112; // [sp+1A0h] [bp-110h]@25
  int v113; // [sp+1A4h] [bp-10Ch]@25
  void *v114; // [sp+1A8h] [bp-108h]@21
  __int64 v115; // [sp+1B0h] [bp-100h]@21
  _DWORD *v116; // [sp+1B8h] [bp-F8h]@21
  __int64 v117; // [sp+1C0h] [bp-F0h]@21
  int v118; // [sp+1C8h] [bp-E8h]@21
  int v119; // [sp+1CCh] [bp-E4h]@21
  void *v120; // [sp+1D0h] [bp-E0h]@17
  __int64 v121; // [sp+1D8h] [bp-D8h]@17
  _DWORD *v122; // [sp+1E0h] [bp-D0h]@17
  __int64 v123; // [sp+1E8h] [bp-C8h]@17
  __int64 v124; // [sp+1F0h] [bp-C0h]@17
  void *v125; // [sp+1F8h] [bp-B8h]@13
  __int64 v126; // [sp+200h] [bp-B0h]@13
  _DWORD *v127; // [sp+208h] [bp-A8h]@13
  __int64 v128; // [sp+210h] [bp-A0h]@13
  int v129; // [sp+218h] [bp-98h]@13
  int v130; // [sp+21Ch] [bp-94h]@13
  void *v131; // [sp+220h] [bp-90h]@9
  __int64 v132; // [sp+228h] [bp-88h]@9
  _DWORD *v133; // [sp+230h] [bp-80h]@9
  __int64 v134; // [sp+238h] [bp-78h]@9
  int v135; // [sp+240h] [bp-70h]@9
  int v136; // [sp+244h] [bp-6Ch]@9
  void *v137; // [sp+248h] [bp-68h]@5
  __int64 v138; // [sp+250h] [bp-60h]@5
  _DWORD *v139; // [sp+258h] [bp-58h]@5
  __int64 v140; // [sp+260h] [bp-50h]@5
  __int64 v141; // [sp+268h] [bp-48h]@5
  void *v142; // [sp+270h] [bp-40h]@1
  __int64 v143; // [sp+278h] [bp-38h]@1
  _DWORD *v144; // [sp+280h] [bp-30h]@1
  __int64 v145; // [sp+288h] [bp-28h]@1
  int v146; // [sp+290h] [bp-20h]@1
  int v147; // [sp+294h] [bp-1Ch]@1

  LODWORD(v1) = 423569454;
  v2 = this;
  v147 = 188416121;
  v146 = 423569454;
  v3 = operator new(4u);
  LODWORD(v4) = sub_1275B24;
  *v3 = v2;
  HIDWORD(v4) = sub_1275B06;
  v144 = v3;
  v145 = v4;
  v142 = operator new(1u);
  LODWORD(v5) = ZNSt14_Function_base13_Base_managerIZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v5) = ZNSt17_Function_handlerIFbiEZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v143 = v5;
  ScreenController::bindIntForCollection((int)v2, &v147, &v146, (int)&v144, (int)&v142);
  if ( (_DWORD)v143 )
    ((void (*)(void))v143)();
  if ( (_DWORD)v145 )
    ((void (*)(void))v145)();
  HIDWORD(v1) = 138083264;
  v141 = v1;
  v6 = operator new(4u);
  LODWORD(v7) = sub_1275B8A;
  *v6 = v2;
  HIDWORD(v7) = sub_1275B5A;
  v139 = v6;
  v140 = v7;
  v137 = operator new(1u);
  LODWORD(v8) = ZNSt14_Function_base13_Base_managerIZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v8) = ZNSt17_Function_handlerIFbiEZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v138 = v8;
  ScreenController::bindIntForCollection((int)v2, (int *)&v141 + 1, (int *)&v141, (int)&v139, (int)&v137);
  if ( (_DWORD)v138 )
    ((void (*)(void))v138)();
  if ( (_DWORD)v140 )
    ((void (*)(void))v140)();
  v135 = 423569454;
  v136 = 916909965;
  v9 = operator new(4u);
  LODWORD(v10) = sub_1275BDE;
  *v9 = v2;
  HIDWORD(v10) = sub_1275BC0;
  v133 = v9;
  v134 = v10;
  v131 = operator new(1u);
  LODWORD(v11) = ZNSt14_Function_base13_Base_managerIZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v11) = ZNSt17_Function_handlerIFbiEZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v132 = v11;
  ScreenController::bindIntForCollection((int)v2, &v136, &v135, (int)&v133, (int)&v131);
  if ( (_DWORD)v132 )
    ((void (*)(void))v132)();
  if ( (_DWORD)v134 )
    ((void (*)(void))v134)();
  LODWORD(v1) = -698569618;
  v130 = 188416121;
  v129 = -698569618;
  v12 = operator new(4u);
  LODWORD(v13) = sub_1275C5C;
  *v12 = v2;
  HIDWORD(v13) = sub_1275C14;
  v127 = v12;
  v128 = v13;
  v125 = operator new(1u);
  LODWORD(v14) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v14) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v126 = v14;
  ScreenController::bindStringForCollection((int)v2, &v130, &v129, (int)&v127, (int)&v125);
  if ( (_DWORD)v126 )
    ((void (*)(void))v126)();
  if ( (_DWORD)v128 )
    ((void (*)(void))v128)();
  v124 = v1;
  v15 = operator new(4u);
  LODWORD(v16) = sub_1275CE8;
  *v15 = v2;
  HIDWORD(v16) = sub_1275C94;
  v122 = v15;
  v123 = v16;
  v120 = operator new(1u);
  LODWORD(v17) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v17) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v121 = v17;
  ScreenController::bindStringForCollection((int)v2, (int *)&v124 + 1, (int *)&v124, (int)&v122, (int)&v120);
  if ( (_DWORD)v121 )
    ((void (*)(void))v121)();
  if ( (_DWORD)v123 )
    ((void (*)(void))v123)();
  v118 = -698569618;
  v119 = 916909965;
  v18 = operator new(4u);
  LODWORD(v19) = sub_1275D68;
  *v18 = v2;
  HIDWORD(v19) = sub_1275D20;
  v116 = v18;
  v117 = v19;
  v114 = operator new(1u);
  LODWORD(v20) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v20) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v115 = v20;
  ScreenController::bindStringForCollection((int)v2, &v119, &v118, (int)&v116, (int)&v114);
  if ( (_DWORD)v115 )
    ((void (*)(void))v115)();
  if ( (_DWORD)v117 )
    ((void (*)(void))v117)();
  LODWORD(v1) = -495754686;
  v113 = 188416121;
  v112 = -495754686;
  v21 = operator new(4u);
  LODWORD(v22) = sub_1275E78;
  *v21 = v2;
  HIDWORD(v22) = sub_1275DA0;
  v110 = v21;
  v111 = v22;
  v108 = operator new(1u);
  LODWORD(v23) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v23) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v109 = v23;
  ScreenController::bindStringForCollection((int)v2, &v113, &v112, (int)&v110, (int)&v108);
  if ( (_DWORD)v109 )
    ((void (*)(void))v109)();
  if ( (_DWORD)v111 )
    ((void (*)(void))v111)();
  v107 = v1;
  v24 = operator new(4u);
  LODWORD(v25) = sub_1275FAC;
  *v24 = v2;
  HIDWORD(v25) = sub_1275EB0;
  v105 = v24;
  v106 = v25;
  v103 = operator new(1u);
  LODWORD(v26) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v26) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v104 = v26;
  ScreenController::bindStringForCollection((int)v2, (int *)&v107 + 1, (int *)&v107, (int)&v105, (int)&v103);
  if ( (_DWORD)v104 )
    ((void (*)(void))v104)();
  if ( (_DWORD)v106 )
    ((void (*)(void))v106)();
  v101 = -495754686;
  v102 = 916909965;
  v27 = operator new(4u);
  LODWORD(v28) = sub_127601C;
  *v27 = v2;
  HIDWORD(v28) = sub_1275FE2;
  v99 = v27;
  v100 = v28;
  v97 = operator new(1u);
  LODWORD(v29) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v29) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v98 = v29;
  ScreenController::bindStringForCollection((int)v2, &v102, &v101, (int)&v99, (int)&v97);
  if ( (_DWORD)v98 )
    ((void (*)(void))v98)();
  if ( (_DWORD)v100 )
    ((void (*)(void))v100)();
  v96 = 916909965;
  v95 = 1333042751;
  v30 = operator new(4u);
  LODWORD(v31) = sub_12761FC;
  *v30 = v2;
  HIDWORD(v31) = sub_1276054;
  v93 = v30;
  v94 = v31;
  v91 = operator new(1u);
  LODWORD(v32) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v32) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v92 = v32;
  ScreenController::bindBoolForCollection((int)v2, &v96, &v95, (int)&v93, (int)&v91);
  if ( (_DWORD)v92 )
    ((void (*)(void))v92)();
  if ( (_DWORD)v94 )
    ((void (*)(void))v94)();
  v89 = -495754686;
  v90 = -1624469677;
  v33 = operator new(4u);
  LODWORD(v34) = sub_12763BC;
  *v33 = v2;
  HIDWORD(v34) = sub_1276234;
  v87 = v33;
  v88 = v34;
  v85 = operator new(1u);
  LODWORD(v35) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v35) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v86 = v35;
  ScreenController::bindStringForCollection((int)v2, &v90, &v89, (int)&v87, (int)&v85);
  if ( (_DWORD)v86 )
    ((void (*)(void))v86)();
  if ( (_DWORD)v88 )
    ((void (*)(void))v88)();
  v84 = -426969474;
  v36 = operator new(4u);
  LODWORD(v37) = sub_1276800;
  *v36 = v2;
  HIDWORD(v37) = sub_12763F4;
  v82 = v36;
  v83 = v37;
  v80 = operator new(1u);
  LODWORD(v38) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v38) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v81 = v38;
  ScreenController::bindString((int)v2, &v84, (int)&v82, (int)&v80);
  if ( (_DWORD)v81 )
    ((void (*)(void))v81)();
  if ( (_DWORD)v83 )
    ((void (*)(void))v83)();
  v78 = -495754686;
  v79 = 105502252;
  v39 = operator new(4u);
  LODWORD(v40) = sub_1276930;
  *v39 = v2;
  HIDWORD(v40) = sub_1276838;
  v76 = v39;
  v77 = v40;
  v74 = operator new(1u);
  LODWORD(v41) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v41) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v75 = v41;
  ScreenController::bindStringForCollection((int)v2, &v79, &v78, (int)&v76, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  v73 = 906440687;
  v42 = operator new(4u);
  LODWORD(v43) = sub_1276980;
  *v42 = v2;
  HIDWORD(v43) = sub_1276966;
  v71 = v42;
  v72 = v43;
  v69 = operator new(1u);
  LODWORD(v44) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v44) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v70 = v44;
  ScreenController::bindBool((int)v2, &v73, (int)&v71, (int)&v69);
  if ( (_DWORD)v70 )
    ((void (*)(void))v70)();
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  v68 = 555603034;
  v45 = operator new(4u);
  LODWORD(v46) = sub_12769C8;
  *v45 = v2;
  HIDWORD(v46) = sub_12769B6;
  v66 = v45;
  v67 = v46;
  v64 = operator new(1u);
  LODWORD(v47) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v47) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v65 = v47;
  ScreenController::bindBool((int)v2, &v68, (int)&v66, (int)&v64);
  if ( (_DWORD)v65 )
    ((void (*)(void))v65)();
  if ( (_DWORD)v67 )
    ((void (*)(void))v67)();
  v63 = -176314801;
  v48 = operator new(4u);
  LODWORD(v49) = sub_1276A12;
  *v48 = v2;
  HIDWORD(v49) = sub_12769FE;
  v61 = v48;
  v62 = v49;
  v59 = operator new(1u);
  LODWORD(v50) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v50) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v60 = v50;
  ScreenController::bindBool((int)v2, &v63, (int)&v61, (int)&v59);
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  StringHash::StringHash<char [24]>(&v58, (int)"#show_second_trade_slot");
  v51 = operator new(4u);
  LODWORD(v52) = sub_1276A68;
  *v51 = v2;
  HIDWORD(v52) = sub_1276A48;
  v56 = v51;
  v57 = v52;
  v54 = operator new(1u);
  LODWORD(v53) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v53) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v55 = v53;
  ScreenController::bindBool((int)v2, &v58, (int)&v56, (int)&v54);
  if ( (_DWORD)v55 )
    ((void (*)(void))v55)();
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
}


int __fastcall TradeScreenController::addStaticScreenVars(TradeScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  TradeScreenController *v3; // r5@1
  int v4; // r6@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-2Ch]@1
  char v10; // [sp+8h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$villager_name");
  TradeContainerManagerController::getDisplayName((TradeContainerManagerController *)&v9, *((_DWORD *)v3 + 159));
  Json::Value::Value((int)&v10, (const char **)&v9);
  Json::Value::operator=(v4, (const Json::Value *)&v10);
  Json::Value::~Value((Json::Value *)&v10);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  return ContainerScreenController::addStaticScreenVars(v3, v2);
}


void __fastcall TradeScreenController::_registerAutoPlaceOrder(TradeScreenController *this)
{
  TradeScreenController *v1; // r8@1
  int v2; // r9@2
  int v3; // r0@2
  int v4; // r5@3
  int v5; // r7@3
  bool v6; // zf@4
  int v7; // r4@7
  int v8; // r9@10
  int v9; // r0@10
  int v10; // r5@11
  int v11; // r7@11
  bool v12; // zf@12
  int v13; // r4@15
  bool v14; // zf@18
  _DWORD *v15; // r0@22
  char **v16; // r0@23
  char *v17; // r1@24
  char *v18; // r0@26
  int v19; // r9@27
  int v20; // r0@27
  int v21; // r5@28
  int v22; // r7@28
  bool v23; // zf@29
  int v24; // r4@32
  bool v25; // zf@35
  _DWORD *v26; // r0@39
  char **v27; // r0@40
  char *v28; // r1@41
  char *v29; // r0@43
  int v30; // r9@44
  int v31; // r0@44
  int v32; // r5@45
  int v33; // r7@45
  bool v34; // zf@46
  int v35; // r4@49
  bool v36; // zf@52
  _DWORD *v37; // r0@56
  char **v38; // r0@57
  char *v39; // r1@58
  char *v40; // r0@60
  int v41; // r9@61
  int v42; // r0@61
  int v43; // r5@62
  int v44; // r7@62
  bool v45; // zf@63
  int v46; // r4@66
  bool v47; // zf@69
  _DWORD *v48; // r0@73
  unsigned __int64 *v49; // r8@74
  int v50; // r0@74
  int v51; // r9@74
  int v52; // r0@74
  int v53; // r5@75
  int v54; // r7@75
  bool v55; // zf@76
  int v56; // r4@79
  bool v57; // zf@82
  _DWORD *v58; // r0@86
  char **v59; // r0@87
  char *v60; // r1@88
  char *v61; // r0@90
  int v62; // r9@91
  int v63; // r0@91
  int v64; // r5@92
  int v65; // r7@92
  bool v66; // zf@93
  int v67; // r4@96
  bool v68; // zf@99
  _DWORD *v69; // r0@103
  char **v70; // r0@104
  char *v71; // r1@105
  char *v72; // r0@107
  int v73; // r9@108
  int v74; // r0@108
  int v75; // r5@109
  int v76; // r7@109
  bool v77; // zf@110
  int v78; // r4@113
  bool v79; // zf@116
  _DWORD *v80; // r0@120
  char **v81; // r0@121
  char *v82; // r1@122
  char *v83; // r0@124
  int v84; // r9@125
  int v85; // r0@125
  int v86; // r5@126
  int v87; // r7@126
  bool v88; // zf@127
  int v89; // r4@130
  bool v90; // zf@133
  _DWORD *v91; // r0@137
  int v92; // r0@138
  int v93; // r9@138
  int v94; // r0@138
  int v95; // r5@139
  int v96; // r7@139
  bool v97; // zf@140
  int v98; // r4@143
  bool v99; // zf@146
  _DWORD *v100; // r0@150
  char **v101; // r0@151
  char *v102; // r1@152
  char *v103; // r0@154
  int v104; // r9@155
  int v105; // r0@155
  int v106; // r5@156
  int v107; // r7@156
  bool v108; // zf@157
  int v109; // r4@160
  bool v110; // zf@163
  _DWORD *v111; // r0@167
  char **v112; // r0@168
  char *v113; // r1@169
  char *v114; // r0@171
  int v115; // r9@172
  int v116; // r0@172
  int v117; // r5@173
  int v118; // r7@173
  bool v119; // zf@174
  int v120; // r4@177
  bool v121; // zf@180
  _DWORD *v122; // r0@184
  int v123; // r0@185
  int v124; // r9@185
  int v125; // r0@185
  int v126; // r5@186
  int v127; // r7@186
  bool v128; // zf@187
  int v129; // r4@190
  bool v130; // zf@193
  _DWORD *v131; // r0@197
  char **v132; // r0@198
  char *v133; // r1@199
  char *v134; // r0@201
  int v135; // r9@202
  int v136; // r0@202
  int v137; // r5@203
  int v138; // r7@203
  bool v139; // zf@204
  int v140; // r4@207
  bool v141; // zf@210
  _DWORD *v142; // r0@214
  char **v143; // r0@215
  char *v144; // r1@216
  char *v145; // r0@218
  int v146; // r9@219
  int v147; // r0@219
  int v148; // r5@220
  int v149; // r7@220
  bool v150; // zf@221
  int v151; // r4@224
  bool v152; // zf@227
  _DWORD *v153; // r0@231
  int v154; // r0@232
  int v155; // r9@232
  int v156; // r0@232
  int v157; // r5@233
  int v158; // r7@233
  bool v159; // zf@234
  int v160; // r4@237
  bool v161; // zf@240
  _DWORD *v162; // r0@244
  char **v163; // r0@245
  char *v164; // r1@246
  char *v165; // r0@248
  int v166; // r9@249
  int v167; // r0@249
  int v168; // r5@250
  int v169; // r7@250
  bool v170; // zf@251
  int v171; // r4@254
  bool v172; // zf@257
  _DWORD *v173; // r0@261
  char **v174; // r0@262
  char *v175; // r1@263
  char *v176; // r0@265
  int v177; // r9@266
  int v178; // r0@266
  int v179; // r5@267
  int v180; // r7@267
  bool v181; // zf@268
  int v182; // r4@271
  bool v183; // zf@274
  _DWORD *v184; // r0@278
  int v185; // r0@279
  char **v186; // r4@279
  char **v187; // r6@279
  unsigned int *v188; // r2@281
  signed int v189; // r1@283
  int *v190; // r0@289
  char **v191; // r4@294
  char **v192; // r6@294
  unsigned int *v193; // r2@296
  signed int v194; // r1@298
  int *v195; // r0@304
  char **v196; // r4@309
  char **v197; // r6@309
  unsigned int *v198; // r2@311
  signed int v199; // r1@313
  int *v200; // r0@319
  char **v201; // r4@324
  char **v202; // r6@324
  unsigned int *v203; // r2@326
  signed int v204; // r1@328
  int *v205; // r0@334
  char **v206; // r4@339
  char **v207; // r6@339
  unsigned int *v208; // r2@341
  signed int v209; // r1@343
  int *v210; // r0@349
  bool v211; // zf@352
  _DWORD *v212; // r0@356
  char **v213; // r0@357
  char *v214; // r1@358
  char *v215; // r0@360
  int v216; // r9@361
  int v217; // r0@361
  int v218; // r5@362
  int v219; // r7@362
  bool v220; // zf@363
  int v221; // r4@366
  bool v222; // zf@369
  _DWORD *v223; // r0@373
  char **v224; // r0@374
  char *v225; // r1@375
  char *v226; // r0@377
  int v227; // r9@378
  int v228; // r0@378
  int v229; // r5@379
  int v230; // r7@379
  bool v231; // zf@380
  int v232; // r4@383
  bool v233; // zf@386
  _DWORD *v234; // r0@390
  unsigned __int64 *v235; // r8@391
  int v236; // r0@391
  int v237; // r9@391
  int v238; // r0@391
  int v239; // r5@392
  int v240; // r7@392
  bool v241; // zf@393
  int v242; // r4@396
  bool v243; // zf@399
  _DWORD *v244; // r0@403
  char **v245; // r0@404
  char *v246; // r1@405
  char *v247; // r0@407
  int v248; // r9@408
  int v249; // r0@408
  int v250; // r5@409
  int v251; // r7@409
  bool v252; // zf@410
  int v253; // r4@413
  bool v254; // zf@416
  _DWORD *v255; // r0@420
  int v256; // r0@421
  int v257; // r9@421
  int v258; // r0@421
  int v259; // r5@422
  int v260; // r7@422
  bool v261; // zf@423
  int v262; // r4@426
  bool v263; // zf@429
  _DWORD *v264; // r0@433
  char **v265; // r0@434
  char *v266; // r1@435
  char *v267; // r0@437
  int v268; // r9@438
  int v269; // r0@438
  int v270; // r5@439
  int v271; // r7@439
  bool v272; // zf@440
  int v273; // r4@443
  bool v274; // zf@446
  _DWORD *v275; // r0@450
  int v276; // r0@451
  int v277; // r9@451
  int v278; // r0@451
  int v279; // r5@452
  int v280; // r7@452
  bool v281; // zf@453
  int v282; // r4@456
  bool v283; // zf@459
  _DWORD *v284; // r0@463
  char **v285; // r0@464
  char *v286; // r1@465
  char *v287; // r0@467
  int v288; // r9@468
  int v289; // r0@468
  int v290; // r5@469
  int v291; // r7@469
  bool v292; // zf@470
  int v293; // r4@473
  bool v294; // zf@476
  _DWORD *v295; // r0@480
  int v296; // r0@481
  char **v297; // r4@481
  char **v298; // r6@481
  unsigned int *v299; // r2@483
  signed int v300; // r1@485
  int *v301; // r0@491
  char **v302; // r4@496
  char **v303; // r6@496
  unsigned int *v304; // r2@498
  signed int v305; // r1@500
  int *v306; // r0@506
  char **v307; // r4@511
  char **v308; // r6@511
  unsigned int *v309; // r2@513
  signed int v310; // r1@515
  int *v311; // r0@521
  char **v312; // r6@526
  unsigned int *v313; // r2@528
  signed int v314; // r1@530
  int *v315; // r0@536
  unsigned int *v316; // r2@542
  signed int v317; // r1@544
  unsigned int *v318; // r2@546
  signed int v319; // r1@548
  unsigned int *v320; // r2@550
  signed int v321; // r1@552
  unsigned int *v322; // r2@554
  signed int v323; // r1@556
  unsigned int *v324; // r2@558
  signed int v325; // r1@560
  unsigned int *v326; // r2@562
  signed int v327; // r1@564
  unsigned int *v328; // r2@566
  signed int v329; // r1@568
  unsigned int *v330; // r2@570
  signed int v331; // r1@572
  unsigned int *v332; // r2@574
  signed int v333; // r1@576
  unsigned int *v334; // r2@578
  signed int v335; // r1@580
  unsigned int *v336; // r2@582
  signed int v337; // r1@584
  unsigned int *v338; // r2@586
  signed int v339; // r1@588
  unsigned int *v340; // r2@590
  signed int v341; // r1@592
  unsigned int *v342; // r2@594
  signed int v343; // r1@596
  unsigned int *v344; // r2@598
  signed int v345; // r1@600
  unsigned int *v346; // r2@602
  signed int v347; // r1@604
  unsigned int *v348; // r2@606
  signed int v349; // r1@608
  char *v350; // [sp+0h] [bp-118h]@262
  char v351; // [sp+4h] [bp-114h]@263
  char *v352; // [sp+8h] [bp-110h]@245
  char v353; // [sp+Ch] [bp-10Ch]@246
  char **v354; // [sp+10h] [bp-108h]@232
  char **v355; // [sp+14h] [bp-104h]@232
  char **v356; // [sp+18h] [bp-100h]@232
  char *v357; // [sp+1Ch] [bp-FCh]@215
  char v358; // [sp+20h] [bp-F8h]@216
  char *v359; // [sp+24h] [bp-F4h]@198
  char v360; // [sp+28h] [bp-F0h]@199
  char **v361; // [sp+2Ch] [bp-ECh]@185
  char **v362; // [sp+30h] [bp-E8h]@185
  char **v363; // [sp+34h] [bp-E4h]@185
  char *v364; // [sp+38h] [bp-E0h]@168
  char v365; // [sp+3Ch] [bp-DCh]@169
  char *v366; // [sp+40h] [bp-D8h]@151
  char v367; // [sp+44h] [bp-D4h]@152
  char **v368; // [sp+48h] [bp-D0h]@138
  char **v369; // [sp+4Ch] [bp-CCh]@138
  char **v370; // [sp+50h] [bp-C8h]@138
  char *v371; // [sp+54h] [bp-C4h]@121
  char v372; // [sp+58h] [bp-C0h]@122
  char *v373; // [sp+5Ch] [bp-BCh]@104
  char v374; // [sp+60h] [bp-B8h]@105
  char *v375; // [sp+64h] [bp-B4h]@87
  char v376; // [sp+68h] [bp-B0h]@88
  char **v377; // [sp+6Ch] [bp-ACh]@74
  char **v378; // [sp+70h] [bp-A8h]@74
  char **v379; // [sp+74h] [bp-A4h]@74
  char *v380; // [sp+78h] [bp-A0h]@57
  char v381; // [sp+7Ch] [bp-9Ch]@58
  char *v382; // [sp+80h] [bp-98h]@40
  char v383; // [sp+84h] [bp-94h]@41
  char *v384; // [sp+88h] [bp-90h]@23
  char v385; // [sp+8Ch] [bp-8Ch]@24
  char **v386; // [sp+90h] [bp-88h]@2
  char **v387; // [sp+94h] [bp-84h]@2
  char **v388; // [sp+98h] [bp-80h]@2
  char *v389; // [sp+9Ch] [bp-7Ch]@464
  char v390; // [sp+A0h] [bp-78h]@465
  char **v391; // [sp+A4h] [bp-74h]@451
  char **v392; // [sp+A8h] [bp-70h]@451
  char **v393; // [sp+ACh] [bp-6Ch]@451
  char *v394; // [sp+B0h] [bp-68h]@434
  char v395; // [sp+B4h] [bp-64h]@435
  char **v396; // [sp+B8h] [bp-60h]@421
  char **v397; // [sp+BCh] [bp-5Ch]@421
  char **v398; // [sp+C0h] [bp-58h]@421
  char *v399; // [sp+C4h] [bp-54h]@404
  char v400; // [sp+C8h] [bp-50h]@405
  char **v401; // [sp+CCh] [bp-4Ch]@391
  char **v402; // [sp+D0h] [bp-48h]@391
  char **v403; // [sp+D4h] [bp-44h]@391
  char *v404; // [sp+D8h] [bp-40h]@374
  char v405; // [sp+DCh] [bp-3Ch]@375
  char *v406; // [sp+E0h] [bp-38h]@357
  char v407; // [sp+E4h] [bp-34h]@358
  char **v408; // [sp+E8h] [bp-30h]@10
  char **v409; // [sp+ECh] [bp-2Ch]@10
  char **v410; // [sp+F0h] [bp-28h]@10

  v1 = this;
  if ( ContainerScreenController::_getInteractionModel(this) )
  {
    v386 = 0;
    v387 = 0;
    v388 = 0;
    v2 = 0x1Du % dword_27DDDBC;
    v3 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Du % dword_27DDDBC));
    if ( !v3 )
      goto LABEL_22;
    v4 = *(_DWORD *)v3;
    v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    while ( 1 )
    {
      v6 = v5 == 29;
      if ( v5 == 29 )
        v6 = *(_DWORD *)(v4 + 4) == 29;
      if ( v6 )
        break;
      v7 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 )
      {
        v5 = *(_DWORD *)(v7 + 12);
        v3 = v4;
        v4 = *(_DWORD *)v4;
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DDDBC == v2 )
          continue;
      }
    }
    v14 = v3 == 0;
    if ( v3 )
      v3 = *(_DWORD *)v3;
      v14 = v3 == 0;
    if ( v14 )
LABEL_22:
      v15 = operator new(0x10u);
      *v15 = 0;
      v15[1] = 29;
      v15[2] = &unk_28898CC;
      v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DDDB8,
             v2,
             0x1Du,
             (int)v15);
    AutoPlaceItem::AutoPlaceItem((int *)&v384, (int *)(v3 + 8), 1);
    v16 = v387;
    if ( v387 == v388 )
      std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::_M_emplace_back_aux<AutoPlaceItem>(
        (unsigned __int64 *)&v386,
        (int)&v384);
      v17 = v384;
    else
      *v387 = v384;
      v17 = (char *)&unk_28898CC;
      v384 = (char *)&unk_28898CC;
      *((_BYTE *)v16 + 4) = v385;
      v387 = v16 + 2;
    v18 = v17 - 12;
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v316 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v317 = __ldrex(v316);
        while ( __strex(v317 - 1, v316) );
      else
        v317 = (*v316)--;
      if ( v317 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    v19 = 0x1Eu % dword_27DDDBC;
    v20 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Eu % dword_27DDDBC));
    if ( !v20 )
      goto LABEL_39;
    v21 = *(_DWORD *)v20;
    v22 = *(_DWORD *)(*(_DWORD *)v20 + 12);
      v23 = v22 == 30;
      if ( v22 == 30 )
        v23 = *(_DWORD *)(v21 + 4) == 30;
      if ( v23 )
      v24 = *(_DWORD *)v21;
      if ( *(_DWORD *)v21 )
        v22 = *(_DWORD *)(v24 + 12);
        v20 = v21;
        v21 = *(_DWORD *)v21;
        if ( *(_DWORD *)(v24 + 12) % (unsigned int)dword_27DDDBC == v19 )
    v25 = v20 == 0;
    if ( v20 )
      v20 = *(_DWORD *)v20;
      v25 = v20 == 0;
    if ( v25 )
LABEL_39:
      v26 = operator new(0x10u);
      *v26 = 0;
      v26[1] = 30;
      v26[2] = &unk_28898CC;
      v20 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DDDB8,
              v19,
              0x1Eu,
              (int)v26);
    AutoPlaceItem::AutoPlaceItem((int *)&v382, (int *)(v20 + 8), 1);
    v27 = v387;
        (int)&v382);
      v28 = v382;
      *v387 = v382;
      v28 = (char *)&unk_28898CC;
      v382 = (char *)&unk_28898CC;
      *((_BYTE *)v27 + 4) = v383;
      v387 = v27 + 2;
    v29 = v28 - 12;
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v318 = (unsigned int *)(v28 - 4);
          v319 = __ldrex(v318);
        while ( __strex(v319 - 1, v318) );
        v319 = (*v318)--;
      if ( v319 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    v30 = 0x1Au % dword_27DDDBC;
    v31 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Au % dword_27DDDBC));
    if ( !v31 )
      goto LABEL_56;
    v32 = *(_DWORD *)v31;
    v33 = *(_DWORD *)(*(_DWORD *)v31 + 12);
      v34 = v33 == 26;
      if ( v33 == 26 )
        v34 = *(_DWORD *)(v32 + 4) == 26;
      if ( v34 )
      v35 = *(_DWORD *)v32;
      if ( *(_DWORD *)v32 )
        v33 = *(_DWORD *)(v35 + 12);
        v31 = v32;
        v32 = *(_DWORD *)v32;
        if ( *(_DWORD *)(v35 + 12) % (unsigned int)dword_27DDDBC == v30 )
    v36 = v31 == 0;
    if ( v31 )
      v31 = *(_DWORD *)v31;
      v36 = v31 == 0;
    if ( v36 )
LABEL_56:
      v37 = operator new(0x10u);
      *v37 = 0;
      v37[1] = 26;
      v37[2] = &unk_28898CC;
      v31 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v30,
              0x1Au,
              (int)v37);
    AutoPlaceItem::AutoPlaceItem((int *)&v380, (int *)(v31 + 8), 0);
    v38 = v387;
        (int)&v380);
      v39 = v380;
      *v387 = v380;
      v39 = (char *)&unk_28898CC;
      v380 = (char *)&unk_28898CC;
      *((_BYTE *)v38 + 4) = v381;
      v387 = v38 + 2;
    v40 = v39 - 12;
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v320 = (unsigned int *)(v39 - 4);
          v321 = __ldrex(v320);
        while ( __strex(v321 - 1, v320) );
        v321 = (*v320)--;
      if ( v321 <= 0 )
        j_j_j_j__ZdlPv_9(v40);
    v41 = 0x18u % dword_27DDDBC;
    v42 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x18u % dword_27DDDBC));
    if ( !v42 )
      goto LABEL_73;
    v43 = *(_DWORD *)v42;
    v44 = *(_DWORD *)(*(_DWORD *)v42 + 12);
      v45 = v44 == 24;
      if ( v44 == 24 )
        v45 = *(_DWORD *)(v43 + 4) == 24;
      if ( v45 )
      v46 = *(_DWORD *)v43;
      if ( *(_DWORD *)v43 )
        v44 = *(_DWORD *)(v46 + 12);
        v42 = v43;
        v43 = *(_DWORD *)v43;
        if ( *(_DWORD *)(v46 + 12) % (unsigned int)dword_27DDDBC == v41 )
    v47 = v42 == 0;
    if ( v42 )
      v42 = *(_DWORD *)v42;
      v47 = v42 == 0;
    if ( v47 )
LABEL_73:
      v48 = operator new(0x10u);
      *v48 = 0;
      v48[1] = 24;
      v48[2] = &unk_28898CC;
      v42 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v41,
              0x18u,
              (int)v48);
    v49 = (unsigned __int64 *)((char *)v1 + 600);
    v50 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v49,
            (int **)(v42 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v50, (unsigned __int64 *)&v386);
    v377 = 0;
    v378 = 0;
    v379 = 0;
    v51 = 0x1Du % dword_27DDDBC;
    v52 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Du % dword_27DDDBC));
    if ( !v52 )
      goto LABEL_86;
    v53 = *(_DWORD *)v52;
    v54 = *(_DWORD *)(*(_DWORD *)v52 + 12);
      v55 = v54 == 29;
      if ( v54 == 29 )
        v55 = *(_DWORD *)(v53 + 4) == 29;
      if ( v55 )
      v56 = *(_DWORD *)v53;
      if ( *(_DWORD *)v53 )
        v54 = *(_DWORD *)(v56 + 12);
        v52 = v53;
        v53 = *(_DWORD *)v53;
        if ( *(_DWORD *)(v56 + 12) % (unsigned int)dword_27DDDBC == v51 )
    v57 = v52 == 0;
    if ( v52 )
      v52 = *(_DWORD *)v52;
      v57 = v52 == 0;
    if ( v57 )
LABEL_86:
      v58 = operator new(0x10u);
      *v58 = 0;
      v58[1] = 29;
      v58[2] = &unk_28898CC;
      v52 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v51,
              0x1Du,
              (int)v58);
    AutoPlaceItem::AutoPlaceItem((int *)&v375, (int *)(v52 + 8), 1);
    v59 = v378;
    if ( v378 == v379 )
        (unsigned __int64 *)&v377,
        (int)&v375);
      v60 = v375;
      *v378 = v375;
      v60 = (char *)&unk_28898CC;
      v375 = (char *)&unk_28898CC;
      *((_BYTE *)v59 + 4) = v376;
      v378 = v59 + 2;
    v61 = v60 - 12;
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v322 = (unsigned int *)(v60 - 4);
          v323 = __ldrex(v322);
        while ( __strex(v323 - 1, v322) );
        v323 = (*v322)--;
      if ( v323 <= 0 )
        j_j_j_j__ZdlPv_9(v61);
    v62 = 0x1Eu % dword_27DDDBC;
    v63 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Eu % dword_27DDDBC));
    if ( !v63 )
      goto LABEL_103;
    v64 = *(_DWORD *)v63;
    v65 = *(_DWORD *)(*(_DWORD *)v63 + 12);
      v66 = v65 == 30;
      if ( v65 == 30 )
        v66 = *(_DWORD *)(v64 + 4) == 30;
      if ( v66 )
      v67 = *(_DWORD *)v64;
      if ( *(_DWORD *)v64 )
        v65 = *(_DWORD *)(v67 + 12);
        v63 = v64;
        v64 = *(_DWORD *)v64;
        if ( *(_DWORD *)(v67 + 12) % (unsigned int)dword_27DDDBC == v62 )
    v68 = v63 == 0;
    if ( v63 )
      v63 = *(_DWORD *)v63;
      v68 = v63 == 0;
    if ( v68 )
LABEL_103:
      v69 = operator new(0x10u);
      *v69 = 0;
      v69[1] = 30;
      v69[2] = &unk_28898CC;
      v63 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v62,
              (int)v69);
    AutoPlaceItem::AutoPlaceItem((int *)&v373, (int *)(v63 + 8), 1);
    v70 = v378;
        (int)&v373);
      v71 = v373;
      *v378 = v373;
      v71 = (char *)&unk_28898CC;
      v373 = (char *)&unk_28898CC;
      *((_BYTE *)v70 + 4) = v374;
      v378 = v70 + 2;
    v72 = v71 - 12;
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v324 = (unsigned int *)(v71 - 4);
          v325 = __ldrex(v324);
        while ( __strex(v325 - 1, v324) );
        v325 = (*v324)--;
      if ( v325 <= 0 )
        j_j_j_j__ZdlPv_9(v72);
    v73 = 0x18u % dword_27DDDBC;
    v74 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x18u % dword_27DDDBC));
    if ( !v74 )
      goto LABEL_120;
    v75 = *(_DWORD *)v74;
    v76 = *(_DWORD *)(*(_DWORD *)v74 + 12);
      v77 = v76 == 24;
      if ( v76 == 24 )
        v77 = *(_DWORD *)(v75 + 4) == 24;
      if ( v77 )
      v78 = *(_DWORD *)v75;
      if ( *(_DWORD *)v75 )
        v76 = *(_DWORD *)(v78 + 12);
        v74 = v75;
        v75 = *(_DWORD *)v75;
        if ( *(_DWORD *)(v78 + 12) % (unsigned int)dword_27DDDBC == v73 )
    v79 = v74 == 0;
    if ( v74 )
      v74 = *(_DWORD *)v74;
      v79 = v74 == 0;
    if ( v79 )
LABEL_120:
      v80 = operator new(0x10u);
      *v80 = 0;
      v80[1] = 24;
      v80[2] = &unk_28898CC;
      v74 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v73,
              (int)v80);
    AutoPlaceItem::AutoPlaceItem((int *)&v371, (int *)(v74 + 8), 0);
    v81 = v378;
        (int)&v371);
      v82 = v371;
      *v378 = v371;
      v82 = (char *)&unk_28898CC;
      v371 = (char *)&unk_28898CC;
      *((_BYTE *)v81 + 4) = v372;
      v378 = v81 + 2;
    v83 = v82 - 12;
    if ( (int *)(v82 - 12) != &dword_28898C0 )
      v326 = (unsigned int *)(v82 - 4);
          v327 = __ldrex(v326);
        while ( __strex(v327 - 1, v326) );
        v327 = (*v326)--;
      if ( v327 <= 0 )
        j_j_j_j__ZdlPv_9(v83);
    v84 = 0x1Au % dword_27DDDBC;
    v85 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Au % dword_27DDDBC));
    if ( !v85 )
      goto LABEL_137;
    v86 = *(_DWORD *)v85;
    v87 = *(_DWORD *)(*(_DWORD *)v85 + 12);
      v88 = v87 == 26;
      if ( v87 == 26 )
        v88 = *(_DWORD *)(v86 + 4) == 26;
      if ( v88 )
      v89 = *(_DWORD *)v86;
      if ( *(_DWORD *)v86 )
        v87 = *(_DWORD *)(v89 + 12);
        v85 = v86;
        v86 = *(_DWORD *)v86;
        if ( *(_DWORD *)(v89 + 12) % (unsigned int)dword_27DDDBC == v84 )
    v90 = v85 == 0;
    if ( v85 )
      v85 = *(_DWORD *)v85;
      v90 = v85 == 0;
    if ( v90 )
LABEL_137:
      v91 = operator new(0x10u);
      *v91 = 0;
      v91[1] = 26;
      v91[2] = &unk_28898CC;
      v85 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v84,
              (int)v91);
    v92 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)(v85 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v92, (unsigned __int64 *)&v377);
    v368 = 0;
    v369 = 0;
    v370 = 0;
    v93 = 0x18u % dword_27DDDBC;
    v94 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x18u % dword_27DDDBC));
    if ( !v94 )
      goto LABEL_150;
    v95 = *(_DWORD *)v94;
    v96 = *(_DWORD *)(*(_DWORD *)v94 + 12);
      v97 = v96 == 24;
      if ( v96 == 24 )
        v97 = *(_DWORD *)(v95 + 4) == 24;
      if ( v97 )
      v98 = *(_DWORD *)v95;
      if ( *(_DWORD *)v95 )
        v96 = *(_DWORD *)(v98 + 12);
        v94 = v95;
        v95 = *(_DWORD *)v95;
        if ( *(_DWORD *)(v98 + 12) % (unsigned int)dword_27DDDBC == v93 )
    v99 = v94 == 0;
    if ( v94 )
      v94 = *(_DWORD *)v94;
      v99 = v94 == 0;
    if ( v99 )
LABEL_150:
      v100 = operator new(0x10u);
      *v100 = 0;
      v100[1] = 24;
      v100[2] = &unk_28898CC;
      v94 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v93,
              (int)v100);
    AutoPlaceItem::AutoPlaceItem((int *)&v366, (int *)(v94 + 8), 0);
    v101 = v369;
    if ( v369 == v370 )
        (unsigned __int64 *)&v368,
        (int)&v366);
      v102 = v366;
      *v369 = v366;
      v102 = (char *)&unk_28898CC;
      v366 = (char *)&unk_28898CC;
      *((_BYTE *)v101 + 4) = v367;
      v369 = v101 + 2;
    v103 = v102 - 12;
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v328 = (unsigned int *)(v102 - 4);
          v329 = __ldrex(v328);
        while ( __strex(v329 - 1, v328) );
        v329 = (*v328)--;
      if ( v329 <= 0 )
        j_j_j_j__ZdlPv_9(v103);
    v104 = 0x1Au % dword_27DDDBC;
    v105 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Au % dword_27DDDBC));
    if ( !v105 )
      goto LABEL_167;
    v106 = *(_DWORD *)v105;
    v107 = *(_DWORD *)(*(_DWORD *)v105 + 12);
      v108 = v107 == 26;
      if ( v107 == 26 )
        v108 = *(_DWORD *)(v106 + 4) == 26;
      if ( v108 )
      v109 = *(_DWORD *)v106;
      if ( *(_DWORD *)v106 )
        v107 = *(_DWORD *)(v109 + 12);
        v105 = v106;
        v106 = *(_DWORD *)v106;
        if ( *(_DWORD *)(v109 + 12) % (unsigned int)dword_27DDDBC == v104 )
    v110 = v105 == 0;
    if ( v105 )
      v105 = *(_DWORD *)v105;
      v110 = v105 == 0;
    if ( v110 )
LABEL_167:
      v111 = operator new(0x10u);
      *v111 = 0;
      v111[1] = 26;
      v111[2] = &unk_28898CC;
      v105 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               (int)&dword_27DDDB8,
               v104,
               0x1Au,
               (int)v111);
    AutoPlaceItem::AutoPlaceItem((int *)&v364, (int *)(v105 + 8), 0);
    v112 = v369;
        (int)&v364);
      v113 = v364;
      *v369 = v364;
      v113 = (char *)&unk_28898CC;
      v364 = (char *)&unk_28898CC;
      *((_BYTE *)v112 + 4) = v365;
      v369 = v112 + 2;
    v114 = v113 - 12;
    if ( (int *)(v113 - 12) != &dword_28898C0 )
      v330 = (unsigned int *)(v113 - 4);
          v331 = __ldrex(v330);
        while ( __strex(v331 - 1, v330) );
        v331 = (*v330)--;
      if ( v331 <= 0 )
        j_j_j_j__ZdlPv_9(v114);
    v115 = 0x1Du % dword_27DDDBC;
    v116 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Du % dword_27DDDBC));
    if ( !v116 )
      goto LABEL_184;
    v117 = *(_DWORD *)v116;
    v118 = *(_DWORD *)(*(_DWORD *)v116 + 12);
      v119 = v118 == 29;
      if ( v118 == 29 )
        v119 = *(_DWORD *)(v117 + 4) == 29;
      if ( v119 )
      v120 = *(_DWORD *)v117;
      if ( *(_DWORD *)v117 )
        v118 = *(_DWORD *)(v120 + 12);
        v116 = v117;
        v117 = *(_DWORD *)v117;
        if ( *(_DWORD *)(v120 + 12) % (unsigned int)dword_27DDDBC == v115 )
    v121 = v116 == 0;
    if ( v116 )
      v116 = *(_DWORD *)v116;
      v121 = v116 == 0;
    if ( v121 )
LABEL_184:
      v122 = operator new(0x10u);
      *v122 = 0;
      v122[1] = 29;
      v122[2] = &unk_28898CC;
      v116 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v115,
               0x1Du,
               (int)v122);
    v123 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v49,
             (int **)(v116 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v123, (unsigned __int64 *)&v368);
    v361 = 0;
    v362 = 0;
    v363 = 0;
    v124 = 0x18u % dword_27DDDBC;
    v125 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x18u % dword_27DDDBC));
    if ( !v125 )
      goto LABEL_197;
    v126 = *(_DWORD *)v125;
    v127 = *(_DWORD *)(*(_DWORD *)v125 + 12);
      v128 = v127 == 24;
      if ( v127 == 24 )
        v128 = *(_DWORD *)(v126 + 4) == 24;
      if ( v128 )
      v129 = *(_DWORD *)v126;
      if ( *(_DWORD *)v126 )
        v127 = *(_DWORD *)(v129 + 12);
        v125 = v126;
        v126 = *(_DWORD *)v126;
        if ( *(_DWORD *)(v129 + 12) % (unsigned int)dword_27DDDBC == v124 )
    v130 = v125 == 0;
    if ( v125 )
      v125 = *(_DWORD *)v125;
      v130 = v125 == 0;
    if ( v130 )
LABEL_197:
      v131 = operator new(0x10u);
      *v131 = 0;
      v131[1] = 24;
      v131[2] = &unk_28898CC;
      v125 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v124,
               0x18u,
               (int)v131);
    AutoPlaceItem::AutoPlaceItem((int *)&v359, (int *)(v125 + 8), 0);
    v132 = v362;
    if ( v362 == v363 )
        (unsigned __int64 *)&v361,
        (int)&v359);
      v133 = v359;
      *v362 = v359;
      v133 = (char *)&unk_28898CC;
      v359 = (char *)&unk_28898CC;
      *((_BYTE *)v132 + 4) = v360;
      v362 = v132 + 2;
    v134 = v133 - 12;
    if ( (int *)(v133 - 12) != &dword_28898C0 )
      v332 = (unsigned int *)(v133 - 4);
          v333 = __ldrex(v332);
        while ( __strex(v333 - 1, v332) );
        v333 = (*v332)--;
      if ( v333 <= 0 )
        j_j_j_j__ZdlPv_9(v134);
    v135 = 0x1Au % dword_27DDDBC;
    v136 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Au % dword_27DDDBC));
    if ( !v136 )
      goto LABEL_214;
    v137 = *(_DWORD *)v136;
    v138 = *(_DWORD *)(*(_DWORD *)v136 + 12);
      v139 = v138 == 26;
      if ( v138 == 26 )
        v139 = *(_DWORD *)(v137 + 4) == 26;
      if ( v139 )
      v140 = *(_DWORD *)v137;
      if ( *(_DWORD *)v137 )
        v138 = *(_DWORD *)(v140 + 12);
        v136 = v137;
        v137 = *(_DWORD *)v137;
        if ( *(_DWORD *)(v140 + 12) % (unsigned int)dword_27DDDBC == v135 )
    v141 = v136 == 0;
    if ( v136 )
      v136 = *(_DWORD *)v136;
      v141 = v136 == 0;
    if ( v141 )
LABEL_214:
      v142 = operator new(0x10u);
      *v142 = 0;
      v142[1] = 26;
      v142[2] = &unk_28898CC;
      v136 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v135,
               (int)v142);
    AutoPlaceItem::AutoPlaceItem((int *)&v357, (int *)(v136 + 8), 0);
    v143 = v362;
        (int)&v357);
      v144 = v357;
      *v362 = v357;
      v144 = (char *)&unk_28898CC;
      v357 = (char *)&unk_28898CC;
      *((_BYTE *)v143 + 4) = v358;
      v362 = v143 + 2;
    v145 = v144 - 12;
    if ( (int *)(v144 - 12) != &dword_28898C0 )
      v334 = (unsigned int *)(v144 - 4);
          v335 = __ldrex(v334);
        while ( __strex(v335 - 1, v334) );
        v335 = (*v334)--;
      if ( v335 <= 0 )
        j_j_j_j__ZdlPv_9(v145);
    v146 = 0x1Eu % dword_27DDDBC;
    v147 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Eu % dword_27DDDBC));
    if ( !v147 )
      goto LABEL_231;
    v148 = *(_DWORD *)v147;
    v149 = *(_DWORD *)(*(_DWORD *)v147 + 12);
      v150 = v149 == 30;
      if ( v149 == 30 )
        v150 = *(_DWORD *)(v148 + 4) == 30;
      if ( v150 )
      v151 = *(_DWORD *)v148;
      if ( *(_DWORD *)v148 )
        v149 = *(_DWORD *)(v151 + 12);
        v147 = v148;
        v148 = *(_DWORD *)v148;
        if ( *(_DWORD *)(v151 + 12) % (unsigned int)dword_27DDDBC == v146 )
    v152 = v147 == 0;
    if ( v147 )
      v147 = *(_DWORD *)v147;
      v152 = v147 == 0;
    if ( v152 )
LABEL_231:
      v153 = operator new(0x10u);
      *v153 = 0;
      v153[1] = 30;
      v153[2] = &unk_28898CC;
      v147 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v146,
               0x1Eu,
               (int)v153);
    v154 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v147 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v154, (unsigned __int64 *)&v361);
    v354 = 0;
    v355 = 0;
    v356 = 0;
    v155 = 0x18u % dword_27DDDBC;
    v156 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x18u % dword_27DDDBC));
    if ( !v156 )
      goto LABEL_244;
    v157 = *(_DWORD *)v156;
    v158 = *(_DWORD *)(*(_DWORD *)v156 + 12);
      v159 = v158 == 24;
      if ( v158 == 24 )
        v159 = *(_DWORD *)(v157 + 4) == 24;
      if ( v159 )
      v160 = *(_DWORD *)v157;
      if ( *(_DWORD *)v157 )
        v158 = *(_DWORD *)(v160 + 12);
        v156 = v157;
        v157 = *(_DWORD *)v157;
        if ( *(_DWORD *)(v160 + 12) % (unsigned int)dword_27DDDBC == v155 )
    v161 = v156 == 0;
    if ( v156 )
      v156 = *(_DWORD *)v156;
      v161 = v156 == 0;
    if ( v161 )
LABEL_244:
      v162 = operator new(0x10u);
      *v162 = 0;
      v162[1] = 24;
      v162[2] = &unk_28898CC;
      v156 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v155,
               (int)v162);
    AutoPlaceItem::AutoPlaceItem((int *)&v352, (int *)(v156 + 8), 0);
    v163 = v355;
    if ( v355 == v356 )
        (unsigned __int64 *)&v354,
        (int)&v352);
      v164 = v352;
      *v355 = v352;
      v164 = (char *)&unk_28898CC;
      v352 = (char *)&unk_28898CC;
      *((_BYTE *)v163 + 4) = v353;
      v355 = v163 + 2;
    v165 = v164 - 12;
    if ( (int *)(v164 - 12) != &dword_28898C0 )
      v336 = (unsigned int *)(v164 - 4);
          v337 = __ldrex(v336);
        while ( __strex(v337 - 1, v336) );
        v337 = (*v336)--;
      if ( v337 <= 0 )
        j_j_j_j__ZdlPv_9(v165);
    v166 = 0x1Au % dword_27DDDBC;
    v167 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Au % dword_27DDDBC));
    if ( !v167 )
      goto LABEL_261;
    v168 = *(_DWORD *)v167;
    v169 = *(_DWORD *)(*(_DWORD *)v167 + 12);
      v170 = v169 == 26;
      if ( v169 == 26 )
        v170 = *(_DWORD *)(v168 + 4) == 26;
      if ( v170 )
      v171 = *(_DWORD *)v168;
      if ( *(_DWORD *)v168 )
        v169 = *(_DWORD *)(v171 + 12);
        v167 = v168;
        v168 = *(_DWORD *)v168;
        if ( *(_DWORD *)(v171 + 12) % (unsigned int)dword_27DDDBC == v166 )
    v172 = v167 == 0;
    if ( v167 )
      v167 = *(_DWORD *)v167;
      v172 = v167 == 0;
    if ( v172 )
LABEL_261:
      v173 = operator new(0x10u);
      *v173 = 0;
      v173[1] = 26;
      v173[2] = &unk_28898CC;
      v167 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v166,
               (int)v173);
    AutoPlaceItem::AutoPlaceItem((int *)&v350, (int *)(v167 + 8), 0);
    v174 = v355;
        (int)&v350);
      v175 = v350;
      *v355 = v350;
      v175 = (char *)&unk_28898CC;
      v350 = (char *)&unk_28898CC;
      *((_BYTE *)v174 + 4) = v351;
      v355 = v174 + 2;
    v176 = v175 - 12;
    if ( (int *)(v175 - 12) != &dword_28898C0 )
      v338 = (unsigned int *)(v175 - 4);
          v339 = __ldrex(v338);
        while ( __strex(v339 - 1, v338) );
        v339 = (*v338)--;
      if ( v339 <= 0 )
        j_j_j_j__ZdlPv_9(v176);
    v177 = 0x1Fu % dword_27DDDBC;
    v178 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Fu % dword_27DDDBC));
    if ( !v178 )
      goto LABEL_278;
    v179 = *(_DWORD *)v178;
    v180 = *(_DWORD *)(*(_DWORD *)v178 + 12);
      v181 = v180 == 31;
      if ( v180 == 31 )
        v181 = *(_DWORD *)(v179 + 4) == 31;
      if ( v181 )
      v182 = *(_DWORD *)v179;
      if ( *(_DWORD *)v179 )
        v180 = *(_DWORD *)(v182 + 12);
        v178 = v179;
        v179 = *(_DWORD *)v179;
        if ( *(_DWORD *)(v182 + 12) % (unsigned int)dword_27DDDBC == v177 )
    v183 = v178 == 0;
    if ( v178 )
      v178 = *(_DWORD *)v178;
      v183 = v178 == 0;
    if ( v183 )
LABEL_278:
      v184 = operator new(0x10u);
      *v184 = 0;
      v184[1] = 31;
      v184[2] = &unk_28898CC;
      v178 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v177,
               0x1Fu,
               (int)v184);
    v185 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v178 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v185, (unsigned __int64 *)&v354);
    v187 = v355;
    v186 = v354;
    if ( v354 != v355 )
      do
        v190 = (int *)(*v186 - 12);
        if ( v190 != &dword_28898C0 )
        {
          v188 = (unsigned int *)(*v186 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v189 = __ldrex(v188);
            while ( __strex(v189 - 1, v188) );
          }
          else
            v189 = (*v188)--;
          if ( v189 <= 0 )
            j_j_j_j__ZdlPv_9(v190);
        }
        v186 += 2;
      while ( v186 != v187 );
      v186 = v354;
    if ( v186 )
      operator delete(v186);
    v192 = v362;
    v191 = v361;
    if ( v361 != v362 )
        v195 = (int *)(*v191 - 12);
        if ( v195 != &dword_28898C0 )
          v193 = (unsigned int *)(*v191 - 4);
              v194 = __ldrex(v193);
            while ( __strex(v194 - 1, v193) );
            v194 = (*v193)--;
          if ( v194 <= 0 )
            j_j_j_j__ZdlPv_9(v195);
        v191 += 2;
      while ( v191 != v192 );
      v191 = v361;
    if ( v191 )
      operator delete(v191);
    v197 = v369;
    v196 = v368;
    if ( v368 != v369 )
        v200 = (int *)(*v196 - 12);
        if ( v200 != &dword_28898C0 )
          v198 = (unsigned int *)(*v196 - 4);
              v199 = __ldrex(v198);
            while ( __strex(v199 - 1, v198) );
            v199 = (*v198)--;
          if ( v199 <= 0 )
            j_j_j_j__ZdlPv_9(v200);
        v196 += 2;
      while ( v196 != v197 );
      v196 = v368;
    if ( v196 )
      operator delete(v196);
    v202 = v378;
    v201 = v377;
    if ( v377 != v378 )
        v205 = (int *)(*v201 - 12);
        if ( v205 != &dword_28898C0 )
          v203 = (unsigned int *)(*v201 - 4);
              v204 = __ldrex(v203);
            while ( __strex(v204 - 1, v203) );
            v204 = (*v203)--;
          if ( v204 <= 0 )
            j_j_j_j__ZdlPv_9(v205);
        v201 += 2;
      while ( v201 != v202 );
      v201 = v377;
    if ( v201 )
      operator delete(v201);
    v207 = v387;
    v206 = v386;
    if ( v386 != v387 )
        v210 = (int *)(*v206 - 12);
        if ( v210 != &dword_28898C0 )
          v208 = (unsigned int *)(*v206 - 4);
              v209 = __ldrex(v208);
            while ( __strex(v209 - 1, v208) );
            v209 = (*v208)--;
          if ( v209 <= 0 )
            j_j_j_j__ZdlPv_9(v210);
        v206 += 2;
      while ( v206 != v207 );
      v206 = v386;
  }
  else
    v408 = 0;
    v409 = 0;
    v410 = 0;
    v8 = 0x1Du % dword_27DDDBC;
    v9 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Du % dword_27DDDBC));
    if ( !v9 )
      goto LABEL_356;
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
      v12 = v11 == 29;
      if ( v11 == 29 )
        v12 = *(_DWORD *)(v10 + 4) == 29;
      if ( v12 )
      v13 = *(_DWORD *)v10;
      if ( *(_DWORD *)v10 )
        v11 = *(_DWORD *)(v13 + 12);
        v9 = v10;
        v10 = *(_DWORD *)v10;
        if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27DDDBC == v8 )
    v211 = v9 == 0;
    if ( v9 )
      v9 = *(_DWORD *)v9;
      v211 = v9 == 0;
    if ( v211 )
LABEL_356:
      v212 = operator new(0x10u);
      *v212 = 0;
      v212[1] = 29;
      v212[2] = &unk_28898CC;
      v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v8,
             (int)v212);
    AutoPlaceItem::AutoPlaceItem((int *)&v406, (int *)(v9 + 8), 1);
    v213 = v409;
    if ( v409 == v410 )
        (unsigned __int64 *)&v408,
        (int)&v406);
      v214 = v406;
      *v409 = v406;
      v214 = (char *)&unk_28898CC;
      v406 = (char *)&unk_28898CC;
      *((_BYTE *)v213 + 4) = v407;
      v409 = v213 + 2;
    v215 = v214 - 12;
    if ( (int *)(v214 - 12) != &dword_28898C0 )
      v340 = (unsigned int *)(v214 - 4);
          v341 = __ldrex(v340);
        while ( __strex(v341 - 1, v340) );
        v341 = (*v340)--;
      if ( v341 <= 0 )
        j_j_j_j__ZdlPv_9(v215);
    v216 = 0x1Eu % dword_27DDDBC;
    v217 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Eu % dword_27DDDBC));
    if ( !v217 )
      goto LABEL_373;
    v218 = *(_DWORD *)v217;
    v219 = *(_DWORD *)(*(_DWORD *)v217 + 12);
      v220 = v219 == 30;
      if ( v219 == 30 )
        v220 = *(_DWORD *)(v218 + 4) == 30;
      if ( v220 )
      v221 = *(_DWORD *)v218;
      if ( *(_DWORD *)v218 )
        v219 = *(_DWORD *)(v221 + 12);
        v217 = v218;
        v218 = *(_DWORD *)v218;
        if ( *(_DWORD *)(v221 + 12) % (unsigned int)dword_27DDDBC == v216 )
    v222 = v217 == 0;
    if ( v217 )
      v217 = *(_DWORD *)v217;
      v222 = v217 == 0;
    if ( v222 )
LABEL_373:
      v223 = operator new(0x10u);
      *v223 = 0;
      v223[1] = 30;
      v223[2] = &unk_28898CC;
      v217 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v216,
               (int)v223);
    AutoPlaceItem::AutoPlaceItem((int *)&v404, (int *)(v217 + 8), 1);
    v224 = v409;
        (int)&v404);
      v225 = v404;
      *v409 = v404;
      v225 = (char *)&unk_28898CC;
      v404 = (char *)&unk_28898CC;
      *((_BYTE *)v224 + 4) = v405;
      v409 = v224 + 2;
    v226 = v225 - 12;
    if ( (int *)(v225 - 12) != &dword_28898C0 )
      v342 = (unsigned int *)(v225 - 4);
          v343 = __ldrex(v342);
        while ( __strex(v343 - 1, v342) );
        v343 = (*v342)--;
      if ( v343 <= 0 )
        j_j_j_j__ZdlPv_9(v226);
    v227 = 9u % dword_27DDDBC;
    v228 = *(_DWORD *)(dword_27DDDB8 + 4 * (9u % dword_27DDDBC));
    if ( !v228 )
      goto LABEL_390;
    v229 = *(_DWORD *)v228;
    v230 = *(_DWORD *)(*(_DWORD *)v228 + 12);
      v231 = v230 == 9;
      if ( v230 == 9 )
        v231 = *(_DWORD *)(v229 + 4) == 9;
      if ( v231 )
      v232 = *(_DWORD *)v229;
      if ( *(_DWORD *)v229 )
        v230 = *(_DWORD *)(v232 + 12);
        v228 = v229;
        v229 = *(_DWORD *)v229;
        if ( *(_DWORD *)(v232 + 12) % (unsigned int)dword_27DDDBC == v227 )
    v233 = v228 == 0;
    if ( v228 )
      v228 = *(_DWORD *)v228;
      v233 = v228 == 0;
    if ( v233 )
LABEL_390:
      v234 = operator new(0x10u);
      *v234 = 0;
      v234[1] = 9;
      v234[2] = &unk_28898CC;
      v228 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v227,
               9u,
               (int)v234);
    v235 = (unsigned __int64 *)((char *)v1 + 600);
    v236 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v235,
             (int **)(v228 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v236, (unsigned __int64 *)&v408);
    v401 = 0;
    v402 = 0;
    v403 = 0;
    v237 = 9u % dword_27DDDBC;
    v238 = *(_DWORD *)(dword_27DDDB8 + 4 * (9u % dword_27DDDBC));
    if ( !v238 )
      goto LABEL_403;
    v239 = *(_DWORD *)v238;
    v240 = *(_DWORD *)(*(_DWORD *)v238 + 12);
      v241 = v240 == 9;
      if ( v240 == 9 )
        v241 = *(_DWORD *)(v239 + 4) == 9;
      if ( v241 )
      v242 = *(_DWORD *)v239;
      if ( *(_DWORD *)v239 )
        v240 = *(_DWORD *)(v242 + 12);
        v238 = v239;
        v239 = *(_DWORD *)v239;
        if ( *(_DWORD *)(v242 + 12) % (unsigned int)dword_27DDDBC == v237 )
    v243 = v238 == 0;
    if ( v238 )
      v238 = *(_DWORD *)v238;
      v243 = v238 == 0;
    if ( v243 )
LABEL_403:
      v244 = operator new(0x10u);
      *v244 = 0;
      v244[1] = 9;
      v244[2] = &unk_28898CC;
      v238 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v237,
               (int)v244);
    AutoPlaceItem::AutoPlaceItem((int *)&v399, (int *)(v238 + 8), 0);
    v245 = v402;
    if ( v402 == v403 )
        (unsigned __int64 *)&v401,
        (int)&v399);
      v246 = v399;
      *v402 = v399;
      v246 = (char *)&unk_28898CC;
      v399 = (char *)&unk_28898CC;
      *((_BYTE *)v245 + 4) = v400;
      v402 = v245 + 2;
    v247 = v246 - 12;
    if ( (int *)(v246 - 12) != &dword_28898C0 )
      v344 = (unsigned int *)(v246 - 4);
          v345 = __ldrex(v344);
        while ( __strex(v345 - 1, v344) );
        v345 = (*v344)--;
      if ( v345 <= 0 )
        j_j_j_j__ZdlPv_9(v247);
    v248 = 0x1Du % dword_27DDDBC;
    v249 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Du % dword_27DDDBC));
    if ( !v249 )
      goto LABEL_420;
    v250 = *(_DWORD *)v249;
    v251 = *(_DWORD *)(*(_DWORD *)v249 + 12);
      v252 = v251 == 29;
      if ( v251 == 29 )
        v252 = *(_DWORD *)(v250 + 4) == 29;
      if ( v252 )
      v253 = *(_DWORD *)v250;
      if ( *(_DWORD *)v250 )
        v251 = *(_DWORD *)(v253 + 12);
        v249 = v250;
        v250 = *(_DWORD *)v250;
        if ( *(_DWORD *)(v253 + 12) % (unsigned int)dword_27DDDBC == v248 )
    v254 = v249 == 0;
    if ( v249 )
      v249 = *(_DWORD *)v249;
      v254 = v249 == 0;
    if ( v254 )
LABEL_420:
      v255 = operator new(0x10u);
      *v255 = 0;
      v255[1] = 29;
      v255[2] = &unk_28898CC;
      v249 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v248,
               (int)v255);
    v256 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v249 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v256, (unsigned __int64 *)&v401);
    v396 = 0;
    v397 = 0;
    v398 = 0;
    v257 = 9u % dword_27DDDBC;
    v258 = *(_DWORD *)(dword_27DDDB8 + 4 * (9u % dword_27DDDBC));
    if ( !v258 )
      goto LABEL_433;
    v259 = *(_DWORD *)v258;
    v260 = *(_DWORD *)(*(_DWORD *)v258 + 12);
      v261 = v260 == 9;
      if ( v260 == 9 )
        v261 = *(_DWORD *)(v259 + 4) == 9;
      if ( v261 )
      v262 = *(_DWORD *)v259;
      if ( *(_DWORD *)v259 )
        v260 = *(_DWORD *)(v262 + 12);
        v258 = v259;
        v259 = *(_DWORD *)v259;
        if ( *(_DWORD *)(v262 + 12) % (unsigned int)dword_27DDDBC == v257 )
    v263 = v258 == 0;
    if ( v258 )
      v258 = *(_DWORD *)v258;
      v263 = v258 == 0;
    if ( v263 )
LABEL_433:
      v264 = operator new(0x10u);
      *v264 = 0;
      v264[1] = 9;
      v264[2] = &unk_28898CC;
      v258 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v257,
               (int)v264);
    AutoPlaceItem::AutoPlaceItem((int *)&v394, (int *)(v258 + 8), 0);
    v265 = v397;
    if ( v397 == v398 )
        (unsigned __int64 *)&v396,
        (int)&v394);
      v266 = v394;
      *v397 = v394;
      v266 = (char *)&unk_28898CC;
      v394 = (char *)&unk_28898CC;
      *((_BYTE *)v265 + 4) = v395;
      v397 = v265 + 2;
    v267 = v266 - 12;
    if ( (int *)(v266 - 12) != &dword_28898C0 )
      v346 = (unsigned int *)(v266 - 4);
          v347 = __ldrex(v346);
        while ( __strex(v347 - 1, v346) );
        v347 = (*v346)--;
      if ( v347 <= 0 )
        j_j_j_j__ZdlPv_9(v267);
    v268 = 0x1Eu % dword_27DDDBC;
    v269 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Eu % dword_27DDDBC));
    if ( !v269 )
      goto LABEL_450;
    v270 = *(_DWORD *)v269;
    v271 = *(_DWORD *)(*(_DWORD *)v269 + 12);
      v272 = v271 == 30;
      if ( v271 == 30 )
        v272 = *(_DWORD *)(v270 + 4) == 30;
      if ( v272 )
      v273 = *(_DWORD *)v270;
      if ( *(_DWORD *)v270 )
        v271 = *(_DWORD *)(v273 + 12);
        v269 = v270;
        v270 = *(_DWORD *)v270;
        if ( *(_DWORD *)(v273 + 12) % (unsigned int)dword_27DDDBC == v268 )
    v274 = v269 == 0;
    if ( v269 )
      v269 = *(_DWORD *)v269;
      v274 = v269 == 0;
    if ( v274 )
LABEL_450:
      v275 = operator new(0x10u);
      *v275 = 0;
      v275[1] = 30;
      v275[2] = &unk_28898CC;
      v269 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v268,
               (int)v275);
    v276 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v269 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v276, (unsigned __int64 *)&v396);
    v391 = 0;
    v392 = 0;
    v393 = 0;
    v277 = 9u % dword_27DDDBC;
    v278 = *(_DWORD *)(dword_27DDDB8 + 4 * (9u % dword_27DDDBC));
    if ( !v278 )
      goto LABEL_463;
    v279 = *(_DWORD *)v278;
    v280 = *(_DWORD *)(*(_DWORD *)v278 + 12);
      v281 = v280 == 9;
      if ( v280 == 9 )
        v281 = *(_DWORD *)(v279 + 4) == 9;
      if ( v281 )
      v282 = *(_DWORD *)v279;
      if ( *(_DWORD *)v279 )
        v280 = *(_DWORD *)(v282 + 12);
        v278 = v279;
        v279 = *(_DWORD *)v279;
        if ( *(_DWORD *)(v282 + 12) % (unsigned int)dword_27DDDBC == v277 )
    v283 = v278 == 0;
    if ( v278 )
      v278 = *(_DWORD *)v278;
      v283 = v278 == 0;
    if ( v283 )
LABEL_463:
      v284 = operator new(0x10u);
      *v284 = 0;
      v284[1] = 9;
      v284[2] = &unk_28898CC;
      v278 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v277,
               (int)v284);
    AutoPlaceItem::AutoPlaceItem((int *)&v389, (int *)(v278 + 8), 0);
    v285 = v392;
    if ( v392 == v393 )
        (unsigned __int64 *)&v391,
        (int)&v389);
      v286 = v389;
      *v392 = v389;
      v286 = (char *)&unk_28898CC;
      v389 = (char *)&unk_28898CC;
      *((_BYTE *)v285 + 4) = v390;
      v392 = v285 + 2;
    v287 = v286 - 12;
    if ( (int *)(v286 - 12) != &dword_28898C0 )
      v348 = (unsigned int *)(v286 - 4);
          v349 = __ldrex(v348);
        while ( __strex(v349 - 1, v348) );
        v349 = (*v348)--;
      if ( v349 <= 0 )
        j_j_j_j__ZdlPv_9(v287);
    v288 = 0x1Fu % dword_27DDDBC;
    v289 = *(_DWORD *)(dword_27DDDB8 + 4 * (0x1Fu % dword_27DDDBC));
    if ( !v289 )
      goto LABEL_480;
    v290 = *(_DWORD *)v289;
    v291 = *(_DWORD *)(*(_DWORD *)v289 + 12);
      v292 = v291 == 31;
      if ( v291 == 31 )
        v292 = *(_DWORD *)(v290 + 4) == 31;
      if ( v292 )
      v293 = *(_DWORD *)v290;
      if ( *(_DWORD *)v290 )
        v291 = *(_DWORD *)(v293 + 12);
        v289 = v290;
        v290 = *(_DWORD *)v290;
        if ( *(_DWORD *)(v293 + 12) % (unsigned int)dword_27DDDBC == v288 )
    v294 = v289 == 0;
    if ( v289 )
      v289 = *(_DWORD *)v289;
      v294 = v289 == 0;
    if ( v294 )
LABEL_480:
      v295 = operator new(0x10u);
      *v295 = 0;
      v295[1] = 31;
      v295[2] = &unk_28898CC;
      v289 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v288,
               (int)v295);
    v296 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v289 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v296, (unsigned __int64 *)&v391);
    v298 = v392;
    v297 = v391;
    if ( v391 != v392 )
        v301 = (int *)(*v297 - 12);
        if ( v301 != &dword_28898C0 )
          v299 = (unsigned int *)(*v297 - 4);
              v300 = __ldrex(v299);
            while ( __strex(v300 - 1, v299) );
            v300 = (*v299)--;
          if ( v300 <= 0 )
            j_j_j_j__ZdlPv_9(v301);
        v297 += 2;
      while ( v297 != v298 );
      v297 = v391;
    if ( v297 )
      operator delete(v297);
    v303 = v397;
    v302 = v396;
    if ( v396 != v397 )
        v306 = (int *)(*v302 - 12);
        if ( v306 != &dword_28898C0 )
          v304 = (unsigned int *)(*v302 - 4);
              v305 = __ldrex(v304);
            while ( __strex(v305 - 1, v304) );
            v305 = (*v304)--;
          if ( v305 <= 0 )
            j_j_j_j__ZdlPv_9(v306);
        v302 += 2;
      while ( v302 != v303 );
      v302 = v396;
    if ( v302 )
      operator delete(v302);
    v308 = v402;
    v307 = v401;
    if ( v401 != v402 )
        v311 = (int *)(*v307 - 12);
        if ( v311 != &dword_28898C0 )
          v309 = (unsigned int *)(*v307 - 4);
              v310 = __ldrex(v309);
            while ( __strex(v310 - 1, v309) );
            v310 = (*v309)--;
          if ( v310 <= 0 )
            j_j_j_j__ZdlPv_9(v311);
        v307 += 2;
      while ( v307 != v308 );
      v307 = v401;
    if ( v307 )
      operator delete(v307);
    v312 = v409;
    v206 = v408;
    if ( v408 != v409 )
        v315 = (int *)(*v206 - 12);
        if ( v315 != &dword_28898C0 )
          v313 = (unsigned int *)(*v206 - 4);
              v314 = __ldrex(v313);
            while ( __strex(v314 - 1, v313) );
            v314 = (*v313)--;
          if ( v314 <= 0 )
            j_j_j_j__ZdlPv_9(v315);
      while ( v206 != v312 );
      v206 = v408;
  if ( v206 )
    operator delete(v206);
}


void __fastcall TradeScreenController::_registerBindings(TradeScreenController *this)
{
  TradeScreenController::_registerBindings(this);
}
