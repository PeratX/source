

int __fastcall GameArguments::GameArguments(int result, int a2)
{
  *(_DWORD *)result = &off_26DFB70;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


RakNet *__fastcall GameArguments::onUri(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  int i; // r4@1
  int v5; // r0@2
  unsigned int v6; // r11@4
  __int64 v7; // kr00_8@4
  int v8; // r8@4
  int v9; // r9@5
  _DWORD *v10; // r10@5
  int v11; // r6@5
  _DWORD *v12; // r1@7
  size_t v13; // r2@7
  int v14; // r4@11
  unsigned int v15; // r11@18
  __int64 v16; // kr08_8@18
  unsigned int v17; // r9@18
  int v18; // r5@18
  int v19; // r4@19
  _DWORD *v20; // r10@19
  int v21; // r6@19
  _DWORD *v22; // r1@21
  size_t v23; // r2@21
  int v24; // r7@23
  int v25; // r4@25
  unsigned int v26; // r11@31
  __int64 v27; // kr10_8@31
  unsigned int v28; // r9@31
  int v29; // r5@31
  int v30; // r4@32
  _DWORD *v31; // r10@32
  int v32; // r6@32
  _DWORD *v33; // r1@34
  size_t v34; // r2@34
  int v35; // r7@36
  int v36; // r4@40
  int v37; // r8@40
  void *v38; // r0@44
  int *v39; // r6@47
  _BYTE *v40; // r5@47
  _BYTE *v41; // r0@47
  _BYTE *v42; // r4@47
  bool v43; // zf@47
  int v44; // r2@50
  unsigned int v45; // r3@50
  int v46; // r2@51
  unsigned int v47; // r3@51
  ExternalServerFile *v48; // r0@53
  void *v49; // r0@54
  void *v50; // r0@55
  void *v51; // r0@56
  unsigned int v52; // r11@57
  __int64 v53; // kr18_8@57
  unsigned int v54; // r9@57
  int v55; // r5@57
  int v56; // r4@58
  _DWORD *v57; // r10@58
  int v58; // r6@58
  _DWORD *v59; // r1@60
  size_t v60; // r2@60
  int v61; // r7@62
  int v62; // r4@66
  int v63; // r6@66
  void *v64; // r0@70
  int v65; // r4@72
  void (__fastcall *v66)(int, _DWORD **); // r5@72
  _DWORD *v67; // r0@72
  char *v68; // r0@74
  void *v69; // r0@75
  ClientInstance *v70; // r0@76
  unsigned int v71; // r11@76
  __int64 v72; // kr20_8@76
  unsigned int v73; // r9@76
  int v74; // r5@76
  int v75; // r4@77
  _DWORD *v76; // r10@77
  int v77; // r6@77
  _DWORD *v78; // r1@79
  size_t v79; // r2@79
  int v80; // r7@81
  int v81; // r0@83
  unsigned int v82; // r8@86
  __int64 v83; // kr28_8@86
  unsigned int v84; // r4@86
  int v85; // r7@86
  int v86; // r11@87
  _DWORD *v87; // r10@87
  int v88; // r6@87
  _DWORD *v89; // r1@89
  size_t v90; // r2@89
  int v91; // r4@93
  unsigned int v92; // r11@117
  __int64 v93; // kr30_8@117
  unsigned int v94; // r9@117
  int v95; // r5@117
  int v96; // r4@118
  _DWORD *v97; // r10@118
  int v98; // r6@118
  _DWORD *v99; // r1@120
  size_t v100; // r2@120
  int v101; // r7@122
  int v102; // r5@124
  Option *v103; // r0@128
  char v104; // r6@128
  int v105; // r7@128
  unsigned int *v106; // r1@129
  unsigned int v107; // r0@131
  unsigned int *v108; // r4@135
  unsigned int v109; // r0@137
  char v110; // r3@142
  int v111; // r6@144
  unsigned int *v112; // r1@145
  unsigned int v113; // r0@147
  unsigned int *v114; // r4@151
  unsigned int v115; // r0@153
  unsigned int v116; // r11@158
  __int64 v117; // kr38_8@158
  unsigned int v118; // r9@158
  int v119; // r5@158
  int v120; // r4@159
  _DWORD *v121; // r10@159
  int v122; // r6@159
  _DWORD *v123; // r1@161
  size_t v124; // r2@161
  int v125; // r7@163
  int v126; // r5@167
  int v127; // r8@167
  Option *v128; // r0@170
  char v129; // r6@170
  int v130; // r7@170
  unsigned int *v131; // r1@171
  unsigned int v132; // r0@173
  unsigned int *v133; // r4@177
  unsigned int v134; // r0@179
  char v135; // r3@184
  int v136; // r6@186
  unsigned int *v137; // r1@187
  unsigned int v138; // r0@189
  unsigned int *v139; // r4@193
  unsigned int v140; // r0@195
  unsigned int v141; // r11@200
  __int64 v142; // kr40_8@200
  unsigned int v143; // r9@200
  int v144; // r5@200
  int v145; // r4@201
  _DWORD *v146; // r10@201
  int v147; // r6@201
  _DWORD *v148; // r1@203
  size_t v149; // r2@203
  int v150; // r7@205
  int v151; // r5@209
  int v152; // r8@209
  Option *v153; // r0@212
  char v154; // r6@212
  int v155; // r7@212
  unsigned int *v156; // r1@213
  unsigned int v157; // r0@215
  unsigned int *v158; // r4@219
  unsigned int v159; // r0@221
  char v160; // r3@226
  int v161; // r6@228
  unsigned int *v162; // r1@229
  unsigned int v163; // r0@231
  unsigned int *v164; // r4@235
  unsigned int v165; // r0@237
  unsigned int v166; // r11@242
  __int64 v167; // kr48_8@242
  unsigned int v168; // r9@242
  int v169; // r5@242
  int v170; // r4@243
  _DWORD *v171; // r10@243
  int v172; // r6@243
  _DWORD *v173; // r1@245
  size_t v174; // r2@245
  int v175; // r7@247
  int v176; // r5@251
  int v177; // r8@251
  Option *v178; // r0@254
  char v179; // r6@254
  int v180; // r7@254
  unsigned int *v181; // r1@255
  unsigned int v182; // r0@257
  unsigned int *v183; // r4@261
  unsigned int v184; // r0@263
  char v185; // r3@268
  int v186; // r6@270
  unsigned int *v187; // r1@271
  unsigned int v188; // r0@273
  unsigned int *v189; // r4@277
  unsigned int v190; // r0@279
  unsigned int v191; // r11@284
  __int64 v192; // kr50_8@284
  unsigned int v193; // r9@284
  int v194; // r5@284
  int v195; // r4@285
  _DWORD *v196; // r10@285
  int v197; // r6@285
  _DWORD *v198; // r1@287
  size_t v199; // r2@287
  int v200; // r7@289
  int v201; // r5@291
  Option *v202; // r0@295
  char v203; // r6@295
  int v204; // r7@295
  unsigned int *v205; // r1@296
  unsigned int v206; // r0@298
  unsigned int *v207; // r4@302
  unsigned int v208; // r0@304
  char v209; // r3@309
  int v210; // r6@311
  unsigned int *v211; // r1@312
  unsigned int v212; // r0@314
  unsigned int *v213; // r4@318
  unsigned int v214; // r0@320
  unsigned int v215; // r11@325
  __int64 v216; // kr58_8@325
  unsigned int v217; // r9@325
  int v218; // r5@325
  int v219; // r4@326
  _DWORD *v220; // r10@326
  int v221; // r6@326
  _DWORD *v222; // r1@328
  size_t v223; // r2@328
  int v224; // r7@330
  int v225; // r4@334
  int v226; // r6@334
  int v227; // r5@337
  _DWORD *v228; // r0@337
  _DWORD *v229; // r0@338
  int v230; // r4@340
  void (__fastcall *v231)(int, signed int, char *); // r5@343
  unsigned int v232; // r11@349
  __int64 v233; // kr60_8@349
  unsigned int v234; // r9@349
  int v235; // r5@349
  int v236; // r4@350
  _DWORD *v237; // r10@350
  int v238; // r7@350
  _DWORD *v239; // r1@352
  size_t v240; // r2@352
  int v241; // r6@354
  int v242; // r6@358
  int v243; // r4@358
  GameArgumentCommandOrigin *v244; // r7@361
  ClientInstance *v245; // r0@361
  Minecraft *v246; // r0@361
  int v247; // r5@361
  char *v248; // r0@361
  unsigned int v249; // r10@365
  __int64 v250; // kr68_8@365
  unsigned int v251; // r9@365
  int v252; // r7@365
  int v253; // r4@366
  _DWORD *v254; // r8@366
  int v255; // r5@366
  _DWORD *v256; // r1@368
  size_t v257; // r2@368
  int v258; // r6@370
  int v259; // r5@372
  int v260; // r4@376
  void *v261; // r0@376
  RakNet *result; // r0@377
  unsigned int *v263; // r2@405
  signed int v264; // r1@407
  unsigned int *v265; // r2@409
  signed int v266; // r1@411
  unsigned int *v267; // r2@413
  signed int v268; // r1@415
  unsigned int *v269; // r2@417
  signed int v270; // r1@419
  unsigned int *v271; // r2@421
  signed int v272; // r1@423
  unsigned int *v273; // r2@425
  signed int v274; // r1@427
  unsigned int *v275; // r2@429
  signed int v276; // r1@431
  unsigned int *v277; // r2@433
  signed int v278; // r1@435
  unsigned int *v279; // r2@437
  signed int v280; // r1@439
  unsigned int *v281; // r2@441
  signed int v282; // r1@443
  unsigned int *v283; // r2@445
  signed int v284; // r1@447
  unsigned int *v285; // r2@449
  signed int v286; // r1@451
  unsigned int *v287; // r2@453
  signed int v288; // r1@455
  unsigned int *v289; // r2@457
  signed int v290; // r1@459
  unsigned int *v291; // r2@461
  signed int v292; // r1@463
  unsigned int *v293; // r2@465
  signed int v294; // r1@467
  unsigned int *v295; // r2@469
  signed int v296; // r1@471
  unsigned int *v297; // r2@473
  signed int v298; // r1@475
  unsigned int *v299; // r2@549
  signed int v300; // r1@551
  unsigned int *v301; // r2@553
  signed int v302; // r1@555
  unsigned int *v303; // r2@557
  signed int v304; // r1@559
  int v305; // [sp+10h] [bp-580h]@85
  int v306; // [sp+14h] [bp-57Ch]@76
  int v307; // [sp+18h] [bp-578h]@76
  int v308; // [sp+1Ch] [bp-574h]@76
  int v309; // [sp+20h] [bp-570h]@4
  int v310; // [sp+24h] [bp-56Ch]@5
  int v311; // [sp+24h] [bp-56Ch]@18
  int v312; // [sp+24h] [bp-56Ch]@76
  int v313; // [sp+28h] [bp-568h]@376
  void *v314; // [sp+30h] [bp-560h]@365
  char *v315; // [sp+34h] [bp-55Ch]@361
  GameArgumentCommandOrigin *v316; // [sp+38h] [bp-558h]@361
  void *v317; // [sp+40h] [bp-550h]@349
  char v318; // [sp+44h] [bp-54Ch]@344
  void (*v319)(void); // [sp+4Ch] [bp-544h]@343
  void (__fastcall *v320)(int *); // [sp+50h] [bp-540h]@344
  _DWORD *v321; // [sp+54h] [bp-53Ch]@337
  void (*v322)(void); // [sp+5Ch] [bp-534h]@337
  void (__fastcall *v323)(int *); // [sp+60h] [bp-530h]@337
  void *v324; // [sp+68h] [bp-528h]@325
  char v325; // [sp+6Ch] [bp-524h]@309
  int v326; // [sp+70h] [bp-520h]@311
  void *v327; // [sp+78h] [bp-518h]@284
  char v328; // [sp+7Ch] [bp-514h]@268
  int v329; // [sp+80h] [bp-510h]@270
  void *v330; // [sp+88h] [bp-508h]@242
  char v331; // [sp+8Ch] [bp-504h]@226
  int v332; // [sp+90h] [bp-500h]@228
  void *v333; // [sp+98h] [bp-4F8h]@200
  char v334; // [sp+9Ch] [bp-4F4h]@184
  int v335; // [sp+A0h] [bp-4F0h]@186
  void *v336; // [sp+A8h] [bp-4E8h]@158
  char v337; // [sp+ACh] [bp-4E4h]@142
  int v338; // [sp+B0h] [bp-4E0h]@144
  void *v339; // [sp+B8h] [bp-4D8h]@117
  int v340; // [sp+BCh] [bp-4D4h]@115
  int v341; // [sp+C0h] [bp-4D0h]@115
  void *v342; // [sp+C8h] [bp-4C8h]@86
  void *v343; // [sp+D0h] [bp-4C0h]@76
  int v344; // [sp+D4h] [bp-4BCh]@72
  char *v345; // [sp+D8h] [bp-4B8h]@72
  _DWORD *v346; // [sp+DCh] [bp-4B4h]@72
  void (*v347)(void); // [sp+E4h] [bp-4ACh]@72
  void (__fastcall *v348)(int); // [sp+E8h] [bp-4A8h]@72
  int v349; // [sp+ECh] [bp-4A4h]@69
  void *v350; // [sp+F4h] [bp-49Ch]@57
  int v351; // [sp+F8h] [bp-498h]@52
  int v352; // [sp+FCh] [bp-494h]@52
  int v353; // [sp+100h] [bp-490h]@51
  int v354; // [sp+104h] [bp-48Ch]@50
  void *v355; // [sp+10Ch] [bp-484h]@31
  void *v356; // [sp+114h] [bp-47Ch]@18
  void *s1; // [sp+11Ch] [bp-474h]@4
  int v358; // [sp+120h] [bp-470h]@128
  int v359; // [sp+124h] [bp-46Ch]@128
  char v360; // [sp+12Bh] [bp-465h]@142
  int v361; // [sp+12Ch] [bp-464h]@170
  int v362; // [sp+130h] [bp-460h]@170
  char v363; // [sp+137h] [bp-459h]@184
  int v364; // [sp+138h] [bp-458h]@212
  int v365; // [sp+13Ch] [bp-454h]@212
  char v366; // [sp+143h] [bp-44Dh]@226
  int v367; // [sp+144h] [bp-44Ch]@254
  int v368; // [sp+148h] [bp-448h]@254
  char v369; // [sp+14Fh] [bp-441h]@268
  int v370; // [sp+150h] [bp-440h]@295
  int v371; // [sp+154h] [bp-43Ch]@295
  char v372; // [sp+15Bh] [bp-435h]@309
  bool v373; // [sp+15Ch] [bp-434h]@16
  int v374; // [sp+160h] [bp-430h]@115
  int v375; // [sp+164h] [bp-42Ch]@116
  int v376; // [sp+564h] [bp-2Ch]@116
  RakNet *v377; // [sp+568h] [bp-28h]@1

  v2 = a1;
  v3 = a2;
  v377 = _stack_chk_guard;
  for ( i = *(_DWORD *)(a2 + 12); i; i = *(_DWORD *)i )
  {
    v5 = MinecraftGame::getEventing(*(MinecraftGame **)(v2 + 4));
    MinecraftEventing::fireEventProtocolHandled(v5, (const char **)(i + 4), (const char **)(i + 8));
  }
  sub_119C884(&s1, "oculus_launched");
  v6 = sub_119C9A4((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v309 = v3;
  v7 = *(_QWORD *)(v3 + 4);
  v8 = *(_DWORD *)(v7 + 4 * (v6 % HIDWORD(v7)));
  if ( v8 )
    v9 = *(_DWORD *)v8;
    v310 = v2;
    v10 = s1;
    v11 = *(_DWORD *)(*(_DWORD *)v8 + 12);
    while ( 1 )
    {
      if ( v11 == v6 )
      {
        v12 = *(_DWORD **)(v9 + 4);
        v13 = *(v10 - 3);
        if ( v13 == *(v12 - 3) && !memcmp(v10, v12, v13) )
          break;
      }
      if ( *(_DWORD *)v9 )
        v11 = *(_DWORD *)(v7 + 12);
        v8 = v9;
        v9 = *(_DWORD *)v9;
        if ( *(_DWORD *)(v7 + 12) % HIDWORD(v7) == v6 % HIDWORD(v7) )
          continue;
      goto LABEL_11;
    }
    if ( !v8 )
LABEL_11:
      v14 = 0;
      goto LABEL_12;
    v14 = *(_DWORD *)v8;
LABEL_12:
    v2 = v310;
  else
    v14 = 0;
  if ( v10 - 3 != &dword_28898C0 )
    v263 = v10 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v264 = __ldrex(v263);
      while ( __strex(v264 - 1, v263) );
    else
      v264 = (*v263)--;
    if ( v264 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10 - 3);
  if ( v14 )
    v373 = 0;
    if ( Util::toBool((unsigned int *)(v14 + 8), &v373) == 1 )
      MinecraftGame::setLaunchedForHMD(*(_DWORD *)(v2 + 4), v373);
  sub_119C884(&v356, "edu");
  v311 = v2;
  v15 = sub_119C9A4((int *)v356, *((_DWORD *)v356 - 3), -955291385);
  v16 = *(_QWORD *)(v3 + 4);
  v17 = v15 % (unsigned int)(*(_QWORD *)(v3 + 4) >> 32);
  v18 = *(_DWORD *)(v16 + 4 * v17);
  if ( v18 )
    v19 = *(_DWORD *)v18;
    v20 = v356;
    v21 = *(_DWORD *)(*(_DWORD *)v18 + 12);
      if ( v21 == v15 )
        v22 = *(_DWORD **)(v19 + 4);
        v23 = *(v20 - 3);
        if ( v23 == *(v22 - 3) && !memcmp(v20, v22, v23) )
      v24 = *(_DWORD *)v19;
      if ( *(_DWORD *)v19 )
        v21 = *(_DWORD *)(v24 + 12);
        v18 = v16;
        v19 = *(_DWORD *)v16;
        if ( *(_DWORD *)(v24 + 12) % HIDWORD(v16) == v17 )
      goto LABEL_25;
    if ( !v18 )
LABEL_25:
      v25 = 0;
      goto LABEL_27;
    v25 = *(_DWORD *)v18;
    v25 = 0;
LABEL_27:
  if ( v20 - 3 != &dword_28898C0 )
    v265 = v20 - 1;
        v266 = __ldrex(v265);
      while ( __strex(v266 - 1, v265) );
      v266 = (*v265)--;
    if ( v266 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20 - 3);
  if ( v25 )
    if ( Util::toBool((unsigned int *)(v25 + 8), &v373) == 1 )
      MinecraftGame::setEduMode(*(MinecraftGame **)(v311 + 4), v373);
  sub_119C884(&v355, "addExternalServer");
  v26 = sub_119C9A4((int *)v355, *((_DWORD *)v355 - 3), -955291385);
  v27 = *(_QWORD *)(v309 + 4);
  v28 = v26 % (unsigned int)(*(_QWORD *)(v309 + 4) >> 32);
  v29 = *(_DWORD *)(v27 + 4 * v28);
  if ( v29 )
    v30 = *(_DWORD *)v29;
    v31 = v355;
    v32 = *(_DWORD *)(*(_DWORD *)v29 + 12);
      if ( v32 == v26 )
        v33 = *(_DWORD **)(v30 + 4);
        v34 = *(v31 - 3);
        if ( v34 == *(v33 - 3) && !memcmp(v31, v33, v34) )
      v35 = *(_DWORD *)v30;
      if ( *(_DWORD *)v30 )
        v32 = *(_DWORD *)(v35 + 12);
        v29 = v27;
        v30 = *(_DWORD *)v27;
        if ( *(_DWORD *)(v35 + 12) % HIDWORD(v27) == v28 )
      goto LABEL_40;
    v37 = v311;
    if ( v29 )
      v36 = *(_DWORD *)v29;
      v36 = 0;
LABEL_40:
    v36 = 0;
  if ( v31 - 3 != &dword_28898C0 )
    v267 = v31 - 1;
        v268 = __ldrex(v267);
      while ( __strex(v268 - 1, v267) );
      v268 = (*v267)--;
    if ( v268 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31 - 3);
  if ( v36 )
    v38 = *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) ? ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) : &ServiceLocator<AppPlatform>::mDefaultService;
    if ( (*(int (**)(void))(**(_DWORD **)v38 + 156))() == 1 )
      v39 = (int *)(v36 + 8);
      v40 = sub_119E224((int *)(v36 + 8), 124, 0xFFFFFFFF);
      v41 = sub_119E224((int *)(v36 + 8), 58, 0xFFFFFFFF);
      v42 = v41;
      v43 = v40 + 1 == 0;
      if ( v40 != (_BYTE *)-1 )
        v43 = v41 + 1 == 0;
      if ( !v43 )
        sub_119C8C4((void **)&v354, v39, 0, (unsigned int)v40);
        v44 = (int)(v40 + 1);
        v45 = *(_DWORD *)(*v39 - 12);
        if ( v45 < (unsigned int)(v40 + 1) )
          sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v44, v45);
        sub_119C8C4((void **)&v353, v39, v44, (unsigned int)&v42[-v44]);
        v46 = (int)(v42 + 1);
        v47 = *(_DWORD *)(*v39 - 12);
        if ( v47 < (unsigned int)(v42 + 1) )
          sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v46, v47);
        sub_119C8C4((void **)&v352, v39, v46, 0xFFFFFFFF);
        v351 = 0;
        if ( !Util::toInt<int,(void *)0>((unsigned int *)&v352, &v351) )
        {
          v48 = (ExternalServerFile *)MinecraftGame::getExternalServer(*(MinecraftGame **)(v37 + 4));
          ExternalServerFile::addServer(v48, &v354, (void **)&v353, v351);
          MinecraftGame::navigateToPlayScreenFriendsTab(*(MinecraftGame **)(v37 + 4));
        }
        v49 = (void *)(v352 - 12);
        if ( (int *)(v352 - 12) != &dword_28898C0 )
          v299 = (unsigned int *)(v352 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v300 = __ldrex(v299);
            while ( __strex(v300 - 1, v299) );
          }
          else
            v300 = (*v299)--;
          if ( v300 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v49);
        v50 = (void *)(v353 - 12);
        if ( (int *)(v353 - 12) != &dword_28898C0 )
          v301 = (unsigned int *)(v353 - 4);
              v302 = __ldrex(v301);
            while ( __strex(v302 - 1, v301) );
            v302 = (*v301)--;
          if ( v302 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v50);
        v51 = (void *)(v354 - 12);
        if ( (int *)(v354 - 12) != &dword_28898C0 )
          v303 = (unsigned int *)(v354 - 4);
              v304 = __ldrex(v303);
            while ( __strex(v304 - 1, v303) );
            v304 = (*v303)--;
          if ( v304 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v51);
  sub_119C884(&v350, "showStoreOffer");
  v52 = sub_119C9A4((int *)v350, *((_DWORD *)v350 - 3), -955291385);
  v53 = *(_QWORD *)(v309 + 4);
  v54 = v52 % (unsigned int)(*(_QWORD *)(v309 + 4) >> 32);
  v55 = *(_DWORD *)(v53 + 4 * v54);
  if ( v55 )
    v56 = *(_DWORD *)v55;
    v57 = v350;
    v58 = *(_DWORD *)(*(_DWORD *)v55 + 12);
      if ( v58 == v52 )
        v59 = *(_DWORD **)(v56 + 4);
        v60 = *(v57 - 3);
        if ( v60 == *(v59 - 3) && !memcmp(v57, v59, v60) )
      v61 = *(_DWORD *)v56;
      if ( *(_DWORD *)v56 )
        v58 = *(_DWORD *)(v61 + 12);
        v55 = v53;
        v56 = *(_DWORD *)v53;
        if ( *(_DWORD *)(v61 + 12) % HIDWORD(v53) == v54 )
      goto LABEL_66;
    v63 = v311;
    if ( v55 )
      v62 = *(_DWORD *)v55;
      v62 = 0;
LABEL_66:
    v62 = 0;
  if ( v57 - 3 != &dword_28898C0 )
    v269 = v57 - 1;
        v270 = __ldrex(v269);
      while ( __strex(v270 - 1, v269) );
      v270 = (*v269)--;
    if ( v270 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v57 - 3);
  if ( v62 )
    sub_119C854(&v349, (int *)(v62 + 8));
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v64 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v64 = &ServiceLocator<AppPlatform>::mDefaultService;
    v65 = *(_DWORD *)v64;
    v66 = *(void (__fastcall **)(int, _DWORD **))(**(_DWORD **)v64 + 348);
    v344 = v63;
    sub_119C854((int *)&v345, &v349);
    v347 = 0;
    v67 = operator new(8u);
    *v67 = v63;
    v67[1] = v345;
    v345 = (char *)&unk_28898CC;
    v346 = v67;
    v347 = (void (*)(void))sub_10FAA20;
    v348 = sub_10FA9E8;
    v66(v65, &v346);
    if ( v347 )
      v347();
    v68 = v345 - 12;
    if ( (int *)(v345 - 12) != &dword_28898C0 )
      v291 = (unsigned int *)(v345 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v292 = __ldrex(v291);
        while ( __strex(v292 - 1, v291) );
      else
        v292 = (*v291)--;
      if ( v292 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v68);
    v69 = (void *)(v349 - 12);
    if ( (int *)(v349 - 12) != &dword_28898C0 )
      v293 = (unsigned int *)(v349 - 4);
          v294 = __ldrex(v293);
        while ( __strex(v294 - 1, v293) );
        v294 = (*v293)--;
      if ( v294 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v69);
  v308 = MinecraftGame::getResourcePackRepository(*(MinecraftGame **)(v63 + 4));
  v307 = MinecraftGame::getEventing(*(MinecraftGame **)(v63 + 4));
  v70 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(v63 + 4));
  v306 = ClientInstance::getToastManager(v70);
  sub_119C884(&v343, "fromtempfile");
  v312 = v63;
  v71 = sub_119C9A4((int *)v343, *((_DWORD *)v343 - 3), -955291385);
  v72 = *(_QWORD *)(v309 + 4);
  v73 = v71 % (unsigned int)(*(_QWORD *)(v309 + 4) >> 32);
  v74 = *(_DWORD *)(v72 + 4 * v73);
  if ( v74 )
    v75 = *(_DWORD *)v74;
    v76 = v343;
    v77 = *(_DWORD *)(*(_DWORD *)v74 + 12);
      if ( v77 == v71 )
        v78 = *(_DWORD **)(v75 + 4);
        v79 = *(v76 - 3);
        if ( v79 == *(v78 - 3) && !memcmp(v76, v78, v79) )
      v80 = *(_DWORD *)v75;
      if ( *(_DWORD *)v75 )
        v77 = *(_DWORD *)(v80 + 12);
        v74 = v72;
        v75 = *(_DWORD *)v72;
        if ( *(_DWORD *)(v80 + 12) % HIDWORD(v72) == v73 )
      goto LABEL_83;
    if ( !v74 )
LABEL_83:
      v81 = 0;
      goto LABEL_85;
    v81 = *(_DWORD *)v74;
    v81 = 0;
LABEL_85:
  v305 = v81;
  if ( v76 - 3 != &dword_28898C0 )
    v271 = v76 - 1;
        v272 = __ldrex(v271);
      while ( __strex(v272 - 1, v271) );
      v272 = (*v271)--;
    if ( v272 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v76 - 3);
  sub_119C884(&v342, "originalpath");
  v82 = sub_119C9A4((int *)v342, *((_DWORD *)v342 - 3), -955291385);
  v83 = *(_QWORD *)(v309 + 4);
  v84 = v82 % (unsigned int)(*(_QWORD *)(v309 + 4) >> 32);
  v85 = *(_DWORD *)(v83 + 4 * v84);
  if ( v85 )
    v86 = *(_DWORD *)v85;
    v87 = v342;
    v88 = *(_DWORD *)(*(_DWORD *)v85 + 12);
      if ( v88 == v82 )
        v89 = *(_DWORD **)(v86 + 4);
        v90 = *(v87 - 3);
        if ( v90 == *(v89 - 3) && !memcmp(v87, v89, v90) )
      if ( !*(_DWORD *)v86 )
        v91 = 0;
        goto LABEL_113;
      v88 = *(_DWORD *)(v83 + 12);
      v85 = v86;
      v86 = *(_DWORD *)v86;
      if ( *(_DWORD *)(v83 + 12) % HIDWORD(v83) != v84 )
    if ( v85 )
      v91 = *(_DWORD *)v85;
      v91 = 0;
    v91 = 0;
LABEL_113:
  if ( v87 - 3 != &dword_28898C0 )
    v273 = v87 - 1;
        v274 = __ldrex(v273);
      while ( __strex(v274 - 1, v273) );
      v274 = (*v273)--;
    if ( v274 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v87 - 3);
  if ( v91 )
    v340 = *(_DWORD *)(v91 + 8);
    v341 = *(_DWORD *)(v340 - 12);
    File::cleanPath((int)&v374, (__int64 *)&v340);
    v374 = 1023;
    v376 = unk_27D7A84;
    _aeabi_memcpy4(&v375, &unk_27D7684, unk_27D7A84 + 1);
  sub_119C884(&v339, "import");
  v92 = sub_119C9A4((int *)v339, *((_DWORD *)v339 - 3), -955291385);
  v93 = *(_QWORD *)(v309 + 4);
  v94 = v92 % (unsigned int)(*(_QWORD *)(v309 + 4) >> 32);
  v95 = *(_DWORD *)(v93 + 4 * v94);
  if ( v95 )
    v96 = *(_DWORD *)v95;
    v97 = v339;
    v98 = *(_DWORD *)(*(_DWORD *)v95 + 12);
      if ( v98 == v92 )
        v99 = *(_DWORD **)(v96 + 4);
        v100 = *(v97 - 3);
        if ( v100 == *(v99 - 3) && !memcmp(v97, v99, v100) )
      v101 = *(_DWORD *)v96;
      if ( *(_DWORD *)v96 )
        v98 = *(_DWORD *)(v101 + 12);
        v95 = v93;
        v96 = *(_DWORD *)v93;
        if ( *(_DWORD *)(v101 + 12) % HIDWORD(v93) == v94 )
      goto LABEL_124;
    if ( !v95 )
LABEL_124:
      v102 = 0;
      goto LABEL_126;
    v102 = *(_DWORD *)v95;
    v102 = 0;
LABEL_126:
  if ( v97 - 3 != &dword_28898C0 )
    v275 = v97 - 1;
        v276 = __ldrex(v275);
      while ( __strex(v276 - 1, v275) );
      v276 = (*v275)--;
    if ( v276 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v97 - 3);
  if ( v102 )
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v358, *(_DWORD *)(v312 + 4));
    v103 = (Option *)Options::get(v358, 159);
    v104 = Option::getBool(v103);
    v105 = v359;
    if ( v359 )
      v106 = (unsigned int *)(v359 + 4);
          v107 = __ldrex(v106);
        while ( __strex(v107 - 1, v106) );
        v107 = (*v106)--;
      if ( v107 == 1 )
        v108 = (unsigned int *)(v105 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v105 + 8))(v105);
        if ( &pthread_create )
          __dmb();
          do
            v109 = __ldrex(v108);
          while ( __strex(v109 - 1, v108) );
        else
          v109 = (*v108)--;
        if ( v109 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v105 + 12))(v105);
    v360 = v104;
    std::__shared_ptr<DefaultImportContext,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<DefaultImportContext>,ResourcePackRepository &,MinecraftEventing &,ToastManager &,Core::PathBuffer<Core::PathBuffer::StackString<char,1024u>> &,bool &>(
      (int)&v337,
      (int)&v373,
      v308,
      v307,
      v306,
      (int)&v374,
      &v360);
    v110 = v305;
    if ( v305 )
      v110 = 1;
    GameArguments::_tryImport_RequestPermission(v312, (int)&v337, (int *)(v102 + 8), v110, 0);
    v111 = v338;
    if ( v338 )
      v112 = (unsigned int *)(v338 + 4);
          v113 = __ldrex(v112);
        while ( __strex(v113 - 1, v112) );
        v113 = (*v112)--;
      if ( v113 == 1 )
        v114 = (unsigned int *)(v111 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v111 + 8))(v111);
            v115 = __ldrex(v114);
          while ( __strex(v115 - 1, v114) );
          v115 = (*v114)--;
        if ( v115 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v111 + 12))(v111);
  sub_119C884(&v336, "importload");
  v116 = sub_119C9A4((int *)v336, *((_DWORD *)v336 - 3), -955291385);
  v117 = *(_QWORD *)(v309 + 4);
  v118 = v116 % (unsigned int)(*(_QWORD *)(v309 + 4) >> 32);
  v119 = *(_DWORD *)(v117 + 4 * v118);
  if ( v119 )
    v120 = *(_DWORD *)v119;
    v121 = v336;
    v122 = *(_DWORD *)(*(_DWORD *)v119 + 12);
      if ( v122 == v116 )
        v123 = *(_DWORD **)(v120 + 4);
        v124 = *(v121 - 3);
        if ( v124 == *(v123 - 3) && !memcmp(v121, v123, v124) )
      v125 = *(_DWORD *)v120;
      if ( *(_DWORD *)v120 )
        v122 = *(_DWORD *)(v125 + 12);
        v119 = v117;
        v120 = *(_DWORD *)v117;
        if ( *(_DWORD *)(v125 + 12) % HIDWORD(v117) == v118 )
      goto LABEL_167;
    v127 = v312;
    if ( v119 )
      v126 = *(_DWORD *)v119;
      v126 = 0;
LABEL_167:
    v126 = 0;
  if ( v121 - 3 != &dword_28898C0 )
    v277 = v121 - 1;
        v278 = __ldrex(v277);
      while ( __strex(v278 - 1, v277) );
      v278 = (*v277)--;
    if ( v278 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v121 - 3);
  if ( v126 )
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v361, *(_DWORD *)(v127 + 4));
    v128 = (Option *)Options::get(v361, 159);
    v129 = Option::getBool(v128);
    v130 = v362;
    if ( v362 )
      v131 = (unsigned int *)(v362 + 4);
          v132 = __ldrex(v131);
        while ( __strex(v132 - 1, v131) );
        v132 = (*v131)--;
      if ( v132 == 1 )
        v133 = (unsigned int *)(v130 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v130 + 8))(v130);
            v134 = __ldrex(v133);
          while ( __strex(v134 - 1, v133) );
          v134 = (*v133)--;
        if ( v134 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v130 + 12))(v130);
    v363 = v129;
      (int)&v334,
      &v363);
    v135 = v305;
      v135 = 1;
    GameArguments::_tryImport_RequestPermission(v127, (int)&v334, (int *)(v126 + 8), v135, 1);
    v136 = v335;
    if ( v335 )
      v137 = (unsigned int *)(v335 + 4);
          v138 = __ldrex(v137);
        while ( __strex(v138 - 1, v137) );
        v138 = (*v137)--;
      if ( v138 == 1 )
        v139 = (unsigned int *)(v136 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v136 + 8))(v136);
            v140 = __ldrex(v139);
          while ( __strex(v140 - 1, v139) );
          v140 = (*v139)--;
        if ( v140 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v136 + 12))(v136);
  sub_119C884(&v333, "importpack");
  v141 = sub_119C9A4((int *)v333, *((_DWORD *)v333 - 3), -955291385);
  v142 = *(_QWORD *)(v309 + 4);
  v143 = v141 % (unsigned int)(*(_QWORD *)(v309 + 4) >> 32);
  v144 = *(_DWORD *)(v142 + 4 * v143);
  if ( v144 )
    v145 = *(_DWORD *)v144;
    v146 = v333;
    v147 = *(_DWORD *)(*(_DWORD *)v144 + 12);
      if ( v147 == v141 )
        v148 = *(_DWORD **)(v145 + 4);
        v149 = *(v146 - 3);
        if ( v149 == *(v148 - 3) && !memcmp(v146, v148, v149) )
      v150 = *(_DWORD *)v145;
      if ( *(_DWORD *)v145 )
        v147 = *(_DWORD *)(v150 + 12);
        v144 = v142;
        v145 = *(_DWORD *)v142;
        if ( *(_DWORD *)(v150 + 12) % HIDWORD(v142) == v143 )
      goto LABEL_209;
    v152 = v312;
    if ( v144 )
      v151 = *(_DWORD *)v144;
      v151 = 0;
LABEL_209:
    v151 = 0;
  if ( v146 - 3 != &dword_28898C0 )
    v279 = v146 - 1;
        v280 = __ldrex(v279);
      while ( __strex(v280 - 1, v279) );
      v280 = (*v279)--;
    if ( v280 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v146 - 3);
  if ( v151 )
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v364, *(_DWORD *)(v152 + 4));
    v153 = (Option *)Options::get(v364, 159);
    v154 = Option::getBool(v153);
    v155 = v365;
    if ( v365 )
      v156 = (unsigned int *)(v365 + 4);
          v157 = __ldrex(v156);
        while ( __strex(v157 - 1, v156) );
        v157 = (*v156)--;
      if ( v157 == 1 )
        v158 = (unsigned int *)(v155 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v155 + 8))(v155);
            v159 = __ldrex(v158);
          while ( __strex(v159 - 1, v158) );
          v159 = (*v158)--;
        if ( v159 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v155 + 12))(v155);
    v366 = v154;
      (int)&v331,
      &v366);
    v160 = v305;
      v160 = 1;
    GameArguments::_tryImport_RequestPermission(v152, (int)&v331, (int *)(v151 + 8), v160, 0);
    v161 = v332;
    if ( v332 )
      v162 = (unsigned int *)(v332 + 4);
          v163 = __ldrex(v162);
        while ( __strex(v163 - 1, v162) );
        v163 = (*v162)--;
      if ( v163 == 1 )
        v164 = (unsigned int *)(v161 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v161 + 8))(v161);
            v165 = __ldrex(v164);
          while ( __strex(v165 - 1, v164) );
          v165 = (*v164)--;
        if ( v165 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v161 + 12))(v161);
  sub_119C884(&v330, "importtemplate");
  v166 = sub_119C9A4((int *)v330, *((_DWORD *)v330 - 3), -955291385);
  v167 = *(_QWORD *)(v309 + 4);
  v168 = v166 % (unsigned int)(*(_QWORD *)(v309 + 4) >> 32);
  v169 = *(_DWORD *)(v167 + 4 * v168);
  if ( v169 )
    v170 = *(_DWORD *)v169;
    v171 = v330;
    v172 = *(_DWORD *)(*(_DWORD *)v169 + 12);
      if ( v172 == v166 )
        v173 = *(_DWORD **)(v170 + 4);
        v174 = *(v171 - 3);
        if ( v174 == *(v173 - 3) && !memcmp(v171, v173, v174) )
      v175 = *(_DWORD *)v170;
      if ( *(_DWORD *)v170 )
        v172 = *(_DWORD *)(v175 + 12);
        v169 = v167;
        v170 = *(_DWORD *)v167;
        if ( *(_DWORD *)(v175 + 12) % HIDWORD(v167) == v168 )
      goto LABEL_251;
    v177 = v312;
    if ( v169 )
      v176 = *(_DWORD *)v169;
      v176 = 0;
LABEL_251:
    v176 = 0;
  if ( v171 - 3 != &dword_28898C0 )
    v281 = v171 - 1;
        v282 = __ldrex(v281);
      while ( __strex(v282 - 1, v281) );
      v282 = (*v281)--;
    if ( v282 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v171 - 3);
  if ( v176 )
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v367, *(_DWORD *)(v177 + 4));
    v178 = (Option *)Options::get(v367, 159);
    v179 = Option::getBool(v178);
    v180 = v368;
    if ( v368 )
      v181 = (unsigned int *)(v368 + 4);
          v182 = __ldrex(v181);
        while ( __strex(v182 - 1, v181) );
        v182 = (*v181)--;
      if ( v182 == 1 )
        v183 = (unsigned int *)(v180 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v180 + 8))(v180);
            v184 = __ldrex(v183);
          while ( __strex(v184 - 1, v183) );
          v184 = (*v183)--;
        if ( v184 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v180 + 12))(v180);
    v369 = v179;
      (int)&v328,
      &v369);
    v185 = v305;
      v185 = 1;
    GameArguments::_tryImport_RequestPermission(v177, (int)&v328, (int *)(v176 + 8), v185, 0);
    v186 = v329;
    if ( v329 )
      v187 = (unsigned int *)(v329 + 4);
          v188 = __ldrex(v187);
        while ( __strex(v188 - 1, v187) );
        v188 = (*v187)--;
      if ( v188 == 1 )
        v189 = (unsigned int *)(v186 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v186 + 8))(v186);
            v190 = __ldrex(v189);
          while ( __strex(v190 - 1, v189) );
          v190 = (*v189)--;
        if ( v190 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v186 + 12))(v186);
  sub_119C884(&v327, "importaddon");
  v191 = sub_119C9A4((int *)v327, *((_DWORD *)v327 - 3), -955291385);
  v192 = *(_QWORD *)(v309 + 4);
  v193 = v191 % (unsigned int)(*(_QWORD *)(v309 + 4) >> 32);
  v194 = *(_DWORD *)(v192 + 4 * v193);
  if ( v194 )
    v195 = *(_DWORD *)v194;
    v196 = v327;
    v197 = *(_DWORD *)(*(_DWORD *)v194 + 12);
      if ( v197 == v191 )
        v198 = *(_DWORD **)(v195 + 4);
        v199 = *(v196 - 3);
        if ( v199 == *(v198 - 3) && !memcmp(v196, v198, v199) )
      v200 = *(_DWORD *)v195;
      if ( *(_DWORD *)v195 )
        v197 = *(_DWORD *)(v200 + 12);
        v194 = v192;
        v195 = *(_DWORD *)v192;
        if ( *(_DWORD *)(v200 + 12) % HIDWORD(v192) == v193 )
      goto LABEL_291;
    if ( !v194 )
LABEL_291:
      v201 = 0;
      goto LABEL_293;
    v201 = *(_DWORD *)v194;
    v201 = 0;
LABEL_293:
  if ( v196 - 3 != &dword_28898C0 )
    v283 = v196 - 1;
        v284 = __ldrex(v283);
      while ( __strex(v284 - 1, v283) );
      v284 = (*v283)--;
    if ( v284 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v196 - 3);
  if ( v201 )
    MinecraftGame::getPrimaryUserOptions((MinecraftGame *)&v370, *(_DWORD *)(v312 + 4));
    v202 = (Option *)Options::get(v370, 159);
    v203 = Option::getBool(v202);
    v204 = v371;
    if ( v371 )
      v205 = (unsigned int *)(v371 + 4);
          v206 = __ldrex(v205);
        while ( __strex(v206 - 1, v205) );
        v206 = (*v205)--;
      if ( v206 == 1 )
        v207 = (unsigned int *)(v204 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v204 + 8))(v204);
            v208 = __ldrex(v207);
          while ( __strex(v208 - 1, v207) );
          v208 = (*v207)--;
        if ( v208 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v204 + 12))(v204);
    v372 = v203;
      (int)&v325,
      &v372);
    v209 = v305;
      v209 = 1;
    GameArguments::_tryImport_RequestPermission(v312, (int)&v325, (int *)(v201 + 8), v209, 0);
    v210 = v326;
    if ( v326 )
      v211 = (unsigned int *)(v326 + 4);
          v212 = __ldrex(v211);
        while ( __strex(v212 - 1, v211) );
        v212 = (*v211)--;
      if ( v212 == 1 )
        v213 = (unsigned int *)(v210 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v210 + 8))(v210);
            v214 = __ldrex(v213);
          while ( __strex(v214 - 1, v213) );
          v214 = (*v213)--;
        if ( v214 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v210 + 12))(v210);
  sub_119C884(&v324, "load");
  v215 = sub_119C9A4((int *)v324, *((_DWORD *)v324 - 3), -955291385);
  v216 = *(_QWORD *)(v309 + 4);
  v217 = v215 % (unsigned int)(*(_QWORD *)(v309 + 4) >> 32);
  v218 = *(_DWORD *)(v216 + 4 * v217);
  if ( v218 )
    v219 = *(_DWORD *)v218;
    v220 = v324;
    v221 = *(_DWORD *)(*(_DWORD *)v218 + 12);
      if ( v221 == v215 )
        v222 = *(_DWORD **)(v219 + 4);
        v223 = *(v220 - 3);
        if ( v223 == *(v222 - 3) && !memcmp(v220, v222, v223) )
      v224 = *(_DWORD *)v219;
      if ( *(_DWORD *)v219 )
        v221 = *(_DWORD *)(v224 + 12);
        v218 = v216;
        v219 = *(_DWORD *)v216;
        if ( *(_DWORD *)(v224 + 12) % HIDWORD(v216) == v217 )
      goto LABEL_334;
    v226 = v312;
    if ( v218 )
      v225 = *(_DWORD *)v218;
      v225 = 0;
LABEL_334:
    v225 = 0;
  if ( v220 - 3 != &dword_28898C0 )
    v285 = v220 - 1;
        v286 = __ldrex(v285);
      while ( __strex(v286 - 1, v285) );
      v286 = (*v285)--;
    if ( v286 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v220 - 3);
  if ( v225 )
    v227 = *(_DWORD *)(v226 + 4);
    v228 = operator new(8u);
    v228[1] = v227;
    *v228 = v225;
    v321 = v228;
    v322 = (void (*)(void))sub_10FAB78;
    v323 = sub_10FAAC0;
      v229 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v229 = &ServiceLocator<AppPlatform>::mDefaultService;
    v230 = *v229;
    if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v229 + 236))(*v229) == 1 )
      if ( !v322 )
        sub_119C8E4();
      v323((int *)&v321);
      v231 = *(void (__fastcall **)(int, signed int, char *))(*(_DWORD *)v230 + 208);
      v319 = 0;
      if ( v322 )
        ((void (__fastcall *)(char *, _DWORD **, signed int))v322)(&v318, &v321, 2);
        v320 = v323;
        v319 = v322;
      v231(v230, 1, &v318);
      if ( v319 )
        v319();
    if ( v322 )
      v322();
  sub_119C884(&v317, "slashcommand");
  v232 = sub_119C9A4((int *)v317, *((_DWORD *)v317 - 3), -955291385);
  v233 = *(_QWORD *)(v309 + 4);
  v234 = v232 % (unsigned int)(*(_QWORD *)(v309 + 4) >> 32);
  v235 = *(_DWORD *)(v233 + 4 * v234);
  if ( v235 )
    v236 = *(_DWORD *)v235;
    v237 = v317;
    v238 = *(_DWORD *)(*(_DWORD *)v235 + 12);
      if ( v238 == v232 )
        v239 = *(_DWORD **)(v236 + 4);
        v240 = *(v237 - 3);
        if ( v240 == *(v239 - 3) && !memcmp(v237, v239, v240) )
      v241 = *(_DWORD *)v236;
      if ( *(_DWORD *)v236 )
        v238 = *(_DWORD *)(v241 + 12);
        v235 = v233;
        v236 = *(_DWORD *)v233;
        if ( *(_DWORD *)(v241 + 12) % HIDWORD(v233) == v234 )
      goto LABEL_358;
    v243 = v312;
    if ( v235 )
      v242 = *(_DWORD *)v235;
      v242 = 0;
LABEL_358:
    v242 = 0;
  if ( v237 - 3 != &dword_28898C0 )
    v287 = v237 - 1;
        v288 = __ldrex(v287);
      while ( __strex(v288 - 1, v287) );
      v288 = (*v287)--;
    if ( v288 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v237 - 3);
  if ( v242 )
    v244 = (GameArgumentCommandOrigin *)operator new(8u);
    GameArgumentCommandOrigin::GameArgumentCommandOrigin(v244);
    v245 = (ClientInstance *)MinecraftGame::getPrimaryClientInstance(*(MinecraftGame **)(v243 + 4));
    v246 = (Minecraft *)ClientInstance::getServerData(v245);
    v247 = Minecraft::getCommands(v246);
    v316 = v244;
    v315 = (char *)&unk_28898CC;
    sub_119CAF8((const void **)&v315, *(_DWORD *)(*(_DWORD *)(v242 + 8) - 12) + 1);
    sub_119C894((const void **)&v315, "/", 1u);
    sub_119C8A4((const void **)&v315, (const void **)(v242 + 8));
    MinecraftCommands::requestCommandExecution(v247, (int *)&v316, (int *)&v315, 3, 0);
    v248 = v315 - 12;
    if ( (int *)(v315 - 12) != &dword_28898C0 )
      v297 = (unsigned int *)(v315 - 4);
          v298 = __ldrex(v297);
        while ( __strex(v298 - 1, v297) );
        v298 = (*v297)--;
      if ( v298 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v248);
    if ( v316 )
      (*(void (**)(void))(*(_DWORD *)v316 + 4))();
    v316 = 0;
  sub_119C884(&v314, "inviteID");
  v249 = sub_119C9A4((int *)v314, *((_DWORD *)v314 - 3), -955291385);
  v250 = *(_QWORD *)(v309 + 4);
  v251 = v249 % (unsigned int)(*(_QWORD *)(v309 + 4) >> 32);
  v252 = *(_DWORD *)(v250 + 4 * v251);
  if ( v252 )
    v253 = *(_DWORD *)v252;
    v254 = v314;
    v255 = *(_DWORD *)(*(_DWORD *)v252 + 12);
      if ( v255 == v249 )
        v256 = *(_DWORD **)(v253 + 4);
        v257 = *(v254 - 3);
        if ( v257 == *(v256 - 3) && !memcmp(v254, v256, v257) )
      v258 = *(_DWORD *)v253;
      if ( *(_DWORD *)v253 )
        v255 = *(_DWORD *)(v258 + 12);
        v252 = v250;
        v253 = *(_DWORD *)v250;
        if ( *(_DWORD *)(v258 + 12) % HIDWORD(v250) == v251 )
      goto LABEL_372;
    if ( !v252 )
LABEL_372:
      v259 = 0;
      goto LABEL_374;
    v259 = *(_DWORD *)v252;
    v259 = 0;
LABEL_374:
  if ( v254 - 3 != &dword_28898C0 )
    v289 = v254 - 1;
        v290 = __ldrex(v289);
      while ( __strex(v290 - 1, v289) );
      v290 = (*v289)--;
    if ( v290 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v254 - 3);
  if ( v259 )
    v260 = MinecraftGame::getLevelLoader(*(MinecraftGame **)(v312 + 4));
    sub_119C854(&v313, (int *)(v259 + 8));
    LevelLoader::setRealmForLoad(v260, &v313);
    v261 = (void *)(v313 - 12);
    if ( (int *)(v313 - 12) != &dword_28898C0 )
      v295 = (unsigned int *)(v313 - 4);
          v296 = __ldrex(v295);
        while ( __strex(v296 - 1, v295) );
        v296 = (*v295)--;
      if ( v296 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v261);
  result = (RakNet *)(_stack_chk_guard - v377);
  if ( _stack_chk_guard != v377 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall GameArguments::_tryImport_RequestPermission(int a1, int a2, int *a3, char a4, char a5)
{
  int v5; // r5@1
  char v6; // r4@1
  int v7; // r0@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  _DWORD *v10; // r0@7
  int v11; // r5@7
  int v12; // r0@7
  void *v13; // r0@7
  int v14; // r4@8
  unsigned int *v15; // r1@9
  unsigned int v16; // r0@11
  unsigned int *v17; // r5@15
  unsigned int v18; // r0@17
  _DWORD *v19; // r0@23
  int v20; // r4@25
  int result; // r0@27
  int (__fastcall *v22)(int, signed int, char *); // r5@28
  unsigned int *v23; // r2@35
  signed int v24; // r1@37
  char v25; // [sp+4h] [bp-4Ch]@29
  int (*v26)(void); // [sp+Ch] [bp-44h]@28
  void (__fastcall *v27)(int); // [sp+10h] [bp-40h]@29
  int v28; // [sp+14h] [bp-3Ch]@1
  int v29; // [sp+18h] [bp-38h]@1
  int v30; // [sp+1Ch] [bp-34h]@7
  char v31; // [sp+20h] [bp-30h]@7
  char v32; // [sp+21h] [bp-2Fh]@7
  int v33; // [sp+24h] [bp-2Ch]@7
  int v34; // [sp+28h] [bp-28h]@7
  int (__fastcall *v35)(int *, int *, int); // [sp+30h] [bp-20h]@7
  void (__fastcall *v36)(int); // [sp+34h] [bp-1Ch]@7

  v5 = a1;
  v28 = *(_DWORD *)a2;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 4);
  v29 = v7;
  if ( v7 )
  {
    v8 = (unsigned int *)(v7 + 4);
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
  sub_119C854(&v30, a3);
  v31 = v6;
  v32 = a5;
  v33 = *(_DWORD *)(v5 + 4);
  v35 = 0;
  v10 = operator new(0x14u);
  v11 = (int)v10;
  *v10 = v28;
  v12 = v29;
  v29 = 0;
  *(_DWORD *)(v11 + 4) = v12;
  v28 = 0;
  sub_119C854((int *)(v11 + 8), &v30);
  *(_QWORD *)(v11 + 12) = *(_QWORD *)&v31;
  v34 = v11;
  v35 = sub_10FAEA4;
  v36 = sub_10FABB4;
  v13 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v30 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = v29;
  if ( v29 )
    v15 = (unsigned int *)(v29 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v19 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v19 = &ServiceLocator<AppPlatform>::mDefaultService;
  v20 = *v19;
  if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v19 + 236))(*v19) == 1 )
    if ( !v35 )
      sub_119C8E4();
    result = ((int (__fastcall *)(int *))v36)(&v34);
    v22 = *(int (__fastcall **)(int, signed int, char *))(*(_DWORD *)v20 + 208);
    v26 = 0;
    if ( v35 )
      v35((int *)&v25, &v34, 2);
      v27 = v36;
      v26 = (int (*)(void))v35;
    result = v22(v20, 1, &v25);
    if ( v26 )
      result = v26();
  if ( v35 )
    result = ((int (*)(void))v35)();
  return result;
}
