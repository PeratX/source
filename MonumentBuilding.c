

void __fastcall MonumentBuilding::~MonumentBuilding(MonumentBuilding *this)
{
  MonumentBuilding *v1; // r0@1

  v1 = MonumentBuilding::~MonumentBuilding(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall MonumentBuilding::getType(MonumentBuilding *this)
{
  return 1330463317;
}


int __fastcall MonumentBuilding::MonumentBuilding(int a1)
{
  int v1; // r4@1

  v1 = a1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = 255;
  *(_DWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 36) = 1;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  byte_281EAF1 = *(_BYTE *)(Block::mPrismarine + 4);
  byte_281EAF2 = 0;
  byte_281EAF3 = byte_281EAF1;
  byte_281EAF4 = 2;
  byte_281EAF5 = byte_281EAF1;
  byte_281EAF6 = 1;
  byte_281EAF7 = byte_281EAF1;
  byte_281EAF8 = 2;
  byte_281EAF9 = *(_BYTE *)(Block::mSeaLantern + 4);
  byte_281EAFA = 0;
  LOBYTE(word_281EAFB) = *(_BYTE *)(Block::mStillWater + 4);
  word_281EAFB = (unsigned __int8)word_281EAFB;
  *(_DWORD *)a1 = &off_2718DCC;
  j___aeabi_memclr4(a1 + 48, 40);
  return v1;
}


void __fastcall MonumentBuilding::postProcessMobsAt(MonumentBuilding *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  MonumentBuilding::postProcessMobsAt(this, a2, a3, a4);
}


char *__fastcall MonumentBuilding::generateRoomGraph(MonumentBuilding *this, Random *a2, Random *a3)
{
  Random *v3; // r7@1
  MonumentBuilding *v4; // r10@1
  unsigned int v5; // r4@1
  __int64 v6; // r0@2
  int v7; // r11@4
  unsigned int *v8; // r1@5
  unsigned int v9; // r0@7
  unsigned int *v10; // r5@11
  unsigned int v11; // r0@13
  int v12; // r6@19
  int v13; // r9@20
  int v14; // r4@21
  int v15; // r7@21
  int v16; // r0@21
  int v17; // r1@21
  int v18; // r0@21
  int v19; // r8@21
  unsigned int *v20; // r1@22
  unsigned int v21; // r0@24
  unsigned int *v22; // r7@28
  unsigned int v23; // r0@30
  int v24; // r4@35
  unsigned int *v25; // r1@36
  unsigned int v26; // r0@38
  unsigned int *v27; // r7@42
  unsigned int v28; // r0@44
  int v29; // r0@51
  int v30; // r11@52
  int v31; // r6@52
  int v32; // r4@53
  int v33; // r7@53
  int v34; // r0@53
  int v35; // r1@53
  int v36; // r0@53
  int v37; // r8@53
  unsigned int *v38; // r1@54
  unsigned int v39; // r0@56
  unsigned int *v40; // r7@60
  unsigned int v41; // r0@62
  int v42; // r4@67
  unsigned int *v43; // r1@68
  unsigned int v44; // r0@70
  unsigned int *v45; // r7@74
  unsigned int v46; // r0@76
  int v47; // r1@83
  int v48; // r8@84
  int v49; // r6@84
  int v50; // r4@85
  int v51; // r7@85
  int v52; // r0@85
  int v53; // r1@85
  int v54; // r0@85
  int v55; // r10@85
  unsigned int *v56; // r1@86
  unsigned int v57; // r0@88
  unsigned int *v58; // r7@92
  unsigned int v59; // r0@94
  int v60; // r4@99
  unsigned int *v61; // r1@100
  unsigned int v62; // r0@102
  unsigned int *v63; // r7@106
  unsigned int v64; // r0@108
  int v65; // r0@115
  int v66; // r5@115
  int v67; // r4@115
  unsigned int *v68; // r0@117
  unsigned int v69; // r1@119
  unsigned int *v70; // r1@123
  unsigned int v71; // r0@125
  unsigned int *v72; // r6@129
  unsigned int v73; // r0@131
  signed int v74; // r9@137
  signed int v75; // r8@138
  signed int v76; // r11@139
  int v77; // r10@140
  int v78; // r0@140
  bool v79; // zf@140
  _BYTE *v80; // r5@143
  int v81; // r4@143
  unsigned int v82; // r0@144
  int v83; // r0@147
  signed int v84; // r1@147
  unsigned int v85; // r3@147
  signed int v86; // r2@151
  unsigned int v87; // r2@157
  bool v88; // cf@160
  bool v89; // zf@160
  int v90; // r3@163
  int v91; // r2@163
  int v92; // r3@163
  int v93; // r7@163
  int v94; // r0@165
  int v95; // r1@165
  unsigned int *v96; // r1@166
  unsigned int v97; // r2@168
  int v98; // r0@170
  int v99; // r1@170
  unsigned int *v100; // r1@171
  unsigned int v101; // r2@173
  int v102; // r6@176
  unsigned int *v103; // r1@177
  unsigned int v104; // r0@179
  unsigned int *v105; // r7@183
  unsigned int v106; // r0@185
  int v107; // r7@188
  unsigned int *v108; // r1@189
  unsigned int v109; // r0@191
  unsigned int *v110; // r6@195
  int v111; // r0@206
  unsigned int *v112; // r1@207
  unsigned int v113; // r2@209
  int v114; // r4@212
  unsigned int *v115; // r1@213
  unsigned int v116; // r0@215
  unsigned int *v117; // r5@219
  unsigned int v118; // r0@221
  int v119; // r0@226
  unsigned int *v120; // r1@227
  unsigned int v121; // r2@229
  int v122; // r4@232
  unsigned int *v123; // r1@233
  unsigned int v124; // r0@235
  unsigned int *v125; // r5@239
  unsigned int v126; // r0@241
  int v127; // r0@246
  unsigned int *v128; // r1@247
  unsigned int v129; // r2@249
  int v130; // r4@252
  unsigned int *v131; // r1@253
  unsigned int v132; // r0@255
  unsigned int *v133; // r5@259
  unsigned int v134; // r0@261
  char v135; // r0@266
  int v136; // r2@266
  int v137; // r1@266
  int v138; // r0@266
  int v139; // r5@266
  int v140; // r4@266
  unsigned int *v141; // r0@268
  unsigned int v142; // r1@270
  MonumentBuilding *v143; // r11@272
  unsigned int *v144; // r1@275
  unsigned int v145; // r0@277
  unsigned int *v146; // r6@281
  unsigned int v147; // r0@283
  int v148; // r4@289
  unsigned int v149; // r6@290
  int v150; // r0@291
  int v151; // r1@292
  unsigned int *v152; // r10@292
  int v153; // r5@292
  unsigned int v154; // r0@292
  int v155; // r12@292
  int v156; // lr@292
  int v157; // r9@292
  int v158; // r1@292
  unsigned int v159; // r3@294
  unsigned int v160; // r0@296
  unsigned int v161; // r3@298
  unsigned int v162; // r0@300
  unsigned int v163; // r1@302
  int v164; // r1@304
  int v165; // r0@304
  int v166; // r1@305
  unsigned int *v167; // r1@306
  unsigned int v168; // r0@308
  int v169; // r1@314
  unsigned int *v170; // r0@314
  int v171; // r7@314
  unsigned int v172; // r5@314
  int v173; // r6@314
  int v174; // lr@314
  int v175; // r12@314
  int v176; // r1@314
  unsigned int v177; // r2@316
  unsigned int v178; // r3@318
  unsigned int v179; // r2@320
  unsigned int v180; // r3@322
  unsigned int v181; // r1@324
  int v182; // r2@324
  unsigned int v183; // r0@326
  signed int v184; // r1@326
  int v185; // r0@327
  int *v186; // r5@327
  int v187; // r6@327
  int v188; // r1@328
  int v189; // r6@328
  signed int v190; // r7@329
  unsigned int v191; // r4@329
  int v192; // r8@329
  signed int v193; // r11@330
  _DWORD *v194; // r0@331
  int v195; // r0@331
  unsigned int v196; // r0@335
  _DWORD *v197; // r1@335
  unsigned int v198; // r5@335
  signed int v199; // r9@335
  unsigned int v200; // r1@336
  unsigned int v201; // r7@336
  int v202; // r0@336
  signed int v203; // r0@336
  int v204; // r1@336
  _DWORD *v205; // r0@338
  int v206; // r0@338
  unsigned int v207; // r0@340
  _DWORD *v208; // r1@340
  unsigned int v209; // r3@340
  signed int v210; // r5@340
  unsigned int v211; // r1@341
  unsigned int v212; // r9@341
  signed int v213; // r7@341
  int v214; // r0@341
  signed int v215; // r0@341
  int v216; // r1@341
  int v217; // r0@347
  unsigned int *v218; // r0@348
  unsigned int v219; // r1@350
  int v220; // r0@352
  int v221; // r1@356
  unsigned int *v222; // r1@357
  unsigned int v223; // r0@359
  int v224; // r0@361
  int v225; // r1@365
  unsigned int *v226; // r1@366
  unsigned int v227; // r0@368
  char *result; // r0@370
  int v229; // r4@373
  unsigned int *v230; // r1@374
  unsigned int *v231; // r5@380
  int v232; // r4@387
  unsigned int *v233; // r1@388
  unsigned int *v234; // r5@394
  int v235; // r4@401
  unsigned int *v236; // r1@402
  unsigned int *v237; // r5@408
  MonumentBuilding *v238; // [sp+0h] [bp-A90h]@19
  Random *v239; // [sp+4h] [bp-A8Ch]@1
  Random *v240; // [sp+8h] [bp-A88h]@19
  signed int v241; // [sp+10h] [bp-A80h]@336
  unsigned int v242; // [sp+10h] [bp-A80h]@341
  int v243; // [sp+18h] [bp-A78h]@52
  int v244; // [sp+18h] [bp-A78h]@84
  unsigned int v245; // [sp+18h] [bp-A78h]@329
  char *v246; // [sp+1Ch] [bp-A74h]@1
  int v247; // [sp+1Ch] [bp-A74h]@328
  unsigned int v248; // [sp+20h] [bp-A70h]@326
  unsigned int v249; // [sp+24h] [bp-A6Ch]@326
  int v250; // [sp+9E4h] [bp-ACh]@326
  char v251; // [sp+9E8h] [bp-A8h]@326
  int v252; // [sp+9ECh] [bp-A4h]@326
  int v253; // [sp+9F0h] [bp-A0h]@328
  int v254; // [sp+9F4h] [bp-9Ch]@246
  int v255; // [sp+9F8h] [bp-98h]@246
  int v256; // [sp+9FCh] [bp-94h]@226
  int v257; // [sp+A00h] [bp-90h]@226
  int v258; // [sp+A04h] [bp-8Ch]@206
  int v259; // [sp+A08h] [bp-88h]@206
  char v260; // [sp+A0Eh] [bp-82h]@206
  char v261; // [sp+A0Fh] [bp-81h]@206
  int v262; // [sp+A10h] [bp-80h]@206
  int v263; // [sp+A14h] [bp-7Ch]@246
  int v264; // [sp+A18h] [bp-78h]@206
  int v265; // [sp+A1Ch] [bp-74h]@226
  int v266; // [sp+A20h] [bp-70h]@206
  int v267; // [sp+A24h] [bp-6Ch]@206
  int v268; // [sp+A28h] [bp-68h]@165
  int v269; // [sp+A2Ch] [bp-64h]@165
  char v270; // [sp+A33h] [bp-5Dh]@165
  int v271; // [sp+A34h] [bp-5Ch]@170
  int v272; // [sp+A38h] [bp-58h]@170
  int v273; // [sp+A3Ch] [bp-54h]@85
  int v274; // [sp+A40h] [bp-50h]@85
  int v275; // [sp+A44h] [bp-4Ch]@53
  int v276; // [sp+A48h] [bp-48h]@53
  int v277; // [sp+A4Ch] [bp-44h]@21
  int v278; // [sp+A50h] [bp-40h]@21
  int v279; // [sp+A54h] [bp-3Ch]@21
  int v280; // [sp+A58h] [bp-38h]@2
  int v281; // [sp+A5Ch] [bp-34h]@2
  char v282; // [sp+A60h] [bp-30h]@21
  char v283; // [sp+A64h] [bp-2Ch]@206
  char v284; // [sp+A68h] [bp-28h]@206

  v3 = a2;
  v4 = this;
  v239 = a3;
  v246 = (char *)a2 + 60;
  std::vector<std::shared_ptr<RoomDefinition>,std::allocator<std::shared_ptr<RoomDefinition>>>::reserve(
    (int)a2 + 60,
    0x4Bu);
  v5 = 0;
  do
  {
    v280 = 0;
    v281 = 0;
    v6 = *((_QWORD *)v3 + 8);
    if ( (_DWORD)v6 == HIDWORD(v6) )
    {
      std::vector<std::shared_ptr<RoomDefinition>,std::allocator<std::shared_ptr<RoomDefinition>>>::_M_emplace_back_aux<std::shared_ptr<RoomDefinition>>(
        v246,
        (int)&v280);
      v7 = v281;
      if ( v281 )
      {
        v8 = (unsigned int *)(v281 + 4);
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
          v10 = (unsigned int *)(v7 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          if ( &pthread_create )
          {
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
          }
          else
            v11 = (*v10)--;
          if ( v11 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      }
    }
    else
      *(_DWORD *)v6 = 0;
      v281 = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v280 = 0;
      *((_DWORD *)v3 + 16) = v6 + 8;
    ++v5;
  }
  while ( v5 < 0x4B );
  v238 = v4;
  v12 = 0;
  v240 = v3;
    v13 = 0;
    do
      v14 = 5 * v13 + v12;
      v279 = 5 * v13 + v12;
      v15 = *(_DWORD *)v246;
      std::__shared_ptr<RoomDefinition,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RoomDefinition>,int &>(
        (int)&v277,
        (int)&v282,
        &v279);
      v16 = v277;
      v17 = v278;
      v278 = 0;
      v277 = 0;
      *(_DWORD *)(v15 + 8 * v14) = v16;
      v18 = v15 + 8 * v14;
      v19 = *(_DWORD *)(v18 + 4);
      *(_DWORD *)(v18 + 4) = v17;
      if ( v19 )
        v20 = (unsigned int *)(v19 + 4);
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
      v24 = v278;
      if ( v278 )
        v25 = (unsigned int *)(v278 + 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 == 1 )
          v27 = (unsigned int *)(v24 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
            v28 = (*v27)--;
          if ( v28 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
      ++v13;
    while ( v13 != 4 );
    ++v12;
  while ( v12 != 5 );
  v29 = 0;
    v30 = v29 + 25;
    v31 = 0;
    v243 = v29;
      v32 = v30 + 5 * v31;
      v279 = v30 + 5 * v31;
      v33 = *(_DWORD *)v246;
        (int)&v275,
      v34 = v275;
      v35 = v276;
      v276 = 0;
      v275 = 0;
      *(_DWORD *)(v33 + 8 * v32) = v34;
      v36 = v33 + 8 * v32;
      v37 = *(_DWORD *)(v36 + 4);
      *(_DWORD *)(v36 + 4) = v35;
      if ( v37 )
        v38 = (unsigned int *)(v37 + 4);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 == 1 )
          v40 = (unsigned int *)(v37 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 8))(v37);
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
            v41 = (*v40)--;
          if ( v41 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 12))(v37);
      v42 = v276;
      if ( v276 )
        v43 = (unsigned int *)(v276 + 4);
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
          v44 = (*v43)--;
        if ( v44 == 1 )
          v45 = (unsigned int *)(v42 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 8))(v42);
              v46 = __ldrex(v45);
            while ( __strex(v46 - 1, v45) );
            v46 = (*v45)--;
          if ( v46 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 12))(v42);
      ++v31;
    while ( v31 != 4 );
    v29 = v243 + 1;
  while ( v243 != 4 );
  v47 = 1;
    v48 = v47 + 50;
    v49 = 0;
    v244 = v47;
      v50 = v48 + 5 * v49;
      v279 = v48 + 5 * v49;
      v51 = *(_DWORD *)v246;
        (int)&v273,
      v52 = v273;
      v53 = v274;
      v274 = 0;
      v273 = 0;
      *(_DWORD *)(v51 + 8 * v50) = v52;
      v54 = v51 + 8 * v50;
      v55 = *(_DWORD *)(v54 + 4);
      *(_DWORD *)(v54 + 4) = v53;
      if ( v55 )
        v56 = (unsigned int *)(v55 + 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 == 1 )
          v58 = (unsigned int *)(v55 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v55 + 8))(v55);
              v59 = __ldrex(v58);
            while ( __strex(v59 - 1, v58) );
            v59 = (*v58)--;
          if ( v59 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v55 + 12))(v55);
      v60 = v274;
      if ( v274 )
        v61 = (unsigned int *)(v274 + 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
          v62 = (*v61)--;
        if ( v62 == 1 )
          v63 = (unsigned int *)(v60 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v60 + 8))(v60);
              v64 = __ldrex(v63);
            while ( __strex(v64 - 1, v63) );
            v64 = (*v63)--;
          if ( v64 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v60 + 12))(v60);
      ++v49;
    while ( v49 != 2 );
    v47 = v244 + 1;
  while ( v244 != 3 );
  v65 = *((_DWORD *)v240 + 15) + 8 * OceanMonumentPiece::mGridroomSourceIndex;
  *((_DWORD *)v240 + 18) = *(_DWORD *)v65;
  v66 = *(_DWORD *)(v65 + 4);
  v67 = *((_DWORD *)v240 + 19);
  if ( v66 != v67 )
    if ( v66 )
      v68 = (unsigned int *)(v66 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v69 = __ldrex(v68);
        while ( __strex(v69 + 1, v68) );
        v67 = *((_DWORD *)v240 + 19);
      else
        ++*v68;
    if ( v67 )
      v70 = (unsigned int *)(v67 + 4);
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
        v71 = (*v70)--;
      if ( v71 == 1 )
        v72 = (unsigned int *)(v67 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 8))(v67);
            v73 = __ldrex(v72);
          while ( __strex(v73 - 1, v72) );
          v73 = (*v72)--;
        if ( v73 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 12))(v67);
    *((_DWORD *)v240 + 19) = v66;
  v74 = 0;
    v75 = 0;
      v76 = 0;
      do
        v77 = 5 * v75 + v74 + 25 * v76;
        v78 = *(_DWORD *)(*(_DWORD *)v246 + 8 * v77);
        v79 = v78 == 0;
        if ( v78 )
          v78 = unk_2700410;
          v79 = unk_2700410 == 0;
        if ( !v79 )
          v80 = (_BYTE *)Facing::ALL_FACES;
          v81 = Facing::ALL_FACES + v78;
            v83 = *v80;
            v84 = 0;
            v85 = 0;
            if ( v83 == 3 )
              v84 = 1;
            if ( v83 == 2 )
              v84 = -1;
            v86 = *v80;
            if ( v83 != 1 )
              v86 = 0;
            if ( !*v80 )
              v86 = -1;
            if ( v83 == 5 )
              v85 = 1;
            v87 = v86 + v76;
            if ( v83 == 4 )
              v85 = -1;
            if ( v87 <= 2 )
            {
              v88 = (unsigned int)(v84 + v75) >= 4;
              v89 = v84 + v75 == 4;
              if ( (unsigned int)(v84 + v75) <= 4 )
              {
                v85 += v74;
                v88 = v85 >= 4;
                v89 = v85 == 4;
              }
              if ( v89 || !v88 )
                v90 = v85 + 25 * v87;
                v91 = *(_DWORD *)v246;
                v92 = v90 + 5 * (v84 + v75);
                v93 = *(_DWORD *)(*(_DWORD *)v246 + 8 * v92);
                if ( v93 )
                {
                  if ( v84 )
                  {
                    v270 = Facing::OPPOSITE_FACING[(char)v83];
                    v94 = *(_DWORD *)(v91 + 8 * v77);
                    v268 = v93;
                    v95 = *(_DWORD *)(v91 + 8 * v92 + 4);
                    v269 = v95;
                    if ( v95 )
                    {
                      v96 = (unsigned int *)(v95 + 4);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v97 = __ldrex(v96);
                        while ( __strex(v97 + 1, v96) );
                      }
                      else
                        ++*v96;
                    }
                    RoomDefinition::setConnection();
                    v102 = v269;
                    if ( v269 )
                      v103 = (unsigned int *)(v269 + 4);
                          v104 = __ldrex(v103);
                        while ( __strex(v104 - 1, v103) );
                        v104 = (*v103)--;
                      if ( v104 == 1 )
                        v105 = (unsigned int *)(v102 + 8);
                        (*(void (__fastcall **)(int))(*(_DWORD *)v102 + 8))(v102);
                        if ( &pthread_create )
                        {
                          __dmb();
                          do
                            v106 = __ldrex(v105);
                          while ( __strex(v106 - 1, v105) );
                        }
                        else
                          v106 = (*v105)--;
                        if ( v106 == 1 )
                          (*(void (__fastcall **)(int))(*(_DWORD *)v102 + 12))(v102);
                  }
                  else
                    v98 = *(_DWORD *)(v91 + 8 * v77);
                    v271 = *(_DWORD *)(*(_DWORD *)v246 + 8 * v92);
                    v99 = *(_DWORD *)(v91 + 8 * v92 + 4);
                    v272 = v99;
                    if ( v99 )
                      v100 = (unsigned int *)(v99 + 4);
                          v101 = __ldrex(v100);
                        while ( __strex(v101 + 1, v100) );
                        ++*v100;
                    v107 = v272;
                    if ( v272 )
                      v108 = (unsigned int *)(v272 + 4);
                          v109 = __ldrex(v108);
                        while ( __strex(v109 - 1, v108) );
                        v109 = (*v108)--;
                      if ( v109 == 1 )
                        v110 = (unsigned int *)(v107 + 8);
                        (*(void (__fastcall **)(int))(*(_DWORD *)v107 + 8))(v107);
                            v82 = __ldrex(v110);
                          while ( __strex(v82 - 1, v110) );
                          v82 = (*v110)--;
                        if ( v82 == 1 )
                          (*(void (__fastcall **)(int))(*(_DWORD *)v107 + 12))(v107);
                }
            }
            ++v80;
          while ( v80 != (_BYTE *)v81 );
        ++v76;
      while ( v76 < 3 );
      ++v75;
    while ( v75 < 5 );
    ++v74;
  while ( v74 < 5 );
  std::__shared_ptr<RoomDefinition,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RoomDefinition>,int const&>(
    (int)&v266,
    (int)&v264,
    (int *)&OceanMonumentPiece::mPenthouseIndex);
    (int)&v283,
    (int *)&OceanMonumentPiece::mLeftWingIndex);
    (int)&v262,
    (int)&v284,
    (int *)&OceanMonumentPiece::mRightWingIndex);
  v261 = 1;
  v260 = 3;
  v111 = *(_DWORD *)(*(_DWORD *)v246 + 8 * OceanMonumentPiece::mGridroomTopConnectIndex);
  v258 = v266;
  v259 = v267;
  if ( v267 )
    v112 = (unsigned int *)(v267 + 4);
    if ( &pthread_create )
      __dmb();
        v113 = __ldrex(v112);
      while ( __strex(v113 + 1, v112) );
      ++*v112;
  RoomDefinition::setConnection();
  v114 = v259;
  if ( v259 )
    v115 = (unsigned int *)(v259 + 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 == 1 )
      v117 = (unsigned int *)(v114 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v114 + 8))(v114);
          v118 = __ldrex(v117);
        while ( __strex(v118 - 1, v117) );
        v118 = (*v117)--;
      if ( v118 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v114 + 12))(v114);
  v119 = *(_DWORD *)(*(_DWORD *)v246 + 8 * OceanMonumentPiece::mGridroomLeftWingConnectIndex);
  v256 = v264;
  v257 = v265;
  if ( v265 )
    v120 = (unsigned int *)(v265 + 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 + 1, v120) );
      ++*v120;
  v122 = v257;
  if ( v257 )
    v123 = (unsigned int *)(v257 + 4);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 == 1 )
      v125 = (unsigned int *)(v122 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v122 + 8))(v122);
          v126 = __ldrex(v125);
        while ( __strex(v126 - 1, v125) );
        v126 = (*v125)--;
      if ( v126 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v122 + 12))(v122);
  v127 = *(_DWORD *)(*(_DWORD *)v246 + 8 * OceanMonumentPiece::mGridroomRightWingConnectIndex);
  v254 = v262;
  v255 = v263;
  if ( v263 )
    v128 = (unsigned int *)(v263 + 4);
        v129 = __ldrex(v128);
      while ( __strex(v129 + 1, v128) );
      ++*v128;
  v130 = v255;
  if ( v255 )
    v131 = (unsigned int *)(v255 + 4);
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
  *(_BYTE *)(v266 + 44) = 1;
  *(_BYTE *)(v264 + 44) = 1;
  *(_BYTE *)(v262 + 44) = 1;
  *(_BYTE *)(*((_DWORD *)v240 + 18) + 45) = 1;
  v135 = j_Random::_genRandInt32(v239);
  v136 = *((_DWORD *)v240 + 15);
  v137 = v136 + 8 * (v135 & 3);
  v138 = *(_DWORD *)(v137 + 80);
  *((_DWORD *)v240 + 20) = v138;
  v139 = *(_DWORD *)(v137 + 84);
  v140 = *((_DWORD *)v240 + 21);
  if ( v139 == v140 )
    v143 = v238;
  else
    if ( v139 )
      v141 = (unsigned int *)(v139 + 4);
          v142 = __ldrex(v141);
        while ( __strex(v142 + 1, v141) );
        v140 = *((_DWORD *)v240 + 21);
        ++*v141;
    if ( v140 )
      v144 = (unsigned int *)(v140 + 4);
          v145 = __ldrex(v144);
        while ( __strex(v145 - 1, v144) );
        v145 = (*v144)--;
      if ( v145 == 1 )
        v146 = (unsigned int *)(v140 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v140 + 8))(v140);
            v147 = __ldrex(v146);
          while ( __strex(v147 - 1, v146) );
          v147 = (*v146)--;
        if ( v147 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v140 + 12))(v140);
    *((_DWORD *)v240 + 21) = v139;
    v136 = *((_DWORD *)v240 + 15);
    v138 = *((_DWORD *)v240 + 20);
  v148 = 0;
  *(_BYTE *)(v138 + 44) = 1;
  *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v138 + 12) + 40) + 44) = 1;
  *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v138 + 12) + 16) + 44) = 1;
  *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v138 + 12) + 40) + 12) + 16) + 44) = 1;
  *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v138 + 12) + 8) + 44) = 1;
  *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v138 + 12) + 40) + 12) + 8) + 44) = 1;
  *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v138 + 12) + 16) + 12) + 8) + 44) = 1;
  *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v138 + 12) + 40) + 12) + 16) + 12)
                       + 8)
           + 44) = 1;
  *(_DWORD *)v143 = 0;
  *((_DWORD *)v143 + 1) = 0;
  *((_DWORD *)v143 + 2) = 0;
  if ( *((_DWORD *)v240 + 16) != v136 )
    v149 = 0;
      v150 = *(_DWORD *)(v136 + 8 * v149);
      if ( v150 )
        v151 = *(_DWORD *)(v150 + 12);
        v152 = *(unsigned int **)(v150 + 24);
        v153 = *(_DWORD *)(v151 + 8);
        v79 = *(_DWORD *)v151 == 0;
        v154 = *v152 | 1;
        v155 = *(_DWORD *)(v151 + 16);
        v156 = *(_DWORD *)(v151 + 24);
        v157 = *(_DWORD *)(v151 + 40);
        v158 = *(_DWORD *)(v151 + 32);
        if ( v79 )
          v154 = *v152 & 0xFFFFFFFE;
        v159 = v154 | 2;
        if ( !v153 )
          v159 = v154 & 0xFFFFFFFD;
        v160 = v159 | 4;
        if ( !v155 )
          v160 = v159 & 0xFFFFFFFB;
        v161 = v160 | 8;
        if ( !v156 )
          v161 = v160 & 0xFFFFFFF7;
        v162 = v161 | 0x10;
        if ( !v158 )
          v162 = v161 & 0xFFFFFFEF;
        v163 = v162 | 0x20;
        if ( !v157 )
          v163 = v162 & 0xFFFFFFDF;
        *v152 = v163;
        v164 = v136 + 8 * v149;
        v165 = *(_QWORD *)((char *)v143 + 4);
        if ( v165 == *(_QWORD *)((char *)v143 + 4) >> 32 )
          std::vector<std::shared_ptr<RoomDefinition>,std::allocator<std::shared_ptr<RoomDefinition>>>::_M_emplace_back_aux<std::shared_ptr<RoomDefinition> const&>(
            (unsigned __int64 *)v143,
            v164);
          *(_DWORD *)v165 = *(_DWORD *)(v136 + 8 * v149);
          v166 = *(_DWORD *)(v164 + 4);
          *(_DWORD *)(v165 + 4) = v166;
          if ( v166 )
            v167 = (unsigned int *)(v166 + 4);
            if ( &pthread_create )
              __dmb();
              do
                v168 = __ldrex(v167);
              while ( __strex(v168 + 1, v167) );
              v165 = *((_DWORD *)v143 + 1);
            else
              ++*v167;
          *((_DWORD *)v143 + 1) = v165 + 8;
      v136 = *(_QWORD *)((char *)v240 + 60);
      ++v149;
    while ( v149 < (signed int)((*(_QWORD *)((char *)v240 + 60) >> 32) - v136) >> 3 );
  v169 = *(_DWORD *)(v266 + 12);
  v170 = *(unsigned int **)(v266 + 24);
  v171 = *(_DWORD *)(v169 + 8);
  v79 = *(_DWORD *)v169 == 0;
  v172 = *v170 | 1;
  v173 = *(_DWORD *)(v169 + 16);
  v174 = *(_DWORD *)(v169 + 24);
  v175 = *(_DWORD *)(v169 + 40);
  v176 = *(_DWORD *)(v169 + 32);
  if ( v79 )
    v172 = *v170 & 0xFFFFFFFE;
  v177 = v172 | 2;
  if ( !v171 )
    v177 = v172 & 0xFFFFFFFD;
  v178 = v177 | 4;
  if ( !v173 )
    v178 = v177 & 0xFFFFFFFB;
  v179 = v178 | 8;
  if ( !v174 )
    v179 = v178 & 0xFFFFFFF7;
  v180 = v179 | 0x10;
  if ( !v176 )
    v180 = v179 & 0xFFFFFFEF;
  v181 = v180 | 0x20;
  LOWORD(v182) = -30363;
  if ( !v175 )
    v181 = v180 & 0xFFFFFFDF;
  *v170 = v181;
  HIWORD(v182) = 27655;
  v183 = *(_DWORD *)v239;
  v248 = v183;
  v250 = 625;
  v184 = 1;
  v251 = 0;
  v252 = 0;
  v249 = v183;
    v185 = v183 ^ (v183 >> 30);
    v186 = (int *)(&v248 + v148);
    v187 = v148++ + v185 * v182;
    v183 = v184++ + v185 * v182;
    v186[2] = v187 + 1;
  while ( v148 != 397 );
  v250 = 624;
  v253 = 398;
  StructureFeature::deterministicRandomShuffle<std::shared_ptr<RoomDefinition>>((signed int *)v143, (Random *)&v248);
  v188 = *(_QWORD *)v143 >> 32;
  v189 = *(_QWORD *)v143;
  v247 = v188;
  if ( v188 != v189 )
    v190 = -1431655765;
    v191 = 0;
    v245 = (v188 - v189) >> 3;
    v192 = 1;
      v193 = 0;
      while ( v193 <= 4 )
        v196 = j_Random::_genRandInt32(v239);
        ++v193;
        v197 = *(_DWORD **)(*(_DWORD *)(v189 + 8 * v191) + 24);
        v198 = v196 - 6 * ((unsigned int)(v196 * (unsigned __int64)(unsigned int)v190 >> 32) >> 2);
        v199 = 1 << v198;
        if ( *v197 & (1 << v198) )
          *v197 &= ~v199;
          v200 = Facing::OPPOSITE_FACING[v198];
          v201 = v200 >> 5;
          v202 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v189 + 8 * v191) + 12) + 8 * v198) + 24);
          v241 = 1 << (v200 & 0x1F);
          *(_DWORD *)(v202 + 4 * (v200 >> 5)) &= ~v241;
          v203 = RoomDefinition::findSource(*(RoomDefinition **)(v189 + 8 * v191), v192);
          v204 = v192 + 1;
          if ( v203 )
            v192 += 2;
            if ( RoomDefinition::findSource(
                   *(RoomDefinition **)(*(_DWORD *)(*(_DWORD *)(v189 + 8 * v191) + 12) + 8 * v198),
                   v204) )
              while ( v193 <= 4 )
                v207 = j_Random::_genRandInt32(v239);
                ++v193;
                v208 = *(_DWORD **)(*(_DWORD *)(v189 + 8 * v191) + 24);
                v209 = v207 % 6;
                v210 = 1 << v207 % 6;
                if ( *v208 & (1 << v207 % 6) )
                  *v208 &= ~v210;
                  v242 = v207 % 6;
                  v211 = Facing::OPPOSITE_FACING[v209];
                  v212 = v211 >> 5;
                  v213 = 1 << (v211 & 0x1F);
                  v214 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v189 + 8 * v191) + 12) + 8 * v209) + 24);
                  *(_DWORD *)(v214 + 4 * (v211 >> 5)) &= ~v213;
                  v215 = RoomDefinition::findSource(*(RoomDefinition **)(v189 + 8 * v191), v192);
                  v216 = v192 + 1;
                  if ( v215 == 1 )
                    v192 += 2;
                    if ( RoomDefinition::findSource(
                           *(RoomDefinition **)(*(_DWORD *)(*(_DWORD *)(v189 + 8 * v191) + 12) + 8 * v242),
                           v216) )
                      goto LABEL_345;
                    ++v192;
                  v205 = *(_DWORD **)(*(_DWORD *)(v189 + 8 * v191) + 24);
                  *v205 |= v210;
                  v206 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v189 + 8 * v191) + 12) + 8 * v242) + 24);
                  *(_DWORD *)(v206 + 4 * v212) |= v213;
              break;
            ++v192;
          v194 = *(_DWORD **)(*(_DWORD *)(v189 + 8 * v191) + 24);
          *v194 |= v199;
          v195 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v189 + 8 * v191) + 12) + 8 * v198) + 24);
          *(_DWORD *)(v195 + 4 * v201) |= v241;
          v190 = -1431655765;
LABEL_345:
      v188 = v247;
      v190 = -1431655765;
      ++v191;
    while ( v191 < v245 );
  if ( v188 == *((_DWORD *)v238 + 2) )
    std::vector<std::shared_ptr<RoomDefinition>,std::allocator<std::shared_ptr<RoomDefinition>>>::_M_emplace_back_aux<std::shared_ptr<RoomDefinition> const&>(
      (unsigned __int64 *)v238,
      (int)&v266);
    v220 = *((_DWORD *)v238 + 1);
    *(_DWORD *)v188 = v266;
    v217 = v267;
    *(_DWORD *)(v188 + 4) = v267;
    if ( v217 )
      v218 = (unsigned int *)(v217 + 4);
          v219 = __ldrex(v218);
        while ( __strex(v219 + 1, v218) );
        v188 = *((_DWORD *)v238 + 1);
        ++*v218;
    v220 = v188 + 8;
    *((_DWORD *)v238 + 1) = v188 + 8;
  if ( v220 == *((_DWORD *)v238 + 2) )
      (int)&v264);
    v224 = *((_DWORD *)v238 + 1);
    *(_DWORD *)v220 = v264;
    v221 = v265;
    *(_DWORD *)(v220 + 4) = v265;
    if ( v221 )
      v222 = (unsigned int *)(v221 + 4);
          v223 = __ldrex(v222);
        while ( __strex(v223 + 1, v222) );
        v220 = *((_DWORD *)v238 + 1);
        ++*v222;
    v224 = v220 + 8;
    *((_DWORD *)v238 + 1) = v224;
  if ( v224 == *((_DWORD *)v238 + 2) )
    result = std::vector<std::shared_ptr<RoomDefinition>,std::allocator<std::shared_ptr<RoomDefinition>>>::_M_emplace_back_aux<std::shared_ptr<RoomDefinition> const&>(
               (unsigned __int64 *)v238,
               (int)&v262);
    *(_DWORD *)v224 = v262;
    v225 = v263;
    *(_DWORD *)(v224 + 4) = v263;
    if ( v225 )
      v226 = (unsigned int *)(v225 + 4);
          v227 = __ldrex(v226);
        while ( __strex(v227 + 1, v226) );
        v224 = *((_DWORD *)v238 + 1);
        ++*v226;
    result = (char *)(v224 + 8);
    *((_DWORD *)v238 + 1) = result;
  v229 = v263;
    v230 = (unsigned int *)(v263 + 4);
        result = (char *)__ldrex(v230);
      while ( __strex((unsigned int)(result - 1), v230) );
      result = (char *)(*v230)--;
    if ( result == (char *)1 )
      v231 = (unsigned int *)(v229 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v229 + 8))(v229);
          result = (char *)__ldrex(v231);
        while ( __strex((unsigned int)(result - 1), v231) );
        result = (char *)(*v231)--;
      if ( result == (char *)1 )
        result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v229 + 12))(v229);
  v232 = v265;
    v233 = (unsigned int *)(v265 + 4);
        result = (char *)__ldrex(v233);
      while ( __strex((unsigned int)(result - 1), v233) );
      result = (char *)(*v233)--;
      v234 = (unsigned int *)(v232 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v232 + 8))(v232);
          result = (char *)__ldrex(v234);
        while ( __strex((unsigned int)(result - 1), v234) );
        result = (char *)(*v234)--;
        result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v232 + 12))(v232);
  v235 = v267;
    v236 = (unsigned int *)(v267 + 4);
        result = (char *)__ldrex(v236);
      while ( __strex((unsigned int)(result - 1), v236) );
      result = (char *)(*v236)--;
      v237 = (unsigned int *)(v235 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v235 + 8))(v235);
          result = (char *)__ldrex(v237);
        while ( __strex((unsigned int)(result - 1), v237) );
        result = (char *)(*v237)--;
        result = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v235 + 12))(v235);
  return result;
}


int __fastcall MonumentBuilding::generateUpperWall(MonumentBuilding *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  MonumentBuilding *v4; // r10@1
  const BoundingBox *v5; // r11@1
  BlockSource *v6; // r6@1
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r5@1
  int v10; // r0@1
  int v11; // r1@1
  int v12; // r3@5
  const BoundingBox *v13; // r9@13
  void (__fastcall *v14)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@13
  int v15; // r7@14
  signed int v16; // r4@15
  signed int v17; // r11@16
  int v18; // r5@17
  char v19; // r0@18
  void (__fastcall *v20)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@20
  void (__fastcall *v21)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v22)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v23)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v24)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v25)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v26)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v27)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@23
  void (__fastcall *v28)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@23
  void (__fastcall *v29)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@23
  void (__fastcall *v30)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@23
  void (__fastcall *v31)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@23
  void (__fastcall *v32)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@23
  int v33; // r4@24
  int v34; // r7@24
  int v35; // r5@24
  int v36; // r0@24
  int v37; // r1@24
  int v38; // r3@28
  BlockSource *v39; // r9@36
  void (__fastcall *v40)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@36
  BlockSource *v41; // r1@36
  const BoundingBox *v42; // r6@36
  int v43; // r7@37
  signed int v44; // r4@38
  signed int v45; // r11@39
  int v46; // r5@40
  char v47; // r0@41
  void (__fastcall *v48)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@43
  void (__fastcall *v49)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r5@46
  void (__fastcall *v50)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r6@46
  void (__fastcall *v51)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r6@46
  void (__fastcall *v52)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r6@46
  void (__fastcall *v53)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r6@46
  void (__fastcall *v54)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r6@46
  void (__fastcall *v55)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@46
  void (__fastcall *v56)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@46
  void (__fastcall *v57)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@46
  void (__fastcall *v58)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@46
  void (__fastcall *v59)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@46
  void (__fastcall *v60)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@46
  int v61; // r4@47
  int v62; // r7@47
  int v63; // r5@47
  int result; // r0@47
  int v65; // r1@47
  int v66; // r3@51
  BlockSource *v67; // r9@59
  void (__fastcall *v68)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@59
  BlockSource *v69; // r1@59
  const BoundingBox *v70; // r6@59
  int v71; // r7@60
  signed int v72; // r4@61
  signed int v73; // r11@62
  int v74; // r5@63
  char v75; // r0@64
  void (__fastcall *v76)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@66
  void (__fastcall *v77)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@69
  void (__fastcall *v78)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@69
  void (__fastcall *v79)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@69
  void (__fastcall *v80)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@69
  void (__fastcall *v81)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@69
  void (__fastcall *v82)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@69
  void (__fastcall *v83)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@69
  void (__fastcall *v84)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@69
  void (__fastcall *v85)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@69
  void (__fastcall *v86)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@69
  int (__fastcall *v87)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@69
  char v88; // [sp+24h] [bp-8Ch]@69
  char v89; // [sp+25h] [bp-8Bh]@69
  char v90; // [sp+28h] [bp-88h]@69
  char v91; // [sp+29h] [bp-87h]@69
  char v92; // [sp+2Ch] [bp-84h]@69
  char v93; // [sp+2Dh] [bp-83h]@69
  char v94; // [sp+30h] [bp-80h]@69
  char v95; // [sp+31h] [bp-7Fh]@69
  char v96; // [sp+34h] [bp-7Ch]@69
  char v97; // [sp+35h] [bp-7Bh]@69
  char v98; // [sp+38h] [bp-78h]@59
  char v99; // [sp+39h] [bp-77h]@59
  char v100; // [sp+3Ch] [bp-74h]@59
  char v101; // [sp+3Dh] [bp-73h]@59
  char v102; // [sp+40h] [bp-70h]@46
  char v103; // [sp+41h] [bp-6Fh]@46
  char v104; // [sp+44h] [bp-6Ch]@46
  char v105; // [sp+45h] [bp-6Bh]@46
  char v106; // [sp+48h] [bp-68h]@46
  char v107; // [sp+49h] [bp-67h]@46
  char v108; // [sp+4Ch] [bp-64h]@46
  char v109; // [sp+4Dh] [bp-63h]@46
  char v110; // [sp+50h] [bp-60h]@46
  char v111; // [sp+51h] [bp-5Fh]@46
  char v112; // [sp+54h] [bp-5Ch]@46
  char v113; // [sp+55h] [bp-5Bh]@46
  char v114; // [sp+58h] [bp-58h]@46
  char v115; // [sp+59h] [bp-57h]@46
  char v116; // [sp+5Ch] [bp-54h]@36
  char v117; // [sp+5Dh] [bp-53h]@36
  char v118; // [sp+60h] [bp-50h]@36
  char v119; // [sp+61h] [bp-4Fh]@36
  char v120; // [sp+64h] [bp-4Ch]@23
  char v121; // [sp+65h] [bp-4Bh]@23
  char v122; // [sp+68h] [bp-48h]@23
  char v123; // [sp+69h] [bp-47h]@23
  char v124; // [sp+6Ch] [bp-44h]@23
  char v125; // [sp+6Dh] [bp-43h]@23
  char v126; // [sp+70h] [bp-40h]@23
  char v127; // [sp+71h] [bp-3Fh]@23
  char v128; // [sp+74h] [bp-3Ch]@23
  char v129; // [sp+75h] [bp-3Bh]@23
  char v130; // [sp+78h] [bp-38h]@23
  char v131; // [sp+79h] [bp-37h]@23
  char v132; // [sp+7Ch] [bp-34h]@23
  char v133; // [sp+7Dh] [bp-33h]@23
  char v134; // [sp+80h] [bp-30h]@13
  char v135; // [sp+81h] [bp-2Fh]@13
  char v136; // [sp+84h] [bp-2Ch]@13
  char v137; // [sp+85h] [bp-2Bh]@13
  char v138; // [sp+88h] [bp-28h]@20
  char v139; // [sp+89h] [bp-27h]@20

  v4 = this;
  v5 = a4;
  v6 = a2;
  v7 = (*(int (**)(void))(*(_DWORD *)this + 28))();
  v8 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 14, 21);
  v9 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 20, 43);
  v10 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 20, 43);
  v11 = v10;
  if ( v8 > v10 )
    v11 = v8;
  if ( v8 < v10 )
    v10 = v8;
  v12 = v9;
  if ( v7 < v9 )
    v12 = v7;
  if ( *((_DWORD *)v5 + 3) >= v12 )
  {
    if ( v7 > v9 )
      v9 = v7;
    if ( *(_DWORD *)v5 <= v9 && *((_DWORD *)v5 + 5) >= v10 && *((_DWORD *)v5 + 2) <= v11 )
    {
      v13 = v5;
      v14 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v136 = byte_281EAF1;
      v134 = byte_281EAF1;
      v137 = byte_281EAF2;
      v135 = byte_281EAF2;
      v14(v4, v6, v5, 14);
      if ( *((_BYTE *)v4 + 36) )
      {
        v15 = 1;
        do
        {
          v16 = 14;
          do
          {
            v17 = 22;
            do
            {
              v18 = StructurePiece::getWorldY(v4, v15);
              if ( v18 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
                v19 = *(_BYTE *)(Block::mAir + 4);
              else
                v19 = word_281EAFB;
              v20 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
              v138 = v19;
              v139 = 0;
              v20(v4, v6, &v138, v16);
              ++v17;
            }
            while ( v17 != 44 );
            ++v16;
          }
          while ( v16 != 21 );
          ++v15;
        }
        while ( v15 != 15 );
      }
      v5 = v13;
      v21 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v132 = byte_281EAF1;
      v130 = byte_281EAF1;
      v133 = byte_281EAF2;
      v131 = byte_281EAF2;
      v21(v4, v6, v13, 18);
      v22 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v128 = byte_281EAF3;
      v126 = byte_281EAF3;
      v129 = byte_281EAF4;
      v127 = byte_281EAF4;
      v22(v4, v6, v13, 18);
      v23 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v124 = byte_281EAF3;
      v122 = byte_281EAF3;
      v125 = byte_281EAF4;
      v123 = byte_281EAF4;
      v23(v4, v6, v13, 14);
      v24 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v24(v4, v6, v13, 15);
      v25 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v25(v4, v6, v13, 16);
      v26 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v26(v4, v6, v13, 17);
      v27 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v120 = byte_281EAF7;
      v121 = byte_281EAF8;
      v27(v4, v6, &v120, 19);
      v28 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v28(v4, v6, &v120, 19);
      v29 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v29(v4, v6, &v120, 19);
      v30 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v30(v4, v6, &v120, 19);
      v31 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v31(v4, v6, &v120, 19);
      v32 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v32(v4, v6, &v120, 19);
    }
  }
  v33 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 37, 21);
  v34 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 37, 21);
  v35 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 43, 43);
  v36 = (*(int (__fastcall **)(_DWORD, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 43, 43);
  v37 = v36;
  if ( v34 > v36 )
    v37 = v34;
  if ( v34 < v36 )
    v36 = v34;
  v38 = v35;
  if ( v33 < v35 )
    v38 = v33;
  if ( *((_DWORD *)v5 + 3) >= v38 )
    if ( v33 > v35 )
      v35 = v33;
    if ( *(_DWORD *)v5 <= v35 && *((_DWORD *)v5 + 5) >= v36 && *((_DWORD *)v5 + 2) <= v37 )
      v39 = v6;
      v40 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v118 = byte_281EAF1;
      v116 = byte_281EAF1;
      v119 = byte_281EAF2;
      v117 = byte_281EAF2;
      v41 = v6;
      v42 = v5;
      v40(v4, v41, v5, 37);
        v43 = 1;
          v44 = 37;
            v45 = 22;
              v46 = StructurePiece::getWorldY(v4, v43);
              if ( v46 >= *(_WORD *)(BlockSource::getDimension(v39) + 20) )
                v47 = *(_BYTE *)(Block::mAir + 4);
                v47 = word_281EAFB;
              v48 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
              v138 = v47;
              v48(v4, v39, &v138, v44);
              ++v45;
            while ( v45 != 44 );
            ++v44;
          while ( v44 != 44 );
          ++v43;
        while ( v43 != 15 );
      v5 = v42;
      v49 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v114 = byte_281EAF1;
      v112 = byte_281EAF1;
      v115 = byte_281EAF2;
      v113 = byte_281EAF2;
      v49(v4, v39, v42, 37);
      v50 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v110 = byte_281EAF3;
      v108 = byte_281EAF3;
      v111 = byte_281EAF4;
      v109 = byte_281EAF4;
      v50(v4, v39, v5, 37);
      v51 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v106 = byte_281EAF3;
      v104 = byte_281EAF3;
      v107 = byte_281EAF4;
      v105 = byte_281EAF4;
      v51(v4, v39, v5, 43);
      v52 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v52(v4, v39, v5, 42);
      v53 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v53(v4, v39, v5, 41);
      v54 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v54(v4, v39, v5, 40);
      v55 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v102 = byte_281EAF7;
      v103 = byte_281EAF8;
      v55(v4, v39, &v102, 38);
      v56 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v56(v4, v39, &v102, 38);
      v57 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v57(v4, v39, &v102, 38);
      v58 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v58(v4, v39, &v102, 38);
      v59 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v59(v4, v39, &v102, 38);
      v60 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v6 = v39;
      v60(v4, v39, &v102, 38);
  v61 = (*(int (__fastcall **)(_DWORD, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 15, 37);
  v62 = (*(int (__fastcall **)(_DWORD, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 15, 37);
  v63 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v4 + 28))(v4, 42, 43);
  result = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v4 + 32))(v4, 42, 43);
  v65 = result;
  if ( v62 > result )
    v65 = v62;
  if ( v62 < result )
    result = v62;
  v66 = v63;
  if ( v61 < v63 )
    v66 = v61;
  if ( *((_DWORD *)v5 + 3) >= v66 )
    if ( v61 > v63 )
      v63 = v61;
    if ( *(_DWORD *)v5 <= v63 && *((_DWORD *)v5 + 5) >= result )
      result = *((_DWORD *)v5 + 2);
      if ( result <= v65 )
        v67 = v6;
        v68 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v100 = byte_281EAF1;
        v98 = byte_281EAF1;
        v101 = byte_281EAF2;
        v99 = byte_281EAF2;
        v69 = v6;
        v70 = v5;
        v68(v4, v69, v5, 21);
        if ( *((_BYTE *)v4 + 36) )
          v71 = 1;
            v72 = 21;
              v73 = 37;
              do
              {
                v74 = StructurePiece::getWorldY(v4, v71);
                if ( v74 >= *(_WORD *)(BlockSource::getDimension(v67) + 20) )
                  v75 = *(_BYTE *)(Block::mAir + 4);
                else
                  v75 = word_281EAFB;
                v76 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
                v138 = v75;
                v139 = 0;
                v76(v4, v67, &v138, v72);
                ++v73;
              }
              while ( v73 != 44 );
              ++v72;
            while ( v72 != 37 );
            ++v71;
          while ( v71 != 15 );
        v77 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v96 = byte_281EAF1;
        v94 = byte_281EAF1;
        v97 = byte_281EAF2;
        v95 = byte_281EAF2;
        v77(v4, v67, v70, 21);
        v78 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v92 = byte_281EAF3;
        v90 = byte_281EAF3;
        v93 = byte_281EAF4;
        v91 = byte_281EAF4;
        v78(v4, v67, v70, 15);
        v79 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v79(v4, v67, v70, 16);
        v80 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v80(v4, v67, v70, 17);
        v81 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v81(v4, v67, v70, 18);
        v82 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v88 = byte_281EAF7;
        v89 = byte_281EAF8;
        v82(v4, v67, &v88, 21);
        v83 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v83(v4, v67, &v88, 24);
        v84 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v84(v4, v67, &v88, 27);
        v85 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v85(v4, v67, &v88, 30);
        v86 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v86(v4, v67, &v88, 33);
        v87 = *(int (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        result = v87(v4, v67, &v88, 36);
  return result;
}


int __fastcall MonumentBuilding::generateEntranceArchs(MonumentBuilding *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  MonumentBuilding *v4; // r6@1
  const BoundingBox *v5; // r8@1
  BlockSource *v6; // r10@1
  int v7; // r9@1
  int v8; // r7@1
  int v9; // r5@1
  int result; // r0@1
  const BoundingBox *v11; // r2@1
  int v12; // r1@1
  int v13; // r3@1
  BlockSource *v14; // r8@13
  int v15; // r4@14
  signed int v16; // r5@15
  const BoundingBox *v17; // r10@16
  int v18; // r11@16
  int v19; // r7@17
  char v20; // r0@18
  void (__fastcall *v21)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@20
  signed int v22; // r4@23
  BlockSource *v23; // r5@23
  const BoundingBox *v24; // r8@24
  void (__fastcall *v25)(MonumentBuilding *, BlockSource *); // r7@24
  void (__fastcall *v26)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@24
  void (__fastcall *v27)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@24
  void (__fastcall *v28)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@24
  void (__fastcall *v29)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@24
  void (__fastcall *v30)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@24
  void (__fastcall *v31)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@24
  void (__fastcall *v32)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@24
  void (__fastcall *v33)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@24
  void (__fastcall *v34)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@24
  int (__fastcall *v35)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@24
  char v36; // [sp+20h] [bp-68h]@24
  char v37; // [sp+21h] [bp-67h]@24
  char v38; // [sp+24h] [bp-64h]@24
  char v39; // [sp+25h] [bp-63h]@24
  char v40; // [sp+28h] [bp-60h]@24
  char v41; // [sp+29h] [bp-5Fh]@24
  char v42; // [sp+2Ch] [bp-5Ch]@24
  char v43; // [sp+2Dh] [bp-5Bh]@24
  char v44; // [sp+30h] [bp-58h]@24
  char v45; // [sp+31h] [bp-57h]@24
  char v46; // [sp+34h] [bp-54h]@24
  char v47; // [sp+35h] [bp-53h]@24
  char v48; // [sp+38h] [bp-50h]@24
  char v49; // [sp+39h] [bp-4Fh]@24
  char v50; // [sp+3Ch] [bp-4Ch]@24
  char v51; // [sp+3Dh] [bp-4Bh]@24
  char v52; // [sp+40h] [bp-48h]@24
  char v53; // [sp+41h] [bp-47h]@24
  char v54; // [sp+44h] [bp-44h]@24
  char v55; // [sp+45h] [bp-43h]@24
  char v56; // [sp+48h] [bp-40h]@24
  char v57; // [sp+49h] [bp-3Fh]@24
  char v58; // [sp+4Ch] [bp-3Ch]@24
  char v59; // [sp+4Dh] [bp-3Bh]@24
  char v60; // [sp+50h] [bp-38h]@24
  char v61; // [sp+51h] [bp-37h]@24
  char v62; // [sp+54h] [bp-34h]@24
  char v63; // [sp+55h] [bp-33h]@24
  char v64; // [sp+58h] [bp-30h]@24
  char v65; // [sp+59h] [bp-2Fh]@24
  char v66; // [sp+5Ch] [bp-2Ch]@24
  char v67; // [sp+5Dh] [bp-2Bh]@24
  char v68; // [sp+60h] [bp-28h]@20
  char v69; // [sp+61h] [bp-27h]@20

  v4 = this;
  v5 = a4;
  v6 = a2;
  v7 = (*(int (**)(void))(*(_DWORD *)this + 28))();
  v8 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 22, 5);
  v9 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 35, 17);
  result = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 35, 17);
  v11 = v5;
  v12 = result;
  v13 = v9;
  if ( v8 > result )
    v12 = v8;
  if ( v8 < result )
    result = v8;
  if ( v7 < v9 )
    v13 = v7;
  if ( *((_DWORD *)v5 + 3) >= v13 )
  {
    if ( v7 > v9 )
      v9 = v7;
    if ( *(_DWORD *)v5 <= v9 && *((_DWORD *)v5 + 5) >= result )
    {
      result = *((_DWORD *)v5 + 2);
      if ( result <= v12 )
      {
        v14 = v6;
        if ( *((_BYTE *)v4 + 36) )
        {
          v15 = 0;
          do
          {
            v16 = 25;
            do
            {
              v17 = v11;
              v18 = 0;
              do
              {
                v19 = StructurePiece::getWorldY(v4, v15);
                if ( v19 >= *(_WORD *)(BlockSource::getDimension(v14) + 20) )
                  v20 = *(_BYTE *)(Block::mAir + 4);
                else
                  v20 = word_281EAFB;
                v21 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
                v68 = v20;
                v69 = 0;
                v21(v4, v14, &v68, v16);
                ++v18;
              }
              while ( v18 != 21 );
              ++v16;
              v11 = v17;
            }
            while ( v16 != 33 );
            ++v15;
          }
          while ( v15 != 9 );
        }
        v22 = 5;
        v23 = v14;
        do
          v24 = v11;
          v25 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *))(*(_DWORD *)v4 + 40);
          v66 = byte_281EAF3;
          v64 = byte_281EAF3;
          v67 = byte_281EAF4;
          v65 = byte_281EAF4;
          v25(v4, v23);
          v26 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
          v62 = byte_281EAF3;
          v60 = byte_281EAF3;
          v63 = byte_281EAF4;
          v61 = byte_281EAF4;
          v26(v4, v23, v24, 22);
          v27 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
          v58 = byte_281EAF3;
          v59 = byte_281EAF4;
          v27(v4, v23, &v58, 25);
          v28 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
          v56 = byte_281EAF3;
          v57 = byte_281EAF4;
          v28(v4, v23, &v56, 26);
          v29 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
          v54 = byte_281EAF9;
          v55 = byte_281EAFA;
          v29(v4, v23, &v54, 26);
          v30 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
          v52 = byte_281EAF3;
          v50 = byte_281EAF3;
          v53 = byte_281EAF4;
          v51 = byte_281EAF4;
          v30(v4, v23, v24, 33);
          v31 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
          v48 = byte_281EAF3;
          v46 = byte_281EAF3;
          v49 = byte_281EAF4;
          v47 = byte_281EAF4;
          v31(v4, v23, v24, 34);
          v32 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
          v44 = byte_281EAF3;
          v45 = byte_281EAF4;
          v32(v4, v23, &v44, 32);
          v33 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
          v42 = byte_281EAF3;
          v43 = byte_281EAF4;
          v33(v4, v23, &v42, 31);
          v34 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
          v40 = byte_281EAF9;
          v41 = byte_281EAFA;
          v34(v4, v23, &v40, 31);
          v35 = *(int (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
          v38 = byte_281EAF1;
          v36 = byte_281EAF1;
          v39 = byte_281EAF2;
          v37 = byte_281EAF2;
          result = v35(v4, v23, v24, 27);
          v22 += 4;
          v11 = v24;
        while ( v22 != 21 );
      }
    }
  }
  return result;
}


int __fastcall MonumentBuilding::MonumentBuilding(int a1, Random *a2, int a3, int a4, int *a5)
{
  int v5; // r6@1
  Random *v6; // r10@1
  int v7; // r5@1
  int v8; // r9@1
  _QWORD *v9; // r7@1
  int v10; // r0@1
  void *v11; // r0@1
  _DWORD *v12; // r0@1
  _DWORD *v13; // r1@1 OVERLAPPED
  _DWORD *v14; // r2@1
  void *v15; // r0@5
  _DWORD *v16; // r0@5
  _DWORD *v17; // r1@5 OVERLAPPED
  _DWORD *v18; // r2@5
  _DWORD *v19; // r0@11
  int v20; // r1@11
  _DWORD *v21; // r0@15
  int v22; // r1@15
  _DWORD *v23; // r0@19
  int v24; // r1@19
  _DWORD *v25; // r0@23
  int v26; // r1@23
  _DWORD *v27; // r0@27
  int v28; // r1@27
  _DWORD *v29; // r0@31
  int v30; // r1@31
  int i; // r6@35
  int v32; // r10@35
  int v33; // r0@36
  int v34; // r1@36
  unsigned int *v35; // r1@37
  unsigned int v36; // r0@39
  _DWORD *v37; // r7@44
  unsigned int v38; // r11@45
  unsigned int v39; // r8@45
  __int64 v40; // r0@49
  int v41; // r5@55
  unsigned int *v42; // r1@56
  unsigned int v43; // r0@58
  unsigned int *v44; // r7@62
  unsigned int v45; // r0@64
  int v46; // r8@70
  __int64 v47; // r0@70
  unsigned int v48; // r4@71
  int v49; // r5@73
  int v50; // r6@73
  int v51; // r7@73
  int v52; // r10@73
  int v53; // r4@73
  int v54; // r0@73
  int v55; // r8@73 OVERLAPPED
  int v56; // r0@75
  int v57; // r4@81
  int v58; // r1@81
  int v59; // r5@85
  int v60; // r6@85
  int v61; // r7@85
  int v62; // r10@85
  int v63; // r4@85
  int v64; // r0@85
  int v65; // r11@85
  int v66; // r0@87
  int v67; // r4@93
  int v68; // r1@93
  int v69; // r5@97
  int v70; // r6@97
  int v71; // r7@97
  int v72; // r4@97
  int v73; // r10@97
  int v74; // r0@97
  int v75; // r1@97
  int v76; // r1@99
  int v77; // r1@101
  unsigned int v78; // r10@109
  _DWORD *v79; // r0@109
  int v80; // r7@109
  char v81; // r2@109
  int v82; // r8@109
  __int64 v83; // r2@109
  _DWORD *v84; // r0@113
  _DWORD *v85; // r1@113 OVERLAPPED
  _DWORD *v86; // r2@113
  _DWORD *v87; // r0@117
  char v88; // r1@117
  _DWORD *v89; // r1@117 OVERLAPPED
  _DWORD *v90; // r2@117
  _DWORD *v91; // r5@121 OVERLAPPED
  _DWORD *v92; // r6@121 OVERLAPPED
  int v93; // r4@128
  int v94; // r5@128
  int v95; // r7@129
  unsigned int *v96; // r1@130
  unsigned int v97; // r0@132
  unsigned int *v98; // r6@136
  unsigned int v99; // r0@138
  int v101; // [sp+14h] [bp-BCh]@103
  int v102; // [sp+18h] [bp-B8h]@101
  int v103; // [sp+1Ch] [bp-B4h]@99
  int v104; // [sp+20h] [bp-B0h]@105
  int v105; // [sp+24h] [bp-ACh]@107
  int v106; // [sp+28h] [bp-A8h]@95
  int v107; // [sp+2Ch] [bp-A4h]@89
  int v108; // [sp+30h] [bp-A0h]@87
  int v109; // [sp+34h] [bp-9Ch]@93
  int v110; // [sp+38h] [bp-98h]@97
  int v111; // [sp+3Ch] [bp-94h]@83
  int v112; // [sp+40h] [bp-90h]@77
  int v113; // [sp+44h] [bp-8Ch]@75
  int v114; // [sp+48h] [bp-88h]@81
  int v115; // [sp+4Ch] [bp-84h]@85
  Random *v116; // [sp+50h] [bp-80h]@6
  _QWORD *v117; // [sp+54h] [bp-7Ch]@6
  _DWORD *v118; // [sp+58h] [bp-78h]@117
  _DWORD *v119; // [sp+5Ch] [bp-74h]@113
  _DWORD *v120; // [sp+60h] [bp-70h]@109
  int v121; // [sp+64h] [bp-6Ch]@49
  int v122; // [sp+68h] [bp-68h]@36
  int v123; // [sp+6Ch] [bp-64h]@36
  _DWORD *v124; // [sp+70h] [bp-60h]@31
  _DWORD *v125; // [sp+74h] [bp-5Ch]@27
  _DWORD *v126; // [sp+78h] [bp-58h]@23
  _DWORD *v127; // [sp+7Ch] [bp-54h]@19
  _DWORD *v128; // [sp+80h] [bp-50h]@15
  _DWORD *v129; // [sp+84h] [bp-4Ch]@11
  void *v130; // [sp+88h] [bp-48h]@9
  _DWORD *v131; // [sp+8Ch] [bp-44h]@9
  _DWORD *v132; // [sp+90h] [bp-40h]@9
  _DWORD *v133; // [sp+94h] [bp-3Ch]@9
  _DWORD *v134; // [sp+98h] [bp-38h]@5
  _DWORD *v135; // [sp+9Ch] [bp-34h]@1
  int v136; // [sp+A0h] [bp-30h]@1
  int v137; // [sp+A4h] [bp-2Ch]@35

  v5 = a3;
  v6 = a2;
  v7 = a4;
  v8 = a1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = 255;
  *(_DWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 36) = 1;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  byte_281EAF1 = *(_BYTE *)(Block::mPrismarine + 4);
  byte_281EAF2 = 0;
  byte_281EAF3 = byte_281EAF1;
  byte_281EAF4 = 2;
  byte_281EAF5 = byte_281EAF1;
  byte_281EAF6 = 1;
  byte_281EAF7 = byte_281EAF1;
  byte_281EAF8 = 2;
  byte_281EAF9 = *(_BYTE *)(Block::mSeaLantern + 4);
  byte_281EAFA = 0;
  LOBYTE(word_281EAFB) = *(_BYTE *)(Block::mStillWater + 4);
  word_281EAFB = (unsigned __int8)word_281EAFB;
  v9 = (_QWORD *)(a1 + 48);
  *(_DWORD *)a1 = &off_2718DCC;
  j___aeabi_memclr4(a1 + 48, 40);
  *(_DWORD *)(v8 + 28) = *a5;
  v10 = *a5;
  *(_DWORD *)(v8 + 4) = v5;
  *(_DWORD *)(v8 + 8) = 39;
  *(_DWORD *)(v8 + 12) = v7;
  *(_DWORD *)(v8 + 16) = v5 + 57;
  *(_DWORD *)(v8 + 20) = 61;
  *(_DWORD *)(v8 + 24) = v7 + 57;
  MonumentBuilding::generateRoomGraph((MonumentBuilding *)&v136, (Random *)v8, v6);
  *(_BYTE *)(*(_DWORD *)(v8 + 72) + 44) = 1;
  v11 = j_operator new(0x30u);
  v12 = (_DWORD *)OceanMonumentPiece::OceanMonumentPiece((int)v11, 1, a5, v8 + 72, 1, 1, 1);
  v135 = v12;
  *v12 = &off_2718E14;
  *(_QWORD *)&v13 = *(_QWORD *)(v8 + 52);
  if ( v13 == v14 )
  {
    std::vector<std::unique_ptr<OceanMonumentPiece,std::default_delete<OceanMonumentPiece>>,std::allocator<std::unique_ptr<OceanMonumentPiece,std::default_delete<OceanMonumentPiece>>>>::_M_emplace_back_aux<std::unique_ptr<OceanMonumentPiece,std::default_delete<OceanMonumentPiece>>>(
      v9,
      (int *)&v135);
    if ( v135 )
      (*(void (**)(void))(*v135 + 4))();
  }
  else
    v135 = 0;
    *v13 = v12;
    *(_DWORD *)(v8 + 52) = v13 + 1;
  v135 = 0;
  v15 = j_operator new(0x30u);
  v16 = (_DWORD *)OceanMonumentPiece::OceanMonumentPiece((int)v15, 1, a5, v8 + 80, 2, 2, 2);
  v134 = v16;
  *v16 = &off_2719054;
  *(_QWORD *)&v17 = *(_QWORD *)(v8 + 52);
  if ( v17 == v18 )
      (int *)&v134);
    v116 = v6;
    v117 = v9;
    if ( v134 )
      (*(void (**)(void))(*v134 + 4))();
    v134 = 0;
    *v17 = v16;
    *(_DWORD *)(v8 + 52) = v17 + 1;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v130 = j_operator new(4u);
  *(_DWORD *)v130 = &off_27191A4;
  std::vector<std::unique_ptr<MonumentRoomFitter,std::default_delete<MonumentRoomFitter>>,std::allocator<std::unique_ptr<MonumentRoomFitter,std::default_delete<MonumentRoomFitter>>>>::_M_emplace_back_aux<std::unique_ptr<MonumentRoomFitter,std::default_delete<MonumentRoomFitter>>>(
    &v131,
    (int *)&v130);
  if ( v130 )
    (*(void (**)(void))(*(_DWORD *)v130 + 4))();
  v130 = 0;
  v19 = j_operator new(4u);
  v129 = v19;
  *v19 = &off_27191BC;
  v20 = (int)v132;
  if ( v132 == v133 )
    std::vector<std::unique_ptr<MonumentRoomFitter,std::default_delete<MonumentRoomFitter>>,std::allocator<std::unique_ptr<MonumentRoomFitter,std::default_delete<MonumentRoomFitter>>>>::_M_emplace_back_aux<std::unique_ptr<MonumentRoomFitter,std::default_delete<MonumentRoomFitter>>>(
      &v131,
      (int *)&v129);
    if ( v129 )
      (*(void (**)(void))(*v129 + 4))();
    v129 = 0;
    *v132 = v19;
    v132 = (_DWORD *)(v20 + 4);
  v129 = 0;
  v21 = j_operator new(4u);
  v128 = v21;
  *v21 = &off_271918C;
  v22 = (int)v132;
      (int *)&v128);
    if ( v128 )
      (*(void (**)(void))(*v128 + 4))();
    v128 = 0;
    *v132 = v21;
    v132 = (_DWORD *)(v22 + 4);
  v128 = 0;
  v23 = j_operator new(4u);
  v127 = v23;
  *v23 = &off_2719174;
  v24 = (int)v132;
      (int *)&v127);
    if ( v127 )
      (*(void (**)(void))(*v127 + 4))();
    v127 = 0;
    *v132 = v23;
    v132 = (_DWORD *)(v24 + 4);
  v127 = 0;
  v25 = j_operator new(4u);
  v126 = v25;
  *v25 = &off_271915C;
  v26 = (int)v132;
      (int *)&v126);
    if ( v126 )
      (*(void (**)(void))(*v126 + 4))();
    v126 = 0;
    *v132 = v25;
    v132 = (_DWORD *)(v26 + 4);
  v126 = 0;
  v27 = j_operator new(4u);
  v125 = v27;
  *v27 = &off_2719144;
  v28 = (int)v132;
      (int *)&v125);
    if ( v125 )
      (*(void (**)(void))(*v125 + 4))();
    v125 = 0;
    *v132 = v27;
    v132 = (_DWORD *)(v28 + 4);
  v125 = 0;
  v29 = j_operator new(4u);
  v124 = v29;
  *v29 = &off_271912C;
  v30 = (int)v132;
      (int *)&v124);
    if ( v124 )
      (*(void (**)(void))(*v124 + 4))();
    v124 = 0;
    *v132 = v29;
    v132 = (_DWORD *)(v30 + 4);
  v124 = 0;
  v32 = v137;
  for ( i = v136; i != v32; i += 8 )
    v33 = *(_DWORD *)i;
    v122 = *(_DWORD *)i;
    v34 = *(_DWORD *)(i + 4);
    v123 = v34;
    if ( v34 )
    {
      v35 = (unsigned int *)(v34 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v36 = __ldrex(v35);
        while ( __strex(v36 + 1, v35) );
        v33 = v122;
      }
      else
        ++*v35;
    }
    if ( !*(_BYTE *)(v33 + 44) && *(_DWORD *)(v33 + 8) <= 74 )
      v37 = v131;
      if ( v132 != v131 )
        v38 = 0;
        v39 = v132 - v131;
        while ( (*(int (__cdecl **)(_DWORD))(*(_DWORD *)*v37 + 8))(*v37) != 1 )
        {
          ++v38;
          ++v37;
          if ( v38 >= v39 )
            goto LABEL_55;
        }
        (*(void (__fastcall **)(int *))(*(_DWORD *)*v37 + 12))(&v121);
        v40 = *(_QWORD *)(v8 + 52);
        if ( (_DWORD)v40 == HIDWORD(v40) )
          std::vector<std::unique_ptr<OceanMonumentPiece,std::default_delete<OceanMonumentPiece>>,std::allocator<std::unique_ptr<OceanMonumentPiece,std::default_delete<OceanMonumentPiece>>>>::_M_emplace_back_aux<std::unique_ptr<OceanMonumentPiece,std::default_delete<OceanMonumentPiece>>>(
            v117,
            &v121);
        else
          HIDWORD(v40) = v121;
          v121 = 0;
          *(_DWORD *)v40 = HIDWORD(v40);
          *(_DWORD *)(v8 + 52) = v40 + 4;
        if ( v121 )
          (*(void (__cdecl **)(int))(*(_DWORD *)v121 + 4))(v121);
        v121 = 0;
LABEL_55:
    v41 = v123;
    if ( v123 )
      v42 = (unsigned int *)(v123 + 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 == 1 )
        v44 = (unsigned int *)(v41 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 8))(v41);
        if ( &pthread_create )
          __dmb();
          do
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
          v45 = (*v44)--;
        if ( v45 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 12))(v41);
  v46 = *(_DWORD *)(v8 + 8);
  (*(void (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v8 + 28))(v8, 9, 22);
  (*(void (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v8 + 32))(v8, 9, 22);
  v47 = *(_QWORD *)(v8 + 48);
  if ( HIDWORD(v47) != (_DWORD)v47 )
    v48 = 0;
    do
      (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v47 + 4 * v48) + 8))(*(_DWORD *)(v47 + 4 * v48));
      v47 = *(_QWORD *)(v8 + 48);
      ++v48;
    while ( v48 < (HIDWORD(v47) - (signed int)v47) >> 2 );
  v49 = (*(int (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v8 + 28))(v8, 1, 1);
  v50 = StructurePiece::getWorldY((StructurePiece *)v8, 1);
  v51 = (*(int (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v8 + 32))(v8, 1, 1);
  v52 = (*(int (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v8 + 28))(v8, 23, 21);
  v53 = StructurePiece::getWorldY((StructurePiece *)v8, 8);
  v54 = (*(int (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v8 + 32))(v8, 23, 21);
  v55 = v54;
  if ( v51 > v54 )
    v54 = v51;
  v113 = v54;
  v56 = v53;
  if ( v50 > v53 )
    v56 = v50;
  v112 = v56;
  if ( v51 < v55 )
    v55 = v51;
  if ( v50 < v53 )
    v53 = v50;
  v114 = v53;
  v57 = v52;
  v58 = v52;
  if ( v49 > v52 )
    v58 = v49;
  v111 = v58;
  if ( v49 < v52 )
    v57 = v49;
  v115 = v57;
  v59 = (*(int (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v8 + 28))(v8, 34, 1);
  v60 = StructurePiece::getWorldY((StructurePiece *)v8, 1);
  v61 = (*(int (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v8 + 32))(v8, 34, 1);
  v62 = (*(int (__fastcall **)(_DWORD, signed int, signed int))(*(_DWORD *)v8 + 28))(v8, 56, 21);
  v63 = StructurePiece::getWorldY((StructurePiece *)v8, 8);
  v64 = (*(int (__fastcall **)(_DWORD, signed int, signed int))(*(_DWORD *)v8 + 32))(v8, 56, 21);
  v65 = v64;
  if ( v61 > v64 )
    v64 = v61;
  v108 = v64;
  v66 = v63;
  if ( v60 > v63 )
    v66 = v60;
  v107 = v66;
  if ( v61 < v65 )
    v65 = v61;
  if ( v60 < v63 )
    v63 = v60;
  v109 = v63;
  v67 = v62;
  v68 = v62;
  if ( v59 > v62 )
    v68 = v59;
  v106 = v68;
  if ( v59 < v62 )
    v67 = v59;
  v110 = v67;
  v69 = (*(int (__fastcall **)(_DWORD, signed int, signed int))(*(_DWORD *)v8 + 28))(v8, 22, 22);
  v70 = StructurePiece::getWorldY((StructurePiece *)v8, 13);
  v71 = (*(int (__fastcall **)(_DWORD, signed int, signed int))(*(_DWORD *)v8 + 32))(v8, 22, 22);
  v72 = (*(int (__fastcall **)(_DWORD, signed int, signed int))(*(_DWORD *)v8 + 28))(v8, 35, 35);
  v73 = StructurePiece::getWorldY((StructurePiece *)v8, 17);
  v74 = (*(int (__fastcall **)(_DWORD, signed int, signed int))(*(_DWORD *)v8 + 32))(v8, 35, 35);
  v75 = v74;
  if ( v71 > v74 )
    v75 = v71;
  v103 = v75;
  v76 = v73;
  if ( v70 > v73 )
    v76 = v70;
  v102 = v76;
  v77 = v72;
  if ( v69 > v72 )
    v77 = v69;
  v101 = v77;
  if ( v71 < v74 )
    v74 = v71;
  v104 = v74;
  if ( v70 < v73 )
    v73 = v70;
  v105 = v73;
  if ( v69 < v72 )
    v72 = v69;
  v78 = j_Random::_genRandInt32(v116);
  v79 = j_operator new(0x38u);
  v79[3] = 0;
  v79[4] = 0;
  v79[1] = 0;
  v79[2] = 0;
  v79[8] = 1;
  *((_BYTE *)v79 + 36) = 1;
  v79[10] = 0;
  v79[11] = 0;
  v79[7] = *a5;
  v79[1] = v115;
  v80 = v114;
  *((_QWORD *)v79 + 1) = *(_QWORD *)(&v55 - 1);
  v79[4] = v111;
  v79[5] = v112;
  v79[6] = v113;
  v81 = *(_BYTE *)(Block::mPrismarine + 4);
  byte_281EAF1 = v81;
  byte_281EAF3 = v81;
  byte_281EAF5 = v81;
  byte_281EAF7 = v81;
  *v79 = &off_271909C;
  HIBYTE(word_281EAFB) = 0;
  *((_BYTE *)v79 + 52) = 0;
  v82 = (v78 >> 1) & 1;
  v79[12] = v82;
  *((_BYTE *)v79 + 53) = 0;
  v120 = v79;
  v83 = *(_QWORD *)(v8 + 52);
  if ( (_DWORD)v83 == HIDWORD(v83) )
      v117,
      (int *)&v120);
    if ( v120 )
      (*(void (__cdecl **)(_DWORD *))(*v120 + 4))(v120);
    v120 = 0;
    *(_DWORD *)v83 = v79;
    *(_DWORD *)(v8 + 52) = v83 + 4;
  v120 = 0;
  v84 = j_operator new(0x38u);
  v84[3] = 0;
  v84[4] = 0;
  v84[1] = 0;
  v84[2] = 0;
  v84[8] = 1;
  *((_BYTE *)v84 + 36) = 1;
  v84[10] = 0;
  v84[11] = 0;
  v84[7] = *a5;
  v84[1] = v110;
  v84[2] = v109;
  v84[3] = v65;
  v84[4] = v106;
  v84[5] = v107;
  v84[6] = v108;
  *v84 = &off_271909C;
  *((_BYTE *)v84 + 52) = 0;
  v84[12] = v82 ^ 1;
  *((_BYTE *)v84 + 53) = 1;
  v119 = v84;
  *(_QWORD *)&v85 = *(_QWORD *)(v8 + 52);
  if ( v85 == v86 )
      (int *)&v119);
    if ( v119 )
      (*(void (__cdecl **)(_DWORD *))(*v119 + 4))(v119);
    v119 = 0;
    *v85 = v84;
    *(_DWORD *)(v8 + 52) = v85 + 1;
  v119 = 0;
  v87 = j_operator new(0x34u);
  v87[3] = 0;
  v87[4] = 0;
  v87[1] = 0;
  v87[2] = 0;
  v87[8] = 1;
  *((_BYTE *)v87 + 36) = 1;
  v87[10] = 0;
  v87[11] = 0;
  v87[7] = *a5;
  v87[1] = v72;
  v87[2] = v105;
  v87[3] = v104;
  v87[4] = v101;
  v87[5] = v102;
  v87[6] = v103;
  v88 = *(_BYTE *)(Block::mPrismarine + 4);
  byte_281EAF1 = v88;
  byte_281EAF3 = v88;
  byte_281EAF5 = v88;
  byte_281EAF7 = v88;
  *v87 = &off_27190E4;
  *((_BYTE *)v87 + 48) = 0;
  v118 = v87;
  *(_QWORD *)&v89 = *(_QWORD *)(v8 + 52);
  if ( v89 == v90 )
      (int *)&v118);
    if ( v118 )
      (*(void (__cdecl **)(_DWORD *))(*v118 + 4))(v118);
    v118 = 0;
    *v89 = v87;
    *(_DWORD *)(v8 + 52) = v89 + 1;
  v118 = 0;
  *(_QWORD *)&v91 = *(_QWORD *)&v131;
  if ( v131 != v132 )
      if ( *v91 )
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)*v91 + 4))(*v91);
      *v91 = 0;
      ++v91;
    while ( v92 != v91 );
    v91 = v131;
  if ( v91 )
    j_operator delete(v91);
  v93 = v137;
  v94 = v136;
  if ( v136 != v137 )
      v95 = *(_DWORD *)(v94 + 4);
      if ( v95 )
        v96 = (unsigned int *)(v95 + 4);
            v97 = __ldrex(v96);
          while ( __strex(v97 - 1, v96) );
          v97 = (*v96)--;
        if ( v97 == 1 )
          v98 = (unsigned int *)(v95 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v95 + 8))(v95);
          if ( &pthread_create )
          {
            __dmb();
            do
              v99 = __ldrex(v98);
            while ( __strex(v99 - 1, v98) );
          }
          else
            v99 = (*v98)--;
          if ( v99 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v95 + 12))(v95);
      v94 += 8;
    while ( v94 != v93 );
    v94 = v136;
  if ( v94 )
    j_operator delete((void *)v94);
  return v8;
}


MonumentBuilding *__fastcall MonumentBuilding::~MonumentBuilding(MonumentBuilding *this)
{
  MonumentBuilding *v1; // r8@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r4@8
  unsigned int v6; // r0@10
  int v7; // r5@15
  unsigned int *v8; // r1@16
  unsigned int v9; // r0@18
  unsigned int *v10; // r4@22
  unsigned int v11; // r0@24
  int v12; // r5@29
  int v13; // r7@29
  int v14; // r4@30
  unsigned int *v15; // r1@31
  unsigned int v16; // r0@33
  unsigned int *v17; // r6@37
  unsigned int v18; // r0@39
  char *v19; // r4@48
  char *v20; // r5@48
  int v21; // r5@55
  unsigned int *v22; // r1@56
  unsigned int v23; // r0@58
  unsigned int *v24; // r4@62
  unsigned int v25; // r0@64

  v1 = this;
  *(_DWORD *)this = &off_2718DCC;
  v2 = *((_DWORD *)this + 21);
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
  v7 = *((_DWORD *)v1 + 19);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  v13 = *(_QWORD *)((char *)v1 + 60) >> 32;
  v12 = *(_QWORD *)((char *)v1 + 60);
  if ( v12 != v13 )
    do
      v14 = *(_DWORD *)(v12 + 4);
      if ( v14 )
        v15 = (unsigned int *)(v14 + 4);
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
      v12 += 8;
    while ( v12 != v13 );
    v12 = *((_DWORD *)v1 + 15);
  if ( v12 )
    j_operator delete((void *)v12);
  v19 = (char *)(*((_QWORD *)v1 + 6) >> 32);
  v20 = (char *)*((_QWORD *)v1 + 6);
  if ( v20 != v19 )
      if ( *(_DWORD *)v20 )
        (*(void (**)(void))(**(_DWORD **)v20 + 4))();
      *(_DWORD *)v20 = 0;
      v20 += 4;
    while ( v19 != v20 );
    v20 = (char *)*((_DWORD *)v1 + 12);
  if ( v20 )
    j_operator delete(v20);
  *(_DWORD *)v1 = &off_2718D84;
  v21 = *((_DWORD *)v1 + 11);
  if ( v21 )
    v22 = (unsigned int *)(v21 + 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 == 1 )
      v24 = (unsigned int *)(v21 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
  return v1;
}


signed int __fastcall MonumentBuilding::postProcess(MonumentBuilding *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  MonumentBuilding *v4; // r10@1
  const BoundingBox *v5; // r9@1
  BlockSource *v6; // r6@1
  signed int v7; // r0@1
  int v8; // r1@1
  int v9; // r5@4
  int v10; // r8@5
  int v11; // r7@6
  int v12; // r4@7
  char v13; // r0@8
  void (__fastcall *v14)(MonumentBuilding *, BlockSource *, char *, int); // r4@10
  bool v15; // nf@12
  unsigned __int8 v16; // vf@12
  Random *v17; // ST00_4@13
  Random *v18; // r2@13
  Random *v19; // r2@13
  Random *v20; // r2@13
  Random *v21; // r2@13
  Random *v22; // r2@13
  Random *v23; // r2@13
  char *v24; // r2@13
  char *v25; // r7@13
  int v26; // r5@13
  int v27; // r0@13
  int v28; // r1@14
  char *v29; // r8@16
  int v30; // ST14_4@16
  void (__fastcall *v31)(MonumentBuilding *, BlockSource *); // r12@16
  int v32; // r11@16
  void (__fastcall *v33)(MonumentBuilding *, BlockSource *, char *, int); // r12@16
  void (__fastcall *v34)(MonumentBuilding *, BlockSource *, char *, int); // r12@16
  void (__fastcall *v35)(MonumentBuilding *, BlockSource *, char *, int); // r12@16
  void (__fastcall *v36)(MonumentBuilding *, BlockSource *, char *, int); // r12@16
  void (__fastcall *v37)(MonumentBuilding *, BlockSource *, char *, int); // r12@16
  void (__fastcall *v38)(MonumentBuilding *, BlockSource *, char *, int); // r12@16
  void (__fastcall *v39)(MonumentBuilding *, BlockSource *, char *, int); // r12@16
  int v40; // r1@18
  char *v41; // r9@18
  int v42; // ST28_4@19
  void (__fastcall *v43)(MonumentBuilding *, BlockSource *, char *, int); // r7@19
  int v44; // r5@19
  void (__fastcall *v45)(MonumentBuilding *, BlockSource *, char *, int); // r7@19
  void (__fastcall *v46)(MonumentBuilding *, BlockSource *, char *, int); // r12@19
  void (__fastcall *v47)(MonumentBuilding *, BlockSource *, char *, int); // r12@19
  void (__fastcall *v48)(MonumentBuilding *, BlockSource *, char *, int); // r12@19
  void (__fastcall *v49)(MonumentBuilding *, BlockSource *, char *, int); // r12@19
  void (__fastcall *v50)(MonumentBuilding *, BlockSource *, char *, int); // r12@19
  int v51; // r3@19
  void (__fastcall *v52)(MonumentBuilding *, BlockSource *, char *, int); // r12@19
  bool v53; // zf@20
  int v54; // r0@28
  int v55; // ST28_4@29
  void (__fastcall *v56)(MonumentBuilding *, BlockSource *, char *, int); // r6@29
  void (__fastcall *v57)(MonumentBuilding *, BlockSource *, char *, int); // r6@29
  void (__fastcall *v58)(MonumentBuilding *, BlockSource *, char *, int); // r12@29
  void (__fastcall *v59)(MonumentBuilding *, BlockSource *, char *, int); // r12@29
  void (__fastcall *v60)(MonumentBuilding *, BlockSource *, char *, int); // r12@29
  void (__fastcall *v61)(MonumentBuilding *, BlockSource *, char *, int); // r12@29
  void (__fastcall *v62)(MonumentBuilding *, BlockSource *, char *, int); // r12@29
  void (__fastcall *v63)(MonumentBuilding *, BlockSource *, char *, int); // r12@29
  int v64; // r11@32
  int v65; // r0@32
  int v66; // r5@33
  int v67; // r11@33
  signed int v68; // r6@34
  int v69; // r7@34
  int v70; // r4@35
  char v71; // r0@36
  void (__fastcall *v72)(MonumentBuilding *, BlockSource *, char *, int); // r4@38
  int v73; // r8@40
  int v74; // r5@41
  int v75; // r6@41
  int v76; // r4@42
  char v77; // r0@43
  void (__fastcall *v78)(MonumentBuilding *, BlockSource *, char *, int); // r7@45
  int v79; // r5@47
  int v80; // r8@47
  int v81; // r7@48
  int v82; // r4@48
  int v83; // r6@49
  char v84; // r0@50
  void (__fastcall *v85)(MonumentBuilding *, BlockSource *, char *, int); // r6@52
  int v86; // r4@54
  int v87; // r6@55
  int v88; // r5@55
  int v89; // r8@56
  int v90; // r4@56
  char v91; // r0@57
  void (__fastcall *v92)(MonumentBuilding *, BlockSource *, char *, int); // r7@59
  __int64 v93; // r0@62
  unsigned int v94; // r4@63
  int v95; // r2@64
  Random *v97; // [sp+0h] [bp-68h]@0
  Random *v98; // [sp+Ch] [bp-5Ch]@1
  signed int v99; // [sp+10h] [bp-58h]@15
  int v100; // [sp+14h] [bp-54h]@18
  int v101; // [sp+14h] [bp-54h]@28
  int v102; // [sp+14h] [bp-54h]@33
  int v103; // [sp+18h] [bp-50h]@33
  int v104; // [sp+20h] [bp-48h]@33
  signed int v105; // [sp+24h] [bp-44h]@32
  int v106; // [sp+2Ch] [bp-3Ch]@3
  int v107; // [sp+2Ch] [bp-3Ch]@14
  int v108; // [sp+2Ch] [bp-3Ch]@33
  const BoundingBox *v109; // [sp+30h] [bp-38h]@13
  BlockSource *v110; // [sp+34h] [bp-34h]@13
  char v111; // [sp+38h] [bp-30h]@13
  char v112; // [sp+39h] [bp-2Fh]@16
  char v113; // [sp+3Ch] [bp-2Ch]@13
  char v114; // [sp+3Dh] [bp-2Bh]@16
  char v115; // [sp+40h] [bp-28h]@10
  char v116; // [sp+41h] [bp-27h]@10

  v4 = this;
  v5 = a4;
  v98 = a3;
  v6 = a2;
  v7 = *(_WORD *)(BlockSource::getDimension(a2) + 20);
  v8 = *((_DWORD *)v4 + 2);
  if ( v7 <= 64 )
    v7 = 64;
  v106 = v7 - v8;
  if ( v7 - v8 > -1 )
  {
    v9 = 0;
    do
    {
      v10 = 0;
      do
      {
        v11 = 0;
        do
        {
          v12 = StructurePiece::getWorldY(v4, v9);
          if ( v12 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
            v13 = *(_BYTE *)(Block::mAir + 4);
          else
            v13 = word_281EAFB;
          v14 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
          v115 = v13;
          v116 = 0;
          v97 = (Random *)v9;
          v14(v4, v6, &v115, v10);
          ++v11;
        }
        while ( v11 != 59 );
        ++v10;
      }
      while ( v10 != 59 );
      v16 = __OFSUB__(v9, v106);
      v15 = v9++ - v106 < 0;
    }
    while ( v15 ^ v16 );
  }
  v109 = v5;
  v110 = v6;
  MonumentBuilding::generateWing(v4, 0, 0, v6, v97, v5);
  MonumentBuilding::generateWing(v4, 1, 33, v6, v17, v5);
  MonumentBuilding::generateEntranceArchs(v4, v6, v18, v5);
  MonumentBuilding::generateEntranceWall(v4, v6, v19, v5);
  MonumentBuilding::generateRoofPiece(v4, v6, v20, v5);
  MonumentBuilding::generateLowerWall(v4, v6, v21, v5);
  MonumentBuilding::generateMiddleWall(v4, v6, v22, v5);
  MonumentBuilding::generateUpperWall(v4, v6, v23, v5);
  v24 = &v113;
  v25 = &v111;
  v26 = 0;
  v27 = 0;
  do
    v28 = 0;
    v107 = v26;
    if ( v27 == 6 )
      v99 = 6;
        v101 = v28;
        v54 = 4;
          v55 = v54;
          v56 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
          v113 = byte_281EAF3;
          v114 = 0;
          v56(v4, v110, &v113, v26);
          v57 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
          v111 = byte_281EAF3;
          v112 = byte_281EAF4;
          v57(v4, v110, v25, v26);
          v58 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
          v58(v4, v110, &v113, v26);
          v59 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
          v59(v4, v110, v25, v26);
          v60 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
          v60(v4, v110, &v113, v26);
          v61 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
          v61(v4, v110, v25, v26);
          v62 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
          v62(v4, v110, &v113, v26);
          v63 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
          v63(v4, v110, v25, v26);
          v24 = &v113;
          ++v26;
          v54 = v55 - 1;
        while ( v55 != 1 );
        v26 = v107;
        v28 = v101 + 1;
      while ( v101 != 6 );
    else
      v99 = v27;
      if ( v27 == 3 )
          v29 = v24;
          v30 = v28;
          v31 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *))(*(_DWORD *)v4 + 36);
          v32 = v107 + v28;
          v31(v4, v110);
          v33 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
          v33(v4, v110, v25, v32);
          v34 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
          v34(v4, v110, v29, v32);
          v35 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
          v35(v4, v110, v25, v32);
          v36 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
          v36(v4, v110, v29, v32);
          v37 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
          v37(v4, v110, v25, v32);
          v38 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
          v38(v4, v110, v29, v32);
          v39 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
          v26 = v107;
          v39(v4, v110, v25, v32);
          v24 = v29;
          v28 = v30 + 1;
        while ( v30 != 3 );
      else
          v100 = v28;
          v40 = 0;
          v41 = v25;
          do
          {
            v42 = v40;
            v43 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
            v113 = byte_281EAF3;
            v114 = 0;
            v44 = v107 + v40;
            v43(v4, v110, &v113, v107 + v40);
            v45 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
            v111 = byte_281EAF3;
            v112 = byte_281EAF4;
            v45(v4, v110, v41, v44);
            v46 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
            v46(v4, v110, &v113, v44);
            v47 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
            v47(v4, v110, v41, v44);
            v48 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
            v48(v4, v110, &v113, v44);
            v49 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
            v49(v4, v110, v41, v44);
            v50 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
            v50(v4, v110, &v113, v44);
            v51 = v44;
            v52 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 44);
            v26 = v107;
            v52(v4, v110, v41, v51);
            v24 = &v113;
            v40 = v42 + 1;
          }
          while ( v42 != 3 );
          v25 = v41;
          v53 = v99 == 6;
          if ( v99 != 6 )
            v53 = v99 == 0;
          if ( v53 )
            v28 = v100 + 1;
            v28 = v100 + 6;
        while ( v28 < 7 );
    v26 += 9;
    v27 = v99 + 1;
  while ( v99 != 6 );
  v64 = 58;
  v105 = 60;
  v65 = 0;
    v66 = 2 * v65;
    v104 = v64;
    v67 = ~v65;
    v102 = v65;
    v108 = v65 + 58;
    v103 = 2 * v65;
      v68 = v105;
      v69 = v67;
        v70 = StructurePiece::getWorldY(v4, v66);
        if ( v70 >= *(_WORD *)(BlockSource::getDimension(v110) + 20) )
          v71 = *(_BYTE *)(Block::mAir + 4);
        else
          v71 = word_281EAFB;
        v72 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
        v115 = v71;
        v116 = 0;
        v72(v4, v110, &v115, v67);
        --v68;
        ++v69;
      while ( v68 );
      ++v66;
    while ( v66 != 24 );
    v73 = v103;
      v74 = 0;
      v75 = v67;
        v76 = StructurePiece::getWorldY(v4, v73);
        if ( v76 >= *(_WORD *)(BlockSource::getDimension(v110) + 20) )
          v77 = *(_BYTE *)(Block::mAir + 4);
          v77 = word_281EAFB;
        v78 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
        v115 = v77;
        v78(v4, v110, &v115, v108);
        ++v74;
        ++v75;
      while ( v105 != v74 );
      ++v73;
    while ( v73 != 24 );
    v79 = v103;
    v80 = -v102;
      v81 = v104;
      v82 = -v102;
        v83 = StructurePiece::getWorldY(v4, v79);
        if ( v83 >= *(_WORD *)(BlockSource::getDimension(v110) + 20) )
          v84 = *(_BYTE *)(Block::mAir + 4);
          v84 = word_281EAFB;
        v85 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
        v115 = v84;
        v85(v4, v110, &v115, v82);
        --v81;
        ++v82;
      while ( v81 );
      ++v79;
    while ( v79 != 24 );
    v86 = v103;
      v87 = 0;
      v88 = v80;
        v89 = v86;
        v90 = StructurePiece::getWorldY(v4, v86);
        if ( v90 >= *(_WORD *)(BlockSource::getDimension(v110) + 20) )
          v91 = *(_BYTE *)(Block::mAir + 4);
          v91 = word_281EAFB;
        v92 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
        v115 = v91;
        v92(v4, v110, &v115, v88);
        ++v87;
        ++v88;
        v86 = v89;
      while ( v104 != v87 );
      v80 = -v102;
      ++v86;
    while ( v86 != 24 );
    v64 = v104 + 2;
    v105 += 2;
    v65 = v102 + 1;
  while ( v102 != 4 );
  v93 = *((_QWORD *)v4 + 6);
  if ( HIDWORD(v93) != (_DWORD)v93 )
    v94 = 0;
      v95 = *(_DWORD *)(v93 + 4 * v94);
      if ( *(_DWORD *)(v95 + 16) >= *(_DWORD *)v109
        && *(_DWORD *)(v95 + 4) <= *((_DWORD *)v109 + 3)
        && *(_DWORD *)(v95 + 24) >= *((_DWORD *)v109 + 2)
        && *(_DWORD *)(v95 + 12) <= *((_DWORD *)v109 + 5)
        && *(_DWORD *)(v95 + 20) >= *((_DWORD *)v109 + 1)
        && *(_DWORD *)(v95 + 8) <= *((_DWORD *)v109 + 4) )
        (*(void (__cdecl **)(_DWORD, BlockSource *, Random *))(**(_DWORD **)(v93 + 4 * v94) + 20))(
          *(_DWORD *)(v93 + 4 * v94),
          v110,
          v98);
        v93 = *((_QWORD *)v4 + 6);
      ++v94;
    while ( v94 < (HIDWORD(v93) - (signed int)v93) >> 2 );
  return 1;
}


int __fastcall MonumentBuilding::generateLowerWall(MonumentBuilding *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  MonumentBuilding *v4; // r9@1
  const BoundingBox *v5; // r6@1
  BlockSource *v6; // r10@1
  int v7; // r5@1
  int v8; // r4@1
  int v9; // r7@1
  int v10; // r0@1
  int v11; // r1@1
  int v12; // r3@5
  void (__fastcall *v13)(MonumentBuilding *, BlockSource *, const BoundingBox *, _DWORD); // r7@13
  int v14; // r7@14
  int v15; // r4@15
  signed int v16; // r8@16
  int v17; // r5@17
  char v18; // r0@18
  void (__fastcall *v19)(MonumentBuilding *, BlockSource *, char *, int); // r5@20
  const BoundingBox *v20; // r11@23
  void (__fastcall *v21)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v22)(MonumentBuilding *, BlockSource *, const BoundingBox *, _DWORD); // r6@23
  void (__fastcall *v23)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v24)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v25)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@23
  signed int v26; // r6@23
  void (__fastcall *v27)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@23
  void (__fastcall *v28)(MonumentBuilding *, BlockSource *, const BoundingBox *, _DWORD); // r7@25
  void (__fastcall *v29)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r4@25
  void (__fastcall *v30)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r6@25
  void (__fastcall *v31)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@25
  void (__fastcall *v32)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@25
  void (__fastcall *v33)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@25
  int v34; // r4@26
  int v35; // r5@26
  int v36; // r7@26
  int v37; // r0@26
  int v38; // r1@26
  int v39; // r3@30
  const BoundingBox *v40; // r8@38
  void (__fastcall *v41)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@38
  int v42; // r7@39
  signed int v43; // r4@40
  signed int v44; // r6@41
  int v45; // r5@42
  char v46; // r0@43
  void (__fastcall *v47)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@45
  void (__fastcall *v48)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@48
  void (__fastcall *v49)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r5@48
  void (__fastcall *v50)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r5@48
  void (__fastcall *v51)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r5@48
  void (__fastcall *v52)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r5@48
  signed int v53; // r6@48
  void (__fastcall *v54)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@48
  void (__fastcall *v55)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r6@50
  void (__fastcall *v56)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r4@50
  int v57; // r4@51
  int v58; // r5@51
  int v59; // r7@51
  int result; // r0@51
  int v61; // r1@51
  int v62; // r3@55
  const BoundingBox *v63; // r8@63
  void (__fastcall *v64)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@63
  int v65; // r7@64
  signed int v66; // r4@65
  signed int v67; // r6@66
  int v68; // r5@67
  char v69; // r0@68
  void (__fastcall *v70)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@70
  void (__fastcall *v71)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r4@73
  void (__fastcall *v72)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r5@73
  void (__fastcall *v73)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r5@73
  int (__fastcall *v74)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r5@73
  char v75; // [sp+20h] [bp-A0h]@73
  char v76; // [sp+21h] [bp-9Fh]@73
  char v77; // [sp+24h] [bp-9Ch]@73
  char v78; // [sp+25h] [bp-9Bh]@73
  char v79; // [sp+28h] [bp-98h]@63
  char v80; // [sp+29h] [bp-97h]@63
  char v81; // [sp+2Ch] [bp-94h]@63
  char v82; // [sp+2Dh] [bp-93h]@63
  char v83; // [sp+30h] [bp-90h]@50
  char v84; // [sp+31h] [bp-8Fh]@50
  char v85; // [sp+34h] [bp-8Ch]@50
  char v86; // [sp+35h] [bp-8Bh]@50
  char v87; // [sp+38h] [bp-88h]@50
  char v88; // [sp+39h] [bp-87h]@50
  char v89; // [sp+3Ch] [bp-84h]@50
  char v90; // [sp+3Dh] [bp-83h]@50
  char v91; // [sp+40h] [bp-80h]@50
  char v92; // [sp+41h] [bp-7Fh]@50
  char v93; // [sp+44h] [bp-7Ch]@49
  char v94; // [sp+45h] [bp-7Bh]@49
  char v95; // [sp+48h] [bp-78h]@48
  char v96; // [sp+49h] [bp-77h]@48
  char v97; // [sp+4Ch] [bp-74h]@48
  char v98; // [sp+4Dh] [bp-73h]@48
  char v99; // [sp+50h] [bp-70h]@48
  char v100; // [sp+51h] [bp-6Fh]@48
  char v101; // [sp+54h] [bp-6Ch]@48
  char v102; // [sp+55h] [bp-6Bh]@48
  char v103; // [sp+58h] [bp-68h]@38
  char v104; // [sp+59h] [bp-67h]@38
  char v105; // [sp+5Ch] [bp-64h]@38
  char v106; // [sp+5Dh] [bp-63h]@38
  char v107; // [sp+60h] [bp-60h]@25
  char v108; // [sp+61h] [bp-5Fh]@25
  char v109; // [sp+64h] [bp-5Ch]@25
  char v110; // [sp+65h] [bp-5Bh]@25
  char v111; // [sp+68h] [bp-58h]@25
  char v112; // [sp+69h] [bp-57h]@25
  char v113; // [sp+6Ch] [bp-54h]@25
  char v114; // [sp+6Dh] [bp-53h]@25
  char v115; // [sp+70h] [bp-50h]@25
  char v116; // [sp+71h] [bp-4Fh]@25
  char v117; // [sp+74h] [bp-4Ch]@25
  char v118; // [sp+75h] [bp-4Bh]@25
  char v119; // [sp+78h] [bp-48h]@25
  char v120; // [sp+79h] [bp-47h]@25
  char v121; // [sp+7Ch] [bp-44h]@24
  char v122; // [sp+7Dh] [bp-43h]@24
  char v123; // [sp+80h] [bp-40h]@23
  char v124; // [sp+81h] [bp-3Fh]@23
  char v125; // [sp+84h] [bp-3Ch]@23
  char v126; // [sp+85h] [bp-3Bh]@23
  char v127; // [sp+88h] [bp-38h]@23
  char v128; // [sp+89h] [bp-37h]@23
  char v129; // [sp+8Ch] [bp-34h]@23
  char v130; // [sp+8Dh] [bp-33h]@23
  char v131; // [sp+90h] [bp-30h]@13
  char v132; // [sp+91h] [bp-2Fh]@13
  char v133; // [sp+94h] [bp-2Ch]@13
  char v134; // [sp+95h] [bp-2Bh]@13
  char v135; // [sp+98h] [bp-28h]@20
  char v136; // [sp+99h] [bp-27h]@20

  v4 = this;
  v5 = a4;
  v6 = a2;
  v7 = (*(int (**)(void))(*(_DWORD *)this + 28))();
  v8 = (*(int (__fastcall **)(MonumentBuilding *, _DWORD, signed int))(*(_DWORD *)v4 + 32))(v4, 0, 21);
  v9 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 6, 58);
  v10 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 6, 58);
  v11 = v10;
  if ( v8 > v10 )
    v11 = v8;
  if ( v8 < v10 )
    v10 = v8;
  v12 = v9;
  if ( v7 < v9 )
    v12 = v7;
  if ( *((_DWORD *)v5 + 3) >= v12 )
  {
    if ( v7 > v9 )
      v9 = v7;
    if ( *(_DWORD *)v5 <= v9 && *((_DWORD *)v5 + 5) >= v10 && *((_DWORD *)v5 + 2) <= v11 )
    {
      v13 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
      v133 = byte_281EAF1;
      v131 = byte_281EAF1;
      v134 = byte_281EAF2;
      v132 = byte_281EAF2;
      v13(v4, v6, v5, 0);
      if ( *((_BYTE *)v4 + 36) )
      {
        v14 = 1;
        do
        {
          v15 = 0;
          do
          {
            v16 = 21;
            do
            {
              v17 = StructurePiece::getWorldY(v4, v14);
              if ( v17 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
                v18 = *(_BYTE *)(Block::mAir + 4);
              else
                v18 = word_281EAFB;
              v19 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
              v135 = v18;
              v136 = 0;
              v19(v4, v6, &v135, v15);
              ++v16;
            }
            while ( v16 != 58 );
            ++v15;
          }
          while ( v15 != 7 );
          ++v14;
        }
        while ( v14 != 8 );
      }
      v20 = v5;
      v21 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v129 = byte_281EAF1;
      v127 = byte_281EAF1;
      v130 = byte_281EAF2;
      v128 = byte_281EAF2;
      v21(v4, v6, v5, 4);
      v22 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
      v125 = byte_281EAF3;
      v123 = byte_281EAF3;
      v126 = byte_281EAF4;
      v124 = byte_281EAF4;
      v22(v4, v6, v20, 0);
      v23 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v23(v4, v6, v20, 1);
      v24 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v24(v4, v6, v20, 2);
      v25 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v25(v4, v6, v20, 3);
      v26 = 23;
      v27 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      do
        v121 = byte_281EAF7;
        v122 = byte_281EAF8;
        v27(v4, v6, &v121, 5);
        v26 += 3;
        v27 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      while ( v26 < 53 );
      v119 = byte_281EAF7;
      v120 = byte_281EAF8;
      v27(v4, v6, &v119, 5);
      v28 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
      v117 = byte_281EAF3;
      v115 = byte_281EAF3;
      v118 = byte_281EAF4;
      v116 = byte_281EAF4;
      v28(v4, v6, v20, 0);
      v29 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v29(v4, v6, v20, 1);
      v30 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v30(v4, v6, v20, 2);
      v5 = v20;
      v31 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v31(v4, v6, v20, 3);
      v32 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v113 = byte_281EAF1;
      v111 = byte_281EAF1;
      v114 = byte_281EAF2;
      v112 = byte_281EAF2;
      v32(v4, v6, v20, 4);
      v33 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v109 = byte_281EAF1;
      v107 = byte_281EAF1;
      v110 = byte_281EAF2;
      v108 = byte_281EAF2;
      v33(v4, v6, v20, 5);
    }
  }
  v34 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 51, 21);
  v35 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 51, 21);
  v36 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 58, 58);
  v37 = (*(int (__fastcall **)(_DWORD, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 58, 58);
  v38 = v37;
  if ( v35 > v37 )
    v38 = v35;
  if ( v35 < v37 )
    v37 = v35;
  v39 = v36;
  if ( v34 < v36 )
    v39 = v34;
  if ( *((_DWORD *)v5 + 3) >= v39 )
    if ( v34 > v36 )
      v36 = v34;
    if ( *(_DWORD *)v5 <= v36 && *((_DWORD *)v5 + 5) >= v37 && *((_DWORD *)v5 + 2) <= v38 )
      v40 = v5;
      v41 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v105 = byte_281EAF1;
      v103 = byte_281EAF1;
      v106 = byte_281EAF2;
      v104 = byte_281EAF2;
      v41(v4, v6, v5, 51);
        v42 = 1;
          v43 = 51;
            v44 = 21;
              v45 = StructurePiece::getWorldY(v4, v42);
              if ( v45 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
                v46 = *(_BYTE *)(Block::mAir + 4);
                v46 = word_281EAFB;
              v47 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
              v135 = v46;
              v47(v4, v6, &v135, v43);
              ++v44;
            while ( v44 != 58 );
            ++v43;
          while ( v43 != 58 );
          ++v42;
        while ( v42 != 8 );
      v48 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v101 = byte_281EAF1;
      v99 = byte_281EAF1;
      v102 = byte_281EAF2;
      v100 = byte_281EAF2;
      v48(v4, v6, v40, 51);
      v49 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v97 = byte_281EAF3;
      v95 = byte_281EAF3;
      v98 = byte_281EAF4;
      v96 = byte_281EAF4;
      v49(v4, v6, v40, 57);
      v50 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v50(v4, v6, v40, 56);
      v51 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v51(v4, v6, v40, 55);
      v52 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v52(v4, v6, v40, 54);
      v53 = 23;
      v54 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v93 = byte_281EAF7;
        v94 = byte_281EAF8;
        v54(v4, v6, &v93, 52);
        v53 += 3;
        v54 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      while ( v53 < 53 );
      v91 = byte_281EAF7;
      v92 = byte_281EAF8;
      v54(v4, v6, &v91, 52);
      v55 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v89 = byte_281EAF1;
      v87 = byte_281EAF1;
      v90 = byte_281EAF2;
      v88 = byte_281EAF2;
      v55(v4, v6, v40, 51);
      v5 = v40;
      v56 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v85 = byte_281EAF1;
      v83 = byte_281EAF1;
      v86 = byte_281EAF2;
      v84 = byte_281EAF2;
      v56(v4, v6, v40, 52);
  v57 = (*(int (__fastcall **)(MonumentBuilding *, _DWORD, signed int))(*(_DWORD *)v4 + 28))(v4, 0, 51);
  v58 = (*(int (__fastcall **)(MonumentBuilding *, _DWORD, signed int))(*(_DWORD *)v4 + 32))(v4, 0, 51);
  v59 = (*(int (__fastcall **)(_DWORD, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 57, 57);
  result = (*(int (__fastcall **)(_DWORD, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 57, 57);
  v61 = result;
  if ( v58 > result )
    v61 = v58;
  if ( v58 < result )
    result = v58;
  v62 = v59;
  if ( v57 < v59 )
    v62 = v57;
  if ( *((_DWORD *)v5 + 3) >= v62 )
    if ( v57 > v59 )
      v59 = v57;
    if ( *(_DWORD *)v5 <= v59 && *((_DWORD *)v5 + 5) >= result )
      result = *((_DWORD *)v5 + 2);
      if ( result <= v61 )
        v63 = v5;
        v64 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v81 = byte_281EAF1;
        v79 = byte_281EAF1;
        v82 = byte_281EAF2;
        v80 = byte_281EAF2;
        v64(v4, v6, v5, 7);
        if ( *((_BYTE *)v4 + 36) )
          v65 = 1;
            v66 = 7;
              v67 = 51;
              do
              {
                v68 = StructurePiece::getWorldY(v4, v65);
                if ( v68 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
                  v69 = *(_BYTE *)(Block::mAir + 4);
                else
                  v69 = word_281EAFB;
                v70 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
                v135 = v69;
                v136 = 0;
                v70(v4, v6, &v135, v66);
                ++v67;
              }
              while ( v67 != 58 );
              ++v66;
            while ( v66 != 51 );
            ++v65;
          while ( v65 != 11 );
        v71 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v77 = byte_281EAF3;
        v75 = byte_281EAF3;
        v78 = byte_281EAF4;
        v76 = byte_281EAF4;
        v71(v4, v6, v63, 1);
        v72 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v72(v4, v6, v63, 2);
        v73 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v73(v4, v6, v63, 3);
        v74 = *(int (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        result = v74(v4, v6, v63, 4);
  return result;
}


int __fastcall MonumentBuilding::generateWing(MonumentBuilding *this, int a2, int a3, BlockSource *a4, Random *a5, const BoundingBox *a6)
{
  MonumentBuilding *v6; // r4@1
  int v7; // r10@1
  int v8; // r11@1
  int v9; // r6@1
  int v10; // r7@1
  int v11; // r5@1
  int result; // r0@3
  int v13; // r1@3
  void (__fastcall *v14)(MonumentBuilding *, BlockSource *, const BoundingBox *); // r7@13
  StructurePiece *v15; // r9@13
  int v16; // r5@13
  BlockSource *v17; // r10@13
  int v18; // r7@14
  int v19; // r4@15
  int v20; // r8@16
  int v21; // r5@17
  char v22; // r0@18
  void (__fastcall *v23)(StructurePiece *, BlockSource *, char *, int); // r5@20
  bool v24; // nf@21
  unsigned __int8 v25; // vf@21
  StructurePiece *v26; // r8@23
  int v27; // r6@23
  void (__fastcall *v28)(StructurePiece *, BlockSource *, const BoundingBox *); // r12@23
  void (__fastcall *v29)(StructurePiece *, BlockSource *, const BoundingBox *); // r12@24
  void (__fastcall *v30)(StructurePiece *, BlockSource *, const BoundingBox *); // r12@24
  int v31; // r9@24
  void (__fastcall *v32)(StructurePiece *, BlockSource *, const BoundingBox *); // r12@24
  void (__fastcall *v33)(StructurePiece *, BlockSource *, const BoundingBox *, int); // r12@24
  int v34; // r6@24
  void (__fastcall *v35)(StructurePiece *, BlockSource *, const BoundingBox *, int); // r12@24
  void (__fastcall *v36)(StructurePiece *, BlockSource *, const BoundingBox *); // r7@25
  void (__fastcall *v37)(StructurePiece *, BlockSource *, const BoundingBox *, int); // r7@25
  void (__fastcall *v38)(StructurePiece *, BlockSource *, const BoundingBox *); // r7@25
  void (__fastcall *v39)(StructurePiece *, BlockSource *, char *, int); // r7@25
  void (__fastcall *v40)(StructurePiece *, BlockSource *, char *, int); // r7@25
  void (__fastcall *v41)(StructurePiece *, BlockSource *, char *, int); // r7@25
  void (__fastcall *v42)(StructurePiece *, BlockSource *, char *, int); // r6@25
  signed int v43; // r0@25
  int v44; // r7@27
  void (__fastcall *v45)(StructurePiece *, BlockSource *, char *, int); // r6@27
  void (__fastcall *v46)(StructurePiece *, BlockSource *, char *, int); // r6@27
  void (__fastcall *v47)(StructurePiece *, BlockSource *, char *, int); // r6@27
  void (__fastcall *v48)(StructurePiece *, BlockSource *, char *, int); // r6@27
  void (__fastcall *v49)(StructurePiece *, BlockSource *, char *, int); // r6@27
  void (__fastcall *v50)(StructurePiece *, BlockSource *, char *, int); // r6@27
  signed int v51; // r0@27
  int v52; // r9@29
  void (__fastcall *v53)(StructurePiece *, BlockSource *, char *, int); // r6@29
  void (__fastcall *v54)(StructurePiece *, BlockSource *, char *, int); // r6@29
  void (__fastcall *v55)(StructurePiece *, BlockSource *, char *, int); // r6@29
  void (__fastcall *v56)(StructurePiece *, BlockSource *, char *, int); // r6@29
  StructurePiece *v57; // r1@29
  void (__fastcall *v58)(StructurePiece *, BlockSource *, char *, int); // r7@29
  char *v59; // r9@30
  StructurePiece *v60; // r4@30
  const BoundingBox *v61; // r8@30
  void (__fastcall *v62)(StructurePiece *, BlockSource *, char *, int); // r12@30
  void (__fastcall *v63)(StructurePiece *, BlockSource *, char *, int); // r12@30
  int v64; // r3@30
  void (__fastcall *v65)(StructurePiece *, BlockSource *, char *, int); // r12@30
  void (__fastcall *v66)(StructurePiece *, BlockSource *, char *, int); // r12@31
  void (__fastcall *v67)(StructurePiece *, BlockSource *, char *, int); // r12@31
  void (__fastcall *v68)(StructurePiece *, BlockSource *, char *, int); // r7@32
  void (__fastcall *v69)(StructurePiece *, BlockSource *, const BoundingBox *, int); // r12@32
  int (__fastcall *v70)(StructurePiece *, BlockSource *, const BoundingBox *); // r5@32
  int v71; // [sp+28h] [bp-C8h]@1
  int v72; // [sp+2Ch] [bp-C4h]@13
  BlockSource *v73; // [sp+30h] [bp-C0h]@1
  int v74; // [sp+34h] [bp-BCh]@29
  int v75; // [sp+3Ch] [bp-B4h]@25
  int v76; // [sp+40h] [bp-B0h]@13
  int v77; // [sp+40h] [bp-B0h]@23
  char v78; // [sp+44h] [bp-ACh]@32
  char v79; // [sp+45h] [bp-ABh]@32
  char v80; // [sp+48h] [bp-A8h]@32
  char v81; // [sp+49h] [bp-A7h]@32
  char v82; // [sp+4Ch] [bp-A4h]@32
  char v83; // [sp+4Dh] [bp-A3h]@32
  char v84; // [sp+50h] [bp-A0h]@32
  char v85; // [sp+51h] [bp-9Fh]@32
  char v86; // [sp+54h] [bp-9Ch]@32
  char v87; // [sp+55h] [bp-9Bh]@32
  char v88; // [sp+58h] [bp-98h]@29
  char v89; // [sp+59h] [bp-97h]@29
  char v90; // [sp+5Ch] [bp-94h]@27
  char v91; // [sp+5Dh] [bp-93h]@27
  char v92; // [sp+60h] [bp-90h]@25
  char v93; // [sp+61h] [bp-8Fh]@25
  char v94; // [sp+64h] [bp-8Ch]@25
  char v95; // [sp+65h] [bp-8Bh]@25
  char v96; // [sp+68h] [bp-88h]@25
  char v97; // [sp+69h] [bp-87h]@25
  char v98; // [sp+6Ch] [bp-84h]@25
  char v99; // [sp+6Dh] [bp-83h]@25
  char v100; // [sp+70h] [bp-80h]@25
  char v101; // [sp+71h] [bp-7Fh]@25
  char v102; // [sp+74h] [bp-7Ch]@25
  char v103; // [sp+75h] [bp-7Bh]@25
  char v104; // [sp+78h] [bp-78h]@25
  char v105; // [sp+79h] [bp-77h]@25
  char v106; // [sp+7Ch] [bp-74h]@25
  char v107; // [sp+7Dh] [bp-73h]@25
  char v108; // [sp+80h] [bp-70h]@25
  char v109; // [sp+81h] [bp-6Fh]@25
  char v110; // [sp+84h] [bp-6Ch]@25
  char v111; // [sp+85h] [bp-6Bh]@25
  char v112; // [sp+88h] [bp-68h]@25
  char v113; // [sp+89h] [bp-67h]@25
  char v114; // [sp+8Ch] [bp-64h]@25
  char v115; // [sp+8Dh] [bp-63h]@25
  char v116; // [sp+90h] [bp-60h]@24
  char v117; // [sp+91h] [bp-5Fh]@24
  char v118; // [sp+94h] [bp-5Ch]@24
  char v119; // [sp+95h] [bp-5Bh]@24
  char v120; // [sp+98h] [bp-58h]@24
  char v121; // [sp+99h] [bp-57h]@24
  char v122; // [sp+9Ch] [bp-54h]@24
  char v123; // [sp+9Dh] [bp-53h]@24
  char v124; // [sp+A0h] [bp-50h]@24
  char v125; // [sp+A1h] [bp-4Fh]@24
  char v126; // [sp+A4h] [bp-4Ch]@24
  char v127; // [sp+A5h] [bp-4Bh]@24
  char v128; // [sp+A8h] [bp-48h]@24
  char v129; // [sp+A9h] [bp-47h]@24
  char v130; // [sp+ACh] [bp-44h]@24
  char v131; // [sp+ADh] [bp-43h]@24
  char v132; // [sp+B0h] [bp-40h]@24
  char v133; // [sp+B1h] [bp-3Fh]@24
  char v134; // [sp+B4h] [bp-3Ch]@24
  char v135; // [sp+B5h] [bp-3Bh]@24
  char v136; // [sp+B8h] [bp-38h]@24
  char v137; // [sp+B9h] [bp-37h]@24
  char v138; // [sp+BCh] [bp-34h]@24
  char v139; // [sp+BDh] [bp-33h]@24
  char v140; // [sp+C0h] [bp-30h]@13
  char v141; // [sp+C1h] [bp-2Fh]@13
  char v142; // [sp+C4h] [bp-2Ch]@13
  char v143; // [sp+C5h] [bp-2Bh]@13
  char v144; // [sp+C8h] [bp-28h]@20
  char v145; // [sp+C9h] [bp-27h]@20

  v6 = this;
  v73 = a4;
  v7 = a3;
  v71 = a2;
  v8 = (*(int (**)(void))(*(_DWORD *)this + 28))();
  v9 = (*(int (__fastcall **)(MonumentBuilding *, int, _DWORD))(*(_DWORD *)v6 + 32))(v6, v7, 0);
  v10 = (*(int (__fastcall **)(MonumentBuilding *, int, signed int))(*(_DWORD *)v6 + 28))(v6, v7 + 23, 20);
  v11 = v10;
  if ( v8 < v10 )
    v11 = v8;
  result = (*(int (__fastcall **)(MonumentBuilding *, int, signed int))(*(_DWORD *)v6 + 32))(v6, v7 + 23, 20);
  v13 = result;
  if ( v9 > result )
    v13 = v9;
  if ( v9 < result )
    result = v9;
  if ( *((_DWORD *)a6 + 3) >= v11 )
  {
    if ( v8 > v10 )
      v10 = v8;
    if ( *(_DWORD *)a6 <= v10 && *((_DWORD *)a6 + 5) >= result )
    {
      result = *((_DWORD *)a6 + 2);
      if ( result <= v13 )
      {
        v72 = v7;
        v14 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *))(*(_DWORD *)v6 + 40);
        v15 = v6;
        v142 = byte_281EAF1;
        v140 = byte_281EAF1;
        v143 = byte_281EAF2;
        v141 = byte_281EAF2;
        v76 = v7 + 24;
        v16 = v7;
        v17 = v73;
        v14(v6, v73, a6);
        if ( *((_BYTE *)v6 + 36) )
        {
          v18 = 1;
          do
          {
            v19 = v16;
            do
            {
              v20 = 0;
              do
              {
                v21 = StructurePiece::getWorldY(v15, v18);
                if ( v21 >= *(_WORD *)(BlockSource::getDimension(v73) + 20) )
                  v22 = *(_BYTE *)(Block::mAir + 4);
                else
                  v22 = word_281EAFB;
                v23 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v15 + 36);
                v144 = v22;
                v145 = 0;
                v23(v15, v73, &v144, v19);
                ++v20;
              }
              while ( v20 != 21 );
              v25 = __OFSUB__(v19, v76);
              v24 = v19++ - v76 < 0;
            }
            while ( v24 ^ v25 );
            v16 = v72;
            ++v18;
          }
          while ( v18 != 11 );
        }
        v26 = v15;
        v27 = 0;
        v28 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *))(*(_DWORD *)v15 + 40);
        v77 = 0;
        do
          v138 = byte_281EAF3;
          v136 = byte_281EAF3;
          v139 = byte_281EAF4;
          v137 = byte_281EAF4;
          v28(v26, v17, a6);
          v29 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *))(*(_DWORD *)v26 + 40);
          v134 = byte_281EAF3;
          v132 = byte_281EAF3;
          v135 = byte_281EAF4;
          v133 = byte_281EAF4;
          v29(v26, v17, a6);
          v30 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *))(*(_DWORD *)v26 + 40);
          v130 = byte_281EAF3;
          v128 = byte_281EAF3;
          v131 = byte_281EAF4;
          v129 = byte_281EAF4;
          v30(v26, v73, a6);
          v31 = v27 + 1;
          v32 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *))(*(_DWORD *)v26 + 40);
          v126 = byte_281EAF3;
          v124 = byte_281EAF3;
          v127 = byte_281EAF4;
          v125 = byte_281EAF4;
          v32(v26, v73, a6);
          v33 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v26 + 40);
          v122 = byte_281EAF3;
          v120 = byte_281EAF3;
          v123 = byte_281EAF4;
          v121 = byte_281EAF4;
          v34 = v16 + v27;
          v33(v26, v73, a6, v34 + 1);
          v35 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v26 + 40);
          v118 = byte_281EAF3;
          v116 = byte_281EAF3;
          v119 = byte_281EAF4;
          v117 = byte_281EAF4;
          v17 = v73;
          v35(v26, v73, a6, v34 + 8);
          v27 = v31;
          v28 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *))(*(_DWORD *)v26 + 40);
          --v77;
        while ( v31 != 4 );
        v114 = byte_281EAF1;
        v112 = byte_281EAF1;
        v115 = byte_281EAF2;
        v113 = byte_281EAF2;
        ((void (__fastcall *)(StructurePiece *, BlockSource *, const BoundingBox *, int))v28)(v26, v73, a6, v16 + 4);
        v36 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *))(*(_DWORD *)v26 + 40);
        v110 = byte_281EAF1;
        v108 = byte_281EAF1;
        v111 = byte_281EAF2;
        v109 = byte_281EAF2;
        v36(v26, v73, a6);
        v37 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v26 + 40);
        v106 = byte_281EAF1;
        v104 = byte_281EAF1;
        v107 = byte_281EAF2;
        v105 = byte_281EAF2;
        v37(v26, v73, a6, v16 + 18);
        v38 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *))(*(_DWORD *)v26 + 40);
        v102 = byte_281EAF1;
        v100 = byte_281EAF1;
        v103 = byte_281EAF2;
        v101 = byte_281EAF2;
        v75 = v16 + 11;
        v38(v26, v73, a6);
        v39 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v26 + 36);
        v98 = byte_281EAF7;
        v99 = byte_281EAF8;
        v39(v26, v73, &v98, v16 + 12);
        v40 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v26 + 36);
        v96 = byte_281EAF7;
        v97 = byte_281EAF8;
        v40(v26, v73, &v96, v16 + 12);
        v41 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v26 + 36);
        v94 = byte_281EAF7;
        v95 = byte_281EAF8;
        v41(v26, v73, &v94, v16 + 12);
        v42 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v26 + 36);
        v92 = byte_281EAF7;
        v93 = byte_281EAF8;
        v43 = 5;
        if ( v71 )
          v43 = 19;
        v44 = v43 + v16;
        v42(v26, v73, &v92, v43 + v16);
        v45 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v26 + 36);
        v45(v26, v73, &v92, v44);
        v46 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v26 + 36);
        v46(v26, v73, &v92, v44);
        v47 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v26 + 36);
        v47(v26, v73, &v92, v44);
        v48 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v26 + 36);
        v48(v26, v73, &v92, v44);
        v49 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v26 + 36);
        v49(v26, v73, &v92, v44);
        v50 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v26 + 36);
        v90 = byte_281EAF7;
        v91 = byte_281EAF8;
        v51 = 19;
          v51 = 5;
        v52 = v51 + v16;
        v74 = v51 + v16;
        v50(v26, v73, &v90, v51 + v16);
        v53 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v26 + 36);
        v53(v26, v73, &v90, v52);
        v54 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v26 + 36);
        v54(v26, v73, &v90, v52);
        v55 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v26 + 36);
        v55(v26, v73, &v90, v52);
        v56 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v26 + 36);
        v56(v26, v73, &v90, v52);
        v57 = v26;
        v58 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v26 + 36);
        v88 = byte_281EAF7;
        v89 = byte_281EAF8;
          v59 = &v88;
          v60 = v26;
          v61 = a6;
          v58(v57, v73, &v88, v16 + 7);
          v62 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v60 + 36);
          v88 = byte_281EAF7;
          v89 = byte_281EAF8;
          v62(v60, v73, &v88, v16 + 10);
          v63 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v60 + 36);
          v63(v60, v73, &v88, v16 + 13);
          v64 = v16 + 16;
          v65 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v60 + 36);
        else
          v58(v57, v73, &v88, v16 + 17);
          v66 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v60 + 36);
          v66(v60, v73, &v88, v16 + 14);
          v67 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v60 + 36);
          v67(v60, v73, &v88, v75);
          v64 = v16 + 8;
        v65(v60, v73, v59, v64);
        v68 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v60 + 36);
        v86 = byte_281EAF7;
        v87 = byte_281EAF8;
        v68(v60, v73, &v86, v74);
        v69 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v60 + 40);
        v84 = byte_281EAF1;
        v82 = byte_281EAF1;
        v85 = byte_281EAF2;
        v83 = byte_281EAF2;
        v69(v60, v73, v61, v75);
        v70 = *(int (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *))(*(_DWORD *)v60 + 40);
        v80 = byte_281EAF1;
        v78 = byte_281EAF1;
        v81 = byte_281EAF2;
        v79 = byte_281EAF2;
        result = v70(v60, v73, v61);
      }
    }
  }
  return result;
}


void __fastcall MonumentBuilding::~MonumentBuilding(MonumentBuilding *this)
{
  MonumentBuilding::~MonumentBuilding(this);
}


void __fastcall MonumentBuilding::postProcessMobsAt(MonumentBuilding *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  Random *v5; // r10@1
  BlockSource *v10; // r8@1
  int v14; // r6@1
  _QWORD *v15; // r0@1
  _QWORD *v16; // r7@1
  int v17; // r1@1 OVERLAPPED
  int v18; // r2@1 OVERLAPPED
  signed int v19; // r0@1
  void *v20; // r0@3
  signed int v21; // r7@4
  signed int v22; // r6@7
  unsigned int *v23; // r2@8
  signed int v24; // r1@10
  unsigned int *v25; // r2@12
  signed int v26; // r1@14
  unsigned int *v27; // r2@16
  signed int v28; // r1@18
  unsigned int *v29; // r2@20
  signed int v30; // r1@22
  Level *v37; // r0@46
  Spawner *v38; // r11@46
  void *v39; // r0@46
  void *v40; // r0@47
  void *v41; // r0@48
  void *v42; // r0@49
  int v43; // r0@52
  int i; // r7@52
  int v45; // [sp+0h] [bp-48h]@0
  int v46; // [sp+4h] [bp-44h]@0
  int v47; // [sp+8h] [bp-40h]@0
  void *ptr; // [sp+18h] [bp-30h]@6
  int v49; // [sp+20h] [bp-28h]@20
  int v50; // [sp+24h] [bp-24h]@16
  int v51; // [sp+28h] [bp-20h]@12
  int v52; // [sp+2Ch] [bp-1Ch]@8
  int v53; // [sp+30h] [bp-18h]@40
  int v54; // [sp+34h] [bp-14h]@44
  int v55; // [sp+38h] [bp-10h]@42
  float v56; // [sp+3Ch] [bp-Ch]@40
  float v57; // [sp+40h] [bp-8h]@40
  int v58; // [sp+44h] [bp-4h]@40
  int v59; // [sp+48h] [bp+0h]@1

  _R5 = a4;
  v5 = a3;
  __asm { VLDR            S0, [R5] }
  v10 = a2;
  __asm
  {
    VLDR            S2, [R5,#4]
    VLDR            S4, [R5,#8]
  }
  _R4 = this;
    VLDR            S6, [R5,#0xC]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VMOV            R1, S0
    VLDR            S0, [R5,#0x14]
    VMOV            R2, S2
    VLDR            S2, [R5,#0x10]
    VMOV            R3, S4
    VCVT.F32.S32    S4, S6
    VSTR            S4, [SP,#0x7C+var_7C]
    VSTR            S2, [SP,#0x7C+var_78]
    VSTR            S0, [SP,#0x7C+var_74]
  AABB::AABB(COERCE_FLOAT(&v59), _R1, _R2, v45, v46, v47);
  v14 = 0;
  v15 = (_QWORD *)BlockSource::fetchEntities((int)v10, 2865, (int)&v59, 0);
  v16 = v15;
  *(_QWORD *)&v17 = *v15;
  v19 = v18 - v17;
  if ( 0 != (v18 - v17) >> 2 )
    if ( (unsigned int)(v19 >> 2) >= 0x40000000 )
      sub_21E57F4();
    v20 = j_operator new(v19);
    *(_QWORD *)&v17 = *v16;
    v14 = (int)v20;
  v21 = v18 - v17;
  if ( v18 != v17 )
    j___aeabi_memmove4(v14, v17);
  ptr = (void *)v14;
  if ( v21 <= 15 )
    v22 = v21 >> 2;
    __asm { VLDR            D8, =2.32830644e-10 }
    do
    {
      v56 = 0.0;
      v57 = 0.0;
      v58 = 0;
      __asm
      {
        VLDR            S0, [R4,#4]
        VCVT.F32.S32    S18, S0
      }
      _R7 = *((_DWORD *)_R4 + 4);
      _R0 = j_Random::_genRandInt32(v5);
        VMOV            S0, R0
        VMOV            S2, R7
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D8
        VCVT.F32.S32    S2, S2
        VCVT.F32.F64    S0, D0
        VSUB.F32        S2, S2, S18
        VMUL.F32        S0, S0, S2
        VADD.F32        S0, S0, S18
        VSTR            S0, [SP,#0x7C+var_40]
        VLDR            S0, [R4,#8]
      _R7 = *((_DWORD *)_R4 + 5);
        VSTR            S0, [SP,#0x7C+var_3C]
        VLDR            S0, [R4,#0xC]
      _R7 = *((_DWORD *)_R4 + 6);
        VSTR            S0, [SP,#0x7C+var_38]
      BlockPos::BlockPos((int)&v53, (int)&v56);
      if ( v53 >= *(_DWORD *)_R5
        && v53 <= *((_DWORD *)_R5 + 3)
        && v55 >= *((_DWORD *)_R5 + 2)
        && v55 <= *((_DWORD *)_R5 + 5)
        && v54 >= *((_DWORD *)_R5 + 1)
        && v54 <= *((_DWORD *)_R5 + 4) )
        v37 = (Level *)BlockSource::getLevel(v10);
        v38 = (Spawner *)Level::getSpawner(v37);
        EntityTypeToString((void **)&v49, 0xB31u, 1);
        EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v50, &v49);
        Spawner::spawnMob(v38, v10, (const EntityDefinitionIdentifier *)&v50, 0, (const Vec3 *)&v56, 0, 1, 0);
        v39 = (void *)(v52 - 12);
        if ( (int *)(v52 - 12) != &dword_28898C0 )
        {
          v23 = (unsigned int *)(v52 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
          }
          else
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v39);
        }
        v40 = (void *)(v51 - 12);
        if ( (int *)(v51 - 12) != &dword_28898C0 )
          v25 = (unsigned int *)(v51 - 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j__ZdlPv_9(v40);
        v41 = (void *)(v50 - 12);
        if ( (int *)(v50 - 12) != &dword_28898C0 )
          v27 = (unsigned int *)(v50 - 4);
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
            v28 = (*v27)--;
          if ( v28 <= 0 )
            j_j_j_j__ZdlPv_9(v41);
        v42 = (void *)(v49 - 12);
        if ( (int *)(v49 - 12) != &dword_28898C0 )
          v29 = (unsigned int *)(v49 - 4);
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
            v30 = (*v29)--;
          if ( v30 <= 0 )
            j_j_j_j__ZdlPv_9(v42);
        ++v22;
    }
    while ( v22 < 4 );
  v43 = *((_QWORD *)_R4 + 6) >> 32;
  for ( i = *((_QWORD *)_R4 + 6); i != v43; i += 4 )
    (*(void (**)(void))(**(_DWORD **)i + 24))();
    v43 = *((_DWORD *)_R4 + 13);
  if ( ptr )
    j_operator delete(ptr);
}


int __fastcall MonumentBuilding::generateMiddleWall(MonumentBuilding *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  MonumentBuilding *v4; // r8@1
  const BoundingBox *v5; // r11@1
  BlockSource *v6; // r9@1
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r5@1
  int v10; // r0@1
  int v11; // r1@1
  int v12; // r3@5
  void (__fastcall *v13)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@13
  int v14; // r7@14
  signed int v15; // r5@15
  signed int v16; // r10@16
  int v17; // r4@17
  char v18; // r0@18
  void (__fastcall *v19)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@20
  void (__fastcall *v20)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v21)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r5@23
  void (__fastcall *v22)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r5@23
  void (__fastcall *v23)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v24)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@23
  void (__fastcall *v25)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@23
  void (__fastcall *v26)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@23
  void (__fastcall *v27)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@23
  void (__fastcall *v28)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@23
  void (__fastcall *v29)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@23
  void (__fastcall *v30)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@23
  void (__fastcall *v31)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@23
  void (__fastcall *v32)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@23
  void (__fastcall *v33)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@23
  int v34; // r4@24
  int v35; // r7@24
  int v36; // r5@24
  int v37; // r0@24
  int v38; // r1@24
  int v39; // r3@28
  void (__fastcall *v40)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@36
  int v41; // r7@37
  signed int v42; // r5@38
  signed int v43; // r10@39
  int v44; // r4@40
  char v45; // r0@41
  void (__fastcall *v46)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@43
  void (__fastcall *v47)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@46
  void (__fastcall *v48)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r5@46
  void (__fastcall *v49)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r5@46
  void (__fastcall *v50)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r5@46
  void (__fastcall *v51)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r5@46
  void (__fastcall *v52)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@46
  void (__fastcall *v53)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@46
  void (__fastcall *v54)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@46
  void (__fastcall *v55)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@46
  void (__fastcall *v56)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@46
  void (__fastcall *v57)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@46
  void (__fastcall *v58)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@46
  void (__fastcall *v59)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@46
  void (__fastcall *v60)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@46
  int v61; // r4@47
  int v62; // r7@47
  int v63; // r5@47
  int result; // r0@47
  int v65; // r1@47
  int v66; // r3@51
  void (__fastcall *v67)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@59
  int v68; // r7@60
  signed int v69; // r5@61
  signed int v70; // r10@62
  int v71; // r4@63
  char v72; // r0@64
  void (__fastcall *v73)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@66
  signed int v74; // r10@69
  void (__fastcall *v75)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@70
  void (__fastcall *v76)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@70
  void (__fastcall *v77)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@73
  void (__fastcall *v78)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@73
  void (__fastcall *v79)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@73
  void (__fastcall *v80)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@73
  void (__fastcall *v81)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@73
  void (__fastcall *v82)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@73
  void (__fastcall *v83)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@73
  void (__fastcall *v84)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@73
  void (__fastcall *v85)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@73
  void (__fastcall *v86)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@73
  void (__fastcall *v87)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r4@75
  void (__fastcall *v88)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r4@75
  void (__fastcall *v89)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r4@75
  void (__fastcall *v90)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r4@75
  int (__fastcall *v91)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@75
  char v92; // [sp+28h] [bp-B0h]@75
  char v93; // [sp+29h] [bp-AFh]@75
  char v94; // [sp+2Ch] [bp-ACh]@75
  char v95; // [sp+2Dh] [bp-ABh]@75
  char v96; // [sp+30h] [bp-A8h]@75
  char v97; // [sp+31h] [bp-A7h]@75
  char v98; // [sp+34h] [bp-A4h]@75
  char v99; // [sp+35h] [bp-A3h]@75
  char v100; // [sp+38h] [bp-A0h]@75
  char v101; // [sp+39h] [bp-9Fh]@75
  char v102; // [sp+3Ch] [bp-9Ch]@75
  char v103; // [sp+3Dh] [bp-9Bh]@75
  char v104; // [sp+40h] [bp-98h]@73
  char v105; // [sp+41h] [bp-97h]@73
  char v106; // [sp+44h] [bp-94h]@73
  char v107; // [sp+45h] [bp-93h]@73
  char v108; // [sp+48h] [bp-90h]@73
  char v109; // [sp+49h] [bp-8Fh]@73
  char v110; // [sp+4Ch] [bp-8Ch]@73
  char v111; // [sp+4Dh] [bp-8Bh]@73
  char v112; // [sp+50h] [bp-88h]@73
  char v113; // [sp+51h] [bp-87h]@73
  char v114; // [sp+54h] [bp-84h]@73
  char v115; // [sp+55h] [bp-83h]@73
  char v116; // [sp+58h] [bp-80h]@73
  char v117; // [sp+59h] [bp-7Fh]@73
  char v118; // [sp+5Ch] [bp-7Ch]@73
  char v119; // [sp+5Dh] [bp-7Bh]@73
  char v120; // [sp+60h] [bp-78h]@73
  char v121; // [sp+61h] [bp-77h]@73
  char v122; // [sp+64h] [bp-74h]@73
  char v123; // [sp+65h] [bp-73h]@73
  char v124; // [sp+68h] [bp-70h]@70
  char v125; // [sp+69h] [bp-6Fh]@70
  char v126; // [sp+6Ch] [bp-6Ch]@70
  char v127; // [sp+6Dh] [bp-6Bh]@70
  char v128; // [sp+70h] [bp-68h]@59
  char v129; // [sp+71h] [bp-67h]@59
  char v130; // [sp+74h] [bp-64h]@59
  char v131; // [sp+75h] [bp-63h]@59
  char v132; // [sp+78h] [bp-60h]@46
  char v133; // [sp+79h] [bp-5Fh]@46
  char v134; // [sp+7Ch] [bp-5Ch]@46
  char v135; // [sp+7Dh] [bp-5Bh]@46
  char v136; // [sp+80h] [bp-58h]@46
  char v137; // [sp+81h] [bp-57h]@46
  char v138; // [sp+84h] [bp-54h]@46
  char v139; // [sp+85h] [bp-53h]@46
  char v140; // [sp+88h] [bp-50h]@46
  char v141; // [sp+89h] [bp-4Fh]@46
  char v142; // [sp+8Ch] [bp-4Ch]@36
  char v143; // [sp+8Dh] [bp-4Bh]@36
  char v144; // [sp+90h] [bp-48h]@36
  char v145; // [sp+91h] [bp-47h]@36
  char v146; // [sp+94h] [bp-44h]@23
  char v147; // [sp+95h] [bp-43h]@23
  char v148; // [sp+98h] [bp-40h]@23
  char v149; // [sp+99h] [bp-3Fh]@23
  char v150; // [sp+9Ch] [bp-3Ch]@23
  char v151; // [sp+9Dh] [bp-3Bh]@23
  char v152; // [sp+A0h] [bp-38h]@23
  char v153; // [sp+A1h] [bp-37h]@23
  char v154; // [sp+A4h] [bp-34h]@23
  char v155; // [sp+A5h] [bp-33h]@23
  char v156; // [sp+A8h] [bp-30h]@13
  char v157; // [sp+A9h] [bp-2Fh]@13
  char v158; // [sp+ACh] [bp-2Ch]@13
  char v159; // [sp+ADh] [bp-2Bh]@13
  char v160; // [sp+B0h] [bp-28h]@20
  char v161; // [sp+B1h] [bp-27h]@20

  v4 = this;
  v5 = a4;
  v6 = a2;
  v7 = (*(int (**)(void))(*(_DWORD *)this + 28))();
  v8 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 7, 21);
  v9 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 13, 54);
  v10 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 13, 54);
  v11 = v10;
  if ( v8 > v10 )
    v11 = v8;
  if ( v8 < v10 )
    v10 = v8;
  v12 = v9;
  if ( v7 < v9 )
    v12 = v7;
  if ( *((_DWORD *)v5 + 3) >= v12 )
  {
    if ( v7 > v9 )
      v9 = v7;
    if ( *(_DWORD *)v5 <= v9 && *((_DWORD *)v5 + 5) >= v10 && *((_DWORD *)v5 + 2) <= v11 )
    {
      v13 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v158 = byte_281EAF1;
      v156 = byte_281EAF1;
      v159 = byte_281EAF2;
      v157 = byte_281EAF2;
      v13(v4, v6, v5, 7);
      if ( *((_BYTE *)v4 + 36) )
      {
        v14 = 1;
        do
        {
          v15 = 7;
          do
          {
            v16 = 21;
            do
            {
              v17 = StructurePiece::getWorldY(v4, v14);
              if ( v17 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
                v18 = *(_BYTE *)(Block::mAir + 4);
              else
                v18 = word_281EAFB;
              v19 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
              v160 = v18;
              v161 = 0;
              v19(v4, v6, &v160, v15);
              ++v16;
            }
            while ( v16 != 51 );
            ++v15;
          }
          while ( v15 != 14 );
          ++v14;
        }
        while ( v14 != 11 );
      }
      v20 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v154 = byte_281EAF1;
      v152 = byte_281EAF1;
      v155 = byte_281EAF2;
      v153 = byte_281EAF2;
      v20(v4, v6, v5, 11);
      v21 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v150 = byte_281EAF3;
      v148 = byte_281EAF3;
      v151 = byte_281EAF4;
      v149 = byte_281EAF4;
      v21(v4, v6, v5, 7);
      v22 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v22(v4, v6, v5, 8);
      v23 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v23(v4, v6, v5, 9);
      v24 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v24(v4, v6, v5, 10);
      v25 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v146 = byte_281EAF7;
      v147 = byte_281EAF8;
      v25(v4, v6, &v146, 12);
      v26 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v26(v4, v6, &v146, 12);
      v27 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v27(v4, v6, &v146, 12);
      v28 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v28(v4, v6, &v146, 12);
      v29 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v29(v4, v6, &v146, 12);
      v30 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v30(v4, v6, &v146, 12);
      v31 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v31(v4, v6, &v146, 12);
      v32 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v32(v4, v6, &v146, 12);
      v33 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v33(v4, v6, &v146, 12);
    }
  }
  v34 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 44, 21);
  v35 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 44, 21);
  v36 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 50, 54);
  v37 = (*(int (__fastcall **)(_DWORD, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 50, 54);
  v38 = v37;
  if ( v35 > v37 )
    v38 = v35;
  if ( v35 < v37 )
    v37 = v35;
  v39 = v36;
  if ( v34 < v36 )
    v39 = v34;
  if ( *((_DWORD *)v5 + 3) >= v39 )
    if ( v34 > v36 )
      v36 = v34;
    if ( *(_DWORD *)v5 <= v36 && *((_DWORD *)v5 + 5) >= v37 && *((_DWORD *)v5 + 2) <= v38 )
      v40 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v144 = byte_281EAF1;
      v142 = byte_281EAF1;
      v145 = byte_281EAF2;
      v143 = byte_281EAF2;
      v40(v4, v6, v5, 44);
        v41 = 1;
          v42 = 44;
            v43 = 21;
              v44 = StructurePiece::getWorldY(v4, v41);
              if ( v44 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
                v45 = *(_BYTE *)(Block::mAir + 4);
                v45 = word_281EAFB;
              v46 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
              v160 = v45;
              v46(v4, v6, &v160, v42);
              ++v43;
            while ( v43 != 51 );
            ++v42;
          while ( v42 != 51 );
          ++v41;
        while ( v41 != 11 );
      v47 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v140 = byte_281EAF1;
      v138 = byte_281EAF1;
      v141 = byte_281EAF2;
      v139 = byte_281EAF2;
      v47(v4, v6, v5, 44);
      v48 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v136 = byte_281EAF3;
      v134 = byte_281EAF3;
      v137 = byte_281EAF4;
      v135 = byte_281EAF4;
      v48(v4, v6, v5, 50);
      v49 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v49(v4, v6, v5, 49);
      v50 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v50(v4, v6, v5, 48);
      v51 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v51(v4, v6, v5, 47);
      v52 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v132 = byte_281EAF7;
      v133 = byte_281EAF8;
      v52(v4, v6, &v132, 45);
      v53 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v53(v4, v6, &v132, 45);
      v54 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v54(v4, v6, &v132, 45);
      v55 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v55(v4, v6, &v132, 45);
      v56 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v56(v4, v6, &v132, 45);
      v57 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v57(v4, v6, &v132, 45);
      v58 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v58(v4, v6, &v132, 45);
      v59 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v59(v4, v6, &v132, 45);
      v60 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v60(v4, v6, &v132, 45);
  v61 = (*(int (__fastcall **)(_DWORD, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 8, 44);
  v62 = (*(int (__fastcall **)(_DWORD, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 8, 44);
  v63 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v4 + 28))(v4, 49, 54);
  result = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v4 + 32))(v4, 49, 54);
  v65 = result;
  if ( v62 > result )
    v65 = v62;
  if ( v62 < result )
    result = v62;
  v66 = v63;
  if ( v61 < v63 )
    v66 = v61;
  if ( *((_DWORD *)v5 + 3) >= v66 )
    if ( v61 > v63 )
      v63 = v61;
    if ( *(_DWORD *)v5 <= v63 && *((_DWORD *)v5 + 5) >= result )
      result = *((_DWORD *)v5 + 2);
      if ( result <= v65 )
        v67 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v130 = byte_281EAF1;
        v128 = byte_281EAF1;
        v131 = byte_281EAF2;
        v129 = byte_281EAF2;
        v67(v4, v6, v5, 14);
        if ( *((_BYTE *)v4 + 36) )
          v68 = 1;
            v69 = 14;
              v70 = 44;
              do
              {
                v71 = StructurePiece::getWorldY(v4, v68);
                if ( v71 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
                  v72 = *(_BYTE *)(Block::mAir + 4);
                else
                  v72 = word_281EAFB;
                v73 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
                v160 = v72;
                v161 = 0;
                v73(v4, v6, &v160, v69);
                ++v70;
              }
              while ( v70 != 51 );
              ++v69;
            while ( v69 != 44 );
            ++v68;
          while ( v68 != 11 );
        v74 = 12;
          v75 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
          v126 = byte_281EAF7;
          v127 = byte_281EAF8;
          v75(v4, v6, &v126, v74);
          v76 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
          v124 = byte_281EAF7;
          v125 = byte_281EAF8;
          v76(v4, v6, &v124, v74);
          if ( (unsigned int)(v74 - 18) <= 0x1B && (1 << (v74 - 18)) & 0x8208041 || v74 == 12 )
            v77 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
            v122 = byte_281EAF7;
            v123 = byte_281EAF8;
            v77(v4, v6, &v122, v74);
            v78 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
            v120 = byte_281EAF7;
            v121 = byte_281EAF8;
            v78(v4, v6, &v120, v74);
            v79 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
            v118 = byte_281EAF7;
            v119 = byte_281EAF8;
            v79(v4, v6, &v118, v74);
            v80 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
            v116 = byte_281EAF7;
            v117 = byte_281EAF8;
            v80(v4, v6, &v116, v74);
            v81 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
            v114 = byte_281EAF7;
            v115 = byte_281EAF8;
            v81(v4, v6, &v114, v74);
            v82 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
            v112 = byte_281EAF7;
            v113 = byte_281EAF8;
            v82(v4, v6, &v112, v74);
            v83 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
            v110 = byte_281EAF7;
            v111 = byte_281EAF8;
            v83(v4, v6, &v110, v74);
            v84 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
            v108 = byte_281EAF7;
            v109 = byte_281EAF8;
            v84(v4, v6, &v108, v74);
            v85 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
            v106 = byte_281EAF7;
            v107 = byte_281EAF8;
            v85(v4, v6, &v106, v74);
            v86 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
            v104 = byte_281EAF7;
            v105 = byte_281EAF8;
            v86(v4, v6, &v104, v74);
          v74 += 3;
        while ( v74 < 46 );
        v87 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v102 = byte_281EAF1;
        v100 = byte_281EAF1;
        v103 = byte_281EAF2;
        v101 = byte_281EAF2;
        v87(v4, v6, v5, 8);
        v88 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v88(v4, v6, v5, 9);
        v89 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v89(v4, v6, v5, 10);
        v90 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v98 = byte_281EAF3;
        v96 = byte_281EAF3;
        v99 = byte_281EAF4;
        v97 = byte_281EAF4;
        v90(v4, v6, v5, 11);
        v91 = *(int (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v94 = byte_281EAF1;
        v92 = byte_281EAF1;
        v95 = byte_281EAF2;
        v93 = byte_281EAF2;
        result = v91(v4, v6, v5, 14);
  return result;
}


int __fastcall MonumentBuilding::generateEntranceWall(MonumentBuilding *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  MonumentBuilding *v4; // r4@1
  const BoundingBox *v5; // r9@1
  BlockSource *v6; // r8@1
  int v7; // r5@1
  int v8; // r7@1
  int v9; // r6@1
  int result; // r0@1
  int v11; // r1@1
  int v12; // r3@5
  void (__fastcall *v13)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@13
  MonumentBuilding *v14; // r9@13
  signed int v15; // r6@14
  int v16; // r4@15
  char v17; // r0@16
  void (__fastcall *v18)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@18
  signed int v19; // r6@19
  int v20; // r4@20
  char v21; // r0@21
  void (__fastcall *v22)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@23
  signed int v23; // r6@24
  int v24; // r4@25
  char v25; // r0@26
  void (__fastcall *v26)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@28
  void (__fastcall *v27)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@29
  void (__fastcall *v28)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@29
  void (__fastcall *v29)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r4@29
  void (__fastcall *v30)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r4@29
  void (__fastcall *v31)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r4@29
  void (__fastcall *v32)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@29
  void (__fastcall *v33)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@29
  void (__fastcall *v34)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@29
  void (__fastcall *v35)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@29
  void (__fastcall *v36)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@29
  void (__fastcall *v37)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@29
  signed int v38; // r7@29
  void (__fastcall *v39)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r4@29
  signed int v40; // r6@29
  void (__fastcall *v41)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@29
  void (__fastcall *v42)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@29
  void (__fastcall *v43)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@29
  void (__fastcall *v44)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@29
  void (__fastcall *v45)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@29
  void (__fastcall *v46)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@29
  void (__fastcall *v47)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@30
  void (__fastcall *v48)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@30
  void (__fastcall *v49)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@31
  void (__fastcall *v50)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@31
  void (__fastcall *v51)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@31
  void (__fastcall *v52)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@31
  void (__fastcall *v53)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@31
  void (__fastcall *v54)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@31
  void (__fastcall *v55)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@31
  void (__fastcall *v56)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@31
  void (__fastcall *v57)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@31
  void (__fastcall *v58)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@31
  signed int v59; // r6@31
  signed int v60; // r7@31
  void (__fastcall *v61)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@32
  void (__fastcall *v62)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@32
  void (__fastcall *v63)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@32
  void (__fastcall *v64)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@32
  signed int v65; // r6@34
  int v66; // r4@35
  char v67; // r0@36
  void (__fastcall *v68)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@38
  signed int v69; // r6@39
  int v70; // r4@40
  char v71; // r0@41
  void (__fastcall *v72)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@43
  signed int v73; // r4@44
  int v74; // r5@45
  char v75; // r0@46
  void (__fastcall *v76)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@48
  int v77; // r6@49
  int v78; // r4@50
  char v79; // r0@51
  void (__fastcall *v80)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@53
  int v81; // r6@54
  int v82; // r4@55
  char v83; // r0@56
  void (__fastcall *v84)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@58
  int v85; // r6@59
  signed int v86; // r4@60
  int v87; // r5@61
  char v88; // r0@62
  void (__fastcall *v89)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@64
  int v90; // r4@66
  char v91; // r0@67
  void (__fastcall *v92)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@69
  int v93; // r4@69
  char v94; // r0@70
  void (__fastcall *v95)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@72
  int v96; // r4@72
  char v97; // r0@73
  void (__fastcall *v98)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@75
  int v99; // r4@75
  char v100; // r0@76
  void (__fastcall *v101)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@78
  int v102; // r4@78
  char v103; // r0@79
  void (__fastcall *v104)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@81
  int v105; // r4@81
  char v106; // r0@82
  void (__fastcall *v107)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@84
  int v108; // r4@84
  char v109; // r0@85
  void (__fastcall *v110)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@87
  int v111; // r6@87
  int v112; // r4@88
  char v113; // r0@89
  void (__fastcall *v114)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@91
  int v115; // r6@92
  int v116; // r4@93
  char v117; // r0@94
  void (__fastcall *v118)(MonumentBuilding *, BlockSource *, char *, signed int); // r4@96
  int v119; // r6@97
  signed int v120; // r4@98
  int v121; // r5@99
  char v122; // r0@100
  void (__fastcall *v123)(MonumentBuilding *, BlockSource *, char *, signed int); // r5@102
  int v124; // r4@104
  char v125; // r0@105
  void (__fastcall *v126)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@107
  int v127; // r4@107
  char v128; // r0@108
  void (__fastcall *v129)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@110
  int v130; // r4@110
  char v131; // r0@111
  void (__fastcall *v132)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@113
  int v133; // r4@113
  char v134; // r0@114
  void (__fastcall *v135)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@116
  int v136; // r4@116
  char v137; // r0@117
  void (__fastcall *v138)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@119
  int v139; // r4@119
  char v140; // r0@120
  void (__fastcall *v141)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@122
  int v142; // r4@122
  char v143; // r0@123
  int (__fastcall *v144)(MonumentBuilding *, BlockSource *, char *, signed int); // r7@125
  const BoundingBox *v145; // [sp+24h] [bp-D4h]@13
  char v146; // [sp+28h] [bp-D0h]@32
  char v147; // [sp+29h] [bp-CFh]@32
  char v148; // [sp+2Ch] [bp-CCh]@32
  char v149; // [sp+2Dh] [bp-CBh]@32
  char v150; // [sp+30h] [bp-C8h]@32
  char v151; // [sp+31h] [bp-C7h]@32
  char v152; // [sp+34h] [bp-C4h]@32
  char v153; // [sp+35h] [bp-C3h]@32
  char v154; // [sp+38h] [bp-C0h]@31
  char v155; // [sp+39h] [bp-BFh]@31
  char v156; // [sp+3Ch] [bp-BCh]@31
  char v157; // [sp+3Dh] [bp-BBh]@31
  char v158; // [sp+40h] [bp-B8h]@31
  char v159; // [sp+41h] [bp-B7h]@31
  char v160; // [sp+44h] [bp-B4h]@31
  char v161; // [sp+45h] [bp-B3h]@31
  char v162; // [sp+48h] [bp-B0h]@30
  char v163; // [sp+49h] [bp-AFh]@30
  char v164; // [sp+4Ch] [bp-ACh]@30
  char v165; // [sp+4Dh] [bp-ABh]@30
  char v166; // [sp+50h] [bp-A8h]@29
  char v167; // [sp+51h] [bp-A7h]@29
  char v168; // [sp+54h] [bp-A4h]@29
  char v169; // [sp+55h] [bp-A3h]@29
  char v170; // [sp+58h] [bp-A0h]@29
  char v171; // [sp+59h] [bp-9Fh]@29
  char v172; // [sp+5Ch] [bp-9Ch]@29
  char v173; // [sp+5Dh] [bp-9Bh]@29
  char v174; // [sp+60h] [bp-98h]@29
  char v175; // [sp+61h] [bp-97h]@29
  char v176; // [sp+64h] [bp-94h]@29
  char v177; // [sp+65h] [bp-93h]@29
  char v178; // [sp+68h] [bp-90h]@29
  char v179; // [sp+69h] [bp-8Fh]@29
  char v180; // [sp+6Ch] [bp-8Ch]@29
  char v181; // [sp+6Dh] [bp-8Bh]@29
  char v182; // [sp+70h] [bp-88h]@29
  char v183; // [sp+71h] [bp-87h]@29
  char v184; // [sp+74h] [bp-84h]@29
  char v185; // [sp+75h] [bp-83h]@29
  char v186; // [sp+78h] [bp-80h]@29
  char v187; // [sp+79h] [bp-7Fh]@29
  char v188; // [sp+7Ch] [bp-7Ch]@29
  char v189; // [sp+7Dh] [bp-7Bh]@29
  char v190; // [sp+80h] [bp-78h]@29
  char v191; // [sp+81h] [bp-77h]@29
  char v192; // [sp+84h] [bp-74h]@29
  char v193; // [sp+85h] [bp-73h]@29
  char v194; // [sp+88h] [bp-70h]@29
  char v195; // [sp+89h] [bp-6Fh]@29
  char v196; // [sp+8Ch] [bp-6Ch]@29
  char v197; // [sp+8Dh] [bp-6Bh]@29
  char v198; // [sp+90h] [bp-68h]@29
  char v199; // [sp+91h] [bp-67h]@29
  char v200; // [sp+94h] [bp-64h]@29
  char v201; // [sp+95h] [bp-63h]@29
  char v202; // [sp+98h] [bp-60h]@29
  char v203; // [sp+99h] [bp-5Fh]@29
  char v204; // [sp+9Ch] [bp-5Ch]@29
  char v205; // [sp+9Dh] [bp-5Bh]@29
  char v206; // [sp+A0h] [bp-58h]@29
  char v207; // [sp+A1h] [bp-57h]@29
  char v208; // [sp+A4h] [bp-54h]@29
  char v209; // [sp+A5h] [bp-53h]@29
  char v210; // [sp+A8h] [bp-50h]@29
  char v211; // [sp+A9h] [bp-4Fh]@29
  char v212; // [sp+ACh] [bp-4Ch]@29
  char v213; // [sp+ADh] [bp-4Bh]@29
  char v214; // [sp+B0h] [bp-48h]@29
  char v215; // [sp+B1h] [bp-47h]@29
  char v216; // [sp+B4h] [bp-44h]@29
  char v217; // [sp+B5h] [bp-43h]@29
  char v218; // [sp+B8h] [bp-40h]@29
  char v219; // [sp+B9h] [bp-3Fh]@29
  char v220; // [sp+BCh] [bp-3Ch]@29
  char v221; // [sp+BDh] [bp-3Bh]@29
  char v222; // [sp+C0h] [bp-38h]@29
  char v223; // [sp+C1h] [bp-37h]@29
  char v224; // [sp+C4h] [bp-34h]@29
  char v225; // [sp+C5h] [bp-33h]@29
  char v226; // [sp+C8h] [bp-30h]@13
  char v227; // [sp+C9h] [bp-2Fh]@13
  char v228; // [sp+CCh] [bp-2Ch]@13
  char v229; // [sp+CDh] [bp-2Bh]@13
  char v230; // [sp+D0h] [bp-28h]@18
  char v231; // [sp+D1h] [bp-27h]@18

  v4 = this;
  v5 = a4;
  v6 = a2;
  v7 = (*(int (**)(void))(*(_DWORD *)this + 28))();
  v8 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 15, 20);
  v9 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 42, 21);
  result = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 42, 21);
  v11 = result;
  if ( v8 > result )
    v11 = v8;
  if ( v8 < result )
    result = v8;
  v12 = v9;
  if ( v7 < v9 )
    v12 = v7;
  if ( *((_DWORD *)v5 + 3) >= v12 )
  {
    if ( v7 > v9 )
      v9 = v7;
    if ( *(_DWORD *)v5 <= v9 && *((_DWORD *)v5 + 5) >= result )
    {
      result = *((_DWORD *)v5 + 2);
      if ( result <= v11 )
      {
        v13 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v228 = byte_281EAF1;
        v226 = byte_281EAF1;
        v229 = byte_281EAF2;
        v227 = byte_281EAF2;
        v145 = v5;
        v13(v4, v6, v5, 15);
        v14 = v4;
        if ( *((_BYTE *)v4 + 36) )
        {
          v15 = 26;
          do
          {
            v16 = StructurePiece::getWorldY(v14, 1);
            if ( v16 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
              v17 = *(_BYTE *)(Block::mAir + 4);
            else
              v17 = word_281EAFB;
            v18 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
            v230 = v17;
            v231 = 0;
            v18(v14, v6, &v230, v15++);
          }
          while ( v15 != 32 );
          v19 = 26;
            v20 = StructurePiece::getWorldY(v14, 2);
            if ( v20 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
              v21 = *(_BYTE *)(Block::mAir + 4);
              v21 = word_281EAFB;
            v22 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
            v230 = v21;
            v22(v14, v6, &v230, v19++);
          while ( v19 != 32 );
          v23 = 26;
            v24 = StructurePiece::getWorldY(v14, 3);
            if ( v24 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
              v25 = *(_BYTE *)(Block::mAir + 4);
              v25 = word_281EAFB;
            v26 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
            v230 = v25;
            v26(v14, v6, &v230, v23++);
          while ( v23 != 32 );
        }
        v27 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v14 + 40);
        v224 = byte_281EAF1;
        v222 = byte_281EAF1;
        v225 = byte_281EAF2;
        v223 = byte_281EAF2;
        v27(v14, v6, v145, 21);
        v28 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v14 + 40);
        v220 = byte_281EAF1;
        v218 = byte_281EAF1;
        v221 = byte_281EAF2;
        v219 = byte_281EAF2;
        v28(v14, v6, v145, 17);
        v29 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v14 + 40);
        v216 = byte_281EAF1;
        v214 = byte_281EAF1;
        v217 = byte_281EAF2;
        v215 = byte_281EAF2;
        v29(v14, v6, v145, 16);
        v30 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v14 + 40);
        v212 = byte_281EAF1;
        v210 = byte_281EAF1;
        v213 = byte_281EAF2;
        v211 = byte_281EAF2;
        v30(v14, v6, v145, 15);
        v31 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v14 + 40);
        v208 = byte_281EAF1;
        v206 = byte_281EAF1;
        v209 = byte_281EAF2;
        v207 = byte_281EAF2;
        v31(v14, v6, v145, 16);
        v32 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v14 + 40);
        v204 = byte_281EAF1;
        v202 = byte_281EAF1;
        v205 = byte_281EAF2;
        v203 = byte_281EAF2;
        v32(v14, v6, v145, 17);
        v33 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v14 + 40);
        v200 = byte_281EAF1;
        v198 = byte_281EAF1;
        v201 = byte_281EAF2;
        v199 = byte_281EAF2;
        v33(v14, v6, v145, 21);
        v34 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v14 + 40);
        v196 = byte_281EAF1;
        v194 = byte_281EAF1;
        v197 = byte_281EAF2;
        v195 = byte_281EAF2;
        v34(v14, v6, v145, 22);
        v35 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v14 + 40);
        v192 = byte_281EAF1;
        v190 = byte_281EAF1;
        v193 = byte_281EAF2;
        v191 = byte_281EAF2;
        v35(v14, v6, v145, 31);
        v36 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v14 + 40);
        v188 = byte_281EAF1;
        v186 = byte_281EAF1;
        v189 = byte_281EAF2;
        v187 = byte_281EAF2;
        v36(v14, v6, v145, 23);
        v37 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v14 + 40);
        v184 = byte_281EAF1;
        v182 = byte_281EAF1;
        v185 = byte_281EAF2;
        v183 = byte_281EAF2;
        v37(v14, v6, v145, 32);
        v38 = 29;
        v39 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v14 + 40);
        v180 = byte_281EAF3;
        v178 = byte_281EAF3;
        v181 = byte_281EAF4;
        v179 = byte_281EAF4;
        v40 = 28;
        v39(v14, v6, v145, 28);
        v41 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
        v176 = byte_281EAF3;
        v177 = byte_281EAF4;
        v41(v14, v6, &v176, 27);
        v42 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
        v174 = byte_281EAF3;
        v175 = byte_281EAF4;
        v42(v14, v6, &v174, 30);
        v43 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
        v172 = byte_281EAF3;
        v173 = byte_281EAF4;
        v43(v14, v6, &v172, 26);
        v44 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
        v170 = byte_281EAF3;
        v171 = byte_281EAF4;
        v44(v14, v6, &v170, 31);
        v45 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
        v168 = byte_281EAF3;
        v169 = byte_281EAF4;
        v45(v14, v6, &v168, 25);
        v46 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
        v166 = byte_281EAF3;
        v167 = byte_281EAF4;
        v46(v14, v6, &v166, 32);
        do
          v47 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v164 = byte_281EAF5;
          v165 = byte_281EAF6;
          v47(v14, v6, &v164, v40);
          v48 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v162 = byte_281EAF5;
          v163 = byte_281EAF6;
          v48(v14, v6, &v162, v38);
          --v40;
          ++v38;
        while ( v40 != 21 );
        v49 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
        v160 = byte_281EAF5;
        v161 = byte_281EAF6;
        v49(v14, v6, &v160, 28);
        v50 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
        v158 = byte_281EAF5;
        v159 = byte_281EAF6;
        v50(v14, v6, &v158, 29);
        v51 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
        v51(v14, v6, &v160, 27);
        v52 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
        v52(v14, v6, &v158, 30);
        v53 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
        v53(v14, v6, &v160, 26);
        v54 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
        v54(v14, v6, &v158, 31);
        v55 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
        v55(v14, v6, &v160, 25);
        v56 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
        v56(v14, v6, &v158, 32);
        v57 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
        v156 = byte_281EAF5;
        v157 = byte_281EAF6;
        v57(v14, v6, &v156, 28);
        v58 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
        v154 = byte_281EAF5;
        v155 = byte_281EAF6;
        v58(v14, v6, &v154, 29);
        v59 = 22;
        v60 = 35;
          v61 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v152 = byte_281EAF5;
          v153 = byte_281EAF6;
          v61(v14, v6, &v152, v59);
          v62 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v150 = byte_281EAF5;
          v151 = byte_281EAF6;
          v62(v14, v6, &v150, v59);
          v63 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v148 = byte_281EAF5;
          v149 = byte_281EAF6;
          v63(v14, v6, &v148, v60);
          v64 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v146 = byte_281EAF5;
          v147 = byte_281EAF6;
          v64(v14, v6, &v146, v60);
          v59 -= 2;
          v60 += 2;
        while ( v59 != 16 );
        result = *((_BYTE *)v14 + 36);
        if ( *((_BYTE *)v14 + 36) )
          v65 = 15;
            v66 = StructurePiece::getWorldY(v14, 13);
            if ( v66 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
              v67 = *(_BYTE *)(Block::mAir + 4);
              v67 = word_281EAFB;
            v68 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
            v230 = v67;
            v68(v14, v6, &v230, v65++);
          while ( v65 != 43 );
          v69 = 15;
            v70 = StructurePiece::getWorldY(v14, 14);
            if ( v70 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
              v71 = *(_BYTE *)(Block::mAir + 4);
              v71 = word_281EAFB;
            v72 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
            v230 = v71;
            v72(v14, v6, &v230, v69++);
          while ( v69 != 43 );
          v73 = 15;
            v74 = StructurePiece::getWorldY(v14, 15);
            if ( v74 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
              v75 = *(_BYTE *)(Block::mAir + 4);
              v75 = word_281EAFB;
            v76 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
            v230 = v75;
            v76(v14, v6, &v230, v73++);
          while ( v73 != 43 );
          v77 = 1;
            v78 = StructurePiece::getWorldY(v14, v77);
            if ( v78 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
              v79 = *(_BYTE *)(Block::mAir + 4);
              v79 = word_281EAFB;
            v80 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
            v230 = v79;
            v80(v14, v6, &v230, 15);
            ++v77;
          while ( v77 != 7 );
          v81 = 1;
            v82 = StructurePiece::getWorldY(v14, v81);
            if ( v82 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
              v83 = *(_BYTE *)(Block::mAir + 4);
              v83 = word_281EAFB;
            v84 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
            v230 = v83;
            v84(v14, v6, &v230, 16);
            ++v81;
          while ( v81 != 6 );
          v85 = 1;
            v86 = 17;
            do
            {
              v87 = StructurePiece::getWorldY(v14, v85);
              if ( v87 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
                v88 = *(_BYTE *)(Block::mAir + 4);
              else
                v88 = word_281EAFB;
              v89 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
              v230 = v88;
              v231 = 0;
              v89(v14, v6, &v230, v86++);
            }
            while ( v86 != 21 );
            ++v85;
          while ( v85 != 5 );
          v90 = StructurePiece::getWorldY(v14, 1);
          if ( v90 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
            v91 = *(_BYTE *)(Block::mAir + 4);
          else
            v91 = word_281EAFB;
          v92 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v230 = v91;
          v231 = 0;
          v92(v14, v6, &v230, 21);
          v93 = StructurePiece::getWorldY(v14, 2);
          if ( v93 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
            v94 = *(_BYTE *)(Block::mAir + 4);
            v94 = word_281EAFB;
          v95 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v230 = v94;
          v95(v14, v6, &v230, 21);
          v96 = StructurePiece::getWorldY(v14, 3);
          if ( v96 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
            v97 = *(_BYTE *)(Block::mAir + 4);
            v97 = word_281EAFB;
          v98 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v230 = v97;
          v98(v14, v6, &v230, 21);
          v99 = StructurePiece::getWorldY(v14, 1);
          if ( v99 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
            v100 = *(_BYTE *)(Block::mAir + 4);
            v100 = word_281EAFB;
          v101 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v230 = v100;
          v101(v14, v6, &v230, 22);
          v102 = StructurePiece::getWorldY(v14, 2);
          if ( v102 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
            v103 = *(_BYTE *)(Block::mAir + 4);
            v103 = word_281EAFB;
          v104 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v230 = v103;
          v104(v14, v6, &v230, 22);
          v105 = StructurePiece::getWorldY(v14, 1);
          if ( v105 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
            v106 = *(_BYTE *)(Block::mAir + 4);
            v106 = word_281EAFB;
          v107 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v230 = v106;
          v107(v14, v6, &v230, 23);
          v108 = StructurePiece::getWorldY(v14, 1);
          if ( v108 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
            v109 = *(_BYTE *)(Block::mAir + 4);
            v109 = word_281EAFB;
          v110 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v230 = v109;
          v110(v14, v6, &v230, 24);
          v111 = 1;
            v112 = StructurePiece::getWorldY(v14, v111);
            if ( v112 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
              v113 = *(_BYTE *)(Block::mAir + 4);
              v113 = word_281EAFB;
            v114 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
            v230 = v113;
            v114(v14, v6, &v230, 42);
            ++v111;
          while ( v111 != 7 );
          v115 = 1;
            v116 = StructurePiece::getWorldY(v14, v115);
            if ( v116 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
              v117 = *(_BYTE *)(Block::mAir + 4);
              v117 = word_281EAFB;
            v118 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
            v230 = v117;
            v118(v14, v6, &v230, 41);
            ++v115;
          while ( v115 != 6 );
          v119 = 1;
            v120 = 37;
              v121 = StructurePiece::getWorldY(v14, v119);
              if ( v121 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
                v122 = *(_BYTE *)(Block::mAir + 4);
                v122 = word_281EAFB;
              v123 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
              v230 = v122;
              v123(v14, v6, &v230, v120++);
            while ( v120 != 41 );
            ++v119;
          while ( v119 != 5 );
          v124 = StructurePiece::getWorldY(v14, 1);
          if ( v124 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
            v125 = *(_BYTE *)(Block::mAir + 4);
            v125 = word_281EAFB;
          v126 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v230 = v125;
          v126(v14, v6, &v230, 36);
          v127 = StructurePiece::getWorldY(v14, 2);
          if ( v127 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
            v128 = *(_BYTE *)(Block::mAir + 4);
            v128 = word_281EAFB;
          v129 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v230 = v128;
          v129(v14, v6, &v230, 36);
          v130 = StructurePiece::getWorldY(v14, 3);
          if ( v130 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
            v131 = *(_BYTE *)(Block::mAir + 4);
            v131 = word_281EAFB;
          v132 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v230 = v131;
          v132(v14, v6, &v230, 36);
          v133 = StructurePiece::getWorldY(v14, 1);
          if ( v133 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
            v134 = *(_BYTE *)(Block::mAir + 4);
            v134 = word_281EAFB;
          v135 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v230 = v134;
          v135(v14, v6, &v230, 33);
          v136 = StructurePiece::getWorldY(v14, 1);
          if ( v136 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
            v137 = *(_BYTE *)(Block::mAir + 4);
            v137 = word_281EAFB;
          v138 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v230 = v137;
          v138(v14, v6, &v230, 34);
          v139 = StructurePiece::getWorldY(v14, 1);
          if ( v139 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
            v140 = *(_BYTE *)(Block::mAir + 4);
            v140 = word_281EAFB;
          v141 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v230 = v140;
          v141(v14, v6, &v230, 35);
          v142 = StructurePiece::getWorldY(v14, 2);
          if ( v142 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
            v143 = *(_BYTE *)(Block::mAir + 4);
            v143 = word_281EAFB;
          v144 = *(int (__fastcall **)(MonumentBuilding *, BlockSource *, char *, signed int))(*(_DWORD *)v14 + 36);
          v230 = v143;
          result = v144(v14, v6, &v230, 35);
      }
    }
  }
  return result;
}


int __fastcall MonumentBuilding::generateRoofPiece(MonumentBuilding *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  MonumentBuilding *v4; // r6@1
  const BoundingBox *v5; // r9@1
  BlockSource *v6; // r10@1
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r5@1
  int result; // r0@1
  int v11; // r1@1
  int v12; // r3@5
  StructurePiece *v13; // r4@13
  void (__fastcall *v14)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int); // r7@13
  int v15; // r7@14
  signed int v16; // r5@15
  signed int v17; // r8@16
  int v18; // r6@17
  char v19; // r0@18
  void (__fastcall *v20)(StructurePiece *, BlockSource *, char *, signed int); // r6@20
  StructurePiece *v21; // r8@23
  signed int v22; // r5@23
  int v23; // r2@23
  void (__fastcall *v24)(StructurePiece *, BlockSource *, const BoundingBox *, int); // r12@23
  int v25; // r4@24
  int v26; // ST24_4@24
  void (__fastcall *v27)(StructurePiece *, BlockSource *, const BoundingBox *, int); // r7@24
  void (__fastcall *v28)(StructurePiece *, BlockSource *, const BoundingBox *, int); // r12@24
  void (__fastcall *v29)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@24
  void (__fastcall *v30)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@25
  void (__fastcall *v31)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@25
  void (__fastcall *v32)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@25
  void (__fastcall *v33)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@25
  void (__fastcall *v34)(StructurePiece *, BlockSource *, char *, signed int); // r7@25
  void (__fastcall *v35)(StructurePiece *, BlockSource *, char *, signed int); // r7@25
  void (__fastcall *v36)(StructurePiece *, BlockSource *, char *, signed int); // r7@25
  void (__fastcall *v37)(StructurePiece *, BlockSource *, char *, signed int); // r4@25
  void (__fastcall *v38)(StructurePiece *, BlockSource *, char *, signed int); // r4@25
  void (__fastcall *v39)(StructurePiece *, BlockSource *, char *, signed int); // r4@25
  void (__fastcall *v40)(StructurePiece *, BlockSource *, char *, signed int); // r4@25
  void (__fastcall *v41)(StructurePiece *, BlockSource *, char *, signed int); // r7@25
  void (__fastcall *v42)(StructurePiece *, BlockSource *, char *, signed int); // r7@25
  void (__fastcall *v43)(StructurePiece *, BlockSource *, char *, signed int); // r7@25
  void (__fastcall *v44)(StructurePiece *, BlockSource *, char *, signed int); // r7@25
  void (__fastcall *v45)(StructurePiece *, BlockSource *, char *, signed int); // r7@25
  void (__fastcall *v46)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@25
  void (__fastcall *v47)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@25
  void (__fastcall *v48)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@25
  int (__fastcall *v49)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@25
  char v50; // [sp+28h] [bp-C8h]@25
  char v51; // [sp+29h] [bp-C7h]@25
  char v52; // [sp+2Ch] [bp-C4h]@25
  char v53; // [sp+2Dh] [bp-C3h]@25
  char v54; // [sp+30h] [bp-C0h]@25
  char v55; // [sp+31h] [bp-BFh]@25
  char v56; // [sp+34h] [bp-BCh]@25
  char v57; // [sp+35h] [bp-BBh]@25
  char v58; // [sp+38h] [bp-B8h]@25
  char v59; // [sp+39h] [bp-B7h]@25
  char v60; // [sp+3Ch] [bp-B4h]@25
  char v61; // [sp+3Dh] [bp-B3h]@25
  char v62; // [sp+40h] [bp-B0h]@25
  char v63; // [sp+41h] [bp-AFh]@25
  char v64; // [sp+44h] [bp-ACh]@25
  char v65; // [sp+45h] [bp-ABh]@25
  char v66; // [sp+48h] [bp-A8h]@25
  char v67; // [sp+49h] [bp-A7h]@25
  char v68; // [sp+4Ch] [bp-A4h]@25
  char v69; // [sp+4Dh] [bp-A3h]@25
  char v70; // [sp+50h] [bp-A0h]@25
  char v71; // [sp+51h] [bp-9Fh]@25
  char v72; // [sp+54h] [bp-9Ch]@25
  char v73; // [sp+55h] [bp-9Bh]@25
  char v74; // [sp+58h] [bp-98h]@25
  char v75; // [sp+59h] [bp-97h]@25
  char v76; // [sp+5Ch] [bp-94h]@25
  char v77; // [sp+5Dh] [bp-93h]@25
  char v78; // [sp+60h] [bp-90h]@25
  char v79; // [sp+61h] [bp-8Fh]@25
  char v80; // [sp+64h] [bp-8Ch]@25
  char v81; // [sp+65h] [bp-8Bh]@25
  char v82; // [sp+68h] [bp-88h]@25
  char v83; // [sp+69h] [bp-87h]@25
  char v84; // [sp+6Ch] [bp-84h]@25
  char v85; // [sp+6Dh] [bp-83h]@25
  char v86; // [sp+70h] [bp-80h]@25
  char v87; // [sp+71h] [bp-7Fh]@25
  char v88; // [sp+74h] [bp-7Ch]@25
  char v89; // [sp+75h] [bp-7Bh]@25
  char v90; // [sp+78h] [bp-78h]@25
  char v91; // [sp+79h] [bp-77h]@25
  char v92; // [sp+7Ch] [bp-74h]@25
  char v93; // [sp+7Dh] [bp-73h]@25
  char v94; // [sp+80h] [bp-70h]@25
  char v95; // [sp+81h] [bp-6Fh]@25
  char v96; // [sp+84h] [bp-6Ch]@25
  char v97; // [sp+85h] [bp-6Bh]@25
  char v98; // [sp+88h] [bp-68h]@25
  char v99; // [sp+89h] [bp-67h]@25
  char v100; // [sp+8Ch] [bp-64h]@25
  char v101; // [sp+8Dh] [bp-63h]@25
  char v102; // [sp+90h] [bp-60h]@25
  char v103; // [sp+91h] [bp-5Fh]@25
  char v104; // [sp+94h] [bp-5Ch]@25
  char v105; // [sp+95h] [bp-5Bh]@25
  char v106; // [sp+98h] [bp-58h]@25
  char v107; // [sp+99h] [bp-57h]@25
  char v108; // [sp+9Ch] [bp-54h]@25
  char v109; // [sp+9Dh] [bp-53h]@25
  char v110; // [sp+A0h] [bp-50h]@24
  char v111; // [sp+A1h] [bp-4Fh]@24
  char v112; // [sp+A4h] [bp-4Ch]@24
  char v113; // [sp+A5h] [bp-4Bh]@24
  char v114; // [sp+A8h] [bp-48h]@24
  char v115; // [sp+A9h] [bp-47h]@24
  char v116; // [sp+ACh] [bp-44h]@24
  char v117; // [sp+ADh] [bp-43h]@24
  char v118; // [sp+B0h] [bp-40h]@24
  char v119; // [sp+B1h] [bp-3Fh]@24
  char v120; // [sp+B4h] [bp-3Ch]@24
  char v121; // [sp+B5h] [bp-3Bh]@24
  char v122; // [sp+B8h] [bp-38h]@24
  char v123; // [sp+B9h] [bp-37h]@24
  char v124; // [sp+BCh] [bp-34h]@24
  char v125; // [sp+BDh] [bp-33h]@24
  char v126; // [sp+C0h] [bp-30h]@13
  char v127; // [sp+C1h] [bp-2Fh]@13
  char v128; // [sp+C4h] [bp-2Ch]@13
  char v129; // [sp+C5h] [bp-2Bh]@13
  char v130; // [sp+C8h] [bp-28h]@20
  char v131; // [sp+C9h] [bp-27h]@20

  v4 = this;
  v5 = a4;
  v6 = a2;
  v7 = (*(int (**)(void))(*(_DWORD *)this + 28))();
  v8 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 21, 21);
  v9 = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 28))(v4, 36, 36);
  result = (*(int (__fastcall **)(MonumentBuilding *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 36, 36);
  v11 = result;
  if ( v8 > result )
    v11 = v8;
  if ( v8 < result )
    result = v8;
  v12 = v9;
  if ( v7 < v9 )
    v12 = v7;
  if ( *((_DWORD *)v5 + 3) >= v12 )
  {
    if ( v7 > v9 )
      v9 = v7;
    if ( *(_DWORD *)v5 <= v9 && *((_DWORD *)v5 + 5) >= result )
    {
      result = *((_DWORD *)v5 + 2);
      if ( result <= v11 )
      {
        v13 = v4;
        v14 = *(void (__fastcall **)(MonumentBuilding *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v128 = byte_281EAF1;
        v126 = byte_281EAF1;
        v129 = byte_281EAF2;
        v127 = byte_281EAF2;
        v14(v4, v6, v5, 21);
        if ( *((_BYTE *)v4 + 36) )
        {
          v15 = 1;
          do
          {
            v16 = 21;
            do
            {
              v17 = 22;
              do
              {
                v18 = StructurePiece::getWorldY(v13, v15);
                if ( v18 >= *(_WORD *)(BlockSource::getDimension(v6) + 20) )
                  v19 = *(_BYTE *)(Block::mAir + 4);
                else
                  v19 = word_281EAFB;
                v20 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v13 + 36);
                v130 = v19;
                v131 = 0;
                v20(v13, v6, &v130, v16);
                ++v17;
              }
              while ( v17 != 37 );
              ++v16;
            }
            while ( v16 != 37 );
            ++v15;
          }
          while ( v15 != 24 );
        }
        v21 = v13;
        v22 = 36;
        v23 = 22;
        v24 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v13 + 40);
        do
          v25 = v23 - 1;
          v124 = byte_281EAF3;
          v122 = byte_281EAF3;
          v26 = v23;
          v125 = byte_281EAF4;
          v123 = byte_281EAF4;
          v24(v21, v6, v5, v23 - 1);
          v27 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v21 + 40);
          v120 = byte_281EAF3;
          v118 = byte_281EAF3;
          v121 = byte_281EAF4;
          v119 = byte_281EAF4;
          v27(v21, v6, v5, v25);
          v28 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v21 + 40);
          v116 = byte_281EAF3;
          v114 = byte_281EAF3;
          v117 = byte_281EAF4;
          v115 = byte_281EAF4;
          v28(v21, v6, v5, v25);
          v29 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v21 + 40);
          v112 = byte_281EAF3;
          v110 = byte_281EAF3;
          v113 = byte_281EAF4;
          v111 = byte_281EAF4;
          v29(v21, v6, v5, v22--);
          v24 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v21 + 40);
          v23 = v26 + 1;
        while ( v22 != 32 );
        v108 = byte_281EAF1;
        v106 = byte_281EAF1;
        v109 = byte_281EAF2;
        v107 = byte_281EAF2;
        v24(v21, v6, v5, 25);
        v30 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v21 + 40);
        v104 = byte_281EAF3;
        v102 = byte_281EAF3;
        v105 = byte_281EAF4;
        v103 = byte_281EAF4;
        v30(v21, v6, v5, 25);
        v31 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v21 + 40);
        v100 = byte_281EAF3;
        v98 = byte_281EAF3;
        v101 = byte_281EAF4;
        v99 = byte_281EAF4;
        v31(v21, v6, v5, 32);
        v32 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v21 + 40);
        v96 = byte_281EAF3;
        v94 = byte_281EAF3;
        v97 = byte_281EAF4;
        v95 = byte_281EAF4;
        v32(v21, v6, v5, 25);
        v33 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v21 + 40);
        v92 = byte_281EAF3;
        v90 = byte_281EAF3;
        v93 = byte_281EAF4;
        v91 = byte_281EAF4;
        v33(v21, v6, v5, 32);
        v34 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v21 + 36);
        v88 = byte_281EAF3;
        v89 = byte_281EAF4;
        v34(v21, v6, &v88, 26);
        v35 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v21 + 36);
        v86 = byte_281EAF3;
        v87 = byte_281EAF4;
        v35(v21, v6, &v86, 27);
        v36 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v21 + 36);
        v84 = byte_281EAF9;
        v85 = byte_281EAFA;
        v36(v21, v6, &v84, 27);
        v37 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v21 + 36);
        v82 = byte_281EAF3;
        v83 = byte_281EAF4;
        v37(v21, v6, &v82, 26);
        v38 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v21 + 36);
        v80 = byte_281EAF3;
        v81 = byte_281EAF4;
        v38(v21, v6, &v80, 27);
        v39 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v21 + 36);
        v78 = byte_281EAF9;
        v79 = byte_281EAFA;
        v39(v21, v6, &v78, 27);
        v40 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v21 + 36);
        v76 = byte_281EAF3;
        v77 = byte_281EAF4;
        v40(v21, v6, &v76, 31);
        v41 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v21 + 36);
        v74 = byte_281EAF3;
        v75 = byte_281EAF4;
        v41(v21, v6, &v74, 30);
        v42 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v21 + 36);
        v72 = byte_281EAF9;
        v73 = byte_281EAFA;
        v42(v21, v6, &v72, 30);
        v43 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v21 + 36);
        v70 = byte_281EAF3;
        v71 = byte_281EAF4;
        v43(v21, v6, &v70, 31);
        v44 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v21 + 36);
        v68 = byte_281EAF3;
        v69 = byte_281EAF4;
        v44(v21, v6, &v68, 30);
        v45 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v21 + 36);
        v66 = byte_281EAF9;
        v67 = byte_281EAFA;
        v45(v21, v6, &v66, 30);
        v46 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v21 + 40);
        v64 = byte_281EAF1;
        v62 = byte_281EAF1;
        v65 = byte_281EAF2;
        v63 = byte_281EAF2;
        v46(v21, v6, v5, 28);
        v47 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v21 + 40);
        v60 = byte_281EAF1;
        v58 = byte_281EAF1;
        v61 = byte_281EAF2;
        v59 = byte_281EAF2;
        v47(v21, v6, v5, 27);
        v48 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v21 + 40);
        v56 = byte_281EAF1;
        v54 = byte_281EAF1;
        v57 = byte_281EAF2;
        v55 = byte_281EAF2;
        v48(v21, v6, v5, 28);
        v49 = *(int (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v21 + 40);
        v52 = byte_281EAF1;
        v50 = byte_281EAF1;
        v53 = byte_281EAF2;
        v51 = byte_281EAF2;
        result = v49(v21, v6, v5, 30);
      }
    }
  }
  return result;
}
