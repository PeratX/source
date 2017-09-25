

signed int __fastcall EntityFilterGroup::_handleUnknownMember(int a1, int **a2, Json::Value *a3)
{
  int v3; // r5@1
  Json::Value *v4; // r6@1
  const void **v5; // r4@1
  int v6; // r0@1
  _DWORD *v7; // r7@2
  char *v8; // r0@6
  __int64 v10; // r0@11
  int v11; // r4@13
  unsigned int *v12; // r1@14
  unsigned int v13; // r0@16
  unsigned int *v14; // r1@19
  unsigned int v15; // r0@21
  unsigned int *v16; // r2@23
  signed int v17; // r1@25
  unsigned int *v18; // r5@29
  unsigned int v19; // r0@31
  int v20; // r4@34
  unsigned int *v21; // r1@35
  unsigned int v22; // r0@37
  unsigned int *v23; // r5@50
  unsigned int v24; // r0@52
  int v25; // [sp+4h] [bp-24h]@9
  int v26; // [sp+8h] [bp-20h]@12
  char *v27; // [sp+Ch] [bp-1Ch]@6
  char v28; // [sp+10h] [bp-18h]@9

  v3 = a1;
  v4 = a3;
  v5 = (const void **)a2;
  v6 = std::_Hashtable<std::string,std::pair<std::string const,EntityFilterGroup::LegacyMapping>,std::allocator<std::pair<std::string const,EntityFilterGroup::LegacyMapping>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)&legacyPredicates,
         a2);
  if ( !v6 )
  {
    v27 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v27, *((_DWORD *)*v5 - 3) + 40);
    sub_21E7408((const void **)&v27, "Invalid EntityFilterGroup member found: ", 0x28u);
    sub_21E72F0((const void **)&v27, v5);
    JsonUtil::errorMessage((int *)&v27);
    v8 = v27 - 12;
    if ( (int *)(v27 - 12) != &dword_28898C0 )
    {
      v16 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
    return 0;
  }
  v7 = (_DWORD *)(v6 + 8);
  if ( Json::Value::isArray(v4) != 1 )
    return EntityFilterGroup::_processLegacyMember(v3, v5, v4, (int)v7);
  if ( *v7 != *(_DWORD *)(v3 + 4) )
    std::__shared_ptr<EntityFilterGroup,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<EntityFilterGroup>,FilterGroup::CollectionType const&>(
      (int)&v25,
      (int)&v28,
      v7);
    if ( v25 )
      if ( EntityFilterGroup::_processLegacyArray(v25, v5, (int)v4, (int)v7) )
        v10 = *(_QWORD *)(v3 + 12);
        if ( (_DWORD)v10 == HIDWORD(v10) )
        {
          std::vector<std::shared_ptr<FilterGroup>,std::allocator<std::shared_ptr<FilterGroup>>>::_M_emplace_back_aux<std::shared_ptr<EntityFilterGroup>>(
            (_QWORD *)(v3 + 8),
            (int)&v25);
        }
        else
          *(_QWORD *)v10 = (unsigned int)v25;
          HIDWORD(v10) = v26;
          v26 = 0;
          *(_DWORD *)(v10 + 4) = HIDWORD(v10);
          v25 = 0;
          *(_DWORD *)(v3 + 12) = v10 + 8;
        v20 = v26;
        if ( v26 )
          v21 = (unsigned int *)(v26 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
          }
          else
            v22 = (*v21)--;
          if ( v22 == 1 )
            v23 = (unsigned int *)(v20 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
            if ( &pthread_create )
            {
              __dmb();
              do
                v24 = __ldrex(v23);
              while ( __strex(v24 - 1, v23) );
            }
            else
              v24 = (*v23)--;
            if ( v24 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
        return 1;
      v11 = v26;
      if ( !v26 )
        return 0;
      v14 = (unsigned int *)(v26 + 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 != 1 )
      v18 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        goto LABEL_46;
    else
      v12 = (unsigned int *)(v26 + 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 != 1 )
LABEL_46:
        if ( v19 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
    v19 = (*v18)--;
    goto LABEL_46;
  if ( EntityFilterGroup::_processLegacyArray(v3, v5, (int)v4, (int)v7) != 1 )
  return 1;
}


int __fastcall EntityFilterGroup::_createSubgroup(int a1, int a2, int a3)
{
  int v3; // r4@1
  int result; // r0@1
  int v5; // [sp+0h] [bp-18h]@1
  int v6; // [sp+4h] [bp-14h]@1
  int v7; // [sp+8h] [bp-10h]@1
  char v8; // [sp+Ch] [bp-Ch]@1

  v7 = a3;
  v3 = a1;
  std::__shared_ptr<EntityFilterGroup,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<EntityFilterGroup>,FilterGroup::CollectionType &>(
    (int)&v5,
    (int)&v8,
    &v7);
  *(_DWORD *)v3 = v5;
  result = v6;
  *(_DWORD *)(v3 + 4) = v6;
  return result;
}


void __fastcall EntityFilterGroup::initialize(EntityFilterGroup *this)
{
  unsigned __int64 *v1; // r6@1
  unsigned int *v2; // r2@3
  signed int v3; // r1@5
  unsigned __int64 *v4; // r5@11
  int v5; // r1@11
  void *v6; // r0@11
  unsigned __int64 *v7; // r7@13
  unsigned int *v8; // r2@15
  signed int v9; // r1@17
  unsigned __int64 *v10; // r5@23
  int v11; // r1@23
  void *v12; // r0@23
  unsigned int v13; // r10@26
  unsigned int v14; // r11@26
  int v15; // r7@26
  int v16; // r6@26
  int v17; // r8@27
  _DWORD *v18; // r9@27
  int v19; // r4@27
  _DWORD *v20; // r1@29
  size_t v21; // r2@29
  int v22; // r5@31
  void *v23; // r0@34
  char *v24; // r0@35
  unsigned int v25; // r10@37
  unsigned int v26; // r11@37
  int v27; // r7@37
  int v28; // r6@37
  int v29; // r8@38
  _DWORD *v30; // r9@38
  int v31; // r4@38
  _DWORD *v32; // r1@40
  size_t v33; // r2@40
  int v34; // r5@42
  void *v35; // r0@45
  char *v36; // r0@46
  unsigned int v37; // r10@48
  unsigned int v38; // r11@48
  int v39; // r7@48
  int v40; // r6@48
  int v41; // r8@49
  _DWORD *v42; // r9@49
  int v43; // r4@49
  _DWORD *v44; // r1@51
  size_t v45; // r2@51
  int v46; // r5@53
  void *v47; // r0@56
  char *v48; // r0@57
  unsigned int v49; // r10@59
  unsigned int v50; // r11@59
  int v51; // r7@59
  int v52; // r6@59
  int v53; // r8@60
  _DWORD *v54; // r9@60
  int v55; // r4@60
  _DWORD *v56; // r1@62
  size_t v57; // r2@62
  int v58; // r5@64
  void *v59; // r0@67
  char *v60; // r0@68
  unsigned int v61; // r10@70
  unsigned int v62; // r11@70
  int v63; // r7@70
  int v64; // r6@70
  int v65; // r8@71
  _DWORD *v66; // r9@71
  int v67; // r4@71
  _DWORD *v68; // r1@73
  size_t v69; // r2@73
  int v70; // r5@75
  void *v71; // r0@78
  char *v72; // r0@79
  unsigned int v73; // r10@81
  unsigned int v74; // r11@81
  int v75; // r7@81
  int v76; // r6@81
  int v77; // r8@82
  _DWORD *v78; // r9@82
  int v79; // r4@82
  _DWORD *v80; // r1@84
  size_t v81; // r2@84
  int v82; // r5@86
  void *v83; // r0@89
  char *v84; // r0@90
  unsigned int v85; // r10@92
  unsigned int v86; // r11@92
  int v87; // r7@92
  int v88; // r6@92
  int v89; // r8@93
  _DWORD *v90; // r9@93
  int v91; // r4@93
  _DWORD *v92; // r1@95
  size_t v93; // r2@95
  int v94; // r5@97
  void *v95; // r0@100
  char *v96; // r0@101
  unsigned int v97; // r10@103
  unsigned int v98; // r11@103
  int v99; // r7@103
  int v100; // r6@103
  int v101; // r8@104
  _DWORD *v102; // r9@104
  int v103; // r4@104
  _DWORD *v104; // r1@106
  size_t v105; // r2@106
  int v106; // r5@108
  void *v107; // r0@111
  char *v108; // r0@112
  unsigned int v109; // r10@114
  unsigned int v110; // r11@114
  int v111; // r7@114
  int v112; // r6@114
  int v113; // r8@115
  _DWORD *v114; // r9@115
  int v115; // r4@115
  _DWORD *v116; // r1@117
  size_t v117; // r2@117
  int v118; // r5@119
  void *v119; // r0@122
  char *v120; // r0@123
  unsigned int v121; // r10@125
  unsigned int v122; // r11@125
  int v123; // r7@125
  int v124; // r6@125
  int v125; // r8@126
  _DWORD *v126; // r9@126
  int v127; // r4@126
  _DWORD *v128; // r1@128
  size_t v129; // r2@128
  int v130; // r5@130
  void *v131; // r0@133
  char *v132; // r0@134
  unsigned int v133; // r10@136
  unsigned int v134; // r11@136
  int v135; // r7@136
  int v136; // r6@136
  int v137; // r8@137
  _DWORD *v138; // r9@137
  int v139; // r4@137
  _DWORD *v140; // r1@139
  size_t v141; // r2@139
  int v142; // r5@141
  void *v143; // r0@144
  char *v144; // r0@145
  unsigned int v145; // r10@147
  unsigned int v146; // r11@147
  int v147; // r7@147
  int v148; // r6@147
  int v149; // r8@148
  _DWORD *v150; // r9@148
  int v151; // r4@148
  _DWORD *v152; // r1@150
  size_t v153; // r2@150
  int v154; // r5@152
  void *v155; // r0@155
  char *v156; // r0@156
  unsigned int v157; // r10@158
  unsigned int v158; // r11@158
  int v159; // r7@158
  int v160; // r6@158
  int v161; // r8@159
  _DWORD *v162; // r9@159
  int v163; // r4@159
  _DWORD *v164; // r1@161
  size_t v165; // r2@161
  int v166; // r5@163
  void *v167; // r0@166
  char *v168; // r0@167
  unsigned int v169; // r10@169
  unsigned int v170; // r11@169
  int v171; // r7@169
  int v172; // r6@169
  int v173; // r8@170
  _DWORD *v174; // r9@170
  int v175; // r4@170
  _DWORD *v176; // r1@172
  size_t v177; // r2@172
  int v178; // r5@174
  void *v179; // r0@177
  char *v180; // r0@178
  unsigned int v181; // r10@180
  unsigned int v182; // r11@180
  int v183; // r7@180
  int v184; // r6@180
  int v185; // r8@181
  _DWORD *v186; // r9@181
  int v187; // r4@181
  _DWORD *v188; // r1@183
  size_t v189; // r2@183
  int v190; // r5@185
  void *v191; // r0@188
  char *v192; // r0@189
  unsigned int v193; // r10@191
  unsigned int v194; // r11@191
  int v195; // r7@191
  int v196; // r6@191
  int v197; // r8@192
  _DWORD *v198; // r9@192
  int v199; // r4@192
  _DWORD *v200; // r1@194
  size_t v201; // r2@194
  int v202; // r5@196
  void *v203; // r0@199
  char *v204; // r0@200
  unsigned int v205; // r10@202
  unsigned int v206; // r11@202
  int v207; // r7@202
  int v208; // r6@202
  int v209; // r8@203
  _DWORD *v210; // r9@203
  int v211; // r4@203
  _DWORD *v212; // r1@205
  size_t v213; // r2@205
  int v214; // r5@207
  void *v215; // r0@210
  char *v216; // r0@211
  unsigned int v217; // r10@213
  unsigned int v218; // r11@213
  int v219; // r7@213
  int v220; // r6@213
  int v221; // r8@214
  _DWORD *v222; // r9@214
  int v223; // r4@214
  _DWORD *v224; // r1@216
  size_t v225; // r2@216
  int v226; // r5@218
  void *v227; // r0@221
  char *v228; // r0@222
  unsigned int v229; // r10@224
  unsigned int v230; // r11@224
  int v231; // r7@224
  int v232; // r6@224
  int v233; // r8@225
  _DWORD *v234; // r9@225
  int v235; // r4@225
  _DWORD *v236; // r1@227
  size_t v237; // r2@227
  int v238; // r5@229
  void *v239; // r0@232
  char *v240; // r0@233
  unsigned int v241; // r10@235
  unsigned int v242; // r11@235
  int v243; // r7@235
  int v244; // r6@235
  int v245; // r8@236
  _DWORD *v246; // r9@236
  int v247; // r4@236
  _DWORD *v248; // r1@238
  size_t v249; // r2@238
  int v250; // r5@240
  void *v251; // r0@243
  char *v252; // r0@244
  unsigned int v253; // r10@246
  unsigned int v254; // r11@246
  int v255; // r7@246
  int v256; // r6@246
  int v257; // r8@247
  _DWORD *v258; // r9@247
  int v259; // r4@247
  _DWORD *v260; // r1@249
  size_t v261; // r2@249
  int v262; // r5@251
  void *v263; // r0@254
  char *v264; // r0@255
  unsigned int v265; // r10@257
  unsigned int v266; // r11@257
  int v267; // r7@257
  int v268; // r6@257
  int v269; // r8@258
  _DWORD *v270; // r9@258
  int v271; // r4@258
  _DWORD *v272; // r1@260
  size_t v273; // r2@260
  int v274; // r5@262
  void *v275; // r0@265
  char *v276; // r0@266
  unsigned int v277; // r10@268
  unsigned int v278; // r11@268
  int v279; // r7@268
  int v280; // r6@268
  int v281; // r8@269
  _DWORD *v282; // r9@269
  int v283; // r4@269
  _DWORD *v284; // r1@271
  size_t v285; // r2@271
  int v286; // r5@273
  void *v287; // r0@276
  char *v288; // r0@277
  unsigned int v289; // r10@279
  unsigned int v290; // r11@279
  int v291; // r7@279
  int v292; // r6@279
  int v293; // r8@280
  _DWORD *v294; // r9@280
  int v295; // r4@280
  _DWORD *v296; // r1@282
  size_t v297; // r2@282
  int v298; // r5@284
  void *v299; // r0@287
  char *v300; // r0@288
  unsigned int v301; // r10@290
  unsigned int v302; // r11@290
  int v303; // r7@290
  int v304; // r6@290
  int v305; // r8@291
  _DWORD *v306; // r9@291
  int v307; // r4@291
  _DWORD *v308; // r1@293
  size_t v309; // r2@293
  int v310; // r5@295
  void *v311; // r0@298
  char *v312; // r0@299
  unsigned int v313; // r10@301
  unsigned int v314; // r11@301
  int v315; // r7@301
  int v316; // r6@301
  int v317; // r8@302
  _DWORD *v318; // r9@302
  int v319; // r4@302
  _DWORD *v320; // r1@304
  size_t v321; // r2@304
  int v322; // r5@306
  void *v323; // r0@309
  char *v324; // r0@310
  unsigned int v325; // r10@312
  unsigned int v326; // r11@312
  int v327; // r7@312
  int v328; // r6@312
  int v329; // r8@313
  _DWORD *v330; // r9@313
  int v331; // r4@313
  _DWORD *v332; // r1@315
  size_t v333; // r2@315
  int v334; // r5@317
  void *v335; // r0@320
  char *v336; // r0@321
  unsigned int v337; // r10@323
  unsigned int v338; // r11@323
  int v339; // r7@323
  int v340; // r6@323
  int v341; // r8@324
  _DWORD *v342; // r9@324
  int v343; // r4@324
  _DWORD *v344; // r1@326
  size_t v345; // r2@326
  int v346; // r5@328
  void *v347; // r0@331
  char *v348; // r0@332
  unsigned int v349; // r10@334
  unsigned int v350; // r11@334
  int v351; // r7@334
  int v352; // r6@334
  int v353; // r8@335
  _DWORD *v354; // r9@335
  int v355; // r4@335
  _DWORD *v356; // r1@337
  size_t v357; // r2@337
  int v358; // r5@339
  void *v359; // r0@342
  char *v360; // r0@343
  unsigned int v361; // r10@345
  unsigned int v362; // r11@345
  int v363; // r7@345
  int v364; // r6@345
  int v365; // r8@346
  _DWORD *v366; // r9@346
  int v367; // r4@346
  _DWORD *v368; // r1@348
  size_t v369; // r2@348
  int v370; // r5@350
  void *v371; // r0@353
  char *v372; // r0@354
  unsigned int v373; // r10@356
  unsigned int v374; // r11@356
  int v375; // r7@356
  int v376; // r6@356
  int v377; // r8@357
  _DWORD *v378; // r9@357
  int v379; // r4@357
  _DWORD *v380; // r1@359
  size_t v381; // r2@359
  int v382; // r5@361
  void *v383; // r0@364
  char *v384; // r0@365
  unsigned int v385; // r10@367
  unsigned int v386; // r11@367
  int v387; // r7@367
  int v388; // r6@367
  int v389; // r8@368
  _DWORD *v390; // r9@368
  int v391; // r4@368
  _DWORD *v392; // r1@370
  size_t v393; // r2@370
  int v394; // r5@372
  void *v395; // r0@375
  char *v396; // r0@376
  unsigned int v397; // r10@378
  unsigned int v398; // r11@378
  int v399; // r7@378
  int v400; // r6@378
  int v401; // r8@379
  _DWORD *v402; // r9@379
  int v403; // r4@379
  _DWORD *v404; // r1@381
  size_t v405; // r2@381
  int v406; // r5@383
  void *v407; // r0@386
  char *v408; // r0@387
  unsigned int v409; // r10@389
  unsigned int v410; // r11@389
  int v411; // r7@389
  int v412; // r6@389
  int v413; // r8@390
  _DWORD *v414; // r9@390
  int v415; // r4@390
  _DWORD *v416; // r1@392
  size_t v417; // r2@392
  int v418; // r5@394
  void *v419; // r0@397
  char *v420; // r0@398
  unsigned int v421; // r10@400
  unsigned int v422; // r11@400
  int v423; // r7@400
  int v424; // r6@400
  int v425; // r8@401
  _DWORD *v426; // r9@401
  int v427; // r4@401
  _DWORD *v428; // r1@403
  size_t v429; // r2@403
  int v430; // r5@405
  void *v431; // r0@408
  char *v432; // r0@409
  unsigned int v433; // r10@411
  unsigned int v434; // r11@411
  int v435; // r7@411
  int v436; // r6@411
  int v437; // r8@412
  _DWORD *v438; // r9@412
  int v439; // r4@412
  _DWORD *v440; // r1@414
  size_t v441; // r2@414
  int v442; // r5@416
  void *v443; // r0@419
  char *v444; // r0@420
  unsigned int v445; // r10@422
  unsigned int v446; // r11@422
  int v447; // r7@422
  int v448; // r6@422
  int v449; // r8@423
  _DWORD *v450; // r9@423
  int v451; // r4@423
  _DWORD *v452; // r1@425
  size_t v453; // r2@425
  int v454; // r5@427
  void *v455; // r0@430
  char *v456; // r0@431
  unsigned int v457; // r10@433
  unsigned int v458; // r11@433
  int v459; // r7@433
  int v460; // r6@433
  int v461; // r8@434
  _DWORD *v462; // r9@434
  int v463; // r4@434
  _DWORD *v464; // r1@436
  size_t v465; // r2@436
  int v466; // r5@438
  void *v467; // r0@441
  char *v468; // r0@442
  unsigned int v469; // r10@444
  unsigned int v470; // r11@444
  int v471; // r7@444
  int v472; // r6@444
  int v473; // r8@445
  _DWORD *v474; // r9@445
  int v475; // r4@445
  _DWORD *v476; // r1@447
  size_t v477; // r2@447
  int v478; // r5@449
  void *v479; // r0@452
  char *v480; // r0@453
  unsigned int v481; // r10@455
  unsigned int v482; // r11@455
  int v483; // r7@455
  int v484; // r6@455
  int v485; // r8@456
  _DWORD *v486; // r9@456
  int v487; // r4@456
  _DWORD *v488; // r1@458
  size_t v489; // r2@458
  int v490; // r5@460
  void *v491; // r0@463
  char *v492; // r0@464
  unsigned int v493; // r10@466
  unsigned int v494; // r11@466
  int v495; // r7@466
  int v496; // r6@466
  int v497; // r8@467
  _DWORD *v498; // r9@467
  int v499; // r4@467
  _DWORD *v500; // r1@469
  size_t v501; // r2@469
  int v502; // r5@471
  void *v503; // r0@474
  char *v504; // r0@475
  unsigned int v505; // r10@477
  unsigned int v506; // r11@477
  int v507; // r7@477
  int v508; // r6@477
  int v509; // r8@478
  _DWORD *v510; // r9@478
  int v511; // r4@478
  _DWORD *v512; // r1@480
  size_t v513; // r2@480
  int v514; // r5@482
  void *v515; // r0@485
  char *v516; // r0@486
  unsigned int v517; // r10@488
  unsigned int v518; // r11@488
  int v519; // r7@488
  int v520; // r6@488
  int v521; // r8@489
  _DWORD *v522; // r9@489
  int v523; // r4@489
  _DWORD *v524; // r1@491
  size_t v525; // r2@491
  int v526; // r5@493
  void *v527; // r0@496
  char *v528; // r0@497
  unsigned int v529; // r10@499
  unsigned int v530; // r11@499
  int v531; // r7@499
  int v532; // r6@499
  int v533; // r8@500
  _DWORD *v534; // r9@500
  int v535; // r4@500
  _DWORD *v536; // r1@502
  size_t v537; // r2@502
  int v538; // r5@504
  void *v539; // r0@507
  char *v540; // r0@508
  unsigned int v541; // r10@510
  unsigned int v542; // r11@510
  int v543; // r7@510
  int v544; // r6@510
  int v545; // r8@511
  _DWORD *v546; // r9@511
  int v547; // r4@511
  _DWORD *v548; // r1@513
  size_t v549; // r2@513
  int v550; // r5@515
  void *v551; // r0@518
  char *v552; // r0@519
  unsigned int v553; // r10@521
  unsigned int v554; // r11@521
  int v555; // r7@521
  int v556; // r6@521
  int v557; // r8@522
  _DWORD *v558; // r9@522
  int v559; // r4@522
  _DWORD *v560; // r1@524
  size_t v561; // r2@524
  int v562; // r5@526
  void *v563; // r0@529
  char *v564; // r0@530
  unsigned int v565; // r10@532
  unsigned int v566; // r11@532
  int v567; // r7@532
  int v568; // r6@532
  int v569; // r8@533
  _DWORD *v570; // r9@533
  int v571; // r4@533
  _DWORD *v572; // r1@535
  size_t v573; // r2@535
  int v574; // r5@537
  void *v575; // r0@540
  char *v576; // r0@541
  unsigned int v577; // r10@543
  unsigned int v578; // r11@543
  int v579; // r7@543
  int v580; // r6@543
  int v581; // r8@544
  _DWORD *v582; // r9@544
  int v583; // r4@544
  _DWORD *v584; // r1@546
  size_t v585; // r2@546
  int v586; // r5@548
  void *v587; // r0@551
  char *v588; // r0@552
  unsigned int v589; // r10@554
  unsigned int v590; // r11@554
  int v591; // r7@554
  int v592; // r6@554
  int v593; // r8@555
  _DWORD *v594; // r9@555
  int v595; // r4@555
  _DWORD *v596; // r1@557
  size_t v597; // r2@557
  int v598; // r5@559
  void *v599; // r0@562
  char *v600; // r0@563
  unsigned int v601; // r10@565
  unsigned int v602; // r11@565
  int v603; // r7@565
  int v604; // r6@565
  int v605; // r8@566
  _DWORD *v606; // r9@566
  int v607; // r4@566
  _DWORD *v608; // r1@568
  size_t v609; // r2@568
  int v610; // r5@570
  void *v611; // r0@573
  char *v612; // r0@574
  unsigned int v613; // r10@576
  unsigned int v614; // r11@576
  int v615; // r7@576
  int v616; // r6@576
  int v617; // r8@577
  _DWORD *v618; // r9@577
  int v619; // r4@577
  _DWORD *v620; // r1@579
  size_t v621; // r2@579
  int v622; // r5@581
  void *v623; // r0@584
  char *v624; // r0@585
  unsigned int v625; // r10@587
  unsigned int v626; // r11@587
  int v627; // r7@587
  int v628; // r6@587
  int v629; // r8@588
  _DWORD *v630; // r9@588
  int v631; // r4@588
  _DWORD *v632; // r1@590
  size_t v633; // r2@590
  int v634; // r5@592
  void *v635; // r0@595
  char *v636; // r0@596
  unsigned int v637; // r10@598
  unsigned int v638; // r11@598
  int v639; // r7@598
  int v640; // r6@598
  int v641; // r8@599
  _DWORD *v642; // r9@599
  int v643; // r4@599
  _DWORD *v644; // r1@601
  size_t v645; // r2@601
  int v646; // r5@603
  void *v647; // r0@606
  char *v648; // r0@607
  unsigned int v649; // r10@609
  unsigned int v650; // r11@609
  int v651; // r7@609
  int v652; // r6@609
  int v653; // r8@610
  _DWORD *v654; // r9@610
  int v655; // r4@610
  _DWORD *v656; // r1@612
  size_t v657; // r2@612
  int v658; // r5@614
  void *v659; // r0@617
  char *v660; // r0@618
  unsigned int v661; // r10@620
  unsigned int v662; // r11@620
  int v663; // r7@620
  int v664; // r6@620
  int v665; // r8@621
  _DWORD *v666; // r9@621
  int v667; // r4@621
  _DWORD *v668; // r1@623
  size_t v669; // r2@623
  int v670; // r5@625
  void *v671; // r0@628
  char *v672; // r0@629
  unsigned int v673; // r10@631
  unsigned int v674; // r11@631
  int v675; // r7@631
  int v676; // r6@631
  int v677; // r8@632
  _DWORD *v678; // r9@632
  int v679; // r4@632
  _DWORD *v680; // r1@634
  size_t v681; // r2@634
  int v682; // r5@636
  void *v683; // r0@639
  char *v684; // r0@640
  unsigned int v685; // r10@642
  unsigned int v686; // r11@642
  int v687; // r7@642
  int v688; // r6@642
  int v689; // r8@643
  _DWORD *v690; // r9@643
  int v691; // r4@643
  _DWORD *v692; // r1@645
  size_t v693; // r2@645
  int v694; // r5@647
  void *v695; // r0@650
  char *v696; // r0@651
  unsigned int v697; // r10@653
  unsigned int v698; // r11@653
  int v699; // r7@653
  int v700; // r6@653
  int v701; // r8@654
  _DWORD *v702; // r9@654
  int v703; // r4@654
  _DWORD *v704; // r1@656
  size_t v705; // r2@656
  int v706; // r5@658
  void *v707; // r0@661
  char *v708; // r0@662
  unsigned int v709; // r10@664
  unsigned int v710; // r11@664
  int v711; // r7@664
  int v712; // r6@664
  int v713; // r8@665
  _DWORD *v714; // r9@665
  int v715; // r4@665
  _DWORD *v716; // r1@667
  size_t v717; // r2@667
  int v718; // r5@669
  void *v719; // r0@672
  char *v720; // r0@673
  unsigned int v721; // r10@675
  unsigned int v722; // r11@675
  int v723; // r7@675
  int v724; // r6@675
  int v725; // r8@676
  _DWORD *v726; // r9@676
  int v727; // r4@676
  _DWORD *v728; // r1@678
  size_t v729; // r2@678
  int v730; // r5@680
  void *v731; // r0@683
  char *v732; // r0@684
  unsigned int v733; // r10@686
  unsigned int v734; // r11@686
  int v735; // r7@686
  int v736; // r6@686
  int v737; // r8@687
  _DWORD *v738; // r9@687
  int v739; // r4@687
  _DWORD *v740; // r1@689
  size_t v741; // r2@689
  int v742; // r5@691
  void *v743; // r0@694
  char *v744; // r0@695
  unsigned int v745; // r10@697
  unsigned int v746; // r11@697
  int v747; // r7@697
  int v748; // r6@697
  int v749; // r8@698
  _DWORD *v750; // r9@698
  int v751; // r4@698
  _DWORD *v752; // r1@700
  size_t v753; // r2@700
  int v754; // r5@702
  void *v755; // r0@705
  char *v756; // r0@706
  unsigned int v757; // r10@708
  unsigned int v758; // r11@708
  int v759; // r7@708
  int v760; // r6@708
  int v761; // r8@709
  _DWORD *v762; // r9@709
  int v763; // r4@709
  _DWORD *v764; // r1@711
  size_t v765; // r2@711
  int v766; // r5@713
  void *v767; // r0@716
  char *v768; // r0@717
  unsigned int v769; // r10@719
  unsigned int v770; // r11@719
  int v771; // r7@719
  int v772; // r6@719
  int v773; // r8@720
  _DWORD *v774; // r9@720
  int v775; // r4@720
  _DWORD *v776; // r1@722
  size_t v777; // r2@722
  int v778; // r5@724
  void *v779; // r0@727
  char *v780; // r0@728
  unsigned int v781; // r10@730
  unsigned int v782; // r11@730
  int v783; // r7@730
  int v784; // r6@730
  int v785; // r8@731
  _DWORD *v786; // r9@731
  int v787; // r4@731
  _DWORD *v788; // r1@733
  size_t v789; // r2@733
  int v790; // r5@735
  void *v791; // r0@738
  char *v792; // r0@739
  unsigned int v793; // r10@741
  unsigned int v794; // r11@741
  int v795; // r7@741
  int v796; // r6@741
  int v797; // r8@742
  _DWORD *v798; // r9@742
  int v799; // r4@742
  _DWORD *v800; // r1@744
  size_t v801; // r2@744
  int v802; // r5@746
  void *v803; // r0@749
  char *v804; // r0@750
  unsigned int v805; // r10@752
  unsigned int v806; // r11@752
  int v807; // r7@752
  int v808; // r6@752
  int v809; // r8@753
  _DWORD *v810; // r9@753
  int v811; // r4@753
  _DWORD *v812; // r1@755
  size_t v813; // r2@755
  int v814; // r5@757
  void *v815; // r0@760
  char *v816; // r0@761
  unsigned int v817; // r10@763
  unsigned int v818; // r11@763
  int v819; // r7@763
  int v820; // r6@763
  int v821; // r8@764
  _DWORD *v822; // r9@764
  int v823; // r4@764
  _DWORD *v824; // r1@766
  size_t v825; // r2@766
  int v826; // r5@768
  void *v827; // r0@771
  char *v828; // r0@772
  unsigned int v829; // r10@774
  unsigned int v830; // r11@774
  int v831; // r7@774
  int v832; // r6@774
  int v833; // r8@775
  _DWORD *v834; // r9@775
  int v835; // r4@775
  _DWORD *v836; // r1@777
  size_t v837; // r2@777
  int v838; // r5@779
  void *v839; // r0@782
  char *v840; // r0@783
  unsigned int v841; // r10@785
  unsigned int v842; // r11@785
  int v843; // r7@785
  int v844; // r6@785
  int v845; // r8@786
  _DWORD *v846; // r9@786
  int v847; // r4@786
  _DWORD *v848; // r1@788
  size_t v849; // r2@788
  int v850; // r5@790
  void *v851; // r0@793
  char *v852; // r0@794
  unsigned int *v853; // r2@796
  signed int v854; // r1@798
  unsigned int *v855; // r2@800
  signed int v856; // r1@802
  unsigned int *v857; // r2@804
  signed int v858; // r1@806
  unsigned int *v859; // r2@808
  signed int v860; // r1@810
  unsigned int *v861; // r2@812
  signed int v862; // r1@814
  unsigned int *v863; // r2@816
  signed int v864; // r1@818
  unsigned int *v865; // r2@820
  signed int v866; // r1@822
  unsigned int *v867; // r2@824
  signed int v868; // r1@826
  unsigned int *v869; // r2@828
  signed int v870; // r1@830
  unsigned int *v871; // r2@832
  signed int v872; // r1@834
  unsigned int *v873; // r2@836
  signed int v874; // r1@838
  unsigned int *v875; // r2@840
  signed int v876; // r1@842
  unsigned int *v877; // r2@844
  signed int v878; // r1@846
  unsigned int *v879; // r2@848
  signed int v880; // r1@850
  unsigned int *v881; // r2@852
  signed int v882; // r1@854
  unsigned int *v883; // r2@856
  signed int v884; // r1@858
  unsigned int *v885; // r2@860
  signed int v886; // r1@862
  unsigned int *v887; // r2@864
  signed int v888; // r1@866
  unsigned int *v889; // r2@868
  signed int v890; // r1@870
  unsigned int *v891; // r2@872
  signed int v892; // r1@874
  unsigned int *v893; // r2@876
  signed int v894; // r1@878
  unsigned int *v895; // r2@880
  signed int v896; // r1@882
  unsigned int *v897; // r2@884
  signed int v898; // r1@886
  unsigned int *v899; // r2@888
  signed int v900; // r1@890
  unsigned int *v901; // r2@892
  signed int v902; // r1@894
  unsigned int *v903; // r2@896
  signed int v904; // r1@898
  unsigned int *v905; // r2@900
  signed int v906; // r1@902
  unsigned int *v907; // r2@904
  signed int v908; // r1@906
  unsigned int *v909; // r2@908
  signed int v910; // r1@910
  unsigned int *v911; // r2@912
  signed int v912; // r1@914
  unsigned int *v913; // r2@916
  signed int v914; // r1@918
  unsigned int *v915; // r2@920
  signed int v916; // r1@922
  unsigned int *v917; // r2@924
  signed int v918; // r1@926
  unsigned int *v919; // r2@928
  signed int v920; // r1@930
  unsigned int *v921; // r2@932
  signed int v922; // r1@934
  unsigned int *v923; // r2@936
  signed int v924; // r1@938
  unsigned int *v925; // r2@940
  signed int v926; // r1@942
  unsigned int *v927; // r2@944
  signed int v928; // r1@946
  unsigned int *v929; // r2@948
  signed int v930; // r1@950
  unsigned int *v931; // r2@952
  signed int v932; // r1@954
  unsigned int *v933; // r2@956
  signed int v934; // r1@958
  unsigned int *v935; // r2@960
  signed int v936; // r1@962
  unsigned int *v937; // r2@964
  signed int v938; // r1@966
  unsigned int *v939; // r2@968
  signed int v940; // r1@970
  unsigned int *v941; // r2@972
  signed int v942; // r1@974
  unsigned int *v943; // r2@976
  signed int v944; // r1@978
  unsigned int *v945; // r2@980
  signed int v946; // r1@982
  unsigned int *v947; // r2@984
  signed int v948; // r1@986
  unsigned int *v949; // r2@988
  signed int v950; // r1@990
  unsigned int *v951; // r2@992
  signed int v952; // r1@994
  unsigned int *v953; // r2@996
  signed int v954; // r1@998
  unsigned int *v955; // r2@1000
  signed int v956; // r1@1002
  unsigned int *v957; // r2@1004
  signed int v958; // r1@1006
  unsigned int *v959; // r2@1008
  signed int v960; // r1@1010
  unsigned int *v961; // r2@1012
  signed int v962; // r1@1014
  unsigned int *v963; // r2@1016
  signed int v964; // r1@1018
  unsigned int *v965; // r2@1020
  signed int v966; // r1@1022
  unsigned int *v967; // r2@1024
  signed int v968; // r1@1026
  unsigned int *v969; // r2@1028
  signed int v970; // r1@1030
  unsigned int *v971; // r2@1032
  signed int v972; // r1@1034
  unsigned int *v973; // r2@1036
  signed int v974; // r1@1038
  unsigned int *v975; // r2@1040
  signed int v976; // r1@1042
  unsigned int *v977; // r2@1044
  signed int v978; // r1@1046
  unsigned int *v979; // r2@1048
  signed int v980; // r1@1050
  unsigned int *v981; // r2@1052
  signed int v982; // r1@1054
  unsigned int *v983; // r2@1056
  signed int v984; // r1@1058
  unsigned int *v985; // r2@1060
  signed int v986; // r1@1062
  unsigned int *v987; // r2@1064
  signed int v988; // r1@1066
  unsigned int *v989; // r2@1068
  signed int v990; // r1@1070
  unsigned int *v991; // r2@1072
  signed int v992; // r1@1074
  unsigned int *v993; // r2@1076
  signed int v994; // r1@1078
  unsigned int *v995; // r2@1080
  signed int v996; // r1@1082
  unsigned int *v997; // r2@1084
  signed int v998; // r1@1086
  unsigned int *v999; // r2@1088
  signed int v1000; // r1@1090
  unsigned int *v1001; // r2@1092
  signed int v1002; // r1@1094
  unsigned int *v1003; // r2@1096
  signed int v1004; // r1@1098
  unsigned int *v1005; // r2@1100
  signed int v1006; // r1@1102
  unsigned int *v1007; // r2@1104
  signed int v1008; // r1@1106
  unsigned int *v1009; // r2@1108
  signed int v1010; // r1@1110
  unsigned int *v1011; // r2@1112
  signed int v1012; // r1@1114
  unsigned int *v1013; // r2@1116
  signed int v1014; // r1@1118
  unsigned int *v1015; // r2@1120
  signed int v1016; // r1@1122
  unsigned int *v1017; // r2@1124
  signed int v1018; // r1@1126
  unsigned int *v1019; // r2@1128
  signed int v1020; // r1@1130
  unsigned int *v1021; // r2@1132
  signed int v1022; // r1@1134
  unsigned int *v1023; // r2@1136
  signed int v1024; // r1@1138
  unsigned int *v1025; // r2@1140
  signed int v1026; // r1@1142
  unsigned int *v1027; // r2@1144
  signed int v1028; // r1@1146
  unsigned int *v1029; // r2@1148
  signed int v1030; // r1@1150
  unsigned int *v1031; // r2@1152
  signed int v1032; // r1@1154
  unsigned int *v1033; // r2@1156
  signed int v1034; // r1@1158
  unsigned int *v1035; // r2@1160
  signed int v1036; // r1@1162
  unsigned int *v1037; // r2@1164
  signed int v1038; // r1@1166
  unsigned int *v1039; // r2@1168
  signed int v1040; // r1@1170
  unsigned int *v1041; // r2@1172
  signed int v1042; // r1@1174
  unsigned int *v1043; // r2@1176
  signed int v1044; // r1@1178
  unsigned int *v1045; // r2@1180
  signed int v1046; // r1@1182
  unsigned int *v1047; // r2@1184
  signed int v1048; // r1@1186
  unsigned int *v1049; // r2@1188
  signed int v1050; // r1@1190
  unsigned int *v1051; // r2@1192
  signed int v1052; // r1@1194
  unsigned int *v1053; // r2@1196
  signed int v1054; // r1@1198
  unsigned int *v1055; // r2@1200
  signed int v1056; // r1@1202
  unsigned int *v1057; // r2@1204
  signed int v1058; // r1@1206
  unsigned int *v1059; // r2@1208
  signed int v1060; // r1@1210
  unsigned int *v1061; // r2@1212
  signed int v1062; // r1@1214
  unsigned int *v1063; // r2@1216
  signed int v1064; // r1@1218
  unsigned int *v1065; // r2@1220
  signed int v1066; // r1@1222
  unsigned int *v1067; // r2@1224
  signed int v1068; // r1@1226
  unsigned int *v1069; // r2@1228
  signed int v1070; // r1@1230
  unsigned int *v1071; // r2@1232
  signed int v1072; // r1@1234
  unsigned int *v1073; // r2@1236
  signed int v1074; // r1@1238
  unsigned int *v1075; // r2@1240
  signed int v1076; // r1@1242
  unsigned int *v1077; // r2@1244
  signed int v1078; // r1@1246
  unsigned int *v1079; // r2@1248
  signed int v1080; // r1@1250
  unsigned int *v1081; // r2@1252
  signed int v1082; // r1@1254
  unsigned int *v1083; // r2@1256
  signed int v1084; // r1@1258
  unsigned int *v1085; // r2@1260
  signed int v1086; // r1@1262
  unsigned int *v1087; // r2@1264
  signed int v1088; // r1@1266
  unsigned int *v1089; // r2@1268
  signed int v1090; // r1@1270
  unsigned int *v1091; // r2@1272
  signed int v1092; // r1@1274
  unsigned int *v1093; // r2@1276
  signed int v1094; // r1@1278
  unsigned int *v1095; // r2@1280
  signed int v1096; // r1@1282
  unsigned int *v1097; // r2@1284
  signed int v1098; // r1@1286
  unsigned int *v1099; // r2@1288
  signed int v1100; // r1@1290
  unsigned int *v1101; // r2@1292
  signed int v1102; // r1@1294
  unsigned int *v1103; // r2@1296
  signed int v1104; // r1@1298
  unsigned int *v1105; // r2@1300
  signed int v1106; // r1@1302
  unsigned int *v1107; // r2@1304
  signed int v1108; // r1@1306
  unsigned int *v1109; // r2@1308
  signed int v1110; // r1@1310
  unsigned int *v1111; // r2@1312
  signed int v1112; // r1@1314
  unsigned int *v1113; // r2@1316
  signed int v1114; // r1@1318
  unsigned int *v1115; // r2@1320
  signed int v1116; // r1@1322
  unsigned int *v1117; // r2@1324
  signed int v1118; // r1@1326
  unsigned int *v1119; // r2@1328
  signed int v1120; // r1@1330
  unsigned int *v1121; // r2@1332
  signed int v1122; // r1@1334
  unsigned int *v1123; // r2@1336
  signed int v1124; // r1@1338
  unsigned int *v1125; // r2@1340
  signed int v1126; // r1@1342
  unsigned int *v1127; // r2@1344
  signed int v1128; // r1@1346
  unsigned int *v1129; // r2@1348
  signed int v1130; // r1@1350
  unsigned int *v1131; // r2@1352
  signed int v1132; // r1@1354
  bool v1133; // zf@1356
  bool v1134; // zf@1360
  bool v1135; // zf@1364
  bool v1136; // zf@1368
  bool v1137; // zf@1372
  bool v1138; // zf@1376
  bool v1139; // zf@1380
  bool v1140; // zf@1384
  bool v1141; // zf@1388
  bool v1142; // zf@1392
  bool v1143; // zf@1396
  bool v1144; // zf@1400
  bool v1145; // zf@1404
  bool v1146; // zf@1408
  bool v1147; // zf@1412
  bool v1148; // zf@1416
  bool v1149; // zf@1420
  bool v1150; // zf@1424
  bool v1151; // zf@1428
  bool v1152; // zf@1432
  bool v1153; // zf@1436
  bool v1154; // zf@1440
  bool v1155; // zf@1444
  bool v1156; // zf@1448
  bool v1157; // zf@1452
  bool v1158; // zf@1456
  bool v1159; // zf@1460
  bool v1160; // zf@1464
  bool v1161; // zf@1468
  bool v1162; // zf@1472
  bool v1163; // zf@1476
  bool v1164; // zf@1480
  bool v1165; // zf@1484
  bool v1166; // zf@1488
  bool v1167; // zf@1492
  bool v1168; // zf@1496
  bool v1169; // zf@1500
  bool v1170; // zf@1504
  bool v1171; // zf@1508
  bool v1172; // zf@1512
  bool v1173; // zf@1516
  bool v1174; // zf@1520
  bool v1175; // zf@1524
  bool v1176; // zf@1528
  bool v1177; // zf@1532
  bool v1178; // zf@1536
  bool v1179; // zf@1540
  bool v1180; // zf@1544
  bool v1181; // zf@1548
  bool v1182; // zf@1552
  bool v1183; // zf@1556
  bool v1184; // zf@1560
  bool v1185; // zf@1564
  bool v1186; // zf@1568
  bool v1187; // zf@1572
  bool v1188; // zf@1576
  bool v1189; // zf@1580
  bool v1190; // zf@1584
  bool v1191; // zf@1588
  bool v1192; // zf@1592
  bool v1193; // zf@1596
  bool v1194; // zf@1600
  bool v1195; // zf@1604
  bool v1196; // zf@1608
  bool v1197; // zf@1612
  bool v1198; // zf@1616
  bool v1199; // zf@1620
  bool v1200; // zf@1624
  bool v1201; // zf@1628
  bool v1202; // zf@1632
  int v1203; // [sp+4h] [bp-B1Ch]@25
  int v1204; // [sp+4h] [bp-B1Ch]@36
  int v1205; // [sp+4h] [bp-B1Ch]@47
  int v1206; // [sp+4h] [bp-B1Ch]@58
  int v1207; // [sp+4h] [bp-B1Ch]@69
  int v1208; // [sp+4h] [bp-B1Ch]@80
  int v1209; // [sp+4h] [bp-B1Ch]@91
  int v1210; // [sp+4h] [bp-B1Ch]@102
  int v1211; // [sp+4h] [bp-B1Ch]@113
  int v1212; // [sp+4h] [bp-B1Ch]@124
  int v1213; // [sp+4h] [bp-B1Ch]@135
  int v1214; // [sp+4h] [bp-B1Ch]@146
  int v1215; // [sp+4h] [bp-B1Ch]@157
  int v1216; // [sp+4h] [bp-B1Ch]@168
  int v1217; // [sp+4h] [bp-B1Ch]@179
  int v1218; // [sp+4h] [bp-B1Ch]@190
  int v1219; // [sp+4h] [bp-B1Ch]@201
  int v1220; // [sp+4h] [bp-B1Ch]@212
  int v1221; // [sp+4h] [bp-B1Ch]@223
  int v1222; // [sp+4h] [bp-B1Ch]@234
  int v1223; // [sp+4h] [bp-B1Ch]@245
  int v1224; // [sp+4h] [bp-B1Ch]@256
  int v1225; // [sp+4h] [bp-B1Ch]@267
  int v1226; // [sp+4h] [bp-B1Ch]@278
  int v1227; // [sp+4h] [bp-B1Ch]@289
  int v1228; // [sp+4h] [bp-B1Ch]@300
  int v1229; // [sp+4h] [bp-B1Ch]@311
  int v1230; // [sp+4h] [bp-B1Ch]@322
  int v1231; // [sp+4h] [bp-B1Ch]@333
  int v1232; // [sp+4h] [bp-B1Ch]@344
  int v1233; // [sp+4h] [bp-B1Ch]@355
  int v1234; // [sp+4h] [bp-B1Ch]@366
  int v1235; // [sp+4h] [bp-B1Ch]@377
  int v1236; // [sp+4h] [bp-B1Ch]@388
  int v1237; // [sp+4h] [bp-B1Ch]@399
  int v1238; // [sp+4h] [bp-B1Ch]@410
  int v1239; // [sp+4h] [bp-B1Ch]@421
  int v1240; // [sp+4h] [bp-B1Ch]@432
  int v1241; // [sp+4h] [bp-B1Ch]@443
  int v1242; // [sp+4h] [bp-B1Ch]@454
  int v1243; // [sp+4h] [bp-B1Ch]@465
  int v1244; // [sp+4h] [bp-B1Ch]@476
  int v1245; // [sp+4h] [bp-B1Ch]@487
  int v1246; // [sp+4h] [bp-B1Ch]@498
  int v1247; // [sp+4h] [bp-B1Ch]@509
  int v1248; // [sp+4h] [bp-B1Ch]@520
  int v1249; // [sp+4h] [bp-B1Ch]@531
  int v1250; // [sp+4h] [bp-B1Ch]@542
  int v1251; // [sp+4h] [bp-B1Ch]@553
  int v1252; // [sp+4h] [bp-B1Ch]@564
  int v1253; // [sp+4h] [bp-B1Ch]@575
  int v1254; // [sp+4h] [bp-B1Ch]@586
  int v1255; // [sp+4h] [bp-B1Ch]@597
  int v1256; // [sp+4h] [bp-B1Ch]@608
  int v1257; // [sp+4h] [bp-B1Ch]@619
  int v1258; // [sp+4h] [bp-B1Ch]@630
  int v1259; // [sp+4h] [bp-B1Ch]@641
  int v1260; // [sp+4h] [bp-B1Ch]@652
  int v1261; // [sp+4h] [bp-B1Ch]@663
  int v1262; // [sp+4h] [bp-B1Ch]@674
  int v1263; // [sp+4h] [bp-B1Ch]@685
  int v1264; // [sp+4h] [bp-B1Ch]@696
  int v1265; // [sp+4h] [bp-B1Ch]@707
  int v1266; // [sp+4h] [bp-B1Ch]@718
  int v1267; // [sp+4h] [bp-B1Ch]@729
  int v1268; // [sp+4h] [bp-B1Ch]@740
  int v1269; // [sp+4h] [bp-B1Ch]@751
  int v1270; // [sp+4h] [bp-B1Ch]@762
  int v1271; // [sp+4h] [bp-B1Ch]@773
  int v1272; // [sp+4h] [bp-B1Ch]@784
  int v1273; // [sp+Ch] [bp-B14h]@784
  void *v1274; // [sp+14h] [bp-B0Ch]@784
  int v1275; // [sp+1Ch] [bp-B04h]@773
  void *v1276; // [sp+24h] [bp-AFCh]@773
  int v1277; // [sp+2Ch] [bp-AF4h]@762
  void *v1278; // [sp+34h] [bp-AECh]@762
  int v1279; // [sp+3Ch] [bp-AE4h]@751
  void *v1280; // [sp+44h] [bp-ADCh]@751
  int v1281; // [sp+4Ch] [bp-AD4h]@740
  void *v1282; // [sp+54h] [bp-ACCh]@740
  int v1283; // [sp+5Ch] [bp-AC4h]@729
  void *v1284; // [sp+64h] [bp-ABCh]@729
  int v1285; // [sp+6Ch] [bp-AB4h]@718
  void *v1286; // [sp+74h] [bp-AACh]@718
  int v1287; // [sp+7Ch] [bp-AA4h]@707
  void *v1288; // [sp+84h] [bp-A9Ch]@707
  int v1289; // [sp+8Ch] [bp-A94h]@696
  void *v1290; // [sp+94h] [bp-A8Ch]@696
  int v1291; // [sp+9Ch] [bp-A84h]@685
  void *v1292; // [sp+A4h] [bp-A7Ch]@685
  int v1293; // [sp+ACh] [bp-A74h]@674
  void *v1294; // [sp+B4h] [bp-A6Ch]@674
  int v1295; // [sp+BCh] [bp-A64h]@663
  void *v1296; // [sp+C4h] [bp-A5Ch]@663
  int v1297; // [sp+CCh] [bp-A54h]@652
  void *v1298; // [sp+D4h] [bp-A4Ch]@652
  int v1299; // [sp+DCh] [bp-A44h]@641
  void *v1300; // [sp+E4h] [bp-A3Ch]@641
  int v1301; // [sp+ECh] [bp-A34h]@630
  void *v1302; // [sp+F4h] [bp-A2Ch]@630
  int v1303; // [sp+FCh] [bp-A24h]@619
  void *v1304; // [sp+104h] [bp-A1Ch]@619
  int v1305; // [sp+10Ch] [bp-A14h]@608
  void *v1306; // [sp+114h] [bp-A0Ch]@608
  int v1307; // [sp+11Ch] [bp-A04h]@597
  void *v1308; // [sp+124h] [bp-9FCh]@597
  int v1309; // [sp+12Ch] [bp-9F4h]@586
  void *v1310; // [sp+134h] [bp-9ECh]@586
  int v1311; // [sp+13Ch] [bp-9E4h]@575
  void *v1312; // [sp+144h] [bp-9DCh]@575
  int v1313; // [sp+14Ch] [bp-9D4h]@564
  void *v1314; // [sp+154h] [bp-9CCh]@564
  int v1315; // [sp+15Ch] [bp-9C4h]@553
  void *v1316; // [sp+164h] [bp-9BCh]@553
  int v1317; // [sp+16Ch] [bp-9B4h]@542
  void *v1318; // [sp+174h] [bp-9ACh]@542
  int v1319; // [sp+17Ch] [bp-9A4h]@531
  void *v1320; // [sp+184h] [bp-99Ch]@531
  int v1321; // [sp+18Ch] [bp-994h]@520
  void *v1322; // [sp+194h] [bp-98Ch]@520
  int v1323; // [sp+19Ch] [bp-984h]@509
  void *v1324; // [sp+1A4h] [bp-97Ch]@509
  int v1325; // [sp+1ACh] [bp-974h]@498
  void *v1326; // [sp+1B4h] [bp-96Ch]@498
  int v1327; // [sp+1BCh] [bp-964h]@487
  void *v1328; // [sp+1C4h] [bp-95Ch]@487
  int v1329; // [sp+1CCh] [bp-954h]@476
  void *v1330; // [sp+1D4h] [bp-94Ch]@476
  int v1331; // [sp+1DCh] [bp-944h]@465
  void *v1332; // [sp+1E4h] [bp-93Ch]@465
  int v1333; // [sp+1ECh] [bp-934h]@454
  void *v1334; // [sp+1F4h] [bp-92Ch]@454
  int v1335; // [sp+1FCh] [bp-924h]@443
  void *v1336; // [sp+204h] [bp-91Ch]@443
  int v1337; // [sp+20Ch] [bp-914h]@432
  void *v1338; // [sp+214h] [bp-90Ch]@432
  int v1339; // [sp+21Ch] [bp-904h]@421
  void *v1340; // [sp+224h] [bp-8FCh]@421
  int v1341; // [sp+22Ch] [bp-8F4h]@410
  void *v1342; // [sp+234h] [bp-8ECh]@410
  int v1343; // [sp+23Ch] [bp-8E4h]@399
  void *v1344; // [sp+244h] [bp-8DCh]@399
  int v1345; // [sp+24Ch] [bp-8D4h]@388
  void *v1346; // [sp+254h] [bp-8CCh]@388
  int v1347; // [sp+25Ch] [bp-8C4h]@377
  void *v1348; // [sp+264h] [bp-8BCh]@377
  int v1349; // [sp+26Ch] [bp-8B4h]@366
  void *v1350; // [sp+274h] [bp-8ACh]@366
  int v1351; // [sp+27Ch] [bp-8A4h]@355
  void *v1352; // [sp+284h] [bp-89Ch]@355
  int v1353; // [sp+28Ch] [bp-894h]@344
  void *v1354; // [sp+294h] [bp-88Ch]@344
  int v1355; // [sp+29Ch] [bp-884h]@333
  void *v1356; // [sp+2A4h] [bp-87Ch]@333
  int v1357; // [sp+2ACh] [bp-874h]@322
  void *v1358; // [sp+2B4h] [bp-86Ch]@322
  int v1359; // [sp+2BCh] [bp-864h]@311
  void *v1360; // [sp+2C4h] [bp-85Ch]@311
  int v1361; // [sp+2CCh] [bp-854h]@300
  void *v1362; // [sp+2D4h] [bp-84Ch]@300
  int v1363; // [sp+2DCh] [bp-844h]@289
  void *v1364; // [sp+2E4h] [bp-83Ch]@289
  int v1365; // [sp+2ECh] [bp-834h]@278
  void *v1366; // [sp+2F4h] [bp-82Ch]@278
  int v1367; // [sp+2FCh] [bp-824h]@267
  void *v1368; // [sp+304h] [bp-81Ch]@267
  int v1369; // [sp+30Ch] [bp-814h]@256
  void *v1370; // [sp+314h] [bp-80Ch]@256
  int v1371; // [sp+31Ch] [bp-804h]@245
  void *v1372; // [sp+324h] [bp-7FCh]@245
  int v1373; // [sp+32Ch] [bp-7F4h]@234
  void *v1374; // [sp+334h] [bp-7ECh]@234
  int v1375; // [sp+33Ch] [bp-7E4h]@223
  void *v1376; // [sp+344h] [bp-7DCh]@223
  int v1377; // [sp+34Ch] [bp-7D4h]@212
  void *v1378; // [sp+354h] [bp-7CCh]@212
  int v1379; // [sp+35Ch] [bp-7C4h]@201
  void *v1380; // [sp+364h] [bp-7BCh]@201
  int v1381; // [sp+36Ch] [bp-7B4h]@190
  void *v1382; // [sp+374h] [bp-7ACh]@190
  int v1383; // [sp+37Ch] [bp-7A4h]@179
  void *v1384; // [sp+384h] [bp-79Ch]@179
  int v1385; // [sp+38Ch] [bp-794h]@168
  void *v1386; // [sp+394h] [bp-78Ch]@168
  int v1387; // [sp+39Ch] [bp-784h]@157
  void *v1388; // [sp+3A4h] [bp-77Ch]@157
  int v1389; // [sp+3ACh] [bp-774h]@146
  void *v1390; // [sp+3B4h] [bp-76Ch]@146
  int v1391; // [sp+3BCh] [bp-764h]@135
  void *v1392; // [sp+3C4h] [bp-75Ch]@135
  int v1393; // [sp+3CCh] [bp-754h]@124
  void *v1394; // [sp+3D4h] [bp-74Ch]@124
  int v1395; // [sp+3DCh] [bp-744h]@113
  void *v1396; // [sp+3E4h] [bp-73Ch]@113
  int v1397; // [sp+3ECh] [bp-734h]@102
  void *v1398; // [sp+3F4h] [bp-72Ch]@102
  int v1399; // [sp+3FCh] [bp-724h]@91
  void *v1400; // [sp+404h] [bp-71Ch]@91
  int v1401; // [sp+40Ch] [bp-714h]@80
  void *v1402; // [sp+414h] [bp-70Ch]@80
  int v1403; // [sp+41Ch] [bp-704h]@69
  void *v1404; // [sp+424h] [bp-6FCh]@69
  int v1405; // [sp+42Ch] [bp-6F4h]@58
  void *v1406; // [sp+434h] [bp-6ECh]@58
  int v1407; // [sp+43Ch] [bp-6E4h]@47
  void *v1408; // [sp+444h] [bp-6DCh]@47
  int v1409; // [sp+44Ch] [bp-6D4h]@36
  void *v1410; // [sp+454h] [bp-6CCh]@36
  int v1411; // [sp+45Ch] [bp-6C4h]@25
  void *s1; // [sp+464h] [bp-6BCh]@25
  char v1413; // [sp+468h] [bp-6B8h]@33
  int v1414; // [sp+470h] [bp-6B0h]@33
  int v1415; // [sp+474h] [bp-6ACh]@33
  __int16 v1416; // [sp+478h] [bp-6A8h]@33
  __int16 v1417; // [sp+47Ah] [bp-6A6h]@33
  int v1418; // [sp+47Ch] [bp-6A4h]@33
  char v1419; // [sp+480h] [bp-6A0h]@44
  int v1420; // [sp+488h] [bp-698h]@44
  int v1421; // [sp+48Ch] [bp-694h]@44
  __int16 v1422; // [sp+490h] [bp-690h]@44
  __int16 v1423; // [sp+492h] [bp-68Eh]@44
  int v1424; // [sp+494h] [bp-68Ch]@44
  char v1425; // [sp+498h] [bp-688h]@55
  int v1426; // [sp+4A0h] [bp-680h]@55
  int v1427; // [sp+4A4h] [bp-67Ch]@55
  __int16 v1428; // [sp+4A8h] [bp-678h]@55
  __int16 v1429; // [sp+4AAh] [bp-676h]@55
  int v1430; // [sp+4ACh] [bp-674h]@55
  char v1431; // [sp+4B0h] [bp-670h]@66
  int v1432; // [sp+4B8h] [bp-668h]@66
  int v1433; // [sp+4BCh] [bp-664h]@66
  __int16 v1434; // [sp+4C0h] [bp-660h]@66
  __int16 v1435; // [sp+4C2h] [bp-65Eh]@66
  int v1436; // [sp+4C4h] [bp-65Ch]@66
  char v1437; // [sp+4C8h] [bp-658h]@77
  int v1438; // [sp+4D0h] [bp-650h]@77
  int v1439; // [sp+4D4h] [bp-64Ch]@77
  __int16 v1440; // [sp+4D8h] [bp-648h]@77
  __int16 v1441; // [sp+4DAh] [bp-646h]@77
  int v1442; // [sp+4DCh] [bp-644h]@77
  char v1443; // [sp+4E0h] [bp-640h]@88
  int v1444; // [sp+4E8h] [bp-638h]@88
  int v1445; // [sp+4ECh] [bp-634h]@88
  __int16 v1446; // [sp+4F0h] [bp-630h]@88
  __int16 v1447; // [sp+4F2h] [bp-62Eh]@88
  int v1448; // [sp+4F4h] [bp-62Ch]@88
  char v1449; // [sp+4F8h] [bp-628h]@99
  int v1450; // [sp+500h] [bp-620h]@99
  int v1451; // [sp+504h] [bp-61Ch]@99
  __int16 v1452; // [sp+508h] [bp-618h]@99
  __int16 v1453; // [sp+50Ah] [bp-616h]@99
  int v1454; // [sp+50Ch] [bp-614h]@99
  char v1455; // [sp+510h] [bp-610h]@110
  int v1456; // [sp+518h] [bp-608h]@110
  int v1457; // [sp+51Ch] [bp-604h]@110
  __int16 v1458; // [sp+520h] [bp-600h]@110
  __int16 v1459; // [sp+522h] [bp-5FEh]@110
  int v1460; // [sp+524h] [bp-5FCh]@110
  char v1461; // [sp+528h] [bp-5F8h]@121
  int v1462; // [sp+530h] [bp-5F0h]@121
  int v1463; // [sp+534h] [bp-5ECh]@121
  __int16 v1464; // [sp+538h] [bp-5E8h]@121
  __int16 v1465; // [sp+53Ah] [bp-5E6h]@121
  int v1466; // [sp+53Ch] [bp-5E4h]@121
  char v1467; // [sp+540h] [bp-5E0h]@132
  int v1468; // [sp+548h] [bp-5D8h]@132
  int v1469; // [sp+54Ch] [bp-5D4h]@132
  __int16 v1470; // [sp+550h] [bp-5D0h]@132
  __int16 v1471; // [sp+552h] [bp-5CEh]@132
  int v1472; // [sp+554h] [bp-5CCh]@132
  char v1473; // [sp+558h] [bp-5C8h]@143
  int v1474; // [sp+560h] [bp-5C0h]@143
  int v1475; // [sp+564h] [bp-5BCh]@143
  __int16 v1476; // [sp+568h] [bp-5B8h]@143
  __int16 v1477; // [sp+56Ah] [bp-5B6h]@143
  int v1478; // [sp+56Ch] [bp-5B4h]@143
  char v1479; // [sp+570h] [bp-5B0h]@154
  int v1480; // [sp+578h] [bp-5A8h]@154
  int v1481; // [sp+57Ch] [bp-5A4h]@154
  __int16 v1482; // [sp+580h] [bp-5A0h]@154
  __int16 v1483; // [sp+582h] [bp-59Eh]@154
  int v1484; // [sp+584h] [bp-59Ch]@154
  char v1485; // [sp+588h] [bp-598h]@165
  int v1486; // [sp+590h] [bp-590h]@165
  int v1487; // [sp+594h] [bp-58Ch]@165
  __int16 v1488; // [sp+598h] [bp-588h]@165
  __int16 v1489; // [sp+59Ah] [bp-586h]@165
  int v1490; // [sp+59Ch] [bp-584h]@165
  char v1491; // [sp+5A0h] [bp-580h]@176
  int v1492; // [sp+5A8h] [bp-578h]@176
  int v1493; // [sp+5ACh] [bp-574h]@176
  __int16 v1494; // [sp+5B0h] [bp-570h]@176
  __int16 v1495; // [sp+5B2h] [bp-56Eh]@176
  int v1496; // [sp+5B4h] [bp-56Ch]@176
  char v1497; // [sp+5B8h] [bp-568h]@187
  int v1498; // [sp+5C0h] [bp-560h]@187
  int v1499; // [sp+5C4h] [bp-55Ch]@187
  __int16 v1500; // [sp+5C8h] [bp-558h]@187
  __int16 v1501; // [sp+5CAh] [bp-556h]@187
  int v1502; // [sp+5CCh] [bp-554h]@187
  char v1503; // [sp+5D0h] [bp-550h]@198
  int v1504; // [sp+5D8h] [bp-548h]@198
  int v1505; // [sp+5DCh] [bp-544h]@198
  __int16 v1506; // [sp+5E0h] [bp-540h]@198
  __int16 v1507; // [sp+5E2h] [bp-53Eh]@198
  int v1508; // [sp+5E4h] [bp-53Ch]@198
  char v1509; // [sp+5E8h] [bp-538h]@209
  int v1510; // [sp+5F0h] [bp-530h]@209
  int v1511; // [sp+5F4h] [bp-52Ch]@209
  __int16 v1512; // [sp+5F8h] [bp-528h]@209
  __int16 v1513; // [sp+5FAh] [bp-526h]@209
  int v1514; // [sp+5FCh] [bp-524h]@209
  char v1515; // [sp+600h] [bp-520h]@220
  int v1516; // [sp+608h] [bp-518h]@220
  int v1517; // [sp+60Ch] [bp-514h]@220
  __int16 v1518; // [sp+610h] [bp-510h]@220
  __int16 v1519; // [sp+612h] [bp-50Eh]@220
  int v1520; // [sp+614h] [bp-50Ch]@220
  char v1521; // [sp+618h] [bp-508h]@231
  int v1522; // [sp+620h] [bp-500h]@231
  int v1523; // [sp+624h] [bp-4FCh]@231
  __int16 v1524; // [sp+628h] [bp-4F8h]@231
  __int16 v1525; // [sp+62Ah] [bp-4F6h]@231
  int v1526; // [sp+62Ch] [bp-4F4h]@231
  char v1527; // [sp+630h] [bp-4F0h]@242
  int v1528; // [sp+638h] [bp-4E8h]@242
  int v1529; // [sp+63Ch] [bp-4E4h]@242
  __int16 v1530; // [sp+640h] [bp-4E0h]@242
  __int16 v1531; // [sp+642h] [bp-4DEh]@242
  int v1532; // [sp+644h] [bp-4DCh]@242
  char v1533; // [sp+648h] [bp-4D8h]@253
  int v1534; // [sp+650h] [bp-4D0h]@253
  int v1535; // [sp+654h] [bp-4CCh]@253
  __int16 v1536; // [sp+658h] [bp-4C8h]@253
  __int16 v1537; // [sp+65Ah] [bp-4C6h]@253
  int v1538; // [sp+65Ch] [bp-4C4h]@253
  char v1539; // [sp+660h] [bp-4C0h]@264
  int v1540; // [sp+668h] [bp-4B8h]@264
  int v1541; // [sp+66Ch] [bp-4B4h]@264
  __int16 v1542; // [sp+670h] [bp-4B0h]@264
  __int16 v1543; // [sp+672h] [bp-4AEh]@264
  int v1544; // [sp+674h] [bp-4ACh]@264
  char v1545; // [sp+678h] [bp-4A8h]@275
  int v1546; // [sp+680h] [bp-4A0h]@275
  int v1547; // [sp+684h] [bp-49Ch]@275
  __int16 v1548; // [sp+688h] [bp-498h]@275
  __int16 v1549; // [sp+68Ah] [bp-496h]@275
  int v1550; // [sp+68Ch] [bp-494h]@275
  char v1551; // [sp+690h] [bp-490h]@286
  int v1552; // [sp+698h] [bp-488h]@286
  int v1553; // [sp+69Ch] [bp-484h]@286
  __int16 v1554; // [sp+6A0h] [bp-480h]@286
  __int16 v1555; // [sp+6A2h] [bp-47Eh]@286
  int v1556; // [sp+6A4h] [bp-47Ch]@286
  char v1557; // [sp+6A8h] [bp-478h]@297
  int v1558; // [sp+6B0h] [bp-470h]@297
  int v1559; // [sp+6B4h] [bp-46Ch]@297
  __int16 v1560; // [sp+6B8h] [bp-468h]@297
  __int16 v1561; // [sp+6BAh] [bp-466h]@297
  int v1562; // [sp+6BCh] [bp-464h]@297
  char v1563; // [sp+6C0h] [bp-460h]@308
  int v1564; // [sp+6C8h] [bp-458h]@308
  int v1565; // [sp+6CCh] [bp-454h]@308
  __int16 v1566; // [sp+6D0h] [bp-450h]@308
  __int16 v1567; // [sp+6D2h] [bp-44Eh]@308
  int v1568; // [sp+6D4h] [bp-44Ch]@308
  char v1569; // [sp+6D8h] [bp-448h]@319
  int v1570; // [sp+6E0h] [bp-440h]@319
  int v1571; // [sp+6E4h] [bp-43Ch]@319
  __int16 v1572; // [sp+6E8h] [bp-438h]@319
  __int16 v1573; // [sp+6EAh] [bp-436h]@319
  int v1574; // [sp+6ECh] [bp-434h]@319
  char v1575; // [sp+6F0h] [bp-430h]@330
  int v1576; // [sp+6F8h] [bp-428h]@330
  int v1577; // [sp+6FCh] [bp-424h]@330
  __int16 v1578; // [sp+700h] [bp-420h]@330
  __int16 v1579; // [sp+702h] [bp-41Eh]@330
  int v1580; // [sp+704h] [bp-41Ch]@330
  char v1581; // [sp+708h] [bp-418h]@341
  int v1582; // [sp+710h] [bp-410h]@341
  int v1583; // [sp+714h] [bp-40Ch]@341
  __int16 v1584; // [sp+718h] [bp-408h]@341
  __int16 v1585; // [sp+71Ah] [bp-406h]@341
  int v1586; // [sp+71Ch] [bp-404h]@341
  char v1587; // [sp+720h] [bp-400h]@352
  int v1588; // [sp+728h] [bp-3F8h]@352
  int v1589; // [sp+72Ch] [bp-3F4h]@352
  __int16 v1590; // [sp+730h] [bp-3F0h]@352
  __int16 v1591; // [sp+732h] [bp-3EEh]@352
  int v1592; // [sp+734h] [bp-3ECh]@352
  char v1593; // [sp+738h] [bp-3E8h]@363
  int v1594; // [sp+740h] [bp-3E0h]@363
  int v1595; // [sp+744h] [bp-3DCh]@363
  __int16 v1596; // [sp+748h] [bp-3D8h]@363
  __int16 v1597; // [sp+74Ah] [bp-3D6h]@363
  int v1598; // [sp+74Ch] [bp-3D4h]@363
  char v1599; // [sp+750h] [bp-3D0h]@374
  int v1600; // [sp+758h] [bp-3C8h]@374
  int v1601; // [sp+75Ch] [bp-3C4h]@374
  __int16 v1602; // [sp+760h] [bp-3C0h]@374
  __int16 v1603; // [sp+762h] [bp-3BEh]@374
  int v1604; // [sp+764h] [bp-3BCh]@374
  char v1605; // [sp+768h] [bp-3B8h]@385
  int v1606; // [sp+770h] [bp-3B0h]@385
  int v1607; // [sp+774h] [bp-3ACh]@385
  __int16 v1608; // [sp+778h] [bp-3A8h]@385
  __int16 v1609; // [sp+77Ah] [bp-3A6h]@385
  int v1610; // [sp+77Ch] [bp-3A4h]@385
  char v1611; // [sp+780h] [bp-3A0h]@396
  int v1612; // [sp+788h] [bp-398h]@396
  int v1613; // [sp+78Ch] [bp-394h]@396
  __int16 v1614; // [sp+790h] [bp-390h]@396
  __int16 v1615; // [sp+792h] [bp-38Eh]@396
  int v1616; // [sp+794h] [bp-38Ch]@396
  char v1617; // [sp+798h] [bp-388h]@407
  int v1618; // [sp+7A0h] [bp-380h]@407
  int v1619; // [sp+7A4h] [bp-37Ch]@407
  __int16 v1620; // [sp+7A8h] [bp-378h]@407
  __int16 v1621; // [sp+7AAh] [bp-376h]@407
  int v1622; // [sp+7ACh] [bp-374h]@407
  char v1623; // [sp+7B0h] [bp-370h]@418
  int v1624; // [sp+7B8h] [bp-368h]@418
  int v1625; // [sp+7BCh] [bp-364h]@418
  __int16 v1626; // [sp+7C0h] [bp-360h]@418
  __int16 v1627; // [sp+7C2h] [bp-35Eh]@418
  int v1628; // [sp+7C4h] [bp-35Ch]@418
  char v1629; // [sp+7C8h] [bp-358h]@429
  int v1630; // [sp+7D0h] [bp-350h]@429
  int v1631; // [sp+7D4h] [bp-34Ch]@429
  __int16 v1632; // [sp+7D8h] [bp-348h]@429
  __int16 v1633; // [sp+7DAh] [bp-346h]@429
  int v1634; // [sp+7DCh] [bp-344h]@429
  char v1635; // [sp+7E0h] [bp-340h]@440
  int v1636; // [sp+7E8h] [bp-338h]@440
  int v1637; // [sp+7ECh] [bp-334h]@440
  __int16 v1638; // [sp+7F0h] [bp-330h]@440
  __int16 v1639; // [sp+7F2h] [bp-32Eh]@440
  int v1640; // [sp+7F4h] [bp-32Ch]@440
  char v1641; // [sp+7F8h] [bp-328h]@451
  int v1642; // [sp+800h] [bp-320h]@451
  int v1643; // [sp+804h] [bp-31Ch]@451
  __int16 v1644; // [sp+808h] [bp-318h]@451
  __int16 v1645; // [sp+80Ah] [bp-316h]@451
  int v1646; // [sp+80Ch] [bp-314h]@451
  char v1647; // [sp+810h] [bp-310h]@462
  int v1648; // [sp+818h] [bp-308h]@462
  int v1649; // [sp+81Ch] [bp-304h]@462
  __int16 v1650; // [sp+820h] [bp-300h]@462
  __int16 v1651; // [sp+822h] [bp-2FEh]@462
  int v1652; // [sp+824h] [bp-2FCh]@462
  char v1653; // [sp+828h] [bp-2F8h]@473
  int v1654; // [sp+830h] [bp-2F0h]@473
  int v1655; // [sp+834h] [bp-2ECh]@473
  __int16 v1656; // [sp+838h] [bp-2E8h]@473
  __int16 v1657; // [sp+83Ah] [bp-2E6h]@473
  int v1658; // [sp+83Ch] [bp-2E4h]@473
  char v1659; // [sp+840h] [bp-2E0h]@484
  int v1660; // [sp+848h] [bp-2D8h]@484
  int v1661; // [sp+84Ch] [bp-2D4h]@484
  __int16 v1662; // [sp+850h] [bp-2D0h]@484
  __int16 v1663; // [sp+852h] [bp-2CEh]@484
  int v1664; // [sp+854h] [bp-2CCh]@484
  char v1665; // [sp+858h] [bp-2C8h]@495
  int v1666; // [sp+860h] [bp-2C0h]@495
  int v1667; // [sp+864h] [bp-2BCh]@495
  __int16 v1668; // [sp+868h] [bp-2B8h]@495
  __int16 v1669; // [sp+86Ah] [bp-2B6h]@495
  int v1670; // [sp+86Ch] [bp-2B4h]@495
  char v1671; // [sp+870h] [bp-2B0h]@506
  int v1672; // [sp+878h] [bp-2A8h]@506
  int v1673; // [sp+87Ch] [bp-2A4h]@506
  __int16 v1674; // [sp+880h] [bp-2A0h]@506
  __int16 v1675; // [sp+882h] [bp-29Eh]@506
  int v1676; // [sp+884h] [bp-29Ch]@506
  char v1677; // [sp+888h] [bp-298h]@517
  int v1678; // [sp+890h] [bp-290h]@517
  int v1679; // [sp+894h] [bp-28Ch]@517
  __int16 v1680; // [sp+898h] [bp-288h]@517
  __int16 v1681; // [sp+89Ah] [bp-286h]@517
  int v1682; // [sp+89Ch] [bp-284h]@517
  char v1683; // [sp+8A0h] [bp-280h]@528
  int v1684; // [sp+8A8h] [bp-278h]@528
  int v1685; // [sp+8ACh] [bp-274h]@528
  __int16 v1686; // [sp+8B0h] [bp-270h]@528
  __int16 v1687; // [sp+8B2h] [bp-26Eh]@528
  int v1688; // [sp+8B4h] [bp-26Ch]@528
  char v1689; // [sp+8B8h] [bp-268h]@539
  int v1690; // [sp+8C0h] [bp-260h]@539
  int v1691; // [sp+8C4h] [bp-25Ch]@539
  __int16 v1692; // [sp+8C8h] [bp-258h]@539
  __int16 v1693; // [sp+8CAh] [bp-256h]@539
  int v1694; // [sp+8CCh] [bp-254h]@539
  char v1695; // [sp+8D0h] [bp-250h]@550
  int v1696; // [sp+8D8h] [bp-248h]@550
  int v1697; // [sp+8DCh] [bp-244h]@550
  __int16 v1698; // [sp+8E0h] [bp-240h]@550
  __int16 v1699; // [sp+8E2h] [bp-23Eh]@550
  int v1700; // [sp+8E4h] [bp-23Ch]@550
  char v1701; // [sp+8E8h] [bp-238h]@561
  int v1702; // [sp+8F0h] [bp-230h]@561
  int v1703; // [sp+8F4h] [bp-22Ch]@561
  __int16 v1704; // [sp+8F8h] [bp-228h]@561
  __int16 v1705; // [sp+8FAh] [bp-226h]@561
  int v1706; // [sp+8FCh] [bp-224h]@561
  char v1707; // [sp+900h] [bp-220h]@572
  int v1708; // [sp+908h] [bp-218h]@572
  int v1709; // [sp+90Ch] [bp-214h]@572
  __int16 v1710; // [sp+910h] [bp-210h]@572
  __int16 v1711; // [sp+912h] [bp-20Eh]@572
  int v1712; // [sp+914h] [bp-20Ch]@572
  char v1713; // [sp+918h] [bp-208h]@583
  int v1714; // [sp+920h] [bp-200h]@583
  int v1715; // [sp+924h] [bp-1FCh]@583
  __int16 v1716; // [sp+928h] [bp-1F8h]@583
  __int16 v1717; // [sp+92Ah] [bp-1F6h]@583
  int v1718; // [sp+92Ch] [bp-1F4h]@583
  char v1719; // [sp+930h] [bp-1F0h]@594
  int v1720; // [sp+938h] [bp-1E8h]@594
  int v1721; // [sp+93Ch] [bp-1E4h]@594
  __int16 v1722; // [sp+940h] [bp-1E0h]@594
  __int16 v1723; // [sp+942h] [bp-1DEh]@594
  int v1724; // [sp+944h] [bp-1DCh]@594
  char v1725; // [sp+948h] [bp-1D8h]@605
  int v1726; // [sp+950h] [bp-1D0h]@605
  int v1727; // [sp+954h] [bp-1CCh]@605
  __int16 v1728; // [sp+958h] [bp-1C8h]@605
  __int16 v1729; // [sp+95Ah] [bp-1C6h]@605
  int v1730; // [sp+95Ch] [bp-1C4h]@605
  char v1731; // [sp+960h] [bp-1C0h]@616
  int v1732; // [sp+968h] [bp-1B8h]@616
  int v1733; // [sp+96Ch] [bp-1B4h]@616
  __int16 v1734; // [sp+970h] [bp-1B0h]@616
  __int16 v1735; // [sp+972h] [bp-1AEh]@616
  int v1736; // [sp+974h] [bp-1ACh]@616
  char v1737; // [sp+978h] [bp-1A8h]@627
  int v1738; // [sp+980h] [bp-1A0h]@627
  int v1739; // [sp+984h] [bp-19Ch]@627
  __int16 v1740; // [sp+988h] [bp-198h]@627
  __int16 v1741; // [sp+98Ah] [bp-196h]@627
  int v1742; // [sp+98Ch] [bp-194h]@627
  char v1743; // [sp+990h] [bp-190h]@638
  int v1744; // [sp+998h] [bp-188h]@638
  int v1745; // [sp+99Ch] [bp-184h]@638
  __int16 v1746; // [sp+9A0h] [bp-180h]@638
  __int16 v1747; // [sp+9A2h] [bp-17Eh]@638
  int v1748; // [sp+9A4h] [bp-17Ch]@638
  char v1749; // [sp+9A8h] [bp-178h]@649
  int v1750; // [sp+9B0h] [bp-170h]@649
  int v1751; // [sp+9B4h] [bp-16Ch]@649
  __int16 v1752; // [sp+9B8h] [bp-168h]@649
  __int16 v1753; // [sp+9BAh] [bp-166h]@649
  int v1754; // [sp+9BCh] [bp-164h]@649
  char v1755; // [sp+9C0h] [bp-160h]@660
  int v1756; // [sp+9C8h] [bp-158h]@660
  int v1757; // [sp+9CCh] [bp-154h]@660
  __int16 v1758; // [sp+9D0h] [bp-150h]@660
  __int16 v1759; // [sp+9D2h] [bp-14Eh]@660
  int v1760; // [sp+9D4h] [bp-14Ch]@660
  char v1761; // [sp+9D8h] [bp-148h]@671
  int v1762; // [sp+9E0h] [bp-140h]@671
  int v1763; // [sp+9E4h] [bp-13Ch]@671
  __int16 v1764; // [sp+9E8h] [bp-138h]@671
  __int16 v1765; // [sp+9EAh] [bp-136h]@671
  int v1766; // [sp+9ECh] [bp-134h]@671
  char v1767; // [sp+9F0h] [bp-130h]@682
  int v1768; // [sp+9F8h] [bp-128h]@682
  int v1769; // [sp+9FCh] [bp-124h]@682
  __int16 v1770; // [sp+A00h] [bp-120h]@682
  __int16 v1771; // [sp+A02h] [bp-11Eh]@682
  int v1772; // [sp+A04h] [bp-11Ch]@682
  char v1773; // [sp+A08h] [bp-118h]@693
  int v1774; // [sp+A10h] [bp-110h]@693
  int v1775; // [sp+A14h] [bp-10Ch]@693
  __int16 v1776; // [sp+A18h] [bp-108h]@693
  __int16 v1777; // [sp+A1Ah] [bp-106h]@693
  int v1778; // [sp+A1Ch] [bp-104h]@693
  char v1779; // [sp+A20h] [bp-100h]@704
  int v1780; // [sp+A28h] [bp-F8h]@704
  int v1781; // [sp+A2Ch] [bp-F4h]@704
  __int16 v1782; // [sp+A30h] [bp-F0h]@704
  __int16 v1783; // [sp+A32h] [bp-EEh]@704
  int v1784; // [sp+A34h] [bp-ECh]@704
  char v1785; // [sp+A38h] [bp-E8h]@715
  int v1786; // [sp+A40h] [bp-E0h]@715
  int v1787; // [sp+A44h] [bp-DCh]@715
  __int16 v1788; // [sp+A48h] [bp-D8h]@715
  __int16 v1789; // [sp+A4Ah] [bp-D6h]@715
  int v1790; // [sp+A4Ch] [bp-D4h]@715
  char v1791; // [sp+A50h] [bp-D0h]@726
  int v1792; // [sp+A58h] [bp-C8h]@726
  int v1793; // [sp+A5Ch] [bp-C4h]@726
  __int16 v1794; // [sp+A60h] [bp-C0h]@726
  __int16 v1795; // [sp+A62h] [bp-BEh]@726
  int v1796; // [sp+A64h] [bp-BCh]@726
  char v1797; // [sp+A68h] [bp-B8h]@737
  int v1798; // [sp+A70h] [bp-B0h]@737
  int v1799; // [sp+A74h] [bp-ACh]@737
  __int16 v1800; // [sp+A78h] [bp-A8h]@737
  __int16 v1801; // [sp+A7Ah] [bp-A6h]@737
  int v1802; // [sp+A7Ch] [bp-A4h]@737
  char v1803; // [sp+A80h] [bp-A0h]@748
  int v1804; // [sp+A88h] [bp-98h]@748
  int v1805; // [sp+A8Ch] [bp-94h]@748
  __int16 v1806; // [sp+A90h] [bp-90h]@748
  __int16 v1807; // [sp+A92h] [bp-8Eh]@748
  int v1808; // [sp+A94h] [bp-8Ch]@748
  char v1809; // [sp+A98h] [bp-88h]@759
  int v1810; // [sp+AA0h] [bp-80h]@759
  int v1811; // [sp+AA4h] [bp-7Ch]@759
  __int16 v1812; // [sp+AA8h] [bp-78h]@759
  __int16 v1813; // [sp+AAAh] [bp-76h]@759
  int v1814; // [sp+AACh] [bp-74h]@759
  char v1815; // [sp+AB0h] [bp-70h]@770
  int v1816; // [sp+AB8h] [bp-68h]@770
  int v1817; // [sp+ABCh] [bp-64h]@770
  __int16 v1818; // [sp+AC0h] [bp-60h]@770
  __int16 v1819; // [sp+AC2h] [bp-5Eh]@770
  int v1820; // [sp+AC4h] [bp-5Ch]@770
  char v1821; // [sp+AC8h] [bp-58h]@781
  int v1822; // [sp+AD0h] [bp-50h]@781
  int v1823; // [sp+AD4h] [bp-4Ch]@781
  __int16 v1824; // [sp+AD8h] [bp-48h]@781
  __int16 v1825; // [sp+ADAh] [bp-46h]@781
  int v1826; // [sp+ADCh] [bp-44h]@781
  char v1827; // [sp+AE0h] [bp-40h]@792
  int v1828; // [sp+AE8h] [bp-38h]@792
  int v1829; // [sp+AECh] [bp-34h]@792
  __int16 v1830; // [sp+AF0h] [bp-30h]@792
  __int16 v1831; // [sp+AF2h] [bp-2Eh]@792
  int v1832; // [sp+AF4h] [bp-2Ch]@792

  v1 = (unsigned __int64 *)dword_27FE638;
  if ( dword_27FE638 )
  {
    do
    {
      v4 = v1;
      v5 = *v1 >> 32;
      v1 = (unsigned __int64 *)*v1;
      v6 = (void *)(v5 - 12);
      if ( (int *)(v5 - 12) != &dword_28898C0 )
      {
        v2 = (unsigned int *)(v5 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v3 = __ldrex(v2);
          while ( __strex(v3 - 1, v2) );
        }
        else
          v3 = (*v2)--;
        if ( v3 <= 0 )
          j_j_j_j__ZdlPv_9(v6);
      }
      operator delete(v4);
    }
    while ( v1 );
  }
  _aeabi_memclr4(legacyPredicates, 4 * *(_DWORD *)algn_27FE634);
  dword_27FE638 = 0;
  *(_DWORD *)algn_27FE63C = 0;
  v7 = (unsigned __int64 *)dword_27FE654;
  if ( dword_27FE654 )
      v10 = v7;
      v11 = *v7 >> 32;
      v7 = (unsigned __int64 *)*v7;
      v12 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v11 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      operator delete(v10);
    while ( v7 );
  _aeabi_memclr4(environmentSubfilters, 4 * unk_27FE650);
  dword_27FE654 = 0;
  unk_27FE658 = 0;
  sub_21E94B4(&s1, "player_with_instabuild");
  sub_21E94B4((void **)&v1411, "has_ability");
  v1203 = FilterList::findFilterDefinition((int **)&v1411);
  if ( v1203 )
    v13 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
    v14 = *(_DWORD *)algn_27FE634;
    v15 = v13 % *(_DWORD *)algn_27FE634;
    v16 = *(_DWORD *)(legacyPredicates + 4 * (v13 % *(_DWORD *)algn_27FE634));
    if ( !v16 )
      goto LABEL_33;
    v17 = *(_DWORD *)v16;
    v18 = s1;
    v19 = *(_DWORD *)(*(_DWORD *)v16 + 24);
    while ( 1 )
      if ( v19 == v13 )
        v20 = *(_DWORD **)(v17 + 4);
        v21 = *(v18 - 3);
        if ( v21 == *(v20 - 3) && !memcmp(v18, v20, v21) )
          break;
      v22 = *(_DWORD *)v17;
      if ( *(_DWORD *)v17 )
        v19 = *(_DWORD *)(v22 + 24);
        v16 = v17;
        v17 = *(_DWORD *)v17;
        if ( *(_DWORD *)(v22 + 24) % v14 == v15 )
          continue;
    v1133 = v16 == 0;
    if ( v16 )
      v1133 = *(_DWORD *)v16 == 0;
    if ( v1133 )
LABEL_33:
      v1414 = 0;
      v1415 = v1203;
      v1416 = 2;
      v1417 = 0;
      v1418 = 0;
      std::_Hashtable<std::string,std::pair<std::string const,EntityFilterGroup::LegacyMapping>,std::allocator<std::pair<std::string const,EntityFilterGroup::LegacyMapping>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,EntityFilterGroup::LegacyMapping>(
        &v1413,
        (unsigned __int64 *)&legacyPredicates,
        (int *)&s1,
        (int)&v1414);
  v23 = (void *)(v1411 - 12);
  if ( (int *)(v1411 - 12) != &dword_28898C0 )
    v853 = (unsigned int *)(v1411 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v854 = __ldrex(v853);
      while ( __strex(v854 - 1, v853) );
    else
      v854 = (*v853)--;
    if ( v854 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v855 = (unsigned int *)((char *)s1 - 4);
        v856 = __ldrex(v855);
      while ( __strex(v856 - 1, v855) );
      v856 = (*v855)--;
    if ( v856 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4(&v1410, "with_item");
  sub_21E94B4((void **)&v1409, "has_equipment");
  v1204 = FilterList::findFilterDefinition((int **)&v1409);
  if ( v1204 )
    v25 = sub_21B417C((int *)v1410, *((_DWORD *)v1410 - 3), -955291385);
    v26 = *(_DWORD *)algn_27FE634;
    v27 = v25 % *(_DWORD *)algn_27FE634;
    v28 = *(_DWORD *)(legacyPredicates + 4 * (v25 % *(_DWORD *)algn_27FE634));
    if ( !v28 )
      goto LABEL_44;
    v29 = *(_DWORD *)v28;
    v30 = v1410;
    v31 = *(_DWORD *)(*(_DWORD *)v28 + 24);
      if ( v31 == v25 )
        v32 = *(_DWORD **)(v29 + 4);
        v33 = *(v30 - 3);
        if ( v33 == *(v32 - 3) && !memcmp(v30, v32, v33) )
      v34 = *(_DWORD *)v29;
      if ( *(_DWORD *)v29 )
        v31 = *(_DWORD *)(v34 + 24);
        v28 = v29;
        v29 = *(_DWORD *)v29;
        if ( *(_DWORD *)(v34 + 24) % v26 == v27 )
    v1134 = v28 == 0;
    if ( v28 )
      v1134 = *(_DWORD *)v28 == 0;
    if ( v1134 )
LABEL_44:
      v1420 = 1;
      v1421 = v1204;
      v1422 = 0;
      v1423 = 0;
      v1424 = 4;
        &v1419,
        (int *)&v1410,
        (int)&v1420);
  v35 = (void *)(v1409 - 12);
  if ( (int *)(v1409 - 12) != &dword_28898C0 )
    v857 = (unsigned int *)(v1409 - 4);
        v858 = __ldrex(v857);
      while ( __strex(v858 - 1, v857) );
      v858 = (*v857)--;
    if ( v858 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = (char *)v1410 - 12;
  if ( (int *)((char *)v1410 - 12) != &dword_28898C0 )
    v859 = (unsigned int *)((char *)v1410 - 4);
        v860 = __ldrex(v859);
      while ( __strex(v860 - 1, v859) );
      v860 = (*v859)--;
    if ( v860 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  sub_21E94B4(&v1408, "without_item");
  sub_21E94B4((void **)&v1407, "has_equipment");
  v1205 = FilterList::findFilterDefinition((int **)&v1407);
  if ( v1205 )
    v37 = sub_21B417C((int *)v1408, *((_DWORD *)v1408 - 3), -955291385);
    v38 = *(_DWORD *)algn_27FE634;
    v39 = v37 % *(_DWORD *)algn_27FE634;
    v40 = *(_DWORD *)(legacyPredicates + 4 * (v37 % *(_DWORD *)algn_27FE634));
    if ( !v40 )
      goto LABEL_55;
    v41 = *(_DWORD *)v40;
    v42 = v1408;
    v43 = *(_DWORD *)(*(_DWORD *)v40 + 24);
      if ( v43 == v37 )
        v44 = *(_DWORD **)(v41 + 4);
        v45 = *(v42 - 3);
        if ( v45 == *(v44 - 3) && !memcmp(v42, v44, v45) )
      v46 = *(_DWORD *)v41;
      if ( *(_DWORD *)v41 )
        v43 = *(_DWORD *)(v46 + 24);
        v40 = v41;
        v41 = *(_DWORD *)v41;
        if ( *(_DWORD *)(v46 + 24) % v38 == v39 )
    v1135 = v40 == 0;
    if ( v40 )
      v1135 = *(_DWORD *)v40 == 0;
    if ( v1135 )
LABEL_55:
      v1426 = 0;
      v1427 = v1205;
      v1428 = 0;
      v1429 = 1;
      v1430 = 4;
        &v1425,
        (int *)&v1408,
        (int)&v1426);
  v47 = (void *)(v1407 - 12);
  if ( (int *)(v1407 - 12) != &dword_28898C0 )
    v861 = (unsigned int *)(v1407 - 4);
        v862 = __ldrex(v861);
      while ( __strex(v862 - 1, v861) );
      v862 = (*v861)--;
    if ( v862 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  v48 = (char *)v1408 - 12;
  if ( (int *)((char *)v1408 - 12) != &dword_28898C0 )
    v863 = (unsigned int *)((char *)v1408 - 4);
        v864 = __ldrex(v863);
      while ( __strex(v864 - 1, v863) );
      v864 = (*v863)--;
    if ( v864 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  sub_21E94B4(&v1406, "with_armor");
  sub_21E94B4((void **)&v1405, "has_equipment");
  v1206 = FilterList::findFilterDefinition((int **)&v1405);
  if ( v1206 )
    v49 = sub_21B417C((int *)v1406, *((_DWORD *)v1406 - 3), -955291385);
    v50 = *(_DWORD *)algn_27FE634;
    v51 = v49 % *(_DWORD *)algn_27FE634;
    v52 = *(_DWORD *)(legacyPredicates + 4 * (v49 % *(_DWORD *)algn_27FE634));
    if ( !v52 )
      goto LABEL_66;
    v53 = *(_DWORD *)v52;
    v54 = v1406;
    v55 = *(_DWORD *)(*(_DWORD *)v52 + 24);
      if ( v55 == v49 )
        v56 = *(_DWORD **)(v53 + 4);
        v57 = *(v54 - 3);
        if ( v57 == *(v56 - 3) && !memcmp(v54, v56, v57) )
      v58 = *(_DWORD *)v53;
      if ( *(_DWORD *)v53 )
        v55 = *(_DWORD *)(v58 + 24);
        v52 = v53;
        v53 = *(_DWORD *)v53;
        if ( *(_DWORD *)(v58 + 24) % v50 == v51 )
    v1136 = v52 == 0;
    if ( v52 )
      v1136 = *(_DWORD *)v52 == 0;
    if ( v1136 )
LABEL_66:
      v1432 = 1;
      v1433 = v1206;
      v1434 = 0;
      v1435 = 0;
      v1436 = 5;
        &v1431,
        (int *)&v1406,
        (int)&v1432);
  v59 = (void *)(v1405 - 12);
  if ( (int *)(v1405 - 12) != &dword_28898C0 )
    v865 = (unsigned int *)(v1405 - 4);
        v866 = __ldrex(v865);
      while ( __strex(v866 - 1, v865) );
      v866 = (*v865)--;
    if ( v866 <= 0 )
      j_j_j_j__ZdlPv_9(v59);
  v60 = (char *)v1406 - 12;
  if ( (int *)((char *)v1406 - 12) != &dword_28898C0 )
    v867 = (unsigned int *)((char *)v1406 - 4);
        v868 = __ldrex(v867);
      while ( __strex(v868 - 1, v867) );
      v868 = (*v867)--;
    if ( v868 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  sub_21E94B4(&v1404, "without_armor");
  sub_21E94B4((void **)&v1403, "has_equipment");
  v1207 = FilterList::findFilterDefinition((int **)&v1403);
  if ( v1207 )
    v61 = sub_21B417C((int *)v1404, *((_DWORD *)v1404 - 3), -955291385);
    v62 = *(_DWORD *)algn_27FE634;
    v63 = v61 % *(_DWORD *)algn_27FE634;
    v64 = *(_DWORD *)(legacyPredicates + 4 * (v61 % *(_DWORD *)algn_27FE634));
    if ( !v64 )
      goto LABEL_77;
    v65 = *(_DWORD *)v64;
    v66 = v1404;
    v67 = *(_DWORD *)(*(_DWORD *)v64 + 24);
      if ( v67 == v61 )
        v68 = *(_DWORD **)(v65 + 4);
        v69 = *(v66 - 3);
        if ( v69 == *(v68 - 3) && !memcmp(v66, v68, v69) )
      v70 = *(_DWORD *)v65;
      if ( *(_DWORD *)v65 )
        v67 = *(_DWORD *)(v70 + 24);
        v64 = v65;
        v65 = *(_DWORD *)v65;
        if ( *(_DWORD *)(v70 + 24) % v62 == v63 )
    v1137 = v64 == 0;
    if ( v64 )
      v1137 = *(_DWORD *)v64 == 0;
    if ( v1137 )
LABEL_77:
      v1438 = 0;
      v1439 = v1207;
      v1440 = 0;
      v1441 = 1;
      v1442 = 5;
        &v1437,
        (int *)&v1404,
        (int)&v1438);
  v71 = (void *)(v1403 - 12);
  if ( (int *)(v1403 - 12) != &dword_28898C0 )
    v869 = (unsigned int *)(v1403 - 4);
        v870 = __ldrex(v869);
      while ( __strex(v870 - 1, v869) );
      v870 = (*v869)--;
    if ( v870 <= 0 )
      j_j_j_j__ZdlPv_9(v71);
  v72 = (char *)v1404 - 12;
  if ( (int *)((char *)v1404 - 12) != &dword_28898C0 )
    v871 = (unsigned int *)((char *)v1404 - 4);
        v872 = __ldrex(v871);
      while ( __strex(v872 - 1, v871) );
      v872 = (*v871)--;
    if ( v872 <= 0 )
      j_j_j_j__ZdlPv_9(v72);
  sub_21E94B4(&v1402, "with_equipment");
  sub_21E94B4((void **)&v1401, "has_equipment");
  v1208 = FilterList::findFilterDefinition((int **)&v1401);
  if ( v1208 )
    v73 = sub_21B417C((int *)v1402, *((_DWORD *)v1402 - 3), -955291385);
    v74 = *(_DWORD *)algn_27FE634;
    v75 = v73 % *(_DWORD *)algn_27FE634;
    v76 = *(_DWORD *)(legacyPredicates + 4 * (v73 % *(_DWORD *)algn_27FE634));
    if ( !v76 )
      goto LABEL_88;
    v77 = *(_DWORD *)v76;
    v78 = v1402;
    v79 = *(_DWORD *)(*(_DWORD *)v76 + 24);
      if ( v79 == v73 )
        v80 = *(_DWORD **)(v77 + 4);
        v81 = *(v78 - 3);
        if ( v81 == *(v80 - 3) && !memcmp(v78, v80, v81) )
      v82 = *(_DWORD *)v77;
      if ( *(_DWORD *)v77 )
        v79 = *(_DWORD *)(v82 + 24);
        v76 = v77;
        v77 = *(_DWORD *)v77;
        if ( *(_DWORD *)(v82 + 24) % v74 == v75 )
    v1138 = v76 == 0;
    if ( v76 )
      v1138 = *(_DWORD *)v76 == 0;
    if ( v1138 )
LABEL_88:
      v1444 = 1;
      v1445 = v1208;
      v1446 = 0;
      v1447 = 0;
      v1448 = 6;
        &v1443,
        (int *)&v1402,
        (int)&v1444);
  v83 = (void *)(v1401 - 12);
  if ( (int *)(v1401 - 12) != &dword_28898C0 )
    v873 = (unsigned int *)(v1401 - 4);
        v874 = __ldrex(v873);
      while ( __strex(v874 - 1, v873) );
      v874 = (*v873)--;
    if ( v874 <= 0 )
      j_j_j_j__ZdlPv_9(v83);
  v84 = (char *)v1402 - 12;
  if ( (int *)((char *)v1402 - 12) != &dword_28898C0 )
    v875 = (unsigned int *)((char *)v1402 - 4);
        v876 = __ldrex(v875);
      while ( __strex(v876 - 1, v875) );
      v876 = (*v875)--;
    if ( v876 <= 0 )
      j_j_j_j__ZdlPv_9(v84);
  sub_21E94B4(&v1400, "without_equipment");
  sub_21E94B4((void **)&v1399, "has_equipment");
  v1209 = FilterList::findFilterDefinition((int **)&v1399);
  if ( v1209 )
    v85 = sub_21B417C((int *)v1400, *((_DWORD *)v1400 - 3), -955291385);
    v86 = *(_DWORD *)algn_27FE634;
    v87 = v85 % *(_DWORD *)algn_27FE634;
    v88 = *(_DWORD *)(legacyPredicates + 4 * (v85 % *(_DWORD *)algn_27FE634));
    if ( !v88 )
      goto LABEL_99;
    v89 = *(_DWORD *)v88;
    v90 = v1400;
    v91 = *(_DWORD *)(*(_DWORD *)v88 + 24);
      if ( v91 == v85 )
        v92 = *(_DWORD **)(v89 + 4);
        v93 = *(v90 - 3);
        if ( v93 == *(v92 - 3) && !memcmp(v90, v92, v93) )
      v94 = *(_DWORD *)v89;
      if ( *(_DWORD *)v89 )
        v91 = *(_DWORD *)(v94 + 24);
        v88 = v89;
        v89 = *(_DWORD *)v89;
        if ( *(_DWORD *)(v94 + 24) % v86 == v87 )
    v1139 = v88 == 0;
    if ( v88 )
      v1139 = *(_DWORD *)v88 == 0;
    if ( v1139 )
LABEL_99:
      v1450 = 0;
      v1451 = v1209;
      v1452 = 0;
      v1453 = 1;
      v1454 = 6;
        &v1449,
        (int *)&v1400,
        (int)&v1450);
  v95 = (void *)(v1399 - 12);
  if ( (int *)(v1399 - 12) != &dword_28898C0 )
    v877 = (unsigned int *)(v1399 - 4);
        v878 = __ldrex(v877);
      while ( __strex(v878 - 1, v877) );
      v878 = (*v877)--;
    if ( v878 <= 0 )
      j_j_j_j__ZdlPv_9(v95);
  v96 = (char *)v1400 - 12;
  if ( (int *)((char *)v1400 - 12) != &dword_28898C0 )
    v879 = (unsigned int *)((char *)v1400 - 4);
        v880 = __ldrex(v879);
      while ( __strex(v880 - 1, v879) );
      v880 = (*v879)--;
    if ( v880 <= 0 )
      j_j_j_j__ZdlPv_9(v96);
  sub_21E94B4(&v1398, "with_components");
  sub_21E94B4((void **)&v1397, "has_component");
  v1210 = FilterList::findFilterDefinition((int **)&v1397);
  if ( v1210 )
    v97 = sub_21B417C((int *)v1398, *((_DWORD *)v1398 - 3), -955291385);
    v98 = *(_DWORD *)algn_27FE634;
    v99 = v97 % *(_DWORD *)algn_27FE634;
    v100 = *(_DWORD *)(legacyPredicates + 4 * (v97 % *(_DWORD *)algn_27FE634));
    if ( !v100 )
      goto LABEL_110;
    v101 = *(_DWORD *)v100;
    v102 = v1398;
    v103 = *(_DWORD *)(*(_DWORD *)v100 + 24);
      if ( v103 == v97 )
        v104 = *(_DWORD **)(v101 + 4);
        v105 = *(v102 - 3);
        if ( v105 == *(v104 - 3) && !memcmp(v102, v104, v105) )
      v106 = *(_DWORD *)v101;
      if ( *(_DWORD *)v101 )
        v103 = *(_DWORD *)(v106 + 24);
        v100 = v101;
        v101 = *(_DWORD *)v101;
        if ( *(_DWORD *)(v106 + 24) % v98 == v99 )
    v1140 = v100 == 0;
    if ( v100 )
      v1140 = *(_DWORD *)v100 == 0;
    if ( v1140 )
LABEL_110:
      v1456 = 0;
      v1457 = v1210;
      v1458 = 0;
      v1459 = 0;
      v1460 = 2;
        &v1455,
        (int *)&v1398,
        (int)&v1456);
  v107 = (void *)(v1397 - 12);
  if ( (int *)(v1397 - 12) != &dword_28898C0 )
    v881 = (unsigned int *)(v1397 - 4);
        v882 = __ldrex(v881);
      while ( __strex(v882 - 1, v881) );
      v882 = (*v881)--;
    if ( v882 <= 0 )
      j_j_j_j__ZdlPv_9(v107);
  v108 = (char *)v1398 - 12;
  if ( (int *)((char *)v1398 - 12) != &dword_28898C0 )
    v883 = (unsigned int *)((char *)v1398 - 4);
        v884 = __ldrex(v883);
      while ( __strex(v884 - 1, v883) );
      v884 = (*v883)--;
    if ( v884 <= 0 )
      j_j_j_j__ZdlPv_9(v108);
  sub_21E94B4(&v1396, "without_components");
  sub_21E94B4((void **)&v1395, "has_component");
  v1211 = FilterList::findFilterDefinition((int **)&v1395);
  if ( v1211 )
    v109 = sub_21B417C((int *)v1396, *((_DWORD *)v1396 - 3), -955291385);
    v110 = *(_DWORD *)algn_27FE634;
    v111 = v109 % *(_DWORD *)algn_27FE634;
    v112 = *(_DWORD *)(legacyPredicates + 4 * (v109 % *(_DWORD *)algn_27FE634));
    if ( !v112 )
      goto LABEL_121;
    v113 = *(_DWORD *)v112;
    v114 = v1396;
    v115 = *(_DWORD *)(*(_DWORD *)v112 + 24);
      if ( v115 == v109 )
        v116 = *(_DWORD **)(v113 + 4);
        v117 = *(v114 - 3);
        if ( v117 == *(v116 - 3) && !memcmp(v114, v116, v117) )
      v118 = *(_DWORD *)v113;
      if ( *(_DWORD *)v113 )
        v115 = *(_DWORD *)(v118 + 24);
        v112 = v113;
        v113 = *(_DWORD *)v113;
        if ( *(_DWORD *)(v118 + 24) % v110 == v111 )
    v1141 = v112 == 0;
    if ( v112 )
      v1141 = *(_DWORD *)v112 == 0;
    if ( v1141 )
LABEL_121:
      v1462 = 0;
      v1463 = v1211;
      v1464 = 0;
      v1465 = 1;
      v1466 = 2;
        &v1461,
        (int *)&v1396,
        (int)&v1462);
  v119 = (void *)(v1395 - 12);
  if ( (int *)(v1395 - 12) != &dword_28898C0 )
    v885 = (unsigned int *)(v1395 - 4);
        v886 = __ldrex(v885);
      while ( __strex(v886 - 1, v885) );
      v886 = (*v885)--;
    if ( v886 <= 0 )
      j_j_j_j__ZdlPv_9(v119);
  v120 = (char *)v1396 - 12;
  if ( (int *)((char *)v1396 - 12) != &dword_28898C0 )
    v887 = (unsigned int *)((char *)v1396 - 4);
        v888 = __ldrex(v887);
      while ( __strex(v888 - 1, v887) );
      v888 = (*v887)--;
    if ( v888 <= 0 )
      j_j_j_j__ZdlPv_9(v120);
  sub_21E94B4(&v1394, "with_families");
  sub_21E94B4((void **)&v1393, "is_family");
  v1212 = FilterList::findFilterDefinition((int **)&v1393);
  if ( v1212 )
    v121 = sub_21B417C((int *)v1394, *((_DWORD *)v1394 - 3), -955291385);
    v122 = *(_DWORD *)algn_27FE634;
    v123 = v121 % *(_DWORD *)algn_27FE634;
    v124 = *(_DWORD *)(legacyPredicates + 4 * (v121 % *(_DWORD *)algn_27FE634));
    if ( !v124 )
      goto LABEL_132;
    v125 = *(_DWORD *)v124;
    v126 = v1394;
    v127 = *(_DWORD *)(*(_DWORD *)v124 + 24);
      if ( v127 == v121 )
        v128 = *(_DWORD **)(v125 + 4);
        v129 = *(v126 - 3);
        if ( v129 == *(v128 - 3) && !memcmp(v126, v128, v129) )
      v130 = *(_DWORD *)v125;
      if ( *(_DWORD *)v125 )
        v127 = *(_DWORD *)(v130 + 24);
        v124 = v125;
        v125 = *(_DWORD *)v125;
        if ( *(_DWORD *)(v130 + 24) % v122 == v123 )
    v1142 = v124 == 0;
    if ( v124 )
      v1142 = *(_DWORD *)v124 == 0;
    if ( v1142 )
LABEL_132:
      v1468 = 1;
      v1469 = v1212;
      v1470 = 0;
      v1471 = 0;
      v1472 = 2;
        &v1467,
        (int *)&v1394,
        (int)&v1468);
  v131 = (void *)(v1393 - 12);
  if ( (int *)(v1393 - 12) != &dword_28898C0 )
    v889 = (unsigned int *)(v1393 - 4);
        v890 = __ldrex(v889);
      while ( __strex(v890 - 1, v889) );
      v890 = (*v889)--;
    if ( v890 <= 0 )
      j_j_j_j__ZdlPv_9(v131);
  v132 = (char *)v1394 - 12;
  if ( (int *)((char *)v1394 - 12) != &dword_28898C0 )
    v891 = (unsigned int *)((char *)v1394 - 4);
        v892 = __ldrex(v891);
      while ( __strex(v892 - 1, v891) );
      v892 = (*v891)--;
    if ( v892 <= 0 )
      j_j_j_j__ZdlPv_9(v132);
  sub_21E94B4(&v1392, "without_families");
  sub_21E94B4((void **)&v1391, "is_family");
  v1213 = FilterList::findFilterDefinition((int **)&v1391);
  if ( v1213 )
    v133 = sub_21B417C((int *)v1392, *((_DWORD *)v1392 - 3), -955291385);
    v134 = *(_DWORD *)algn_27FE634;
    v135 = v133 % *(_DWORD *)algn_27FE634;
    v136 = *(_DWORD *)(legacyPredicates + 4 * (v133 % *(_DWORD *)algn_27FE634));
    if ( !v136 )
      goto LABEL_143;
    v137 = *(_DWORD *)v136;
    v138 = v1392;
    v139 = *(_DWORD *)(*(_DWORD *)v136 + 24);
      if ( v139 == v133 )
        v140 = *(_DWORD **)(v137 + 4);
        v141 = *(v138 - 3);
        if ( v141 == *(v140 - 3) && !memcmp(v138, v140, v141) )
      v142 = *(_DWORD *)v137;
      if ( *(_DWORD *)v137 )
        v139 = *(_DWORD *)(v142 + 24);
        v136 = v137;
        v137 = *(_DWORD *)v137;
        if ( *(_DWORD *)(v142 + 24) % v134 == v135 )
    v1143 = v136 == 0;
    if ( v136 )
      v1143 = *(_DWORD *)v136 == 0;
    if ( v1143 )
LABEL_143:
      v1474 = 0;
      v1475 = v1213;
      v1476 = 0;
      v1477 = 1;
      v1478 = 2;
        &v1473,
        (int *)&v1392,
        (int)&v1474);
  v143 = (void *)(v1391 - 12);
  if ( (int *)(v1391 - 12) != &dword_28898C0 )
    v893 = (unsigned int *)(v1391 - 4);
        v894 = __ldrex(v893);
      while ( __strex(v894 - 1, v893) );
      v894 = (*v893)--;
    if ( v894 <= 0 )
      j_j_j_j__ZdlPv_9(v143);
  v144 = (char *)v1392 - 12;
  if ( (int *)((char *)v1392 - 12) != &dword_28898C0 )
    v895 = (unsigned int *)((char *)v1392 - 4);
        v896 = __ldrex(v895);
      while ( __strex(v896 - 1, v895) );
      v896 = (*v895)--;
    if ( v896 <= 0 )
      j_j_j_j__ZdlPv_9(v144);
  sub_21E94B4(&v1390, "is_in_caravan");
  sub_21E94B4((void **)&v1389, "in_caravan");
  v1214 = FilterList::findFilterDefinition((int **)&v1389);
  if ( v1214 )
    v145 = sub_21B417C((int *)v1390, *((_DWORD *)v1390 - 3), -955291385);
    v146 = *(_DWORD *)algn_27FE634;
    v147 = v145 % *(_DWORD *)algn_27FE634;
    v148 = *(_DWORD *)(legacyPredicates + 4 * (v145 % *(_DWORD *)algn_27FE634));
    if ( !v148 )
      goto LABEL_154;
    v149 = *(_DWORD *)v148;
    v150 = v1390;
    v151 = *(_DWORD *)(*(_DWORD *)v148 + 24);
      if ( v151 == v145 )
        v152 = *(_DWORD **)(v149 + 4);
        v153 = *(v150 - 3);
        if ( v153 == *(v152 - 3) && !memcmp(v150, v152, v153) )
      v154 = *(_DWORD *)v149;
      if ( *(_DWORD *)v149 )
        v151 = *(_DWORD *)(v154 + 24);
        v148 = v149;
        v149 = *(_DWORD *)v149;
        if ( *(_DWORD *)(v154 + 24) % v146 == v147 )
    v1144 = v148 == 0;
    if ( v148 )
      v1144 = *(_DWORD *)v148 == 0;
    if ( v1144 )
LABEL_154:
      v1480 = 0;
      v1481 = v1214;
      v1482 = 0;
      v1483 = 0;
      v1484 = 0;
        &v1479,
        (int *)&v1390,
        (int)&v1480);
  v155 = (void *)(v1389 - 12);
  if ( (int *)(v1389 - 12) != &dword_28898C0 )
    v897 = (unsigned int *)(v1389 - 4);
        v898 = __ldrex(v897);
      while ( __strex(v898 - 1, v897) );
      v898 = (*v897)--;
    if ( v898 <= 0 )
      j_j_j_j__ZdlPv_9(v155);
  v156 = (char *)v1390 - 12;
  if ( (int *)((char *)v1390 - 12) != &dword_28898C0 )
    v899 = (unsigned int *)((char *)v1390 - 4);
        v900 = __ldrex(v899);
      while ( __strex(v900 - 1, v899) );
      v900 = (*v899)--;
    if ( v900 <= 0 )
      j_j_j_j__ZdlPv_9(v156);
  sub_21E94B4(&v1388, "is_not_in_caravan");
  sub_21E94B4((void **)&v1387, "in_caravan");
  v1215 = FilterList::findFilterDefinition((int **)&v1387);
  if ( v1215 )
    v157 = sub_21B417C((int *)v1388, *((_DWORD *)v1388 - 3), -955291385);
    v158 = *(_DWORD *)algn_27FE634;
    v159 = v157 % *(_DWORD *)algn_27FE634;
    v160 = *(_DWORD *)(legacyPredicates + 4 * (v157 % *(_DWORD *)algn_27FE634));
    if ( !v160 )
      goto LABEL_165;
    v161 = *(_DWORD *)v160;
    v162 = v1388;
    v163 = *(_DWORD *)(*(_DWORD *)v160 + 24);
      if ( v163 == v157 )
        v164 = *(_DWORD **)(v161 + 4);
        v165 = *(v162 - 3);
        if ( v165 == *(v164 - 3) && !memcmp(v162, v164, v165) )
      v166 = *(_DWORD *)v161;
      if ( *(_DWORD *)v161 )
        v163 = *(_DWORD *)(v166 + 24);
        v160 = v161;
        v161 = *(_DWORD *)v161;
        if ( *(_DWORD *)(v166 + 24) % v158 == v159 )
    v1145 = v160 == 0;
    if ( v160 )
      v1145 = *(_DWORD *)v160 == 0;
    if ( v1145 )
LABEL_165:
      v1486 = 0;
      v1487 = v1215;
      v1488 = 0;
      v1489 = 1;
      v1490 = 0;
        &v1485,
        (int *)&v1388,
        (int)&v1486);
  v167 = (void *)(v1387 - 12);
  if ( (int *)(v1387 - 12) != &dword_28898C0 )
    v901 = (unsigned int *)(v1387 - 4);
        v902 = __ldrex(v901);
      while ( __strex(v902 - 1, v901) );
      v902 = (*v901)--;
    if ( v902 <= 0 )
      j_j_j_j__ZdlPv_9(v167);
  v168 = (char *)v1388 - 12;
  if ( (int *)((char *)v1388 - 12) != &dword_28898C0 )
    v903 = (unsigned int *)((char *)v1388 - 4);
        v904 = __ldrex(v903);
      while ( __strex(v904 - 1, v903) );
      v904 = (*v903)--;
    if ( v904 <= 0 )
      j_j_j_j__ZdlPv_9(v168);
  sub_21E94B4(&v1386, "with_variant");
  sub_21E94B4((void **)&v1385, "is_variant");
  v1216 = FilterList::findFilterDefinition((int **)&v1385);
  if ( v1216 )
    v169 = sub_21B417C((int *)v1386, *((_DWORD *)v1386 - 3), -955291385);
    v170 = *(_DWORD *)algn_27FE634;
    v171 = v169 % *(_DWORD *)algn_27FE634;
    v172 = *(_DWORD *)(legacyPredicates + 4 * (v169 % *(_DWORD *)algn_27FE634));
    if ( !v172 )
      goto LABEL_176;
    v173 = *(_DWORD *)v172;
    v174 = v1386;
    v175 = *(_DWORD *)(*(_DWORD *)v172 + 24);
      if ( v175 == v169 )
        v176 = *(_DWORD **)(v173 + 4);
        v177 = *(v174 - 3);
        if ( v177 == *(v176 - 3) && !memcmp(v174, v176, v177) )
      v178 = *(_DWORD *)v173;
      if ( *(_DWORD *)v173 )
        v175 = *(_DWORD *)(v178 + 24);
        v172 = v173;
        v173 = *(_DWORD *)v173;
        if ( *(_DWORD *)(v178 + 24) % v170 == v171 )
    v1146 = v172 == 0;
    if ( v172 )
      v1146 = *(_DWORD *)v172 == 0;
    if ( v1146 )
LABEL_176:
      v1492 = 1;
      v1493 = v1216;
      v1494 = 0;
      v1495 = 0;
      v1496 = 1;
        &v1491,
        (int *)&v1386,
        (int)&v1492);
  v179 = (void *)(v1385 - 12);
  if ( (int *)(v1385 - 12) != &dword_28898C0 )
    v905 = (unsigned int *)(v1385 - 4);
        v906 = __ldrex(v905);
      while ( __strex(v906 - 1, v905) );
      v906 = (*v905)--;
    if ( v906 <= 0 )
      j_j_j_j__ZdlPv_9(v179);
  v180 = (char *)v1386 - 12;
  if ( (int *)((char *)v1386 - 12) != &dword_28898C0 )
    v907 = (unsigned int *)((char *)v1386 - 4);
        v908 = __ldrex(v907);
      while ( __strex(v908 - 1, v907) );
      v908 = (*v907)--;
    if ( v908 <= 0 )
      j_j_j_j__ZdlPv_9(v180);
  sub_21E94B4(&v1384, "without_variant");
  sub_21E94B4((void **)&v1383, "is_variant");
  v1217 = FilterList::findFilterDefinition((int **)&v1383);
  if ( v1217 )
    v181 = sub_21B417C((int *)v1384, *((_DWORD *)v1384 - 3), -955291385);
    v182 = *(_DWORD *)algn_27FE634;
    v183 = v181 % *(_DWORD *)algn_27FE634;
    v184 = *(_DWORD *)(legacyPredicates + 4 * (v181 % *(_DWORD *)algn_27FE634));
    if ( !v184 )
      goto LABEL_187;
    v185 = *(_DWORD *)v184;
    v186 = v1384;
    v187 = *(_DWORD *)(*(_DWORD *)v184 + 24);
      if ( v187 == v181 )
        v188 = *(_DWORD **)(v185 + 4);
        v189 = *(v186 - 3);
        if ( v189 == *(v188 - 3) && !memcmp(v186, v188, v189) )
      v190 = *(_DWORD *)v185;
      if ( *(_DWORD *)v185 )
        v187 = *(_DWORD *)(v190 + 24);
        v184 = v185;
        v185 = *(_DWORD *)v185;
        if ( *(_DWORD *)(v190 + 24) % v182 == v183 )
    v1147 = v184 == 0;
    if ( v184 )
      v1147 = *(_DWORD *)v184 == 0;
    if ( v1147 )
LABEL_187:
      v1498 = 0;
      v1499 = v1217;
      v1500 = 0;
      v1501 = 1;
      v1502 = 1;
        &v1497,
        (int *)&v1384,
        (int)&v1498);
  v191 = (void *)(v1383 - 12);
  if ( (int *)(v1383 - 12) != &dword_28898C0 )
    v909 = (unsigned int *)(v1383 - 4);
        v910 = __ldrex(v909);
      while ( __strex(v910 - 1, v909) );
      v910 = (*v909)--;
    if ( v910 <= 0 )
      j_j_j_j__ZdlPv_9(v191);
  v192 = (char *)v1384 - 12;
  if ( (int *)((char *)v1384 - 12) != &dword_28898C0 )
    v911 = (unsigned int *)((char *)v1384 - 4);
        v912 = __ldrex(v911);
      while ( __strex(v912 - 1, v911) );
      v912 = (*v911)--;
    if ( v912 <= 0 )
      j_j_j_j__ZdlPv_9(v192);
  sub_21E94B4(&v1382, "with_color");
  sub_21E94B4((void **)&v1381, "is_color");
  v1218 = FilterList::findFilterDefinition((int **)&v1381);
  if ( v1218 )
    v193 = sub_21B417C((int *)v1382, *((_DWORD *)v1382 - 3), -955291385);
    v194 = *(_DWORD *)algn_27FE634;
    v195 = v193 % *(_DWORD *)algn_27FE634;
    v196 = *(_DWORD *)(legacyPredicates + 4 * (v193 % *(_DWORD *)algn_27FE634));
    if ( !v196 )
      goto LABEL_198;
    v197 = *(_DWORD *)v196;
    v198 = v1382;
    v199 = *(_DWORD *)(*(_DWORD *)v196 + 24);
      if ( v199 == v193 )
        v200 = *(_DWORD **)(v197 + 4);
        v201 = *(v198 - 3);
        if ( v201 == *(v200 - 3) && !memcmp(v198, v200, v201) )
      v202 = *(_DWORD *)v197;
      if ( *(_DWORD *)v197 )
        v199 = *(_DWORD *)(v202 + 24);
        v196 = v197;
        v197 = *(_DWORD *)v197;
        if ( *(_DWORD *)(v202 + 24) % v194 == v195 )
    v1148 = v196 == 0;
    if ( v196 )
      v1148 = *(_DWORD *)v196 == 0;
    if ( v1148 )
LABEL_198:
      v1504 = 1;
      v1505 = v1218;
      v1506 = 0;
      v1507 = 0;
      v1508 = 1;
        &v1503,
        (int *)&v1382,
        (int)&v1504);
  v203 = (void *)(v1381 - 12);
  if ( (int *)(v1381 - 12) != &dword_28898C0 )
    v913 = (unsigned int *)(v1381 - 4);
        v914 = __ldrex(v913);
      while ( __strex(v914 - 1, v913) );
      v914 = (*v913)--;
    if ( v914 <= 0 )
      j_j_j_j__ZdlPv_9(v203);
  v204 = (char *)v1382 - 12;
  if ( (int *)((char *)v1382 - 12) != &dword_28898C0 )
    v915 = (unsigned int *)((char *)v1382 - 4);
        v916 = __ldrex(v915);
      while ( __strex(v916 - 1, v915) );
      v916 = (*v915)--;
    if ( v916 <= 0 )
      j_j_j_j__ZdlPv_9(v204);
  sub_21E94B4(&v1380, "without_color");
  sub_21E94B4((void **)&v1379, "is_color");
  v1219 = FilterList::findFilterDefinition((int **)&v1379);
  if ( v1219 )
    v205 = sub_21B417C((int *)v1380, *((_DWORD *)v1380 - 3), -955291385);
    v206 = *(_DWORD *)algn_27FE634;
    v207 = v205 % *(_DWORD *)algn_27FE634;
    v208 = *(_DWORD *)(legacyPredicates + 4 * (v205 % *(_DWORD *)algn_27FE634));
    if ( !v208 )
      goto LABEL_209;
    v209 = *(_DWORD *)v208;
    v210 = v1380;
    v211 = *(_DWORD *)(*(_DWORD *)v208 + 24);
      if ( v211 == v205 )
        v212 = *(_DWORD **)(v209 + 4);
        v213 = *(v210 - 3);
        if ( v213 == *(v212 - 3) && !memcmp(v210, v212, v213) )
      v214 = *(_DWORD *)v209;
      if ( *(_DWORD *)v209 )
        v211 = *(_DWORD *)(v214 + 24);
        v208 = v209;
        v209 = *(_DWORD *)v209;
        if ( *(_DWORD *)(v214 + 24) % v206 == v207 )
    v1149 = v208 == 0;
    if ( v208 )
      v1149 = *(_DWORD *)v208 == 0;
    if ( v1149 )
LABEL_209:
      v1510 = 0;
      v1511 = v1219;
      v1512 = 0;
      v1513 = 1;
      v1514 = 1;
        &v1509,
        (int *)&v1380,
        (int)&v1510);
  v215 = (void *)(v1379 - 12);
  if ( (int *)(v1379 - 12) != &dword_28898C0 )
    v917 = (unsigned int *)(v1379 - 4);
        v918 = __ldrex(v917);
      while ( __strex(v918 - 1, v917) );
      v918 = (*v917)--;
    if ( v918 <= 0 )
      j_j_j_j__ZdlPv_9(v215);
  v216 = (char *)v1380 - 12;
  if ( (int *)((char *)v1380 - 12) != &dword_28898C0 )
    v919 = (unsigned int *)((char *)v1380 - 4);
        v920 = __ldrex(v919);
      while ( __strex(v920 - 1, v919) );
      v920 = (*v919)--;
    if ( v920 <= 0 )
      j_j_j_j__ZdlPv_9(v216);
  sub_21E94B4(&v1378, "target_with_item");
  sub_21E94B4((void **)&v1377, "has_equipment");
  v1220 = FilterList::findFilterDefinition((int **)&v1377);
  if ( v1220 )
    v217 = sub_21B417C((int *)v1378, *((_DWORD *)v1378 - 3), -955291385);
    v218 = *(_DWORD *)algn_27FE634;
    v219 = v217 % *(_DWORD *)algn_27FE634;
    v220 = *(_DWORD *)(legacyPredicates + 4 * (v217 % *(_DWORD *)algn_27FE634));
    if ( !v220 )
      goto LABEL_220;
    v221 = *(_DWORD *)v220;
    v222 = v1378;
    v223 = *(_DWORD *)(*(_DWORD *)v220 + 24);
      if ( v223 == v217 )
        v224 = *(_DWORD **)(v221 + 4);
        v225 = *(v222 - 3);
        if ( v225 == *(v224 - 3) && !memcmp(v222, v224, v225) )
      v226 = *(_DWORD *)v221;
      if ( *(_DWORD *)v221 )
        v223 = *(_DWORD *)(v226 + 24);
        v220 = v221;
        v221 = *(_DWORD *)v221;
        if ( *(_DWORD *)(v226 + 24) % v218 == v219 )
    v1150 = v220 == 0;
    if ( v220 )
      v1150 = *(_DWORD *)v220 == 0;
    if ( v1150 )
LABEL_220:
      v1516 = 1;
      v1517 = v1220;
      v1518 = 3;
      v1519 = 0;
      v1520 = 4;
        &v1515,
        (int *)&v1378,
        (int)&v1516);
  v227 = (void *)(v1377 - 12);
  if ( (int *)(v1377 - 12) != &dword_28898C0 )
    v921 = (unsigned int *)(v1377 - 4);
        v922 = __ldrex(v921);
      while ( __strex(v922 - 1, v921) );
      v922 = (*v921)--;
    if ( v922 <= 0 )
      j_j_j_j__ZdlPv_9(v227);
  v228 = (char *)v1378 - 12;
  if ( (int *)((char *)v1378 - 12) != &dword_28898C0 )
    v923 = (unsigned int *)((char *)v1378 - 4);
        v924 = __ldrex(v923);
      while ( __strex(v924 - 1, v923) );
      v924 = (*v923)--;
    if ( v924 <= 0 )
      j_j_j_j__ZdlPv_9(v228);
  sub_21E94B4(&v1376, "target_without_item");
  sub_21E94B4((void **)&v1375, "has_equipment");
  v1221 = FilterList::findFilterDefinition((int **)&v1375);
  if ( v1221 )
    v229 = sub_21B417C((int *)v1376, *((_DWORD *)v1376 - 3), -955291385);
    v230 = *(_DWORD *)algn_27FE634;
    v231 = v229 % *(_DWORD *)algn_27FE634;
    v232 = *(_DWORD *)(legacyPredicates + 4 * (v229 % *(_DWORD *)algn_27FE634));
    if ( !v232 )
      goto LABEL_231;
    v233 = *(_DWORD *)v232;
    v234 = v1376;
    v235 = *(_DWORD *)(*(_DWORD *)v232 + 24);
      if ( v235 == v229 )
        v236 = *(_DWORD **)(v233 + 4);
        v237 = *(v234 - 3);
        if ( v237 == *(v236 - 3) && !memcmp(v234, v236, v237) )
      v238 = *(_DWORD *)v233;
      if ( *(_DWORD *)v233 )
        v235 = *(_DWORD *)(v238 + 24);
        v232 = v233;
        v233 = *(_DWORD *)v233;
        if ( *(_DWORD *)(v238 + 24) % v230 == v231 )
    v1151 = v232 == 0;
    if ( v232 )
      v1151 = *(_DWORD *)v232 == 0;
    if ( v1151 )
LABEL_231:
      v1522 = 0;
      v1523 = v1221;
      v1524 = 3;
      v1525 = 1;
      v1526 = 4;
        &v1521,
        (int *)&v1376,
        (int)&v1522);
  v239 = (void *)(v1375 - 12);
  if ( (int *)(v1375 - 12) != &dword_28898C0 )
    v925 = (unsigned int *)(v1375 - 4);
        v926 = __ldrex(v925);
      while ( __strex(v926 - 1, v925) );
      v926 = (*v925)--;
    if ( v926 <= 0 )
      j_j_j_j__ZdlPv_9(v239);
  v240 = (char *)v1376 - 12;
  if ( (int *)((char *)v1376 - 12) != &dword_28898C0 )
    v927 = (unsigned int *)((char *)v1376 - 4);
        v928 = __ldrex(v927);
      while ( __strex(v928 - 1, v927) );
      v928 = (*v927)--;
    if ( v928 <= 0 )
      j_j_j_j__ZdlPv_9(v240);
  sub_21E94B4(&v1374, "target_with_armor");
  sub_21E94B4((void **)&v1373, "has_equipment");
  v1222 = FilterList::findFilterDefinition((int **)&v1373);
  if ( v1222 )
    v241 = sub_21B417C((int *)v1374, *((_DWORD *)v1374 - 3), -955291385);
    v242 = *(_DWORD *)algn_27FE634;
    v243 = v241 % *(_DWORD *)algn_27FE634;
    v244 = *(_DWORD *)(legacyPredicates + 4 * (v241 % *(_DWORD *)algn_27FE634));
    if ( !v244 )
      goto LABEL_242;
    v245 = *(_DWORD *)v244;
    v246 = v1374;
    v247 = *(_DWORD *)(*(_DWORD *)v244 + 24);
      if ( v247 == v241 )
        v248 = *(_DWORD **)(v245 + 4);
        v249 = *(v246 - 3);
        if ( v249 == *(v248 - 3) && !memcmp(v246, v248, v249) )
      v250 = *(_DWORD *)v245;
      if ( *(_DWORD *)v245 )
        v247 = *(_DWORD *)(v250 + 24);
        v244 = v245;
        v245 = *(_DWORD *)v245;
        if ( *(_DWORD *)(v250 + 24) % v242 == v243 )
    v1152 = v244 == 0;
    if ( v244 )
      v1152 = *(_DWORD *)v244 == 0;
    if ( v1152 )
LABEL_242:
      v1528 = 1;
      v1529 = v1222;
      v1530 = 3;
      v1531 = 0;
      v1532 = 5;
        &v1527,
        (int *)&v1374,
        (int)&v1528);
  v251 = (void *)(v1373 - 12);
  if ( (int *)(v1373 - 12) != &dword_28898C0 )
    v929 = (unsigned int *)(v1373 - 4);
        v930 = __ldrex(v929);
      while ( __strex(v930 - 1, v929) );
      v930 = (*v929)--;
    if ( v930 <= 0 )
      j_j_j_j__ZdlPv_9(v251);
  v252 = (char *)v1374 - 12;
  if ( (int *)((char *)v1374 - 12) != &dword_28898C0 )
    v931 = (unsigned int *)((char *)v1374 - 4);
        v932 = __ldrex(v931);
      while ( __strex(v932 - 1, v931) );
      v932 = (*v931)--;
    if ( v932 <= 0 )
      j_j_j_j__ZdlPv_9(v252);
  sub_21E94B4(&v1372, "target_without_armor");
  sub_21E94B4((void **)&v1371, "has_equipment");
  v1223 = FilterList::findFilterDefinition((int **)&v1371);
  if ( v1223 )
    v253 = sub_21B417C((int *)v1372, *((_DWORD *)v1372 - 3), -955291385);
    v254 = *(_DWORD *)algn_27FE634;
    v255 = v253 % *(_DWORD *)algn_27FE634;
    v256 = *(_DWORD *)(legacyPredicates + 4 * (v253 % *(_DWORD *)algn_27FE634));
    if ( !v256 )
      goto LABEL_253;
    v257 = *(_DWORD *)v256;
    v258 = v1372;
    v259 = *(_DWORD *)(*(_DWORD *)v256 + 24);
      if ( v259 == v253 )
        v260 = *(_DWORD **)(v257 + 4);
        v261 = *(v258 - 3);
        if ( v261 == *(v260 - 3) && !memcmp(v258, v260, v261) )
      v262 = *(_DWORD *)v257;
      if ( *(_DWORD *)v257 )
        v259 = *(_DWORD *)(v262 + 24);
        v256 = v257;
        v257 = *(_DWORD *)v257;
        if ( *(_DWORD *)(v262 + 24) % v254 == v255 )
    v1153 = v256 == 0;
    if ( v256 )
      v1153 = *(_DWORD *)v256 == 0;
    if ( v1153 )
LABEL_253:
      v1534 = 0;
      v1535 = v1223;
      v1536 = 3;
      v1537 = 1;
      v1538 = 5;
        &v1533,
        (int *)&v1372,
        (int)&v1534);
  v263 = (void *)(v1371 - 12);
  if ( (int *)(v1371 - 12) != &dword_28898C0 )
    v933 = (unsigned int *)(v1371 - 4);
        v934 = __ldrex(v933);
      while ( __strex(v934 - 1, v933) );
      v934 = (*v933)--;
    if ( v934 <= 0 )
      j_j_j_j__ZdlPv_9(v263);
  v264 = (char *)v1372 - 12;
  if ( (int *)((char *)v1372 - 12) != &dword_28898C0 )
    v935 = (unsigned int *)((char *)v1372 - 4);
        v936 = __ldrex(v935);
      while ( __strex(v936 - 1, v935) );
      v936 = (*v935)--;
    if ( v936 <= 0 )
      j_j_j_j__ZdlPv_9(v264);
  sub_21E94B4(&v1370, "target_with_equipment");
  sub_21E94B4((void **)&v1369, "has_equipment");
  v1224 = FilterList::findFilterDefinition((int **)&v1369);
  if ( v1224 )
    v265 = sub_21B417C((int *)v1370, *((_DWORD *)v1370 - 3), -955291385);
    v266 = *(_DWORD *)algn_27FE634;
    v267 = v265 % *(_DWORD *)algn_27FE634;
    v268 = *(_DWORD *)(legacyPredicates + 4 * (v265 % *(_DWORD *)algn_27FE634));
    if ( !v268 )
      goto LABEL_264;
    v269 = *(_DWORD *)v268;
    v270 = v1370;
    v271 = *(_DWORD *)(*(_DWORD *)v268 + 24);
      if ( v271 == v265 )
        v272 = *(_DWORD **)(v269 + 4);
        v273 = *(v270 - 3);
        if ( v273 == *(v272 - 3) && !memcmp(v270, v272, v273) )
      v274 = *(_DWORD *)v269;
      if ( *(_DWORD *)v269 )
        v271 = *(_DWORD *)(v274 + 24);
        v268 = v269;
        v269 = *(_DWORD *)v269;
        if ( *(_DWORD *)(v274 + 24) % v266 == v267 )
    v1154 = v268 == 0;
    if ( v268 )
      v1154 = *(_DWORD *)v268 == 0;
    if ( v1154 )
LABEL_264:
      v1540 = 1;
      v1541 = v1224;
      v1542 = 3;
      v1543 = 0;
      v1544 = 6;
        &v1539,
        (int *)&v1370,
        (int)&v1540);
  v275 = (void *)(v1369 - 12);
  if ( (int *)(v1369 - 12) != &dword_28898C0 )
    v937 = (unsigned int *)(v1369 - 4);
        v938 = __ldrex(v937);
      while ( __strex(v938 - 1, v937) );
      v938 = (*v937)--;
    if ( v938 <= 0 )
      j_j_j_j__ZdlPv_9(v275);
  v276 = (char *)v1370 - 12;
  if ( (int *)((char *)v1370 - 12) != &dword_28898C0 )
    v939 = (unsigned int *)((char *)v1370 - 4);
        v940 = __ldrex(v939);
      while ( __strex(v940 - 1, v939) );
      v940 = (*v939)--;
    if ( v940 <= 0 )
      j_j_j_j__ZdlPv_9(v276);
  sub_21E94B4(&v1368, "target_without_equipment");
  sub_21E94B4((void **)&v1367, "has_equipment");
  v1225 = FilterList::findFilterDefinition((int **)&v1367);
  if ( v1225 )
    v277 = sub_21B417C((int *)v1368, *((_DWORD *)v1368 - 3), -955291385);
    v278 = *(_DWORD *)algn_27FE634;
    v279 = v277 % *(_DWORD *)algn_27FE634;
    v280 = *(_DWORD *)(legacyPredicates + 4 * (v277 % *(_DWORD *)algn_27FE634));
    if ( !v280 )
      goto LABEL_275;
    v281 = *(_DWORD *)v280;
    v282 = v1368;
    v283 = *(_DWORD *)(*(_DWORD *)v280 + 24);
      if ( v283 == v277 )
        v284 = *(_DWORD **)(v281 + 4);
        v285 = *(v282 - 3);
        if ( v285 == *(v284 - 3) && !memcmp(v282, v284, v285) )
      v286 = *(_DWORD *)v281;
      if ( *(_DWORD *)v281 )
        v283 = *(_DWORD *)(v286 + 24);
        v280 = v281;
        v281 = *(_DWORD *)v281;
        if ( *(_DWORD *)(v286 + 24) % v278 == v279 )
    v1155 = v280 == 0;
    if ( v280 )
      v1155 = *(_DWORD *)v280 == 0;
    if ( v1155 )
LABEL_275:
      v1546 = 0;
      v1547 = v1225;
      v1548 = 3;
      v1549 = 1;
      v1550 = 6;
        &v1545,
        (int *)&v1368,
        (int)&v1546);
  v287 = (void *)(v1367 - 12);
  if ( (int *)(v1367 - 12) != &dword_28898C0 )
    v941 = (unsigned int *)(v1367 - 4);
        v942 = __ldrex(v941);
      while ( __strex(v942 - 1, v941) );
      v942 = (*v941)--;
    if ( v942 <= 0 )
      j_j_j_j__ZdlPv_9(v287);
  v288 = (char *)v1368 - 12;
  if ( (int *)((char *)v1368 - 12) != &dword_28898C0 )
    v943 = (unsigned int *)((char *)v1368 - 4);
        v944 = __ldrex(v943);
      while ( __strex(v944 - 1, v943) );
      v944 = (*v943)--;
    if ( v944 <= 0 )
      j_j_j_j__ZdlPv_9(v288);
  sub_21E94B4(&v1366, "target_with_components");
  sub_21E94B4((void **)&v1365, "has_component");
  v1226 = FilterList::findFilterDefinition((int **)&v1365);
  if ( v1226 )
    v289 = sub_21B417C((int *)v1366, *((_DWORD *)v1366 - 3), -955291385);
    v290 = *(_DWORD *)algn_27FE634;
    v291 = v289 % *(_DWORD *)algn_27FE634;
    v292 = *(_DWORD *)(legacyPredicates + 4 * (v289 % *(_DWORD *)algn_27FE634));
    if ( !v292 )
      goto LABEL_286;
    v293 = *(_DWORD *)v292;
    v294 = v1366;
    v295 = *(_DWORD *)(*(_DWORD *)v292 + 24);
      if ( v295 == v289 )
        v296 = *(_DWORD **)(v293 + 4);
        v297 = *(v294 - 3);
        if ( v297 == *(v296 - 3) && !memcmp(v294, v296, v297) )
      v298 = *(_DWORD *)v293;
      if ( *(_DWORD *)v293 )
        v295 = *(_DWORD *)(v298 + 24);
        v292 = v293;
        v293 = *(_DWORD *)v293;
        if ( *(_DWORD *)(v298 + 24) % v290 == v291 )
    v1156 = v292 == 0;
    if ( v292 )
      v1156 = *(_DWORD *)v292 == 0;
    if ( v1156 )
LABEL_286:
      v1552 = 0;
      v1553 = v1226;
      v1554 = 3;
      v1555 = 0;
      v1556 = 2;
        &v1551,
        (int *)&v1366,
        (int)&v1552);
  v299 = (void *)(v1365 - 12);
  if ( (int *)(v1365 - 12) != &dword_28898C0 )
    v945 = (unsigned int *)(v1365 - 4);
        v946 = __ldrex(v945);
      while ( __strex(v946 - 1, v945) );
      v946 = (*v945)--;
    if ( v946 <= 0 )
      j_j_j_j__ZdlPv_9(v299);
  v300 = (char *)v1366 - 12;
  if ( (int *)((char *)v1366 - 12) != &dword_28898C0 )
    v947 = (unsigned int *)((char *)v1366 - 4);
        v948 = __ldrex(v947);
      while ( __strex(v948 - 1, v947) );
      v948 = (*v947)--;
    if ( v948 <= 0 )
      j_j_j_j__ZdlPv_9(v300);
  sub_21E94B4(&v1364, "target_without_components");
  sub_21E94B4((void **)&v1363, "has_component");
  v1227 = FilterList::findFilterDefinition((int **)&v1363);
  if ( v1227 )
    v301 = sub_21B417C((int *)v1364, *((_DWORD *)v1364 - 3), -955291385);
    v302 = *(_DWORD *)algn_27FE634;
    v303 = v301 % *(_DWORD *)algn_27FE634;
    v304 = *(_DWORD *)(legacyPredicates + 4 * (v301 % *(_DWORD *)algn_27FE634));
    if ( !v304 )
      goto LABEL_297;
    v305 = *(_DWORD *)v304;
    v306 = v1364;
    v307 = *(_DWORD *)(*(_DWORD *)v304 + 24);
      if ( v307 == v301 )
        v308 = *(_DWORD **)(v305 + 4);
        v309 = *(v306 - 3);
        if ( v309 == *(v308 - 3) && !memcmp(v306, v308, v309) )
      v310 = *(_DWORD *)v305;
      if ( *(_DWORD *)v305 )
        v307 = *(_DWORD *)(v310 + 24);
        v304 = v305;
        v305 = *(_DWORD *)v305;
        if ( *(_DWORD *)(v310 + 24) % v302 == v303 )
    v1157 = v304 == 0;
    if ( v304 )
      v1157 = *(_DWORD *)v304 == 0;
    if ( v1157 )
LABEL_297:
      v1558 = 0;
      v1559 = v1227;
      v1560 = 3;
      v1561 = 1;
      v1562 = 2;
        &v1557,
        (int *)&v1364,
        (int)&v1558);
  v311 = (void *)(v1363 - 12);
  if ( (int *)(v1363 - 12) != &dword_28898C0 )
    v949 = (unsigned int *)(v1363 - 4);
        v950 = __ldrex(v949);
      while ( __strex(v950 - 1, v949) );
      v950 = (*v949)--;
    if ( v950 <= 0 )
      j_j_j_j__ZdlPv_9(v311);
  v312 = (char *)v1364 - 12;
  if ( (int *)((char *)v1364 - 12) != &dword_28898C0 )
    v951 = (unsigned int *)((char *)v1364 - 4);
        v952 = __ldrex(v951);
      while ( __strex(v952 - 1, v951) );
      v952 = (*v951)--;
    if ( v952 <= 0 )
      j_j_j_j__ZdlPv_9(v312);
  sub_21E94B4(&v1362, "target_with_families");
  sub_21E94B4((void **)&v1361, "is_family");
  v1228 = FilterList::findFilterDefinition((int **)&v1361);
  if ( v1228 )
    v313 = sub_21B417C((int *)v1362, *((_DWORD *)v1362 - 3), -955291385);
    v314 = *(_DWORD *)algn_27FE634;
    v315 = v313 % *(_DWORD *)algn_27FE634;
    v316 = *(_DWORD *)(legacyPredicates + 4 * (v313 % *(_DWORD *)algn_27FE634));
    if ( !v316 )
      goto LABEL_308;
    v317 = *(_DWORD *)v316;
    v318 = v1362;
    v319 = *(_DWORD *)(*(_DWORD *)v316 + 24);
      if ( v319 == v313 )
        v320 = *(_DWORD **)(v317 + 4);
        v321 = *(v318 - 3);
        if ( v321 == *(v320 - 3) && !memcmp(v318, v320, v321) )
      v322 = *(_DWORD *)v317;
      if ( *(_DWORD *)v317 )
        v319 = *(_DWORD *)(v322 + 24);
        v316 = v317;
        v317 = *(_DWORD *)v317;
        if ( *(_DWORD *)(v322 + 24) % v314 == v315 )
    v1158 = v316 == 0;
    if ( v316 )
      v1158 = *(_DWORD *)v316 == 0;
    if ( v1158 )
LABEL_308:
      v1564 = 1;
      v1565 = v1228;
      v1566 = 3;
      v1567 = 0;
      v1568 = 2;
        &v1563,
        (int *)&v1362,
        (int)&v1564);
  v323 = (void *)(v1361 - 12);
  if ( (int *)(v1361 - 12) != &dword_28898C0 )
    v953 = (unsigned int *)(v1361 - 4);
        v954 = __ldrex(v953);
      while ( __strex(v954 - 1, v953) );
      v954 = (*v953)--;
    if ( v954 <= 0 )
      j_j_j_j__ZdlPv_9(v323);
  v324 = (char *)v1362 - 12;
  if ( (int *)((char *)v1362 - 12) != &dword_28898C0 )
    v955 = (unsigned int *)((char *)v1362 - 4);
        v956 = __ldrex(v955);
      while ( __strex(v956 - 1, v955) );
      v956 = (*v955)--;
    if ( v956 <= 0 )
      j_j_j_j__ZdlPv_9(v324);
  sub_21E94B4(&v1360, "target_without_families");
  sub_21E94B4((void **)&v1359, "is_family");
  v1229 = FilterList::findFilterDefinition((int **)&v1359);
  if ( v1229 )
    v325 = sub_21B417C((int *)v1360, *((_DWORD *)v1360 - 3), -955291385);
    v326 = *(_DWORD *)algn_27FE634;
    v327 = v325 % *(_DWORD *)algn_27FE634;
    v328 = *(_DWORD *)(legacyPredicates + 4 * (v325 % *(_DWORD *)algn_27FE634));
    if ( !v328 )
      goto LABEL_319;
    v329 = *(_DWORD *)v328;
    v330 = v1360;
    v331 = *(_DWORD *)(*(_DWORD *)v328 + 24);
      if ( v331 == v325 )
        v332 = *(_DWORD **)(v329 + 4);
        v333 = *(v330 - 3);
        if ( v333 == *(v332 - 3) && !memcmp(v330, v332, v333) )
      v334 = *(_DWORD *)v329;
      if ( *(_DWORD *)v329 )
        v331 = *(_DWORD *)(v334 + 24);
        v328 = v329;
        v329 = *(_DWORD *)v329;
        if ( *(_DWORD *)(v334 + 24) % v326 == v327 )
    v1159 = v328 == 0;
    if ( v328 )
      v1159 = *(_DWORD *)v328 == 0;
    if ( v1159 )
LABEL_319:
      v1570 = 0;
      v1571 = v1229;
      v1572 = 3;
      v1573 = 1;
      v1574 = 2;
        &v1569,
        (int *)&v1360,
        (int)&v1570);
  v335 = (void *)(v1359 - 12);
  if ( (int *)(v1359 - 12) != &dword_28898C0 )
    v957 = (unsigned int *)(v1359 - 4);
        v958 = __ldrex(v957);
      while ( __strex(v958 - 1, v957) );
      v958 = (*v957)--;
    if ( v958 <= 0 )
      j_j_j_j__ZdlPv_9(v335);
  v336 = (char *)v1360 - 12;
  if ( (int *)((char *)v1360 - 12) != &dword_28898C0 )
    v959 = (unsigned int *)((char *)v1360 - 4);
        v960 = __ldrex(v959);
      while ( __strex(v960 - 1, v959) );
      v960 = (*v959)--;
    if ( v960 <= 0 )
      j_j_j_j__ZdlPv_9(v336);
  sub_21E94B4(&v1358, "target_with_variant");
  sub_21E94B4((void **)&v1357, "is_variant");
  v1230 = FilterList::findFilterDefinition((int **)&v1357);
  if ( v1230 )
    v337 = sub_21B417C((int *)v1358, *((_DWORD *)v1358 - 3), -955291385);
    v338 = *(_DWORD *)algn_27FE634;
    v339 = v337 % *(_DWORD *)algn_27FE634;
    v340 = *(_DWORD *)(legacyPredicates + 4 * (v337 % *(_DWORD *)algn_27FE634));
    if ( !v340 )
      goto LABEL_330;
    v341 = *(_DWORD *)v340;
    v342 = v1358;
    v343 = *(_DWORD *)(*(_DWORD *)v340 + 24);
      if ( v343 == v337 )
        v344 = *(_DWORD **)(v341 + 4);
        v345 = *(v342 - 3);
        if ( v345 == *(v344 - 3) && !memcmp(v342, v344, v345) )
      v346 = *(_DWORD *)v341;
      if ( *(_DWORD *)v341 )
        v343 = *(_DWORD *)(v346 + 24);
        v340 = v341;
        v341 = *(_DWORD *)v341;
        if ( *(_DWORD *)(v346 + 24) % v338 == v339 )
    v1160 = v340 == 0;
    if ( v340 )
      v1160 = *(_DWORD *)v340 == 0;
    if ( v1160 )
LABEL_330:
      v1576 = 1;
      v1577 = v1230;
      v1578 = 3;
      v1579 = 0;
      v1580 = 1;
        &v1575,
        (int *)&v1358,
        (int)&v1576);
  v347 = (void *)(v1357 - 12);
  if ( (int *)(v1357 - 12) != &dword_28898C0 )
    v961 = (unsigned int *)(v1357 - 4);
        v962 = __ldrex(v961);
      while ( __strex(v962 - 1, v961) );
      v962 = (*v961)--;
    if ( v962 <= 0 )
      j_j_j_j__ZdlPv_9(v347);
  v348 = (char *)v1358 - 12;
  if ( (int *)((char *)v1358 - 12) != &dword_28898C0 )
    v963 = (unsigned int *)((char *)v1358 - 4);
        v964 = __ldrex(v963);
      while ( __strex(v964 - 1, v963) );
      v964 = (*v963)--;
    if ( v964 <= 0 )
      j_j_j_j__ZdlPv_9(v348);
  sub_21E94B4(&v1356, "target_without_variant");
  sub_21E94B4((void **)&v1355, "is_variant");
  v1231 = FilterList::findFilterDefinition((int **)&v1355);
  if ( v1231 )
    v349 = sub_21B417C((int *)v1356, *((_DWORD *)v1356 - 3), -955291385);
    v350 = *(_DWORD *)algn_27FE634;
    v351 = v349 % *(_DWORD *)algn_27FE634;
    v352 = *(_DWORD *)(legacyPredicates + 4 * (v349 % *(_DWORD *)algn_27FE634));
    if ( !v352 )
      goto LABEL_341;
    v353 = *(_DWORD *)v352;
    v354 = v1356;
    v355 = *(_DWORD *)(*(_DWORD *)v352 + 24);
      if ( v355 == v349 )
        v356 = *(_DWORD **)(v353 + 4);
        v357 = *(v354 - 3);
        if ( v357 == *(v356 - 3) && !memcmp(v354, v356, v357) )
      v358 = *(_DWORD *)v353;
      if ( *(_DWORD *)v353 )
        v355 = *(_DWORD *)(v358 + 24);
        v352 = v353;
        v353 = *(_DWORD *)v353;
        if ( *(_DWORD *)(v358 + 24) % v350 == v351 )
    v1161 = v352 == 0;
    if ( v352 )
      v1161 = *(_DWORD *)v352 == 0;
    if ( v1161 )
LABEL_341:
      v1582 = 0;
      v1583 = v1231;
      v1584 = 3;
      v1585 = 1;
      v1586 = 1;
        &v1581,
        (int *)&v1356,
        (int)&v1582);
  v359 = (void *)(v1355 - 12);
  if ( (int *)(v1355 - 12) != &dword_28898C0 )
    v965 = (unsigned int *)(v1355 - 4);
        v966 = __ldrex(v965);
      while ( __strex(v966 - 1, v965) );
      v966 = (*v965)--;
    if ( v966 <= 0 )
      j_j_j_j__ZdlPv_9(v359);
  v360 = (char *)v1356 - 12;
  if ( (int *)((char *)v1356 - 12) != &dword_28898C0 )
    v967 = (unsigned int *)((char *)v1356 - 4);
        v968 = __ldrex(v967);
      while ( __strex(v968 - 1, v967) );
      v968 = (*v967)--;
    if ( v968 <= 0 )
      j_j_j_j__ZdlPv_9(v360);
  sub_21E94B4(&v1354, "target_with_color");
  sub_21E94B4((void **)&v1353, "is_color");
  v1232 = FilterList::findFilterDefinition((int **)&v1353);
  if ( v1232 )
    v361 = sub_21B417C((int *)v1354, *((_DWORD *)v1354 - 3), -955291385);
    v362 = *(_DWORD *)algn_27FE634;
    v363 = v361 % *(_DWORD *)algn_27FE634;
    v364 = *(_DWORD *)(legacyPredicates + 4 * (v361 % *(_DWORD *)algn_27FE634));
    if ( !v364 )
      goto LABEL_352;
    v365 = *(_DWORD *)v364;
    v366 = v1354;
    v367 = *(_DWORD *)(*(_DWORD *)v364 + 24);
      if ( v367 == v361 )
        v368 = *(_DWORD **)(v365 + 4);
        v369 = *(v366 - 3);
        if ( v369 == *(v368 - 3) && !memcmp(v366, v368, v369) )
      v370 = *(_DWORD *)v365;
      if ( *(_DWORD *)v365 )
        v367 = *(_DWORD *)(v370 + 24);
        v364 = v365;
        v365 = *(_DWORD *)v365;
        if ( *(_DWORD *)(v370 + 24) % v362 == v363 )
    v1162 = v364 == 0;
    if ( v364 )
      v1162 = *(_DWORD *)v364 == 0;
    if ( v1162 )
LABEL_352:
      v1588 = 1;
      v1589 = v1232;
      v1590 = 3;
      v1591 = 0;
      v1592 = 1;
        &v1587,
        (int *)&v1354,
        (int)&v1588);
  v371 = (void *)(v1353 - 12);
  if ( (int *)(v1353 - 12) != &dword_28898C0 )
    v969 = (unsigned int *)(v1353 - 4);
        v970 = __ldrex(v969);
      while ( __strex(v970 - 1, v969) );
      v970 = (*v969)--;
    if ( v970 <= 0 )
      j_j_j_j__ZdlPv_9(v371);
  v372 = (char *)v1354 - 12;
  if ( (int *)((char *)v1354 - 12) != &dword_28898C0 )
    v971 = (unsigned int *)((char *)v1354 - 4);
        v972 = __ldrex(v971);
      while ( __strex(v972 - 1, v971) );
      v972 = (*v971)--;
    if ( v972 <= 0 )
      j_j_j_j__ZdlPv_9(v372);
  sub_21E94B4(&v1352, "target_without_color");
  sub_21E94B4((void **)&v1351, "is_color");
  v1233 = FilterList::findFilterDefinition((int **)&v1351);
  if ( v1233 )
    v373 = sub_21B417C((int *)v1352, *((_DWORD *)v1352 - 3), -955291385);
    v374 = *(_DWORD *)algn_27FE634;
    v375 = v373 % *(_DWORD *)algn_27FE634;
    v376 = *(_DWORD *)(legacyPredicates + 4 * (v373 % *(_DWORD *)algn_27FE634));
    if ( !v376 )
      goto LABEL_363;
    v377 = *(_DWORD *)v376;
    v378 = v1352;
    v379 = *(_DWORD *)(*(_DWORD *)v376 + 24);
      if ( v379 == v373 )
        v380 = *(_DWORD **)(v377 + 4);
        v381 = *(v378 - 3);
        if ( v381 == *(v380 - 3) && !memcmp(v378, v380, v381) )
      v382 = *(_DWORD *)v377;
      if ( *(_DWORD *)v377 )
        v379 = *(_DWORD *)(v382 + 24);
        v376 = v377;
        v377 = *(_DWORD *)v377;
        if ( *(_DWORD *)(v382 + 24) % v374 == v375 )
    v1163 = v376 == 0;
    if ( v376 )
      v1163 = *(_DWORD *)v376 == 0;
    if ( v1163 )
LABEL_363:
      v1594 = 0;
      v1595 = v1233;
      v1596 = 3;
      v1597 = 1;
      v1598 = 1;
        &v1593,
        (int *)&v1352,
        (int)&v1594);
  v383 = (void *)(v1351 - 12);
  if ( (int *)(v1351 - 12) != &dword_28898C0 )
    v973 = (unsigned int *)(v1351 - 4);
        v974 = __ldrex(v973);
      while ( __strex(v974 - 1, v973) );
      v974 = (*v973)--;
    if ( v974 <= 0 )
      j_j_j_j__ZdlPv_9(v383);
  v384 = (char *)v1352 - 12;
  if ( (int *)((char *)v1352 - 12) != &dword_28898C0 )
    v975 = (unsigned int *)((char *)v1352 - 4);
        v976 = __ldrex(v975);
      while ( __strex(v976 - 1, v975) );
      v976 = (*v975)--;
    if ( v976 <= 0 )
      j_j_j_j__ZdlPv_9(v384);
  sub_21E94B4(&v1350, "other_with_item");
  sub_21E94B4((void **)&v1349, "has_equipment");
  v1234 = FilterList::findFilterDefinition((int **)&v1349);
  if ( v1234 )
    v385 = sub_21B417C((int *)v1350, *((_DWORD *)v1350 - 3), -955291385);
    v386 = *(_DWORD *)algn_27FE634;
    v387 = v385 % *(_DWORD *)algn_27FE634;
    v388 = *(_DWORD *)(legacyPredicates + 4 * (v385 % *(_DWORD *)algn_27FE634));
    if ( !v388 )
      goto LABEL_374;
    v389 = *(_DWORD *)v388;
    v390 = v1350;
    v391 = *(_DWORD *)(*(_DWORD *)v388 + 24);
      if ( v391 == v385 )
        v392 = *(_DWORD **)(v389 + 4);
        v393 = *(v390 - 3);
        if ( v393 == *(v392 - 3) && !memcmp(v390, v392, v393) )
      v394 = *(_DWORD *)v389;
      if ( *(_DWORD *)v389 )
        v391 = *(_DWORD *)(v394 + 24);
        v388 = v389;
        v389 = *(_DWORD *)v389;
        if ( *(_DWORD *)(v394 + 24) % v386 == v387 )
    v1164 = v388 == 0;
    if ( v388 )
      v1164 = *(_DWORD *)v388 == 0;
    if ( v1164 )
LABEL_374:
      v1600 = 1;
      v1601 = v1234;
      v1602 = 1;
      v1603 = 0;
      v1604 = 4;
        &v1599,
        (int *)&v1350,
        (int)&v1600);
  v395 = (void *)(v1349 - 12);
  if ( (int *)(v1349 - 12) != &dword_28898C0 )
    v977 = (unsigned int *)(v1349 - 4);
        v978 = __ldrex(v977);
      while ( __strex(v978 - 1, v977) );
      v978 = (*v977)--;
    if ( v978 <= 0 )
      j_j_j_j__ZdlPv_9(v395);
  v396 = (char *)v1350 - 12;
  if ( (int *)((char *)v1350 - 12) != &dword_28898C0 )
    v979 = (unsigned int *)((char *)v1350 - 4);
        v980 = __ldrex(v979);
      while ( __strex(v980 - 1, v979) );
      v980 = (*v979)--;
    if ( v980 <= 0 )
      j_j_j_j__ZdlPv_9(v396);
  sub_21E94B4(&v1348, "other_without_item");
  sub_21E94B4((void **)&v1347, "has_equipment");
  v1235 = FilterList::findFilterDefinition((int **)&v1347);
  if ( v1235 )
    v397 = sub_21B417C((int *)v1348, *((_DWORD *)v1348 - 3), -955291385);
    v398 = *(_DWORD *)algn_27FE634;
    v399 = v397 % *(_DWORD *)algn_27FE634;
    v400 = *(_DWORD *)(legacyPredicates + 4 * (v397 % *(_DWORD *)algn_27FE634));
    if ( !v400 )
      goto LABEL_385;
    v401 = *(_DWORD *)v400;
    v402 = v1348;
    v403 = *(_DWORD *)(*(_DWORD *)v400 + 24);
      if ( v403 == v397 )
        v404 = *(_DWORD **)(v401 + 4);
        v405 = *(v402 - 3);
        if ( v405 == *(v404 - 3) && !memcmp(v402, v404, v405) )
      v406 = *(_DWORD *)v401;
      if ( *(_DWORD *)v401 )
        v403 = *(_DWORD *)(v406 + 24);
        v400 = v401;
        v401 = *(_DWORD *)v401;
        if ( *(_DWORD *)(v406 + 24) % v398 == v399 )
    v1165 = v400 == 0;
    if ( v400 )
      v1165 = *(_DWORD *)v400 == 0;
    if ( v1165 )
LABEL_385:
      v1606 = 0;
      v1607 = v1235;
      v1608 = 1;
      v1609 = 1;
      v1610 = 4;
        &v1605,
        (int *)&v1348,
        (int)&v1606);
  v407 = (void *)(v1347 - 12);
  if ( (int *)(v1347 - 12) != &dword_28898C0 )
    v981 = (unsigned int *)(v1347 - 4);
        v982 = __ldrex(v981);
      while ( __strex(v982 - 1, v981) );
      v982 = (*v981)--;
    if ( v982 <= 0 )
      j_j_j_j__ZdlPv_9(v407);
  v408 = (char *)v1348 - 12;
  if ( (int *)((char *)v1348 - 12) != &dword_28898C0 )
    v983 = (unsigned int *)((char *)v1348 - 4);
        v984 = __ldrex(v983);
      while ( __strex(v984 - 1, v983) );
      v984 = (*v983)--;
    if ( v984 <= 0 )
      j_j_j_j__ZdlPv_9(v408);
  sub_21E94B4(&v1346, "other_with_armor");
  sub_21E94B4((void **)&v1345, "has_equipment");
  v1236 = FilterList::findFilterDefinition((int **)&v1345);
  if ( v1236 )
    v409 = sub_21B417C((int *)v1346, *((_DWORD *)v1346 - 3), -955291385);
    v410 = *(_DWORD *)algn_27FE634;
    v411 = v409 % *(_DWORD *)algn_27FE634;
    v412 = *(_DWORD *)(legacyPredicates + 4 * (v409 % *(_DWORD *)algn_27FE634));
    if ( !v412 )
      goto LABEL_396;
    v413 = *(_DWORD *)v412;
    v414 = v1346;
    v415 = *(_DWORD *)(*(_DWORD *)v412 + 24);
      if ( v415 == v409 )
        v416 = *(_DWORD **)(v413 + 4);
        v417 = *(v414 - 3);
        if ( v417 == *(v416 - 3) && !memcmp(v414, v416, v417) )
      v418 = *(_DWORD *)v413;
      if ( *(_DWORD *)v413 )
        v415 = *(_DWORD *)(v418 + 24);
        v412 = v413;
        v413 = *(_DWORD *)v413;
        if ( *(_DWORD *)(v418 + 24) % v410 == v411 )
    v1166 = v412 == 0;
    if ( v412 )
      v1166 = *(_DWORD *)v412 == 0;
    if ( v1166 )
LABEL_396:
      v1612 = 1;
      v1613 = v1236;
      v1614 = 1;
      v1615 = 0;
      v1616 = 5;
        &v1611,
        (int *)&v1346,
        (int)&v1612);
  v419 = (void *)(v1345 - 12);
  if ( (int *)(v1345 - 12) != &dword_28898C0 )
    v985 = (unsigned int *)(v1345 - 4);
        v986 = __ldrex(v985);
      while ( __strex(v986 - 1, v985) );
      v986 = (*v985)--;
    if ( v986 <= 0 )
      j_j_j_j__ZdlPv_9(v419);
  v420 = (char *)v1346 - 12;
  if ( (int *)((char *)v1346 - 12) != &dword_28898C0 )
    v987 = (unsigned int *)((char *)v1346 - 4);
        v988 = __ldrex(v987);
      while ( __strex(v988 - 1, v987) );
      v988 = (*v987)--;
    if ( v988 <= 0 )
      j_j_j_j__ZdlPv_9(v420);
  sub_21E94B4(&v1344, "other_without_armor");
  sub_21E94B4((void **)&v1343, "has_equipment");
  v1237 = FilterList::findFilterDefinition((int **)&v1343);
  if ( v1237 )
    v421 = sub_21B417C((int *)v1344, *((_DWORD *)v1344 - 3), -955291385);
    v422 = *(_DWORD *)algn_27FE634;
    v423 = v421 % *(_DWORD *)algn_27FE634;
    v424 = *(_DWORD *)(legacyPredicates + 4 * (v421 % *(_DWORD *)algn_27FE634));
    if ( !v424 )
      goto LABEL_407;
    v425 = *(_DWORD *)v424;
    v426 = v1344;
    v427 = *(_DWORD *)(*(_DWORD *)v424 + 24);
      if ( v427 == v421 )
        v428 = *(_DWORD **)(v425 + 4);
        v429 = *(v426 - 3);
        if ( v429 == *(v428 - 3) && !memcmp(v426, v428, v429) )
      v430 = *(_DWORD *)v425;
      if ( *(_DWORD *)v425 )
        v427 = *(_DWORD *)(v430 + 24);
        v424 = v425;
        v425 = *(_DWORD *)v425;
        if ( *(_DWORD *)(v430 + 24) % v422 == v423 )
    v1167 = v424 == 0;
    if ( v424 )
      v1167 = *(_DWORD *)v424 == 0;
    if ( v1167 )
LABEL_407:
      v1618 = 0;
      v1619 = v1237;
      v1620 = 1;
      v1621 = 1;
      v1622 = 5;
        &v1617,
        (int *)&v1344,
        (int)&v1618);
  v431 = (void *)(v1343 - 12);
  if ( (int *)(v1343 - 12) != &dword_28898C0 )
    v989 = (unsigned int *)(v1343 - 4);
        v990 = __ldrex(v989);
      while ( __strex(v990 - 1, v989) );
      v990 = (*v989)--;
    if ( v990 <= 0 )
      j_j_j_j__ZdlPv_9(v431);
  v432 = (char *)v1344 - 12;
  if ( (int *)((char *)v1344 - 12) != &dword_28898C0 )
    v991 = (unsigned int *)((char *)v1344 - 4);
        v992 = __ldrex(v991);
      while ( __strex(v992 - 1, v991) );
      v992 = (*v991)--;
    if ( v992 <= 0 )
      j_j_j_j__ZdlPv_9(v432);
  sub_21E94B4(&v1342, "other_with_equipment");
  sub_21E94B4((void **)&v1341, "has_equipment");
  v1238 = FilterList::findFilterDefinition((int **)&v1341);
  if ( v1238 )
    v433 = sub_21B417C((int *)v1342, *((_DWORD *)v1342 - 3), -955291385);
    v434 = *(_DWORD *)algn_27FE634;
    v435 = v433 % *(_DWORD *)algn_27FE634;
    v436 = *(_DWORD *)(legacyPredicates + 4 * (v433 % *(_DWORD *)algn_27FE634));
    if ( !v436 )
      goto LABEL_418;
    v437 = *(_DWORD *)v436;
    v438 = v1342;
    v439 = *(_DWORD *)(*(_DWORD *)v436 + 24);
      if ( v439 == v433 )
        v440 = *(_DWORD **)(v437 + 4);
        v441 = *(v438 - 3);
        if ( v441 == *(v440 - 3) && !memcmp(v438, v440, v441) )
      v442 = *(_DWORD *)v437;
      if ( *(_DWORD *)v437 )
        v439 = *(_DWORD *)(v442 + 24);
        v436 = v437;
        v437 = *(_DWORD *)v437;
        if ( *(_DWORD *)(v442 + 24) % v434 == v435 )
    v1168 = v436 == 0;
    if ( v436 )
      v1168 = *(_DWORD *)v436 == 0;
    if ( v1168 )
LABEL_418:
      v1624 = 1;
      v1625 = v1238;
      v1626 = 1;
      v1627 = 0;
      v1628 = 6;
        &v1623,
        (int *)&v1342,
        (int)&v1624);
  v443 = (void *)(v1341 - 12);
  if ( (int *)(v1341 - 12) != &dword_28898C0 )
    v993 = (unsigned int *)(v1341 - 4);
        v994 = __ldrex(v993);
      while ( __strex(v994 - 1, v993) );
      v994 = (*v993)--;
    if ( v994 <= 0 )
      j_j_j_j__ZdlPv_9(v443);
  v444 = (char *)v1342 - 12;
  if ( (int *)((char *)v1342 - 12) != &dword_28898C0 )
    v995 = (unsigned int *)((char *)v1342 - 4);
        v996 = __ldrex(v995);
      while ( __strex(v996 - 1, v995) );
      v996 = (*v995)--;
    if ( v996 <= 0 )
      j_j_j_j__ZdlPv_9(v444);
  sub_21E94B4(&v1340, "other_without_equipment");
  sub_21E94B4((void **)&v1339, "has_equipment");
  v1239 = FilterList::findFilterDefinition((int **)&v1339);
  if ( v1239 )
    v445 = sub_21B417C((int *)v1340, *((_DWORD *)v1340 - 3), -955291385);
    v446 = *(_DWORD *)algn_27FE634;
    v447 = v445 % *(_DWORD *)algn_27FE634;
    v448 = *(_DWORD *)(legacyPredicates + 4 * (v445 % *(_DWORD *)algn_27FE634));
    if ( !v448 )
      goto LABEL_429;
    v449 = *(_DWORD *)v448;
    v450 = v1340;
    v451 = *(_DWORD *)(*(_DWORD *)v448 + 24);
      if ( v451 == v445 )
        v452 = *(_DWORD **)(v449 + 4);
        v453 = *(v450 - 3);
        if ( v453 == *(v452 - 3) && !memcmp(v450, v452, v453) )
      v454 = *(_DWORD *)v449;
      if ( *(_DWORD *)v449 )
        v451 = *(_DWORD *)(v454 + 24);
        v448 = v449;
        v449 = *(_DWORD *)v449;
        if ( *(_DWORD *)(v454 + 24) % v446 == v447 )
    v1169 = v448 == 0;
    if ( v448 )
      v1169 = *(_DWORD *)v448 == 0;
    if ( v1169 )
LABEL_429:
      v1630 = 0;
      v1631 = v1239;
      v1632 = 1;
      v1633 = 1;
      v1634 = 6;
        &v1629,
        (int *)&v1340,
        (int)&v1630);
  v455 = (void *)(v1339 - 12);
  if ( (int *)(v1339 - 12) != &dword_28898C0 )
    v997 = (unsigned int *)(v1339 - 4);
        v998 = __ldrex(v997);
      while ( __strex(v998 - 1, v997) );
      v998 = (*v997)--;
    if ( v998 <= 0 )
      j_j_j_j__ZdlPv_9(v455);
  v456 = (char *)v1340 - 12;
  if ( (int *)((char *)v1340 - 12) != &dword_28898C0 )
    v999 = (unsigned int *)((char *)v1340 - 4);
        v1000 = __ldrex(v999);
      while ( __strex(v1000 - 1, v999) );
      v1000 = (*v999)--;
    if ( v1000 <= 0 )
      j_j_j_j__ZdlPv_9(v456);
  sub_21E94B4(&v1338, "other_with_components");
  sub_21E94B4((void **)&v1337, "has_component");
  v1240 = FilterList::findFilterDefinition((int **)&v1337);
  if ( v1240 )
    v457 = sub_21B417C((int *)v1338, *((_DWORD *)v1338 - 3), -955291385);
    v458 = *(_DWORD *)algn_27FE634;
    v459 = v457 % *(_DWORD *)algn_27FE634;
    v460 = *(_DWORD *)(legacyPredicates + 4 * (v457 % *(_DWORD *)algn_27FE634));
    if ( !v460 )
      goto LABEL_440;
    v461 = *(_DWORD *)v460;
    v462 = v1338;
    v463 = *(_DWORD *)(*(_DWORD *)v460 + 24);
      if ( v463 == v457 )
        v464 = *(_DWORD **)(v461 + 4);
        v465 = *(v462 - 3);
        if ( v465 == *(v464 - 3) && !memcmp(v462, v464, v465) )
      v466 = *(_DWORD *)v461;
      if ( *(_DWORD *)v461 )
        v463 = *(_DWORD *)(v466 + 24);
        v460 = v461;
        v461 = *(_DWORD *)v461;
        if ( *(_DWORD *)(v466 + 24) % v458 == v459 )
    v1170 = v460 == 0;
    if ( v460 )
      v1170 = *(_DWORD *)v460 == 0;
    if ( v1170 )
LABEL_440:
      v1636 = 0;
      v1637 = v1240;
      v1638 = 1;
      v1639 = 0;
      v1640 = 2;
        &v1635,
        (int *)&v1338,
        (int)&v1636);
  v467 = (void *)(v1337 - 12);
  if ( (int *)(v1337 - 12) != &dword_28898C0 )
    v1001 = (unsigned int *)(v1337 - 4);
        v1002 = __ldrex(v1001);
      while ( __strex(v1002 - 1, v1001) );
      v1002 = (*v1001)--;
    if ( v1002 <= 0 )
      j_j_j_j__ZdlPv_9(v467);
  v468 = (char *)v1338 - 12;
  if ( (int *)((char *)v1338 - 12) != &dword_28898C0 )
    v1003 = (unsigned int *)((char *)v1338 - 4);
        v1004 = __ldrex(v1003);
      while ( __strex(v1004 - 1, v1003) );
      v1004 = (*v1003)--;
    if ( v1004 <= 0 )
      j_j_j_j__ZdlPv_9(v468);
  sub_21E94B4(&v1336, "other_without_components");
  sub_21E94B4((void **)&v1335, "has_component");
  v1241 = FilterList::findFilterDefinition((int **)&v1335);
  if ( v1241 )
    v469 = sub_21B417C((int *)v1336, *((_DWORD *)v1336 - 3), -955291385);
    v470 = *(_DWORD *)algn_27FE634;
    v471 = v469 % *(_DWORD *)algn_27FE634;
    v472 = *(_DWORD *)(legacyPredicates + 4 * (v469 % *(_DWORD *)algn_27FE634));
    if ( !v472 )
      goto LABEL_451;
    v473 = *(_DWORD *)v472;
    v474 = v1336;
    v475 = *(_DWORD *)(*(_DWORD *)v472 + 24);
      if ( v475 == v469 )
        v476 = *(_DWORD **)(v473 + 4);
        v477 = *(v474 - 3);
        if ( v477 == *(v476 - 3) && !memcmp(v474, v476, v477) )
      v478 = *(_DWORD *)v473;
      if ( *(_DWORD *)v473 )
        v475 = *(_DWORD *)(v478 + 24);
        v472 = v473;
        v473 = *(_DWORD *)v473;
        if ( *(_DWORD *)(v478 + 24) % v470 == v471 )
    v1171 = v472 == 0;
    if ( v472 )
      v1171 = *(_DWORD *)v472 == 0;
    if ( v1171 )
LABEL_451:
      v1642 = 0;
      v1643 = v1241;
      v1644 = 1;
      v1645 = 1;
      v1646 = 2;
        &v1641,
        (int *)&v1336,
        (int)&v1642);
  v479 = (void *)(v1335 - 12);
  if ( (int *)(v1335 - 12) != &dword_28898C0 )
    v1005 = (unsigned int *)(v1335 - 4);
        v1006 = __ldrex(v1005);
      while ( __strex(v1006 - 1, v1005) );
      v1006 = (*v1005)--;
    if ( v1006 <= 0 )
      j_j_j_j__ZdlPv_9(v479);
  v480 = (char *)v1336 - 12;
  if ( (int *)((char *)v1336 - 12) != &dword_28898C0 )
    v1007 = (unsigned int *)((char *)v1336 - 4);
        v1008 = __ldrex(v1007);
      while ( __strex(v1008 - 1, v1007) );
      v1008 = (*v1007)--;
    if ( v1008 <= 0 )
      j_j_j_j__ZdlPv_9(v480);
  sub_21E94B4(&v1334, "other_with_families");
  sub_21E94B4((void **)&v1333, "is_family");
  v1242 = FilterList::findFilterDefinition((int **)&v1333);
  if ( v1242 )
    v481 = sub_21B417C((int *)v1334, *((_DWORD *)v1334 - 3), -955291385);
    v482 = *(_DWORD *)algn_27FE634;
    v483 = v481 % *(_DWORD *)algn_27FE634;
    v484 = *(_DWORD *)(legacyPredicates + 4 * (v481 % *(_DWORD *)algn_27FE634));
    if ( !v484 )
      goto LABEL_462;
    v485 = *(_DWORD *)v484;
    v486 = v1334;
    v487 = *(_DWORD *)(*(_DWORD *)v484 + 24);
      if ( v487 == v481 )
        v488 = *(_DWORD **)(v485 + 4);
        v489 = *(v486 - 3);
        if ( v489 == *(v488 - 3) && !memcmp(v486, v488, v489) )
      v490 = *(_DWORD *)v485;
      if ( *(_DWORD *)v485 )
        v487 = *(_DWORD *)(v490 + 24);
        v484 = v485;
        v485 = *(_DWORD *)v485;
        if ( *(_DWORD *)(v490 + 24) % v482 == v483 )
    v1172 = v484 == 0;
    if ( v484 )
      v1172 = *(_DWORD *)v484 == 0;
    if ( v1172 )
LABEL_462:
      v1648 = 1;
      v1649 = v1242;
      v1650 = 1;
      v1651 = 0;
      v1652 = 2;
        &v1647,
        (int *)&v1334,
        (int)&v1648);
  v491 = (void *)(v1333 - 12);
  if ( (int *)(v1333 - 12) != &dword_28898C0 )
    v1009 = (unsigned int *)(v1333 - 4);
        v1010 = __ldrex(v1009);
      while ( __strex(v1010 - 1, v1009) );
      v1010 = (*v1009)--;
    if ( v1010 <= 0 )
      j_j_j_j__ZdlPv_9(v491);
  v492 = (char *)v1334 - 12;
  if ( (int *)((char *)v1334 - 12) != &dword_28898C0 )
    v1011 = (unsigned int *)((char *)v1334 - 4);
        v1012 = __ldrex(v1011);
      while ( __strex(v1012 - 1, v1011) );
      v1012 = (*v1011)--;
    if ( v1012 <= 0 )
      j_j_j_j__ZdlPv_9(v492);
  sub_21E94B4(&v1332, "other_without_families");
  sub_21E94B4((void **)&v1331, "is_family");
  v1243 = FilterList::findFilterDefinition((int **)&v1331);
  if ( v1243 )
    v493 = sub_21B417C((int *)v1332, *((_DWORD *)v1332 - 3), -955291385);
    v494 = *(_DWORD *)algn_27FE634;
    v495 = v493 % *(_DWORD *)algn_27FE634;
    v496 = *(_DWORD *)(legacyPredicates + 4 * (v493 % *(_DWORD *)algn_27FE634));
    if ( !v496 )
      goto LABEL_473;
    v497 = *(_DWORD *)v496;
    v498 = v1332;
    v499 = *(_DWORD *)(*(_DWORD *)v496 + 24);
      if ( v499 == v493 )
        v500 = *(_DWORD **)(v497 + 4);
        v501 = *(v498 - 3);
        if ( v501 == *(v500 - 3) && !memcmp(v498, v500, v501) )
      v502 = *(_DWORD *)v497;
      if ( *(_DWORD *)v497 )
        v499 = *(_DWORD *)(v502 + 24);
        v496 = v497;
        v497 = *(_DWORD *)v497;
        if ( *(_DWORD *)(v502 + 24) % v494 == v495 )
    v1173 = v496 == 0;
    if ( v496 )
      v1173 = *(_DWORD *)v496 == 0;
    if ( v1173 )
LABEL_473:
      v1654 = 0;
      v1655 = v1243;
      v1656 = 1;
      v1657 = 1;
      v1658 = 2;
        &v1653,
        (int *)&v1332,
        (int)&v1654);
  v503 = (void *)(v1331 - 12);
  if ( (int *)(v1331 - 12) != &dword_28898C0 )
    v1013 = (unsigned int *)(v1331 - 4);
        v1014 = __ldrex(v1013);
      while ( __strex(v1014 - 1, v1013) );
      v1014 = (*v1013)--;
    if ( v1014 <= 0 )
      j_j_j_j__ZdlPv_9(v503);
  v504 = (char *)v1332 - 12;
  if ( (int *)((char *)v1332 - 12) != &dword_28898C0 )
    v1015 = (unsigned int *)((char *)v1332 - 4);
        v1016 = __ldrex(v1015);
      while ( __strex(v1016 - 1, v1015) );
      v1016 = (*v1015)--;
    if ( v1016 <= 0 )
      j_j_j_j__ZdlPv_9(v504);
  sub_21E94B4(&v1330, "other_is_owner");
  sub_21E94B4((void **)&v1329, "is_owner");
  v1244 = FilterList::findFilterDefinition((int **)&v1329);
  if ( v1244 )
    v505 = sub_21B417C((int *)v1330, *((_DWORD *)v1330 - 3), -955291385);
    v506 = *(_DWORD *)algn_27FE634;
    v507 = v505 % *(_DWORD *)algn_27FE634;
    v508 = *(_DWORD *)(legacyPredicates + 4 * (v505 % *(_DWORD *)algn_27FE634));
    if ( !v508 )
      goto LABEL_484;
    v509 = *(_DWORD *)v508;
    v510 = v1330;
    v511 = *(_DWORD *)(*(_DWORD *)v508 + 24);
      if ( v511 == v505 )
        v512 = *(_DWORD **)(v509 + 4);
        v513 = *(v510 - 3);
        if ( v513 == *(v512 - 3) && !memcmp(v510, v512, v513) )
      v514 = *(_DWORD *)v509;
      if ( *(_DWORD *)v509 )
        v511 = *(_DWORD *)(v514 + 24);
        v508 = v509;
        v509 = *(_DWORD *)v509;
        if ( *(_DWORD *)(v514 + 24) % v506 == v507 )
    v1174 = v508 == 0;
    if ( v508 )
      v1174 = *(_DWORD *)v508 == 0;
    if ( v1174 )
LABEL_484:
      v1660 = 0;
      v1661 = v1244;
      v1662 = 1;
      v1663 = 0;
      v1664 = 0;
        &v1659,
        (int *)&v1330,
        (int)&v1660);
  v515 = (void *)(v1329 - 12);
  if ( (int *)(v1329 - 12) != &dword_28898C0 )
    v1017 = (unsigned int *)(v1329 - 4);
        v1018 = __ldrex(v1017);
      while ( __strex(v1018 - 1, v1017) );
      v1018 = (*v1017)--;
    if ( v1018 <= 0 )
      j_j_j_j__ZdlPv_9(v515);
  v516 = (char *)v1330 - 12;
  if ( (int *)((char *)v1330 - 12) != &dword_28898C0 )
    v1019 = (unsigned int *)((char *)v1330 - 4);
        v1020 = __ldrex(v1019);
      while ( __strex(v1020 - 1, v1019) );
      v1020 = (*v1019)--;
    if ( v1020 <= 0 )
      j_j_j_j__ZdlPv_9(v516);
  sub_21E94B4(&v1328, "other_is_target");
  sub_21E94B4((void **)&v1327, "is_target");
  v1245 = FilterList::findFilterDefinition((int **)&v1327);
  if ( v1245 )
    v517 = sub_21B417C((int *)v1328, *((_DWORD *)v1328 - 3), -955291385);
    v518 = *(_DWORD *)algn_27FE634;
    v519 = v517 % *(_DWORD *)algn_27FE634;
    v520 = *(_DWORD *)(legacyPredicates + 4 * (v517 % *(_DWORD *)algn_27FE634));
    if ( !v520 )
      goto LABEL_495;
    v521 = *(_DWORD *)v520;
    v522 = v1328;
    v523 = *(_DWORD *)(*(_DWORD *)v520 + 24);
      if ( v523 == v517 )
        v524 = *(_DWORD **)(v521 + 4);
        v525 = *(v522 - 3);
        if ( v525 == *(v524 - 3) && !memcmp(v522, v524, v525) )
      v526 = *(_DWORD *)v521;
      if ( *(_DWORD *)v521 )
        v523 = *(_DWORD *)(v526 + 24);
        v520 = v521;
        v521 = *(_DWORD *)v521;
        if ( *(_DWORD *)(v526 + 24) % v518 == v519 )
    v1175 = v520 == 0;
    if ( v520 )
      v1175 = *(_DWORD *)v520 == 0;
    if ( v1175 )
LABEL_495:
      v1666 = 0;
      v1667 = v1245;
      v1668 = 1;
      v1669 = 0;
      v1670 = 0;
        &v1665,
        (int *)&v1328,
        (int)&v1666);
  v527 = (void *)(v1327 - 12);
  if ( (int *)(v1327 - 12) != &dword_28898C0 )
    v1021 = (unsigned int *)(v1327 - 4);
        v1022 = __ldrex(v1021);
      while ( __strex(v1022 - 1, v1021) );
      v1022 = (*v1021)--;
    if ( v1022 <= 0 )
      j_j_j_j__ZdlPv_9(v527);
  v528 = (char *)v1328 - 12;
  if ( (int *)((char *)v1328 - 12) != &dword_28898C0 )
    v1023 = (unsigned int *)((char *)v1328 - 4);
        v1024 = __ldrex(v1023);
      while ( __strex(v1024 - 1, v1023) );
      v1024 = (*v1023)--;
    if ( v1024 <= 0 )
      j_j_j_j__ZdlPv_9(v528);
  sub_21E94B4(&v1326, "other_is_in_caravan");
  sub_21E94B4((void **)&v1325, "in_caravan");
  v1246 = FilterList::findFilterDefinition((int **)&v1325);
  if ( v1246 )
    v529 = sub_21B417C((int *)v1326, *((_DWORD *)v1326 - 3), -955291385);
    v530 = *(_DWORD *)algn_27FE634;
    v531 = v529 % *(_DWORD *)algn_27FE634;
    v532 = *(_DWORD *)(legacyPredicates + 4 * (v529 % *(_DWORD *)algn_27FE634));
    if ( !v532 )
      goto LABEL_506;
    v533 = *(_DWORD *)v532;
    v534 = v1326;
    v535 = *(_DWORD *)(*(_DWORD *)v532 + 24);
      if ( v535 == v529 )
        v536 = *(_DWORD **)(v533 + 4);
        v537 = *(v534 - 3);
        if ( v537 == *(v536 - 3) && !memcmp(v534, v536, v537) )
      v538 = *(_DWORD *)v533;
      if ( *(_DWORD *)v533 )
        v535 = *(_DWORD *)(v538 + 24);
        v532 = v533;
        v533 = *(_DWORD *)v533;
        if ( *(_DWORD *)(v538 + 24) % v530 == v531 )
    v1176 = v532 == 0;
    if ( v532 )
      v1176 = *(_DWORD *)v532 == 0;
    if ( v1176 )
LABEL_506:
      v1672 = 0;
      v1673 = v1246;
      v1674 = 1;
      v1675 = 0;
      v1676 = 0;
        &v1671,
        (int *)&v1326,
        (int)&v1672);
  v539 = (void *)(v1325 - 12);
  if ( (int *)(v1325 - 12) != &dword_28898C0 )
    v1025 = (unsigned int *)(v1325 - 4);
        v1026 = __ldrex(v1025);
      while ( __strex(v1026 - 1, v1025) );
      v1026 = (*v1025)--;
    if ( v1026 <= 0 )
      j_j_j_j__ZdlPv_9(v539);
  v540 = (char *)v1326 - 12;
  if ( (int *)((char *)v1326 - 12) != &dword_28898C0 )
    v1027 = (unsigned int *)((char *)v1326 - 4);
        v1028 = __ldrex(v1027);
      while ( __strex(v1028 - 1, v1027) );
      v1028 = (*v1027)--;
    if ( v1028 <= 0 )
      j_j_j_j__ZdlPv_9(v540);
  sub_21E94B4(&v1324, "other_is_not_in_caravan");
  sub_21E94B4((void **)&v1323, "in_caravan");
  v1247 = FilterList::findFilterDefinition((int **)&v1323);
  if ( v1247 )
    v541 = sub_21B417C((int *)v1324, *((_DWORD *)v1324 - 3), -955291385);
    v542 = *(_DWORD *)algn_27FE634;
    v543 = v541 % *(_DWORD *)algn_27FE634;
    v544 = *(_DWORD *)(legacyPredicates + 4 * (v541 % *(_DWORD *)algn_27FE634));
    if ( !v544 )
      goto LABEL_517;
    v545 = *(_DWORD *)v544;
    v546 = v1324;
    v547 = *(_DWORD *)(*(_DWORD *)v544 + 24);
      if ( v547 == v541 )
        v548 = *(_DWORD **)(v545 + 4);
        v549 = *(v546 - 3);
        if ( v549 == *(v548 - 3) && !memcmp(v546, v548, v549) )
      v550 = *(_DWORD *)v545;
      if ( *(_DWORD *)v545 )
        v547 = *(_DWORD *)(v550 + 24);
        v544 = v545;
        v545 = *(_DWORD *)v545;
        if ( *(_DWORD *)(v550 + 24) % v542 == v543 )
    v1177 = v544 == 0;
    if ( v544 )
      v1177 = *(_DWORD *)v544 == 0;
    if ( v1177 )
LABEL_517:
      v1678 = 0;
      v1679 = v1247;
      v1680 = 1;
      v1681 = 0;
      v1682 = 0;
        &v1677,
        (int *)&v1324,
        (int)&v1678);
  v551 = (void *)(v1323 - 12);
  if ( (int *)(v1323 - 12) != &dword_28898C0 )
    v1029 = (unsigned int *)(v1323 - 4);
        v1030 = __ldrex(v1029);
      while ( __strex(v1030 - 1, v1029) );
      v1030 = (*v1029)--;
    if ( v1030 <= 0 )
      j_j_j_j__ZdlPv_9(v551);
  v552 = (char *)v1324 - 12;
  if ( (int *)((char *)v1324 - 12) != &dword_28898C0 )
    v1031 = (unsigned int *)((char *)v1324 - 4);
        v1032 = __ldrex(v1031);
      while ( __strex(v1032 - 1, v1031) );
      v1032 = (*v1031)--;
    if ( v1032 <= 0 )
      j_j_j_j__ZdlPv_9(v552);
  sub_21E94B4(&v1322, "other_with_variant");
  sub_21E94B4((void **)&v1321, "is_variant");
  v1248 = FilterList::findFilterDefinition((int **)&v1321);
  if ( v1248 )
    v553 = sub_21B417C((int *)v1322, *((_DWORD *)v1322 - 3), -955291385);
    v554 = *(_DWORD *)algn_27FE634;
    v555 = v553 % *(_DWORD *)algn_27FE634;
    v556 = *(_DWORD *)(legacyPredicates + 4 * (v553 % *(_DWORD *)algn_27FE634));
    if ( !v556 )
      goto LABEL_528;
    v557 = *(_DWORD *)v556;
    v558 = v1322;
    v559 = *(_DWORD *)(*(_DWORD *)v556 + 24);
      if ( v559 == v553 )
        v560 = *(_DWORD **)(v557 + 4);
        v561 = *(v558 - 3);
        if ( v561 == *(v560 - 3) && !memcmp(v558, v560, v561) )
      v562 = *(_DWORD *)v557;
      if ( *(_DWORD *)v557 )
        v559 = *(_DWORD *)(v562 + 24);
        v556 = v557;
        v557 = *(_DWORD *)v557;
        if ( *(_DWORD *)(v562 + 24) % v554 == v555 )
    v1178 = v556 == 0;
    if ( v556 )
      v1178 = *(_DWORD *)v556 == 0;
    if ( v1178 )
LABEL_528:
      v1684 = 1;
      v1685 = v1248;
      v1686 = 1;
      v1687 = 0;
      v1688 = 1;
        &v1683,
        (int *)&v1322,
        (int)&v1684);
  v563 = (void *)(v1321 - 12);
  if ( (int *)(v1321 - 12) != &dword_28898C0 )
    v1033 = (unsigned int *)(v1321 - 4);
        v1034 = __ldrex(v1033);
      while ( __strex(v1034 - 1, v1033) );
      v1034 = (*v1033)--;
    if ( v1034 <= 0 )
      j_j_j_j__ZdlPv_9(v563);
  v564 = (char *)v1322 - 12;
  if ( (int *)((char *)v1322 - 12) != &dword_28898C0 )
    v1035 = (unsigned int *)((char *)v1322 - 4);
        v1036 = __ldrex(v1035);
      while ( __strex(v1036 - 1, v1035) );
      v1036 = (*v1035)--;
    if ( v1036 <= 0 )
      j_j_j_j__ZdlPv_9(v564);
  sub_21E94B4(&v1320, "other_without_variant");
  sub_21E94B4((void **)&v1319, "is_variant");
  v1249 = FilterList::findFilterDefinition((int **)&v1319);
  if ( v1249 )
    v565 = sub_21B417C((int *)v1320, *((_DWORD *)v1320 - 3), -955291385);
    v566 = *(_DWORD *)algn_27FE634;
    v567 = v565 % *(_DWORD *)algn_27FE634;
    v568 = *(_DWORD *)(legacyPredicates + 4 * (v565 % *(_DWORD *)algn_27FE634));
    if ( !v568 )
      goto LABEL_539;
    v569 = *(_DWORD *)v568;
    v570 = v1320;
    v571 = *(_DWORD *)(*(_DWORD *)v568 + 24);
      if ( v571 == v565 )
        v572 = *(_DWORD **)(v569 + 4);
        v573 = *(v570 - 3);
        if ( v573 == *(v572 - 3) && !memcmp(v570, v572, v573) )
      v574 = *(_DWORD *)v569;
      if ( *(_DWORD *)v569 )
        v571 = *(_DWORD *)(v574 + 24);
        v568 = v569;
        v569 = *(_DWORD *)v569;
        if ( *(_DWORD *)(v574 + 24) % v566 == v567 )
    v1179 = v568 == 0;
    if ( v568 )
      v1179 = *(_DWORD *)v568 == 0;
    if ( v1179 )
LABEL_539:
      v1690 = 0;
      v1691 = v1249;
      v1692 = 1;
      v1693 = 1;
      v1694 = 1;
        &v1689,
        (int *)&v1320,
        (int)&v1690);
  v575 = (void *)(v1319 - 12);
  if ( (int *)(v1319 - 12) != &dword_28898C0 )
    v1037 = (unsigned int *)(v1319 - 4);
        v1038 = __ldrex(v1037);
      while ( __strex(v1038 - 1, v1037) );
      v1038 = (*v1037)--;
    if ( v1038 <= 0 )
      j_j_j_j__ZdlPv_9(v575);
  v576 = (char *)v1320 - 12;
  if ( (int *)((char *)v1320 - 12) != &dword_28898C0 )
    v1039 = (unsigned int *)((char *)v1320 - 4);
        v1040 = __ldrex(v1039);
      while ( __strex(v1040 - 1, v1039) );
      v1040 = (*v1039)--;
    if ( v1040 <= 0 )
      j_j_j_j__ZdlPv_9(v576);
  sub_21E94B4(&v1318, "other_with_color");
  sub_21E94B4((void **)&v1317, "is_color");
  v1250 = FilterList::findFilterDefinition((int **)&v1317);
  if ( v1250 )
    v577 = sub_21B417C((int *)v1318, *((_DWORD *)v1318 - 3), -955291385);
    v578 = *(_DWORD *)algn_27FE634;
    v579 = v577 % *(_DWORD *)algn_27FE634;
    v580 = *(_DWORD *)(legacyPredicates + 4 * (v577 % *(_DWORD *)algn_27FE634));
    if ( !v580 )
      goto LABEL_550;
    v581 = *(_DWORD *)v580;
    v582 = v1318;
    v583 = *(_DWORD *)(*(_DWORD *)v580 + 24);
      if ( v583 == v577 )
        v584 = *(_DWORD **)(v581 + 4);
        v585 = *(v582 - 3);
        if ( v585 == *(v584 - 3) && !memcmp(v582, v584, v585) )
      v586 = *(_DWORD *)v581;
      if ( *(_DWORD *)v581 )
        v583 = *(_DWORD *)(v586 + 24);
        v580 = v581;
        v581 = *(_DWORD *)v581;
        if ( *(_DWORD *)(v586 + 24) % v578 == v579 )
    v1180 = v580 == 0;
    if ( v580 )
      v1180 = *(_DWORD *)v580 == 0;
    if ( v1180 )
LABEL_550:
      v1696 = 1;
      v1697 = v1250;
      v1698 = 1;
      v1699 = 0;
      v1700 = 1;
        &v1695,
        (int *)&v1318,
        (int)&v1696);
  v587 = (void *)(v1317 - 12);
  if ( (int *)(v1317 - 12) != &dword_28898C0 )
    v1041 = (unsigned int *)(v1317 - 4);
        v1042 = __ldrex(v1041);
      while ( __strex(v1042 - 1, v1041) );
      v1042 = (*v1041)--;
    if ( v1042 <= 0 )
      j_j_j_j__ZdlPv_9(v587);
  v588 = (char *)v1318 - 12;
  if ( (int *)((char *)v1318 - 12) != &dword_28898C0 )
    v1043 = (unsigned int *)((char *)v1318 - 4);
        v1044 = __ldrex(v1043);
      while ( __strex(v1044 - 1, v1043) );
      v1044 = (*v1043)--;
    if ( v1044 <= 0 )
      j_j_j_j__ZdlPv_9(v588);
  sub_21E94B4(&v1316, "other_without_color");
  sub_21E94B4((void **)&v1315, "is_color");
  v1251 = FilterList::findFilterDefinition((int **)&v1315);
  if ( v1251 )
    v589 = sub_21B417C((int *)v1316, *((_DWORD *)v1316 - 3), -955291385);
    v590 = *(_DWORD *)algn_27FE634;
    v591 = v589 % *(_DWORD *)algn_27FE634;
    v592 = *(_DWORD *)(legacyPredicates + 4 * (v589 % *(_DWORD *)algn_27FE634));
    if ( !v592 )
      goto LABEL_561;
    v593 = *(_DWORD *)v592;
    v594 = v1316;
    v595 = *(_DWORD *)(*(_DWORD *)v592 + 24);
      if ( v595 == v589 )
        v596 = *(_DWORD **)(v593 + 4);
        v597 = *(v594 - 3);
        if ( v597 == *(v596 - 3) && !memcmp(v594, v596, v597) )
      v598 = *(_DWORD *)v593;
      if ( *(_DWORD *)v593 )
        v595 = *(_DWORD *)(v598 + 24);
        v592 = v593;
        v593 = *(_DWORD *)v593;
        if ( *(_DWORD *)(v598 + 24) % v590 == v591 )
    v1181 = v592 == 0;
    if ( v592 )
      v1181 = *(_DWORD *)v592 == 0;
    if ( v1181 )
LABEL_561:
      v1702 = 0;
      v1703 = v1251;
      v1704 = 1;
      v1705 = 1;
      v1706 = 1;
        &v1701,
        (int *)&v1316,
        (int)&v1702);
  v599 = (void *)(v1315 - 12);
  if ( (int *)(v1315 - 12) != &dword_28898C0 )
    v1045 = (unsigned int *)(v1315 - 4);
        v1046 = __ldrex(v1045);
      while ( __strex(v1046 - 1, v1045) );
      v1046 = (*v1045)--;
    if ( v1046 <= 0 )
      j_j_j_j__ZdlPv_9(v599);
  v600 = (char *)v1316 - 12;
  if ( (int *)((char *)v1316 - 12) != &dword_28898C0 )
    v1047 = (unsigned int *)((char *)v1316 - 4);
        v1048 = __ldrex(v1047);
      while ( __strex(v1048 - 1, v1047) );
      v1048 = (*v1047)--;
    if ( v1048 <= 0 )
      j_j_j_j__ZdlPv_9(v600);
  sub_21E94B4(&v1314, "is_world_difficulty");
  sub_21E94B4((void **)&v1313, "is_difficulty");
  v1252 = FilterList::findFilterDefinition((int **)&v1313);
  if ( v1252 )
    v601 = sub_21B417C((int *)v1314, *((_DWORD *)v1314 - 3), -955291385);
    v602 = *(_DWORD *)algn_27FE634;
    v603 = v601 % *(_DWORD *)algn_27FE634;
    v604 = *(_DWORD *)(legacyPredicates + 4 * (v601 % *(_DWORD *)algn_27FE634));
    if ( !v604 )
      goto LABEL_572;
    v605 = *(_DWORD *)v604;
    v606 = v1314;
    v607 = *(_DWORD *)(*(_DWORD *)v604 + 24);
      if ( v607 == v601 )
        v608 = *(_DWORD **)(v605 + 4);
        v609 = *(v606 - 3);
        if ( v609 == *(v608 - 3) && !memcmp(v606, v608, v609) )
      v610 = *(_DWORD *)v605;
      if ( *(_DWORD *)v605 )
        v607 = *(_DWORD *)(v610 + 24);
        v604 = v605;
        v605 = *(_DWORD *)v605;
        if ( *(_DWORD *)(v610 + 24) % v602 == v603 )
    v1182 = v604 == 0;
    if ( v604 )
      v1182 = *(_DWORD *)v604 == 0;
    if ( v1182 )
LABEL_572:
      v1708 = 1;
      v1709 = v1252;
      v1710 = 0;
      v1711 = 0;
      v1712 = 2;
        &v1707,
        (int *)&v1314,
        (int)&v1708);
  v611 = (void *)(v1313 - 12);
  if ( (int *)(v1313 - 12) != &dword_28898C0 )
    v1049 = (unsigned int *)(v1313 - 4);
        v1050 = __ldrex(v1049);
      while ( __strex(v1050 - 1, v1049) );
      v1050 = (*v1049)--;
    if ( v1050 <= 0 )
      j_j_j_j__ZdlPv_9(v611);
  v612 = (char *)v1314 - 12;
  if ( (int *)((char *)v1314 - 12) != &dword_28898C0 )
    v1051 = (unsigned int *)((char *)v1314 - 4);
        v1052 = __ldrex(v1051);
      while ( __strex(v1052 - 1, v1051) );
      v1052 = (*v1051)--;
    if ( v1052 <= 0 )
      j_j_j_j__ZdlPv_9(v612);
  sub_21E94B4(&v1312, "is_not_world_difficulty");
  sub_21E94B4((void **)&v1311, "is_difficulty");
  v1253 = FilterList::findFilterDefinition((int **)&v1311);
  if ( v1253 )
    v613 = sub_21B417C((int *)v1312, *((_DWORD *)v1312 - 3), -955291385);
    v614 = *(_DWORD *)algn_27FE634;
    v615 = v613 % *(_DWORD *)algn_27FE634;
    v616 = *(_DWORD *)(legacyPredicates + 4 * (v613 % *(_DWORD *)algn_27FE634));
    if ( !v616 )
      goto LABEL_583;
    v617 = *(_DWORD *)v616;
    v618 = v1312;
    v619 = *(_DWORD *)(*(_DWORD *)v616 + 24);
      if ( v619 == v613 )
        v620 = *(_DWORD **)(v617 + 4);
        v621 = *(v618 - 3);
        if ( v621 == *(v620 - 3) && !memcmp(v618, v620, v621) )
      v622 = *(_DWORD *)v617;
      if ( *(_DWORD *)v617 )
        v619 = *(_DWORD *)(v622 + 24);
        v616 = v617;
        v617 = *(_DWORD *)v617;
        if ( *(_DWORD *)(v622 + 24) % v614 == v615 )
    v1183 = v616 == 0;
    if ( v616 )
      v1183 = *(_DWORD *)v616 == 0;
    if ( v1183 )
LABEL_583:
      v1714 = 0;
      v1715 = v1253;
      v1716 = 0;
      v1717 = 1;
      v1718 = 2;
        &v1713,
        (int *)&v1312,
        (int)&v1714);
  v623 = (void *)(v1311 - 12);
  if ( (int *)(v1311 - 12) != &dword_28898C0 )
    v1053 = (unsigned int *)(v1311 - 4);
        v1054 = __ldrex(v1053);
      while ( __strex(v1054 - 1, v1053) );
      v1054 = (*v1053)--;
    if ( v1054 <= 0 )
      j_j_j_j__ZdlPv_9(v623);
  v624 = (char *)v1312 - 12;
  if ( (int *)((char *)v1312 - 12) != &dword_28898C0 )
    v1055 = (unsigned int *)((char *)v1312 - 4);
        v1056 = __ldrex(v1055);
      while ( __strex(v1056 - 1, v1055) );
      v1056 = (*v1055)--;
    if ( v1056 <= 0 )
      j_j_j_j__ZdlPv_9(v624);
  sub_21E94B4(&v1310, "is_game_rule_true");
  sub_21E94B4((void **)&v1309, "is_game_rule");
  v1254 = FilterList::findFilterDefinition((int **)&v1309);
  if ( v1254 )
    v625 = sub_21B417C((int *)v1310, *((_DWORD *)v1310 - 3), -955291385);
    v626 = *(_DWORD *)algn_27FE634;
    v627 = v625 % *(_DWORD *)algn_27FE634;
    v628 = *(_DWORD *)(legacyPredicates + 4 * (v625 % *(_DWORD *)algn_27FE634));
    if ( !v628 )
      goto LABEL_594;
    v629 = *(_DWORD *)v628;
    v630 = v1310;
    v631 = *(_DWORD *)(*(_DWORD *)v628 + 24);
      if ( v631 == v625 )
        v632 = *(_DWORD **)(v629 + 4);
        v633 = *(v630 - 3);
        if ( v633 == *(v632 - 3) && !memcmp(v630, v632, v633) )
      v634 = *(_DWORD *)v629;
      if ( *(_DWORD *)v629 )
        v631 = *(_DWORD *)(v634 + 24);
        v628 = v629;
        v629 = *(_DWORD *)v629;
        if ( *(_DWORD *)(v634 + 24) % v626 == v627 )
    v1184 = v628 == 0;
    if ( v628 )
      v1184 = *(_DWORD *)v628 == 0;
    if ( v1184 )
LABEL_594:
      v1720 = 0;
      v1721 = v1254;
      v1722 = 0;
      v1723 = 0;
      v1724 = 0;
        &v1719,
        (int *)&v1310,
        (int)&v1720);
  v635 = (void *)(v1309 - 12);
  if ( (int *)(v1309 - 12) != &dword_28898C0 )
    v1057 = (unsigned int *)(v1309 - 4);
        v1058 = __ldrex(v1057);
      while ( __strex(v1058 - 1, v1057) );
      v1058 = (*v1057)--;
    if ( v1058 <= 0 )
      j_j_j_j__ZdlPv_9(v635);
  v636 = (char *)v1310 - 12;
  if ( (int *)((char *)v1310 - 12) != &dword_28898C0 )
    v1059 = (unsigned int *)((char *)v1310 - 4);
        v1060 = __ldrex(v1059);
      while ( __strex(v1060 - 1, v1059) );
      v1060 = (*v1059)--;
    if ( v1060 <= 0 )
      j_j_j_j__ZdlPv_9(v636);
  sub_21E94B4(&v1308, "is_game_rule_false");
  sub_21E94B4((void **)&v1307, "is_game_rule");
  v1255 = FilterList::findFilterDefinition((int **)&v1307);
  if ( v1255 )
    v637 = sub_21B417C((int *)v1308, *((_DWORD *)v1308 - 3), -955291385);
    v638 = *(_DWORD *)algn_27FE634;
    v639 = v637 % *(_DWORD *)algn_27FE634;
    v640 = *(_DWORD *)(legacyPredicates + 4 * (v637 % *(_DWORD *)algn_27FE634));
    if ( !v640 )
      goto LABEL_605;
    v641 = *(_DWORD *)v640;
    v642 = v1308;
    v643 = *(_DWORD *)(*(_DWORD *)v640 + 24);
      if ( v643 == v637 )
        v644 = *(_DWORD **)(v641 + 4);
        v645 = *(v642 - 3);
        if ( v645 == *(v644 - 3) && !memcmp(v642, v644, v645) )
      v646 = *(_DWORD *)v641;
      if ( *(_DWORD *)v641 )
        v643 = *(_DWORD *)(v646 + 24);
        v640 = v641;
        v641 = *(_DWORD *)v641;
        if ( *(_DWORD *)(v646 + 24) % v638 == v639 )
    v1185 = v640 == 0;
    if ( v640 )
      v1185 = *(_DWORD *)v640 == 0;
    if ( v1185 )
LABEL_605:
      v1726 = 0;
      v1727 = v1255;
      v1728 = 0;
      v1729 = 1;
      v1730 = 0;
        &v1725,
        (int *)&v1308,
        (int)&v1726);
  v647 = (void *)(v1307 - 12);
  if ( (int *)(v1307 - 12) != &dword_28898C0 )
    v1061 = (unsigned int *)(v1307 - 4);
        v1062 = __ldrex(v1061);
      while ( __strex(v1062 - 1, v1061) );
      v1062 = (*v1061)--;
    if ( v1062 <= 0 )
      j_j_j_j__ZdlPv_9(v647);
  v648 = (char *)v1308 - 12;
  if ( (int *)((char *)v1308 - 12) != &dword_28898C0 )
    v1063 = (unsigned int *)((char *)v1308 - 4);
        v1064 = __ldrex(v1063);
      while ( __strex(v1064 - 1, v1063) );
      v1064 = (*v1063)--;
    if ( v1064 <= 0 )
      j_j_j_j__ZdlPv_9(v648);
  sub_21E94B4(&v1306, "with_damage_cause");
  sub_21E94B4((void **)&v1305, "has_damage");
  v1256 = FilterList::findFilterDefinition((int **)&v1305);
  if ( v1256 )
    v649 = sub_21B417C((int *)v1306, *((_DWORD *)v1306 - 3), -955291385);
    v650 = *(_DWORD *)algn_27FE634;
    v651 = v649 % *(_DWORD *)algn_27FE634;
    v652 = *(_DWORD *)(legacyPredicates + 4 * (v649 % *(_DWORD *)algn_27FE634));
    if ( !v652 )
      goto LABEL_616;
    v653 = *(_DWORD *)v652;
    v654 = v1306;
    v655 = *(_DWORD *)(*(_DWORD *)v652 + 24);
      if ( v655 == v649 )
        v656 = *(_DWORD **)(v653 + 4);
        v657 = *(v654 - 3);
        if ( v657 == *(v656 - 3) && !memcmp(v654, v656, v657) )
      v658 = *(_DWORD *)v653;
      if ( *(_DWORD *)v653 )
        v655 = *(_DWORD *)(v658 + 24);
        v652 = v653;
        v653 = *(_DWORD *)v653;
        if ( *(_DWORD *)(v658 + 24) % v650 == v651 )
    v1186 = v652 == 0;
    if ( v652 )
      v1186 = *(_DWORD *)v652 == 0;
    if ( v1186 )
LABEL_616:
      v1732 = 0;
      v1733 = v1256;
      v1734 = 0;
      v1735 = 0;
      v1736 = 2;
        &v1731,
        (int *)&v1306,
        (int)&v1732);
  v659 = (void *)(v1305 - 12);
  if ( (int *)(v1305 - 12) != &dword_28898C0 )
    v1065 = (unsigned int *)(v1305 - 4);
        v1066 = __ldrex(v1065);
      while ( __strex(v1066 - 1, v1065) );
      v1066 = (*v1065)--;
    if ( v1066 <= 0 )
      j_j_j_j__ZdlPv_9(v659);
  v660 = (char *)v1306 - 12;
  if ( (int *)((char *)v1306 - 12) != &dword_28898C0 )
    v1067 = (unsigned int *)((char *)v1306 - 4);
        v1068 = __ldrex(v1067);
      while ( __strex(v1068 - 1, v1067) );
      v1068 = (*v1067)--;
    if ( v1068 <= 0 )
      j_j_j_j__ZdlPv_9(v660);
  sub_21E94B4(&v1304, "with_damage_fatal");
  sub_21E94B4((void **)&v1303, "has_damage");
  v1257 = FilterList::findFilterDefinition((int **)&v1303);
  if ( v1257 )
    v661 = sub_21B417C((int *)v1304, *((_DWORD *)v1304 - 3), -955291385);
    v662 = *(_DWORD *)algn_27FE634;
    v663 = v661 % *(_DWORD *)algn_27FE634;
    v664 = *(_DWORD *)(legacyPredicates + 4 * (v661 % *(_DWORD *)algn_27FE634));
    if ( !v664 )
      goto LABEL_627;
    v665 = *(_DWORD *)v664;
    v666 = v1304;
    v667 = *(_DWORD *)(*(_DWORD *)v664 + 24);
      if ( v667 == v661 )
        v668 = *(_DWORD **)(v665 + 4);
        v669 = *(v666 - 3);
        if ( v669 == *(v668 - 3) && !memcmp(v666, v668, v669) )
      v670 = *(_DWORD *)v665;
      if ( *(_DWORD *)v665 )
        v667 = *(_DWORD *)(v670 + 24);
        v664 = v665;
        v665 = *(_DWORD *)v665;
        if ( *(_DWORD *)(v670 + 24) % v662 == v663 )
    v1187 = v664 == 0;
    if ( v664 )
      v1187 = *(_DWORD *)v664 == 0;
    if ( v1187 )
LABEL_627:
      v1738 = 0;
      v1739 = v1257;
      v1740 = 0;
      v1741 = 0;
      v1742 = 0;
        &v1737,
        (int *)&v1304,
        (int)&v1738);
  v671 = (void *)(v1303 - 12);
  if ( (int *)(v1303 - 12) != &dword_28898C0 )
    v1069 = (unsigned int *)(v1303 - 4);
        v1070 = __ldrex(v1069);
      while ( __strex(v1070 - 1, v1069) );
      v1070 = (*v1069)--;
    if ( v1070 <= 0 )
      j_j_j_j__ZdlPv_9(v671);
  v672 = (char *)v1304 - 12;
  if ( (int *)((char *)v1304 - 12) != &dword_28898C0 )
    v1071 = (unsigned int *)((char *)v1304 - 4);
        v1072 = __ldrex(v1071);
      while ( __strex(v1072 - 1, v1071) );
      v1072 = (*v1071)--;
    if ( v1072 <= 0 )
      j_j_j_j__ZdlPv_9(v672);
  sub_21E94B4(&v1302, "with_environment_any");
  sub_21E94B4((void **)&v1301, "is_biome");
  v1258 = FilterList::findFilterDefinition((int **)&v1301);
  if ( v1258 )
    v673 = sub_21B417C((int *)v1302, *((_DWORD *)v1302 - 3), -955291385);
    v674 = *(_DWORD *)algn_27FE634;
    v675 = v673 % *(_DWORD *)algn_27FE634;
    v676 = *(_DWORD *)(legacyPredicates + 4 * (v673 % *(_DWORD *)algn_27FE634));
    if ( !v676 )
      goto LABEL_638;
    v677 = *(_DWORD *)v676;
    v678 = v1302;
    v679 = *(_DWORD *)(*(_DWORD *)v676 + 24);
      if ( v679 == v673 )
        v680 = *(_DWORD **)(v677 + 4);
        v681 = *(v678 - 3);
        if ( v681 == *(v680 - 3) && !memcmp(v678, v680, v681) )
      v682 = *(_DWORD *)v677;
      if ( *(_DWORD *)v677 )
        v679 = *(_DWORD *)(v682 + 24);
        v676 = v677;
        v677 = *(_DWORD *)v677;
        if ( *(_DWORD *)(v682 + 24) % v674 == v675 )
    v1188 = v676 == 0;
    if ( v676 )
      v1188 = *(_DWORD *)v676 == 0;
    if ( v1188 )
LABEL_638:
      v1744 = 1;
      v1745 = v1258;
      v1746 = 0;
      v1747 = 0;
      v1748 = 3;
        &v1743,
        (int *)&v1302,
        (int)&v1744);
  v683 = (void *)(v1301 - 12);
  if ( (int *)(v1301 - 12) != &dword_28898C0 )
    v1073 = (unsigned int *)(v1301 - 4);
        v1074 = __ldrex(v1073);
      while ( __strex(v1074 - 1, v1073) );
      v1074 = (*v1073)--;
    if ( v1074 <= 0 )
      j_j_j_j__ZdlPv_9(v683);
  v684 = (char *)v1302 - 12;
  if ( (int *)((char *)v1302 - 12) != &dword_28898C0 )
    v1075 = (unsigned int *)((char *)v1302 - 4);
        v1076 = __ldrex(v1075);
      while ( __strex(v1076 - 1, v1075) );
      v1076 = (*v1075)--;
    if ( v1076 <= 0 )
      j_j_j_j__ZdlPv_9(v684);
  sub_21E94B4(&v1300, "with_environment_every");
  sub_21E94B4((void **)&v1299, "is_biome");
  v1259 = FilterList::findFilterDefinition((int **)&v1299);
  if ( v1259 )
    v685 = sub_21B417C((int *)v1300, *((_DWORD *)v1300 - 3), -955291385);
    v686 = *(_DWORD *)algn_27FE634;
    v687 = v685 % *(_DWORD *)algn_27FE634;
    v688 = *(_DWORD *)(legacyPredicates + 4 * (v685 % *(_DWORD *)algn_27FE634));
    if ( !v688 )
      goto LABEL_649;
    v689 = *(_DWORD *)v688;
    v690 = v1300;
    v691 = *(_DWORD *)(*(_DWORD *)v688 + 24);
      if ( v691 == v685 )
        v692 = *(_DWORD **)(v689 + 4);
        v693 = *(v690 - 3);
        if ( v693 == *(v692 - 3) && !memcmp(v690, v692, v693) )
      v694 = *(_DWORD *)v689;
      if ( *(_DWORD *)v689 )
        v691 = *(_DWORD *)(v694 + 24);
        v688 = v689;
        v689 = *(_DWORD *)v689;
        if ( *(_DWORD *)(v694 + 24) % v686 == v687 )
    v1189 = v688 == 0;
    if ( v688 )
      v1189 = *(_DWORD *)v688 == 0;
    if ( v1189 )
LABEL_649:
      v1750 = 0;
      v1751 = v1259;
      v1752 = 0;
      v1753 = 0;
      v1754 = 3;
        &v1749,
        (int *)&v1300,
        (int)&v1750);
  v695 = (void *)(v1299 - 12);
  if ( (int *)(v1299 - 12) != &dword_28898C0 )
    v1077 = (unsigned int *)(v1299 - 4);
        v1078 = __ldrex(v1077);
      while ( __strex(v1078 - 1, v1077) );
      v1078 = (*v1077)--;
    if ( v1078 <= 0 )
      j_j_j_j__ZdlPv_9(v695);
  v696 = (char *)v1300 - 12;
  if ( (int *)((char *)v1300 - 12) != &dword_28898C0 )
    v1079 = (unsigned int *)((char *)v1300 - 4);
        v1080 = __ldrex(v1079);
      while ( __strex(v1080 - 1, v1079) );
      v1080 = (*v1079)--;
    if ( v1080 <= 0 )
      j_j_j_j__ZdlPv_9(v696);
  sub_21E94B4(&v1298, "without_environment_any");
  sub_21E94B4((void **)&v1297, "is_biome");
  v1260 = FilterList::findFilterDefinition((int **)&v1297);
  if ( v1260 )
    v697 = sub_21B417C((int *)v1298, *((_DWORD *)v1298 - 3), -955291385);
    v698 = *(_DWORD *)algn_27FE634;
    v699 = v697 % *(_DWORD *)algn_27FE634;
    v700 = *(_DWORD *)(legacyPredicates + 4 * (v697 % *(_DWORD *)algn_27FE634));
    if ( !v700 )
      goto LABEL_660;
    v701 = *(_DWORD *)v700;
    v702 = v1298;
    v703 = *(_DWORD *)(*(_DWORD *)v700 + 24);
      if ( v703 == v697 )
        v704 = *(_DWORD **)(v701 + 4);
        v705 = *(v702 - 3);
        if ( v705 == *(v704 - 3) && !memcmp(v702, v704, v705) )
      v706 = *(_DWORD *)v701;
      if ( *(_DWORD *)v701 )
        v703 = *(_DWORD *)(v706 + 24);
        v700 = v701;
        v701 = *(_DWORD *)v701;
        if ( *(_DWORD *)(v706 + 24) % v698 == v699 )
    v1190 = v700 == 0;
    if ( v700 )
      v1190 = *(_DWORD *)v700 == 0;
    if ( v1190 )
LABEL_660:
      v1756 = 1;
      v1757 = v1260;
      v1758 = 0;
      v1759 = 0;
      v1760 = 3;
        &v1755,
        (int *)&v1298,
        (int)&v1756);
  v707 = (void *)(v1297 - 12);
  if ( (int *)(v1297 - 12) != &dword_28898C0 )
    v1081 = (unsigned int *)(v1297 - 4);
        v1082 = __ldrex(v1081);
      while ( __strex(v1082 - 1, v1081) );
      v1082 = (*v1081)--;
    if ( v1082 <= 0 )
      j_j_j_j__ZdlPv_9(v707);
  v708 = (char *)v1298 - 12;
  if ( (int *)((char *)v1298 - 12) != &dword_28898C0 )
    v1083 = (unsigned int *)((char *)v1298 - 4);
        v1084 = __ldrex(v1083);
      while ( __strex(v1084 - 1, v1083) );
      v1084 = (*v1083)--;
    if ( v1084 <= 0 )
      j_j_j_j__ZdlPv_9(v708);
  sub_21E94B4(&v1296, "without_environment_every");
  sub_21E94B4((void **)&v1295, "is_biome");
  v1261 = FilterList::findFilterDefinition((int **)&v1295);
  if ( v1261 )
    v709 = sub_21B417C((int *)v1296, *((_DWORD *)v1296 - 3), -955291385);
    v710 = *(_DWORD *)algn_27FE634;
    v711 = v709 % *(_DWORD *)algn_27FE634;
    v712 = *(_DWORD *)(legacyPredicates + 4 * (v709 % *(_DWORD *)algn_27FE634));
    if ( !v712 )
      goto LABEL_671;
    v713 = *(_DWORD *)v712;
    v714 = v1296;
    v715 = *(_DWORD *)(*(_DWORD *)v712 + 24);
      if ( v715 == v709 )
        v716 = *(_DWORD **)(v713 + 4);
        v717 = *(v714 - 3);
        if ( v717 == *(v716 - 3) && !memcmp(v714, v716, v717) )
      v718 = *(_DWORD *)v713;
      if ( *(_DWORD *)v713 )
        v715 = *(_DWORD *)(v718 + 24);
        v712 = v713;
        v713 = *(_DWORD *)v713;
        if ( *(_DWORD *)(v718 + 24) % v710 == v711 )
    v1191 = v712 == 0;
    if ( v712 )
      v1191 = *(_DWORD *)v712 == 0;
    if ( v1191 )
LABEL_671:
      v1762 = 0;
      v1763 = v1261;
      v1764 = 0;
      v1765 = 0;
      v1766 = 3;
        &v1761,
        (int *)&v1296,
        (int)&v1762);
  v719 = (void *)(v1295 - 12);
  if ( (int *)(v1295 - 12) != &dword_28898C0 )
    v1085 = (unsigned int *)(v1295 - 4);
        v1086 = __ldrex(v1085);
      while ( __strex(v1086 - 1, v1085) );
      v1086 = (*v1085)--;
    if ( v1086 <= 0 )
      j_j_j_j__ZdlPv_9(v719);
  v720 = (char *)v1296 - 12;
  if ( (int *)((char *)v1296 - 12) != &dword_28898C0 )
    v1087 = (unsigned int *)((char *)v1296 - 4);
        v1088 = __ldrex(v1087);
      while ( __strex(v1088 - 1, v1087) );
      v1088 = (*v1087)--;
    if ( v1088 <= 0 )
      j_j_j_j__ZdlPv_9(v720);
  sub_21E94B4(&v1294, "underground");
  sub_21E94B4((void **)&v1293, "is_underground");
  v1262 = FilterList::findFilterDefinition((int **)&v1293);
  if ( v1262 )
    v721 = sub_21B417C((int *)v1294, *((_DWORD *)v1294 - 3), -955291385);
    v722 = unk_27FE650;
    v723 = v721 % unk_27FE650;
    v724 = *(_DWORD *)(environmentSubfilters + 4 * (v721 % unk_27FE650));
    if ( !v724 )
      goto LABEL_682;
    v725 = *(_DWORD *)v724;
    v726 = v1294;
    v727 = *(_DWORD *)(*(_DWORD *)v724 + 24);
      if ( v727 == v721 )
        v728 = *(_DWORD **)(v725 + 4);
        v729 = *(v726 - 3);
        if ( v729 == *(v728 - 3) && !memcmp(v726, v728, v729) )
      v730 = *(_DWORD *)v725;
      if ( *(_DWORD *)v725 )
        v727 = *(_DWORD *)(v730 + 24);
        v724 = v725;
        v725 = *(_DWORD *)v725;
        if ( *(_DWORD *)(v730 + 24) % v722 == v723 )
    v1192 = v724 == 0;
    if ( v724 )
      v1192 = *(_DWORD *)v724 == 0;
    if ( v1192 )
LABEL_682:
      v1768 = 0;
      v1769 = v1262;
      v1770 = 0;
      v1771 = 0;
      v1772 = 0;
        &v1767,
        &environmentSubfilters,
        (int *)&v1294,
        (int)&v1768);
  v731 = (void *)(v1293 - 12);
  if ( (int *)(v1293 - 12) != &dword_28898C0 )
    v1089 = (unsigned int *)(v1293 - 4);
        v1090 = __ldrex(v1089);
      while ( __strex(v1090 - 1, v1089) );
      v1090 = (*v1089)--;
    if ( v1090 <= 0 )
      j_j_j_j__ZdlPv_9(v731);
  v732 = (char *)v1294 - 12;
  if ( (int *)((char *)v1294 - 12) != &dword_28898C0 )
    v1091 = (unsigned int *)((char *)v1294 - 4);
        v1092 = __ldrex(v1091);
      while ( __strex(v1092 - 1, v1091) );
      v1092 = (*v1091)--;
    if ( v1092 <= 0 )
      j_j_j_j__ZdlPv_9(v732);
  sub_21E94B4(&v1292, "surface");
  sub_21E94B4((void **)&v1291, "is_underground");
  v1263 = FilterList::findFilterDefinition((int **)&v1291);
  if ( v1263 )
    v733 = sub_21B417C((int *)v1292, *((_DWORD *)v1292 - 3), -955291385);
    v734 = unk_27FE650;
    v735 = v733 % unk_27FE650;
    v736 = *(_DWORD *)(environmentSubfilters + 4 * (v733 % unk_27FE650));
    if ( !v736 )
      goto LABEL_693;
    v737 = *(_DWORD *)v736;
    v738 = v1292;
    v739 = *(_DWORD *)(*(_DWORD *)v736 + 24);
      if ( v739 == v733 )
        v740 = *(_DWORD **)(v737 + 4);
        v741 = *(v738 - 3);
        if ( v741 == *(v740 - 3) && !memcmp(v738, v740, v741) )
      v742 = *(_DWORD *)v737;
      if ( *(_DWORD *)v737 )
        v739 = *(_DWORD *)(v742 + 24);
        v736 = v737;
        v737 = *(_DWORD *)v737;
        if ( *(_DWORD *)(v742 + 24) % v734 == v735 )
    v1193 = v736 == 0;
    if ( v736 )
      v1193 = *(_DWORD *)v736 == 0;
    if ( v1193 )
LABEL_693:
      v1774 = 0;
      v1775 = v1263;
      v1776 = 0;
      v1777 = 1;
      v1778 = 0;
        &v1773,
        (int *)&v1292,
        (int)&v1774);
  v743 = (void *)(v1291 - 12);
  if ( (int *)(v1291 - 12) != &dword_28898C0 )
    v1093 = (unsigned int *)(v1291 - 4);
        v1094 = __ldrex(v1093);
      while ( __strex(v1094 - 1, v1093) );
      v1094 = (*v1093)--;
    if ( v1094 <= 0 )
      j_j_j_j__ZdlPv_9(v743);
  v744 = (char *)v1292 - 12;
  if ( (int *)((char *)v1292 - 12) != &dword_28898C0 )
    v1095 = (unsigned int *)((char *)v1292 - 4);
        v1096 = __ldrex(v1095);
      while ( __strex(v1096 - 1, v1095) );
      v1096 = (*v1095)--;
    if ( v1096 <= 0 )
      j_j_j_j__ZdlPv_9(v744);
  sub_21E94B4(&v1290, "day");
  sub_21E94B4((void **)&v1289, "is_daytime");
  v1264 = FilterList::findFilterDefinition((int **)&v1289);
  if ( v1264 )
    v745 = sub_21B417C((int *)v1290, *((_DWORD *)v1290 - 3), -955291385);
    v746 = unk_27FE650;
    v747 = v745 % unk_27FE650;
    v748 = *(_DWORD *)(environmentSubfilters + 4 * (v745 % unk_27FE650));
    if ( !v748 )
      goto LABEL_704;
    v749 = *(_DWORD *)v748;
    v750 = v1290;
    v751 = *(_DWORD *)(*(_DWORD *)v748 + 24);
      if ( v751 == v745 )
        v752 = *(_DWORD **)(v749 + 4);
        v753 = *(v750 - 3);
        if ( v753 == *(v752 - 3) && !memcmp(v750, v752, v753) )
      v754 = *(_DWORD *)v749;
      if ( *(_DWORD *)v749 )
        v751 = *(_DWORD *)(v754 + 24);
        v748 = v749;
        v749 = *(_DWORD *)v749;
        if ( *(_DWORD *)(v754 + 24) % v746 == v747 )
    v1194 = v748 == 0;
    if ( v748 )
      v1194 = *(_DWORD *)v748 == 0;
    if ( v1194 )
LABEL_704:
      v1780 = 0;
      v1781 = v1264;
      v1782 = 0;
      v1783 = 0;
      v1784 = 0;
        &v1779,
        (int *)&v1290,
        (int)&v1780);
  v755 = (void *)(v1289 - 12);
  if ( (int *)(v1289 - 12) != &dword_28898C0 )
    v1097 = (unsigned int *)(v1289 - 4);
        v1098 = __ldrex(v1097);
      while ( __strex(v1098 - 1, v1097) );
      v1098 = (*v1097)--;
    if ( v1098 <= 0 )
      j_j_j_j__ZdlPv_9(v755);
  v756 = (char *)v1290 - 12;
  if ( (int *)((char *)v1290 - 12) != &dword_28898C0 )
    v1099 = (unsigned int *)((char *)v1290 - 4);
        v1100 = __ldrex(v1099);
      while ( __strex(v1100 - 1, v1099) );
      v1100 = (*v1099)--;
    if ( v1100 <= 0 )
      j_j_j_j__ZdlPv_9(v756);
  sub_21E94B4(&v1288, "night");
  sub_21E94B4((void **)&v1287, "is_daytime");
  v1265 = FilterList::findFilterDefinition((int **)&v1287);
  if ( v1265 )
    v757 = sub_21B417C((int *)v1288, *((_DWORD *)v1288 - 3), -955291385);
    v758 = unk_27FE650;
    v759 = v757 % unk_27FE650;
    v760 = *(_DWORD *)(environmentSubfilters + 4 * (v757 % unk_27FE650));
    if ( !v760 )
      goto LABEL_715;
    v761 = *(_DWORD *)v760;
    v762 = v1288;
    v763 = *(_DWORD *)(*(_DWORD *)v760 + 24);
      if ( v763 == v757 )
        v764 = *(_DWORD **)(v761 + 4);
        v765 = *(v762 - 3);
        if ( v765 == *(v764 - 3) && !memcmp(v762, v764, v765) )
      v766 = *(_DWORD *)v761;
      if ( *(_DWORD *)v761 )
        v763 = *(_DWORD *)(v766 + 24);
        v760 = v761;
        v761 = *(_DWORD *)v761;
        if ( *(_DWORD *)(v766 + 24) % v758 == v759 )
    v1195 = v760 == 0;
    if ( v760 )
      v1195 = *(_DWORD *)v760 == 0;
    if ( v1195 )
LABEL_715:
      v1786 = 0;
      v1787 = v1265;
      v1788 = 0;
      v1789 = 1;
      v1790 = 0;
        &v1785,
        (int *)&v1288,
        (int)&v1786);
  v767 = (void *)(v1287 - 12);
  if ( (int *)(v1287 - 12) != &dword_28898C0 )
    v1101 = (unsigned int *)(v1287 - 4);
        v1102 = __ldrex(v1101);
      while ( __strex(v1102 - 1, v1101) );
      v1102 = (*v1101)--;
    if ( v1102 <= 0 )
      j_j_j_j__ZdlPv_9(v767);
  v768 = (char *)v1288 - 12;
  if ( (int *)((char *)v1288 - 12) != &dword_28898C0 )
    v1103 = (unsigned int *)((char *)v1288 - 4);
        v1104 = __ldrex(v1103);
      while ( __strex(v1104 - 1, v1103) );
      v1104 = (*v1103)--;
    if ( v1104 <= 0 )
      j_j_j_j__ZdlPv_9(v768);
  sub_21E94B4(&v1286, "brightness_less");
  sub_21E94B4((void **)&v1285, "is_brightness");
  v1266 = FilterList::findFilterDefinition((int **)&v1285);
  if ( v1266 )
    v769 = sub_21B417C((int *)v1286, *((_DWORD *)v1286 - 3), -955291385);
    v770 = unk_27FE650;
    v771 = v769 % unk_27FE650;
    v772 = *(_DWORD *)(environmentSubfilters + 4 * (v769 % unk_27FE650));
    if ( !v772 )
      goto LABEL_726;
    v773 = *(_DWORD *)v772;
    v774 = v1286;
    v775 = *(_DWORD *)(*(_DWORD *)v772 + 24);
      if ( v775 == v769 )
        v776 = *(_DWORD **)(v773 + 4);
        v777 = *(v774 - 3);
        if ( v777 == *(v776 - 3) && !memcmp(v774, v776, v777) )
      v778 = *(_DWORD *)v773;
      if ( *(_DWORD *)v773 )
        v775 = *(_DWORD *)(v778 + 24);
        v772 = v773;
        v773 = *(_DWORD *)v773;
        if ( *(_DWORD *)(v778 + 24) % v770 == v771 )
    v1196 = v772 == 0;
    if ( v772 )
      v1196 = *(_DWORD *)v772 == 0;
    if ( v1196 )
LABEL_726:
      v1792 = 0;
      v1793 = v1266;
      v1794 = 0;
      v1795 = 3;
      v1796 = 1;
        &v1791,
        (int *)&v1286,
        (int)&v1792);
  v779 = (void *)(v1285 - 12);
  if ( (int *)(v1285 - 12) != &dword_28898C0 )
    v1105 = (unsigned int *)(v1285 - 4);
        v1106 = __ldrex(v1105);
      while ( __strex(v1106 - 1, v1105) );
      v1106 = (*v1105)--;
    if ( v1106 <= 0 )
      j_j_j_j__ZdlPv_9(v779);
  v780 = (char *)v1286 - 12;
  if ( (int *)((char *)v1286 - 12) != &dword_28898C0 )
    v1107 = (unsigned int *)((char *)v1286 - 4);
        v1108 = __ldrex(v1107);
      while ( __strex(v1108 - 1, v1107) );
      v1108 = (*v1107)--;
    if ( v1108 <= 0 )
      j_j_j_j__ZdlPv_9(v780);
  sub_21E94B4(&v1284, "brightness_greater");
  sub_21E94B4((void **)&v1283, "is_brightness");
  v1267 = FilterList::findFilterDefinition((int **)&v1283);
  if ( v1267 )
    v781 = sub_21B417C((int *)v1284, *((_DWORD *)v1284 - 3), -955291385);
    v782 = unk_27FE650;
    v783 = v781 % unk_27FE650;
    v784 = *(_DWORD *)(environmentSubfilters + 4 * (v781 % unk_27FE650));
    if ( !v784 )
      goto LABEL_737;
    v785 = *(_DWORD *)v784;
    v786 = v1284;
    v787 = *(_DWORD *)(*(_DWORD *)v784 + 24);
      if ( v787 == v781 )
        v788 = *(_DWORD **)(v785 + 4);
        v789 = *(v786 - 3);
        if ( v789 == *(v788 - 3) && !memcmp(v786, v788, v789) )
      v790 = *(_DWORD *)v785;
      if ( *(_DWORD *)v785 )
        v787 = *(_DWORD *)(v790 + 24);
        v784 = v785;
        v785 = *(_DWORD *)v785;
        if ( *(_DWORD *)(v790 + 24) % v782 == v783 )
    v1197 = v784 == 0;
    if ( v784 )
      v1197 = *(_DWORD *)v784 == 0;
    if ( v1197 )
LABEL_737:
      v1798 = 0;
      v1799 = v1267;
      v1800 = 0;
      v1801 = 2;
      v1802 = 1;
        &v1797,
        (int *)&v1284,
        (int)&v1798);
  v791 = (void *)(v1283 - 12);
  if ( (int *)(v1283 - 12) != &dword_28898C0 )
    v1109 = (unsigned int *)(v1283 - 4);
        v1110 = __ldrex(v1109);
      while ( __strex(v1110 - 1, v1109) );
      v1110 = (*v1109)--;
    if ( v1110 <= 0 )
      j_j_j_j__ZdlPv_9(v791);
  v792 = (char *)v1284 - 12;
  if ( (int *)((char *)v1284 - 12) != &dword_28898C0 )
    v1111 = (unsigned int *)((char *)v1284 - 4);
        v1112 = __ldrex(v1111);
      while ( __strex(v1112 - 1, v1111) );
      v1112 = (*v1111)--;
    if ( v1112 <= 0 )
      j_j_j_j__ZdlPv_9(v792);
  sub_21E94B4(&v1282, "altitude_less");
  sub_21E94B4((void **)&v1281, "is_altitude");
  v1268 = FilterList::findFilterDefinition((int **)&v1281);
  if ( v1268 )
    v793 = sub_21B417C((int *)v1282, *((_DWORD *)v1282 - 3), -955291385);
    v794 = unk_27FE650;
    v795 = v793 % unk_27FE650;
    v796 = *(_DWORD *)(environmentSubfilters + 4 * (v793 % unk_27FE650));
    if ( !v796 )
      goto LABEL_748;
    v797 = *(_DWORD *)v796;
    v798 = v1282;
    v799 = *(_DWORD *)(*(_DWORD *)v796 + 24);
      if ( v799 == v793 )
        v800 = *(_DWORD **)(v797 + 4);
        v801 = *(v798 - 3);
        if ( v801 == *(v800 - 3) && !memcmp(v798, v800, v801) )
      v802 = *(_DWORD *)v797;
      if ( *(_DWORD *)v797 )
        v799 = *(_DWORD *)(v802 + 24);
        v796 = v797;
        v797 = *(_DWORD *)v797;
        if ( *(_DWORD *)(v802 + 24) % v794 == v795 )
    v1198 = v796 == 0;
    if ( v796 )
      v1198 = *(_DWORD *)v796 == 0;
    if ( v1198 )
LABEL_748:
      v1804 = 0;
      v1805 = v1268;
      v1806 = 0;
      v1807 = 3;
      v1808 = 1;
        &v1803,
        (int *)&v1282,
        (int)&v1804);
  v803 = (void *)(v1281 - 12);
  if ( (int *)(v1281 - 12) != &dword_28898C0 )
    v1113 = (unsigned int *)(v1281 - 4);
        v1114 = __ldrex(v1113);
      while ( __strex(v1114 - 1, v1113) );
      v1114 = (*v1113)--;
    if ( v1114 <= 0 )
      j_j_j_j__ZdlPv_9(v803);
  v804 = (char *)v1282 - 12;
  if ( (int *)((char *)v1282 - 12) != &dword_28898C0 )
    v1115 = (unsigned int *)((char *)v1282 - 4);
        v1116 = __ldrex(v1115);
      while ( __strex(v1116 - 1, v1115) );
      v1116 = (*v1115)--;
    if ( v1116 <= 0 )
      j_j_j_j__ZdlPv_9(v804);
  sub_21E94B4(&v1280, "altitude_greater");
  sub_21E94B4((void **)&v1279, "is_altitude");
  v1269 = FilterList::findFilterDefinition((int **)&v1279);
  if ( v1269 )
    v805 = sub_21B417C((int *)v1280, *((_DWORD *)v1280 - 3), -955291385);
    v806 = unk_27FE650;
    v807 = v805 % unk_27FE650;
    v808 = *(_DWORD *)(environmentSubfilters + 4 * (v805 % unk_27FE650));
    if ( !v808 )
      goto LABEL_759;
    v809 = *(_DWORD *)v808;
    v810 = v1280;
    v811 = *(_DWORD *)(*(_DWORD *)v808 + 24);
      if ( v811 == v805 )
        v812 = *(_DWORD **)(v809 + 4);
        v813 = *(v810 - 3);
        if ( v813 == *(v812 - 3) && !memcmp(v810, v812, v813) )
      v814 = *(_DWORD *)v809;
      if ( *(_DWORD *)v809 )
        v811 = *(_DWORD *)(v814 + 24);
        v808 = v809;
        v809 = *(_DWORD *)v809;
        if ( *(_DWORD *)(v814 + 24) % v806 == v807 )
    v1199 = v808 == 0;
    if ( v808 )
      v1199 = *(_DWORD *)v808 == 0;
    if ( v1199 )
LABEL_759:
      v1810 = 0;
      v1811 = v1269;
      v1812 = 0;
      v1813 = 2;
      v1814 = 1;
        &v1809,
        (int *)&v1280,
        (int)&v1810);
  v815 = (void *)(v1279 - 12);
  if ( (int *)(v1279 - 12) != &dword_28898C0 )
    v1117 = (unsigned int *)(v1279 - 4);
        v1118 = __ldrex(v1117);
      while ( __strex(v1118 - 1, v1117) );
      v1118 = (*v1117)--;
    if ( v1118 <= 0 )
      j_j_j_j__ZdlPv_9(v815);
  v816 = (char *)v1280 - 12;
  if ( (int *)((char *)v1280 - 12) != &dword_28898C0 )
    v1119 = (unsigned int *)((char *)v1280 - 4);
        v1120 = __ldrex(v1119);
      while ( __strex(v1120 - 1, v1119) );
      v1120 = (*v1119)--;
    if ( v1120 <= 0 )
      j_j_j_j__ZdlPv_9(v816);
  sub_21E94B4(&v1278, "biome:snow_covered");
  sub_21E94B4((void **)&v1277, "is_snow_covered");
  v1270 = FilterList::findFilterDefinition((int **)&v1277);
  if ( v1270 )
    v817 = sub_21B417C((int *)v1278, *((_DWORD *)v1278 - 3), -955291385);
    v818 = unk_27FE650;
    v819 = v817 % unk_27FE650;
    v820 = *(_DWORD *)(environmentSubfilters + 4 * (v817 % unk_27FE650));
    if ( !v820 )
      goto LABEL_770;
    v821 = *(_DWORD *)v820;
    v822 = v1278;
    v823 = *(_DWORD *)(*(_DWORD *)v820 + 24);
      if ( v823 == v817 )
        v824 = *(_DWORD **)(v821 + 4);
        v825 = *(v822 - 3);
        if ( v825 == *(v824 - 3) && !memcmp(v822, v824, v825) )
      v826 = *(_DWORD *)v821;
      if ( *(_DWORD *)v821 )
        v823 = *(_DWORD *)(v826 + 24);
        v820 = v821;
        v821 = *(_DWORD *)v821;
        if ( *(_DWORD *)(v826 + 24) % v818 == v819 )
    v1200 = v820 == 0;
    if ( v820 )
      v1200 = *(_DWORD *)v820 == 0;
    if ( v1200 )
LABEL_770:
      v1816 = 0;
      v1817 = v1270;
      v1818 = 0;
      v1819 = 0;
      v1820 = 0;
        &v1815,
        (int *)&v1278,
        (int)&v1816);
  v827 = (void *)(v1277 - 12);
  if ( (int *)(v1277 - 12) != &dword_28898C0 )
    v1121 = (unsigned int *)(v1277 - 4);
        v1122 = __ldrex(v1121);
      while ( __strex(v1122 - 1, v1121) );
      v1122 = (*v1121)--;
    if ( v1122 <= 0 )
      j_j_j_j__ZdlPv_9(v827);
  v828 = (char *)v1278 - 12;
  if ( (int *)((char *)v1278 - 12) != &dword_28898C0 )
    v1123 = (unsigned int *)((char *)v1278 - 4);
        v1124 = __ldrex(v1123);
      while ( __strex(v1124 - 1, v1123) );
      v1124 = (*v1123)--;
    if ( v1124 <= 0 )
      j_j_j_j__ZdlPv_9(v828);
  sub_21E94B4(&v1276, "biome:humid");
  sub_21E94B4((void **)&v1275, "is_humid");
  v1271 = FilterList::findFilterDefinition((int **)&v1275);
  if ( v1271 )
    v829 = sub_21B417C((int *)v1276, *((_DWORD *)v1276 - 3), -955291385);
    v830 = unk_27FE650;
    v831 = v829 % unk_27FE650;
    v832 = *(_DWORD *)(environmentSubfilters + 4 * (v829 % unk_27FE650));
    if ( !v832 )
      goto LABEL_781;
    v833 = *(_DWORD *)v832;
    v834 = v1276;
    v835 = *(_DWORD *)(*(_DWORD *)v832 + 24);
      if ( v835 == v829 )
        v836 = *(_DWORD **)(v833 + 4);
        v837 = *(v834 - 3);
        if ( v837 == *(v836 - 3) && !memcmp(v834, v836, v837) )
      v838 = *(_DWORD *)v833;
      if ( *(_DWORD *)v833 )
        v835 = *(_DWORD *)(v838 + 24);
        v832 = v833;
        v833 = *(_DWORD *)v833;
        if ( *(_DWORD *)(v838 + 24) % v830 == v831 )
    v1201 = v832 == 0;
    if ( v832 )
      v1201 = *(_DWORD *)v832 == 0;
    if ( v1201 )
LABEL_781:
      v1822 = 0;
      v1823 = v1271;
      v1824 = 0;
      v1825 = 0;
      v1826 = 0;
        &v1821,
        (int *)&v1276,
        (int)&v1822);
  v839 = (void *)(v1275 - 12);
  if ( (int *)(v1275 - 12) != &dword_28898C0 )
    v1125 = (unsigned int *)(v1275 - 4);
        v1126 = __ldrex(v1125);
      while ( __strex(v1126 - 1, v1125) );
      v1126 = (*v1125)--;
    if ( v1126 <= 0 )
      j_j_j_j__ZdlPv_9(v839);
  v840 = (char *)v1276 - 12;
  if ( (int *)((char *)v1276 - 12) != &dword_28898C0 )
    v1127 = (unsigned int *)((char *)v1276 - 4);
        v1128 = __ldrex(v1127);
      while ( __strex(v1128 - 1, v1127) );
      v1128 = (*v1127)--;
    if ( v1128 <= 0 )
      j_j_j_j__ZdlPv_9(v840);
  sub_21E94B4(&v1274, "biome");
  sub_21E94B4((void **)&v1273, "is_biome");
  v1272 = FilterList::findFilterDefinition((int **)&v1273);
  if ( v1272 )
    v841 = sub_21B417C((int *)v1274, *((_DWORD *)v1274 - 3), -955291385);
    v842 = unk_27FE650;
    v843 = v841 % unk_27FE650;
    v844 = *(_DWORD *)(environmentSubfilters + 4 * (v841 % unk_27FE650));
    if ( !v844 )
      goto LABEL_792;
    v845 = *(_DWORD *)v844;
    v846 = v1274;
    v847 = *(_DWORD *)(*(_DWORD *)v844 + 24);
      if ( v847 == v841 )
        v848 = *(_DWORD **)(v845 + 4);
        v849 = *(v846 - 3);
        if ( v849 == *(v848 - 3) && !memcmp(v846, v848, v849) )
      v850 = *(_DWORD *)v845;
      if ( *(_DWORD *)v845 )
        v847 = *(_DWORD *)(v850 + 24);
        v844 = v845;
        v845 = *(_DWORD *)v845;
        if ( *(_DWORD *)(v850 + 24) % v842 == v843 )
    v1202 = v844 == 0;
    if ( v844 )
      v1202 = *(_DWORD *)v844 == 0;
    if ( v1202 )
LABEL_792:
      v1828 = 0;
      v1829 = v1272;
      v1830 = 0;
      v1831 = 0;
      v1832 = 2;
        &v1827,
        (int *)&v1274,
        (int)&v1828);
  v851 = (void *)(v1273 - 12);
  if ( (int *)(v1273 - 12) != &dword_28898C0 )
    v1129 = (unsigned int *)(v1273 - 4);
        v1130 = __ldrex(v1129);
      while ( __strex(v1130 - 1, v1129) );
      v1130 = (*v1129)--;
    if ( v1130 <= 0 )
      j_j_j_j__ZdlPv_9(v851);
  v852 = (char *)v1274 - 12;
  if ( (int *)((char *)v1274 - 12) != &dword_28898C0 )
    v1131 = (unsigned int *)((char *)v1274 - 4);
        v1132 = __ldrex(v1131);
      while ( __strex(v1132 - 1, v1131) );
      v1132 = (*v1131)--;
    if ( v1132 <= 0 )
      j_j_j_j__ZdlPv_9(v852);
}


void __fastcall EntityFilterGroup::~EntityFilterGroup(EntityFilterGroup *this)
{
  FilterGroup *v1; // r0@1

  v1 = FilterGroup::~FilterGroup(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall EntityFilterGroup::evaluate(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  int v7; // [sp+0h] [bp-C8h]@1
  int v8; // [sp+8h] [bp-C0h]@1
  int v9; // [sp+24h] [bp-A4h]@1
  int v10; // [sp+2Ch] [bp-9Ch]@1
  int v11; // [sp+48h] [bp-80h]@1
  int v12; // [sp+50h] [bp-78h]@1
  int v13; // [sp+6Ch] [bp-5Ch]@1
  int v14; // [sp+74h] [bp-54h]@1
  int v15; // [sp+90h] [bp-38h]@1
  int v16; // [sp+98h] [bp-30h]@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  _aeabi_memclr8(&v7, 180);
  v7 = v3;
  v8 = v5;
  v9 = v3;
  v10 = v5;
  v11 = v3;
  v12 = v5;
  v13 = v3;
  v14 = v5;
  v15 = v3;
  v16 = v5;
  return FilterGroup::evaluate(v4, (int)&v7);
}


signed int __fastcall EntityFilterGroup::_addLegacyFilter(int a1, const void **a2, int a3, int a4)
{
  int v4; // r5@1
  const void **v5; // r4@1
  int v6; // r11@1
  int v7; // r3@1
  char *v8; // r0@1
  int v9; // r1@2
  signed int v10; // r8@2
  int v11; // r10@2
  __int64 v12; // r0@7
  char *v13; // r0@7
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  char *v16; // r0@19
  int v17; // r7@20
  int v18; // r0@21
  __int64 v19; // r0@23
  char *v24; // r0@26
  unsigned int *v25; // r2@27
  signed int v26; // r1@29
  void *v27; // r0@33
  int v28; // r0@34
  int v30; // r0@37
  int v31; // r7@37
  int v32; // r0@41
  int v33; // r1@43
  __int64 v34; // r0@44
  const void **v35; // r4@46
  char *v36; // r0@46
  signed int v37; // r4@47
  int v38; // r5@50
  unsigned int *v39; // r1@51
  unsigned int v40; // r0@53
  unsigned int *v41; // r6@57
  unsigned int v42; // r0@59
  unsigned int *v43; // r2@64
  signed int v44; // r1@66
  unsigned int *v45; // r2@68
  signed int v46; // r1@70
  void *v47; // r0@72
  __int64 v48; // r0@73
  const void **v49; // r0@78
  char *v50; // r0@78
  char *v51; // r0@79
  char *v52; // r0@81
  char *v53; // r0@82
  unsigned int *v55; // r2@84
  signed int v56; // r1@86
  unsigned int *v57; // r2@88
  signed int v58; // r1@90
  unsigned int *v59; // r2@92
  signed int v60; // r1@94
  const void **v61; // r0@124
  char *v62; // r0@124
  unsigned int *v63; // r2@126
  signed int v64; // r1@128
  unsigned int *v65; // r2@130
  signed int v66; // r1@132
  unsigned int *v67; // r2@137
  signed int v68; // r1@139
  unsigned int *v69; // r2@141
  signed int v70; // r1@143
  unsigned int *v71; // r2@165
  signed int v72; // r1@167
  int v73; // [sp+4h] [bp-9Ch]@1
  char *v74; // [sp+8h] [bp-98h]@46
  unsigned int v75; // [sp+Ch] [bp-94h]@42
  int v76; // [sp+10h] [bp-90h]@45
  char *v77; // [sp+14h] [bp-8Ch]@124
  char *v78; // [sp+18h] [bp-88h]@124
  int v79; // [sp+1Ch] [bp-84h]@33
  int v80; // [sp+20h] [bp-80h]@33
  __int64 v81; // [sp+24h] [bp-7Ch]@33
  char *v82; // [sp+2Ch] [bp-74h]@78
  char *v83; // [sp+30h] [bp-70h]@78
  int v84; // [sp+34h] [bp-6Ch]@73
  __int64 v85; // [sp+38h] [bp-68h]@73
  int v86; // [sp+40h] [bp-60h]@73
  int v87; // [sp+48h] [bp-58h]@72
  int v88; // [sp+4Ch] [bp-54h]@72
  int v89; // [sp+50h] [bp-50h]@26
  char *v90; // [sp+54h] [bp-4Ch]@26
  int v91; // [sp+58h] [bp-48h]@26
  int v92; // [sp+60h] [bp-40h]@19
  char *v93; // [sp+64h] [bp-3Ch]@19
  __int64 v94; // [sp+68h] [bp-38h]@19
  int v95; // [sp+70h] [bp-30h]@17
  char *v96; // [sp+74h] [bp-2Ch]@17
  __int64 v97; // [sp+78h] [bp-28h]@17
  int v98; // [sp+80h] [bp-20h]@12
  char *v99; // [sp+84h] [bp-1Ch]@12
  __int64 v100; // [sp+88h] [bp-18h]@12
  int v101; // [sp+90h] [bp-10h]@7
  __int64 v102; // [sp+94h] [bp-Ch]@7
  int v103; // [sp+9Ch] [bp-4h]@7
  int v104; // [sp+A0h] [bp+0h]@1
  char *v105; // [sp+A4h] [bp+4h]@1
  __int64 v106; // [sp+A8h] [bp+8h]@1
  __int16 v107; // [sp+B0h] [bp+10h]@1
  int v108; // [sp+B4h] [bp+14h]@1
  char *v109; // [sp+B8h] [bp+18h]@1
  int v110; // [sp+BCh] [bp+1Ch]@1
  int v111; // [sp+C0h] [bp+20h]@1
  __int16 v112; // [sp+C4h] [bp+24h]@1
  int v113; // [sp+C8h] [bp+28h]@1
  char *v114; // [sp+CCh] [bp+2Ch]@1
  __int64 v115; // [sp+D0h] [bp+30h]@1

  v73 = a1;
  v4 = a3;
  v5 = a2;
  v6 = a4;
  v109 = (char *)&unk_28898CC;
  v110 = 0;
  v111 = 0;
  v113 = 0;
  v114 = (char *)&unk_28898CC;
  v115 = 1LL;
  v7 = *(_DWORD *)(a3 + 8);
  v107 = *(_DWORD *)(a3 + 8);
  v112 = HIWORD(v7);
  v104 = 1;
  v105 = (char *)&unk_28898CC;
  v106 = 0LL;
  v108 = 1;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v109,
    (int *)&v105);
  *(_QWORD *)&v110 = v106;
  v8 = v105 - 12;
  if ( (int *)(v105 - 12) != &dword_28898C0 )
  {
    v43 = (unsigned int *)(v105 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
    }
    else
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = *(_DWORD *)(v4 + 12);
  v10 = 0;
  v11 = *(_DWORD *)v6;
  if ( v9 == 2 )
    v10 = 1;
  if ( v9 == 6 )
    v95 = 1;
    v96 = (char *)&unk_28898CC;
    v97 = 0LL;
    v108 = 1;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v109,
      (int *)&v96);
    *(_QWORD *)&v110 = v97;
    v13 = v96 - 12;
    if ( (int *)(v96 - 12) == &dword_28898C0 )
      goto LABEL_18;
    v14 = (unsigned int *)(v96 - 4);
    if ( !&pthread_create )
      goto LABEL_120;
    __dmb();
    do
      v15 = __ldrex(v14);
    while ( __strex(v15 - 1, v14) );
    goto LABEL_121;
  if ( v9 == 5 )
    v98 = 1;
    v99 = (char *)&unk_28898CC;
    v100 = 2LL;
      (int *)&v99);
    *(_QWORD *)&v110 = v100;
    v13 = v99 - 12;
    if ( (int *)(v99 - 12) == &dword_28898C0 )
    v14 = (unsigned int *)(v99 - 4);
LABEL_121:
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
    goto LABEL_18;
  if ( v9 == 4 )
    HIDWORD(v12) = 1;
    v101 = 1;
    LODWORD(v12) = &unk_28898CC;
    v102 = v12;
    v103 = 0;
      (int *)&v102);
    *(_QWORD *)&v110 = *(__int64 *)((char *)&v102 + 4);
    v13 = (char *)(v102 - 12);
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v102 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        goto LABEL_121;
      }
LABEL_120:
      v15 = (*v14)--;
      goto LABEL_121;
LABEL_18:
  v92 = 1;
  v93 = (char *)&unk_28898CC;
  v94 = 0LL;
  v113 = 1;
    (int *)&v114,
    (int *)&v93);
  v115 = v94;
  v16 = v93 - 12;
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v93 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 20);
  if ( !v17 )
    goto LABEL_41;
  v18 = *(_DWORD *)(v4 + 12);
  if ( v18 == 1 )
    if ( v11 != 3 )
      v113 = *(_DWORD *)v6;
      EntityInteraction::setInteractText((int *)&v114, (int *)(v6 + 4));
      v19 = *(_QWORD *)(v6 + 8);
      goto LABEL_40;
    if ( *(_DWORD *)v17 == 2 )
      _R0 = COERCE_UNSIGNED_INT64(strtod((const char *)*(_DWORD *)(v6 + 4), 0));
      __asm
        VMOV            D0, R0, R1
        VCVT.F32.F64    S0, D0
      v89 = 2;
      v90 = (char *)&unk_28898CC;
      v91 = 0;
      v113 = 2;
      __asm { VSTR            S0, [SP,#0xDC+var_80] }
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v114,
        (int *)&v90);
      v115 = *(_QWORD *)&v91;
      v24 = v90 - 12;
      if ( (int *)(v90 - 12) == &dword_28898C0 )
        goto LABEL_41;
      v25 = (unsigned int *)(v90 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        goto LABEL_135;
      v88 = 0;
      sub_21E94B4((void **)&v87, *(const char **)(v6 + 4));
      Util::toInt((unsigned int *)&v87, &v88, 0, 256);
      v47 = (void *)(v87 - 12);
      if ( (int *)(v87 - 12) != &dword_28898C0 )
        v65 = (unsigned int *)(v87 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v66 = __ldrex(v65);
          while ( __strex(v66 - 1, v65) );
        }
        else
          v66 = (*v65)--;
        if ( v66 <= 0 )
          j_j_j_j__ZdlPv_9(v47);
      HIDWORD(v48) = v88;
      v84 = 1;
      LODWORD(v48) = &unk_28898CC;
      v85 = v48;
      v113 = 1;
      v86 = 0;
        (int *)&v85);
      v115 = *(__int64 *)((char *)&v85 + 4);
      v24 = (char *)(v85 - 12);
      if ( (int *)(v85 - 12) == &dword_28898C0 )
      v25 = (unsigned int *)(v85 - 4);
LABEL_135:
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
    v26 = (*v25)--;
    goto LABEL_135;
  if ( !v18 )
    v113 = *(_DWORD *)(v17 + 12);
    EntityInteraction::setInteractText((int *)&v114, (int *)(v17 + 16));
    v19 = *(_QWORD *)(v17 + 20);
LABEL_40:
    v115 = v19;
  if ( v10 == 1 )
    if ( v11 == 3 )
      v79 = 3;
      sub_21E8AF4(&v80, (int *)(v6 + 4));
      v81 = 0LL;
      v113 = 3;
        &v80);
      v115 = v81;
      v27 = (void *)(v80 - 12);
      if ( (int *)(v80 - 12) != &dword_28898C0 )
        v67 = (unsigned int *)(v80 - 4);
            v68 = __ldrex(v67);
          while ( __strex(v68 - 1, v67) );
          v68 = (*v67)--;
        if ( v68 <= 0 )
          j_j_j_j__ZdlPv_9(v27);
      v28 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 20);
      _ZF = v28 == 0;
      if ( v28 )
        _ZF = *(_DWORD *)(v28 + 40) == 0;
      if ( _ZF )
      v30 = std::_Hashtable<std::string,std::pair<std::string const,FilterInputDefinition>,std::allocator<std::pair<std::string const,FilterInputDefinition>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
              (unsigned __int64 *)(v28 + 28),
              (int **)(v6 + 4));
      v31 = v30;
      if ( v30 )
        v113 = *(_DWORD *)(v30 + 8);
        EntityInteraction::setInteractText((int *)&v114, (int *)(v30 + 12));
        v19 = *(_QWORD *)(v31 + 16);
        goto LABEL_40;
      v77 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v77, *((_DWORD *)*v5 - 3) + 7);
      sub_21E7408((const void **)&v77, "Filter ", 7u);
      sub_21E72F0((const void **)&v77, v5);
      v61 = sub_21E7408((const void **)&v77, " must be a preset string value", 0x1Eu);
      v78 = (char *)*v61;
      *v61 = &unk_28898CC;
      JsonUtil::errorMessage((int *)&v78);
      v62 = v78 - 12;
      if ( (int *)(v78 - 12) != &dword_28898C0 )
        v71 = (unsigned int *)(v78 - 4);
            v72 = __ldrex(v71);
          while ( __strex(v72 - 1, v71) );
          v72 = (*v71)--;
        if ( v72 <= 0 )
          j_j_j_j__ZdlPv_9(v62);
      v51 = v77 - 12;
      if ( (int *)(v77 - 12) == &dword_28898C0 )
LABEL_80:
        v37 = 0;
        goto LABEL_81;
      v63 = (unsigned int *)(v77 - 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        goto LABEL_150;
      v82 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v82, *((_DWORD *)*v5 - 3) + 7);
      sub_21E7408((const void **)&v82, "Filter ", 7u);
      sub_21E72F0((const void **)&v82, v5);
      v49 = sub_21E7408((const void **)&v82, " must be a string value", 0x17u);
      v83 = (char *)*v49;
      *v49 = &unk_28898CC;
      JsonUtil::errorMessage((int *)&v83);
      v50 = v83 - 12;
      if ( (int *)(v83 - 12) != &dword_28898C0 )
        v69 = (unsigned int *)(v83 - 4);
            v70 = __ldrex(v69);
          while ( __strex(v70 - 1, v69) );
          v70 = (*v69)--;
        if ( v70 <= 0 )
          j_j_j_j__ZdlPv_9(v50);
      v51 = v82 - 12;
      if ( (int *)(v82 - 12) == &dword_28898C0 )
        goto LABEL_80;
      v63 = (unsigned int *)(v82 - 4);
LABEL_150:
        if ( v64 <= 0 )
          j_j_j_j__ZdlPv_9(v51);
    v64 = (*v63)--;
    goto LABEL_150;
LABEL_41:
  v32 = *(_DWORD *)(v4 + 4);
  if ( !*(_DWORD *)(v32 + 32) )
    sub_21E5F48();
  (*(void (__fastcall **)(unsigned int *, int))(v32 + 36))(&v75, v32 + 24);
  if ( v75 && (v33 = *(_DWORD *)(v4 + 4), (*(int (**)(void))(*(_DWORD *)v75 + 8))() == 1) )
    v34 = *(_QWORD *)(v73 + 24);
    if ( (_DWORD)v34 == HIDWORD(v34) )
      std::vector<std::shared_ptr<FilterTest>,std::allocator<std::shared_ptr<FilterTest>>>::_M_emplace_back_aux<std::shared_ptr<FilterTest>>(
        (_QWORD *)(v73 + 20),
        (int)&v75);
      *(_QWORD *)v34 = v75;
      HIDWORD(v34) = v76;
      v76 = 0;
      *(_DWORD *)(v34 + 4) = HIDWORD(v34);
      v75 = 0;
      *(_DWORD *)(v73 + 24) = v34 + 8;
    v37 = 1;
  else
    v35 = *(const void ***)(v4 + 4);
    v74 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v74, *((_DWORD *)*v35 - 3) + 38);
    sub_21E7408((const void **)&v74, "Remapped Legacy filter failed setup ->", 0x26u);
    sub_21E72F0((const void **)&v74, v35);
    JsonUtil::errorMessage((int *)&v74);
    v36 = v74 - 12;
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v74 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
      else
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
    v37 = 0;
  v38 = v76;
  if ( v76 )
    v39 = (unsigned int *)(v76 + 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 == 1 )
      v41 = (unsigned int *)(v38 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 8))(v38);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 12))(v38);
LABEL_81:
  v52 = v114 - 12;
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v114 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  v53 = v109 - 12;
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v109 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  return v37;
}


void __fastcall EntityFilterGroup::~EntityFilterGroup(EntityFilterGroup *this)
{
  EntityFilterGroup::~EntityFilterGroup(this);
}


void __fastcall EntityFilterGroup::initialize(EntityFilterGroup *this)
{
  EntityFilterGroup::initialize(this);
}


signed int __fastcall EntityFilterGroup::_processLegacyMember(int a1, const void **a2, Json::Value *a3, int a4)
{
  int v4; // r8@1
  const void **v5; // r10@1
  int v6; // r6@1
  Json::Value *v7; // r7@1
  void *v8; // r0@2
  void *v9; // r0@3
  char *v10; // r0@4
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  char *v17; // r0@27
  signed int v18; // r4@28
  unsigned int *v19; // r2@29
  signed int v20; // r1@31
  unsigned int *v21; // r2@33
  signed int v22; // r1@35
  unsigned int v23; // r10@42
  unsigned int v24; // r11@42
  int v25; // r7@42
  int v26; // r6@42
  int v27; // r8@43
  _DWORD *v28; // r9@43
  int v29; // r4@43
  _DWORD *v30; // r1@45
  size_t v31; // r2@45
  int v32; // r5@47
  char *v33; // r5@49
  void *v34; // r0@50
  unsigned int v35; // r2@51
  unsigned int v36; // r3@51
  void *v37; // r0@53
  unsigned int v38; // r10@54
  unsigned int v39; // r11@54
  int v40; // r8@54
  int v41; // r6@54
  int v42; // r7@55
  _DWORD *v43; // r9@55
  int v44; // r4@55
  _DWORD *v45; // r1@57
  size_t v46; // r2@57
  int v47; // r5@59
  char *v48; // r0@61
  char *v49; // r0@63
  char *v50; // r0@64
  void *v51; // r0@65
  unsigned int *v52; // r2@66
  signed int v53; // r1@68
  char *v54; // r0@71
  char *v55; // r0@73
  unsigned int *v57; // r2@75
  signed int v58; // r1@77
  void *v60; // r0@86
  unsigned int *v61; // r2@87
  signed int v62; // r1@89
  bool v63; // zf@91
  unsigned int *v64; // r2@107
  signed int v65; // r1@109
  unsigned int *v66; // r2@111
  signed int v67; // r1@113
  unsigned int *v68; // r2@115
  signed int v69; // r1@117
  unsigned int *v70; // r2@119
  signed int v71; // r1@121
  unsigned int *v72; // r2@123
  signed int v73; // r1@125
  unsigned int *v74; // r2@150
  signed int v75; // r1@152
  unsigned int *v76; // r2@154
  signed int v77; // r1@156
  int v78; // [sp+0h] [bp-C8h]@42
  int v79; // [sp+4h] [bp-C4h]@94
  int v80; // [sp+8h] [bp-C0h]@94
  int v81; // [sp+Ch] [bp-BCh]@94
  int v82; // [sp+10h] [bp-B8h]@94
  char *v83; // [sp+14h] [bp-B4h]@61
  int v84; // [sp+18h] [bp-B0h]@53
  int v85; // [sp+1Ch] [bp-ACh]@50
  int v86; // [sp+20h] [bp-A8h]@86
  int v87; // [sp+24h] [bp-A4h]@86
  int v88; // [sp+28h] [bp-A0h]@86
  int v89; // [sp+2Ch] [bp-9Ch]@86
  char *v90; // [sp+30h] [bp-98h]@42
  void *s1; // [sp+34h] [bp-94h]@42
  int v92; // [sp+38h] [bp-90h]@42
  char *v93; // [sp+3Ch] [bp-8Ch]@71
  char *v94; // [sp+40h] [bp-88h]@27
  int v95; // [sp+44h] [bp-84h]@22
  char *v96; // [sp+48h] [bp-80h]@22
  int v97; // [sp+4Ch] [bp-7Ch]@22
  int v98; // [sp+54h] [bp-74h]@16
  char *v99; // [sp+58h] [bp-70h]@16
  __int64 v100; // [sp+5Ch] [bp-6Ch]@16
  int v101; // [sp+64h] [bp-64h]@10
  char *v102; // [sp+68h] [bp-60h]@10
  __int64 v103; // [sp+6Ch] [bp-5Ch]@10
  int v104; // [sp+78h] [bp-50h]@2
  int v105; // [sp+7Ch] [bp-4Ch]@2
  int v106; // [sp+80h] [bp-48h]@2
  int v107; // [sp+84h] [bp-44h]@2
  __int64 v108; // [sp+88h] [bp-40h]@2
  int v109; // [sp+90h] [bp-38h]@1
  char *v110; // [sp+94h] [bp-34h]@1
  int v111; // [sp+98h] [bp-30h]@1
  int v112; // [sp+9Ch] [bp-2Ch]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v109 = 1;
  v110 = (char *)&unk_28898CC;
  v111 = 0;
  v112 = 0;
  if ( Json::Value::isString(a3) == 1 )
  {
    sub_21E94B4((void **)&v104, (const char *)&unk_257BC67);
    Json::Value::asString(&v105, (int)v7, &v104);
    v106 = 3;
    sub_21E8AF4(&v107, &v105);
    v108 = 0LL;
    v109 = v106;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v110,
      &v107);
    *(_QWORD *)&v111 = v108;
    v8 = (void *)(v107 - 12);
    if ( (int *)(v107 - 12) != &dword_28898C0 )
    {
      v19 = (unsigned int *)(v107 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    }
    v9 = (void *)(v105 - 12);
    if ( (int *)(v105 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v105 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    v10 = (char *)(v104 - 12);
    if ( (int *)(v104 - 12) == &dword_28898C0 )
      goto LABEL_40;
    v11 = (unsigned int *)(v104 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      goto LABEL_38;
LABEL_37:
    v12 = (*v11)--;
    goto LABEL_38;
  }
  if ( Json::Value::isBool(v7) == 1 )
    v101 = 1;
    v102 = (char *)&unk_28898CC;
    v103 = (unsigned int)Json::Value::asBool(v7, 0);
    v109 = 1;
      (int *)&v102);
    *(_QWORD *)&v111 = v103;
    v10 = v102 - 12;
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v102 - 4);
      if ( !&pthread_create )
        goto LABEL_37;
LABEL_38:
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
  else if ( Json::Value::isIntegral(v7) == 1 )
    v98 = 1;
    v99 = (char *)&unk_28898CC;
    v100 = (unsigned int)Json::Value::asInt(v7, 0);
      (int *)&v99);
    *(_QWORD *)&v111 = v100;
    v10 = v99 - 12;
    if ( (int *)(v99 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v99 - 4);
  else
    if ( Json::Value::isNumeric(v7) != 1 )
      v94 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v94, *((_DWORD *)*v5 - 3) + 43);
      sub_21E7408((const void **)&v94, "Invalid Legacy filter member type found in ", 0x2Bu);
      sub_21E72F0((const void **)&v94, v5);
      JsonUtil::errorMessage((int *)&v94);
      v17 = v94 - 12;
      if ( (int *)(v94 - 12) != &dword_28898C0 )
        v76 = (unsigned int *)(v94 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v77 = __ldrex(v76);
          while ( __strex(v77 - 1, v76) );
        }
        else
          v77 = (*v76)--;
        if ( v77 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v18 = 0;
      goto LABEL_73;
    _R0 = Json::Value::asFloat(v7, 0.0);
    __asm { VMOV            S0, R0 }
    v95 = 2;
    v96 = (char *)&unk_28898CC;
    v97 = 0;
    __asm { VSTR            S0, [SP,#0xC8+var_78] }
    v109 = 2;
      (int *)&v96);
    *(_QWORD *)&v111 = *(_QWORD *)&v97;
    v10 = v96 - 12;
    if ( (int *)(v96 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v96 - 4);
LABEL_40:
  if ( *(_DWORD *)(v6 + 12) != 3 )
    v18 = EntityFilterGroup::_addLegacyFilter(v4, v5, v6, (int)&v109);
    goto LABEL_73;
  if ( v109 == 3 )
    sub_21E8AF4(&v92, (int *)&v110);
    sub_21E8AF4((int *)&s1, &v92);
    v78 = v4;
    v90 = (char *)&unk_28898CC;
    v23 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
    v24 = unk_27FE650;
    v25 = v23 % unk_27FE650;
    v26 = *(_DWORD *)(environmentSubfilters + 4 * (v23 % unk_27FE650));
    if ( !v26 )
      goto LABEL_49;
    v27 = *(_DWORD *)v26;
    v28 = s1;
    v29 = *(_DWORD *)(*(_DWORD *)v26 + 24);
    while ( 1 )
      if ( v29 == v23 )
        v30 = *(_DWORD **)(v27 + 4);
        v31 = *(v28 - 3);
        if ( v31 == *(v30 - 3) && !memcmp(v28, v30, v31) )
          break;
      v32 = *(_DWORD *)v27;
      if ( *(_DWORD *)v27 )
        v29 = *(_DWORD *)(v32 + 24);
        v26 = v27;
        v27 = *(_DWORD *)v27;
        if ( *(_DWORD *)(v32 + 24) % v24 == v25 )
          continue;
    _ZF = v26 == 0;
    if ( v26 )
      v29 = *(_DWORD *)v26;
      _ZF = *(_DWORD *)v26 == 0;
    if ( _ZF )
LABEL_49:
      v33 = sub_21E77E4(&v92, 58, 0);
      if ( v33 != (char *)-1 )
        sub_21E9040((void **)&v85, &v92, 0, (unsigned int)v33);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)&s1,
          &v85);
        v34 = (void *)(v85 - 12);
        if ( (int *)(v85 - 12) != &dword_28898C0 )
          v72 = (unsigned int *)(v85 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v73 = __ldrex(v72);
            while ( __strex(v73 - 1, v72) );
          }
          else
            v73 = (*v72)--;
          if ( v73 <= 0 )
            j_j_j_j__ZdlPv_9(v34);
        v35 = (unsigned int)(v33 + 1);
        v36 = *(_DWORD *)(v92 - 12);
        if ( (unsigned int)(v33 + 1) < v36 )
          if ( v36 < v35 )
            sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v35, v36);
          sub_21E9040((void **)&v84, &v92, v35, v36);
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)&v90,
            &v84);
          v37 = (void *)(v84 - 12);
          if ( (int *)(v84 - 12) != &dword_28898C0 )
            v74 = (unsigned int *)(v84 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v75 = __ldrex(v74);
              while ( __strex(v75 - 1, v74) );
            }
            else
              v75 = (*v74)--;
            if ( v75 <= 0 )
              j_j_j_j__ZdlPv_9(v37);
      v38 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
      v39 = unk_27FE650;
      v40 = v38 % unk_27FE650;
      v41 = *(_DWORD *)(environmentSubfilters + 4 * (v38 % unk_27FE650));
      if ( !v41 )
        goto LABEL_61;
      v42 = *(_DWORD *)v41;
      v43 = s1;
      v44 = *(_DWORD *)(*(_DWORD *)v41 + 24);
      while ( 1 )
        if ( v44 == v38 )
          v45 = *(_DWORD **)(v42 + 4);
          v46 = *(v43 - 3);
          if ( v46 == *(v45 - 3) && !memcmp(v43, v45, v46) )
            break;
        v47 = *(_DWORD *)v42;
        if ( *(_DWORD *)v42 )
          v44 = *(_DWORD *)(v47 + 24);
          v41 = v42;
          v42 = *(_DWORD *)v42;
          if ( *(_DWORD *)(v47 + 24) % v39 == v40 )
            continue;
      v63 = v41 == 0;
      if ( v41 )
        v44 = *(_DWORD *)v41;
        v63 = *(_DWORD *)v41 == 0;
      if ( v63 )
LABEL_61:
        v83 = (char *)&unk_28898CC;
        sub_21E6FCC((const void **)&v83, *((_DWORD *)s1 - 3) + 36);
        sub_21E7408((const void **)&v83, "Invalid Legacy Filter member found: ", 0x24u);
        sub_21E72F0((const void **)&v83, (const void **)&s1);
        JsonUtil::errorMessage((int *)&v83);
        v48 = v83 - 12;
        if ( (int *)(v83 - 12) != &dword_28898C0 )
          v70 = (unsigned int *)(v83 - 4);
              v71 = __ldrex(v70);
            while ( __strex(v71 - 1, v70) );
            v71 = (*v70)--;
          if ( v71 <= 0 )
            j_j_j_j__ZdlPv_9(v48);
        v18 = 0;
        v79 = 3;
        sub_21E8AF4(&v80, (int *)&v90);
        v81 = 0;
        v82 = 0;
        v18 = EntityFilterGroup::_addLegacyFilter(v78, (const void **)&s1, v44 + 8, (int)&v79);
        v60 = (void *)(v80 - 12);
        if ( (int *)(v80 - 12) != &dword_28898C0 )
          v61 = (unsigned int *)(v80 - 4);
              v62 = __ldrex(v61);
            while ( __strex(v62 - 1, v61) );
            goto LABEL_167;
LABEL_166:
          v62 = (*v61)--;
          goto LABEL_167;
    else
      v86 = 3;
      sub_21E8AF4(&v87, (int *)&v90);
      v88 = 0;
      v89 = 0;
      v18 = EntityFilterGroup::_addLegacyFilter(v78, (const void **)&s1, v29 + 8, (int)&v86);
      v60 = (void *)(v87 - 12);
      if ( (int *)(v87 - 12) != &dword_28898C0 )
        v61 = (unsigned int *)(v87 - 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
LABEL_167:
          if ( v62 <= 0 )
            j_j_j_j__ZdlPv_9(v60);
          goto LABEL_63;
        goto LABEL_166;
LABEL_63:
    v49 = v90 - 12;
    if ( (int *)(v90 - 12) != &dword_28898C0 )
      v66 = (unsigned int *)(v90 - 4);
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
        v67 = (*v66)--;
      if ( v67 <= 0 )
        j_j_j_j__ZdlPv_9(v49);
    v50 = (char *)s1 - 12;
    if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
      v68 = (unsigned int *)((char *)s1 - 4);
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
        v69 = (*v68)--;
      if ( v69 <= 0 )
        j_j_j_j__ZdlPv_9(v50);
    v51 = (void *)(v92 - 12);
    if ( (int *)(v92 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v92 - 4);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j__ZdlPv_9(v51);
  v93 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v93, *((_DWORD *)*v5 - 3) + 43);
  sub_21E7408((const void **)&v93, "Invalid Legacy environment member found in ", 0x2Bu);
  sub_21E72F0((const void **)&v93, v5);
  JsonUtil::errorMessage((int *)&v93);
  v54 = v93 - 12;
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v93 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  v18 = 0;
LABEL_73:
  v55 = v110 - 12;
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v110 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  return v18;
}


signed int __fastcall EntityFilterGroup::_processLegacyArray(int a1, const void **a2, int a3, int a4)
{
  int v4; // r7@1
  const void **v5; // r5@1
  int v6; // r6@1
  int v7; // r4@1
  Json::Value *v8; // r0@2
  signed int result; // r0@4
  char v10; // [sp+4h] [bp-2Ch]@1
  char v11; // [sp+Ch] [bp-24h]@1

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = a4;
  Json::Value::begin((Json::Value *)&v11, a3);
  Json::Value::end((Json::Value *)&v10, v4);
  if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v11, (const Json::ValueIteratorBase *)&v10) )
  {
LABEL_4:
    result = 1;
  }
  else
    while ( 1 )
    {
      v8 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v11);
      if ( EntityFilterGroup::_processLegacyMember(v6, v5, v8, v7) != 1 )
        break;
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v11);
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v11, (const Json::ValueIteratorBase *)&v10) == 1 )
        goto LABEL_4;
    }
    result = 0;
  return result;
}
