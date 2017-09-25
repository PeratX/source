

void __fastcall BrewingStandScreenController::~BrewingStandScreenController(BrewingStandScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26E100C;
  v2 = *((_DWORD *)this + 159);
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
  ContainerScreenController::~ContainerScreenController(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void **__fastcall BrewingStandScreenController::_getButtonXDescription(BrewingStandScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r5@1
  ContainerScreenController *v3; // r4@1
  void **result; // r0@2
  int v5; // r0@4

  v2 = a2;
  v3 = this;
  if ( ContainerScreenController::_getInteractionModel(a2) )
  {
    result = ContainerScreenController::_getButtonXDescription(v3, v2);
  }
  else
    v5 = *((_DWORD *)v2 + 157);
    if ( v5 == 8 )
    {
      result = sub_119C884((void **)v3, "controller.buttonTip.removeFuel");
    }
    else if ( v5 == 6 )
      result = sub_119C884((void **)v3, "controller.buttonTip.removeInput");
    else
      result = sub_119C884((void **)v3, "controller.buttonTip.takeItem");
  return result;
}


void **__fastcall BrewingStandScreenController::_getButtonYDescription(BrewingStandScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r5@1
  ContainerScreenController *v3; // r4@1
  void **result; // r0@3

  v2 = a2;
  v3 = this;
  if ( ContainerScreenController::_getInteractionModel(a2) || ContainerScreenController::isSlotsPanelFocused(v2) == 1 )
    result = ContainerScreenController::_getButtonYDescription(v3, v2);
  else
    result = sub_119C884((void **)v3, "controller.buttonTip.addItemStack");
  return result;
}


void __fastcall BrewingStandScreenController::_registerAutoPlaceOrder(BrewingStandScreenController *this)
{
  BrewingStandScreenController *v1; // r8@1
  int v2; // r9@2
  int *v3; // r0@2
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
  int v14; // r0@19
  _DWORD *v15; // r0@20
  char **v16; // r0@21
  char *v17; // r1@22
  char *v18; // r0@24
  int v19; // r9@25
  int v20; // r0@25
  int v21; // r5@26
  int v22; // r7@26
  bool v23; // zf@27
  int v24; // r4@30
  bool v25; // zf@33
  _DWORD *v26; // r0@37
  char **v27; // r0@38
  char *v28; // r1@39
  char *v29; // r0@41
  int v30; // r9@42
  int v31; // r0@42
  int v32; // r5@43
  int v33; // r7@43
  bool v34; // zf@44
  int v35; // r4@47
  bool v36; // zf@50
  _DWORD *v37; // r0@54
  char **v38; // r0@55
  char *v39; // r1@56
  char *v40; // r0@58
  int v41; // r9@59
  int v42; // r0@59
  int v43; // r5@60
  int v44; // r7@60
  bool v45; // zf@61
  int v46; // r4@64
  bool v47; // zf@67
  _DWORD *v48; // r0@71
  char **v49; // r0@72
  char *v50; // r1@73
  char *v51; // r0@75
  int v52; // r9@76
  int v53; // r0@76
  int v54; // r5@77
  int v55; // r7@77
  bool v56; // zf@78
  int v57; // r4@81
  bool v58; // zf@84
  _DWORD *v59; // r0@88
  unsigned __int64 *v60; // r8@89
  int v61; // r0@89
  int v62; // r9@89
  int v63; // r0@89
  int v64; // r5@90
  int v65; // r7@90
  bool v66; // zf@91
  int v67; // r4@94
  bool v68; // zf@97
  _DWORD *v69; // r0@101
  char **v70; // r0@102
  char *v71; // r1@103
  char *v72; // r0@105
  int v73; // r9@106
  int v74; // r0@106
  int v75; // r5@107
  int v76; // r7@107
  bool v77; // zf@108
  int v78; // r4@111
  bool v79; // zf@114
  _DWORD *v80; // r0@118
  char **v81; // r0@119
  char *v82; // r1@120
  char *v83; // r0@122
  int v84; // r9@123
  int v85; // r0@123
  int v86; // r5@124
  int v87; // r7@124
  bool v88; // zf@125
  int v89; // r4@128
  bool v90; // zf@131
  _DWORD *v91; // r0@135
  char **v92; // r0@136
  char *v93; // r1@137
  char *v94; // r0@139
  int v95; // r9@140
  int v96; // r0@140
  int v97; // r5@141
  int v98; // r7@141
  bool v99; // zf@142
  int v100; // r4@145
  bool v101; // zf@148
  _DWORD *v102; // r0@152
  char **v103; // r0@153
  char *v104; // r1@154
  char *v105; // r0@156
  int v106; // r9@157
  int v107; // r0@157
  int v108; // r5@158
  int v109; // r7@158
  bool v110; // zf@159
  int v111; // r4@162
  bool v112; // zf@165
  _DWORD *v113; // r0@169
  int v114; // r0@170
  int v115; // r9@170
  int v116; // r0@170
  int v117; // r5@171
  int v118; // r7@171
  bool v119; // zf@172
  int v120; // r4@175
  bool v121; // zf@178
  _DWORD *v122; // r0@182
  char **v123; // r0@183
  char *v124; // r1@184
  char *v125; // r0@186
  int v126; // r9@187
  int v127; // r0@187
  int v128; // r5@188
  int v129; // r7@188
  bool v130; // zf@189
  int v131; // r4@192
  bool v132; // zf@195
  _DWORD *v133; // r0@199
  char **v134; // r0@200
  char *v135; // r1@201
  char *v136; // r0@203
  int v137; // r9@204
  int v138; // r0@204
  int v139; // r5@205
  int v140; // r7@205
  bool v141; // zf@206
  int v142; // r4@209
  bool v143; // zf@212
  _DWORD *v144; // r0@216
  int v145; // r0@217
  int v146; // r9@217
  int v147; // r0@217
  int v148; // r5@218
  int v149; // r7@218
  bool v150; // zf@219
  int v151; // r4@222
  bool v152; // zf@225
  _DWORD *v153; // r0@229
  char **v154; // r0@230
  char *v155; // r1@231
  char *v156; // r0@233
  int v157; // r9@234
  int v158; // r0@234
  int v159; // r5@235
  int v160; // r7@235
  bool v161; // zf@236
  int v162; // r4@239
  bool v163; // zf@242
  _DWORD *v164; // r0@246
  char **v165; // r0@247
  char *v166; // r1@248
  char *v167; // r0@250
  int v168; // r9@251
  int v169; // r0@251
  int v170; // r5@252
  int v171; // r7@252
  bool v172; // zf@253
  int v173; // r4@256
  bool v174; // zf@259
  _DWORD *v175; // r0@263
  int v176; // r0@264
  int v177; // r9@264
  int v178; // r0@264
  int v179; // r5@265
  int v180; // r7@265
  bool v181; // zf@266
  int v182; // r4@269
  bool v183; // zf@272
  _DWORD *v184; // r0@276
  char **v185; // r0@277
  char *v186; // r1@278
  char *v187; // r0@280
  int v188; // r9@281
  int v189; // r0@281
  int v190; // r5@282
  int v191; // r7@282
  bool v192; // zf@283
  int v193; // r4@286
  bool v194; // zf@289
  _DWORD *v195; // r0@293
  char **v196; // r0@294
  char *v197; // r1@295
  char *v198; // r0@297
  int v199; // r9@298
  int v200; // r0@298
  int v201; // r5@299
  int v202; // r7@299
  bool v203; // zf@300
  int v204; // r4@303
  bool v205; // zf@306
  _DWORD *v206; // r0@310
  int v207; // r0@311
  char **v208; // r4@311
  char **v209; // r6@311
  unsigned int *v210; // r2@313
  signed int v211; // r1@315
  int *v212; // r0@321
  char **v213; // r4@326
  char **v214; // r6@326
  unsigned int *v215; // r2@328
  signed int v216; // r1@330
  int *v217; // r0@336
  char **v218; // r4@341
  char **v219; // r6@341
  unsigned int *v220; // r2@343
  signed int v221; // r1@345
  int *v222; // r0@351
  char **v223; // r4@356
  char **v224; // r6@356
  unsigned int *v225; // r2@358
  signed int v226; // r1@360
  int *v227; // r0@366
  char **v228; // r4@371
  char **v229; // r6@371
  unsigned int *v230; // r2@373
  signed int v231; // r1@375
  int *v232; // r0@381
  bool v233; // zf@384
  _DWORD *v234; // r0@388
  char **v235; // r0@389
  char *v236; // r1@390
  char *v237; // r0@392
  int v238; // r9@393
  int v239; // r0@393
  int v240; // r5@394
  int v241; // r7@394
  bool v242; // zf@395
  int v243; // r4@398
  bool v244; // zf@401
  _DWORD *v245; // r0@405
  char **v246; // r0@406
  char *v247; // r1@407
  char *v248; // r0@409
  int v249; // r9@410
  int v250; // r0@410
  int v251; // r5@411
  int v252; // r7@411
  bool v253; // zf@412
  int v254; // r4@415
  bool v255; // zf@418
  _DWORD *v256; // r0@422
  char **v257; // r0@423
  char *v258; // r1@424
  char *v259; // r0@426
  int v260; // r9@427
  int v261; // r0@427
  int v262; // r5@428
  int v263; // r7@428
  bool v264; // zf@429
  int v265; // r4@432
  bool v266; // zf@435
  _DWORD *v267; // r0@439
  unsigned __int64 *v268; // r8@440
  int v269; // r0@440
  int v270; // r9@440
  int v271; // r0@440
  int v272; // r5@441
  int v273; // r7@441
  bool v274; // zf@442
  int v275; // r4@445
  bool v276; // zf@448
  _DWORD *v277; // r0@452
  char **v278; // r0@453
  char *v279; // r1@454
  char *v280; // r0@456
  int v281; // r9@457
  int v282; // r0@457
  int v283; // r5@458
  int v284; // r7@458
  bool v285; // zf@459
  int v286; // r4@462
  bool v287; // zf@465
  _DWORD *v288; // r0@469
  int v289; // r0@470
  int v290; // r9@470
  int v291; // r0@470
  int v292; // r5@471
  int v293; // r7@471
  bool v294; // zf@472
  int v295; // r4@475
  bool v296; // zf@478
  _DWORD *v297; // r0@482
  char **v298; // r0@483
  char *v299; // r1@484
  char *v300; // r0@486
  int v301; // r9@487
  int v302; // r0@487
  int v303; // r5@488
  int v304; // r7@488
  bool v305; // zf@489
  int v306; // r4@492
  bool v307; // zf@495
  _DWORD *v308; // r0@499
  int v309; // r0@500
  int v310; // r9@500
  int v311; // r0@500
  int v312; // r5@501
  int v313; // r7@501
  bool v314; // zf@502
  int v315; // r4@505
  bool v316; // zf@508
  _DWORD *v317; // r0@512
  char **v318; // r0@513
  char *v319; // r1@514
  char *v320; // r0@516
  int v321; // r9@517
  int v322; // r0@517
  int v323; // r5@518
  int v324; // r7@518
  bool v325; // zf@519
  int v326; // r4@522
  bool v327; // zf@525
  _DWORD *v328; // r0@529
  int v329; // r0@530
  char **v330; // r4@530
  char **v331; // r6@530
  unsigned int *v332; // r2@532
  signed int v333; // r1@534
  int *v334; // r0@540
  char **v335; // r4@545
  char **v336; // r6@545
  unsigned int *v337; // r2@547
  signed int v338; // r1@549
  int *v339; // r0@555
  char **v340; // r4@560
  char **v341; // r6@560
  unsigned int *v342; // r2@562
  signed int v343; // r1@564
  int *v344; // r0@570
  char **v345; // r6@575
  unsigned int *v346; // r2@577
  signed int v347; // r1@579
  int *v348; // r0@585
  unsigned int *v349; // r2@591
  signed int v350; // r1@593
  unsigned int *v351; // r2@595
  signed int v352; // r1@597
  unsigned int *v353; // r2@599
  signed int v354; // r1@601
  unsigned int *v355; // r2@603
  signed int v356; // r1@605
  unsigned int *v357; // r2@607
  signed int v358; // r1@609
  unsigned int *v359; // r2@611
  signed int v360; // r1@613
  unsigned int *v361; // r2@615
  signed int v362; // r1@617
  unsigned int *v363; // r2@619
  signed int v364; // r1@621
  unsigned int *v365; // r2@623
  signed int v366; // r1@625
  unsigned int *v367; // r2@627
  signed int v368; // r1@629
  unsigned int *v369; // r2@631
  signed int v370; // r1@633
  unsigned int *v371; // r2@635
  signed int v372; // r1@637
  unsigned int *v373; // r2@639
  signed int v374; // r1@641
  unsigned int *v375; // r2@643
  signed int v376; // r1@645
  unsigned int *v377; // r2@647
  signed int v378; // r1@649
  unsigned int *v379; // r2@651
  signed int v380; // r1@653
  unsigned int *v381; // r2@655
  signed int v382; // r1@657
  unsigned int *v383; // r2@659
  signed int v384; // r1@661
  unsigned int *v385; // r2@663
  signed int v386; // r1@665
  unsigned int *v387; // r2@667
  signed int v388; // r1@669
  char *v389; // [sp+0h] [bp-130h]@294
  char v390; // [sp+4h] [bp-12Ch]@295
  char *v391; // [sp+8h] [bp-128h]@277
  char v392; // [sp+Ch] [bp-124h]@278
  char **v393; // [sp+10h] [bp-120h]@264
  char **v394; // [sp+14h] [bp-11Ch]@264
  char **v395; // [sp+18h] [bp-118h]@264
  char *v396; // [sp+1Ch] [bp-114h]@247
  char v397; // [sp+20h] [bp-110h]@248
  char *v398; // [sp+24h] [bp-10Ch]@230
  char v399; // [sp+28h] [bp-108h]@231
  char **v400; // [sp+2Ch] [bp-104h]@217
  char **v401; // [sp+30h] [bp-100h]@217
  char **v402; // [sp+34h] [bp-FCh]@217
  char *v403; // [sp+38h] [bp-F8h]@200
  char v404; // [sp+3Ch] [bp-F4h]@201
  char *v405; // [sp+40h] [bp-F0h]@183
  char v406; // [sp+44h] [bp-ECh]@184
  char **v407; // [sp+48h] [bp-E8h]@170
  char **v408; // [sp+4Ch] [bp-E4h]@170
  char **v409; // [sp+50h] [bp-E0h]@170
  char *v410; // [sp+54h] [bp-DCh]@153
  char v411; // [sp+58h] [bp-D8h]@154
  char *v412; // [sp+5Ch] [bp-D4h]@136
  char v413; // [sp+60h] [bp-D0h]@137
  char *v414; // [sp+64h] [bp-CCh]@119
  char v415; // [sp+68h] [bp-C8h]@120
  char *v416; // [sp+6Ch] [bp-C4h]@102
  char v417; // [sp+70h] [bp-C0h]@103
  char **v418; // [sp+74h] [bp-BCh]@89
  char **v419; // [sp+78h] [bp-B8h]@89
  char **v420; // [sp+7Ch] [bp-B4h]@89
  char *v421; // [sp+80h] [bp-B0h]@72
  char v422; // [sp+84h] [bp-ACh]@73
  char *v423; // [sp+88h] [bp-A8h]@55
  char v424; // [sp+8Ch] [bp-A4h]@56
  char *v425; // [sp+90h] [bp-A0h]@38
  char v426; // [sp+94h] [bp-9Ch]@39
  char *v427; // [sp+98h] [bp-98h]@21
  char v428; // [sp+9Ch] [bp-94h]@22
  char **v429; // [sp+A0h] [bp-90h]@2
  char **v430; // [sp+A4h] [bp-8Ch]@2
  char **v431; // [sp+A8h] [bp-88h]@2
  char *v432; // [sp+ACh] [bp-84h]@513
  char v433; // [sp+B0h] [bp-80h]@514
  char **v434; // [sp+B4h] [bp-7Ch]@500
  char **v435; // [sp+B8h] [bp-78h]@500
  char **v436; // [sp+BCh] [bp-74h]@500
  char *v437; // [sp+C0h] [bp-70h]@483
  char v438; // [sp+C4h] [bp-6Ch]@484
  char **v439; // [sp+C8h] [bp-68h]@470
  char **v440; // [sp+CCh] [bp-64h]@470
  char **v441; // [sp+D0h] [bp-60h]@470
  char *v442; // [sp+D4h] [bp-5Ch]@453
  char v443; // [sp+D8h] [bp-58h]@454
  char **v444; // [sp+DCh] [bp-54h]@440
  char **v445; // [sp+E0h] [bp-50h]@440
  char **v446; // [sp+E4h] [bp-4Ch]@440
  char *v447; // [sp+E8h] [bp-48h]@423
  char v448; // [sp+ECh] [bp-44h]@424
  char *v449; // [sp+F0h] [bp-40h]@406
  char v450; // [sp+F4h] [bp-3Ch]@407
  char *v451; // [sp+F8h] [bp-38h]@389
  char v452; // [sp+FCh] [bp-34h]@390
  char **v453; // [sp+100h] [bp-30h]@10
  char **v454; // [sp+104h] [bp-2Ch]@10
  char **v455; // [sp+108h] [bp-28h]@10

  v1 = this;
  if ( ContainerScreenController::_getInteractionModel(this) )
  {
    v429 = 0;
    v430 = 0;
    v431 = 0;
    v2 = 8u % dword_27DA388;
    v3 = *(int **)(dword_27DA384 + 4 * (8u % dword_27DA388));
    if ( !v3 )
      goto LABEL_20;
    v4 = *v3;
    v5 = *(_DWORD *)(*v3 + 12);
    while ( 1 )
    {
      v6 = v5 == 8;
      if ( v5 == 8 )
        v6 = *(_DWORD *)(v4 + 4) == 8;
      if ( v6 )
        break;
      v7 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 )
      {
        v5 = *(_DWORD *)(v7 + 12);
        v3 = (int *)v4;
        v4 = *(_DWORD *)v4;
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DA388 == v2 )
          continue;
      }
    }
    if ( !v3 || (v14 = *v3) == 0 )
LABEL_20:
      v15 = operator new(0x10u);
      *v15 = 0;
      v15[1] = 8;
      v15[2] = &unk_28898CC;
      v14 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DA384,
              v2,
              8u,
              (int)v15);
    AutoPlaceItem::AutoPlaceItem((int *)&v427, (int *)(v14 + 8), 1);
    v16 = v430;
    if ( v430 == v431 )
      std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::_M_emplace_back_aux<AutoPlaceItem>(
        (unsigned __int64 *)&v429,
        (int)&v427);
      v17 = v427;
    else
      *v430 = v427;
      v17 = (char *)&unk_28898CC;
      v427 = (char *)&unk_28898CC;
      *((_BYTE *)v16 + 4) = v428;
      v430 = v16 + 2;
    v18 = v17 - 12;
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v349 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v350 = __ldrex(v349);
        while ( __strex(v350 - 1, v349) );
      else
        v350 = (*v349)--;
      if ( v350 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v18);
    v19 = 6u % dword_27DA388;
    v20 = *(_DWORD *)(dword_27DA384 + 4 * (6u % dword_27DA388));
    if ( !v20 )
      goto LABEL_37;
    v21 = *(_DWORD *)v20;
    v22 = *(_DWORD *)(*(_DWORD *)v20 + 12);
      v23 = v22 == 6;
      if ( v22 == 6 )
        v23 = *(_DWORD *)(v21 + 4) == 6;
      if ( v23 )
      v24 = *(_DWORD *)v21;
      if ( *(_DWORD *)v21 )
        v22 = *(_DWORD *)(v24 + 12);
        v20 = v21;
        v21 = *(_DWORD *)v21;
        if ( *(_DWORD *)(v24 + 12) % (unsigned int)dword_27DA388 == v19 )
    v25 = v20 == 0;
    if ( v20 )
      v20 = *(_DWORD *)v20;
      v25 = v20 == 0;
    if ( v25 )
LABEL_37:
      v26 = operator new(0x10u);
      *v26 = 0;
      v26[1] = 6;
      v26[2] = &unk_28898CC;
      v20 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v19,
              6u,
              (int)v26);
    AutoPlaceItem::AutoPlaceItem((int *)&v425, (int *)(v20 + 8), 1);
    v27 = v430;
        (int)&v425);
      v28 = v425;
      *v430 = v425;
      v28 = (char *)&unk_28898CC;
      v425 = (char *)&unk_28898CC;
      *((_BYTE *)v27 + 4) = v426;
      v430 = v27 + 2;
    v29 = v28 - 12;
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v351 = (unsigned int *)(v28 - 4);
          v352 = __ldrex(v351);
        while ( __strex(v352 - 1, v351) );
        v352 = (*v351)--;
      if ( v352 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v29);
    v30 = 7u % dword_27DA388;
    v31 = *(_DWORD *)(dword_27DA384 + 4 * (7u % dword_27DA388));
    if ( !v31 )
      goto LABEL_54;
    v32 = *(_DWORD *)v31;
    v33 = *(_DWORD *)(*(_DWORD *)v31 + 12);
      v34 = v33 == 7;
      if ( v33 == 7 )
        v34 = *(_DWORD *)(v32 + 4) == 7;
      if ( v34 )
      v35 = *(_DWORD *)v32;
      if ( *(_DWORD *)v32 )
        v33 = *(_DWORD *)(v35 + 12);
        v31 = v32;
        v32 = *(_DWORD *)v32;
        if ( *(_DWORD *)(v35 + 12) % (unsigned int)dword_27DA388 == v30 )
    v36 = v31 == 0;
    if ( v31 )
      v31 = *(_DWORD *)v31;
      v36 = v31 == 0;
    if ( v36 )
LABEL_54:
      v37 = operator new(0x10u);
      *v37 = 0;
      v37[1] = 7;
      v37[2] = &unk_28898CC;
      v31 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v30,
              7u,
              (int)v37);
    AutoPlaceItem::AutoPlaceItem((int *)&v423, (int *)(v31 + 8), 1);
    v38 = v430;
        (int)&v423);
      v39 = v423;
      *v430 = v423;
      v39 = (char *)&unk_28898CC;
      v423 = (char *)&unk_28898CC;
      *((_BYTE *)v38 + 4) = v424;
      v430 = v38 + 2;
    v40 = v39 - 12;
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v353 = (unsigned int *)(v39 - 4);
          v354 = __ldrex(v353);
        while ( __strex(v354 - 1, v353) );
        v354 = (*v353)--;
      if ( v354 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v40);
    v41 = 0x1Au % dword_27DA388;
    v42 = *(_DWORD *)(dword_27DA384 + 4 * (0x1Au % dword_27DA388));
    if ( !v42 )
      goto LABEL_71;
    v43 = *(_DWORD *)v42;
    v44 = *(_DWORD *)(*(_DWORD *)v42 + 12);
      v45 = v44 == 26;
      if ( v44 == 26 )
        v45 = *(_DWORD *)(v43 + 4) == 26;
      if ( v45 )
      v46 = *(_DWORD *)v43;
      if ( *(_DWORD *)v43 )
        v44 = *(_DWORD *)(v46 + 12);
        v42 = v43;
        v43 = *(_DWORD *)v43;
        if ( *(_DWORD *)(v46 + 12) % (unsigned int)dword_27DA388 == v41 )
    v47 = v42 == 0;
    if ( v42 )
      v42 = *(_DWORD *)v42;
      v47 = v42 == 0;
    if ( v47 )
LABEL_71:
      v48 = operator new(0x10u);
      *v48 = 0;
      v48[1] = 26;
      v48[2] = &unk_28898CC;
      v42 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v41,
              0x1Au,
              (int)v48);
    AutoPlaceItem::AutoPlaceItem((int *)&v421, (int *)(v42 + 8), 0);
    v49 = v430;
        (int)&v421);
      v50 = v421;
      *v430 = v421;
      v50 = (char *)&unk_28898CC;
      v421 = (char *)&unk_28898CC;
      *((_BYTE *)v49 + 4) = v422;
      v430 = v49 + 2;
    v51 = v50 - 12;
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v355 = (unsigned int *)(v50 - 4);
          v356 = __ldrex(v355);
        while ( __strex(v356 - 1, v355) );
        v356 = (*v355)--;
      if ( v356 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v51);
    v52 = 0x18u % dword_27DA388;
    v53 = *(_DWORD *)(dword_27DA384 + 4 * (0x18u % dword_27DA388));
    if ( !v53 )
      goto LABEL_88;
    v54 = *(_DWORD *)v53;
    v55 = *(_DWORD *)(*(_DWORD *)v53 + 12);
      v56 = v55 == 24;
      if ( v55 == 24 )
        v56 = *(_DWORD *)(v54 + 4) == 24;
      if ( v56 )
      v57 = *(_DWORD *)v54;
      if ( *(_DWORD *)v54 )
        v55 = *(_DWORD *)(v57 + 12);
        v53 = v54;
        v54 = *(_DWORD *)v54;
        if ( *(_DWORD *)(v57 + 12) % (unsigned int)dword_27DA388 == v52 )
    v58 = v53 == 0;
    if ( v53 )
      v53 = *(_DWORD *)v53;
      v58 = v53 == 0;
    if ( v58 )
LABEL_88:
      v59 = operator new(0x10u);
      *v59 = 0;
      v59[1] = 24;
      v59[2] = &unk_28898CC;
      v53 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v52,
              0x18u,
              (int)v59);
    v60 = (unsigned __int64 *)((char *)v1 + 600);
    v61 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v60,
            (int **)(v53 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v61, (unsigned __int64 *)&v429);
    v418 = 0;
    v419 = 0;
    v420 = 0;
    v62 = 8u % dword_27DA388;
    v63 = *(_DWORD *)(dword_27DA384 + 4 * (8u % dword_27DA388));
    if ( !v63 )
      goto LABEL_101;
    v64 = *(_DWORD *)v63;
    v65 = *(_DWORD *)(*(_DWORD *)v63 + 12);
      v66 = v65 == 8;
      if ( v65 == 8 )
        v66 = *(_DWORD *)(v64 + 4) == 8;
      if ( v66 )
      v67 = *(_DWORD *)v64;
      if ( *(_DWORD *)v64 )
        v65 = *(_DWORD *)(v67 + 12);
        v63 = v64;
        v64 = *(_DWORD *)v64;
        if ( *(_DWORD *)(v67 + 12) % (unsigned int)dword_27DA388 == v62 )
    v68 = v63 == 0;
    if ( v63 )
      v63 = *(_DWORD *)v63;
      v68 = v63 == 0;
    if ( v68 )
LABEL_101:
      v69 = operator new(0x10u);
      *v69 = 0;
      v69[1] = 8;
      v69[2] = &unk_28898CC;
      v63 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v62,
              (int)v69);
    AutoPlaceItem::AutoPlaceItem((int *)&v416, (int *)(v63 + 8), 1);
    v70 = v419;
    if ( v419 == v420 )
        (unsigned __int64 *)&v418,
        (int)&v416);
      v71 = v416;
      *v419 = v416;
      v71 = (char *)&unk_28898CC;
      v416 = (char *)&unk_28898CC;
      *((_BYTE *)v70 + 4) = v417;
      v419 = v70 + 2;
    v72 = v71 - 12;
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v357 = (unsigned int *)(v71 - 4);
          v358 = __ldrex(v357);
        while ( __strex(v358 - 1, v357) );
        v358 = (*v357)--;
      if ( v358 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v72);
    v73 = 6u % dword_27DA388;
    v74 = *(_DWORD *)(dword_27DA384 + 4 * (6u % dword_27DA388));
    if ( !v74 )
      goto LABEL_118;
    v75 = *(_DWORD *)v74;
    v76 = *(_DWORD *)(*(_DWORD *)v74 + 12);
      v77 = v76 == 6;
      if ( v76 == 6 )
        v77 = *(_DWORD *)(v75 + 4) == 6;
      if ( v77 )
      v78 = *(_DWORD *)v75;
      if ( *(_DWORD *)v75 )
        v76 = *(_DWORD *)(v78 + 12);
        v74 = v75;
        v75 = *(_DWORD *)v75;
        if ( *(_DWORD *)(v78 + 12) % (unsigned int)dword_27DA388 == v73 )
    v79 = v74 == 0;
    if ( v74 )
      v74 = *(_DWORD *)v74;
      v79 = v74 == 0;
    if ( v79 )
LABEL_118:
      v80 = operator new(0x10u);
      *v80 = 0;
      v80[1] = 6;
      v80[2] = &unk_28898CC;
      v74 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v73,
              (int)v80);
    AutoPlaceItem::AutoPlaceItem((int *)&v414, (int *)(v74 + 8), 1);
    v81 = v419;
        (int)&v414);
      v82 = v414;
      *v419 = v414;
      v82 = (char *)&unk_28898CC;
      v414 = (char *)&unk_28898CC;
      *((_BYTE *)v81 + 4) = v415;
      v419 = v81 + 2;
    v83 = v82 - 12;
    if ( (int *)(v82 - 12) != &dword_28898C0 )
      v359 = (unsigned int *)(v82 - 4);
          v360 = __ldrex(v359);
        while ( __strex(v360 - 1, v359) );
        v360 = (*v359)--;
      if ( v360 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v83);
    v84 = 7u % dword_27DA388;
    v85 = *(_DWORD *)(dword_27DA384 + 4 * (7u % dword_27DA388));
    if ( !v85 )
      goto LABEL_135;
    v86 = *(_DWORD *)v85;
    v87 = *(_DWORD *)(*(_DWORD *)v85 + 12);
      v88 = v87 == 7;
      if ( v87 == 7 )
        v88 = *(_DWORD *)(v86 + 4) == 7;
      if ( v88 )
      v89 = *(_DWORD *)v86;
      if ( *(_DWORD *)v86 )
        v87 = *(_DWORD *)(v89 + 12);
        v85 = v86;
        v86 = *(_DWORD *)v86;
        if ( *(_DWORD *)(v89 + 12) % (unsigned int)dword_27DA388 == v84 )
    v90 = v85 == 0;
    if ( v85 )
      v85 = *(_DWORD *)v85;
      v90 = v85 == 0;
    if ( v90 )
LABEL_135:
      v91 = operator new(0x10u);
      *v91 = 0;
      v91[1] = 7;
      v91[2] = &unk_28898CC;
      v85 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v84,
              (int)v91);
    AutoPlaceItem::AutoPlaceItem((int *)&v412, (int *)(v85 + 8), 1);
    v92 = v419;
        (int)&v412);
      v93 = v412;
      *v419 = v412;
      v93 = (char *)&unk_28898CC;
      v412 = (char *)&unk_28898CC;
      *((_BYTE *)v92 + 4) = v413;
      v419 = v92 + 2;
    v94 = v93 - 12;
    if ( (int *)(v93 - 12) != &dword_28898C0 )
      v361 = (unsigned int *)(v93 - 4);
          v362 = __ldrex(v361);
        while ( __strex(v362 - 1, v361) );
        v362 = (*v361)--;
      if ( v362 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v94);
    v95 = 0x18u % dword_27DA388;
    v96 = *(_DWORD *)(dword_27DA384 + 4 * (0x18u % dword_27DA388));
    if ( !v96 )
      goto LABEL_152;
    v97 = *(_DWORD *)v96;
    v98 = *(_DWORD *)(*(_DWORD *)v96 + 12);
      v99 = v98 == 24;
      if ( v98 == 24 )
        v99 = *(_DWORD *)(v97 + 4) == 24;
      if ( v99 )
      v100 = *(_DWORD *)v97;
      if ( *(_DWORD *)v97 )
        v98 = *(_DWORD *)(v100 + 12);
        v96 = v97;
        v97 = *(_DWORD *)v97;
        if ( *(_DWORD *)(v100 + 12) % (unsigned int)dword_27DA388 == v95 )
    v101 = v96 == 0;
    if ( v96 )
      v96 = *(_DWORD *)v96;
      v101 = v96 == 0;
    if ( v101 )
LABEL_152:
      v102 = operator new(0x10u);
      *v102 = 0;
      v102[1] = 24;
      v102[2] = &unk_28898CC;
      v96 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v95,
              (int)v102);
    AutoPlaceItem::AutoPlaceItem((int *)&v410, (int *)(v96 + 8), 0);
    v103 = v419;
        (int)&v410);
      v104 = v410;
      *v419 = v410;
      v104 = (char *)&unk_28898CC;
      v410 = (char *)&unk_28898CC;
      *((_BYTE *)v103 + 4) = v411;
      v419 = v103 + 2;
    v105 = v104 - 12;
    if ( (int *)(v104 - 12) != &dword_28898C0 )
      v363 = (unsigned int *)(v104 - 4);
          v364 = __ldrex(v363);
        while ( __strex(v364 - 1, v363) );
        v364 = (*v363)--;
      if ( v364 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v105);
    v106 = 0x1Au % dword_27DA388;
    v107 = *(_DWORD *)(dword_27DA384 + 4 * (0x1Au % dword_27DA388));
    if ( !v107 )
      goto LABEL_169;
    v108 = *(_DWORD *)v107;
    v109 = *(_DWORD *)(*(_DWORD *)v107 + 12);
      v110 = v109 == 26;
      if ( v109 == 26 )
        v110 = *(_DWORD *)(v108 + 4) == 26;
      if ( v110 )
      v111 = *(_DWORD *)v108;
      if ( *(_DWORD *)v108 )
        v109 = *(_DWORD *)(v111 + 12);
        v107 = v108;
        v108 = *(_DWORD *)v108;
        if ( *(_DWORD *)(v111 + 12) % (unsigned int)dword_27DA388 == v106 )
    v112 = v107 == 0;
    if ( v107 )
      v107 = *(_DWORD *)v107;
      v112 = v107 == 0;
    if ( v112 )
LABEL_169:
      v113 = operator new(0x10u);
      *v113 = 0;
      v113[1] = 26;
      v113[2] = &unk_28898CC;
      v107 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               (int)&dword_27DA384,
               v106,
               0x1Au,
               (int)v113);
    v114 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v60,
             (int **)(v107 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v114, (unsigned __int64 *)&v418);
    v407 = 0;
    v408 = 0;
    v409 = 0;
    v115 = 0x18u % dword_27DA388;
    v116 = *(_DWORD *)(dword_27DA384 + 4 * (0x18u % dword_27DA388));
    if ( !v116 )
      goto LABEL_182;
    v117 = *(_DWORD *)v116;
    v118 = *(_DWORD *)(*(_DWORD *)v116 + 12);
      v119 = v118 == 24;
      if ( v118 == 24 )
        v119 = *(_DWORD *)(v117 + 4) == 24;
      if ( v119 )
      v120 = *(_DWORD *)v117;
      if ( *(_DWORD *)v117 )
        v118 = *(_DWORD *)(v120 + 12);
        v116 = v117;
        v117 = *(_DWORD *)v117;
        if ( *(_DWORD *)(v120 + 12) % (unsigned int)dword_27DA388 == v115 )
    v121 = v116 == 0;
    if ( v116 )
      v116 = *(_DWORD *)v116;
      v121 = v116 == 0;
    if ( v121 )
LABEL_182:
      v122 = operator new(0x10u);
      *v122 = 0;
      v122[1] = 24;
      v122[2] = &unk_28898CC;
      v116 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v115,
               0x18u,
               (int)v122);
    AutoPlaceItem::AutoPlaceItem((int *)&v405, (int *)(v116 + 8), 0);
    v123 = v408;
    if ( v408 == v409 )
        (unsigned __int64 *)&v407,
        (int)&v405);
      v124 = v405;
      *v408 = v405;
      v124 = (char *)&unk_28898CC;
      v405 = (char *)&unk_28898CC;
      *((_BYTE *)v123 + 4) = v406;
      v408 = v123 + 2;
    v125 = v124 - 12;
    if ( (int *)(v124 - 12) != &dword_28898C0 )
      v365 = (unsigned int *)(v124 - 4);
          v366 = __ldrex(v365);
        while ( __strex(v366 - 1, v365) );
        v366 = (*v365)--;
      if ( v366 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v125);
    v126 = 0x1Au % dword_27DA388;
    v127 = *(_DWORD *)(dword_27DA384 + 4 * (0x1Au % dword_27DA388));
    if ( !v127 )
      goto LABEL_199;
    v128 = *(_DWORD *)v127;
    v129 = *(_DWORD *)(*(_DWORD *)v127 + 12);
      v130 = v129 == 26;
      if ( v129 == 26 )
        v130 = *(_DWORD *)(v128 + 4) == 26;
      if ( v130 )
      v131 = *(_DWORD *)v128;
      if ( *(_DWORD *)v128 )
        v129 = *(_DWORD *)(v131 + 12);
        v127 = v128;
        v128 = *(_DWORD *)v128;
        if ( *(_DWORD *)(v131 + 12) % (unsigned int)dword_27DA388 == v126 )
    v132 = v127 == 0;
    if ( v127 )
      v127 = *(_DWORD *)v127;
      v132 = v127 == 0;
    if ( v132 )
LABEL_199:
      v133 = operator new(0x10u);
      *v133 = 0;
      v133[1] = 26;
      v133[2] = &unk_28898CC;
      v127 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v126,
               (int)v133);
    AutoPlaceItem::AutoPlaceItem((int *)&v403, (int *)(v127 + 8), 0);
    v134 = v408;
        (int)&v403);
      v135 = v403;
      *v408 = v403;
      v135 = (char *)&unk_28898CC;
      v403 = (char *)&unk_28898CC;
      *((_BYTE *)v134 + 4) = v404;
      v408 = v134 + 2;
    v136 = v135 - 12;
    if ( (int *)(v135 - 12) != &dword_28898C0 )
      v367 = (unsigned int *)(v135 - 4);
          v368 = __ldrex(v367);
        while ( __strex(v368 - 1, v367) );
        v368 = (*v367)--;
      if ( v368 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v136);
    v137 = 7u % dword_27DA388;
    v138 = *(_DWORD *)(dword_27DA384 + 4 * (7u % dword_27DA388));
    if ( !v138 )
      goto LABEL_216;
    v139 = *(_DWORD *)v138;
    v140 = *(_DWORD *)(*(_DWORD *)v138 + 12);
      v141 = v140 == 7;
      if ( v140 == 7 )
        v141 = *(_DWORD *)(v139 + 4) == 7;
      if ( v141 )
      v142 = *(_DWORD *)v139;
      if ( *(_DWORD *)v139 )
        v140 = *(_DWORD *)(v142 + 12);
        v138 = v139;
        v139 = *(_DWORD *)v139;
        if ( *(_DWORD *)(v142 + 12) % (unsigned int)dword_27DA388 == v137 )
    v143 = v138 == 0;
    if ( v138 )
      v138 = *(_DWORD *)v138;
      v143 = v138 == 0;
    if ( v143 )
LABEL_216:
      v144 = operator new(0x10u);
      *v144 = 0;
      v144[1] = 7;
      v144[2] = &unk_28898CC;
      v138 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v137,
               7u,
               (int)v144);
    v145 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v138 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v145, (unsigned __int64 *)&v407);
    v400 = 0;
    v401 = 0;
    v402 = 0;
    v146 = 0x1Au % dword_27DA388;
    v147 = *(_DWORD *)(dword_27DA384 + 4 * (0x1Au % dword_27DA388));
    if ( !v147 )
      goto LABEL_229;
    v148 = *(_DWORD *)v147;
    v149 = *(_DWORD *)(*(_DWORD *)v147 + 12);
      v150 = v149 == 26;
      if ( v149 == 26 )
        v150 = *(_DWORD *)(v148 + 4) == 26;
      if ( v150 )
      v151 = *(_DWORD *)v148;
      if ( *(_DWORD *)v148 )
        v149 = *(_DWORD *)(v151 + 12);
        v147 = v148;
        v148 = *(_DWORD *)v148;
        if ( *(_DWORD *)(v151 + 12) % (unsigned int)dword_27DA388 == v146 )
    v152 = v147 == 0;
    if ( v147 )
      v147 = *(_DWORD *)v147;
      v152 = v147 == 0;
    if ( v152 )
LABEL_229:
      v153 = operator new(0x10u);
      *v153 = 0;
      v153[1] = 26;
      v153[2] = &unk_28898CC;
      v147 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v146,
               (int)v153);
    AutoPlaceItem::AutoPlaceItem((int *)&v398, (int *)(v147 + 8), 0);
    v154 = v401;
    if ( v401 == v402 )
        (unsigned __int64 *)&v400,
        (int)&v398);
      v155 = v398;
      *v401 = v398;
      v155 = (char *)&unk_28898CC;
      v398 = (char *)&unk_28898CC;
      *((_BYTE *)v154 + 4) = v399;
      v401 = v154 + 2;
    v156 = v155 - 12;
    if ( (int *)(v155 - 12) != &dword_28898C0 )
      v369 = (unsigned int *)(v155 - 4);
          v370 = __ldrex(v369);
        while ( __strex(v370 - 1, v369) );
        v370 = (*v369)--;
      if ( v370 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v156);
    v157 = 0x18u % dword_27DA388;
    v158 = *(_DWORD *)(dword_27DA384 + 4 * (0x18u % dword_27DA388));
    if ( !v158 )
      goto LABEL_246;
    v159 = *(_DWORD *)v158;
    v160 = *(_DWORD *)(*(_DWORD *)v158 + 12);
      v161 = v160 == 24;
      if ( v160 == 24 )
        v161 = *(_DWORD *)(v159 + 4) == 24;
      if ( v161 )
      v162 = *(_DWORD *)v159;
      if ( *(_DWORD *)v159 )
        v160 = *(_DWORD *)(v162 + 12);
        v158 = v159;
        v159 = *(_DWORD *)v159;
        if ( *(_DWORD *)(v162 + 12) % (unsigned int)dword_27DA388 == v157 )
    v163 = v158 == 0;
    if ( v158 )
      v158 = *(_DWORD *)v158;
      v163 = v158 == 0;
    if ( v163 )
LABEL_246:
      v164 = operator new(0x10u);
      *v164 = 0;
      v164[1] = 24;
      v164[2] = &unk_28898CC;
      v158 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v157,
               (int)v164);
    AutoPlaceItem::AutoPlaceItem((int *)&v396, (int *)(v158 + 8), 0);
    v165 = v401;
        (int)&v396);
      v166 = v396;
      *v401 = v396;
      v166 = (char *)&unk_28898CC;
      v396 = (char *)&unk_28898CC;
      *((_BYTE *)v165 + 4) = v397;
      v401 = v165 + 2;
    v167 = v166 - 12;
    if ( (int *)(v166 - 12) != &dword_28898C0 )
      v371 = (unsigned int *)(v166 - 4);
          v372 = __ldrex(v371);
        while ( __strex(v372 - 1, v371) );
        v372 = (*v371)--;
      if ( v372 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v167);
    v168 = 6u % dword_27DA388;
    v169 = *(_DWORD *)(dword_27DA384 + 4 * (6u % dword_27DA388));
    if ( !v169 )
      goto LABEL_263;
    v170 = *(_DWORD *)v169;
    v171 = *(_DWORD *)(*(_DWORD *)v169 + 12);
      v172 = v171 == 6;
      if ( v171 == 6 )
        v172 = *(_DWORD *)(v170 + 4) == 6;
      if ( v172 )
      v173 = *(_DWORD *)v170;
      if ( *(_DWORD *)v170 )
        v171 = *(_DWORD *)(v173 + 12);
        v169 = v170;
        v170 = *(_DWORD *)v170;
        if ( *(_DWORD *)(v173 + 12) % (unsigned int)dword_27DA388 == v168 )
    v174 = v169 == 0;
    if ( v169 )
      v169 = *(_DWORD *)v169;
      v174 = v169 == 0;
    if ( v174 )
LABEL_263:
      v175 = operator new(0x10u);
      *v175 = 0;
      v175[1] = 6;
      v175[2] = &unk_28898CC;
      v169 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v168,
               6u,
               (int)v175);
    v176 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v169 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v176, (unsigned __int64 *)&v400);
    v393 = 0;
    v394 = 0;
    v395 = 0;
    v177 = 0x1Au % dword_27DA388;
    v178 = *(_DWORD *)(dword_27DA384 + 4 * (0x1Au % dword_27DA388));
    if ( !v178 )
      goto LABEL_276;
    v179 = *(_DWORD *)v178;
    v180 = *(_DWORD *)(*(_DWORD *)v178 + 12);
      v181 = v180 == 26;
      if ( v180 == 26 )
        v181 = *(_DWORD *)(v179 + 4) == 26;
      if ( v181 )
      v182 = *(_DWORD *)v179;
      if ( *(_DWORD *)v179 )
        v180 = *(_DWORD *)(v182 + 12);
        v178 = v179;
        v179 = *(_DWORD *)v179;
        if ( *(_DWORD *)(v182 + 12) % (unsigned int)dword_27DA388 == v177 )
    v183 = v178 == 0;
    if ( v178 )
      v178 = *(_DWORD *)v178;
      v183 = v178 == 0;
    if ( v183 )
LABEL_276:
      v184 = operator new(0x10u);
      *v184 = 0;
      v184[1] = 26;
      v184[2] = &unk_28898CC;
      v178 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v177,
               (int)v184);
    AutoPlaceItem::AutoPlaceItem((int *)&v391, (int *)(v178 + 8), 0);
    v185 = v394;
    if ( v394 == v395 )
        (unsigned __int64 *)&v393,
        (int)&v391);
      v186 = v391;
      *v394 = v391;
      v186 = (char *)&unk_28898CC;
      v391 = (char *)&unk_28898CC;
      *((_BYTE *)v185 + 4) = v392;
      v394 = v185 + 2;
    v187 = v186 - 12;
    if ( (int *)(v186 - 12) != &dword_28898C0 )
      v373 = (unsigned int *)(v186 - 4);
          v374 = __ldrex(v373);
        while ( __strex(v374 - 1, v373) );
        v374 = (*v373)--;
      if ( v374 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v187);
    v188 = 0x18u % dword_27DA388;
    v189 = *(_DWORD *)(dword_27DA384 + 4 * (0x18u % dword_27DA388));
    if ( !v189 )
      goto LABEL_293;
    v190 = *(_DWORD *)v189;
    v191 = *(_DWORD *)(*(_DWORD *)v189 + 12);
      v192 = v191 == 24;
      if ( v191 == 24 )
        v192 = *(_DWORD *)(v190 + 4) == 24;
      if ( v192 )
      v193 = *(_DWORD *)v190;
      if ( *(_DWORD *)v190 )
        v191 = *(_DWORD *)(v193 + 12);
        v189 = v190;
        v190 = *(_DWORD *)v190;
        if ( *(_DWORD *)(v193 + 12) % (unsigned int)dword_27DA388 == v188 )
    v194 = v189 == 0;
    if ( v189 )
      v189 = *(_DWORD *)v189;
      v194 = v189 == 0;
    if ( v194 )
LABEL_293:
      v195 = operator new(0x10u);
      *v195 = 0;
      v195[1] = 24;
      v195[2] = &unk_28898CC;
      v189 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v188,
               (int)v195);
    AutoPlaceItem::AutoPlaceItem((int *)&v389, (int *)(v189 + 8), 0);
    v196 = v394;
        (int)&v389);
      v197 = v389;
      *v394 = v389;
      v197 = (char *)&unk_28898CC;
      v389 = (char *)&unk_28898CC;
      *((_BYTE *)v196 + 4) = v390;
      v394 = v196 + 2;
    v198 = v197 - 12;
    if ( (int *)(v197 - 12) != &dword_28898C0 )
      v375 = (unsigned int *)(v197 - 4);
          v376 = __ldrex(v375);
        while ( __strex(v376 - 1, v375) );
        v376 = (*v375)--;
      if ( v376 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v198);
    v199 = 8u % dword_27DA388;
    v200 = *(_DWORD *)(dword_27DA384 + 4 * (8u % dword_27DA388));
    if ( !v200 )
      goto LABEL_310;
    v201 = *(_DWORD *)v200;
    v202 = *(_DWORD *)(*(_DWORD *)v200 + 12);
      v203 = v202 == 8;
      if ( v202 == 8 )
        v203 = *(_DWORD *)(v201 + 4) == 8;
      if ( v203 )
      v204 = *(_DWORD *)v201;
      if ( *(_DWORD *)v201 )
        v202 = *(_DWORD *)(v204 + 12);
        v200 = v201;
        v201 = *(_DWORD *)v201;
        if ( *(_DWORD *)(v204 + 12) % (unsigned int)dword_27DA388 == v199 )
    v205 = v200 == 0;
    if ( v200 )
      v200 = *(_DWORD *)v200;
      v205 = v200 == 0;
    if ( v205 )
LABEL_310:
      v206 = operator new(0x10u);
      *v206 = 0;
      v206[1] = 8;
      v206[2] = &unk_28898CC;
      v200 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v199,
               8u,
               (int)v206);
    v207 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v200 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v207, (unsigned __int64 *)&v393);
    v209 = v394;
    v208 = v393;
    if ( v393 != v394 )
      do
        v212 = (int *)(*v208 - 12);
        if ( v212 != &dword_28898C0 )
        {
          v210 = (unsigned int *)(*v208 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v211 = __ldrex(v210);
            while ( __strex(v211 - 1, v210) );
          }
          else
            v211 = (*v210)--;
          if ( v211 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v212);
        }
        v208 += 2;
      while ( v208 != v209 );
      v208 = v393;
    if ( v208 )
      operator delete(v208);
    v214 = v401;
    v213 = v400;
    if ( v400 != v401 )
        v217 = (int *)(*v213 - 12);
        if ( v217 != &dword_28898C0 )
          v215 = (unsigned int *)(*v213 - 4);
              v216 = __ldrex(v215);
            while ( __strex(v216 - 1, v215) );
            v216 = (*v215)--;
          if ( v216 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v217);
        v213 += 2;
      while ( v213 != v214 );
      v213 = v400;
    if ( v213 )
      operator delete(v213);
    v219 = v408;
    v218 = v407;
    if ( v407 != v408 )
        v222 = (int *)(*v218 - 12);
        if ( v222 != &dword_28898C0 )
          v220 = (unsigned int *)(*v218 - 4);
              v221 = __ldrex(v220);
            while ( __strex(v221 - 1, v220) );
            v221 = (*v220)--;
          if ( v221 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v222);
        v218 += 2;
      while ( v218 != v219 );
      v218 = v407;
    if ( v218 )
      operator delete(v218);
    v224 = v419;
    v223 = v418;
    if ( v418 != v419 )
        v227 = (int *)(*v223 - 12);
        if ( v227 != &dword_28898C0 )
          v225 = (unsigned int *)(*v223 - 4);
              v226 = __ldrex(v225);
            while ( __strex(v226 - 1, v225) );
            v226 = (*v225)--;
          if ( v226 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v227);
        v223 += 2;
      while ( v223 != v224 );
      v223 = v418;
    if ( v223 )
      operator delete(v223);
    v229 = v430;
    v228 = v429;
    if ( v429 != v430 )
        v232 = (int *)(*v228 - 12);
        if ( v232 != &dword_28898C0 )
          v230 = (unsigned int *)(*v228 - 4);
              v231 = __ldrex(v230);
            while ( __strex(v231 - 1, v230) );
            v231 = (*v230)--;
          if ( v231 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v232);
        v228 += 2;
      while ( v228 != v229 );
      v228 = v429;
  }
  else
    v453 = 0;
    v454 = 0;
    v455 = 0;
    v8 = 8u % dword_27DA388;
    v9 = *(_DWORD *)(dword_27DA384 + 4 * (8u % dword_27DA388));
    if ( !v9 )
      goto LABEL_388;
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
      v12 = v11 == 8;
      if ( v11 == 8 )
        v12 = *(_DWORD *)(v10 + 4) == 8;
      if ( v12 )
      v13 = *(_DWORD *)v10;
      if ( *(_DWORD *)v10 )
        v11 = *(_DWORD *)(v13 + 12);
        v9 = v10;
        v10 = *(_DWORD *)v10;
        if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27DA388 == v8 )
    v233 = v9 == 0;
    if ( v9 )
      v9 = *(_DWORD *)v9;
      v233 = v9 == 0;
    if ( v233 )
LABEL_388:
      v234 = operator new(0x10u);
      *v234 = 0;
      v234[1] = 8;
      v234[2] = &unk_28898CC;
      v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DA384,
             v8,
             8u,
             (int)v234);
    AutoPlaceItem::AutoPlaceItem((int *)&v451, (int *)(v9 + 8), 1);
    v235 = v454;
    if ( v454 == v455 )
        (unsigned __int64 *)&v453,
        (int)&v451);
      v236 = v451;
      *v454 = v451;
      v236 = (char *)&unk_28898CC;
      v451 = (char *)&unk_28898CC;
      *((_BYTE *)v235 + 4) = v452;
      v454 = v235 + 2;
    v237 = v236 - 12;
    if ( (int *)(v236 - 12) != &dword_28898C0 )
      v377 = (unsigned int *)(v236 - 4);
          v378 = __ldrex(v377);
        while ( __strex(v378 - 1, v377) );
        v378 = (*v377)--;
      if ( v378 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v237);
    v238 = 6u % dword_27DA388;
    v239 = *(_DWORD *)(dword_27DA384 + 4 * (6u % dword_27DA388));
    if ( !v239 )
      goto LABEL_405;
    v240 = *(_DWORD *)v239;
    v241 = *(_DWORD *)(*(_DWORD *)v239 + 12);
      v242 = v241 == 6;
      if ( v241 == 6 )
        v242 = *(_DWORD *)(v240 + 4) == 6;
      if ( v242 )
      v243 = *(_DWORD *)v240;
      if ( *(_DWORD *)v240 )
        v241 = *(_DWORD *)(v243 + 12);
        v239 = v240;
        v240 = *(_DWORD *)v240;
        if ( *(_DWORD *)(v243 + 12) % (unsigned int)dword_27DA388 == v238 )
    v244 = v239 == 0;
    if ( v239 )
      v239 = *(_DWORD *)v239;
      v244 = v239 == 0;
    if ( v244 )
LABEL_405:
      v245 = operator new(0x10u);
      *v245 = 0;
      v245[1] = 6;
      v245[2] = &unk_28898CC;
      v239 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v238,
               (int)v245);
    AutoPlaceItem::AutoPlaceItem((int *)&v449, (int *)(v239 + 8), 1);
    v246 = v454;
        (int)&v449);
      v247 = v449;
      *v454 = v449;
      v247 = (char *)&unk_28898CC;
      v449 = (char *)&unk_28898CC;
      *((_BYTE *)v246 + 4) = v450;
      v454 = v246 + 2;
    v248 = v247 - 12;
    if ( (int *)(v247 - 12) != &dword_28898C0 )
      v379 = (unsigned int *)(v247 - 4);
          v380 = __ldrex(v379);
        while ( __strex(v380 - 1, v379) );
        v380 = (*v379)--;
      if ( v380 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v248);
    v249 = 7u % dword_27DA388;
    v250 = *(_DWORD *)(dword_27DA384 + 4 * (7u % dword_27DA388));
    if ( !v250 )
      goto LABEL_422;
    v251 = *(_DWORD *)v250;
    v252 = *(_DWORD *)(*(_DWORD *)v250 + 12);
      v253 = v252 == 7;
      if ( v252 == 7 )
        v253 = *(_DWORD *)(v251 + 4) == 7;
      if ( v253 )
      v254 = *(_DWORD *)v251;
      if ( *(_DWORD *)v251 )
        v252 = *(_DWORD *)(v254 + 12);
        v250 = v251;
        v251 = *(_DWORD *)v251;
        if ( *(_DWORD *)(v254 + 12) % (unsigned int)dword_27DA388 == v249 )
    v255 = v250 == 0;
    if ( v250 )
      v250 = *(_DWORD *)v250;
      v255 = v250 == 0;
    if ( v255 )
LABEL_422:
      v256 = operator new(0x10u);
      *v256 = 0;
      v256[1] = 7;
      v256[2] = &unk_28898CC;
      v250 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v249,
               (int)v256);
    AutoPlaceItem::AutoPlaceItem((int *)&v447, (int *)(v250 + 8), 1);
    v257 = v454;
        (int)&v447);
      v258 = v447;
      *v454 = v447;
      v258 = (char *)&unk_28898CC;
      v447 = (char *)&unk_28898CC;
      *((_BYTE *)v257 + 4) = v448;
      v454 = v257 + 2;
    v259 = v258 - 12;
    if ( (int *)(v258 - 12) != &dword_28898C0 )
      v381 = (unsigned int *)(v258 - 4);
          v382 = __ldrex(v381);
        while ( __strex(v382 - 1, v381) );
        v382 = (*v381)--;
      if ( v382 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v259);
    v260 = 9u % dword_27DA388;
    v261 = *(_DWORD *)(dword_27DA384 + 4 * (9u % dword_27DA388));
    if ( !v261 )
      goto LABEL_439;
    v262 = *(_DWORD *)v261;
    v263 = *(_DWORD *)(*(_DWORD *)v261 + 12);
      v264 = v263 == 9;
      if ( v263 == 9 )
        v264 = *(_DWORD *)(v262 + 4) == 9;
      if ( v264 )
      v265 = *(_DWORD *)v262;
      if ( *(_DWORD *)v262 )
        v263 = *(_DWORD *)(v265 + 12);
        v261 = v262;
        v262 = *(_DWORD *)v262;
        if ( *(_DWORD *)(v265 + 12) % (unsigned int)dword_27DA388 == v260 )
    v266 = v261 == 0;
    if ( v261 )
      v261 = *(_DWORD *)v261;
      v266 = v261 == 0;
    if ( v266 )
LABEL_439:
      v267 = operator new(0x10u);
      *v267 = 0;
      v267[1] = 9;
      v267[2] = &unk_28898CC;
      v261 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v260,
               9u,
               (int)v267);
    v268 = (unsigned __int64 *)((char *)v1 + 600);
    v269 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v268,
             (int **)(v261 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v269, (unsigned __int64 *)&v453);
    v444 = 0;
    v445 = 0;
    v446 = 0;
    v270 = 9u % dword_27DA388;
    v271 = *(_DWORD *)(dword_27DA384 + 4 * (9u % dword_27DA388));
    if ( !v271 )
      goto LABEL_452;
    v272 = *(_DWORD *)v271;
    v273 = *(_DWORD *)(*(_DWORD *)v271 + 12);
      v274 = v273 == 9;
      if ( v273 == 9 )
        v274 = *(_DWORD *)(v272 + 4) == 9;
      if ( v274 )
      v275 = *(_DWORD *)v272;
      if ( *(_DWORD *)v272 )
        v273 = *(_DWORD *)(v275 + 12);
        v271 = v272;
        v272 = *(_DWORD *)v272;
        if ( *(_DWORD *)(v275 + 12) % (unsigned int)dword_27DA388 == v270 )
    v276 = v271 == 0;
    if ( v271 )
      v271 = *(_DWORD *)v271;
      v276 = v271 == 0;
    if ( v276 )
LABEL_452:
      v277 = operator new(0x10u);
      *v277 = 0;
      v277[1] = 9;
      v277[2] = &unk_28898CC;
      v271 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v270,
               (int)v277);
    AutoPlaceItem::AutoPlaceItem((int *)&v442, (int *)(v271 + 8), 0);
    v278 = v445;
    if ( v445 == v446 )
        (unsigned __int64 *)&v444,
        (int)&v442);
      v279 = v442;
      *v445 = v442;
      v279 = (char *)&unk_28898CC;
      v442 = (char *)&unk_28898CC;
      *((_BYTE *)v278 + 4) = v443;
      v445 = v278 + 2;
    v280 = v279 - 12;
    if ( (int *)(v279 - 12) != &dword_28898C0 )
      v383 = (unsigned int *)(v279 - 4);
          v384 = __ldrex(v383);
        while ( __strex(v384 - 1, v383) );
        v384 = (*v383)--;
      if ( v384 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v280);
    v281 = 7u % dword_27DA388;
    v282 = *(_DWORD *)(dword_27DA384 + 4 * (7u % dword_27DA388));
    if ( !v282 )
      goto LABEL_469;
    v283 = *(_DWORD *)v282;
    v284 = *(_DWORD *)(*(_DWORD *)v282 + 12);
      v285 = v284 == 7;
      if ( v284 == 7 )
        v285 = *(_DWORD *)(v283 + 4) == 7;
      if ( v285 )
      v286 = *(_DWORD *)v283;
      if ( *(_DWORD *)v283 )
        v284 = *(_DWORD *)(v286 + 12);
        v282 = v283;
        v283 = *(_DWORD *)v283;
        if ( *(_DWORD *)(v286 + 12) % (unsigned int)dword_27DA388 == v281 )
    v287 = v282 == 0;
    if ( v282 )
      v282 = *(_DWORD *)v282;
      v287 = v282 == 0;
    if ( v287 )
LABEL_469:
      v288 = operator new(0x10u);
      *v288 = 0;
      v288[1] = 7;
      v288[2] = &unk_28898CC;
      v282 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v281,
               (int)v288);
    v289 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v282 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v289, (unsigned __int64 *)&v444);
    v439 = 0;
    v440 = 0;
    v441 = 0;
    v290 = 9u % dword_27DA388;
    v291 = *(_DWORD *)(dword_27DA384 + 4 * (9u % dword_27DA388));
    if ( !v291 )
      goto LABEL_482;
    v292 = *(_DWORD *)v291;
    v293 = *(_DWORD *)(*(_DWORD *)v291 + 12);
      v294 = v293 == 9;
      if ( v293 == 9 )
        v294 = *(_DWORD *)(v292 + 4) == 9;
      if ( v294 )
      v295 = *(_DWORD *)v292;
      if ( *(_DWORD *)v292 )
        v293 = *(_DWORD *)(v295 + 12);
        v291 = v292;
        v292 = *(_DWORD *)v292;
        if ( *(_DWORD *)(v295 + 12) % (unsigned int)dword_27DA388 == v290 )
    v296 = v291 == 0;
    if ( v291 )
      v291 = *(_DWORD *)v291;
      v296 = v291 == 0;
    if ( v296 )
LABEL_482:
      v297 = operator new(0x10u);
      *v297 = 0;
      v297[1] = 9;
      v297[2] = &unk_28898CC;
      v291 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v290,
               (int)v297);
    AutoPlaceItem::AutoPlaceItem((int *)&v437, (int *)(v291 + 8), 0);
    v298 = v440;
    if ( v440 == v441 )
        (unsigned __int64 *)&v439,
        (int)&v437);
      v299 = v437;
      *v440 = v437;
      v299 = (char *)&unk_28898CC;
      v437 = (char *)&unk_28898CC;
      *((_BYTE *)v298 + 4) = v438;
      v440 = v298 + 2;
    v300 = v299 - 12;
    if ( (int *)(v299 - 12) != &dword_28898C0 )
      v385 = (unsigned int *)(v299 - 4);
          v386 = __ldrex(v385);
        while ( __strex(v386 - 1, v385) );
        v386 = (*v385)--;
      if ( v386 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v300);
    v301 = 6u % dword_27DA388;
    v302 = *(_DWORD *)(dword_27DA384 + 4 * (6u % dword_27DA388));
    if ( !v302 )
      goto LABEL_499;
    v303 = *(_DWORD *)v302;
    v304 = *(_DWORD *)(*(_DWORD *)v302 + 12);
      v305 = v304 == 6;
      if ( v304 == 6 )
        v305 = *(_DWORD *)(v303 + 4) == 6;
      if ( v305 )
      v306 = *(_DWORD *)v303;
      if ( *(_DWORD *)v303 )
        v304 = *(_DWORD *)(v306 + 12);
        v302 = v303;
        v303 = *(_DWORD *)v303;
        if ( *(_DWORD *)(v306 + 12) % (unsigned int)dword_27DA388 == v301 )
    v307 = v302 == 0;
    if ( v302 )
      v302 = *(_DWORD *)v302;
      v307 = v302 == 0;
    if ( v307 )
LABEL_499:
      v308 = operator new(0x10u);
      *v308 = 0;
      v308[1] = 6;
      v308[2] = &unk_28898CC;
      v302 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v301,
               (int)v308);
    v309 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v302 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v309, (unsigned __int64 *)&v439);
    v434 = 0;
    v435 = 0;
    v436 = 0;
    v310 = 9u % dword_27DA388;
    v311 = *(_DWORD *)(dword_27DA384 + 4 * (9u % dword_27DA388));
    if ( !v311 )
      goto LABEL_512;
    v312 = *(_DWORD *)v311;
    v313 = *(_DWORD *)(*(_DWORD *)v311 + 12);
      v314 = v313 == 9;
      if ( v313 == 9 )
        v314 = *(_DWORD *)(v312 + 4) == 9;
      if ( v314 )
      v315 = *(_DWORD *)v312;
      if ( *(_DWORD *)v312 )
        v313 = *(_DWORD *)(v315 + 12);
        v311 = v312;
        v312 = *(_DWORD *)v312;
        if ( *(_DWORD *)(v315 + 12) % (unsigned int)dword_27DA388 == v310 )
    v316 = v311 == 0;
    if ( v311 )
      v311 = *(_DWORD *)v311;
      v316 = v311 == 0;
    if ( v316 )
LABEL_512:
      v317 = operator new(0x10u);
      *v317 = 0;
      v317[1] = 9;
      v317[2] = &unk_28898CC;
      v311 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v310,
               (int)v317);
    AutoPlaceItem::AutoPlaceItem((int *)&v432, (int *)(v311 + 8), 0);
    v318 = v435;
    if ( v435 == v436 )
        (unsigned __int64 *)&v434,
        (int)&v432);
      v319 = v432;
      *v435 = v432;
      v319 = (char *)&unk_28898CC;
      v432 = (char *)&unk_28898CC;
      *((_BYTE *)v318 + 4) = v433;
      v435 = v318 + 2;
    v320 = v319 - 12;
    if ( (int *)(v319 - 12) != &dword_28898C0 )
      v387 = (unsigned int *)(v319 - 4);
          v388 = __ldrex(v387);
        while ( __strex(v388 - 1, v387) );
        v388 = (*v387)--;
      if ( v388 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v320);
    v321 = 8u % dword_27DA388;
    v322 = *(_DWORD *)(dword_27DA384 + 4 * (8u % dword_27DA388));
    if ( !v322 )
      goto LABEL_529;
    v323 = *(_DWORD *)v322;
    v324 = *(_DWORD *)(*(_DWORD *)v322 + 12);
      v325 = v324 == 8;
      if ( v324 == 8 )
        v325 = *(_DWORD *)(v323 + 4) == 8;
      if ( v325 )
      v326 = *(_DWORD *)v323;
      if ( *(_DWORD *)v323 )
        v324 = *(_DWORD *)(v326 + 12);
        v322 = v323;
        v323 = *(_DWORD *)v323;
        if ( *(_DWORD *)(v326 + 12) % (unsigned int)dword_27DA388 == v321 )
    v327 = v322 == 0;
    if ( v322 )
      v322 = *(_DWORD *)v322;
      v327 = v322 == 0;
    if ( v327 )
LABEL_529:
      v328 = operator new(0x10u);
      *v328 = 0;
      v328[1] = 8;
      v328[2] = &unk_28898CC;
      v322 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v321,
               (int)v328);
    v329 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v322 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v329, (unsigned __int64 *)&v434);
    v331 = v435;
    v330 = v434;
    if ( v434 != v435 )
        v334 = (int *)(*v330 - 12);
        if ( v334 != &dword_28898C0 )
          v332 = (unsigned int *)(*v330 - 4);
              v333 = __ldrex(v332);
            while ( __strex(v333 - 1, v332) );
            v333 = (*v332)--;
          if ( v333 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v334);
        v330 += 2;
      while ( v330 != v331 );
      v330 = v434;
    if ( v330 )
      operator delete(v330);
    v336 = v440;
    v335 = v439;
    if ( v439 != v440 )
        v339 = (int *)(*v335 - 12);
        if ( v339 != &dword_28898C0 )
          v337 = (unsigned int *)(*v335 - 4);
              v338 = __ldrex(v337);
            while ( __strex(v338 - 1, v337) );
            v338 = (*v337)--;
          if ( v338 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v339);
        v335 += 2;
      while ( v335 != v336 );
      v335 = v439;
    if ( v335 )
      operator delete(v335);
    v341 = v445;
    v340 = v444;
    if ( v444 != v445 )
        v344 = (int *)(*v340 - 12);
        if ( v344 != &dword_28898C0 )
          v342 = (unsigned int *)(*v340 - 4);
              v343 = __ldrex(v342);
            while ( __strex(v343 - 1, v342) );
            v343 = (*v342)--;
          if ( v343 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v344);
        v340 += 2;
      while ( v340 != v341 );
      v340 = v444;
    if ( v340 )
      operator delete(v340);
    v345 = v454;
    v228 = v453;
    if ( v453 != v454 )
        v348 = (int *)(*v228 - 12);
        if ( v348 != &dword_28898C0 )
          v346 = (unsigned int *)(*v228 - 4);
              v347 = __ldrex(v346);
            while ( __strex(v347 - 1, v346) );
            v347 = (*v346)--;
          if ( v347 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v348);
      while ( v228 != v345 );
      v228 = v453;
  if ( v228 )
    operator delete(v228);
}


void __fastcall BrewingStandScreenController::~BrewingStandScreenController(BrewingStandScreenController *this)
{
  BrewingStandScreenController::~BrewingStandScreenController(this);
}


void __fastcall BrewingStandScreenController::_registerBindings(BrewingStandScreenController *this)
{
  BrewingStandScreenController::_registerBindings(this);
}


signed int __fastcall BrewingStandScreenController::_shouldEmptyFuelImageBeVisible(BrewingStandScreenController *this, int a2)
{
  int v2; // r8@1
  int v3; // r11@1
  int v4; // r10@1
  int v5; // r0@1
  int v6; // r6@2
  int v7; // r4@2
  bool v8; // zf@3
  int v9; // r5@6
  bool v10; // zf@9
  _DWORD *v11; // r0@13
  int v12; // r0@14
  int v13; // r4@14
  int v14; // r0@14
  bool v15; // zf@14
  signed int result; // r0@18

  v2 = a2;
  v3 = 8u % dword_27DA388;
  v4 = *((_DWORD *)this + 158);
  v5 = *(_DWORD *)(dword_27DA384 + 4 * (8u % dword_27DA388));
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  while ( 1 )
  {
    v8 = v7 == 8;
    if ( v7 == 8 )
      v8 = *(_DWORD *)(v6 + 4) == 8;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27DA388 == v3 )
        continue;
    }
  }
  v10 = v5 == 0;
  if ( v5 )
    v5 = *(_DWORD *)v5;
    v10 = v5 == 0;
  if ( v10 )
LABEL_13:
    v11 = operator new(0x10u);
    *v11 = 0;
    v11[1] = 8;
    v11[2] = &unk_28898CC;
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27DA384,
           v3,
           8u,
           (int)v11);
  v12 = ContainerManagerController::getItemInstance(v4, (int **)(v5 + 8), v2);
  v13 = v12;
  v14 = *(_BYTE *)(v12 + 15);
  v15 = v14 == 0;
  if ( v14 )
    v15 = *(_DWORD *)v13 == 0;
  if ( v15 || ItemInstance::isNull((ItemInstance *)v13) )
    result = 1;
  else
    result = 0;
    if ( !*(_BYTE *)(v13 + 14) )
      result = 1;
  return result;
}


void __fastcall BrewingStandScreenController::_registerCoalesceOrder(BrewingStandScreenController *this)
{
  BrewingStandScreenController *v1; // r8@1
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
  int *v46; // r1@77
  int v47; // r9@80
  int v48; // r0@80
  int v49; // r5@81
  int v50; // r7@81
  bool v51; // zf@82
  int v52; // r4@85
  bool v53; // zf@88
  _DWORD *v54; // r0@92
  unsigned __int64 *v55; // r8@93
  int v56; // r0@93
  int v57; // r9@93
  int v58; // r0@93
  int v59; // r5@94
  int v60; // r7@94
  bool v61; // zf@95
  int v62; // r4@98
  bool v63; // zf@101
  int *v64; // r1@104
  _DWORD *v65; // r0@105
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
  int *v92; // r1@153
  int v93; // r9@156
  int v94; // r0@156
  int v95; // r5@157
  int v96; // r7@157
  bool v97; // zf@158
  int v98; // r4@161
  bool v99; // zf@164
  _DWORD *v100; // r0@168
  int *v101; // r1@169
  int v102; // r9@172
  int v103; // r0@172
  int v104; // r5@173
  int v105; // r7@173
  bool v106; // zf@174
  int v107; // r4@177
  bool v108; // zf@180
  _DWORD *v109; // r0@184
  int v110; // r0@185
  int v111; // r9@185
  int v112; // r0@185
  int v113; // r5@186
  int v114; // r7@186
  bool v115; // zf@187
  int v116; // r4@190
  bool v117; // zf@193
  int *v118; // r1@196
  _DWORD *v119; // r0@197
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
  int *v137; // r1@229
  int v138; // r9@232
  int v139; // r0@232
  int v140; // r5@233
  int v141; // r7@233
  bool v142; // zf@234
  int v143; // r4@237
  bool v144; // zf@240
  _DWORD *v145; // r0@244
  int *v146; // r1@245
  int v147; // r9@248
  int v148; // r0@248
  int v149; // r5@249
  int v150; // r7@249
  bool v151; // zf@250
  int v152; // r4@253
  bool v153; // zf@256
  _DWORD *v154; // r0@260
  int *v155; // r1@261
  int v156; // r9@264
  int v157; // r0@264
  int v158; // r5@265
  int v159; // r7@265
  bool v160; // zf@266
  int v161; // r4@269
  bool v162; // zf@272
  _DWORD *v163; // r0@276
  int v164; // r0@277
  int v165; // r9@277
  int v166; // r0@277
  int v167; // r5@278
  int v168; // r7@278
  bool v169; // zf@279
  int v170; // r4@282
  bool v171; // zf@285
  int *v172; // r1@288
  _DWORD *v173; // r0@289
  int v174; // r9@292
  int v175; // r0@292
  int v176; // r5@293
  int v177; // r7@293
  bool v178; // zf@294
  int v179; // r4@297
  bool v180; // zf@300
  _DWORD *v181; // r0@304
  int *v182; // r1@305
  int v183; // r9@308
  int v184; // r0@308
  int v185; // r5@309
  int v186; // r7@309
  bool v187; // zf@310
  int v188; // r4@313
  bool v189; // zf@316
  _DWORD *v190; // r0@320
  int *v191; // r1@321
  int v192; // r9@324
  int v193; // r0@324
  int v194; // r5@325
  int v195; // r7@325
  bool v196; // zf@326
  int v197; // r4@329
  bool v198; // zf@332
  _DWORD *v199; // r0@336
  int *v200; // r1@337
  int v201; // r9@340
  int v202; // r0@340
  int v203; // r5@341
  int v204; // r7@341
  bool v205; // zf@342
  int v206; // r4@345
  bool v207; // zf@348
  _DWORD *v208; // r0@352
  int *v209; // r1@353
  int v210; // r9@356
  int v211; // r0@356
  int v212; // r5@357
  int v213; // r7@357
  bool v214; // zf@358
  int v215; // r4@361
  bool v216; // zf@364
  _DWORD *v217; // r0@368
  int v218; // r0@369
  int v219; // r9@369
  int v220; // r0@369
  int v221; // r5@370
  int v222; // r7@370
  bool v223; // zf@371
  int v224; // r4@374
  bool v225; // zf@377
  int *v226; // r1@380
  _DWORD *v227; // r0@381
  int v228; // r9@384
  int v229; // r0@384
  int v230; // r5@385
  int v231; // r7@385
  bool v232; // zf@386
  int v233; // r4@389
  bool v234; // zf@392
  _DWORD *v235; // r0@396
  int *v236; // r1@397
  int v237; // r9@400
  int v238; // r0@400
  int v239; // r5@401
  int v240; // r7@401
  bool v241; // zf@402
  int v242; // r4@405
  bool v243; // zf@408
  _DWORD *v244; // r0@412
  int *v245; // r1@413
  int v246; // r9@416
  int v247; // r0@416
  int v248; // r5@417
  int v249; // r7@417
  bool v250; // zf@418
  int v251; // r4@421
  bool v252; // zf@424
  _DWORD *v253; // r0@428
  int *v254; // r1@429
  int v255; // r9@432
  int v256; // r0@432
  int v257; // r5@433
  int v258; // r7@433
  bool v259; // zf@434
  int v260; // r4@437
  bool v261; // zf@440
  _DWORD *v262; // r0@444
  int *v263; // r1@445
  int v264; // r9@448
  int v265; // r0@448
  int v266; // r5@449
  int v267; // r7@449
  bool v268; // zf@450
  int v269; // r4@453
  bool v270; // zf@456
  _DWORD *v271; // r0@460
  int v272; // r0@461
  int *v273; // r4@461
  int *v274; // r6@461
  unsigned int *v275; // r2@463
  signed int v276; // r1@465
  int *v277; // r0@471
  int *v278; // r4@476
  int *v279; // r6@476
  unsigned int *v280; // r2@478
  signed int v281; // r1@480
  int *v282; // r0@486
  int *v283; // r4@491
  int *v284; // r6@491
  unsigned int *v285; // r2@493
  signed int v286; // r1@495
  int *v287; // r0@501
  int *v288; // r4@506
  int *v289; // r6@506
  unsigned int *v290; // r2@508
  signed int v291; // r1@510
  int *v292; // r0@516
  int *v293; // r4@521
  int *v294; // r6@521
  unsigned int *v295; // r2@523
  signed int v296; // r1@525
  int *v297; // r0@531
  int *v298; // [sp+0h] [bp-60h]@369
  int *v299; // [sp+4h] [bp-5Ch]@369
  int *v300; // [sp+8h] [bp-58h]@369
  int *v301; // [sp+Ch] [bp-54h]@277
  int *v302; // [sp+10h] [bp-50h]@277
  int *v303; // [sp+14h] [bp-4Ch]@277
  int *v304; // [sp+18h] [bp-48h]@185
  int *v305; // [sp+1Ch] [bp-44h]@185
  int *v306; // [sp+20h] [bp-40h]@185
  int *v307; // [sp+24h] [bp-3Ch]@93
  int *v308; // [sp+28h] [bp-38h]@93
  int *v309; // [sp+2Ch] [bp-34h]@93
  int *v310; // [sp+30h] [bp-30h]@1
  int *v311; // [sp+34h] [bp-2Ch]@1
  int *v312; // [sp+38h] [bp-28h]@1

  v1 = this;
  v310 = 0;
  v311 = 0;
  v312 = 0;
  v2 = 0x18u % dword_27DA388;
  v3 = *(_DWORD *)(dword_27DA384 + 4 * (0x18u % dword_27DA388));
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
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DA388 == v2 )
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
        (unsigned __int64 *)&v310,
        v9);
      goto LABEL_16;
  }
LABEL_13:
  v10 = operator new(0x10u);
  *v10 = 0;
  v10[1] = 24;
  v10[2] = &unk_28898CC;
  v9 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                 (int)&dword_27DA384,
                 v2,
                 0x18u,
                 (int)v10)
             + 8);
  if ( v311 == v312 )
    goto LABEL_15;
  sub_119C854(v311, v9);
  ++v311;
LABEL_16:
  v11 = 7u % dword_27DA388;
  v12 = *(_DWORD *)(dword_27DA384 + 4 * (7u % dword_27DA388));
  if ( !v12 )
    goto LABEL_28;
  v13 = *(_DWORD *)v12;
  v14 = *(_DWORD *)(*(_DWORD *)v12 + 12);
  while ( 1 )
    v15 = v14 == 7;
    if ( v14 == 7 )
      v15 = *(_DWORD *)(v13 + 4) == 7;
    if ( v15 )
      break;
    v16 = *(_DWORD *)v13;
    if ( *(_DWORD *)v13 )
      v14 = *(_DWORD *)(v16 + 12);
      v12 = v13;
      v13 = *(_DWORD *)v13;
      if ( *(_DWORD *)(v16 + 12) % (unsigned int)dword_27DA388 == v11 )
        continue;
  v17 = v12 == 0;
  if ( v12 )
    v12 = *(_DWORD *)v12;
    v17 = v12 == 0;
  if ( v17 )
LABEL_28:
    v18 = operator new(0x10u);
    *v18 = 0;
    v18[1] = 7;
    v18[2] = &unk_28898CC;
    v12 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27DA384,
            v11,
            7u,
            (int)v18);
  v19 = (int *)(v12 + 8);
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)&v310,
      v19);
  else
    sub_119C854(v311, v19);
    ++v311;
  v20 = 8u % dword_27DA388;
  v21 = *(_DWORD *)(dword_27DA384 + 4 * (8u % dword_27DA388));
  if ( !v21 )
    goto LABEL_44;
  v22 = *(_DWORD *)v21;
  v23 = *(_DWORD *)(*(_DWORD *)v21 + 12);
    v24 = v23 == 8;
    if ( v23 == 8 )
      v24 = *(_DWORD *)(v22 + 4) == 8;
    if ( v24 )
    v25 = *(_DWORD *)v22;
    if ( *(_DWORD *)v22 )
      v23 = *(_DWORD *)(v25 + 12);
      v21 = v22;
      v22 = *(_DWORD *)v22;
      if ( *(_DWORD *)(v25 + 12) % (unsigned int)dword_27DA388 == v20 )
  v26 = v21 == 0;
  if ( v21 )
    v21 = *(_DWORD *)v21;
    v26 = v21 == 0;
  if ( v26 )
LABEL_44:
    v27 = operator new(0x10u);
    *v27 = 0;
    v27[1] = 8;
    v27[2] = &unk_28898CC;
    v21 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v20,
            8u,
            (int)v27);
  v28 = (int *)(v21 + 8);
      v28);
    sub_119C854(v311, v28);
  v29 = 6u % dword_27DA388;
  v30 = *(_DWORD *)(dword_27DA384 + 4 * (6u % dword_27DA388));
  if ( !v30 )
    goto LABEL_60;
  v31 = *(_DWORD *)v30;
  v32 = *(_DWORD *)(*(_DWORD *)v30 + 12);
    v33 = v32 == 6;
    if ( v32 == 6 )
      v33 = *(_DWORD *)(v31 + 4) == 6;
    if ( v33 )
    v34 = *(_DWORD *)v31;
    if ( *(_DWORD *)v31 )
      v32 = *(_DWORD *)(v34 + 12);
      v30 = v31;
      v31 = *(_DWORD *)v31;
      if ( *(_DWORD *)(v34 + 12) % (unsigned int)dword_27DA388 == v29 )
  v35 = v30 == 0;
  if ( v30 )
    v30 = *(_DWORD *)v30;
    v35 = v30 == 0;
  if ( v35 )
LABEL_60:
    v36 = operator new(0x10u);
    *v36 = 0;
    v36[1] = 6;
    v36[2] = &unk_28898CC;
    v30 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v29,
            6u,
            (int)v36);
  v37 = (int *)(v30 + 8);
      v37);
    sub_119C854(v311, v37);
  v38 = 0x1Au % dword_27DA388;
  v39 = *(_DWORD *)(dword_27DA384 + 4 * (0x1Au % dword_27DA388));
  if ( !v39 )
    goto LABEL_76;
  v40 = *(_DWORD *)v39;
  v41 = *(_DWORD *)(*(_DWORD *)v39 + 12);
    v42 = v41 == 26;
    if ( v41 == 26 )
      v42 = *(_DWORD *)(v40 + 4) == 26;
    if ( v42 )
    v43 = *(_DWORD *)v40;
    if ( *(_DWORD *)v40 )
      v41 = *(_DWORD *)(v43 + 12);
      v39 = v40;
      v40 = *(_DWORD *)v40;
      if ( *(_DWORD *)(v43 + 12) % (unsigned int)dword_27DA388 == v38 )
  v44 = v39 == 0;
  if ( v39 )
    v39 = *(_DWORD *)v39;
    v44 = v39 == 0;
  if ( v44 )
LABEL_76:
    v45 = operator new(0x10u);
    *v45 = 0;
    v45[1] = 26;
    v45[2] = &unk_28898CC;
    v39 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v38,
            0x1Au,
            (int)v45);
  v46 = (int *)(v39 + 8);
      v46);
    sub_119C854(v311, v46);
  v47 = 0x18u % dword_27DA388;
  v48 = *(_DWORD *)(dword_27DA384 + 4 * (0x18u % dword_27DA388));
  if ( !v48 )
    goto LABEL_92;
  v49 = *(_DWORD *)v48;
  v50 = *(_DWORD *)(*(_DWORD *)v48 + 12);
    v51 = v50 == 24;
    if ( v50 == 24 )
      v51 = *(_DWORD *)(v49 + 4) == 24;
    if ( v51 )
    v52 = *(_DWORD *)v49;
    if ( *(_DWORD *)v49 )
      v50 = *(_DWORD *)(v52 + 12);
      v48 = v49;
      v49 = *(_DWORD *)v49;
      if ( *(_DWORD *)(v52 + 12) % (unsigned int)dword_27DA388 == v47 )
  v53 = v48 == 0;
  if ( v48 )
    v48 = *(_DWORD *)v48;
    v53 = v48 == 0;
  if ( v53 )
LABEL_92:
    v54 = operator new(0x10u);
    *v54 = 0;
    v54[1] = 24;
    v54[2] = &unk_28898CC;
    v48 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v47,
            0x18u,
            (int)v54);
  v55 = (unsigned __int64 *)((char *)v1 + 572);
  v56 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v55,
          (int **)(v48 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v56, (unsigned __int64 *)&v310);
  v307 = 0;
  v308 = 0;
  v309 = 0;
  v57 = 0x1Au % dword_27DA388;
  v58 = *(_DWORD *)(dword_27DA384 + 4 * (0x1Au % dword_27DA388));
  if ( v58 )
    v59 = *(_DWORD *)v58;
    v60 = *(_DWORD *)(*(_DWORD *)v58 + 12);
      v61 = v60 == 26;
      if ( v60 == 26 )
        v61 = *(_DWORD *)(v59 + 4) == 26;
      if ( v61 )
      v62 = *(_DWORD *)v59;
      if ( *(_DWORD *)v59 )
        v60 = *(_DWORD *)(v62 + 12);
        v58 = v59;
        v59 = *(_DWORD *)v59;
        if ( *(_DWORD *)(v62 + 12) % (unsigned int)dword_27DA388 == v57 )
      goto LABEL_105;
    v63 = v58 == 0;
    if ( v58 )
      v58 = *(_DWORD *)v58;
      v63 = v58 == 0;
    if ( !v63 )
      v64 = (int *)(v58 + 8);
LABEL_107:
        (unsigned __int64 *)&v307,
        v64);
      goto LABEL_108;
LABEL_105:
  v65 = operator new(0x10u);
  *v65 = 0;
  v65[1] = 26;
  v65[2] = &unk_28898CC;
  v64 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27DA384,
                  v57,
                  0x1Au,
                  (int)v65)
              + 8);
  if ( v308 == v309 )
    goto LABEL_107;
  sub_119C854(v308, v64);
  ++v308;
LABEL_108:
  v66 = 7u % dword_27DA388;
  v67 = *(_DWORD *)(dword_27DA384 + 4 * (7u % dword_27DA388));
  if ( !v67 )
    goto LABEL_120;
  v68 = *(_DWORD *)v67;
  v69 = *(_DWORD *)(*(_DWORD *)v67 + 12);
    v70 = v69 == 7;
    if ( v69 == 7 )
      v70 = *(_DWORD *)(v68 + 4) == 7;
    if ( v70 )
    v71 = *(_DWORD *)v68;
    if ( *(_DWORD *)v68 )
      v69 = *(_DWORD *)(v71 + 12);
      v67 = v68;
      v68 = *(_DWORD *)v68;
      if ( *(_DWORD *)(v71 + 12) % (unsigned int)dword_27DA388 == v66 )
  v72 = v67 == 0;
  if ( v67 )
    v67 = *(_DWORD *)v67;
    v72 = v67 == 0;
  if ( v72 )
LABEL_120:
    v73 = operator new(0x10u);
    *v73 = 0;
    v73[1] = 7;
    v73[2] = &unk_28898CC;
    v67 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v66,
            (int)v73);
  v74 = (int *)(v67 + 8);
      (unsigned __int64 *)&v307,
      v74);
    sub_119C854(v308, v74);
    ++v308;
  v75 = 8u % dword_27DA388;
  v76 = *(_DWORD *)(dword_27DA384 + 4 * (8u % dword_27DA388));
  if ( !v76 )
    goto LABEL_136;
  v77 = *(_DWORD *)v76;
  v78 = *(_DWORD *)(*(_DWORD *)v76 + 12);
    v79 = v78 == 8;
    if ( v78 == 8 )
      v79 = *(_DWORD *)(v77 + 4) == 8;
    if ( v79 )
    v80 = *(_DWORD *)v77;
    if ( *(_DWORD *)v77 )
      v78 = *(_DWORD *)(v80 + 12);
      v76 = v77;
      v77 = *(_DWORD *)v77;
      if ( *(_DWORD *)(v80 + 12) % (unsigned int)dword_27DA388 == v75 )
  v81 = v76 == 0;
  if ( v76 )
    v76 = *(_DWORD *)v76;
    v81 = v76 == 0;
  if ( v81 )
LABEL_136:
    v82 = operator new(0x10u);
    *v82 = 0;
    v82[1] = 8;
    v82[2] = &unk_28898CC;
    v76 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v75,
            (int)v82);
  v83 = (int *)(v76 + 8);
      v83);
    sub_119C854(v308, v83);
  v84 = 6u % dword_27DA388;
  v85 = *(_DWORD *)(dword_27DA384 + 4 * (6u % dword_27DA388));
  if ( !v85 )
    goto LABEL_152;
  v86 = *(_DWORD *)v85;
  v87 = *(_DWORD *)(*(_DWORD *)v85 + 12);
    v88 = v87 == 6;
    if ( v87 == 6 )
      v88 = *(_DWORD *)(v86 + 4) == 6;
    if ( v88 )
    v89 = *(_DWORD *)v86;
    if ( *(_DWORD *)v86 )
      v87 = *(_DWORD *)(v89 + 12);
      v85 = v86;
      v86 = *(_DWORD *)v86;
      if ( *(_DWORD *)(v89 + 12) % (unsigned int)dword_27DA388 == v84 )
  v90 = v85 == 0;
  if ( v85 )
    v85 = *(_DWORD *)v85;
    v90 = v85 == 0;
  if ( v90 )
LABEL_152:
    v91 = operator new(0x10u);
    *v91 = 0;
    v91[1] = 6;
    v91[2] = &unk_28898CC;
    v85 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v84,
            (int)v91);
  v92 = (int *)(v85 + 8);
      v92);
    sub_119C854(v308, v92);
  v93 = 0x18u % dword_27DA388;
  v94 = *(_DWORD *)(dword_27DA384 + 4 * (0x18u % dword_27DA388));
  if ( !v94 )
    goto LABEL_168;
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
      if ( *(_DWORD *)(v98 + 12) % (unsigned int)dword_27DA388 == v93 )
  v99 = v94 == 0;
  if ( v94 )
    v94 = *(_DWORD *)v94;
    v99 = v94 == 0;
  if ( v99 )
LABEL_168:
    v100 = operator new(0x10u);
    *v100 = 0;
    v100[1] = 24;
    v100[2] = &unk_28898CC;
    v94 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v93,
            (int)v100);
  v101 = (int *)(v94 + 8);
      v101);
    sub_119C854(v308, v101);
  v102 = 0x1Au % dword_27DA388;
  v103 = *(_DWORD *)(dword_27DA384 + 4 * (0x1Au % dword_27DA388));
  if ( !v103 )
    goto LABEL_184;
  v104 = *(_DWORD *)v103;
  v105 = *(_DWORD *)(*(_DWORD *)v103 + 12);
    v106 = v105 == 26;
    if ( v105 == 26 )
      v106 = *(_DWORD *)(v104 + 4) == 26;
    if ( v106 )
    v107 = *(_DWORD *)v104;
    if ( *(_DWORD *)v104 )
      v105 = *(_DWORD *)(v107 + 12);
      v103 = v104;
      v104 = *(_DWORD *)v104;
      if ( *(_DWORD *)(v107 + 12) % (unsigned int)dword_27DA388 == v102 )
  v108 = v103 == 0;
  if ( v103 )
    v103 = *(_DWORD *)v103;
    v108 = v103 == 0;
  if ( v108 )
LABEL_184:
    v109 = operator new(0x10u);
    *v109 = 0;
    v109[1] = 26;
    v109[2] = &unk_28898CC;
    v103 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DA384,
             v102,
             0x1Au,
             (int)v109);
  v110 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           v55,
           (int **)(v103 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v110, (unsigned __int64 *)&v307);
  v304 = 0;
  v305 = 0;
  v306 = 0;
  v111 = 7u % dword_27DA388;
  v112 = *(_DWORD *)(dword_27DA384 + 4 * (7u % dword_27DA388));
  if ( v112 )
    v113 = *(_DWORD *)v112;
    v114 = *(_DWORD *)(*(_DWORD *)v112 + 12);
      v115 = v114 == 7;
      if ( v114 == 7 )
        v115 = *(_DWORD *)(v113 + 4) == 7;
      if ( v115 )
      v116 = *(_DWORD *)v113;
      if ( *(_DWORD *)v113 )
        v114 = *(_DWORD *)(v116 + 12);
        v112 = v113;
        v113 = *(_DWORD *)v113;
        if ( *(_DWORD *)(v116 + 12) % (unsigned int)dword_27DA388 == v111 )
      goto LABEL_197;
    v117 = v112 == 0;
    if ( v112 )
      v112 = *(_DWORD *)v112;
      v117 = v112 == 0;
    if ( !v117 )
      v118 = (int *)(v112 + 8);
LABEL_199:
        (unsigned __int64 *)&v304,
        v118);
      goto LABEL_200;
LABEL_197:
  v119 = operator new(0x10u);
  *v119 = 0;
  v119[1] = 7;
  v119[2] = &unk_28898CC;
  v118 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   (int)&dword_27DA384,
                   v111,
                   7u,
                   (int)v119)
               + 8);
  if ( v305 == v306 )
    goto LABEL_199;
  sub_119C854(v305, v118);
  ++v305;
LABEL_200:
  v120 = 8u % dword_27DA388;
  v121 = *(_DWORD *)(dword_27DA384 + 4 * (8u % dword_27DA388));
  if ( !v121 )
    goto LABEL_212;
  v122 = *(_DWORD *)v121;
  v123 = *(_DWORD *)(*(_DWORD *)v121 + 12);
    v124 = v123 == 8;
    if ( v123 == 8 )
      v124 = *(_DWORD *)(v122 + 4) == 8;
    if ( v124 )
    v125 = *(_DWORD *)v122;
    if ( *(_DWORD *)v122 )
      v123 = *(_DWORD *)(v125 + 12);
      v121 = v122;
      v122 = *(_DWORD *)v122;
      if ( *(_DWORD *)(v125 + 12) % (unsigned int)dword_27DA388 == v120 )
  v126 = v121 == 0;
  if ( v121 )
    v121 = *(_DWORD *)v121;
    v126 = v121 == 0;
  if ( v126 )
LABEL_212:
    v127 = operator new(0x10u);
    *v127 = 0;
    v127[1] = 8;
    v127[2] = &unk_28898CC;
    v121 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v120,
             8u,
             (int)v127);
  v128 = (int *)(v121 + 8);
      (unsigned __int64 *)&v304,
      v128);
    sub_119C854(v305, v128);
    ++v305;
  v129 = 6u % dword_27DA388;
  v130 = *(_DWORD *)(dword_27DA384 + 4 * (6u % dword_27DA388));
  if ( !v130 )
    goto LABEL_228;
  v131 = *(_DWORD *)v130;
  v132 = *(_DWORD *)(*(_DWORD *)v130 + 12);
    v133 = v132 == 6;
    if ( v132 == 6 )
      v133 = *(_DWORD *)(v131 + 4) == 6;
    if ( v133 )
    v134 = *(_DWORD *)v131;
    if ( *(_DWORD *)v131 )
      v132 = *(_DWORD *)(v134 + 12);
      v130 = v131;
      v131 = *(_DWORD *)v131;
      if ( *(_DWORD *)(v134 + 12) % (unsigned int)dword_27DA388 == v129 )
  v135 = v130 == 0;
  if ( v130 )
    v130 = *(_DWORD *)v130;
    v135 = v130 == 0;
  if ( v135 )
LABEL_228:
    v136 = operator new(0x10u);
    *v136 = 0;
    v136[1] = 6;
    v136[2] = &unk_28898CC;
    v130 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v129,
             6u,
             (int)v136);
  v137 = (int *)(v130 + 8);
      v137);
    sub_119C854(v305, v137);
  v138 = 0x1Au % dword_27DA388;
  v139 = *(_DWORD *)(dword_27DA384 + 4 * (0x1Au % dword_27DA388));
  if ( !v139 )
    goto LABEL_244;
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
      if ( *(_DWORD *)(v143 + 12) % (unsigned int)dword_27DA388 == v138 )
  v144 = v139 == 0;
  if ( v139 )
    v139 = *(_DWORD *)v139;
    v144 = v139 == 0;
  if ( v144 )
LABEL_244:
    v145 = operator new(0x10u);
    *v145 = 0;
    v145[1] = 26;
    v145[2] = &unk_28898CC;
    v139 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v138,
             (int)v145);
  v146 = (int *)(v139 + 8);
      v146);
    sub_119C854(v305, v146);
  v147 = 0x18u % dword_27DA388;
  v148 = *(_DWORD *)(dword_27DA384 + 4 * (0x18u % dword_27DA388));
  if ( !v148 )
    goto LABEL_260;
  v149 = *(_DWORD *)v148;
  v150 = *(_DWORD *)(*(_DWORD *)v148 + 12);
    v151 = v150 == 24;
    if ( v150 == 24 )
      v151 = *(_DWORD *)(v149 + 4) == 24;
    if ( v151 )
    v152 = *(_DWORD *)v149;
    if ( *(_DWORD *)v149 )
      v150 = *(_DWORD *)(v152 + 12);
      v148 = v149;
      v149 = *(_DWORD *)v149;
      if ( *(_DWORD *)(v152 + 12) % (unsigned int)dword_27DA388 == v147 )
  v153 = v148 == 0;
  if ( v148 )
    v148 = *(_DWORD *)v148;
    v153 = v148 == 0;
  if ( v153 )
LABEL_260:
    v154 = operator new(0x10u);
    *v154 = 0;
    v154[1] = 24;
    v154[2] = &unk_28898CC;
    v148 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v147,
             0x18u,
             (int)v154);
  v155 = (int *)(v148 + 8);
      v155);
    sub_119C854(v305, v155);
  v156 = 7u % dword_27DA388;
  v157 = *(_DWORD *)(dword_27DA384 + 4 * (7u % dword_27DA388));
  if ( !v157 )
    goto LABEL_276;
  v158 = *(_DWORD *)v157;
  v159 = *(_DWORD *)(*(_DWORD *)v157 + 12);
    v160 = v159 == 7;
    if ( v159 == 7 )
      v160 = *(_DWORD *)(v158 + 4) == 7;
    if ( v160 )
    v161 = *(_DWORD *)v158;
    if ( *(_DWORD *)v158 )
      v159 = *(_DWORD *)(v161 + 12);
      v157 = v158;
      v158 = *(_DWORD *)v158;
      if ( *(_DWORD *)(v161 + 12) % (unsigned int)dword_27DA388 == v156 )
  v162 = v157 == 0;
  if ( v157 )
    v157 = *(_DWORD *)v157;
    v162 = v157 == 0;
  if ( v162 )
LABEL_276:
    v163 = operator new(0x10u);
    *v163 = 0;
    v163[1] = 7;
    v163[2] = &unk_28898CC;
    v157 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v156,
             7u,
             (int)v163);
  v164 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v157 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v164, (unsigned __int64 *)&v304);
  v301 = 0;
  v302 = 0;
  v303 = 0;
  v165 = 8u % dword_27DA388;
  v166 = *(_DWORD *)(dword_27DA384 + 4 * (8u % dword_27DA388));
  if ( v166 )
    v167 = *(_DWORD *)v166;
    v168 = *(_DWORD *)(*(_DWORD *)v166 + 12);
      v169 = v168 == 8;
      if ( v168 == 8 )
        v169 = *(_DWORD *)(v167 + 4) == 8;
      if ( v169 )
      v170 = *(_DWORD *)v167;
      if ( *(_DWORD *)v167 )
        v168 = *(_DWORD *)(v170 + 12);
        v166 = v167;
        v167 = *(_DWORD *)v167;
        if ( *(_DWORD *)(v170 + 12) % (unsigned int)dword_27DA388 == v165 )
      goto LABEL_289;
    v171 = v166 == 0;
    if ( v166 )
      v166 = *(_DWORD *)v166;
      v171 = v166 == 0;
    if ( !v171 )
      v172 = (int *)(v166 + 8);
LABEL_291:
        (unsigned __int64 *)&v301,
        v172);
      goto LABEL_292;
LABEL_289:
  v173 = operator new(0x10u);
  *v173 = 0;
  v173[1] = 8;
  v173[2] = &unk_28898CC;
  v172 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   v165,
                   8u,
                   (int)v173)
  if ( v302 == v303 )
    goto LABEL_291;
  sub_119C854(v302, v172);
  ++v302;
LABEL_292:
  v174 = 7u % dword_27DA388;
  v175 = *(_DWORD *)(dword_27DA384 + 4 * (7u % dword_27DA388));
  if ( !v175 )
    goto LABEL_304;
  v176 = *(_DWORD *)v175;
  v177 = *(_DWORD *)(*(_DWORD *)v175 + 12);
    v178 = v177 == 7;
    if ( v177 == 7 )
      v178 = *(_DWORD *)(v176 + 4) == 7;
    if ( v178 )
    v179 = *(_DWORD *)v176;
    if ( *(_DWORD *)v176 )
      v177 = *(_DWORD *)(v179 + 12);
      v175 = v176;
      v176 = *(_DWORD *)v176;
      if ( *(_DWORD *)(v179 + 12) % (unsigned int)dword_27DA388 == v174 )
  v180 = v175 == 0;
  if ( v175 )
    v175 = *(_DWORD *)v175;
    v180 = v175 == 0;
  if ( v180 )
LABEL_304:
    v181 = operator new(0x10u);
    *v181 = 0;
    v181[1] = 7;
    v181[2] = &unk_28898CC;
    v175 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v174,
             (int)v181);
  v182 = (int *)(v175 + 8);
      (unsigned __int64 *)&v301,
      v182);
    sub_119C854(v302, v182);
    ++v302;
  v183 = 6u % dword_27DA388;
  v184 = *(_DWORD *)(dword_27DA384 + 4 * (6u % dword_27DA388));
  if ( !v184 )
    goto LABEL_320;
  v185 = *(_DWORD *)v184;
  v186 = *(_DWORD *)(*(_DWORD *)v184 + 12);
    v187 = v186 == 6;
    if ( v186 == 6 )
      v187 = *(_DWORD *)(v185 + 4) == 6;
    if ( v187 )
    v188 = *(_DWORD *)v185;
    if ( *(_DWORD *)v185 )
      v186 = *(_DWORD *)(v188 + 12);
      v184 = v185;
      v185 = *(_DWORD *)v185;
      if ( *(_DWORD *)(v188 + 12) % (unsigned int)dword_27DA388 == v183 )
  v189 = v184 == 0;
  if ( v184 )
    v184 = *(_DWORD *)v184;
    v189 = v184 == 0;
  if ( v189 )
LABEL_320:
    v190 = operator new(0x10u);
    *v190 = 0;
    v190[1] = 6;
    v190[2] = &unk_28898CC;
    v184 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v183,
             (int)v190);
  v191 = (int *)(v184 + 8);
      v191);
    sub_119C854(v302, v191);
  v192 = 0x1Au % dword_27DA388;
  v193 = *(_DWORD *)(dword_27DA384 + 4 * (0x1Au % dword_27DA388));
  if ( !v193 )
    goto LABEL_336;
  v194 = *(_DWORD *)v193;
  v195 = *(_DWORD *)(*(_DWORD *)v193 + 12);
    v196 = v195 == 26;
    if ( v195 == 26 )
      v196 = *(_DWORD *)(v194 + 4) == 26;
    if ( v196 )
    v197 = *(_DWORD *)v194;
    if ( *(_DWORD *)v194 )
      v195 = *(_DWORD *)(v197 + 12);
      v193 = v194;
      v194 = *(_DWORD *)v194;
      if ( *(_DWORD *)(v197 + 12) % (unsigned int)dword_27DA388 == v192 )
  v198 = v193 == 0;
  if ( v193 )
    v193 = *(_DWORD *)v193;
    v198 = v193 == 0;
  if ( v198 )
LABEL_336:
    v199 = operator new(0x10u);
    *v199 = 0;
    v199[1] = 26;
    v199[2] = &unk_28898CC;
    v193 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v192,
             (int)v199);
  v200 = (int *)(v193 + 8);
      v200);
    sub_119C854(v302, v200);
  v201 = 0x18u % dword_27DA388;
  v202 = *(_DWORD *)(dword_27DA384 + 4 * (0x18u % dword_27DA388));
  if ( !v202 )
    goto LABEL_352;
  v203 = *(_DWORD *)v202;
  v204 = *(_DWORD *)(*(_DWORD *)v202 + 12);
    v205 = v204 == 24;
    if ( v204 == 24 )
      v205 = *(_DWORD *)(v203 + 4) == 24;
    if ( v205 )
    v206 = *(_DWORD *)v203;
    if ( *(_DWORD *)v203 )
      v204 = *(_DWORD *)(v206 + 12);
      v202 = v203;
      v203 = *(_DWORD *)v203;
      if ( *(_DWORD *)(v206 + 12) % (unsigned int)dword_27DA388 == v201 )
  v207 = v202 == 0;
  if ( v202 )
    v202 = *(_DWORD *)v202;
    v207 = v202 == 0;
  if ( v207 )
LABEL_352:
    v208 = operator new(0x10u);
    *v208 = 0;
    v208[1] = 24;
    v208[2] = &unk_28898CC;
    v202 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v201,
             (int)v208);
  v209 = (int *)(v202 + 8);
      v209);
    sub_119C854(v302, v209);
  v210 = 8u % dword_27DA388;
  v211 = *(_DWORD *)(dword_27DA384 + 4 * (8u % dword_27DA388));
  if ( !v211 )
    goto LABEL_368;
  v212 = *(_DWORD *)v211;
  v213 = *(_DWORD *)(*(_DWORD *)v211 + 12);
    v214 = v213 == 8;
    if ( v213 == 8 )
      v214 = *(_DWORD *)(v212 + 4) == 8;
    if ( v214 )
    v215 = *(_DWORD *)v212;
    if ( *(_DWORD *)v212 )
      v213 = *(_DWORD *)(v215 + 12);
      v211 = v212;
      v212 = *(_DWORD *)v212;
      if ( *(_DWORD *)(v215 + 12) % (unsigned int)dword_27DA388 == v210 )
  v216 = v211 == 0;
  if ( v211 )
    v211 = *(_DWORD *)v211;
    v216 = v211 == 0;
  if ( v216 )
LABEL_368:
    v217 = operator new(0x10u);
    *v217 = 0;
    v217[1] = 8;
    v217[2] = &unk_28898CC;
    v211 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v210,
             (int)v217);
  v218 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v211 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v218, (unsigned __int64 *)&v301);
  v298 = 0;
  v299 = 0;
  v300 = 0;
  v219 = 6u % dword_27DA388;
  v220 = *(_DWORD *)(dword_27DA384 + 4 * (6u % dword_27DA388));
  if ( v220 )
    v221 = *(_DWORD *)v220;
    v222 = *(_DWORD *)(*(_DWORD *)v220 + 12);
      v223 = v222 == 6;
      if ( v222 == 6 )
        v223 = *(_DWORD *)(v221 + 4) == 6;
      if ( v223 )
      v224 = *(_DWORD *)v221;
      if ( *(_DWORD *)v221 )
        v222 = *(_DWORD *)(v224 + 12);
        v220 = v221;
        v221 = *(_DWORD *)v221;
        if ( *(_DWORD *)(v224 + 12) % (unsigned int)dword_27DA388 == v219 )
      goto LABEL_381;
    v225 = v220 == 0;
    if ( v220 )
      v220 = *(_DWORD *)v220;
      v225 = v220 == 0;
    if ( !v225 )
      v226 = (int *)(v220 + 8);
LABEL_383:
        (unsigned __int64 *)&v298,
        v226);
      goto LABEL_384;
LABEL_381:
  v227 = operator new(0x10u);
  *v227 = 0;
  v227[1] = 6;
  v227[2] = &unk_28898CC;
  v226 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   v219,
                   6u,
                   (int)v227)
  if ( v299 == v300 )
    goto LABEL_383;
  sub_119C854(v299, v226);
  ++v299;
LABEL_384:
  v228 = 7u % dword_27DA388;
  v229 = *(_DWORD *)(dword_27DA384 + 4 * (7u % dword_27DA388));
  if ( !v229 )
    goto LABEL_396;
  v230 = *(_DWORD *)v229;
  v231 = *(_DWORD *)(*(_DWORD *)v229 + 12);
    v232 = v231 == 7;
    if ( v231 == 7 )
      v232 = *(_DWORD *)(v230 + 4) == 7;
    if ( v232 )
    v233 = *(_DWORD *)v230;
    if ( *(_DWORD *)v230 )
      v231 = *(_DWORD *)(v233 + 12);
      v229 = v230;
      v230 = *(_DWORD *)v230;
      if ( *(_DWORD *)(v233 + 12) % (unsigned int)dword_27DA388 == v228 )
  v234 = v229 == 0;
  if ( v229 )
    v229 = *(_DWORD *)v229;
    v234 = v229 == 0;
  if ( v234 )
LABEL_396:
    v235 = operator new(0x10u);
    *v235 = 0;
    v235[1] = 7;
    v235[2] = &unk_28898CC;
    v229 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v228,
             (int)v235);
  v236 = (int *)(v229 + 8);
      (unsigned __int64 *)&v298,
      v236);
    sub_119C854(v299, v236);
    ++v299;
  v237 = 8u % dword_27DA388;
  v238 = *(_DWORD *)(dword_27DA384 + 4 * (8u % dword_27DA388));
  if ( !v238 )
    goto LABEL_412;
  v239 = *(_DWORD *)v238;
  v240 = *(_DWORD *)(*(_DWORD *)v238 + 12);
    v241 = v240 == 8;
    if ( v240 == 8 )
      v241 = *(_DWORD *)(v239 + 4) == 8;
    if ( v241 )
    v242 = *(_DWORD *)v239;
    if ( *(_DWORD *)v239 )
      v240 = *(_DWORD *)(v242 + 12);
      v238 = v239;
      v239 = *(_DWORD *)v239;
      if ( *(_DWORD *)(v242 + 12) % (unsigned int)dword_27DA388 == v237 )
  v243 = v238 == 0;
  if ( v238 )
    v238 = *(_DWORD *)v238;
    v243 = v238 == 0;
  if ( v243 )
LABEL_412:
    v244 = operator new(0x10u);
    *v244 = 0;
    v244[1] = 8;
    v244[2] = &unk_28898CC;
    v238 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v237,
             (int)v244);
  v245 = (int *)(v238 + 8);
      v245);
    sub_119C854(v299, v245);
  v246 = 0x1Au % dword_27DA388;
  v247 = *(_DWORD *)(dword_27DA384 + 4 * (0x1Au % dword_27DA388));
  if ( !v247 )
    goto LABEL_428;
  v248 = *(_DWORD *)v247;
  v249 = *(_DWORD *)(*(_DWORD *)v247 + 12);
    v250 = v249 == 26;
    if ( v249 == 26 )
      v250 = *(_DWORD *)(v248 + 4) == 26;
    if ( v250 )
    v251 = *(_DWORD *)v248;
    if ( *(_DWORD *)v248 )
      v249 = *(_DWORD *)(v251 + 12);
      v247 = v248;
      v248 = *(_DWORD *)v248;
      if ( *(_DWORD *)(v251 + 12) % (unsigned int)dword_27DA388 == v246 )
  v252 = v247 == 0;
  if ( v247 )
    v247 = *(_DWORD *)v247;
    v252 = v247 == 0;
  if ( v252 )
LABEL_428:
    v253 = operator new(0x10u);
    *v253 = 0;
    v253[1] = 26;
    v253[2] = &unk_28898CC;
    v247 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v246,
             (int)v253);
  v254 = (int *)(v247 + 8);
      v254);
    sub_119C854(v299, v254);
  v255 = 0x18u % dword_27DA388;
  v256 = *(_DWORD *)(dword_27DA384 + 4 * (0x18u % dword_27DA388));
  if ( !v256 )
    goto LABEL_444;
  v257 = *(_DWORD *)v256;
  v258 = *(_DWORD *)(*(_DWORD *)v256 + 12);
    v259 = v258 == 24;
    if ( v258 == 24 )
      v259 = *(_DWORD *)(v257 + 4) == 24;
    if ( v259 )
    v260 = *(_DWORD *)v257;
    if ( *(_DWORD *)v257 )
      v258 = *(_DWORD *)(v260 + 12);
      v256 = v257;
      v257 = *(_DWORD *)v257;
      if ( *(_DWORD *)(v260 + 12) % (unsigned int)dword_27DA388 == v255 )
  v261 = v256 == 0;
  if ( v256 )
    v256 = *(_DWORD *)v256;
    v261 = v256 == 0;
  if ( v261 )
LABEL_444:
    v262 = operator new(0x10u);
    *v262 = 0;
    v262[1] = 24;
    v262[2] = &unk_28898CC;
    v256 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v255,
             (int)v262);
  v263 = (int *)(v256 + 8);
      v263);
    sub_119C854(v299, v263);
  v264 = 6u % dword_27DA388;
  v265 = *(_DWORD *)(dword_27DA384 + 4 * (6u % dword_27DA388));
  if ( !v265 )
    goto LABEL_460;
  v266 = *(_DWORD *)v265;
  v267 = *(_DWORD *)(*(_DWORD *)v265 + 12);
    v268 = v267 == 6;
    if ( v267 == 6 )
      v268 = *(_DWORD *)(v266 + 4) == 6;
    if ( v268 )
    v269 = *(_DWORD *)v266;
    if ( *(_DWORD *)v266 )
      v267 = *(_DWORD *)(v269 + 12);
      v265 = v266;
      v266 = *(_DWORD *)v266;
      if ( *(_DWORD *)(v269 + 12) % (unsigned int)dword_27DA388 == v264 )
  v270 = v265 == 0;
  if ( v265 )
    v265 = *(_DWORD *)v265;
    v270 = v265 == 0;
  if ( v270 )
LABEL_460:
    v271 = operator new(0x10u);
    *v271 = 0;
    v271[1] = 6;
    v271[2] = &unk_28898CC;
    v265 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v264,
             (int)v271);
  v272 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v265 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v272, (unsigned __int64 *)&v298);
  v274 = v299;
  v273 = v298;
  if ( v298 != v299 )
    do
      v277 = (int *)(*v273 - 12);
      if ( v277 != &dword_28898C0 )
        v275 = (unsigned int *)(*v273 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v276 = __ldrex(v275);
          while ( __strex(v276 - 1, v275) );
        }
        else
          v276 = (*v275)--;
        if ( v276 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v277);
      ++v273;
    while ( v273 != v274 );
    v273 = v298;
  if ( v273 )
    operator delete(v273);
  v279 = v302;
  v278 = v301;
  if ( v301 != v302 )
      v282 = (int *)(*v278 - 12);
      if ( v282 != &dword_28898C0 )
        v280 = (unsigned int *)(*v278 - 4);
            v281 = __ldrex(v280);
          while ( __strex(v281 - 1, v280) );
          v281 = (*v280)--;
        if ( v281 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v282);
      ++v278;
    while ( v278 != v279 );
    v278 = v301;
  if ( v278 )
    operator delete(v278);
  v284 = v305;
  v283 = v304;
  if ( v304 != v305 )
      v287 = (int *)(*v283 - 12);
      if ( v287 != &dword_28898C0 )
        v285 = (unsigned int *)(*v283 - 4);
            v286 = __ldrex(v285);
          while ( __strex(v286 - 1, v285) );
          v286 = (*v285)--;
        if ( v286 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v287);
      ++v283;
    while ( v283 != v284 );
    v283 = v304;
  if ( v283 )
    operator delete(v283);
  v289 = v308;
  v288 = v307;
  if ( v307 != v308 )
      v292 = (int *)(*v288 - 12);
      if ( v292 != &dword_28898C0 )
        v290 = (unsigned int *)(*v288 - 4);
            v291 = __ldrex(v290);
          while ( __strex(v291 - 1, v290) );
          v291 = (*v290)--;
        if ( v291 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v292);
      ++v288;
    while ( v288 != v289 );
    v288 = v307;
  if ( v288 )
    operator delete(v288);
  v294 = v311;
  v293 = v310;
  if ( v310 != v311 )
      v297 = (int *)(*v293 - 12);
      if ( v297 != &dword_28898C0 )
        v295 = (unsigned int *)(*v293 - 4);
            v296 = __ldrex(v295);
          while ( __strex(v296 - 1, v295) );
          v296 = (*v295)--;
        if ( v296 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v297);
      ++v293;
    while ( v293 != v294 );
    v293 = v310;
  if ( v293 )
    operator delete(v293);
}


int __fastcall BrewingStandScreenController::BrewingStandScreenController(int a1, int a2, const BlockPos *a3, int a4)
{
  int v4; // r4@1
  const BlockPos *v5; // r5@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  int v9; // r6@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r0@10
  unsigned int *v12; // r7@14
  unsigned int v13; // r0@16
  __int64 v14; // r0@21
  int v15; // r5@21
  unsigned int *v16; // r1@22
  unsigned int v17; // r0@24
  unsigned int *v18; // r6@28
  unsigned int v19; // r0@30
  int v20; // r5@35
  unsigned int *v21; // r1@36
  unsigned int v22; // r0@38
  unsigned int *v23; // r6@42
  unsigned int v24; // r0@44
  char v26; // [sp+4h] [bp-24h]@21
  int v27; // [sp+8h] [bp-20h]@21
  int v28; // [sp+Ch] [bp-1Ch]@1
  int v29; // [sp+10h] [bp-18h]@1

  v4 = a1;
  v28 = *(_DWORD *)a2;
  v5 = a3;
  v6 = *(_DWORD *)(a2 + 4);
  v29 = v6;
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  ContainerScreenController::ContainerScreenController(v4, (int)&v28, a4);
  v9 = v29;
  if ( v29 )
    v10 = (unsigned int *)(v29 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  *(_DWORD *)v4 = &off_26E100C;
  *(_QWORD *)(v4 + 628) = 6LL;
  *(_DWORD *)(v4 + 636) = 0;
  ContainerScreenController::setAssociatedBlockPos((ContainerScreenController *)v4, v5);
  ContainerScreenController::createContainerManagerController<BrewingStandContainerManagerModel,BrewingStandContainerManagerController,BlockPos &>(
    (int)&v26,
    v4,
    v4 + 488);
  v14 = *(_QWORD *)&v26;
  *(_DWORD *)&v26 = 0;
  v27 = 0;
  *(_DWORD *)(v4 + 632) = v14;
  v15 = *(_DWORD *)(v4 + 636);
  *(_DWORD *)(v4 + 636) = HIDWORD(v14);
  if ( v15 )
    v16 = (unsigned int *)(v15 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v20 = v27;
  if ( v27 )
    v21 = (unsigned int *)(v27 + 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      v23 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  BrewingStandScreenController::_registerBindings((BrewingStandScreenController *)v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 152))(v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 156))(v4);
  return v4;
}


char *__fastcall BrewingStandScreenController::_addToOrder(int a1, int a2, const void **a3, const void **a4)
{
  const void *v4; // r0@1
  int *v5; // r5@1
  int v6; // r4@1
  size_t v7; // r2@1
  char *result; // r0@2
  __int64 v9; // r0@3

  v4 = *a3;
  v5 = (int *)a4;
  v6 = a2;
  v7 = *((_DWORD *)*a3 - 3);
  if ( v7 != *((_DWORD *)*a4 - 3) || (result = (char *)memcmp(v4, *a4, v7)) != 0 )
  {
    v9 = *(_QWORD *)(v6 + 4);
    if ( (_DWORD)v9 == HIDWORD(v9) )
    {
      result = j_j_j__ZNSt6vectorISsSaISsEE19_M_emplace_back_auxIJRKSsEEEvDpOT__2((unsigned __int64 *)v6, v5);
    }
    else
      sub_119C854((int *)v9, v5);
      result = (char *)(*(_DWORD *)(v6 + 4) + 4);
      *(_DWORD *)(v6 + 4) = result;
  }
  return result;
}


void __fastcall BrewingStandScreenController::_registerCoalesceOrder(BrewingStandScreenController *this)
{
  BrewingStandScreenController::_registerCoalesceOrder(this);
}


void __fastcall BrewingStandScreenController::_registerAutoPlaceOrder(BrewingStandScreenController *this)
{
  BrewingStandScreenController::_registerAutoPlaceOrder(this);
}


void **__fastcall BrewingStandScreenController::_getButtonBDescription(BrewingStandScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r5@1
  MinecraftScreenController *v3; // r4@1
  void **result; // r0@3

  v2 = a2;
  v3 = this;
  if ( ContainerScreenController::_getInteractionModel(a2) || !ContainerScreenController::isInventoryPanelFocused(v2) )
    result = MinecraftScreenController::_getButtonBDescription(v3);
  else
    result = sub_119C884((void **)v3, "controller.buttonTip.backToBrewing");
  return result;
}


void __fastcall BrewingStandScreenController::_registerBindings(BrewingStandScreenController *this)
{
  BrewingStandScreenController *v1; // r9@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@9
  __int64 v9; // r1@9
  __int64 v10; // r1@9
  int v11; // r10@13
  int v12; // r0@13
  int v13; // r5@14
  int v14; // r7@14
  bool v15; // zf@15
  int v16; // r4@18
  bool v17; // zf@21
  _DWORD *v18; // r0@25
  _BYTE *v19; // r5@26
  size_t v20; // r0@26
  int i; // r2@26
  int v22; // t1@27
  _DWORD *v23; // r0@28
  __int64 v24; // r1@28
  __int64 v25; // r1@28
  int v26; // r10@32
  int v27; // r0@32
  int v28; // r5@33
  int v29; // r7@33
  bool v30; // zf@34
  int v31; // r4@37
  bool v32; // zf@40
  _DWORD *v33; // r0@44
  _BYTE *v34; // r5@45
  size_t v35; // r0@45
  int j; // r2@45
  int v37; // t1@46
  _DWORD *v38; // r0@47
  __int64 v39; // r1@47
  __int64 v40; // r1@47
  _DWORD *v41; // r0@51
  __int64 v42; // r1@51
  __int64 v43; // r1@51
  _DWORD *v44; // r0@55
  __int64 v45; // r1@55
  __int64 v46; // r1@55
  void *v47; // [sp+4h] [bp-124h]@55
  __int64 v48; // [sp+Ch] [bp-11Ch]@55
  _DWORD *v49; // [sp+14h] [bp-114h]@55
  __int64 v50; // [sp+1Ch] [bp-10Ch]@55
  int v51; // [sp+24h] [bp-104h]@55
  void *v52; // [sp+28h] [bp-100h]@51
  __int64 v53; // [sp+30h] [bp-F8h]@51
  _DWORD *v54; // [sp+38h] [bp-F0h]@51
  __int64 v55; // [sp+40h] [bp-E8h]@51
  int v56; // [sp+48h] [bp-E0h]@51
  void *v57; // [sp+4Ch] [bp-DCh]@47
  __int64 v58; // [sp+54h] [bp-D4h]@47
  _DWORD *v59; // [sp+5Ch] [bp-CCh]@47
  __int64 v60; // [sp+64h] [bp-C4h]@47
  int v61; // [sp+6Ch] [bp-BCh]@47
  int v62; // [sp+70h] [bp-B8h]@47
  void *v63; // [sp+74h] [bp-B4h]@28
  __int64 v64; // [sp+7Ch] [bp-ACh]@28
  _DWORD *v65; // [sp+84h] [bp-A4h]@28
  __int64 v66; // [sp+8Ch] [bp-9Ch]@28
  int v67; // [sp+94h] [bp-94h]@28
  int v68; // [sp+98h] [bp-90h]@28
  void *v69; // [sp+9Ch] [bp-8Ch]@9
  __int64 v70; // [sp+A4h] [bp-84h]@9
  _DWORD *v71; // [sp+ACh] [bp-7Ch]@9
  __int64 v72; // [sp+B4h] [bp-74h]@9
  int v73; // [sp+BCh] [bp-6Ch]@9
  void *v74; // [sp+C0h] [bp-68h]@5
  __int64 v75; // [sp+C8h] [bp-60h]@5
  _DWORD *v76; // [sp+D0h] [bp-58h]@5
  __int64 v77; // [sp+D8h] [bp-50h]@5
  int v78; // [sp+E0h] [bp-48h]@5
  void *v79; // [sp+E4h] [bp-44h]@1
  __int64 v80; // [sp+ECh] [bp-3Ch]@1
  _DWORD *v81; // [sp+F4h] [bp-34h]@1
  __int64 v82; // [sp+FCh] [bp-2Ch]@1
  char v83; // [sp+104h] [bp-24h]@1

  v1 = this;
  StringHash::StringHash<char [23]>(&v83, (int)"#brewing_bubbles_ratio");
  v2 = operator new(4u);
  LODWORD(v3) = sub_113F708;
  *v2 = v1;
  HIDWORD(v3) = sub_113F6D8;
  v81 = v2;
  v82 = v3;
  v79 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v80 = v4;
  ScreenController::bindFloat((int)v1, (int *)&v83, (int)&v81, (int)&v79);
  if ( (_DWORD)v80 )
    ((void (*)(void))v80)();
  if ( (_DWORD)v82 )
    ((void (*)(void))v82)();
  v78 = -632399908;
  v5 = operator new(4u);
  LODWORD(v6) = sub_113F770;
  *v5 = v1;
  HIDWORD(v6) = sub_113F740;
  v76 = v5;
  v77 = v6;
  v74 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v75 = v7;
  ScreenController::bindFloat((int)v1, &v78, (int)&v76, (int)&v74);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  v73 = -164206205;
  v8 = operator new(4u);
  LODWORD(v9) = sub_113F7D8;
  *v8 = v1;
  HIDWORD(v9) = sub_113F7A8;
  v71 = v8;
  v72 = v9;
  v69 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v70 = v10;
  ScreenController::bindFloat((int)v1, &v73, (int)&v71, (int)&v69);
  if ( (_DWORD)v70 )
    ((void (*)(void))v70)();
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  v11 = 7u % dword_27DA388;
  v12 = *(_DWORD *)(dword_27DA384 + 4 * (7u % dword_27DA388));
  if ( !v12 )
    goto LABEL_25;
  v13 = *(_DWORD *)v12;
  v14 = *(_DWORD *)(*(_DWORD *)v12 + 12);
  while ( 1 )
  {
    v15 = v14 == 7;
    if ( v14 == 7 )
      v15 = *(_DWORD *)(v13 + 4) == 7;
    if ( v15 )
      break;
    v16 = *(_DWORD *)v13;
    if ( *(_DWORD *)v13 )
    {
      v14 = *(_DWORD *)(v16 + 12);
      v12 = v13;
      v13 = *(_DWORD *)v13;
      if ( *(_DWORD *)(v16 + 12) % (unsigned int)dword_27DA388 == v11 )
        continue;
    }
  }
  v17 = v12 == 0;
  if ( v12 )
    v12 = *(_DWORD *)v12;
    v17 = v12 == 0;
  if ( v17 )
LABEL_25:
    v18 = operator new(0x10u);
    *v18 = 0;
    v18[1] = 7;
    v18[2] = &unk_28898CC;
    v12 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27DA384,
            v11,
            7u,
            (int)v18);
  v19 = *(_BYTE **)(v12 + 8);
  v20 = strlen(*(const char **)(v12 + 8));
  for ( i = -2128831035; v20; i = 16777619 * (i ^ v22) )
    v22 = *v19++;
    --v20;
  v68 = i;
  StringHash::StringHash<char [28]>(&v67, (int)"#empty_bottle_image_visible");
  v23 = operator new(4u);
  LODWORD(v24) = sub_113F816;
  *v23 = v1;
  HIDWORD(v24) = sub_113F80E;
  v65 = v23;
  v66 = v24;
  v63 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v64 = v25;
  ScreenController::bindBoolForCollection((int)v1, &v68, &v67, (int)&v65, (int)&v63);
  if ( (_DWORD)v64 )
    ((void (*)(void))v64)();
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  v26 = 8u % dword_27DA388;
  v27 = *(_DWORD *)(dword_27DA384 + 4 * (8u % dword_27DA388));
  if ( !v27 )
    goto LABEL_44;
  v28 = *(_DWORD *)v27;
  v29 = *(_DWORD *)(*(_DWORD *)v27 + 12);
    v30 = v29 == 8;
    if ( v29 == 8 )
      v30 = *(_DWORD *)(v28 + 4) == 8;
    if ( v30 )
    v31 = *(_DWORD *)v28;
    if ( *(_DWORD *)v28 )
      v29 = *(_DWORD *)(v31 + 12);
      v27 = v28;
      v28 = *(_DWORD *)v28;
      if ( *(_DWORD *)(v31 + 12) % (unsigned int)dword_27DA388 == v26 )
  v32 = v27 == 0;
  if ( v27 )
    v27 = *(_DWORD *)v27;
    v32 = v27 == 0;
  if ( v32 )
LABEL_44:
    v33 = operator new(0x10u);
    *v33 = 0;
    v33[1] = 8;
    v33[2] = &unk_28898CC;
    v27 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v26,
            8u,
            (int)v33);
  v34 = *(_BYTE **)(v27 + 8);
  v35 = strlen(*(const char **)(v27 + 8));
  for ( j = -2128831035; v35; j = 16777619 * (j ^ v37) )
    v37 = *v34++;
    --v35;
  v62 = j;
  StringHash::StringHash<char [26]>(&v61, (int)"#empty_fuel_image_visible");
  v38 = operator new(4u);
  LODWORD(v39) = sub_113F854;
  *v38 = v1;
  HIDWORD(v39) = sub_113F84C;
  v59 = v38;
  v60 = v39;
  v57 = operator new(1u);
  LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v40) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v58 = v40;
  ScreenController::bindBoolForCollection((int)v1, &v62, &v61, (int)&v59, (int)&v57);
  if ( (_DWORD)v58 )
    ((void (*)(void))v58)();
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  v56 = 1910138026;
  v41 = operator new(4u);
  LODWORD(v42) = sub_113F8B0;
  *v41 = v1;
  HIDWORD(v42) = sub_113F88A;
  v54 = v41;
  v55 = v42;
  v52 = operator new(1u);
  LODWORD(v43) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v43) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v53 = v43;
  ScreenController::bindBool((int)v1, &v56, (int)&v54, (int)&v52);
  if ( (_DWORD)v53 )
    ((void (*)(void))v53)();
  if ( (_DWORD)v55 )
    ((void (*)(void))v55)();
  v51 = 359185495;
  v44 = operator new(4u);
  LODWORD(v45) = sub_113F910;
  *v44 = v1;
  HIDWORD(v45) = sub_113F8E6;
  v49 = v44;
  v50 = v45;
  v47 = operator new(1u);
  LODWORD(v46) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v46) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v48 = v46;
  ScreenController::bindBool((int)v1, &v51, (int)&v49, (int)&v47);
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
}


ContainerScreenController *__fastcall BrewingStandScreenController::~BrewingStandScreenController(BrewingStandScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26E100C;
  v2 = *((_DWORD *)this + 159);
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
  return j_j_j__ZN25ContainerScreenControllerD2Ev(v1);
}


signed int __fastcall BrewingStandScreenController::_shouldEmptyBottleImageBeVisible(BrewingStandScreenController *this, int a2)
{
  int v2; // r8@1
  int v3; // r11@1
  int v4; // r10@1
  int v5; // r0@1
  int v6; // r6@2
  int v7; // r4@2
  bool v8; // zf@3
  int v9; // r5@6
  bool v10; // zf@9
  _DWORD *v11; // r0@13
  int v12; // r0@14
  int v13; // r4@14
  int v14; // r0@14
  bool v15; // zf@14
  signed int result; // r0@18

  v2 = a2;
  v3 = 7u % dword_27DA388;
  v4 = *((_DWORD *)this + 158);
  v5 = *(_DWORD *)(dword_27DA384 + 4 * (7u % dword_27DA388));
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  while ( 1 )
  {
    v8 = v7 == 7;
    if ( v7 == 7 )
      v8 = *(_DWORD *)(v6 + 4) == 7;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27DA388 == v3 )
        continue;
    }
  }
  v10 = v5 == 0;
  if ( v5 )
    v5 = *(_DWORD *)v5;
    v10 = v5 == 0;
  if ( v10 )
LABEL_13:
    v11 = operator new(0x10u);
    *v11 = 0;
    v11[1] = 7;
    v11[2] = &unk_28898CC;
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27DA384,
           v3,
           7u,
           (int)v11);
  v12 = ContainerManagerController::getItemInstance(v4, (int **)(v5 + 8), v2);
  v13 = v12;
  v14 = *(_BYTE *)(v12 + 15);
  v15 = v14 == 0;
  if ( v14 )
    v15 = *(_DWORD *)v13 == 0;
  if ( v15 || ItemInstance::isNull((ItemInstance *)v13) )
    result = 1;
  else
    result = 0;
    if ( !*(_BYTE *)(v13 + 14) )
      result = 1;
  return result;
}


int __fastcall BrewingStandScreenController::_onContainerSlotHovered(int a1, const void **a2, int a3)
{
  const void **v3; // r10@1
  int v4; // r9@1
  int v5; // r11@1
  int v6; // r0@1
  int v7; // r4@2
  int v8; // r5@2
  bool v9; // zf@3
  int v10; // r7@6
  bool v11; // zf@9
  _DWORD *v12; // r0@13
  const void *v13; // r11@14
  _DWORD *v14; // r1@14
  size_t v15; // r4@14
  int v16; // r6@16
  int v17; // r0@16
  int v18; // r9@17
  int v19; // r7@17
  bool v20; // zf@18
  int v21; // r8@21
  MinecraftScreenController *v22; // r2@24
  bool v23; // zf@25
  _DWORD *v24; // r0@29
  const void *v25; // r1@30
  int v26; // r0@31
  _DWORD *v27; // r1@31
  int v29; // [sp+4h] [bp-2Ch]@16
  int v30; // [sp+8h] [bp-28h]@1

  v30 = a1;
  v3 = a2;
  v4 = a3;
  v5 = 7u % dword_27DA388;
  v6 = *(_DWORD *)(dword_27DA384 + 4 * (7u % dword_27DA388));
  if ( !v6 )
    goto LABEL_13;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 12);
  while ( 1 )
  {
    v9 = v8 == 7;
    if ( v8 == 7 )
      v9 = *(_DWORD *)(v7 + 4) == 7;
    if ( v9 )
      break;
    v10 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
    {
      v8 = *(_DWORD *)(v10 + 12);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v10 + 12) % (unsigned int)dword_27DA388 == v5 )
        continue;
    }
  }
  v11 = v6 == 0;
  if ( v6 )
    v6 = *(_DWORD *)v6;
    v11 = v6 == 0;
  if ( v11 )
LABEL_13:
    v12 = operator new(0x10u);
    *v12 = 0;
    v12[1] = 7;
    v12[2] = &unk_28898CC;
    v6 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27DA384,
           v5,
           7u,
           (int)v12);
  v13 = *v3;
  v14 = *(_DWORD **)(v6 + 8);
  v15 = *((_DWORD *)*v3 - 3);
  if ( v15 != *(v14 - 3) || memcmp(*v3, v14, *((_DWORD *)*v3 - 3)) )
    v29 = v4;
    v16 = 6u % dword_27DA388;
    v17 = *(_DWORD *)(dword_27DA384 + 4 * (6u % dword_27DA388));
    if ( !v17 )
      goto LABEL_29;
    v18 = *(_DWORD *)v17;
    v19 = *(_DWORD *)(*(_DWORD *)v17 + 12);
    while ( 1 )
      v20 = v19 == 6;
      if ( v19 == 6 )
        v20 = *(_DWORD *)(v18 + 4) == 6;
      if ( v20 )
        break;
      v21 = *(_DWORD *)v18;
      if ( *(_DWORD *)v18 )
      {
        v19 = *(_DWORD *)(v21 + 12);
        v17 = v18;
        v18 = *(_DWORD *)v18;
        if ( *(_DWORD *)(v21 + 12) % (unsigned int)dword_27DA388 == v16 )
          continue;
      }
    v23 = v17 == 0;
    if ( v17 )
      v17 = *(_DWORD *)v17;
      v23 = v17 == 0;
    if ( v23 )
LABEL_29:
      v24 = operator new(0x10u);
      *v24 = 0;
      v24[1] = 6;
      v24[2] = &unk_28898CC;
      v17 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DA384,
              v16,
              6u,
              (int)v24);
      v13 = *v3;
      v15 = *((_DWORD *)*v3 - 3);
    v25 = *(const void **)(v17 + 8);
    if ( v15 == *((_DWORD *)v25 - 3) )
      v26 = memcmp(v13, v25, v15);
      v22 = (MinecraftScreenController *)v30;
      v27 = (_DWORD *)(v30 + 628);
      if ( !v26 )
        *v27 = 6;
        v4 = v29;
        return j_j_j__ZN25ContainerScreenController23_onContainerSlotHoveredERKSsi(v22, v3, v4);
    else
    v4 = v29;
    *v27 = 8;
    return j_j_j__ZN25ContainerScreenController23_onContainerSlotHoveredERKSsi(v22, v3, v4);
  v22 = (MinecraftScreenController *)v30;
  *(_DWORD *)(v30 + 628) = 7;
  return j_j_j__ZN25ContainerScreenController23_onContainerSlotHoveredERKSsi(v22, v3, v4);
}


signed int __fastcall BrewingStandScreenController::_isStillValid(BrewingStandScreenController *this)
{
  BrewingStandScreenController *v1; // r4@1
  BrewingStandContainerManagerController *v2; // r5@2
  int v3; // r0@2
  signed int result; // r0@3

  v1 = this;
  if ( MinecraftScreenModel::isPlayerValid(*((MinecraftScreenModel **)this + 106)) != 1
    || (v2 = (BrewingStandContainerManagerController *)*((_DWORD *)v1 + 158),
        v3 = ClientInstanceScreenModel::getPickRange(*((ClientInstanceScreenModel **)v1 + 106)),
        BrewingStandContainerManagerController::isStandValid(v2, *(float *)&v3) != 1) )
  {
    result = 0;
  }
  else
    result = ContainerScreenController::_isStillValid(v1);
  return result;
}


void **__fastcall BrewingStandScreenController::_getButtonADescription(BrewingStandScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r5@1
  ContainerScreenController *v3; // r4@1
  void **result; // r0@2

  v2 = a2;
  v3 = this;
  if ( ContainerScreenController::_getInteractionModel(a2) )
  {
    result = ContainerScreenController::_getButtonADescription(v3, v2);
  }
  else if ( ContainerScreenController::isSlotsPanelFocused(v2) == 1 )
    result = sub_119C884((void **)v3, "controller.buttonTip.select.slot");
  else
    result = sub_119C884((void **)v3, "controller.buttonTip.takeItem");
  return result;
}
