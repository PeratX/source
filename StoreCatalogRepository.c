

QueryResponse *__fastcall StoreCatalogRepository::_processQueryManifest(__int64 this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27)
{
  char *v27; // r8@1
  int v28; // r4@1
  unsigned int v29; // r11@1
  void *v30; // r0@2
  __int64 v31; // kr08_8@4
  void *v32; // r1@4
  char *v33; // r1@5
  _DWORD *v34; // r5@5
  unsigned int *v35; // r2@6
  signed int v36; // r4@8
  char *v37; // r4@12
  int *v38; // r0@13
  void *v39; // r4@17
  void *v40; // r5@17
  unsigned int *v41; // r2@19
  signed int v42; // r1@21
  int *v43; // r0@27
  void *v44; // r0@33
  void *v45; // r0@34
  web::json::value *v46; // r10@35
  const char *v47; // r5@36
  void **v48; // r0@36
  void *v49; // r6@36
  unsigned int *v50; // r2@37
  signed int v51; // r1@39
  unsigned int *v52; // r2@45
  signed int v53; // r1@47
  unsigned int *v54; // r2@49
  signed int v55; // r1@51
  unsigned int *v56; // r2@53
  signed int v57; // r1@55
  unsigned int *v58; // r2@57
  signed int v59; // r1@59
  unsigned int *v60; // r2@61
  signed int v61; // r1@63
  unsigned int *v62; // r2@65
  signed int v63; // r1@67
  unsigned int *v64; // r2@69
  signed int v65; // r1@71
  unsigned int *v66; // r2@73
  signed int v67; // r1@75
  unsigned int *v68; // r2@77
  signed int v69; // r1@79
  unsigned int *v70; // r2@81
  signed int v71; // r1@83
  unsigned int *v72; // r2@85
  signed int v73; // r1@87
  unsigned int *v74; // r2@89
  signed int v75; // r1@91
  unsigned int *v76; // r2@93
  signed int v77; // r1@95
  unsigned int *v78; // r2@121
  signed int v79; // r1@123
  unsigned int *v80; // r2@145
  signed int v81; // r1@147
  unsigned int *v82; // r2@149
  signed int v83; // r1@151
  unsigned int *v84; // r2@153
  signed int v85; // r1@155
  unsigned int *v86; // r2@157
  signed int v87; // r1@159
  unsigned int *v88; // r2@161
  signed int v89; // r1@163
  unsigned int *v90; // r2@165
  signed int v91; // r1@167
  unsigned int *v92; // r2@173
  signed int v93; // r1@175
  unsigned int *v94; // r2@201
  signed int v95; // r1@203
  unsigned int *v96; // r2@205
  signed int v97; // r1@207
  unsigned int *v98; // r2@209
  signed int v99; // r1@211
  signed int v100; // r1@213
  int *v101; // r7@232
  int v102; // r9@232
  __int64 v103; // kr18_8@232
  int v104; // r0@232
  _DWORD *v105; // r5@232
  int v106; // r0@232
  unsigned int *v107; // r2@235
  signed int v108; // r1@237
  int *v109; // r0@243
  void *v110; // r5@247 OVERLAPPED
  void *v111; // r6@247 OVERLAPPED
  unsigned int *v112; // r2@249
  signed int v113; // r1@251
  int *v114; // r0@257
  void *v115; // r0@262
  void *v116; // r0@263
  void *v117; // r0@264
  void *v118; // r0@269
  void *v119; // r0@270
  void *v120; // r0@271
  _DWORD *v121; // r5@272 OVERLAPPED
  _DWORD *v122; // r6@272 OVERLAPPED
  int v123; // r0@272
  _DWORD *v124; // r7@272
  int v125; // r0@272
  unsigned int *v126; // r2@275
  signed int v127; // r1@277
  int *v128; // r0@283
  void *v129; // r5@287 OVERLAPPED
  void *v130; // r6@287 OVERLAPPED
  unsigned int *v131; // r2@289
  signed int v132; // r1@291
  int *v133; // r0@297
  void *v134; // r0@302
  void *v135; // r0@303
  void *v136; // r0@304
  void *v137; // r0@305
  int v138; // r5@306
  void *v139; // r0@306
  void *v140; // r0@308
  void *v141; // r0@309
  void *v142; // r9@311
  int v143; // r0@311
  void *v144; // r0@311
  int *v145; // r5@312 OVERLAPPED
  int *v146; // r6@312 OVERLAPPED
  StoreSearchQuery **v147; // r0@314
  StoreSearchQuery **v148; // r1@314
  StoreSearchQuery *v149; // r0@314
  StoreSearchQuery *v150; // r0@315
  void *v151; // r0@316
  unsigned int *v152; // r2@317
  void *v153; // r0@321
  void *v154; // r0@322
  void *v155; // r0@323
  int v156; // r5@324
  void *v157; // r0@324
  int v158; // r5@326
  void *v159; // r0@326
  void *v160; // r0@327
  void *v161; // r0@328
  int v162; // r5@330
  void *v163; // r0@331
  int v164; // r4@333
  ContentCatalogService *v165; // r5@350
  _DWORD *v166; // r0@350
  __int64 v167; // r1@350
  void *v168; // r0@352
  void *v169; // r0@353
  void *v170; // r0@354
  char *v171; // r0@355
  int **v172; // r1@358
  bool v173; // zf@360
  int *v174; // r8@361
  char *v175; // r0@363
  int *i; // r4@363
  int *v177; // r6@363
  int v178; // r0@365
  void *v179; // r0@365
  int v180; // r0@366
  int v181; // r0@366
  int v182; // r1@367
  int v183; // r1@367
  int v184; // r1@367
  int v185; // r1@367
  unsigned int *v186; // r2@370
  signed int v187; // r1@372
  unsigned int v188; // r9@378
  unsigned int v189; // r10@378
  int v190; // r11@378
  int **v191; // r6@378
  int *v192; // r5@379
  int v193; // r4@379
  _DWORD *v194; // r1@381
  size_t v195; // r2@381
  int *v196; // r7@383
  __int64 v197; // r4@386
  int v198; // r9@386
  signed int v199; // r6@386
  unsigned int v200; // r11@387
  unsigned int v201; // r4@387
  int v202; // r10@388
  int v203; // r8@389
  char *v204; // r0@389
  char *v205; // r6@389
  signed int v206; // r8@389
  void *v207; // r0@391
  signed int v208; // r8@391
  __int32 v209; // r0@394
  int v210; // r8@395
  StoreSearchQuery *v211; // r0@398
  unsigned int *v213; // r2@404
  signed int v214; // r1@406
  __int64 v215; // r0@413
  int v216; // r1@414
  unsigned int *v217; // r1@415
  unsigned int v218; // r0@417
  char v219; // r0@422
  __int64 v220; // r0@424
  unsigned int v221; // r7@427
  int v222; // r11@427
  unsigned int *v223; // r1@428
  unsigned int v224; // r0@430
  unsigned int *v225; // r4@434
  unsigned int v226; // r0@436
  void *v227; // r0@443
  _DWORD *v228; // r0@444
  unsigned int *v229; // r2@448
  signed int v230; // r1@450
  unsigned int *v231; // r2@452
  signed int v232; // r1@454
  unsigned int *v233; // r2@456
  signed int v234; // r1@458
  unsigned int *v235; // r2@460
  signed int v236; // r1@462
  unsigned __int64 *v237; // [sp+60h] [bp-240h]@359
  web::json::value *v238; // [sp+68h] [bp-238h]@35
  int v239; // [sp+6Ch] [bp-234h]@4
  unsigned __int64 *v240; // [sp+6Ch] [bp-234h]@387
  int v241; // [sp+70h] [bp-230h]@36
  unsigned int v242; // [sp+7Ch] [bp-224h]@358
  int **v243; // [sp+80h] [bp-220h]@358
  int **v244; // [sp+84h] [bp-21Ch]@378
  int v245; // [sp+84h] [bp-21Ch]@386
  _DWORD *v246; // [sp+88h] [bp-218h]@444
  void (*v247)(void); // [sp+90h] [bp-210h]@444
  int (__fastcall *v248)(int **); // [sp+94h] [bp-20Ch]@444
  void *v249; // [sp+98h] [bp-208h]@424
  int v250; // [sp+9Ch] [bp-204h]@424
  int v251; // [sp+A0h] [bp-200h]@424
  int v252; // [sp+A4h] [bp-1FCh]@404
  int v253[5]; // [sp+A8h] [bp-1F8h]@422
  char v254; // [sp+BCh] [bp-1E4h]@424
  char v255; // [sp+BDh] [bp-1E3h]@424
  char v256; // [sp+BEh] [bp-1E2h]@424
  unsigned int v257; // [sp+C0h] [bp-1E0h]@424
  int v258; // [sp+C4h] [bp-1DCh]@425
  time_t timer; // [sp+C8h] [bp-1D8h]@394
  int v260; // [sp+CCh] [bp-1D4h]@365
  void *v261; // [sp+D0h] [bp-1D0h]@363
  void *v262; // [sp+D4h] [bp-1CCh]@367
  void *v263; // [sp+D8h] [bp-1C8h]@367
  int v264; // [sp+DCh] [bp-1C4h]@367
  int v265; // [sp+E0h] [bp-1C0h]@367
  int v266; // [sp+E4h] [bp-1BCh]@367
  void *v267; // [sp+E8h] [bp-1B8h]@367
  void *v268; // [sp+ECh] [bp-1B4h]@367
  void *v269; // [sp+F0h] [bp-1B0h]@367
  __int64 v270; // [sp+F4h] [bp-1ACh]@367
  void *v271; // [sp+FCh] [bp-1A4h]@363
  int v272; // [sp+100h] [bp-1A0h]@363
  int v273; // [sp+104h] [bp-19Ch]@363
  int v274; // [sp+108h] [bp-198h]@363
  void *v275; // [sp+10Ch] [bp-194h]@363
  _DWORD *v276; // [sp+110h] [bp-190h]@350
  __int64 v277; // [sp+118h] [bp-188h]@350
  char *v278; // [sp+120h] [bp-180h]@350
  int v279; // [sp+124h] [bp-17Ch]@350
  int v280; // [sp+128h] [bp-178h]@353
  int v281; // [sp+12Ch] [bp-174h]@352
  int v282; // [sp+138h] [bp-168h]@205
  int v283; // [sp+140h] [bp-160h]@209
  int v284; // [sp+144h] [bp-15Ch]@201
  int v285; // [sp+14Ch] [bp-154h]@165
  int v286; // [sp+150h] [bp-150h]@157
  int v287; // [sp+158h] [bp-148h]@161
  int v288; // [sp+15Ch] [bp-144h]@153
  int v289; // [sp+160h] [bp-140h]@173
  int v290; // [sp+164h] [bp-13Ch]@145
  int v291; // [sp+16Ch] [bp-134h]@149
  int v292; // [sp+170h] [bp-130h]@308
  int v293; // [sp+178h] [bp-128h]@93
  int v294; // [sp+17Ch] [bp-124h]@85
  int v295; // [sp+184h] [bp-11Ch]@89
  int v296; // [sp+188h] [bp-118h]@81
  int v297; // [sp+190h] [bp-110h]@77
  void *v298; // [sp+194h] [bp-10Ch]@272
  void *v299; // [sp+198h] [bp-108h]@272
  int v300; // [sp+19Ch] [bp-104h]@272
  int v301; // [sp+1A0h] [bp-100h]@69
  int v302; // [sp+1A8h] [bp-F8h]@73
  int v303; // [sp+1ACh] [bp-F4h]@65
  int v304; // [sp+1B0h] [bp-F0h]@57
  int v305; // [sp+1B8h] [bp-E8h]@61
  int v306; // [sp+1BCh] [bp-E4h]@121
  int v307; // [sp+1C4h] [bp-DCh]@36
  void *v308; // [sp+1C8h] [bp-D8h]@232
  void *v309; // [sp+1CCh] [bp-D4h]@232
  int v310; // [sp+1D0h] [bp-D0h]@232
  void *v311; // [sp+1D4h] [bp-CCh]@232
  void *v312; // [sp+1D8h] [bp-C8h]@232
  __int64 v313; // [sp+1DCh] [bp-C4h]@232
  int v314; // [sp+1E4h] [bp-BCh]@232
  void *v315; // [sp+1E8h] [bp-B8h]@232
  void *v316; // [sp+1ECh] [bp-B4h]@232
  int v317; // [sp+1F0h] [bp-B0h]@232
  int v318; // [sp+1F4h] [bp-ACh]@232
  int v319; // [sp+1F8h] [bp-A8h]@232
  void *v320; // [sp+1FCh] [bp-A4h]@232
  void *v321; // [sp+200h] [bp-A0h]@232
  void *v322; // [sp+204h] [bp-9Ch]@232
  void *v323; // [sp+208h] [bp-98h]@232
  int v324; // [sp+210h] [bp-90h]@34
  web::json::value *v325; // [sp+214h] [bp-8Ch]@34
  web::json::value *v326; // [sp+218h] [bp-88h]@35
  int v327; // [sp+224h] [bp-7Ch]@4
  void *ptr; // [sp+228h] [bp-78h]@4
  void *v329; // [sp+22Ch] [bp-74h]@4
  int v330; // [sp+230h] [bp-70h]@4
  int v331; // [sp+234h] [bp-6Ch]@2
  int v332; // [sp+238h] [bp-68h]@3
  __int64 v333; // [sp+23Ch] [bp-64h]@1
  int v334; // [sp+244h] [bp-5Ch]@1
  char v335; // [sp+248h] [bp-58h]@1
  __int64 v336; // [sp+24Ch] [bp-54h]@4
  int v337; // [sp+254h] [bp-4Ch]@4
  int v338; // [sp+258h] [bp-48h]@378
  unsigned int v339; // [sp+25Ch] [bp-44h]@378
  char v340; // [sp+274h] [bp-2Ch]@424
  char v341; // [sp+278h] [bp-28h]@5

  v27 = &v335;
  v28 = HIDWORD(this);
  v29 = this;
  LODWORD(this) = &v335;
  QueryResponse::QueryResponse(this);
  v333 = 0LL;
  v334 = 0;
  *(_DWORD *)(v29 + 276) = 0;
  if ( *(_DWORD *)(*(_DWORD *)(v28 + 60) - 12) )
  {
    utility::conversions::to_string_t(&v331, (int *)(v28 + 60));
    web::json::value::parse();
    v30 = (void *)(v331 - 12);
    if ( (int *)(v331 - 12) != &dword_28898C0 )
    {
      v50 = (unsigned int *)(v331 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
      }
      else
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v30);
    }
    if ( web::json::value::type((web::json::value *)&v332) != 5 )
      sub_119C884((void **)&v327, "queryOrder");
      v239 = v28;
      webjson::getFieldAsStringArray((int)&ptr, (web::json::value *)&v332, &v327);
      v31 = v336;
      LODWORD(v336) = ptr;
      ptr = 0;
      v32 = v329;
      v329 = 0;
      HIDWORD(v336) = v32;
      v337 = v330;
      v330 = 0;
      if ( (_DWORD)v31 != HIDWORD(v31) )
        v33 = &v341;
        v34 = (_DWORD *)v31;
        {
          v38 = (int *)(*v34 - 12);
          if ( v38 != &dword_28898C0 )
          {
            v35 = (unsigned int *)(*v34 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v36 = __ldrex(v35);
              while ( __strex(v36 - 1, v35) );
            }
            else
              v36 = (*v35)--;
            if ( v36 <= 0 )
              v37 = v33;
              j_j_j_j_j__ZdlPv_9_1(v38);
              v33 = v37;
          }
          ++v34;
        }
        while ( v34 != (_DWORD *)HIDWORD(v31) );
      if ( (_DWORD)v31 )
        operator delete((void *)v31);
      v39 = v329;
      v40 = ptr;
      if ( ptr == v329 )
        v27 = &v335;
          v43 = (int *)(*(_DWORD *)v40 - 12);
          if ( v43 != &dword_28898C0 )
            v41 = (unsigned int *)(*(_DWORD *)v40 - 4);
                v42 = __ldrex(v41);
              while ( __strex(v42 - 1, v41) );
              v42 = (*v41)--;
            if ( v42 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v43);
          v40 = (char *)v40 + 4;
        while ( v40 != v39 );
        v40 = ptr;
      if ( v40 )
        operator delete(v40);
      v44 = (void *)(v327 - 12);
      if ( (int *)(v327 - 12) != &dword_28898C0 )
        v52 = (unsigned int *)(v327 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v53 = __ldrex(v52);
          while ( __strex(v53 - 1, v52) );
        else
          v53 = (*v52)--;
        if ( v53 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v44);
      sub_119C884((void **)&v324, "queries");
      webjson::getFieldAsObjectArray((int)&v325, (web::json::value *)&v332, &v324);
      v45 = (void *)(v324 - 12);
      if ( (int *)(v324 - 12) != &dword_28898C0 )
        v54 = (unsigned int *)(v324 - 4);
            v55 = __ldrex(v54);
          while ( __strex(v55 - 1, v54) );
          v55 = (*v54)--;
        if ( v55 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v45);
      v46 = v325;
      v238 = v326;
      if ( v325 != v326 )
        v47 = "searchCriteria";
        v48 = (void **)&v307;
        v49 = &unk_28898CC;
        v241 = 0;
          v311 = v49;
          v312 = v49;
          v313 = 0LL;
          v314 = 0;
          v315 = v49;
          v316 = v49;
          v317 = 0;
          v318 = 0;
          v319 = 0;
          v320 = v49;
          v321 = v49;
          v322 = v49;
          v323 = v49;
          v101 = (int *)v48;
          sub_119C884(v48, v47);
          webjson::getFieldAsStringArray((int)&v308, v46, v101);
          v102 = (int)v49;
          v103 = v313;
          v104 = (int)v308;
          v308 = 0;
          v173 = (_DWORD)v313 == HIDWORD(v313);
          LODWORD(v313) = v104;
          v105 = (_DWORD *)v103;
          v106 = (int)v309;
          v309 = 0;
          HIDWORD(v313) = v106;
          v314 = v310;
          v310 = 0;
          if ( !v173 )
            do
              v109 = (int *)(*v105 - 12);
              if ( v109 != &dword_28898C0 )
              {
                v107 = (unsigned int *)(*v105 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v108 = __ldrex(v107);
                  while ( __strex(v108 - 1, v107) );
                }
                else
                  v108 = (*v107)--;
                if ( v108 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v109);
              }
              ++v105;
            while ( v105 != (_DWORD *)HIDWORD(v103) );
          if ( (_DWORD)v103 )
            operator delete((void *)v103);
          *(_QWORD *)&v110 = *(_QWORD *)&v308;
          if ( v308 != v309 )
              v114 = (int *)(*(_DWORD *)v110 - 12);
              if ( v114 != &dword_28898C0 )
                v112 = (unsigned int *)(*(_DWORD *)v110 - 4);
                    v113 = __ldrex(v112);
                  while ( __strex(v113 - 1, v112) );
                  v113 = (*v112)--;
                if ( v113 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v114);
              v110 = (char *)v110 + 4;
            while ( v110 != v111 );
            v110 = v308;
          if ( v110 )
            operator delete(v110);
          v115 = (void *)(v307 - 12);
          if ( (int *)(v307 - 12) != &dword_28898C0 )
            v56 = (unsigned int *)(v307 - 4);
                v57 = __ldrex(v56);
              while ( __strex(v57 - 1, v56) );
              v57 = (*v56)--;
            if ( v57 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v115);
          sub_119C884((void **)&v305, "tags");
          v304 = v102;
          webjson::getFieldAsString(&v306, v46, &v305, &v304);
          v116 = (void *)(v304 - 12);
          if ( (int *)(v304 - 12) != &dword_28898C0 )
            v58 = (unsigned int *)(v304 - 4);
                v59 = __ldrex(v58);
              while ( __strex(v59 - 1, v58) );
              v59 = (*v58)--;
            if ( v59 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v116);
          v117 = (void *)(v305 - 12);
          if ( (int *)(v305 - 12) != &dword_28898C0 )
            v60 = (unsigned int *)(v305 - 4);
                v61 = __ldrex(v60);
              while ( __strex(v61 - 1, v60) );
              v61 = (*v60)--;
            if ( v61 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v117);
          if ( *(_DWORD *)(v306 - 12) )
            if ( HIDWORD(v313) == v314 )
              std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
                (unsigned __int64 *)&v313,
                &v306);
              sub_119C854((int *)HIDWORD(v313), &v306);
              HIDWORD(v313) += 4;
          sub_119C884((void **)&v302, "sort");
          v301 = v102;
          webjson::getFieldAsString(&v303, v46, &v302, &v301);
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)&v315,
            &v303);
          v118 = (void *)(v303 - 12);
          if ( (int *)(v303 - 12) != &dword_28898C0 )
            v62 = (unsigned int *)(v303 - 4);
                v63 = __ldrex(v62);
              while ( __strex(v63 - 1, v62) );
              v63 = (*v62)--;
            if ( v63 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v118);
          v119 = (void *)(v301 - 12);
          if ( (int *)(v301 - 12) != &dword_28898C0 )
            v64 = (unsigned int *)(v301 - 4);
                v65 = __ldrex(v64);
              while ( __strex(v65 - 1, v64) );
              v65 = (*v64)--;
            if ( v65 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v119);
          v120 = (void *)(v302 - 12);
          if ( (int *)(v302 - 12) != &dword_28898C0 )
            v66 = (unsigned int *)(v302 - 4);
                v67 = __ldrex(v66);
              while ( __strex(v67 - 1, v66) );
              v67 = (*v66)--;
            if ( v67 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v120);
          sub_119C884((void **)&v297, "itemOrder");
          webjson::getFieldAsStringArray((int)&v298, v46, &v297);
          *(_QWORD *)&v121 = *(_QWORD *)&v317;
          v123 = (int)v298;
          v298 = 0;
          v173 = v317 == v318;
          v317 = v123;
          v124 = v121;
          v125 = (int)v299;
          v299 = 0;
          v318 = v125;
          v319 = v300;
          v300 = 0;
              v128 = (int *)(*v124 - 12);
              if ( v128 != &dword_28898C0 )
                v126 = (unsigned int *)(*v124 - 4);
                    v127 = __ldrex(v126);
                  while ( __strex(v127 - 1, v126) );
                  v127 = (*v126)--;
                if ( v127 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v128);
              ++v124;
            while ( v124 != v122 );
          if ( v121 )
            operator delete(v121);
          *(_QWORD *)&v129 = *(_QWORD *)&v298;
          if ( v298 != v299 )
              v133 = (int *)(*(_DWORD *)v129 - 12);
              if ( v133 != &dword_28898C0 )
                v131 = (unsigned int *)(*(_DWORD *)v129 - 4);
                    v132 = __ldrex(v131);
                  while ( __strex(v132 - 1, v131) );
                  v132 = (*v131)--;
                if ( v132 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v133);
              v129 = (char *)v129 + 4;
            while ( v129 != v130 );
            v129 = v298;
          if ( v129 )
            operator delete(v129);
          v49 = (void *)v102;
          v134 = (void *)(v297 - 12);
          if ( (int *)(v297 - 12) != &dword_28898C0 )
            v68 = (unsigned int *)(v297 - 4);
                v69 = __ldrex(v68);
              while ( __strex(v69 - 1, v68) );
              v69 = (*v68)--;
            if ( v69 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v134);
          sub_119C884((void **)&v295, "creatorId");
          v294 = v102;
          webjson::getFieldAsString(&v296, v46, &v295, &v294);
            (int *)&v316,
            &v296);
          v135 = (void *)(v296 - 12);
          if ( (int *)(v296 - 12) != &dword_28898C0 )
            v70 = (unsigned int *)(v296 - 4);
                v71 = __ldrex(v70);
              while ( __strex(v71 - 1, v70) );
              v71 = (*v70)--;
            if ( v71 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v135);
          v136 = (void *)(v294 - 12);
          if ( (int *)(v294 - 12) != &dword_28898C0 )
            v72 = (unsigned int *)(v294 - 4);
                v73 = __ldrex(v72);
              while ( __strex(v73 - 1, v72) );
              v73 = (*v72)--;
            if ( v73 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v136);
          v137 = (void *)(v295 - 12);
          if ( (int *)(v295 - 12) != &dword_28898C0 )
            v74 = (unsigned int *)(v295 - 4);
                v75 = __ldrex(v74);
              while ( __strex(v75 - 1, v74) );
              v75 = (*v74)--;
            if ( v75 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v137);
          sub_119C884((void **)&v293, "isNavButtonQuery");
          v138 = webjson::getFieldAsBool(v46, &v293, 0);
          v139 = (void *)(v293 - 12);
          if ( (int *)(v293 - 12) != &dword_28898C0 )
            v76 = (unsigned int *)(v293 - 4);
                v77 = __ldrex(v76);
              while ( __strex(v77 - 1, v76) );
              v77 = (*v76)--;
            if ( v77 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v139);
          if ( v138 == 1 )
            sub_119C884((void **)&v291, "navButtonName");
            v290 = v102;
            webjson::getFieldAsString(&v292, v46, &v291, &v290);
            v140 = (void *)(v290 - 12);
            if ( (int *)(v290 - 12) != &dword_28898C0 )
              v80 = (unsigned int *)(v290 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v81 = __ldrex(v80);
                while ( __strex(v81 - 1, v80) );
              else
                v81 = (*v80)--;
              if ( v81 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v140);
            v141 = (void *)(v291 - 12);
            if ( (int *)(v291 - 12) != &dword_28898C0 )
              v82 = (unsigned int *)(v291 - 4);
                  v83 = __ldrex(v82);
                while ( __strex(v83 - 1, v82) );
                v83 = (*v82)--;
              if ( v83 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v141);
            if ( *(_DWORD *)(v292 - 12) )
              v142 = operator new(0x40u);
              SearchQuery::SearchQuery((int)v142, (int *)&CatalogContentType::DurableOffer);
              *((_DWORD *)v142 + 11) = v49;
              *((_DWORD *)v142 + 12) = 0;
              *((_DWORD *)v142 + 13) = 0;
              *((_DWORD *)v142 + 14) = 0;
              *((_DWORD *)v142 + 15) = v49;
              v143 = I18n::getCurrentLanguage(0);
              Localization::getFullLanguageCode((Localization *)&v289, v143);
              SearchQuery::setAcceptLanguage((char *)v142, &v289);
              v144 = (void *)(v289 - 12);
              if ( (int *)(v289 - 12) != &dword_28898C0 )
                v92 = (unsigned int *)(v289 - 4);
                    v93 = __ldrex(v92);
                  while ( __strex(v93 - 1, v92) );
                  v93 = (*v92)--;
                if ( v93 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v144);
              *(_QWORD *)&v145 = v313;
              if ( (_DWORD)v313 != HIDWORD(v313) )
                  SearchQuery::addTag((int)v142, v145);
                  ++v145;
                while ( v146 != v145 );
              std::vector<std::string,std::allocator<std::string>>::operator=((int)v142 + 48, (unsigned __int64 *)&v317);
              v49 = &unk_28898CC;
              EntityInteraction::setInteractText((int *)v142 + 15, (int *)&v315);
              v147 = (StoreSearchQuery **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<StoreSearchQuery,std::default_delete<StoreSearchQuery>>>,std::allocator<std::pair<std::string const,std::unique_ptr<StoreSearchQuery,std::default_delete<StoreSearchQuery>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                            v29 + 120,
                                            (int **)&v292);
              v148 = v147;
              v149 = *v147;
              *v148 = (StoreSearchQuery *)v142;
              if ( v149 )
                v150 = StoreSearchQuery::~StoreSearchQuery(v149);
                operator delete((void *)v150);
            v151 = (void *)(v292 - 12);
            if ( (int *)(v292 - 12) != &dword_28898C0 )
              v152 = (unsigned int *)(v292 - 4);
                  v100 = __ldrex(v152);
                while ( __strex(v100 - 1, v152) );
                v100 = (*v152)--;
              if ( v100 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v151);
          else
            sub_119C884((void **)&v287, "rowName");
            v286 = v102;
            webjson::getFieldAsString(&v288, v46, &v287, &v286);
            xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
              (int *)&v312,
              &v288);
            v153 = (void *)(v288 - 12);
            if ( (int *)(v288 - 12) != &dword_28898C0 )
              v84 = (unsigned int *)(v288 - 4);
                  v85 = __ldrex(v84);
                while ( __strex(v85 - 1, v84) );
                v85 = (*v84)--;
              if ( v85 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v153);
            v154 = (void *)(v286 - 12);
            if ( (int *)(v286 - 12) != &dword_28898C0 )
              v86 = (unsigned int *)(v286 - 4);
                  v87 = __ldrex(v86);
                while ( __strex(v87 - 1, v86) );
                v87 = (*v86)--;
              if ( v87 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v154);
            v155 = (void *)(v287 - 12);
            if ( (int *)(v287 - 12) != &dword_28898C0 )
              v88 = (unsigned int *)(v287 - 4);
                  v89 = __ldrex(v88);
                while ( __strex(v89 - 1, v88) );
                v89 = (*v88)--;
              if ( v89 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v155);
            sub_119C884((void **)&v285, "is_update_row");
            v156 = webjson::getFieldAsBool(v46, &v285, 0);
            v157 = (void *)(v285 - 12);
            if ( (int *)(v285 - 12) != &dword_28898C0 )
              v90 = (unsigned int *)(v285 - 4);
                  v91 = __ldrex(v90);
                while ( __strex(v91 - 1, v90) );
                v91 = (*v90)--;
              if ( v91 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v157);
            if ( v156 == 1 )
              EntityInteraction::setInteractText(*(int **)(v29 + 284), (int *)&v312);
              v158 = *(_DWORD *)(v29 + 284);
              sub_119C884((void **)&v283, "sort");
              sub_119C884((void **)&v282, "storepriority");
              webjson::getFieldAsString(&v284, v46, &v283, &v282);
              xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                (int *)(v158 + 4),
                &v284);
              v159 = (void *)(v284 - 12);
              if ( (int *)(v284 - 12) != &dword_28898C0 )
                v94 = (unsigned int *)(v284 - 4);
                    v95 = __ldrex(v94);
                  while ( __strex(v95 - 1, v94) );
                  v95 = (*v94)--;
                if ( v95 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v159);
              v160 = (void *)(v282 - 12);
              if ( (int *)(v282 - 12) != &dword_28898C0 )
                v96 = (unsigned int *)(v282 - 4);
                    v97 = __ldrex(v96);
                  while ( __strex(v97 - 1, v96) );
                  v97 = (*v96)--;
                if ( v97 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v160);
              v161 = (void *)(v283 - 12);
              if ( (int *)(v283 - 12) != &dword_28898C0 )
                v98 = (unsigned int *)(v283 - 4);
                    v99 = __ldrex(v98);
                  while ( __strex(v99 - 1, v98) );
                  v99 = (*v98)--;
                if ( v99 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v161);
              *(_DWORD *)(v29 + 276) = v241;
            v162 = std::__detail::_Map_base<std::string,std::pair<std::string const,QueryResponse::QueryListDocument>,std::allocator<std::pair<std::string const,QueryResponse::QueryListDocument>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     (unsigned __int64 *)v27 + 2,
                     (int **)&v312);
            EntityInteraction::setInteractText((int *)v162, (int *)&v311);
            EntityInteraction::setInteractText((int *)(v162 + 4), (int *)&v312);
            std::vector<std::string,std::allocator<std::string>>::operator=(v162 + 8, (unsigned __int64 *)&v313);
            EntityInteraction::setInteractText((int *)(v162 + 20), (int *)&v315);
            EntityInteraction::setInteractText((int *)(v162 + 24), (int *)&v316);
            std::vector<std::string,std::allocator<std::string>>::operator=(v162 + 28, (unsigned __int64 *)&v317);
            EntityInteraction::setInteractText((int *)(v162 + 40), (int *)&v320);
            EntityInteraction::setInteractText((int *)(v162 + 44), (int *)&v321);
            EntityInteraction::setInteractText((int *)(v162 + 48), (int *)&v322);
            EntityInteraction::setInteractText((int *)(v162 + 52), (int *)&v323);
          v47 = "searchCriteria";
          ++v241;
          v163 = (void *)(v306 - 12);
          if ( (int *)(v306 - 12) != &dword_28898C0 )
            v78 = (unsigned int *)(v306 - 4);
                v79 = __ldrex(v78);
              while ( __strex(v79 - 1, v78) );
              v79 = (*v78)--;
            if ( v79 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v163);
          QueryResponse::QueryListDocument::~QueryListDocument((QueryResponse::QueryListDocument *)&v311);
          v46 = (web::json::value *)((char *)v46 + 4);
          v48 = (void **)&v307;
        while ( v46 != v238 );
        v46 = v326;
        v164 = (int)v325;
        if ( v325 == v326 )
          v27 = &v335;
            if ( *(_DWORD *)v164 )
              (*(void (**)(void))(**(_DWORD **)v164 + 96))();
            *(_DWORD *)v164 = 0;
            v164 += 4;
          while ( v46 != (web::json::value *)v164 );
          v46 = v325;
      v28 = v239;
      if ( v46 )
        operator delete((void *)v46);
    v165 = *(ContentCatalogService **)(v29 + 4);
    v278 = (char *)&unk_28898CC;
    HydrateParams::HydrateParams(&v279, (int *)(v28 + 8), (int *)(v28 + 56), &v278);
    v166 = operator new(4u);
    LODWORD(v167) = sub_10ECEF8;
    *v166 = v29;
    HIDWORD(v167) = sub_10ECE90;
    v276 = v166;
    v277 = v167;
    ContentCatalogService::hydrateItem(v165, &v279, (int)&v276);
    if ( (_DWORD)v277 )
      ((void (*)(void))v277)();
    v168 = (void *)(v281 - 12);
    if ( (int *)(v281 - 12) != &dword_28898C0 )
      v229 = (unsigned int *)(v281 - 4);
          v230 = __ldrex(v229);
        while ( __strex(v230 - 1, v229) );
        v230 = (*v229)--;
      if ( v230 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v168);
    v169 = (void *)(v280 - 12);
    if ( (int *)(v280 - 12) != &dword_28898C0 )
      v231 = (unsigned int *)(v280 - 4);
          v232 = __ldrex(v231);
        while ( __strex(v232 - 1, v231) );
        v232 = (*v231)--;
      if ( v232 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v169);
    v170 = (void *)(v279 - 12);
    if ( (int *)(v279 - 12) != &dword_28898C0 )
      v233 = (unsigned int *)(v279 - 4);
          v234 = __ldrex(v233);
        while ( __strex(v234 - 1, v233) );
        v234 = (*v233)--;
      if ( v234 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v170);
    v171 = v278 - 12;
    if ( (int *)(v278 - 12) != &dword_28898C0 )
      v235 = (unsigned int *)(v278 - 4);
          v236 = __ldrex(v235);
        while ( __strex(v236 - 1, v235) );
        v236 = (*v235)--;
      if ( v236 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v171);
    if ( v332 )
      (*(void (**)(void))(*(_DWORD *)v332 + 96))();
  }
  v242 = v29;
  v243 = (int **)HIDWORD(v336);
  v172 = (int **)v336;
  if ( (_DWORD)v336 != HIDWORD(v336) )
    v237 = (unsigned __int64 *)(v27 + 16);
    do
      v244 = v172;
      v188 = sub_119C9A4(*v172, *(*v172 - 3), -955291385);
      v189 = v339;
      v190 = v188 % v339;
      v191 = *(int ***)(v338 + 4 * (v188 % v339));
      if ( v191 )
        v192 = *v191;
        v193 = (*v191)[16];
        v174 = *v244;
        while ( 1 )
          if ( v193 == v188 )
            v194 = (_DWORD *)v192[1];
            v195 = *(v174 - 3);
            if ( v195 == *(v194 - 3) && !memcmp(v174, v194, v195) )
              break;
          v196 = (int *)*v192;
          if ( *v192 )
            v193 = v196[16];
            v191 = (int **)v192;
            v192 = (int *)*v192;
            if ( v196[16] % v189 == v190 )
              continue;
          goto LABEL_385;
        v173 = v191 == 0;
        if ( v191 )
          v174 = *v191;
          v173 = *v191 == 0;
        if ( !v173 )
          SearchQuery::SearchQuery((int)&v261, (int *)&CatalogContentType::DurableOffer);
          v175 = (char *)&unk_28898CC;
          v271 = &unk_28898CC;
          v272 = 0;
          v273 = 0;
          v274 = 0;
          v275 = &unk_28898CC;
          v177 = (int *)(*((_QWORD *)v174 + 2) >> 32);
          for ( i = (int *)*((_QWORD *)v174 + 2); v177 != i; ++i )
            v175 = SearchQuery::addTag((int)&v261, i);
          v178 = I18n::getCurrentLanguage((I18n *)v175);
          Localization::getFullLanguageCode((Localization *)&v260, v178);
          SearchQuery::setAcceptLanguage((char *)&v261, &v260);
          v179 = (void *)(v260 - 12);
          if ( (int *)(v260 - 12) != &dword_28898C0 )
            v186 = (unsigned int *)(v260 - 4);
                v187 = __ldrex(v186);
              while ( __strex(v187 - 1, v186) );
              v187 = (*v186)--;
            if ( v187 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v179);
          EntityInteraction::setInteractText((int *)&v271, v174 + 3);
          std::vector<std::string,std::allocator<std::string>>::operator=((int)&v272, (unsigned __int64 *)(v174 + 9));
          EntityInteraction::setInteractText((int *)&v275, v174 + 7);
          v180 = std::__detail::_Map_base<std::string,std::pair<std::string const,QueryResponse::QueryListDocument>,std::allocator<std::pair<std::string const,QueryResponse::QueryListDocument>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                   v237,
                   v244);
          SearchQuery::setCreatorID((int)&v261, (int *)(v180 + 24));
          v181 = HIDWORD(v333);
          if ( HIDWORD(v333) == v334 )
            std::vector<StoreSearchQuery,std::allocator<StoreSearchQuery>>::_M_emplace_back_aux<StoreSearchQuery>(
              (unsigned __int64 *)&v333,
              (int)&v261);
            *(_DWORD *)HIDWORD(v333) = v261;
            v261 = &unk_28898CC;
            *(_DWORD *)(v181 + 4) = v262;
            v262 = &unk_28898CC;
            *(_DWORD *)(v181 + 8) = v263;
            v263 = &unk_28898CC;
            *(_DWORD *)(v181 + 12) = 0;
            *(_DWORD *)(v181 + 16) = 0;
            *(_DWORD *)(v181 + 20) = 0;
            *(_DWORD *)(v181 + 12) = v264;
            v264 = 0;
            v182 = *(_DWORD *)(v181 + 16);
            *(_DWORD *)(v181 + 16) = v265;
            v265 = v182;
            v183 = *(_DWORD *)(v181 + 20);
            *(_DWORD *)(v181 + 20) = v266;
            v266 = v183;
            *(_DWORD *)(v181 + 24) = v267;
            v267 = &unk_28898CC;
            *(_DWORD *)(v181 + 28) = v268;
            v268 = &unk_28898CC;
            *(_DWORD *)(v181 + 32) = v269;
            v269 = &unk_28898CC;
            *(_QWORD *)(v181 + 36) = v270;
            *(_DWORD *)(v181 + 44) = v271;
            v271 = &unk_28898CC;
            *(_DWORD *)(v181 + 48) = 0;
            *(_DWORD *)(v181 + 52) = 0;
            *(_DWORD *)(v181 + 56) = 0;
            *(_DWORD *)(v181 + 48) = v272;
            v272 = 0;
            v184 = *(_DWORD *)(v181 + 52);
            *(_DWORD *)(v181 + 52) = v273;
            v273 = v184;
            v185 = *(_DWORD *)(v181 + 56);
            *(_DWORD *)(v181 + 56) = v274;
            v274 = v185;
            *(_DWORD *)(v181 + 60) = v275;
            v275 = &unk_28898CC;
            HIDWORD(v333) = v181 + 64;
          StoreSearchQuery::~StoreSearchQuery((StoreSearchQuery *)&v261);
LABEL_385:
      v172 = v244 + 1;
    while ( v244 + 1 != v243 );
  v198 = HIDWORD(v333);
  HIDWORD(v197) = v333;
  v199 = HIDWORD(v333) - v333;
  v245 = HIDWORD(v333);
  if ( (HIDWORD(v333) - (signed int)v333) >> 6 )
    v200 = v242;
    v201 = v199 >> 6;
    v240 = (unsigned __int64 *)(v242 + 88);
    std::vector<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>,std::allocator<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>>>::reserve(
      v242 + 88,
      *(_DWORD *)(v242 + 280) + (v199 >> 6));
    *(_DWORD *)(v242 + 256) = v199 >> 6;
    if ( (unsigned int)(v199 >> 6) >= 0x40000000 )
      sub_119C9C4("vector::reserve");
    v202 = *(_DWORD *)(v242 + 244);
    if ( (*(_DWORD *)(v242 + 252) - v202) >> 2 < v201 )
      v203 = *(_DWORD *)(v242 + 248);
      v204 = (char *)operator new(v199 >> 4);
      v205 = v204;
      v206 = v203 - v202;
      if ( v206 )
        _aeabi_memmove4(v204, v202);
      v207 = *(void **)(v242 + 244);
      v208 = v206 >> 2;
      if ( v207 )
        operator delete(v207);
      *(_DWORD *)(v242 + 244) = v205;
      *(_DWORD *)(v242 + 248) = &v205[4 * v208];
      *(_DWORD *)(v242 + 252) = &v205[4 * v201];
    v209 = time(&timer);
    srand48(v209);
    LODWORD(v197) = HIDWORD(v197);
    if ( HIDWORD(v197) != v198 )
      v210 = 0;
      do
        if ( *(_DWORD *)(v200 + 276) == v210 )
          v215 = *(_QWORD *)(v200 + 92);
          if ( (_DWORD)v215 == HIDWORD(v215) )
            std::vector<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>,std::allocator<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>>>::_M_emplace_back_aux<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>> const&>(
              v240,
              v242 + 284);
            *(_DWORD *)v215 = *(_DWORD *)(v200 + 284);
            HIDWORD(v215) = *(_DWORD *)(v200 + 288);
            *(_DWORD *)(v215 + 4) = HIDWORD(v215);
            if ( HIDWORD(v215) )
              v217 = (unsigned int *)(v216 + 4);
                  v218 = __ldrex(v217);
                while ( __strex(v218 + 1, v217) );
                LODWORD(v215) = *(_DWORD *)(v200 + 92);
                ++*v217;
            *(_DWORD *)(v200 + 92) = v215 + 8;
        SearchQuery::setPlatform(SHIDWORD(v197), (int *)(v242 + 56));
        sub_119C854(&v252, (int *)(HIDWORD(v197) + 44));
        sub_119C854(v253, &v252);
        v253[1] = (int)&unk_28898CC;
        v253[2] = 0;
        v219 = 0;
        v253[3] = 0;
        v253[4] = 0;
        if ( !v210 )
          v219 = 1;
        v254 = v219;
        v255 = 0;
        v256 = 0;
        v249 = 0;
        v250 = 0;
        v251 = 0;
        std::__shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>,StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>(
          (int)&v257,
          (int)&v340,
          (int)v253,
          (int)&v249);
        v220 = *(_QWORD *)(v200 + 92);
        if ( (_DWORD)v220 == HIDWORD(v220) )
          std::vector<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>,std::allocator<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>>>::_M_emplace_back_aux<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>>(
            v240,
            (int)&v257);
          *(_QWORD *)v220 = v257;
          HIDWORD(v220) = v258;
          v258 = 0;
          *(_DWORD *)(v220 + 4) = HIDWORD(v220);
          v257 = 0;
          *(_DWORD *)(v200 + 92) = v220 + 8;
        v221 = v200;
        v222 = v258;
        if ( v258 )
          v223 = (unsigned int *)(v258 + 4);
          if ( &pthread_create )
            __dmb();
              v224 = __ldrex(v223);
            while ( __strex(v224 - 1, v223) );
            v224 = (*v223)--;
          if ( v224 == 1 )
            v225 = (unsigned int *)(v222 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v222 + 8))(v222);
                v226 = __ldrex(v225);
              while ( __strex(v226 - 1, v225) );
              v226 = (*v225)--;
            if ( v226 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v222 + 12))(v222);
        v200 = v221;
        if ( v249 )
          operator delete(v249);
        StoreRowData::~StoreRowData((StoreRowData *)v253);
        v227 = (void *)(v252 - 12);
        if ( (int *)(v252 - 12) != &dword_28898C0 )
          v213 = (unsigned int *)(v252 - 4);
          if ( a27 )
              v214 = __ldrex(v213);
            while ( __strex(v214 - 1, v213) );
            v214 = (*v213)--;
          if ( v214 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v227);
        LODWORD(v197) = *(_DWORD *)(*(_DWORD *)(v221 + 92) - 8);
        v247 = 0;
        v228 = operator new(4u);
        *v228 = v221;
        v246 = v228;
        v248 = sub_10ED3D0;
        v247 = (void (*)(void))sub_10ED3F8;
        StoreCatalogRepository::_sendQueryAndCreateRow(v221, SHIDWORD(v197), v197, (int)&v246);
        if ( v247 )
          v247();
        HIDWORD(v197) += 64;
        ++v210;
      while ( HIDWORD(v197) != v245 );
      v197 = v333;
  else
    v197 = v333;
    *(_BYTE *)(v242 + 243) = 0;
  if ( (_DWORD)v197 != HIDWORD(v197) )
    v211 = (StoreSearchQuery *)v197;
      v211 = (StoreSearchQuery *)((char *)StoreSearchQuery::~StoreSearchQuery(v211) + 64);
    while ( (StoreSearchQuery *)HIDWORD(v197) != v211 );
    HIDWORD(v197) = v197;
  if ( HIDWORD(v197) )
    operator delete((void *)HIDWORD(v197));
  return QueryResponse::~QueryResponse((QueryResponse *)&v335);
}


void __fastcall StoreCatalogRepository::fetchStoreItem(int a1, int a2, int *a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int *v6; // r6@1
  int v7; // r0@1
  void *v8; // r0@1
  void (__fastcall *v9)(int *, int, signed int); // r3@2
  void *v10; // r0@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  int v15; // [sp+0h] [bp-54h]@3
  void (*v16)(void); // [sp+8h] [bp-4Ch]@2
  int v17; // [sp+Ch] [bp-48h]@3
  int v18; // [sp+10h] [bp-44h]@1
  int v19[15]; // [sp+14h] [bp-40h]@1
  void *v20; // [sp+50h] [bp-4h]@1
  int v21; // [sp+54h] [bp+0h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  mce::UUID::asString((mce::UUID *)&v21);
  *(_BYTE *)std::__detail::_Map_base<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              v4 + 176,
              (int **)&v21) = 0;
  SearchQuery::SearchQuery((int)v19, v6);
  v19[11] = (int)&unk_28898CC;
  v19[12] = 0;
  v19[13] = 0;
  v19[14] = 0;
  v20 = &unk_28898CC;
  v7 = I18n::getCurrentLanguage((I18n *)&unk_28898CC);
  Localization::getFullLanguageCode((Localization *)&v18, v7);
  SearchQuery::setAcceptLanguage((char *)v19, &v18);
  v8 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  }
  SearchQuery::addTag((int)v19, &v21);
  v16 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
  if ( v9 )
    v9(&v15, v5, 2);
    v17 = *(_DWORD *)(v5 + 12);
    v16 = *(void (**)(void))(v5 + 8);
  StoreCatalogRepository::_sendQuery(v4, v19, (int)&v15);
  if ( v16 )
    v16();
  StoreSearchQuery::~StoreSearchQuery((StoreSearchQuery *)v19);
  v10 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v21 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
}


StoreCatalogItem *__fastcall StoreCatalogRepository::_addStoreCatalogItem(StoreCatalogRepository *this, const SearchResponseDocument *a2)
{
  const SearchResponseDocument *v2; // r7@1
  StoreCatalogRepository *v3; // r6@1
  unsigned __int64 *v4; // r8@1
  int **v5; // r9@1
  int v6; // r0@1
  StoreCatalogItem *v7; // r5@2
  const mce::UUID *v9; // r7@4
  __int64 v10; // kr00_8@4
  StoreCatalogItem *v11; // r4@5
  Entitlement *v12; // r0@5
  int v13; // r5@6
  int v14; // r6@6
  int v15; // r4@6
  unsigned int *v16; // r0@8
  unsigned int v17; // r1@10
  unsigned int *v18; // r1@14
  unsigned int v19; // r0@16
  unsigned int *v20; // r7@20
  unsigned int v21; // r0@22
  unsigned int *v22; // r1@29
  unsigned int v23; // r0@31
  unsigned int *v24; // r6@35
  unsigned int v25; // r0@37
  StoreCatalogItem *v26; // [sp+0h] [bp-28h]@4
  int v27; // [sp+4h] [bp-24h]@6
  char v28; // [sp+8h] [bp-20h]@4

  v2 = a2;
  v3 = this;
  v4 = (unsigned __int64 *)((char *)this + 60);
  v5 = (int **)((char *)a2 + 8);
  v6 = std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<StoreCatalogItem>>,std::allocator<std::pair<std::string const,std::shared_ptr<StoreCatalogItem>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)((char *)this + 60),
         (int **)a2 + 2);
  if ( v6 )
  {
    v7 = *(StoreCatalogItem **)(v6 + 8);
  }
  else
    std::__shared_ptr<StoreCatalogItem,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<StoreCatalogItem>,std::function<void ()(void)> &,void (&)(void)<ItemInstallState ()(std::vector<PackIdVersion,std::allocator<PackIdVersion>> const&)>>(
      (int)&v26,
      (int)&v28,
      (int)v3 + 208,
      (int)v3 + 224);
    StoreCatalogItem::setup(v26, v2);
    v10 = *(_QWORD *)StoreCatalogItem::getPackIdentities(v26);
    v9 = (const mce::UUID *)v10;
    if ( (_DWORD)v10 != HIDWORD(v10) )
    {
      do
      {
        v11 = v26;
        v12 = (Entitlement *)EntitlementManager::getEntitlement(*((EntitlementManager **)v3 + 2), v9);
        StoreCatalogItem::setEntitlement(v11, v12);
        v9 = (const mce::UUID *)((char *)v9 + 48);
      }
      while ( (const mce::UUID *)HIDWORD(v10) != v9 );
    }
    v13 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<StoreCatalogItem>>,std::allocator<std::pair<std::string const,std::shared_ptr<StoreCatalogItem>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v4,
            v5);
    *(_DWORD *)v13 = v26;
    v14 = *(_DWORD *)(v13 + 4);
    v15 = v27;
    if ( v27 != v14 )
      if ( v27 )
        v16 = (unsigned int *)(v27 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 + 1, v16) );
          v14 = *(_DWORD *)(v13 + 4);
        }
        else
          ++*v16;
      if ( v14 )
        v18 = (unsigned int *)(v14 + 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          v20 = (unsigned int *)(v14 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          if ( &pthread_create )
          {
            __dmb();
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
          }
          else
            v21 = (*v20)--;
          if ( v21 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
      *(_DWORD *)(v13 + 4) = v15;
      v15 = v27;
    v7 = v26;
    if ( v15 )
      v22 = (unsigned int *)(v15 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      else
        v23 = (*v22)--;
      if ( v23 == 1 )
        v24 = (unsigned int *)(v15 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  return v7;
}


void __fastcall StoreCatalogRepository::_sortCatalogRow(int a1, int a2)
{
  int v2; // r4@1
  int *v3; // r0@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = sub_119C854(&v7, (int *)(a2 + 4));
  StoreCatalogRepository::_sortCatalogRow(
    (int)v3,
    (unsigned __int64 *)(v2 + 24),
    (const void **)v3,
    (unsigned __int64 *)(v2 + 8));
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
}


void __fastcall StoreCatalogRepository::_prepRows(StoreCatalogRepository *this)
{
  StoreCatalogRepository *v1; // r4@1

  v1 = this;
  StoreCatalogRepository::_createCatalogUpdateRow(this);
  j_j_j__ZN22StoreCatalogRepository9_trimRowsEv(v1);
}


void __fastcall StoreCatalogRepository::~StoreCatalogRepository(StoreCatalogRepository *this)
{
  StoreCatalogRepository::~StoreCatalogRepository(this);
}


int __fastcall StoreCatalogRepository::getStoreCatalogItemByPackIdentity(StoreCatalogRepository *this, const mce::UUID *a2)
{
  int v2; // r10@1
  const mce::UUID *v3; // r9@1
  int v4; // r1@2
  __int64 v5; // kr00_8@2
  bool v6; // zf@3
  int result; // r0@8

  v2 = *((_DWORD *)this + 17);
  v3 = a2;
  if ( v2 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)StoreCatalogItem::getPackIdentities(*(StoreCatalogItem **)(v2 + 8));
      v4 = v5;
      if ( (_DWORD)v5 != HIDWORD(v5) )
        break;
LABEL_7:
      v2 = *(_DWORD *)v2;
      if ( !v2 )
        goto LABEL_8;
    }
      v6 = *(_QWORD *)v4 == *(_QWORD *)v3;
      if ( !(*(_QWORD *)v4 ^ *(_QWORD *)v3) )
        v6 = *(_QWORD *)(v4 + 8) == *((_QWORD *)v3 + 1);
      if ( v6 )
      v4 += 48;
      if ( HIDWORD(v5) == v4 )
        goto LABEL_7;
    result = *(_DWORD *)(v2 + 8);
  }
  else
LABEL_8:
    result = 0;
  return result;
}


void __fastcall StoreCatalogRepository::onEntitlementChanged(StoreCatalogRepository *this)
{
  StoreCatalogRepository *v1; // r4@1
  int v2; // r0@1
  int *v3; // r4@1
  int *v4; // r5@1
  __int64 v5; // kr00_8@1
  int v6; // t1@2

  v1 = this;
  StoreCatalogRepository::_sortCatalogRow((int)this, *((_DWORD *)this + 25));
  v5 = *((_QWORD *)v1 + 11);
  v3 = (int *)(*((_QWORD *)v1 + 11) >> 32);
  v4 = (int *)v5;
  while ( v3 != v4 )
  {
    v6 = *v4;
    v4 += 2;
    StoreCatalogRepository::_sortCatalogRow(v2, v6);
  }
}


signed int __fastcall StoreCatalogRepository::_onFileFetched(int a1, int a2, int a3)
{
  int v3; // r4@1
  signed int result; // r0@1
  int v5; // r3@1

  v3 = a1;
  result = *(_DWORD *)(a1 + 244);
  v5 = *(_DWORD *)(result + 4 * a2) - 1;
  *(_DWORD *)(result + 4 * a2) = v5;
  if ( !v5 )
  {
    if ( *(_DWORD *)(a3 + 8) )
      (*(void (__fastcall **)(int))(a3 + 12))(a3);
    result = 1;
    *(_BYTE *)(v3 + 241) = 1;
  }
  return result;
}


int __fastcall StoreCatalogRepository::_isRealmsDisabledForBeta(StoreCatalogRepository *this)
{
  return 0;
}


void __fastcall StoreCatalogRepository::_sortCatalogRow(int a1, unsigned __int64 *a2, const void **a3, unsigned __int64 *a4)
{
  StoreCatalogRepository::_sortCatalogRow(a1, a2, a3, a4);
}


int __fastcall StoreCatalogRepository::_sendQuery(int a1, int *a2, int a3)
{
  int v3; // r5@0
  ContentCatalogService *v4; // r9@1
  int v5; // r7@1
  void (__fastcall *v6)(int *, int, signed int); // r3@1
  int *v7; // r8@1
  int (__fastcall *v8)(int *, int *, signed int); // r7@2
  void *v9; // r0@4
  int result; // r0@4
  int v11; // [sp+0h] [bp-40h]@1
  int v12; // [sp+4h] [bp-3Ch]@2
  int (__fastcall *v13)(int *, int *, signed int); // [sp+Ch] [bp-34h]@1
  int v14; // [sp+10h] [bp-30h]@2
  void *v15; // [sp+14h] [bp-2Ch]@4
  int (*v16)(void); // [sp+1Ch] [bp-24h]@4
  void (__fastcall *v17)(int *, int); // [sp+20h] [bp-20h]@4

  v4 = *(ContentCatalogService **)(a1 + 4);
  v11 = a1;
  v5 = a3;
  v13 = 0;
  v6 = *(void (__fastcall **)(int *, int, signed int))(a3 + 8);
  v7 = a2;
  if ( v6 )
  {
    v6(&v12, a3, 2);
    v3 = *(_DWORD *)(v5 + 12);
    v14 = *(_DWORD *)(v5 + 12);
    v8 = *(int (__fastcall **)(int *, int *, signed int))(v5 + 8);
    v13 = v8;
  }
  else
    v8 = 0;
  v16 = 0;
  v9 = operator new(0x14u);
  *(_DWORD *)v9 = v11;
  *(_QWORD *)((char *)v9 + 4) = *(_QWORD *)&v12;
  *((_DWORD *)v9 + 3) = v8;
  *((_DWORD *)v9 + 4) = v3;
  v15 = v9;
  v16 = (int (*)(void))sub_10EAB88;
  v17 = sub_10EA788;
  result = ContentCatalogService::searchCatalog(v4, v7, (int)&v15);
  if ( v16 )
    result = v16();
  if ( v13 )
    result = v13(&v12, &v12, 3);
  return result;
}


            if ( StoreCatalogRepository::isItemFetched(v8, (int **)(v2 + 8)) == 1 )
{
              MinecraftScreenModel::leaveScreen((MinecraftScreenModel *)v1);
              v9 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(v1 + 12));
              v10 = (void *)StoreCatalogRepository::getStoreCatalogItemByProductId(v9, (const void **)(v2 + 8));
              StoreCatalogItemModel::StoreCatalogItemModel(&v17, v10);
              ClientInstance::navigateToPurchaseOfferScreen(
                *(_DWORD *)(v1 + 16),
                (StoreCatalogItemModel *)&v17,
                *(_DWORD *)(v2 + 20));
            }
            else
            {
              v11 = *(_DWORD *)(v2 + 12);
              sub_DA7F0C(&v18);
              v15 = *(_QWORD *)&v18 - *(_QWORD *)(v11 + 8);
              v12 = 1000000000LL * *(_QWORD *)(v11 + 16);
              v13 = 0;
              v14 = (unsigned int)v12 >= (unsigned int)v15;
              LODWORD(v15) = 0;
              if ( v14 )
                LODWORD(v15) = 1;
              if ( SHIDWORD(v12) >= SHIDWORD(v15) )
                v13 = 1;
              if ( HIDWORD(v12) == HIDWORD(v15) )
                v13 = v15;
              if ( !v13 )
                MinecraftScreenModel::leaveScreen((MinecraftScreenModel *)v1);
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v4);
            while ( __strex(result - 1, v4) );
          else
            result = (*v4)--;
          if ( result == 1 )
            v16 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v16);
              while ( __strex(result - 1, v16) );
              result = (*v16)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return result;
        }
      }
      else
      {
        __clrex();
        result = v5;
    }
  }
  return result;
}


int __fastcall StoreCatalogRepository::sendContentTypeButtonQuery(unsigned int a1, int **a2, int a3)
{
  unsigned int v3; // r4@1
  int v4; // r5@1
  int **v5; // r7@1
  int result; // r0@1
  int v7; // r6@2
  int v8; // r7@2
  void (__fastcall *v9)(char *, int, signed int); // r3@2
  char v10; // [sp+4h] [bp-24h]@3
  int (*v11)(void); // [sp+Ch] [bp-1Ch]@2
  int v12; // [sp+10h] [bp-18h]@3

  v3 = a1;
  v4 = a3;
  v5 = a2;
  result = std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<StoreSearchQuery,std::default_delete<StoreSearchQuery>>>,std::allocator<std::pair<std::string const,std::unique_ptr<StoreSearchQuery,std::default_delete<StoreSearchQuery>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             (unsigned __int64 *)(a1 + 120),
             a2);
  if ( result )
  {
    v7 = *(_DWORD *)(result + 8);
    v8 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>,std::allocator<std::pair<std::string const,std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (unsigned __int64 *)(v3 + 148),
           v5);
    v11 = 0;
    v9 = *(void (__fastcall **)(char *, int, signed int))(v4 + 8);
    if ( v9 )
    {
      v9(&v10, v4, 2);
      v12 = *(_DWORD *)(v4 + 12);
      v11 = *(int (**)(void))(v4 + 8);
    }
    result = StoreCatalogRepository::_sendQueryAndCreateRow(v3, v7, v8, (int)&v10);
    if ( v11 )
      result = v11();
  }
  return result;
}


int __fastcall StoreCatalogRepository::getDefaultContentQuery(int a1, int **a2)
{
  return *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<StoreSearchQuery,std::default_delete<StoreSearchQuery>>>,std::allocator<std::pair<std::string const,std::unique_ptr<StoreSearchQuery,std::default_delete<StoreSearchQuery>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                      a1 + 120,
                      a2);
}


StoreSearchQuery *__fastcall StoreCatalogRepository::fetchStoreComposition(StoreCatalogRepository *this)
{
  StoreCatalogRepository *v1; // r9@1
  StoreSearchQuery *result; // r0@1
  __int64 v3; // kr00_8@2
  int v4; // r4@3
  int v5; // r6@4
  unsigned int *v6; // r1@5
  unsigned int v7; // r0@7
  unsigned int *v8; // r5@11
  unsigned int v9; // r0@13
  int *v10; // r5@19
  __int64 v11; // kr08_8@19
  bool v12; // zf@19
  void *v13; // r0@23
  ContentCatalogService *v14; // r5@24
  _DWORD *v15; // r0@24
  __int64 v16; // r1@24
  unsigned int *v17; // r2@28
  signed int v18; // r1@30
  _DWORD *v19; // [sp+4h] [bp-7Ch]@24
  __int64 v20; // [sp+Ch] [bp-74h]@24
  int v21; // [sp+18h] [bp-68h]@23
  int v22[11]; // [sp+1Ch] [bp-64h]@19
  void *v23; // [sp+48h] [bp-38h]@19
  int v24; // [sp+4Ch] [bp-34h]@19
  int v25; // [sp+50h] [bp-30h]@19
  int v26; // [sp+54h] [bp-2Ch]@19
  void *v27; // [sp+58h] [bp-28h]@19

  v1 = this;
  result = (StoreSearchQuery *)*((_BYTE *)this + 243);
  if ( !result )
  {
    *((_BYTE *)v1 + 243) = 1;
    *((_DWORD *)v1 + 62) = *((_DWORD *)v1 + 61);
    v3 = *((_QWORD *)v1 + 11);
    if ( HIDWORD(v3) != (_DWORD)v3 )
    {
      v4 = v3;
      do
      {
        v5 = *(_DWORD *)(v4 + 4);
        if ( v5 )
        {
          v6 = (unsigned int *)(v5 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v7 = __ldrex(v6);
            while ( __strex(v7 - 1, v6) );
          }
          else
            v7 = (*v6)--;
          if ( v7 == 1 )
            v8 = (unsigned int *)(v5 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
            if ( &pthread_create )
            {
              __dmb();
              do
                v9 = __ldrex(v8);
              while ( __strex(v9 - 1, v8) );
            }
            else
              v9 = (*v8)--;
            if ( v9 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
        }
        v4 += 8;
      }
      while ( v4 != HIDWORD(v3) );
    }
    *((_DWORD *)v1 + 23) = v3;
    SearchQuery::SearchQuery((int)v22, (int *)&CatalogContentType::QueryManifest);
    v23 = &unk_28898CC;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = &unk_28898CC;
    v11 = *(_QWORD *)TreatmentService::getCurrentTreatments(*((TreatmentService **)v1 + 5));
    v10 = (int *)v11;
    v12 = HIDWORD(v11) == (_DWORD)v11;
    if ( HIDWORD(v11) != (_DWORD)v11 )
      v12 = (_DWORD)v11 == HIDWORD(v11);
    if ( !v12 )
        SearchQuery::addTag((int)v22, v10);
        ++v10;
      while ( (int *)HIDWORD(v11) != v10 );
    sub_119C884((void **)&v21, "mctestdefault");
    SearchQuery::addTag((int)v22, &v21);
    v13 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v21 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      else
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
    v14 = (ContentCatalogService *)*((_DWORD *)v1 + 1);
    v15 = operator new(4u);
    LODWORD(v16) = sub_10E99C6;
    *v15 = v1;
    HIDWORD(v16) = sub_10E99B0;
    v19 = v15;
    v20 = v16;
    ContentCatalogService::searchCatalog(v14, v22, (int)&v19);
    if ( (_DWORD)v20 )
      ((void (*)(void))v20)();
    result = StoreSearchQuery::~StoreSearchQuery((StoreSearchQuery *)v22);
  }
  return result;
}


signed int __fastcall StoreCatalogRepository::isStoreUpdateRowIndex(StoreCatalogRepository *this, int a2)
{
  int v2; // r2@2
  signed int result; // r0@4

  if ( a2 < 0 )
  {
    v2 = *((_QWORD *)this + 11);
    if ( (signed int)((*((_QWORD *)this + 11) >> 32) - v2) >> 3 <= a2 )
      return 0;
  }
  else
    v2 = *((_DWORD *)this + 22);
  result = *(_BYTE *)(*(_DWORD *)(v2 + 8 * a2) + 21);
  if ( *(_BYTE *)(*(_DWORD *)(v2 + 8 * a2) + 21) )
    result = 1;
  return result;
}


StoreSearchQuery *__fastcall StoreCatalogRepository::sendQueryAndCreateContentList(StoreSearchQuery *result, int *a2, int a3)
{
  int v3; // r4@1
  int *v4; // r6@1
  ContentCatalogService *v5; // r9@2
  void (__fastcall *v6)(int *, int, signed int); // r3@2
  void *v7; // r4@4
  __int64 v8; // r0@4
  StoreSearchQuery *v9; // [sp+0h] [bp-80h]@2
  int v10; // [sp+4h] [bp-7Ch]@2
  int v11; // [sp+44h] [bp-3Ch]@3
  void (__fastcall *v12)(int *, int *, signed int); // [sp+4Ch] [bp-34h]@2
  int v13; // [sp+50h] [bp-30h]@3
  void *v14; // [sp+54h] [bp-2Ch]@4
  void (*v15)(void); // [sp+5Ch] [bp-24h]@4
  void (__fastcall *v16)(int, int, int, int, int, int, int, int, int, int, int, int, int, char, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, void *, int, int, char, int, int, int, int, int, int, int, int, char, int, int, int, int, int, int, int, int); // [sp+60h] [bp-20h]@4

  v3 = a3;
  v4 = a2;
  if ( *(_DWORD *)(a3 + 8) )
  {
    v5 = (ContentCatalogService *)*((_DWORD *)result + 1);
    v9 = result;
    StoreSearchQuery::StoreSearchQuery(&v10, a2);
    v12 = 0;
    v6 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
    if ( v6 )
    {
      v6(&v11, v3, 2);
      v13 = *(_DWORD *)(v3 + 12);
      v12 = *(void (__fastcall **)(int *, int *, signed int))(v3 + 8);
    }
    v15 = 0;
    v7 = operator new(0x54u);
    *(_DWORD *)v7 = v9;
    StoreSearchQuery::StoreSearchQuery((int *)v7 + 1, &v10);
    v8 = *(_QWORD *)&v11;
    *(_QWORD *)&v11 = *(_QWORD *)((char *)v7 + 68);
    *(_QWORD *)((char *)v7 + 68) = v8;
    LODWORD(v8) = v12;
    *((_DWORD *)v7 + 19) = v8;
    HIDWORD(v8) = v13;
    v13 = *((_DWORD *)v7 + 20);
    *((_DWORD *)v7 + 20) = HIDWORD(v8);
    v14 = v7;
    v15 = (void (*)(void))sub_10EBD90;
    v16 = sub_10EAFE4;
    ContentCatalogService::searchCatalog(v5, v4, (int)&v14);
    if ( v15 )
      v15();
    if ( v12 )
      v12(&v11, &v11, 3);
    result = StoreSearchQuery::~StoreSearchQuery((StoreSearchQuery *)&v10);
  }
  return result;
}


void *__fastcall StoreCatalogRepository::getStoreScreenName(StoreCatalogRepository *this)
{
  char v1; // r0@1

  v1 = byte_27D6D2C;
  __dmb();
  if ( !(v1 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27D6D2C) )
  {
    sub_119C884((void **)&unk_27D6D28, "store_home_screen");
    _cxa_atexit(sub_21E6EDC);
    j___cxa_guard_release((unsigned int *)&byte_27D6D2C);
  }
  return &unk_27D6D28;
}


void __fastcall StoreCatalogRepository::onEntitlementChanged(StoreCatalogRepository *this)
{
  StoreCatalogRepository::onEntitlementChanged(this);
}


StoreSearchQuery *__fastcall StoreCatalogRepository::fetchStoreItem(int a1, int **a2, int *a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r0@1
  void *v7; // r0@1
  void (__fastcall *v8)(char *, int, signed int); // r3@2
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  char v12; // [sp+4h] [bp-6Ch]@3
  void (*v13)(void); // [sp+Ch] [bp-64h]@2
  int v14; // [sp+10h] [bp-60h]@3
  int v15; // [sp+14h] [bp-5Ch]@1
  int v16[15]; // [sp+18h] [bp-58h]@1
  void *v17; // [sp+54h] [bp-1Ch]@1

  v4 = a1;
  v5 = a4;
  *(_BYTE *)std::__detail::_Map_base<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              a1 + 176,
              a2) = 0;
  SearchQuery::SearchQuery((int)v16, a3);
  v16[11] = (int)&unk_28898CC;
  v16[12] = 0;
  v16[13] = 0;
  v16[14] = 0;
  v17 = &unk_28898CC;
  v6 = I18n::getCurrentLanguage((I18n *)&unk_28898CC);
  Localization::getFullLanguageCode((Localization *)&v15, v6);
  SearchQuery::setAcceptLanguage((char *)v16, &v15);
  v7 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v15 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v13 = 0;
  v8 = *(void (__fastcall **)(char *, int, signed int))(v5 + 8);
  if ( v8 )
    v8(&v12, v5, 2);
    v14 = *(_DWORD *)(v5 + 12);
    v13 = *(void (**)(void))(v5 + 8);
  StoreCatalogRepository::_sendQuery(v4, v16, (int)&v12);
  if ( v13 )
    v13();
  return StoreSearchQuery::~StoreSearchQuery((StoreSearchQuery *)v16);
}


void __fastcall StoreCatalogRepository::_sortCatalogRow(int a1, unsigned __int64 *a2, const void **a3, unsigned __int64 *a4)
{
  unsigned __int64 *v4; // r11@1
  unsigned __int64 *v5; // r8@1
  const void **v6; // r5@1
  double v7; // r0@2
  unsigned int v8; // r0@2
  int v9; // r7@4
  int *v10; // r4@4
  signed int v11; // r9@8
  int v12; // r4@14
  __int64 v13; // r6@14
  const void **v14; // r5@14
  const void **v15; // r10@14
  _DWORD *v16; // r0@17
  size_t v17; // r2@17
  int v18; // r8@22
  int *v19; // r0@26
  int v20; // r12@26
  unsigned int v21; // r1@26
  unsigned int v22; // r3@28
  unsigned int v23; // r2@28
  int *v24; // r4@33
  int *v25; // r3@35
  _DWORD *v26; // r1@35
  int v27; // r2@35
  int v28; // r2@36
  int v29; // r1@37
  int *v30; // r0@42
  _DWORD *v31; // r8@42
  int v32; // r12@42
  unsigned int v33; // r1@42
  unsigned int v34; // r3@44
  unsigned int v35; // r2@44
  int *v36; // r4@49
  int *v37; // r3@51
  _DWORD *v38; // r1@51
  int v39; // r2@51
  int v40; // r2@52
  char *v41; // r1@53
  char *v42; // r6@54
  int **v43; // r10@65
  unsigned int v44; // r5@65
  unsigned int v45; // r6@65
  unsigned int v46; // r4@65
  int v47; // r9@65
  int v48; // r8@66
  int v49; // r10@66
  _DWORD *v50; // r1@68
  size_t v51; // r2@68
  int v52; // r11@70
  int *v53; // r8@77
  _DWORD *v54; // r5@77 OVERLAPPED
  int v55; // r9@77
  unsigned int v56; // r1@77
  unsigned int v57; // r0@79
  unsigned int v58; // r4@79
  _DWORD *v59; // r1@86
  int *v60; // r0@86
  int v61; // r2@86
  int v62; // r2@87
  char *v63; // r1@88
  int v64; // r6@89 OVERLAPPED
  int *v65; // r8@92
  _DWORD *v66; // r5@92 OVERLAPPED
  int v67; // r9@92
  unsigned int v68; // r1@92
  unsigned int v69; // r0@94
  unsigned int v70; // r4@94
  _DWORD *v71; // r1@101
  int *v72; // r0@101
  int v73; // r2@101
  int v74; // r2@102
  char *v75; // r1@103
  int v76; // r6@104 OVERLAPPED
  bool v77; // zf@109
  _DWORD *v78; // r9@120
  int v79; // r7@122
  char *v80; // r5@122
  int v81; // r6@123
  unsigned __int32 v82; // r0@123
  unsigned int v83; // r0@125
  _DWORD *v84; // r9@126
  int v85; // r7@128
  char *v86; // r5@128
  int v87; // r6@129
  unsigned __int32 v88; // r0@129
  unsigned int v89; // r0@131
  int *v90; // r4@132
  __int64 v91; // kr18_8@132
  __int64 v92; // kr20_8@132
  unsigned int v93; // r6@132
  unsigned __int64 *v94; // r6@140
  unsigned int *v95; // r2@142
  signed int v96; // r1@144
  unsigned __int64 *v97; // r5@150
  int v98; // r1@150
  void *v99; // r0@150
  signed int v100; // [sp+8h] [bp-80h]@64
  signed int i; // [sp+Ch] [bp-7Ch]@64
  unsigned int v102; // [sp+10h] [bp-78h]@15
  unsigned int v103; // [sp+14h] [bp-74h]@15
  int v104; // [sp+18h] [bp-70h]@33
  int v105; // [sp+18h] [bp-70h]@49
  int v106; // [sp+18h] [bp-70h]@64
  void *s1; // [sp+1Ch] [bp-6Ch]@32
  void *s1a; // [sp+1Ch] [bp-6Ch]@48
  int *s1b; // [sp+1Ch] [bp-6Ch]@66
  char v110; // [sp+20h] [bp-68h]@58
  void *v111; // [sp+28h] [bp-60h]@5
  unsigned int v112; // [sp+2Ch] [bp-5Ch]@2
  unsigned __int64 *v113; // [sp+30h] [bp-58h]@2
  int v114; // [sp+34h] [bp-54h]@2
  signed int v115; // [sp+38h] [bp-50h]@2
  int v116; // [sp+3Ch] [bp-4Ch]@2
  int v117; // [sp+40h] [bp-48h]@117
  void *ptr; // [sp+44h] [bp-44h]@2
  char *v119; // [sp+48h] [bp-40h]@2
  char *v120; // [sp+4Ch] [bp-3Ch]@2
  void *v121; // [sp+50h] [bp-38h]@2
  char *v122; // [sp+54h] [bp-34h]@2
  char *v123; // [sp+58h] [bp-30h]@2

  v4 = a2;
  v5 = a4;
  v6 = a3;
  if ( *a2 >> 32 != (unsigned int)*a2 )
  {
    v122 = 0;
    v123 = 0;
    ptr = 0;
    v119 = 0;
    v120 = 0;
    v121 = 0;
    v113 = 0;
    v114 = 0;
    v115 = 1065353216;
    v116 = 0;
    HIDWORD(v7) = 10;
    LODWORD(v7) = &v115;
    v8 = sub_119C844(v7);
    v112 = v8;
    if ( v8 == 1 )
    {
      v10 = &v117;
      v117 = 0;
    }
    else
      if ( v8 >= 0x40000000 )
        sub_119C874();
      v9 = 4 * v8;
      v10 = (int *)operator new(4 * v8);
      _aeabi_memclr4(v10, v9);
    v111 = v10;
    if ( sub_119C9E8(v6, "storepriority") )
      if ( sub_119C9E8(v6, "atoz") )
      {
        if ( sub_119C9E8(v6, "ztoa") )
        {
          v11 = 4;
          if ( !sub_119C9E8(v6, "random") )
            v11 = 3;
        }
        else
          v11 = 2;
      }
      else
        v11 = 1;
      v11 = 0;
    v12 = *v4 >> 32;
    HIDWORD(v13) = *v4;
    v15 = (const void **)(*v5 >> 32);
    v14 = (const void **)*v5;
    if ( v14 == v15 )
      v103 = 0;
      v102 = 0;
      do
        if ( HIDWORD(v13) != v12 )
          while ( 1 )
          {
            v16 = *(_DWORD **)StoreCatalogItemModel::getProductId((StoreCatalogItemModel *)HIDWORD(v13));
            v17 = *(v16 - 3);
            if ( v17 == *((_DWORD *)*v14 - 3) && !memcmp(v16, *v14, v17) )
              break;
            HIDWORD(v13) += 4;
            if ( v12 == HIDWORD(v13) )
              goto LABEL_59;
          }
          if ( StoreCatalogItemModel::isOwned((StoreCatalogItemModel *)HIDWORD(v13)) == 1 )
            v18 = (int)v119;
            if ( v119 == v120 )
            {
              v19 = (int *)ptr;
              LODWORD(v13) = 0;
              v20 = (v119 - (_BYTE *)ptr) >> 2;
              v21 = (v119 - (_BYTE *)ptr) >> 2;
              if ( !v20 )
                v21 = 1;
              v23 = v21 + ((v119 - (_BYTE *)ptr) >> 2);
              v22 = v23;
              if ( 0 != v23 >> 30 )
                v23 = 0x3FFFFFFF;
              if ( v22 < v21 )
              s1 = (void *)v23;
              if ( v23 )
              {
                v24 = (int *)ptr;
                v104 = (v119 - (_BYTE *)ptr) >> 2;
                if ( v23 >= 0x40000000 )
                  sub_119C874();
                LODWORD(v13) = operator new(4 * v23);
                v20 = v104;
                v19 = v24;
              }
              v25 = v19;
              *(_DWORD *)(v13 + 4 * v20) = *(_DWORD *)HIDWORD(v13);
              v26 = (_DWORD *)v13;
              v27 = v13;
              if ( v19 != (int *)v18 )
                do
                {
                  v28 = *v25;
                  ++v25;
                  *v26 = v28;
                  ++v26;
                }
                while ( (int *)v18 != v25 );
                v29 = ((v18 - 4 - (_DWORD)v19) & 0xFFFFFFFC) + v13;
                v19 = (int *)ptr;
                v27 = v29 + 4;
              HIDWORD(v13) = v27 + 4;
              if ( v19 )
                operator delete(v19);
              *(_QWORD *)&ptr = v13;
              v120 = (char *)(v13 + 4 * (_DWORD)s1);
            }
            else
              *(_DWORD *)v119 = *(_DWORD *)HIDWORD(v13);
              v119 = (char *)(v18 + 4);
            ++v102;
          else
            LODWORD(v13) = v122;
            if ( v122 == v123 )
              v30 = (int *)v121;
              v31 = 0;
              v32 = (v122 - (_BYTE *)v121) >> 2;
              v33 = (v122 - (_BYTE *)v121) >> 2;
              if ( !v32 )
                v33 = 1;
              v35 = v33 + ((v122 - (_BYTE *)v121) >> 2);
              v34 = v35;
              if ( 0 != v35 >> 30 )
                v35 = 0x3FFFFFFF;
              if ( v34 < v33 )
              s1a = (void *)v35;
              if ( v35 )
                v36 = (int *)v121;
                v105 = (v122 - (_BYTE *)v121) >> 2;
                if ( v35 >= 0x40000000 )
                v31 = operator new(4 * v35);
                v32 = v105;
                v30 = v36;
              v37 = v30;
              v31[v32] = *(_DWORD *)HIDWORD(v13);
              v38 = v31;
              v39 = (int)v31;
              if ( v30 != (int *)v13 )
                  v40 = *v37;
                  ++v37;
                  *v38 = v40;
                  ++v38;
                while ( (int *)v13 != v37 );
                v41 = (char *)v31 + ((v13 - 4 - (_DWORD)v30) & 0xFFFFFFFC);
                v30 = (int *)v121;
                v39 = (int)(v41 + 4);
              v42 = (char *)(v39 + 4);
              if ( v30 )
                operator delete(v30);
              v121 = v31;
              v122 = v42;
              v123 = (char *)&v31[(_DWORD)s1a];
              *(_DWORD *)v122 = *(_DWORD *)HIDWORD(v13);
              v122 = (char *)(v13 + 4);
            ++v103;
          std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert<std::string const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::string,true>>>>(
            (int *)&v110,
            (unsigned __int64 *)&v111,
            (int **)v14);
LABEL_59:
        v12 = *v4 >> 32;
        HIDWORD(v13) = *v4;
        ++v14;
      while ( v14 != v15 );
    v106 = v12;
    v100 = v11;
    for ( i = (signed int)v4; HIDWORD(v13) != v106; HIDWORD(v13) += 4 )
      v43 = (int **)StoreCatalogItemModel::getProductId((StoreCatalogItemModel *)HIDWORD(v13));
      v44 = sub_119C9A4(*v43, *(*v43 - 3), -955291385);
      v45 = v112;
      v46 = v44 % v112;
      v47 = *((_DWORD *)v111 + v44 % v112);
      if ( v47 )
        v48 = *(_DWORD *)v47;
        s1b = *v43;
        v49 = *(_DWORD *)(*(_DWORD *)v47 + 8);
        while ( 1 )
          if ( v49 == v44 )
            v50 = *(_DWORD **)(v48 + 4);
            v51 = *(s1b - 3);
            if ( v51 == *(v50 - 3) && !memcmp(s1b, v50, v51) )
          v52 = *(_DWORD *)v48;
          if ( *(_DWORD *)v48 )
            v49 = *(_DWORD *)(v52 + 8);
            v47 = v48;
            v48 = *(_DWORD *)v48;
            if ( *(_DWORD *)(v52 + 8) % v45 == v46 )
              continue;
          goto LABEL_72;
        v77 = v47 == 0;
        if ( v47 )
          v77 = *(_DWORD *)v47 == 0;
        if ( !v77 )
          continue;
LABEL_72:
      if ( StoreCatalogItemModel::isOwned((StoreCatalogItemModel *)HIDWORD(v13)) == 1 )
        LODWORD(v13) = v119;
        if ( v119 == v120 )
          v53 = (int *)ptr;
          v54 = 0;
          v55 = (v119 - (_BYTE *)ptr) >> 2;
          v56 = (v119 - (_BYTE *)ptr) >> 2;
          if ( !v55 )
            v56 = 1;
          v57 = v56 + ((v119 - (_BYTE *)ptr) >> 2);
          v58 = v56 + ((v119 - (_BYTE *)ptr) >> 2);
          if ( 0 != v57 >> 30 )
            v58 = 0x3FFFFFFF;
          if ( v57 < v56 )
          if ( v58 )
            if ( v58 >= 0x40000000 )
              sub_119C874();
            v54 = operator new(4 * v58);
          v59 = v54;
          v54[v55] = *(_DWORD *)HIDWORD(v13);
          v60 = v53;
          v61 = (int)v54;
          if ( v53 != (int *)v13 )
            do
              v62 = *v60;
              ++v60;
              *v59 = v62;
              ++v59;
            while ( (int *)v13 != v60 );
            v63 = (char *)v54 + ((v13 - 4 - (_DWORD)v53) & 0xFFFFFFFC);
            v53 = (int *)ptr;
            v61 = (int)(v63 + 4);
          v64 = v61 + 4;
          if ( v53 )
            operator delete(v53);
          *(_QWORD *)&ptr = *(_QWORD *)&v54;
          v120 = (char *)&v54[v58];
          *(_DWORD *)v119 = *(_DWORD *)HIDWORD(v13);
          v119 = (char *)(v13 + 4);
        LODWORD(v13) = v122;
        if ( v122 == v123 )
          v65 = (int *)v121;
          v66 = 0;
          v67 = (v122 - (_BYTE *)v121) >> 2;
          v68 = (v122 - (_BYTE *)v121) >> 2;
          if ( !v67 )
            v68 = 1;
          v69 = v68 + ((v122 - (_BYTE *)v121) >> 2);
          v70 = v68 + ((v122 - (_BYTE *)v121) >> 2);
          if ( 0 != v69 >> 30 )
            v70 = 0x3FFFFFFF;
          if ( v69 < v68 )
          if ( v70 )
            if ( v70 >= 0x40000000 )
            v66 = operator new(4 * v70);
          v71 = v66;
          v66[v67] = *(_DWORD *)HIDWORD(v13);
          v72 = v65;
          v73 = (int)v66;
          if ( v65 != (int *)v13 )
              v74 = *v72;
              ++v72;
              *v71 = v74;
              ++v71;
            while ( (int *)v13 != v72 );
            v75 = (char *)v66 + ((v13 - 4 - (_DWORD)v65) & 0xFFFFFFFC);
            v65 = (int *)v121;
            v73 = (int)(v75 + 4);
          v76 = v73 + 4;
          if ( v65 )
            operator delete(v65);
          *(_QWORD *)&v121 = *(_QWORD *)&v66;
          v123 = (char *)&v66[v70];
          *(_DWORD *)v122 = *(_DWORD *)HIDWORD(v13);
          v122 = (char *)(v13 + 4);
    switch ( v100 )
      case 0:
        sub_10E8038((StoreCatalogItemModel *)&v121, v103);
        sub_10E8038((StoreCatalogItemModel *)&ptr, v102);
        break;
      case 1:
        sub_10E80DC((StoreCatalogItemModel *)&v121, v103);
        sub_10E80DC((StoreCatalogItemModel *)&ptr, v102);
      case 2:
        sub_10E8242((StoreCatalogItemModel *)&v121, v103);
        sub_10E8242((StoreCatalogItemModel *)&ptr, v102);
      case 3:
        v78 = v121;
        if ( v121 != v122 && ((v122 - (_BYTE *)v121) >> 2) - 1 > v103 )
          v79 = (v122 - (_BYTE *)v121) >> 2;
          v80 = (char *)v121 - 4;
          do
            v81 = *(_DWORD *)&v80[4 * v79];
            v82 = v103 + lrand48() % (v79 - v103);
            if ( v79 - 1 != v82 )
              *(_DWORD *)&v80[4 * v79] = v78[v82];
              v78[v82] = v81;
            v83 = v79-- - 2;
          while ( v83 > v103 );
        v84 = ptr;
        if ( ptr != v119 && ((v119 - (_BYTE *)ptr) >> 2) - 1 > v102 )
          v85 = (v119 - (_BYTE *)ptr) >> 2;
          v86 = (char *)ptr - 4;
            v87 = *(_DWORD *)&v86[4 * v85];
            v88 = v102 + lrand48() % (v85 - v102);
            if ( v85 - 1 != v88 )
              *(_DWORD *)&v86[4 * v85] = v84[v88];
              v84[v88] = v87;
            v89 = v85-- - 2;
          while ( v89 > v102 );
      default:
    v90 = *(int **)i;
    *(_DWORD *)(i + 4) = *(_DWORD *)i;
    v91 = *(_QWORD *)&ptr;
    v92 = *(_QWORD *)&v121;
    v93 = ((v119 - (_BYTE *)ptr) >> 2) + ((v122 - (_BYTE *)v121) >> 2);
    if ( v93 >= 0x40000000 )
      sub_119C9C4("vector::reserve");
    if ( (*(_DWORD *)(i + 8) - (signed int)v90) >> 2 < v93 )
      if ( v93 )
        v90 = (int *)operator new(4 * v93);
        v90 = 0;
      if ( *(_DWORD *)i )
        operator delete(*(void **)i);
      *(_DWORD *)i = v90;
      *(_DWORD *)(i + 4) = v90;
      *(_DWORD *)(i + 8) = &v90[v93];
    std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>::_M_range_insert<__gnu_cxx::__normal_iterator<StoreCatalogItemModel*,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>(
      i,
      v90,
      (int *)v92,
      (int *)HIDWORD(v92));
      *(int **)(i + 4),
      (int *)v91,
      (int *)HIDWORD(v91));
    v94 = v113;
    while ( v94 )
      v97 = v94;
      v98 = *v94 >> 32;
      v94 = (unsigned __int64 *)*v94;
      v99 = (void *)(v98 - 12);
      if ( (int *)(v98 - 12) != &dword_28898C0 )
        v95 = (unsigned int *)(v98 - 4);
        if ( &pthread_create )
          __dmb();
            v96 = __ldrex(v95);
          while ( __strex(v96 - 1, v95) );
          v96 = (*v95)--;
        if ( v96 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v99);
      operator delete(v97);
    _aeabi_memclr4(v111, 4 * v112);
    if ( v111 && &v117 != v111 )
      operator delete(v111);
    if ( ptr )
      operator delete(ptr);
    if ( v121 )
      operator delete(v121);
  }
}


int __fastcall StoreCatalogRepository::getStoreCatalogItemByPackIdentity(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r4@1
  int result; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  signed int v11; // r8@28
  void *v12; // r0@32
  void *v13; // r0@33
  void *v14; // r0@34
  __int64 v15; // [sp+0h] [bp-58h]@27
  __int64 v16; // [sp+8h] [bp-50h]@28
  int v17; // [sp+18h] [bp-40h]@11
  int v18; // [sp+1Ch] [bp-3Ch]@7
  int v19; // [sp+20h] [bp-38h]@3

  v2 = *(_DWORD *)(a1 + 68);
  v3 = a2;
  result = 0;
  if ( v2 )
  {
    while ( 1 )
    {
      StoreCatalogItem::getPackIdentity((StoreCatalogItem *)&v15, *(_DWORD *)(v2 + 8));
      if ( *(_QWORD *)v3 ^ v15 )
      {
        v11 = 0;
      }
      else
        if ( !(*(_QWORD *)(v3 + 8) ^ v16) )
          v11 = 1;
      v12 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v5 = (unsigned int *)(v19 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v12);
      v13 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v18 - 4);
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v13);
      v14 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v17 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v14);
      if ( v11 == 1 )
        break;
      v2 = *(_DWORD *)v2;
      if ( !v2 )
        return 0;
    }
    result = *(_DWORD *)(v2 + 8);
  }
  return result;
}


int __fastcall StoreCatalogRepository::_onFileFetched(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int result; // r0@1
  int v7; // r3@1

  v4 = a1;
  v5 = a4;
  result = *(_DWORD *)(a1 + 244);
  v7 = *(_DWORD *)(result + 4 * a2) - 1;
  *(_DWORD *)(result + 4 * a2) = v7;
  if ( !v7 )
  {
    StoreCatalogRepository::_sortCatalogRow(result, a3);
    if ( *(_DWORD *)(v5 + 8) )
      (*(void (__fastcall **)(int))(v5 + 12))(v5);
    result = 1;
    *(_BYTE *)(v4 + 241) = 1;
  }
  return result;
}


void __fastcall StoreCatalogRepository::_sortCatalogRow(int a1, int a2)
{
  StoreCatalogRepository::_sortCatalogRow(a1, a2);
}


void __fastcall StoreCatalogRepository::_trimRows(StoreCatalogRepository *this)
{
  StoreCatalogRepository::_trimRows(this);
}


void __fastcall StoreCatalogRepository::updateStoreCatalogUpdateRow(StoreCatalogRepository *this)
{
  StoreCatalogRepository *v1; // r4@1

  v1 = this;
  StoreCatalogRepository::_createCatalogUpdateRow(this);
  j_j_j__ZN22StoreCatalogRepository9_trimRowsEv(v1);
}


void __fastcall StoreCatalogRepository::getStoreDictionaryString(int *a1, int a2, int *a3)
{
  StoreCatalogRepository::getStoreDictionaryString(a1, a2, a3);
}


int __fastcall StoreCatalogRepository::_sendQueryAndCreateRow(unsigned int a1, int a2, unsigned int a3, int a4)
{
  int v4; // r5@1
  unsigned int v5; // r4@1
  unsigned int v6; // r6@1
  int v7; // r7@1
  ContentCatalogService *v8; // r8@1
  void (__fastcall *v9)(int *, int, signed int); // r3@1
  int (__fastcall *v10)(int *, int *, signed int); // r7@2
  _QWORD *v11; // r0@4
  int result; // r0@4
  unsigned __int64 v13; // [sp+0h] [bp-48h]@1
  int v14; // [sp+8h] [bp-40h]@2
  int (__fastcall *v15)(int *, int *, signed int); // [sp+10h] [bp-38h]@1
  int v16; // [sp+14h] [bp-34h]@2
  _QWORD *v17; // [sp+1Ch] [bp-2Ch]@4
  int (*v18)(void); // [sp+24h] [bp-24h]@4
  void (__fastcall *v19)(int *, int); // [sp+28h] [bp-20h]@4

  v4 = a2;
  v5 = a3;
  v6 = a1;
  v7 = a4;
  std::vector<std::string,std::allocator<std::string>>::operator=(a3 + 8, (unsigned __int64 *)(a2 + 48));
  EntityInteraction::setInteractText((int *)(v5 + 4), (int *)(v4 + 60));
  v8 = *(ContentCatalogService **)(v6 + 4);
  v13 = __PAIR__(v5, v6);
  v15 = 0;
  v9 = *(void (__fastcall **)(int *, int, signed int))(v7 + 8);
  if ( v9 )
  {
    v9(&v14, v7, 2);
    v6 = *(_DWORD *)(v7 + 12);
    v16 = *(_DWORD *)(v7 + 12);
    v10 = *(int (__fastcall **)(int *, int *, signed int))(v7 + 8);
    v15 = v10;
  }
  else
    v10 = 0;
  v18 = 0;
  v11 = operator new(0x18u);
  *v11 = v13;
  v11[1] = *(_QWORD *)&v14;
  *((_DWORD *)v11 + 4) = v10;
  *((_DWORD *)v11 + 5) = v6;
  v17 = v11;
  v18 = (int (*)(void))sub_10EC9EC;
  v19 = sub_10EC570;
  result = ContentCatalogService::searchCatalog(v8, (int *)v4, (int)&v17);
  if ( v18 )
    result = v18();
  if ( v15 )
    result = v15(&v14, &v14, 3);
  return result;
}


int *__fastcall StoreCatalogRepository::_filterDocument(int a1, int a2)
{
  _DWORD *v2; // r9@1
  int *v3; // r8@1
  int *i; // r10@1
  const void **v5; // r4@3
  const void **v6; // r7@3
  const void **v7; // r5@8
  const void **v8; // r7@8
  char v9; // r4@9
  bool v10; // zf@10
  char v11; // r0@10
  char v12; // r0@15
  int *result; // r0@18

  v2 = (_DWORD *)a2;
  v3 = (int *)(*(_QWORD *)(a2 + 4) >> 32);
  for ( i = (int *)*(_QWORD *)(a2 + 4); i != v3; i += 17 )
  {
    if ( *v2 < 3 )
    {
      if ( *v2 != 2 )
        return i;
      v7 = (const void **)(*(_QWORD *)(i + 7) >> 32);
      v8 = (const void **)*(_QWORD *)(i + 7);
      if ( v8 == v7 )
      v9 = 0;
      do
      {
        v10 = sub_119C9E8(v8, "mctestdefault") == 0;
        v11 = 0;
        if ( v10 )
          v11 = 1;
        ++v8;
        v9 |= v11;
      }
      while ( v7 != v8 );
      if ( !(v9 & 1) )
    }
    else
      v5 = (const void **)(*(_QWORD *)(i + 7) >> 32);
      v6 = (const void **)*(_QWORD *)(i + 7);
      if ( v6 != v5 )
        while ( sub_119C9E8(v6, "mctestdefault") )
        {
          ++v6;
          if ( v5 == v6 )
            goto LABEL_14;
        }
LABEL_14:
    ;
  }
  v12 = byte_27D6D30;
  __dmb();
  if ( v12 & 1 )
    result = &dword_27D6DA0;
  else
    if ( j___cxa_guard_acquire((unsigned int *)&byte_27D6D30) )
      i = &dword_27D6DA0;
      dword_27D6DA0 = 0;
      unk_27D6DA4 = &unk_28898CC;
      unk_27D6DA8 = &unk_28898CC;
      unk_27D6DAC = &unk_28898CC;
      unk_27D6DB0 = &unk_28898CC;
      unk_27D6DB4 = &unk_28898CC;
      unk_27D6DB8 = &unk_28898CC;
      unk_27D6DBC = 0;
      unk_27D6DC0 = 0;
      unk_27D6DC4 = 0;
      unk_27D6DC8 = &unk_28898CC;
      unk_27D6DCC = &unk_28898CC;
      unk_27D6DD0 = &unk_28898CC;
      unk_27D6DD4 = &unk_28898CC;
      unk_27D6DD8 = &unk_28898CC;
      unk_27D6DDC = &unk_28898CC;
      unk_27D6DE0 = &unk_28898CC;
      _cxa_atexit(SearchResponseDocument::~SearchResponseDocument);
      j___cxa_guard_release((unsigned int *)&byte_27D6D30);
      return i;
  return result;
}


void __fastcall StoreCatalogRepository::getStoreDictionaryString(int *a1, int a2, int *a3)
{
  StoreCatalogDictionary::getLocalizedText(a1, (web::json::value **)(a2 + 260), a3);
}


void __fastcall StoreCatalogRepository::fetchStoreItem(int a1, int a2, int *a3, int a4)
{
  StoreCatalogRepository::fetchStoreItem(a1, a2, a3, a4);
}


StoreCatalogRepository *__fastcall StoreCatalogRepository::~StoreCatalogRepository(StoreCatalogRepository *this)
{
  StoreCatalogRepository *v1; // r8@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r4@8
  unsigned int v6; // r0@10
  int v7; // r1@15
  void *v8; // r0@15
  void *v9; // r5@16
  void *v10; // r0@20
  void (*v11)(void); // r3@22
  void (*v12)(void); // r3@24
  StoreCatalogItem *v13; // r0@26
  StoreCatalogItem *v14; // r0@27
  unsigned __int64 *v15; // r7@28
  unsigned int *v16; // r2@30
  signed int v17; // r1@32
  unsigned __int64 *v18; // r6@38
  int v19; // r1@38
  void *v20; // r0@38
  char *v21; // r0@40
  int v22; // r4@43
  unsigned int *v23; // r2@45
  signed int v24; // r1@47
  int v25; // r6@53
  void *v26; // r0@53
  int v27; // r1@55
  void *v28; // r0@55
  char *v29; // r0@57
  StoreSearchQuery *v30; // r0@60
  StoreSearchQuery *v31; // r4@60
  int v32; // r5@65
  unsigned int *v33; // r1@66
  unsigned int v34; // r0@68
  unsigned int *v35; // r4@72
  unsigned int v36; // r0@74
  int v37; // r5@79
  int v38; // r7@79
  int v39; // r4@80
  unsigned int *v40; // r1@81
  unsigned int v41; // r0@83
  unsigned int *v42; // r6@87
  unsigned int v43; // r0@89
  char *v44; // r0@98
  int v45; // r1@101
  void *v46; // r0@101
  unsigned int *v48; // r2@103
  signed int v49; // r1@105
  unsigned int *v50; // r2@107
  signed int v51; // r1@109

  v1 = this;
  *(_DWORD *)this = &off_26DF9C8;
  v2 = *((_DWORD *)this + 72);
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
  v7 = *((_DWORD *)v1 + 66);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v7 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = (void *)*((_DWORD *)v1 + 65);
  if ( v9 )
    if ( *(_DWORD *)v9 )
      (*(void (**)(void))(**(_DWORD **)v9 + 96))();
    operator delete(v9);
  *((_DWORD *)v1 + 65) = 0;
  v10 = (void *)*((_DWORD *)v1 + 61);
  if ( v10 )
    operator delete(v10);
  v11 = (void (*)(void))*((_DWORD *)v1 + 58);
  if ( v11 )
    v11();
  v12 = (void (*)(void))*((_DWORD *)v1 + 54);
  if ( v12 )
    v12();
  v13 = (StoreCatalogItem *)*((_DWORD *)v1 + 51);
  if ( v13 )
    v14 = StoreCatalogItem::~StoreCatalogItem(v13);
    operator delete((void *)v14);
  *((_DWORD *)v1 + 51) = 0;
  v15 = (unsigned __int64 *)*((_DWORD *)v1 + 46);
  while ( v15 )
    v18 = v15;
    v19 = *v15 >> 32;
    v15 = (unsigned __int64 *)*v15;
    v20 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v19 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v20);
    operator delete(v18);
  _aeabi_memclr4(*((_QWORD *)v1 + 22), 4 * (*((_QWORD *)v1 + 22) >> 32));
  *((_DWORD *)v1 + 46) = 0;
  *((_DWORD *)v1 + 47) = 0;
  v21 = (char *)*((_DWORD *)v1 + 44);
  if ( v21 && (char *)v1 + 200 != v21 )
    operator delete(v21);
  v22 = *((_DWORD *)v1 + 39);
  while ( v22 )
    v25 = v22;
    v26 = *(void **)(v22 + 32);
    v22 = *(_DWORD *)v22;
    if ( v26 )
      operator delete(v26);
    StoreRowData::~StoreRowData((StoreRowData *)(v25 + 8));
    v27 = *(_DWORD *)(v25 + 4);
    v28 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v27 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v28);
    operator delete((void *)v25);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 148), 4 * (*(_QWORD *)((char *)v1 + 148) >> 32));
  *((_DWORD *)v1 + 39) = 0;
  *((_DWORD *)v1 + 40) = 0;
  v29 = (char *)*((_DWORD *)v1 + 37);
  if ( v29 && (char *)v1 + 172 != v29 )
    operator delete(v29);
  std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<StoreSearchQuery,std::default_delete<StoreSearchQuery>>>,std::allocator<std::pair<std::string const,std::unique_ptr<StoreSearchQuery,std::default_delete<StoreSearchQuery>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::~_Hashtable((int)v1 + 120);
  v31 = (StoreSearchQuery *)(*(_QWORD *)((char *)v1 + 108) >> 32);
  v30 = (StoreSearchQuery *)*(_QWORD *)((char *)v1 + 108);
  if ( v30 != v31 )
    do
      v30 = (StoreSearchQuery *)((char *)StoreSearchQuery::~StoreSearchQuery(v30) + 64);
    while ( v31 != v30 );
    v30 = (StoreSearchQuery *)*((_DWORD *)v1 + 27);
  if ( v30 )
    operator delete((void *)v30);
  v32 = *((_DWORD *)v1 + 26);
  if ( v32 )
    v33 = (unsigned int *)(v32 + 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 == 1 )
      v35 = (unsigned int *)(v32 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
  v38 = *((_QWORD *)v1 + 11) >> 32;
  v37 = *((_QWORD *)v1 + 11);
  if ( v37 != v38 )
      v39 = *(_DWORD *)(v37 + 4);
      if ( v39 )
        v40 = (unsigned int *)(v39 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
        }
        else
          v41 = (*v40)--;
        if ( v41 == 1 )
          v42 = (unsigned int *)(v39 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 8))(v39);
          if ( &pthread_create )
          {
            __dmb();
            do
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
          }
          else
            v43 = (*v42)--;
          if ( v43 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 12))(v39);
      v37 += 8;
    while ( v37 != v38 );
    v37 = *((_DWORD *)v1 + 22);
  if ( v37 )
    operator delete((void *)v37);
  std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<StoreCatalogItem>>,std::allocator<std::pair<std::string const,std::shared_ptr<StoreCatalogItem>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 60);
  v44 = (char *)*((_DWORD *)v1 + 15);
  if ( v44 && (char *)v1 + 84 != v44 )
    operator delete(v44);
  v45 = *((_DWORD *)v1 + 14);
  v46 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v45 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v46);
  CatalogInfo::~CatalogInfo((StoreCatalogRepository *)((char *)v1 + 24));
  return v1;
}


__int64 __fastcall StoreCatalogRepository::_createCatalogUpdateRow(StoreCatalogRepository *this)
{
  StoreCatalogRepository *v1; // r9@1
  int *v2; // r8@1
  int v3; // r2@1
  int v4; // r3@2
  __int64 v5; // r0@2
  int v6; // r7@2
  int v7; // r0@7
  unsigned int *v8; // r0@8
  unsigned int v9; // r1@10
  int v10; // r5@15
  int v11; // r1@15
  char *v12; // r0@15
  int v13; // r4@15
  __int64 v14; // r0@18
  __int64 result; // r0@23
  char v16; // r2@23
  int v17; // [sp+0h] [bp-20h]@18

  v1 = this;
  *((_BYTE *)this + 240) = 0;
  v2 = (int *)((char *)this + 284);
  v3 = *((_DWORD *)this + 71);
  if ( (unsigned int)*(_QWORD *)(v3 + 24) == *(_QWORD *)(v3 + 24) >> 32 )
  {
    LODWORD(v5) = (char *)this + 88;
    v4 = *((_DWORD *)v1 + 22);
    HIDWORD(v5) = *((_DWORD *)v1 + 23);
    v6 = *((_DWORD *)v1 + 69);
    if ( v6 >= (HIDWORD(v5) - v4) >> 3 )
    {
      if ( HIDWORD(v5) == *((_DWORD *)v1 + 24) )
      {
        std::vector<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>,std::allocator<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>>>::_M_emplace_back_aux<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>> const&>(
          (unsigned __int64 *)v5,
          (int)v2);
      }
      else
        *(_DWORD *)HIDWORD(v5) = v3;
        LODWORD(v5) = *((_DWORD *)v1 + 72);
        *(_DWORD *)(HIDWORD(v5) + 4) = v5;
        if ( (_DWORD)v5 )
        {
          v8 = (unsigned int *)(v7 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 + 1, v8) );
            HIDWORD(v5) = *((_DWORD *)v1 + 23);
          }
          else
            ++*v8;
        }
        *((_DWORD *)v1 + 23) = HIDWORD(v5) + 8;
    }
    else if ( *(_DWORD *)(v4 + 8 * v6) != v3 )
      HIDWORD(v5) = v4 + 8 * v6;
      std::vector<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>,std::allocator<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>>>::insert(
        v5,
        (int)v2);
  }
  v10 = *((_DWORD *)v1 + 71);
  v11 = *((_DWORD *)v1 + 71);
  v12 = *(char **)(v10 + 24);
  *(_DWORD *)(v10 + 28) = v12;
  v13 = *((_DWORD *)v1 + 17);
  if ( v13 )
    do
      v12 = (char *)StoreCatalogItem::isOwned(*(StoreCatalogItem **)(v13 + 8));
      if ( v12 == (char *)1 )
        v12 = (char *)StoreCatalogItem::isUpdateAvailable(*(StoreCatalogItem **)(v13 + 8));
        if ( v12 == (char *)1 )
          StoreCatalogItemModel::StoreCatalogItemModel(&v17, *(void **)(v13 + 8));
          v14 = *(_QWORD *)(v10 + 28);
          if ( (_DWORD)v14 == HIDWORD(v14) )
            v12 = std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>::_M_emplace_back_aux<StoreCatalogItemModel>(
                    (unsigned __int64 *)(v10 + 24),
                    &v17);
            *(_DWORD *)v14 = v17;
            v12 = (char *)(*(_DWORD *)(v10 + 28) + 4);
            *(_DWORD *)(v10 + 28) = v12;
      v13 = *(_DWORD *)v13;
    while ( v13 );
    v11 = *v2;
  StoreCatalogRepository::_sortCatalogRow((int)v12, v11);
  result = *(_QWORD *)(v10 + 24);
  v16 = 0;
  if ( HIDWORD(result) != (_DWORD)result )
    v16 = 1;
  *((_BYTE *)v1 + 240) = v16;
  return result;
}


void __fastcall StoreCatalogRepository::~StoreCatalogRepository(StoreCatalogRepository *this)
{
  StoreCatalogRepository *v1; // r0@1

  v1 = StoreCatalogRepository::~StoreCatalogRepository(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall StoreCatalogRepository::_resetStoreCatalogItemInstallState(int a1, const void **a2)
{
  int v2; // r4@1
  const void **v3; // r5@1
  int i; // r6@1
  _DWORD *v5; // r0@4
  size_t v6; // r2@4
  int v7; // r7@7
  int v8; // r0@7
  StoreCatalogItemModel *j; // r6@7
  _DWORD *v10; // r0@10
  size_t v11; // r2@10
  int v12; // r1@12
  StoreCatalogItemModel *v13; // r0@12
  int v14; // r1@14
  int v15; // r1@19
  char v16; // r2@19

  v2 = a1;
  v3 = a2;
  for ( i = *(_DWORD *)(a1 + 68); i; i = *(_DWORD *)i )
  {
    v5 = *(_DWORD **)StoreCatalogItem::getProductId(*(StoreCatalogItem **)(i + 8));
    v6 = *(v5 - 3);
    if ( v6 == *((_DWORD *)*v3 - 3) && !memcmp(v5, *v3, v6) )
    {
      if ( *(_DWORD *)(i + 8) )
      {
        v7 = *(_DWORD *)(v2 + 284);
        v8 = *(_QWORD *)(v7 + 24) >> 32;
        for ( j = (StoreCatalogItemModel *)*(_QWORD *)(v7 + 24);
              j != (StoreCatalogItemModel *)v8;
              j = (StoreCatalogItemModel *)((char *)j + 4) )
        {
          v10 = *(_DWORD **)StoreCatalogItemModel::getProductId(j);
          v11 = *(v10 - 3);
          if ( v11 == *((_DWORD *)*v3 - 3) && !memcmp(v10, *v3, v11) )
          {
            v12 = *(_DWORD *)(v7 + 28);
            v13 = (StoreCatalogItemModel *)((char *)j + 4);
            if ( (StoreCatalogItemModel *)((char *)j + 4) == (StoreCatalogItemModel *)v12 )
            {
              v12 = (int)j + 4;
            }
            else if ( v12 - (signed int)v13 >= 1 )
              v14 = ((v12 - (signed int)v13) >> 2) + 1;
              do
              {
                --v14;
                *((_DWORD *)v13 - 1) = *(_DWORD *)v13;
                v13 = (StoreCatalogItemModel *)((char *)v13 + 4);
              }
              while ( v14 > 1 );
              v12 = *(_DWORD *)(v7 + 28);
            v8 = v12 - 4;
            *(_DWORD *)(v7 + 28) = v12 - 4;
            break;
          }
          v8 = *(_DWORD *)(v7 + 28);
        }
        v15 = *(_DWORD *)(v7 + 24);
        v16 = 0;
        if ( v8 != v15 )
          v16 = 1;
        *(_BYTE *)(v2 + 240) = v16;
        if ( v8 == v15 )
          j_j_j__ZN22StoreCatalogRepository9_trimRowsEv((StoreCatalogRepository *)v2);
      }
      return;
    }
  }
}


            if ( StoreCatalogRepository::isItemFetched(v8, (int **)(v2 + 8)) == 1 )
{
              if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(v1 + 24)) == v1 )
                v9 = (SceneStack *)SceneFactory::getCurrentSceneStack(*(SceneFactory **)(v1 + 76));
              else
                v9 = *(SceneStack **)(v1 + 616);
              SceneStack::schedulePopScreen(v9, 1);
              v16 = MinecraftGame::getStoreCatalog(*(MinecraftGame **)(v1 + 24));
              v17 = (void *)StoreCatalogRepository::getStoreCatalogItemByProductId(v16, (const void **)(v2 + 8));
              StoreCatalogItemModel::StoreCatalogItemModel(&v24, v17);
              v18 = *(_QWORD *)(v2 + 12);
              if ( !*(_DWORD *)(v18 - 12)
                || (v19 = StoreCatalogItemModel::getCreatorId((StoreCatalogItemModel *)&v24),
                    v20 = *(_DWORD **)(v2 + 12),
                    v21 = *(_DWORD **)v19,
                    v22 = *(v20 - 3),
                    v22 == *(v21 - 3))
                && !memcmp(v20, v21, v22) )
              {
                ClientInstance::navigateToPurchaseOfferScreen(v1, (StoreCatalogItemModel *)&v24, SHIDWORD(v18));
              }
            }
            else
            {
              v10 = *(_DWORD *)(v2 + 20);
              sub_DA7F0C(&v25);
              v14 = *(_QWORD *)&v25 - *(_QWORD *)(v10 + 8);
              v11 = 1000000000LL * *(_QWORD *)(v10 + 16);
              v12 = 0;
              v13 = (unsigned int)v11 >= (unsigned int)v14;
              LODWORD(v14) = 0;
              if ( v13 )
                LODWORD(v14) = 1;
              if ( SHIDWORD(v11) >= SHIDWORD(v14) )
                v12 = 1;
              if ( HIDWORD(v11) == HIDWORD(v14) )
                v12 = v14;
              if ( !v12 )
                if ( MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(v1 + 24)) == v1 )
                  v15 = (SceneStack *)SceneFactory::getCurrentSceneStack(*(SceneFactory **)(v1 + 76));
                else
                  v15 = *(SceneStack **)(v1 + 616);
                SceneStack::schedulePopScreen(v15, 1);
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v4);
            while ( __strex(result - 1, v4) );
          else
            result = (*v4)--;
          if ( result == 1 )
            v23 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v23);
              while ( __strex(result - 1, v23) );
              result = (*v23)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return result;
        }
      }
      else
      {
        __clrex();
        result = v5;
    }
  }
  return result;
}


QueryResponse *__fastcall StoreCatalogRepository::_processQueryManifest(__int64 this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27)
{
  return StoreCatalogRepository::_processQueryManifest(
           this,
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
           a27);
}


int *__fastcall StoreCatalogRepository::getStoreRow(StoreCatalogRepository *this, int a2)
{
  StoreCatalogRepository *v2; // r5@1
  int v3; // r4@1
  char v4; // r0@1
  __int64 v5; // r0@5
  int *result; // r0@6

  v2 = this;
  v3 = a2;
  v4 = byte_27D6D24[0];
  __dmb();
  if ( !(v4 & 1) && j___cxa_guard_acquire(byte_27D6D24) )
  {
    dword_27D6D34 = (int)&unk_28898CC;
    unk_27D6D38 = &unk_28898CC;
    unk_27D6D3C = 0;
    unk_27D6D40 = 0;
    unk_27D6D44 = 0;
    unk_27D6D4A = 0;
    unk_27D6D4C = 0;
    unk_27D6D50 = 0;
    unk_27D6D54 = 0;
    _cxa_atexit(std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>::~pair);
    j___cxa_guard_release(byte_27D6D24);
  }
  if ( v3 < 0 )
    result = &dword_27D6D34;
  else
    v5 = *((_QWORD *)v2 + 11);
    if ( (HIDWORD(v5) - (signed int)v5) >> 3 <= v3 )
      result = &dword_27D6D34;
    else
      result = *(int **)(v5 + 8 * v3);
  return result;
}


int __fastcall StoreCatalogRepository::getFeaturedItems(StoreCatalogRepository *this)
{
  return *((_DWORD *)this + 25) + 24;
}


int __fastcall StoreCatalogRepository::getStoreButtonContentTypeList(int a1, int **a2)
{
  return std::__detail::_Map_base<std::string,std::pair<std::string const,std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>,std::allocator<std::pair<std::string const,std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (unsigned __int64 *)(a1 + 148),
           a2);
}


void __fastcall StoreCatalogRepository::_trimRows(StoreCatalogRepository *this)
{
  StoreCatalogRepository *v1; // r4@1
  int v2; // r6@1
  int i; // r11@1
  int v4; // r0@2
  int v5; // r8@6
  int v6; // r5@6
  unsigned int *v7; // r0@8
  unsigned int v8; // r1@10
  char *v9; // r1@12
  int v10; // r0@13
  unsigned int *v11; // r0@14
  unsigned int v12; // r1@16
  unsigned int *v13; // r1@21
  unsigned int v14; // r0@23
  unsigned int *v15; // r7@27
  unsigned int v16; // r0@29
  int v17; // r4@38
  char *v18; // r6@38
  int v19; // r7@39
  unsigned int *v20; // r1@40
  unsigned int v21; // r0@42
  unsigned int *v22; // r5@46
  unsigned int v23; // r0@48
  char *v24; // [sp+0h] [bp-30h]@1
  char *v25; // [sp+4h] [bp-2Ch]@1
  char *v26; // [sp+8h] [bp-28h]@1

  v1 = this;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v2 = *((_DWORD *)this + 22);
  for ( i = *((_DWORD *)this + 23); v2 != i; v2 += 8 )
  {
    v4 = *(_DWORD *)v2;
    if ( *(_BYTE *)(*(_DWORD *)v2 + 21) )
      *((_DWORD *)v1 + 69) = (v25 - v24) >> 3;
    if ( (signed int)((*(_QWORD *)(v4 + 24) >> 32) - *(_QWORD *)(v4 + 24)) >= 1 )
    {
      if ( *(_BYTE *)(v4 + 20) )
      {
        *((_DWORD *)v1 + 25) = v4;
        v5 = *((_DWORD *)v1 + 26);
        v6 = *(_DWORD *)(v2 + 4);
        if ( v6 != v5 )
        {
          if ( v6 )
          {
            v7 = (unsigned int *)(v6 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v8 = __ldrex(v7);
              while ( __strex(v8 + 1, v7) );
              v5 = *((_DWORD *)v1 + 26);
            }
            else
              ++*v7;
          }
          if ( v5 )
            v13 = (unsigned int *)(v5 + 4);
                v14 = __ldrex(v13);
              while ( __strex(v14 - 1, v13) );
              v14 = (*v13)--;
            if ( v14 == 1 )
              v15 = (unsigned int *)(v5 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v16 = __ldrex(v15);
                while ( __strex(v16 - 1, v15) );
              }
              else
                v16 = (*v15)--;
              if ( v16 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
          *((_DWORD *)v1 + 26) = v6;
        }
      }
      else
        v9 = v25;
        if ( v25 == v26 )
          std::vector<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>,std::allocator<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>>>::_M_emplace_back_aux<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>> const&>(
            (unsigned __int64 *)&v24,
            v2);
        else
          *(_DWORD *)v25 = v4;
          v10 = *(_DWORD *)(v2 + 4);
          *((_DWORD *)v9 + 1) = v10;
          if ( v10 )
            v11 = (unsigned int *)(v10 + 4);
                v12 = __ldrex(v11);
              while ( __strex(v12 + 1, v11) );
              v9 = v25;
              ++*v11;
          v25 = v9 + 8;
    }
  }
  std::vector<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>,std::allocator<std::shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>>>::operator=(
    (int)v1 + 88,
    (__int64 *)&v24);
  v18 = v25;
  v17 = (int)v24;
  if ( v24 != v25 )
    do
      v19 = *(_DWORD *)(v17 + 4);
      if ( v19 )
        v20 = (unsigned int *)(v19 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 == 1 )
          v22 = (unsigned int *)(v19 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          if ( &pthread_create )
            __dmb();
            do
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
          else
            v23 = (*v22)--;
          if ( v23 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
      v17 += 8;
    while ( (char *)v17 != v18 );
    v17 = (int)v24;
  if ( v17 )
    operator delete((void *)v17);
}


int __fastcall StoreCatalogRepository::isItemFetched(int a1, int **a2)
{
  return *(_BYTE *)std::__detail::_Map_base<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                     a1 + 176,
                     a2);
}


_DWORD *__fastcall StoreCatalogRepository::getDownloadCallback(StoreCatalogRepository *this, int a2)
{
  StoreCatalogRepository *v2; // r5@1
  int v3; // r4@1
  _DWORD *result; // r0@1
  __int64 v5; // r1@1

  v2 = this;
  v3 = a2;
  result = operator new(4u);
  HIDWORD(v5) = sub_10E9FEC;
  *result = v3;
  LODWORD(v5) = sub_10EA17C;
  *(_DWORD *)v2 = result;
  *((_QWORD *)v2 + 1) = v5;
  return result;
}


RakNet *__fastcall StoreCatalogRepository::setItemViewed(int a1, const char **a2)
{
  CatalogInfo *v2; // r4@1

  v2 = (CatalogInfo *)(a1 + 24);
  CatalogInfo::setOfferViewed((Json::Value *)(a1 + 24), a2);
  return j_j_j__ZN11CatalogInfo4saveEv(v2);
}


signed int __fastcall StoreCatalogRepository::update(StoreCatalogRepository *this)
{
  StoreCatalogRepository *v1; // r1@1
  signed int result; // r0@1

  v1 = this;
  result = 0;
  if ( *((_BYTE *)v1 + 241) )
  {
    *((_BYTE *)v1 + 241) = 0;
    result = 1;
  }
  return result;
}


int __fastcall StoreCatalogRepository::getStoreCatalogItemByProductId(int a1, const void **a2)
{
  int v2; // r5@1
  const void **v3; // r4@1
  _DWORD *v4; // r0@4
  size_t v5; // r2@4

  v2 = *(_DWORD *)(a1 + 68);
  v3 = a2;
  while ( v2 )
  {
    v4 = *(_DWORD **)StoreCatalogItem::getProductId(*(StoreCatalogItem **)(v2 + 8));
    v5 = *(v4 - 3);
    if ( v5 == *((_DWORD *)*v3 - 3) && !memcmp(v4, *v3, v5) )
      return *(_DWORD *)(v2 + 8);
    v2 = *(_DWORD *)v2;
  }
  return 0;
}


signed int __fastcall StoreCatalogRepository::_onFileFetched(int a1, int a2, int a3, unsigned __int64 **a4, int *a5, unsigned __int64 *a6)
{
  int v6; // r4@1
  int v7; // r9@1
  signed int result; // r0@1
  unsigned __int64 **v9; // r6@1
  int v10; // r2@1
  unsigned __int64 *v11; // r7@2
  int *v12; // r0@2
  void *v13; // r0@2
  unsigned __int64 *v14; // r7@3
  _DWORD *v15; // r5@3
  char *v16; // r1@3 OVERLAPPED
  char *v17; // r2@3 OVERLAPPED
  unsigned int v18; // r8@3
  _DWORD *v19; // r0@5
  unsigned int v20; // r0@6
  int v21; // r0@7
  _DWORD *v22; // r6@7
  int v23; // r7@8
  void (__fastcall *v24)(int, void **); // r2@11
  unsigned int *v25; // r2@15
  signed int v26; // r1@17
  int v27; // [sp+0h] [bp-30h]@2
  void *ptr; // [sp+8h] [bp-28h]@11
  unsigned int v29; // [sp+Ch] [bp-24h]@11
  char *v30; // [sp+10h] [bp-20h]@11

  v6 = a1;
  v7 = a3;
  result = *(_DWORD *)(a1 + 244);
  v9 = a4;
  v10 = *(_DWORD *)(result + 4 * a2) - 1;
  *(_DWORD *)(result + 4 * a2) = v10;
  if ( !v10 )
  {
    v11 = *a4;
    v12 = sub_119C854(&v27, a5);
    StoreCatalogRepository::_sortCatalogRow((int)v12, v11, (const void **)v12, a6);
    v13 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
    {
      v25 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      }
      else
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
    }
    v14 = *v9;
    v15 = 0;
    *(_QWORD *)&v16 = **v9;
    v18 = (v17 - v16) >> 2;
    if ( v18 )
      if ( v18 >= 0x40000000 )
        sub_119C874();
      v19 = operator new(v17 - v16);
      *(_QWORD *)&v16 = *v14;
      v15 = v19;
    v20 = (unsigned int)v15;
    if ( v16 != v17 )
      v21 = -(signed int)v16;
      v22 = v15;
      do
        v23 = *(_DWORD *)v16;
        v16 += 4;
        *v22 = v23;
        ++v22;
      while ( v17 != v16 );
      v20 = (unsigned int)v15 + ((unsigned int)&v17[v21 - 4] & 0xFFFFFFFC) + 4;
    if ( !*(_DWORD *)(v7 + 8) )
      sub_119C8E4();
    v24 = *(void (__fastcall **)(int, void **))(v7 + 12);
    ptr = v15;
    v29 = v20;
    v30 = (char *)&v15[v18];
    v24(v7, &ptr);
    if ( ptr )
      operator delete(ptr);
    result = 1;
    *(_BYTE *)(v6 + 241) = 1;
  }
  return result;
}


void __fastcall StoreCatalogRepository::_resortStoreAfterPurchase(StoreCatalogRepository *this)
{
  StoreCatalogRepository *v1; // r4@1
  int v2; // r0@1
  int *v3; // r4@1
  int *v4; // r5@1
  __int64 v5; // kr00_8@1
  int v6; // t1@2

  v1 = this;
  StoreCatalogRepository::_sortCatalogRow((int)this, *((_DWORD *)this + 25));
  v5 = *((_QWORD *)v1 + 11);
  v3 = (int *)(*((_QWORD *)v1 + 11) >> 32);
  v4 = (int *)v5;
  while ( v3 != v4 )
  {
    v6 = *v4;
    v4 += 2;
    StoreCatalogRepository::_sortCatalogRow(v2, v6);
  }
}


void __fastcall StoreCatalogRepository::_resetStoreCatalogItemInstallState(int a1, const void **a2)
{
  StoreCatalogRepository::_resetStoreCatalogItemInstallState(a1, a2);
}


unsigned int __fastcall StoreCatalogRepository::StoreCatalogRepository(unsigned int a1, int a2, int a3, int a4, __int64 a5)
{
  unsigned int v5; // r5@1
  double v6; // r0@1
  unsigned int v7; // r0@1
  int v8; // r6@3
  void *v9; // r4@3
  double v10; // r0@4
  double v11; // r0@4
  int v12; // r6@6
  void *v13; // r4@6
  double v14; // r0@7
  int v15; // r6@9
  void *v16; // r4@9
  unsigned int v17; // r0@10
  int v18; // r6@12
  void *v19; // r4@12
  _QWORD *v20; // r6@13
  _QWORD *v21; // r4@13
  AppPlatform **v22; // r0@14
  bool v23; // zf@16
  signed int v24; // r2@16
  void *v25; // r0@20
  _DWORD *v26; // r0@21
  int v27; // r3@21
  void (*v28)(void); // r3@21
  _DWORD *v29; // r0@23
  int v30; // r3@23
  void (*v31)(void); // r3@23
  unsigned int *v33; // r2@30
  signed int v34; // r1@32
  void *ptr; // [sp+Ch] [bp-84h]@18
  int v36; // [sp+10h] [bp-80h]@18
  int v37; // [sp+14h] [bp-7Ch]@18
  int v38; // [sp+1Ch] [bp-74h]@18
  int v39; // [sp+20h] [bp-70h]@18
  void *v40; // [sp+24h] [bp-6Ch]@18
  int v41; // [sp+28h] [bp-68h]@18
  int v42; // [sp+2Ch] [bp-64h]@18
  int v43; // [sp+30h] [bp-60h]@18
  char v44; // [sp+34h] [bp-5Ch]@18
  char v45; // [sp+35h] [bp-5Bh]@18
  char v46; // [sp+36h] [bp-5Ah]@18
  int v47; // [sp+38h] [bp-58h]@13
  int v48; // [sp+3Ch] [bp-54h]@13
  char v49; // [sp+44h] [bp-4Ch]@18
  _DWORD *v50; // [sp+48h] [bp-48h]@21
  int v51; // [sp+4Ch] [bp-44h]@21
  void (*v52)(void); // [sp+50h] [bp-40h]@21
  int v53; // [sp+54h] [bp-3Ch]@21
  _DWORD *v54; // [sp+58h] [bp-38h]@23
  int v55; // [sp+5Ch] [bp-34h]@23
  void (*v56)(void); // [sp+60h] [bp-30h]@23
  int v57; // [sp+64h] [bp-2Ch]@23

  v5 = a1;
  *(_DWORD *)a1 = &off_26DF9C8;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a4;
  *(_QWORD *)(a1 + 16) = a5;
  CatalogInfo::CatalogInfo((CatalogInfo *)(a1 + 24));
  *(_DWORD *)(v5 + 56) = &unk_28898CC;
  *(_DWORD *)(v5 + 68) = 0;
  *(_DWORD *)(v5 + 72) = 0;
  *(_DWORD *)(v5 + 76) = 1065353216;
  *(_DWORD *)(v5 + 80) = 0;
  LODWORD(v6) = v5 + 76;
  v7 = sub_119C844(v6);
  *(_DWORD *)(v5 + 64) = v7;
  if ( v7 == 1 )
  {
    *(_DWORD *)(v5 + 84) = 0;
    v9 = (void *)(v5 + 84);
  }
  else
    if ( v7 >= 0x40000000 )
      sub_119C874();
    v8 = 4 * v7;
    v9 = operator new(4 * v7);
    _aeabi_memclr4(v9, v8);
  *(_DWORD *)(v5 + 60) = v9;
  *(_DWORD *)(v5 + 88) = 0;
  *(_DWORD *)(v5 + 92) = 0;
  *(_DWORD *)(v5 + 96) = 0;
  j__ZNSt12__shared_ptrISt4pairI12StoreRowDataSt6vectorI21StoreCatalogItemModelSaIS3_EEELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS6_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_(v5 + 100);
  *(_DWORD *)(v5 + 108) = 0;
  *(_DWORD *)(v5 + 112) = 0;
  *(_DWORD *)(v5 + 116) = 0;
  *(_DWORD *)(v5 + 128) = 0;
  *(_DWORD *)(v5 + 132) = 0;
  *(_DWORD *)(v5 + 136) = 1065353216;
  *(_DWORD *)(v5 + 140) = 0;
  LODWORD(v10) = v5 + 136;
  v11 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v10)));
  *(_DWORD *)(v5 + 124) = LODWORD(v11);
  if ( LODWORD(v11) == 1 )
    *(_DWORD *)(v5 + 144) = 0;
    v13 = (void *)(v5 + 144);
    if ( LODWORD(v11) >= 0x40000000 )
    v12 = 4 * LODWORD(v11);
    v13 = operator new(4 * LODWORD(v11));
    _aeabi_memclr4(v13, v12);
  *(_DWORD *)(v5 + 120) = v13;
  *(_DWORD *)(v5 + 156) = 0;
  *(_DWORD *)(v5 + 160) = 0;
  *(_DWORD *)(v5 + 164) = 1065353216;
  LODWORD(v11) = v5 + 164;
  *(_DWORD *)(LODWORD(v11) + 4) = 0;
  v14 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v11)));
  *(_DWORD *)(v5 + 152) = LODWORD(v14);
  if ( LODWORD(v14) == 1 )
    *(_DWORD *)(v5 + 172) = 0;
    v16 = (void *)(v5 + 172);
    if ( LODWORD(v14) >= 0x40000000 )
    v15 = 4 * LODWORD(v14);
    v16 = operator new(4 * LODWORD(v14));
    _aeabi_memclr4(v16, v15);
  *(_DWORD *)(v5 + 148) = v16;
  *(_DWORD *)(v5 + 184) = 0;
  *(_DWORD *)(v5 + 188) = 0;
  *(_DWORD *)(v5 + 192) = 1065353216;
  LODWORD(v14) = v5 + 192;
  *(_DWORD *)(LODWORD(v14) + 4) = 0;
  v17 = sub_119C844(v14);
  *(_DWORD *)(v5 + 180) = v17;
  if ( v17 == 1 )
    *(_DWORD *)(v5 + 200) = 0;
    v19 = (void *)(v5 + 200);
    if ( v17 >= 0x40000000 )
    v18 = 4 * v17;
    v19 = operator new(4 * v17);
    _aeabi_memclr4(v19, v18);
  *(_DWORD *)(v5 + 176) = v19;
  v47 = 0;
  v48 = 0;
  j__ZSt11make_uniqueI16StoreCatalogItemJDnDnEENSt9_MakeUniqIT_E15__single_objectEDpOT0_((_DWORD *)(v5 + 204));
  *(_DWORD *)(v5 + 216) = 0;
  v20 = (_QWORD *)(v5 + 224);
  *(_DWORD *)(v5 + 232) = 0;
  *(_DWORD *)(v5 + 240) = 0;
  *(_DWORD *)(v5 + 244) = 0;
  *(_DWORD *)(v5 + 248) = 0;
  *(_DWORD *)(v5 + 252) = 0;
  *(_DWORD *)(v5 + 256) = 0;
  v21 = (_QWORD *)(v5 + 208);
  StoreCatalogDictionary::StoreCatalogDictionary((StoreCatalogDictionary *)(v5 + 260));
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v22 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v22 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v23 = AppPlatform::isLowMemoryDevice(*v22) == 0;
  v24 = 2;
  if ( !v23 )
    v24 = 1;
  *(_DWORD *)(v5 + 272) = v24;
  *(_DWORD *)(v5 + 276) = 0;
  *(_DWORD *)(v5 + 280) = 1;
  sub_119C884((void **)&v38, "store.content.update");
  sub_119C854(&v39, &v38);
  v40 = &unk_28898CC;
  v44 = 0;
  v43 = 0;
  v41 = 0;
  v42 = 0;
  v45 = 1;
  v46 = 0;
  ptr = 0;
  v36 = 0;
  v37 = 0;
  std::__shared_ptr<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::pair<StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>>,StoreRowData,std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>>(
    v5 + 284,
    (int)&v49,
    (int)&v39,
    (int)&ptr);
  if ( ptr )
    operator delete(ptr);
  StoreRowData::~StoreRowData((StoreRowData *)&v39);
  v25 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v38 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
    }
    else
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  v26 = operator new(4u);
  *v26 = v5;
  v50 = v26;
  v27 = v51;
  *(_QWORD *)&v50 = *v21;
  *(_DWORD *)v21 = v26;
  *(_DWORD *)(v5 + 212) = v27;
  v52 = *(void (**)(void))(v5 + 216);
  v28 = v52;
  *(_DWORD *)(v5 + 216) = sub_10E993C;
  v53 = *(_DWORD *)(v5 + 220);
  *(_DWORD *)(v5 + 220) = sub_10E9930;
  if ( v28 )
    v28();
  v29 = operator new(4u);
  *v29 = v5;
  v54 = v29;
  v30 = v55;
  *(_QWORD *)&v54 = *v20;
  *(_DWORD *)v20 = v29;
  *(_DWORD *)(v5 + 228) = v30;
  v56 = *(void (**)(void))(v5 + 232);
  v31 = v56;
  *(_DWORD *)(v5 + 232) = sub_10E997A;
  v57 = *(_DWORD *)(v5 + 236);
  *(_DWORD *)(v5 + 236) = sub_10E9972;
  if ( v31 )
    v31();
  EntitlementManager::addEntitlementChangeListener(*(_DWORD *)(v5 + 8), v5);
  return v5;
}


void __fastcall StoreCatalogRepository::updateStoreCatalogUpdateRow(StoreCatalogRepository *this)
{
  StoreCatalogRepository::updateStoreCatalogUpdateRow(this);
}


signed int __fastcall StoreCatalogRepository::_getItemInstallState(int a1, unsigned __int64 *a2)
{
  int v2; // r5@1
  int v3; // r11@1
  const PackIdVersion *v4; // r6@2
  SemVersion *v5; // r8@2
  void **v6; // r7@2
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  unsigned int *v18; // r2@25
  signed int v19; // r1@27
  unsigned int *v20; // r2@29
  signed int v21; // r1@31
  unsigned int *v22; // r2@61
  signed int v23; // r1@63
  unsigned int *v24; // r2@65
  signed int v25; // r1@67
  unsigned int *v26; // r2@69
  signed int v27; // r1@71
  unsigned int *v28; // r2@73
  signed int v29; // r1@75
  unsigned int *v30; // r2@77
  signed int v31; // r1@79
  unsigned int *v32; // r2@81
  signed int v33; // r1@83
  void *v34; // r0@109
  int v35; // r0@110
  void **v36; // r9@112
  ResourcePack *v37; // r0@112
  ResourcePack *v38; // r6@112
  char *v39; // r7@113
  char *v40; // r0@113
  signed int v41; // r6@113
  void *v42; // r0@113
  void *v43; // r0@114
  void *v44; // r0@115
  const PackIdVersion *v45; // r4@118
  int v46; // r6@118
  WorldTemplateInfo *v47; // r9@118
  void *v48; // r0@118
  void *v49; // r0@119
  void *v50; // r0@120
  PackManifest *v51; // r0@122
  char *v52; // r0@122
  signed int v53; // r9@124
  void *v54; // r0@131
  void *v55; // r0@132
  void *v56; // r0@133
  void *v57; // r0@134
  void *v58; // r0@135
  void *v59; // r0@136
  int v60; // [sp+14h] [bp-F4h]@2
  signed int v61; // [sp+18h] [bp-F0h]@2
  int v62; // [sp+1Ch] [bp-ECh]@1
  int v63; // [sp+20h] [bp-E8h]@118
  int v64; // [sp+24h] [bp-E4h]@118
  int v65; // [sp+28h] [bp-E0h]@118
  int v66; // [sp+2Ch] [bp-DCh]@118
  int v67; // [sp+30h] [bp-D8h]@118
  int v68; // [sp+38h] [bp-D0h]@69
  int v69; // [sp+3Ch] [bp-CCh]@65
  int v70; // [sp+40h] [bp-C8h]@61
  char v71; // [sp+48h] [bp-C0h]@118
  int v72; // [sp+50h] [bp-B8h]@118
  int v73; // [sp+54h] [bp-B4h]@118
  int v74; // [sp+58h] [bp-B0h]@118
  int v75; // [sp+5Ch] [bp-ACh]@118
  char v76; // [sp+60h] [bp-A8h]@113
  int v77; // [sp+78h] [bp-90h]@81
  int v78; // [sp+7Ch] [bp-8Ch]@77
  int v79; // [sp+80h] [bp-88h]@73
  char v80; // [sp+90h] [bp-78h]@2
  int v81; // [sp+94h] [bp-74h]@118
  int v82; // [sp+98h] [bp-70h]@118
  int v83; // [sp+9Ch] [bp-6Ch]@118
  int v84; // [sp+A0h] [bp-68h]@118
  int v85; // [sp+A8h] [bp-60h]@17
  int v86; // [sp+ACh] [bp-5Ch]@13
  int v87; // [sp+B0h] [bp-58h]@9
  char v88; // [sp+B8h] [bp-50h]@118
  int v89; // [sp+C4h] [bp-44h]@2
  char v90; // [sp+C8h] [bp-40h]@2
  int v91; // [sp+D0h] [bp-38h]@29
  int v92; // [sp+D4h] [bp-34h]@25
  int v93; // [sp+D8h] [bp-30h]@21
  int v94; // [sp+F4h] [bp-14h]@5

  v3 = *a2 >> 32;
  v2 = *a2;
  v62 = v3;
  if ( v2 != v3 )
  {
    v60 = a1;
    v61 = 1;
    v4 = (const PackIdVersion *)&v80;
    v5 = (SemVersion *)&v90;
    v6 = (void **)&v89;
    while ( 1 )
    {
      SemVersion::SemVersion(v5);
      sub_119C884(v6, "*");
      SemVersion::fromString((const void **)v6, (int)v5);
      v34 = (void *)(v89 - 12);
      if ( (int *)(v89 - 12) != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v89 - 4);
        if ( v94 )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v34);
      }
      PackIdVersion::PackIdVersion((int)v4, v2, (int)v5, 0);
      v35 = *(_BYTE *)(v2 + 40);
      if ( v35 == 3 )
        v45 = v4;
        v46 = *(_DWORD *)(v60 + 16);
        v63 = *(_DWORD *)&v80;
        v64 = v81;
        v65 = v82;
        v66 = v83;
        SemVersion::SemVersion((int)&v67, (int)&v84);
        v71 = v88;
        v73 = 0;
        v74 = 0;
        v75 = 0;
        std::vector<PackIdVersion,std::allocator<PackIdVersion>>::_M_range_initialize<PackIdVersion const*>(
          (char **)&v73,
          (int)&v63,
          (int)&v72);
        v47 = WorldTemplateManager::findInstalledWorldTemplateByPackId(v46, (unsigned __int64 *)&v73);
        std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)&v73);
        v48 = (void *)(v70 - 12);
        if ( (int *)(v70 - 12) != &dword_28898C0 )
          v22 = (unsigned int *)(v70 - 4);
          if ( v94 )
          {
            __dmb();
            do
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
          }
          else
            v23 = (*v22)--;
          if ( v23 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v48);
        v49 = (void *)(v69 - 12);
        if ( (int *)(v69 - 12) != &dword_28898C0 )
          v24 = (unsigned int *)(v69 - 4);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v49);
        v50 = (void *)(v68 - 12);
        if ( (int *)(v68 - 12) != &dword_28898C0 )
          v26 = (unsigned int *)(v68 - 4);
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          if ( v27 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v50);
        if ( !v47 )
          v4 = v45;
          v61 = 0;
          v5 = (SemVersion *)&v90;
          goto LABEL_128;
        v51 = (PackManifest *)WorldTemplateInfo::getPackManifest(v47);
        v5 = (SemVersion *)&v90;
        v52 = PackManifest::getIdentity(v51);
        if ( PackIdVersion::operator<((int)v52, v2) )
          v61 = 2;
LABEL_128:
          v6 = (void **)&v89;
          v53 = 2;
          goto LABEL_131;
        v4 = v45;
        v53 = 0;
        v6 = (void **)&v89;
      else
        if ( v35 != 1 )
          v53 = 0;
          v3 = v62;
        v36 = v6;
        v37 = (ResourcePack *)ResourcePackRepository::getResourcePackForPackId(
                                *(ResourcePackRepository **)(v60 + 12),
                                v4);
        v38 = v37;
        if ( !v37 )
          goto LABEL_126;
        v39 = ResourcePack::getPackId(v37);
        v40 = ResourcePack::getVersion(v38);
        PackIdVersion::PackIdVersion((int)&v76, (int)v39, (int)v40, 0);
        v41 = PackIdVersion::operator<((int)&v76, v2);
        v42 = (void *)(v79 - 12);
        if ( (int *)(v79 - 12) != &dword_28898C0 )
          v28 = (unsigned int *)(v79 - 4);
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v42);
        v6 = v36;
        v43 = (void *)(v78 - 12);
        if ( (int *)(v78 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v78 - 4);
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            v6 = v36;
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v43);
        v44 = (void *)(v77 - 12);
        if ( (int *)(v77 - 12) != &dword_28898C0 )
          v32 = (unsigned int *)(v77 - 4);
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v44);
        v3 = v62;
        if ( v41 )
LABEL_126:
          v4 = (const PackIdVersion *)&v80;
        v4 = (const PackIdVersion *)&v80;
LABEL_131:
      v54 = (void *)(v87 - 12);
      if ( (int *)(v87 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v87 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v54);
      v55 = (void *)(v86 - 12);
      if ( (int *)(v86 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v86 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v55);
      v56 = (void *)(v85 - 12);
      if ( (int *)(v85 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v85 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v56);
      v57 = (void *)(v93 - 12);
      if ( (int *)(v93 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v93 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v57);
      v58 = (void *)(v92 - 12);
      if ( (int *)(v92 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v92 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v58);
      v59 = (void *)(v91 - 12);
      if ( (int *)(v91 - 12) != &dword_28898C0 )
        v20 = (unsigned int *)(v91 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v59);
      if ( !v53 )
        v2 += 48;
        if ( v2 != v3 )
          continue;
      return v61;
    }
  }
  return 1;
}


int __fastcall StoreCatalogRepository::isCatalogSearchComplete(StoreCatalogRepository *this)
{
  int result; // r0@4

  if ( *((_DWORD *)this + 64) > 0 || *((_BYTE *)this + 243) || !*((_BYTE *)this + 242) )
    result = 0;
  else
    result = StoreCatalogDictionary::isReady((StoreCatalogRepository *)((char *)this + 260));
  return result;
}


char *__fastcall StoreCatalogRepository::getStoreContentRows(StoreCatalogRepository *this)
{
  return (char *)this + 88;
}
