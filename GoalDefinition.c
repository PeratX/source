

int __fastcall GoalDefinition::init(GoalDefinition *this)
{
  int result; // r0@1
  int v2; // r4@2
  void *v3; // r0@2
  int v4; // r3@2
  void (*v5)(void); // r3@2
  void *v6; // r0@4
  int v7; // r4@5
  void *v8; // r0@5
  int v9; // r3@5
  void (*v10)(void); // r3@5
  void *v11; // r0@7
  int v12; // r4@8
  void *v13; // r0@8
  int v14; // r3@8
  void (*v15)(void); // r3@8
  void *v16; // r0@10
  int v17; // r4@11
  void *v18; // r0@11
  int v19; // r3@11
  void (*v20)(void); // r3@11
  void *v21; // r0@13
  int v22; // r4@14
  void *v23; // r0@14
  int v24; // r3@14
  void (*v25)(void); // r3@14
  void *v26; // r0@16
  int v27; // r4@17
  void *v28; // r0@17
  int v29; // r3@17
  void (*v30)(void); // r3@17
  void *v31; // r0@19
  int v32; // r4@20
  void *v33; // r0@20
  int v34; // r3@20
  void (*v35)(void); // r3@20
  void *v36; // r0@22
  int v37; // r4@23
  void *v38; // r0@23
  int v39; // r3@23
  void (*v40)(void); // r3@23
  void *v41; // r0@25
  int v42; // r4@26
  void *v43; // r0@26
  int v44; // r3@26
  void (*v45)(void); // r3@26
  void *v46; // r0@28
  int v47; // r4@29
  void *v48; // r0@29
  int v49; // r3@29
  void (*v50)(void); // r3@29
  void *v51; // r0@31
  int v52; // r4@32
  void *v53; // r0@32
  int v54; // r3@32
  void (*v55)(void); // r3@32
  void *v56; // r0@34
  int v57; // r4@35
  void *v58; // r0@35
  int v59; // r3@35
  void (*v60)(void); // r3@35
  void *v61; // r0@37
  int v62; // r4@38
  void *v63; // r0@38
  int v64; // r3@38
  void (*v65)(void); // r3@38
  void *v66; // r0@40
  int v67; // r4@41
  void *v68; // r0@41
  int v69; // r3@41
  void (*v70)(void); // r3@41
  void *v71; // r0@43
  int v72; // r4@44
  void *v73; // r0@44
  int v74; // r3@44
  void (*v75)(void); // r3@44
  void *v76; // r0@46
  int v77; // r4@47
  void *v78; // r0@47
  int v79; // r3@47
  void (*v80)(void); // r3@47
  void *v81; // r0@49
  int v82; // r4@50
  void *v83; // r0@50
  int v84; // r3@50
  void (*v85)(void); // r3@50
  void *v86; // r0@52
  int v87; // r4@53
  void *v88; // r0@53
  int v89; // r3@53
  void (*v90)(void); // r3@53
  void *v91; // r0@55
  int v92; // r4@56
  void *v93; // r0@56
  int v94; // r3@56
  void (*v95)(void); // r3@56
  void *v96; // r0@58
  int v97; // r4@59
  void *v98; // r0@59
  int v99; // r3@59
  void (*v100)(void); // r3@59
  void *v101; // r0@61
  int v102; // r4@62
  void *v103; // r0@62
  int v104; // r3@62
  void (*v105)(void); // r3@62
  void *v106; // r0@64
  int v107; // r4@65
  void *v108; // r0@65
  int v109; // r3@65
  void (*v110)(void); // r3@65
  void *v111; // r0@67
  int v112; // r4@68
  void *v113; // r0@68
  int v114; // r3@68
  void (*v115)(void); // r3@68
  void *v116; // r0@70
  int v117; // r4@71
  void *v118; // r0@71
  int v119; // r3@71
  void (*v120)(void); // r3@71
  void *v121; // r0@73
  int v122; // r4@74
  void *v123; // r0@74
  int v124; // r3@74
  void (*v125)(void); // r3@74
  void *v126; // r0@76
  int v127; // r4@77
  void *v128; // r0@77
  int v129; // r3@77
  void (*v130)(void); // r3@77
  void *v131; // r0@79
  int v132; // r4@80
  void *v133; // r0@80
  int v134; // r3@80
  void (*v135)(void); // r3@80
  void *v136; // r0@82
  int v137; // r4@83
  void *v138; // r0@83
  int v139; // r3@83
  void (*v140)(void); // r3@83
  void *v141; // r0@85
  int v142; // r4@86
  void *v143; // r0@86
  int v144; // r3@86
  void (*v145)(void); // r3@86
  void *v146; // r0@88
  int v147; // r4@89
  void *v148; // r0@89
  int v149; // r3@89
  void (*v150)(void); // r3@89
  void *v151; // r0@91
  int v152; // r4@92
  void *v153; // r0@92
  int v154; // r3@92
  void (*v155)(void); // r3@92
  void *v156; // r0@94
  int v157; // r4@95
  void *v158; // r0@95
  int v159; // r3@95
  void (*v160)(void); // r3@95
  void *v161; // r0@97
  int v162; // r4@98
  void *v163; // r0@98
  int v164; // r3@98
  void (*v165)(void); // r3@98
  void *v166; // r0@100
  int v167; // r4@101
  void *v168; // r0@101
  int v169; // r3@101
  void (*v170)(void); // r3@101
  void *v171; // r0@103
  int v172; // r4@104
  void *v173; // r0@104
  int v174; // r3@104
  void (*v175)(void); // r3@104
  void *v176; // r0@106
  int v177; // r4@107
  void *v178; // r0@107
  int v179; // r3@107
  void (*v180)(void); // r3@107
  void *v181; // r0@109
  int v182; // r4@110
  void *v183; // r0@110
  int v184; // r3@110
  void (*v185)(void); // r3@110
  void *v186; // r0@112
  int v187; // r4@113
  void *v188; // r0@113
  int v189; // r3@113
  void (*v190)(void); // r3@113
  void *v191; // r0@115
  int v192; // r4@116
  void *v193; // r0@116
  int v194; // r3@116
  void (*v195)(void); // r3@116
  void *v196; // r0@118
  int v197; // r4@119
  void *v198; // r0@119
  int v199; // r3@119
  void (*v200)(void); // r3@119
  void *v201; // r0@121
  int v202; // r4@122
  void *v203; // r0@122
  int v204; // r3@122
  void (*v205)(void); // r3@122
  void *v206; // r0@124
  int v207; // r4@125
  void *v208; // r0@125
  int v209; // r3@125
  void (*v210)(void); // r3@125
  void *v211; // r0@127
  int v212; // r4@128
  void *v213; // r0@128
  int v214; // r3@128
  void (*v215)(void); // r3@128
  void *v216; // r0@130
  int v217; // r4@131
  void *v218; // r0@131
  int v219; // r3@131
  void (*v220)(void); // r3@131
  void *v221; // r0@133
  int v222; // r4@134
  void *v223; // r0@134
  int v224; // r3@134
  void (*v225)(void); // r3@134
  void *v226; // r0@136
  int v227; // r4@137
  void *v228; // r0@137
  int v229; // r3@137
  void (*v230)(void); // r3@137
  void *v231; // r0@139
  int v232; // r4@140
  void *v233; // r0@140
  int v234; // r3@140
  void (*v235)(void); // r3@140
  void *v236; // r0@142
  int v237; // r4@143
  void *v238; // r0@143
  int v239; // r3@143
  void (*v240)(void); // r3@143
  void *v241; // r0@145
  int v242; // r4@146
  void *v243; // r0@146
  int v244; // r3@146
  void (*v245)(void); // r3@146
  void *v246; // r0@148
  int v247; // r4@149
  void *v248; // r0@149
  int v249; // r3@149
  void (*v250)(void); // r3@149
  void *v251; // r0@151
  int v252; // r4@152
  void *v253; // r0@152
  int v254; // r3@152
  void (*v255)(void); // r3@152
  void *v256; // r0@154
  int v257; // r4@155
  void *v258; // r0@155
  int v259; // r3@155
  void (*v260)(void); // r3@155
  void *v261; // r0@157
  int v262; // r4@158
  void *v263; // r0@158
  int v264; // r3@158
  void (*v265)(void); // r3@158
  void *v266; // r0@160
  int v267; // r4@161
  void *v268; // r0@161
  int v269; // r3@161
  void (*v270)(void); // r3@161
  void *v271; // r0@163
  int v272; // r4@164
  void *v273; // r0@164
  int v274; // r3@164
  void (*v275)(void); // r3@164
  void *v276; // r0@166
  int v277; // r4@167
  void *v278; // r0@167
  int v279; // r3@167
  void (*v280)(void); // r3@167
  void *v281; // r0@169
  int v282; // r4@170
  void *v283; // r0@170
  int v284; // r3@170
  void (*v285)(void); // r3@170
  void *v286; // r0@172
  int v287; // r4@173
  void *v288; // r0@173
  int v289; // r3@173
  void (*v290)(void); // r3@173
  void *v291; // r0@175
  int v292; // r4@176
  void *v293; // r0@176
  int v294; // r3@176
  void (*v295)(void); // r3@176
  void *v296; // r0@178
  int v297; // r4@179
  void *v298; // r0@179
  int v299; // r3@179
  void (*v300)(void); // r3@179
  void *v301; // r0@181
  int v302; // r4@182
  void *v303; // r0@182
  int v304; // r3@182
  void (*v305)(void); // r3@182
  void *v306; // r0@184
  int v307; // r4@185
  void *v308; // r0@185
  int v309; // r3@185
  void (*v310)(void); // r3@185
  void *v311; // r0@187
  int v312; // r4@188
  void *v313; // r0@188
  int v314; // r3@188
  void (*v315)(void); // r3@188
  void *v316; // r0@190
  int v317; // r4@191
  void *v318; // r0@191
  int v319; // r3@191
  void (*v320)(void); // r3@191
  void *v321; // r0@193
  int v322; // r4@194
  void *v323; // r0@194
  int v324; // r3@194
  void (*v325)(void); // r3@194
  void *v326; // r0@196
  int v327; // r4@197
  void *v328; // r0@197
  int v329; // r3@197
  void (*v330)(void); // r3@197
  void *v331; // r0@199
  int v332; // r4@200
  void *v333; // r0@200
  int v334; // r3@200
  void (*v335)(void); // r3@200
  void *v336; // r0@202
  int v337; // r4@203
  void *v338; // r0@203
  int v339; // r3@203
  void (*v340)(void); // r3@203
  void *v341; // r0@205
  int v342; // r4@206
  void *v343; // r0@206
  int v344; // r3@206
  void (*v345)(void); // r3@206
  void *v346; // r0@208
  int v347; // r4@209
  void *v348; // r0@209
  int v349; // r3@209
  void (*v350)(void); // r3@209
  void *v351; // r0@211
  int v352; // r4@212
  void *v353; // r0@212
  int v354; // r3@212
  void (*v355)(void); // r3@212
  void *v356; // r0@214
  int v357; // r4@215
  void *v358; // r0@215
  int v359; // r3@215
  void (*v360)(void); // r3@215
  void *v361; // r0@217
  int v362; // r4@218
  void *v363; // r0@218
  int v364; // r3@218
  void (*v365)(void); // r3@218
  void *v366; // r0@220
  int v367; // r4@221
  void *v368; // r0@221
  int v369; // r3@221
  void (*v370)(void); // r3@221
  void *v371; // r0@223
  int v372; // r4@224
  void *v373; // r0@224
  int v374; // r3@224
  void (*v375)(void); // r3@224
  void *v376; // r0@226
  int v377; // r4@227
  void *v378; // r0@227
  int v379; // r3@227
  void (*v380)(void); // r3@227
  void *v381; // r0@229
  int v382; // r4@230
  void *v383; // r0@230
  int v384; // r3@230
  void (*v385)(void); // r3@230
  void *v386; // r0@232
  int v387; // r4@233
  void *v388; // r0@233
  int v389; // r3@233
  void (*v390)(void); // r3@233
  void *v391; // r0@235
  int v392; // r4@236
  void *v393; // r0@236
  int v394; // r3@236
  void (*v395)(void); // r3@236
  void *v396; // r0@238
  int v397; // r4@239
  void *v398; // r0@239
  int v399; // r3@239
  void (*v400)(void); // r3@239
  void *v401; // r0@241
  int v402; // r4@242
  void *v403; // r0@242
  int v404; // r3@242
  void (*v405)(void); // r3@242
  void *v406; // r0@244
  int v407; // r4@245
  void *v408; // r0@245
  int v409; // r3@245
  void (*v410)(void); // r3@245
  void *v411; // r0@247
  int v412; // r4@248
  void *v413; // r0@248
  int v414; // r3@248
  void (*v415)(void); // r3@248
  void *v416; // r0@250
  int v417; // r4@251
  void *v418; // r0@251
  int v419; // r3@251
  void (*v420)(void); // r3@251
  void *v421; // r0@253
  int v422; // r4@254
  void *v423; // r0@254
  int v424; // r3@254
  void (*v425)(void); // r3@254
  void *v426; // r0@256
  int v427; // r4@257
  void *v428; // r0@257
  int v429; // r3@257
  void (*v430)(void); // r3@257
  void *v431; // r0@259
  int v432; // r4@260
  void *v433; // r0@260
  int v434; // r3@260
  void (*v435)(void); // r3@260
  void *v436; // r0@262
  int v437; // r4@263
  void *v438; // r0@263
  int v439; // r3@263
  void (*v440)(void); // r3@263
  void *v441; // r0@265
  int v442; // r4@266
  void *v443; // r0@266
  int v444; // r3@266
  void (*v445)(void); // r3@266
  void *v446; // r0@268
  int v447; // r4@269
  void *v448; // r0@269
  int v449; // r3@269
  void (*v450)(void); // r3@269
  void *v451; // r0@271
  int i; // r4@272
  unsigned int *v453; // r2@277
  signed int v454; // r1@279
  unsigned int *v455; // r2@281
  signed int v456; // r1@283
  unsigned int *v457; // r2@285
  signed int v458; // r1@287
  unsigned int *v459; // r2@289
  signed int v460; // r1@291
  unsigned int *v461; // r2@293
  signed int v462; // r1@295
  unsigned int *v463; // r2@297
  signed int v464; // r1@299
  unsigned int *v465; // r2@301
  signed int v466; // r1@303
  unsigned int *v467; // r2@305
  signed int v468; // r1@307
  unsigned int *v469; // r2@309
  signed int v470; // r1@311
  unsigned int *v471; // r2@313
  signed int v472; // r1@315
  unsigned int *v473; // r2@317
  signed int v474; // r1@319
  unsigned int *v475; // r2@321
  signed int v476; // r1@323
  unsigned int *v477; // r2@325
  signed int v478; // r1@327
  unsigned int *v479; // r2@329
  signed int v480; // r1@331
  unsigned int *v481; // r2@333
  signed int v482; // r1@335
  unsigned int *v483; // r2@337
  signed int v484; // r1@339
  unsigned int *v485; // r2@341
  signed int v486; // r1@343
  unsigned int *v487; // r2@345
  signed int v488; // r1@347
  unsigned int *v489; // r2@349
  signed int v490; // r1@351
  unsigned int *v491; // r2@353
  signed int v492; // r1@355
  unsigned int *v493; // r2@357
  signed int v494; // r1@359
  unsigned int *v495; // r2@361
  signed int v496; // r1@363
  unsigned int *v497; // r2@365
  signed int v498; // r1@367
  unsigned int *v499; // r2@369
  signed int v500; // r1@371
  unsigned int *v501; // r2@373
  signed int v502; // r1@375
  unsigned int *v503; // r2@377
  signed int v504; // r1@379
  unsigned int *v505; // r2@381
  signed int v506; // r1@383
  unsigned int *v507; // r2@385
  signed int v508; // r1@387
  unsigned int *v509; // r2@389
  signed int v510; // r1@391
  unsigned int *v511; // r2@393
  signed int v512; // r1@395
  unsigned int *v513; // r2@397
  signed int v514; // r1@399
  unsigned int *v515; // r2@401
  signed int v516; // r1@403
  unsigned int *v517; // r2@405
  signed int v518; // r1@407
  unsigned int *v519; // r2@409
  signed int v520; // r1@411
  unsigned int *v521; // r2@413
  signed int v522; // r1@415
  unsigned int *v523; // r2@417
  signed int v524; // r1@419
  unsigned int *v525; // r2@421
  signed int v526; // r1@423
  unsigned int *v527; // r2@425
  signed int v528; // r1@427
  unsigned int *v529; // r2@429
  signed int v530; // r1@431
  unsigned int *v531; // r2@433
  signed int v532; // r1@435
  unsigned int *v533; // r2@437
  signed int v534; // r1@439
  unsigned int *v535; // r2@441
  signed int v536; // r1@443
  unsigned int *v537; // r2@445
  signed int v538; // r1@447
  unsigned int *v539; // r2@449
  signed int v540; // r1@451
  unsigned int *v541; // r2@453
  signed int v542; // r1@455
  unsigned int *v543; // r2@457
  signed int v544; // r1@459
  unsigned int *v545; // r2@461
  signed int v546; // r1@463
  unsigned int *v547; // r2@465
  signed int v548; // r1@467
  unsigned int *v549; // r2@469
  signed int v550; // r1@471
  unsigned int *v551; // r2@473
  signed int v552; // r1@475
  unsigned int *v553; // r2@477
  signed int v554; // r1@479
  unsigned int *v555; // r2@481
  signed int v556; // r1@483
  unsigned int *v557; // r2@485
  signed int v558; // r1@487
  unsigned int *v559; // r2@489
  signed int v560; // r1@491
  unsigned int *v561; // r2@493
  signed int v562; // r1@495
  unsigned int *v563; // r2@497
  signed int v564; // r1@499
  unsigned int *v565; // r2@501
  signed int v566; // r1@503
  unsigned int *v567; // r2@505
  signed int v568; // r1@507
  unsigned int *v569; // r2@509
  signed int v570; // r1@511
  unsigned int *v571; // r2@513
  signed int v572; // r1@515
  unsigned int *v573; // r2@517
  signed int v574; // r1@519
  unsigned int *v575; // r2@521
  signed int v576; // r1@523
  unsigned int *v577; // r2@525
  signed int v578; // r1@527
  unsigned int *v579; // r2@529
  signed int v580; // r1@531
  unsigned int *v581; // r2@533
  signed int v582; // r1@535
  unsigned int *v583; // r2@537
  signed int v584; // r1@539
  unsigned int *v585; // r2@541
  signed int v586; // r1@543
  unsigned int *v587; // r2@545
  signed int v588; // r1@547
  unsigned int *v589; // r2@549
  signed int v590; // r1@551
  unsigned int *v591; // r2@553
  signed int v592; // r1@555
  unsigned int *v593; // r2@557
  signed int v594; // r1@559
  unsigned int *v595; // r2@561
  signed int v596; // r1@563
  unsigned int *v597; // r2@565
  signed int v598; // r1@567
  unsigned int *v599; // r2@569
  signed int v600; // r1@571
  unsigned int *v601; // r2@573
  signed int v602; // r1@575
  unsigned int *v603; // r2@577
  signed int v604; // r1@579
  unsigned int *v605; // r2@581
  signed int v606; // r1@583
  unsigned int *v607; // r2@585
  signed int v608; // r1@587
  unsigned int *v609; // r2@589
  signed int v610; // r1@591
  unsigned int *v611; // r2@593
  signed int v612; // r1@595
  unsigned int *v613; // r2@597
  signed int v614; // r1@599
  unsigned int *v615; // r2@601
  signed int v616; // r1@603
  unsigned int *v617; // r2@605
  signed int v618; // r1@607
  unsigned int *v619; // r2@609
  signed int v620; // r1@611
  unsigned int *v621; // r2@613
  signed int v622; // r1@615
  unsigned int *v623; // r2@617
  signed int v624; // r1@619
  unsigned int *v625; // r2@621
  signed int v626; // r1@623
  unsigned int *v627; // r2@625
  signed int v628; // r1@627
  unsigned int *v629; // r2@629
  signed int v630; // r1@631
  unsigned int *v631; // r2@633
  signed int v632; // r1@635
  int v633; // [sp+4h] [bp-884h]@269
  int v634; // [sp+Ch] [bp-87Ch]@266
  int v635; // [sp+14h] [bp-874h]@263
  int v636; // [sp+1Ch] [bp-86Ch]@260
  int v637; // [sp+24h] [bp-864h]@257
  int v638; // [sp+2Ch] [bp-85Ch]@254
  int v639; // [sp+34h] [bp-854h]@251
  int v640; // [sp+3Ch] [bp-84Ch]@248
  int v641; // [sp+44h] [bp-844h]@245
  int v642; // [sp+4Ch] [bp-83Ch]@242
  int v643; // [sp+54h] [bp-834h]@239
  int v644; // [sp+5Ch] [bp-82Ch]@236
  int v645; // [sp+64h] [bp-824h]@233
  int v646; // [sp+6Ch] [bp-81Ch]@230
  int v647; // [sp+74h] [bp-814h]@227
  int v648; // [sp+7Ch] [bp-80Ch]@224
  int v649; // [sp+84h] [bp-804h]@221
  int v650; // [sp+8Ch] [bp-7FCh]@218
  int v651; // [sp+94h] [bp-7F4h]@215
  int v652; // [sp+9Ch] [bp-7ECh]@212
  int v653; // [sp+A4h] [bp-7E4h]@209
  int v654; // [sp+ACh] [bp-7DCh]@206
  int v655; // [sp+B4h] [bp-7D4h]@203
  int v656; // [sp+BCh] [bp-7CCh]@200
  int v657; // [sp+C4h] [bp-7C4h]@197
  int v658; // [sp+CCh] [bp-7BCh]@194
  int v659; // [sp+D4h] [bp-7B4h]@191
  int v660; // [sp+DCh] [bp-7ACh]@188
  int v661; // [sp+E4h] [bp-7A4h]@185
  int v662; // [sp+ECh] [bp-79Ch]@182
  int v663; // [sp+F4h] [bp-794h]@179
  int v664; // [sp+FCh] [bp-78Ch]@176
  int v665; // [sp+104h] [bp-784h]@173
  int v666; // [sp+10Ch] [bp-77Ch]@170
  int v667; // [sp+114h] [bp-774h]@167
  int v668; // [sp+11Ch] [bp-76Ch]@164
  int v669; // [sp+124h] [bp-764h]@161
  int v670; // [sp+12Ch] [bp-75Ch]@158
  int v671; // [sp+134h] [bp-754h]@155
  int v672; // [sp+13Ch] [bp-74Ch]@152
  int v673; // [sp+144h] [bp-744h]@149
  int v674; // [sp+14Ch] [bp-73Ch]@146
  int v675; // [sp+154h] [bp-734h]@143
  int v676; // [sp+15Ch] [bp-72Ch]@140
  int v677; // [sp+164h] [bp-724h]@137
  int v678; // [sp+16Ch] [bp-71Ch]@134
  int v679; // [sp+174h] [bp-714h]@131
  int v680; // [sp+17Ch] [bp-70Ch]@128
  int v681; // [sp+184h] [bp-704h]@125
  int v682; // [sp+18Ch] [bp-6FCh]@122
  int v683; // [sp+194h] [bp-6F4h]@119
  int v684; // [sp+19Ch] [bp-6ECh]@116
  int v685; // [sp+1A4h] [bp-6E4h]@113
  int v686; // [sp+1ACh] [bp-6DCh]@110
  int v687; // [sp+1B4h] [bp-6D4h]@107
  int v688; // [sp+1BCh] [bp-6CCh]@104
  int v689; // [sp+1C4h] [bp-6C4h]@101
  int v690; // [sp+1CCh] [bp-6BCh]@98
  int v691; // [sp+1D4h] [bp-6B4h]@95
  int v692; // [sp+1DCh] [bp-6ACh]@92
  int v693; // [sp+1E4h] [bp-6A4h]@89
  int v694; // [sp+1ECh] [bp-69Ch]@86
  int v695; // [sp+1F4h] [bp-694h]@83
  int v696; // [sp+1FCh] [bp-68Ch]@80
  int v697; // [sp+204h] [bp-684h]@77
  int v698; // [sp+20Ch] [bp-67Ch]@74
  int v699; // [sp+214h] [bp-674h]@71
  int v700; // [sp+21Ch] [bp-66Ch]@68
  int v701; // [sp+224h] [bp-664h]@65
  int v702; // [sp+22Ch] [bp-65Ch]@62
  int v703; // [sp+234h] [bp-654h]@59
  int v704; // [sp+23Ch] [bp-64Ch]@56
  int v705; // [sp+244h] [bp-644h]@53
  int v706; // [sp+24Ch] [bp-63Ch]@50
  int v707; // [sp+254h] [bp-634h]@47
  int v708; // [sp+25Ch] [bp-62Ch]@44
  int v709; // [sp+264h] [bp-624h]@41
  int v710; // [sp+26Ch] [bp-61Ch]@38
  int v711; // [sp+274h] [bp-614h]@35
  int v712; // [sp+27Ch] [bp-60Ch]@32
  int v713; // [sp+284h] [bp-604h]@29
  int v714; // [sp+28Ch] [bp-5FCh]@26
  int v715; // [sp+294h] [bp-5F4h]@23
  int v716; // [sp+29Ch] [bp-5ECh]@20
  int v717; // [sp+2A4h] [bp-5E4h]@17
  int v718; // [sp+2ACh] [bp-5DCh]@14
  int v719; // [sp+2B4h] [bp-5D4h]@11
  int v720; // [sp+2BCh] [bp-5CCh]@8
  int v721; // [sp+2C4h] [bp-5C4h]@5
  int v722; // [sp+2CCh] [bp-5BCh]@2
  void *v723; // [sp+2D0h] [bp-5B8h]@2
  int v724; // [sp+2D4h] [bp-5B4h]@2
  void (*v725)(void); // [sp+2D8h] [bp-5B0h]@2
  int v726; // [sp+2DCh] [bp-5ACh]@2
  void *v727; // [sp+2E0h] [bp-5A8h]@5
  int v728; // [sp+2E4h] [bp-5A4h]@5
  void (*v729)(void); // [sp+2E8h] [bp-5A0h]@5
  int v730; // [sp+2ECh] [bp-59Ch]@5
  void *v731; // [sp+2F0h] [bp-598h]@8
  int v732; // [sp+2F4h] [bp-594h]@8
  void (*v733)(void); // [sp+2F8h] [bp-590h]@8
  int v734; // [sp+2FCh] [bp-58Ch]@8
  void *v735; // [sp+300h] [bp-588h]@11
  int v736; // [sp+304h] [bp-584h]@11
  void (*v737)(void); // [sp+308h] [bp-580h]@11
  int v738; // [sp+30Ch] [bp-57Ch]@11
  void *v739; // [sp+310h] [bp-578h]@14
  int v740; // [sp+314h] [bp-574h]@14
  void (*v741)(void); // [sp+318h] [bp-570h]@14
  int v742; // [sp+31Ch] [bp-56Ch]@14
  void *v743; // [sp+320h] [bp-568h]@17
  int v744; // [sp+324h] [bp-564h]@17
  void (*v745)(void); // [sp+328h] [bp-560h]@17
  int v746; // [sp+32Ch] [bp-55Ch]@17
  void *v747; // [sp+330h] [bp-558h]@20
  int v748; // [sp+334h] [bp-554h]@20
  void (*v749)(void); // [sp+338h] [bp-550h]@20
  int v750; // [sp+33Ch] [bp-54Ch]@20
  void *v751; // [sp+340h] [bp-548h]@23
  int v752; // [sp+344h] [bp-544h]@23
  void (*v753)(void); // [sp+348h] [bp-540h]@23
  int v754; // [sp+34Ch] [bp-53Ch]@23
  void *v755; // [sp+350h] [bp-538h]@26
  int v756; // [sp+354h] [bp-534h]@26
  void (*v757)(void); // [sp+358h] [bp-530h]@26
  int v758; // [sp+35Ch] [bp-52Ch]@26
  void *v759; // [sp+360h] [bp-528h]@29
  int v760; // [sp+364h] [bp-524h]@29
  void (*v761)(void); // [sp+368h] [bp-520h]@29
  int v762; // [sp+36Ch] [bp-51Ch]@29
  void *v763; // [sp+370h] [bp-518h]@32
  int v764; // [sp+374h] [bp-514h]@32
  void (*v765)(void); // [sp+378h] [bp-510h]@32
  int v766; // [sp+37Ch] [bp-50Ch]@32
  void *v767; // [sp+380h] [bp-508h]@35
  int v768; // [sp+384h] [bp-504h]@35
  void (*v769)(void); // [sp+388h] [bp-500h]@35
  int v770; // [sp+38Ch] [bp-4FCh]@35
  void *v771; // [sp+390h] [bp-4F8h]@38
  int v772; // [sp+394h] [bp-4F4h]@38
  void (*v773)(void); // [sp+398h] [bp-4F0h]@38
  int v774; // [sp+39Ch] [bp-4ECh]@38
  void *v775; // [sp+3A0h] [bp-4E8h]@41
  int v776; // [sp+3A4h] [bp-4E4h]@41
  void (*v777)(void); // [sp+3A8h] [bp-4E0h]@41
  int v778; // [sp+3ACh] [bp-4DCh]@41
  void *v779; // [sp+3B0h] [bp-4D8h]@44
  int v780; // [sp+3B4h] [bp-4D4h]@44
  void (*v781)(void); // [sp+3B8h] [bp-4D0h]@44
  int v782; // [sp+3BCh] [bp-4CCh]@44
  void *v783; // [sp+3C0h] [bp-4C8h]@47
  int v784; // [sp+3C4h] [bp-4C4h]@47
  void (*v785)(void); // [sp+3C8h] [bp-4C0h]@47
  int v786; // [sp+3CCh] [bp-4BCh]@47
  void *v787; // [sp+3D0h] [bp-4B8h]@50
  int v788; // [sp+3D4h] [bp-4B4h]@50
  void (*v789)(void); // [sp+3D8h] [bp-4B0h]@50
  int v790; // [sp+3DCh] [bp-4ACh]@50
  void *v791; // [sp+3E0h] [bp-4A8h]@53
  int v792; // [sp+3E4h] [bp-4A4h]@53
  void (*v793)(void); // [sp+3E8h] [bp-4A0h]@53
  int v794; // [sp+3ECh] [bp-49Ch]@53
  void *v795; // [sp+3F0h] [bp-498h]@56
  int v796; // [sp+3F4h] [bp-494h]@56
  void (*v797)(void); // [sp+3F8h] [bp-490h]@56
  int v798; // [sp+3FCh] [bp-48Ch]@56
  __int64 v799; // [sp+400h] [bp-488h]@59
  void (*v800)(void); // [sp+408h] [bp-480h]@59
  int v801; // [sp+40Ch] [bp-47Ch]@59
  __int64 v802; // [sp+410h] [bp-478h]@62
  void (*v803)(void); // [sp+418h] [bp-470h]@62
  int v804; // [sp+41Ch] [bp-46Ch]@62
  __int64 v805; // [sp+420h] [bp-468h]@65
  void (*v806)(void); // [sp+428h] [bp-460h]@65
  int v807; // [sp+42Ch] [bp-45Ch]@65
  __int64 v808; // [sp+430h] [bp-458h]@68
  void (*v809)(void); // [sp+438h] [bp-450h]@68
  int v810; // [sp+43Ch] [bp-44Ch]@68
  __int64 v811; // [sp+440h] [bp-448h]@71
  void (*v812)(void); // [sp+448h] [bp-440h]@71
  int v813; // [sp+44Ch] [bp-43Ch]@71
  __int64 v814; // [sp+450h] [bp-438h]@74
  void (*v815)(void); // [sp+458h] [bp-430h]@74
  int v816; // [sp+45Ch] [bp-42Ch]@74
  __int64 v817; // [sp+460h] [bp-428h]@77
  void (*v818)(void); // [sp+468h] [bp-420h]@77
  int v819; // [sp+46Ch] [bp-41Ch]@77
  __int64 v820; // [sp+470h] [bp-418h]@80
  void (*v821)(void); // [sp+478h] [bp-410h]@80
  int v822; // [sp+47Ch] [bp-40Ch]@80
  __int64 v823; // [sp+480h] [bp-408h]@83
  void (*v824)(void); // [sp+488h] [bp-400h]@83
  int v825; // [sp+48Ch] [bp-3FCh]@83
  __int64 v826; // [sp+490h] [bp-3F8h]@86
  void (*v827)(void); // [sp+498h] [bp-3F0h]@86
  int v828; // [sp+49Ch] [bp-3ECh]@86
  __int64 v829; // [sp+4A0h] [bp-3E8h]@89
  void (*v830)(void); // [sp+4A8h] [bp-3E0h]@89
  int v831; // [sp+4ACh] [bp-3DCh]@89
  __int64 v832; // [sp+4B0h] [bp-3D8h]@92
  void (*v833)(void); // [sp+4B8h] [bp-3D0h]@92
  int v834; // [sp+4BCh] [bp-3CCh]@92
  __int64 v835; // [sp+4C0h] [bp-3C8h]@95
  void (*v836)(void); // [sp+4C8h] [bp-3C0h]@95
  int v837; // [sp+4CCh] [bp-3BCh]@95
  __int64 v838; // [sp+4D0h] [bp-3B8h]@98
  void (*v839)(void); // [sp+4D8h] [bp-3B0h]@98
  int v840; // [sp+4DCh] [bp-3ACh]@98
  __int64 v841; // [sp+4E0h] [bp-3A8h]@101
  void (*v842)(void); // [sp+4E8h] [bp-3A0h]@101
  int v843; // [sp+4ECh] [bp-39Ch]@101
  __int64 v844; // [sp+4F0h] [bp-398h]@104
  void (*v845)(void); // [sp+4F8h] [bp-390h]@104
  int v846; // [sp+4FCh] [bp-38Ch]@104
  __int64 v847; // [sp+500h] [bp-388h]@107
  void (*v848)(void); // [sp+508h] [bp-380h]@107
  int v849; // [sp+50Ch] [bp-37Ch]@107
  __int64 v850; // [sp+510h] [bp-378h]@110
  void (*v851)(void); // [sp+518h] [bp-370h]@110
  int v852; // [sp+51Ch] [bp-36Ch]@110
  __int64 v853; // [sp+520h] [bp-368h]@113
  void (*v854)(void); // [sp+528h] [bp-360h]@113
  int v855; // [sp+52Ch] [bp-35Ch]@113
  __int64 v856; // [sp+530h] [bp-358h]@116
  void (*v857)(void); // [sp+538h] [bp-350h]@116
  int v858; // [sp+53Ch] [bp-34Ch]@116
  __int64 v859; // [sp+540h] [bp-348h]@119
  void (*v860)(void); // [sp+548h] [bp-340h]@119
  int v861; // [sp+54Ch] [bp-33Ch]@119
  __int64 v862; // [sp+550h] [bp-338h]@122
  void (*v863)(void); // [sp+558h] [bp-330h]@122
  int v864; // [sp+55Ch] [bp-32Ch]@122
  __int64 v865; // [sp+560h] [bp-328h]@125
  void (*v866)(void); // [sp+568h] [bp-320h]@125
  int v867; // [sp+56Ch] [bp-31Ch]@125
  __int64 v868; // [sp+570h] [bp-318h]@128
  void (*v869)(void); // [sp+578h] [bp-310h]@128
  int v870; // [sp+57Ch] [bp-30Ch]@128
  __int64 v871; // [sp+580h] [bp-308h]@131
  void (*v872)(void); // [sp+588h] [bp-300h]@131
  int v873; // [sp+58Ch] [bp-2FCh]@131
  __int64 v874; // [sp+590h] [bp-2F8h]@134
  void (*v875)(void); // [sp+598h] [bp-2F0h]@134
  int v876; // [sp+59Ch] [bp-2ECh]@134
  __int64 v877; // [sp+5A0h] [bp-2E8h]@137
  void (*v878)(void); // [sp+5A8h] [bp-2E0h]@137
  int v879; // [sp+5ACh] [bp-2DCh]@137
  __int64 v880; // [sp+5B0h] [bp-2D8h]@140
  void (*v881)(void); // [sp+5B8h] [bp-2D0h]@140
  int v882; // [sp+5BCh] [bp-2CCh]@140
  __int64 v883; // [sp+5C0h] [bp-2C8h]@143
  void (*v884)(void); // [sp+5C8h] [bp-2C0h]@143
  int v885; // [sp+5CCh] [bp-2BCh]@143
  __int64 v886; // [sp+5D0h] [bp-2B8h]@146
  void (*v887)(void); // [sp+5D8h] [bp-2B0h]@146
  int v888; // [sp+5DCh] [bp-2ACh]@146
  __int64 v889; // [sp+5E0h] [bp-2A8h]@149
  void (*v890)(void); // [sp+5E8h] [bp-2A0h]@149
  int v891; // [sp+5ECh] [bp-29Ch]@149
  __int64 v892; // [sp+5F0h] [bp-298h]@152
  void (*v893)(void); // [sp+5F8h] [bp-290h]@152
  int v894; // [sp+5FCh] [bp-28Ch]@152
  __int64 v895; // [sp+600h] [bp-288h]@155
  void (*v896)(void); // [sp+608h] [bp-280h]@155
  int v897; // [sp+60Ch] [bp-27Ch]@155
  __int64 v898; // [sp+610h] [bp-278h]@158
  void (*v899)(void); // [sp+618h] [bp-270h]@158
  int v900; // [sp+61Ch] [bp-26Ch]@158
  __int64 v901; // [sp+620h] [bp-268h]@161
  void (*v902)(void); // [sp+628h] [bp-260h]@161
  int v903; // [sp+62Ch] [bp-25Ch]@161
  __int64 v904; // [sp+630h] [bp-258h]@164
  void (*v905)(void); // [sp+638h] [bp-250h]@164
  int v906; // [sp+63Ch] [bp-24Ch]@164
  __int64 v907; // [sp+640h] [bp-248h]@167
  void (*v908)(void); // [sp+648h] [bp-240h]@167
  int v909; // [sp+64Ch] [bp-23Ch]@167
  __int64 v910; // [sp+650h] [bp-238h]@170
  void (*v911)(void); // [sp+658h] [bp-230h]@170
  int v912; // [sp+65Ch] [bp-22Ch]@170
  __int64 v913; // [sp+660h] [bp-228h]@173
  void (*v914)(void); // [sp+668h] [bp-220h]@173
  int v915; // [sp+66Ch] [bp-21Ch]@173
  __int64 v916; // [sp+670h] [bp-218h]@176
  void (*v917)(void); // [sp+678h] [bp-210h]@176
  int v918; // [sp+67Ch] [bp-20Ch]@176
  __int64 v919; // [sp+680h] [bp-208h]@179
  void (*v920)(void); // [sp+688h] [bp-200h]@179
  int v921; // [sp+68Ch] [bp-1FCh]@179
  __int64 v922; // [sp+690h] [bp-1F8h]@182
  void (*v923)(void); // [sp+698h] [bp-1F0h]@182
  int v924; // [sp+69Ch] [bp-1ECh]@182
  __int64 v925; // [sp+6A0h] [bp-1E8h]@185
  void (*v926)(void); // [sp+6A8h] [bp-1E0h]@185
  int v927; // [sp+6ACh] [bp-1DCh]@185
  __int64 v928; // [sp+6B0h] [bp-1D8h]@188
  void (*v929)(void); // [sp+6B8h] [bp-1D0h]@188
  int v930; // [sp+6BCh] [bp-1CCh]@188
  __int64 v931; // [sp+6C0h] [bp-1C8h]@191
  void (*v932)(void); // [sp+6C8h] [bp-1C0h]@191
  int v933; // [sp+6CCh] [bp-1BCh]@191
  __int64 v934; // [sp+6D0h] [bp-1B8h]@194
  void (*v935)(void); // [sp+6D8h] [bp-1B0h]@194
  int v936; // [sp+6DCh] [bp-1ACh]@194
  __int64 v937; // [sp+6E0h] [bp-1A8h]@197
  void (*v938)(void); // [sp+6E8h] [bp-1A0h]@197
  int v939; // [sp+6ECh] [bp-19Ch]@197
  __int64 v940; // [sp+6F0h] [bp-198h]@200
  void (*v941)(void); // [sp+6F8h] [bp-190h]@200
  int v942; // [sp+6FCh] [bp-18Ch]@200
  __int64 v943; // [sp+700h] [bp-188h]@203
  void (*v944)(void); // [sp+708h] [bp-180h]@203
  int v945; // [sp+70Ch] [bp-17Ch]@203
  __int64 v946; // [sp+710h] [bp-178h]@206
  void (*v947)(void); // [sp+718h] [bp-170h]@206
  int v948; // [sp+71Ch] [bp-16Ch]@206
  __int64 v949; // [sp+720h] [bp-168h]@209
  void (*v950)(void); // [sp+728h] [bp-160h]@209
  int v951; // [sp+72Ch] [bp-15Ch]@209
  __int64 v952; // [sp+730h] [bp-158h]@212
  void (*v953)(void); // [sp+738h] [bp-150h]@212
  int v954; // [sp+73Ch] [bp-14Ch]@212
  __int64 v955; // [sp+740h] [bp-148h]@215
  void (*v956)(void); // [sp+748h] [bp-140h]@215
  int v957; // [sp+74Ch] [bp-13Ch]@215
  __int64 v958; // [sp+750h] [bp-138h]@218
  void (*v959)(void); // [sp+758h] [bp-130h]@218
  int v960; // [sp+75Ch] [bp-12Ch]@218
  __int64 v961; // [sp+760h] [bp-128h]@221
  void (*v962)(void); // [sp+768h] [bp-120h]@221
  int v963; // [sp+76Ch] [bp-11Ch]@221
  __int64 v964; // [sp+770h] [bp-118h]@224
  void (*v965)(void); // [sp+778h] [bp-110h]@224
  int v966; // [sp+77Ch] [bp-10Ch]@224
  __int64 v967; // [sp+780h] [bp-108h]@227
  void (*v968)(void); // [sp+788h] [bp-100h]@227
  int v969; // [sp+78Ch] [bp-FCh]@227
  __int64 v970; // [sp+790h] [bp-F8h]@230
  void (*v971)(void); // [sp+798h] [bp-F0h]@230
  int v972; // [sp+79Ch] [bp-ECh]@230
  __int64 v973; // [sp+7A0h] [bp-E8h]@233
  void (*v974)(void); // [sp+7A8h] [bp-E0h]@233
  int v975; // [sp+7ACh] [bp-DCh]@233
  __int64 v976; // [sp+7B0h] [bp-D8h]@236
  void (*v977)(void); // [sp+7B8h] [bp-D0h]@236
  int v978; // [sp+7BCh] [bp-CCh]@236
  __int64 v979; // [sp+7C0h] [bp-C8h]@239
  void (*v980)(void); // [sp+7C8h] [bp-C0h]@239
  int v981; // [sp+7CCh] [bp-BCh]@239
  __int64 v982; // [sp+7D0h] [bp-B8h]@242
  void (*v983)(void); // [sp+7D8h] [bp-B0h]@242
  int v984; // [sp+7DCh] [bp-ACh]@242
  __int64 v985; // [sp+7E0h] [bp-A8h]@245
  void (*v986)(void); // [sp+7E8h] [bp-A0h]@245
  int v987; // [sp+7ECh] [bp-9Ch]@245
  __int64 v988; // [sp+7F0h] [bp-98h]@248
  void (*v989)(void); // [sp+7F8h] [bp-90h]@248
  int v990; // [sp+7FCh] [bp-8Ch]@248
  __int64 v991; // [sp+800h] [bp-88h]@251
  void (*v992)(void); // [sp+808h] [bp-80h]@251
  int v993; // [sp+80Ch] [bp-7Ch]@251
  __int64 v994; // [sp+810h] [bp-78h]@254
  void (*v995)(void); // [sp+818h] [bp-70h]@254
  int v996; // [sp+81Ch] [bp-6Ch]@254
  __int64 v997; // [sp+820h] [bp-68h]@257
  void (*v998)(void); // [sp+828h] [bp-60h]@257
  int v999; // [sp+82Ch] [bp-5Ch]@257
  __int64 v1000; // [sp+830h] [bp-58h]@260
  void (*v1001)(void); // [sp+838h] [bp-50h]@260
  int v1002; // [sp+83Ch] [bp-4Ch]@260
  __int64 v1003; // [sp+840h] [bp-48h]@263
  void (*v1004)(void); // [sp+848h] [bp-40h]@263
  int v1005; // [sp+84Ch] [bp-3Ch]@263
  __int64 v1006; // [sp+850h] [bp-38h]@266
  void (*v1007)(void); // [sp+858h] [bp-30h]@266
  int v1008; // [sp+85Ch] [bp-2Ch]@266
  __int64 v1009; // [sp+860h] [bp-28h]@269
  void (*v1010)(void); // [sp+868h] [bp-20h]@269
  int v1011; // [sp+86Ch] [bp-1Ch]@269

  result = unk_28274AC;
  if ( !unk_28274AC )
  {
    sub_21E94B4((void **)&v722, "minecraft:behavior.avoid_mob_type");
    v2 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int)&GoalDefinition::mGoalMap,
           (int **)&v722);
    v3 = j_operator new(1u);
    v723 = v3;
    v4 = v724;
    *(_QWORD *)&v723 = *(_QWORD *)v2;
    *(_DWORD *)v2 = v3;
    *(_DWORD *)(v2 + 4) = v4;
    v725 = *(void (**)(void))(v2 + 8);
    v5 = v725;
    *(_DWORD *)(v2 + 8) = sub_1A29108;
    v726 = *(_DWORD *)(v2 + 12);
    *(_DWORD *)(v2 + 12) = sub_1A290A4;
    if ( v5 )
      v5();
    v6 = (void *)(v722 - 12);
    if ( (int *)(v722 - 12) != &dword_28898C0 )
    {
      v453 = (unsigned int *)(v722 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v454 = __ldrex(v453);
        while ( __strex(v454 - 1, v453) );
      }
      else
        v454 = (*v453)--;
      if ( v454 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    }
    sub_21E94B4((void **)&v721, "minecraft:behavior.beg");
    v7 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)&v721);
    v8 = j_operator new(1u);
    v727 = v8;
    v9 = v728;
    *(_QWORD *)&v727 = *(_QWORD *)v7;
    *(_DWORD *)v7 = v8;
    *(_DWORD *)(v7 + 4) = v9;
    v729 = *(void (**)(void))(v7 + 8);
    v10 = v729;
    *(_DWORD *)(v7 + 8) = sub_1A2919E;
    v730 = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v7 + 12) = sub_1A29136;
    if ( v10 )
      v10();
    v11 = (void *)(v721 - 12);
    if ( (int *)(v721 - 12) != &dword_28898C0 )
      v455 = (unsigned int *)(v721 - 4);
          v456 = __ldrex(v455);
        while ( __strex(v456 - 1, v455) );
        v456 = (*v455)--;
      if ( v456 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    sub_21E94B4((void **)&v720, "minecraft:behavior.break_door");
    v12 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int)&GoalDefinition::mGoalMap,
            (int **)&v720);
    v13 = j_operator new(1u);
    v731 = v13;
    v14 = v732;
    *(_QWORD *)&v731 = *(_QWORD *)v12;
    *(_DWORD *)v12 = v13;
    *(_DWORD *)(v12 + 4) = v14;
    v733 = *(void (**)(void))(v12 + 8);
    v15 = v733;
    *(_DWORD *)(v12 + 8) = sub_1A29212;
    v734 = *(_DWORD *)(v12 + 12);
    *(_DWORD *)(v12 + 12) = sub_1A291CC;
    if ( v15 )
      v15();
    v16 = (void *)(v720 - 12);
    if ( (int *)(v720 - 12) != &dword_28898C0 )
      v457 = (unsigned int *)(v720 - 4);
          v458 = __ldrex(v457);
        while ( __strex(v458 - 1, v457) );
        v458 = (*v457)--;
      if ( v458 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    sub_21E94B4((void **)&v719, "minecraft:behavior.breed");
    v17 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v719);
    v18 = j_operator new(1u);
    v735 = v18;
    v19 = v736;
    *(_QWORD *)&v735 = *(_QWORD *)v17;
    *(_DWORD *)v17 = v18;
    *(_DWORD *)(v17 + 4) = v19;
    v737 = *(void (**)(void))(v17 + 8);
    v20 = v737;
    *(_DWORD *)(v17 + 8) = sub_1A2928A;
    v738 = *(_DWORD *)(v17 + 12);
    *(_DWORD *)(v17 + 12) = sub_1A29240;
    if ( v20 )
      v20();
    v21 = (void *)(v719 - 12);
    if ( (int *)(v719 - 12) != &dword_28898C0 )
      v459 = (unsigned int *)(v719 - 4);
          v460 = __ldrex(v459);
        while ( __strex(v460 - 1, v459) );
        v460 = (*v459)--;
      if ( v460 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    sub_21E94B4((void **)&v718, "minecraft:behavior.defend_village_target");
    v22 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v718);
    v23 = j_operator new(1u);
    v739 = v23;
    v24 = v740;
    *(_QWORD *)&v739 = *(_QWORD *)v22;
    *(_DWORD *)v22 = v23;
    *(_DWORD *)(v22 + 4) = v24;
    v741 = *(void (**)(void))(v22 + 8);
    v25 = v741;
    *(_DWORD *)(v22 + 8) = sub_1A29302;
    v742 = *(_DWORD *)(v22 + 12);
    *(_DWORD *)(v22 + 12) = sub_1A292B8;
    if ( v25 )
      v25();
    v26 = (void *)(v718 - 12);
    if ( (int *)(v718 - 12) != &dword_28898C0 )
      v461 = (unsigned int *)(v718 - 4);
          v462 = __ldrex(v461);
        while ( __strex(v462 - 1, v461) );
        v462 = (*v461)--;
      if ( v462 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    sub_21E94B4((void **)&v717, "minecraft:behavior.door_interact");
    v27 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v717);
    v28 = j_operator new(1u);
    v743 = v28;
    v29 = v744;
    *(_QWORD *)&v743 = *(_QWORD *)v27;
    *(_DWORD *)v27 = v28;
    *(_DWORD *)(v27 + 4) = v29;
    v745 = *(void (**)(void))(v27 + 8);
    v30 = v745;
    *(_DWORD *)(v27 + 8) = sub_1A29376;
    v746 = *(_DWORD *)(v27 + 12);
    *(_DWORD *)(v27 + 12) = sub_1A29330;
    if ( v30 )
      v30();
    v31 = (void *)(v717 - 12);
    if ( (int *)(v717 - 12) != &dword_28898C0 )
      v463 = (unsigned int *)(v717 - 4);
          v464 = __ldrex(v463);
        while ( __strex(v464 - 1, v463) );
        v464 = (*v463)--;
      if ( v464 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
    sub_21E94B4((void **)&v716, "minecraft:behavior.eat_block");
    v32 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v716);
    v33 = j_operator new(1u);
    v747 = v33;
    v34 = v748;
    *(_QWORD *)&v747 = *(_QWORD *)v32;
    *(_DWORD *)v32 = v33;
    *(_DWORD *)(v32 + 4) = v34;
    v749 = *(void (**)(void))(v32 + 8);
    v35 = v749;
    *(_DWORD *)(v32 + 8) = sub_1A293EE;
    v750 = *(_DWORD *)(v32 + 12);
    *(_DWORD *)(v32 + 12) = sub_1A293A4;
    if ( v35 )
      v35();
    v36 = (void *)(v716 - 12);
    if ( (int *)(v716 - 12) != &dword_28898C0 )
      v465 = (unsigned int *)(v716 - 4);
          v466 = __ldrex(v465);
        while ( __strex(v466 - 1, v465) );
        v466 = (*v465)--;
      if ( v466 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
    sub_21E94B4((void **)&v715, "minecraft:behavior.flee_sun");
    v37 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v715);
    v38 = j_operator new(1u);
    v751 = v38;
    v39 = v752;
    *(_QWORD *)&v751 = *(_QWORD *)v37;
    *(_DWORD *)v37 = v38;
    *(_DWORD *)(v37 + 4) = v39;
    v753 = *(void (**)(void))(v37 + 8);
    v40 = v753;
    *(_DWORD *)(v37 + 8) = sub_1A29466;
    v754 = *(_DWORD *)(v37 + 12);
    *(_DWORD *)(v37 + 12) = sub_1A2941C;
    if ( v40 )
      v40();
    v41 = (void *)(v715 - 12);
    if ( (int *)(v715 - 12) != &dword_28898C0 )
      v467 = (unsigned int *)(v715 - 4);
          v468 = __ldrex(v467);
        while ( __strex(v468 - 1, v467) );
        v468 = (*v467)--;
      if ( v468 <= 0 )
        j_j_j_j__ZdlPv_9(v41);
    sub_21E94B4((void **)&v714, "minecraft:behavior.float");
    v42 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v714);
    v43 = j_operator new(1u);
    v755 = v43;
    v44 = v756;
    *(_QWORD *)&v755 = *(_QWORD *)v42;
    *(_DWORD *)v42 = v43;
    *(_DWORD *)(v42 + 4) = v44;
    v757 = *(void (**)(void))(v42 + 8);
    v45 = v757;
    *(_DWORD *)(v42 + 8) = sub_1A294DA;
    v758 = *(_DWORD *)(v42 + 12);
    *(_DWORD *)(v42 + 12) = sub_1A29494;
    if ( v45 )
      v45();
    v46 = (void *)(v714 - 12);
    if ( (int *)(v714 - 12) != &dword_28898C0 )
      v469 = (unsigned int *)(v714 - 4);
          v470 = __ldrex(v469);
        while ( __strex(v470 - 1, v469) );
        v470 = (*v469)--;
      if ( v470 <= 0 )
        j_j_j_j__ZdlPv_9(v46);
    sub_21E94B4((void **)&v713, "minecraft:behavior.follow_owner");
    v47 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v713);
    v48 = j_operator new(1u);
    v759 = v48;
    v49 = v760;
    *(_QWORD *)&v759 = *(_QWORD *)v47;
    *(_DWORD *)v47 = v48;
    *(_DWORD *)(v47 + 4) = v49;
    v761 = *(void (**)(void))(v47 + 8);
    v50 = v761;
    *(_DWORD *)(v47 + 8) = sub_1A2955C;
    v762 = *(_DWORD *)(v47 + 12);
    *(_DWORD *)(v47 + 12) = sub_1A29508;
    if ( v50 )
      v50();
    v51 = (void *)(v713 - 12);
    if ( (int *)(v713 - 12) != &dword_28898C0 )
      v471 = (unsigned int *)(v713 - 4);
          v472 = __ldrex(v471);
        while ( __strex(v472 - 1, v471) );
        v472 = (*v471)--;
      if ( v472 <= 0 )
        j_j_j_j__ZdlPv_9(v51);
    sub_21E94B4((void **)&v712, "minecraft:behavior.follow_parent");
    v52 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v712);
    v53 = j_operator new(1u);
    v763 = v53;
    v54 = v764;
    *(_QWORD *)&v763 = *(_QWORD *)v52;
    *(_DWORD *)v52 = v53;
    *(_DWORD *)(v52 + 4) = v54;
    v765 = *(void (**)(void))(v52 + 8);
    v55 = v765;
    *(_DWORD *)(v52 + 8) = sub_1A295D4;
    v766 = *(_DWORD *)(v52 + 12);
    *(_DWORD *)(v52 + 12) = sub_1A2958A;
    if ( v55 )
      v55();
    v56 = (void *)(v712 - 12);
    if ( (int *)(v712 - 12) != &dword_28898C0 )
      v473 = (unsigned int *)(v712 - 4);
          v474 = __ldrex(v473);
        while ( __strex(v474 - 1, v473) );
        v474 = (*v473)--;
      if ( v474 <= 0 )
        j_j_j_j__ZdlPv_9(v56);
    sub_21E94B4((void **)&v711, "minecraft:behavior.follow_caravan");
    v57 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v711);
    v58 = j_operator new(1u);
    v767 = v58;
    v59 = v768;
    *(_QWORD *)&v767 = *(_QWORD *)v57;
    *(_DWORD *)v57 = v58;
    *(_DWORD *)(v57 + 4) = v59;
    v769 = *(void (**)(void))(v57 + 8);
    v60 = v769;
    *(_DWORD *)(v57 + 8) = sub_1A29658;
    v770 = *(_DWORD *)(v57 + 12);
    *(_DWORD *)(v57 + 12) = sub_1A29602;
    if ( v60 )
      v60();
    v61 = (void *)(v711 - 12);
    if ( (int *)(v711 - 12) != &dword_28898C0 )
      v475 = (unsigned int *)(v711 - 4);
          v476 = __ldrex(v475);
        while ( __strex(v476 - 1, v475) );
        v476 = (*v475)--;
      if ( v476 <= 0 )
        j_j_j_j__ZdlPv_9(v61);
    sub_21E94B4((void **)&v710, "minecraft:behavior.follow_mob");
    v62 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v710);
    v63 = j_operator new(1u);
    v771 = v63;
    v64 = v772;
    *(_QWORD *)&v771 = *(_QWORD *)v62;
    *(_DWORD *)v62 = v63;
    *(_DWORD *)(v62 + 4) = v64;
    v773 = *(void (**)(void))(v62 + 8);
    v65 = v773;
    *(_DWORD *)(v62 + 8) = sub_1A296D6;
    v774 = *(_DWORD *)(v62 + 12);
    *(_DWORD *)(v62 + 12) = sub_1A29686;
    if ( v65 )
      v65();
    v66 = (void *)(v710 - 12);
    if ( (int *)(v710 - 12) != &dword_28898C0 )
      v477 = (unsigned int *)(v710 - 4);
          v478 = __ldrex(v477);
        while ( __strex(v478 - 1, v477) );
        v478 = (*v477)--;
      if ( v478 <= 0 )
        j_j_j_j__ZdlPv_9(v66);
    sub_21E94B4((void **)&v709, "minecraft:behavior.nearest_attackable_target");
    v67 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v709);
    v68 = j_operator new(1u);
    v775 = v68;
    v69 = v776;
    *(_QWORD *)&v775 = *(_QWORD *)v67;
    *(_DWORD *)v67 = v68;
    *(_DWORD *)(v67 + 4) = v69;
    v777 = *(void (**)(void))(v67 + 8);
    v70 = v777;
    *(_DWORD *)(v67 + 8) = sub_1A29786;
    v778 = *(_DWORD *)(v67 + 12);
    *(_DWORD *)(v67 + 12) = sub_1A29704;
    if ( v70 )
      v70();
    v71 = (void *)(v709 - 12);
    if ( (int *)(v709 - 12) != &dword_28898C0 )
      v479 = (unsigned int *)(v709 - 4);
          v480 = __ldrex(v479);
        while ( __strex(v480 - 1, v479) );
        v480 = (*v479)--;
      if ( v480 <= 0 )
        j_j_j_j__ZdlPv_9(v71);
    sub_21E94B4((void **)&v708, "minecraft:behavior.hurt_by_target");
    v72 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v708);
    v73 = j_operator new(1u);
    v779 = v73;
    v74 = v780;
    *(_QWORD *)&v779 = *(_QWORD *)v72;
    *(_DWORD *)v72 = v73;
    *(_DWORD *)(v72 + 4) = v74;
    v781 = *(void (**)(void))(v72 + 8);
    v75 = v781;
    *(_DWORD *)(v72 + 8) = sub_1A2981A;
    v782 = *(_DWORD *)(v72 + 12);
    *(_DWORD *)(v72 + 12) = sub_1A297B4;
    if ( v75 )
      v75();
    v76 = (void *)(v708 - 12);
    if ( (int *)(v708 - 12) != &dword_28898C0 )
      v481 = (unsigned int *)(v708 - 4);
          v482 = __ldrex(v481);
        while ( __strex(v482 - 1, v481) );
        v482 = (*v481)--;
      if ( v482 <= 0 )
        j_j_j_j__ZdlPv_9(v76);
    sub_21E94B4((void **)&v707, "minecraft:behavior.owner_hurt_by_target");
    v77 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v707);
    v78 = j_operator new(1u);
    v783 = v78;
    v79 = v784;
    *(_QWORD *)&v783 = *(_QWORD *)v77;
    *(_DWORD *)v77 = v78;
    *(_DWORD *)(v77 + 4) = v79;
    v785 = *(void (**)(void))(v77 + 8);
    v80 = v785;
    *(_DWORD *)(v77 + 8) = sub_1A29892;
    v786 = *(_DWORD *)(v77 + 12);
    *(_DWORD *)(v77 + 12) = sub_1A29848;
    if ( v80 )
      v80();
    v81 = (void *)(v707 - 12);
    if ( (int *)(v707 - 12) != &dword_28898C0 )
      v483 = (unsigned int *)(v707 - 4);
          v484 = __ldrex(v483);
        while ( __strex(v484 - 1, v483) );
        v484 = (*v483)--;
      if ( v484 <= 0 )
        j_j_j_j__ZdlPv_9(v81);
    sub_21E94B4((void **)&v706, "minecraft:behavior.owner_hurt_target");
    v82 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v706);
    v83 = j_operator new(1u);
    v787 = v83;
    v84 = v788;
    *(_QWORD *)&v787 = *(_QWORD *)v82;
    *(_DWORD *)v82 = v83;
    *(_DWORD *)(v82 + 4) = v84;
    v789 = *(void (**)(void))(v82 + 8);
    v85 = v789;
    *(_DWORD *)(v82 + 8) = sub_1A2990A;
    v790 = *(_DWORD *)(v82 + 12);
    *(_DWORD *)(v82 + 12) = sub_1A298C0;
    if ( v85 )
      v85();
    v86 = (void *)(v706 - 12);
    if ( (int *)(v706 - 12) != &dword_28898C0 )
      v485 = (unsigned int *)(v706 - 4);
          v486 = __ldrex(v485);
        while ( __strex(v486 - 1, v485) );
        v486 = (*v485)--;
      if ( v486 <= 0 )
        j_j_j_j__ZdlPv_9(v86);
    sub_21E94B4((void **)&v705, "minecraft:behavior.look_at_player");
    v87 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v705);
    v88 = j_operator new(1u);
    v791 = v88;
    v89 = v792;
    *(_QWORD *)&v791 = *(_QWORD *)v87;
    *(_DWORD *)v87 = v88;
    *(_DWORD *)(v87 + 4) = v89;
    v793 = *(void (**)(void))(v87 + 8);
    v90 = v793;
    *(_DWORD *)(v87 + 8) = sub_1A29DB0;
    v794 = *(_DWORD *)(v87 + 12);
    *(_DWORD *)(v87 + 12) = sub_1A29938;
    if ( v90 )
      v90();
    v91 = (void *)(v705 - 12);
    if ( (int *)(v705 - 12) != &dword_28898C0 )
      v487 = (unsigned int *)(v705 - 4);
          v488 = __ldrex(v487);
        while ( __strex(v488 - 1, v487) );
        v488 = (*v487)--;
      if ( v488 <= 0 )
        j_j_j_j__ZdlPv_9(v91);
    sub_21E94B4((void **)&v704, "minecraft:behavior.look_at_target");
    v92 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v704);
    v93 = j_operator new(1u);
    v795 = v93;
    v94 = v796;
    *(_QWORD *)&v795 = *(_QWORD *)v92;
    *(_DWORD *)v92 = v93;
    *(_DWORD *)(v92 + 4) = v94;
    v797 = *(void (**)(void))(v92 + 8);
    v95 = v797;
    *(_DWORD *)(v92 + 8) = sub_1A2A238;
    v798 = *(_DWORD *)(v92 + 12);
    *(_DWORD *)(v92 + 12) = sub_1A29DE0;
    if ( v95 )
      v95();
    v96 = (void *)(v704 - 12);
    if ( (int *)(v704 - 12) != &dword_28898C0 )
      v489 = (unsigned int *)(v704 - 4);
          v490 = __ldrex(v489);
        while ( __strex(v490 - 1, v489) );
        v490 = (*v489)--;
      if ( v490 <= 0 )
        j_j_j_j__ZdlPv_9(v96);
    sub_21E94B4((void **)&v703, "minecraft:behavior.look_at_entity");
    v97 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v703);
    v98 = j_operator new(1u);
    LODWORD(v799) = v98;
    v99 = HIDWORD(v799);
    v799 = *(_QWORD *)v97;
    *(_DWORD *)v97 = v98;
    *(_DWORD *)(v97 + 4) = v99;
    v800 = *(void (**)(void))(v97 + 8);
    v100 = v800;
    *(_DWORD *)(v97 + 8) = sub_1A2A2F0;
    v801 = *(_DWORD *)(v97 + 12);
    *(_DWORD *)(v97 + 12) = sub_1A2A266;
    if ( v100 )
      v100();
    v101 = (void *)(v703 - 12);
    if ( (int *)(v703 - 12) != &dword_28898C0 )
      v491 = (unsigned int *)(v703 - 4);
          v492 = __ldrex(v491);
        while ( __strex(v492 - 1, v491) );
        v492 = (*v491)--;
      if ( v492 <= 0 )
        j_j_j_j__ZdlPv_9(v101);
    sub_21E94B4((void **)&v702, "minecraft:behavior.mount_pathing");
    v102 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int)&GoalDefinition::mGoalMap,
             (int **)&v702);
    v103 = j_operator new(1u);
    LODWORD(v802) = v103;
    v104 = HIDWORD(v802);
    v802 = *(_QWORD *)v102;
    *(_DWORD *)v102 = v103;
    *(_DWORD *)(v102 + 4) = v104;
    v803 = *(void (**)(void))(v102 + 8);
    v105 = v803;
    *(_DWORD *)(v102 + 8) = sub_1A2A37C;
    v804 = *(_DWORD *)(v102 + 12);
    *(_DWORD *)(v102 + 12) = sub_1A2A31E;
    if ( v105 )
      v105();
    v106 = (void *)(v702 - 12);
    if ( (int *)(v702 - 12) != &dword_28898C0 )
      v493 = (unsigned int *)(v702 - 4);
          v494 = __ldrex(v493);
        while ( __strex(v494 - 1, v493) );
        v494 = (*v493)--;
      if ( v494 <= 0 )
        j_j_j_j__ZdlPv_9(v106);
    sub_21E94B4((void **)&v701, "minecraft:behavior.move_indoors");
    v107 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v701);
    v108 = j_operator new(1u);
    LODWORD(v805) = v108;
    v109 = HIDWORD(v805);
    v805 = *(_QWORD *)v107;
    *(_DWORD *)v107 = v108;
    *(_DWORD *)(v107 + 4) = v109;
    v806 = *(void (**)(void))(v107 + 8);
    v110 = v806;
    *(_DWORD *)(v107 + 8) = sub_1A2A406;
    v807 = *(_DWORD *)(v107 + 12);
    *(_DWORD *)(v107 + 12) = sub_1A2A3AA;
    if ( v110 )
      v110();
    v111 = (void *)(v701 - 12);
    if ( (int *)(v701 - 12) != &dword_28898C0 )
      v495 = (unsigned int *)(v701 - 4);
          v496 = __ldrex(v495);
        while ( __strex(v496 - 1, v495) );
        v496 = (*v495)--;
      if ( v496 <= 0 )
        j_j_j_j__ZdlPv_9(v111);
    sub_21E94B4((void **)&v700, "minecraft:behavior.move_through_village");
    v112 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v700);
    v113 = j_operator new(1u);
    LODWORD(v808) = v113;
    v114 = HIDWORD(v808);
    v808 = *(_QWORD *)v112;
    *(_DWORD *)v112 = v113;
    *(_DWORD *)(v112 + 4) = v114;
    v809 = *(void (**)(void))(v112 + 8);
    v115 = v809;
    *(_DWORD *)(v112 + 8) = sub_1A2A48C;
    v810 = *(_DWORD *)(v112 + 12);
    *(_DWORD *)(v112 + 12) = sub_1A2A434;
    if ( v115 )
      v115();
    v116 = (void *)(v700 - 12);
    if ( (int *)(v700 - 12) != &dword_28898C0 )
      v497 = (unsigned int *)(v700 - 4);
          v498 = __ldrex(v497);
        while ( __strex(v498 - 1, v497) );
        v498 = (*v497)--;
      if ( v498 <= 0 )
        j_j_j_j__ZdlPv_9(v116);
    sub_21E94B4((void **)&v699, "minecraft:behavior.move_towards_restriction");
    v117 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v699);
    v118 = j_operator new(1u);
    LODWORD(v811) = v118;
    v119 = HIDWORD(v811);
    v811 = *(_QWORD *)v117;
    *(_DWORD *)v117 = v118;
    *(_DWORD *)(v117 + 4) = v119;
    v812 = *(void (**)(void))(v117 + 8);
    v120 = v812;
    *(_DWORD *)(v117 + 8) = sub_1A2A504;
    v813 = *(_DWORD *)(v117 + 12);
    *(_DWORD *)(v117 + 12) = sub_1A2A4BA;
    if ( v120 )
      v120();
    v121 = (void *)(v699 - 12);
    if ( (int *)(v699 - 12) != &dword_28898C0 )
      v499 = (unsigned int *)(v699 - 4);
          v500 = __ldrex(v499);
        while ( __strex(v500 - 1, v499) );
        v500 = (*v499)--;
      if ( v500 <= 0 )
        j_j_j_j__ZdlPv_9(v121);
    sub_21E94B4((void **)&v698, "minecraft:behavior.move_towards_target");
    v122 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v698);
    v123 = j_operator new(1u);
    LODWORD(v814) = v123;
    v124 = HIDWORD(v814);
    v814 = *(_QWORD *)v122;
    *(_DWORD *)v122 = v123;
    *(_DWORD *)(v122 + 4) = v124;
    v815 = *(void (**)(void))(v122 + 8);
    v125 = v815;
    *(_DWORD *)(v122 + 8) = sub_1A2A580;
    v816 = *(_DWORD *)(v122 + 12);
    *(_DWORD *)(v122 + 12) = sub_1A2A532;
    if ( v125 )
      v125();
    v126 = (void *)(v698 - 12);
    if ( (int *)(v698 - 12) != &dword_28898C0 )
      v501 = (unsigned int *)(v698 - 4);
          v502 = __ldrex(v501);
        while ( __strex(v502 - 1, v501) );
        v502 = (*v501)--;
      if ( v502 <= 0 )
        j_j_j_j__ZdlPv_9(v126);
    sub_21E94B4((void **)&v697, "minecraft:behavior.ocelotattack");
    v127 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v697);
    v128 = j_operator new(1u);
    LODWORD(v817) = v128;
    v129 = HIDWORD(v817);
    v817 = *(_QWORD *)v127;
    *(_DWORD *)v127 = v128;
    *(_DWORD *)(v127 + 4) = v129;
    v818 = *(void (**)(void))(v127 + 8);
    v130 = v818;
    *(_DWORD *)(v127 + 8) = sub_1A2A600;
    v819 = *(_DWORD *)(v127 + 12);
    *(_DWORD *)(v127 + 12) = sub_1A2A5AE;
    if ( v130 )
      v130();
    v131 = (void *)(v697 - 12);
    if ( (int *)(v697 - 12) != &dword_28898C0 )
      v503 = (unsigned int *)(v697 - 4);
          v504 = __ldrex(v503);
        while ( __strex(v504 - 1, v503) );
        v504 = (*v503)--;
      if ( v504 <= 0 )
        j_j_j_j__ZdlPv_9(v131);
    sub_21E94B4((void **)&v696, "minecraft:behavior.ocelot_sit_on_block");
    v132 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v696);
    v133 = j_operator new(1u);
    LODWORD(v820) = v133;
    v134 = HIDWORD(v820);
    v820 = *(_QWORD *)v132;
    *(_DWORD *)v132 = v133;
    *(_DWORD *)(v132 + 4) = v134;
    v821 = *(void (**)(void))(v132 + 8);
    v135 = v821;
    *(_DWORD *)(v132 + 8) = sub_1A2A678;
    v822 = *(_DWORD *)(v132 + 12);
    *(_DWORD *)(v132 + 12) = sub_1A2A62E;
    if ( v135 )
      v135();
    v136 = (void *)(v696 - 12);
    if ( (int *)(v696 - 12) != &dword_28898C0 )
      v505 = (unsigned int *)(v696 - 4);
          v506 = __ldrex(v505);
        while ( __strex(v506 - 1, v505) );
        v506 = (*v505)--;
      if ( v506 <= 0 )
        j_j_j_j__ZdlPv_9(v136);
    sub_21E94B4((void **)&v695, "minecraft:behavior.offer_flower");
    v137 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v695);
    v138 = j_operator new(1u);
    LODWORD(v823) = v138;
    v139 = HIDWORD(v823);
    v823 = *(_QWORD *)v137;
    *(_DWORD *)v137 = v138;
    *(_DWORD *)(v137 + 4) = v139;
    v824 = *(void (**)(void))(v137 + 8);
    v140 = v824;
    *(_DWORD *)(v137 + 8) = sub_1A2A6EC;
    v825 = *(_DWORD *)(v137 + 12);
    *(_DWORD *)(v137 + 12) = sub_1A2A6A6;
    if ( v140 )
      v140();
    v141 = (void *)(v695 - 12);
    if ( (int *)(v695 - 12) != &dword_28898C0 )
      v507 = (unsigned int *)(v695 - 4);
          v508 = __ldrex(v507);
        while ( __strex(v508 - 1, v507) );
        v508 = (*v507)--;
      if ( v508 <= 0 )
        j_j_j_j__ZdlPv_9(v141);
    sub_21E94B4((void **)&v694, "minecraft:behavior.open_door");
    v142 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v694);
    v143 = j_operator new(1u);
    LODWORD(v826) = v143;
    v144 = HIDWORD(v826);
    v826 = *(_QWORD *)v142;
    *(_DWORD *)v142 = v143;
    *(_DWORD *)(v142 + 4) = v144;
    v827 = *(void (**)(void))(v142 + 8);
    v145 = v827;
    *(_DWORD *)(v142 + 8) = sub_1A2A76E;
    v828 = *(_DWORD *)(v142 + 12);
    *(_DWORD *)(v142 + 12) = sub_1A2A71A;
    if ( v145 )
      v145();
    v146 = (void *)(v694 - 12);
    if ( (int *)(v694 - 12) != &dword_28898C0 )
      v509 = (unsigned int *)(v694 - 4);
          v510 = __ldrex(v509);
        while ( __strex(v510 - 1, v509) );
        v510 = (*v509)--;
      if ( v510 <= 0 )
        j_j_j_j__ZdlPv_9(v146);
    sub_21E94B4((void **)&v693, "minecraft:behavior.panic");
    v147 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v693);
    v148 = j_operator new(1u);
    LODWORD(v829) = v148;
    v149 = HIDWORD(v829);
    v829 = *(_QWORD *)v147;
    *(_DWORD *)v147 = v148;
    *(_DWORD *)(v147 + 4) = v149;
    v830 = *(void (**)(void))(v147 + 8);
    v150 = v830;
    *(_DWORD *)(v147 + 8) = sub_1A2A7F0;
    v831 = *(_DWORD *)(v147 + 12);
    *(_DWORD *)(v147 + 12) = sub_1A2A79C;
    if ( v150 )
      v150();
    v151 = (void *)(v693 - 12);
    if ( (int *)(v693 - 12) != &dword_28898C0 )
      v511 = (unsigned int *)(v693 - 4);
          v512 = __ldrex(v511);
        while ( __strex(v512 - 1, v511) );
        v512 = (*v511)--;
      if ( v512 <= 0 )
        j_j_j_j__ZdlPv_9(v151);
    sub_21E94B4((void **)&v692, "minecraft:behavior.rabbit_panic");
    v152 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v692);
    v153 = j_operator new(1u);
    LODWORD(v832) = v153;
    v154 = HIDWORD(v832);
    v832 = *(_QWORD *)v152;
    *(_DWORD *)v152 = v153;
    *(_DWORD *)(v152 + 4) = v154;
    v833 = *(void (**)(void))(v152 + 8);
    v155 = v833;
    *(_DWORD *)(v152 + 8) = sub_1A2A90C;
    v834 = *(_DWORD *)(v152 + 12);
    *(_DWORD *)(v152 + 12) = sub_1A2A820;
    if ( v155 )
      v155();
    v156 = (void *)(v692 - 12);
    if ( (int *)(v692 - 12) != &dword_28898C0 )
      v513 = (unsigned int *)(v692 - 4);
          v514 = __ldrex(v513);
        while ( __strex(v514 - 1, v513) );
        v514 = (*v513)--;
      if ( v514 <= 0 )
        j_j_j_j__ZdlPv_9(v156);
    sub_21E94B4((void **)&v691, "minecraft:behavior.run_around_like_crazy");
    v157 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v691);
    v158 = j_operator new(1u);
    LODWORD(v835) = v158;
    v159 = HIDWORD(v835);
    v835 = *(_QWORD *)v157;
    *(_DWORD *)v157 = v158;
    *(_DWORD *)(v157 + 4) = v159;
    v836 = *(void (**)(void))(v157 + 8);
    v160 = v836;
    *(_DWORD *)(v157 + 8) = sub_1A2A984;
    v837 = *(_DWORD *)(v157 + 12);
    *(_DWORD *)(v157 + 12) = sub_1A2A93A;
    if ( v160 )
      v160();
    v161 = (void *)(v691 - 12);
    if ( (int *)(v691 - 12) != &dword_28898C0 )
      v515 = (unsigned int *)(v691 - 4);
          v516 = __ldrex(v515);
        while ( __strex(v516 - 1, v515) );
        v516 = (*v515)--;
      if ( v516 <= 0 )
        j_j_j_j__ZdlPv_9(v161);
    sub_21E94B4((void **)&v690, "minecraft:behavior.restrict_sun");
    v162 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v690);
    v163 = j_operator new(1u);
    LODWORD(v838) = v163;
    v164 = HIDWORD(v838);
    v838 = *(_QWORD *)v162;
    *(_DWORD *)v162 = v163;
    *(_DWORD *)(v162 + 4) = v164;
    v839 = *(void (**)(void))(v162 + 8);
    v165 = v839;
    *(_DWORD *)(v162 + 8) = sub_1A2A9F8;
    v840 = *(_DWORD *)(v162 + 12);
    *(_DWORD *)(v162 + 12) = sub_1A2A9B2;
    if ( v165 )
      v165();
    v166 = (void *)(v690 - 12);
    if ( (int *)(v690 - 12) != &dword_28898C0 )
      v517 = (unsigned int *)(v690 - 4);
          v518 = __ldrex(v517);
        while ( __strex(v518 - 1, v517) );
        v518 = (*v517)--;
      if ( v518 <= 0 )
        j_j_j_j__ZdlPv_9(v166);
    sub_21E94B4((void **)&v689, "minecraft:behavior.restrict_open_door");
    v167 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v689);
    v168 = j_operator new(1u);
    LODWORD(v841) = v168;
    v169 = HIDWORD(v841);
    v841 = *(_QWORD *)v167;
    *(_DWORD *)v167 = v168;
    *(_DWORD *)(v167 + 4) = v169;
    v842 = *(void (**)(void))(v167 + 8);
    v170 = v842;
    *(_DWORD *)(v167 + 8) = sub_1A2AA6C;
    v843 = *(_DWORD *)(v167 + 12);
    *(_DWORD *)(v167 + 12) = sub_1A2AA26;
    if ( v170 )
      v170();
    v171 = (void *)(v689 - 12);
    if ( (int *)(v689 - 12) != &dword_28898C0 )
      v519 = (unsigned int *)(v689 - 4);
          v520 = __ldrex(v519);
        while ( __strex(v520 - 1, v519) );
        v520 = (*v519)--;
      if ( v520 <= 0 )
        j_j_j_j__ZdlPv_9(v171);
    sub_21E94B4((void **)&v688, "minecraft:behavior.random_look_around");
    v172 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v688);
    v173 = j_operator new(1u);
    LODWORD(v844) = v173;
    v174 = HIDWORD(v844);
    v844 = *(_QWORD *)v172;
    *(_DWORD *)v172 = v173;
    *(_DWORD *)(v172 + 4) = v174;
    v845 = *(void (**)(void))(v172 + 8);
    v175 = v845;
    *(_DWORD *)(v172 + 8) = sub_1A2AAF8;
    v846 = *(_DWORD *)(v172 + 12);
    *(_DWORD *)(v172 + 12) = sub_1A2AA9A;
    if ( v175 )
      v175();
    v176 = (void *)(v688 - 12);
    if ( (int *)(v688 - 12) != &dword_28898C0 )
      v521 = (unsigned int *)(v688 - 4);
          v522 = __ldrex(v521);
        while ( __strex(v522 - 1, v521) );
        v522 = (*v521)--;
      if ( v522 <= 0 )
        j_j_j_j__ZdlPv_9(v176);
    sub_21E94B4((void **)&v687, "minecraft:behavior.silverfish_merge_with_stone");
    v177 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v687);
    v178 = j_operator new(1u);
    LODWORD(v847) = v178;
    v179 = HIDWORD(v847);
    v847 = *(_QWORD *)v177;
    *(_DWORD *)v177 = v178;
    *(_DWORD *)(v177 + 4) = v179;
    v848 = *(void (**)(void))(v177 + 8);
    v180 = v848;
    *(_DWORD *)(v177 + 8) = sub_1A2AB6C;
    v849 = *(_DWORD *)(v177 + 12);
    *(_DWORD *)(v177 + 12) = sub_1A2AB26;
    if ( v180 )
      v180();
    v181 = (void *)(v687 - 12);
    if ( (int *)(v687 - 12) != &dword_28898C0 )
      v523 = (unsigned int *)(v687 - 4);
          v524 = __ldrex(v523);
        while ( __strex(v524 - 1, v523) );
        v524 = (*v523)--;
      if ( v524 <= 0 )
        j_j_j_j__ZdlPv_9(v181);
    sub_21E94B4((void **)&v686, "minecraft:behavior.silverfish_wake_up_friends");
    v182 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v686);
    v183 = j_operator new(1u);
    LODWORD(v850) = v183;
    v184 = HIDWORD(v850);
    v850 = *(_QWORD *)v182;
    *(_DWORD *)v182 = v183;
    *(_DWORD *)(v182 + 4) = v184;
    v851 = *(void (**)(void))(v182 + 8);
    v185 = v851;
    *(_DWORD *)(v182 + 8) = sub_1A2ABE0;
    v852 = *(_DWORD *)(v182 + 12);
    *(_DWORD *)(v182 + 12) = sub_1A2AB9A;
    if ( v185 )
      v185();
    v186 = (void *)(v686 - 12);
    if ( (int *)(v686 - 12) != &dword_28898C0 )
      v525 = (unsigned int *)(v686 - 4);
          v526 = __ldrex(v525);
        while ( __strex(v526 - 1, v525) );
        v526 = (*v525)--;
      if ( v526 <= 0 )
        j_j_j_j__ZdlPv_9(v186);
    sub_21E94B4((void **)&v685, "minecraft:behavior.stay_while_sitting");
    v187 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v685);
    v188 = j_operator new(1u);
    LODWORD(v853) = v188;
    v189 = HIDWORD(v853);
    v853 = *(_QWORD *)v187;
    *(_DWORD *)v187 = v188;
    *(_DWORD *)(v187 + 4) = v189;
    v854 = *(void (**)(void))(v187 + 8);
    v190 = v854;
    *(_DWORD *)(v187 + 8) = sub_1A2AC54;
    v855 = *(_DWORD *)(v187 + 12);
    *(_DWORD *)(v187 + 12) = sub_1A2AC0E;
    if ( v190 )
      v190();
    v191 = (void *)(v685 - 12);
    if ( (int *)(v685 - 12) != &dword_28898C0 )
      v527 = (unsigned int *)(v685 - 4);
          v528 = __ldrex(v527);
        while ( __strex(v528 - 1, v527) );
        v528 = (*v527)--;
      if ( v528 <= 0 )
        j_j_j_j__ZdlPv_9(v191);
    sub_21E94B4((void **)&v684, "minecraft:behavior.make_love");
    v192 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v684);
    v193 = j_operator new(1u);
    LODWORD(v856) = v193;
    v194 = HIDWORD(v856);
    v856 = *(_QWORD *)v192;
    *(_DWORD *)v192 = v193;
    *(_DWORD *)(v192 + 4) = v194;
    v857 = *(void (**)(void))(v192 + 8);
    v195 = v857;
    *(_DWORD *)(v192 + 8) = sub_1A2ACDA;
    v858 = *(_DWORD *)(v192 + 12);
    *(_DWORD *)(v192 + 12) = sub_1A2AC82;
    if ( v195 )
      v195();
    v196 = (void *)(v684 - 12);
    if ( (int *)(v684 - 12) != &dword_28898C0 )
      v529 = (unsigned int *)(v684 - 4);
          v530 = __ldrex(v529);
        while ( __strex(v530 - 1, v529) );
        v530 = (*v529)--;
      if ( v530 <= 0 )
        j_j_j_j__ZdlPv_9(v196);
    sub_21E94B4((void **)&v683, "minecraft:behavior.melee_attack");
    v197 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v683);
    v198 = j_operator new(1u);
    LODWORD(v859) = v198;
    v199 = HIDWORD(v859);
    v859 = *(_QWORD *)v197;
    *(_DWORD *)v197 = v198;
    *(_DWORD *)(v197 + 4) = v199;
    v860 = *(void (**)(void))(v197 + 8);
    v200 = v860;
    *(_DWORD *)(v197 + 8) = sub_1A2AD74;
    v861 = *(_DWORD *)(v197 + 12);
    *(_DWORD *)(v197 + 12) = sub_1A2AD08;
    if ( v200 )
      v200();
    v201 = (void *)(v683 - 12);
    if ( (int *)(v683 - 12) != &dword_28898C0 )
      v531 = (unsigned int *)(v683 - 4);
          v532 = __ldrex(v531);
        while ( __strex(v532 - 1, v531) );
        v532 = (*v531)--;
      if ( v532 <= 0 )
        j_j_j_j__ZdlPv_9(v201);
    sub_21E94B4((void **)&v682, "minecraft:behavior.stomp_attack");
    v202 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v682);
    v203 = j_operator new(1u);
    LODWORD(v862) = v203;
    v204 = HIDWORD(v862);
    v862 = *(_QWORD *)v202;
    *(_DWORD *)v202 = v203;
    *(_DWORD *)(v202 + 4) = v204;
    v863 = *(void (**)(void))(v202 + 8);
    v205 = v863;
    *(_DWORD *)(v202 + 8) = sub_1A2AE0E;
    v864 = *(_DWORD *)(v202 + 12);
    *(_DWORD *)(v202 + 12) = sub_1A2ADA2;
    if ( v205 )
      v205();
    v206 = (void *)(v682 - 12);
    if ( (int *)(v682 - 12) != &dword_28898C0 )
      v533 = (unsigned int *)(v682 - 4);
          v534 = __ldrex(v533);
        while ( __strex(v534 - 1, v533) );
        v534 = (*v533)--;
      if ( v534 <= 0 )
        j_j_j_j__ZdlPv_9(v206);
    sub_21E94B4((void **)&v681, "minecraft:behavior.ranged_attack");
    v207 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v681);
    v208 = j_operator new(1u);
    LODWORD(v865) = v208;
    v209 = HIDWORD(v865);
    v865 = *(_QWORD *)v207;
    *(_DWORD *)v207 = v208;
    *(_DWORD *)(v207 + 4) = v209;
    v866 = *(void (**)(void))(v207 + 8);
    v210 = v866;
    *(_DWORD *)(v207 + 8) = sub_1A2AEEE;
    v867 = *(_DWORD *)(v207 + 12);
    *(_DWORD *)(v207 + 12) = sub_1A2AE3C;
    if ( v210 )
      v210();
    v211 = (void *)(v681 - 12);
    if ( (int *)(v681 - 12) != &dword_28898C0 )
      v535 = (unsigned int *)(v681 - 4);
          v536 = __ldrex(v535);
        while ( __strex(v536 - 1, v535) );
        v536 = (*v535)--;
      if ( v536 <= 0 )
        j_j_j_j__ZdlPv_9(v211);
    sub_21E94B4((void **)&v680, "minecraft:behavior.random_stroll");
    v212 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v680);
    v213 = j_operator new(1u);
    LODWORD(v868) = v213;
    v214 = HIDWORD(v868);
    v868 = *(_QWORD *)v212;
    *(_DWORD *)v212 = v213;
    *(_DWORD *)(v212 + 4) = v214;
    v869 = *(void (**)(void))(v212 + 8);
    v215 = v869;
    *(_DWORD *)(v212 + 8) = sub_1A2AF6E;
    v870 = *(_DWORD *)(v212 + 12);
    *(_DWORD *)(v212 + 12) = sub_1A2AF1C;
    if ( v215 )
      v215();
    v216 = (void *)(v680 - 12);
    if ( (int *)(v680 - 12) != &dword_28898C0 )
      v537 = (unsigned int *)(v680 - 4);
          v538 = __ldrex(v537);
        while ( __strex(v538 - 1, v537) );
        v538 = (*v537)--;
      if ( v538 <= 0 )
        j_j_j_j__ZdlPv_9(v216);
    sub_21E94B4((void **)&v679, "minecraft:behavior.random_fly");
    v217 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v679);
    v218 = j_operator new(1u);
    LODWORD(v871) = v218;
    v219 = HIDWORD(v871);
    v871 = *(_QWORD *)v217;
    *(_DWORD *)v217 = v218;
    *(_DWORD *)(v217 + 4) = v219;
    v872 = *(void (**)(void))(v217 + 8);
    v220 = v872;
    *(_DWORD *)(v217 + 8) = sub_1A2AFFE;
    v873 = *(_DWORD *)(v217 + 12);
    *(_DWORD *)(v217 + 12) = sub_1A2AF9C;
    if ( v220 )
      v220();
    v221 = (void *)(v679 - 12);
    if ( (int *)(v679 - 12) != &dword_28898C0 )
      v539 = (unsigned int *)(v679 - 4);
          v540 = __ldrex(v539);
        while ( __strex(v540 - 1, v539) );
        v540 = (*v539)--;
      if ( v540 <= 0 )
        j_j_j_j__ZdlPv_9(v221);
    sub_21E94B4((void **)&v678, "minecraft:behavior.tempt");
    v222 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v678);
    v223 = j_operator new(1u);
    LODWORD(v874) = v223;
    v224 = HIDWORD(v874);
    v874 = *(_QWORD *)v222;
    *(_DWORD *)v222 = v223;
    *(_DWORD *)(v222 + 4) = v224;
    v875 = *(void (**)(void))(v222 + 8);
    v225 = v875;
    *(_DWORD *)(v222 + 8) = sub_1A2B086;
    v876 = *(_DWORD *)(v222 + 12);
    *(_DWORD *)(v222 + 12) = sub_1A2B02C;
    if ( v225 )
      v225();
    v226 = (void *)(v678 - 12);
    if ( (int *)(v678 - 12) != &dword_28898C0 )
      v541 = (unsigned int *)(v678 - 4);
          v542 = __ldrex(v541);
        while ( __strex(v542 - 1, v541) );
        v542 = (*v541)--;
      if ( v542 <= 0 )
        j_j_j_j__ZdlPv_9(v226);
    sub_21E94B4((void **)&v677, "minecraft:behavior.peek");
    v227 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v677);
    v228 = j_operator new(1u);
    LODWORD(v877) = v228;
    v229 = HIDWORD(v877);
    v877 = *(_QWORD *)v227;
    *(_DWORD *)v227 = v228;
    *(_DWORD *)(v227 + 4) = v229;
    v878 = *(void (**)(void))(v227 + 8);
    v230 = v878;
    *(_DWORD *)(v227 + 8) = sub_1A2B1C0;
    v879 = *(_DWORD *)(v227 + 12);
    *(_DWORD *)(v227 + 12) = sub_1A2B17A;
    if ( v230 )
      v230();
    v231 = (void *)(v677 - 12);
    if ( (int *)(v677 - 12) != &dword_28898C0 )
      v543 = (unsigned int *)(v677 - 4);
          v544 = __ldrex(v543);
        while ( __strex(v544 - 1, v543) );
        v544 = (*v543)--;
      if ( v544 <= 0 )
        j_j_j_j__ZdlPv_9(v231);
    sub_21E94B4((void **)&v676, "minecraft:behavior.play");
    v232 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v676);
    v233 = j_operator new(1u);
    LODWORD(v880) = v233;
    v234 = HIDWORD(v880);
    v880 = *(_QWORD *)v232;
    *(_DWORD *)v232 = v233;
    *(_DWORD *)(v232 + 4) = v234;
    v881 = *(void (**)(void))(v232 + 8);
    v235 = v881;
    *(_DWORD *)(v232 + 8) = sub_1A2B24A;
    v882 = *(_DWORD *)(v232 + 12);
    *(_DWORD *)(v232 + 12) = sub_1A2B1EE;
    if ( v235 )
      v235();
    v236 = (void *)(v676 - 12);
    if ( (int *)(v676 - 12) != &dword_28898C0 )
      v545 = (unsigned int *)(v676 - 4);
          v546 = __ldrex(v545);
        while ( __strex(v546 - 1, v545) );
        v546 = (*v545)--;
      if ( v546 <= 0 )
        j_j_j_j__ZdlPv_9(v236);
    sub_21E94B4((void **)&v675, "minecraft:behavior.receive_love");
    v237 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v675);
    v238 = j_operator new(1u);
    LODWORD(v883) = v238;
    v239 = HIDWORD(v883);
    v883 = *(_QWORD *)v237;
    *(_DWORD *)v237 = v238;
    *(_DWORD *)(v237 + 4) = v239;
    v884 = *(void (**)(void))(v237 + 8);
    v240 = v884;
    *(_DWORD *)(v237 + 8) = sub_1A2B2D0;
    v885 = *(_DWORD *)(v237 + 12);
    *(_DWORD *)(v237 + 12) = sub_1A2B278;
    if ( v240 )
      v240();
    v241 = (void *)(v675 - 12);
    if ( (int *)(v675 - 12) != &dword_28898C0 )
      v547 = (unsigned int *)(v675 - 4);
          v548 = __ldrex(v547);
        while ( __strex(v548 - 1, v547) );
        v548 = (*v547)--;
      if ( v548 <= 0 )
        j_j_j_j__ZdlPv_9(v241);
    sub_21E94B4((void **)&v674, "minecraft:behavior.take_flower");
    v242 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v674);
    v243 = j_operator new(1u);
    LODWORD(v886) = v243;
    v244 = HIDWORD(v886);
    v886 = *(_QWORD *)v242;
    *(_DWORD *)v242 = v243;
    *(_DWORD *)(v242 + 4) = v244;
    v887 = *(void (**)(void))(v242 + 8);
    v245 = v887;
    *(_DWORD *)(v242 + 8) = sub_1A2B344;
    v888 = *(_DWORD *)(v242 + 12);
    *(_DWORD *)(v242 + 12) = sub_1A2B2FE;
    if ( v245 )
      v245();
    v246 = (void *)(v674 - 12);
    if ( (int *)(v674 - 12) != &dword_28898C0 )
      v549 = (unsigned int *)(v674 - 4);
          v550 = __ldrex(v549);
        while ( __strex(v550 - 1, v549) );
        v550 = (*v549)--;
      if ( v550 <= 0 )
        j_j_j_j__ZdlPv_9(v246);
    sub_21E94B4((void **)&v673, "minecraft:behavior.harvest_farm_block");
    v247 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v673);
    v248 = j_operator new(1u);
    LODWORD(v889) = v248;
    v249 = HIDWORD(v889);
    v889 = *(_QWORD *)v247;
    *(_DWORD *)v247 = v248;
    *(_DWORD *)(v247 + 4) = v249;
    v890 = *(void (**)(void))(v247 + 8);
    v250 = v890;
    *(_DWORD *)(v247 + 8) = sub_1A2B3CE;
    v891 = *(_DWORD *)(v247 + 12);
    *(_DWORD *)(v247 + 12) = sub_1A2B372;
    if ( v250 )
      v250();
    v251 = (void *)(v673 - 12);
    if ( (int *)(v673 - 12) != &dword_28898C0 )
      v551 = (unsigned int *)(v673 - 4);
          v552 = __ldrex(v551);
        while ( __strex(v552 - 1, v551) );
        v552 = (*v551)--;
      if ( v552 <= 0 )
        j_j_j_j__ZdlPv_9(v251);
    sub_21E94B4((void **)&v672, "minecraft:behavior.squid_idle");
    v252 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v672);
    v253 = j_operator new(1u);
    LODWORD(v892) = v253;
    v254 = HIDWORD(v892);
    v892 = *(_QWORD *)v252;
    *(_DWORD *)v252 = v253;
    *(_DWORD *)(v252 + 4) = v254;
    v893 = *(void (**)(void))(v252 + 8);
    v255 = v893;
    *(_DWORD *)(v252 + 8) = sub_1A2B46C;
    v894 = *(_DWORD *)(v252 + 12);
    *(_DWORD *)(v252 + 12) = sub_1A2B3FC;
    if ( v255 )
      v255();
    v256 = (void *)(v672 - 12);
    if ( (int *)(v672 - 12) != &dword_28898C0 )
      v553 = (unsigned int *)(v672 - 4);
          v554 = __ldrex(v553);
        while ( __strex(v554 - 1, v553) );
        v554 = (*v553)--;
      if ( v554 <= 0 )
        j_j_j_j__ZdlPv_9(v256);
    sub_21E94B4((void **)&v671, "minecraft:behavior.squid_flee");
    v257 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v671);
    v258 = j_operator new(1u);
    LODWORD(v895) = v258;
    v259 = HIDWORD(v895);
    v895 = *(_QWORD *)v257;
    *(_DWORD *)v257 = v258;
    *(_DWORD *)(v257 + 4) = v259;
    v896 = *(void (**)(void))(v257 + 8);
    v260 = v896;
    *(_DWORD *)(v257 + 8) = sub_1A2B50C;
    v897 = *(_DWORD *)(v257 + 12);
    *(_DWORD *)(v257 + 12) = sub_1A2B49C;
    if ( v260 )
      v260();
    v261 = (void *)(v671 - 12);
    if ( (int *)(v671 - 12) != &dword_28898C0 )
      v555 = (unsigned int *)(v671 - 4);
          v556 = __ldrex(v555);
        while ( __strex(v556 - 1, v555) );
        v556 = (*v555)--;
      if ( v556 <= 0 )
        j_j_j_j__ZdlPv_9(v261);
    sub_21E94B4((void **)&v670, "minecraft:behavior.squid_move_away_from_ground");
    v262 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v670);
    v263 = j_operator new(1u);
    LODWORD(v898) = v263;
    v264 = HIDWORD(v898);
    v898 = *(_QWORD *)v262;
    *(_DWORD *)v262 = v263;
    *(_DWORD *)(v262 + 4) = v264;
    v899 = *(void (**)(void))(v262 + 8);
    v265 = v899;
    *(_DWORD *)(v262 + 8) = sub_1A2B5A8;
    v900 = *(_DWORD *)(v262 + 12);
    *(_DWORD *)(v262 + 12) = sub_1A2B53C;
    if ( v265 )
      v265();
    v266 = (void *)(v670 - 12);
    if ( (int *)(v670 - 12) != &dword_28898C0 )
      v557 = (unsigned int *)(v670 - 4);
          v558 = __ldrex(v557);
        while ( __strex(v558 - 1, v557) );
        v558 = (*v557)--;
      if ( v558 <= 0 )
        j_j_j_j__ZdlPv_9(v266);
    sub_21E94B4((void **)&v669, "minecraft:behavior.squid_out_of_water");
    v267 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v669);
    v268 = j_operator new(1u);
    LODWORD(v901) = v268;
    v269 = HIDWORD(v901);
    v901 = *(_QWORD *)v267;
    *(_DWORD *)v267 = v268;
    *(_DWORD *)(v267 + 4) = v269;
    v902 = *(void (**)(void))(v267 + 8);
    v270 = v902;
    *(_DWORD *)(v267 + 8) = sub_1A2B644;
    v903 = *(_DWORD *)(v267 + 12);
    *(_DWORD *)(v267 + 12) = sub_1A2B5D8;
    if ( v270 )
      v270();
    v271 = (void *)(v669 - 12);
    if ( (int *)(v669 - 12) != &dword_28898C0 )
      v559 = (unsigned int *)(v669 - 4);
          v560 = __ldrex(v559);
        while ( __strex(v560 - 1, v559) );
        v560 = (*v559)--;
      if ( v560 <= 0 )
        j_j_j_j__ZdlPv_9(v271);
    sub_21E94B4((void **)&v668, "minecraft:behavior.squid_dive");
    v272 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v668);
    v273 = j_operator new(1u);
    LODWORD(v904) = v273;
    v274 = HIDWORD(v904);
    v904 = *(_QWORD *)v272;
    *(_DWORD *)v272 = v273;
    *(_DWORD *)(v272 + 4) = v274;
    v905 = *(void (**)(void))(v272 + 8);
    v275 = v905;
    *(_DWORD *)(v272 + 8) = sub_1A2B6E0;
    v906 = *(_DWORD *)(v272 + 12);
    *(_DWORD *)(v272 + 12) = sub_1A2B674;
    if ( v275 )
      v275();
    v276 = (void *)(v668 - 12);
    if ( (int *)(v668 - 12) != &dword_28898C0 )
      v561 = (unsigned int *)(v668 - 4);
          v562 = __ldrex(v561);
        while ( __strex(v562 - 1, v561) );
        v562 = (*v561)--;
      if ( v562 <= 0 )
        j_j_j_j__ZdlPv_9(v276);
    sub_21E94B4((void **)&v667, "minecraft:behavior.skeleton_horse_trap");
    v277 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v667);
    v278 = j_operator new(1u);
    LODWORD(v907) = v278;
    v279 = HIDWORD(v907);
    v907 = *(_QWORD *)v277;
    *(_DWORD *)v277 = v278;
    *(_DWORD *)(v277 + 4) = v279;
    v908 = *(void (**)(void))(v277 + 8);
    v280 = v908;
    *(_DWORD *)(v277 + 8) = sub_1A2B790;
    v909 = *(_DWORD *)(v277 + 12);
    *(_DWORD *)(v277 + 12) = sub_1A2B70E;
    if ( v280 )
      v280();
    v281 = (void *)(v667 - 12);
    if ( (int *)(v667 - 12) != &dword_28898C0 )
      v563 = (unsigned int *)(v667 - 4);
          v564 = __ldrex(v563);
        while ( __strex(v564 - 1, v563) );
        v564 = (*v563)--;
      if ( v564 <= 0 )
        j_j_j_j__ZdlPv_9(v281);
    sub_21E94B4((void **)&v666, "minecraft:behavior.swell");
    v282 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v666);
    v283 = j_operator new(1u);
    LODWORD(v910) = v283;
    v284 = HIDWORD(v910);
    v910 = *(_QWORD *)v282;
    *(_DWORD *)v282 = v283;
    *(_DWORD *)(v282 + 4) = v284;
    v911 = *(void (**)(void))(v282 + 8);
    v285 = v911;
    *(_DWORD *)(v282 + 8) = sub_1A2B81E;
    v912 = *(_DWORD *)(v282 + 12);
    *(_DWORD *)(v282 + 12) = sub_1A2B7BE;
    if ( v285 )
      v285();
    v286 = (void *)(v666 - 12);
    if ( (int *)(v666 - 12) != &dword_28898C0 )
      v565 = (unsigned int *)(v666 - 4);
          v566 = __ldrex(v565);
        while ( __strex(v566 - 1, v565) );
        v566 = (*v565)--;
      if ( v566 <= 0 )
        j_j_j_j__ZdlPv_9(v286);
    sub_21E94B4((void **)&v665, "minecraft:behavior.dragonholdingpattern");
    v287 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v665);
    v288 = j_operator new(1u);
    LODWORD(v913) = v288;
    v289 = HIDWORD(v913);
    v913 = *(_QWORD *)v287;
    *(_DWORD *)v287 = v288;
    *(_DWORD *)(v287 + 4) = v289;
    v914 = *(void (**)(void))(v287 + 8);
    v290 = v914;
    *(_DWORD *)(v287 + 8) = sub_1A2B892;
    v915 = *(_DWORD *)(v287 + 12);
    *(_DWORD *)(v287 + 12) = sub_1A2B84C;
    if ( v290 )
      v290();
    v291 = (void *)(v665 - 12);
    if ( (int *)(v665 - 12) != &dword_28898C0 )
      v567 = (unsigned int *)(v665 - 4);
          v568 = __ldrex(v567);
        while ( __strex(v568 - 1, v567) );
        v568 = (*v567)--;
      if ( v568 <= 0 )
        j_j_j_j__ZdlPv_9(v291);
    sub_21E94B4((void **)&v664, "minecraft:behavior.dragonlanding");
    v292 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v664);
    v293 = j_operator new(1u);
    LODWORD(v916) = v293;
    v294 = HIDWORD(v916);
    v916 = *(_QWORD *)v292;
    *(_DWORD *)v292 = v293;
    *(_DWORD *)(v292 + 4) = v294;
    v917 = *(void (**)(void))(v292 + 8);
    v295 = v917;
    *(_DWORD *)(v292 + 8) = sub_1A2B906;
    v918 = *(_DWORD *)(v292 + 12);
    *(_DWORD *)(v292 + 12) = sub_1A2B8C0;
    if ( v295 )
      v295();
    v296 = (void *)(v664 - 12);
    if ( (int *)(v664 - 12) != &dword_28898C0 )
      v569 = (unsigned int *)(v664 - 4);
          v570 = __ldrex(v569);
        while ( __strex(v570 - 1, v569) );
        v570 = (*v569)--;
      if ( v570 <= 0 )
        j_j_j_j__ZdlPv_9(v296);
    sub_21E94B4((void **)&v663, "minecraft:behavior.dragonscanning");
    v297 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v663);
    v298 = j_operator new(1u);
    LODWORD(v919) = v298;
    v299 = HIDWORD(v919);
    v919 = *(_QWORD *)v297;
    *(_DWORD *)v297 = v298;
    *(_DWORD *)(v297 + 4) = v299;
    v920 = *(void (**)(void))(v297 + 8);
    v300 = v920;
    *(_DWORD *)(v297 + 8) = sub_1A2B97A;
    v921 = *(_DWORD *)(v297 + 12);
    *(_DWORD *)(v297 + 12) = sub_1A2B934;
    if ( v300 )
      v300();
    v301 = (void *)(v663 - 12);
    if ( (int *)(v663 - 12) != &dword_28898C0 )
      v571 = (unsigned int *)(v663 - 4);
          v572 = __ldrex(v571);
        while ( __strex(v572 - 1, v571) );
        v572 = (*v571)--;
      if ( v572 <= 0 )
        j_j_j_j__ZdlPv_9(v301);
    sub_21E94B4((void **)&v662, "minecraft:behavior.dragonflaming");
    v302 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v662);
    v303 = j_operator new(1u);
    LODWORD(v922) = v303;
    v304 = HIDWORD(v922);
    v922 = *(_QWORD *)v302;
    *(_DWORD *)v302 = v303;
    *(_DWORD *)(v302 + 4) = v304;
    v923 = *(void (**)(void))(v302 + 8);
    v305 = v923;
    *(_DWORD *)(v302 + 8) = sub_1A2B9EE;
    v924 = *(_DWORD *)(v302 + 12);
    *(_DWORD *)(v302 + 12) = sub_1A2B9A8;
    if ( v305 )
      v305();
    v306 = (void *)(v662 - 12);
    if ( (int *)(v662 - 12) != &dword_28898C0 )
      v573 = (unsigned int *)(v662 - 4);
          v574 = __ldrex(v573);
        while ( __strex(v574 - 1, v573) );
        v574 = (*v573)--;
      if ( v574 <= 0 )
        j_j_j_j__ZdlPv_9(v306);
    sub_21E94B4((void **)&v661, "minecraft:behavior.dragontakeoff");
    v307 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v661);
    v308 = j_operator new(1u);
    LODWORD(v925) = v308;
    v309 = HIDWORD(v925);
    v925 = *(_QWORD *)v307;
    *(_DWORD *)v307 = v308;
    *(_DWORD *)(v307 + 4) = v309;
    v926 = *(void (**)(void))(v307 + 8);
    v310 = v926;
    *(_DWORD *)(v307 + 8) = sub_1A2BA62;
    v927 = *(_DWORD *)(v307 + 12);
    *(_DWORD *)(v307 + 12) = sub_1A2BA1C;
    if ( v310 )
      v310();
    v311 = (void *)(v661 - 12);
    if ( (int *)(v661 - 12) != &dword_28898C0 )
      v575 = (unsigned int *)(v661 - 4);
          v576 = __ldrex(v575);
        while ( __strex(v576 - 1, v575) );
        v576 = (*v575)--;
      if ( v576 <= 0 )
        j_j_j_j__ZdlPv_9(v311);
    sub_21E94B4((void **)&v660, "minecraft:behavior.dragonchargeplayer");
    v312 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v660);
    v313 = j_operator new(1u);
    LODWORD(v928) = v313;
    v314 = HIDWORD(v928);
    v928 = *(_QWORD *)v312;
    *(_DWORD *)v312 = v313;
    *(_DWORD *)(v312 + 4) = v314;
    v929 = *(void (**)(void))(v312 + 8);
    v315 = v929;
    *(_DWORD *)(v312 + 8) = sub_1A2BAD6;
    v930 = *(_DWORD *)(v312 + 12);
    *(_DWORD *)(v312 + 12) = sub_1A2BA90;
    if ( v315 )
      v315();
    v316 = (void *)(v660 - 12);
    if ( (int *)(v660 - 12) != &dword_28898C0 )
      v577 = (unsigned int *)(v660 - 4);
          v578 = __ldrex(v577);
        while ( __strex(v578 - 1, v577) );
        v578 = (*v577)--;
      if ( v578 <= 0 )
        j_j_j_j__ZdlPv_9(v316);
    sub_21E94B4((void **)&v659, "minecraft:behavior.dragonstrafeplayer");
    v317 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v659);
    v318 = j_operator new(1u);
    LODWORD(v931) = v318;
    v319 = HIDWORD(v931);
    v931 = *(_QWORD *)v317;
    *(_DWORD *)v317 = v318;
    *(_DWORD *)(v317 + 4) = v319;
    v932 = *(void (**)(void))(v317 + 8);
    v320 = v932;
    *(_DWORD *)(v317 + 8) = sub_1A2BB4A;
    v933 = *(_DWORD *)(v317 + 12);
    *(_DWORD *)(v317 + 12) = sub_1A2BB04;
    if ( v320 )
      v320();
    v321 = (void *)(v659 - 12);
    if ( (int *)(v659 - 12) != &dword_28898C0 )
      v579 = (unsigned int *)(v659 - 4);
          v580 = __ldrex(v579);
        while ( __strex(v580 - 1, v579) );
        v580 = (*v579)--;
      if ( v580 <= 0 )
        j_j_j_j__ZdlPv_9(v321);
    sub_21E94B4((void **)&v658, "minecraft:behavior.dragondeath");
    v322 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v658);
    v323 = j_operator new(1u);
    LODWORD(v934) = v323;
    v324 = HIDWORD(v934);
    v934 = *(_QWORD *)v322;
    *(_DWORD *)v322 = v323;
    *(_DWORD *)(v322 + 4) = v324;
    v935 = *(void (**)(void))(v322 + 8);
    v325 = v935;
    *(_DWORD *)(v322 + 8) = sub_1A2BBBE;
    v936 = *(_DWORD *)(v322 + 12);
    *(_DWORD *)(v322 + 12) = sub_1A2BB78;
    if ( v325 )
      v325();
    v326 = (void *)(v658 - 12);
    if ( (int *)(v658 - 12) != &dword_28898C0 )
      v581 = (unsigned int *)(v658 - 4);
          v582 = __ldrex(v581);
        while ( __strex(v582 - 1, v581) );
        v582 = (*v581)--;
      if ( v582 <= 0 )
        j_j_j_j__ZdlPv_9(v326);
    sub_21E94B4((void **)&v657, "minecraft:behavior.enderman_leave_block");
    v327 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v657);
    v328 = j_operator new(1u);
    LODWORD(v937) = v328;
    v329 = HIDWORD(v937);
    v937 = *(_QWORD *)v327;
    *(_DWORD *)v327 = v328;
    *(_DWORD *)(v327 + 4) = v329;
    v938 = *(void (**)(void))(v327 + 8);
    v330 = v938;
    *(_DWORD *)(v327 + 8) = sub_1A2BC48;
    v939 = *(_DWORD *)(v327 + 12);
    *(_DWORD *)(v327 + 12) = sub_1A2BBEC;
    if ( v330 )
      v330();
    v331 = (void *)(v657 - 12);
    if ( (int *)(v657 - 12) != &dword_28898C0 )
      v583 = (unsigned int *)(v657 - 4);
          v584 = __ldrex(v583);
        while ( __strex(v584 - 1, v583) );
        v584 = (*v583)--;
      if ( v584 <= 0 )
        j_j_j_j__ZdlPv_9(v331);
    sub_21E94B4((void **)&v656, "minecraft:behavior.enderman_take_block");
    v332 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v656);
    v333 = j_operator new(1u);
    LODWORD(v940) = v333;
    v334 = HIDWORD(v940);
    v940 = *(_QWORD *)v332;
    *(_DWORD *)v332 = v333;
    *(_DWORD *)(v332 + 4) = v334;
    v941 = *(void (**)(void))(v332 + 8);
    v335 = v941;
    *(_DWORD *)(v332 + 8) = sub_1A2BCD2;
    v942 = *(_DWORD *)(v332 + 12);
    *(_DWORD *)(v332 + 12) = sub_1A2BC76;
    if ( v335 )
      v335();
    v336 = (void *)(v656 - 12);
    if ( (int *)(v656 - 12) != &dword_28898C0 )
      v585 = (unsigned int *)(v656 - 4);
          v586 = __ldrex(v585);
        while ( __strex(v586 - 1, v585) );
        v586 = (*v585)--;
      if ( v586 <= 0 )
        j_j_j_j__ZdlPv_9(v336);
    sub_21E94B4((void **)&v655, "minecraft:behavior.leap_at_target");
    v337 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v655);
    v338 = j_operator new(1u);
    LODWORD(v943) = v338;
    v339 = HIDWORD(v943);
    v943 = *(_QWORD *)v337;
    *(_DWORD *)v337 = v338;
    *(_DWORD *)(v337 + 4) = v339;
    v944 = *(void (**)(void))(v337 + 8);
    v340 = v944;
    *(_DWORD *)(v337 + 8) = sub_1A2BD56;
    v945 = *(_DWORD *)(v337 + 12);
    *(_DWORD *)(v337 + 12) = sub_1A2BD00;
    if ( v340 )
      v340();
    v341 = (void *)(v655 - 12);
    if ( (int *)(v655 - 12) != &dword_28898C0 )
      v587 = (unsigned int *)(v655 - 4);
          v588 = __ldrex(v587);
        while ( __strex(v588 - 1, v587) );
        v588 = (*v587)--;
      if ( v588 <= 0 )
        j_j_j_j__ZdlPv_9(v341);
    sub_21E94B4((void **)&v654, "minecraft:behavior.guardian_attack");
    v342 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v654);
    v343 = j_operator new(1u);
    LODWORD(v946) = v343;
    v344 = HIDWORD(v946);
    v946 = *(_QWORD *)v342;
    *(_DWORD *)v342 = v343;
    *(_DWORD *)(v342 + 4) = v344;
    v947 = *(void (**)(void))(v342 + 8);
    v345 = v947;
    *(_DWORD *)(v342 + 8) = sub_1A2BDF2;
    v948 = *(_DWORD *)(v342 + 12);
    *(_DWORD *)(v342 + 12) = sub_1A2BD84;
    if ( v345 )
      v345();
    v346 = (void *)(v654 - 12);
    if ( (int *)(v654 - 12) != &dword_28898C0 )
      v589 = (unsigned int *)(v654 - 4);
          v590 = __ldrex(v589);
        while ( __strex(v590 - 1, v589) );
        v590 = (*v589)--;
      if ( v590 <= 0 )
        j_j_j_j__ZdlPv_9(v346);
    sub_21E94B4((void **)&v653, "minecraft:behavior.slime_float");
    v347 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v653);
    v348 = j_operator new(1u);
    LODWORD(v949) = v348;
    v349 = HIDWORD(v949);
    v949 = *(_QWORD *)v347;
    *(_DWORD *)v347 = v348;
    *(_DWORD *)(v347 + 4) = v349;
    v950 = *(void (**)(void))(v347 + 8);
    v350 = v950;
    *(_DWORD *)(v347 + 8) = sub_1A2BE66;
    v951 = *(_DWORD *)(v347 + 12);
    *(_DWORD *)(v347 + 12) = sub_1A2BE20;
    if ( v350 )
      v350();
    v351 = (void *)(v653 - 12);
    if ( (int *)(v653 - 12) != &dword_28898C0 )
      v591 = (unsigned int *)(v653 - 4);
          v592 = __ldrex(v591);
        while ( __strex(v592 - 1, v591) );
        v592 = (*v591)--;
      if ( v592 <= 0 )
        j_j_j_j__ZdlPv_9(v351);
    sub_21E94B4((void **)&v652, "minecraft:behavior.slime_keep_on_jumping");
    v352 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v652);
    v353 = j_operator new(1u);
    LODWORD(v952) = v353;
    v354 = HIDWORD(v952);
    v952 = *(_QWORD *)v352;
    *(_DWORD *)v352 = v353;
    *(_DWORD *)(v352 + 4) = v354;
    v953 = *(void (**)(void))(v352 + 8);
    v355 = v953;
    *(_DWORD *)(v352 + 8) = sub_1A2BEDA;
    v954 = *(_DWORD *)(v352 + 12);
    *(_DWORD *)(v352 + 12) = sub_1A2BE94;
    if ( v355 )
      v355();
    v356 = (void *)(v652 - 12);
    if ( (int *)(v652 - 12) != &dword_28898C0 )
      v593 = (unsigned int *)(v652 - 4);
          v594 = __ldrex(v593);
        while ( __strex(v594 - 1, v593) );
        v594 = (*v593)--;
      if ( v594 <= 0 )
        j_j_j_j__ZdlPv_9(v356);
    sub_21E94B4((void **)&v651, "minecraft:behavior.slime_random_direction");
    v357 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v651);
    v358 = j_operator new(1u);
    LODWORD(v955) = v358;
    v359 = HIDWORD(v955);
    v955 = *(_QWORD *)v357;
    *(_DWORD *)v357 = v358;
    *(_DWORD *)(v357 + 4) = v359;
    v956 = *(void (**)(void))(v357 + 8);
    v360 = v956;
    *(_DWORD *)(v357 + 8) = sub_1A2BF4E;
    v957 = *(_DWORD *)(v357 + 12);
    *(_DWORD *)(v357 + 12) = sub_1A2BF08;
    if ( v360 )
      v360();
    v361 = (void *)(v651 - 12);
    if ( (int *)(v651 - 12) != &dword_28898C0 )
      v595 = (unsigned int *)(v651 - 4);
          v596 = __ldrex(v595);
        while ( __strex(v596 - 1, v595) );
        v596 = (*v595)--;
      if ( v596 <= 0 )
        j_j_j_j__ZdlPv_9(v361);
    sub_21E94B4((void **)&v650, "minecraft:behavior.slime_attack");
    v362 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v650);
    v363 = j_operator new(1u);
    LODWORD(v958) = v363;
    v364 = HIDWORD(v958);
    v958 = *(_QWORD *)v362;
    *(_DWORD *)v362 = v363;
    *(_DWORD *)(v362 + 4) = v364;
    v959 = *(void (**)(void))(v362 + 8);
    v365 = v959;
    *(_DWORD *)(v362 + 8) = sub_1A2BFC2;
    v960 = *(_DWORD *)(v362 + 12);
    *(_DWORD *)(v362 + 12) = sub_1A2BF7C;
    if ( v365 )
      v365();
    v366 = (void *)(v650 - 12);
    if ( (int *)(v650 - 12) != &dword_28898C0 )
      v597 = (unsigned int *)(v650 - 4);
          v598 = __ldrex(v597);
        while ( __strex(v598 - 1, v597) );
        v598 = (*v597)--;
      if ( v598 <= 0 )
        j_j_j_j__ZdlPv_9(v366);
    sub_21E94B4((void **)&v649, "minecraft:behavior.raid_garden");
    v367 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v649);
    v368 = j_operator new(1u);
    LODWORD(v961) = v368;
    v369 = HIDWORD(v961);
    v961 = *(_QWORD *)v367;
    *(_DWORD *)v367 = v368;
    *(_DWORD *)(v367 + 4) = v369;
    v962 = *(void (**)(void))(v367 + 8);
    v370 = v962;
    *(_DWORD *)(v367 + 8) = sub_1A2C06A;
    v963 = *(_DWORD *)(v367 + 12);
    *(_DWORD *)(v367 + 12) = sub_1A2BFF0;
    if ( v370 )
      v370();
    v371 = (void *)(v649 - 12);
    if ( (int *)(v649 - 12) != &dword_28898C0 )
      v599 = (unsigned int *)(v649 - 4);
          v600 = __ldrex(v599);
        while ( __strex(v600 - 1, v599) );
        v600 = (*v599)--;
      if ( v600 <= 0 )
        j_j_j_j__ZdlPv_9(v371);
    sub_21E94B4((void **)&v648, "minecraft:behavior.player_ride_tamed");
    v372 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v648);
    v373 = j_operator new(1u);
    LODWORD(v964) = v373;
    v374 = HIDWORD(v964);
    v964 = *(_QWORD *)v372;
    *(_DWORD *)v372 = v373;
    *(_DWORD *)(v372 + 4) = v374;
    v965 = *(void (**)(void))(v372 + 8);
    v375 = v965;
    *(_DWORD *)(v372 + 8) = sub_1A2C0DE;
    v966 = *(_DWORD *)(v372 + 12);
    *(_DWORD *)(v372 + 12) = sub_1A2C098;
    if ( v375 )
      v375();
    v376 = (void *)(v648 - 12);
    if ( (int *)(v648 - 12) != &dword_28898C0 )
      v601 = (unsigned int *)(v648 - 4);
          v602 = __ldrex(v601);
        while ( __strex(v602 - 1, v601) );
        v602 = (*v601)--;
      if ( v602 <= 0 )
        j_j_j_j__ZdlPv_9(v376);
    sub_21E94B4((void **)&v647, "minecraft:behavior.find_mount");
    v377 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v647);
    v378 = j_operator new(1u);
    LODWORD(v967) = v378;
    v379 = HIDWORD(v967);
    v967 = *(_QWORD *)v377;
    *(_DWORD *)v377 = v378;
    *(_DWORD *)(v377 + 4) = v379;
    v968 = *(void (**)(void))(v377 + 8);
    v380 = v968;
    *(_DWORD *)(v377 + 8) = sub_1A2C170;
    v969 = *(_DWORD *)(v377 + 12);
    *(_DWORD *)(v377 + 12) = sub_1A2C10C;
    if ( v380 )
      v380();
    v381 = (void *)(v647 - 12);
    if ( (int *)(v647 - 12) != &dword_28898C0 )
      v603 = (unsigned int *)(v647 - 4);
          v604 = __ldrex(v603);
        while ( __strex(v604 - 1, v603) );
        v604 = (*v603)--;
      if ( v604 <= 0 )
        j_j_j_j__ZdlPv_9(v381);
    sub_21E94B4((void **)&v646, "minecraft:behavior.controlled_by_player");
    v382 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v646);
    v383 = j_operator new(1u);
    LODWORD(v970) = v383;
    v384 = HIDWORD(v970);
    v970 = *(_QWORD *)v382;
    *(_DWORD *)v382 = v383;
    *(_DWORD *)(v382 + 4) = v384;
    v971 = *(void (**)(void))(v382 + 8);
    v385 = v971;
    *(_DWORD *)(v382 + 8) = sub_1A2C1E4;
    v972 = *(_DWORD *)(v382 + 12);
    *(_DWORD *)(v382 + 12) = sub_1A2C19E;
    if ( v385 )
      v385();
    v386 = (void *)(v646 - 12);
    if ( (int *)(v646 - 12) != &dword_28898C0 )
      v605 = (unsigned int *)(v646 - 4);
          v606 = __ldrex(v605);
        while ( __strex(v606 - 1, v605) );
        v606 = (*v605)--;
      if ( v606 <= 0 )
        j_j_j_j__ZdlPv_9(v386);
    sub_21E94B4((void **)&v645, "minecraft:behavior.wither_random_attack_pos_goal");
    v387 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v645);
    v388 = j_operator new(1u);
    LODWORD(v973) = v388;
    v389 = HIDWORD(v973);
    v973 = *(_QWORD *)v387;
    *(_DWORD *)v387 = v388;
    *(_DWORD *)(v387 + 4) = v389;
    v974 = *(void (**)(void))(v387 + 8);
    v390 = v974;
    *(_DWORD *)(v387 + 8) = sub_1A2C264;
    v975 = *(_DWORD *)(v387 + 12);
    *(_DWORD *)(v387 + 12) = sub_1A2C212;
    if ( v390 )
      v390();
    v391 = (void *)(v645 - 12);
    if ( (int *)(v645 - 12) != &dword_28898C0 )
      v607 = (unsigned int *)(v645 - 4);
          v608 = __ldrex(v607);
        while ( __strex(v608 - 1, v607) );
        v608 = (*v607)--;
      if ( v608 <= 0 )
        j_j_j_j__ZdlPv_9(v391);
    sub_21E94B4((void **)&v644, "minecraft:behavior.wither_target_highest_damage");
    v392 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v644);
    v393 = j_operator new(1u);
    LODWORD(v976) = v393;
    v394 = HIDWORD(v976);
    v976 = *(_QWORD *)v392;
    *(_DWORD *)v392 = v393;
    *(_DWORD *)(v392 + 4) = v394;
    v977 = *(void (**)(void))(v392 + 8);
    v395 = v977;
    *(_DWORD *)(v392 + 8) = sub_1A2C2DC;
    v978 = *(_DWORD *)(v392 + 12);
    *(_DWORD *)(v392 + 12) = sub_1A2C292;
    if ( v395 )
      v395();
    v396 = (void *)(v644 - 12);
    if ( (int *)(v644 - 12) != &dword_28898C0 )
      v609 = (unsigned int *)(v644 - 4);
          v610 = __ldrex(v609);
        while ( __strex(v610 - 1, v609) );
        v610 = (*v609)--;
      if ( v610 <= 0 )
        j_j_j_j__ZdlPv_9(v396);
    sub_21E94B4((void **)&v643, "minecraft:wither_target_highest_damage");
    v397 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v643);
    v398 = j_operator new(1u);
    LODWORD(v979) = v398;
    v399 = HIDWORD(v979);
    v979 = *(_QWORD *)v397;
    *(_DWORD *)v397 = v398;
    *(_DWORD *)(v397 + 4) = v399;
    v980 = *(void (**)(void))(v397 + 8);
    v400 = v980;
    *(_DWORD *)(v397 + 8) = sub_1A2C3F8;
    v981 = *(_DWORD *)(v397 + 12);
    *(_DWORD *)(v397 + 12) = sub_1A2C30C;
    if ( v400 )
      v400();
    v401 = (void *)(v643 - 12);
    if ( (int *)(v643 - 12) != &dword_28898C0 )
      v611 = (unsigned int *)(v643 - 4);
          v612 = __ldrex(v611);
        while ( __strex(v612 - 1, v611) );
        v612 = (*v611)--;
      if ( v612 <= 0 )
        j_j_j_j__ZdlPv_9(v401);
    sub_21E94B4((void **)&v642, "minecraft:behavior.float_wander");
    v402 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v642);
    v403 = j_operator new(1u);
    LODWORD(v982) = v403;
    v404 = HIDWORD(v982);
    v982 = *(_QWORD *)v402;
    *(_DWORD *)v402 = v403;
    *(_DWORD *)(v402 + 4) = v404;
    v983 = *(void (**)(void))(v402 + 8);
    v405 = v983;
    *(_DWORD *)(v402 + 8) = sub_1A2C4AE;
    v984 = *(_DWORD *)(v402 + 12);
    *(_DWORD *)(v402 + 12) = sub_1A2C426;
    if ( v405 )
      v405();
    v406 = (void *)(v642 - 12);
    if ( (int *)(v642 - 12) != &dword_28898C0 )
      v613 = (unsigned int *)(v642 - 4);
          v614 = __ldrex(v613);
        while ( __strex(v614 - 1, v613) );
        v614 = (*v613)--;
      if ( v614 <= 0 )
        j_j_j_j__ZdlPv_9(v406);
    sub_21E94B4((void **)&v641, "minecraft:behavior.trade_with_player");
    v407 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v641);
    v408 = j_operator new(1u);
    LODWORD(v985) = v408;
    v409 = HIDWORD(v985);
    v985 = *(_QWORD *)v407;
    *(_DWORD *)v407 = v408;
    *(_DWORD *)(v407 + 4) = v409;
    v986 = *(void (**)(void))(v407 + 8);
    v410 = v986;
    *(_DWORD *)(v407 + 8) = sub_1A2C522;
    v987 = *(_DWORD *)(v407 + 12);
    *(_DWORD *)(v407 + 12) = sub_1A2C4DC;
    if ( v410 )
      v410();
    v411 = (void *)(v641 - 12);
    if ( (int *)(v641 - 12) != &dword_28898C0 )
      v615 = (unsigned int *)(v641 - 4);
          v616 = __ldrex(v615);
        while ( __strex(v616 - 1, v615) );
        v616 = (*v615)--;
      if ( v616 <= 0 )
        j_j_j_j__ZdlPv_9(v411);
    sub_21E94B4((void **)&v640, "minecraft:behavior.look_at_trading_player");
    v412 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v640);
    v413 = j_operator new(1u);
    LODWORD(v988) = v413;
    v414 = HIDWORD(v988);
    v988 = *(_QWORD *)v412;
    *(_DWORD *)v412 = v413;
    *(_DWORD *)(v412 + 4) = v414;
    v989 = *(void (**)(void))(v412 + 8);
    v415 = v989;
    *(_DWORD *)(v412 + 8) = sub_1A2C9A8;
    v990 = *(_DWORD *)(v412 + 12);
    *(_DWORD *)(v412 + 12) = sub_1A2C550;
    if ( v415 )
      v415();
    v416 = (void *)(v640 - 12);
    if ( (int *)(v640 - 12) != &dword_28898C0 )
      v617 = (unsigned int *)(v640 - 4);
          v618 = __ldrex(v617);
        while ( __strex(v618 - 1, v617) );
        v618 = (*v617)--;
      if ( v618 <= 0 )
        j_j_j_j__ZdlPv_9(v416);
    sub_21E94B4((void **)&v639, "minecraft:behavior.summon_entity");
    v417 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v639);
    v418 = j_operator new(1u);
    LODWORD(v991) = v418;
    v419 = HIDWORD(v991);
    v991 = *(_QWORD *)v417;
    *(_DWORD *)v417 = v418;
    *(_DWORD *)(v417 + 4) = v419;
    v992 = *(void (**)(void))(v417 + 8);
    v420 = v992;
    *(_DWORD *)(v417 + 8) = sub_1A2CA20;
    v993 = *(_DWORD *)(v417 + 12);
    *(_DWORD *)(v417 + 12) = sub_1A2C9D6;
    if ( v420 )
      v420();
    v421 = (void *)(v639 - 12);
    if ( (int *)(v639 - 12) != &dword_28898C0 )
      v619 = (unsigned int *)(v639 - 4);
          v620 = __ldrex(v619);
        while ( __strex(v620 - 1, v619) );
        v620 = (*v619)--;
      if ( v620 <= 0 )
        j_j_j_j__ZdlPv_9(v421);
    sub_21E94B4((void **)&v638, "minecraft:behavior.send_event");
    v422 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v638);
    v423 = j_operator new(1u);
    LODWORD(v994) = v423;
    v424 = HIDWORD(v994);
    v994 = *(_QWORD *)v422;
    *(_DWORD *)v422 = v423;
    *(_DWORD *)(v422 + 4) = v424;
    v995 = *(void (**)(void))(v422 + 8);
    v425 = v995;
    *(_DWORD *)(v422 + 8) = sub_1A2CA98;
    v996 = *(_DWORD *)(v422 + 12);
    *(_DWORD *)(v422 + 12) = sub_1A2CA4E;
    if ( v425 )
      v425();
    v426 = (void *)(v638 - 12);
    if ( (int *)(v638 - 12) != &dword_28898C0 )
      v621 = (unsigned int *)(v638 - 4);
          v622 = __ldrex(v621);
        while ( __strex(v622 - 1, v621) );
        v622 = (*v621)--;
      if ( v622 <= 0 )
        j_j_j_j__ZdlPv_9(v426);
    sub_21E94B4((void **)&v637, "minecraft:behavior.charge_attack");
    v427 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v637);
    v428 = j_operator new(1u);
    LODWORD(v997) = v428;
    v429 = HIDWORD(v997);
    v997 = *(_QWORD *)v427;
    *(_DWORD *)v427 = v428;
    *(_DWORD *)(v427 + 4) = v429;
    v998 = *(void (**)(void))(v427 + 8);
    v430 = v998;
    *(_DWORD *)(v427 + 8) = sub_1A2CB0C;
    v999 = *(_DWORD *)(v427 + 12);
    *(_DWORD *)(v427 + 12) = sub_1A2CAC6;
    if ( v430 )
      v430();
    v431 = (void *)(v637 - 12);
    if ( (int *)(v637 - 12) != &dword_28898C0 )
      v623 = (unsigned int *)(v637 - 4);
          v624 = __ldrex(v623);
        while ( __strex(v624 - 1, v623) );
        v624 = (*v623)--;
      if ( v624 <= 0 )
        j_j_j_j__ZdlPv_9(v431);
    sub_21E94B4((void **)&v636, "minecraft:behavior.vex_random_move");
    v432 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v636);
    v433 = j_operator new(1u);
    LODWORD(v1000) = v433;
    v434 = HIDWORD(v1000);
    v1000 = *(_QWORD *)v432;
    *(_DWORD *)v432 = v433;
    *(_DWORD *)(v432 + 4) = v434;
    v1001 = *(void (**)(void))(v432 + 8);
    v435 = v1001;
    *(_DWORD *)(v432 + 8) = sub_1A2CB80;
    v1002 = *(_DWORD *)(v432 + 12);
    *(_DWORD *)(v432 + 12) = sub_1A2CB3A;
    if ( v435 )
      v435();
    v436 = (void *)(v636 - 12);
    if ( (int *)(v636 - 12) != &dword_28898C0 )
      v625 = (unsigned int *)(v636 - 4);
          v626 = __ldrex(v625);
        while ( __strex(v626 - 1, v625) );
        v626 = (*v625)--;
      if ( v626 <= 0 )
        j_j_j_j__ZdlPv_9(v436);
    sub_21E94B4((void **)&v635, "minecraft:behavior.vex_copy_owner_target");
    v437 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v635);
    v438 = j_operator new(1u);
    LODWORD(v1003) = v438;
    v439 = HIDWORD(v1003);
    v1003 = *(_QWORD *)v437;
    *(_DWORD *)v437 = v438;
    *(_DWORD *)(v437 + 4) = v439;
    v1004 = *(void (**)(void))(v437 + 8);
    v440 = v1004;
    *(_DWORD *)(v437 + 8) = sub_1A2CBF8;
    v1005 = *(_DWORD *)(v437 + 12);
    *(_DWORD *)(v437 + 12) = sub_1A2CBAE;
    if ( v440 )
      v440();
    v441 = (void *)(v635 - 12);
    if ( (int *)(v635 - 12) != &dword_28898C0 )
      v627 = (unsigned int *)(v635 - 4);
          v628 = __ldrex(v627);
        while ( __strex(v628 - 1, v627) );
        v628 = (*v627)--;
      if ( v628 <= 0 )
        j_j_j_j__ZdlPv_9(v441);
    sub_21E94B4((void **)&v634, "minecraft:behavior.pickup_items");
    v442 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v634);
    v443 = j_operator new(1u);
    LODWORD(v1006) = v443;
    v444 = HIDWORD(v1006);
    v1006 = *(_QWORD *)v442;
    *(_DWORD *)v442 = v443;
    *(_DWORD *)(v442 + 4) = v444;
    v1007 = *(void (**)(void))(v442 + 8);
    v445 = v1007;
    *(_DWORD *)(v442 + 8) = sub_1A2CC96;
    v1008 = *(_DWORD *)(v442 + 12);
    *(_DWORD *)(v442 + 12) = sub_1A2CC26;
    if ( v445 )
      v445();
    v446 = (void *)(v634 - 12);
    if ( (int *)(v634 - 12) != &dword_28898C0 )
      v629 = (unsigned int *)(v634 - 4);
          v630 = __ldrex(v629);
        while ( __strex(v630 - 1, v629) );
        v630 = (*v629)--;
      if ( v630 <= 0 )
        j_j_j_j__ZdlPv_9(v446);
    sub_21E94B4((void **)&v633, "minecraft:behavior.share_items");
    v447 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)&v633);
    v448 = j_operator new(1u);
    LODWORD(v1009) = v448;
    v449 = HIDWORD(v1009);
    v1009 = *(_QWORD *)v447;
    *(_DWORD *)v447 = v448;
    *(_DWORD *)(v447 + 4) = v449;
    v1010 = *(void (**)(void))(v447 + 8);
    v450 = v1010;
    *(_DWORD *)(v447 + 8) = sub_1A2CD26;
    v1011 = *(_DWORD *)(v447 + 12);
    *(_DWORD *)(v447 + 12) = sub_1A2CCC4;
    if ( v450 )
      v450();
    v451 = (void *)(v633 - 12);
    if ( (int *)(v633 - 12) != &dword_28898C0 )
      v631 = (unsigned int *)(v633 - 4);
          v632 = __ldrex(v631);
        while ( __strex(v632 - 1, v631) );
        v632 = (*v631)--;
      if ( v632 <= 0 )
        j_j_j_j__ZdlPv_9(v451);
    for ( i = unk_28274A8; i; i = *(_DWORD *)i )
      j_Description::registerJsonName((int **)(i + 4));
    result = j_DocumentationSystem::registerDocumentation();
  }
  return result;
}


int __fastcall GoalDefinition::CreateGoal(GoalDefinition *this, Mob *a2, const GoalDefinition *a3)
{
  GoalDefinition *v3; // r6@1
  const GoalDefinition *v4; // r4@1
  Mob *v5; // r7@1
  int v6; // r0@1
  int result; // r0@3

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = j_std::_Hashtable<std::string,std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<Goal,std::default_delete<Goal>> ()(Mob &,GoalDefinition const&)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)&GoalDefinition::mGoalMap,
         (int **)a3);
  if ( v6 )
  {
    if ( !*(_DWORD *)(v6 + 16) )
      sub_21E5F48();
    result = (*(int (__fastcall **)(GoalDefinition *, int, Mob *, const GoalDefinition *))(v6 + 20))(v3, v6 + 8, v5, v4);
  }
  else
    result = 0;
    *(_DWORD *)v3 = 0;
  return result;
}


GoalDefinition *__fastcall GoalDefinition::~GoalDefinition(GoalDefinition *this)
{
  GoalDefinition *v1; // r6@1
  int v2; // r9@1
  int v3; // r11@1
  int v4; // r4@3
  int v5; // r7@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  int v8; // r1@13
  void *v9; // r0@13
  int v10; // r5@22
  int v11; // r11@22
  int v12; // r7@23
  int v13; // r9@23
  unsigned int *v14; // r2@25
  signed int v15; // r1@27
  unsigned int *v16; // r2@29
  signed int v17; // r1@31
  unsigned int *v18; // r2@33
  signed int v19; // r1@35
  int v20; // r1@49
  void *v21; // r0@49
  int v22; // r1@50
  void *v23; // r0@50
  int v24; // r1@51
  void *v25; // r0@51
  void *v26; // r0@60
  int v27; // r1@62
  void *v28; // r0@62
  int v29; // r1@63
  void *v30; // r0@63
  FilterGroup *v31; // r0@64
  FilterGroup *v32; // r4@64
  int *v33; // r0@69
  unsigned int *v35; // r2@71
  signed int v36; // r1@73
  unsigned int *v37; // r2@75
  signed int v38; // r1@77
  unsigned int *v39; // r2@79
  signed int v40; // r1@81
  GoalDefinition *v41; // [sp+4h] [bp-44h]@2

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 340) >> 32;
  v3 = *(_QWORD *)((char *)this + 340);
  if ( v3 != v2 )
  {
    v41 = this;
    do
    {
      v4 = *(_QWORD *)(v3 + 60) >> 32;
      v5 = *(_QWORD *)(v3 + 60);
      if ( v5 != v4 )
      {
        do
        {
          v8 = *(_DWORD *)(v5 + 4);
          v9 = (void *)(v8 - 12);
          if ( (int *)(v8 - 12) != &dword_28898C0 )
          {
            v6 = (unsigned int *)(v8 - 4);
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
              j_j_j_j__ZdlPv_9(v9);
          }
          v5 += 12;
        }
        while ( v5 != v4 );
        v5 = *(_DWORD *)(v3 + 60);
      }
      if ( v5 )
        operator delete((void *)v5);
      FilterGroup::~FilterGroup((FilterGroup *)(v3 + 24));
      v3 += 72;
    }
    while ( v3 != v2 );
    v1 = v41;
    v3 = *((_DWORD *)v41 + 85);
  }
  if ( v3 )
    operator delete((void *)v3);
  v11 = *((_QWORD *)v1 + 41) >> 32;
  v10 = *((_QWORD *)v1 + 41);
  if ( v10 != v11 )
      v13 = *(_QWORD *)(v10 + 56) >> 32;
      v12 = *(_QWORD *)(v10 + 56);
      if ( v12 != v13 )
          v20 = *(_DWORD *)(v12 + 40);
          v21 = (void *)(v20 - 12);
          if ( (int *)(v20 - 12) != &dword_28898C0 )
            v14 = (unsigned int *)(v20 - 4);
                v15 = __ldrex(v14);
              while ( __strex(v15 - 1, v14) );
              v15 = (*v14)--;
            if ( v15 <= 0 )
              j_j_j_j__ZdlPv_9(v21);
          v22 = *(_DWORD *)(v12 + 36);
          v23 = (void *)(v22 - 12);
          if ( (int *)(v22 - 12) != &dword_28898C0 )
            v16 = (unsigned int *)(v22 - 4);
                v17 = __ldrex(v16);
              while ( __strex(v17 - 1, v16) );
              v17 = (*v16)--;
            if ( v17 <= 0 )
              j_j_j_j__ZdlPv_9(v23);
          v24 = *(_DWORD *)(v12 + 32);
          v25 = (void *)(v24 - 12);
          if ( (int *)(v24 - 12) != &dword_28898C0 )
            v18 = (unsigned int *)(v24 - 4);
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
              v19 = (*v18)--;
            if ( v19 <= 0 )
              j_j_j_j__ZdlPv_9(v25);
          v12 += 56;
        while ( v12 != v13 );
        v12 = *(_DWORD *)(v10 + 56);
      if ( v12 )
        operator delete((void *)v12);
      FilterGroup::~FilterGroup((FilterGroup *)(v10 + 16));
      v10 += 72;
    while ( v10 != v11 );
    v10 = *((_DWORD *)v1 + 82);
  if ( v10 )
    operator delete((void *)v10);
  std::_Rb_tree<Block const*,Block const*,std::_Identity<Block const*>,std::less<Block const*>,std::allocator<Block const*>>::_M_erase(
    (int)v1 + 284,
    *((_DWORD *)v1 + 73));
  v26 = (void *)*((_DWORD *)v1 + 65);
  if ( v26 )
    operator delete(v26);
  FilterGroup::~FilterGroup((GoalDefinition *)((char *)v1 + 148));
  v27 = *((_DWORD *)v1 + 36);
  v28 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
    else
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = *((_DWORD *)v1 + 35);
  v30 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v29 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  FilterGroup::~FilterGroup((GoalDefinition *)((char *)v1 + 80));
  v32 = (FilterGroup *)(*((_QWORD *)v1 + 5) >> 32);
  v31 = (FilterGroup *)*((_QWORD *)v1 + 5);
  if ( v31 != v32 )
      v31 = (FilterGroup *)((char *)FilterGroup::~FilterGroup(v31) + 48);
    while ( v32 != v31 );
    v31 = (FilterGroup *)*((_DWORD *)v1 + 10);
  if ( v31 )
    operator delete((void *)v31);
  v33 = (int *)(*(_DWORD *)v1 - 12);
  if ( v33 != &dword_28898C0 )
    v39 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  return v1;
}


signed int __fastcall GoalDefinition::GoalExists(unsigned int *a1)
{
  unsigned int v1; // r9@1
  unsigned int v2; // r10@1
  int v3; // r11@1
  signed int *v4; // r6@1
  signed int v5; // r7@2
  _DWORD *v6; // r8@2
  int v7; // r4@2
  _DWORD *v8; // r1@4
  size_t v9; // r2@4
  signed int v10; // r5@6
  signed int v11; // r5@8
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  void *s1; // [sp+4h] [bp-2Ch]@1

  j_Util::toLower(&s1, *(_DWORD *)(*a1 - 12), *a1);
  v1 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v2 = unk_28274A4;
  v3 = v1 % unk_28274A4;
  v4 = *(signed int **)(GoalDefinition::mGoalMap + 4 * (v1 % unk_28274A4));
  if ( v4 )
  {
    v5 = *v4;
    v6 = s1;
    v7 = *(_DWORD *)(*v4 + 24);
    while ( 1 )
    {
      if ( v7 == v1 )
      {
        v8 = *(_DWORD **)(v5 + 4);
        v9 = *(v6 - 3);
        if ( v9 == *(v8 - 3) && !j_memcmp_0(v6, v8, v9) )
          break;
      }
      v10 = *(_DWORD *)v5;
      if ( !*(_DWORD *)v5 )
        v11 = 0;
        goto LABEL_11;
      v7 = *(_DWORD *)(v10 + 24);
      v4 = (signed int *)v5;
      v5 = *(_DWORD *)v5;
      if ( *(_DWORD *)(v10 + 24) % v2 != v3 )
    }
    if ( v4 )
      v11 = *v4;
      if ( *v4 )
        v11 = 1;
    else
      v11 = 0;
  }
  else
    v11 = 0;
LABEL_11:
  if ( v6 - 3 != &dword_28898C0 )
    v13 = v6 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6 - 3);
  return v11;
}


_DWORD *__fastcall GoalDefinition::GoalDefinition(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r7@1
  _DWORD *v3; // r5@1
  int *v4; // r12@1
  _DWORD *v5; // r1@1
  int v6; // r0@1
  int v7; // r2@1
  int v8; // r3@1
  int v9; // r6@1
  int v10; // r1@1
  int v11; // r2@1
  int v12; // r3@1
  int v13; // r4@1
  int v14; // r6@1
  int v15; // r0@1
  int v16; // r0@1
  int v17; // r1@1
  int v18; // r3@1
  int v19; // r6@1
  int v20; // r1@1
  int v21; // r3@1
  int v22; // r4@1
  int v23; // r6@1
  int v24; // r3@1
  int v25; // r4@1
  int v26; // r6@1
  int v27; // r3@1
  int v28; // r1@1
  int v29; // r4@1
  int v30; // r6@1
  int v31; // r0@1
  int v32; // r1@1
  int v33; // r1@1
  int v34; // r2@1
  int v35; // r3@1
  int v36; // r2@1
  int v37; // r2@3
  int v38; // r1@3
  int v39; // r3@3
  int v40; // r4@3
  int v41; // r6@3
  int v42; // r3@3
  int v43; // r0@3
  int v44; // r0@3
  int v45; // r0@3
  int v46; // r0@3
  int v47; // r1@3
  int v48; // r2@3

  v2 = a1;
  v3 = a2;
  v4 = a2 + 1;
  *a1 = *a2;
  v5 = a1 + 1;
  *v3 = &unk_28898CC;
  v6 = *v4;
  v7 = v4[1];
  v8 = v4[2];
  v9 = v4[3];
  v4 += 4;
  *v5 = v6;
  v5[1] = v7;
  v5[2] = v8;
  v5[3] = v9;
  v10 = (int)(v2 + 5);
  v11 = v4[1];
  v12 = v4[2];
  v13 = v4[3];
  v14 = v4[4];
  *(_DWORD *)v10 = *v4;
  *(_DWORD *)(v10 + 4) = v11;
  *(_DWORD *)(v10 + 8) = v12;
  *(_DWORD *)(v10 + 12) = v13;
  *(_DWORD *)(v10 + 16) = v14;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[10] = v3[10];
  v3[10] = 0;
  v15 = v2[11];
  v2[11] = v3[11];
  v3[11] = v15;
  v16 = v2[12];
  v2[12] = v3[12];
  v17 = (int)(v2 + 13);
  v3[12] = v16;
  v18 = v3[14];
  v19 = v3[15];
  *(_DWORD *)v17 = v3[13];
  *(_DWORD *)(v17 + 4) = v18;
  *(_DWORD *)(v17 + 8) = v19;
  v20 = (int)(v2 + 16);
  v21 = v3[17];
  v22 = v3[18];
  v23 = v3[19];
  *(_DWORD *)v20 = v3[16];
  *(_DWORD *)(v20 + 4) = v21;
  *(_DWORD *)(v20 + 8) = v22;
  *(_DWORD *)(v20 + 12) = v23;
  FilterGroup::FilterGroup((int)(v2 + 20), (int)(v3 + 20));
  v24 = (int)(v2 + 28);
  v2[20] = &off_26F1930;
  v25 = v3[29];
  v26 = v3[30];
  *(_DWORD *)v24 = v3[28];
  *(_DWORD *)(v24 + 4) = v25;
  *(_DWORD *)(v24 + 8) = v26;
  v27 = (int)(v2 + 31);
  v28 = v3[32];
  v29 = v3[33];
  v30 = v3[34];
  *(_DWORD *)v27 = v3[31];
  *(_DWORD *)(v27 + 4) = v28;
  *(_DWORD *)(v27 + 8) = v29;
  *(_DWORD *)(v27 + 12) = v30;
  v2[35] = v3[35];
  v3[35] = &unk_28898CC;
  v2[36] = v3[36];
  v3[36] = &unk_28898CC;
  FilterGroup::FilterGroup((int)(v2 + 37), (int)(v3 + 37));
  v2[37] = &off_26F1930;
  _aeabi_memcpy4(v2 + 45, v3 + 45, 80);
  v2[65] = 0;
  v2[66] = 0;
  v31 = (int)(v2 + 68);
  v2[67] = 0;
  v2[65] = v3[65];
  v3[65] = 0;
  v32 = v2[66];
  v2[66] = v3[66];
  v3[66] = v32;
  v33 = v2[67];
  v2[67] = v3[67];
  v3[67] = v33;
  v34 = v3[69];
  v35 = v3[70];
  *(_DWORD *)v31 = v3[68];
  *(_DWORD *)(v31 + 4) = v34;
  *(_DWORD *)(v31 + 8) = v35;
  v2[72] = 0;
  v2[73] = 0;
  v2[74] = 0;
  v2[75] = 0;
  v2[76] = 0;
  v2[74] = v2 + 72;
  v2[75] = v2 + 72;
  v36 = v3[73];
  if ( v36 )
  {
    v2[73] = v36;
    v2[74] = v3[74];
    v2[75] = v3[75];
    *(_DWORD *)(v36 + 4) = v2 + 72;
    v3[73] = 0;
    v3[74] = v3 + 72;
    v3[75] = v3 + 72;
    v2[76] = v3[76];
    v3[76] = 0;
  }
  v37 = (int)(v2 + 77);
  v38 = v3[78];
  v39 = v3[79];
  v40 = v3[80];
  v41 = v3[81];
  *(_DWORD *)v37 = v3[77];
  *(_DWORD *)(v37 + 4) = v38;
  *(_DWORD *)(v37 + 8) = v39;
  *(_DWORD *)(v37 + 12) = v40;
  *(_DWORD *)(v37 + 16) = v41;
  v42 = (int)(v2 + 88);
  v2[82] = 0;
  v2[83] = 0;
  v2[84] = 0;
  v2[82] = v3[82];
  v3[82] = 0;
  v43 = v2[83];
  v2[83] = v3[83];
  v3[83] = v43;
  v44 = v2[84];
  v2[84] = v3[84];
  v3[84] = v44;
  v2[85] = 0;
  v2[86] = 0;
  v2[87] = 0;
  v2[85] = v3[85];
  v3[85] = 0;
  v45 = v2[86];
  v2[86] = v3[86];
  v3[86] = v45;
  v46 = v2[87];
  v2[87] = v3[87];
  v3[87] = v46;
  v47 = v3[89];
  v48 = v3[90];
  *(_DWORD *)v42 = v3[88];
  *(_DWORD *)(v42 + 4) = v47;
  *(_DWORD *)(v42 + 8) = v48;
  return v2;
}


signed int __fastcall GoalDefinition::parse(GoalDefinition *this, Json::Value *a2, int a3)
{
  Json::Value *v3; // r5@1
  GoalDefinition *v4; // r11@1
  int v5; // r6@1
  Json::Value *v6; // r7@1
  Json::Value *v7; // r0@3
  Json::Value *v8; // r0@3
  Json::Value *v9; // r0@3
  Json::Value *v10; // r0@3
  Json::Value *v11; // r0@3
  Json::Value *v16; // r0@3
  Json::Value *v17; // r0@3
  Json::Value *v18; // r0@3
  Json::Value *v19; // r0@3
  Json::Value *v20; // r0@3
  Json::Value *v21; // r0@3
  Json::Value *v22; // r0@3
  Json::Value *v23; // r0@3
  int v24; // r6@3
  void *v25; // r0@3
  void *v26; // r0@4
  Json::Value *v27; // r0@5
  Json::Value *v28; // r0@5
  Json::Value *v29; // r0@5
  const char *v30; // r3@5
  Json::Value *v31; // r0@5
  Json::Value *v32; // r0@5
  Json::Value *v33; // r0@5
  Json::Value *v34; // r0@5
  Json::Value *v35; // r0@5
  Json::Value *v36; // r0@5
  const Json::Value *v37; // r0@6
  JsonUtil *v38; // r0@7
  int *v39; // r3@7
  JsonUtil *v40; // r0@9
  int *v41; // r3@9
  Json::Value *v42; // r0@11
  int v43; // r6@11
  void *v44; // r0@11
  void *v45; // r0@12
  Json::Value *v46; // r0@13
  Json::Value *v47; // r0@13
  Json::Value *v48; // r0@13
  Json::Value *v49; // r0@13
  Json::Value *v50; // r0@13
  Json::Value *v51; // r0@13
  Json::Value *v52; // r0@13
  Json::Value *v53; // r0@13
  Json::Value *v54; // r0@13
  Json::Value *v55; // r0@13
  Json::Value *v56; // r0@13
  int v57; // r0@13
  Json::Value *v58; // r0@15
  int v59; // r0@15
  Json::Value *v60; // r0@17
  Json::Value *v61; // r0@17
  Json::Value *v62; // r0@17
  Json::Value *v63; // r0@17
  Json::Value *v64; // r0@17
  Json::Value *v65; // r0@17
  Json::Value *v66; // r0@17
  Json::Value *v67; // r6@17
  int v68; // r0@18
  Json::Value *v69; // r0@19
  Json::Value *v70; // r0@19
  Json::Value *v71; // r0@19
  Json::Value *v72; // r0@19
  Json::Value *v73; // r0@19
  Json::Value *v74; // r6@19
  Json::ValueIteratorBase *v75; // r10@21
  const char *v76; // r8@21
  int v77; // r7@22
  void *v78; // r0@22
  int *v79; // r0@23
  char *v80; // r1@24 OVERLAPPED
  __int16 v81; // r6@24
  char *v82; // r2@24
  _BYTE *v83; // r8@26
  char *v84; // r11@26
  unsigned int v85; // r2@26
  int v86; // r0@28
  int v87; // r7@28
  int v88; // r6@35
  int v89; // r6@37
  int v90; // r0@39
  void *v91; // r0@40
  unsigned int *v92; // r2@43
  signed int v93; // r1@45
  unsigned int *v94; // r2@47
  signed int v95; // r1@49
  Json::Value *v96; // r0@60
  Json::Value *v97; // r0@60
  Json::Value *v98; // r0@60
  Json::Value *v99; // r0@60
  void *v100; // r0@60
  Json::Value *v101; // r0@61
  Json::Value *v102; // r0@61
  Json::Value *v103; // r0@61
  Json::Value *v104; // r0@61
  Json::Value *v105; // r0@61
  Json::Value *v106; // r0@61
  const Json::Value *v107; // r0@61
  Json::Value *v108; // r7@61
  Json::Value *v109; // r0@64
  Json::Value *v110; // r6@68
  GoalDefinition *v111; // r4@69
  int *v112; // r6@70
  Json::ValueIteratorBase *v113; // r7@70
  const char *v114; // r10@70
  void **v115; // r9@70
  Json::Value *v116; // r0@71
  Json::Value *v117; // r11@71
  Json::Value *v118; // r0@71
  Json::Value *v120; // r0@71
  Json::Value *v122; // r0@71
  Json::Value *v124; // r0@71
  Json::Value *v126; // r0@71
  const Json::Value *v127; // r0@72
  int v128; // r6@73
  void *v129; // r0@73
  void *v130; // r0@74
  int v131; // r6@75
  Json::Value *v132; // r10@76
  int v133; // r6@76
  void *v134; // r0@76
  void *v135; // r0@77
  Json::Value *v136; // r0@78
  Json::Value *v138; // r0@78
  Json::Value *v140; // r0@78
  int v141; // r6@78
  void *v142; // r0@78
  void *v143; // r0@79
  void *v144; // r0@80
  void *v145; // r0@81
  EntityDefinitionIdentifier *v146; // r1@82
  char *v147; // r0@82
  Json::Value *v148; // r0@83
  Json::Value *v150; // r0@83
  int v152; // r6@83
  void *v153; // r0@83
  void *v154; // r0@84
  Json::Value *v155; // r0@85
  Json::Value *v156; // r0@85
  int v158; // r6@85
  void *v159; // r0@85
  void *v160; // r0@86
  char *v163; // r10@92
  int v164; // r3@93
  float v165; // r6@93
  float v166; // r7@93
  int v167; // r1@93
  int v168; // r3@93
  int v169; // r6@93
  int v170; // r7@93
  __int64 v171; // r0@93
  void *v172; // r0@95
  void *v173; // r0@96
  void *v174; // r0@97
  unsigned int *v175; // r2@99
  signed int v176; // r1@101
  unsigned int *v177; // r2@103
  signed int v178; // r1@105
  unsigned int *v179; // r2@107
  signed int v180; // r1@109
  unsigned int *v181; // r2@111
  signed int v182; // r1@113
  unsigned int *v183; // r2@115
  signed int v184; // r1@117
  unsigned int *v185; // r2@119
  signed int v186; // r1@121
  unsigned int *v187; // r2@123
  unsigned int *v188; // r2@127
  signed int v189; // r1@129
  unsigned int *v190; // r2@131
  signed int v191; // r1@133
  unsigned int *v192; // r2@143
  signed int v193; // r1@145
  unsigned int *v194; // r2@147
  signed int v195; // r1@149
  unsigned int *v196; // r2@151
  signed int v197; // r1@153
  unsigned int *v198; // r2@155
  signed int v199; // r1@157
  unsigned int *v200; // r2@159
  signed int v201; // r1@161
  Json::Value *v202; // r0@212
  __int64 v205; // kr08_8@213
  float v206; // r1@214
  float v207; // r2@214
  float v208; // r3@214
  unsigned int v209; // r0@214
  unsigned int v210; // r10@214
  char *v211; // r2@214
  unsigned int *v212; // r2@218
  signed int v213; // r1@220
  unsigned int *v214; // r2@222
  signed int v215; // r1@224
  Json::Value *v216; // r5@239
  GoalDefinition *v217; // r4@240
  int *v218; // r6@241
  Json::ValueIteratorBase *v219; // r7@241
  const char *v220; // r5@241
  Color *v221; // r11@241
  void **v222; // r10@241
  Json::Value *v223; // r0@242
  Json::Value *v224; // r8@242
  Json::Value *v225; // r0@242
  Color *v226; // r9@242
  Json::Value *v228; // r0@242
  Json::Value *v230; // r0@242
  Json::Value *v232; // r0@242
  Json::Value *v234; // r0@242
  int v235; // r7@242
  void *v236; // r0@242
  void *v237; // r0@243
  const Json::Value *v238; // r0@245
  int v239; // r7@246
  Json::Value *v240; // r0@247
  Json::Value *v241; // r11@247
  Json::Value *v242; // r0@247
  int v244; // r7@247
  void *v245; // r0@247
  void *v246; // r0@248
  int v247; // r7@249
  void *v248; // r0@249
  void *v249; // r0@250
  int *v250; // r6@251
  char *v252; // r0@254
  unsigned int *v253; // r2@256
  signed int v254; // r1@258
  unsigned int *v255; // r2@260
  signed int v256; // r1@262
  unsigned int *v257; // r2@264
  signed int v258; // r1@266
  unsigned int *v259; // r2@268
  signed int v260; // r1@270
  unsigned int *v261; // r2@272
  signed int v262; // r1@274
  Json::Value *v263; // r0@297
  __int64 v266; // kr10_8@297
  float v267; // r2@298
  float v268; // r3@298
  float v269; // r5@298
  float v270; // r6@298
  int v271; // r7@298
  unsigned int v272; // r0@298
  unsigned int v273; // r6@298
  char *v274; // r2@298
  signed int v275; // r11@302
  unsigned int *v276; // r2@303
  signed int v277; // r1@305
  unsigned int *v278; // r2@307
  signed int v279; // r1@309
  int *v280; // r6@321
  int v281; // r7@321
  unsigned int *v282; // r2@323
  signed int v283; // r1@325
  int v284; // r1@331
  void *v285; // r0@331
  unsigned int *v287; // r2@342
  signed int v288; // r1@344
  unsigned int *v289; // r2@346
  signed int v290; // r1@348
  unsigned int *v291; // r2@350
  signed int v292; // r1@352
  unsigned int *v293; // r2@354
  signed int v294; // r1@356
  unsigned int *v295; // r2@358
  signed int v296; // r1@360
  unsigned __int64 *v297; // [sp+38h] [bp-298h]@70
  unsigned __int64 *v298; // [sp+40h] [bp-290h]@241
  GoalDefinition *v299; // [sp+64h] [bp-26Ch]@1
  int v300; // [sp+6Ch] [bp-264h]@249
  int v301; // [sp+70h] [bp-260h]@249
  int v302; // [sp+78h] [bp-258h]@247
  int v303; // [sp+7Ch] [bp-254h]@247
  int v304; // [sp+80h] [bp-250h]@247
  char *v305; // [sp+84h] [bp-24Ch]@247
  char v306; // [sp+88h] [bp-248h]@249
  char v307; // [sp+8Ch] [bp-244h]@246
  char v308; // [sp+94h] [bp-23Ch]@246
  int v309; // [sp+A0h] [bp-230h]@242
  int v310; // [sp+A4h] [bp-22Ch]@242
  char v311; // [sp+A8h] [bp-228h]@241
  float v312; // [sp+ACh] [bp-224h]@242
  __int64 v313; // [sp+B0h] [bp-220h]@242
  int v314; // [sp+B8h] [bp-218h]@242
  float v315; // [sp+BCh] [bp-214h]@242
  float v316; // [sp+C0h] [bp-210h]@242
  float v317; // [sp+C4h] [bp-20Ch]@242
  float v318; // [sp+C8h] [bp-208h]@242
  int v319; // [sp+CCh] [bp-204h]@242
  void **v320; // [sp+D0h] [bp-200h]@242
  int v321; // [sp+D4h] [bp-1FCh]@241
  char v322; // [sp+F0h] [bp-1E0h]@242
  int *v323; // [sp+F4h] [bp-1DCh]@242
  int *v324; // [sp+F8h] [bp-1D8h]@242
  int *v325; // [sp+FCh] [bp-1D4h]@242
  char v326; // [sp+104h] [bp-1CCh]@240
  char v327; // [sp+10Ch] [bp-1C4h]@240
  int v328; // [sp+118h] [bp-1B8h]@85
  int v329; // [sp+11Ch] [bp-1B4h]@85
  int v330; // [sp+124h] [bp-1ACh]@83
  int v331; // [sp+128h] [bp-1A8h]@83
  EntityDefinitionIdentifier *v332; // [sp+130h] [bp-1A0h]@78
  int v333; // [sp+134h] [bp-19Ch]@78
  int v334; // [sp+138h] [bp-198h]@78
  int v335; // [sp+13Ch] [bp-194h]@79
  int v336; // [sp+140h] [bp-190h]@78
  int v337; // [sp+148h] [bp-188h]@76
  int v338; // [sp+14Ch] [bp-184h]@76
  int v339; // [sp+150h] [bp-180h]@76
  int v340; // [sp+154h] [bp-17Ch]@76
  float v341; // [sp+158h] [bp-178h]@76
  float v342; // [sp+15Ch] [bp-174h]@76
  float v343; // [sp+160h] [bp-170h]@76
  int v344; // [sp+164h] [bp-16Ch]@76
  int v345; // [sp+168h] [bp-168h]@76
  int v346; // [sp+16Ch] [bp-164h]@83
  int v347; // [sp+170h] [bp-160h]@76
  int v348; // [sp+174h] [bp-15Ch]@96
  int v349; // [sp+178h] [bp-158h]@95
  int v350; // [sp+17Ch] [bp-154h]@76
  int v351; // [sp+180h] [bp-150h]@76
  char v352; // [sp+184h] [bp-14Ch]@85
  char v353; // [sp+18Ch] [bp-144h]@75
  char v354; // [sp+194h] [bp-13Ch]@75
  int v355; // [sp+1A0h] [bp-130h]@73
  int v356; // [sp+1A4h] [bp-12Ch]@73
  int v357; // [sp+1A8h] [bp-128h]@71
  float v358; // [sp+1ACh] [bp-124h]@71
  __int64 v359; // [sp+1B0h] [bp-120h]@71
  int v360; // [sp+1B8h] [bp-118h]@71
  float v361; // [sp+1BCh] [bp-114h]@71
  float v362; // [sp+1C0h] [bp-110h]@71
  float v363; // [sp+1C4h] [bp-10Ch]@71
  void **v364; // [sp+1C8h] [bp-108h]@71
  int v365; // [sp+1CCh] [bp-104h]@70
  float v366; // [sp+1E8h] [bp-E8h]@71
  int v367; // [sp+1ECh] [bp-E4h]@71
  char *v368; // [sp+1F0h] [bp-E0h]@71
  char *v369; // [sp+1F4h] [bp-DCh]@71
  char *v370; // [sp+1F8h] [bp-D8h]@71
  char v371; // [sp+1FCh] [bp-D4h]@73
  char v372; // [sp+200h] [bp-D0h]@69
  char v373; // [sp+208h] [bp-C8h]@69
  char v374; // [sp+210h] [bp-C0h]@61
  char v375; // [sp+220h] [bp-B0h]@60
  int v376; // [sp+238h] [bp-98h]@60
  int v377; // [sp+240h] [bp-90h]@22
  int v378; // [sp+244h] [bp-8Ch]@22
  char v379; // [sp+248h] [bp-88h]@20
  char v380; // [sp+250h] [bp-80h]@20
  int v381; // [sp+25Ch] [bp-74h]@11
  int v382; // [sp+260h] [bp-70h]@11
  int v383; // [sp+268h] [bp-68h]@3
  int v384; // [sp+26Ch] [bp-64h]@3
  char v385; // [sp+270h] [bp-60h]@63
  char v386; // [sp+278h] [bp-58h]@63

  v3 = a2;
  v4 = this;
  v5 = a3;
  v299 = this;
  v6 = (Json::Value *)j_Json::Value::operator[](a2, "priority");
  if ( !j_Json::Value::isNull(v6) )
    v5 = j_Json::Value::asInt(v6, 0);
  *((_DWORD *)v4 + 1) = v5;
  v7 = (Json::Value *)j_Json::Value::operator[](v3, "control_flags");
  *((_DWORD *)v4 + 2) = j_controlFlagsFromArr(v7);
  v8 = (Json::Value *)j_Json::Value::operator[](v3, "must_see");
  *((_WORD *)v4 + 126) = j_Json::Value::asBool(v8, 0) | *((_WORD *)v4 + 126) & 0xFFFE;
  v9 = (Json::Value *)j_Json::Value::operator[](v3, "must_reach");
  *((_WORD *)v4 + 126) = *((_WORD *)v4 + 126) & 0xFFFD | 2 * j_Json::Value::asBool(v9, 0);
  v10 = (Json::Value *)j_Json::Value::operator[](v3, "within_default");
  *((_DWORD *)v4 + 3) = j_Json::Value::asFloat(v10, 16.0);
  v11 = (Json::Value *)j_Json::Value::operator[](v3, "must_see_forget_duration");
  _R0 = j_Json::Value::asFloat(v11, 3.0);
  __asm
  {
    VMOV.F32        S16, #20.0
    VMOV            S0, R0
    VMUL.F32        S0, S0, S16
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R11,#0x100]
  }
  v16 = (Json::Value *)j_Json::Value::operator[](v3, "alert_same_type");
  *((_WORD *)v4 + 126) = *((_WORD *)v4 + 126) & 0xFF7F | ((unsigned __int16)j_Json::Value::asBool(v16, 0) << 7);
  v17 = (Json::Value *)j_Json::Value::operator[](v3, "hurt_owner");
  *((_BYTE *)v4 + 254) = j_Json::Value::asBool(v17, 0);
  v18 = (Json::Value *)j_Json::Value::operator[](v3, "reselect_targets");
  *((_WORD *)v4 + 126) = *((_WORD *)v4 + 126) & 0xFEFF | ((unsigned __int16)j_Json::Value::asBool(v18, 0) << 8);
  v19 = (Json::Value *)j_Json::Value::operator[](v3, "max_dist");
  *((_DWORD *)v4 + 4) = j_Json::Value::asFloat(v19, 0.0);
  v20 = (Json::Value *)j_Json::Value::operator[](v3, "walk_speed_multiplier");
  *((_DWORD *)v4 + 5) = j_Json::Value::asFloat(v20, 1.0);
  v21 = (Json::Value *)j_Json::Value::operator[](v3, "sprint_speed_multiplier");
  *((_DWORD *)v4 + 6) = j_Json::Value::asFloat(v21, 1.0);
  v22 = (Json::Value *)j_Json::Value::operator[](v3, "probability_per_strength");
  *((_DWORD *)v4 + 7) = j_Json::Value::asFloat(v22, 1.0);
  v23 = (Json::Value *)j_Json::Value::operator[](v3, "sneak_speed_multiplier");
  *((_DWORD *)v4 + 8) = j_Json::Value::asFloat(v23, 1.0);
  v24 = j_Json::Value::operator[](v3, "entity_type");
  sub_21E94B4((void **)&v383, (const char *)&unk_257BC67);
  j_Json::Value::asString(&v384, v24, &v383);
  *((_DWORD *)v4 + 9) = j_EntityTypeFromString((const void **)&v384);
  v25 = (void *)(v384 - 12);
  if ( (int *)(v384 - 12) != &dword_28898C0 )
    v287 = (unsigned int *)(v384 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v288 = __ldrex(v287);
      while ( __strex(v288 - 1, v287) );
    }
    else
      v288 = (*v287)--;
    if ( v288 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v383 - 12);
  if ( (int *)(v383 - 12) != &dword_28898C0 )
    v289 = (unsigned int *)(v383 - 4);
        v290 = __ldrex(v289);
      while ( __strex(v290 - 1, v289) );
      v290 = (*v289)--;
    if ( v290 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (Json::Value *)j_Json::Value::operator[](v3, "start_distance");
  *((_DWORD *)v4 + 13) = j_Json::Value::asFloat(v27, 10.0);
  v28 = (Json::Value *)j_Json::Value::operator[](v3, "stop_distance");
  *((_DWORD *)v4 + 14) = j_Json::Value::asFloat(v28, 2.0);
  v29 = (Json::Value *)j_Json::Value::operator[](v3, "entity_count");
  *((_DWORD *)v4 + 51) = j_Json::Value::asInt(v29, 1);
  j_Parser::parseTrigger(v3, (GoalDefinition *)((char *)v4 + 140), (DefinitionTrigger *)"on_eat", v30);
  v31 = (Json::Value *)j_Json::Value::operator[](v3, "yd");
  *((_DWORD *)v4 + 15) = j_Json::Value::asFloat(v31, 0.0);
  v32 = (Json::Value *)j_Json::Value::operator[](v3, "must_be_on_ground");
  *((_WORD *)v4 + 126) = *((_WORD *)v4 + 126) & 0xFFDF | 32 * j_Json::Value::asBool(v32, 1);
  v33 = (Json::Value *)j_Json::Value::operator[](v3, "look_distance");
  *((_DWORD *)v4 + 16) = j_Json::Value::asFloat(v33, 8.0);
  v34 = (Json::Value *)j_Json::Value::operator[](v3, "probability");
  *((_DWORD *)v4 + 19) = j_Json::Value::asFloat(v34, 0.02);
  v35 = (Json::Value *)j_Json::Value::operator[](v3, "angle_of_view_vertical");
  *((_DWORD *)v4 + 17) = j_Json::Value::asInt(v35, 360);
  v36 = (Json::Value *)j_Json::Value::operator[](v3, "angle_of_view_horizontal");
  *((_DWORD *)v4 + 18) = j_Json::Value::asInt(v36, 360);
  if ( j_Json::Value::isMember(v3, "filters") != 1
    || (v37 = (const Json::Value *)j_Json::Value::operator[](v3, "filters"),
        j_FilterGroup::parse((GoalDefinition *)((char *)v4 + 80), v37)) )
    v38 = (JsonUtil *)j_Json::Value::operator[](v3, "look_time");
    if ( !j_JsonUtil::parseRange(v38, (GoalDefinition *)((char *)v4 + 112), (int *)v4 + 29, v39) )
      *((_DWORD *)v4 + 28) = 2;
      *((_DWORD *)v4 + 29) = 4;
    v40 = (JsonUtil *)j_Json::Value::operator[](v3, "look_around_time");
    if ( !j_JsonUtil::parseRange(v40, (GoalDefinition *)((char *)v4 + 120), (int *)v4 + 31, v41) )
      *((_DWORD *)v4 + 30) = 1;
      *((_DWORD *)v4 + 31) = 2;
    v42 = (Json::Value *)j_Json::Value::operator[](v3, "track_target");
    *((_WORD *)v4 + 126) = *((_WORD *)v4 + 126) & 0xFFBF | ((unsigned __int16)j_Json::Value::asBool(v42, 0) << 6);
    v43 = j_Json::Value::operator[](v3, "attack_types");
    sub_21E94B4((void **)&v381, (const char *)&unk_257BC67);
    j_Json::Value::asString(&v382, v43, &v381);
    *((_DWORD *)v4 + 32) = j_entityCategoriesFromString(&v382);
    v44 = (void *)(v382 - 12);
    if ( (int *)(v382 - 12) != &dword_28898C0 )
      v291 = (unsigned int *)(v382 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v292 = __ldrex(v291);
        while ( __strex(v292 - 1, v291) );
      }
      else
        v292 = (*v291)--;
      if ( v292 <= 0 )
        j_j_j_j__ZdlPv_9(v44);
    v45 = (void *)(v381 - 12);
    if ( (int *)(v381 - 12) != &dword_28898C0 )
      v293 = (unsigned int *)(v381 - 4);
          v294 = __ldrex(v293);
        while ( __strex(v294 - 1, v293) );
        v294 = (*v293)--;
      if ( v294 <= 0 )
        j_j_j_j__ZdlPv_9(v45);
    v46 = (Json::Value *)j_Json::Value::operator[](v3, "random_stop_interval");
    *((_DWORD *)v4 + 33) = j_Json::Value::asInt(v46, 0);
    v47 = (Json::Value *)j_Json::Value::operator[](v3, "reach_multiplier");
    *((_DWORD *)v4 + 34) = j_Json::Value::asFloat(v47, 2.0);
    v48 = (Json::Value *)j_Json::Value::operator[](v3, "target_dist");
    *((_DWORD *)v4 + 45) = j_Json::Value::asFloat(v48, 0.0);
    v49 = (Json::Value *)j_Json::Value::operator[](v3, "track_target");
    *((_WORD *)v4 + 126) = *((_WORD *)v4 + 126) & 0xFFBF | ((unsigned __int16)j_Json::Value::asBool(v49, 0) << 6);
    v50 = (Json::Value *)j_Json::Value::operator[](v3, "speed_multiplier");
    *((_DWORD *)v4 + 46) = j_Json::Value::asFloat(v50, 1.0);
    v51 = (Json::Value *)j_Json::Value::operator[](v3, "only_at_night");
    *((_WORD *)v4 + 126) = *((_WORD *)v4 + 126) & 0xFFEF | 16 * j_Json::Value::asBool(v51, 0);
    v52 = (Json::Value *)j_Json::Value::operator[](v3, "search_range");
    *((_DWORD *)v4 + 47) = j_Json::Value::asInt(v52, 0);
    v53 = (Json::Value *)j_Json::Value::operator[](v3, "goal_radius");
    *((_DWORD *)v4 + 48) = j_Json::Value::asFloat(v53, 0.5);
    v54 = (Json::Value *)j_Json::Value::operator[](v3, "within_radius");
    *((_DWORD *)v4 + 49) = j_Json::Value::asFloat(v54, 0.0);
    v55 = (Json::Value *)j_Json::Value::operator[](v3, "force");
    *((_BYTE *)v4 + 200) = j_Json::Value::asBool(v55, 0) | *((_BYTE *)v4 + 200) & 0xFE;
    v56 = (Json::Value *)j_Json::Value::operator[](v3, "xz_dist");
    v57 = j_Json::Value::asInt(v56, 10);
    if ( v57 <= 1 )
      v57 = 1;
    *((_DWORD *)v4 + 52) = v57;
    v58 = (Json::Value *)j_Json::Value::operator[](v3, "y_dist");
    v59 = j_Json::Value::asInt(v58, 7);
    if ( v59 <= 1 )
      v59 = 1;
    *((_DWORD *)v4 + 53) = v59;
    v60 = (Json::Value *)j_Json::Value::operator[](v3, "y_offset");
    *((_DWORD *)v4 + 54) = j_Json::Value::asFloat(v60, 0.0);
    v61 = (Json::Value *)j_Json::Value::operator[](v3, "can_land_on_trees");
    *((_BYTE *)v4 + 220) = j_Json::Value::asBool(v61, 1) | *((_BYTE *)v4 + 220) & 0xFE;
    v62 = (Json::Value *)j_Json::Value::operator[](v3, "speed_multiplier");
    *((_DWORD *)v4 + 46) = j_Json::Value::asFloat(v62, 1.0);
    v63 = (Json::Value *)j_Json::Value::operator[](v3, "burst_shots");
    *((_DWORD *)v4 + 61) = j_Json::Value::asInt(v63, 1);
    v64 = (Json::Value *)j_Json::Value::operator[](v3, "burst_interval");
    *((_DWORD *)v4 + 62) = j_Json::Value::asFloat(v64, 0.0);
    v65 = (Json::Value *)j_Json::Value::operator[](v3, "attack_interval_min");
    *((_DWORD *)v4 + 56) = j_Json::Value::asInt(v65, 0);
    v66 = (Json::Value *)j_Json::Value::operator[](v3, "attack_interval_max");
    *((_DWORD *)v4 + 57) = j_Json::Value::asInt(v66, 0);
    v67 = (Json::Value *)j_Json::Value::operator[](v3, "attack_interval");
    if ( j_Json::Value::isNumeric(v67) )
      v68 = j_Json::Value::asInt(v67, 0);
      *((_DWORD *)v4 + 56) = v68;
      *((_DWORD *)v4 + 57) = v68;
    v69 = (Json::Value *)j_Json::Value::operator[](v3, "attack_radius");
    *((_DWORD *)v4 + 58) = j_Json::Value::asFloat(v69, 0.0);
    v70 = (Json::Value *)j_Json::Value::operator[](v3, "charge_charged_trigger");
    *((_DWORD *)v4 + 59) = j_Json::Value::asFloat(v70, 0.0);
    v71 = (Json::Value *)j_Json::Value::operator[](v3, "charge_shoot_trigger");
    *((_DWORD *)v4 + 60) = j_Json::Value::asFloat(v71, 0.0);
    v72 = (Json::Value *)j_Json::Value::operator[](v3, "duration");
    *((_DWORD *)v4 + 81) = j_Json::Value::asFloat(v72, *((float *)v4 + 81));
    v73 = (Json::Value *)j_Json::Value::operator[](v3, "close_door_after");
    *((_WORD *)v4 + 126) = *((_WORD *)v4 + 126) & 0xFFFB | 4 * j_Json::Value::asBool(v73, 1);
    v74 = (Json::Value *)j_Json::Value::operator[](v3, "items");
    if ( j_Json::Value::isArray(v74) == 1 )
      j_Json::Value::begin((Json::Value *)&v380, (int)v74);
      j_Json::Value::end((Json::Value *)&v379, (int)v74);
      if ( !j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v380, (const Json::ValueIteratorBase *)&v379) )
        v75 = (Json::ValueIteratorBase *)&v380;
        v76 = (const char *)&unk_257BC67;
        {
          v77 = j_Json::ValueIteratorBase::deref(v75);
          sub_21E94B4((void **)&v377, v76);
          j_Json::Value::asString(&v378, v77, &v377);
          v78 = (void *)(v377 - 12);
          if ( (int *)(v377 - 12) != &dword_28898C0 )
          {
            v92 = (unsigned int *)(v377 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v93 = __ldrex(v92);
              while ( __strex(v93 - 1, v92) );
            }
            else
              v93 = (*v92)--;
            if ( v93 <= 0 )
              j_j_j_j__ZdlPv_9(v78);
          }
          v79 = j_Item::lookupByName((unsigned int *)&v378, 1);
          if ( v79 )
            *(_QWORD *)&v80 = *((_QWORD *)v4 + 33);
            v81 = *((_WORD *)v79 + 9);
            if ( v80 == v82 )
              v83 = (_BYTE *)*((_DWORD *)v4 + 65);
              v84 = 0;
              v85 = (v80 - v83) >> 1;
              if ( !v85 )
                v85 = 1;
              v86 = v85 + ((v80 - v83) >> 1);
              v87 = v85 + ((v80 - v83) >> 1);
              if ( v86 < 0 )
                v87 = 0x7FFFFFFF;
              if ( v86 < v85 )
              if ( v87 )
              {
                if ( v87 <= -1 )
                  sub_21E57F4();
                v84 = (char *)j_operator new(2 * v87);
                v80 = (char *)(*(_QWORD *)((char *)v299 + 260) >> 32);
                v83 = (_BYTE *)*(_QWORD *)((char *)v299 + 260);
              }
              *(_WORD *)&v84[v80 - v83] = v81;
              v88 = (int)&v84[v80 - v83];
              if ( (v80 - v83) >> 1 )
                j___aeabi_memmove_0((int)v84, (int)v83);
              v89 = v88 + 2;
              if ( v83 )
                j_operator delete(v83);
              v90 = (int)&v84[2 * v87];
              v75 = (Json::ValueIteratorBase *)&v380;
              *((_DWORD *)v299 + 65) = v84;
              v4 = v299;
              *((_DWORD *)v299 + 66) = v89;
              *((_DWORD *)v299 + 67) = v90;
              v76 = (const char *)&unk_257BC67;
              *(_WORD *)v80 = v81;
              *((_DWORD *)v4 + 66) = v80 + 2;
          v91 = (void *)(v378 - 12);
          if ( (int *)(v378 - 12) != &dword_28898C0 )
            v94 = (unsigned int *)(v378 - 4);
                v95 = __ldrex(v94);
              while ( __strex(v95 - 1, v94) );
              v95 = (*v94)--;
            if ( v95 <= 0 )
              j_j_j_j__ZdlPv_9(v91);
          j_Json::ValueIteratorBase::increment(v75);
        }
        while ( !j_Json::ValueIteratorBase::isEqual(v75, (const Json::ValueIteratorBase *)&v379) );
    v96 = (Json::Value *)j_Json::Value::operator[](v3, "avoid_water");
    *((_BYTE *)v4 + 356) = j_Json::Value::asBool(v96, 0);
    v97 = (Json::Value *)j_Json::Value::operator[](v3, "start_delay");
    *((_DWORD *)v4 + 88) = j_Json::Value::asInt(v97, 0);
    v98 = (Json::Value *)j_Json::Value::operator[](v3, "target_needed");
    *((_BYTE *)v4 + 357) = j_Json::Value::asBool(v98, 0);
    v99 = (Json::Value *)j_Json::Value::operator[](v3, "mount_distance");
    *((_DWORD *)v4 + 90) = j_Json::Value::asFloat(v99, -1.0);
    sub_21E94B4((void **)&v376, "blocks");
    j_Json::Value::Value((Json::Value *)&v375, v3);
    j_BlockListSerializer::loadJSONSet((const char **)&v376, (int)v4 + 284, (Json::Value *)&v375);
    j_Json::Value::~Value((Json::Value *)&v375);
    v100 = (void *)(v376 - 12);
    if ( (int *)(v376 - 12) != &dword_28898C0 )
      v295 = (unsigned int *)(v376 - 4);
          v296 = __ldrex(v295);
        while ( __strex(v296 - 1, v295) );
        v296 = (*v295)--;
      if ( v296 <= 0 )
        j_j_j_j__ZdlPv_9(v100);
    v101 = (Json::Value *)j_Json::Value::operator[](v3, "can_get_scared");
    *((_WORD *)v4 + 126) = *((_WORD *)v4 + 126) & 0xFFF7 | 8 * j_Json::Value::asBool(v101, 0);
    v102 = (Json::Value *)j_Json::Value::operator[](v3, "max_to_eat");
    *((_DWORD *)v4 + 68) = j_Json::Value::asInt(v102, *((_DWORD *)v4 + 68));
    v103 = (Json::Value *)j_Json::Value::operator[](v3, "eat_delay");
    *((_DWORD *)v4 + 69) = j_Json::Value::asInt(v103, *((_DWORD *)v4 + 69));
    v104 = (Json::Value *)j_Json::Value::operator[](v3, "full_delay");
    *((_DWORD *)v4 + 70) = j_Json::Value::asInt(v104, *((_DWORD *)v4 + 70));
    v105 = (Json::Value *)j_Json::Value::operator[](v3, "float_offset");
    *((_DWORD *)v4 + 77) = j_Json::Value::asFloat(v105, *((float *)v4 + 77));
    v106 = (Json::Value *)j_Json::Value::operator[](v3, "random_reselect");
    *((_BYTE *)v4 + 312) = j_Json::Value::asBool(v106, *((_BYTE *)v4 + 312));
    v107 = (const Json::Value *)j_Json::Value::operator[](v3, "float_duration");
    j_Json::Value::Value((Json::Value *)&v374, v107);
    j_FloatRange::parseJson((int)v4 + 316, (Json::Value *)&v374);
    j_Json::Value::~Value((Json::Value *)&v374);
    v108 = (Json::Value *)j_Json::Value::operator[](v3, "entity_types");
    if ( !j_Json::Value::isNull(v108) )
      if ( j_Json::Value::isArray(v108) == 1 )
        j_Json::Value::begin((Json::Value *)&v386, (int)v108);
        j_Json::Value::end((Json::Value *)&v385, (int)v108);
        if ( j_Json::ValueIteratorBase::isEqual(
               (Json::ValueIteratorBase *)&v386,
               (const Json::ValueIteratorBase *)&v385) != 1 )
          do
            v109 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v386);
            sub_1A26C7C((int)v4, v109);
            j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v386);
          while ( !j_Json::ValueIteratorBase::isEqual(
                     (Json::ValueIteratorBase *)&v386,
                     (const Json::ValueIteratorBase *)&v385) );
      else if ( !j_Json::Value::isNull(v108) )
        sub_1A26C7C((int)v4, v108);
    v110 = (Json::Value *)j_Json::Value::operator[](v3, "summon_choices");
    if ( j_Json::Value::isArray(v110) == 1 )
      v111 = v4;
      j_Json::Value::begin((Json::Value *)&v373, (int)v110);
      j_Json::Value::end((Json::Value *)&v372, (int)v110);
      if ( !j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v373, (const Json::ValueIteratorBase *)&v372) )
        v297 = (unsigned __int64 *)((char *)v4 + 328);
        v112 = &v365;
        v113 = (Json::ValueIteratorBase *)&v373;
        v114 = "min_activation_range";
        __asm
          VLDR            S18, =0.0
          VLDR            S20, =0.05
        v115 = &off_26F1930;
        while ( 1 )
          v116 = (Json::Value *)j_Json::ValueIteratorBase::deref(v113);
          v360 = 0;
          v361 = -1.0;
          v362 = 0.0;
          v363 = 0.0;
          *v112 = 0;
          v112[1] = 0;
          v112[2] = 0;
          v112[3] = 0;
          v112[4] = 0;
          v112[5] = 0;
          v112[6] = 0;
          v364 = v115;
          v366 = -1.0;
          v367 = -1;
          v117 = v116;
          v368 = 0;
          v369 = 0;
          v370 = 0;
          v118 = (Json::Value *)j_Json::Value::operator[](v116, v114);
          _R0 = j_Json::Value::asFloat(v118, 1.0);
          __asm
            VMOV            S0, R0
            VSTR            S0, [SP,#0x2D0+var_118]
          v120 = (Json::Value *)j_Json::Value::operator[](v117, "max_activation_range");
          _R0 = j_Json::Value::asFloat(v120, -1.0);
            VSTR            S0, [SP,#0x2D0+var_114]
          v122 = (Json::Value *)j_Json::Value::operator[](v117, "cooldown_time");
          _R0 = j_Json::Value::asFloat(v122, 0.0);
            VMUL.F32        S0, S0, S16
            VCVTR.S32.F32   S0, S0
            VSTR            S0, [SP,#0x2D0+var_110]
          v124 = (Json::Value *)j_Json::Value::operator[](v117, "weight");
          _R0 = j_Json::Value::asFloat(v124, v363);
            VSTR            S0, [SP,#0x2D0+var_10C]
          v357 = Color::WHITE;
          v358 = unk_283E614;
          v359 = qword_283E618;
          v126 = (Json::Value *)j_Json::Value::operator[](v117, "particle_color");
          j_JsonUtil::parseValue<Color>(v126);
          v367 = j_Color::toARGB((Color *)&v357);
          if ( j_Json::Value::isMember(v117, "filters") == 1 )
            v127 = (const Json::Value *)j_Json::Value::operator[](v117, "filters");
            if ( !j_FilterGroup::parse((FilterGroup *)&v364, v127) )
              break;
          v128 = j_Json::Value::operator[](v117, "start_sound_event");
          sub_21E94B4((void **)&v355, (const char *)&unk_257BC67);
          j_Json::Value::asString(&v356, v128, &v355);
          v371 = j_soundEventFromString((unsigned int *)&v356);
          v129 = (void *)(v356 - 12);
          if ( (int *)(v356 - 12) != &dword_28898C0 )
            v212 = (unsigned int *)(v356 - 4);
                v213 = __ldrex(v212);
              while ( __strex(v213 - 1, v212) );
              v213 = (*v212)--;
            if ( v213 <= 0 )
              j_j_j_j__ZdlPv_9(v129);
          v130 = (void *)(v355 - 12);
          if ( (int *)(v355 - 12) != &dword_28898C0 )
            v214 = (unsigned int *)(v355 - 4);
                v215 = __ldrex(v214);
              while ( __strex(v215 - 1, v214) );
              v215 = (*v214)--;
            if ( v215 <= 0 )
              j_j_j_j__ZdlPv_9(v130);
          v131 = j_Json::Value::operator[](v117, "sequence");
          j_Json::Value::begin((Json::Value *)&v354, v131);
          j_Json::Value::end((Json::Value *)&v353, v131);
          __asm { VMOV.F32        S22, S18 }
          while ( j_Json::ValueIteratorBase::isEqual(
                    (Json::ValueIteratorBase *)&v354,
                    (const Json::ValueIteratorBase *)&v353) != 1 )
            v132 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v354);
            v345 = 0;
            v343 = 0.0;
            v344 = 0;
            v341 = 0.0;
            v342 = 0.0;
            v339 = 0;
            v340 = 0;
            j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v347);
            v350 = -1;
            v351 = 1;
            v133 = j_Json::Value::operator[](v132, "shape");
            sub_21E94B4((void **)&v337, "line");
            j_Json::Value::asString(&v338, v133, &v337);
            v339 = j_spellShapeFromString((const void **)&v338);
            v134 = (void *)(v338 - 12);
            if ( (int *)(v338 - 12) != &dword_28898C0 )
              v175 = (unsigned int *)(v338 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v176 = __ldrex(v175);
                while ( __strex(v176 - 1, v175) );
              else
                v176 = (*v175)--;
              if ( v176 <= 0 )
                j_j_j_j__ZdlPv_9(v134);
            v135 = (void *)(v337 - 12);
            if ( (int *)(v337 - 12) != &dword_28898C0 )
              v177 = (unsigned int *)(v337 - 4);
                  v178 = __ldrex(v177);
                while ( __strex(v178 - 1, v177) );
                v178 = (*v177)--;
              if ( v178 <= 0 )
                j_j_j_j__ZdlPv_9(v135);
            v136 = (Json::Value *)j_Json::Value::operator[](v132, "base_delay");
            _R0 = j_Json::Value::asFloat(v136, 0.0);
            __asm
              VMOV            S0, R0
              VMUL.F32        S0, S0, S16
              VCVTR.S32.F32   S0, S0
              VSTR            S0, [SP,#0x2D0+var_174]
            v138 = (Json::Value *)j_Json::Value::operator[](v132, "delay_per_summon");
            _R0 = j_Json::Value::asFloat(v138, 0.0);
              VSTR            S0, [SP,#0x2D0+var_170]
            v140 = (Json::Value *)j_Json::Value::operator[](v132, "num_entities_spawned");
            v351 = j_Json::Value::asInt(v140, 1);
            v141 = j_Json::Value::operator[](v132, "entity_type");
            sub_21E94B4((void **)&v332, (const char *)&unk_257BC67);
            j_Json::Value::asString(&v333, v141, (int *)&v332);
            j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v334, &v333);
            j_EntityDefinitionIdentifier::operator=(&v347, &v334);
            v142 = (void *)(v336 - 12);
            if ( (int *)(v336 - 12) != &dword_28898C0 )
              v179 = (unsigned int *)(v336 - 4);
                  v180 = __ldrex(v179);
                while ( __strex(v180 - 1, v179) );
                v180 = (*v179)--;
              if ( v180 <= 0 )
                j_j_j_j__ZdlPv_9(v142);
            v143 = (void *)(v335 - 12);
            if ( (int *)(v335 - 12) != &dword_28898C0 )
              v181 = (unsigned int *)(v335 - 4);
                  v182 = __ldrex(v181);
                while ( __strex(v182 - 1, v181) );
                v182 = (*v181)--;
              if ( v182 <= 0 )
                j_j_j_j__ZdlPv_9(v143);
            v144 = (void *)(v334 - 12);
            if ( (int *)(v334 - 12) != &dword_28898C0 )
              v183 = (unsigned int *)(v334 - 4);
                  v184 = __ldrex(v183);
                while ( __strex(v184 - 1, v183) );
                v184 = (*v183)--;
              if ( v184 <= 0 )
                j_j_j_j__ZdlPv_9(v144);
            v145 = (void *)(v333 - 12);
            if ( (int *)(v333 - 12) != &dword_28898C0 )
              v185 = (unsigned int *)(v333 - 4);
                  v186 = __ldrex(v185);
                while ( __strex(v186 - 1, v185) );
                v186 = (*v185)--;
              if ( v186 <= 0 )
                j_j_j_j__ZdlPv_9(v145);
            v146 = v332;
            v147 = (char *)v332 - 12;
            if ( (int *)((char *)v332 - 12) != &dword_28898C0 )
              v187 = (unsigned int *)((char *)v332 - 4);
                  v146 = (EntityDefinitionIdentifier *)__ldrex(v187);
                while ( __strex((unsigned int)v146 - 1, v187) );
                v146 = (EntityDefinitionIdentifier *)(*v187)--;
              if ( (signed int)v146 <= 0 )
                j_j_j_j__ZdlPv_9(v147);
            v346 = j_EntityFactory::lookupEntityType((EntityFactory *)&v347, v146);
            v148 = (Json::Value *)j_Json::Value::operator[](v132, "entity_lifespan");
            _R0 = j_Json::Value::asFloat(v148, -1.0);
              VSTR            S0, [SP,#0x2D0+var_154]
            v150 = (Json::Value *)j_Json::Value::operator[](v132, "size");
            _R0 = j_Json::Value::asFloat(v150, 1.0);
              VSTR            S0, [SP,#0x2D0+var_178]
            v152 = j_Json::Value::operator[](v132, "target");
            sub_21E94B4((void **)&v330, "self");
            j_Json::Value::asString(&v331, v152, &v330);
            v340 = j_spellTargetFromString((const void **)&v331);
            v153 = (void *)(v331 - 12);
            if ( (int *)(v331 - 12) != &dword_28898C0 )
              v188 = (unsigned int *)(v331 - 4);
                  v189 = __ldrex(v188);
                while ( __strex(v189 - 1, v188) );
                v189 = (*v188)--;
              if ( v189 <= 0 )
                j_j_j_j__ZdlPv_9(v153);
            v154 = (void *)(v330 - 12);
            if ( (int *)(v330 - 12) != &dword_28898C0 )
              v190 = (unsigned int *)(v330 - 4);
                  v191 = __ldrex(v190);
                while ( __strex(v191 - 1, v190) );
                v191 = (*v190)--;
              if ( v191 <= 0 )
                j_j_j_j__ZdlPv_9(v154);
            v155 = (Json::Value *)j_Json::Value::operator[](v132, "summon_cap");
            v344 = j_Json::Value::asInt(v155, 0);
            v156 = (Json::Value *)j_Json::Value::operator[](v132, "summon_cap_radius");
            _R0 = j_Json::Value::asFloat(v156, 0.0);
              VSTR            S0, [SP,#0x2D0+var_168]
            v158 = j_Json::Value::operator[](v132, "sound_event");
            sub_21E94B4((void **)&v328, (const char *)&unk_257BC67);
            j_Json::Value::asString(&v329, v158, &v328);
            v352 = j_soundEventFromString((unsigned int *)&v329);
            v159 = (void *)(v329 - 12);
            if ( (int *)(v329 - 12) != &dword_28898C0 )
              v192 = (unsigned int *)(v329 - 4);
                  v193 = __ldrex(v192);
                while ( __strex(v193 - 1, v192) );
                v193 = (*v192)--;
              if ( v193 <= 0 )
                j_j_j_j__ZdlPv_9(v159);
            v160 = (void *)(v328 - 12);
            if ( (int *)(v328 - 12) != &dword_28898C0 )
              v194 = (unsigned int *)(v328 - 4);
                  v195 = __ldrex(v194);
                while ( __strex(v195 - 1, v194) );
                v195 = (*v194)--;
              if ( v195 <= 0 )
                j_j_j_j__ZdlPv_9(v160);
              VLDR            S0, [SP,#0x2D0+var_174]
              VCVT.F32.S32    S0, S0
              VADD.F32        S22, S0, S22
            if ( !(_NF ^ _VF) )
              _R0 = (v351 - 1) * LODWORD(v343);
              __asm
                VMOV            S0, R0
                VCVT.F32.S32    S0, S0
                VADD.F32        S22, S0, S22
            _ZF = v339 == 2;
            if ( v339 != 2 )
              _ZF = v340 == 2;
            if ( !_ZF )
              v163 = v369;
              if ( v369 == v370 )
                j_std::vector<SummonSpellStage,std::allocator<SummonSpellStage>>::_M_emplace_back_aux<SummonSpellStage&>(
                  (unsigned __int64 *)&v368,
                  (int)&v339);
                v164 = v340;
                v165 = v341;
                v166 = v342;
                *(_DWORD *)v369 = v339;
                *((_DWORD *)v163 + 1) = v164;
                *((float *)v163 + 2) = v165;
                *((float *)v163 + 3) = v166;
                v167 = (int)(v163 + 16);
                v168 = v344;
                v169 = v345;
                v170 = v346;
                *(float *)v167 = v343;
                *(_DWORD *)(v167 + 4) = v168;
                *(_DWORD *)(v167 + 8) = v169;
                *(_DWORD *)(v167 + 12) = v170;
                j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((int *)v163 + 8, &v347);
                v171 = *(_QWORD *)&v350;
                v163[52] = v352;
                *(_QWORD *)(v163 + 44) = v171;
                v369 += 56;
            v172 = (void *)(v349 - 12);
            if ( (int *)(v349 - 12) != &dword_28898C0 )
              v196 = (unsigned int *)(v349 - 4);
                  v197 = __ldrex(v196);
                while ( __strex(v197 - 1, v196) );
                v197 = (*v196)--;
              if ( v197 <= 0 )
                j_j_j_j__ZdlPv_9(v172);
            v173 = (void *)(v348 - 12);
            if ( (int *)(v348 - 12) != &dword_28898C0 )
              v198 = (unsigned int *)(v348 - 4);
                  v199 = __ldrex(v198);
                while ( __strex(v199 - 1, v198) );
                v199 = (*v198)--;
              if ( v199 <= 0 )
                j_j_j_j__ZdlPv_9(v173);
            v174 = (void *)(v347 - 12);
            if ( (int *)(v347 - 12) != &dword_28898C0 )
              v200 = (unsigned int *)(v347 - 4);
                  v201 = __ldrex(v200);
                while ( __strex(v201 - 1, v200) );
                v201 = (*v200)--;
              if ( v201 <= 0 )
                j_j_j_j__ZdlPv_9(v174);
            j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v354);
          v202 = (Json::Value *)j_Json::Value::operator[](v117, "cast_duration");
            VMUL.F32        S0, S22, S20
            VMOV            R1, S0
          _R0 = j_Json::Value::asFloat(v202, _R1);
            VCVT.F32.S32    S0, S0
            VSTR            S0, [SP,#0x2D0+var_E8]
          if ( v369 != v368 )
            v205 = *(_QWORD *)((char *)v111 + 332);
            if ( (_DWORD)v205 == HIDWORD(v205) )
              j_std::vector<SummonSpellData,std::allocator<SummonSpellData>>::_M_emplace_back_aux<SummonSpellData const&>(
                v297,
                (int)&v360);
              v206 = v361;
              v207 = v362;
              v208 = v363;
              *(_DWORD *)v205 = v360;
              *(float *)(v205 + 4) = v206;
              *(float *)(v205 + 8) = v207;
              *(float *)(v205 + 12) = v208;
              j_FilterGroup::FilterGroup(v205 + 16, (int)&v364);
              *(_DWORD *)(v205 + 16) = &off_26F1930;
              *(_QWORD *)(v205 + 48) = *(_QWORD *)&v366;
              v209 = v369 - v368;
              _ZF = v369 == v368;
              v210 = -1227133513 * ((v369 - v368) >> 3);
              v211 = 0;
              *(_DWORD *)(v205 + 56) = 0;
              *(_DWORD *)(v205 + 60) = 0;
              *(_DWORD *)(v205 + 64) = 0;
              if ( !_ZF )
                if ( v210 >= 0x4924925 )
                v211 = (char *)j_operator new(v209);
              *(_DWORD *)(v205 + 56) = v211;
              *(_DWORD *)(v205 + 60) = v211;
              *(_DWORD *)(v205 + 64) = &v211[56 * v210];
              *(_DWORD *)(v205 + 60) = j_std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<SummonSpellStage const*,std::vector<SummonSpellStage,std::allocator<SummonSpellStage>>>,SummonSpellStage*>(
                                         (int)v368,
                                         (int)v369,
                                         (int)v211);
              *(_BYTE *)(v205 + 68) = v371;
              *((_DWORD *)v111 + 83) += 72;
          j_SummonSpellData::~SummonSpellData((SummonSpellData *)&v360);
          v113 = (Json::ValueIteratorBase *)&v373;
          v115 = &off_26F1930;
          j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v373);
          v112 = &v365;
          v114 = "min_activation_range";
          if ( j_Json::ValueIteratorBase::isEqual(
                 (Json::ValueIteratorBase *)&v373,
                 (const Json::ValueIteratorBase *)&v372) )
            goto LABEL_238;
        j_SummonSpellData::~SummonSpellData((SummonSpellData *)&v360);
        return 0;
LABEL_238:
      v4 = v111;
    v216 = (Json::Value *)j_Json::Value::operator[](v3, "event_choices");
    if ( j_Json::Value::isArray(v216) != 1 )
      return 1;
    v217 = v4;
    j_Json::Value::begin((Json::Value *)&v327, (int)v216);
    j_Json::Value::end((Json::Value *)&v326, (int)v216);
    if ( j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v327, (const Json::ValueIteratorBase *)&v326) )
    v298 = (unsigned __int64 *)((char *)v4 + 340);
    v218 = &v321;
    v219 = (Json::ValueIteratorBase *)&v327;
    v220 = "min_activation_range";
    v221 = (Color *)&v311;
    __asm
      VLDR            S18, =0.0
      VLDR            S20, =0.05
    v222 = &off_26F1930;
    while ( 1 )
      v223 = (Json::Value *)j_Json::ValueIteratorBase::deref(v219);
      v314 = 0;
      v315 = -1.0;
      v316 = 0.0;
      v317 = 0.0;
      v318 = 0.0;
      v319 = -1;
      v224 = v223;
      *v218 = 0;
      v218[1] = 0;
      v218[2] = 0;
      v218[3] = 0;
      v218[4] = 0;
      v218[5] = 0;
      v218[6] = 0;
      v320 = v222;
      v323 = 0;
      v324 = 0;
      v325 = 0;
      v225 = (Json::Value *)j_Json::Value::operator[](v223, v220);
      v226 = v221;
      _R0 = j_Json::Value::asFloat(v225, 1.0);
      __asm
        VMOV            S0, R0
        VSTR            S0, [SP,#0x2D0+var_218]
      v228 = (Json::Value *)j_Json::Value::operator[](v224, "max_activation_range");
      _R0 = j_Json::Value::asFloat(v228, -1.0);
        VSTR            S0, [SP,#0x2D0+var_214]
      v230 = (Json::Value *)j_Json::Value::operator[](v224, "cooldown_time");
      _R0 = j_Json::Value::asFloat(v230, 0.0);
        VMUL.F32        S0, S0, S16
        VCVTR.S32.F32   S0, S0
        VSTR            S0, [SP,#0x2D0+var_210]
      v232 = (Json::Value *)j_Json::Value::operator[](v224, "weight");
      _R0 = j_Json::Value::asFloat(v232, v318);
        VSTR            S0, [SP,#0x2D0+var_208]
      *(_DWORD *)&v311 = Color::WHITE;
      v312 = unk_283E614;
      v313 = qword_283E618;
      v234 = (Json::Value *)j_Json::Value::operator[](v224, "particle_color");
      j_JsonUtil::parseValue<Color>(v234);
      v319 = j_Color::toARGB(v221);
      v235 = j_Json::Value::operator[](v224, "start_sound_event");
      sub_21E94B4((void **)&v309, (const char *)&unk_257BC67);
      j_Json::Value::asString(&v310, v235, &v309);
      v322 = j_soundEventFromString((unsigned int *)&v310);
      v236 = (void *)(v310 - 12);
      if ( (int *)(v310 - 12) != &dword_28898C0 )
        v276 = (unsigned int *)(v310 - 4);
        if ( &pthread_create )
          __dmb();
            v277 = __ldrex(v276);
          while ( __strex(v277 - 1, v276) );
        else
          v277 = (*v276)--;
        if ( v277 <= 0 )
          j_j_j_j__ZdlPv_9(v236);
      v237 = (void *)(v309 - 12);
      if ( (int *)(v309 - 12) != &dword_28898C0 )
        v278 = (unsigned int *)(v309 - 4);
            v279 = __ldrex(v278);
          while ( __strex(v279 - 1, v278) );
          v279 = (*v278)--;
        if ( v279 <= 0 )
          j_j_j_j__ZdlPv_9(v237);
      if ( j_Json::Value::isMember(v224, "filters") != 1
        || (v238 = (const Json::Value *)j_Json::Value::operator[](v224, "filters"),
            j_FilterGroup::parse((FilterGroup *)&v320, v238)) )
        v239 = j_Json::Value::operator[](v224, "sequence");
        j_Json::Value::begin((Json::Value *)&v308, v239);
        j_Json::Value::end((Json::Value *)&v307, v239);
        __asm { VMOV.F32        S22, S18 }
        while ( j_Json::ValueIteratorBase::isEqual(
                  (Json::ValueIteratorBase *)&v308,
                  (const Json::ValueIteratorBase *)&v307) != 1 )
          v240 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v308);
          v241 = v240;
          v304 = 0;
          v305 = (char *)&unk_28898CC;
          v242 = (Json::Value *)j_Json::Value::operator[](v240, "base_delay");
          _R0 = j_Json::Value::asFloat(v242, 0.0);
            VSTR            S0, [SP,#0x2D0+var_250]
          v244 = j_Json::Value::operator[](v241, "event");
          sub_21E94B4((void **)&v302, (const char *)&unk_257BC67);
          j_Json::Value::asString(&v303, v244, &v302);
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)&v305,
            &v303);
          v245 = (void *)(v303 - 12);
          if ( (int *)(v303 - 12) != &dword_28898C0 )
            v253 = (unsigned int *)(v303 - 4);
                v254 = __ldrex(v253);
              while ( __strex(v254 - 1, v253) );
              v254 = (*v253)--;
            if ( v254 <= 0 )
              j_j_j_j__ZdlPv_9(v245);
          v246 = (void *)(v302 - 12);
          if ( (int *)(v302 - 12) != &dword_28898C0 )
            v255 = (unsigned int *)(v302 - 4);
                v256 = __ldrex(v255);
              while ( __strex(v256 - 1, v255) );
              v256 = (*v255)--;
            if ( v256 <= 0 )
              j_j_j_j__ZdlPv_9(v246);
          v247 = j_Json::Value::operator[](v241, "sound_event");
          sub_21E94B4((void **)&v300, (const char *)&unk_257BC67);
          j_Json::Value::asString(&v301, v247, &v300);
          v306 = j_soundEventFromString((unsigned int *)&v301);
          v248 = (void *)(v301 - 12);
          if ( (int *)(v301 - 12) != &dword_28898C0 )
            v257 = (unsigned int *)(v301 - 4);
                v258 = __ldrex(v257);
              while ( __strex(v258 - 1, v257) );
              v258 = (*v257)--;
            if ( v258 <= 0 )
              j_j_j_j__ZdlPv_9(v248);
          v249 = (void *)(v300 - 12);
          if ( (int *)(v300 - 12) != &dword_28898C0 )
            v259 = (unsigned int *)(v300 - 4);
                v260 = __ldrex(v259);
              while ( __strex(v260 - 1, v259) );
              v260 = (*v259)--;
            if ( v260 <= 0 )
              j_j_j_j__ZdlPv_9(v249);
          v250 = v324;
          if ( v324 == v325 )
            j_std::vector<SendEventStage,std::allocator<SendEventStage>>::_M_emplace_back_aux<SendEventStage&>(
              (unsigned __int64 *)&v323,
              (int)&v304);
          else
            *v324 = v304;
            sub_21E8AF4(v250 + 1, (int *)&v305);
            *((_BYTE *)v250 + 8) = v306;
            v324 += 3;
          _R0 = v304;
            VCVT.F32.S32    S24, S0
          v252 = v305 - 12;
          if ( (int *)(v305 - 12) != &dword_28898C0 )
            v261 = (unsigned int *)(v305 - 4);
                v262 = __ldrex(v261);
              while ( __strex(v262 - 1, v261) );
              v262 = (*v261)--;
            if ( v262 <= 0 )
              j_j_j_j__ZdlPv_9(v252);
          __asm { VADD.F32        S22, S24, S22 }
          j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v308);
        v263 = (Json::Value *)j_Json::Value::operator[](v224, "cast_duration");
          VMUL.F32        S0, S22, S20
          VMOV            R1, S0
        _R0 = j_Json::Value::asFloat(v263, _R1);
          VMOV            S0, R0
          VMUL.F32        S0, S0, S16
          VCVTR.S32.F32   S0, S0
          VSTR            S0, [SP,#0x2D0+var_20C]
        v266 = *((_QWORD *)v217 + 43);
        if ( (_DWORD)v266 == HIDWORD(v266) )
          j_std::vector<SendEventData,std::allocator<SendEventData>>::_M_emplace_back_aux<SendEventData const&>(
            v298,
            (int)&v314);
          v267 = v315;
          v268 = v316;
          v269 = v317;
          v270 = v318;
          v271 = v319;
          *(_DWORD *)v266 = v314;
          *(float *)(v266 + 4) = v267;
          *(float *)(v266 + 8) = v268;
          *(float *)(v266 + 12) = v269;
          *(float *)(v266 + 16) = v270;
          *(_DWORD *)(v266 + 20) = v271;
          j_FilterGroup::FilterGroup(v266 + 24, (int)&v320);
          *(_DWORD *)(v266 + 24) = &off_26F1930;
          *(_BYTE *)(v266 + 56) = v322;
          v272 = (char *)v324 - (char *)v323;
          _ZF = v324 == v323;
          v273 = -1431655765 * (v324 - v323);
          v274 = 0;
          *(_DWORD *)(v266 + 60) = 0;
          *(_DWORD *)(v266 + 64) = 0;
          *(_DWORD *)(v266 + 68) = 0;
          if ( !_ZF )
            if ( v273 >= 0x15555556 )
              sub_21E57F4();
            v274 = (char *)j_operator new(v272);
          *(_DWORD *)(v266 + 60) = v274;
          *(_DWORD *)(v266 + 64) = v274;
          *(_DWORD *)(v266 + 68) = &v274[12 * v273];
          *(_DWORD *)(v266 + 64) = j_std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<SendEventStage const*,std::vector<SendEventStage,std::allocator<SendEventStage>>>,SendEventStage*>(
                                     v323,
                                     v324,
                                     (int)v274);
          *((_DWORD *)v217 + 86) += 72;
        v275 = 0;
        v275 = 1;
      v280 = v324;
      v281 = (int)v323;
      if ( v323 != v324 )
          v284 = *(_DWORD *)(v281 + 4);
          v285 = (void *)(v284 - 12);
          if ( (int *)(v284 - 12) != &dword_28898C0 )
            v282 = (unsigned int *)(v284 - 4);
                v283 = __ldrex(v282);
              while ( __strex(v283 - 1, v282) );
              v283 = (*v282)--;
            if ( v283 <= 0 )
              j_j_j_j__ZdlPv_9(v285);
          v281 += 12;
        while ( (int *)v281 != v280 );
        v281 = (int)v323;
      v220 = "min_activation_range";
      if ( v281 )
        j_operator delete((void *)v281);
      j_FilterGroup::~FilterGroup((FilterGroup *)&v320);
      if ( v275 )
        break;
      v219 = (Json::ValueIteratorBase *)&v327;
      v221 = v226;
      j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v327);
      v218 = &v321;
      v222 = &off_26F1930;
      if ( j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v327, (const Json::ValueIteratorBase *)&v326) )
        return 1;
  return 0;
}


int *__fastcall GoalDefinition::GoalDefinition(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r9@1
  int v4; // r1@1
  int v5; // r3@1
  int v6; // r6@1
  int v7; // r7@1
  int v8; // r1@1
  int v9; // r3@1
  int v10; // r4@1
  int v11; // r6@1
  int v12; // r7@1
  int v13; // r1@1
  int v14; // r3@1
  int v15; // r7@1
  int v16; // r1@1
  int v17; // r3@1
  int v18; // r6@1
  int v19; // r7@1
  int v20; // r1@1
  int v21; // r3@1
  int v22; // r7@1
  int v23; // r1@1
  int v24; // r3@1
  int v25; // r6@1
  int v26; // r7@1
  __int64 v27; // r0@1
  char *v28; // r6@1
  signed int v29; // r7@1
  __int64 v30; // kr00_8@4
  int v31; // r7@4
  int v32; // r1@6
  int v33; // r2@6
  int v34; // r3@6
  int v35; // r1@6
  _DWORD *v36; // r0@7
  _DWORD *v37; // r2@7
  int v38; // r1@8
  _DWORD *v39; // r1@10
  int v40; // r1@12
  int v41; // r3@12
  int v42; // r4@12
  int v43; // r6@12
  int v44; // r7@12
  int v45; // r3@12
  int v46; // r1@12
  int v47; // r2@12

  v2 = a2;
  v3 = a1;
  sub_21E8AF4(a1, a2);
  v4 = (int)(v3 + 1);
  v5 = v2[2];
  v6 = v2[3];
  v7 = v2[4];
  *(_DWORD *)v4 = v2[1];
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  v8 = (int)(v3 + 5);
  v9 = v2[6];
  v10 = v2[7];
  v11 = v2[8];
  v12 = v2[9];
  *(_DWORD *)v8 = v2[5];
  *(_DWORD *)(v8 + 4) = v9;
  *(_DWORD *)(v8 + 8) = v10;
  *(_DWORD *)(v8 + 12) = v11;
  *(_DWORD *)(v8 + 16) = v12;
  std::vector<MobDescriptor,std::allocator<MobDescriptor>>::vector((int)(v3 + 10), (unsigned __int64 *)v2 + 5);
  v13 = (int)(v3 + 13);
  v14 = v2[14];
  v15 = v2[15];
  *(_DWORD *)v13 = v2[13];
  *(_DWORD *)(v13 + 4) = v14;
  *(_DWORD *)(v13 + 8) = v15;
  v16 = (int)(v3 + 16);
  v17 = v2[17];
  v18 = v2[18];
  v19 = v2[19];
  *(_DWORD *)v16 = v2[16];
  *(_DWORD *)(v16 + 4) = v17;
  *(_DWORD *)(v16 + 8) = v18;
  *(_DWORD *)(v16 + 12) = v19;
  FilterGroup::FilterGroup((int)(v3 + 20), (int)(v2 + 20));
  v20 = (int)(v3 + 28);
  v3[20] = (int)&off_26F1930;
  v21 = v2[29];
  v22 = v2[30];
  *(_DWORD *)v20 = v2[28];
  *(_DWORD *)(v20 + 4) = v21;
  *(_DWORD *)(v20 + 8) = v22;
  v23 = (int)(v3 + 31);
  v24 = v2[32];
  v25 = v2[33];
  v26 = v2[34];
  *(_DWORD *)v23 = v2[31];
  *(_DWORD *)(v23 + 4) = v24;
  *(_DWORD *)(v23 + 8) = v25;
  *(_DWORD *)(v23 + 12) = v26;
  DefinitionTrigger::DefinitionTrigger(v3 + 35, v2 + 35);
  _aeabi_memcpy4(v3 + 45, v2 + 45, 80);
  v27 = *(_QWORD *)(v2 + 65);
  v28 = 0;
  v3[65] = 0;
  v3[66] = 0;
  v29 = HIDWORD(v27) - v27;
  v3[67] = 0;
  if ( (HIDWORD(v27) - (signed int)v27) >> 1 )
  {
    if ( v29 <= -1 )
      sub_21E57F4();
    v28 = (char *)operator new(HIDWORD(v27) - v27);
  }
  v3[65] = (int)v28;
  v3[66] = (int)v28;
  v3[67] = (int)&v28[2 * (v29 >> 1)];
  v30 = *(_QWORD *)(v2 + 65);
  v31 = (HIDWORD(v30) - (signed int)v30) >> 1;
  if ( 0 != v31 )
    _aeabi_memmove(v28, v30);
  v3[66] = (int)&v28[2 * v31];
  v32 = v2[69];
  v33 = v2[70];
  v34 = (int)(v3 + 68);
  *(_DWORD *)v34 = v2[68];
  *(_DWORD *)(v34 + 4) = v32;
  *(_DWORD *)(v34 + 8) = v33;
  v3[72] = 0;
  v3[73] = 0;
  v3[74] = 0;
  v3[75] = 0;
  v3[76] = 0;
  v3[74] = (int)(v3 + 72);
  v3[75] = (int)(v3 + 72);
  v35 = v2[73];
  if ( v35 )
    v36 = std::_Rb_tree<Block const*,Block const*,std::_Identity<Block const*>,std::less<Block const*>,std::allocator<Block const*>>::_M_copy(
            (int)(v3 + 71),
            v35,
            (int)(v3 + 72));
    v37 = v36;
    v3[73] = (int)v36;
    do
    {
      v38 = (int)v37;
      v37 = (_DWORD *)v37[2];
    }
    while ( v37 );
    v3[74] = v38;
      v39 = v36;
      v36 = (_DWORD *)v36[3];
    while ( v36 );
    v3[75] = (int)v39;
    v3[76] = v2[76];
  v40 = (int)(v3 + 77);
  v41 = v2[78];
  v42 = v2[79];
  v43 = v2[80];
  v44 = v2[81];
  *(_DWORD *)v40 = v2[77];
  *(_DWORD *)(v40 + 4) = v41;
  *(_DWORD *)(v40 + 8) = v42;
  *(_DWORD *)(v40 + 12) = v43;
  *(_DWORD *)(v40 + 16) = v44;
  std::vector<SummonSpellData,std::allocator<SummonSpellData>>::vector((int)(v3 + 82), (unsigned __int64 *)v2 + 41);
  std::vector<SendEventData,std::allocator<SendEventData>>::vector((int)(v3 + 85), (unsigned __int64 *)(v2 + 85));
  v45 = (int)(v3 + 88);
  v46 = v2[89];
  v47 = v2[90];
  *(_DWORD *)v45 = v2[88];
  *(_DWORD *)(v45 + 4) = v46;
  *(_DWORD *)(v45 + 8) = v47;
  return v3;
}


void __fastcall GoalDefinition::buildDocumentation(GoalDefinition *this, DocumentationSystem *a2)
{
  GoalDefinition *v2; // r4@1
  char *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  char *v9; // r5@6
  void *v10; // r0@6
  void *v11; // r0@7
  void *v12; // r0@8
  char *v13; // r0@9
  char *v14; // r5@9
  void *v15; // r0@9
  char *v16; // r5@10
  int *v17; // r0@10
  void *v18; // r0@10
  void *v19; // r0@11
  void *v20; // r0@12
  char *v21; // r0@13
  char *v22; // r5@13
  void *v23; // r0@13
  void *v24; // r0@14
  char *v25; // r0@15
  char *v26; // r5@15
  int *v27; // r0@15
  void *v28; // r0@15
  void *v29; // r0@16
  void *v30; // r0@17
  void *v31; // r0@18
  char *v32; // r5@19
  void *v33; // r0@19
  void *v34; // r0@20
  char *v35; // r5@21
  void *v36; // r0@21
  void *v37; // r0@22
  int *v38; // r0@23
  void *v39; // r0@23
  void *v40; // r0@24
  void *v41; // r0@25
  int *v42; // r0@26
  void *v43; // r0@26
  void *v44; // r0@27
  void *v45; // r0@28
  int *v46; // r0@29
  void *v47; // r0@29
  void *v48; // r0@30
  void *v49; // r0@31
  void *v50; // r0@32
  int *v51; // r0@33
  void *v52; // r0@33
  void *v53; // r0@34
  void *v54; // r0@35
  char *v55; // r5@36
  void *v56; // r0@36
  int *v57; // r0@37
  void *v58; // r0@37
  void *v59; // r0@38
  void *v60; // r0@39
  int *v61; // r0@40
  void *v62; // r0@40
  void *v63; // r0@41
  void *v64; // r0@42
  char *v65; // r5@43
  void *v66; // r0@43
  char *v67; // r5@44
  void *v68; // r0@44
  char *v69; // r5@45
  void *v70; // r0@45
  char *v71; // r5@46
  void *v72; // r0@46
  char *v73; // r5@47
  void *v74; // r0@47
  int *v75; // r0@48
  void *v76; // r0@48
  void *v77; // r0@49
  void *v78; // r0@50
  char *v79; // r5@51
  void *v80; // r0@51
  char *v81; // r5@52
  int *v82; // r0@52
  void *v83; // r0@52
  void *v84; // r0@53
  void *v85; // r0@54
  char *v86; // r0@55
  char *v87; // r5@55
  int *v88; // r0@55
  void *v89; // r0@55
  void *v90; // r0@56
  void *v91; // r0@57
  char *v92; // r0@58
  char *v93; // r5@58
  void *v94; // r0@58
  char *v95; // r5@59
  void *v96; // r0@59
  void *v97; // r0@60
  int *v98; // r0@61
  void *v99; // r0@61
  void *v100; // r0@62
  void *v101; // r0@63
  char *v102; // r0@64
  char *v103; // r5@64
  int *v104; // r0@64
  void *v105; // r0@64
  void *v106; // r0@65
  void *v107; // r0@66
  char *v108; // r5@67
  int *v109; // r0@67
  void *v110; // r0@67
  void *v111; // r0@68
  void *v112; // r0@69
  char *v113; // r0@70
  char *v114; // r5@70
  void *v115; // r0@70
  char *v116; // r5@71
  char *v117; // r5@71
  char *v118; // r5@71
  int *v119; // r0@71
  void *v120; // r0@71
  void *v121; // r0@72
  void *v122; // r0@73
  int *v123; // r0@74
  void *v124; // r0@74
  void *v125; // r0@75
  void *v126; // r0@76
  int *v127; // r0@77
  void *v128; // r0@77
  void *v129; // r0@78
  void *v130; // r0@79
  int *v131; // r0@80
  void *v132; // r0@80
  void *v133; // r0@81
  void *v134; // r0@82
  int *v135; // r0@83
  void *v136; // r0@83
  void *v137; // r0@84
  void *v138; // r0@85
  int *v139; // r0@86
  void *v140; // r0@86
  void *v141; // r0@87
  void *v142; // r0@88
  int *v143; // r0@89
  void *v144; // r0@89
  void *v145; // r0@90
  void *v146; // r0@91
  char *v147; // r5@92
  char *v148; // r5@92
  int *v149; // r0@92
  void *v150; // r0@92
  void *v151; // r0@93
  void *v152; // r0@94
  char *v153; // r5@95
  void *v154; // r0@95
  int *v155; // r0@96
  void *v156; // r0@96
  void *v157; // r0@97
  void *v158; // r0@98
  void *v159; // r0@99
  char *v160; // r0@100
  char *v161; // r0@100
  char *v162; // r5@100
  int *v163; // r0@100
  void *v164; // r0@100
  void *v165; // r0@101
  void *v166; // r0@102
  void *v167; // r0@103
  char *v168; // r5@104
  void *v169; // r0@104
  void *v170; // r0@105
  char *v171; // r5@106
  int *v172; // r0@106
  void *v173; // r0@106
  void *v174; // r0@107
  void *v175; // r0@108
  int *v176; // r0@109
  void *v177; // r0@109
  void *v178; // r0@110
  void *v179; // r0@111
  char *v180; // r5@112
  void *v181; // r0@112
  int *v182; // r0@113
  void *v183; // r0@113
  void *v184; // r0@114
  void *v185; // r0@115
  int *v186; // r0@116
  void *v187; // r0@116
  void *v188; // r0@117
  void *v189; // r0@118
  int *v190; // r0@119
  void *v191; // r0@119
  void *v192; // r0@120
  void *v193; // r0@121
  int *v194; // r0@122
  void *v195; // r0@122
  void *v196; // r0@123
  void *v197; // r0@124
  char *v198; // r5@125
  void *v199; // r0@125
  int *v200; // r0@126
  void *v201; // r0@126
  void *v202; // r0@127
  void *v203; // r0@128
  int *v204; // r0@129
  void *v205; // r0@129
  void *v206; // r0@130
  void *v207; // r0@131
  int *v208; // r0@132
  void *v209; // r0@132
  void *v210; // r0@133
  void *v211; // r0@134
  int *v212; // r0@135
  void *v213; // r0@135
  void *v214; // r0@136
  void *v215; // r0@137
  char *v216; // r5@138
  void *v217; // r0@138
  char *v218; // r5@139
  int *v219; // r0@139
  void *v220; // r0@139
  void *v221; // r0@140
  void *v222; // r0@141
  void *v223; // r0@142
  int *v224; // r0@143
  void *v225; // r0@143
  void *v226; // r0@144
  void *v227; // r0@145
  int *v228; // r0@146
  void *v229; // r0@146
  void *v230; // r0@147
  void *v231; // r0@148
  char *v232; // r5@149
  int *v233; // r0@149
  char *v234; // r7@149
  void *v235; // r0@149
  void *v236; // r0@150
  void *v237; // r0@151
  int *v238; // r0@152
  void *v239; // r0@152
  void *v240; // r0@153
  void *v241; // r0@154
  int *v242; // r0@155
  void *v243; // r0@155
  void *v244; // r0@156
  void *v245; // r0@157
  int *v246; // r0@158
  void *v247; // r0@158
  void *v248; // r0@159
  void *v249; // r0@160
  int *v250; // r0@161
  void *v251; // r0@161
  void *v252; // r0@162
  void *v253; // r0@163
  int *v254; // r0@164
  void *v255; // r0@164
  void *v256; // r0@165
  void *v257; // r0@166
  int *v258; // r0@167
  void *v259; // r0@167
  void *v260; // r0@168
  void *v261; // r0@169
  int *v262; // r0@170
  void *v263; // r0@170
  void *v264; // r0@171
  void *v265; // r0@172
  int *v266; // r0@173
  char *v267; // r6@173
  void *v268; // r0@173
  void *v269; // r0@174
  void *v270; // r0@175
  int *v271; // r0@176
  void *v272; // r0@176
  void *v273; // r0@177
  void *v274; // r0@178
  int *v275; // r0@179
  void *v276; // r0@179
  void *v277; // r0@180
  void *v278; // r0@181
  int *v279; // r0@182
  void *v280; // r0@182
  void *v281; // r0@183
  void *v282; // r0@184
  int *v283; // r0@185
  void *v284; // r0@185
  void *v285; // r0@186
  void *v286; // r0@187
  int *v287; // r0@188
  void *v288; // r0@188
  void *v289; // r0@189
  void *v290; // r0@190
  int *v291; // r0@191
  void *v292; // r0@191
  void *v293; // r0@192
  void *v294; // r0@193
  int *v295; // r0@194
  void *v296; // r0@194
  void *v297; // r0@195
  void *v298; // r0@196
  int *v299; // r0@197
  void *v300; // r0@197
  void *v301; // r0@198
  void *v302; // r0@199
  int *v303; // r0@200
  void *v304; // r0@200
  void *v305; // r0@201
  void *v306; // r0@202
  int *v307; // r0@203
  void *v308; // r0@203
  void *v309; // r0@204
  void *v310; // r0@205
  int *v311; // r0@206
  void *v312; // r0@206
  void *v313; // r0@207
  void *v314; // r0@208
  int *v315; // r0@209
  void *v316; // r0@209
  void *v317; // r0@210
  void *v318; // r0@211
  char *v319; // r5@212
  int *v320; // r0@212
  char *v321; // r6@212
  void *v322; // r0@212
  void *v323; // r0@213
  void *v324; // r0@214
  int *v325; // r0@215
  void *v326; // r0@215
  void *v327; // r0@216
  void *v328; // r0@217
  int *v329; // r0@218
  void *v330; // r0@218
  void *v331; // r0@219
  void *v332; // r0@220
  int *v333; // r0@221
  void *v334; // r0@221
  void *v335; // r0@222
  void *v336; // r0@223
  int *v337; // r0@224
  void *v338; // r0@224
  void *v339; // r0@225
  void *v340; // r0@226
  char *v341; // r5@227
  void *v342; // r0@227
  char *v343; // r5@228
  void *v344; // r0@228
  char *v345; // r4@229
  void *v346; // r0@229
  void *v347; // r0@230
  unsigned int *v348; // r2@232
  signed int v349; // r1@234
  unsigned int *v350; // r2@236
  signed int v351; // r1@238
  unsigned int *v352; // r2@240
  signed int v353; // r1@242
  unsigned int *v354; // r2@244
  signed int v355; // r1@246
  unsigned int *v356; // r2@248
  signed int v357; // r1@250
  unsigned int *v358; // r2@252
  signed int v359; // r1@254
  unsigned int *v360; // r2@256
  signed int v361; // r1@258
  unsigned int *v362; // r2@260
  signed int v363; // r1@262
  unsigned int *v364; // r2@264
  signed int v365; // r1@266
  unsigned int *v366; // r2@268
  signed int v367; // r1@270
  unsigned int *v368; // r2@272
  signed int v369; // r1@274
  unsigned int *v370; // r2@276
  signed int v371; // r1@278
  unsigned int *v372; // r2@280
  signed int v373; // r1@282
  unsigned int *v374; // r2@284
  signed int v375; // r1@286
  unsigned int *v376; // r2@288
  signed int v377; // r1@290
  unsigned int *v378; // r2@292
  signed int v379; // r1@294
  unsigned int *v380; // r2@296
  signed int v381; // r1@298
  unsigned int *v382; // r2@300
  signed int v383; // r1@302
  unsigned int *v384; // r2@304
  signed int v385; // r1@306
  unsigned int *v386; // r2@308
  signed int v387; // r1@310
  unsigned int *v388; // r2@312
  signed int v389; // r1@314
  unsigned int *v390; // r2@316
  signed int v391; // r1@318
  unsigned int *v392; // r2@320
  signed int v393; // r1@322
  unsigned int *v394; // r2@324
  signed int v395; // r1@326
  unsigned int *v396; // r2@328
  signed int v397; // r1@330
  unsigned int *v398; // r2@332
  signed int v399; // r1@334
  unsigned int *v400; // r2@336
  signed int v401; // r1@338
  unsigned int *v402; // r2@340
  signed int v403; // r1@342
  unsigned int *v404; // r2@344
  signed int v405; // r1@346
  unsigned int *v406; // r2@348
  signed int v407; // r1@350
  unsigned int *v408; // r2@352
  signed int v409; // r1@354
  unsigned int *v410; // r2@356
  signed int v411; // r1@358
  unsigned int *v412; // r2@360
  signed int v413; // r1@362
  unsigned int *v414; // r2@364
  signed int v415; // r1@366
  unsigned int *v416; // r2@368
  signed int v417; // r1@370
  unsigned int *v418; // r2@372
  signed int v419; // r1@374
  unsigned int *v420; // r2@376
  signed int v421; // r1@378
  unsigned int *v422; // r2@380
  signed int v423; // r1@382
  unsigned int *v424; // r2@384
  signed int v425; // r1@386
  unsigned int *v426; // r2@388
  signed int v427; // r1@390
  unsigned int *v428; // r2@392
  signed int v429; // r1@394
  unsigned int *v430; // r2@396
  signed int v431; // r1@398
  unsigned int *v432; // r2@400
  signed int v433; // r1@402
  unsigned int *v434; // r2@404
  signed int v435; // r1@406
  unsigned int *v436; // r2@408
  signed int v437; // r1@410
  unsigned int *v438; // r2@412
  signed int v439; // r1@414
  unsigned int *v440; // r2@416
  signed int v441; // r1@418
  unsigned int *v442; // r2@420
  signed int v443; // r1@422
  unsigned int *v444; // r2@424
  signed int v445; // r1@426
  unsigned int *v446; // r2@428
  signed int v447; // r1@430
  unsigned int *v448; // r2@432
  signed int v449; // r1@434
  unsigned int *v450; // r2@436
  signed int v451; // r1@438
  unsigned int *v452; // r2@440
  signed int v453; // r1@442
  unsigned int *v454; // r2@444
  signed int v455; // r1@446
  unsigned int *v456; // r2@448
  signed int v457; // r1@450
  unsigned int *v458; // r2@452
  signed int v459; // r1@454
  unsigned int *v460; // r2@456
  signed int v461; // r1@458
  unsigned int *v462; // r2@460
  signed int v463; // r1@462
  unsigned int *v464; // r2@464
  signed int v465; // r1@466
  unsigned int *v466; // r2@468
  signed int v467; // r1@470
  unsigned int *v468; // r2@472
  signed int v469; // r1@474
  unsigned int *v470; // r2@476
  signed int v471; // r1@478
  unsigned int *v472; // r2@480
  signed int v473; // r1@482
  unsigned int *v474; // r2@484
  signed int v475; // r1@486
  unsigned int *v476; // r2@488
  signed int v477; // r1@490
  unsigned int *v478; // r2@492
  signed int v479; // r1@494
  unsigned int *v480; // r2@496
  signed int v481; // r1@498
  unsigned int *v482; // r2@500
  signed int v483; // r1@502
  unsigned int *v484; // r2@504
  signed int v485; // r1@506
  unsigned int *v486; // r2@508
  signed int v487; // r1@510
  unsigned int *v488; // r2@512
  signed int v489; // r1@514
  unsigned int *v490; // r2@516
  signed int v491; // r1@518
  unsigned int *v492; // r2@520
  signed int v493; // r1@522
  unsigned int *v494; // r2@524
  signed int v495; // r1@526
  unsigned int *v496; // r2@528
  signed int v497; // r1@530
  unsigned int *v498; // r2@532
  signed int v499; // r1@534
  unsigned int *v500; // r2@536
  signed int v501; // r1@538
  unsigned int *v502; // r2@540
  signed int v503; // r1@542
  unsigned int *v504; // r2@544
  signed int v505; // r1@546
  unsigned int *v506; // r2@548
  signed int v507; // r1@550
  unsigned int *v508; // r2@552
  signed int v509; // r1@554
  unsigned int *v510; // r2@556
  signed int v511; // r1@558
  unsigned int *v512; // r2@560
  signed int v513; // r1@562
  unsigned int *v514; // r2@564
  signed int v515; // r1@566
  unsigned int *v516; // r2@568
  signed int v517; // r1@570
  unsigned int *v518; // r2@572
  signed int v519; // r1@574
  unsigned int *v520; // r2@576
  signed int v521; // r1@578
  unsigned int *v522; // r2@580
  signed int v523; // r1@582
  unsigned int *v524; // r2@584
  signed int v525; // r1@586
  unsigned int *v526; // r2@588
  signed int v527; // r1@590
  unsigned int *v528; // r2@592
  signed int v529; // r1@594
  unsigned int *v530; // r2@596
  signed int v531; // r1@598
  unsigned int *v532; // r2@600
  signed int v533; // r1@602
  unsigned int *v534; // r2@604
  signed int v535; // r1@606
  unsigned int *v536; // r2@608
  signed int v537; // r1@610
  unsigned int *v538; // r2@612
  signed int v539; // r1@614
  unsigned int *v540; // r2@616
  signed int v541; // r1@618
  unsigned int *v542; // r2@620
  signed int v543; // r1@622
  unsigned int *v544; // r2@624
  signed int v545; // r1@626
  unsigned int *v546; // r2@628
  signed int v547; // r1@630
  unsigned int *v548; // r2@632
  signed int v549; // r1@634
  unsigned int *v550; // r2@636
  signed int v551; // r1@638
  unsigned int *v552; // r2@640
  signed int v553; // r1@642
  unsigned int *v554; // r2@644
  signed int v555; // r1@646
  unsigned int *v556; // r2@648
  signed int v557; // r1@650
  unsigned int *v558; // r2@652
  signed int v559; // r1@654
  unsigned int *v560; // r2@656
  signed int v561; // r1@658
  unsigned int *v562; // r2@660
  signed int v563; // r1@662
  unsigned int *v564; // r2@664
  signed int v565; // r1@666
  unsigned int *v566; // r2@668
  signed int v567; // r1@670
  unsigned int *v568; // r2@672
  signed int v569; // r1@674
  unsigned int *v570; // r2@676
  signed int v571; // r1@678
  unsigned int *v572; // r2@680
  signed int v573; // r1@682
  unsigned int *v574; // r2@684
  signed int v575; // r1@686
  unsigned int *v576; // r2@688
  signed int v577; // r1@690
  unsigned int *v578; // r2@692
  signed int v579; // r1@694
  unsigned int *v580; // r2@696
  signed int v581; // r1@698
  unsigned int *v582; // r2@700
  signed int v583; // r1@702
  unsigned int *v584; // r2@704
  signed int v585; // r1@706
  unsigned int *v586; // r2@708
  signed int v587; // r1@710
  unsigned int *v588; // r2@712
  signed int v589; // r1@714
  unsigned int *v590; // r2@716
  signed int v591; // r1@718
  unsigned int *v592; // r2@720
  signed int v593; // r1@722
  unsigned int *v594; // r2@724
  signed int v595; // r1@726
  unsigned int *v596; // r2@728
  signed int v597; // r1@730
  unsigned int *v598; // r2@732
  signed int v599; // r1@734
  unsigned int *v600; // r2@736
  signed int v601; // r1@738
  unsigned int *v602; // r2@740
  signed int v603; // r1@742
  unsigned int *v604; // r2@744
  signed int v605; // r1@746
  unsigned int *v606; // r2@748
  signed int v607; // r1@750
  unsigned int *v608; // r2@752
  signed int v609; // r1@754
  unsigned int *v610; // r2@756
  signed int v611; // r1@758
  unsigned int *v612; // r2@760
  signed int v613; // r1@762
  unsigned int *v614; // r2@764
  signed int v615; // r1@766
  unsigned int *v616; // r2@768
  signed int v617; // r1@770
  unsigned int *v618; // r2@772
  signed int v619; // r1@774
  unsigned int *v620; // r2@776
  signed int v621; // r1@778
  unsigned int *v622; // r2@780
  signed int v623; // r1@782
  unsigned int *v624; // r2@784
  signed int v625; // r1@786
  unsigned int *v626; // r2@788
  signed int v627; // r1@790
  unsigned int *v628; // r2@792
  signed int v629; // r1@794
  unsigned int *v630; // r2@796
  signed int v631; // r1@798
  unsigned int *v632; // r2@800
  signed int v633; // r1@802
  unsigned int *v634; // r2@804
  signed int v635; // r1@806
  unsigned int *v636; // r2@808
  signed int v637; // r1@810
  unsigned int *v638; // r2@812
  signed int v639; // r1@814
  unsigned int *v640; // r2@816
  signed int v641; // r1@818
  unsigned int *v642; // r2@820
  signed int v643; // r1@822
  unsigned int *v644; // r2@824
  signed int v645; // r1@826
  unsigned int *v646; // r2@828
  signed int v647; // r1@830
  unsigned int *v648; // r2@832
  signed int v649; // r1@834
  unsigned int *v650; // r2@836
  signed int v651; // r1@838
  unsigned int *v652; // r2@840
  signed int v653; // r1@842
  unsigned int *v654; // r2@844
  signed int v655; // r1@846
  unsigned int *v656; // r2@848
  signed int v657; // r1@850
  unsigned int *v658; // r2@852
  signed int v659; // r1@854
  unsigned int *v660; // r2@856
  signed int v661; // r1@858
  unsigned int *v662; // r2@860
  signed int v663; // r1@862
  unsigned int *v664; // r2@864
  signed int v665; // r1@866
  unsigned int *v666; // r2@868
  signed int v667; // r1@870
  unsigned int *v668; // r2@872
  signed int v669; // r1@874
  unsigned int *v670; // r2@876
  signed int v671; // r1@878
  unsigned int *v672; // r2@880
  signed int v673; // r1@882
  unsigned int *v674; // r2@884
  signed int v675; // r1@886
  unsigned int *v676; // r2@888
  signed int v677; // r1@890
  unsigned int *v678; // r2@892
  signed int v679; // r1@894
  unsigned int *v680; // r2@896
  signed int v681; // r1@898
  unsigned int *v682; // r2@900
  signed int v683; // r1@902
  unsigned int *v684; // r2@904
  signed int v685; // r1@906
  unsigned int *v686; // r2@908
  signed int v687; // r1@910
  unsigned int *v688; // r2@912
  signed int v689; // r1@914
  unsigned int *v690; // r2@916
  signed int v691; // r1@918
  unsigned int *v692; // r2@920
  signed int v693; // r1@922
  unsigned int *v694; // r2@924
  signed int v695; // r1@926
  unsigned int *v696; // r2@928
  signed int v697; // r1@930
  unsigned int *v698; // r2@932
  signed int v699; // r1@934
  unsigned int *v700; // r2@936
  signed int v701; // r1@938
  unsigned int *v702; // r2@940
  signed int v703; // r1@942
  unsigned int *v704; // r2@944
  signed int v705; // r1@946
  unsigned int *v706; // r2@948
  signed int v707; // r1@950
  unsigned int *v708; // r2@952
  signed int v709; // r1@954
  unsigned int *v710; // r2@956
  signed int v711; // r1@958
  unsigned int *v712; // r2@960
  signed int v713; // r1@962
  unsigned int *v714; // r2@964
  signed int v715; // r1@966
  unsigned int *v716; // r2@968
  signed int v717; // r1@970
  unsigned int *v718; // r2@972
  signed int v719; // r1@974
  unsigned int *v720; // r2@976
  signed int v721; // r1@978
  unsigned int *v722; // r2@980
  signed int v723; // r1@982
  unsigned int *v724; // r2@984
  signed int v725; // r1@986
  unsigned int *v726; // r2@988
  signed int v727; // r1@990
  unsigned int *v728; // r2@992
  signed int v729; // r1@994
  unsigned int *v730; // r2@996
  signed int v731; // r1@998
  unsigned int *v732; // r2@1000
  signed int v733; // r1@1002
  unsigned int *v734; // r2@1004
  signed int v735; // r1@1006
  unsigned int *v736; // r2@1008
  signed int v737; // r1@1010
  unsigned int *v738; // r2@1012
  signed int v739; // r1@1014
  unsigned int *v740; // r2@1016
  signed int v741; // r1@1018
  unsigned int *v742; // r2@1020
  signed int v743; // r1@1022
  unsigned int *v744; // r2@1024
  signed int v745; // r1@1026
  unsigned int *v746; // r2@1028
  signed int v747; // r1@1030
  unsigned int *v748; // r2@1032
  signed int v749; // r1@1034
  unsigned int *v750; // r2@1036
  signed int v751; // r1@1038
  unsigned int *v752; // r2@1040
  signed int v753; // r1@1042
  unsigned int *v754; // r2@1044
  signed int v755; // r1@1046
  unsigned int *v756; // r2@1048
  signed int v757; // r1@1050
  unsigned int *v758; // r2@1052
  signed int v759; // r1@1054
  unsigned int *v760; // r2@1056
  signed int v761; // r1@1058
  unsigned int *v762; // r2@1060
  signed int v763; // r1@1062
  unsigned int *v764; // r2@1064
  signed int v765; // r1@1066
  unsigned int *v766; // r2@1068
  signed int v767; // r1@1070
  unsigned int *v768; // r2@1072
  signed int v769; // r1@1074
  unsigned int *v770; // r2@1076
  signed int v771; // r1@1078
  unsigned int *v772; // r2@1080
  signed int v773; // r1@1082
  unsigned int *v774; // r2@1084
  signed int v775; // r1@1086
  unsigned int *v776; // r2@1088
  signed int v777; // r1@1090
  unsigned int *v778; // r2@1092
  signed int v779; // r1@1094
  unsigned int *v780; // r2@1096
  signed int v781; // r1@1098
  unsigned int *v782; // r2@1100
  signed int v783; // r1@1102
  unsigned int *v784; // r2@1104
  signed int v785; // r1@1106
  unsigned int *v786; // r2@1108
  signed int v787; // r1@1110
  unsigned int *v788; // r2@1112
  signed int v789; // r1@1114
  unsigned int *v790; // r2@1116
  signed int v791; // r1@1118
  unsigned int *v792; // r2@1120
  signed int v793; // r1@1122
  unsigned int *v794; // r2@1124
  signed int v795; // r1@1126
  unsigned int *v796; // r2@1128
  signed int v797; // r1@1130
  unsigned int *v798; // r2@1132
  signed int v799; // r1@1134
  unsigned int *v800; // r2@1136
  signed int v801; // r1@1138
  unsigned int *v802; // r2@1140
  signed int v803; // r1@1142
  unsigned int *v804; // r2@1144
  signed int v805; // r1@1146
  unsigned int *v806; // r2@1148
  signed int v807; // r1@1150
  int v808; // [sp+Ch] [bp-744h]@230
  int v809; // [sp+14h] [bp-73Ch]@229
  int v810; // [sp+1Ch] [bp-734h]@228
  int v811; // [sp+24h] [bp-72Ch]@227
  int v812; // [sp+2Ch] [bp-724h]@224
  int v813; // [sp+34h] [bp-71Ch]@224
  int v814; // [sp+3Ch] [bp-714h]@224
  int v815; // [sp+44h] [bp-70Ch]@221
  int v816; // [sp+4Ch] [bp-704h]@221
  int v817; // [sp+54h] [bp-6FCh]@221
  int v818; // [sp+5Ch] [bp-6F4h]@218
  int v819; // [sp+64h] [bp-6ECh]@218
  int v820; // [sp+6Ch] [bp-6E4h]@218
  int v821; // [sp+74h] [bp-6DCh]@215
  int v822; // [sp+7Ch] [bp-6D4h]@215
  int v823; // [sp+84h] [bp-6CCh]@215
  int v824; // [sp+8Ch] [bp-6C4h]@212
  int v825; // [sp+94h] [bp-6BCh]@212
  int v826; // [sp+9Ch] [bp-6B4h]@212
  int v827; // [sp+A4h] [bp-6ACh]@209
  int v828; // [sp+ACh] [bp-6A4h]@209
  int v829; // [sp+B4h] [bp-69Ch]@209
  int v830; // [sp+BCh] [bp-694h]@206
  int v831; // [sp+C4h] [bp-68Ch]@206
  int v832; // [sp+CCh] [bp-684h]@206
  int v833; // [sp+D4h] [bp-67Ch]@203
  int v834; // [sp+DCh] [bp-674h]@203
  int v835; // [sp+E4h] [bp-66Ch]@203
  int v836; // [sp+ECh] [bp-664h]@200
  int v837; // [sp+F4h] [bp-65Ch]@200
  int v838; // [sp+FCh] [bp-654h]@200
  int v839; // [sp+104h] [bp-64Ch]@197
  int v840; // [sp+10Ch] [bp-644h]@197
  int v841; // [sp+114h] [bp-63Ch]@197
  int v842; // [sp+11Ch] [bp-634h]@194
  int v843; // [sp+124h] [bp-62Ch]@194
  int v844; // [sp+12Ch] [bp-624h]@194
  int v845; // [sp+134h] [bp-61Ch]@191
  int v846; // [sp+13Ch] [bp-614h]@191
  int v847; // [sp+144h] [bp-60Ch]@191
  int v848; // [sp+14Ch] [bp-604h]@188
  int v849; // [sp+154h] [bp-5FCh]@188
  int v850; // [sp+15Ch] [bp-5F4h]@188
  int v851; // [sp+164h] [bp-5ECh]@185
  int v852; // [sp+16Ch] [bp-5E4h]@185
  int v853; // [sp+174h] [bp-5DCh]@185
  int v854; // [sp+17Ch] [bp-5D4h]@182
  int v855; // [sp+184h] [bp-5CCh]@182
  int v856; // [sp+18Ch] [bp-5C4h]@182
  int v857; // [sp+194h] [bp-5BCh]@179
  int v858; // [sp+19Ch] [bp-5B4h]@179
  int v859; // [sp+1A4h] [bp-5ACh]@179
  int v860; // [sp+1ACh] [bp-5A4h]@176
  int v861; // [sp+1B4h] [bp-59Ch]@176
  int v862; // [sp+1BCh] [bp-594h]@176
  int v863; // [sp+1C4h] [bp-58Ch]@173
  int v864; // [sp+1CCh] [bp-584h]@173
  int v865; // [sp+1D4h] [bp-57Ch]@173
  int v866; // [sp+1DCh] [bp-574h]@170
  int v867; // [sp+1E4h] [bp-56Ch]@170
  int v868; // [sp+1ECh] [bp-564h]@170
  int v869; // [sp+1F4h] [bp-55Ch]@167
  int v870; // [sp+1FCh] [bp-554h]@167
  int v871; // [sp+204h] [bp-54Ch]@167
  int v872; // [sp+20Ch] [bp-544h]@164
  int v873; // [sp+214h] [bp-53Ch]@164
  int v874; // [sp+21Ch] [bp-534h]@164
  int v875; // [sp+224h] [bp-52Ch]@161
  int v876; // [sp+22Ch] [bp-524h]@161
  int v877; // [sp+234h] [bp-51Ch]@161
  int v878; // [sp+23Ch] [bp-514h]@158
  int v879; // [sp+244h] [bp-50Ch]@158
  int v880; // [sp+24Ch] [bp-504h]@158
  int v881; // [sp+254h] [bp-4FCh]@155
  int v882; // [sp+25Ch] [bp-4F4h]@155
  int v883; // [sp+264h] [bp-4ECh]@155
  int v884; // [sp+26Ch] [bp-4E4h]@152
  int v885; // [sp+274h] [bp-4DCh]@152
  int v886; // [sp+27Ch] [bp-4D4h]@152
  int v887; // [sp+284h] [bp-4CCh]@149
  int v888; // [sp+28Ch] [bp-4C4h]@149
  int v889; // [sp+294h] [bp-4BCh]@149
  int v890; // [sp+29Ch] [bp-4B4h]@146
  int v891; // [sp+2A4h] [bp-4ACh]@146
  int v892; // [sp+2ACh] [bp-4A4h]@146
  int v893; // [sp+2B4h] [bp-49Ch]@143
  int v894; // [sp+2BCh] [bp-494h]@143
  int v895; // [sp+2C4h] [bp-48Ch]@143
  int v896; // [sp+2CCh] [bp-484h]@142
  int v897; // [sp+2D4h] [bp-47Ch]@139
  int v898; // [sp+2DCh] [bp-474h]@139
  int v899; // [sp+2E4h] [bp-46Ch]@139
  int v900; // [sp+2ECh] [bp-464h]@138
  int v901; // [sp+2F4h] [bp-45Ch]@135
  int v902; // [sp+2FCh] [bp-454h]@135
  int v903; // [sp+304h] [bp-44Ch]@135
  int v904; // [sp+30Ch] [bp-444h]@132
  int v905; // [sp+314h] [bp-43Ch]@132
  int v906; // [sp+31Ch] [bp-434h]@132
  int v907; // [sp+324h] [bp-42Ch]@129
  int v908; // [sp+32Ch] [bp-424h]@129
  int v909; // [sp+334h] [bp-41Ch]@129
  int v910; // [sp+33Ch] [bp-414h]@126
  int v911; // [sp+344h] [bp-40Ch]@126
  int v912; // [sp+34Ch] [bp-404h]@126
  int v913; // [sp+354h] [bp-3FCh]@125
  int v914; // [sp+35Ch] [bp-3F4h]@122
  int v915; // [sp+364h] [bp-3ECh]@122
  int v916; // [sp+36Ch] [bp-3E4h]@122
  int v917; // [sp+374h] [bp-3DCh]@119
  int v918; // [sp+37Ch] [bp-3D4h]@119
  int v919; // [sp+384h] [bp-3CCh]@119
  int v920; // [sp+38Ch] [bp-3C4h]@116
  int v921; // [sp+394h] [bp-3BCh]@116
  int v922; // [sp+39Ch] [bp-3B4h]@116
  int v923; // [sp+3A4h] [bp-3ACh]@113
  int v924; // [sp+3ACh] [bp-3A4h]@113
  int v925; // [sp+3B4h] [bp-39Ch]@113
  int v926; // [sp+3BCh] [bp-394h]@112
  int v927; // [sp+3C4h] [bp-38Ch]@109
  int v928; // [sp+3CCh] [bp-384h]@109
  int v929; // [sp+3D4h] [bp-37Ch]@109
  int v930; // [sp+3DCh] [bp-374h]@106
  int v931; // [sp+3E4h] [bp-36Ch]@106
  int v932; // [sp+3ECh] [bp-364h]@106
  int v933; // [sp+3F4h] [bp-35Ch]@105
  int v934; // [sp+3FCh] [bp-354h]@104
  int v935; // [sp+404h] [bp-34Ch]@103
  int v936; // [sp+40Ch] [bp-344h]@100
  int v937; // [sp+414h] [bp-33Ch]@100
  int v938; // [sp+41Ch] [bp-334h]@100
  int v939; // [sp+424h] [bp-32Ch]@99
  int v940; // [sp+42Ch] [bp-324h]@96
  int v941; // [sp+434h] [bp-31Ch]@96
  int v942; // [sp+43Ch] [bp-314h]@96
  int v943; // [sp+444h] [bp-30Ch]@95
  int v944; // [sp+44Ch] [bp-304h]@92
  int v945; // [sp+454h] [bp-2FCh]@92
  int v946; // [sp+45Ch] [bp-2F4h]@92
  int v947; // [sp+464h] [bp-2ECh]@89
  int v948; // [sp+46Ch] [bp-2E4h]@89
  int v949; // [sp+474h] [bp-2DCh]@89
  int v950; // [sp+47Ch] [bp-2D4h]@86
  int v951; // [sp+484h] [bp-2CCh]@86
  int v952; // [sp+48Ch] [bp-2C4h]@86
  int v953; // [sp+494h] [bp-2BCh]@83
  int v954; // [sp+49Ch] [bp-2B4h]@83
  int v955; // [sp+4A4h] [bp-2ACh]@83
  int v956; // [sp+4ACh] [bp-2A4h]@80
  int v957; // [sp+4B4h] [bp-29Ch]@80
  int v958; // [sp+4BCh] [bp-294h]@80
  int v959; // [sp+4C4h] [bp-28Ch]@77
  int v960; // [sp+4CCh] [bp-284h]@77
  int v961; // [sp+4D4h] [bp-27Ch]@77
  int v962; // [sp+4DCh] [bp-274h]@74
  int v963; // [sp+4E4h] [bp-26Ch]@74
  int v964; // [sp+4ECh] [bp-264h]@74
  int v965; // [sp+4F4h] [bp-25Ch]@71
  int v966; // [sp+4FCh] [bp-254h]@71
  int v967; // [sp+504h] [bp-24Ch]@71
  int v968; // [sp+50Ch] [bp-244h]@70
  int v969; // [sp+514h] [bp-23Ch]@67
  int v970; // [sp+51Ch] [bp-234h]@67
  int v971; // [sp+524h] [bp-22Ch]@67
  int v972; // [sp+52Ch] [bp-224h]@64
  int v973; // [sp+534h] [bp-21Ch]@64
  int v974; // [sp+53Ch] [bp-214h]@64
  int v975; // [sp+544h] [bp-20Ch]@61
  int v976; // [sp+54Ch] [bp-204h]@61
  int v977; // [sp+554h] [bp-1FCh]@61
  int v978; // [sp+55Ch] [bp-1F4h]@60
  int v979; // [sp+564h] [bp-1ECh]@59
  int v980; // [sp+56Ch] [bp-1E4h]@58
  int v981; // [sp+574h] [bp-1DCh]@55
  int v982; // [sp+57Ch] [bp-1D4h]@55
  int v983; // [sp+584h] [bp-1CCh]@55
  int v984; // [sp+58Ch] [bp-1C4h]@52
  int v985; // [sp+594h] [bp-1BCh]@52
  int v986; // [sp+59Ch] [bp-1B4h]@52
  int v987; // [sp+5A4h] [bp-1ACh]@51
  int v988; // [sp+5ACh] [bp-1A4h]@48
  int v989; // [sp+5B4h] [bp-19Ch]@48
  int v990; // [sp+5BCh] [bp-194h]@48
  int v991; // [sp+5C4h] [bp-18Ch]@47
  int v992; // [sp+5CCh] [bp-184h]@46
  int v993; // [sp+5D4h] [bp-17Ch]@45
  int v994; // [sp+5DCh] [bp-174h]@44
  int v995; // [sp+5E4h] [bp-16Ch]@43
  int v996; // [sp+5ECh] [bp-164h]@40
  int v997; // [sp+5F4h] [bp-15Ch]@40
  int v998; // [sp+5FCh] [bp-154h]@40
  int v999; // [sp+604h] [bp-14Ch]@37
  int v1000; // [sp+60Ch] [bp-144h]@37
  int v1001; // [sp+614h] [bp-13Ch]@37
  int v1002; // [sp+61Ch] [bp-134h]@36
  int v1003; // [sp+624h] [bp-12Ch]@33
  int v1004; // [sp+62Ch] [bp-124h]@33
  int v1005; // [sp+634h] [bp-11Ch]@33
  int v1006; // [sp+63Ch] [bp-114h]@32
  int v1007; // [sp+644h] [bp-10Ch]@29
  int v1008; // [sp+64Ch] [bp-104h]@29
  int v1009; // [sp+654h] [bp-FCh]@29
  int v1010; // [sp+65Ch] [bp-F4h]@26
  int v1011; // [sp+664h] [bp-ECh]@26
  int v1012; // [sp+66Ch] [bp-E4h]@26
  int v1013; // [sp+674h] [bp-DCh]@23
  int v1014; // [sp+67Ch] [bp-D4h]@23
  int v1015; // [sp+684h] [bp-CCh]@23
  int v1016; // [sp+68Ch] [bp-C4h]@22
  int v1017; // [sp+694h] [bp-BCh]@21
  int v1018; // [sp+69Ch] [bp-B4h]@20
  int v1019; // [sp+6A4h] [bp-ACh]@19
  int v1020; // [sp+6ACh] [bp-A4h]@18
  int v1021; // [sp+6B4h] [bp-9Ch]@15
  int v1022; // [sp+6BCh] [bp-94h]@15
  int v1023; // [sp+6C4h] [bp-8Ch]@15
  int v1024; // [sp+6CCh] [bp-84h]@14
  int v1025; // [sp+6D4h] [bp-7Ch]@13
  int v1026; // [sp+6DCh] [bp-74h]@10
  int v1027; // [sp+6E4h] [bp-6Ch]@10
  int v1028; // [sp+6ECh] [bp-64h]@10
  int v1029; // [sp+6F4h] [bp-5Ch]@9
  int v1030; // [sp+6FCh] [bp-54h]@8
  int v1031; // [sp+704h] [bp-4Ch]@7
  int v1032; // [sp+70Ch] [bp-44h]@6
  int v1033; // [sp+714h] [bp-3Ch]@5
  int v1034; // [sp+71Ch] [bp-34h]@4
  int v1035; // [sp+724h] [bp-2Ch]@3
  int v1036; // [sp+72Ch] [bp-24h]@2
  int v1037; // [sp+734h] [bp-1Ch]@1

  v2 = this;
  v3 = j_addToDoc(this, "minecraft:behavior.avoid_mob_type", "Allows this entity to avoid certain mob types.");
  sub_21E94B4((void **)&v1037, "List of entity types this mob avoids.");
  j__mMobDescriptionsDoc((int)v3, &v1037);
  v4 = (void *)(v1037 - 12);
  if ( (int *)(v1037 - 12) != &dword_28898C0 )
  {
    v348 = (unsigned int *)(v1037 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v349 = __ldrex(v348);
      while ( __strex(v349 - 1, v348) );
    }
    else
      v349 = (*v348)--;
    if ( v349 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v1036, "Maximum distance to look for an entity");
  j__mMaxDistDoc((int)v3, &v1036);
  v5 = (void *)(v1036 - 12);
  if ( (int *)(v1036 - 12) != &dword_28898C0 )
    v350 = (unsigned int *)(v1036 - 4);
        v351 = __ldrex(v350);
      while ( __strex(v351 - 1, v350) );
      v351 = (*v350)--;
    if ( v351 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4(
    (void **)&v1035,
    "Multiplier for walking speed. 1.0 means keep the regular speed, while higher numbers make the walking speed faster");
  j__mWalkSpeedModifierDoc((int)v3, &v1035);
  v6 = (void *)(v1035 - 12);
  if ( (int *)(v1035 - 12) != &dword_28898C0 )
    v352 = (unsigned int *)(v1035 - 4);
        v353 = __ldrex(v352);
      while ( __strex(v353 - 1, v352) );
      v353 = (*v352)--;
    if ( v353 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
    (void **)&v1034,
    "Multiplier for running speed. 1.0 means keep the regular speed, while higher numbers make the running speed faster");
  j__mSprintSpeedModifierDoc((int)v3, &v1034);
  v7 = (void *)(v1034 - 12);
  if ( (int *)(v1034 - 12) != &dword_28898C0 )
    v354 = (unsigned int *)(v1034 - 4);
        v355 = __ldrex(v354);
      while ( __strex(v355 - 1, v354) );
      v355 = (*v354)--;
    if ( v355 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
    (void **)&v1033,
    "Determines how likely it is that this entity will stop avoiding another entity based on that entity's strength");
  j__mProbabilityPerStrengthDoc((int)v3, &v1033);
  v8 = (void *)(v1033 - 12);
  if ( (int *)(v1033 - 12) != &dword_28898C0 )
    v356 = (unsigned int *)(v1033 - 4);
        v357 = __ldrex(v356);
      while ( __strex(v357 - 1, v356) );
      v357 = (*v356)--;
    if ( v357 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = j_addToDoc(
         v2,
         "minecraft:behavior.beg",
         "Allows this mob to look at and follow the player that holds food they like.");
  sub_21E94B4((void **)&v1032, "List of items that this mob likes");
  j__mItemListDoc((int)v9, &v1032);
  v10 = (void *)(v1032 - 12);
  if ( (int *)(v1032 - 12) != &dword_28898C0 )
    v358 = (unsigned int *)(v1032 - 4);
        v359 = __ldrex(v358);
      while ( __strex(v359 - 1, v358) );
      v359 = (*v358)--;
    if ( v359 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v1031, "Distance in blocks the mob will beg from");
  j__mLookDistanceDoc((int)v9, &v1031);
  v11 = (void *)(v1031 - 12);
  if ( (int *)(v1031 - 12) != &dword_28898C0 )
    v360 = (unsigned int *)(v1031 - 4);
        v361 = __ldrex(v360);
      while ( __strex(v361 - 1, v360) );
      v361 = (*v360)--;
    if ( v361 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
    (void **)&v1030,
    "The range of time in seconds this mob will stare at the player holding a food they like, begging for it");
  j__mMinMaxLookTimeDoc((int)v9, &v1030);
  v12 = (void *)(v1030 - 12);
  if ( (int *)(v1030 - 12) != &dword_28898C0 )
    v362 = (unsigned int *)(v1030 - 4);
        v363 = __ldrex(v362);
      while ( __strex(v363 - 1, v362) );
      v363 = (*v362)--;
    if ( v363 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  j_addToDoc(v2, "minecraft:behavior.break_door", "Allows this mob to break doors.");
  v13 = j_addToDoc(v2, "minecraft:behavior.breed", "Allows this mob to breed with other mobs.");
  j__mSpeedModifierDoc((int)v13);
  v14 = j_addToDoc(
          v2,
          "minecraft:behavior.defend_village_target",
          "Allows the mob to stay in the village and fight mobs hostile to the villagers.");
  sub_21E94B4((void **)&v1029, "List of entity types this mob considers a threat to the village");
  j__mMobDescriptionsDoc((int)v14, &v1029);
  v15 = (void *)(v1029 - 12);
  if ( (int *)(v1029 - 12) != &dword_28898C0 )
    v364 = (unsigned int *)(v1029 - 4);
        v365 = __ldrex(v364);
      while ( __strex(v365 - 1, v364) );
      v365 = (*v364)--;
    if ( v365 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  j_addToDoc(v2, "minecraft:behavior.door_interact", "Allows the mob to open and close doors.");
  v16 = j_addToDoc(
          "minecraft:behavior.eat_block",
          "Allows the mob to eat a block (for example, sheep eating grass).");
  sub_21E94B4((void **)&v1028, "on_eat");
  sub_21E94B4((void **)&v1027, (const char *)&unk_257BC67);
  v17 = (int *)sub_21E94B4((void **)&v1026, "Trigger to fire when the mob eats a block of grass");
  j_DocumentationSystem::Node::addNode(
    (int)v16,
    (int *)&DocumentationSystem::TRIGGER_TYPE,
    (const void **)&v1028,
    &v1027,
    v17);
  v18 = (void *)(v1026 - 12);
  if ( (int *)(v1026 - 12) != &dword_28898C0 )
    v366 = (unsigned int *)(v1026 - 4);
        v367 = __ldrex(v366);
      while ( __strex(v367 - 1, v366) );
      v367 = (*v366)--;
    if ( v367 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v1027 - 12);
  if ( (int *)(v1027 - 12) != &dword_28898C0 )
    v368 = (unsigned int *)(v1027 - 4);
        v369 = __ldrex(v368);
      while ( __strex(v369 - 1, v368) );
      v369 = (*v368)--;
    if ( v369 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v1028 - 12);
  if ( (int *)(v1028 - 12) != &dword_28898C0 )
    v370 = (unsigned int *)(v1028 - 4);
        v371 = __ldrex(v370);
      while ( __strex(v371 - 1, v370) );
      v371 = (*v370)--;
    if ( v371 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = j_addToDoc(v2, "minecraft:behavior.flee_sun", "Allows the mob to run away from direct sunlight and seek shade.");
  j__mSpeedModifierDoc((int)v21);
  j_addToDoc(v2, "minecraft:behavior.float", "Allows the mob to stay afloat while swimming.");
  v22 = j_addToDoc(v2, "minecraft:behavior.follow_owner", "Allows the mob to follow the player that owns them.");
  j__mSpeedModifierDoc((int)v22);
    (void **)&v1025,
    "The distance in blocks that the owner can be away from this mob before it starts following it");
  j__mStartDistanceDoc((int)v22, &v1025);
  v23 = (void *)(v1025 - 12);
  if ( (int *)(v1025 - 12) != &dword_28898C0 )
    v372 = (unsigned int *)(v1025 - 4);
        v373 = __ldrex(v372);
      while ( __strex(v373 - 1, v372) );
      v373 = (*v372)--;
    if ( v373 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v1024, "The distance in blocks this mob will stop from its owner while following it");
  j__mStopDistanceDoc((int)v22, &v1024);
  v24 = (void *)(v1024 - 12);
  if ( (int *)(v1024 - 12) != &dword_28898C0 )
    v374 = (unsigned int *)(v1024 - 4);
        v375 = __ldrex(v374);
      while ( __strex(v375 - 1, v374) );
      v375 = (*v374)--;
    if ( v375 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = j_addToDoc(v2, "minecraft:behavior.follow_parent", "Allows the mob to follow their parent around.");
  j__mSpeedModifierDoc((int)v25);
  v26 = j_addToDoc(v2, "minecraft:behavior.follow_caravan", "Allows the mob to follow mobs that are in a caravan.");
  j__mSpeedModifierDoc((int)v26);
  sub_21E94B4((void **)&v1023, "entity_count");
  sub_21E94B4((void **)&v1022, "1");
  v27 = (int *)sub_21E94B4((void **)&v1021, "Number of entities that can be in the caravan");
    (int)v26,
    (int *)&DocumentationSystem::INT_TYPE,
    (const void **)&v1023,
    &v1022,
    v27);
  v28 = (void *)(v1021 - 12);
  if ( (int *)(v1021 - 12) != &dword_28898C0 )
    v376 = (unsigned int *)(v1021 - 4);
        v377 = __ldrex(v376);
      while ( __strex(v377 - 1, v376) );
      v377 = (*v376)--;
    if ( v377 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v1022 - 12);
  if ( (int *)(v1022 - 12) != &dword_28898C0 )
    v378 = (unsigned int *)(v1022 - 4);
        v379 = __ldrex(v378);
      while ( __strex(v379 - 1, v378) );
      v379 = (*v378)--;
    if ( v379 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v1023 - 12);
  if ( (int *)(v1023 - 12) != &dword_28898C0 )
    v380 = (unsigned int *)(v1023 - 4);
        v381 = __ldrex(v380);
      while ( __strex(v381 - 1, v380) );
      v381 = (*v380)--;
    if ( v381 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v1020, "List of entity types that this mob can follow in a caravan");
  j__mMobDescriptionsDoc((int)v26, &v1020);
  v31 = (void *)(v1020 - 12);
  if ( (int *)(v1020 - 12) != &dword_28898C0 )
    v382 = (unsigned int *)(v1020 - 4);
        v383 = __ldrex(v382);
      while ( __strex(v383 - 1, v382) );
      v383 = (*v382)--;
    if ( v383 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = j_addToDoc(v2, "minecraft:behavior.follow_mob", "Allows the mob to follow other mobs.");
  j__mSpeedModifierDoc((int)v32);
  sub_21E94B4((void **)&v1019, "The distance in blocks this mob stops from the mob it is following");
  j__mStopDistanceDoc((int)v32, &v1019);
  v33 = (void *)(v1019 - 12);
  if ( (int *)(v1019 - 12) != &dword_28898C0 )
    v384 = (unsigned int *)(v1019 - 4);
        v385 = __ldrex(v384);
      while ( __strex(v385 - 1, v384) );
      v385 = (*v384)--;
    if ( v385 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v1018, "The distance in blocks it will look for a mob to follow");
  j__mSearchRangeDoc((int)v32, &v1018);
  v34 = (void *)(v1018 - 12);
  if ( (int *)(v1018 - 12) != &dword_28898C0 )
    v386 = (unsigned int *)(v1018 - 4);
        v387 = __ldrex(v386);
      while ( __strex(v387 - 1, v386) );
      v387 = (*v386)--;
    if ( v387 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = j_addToDoc(
          "minecraft:behavior.nearest_attackable_target",
          "Allows the mob to check for and pursue the nearest valid target.");
  sub_21E94B4((void **)&v1017, "List of entity types that this mob considers valid targets");
  j__mMobDescriptionsDoc((int)v35, &v1017);
  v36 = (void *)(v1017 - 12);
  if ( (int *)(v1017 - 12) != &dword_28898C0 )
    v388 = (unsigned int *)(v1017 - 4);
        v389 = __ldrex(v388);
      while ( __strex(v389 - 1, v388) );
      v389 = (*v388)--;
    if ( v389 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  sub_21E94B4((void **)&v1016, "Distance in blocks that the target can be within to launch an attack");
  j__mWithinDoc((int)v35, &v1016);
  v37 = (void *)(v1016 - 12);
  if ( (int *)(v1016 - 12) != &dword_28898C0 )
    v390 = (unsigned int *)(v1016 - 4);
        v391 = __ldrex(v390);
      while ( __strex(v391 - 1, v390) );
      v391 = (*v390)--;
    if ( v391 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v1015, "attack_interval");
  sub_21E94B4((void **)&v1014, "0");
  v38 = (int *)sub_21E94B4((void **)&v1013, "Time in seconds between attacks");
    (int)v35,
    (const void **)&v1015,
    &v1014,
    v38);
  v39 = (void *)(v1013 - 12);
  if ( (int *)(v1013 - 12) != &dword_28898C0 )
    v392 = (unsigned int *)(v1013 - 4);
        v393 = __ldrex(v392);
      while ( __strex(v393 - 1, v392) );
      v393 = (*v392)--;
    if ( v393 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = (void *)(v1014 - 12);
  if ( (int *)(v1014 - 12) != &dword_28898C0 )
    v394 = (unsigned int *)(v1014 - 4);
        v395 = __ldrex(v394);
      while ( __strex(v395 - 1, v394) );
      v395 = (*v394)--;
    if ( v395 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  v41 = (void *)(v1015 - 12);
  if ( (int *)(v1015 - 12) != &dword_28898C0 )
    v396 = (unsigned int *)(v1015 - 4);
        v397 = __ldrex(v396);
      while ( __strex(v397 - 1, v396) );
      v397 = (*v396)--;
    if ( v397 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  sub_21E94B4((void **)&v1012, "must_see");
  sub_21E94B4((void **)&v1011, "false");
  v42 = (int *)sub_21E94B4(
                 (void **)&v1010,
                 "If true, only entities in this mob's viewing range can be selected as targets");
    (int *)&DocumentationSystem::BOOLEAN_TYPE,
    (const void **)&v1012,
    &v1011,
    v42);
  v43 = (void *)(v1010 - 12);
  if ( (int *)(v1010 - 12) != &dword_28898C0 )
    v398 = (unsigned int *)(v1010 - 4);
        v399 = __ldrex(v398);
      while ( __strex(v399 - 1, v398) );
      v399 = (*v398)--;
    if ( v399 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = (void *)(v1011 - 12);
  if ( (int *)(v1011 - 12) != &dword_28898C0 )
    v400 = (unsigned int *)(v1011 - 4);
        v401 = __ldrex(v400);
      while ( __strex(v401 - 1, v400) );
      v401 = (*v400)--;
    if ( v401 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  v45 = (void *)(v1012 - 12);
  if ( (int *)(v1012 - 12) != &dword_28898C0 )
    v402 = (unsigned int *)(v1012 - 4);
        v403 = __ldrex(v402);
      while ( __strex(v403 - 1, v402) );
      v403 = (*v402)--;
    if ( v403 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  sub_21E94B4((void **)&v1009, "must_see_forget_duration");
  sub_21E94B4((void **)&v1008, "3.0");
  v46 = (int *)sub_21E94B4(
                 (void **)&v1007,
                 "Determines the amount of time in seconds that this mob will look for a target before forgetting about i"
                 "t and looking for a new one when the target isn't visible any more");
    (int *)&DocumentationSystem::FLOAT_TYPE,
    (const void **)&v1009,
    &v1008,
    v46);
  v47 = (void *)(v1007 - 12);
  if ( (int *)(v1007 - 12) != &dword_28898C0 )
    v404 = (unsigned int *)(v1007 - 4);
        v405 = __ldrex(v404);
      while ( __strex(v405 - 1, v404) );
      v405 = (*v404)--;
    if ( v405 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  v48 = (void *)(v1008 - 12);
  if ( (int *)(v1008 - 12) != &dword_28898C0 )
    v406 = (unsigned int *)(v1008 - 4);
        v407 = __ldrex(v406);
      while ( __strex(v407 - 1, v406) );
      v407 = (*v406)--;
    if ( v407 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  v49 = (void *)(v1009 - 12);
  if ( (int *)(v1009 - 12) != &dword_28898C0 )
    v408 = (unsigned int *)(v1009 - 4);
        v409 = __ldrex(v408);
      while ( __strex(v409 - 1, v408) );
      v409 = (*v408)--;
    if ( v409 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  sub_21E94B4((void **)&v1006, "If true, only entities that this mob can path to can be selected as targets");
  j__mMustReachDoc((int)v35, &v1006);
  v50 = (void *)(v1006 - 12);
  if ( (int *)(v1006 - 12) != &dword_28898C0 )
    v410 = (unsigned int *)(v1006 - 4);
        v411 = __ldrex(v410);
      while ( __strex(v411 - 1, v410) );
      v411 = (*v410)--;
    if ( v411 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  sub_21E94B4((void **)&v1005, "reselect_targets");
  sub_21E94B4((void **)&v1004, "false");
  v51 = (int *)sub_21E94B4(
                 (void **)&v1003,
                 "If true, the target will change to the current closest entity whenever a different entity is closer");
    (const void **)&v1005,
    &v1004,
    v51);
  v52 = (void *)(v1003 - 12);
  if ( (int *)(v1003 - 12) != &dword_28898C0 )
    v412 = (unsigned int *)(v1003 - 4);
        v413 = __ldrex(v412);
      while ( __strex(v413 - 1, v412) );
      v413 = (*v412)--;
    if ( v413 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  v53 = (void *)(v1004 - 12);
  if ( (int *)(v1004 - 12) != &dword_28898C0 )
    v414 = (unsigned int *)(v1004 - 4);
        v415 = __ldrex(v414);
      while ( __strex(v415 - 1, v414) );
      v415 = (*v414)--;
    if ( v415 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  v54 = (void *)(v1005 - 12);
  if ( (int *)(v1005 - 12) != &dword_28898C0 )
    v416 = (unsigned int *)(v1005 - 4);
        v417 = __ldrex(v416);
      while ( __strex(v417 - 1, v416) );
      v417 = (*v416)--;
    if ( v417 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  v55 = j_addToDoc(v2, "minecraft:behavior.hurt_by_target", "Allows the mob to target another mob that hurts them.");
  sub_21E94B4((void **)&v1002, "List of entity types that this mob can target when hurt by them");
  j__mMobDescriptionsDoc((int)v55, &v1002);
  v56 = (void *)(v1002 - 12);
  if ( (int *)(v1002 - 12) != &dword_28898C0 )
    v418 = (unsigned int *)(v1002 - 4);
        v419 = __ldrex(v418);
      while ( __strex(v419 - 1, v418) );
      v419 = (*v418)--;
    if ( v419 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  sub_21E94B4((void **)&v1001, "alert_same_type");
  sub_21E94B4((void **)&v1000, "false");
  v57 = (int *)sub_21E94B4((void **)&v999, "If true, nearby mobs of the same type will be alerted about the damage");
    (int)v55,
    (const void **)&v1001,
    &v1000,
    v57);
  v58 = (void *)(v999 - 12);
  if ( (int *)(v999 - 12) != &dword_28898C0 )
    v420 = (unsigned int *)(v999 - 4);
        v421 = __ldrex(v420);
      while ( __strex(v421 - 1, v420) );
      v421 = (*v420)--;
    if ( v421 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
  v59 = (void *)(v1000 - 12);
  if ( (int *)(v1000 - 12) != &dword_28898C0 )
    v422 = (unsigned int *)(v1000 - 4);
        v423 = __ldrex(v422);
      while ( __strex(v423 - 1, v422) );
      v423 = (*v422)--;
    if ( v423 <= 0 )
      j_j_j_j__ZdlPv_9(v59);
  v60 = (void *)(v1001 - 12);
  if ( (int *)(v1001 - 12) != &dword_28898C0 )
    v424 = (unsigned int *)(v1001 - 4);
        v425 = __ldrex(v424);
      while ( __strex(v425 - 1, v424) );
      v425 = (*v424)--;
    if ( v425 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  sub_21E94B4((void **)&v998, "hurt_owner");
  sub_21E94B4((void **)&v997, "false");
  v61 = (int *)sub_21E94B4(
                 (void **)&v996,
                 "If true, the mob will hurt its owner and other mobs with the same owner as itself");
    (const void **)&v998,
    &v997,
    v61);
  v62 = (void *)(v996 - 12);
  if ( (int *)(v996 - 12) != &dword_28898C0 )
    v426 = (unsigned int *)(v996 - 4);
        v427 = __ldrex(v426);
      while ( __strex(v427 - 1, v426) );
      v427 = (*v426)--;
    if ( v427 <= 0 )
      j_j_j_j__ZdlPv_9(v62);
  v63 = (void *)(v997 - 12);
  if ( (int *)(v997 - 12) != &dword_28898C0 )
    v428 = (unsigned int *)(v997 - 4);
        v429 = __ldrex(v428);
      while ( __strex(v429 - 1, v428) );
      v429 = (*v428)--;
    if ( v429 <= 0 )
      j_j_j_j__ZdlPv_9(v63);
  v64 = (void *)(v998 - 12);
  if ( (int *)(v998 - 12) != &dword_28898C0 )
    v430 = (unsigned int *)(v998 - 4);
        v431 = __ldrex(v430);
      while ( __strex(v431 - 1, v430) );
      v431 = (*v430)--;
    if ( v431 <= 0 )
      j_j_j_j__ZdlPv_9(v64);
  v65 = j_addToDoc(
          "minecraft:behavior.owner_hurt_by_target",
          "Allows the mob to target another mob that hurts their owner.");
  sub_21E94B4((void **)&v995, "List of entity types that this mob can target if they hurt their owner");
  j__mMobDescriptionsDoc((int)v65, &v995);
  v66 = (void *)(v995 - 12);
  if ( (int *)(v995 - 12) != &dword_28898C0 )
    v432 = (unsigned int *)(v995 - 4);
        v433 = __ldrex(v432);
      while ( __strex(v433 - 1, v432) );
      v433 = (*v432)--;
    if ( v433 <= 0 )
      j_j_j_j__ZdlPv_9(v66);
  v67 = j_addToDoc(
          "minecraft:behavior.owner_hurt_target",
          "Allows the mob to target a mob that is hurt by their owner.");
    (void **)&v994,
    "List of entity types that this entity can target if the potential target is hurt by this mob's owner");
  j__mMobDescriptionsDoc((int)v67, &v994);
  v68 = (void *)(v994 - 12);
  if ( (int *)(v994 - 12) != &dword_28898C0 )
    v434 = (unsigned int *)(v994 - 4);
        v435 = __ldrex(v434);
      while ( __strex(v435 - 1, v434) );
      v435 = (*v434)--;
    if ( v435 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  v69 = j_addToDoc(
          "minecraft:behavior.look_at_player",
          "Allows the mob to look at the player when the player is nearby.");
  sub_21E94B4((void **)&v993, "the nearest player.");
  j__addLookAtParametersToDoc((int)v69);
  v70 = (void *)(v993 - 12);
  if ( (int *)(v993 - 12) != &dword_28898C0 )
    v436 = (unsigned int *)(v993 - 4);
        v437 = __ldrex(v436);
      while ( __strex(v437 - 1, v436) );
      v437 = (*v436)--;
    if ( v437 <= 0 )
      j_j_j_j__ZdlPv_9(v70);
  v71 = j_addToDoc(v2, "minecraft:behavior.look_at_target", "Allows the mob to look at the entity they are targetting.");
  sub_21E94B4((void **)&v992, "this mob's current target.");
  j__addLookAtParametersToDoc((int)v71);
  v72 = (void *)(v992 - 12);
  if ( (int *)(v992 - 12) != &dword_28898C0 )
    v438 = (unsigned int *)(v992 - 4);
        v439 = __ldrex(v438);
      while ( __strex(v439 - 1, v438) );
      v439 = (*v438)--;
    if ( v439 <= 0 )
      j_j_j_j__ZdlPv_9(v72);
  v73 = j_addToDoc(v2, "minecraft:behavior.look_at_entity", "Allows the mob to look at nearby entities.");
  sub_21E94B4((void **)&v991, "the nearest entity.");
  j__addLookAtParametersToDoc((int)v73);
  v74 = (void *)(v991 - 12);
  if ( (int *)(v991 - 12) != &dword_28898C0 )
    v440 = (unsigned int *)(v991 - 4);
        v441 = __ldrex(v440);
      while ( __strex(v441 - 1, v440) );
      v441 = (*v440)--;
    if ( v441 <= 0 )
      j_j_j_j__ZdlPv_9(v74);
  sub_21E94B4((void **)&v990, "filters");
  sub_21E94B4((void **)&v989, (const char *)&unk_257BC67);
  v75 = (int *)sub_21E94B4((void **)&v988, "Filter to determine the conditions for this mob to look at the entity");
    (int)v73,
    (int *)&DocumentationSystem::FILTER_TYPE,
    (const void **)&v990,
    &v989,
    v75);
  v76 = (void *)(v988 - 12);
  if ( (int *)(v988 - 12) != &dword_28898C0 )
    v442 = (unsigned int *)(v988 - 4);
        v443 = __ldrex(v442);
      while ( __strex(v443 - 1, v442) );
      v443 = (*v442)--;
    if ( v443 <= 0 )
      j_j_j_j__ZdlPv_9(v76);
  v77 = (void *)(v989 - 12);
  if ( (int *)(v989 - 12) != &dword_28898C0 )
    v444 = (unsigned int *)(v989 - 4);
        v445 = __ldrex(v444);
      while ( __strex(v445 - 1, v444) );
      v445 = (*v444)--;
    if ( v445 <= 0 )
      j_j_j_j__ZdlPv_9(v77);
  v78 = (void *)(v990 - 12);
  if ( (int *)(v990 - 12) != &dword_28898C0 )
    v446 = (unsigned int *)(v990 - 4);
        v447 = __ldrex(v446);
      while ( __strex(v447 - 1, v446) );
      v447 = (*v446)--;
    if ( v447 <= 0 )
      j_j_j_j__ZdlPv_9(v78);
  v79 = j_addToDoc(
          "minecraft:behavior.look_at_trading_player",
          "Allows the mob to look at the player they are trading with.");
  sub_21E94B4((void **)&v987, "the player this mob is trading with.");
  j__addLookAtParametersToDoc((int)v79);
  v80 = (void *)(v987 - 12);
  if ( (int *)(v987 - 12) != &dword_28898C0 )
    v448 = (unsigned int *)(v987 - 4);
        v449 = __ldrex(v448);
      while ( __strex(v449 - 1, v448) );
      v449 = (*v448)--;
    if ( v449 <= 0 )
      j_j_j_j__ZdlPv_9(v80);
  v81 = j_addToDoc(
          "minecraft:behavior.mount_pathing",
          "Allows the mob to move around on its own while mounted seeking a target to attack.");
  j__mSpeedModifierDoc((int)v81);
  sub_21E94B4((void **)&v986, "target_dist");
  sub_21E94B4((void **)&v985, "0.0");
  v82 = (int *)sub_21E94B4((void **)&v984, "The distance at which this mob wants to be away from its target");
    (int)v81,
    (const void **)&v986,
    &v985,
    v82);
  v83 = (void *)(v984 - 12);
  if ( (int *)(v984 - 12) != &dword_28898C0 )
    v450 = (unsigned int *)(v984 - 4);
        v451 = __ldrex(v450);
      while ( __strex(v451 - 1, v450) );
      v451 = (*v450)--;
    if ( v451 <= 0 )
      j_j_j_j__ZdlPv_9(v83);
  v84 = (void *)(v985 - 12);
  if ( (int *)(v985 - 12) != &dword_28898C0 )
    v452 = (unsigned int *)(v985 - 4);
        v453 = __ldrex(v452);
      while ( __strex(v453 - 1, v452) );
      v453 = (*v452)--;
    if ( v453 <= 0 )
      j_j_j_j__ZdlPv_9(v84);
  v85 = (void *)(v986 - 12);
  if ( (int *)(v986 - 12) != &dword_28898C0 )
    v454 = (unsigned int *)(v986 - 4);
        v455 = __ldrex(v454);
      while ( __strex(v455 - 1, v454) );
      v455 = (*v454)--;
    if ( v455 <= 0 )
      j_j_j_j__ZdlPv_9(v85);
  j__mTrackTargetDoc((int)v81);
  v86 = j_addToDoc(
          "minecraft:behavior.move_indoors",
          "Can only be used by Villagers. Allows them to seek shelter indoors.");
  j__mSpeedModifierDoc((int)v86);
  v87 = j_addToDoc(v2, "minecraft:behavior.move_through_village", "Allows mob to path through villages.");
  j__mSpeedModifierDoc((int)v87);
  sub_21E94B4((void **)&v983, "only_at_night");
  sub_21E94B4((void **)&v982, "false");
  v88 = (int *)sub_21E94B4((void **)&v981, "If true, the mob will only move through the village during night time");
    (int)v87,
    (const void **)&v983,
    &v982,
    v88);
  v89 = (void *)(v981 - 12);
  if ( (int *)(v981 - 12) != &dword_28898C0 )
    v456 = (unsigned int *)(v981 - 4);
        v457 = __ldrex(v456);
      while ( __strex(v457 - 1, v456) );
      v457 = (*v456)--;
    if ( v457 <= 0 )
      j_j_j_j__ZdlPv_9(v89);
  v90 = (void *)(v982 - 12);
  if ( (int *)(v982 - 12) != &dword_28898C0 )
    v458 = (unsigned int *)(v982 - 4);
        v459 = __ldrex(v458);
      while ( __strex(v459 - 1, v458) );
      v459 = (*v458)--;
    if ( v459 <= 0 )
      j_j_j_j__ZdlPv_9(v90);
  v91 = (void *)(v983 - 12);
  if ( (int *)(v983 - 12) != &dword_28898C0 )
    v460 = (unsigned int *)(v983 - 4);
        v461 = __ldrex(v460);
      while ( __strex(v461 - 1, v460) );
      v461 = (*v460)--;
    if ( v461 <= 0 )
      j_j_j_j__ZdlPv_9(v91);
  v92 = j_addToDoc(
          "minecraft:behavior.move_towards_restriction",
          "Allows mob to move towards a defined area that the mob should be restricted to.");
  j__mSpeedModifierDoc((int)v92);
  v93 = j_addToDoc(v2, "minecraft:behavior.move_towards_target", "Allows mob to move towards its current target.");
    (void **)&v980,
    "Defines the radius in blocks that the mob tries to be from the target. A value of 0 means it tries to occupy the sam"
    "e block as the target");
  j__mWithinDoc((int)v93, &v980);
  v94 = (void *)(v980 - 12);
  if ( (int *)(v980 - 12) != &dword_28898C0 )
    v462 = (unsigned int *)(v980 - 4);
        v463 = __ldrex(v462);
      while ( __strex(v463 - 1, v462) );
      v463 = (*v462)--;
    if ( v463 <= 0 )
      j_j_j_j__ZdlPv_9(v94);
  v95 = j_addToDoc(v2, "minecraft:behavior.ocelotattack", "Allows the mob to attack like the ocelot.");
  sub_21E94B4((void **)&v979, "Multiplier for the walking speed while using this attack");
  j__mWalkSpeedModifierDoc((int)v95, &v979);
  v96 = (void *)(v979 - 12);
  if ( (int *)(v979 - 12) != &dword_28898C0 )
    v464 = (unsigned int *)(v979 - 4);
        v465 = __ldrex(v464);
      while ( __strex(v465 - 1, v464) );
      v465 = (*v464)--;
    if ( v465 <= 0 )
      j_j_j_j__ZdlPv_9(v96);
  sub_21E94B4((void **)&v978, "Multiplier for the running speed of this mob while using this attack");
  j__mSprintSpeedModifierDoc((int)v95, &v978);
  v97 = (void *)(v978 - 12);
  if ( (int *)(v978 - 12) != &dword_28898C0 )
    v466 = (unsigned int *)(v978 - 4);
        v467 = __ldrex(v466);
      while ( __strex(v467 - 1, v466) );
      v467 = (*v466)--;
    if ( v467 <= 0 )
      j_j_j_j__ZdlPv_9(v97);
  sub_21E94B4((void **)&v977, "sneak_speed_multiplier");
  sub_21E94B4((void **)&v976, "1.0");
  v98 = (int *)sub_21E94B4(
                 (void **)&v975,
                 "Multiplier for the sneaking speed. 1.0 means the ocelot will move at the speed it normally sneaks");
    (int)v95,
    (const void **)&v977,
    &v976,
    v98);
  v99 = (void *)(v975 - 12);
  if ( (int *)(v975 - 12) != &dword_28898C0 )
    v468 = (unsigned int *)(v975 - 4);
        v469 = __ldrex(v468);
      while ( __strex(v469 - 1, v468) );
      v469 = (*v468)--;
    if ( v469 <= 0 )
      j_j_j_j__ZdlPv_9(v99);
  v100 = (void *)(v976 - 12);
  if ( (int *)(v976 - 12) != &dword_28898C0 )
    v470 = (unsigned int *)(v976 - 4);
        v471 = __ldrex(v470);
      while ( __strex(v471 - 1, v470) );
      v471 = (*v470)--;
    if ( v471 <= 0 )
      j_j_j_j__ZdlPv_9(v100);
  v101 = (void *)(v977 - 12);
  if ( (int *)(v977 - 12) != &dword_28898C0 )
    v472 = (unsigned int *)(v977 - 4);
        v473 = __ldrex(v472);
      while ( __strex(v473 - 1, v472) );
      v473 = (*v472)--;
    if ( v473 <= 0 )
      j_j_j_j__ZdlPv_9(v101);
  v102 = j_addToDoc(
           v2,
           "minecraft:behavior.ocelot_sit_on_block",
           "Allows to mob to be able to sit in place like the ocelot.");
  j__mSpeedModifierDoc((int)v102);
  j_addToDoc(
    v2,
    "minecraft:behavior.offer_flower",
    "Allows the mob to offer the player a flower like the Iron Golem does.");
  v103 = j_addToDoc(
           "minecraft:behavior.open_door",
           "Allows the mob to open doors. Requires the mob to be able to path through doors, otherwise the mob won't even"
           " want to try opening them.");
  sub_21E94B4((void **)&v974, "close_door_after");
  sub_21E94B4((void **)&v973, "true");
  v104 = (int *)sub_21E94B4(
                  (void **)&v972,
                  "If true, the mob will close the door after opening it and going through it");
    (int)v103,
    (const void **)&v974,
    &v973,
    v104);
  v105 = (void *)(v972 - 12);
  if ( (int *)(v972 - 12) != &dword_28898C0 )
    v474 = (unsigned int *)(v972 - 4);
        v475 = __ldrex(v474);
      while ( __strex(v475 - 1, v474) );
      v475 = (*v474)--;
    if ( v475 <= 0 )
      j_j_j_j__ZdlPv_9(v105);
  v106 = (void *)(v973 - 12);
  if ( (int *)(v973 - 12) != &dword_28898C0 )
    v476 = (unsigned int *)(v973 - 4);
        v477 = __ldrex(v476);
      while ( __strex(v477 - 1, v476) );
      v477 = (*v476)--;
    if ( v477 <= 0 )
      j_j_j_j__ZdlPv_9(v106);
  v107 = (void *)(v974 - 12);
  if ( (int *)(v974 - 12) != &dword_28898C0 )
    v478 = (unsigned int *)(v974 - 4);
        v479 = __ldrex(v478);
      while ( __strex(v479 - 1, v478) );
      v479 = (*v478)--;
    if ( v479 <= 0 )
      j_j_j_j__ZdlPv_9(v107);
  v108 = j_addToDoc(v2, "minecraft:behavior.panic", "Allows the mob to enter the panic state and run around in panic.");
  j__mSpeedModifierDoc((int)v108);
  sub_21E94B4((void **)&v971, "force");
  sub_21E94B4((void **)&v970, "false");
  v109 = (int *)sub_21E94B4(
                  (void **)&v969,
                  "If true, this mob will not stop panicking until it can't move anymore or the goal is removed from it");
    (int)v108,
    (const void **)&v971,
    &v970,
    v109);
  v110 = (void *)(v969 - 12);
  if ( (int *)(v969 - 12) != &dword_28898C0 )
    v480 = (unsigned int *)(v969 - 4);
        v481 = __ldrex(v480);
      while ( __strex(v481 - 1, v480) );
      v481 = (*v480)--;
    if ( v481 <= 0 )
      j_j_j_j__ZdlPv_9(v110);
  v111 = (void *)(v970 - 12);
  if ( (int *)(v970 - 12) != &dword_28898C0 )
    v482 = (unsigned int *)(v970 - 4);
        v483 = __ldrex(v482);
      while ( __strex(v483 - 1, v482) );
      v483 = (*v482)--;
    if ( v483 <= 0 )
      j_j_j_j__ZdlPv_9(v111);
  v112 = (void *)(v971 - 12);
  if ( (int *)(v971 - 12) != &dword_28898C0 )
    v484 = (unsigned int *)(v971 - 4);
        v485 = __ldrex(v484);
      while ( __strex(v485 - 1, v484) );
      v485 = (*v484)--;
    if ( v485 <= 0 )
      j_j_j_j__ZdlPv_9(v112);
  v113 = j_addToDoc(v2, "minecraft:behavior.run_around_like_crazy", "Allows the mob to run around aimlessly.");
  j__mSpeedModifierDoc((int)v113);
    "minecraft:behavior.restrict_sun",
    "Allows the mob to automatically start avoiding the sun when its a clear day out.");
  j_addToDoc(v2, "minecraft:behavior.restrict_open_door", "Allows the mob to stay indoors during night time.");
  v114 = j_addToDoc(v2, "minecraft:behavior.random_look_around", "Allows the mob to randomly look around.");
    (void **)&v968,
    "The range of time in seconds the mob will stay looking in a random direction before looking elsewhere");
  j__mMinMaxLookTimeDoc((int)v114, &v968);
  v115 = (void *)(v968 - 12);
  if ( (int *)(v968 - 12) != &dword_28898C0 )
    v486 = (unsigned int *)(v968 - 4);
        v487 = __ldrex(v486);
      while ( __strex(v487 - 1, v486) );
      v487 = (*v486)--;
    if ( v487 <= 0 )
      j_j_j_j__ZdlPv_9(v115);
    "minecraft:behavior.silverfish_merge_with_stone",
    "Allows the mob to go into stone blocks like Silverfish do. Currently it can only be used by Silverfish.");
    "minecraft:behavior.silverfish_wake_up_friends",
    "Allows the mob to alert mobs in nearby blocks to come out. Currently it can only be used by Silverfish.");
    "minecraft:behavior.stay_while_sitting",
    "Allows the mob to stay put while it is in a sitting state instead of doing something else.");
    "minecraft:behavior.make_love",
    "Allows the villager to look for a mate to spawn other villagers with. Can only be used by Villagers.");
  v116 = j_addToDoc(v2, "minecraft:behavior.melee_attack", "Allows the mob to use close combat melee attacks.");
  j__mSpeedModifierDoc((int)v116);
  j__mTrackTargetDoc((int)v116);
  j__mAttackTypesDoc((int)v116);
  j__mRandomStopIntervalDoc((int)v116);
  j__mReachMultiplierDoc((int)v116);
  v117 = j_addToDoc(v2, "minecraft:behavior.stomp_attack", "Allows the mob to use the stomp attack.");
  j__mSpeedModifierDoc((int)v117);
  j__mTrackTargetDoc((int)v117);
  j__mAttackTypesDoc((int)v117);
  j__mRandomStopIntervalDoc((int)v117);
  j__mReachMultiplierDoc((int)v117);
  v118 = j_addToDoc(
           "minecraft:behavior.ranged_attack",
           "Allows the mob to use ranged attacks like shooting arrows.");
  j__mSpeedModifierDoc((int)v118);
  sub_21E94B4((void **)&v967, "burst_shots");
  sub_21E94B4((void **)&v966, "1");
  v119 = (int *)sub_21E94B4((void **)&v965, "Number of shots fired every time the mob uses a charged attack");
    (int)v118,
    (const void **)&v967,
    &v966,
    v119);
  v120 = (void *)(v965 - 12);
  if ( (int *)(v965 - 12) != &dword_28898C0 )
    v488 = (unsigned int *)(v965 - 4);
        v489 = __ldrex(v488);
      while ( __strex(v489 - 1, v488) );
      v489 = (*v488)--;
    if ( v489 <= 0 )
      j_j_j_j__ZdlPv_9(v120);
  v121 = (void *)(v966 - 12);
  if ( (int *)(v966 - 12) != &dword_28898C0 )
    v490 = (unsigned int *)(v966 - 4);
        v491 = __ldrex(v490);
      while ( __strex(v491 - 1, v490) );
      v491 = (*v490)--;
    if ( v491 <= 0 )
      j_j_j_j__ZdlPv_9(v121);
  v122 = (void *)(v967 - 12);
  if ( (int *)(v967 - 12) != &dword_28898C0 )
    v492 = (unsigned int *)(v967 - 4);
        v493 = __ldrex(v492);
      while ( __strex(v493 - 1, v492) );
      v493 = (*v492)--;
    if ( v493 <= 0 )
      j_j_j_j__ZdlPv_9(v122);
  sub_21E94B4((void **)&v964, "burst_interval");
  sub_21E94B4((void **)&v963, "0.0");
  v123 = (int *)sub_21E94B4(
                  (void **)&v962,
                  "Amount of time in seconds between each individual shot when firing multiple shots per attack");
    (const void **)&v964,
    &v963,
    v123);
  v124 = (void *)(v962 - 12);
  if ( (int *)(v962 - 12) != &dword_28898C0 )
    v494 = (unsigned int *)(v962 - 4);
        v495 = __ldrex(v494);
      while ( __strex(v495 - 1, v494) );
      v495 = (*v494)--;
    if ( v495 <= 0 )
      j_j_j_j__ZdlPv_9(v124);
  v125 = (void *)(v963 - 12);
  if ( (int *)(v963 - 12) != &dword_28898C0 )
    v496 = (unsigned int *)(v963 - 4);
        v497 = __ldrex(v496);
      while ( __strex(v497 - 1, v496) );
      v497 = (*v496)--;
    if ( v497 <= 0 )
      j_j_j_j__ZdlPv_9(v125);
  v126 = (void *)(v964 - 12);
  if ( (int *)(v964 - 12) != &dword_28898C0 )
    v498 = (unsigned int *)(v964 - 4);
        v499 = __ldrex(v498);
      while ( __strex(v499 - 1, v498) );
      v499 = (*v498)--;
    if ( v499 <= 0 )
      j_j_j_j__ZdlPv_9(v126);
  sub_21E94B4((void **)&v961, "attack_interval_min");
  sub_21E94B4((void **)&v960, "0");
  v127 = (int *)sub_21E94B4(
                  (void **)&v959,
                  "Minimum amount of time in seconds the entity will wait after an attack before launching another");
    (const void **)&v961,
    &v960,
    v127);
  v128 = (void *)(v959 - 12);
  if ( (int *)(v959 - 12) != &dword_28898C0 )
    v500 = (unsigned int *)(v959 - 4);
        v501 = __ldrex(v500);
      while ( __strex(v501 - 1, v500) );
      v501 = (*v500)--;
    if ( v501 <= 0 )
      j_j_j_j__ZdlPv_9(v128);
  v129 = (void *)(v960 - 12);
  if ( (int *)(v960 - 12) != &dword_28898C0 )
    v502 = (unsigned int *)(v960 - 4);
        v503 = __ldrex(v502);
      while ( __strex(v503 - 1, v502) );
      v503 = (*v502)--;
    if ( v503 <= 0 )
      j_j_j_j__ZdlPv_9(v129);
  v130 = (void *)(v961 - 12);
  if ( (int *)(v961 - 12) != &dword_28898C0 )
    v504 = (unsigned int *)(v961 - 4);
        v505 = __ldrex(v504);
      while ( __strex(v505 - 1, v504) );
      v505 = (*v504)--;
    if ( v505 <= 0 )
      j_j_j_j__ZdlPv_9(v130);
  sub_21E94B4((void **)&v958, "attack_interval_max");
  sub_21E94B4((void **)&v957, "0");
  v131 = (int *)sub_21E94B4(
                  (void **)&v956,
                  "Maximum amount of time in seconds the entity will wait after an attack before launching another");
    (const void **)&v958,
    &v957,
    v131);
  v132 = (void *)(v956 - 12);
  if ( (int *)(v956 - 12) != &dword_28898C0 )
    v506 = (unsigned int *)(v956 - 4);
        v507 = __ldrex(v506);
      while ( __strex(v507 - 1, v506) );
      v507 = (*v506)--;
    if ( v507 <= 0 )
      j_j_j_j__ZdlPv_9(v132);
  v133 = (void *)(v957 - 12);
  if ( (int *)(v957 - 12) != &dword_28898C0 )
    v508 = (unsigned int *)(v957 - 4);
        v509 = __ldrex(v508);
      while ( __strex(v509 - 1, v508) );
      v509 = (*v508)--;
    if ( v509 <= 0 )
      j_j_j_j__ZdlPv_9(v133);
  v134 = (void *)(v958 - 12);
  if ( (int *)(v958 - 12) != &dword_28898C0 )
    v510 = (unsigned int *)(v958 - 4);
        v511 = __ldrex(v510);
      while ( __strex(v511 - 1, v510) );
      v511 = (*v510)--;
    if ( v511 <= 0 )
      j_j_j_j__ZdlPv_9(v134);
  sub_21E94B4((void **)&v955, "attack_radius");
  sub_21E94B4((void **)&v954, "0.0");
  v135 = (int *)sub_21E94B4(
                  (void **)&v953,
                  "Maxmimum distance the target can be for this mob to fire. If the target is further away, this mob will"
                  " move first before firing");
    (const void **)&v955,
    &v954,
    v135);
  v136 = (void *)(v953 - 12);
  if ( (int *)(v953 - 12) != &dword_28898C0 )
    v512 = (unsigned int *)(v953 - 4);
        v513 = __ldrex(v512);
      while ( __strex(v513 - 1, v512) );
      v513 = (*v512)--;
    if ( v513 <= 0 )
      j_j_j_j__ZdlPv_9(v136);
  v137 = (void *)(v954 - 12);
  if ( (int *)(v954 - 12) != &dword_28898C0 )
    v514 = (unsigned int *)(v954 - 4);
        v515 = __ldrex(v514);
      while ( __strex(v515 - 1, v514) );
      v515 = (*v514)--;
    if ( v515 <= 0 )
      j_j_j_j__ZdlPv_9(v137);
  v138 = (void *)(v955 - 12);
  if ( (int *)(v955 - 12) != &dword_28898C0 )
    v516 = (unsigned int *)(v955 - 4);
        v517 = __ldrex(v516);
      while ( __strex(v517 - 1, v516) );
      v517 = (*v516)--;
    if ( v517 <= 0 )
      j_j_j_j__ZdlPv_9(v138);
  sub_21E94B4((void **)&v952, "charge_charged_trigger");
  sub_21E94B4((void **)&v951, "0.0");
  v139 = (int *)sub_21E94B4(
                  (void **)&v950,
                  "The minimum amount of time in ticks the mob has to charge before firing a charged attack");
    (const void **)&v952,
    &v951,
    v139);
  v140 = (void *)(v950 - 12);
  if ( (int *)(v950 - 12) != &dword_28898C0 )
    v518 = (unsigned int *)(v950 - 4);
        v519 = __ldrex(v518);
      while ( __strex(v519 - 1, v518) );
      v519 = (*v518)--;
    if ( v519 <= 0 )
      j_j_j_j__ZdlPv_9(v140);
  v141 = (void *)(v951 - 12);
  if ( (int *)(v951 - 12) != &dword_28898C0 )
    v520 = (unsigned int *)(v951 - 4);
        v521 = __ldrex(v520);
      while ( __strex(v521 - 1, v520) );
      v521 = (*v520)--;
    if ( v521 <= 0 )
      j_j_j_j__ZdlPv_9(v141);
  v142 = (void *)(v952 - 12);
  if ( (int *)(v952 - 12) != &dword_28898C0 )
    v522 = (unsigned int *)(v952 - 4);
        v523 = __ldrex(v522);
      while ( __strex(v523 - 1, v522) );
      v523 = (*v522)--;
    if ( v523 <= 0 )
      j_j_j_j__ZdlPv_9(v142);
  sub_21E94B4((void **)&v949, "charge_shoot_trigger");
  sub_21E94B4((void **)&v948, "0.0");
  v143 = (int *)sub_21E94B4(
                  (void **)&v947,
                  "The minimum amount of time in ticks for the mob to start charging a charged shot. Must be greater than"
                  " 0 to enable burst shots");
    (const void **)&v949,
    &v948,
    v143);
  v144 = (void *)(v947 - 12);
  if ( (int *)(v947 - 12) != &dword_28898C0 )
    v524 = (unsigned int *)(v947 - 4);
        v525 = __ldrex(v524);
      while ( __strex(v525 - 1, v524) );
      v525 = (*v524)--;
    if ( v525 <= 0 )
      j_j_j_j__ZdlPv_9(v144);
  v145 = (void *)(v948 - 12);
  if ( (int *)(v948 - 12) != &dword_28898C0 )
    v526 = (unsigned int *)(v948 - 4);
        v527 = __ldrex(v526);
      while ( __strex(v527 - 1, v526) );
      v527 = (*v526)--;
    if ( v527 <= 0 )
      j_j_j_j__ZdlPv_9(v145);
  v146 = (void *)(v949 - 12);
  if ( (int *)(v949 - 12) != &dword_28898C0 )
    v528 = (unsigned int *)(v949 - 4);
        v529 = __ldrex(v528);
      while ( __strex(v529 - 1, v528) );
      v529 = (*v528)--;
    if ( v529 <= 0 )
      j_j_j_j__ZdlPv_9(v146);
  v147 = j_addToDoc(v2, "minecraft:behavior.random_stroll", "Allows a mob to randomly stroll around.");
  j__mXZDistDoc((int)v147);
  j__mYDistDoc((int)v147);
  v148 = j_addToDoc(v2, "minecraft:behavior.random_fly", "Allows a mob to randomly fly around.");
  j__mXZDistDoc((int)v148);
  j__mYDistDoc((int)v148);
  sub_21E94B4((void **)&v946, "can_land_on_trees");
  sub_21E94B4((void **)&v945, "true");
  v149 = (int *)sub_21E94B4((void **)&v944, "If true, the mob can stop flying and land on a tree instead of the ground");
    (int)v148,
    (const void **)&v946,
    &v945,
    v149);
  v150 = (void *)(v944 - 12);
  if ( (int *)(v944 - 12) != &dword_28898C0 )
    v530 = (unsigned int *)(v944 - 4);
        v531 = __ldrex(v530);
      while ( __strex(v531 - 1, v530) );
      v531 = (*v530)--;
    if ( v531 <= 0 )
      j_j_j_j__ZdlPv_9(v150);
  v151 = (void *)(v945 - 12);
  if ( (int *)(v945 - 12) != &dword_28898C0 )
    v532 = (unsigned int *)(v945 - 4);
        v533 = __ldrex(v532);
      while ( __strex(v533 - 1, v532) );
      v533 = (*v532)--;
    if ( v533 <= 0 )
      j_j_j_j__ZdlPv_9(v151);
  v152 = (void *)(v946 - 12);
  if ( (int *)(v946 - 12) != &dword_28898C0 )
    v534 = (unsigned int *)(v946 - 4);
        v535 = __ldrex(v534);
      while ( __strex(v535 - 1, v534) );
      v535 = (*v534)--;
    if ( v535 <= 0 )
      j_j_j_j__ZdlPv_9(v152);
  v153 = j_addToDoc(v2, "minecraft:behavior.tempt", "Allows the mob to be tempted by food they like.");
  j__mSpeedModifierDoc((int)v153);
  sub_21E94B4((void **)&v943, "List of items this mob is tempted by");
  j__mItemListDoc((int)v153, &v943);
  v154 = (void *)(v943 - 12);
  if ( (int *)(v943 - 12) != &dword_28898C0 )
    v536 = (unsigned int *)(v943 - 4);
        v537 = __ldrex(v536);
      while ( __strex(v537 - 1, v536) );
      v537 = (*v536)--;
    if ( v537 <= 0 )
      j_j_j_j__ZdlPv_9(v154);
  sub_21E94B4((void **)&v942, "can_get_scared");
  sub_21E94B4((void **)&v941, "false");
  v155 = (int *)sub_21E94B4(
                  (void **)&v940,
                  "If true, the mob can stop being tempted if the player moves too fast while close to this mob");
    (int)v153,
    (const void **)&v942,
    &v941,
    v155);
  v156 = (void *)(v940 - 12);
  if ( (int *)(v940 - 12) != &dword_28898C0 )
    v538 = (unsigned int *)(v940 - 4);
        v539 = __ldrex(v538);
      while ( __strex(v539 - 1, v538) );
      v539 = (*v538)--;
    if ( v539 <= 0 )
      j_j_j_j__ZdlPv_9(v156);
  v157 = (void *)(v941 - 12);
  if ( (int *)(v941 - 12) != &dword_28898C0 )
    v540 = (unsigned int *)(v941 - 4);
        v541 = __ldrex(v540);
      while ( __strex(v541 - 1, v540) );
      v541 = (*v540)--;
    if ( v541 <= 0 )
      j_j_j_j__ZdlPv_9(v157);
  v158 = (void *)(v942 - 12);
  if ( (int *)(v942 - 12) != &dword_28898C0 )
    v542 = (unsigned int *)(v942 - 4);
        v543 = __ldrex(v542);
      while ( __strex(v543 - 1, v542) );
      v543 = (*v542)--;
    if ( v543 <= 0 )
      j_j_j_j__ZdlPv_9(v158);
  sub_21E94B4((void **)&v939, "Distance in blocks this mob can get tempted by a player holding an item they like");
  j__mWithinDoc((int)v153, &v939);
  v159 = (void *)(v939 - 12);
  if ( (int *)(v939 - 12) != &dword_28898C0 )
    v544 = (unsigned int *)(v939 - 4);
        v545 = __ldrex(v544);
      while ( __strex(v545 - 1, v544) );
      v545 = (*v544)--;
    if ( v545 <= 0 )
      j_j_j_j__ZdlPv_9(v159);
    "minecraft:behavior.peek",
    "Allows the mob to peek out. This is what the shulker uses to look out of its shell.");
  v160 = j_addToDoc(
           "minecraft:behavior.play",
           "Allows the mob to play with other baby villagers. This can only be used by Villagers.");
  j__mSpeedModifierDoc((int)v160);
    "minecraft:behavior.receive_love",
    "Allows the villager to stop so another villager can breed with it. Can only be used by a Villager.");
  j_addToDoc(v2, "minecraft:behavior.take_flower", "Allows the mob to accept flowers from Iron Golems.");
  v161 = j_addToDoc(
           "minecraft:behavior.harvest_farm_block",
           "Allows the villager to harvest nearby farms. Can only be used by Villagers.");
  j__mSpeedModifierDoc((int)v161);
    "minecraft:behavior.squid_idle",
    "Allows the squid to swim in place idly. Can only be used by the Squid.");
  j_addToDoc(v2, "minecraft:behavior.squid_flee", "Allows the squid to swim away. Can only be used by the Squid.");
    "minecraft:behavior.squid_move_away_from_ground",
    "Allows the squid to move away from ground blocks and back to water. Can only be used by the Squid.");
    "minecraft:behavior.squid_out_of_water",
    "Allows the squid to stick to the ground when outside water. Can only be used by the Squid.");
    "minecraft:behavior.squid_dive",
    "Allows the squid to dive down in water. Can only be used by the Squid.");
  v162 = j_addToDoc(
           "minecraft:behavior.skeleton_horse_trap",
           "Allows Equine mobs to be Horse Traps and be triggered like them, spawning a lightning bolt and a bunch of hor"
           "ses when a player is nearby. Can only be used by Horses, Mules, Donkeys and Skeleton Horses.");
  sub_21E94B4((void **)&v938, "duration");
  sub_21E94B4((void **)&v937, "1.0");
  v163 = (int *)sub_21E94B4(
                  (void **)&v936,
                  "Amount of time in seconds the trap exists. After this amount of time is elapsed, the trap is removed f"
                  "rom the world if it hasn't been activated");
    (int)v162,
    (const void **)&v938,
    &v937,
    v163);
  v164 = (void *)(v936 - 12);
  if ( (int *)(v936 - 12) != &dword_28898C0 )
    v546 = (unsigned int *)(v936 - 4);
        v547 = __ldrex(v546);
      while ( __strex(v547 - 1, v546) );
      v547 = (*v546)--;
    if ( v547 <= 0 )
      j_j_j_j__ZdlPv_9(v164);
  v165 = (void *)(v937 - 12);
  if ( (int *)(v937 - 12) != &dword_28898C0 )
    v548 = (unsigned int *)(v937 - 4);
        v549 = __ldrex(v548);
      while ( __strex(v549 - 1, v548) );
      v549 = (*v548)--;
    if ( v549 <= 0 )
      j_j_j_j__ZdlPv_9(v165);
  v166 = (void *)(v938 - 12);
  if ( (int *)(v938 - 12) != &dword_28898C0 )
    v550 = (unsigned int *)(v938 - 4);
        v551 = __ldrex(v550);
      while ( __strex(v551 - 1, v550) );
      v551 = (*v550)--;
    if ( v551 <= 0 )
      j_j_j_j__ZdlPv_9(v166);
  sub_21E94B4((void **)&v935, "Distance in blocks that the player has to be within to trigger the horse trap");
  j__mWithinDoc((int)v162, &v935);
  v167 = (void *)(v935 - 12);
  if ( (int *)(v935 - 12) != &dword_28898C0 )
    v552 = (unsigned int *)(v935 - 4);
        v553 = __ldrex(v552);
      while ( __strex(v553 - 1, v552) );
      v553 = (*v552)--;
    if ( v553 <= 0 )
      j_j_j_j__ZdlPv_9(v167);
  v168 = j_addToDoc(
           "minecraft:behavior.swell",
           "Allows the creeper to swell up when a player is nearby. It can only be used by Creepers.");
  sub_21E94B4((void **)&v934, "This mob starts swelling when a target is at least this many blocks away");
  j__mStartDistanceDoc((int)v168, &v934);
  v169 = (void *)(v934 - 12);
  if ( (int *)(v934 - 12) != &dword_28898C0 )
    v554 = (unsigned int *)(v934 - 4);
        v555 = __ldrex(v554);
      while ( __strex(v555 - 1, v554) );
      v555 = (*v554)--;
    if ( v555 <= 0 )
      j_j_j_j__ZdlPv_9(v169);
  sub_21E94B4((void **)&v933, "This mob stops swelling when a target has moved away at least this many blocks");
  j__mStopDistanceDoc((int)v168, &v933);
  v170 = (void *)(v933 - 12);
  if ( (int *)(v933 - 12) != &dword_28898C0 )
    v556 = (unsigned int *)(v933 - 4);
        v557 = __ldrex(v556);
      while ( __strex(v557 - 1, v556) );
      v557 = (*v556)--;
    if ( v557 <= 0 )
      j_j_j_j__ZdlPv_9(v170);
    "minecraft:behavior.dragonholdingpattern",
    "Allows the Dragon to fly around in a circle around the center podium. Can only be used by the Ender Dragon.");
    "minecraft:behavior.dragonlanding",
    "Allows the Dragon to stop flying and transition into perching mode. Can only be used by the Ender Dragon.");
    "minecraft:behavior.dragonscanning",
    "Allows the dragon to look around for a player to attack while in perch mode. Can only be used by the Ender Dragon.");
    "minecraft:behavior.dragonflaming",
    "Allows the dragon to use its flame breath attack. Can only be used by the Ender Dragon.");
    "minecraft:behavior.dragontakeoff",
    "Allows the dragon to leave perch mode and go back to flying around. Can only be used by the Ender Dragon.");
    "minecraft:behavior.dragonchargeplayer",
    "Allows the dragon to attack a player by flying fast at them. The player is chosen by the dragonscanning goal. Can on"
    "ly be used by the Ender Dragon.");
    "minecraft:behavior.dragonstrafeplayer",
    "Allows the dragon to fly around looking for a player and shoot fireballs at them. Can only be used by the Ender Dragon.");
    "minecraft:behavior.dragondeath",
    "Allows the dragon to go out with glory. This controls the Ender Dragon's death animation and can't be used by other mobs.");
    "minecraft:behavior.enderman_leave_block",
    "Allows the enderman to drop a block they are carrying. Can only be used by Endermen.");
    "minecraft:behavior.enderman_take_block",
    "Allows the enderman to take a block and carry it around. Can only be used by Endermen.");
  v171 = j_addToDoc(
           "minecraft:behavior.leap_at_target",
           "Allows monsters to jump at and attack their target. Can only be used by hostile mobs.");
  sub_21E94B4((void **)&v932, "yd");
  sub_21E94B4((void **)&v931, "0.0");
  v172 = (int *)sub_21E94B4((void **)&v930, "The height in blocks the mob jumps when leaping at its target");
    (int)v171,
    (const void **)&v932,
    &v931,
    v172);
  v173 = (void *)(v930 - 12);
  if ( (int *)(v930 - 12) != &dword_28898C0 )
    v558 = (unsigned int *)(v930 - 4);
        v559 = __ldrex(v558);
      while ( __strex(v559 - 1, v558) );
      v559 = (*v558)--;
    if ( v559 <= 0 )
      j_j_j_j__ZdlPv_9(v173);
  v174 = (void *)(v931 - 12);
  if ( (int *)(v931 - 12) != &dword_28898C0 )
    v560 = (unsigned int *)(v931 - 4);
        v561 = __ldrex(v560);
      while ( __strex(v561 - 1, v560) );
      v561 = (*v560)--;
    if ( v561 <= 0 )
      j_j_j_j__ZdlPv_9(v174);
  v175 = (void *)(v932 - 12);
  if ( (int *)(v932 - 12) != &dword_28898C0 )
    v562 = (unsigned int *)(v932 - 4);
        v563 = __ldrex(v562);
      while ( __strex(v563 - 1, v562) );
      v563 = (*v562)--;
    if ( v563 <= 0 )
      j_j_j_j__ZdlPv_9(v175);
  sub_21E94B4((void **)&v929, "must_be_on_ground");
  sub_21E94B4((void **)&v928, "true");
  v176 = (int *)sub_21E94B4(
                  (void **)&v927,
                  "If true, the mob will only jump at its target if its on the ground. Setting it to false will allow it "
                  "to jump even if its already in the air");
    (const void **)&v929,
    &v928,
    v176);
  v177 = (void *)(v927 - 12);
  if ( (int *)(v927 - 12) != &dword_28898C0 )
    v564 = (unsigned int *)(v927 - 4);
        v565 = __ldrex(v564);
      while ( __strex(v565 - 1, v564) );
      v565 = (*v564)--;
    if ( v565 <= 0 )
      j_j_j_j__ZdlPv_9(v177);
  v178 = (void *)(v928 - 12);
  if ( (int *)(v928 - 12) != &dword_28898C0 )
    v566 = (unsigned int *)(v928 - 4);
        v567 = __ldrex(v566);
      while ( __strex(v567 - 1, v566) );
      v567 = (*v566)--;
    if ( v567 <= 0 )
      j_j_j_j__ZdlPv_9(v178);
  v179 = (void *)(v929 - 12);
  if ( (int *)(v929 - 12) != &dword_28898C0 )
    v568 = (unsigned int *)(v929 - 4);
        v569 = __ldrex(v568);
      while ( __strex(v569 - 1, v568) );
      v569 = (*v568)--;
    if ( v569 <= 0 )
      j_j_j_j__ZdlPv_9(v179);
    "minecraft:behavior.guardian_attack",
    "Allows the guardian to use its laser beam attack. Can only be used by Guardians and Elder Guardians.");
  j_addToDoc(v2, "minecraft:behavior.slime_float", "Allows the mob to float like slimes.");
  j_addToDoc(v2, "minecraft:behavior.slime_keep_on_jumping", "Allows the mob to continuously jump around like a slime.");
    "minecraft:behavior.slime_random_direction",
    "Allows the mob to move in random directions like a slime.");
  j_addToDoc(v2, "minecraft:behavior.slime_attack", "Allows the mob to use a melee attack like the slime's.");
  v180 = j_addToDoc(
           "minecraft:behavior.raid_garden",
           "Allows the mob to eat crops out of farms until they are full.");
  j__mSpeedModifierDoc((int)v180);
  sub_21E94B4((void **)&v926, "Distance in blocks the mob will look for crops to eat");
  j__mSearchRangeDoc((int)v180, &v926);
  v181 = (void *)(v926 - 12);
  if ( (int *)(v926 - 12) != &dword_28898C0 )
    v570 = (unsigned int *)(v926 - 4);
        v571 = __ldrex(v570);
      while ( __strex(v571 - 1, v570) );
      v571 = (*v570)--;
    if ( v571 <= 0 )
      j_j_j_j__ZdlPv_9(v181);
  j__mGoalRadius((int)v180);
  sub_21E94B4((void **)&v925, "max_to_eat");
  sub_21E94B4((void **)&v924, "6");
  v182 = (int *)sub_21E94B4((void **)&v923, "Maximum number of things this entity wants to eat");
    (int)v180,
    (const void **)&v925,
    &v924,
    v182);
  v183 = (void *)(v923 - 12);
  if ( (int *)(v923 - 12) != &dword_28898C0 )
    v572 = (unsigned int *)(v923 - 4);
        v573 = __ldrex(v572);
      while ( __strex(v573 - 1, v572) );
      v573 = (*v572)--;
    if ( v573 <= 0 )
      j_j_j_j__ZdlPv_9(v183);
  v184 = (void *)(v924 - 12);
  if ( (int *)(v924 - 12) != &dword_28898C0 )
    v574 = (unsigned int *)(v924 - 4);
        v575 = __ldrex(v574);
      while ( __strex(v575 - 1, v574) );
      v575 = (*v574)--;
    if ( v575 <= 0 )
      j_j_j_j__ZdlPv_9(v184);
  v185 = (void *)(v925 - 12);
  if ( (int *)(v925 - 12) != &dword_28898C0 )
    v576 = (unsigned int *)(v925 - 4);
        v577 = __ldrex(v576);
      while ( __strex(v577 - 1, v576) );
      v577 = (*v576)--;
    if ( v577 <= 0 )
      j_j_j_j__ZdlPv_9(v185);
  sub_21E94B4((void **)&v922, "full_delay");
  sub_21E94B4((void **)&v921, "100");
  v186 = (int *)sub_21E94B4((void **)&v920, "Amount of time in seconds before this mob wants to eat again");
    (const void **)&v922,
    &v921,
    v186);
  v187 = (void *)(v920 - 12);
  if ( (int *)(v920 - 12) != &dword_28898C0 )
    v578 = (unsigned int *)(v920 - 4);
        v579 = __ldrex(v578);
      while ( __strex(v579 - 1, v578) );
      v579 = (*v578)--;
    if ( v579 <= 0 )
      j_j_j_j__ZdlPv_9(v187);
  v188 = (void *)(v921 - 12);
  if ( (int *)(v921 - 12) != &dword_28898C0 )
    v580 = (unsigned int *)(v921 - 4);
        v581 = __ldrex(v580);
      while ( __strex(v581 - 1, v580) );
      v581 = (*v580)--;
    if ( v581 <= 0 )
      j_j_j_j__ZdlPv_9(v188);
  v189 = (void *)(v922 - 12);
  if ( (int *)(v922 - 12) != &dword_28898C0 )
    v582 = (unsigned int *)(v922 - 4);
        v583 = __ldrex(v582);
      while ( __strex(v583 - 1, v582) );
      v583 = (*v582)--;
    if ( v583 <= 0 )
      j_j_j_j__ZdlPv_9(v189);
  sub_21E94B4((void **)&v919, "eat_delay");
  sub_21E94B4((void **)&v918, "2");
  v190 = (int *)sub_21E94B4((void **)&v917, "Time in seconds between each time it eats");
    (const void **)&v919,
    &v918,
    v190);
  v191 = (void *)(v917 - 12);
  if ( (int *)(v917 - 12) != &dword_28898C0 )
    v584 = (unsigned int *)(v917 - 4);
        v585 = __ldrex(v584);
      while ( __strex(v585 - 1, v584) );
      v585 = (*v584)--;
    if ( v585 <= 0 )
      j_j_j_j__ZdlPv_9(v191);
  v192 = (void *)(v918 - 12);
  if ( (int *)(v918 - 12) != &dword_28898C0 )
    v586 = (unsigned int *)(v918 - 4);
        v587 = __ldrex(v586);
      while ( __strex(v587 - 1, v586) );
      v587 = (*v586)--;
    if ( v587 <= 0 )
      j_j_j_j__ZdlPv_9(v192);
  v193 = (void *)(v919 - 12);
  if ( (int *)(v919 - 12) != &dword_28898C0 )
    v588 = (unsigned int *)(v919 - 4);
        v589 = __ldrex(v588);
      while ( __strex(v589 - 1, v588) );
      v589 = (*v588)--;
    if ( v589 <= 0 )
      j_j_j_j__ZdlPv_9(v193);
  sub_21E94B4((void **)&v916, "blocks");
  sub_21E94B4((void **)&v915, (const char *)&unk_257BC67);
  v194 = (int *)sub_21E94B4((void **)&v914, "Blocks that the mob is looking for to eat");
    (int *)&DocumentationSystem::LIST_TYPE,
    (const void **)&v916,
    &v915,
    v194);
  v195 = (void *)(v914 - 12);
  if ( (int *)(v914 - 12) != &dword_28898C0 )
    v590 = (unsigned int *)(v914 - 4);
        v591 = __ldrex(v590);
      while ( __strex(v591 - 1, v590) );
      v591 = (*v590)--;
    if ( v591 <= 0 )
      j_j_j_j__ZdlPv_9(v195);
  v196 = (void *)(v915 - 12);
  if ( (int *)(v915 - 12) != &dword_28898C0 )
    v592 = (unsigned int *)(v915 - 4);
        v593 = __ldrex(v592);
      while ( __strex(v593 - 1, v592) );
      v593 = (*v592)--;
    if ( v593 <= 0 )
      j_j_j_j__ZdlPv_9(v196);
  v197 = (void *)(v916 - 12);
  if ( (int *)(v916 - 12) != &dword_28898C0 )
    v594 = (unsigned int *)(v916 - 4);
        v595 = __ldrex(v594);
      while ( __strex(v595 - 1, v594) );
      v595 = (*v594)--;
    if ( v595 <= 0 )
      j_j_j_j__ZdlPv_9(v197);
  j_addToDoc(v2, "minecraft:behavior.player_ride_tamed", "Allows the mob to be ridden by the player after being tamed.");
  v198 = j_addToDoc(
           "minecraft:behavior.find_mount",
           "Allows the mob to look around for another mob to ride atop it.");
  sub_21E94B4((void **)&v913, "Distance in blocks within which the mob will look for a mount");
  j__mWithinDoc((int)v198, &v913);
  v199 = (void *)(v913 - 12);
  if ( (int *)(v913 - 12) != &dword_28898C0 )
    v596 = (unsigned int *)(v913 - 4);
        v597 = __ldrex(v596);
      while ( __strex(v597 - 1, v596) );
      v597 = (*v596)--;
    if ( v597 <= 0 )
      j_j_j_j__ZdlPv_9(v199);
  sub_21E94B4((void **)&v912, "start_delay");
  sub_21E94B4((void **)&v911, "0");
  v200 = (int *)sub_21E94B4((void **)&v910, "Time the mob will wait before starting to move towards the mount");
    (int)v198,
    (const void **)&v912,
    &v911,
    v200);
  v201 = (void *)(v910 - 12);
  if ( (int *)(v910 - 12) != &dword_28898C0 )
    v598 = (unsigned int *)(v910 - 4);
        v599 = __ldrex(v598);
      while ( __strex(v599 - 1, v598) );
      v599 = (*v598)--;
    if ( v599 <= 0 )
      j_j_j_j__ZdlPv_9(v201);
  v202 = (void *)(v911 - 12);
  if ( (int *)(v911 - 12) != &dword_28898C0 )
    v600 = (unsigned int *)(v911 - 4);
        v601 = __ldrex(v600);
      while ( __strex(v601 - 1, v600) );
      v601 = (*v600)--;
    if ( v601 <= 0 )
      j_j_j_j__ZdlPv_9(v202);
  v203 = (void *)(v912 - 12);
  if ( (int *)(v912 - 12) != &dword_28898C0 )
    v602 = (unsigned int *)(v912 - 4);
        v603 = __ldrex(v602);
      while ( __strex(v603 - 1, v602) );
      v603 = (*v602)--;
    if ( v603 <= 0 )
      j_j_j_j__ZdlPv_9(v203);
  sub_21E94B4((void **)&v909, "avoid_water");
  sub_21E94B4((void **)&v908, "false");
  v204 = (int *)sub_21E94B4((void **)&v907, "If true, the mob will not go into water blocks when going towards a mount");
    (const void **)&v909,
    &v908,
    v204);
  v205 = (void *)(v907 - 12);
  if ( (int *)(v907 - 12) != &dword_28898C0 )
    v604 = (unsigned int *)(v907 - 4);
        v605 = __ldrex(v604);
      while ( __strex(v605 - 1, v604) );
      v605 = (*v604)--;
    if ( v605 <= 0 )
      j_j_j_j__ZdlPv_9(v205);
  v206 = (void *)(v908 - 12);
  if ( (int *)(v908 - 12) != &dword_28898C0 )
    v606 = (unsigned int *)(v908 - 4);
        v607 = __ldrex(v606);
      while ( __strex(v607 - 1, v606) );
      v607 = (*v606)--;
    if ( v607 <= 0 )
      j_j_j_j__ZdlPv_9(v206);
  v207 = (void *)(v909 - 12);
  if ( (int *)(v909 - 12) != &dword_28898C0 )
    v608 = (unsigned int *)(v909 - 4);
        v609 = __ldrex(v608);
      while ( __strex(v609 - 1, v608) );
      v609 = (*v608)--;
    if ( v609 <= 0 )
      j_j_j_j__ZdlPv_9(v207);
  sub_21E94B4((void **)&v906, "target_needed");
  sub_21E94B4((void **)&v905, "false");
  v208 = (int *)sub_21E94B4((void **)&v904, "If true, the mob will only look for a mount if it has a target");
    (const void **)&v906,
    &v905,
    v208);
  v209 = (void *)(v904 - 12);
  if ( (int *)(v904 - 12) != &dword_28898C0 )
    v610 = (unsigned int *)(v904 - 4);
        v611 = __ldrex(v610);
      while ( __strex(v611 - 1, v610) );
      v611 = (*v610)--;
    if ( v611 <= 0 )
      j_j_j_j__ZdlPv_9(v209);
  v210 = (void *)(v905 - 12);
  if ( (int *)(v905 - 12) != &dword_28898C0 )
    v612 = (unsigned int *)(v905 - 4);
        v613 = __ldrex(v612);
      while ( __strex(v613 - 1, v612) );
      v613 = (*v612)--;
    if ( v613 <= 0 )
      j_j_j_j__ZdlPv_9(v210);
  v211 = (void *)(v906 - 12);
  if ( (int *)(v906 - 12) != &dword_28898C0 )
    v614 = (unsigned int *)(v906 - 4);
        v615 = __ldrex(v614);
      while ( __strex(v615 - 1, v614) );
      v615 = (*v614)--;
    if ( v615 <= 0 )
      j_j_j_j__ZdlPv_9(v211);
  sub_21E94B4((void **)&v903, "mount_distance");
  sub_21E94B4((void **)&v902, "-1.0");
  v212 = (int *)sub_21E94B4(
                  (void **)&v901,
                  "This is the distance the mob needs to be, in blocks, from the desired mount to mount it. If the value "
                  "is below 0, the mob will use its default attack distance");
    (const void **)&v903,
    &v902,
    v212);
  v213 = (void *)(v901 - 12);
  if ( (int *)(v901 - 12) != &dword_28898C0 )
    v616 = (unsigned int *)(v901 - 4);
        v617 = __ldrex(v616);
      while ( __strex(v617 - 1, v616) );
      v617 = (*v616)--;
    if ( v617 <= 0 )
      j_j_j_j__ZdlPv_9(v213);
  v214 = (void *)(v902 - 12);
  if ( (int *)(v902 - 12) != &dword_28898C0 )
    v618 = (unsigned int *)(v902 - 4);
        v619 = __ldrex(v618);
      while ( __strex(v619 - 1, v618) );
      v619 = (*v618)--;
    if ( v619 <= 0 )
      j_j_j_j__ZdlPv_9(v214);
  v215 = (void *)(v903 - 12);
  if ( (int *)(v903 - 12) != &dword_28898C0 )
    v620 = (unsigned int *)(v903 - 4);
        v621 = __ldrex(v620);
      while ( __strex(v621 - 1, v620) );
      v621 = (*v620)--;
    if ( v621 <= 0 )
      j_j_j_j__ZdlPv_9(v215);
  j_addToDoc(v2, "minecraft:behavior.controlled_by_player", "Allows the mob to be controlled by the player.");
    "minecraft:behavior.wither_random_attack_pos_goal",
    "Allows the wither to launch random attacks. Can only be used by the Wither Boss.");
  v216 = j_addToDoc(
           "minecraft:behavior.wither_target_highest_damage",
           "Allows the wither to focus its attacks on whichever mob has dealt the most damage to it.");
    (void **)&v900,
    "List of entity types the wither takes into account to find who dealt the most damage to it");
  j__mMobDescriptionsDoc((int)v216, &v900);
  v217 = (void *)(v900 - 12);
  if ( (int *)(v900 - 12) != &dword_28898C0 )
    v622 = (unsigned int *)(v900 - 4);
        v623 = __ldrex(v622);
      while ( __strex(v623 - 1, v622) );
      v623 = (*v622)--;
    if ( v623 <= 0 )
      j_j_j_j__ZdlPv_9(v217);
  v218 = j_addToDoc(v2, "minecraft:behavior.float_wander", "Allows the mob to float around like the Ghast.");
  j__mXZDistDoc((int)v218);
  j__mYDistDoc((int)v218);
  sub_21E94B4((void **)&v899, "y_offset");
  sub_21E94B4((void **)&v898, "0.0");
  v219 = (int *)sub_21E94B4((void **)&v897, "Height in blocks to add to the selected target position");
    (int)v218,
    (const void **)&v899,
    &v898,
    v219);
  v220 = (void *)(v897 - 12);
  if ( (int *)(v897 - 12) != &dword_28898C0 )
    v624 = (unsigned int *)(v897 - 4);
        v625 = __ldrex(v624);
      while ( __strex(v625 - 1, v624) );
      v625 = (*v624)--;
    if ( v625 <= 0 )
      j_j_j_j__ZdlPv_9(v220);
  v221 = (void *)(v898 - 12);
  if ( (int *)(v898 - 12) != &dword_28898C0 )
    v626 = (unsigned int *)(v898 - 4);
        v627 = __ldrex(v626);
      while ( __strex(v627 - 1, v626) );
      v627 = (*v626)--;
    if ( v627 <= 0 )
      j_j_j_j__ZdlPv_9(v221);
  v222 = (void *)(v899 - 12);
  if ( (int *)(v899 - 12) != &dword_28898C0 )
    v628 = (unsigned int *)(v899 - 4);
        v629 = __ldrex(v628);
      while ( __strex(v629 - 1, v628) );
      v629 = (*v628)--;
    if ( v629 <= 0 )
      j_j_j_j__ZdlPv_9(v222);
  sub_21E94B4((void **)&v896, "If true, the point has to be reachable to be a valid target");
  j__mMustReachDoc((int)v218, &v896);
  v223 = (void *)(v896 - 12);
  if ( (int *)(v896 - 12) != &dword_28898C0 )
    v630 = (unsigned int *)(v896 - 4);
        v631 = __ldrex(v630);
      while ( __strex(v631 - 1, v630) );
      v631 = (*v630)--;
    if ( v631 <= 0 )
      j_j_j_j__ZdlPv_9(v223);
  sub_21E94B4((void **)&v895, "random_reselect");
  sub_21E94B4((void **)&v894, "false");
  v224 = (int *)sub_21E94B4(
                  (void **)&v893,
                  "If true, the mob will randomly pick a new point while moving to the previously selected one");
    (const void **)&v895,
    &v894,
    v224);
  v225 = (void *)(v893 - 12);
  if ( (int *)(v893 - 12) != &dword_28898C0 )
    v632 = (unsigned int *)(v893 - 4);
        v633 = __ldrex(v632);
      while ( __strex(v633 - 1, v632) );
      v633 = (*v632)--;
    if ( v633 <= 0 )
      j_j_j_j__ZdlPv_9(v225);
  v226 = (void *)(v894 - 12);
  if ( (int *)(v894 - 12) != &dword_28898C0 )
    v634 = (unsigned int *)(v894 - 4);
        v635 = __ldrex(v634);
      while ( __strex(v635 - 1, v634) );
      v635 = (*v634)--;
    if ( v635 <= 0 )
      j_j_j_j__ZdlPv_9(v226);
  v227 = (void *)(v895 - 12);
  if ( (int *)(v895 - 12) != &dword_28898C0 )
    v636 = (unsigned int *)(v895 - 4);
        v637 = __ldrex(v636);
      while ( __strex(v637 - 1, v636) );
      v637 = (*v636)--;
    if ( v637 <= 0 )
      j_j_j_j__ZdlPv_9(v227);
  sub_21E94B4((void **)&v892, "float_duration");
  sub_21E94B4((void **)&v891, "[0.0, 0.0]");
  v228 = (int *)sub_21E94B4(
                  (void **)&v890,
                  "Range of time in seconds the mob will float around before landing and choosing to do something else");
    (int *)&DocumentationSystem::RANGE_TYPE,
    (const void **)&v892,
    &v891,
    v228);
  v229 = (void *)(v890 - 12);
  if ( (int *)(v890 - 12) != &dword_28898C0 )
    v638 = (unsigned int *)(v890 - 4);
        v639 = __ldrex(v638);
      while ( __strex(v639 - 1, v638) );
      v639 = (*v638)--;
    if ( v639 <= 0 )
      j_j_j_j__ZdlPv_9(v229);
  v230 = (void *)(v891 - 12);
  if ( (int *)(v891 - 12) != &dword_28898C0 )
    v640 = (unsigned int *)(v891 - 4);
        v641 = __ldrex(v640);
      while ( __strex(v641 - 1, v640) );
      v641 = (*v640)--;
    if ( v641 <= 0 )
      j_j_j_j__ZdlPv_9(v230);
  v231 = (void *)(v892 - 12);
  if ( (int *)(v892 - 12) != &dword_28898C0 )
    v642 = (unsigned int *)(v892 - 4);
        v643 = __ldrex(v642);
      while ( __strex(v643 - 1, v642) );
      v643 = (*v642)--;
    if ( v643 <= 0 )
      j_j_j_j__ZdlPv_9(v231);
  j_addToDoc(v2, "minecraft:behavior.trade_with_player", "Allows the player to trade with this mob.");
  v232 = j_addToDoc(
           "minecraft:behavior.summon_entity",
           "Allows the mob to attack the player by summoning other entities.");
  sub_21E94B4((void **)&v889, "summon_choices");
  sub_21E94B4((void **)&v888, (const char *)&unk_257BC67);
  v233 = (int *)sub_21E94B4(
                  (void **)&v887,
                  "List of spells for the mob to use to summon entities. Each spell has the following parameters:");
  v234 = j_DocumentationSystem::Node::addNode(
           (int)v232,
           (int *)&DocumentationSystem::LIST_TYPE,
           (const void **)&v889,
           &v888,
           v233);
  v235 = (void *)(v887 - 12);
  if ( (int *)(v887 - 12) != &dword_28898C0 )
    v644 = (unsigned int *)(v887 - 4);
        v645 = __ldrex(v644);
      while ( __strex(v645 - 1, v644) );
      v645 = (*v644)--;
    if ( v645 <= 0 )
      j_j_j_j__ZdlPv_9(v235);
  v236 = (void *)(v888 - 12);
  if ( (int *)(v888 - 12) != &dword_28898C0 )
    v646 = (unsigned int *)(v888 - 4);
        v647 = __ldrex(v646);
      while ( __strex(v647 - 1, v646) );
      v647 = (*v646)--;
    if ( v647 <= 0 )
      j_j_j_j__ZdlPv_9(v236);
  v237 = (void *)(v889 - 12);
  if ( (int *)(v889 - 12) != &dword_28898C0 )
    v648 = (unsigned int *)(v889 - 4);
        v649 = __ldrex(v648);
      while ( __strex(v649 - 1, v648) );
      v649 = (*v648)--;
    if ( v649 <= 0 )
      j_j_j_j__ZdlPv_9(v237);
  v234[4] = 1;
  sub_21E8190((void **)v234 + 5, "Parameters of each spell", (_BYTE *)0x18);
  sub_21E94B4((void **)&v886, "min_activation_range");
  sub_21E94B4((void **)&v885, "1.0");
  v238 = (int *)sub_21E94B4((void **)&v884, "Lower bound of the activation distance in blocks for this spell");
    (int)v234,
    (const void **)&v886,
    &v885,
    v238);
  v239 = (void *)(v884 - 12);
  if ( (int *)(v884 - 12) != &dword_28898C0 )
    v650 = (unsigned int *)(v884 - 4);
        v651 = __ldrex(v650);
      while ( __strex(v651 - 1, v650) );
      v651 = (*v650)--;
    if ( v651 <= 0 )
      j_j_j_j__ZdlPv_9(v239);
  v240 = (void *)(v885 - 12);
  if ( (int *)(v885 - 12) != &dword_28898C0 )
    v652 = (unsigned int *)(v885 - 4);
        v653 = __ldrex(v652);
      while ( __strex(v653 - 1, v652) );
      v653 = (*v652)--;
    if ( v653 <= 0 )
      j_j_j_j__ZdlPv_9(v240);
  v241 = (void *)(v886 - 12);
  if ( (int *)(v886 - 12) != &dword_28898C0 )
    v654 = (unsigned int *)(v886 - 4);
        v655 = __ldrex(v654);
      while ( __strex(v655 - 1, v654) );
      v655 = (*v654)--;
    if ( v655 <= 0 )
      j_j_j_j__ZdlPv_9(v241);
  sub_21E94B4((void **)&v883, "max_activation_range");
  sub_21E94B4((void **)&v882, "-1.0");
  v242 = (int *)sub_21E94B4((void **)&v881, "Upper bound of the activation distance in blocks for this spell");
    (const void **)&v883,
    &v882,
    v242);
  v243 = (void *)(v881 - 12);
  if ( (int *)(v881 - 12) != &dword_28898C0 )
    v656 = (unsigned int *)(v881 - 4);
        v657 = __ldrex(v656);
      while ( __strex(v657 - 1, v656) );
      v657 = (*v656)--;
    if ( v657 <= 0 )
      j_j_j_j__ZdlPv_9(v243);
  v244 = (void *)(v882 - 12);
  if ( (int *)(v882 - 12) != &dword_28898C0 )
    v658 = (unsigned int *)(v882 - 4);
        v659 = __ldrex(v658);
      while ( __strex(v659 - 1, v658) );
      v659 = (*v658)--;
    if ( v659 <= 0 )
      j_j_j_j__ZdlPv_9(v244);
  v245 = (void *)(v883 - 12);
  if ( (int *)(v883 - 12) != &dword_28898C0 )
    v660 = (unsigned int *)(v883 - 4);
        v661 = __ldrex(v660);
      while ( __strex(v661 - 1, v660) );
      v661 = (*v660)--;
    if ( v661 <= 0 )
      j_j_j_j__ZdlPv_9(v245);
  sub_21E94B4((void **)&v880, "cooldown_time");
  sub_21E94B4((void **)&v879, "0.0");
  v246 = (int *)sub_21E94B4((void **)&v878, "Time in seconds the mob has to wait before using the spell again");
    (const void **)&v880,
    &v879,
    v246);
  v247 = (void *)(v878 - 12);
  if ( (int *)(v878 - 12) != &dword_28898C0 )
    v662 = (unsigned int *)(v878 - 4);
        v663 = __ldrex(v662);
      while ( __strex(v663 - 1, v662) );
      v663 = (*v662)--;
    if ( v663 <= 0 )
      j_j_j_j__ZdlPv_9(v247);
  v248 = (void *)(v879 - 12);
  if ( (int *)(v879 - 12) != &dword_28898C0 )
    v664 = (unsigned int *)(v879 - 4);
        v665 = __ldrex(v664);
      while ( __strex(v665 - 1, v664) );
      v665 = (*v664)--;
    if ( v665 <= 0 )
      j_j_j_j__ZdlPv_9(v248);
  v249 = (void *)(v880 - 12);
  if ( (int *)(v880 - 12) != &dword_28898C0 )
    v666 = (unsigned int *)(v880 - 4);
        v667 = __ldrex(v666);
      while ( __strex(v667 - 1, v666) );
      v667 = (*v666)--;
    if ( v667 <= 0 )
      j_j_j_j__ZdlPv_9(v249);
  sub_21E94B4((void **)&v877, "weight");
  sub_21E94B4((void **)&v876, "0.0");
  v250 = (int *)sub_21E94B4(
                  (void **)&v875,
                  "The weight of this spell. Controls how likely the mob is to choose this spell when casting one");
    (const void **)&v877,
    &v876,
    v250);
  v251 = (void *)(v875 - 12);
  if ( (int *)(v875 - 12) != &dword_28898C0 )
    v668 = (unsigned int *)(v875 - 4);
        v669 = __ldrex(v668);
      while ( __strex(v669 - 1, v668) );
      v669 = (*v668)--;
    if ( v669 <= 0 )
      j_j_j_j__ZdlPv_9(v251);
  v252 = (void *)(v876 - 12);
  if ( (int *)(v876 - 12) != &dword_28898C0 )
    v670 = (unsigned int *)(v876 - 4);
        v671 = __ldrex(v670);
      while ( __strex(v671 - 1, v670) );
      v671 = (*v670)--;
    if ( v671 <= 0 )
      j_j_j_j__ZdlPv_9(v252);
  v253 = (void *)(v877 - 12);
  if ( (int *)(v877 - 12) != &dword_28898C0 )
    v672 = (unsigned int *)(v877 - 4);
        v673 = __ldrex(v672);
      while ( __strex(v673 - 1, v672) );
      v673 = (*v672)--;
    if ( v673 <= 0 )
      j_j_j_j__ZdlPv_9(v253);
  sub_21E94B4((void **)&v874, "particle_color");
  sub_21E94B4((void **)&v873, "0");
  v254 = (int *)sub_21E94B4((void **)&v872, "The color of the particles for this spell");
    (const void **)&v874,
    &v873,
    v254);
  v255 = (void *)(v872 - 12);
  if ( (int *)(v872 - 12) != &dword_28898C0 )
    v674 = (unsigned int *)(v872 - 4);
        v675 = __ldrex(v674);
      while ( __strex(v675 - 1, v674) );
      v675 = (*v674)--;
    if ( v675 <= 0 )
      j_j_j_j__ZdlPv_9(v255);
  v256 = (void *)(v873 - 12);
  if ( (int *)(v873 - 12) != &dword_28898C0 )
    v676 = (unsigned int *)(v873 - 4);
        v677 = __ldrex(v676);
      while ( __strex(v677 - 1, v676) );
      v677 = (*v676)--;
    if ( v677 <= 0 )
      j_j_j_j__ZdlPv_9(v256);
  v257 = (void *)(v874 - 12);
  if ( (int *)(v874 - 12) != &dword_28898C0 )
    v678 = (unsigned int *)(v874 - 4);
        v679 = __ldrex(v678);
      while ( __strex(v679 - 1, v678) );
      v679 = (*v678)--;
    if ( v679 <= 0 )
      j_j_j_j__ZdlPv_9(v257);
  sub_21E94B4((void **)&v871, "filters");
  sub_21E94B4((void **)&v870, (const char *)&unk_257BC67);
  v258 = (int *)sub_21E94B4((void **)&v869, (const char *)&unk_257BC67);
    (const void **)&v871,
    &v870,
    v258);
  v259 = (void *)(v869 - 12);
  if ( (int *)(v869 - 12) != &dword_28898C0 )
    v680 = (unsigned int *)(v869 - 4);
        v681 = __ldrex(v680);
      while ( __strex(v681 - 1, v680) );
      v681 = (*v680)--;
    if ( v681 <= 0 )
      j_j_j_j__ZdlPv_9(v259);
  v260 = (void *)(v870 - 12);
  if ( (int *)(v870 - 12) != &dword_28898C0 )
    v682 = (unsigned int *)(v870 - 4);
        v683 = __ldrex(v682);
      while ( __strex(v683 - 1, v682) );
      v683 = (*v682)--;
    if ( v683 <= 0 )
      j_j_j_j__ZdlPv_9(v260);
  v261 = (void *)(v871 - 12);
  if ( (int *)(v871 - 12) != &dword_28898C0 )
    v684 = (unsigned int *)(v871 - 4);
        v685 = __ldrex(v684);
      while ( __strex(v685 - 1, v684) );
      v685 = (*v684)--;
    if ( v685 <= 0 )
      j_j_j_j__ZdlPv_9(v261);
  sub_21E94B4((void **)&v868, "start_sound_event");
  sub_21E94B4((void **)&v867, (const char *)&unk_257BC67);
  v262 = (int *)sub_21E94B4((void **)&v866, "The sound event to play when using this spell");
    (int *)&DocumentationSystem::STRING_TYPE,
    (const void **)&v868,
    &v867,
    v262);
  v263 = (void *)(v866 - 12);
  if ( (int *)(v866 - 12) != &dword_28898C0 )
    v686 = (unsigned int *)(v866 - 4);
        v687 = __ldrex(v686);
      while ( __strex(v687 - 1, v686) );
      v687 = (*v686)--;
    if ( v687 <= 0 )
      j_j_j_j__ZdlPv_9(v263);
  v264 = (void *)(v867 - 12);
  if ( (int *)(v867 - 12) != &dword_28898C0 )
    v688 = (unsigned int *)(v867 - 4);
        v689 = __ldrex(v688);
      while ( __strex(v689 - 1, v688) );
      v689 = (*v688)--;
    if ( v689 <= 0 )
      j_j_j_j__ZdlPv_9(v264);
  v265 = (void *)(v868 - 12);
  if ( (int *)(v868 - 12) != &dword_28898C0 )
    v690 = (unsigned int *)(v868 - 4);
        v691 = __ldrex(v690);
      while ( __strex(v691 - 1, v690) );
      v691 = (*v690)--;
    if ( v691 <= 0 )
      j_j_j_j__ZdlPv_9(v265);
  sub_21E94B4((void **)&v865, "sequence");
  sub_21E94B4((void **)&v864, (const char *)&unk_257BC67);
  v266 = (int *)sub_21E94B4((void **)&v863, "List of steps for the spell. Each step has the following parameters:");
  v267 = j_DocumentationSystem::Node::addNode(
           (int)v234,
           (const void **)&v865,
           &v864,
           v266);
  v268 = (void *)(v863 - 12);
  if ( (int *)(v863 - 12) != &dword_28898C0 )
    v692 = (unsigned int *)(v863 - 4);
        v693 = __ldrex(v692);
      while ( __strex(v693 - 1, v692) );
      v693 = (*v692)--;
    if ( v693 <= 0 )
      j_j_j_j__ZdlPv_9(v268);
  v269 = (void *)(v864 - 12);
  if ( (int *)(v864 - 12) != &dword_28898C0 )
    v694 = (unsigned int *)(v864 - 4);
        v695 = __ldrex(v694);
      while ( __strex(v695 - 1, v694) );
      v695 = (*v694)--;
    if ( v695 <= 0 )
      j_j_j_j__ZdlPv_9(v269);
  v270 = (void *)(v865 - 12);
  if ( (int *)(v865 - 12) != &dword_28898C0 )
    v696 = (unsigned int *)(v865 - 4);
        v697 = __ldrex(v696);
      while ( __strex(v697 - 1, v696) );
      v697 = (*v696)--;
    if ( v697 <= 0 )
      j_j_j_j__ZdlPv_9(v270);
  v267[4] = 1;
  sub_21E8190((void **)v267 + 5, "Parameters of each step", (_BYTE *)0x17);
  sub_21E94B4((void **)&v862, "shape");
  sub_21E94B4((void **)&v861, "line");
  v271 = (int *)sub_21E94B4((void **)&v860, "The base shape of this step. Valid values are circle and line");
    (int)v267,
    (const void **)&v862,
    &v861,
    v271);
  v272 = (void *)(v860 - 12);
  if ( (int *)(v860 - 12) != &dword_28898C0 )
    v698 = (unsigned int *)(v860 - 4);
        v699 = __ldrex(v698);
      while ( __strex(v699 - 1, v698) );
      v699 = (*v698)--;
    if ( v699 <= 0 )
      j_j_j_j__ZdlPv_9(v272);
  v273 = (void *)(v861 - 12);
  if ( (int *)(v861 - 12) != &dword_28898C0 )
    v700 = (unsigned int *)(v861 - 4);
        v701 = __ldrex(v700);
      while ( __strex(v701 - 1, v700) );
      v701 = (*v700)--;
    if ( v701 <= 0 )
      j_j_j_j__ZdlPv_9(v273);
  v274 = (void *)(v862 - 12);
  if ( (int *)(v862 - 12) != &dword_28898C0 )
    v702 = (unsigned int *)(v862 - 4);
        v703 = __ldrex(v702);
      while ( __strex(v703 - 1, v702) );
      v703 = (*v702)--;
    if ( v703 <= 0 )
      j_j_j_j__ZdlPv_9(v274);
  sub_21E94B4((void **)&v859, "base_delay");
  sub_21E94B4((void **)&v858, "0.0");
  v275 = (int *)sub_21E94B4((void **)&v857, "Amount of time in seconds to wait before this step starts");
    (const void **)&v859,
    &v858,
    v275);
  v276 = (void *)(v857 - 12);
  if ( (int *)(v857 - 12) != &dword_28898C0 )
    v704 = (unsigned int *)(v857 - 4);
        v705 = __ldrex(v704);
      while ( __strex(v705 - 1, v704) );
      v705 = (*v704)--;
    if ( v705 <= 0 )
      j_j_j_j__ZdlPv_9(v276);
  v277 = (void *)(v858 - 12);
  if ( (int *)(v858 - 12) != &dword_28898C0 )
    v706 = (unsigned int *)(v858 - 4);
        v707 = __ldrex(v706);
      while ( __strex(v707 - 1, v706) );
      v707 = (*v706)--;
    if ( v707 <= 0 )
      j_j_j_j__ZdlPv_9(v277);
  v278 = (void *)(v859 - 12);
  if ( (int *)(v859 - 12) != &dword_28898C0 )
    v708 = (unsigned int *)(v859 - 4);
        v709 = __ldrex(v708);
      while ( __strex(v709 - 1, v708) );
      v709 = (*v708)--;
    if ( v709 <= 0 )
      j_j_j_j__ZdlPv_9(v278);
  sub_21E94B4((void **)&v856, "delay_per_summon");
  sub_21E94B4((void **)&v855, "0.0");
  v279 = (int *)sub_21E94B4((void **)&v854, "Amount of time in seconds before each entity is summoned in this step");
    (const void **)&v856,
    &v855,
    v279);
  v280 = (void *)(v854 - 12);
  if ( (int *)(v854 - 12) != &dword_28898C0 )
    v710 = (unsigned int *)(v854 - 4);
        v711 = __ldrex(v710);
      while ( __strex(v711 - 1, v710) );
      v711 = (*v710)--;
    if ( v711 <= 0 )
      j_j_j_j__ZdlPv_9(v280);
  v281 = (void *)(v855 - 12);
  if ( (int *)(v855 - 12) != &dword_28898C0 )
    v712 = (unsigned int *)(v855 - 4);
        v713 = __ldrex(v712);
      while ( __strex(v713 - 1, v712) );
      v713 = (*v712)--;
    if ( v713 <= 0 )
      j_j_j_j__ZdlPv_9(v281);
  v282 = (void *)(v856 - 12);
  if ( (int *)(v856 - 12) != &dword_28898C0 )
    v714 = (unsigned int *)(v856 - 4);
        v715 = __ldrex(v714);
      while ( __strex(v715 - 1, v714) );
      v715 = (*v714)--;
    if ( v715 <= 0 )
      j_j_j_j__ZdlPv_9(v282);
  sub_21E94B4((void **)&v853, "num_entities_spawned");
  sub_21E94B4((void **)&v852, "1");
  v283 = (int *)sub_21E94B4((void **)&v851, "Number of entities that will be spawned in this step");
    (const void **)&v853,
    &v852,
    v283);
  v284 = (void *)(v851 - 12);
  if ( (int *)(v851 - 12) != &dword_28898C0 )
    v716 = (unsigned int *)(v851 - 4);
        v717 = __ldrex(v716);
      while ( __strex(v717 - 1, v716) );
      v717 = (*v716)--;
    if ( v717 <= 0 )
      j_j_j_j__ZdlPv_9(v284);
  v285 = (void *)(v852 - 12);
  if ( (int *)(v852 - 12) != &dword_28898C0 )
    v718 = (unsigned int *)(v852 - 4);
        v719 = __ldrex(v718);
      while ( __strex(v719 - 1, v718) );
      v719 = (*v718)--;
    if ( v719 <= 0 )
      j_j_j_j__ZdlPv_9(v285);
  v286 = (void *)(v853 - 12);
  if ( (int *)(v853 - 12) != &dword_28898C0 )
    v720 = (unsigned int *)(v853 - 4);
        v721 = __ldrex(v720);
      while ( __strex(v721 - 1, v720) );
      v721 = (*v720)--;
    if ( v721 <= 0 )
      j_j_j_j__ZdlPv_9(v286);
  sub_21E94B4((void **)&v850, "entity_type");
  sub_21E94B4((void **)&v849, (const char *)&unk_257BC67);
  v287 = (int *)sub_21E94B4((void **)&v848, "The entity type of the entities we will spawn in this step");
    (const void **)&v850,
    &v849,
    v287);
  v288 = (void *)(v848 - 12);
  if ( (int *)(v848 - 12) != &dword_28898C0 )
    v722 = (unsigned int *)(v848 - 4);
        v723 = __ldrex(v722);
      while ( __strex(v723 - 1, v722) );
      v723 = (*v722)--;
    if ( v723 <= 0 )
      j_j_j_j__ZdlPv_9(v288);
  v289 = (void *)(v849 - 12);
  if ( (int *)(v849 - 12) != &dword_28898C0 )
    v724 = (unsigned int *)(v849 - 4);
        v725 = __ldrex(v724);
      while ( __strex(v725 - 1, v724) );
      v725 = (*v724)--;
    if ( v725 <= 0 )
      j_j_j_j__ZdlPv_9(v289);
  v290 = (void *)(v850 - 12);
  if ( (int *)(v850 - 12) != &dword_28898C0 )
    v726 = (unsigned int *)(v850 - 4);
        v727 = __ldrex(v726);
      while ( __strex(v727 - 1, v726) );
      v727 = (*v726)--;
    if ( v727 <= 0 )
      j_j_j_j__ZdlPv_9(v290);
  sub_21E94B4((void **)&v847, "entity_lifespan");
  sub_21E94B4((void **)&v846, "-1.0");
  v291 = (int *)sub_21E94B4(
                  (void **)&v845,
                  "Amount of time in seconds that the spawned entity will be alive for. A value of -1.0 means it will rem"
                  "ain alive for as long as it can");
    (const void **)&v847,
    &v846,
    v291);
  v292 = (void *)(v845 - 12);
  if ( (int *)(v845 - 12) != &dword_28898C0 )
    v728 = (unsigned int *)(v845 - 4);
        v729 = __ldrex(v728);
      while ( __strex(v729 - 1, v728) );
      v729 = (*v728)--;
    if ( v729 <= 0 )
      j_j_j_j__ZdlPv_9(v292);
  v293 = (void *)(v846 - 12);
  if ( (int *)(v846 - 12) != &dword_28898C0 )
    v730 = (unsigned int *)(v846 - 4);
        v731 = __ldrex(v730);
      while ( __strex(v731 - 1, v730) );
      v731 = (*v730)--;
    if ( v731 <= 0 )
      j_j_j_j__ZdlPv_9(v293);
  v294 = (void *)(v847 - 12);
  if ( (int *)(v847 - 12) != &dword_28898C0 )
    v732 = (unsigned int *)(v847 - 4);
        v733 = __ldrex(v732);
      while ( __strex(v733 - 1, v732) );
      v733 = (*v732)--;
    if ( v733 <= 0 )
      j_j_j_j__ZdlPv_9(v294);
  sub_21E94B4((void **)&v844, "size");
  sub_21E94B4((void **)&v843, "1.0");
  v295 = (int *)sub_21E94B4((void **)&v842, "The base size of the entity");
    (const void **)&v844,
    &v843,
    v295);
  v296 = (void *)(v842 - 12);
  if ( (int *)(v842 - 12) != &dword_28898C0 )
    v734 = (unsigned int *)(v842 - 4);
        v735 = __ldrex(v734);
      while ( __strex(v735 - 1, v734) );
      v735 = (*v734)--;
    if ( v735 <= 0 )
      j_j_j_j__ZdlPv_9(v296);
  v297 = (void *)(v843 - 12);
  if ( (int *)(v843 - 12) != &dword_28898C0 )
    v736 = (unsigned int *)(v843 - 4);
        v737 = __ldrex(v736);
      while ( __strex(v737 - 1, v736) );
      v737 = (*v736)--;
    if ( v737 <= 0 )
      j_j_j_j__ZdlPv_9(v297);
  v298 = (void *)(v844 - 12);
  if ( (int *)(v844 - 12) != &dword_28898C0 )
    v738 = (unsigned int *)(v844 - 4);
        v739 = __ldrex(v738);
      while ( __strex(v739 - 1, v738) );
      v739 = (*v738)--;
    if ( v739 <= 0 )
      j_j_j_j__ZdlPv_9(v298);
  sub_21E94B4((void **)&v841, "target");
  sub_21E94B4((void **)&v840, "self");
  v299 = (int *)sub_21E94B4(
                  (void **)&v839,
                  "The target of the spell. This is where the spell will start (line will start here, circle will be centered here)");
    (const void **)&v841,
    &v840,
    v299);
  v300 = (void *)(v839 - 12);
  if ( (int *)(v839 - 12) != &dword_28898C0 )
    v740 = (unsigned int *)(v839 - 4);
        v741 = __ldrex(v740);
      while ( __strex(v741 - 1, v740) );
      v741 = (*v740)--;
    if ( v741 <= 0 )
      j_j_j_j__ZdlPv_9(v300);
  v301 = (void *)(v840 - 12);
  if ( (int *)(v840 - 12) != &dword_28898C0 )
    v742 = (unsigned int *)(v840 - 4);
        v743 = __ldrex(v742);
      while ( __strex(v743 - 1, v742) );
      v743 = (*v742)--;
    if ( v743 <= 0 )
      j_j_j_j__ZdlPv_9(v301);
  v302 = (void *)(v841 - 12);
  if ( (int *)(v841 - 12) != &dword_28898C0 )
    v744 = (unsigned int *)(v841 - 4);
        v745 = __ldrex(v744);
      while ( __strex(v745 - 1, v744) );
      v745 = (*v744)--;
    if ( v745 <= 0 )
      j_j_j_j__ZdlPv_9(v302);
  sub_21E94B4((void **)&v838, "summon_cap");
  sub_21E94B4((void **)&v837, "0");
  v303 = (int *)sub_21E94B4((void **)&v836, "Maximum number of summoned entities at any given time");
    (const void **)&v838,
    &v837,
    v303);
  v304 = (void *)(v836 - 12);
  if ( (int *)(v836 - 12) != &dword_28898C0 )
    v746 = (unsigned int *)(v836 - 4);
        v747 = __ldrex(v746);
      while ( __strex(v747 - 1, v746) );
      v747 = (*v746)--;
    if ( v747 <= 0 )
      j_j_j_j__ZdlPv_9(v304);
  v305 = (void *)(v837 - 12);
  if ( (int *)(v837 - 12) != &dword_28898C0 )
    v748 = (unsigned int *)(v837 - 4);
        v749 = __ldrex(v748);
      while ( __strex(v749 - 1, v748) );
      v749 = (*v748)--;
    if ( v749 <= 0 )
      j_j_j_j__ZdlPv_9(v305);
  v306 = (void *)(v838 - 12);
  if ( (int *)(v838 - 12) != &dword_28898C0 )
    v750 = (unsigned int *)(v838 - 4);
        v751 = __ldrex(v750);
      while ( __strex(v751 - 1, v750) );
      v751 = (*v750)--;
    if ( v751 <= 0 )
      j_j_j_j__ZdlPv_9(v306);
  sub_21E94B4((void **)&v835, "summon_cap_radius");
  sub_21E94B4((void **)&v834, "0.0");
  v307 = (int *)sub_21E94B4((void **)&v833, (const char *)&unk_257BC67);
    (const void **)&v835,
    &v834,
    v307);
  v308 = (void *)(v833 - 12);
  if ( (int *)(v833 - 12) != &dword_28898C0 )
    v752 = (unsigned int *)(v833 - 4);
        v753 = __ldrex(v752);
      while ( __strex(v753 - 1, v752) );
      v753 = (*v752)--;
    if ( v753 <= 0 )
      j_j_j_j__ZdlPv_9(v308);
  v309 = (void *)(v834 - 12);
  if ( (int *)(v834 - 12) != &dword_28898C0 )
    v754 = (unsigned int *)(v834 - 4);
        v755 = __ldrex(v754);
      while ( __strex(v755 - 1, v754) );
      v755 = (*v754)--;
    if ( v755 <= 0 )
      j_j_j_j__ZdlPv_9(v309);
  v310 = (void *)(v835 - 12);
  if ( (int *)(v835 - 12) != &dword_28898C0 )
    v756 = (unsigned int *)(v835 - 4);
        v757 = __ldrex(v756);
      while ( __strex(v757 - 1, v756) );
      v757 = (*v756)--;
    if ( v757 <= 0 )
      j_j_j_j__ZdlPv_9(v310);
  sub_21E94B4((void **)&v832, "sound_event");
  sub_21E94B4((void **)&v831, (const char *)&unk_257BC67);
  v311 = (int *)sub_21E94B4((void **)&v830, "The sound event to play for this step");
    (const void **)&v832,
    &v831,
    v311);
  v312 = (void *)(v830 - 12);
  if ( (int *)(v830 - 12) != &dword_28898C0 )
    v758 = (unsigned int *)(v830 - 4);
        v759 = __ldrex(v758);
      while ( __strex(v759 - 1, v758) );
      v759 = (*v758)--;
    if ( v759 <= 0 )
      j_j_j_j__ZdlPv_9(v312);
  v313 = (void *)(v831 - 12);
  if ( (int *)(v831 - 12) != &dword_28898C0 )
    v760 = (unsigned int *)(v831 - 4);
        v761 = __ldrex(v760);
      while ( __strex(v761 - 1, v760) );
      v761 = (*v760)--;
    if ( v761 <= 0 )
      j_j_j_j__ZdlPv_9(v313);
  v314 = (void *)(v832 - 12);
  if ( (int *)(v832 - 12) != &dword_28898C0 )
    v762 = (unsigned int *)(v832 - 4);
        v763 = __ldrex(v762);
      while ( __strex(v763 - 1, v762) );
      v763 = (*v762)--;
    if ( v763 <= 0 )
      j_j_j_j__ZdlPv_9(v314);
  sub_21E94B4((void **)&v829, "cast_duration");
  sub_21E94B4((void **)&v828, "Total delay of the steps");
  v315 = (int *)sub_21E94B4((void **)&v827, "Time in seconds the spell casting will take");
    (const void **)&v829,
    &v828,
    v315);
  v316 = (void *)(v827 - 12);
  if ( (int *)(v827 - 12) != &dword_28898C0 )
    v764 = (unsigned int *)(v827 - 4);
        v765 = __ldrex(v764);
      while ( __strex(v765 - 1, v764) );
      v765 = (*v764)--;
    if ( v765 <= 0 )
      j_j_j_j__ZdlPv_9(v316);
  v317 = (void *)(v828 - 12);
  if ( (int *)(v828 - 12) != &dword_28898C0 )
    v766 = (unsigned int *)(v828 - 4);
        v767 = __ldrex(v766);
      while ( __strex(v767 - 1, v766) );
      v767 = (*v766)--;
    if ( v767 <= 0 )
      j_j_j_j__ZdlPv_9(v317);
  v318 = (void *)(v829 - 12);
  if ( (int *)(v829 - 12) != &dword_28898C0 )
    v768 = (unsigned int *)(v829 - 4);
        v769 = __ldrex(v768);
      while ( __strex(v769 - 1, v768) );
      v769 = (*v768)--;
    if ( v769 <= 0 )
      j_j_j_j__ZdlPv_9(v318);
  v319 = j_addToDoc(v2, "minecraft:behavior.send_event", "Allows the mob to send an event to another mob.");
  sub_21E94B4((void **)&v826, "sequence");
  sub_21E94B4((void **)&v825, (const char *)&unk_257BC67);
  v320 = (int *)sub_21E94B4((void **)&v824, "List of events to send");
  v321 = j_DocumentationSystem::Node::addNode(
           (int)v319,
           (const void **)&v826,
           &v825,
           v320);
  v322 = (void *)(v824 - 12);
  if ( (int *)(v824 - 12) != &dword_28898C0 )
    v770 = (unsigned int *)(v824 - 4);
        v771 = __ldrex(v770);
      while ( __strex(v771 - 1, v770) );
      v771 = (*v770)--;
    if ( v771 <= 0 )
      j_j_j_j__ZdlPv_9(v322);
  v323 = (void *)(v825 - 12);
  if ( (int *)(v825 - 12) != &dword_28898C0 )
    v772 = (unsigned int *)(v825 - 4);
        v773 = __ldrex(v772);
      while ( __strex(v773 - 1, v772) );
      v773 = (*v772)--;
    if ( v773 <= 0 )
      j_j_j_j__ZdlPv_9(v323);
  v324 = (void *)(v826 - 12);
  if ( (int *)(v826 - 12) != &dword_28898C0 )
    v774 = (unsigned int *)(v826 - 4);
        v775 = __ldrex(v774);
      while ( __strex(v775 - 1, v774) );
      v775 = (*v774)--;
    if ( v775 <= 0 )
      j_j_j_j__ZdlPv_9(v324);
  v321[4] = 1;
  sub_21E8190((void **)v321 + 5, "Parameters of each event", (_BYTE *)0x18);
  sub_21E94B4((void **)&v823, "base_delay");
  sub_21E94B4((void **)&v822, "0.0");
  v325 = (int *)sub_21E94B4((void **)&v821, "Amount of time in seconds before starting this step");
    (int)v321,
    (const void **)&v823,
    &v822,
    v325);
  v326 = (void *)(v821 - 12);
  if ( (int *)(v821 - 12) != &dword_28898C0 )
    v776 = (unsigned int *)(v821 - 4);
        v777 = __ldrex(v776);
      while ( __strex(v777 - 1, v776) );
      v777 = (*v776)--;
    if ( v777 <= 0 )
      j_j_j_j__ZdlPv_9(v326);
  v327 = (void *)(v822 - 12);
  if ( (int *)(v822 - 12) != &dword_28898C0 )
    v778 = (unsigned int *)(v822 - 4);
        v779 = __ldrex(v778);
      while ( __strex(v779 - 1, v778) );
      v779 = (*v778)--;
    if ( v779 <= 0 )
      j_j_j_j__ZdlPv_9(v327);
  v328 = (void *)(v823 - 12);
  if ( (int *)(v823 - 12) != &dword_28898C0 )
    v780 = (unsigned int *)(v823 - 4);
        v781 = __ldrex(v780);
      while ( __strex(v781 - 1, v780) );
      v781 = (*v780)--;
    if ( v781 <= 0 )
      j_j_j_j__ZdlPv_9(v328);
  sub_21E94B4((void **)&v820, "event");
  sub_21E94B4((void **)&v819, (const char *)&unk_257BC67);
  v329 = (int *)sub_21E94B4((void **)&v818, "The event to send to the entity");
    (const void **)&v820,
    &v819,
    v329);
  v330 = (void *)(v818 - 12);
  if ( (int *)(v818 - 12) != &dword_28898C0 )
    v782 = (unsigned int *)(v818 - 4);
        v783 = __ldrex(v782);
      while ( __strex(v783 - 1, v782) );
      v783 = (*v782)--;
    if ( v783 <= 0 )
      j_j_j_j__ZdlPv_9(v330);
  v331 = (void *)(v819 - 12);
  if ( (int *)(v819 - 12) != &dword_28898C0 )
    v784 = (unsigned int *)(v819 - 4);
        v785 = __ldrex(v784);
      while ( __strex(v785 - 1, v784) );
      v785 = (*v784)--;
    if ( v785 <= 0 )
      j_j_j_j__ZdlPv_9(v331);
  v332 = (void *)(v820 - 12);
  if ( (int *)(v820 - 12) != &dword_28898C0 )
    v786 = (unsigned int *)(v820 - 4);
        v787 = __ldrex(v786);
      while ( __strex(v787 - 1, v786) );
      v787 = (*v786)--;
    if ( v787 <= 0 )
      j_j_j_j__ZdlPv_9(v332);
  sub_21E94B4((void **)&v817, "sound_event");
  sub_21E94B4((void **)&v816, (const char *)&unk_257BC67);
  v333 = (int *)sub_21E94B4((void **)&v815, "The sound event to play when this step happens");
    (const void **)&v817,
    &v816,
    v333);
  v334 = (void *)(v815 - 12);
  if ( (int *)(v815 - 12) != &dword_28898C0 )
    v788 = (unsigned int *)(v815 - 4);
        v789 = __ldrex(v788);
      while ( __strex(v789 - 1, v788) );
      v789 = (*v788)--;
    if ( v789 <= 0 )
      j_j_j_j__ZdlPv_9(v334);
  v335 = (void *)(v816 - 12);
  if ( (int *)(v816 - 12) != &dword_28898C0 )
    v790 = (unsigned int *)(v816 - 4);
        v791 = __ldrex(v790);
      while ( __strex(v791 - 1, v790) );
      v791 = (*v790)--;
    if ( v791 <= 0 )
      j_j_j_j__ZdlPv_9(v335);
  v336 = (void *)(v817 - 12);
  if ( (int *)(v817 - 12) != &dword_28898C0 )
    v792 = (unsigned int *)(v817 - 4);
        v793 = __ldrex(v792);
      while ( __strex(v793 - 1, v792) );
      v793 = (*v792)--;
    if ( v793 <= 0 )
      j_j_j_j__ZdlPv_9(v336);
  sub_21E94B4((void **)&v814, "cast_duration");
  sub_21E94B4((void **)&v813, "Total delay of the steps");
  v337 = (int *)sub_21E94B4((void **)&v812, "Time in seconds for the entire event sending process");
    (int)v319,
    (const void **)&v814,
    &v813,
    v337);
  v338 = (void *)(v812 - 12);
  if ( (int *)(v812 - 12) != &dword_28898C0 )
    v794 = (unsigned int *)(v812 - 4);
        v795 = __ldrex(v794);
      while ( __strex(v795 - 1, v794) );
      v795 = (*v794)--;
    if ( v795 <= 0 )
      j_j_j_j__ZdlPv_9(v338);
  v339 = (void *)(v813 - 12);
  if ( (int *)(v813 - 12) != &dword_28898C0 )
    v796 = (unsigned int *)(v813 - 4);
        v797 = __ldrex(v796);
      while ( __strex(v797 - 1, v796) );
      v797 = (*v796)--;
    if ( v797 <= 0 )
      j_j_j_j__ZdlPv_9(v339);
  v340 = (void *)(v814 - 12);
  if ( (int *)(v814 - 12) != &dword_28898C0 )
    v798 = (unsigned int *)(v814 - 4);
        v799 = __ldrex(v798);
      while ( __strex(v799 - 1, v798) );
      v799 = (*v798)--;
    if ( v799 <= 0 )
      j_j_j_j__ZdlPv_9(v340);
  j_addToDoc(v2, "minecraft:behavior.charge_attack", "Allows the mob to attack its target by running at it.");
  j_addToDoc(v2, "minecraft:behavior.vex_random_move", "Allows the mob to move around randomly like the Vex.");
  v341 = j_addToDoc(
           "minecraft:behavior.vex_copy_owner_target",
           "Allows the mob to target the same entity its owner is targeting.");
  sub_21E94B4((void **)&v811, "List of entities this mob can copy the owner from");
  j__mMobDescriptionsDoc((int)v341, &v811);
  v342 = (void *)(v811 - 12);
  if ( (int *)(v811 - 12) != &dword_28898C0 )
    v800 = (unsigned int *)(v811 - 4);
        v801 = __ldrex(v800);
      while ( __strex(v801 - 1, v800) );
      v801 = (*v800)--;
    if ( v801 <= 0 )
      j_j_j_j__ZdlPv_9(v342);
  v343 = j_addToDoc(v2, "minecraft:behavior.pickup_items", "Allows the mob to pick up items on the ground.");
  j__mSpeedModifierDoc((int)v343);
  j__mTrackTargetDoc((int)v343);
  sub_21E94B4((void **)&v810, "Maximum distance this mob will look for items to pick up");
  j__mMaxDistDoc((int)v343, &v810);
  v344 = (void *)(v810 - 12);
  if ( (int *)(v810 - 12) != &dword_28898C0 )
    v802 = (unsigned int *)(v810 - 4);
        v803 = __ldrex(v802);
      while ( __strex(v803 - 1, v802) );
      v803 = (*v802)--;
    if ( v803 <= 0 )
      j_j_j_j__ZdlPv_9(v344);
  j__mGoalRadius((int)v343);
  v345 = j_addToDoc(v2, "minecraft:behavior.share_items", "Allows the mob to give items it has to others.");
  sub_21E94B4((void **)&v809, "List of entities this mob will share items with");
  j__mMobDescriptionsDoc((int)v345, &v809);
  v346 = (void *)(v809 - 12);
  if ( (int *)(v809 - 12) != &dword_28898C0 )
    v804 = (unsigned int *)(v809 - 4);
        v805 = __ldrex(v804);
      while ( __strex(v805 - 1, v804) );
      v805 = (*v804)--;
    if ( v805 <= 0 )
      j_j_j_j__ZdlPv_9(v346);
  j__mSpeedModifierDoc((int)v345);
  sub_21E94B4((void **)&v808, "Maximum distance in blocks this mob will look for entities to share items with");
  j__mMaxDistDoc((int)v345, &v808);
  v347 = (void *)(v808 - 12);
  if ( (int *)(v808 - 12) != &dword_28898C0 )
    v806 = (unsigned int *)(v808 - 4);
        v807 = __ldrex(v806);
      while ( __strex(v807 - 1, v806) );
      v807 = (*v806)--;
    if ( v807 <= 0 )
      j_j_j_j__ZdlPv_9(v347);
  j__mGoalRadius((int)v345);
}
