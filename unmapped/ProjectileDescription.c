

void __fastcall ProjectileDescription::~ProjectileDescription(ProjectileDescription *this)
{
  ProjectileDescription *v1; // r0@1

  v1 = j_ProjectileDescription::~ProjectileDescription(this);
  j_j_j__ZdlPv_7((void *)v1);
}


ProjectileDescription *__fastcall ProjectileDescription::~ProjectileDescription(ProjectileDescription *this)
{
  ProjectileDescription *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  char *v6; // r5@3 OVERLAPPED
  char *v7; // r6@3 OVERLAPPED
  int v8; // r1@10
  void *v9; // r0@10
  int v10; // r1@11
  void *v11; // r0@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  unsigned int *v19; // r2@25
  signed int v20; // r1@27

  v1 = this;
  *(_DWORD *)this = &off_271ECD8;
  FilterGroup::~FilterGroup((ProjectileDescription *)((char *)this + 108));
  v2 = *((_DWORD *)v1 + 26);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 25);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v4 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  *(_QWORD *)&v6 = *((_QWORD *)v1 + 11);
  if ( v6 != v7 )
    do
      if ( *(_DWORD *)v6 )
        (*(void (**)(void))(**(_DWORD **)v6 + 4))();
      *(_DWORD *)v6 = 0;
      v6 += 4;
    while ( v7 != v6 );
    v6 = (char *)*((_DWORD *)v1 + 22);
  if ( v6 )
    operator delete(v6);
  v8 = *((_DWORD *)v1 + 20);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v8 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 19);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v10 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  return v1;
}


const char *__fastcall ProjectileDescription::getJsonName(ProjectileDescription *this)
{
  return "minecraft:projectile";
}


const char *__fastcall ProjectileDescription::getDescription(ProjectileDescription *this)
{
  return "Allows the entity to be a thrown entity.";
}


int __fastcall ProjectileDescription::parseProjectileAnchor(int a1, Json::Value *a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  Json::Value *v6; // r0@1
  int result; // r0@1

  v5 = a1;
  v6 = (Json::Value *)j_Json::Value::operator[](a2, "anchor");
  result = j_Json::Value::asInt(v6, a5);
  *(_DWORD *)(v5 + 84) = result;
  return result;
}


void __fastcall ProjectileDescription::getDocumentation(int a1, int a2)
{
  int v2; // r5@1
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
  void *v24; // r0@16
  void *v25; // r0@17
  void *v26; // r0@18
  int *v27; // r0@19
  void *v28; // r0@19
  void *v29; // r0@20
  void *v30; // r0@21
  int *v31; // r0@22
  void *v32; // r0@22
  void *v33; // r0@23
  void *v34; // r0@24
  int *v35; // r0@25
  void *v36; // r0@25
  void *v37; // r0@26
  void *v38; // r0@27
  int *v39; // r0@28
  void *v40; // r0@28
  void *v41; // r0@29
  void *v42; // r0@30
  int *v43; // r0@31
  void *v44; // r0@31
  void *v45; // r0@32
  void *v46; // r0@33
  int *v47; // r0@34
  void *v48; // r0@34
  void *v49; // r0@35
  void *v50; // r0@36
  int *v51; // r0@37
  void *v52; // r0@37
  void *v53; // r0@38
  void *v54; // r0@39
  int *v55; // r0@40
  void *v56; // r0@40
  void *v57; // r0@41
  void *v58; // r0@42
  int *v59; // r0@43
  void *v60; // r0@43
  void *v61; // r0@44
  void *v62; // r0@45
  int *v63; // r0@46
  void *v64; // r0@46
  void *v65; // r0@47
  void *v66; // r0@48
  int *v67; // r0@49
  void *v68; // r0@49
  void *v69; // r0@50
  void *v70; // r0@51
  int *v71; // r0@52
  void *v72; // r0@52
  void *v73; // r0@53
  void *v74; // r0@54
  int *v75; // r0@55
  void *v76; // r0@55
  void *v77; // r0@56
  void *v78; // r0@57
  int *v79; // r0@58
  void *v80; // r0@58
  void *v81; // r0@59
  void *v82; // r0@60
  int *v83; // r0@61
  void *v84; // r0@61
  void *v85; // r0@62
  void *v86; // r0@63
  int *v87; // r0@64
  void *v88; // r0@64
  void *v89; // r0@65
  void *v90; // r0@66
  int *v91; // r0@67
  void *v92; // r0@67
  void *v93; // r0@68
  void *v94; // r0@69
  int *v95; // r0@70
  void *v96; // r0@70
  void *v97; // r0@71
  void *v98; // r0@72
  int *v99; // r0@73
  void *v100; // r0@73
  void *v101; // r0@74
  void *v102; // r0@75
  int *v103; // r0@76
  void *v104; // r0@76
  void *v105; // r0@77
  void *v106; // r0@78
  int *v107; // r0@79
  void *v108; // r0@79
  void *v109; // r0@80
  void *v110; // r0@81
  unsigned int *v111; // r2@83
  signed int v112; // r1@85
  unsigned int *v113; // r2@87
  signed int v114; // r1@89
  unsigned int *v115; // r2@91
  signed int v116; // r1@93
  unsigned int *v117; // r2@95
  signed int v118; // r1@97
  unsigned int *v119; // r2@99
  signed int v120; // r1@101
  unsigned int *v121; // r2@103
  signed int v122; // r1@105
  unsigned int *v123; // r2@107
  signed int v124; // r1@109
  unsigned int *v125; // r2@111
  signed int v126; // r1@113
  unsigned int *v127; // r2@115
  signed int v128; // r1@117
  unsigned int *v129; // r2@119
  signed int v130; // r1@121
  unsigned int *v131; // r2@123
  signed int v132; // r1@125
  unsigned int *v133; // r2@127
  signed int v134; // r1@129
  unsigned int *v135; // r2@131
  signed int v136; // r1@133
  unsigned int *v137; // r2@135
  signed int v138; // r1@137
  unsigned int *v139; // r2@139
  signed int v140; // r1@141
  unsigned int *v141; // r2@143
  signed int v142; // r1@145
  unsigned int *v143; // r2@147
  signed int v144; // r1@149
  unsigned int *v145; // r2@151
  signed int v146; // r1@153
  unsigned int *v147; // r2@155
  signed int v148; // r1@157
  unsigned int *v149; // r2@159
  signed int v150; // r1@161
  unsigned int *v151; // r2@163
  signed int v152; // r1@165
  unsigned int *v153; // r2@167
  signed int v154; // r1@169
  unsigned int *v155; // r2@171
  signed int v156; // r1@173
  unsigned int *v157; // r2@175
  signed int v158; // r1@177
  unsigned int *v159; // r2@179
  signed int v160; // r1@181
  unsigned int *v161; // r2@183
  signed int v162; // r1@185
  unsigned int *v163; // r2@187
  signed int v164; // r1@189
  unsigned int *v165; // r2@191
  signed int v166; // r1@193
  unsigned int *v167; // r2@195
  signed int v168; // r1@197
  unsigned int *v169; // r2@199
  signed int v170; // r1@201
  unsigned int *v171; // r2@203
  signed int v172; // r1@205
  unsigned int *v173; // r2@207
  signed int v174; // r1@209
  unsigned int *v175; // r2@211
  signed int v176; // r1@213
  unsigned int *v177; // r2@215
  signed int v178; // r1@217
  unsigned int *v179; // r2@219
  signed int v180; // r1@221
  unsigned int *v181; // r2@223
  signed int v182; // r1@225
  unsigned int *v183; // r2@227
  signed int v184; // r1@229
  unsigned int *v185; // r2@231
  signed int v186; // r1@233
  unsigned int *v187; // r2@235
  signed int v188; // r1@237
  unsigned int *v189; // r2@239
  signed int v190; // r1@241
  unsigned int *v191; // r2@243
  signed int v192; // r1@245
  unsigned int *v193; // r2@247
  signed int v194; // r1@249
  unsigned int *v195; // r2@251
  signed int v196; // r1@253
  unsigned int *v197; // r2@255
  signed int v198; // r1@257
  unsigned int *v199; // r2@259
  signed int v200; // r1@261
  unsigned int *v201; // r2@263
  signed int v202; // r1@265
  unsigned int *v203; // r2@267
  signed int v204; // r1@269
  unsigned int *v205; // r2@271
  signed int v206; // r1@273
  unsigned int *v207; // r2@275
  signed int v208; // r1@277
  unsigned int *v209; // r2@279
  signed int v210; // r1@281
  unsigned int *v211; // r2@283
  signed int v212; // r1@285
  unsigned int *v213; // r2@287
  signed int v214; // r1@289
  unsigned int *v215; // r2@291
  signed int v216; // r1@293
  unsigned int *v217; // r2@295
  signed int v218; // r1@297
  unsigned int *v219; // r2@299
  signed int v220; // r1@301
  unsigned int *v221; // r2@303
  signed int v222; // r1@305
  unsigned int *v223; // r2@307
  signed int v224; // r1@309
  unsigned int *v225; // r2@311
  signed int v226; // r1@313
  unsigned int *v227; // r2@315
  signed int v228; // r1@317
  unsigned int *v229; // r2@319
  signed int v230; // r1@321
  unsigned int *v231; // r2@323
  signed int v232; // r1@325
  unsigned int *v233; // r2@327
  signed int v234; // r1@329
  unsigned int *v235; // r2@331
  signed int v236; // r1@333
  unsigned int *v237; // r2@335
  signed int v238; // r1@337
  unsigned int *v239; // r2@339
  signed int v240; // r1@341
  unsigned int *v241; // r2@343
  signed int v242; // r1@345
  unsigned int *v243; // r2@347
  signed int v244; // r1@349
  unsigned int *v245; // r2@351
  signed int v246; // r1@353
  unsigned int *v247; // r2@355
  signed int v248; // r1@357
  unsigned int *v249; // r2@359
  signed int v250; // r1@361
  unsigned int *v251; // r2@363
  signed int v252; // r1@365
  unsigned int *v253; // r2@367
  signed int v254; // r1@369
  unsigned int *v255; // r2@371
  signed int v256; // r1@373
  unsigned int *v257; // r2@375
  signed int v258; // r1@377
  unsigned int *v259; // r2@379
  signed int v260; // r1@381
  unsigned int *v261; // r2@383
  signed int v262; // r1@385
  unsigned int *v263; // r2@387
  signed int v264; // r1@389
  unsigned int *v265; // r2@391
  signed int v266; // r1@393
  unsigned int *v267; // r2@395
  signed int v268; // r1@397
  unsigned int *v269; // r2@399
  signed int v270; // r1@401
  unsigned int *v271; // r2@403
  signed int v272; // r1@405
  int v273; // [sp+8h] [bp-298h]@79
  int v274; // [sp+10h] [bp-290h]@79
  int v275; // [sp+18h] [bp-288h]@79
  int v276; // [sp+20h] [bp-280h]@76
  int v277; // [sp+28h] [bp-278h]@76
  int v278; // [sp+30h] [bp-270h]@76
  int v279; // [sp+38h] [bp-268h]@73
  int v280; // [sp+40h] [bp-260h]@73
  int v281; // [sp+48h] [bp-258h]@73
  int v282; // [sp+50h] [bp-250h]@70
  int v283; // [sp+58h] [bp-248h]@70
  int v284; // [sp+60h] [bp-240h]@70
  int v285; // [sp+68h] [bp-238h]@67
  int v286; // [sp+70h] [bp-230h]@67
  int v287; // [sp+78h] [bp-228h]@67
  int v288; // [sp+80h] [bp-220h]@64
  int v289; // [sp+88h] [bp-218h]@64
  int v290; // [sp+90h] [bp-210h]@64
  int v291; // [sp+98h] [bp-208h]@61
  int v292; // [sp+A0h] [bp-200h]@61
  int v293; // [sp+A8h] [bp-1F8h]@61
  int v294; // [sp+B0h] [bp-1F0h]@58
  int v295; // [sp+B8h] [bp-1E8h]@58
  int v296; // [sp+C0h] [bp-1E0h]@58
  int v297; // [sp+C8h] [bp-1D8h]@55
  int v298; // [sp+D0h] [bp-1D0h]@55
  int v299; // [sp+D8h] [bp-1C8h]@55
  int v300; // [sp+E0h] [bp-1C0h]@52
  int v301; // [sp+E8h] [bp-1B8h]@52
  int v302; // [sp+F0h] [bp-1B0h]@52
  int v303; // [sp+F8h] [bp-1A8h]@49
  int v304; // [sp+100h] [bp-1A0h]@49
  int v305; // [sp+108h] [bp-198h]@49
  int v306; // [sp+110h] [bp-190h]@46
  int v307; // [sp+118h] [bp-188h]@46
  int v308; // [sp+120h] [bp-180h]@46
  int v309; // [sp+128h] [bp-178h]@43
  int v310; // [sp+130h] [bp-170h]@43
  int v311; // [sp+138h] [bp-168h]@43
  int v312; // [sp+140h] [bp-160h]@40
  int v313; // [sp+148h] [bp-158h]@40
  int v314; // [sp+150h] [bp-150h]@40
  int v315; // [sp+158h] [bp-148h]@37
  int v316; // [sp+160h] [bp-140h]@37
  int v317; // [sp+168h] [bp-138h]@37
  int v318; // [sp+170h] [bp-130h]@34
  int v319; // [sp+178h] [bp-128h]@34
  int v320; // [sp+180h] [bp-120h]@34
  int v321; // [sp+188h] [bp-118h]@31
  int v322; // [sp+190h] [bp-110h]@31
  int v323; // [sp+198h] [bp-108h]@31
  int v324; // [sp+1A0h] [bp-100h]@28
  int v325; // [sp+1A8h] [bp-F8h]@28
  int v326; // [sp+1B0h] [bp-F0h]@28
  int v327; // [sp+1B8h] [bp-E8h]@25
  int v328; // [sp+1C0h] [bp-E0h]@25
  int v329; // [sp+1C8h] [bp-D8h]@25
  int v330; // [sp+1D0h] [bp-D0h]@22
  int v331; // [sp+1D8h] [bp-C8h]@22
  int v332; // [sp+1E0h] [bp-C0h]@22
  int v333; // [sp+1E8h] [bp-B8h]@19
  int v334; // [sp+1F0h] [bp-B0h]@19
  int v335; // [sp+1F8h] [bp-A8h]@19
  int v336; // [sp+200h] [bp-A0h]@16
  int v337; // [sp+208h] [bp-98h]@16
  int v338; // [sp+210h] [bp-90h]@16
  int v339; // [sp+218h] [bp-88h]@13
  int v340; // [sp+220h] [bp-80h]@13
  int v341; // [sp+228h] [bp-78h]@13
  int v342; // [sp+230h] [bp-70h]@10
  int v343; // [sp+238h] [bp-68h]@10
  int v344; // [sp+240h] [bp-60h]@10
  int v345; // [sp+248h] [bp-58h]@7
  int v346; // [sp+250h] [bp-50h]@7
  int v347; // [sp+258h] [bp-48h]@7
  int v348; // [sp+260h] [bp-40h]@4
  int v349; // [sp+268h] [bp-38h]@4
  int v350; // [sp+270h] [bp-30h]@4
  int v351; // [sp+278h] [bp-28h]@1
  int v352; // [sp+280h] [bp-20h]@1
  int v353; // [sp+288h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v353, "gravity");
  sub_21E94B4((void **)&v352, "0.05");
  v3 = (int *)sub_21E94B4(
                (void **)&v351,
                "The gravity applied to this entity when thrown. The higher the value, the faster the entity falls");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v353, &v352, v3);
  v4 = (void *)(v351 - 12);
  if ( (int *)(v351 - 12) != &dword_28898C0 )
  {
    v111 = (unsigned int *)(v351 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
    }
    else
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v352 - 12);
  if ( (int *)(v352 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v352 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v353 - 12);
  if ( (int *)(v353 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v353 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v350, "particle");
  sub_21E94B4((void **)&v349, "iconcrack");
  v7 = (int *)sub_21E94B4((void **)&v348, "Particle to use upon collision");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v350, &v349, v7);
  v8 = (void *)(v348 - 12);
  if ( (int *)(v348 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v348 - 4);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v349 - 12);
  if ( (int *)(v349 - 12) != &dword_28898C0 )
    v119 = (unsigned int *)(v349 - 4);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v350 - 12);
  if ( (int *)(v350 - 12) != &dword_28898C0 )
    v121 = (unsigned int *)(v350 - 4);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v347, "reflectOnHurt");
  sub_21E94B4((void **)&v346, "false");
  v11 = (int *)sub_21E94B4((void **)&v345, "If true, this entity will be reflected back when hit");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v347, &v346, v11);
  v12 = (void *)(v345 - 12);
  if ( (int *)(v345 - 12) != &dword_28898C0 )
    v123 = (unsigned int *)(v345 - 4);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v346 - 12);
  if ( (int *)(v346 - 12) != &dword_28898C0 )
    v125 = (unsigned int *)(v346 - 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v347 - 12);
  if ( (int *)(v347 - 12) != &dword_28898C0 )
    v127 = (unsigned int *)(v347 - 4);
        v128 = __ldrex(v127);
      while ( __strex(v128 - 1, v127) );
      v128 = (*v127)--;
    if ( v128 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v344, "destroyOnHurt");
  sub_21E94B4((void **)&v343, "false");
  v15 = (int *)sub_21E94B4((void **)&v342, "If true, this entity will be destroyed when hit");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v344, &v343, v15);
  v16 = (void *)(v342 - 12);
  if ( (int *)(v342 - 12) != &dword_28898C0 )
    v129 = (unsigned int *)(v342 - 4);
        v130 = __ldrex(v129);
      while ( __strex(v130 - 1, v129) );
      v130 = (*v129)--;
    if ( v130 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v343 - 12);
  if ( (int *)(v343 - 12) != &dword_28898C0 )
    v131 = (unsigned int *)(v343 - 4);
        v132 = __ldrex(v131);
      while ( __strex(v132 - 1, v131) );
      v132 = (*v131)--;
    if ( v132 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v344 - 12);
  if ( (int *)(v344 - 12) != &dword_28898C0 )
    v133 = (unsigned int *)(v344 - 4);
        v134 = __ldrex(v133);
      while ( __strex(v134 - 1, v133) );
      v134 = (*v133)--;
    if ( v134 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v341, "offset");
  sub_21E94B4((void **)&v340, "[0.0, 0.5, 0.0]");
  v19 = (int *)sub_21E94B4((void **)&v339, "The offset from the entity's anchor where the projectile will spawn");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::VEC3_TYPE, (const void **)&v341, &v340, v19);
  v20 = (void *)(v339 - 12);
  if ( (int *)(v339 - 12) != &dword_28898C0 )
    v135 = (unsigned int *)(v339 - 4);
        v136 = __ldrex(v135);
      while ( __strex(v136 - 1, v135) );
      v136 = (*v135)--;
    if ( v136 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v340 - 12);
  if ( (int *)(v340 - 12) != &dword_28898C0 )
    v137 = (unsigned int *)(v340 - 4);
        v138 = __ldrex(v137);
      while ( __strex(v138 - 1, v137) );
      v138 = (*v137)--;
    if ( v138 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v341 - 12);
  if ( (int *)(v341 - 12) != &dword_28898C0 )
    v139 = (unsigned int *)(v341 - 4);
        v140 = __ldrex(v139);
      while ( __strex(v140 - 1, v139) );
      v140 = (*v139)--;
    if ( v140 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v338, "power");
  sub_21E94B4((void **)&v337, "1.3");
  v23 = (int *)sub_21E94B4((void **)&v336, "Determines the velocity of the projectile");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v338, &v337, v23);
  v24 = (void *)(v336 - 12);
  if ( (int *)(v336 - 12) != &dword_28898C0 )
    v141 = (unsigned int *)(v336 - 4);
        v142 = __ldrex(v141);
      while ( __strex(v142 - 1, v141) );
      v142 = (*v141)--;
    if ( v142 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v337 - 12);
  if ( (int *)(v337 - 12) != &dword_28898C0 )
    v143 = (unsigned int *)(v337 - 4);
        v144 = __ldrex(v143);
      while ( __strex(v144 - 1, v143) );
      v144 = (*v143)--;
    if ( v144 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v338 - 12);
  if ( (int *)(v338 - 12) != &dword_28898C0 )
    v145 = (unsigned int *)(v338 - 4);
        v146 = __ldrex(v145);
      while ( __strex(v146 - 1, v145) );
      v146 = (*v145)--;
    if ( v146 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v335, "angleoffset");
  sub_21E94B4((void **)&v334, "0.0");
  v27 = (int *)sub_21E94B4((void **)&v333, "Determines the angle at which the projectile is thrown");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v335, &v334, v27);
  v28 = (void *)(v333 - 12);
  if ( (int *)(v333 - 12) != &dword_28898C0 )
    v147 = (unsigned int *)(v333 - 4);
        v148 = __ldrex(v147);
      while ( __strex(v148 - 1, v147) );
      v148 = (*v147)--;
    if ( v148 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v334 - 12);
  if ( (int *)(v334 - 12) != &dword_28898C0 )
    v149 = (unsigned int *)(v334 - 4);
        v150 = __ldrex(v149);
      while ( __strex(v150 - 1, v149) );
      v150 = (*v149)--;
    if ( v150 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v335 - 12);
  if ( (int *)(v335 - 12) != &dword_28898C0 )
    v151 = (unsigned int *)(v335 - 4);
        v152 = __ldrex(v151);
      while ( __strex(v152 - 1, v151) );
      v152 = (*v151)--;
    if ( v152 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v332, "uncertaintyBase");
  sub_21E94B4((void **)&v331, "0.0");
  v31 = (int *)sub_21E94B4(
                 (void **)&v330,
                 "The base accuracy. Accuracy is determined by the formula uncertaintyBase - difficultyLevel * uncertaintyMultiplier");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v332, &v331, v31);
  v32 = (void *)(v330 - 12);
  if ( (int *)(v330 - 12) != &dword_28898C0 )
    v153 = (unsigned int *)(v330 - 4);
        v154 = __ldrex(v153);
      while ( __strex(v154 - 1, v153) );
      v154 = (*v153)--;
    if ( v154 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v331 - 12);
  if ( (int *)(v331 - 12) != &dword_28898C0 )
    v155 = (unsigned int *)(v331 - 4);
        v156 = __ldrex(v155);
      while ( __strex(v156 - 1, v155) );
      v156 = (*v155)--;
    if ( v156 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v332 - 12);
  if ( (int *)(v332 - 12) != &dword_28898C0 )
    v157 = (unsigned int *)(v332 - 4);
        v158 = __ldrex(v157);
      while ( __strex(v158 - 1, v157) );
      v158 = (*v157)--;
    if ( v158 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  sub_21E94B4((void **)&v329, "uncertaintyMultiplier");
  sub_21E94B4((void **)&v328, "0.0");
  v35 = (int *)sub_21E94B4(
                 (void **)&v327,
                 "Determines how much difficulty affects accuracy. Accuracy is determined by the formula uncertaintyBase "
                 "- difficultyLevel * uncertaintyMultiplier");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v329, &v328, v35);
  v36 = (void *)(v327 - 12);
  if ( (int *)(v327 - 12) != &dword_28898C0 )
    v159 = (unsigned int *)(v327 - 4);
        v160 = __ldrex(v159);
      while ( __strex(v160 - 1, v159) );
      v160 = (*v159)--;
    if ( v160 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v328 - 12);
  if ( (int *)(v328 - 12) != &dword_28898C0 )
    v161 = (unsigned int *)(v328 - 4);
        v162 = __ldrex(v161);
      while ( __strex(v162 - 1, v161) );
      v162 = (*v161)--;
    if ( v162 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v38 = (void *)(v329 - 12);
  if ( (int *)(v329 - 12) != &dword_28898C0 )
    v163 = (unsigned int *)(v329 - 4);
        v164 = __ldrex(v163);
      while ( __strex(v164 - 1, v163) );
      v164 = (*v163)--;
    if ( v164 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  sub_21E94B4((void **)&v326, "critParticleOnHurt");
  sub_21E94B4((void **)&v325, "false");
  v39 = (int *)sub_21E94B4(
                 (void **)&v324,
                 "If true, the projectile will produce additional particles when a critical hit happens");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v326, &v325, v39);
  v40 = (void *)(v324 - 12);
  if ( (int *)(v324 - 12) != &dword_28898C0 )
    v165 = (unsigned int *)(v324 - 4);
        v166 = __ldrex(v165);
      while ( __strex(v166 - 1, v165) );
      v166 = (*v165)--;
    if ( v166 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  v41 = (void *)(v325 - 12);
  if ( (int *)(v325 - 12) != &dword_28898C0 )
    v167 = (unsigned int *)(v325 - 4);
        v168 = __ldrex(v167);
      while ( __strex(v168 - 1, v167) );
      v168 = (*v167)--;
    if ( v168 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  v42 = (void *)(v326 - 12);
  if ( (int *)(v326 - 12) != &dword_28898C0 )
    v169 = (unsigned int *)(v326 - 4);
        v170 = __ldrex(v169);
      while ( __strex(v170 - 1, v169) );
      v170 = (*v169)--;
    if ( v170 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  sub_21E94B4((void **)&v323, "knockback");
  sub_21E94B4((void **)&v322, "true");
  v43 = (int *)sub_21E94B4((void **)&v321, "If true, the projectile will knock back the entity it hits");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v323, &v322, v43);
  v44 = (void *)(v321 - 12);
  if ( (int *)(v321 - 12) != &dword_28898C0 )
    v171 = (unsigned int *)(v321 - 4);
        v172 = __ldrex(v171);
      while ( __strex(v172 - 1, v171) );
      v172 = (*v171)--;
    if ( v172 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  v45 = (void *)(v322 - 12);
  if ( (int *)(v322 - 12) != &dword_28898C0 )
    v173 = (unsigned int *)(v322 - 4);
        v174 = __ldrex(v173);
      while ( __strex(v174 - 1, v173) );
      v174 = (*v173)--;
    if ( v174 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v46 = (void *)(v323 - 12);
  if ( (int *)(v323 - 12) != &dword_28898C0 )
    v175 = (unsigned int *)(v323 - 4);
        v176 = __ldrex(v175);
      while ( __strex(v176 - 1, v175) );
      v176 = (*v175)--;
    if ( v176 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  sub_21E94B4((void **)&v320, "filter");
  sub_21E94B4((void **)&v319, (const char *)&unk_257BC67);
  v47 = (int *)sub_21E94B4((void **)&v318, "Entity Definitions defined here can't be hurt by the projectile");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v320, &v319, v47);
  v48 = (void *)(v318 - 12);
  if ( (int *)(v318 - 12) != &dword_28898C0 )
    v177 = (unsigned int *)(v318 - 4);
        v178 = __ldrex(v177);
      while ( __strex(v178 - 1, v177) );
      v178 = (*v177)--;
    if ( v178 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  v49 = (void *)(v319 - 12);
  if ( (int *)(v319 - 12) != &dword_28898C0 )
    v179 = (unsigned int *)(v319 - 4);
        v180 = __ldrex(v179);
      while ( __strex(v180 - 1, v179) );
      v180 = (*v179)--;
    if ( v180 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  v50 = (void *)(v320 - 12);
  if ( (int *)(v320 - 12) != &dword_28898C0 )
    v181 = (unsigned int *)(v320 - 4);
        v182 = __ldrex(v181);
      while ( __strex(v182 - 1, v181) );
      v182 = (*v181)--;
    if ( v182 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  sub_21E94B4((void **)&v317, "semirandomdiffdamage");
  sub_21E94B4((void **)&v316, "false");
  v51 = (int *)sub_21E94B4((void **)&v315, "If true, damage will be randomized based on damage and speed");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v317, &v316, v51);
  v52 = (void *)(v315 - 12);
  if ( (int *)(v315 - 12) != &dword_28898C0 )
    v183 = (unsigned int *)(v315 - 4);
        v184 = __ldrex(v183);
      while ( __strex(v184 - 1, v183) );
      v184 = (*v183)--;
    if ( v184 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  v53 = (void *)(v316 - 12);
  if ( (int *)(v316 - 12) != &dword_28898C0 )
    v185 = (unsigned int *)(v316 - 4);
        v186 = __ldrex(v185);
      while ( __strex(v186 - 1, v185) );
      v186 = (*v185)--;
    if ( v186 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  v54 = (void *)(v317 - 12);
  if ( (int *)(v317 - 12) != &dword_28898C0 )
    v187 = (unsigned int *)(v317 - 4);
        v188 = __ldrex(v187);
      while ( __strex(v188 - 1, v187) );
      v188 = (*v187)--;
    if ( v188 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  sub_21E94B4((void **)&v314, "onFireTime");
  sub_21E94B4((void **)&v313, "5.0");
  v55 = (int *)sub_21E94B4((void **)&v312, "Time in seconds that the entity hit will be on fire for");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v314, &v313, v55);
  v56 = (void *)(v312 - 12);
  if ( (int *)(v312 - 12) != &dword_28898C0 )
    v189 = (unsigned int *)(v312 - 4);
        v190 = __ldrex(v189);
      while ( __strex(v190 - 1, v189) );
      v190 = (*v189)--;
    if ( v190 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  v57 = (void *)(v313 - 12);
  if ( (int *)(v313 - 12) != &dword_28898C0 )
    v191 = (unsigned int *)(v313 - 4);
        v192 = __ldrex(v191);
      while ( __strex(v192 - 1, v191) );
      v192 = (*v191)--;
    if ( v192 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  v58 = (void *)(v314 - 12);
  if ( (int *)(v314 - 12) != &dword_28898C0 )
    v193 = (unsigned int *)(v314 - 4);
        v194 = __ldrex(v193);
      while ( __strex(v194 - 1, v193) );
      v194 = (*v193)--;
    if ( v194 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
  sub_21E94B4((void **)&v311, "catchFire");
  sub_21E94B4((void **)&v310, "false");
  v59 = (int *)sub_21E94B4((void **)&v309, "If true, the entity hit will be set on fire");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v311, &v310, v59);
  v60 = (void *)(v309 - 12);
  if ( (int *)(v309 - 12) != &dword_28898C0 )
    v195 = (unsigned int *)(v309 - 4);
        v196 = __ldrex(v195);
      while ( __strex(v196 - 1, v195) );
      v196 = (*v195)--;
    if ( v196 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  v61 = (void *)(v310 - 12);
  if ( (int *)(v310 - 12) != &dword_28898C0 )
    v197 = (unsigned int *)(v310 - 4);
        v198 = __ldrex(v197);
      while ( __strex(v198 - 1, v197) );
      v198 = (*v197)--;
    if ( v198 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  v62 = (void *)(v311 - 12);
  if ( (int *)(v311 - 12) != &dword_28898C0 )
    v199 = (unsigned int *)(v311 - 4);
        v200 = __ldrex(v199);
      while ( __strex(v200 - 1, v199) );
      v200 = (*v199)--;
    if ( v200 <= 0 )
      j_j_j_j__ZdlPv_9(v62);
  sub_21E94B4((void **)&v308, "fireAffectedByGriefing");
  sub_21E94B4((void **)&v307, "false");
  v63 = (int *)sub_21E94B4(
                 (void **)&v306,
                 "If true, whether the projectile causes fire is affected by the mob griefing game rule");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v308, &v307, v63);
  v64 = (void *)(v306 - 12);
  if ( (int *)(v306 - 12) != &dword_28898C0 )
    v201 = (unsigned int *)(v306 - 4);
        v202 = __ldrex(v201);
      while ( __strex(v202 - 1, v201) );
      v202 = (*v201)--;
    if ( v202 <= 0 )
      j_j_j_j__ZdlPv_9(v64);
  v65 = (void *)(v307 - 12);
  if ( (int *)(v307 - 12) != &dword_28898C0 )
    v203 = (unsigned int *)(v307 - 4);
        v204 = __ldrex(v203);
      while ( __strex(v204 - 1, v203) );
      v204 = (*v203)--;
    if ( v204 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
  v66 = (void *)(v308 - 12);
  if ( (int *)(v308 - 12) != &dword_28898C0 )
    v205 = (unsigned int *)(v308 - 4);
        v206 = __ldrex(v205);
      while ( __strex(v206 - 1, v205) );
      v206 = (*v205)--;
    if ( v206 <= 0 )
      j_j_j_j__ZdlPv_9(v66);
  sub_21E94B4((void **)&v305, "potionEffect");
  sub_21E94B4((void **)&v304, "-1");
  v67 = (int *)sub_21E94B4((void **)&v303, "Defines the effect the arrow will apply to the entity it hits");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v305, &v304, v67);
  v68 = (void *)(v303 - 12);
  if ( (int *)(v303 - 12) != &dword_28898C0 )
    v207 = (unsigned int *)(v303 - 4);
        v208 = __ldrex(v207);
      while ( __strex(v208 - 1, v207) );
      v208 = (*v207)--;
    if ( v208 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  v69 = (void *)(v304 - 12);
  if ( (int *)(v304 - 12) != &dword_28898C0 )
    v209 = (unsigned int *)(v304 - 4);
        v210 = __ldrex(v209);
      while ( __strex(v210 - 1, v209) );
      v210 = (*v209)--;
    if ( v210 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
  v70 = (void *)(v305 - 12);
  if ( (int *)(v305 - 12) != &dword_28898C0 )
    v211 = (unsigned int *)(v305 - 4);
        v212 = __ldrex(v211);
      while ( __strex(v212 - 1, v211) );
      v212 = (*v211)--;
    if ( v212 <= 0 )
      j_j_j_j__ZdlPv_9(v70);
  sub_21E94B4((void **)&v302, "splashRange");
  sub_21E94B4((void **)&v301, "4.0");
  v71 = (int *)sub_21E94B4((void **)&v300, "Radius in blocks of the 'splash' effect");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v302, &v301, v71);
  v72 = (void *)(v300 - 12);
  if ( (int *)(v300 - 12) != &dword_28898C0 )
    v213 = (unsigned int *)(v300 - 4);
        v214 = __ldrex(v213);
      while ( __strex(v214 - 1, v213) );
      v214 = (*v213)--;
    if ( v214 <= 0 )
      j_j_j_j__ZdlPv_9(v72);
  v73 = (void *)(v301 - 12);
  if ( (int *)(v301 - 12) != &dword_28898C0 )
    v215 = (unsigned int *)(v301 - 4);
        v216 = __ldrex(v215);
      while ( __strex(v216 - 1, v215) );
      v216 = (*v215)--;
    if ( v216 <= 0 )
      j_j_j_j__ZdlPv_9(v73);
  v74 = (void *)(v302 - 12);
  if ( (int *)(v302 - 12) != &dword_28898C0 )
    v217 = (unsigned int *)(v302 - 4);
        v218 = __ldrex(v217);
      while ( __strex(v218 - 1, v217) );
      v218 = (*v217)--;
    if ( v218 <= 0 )
      j_j_j_j__ZdlPv_9(v74);
  sub_21E94B4((void **)&v299, "splashPotion");
  sub_21E94B4((void **)&v298, "false");
  v75 = (int *)sub_21E94B4((void **)&v297, "If true, the projectile will be treated like a splash potion");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v299, &v298, v75);
  v76 = (void *)(v297 - 12);
  if ( (int *)(v297 - 12) != &dword_28898C0 )
    v219 = (unsigned int *)(v297 - 4);
        v220 = __ldrex(v219);
      while ( __strex(v220 - 1, v219) );
      v220 = (*v219)--;
    if ( v220 <= 0 )
      j_j_j_j__ZdlPv_9(v76);
  v77 = (void *)(v298 - 12);
  if ( (int *)(v298 - 12) != &dword_28898C0 )
    v221 = (unsigned int *)(v298 - 4);
        v222 = __ldrex(v221);
      while ( __strex(v222 - 1, v221) );
      v222 = (*v221)--;
    if ( v222 <= 0 )
      j_j_j_j__ZdlPv_9(v77);
  v78 = (void *)(v299 - 12);
  if ( (int *)(v299 - 12) != &dword_28898C0 )
    v223 = (unsigned int *)(v299 - 4);
        v224 = __ldrex(v223);
      while ( __strex(v224 - 1, v223) );
      v224 = (*v223)--;
    if ( v224 <= 0 )
      j_j_j_j__ZdlPv_9(v78);
  sub_21E94B4((void **)&v296, "isdangerous");
  sub_21E94B4((void **)&v295, "false");
  v79 = (int *)sub_21E94B4((void **)&v294, "If true, the projectile will be treated as dangerous to the players");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v296, &v295, v79);
  v80 = (void *)(v294 - 12);
  if ( (int *)(v294 - 12) != &dword_28898C0 )
    v225 = (unsigned int *)(v294 - 4);
        v226 = __ldrex(v225);
      while ( __strex(v226 - 1, v225) );
      v226 = (*v225)--;
    if ( v226 <= 0 )
      j_j_j_j__ZdlPv_9(v80);
  v81 = (void *)(v295 - 12);
  if ( (int *)(v295 - 12) != &dword_28898C0 )
    v227 = (unsigned int *)(v295 - 4);
        v228 = __ldrex(v227);
      while ( __strex(v228 - 1, v227) );
      v228 = (*v227)--;
    if ( v228 <= 0 )
      j_j_j_j__ZdlPv_9(v81);
  v82 = (void *)(v296 - 12);
  if ( (int *)(v296 - 12) != &dword_28898C0 )
    v229 = (unsigned int *)(v296 - 4);
        v230 = __ldrex(v229);
      while ( __strex(v230 - 1, v229) );
      v230 = (*v229)--;
    if ( v230 <= 0 )
      j_j_j_j__ZdlPv_9(v82);
  sub_21E94B4((void **)&v293, "shoottarget");
  sub_21E94B4((void **)&v292, "true");
  v83 = (int *)sub_21E94B4(
                 (void **)&v291,
                 "If true, the projectile will be shot towards the target of the entity firing it");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v293, &v292, v83);
  v84 = (void *)(v291 - 12);
  if ( (int *)(v291 - 12) != &dword_28898C0 )
    v231 = (unsigned int *)(v291 - 4);
        v232 = __ldrex(v231);
      while ( __strex(v232 - 1, v231) );
      v232 = (*v231)--;
    if ( v232 <= 0 )
      j_j_j_j__ZdlPv_9(v84);
  v85 = (void *)(v292 - 12);
  if ( (int *)(v292 - 12) != &dword_28898C0 )
    v233 = (unsigned int *)(v292 - 4);
        v234 = __ldrex(v233);
      while ( __strex(v234 - 1, v233) );
      v234 = (*v233)--;
    if ( v234 <= 0 )
      j_j_j_j__ZdlPv_9(v85);
  v86 = (void *)(v293 - 12);
  if ( (int *)(v293 - 12) != &dword_28898C0 )
    v235 = (unsigned int *)(v293 - 4);
        v236 = __ldrex(v235);
      while ( __strex(v236 - 1, v235) );
      v236 = (*v235)--;
    if ( v236 <= 0 )
      j_j_j_j__ZdlPv_9(v86);
  sub_21E94B4((void **)&v290, "shootSound");
  sub_21E94B4((void **)&v289, (const char *)&unk_257BC67);
  v87 = (int *)sub_21E94B4((void **)&v288, "The sound that plays when the projectile is shot");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v290, &v289, v87);
  v88 = (void *)(v288 - 12);
  if ( (int *)(v288 - 12) != &dword_28898C0 )
    v237 = (unsigned int *)(v288 - 4);
        v238 = __ldrex(v237);
      while ( __strex(v238 - 1, v237) );
      v238 = (*v237)--;
    if ( v238 <= 0 )
      j_j_j_j__ZdlPv_9(v88);
  v89 = (void *)(v289 - 12);
  if ( (int *)(v289 - 12) != &dword_28898C0 )
    v239 = (unsigned int *)(v289 - 4);
        v240 = __ldrex(v239);
      while ( __strex(v240 - 1, v239) );
      v240 = (*v239)--;
    if ( v240 <= 0 )
      j_j_j_j__ZdlPv_9(v89);
  v90 = (void *)(v290 - 12);
  if ( (int *)(v290 - 12) != &dword_28898C0 )
    v241 = (unsigned int *)(v290 - 4);
        v242 = __ldrex(v241);
      while ( __strex(v242 - 1, v241) );
      v242 = (*v241)--;
    if ( v242 <= 0 )
      j_j_j_j__ZdlPv_9(v90);
  sub_21E94B4((void **)&v287, "hitSound");
  sub_21E94B4((void **)&v286, (const char *)&unk_257BC67);
  v91 = (int *)sub_21E94B4((void **)&v285, "The sound that plays when the projectile hits something");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v287, &v286, v91);
  v92 = (void *)(v285 - 12);
  if ( (int *)(v285 - 12) != &dword_28898C0 )
    v243 = (unsigned int *)(v285 - 4);
        v244 = __ldrex(v243);
      while ( __strex(v244 - 1, v243) );
      v244 = (*v243)--;
    if ( v244 <= 0 )
      j_j_j_j__ZdlPv_9(v92);
  v93 = (void *)(v286 - 12);
  if ( (int *)(v286 - 12) != &dword_28898C0 )
    v245 = (unsigned int *)(v286 - 4);
        v246 = __ldrex(v245);
      while ( __strex(v246 - 1, v245) );
      v246 = (*v245)--;
    if ( v246 <= 0 )
      j_j_j_j__ZdlPv_9(v93);
  v94 = (void *)(v287 - 12);
  if ( (int *)(v287 - 12) != &dword_28898C0 )
    v247 = (unsigned int *)(v287 - 4);
        v248 = __ldrex(v247);
      while ( __strex(v248 - 1, v247) );
      v248 = (*v247)--;
    if ( v248 <= 0 )
      j_j_j_j__ZdlPv_9(v94);
  sub_21E94B4((void **)&v284, "inertia");
  sub_21E94B4((void **)&v283, "0.99");
  v95 = (int *)sub_21E94B4(
                 (void **)&v282,
                 "The fraction of the projectile's speed maintained every frame while traveling in air");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v284, &v283, v95);
  v96 = (void *)(v282 - 12);
  if ( (int *)(v282 - 12) != &dword_28898C0 )
    v249 = (unsigned int *)(v282 - 4);
        v250 = __ldrex(v249);
      while ( __strex(v250 - 1, v249) );
      v250 = (*v249)--;
    if ( v250 <= 0 )
      j_j_j_j__ZdlPv_9(v96);
  v97 = (void *)(v283 - 12);
  if ( (int *)(v283 - 12) != &dword_28898C0 )
    v251 = (unsigned int *)(v283 - 4);
        v252 = __ldrex(v251);
      while ( __strex(v252 - 1, v251) );
      v252 = (*v251)--;
    if ( v252 <= 0 )
      j_j_j_j__ZdlPv_9(v97);
  v98 = (void *)(v284 - 12);
  if ( (int *)(v284 - 12) != &dword_28898C0 )
    v253 = (unsigned int *)(v284 - 4);
        v254 = __ldrex(v253);
      while ( __strex(v254 - 1, v253) );
      v254 = (*v253)--;
    if ( v254 <= 0 )
      j_j_j_j__ZdlPv_9(v98);
  sub_21E94B4((void **)&v281, "liquid_inertia");
  sub_21E94B4((void **)&v280, "0.6");
  v99 = (int *)sub_21E94B4(
                 (void **)&v279,
                 "The fraction of the projectile's speed maintained every frame while traveling in water");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v281, &v280, v99);
  v100 = (void *)(v279 - 12);
  if ( (int *)(v279 - 12) != &dword_28898C0 )
    v255 = (unsigned int *)(v279 - 4);
        v256 = __ldrex(v255);
      while ( __strex(v256 - 1, v255) );
      v256 = (*v255)--;
    if ( v256 <= 0 )
      j_j_j_j__ZdlPv_9(v100);
  v101 = (void *)(v280 - 12);
  if ( (int *)(v280 - 12) != &dword_28898C0 )
    v257 = (unsigned int *)(v280 - 4);
        v258 = __ldrex(v257);
      while ( __strex(v258 - 1, v257) );
      v258 = (*v257)--;
    if ( v258 <= 0 )
      j_j_j_j__ZdlPv_9(v101);
  v102 = (void *)(v281 - 12);
  if ( (int *)(v281 - 12) != &dword_28898C0 )
    v259 = (unsigned int *)(v281 - 4);
        v260 = __ldrex(v259);
      while ( __strex(v260 - 1, v259) );
      v260 = (*v259)--;
    if ( v260 <= 0 )
      j_j_j_j__ZdlPv_9(v102);
  sub_21E94B4((void **)&v278, "homing");
  sub_21E94B4((void **)&v277, "false");
  v103 = (int *)sub_21E94B4((void **)&v276, "If true, the projectile homes in to the nearest entity");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v278, &v277, v103);
  v104 = (void *)(v276 - 12);
  if ( (int *)(v276 - 12) != &dword_28898C0 )
    v261 = (unsigned int *)(v276 - 4);
        v262 = __ldrex(v261);
      while ( __strex(v262 - 1, v261) );
      v262 = (*v261)--;
    if ( v262 <= 0 )
      j_j_j_j__ZdlPv_9(v104);
  v105 = (void *)(v277 - 12);
  if ( (int *)(v277 - 12) != &dword_28898C0 )
    v263 = (unsigned int *)(v277 - 4);
        v264 = __ldrex(v263);
      while ( __strex(v264 - 1, v263) );
      v264 = (*v263)--;
    if ( v264 <= 0 )
      j_j_j_j__ZdlPv_9(v105);
  v106 = (void *)(v278 - 12);
  if ( (int *)(v278 - 12) != &dword_28898C0 )
    v265 = (unsigned int *)(v278 - 4);
        v266 = __ldrex(v265);
      while ( __strex(v266 - 1, v265) );
      v266 = (*v265)--;
    if ( v266 <= 0 )
      j_j_j_j__ZdlPv_9(v106);
  sub_21E94B4((void **)&v275, "shouldbounce");
  sub_21E94B4((void **)&v274, "false");
  v107 = (int *)sub_21E94B4((void **)&v273, "If true, the projectile will bounce upon hit");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v275, &v274, v107);
  v108 = (void *)(v273 - 12);
  if ( (int *)(v273 - 12) != &dword_28898C0 )
    v267 = (unsigned int *)(v273 - 4);
        v268 = __ldrex(v267);
      while ( __strex(v268 - 1, v267) );
      v268 = (*v267)--;
    if ( v268 <= 0 )
      j_j_j_j__ZdlPv_9(v108);
  v109 = (void *)(v274 - 12);
  if ( (int *)(v274 - 12) != &dword_28898C0 )
    v269 = (unsigned int *)(v274 - 4);
        v270 = __ldrex(v269);
      while ( __strex(v270 - 1, v269) );
      v270 = (*v269)--;
    if ( v270 <= 0 )
      j_j_j_j__ZdlPv_9(v109);
  v110 = (void *)(v275 - 12);
  if ( (int *)(v275 - 12) != &dword_28898C0 )
    v271 = (unsigned int *)(v275 - 4);
        v272 = __ldrex(v271);
      while ( __strex(v272 - 1, v271) );
      v272 = (*v271)--;
    if ( v272 <= 0 )
      j_j_j_j__ZdlPv_9(v110);
}


int __fastcall ProjectileDescription::ProjectileDescription(int a1)
{
  int v1; // r4@1

  v1 = a1;
  *(_DWORD *)a1 = &off_271ECD8;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 1056964608;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 1067869798;
  *(_BYTE *)(a1 + 20) = 1;
  *(_BYTE *)(a1 + 21) = 0;
  *(_DWORD *)(a1 + 24) = 1028443341;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 12;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 1084227584;
  *(_DWORD *)(a1 + 48) = -1;
  *(_DWORD *)(a1 + 52) = 1082130432;
  *(_DWORD *)(a1 + 56) = 256;
  *(_BYTE *)(a1 + 60) = 0;
  *(_BYTE *)(a1 + 61) = 0;
  *(_QWORD *)(a1 + 64) = 4546834186576425124LL;
  *(_BYTE *)(a1 + 72) = 0;
  sub_21E94B4((void **)(a1 + 76), (const char *)&unk_257BC67);
  sub_21E94B4((void **)(v1 + 80), (const char *)&unk_257BC67);
  *(_DWORD *)(v1 + 92) = 0;
  *(_DWORD *)(v1 + 96) = 0;
  *(_DWORD *)(v1 + 84) = 0;
  *(_DWORD *)(v1 + 88) = 0;
  *(_DWORD *)(v1 + 100) = &unk_28898CC;
  *(_DWORD *)(v1 + 104) = &unk_28898CC;
  *(_DWORD *)(v1 + 136) = 0;
  *(_DWORD *)(v1 + 128) = 0;
  *(_DWORD *)(v1 + 132) = 0;
  *(_DWORD *)(v1 + 120) = 0;
  *(_DWORD *)(v1 + 124) = 0;
  *(_DWORD *)(v1 + 112) = 0;
  *(_DWORD *)(v1 + 116) = 0;
  *(_DWORD *)(v1 + 108) = &off_26F1930;
  *(_DWORD *)(v1 + 140) = 0;
  *(_DWORD *)(v1 + 144) = 1;
  return v1;
}


void __fastcall ProjectileDescription::~ProjectileDescription(ProjectileDescription *this)
{
  ProjectileDescription::~ProjectileDescription(this);
}


void __fastcall ProjectileDescription::getDocumentation(int a1, int a2)
{
  ProjectileDescription::getDocumentation(a1, a2);
}


Json::Value *__fastcall ProjectileDescription::parseData(ProjectileDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  ProjectileDescription *v3; // r5@1
  const Json::Value *v4; // r0@1
  Json::Value *v5; // r0@1
  signed __int64 v6; // r6@3
  int v7; // r0@4
  Vec3 *v8; // r0@4
  Vec3 **v9; // r1@5 OVERLAPPED
  Vec3 **v10; // r2@5
  unsigned int *v11; // r12@13
  signed int v12; // r1@15
  int *v13; // r0@21
  Json::Value *v14; // r0@26
  Vec3 *v16; // [sp+0h] [bp-58h]@1
  unsigned int v17; // [sp+4h] [bp-54h]@3
  unsigned int v18; // [sp+8h] [bp-50h]@3
  char v19; // [sp+10h] [bp-48h]@1
  char v20[4]; // [sp+24h] [bp-34h]@1
  signed int v21; // [sp+28h] [bp-30h]@1
  int v22; // [sp+2Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  j_Parser::parse(
    a2,
    (ProjectileDescription *)((char *)this + 24),
    (float *)"gravity",
    (const char *)0x3D4CCCCD,
    *(float *)&v16);
  j_Parser::parse((int)v2, (int *)v3 + 8, "particle", "iconcrack");
  j_Parser::parse(v2, (ProjectileDescription *)((char *)v3 + 141), (bool *)"reflectOnHurt", 0, (bool)v16);
  j_Parser::parse(v2, (ProjectileDescription *)((char *)v3 + 142), (bool *)"destroyOnHurt", 0, (bool)v16);
  *(_DWORD *)v20 = 0;
  v21 = 1056964608;
  v22 = 0;
  j_Parser::parse(v2, (ProjectileDescription *)((char *)v3 + 4), (Vec3 *)"offset", v20, v16);
    v2,
    (ProjectileDescription *)((char *)v3 + 16),
    (float *)"power",
    (const char *)0x3FA66666,
  j_Parser::parse(v2, (ProjectileDescription *)((char *)v3 + 28), (float *)"angleoffset", 0, *(float *)&v16);
  j_Parser::parse(v2, (ProjectileDescription *)((char *)v3 + 36), (float *)"uncertaintyBase", 0, *(float *)&v16);
  j_Parser::parse(v2, (ProjectileDescription *)((char *)v3 + 40), (float *)"uncertaintyMultiplier", 0, *(float *)&v16);
  j_Parser::parse(v2, (ProjectileDescription *)((char *)v3 + 143), (bool *)"critParticleOnHurt", 0, (bool)v16);
  v4 = (const Json::Value *)j_Json::Value::operator[](v2, "onHit");
  v5 = j_Json::Value::Value((Json::Value *)&v19, v4);
  if ( j_Json::Value::isObject(v5) == 1 && !j_Json::Value::isNull((Json::Value *)&v19) )
  {
    j_Json::Value::getMemberNames((Json::Value *)&v17, (int)&v19);
    v6 = *(_QWORD *)&v17;
    if ( v17 != v18 )
    {
      do
      {
        v7 = j_Json::Value::operator[]((Json::Value *)&v19, (const char **)v6);
        j_ProjectileFactory::createSubcomponent((int **)&v16, v7, (int **)v6);
        v8 = v16;
        if ( v16 )
        {
          *(_QWORD *)&v9 = *(_QWORD *)((char *)v3 + 92);
          if ( v9 == v10 )
          {
            j_std::vector<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>>,std::allocator<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>>>>::_M_emplace_back_aux<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>>>(
              (_QWORD *)v3 + 11,
              (int *)&v16);
          }
          else
            v16 = 0;
            *v9 = v8;
            *((_DWORD *)v3 + 23) = v9 + 1;
          if ( v16 )
            (*(void (**)(void))(*(_DWORD *)v16 + 4))();
        }
        LODWORD(v6) = v6 + 4;
      }
      while ( HIDWORD(v6) != (_DWORD)v6 );
      v6 = __PAIR__(v17, v18);
      if ( v17 != v18 )
        do
          v13 = (int *)(*(_DWORD *)HIDWORD(v6) - 12);
          if ( v13 != &dword_28898C0 )
            v11 = (unsigned int *)(*(_DWORD *)HIDWORD(v6) - 4);
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
              j_j_j_j__ZdlPv_9(v13);
          HIDWORD(v6) += 4;
        while ( HIDWORD(v6) != (_DWORD)v6 );
        LODWORD(v6) = v17;
    }
    if ( (_DWORD)v6 )
      j_operator delete((void *)v6);
  }
  v14 = (Json::Value *)j_Json::Value::operator[](v2, "anchor");
  *((_DWORD *)v3 + 21) = j_Json::Value::asInt(v14, 0);
  j_Parser::parse(v2, (ProjectileDescription *)((char *)v3 + 20), (bool *)"knockback", (const char *)1, (bool)v16);
  j_Parser::parse((int)v2, (char **)v3 + 14, "filter", (const char *)&unk_257BC67);
  j_Parser::parse(v2, (ProjectileDescription *)((char *)v3 + 72), (bool *)"semirandomdiffdamage", 0, (bool)v16);
    (ProjectileDescription *)((char *)v3 + 44),
    (float *)"onFireTime",
    (const char *)0x40A00000,
  j_Parser::parse(v2, (ProjectileDescription *)((char *)v3 + 60), (bool *)"catchFire", 0, (bool)v16);
  j_Parser::parse(v2, (ProjectileDescription *)((char *)v3 + 147), (bool *)"fireAffectedByGriefing", 0, (bool)v16);
    (ProjectileDescription *)((char *)v3 + 48),
    (int *)"potionEffect",
    (const char *)0xFFFFFFFF,
    (int)v16);
    (ProjectileDescription *)((char *)v3 + 52),
    (float *)"splashRange",
    (const char *)0x40800000,
  j_Parser::parse(v2, (ProjectileDescription *)((char *)v3 + 61), (bool *)"splashPotion", 0, (bool)v16);
  j_Parser::parse(v2, (ProjectileDescription *)((char *)v3 + 140), (bool *)"isdangerous", 0, (bool)v16);
  j_Parser::parse(v2, (ProjectileDescription *)((char *)v3 + 144), (bool *)"shoottarget", (const char *)1, (bool)v16);
  j_Parser::parse((int)v2, (int *)v3 + 20, "shootSound", (const char *)&unk_257BC67);
  j_Parser::parse((int)v2, (int *)v3 + 19, "hitSound", (const char *)&unk_257BC67);
    (ProjectileDescription *)((char *)v3 + 64),
    (float *)"inertia",
    (const char *)0x3F7D70A4,
    (ProjectileDescription *)((char *)v3 + 68),
    (float *)"liquid_inertia",
    (const char *)0x3F19999A,
  j_Parser::parse(v2, (ProjectileDescription *)((char *)v3 + 145), (bool *)"homing", 0, (bool)v16);
  j_Parser::parse(v2, (ProjectileDescription *)((char *)v3 + 146), (bool *)"shouldbounce", 0, (bool)v16);
  return j_Json::Value::~Value((Json::Value *)&v19);
}
