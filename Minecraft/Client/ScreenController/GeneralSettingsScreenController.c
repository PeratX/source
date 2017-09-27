

void __fastcall GeneralSettingsScreenController::_registerControllerCallbacks(GeneralSettingsScreenController *this)
{
  GeneralSettingsScreenController *v1; // r7@1
  int v2; // r0@1
  int v3; // r4@1
  _DWORD *v4; // r0@1
  _DWORD *v5; // r0@1
  _DWORD *v6; // r0@1
  _DWORD *v7; // r0@1
  _DWORD *v8; // r0@1
  void *v9; // r0@11
  void *v10; // r0@12
  void *v11; // r0@13
  _DWORD *v12; // r0@14
  _DWORD *v13; // r0@18
  _DWORD *v14; // r0@22
  _DWORD *v15; // r0@26
  _DWORD *v16; // r0@30
  _DWORD *v17; // r0@34
  _DWORD *v18; // r0@38
  _DWORD *v19; // r0@42
  int v20; // r4@46
  _DWORD *v21; // r0@46
  void *v22; // r0@48
  int v23; // r4@49
  _DWORD *v24; // r0@49
  void *v25; // r0@51
  int v26; // r4@52
  void *v27; // r0@54
  int v28; // r4@55
  _DWORD *v29; // r0@55
  void *v30; // r0@57
  int v31; // r4@58
  _DWORD *v32; // r0@58
  void *v33; // r0@60
  int v34; // r4@61
  _DWORD *v35; // r0@61
  void *v36; // r0@63
  double v37; // r0@64
  void *v38; // r0@64
  void *v39; // r0@65
  void *v40; // r0@66
  int v41; // r4@67
  _DWORD *v42; // r0@67
  void *v43; // r0@69
  int v44; // r4@70
  _DWORD *v45; // r0@70
  void *v46; // r0@72
  void *v47; // r0@73
  void *v48; // r0@74
  void *v49; // r0@75
  void *v50; // r0@76
  void *v51; // r0@77
  double v52; // r0@78
  void *v53; // r0@78
  void *v54; // r0@79
  void *v55; // r0@80
  void *v56; // r0@83
  int v57; // r4@84
  _DWORD *v58; // r0@84
  void *v59; // r0@86
  int v60; // r0@87
  int v61; // r4@87
  _DWORD *v62; // r0@87
  _DWORD *v63; // r0@87
  _DWORD *v64; // r0@87
  _DWORD *v65; // r0@87
  _DWORD *v66; // r0@87
  _DWORD *v67; // r0@87
  void *v68; // r0@91
  void *v69; // r0@104
  void *v70; // r0@105
  void *v71; // r0@106
  void *v72; // r0@107
  void *v73; // r0@110
  void *v74; // r0@113
  void *v75; // r0@116
  double v76; // r0@117
  void *v77; // r0@117
  void *v78; // r0@118
  void *v79; // r0@119
  void *v80; // r0@120
  void *v81; // r0@121
  void *v82; // r0@122
  void *v83; // r0@123
  void *v84; // r0@128
  void *v85; // r0@133
  void *v86; // r0@136
  _DWORD *v87; // r0@137
  void *v88; // r0@143
  _DWORD *v89; // r0@144
  void *v90; // r0@148
  void *v91; // r0@157
  void *v92; // r0@162
  double v93; // r0@163
  void *v94; // r0@163
  void *v95; // r0@164
  void *v96; // r0@165
  void *v97; // r0@166
  void *v98; // r0@167
  void *v99; // r0@168
  double v100; // r0@169
  void *v101; // r0@169
  void *v102; // r0@170
  void *v103; // r0@171
  void *v104; // r0@172
  void *v105; // r0@173
  void *v106; // r0@174
  void *v107; // r0@175
  void *v108; // r0@176
  void *v109; // r0@177
  void *v110; // r0@178
  void *v111; // r0@179
  void *v112; // r0@180
  void *v113; // r0@181
  void *v114; // r0@182
  void *v115; // r0@183
  int v116; // r0@184
  int v117; // r4@184
  _DWORD *v118; // r0@184
  __int64 v119; // r1@184
  _DWORD *v120; // r0@184
  __int64 v121; // r1@184
  _DWORD *v122; // r0@184
  __int64 v123; // r1@184
  _DWORD *v124; // r0@184
  __int64 v125; // r1@184
  _DWORD *v126; // r0@184
  __int64 v127; // r1@184
  _DWORD *v128; // r0@184
  __int64 v129; // r2@184
  void *v130; // r0@184
  __int64 v131; // r1@184
  void *v132; // r0@186
  void *v133; // r0@199
  void *v134; // r0@200
  void *v135; // r0@201
  void *v136; // r0@202
  int v137; // r0@203
  int v138; // r4@203
  _DWORD *v139; // r0@203
  __int64 v140; // r1@203
  _DWORD *v141; // r0@203
  __int64 v142; // r1@203
  _DWORD *v143; // r0@203
  __int64 v144; // r1@203
  _DWORD *v145; // r0@203
  __int64 v146; // r1@203
  _DWORD *v147; // r0@203
  __int64 v148; // r1@203
  _DWORD *v149; // r0@203
  __int64 v150; // r2@203
  void *v151; // r0@203
  __int64 v152; // r1@203
  void *v153; // r0@205
  void *v154; // r0@218
  void *v155; // r0@219
  void *v156; // r0@220
  void *v157; // r0@221
  void *v158; // r0@222
  void *v159; // r0@223
  void *v160; // r0@224
  void *v161; // r0@225
  void *v162; // r0@226
  void *v163; // r0@227
  void *v164; // r0@228
  void *v165; // r0@229
  void *v166; // r0@230
  void *v167; // r0@231
  void *v168; // r0@232
  void *v169; // r0@233
  __int64 v170; // r1@233
  __int64 v171; // r1@233
  void *v172; // r0@237
  void *v173; // r0@238
  void *v174; // r0@239
  void *v175; // r0@240
  void *v176; // r0@241
  void *v177; // r0@242
  void *v178; // r0@243
  void *v179; // r0@244
  void *v180; // r0@245
  void *v181; // r0@246
  void *v182; // r0@247
  void *v183; // r0@252
  void *v184; // r0@257
  int v185; // r4@258
  void *v186; // r0@258
  _DWORD *v187; // r0@259
  __int64 v188; // r1@259
  _DWORD *v189; // r0@261
  __int64 v190; // r1@261
  __int64 v191; // r1@261
  _DWORD *v192; // r0@265
  __int64 v193; // r1@265
  __int64 v194; // r1@265
  _DWORD *v195; // r0@269
  __int64 v196; // r1@269
  __int64 v197; // r1@269
  _DWORD *v198; // r0@273
  __int64 v199; // r1@273
  __int64 v200; // r1@273
  void *v201; // r0@277
  unsigned __int64 *v202; // r7@278
  unsigned int *v203; // r2@280
  signed int v204; // r1@282
  unsigned __int64 *v205; // r6@288
  int v206; // r1@288
  void *v207; // r0@288
  unsigned __int64 *v208; // r7@293
  unsigned int *v209; // r2@295
  signed int v210; // r1@297
  unsigned __int64 *v211; // r6@303
  int v212; // r1@303
  void *v213; // r0@303
  unsigned __int64 *v214; // r7@308
  unsigned int *v215; // r2@310
  signed int v216; // r1@312
  unsigned __int64 *v217; // r6@318
  int v218; // r1@318
  void *v219; // r0@318
  unsigned __int64 *v220; // r7@323
  unsigned int *v221; // r2@325
  signed int v222; // r1@327
  unsigned __int64 *v223; // r6@333
  int v224; // r1@333
  void *v225; // r0@333
  unsigned __int64 *v226; // r6@338
  unsigned int *v227; // r2@340
  signed int v228; // r1@342
  unsigned __int64 *v229; // r5@348
  int v230; // r1@348
  void *v231; // r0@348
  unsigned int *v232; // r2@354
  signed int v233; // r1@356
  unsigned int *v234; // r2@358
  signed int v235; // r1@360
  unsigned int *v236; // r2@362
  signed int v237; // r1@364
  unsigned int *v238; // r2@366
  signed int v239; // r1@368
  unsigned int *v240; // r2@370
  signed int v241; // r1@372
  unsigned int *v242; // r2@374
  signed int v243; // r1@376
  unsigned int *v244; // r2@378
  signed int v245; // r1@380
  unsigned int *v246; // r2@382
  signed int v247; // r1@384
  unsigned int *v248; // r2@386
  signed int v249; // r1@388
  unsigned int *v250; // r2@390
  signed int v251; // r1@392
  unsigned int *v252; // r2@394
  signed int v253; // r1@396
  unsigned int *v254; // r2@398
  signed int v255; // r1@400
  unsigned int *v256; // r2@402
  signed int v257; // r1@404
  unsigned int *v258; // r2@406
  signed int v259; // r1@408
  unsigned int *v260; // r2@410
  signed int v261; // r1@412
  unsigned int *v262; // r2@414
  signed int v263; // r1@416
  unsigned int *v264; // r2@418
  signed int v265; // r1@420
  unsigned int *v266; // r2@422
  signed int v267; // r1@424
  unsigned int *v268; // r2@426
  signed int v269; // r1@428
  unsigned int *v270; // r2@430
  signed int v271; // r1@432
  unsigned int *v272; // r2@434
  signed int v273; // r1@436
  unsigned int *v274; // r2@438
  signed int v275; // r1@440
  unsigned int *v276; // r2@442
  signed int v277; // r1@444
  unsigned int *v278; // r2@446
  signed int v279; // r1@448
  unsigned int *v280; // r2@450
  signed int v281; // r1@452
  unsigned int *v282; // r2@454
  signed int v283; // r1@456
  unsigned int *v284; // r2@458
  signed int v285; // r1@460
  unsigned int *v286; // r2@462
  signed int v287; // r1@464
  unsigned int *v288; // r2@466
  signed int v289; // r1@468
  unsigned int *v290; // r2@470
  signed int v291; // r1@472
  unsigned int *v292; // r2@474
  signed int v293; // r1@476
  unsigned int *v294; // r2@478
  signed int v295; // r1@480
  unsigned int *v296; // r2@482
  signed int v297; // r1@484
  unsigned int *v298; // r2@486
  signed int v299; // r1@488
  unsigned int *v300; // r2@490
  signed int v301; // r1@492
  unsigned int *v302; // r2@494
  signed int v303; // r1@496
  unsigned int *v304; // r2@498
  signed int v305; // r1@500
  unsigned int *v306; // r2@502
  signed int v307; // r1@504
  unsigned int *v308; // r2@506
  signed int v309; // r1@508
  unsigned int *v310; // r2@510
  signed int v311; // r1@512
  unsigned int *v312; // r2@514
  signed int v313; // r1@516
  unsigned int *v314; // r2@518
  signed int v315; // r1@520
  unsigned int *v316; // r2@522
  signed int v317; // r1@524
  unsigned int *v318; // r2@526
  signed int v319; // r1@528
  unsigned int *v320; // r2@530
  signed int v321; // r1@532
  unsigned int *v322; // r2@534
  signed int v323; // r1@536
  unsigned int *v324; // r2@538
  signed int v325; // r1@540
  unsigned int *v326; // r2@542
  signed int v327; // r1@544
  unsigned int *v328; // r2@546
  signed int v329; // r1@548
  unsigned int *v330; // r2@550
  signed int v331; // r1@552
  unsigned int *v332; // r2@554
  signed int v333; // r1@556
  unsigned int *v334; // r2@558
  signed int v335; // r1@560
  unsigned int *v336; // r2@562
  signed int v337; // r1@564
  unsigned int *v338; // r2@566
  signed int v339; // r1@568
  unsigned int *v340; // r2@570
  signed int v341; // r1@572
  unsigned int *v342; // r2@574
  signed int v343; // r1@576
  unsigned int *v344; // r2@578
  signed int v345; // r1@580
  unsigned int *v346; // r2@582
  signed int v347; // r1@584
  unsigned int *v348; // r2@586
  signed int v349; // r1@588
  unsigned int *v350; // r2@590
  signed int v351; // r1@592
  unsigned int *v352; // r2@594
  signed int v353; // r1@596
  unsigned int *v354; // r2@598
  signed int v355; // r1@600
  unsigned int *v356; // r2@602
  signed int v357; // r1@604
  unsigned int *v358; // r2@606
  signed int v359; // r1@608
  unsigned int *v360; // r2@610
  signed int v361; // r1@612
  unsigned int *v362; // r2@614
  signed int v363; // r1@616
  unsigned int *v364; // r2@618
  signed int v365; // r1@620
  unsigned int *v366; // r2@622
  signed int v367; // r1@624
  unsigned int *v368; // r2@626
  signed int v369; // r1@628
  unsigned int *v370; // r2@630
  signed int v371; // r1@632
  unsigned int *v372; // r2@634
  signed int v373; // r1@636
  unsigned int *v374; // r2@638
  signed int v375; // r1@640
  unsigned int *v376; // r2@642
  signed int v377; // r1@644
  unsigned int *v378; // r2@646
  signed int v379; // r1@648
  unsigned int *v380; // r2@650
  signed int v381; // r1@652
  unsigned int *v382; // r2@654
  signed int v383; // r1@656
  unsigned int *v384; // r2@658
  signed int v385; // r1@660
  unsigned int *v386; // r2@662
  signed int v387; // r1@664
  unsigned int *v388; // r2@666
  signed int v389; // r1@668
  unsigned int *v390; // r2@670
  signed int v391; // r1@672
  unsigned int *v392; // r2@674
  signed int v393; // r1@676
  unsigned int *v394; // r2@678
  signed int v395; // r1@680
  unsigned int *v396; // r2@682
  signed int v397; // r1@684
  unsigned int *v398; // r2@686
  signed int v399; // r1@688
  unsigned int *v400; // r2@690
  signed int v401; // r1@692
  unsigned int *v402; // r2@694
  signed int v403; // r1@696
  unsigned int *v404; // r2@698
  signed int v405; // r1@700
  unsigned int *v406; // r2@702
  signed int v407; // r1@704
  unsigned int *v408; // r2@706
  signed int v409; // r1@708
  unsigned int *v410; // r2@710
  signed int v411; // r1@712
  unsigned int *v412; // r2@714
  signed int v413; // r1@716
  unsigned int *v414; // r2@718
  signed int v415; // r1@720
  unsigned int *v416; // r2@722
  signed int v417; // r1@724
  unsigned int *v418; // r2@726
  signed int v419; // r1@728
  unsigned int *v420; // r2@730
  signed int v421; // r1@732
  unsigned int *v422; // r2@734
  signed int v423; // r1@736
  unsigned int *v424; // r2@738
  signed int v425; // r1@740
  unsigned int *v426; // r2@742
  signed int v427; // r1@744
  unsigned int *v428; // r2@746
  signed int v429; // r1@748
  unsigned int *v430; // r2@750
  signed int v431; // r1@752
  unsigned int *v432; // r2@754
  signed int v433; // r1@756
  unsigned int *v434; // r2@758
  signed int v435; // r1@760
  unsigned int *v436; // r2@762
  signed int v437; // r1@764
  int v438; // [sp+38h] [bp-9E8h]@277
  void *v439; // [sp+3Ch] [bp-9E4h]@273
  __int64 v440; // [sp+44h] [bp-9DCh]@273
  _DWORD *v441; // [sp+4Ch] [bp-9D4h]@273
  __int64 v442; // [sp+54h] [bp-9CCh]@273
  int v443; // [sp+5Ch] [bp-9C4h]@273
  int v444; // [sp+60h] [bp-9C0h]@273
  void *v445; // [sp+64h] [bp-9BCh]@269
  __int64 v446; // [sp+6Ch] [bp-9B4h]@269
  _DWORD *v447; // [sp+74h] [bp-9ACh]@269
  __int64 v448; // [sp+7Ch] [bp-9A4h]@269
  int v449; // [sp+84h] [bp-99Ch]@269
  int v450; // [sp+88h] [bp-998h]@269
  void *v451; // [sp+8Ch] [bp-994h]@265
  __int64 v452; // [sp+94h] [bp-98Ch]@265
  _DWORD *v453; // [sp+9Ch] [bp-984h]@265
  __int64 v454; // [sp+A4h] [bp-97Ch]@265
  int v455; // [sp+ACh] [bp-974h]@265
  int v456; // [sp+B0h] [bp-970h]@265
  void *v457; // [sp+B4h] [bp-96Ch]@261
  __int64 v458; // [sp+BCh] [bp-964h]@261
  _DWORD *v459; // [sp+C4h] [bp-95Ch]@261
  __int64 v460; // [sp+CCh] [bp-954h]@261
  int v461; // [sp+D4h] [bp-94Ch]@261
  _DWORD *v462; // [sp+D8h] [bp-948h]@259
  __int64 v463; // [sp+E0h] [bp-940h]@259
  int v464; // [sp+ECh] [bp-934h]@258
  char v465; // [sp+F0h] [bp-930h]@254
  void (*v466)(void); // [sp+F8h] [bp-928h]@253
  int v467; // [sp+FCh] [bp-924h]@254
  int v468; // [sp+104h] [bp-91Ch]@253
  char v469; // [sp+108h] [bp-918h]@249
  void (*v470)(void); // [sp+110h] [bp-910h]@248
  int v471; // [sp+114h] [bp-90Ch]@249
  int v472; // [sp+11Ch] [bp-904h]@248
  int v473; // [sp+124h] [bp-8FCh]@247
  int v474; // [sp+12Ch] [bp-8F4h]@246
  int v475; // [sp+134h] [bp-8ECh]@245
  int v476; // [sp+13Ch] [bp-8E4h]@244
  int v477; // [sp+144h] [bp-8DCh]@243
  int v478; // [sp+14Ch] [bp-8D4h]@242
  int v479; // [sp+154h] [bp-8CCh]@241
  int v480; // [sp+15Ch] [bp-8C4h]@240
  int v481; // [sp+164h] [bp-8BCh]@239
  int v482; // [sp+16Ch] [bp-8B4h]@238
  int v483; // [sp+174h] [bp-8ACh]@237
  void *v484; // [sp+178h] [bp-8A8h]@233
  __int64 v485; // [sp+180h] [bp-8A0h]@233
  void *v486; // [sp+188h] [bp-898h]@233
  __int64 v487; // [sp+190h] [bp-890h]@233
  int v488; // [sp+198h] [bp-888h]@233
  int v489; // [sp+1A0h] [bp-880h]@232
  int v490; // [sp+1A8h] [bp-878h]@231
  int v491; // [sp+1B0h] [bp-870h]@230
  int v492; // [sp+1B8h] [bp-868h]@229
  int v493; // [sp+1C0h] [bp-860h]@228
  int v494; // [sp+1C8h] [bp-858h]@227
  int v495; // [sp+1D0h] [bp-850h]@226
  int v496; // [sp+1D8h] [bp-848h]@225
  int v497; // [sp+1E0h] [bp-840h]@224
  int v498; // [sp+1E8h] [bp-838h]@223
  int v499; // [sp+1F0h] [bp-830h]@222
  void *v500; // [sp+1F4h] [bp-82Ch]@203
  __int64 v501; // [sp+1FCh] [bp-824h]@203
  int v502; // [sp+208h] [bp-818h]@203
  _DWORD *v503; // [sp+20Ch] [bp-814h]@203
  __int64 v504; // [sp+214h] [bp-80Ch]@203
  _DWORD *v505; // [sp+21Ch] [bp-804h]@203
  __int64 v506; // [sp+224h] [bp-7FCh]@203
  _DWORD *v507; // [sp+22Ch] [bp-7F4h]@203
  __int64 v508; // [sp+234h] [bp-7ECh]@203
  _DWORD *v509; // [sp+23Ch] [bp-7E4h]@203
  __int64 v510; // [sp+244h] [bp-7DCh]@203
  _DWORD *v511; // [sp+24Ch] [bp-7D4h]@203
  __int64 v512; // [sp+254h] [bp-7CCh]@203
  _DWORD *v513; // [sp+25Ch] [bp-7C4h]@203
  __int64 v514; // [sp+264h] [bp-7BCh]@203
  int v515; // [sp+270h] [bp-7B0h]@203
  int v516; // [sp+278h] [bp-7A8h]@203
  int v517; // [sp+280h] [bp-7A0h]@203
  int v518; // [sp+288h] [bp-798h]@203
  void *v519; // [sp+28Ch] [bp-794h]@184
  __int64 v520; // [sp+294h] [bp-78Ch]@184
  int v521; // [sp+2A0h] [bp-780h]@184
  _DWORD *v522; // [sp+2A4h] [bp-77Ch]@184
  __int64 v523; // [sp+2ACh] [bp-774h]@184
  _DWORD *v524; // [sp+2B4h] [bp-76Ch]@184
  __int64 v525; // [sp+2BCh] [bp-764h]@184
  _DWORD *v526; // [sp+2C4h] [bp-75Ch]@184
  __int64 v527; // [sp+2CCh] [bp-754h]@184
  _DWORD *v528; // [sp+2D4h] [bp-74Ch]@184
  __int64 v529; // [sp+2DCh] [bp-744h]@184
  _DWORD *v530; // [sp+2E4h] [bp-73Ch]@184
  __int64 v531; // [sp+2ECh] [bp-734h]@184
  _DWORD *v532; // [sp+2F4h] [bp-72Ch]@184
  __int64 v533; // [sp+2FCh] [bp-724h]@184
  int v534; // [sp+308h] [bp-718h]@184
  int v535; // [sp+310h] [bp-710h]@184
  int v536; // [sp+318h] [bp-708h]@184
  int v537; // [sp+320h] [bp-700h]@184
  int v538; // [sp+328h] [bp-6F8h]@183
  int v539; // [sp+330h] [bp-6F0h]@182
  int v540; // [sp+338h] [bp-6E8h]@181
  int v541; // [sp+340h] [bp-6E0h]@180
  int v542; // [sp+348h] [bp-6D8h]@179
  int v543; // [sp+350h] [bp-6D0h]@178
  int v544; // [sp+358h] [bp-6C8h]@177
  int v545; // [sp+360h] [bp-6C0h]@176
  int v546; // [sp+368h] [bp-6B8h]@175
  int v547; // [sp+370h] [bp-6B0h]@174
  int v548; // [sp+378h] [bp-6A8h]@173
  int v549; // [sp+380h] [bp-6A0h]@172
  int v550; // [sp+388h] [bp-698h]@171
  int v551; // [sp+398h] [bp-688h]@169
  int v552; // [sp+39Ch] [bp-684h]@169
  int v553; // [sp+3A0h] [bp-680h]@169
  int v554; // [sp+3A4h] [bp-67Ch]@169
  void *ptr; // [sp+3A8h] [bp-678h]@169
  int v556; // [sp+3ACh] [bp-674h]@290
  unsigned __int64 *v557; // [sp+3B0h] [bp-670h]@278
  int v558; // [sp+3B4h] [bp-66Ch]@290
  int v559; // [sp+3C0h] [bp-660h]@291
  int v560; // [sp+3C8h] [bp-658h]@168
  int v561; // [sp+3D0h] [bp-650h]@167
  int v562; // [sp+3D8h] [bp-648h]@166
  int v563; // [sp+3E8h] [bp-638h]@163
  int v564; // [sp+3ECh] [bp-634h]@163
  int v565; // [sp+3F0h] [bp-630h]@163
  int v566; // [sp+3F4h] [bp-62Ch]@163
  int v567; // [sp+3F8h] [bp-628h]@163
  int v568; // [sp+3FCh] [bp-624h]@163
  void *v569; // [sp+400h] [bp-620h]@163
  int v570; // [sp+404h] [bp-61Ch]@305
  unsigned __int64 *v571; // [sp+408h] [bp-618h]@293
  int v572; // [sp+40Ch] [bp-614h]@305
  int v573; // [sp+418h] [bp-608h]@306
  char v574; // [sp+41Ch] [bp-604h]@159
  void (*v575)(void); // [sp+424h] [bp-5FCh]@158
  int v576; // [sp+428h] [bp-5F8h]@159
  int v577; // [sp+430h] [bp-5F0h]@158
  char v578; // [sp+434h] [bp-5ECh]@154
  void (*v579)(void); // [sp+43Ch] [bp-5E4h]@153
  int v580; // [sp+440h] [bp-5E0h]@154
  int v581; // [sp+448h] [bp-5D8h]@153
  void *v582; // [sp+44Ch] [bp-5D4h]@149
  void (*v583)(void); // [sp+454h] [bp-5CCh]@149
  signed int (*v584)(); // [sp+458h] [bp-5C8h]@149
  void *v585; // [sp+45Ch] [bp-5C4h]@149
  void (*v586)(void); // [sp+464h] [bp-5BCh]@149
  int (*v587)(); // [sp+468h] [bp-5B8h]@149
  int v588; // [sp+46Ch] [bp-5B4h]@149
  int v589; // [sp+474h] [bp-5ACh]@148
  void *v590; // [sp+478h] [bp-5A8h]@144
  void (*v591)(void); // [sp+480h] [bp-5A0h]@144
  signed int (*v592)(); // [sp+484h] [bp-59Ch]@144
  _DWORD *v593; // [sp+488h] [bp-598h]@144
  void (*v594)(void); // [sp+490h] [bp-590h]@144
  signed int (__fastcall *v595)(int **); // [sp+494h] [bp-58Ch]@144
  int v596; // [sp+498h] [bp-588h]@144
  void *v597; // [sp+49Ch] [bp-584h]@141
  void (*v598)(void); // [sp+4A4h] [bp-57Ch]@141
  void **(__fastcall *v599)(void **, int, signed int); // [sp+4A8h] [bp-578h]@141
  int v600; // [sp+4B0h] [bp-570h]@141
  void *v601; // [sp+4B4h] [bp-56Ch]@137
  void (*v602)(void); // [sp+4BCh] [bp-564h]@137
  signed int (*v603)(); // [sp+4C0h] [bp-560h]@137
  _DWORD *v604; // [sp+4C4h] [bp-55Ch]@137
  void (*v605)(void); // [sp+4CCh] [bp-554h]@137
  int (__fastcall *v606)(int); // [sp+4D0h] [bp-550h]@137
  int v607; // [sp+4D4h] [bp-54Ch]@137
  void *v608; // [sp+4D8h] [bp-548h]@134
  void (*v609)(void); // [sp+4E0h] [bp-540h]@134
  void **(__fastcall *v610)(void **, int, signed int); // [sp+4E4h] [bp-53Ch]@134
  int v611; // [sp+4ECh] [bp-534h]@134
  char v612; // [sp+4F0h] [bp-530h]@130
  void (*v613)(void); // [sp+4F8h] [bp-528h]@129
  int v614; // [sp+4FCh] [bp-524h]@130
  int v615; // [sp+504h] [bp-51Ch]@129
  char v616; // [sp+508h] [bp-518h]@125
  void (*v617)(void); // [sp+510h] [bp-510h]@124
  int v618; // [sp+514h] [bp-50Ch]@125
  int v619; // [sp+51Ch] [bp-504h]@124
  int v620; // [sp+524h] [bp-4FCh]@123
  int v621; // [sp+534h] [bp-4ECh]@117
  int v622; // [sp+538h] [bp-4E8h]@117
  int v623; // [sp+53Ch] [bp-4E4h]@117
  int v624; // [sp+540h] [bp-4E0h]@117
  int v625; // [sp+544h] [bp-4DCh]@117
  int v626; // [sp+548h] [bp-4D8h]@117
  int v627; // [sp+54Ch] [bp-4D4h]@117
  int v628; // [sp+550h] [bp-4D0h]@117
  int v629; // [sp+554h] [bp-4CCh]@117
  int v630; // [sp+558h] [bp-4C8h]@117
  int v631; // [sp+55Ch] [bp-4C4h]@117
  int v632; // [sp+560h] [bp-4C0h]@117
  void *v633; // [sp+564h] [bp-4BCh]@117
  int v634; // [sp+568h] [bp-4B8h]@320
  unsigned __int64 *v635; // [sp+56Ch] [bp-4B4h]@308
  int v636; // [sp+570h] [bp-4B0h]@320
  int v637; // [sp+57Ch] [bp-4A4h]@321
  void *v638; // [sp+580h] [bp-4A0h]@114
  void (*v639)(void); // [sp+588h] [bp-498h]@114
  void (__fastcall *v640)(int *, int, signed int); // [sp+58Ch] [bp-494h]@114
  int v641; // [sp+594h] [bp-48Ch]@114
  void *v642; // [sp+598h] [bp-488h]@111
  void (*v643)(void); // [sp+5A0h] [bp-480h]@111
  void (__fastcall *v644)(int *, int, signed int); // [sp+5A4h] [bp-47Ch]@111
  int v645; // [sp+5ACh] [bp-474h]@111
  void *v646; // [sp+5B0h] [bp-470h]@108
  void (*v647)(void); // [sp+5B8h] [bp-468h]@108
  void (__fastcall *v648)(int *, int, signed int); // [sp+5BCh] [bp-464h]@108
  int v649; // [sp+5C4h] [bp-45Ch]@108
  char v650; // [sp+5C8h] [bp-458h]@88
  void (*v651)(void); // [sp+5D0h] [bp-450h]@87
  int v652; // [sp+5D4h] [bp-44Ch]@88
  int v653; // [sp+5DCh] [bp-444h]@87
  _DWORD *v654; // [sp+5E0h] [bp-440h]@87
  void (*v655)(void); // [sp+5E8h] [bp-438h]@87
  int (__fastcall *v656)(Option ***); // [sp+5ECh] [bp-434h]@87
  _DWORD *v657; // [sp+5F0h] [bp-430h]@87
  void (*v658)(void); // [sp+5F8h] [bp-428h]@87
  int (__fastcall *v659)(Option ***); // [sp+5FCh] [bp-424h]@87
  _DWORD *v660; // [sp+600h] [bp-420h]@87
  void (*v661)(void); // [sp+608h] [bp-418h]@87
  int (__fastcall *v662)(Option ***, float); // [sp+60Ch] [bp-414h]@87
  _DWORD *v663; // [sp+610h] [bp-410h]@87
  void (*v664)(void); // [sp+618h] [bp-408h]@87
  int (__fastcall *v665)(Option ***); // [sp+61Ch] [bp-404h]@87
  _DWORD *v666; // [sp+620h] [bp-400h]@87
  void (*v667)(void); // [sp+628h] [bp-3F8h]@87
  int (__fastcall *v668)(int); // [sp+62Ch] [bp-3F4h]@87
  _DWORD *v669; // [sp+630h] [bp-3F0h]@87
  void (*v670)(void); // [sp+638h] [bp-3E8h]@87
  void *(__fastcall *v671)(void **, int); // [sp+63Ch] [bp-3E4h]@87
  int v672; // [sp+644h] [bp-3DCh]@87
  int v673; // [sp+64Ch] [bp-3D4h]@87
  int v674; // [sp+654h] [bp-3CCh]@87
  int v675; // [sp+65Ch] [bp-3C4h]@87
  _DWORD *v676; // [sp+660h] [bp-3C0h]@84
  void (*v677)(void); // [sp+668h] [bp-3B8h]@84
  int (__fastcall *v678)(int); // [sp+66Ch] [bp-3B4h]@84
  int v679; // [sp+674h] [bp-3ACh]@84
  void *v680; // [sp+678h] [bp-3A8h]@81
  void (*v681)(void); // [sp+680h] [bp-3A0h]@81
  void (__fastcall *v682)(int *, int, signed int); // [sp+684h] [bp-39Ch]@81
  int v683; // [sp+68Ch] [bp-394h]@81
  int v684; // [sp+694h] [bp-38Ch]@80
  int v685; // [sp+6A4h] [bp-37Ch]@78
  int v686; // [sp+6A8h] [bp-378h]@78
  int v687; // [sp+6ACh] [bp-374h]@78
  int v688; // [sp+6B0h] [bp-370h]@78
  void *v689; // [sp+6B4h] [bp-36Ch]@78
  int v690; // [sp+6B8h] [bp-368h]@335
  unsigned __int64 *v691; // [sp+6BCh] [bp-364h]@323
  int v692; // [sp+6C0h] [bp-360h]@335
  int v693; // [sp+6CCh] [bp-354h]@336
  int v694; // [sp+6D4h] [bp-34Ch]@77
  int v695; // [sp+6DCh] [bp-344h]@76
  int v696; // [sp+6E4h] [bp-33Ch]@75
  int v697; // [sp+6ECh] [bp-334h]@74
  int v698; // [sp+6F4h] [bp-32Ch]@73
  _DWORD *v699; // [sp+6F8h] [bp-328h]@70
  void (*v700)(void); // [sp+700h] [bp-320h]@70
  int (__fastcall *v701)(GeneralSettingsScreenController ***); // [sp+704h] [bp-31Ch]@70
  int v702; // [sp+70Ch] [bp-314h]@70
  _DWORD *v703; // [sp+710h] [bp-310h]@67
  void (*v704)(void); // [sp+718h] [bp-308h]@67
  int (__fastcall *v705)(GeneralSettingsScreenController ***); // [sp+71Ch] [bp-304h]@67
  int v706; // [sp+724h] [bp-2FCh]@67
  int v707; // [sp+72Ch] [bp-2F4h]@66
  int v708; // [sp+73Ch] [bp-2E4h]@64
  int v709; // [sp+740h] [bp-2E0h]@64
  int v710; // [sp+744h] [bp-2DCh]@64
  int v711; // [sp+748h] [bp-2D8h]@64
  void *v712; // [sp+74Ch] [bp-2D4h]@64
  int v713; // [sp+750h] [bp-2D0h]@350
  unsigned __int64 *v714; // [sp+754h] [bp-2CCh]@338
  int v715; // [sp+758h] [bp-2C8h]@350
  int v716; // [sp+764h] [bp-2BCh]@351
  _DWORD *v717; // [sp+768h] [bp-2B8h]@61
  void (*v718)(void); // [sp+770h] [bp-2B0h]@61
  signed int (__fastcall *v719)(int **, int); // [sp+774h] [bp-2ACh]@61
  int v720; // [sp+77Ch] [bp-2A4h]@61
  _DWORD *v721; // [sp+780h] [bp-2A0h]@58
  void (*v722)(void); // [sp+788h] [bp-298h]@58
  signed int (__fastcall *v723)(int); // [sp+78Ch] [bp-294h]@58
  int v724; // [sp+794h] [bp-28Ch]@58
  _DWORD *v725; // [sp+798h] [bp-288h]@55
  void (*v726)(void); // [sp+7A0h] [bp-280h]@55
  signed int (__fastcall *v727)(int **); // [sp+7A4h] [bp-27Ch]@55
  int v728; // [sp+7ACh] [bp-274h]@55
  void *v729; // [sp+7B0h] [bp-270h]@52
  void (*v730)(void); // [sp+7B8h] [bp-268h]@52
  signed int (*v731)(); // [sp+7BCh] [bp-264h]@52
  int v732; // [sp+7C4h] [bp-25Ch]@52
  _DWORD *v733; // [sp+7C8h] [bp-258h]@49
  void (*v734)(void); // [sp+7D0h] [bp-250h]@49
  signed int (__fastcall *v735)(int); // [sp+7D4h] [bp-24Ch]@49
  int v736; // [sp+7DCh] [bp-244h]@49
  _DWORD *v737; // [sp+7E0h] [bp-240h]@46
  void (*v738)(void); // [sp+7E8h] [bp-238h]@46
  signed int (__fastcall *v739)(int **); // [sp+7ECh] [bp-234h]@46
  int v740; // [sp+7F4h] [bp-22Ch]@46
  void *v741; // [sp+7F8h] [bp-228h]@42
  void (*v742)(void); // [sp+800h] [bp-220h]@42
  signed int (*v743)(); // [sp+804h] [bp-21Ch]@42
  _DWORD *v744; // [sp+808h] [bp-218h]@42
  void (*v745)(void); // [sp+810h] [bp-210h]@42
  void (__fastcall *v746)(int *, int **); // [sp+814h] [bp-20Ch]@42
  int v747; // [sp+818h] [bp-208h]@42
  void *v748; // [sp+81Ch] [bp-204h]@38
  void (*v749)(void); // [sp+824h] [bp-1FCh]@38
  signed int (*v750)(); // [sp+828h] [bp-1F8h]@38
  _DWORD *v751; // [sp+82Ch] [bp-1F4h]@38
  void (*v752)(void); // [sp+834h] [bp-1ECh]@38
  void (__fastcall *v753)(MinecraftScreenModel *, int); // [sp+838h] [bp-1E8h]@38
  int v754; // [sp+83Ch] [bp-1E4h]@38
  void *v755; // [sp+840h] [bp-1E0h]@34
  void (*v756)(void); // [sp+848h] [bp-1D8h]@34
  signed int (*v757)(); // [sp+84Ch] [bp-1D4h]@34
  _DWORD *v758; // [sp+850h] [bp-1D0h]@34
  void (*v759)(void); // [sp+858h] [bp-1C8h]@34
  void (__fastcall *v760)(int *, int **); // [sp+85Ch] [bp-1C4h]@34
  int v761; // [sp+860h] [bp-1C0h]@34
  void *v762; // [sp+864h] [bp-1BCh]@30
  void (*v763)(void); // [sp+86Ch] [bp-1B4h]@30
  signed int (*v764)(); // [sp+870h] [bp-1B0h]@30
  _DWORD *v765; // [sp+874h] [bp-1ACh]@30
  void (*v766)(void); // [sp+87Ch] [bp-1A4h]@30
  int (__fastcall *v767)(MinecraftScreenModel *, int); // [sp+880h] [bp-1A0h]@30
  int v768; // [sp+884h] [bp-19Ch]@30
  void *v769; // [sp+888h] [bp-198h]@26
  void (*v770)(void); // [sp+890h] [bp-190h]@26
  signed int (*v771)(); // [sp+894h] [bp-18Ch]@26
  _DWORD *v772; // [sp+898h] [bp-188h]@26
  void (*v773)(void); // [sp+8A0h] [bp-180h]@26
  void (__fastcall *v774)(int *, int **); // [sp+8A4h] [bp-17Ch]@26
  int v775; // [sp+8A8h] [bp-178h]@26
  void *v776; // [sp+8ACh] [bp-174h]@22
  void (*v777)(void); // [sp+8B4h] [bp-16Ch]@22
  signed int (*v778)(); // [sp+8B8h] [bp-168h]@22
  _DWORD *v779; // [sp+8BCh] [bp-164h]@22
  void (*v780)(void); // [sp+8C4h] [bp-15Ch]@22
  int (__fastcall *v781)(int **); // [sp+8C8h] [bp-158h]@22
  int v782; // [sp+8CCh] [bp-154h]@22
  void *v783; // [sp+8D0h] [bp-150h]@18
  void (*v784)(void); // [sp+8D8h] [bp-148h]@18
  signed int (*v785)(); // [sp+8DCh] [bp-144h]@18
  _DWORD *v786; // [sp+8E0h] [bp-140h]@18
  void (*v787)(void); // [sp+8E8h] [bp-138h]@18
  int (__fastcall *v788)(int); // [sp+8ECh] [bp-134h]@18
  int v789; // [sp+8F0h] [bp-130h]@18
  void *v790; // [sp+8F4h] [bp-12Ch]@14
  void (*v791)(void); // [sp+8FCh] [bp-124h]@14
  signed int (*v792)(); // [sp+900h] [bp-120h]@14
  _DWORD *v793; // [sp+904h] [bp-11Ch]@14
  void (*v794)(void); // [sp+90Ch] [bp-114h]@14
  int (__fastcall *v795)(int); // [sp+910h] [bp-110h]@14
  int v796; // [sp+914h] [bp-10Ch]@14
  _DWORD *v797; // [sp+918h] [bp-108h]@1
  void (*v798)(void); // [sp+920h] [bp-100h]@1
  signed int (__fastcall *v799)(Option ***, unsigned int *); // [sp+924h] [bp-FCh]@1
  _DWORD *v800; // [sp+928h] [bp-F8h]@1
  void (*v801)(void); // [sp+930h] [bp-F0h]@1
  int (__fastcall *v802)(I18n ****, unsigned int *); // [sp+934h] [bp-ECh]@1
  _DWORD *v803; // [sp+938h] [bp-E8h]@1
  void (*v804)(void); // [sp+940h] [bp-E0h]@1
  int (__fastcall *v805)(Option ***, const void **); // [sp+944h] [bp-DCh]@1
  _DWORD *v806; // [sp+948h] [bp-D8h]@1
  void (*v807)(void); // [sp+950h] [bp-D0h]@1
  int *(__fastcall *v808)(int *, int); // [sp+954h] [bp-CCh]@1
  _DWORD *v809; // [sp+958h] [bp-C8h]@1
  void (*v810)(void); // [sp+960h] [bp-C0h]@1
  int (__fastcall *v811)(Option ***); // [sp+964h] [bp-BCh]@1
  int v812; // [sp+96Ch] [bp-B4h]@1
  int v813; // [sp+974h] [bp-ACh]@1
  int v814; // [sp+97Ch] [bp-A4h]@1

  v1 = this;
  v2 = MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)this + 106));
  v3 = Options::get(v2, 0);
  sub_21E94B4((void **)&v814, "player_name_text_box");
  sub_21E94B4((void **)&v813, "#player_name");
  sub_21E94B4((void **)&v812, "#player_name_enabled");
  v4 = operator new(4u);
  *v4 = v3;
  v809 = v4;
  v811 = sub_13C739A;
  v810 = (void (*)(void))sub_13C73A2;
  v5 = operator new(8u);
  *v5 = v3;
  v5[1] = v1;
  v806 = v5;
  v808 = sub_13C73D8;
  v807 = (void (*)(void))sub_13C73F6;
  v6 = operator new(4u);
  *v6 = v3;
  v803 = v6;
  v805 = sub_13C7430;
  v804 = (void (*)(void))sub_13C7450;
  v7 = operator new(4u);
  *v7 = (char *)v1 + 544;
  v800 = v7;
  v802 = sub_13C7488;
  v801 = (void (*)(void))sub_13C759C;
  v8 = operator new(0xCu);
  *v8 = v3;
  v8[1] = (char *)v1 + 544;
  v8[2] = v1;
  v797 = v8;
  v799 = sub_13C75D4;
  v798 = (void (*)(void))sub_13C78C8;
  SettingsScreenControllerBase::setupCallbacksForStringOption(
    v1,
    (int **)&v814,
    (const char **)&v813,
    (const char **)&v812,
    (int)&v809,
    (int)&v806,
    (int)&v803,
    (int)&v800,
    (int)&v797);
  if ( v798 )
    v798();
  if ( v801 )
    v801();
  if ( v804 )
    v804();
  if ( v807 )
    v807();
  if ( v810 )
    v810();
  v9 = (void *)(v812 - 12);
  if ( (int *)(v812 - 12) != &dword_28898C0 )
  {
    v232 = (unsigned int *)(v812 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v233 = __ldrex(v232);
      while ( __strex(v233 - 1, v232) );
    }
    else
      v233 = (*v232)--;
    if ( v233 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  v10 = (void *)(v813 - 12);
  if ( (int *)(v813 - 12) != &dword_28898C0 )
    v234 = (unsigned int *)(v813 - 4);
        v235 = __ldrex(v234);
      while ( __strex(v235 - 1, v234) );
      v235 = (*v234)--;
    if ( v235 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v814 - 12);
  if ( (int *)(v814 - 12) != &dword_28898C0 )
    v236 = (unsigned int *)(v814 - 4);
        v237 = __ldrex(v236);
      while ( __strex(v237 - 1, v236) );
      v237 = (*v236)--;
    if ( v237 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v796 = 1235569362;
  v12 = operator new(4u);
  *v12 = v1;
  v793 = v12;
  v795 = sub_13C7906;
  v794 = (void (*)(void))sub_13C7912;
  v790 = operator new(1u);
  v792 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v791 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v796, (int)&v793, (int)&v790);
  if ( v791 )
    v791();
  if ( v794 )
    v794();
  v789 = -344465680;
  v13 = operator new(4u);
  *v13 = v1;
  v786 = v13;
  v788 = sub_13C7948;
  v787 = (void (*)(void))sub_13C795C;
  v783 = operator new(1u);
  v785 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v784 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v789, (int)&v786, (int)&v783);
  if ( v784 )
    v784();
  if ( v787 )
    v787();
  v782 = 949526245;
  v14 = operator new(4u);
  *v14 = v1;
  v779 = v14;
  v781 = sub_13C7994;
  v780 = (void (*)(void))sub_13C79E8;
  v776 = operator new(1u);
  v778 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v777 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v782, (int)&v779, (int)&v776);
  if ( v777 )
    v777();
  if ( v780 )
    v780();
  v775 = 1553911394;
  v15 = operator new(4u);
  *v15 = v1;
  v772 = v15;
  v774 = sub_13C7A20;
  v773 = (void (*)(void))sub_13C7CB0;
  v769 = operator new(1u);
  v771 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v770 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v775, (int)&v772, (int)&v769);
  if ( v770 )
    v770();
  if ( v773 )
    v773();
  StringHash::StringHash<char [26]>(&v768, (int)"#world_conversion_version");
  v16 = operator new(4u);
  *v16 = v1;
  v765 = v16;
  v767 = sub_13C7CE6;
  v766 = (void (*)(void))sub_13C7CF6;
  v762 = operator new(1u);
  v764 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v763 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v768, (int)&v765, (int)&v762);
  if ( v763 )
    v763();
  if ( v766 )
    v766();
  v761 = -1896627559;
  v17 = operator new(4u);
  *v17 = v1;
  v758 = v17;
  v760 = sub_13C7D2C;
  v759 = (void (*)(void))sub_13C7FBC;
  v755 = operator new(1u);
  v757 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v756 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v761, (int)&v758, (int)&v755);
  if ( v756 )
    v756();
  if ( v759 )
    v759();
  v754 = 2027752299;
  v18 = operator new(4u);
  *v18 = v1;
  v751 = v18;
  v753 = sub_13C7FF2;
  v752 = (void (*)(void))sub_13C8002;
  v748 = operator new(1u);
  v750 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v749 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v754, (int)&v751, (int)&v748);
  if ( v749 )
    v749();
  if ( v752 )
    v752();
  v747 = 1799694227;
  v19 = operator new(4u);
  *v19 = v1;
  v744 = v19;
  v746 = sub_13C8038;
  v745 = (void (*)(void))sub_13C82C8;
  v741 = operator new(1u);
  v743 = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v742 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindString((int)v1, &v747, (int)&v744, (int)&v741);
  if ( v742 )
    v742();
  if ( v745 )
    v745();
  sub_21E94B4((void **)&v740, "sign_in_button");
  v20 = MinecraftScreenController::_getNameId(v1, (int **)&v740);
  v21 = operator new(4u);
  *v21 = v1;
  v737 = v21;
  v739 = sub_13C82FE;
  v738 = (void (*)(void))sub_13C8352;
  ScreenController::registerButtonClickHandler((int)v1, v20, (int)&v737);
  if ( v738 )
    v738();
  v22 = (void *)(v740 - 12);
  if ( (int *)(v740 - 12) != &dword_28898C0 )
    v238 = (unsigned int *)(v740 - 4);
        v239 = __ldrex(v238);
      while ( __strex(v239 - 1, v238) );
      v239 = (*v238)--;
    if ( v239 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v736, "change_gamertag_button");
  v23 = MinecraftScreenController::_getNameId(v1, (int **)&v736);
  v24 = operator new(4u);
  *v24 = v1;
  v733 = v24;
  v735 = sub_13C8388;
  v734 = (void (*)(void))sub_13C856C;
  ScreenController::registerButtonClickHandler((int)v1, v23, (int)&v733);
  if ( v734 )
    v734();
  v25 = (void *)(v736 - 12);
  if ( (int *)(v736 - 12) != &dword_28898C0 )
    v240 = (unsigned int *)(v736 - 4);
        v241 = __ldrex(v240);
      while ( __strex(v241 - 1, v240) );
      v241 = (*v240)--;
    if ( v241 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v732, "manage_account_button");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v732);
  v729 = operator new(1u);
  v731 = sub_13C85A4;
  v730 = (void (*)(void))sub_13C862C;
  ScreenController::registerButtonClickHandler((int)v1, v26, (int)&v729);
  if ( v730 )
    v730();
  v27 = (void *)(v732 - 12);
  if ( (int *)(v732 - 12) != &dword_28898C0 )
    v242 = (unsigned int *)(v732 - 4);
        v243 = __ldrex(v242);
      while ( __strex(v243 - 1, v242) );
      v243 = (*v242)--;
    if ( v243 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v728, "sign_out_button");
  v28 = MinecraftScreenController::_getNameId(v1, (int **)&v728);
  v29 = operator new(4u);
  *v29 = v1;
  v725 = v29;
  v727 = sub_13C865C;
  v726 = (void (*)(void))sub_13C8C30;
  ScreenController::registerButtonClickHandler((int)v1, v28, (int)&v725);
  if ( v726 )
    v726();
  v30 = (void *)(v728 - 12);
  if ( (int *)(v728 - 12) != &dword_28898C0 )
    v244 = (unsigned int *)(v728 - 4);
        v245 = __ldrex(v244);
      while ( __strex(v245 - 1, v244) );
      v245 = (*v244)--;
    if ( v245 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v724, "patch_notes_button");
  v31 = MinecraftScreenController::_getNameId(v1, (int **)&v724);
  v32 = operator new(4u);
  *v32 = v1;
  v721 = v32;
  v723 = sub_13C8FDC;
  v722 = (void (*)(void))sub_13C8FEE;
  ScreenController::registerButtonClickHandler((int)v1, v31, (int)&v721);
  if ( v722 )
    v722();
  v33 = (void *)(v724 - 12);
  if ( (int *)(v724 - 12) != &dword_28898C0 )
    v246 = (unsigned int *)(v724 - 4);
        v247 = __ldrex(v246);
      while ( __strex(v247 - 1, v246) );
      v247 = (*v246)--;
    if ( v247 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v720, "button.reset_settings");
  v34 = MinecraftScreenController::_getNameId(v1, (int **)&v720);
  v35 = operator new(4u);
  *v35 = v1;
  v717 = v35;
  v719 = sub_13C9024;
  v718 = (void (*)(void))sub_13C940C;
  ScreenController::registerButtonClickHandler((int)v1, v34, (int)&v717);
  if ( v718 )
    v718();
  v36 = (void *)(v720 - 12);
  if ( (int *)(v720 - 12) != &dword_28898C0 )
    v248 = (unsigned int *)(v720 - 4);
        v249 = __ldrex(v248);
      while ( __strex(v249 - 1, v248) );
      v249 = (*v248)--;
    if ( v249 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  sub_21E94B4((void **)&v708, "#storage_location_radio_external");
  v709 = 1;
  sub_21E94B4((void **)&v710, "#storage_location_radio_package");
  v711 = 2;
  LODWORD(v37) = &v712;
  std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,int> const*>(
    v37,
    (int **)&v712,
    0);
  v38 = (void *)(v710 - 12);
  if ( (int *)(v710 - 12) != &dword_28898C0 )
    v250 = (unsigned int *)(v710 - 4);
        v251 = __ldrex(v250);
      while ( __strex(v251 - 1, v250) );
      v251 = (*v250)--;
    if ( v251 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  v39 = (void *)(v708 - 12);
  if ( (int *)(v708 - 12) != &dword_28898C0 )
    v252 = (unsigned int *)(v708 - 4);
        v253 = __ldrex(v252);
      while ( __strex(v253 - 1, v252) );
      v253 = (*v252)--;
    if ( v253 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  sub_21E94B4((void **)&v707, "file_storage_location");
  SettingsScreenControllerBase::setUpCallbacksForDropdownOption(
    (int)v1,
    15,
    (const void **)&v707,
    (int)&v712,
    (int)&storageLocationLabels);
  v40 = (void *)(v707 - 12);
  if ( (int *)(v707 - 12) != &dword_28898C0 )
    v254 = (unsigned int *)(v707 - 4);
        v255 = __ldrex(v254);
      while ( __strex(v255 - 1, v254) );
      v255 = (*v254)--;
    if ( v255 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  sub_21E94B4((void **)&v706, "create_world_button");
  v41 = MinecraftScreenController::_getNameId(v1, (int **)&v706);
  v42 = operator new(4u);
  *v42 = v1;
  v703 = v42;
  v705 = sub_13C954C;
  v704 = (void (*)(void))sub_13C955A;
  ScreenController::registerButtonClickHandler((int)v1, v41, (int)&v703);
  if ( v704 )
    v704();
  v43 = (void *)(v706 - 12);
  if ( (int *)(v706 - 12) != &dword_28898C0 )
    v256 = (unsigned int *)(v706 - 4);
        v257 = __ldrex(v256);
      while ( __strex(v257 - 1, v256) );
      v257 = (*v256)--;
    if ( v257 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  sub_21E94B4((void **)&v702, "button.menu_exit");
  v44 = MinecraftScreenController::_getNameId(v1, (int **)&v702);
  v45 = operator new(4u);
  *v45 = v1;
  v699 = v45;
  v701 = sub_13C9590;
  v700 = (void (*)(void))sub_13C959E;
  ScreenController::registerButtonClickHandler((int)v1, v44, (int)&v699);
  if ( v700 )
    v700();
  v46 = (void *)(v702 - 12);
  if ( (int *)(v702 - 12) != &dword_28898C0 )
    v258 = (unsigned int *)(v702 - 4);
        v259 = __ldrex(v258);
      while ( __strex(v259 - 1, v258) );
      v259 = (*v258)--;
    if ( v259 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  sub_21E94B4((void **)&v698, "allow_cellular_data");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 129, (const void **)&v698);
  v47 = (void *)(v698 - 12);
  if ( (int *)(v698 - 12) != &dword_28898C0 )
    v260 = (unsigned int *)(v698 - 4);
        v261 = __ldrex(v260);
      while ( __strex(v261 - 1, v260) );
      v261 = (*v260)--;
    if ( v261 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  sub_21E94B4((void **)&v697, "enable_chat_text_to_speech");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 131, (const void **)&v697);
  v48 = (void *)(v697 - 12);
  if ( (int *)(v697 - 12) != &dword_28898C0 )
    v262 = (unsigned int *)(v697 - 4);
        v263 = __ldrex(v262);
      while ( __strex(v263 - 1, v262) );
      v263 = (*v262)--;
    if ( v263 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  sub_21E94B4((void **)&v696, "websocket_encryption");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 130, (const void **)&v696);
  v49 = (void *)(v696 - 12);
  if ( (int *)(v696 - 12) != &dword_28898C0 )
    v264 = (unsigned int *)(v696 - 4);
        v265 = __ldrex(v264);
      while ( __strex(v265 - 1, v264) );
      v265 = (*v264)--;
    if ( v265 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  sub_21E94B4((void **)&v695, "full_screen");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 36, (const void **)&v695);
  v50 = (void *)(v695 - 12);
  if ( (int *)(v695 - 12) != &dword_28898C0 )
    v266 = (unsigned int *)(v695 - 4);
        v267 = __ldrex(v266);
      while ( __strex(v267 - 1, v266) );
      v267 = (*v266)--;
    if ( v267 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  sub_21E94B4((void **)&v694, "advanced_video_options");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 37, (const void **)&v694);
  v51 = (void *)(v694 - 12);
  if ( (int *)(v694 - 12) != &dword_28898C0 )
    v268 = (unsigned int *)(v694 - 4);
        v269 = __ldrex(v268);
      while ( __strex(v269 - 1, v268) );
      v269 = (*v268)--;
    if ( v269 <= 0 )
      j_j_j_j__ZdlPv_9(v51);
  sub_21E94B4((void **)&v685, "#ui_profile_radio_classic");
  v686 = 0;
  sub_21E94B4((void **)&v687, "#ui_profile_radio_pocket");
  v688 = 1;
  LODWORD(v52) = &v689;
    v52,
    (int **)&v689,
  v53 = (void *)(v687 - 12);
  if ( (int *)(v687 - 12) != &dword_28898C0 )
    v270 = (unsigned int *)(v687 - 4);
        v271 = __ldrex(v270);
      while ( __strex(v271 - 1, v270) );
      v271 = (*v270)--;
    if ( v271 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  v54 = (void *)(v685 - 12);
  if ( (int *)(v685 - 12) != &dword_28898C0 )
    v272 = (unsigned int *)(v685 - 4);
        v273 = __ldrex(v272);
      while ( __strex(v273 - 1, v272) );
      v273 = (*v272)--;
    if ( v273 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  sub_21E94B4((void **)&v684, "ui_profile_dropdown");
    41,
    (const void **)&v684,
    (int)&v689,
    (int)&uiProfileLabels);
  v55 = (void *)(v684 - 12);
  if ( (int *)(v684 - 12) != &dword_28898C0 )
    v274 = (unsigned int *)(v684 - 4);
        v275 = __ldrex(v274);
      while ( __strex(v275 - 1, v274) );
      v275 = (*v274)--;
    if ( v275 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  sub_21E94B4((void **)&v683, "gui_scale");
  v680 = operator new(1u);
  v682 = sub_13C95D4;
  v681 = (void (*)(void))sub_13C96BC;
  SettingsScreenControllerBase::setUpCallbacksForStepOption((int)v1, 39, (const void **)&v683, (int)&v680, 0);
  if ( v681 )
    v681();
  v56 = (void *)(v683 - 12);
  if ( (int *)(v683 - 12) != &dword_28898C0 )
    v276 = (unsigned int *)(v683 - 4);
        v277 = __ldrex(v276);
      while ( __strex(v277 - 1, v276) );
      v277 = (*v276)--;
    if ( v277 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  sub_21E94B4((void **)&v679, "setup_safe_zone_button");
  v57 = MinecraftScreenController::_getNameId(v1, (int **)&v679);
  v58 = operator new(4u);
  *v58 = v1;
  v676 = v58;
  v678 = sub_13C96EA;
  v677 = (void (*)(void))sub_13C96FC;
  ScreenController::registerButtonClickHandler((int)v1, v57, (int)&v676);
  if ( v677 )
    v677();
  v59 = (void *)(v679 - 12);
  if ( (int *)(v679 - 12) != &dword_28898C0 )
    v278 = (unsigned int *)(v679 - 4);
        v279 = __ldrex(v278);
      while ( __strex(v279 - 1, v278) );
      v279 = (*v278)--;
    if ( v279 <= 0 )
      j_j_j_j__ZdlPv_9(v59);
  v60 = MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)v1 + 106));
  v61 = Options::get(v60, 31);
  sub_21E94B4((void **)&v675, "field_of_view");
  sub_21E94B4((void **)&v674, "#field_of_view");
  sub_21E94B4((void **)&v673, "#field_of_view_enabled");
  sub_21E94B4((void **)&v672, "#field_of_view_slider_label");
  v62 = operator new(8u);
  *v62 = v1;
  v62[1] = v61;
  v669 = v62;
  v671 = sub_13C9734;
  v670 = (void (*)(void))sub_13C9778;
  v63 = operator new(8u);
  *v63 = v1;
  v63[1] = v61;
  v666 = v63;
  v668 = sub_13C97B2;
  v667 = (void (*)(void))sub_13C97BA;
  v64 = operator new(4u);
  *v64 = v61;
  v663 = v64;
  v665 = sub_13C97F4;
  v664 = (void (*)(void))sub_13C97FC;
  v65 = operator new(4u);
  *v65 = v61;
  v660 = v65;
  v662 = sub_13C9832;
  v661 = (void (*)(void))sub_13C9852;
  v66 = operator new(4u);
  *v66 = v61;
  v657 = v66;
  v659 = sub_13C9888;
  v658 = (void (*)(void))sub_13C9890;
  v67 = operator new(4u);
  *v67 = v61;
  v654 = v67;
  v656 = sub_13C98C6;
  v655 = (void (*)(void))sub_13C98CE;
  sub_21E94B4((void **)&v653, "options.fov.format");
  v651 = 0;
  if ( *(_DWORD *)&algn_27DD648[4] )
    (*(void (__fastcall **)(char *, _DWORD *, signed int))&algn_27DD648[4])(
      &v650,
      &SettingsScreenControllerBase::defaultProgressSliderOptionLabeller,
      2);
    v652 = *(_DWORD *)&algn_27DD648[8];
    v651 = *(void (**)(void))&algn_27DD648[4];
  SettingsScreenControllerBase::setUpCallbacksForFloatOption(
    (int **)&v675,
    (int **)&v674,
    (const char **)&v673,
    (const char **)&v672,
    (int)&v669,
    (int)&v666,
    (int)&v663,
    (int)&v660,
    (int)&v657,
    (int)&v654,
    &v653,
    (int)&v650);
  if ( v651 )
    v651();
  v68 = (void *)(v653 - 12);
  if ( (int *)(v653 - 12) != &dword_28898C0 )
    v280 = (unsigned int *)(v653 - 4);
        v281 = __ldrex(v280);
      while ( __strex(v281 - 1, v280) );
      v281 = (*v280)--;
    if ( v281 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  if ( v655 )
    v655();
  if ( v658 )
    v658();
  if ( v661 )
    v661();
  if ( v664 )
    v664();
  if ( v667 )
    v667();
  if ( v670 )
    v670();
  v69 = (void *)(v672 - 12);
  if ( (int *)(v672 - 12) != &dword_28898C0 )
    v282 = (unsigned int *)(v672 - 4);
        v283 = __ldrex(v282);
      while ( __strex(v283 - 1, v282) );
      v283 = (*v282)--;
    if ( v283 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
  v70 = (void *)(v673 - 12);
  if ( (int *)(v673 - 12) != &dword_28898C0 )
    v284 = (unsigned int *)(v673 - 4);
        v285 = __ldrex(v284);
      while ( __strex(v285 - 1, v284) );
      v285 = (*v284)--;
    if ( v285 <= 0 )
      j_j_j_j__ZdlPv_9(v70);
  v71 = (void *)(v674 - 12);
  if ( (int *)(v674 - 12) != &dword_28898C0 )
    v286 = (unsigned int *)(v674 - 4);
        v287 = __ldrex(v286);
      while ( __strex(v287 - 1, v286) );
      v287 = (*v286)--;
    if ( v287 <= 0 )
      j_j_j_j__ZdlPv_9(v71);
  v72 = (void *)(v675 - 12);
  if ( (int *)(v675 - 12) != &dword_28898C0 )
    v288 = (unsigned int *)(v675 - 4);
        v289 = __ldrex(v288);
      while ( __strex(v289 - 1, v288) );
      v289 = (*v288)--;
    if ( v289 <= 0 )
      j_j_j_j__ZdlPv_9(v72);
  sub_21E94B4((void **)&v649, "render_distance");
  v646 = operator new(1u);
  v648 = sub_13C9904;
  v647 = (void (*)(void))sub_13C9B90;
  SettingsScreenControllerBase::setUpCallbacksForStepOption((int)v1, 19, (const void **)&v649, (int)&v646, 1);
  if ( v647 )
    v647();
  v73 = (void *)(v649 - 12);
  if ( (int *)(v649 - 12) != &dword_28898C0 )
    v290 = (unsigned int *)(v649 - 4);
        v291 = __ldrex(v290);
      while ( __strex(v291 - 1, v290) );
      v291 = (*v290)--;
    if ( v291 <= 0 )
      j_j_j_j__ZdlPv_9(v73);
  sub_21E94B4((void **)&v645, "vr_render_distance");
  v642 = operator new(1u);
  v644 = sub_13C9BC0;
  v643 = (void (*)(void))sub_13C9E4C;
  SettingsScreenControllerBase::setUpCallbacksForStepOption((int)v1, 51, (const void **)&v645, (int)&v642, 1);
  if ( v643 )
    v643();
  v74 = (void *)(v645 - 12);
  if ( (int *)(v645 - 12) != &dword_28898C0 )
    v292 = (unsigned int *)(v645 - 4);
        v293 = __ldrex(v292);
      while ( __strex(v293 - 1, v292) );
      v293 = (*v292)--;
    if ( v293 <= 0 )
      j_j_j_j__ZdlPv_9(v74);
  sub_21E94B4((void **)&v641, "max_framerate");
  v638 = operator new(1u);
  v640 = sub_13C9E7C;
  v639 = (void (*)(void))sub_13CA118;
  SettingsScreenControllerBase::setUpCallbacksForStepOption((int)v1, 35, (const void **)&v641, (int)&v638, 1);
  if ( v639 )
    v639();
  v75 = (void *)(v641 - 12);
  if ( (int *)(v641 - 12) != &dword_28898C0 )
    v294 = (unsigned int *)(v641 - 4);
        v295 = __ldrex(v294);
      while ( __strex(v295 - 1, v294) );
      v295 = (*v294)--;
    if ( v295 <= 0 )
      j_j_j_j__ZdlPv_9(v75);
  sub_21E94B4((void **)&v621, "#debug_hud_radio_off");
  v622 = 0;
  sub_21E94B4((void **)&v623, "#debug_hud_radio_basic");
  v624 = 1;
  sub_21E94B4((void **)&v625, "#debug_hud_radio_workerthreads");
  v626 = 2;
  sub_21E94B4((void **)&v627, "#debug_hud_radio_renderchunks");
  v628 = 3;
  sub_21E94B4((void **)&v629, "#debug_hud_radio_debugtextures");
  v630 = 4;
  sub_21E94B4((void **)&v631, "#debug_hud_radio_profiler");
  v632 = 5;
  LODWORD(v76) = &v633;
    v76,
    (int **)&v633,
  v77 = (void *)(v631 - 12);
  if ( (int *)(v631 - 12) != &dword_28898C0 )
    v296 = (unsigned int *)(v631 - 4);
        v297 = __ldrex(v296);
      while ( __strex(v297 - 1, v296) );
      v297 = (*v296)--;
    if ( v297 <= 0 )
      j_j_j_j__ZdlPv_9(v77);
  v78 = (void *)(v629 - 12);
  if ( (int *)(v629 - 12) != &dword_28898C0 )
    v298 = (unsigned int *)(v629 - 4);
        v299 = __ldrex(v298);
      while ( __strex(v299 - 1, v298) );
      v299 = (*v298)--;
    if ( v299 <= 0 )
      j_j_j_j__ZdlPv_9(v78);
  v79 = (void *)(v627 - 12);
  if ( (int *)(v627 - 12) != &dword_28898C0 )
    v300 = (unsigned int *)(v627 - 4);
        v301 = __ldrex(v300);
      while ( __strex(v301 - 1, v300) );
      v301 = (*v300)--;
    if ( v301 <= 0 )
      j_j_j_j__ZdlPv_9(v79);
  v80 = (void *)(v625 - 12);
  if ( (int *)(v625 - 12) != &dword_28898C0 )
    v302 = (unsigned int *)(v625 - 4);
        v303 = __ldrex(v302);
      while ( __strex(v303 - 1, v302) );
      v303 = (*v302)--;
    if ( v303 <= 0 )
      j_j_j_j__ZdlPv_9(v80);
  v81 = (void *)(v623 - 12);
  if ( (int *)(v623 - 12) != &dword_28898C0 )
    v304 = (unsigned int *)(v623 - 4);
        v305 = __ldrex(v304);
      while ( __strex(v305 - 1, v304) );
      v305 = (*v304)--;
    if ( v305 <= 0 )
      j_j_j_j__ZdlPv_9(v81);
  v82 = (void *)(v621 - 12);
  if ( (int *)(v621 - 12) != &dword_28898C0 )
    v306 = (unsigned int *)(v621 - 4);
        v307 = __ldrex(v306);
      while ( __strex(v307 - 1, v306) );
      v307 = (*v306)--;
    if ( v307 <= 0 )
      j_j_j_j__ZdlPv_9(v82);
  sub_21E94B4((void **)&v620, "dev_debug_hud_dropdown");
    118,
    (const void **)&v620,
    (int)&v633,
    (int)&debugHudLabels);
  v83 = (void *)(v620 - 12);
  if ( (int *)(v620 - 12) != &dword_28898C0 )
    v308 = (unsigned int *)(v620 - 4);
        v309 = __ldrex(v308);
      while ( __strex(v309 - 1, v308) );
      v309 = (*v308)--;
    if ( v309 <= 0 )
      j_j_j_j__ZdlPv_9(v83);
  sub_21E94B4((void **)&v619, "gamma");
  v617 = 0;
      &v616,
    v618 = *(_DWORD *)&algn_27DD648[8];
    v617 = *(void (**)(void))&algn_27DD648[4];
    34,
    (const void **)&v619,
    (int *)&SettingsScreenControllerBase::defaultOptionFormat,
    (int)&v616);
  if ( v617 )
    v617();
  v84 = (void *)(v619 - 12);
  if ( (int *)(v619 - 12) != &dword_28898C0 )
    v310 = (unsigned int *)(v619 - 4);
        v311 = __ldrex(v310);
      while ( __strex(v311 - 1, v310) );
      v311 = (*v310)--;
    if ( v311 <= 0 )
      j_j_j_j__ZdlPv_9(v84);
  sub_21E94B4((void **)&v615, "vr_gamma");
  v613 = 0;
    (*(void (__fastcall **)(char *, _DWORD, _DWORD))&algn_27DD648[4])(
      &v612,
    v614 = *(_DWORD *)&algn_27DD648[8];
    v613 = *(void (**)(void))&algn_27DD648[4];
    45,
    (const void **)&v615,
    (int)&v612);
  if ( v613 )
    v613();
  v85 = (void *)(v615 - 12);
  if ( (int *)(v615 - 12) != &dword_28898C0 )
    v312 = (unsigned int *)(v615 - 4);
        v313 = __ldrex(v312);
      while ( __strex(v313 - 1, v312) );
      v313 = (*v312)--;
    if ( v313 <= 0 )
      j_j_j_j__ZdlPv_9(v85);
  sub_21E94B4((void **)&v611, "msaa");
  v608 = operator new(1u);
  v610 = sub_13CA146;
  v609 = (void (*)(void))sub_13CA150;
  SettingsScreenControllerBase::setUpCallbacksForStepOption((int)v1, 32, (const void **)&v611, (int)&v608, 0);
  if ( v609 )
    v609();
  v86 = (void *)(v611 - 12);
  if ( (int *)(v611 - 12) != &dword_28898C0 )
    v314 = (unsigned int *)(v611 - 4);
        v315 = __ldrex(v314);
      while ( __strex(v315 - 1, v314) );
      v315 = (*v314)--;
    if ( v315 <= 0 )
      j_j_j_j__ZdlPv_9(v86);
  v607 = 349378298;
  v87 = operator new(4u);
  *v87 = v1;
  v604 = v87;
  v606 = sub_13CA17E;
  v605 = (void (*)(void))sub_13CA18A;
  v601 = operator new(1u);
  v603 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v602 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v607, (int)&v604, (int)&v601);
  if ( v602 )
    v602();
  if ( v605 )
    v605();
  sub_21E94B4((void **)&v600, "vr_msaa");
  v597 = operator new(1u);
  v599 = sub_13CA1C0;
  v598 = (void (*)(void))sub_13CA1CA;
  SettingsScreenControllerBase::setUpCallbacksForStepOption((int)v1, 83, (const void **)&v600, (int)&v597, 0);
  if ( v598 )
    v598();
  v88 = (void *)(v600 - 12);
  if ( (int *)(v600 - 12) != &dword_28898C0 )
    v316 = (unsigned int *)(v600 - 4);
        v317 = __ldrex(v316);
      while ( __strex(v317 - 1, v316) );
      v317 = (*v316)--;
    if ( v317 <= 0 )
      j_j_j_j__ZdlPv_9(v88);
  v596 = 936237859;
  v89 = operator new(4u);
  *v89 = v1;
  v593 = v89;
  v595 = sub_13CA1F8;
  v594 = (void (*)(void))sub_13CA230;
  v590 = operator new(1u);
  v592 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v591 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v596, (int)&v593, (int)&v590);
  if ( v591 )
    v591();
  if ( v594 )
    v594();
  sub_21E94B4((void **)&v589, "texel_aa");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 33, (const void **)&v589);
  v90 = (void *)(v589 - 12);
  if ( (int *)(v589 - 12) != &dword_28898C0 )
    v318 = (unsigned int *)(v589 - 4);
        v319 = __ldrex(v318);
      while ( __strex(v319 - 1, v318) );
      v319 = (*v318)--;
    if ( v319 <= 0 )
      j_j_j_j__ZdlPv_9(v90);
  v588 = -1762643457;
  v585 = operator new(1u);
  v587 = sub_13CA266;
  v586 = (void (*)(void))sub_13CA26A;
  v582 = operator new(1u);
  v584 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v583 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v588, (int)&v585, (int)&v582);
  if ( v583 )
    v583();
  if ( v586 )
    v586();
  sub_21E94B4((void **)&v581, "particle_render_distance");
  v579 = 0;
      &v578,
    v580 = *(_DWORD *)&algn_27DD648[8];
    v579 = *(void (**)(void))&algn_27DD648[4];
    20,
    (const void **)&v581,
    (int)&v578);
  if ( v579 )
    v579();
  v91 = (void *)(v581 - 12);
  if ( (int *)(v581 - 12) != &dword_28898C0 )
    v320 = (unsigned int *)(v581 - 4);
        v321 = __ldrex(v320);
      while ( __strex(v321 - 1, v320) );
      v321 = (*v320)--;
    if ( v321 <= 0 )
      j_j_j_j__ZdlPv_9(v91);
  sub_21E94B4((void **)&v577, "vr_particle_render_distance");
  v575 = 0;
      &v574,
    v576 = *(_DWORD *)&algn_27DD648[8];
    v575 = *(void (**)(void))&algn_27DD648[4];
    47,
    (const void **)&v577,
    (int)&v574);
  if ( v575 )
    v575();
  v92 = (void *)(v577 - 12);
  if ( (int *)(v577 - 12) != &dword_28898C0 )
    v322 = (unsigned int *)(v577 - 4);
        v323 = __ldrex(v322);
      while ( __strex(v323 - 1, v322) );
      v323 = (*v322)--;
    if ( v323 <= 0 )
      j_j_j_j__ZdlPv_9(v92);
  sub_21E94B4((void **)&v563, "#thirdperson_radio_first");
  v564 = 0;
  sub_21E94B4((void **)&v565, "#thirdperson_radio_third_back");
  v566 = 1;
  sub_21E94B4((void **)&v567, "#thirdperson_radio_third_front");
  v568 = 2;
  LODWORD(v93) = &v569;
    v93,
    (int **)&v569,
  v94 = (void *)(v567 - 12);
  if ( (int *)(v567 - 12) != &dword_28898C0 )
    v324 = (unsigned int *)(v567 - 4);
        v325 = __ldrex(v324);
      while ( __strex(v325 - 1, v324) );
      v325 = (*v324)--;
    if ( v325 <= 0 )
      j_j_j_j__ZdlPv_9(v94);
  v95 = (void *)(v565 - 12);
  if ( (int *)(v565 - 12) != &dword_28898C0 )
    v326 = (unsigned int *)(v565 - 4);
        v327 = __ldrex(v326);
      while ( __strex(v327 - 1, v326) );
      v327 = (*v326)--;
    if ( v327 <= 0 )
      j_j_j_j__ZdlPv_9(v95);
  v96 = (void *)(v563 - 12);
  if ( (int *)(v563 - 12) != &dword_28898C0 )
    v328 = (unsigned int *)(v563 - 4);
        v329 = __ldrex(v328);
      while ( __strex(v329 - 1, v328) );
      v329 = (*v328)--;
    if ( v329 <= 0 )
      j_j_j_j__ZdlPv_9(v96);
  sub_21E94B4((void **)&v562, "third_person_dropdown");
    2,
    (const void **)&v562,
    (int)&v569,
    (int)&thirdPersonLabels);
  v97 = (void *)(v562 - 12);
  if ( (int *)(v562 - 12) != &dword_28898C0 )
    v330 = (unsigned int *)(v562 - 4);
        v331 = __ldrex(v330);
      while ( __strex(v331 - 1, v330) );
      v331 = (*v330)--;
    if ( v331 <= 0 )
      j_j_j_j__ZdlPv_9(v97);
  sub_21E94B4((void **)&v561, "view_bobbing");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 21, (const void **)&v561);
  v98 = (void *)(v561 - 12);
  if ( (int *)(v561 - 12) != &dword_28898C0 )
    v332 = (unsigned int *)(v561 - 4);
        v333 = __ldrex(v332);
      while ( __strex(v333 - 1, v332) );
      v333 = (*v332)--;
    if ( v333 <= 0 )
      j_j_j_j__ZdlPv_9(v98);
  sub_21E94B4((void **)&v560, "graphics_toggle");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 22, (const void **)&v560);
  v99 = (void *)(v560 - 12);
  if ( (int *)(v560 - 12) != &dword_28898C0 )
    v334 = (unsigned int *)(v560 - 4);
        v335 = __ldrex(v334);
      while ( __strex(v335 - 1, v334) );
      v335 = (*v334)--;
    if ( v335 <= 0 )
      j_j_j_j__ZdlPv_9(v99);
  sub_21E94B4((void **)&v551, "#split_screen_radio_horizontal");
  v552 = 0;
  sub_21E94B4((void **)&v553, "#split_screen_radio_vertical");
  v554 = 1;
  LODWORD(v100) = &ptr;
    v100,
    (int **)&ptr,
  v101 = (void *)(v553 - 12);
  if ( (int *)(v553 - 12) != &dword_28898C0 )
    v336 = (unsigned int *)(v553 - 4);
        v337 = __ldrex(v336);
      while ( __strex(v337 - 1, v336) );
      v337 = (*v336)--;
    if ( v337 <= 0 )
      j_j_j_j__ZdlPv_9(v101);
  v102 = (void *)(v551 - 12);
  if ( (int *)(v551 - 12) != &dword_28898C0 )
    v338 = (unsigned int *)(v551 - 4);
        v339 = __ldrex(v338);
      while ( __strex(v339 - 1, v338) );
      v339 = (*v338)--;
    if ( v339 <= 0 )
      j_j_j_j__ZdlPv_9(v102);
  sub_21E94B4((void **)&v550, "split_screen_dropdown");
    149,
    (const void **)&v550,
    (int)&ptr,
    (int)&splitScreenLabels);
  v103 = (void *)(v550 - 12);
  if ( (int *)(v550 - 12) != &dword_28898C0 )
    v340 = (unsigned int *)(v550 - 4);
        v341 = __ldrex(v340);
      while ( __strex(v341 - 1, v340) );
      v341 = (*v340)--;
    if ( v341 <= 0 )
      j_j_j_j__ZdlPv_9(v103);
  sub_21E94B4((void **)&v549, "fancy_skies");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 27, (const void **)&v549);
  v104 = (void *)(v549 - 12);
  if ( (int *)(v549 - 12) != &dword_28898C0 )
    v342 = (unsigned int *)(v549 - 4);
        v343 = __ldrex(v342);
      while ( __strex(v343 - 1, v342) );
      v343 = (*v342)--;
    if ( v343 <= 0 )
      j_j_j_j__ZdlPv_9(v104);
  sub_21E94B4((void **)&v548, "render_clouds");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 136, (const void **)&v548);
  v105 = (void *)(v548 - 12);
  if ( (int *)(v548 - 12) != &dword_28898C0 )
    v344 = (unsigned int *)(v548 - 4);
        v345 = __ldrex(v344);
      while ( __strex(v345 - 1, v344) );
      v345 = (*v344)--;
    if ( v345 <= 0 )
      j_j_j_j__ZdlPv_9(v105);
  sub_21E94B4((void **)&v547, "transparent_leaves");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 23, (const void **)&v547);
  v106 = (void *)(v547 - 12);
  if ( (int *)(v547 - 12) != &dword_28898C0 )
    v346 = (unsigned int *)(v547 - 4);
        v347 = __ldrex(v346);
      while ( __strex(v347 - 1, v346) );
      v347 = (*v346)--;
    if ( v347 <= 0 )
      j_j_j_j__ZdlPv_9(v106);
  sub_21E94B4((void **)&v546, "smooth_lighting");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 24, (const void **)&v546);
  v107 = (void *)(v546 - 12);
  if ( (int *)(v546 - 12) != &dword_28898C0 )
    v348 = (unsigned int *)(v546 - 4);
        v349 = __ldrex(v348);
      while ( __strex(v349 - 1, v348) );
      v349 = (*v348)--;
    if ( v349 <= 0 )
      j_j_j_j__ZdlPv_9(v107);
  sub_21E94B4((void **)&v545, "hide_hud");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 150, (const void **)&v545);
  v108 = (void *)(v545 - 12);
  if ( (int *)(v545 - 12) != &dword_28898C0 )
    v350 = (unsigned int *)(v545 - 4);
        v351 = __ldrex(v350);
      while ( __strex(v351 - 1, v350) );
      v351 = (*v350)--;
    if ( v351 <= 0 )
      j_j_j_j__ZdlPv_9(v108);
  sub_21E94B4((void **)&v544, "hide_hand");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 151, (const void **)&v544);
  v109 = (void *)(v544 - 12);
  if ( (int *)(v544 - 12) != &dword_28898C0 )
    v352 = (unsigned int *)(v544 - 4);
        v353 = __ldrex(v352);
      while ( __strex(v353 - 1, v352) );
      v353 = (*v352)--;
    if ( v353 <= 0 )
      j_j_j_j__ZdlPv_9(v109);
  sub_21E94B4((void **)&v543, "vr_hide_hud");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 152, (const void **)&v543);
  v110 = (void *)(v543 - 12);
  if ( (int *)(v543 - 12) != &dword_28898C0 )
    v354 = (unsigned int *)(v543 - 4);
        v355 = __ldrex(v354);
      while ( __strex(v355 - 1, v354) );
      v355 = (*v354)--;
    if ( v355 <= 0 )
      j_j_j_j__ZdlPv_9(v110);
  sub_21E94B4((void **)&v542, "vr_hide_hand");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 153, (const void **)&v542);
  v111 = (void *)(v542 - 12);
  if ( (int *)(v542 - 12) != &dword_28898C0 )
    v356 = (unsigned int *)(v542 - 4);
        v357 = __ldrex(v356);
      while ( __strex(v357 - 1, v356) );
      v357 = (*v356)--;
    if ( v357 <= 0 )
      j_j_j_j__ZdlPv_9(v111);
  sub_21E94B4((void **)&v541, "classic_box_selection");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 146, (const void **)&v541);
  v112 = (void *)(v541 - 12);
  if ( (int *)(v541 - 12) != &dword_28898C0 )
    v358 = (unsigned int *)(v541 - 4);
        v359 = __ldrex(v358);
      while ( __strex(v359 - 1, v358) );
      v359 = (*v358)--;
    if ( v359 <= 0 )
      j_j_j_j__ZdlPv_9(v112);
  sub_21E94B4((void **)&v540, "hide_paperdoll");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 142, (const void **)&v540);
  v113 = (void *)(v540 - 12);
  if ( (int *)(v540 - 12) != &dword_28898C0 )
    v360 = (unsigned int *)(v540 - 4);
        v361 = __ldrex(v360);
      while ( __strex(v361 - 1, v360) );
      v361 = (*v360)--;
    if ( v361 <= 0 )
      j_j_j_j__ZdlPv_9(v113);
  sub_21E94B4((void **)&v539, "ingame_player_names");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 154, (const void **)&v539);
  v114 = (void *)(v539 - 12);
  if ( (int *)(v539 - 12) != &dword_28898C0 )
    v362 = (unsigned int *)(v539 - 4);
        v363 = __ldrex(v362);
      while ( __strex(v363 - 1, v362) );
      v363 = (*v362)--;
    if ( v363 <= 0 )
      j_j_j_j__ZdlPv_9(v114);
  sub_21E94B4((void **)&v538, "splitscreen_ingame_player_names");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 155, (const void **)&v538);
  v115 = (void *)(v538 - 12);
  if ( (int *)(v538 - 12) != &dword_28898C0 )
    v364 = (unsigned int *)(v538 - 4);
        v365 = __ldrex(v364);
      while ( __strex(v365 - 1, v364) );
      v365 = (*v364)--;
    if ( v365 <= 0 )
      j_j_j_j__ZdlPv_9(v115);
  v116 = MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)v1 + 106));
  v117 = Options::get(v116, 156);
  sub_21E94B4((void **)&v537, "interface_opacity");
  sub_21E94B4((void **)&v536, "#interface_opacity");
  sub_21E94B4((void **)&v535, "#interface_opacity_enabled");
  sub_21E94B4((void **)&v534, "#interface_opacity_slider_label");
  v118 = operator new(8u);
  LODWORD(v119) = sub_13CA2AE;
  *v118 = v1;
  v118[1] = v117;
  HIDWORD(v119) = sub_13CA298;
  v532 = v118;
  v533 = v119;
  v120 = operator new(8u);
  LODWORD(v121) = sub_13CA2F0;
  *v120 = v1;
  v120[1] = v117;
  HIDWORD(v121) = sub_13CA2E8;
  v530 = v120;
  v531 = v121;
  v122 = operator new(4u);
  LODWORD(v123) = sub_13CA34C;
  *v122 = v117;
  HIDWORD(v123) = sub_13CA32C;
  v528 = v122;
  v529 = v123;
  v124 = operator new(4u);
  LODWORD(v125) = sub_13CA3B8;
  *v124 = v117;
  HIDWORD(v125) = sub_13CA384;
  v526 = v124;
  v527 = v125;
  v126 = operator new(4u);
  LODWORD(v127) = sub_13CA410;
  *v126 = v117;
  HIDWORD(v127) = sub_13CA3F0;
  v524 = v126;
  v525 = v127;
  v128 = operator new(4u);
  HIDWORD(v129) = sub_13CA448;
  *v128 = v117;
  LODWORD(v129) = sub_13CA468;
  v522 = v128;
  v523 = v129;
  sub_21E94B4((void **)&v521, "options.percent.format");
  v130 = operator new(1u);
  LODWORD(v131) = sub_13CA4D4;
  v519 = v130;
  HIDWORD(v131) = sub_13CA4A0;
  v520 = v131;
    (int **)&v537,
    (int **)&v536,
    (const char **)&v535,
    (const char **)&v534,
    (int)&v532,
    (int)&v530,
    (int)&v528,
    (int)&v526,
    (int)&v524,
    (int)&v522,
    &v521,
    (int)&v519);
  if ( (_DWORD)v520 )
    ((void (*)(void))v520)();
  v132 = (void *)(v521 - 12);
  if ( (int *)(v521 - 12) != &dword_28898C0 )
    v366 = (unsigned int *)(v521 - 4);
        v367 = __ldrex(v366);
      while ( __strex(v367 - 1, v366) );
      v367 = (*v366)--;
    if ( v367 <= 0 )
      j_j_j_j__ZdlPv_9(v132);
  if ( (_DWORD)v523 )
    ((void (*)(void))v523)();
  if ( (_DWORD)v525 )
    ((void (*)(void))v525)();
  if ( (_DWORD)v527 )
    ((void (*)(void))v527)();
  if ( (_DWORD)v529 )
    ((void (*)(void))v529)();
  if ( (_DWORD)v531 )
    ((void (*)(void))v531)();
  if ( (_DWORD)v533 )
    ((void (*)(void))v533)();
  v133 = (void *)(v534 - 12);
  if ( (int *)(v534 - 12) != &dword_28898C0 )
    v368 = (unsigned int *)(v534 - 4);
        v369 = __ldrex(v368);
      while ( __strex(v369 - 1, v368) );
      v369 = (*v368)--;
    if ( v369 <= 0 )
      j_j_j_j__ZdlPv_9(v133);
  v134 = (void *)(v535 - 12);
  if ( (int *)(v535 - 12) != &dword_28898C0 )
    v370 = (unsigned int *)(v535 - 4);
        v371 = __ldrex(v370);
      while ( __strex(v371 - 1, v370) );
      v371 = (*v370)--;
    if ( v371 <= 0 )
      j_j_j_j__ZdlPv_9(v134);
  v135 = (void *)(v536 - 12);
  if ( (int *)(v536 - 12) != &dword_28898C0 )
    v372 = (unsigned int *)(v536 - 4);
        v373 = __ldrex(v372);
      while ( __strex(v373 - 1, v372) );
      v373 = (*v372)--;
    if ( v373 <= 0 )
      j_j_j_j__ZdlPv_9(v135);
  v136 = (void *)(v537 - 12);
  if ( (int *)(v537 - 12) != &dword_28898C0 )
    v374 = (unsigned int *)(v537 - 4);
        v375 = __ldrex(v374);
      while ( __strex(v375 - 1, v374) );
      v375 = (*v374)--;
    if ( v375 <= 0 )
      j_j_j_j__ZdlPv_9(v136);
  v137 = MinecraftScreenModel::getOptions(*((MinecraftScreenModel **)v1 + 106));
  v138 = Options::get(v137, 157);
  sub_21E94B4((void **)&v518, "splitscreen_interface_opacity");
  sub_21E94B4((void **)&v517, "#splitscreen_interface_opacity");
  sub_21E94B4((void **)&v516, "#splitscreen_interface_opacity_enabled");
  sub_21E94B4((void **)&v515, "#splitscreen_interface_opacity_slider_label");
  v139 = operator new(8u);
  LODWORD(v140) = sub_13CA518;
  *v139 = v1;
  v139[1] = v138;
  HIDWORD(v140) = sub_13CA502;
  v513 = v139;
  v514 = v140;
  v141 = operator new(8u);
  LODWORD(v142) = sub_13CA55A;
  *v141 = v1;
  v141[1] = v138;
  HIDWORD(v142) = sub_13CA552;
  v511 = v141;
  v512 = v142;
  v143 = operator new(4u);
  LODWORD(v144) = sub_13CA5B4;
  *v143 = v138;
  HIDWORD(v144) = sub_13CA594;
  v509 = v143;
  v510 = v144;
  v145 = operator new(4u);
  LODWORD(v146) = sub_13CA620;
  *v145 = v138;
  HIDWORD(v146) = sub_13CA5EC;
  v507 = v145;
  v508 = v146;
  v147 = operator new(4u);
  LODWORD(v148) = sub_13CA678;
  *v147 = v138;
  HIDWORD(v148) = sub_13CA658;
  v505 = v147;
  v506 = v148;
  v149 = operator new(4u);
  HIDWORD(v150) = sub_13CA6B0;
  *v149 = v138;
  LODWORD(v150) = sub_13CA6D0;
  v503 = v149;
  v504 = v150;
  sub_21E94B4((void **)&v502, "options.percent.format");
  v151 = operator new(1u);
  LODWORD(v152) = sub_13CA73C;
  v500 = v151;
  HIDWORD(v152) = sub_13CA708;
  v501 = v152;
    (int **)&v518,
    (int **)&v517,
    (const char **)&v516,
    (const char **)&v515,
    (int)&v513,
    (int)&v511,
    (int)&v509,
    (int)&v507,
    (int)&v505,
    (int)&v503,
    &v502,
    (int)&v500);
  if ( (_DWORD)v501 )
    ((void (*)(void))v501)();
  v153 = (void *)(v502 - 12);
  if ( (int *)(v502 - 12) != &dword_28898C0 )
    v376 = (unsigned int *)(v502 - 4);
        v377 = __ldrex(v376);
      while ( __strex(v377 - 1, v376) );
      v377 = (*v376)--;
    if ( v377 <= 0 )
      j_j_j_j__ZdlPv_9(v153);
  if ( (_DWORD)v504 )
    ((void (*)(void))v504)();
  if ( (_DWORD)v506 )
    ((void (*)(void))v506)();
  if ( (_DWORD)v508 )
    ((void (*)(void))v508)();
  if ( (_DWORD)v510 )
    ((void (*)(void))v510)();
  if ( (_DWORD)v512 )
    ((void (*)(void))v512)();
  if ( (_DWORD)v514 )
    ((void (*)(void))v514)();
  v154 = (void *)(v515 - 12);
  if ( (int *)(v515 - 12) != &dword_28898C0 )
    v378 = (unsigned int *)(v515 - 4);
        v379 = __ldrex(v378);
      while ( __strex(v379 - 1, v378) );
      v379 = (*v378)--;
    if ( v379 <= 0 )
      j_j_j_j__ZdlPv_9(v154);
  v155 = (void *)(v516 - 12);
  if ( (int *)(v516 - 12) != &dword_28898C0 )
    v380 = (unsigned int *)(v516 - 4);
        v381 = __ldrex(v380);
      while ( __strex(v381 - 1, v380) );
      v381 = (*v380)--;
    if ( v381 <= 0 )
      j_j_j_j__ZdlPv_9(v155);
  v156 = (void *)(v517 - 12);
  if ( (int *)(v517 - 12) != &dword_28898C0 )
    v382 = (unsigned int *)(v517 - 4);
        v383 = __ldrex(v382);
      while ( __strex(v383 - 1, v382) );
      v383 = (*v382)--;
    if ( v383 <= 0 )
      j_j_j_j__ZdlPv_9(v156);
  v157 = (void *)(v518 - 12);
  if ( (int *)(v518 - 12) != &dword_28898C0 )
    v384 = (unsigned int *)(v518 - 4);
        v385 = __ldrex(v384);
      while ( __strex(v385 - 1, v384) );
      v385 = (*v384)--;
    if ( v385 <= 0 )
      j_j_j_j__ZdlPv_9(v157);
  sub_21E94B4((void **)&v499, "limit_world_size");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 6, (const void **)&v499);
  v158 = (void *)(v499 - 12);
  if ( (int *)(v499 - 12) != &dword_28898C0 )
    v386 = (unsigned int *)(v499 - 4);
        v387 = __ldrex(v386);
      while ( __strex(v387 - 1, v386) );
      v387 = (*v386)--;
    if ( v387 <= 0 )
      j_j_j_j__ZdlPv_9(v158);
  sub_21E94B4((void **)&v498, "vr_3d_rendering");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 55, (const void **)&v498);
  v159 = (void *)(v498 - 12);
  if ( (int *)(v498 - 12) != &dword_28898C0 )
    v388 = (unsigned int *)(v498 - 4);
        v389 = __ldrex(v388);
      while ( __strex(v389 - 1, v388) );
      v389 = (*v388)--;
    if ( v389 <= 0 )
      j_j_j_j__ZdlPv_9(v159);
  sub_21E94B4((void **)&v497, "show_auto_save_icon");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 161, (const void **)&v497);
  v160 = (void *)(v497 - 12);
  if ( (int *)(v497 - 12) != &dword_28898C0 )
    v390 = (unsigned int *)(v497 - 4);
        v391 = __ldrex(v390);
      while ( __strex(v391 - 1, v390) );
      v391 = (*v390)--;
    if ( v391 <= 0 )
      j_j_j_j__ZdlPv_9(v160);
  sub_21E94B4((void **)&v496, "vr_mirror_texture");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 77, (const void **)&v496);
  v161 = (void *)(v496 - 12);
  if ( (int *)(v496 - 12) != &dword_28898C0 )
    v392 = (unsigned int *)(v496 - 4);
        v393 = __ldrex(v392);
      while ( __strex(v393 - 1, v392) );
      v393 = (*v392)--;
    if ( v393 <= 0 )
      j_j_j_j__ZdlPv_9(v161);
  sub_21E94B4((void **)&v495, "comfort_controls");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 74, (const void **)&v495);
  v162 = (void *)(v495 - 12);
  if ( (int *)(v495 - 12) != &dword_28898C0 )
    v394 = (unsigned int *)(v495 - 4);
        v395 = __ldrex(v394);
      while ( __strex(v395 - 1, v394) );
      v395 = (*v394)--;
    if ( v395 <= 0 )
      j_j_j_j__ZdlPv_9(v162);
  sub_21E94B4((void **)&v494, "show_comfort_select_screen");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 75, (const void **)&v494);
  v163 = (void *)(v494 - 12);
  if ( (int *)(v494 - 12) != &dword_28898C0 )
    v396 = (unsigned int *)(v494 - 4);
        v397 = __ldrex(v396);
      while ( __strex(v397 - 1, v396) );
      v397 = (*v396)--;
    if ( v397 <= 0 )
      j_j_j_j__ZdlPv_9(v163);
  sub_21E94B4((void **)&v493, "vr_living_room_cursor_centered");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 64, (const void **)&v493);
  v164 = (void *)(v493 - 12);
  if ( (int *)(v493 - 12) != &dword_28898C0 )
    v398 = (unsigned int *)(v493 - 4);
        v399 = __ldrex(v398);
      while ( __strex(v399 - 1, v398) );
      v399 = (*v398)--;
    if ( v399 <= 0 )
      j_j_j_j__ZdlPv_9(v164);
  sub_21E94B4((void **)&v492, "stutter_turn");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 48, (const void **)&v492);
  v165 = (void *)(v492 - 12);
  if ( (int *)(v492 - 12) != &dword_28898C0 )
    v400 = (unsigned int *)(v492 - 4);
        v401 = __ldrex(v400);
      while ( __strex(v401 - 1, v400) );
      v401 = (*v400)--;
    if ( v401 <= 0 )
      j_j_j_j__ZdlPv_9(v165);
  sub_21E94B4((void **)&v491, "stutter_turn_sound");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 49, (const void **)&v491);
  v166 = (void *)(v491 - 12);
  if ( (int *)(v491 - 12) != &dword_28898C0 )
    v402 = (unsigned int *)(v491 - 4);
        v403 = __ldrex(v402);
      while ( __strex(v403 - 1, v402) );
      v403 = (*v402)--;
    if ( v403 <= 0 )
      j_j_j_j__ZdlPv_9(v166);
  sub_21E94B4((void **)&v490, "stutter_constant_angle_or_time");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 54, (const void **)&v490);
  v167 = (void *)(v490 - 12);
  if ( (int *)(v490 - 12) != &dword_28898C0 )
    v404 = (unsigned int *)(v490 - 4);
        v405 = __ldrex(v404);
      while ( __strex(v405 - 1, v404) );
      v405 = (*v404)--;
    if ( v405 <= 0 )
      j_j_j_j__ZdlPv_9(v167);
  sub_21E94B4((void **)&v489, "vr_hmd_displacement");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 50, (const void **)&v489);
  v168 = (void *)(v489 - 12);
  if ( (int *)(v489 - 12) != &dword_28898C0 )
    v406 = (unsigned int *)(v489 - 4);
        v407 = __ldrex(v406);
      while ( __strex(v407 - 1, v406) );
      v407 = (*v406)--;
    if ( v407 <= 0 )
      j_j_j_j__ZdlPv_9(v168);
  StringHash::StringHash<char [32]>(&v488, (int)"#device_has_positional_tracking");
  v169 = operator new(1u);
  LODWORD(v170) = sub_13CA76E;
  v486 = v169;
  HIDWORD(v170) = sub_13CA76A;
  v487 = v170;
  v484 = operator new(1u);
  LODWORD(v171) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v171) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v485 = v171;
  ScreenController::bindBool((int)v1, &v488, (int)&v486, (int)&v484);
  if ( (_DWORD)v485 )
    ((void (*)(void))v485)();
  if ( (_DWORD)v487 )
    ((void (*)(void))v487)();
  sub_21E94B4((void **)&v483, "vr_head_steering");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 53, (const void **)&v483);
  v172 = (void *)(v483 - 12);
  if ( (int *)(v483 - 12) != &dword_28898C0 )
    v408 = (unsigned int *)(v483 - 4);
        v409 = __ldrex(v408);
      while ( __strex(v409 - 1, v408) );
      v409 = (*v408)--;
    if ( v409 <= 0 )
      j_j_j_j__ZdlPv_9(v172);
  sub_21E94B4((void **)&v482, "vr_roll_turn");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 72, (const void **)&v482);
  v173 = (void *)(v482 - 12);
  if ( (int *)(v482 - 12) != &dword_28898C0 )
    v410 = (unsigned int *)(v482 - 4);
        v411 = __ldrex(v410);
      while ( __strex(v411 - 1, v410) );
      v411 = (*v410)--;
    if ( v411 <= 0 )
      j_j_j_j__ZdlPv_9(v173);
  sub_21E94B4((void **)&v481, "vr_linear_jump");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 65, (const void **)&v481);
  v174 = (void *)(v481 - 12);
  if ( (int *)(v481 - 12) != &dword_28898C0 )
    v412 = (unsigned int *)(v481 - 4);
        v413 = __ldrex(v412);
      while ( __strex(v413 - 1, v412) );
      v413 = (*v412)--;
    if ( v413 <= 0 )
      j_j_j_j__ZdlPv_9(v174);
  sub_21E94B4((void **)&v480, "vr_linear_motion");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 66, (const void **)&v480);
  v175 = (void *)(v480 - 12);
  if ( (int *)(v480 - 12) != &dword_28898C0 )
    v414 = (unsigned int *)(v480 - 4);
        v415 = __ldrex(v414);
      while ( __strex(v415 - 1, v414) );
      v415 = (*v414)--;
    if ( v415 <= 0 )
      j_j_j_j__ZdlPv_9(v175);
  sub_21E94B4((void **)&v479, "sticky_mining");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 67, (const void **)&v479);
  v176 = (void *)(v479 - 12);
  if ( (int *)(v479 - 12) != &dword_28898C0 )
    v416 = (unsigned int *)(v479 - 4);
        v417 = __ldrex(v416);
      while ( __strex(v417 - 1, v416) );
      v417 = (*v416)--;
    if ( v417 <= 0 )
      j_j_j_j__ZdlPv_9(v176);
  sub_21E94B4((void **)&v478, "sticky_mining_hand");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 68, (const void **)&v478);
  v177 = (void *)(v478 - 12);
  if ( (int *)(v478 - 12) != &dword_28898C0 )
    v418 = (unsigned int *)(v478 - 4);
        v419 = __ldrex(v418);
      while ( __strex(v419 - 1, v418) );
      v419 = (*v418)--;
    if ( v419 <= 0 )
      j_j_j_j__ZdlPv_9(v177);
  sub_21E94B4((void **)&v477, "vr_hud_drifts");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 63, (const void **)&v477);
  v178 = (void *)(v477 - 12);
  if ( (int *)(v477 - 12) != &dword_28898C0 )
    v420 = (unsigned int *)(v477 - 4);
        v421 = __ldrex(v420);
      while ( __strex(v421 - 1, v420) );
      v421 = (*v420)--;
    if ( v421 <= 0 )
      j_j_j_j__ZdlPv_9(v178);
  sub_21E94B4((void **)&v476, "vr_hand_controls_item");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 78, (const void **)&v476);
  v179 = (void *)(v476 - 12);
  if ( (int *)(v476 - 12) != &dword_28898C0 )
    v422 = (unsigned int *)(v476 - 4);
        v423 = __ldrex(v422);
      while ( __strex(v423 - 1, v422) );
      v423 = (*v422)--;
    if ( v423 <= 0 )
      j_j_j_j__ZdlPv_9(v179);
  sub_21E94B4((void **)&v475, "vr_hand_controls_hud");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 79, (const void **)&v475);
  v180 = (void *)(v475 - 12);
  if ( (int *)(v475 - 12) != &dword_28898C0 )
    v424 = (unsigned int *)(v475 - 4);
        v425 = __ldrex(v424);
      while ( __strex(v425 - 1, v424) );
      v425 = (*v424)--;
    if ( v425 <= 0 )
      j_j_j_j__ZdlPv_9(v180);
  sub_21E94B4((void **)&v474, "vr_hand_pointer");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 80, (const void **)&v474);
  v181 = (void *)(v474 - 12);
  if ( (int *)(v474 - 12) != &dword_28898C0 )
    v426 = (unsigned int *)(v474 - 4);
        v427 = __ldrex(v426);
      while ( __strex(v427 - 1, v426) );
      v427 = (*v426)--;
    if ( v427 <= 0 )
      j_j_j_j__ZdlPv_9(v181);
  sub_21E94B4((void **)&v473, "vr_hands_visible");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 81, (const void **)&v473);
  v182 = (void *)(v473 - 12);
  if ( (int *)(v473 - 12) != &dword_28898C0 )
    v428 = (unsigned int *)(v473 - 4);
        v429 = __ldrex(v428);
      while ( __strex(v429 - 1, v428) );
      v429 = (*v428)--;
    if ( v429 <= 0 )
      j_j_j_j__ZdlPv_9(v182);
  sub_21E94B4((void **)&v472, "music_volume");
  v470 = 0;
      &v469,
    v471 = *(_DWORD *)&algn_27DD648[8];
    v470 = *(void (**)(void))&algn_27DD648[4];
    43,
    (const void **)&v472,
    (int)&v469);
  if ( v470 )
    v470();
  v183 = (void *)(v472 - 12);
  if ( (int *)(v472 - 12) != &dword_28898C0 )
    v430 = (unsigned int *)(v472 - 4);
        v431 = __ldrex(v430);
      while ( __strex(v431 - 1, v430) );
      v431 = (*v430)--;
    if ( v431 <= 0 )
      j_j_j_j__ZdlPv_9(v183);
  sub_21E94B4((void **)&v468, "sound_volume");
  v466 = 0;
      &v465,
    v467 = *(_DWORD *)&algn_27DD648[8];
    v466 = *(void (**)(void))&algn_27DD648[4];
    42,
    (const void **)&v468,
    (int)&v465);
  if ( v466 )
    v466();
  v184 = (void *)(v468 - 12);
  if ( (int *)(v468 - 12) != &dword_28898C0 )
    v432 = (unsigned int *)(v468 - 4);
        v433 = __ldrex(v432);
      while ( __strex(v433 - 1, v432) );
      v433 = (*v432)--;
    if ( v433 <= 0 )
      j_j_j_j__ZdlPv_9(v184);
  sub_21E94B4((void **)&v464, "languages");
  v185 = MinecraftScreenController::_getNameId(v1, (int **)&v464);
  v186 = (void *)(v464 - 12);
  if ( (int *)(v464 - 12) != &dword_28898C0 )
    v434 = (unsigned int *)(v464 - 4);
        v435 = __ldrex(v434);
      while ( __strex(v435 - 1, v434) );
      v435 = (*v434)--;
    if ( v435 <= 0 )
      j_j_j_j__ZdlPv_9(v186);
  v187 = operator new(4u);
  LODWORD(v188) = sub_13CA7CC;
  *v187 = v1;
  HIDWORD(v188) = sub_13CA79C;
  v462 = v187;
  v463 = v188;
  ScreenController::registerToggleChangeEventHandler((int)v1, v185, (int)&v462);
  if ( (_DWORD)v463 )
    ((void (*)(void))v463)();
  StringHash::StringHash<char [25]>(&v461, (int)"#language_grid_dimension");
  v189 = operator new(4u);
  LODWORD(v190) = sub_13CA816;
  *v189 = v1;
  HIDWORD(v190) = sub_13CA802;
  v459 = v189;
  v460 = v190;
  v457 = operator new(1u);
  LODWORD(v191) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v191) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v458 = v191;
  ScreenController::bindGridSize((int)v1, &v461, (int)&v459, (int)&v457);
  if ( (_DWORD)v458 )
    ((void (*)(void))v458)();
  if ( (_DWORD)v460 )
    ((void (*)(void))v460)();
  v456 = -1147849576;
  v455 = 928494721;
  v192 = operator new(4u);
  LODWORD(v193) = sub_13CA862;
  *v192 = v1;
  HIDWORD(v193) = sub_13CA84C;
  v453 = v192;
  v454 = v193;
  v451 = operator new(1u);
  LODWORD(v194) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v194) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v452 = v194;
  ScreenController::bindStringForCollection((int)v1, &v456, &v455, (int)&v453, (int)&v451);
  if ( (_DWORD)v452 )
    ((void (*)(void))v452)();
  if ( (_DWORD)v454 )
    ((void (*)(void))v454)();
  v450 = -1147849576;
  StringHash::StringHash<char [27]>(&v449, (int)"#language_initial_selected");
  v195 = operator new(4u);
  LODWORD(v196) = sub_13CA8AA;
  *v195 = v1;
  HIDWORD(v196) = sub_13CA898;
  v447 = v195;
  v448 = v196;
  v445 = operator new(1u);
  LODWORD(v197) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v197) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v446 = v197;
  ScreenController::bindBoolForCollection((int)v1, &v450, &v449, (int)&v447, (int)&v445);
  if ( (_DWORD)v446 )
    ((void (*)(void))v446)();
  if ( (_DWORD)v448 )
    ((void (*)(void))v448)();
  v444 = -1147849576;
  StringHash::StringHash<char [26]>(&v443, (int)"#default_focus_precedence");
  v198 = operator new(4u);
  LODWORD(v199) = sub_13CA8F2;
  *v198 = v1;
  HIDWORD(v199) = sub_13CA8E0;
  v441 = v198;
  v442 = v199;
  v439 = operator new(1u);
  LODWORD(v200) = ZNSt14_Function_base13_Base_managerIZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v200) = ZNSt17_Function_handlerIFbiEZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v440 = v200;
  ScreenController::bindIntForCollection((int)v1, &v444, &v443, (int)&v441, (int)&v439);
  if ( (_DWORD)v440 )
    ((void (*)(void))v440)();
  if ( (_DWORD)v442 )
    ((void (*)(void))v442)();
  sub_21E94B4((void **)&v438, "dev_server_instance_thread");
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption((int)v1, 92, (const void **)&v438);
  v201 = (void *)(v438 - 12);
  if ( (int *)(v438 - 12) != &dword_28898C0 )
    v436 = (unsigned int *)(v438 - 4);
        v437 = __ldrex(v436);
      while ( __strex(v437 - 1, v436) );
      v437 = (*v436)--;
    if ( v437 <= 0 )
      j_j_j_j__ZdlPv_9(v201);
  v202 = v557;
  while ( v202 )
    v205 = v202;
    v206 = *v202 >> 32;
    v202 = (unsigned __int64 *)*v202;
    v207 = (void *)(v206 - 12);
    if ( (int *)(v206 - 12) != &dword_28898C0 )
      v203 = (unsigned int *)(v206 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v204 = __ldrex(v203);
        while ( __strex(v204 - 1, v203) );
      }
      else
        v204 = (*v203)--;
      if ( v204 <= 0 )
        j_j_j_j__ZdlPv_9(v207);
    operator delete(v205);
  _aeabi_memclr4(ptr, 4 * v556);
  v557 = 0;
  v558 = 0;
  if ( ptr && &v559 != ptr )
    operator delete(ptr);
  v208 = v571;
  while ( v208 )
    v211 = v208;
    v212 = *v208 >> 32;
    v208 = (unsigned __int64 *)*v208;
    v213 = (void *)(v212 - 12);
    if ( (int *)(v212 - 12) != &dword_28898C0 )
      v209 = (unsigned int *)(v212 - 4);
          v210 = __ldrex(v209);
        while ( __strex(v210 - 1, v209) );
        v210 = (*v209)--;
      if ( v210 <= 0 )
        j_j_j_j__ZdlPv_9(v213);
    operator delete(v211);
  _aeabi_memclr4(v569, 4 * v570);
  v572 = 0;
  v571 = 0;
  if ( v569 && &v573 != v569 )
    operator delete(v569);
  v214 = v635;
  while ( v214 )
    v217 = v214;
    v218 = *v214 >> 32;
    v214 = (unsigned __int64 *)*v214;
    v219 = (void *)(v218 - 12);
    if ( (int *)(v218 - 12) != &dword_28898C0 )
      v215 = (unsigned int *)(v218 - 4);
          v216 = __ldrex(v215);
        while ( __strex(v216 - 1, v215) );
        v216 = (*v215)--;
      if ( v216 <= 0 )
        j_j_j_j__ZdlPv_9(v219);
    operator delete(v217);
  _aeabi_memclr4(v633, 4 * v634);
  v636 = 0;
  v635 = 0;
  if ( v633 && &v637 != v633 )
    operator delete(v633);
  v220 = v691;
  while ( v220 )
    v223 = v220;
    v224 = *v220 >> 32;
    v220 = (unsigned __int64 *)*v220;
    v225 = (void *)(v224 - 12);
    if ( (int *)(v224 - 12) != &dword_28898C0 )
      v221 = (unsigned int *)(v224 - 4);
          v222 = __ldrex(v221);
        while ( __strex(v222 - 1, v221) );
        v222 = (*v221)--;
      if ( v222 <= 0 )
        j_j_j_j__ZdlPv_9(v225);
    operator delete(v223);
  _aeabi_memclr4(v689, 4 * v690);
  v692 = 0;
  v691 = 0;
  if ( v689 && &v693 != v689 )
    operator delete(v689);
  v226 = v714;
  while ( v226 )
    v229 = v226;
    v230 = *v226 >> 32;
    v226 = (unsigned __int64 *)*v226;
    v231 = (void *)(v230 - 12);
    if ( (int *)(v230 - 12) != &dword_28898C0 )
      v227 = (unsigned int *)(v230 - 4);
          v228 = __ldrex(v227);
        while ( __strex(v228 - 1, v227) );
        v228 = (*v227)--;
      if ( v228 <= 0 )
        j_j_j_j__ZdlPv_9(v231);
    operator delete(v229);
  _aeabi_memclr4(v712, 4 * v713);
  v715 = 0;
  v714 = 0;
  if ( v712 )
    if ( &v716 != v712 )
      operator delete(v712);
}


void __fastcall GeneralSettingsScreenController::_registerControllerCallbacks(GeneralSettingsScreenController *this)
{
  GeneralSettingsScreenController::_registerControllerCallbacks(this);
}


signed int __fastcall GeneralSettingsScreenController::_handleLanguageChoiceClick(GeneralSettingsScreenController *this, int a2)
{
  int v2; // r4@1
  GeneralSettingsScreenController *v3; // r5@1

  v2 = a2;
  v3 = this;
  if ( a2 >= 0 && *((_DWORD *)this + 132) != a2 )
  {
    I18n::chooseLanguage((const void **)(*((_DWORD *)this + 129) + 8 * a2));
    MinecraftScreenModel::setLanguage(*((MinecraftScreenModel **)v3 + 106));
    *((_DWORD *)v3 + 132) = v2;
  }
  return 1;
}


void __fastcall GeneralSettingsScreenController::~GeneralSettingsScreenController(GeneralSettingsScreenController *this)
{
  GeneralSettingsScreenController::~GeneralSettingsScreenController(this);
}


void __fastcall GeneralSettingsScreenController::_setResourcePackStack(GeneralSettingsScreenController *this)
{
  GeneralSettingsScreenController::_setResourcePackStack(this);
}


void __fastcall GeneralSettingsScreenController::~GeneralSettingsScreenController(GeneralSettingsScreenController *this)
{
  GeneralSettingsScreenController *v1; // r0@1

  v1 = GeneralSettingsScreenController::~GeneralSettingsScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


GeneralSettingsScreenController *__fastcall GeneralSettingsScreenController::~GeneralSettingsScreenController(GeneralSettingsScreenController *this)
{
  GeneralSettingsScreenController *v1; // r11@1
  int v2; // r0@1
  ContentManager *v3; // r0@3
  ContentManager *v4; // r0@4
  int v5; // r5@5 OVERLAPPED
  int v6; // r6@5 OVERLAPPED
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // r1@23
  void *v12; // r0@23
  int *v13; // r0@24

  v1 = this;
  *(_DWORD *)this = &off_26E7D5C;
  v2 = *((_DWORD *)this + 136);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 136) = 0;
  v3 = (ContentManager *)*((_DWORD *)v1 + 134);
  if ( v3 )
  {
    v4 = ContentManager::~ContentManager(v3);
    operator delete((void *)v4);
  }
  *((_DWORD *)v1 + 134) = 0;
  *(_QWORD *)&v5 = *(_QWORD *)((char *)v1 + 516);
  if ( v5 != v6 )
    do
    {
      v11 = *(_DWORD *)(v5 + 4);
      v12 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
      {
        v7 = (unsigned int *)(v11 - 4);
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
          j_j_j_j__ZdlPv_9(v12);
      }
      v13 = (int *)(*(_DWORD *)v5 - 12);
      if ( v13 != &dword_28898C0 )
        v9 = (unsigned int *)(*(_DWORD *)v5 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      v5 += 8;
    }
    while ( v5 != v6 );
    v5 = *((_DWORD *)v1 + 129);
  if ( v5 )
    operator delete((void *)v5);
  SettingsScreenControllerBase::~SettingsScreenControllerBase(v1);
  return v1;
}


void __fastcall GeneralSettingsScreenController::_initLanguageList(GeneralSettingsScreenController *this)
{
  GeneralSettingsScreenController::_initLanguageList(this);
}


void __fastcall GeneralSettingsScreenController::_initLanguageList(GeneralSettingsScreenController *this)
{
  GeneralSettingsScreenController *v1; // r10@1
  int v2; // r0@1
  int *v3; // r0@1
  __int64 v4; // kr00_8@1
  int v5; // r4@2
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  int v10; // r1@19
  void *v11; // r0@19
  int **v12; // r5@22
  __int64 v13; // kr08_8@22
  int *v14; // r7@23
  __int64 v15; // kr10_8@23
  int v16; // r5@27 OVERLAPPED
  int *v17; // r6@27 OVERLAPPED
  int v18; // r7@29
  int v19; // r4@30
  bool v20; // zf@31
  __int64 v21; // kr18_8@35
  int v22; // r4@35
  int v23; // r0@35
  void *v24; // r11@36
  int v25; // r5@36
  size_t v26; // r6@36
  const void **v27; // r7@38
  _DWORD *v28; // r0@39
  _DWORD *v29; // r0@41
  _DWORD *v30; // r0@43
  int v31; // r0@47
  void *v32; // r5@49
  size_t v33; // r6@49
  size_t v34; // r2@51
  char *v35; // r0@61
  unsigned int *v36; // r2@63
  signed int v37; // r1@65
  void *s2; // [sp+4h] [bp-3Ch]@1

  v1 = this;
  v2 = I18n::getCurrentLanguage(this);
  v3 = Localization::getFullLanguageCode((Localization *)&s2, v2);
  v4 = *(_QWORD *)((char *)v1 + 516);
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = v4;
    do
    {
      v10 = *(_DWORD *)(v5 + 4);
      v11 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      }
      v3 = (int *)(*(_DWORD *)v5 - 12);
      if ( v3 != &dword_28898C0 )
        v8 = (unsigned int *)(*(_DWORD *)v5 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v3);
      v5 += 8;
    }
    while ( v5 != HIDWORD(v4) );
  }
  *((_DWORD *)v1 + 130) = v4;
  v13 = *(_QWORD *)I18n::getSupportedLanguageCodes((I18n *)v3);
  v12 = (int **)v13;
  if ( (_DWORD)v13 != HIDWORD(v13) )
      v14 = (int *)I18n::getLanguageName(v12);
      v15 = *((_QWORD *)v1 + 65);
      if ( (_DWORD)v15 == HIDWORD(v15) )
        std::vector<std::pair<std::string,std::string>,std::allocator<std::pair<std::string,std::string>>>::_M_emplace_back_aux<std::string const&,std::string const&>(
          (GeneralSettingsScreenController *)((char *)v1 + 516),
          (int *)v12,
          v14);
      else
        sub_21E8AF4((int *)v15, (int *)v12);
        sub_21E8AF4((int *)(v15 + 4), v14);
        *((_DWORD *)v1 + 130) += 8;
      ++v12;
    while ( (int **)HIDWORD(v13) != v12 );
  *(_QWORD *)&v16 = *(_QWORD *)((char *)v1 + 516);
  if ( (int *)v16 != v17 )
    sub_13CAC14(v16, v17, 2 * (31 - __clz(((signed int)v17 - v16) >> 3)), 0);
    if ( (signed int)v17 - v16 < 129 )
      sub_13CB4A4(v16, v17);
    else
      v18 = v16 + 128;
      sub_13CB4A4(v16, (int *)(v16 + 128));
      if ( (int *)(v16 + 128) != v17 )
        v19 = (int)(v17 - 32);
        do
          v17 = (int *)((unsigned int)v17 & 0xFFFFFF00);
          sub_13CB6D0(v18);
          v18 = v16 + 136;
          v20 = v19 == v16 + 8;
          v16 += 8;
        while ( !v20 );
  v21 = *(_QWORD *)((char *)v1 + 516);
  v22 = *(_QWORD *)((char *)v1 + 516);
  v23 = (HIDWORD(v21) - (signed int)v21) >> 5;
  if ( v23 >= 1 )
    v24 = s2;
    v25 = v23 + 1;
    v22 = v21;
    v26 = *((_DWORD *)s2 - 3);
      if ( *(_DWORD *)(*(_DWORD *)v22 - 12) == v26 )
        v27 = (const void **)v22;
        if ( !memcmp(*(const void **)v22, v24, v26) )
          goto LABEL_59;
      v27 = (const void **)(v22 + 8);
      v28 = *(_DWORD **)(v22 + 8);
      if ( *(v28 - 3) == v26 && !memcmp(v28, v24, v26) )
        goto LABEL_59;
      v27 = (const void **)(v22 + 16);
      v29 = *(_DWORD **)(v22 + 16);
      if ( *(v29 - 3) == v26 && !memcmp(v29, v24, v26) )
      v27 = (const void **)(v22 + 24);
      v30 = *(_DWORD **)(v22 + 24);
      if ( *(v30 - 3) == v26 && !memcmp(v30, v24, v26) )
      --v25;
      v22 += 32;
    while ( v25 > 1 );
  if ( 1 == (HIDWORD(v21) - v22) >> 3 )
    v32 = s2;
    v27 = (const void **)v22;
    v33 = *((_DWORD *)s2 - 3);
LABEL_57:
    if ( *((_DWORD *)*v27 - 3) != v33 || memcmp(*v27, v32, v33) )
      goto LABEL_61;
    goto LABEL_59;
  v31 = (HIDWORD(v21) - v22) >> 3;
  if ( v31 == 3 )
    v34 = *(_DWORD *)(*(_DWORD *)v22 - 12);
    if ( v34 == v33 )
      v27 = (const void **)v22;
      if ( !memcmp(*(const void **)v22, s2, v34) )
    v27 = (const void **)(v22 + 8);
  else
    if ( v31 != 2 )
  if ( *((_DWORD *)*v27 - 3) != v33 || memcmp(*v27, v32, v33) )
    v27 += 2;
    goto LABEL_57;
LABEL_59:
  if ( v27 != (const void **)HIDWORD(v21) )
    *((_DWORD *)v1 + 132) = (signed int)((signed int)v27 - v21) >> 3;
LABEL_61:
  v35 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)((char *)s2 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
}


void __fastcall GeneralSettingsScreenController::_registerEventHandlers(GeneralSettingsScreenController *this)
{
  GeneralSettingsScreenController::_registerEventHandlers(this);
}


int __fastcall GeneralSettingsScreenController::GeneralSettingsScreenController(int a1, int a2)
{
  int v2; // r8@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r5@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r0@10
  unsigned int *v9; // r6@14
  unsigned int v10; // r0@16
  ContentManager *v11; // r1@21
  ContentManager *v12; // r0@21
  ContentManager *v13; // r0@22
  ContentManager *v14; // r0@23
  int v15; // r5@24
  int v16; // r1@24
  int v17; // r0@24
  unsigned __int64 *v18; // r0@29
  unsigned __int64 *v19; // r0@29
  unsigned __int64 *v20; // r0@29
  int v21; // r3@29
  int v22; // r6@29
  unsigned int *v23; // r1@30
  unsigned int v24; // r0@32
  unsigned int *v25; // r7@36
  unsigned int v26; // r0@38
  int v27; // r5@45
  unsigned int *v28; // r1@46
  unsigned int v29; // r0@48
  unsigned int *v30; // r6@52
  unsigned int v31; // r0@54
  int v33; // [sp+18h] [bp-70h]@45
  char v34; // [sp+1Ch] [bp-6Ch]@45
  int v35; // [sp+20h] [bp-68h]@45
  char v36; // [sp+27h] [bp-61h]@29
  int v37; // [sp+28h] [bp-60h]@29
  int v38; // [sp+2Ch] [bp-5Ch]@29
  int v39; // [sp+34h] [bp-54h]@29
  int v40; // [sp+38h] [bp-50h]@29
  char v41; // [sp+3Ch] [bp-4Ch]@29
  int v42; // [sp+40h] [bp-48h]@29
  void *ptr; // [sp+44h] [bp-44h]@29
  int v44; // [sp+50h] [bp-38h]@24
  ContentManager *v45; // [sp+54h] [bp-34h]@21
  int v46; // [sp+58h] [bp-30h]@1
  int v47; // [sp+5Ch] [bp-2Ch]@1

  v2 = a1;
  v46 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v47 = v3;
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
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
  SettingsScreenControllerBase::SettingsScreenControllerBase(v2, (int)&v46);
  v6 = v47;
  if ( v47 )
    v7 = (unsigned int *)(v47 + 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  *(_DWORD *)v2 = &off_26E7D5C;
  *(_DWORD *)(v2 + 516) = 0;
  *(_DWORD *)(v2 + 520) = 0;
  *(_DWORD *)(v2 + 524) = 0;
  *(_DWORD *)(v2 + 528) = 0;
  *(_DWORD *)(v2 + 532) = &off_26E7DE8;
  *(_DWORD *)(v2 + 536) = 0;
  *(_DWORD *)(v2 + 540) = 0;
  *(_DWORD *)(v2 + 544) = 0;
  GeneralSettingsScreenController::_registerControllerCallbacks((GeneralSettingsScreenController *)v2);
  GeneralSettingsScreenController::_registerEventHandlers((GeneralSettingsScreenController *)v2);
  MinecraftScreenController::_setExitBehavior(v2, 3);
  GeneralSettingsScreenController::_initLanguageList((GeneralSettingsScreenController *)v2);
  MainMenuScreenModel::createContentManager((MainMenuScreenModel *)&v45, *(_DWORD *)(v2 + 424));
  v11 = v45;
  v45 = 0;
  v12 = *(ContentManager **)(v2 + 536);
  *(_DWORD *)(v2 + 536) = v11;
  if ( v12 )
    v13 = ContentManager::~ContentManager(v12);
    operator delete((void *)v13);
    if ( v45 )
      v14 = ContentManager::~ContentManager(v45);
      operator delete((void *)v14);
  v15 = ContentManager::loadContent(*(_DWORD *)(v2 + 536), 16, 3, 0, 16LL);
  Util::ProfanityFilter::createProfanityFilter((Util::ProfanityFilter *)&v44);
  v16 = v44;
  v44 = 0;
  v17 = *(_DWORD *)(v2 + 544);
  *(_DWORD *)(v2 + 544) = v16;
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
    if ( v44 )
      (*(void (**)(void))(*(_DWORD *)v44 + 4))();
  if ( *(_DWORD *)(v15 + 16) == 1 )
    *(_DWORD *)(v2 + 540) = v15;
  InvalidPacksFilterGroup::InvalidPacksFilterGroup((InvalidPacksFilterGroup *)&ptr);
  v18 = InvalidPacksFilterGroup::addFilter((unsigned __int64 *)&ptr, 0);
  v19 = InvalidPacksFilterGroup::addFilter(v18, 2);
  v20 = InvalidPacksFilterGroup::addFilter(v19, 1);
  InvalidPacksFilterGroup::addFilter(v20, 3);
  ContentManager::loadContent(*(ContentManager **)(v2 + 536), (const InvalidPacksFilterGroup *)&ptr);
  v39 = 0;
  v21 = *(_DWORD *)(v2 + 536);
  v38 = 0;
  v37 = 3;
  v36 = 0;
  std::make_unique<ResourcePacksScreenController,std::shared_ptr<MainMenuScreenModel> &,SettingsScreenMode,ContentManager &,ContentType,InvalidPacksFilterGroup &,PackScope,MultiplayerLockState &>(
    &v40,
    v2 + 424,
    &v39,
    v21,
    (__int64 *)&v37,
    (unsigned __int64 *)&ptr,
    &v36,
    v2 + 532);
  std::__shared_ptr<ScreenController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<ResourcePacksScreenController,std::default_delete<std::default_delete>>(
    (int)&v41,
    &v40);
  ScreenController::_registerSubController(v2, (int)&v41);
  v22 = v42;
  if ( v42 )
    v23 = (unsigned int *)(v42 + 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      v25 = (unsigned int *)(v22 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
  if ( v40 )
    (*(void (**)(void))(*(_DWORD *)v40 + 4))();
  v40 = 0;
  std::make_unique<StorageManagementScreenController,std::shared_ptr<MainMenuScreenModel> &,ContentManager &>(
    &v33,
    *(_DWORD *)(v2 + 536));
  std::__shared_ptr<ScreenController,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<StorageManagementScreenController,std::default_delete<std::default_delete>>(
    (int)&v34,
    &v33);
  ScreenController::_registerSubController(v2, (int)&v34);
  v27 = v35;
  if ( v35 )
    v28 = (unsigned int *)(v35 + 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      v30 = (unsigned int *)(v27 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
  if ( v33 )
    (*(void (**)(void))(*(_DWORD *)v33 + 4))();
  v33 = 0;
  if ( ptr )
    operator delete(ptr);
  return v2;
}


void __fastcall GeneralSettingsScreenController::_registerEventHandlers(GeneralSettingsScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  _DWORD *v8; // [sp+4h] [bp-2Ch]@1
  __int64 v9; // [sp+Ch] [bp-24h]@1
  int v10; // [sp+18h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v10, "button.attribution_popup");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_13CA9E8;
  *v3 = v1;
  HIDWORD(v4) = sub_13CA928;
  v8 = v3;
  v9 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v8);
  if ( (_DWORD)v9 )
    ((void (*)(void))v9)();
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
}


void __fastcall GeneralSettingsScreenController::_setResourcePackStack(GeneralSettingsScreenController *this)
{
  GeneralSettingsScreenController *v1; // r9@1
  int v2; // r0@2
  int v3; // r5@3
  int i; // r7@3
  int v5; // r4@4
  char *v6; // r6@5
  int *v7; // r2@5
  int v8; // r0@9
  int v9; // r0@9
  _QWORD *v10; // r5@9
  __int64 v11; // r6@9
  ResourcePackRepository *v12; // r6@14
  ResourcePackStack *v13; // r5@14
  ResourcePackManager *v14; // r0@14
  ResourcePackStack *v15; // [sp+0h] [bp-38h]@14
  void *ptr; // [sp+4h] [bp-34h]@9
  int v17; // [sp+8h] [bp-30h]@9
  void *v18; // [sp+10h] [bp-28h]@3
  void *v19; // [sp+14h] [bp-24h]@3
  void *v20; // [sp+18h] [bp-20h]@3

  v1 = this;
  if ( MinecraftScreenModel::isPreGame(*((MinecraftScreenModel **)this + 106)) != 1 )
    return;
  v2 = *((_DWORD *)v1 + 135);
  if ( !v2 )
  (*(void (**)(void))(*(_DWORD *)v2 + 16))();
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v3 = *(_QWORD *)(*((_DWORD *)v1 + 135) + 4) >> 32;
  for ( i = *(_QWORD *)(*((_DWORD *)v1 + 135) + 4); v3 != i; i += 4 )
  {
    v5 = *(_DWORD *)i;
    if ( *(_DWORD *)(*(_DWORD *)i + 76) == 1 )
    {
      v6 = PackManifest::getIdentity(*(PackManifest **)(v5 + 60));
      v7 = (int *)SubpackInfoCollection::getSubpackFolderName(
                    (SubpackInfoCollection *)(v5 + 308),
                    *(_DWORD *)(v5 + 304));
      if ( v19 == v20 )
      {
        std::vector<PackInstanceId,std::allocator<PackInstanceId>>::_M_emplace_back_aux<PackIdVersion const&,std::string const&>(
          (unsigned __int64 *)&v18,
          (int)v6,
          v7);
      }
      else
        PackInstanceId::PackInstanceId((int)v19, (int)v6, v7);
        v19 = (char *)v19 + 56;
    }
  }
  v8 = MinecraftScreenModel::getResourcePackManager(*((MinecraftScreenModel **)v1 + 106));
  v9 = ResourcePackManager::getStack(v8, 2);
  ResourcePackStack::getStackAsIdentities((ResourcePackStack *)&ptr, v9);
  v10 = ptr;
  v11 = *(_QWORD *)&v18;
  if ( (_BYTE *)v19 - (_BYTE *)v18 != v17 - (_DWORD)ptr )
    goto LABEL_14;
  if ( v18 != v19 )
    while ( PackInstanceId::operator==(v11, v10) == 1 )
      LODWORD(v11) = v11 + 56;
      v10 += 7;
      if ( HIDWORD(v11) == (_DWORD)v11 )
        goto LABEL_17;
LABEL_14:
    v12 = (ResourcePackRepository *)MinecraftScreenModel::getResourcePackRepository(*((MinecraftScreenModel **)v1 + 106));
    v13 = (ResourcePackStack *)operator new(0x14u);
    ResourcePackStack::ResourcePackStack(v13, &v18, v12);
    v14 = (ResourcePackManager *)MinecraftScreenModel::getResourcePackManager(*((MinecraftScreenModel **)v1 + 106));
    v15 = v13;
    ResourcePackManager::setStack(v14, (int *)&v15, 2, 1);
    if ( v15 )
      (*(void (**)(void))(*(_DWORD *)v15 + 4))();
    v15 = 0;
LABEL_17:
  std::_Destroy<PackInstanceId *>((int)ptr, v17);
  if ( ptr )
    operator delete(ptr);
  std::_Destroy<PackInstanceId *>((int)v18, (int)v19);
  if ( v18 )
    operator delete(v18);
}
