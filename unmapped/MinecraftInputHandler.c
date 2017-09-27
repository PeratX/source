

void __fastcall MinecraftInputHandler::_registerGamepadSpecificMappings(MinecraftInputHandler *this)
{
  MinecraftInputHandler::_registerGamepadSpecificMappings(this);
}


void __fastcall MinecraftInputHandler::_registerButtonMappings(MinecraftInputHandler *this)
{
  MinecraftInputHandler *v1; // r4@1
  int v2; // r5@1
  void (__fastcall *v3)(int, int); // r6@1
  int v4; // r0@1

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  v3 = *(void (__fastcall **)(int, int))(*(_DWORD *)v2 + 8);
  v4 = InputHandler::getButtonRegistry(*((InputHandler **)this + 2));
  v3(v2, v4);
  MinecraftInputHandler::_registerGamepadSpecificMappings(v1);
  j_j_j__ZN21MinecraftInputHandler22_registerVoiceMappingsEv(v1);
}


int __fastcall MinecraftInputHandler::render(int a1, int a2)
{
  int v2; // r4@1
  ClientInstance **v3; // r0@1

  v2 = a2;
  v3 = (ClientInstance **)ClientInstance::getInput(*(ClientInstance **)(a1 + 4));
  return j_j_j__ZN18ClientInputHandler6renderER13ScreenContext(v3, v2);
}


void __fastcall MinecraftInputHandler::_registerMenuButton(int a1, int **a2, char a3, int a4)
{
  MinecraftInputHandler::_registerMenuButton(a1, a2, a3, a4);
}


void __fastcall MinecraftInputHandler::tick(int a1, MinecraftGame *a2, int a3, int a4, int a5)
{
  MinecraftInputHandler::tick(a1, a2, a3, a4, a5);
}


int __fastcall MinecraftInputHandler::getCursorPos(MinecraftInputHandler *this, float *a2, float *a3, ClientInstance *a4)
{
  MinecraftInputHandler *v4; // r6@1
  InputHandler *v5; // r7@1
  int v6; // r0@1
  int result; // r0@1

  v4 = this;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)a3 = 0;
  v5 = (InputHandler *)*((_DWORD *)this + 2);
  v6 = ClientInstance::getControllerId(a4);
  result = InputHandler::getCurrentInputMode(v5, v6);
  if ( result == 1 )
    result = (*(int (**)(void))(**((_DWORD **)v4 + 6) + 24))();
  return result;
}


void __fastcall MinecraftInputHandler::_loadVoiceMappings(int a1, int a2)
{
  MinecraftInputHandler::_loadVoiceMappings(a1, a2);
}


void __fastcall MinecraftInputHandler::_registerInputHandlers(MinecraftInputHandler *this)
{
  MinecraftInputHandler *v1; // r4@1
  int v2; // r5@1
  int v3; // r5@3
  int v4; // r5@5
  int v5; // r5@7
  void *v6; // r0@9
  int v7; // r5@10
  void *v8; // r0@12
  int v9; // r5@13
  void *v10; // r0@15
  int v11; // r5@16
  void *v12; // r0@18
  int v13; // r5@19
  void *v14; // r0@21
  int v15; // r5@22
  void *v16; // r0@24
  int v17; // r5@25
  void *v18; // r0@27
  int v19; // r5@28
  void *v20; // r0@30
  int v21; // r5@31
  void *v22; // r0@33
  int v23; // r5@34
  void *v24; // r0@36
  int v25; // r5@37
  void *v26; // r0@39
  int v27; // r5@40
  void *v28; // r0@42
  int v29; // r5@43
  void *v30; // r0@45
  int v31; // r5@46
  void *v32; // r0@48
  int v33; // r5@49
  void *v34; // r0@51
  int v35; // r5@52
  void *v36; // r0@54
  int v37; // r5@55
  void *v38; // r0@57
  int v39; // r5@58
  void *v40; // r0@60
  int v41; // r5@61
  void *v42; // r0@63
  int v43; // r5@64
  void *v44; // r0@66
  int v45; // r5@67
  void *v46; // r0@69
  int v47; // r5@70
  void *v48; // r0@72
  int v49; // r5@73
  void *v50; // r0@75
  int v51; // r5@76
  void *v52; // r0@78
  int v53; // r5@79
  void *v54; // r0@81
  int v55; // r5@82
  void *v56; // r0@84
  int v57; // r5@85
  void *v58; // r0@87
  int v59; // r5@88
  void *v60; // r0@90
  int v61; // r5@91
  void *v62; // r0@93
  int v63; // r5@94
  void *v64; // r0@96
  int v65; // r5@97
  void *v66; // r0@99
  int v67; // r5@100
  void *v68; // r0@102
  int v69; // r5@103
  void *v70; // r0@105
  int v71; // r5@106
  void *v72; // r0@108
  int v73; // r5@109
  void *v74; // r0@111
  int v75; // r5@112
  void *v76; // r0@114
  int v77; // r5@115
  void *v78; // r0@117
  int v79; // r5@118
  void *v80; // r0@120
  int v81; // r5@121
  void *v82; // r0@123
  int v83; // r5@124
  void *v84; // r0@126
  int v85; // r5@127
  void *v86; // r0@129
  int v87; // r5@130
  void *v88; // r0@132
  int v89; // r5@133
  void *v90; // r0@135
  int v91; // r5@136
  void *v92; // r0@138
  int v93; // r5@139
  void *v94; // r0@141
  int v95; // r5@142
  void *v96; // r0@144
  int v97; // r5@145
  void *v98; // r0@147
  int v99; // r5@148
  void *v100; // r0@150
  int v101; // r5@151
  void *v102; // r0@153
  int v103; // r5@154
  void *v104; // r0@156
  int v105; // r5@157
  void *v106; // r0@159
  int v107; // r5@160
  void *v108; // r0@162
  int v109; // r5@163
  void *v110; // r0@165
  int v111; // r5@166
  void *v112; // r0@168
  int v113; // r5@169
  void *v114; // r0@171
  int v115; // r5@172
  void *v116; // r0@174
  int v117; // r5@175
  void *v118; // r0@177
  int v119; // r5@178
  void *v120; // r0@180
  int v121; // r5@181
  void *v122; // r0@183
  int v123; // r5@184
  void *v124; // r0@186
  int v125; // r5@187
  void *v126; // r0@189
  int v127; // r5@190
  _DWORD *v128; // r0@190
  void *v129; // r0@192
  int v130; // r5@193
  _DWORD *v131; // r0@193
  void *v132; // r0@195
  int v133; // r5@196
  void *v134; // r0@198
  int v135; // r5@199
  void *v136; // r0@201
  int v137; // r5@202
  void *v138; // r0@204
  int v139; // r5@205
  void *v140; // r0@207
  int v141; // r5@208
  void *v142; // r0@210
  int v143; // r5@211
  void *v144; // r0@213
  int v145; // r5@214
  void *v146; // r0@216
  int v147; // r5@217
  void *v148; // r0@219
  int v149; // r5@220
  void *v150; // r0@222
  int v151; // r5@223
  void *v152; // r0@225
  int v153; // r5@226
  void *v154; // r0@228
  int v155; // r5@229
  void *v156; // r0@231
  int v157; // r5@232
  void *v158; // r0@234
  int v159; // r5@235
  void *v160; // r0@237
  int v161; // r5@238
  void *v162; // r0@240
  int v163; // r5@241
  void *v164; // r0@243
  int v165; // r5@244
  _DWORD *v166; // r0@244
  void *v167; // r0@246
  int v168; // r5@247
  _DWORD *v169; // r0@247
  void *v170; // r0@249
  int v171; // r5@250
  _DWORD *v172; // r0@250
  void *v173; // r0@252
  int v174; // r5@253
  _DWORD *v175; // r0@253
  void *v176; // r0@255
  int v177; // r5@256
  int v178; // r5@258
  int v179; // r5@260
  int v180; // r5@262
  int v181; // r5@264
  int v182; // r5@266
  int v183; // r5@268
  int v184; // r5@270
  void *v185; // r0@273
  char v186; // r6@275
  void *v187; // r0@275
  void *v188; // r0@277
  int v189; // r5@279
  void *v190; // r0@279
  void *v191; // r0@280
  void *v192; // r0@281
  void *v193; // r0@282
  void *v194; // r0@283
  void *v195; // r0@284
  void *v196; // r0@285
  void *v197; // r0@286
  void *v198; // r0@287
  void *v199; // r0@288
  void *v200; // r0@289
  void *v201; // r0@290
  void *v202; // r0@291
  void *v203; // r0@292
  void *v204; // r0@293
  void *v205; // r0@294
  void *v206; // r0@297
  void *v207; // r0@298
  void *v208; // r0@299
  void *v209; // r0@300
  void *v210; // r0@301
  void *v211; // r0@302
  void *v212; // r0@303
  void *v213; // r0@304
  void *v214; // r0@305
  void *v215; // r0@306
  void *v216; // r0@307
  void *v217; // r0@308
  void *v218; // r0@309
  void *v219; // r0@310
  void *v220; // r0@311
  void *v221; // r0@312
  void *v222; // r0@313
  void *v223; // r0@314
  void *v224; // r0@315
  void *v225; // r0@316
  void *v226; // r0@317
  void *v227; // r0@318
  void *v228; // r0@319
  void *v229; // r0@320
  void *v230; // r0@321
  void *v231; // r0@322
  void *v232; // r0@323
  void *v233; // r0@324
  void *v234; // r0@325
  void *v235; // r0@326
  void *v236; // r0@327
  void *v237; // r0@328
  void *v238; // r0@329
  int v239; // r5@330
  void *v240; // r0@330
  __int64 v241; // r1@330
  int v242; // r5@332
  void *v243; // r0@332
  __int64 v244; // r1@332
  void *v245; // r0@334
  int v246; // r5@335
  void *v247; // r0@335
  __int64 v248; // r1@335
  void *v249; // r0@337
  int v250; // r5@338
  void *v251; // r0@338
  __int64 v252; // r1@338
  void *v253; // r0@340
  int v254; // r5@341
  void *v255; // r0@341
  __int64 v256; // r1@341
  void *v257; // r0@343
  int v258; // r5@344
  void *v259; // r0@344
  __int64 v260; // r1@344
  void *v261; // r0@346
  int v262; // r5@347
  void *v263; // r0@347
  __int64 v264; // r1@347
  void *v265; // r0@349
  int v266; // r5@350
  void *v267; // r0@350
  __int64 v268; // r1@350
  void *v269; // r0@352
  int v270; // r5@353
  void *v271; // r0@353
  __int64 v272; // r1@353
  void *v273; // r0@355
  int v274; // r5@356
  void *v275; // r0@356
  __int64 v276; // r1@356
  void *v277; // r0@358
  int v278; // r5@359
  void *v279; // r0@359
  __int64 v280; // r1@359
  void *v281; // r0@361
  int v282; // r5@362
  void *v283; // r0@362
  __int64 v284; // r1@362
  void *v285; // r0@364
  int v286; // r5@365
  void *v287; // r0@365
  __int64 v288; // r1@365
  void *v289; // r0@367
  int v290; // r5@368
  void *v291; // r0@368
  __int64 v292; // r1@368
  void *v293; // r0@370
  int v294; // r5@371
  void *v295; // r0@371
  __int64 v296; // r1@371
  void *v297; // r0@373
  int v298; // r5@374
  void *v299; // r0@374
  __int64 v300; // r1@374
  void *v301; // r0@376
  int v302; // r5@377
  void *v303; // r0@377
  __int64 v304; // r1@377
  void *v305; // r0@379
  int v306; // r5@380
  void *v307; // r0@380
  __int64 v308; // r1@380
  void *v309; // r0@382
  int v310; // r5@383
  void *v311; // r0@383
  __int64 v312; // r1@383
  void *v313; // r0@385
  int v314; // r5@386
  void *v315; // r0@386
  __int64 v316; // r1@386
  void *v317; // r0@388
  int v318; // r5@389
  void *v319; // r0@389
  __int64 v320; // r1@389
  void *v321; // r0@391
  int v322; // r5@392
  void *v323; // r0@392
  __int64 v324; // r1@392
  void *v325; // r0@394
  int v326; // r5@395
  void *v327; // r0@395
  __int64 v328; // r1@395
  void *v329; // r0@397
  int v330; // r5@398
  void *v331; // r0@398
  __int64 v332; // r1@398
  void *v333; // r0@400
  int v334; // r5@401
  void *v335; // r0@401
  __int64 v336; // r1@401
  void *v337; // r0@403
  int v338; // r5@404
  void *v339; // r0@404
  __int64 v340; // r1@404
  void *v341; // r0@406
  int v342; // r5@407
  void *v343; // r0@407
  __int64 v344; // r1@407
  void *v345; // r0@409
  int v346; // r5@410
  void *v347; // r0@410
  __int64 v348; // r1@410
  void *v349; // r0@412
  int v350; // r5@413
  void *v351; // r0@413
  __int64 v352; // r1@413
  void *v353; // r0@415
  int v354; // r5@416
  void *v355; // r0@416
  __int64 v356; // r1@416
  void *v357; // r0@418
  int v358; // r5@419
  void *v359; // r0@419
  __int64 v360; // r1@419
  void *v361; // r0@421
  int v362; // r5@422
  void *v363; // r0@422
  __int64 v364; // r1@422
  void *v365; // r0@424
  int v366; // r5@425
  void *v367; // r0@425
  __int64 v368; // r1@425
  void *v369; // r0@427
  int v370; // r5@428
  void *v371; // r0@428
  __int64 v372; // r1@428
  void *v373; // r0@430
  int v374; // r5@431
  void *v375; // r0@431
  __int64 v376; // r1@431
  void *v377; // r0@433
  int v378; // r5@434
  void *v379; // r0@434
  __int64 v380; // r1@434
  void *v381; // r0@436
  int v382; // r5@437
  void *v383; // r0@437
  __int64 v384; // r1@437
  void *v385; // r0@439
  int v386; // r5@440
  void *v387; // r0@440
  __int64 v388; // r1@440
  void *v389; // r0@442
  int v390; // r5@443
  void *v391; // r0@443
  __int64 v392; // r1@443
  void *v393; // r0@445
  int v394; // r5@446
  void *v395; // r0@446
  __int64 v396; // r1@446
  void *v397; // r0@448
  int v398; // r4@449
  void *v399; // r0@449
  __int64 v400; // r1@449
  void *v401; // r0@451
  void *v402; // r0@452
  unsigned int *v403; // r2@454
  signed int v404; // r1@456
  unsigned int *v405; // r2@458
  signed int v406; // r1@460
  unsigned int *v407; // r2@462
  signed int v408; // r1@464
  unsigned int *v409; // r2@466
  signed int v410; // r1@468
  unsigned int *v411; // r2@470
  signed int v412; // r1@472
  unsigned int *v413; // r2@474
  signed int v414; // r1@476
  unsigned int *v415; // r2@478
  signed int v416; // r1@480
  unsigned int *v417; // r2@482
  signed int v418; // r1@484
  unsigned int *v419; // r2@486
  signed int v420; // r1@488
  unsigned int *v421; // r2@490
  signed int v422; // r1@492
  unsigned int *v423; // r2@494
  signed int v424; // r1@496
  unsigned int *v425; // r2@498
  signed int v426; // r1@500
  unsigned int *v427; // r2@502
  signed int v428; // r1@504
  unsigned int *v429; // r2@506
  signed int v430; // r1@508
  unsigned int *v431; // r2@510
  signed int v432; // r1@512
  unsigned int *v433; // r2@514
  signed int v434; // r1@516
  unsigned int *v435; // r2@518
  signed int v436; // r1@520
  unsigned int *v437; // r2@522
  signed int v438; // r1@524
  unsigned int *v439; // r2@526
  signed int v440; // r1@528
  unsigned int *v441; // r2@530
  signed int v442; // r1@532
  unsigned int *v443; // r2@534
  signed int v444; // r1@536
  unsigned int *v445; // r2@538
  signed int v446; // r1@540
  unsigned int *v447; // r2@542
  signed int v448; // r1@544
  unsigned int *v449; // r2@546
  signed int v450; // r1@548
  unsigned int *v451; // r2@550
  signed int v452; // r1@552
  unsigned int *v453; // r2@554
  signed int v454; // r1@556
  unsigned int *v455; // r2@558
  signed int v456; // r1@560
  unsigned int *v457; // r2@562
  signed int v458; // r1@564
  unsigned int *v459; // r2@566
  signed int v460; // r1@568
  unsigned int *v461; // r2@570
  signed int v462; // r1@572
  unsigned int *v463; // r2@574
  signed int v464; // r1@576
  unsigned int *v465; // r2@578
  signed int v466; // r1@580
  unsigned int *v467; // r2@582
  signed int v468; // r1@584
  unsigned int *v469; // r2@586
  signed int v470; // r1@588
  unsigned int *v471; // r2@590
  signed int v472; // r1@592
  unsigned int *v473; // r2@594
  signed int v474; // r1@596
  unsigned int *v475; // r2@598
  signed int v476; // r1@600
  unsigned int *v477; // r2@602
  signed int v478; // r1@604
  unsigned int *v479; // r2@606
  signed int v480; // r1@608
  unsigned int *v481; // r2@610
  signed int v482; // r1@612
  unsigned int *v483; // r2@614
  signed int v484; // r1@616
  unsigned int *v485; // r2@618
  signed int v486; // r1@620
  unsigned int *v487; // r2@622
  signed int v488; // r1@624
  unsigned int *v489; // r2@626
  signed int v490; // r1@628
  unsigned int *v491; // r2@630
  signed int v492; // r1@632
  unsigned int *v493; // r2@634
  signed int v494; // r1@636
  unsigned int *v495; // r2@638
  signed int v496; // r1@640
  unsigned int *v497; // r2@642
  signed int v498; // r1@644
  unsigned int *v499; // r2@646
  signed int v500; // r1@648
  unsigned int *v501; // r2@650
  signed int v502; // r1@652
  unsigned int *v503; // r2@654
  signed int v504; // r1@656
  unsigned int *v505; // r2@658
  signed int v506; // r1@660
  unsigned int *v507; // r2@662
  signed int v508; // r1@664
  unsigned int *v509; // r2@666
  signed int v510; // r1@668
  unsigned int *v511; // r2@670
  signed int v512; // r1@672
  unsigned int *v513; // r2@674
  signed int v514; // r1@676
  unsigned int *v515; // r2@678
  signed int v516; // r1@680
  unsigned int *v517; // r2@682
  signed int v518; // r1@684
  unsigned int *v519; // r2@686
  signed int v520; // r1@688
  unsigned int *v521; // r2@690
  signed int v522; // r1@692
  unsigned int *v523; // r2@694
  signed int v524; // r1@696
  unsigned int *v525; // r2@698
  signed int v526; // r1@700
  unsigned int *v527; // r2@702
  signed int v528; // r1@704
  unsigned int *v529; // r2@706
  signed int v530; // r1@708
  unsigned int *v531; // r2@710
  signed int v532; // r1@712
  unsigned int *v533; // r2@714
  signed int v534; // r1@716
  unsigned int *v535; // r2@718
  signed int v536; // r1@720
  unsigned int *v537; // r2@722
  signed int v538; // r1@724
  unsigned int *v539; // r2@726
  signed int v540; // r1@728
  unsigned int *v541; // r2@730
  signed int v542; // r1@732
  unsigned int *v543; // r2@734
  signed int v544; // r1@736
  unsigned int *v545; // r2@738
  signed int v546; // r1@740
  unsigned int *v547; // r2@742
  signed int v548; // r1@744
  unsigned int *v549; // r2@746
  signed int v550; // r1@748
  unsigned int *v551; // r2@750
  signed int v552; // r1@752
  unsigned int *v553; // r2@754
  signed int v554; // r1@756
  unsigned int *v555; // r2@758
  signed int v556; // r1@760
  unsigned int *v557; // r2@762
  signed int v558; // r1@764
  unsigned int *v559; // r2@766
  signed int v560; // r1@768
  unsigned int *v561; // r2@770
  signed int v562; // r1@772
  unsigned int *v563; // r2@774
  signed int v564; // r1@776
  unsigned int *v565; // r2@778
  signed int v566; // r1@780
  unsigned int *v567; // r2@782
  signed int v568; // r1@784
  unsigned int *v569; // r2@786
  signed int v570; // r1@788
  unsigned int *v571; // r2@790
  signed int v572; // r1@792
  unsigned int *v573; // r2@794
  signed int v574; // r1@796
  unsigned int *v575; // r2@798
  signed int v576; // r1@800
  unsigned int *v577; // r2@802
  signed int v578; // r1@804
  unsigned int *v579; // r2@806
  signed int v580; // r1@808
  unsigned int *v581; // r2@810
  signed int v582; // r1@812
  unsigned int *v583; // r2@814
  signed int v584; // r1@816
  unsigned int *v585; // r2@818
  signed int v586; // r1@820
  unsigned int *v587; // r2@822
  signed int v588; // r1@824
  unsigned int *v589; // r2@826
  signed int v590; // r1@828
  unsigned int *v591; // r2@830
  signed int v592; // r1@832
  unsigned int *v593; // r2@834
  signed int v594; // r1@836
  unsigned int *v595; // r2@838
  signed int v596; // r1@840
  unsigned int *v597; // r2@842
  signed int v598; // r1@844
  unsigned int *v599; // r2@846
  signed int v600; // r1@848
  unsigned int *v601; // r2@850
  signed int v602; // r1@852
  unsigned int *v603; // r2@854
  signed int v604; // r1@856
  unsigned int *v605; // r2@858
  signed int v606; // r1@860
  unsigned int *v607; // r2@862
  signed int v608; // r1@864
  unsigned int *v609; // r2@866
  signed int v610; // r1@868
  unsigned int *v611; // r2@870
  signed int v612; // r1@872
  unsigned int *v613; // r2@874
  signed int v614; // r1@876
  unsigned int *v615; // r2@878
  signed int v616; // r1@880
  unsigned int *v617; // r2@882
  signed int v618; // r1@884
  unsigned int *v619; // r2@886
  signed int v620; // r1@888
  unsigned int *v621; // r2@890
  signed int v622; // r1@892
  unsigned int *v623; // r2@894
  signed int v624; // r1@896
  unsigned int *v625; // r2@898
  signed int v626; // r1@900
  unsigned int *v627; // r2@902
  signed int v628; // r1@904
  unsigned int *v629; // r2@906
  signed int v630; // r1@908
  unsigned int *v631; // r2@910
  signed int v632; // r1@912
  unsigned int *v633; // r2@914
  signed int v634; // r1@916
  unsigned int *v635; // r2@918
  signed int v636; // r1@920
  unsigned int *v637; // r2@922
  signed int v638; // r1@924
  unsigned int *v639; // r2@926
  signed int v640; // r1@928
  unsigned int *v641; // r2@930
  signed int v642; // r1@932
  unsigned int *v643; // r2@934
  signed int v644; // r1@936
  unsigned int *v645; // r2@938
  signed int v646; // r1@940
  unsigned int *v647; // r2@942
  signed int v648; // r1@944
  unsigned int *v649; // r2@946
  signed int v650; // r1@948
  unsigned int *v651; // r2@950
  signed int v652; // r1@952
  unsigned int *v653; // r2@954
  signed int v654; // r1@956
  unsigned int *v655; // r2@958
  signed int v656; // r1@960
  unsigned int *v657; // r2@962
  signed int v658; // r1@964
  unsigned int *v659; // r2@966
  signed int v660; // r1@968
  unsigned int *v661; // r2@970
  signed int v662; // r1@972
  unsigned int *v663; // r2@974
  signed int v664; // r1@976
  unsigned int *v665; // r2@978
  signed int v666; // r1@980
  unsigned int *v667; // r2@982
  signed int v668; // r1@984
  unsigned int *v669; // r2@986
  signed int v670; // r1@988
  unsigned int *v671; // r2@990
  signed int v672; // r1@992
  unsigned int *v673; // r2@994
  signed int v674; // r1@996
  unsigned int *v675; // r2@998
  signed int v676; // r1@1000
  unsigned int *v677; // r2@1002
  signed int v678; // r1@1004
  unsigned int *v679; // r2@1006
  signed int v680; // r1@1008
  unsigned int *v681; // r2@1010
  signed int v682; // r1@1012
  unsigned int *v683; // r2@1014
  signed int v684; // r1@1016
  unsigned int *v685; // r2@1018
  signed int v686; // r1@1020
  unsigned int *v687; // r2@1022
  signed int v688; // r1@1024
  unsigned int *v689; // r2@1026
  signed int v690; // r1@1028
  unsigned int *v691; // r2@1030
  signed int v692; // r1@1032
  unsigned int *v693; // r2@1034
  signed int v694; // r1@1036
  unsigned int *v695; // r2@1038
  signed int v696; // r1@1040
  unsigned int *v697; // r2@1042
  signed int v698; // r1@1044
  unsigned int *v699; // r2@1046
  signed int v700; // r1@1048
  unsigned int *v701; // r2@1050
  signed int v702; // r1@1052
  unsigned int *v703; // r2@1054
  signed int v704; // r1@1056
  unsigned int *v705; // r2@1058
  signed int v706; // r1@1060
  unsigned int *v707; // r2@1062
  signed int v708; // r1@1064
  unsigned int *v709; // r2@1066
  signed int v710; // r1@1068
  unsigned int *v711; // r2@1070
  signed int v712; // r1@1072
  unsigned int *v713; // r2@1074
  signed int v714; // r1@1076
  unsigned int *v715; // r2@1078
  signed int v716; // r1@1080
  unsigned int *v717; // r2@1082
  signed int v718; // r1@1084
  unsigned int *v719; // r2@1086
  signed int v720; // r1@1088
  unsigned int *v721; // r2@1090
  signed int v722; // r1@1092
  unsigned int *v723; // r2@1094
  signed int v724; // r1@1096
  unsigned int *v725; // r2@1098
  signed int v726; // r1@1100
  unsigned int *v727; // r2@1102
  signed int v728; // r1@1104
  unsigned int *v729; // r2@1106
  signed int v730; // r1@1108
  unsigned int *v731; // r2@1110
  signed int v732; // r1@1112
  unsigned int *v733; // r2@1114
  signed int v734; // r1@1116
  unsigned int *v735; // r2@1118
  signed int v736; // r1@1120
  unsigned int *v737; // r2@1122
  signed int v738; // r1@1124
  unsigned int *v739; // r2@1126
  signed int v740; // r1@1128
  unsigned int *v741; // r2@1130
  signed int v742; // r1@1132
  unsigned int *v743; // r2@1134
  signed int v744; // r1@1136
  unsigned int *v745; // r2@1138
  signed int v746; // r1@1140
  unsigned int *v747; // r2@1142
  signed int v748; // r1@1144
  unsigned int *v749; // r2@1146
  signed int v750; // r1@1148
  void *v751; // [sp+0h] [bp-DF0h]@449
  __int64 v752; // [sp+8h] [bp-DE8h]@449
  int v753; // [sp+14h] [bp-DDCh]@449
  void *v754; // [sp+18h] [bp-DD8h]@446
  __int64 v755; // [sp+20h] [bp-DD0h]@446
  int v756; // [sp+2Ch] [bp-DC4h]@446
  void *v757; // [sp+30h] [bp-DC0h]@443
  __int64 v758; // [sp+38h] [bp-DB8h]@443
  int v759; // [sp+44h] [bp-DACh]@443
  void *v760; // [sp+48h] [bp-DA8h]@440
  __int64 v761; // [sp+50h] [bp-DA0h]@440
  int v762; // [sp+5Ch] [bp-D94h]@440
  void *v763; // [sp+60h] [bp-D90h]@437
  __int64 v764; // [sp+68h] [bp-D88h]@437
  int v765; // [sp+74h] [bp-D7Ch]@437
  void *v766; // [sp+78h] [bp-D78h]@434
  __int64 v767; // [sp+80h] [bp-D70h]@434
  int v768; // [sp+8Ch] [bp-D64h]@434
  void *v769; // [sp+90h] [bp-D60h]@431
  __int64 v770; // [sp+98h] [bp-D58h]@431
  int v771; // [sp+A4h] [bp-D4Ch]@431
  void *v772; // [sp+A8h] [bp-D48h]@428
  __int64 v773; // [sp+B0h] [bp-D40h]@428
  int v774; // [sp+BCh] [bp-D34h]@428
  void *v775; // [sp+C0h] [bp-D30h]@425
  __int64 v776; // [sp+C8h] [bp-D28h]@425
  int v777; // [sp+D4h] [bp-D1Ch]@425
  void *v778; // [sp+D8h] [bp-D18h]@422
  __int64 v779; // [sp+E0h] [bp-D10h]@422
  int v780; // [sp+ECh] [bp-D04h]@422
  void *v781; // [sp+F0h] [bp-D00h]@419
  __int64 v782; // [sp+F8h] [bp-CF8h]@419
  int v783; // [sp+104h] [bp-CECh]@419
  void *v784; // [sp+108h] [bp-CE8h]@416
  __int64 v785; // [sp+110h] [bp-CE0h]@416
  int v786; // [sp+11Ch] [bp-CD4h]@416
  void *v787; // [sp+120h] [bp-CD0h]@413
  __int64 v788; // [sp+128h] [bp-CC8h]@413
  int v789; // [sp+134h] [bp-CBCh]@413
  void *v790; // [sp+138h] [bp-CB8h]@410
  __int64 v791; // [sp+140h] [bp-CB0h]@410
  int v792; // [sp+14Ch] [bp-CA4h]@410
  void *v793; // [sp+150h] [bp-CA0h]@407
  __int64 v794; // [sp+158h] [bp-C98h]@407
  int v795; // [sp+164h] [bp-C8Ch]@407
  void *v796; // [sp+168h] [bp-C88h]@404
  __int64 v797; // [sp+170h] [bp-C80h]@404
  int v798; // [sp+17Ch] [bp-C74h]@404
  void *v799; // [sp+180h] [bp-C70h]@401
  __int64 v800; // [sp+188h] [bp-C68h]@401
  int v801; // [sp+194h] [bp-C5Ch]@401
  void *v802; // [sp+198h] [bp-C58h]@398
  __int64 v803; // [sp+1A0h] [bp-C50h]@398
  int v804; // [sp+1ACh] [bp-C44h]@398
  void *v805; // [sp+1B0h] [bp-C40h]@395
  __int64 v806; // [sp+1B8h] [bp-C38h]@395
  int v807; // [sp+1C4h] [bp-C2Ch]@395
  void *v808; // [sp+1C8h] [bp-C28h]@392
  __int64 v809; // [sp+1D0h] [bp-C20h]@392
  int v810; // [sp+1DCh] [bp-C14h]@392
  void *v811; // [sp+1E0h] [bp-C10h]@389
  __int64 v812; // [sp+1E8h] [bp-C08h]@389
  int v813; // [sp+1F4h] [bp-BFCh]@389
  void *v814; // [sp+1F8h] [bp-BF8h]@386
  __int64 v815; // [sp+200h] [bp-BF0h]@386
  int v816; // [sp+20Ch] [bp-BE4h]@386
  void *v817; // [sp+210h] [bp-BE0h]@383
  __int64 v818; // [sp+218h] [bp-BD8h]@383
  int v819; // [sp+224h] [bp-BCCh]@383
  void *v820; // [sp+228h] [bp-BC8h]@380
  __int64 v821; // [sp+230h] [bp-BC0h]@380
  int v822; // [sp+23Ch] [bp-BB4h]@380
  void *v823; // [sp+240h] [bp-BB0h]@377
  __int64 v824; // [sp+248h] [bp-BA8h]@377
  int v825; // [sp+254h] [bp-B9Ch]@377
  void *v826; // [sp+258h] [bp-B98h]@374
  __int64 v827; // [sp+260h] [bp-B90h]@374
  int v828; // [sp+26Ch] [bp-B84h]@374
  void *v829; // [sp+270h] [bp-B80h]@371
  __int64 v830; // [sp+278h] [bp-B78h]@371
  int v831; // [sp+284h] [bp-B6Ch]@371
  void *v832; // [sp+288h] [bp-B68h]@368
  __int64 v833; // [sp+290h] [bp-B60h]@368
  int v834; // [sp+29Ch] [bp-B54h]@368
  void *v835; // [sp+2A0h] [bp-B50h]@365
  __int64 v836; // [sp+2A8h] [bp-B48h]@365
  int v837; // [sp+2B4h] [bp-B3Ch]@365
  void *v838; // [sp+2B8h] [bp-B38h]@362
  __int64 v839; // [sp+2C0h] [bp-B30h]@362
  int v840; // [sp+2CCh] [bp-B24h]@362
  void *v841; // [sp+2D0h] [bp-B20h]@359
  __int64 v842; // [sp+2D8h] [bp-B18h]@359
  int v843; // [sp+2E4h] [bp-B0Ch]@359
  void *v844; // [sp+2E8h] [bp-B08h]@356
  __int64 v845; // [sp+2F0h] [bp-B00h]@356
  int v846; // [sp+2FCh] [bp-AF4h]@356
  void *v847; // [sp+300h] [bp-AF0h]@353
  __int64 v848; // [sp+308h] [bp-AE8h]@353
  int v849; // [sp+314h] [bp-ADCh]@353
  void *v850; // [sp+318h] [bp-AD8h]@350
  __int64 v851; // [sp+320h] [bp-AD0h]@350
  int v852; // [sp+32Ch] [bp-AC4h]@350
  void *v853; // [sp+330h] [bp-AC0h]@347
  __int64 v854; // [sp+338h] [bp-AB8h]@347
  int v855; // [sp+344h] [bp-AACh]@347
  void *v856; // [sp+348h] [bp-AA8h]@344
  __int64 v857; // [sp+350h] [bp-AA0h]@344
  int v858; // [sp+35Ch] [bp-A94h]@344
  void *v859; // [sp+360h] [bp-A90h]@341
  __int64 v860; // [sp+368h] [bp-A88h]@341
  int v861; // [sp+374h] [bp-A7Ch]@341
  void *v862; // [sp+378h] [bp-A78h]@338
  __int64 v863; // [sp+380h] [bp-A70h]@338
  int v864; // [sp+38Ch] [bp-A64h]@338
  void *v865; // [sp+390h] [bp-A60h]@335
  __int64 v866; // [sp+398h] [bp-A58h]@335
  int v867; // [sp+3A4h] [bp-A4Ch]@335
  void *v868; // [sp+3A8h] [bp-A48h]@332
  __int64 v869; // [sp+3B0h] [bp-A40h]@332
  int v870; // [sp+3BCh] [bp-A34h]@332
  void *v871; // [sp+3C0h] [bp-A30h]@330
  __int64 v872; // [sp+3C8h] [bp-A28h]@330
  int v873; // [sp+3D4h] [bp-A1Ch]@329
  int v874; // [sp+3DCh] [bp-A14h]@328
  int v875; // [sp+3E4h] [bp-A0Ch]@327
  int v876; // [sp+3ECh] [bp-A04h]@326
  int v877; // [sp+3F4h] [bp-9FCh]@325
  int v878; // [sp+3FCh] [bp-9F4h]@324
  int v879; // [sp+404h] [bp-9ECh]@323
  int v880; // [sp+40Ch] [bp-9E4h]@322
  int v881; // [sp+414h] [bp-9DCh]@321
  int v882; // [sp+41Ch] [bp-9D4h]@320
  int v883; // [sp+424h] [bp-9CCh]@319
  int v884; // [sp+42Ch] [bp-9C4h]@318
  int v885; // [sp+434h] [bp-9BCh]@317
  int v886; // [sp+43Ch] [bp-9B4h]@316
  int v887; // [sp+444h] [bp-9ACh]@315
  int v888; // [sp+44Ch] [bp-9A4h]@314
  int v889; // [sp+454h] [bp-99Ch]@313
  int v890; // [sp+45Ch] [bp-994h]@312
  int v891; // [sp+464h] [bp-98Ch]@311
  int v892; // [sp+46Ch] [bp-984h]@310
  int v893; // [sp+474h] [bp-97Ch]@309
  int v894; // [sp+47Ch] [bp-974h]@308
  int v895; // [sp+484h] [bp-96Ch]@307
  int v896; // [sp+48Ch] [bp-964h]@306
  int v897; // [sp+494h] [bp-95Ch]@305
  int v898; // [sp+49Ch] [bp-954h]@304
  int v899; // [sp+4A4h] [bp-94Ch]@303
  int v900; // [sp+4ACh] [bp-944h]@302
  int v901; // [sp+4B4h] [bp-93Ch]@301
  int v902; // [sp+4BCh] [bp-934h]@300
  int v903; // [sp+4C4h] [bp-92Ch]@299
  int v904; // [sp+4CCh] [bp-924h]@298
  int v905; // [sp+4D4h] [bp-91Ch]@295
  int v906; // [sp+4DCh] [bp-914h]@294
  int v907; // [sp+4E4h] [bp-90Ch]@293
  int v908; // [sp+4ECh] [bp-904h]@292
  int v909; // [sp+4F4h] [bp-8FCh]@291
  int v910; // [sp+4FCh] [bp-8F4h]@290
  int v911; // [sp+504h] [bp-8ECh]@289
  int v912; // [sp+50Ch] [bp-8E4h]@288
  int v913; // [sp+514h] [bp-8DCh]@287
  int v914; // [sp+51Ch] [bp-8D4h]@286
  int v915; // [sp+524h] [bp-8CCh]@285
  int v916; // [sp+52Ch] [bp-8C4h]@284
  int v917; // [sp+534h] [bp-8BCh]@283
  int v918; // [sp+53Ch] [bp-8B4h]@282
  int v919; // [sp+544h] [bp-8ACh]@281
  int v920; // [sp+54Ch] [bp-8A4h]@280
  int v921; // [sp+554h] [bp-89Ch]@279
  int v922; // [sp+55Ch] [bp-894h]@275
  int v923; // [sp+560h] [bp-890h]@275
  void *v924; // [sp+564h] [bp-88Ch]@270
  void (*v925)(void); // [sp+56Ch] [bp-884h]@270
  void (__fastcall *v926)(int, int, ClientInstance *); // [sp+570h] [bp-880h]@270
  void *v927; // [sp+574h] [bp-87Ch]@268
  void (*v928)(void); // [sp+57Ch] [bp-874h]@268
  _DWORD *(__fastcall *v929)(int, float, float, char, ClientInstance *); // [sp+580h] [bp-870h]@268
  void *v930; // [sp+584h] [bp-86Ch]@266
  void (*v931)(void); // [sp+58Ch] [bp-864h]@266
  _DWORD *(__fastcall *v932)(int, float, float, char, ClientInstance *); // [sp+590h] [bp-860h]@266
  void *v933; // [sp+594h] [bp-85Ch]@264
  void (*v934)(void); // [sp+59Ch] [bp-854h]@264
  _DWORD *(__fastcall *v935)(int, float, float, char, ClientInstance *); // [sp+5A0h] [bp-850h]@264
  void *v936; // [sp+5A4h] [bp-84Ch]@262
  void (*v937)(void); // [sp+5ACh] [bp-844h]@262
  _DWORD *(__fastcall *v938)(int, float, float, char, ClientInstance *); // [sp+5B0h] [bp-840h]@262
  void *v939; // [sp+5B4h] [bp-83Ch]@260
  void (*v940)(void); // [sp+5BCh] [bp-834h]@260
  int (__fastcall *v941)(int, int, char, ClientInstance *); // [sp+5C0h] [bp-830h]@260
  void *v942; // [sp+5C4h] [bp-82Ch]@258
  void (*v943)(void); // [sp+5CCh] [bp-824h]@258
  int (__fastcall *v944)(int, int, int, ClientInstance *); // [sp+5D0h] [bp-820h]@258
  void *v945; // [sp+5D4h] [bp-81Ch]@256
  void (*v946)(void); // [sp+5DCh] [bp-814h]@256
  char *(__fastcall *v947)(int, const char **, char, int, ClientInstance *); // [sp+5E0h] [bp-810h]@256
  _DWORD *v948; // [sp+5E4h] [bp-80Ch]@253
  void (*v949)(void); // [sp+5ECh] [bp-804h]@253
  _DWORD *(__fastcall *v950)(int, ClientInstance *, ClientInputCallbacks *); // [sp+5F0h] [bp-800h]@253
  int v951; // [sp+5F8h] [bp-7F8h]@253
  _DWORD *v952; // [sp+5FCh] [bp-7F4h]@250
  void (*v953)(void); // [sp+604h] [bp-7ECh]@250
  _DWORD *(__fastcall *v954)(int, ClientInstance *, ClientInputCallbacks *); // [sp+608h] [bp-7E8h]@250
  int v955; // [sp+610h] [bp-7E0h]@250
  _DWORD *v956; // [sp+614h] [bp-7DCh]@247
  void (*v957)(void); // [sp+61Ch] [bp-7D4h]@247
  int (__fastcall *v958)(int, ClientInstance *, ClientInputCallbacks *); // [sp+620h] [bp-7D0h]@247
  int v959; // [sp+628h] [bp-7C8h]@247
  _DWORD *v960; // [sp+62Ch] [bp-7C4h]@244
  void (*v961)(void); // [sp+634h] [bp-7BCh]@244
  int (__fastcall *v962)(int, ClientInstance *, ClientInputCallbacks *); // [sp+638h] [bp-7B8h]@244
  int v963; // [sp+640h] [bp-7B0h]@244
  void *v964; // [sp+644h] [bp-7ACh]@241
  void (*v965)(void); // [sp+64Ch] [bp-7A4h]@241
  int (__fastcall *v966)(int, int, ClientInstance *); // [sp+650h] [bp-7A0h]@241
  int v967; // [sp+658h] [bp-798h]@241
  void *v968; // [sp+65Ch] [bp-794h]@238
  void (*v969)(void); // [sp+664h] [bp-78Ch]@238
  int (__fastcall *v970)(int, ClientInstance *, ClientInputCallbacks *); // [sp+668h] [bp-788h]@238
  int v971; // [sp+670h] [bp-780h]@238
  void *v972; // [sp+674h] [bp-77Ch]@235
  void (*v973)(void); // [sp+67Ch] [bp-774h]@235
  int (__fastcall *v974)(int, int, ClientInstance *); // [sp+680h] [bp-770h]@235
  int v975; // [sp+688h] [bp-768h]@235
  void *v976; // [sp+68Ch] [bp-764h]@232
  void (*v977)(void); // [sp+694h] [bp-75Ch]@232
  int (__fastcall *v978)(int, ClientInstance *, ClientInputCallbacks *); // [sp+698h] [bp-758h]@232
  int v979; // [sp+6A0h] [bp-750h]@232
  void *v980; // [sp+6A4h] [bp-74Ch]@229
  void (*v981)(void); // [sp+6ACh] [bp-744h]@229
  void (__fastcall *v982)(int, ClientInstance *, ClientInputCallbacks *); // [sp+6B0h] [bp-740h]@229
  int v983; // [sp+6B8h] [bp-738h]@229
  void *v984; // [sp+6BCh] [bp-734h]@226
  void (*v985)(void); // [sp+6C4h] [bp-72Ch]@226
  void (__fastcall *v986)(int, ClientInstance *, ClientInputCallbacks *); // [sp+6C8h] [bp-728h]@226
  int v987; // [sp+6D0h] [bp-720h]@226
  void *v988; // [sp+6D4h] [bp-71Ch]@223
  void (*v989)(void); // [sp+6DCh] [bp-714h]@223
  void (__fastcall *v990)(int, ClientInstance *, ClientInputCallbacks *); // [sp+6E0h] [bp-710h]@223
  int v991; // [sp+6E8h] [bp-708h]@223
  void *v992; // [sp+6ECh] [bp-704h]@220
  void (*v993)(void); // [sp+6F4h] [bp-6FCh]@220
  int (__fastcall *v994)(int, int, ClientInstance *); // [sp+6F8h] [bp-6F8h]@220
  int v995; // [sp+700h] [bp-6F0h]@220
  void *v996; // [sp+704h] [bp-6ECh]@217
  void (*v997)(void); // [sp+70Ch] [bp-6E4h]@217
  void (__fastcall *v998)(int, ClientInstance *, ClientInputCallbacks *); // [sp+710h] [bp-6E0h]@217
  int v999; // [sp+718h] [bp-6D8h]@217
  void *v1000; // [sp+71Ch] [bp-6D4h]@214
  void (*v1001)(void); // [sp+724h] [bp-6CCh]@214
  int (__fastcall *v1002)(int, ClientInstance *, ClientInputCallbacks *); // [sp+728h] [bp-6C8h]@214
  int v1003; // [sp+730h] [bp-6C0h]@214
  void *v1004; // [sp+734h] [bp-6BCh]@211
  void (*v1005)(void); // [sp+73Ch] [bp-6B4h]@211
  int (__fastcall *v1006)(int, ClientInstance *, ClientInputCallbacks *); // [sp+740h] [bp-6B0h]@211
  int v1007; // [sp+748h] [bp-6A8h]@211
  void *v1008; // [sp+74Ch] [bp-6A4h]@208
  void (*v1009)(void); // [sp+754h] [bp-69Ch]@208
  int (__fastcall *v1010)(int, ClientInstance *, ClientInputCallbacks *); // [sp+758h] [bp-698h]@208
  int v1011; // [sp+760h] [bp-690h]@208
  void *v1012; // [sp+764h] [bp-68Ch]@205
  void (*v1013)(void); // [sp+76Ch] [bp-684h]@205
  void (__fastcall *v1014)(int, ClientInstance *, ClientInputCallbacks *); // [sp+770h] [bp-680h]@205
  int v1015; // [sp+778h] [bp-678h]@205
  void *v1016; // [sp+77Ch] [bp-674h]@202
  void (*v1017)(void); // [sp+784h] [bp-66Ch]@202
  void (__fastcall *v1018)(int, ClientInstance *, ClientInputCallbacks *); // [sp+788h] [bp-668h]@202
  int v1019; // [sp+790h] [bp-660h]@202
  void *v1020; // [sp+794h] [bp-65Ch]@199
  void (*v1021)(void); // [sp+79Ch] [bp-654h]@199
  int (__fastcall *v1022)(int, ClientInstance *, ClientInputCallbacks *); // [sp+7A0h] [bp-650h]@199
  int v1023; // [sp+7A8h] [bp-648h]@199
  void *v1024; // [sp+7ACh] [bp-644h]@196
  void (*v1025)(void); // [sp+7B4h] [bp-63Ch]@196
  int (__fastcall *v1026)(int, ClientInstance *, ClientInputCallbacks *); // [sp+7B8h] [bp-638h]@196
  int v1027; // [sp+7C0h] [bp-630h]@196
  _DWORD *v1028; // [sp+7C4h] [bp-62Ch]@193
  void (*v1029)(void); // [sp+7CCh] [bp-624h]@193
  int (__fastcall *v1030)(int, ClientInstance *, ClientInputCallbacks *); // [sp+7D0h] [bp-620h]@193
  int v1031; // [sp+7D8h] [bp-618h]@193
  _DWORD *v1032; // [sp+7DCh] [bp-614h]@190
  void (*v1033)(void); // [sp+7E4h] [bp-60Ch]@190
  int (__fastcall *v1034)(int, ClientInstance *, ClientInputCallbacks *); // [sp+7E8h] [bp-608h]@190
  int v1035; // [sp+7F0h] [bp-600h]@190
  void *v1036; // [sp+7F4h] [bp-5FCh]@187
  void (*v1037)(void); // [sp+7FCh] [bp-5F4h]@187
  int (__fastcall *v1038)(int, ClientInstance *, ClientInputCallbacks *); // [sp+800h] [bp-5F0h]@187
  int v1039; // [sp+808h] [bp-5E8h]@187
  void *v1040; // [sp+80Ch] [bp-5E4h]@184
  void (*v1041)(void); // [sp+814h] [bp-5DCh]@184
  void (__fastcall *v1042)(int, ClientInstance *, ClientInputCallbacks *); // [sp+818h] [bp-5D8h]@184
  int v1043; // [sp+820h] [bp-5D0h]@184
  void *v1044; // [sp+824h] [bp-5CCh]@181
  void (*v1045)(void); // [sp+82Ch] [bp-5C4h]@181
  void (__fastcall *v1046)(int, ClientInstance *, ClientInputCallbacks *); // [sp+830h] [bp-5C0h]@181
  int v1047; // [sp+838h] [bp-5B8h]@181
  void *v1048; // [sp+83Ch] [bp-5B4h]@178
  void (*v1049)(void); // [sp+844h] [bp-5ACh]@178
  int (__fastcall *v1050)(int, ClientInstance *, ClientInputCallbacks *); // [sp+848h] [bp-5A8h]@178
  int v1051; // [sp+850h] [bp-5A0h]@178
  void *v1052; // [sp+854h] [bp-59Ch]@175
  void (*v1053)(void); // [sp+85Ch] [bp-594h]@175
  int (__fastcall *v1054)(int, ClientInstance *, ClientInputCallbacks *); // [sp+860h] [bp-590h]@175
  int v1055; // [sp+868h] [bp-588h]@175
  void *v1056; // [sp+86Ch] [bp-584h]@172
  void (*v1057)(void); // [sp+874h] [bp-57Ch]@172
  int (__fastcall *v1058)(int, int, ClientInstance *); // [sp+878h] [bp-578h]@172
  int v1059; // [sp+880h] [bp-570h]@172
  void *v1060; // [sp+884h] [bp-56Ch]@169
  void (*v1061)(void); // [sp+88Ch] [bp-564h]@169
  int (__fastcall *v1062)(int, int, ClientInstance *); // [sp+890h] [bp-560h]@169
  int v1063; // [sp+898h] [bp-558h]@169
  void *v1064; // [sp+89Ch] [bp-554h]@166
  void (*v1065)(void); // [sp+8A4h] [bp-54Ch]@166
  int (__fastcall *v1066)(int, ClientInstance *, ClientInputCallbacks *); // [sp+8A8h] [bp-548h]@166
  int v1067; // [sp+8B0h] [bp-540h]@166
  void *v1068; // [sp+8B4h] [bp-53Ch]@163
  void (*v1069)(void); // [sp+8BCh] [bp-534h]@163
  int (__fastcall *v1070)(int, int, ClientInputCallbacks *); // [sp+8C0h] [bp-530h]@163
  int v1071; // [sp+8C8h] [bp-528h]@163
  void *v1072; // [sp+8CCh] [bp-524h]@160
  void (*v1073)(void); // [sp+8D4h] [bp-51Ch]@160
  int (__fastcall *v1074)(int, int, ClientInputCallbacks *); // [sp+8D8h] [bp-518h]@160
  int v1075; // [sp+8E0h] [bp-510h]@160
  void *v1076; // [sp+8E4h] [bp-50Ch]@157
  void (*v1077)(void); // [sp+8ECh] [bp-504h]@157
  int (__fastcall *v1078)(int, ClientInstance *, ClientInputCallbacks *); // [sp+8F0h] [bp-500h]@157
  int v1079; // [sp+8F8h] [bp-4F8h]@157
  void *v1080; // [sp+8FCh] [bp-4F4h]@154
  void (*v1081)(void); // [sp+904h] [bp-4ECh]@154
  void (__fastcall *v1082)(int, ClientInstance *, ClientInputCallbacks *); // [sp+908h] [bp-4E8h]@154
  int v1083; // [sp+910h] [bp-4E0h]@154
  void *v1084; // [sp+914h] [bp-4DCh]@151
  void (*v1085)(void); // [sp+91Ch] [bp-4D4h]@151
  void (__fastcall *v1086)(int, ClientInstance *, ClientInputCallbacks *); // [sp+920h] [bp-4D0h]@151
  int v1087; // [sp+928h] [bp-4C8h]@151
  void *v1088; // [sp+92Ch] [bp-4C4h]@148
  void (*v1089)(void); // [sp+934h] [bp-4BCh]@148
  int (__fastcall *v1090)(int, int, ClientInstance *); // [sp+938h] [bp-4B8h]@148
  int v1091; // [sp+940h] [bp-4B0h]@148
  void *v1092; // [sp+944h] [bp-4ACh]@145
  void (*v1093)(void); // [sp+94Ch] [bp-4A4h]@145
  int (__fastcall *v1094)(int, ClientInstance *, ClientInputCallbacks *); // [sp+950h] [bp-4A0h]@145
  int v1095; // [sp+958h] [bp-498h]@145
  void *v1096; // [sp+95Ch] [bp-494h]@142
  void (*v1097)(void); // [sp+964h] [bp-48Ch]@142
  int (__fastcall *v1098)(int, ClientInstance *, ClientInputCallbacks *); // [sp+968h] [bp-488h]@142
  int v1099; // [sp+970h] [bp-480h]@142
  void *v1100; // [sp+974h] [bp-47Ch]@139
  void (*v1101)(void); // [sp+97Ch] [bp-474h]@139
  void (__fastcall *v1102)(int, ClientInstance *, ClientInputCallbacks *); // [sp+980h] [bp-470h]@139
  int v1103; // [sp+988h] [bp-468h]@139
  void *v1104; // [sp+98Ch] [bp-464h]@136
  void (*v1105)(void); // [sp+994h] [bp-45Ch]@136
  void (__fastcall *v1106)(int, ClientInstance *, ClientInputCallbacks *); // [sp+998h] [bp-458h]@136
  int v1107; // [sp+9A0h] [bp-450h]@136
  void *v1108; // [sp+9A4h] [bp-44Ch]@133
  void (*v1109)(void); // [sp+9ACh] [bp-444h]@133
  void (__fastcall *v1110)(int, ClientInstance *, ClientInputCallbacks *); // [sp+9B0h] [bp-440h]@133
  int v1111; // [sp+9B8h] [bp-438h]@133
  void *v1112; // [sp+9BCh] [bp-434h]@130
  void (*v1113)(void); // [sp+9C4h] [bp-42Ch]@130
  int (__fastcall *v1114)(int, ClientInstance *, ClientInputCallbacks *); // [sp+9C8h] [bp-428h]@130
  int v1115; // [sp+9D0h] [bp-420h]@130
  void *v1116; // [sp+9D4h] [bp-41Ch]@127
  void (*v1117)(void); // [sp+9DCh] [bp-414h]@127
  PlayerCommandOrigin *(__fastcall *v1118)(int, ClientInstance *, ClientInputCallbacks *); // [sp+9E0h] [bp-410h]@127
  int v1119; // [sp+9E8h] [bp-408h]@127
  void *v1120; // [sp+9ECh] [bp-404h]@124
  void (*v1121)(void); // [sp+9F4h] [bp-3FCh]@124
  void (__fastcall *v1122)(int, int, int); // [sp+9F8h] [bp-3F8h]@124
  int v1123; // [sp+A00h] [bp-3F0h]@124
  void *v1124; // [sp+A04h] [bp-3ECh]@121
  void (*v1125)(void); // [sp+A0Ch] [bp-3E4h]@121
  int (__fastcall *v1126)(int, ClientInstance *, ClientInputCallbacks *); // [sp+A10h] [bp-3E0h]@121
  int v1127; // [sp+A18h] [bp-3D8h]@121
  void *v1128; // [sp+A1Ch] [bp-3D4h]@118
  void (*v1129)(void); // [sp+A24h] [bp-3CCh]@118
  int (__fastcall *v1130)(int, ClientInstance *, ClientInputCallbacks *); // [sp+A28h] [bp-3C8h]@118
  int v1131; // [sp+A30h] [bp-3C0h]@118
  void *v1132; // [sp+A34h] [bp-3BCh]@115
  void (*v1133)(void); // [sp+A3Ch] [bp-3B4h]@115
  int (__fastcall *v1134)(int, ClientInstance *, ClientInputCallbacks *); // [sp+A40h] [bp-3B0h]@115
  int v1135; // [sp+A48h] [bp-3A8h]@115
  void *v1136; // [sp+A4Ch] [bp-3A4h]@112
  void (*v1137)(void); // [sp+A54h] [bp-39Ch]@112
  int (__fastcall *v1138)(int, ClientInstance *, ClientInputCallbacks *); // [sp+A58h] [bp-398h]@112
  int v1139; // [sp+A60h] [bp-390h]@112
  void *v1140; // [sp+A64h] [bp-38Ch]@109
  void (*v1141)(void); // [sp+A6Ch] [bp-384h]@109
  const char *(__fastcall *v1142)(int, ClientInstance *, ClientInputCallbacks *); // [sp+A70h] [bp-380h]@109
  int v1143; // [sp+A78h] [bp-378h]@109
  void *v1144; // [sp+A7Ch] [bp-374h]@106
  void (*v1145)(void); // [sp+A84h] [bp-36Ch]@106
  int (__fastcall *v1146)(int, ClientInstance *, ClientInputCallbacks *); // [sp+A88h] [bp-368h]@106
  int v1147; // [sp+A90h] [bp-360h]@106
  void *v1148; // [sp+A94h] [bp-35Ch]@103
  void (*v1149)(void); // [sp+A9Ch] [bp-354h]@103
  int (__fastcall *v1150)(int, ClientInstance *, ClientInputCallbacks *); // [sp+AA0h] [bp-350h]@103
  int v1151; // [sp+AA8h] [bp-348h]@103
  void *v1152; // [sp+AACh] [bp-344h]@100
  void (*v1153)(void); // [sp+AB4h] [bp-33Ch]@100
  int (__fastcall *v1154)(int, ClientInstance *, ClientInputCallbacks *); // [sp+AB8h] [bp-338h]@100
  int v1155; // [sp+AC0h] [bp-330h]@100
  void *v1156; // [sp+AC4h] [bp-32Ch]@97
  void (*v1157)(void); // [sp+ACCh] [bp-324h]@97
  void (__fastcall *v1158)(int, ClientInstance *, ClientInputCallbacks *); // [sp+AD0h] [bp-320h]@97
  int v1159; // [sp+AD8h] [bp-318h]@97
  void *v1160; // [sp+ADCh] [bp-314h]@94
  void (*v1161)(void); // [sp+AE4h] [bp-30Ch]@94
  int (__fastcall *v1162)(int, ClientInstance *, ClientInputCallbacks *); // [sp+AE8h] [bp-308h]@94
  int v1163; // [sp+AF0h] [bp-300h]@94
  void *v1164; // [sp+AF4h] [bp-2FCh]@91
  void (*v1165)(void); // [sp+AFCh] [bp-2F4h]@91
  int (__fastcall *v1166)(int, ClientInstance *, ClientInputCallbacks *); // [sp+B00h] [bp-2F0h]@91
  int v1167; // [sp+B08h] [bp-2E8h]@91
  void *v1168; // [sp+B0Ch] [bp-2E4h]@88
  void (*v1169)(void); // [sp+B14h] [bp-2DCh]@88
  void (__fastcall *v1170)(int, ClientInstance *, ClientInputCallbacks *); // [sp+B18h] [bp-2D8h]@88
  int v1171; // [sp+B20h] [bp-2D0h]@88
  void *v1172; // [sp+B24h] [bp-2CCh]@85
  void (*v1173)(void); // [sp+B2Ch] [bp-2C4h]@85
  int (__fastcall *v1174)(int, ClientInstance *, ClientInputCallbacks *); // [sp+B30h] [bp-2C0h]@85
  int v1175; // [sp+B38h] [bp-2B8h]@85
  void *v1176; // [sp+B3Ch] [bp-2B4h]@82
  void (*v1177)(void); // [sp+B44h] [bp-2ACh]@82
  int (__fastcall *v1178)(int, ClientInstance *, ClientInputCallbacks *); // [sp+B48h] [bp-2A8h]@82
  int v1179; // [sp+B50h] [bp-2A0h]@82
  void *v1180; // [sp+B54h] [bp-29Ch]@79
  void (*v1181)(void); // [sp+B5Ch] [bp-294h]@79
  int (__fastcall *v1182)(int, ClientInstance *, ClientInputCallbacks *); // [sp+B60h] [bp-290h]@79
  int v1183; // [sp+B68h] [bp-288h]@79
  void *v1184; // [sp+B6Ch] [bp-284h]@76
  void (*v1185)(void); // [sp+B74h] [bp-27Ch]@76
  char *(__fastcall *v1186)(int, ClientInstance *, ClientInputCallbacks *); // [sp+B78h] [bp-278h]@76
  int v1187; // [sp+B80h] [bp-270h]@76
  void *v1188; // [sp+B84h] [bp-26Ch]@73
  void (*v1189)(void); // [sp+B8Ch] [bp-264h]@73
  char *(__fastcall *v1190)(int, ClientInstance *, ClientInputCallbacks *); // [sp+B90h] [bp-260h]@73
  int v1191; // [sp+B98h] [bp-258h]@73
  void *v1192; // [sp+B9Ch] [bp-254h]@70
  void (*v1193)(void); // [sp+BA4h] [bp-24Ch]@70
  int (__fastcall *v1194)(int, ClientInstance *, ClientInputCallbacks *); // [sp+BA8h] [bp-248h]@70
  int v1195; // [sp+BB0h] [bp-240h]@70
  void *v1196; // [sp+BB4h] [bp-23Ch]@67
  void (*v1197)(void); // [sp+BBCh] [bp-234h]@67
  int (__fastcall *v1198)(int, ClientInstance *, ClientInputCallbacks *); // [sp+BC0h] [bp-230h]@67
  int v1199; // [sp+BC8h] [bp-228h]@67
  void *v1200; // [sp+BCCh] [bp-224h]@64
  void (*v1201)(void); // [sp+BD4h] [bp-21Ch]@64
  int (__fastcall *v1202)(int, ClientInstance *, ClientInputCallbacks *); // [sp+BD8h] [bp-218h]@64
  int v1203; // [sp+BE0h] [bp-210h]@64
  void *v1204; // [sp+BE4h] [bp-20Ch]@61
  void (*v1205)(void); // [sp+BECh] [bp-204h]@61
  int (__fastcall *v1206)(int, ClientInstance *, ClientInputCallbacks *); // [sp+BF0h] [bp-200h]@61
  int v1207; // [sp+BF8h] [bp-1F8h]@61
  void *v1208; // [sp+BFCh] [bp-1F4h]@58
  void (*v1209)(void); // [sp+C04h] [bp-1ECh]@58
  void (__fastcall *v1210)(int, ClientInstance *, ClientInputCallbacks *); // [sp+C08h] [bp-1E8h]@58
  int v1211; // [sp+C10h] [bp-1E0h]@58
  void *v1212; // [sp+C14h] [bp-1DCh]@55
  void (*v1213)(void); // [sp+C1Ch] [bp-1D4h]@55
  void (__fastcall *v1214)(int, ClientInstance *, ClientInputCallbacks *); // [sp+C20h] [bp-1D0h]@55
  int v1215; // [sp+C28h] [bp-1C8h]@55
  void *v1216; // [sp+C2Ch] [bp-1C4h]@52
  void (*v1217)(void); // [sp+C34h] [bp-1BCh]@52
  int (__fastcall *v1218)(int, ClientInstance *, ClientInputCallbacks *); // [sp+C38h] [bp-1B8h]@52
  int v1219; // [sp+C40h] [bp-1B0h]@52
  void *v1220; // [sp+C44h] [bp-1ACh]@49
  void (*v1221)(void); // [sp+C4Ch] [bp-1A4h]@49
  int (__fastcall *v1222)(int, ClientInstance *, ClientInputCallbacks *); // [sp+C50h] [bp-1A0h]@49
  int v1223; // [sp+C58h] [bp-198h]@49
  void *v1224; // [sp+C5Ch] [bp-194h]@46
  void (*v1225)(void); // [sp+C64h] [bp-18Ch]@46
  int (__fastcall *v1226)(int, int, ClientInputCallbacks *); // [sp+C68h] [bp-188h]@46
  int v1227; // [sp+C70h] [bp-180h]@46
  void *v1228; // [sp+C74h] [bp-17Ch]@43
  void (*v1229)(void); // [sp+C7Ch] [bp-174h]@43
  int (__fastcall *v1230)(int, int, ClientInputCallbacks *); // [sp+C80h] [bp-170h]@43
  int v1231; // [sp+C88h] [bp-168h]@43
  void *v1232; // [sp+C8Ch] [bp-164h]@40
  void (*v1233)(void); // [sp+C94h] [bp-15Ch]@40
  int (__fastcall *v1234)(int, int, ClientInputCallbacks *); // [sp+C98h] [bp-158h]@40
  int v1235; // [sp+CA0h] [bp-150h]@40
  void *v1236; // [sp+CA4h] [bp-14Ch]@37
  void (*v1237)(void); // [sp+CACh] [bp-144h]@37
  int (__fastcall *v1238)(int, int, ClientInputCallbacks *); // [sp+CB0h] [bp-140h]@37
  int v1239; // [sp+CB8h] [bp-138h]@37
  void *v1240; // [sp+CBCh] [bp-134h]@34
  void (*v1241)(void); // [sp+CC4h] [bp-12Ch]@34
  int (__fastcall *v1242)(int, int, ClientInputCallbacks *); // [sp+CC8h] [bp-128h]@34
  int v1243; // [sp+CD0h] [bp-120h]@34
  void *v1244; // [sp+CD4h] [bp-11Ch]@31
  void (*v1245)(void); // [sp+CDCh] [bp-114h]@31
  int (__fastcall *v1246)(int, int, ClientInputCallbacks *); // [sp+CE0h] [bp-110h]@31
  int v1247; // [sp+CE8h] [bp-108h]@31
  void *v1248; // [sp+CECh] [bp-104h]@28
  void (*v1249)(void); // [sp+CF4h] [bp-FCh]@28
  int (__fastcall *v1250)(int, int, ClientInputCallbacks *); // [sp+CF8h] [bp-F8h]@28
  int v1251; // [sp+D00h] [bp-F0h]@28
  void *v1252; // [sp+D04h] [bp-ECh]@25
  void (*v1253)(void); // [sp+D0Ch] [bp-E4h]@25
  int (__fastcall *v1254)(int, int, ClientInputCallbacks *); // [sp+D10h] [bp-E0h]@25
  int v1255; // [sp+D18h] [bp-D8h]@25
  void *v1256; // [sp+D1Ch] [bp-D4h]@22
  void (*v1257)(void); // [sp+D24h] [bp-CCh]@22
  int (__fastcall *v1258)(int, int, ClientInputCallbacks *); // [sp+D28h] [bp-C8h]@22
  int v1259; // [sp+D30h] [bp-C0h]@22
  void *v1260; // [sp+D34h] [bp-BCh]@19
  void (*v1261)(void); // [sp+D3Ch] [bp-B4h]@19
  int (__fastcall *v1262)(int, ClientInstance *, ClientInputCallbacks *); // [sp+D40h] [bp-B0h]@19
  int v1263; // [sp+D48h] [bp-A8h]@19
  void *v1264; // [sp+D4Ch] [bp-A4h]@16
  void (*v1265)(void); // [sp+D54h] [bp-9Ch]@16
  void (__fastcall *v1266)(int, int, ClientInstance *); // [sp+D58h] [bp-98h]@16
  int v1267; // [sp+D60h] [bp-90h]@16
  void *v1268; // [sp+D64h] [bp-8Ch]@13
  void (*v1269)(void); // [sp+D6Ch] [bp-84h]@13
  void (__fastcall *v1270)(int, int, ClientInstance *); // [sp+D70h] [bp-80h]@13
  int v1271; // [sp+D78h] [bp-78h]@13
  void *v1272; // [sp+D7Ch] [bp-74h]@10
  void (*v1273)(void); // [sp+D84h] [bp-6Ch]@10
  int (__fastcall *v1274)(int, ClientInstance *, ClientInputCallbacks *); // [sp+D88h] [bp-68h]@10
  int v1275; // [sp+D90h] [bp-60h]@10
  void *v1276; // [sp+D94h] [bp-5Ch]@7
  void (*v1277)(void); // [sp+D9Ch] [bp-54h]@7
  _DWORD *(__fastcall *v1278)(int, ClientInstance *, ClientInputCallbacks *); // [sp+DA0h] [bp-50h]@7
  int v1279; // [sp+DA8h] [bp-48h]@7
  void *v1280; // [sp+DACh] [bp-44h]@5
  void (*v1281)(void); // [sp+DB4h] [bp-3Ch]@5
  void (__fastcall *v1282)(int, ClientInputCallbacks *, MinecraftGame *, int); // [sp+DB8h] [bp-38h]@5
  void *v1283; // [sp+DBCh] [bp-34h]@3
  void (*v1284)(void); // [sp+DC4h] [bp-2Ch]@3
  int (__fastcall *v1285)(int, ClientInputCallbacks *, ClientInstance *, int); // [sp+DC8h] [bp-28h]@3
  void *v1286; // [sp+DCCh] [bp-24h]@1
  void (*v1287)(void); // [sp+DD4h] [bp-1Ch]@1
  int (__fastcall *v1288)(int, ClientInstance *, int, int, int, ClientInstance *); // [sp+DD8h] [bp-18h]@1

  v1 = this;
  v2 = *((_DWORD *)this + 2);
  v1286 = operator new(1u);
  v1288 = sub_E25408;
  v1287 = (void (*)(void))sub_E2542C;
  InputHandler::registerRawInputHandler(v2, (int)&v1286);
  if ( v1287 )
    v1287();
  v3 = *((_DWORD *)v1 + 2);
  v1283 = operator new(1u);
  v1285 = sub_E2545A;
  v1284 = (void (*)(void))sub_E25464;
  InputHandler::registerControllerConnectionStateChangeHandler(v3, (int)&v1283);
  if ( v1284 )
    v1284();
  v4 = *((_DWORD *)v1 + 2);
  v1280 = operator new(1u);
  v1282 = sub_E25492;
  v1281 = (void (*)(void))sub_E2549C;
  InputHandler::registerChangeUserHandler(v4, (int)&v1280);
  if ( v1281 )
    v1281();
  v5 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1279, "button.pointer_pressed");
  v1276 = operator new(1u);
  v1278 = sub_E254CA;
  v1277 = (void (*)(void))sub_E254D0;
  InputHandler::registerButtonDownHandler(v5, (int **)&v1279, (int)&v1276, 0);
  if ( v1277 )
    v1277();
  v6 = (void *)(v1279 - 12);
  if ( (int *)(v1279 - 12) != &dword_28898C0 )
  {
    v403 = (unsigned int *)(v1279 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v404 = __ldrex(v403);
      while ( __strex(v404 - 1, v403) );
    }
    else
      v404 = (*v403)--;
    if ( v404 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1275, "button.pause");
  v1272 = operator new(1u);
  v1274 = sub_E254FE;
  v1273 = (void (*)(void))sub_E25504;
  InputHandler::registerButtonDownHandler(v7, (int **)&v1275, (int)&v1272, 0);
  if ( v1273 )
    v1273();
  v8 = (void *)(v1275 - 12);
  if ( (int *)(v1275 - 12) != &dword_28898C0 )
    v405 = (unsigned int *)(v1275 - 4);
        v406 = __ldrex(v405);
      while ( __strex(v406 - 1, v405) );
      v406 = (*v405)--;
    if ( v406 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1271, "button.inventory");
  v1268 = operator new(1u);
  v1270 = sub_E25532;
  v1269 = (void (*)(void))sub_E2553A;
  InputHandler::registerButtonDownHandler(v9, (int **)&v1271, (int)&v1268, 0);
  if ( v1269 )
    v1269();
  v10 = (void *)(v1271 - 12);
  if ( (int *)(v1271 - 12) != &dword_28898C0 )
    v407 = (unsigned int *)(v1271 - 4);
        v408 = __ldrex(v407);
      while ( __strex(v408 - 1, v407) );
      v408 = (*v407)--;
    if ( v408 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1267, "button.open_crafting");
  v1264 = operator new(1u);
  v1266 = sub_E25568;
  v1265 = (void (*)(void))sub_E25570;
  InputHandler::registerButtonDownHandler(v11, (int **)&v1267, (int)&v1264, 0);
  if ( v1265 )
    v1265();
  v12 = (void *)(v1267 - 12);
  if ( (int *)(v1267 - 12) != &dword_28898C0 )
    v409 = (unsigned int *)(v1267 - 4);
        v410 = __ldrex(v409);
      while ( __strex(v410 - 1, v409) );
      v410 = (*v409)--;
    if ( v410 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1263, "button.drop");
  v1260 = operator new(1u);
  v1262 = sub_E2559E;
  v1261 = (void (*)(void))sub_E255A4;
  InputHandler::registerButtonDownHandler(v13, (int **)&v1263, (int)&v1260, 0);
  if ( v1261 )
    v1261();
  v14 = (void *)(v1263 - 12);
  if ( (int *)(v1263 - 12) != &dword_28898C0 )
    v411 = (unsigned int *)(v1263 - 4);
        v412 = __ldrex(v411);
      while ( __strex(v412 - 1, v411) );
      v412 = (*v411)--;
    if ( v412 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1259, "button.slot1");
  v1256 = operator new(1u);
  v1258 = sub_E255D2;
  v1257 = (void (*)(void))sub_E255DA;
  InputHandler::registerButtonDownHandler(v15, (int **)&v1259, (int)&v1256, 0);
  if ( v1257 )
    v1257();
  v16 = (void *)(v1259 - 12);
  if ( (int *)(v1259 - 12) != &dword_28898C0 )
    v413 = (unsigned int *)(v1259 - 4);
        v414 = __ldrex(v413);
      while ( __strex(v414 - 1, v413) );
      v414 = (*v413)--;
    if ( v414 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1255, "button.slot2");
  v1252 = operator new(1u);
  v1254 = sub_E25608;
  v1253 = (void (*)(void))sub_E25610;
  InputHandler::registerButtonDownHandler(v17, (int **)&v1255, (int)&v1252, 0);
  if ( v1253 )
    v1253();
  v18 = (void *)(v1255 - 12);
  if ( (int *)(v1255 - 12) != &dword_28898C0 )
    v415 = (unsigned int *)(v1255 - 4);
        v416 = __ldrex(v415);
      while ( __strex(v416 - 1, v415) );
      v416 = (*v415)--;
    if ( v416 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1251, "button.slot3");
  v1248 = operator new(1u);
  v1250 = sub_E2563E;
  v1249 = (void (*)(void))sub_E25646;
  InputHandler::registerButtonDownHandler(v19, (int **)&v1251, (int)&v1248, 0);
  if ( v1249 )
    v1249();
  v20 = (void *)(v1251 - 12);
  if ( (int *)(v1251 - 12) != &dword_28898C0 )
    v417 = (unsigned int *)(v1251 - 4);
        v418 = __ldrex(v417);
      while ( __strex(v418 - 1, v417) );
      v418 = (*v417)--;
    if ( v418 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1247, "button.slot4");
  v1244 = operator new(1u);
  v1246 = sub_E25674;
  v1245 = (void (*)(void))sub_E2567C;
  InputHandler::registerButtonDownHandler(v21, (int **)&v1247, (int)&v1244, 0);
  if ( v1245 )
    v1245();
  v22 = (void *)(v1247 - 12);
  if ( (int *)(v1247 - 12) != &dword_28898C0 )
    v419 = (unsigned int *)(v1247 - 4);
        v420 = __ldrex(v419);
      while ( __strex(v420 - 1, v419) );
      v420 = (*v419)--;
    if ( v420 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  v23 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1243, "button.slot5");
  v1240 = operator new(1u);
  v1242 = sub_E256AA;
  v1241 = (void (*)(void))sub_E256B2;
  InputHandler::registerButtonDownHandler(v23, (int **)&v1243, (int)&v1240, 0);
  if ( v1241 )
    v1241();
  v24 = (void *)(v1243 - 12);
  if ( (int *)(v1243 - 12) != &dword_28898C0 )
    v421 = (unsigned int *)(v1243 - 4);
        v422 = __ldrex(v421);
      while ( __strex(v422 - 1, v421) );
      v422 = (*v421)--;
    if ( v422 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1239, "button.slot6");
  v1236 = operator new(1u);
  v1238 = sub_E256E0;
  v1237 = (void (*)(void))sub_E256E8;
  InputHandler::registerButtonDownHandler(v25, (int **)&v1239, (int)&v1236, 0);
  if ( v1237 )
    v1237();
  v26 = (void *)(v1239 - 12);
  if ( (int *)(v1239 - 12) != &dword_28898C0 )
    v423 = (unsigned int *)(v1239 - 4);
        v424 = __ldrex(v423);
      while ( __strex(v424 - 1, v423) );
      v424 = (*v423)--;
    if ( v424 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  v27 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1235, "button.slot7");
  v1232 = operator new(1u);
  v1234 = sub_E25716;
  v1233 = (void (*)(void))sub_E2571E;
  InputHandler::registerButtonDownHandler(v27, (int **)&v1235, (int)&v1232, 0);
  if ( v1233 )
    v1233();
  v28 = (void *)(v1235 - 12);
  if ( (int *)(v1235 - 12) != &dword_28898C0 )
    v425 = (unsigned int *)(v1235 - 4);
        v426 = __ldrex(v425);
      while ( __strex(v426 - 1, v425) );
      v426 = (*v425)--;
    if ( v426 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  v29 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1231, "button.slot8");
  v1228 = operator new(1u);
  v1230 = sub_E2574C;
  v1229 = (void (*)(void))sub_E25754;
  InputHandler::registerButtonDownHandler(v29, (int **)&v1231, (int)&v1228, 0);
  if ( v1229 )
    v1229();
  v30 = (void *)(v1231 - 12);
  if ( (int *)(v1231 - 12) != &dword_28898C0 )
    v427 = (unsigned int *)(v1231 - 4);
        v428 = __ldrex(v427);
      while ( __strex(v428 - 1, v427) );
      v428 = (*v427)--;
    if ( v428 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1227, "button.slot9");
  v1224 = operator new(1u);
  v1226 = sub_E25782;
  v1225 = (void (*)(void))sub_E2578A;
  InputHandler::registerButtonDownHandler(v31, (int **)&v1227, (int)&v1224, 0);
  if ( v1225 )
    v1225();
  v32 = (void *)(v1227 - 12);
  if ( (int *)(v1227 - 12) != &dword_28898C0 )
    v429 = (unsigned int *)(v1227 - 4);
        v430 = __ldrex(v429);
      while ( __strex(v430 - 1, v429) );
      v430 = (*v429)--;
    if ( v430 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
  v33 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1223, "button.no_clip");
  v1220 = operator new(1u);
  v1222 = sub_E257B8;
  v1221 = (void (*)(void))sub_E257BE;
  InputHandler::registerButtonDownHandler(v33, (int **)&v1223, (int)&v1220, 0);
  if ( v1221 )
    v1221();
  v34 = (void *)(v1223 - 12);
  if ( (int *)(v1223 - 12) != &dword_28898C0 )
    v431 = (unsigned int *)(v1223 - 4);
        v432 = __ldrex(v431);
      while ( __strex(v432 - 1, v431) );
      v432 = (*v431)--;
    if ( v432 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  v35 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1219, "button.set_spawn");
  v1216 = operator new(1u);
  v1218 = sub_E257EC;
  v1217 = (void (*)(void))sub_E257F2;
  InputHandler::registerButtonDownHandler(v35, (int **)&v1219, (int)&v1216, 0);
  if ( v1217 )
    v1217();
  v36 = (void *)(v1219 - 12);
  if ( (int *)(v1219 - 12) != &dword_28898C0 )
    v433 = (unsigned int *)(v1219 - 4);
        v434 = __ldrex(v433);
      while ( __strex(v434 - 1, v433) );
      v434 = (*v433)--;
    if ( v434 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  v37 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1215, "button.show_chunk_map");
  v1212 = operator new(1u);
  v1214 = sub_E25820;
  v1213 = (void (*)(void))sub_E25826;
  InputHandler::registerButtonDownHandler(v37, (int **)&v1215, (int)&v1212, 0);
  if ( v1213 )
    v1213();
  v38 = (void *)(v1215 - 12);
  if ( (int *)(v1215 - 12) != &dword_28898C0 )
    v435 = (unsigned int *)(v1215 - 4);
        v436 = __ldrex(v435);
      while ( __strex(v436 - 1, v435) );
      v436 = (*v435)--;
    if ( v436 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v38);
  v39 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1211, "button.enable_text_to_speech");
  v1208 = operator new(1u);
  v1210 = sub_E25854;
  v1209 = (void (*)(void))sub_E2585A;
  InputHandler::registerButtonDownHandler(v39, (int **)&v1211, (int)&v1208, 0);
  if ( v1209 )
    v1209();
  v40 = (void *)(v1211 - 12);
  if ( (int *)(v1211 - 12) != &dword_28898C0 )
    v437 = (unsigned int *)(v1211 - 4);
        v438 = __ldrex(v437);
      while ( __strex(v438 - 1, v437) );
      v438 = (*v437)--;
    if ( v438 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  v41 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1207, "button.show_worker_threads");
  v1204 = operator new(1u);
  v1206 = sub_E25888;
  v1205 = (void (*)(void))sub_E2588E;
  InputHandler::registerButtonDownHandler(v41, (int **)&v1207, (int)&v1204, 0);
  if ( v1205 )
    v1205();
  v42 = (void *)(v1207 - 12);
  if ( (int *)(v1207 - 12) != &dword_28898C0 )
    v439 = (unsigned int *)(v1207 - 4);
        v440 = __ldrex(v439);
      while ( __strex(v440 - 1, v439) );
      v440 = (*v439)--;
    if ( v440 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
  v43 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1203, "button.show_render_chunks");
  v1200 = operator new(1u);
  v1202 = sub_E258BC;
  v1201 = (void (*)(void))sub_E258C2;
  InputHandler::registerButtonDownHandler(v43, (int **)&v1203, (int)&v1200, 0);
  if ( v1201 )
    v1201();
  v44 = (void *)(v1203 - 12);
  if ( (int *)(v1203 - 12) != &dword_28898C0 )
    v441 = (unsigned int *)(v1203 - 4);
        v442 = __ldrex(v441);
      while ( __strex(v442 - 1, v441) );
      v442 = (*v441)--;
    if ( v442 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v44);
  v45 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1199, "button.show_debug_textures");
  v1196 = operator new(1u);
  v1198 = sub_E258F0;
  v1197 = (void (*)(void))sub_E258F6;
  InputHandler::registerButtonDownHandler(v45, (int **)&v1199, (int)&v1196, 0);
  if ( v1197 )
    v1197();
  v46 = (void *)(v1199 - 12);
  if ( (int *)(v1199 - 12) != &dword_28898C0 )
    v443 = (unsigned int *)(v1199 - 4);
        v444 = __ldrex(v443);
      while ( __strex(v444 - 1, v443) );
      v444 = (*v443)--;
    if ( v444 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v46);
  v47 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1195, "button.texel_aa");
  v1192 = operator new(1u);
  v1194 = sub_E25924;
  v1193 = (void (*)(void))sub_E2592A;
  InputHandler::registerButtonDownHandler(v47, (int **)&v1195, (int)&v1192, 0);
  if ( v1193 )
    v1193();
  v48 = (void *)(v1195 - 12);
  if ( (int *)(v1195 - 12) != &dword_28898C0 )
    v445 = (unsigned int *)(v1195 - 4);
        v446 = __ldrex(v445);
      while ( __strex(v446 - 1, v445) );
      v446 = (*v445)--;
    if ( v446 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v48);
  v49 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1191, "button.decrement_max_culling_steps");
  v1188 = operator new(1u);
  v1190 = sub_E25958;
  v1189 = (void (*)(void))sub_E2595E;
  InputHandler::registerButtonDownHandler(v49, (int **)&v1191, (int)&v1188, 0);
  if ( v1189 )
    v1189();
  v50 = (void *)(v1191 - 12);
  if ( (int *)(v1191 - 12) != &dword_28898C0 )
    v447 = (unsigned int *)(v1191 - 4);
        v448 = __ldrex(v447);
      while ( __strex(v448 - 1, v447) );
      v448 = (*v447)--;
    if ( v448 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v50);
  v51 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1187, "button.increment_max_culling_steps");
  v1184 = operator new(1u);
  v1186 = sub_E2598C;
  v1185 = (void (*)(void))sub_E25992;
  InputHandler::registerButtonDownHandler(v51, (int **)&v1187, (int)&v1184, 0);
  if ( v1185 )
    v1185();
  v52 = (void *)(v1187 - 12);
  if ( (int *)(v1187 - 12) != &dword_28898C0 )
    v449 = (unsigned int *)(v1187 - 4);
        v450 = __ldrex(v449);
      while ( __strex(v450 - 1, v449) );
      v450 = (*v449)--;
    if ( v450 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v52);
  v53 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1183, "button.next_avc_stat");
  v1180 = operator new(1u);
  v1182 = sub_E259C0;
  v1181 = (void (*)(void))sub_E259C6;
  InputHandler::registerButtonDownHandler(v53, (int **)&v1183, (int)&v1180, 0);
  if ( v1181 )
    v1181();
  v54 = (void *)(v1183 - 12);
  if ( (int *)(v1183 - 12) != &dword_28898C0 )
    v451 = (unsigned int *)(v1183 - 4);
        v452 = __ldrex(v451);
      while ( __strex(v452 - 1, v451) );
      v452 = (*v451)--;
    if ( v452 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v54);
  v55 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1179, "button.frame_timer_display");
  v1176 = operator new(1u);
  v1178 = sub_E259F4;
  v1177 = (void (*)(void))sub_E259FA;
  InputHandler::registerButtonDownHandler(v55, (int **)&v1179, (int)&v1176, 0);
  if ( v1177 )
    v1177();
  v56 = (void *)(v1179 - 12);
  if ( (int *)(v1179 - 12) != &dword_28898C0 )
    v453 = (unsigned int *)(v1179 - 4);
        v454 = __ldrex(v453);
      while ( __strex(v454 - 1, v453) );
      v454 = (*v453)--;
    if ( v454 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v56);
  v57 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1175, "button.fly_fast");
  v1172 = operator new(1u);
  v1174 = sub_E25A28;
  v1173 = (void (*)(void))sub_E25A2E;
  InputHandler::registerButtonDownHandler(v57, (int **)&v1175, (int)&v1172, 0);
  if ( v1173 )
    v1173();
  v58 = (void *)(v1175 - 12);
  if ( (int *)(v1175 - 12) != &dword_28898C0 )
    v455 = (unsigned int *)(v1175 - 4);
        v456 = __ldrex(v455);
      while ( __strex(v456 - 1, v455) );
      v456 = (*v455)--;
    if ( v456 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v58);
  v59 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1171, "button.mobeffects");
  v1168 = operator new(1u);
  v1170 = sub_E25A5C;
  v1169 = (void (*)(void))sub_E25A62;
  InputHandler::registerButtonDownHandler(v59, (int **)&v1171, (int)&v1168, 0);
  if ( v1169 )
    v1169();
  v60 = (void *)(v1171 - 12);
  if ( (int *)(v1171 - 12) != &dword_28898C0 )
    v457 = (unsigned int *)(v1171 - 4);
        v458 = __ldrex(v457);
      while ( __strex(v458 - 1, v457) );
      v458 = (*v457)--;
    if ( v458 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v60);
  v61 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1167, "button.player_mob_update");
  v1164 = operator new(1u);
  v1166 = sub_E25A90;
  v1165 = (void (*)(void))sub_E25A96;
  InputHandler::registerButtonDownHandler(v61, (int **)&v1167, (int)&v1164, 0);
  if ( v1165 )
    v1165();
  v62 = (void *)(v1167 - 12);
  if ( (int *)(v1167 - 12) != &dword_28898C0 )
    v459 = (unsigned int *)(v1167 - 4);
        v460 = __ldrex(v459);
      while ( __strex(v460 - 1, v459) );
      v460 = (*v459)--;
    if ( v460 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v62);
  v63 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1163, "button.low_memory_warning");
  v1160 = operator new(1u);
  v1162 = sub_E25AC4;
  v1161 = (void (*)(void))sub_E25ACA;
  InputHandler::registerButtonDownHandler(v63, (int **)&v1163, (int)&v1160, 0);
  if ( v1161 )
    v1161();
  v64 = (void *)(v1163 - 12);
  if ( (int *)(v1163 - 12) != &dword_28898C0 )
    v461 = (unsigned int *)(v1163 - 4);
        v462 = __ldrex(v461);
      while ( __strex(v462 - 1, v461) );
      v462 = (*v461)--;
    if ( v462 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v64);
  v65 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1159, "button.day_cycle_active");
  v1156 = operator new(1u);
  v1158 = sub_E25AF8;
  v1157 = (void (*)(void))sub_E25AFE;
  InputHandler::registerButtonDownHandler(v65, (int **)&v1159, (int)&v1156, 0);
  if ( v1157 )
    v1157();
  v66 = (void *)(v1159 - 12);
  if ( (int *)(v1159 - 12) != &dword_28898C0 )
    v463 = (unsigned int *)(v1159 - 4);
        v464 = __ldrex(v463);
      while ( __strex(v464 - 1, v463) );
      v464 = (*v463)--;
    if ( v464 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v66);
  v67 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1155, "button.suspend_resume");
  v1152 = operator new(1u);
  v1154 = sub_E25B2C;
  v1153 = (void (*)(void))sub_E25B32;
  InputHandler::registerButtonDownHandler(v67, (int **)&v1155, (int)&v1152, 0);
  if ( v1153 )
    v1153();
  v68 = (void *)(v1155 - 12);
  if ( (int *)(v1155 - 12) != &dword_28898C0 )
    v465 = (unsigned int *)(v1155 - 4);
        v466 = __ldrex(v465);
      while ( __strex(v466 - 1, v465) );
      v466 = (*v465)--;
    if ( v466 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v68);
  v69 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1151, "button.game_mode");
  v1148 = operator new(1u);
  v1150 = sub_E25B60;
  v1149 = (void (*)(void))sub_E25B66;
  InputHandler::registerButtonDownHandler(v69, (int **)&v1151, (int)&v1148, 0);
  if ( v1149 )
    v1149();
  v70 = (void *)(v1151 - 12);
  if ( (int *)(v1151 - 12) != &dword_28898C0 )
    v467 = (unsigned int *)(v1151 - 4);
        v468 = __ldrex(v467);
      while ( __strex(v468 - 1, v467) );
      v468 = (*v467)--;
    if ( v468 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v70);
  v71 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1147, "button.force_screens_type_pocket");
  v1144 = operator new(1u);
  v1146 = sub_E25B94;
  v1145 = (void (*)(void))sub_E25B9A;
  InputHandler::registerButtonDownHandler(v71, (int **)&v1147, (int)&v1144, 0);
  if ( v1145 )
    v1145();
  v72 = (void *)(v1147 - 12);
  if ( (int *)(v1147 - 12) != &dword_28898C0 )
    v469 = (unsigned int *)(v1147 - 4);
        v470 = __ldrex(v469);
      while ( __strex(v470 - 1, v469) );
      v470 = (*v469)--;
    if ( v470 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v72);
  v73 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1143, "button.force_gui_scaling");
  v1140 = operator new(1u);
  v1142 = sub_E25BC8;
  v1141 = (void (*)(void))sub_E25BCE;
  InputHandler::registerButtonDownHandler(v73, (int **)&v1143, (int)&v1140, 0);
  if ( v1141 )
    v1141();
  v74 = (void *)(v1143 - 12);
  if ( (int *)(v1143 - 12) != &dword_28898C0 )
    v471 = (unsigned int *)(v1143 - 4);
        v472 = __ldrex(v471);
      while ( __strex(v472 - 1, v471) );
      v472 = (*v471)--;
    if ( v472 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v74);
  v75 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1139, "button.new_ui_debug");
  v1136 = operator new(1u);
  v1138 = sub_E25BFC;
  v1137 = (void (*)(void))sub_E25C02;
  InputHandler::registerButtonDownHandler(v75, (int **)&v1139, (int)&v1136, 0);
  if ( v1137 )
    v1137();
  v76 = (void *)(v1139 - 12);
  if ( (int *)(v1139 - 12) != &dword_28898C0 )
    v473 = (unsigned int *)(v1139 - 4);
        v474 = __ldrex(v473);
      while ( __strex(v474 - 1, v473) );
      v474 = (*v473)--;
    if ( v474 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v76);
  v77 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1135, "button.pick_debug_object");
  v1132 = operator new(1u);
  v1134 = sub_E25C30;
  v1133 = (void (*)(void))sub_E25C36;
  InputHandler::registerButtonDownHandler(v77, (int **)&v1135, (int)&v1132, 0);
  if ( v1133 )
    v1133();
  v78 = (void *)(v1135 - 12);
  if ( (int *)(v1135 - 12) != &dword_28898C0 )
    v475 = (unsigned int *)(v1135 - 4);
        v476 = __ldrex(v475);
      while ( __strex(v476 - 1, v475) );
      v476 = (*v475)--;
    if ( v476 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v78);
  v79 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1131, "button.reload_ui_definitions");
  v1128 = operator new(1u);
  v1130 = sub_E25C64;
  v1129 = (void (*)(void))sub_E25C6A;
  InputHandler::registerButtonDownHandler(v79, (int **)&v1131, (int)&v1128, 0);
  if ( v1129 )
    v1129();
  v80 = (void *)(v1131 - 12);
  if ( (int *)(v1131 - 12) != &dword_28898C0 )
    v477 = (unsigned int *)(v1131 - 4);
        v478 = __ldrex(v477);
      while ( __strex(v478 - 1, v477) );
      v478 = (*v477)--;
    if ( v478 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v80);
  v81 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1127, "button.reload_resource_packs");
  v1124 = operator new(1u);
  v1126 = sub_E25C98;
  v1125 = (void (*)(void))sub_E25C9E;
  InputHandler::registerButtonDownHandler(v81, (int **)&v1127, (int)&v1124, 0);
  if ( v1125 )
    v1125();
  v82 = (void *)(v1127 - 12);
  if ( (int *)(v1127 - 12) != &dword_28898C0 )
    v479 = (unsigned int *)(v1127 - 4);
        v480 = __ldrex(v479);
      while ( __strex(v480 - 1, v479) );
      v480 = (*v479)--;
    if ( v480 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v82);
  v83 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1123, "button.take_screenshot");
  v1120 = operator new(1u);
  v1122 = sub_E25CCC;
  v1121 = (void (*)(void))sub_E25E54;
  InputHandler::registerButtonDownHandler(v83, (int **)&v1123, (int)&v1120, 0);
  if ( v1121 )
    v1121();
  v84 = (void *)(v1123 - 12);
  if ( (int *)(v1123 - 12) != &dword_28898C0 )
    v481 = (unsigned int *)(v1123 - 4);
        v482 = __ldrex(v481);
      while ( __strex(v482 - 1, v481) );
      v482 = (*v481)--;
    if ( v482 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v84);
  v85 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1119, "button.time_step_forward");
  v1116 = operator new(1u);
  v1118 = sub_E25E82;
  v1117 = (void (*)(void))sub_E25E88;
  InputHandler::registerButtonDownHandler(v85, (int **)&v1119, (int)&v1116, 0);
  if ( v1117 )
    v1117();
  v86 = (void *)(v1119 - 12);
  if ( (int *)(v1119 - 12) != &dword_28898C0 )
    v483 = (unsigned int *)(v1119 - 4);
        v484 = __ldrex(v483);
      while ( __strex(v484 - 1, v483) );
      v484 = (*v483)--;
    if ( v484 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v86);
  v87 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1115, "button.drop_all_items");
  v1112 = operator new(1u);
  v1114 = sub_E25EB6;
  v1113 = (void (*)(void))sub_E25EBC;
  InputHandler::registerButtonDownHandler(v87, (int **)&v1115, (int)&v1112, 0);
  if ( v1113 )
    v1113();
  v88 = (void *)(v1115 - 12);
  if ( (int *)(v1115 - 12) != &dword_28898C0 )
    v485 = (unsigned int *)(v1115 - 4);
        v486 = __ldrex(v485);
      while ( __strex(v486 - 1, v485) );
      v486 = (*v485)--;
    if ( v486 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v88);
  v89 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1111, "button.render_debug");
  v1108 = operator new(1u);
  v1110 = sub_E25EEA;
  v1109 = (void (*)(void))sub_E25EF0;
  InputHandler::registerButtonDownHandler(v89, (int **)&v1111, (int)&v1108, 0);
  if ( v1109 )
    v1109();
  v90 = (void *)(v1111 - 12);
  if ( (int *)(v1111 - 12) != &dword_28898C0 )
    v487 = (unsigned int *)(v1111 - 4);
        v488 = __ldrex(v487);
      while ( __strex(v488 - 1, v487) );
      v488 = (*v487)--;
    if ( v488 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v90);
  v91 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1107, "button.destroy_or_attack");
  v1104 = operator new(1u);
  v1106 = sub_E25F1E;
  v1105 = (void (*)(void))sub_E25F24;
  InputHandler::registerButtonDownHandler(v91, (int **)&v1107, (int)&v1104, 0);
  if ( v1105 )
    v1105();
  v92 = (void *)(v1107 - 12);
  if ( (int *)(v1107 - 12) != &dword_28898C0 )
    v489 = (unsigned int *)(v1107 - 4);
        v490 = __ldrex(v489);
      while ( __strex(v490 - 1, v489) );
      v490 = (*v489)--;
    if ( v490 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v92);
  v93 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1103, "button.build_or_interact");
  v1100 = operator new(1u);
  v1102 = sub_E25F52;
  v1101 = (void (*)(void))sub_E25F58;
  InputHandler::registerButtonDownHandler(v93, (int **)&v1103, (int)&v1100, 0);
  if ( v1101 )
    v1101();
  v94 = (void *)(v1103 - 12);
  if ( (int *)(v1103 - 12) != &dword_28898C0 )
    v491 = (unsigned int *)(v1103 - 4);
        v492 = __ldrex(v491);
      while ( __strex(v492 - 1, v491) );
      v492 = (*v491)--;
    if ( v492 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v94);
  v95 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1099, "button.stick_cursor");
  v1096 = operator new(1u);
  v1098 = sub_E25F86;
  v1097 = (void (*)(void))sub_E25F8C;
  InputHandler::registerButtonDownHandler(v95, (int **)&v1099, (int)&v1096, 0);
  if ( v1097 )
    v1097();
  v96 = (void *)(v1099 - 12);
  if ( (int *)(v1099 - 12) != &dword_28898C0 )
    v493 = (unsigned int *)(v1099 - 4);
        v494 = __ldrex(v493);
      while ( __strex(v494 - 1, v493) );
      v494 = (*v493)--;
    if ( v494 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v96);
  v97 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1095, "button.stick_cursor");
  v1092 = operator new(1u);
  v1094 = sub_E25FBA;
  v1093 = (void (*)(void))sub_E25FC0;
  InputHandler::registerButtonUpHandler(v97, (int **)&v1095, (int)&v1092, 0);
  if ( v1093 )
    v1093();
  v98 = (void *)(v1095 - 12);
  if ( (int *)(v1095 - 12) != &dword_28898C0 )
    v495 = (unsigned int *)(v1095 - 4);
        v496 = __ldrex(v495);
      while ( __strex(v496 - 1, v495) );
      v496 = (*v495)--;
    if ( v496 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v98);
  v99 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1091, "button.turn_interact");
  v1088 = operator new(1u);
  v1090 = sub_E25FEE;
  v1089 = (void (*)(void))sub_E26000;
  InputHandler::registerButtonDownHandler(v99, (int **)&v1091, (int)&v1088, 0);
  if ( v1089 )
    v1089();
  v100 = (void *)(v1091 - 12);
  if ( (int *)(v1091 - 12) != &dword_28898C0 )
    v497 = (unsigned int *)(v1091 - 4);
        v498 = __ldrex(v497);
      while ( __strex(v498 - 1, v497) );
      v498 = (*v497)--;
    if ( v498 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v100);
  v101 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1087, "button.destroy_or_interact");
  v1084 = operator new(1u);
  v1086 = sub_E2602E;
  v1085 = (void (*)(void))sub_E26034;
  InputHandler::registerButtonDownHandler(v101, (int **)&v1087, (int)&v1084, 0);
  if ( v1085 )
    v1085();
  v102 = (void *)(v1087 - 12);
  if ( (int *)(v1087 - 12) != &dword_28898C0 )
    v499 = (unsigned int *)(v1087 - 4);
        v500 = __ldrex(v499);
      while ( __strex(v500 - 1, v499) );
      v500 = (*v499)--;
    if ( v500 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v102);
  v103 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1083, "button.build_or_attack");
  v1080 = operator new(1u);
  v1082 = sub_E26062;
  v1081 = (void (*)(void))sub_E26068;
  InputHandler::registerButtonDownHandler(v103, (int **)&v1083, (int)&v1080, 0);
  if ( v1081 )
    v1081();
  v104 = (void *)(v1083 - 12);
  if ( (int *)(v1083 - 12) != &dword_28898C0 )
    v501 = (unsigned int *)(v1083 - 4);
        v502 = __ldrex(v501);
      while ( __strex(v502 - 1, v501) );
      v502 = (*v501)--;
    if ( v502 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v104);
  v105 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1079, "button.interact");
  v1076 = operator new(1u);
  v1078 = sub_E26096;
  v1077 = (void (*)(void))sub_E2609C;
  InputHandler::registerButtonDownHandler(v105, (int **)&v1079, (int)&v1076, 0);
  if ( v1077 )
    v1077();
  v106 = (void *)(v1079 - 12);
  if ( (int *)(v1079 - 12) != &dword_28898C0 )
    v503 = (unsigned int *)(v1079 - 4);
        v504 = __ldrex(v503);
      while ( __strex(v504 - 1, v503) );
      v504 = (*v503)--;
    if ( v504 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v106);
  v107 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1075, "button.inventory_left");
  v1072 = operator new(1u);
  v1074 = sub_E260CA;
  v1073 = (void (*)(void))sub_E260D4;
  InputHandler::registerButtonDownHandler(v107, (int **)&v1075, (int)&v1072, 0);
  if ( v1073 )
    v1073();
  v108 = (void *)(v1075 - 12);
  if ( (int *)(v1075 - 12) != &dword_28898C0 )
    v505 = (unsigned int *)(v1075 - 4);
        v506 = __ldrex(v505);
      while ( __strex(v506 - 1, v505) );
      v506 = (*v505)--;
    if ( v506 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v108);
  v109 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1071, "button.inventory_right");
  v1068 = operator new(1u);
  v1070 = sub_E26102;
  v1069 = (void (*)(void))sub_E2610A;
  InputHandler::registerButtonDownHandler(v109, (int **)&v1071, (int)&v1068, 0);
  if ( v1069 )
    v1069();
  v110 = (void *)(v1071 - 12);
  if ( (int *)(v1071 - 12) != &dword_28898C0 )
    v507 = (unsigned int *)(v1071 - 4);
        v508 = __ldrex(v507);
      while ( __strex(v508 - 1, v507) );
      v508 = (*v507)--;
    if ( v508 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v110);
  v111 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1067, "button.simulate_touch");
  v1064 = operator new(1u);
  v1066 = sub_E26138;
  v1065 = (void (*)(void))sub_E2613E;
  InputHandler::registerButtonDownHandler(v111, (int **)&v1067, (int)&v1064, 0);
  if ( v1065 )
    v1065();
  v112 = (void *)(v1067 - 12);
  if ( (int *)(v1067 - 12) != &dword_28898C0 )
    v509 = (unsigned int *)(v1067 - 4);
        v510 = __ldrex(v509);
      while ( __strex(v510 - 1, v509) );
      v510 = (*v509)--;
    if ( v510 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v112);
  v113 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1063, "button.paddle_left");
  v1060 = operator new(1u);
  v1062 = sub_E2616C;
  v1061 = (void (*)(void))sub_E26174;
  InputHandler::registerButtonDownHandler(v113, (int **)&v1063, (int)&v1060, 0);
  if ( v1061 )
    v1061();
  v114 = (void *)(v1063 - 12);
  if ( (int *)(v1063 - 12) != &dword_28898C0 )
    v511 = (unsigned int *)(v1063 - 4);
        v512 = __ldrex(v511);
      while ( __strex(v512 - 1, v511) );
      v512 = (*v511)--;
    if ( v512 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v114);
  v115 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1059, "button.paddle_right");
  v1056 = operator new(1u);
  v1058 = sub_E261A2;
  v1057 = (void (*)(void))sub_E261AA;
  InputHandler::registerButtonDownHandler(v115, (int **)&v1059, (int)&v1056, 0);
  if ( v1057 )
    v1057();
  v116 = (void *)(v1059 - 12);
  if ( (int *)(v1059 - 12) != &dword_28898C0 )
    v513 = (unsigned int *)(v1059 - 4);
        v514 = __ldrex(v513);
      while ( __strex(v514 - 1, v513) );
      v514 = (*v513)--;
    if ( v514 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v116);
  v117 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1055, "button.dismount");
  v1052 = operator new(1u);
  v1054 = sub_E261D8;
  v1053 = (void (*)(void))sub_E261DE;
  InputHandler::registerButtonDownHandler(v117, (int **)&v1055, (int)&v1052, 0);
  if ( v1053 )
    v1053();
  v118 = (void *)(v1055 - 12);
  if ( (int *)(v1055 - 12) != &dword_28898C0 )
    v515 = (unsigned int *)(v1055 - 4);
        v516 = __ldrex(v515);
      while ( __strex(v516 - 1, v515) );
      v516 = (*v515)--;
    if ( v516 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v118);
  v119 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1051, "button.biome_display");
  v1048 = operator new(1u);
  v1050 = sub_E2620C;
  v1049 = (void (*)(void))sub_E26212;
  InputHandler::registerButtonDownHandler(v119, (int **)&v1051, (int)&v1048, 0);
  if ( v1049 )
    v1049();
  v120 = (void *)(v1051 - 12);
  if ( (int *)(v1051 - 12) != &dword_28898C0 )
    v517 = (unsigned int *)(v1051 - 4);
        v518 = __ldrex(v517);
      while ( __strex(v518 - 1, v517) );
      v518 = (*v517)--;
    if ( v518 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v120);
  v121 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1047, "button.decrease_render_distance");
  v1044 = operator new(1u);
  v1046 = sub_E26240;
  v1045 = (void (*)(void))sub_E26246;
  InputHandler::registerButtonDownHandler(v121, (int **)&v1047, (int)&v1044, 0);
  if ( v1045 )
    v1045();
  v122 = (void *)(v1047 - 12);
  if ( (int *)(v1047 - 12) != &dword_28898C0 )
    v519 = (unsigned int *)(v1047 - 4);
        v520 = __ldrex(v519);
      while ( __strex(v520 - 1, v519) );
      v520 = (*v519)--;
    if ( v520 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v122);
  v123 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1043, "button.increase_render_distance");
  v1040 = operator new(1u);
  v1042 = sub_E26274;
  v1041 = (void (*)(void))sub_E2627A;
  InputHandler::registerButtonDownHandler(v123, (int **)&v1043, (int)&v1040, 0);
  if ( v1041 )
    v1041();
  v124 = (void *)(v1043 - 12);
  if ( (int *)(v1043 - 12) != &dword_28898C0 )
    v521 = (unsigned int *)(v1043 - 4);
        v522 = __ldrex(v521);
      while ( __strex(v522 - 1, v521) );
      v522 = (*v521)--;
    if ( v522 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v124);
  v125 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1039, "button.hotbar_drop_all");
  v1036 = operator new(1u);
  v1038 = sub_E262A8;
  v1037 = (void (*)(void))sub_E262AE;
  InputHandler::registerButtonDownHandler(v125, (int **)&v1039, (int)&v1036, 0);
  if ( v1037 )
    v1037();
  v126 = (void *)(v1039 - 12);
  if ( (int *)(v1039 - 12) != &dword_28898C0 )
    v523 = (unsigned int *)(v1039 - 4);
        v524 = __ldrex(v523);
      while ( __strex(v524 - 1, v523) );
      v524 = (*v523)--;
    if ( v524 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v126);
  v127 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1035, "button.hide_jump_button");
  v128 = operator new(4u);
  *v128 = v1;
  v1032 = v128;
  v1034 = sub_E262DC;
  v1033 = (void (*)(void))sub_E262E2;
  InputHandler::registerButtonDownHandler(v127, (int **)&v1035, (int)&v1032, 0);
  if ( v1033 )
    v1033();
  v129 = (void *)(v1035 - 12);
  if ( (int *)(v1035 - 12) != &dword_28898C0 )
    v525 = (unsigned int *)(v1035 - 4);
        v526 = __ldrex(v525);
      while ( __strex(v526 - 1, v525) );
      v526 = (*v525)--;
    if ( v526 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v129);
  v130 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1031, "button.hide_sneak_button");
  v131 = operator new(4u);
  *v131 = v1;
  v1028 = v131;
  v1030 = sub_E26318;
  v1029 = (void (*)(void))sub_E2631E;
  InputHandler::registerButtonDownHandler(v130, (int **)&v1031, (int)&v1028, 0);
  if ( v1029 )
    v1029();
  v132 = (void *)(v1031 - 12);
  if ( (int *)(v1031 - 12) != &dword_28898C0 )
    v527 = (unsigned int *)(v1031 - 4);
        v528 = __ldrex(v527);
      while ( __strex(v528 - 1, v527) );
      v528 = (*v527)--;
    if ( v528 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v132);
  v133 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1027, "button.chat");
  v1024 = operator new(1u);
  v1026 = sub_E26354;
  v1025 = (void (*)(void))sub_E2635A;
  InputHandler::registerButtonDownHandler(v133, (int **)&v1027, (int)&v1024, 0);
  if ( v1025 )
    v1025();
  v134 = (void *)(v1027 - 12);
  if ( (int *)(v1027 - 12) != &dword_28898C0 )
    v529 = (unsigned int *)(v1027 - 4);
        v530 = __ldrex(v529);
      while ( __strex(v530 - 1, v529) );
      v530 = (*v529)--;
    if ( v530 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v134);
  v135 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1023, "button.toggle_perspective");
  v1020 = operator new(1u);
  v1022 = sub_E26388;
  v1021 = (void (*)(void))sub_E2638E;
  InputHandler::registerButtonUpHandler(v135, (int **)&v1023, (int)&v1020, 0);
  if ( v1021 )
    v1021();
  v136 = (void *)(v1023 - 12);
  if ( (int *)(v1023 - 12) != &dword_28898C0 )
    v531 = (unsigned int *)(v1023 - 4);
        v532 = __ldrex(v531);
      while ( __strex(v532 - 1, v531) );
      v532 = (*v531)--;
    if ( v532 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v136);
  v137 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1019, "button.interactwithtoast");
  v1016 = operator new(1u);
  v1018 = sub_E263BC;
  v1017 = (void (*)(void))sub_E263C2;
  InputHandler::registerButtonUpHandler(v137, (int **)&v1019, (int)&v1016, 0);
  if ( v1017 )
    v1017();
  v138 = (void *)(v1019 - 12);
  if ( (int *)(v1019 - 12) != &dword_28898C0 )
    v533 = (unsigned int *)(v1019 - 4);
        v534 = __ldrex(v533);
      while ( __strex(v534 - 1, v533) );
      v534 = (*v533)--;
    if ( v534 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v138);
  v139 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1015, "button.console");
  v1012 = operator new(1u);
  v1014 = sub_E263F0;
  v1013 = (void (*)(void))sub_E263F6;
  InputHandler::registerButtonDownHandler(v139, (int **)&v1015, (int)&v1012, 0);
  if ( v1013 )
    v1013();
  v140 = (void *)(v1015 - 12);
  if ( (int *)(v1015 - 12) != &dword_28898C0 )
    v535 = (unsigned int *)(v1015 - 4);
        v536 = __ldrex(v535);
      while ( __strex(v536 - 1, v535) );
      v536 = (*v535)--;
    if ( v536 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v140);
  v141 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1011, "button.pointer_pressed");
  v1008 = operator new(1u);
  v1010 = sub_E26424;
  v1009 = (void (*)(void))sub_E2642A;
  InputHandler::registerButtonUpHandler(v141, (int **)&v1011, (int)&v1008, 0);
  if ( v1009 )
    v1009();
  v142 = (void *)(v1011 - 12);
  if ( (int *)(v1011 - 12) != &dword_28898C0 )
    v537 = (unsigned int *)(v1011 - 4);
        v538 = __ldrex(v537);
      while ( __strex(v538 - 1, v537) );
      v538 = (*v537)--;
    if ( v538 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v142);
  v143 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1007, "button.next_avc_stat");
  v1004 = operator new(1u);
  v1006 = sub_E26458;
  v1005 = (void (*)(void))sub_E2645E;
  InputHandler::registerButtonUpHandler(v143, (int **)&v1007, (int)&v1004, 0);
  if ( v1005 )
    v1005();
  v144 = (void *)(v1007 - 12);
  if ( (int *)(v1007 - 12) != &dword_28898C0 )
    v539 = (unsigned int *)(v1007 - 4);
        v540 = __ldrex(v539);
      while ( __strex(v540 - 1, v539) );
      v540 = (*v539)--;
    if ( v540 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v144);
  v145 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v1003, "button.destroy_or_attack");
  v1000 = operator new(1u);
  v1002 = sub_E2648C;
  v1001 = (void (*)(void))sub_E26492;
  InputHandler::registerButtonUpHandler(v145, (int **)&v1003, (int)&v1000, 0);
  if ( v1001 )
    v1001();
  v146 = (void *)(v1003 - 12);
  if ( (int *)(v1003 - 12) != &dword_28898C0 )
    v541 = (unsigned int *)(v1003 - 4);
        v542 = __ldrex(v541);
      while ( __strex(v542 - 1, v541) );
      v542 = (*v541)--;
    if ( v542 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v146);
  v147 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v999, "button.build_or_interact");
  v996 = operator new(1u);
  v998 = sub_E264C0;
  v997 = (void (*)(void))sub_E264C6;
  InputHandler::registerButtonUpHandler(v147, (int **)&v999, (int)&v996, 0);
  if ( v997 )
    v997();
  v148 = (void *)(v999 - 12);
  if ( (int *)(v999 - 12) != &dword_28898C0 )
    v543 = (unsigned int *)(v999 - 4);
        v544 = __ldrex(v543);
      while ( __strex(v544 - 1, v543) );
      v544 = (*v543)--;
    if ( v544 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v148);
  v149 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v995, "button.turn_interact");
  v992 = operator new(1u);
  v994 = sub_E264F4;
  v993 = (void (*)(void))sub_E26506;
  InputHandler::registerButtonUpHandler(v149, (int **)&v995, (int)&v992, 0);
  if ( v993 )
    v993();
  v150 = (void *)(v995 - 12);
  if ( (int *)(v995 - 12) != &dword_28898C0 )
    v545 = (unsigned int *)(v995 - 4);
        v546 = __ldrex(v545);
      while ( __strex(v546 - 1, v545) );
      v546 = (*v545)--;
    if ( v546 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v150);
  v151 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v991, "button.destroy_or_interact");
  v988 = operator new(1u);
  v990 = sub_E26534;
  v989 = (void (*)(void))sub_E2653A;
  InputHandler::registerButtonUpHandler(v151, (int **)&v991, (int)&v988, 0);
  if ( v989 )
    v989();
  v152 = (void *)(v991 - 12);
  if ( (int *)(v991 - 12) != &dword_28898C0 )
    v547 = (unsigned int *)(v991 - 4);
        v548 = __ldrex(v547);
      while ( __strex(v548 - 1, v547) );
      v548 = (*v547)--;
    if ( v548 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v152);
  v153 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v987, "button.build_or_attack");
  v984 = operator new(1u);
  v986 = sub_E26568;
  v985 = (void (*)(void))sub_E2656E;
  InputHandler::registerButtonUpHandler(v153, (int **)&v987, (int)&v984, 0);
  if ( v985 )
    v985();
  v154 = (void *)(v987 - 12);
  if ( (int *)(v987 - 12) != &dword_28898C0 )
    v549 = (unsigned int *)(v987 - 4);
        v550 = __ldrex(v549);
      while ( __strex(v550 - 1, v549) );
      v550 = (*v549)--;
    if ( v550 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v154);
  v155 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v983, "button.interact");
  v980 = operator new(1u);
  v982 = sub_E2659C;
  v981 = (void (*)(void))sub_E265A2;
  InputHandler::registerButtonUpHandler(v155, (int **)&v983, (int)&v980, 0);
  if ( v981 )
    v981();
  v156 = (void *)(v983 - 12);
  if ( (int *)(v983 - 12) != &dword_28898C0 )
    v551 = (unsigned int *)(v983 - 4);
        v552 = __ldrex(v551);
      while ( __strex(v552 - 1, v551) );
      v552 = (*v551)--;
    if ( v552 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v156);
  v157 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v979, "button.creative_select");
  v976 = operator new(1u);
  v978 = sub_E265D0;
  v977 = (void (*)(void))sub_E265D6;
  InputHandler::registerButtonUpHandler(v157, (int **)&v979, (int)&v976, 0);
  if ( v977 )
    v977();
  v158 = (void *)(v979 - 12);
  if ( (int *)(v979 - 12) != &dword_28898C0 )
    v553 = (unsigned int *)(v979 - 4);
        v554 = __ldrex(v553);
      while ( __strex(v554 - 1, v553) );
      v554 = (*v553)--;
    if ( v554 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v158);
  v159 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v975, "button.paddle_left");
  v972 = operator new(1u);
  v974 = sub_E26604;
  v973 = (void (*)(void))sub_E2660C;
  InputHandler::registerButtonUpHandler(v159, (int **)&v975, (int)&v972, 0);
  if ( v973 )
    v973();
  v160 = (void *)(v975 - 12);
  if ( (int *)(v975 - 12) != &dword_28898C0 )
    v555 = (unsigned int *)(v975 - 4);
        v556 = __ldrex(v555);
      while ( __strex(v556 - 1, v555) );
      v556 = (*v555)--;
    if ( v556 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v160);
  v161 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v971, "button.creative_select_with_data");
  v968 = operator new(1u);
  v970 = sub_E2663A;
  v969 = (void (*)(void))sub_E26640;
  InputHandler::registerButtonUpHandler(v161, (int **)&v971, (int)&v968, 0);
  if ( v969 )
    v969();
  v162 = (void *)(v971 - 12);
  if ( (int *)(v971 - 12) != &dword_28898C0 )
    v557 = (unsigned int *)(v971 - 4);
        v558 = __ldrex(v557);
      while ( __strex(v558 - 1, v557) );
      v558 = (*v557)--;
    if ( v558 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v162);
  v163 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v967, "button.paddle_right");
  v964 = operator new(1u);
  v966 = sub_E2666E;
  v965 = (void (*)(void))sub_E26676;
  InputHandler::registerButtonUpHandler(v163, (int **)&v967, (int)&v964, 0);
  if ( v965 )
    v965();
  v164 = (void *)(v967 - 12);
  if ( (int *)(v967 - 12) != &dword_28898C0 )
    v559 = (unsigned int *)(v967 - 4);
        v560 = __ldrex(v559);
      while ( __strex(v560 - 1, v559) );
      v560 = (*v559)--;
    if ( v560 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v164);
  v165 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v963, "button.hide_jump_button");
  v166 = operator new(4u);
  *v166 = v1;
  v960 = v166;
  v962 = sub_E266A4;
  v961 = (void (*)(void))sub_E266AA;
  InputHandler::registerButtonUpHandler(v165, (int **)&v963, (int)&v960, 0);
  if ( v961 )
    v961();
  v167 = (void *)(v963 - 12);
  if ( (int *)(v963 - 12) != &dword_28898C0 )
    v561 = (unsigned int *)(v963 - 4);
        v562 = __ldrex(v561);
      while ( __strex(v562 - 1, v561) );
      v562 = (*v561)--;
    if ( v562 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v167);
  v168 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v959, "button.hide_sneak_button");
  v169 = operator new(4u);
  *v169 = v1;
  v956 = v169;
  v958 = sub_E266E0;
  v957 = (void (*)(void))sub_E266E6;
  InputHandler::registerButtonUpHandler(v168, (int **)&v959, (int)&v956, 0);
  if ( v957 )
    v957();
  v170 = (void *)(v959 - 12);
  if ( (int *)(v959 - 12) != &dword_28898C0 )
    v563 = (unsigned int *)(v959 - 4);
        v564 = __ldrex(v563);
      while ( __strex(v564 - 1, v563) );
      v564 = (*v563)--;
    if ( v564 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v170);
  v171 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v955, "button.switch_to_controller");
  v172 = operator new(4u);
  *v172 = v1;
  v952 = v172;
  v954 = sub_E2671C;
  v953 = (void (*)(void))sub_E26722;
  InputHandler::registerButtonUpHandler(v171, (int **)&v955, (int)&v952, 0);
  if ( v953 )
    v953();
  v173 = (void *)(v955 - 12);
  if ( (int *)(v955 - 12) != &dword_28898C0 )
    v565 = (unsigned int *)(v955 - 4);
        v566 = __ldrex(v565);
      while ( __strex(v566 - 1, v565) );
      v566 = (*v565)--;
    if ( v566 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v173);
  v174 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v951, "button.switch_to_vr_controller");
  v175 = operator new(4u);
  *v175 = v1;
  v948 = v175;
  v950 = sub_E26758;
  v949 = (void (*)(void))sub_E2675E;
  InputHandler::registerButtonUpHandler(v174, (int **)&v951, (int)&v948, 0);
  if ( v949 )
    v949();
  v176 = (void *)(v951 - 12);
  if ( (int *)(v951 - 12) != &dword_28898C0 )
    v567 = (unsigned int *)(v951 - 4);
        v568 = __ldrex(v567);
      while ( __strex(v568 - 1, v567) );
      v568 = (*v567)--;
    if ( v568 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v176);
  v177 = *((_DWORD *)v1 + 2);
  v945 = operator new(1u);
  v947 = sub_E26794;
  v946 = (void (*)(void))sub_E2679A;
  InputHandler::registerTextCharHandler(v177, (int)&v945);
  if ( v946 )
    v946();
  v178 = *((_DWORD *)v1 + 2);
  v942 = operator new(1u);
  v944 = sub_E267C8;
  v943 = (void (*)(void))sub_E267CE;
  InputHandler::registerCaretLocationHandler(v178, (int)&v942);
  if ( v943 )
    v943();
  v179 = *((_DWORD *)v1 + 2);
  v939 = operator new(1u);
  v941 = sub_E267FC;
  v940 = (void (*)(void))sub_E26830;
  InputHandler::registerPointerLocationHandler(v179, (int)&v939);
  if ( v940 )
    v940();
  v180 = *((_DWORD *)v1 + 2);
  v936 = operator new(1u);
  v938 = sub_E2685E;
  v937 = (void (*)(void))sub_E26876;
  InputHandler::registerDirectionHandler(v180, 0, (int)&v936);
  if ( v937 )
    v937();
  v181 = *((_DWORD *)v1 + 2);
  v933 = operator new(1u);
  v935 = sub_E268A4;
  v934 = (void (*)(void))sub_E268BC;
  InputHandler::registerDirectionHandler(v181, 1, (int)&v933);
  if ( v934 )
    v934();
  v182 = *((_DWORD *)v1 + 2);
  v930 = operator new(1u);
  v932 = sub_E268EA;
  v931 = (void (*)(void))sub_E26902;
  InputHandler::registerDirectionHandler(v182, 2, (int)&v930);
  if ( v931 )
    v931();
  v183 = *((_DWORD *)v1 + 2);
  v927 = operator new(1u);
  v929 = sub_E26930;
  v928 = (void (*)(void))sub_E26948;
  InputHandler::registerDirectionHandler(v183, 3, (int)&v927);
  if ( v928 )
    v928();
  v184 = *((_DWORD *)v1 + 2);
  v924 = operator new(1u);
  v926 = sub_E26976;
  v925 = (void (*)(void))sub_E2697C;
  InputHandler::registerInputModeHandler(v184, (int)&v924);
  if ( v925 )
    v925();
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v185 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v185 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v185 + 552))(&v923);
  sub_119C884((void **)&v922, "xbox_one");
  v186 = Util::startsWith(&v923, &v922);
  v187 = (void *)(v922 - 12);
  if ( (int *)(v922 - 12) != &dword_28898C0 )
    v569 = (unsigned int *)(v922 - 4);
        v570 = __ldrex(v569);
      while ( __strex(v570 - 1, v569) );
      v570 = (*v569)--;
    if ( v570 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v187);
    v188 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v188 = &ServiceLocator<AppPlatform>::mDefaultService;
  v189 = (*(int (**)(void))(**(_DWORD **)v188 + 436))();
  sub_119C884((void **)&v921, "button.menu_ok");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v921, v186 ^ 1, 0);
  v190 = (void *)(v921 - 12);
  if ( (int *)(v921 - 12) != &dword_28898C0 )
    v571 = (unsigned int *)(v921 - 4);
        v572 = __ldrex(v571);
      while ( __strex(v572 - 1, v571) );
      v572 = (*v571)--;
    if ( v572 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v190);
  sub_119C884((void **)&v920, "button.menu_select");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v920, 0, 0);
  v191 = (void *)(v920 - 12);
  if ( (int *)(v920 - 12) != &dword_28898C0 )
    v573 = (unsigned int *)(v920 - 4);
        v574 = __ldrex(v573);
      while ( __strex(v574 - 1, v573) );
      v574 = (*v573)--;
    if ( v574 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v191);
  sub_119C884((void **)&v919, "button.menu_secondary_select");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v919, 0, 0);
  v192 = (void *)(v919 - 12);
  if ( (int *)(v919 - 12) != &dword_28898C0 )
    v575 = (unsigned int *)(v919 - 4);
        v576 = __ldrex(v575);
      while ( __strex(v576 - 1, v575) );
      v576 = (*v575)--;
    if ( v576 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v192);
  sub_119C884((void **)&v918, "button.menu_auto_place");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v918, 0, 0);
  v193 = (void *)(v918 - 12);
  if ( (int *)(v918 - 12) != &dword_28898C0 )
    v577 = (unsigned int *)(v918 - 4);
        v578 = __ldrex(v577);
      while ( __strex(v578 - 1, v577) );
      v578 = (*v577)--;
    if ( v578 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v193);
  sub_119C884((void **)&v917, "button.menu_cancel");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v917, 0, 0);
  v194 = (void *)(v917 - 12);
  if ( (int *)(v917 - 12) != &dword_28898C0 )
    v579 = (unsigned int *)(v917 - 4);
        v580 = __ldrex(v579);
      while ( __strex(v580 - 1, v579) );
      v580 = (*v579)--;
    if ( v580 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v194);
  sub_119C884((void **)&v916, "button.menu_inventory_cancel");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v916, 1, 0);
  v195 = (void *)(v916 - 12);
  if ( (int *)(v916 - 12) != &dword_28898C0 )
    v581 = (unsigned int *)(v916 - 4);
        v582 = __ldrex(v581);
      while ( __strex(v582 - 1, v581) );
      v582 = (*v581)--;
    if ( v582 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v195);
  sub_119C884((void **)&v915, "button.menu_inventory_drop");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v915, 1, 0);
  v196 = (void *)(v915 - 12);
  if ( (int *)(v915 - 12) != &dword_28898C0 )
    v583 = (unsigned int *)(v915 - 4);
        v584 = __ldrex(v583);
      while ( __strex(v584 - 1, v583) );
      v584 = (*v583)--;
    if ( v584 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v196);
  sub_119C884((void **)&v914, "button.menu_inventory_drop_all");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v914, 1, 0);
  v197 = (void *)(v914 - 12);
  if ( (int *)(v914 - 12) != &dword_28898C0 )
    v585 = (unsigned int *)(v914 - 4);
        v586 = __ldrex(v585);
      while ( __strex(v586 - 1, v585) );
      v586 = (*v585)--;
    if ( v586 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v197);
  sub_119C884((void **)&v913, "button.menu_up");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v913, 1, 1);
  v198 = (void *)(v913 - 12);
  if ( (int *)(v913 - 12) != &dword_28898C0 )
    v587 = (unsigned int *)(v913 - 4);
        v588 = __ldrex(v587);
      while ( __strex(v588 - 1, v587) );
      v588 = (*v587)--;
    if ( v588 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v198);
  sub_119C884((void **)&v912, "button.menu_down");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v912, 1, 1);
  v199 = (void *)(v912 - 12);
  if ( (int *)(v912 - 12) != &dword_28898C0 )
    v589 = (unsigned int *)(v912 - 4);
        v590 = __ldrex(v589);
      while ( __strex(v590 - 1, v589) );
      v590 = (*v589)--;
    if ( v590 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v199);
  sub_119C884((void **)&v911, "button.menu_left");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v911, 1, 1);
  v200 = (void *)(v911 - 12);
  if ( (int *)(v911 - 12) != &dword_28898C0 )
    v591 = (unsigned int *)(v911 - 4);
        v592 = __ldrex(v591);
      while ( __strex(v592 - 1, v591) );
      v592 = (*v591)--;
    if ( v592 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v200);
  sub_119C884((void **)&v910, "button.menu_right");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v910, 1, 1);
  v201 = (void *)(v910 - 12);
  if ( (int *)(v910 - 12) != &dword_28898C0 )
    v593 = (unsigned int *)(v910 - 4);
        v594 = __ldrex(v593);
      while ( __strex(v594 - 1, v593) );
      v594 = (*v593)--;
    if ( v594 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v201);
  sub_119C884((void **)&v909, "button.menu_tab_left");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v909, 1, 0);
  v202 = (void *)(v909 - 12);
  if ( (int *)(v909 - 12) != &dword_28898C0 )
    v595 = (unsigned int *)(v909 - 4);
        v596 = __ldrex(v595);
      while ( __strex(v596 - 1, v595) );
      v596 = (*v595)--;
    if ( v596 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v202);
  sub_119C884((void **)&v908, "button.menu_tab_right");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v908, 1, 0);
  v203 = (void *)(v908 - 12);
  if ( (int *)(v908 - 12) != &dword_28898C0 )
    v597 = (unsigned int *)(v908 - 4);
        v598 = __ldrex(v597);
      while ( __strex(v598 - 1, v597) );
      v598 = (*v597)--;
    if ( v598 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v203);
  sub_119C884((void **)&v907, "button.menu_alternate_tab_left");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v907, 1, 0);
  v204 = (void *)(v907 - 12);
  if ( (int *)(v907 - 12) != &dword_28898C0 )
    v599 = (unsigned int *)(v907 - 4);
        v600 = __ldrex(v599);
      while ( __strex(v600 - 1, v599) );
      v600 = (*v599)--;
    if ( v600 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v204);
  sub_119C884((void **)&v906, "button.menu_alternate_tab_right");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v906, 1, 0);
  v205 = (void *)(v906 - 12);
  if ( (int *)(v906 - 12) != &dword_28898C0 )
    v601 = (unsigned int *)(v906 - 4);
        v602 = __ldrex(v601);
      while ( __strex(v602 - 1, v601) );
      v602 = (*v601)--;
    if ( v602 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v205);
  sub_119C884((void **)&v905, "button.menu_clear");
  if ( v189 )
    LOBYTE(v189) = 1;
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v905, v189, 0);
  v206 = (void *)(v905 - 12);
  if ( (int *)(v905 - 12) != &dword_28898C0 )
    v603 = (unsigned int *)(v905 - 4);
        v604 = __ldrex(v603);
      while ( __strex(v604 - 1, v603) );
      v604 = (*v603)--;
    if ( v604 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v206);
  sub_119C884((void **)&v904, "button.controller_select");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v904, 1, 0);
  v207 = (void *)(v904 - 12);
  if ( (int *)(v904 - 12) != &dword_28898C0 )
    v605 = (unsigned int *)(v904 - 4);
        v606 = __ldrex(v605);
      while ( __strex(v606 - 1, v605) );
      v606 = (*v605)--;
    if ( v606 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v207);
  sub_119C884((void **)&v903, "button.controller_secondary_select");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v903, 1, 0);
  v208 = (void *)(v903 - 12);
  if ( (int *)(v903 - 12) != &dword_28898C0 )
    v607 = (unsigned int *)(v903 - 4);
        v608 = __ldrex(v607);
      while ( __strex(v608 - 1, v607) );
      v608 = (*v607)--;
    if ( v608 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v208);
  sub_119C884((void **)&v902, "button.controller_secondary_select_left");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v902, 1, 0);
  v209 = (void *)(v902 - 12);
  if ( (int *)(v902 - 12) != &dword_28898C0 )
    v609 = (unsigned int *)(v902 - 4);
        v610 = __ldrex(v609);
      while ( __strex(v610 - 1, v609) );
      v610 = (*v609)--;
    if ( v610 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v209);
  sub_119C884((void **)&v901, "button.controller_secondary_select_right");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v901, 1, 0);
  v210 = (void *)(v901 - 12);
  if ( (int *)(v901 - 12) != &dword_28898C0 )
    v611 = (unsigned int *)(v901 - 4);
        v612 = __ldrex(v611);
      while ( __strex(v612 - 1, v611) );
      v612 = (*v611)--;
    if ( v612 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v210);
  sub_119C884((void **)&v900, "button.controller_textedit_up");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v900, 0, 0);
  v211 = (void *)(v900 - 12);
  if ( (int *)(v900 - 12) != &dword_28898C0 )
    v613 = (unsigned int *)(v900 - 4);
        v614 = __ldrex(v613);
      while ( __strex(v614 - 1, v613) );
      v614 = (*v613)--;
    if ( v614 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v211);
  sub_119C884((void **)&v899, "button.controller_textedit_down");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v899, 0, 0);
  v212 = (void *)(v899 - 12);
  if ( (int *)(v899 - 12) != &dword_28898C0 )
    v615 = (unsigned int *)(v899 - 4);
        v616 = __ldrex(v615);
      while ( __strex(v616 - 1, v615) );
      v616 = (*v615)--;
    if ( v616 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v212);
  sub_119C884((void **)&v898, "button.controller_autocomplete");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v898, 0, 0);
  v213 = (void *)(v898 - 12);
  if ( (int *)(v898 - 12) != &dword_28898C0 )
    v617 = (unsigned int *)(v898 - 4);
        v618 = __ldrex(v617);
      while ( __strex(v618 - 1, v617) );
      v618 = (*v617)--;
    if ( v618 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v213);
  sub_119C884((void **)&v897, "button.controller_autocomplete_back");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v897, 0, 0);
  v214 = (void *)(v897 - 12);
  if ( (int *)(v897 - 12) != &dword_28898C0 )
    v619 = (unsigned int *)(v897 - 4);
        v620 = __ldrex(v619);
      while ( __strex(v620 - 1, v619) );
      v620 = (*v619)--;
    if ( v620 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v214);
  sub_119C884((void **)&v896, "button.chat");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v896, 1, 0);
  v215 = (void *)(v896 - 12);
  if ( (int *)(v896 - 12) != &dword_28898C0 )
    v621 = (unsigned int *)(v896 - 4);
        v622 = __ldrex(v621);
      while ( __strex(v622 - 1, v621) );
      v622 = (*v621)--;
    if ( v622 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v215);
  sub_119C884((void **)&v895, "button.console");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v895, 1, 0);
  v216 = (void *)(v895 - 12);
  if ( (int *)(v895 - 12) != &dword_28898C0 )
    v623 = (unsigned int *)(v895 - 4);
        v624 = __ldrex(v623);
      while ( __strex(v624 - 1, v623) );
      v624 = (*v623)--;
    if ( v624 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v216);
  sub_119C884((void **)&v894, "button.open_dev_console");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v894, 1, 0);
  v217 = (void *)(v894 - 12);
  if ( (int *)(v894 - 12) != &dword_28898C0 )
    v625 = (unsigned int *)(v894 - 4);
        v626 = __ldrex(v625);
      while ( __strex(v626 - 1, v625) );
      v626 = (*v625)--;
    if ( v626 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v217);
  sub_119C884((void **)&v893, "button.slot1");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v893, 1, 0);
  v218 = (void *)(v893 - 12);
  if ( (int *)(v893 - 12) != &dword_28898C0 )
    v627 = (unsigned int *)(v893 - 4);
        v628 = __ldrex(v627);
      while ( __strex(v628 - 1, v627) );
      v628 = (*v627)--;
    if ( v628 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v218);
  sub_119C884((void **)&v892, "button.slot2");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v892, 1, 0);
  v219 = (void *)(v892 - 12);
  if ( (int *)(v892 - 12) != &dword_28898C0 )
    v629 = (unsigned int *)(v892 - 4);
        v630 = __ldrex(v629);
      while ( __strex(v630 - 1, v629) );
      v630 = (*v629)--;
    if ( v630 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v219);
  sub_119C884((void **)&v891, "button.slot3");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v891, 1, 0);
  v220 = (void *)(v891 - 12);
  if ( (int *)(v891 - 12) != &dword_28898C0 )
    v631 = (unsigned int *)(v891 - 4);
        v632 = __ldrex(v631);
      while ( __strex(v632 - 1, v631) );
      v632 = (*v631)--;
    if ( v632 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v220);
  sub_119C884((void **)&v890, "button.slot4");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v890, 1, 0);
  v221 = (void *)(v890 - 12);
  if ( (int *)(v890 - 12) != &dword_28898C0 )
    v633 = (unsigned int *)(v890 - 4);
        v634 = __ldrex(v633);
      while ( __strex(v634 - 1, v633) );
      v634 = (*v633)--;
    if ( v634 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v221);
  sub_119C884((void **)&v889, "button.slot5");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v889, 1, 0);
  v222 = (void *)(v889 - 12);
  if ( (int *)(v889 - 12) != &dword_28898C0 )
    v635 = (unsigned int *)(v889 - 4);
        v636 = __ldrex(v635);
      while ( __strex(v636 - 1, v635) );
      v636 = (*v635)--;
    if ( v636 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v222);
  sub_119C884((void **)&v888, "button.slot6");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v888, 1, 0);
  v223 = (void *)(v888 - 12);
  if ( (int *)(v888 - 12) != &dword_28898C0 )
    v637 = (unsigned int *)(v888 - 4);
        v638 = __ldrex(v637);
      while ( __strex(v638 - 1, v637) );
      v638 = (*v637)--;
    if ( v638 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v223);
  sub_119C884((void **)&v887, "button.slot7");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v887, 1, 0);
  v224 = (void *)(v887 - 12);
  if ( (int *)(v887 - 12) != &dword_28898C0 )
    v639 = (unsigned int *)(v887 - 4);
        v640 = __ldrex(v639);
      while ( __strex(v640 - 1, v639) );
      v640 = (*v639)--;
    if ( v640 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v224);
  sub_119C884((void **)&v886, "button.slot8");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v886, 1, 0);
  v225 = (void *)(v886 - 12);
  if ( (int *)(v886 - 12) != &dword_28898C0 )
    v641 = (unsigned int *)(v886 - 4);
        v642 = __ldrex(v641);
      while ( __strex(v642 - 1, v641) );
      v642 = (*v641)--;
    if ( v642 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v225);
  sub_119C884((void **)&v885, "button.slot9");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v885, 1, 0);
  v226 = (void *)(v885 - 12);
  if ( (int *)(v885 - 12) != &dword_28898C0 )
    v643 = (unsigned int *)(v885 - 4);
        v644 = __ldrex(v643);
      while ( __strex(v644 - 1, v643) );
      v644 = (*v643)--;
    if ( v644 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v226);
  sub_119C884((void **)&v884, "button.slot0");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v884, 1, 0);
  v227 = (void *)(v884 - 12);
  if ( (int *)(v884 - 12) != &dword_28898C0 )
    v645 = (unsigned int *)(v884 - 4);
        v646 = __ldrex(v645);
      while ( __strex(v646 - 1, v645) );
      v646 = (*v645)--;
    if ( v646 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v227);
  sub_119C884((void **)&v883, "button.inventory_right");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v883, 0, 0);
  v228 = (void *)(v883 - 12);
  if ( (int *)(v883 - 12) != &dword_28898C0 )
    v647 = (unsigned int *)(v883 - 4);
        v648 = __ldrex(v647);
      while ( __strex(v648 - 1, v647) );
      v648 = (*v647)--;
    if ( v648 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v228);
  sub_119C884((void **)&v882, "button.inventory_left");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v882, 0, 0);
  v229 = (void *)(v882 - 12);
  if ( (int *)(v882 - 12) != &dword_28898C0 )
    v649 = (unsigned int *)(v882 - 4);
        v650 = __ldrex(v649);
      while ( __strex(v650 - 1, v649) );
      v650 = (*v649)--;
    if ( v650 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v229);
  sub_119C884((void **)&v881, "button.hide_gui");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v881, 0, 0);
  v230 = (void *)(v881 - 12);
  if ( (int *)(v881 - 12) != &dword_28898C0 )
    v651 = (unsigned int *)(v881 - 4);
        v652 = __ldrex(v651);
      while ( __strex(v652 - 1, v651) );
      v652 = (*v651)--;
    if ( v652 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v230);
  sub_119C884((void **)&v880, "button.hide_tooltips");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v880, 0, 0);
  v231 = (void *)(v880 - 12);
  if ( (int *)(v880 - 12) != &dword_28898C0 )
    v653 = (unsigned int *)(v880 - 4);
        v654 = __ldrex(v653);
      while ( __strex(v654 - 1, v653) );
      v654 = (*v653)--;
    if ( v654 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v231);
  sub_119C884((void **)&v879, "button.hide_paperdoll");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v879, 0, 0);
  v232 = (void *)(v879 - 12);
  if ( (int *)(v879 - 12) != &dword_28898C0 )
    v655 = (unsigned int *)(v879 - 4);
        v656 = __ldrex(v655);
      while ( __strex(v656 - 1, v655) );
      v656 = (*v655)--;
    if ( v656 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v232);
  sub_119C884((void **)&v878, "button.menu_vr_realign");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v878, 1, 0);
  v233 = (void *)(v878 - 12);
  if ( (int *)(v878 - 12) != &dword_28898C0 )
    v657 = (unsigned int *)(v878 - 4);
        v658 = __ldrex(v657);
      while ( __strex(v658 - 1, v657) );
      v658 = (*v657)--;
    if ( v658 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v233);
  sub_119C884((void **)&v877, "button.menu_autocomplete");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v877, 0, 0);
  v234 = (void *)(v877 - 12);
  if ( (int *)(v877 - 12) != &dword_28898C0 )
    v659 = (unsigned int *)(v877 - 4);
        v660 = __ldrex(v659);
      while ( __strex(v660 - 1, v659) );
      v660 = (*v659)--;
    if ( v660 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v234);
  sub_119C884((void **)&v876, "button.menu_autocomplete_back");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v876, 0, 0);
  v235 = (void *)(v876 - 12);
  if ( (int *)(v876 - 12) != &dword_28898C0 )
    v661 = (unsigned int *)(v876 - 4);
        v662 = __ldrex(v661);
      while ( __strex(v662 - 1, v661) );
      v662 = (*v661)--;
    if ( v662 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v235);
  sub_119C884((void **)&v875, "button.menu_textedit_up");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v875, 0, 0);
  v236 = (void *)(v875 - 12);
  if ( (int *)(v875 - 12) != &dword_28898C0 )
    v663 = (unsigned int *)(v875 - 4);
        v664 = __ldrex(v663);
      while ( __strex(v664 - 1, v663) );
      v664 = (*v663)--;
    if ( v664 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v236);
  sub_119C884((void **)&v874, "button.menu_textedit_down");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v874, 0, 0);
  v237 = (void *)(v874 - 12);
  if ( (int *)(v874 - 12) != &dword_28898C0 )
    v665 = (unsigned int *)(v874 - 4);
        v666 = __ldrex(v665);
      while ( __strex(v666 - 1, v665) );
      v666 = (*v665)--;
    if ( v666 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v237);
  sub_119C884((void **)&v873, "button.mobeffects");
  MinecraftInputHandler::_registerMenuButton((int)v1, (int **)&v873, 1, 0);
  v238 = (void *)(v873 - 12);
  if ( (int *)(v873 - 12) != &dword_28898C0 )
    v667 = (unsigned int *)(v873 - 4);
        v668 = __ldrex(v667);
      while ( __strex(v668 - 1, v667) );
      v668 = (*v667)--;
    if ( v668 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v238);
  v239 = *((_DWORD *)v1 + 2);
  v240 = operator new(1u);
  LODWORD(v241) = sub_E269C8;
  v871 = v240;
  HIDWORD(v241) = sub_E269AA;
  v872 = v241;
  InputHandler::registerVectorHandler(v239, (int)&v871);
  if ( (_DWORD)v872 )
    ((void (*)(void))v872)();
  v242 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v870, "button.dictationEvent");
  v243 = operator new(1u);
  LODWORD(v244) = sub_E269FC;
  v868 = v243;
  HIDWORD(v244) = sub_E269F6;
  v869 = v244;
  InputHandler::registerButtonDownHandler(v242, (int **)&v870, (int)&v868, 0);
  if ( (_DWORD)v869 )
    ((void (*)(void))v869)();
  v245 = (void *)(v870 - 12);
  if ( (int *)(v870 - 12) != &dword_28898C0 )
    v669 = (unsigned int *)(v870 - 4);
        v670 = __ldrex(v669);
      while ( __strex(v670 - 1, v669) );
      v670 = (*v669)--;
    if ( v670 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v245);
  v246 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v867, "button.holo_zoom_in");
  v247 = operator new(1u);
  LODWORD(v248) = sub_E26A3E;
  v865 = v247;
  HIDWORD(v248) = sub_E26A2A;
  v866 = v248;
  InputHandler::registerButtonDownHandler(v246, (int **)&v867, (int)&v865, 0);
  if ( (_DWORD)v866 )
    ((void (*)(void))v866)();
  v249 = (void *)(v867 - 12);
  if ( (int *)(v867 - 12) != &dword_28898C0 )
    v671 = (unsigned int *)(v867 - 4);
        v672 = __ldrex(v671);
      while ( __strex(v672 - 1, v671) );
      v672 = (*v671)--;
    if ( v672 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v249);
  v250 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v864, "button.holo_zoom_out");
  v251 = operator new(1u);
  LODWORD(v252) = sub_E26A80;
  v862 = v251;
  HIDWORD(v252) = sub_E26A6C;
  v863 = v252;
  InputHandler::registerButtonDownHandler(v250, (int **)&v864, (int)&v862, 0);
  if ( (_DWORD)v863 )
    ((void (*)(void))v863)();
  v253 = (void *)(v864 - 12);
  if ( (int *)(v864 - 12) != &dword_28898C0 )
    v673 = (unsigned int *)(v864 - 4);
        v674 = __ldrex(v673);
      while ( __strex(v674 - 1, v673) );
      v674 = (*v673)--;
    if ( v674 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v253);
  v254 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v861, "button.holo_zoom_max");
  v255 = operator new(1u);
  LODWORD(v256) = sub_E26AC2;
  v859 = v255;
  HIDWORD(v256) = sub_E26AAE;
  v860 = v256;
  InputHandler::registerButtonDownHandler(v254, (int **)&v861, (int)&v859, 0);
  if ( (_DWORD)v860 )
    ((void (*)(void))v860)();
  v257 = (void *)(v861 - 12);
  if ( (int *)(v861 - 12) != &dword_28898C0 )
    v675 = (unsigned int *)(v861 - 4);
        v676 = __ldrex(v675);
      while ( __strex(v676 - 1, v675) );
      v676 = (*v675)--;
    if ( v676 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v257);
  v258 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v858, "button.holo_zoom_min");
  v259 = operator new(1u);
  LODWORD(v260) = sub_E26B04;
  v856 = v259;
  HIDWORD(v260) = sub_E26AF0;
  v857 = v260;
  InputHandler::registerButtonDownHandler(v258, (int **)&v858, (int)&v856, 0);
  if ( (_DWORD)v857 )
    ((void (*)(void))v857)();
  v261 = (void *)(v858 - 12);
  if ( (int *)(v858 - 12) != &dword_28898C0 )
    v677 = (unsigned int *)(v858 - 4);
        v678 = __ldrex(v677);
      while ( __strex(v678 - 1, v677) );
      v678 = (*v677)--;
    if ( v678 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v261);
  v262 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v855, "button.holo_lightningbolt");
  v263 = operator new(1u);
  LODWORD(v264) = sub_E26B46;
  v853 = v263;
  HIDWORD(v264) = sub_E26B32;
  v854 = v264;
  InputHandler::registerButtonDownHandler(v262, (int **)&v855, (int)&v853, 0);
  if ( (_DWORD)v854 )
    ((void (*)(void))v854)();
  v265 = (void *)(v855 - 12);
  if ( (int *)(v855 - 12) != &dword_28898C0 )
    v679 = (unsigned int *)(v855 - 4);
        v680 = __ldrex(v679);
      while ( __strex(v680 - 1, v679) );
      v680 = (*v679)--;
    if ( v680 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v265);
  v266 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v852, "button.holo_raiseworld");
  v267 = operator new(1u);
  LODWORD(v268) = sub_E26B88;
  v850 = v267;
  HIDWORD(v268) = sub_E26B74;
  v851 = v268;
  InputHandler::registerButtonDownHandler(v266, (int **)&v852, (int)&v850, 0);
  if ( (_DWORD)v851 )
    ((void (*)(void))v851)();
  v269 = (void *)(v852 - 12);
  if ( (int *)(v852 - 12) != &dword_28898C0 )
    v681 = (unsigned int *)(v852 - 4);
        v682 = __ldrex(v681);
      while ( __strex(v682 - 1, v681) );
      v682 = (*v681)--;
    if ( v682 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v269);
  v270 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v849, "button.holo_lowerworld");
  v271 = operator new(1u);
  LODWORD(v272) = sub_E26BCA;
  v847 = v271;
  HIDWORD(v272) = sub_E26BB6;
  v848 = v272;
  InputHandler::registerButtonDownHandler(v270, (int **)&v849, (int)&v847, 0);
  if ( (_DWORD)v848 )
    ((void (*)(void))v848)();
  v273 = (void *)(v849 - 12);
  if ( (int *)(v849 - 12) != &dword_28898C0 )
    v683 = (unsigned int *)(v849 - 4);
        v684 = __ldrex(v683);
      while ( __strex(v684 - 1, v683) );
      v684 = (*v683)--;
    if ( v684 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v273);
  v274 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v846, "button.holo_follow");
  v275 = operator new(1u);
  LODWORD(v276) = sub_E26C0C;
  v844 = v275;
  HIDWORD(v276) = sub_E26BF8;
  v845 = v276;
  InputHandler::registerButtonDownHandler(v274, (int **)&v846, (int)&v844, 0);
  if ( (_DWORD)v845 )
    ((void (*)(void))v845)();
  v277 = (void *)(v846 - 12);
  if ( (int *)(v846 - 12) != &dword_28898C0 )
    v685 = (unsigned int *)(v846 - 4);
        v686 = __ldrex(v685);
      while ( __strex(v686 - 1, v685) );
      v686 = (*v685)--;
    if ( v686 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v277);
  v278 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v843, "button.holo_stopfollow");
  v279 = operator new(1u);
  LODWORD(v280) = sub_E26C4E;
  v841 = v279;
  HIDWORD(v280) = sub_E26C3A;
  v842 = v280;
  InputHandler::registerButtonDownHandler(v278, (int **)&v843, (int)&v841, 0);
  if ( (_DWORD)v842 )
    ((void (*)(void))v842)();
  v281 = (void *)(v843 - 12);
  if ( (int *)(v843 - 12) != &dword_28898C0 )
    v687 = (unsigned int *)(v843 - 4);
        v688 = __ldrex(v687);
      while ( __strex(v688 - 1, v687) );
      v688 = (*v687)--;
    if ( v688 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v281);
  v282 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v840, "button.holo_follownext");
  v283 = operator new(1u);
  LODWORD(v284) = sub_E26C90;
  v838 = v283;
  HIDWORD(v284) = sub_E26C7C;
  v839 = v284;
  InputHandler::registerButtonDownHandler(v282, (int **)&v840, (int)&v838, 0);
  if ( (_DWORD)v839 )
    ((void (*)(void))v839)();
  v285 = (void *)(v840 - 12);
  if ( (int *)(v840 - 12) != &dword_28898C0 )
    v689 = (unsigned int *)(v840 - 4);
        v690 = __ldrex(v689);
      while ( __strex(v690 - 1, v689) );
      v690 = (*v689)--;
    if ( v690 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v285);
  v286 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v837, "button.advancetime_sunrise");
  v287 = operator new(1u);
  LODWORD(v288) = sub_E26CD2;
  v835 = v287;
  HIDWORD(v288) = sub_E26CBE;
  v836 = v288;
  InputHandler::registerButtonDownHandler(v286, (int **)&v837, (int)&v835, 0);
  if ( (_DWORD)v836 )
    ((void (*)(void))v836)();
  v289 = (void *)(v837 - 12);
  if ( (int *)(v837 - 12) != &dword_28898C0 )
    v691 = (unsigned int *)(v837 - 4);
        v692 = __ldrex(v691);
      while ( __strex(v692 - 1, v691) );
      v692 = (*v691)--;
    if ( v692 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v289);
  v290 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v834, "button.advancetime_morning");
  v291 = operator new(1u);
  LODWORD(v292) = sub_E26D14;
  v832 = v291;
  HIDWORD(v292) = sub_E26D00;
  v833 = v292;
  InputHandler::registerButtonDownHandler(v290, (int **)&v834, (int)&v832, 0);
  if ( (_DWORD)v833 )
    ((void (*)(void))v833)();
  v293 = (void *)(v834 - 12);
  if ( (int *)(v834 - 12) != &dword_28898C0 )
    v693 = (unsigned int *)(v834 - 4);
        v694 = __ldrex(v693);
      while ( __strex(v694 - 1, v693) );
      v694 = (*v693)--;
    if ( v694 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v293);
  v294 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v831, "button.advancetime_afternoon");
  v295 = operator new(1u);
  LODWORD(v296) = sub_E26D56;
  v829 = v295;
  HIDWORD(v296) = sub_E26D42;
  v830 = v296;
  InputHandler::registerButtonDownHandler(v294, (int **)&v831, (int)&v829, 0);
  if ( (_DWORD)v830 )
    ((void (*)(void))v830)();
  v297 = (void *)(v831 - 12);
  if ( (int *)(v831 - 12) != &dword_28898C0 )
    v695 = (unsigned int *)(v831 - 4);
        v696 = __ldrex(v695);
      while ( __strex(v696 - 1, v695) );
      v696 = (*v695)--;
    if ( v696 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v297);
  v298 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v828, "button.advancetime_evening");
  v299 = operator new(1u);
  LODWORD(v300) = sub_E26D98;
  v826 = v299;
  HIDWORD(v300) = sub_E26D84;
  v827 = v300;
  InputHandler::registerButtonDownHandler(v298, (int **)&v828, (int)&v826, 0);
  if ( (_DWORD)v827 )
    ((void (*)(void))v827)();
  v301 = (void *)(v828 - 12);
  if ( (int *)(v828 - 12) != &dword_28898C0 )
    v697 = (unsigned int *)(v828 - 4);
        v698 = __ldrex(v697);
      while ( __strex(v698 - 1, v697) );
      v698 = (*v697)--;
    if ( v698 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v301);
  v302 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v825, "button.advancetime_midnight");
  v303 = operator new(1u);
  LODWORD(v304) = sub_E26DDA;
  v823 = v303;
  HIDWORD(v304) = sub_E26DC6;
  v824 = v304;
  InputHandler::registerButtonDownHandler(v302, (int **)&v825, (int)&v823, 0);
  if ( (_DWORD)v824 )
    ((void (*)(void))v824)();
  v305 = (void *)(v825 - 12);
  if ( (int *)(v825 - 12) != &dword_28898C0 )
    v699 = (unsigned int *)(v825 - 4);
        v700 = __ldrex(v699);
      while ( __strex(v700 - 1, v699) );
      v700 = (*v699)--;
    if ( v700 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v305);
  v306 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v822, "button.holo_placescreen");
  v307 = operator new(1u);
  LODWORD(v308) = sub_E26E1C;
  v820 = v307;
  HIDWORD(v308) = sub_E26E08;
  v821 = v308;
  InputHandler::registerButtonDownHandler(v306, (int **)&v822, (int)&v820, 0);
  if ( (_DWORD)v821 )
    ((void (*)(void))v821)();
  v309 = (void *)(v822 - 12);
  if ( (int *)(v822 - 12) != &dword_28898C0 )
    v701 = (unsigned int *)(v822 - 4);
        v702 = __ldrex(v701);
      while ( __strex(v702 - 1, v701) );
      v702 = (*v701)--;
    if ( v702 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v309);
  v310 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v819, "button.holo_placeviewer");
  v311 = operator new(1u);
  LODWORD(v312) = sub_E26E5E;
  v817 = v311;
  HIDWORD(v312) = sub_E26E4A;
  v818 = v312;
  InputHandler::registerButtonDownHandler(v310, (int **)&v819, (int)&v817, 0);
  if ( (_DWORD)v818 )
    ((void (*)(void))v818)();
  v313 = (void *)(v819 - 12);
  if ( (int *)(v819 - 12) != &dword_28898C0 )
    v703 = (unsigned int *)(v819 - 4);
        v704 = __ldrex(v703);
      while ( __strex(v704 - 1, v703) );
      v704 = (*v703)--;
    if ( v704 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v313);
  v314 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v816, "button.holo_goback");
  v315 = operator new(1u);
  LODWORD(v316) = sub_E26EA0;
  v814 = v315;
  HIDWORD(v316) = sub_E26E8C;
  v815 = v316;
  InputHandler::registerButtonDownHandler(v314, (int **)&v816, (int)&v814, 0);
  if ( (_DWORD)v815 )
    ((void (*)(void))v815)();
  v317 = (void *)(v816 - 12);
  if ( (int *)(v816 - 12) != &dword_28898C0 )
    v705 = (unsigned int *)(v816 - 4);
        v706 = __ldrex(v705);
      while ( __strex(v706 - 1, v705) );
      v706 = (*v705)--;
    if ( v706 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v317);
  v318 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v813, "button.holo_screenmode");
  v319 = operator new(1u);
  LODWORD(v320) = sub_E26EE2;
  v811 = v319;
  HIDWORD(v320) = sub_E26ECE;
  v812 = v320;
  InputHandler::registerButtonDownHandler(v318, (int **)&v813, (int)&v811, 0);
  if ( (_DWORD)v812 )
    ((void (*)(void))v812)();
  v321 = (void *)(v813 - 12);
  if ( (int *)(v813 - 12) != &dword_28898C0 )
    v707 = (unsigned int *)(v813 - 4);
        v708 = __ldrex(v707);
      while ( __strex(v708 - 1, v707) );
      v708 = (*v707)--;
    if ( v708 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v321);
  v322 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v810, "button.holo_realitymode");
  v323 = operator new(1u);
  LODWORD(v324) = sub_E26F24;
  v808 = v323;
  HIDWORD(v324) = sub_E26F10;
  v809 = v324;
  InputHandler::registerButtonDownHandler(v322, (int **)&v810, (int)&v808, 0);
  if ( (_DWORD)v809 )
    ((void (*)(void))v809)();
  v325 = (void *)(v810 - 12);
  if ( (int *)(v810 - 12) != &dword_28898C0 )
    v709 = (unsigned int *)(v810 - 4);
        v710 = __ldrex(v709);
      while ( __strex(v710 - 1, v709) );
      v710 = (*v709)--;
    if ( v710 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v325);
  v326 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v807, "button.holo_realitymode_VR");
  v327 = operator new(1u);
  LODWORD(v328) = sub_E26F66;
  v805 = v327;
  HIDWORD(v328) = sub_E26F52;
  v806 = v328;
  InputHandler::registerButtonDownHandler(v326, (int **)&v807, (int)&v805, 0);
  if ( (_DWORD)v806 )
    ((void (*)(void))v806)();
  v329 = (void *)(v807 - 12);
  if ( (int *)(v807 - 12) != &dword_28898C0 )
    v711 = (unsigned int *)(v807 - 4);
        v712 = __ldrex(v711);
      while ( __strex(v712 - 1, v711) );
      v712 = (*v711)--;
    if ( v712 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v329);
  v330 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v804, "button.holo_realitymode_reality");
  v331 = operator new(1u);
  LODWORD(v332) = sub_E26FA8;
  v802 = v331;
  HIDWORD(v332) = sub_E26F94;
  v803 = v332;
  InputHandler::registerButtonDownHandler(v330, (int **)&v804, (int)&v802, 0);
  if ( (_DWORD)v803 )
    ((void (*)(void))v803)();
  v333 = (void *)(v804 - 12);
  if ( (int *)(v804 - 12) != &dword_28898C0 )
    v713 = (unsigned int *)(v804 - 4);
        v714 = __ldrex(v713);
      while ( __strex(v714 - 1, v713) );
      v714 = (*v713)--;
    if ( v714 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v333);
  v334 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v801, "button.holo_autoalign");
  v335 = operator new(1u);
  LODWORD(v336) = sub_E26FEA;
  v799 = v335;
  HIDWORD(v336) = sub_E26FD6;
  v800 = v336;
  InputHandler::registerButtonDownHandler(v334, (int **)&v801, (int)&v799, 0);
  if ( (_DWORD)v800 )
    ((void (*)(void))v800)();
  v337 = (void *)(v801 - 12);
  if ( (int *)(v801 - 12) != &dword_28898C0 )
    v715 = (unsigned int *)(v801 - 4);
        v716 = __ldrex(v715);
      while ( __strex(v716 - 1, v715) );
      v716 = (*v715)--;
    if ( v716 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v337);
  v338 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v798, "button.holo_pan");
  v339 = operator new(1u);
  LODWORD(v340) = sub_E2702C;
  v796 = v339;
  HIDWORD(v340) = sub_E27018;
  v797 = v340;
  InputHandler::registerButtonDownHandler(v338, (int **)&v798, (int)&v796, 0);
  if ( (_DWORD)v797 )
    ((void (*)(void))v797)();
  v341 = (void *)(v798 - 12);
  if ( (int *)(v798 - 12) != &dword_28898C0 )
    v717 = (unsigned int *)(v798 - 4);
        v718 = __ldrex(v717);
      while ( __strex(v718 - 1, v717) );
      v718 = (*v717)--;
    if ( v718 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v341);
  v342 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v795, "button.holo_rotate");
  v343 = operator new(1u);
  LODWORD(v344) = sub_E2706E;
  v793 = v343;
  HIDWORD(v344) = sub_E2705A;
  v794 = v344;
  InputHandler::registerButtonDownHandler(v342, (int **)&v795, (int)&v793, 0);
  if ( (_DWORD)v794 )
    ((void (*)(void))v794)();
  v345 = (void *)(v795 - 12);
  if ( (int *)(v795 - 12) != &dword_28898C0 )
    v719 = (unsigned int *)(v795 - 4);
        v720 = __ldrex(v719);
      while ( __strex(v720 - 1, v719) );
      v720 = (*v719)--;
    if ( v720 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v345);
  v346 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v792, "button.holo_tilt");
  v347 = operator new(1u);
  LODWORD(v348) = sub_E270B0;
  v790 = v347;
  HIDWORD(v348) = sub_E2709C;
  v791 = v348;
  InputHandler::registerButtonDownHandler(v346, (int **)&v792, (int)&v790, 0);
  if ( (_DWORD)v791 )
    ((void (*)(void))v791)();
  v349 = (void *)(v792 - 12);
  if ( (int *)(v792 - 12) != &dword_28898C0 )
    v721 = (unsigned int *)(v792 - 4);
        v722 = __ldrex(v721);
      while ( __strex(v722 - 1, v721) );
      v722 = (*v721)--;
    if ( v722 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v349);
  v350 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v789, "button.holo_pivotleft");
  v351 = operator new(1u);
  LODWORD(v352) = sub_E270F2;
  v787 = v351;
  HIDWORD(v352) = sub_E270DE;
  v788 = v352;
  InputHandler::registerButtonDownHandler(v350, (int **)&v789, (int)&v787, 0);
  if ( (_DWORD)v788 )
    ((void (*)(void))v788)();
  v353 = (void *)(v789 - 12);
  if ( (int *)(v789 - 12) != &dword_28898C0 )
    v723 = (unsigned int *)(v789 - 4);
        v724 = __ldrex(v723);
      while ( __strex(v724 - 1, v723) );
      v724 = (*v723)--;
    if ( v724 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v353);
  v354 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v786, "button.holo_pivotright");
  v355 = operator new(1u);
  LODWORD(v356) = sub_E27134;
  v784 = v355;
  HIDWORD(v356) = sub_E27120;
  v785 = v356;
  InputHandler::registerButtonDownHandler(v354, (int **)&v786, (int)&v784, 0);
  if ( (_DWORD)v785 )
    ((void (*)(void))v785)();
  v357 = (void *)(v786 - 12);
  if ( (int *)(v786 - 12) != &dword_28898C0 )
    v725 = (unsigned int *)(v786 - 4);
        v726 = __ldrex(v725);
      while ( __strex(v726 - 1, v725) );
      v726 = (*v725)--;
    if ( v726 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v357);
  v358 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v783, "button.holo_zoom_mode");
  v359 = operator new(1u);
  LODWORD(v360) = sub_E27176;
  v781 = v359;
  HIDWORD(v360) = sub_E27162;
  v782 = v360;
  InputHandler::registerButtonDownHandler(v358, (int **)&v783, (int)&v781, 0);
  if ( (_DWORD)v782 )
    ((void (*)(void))v782)();
  v361 = (void *)(v783 - 12);
  if ( (int *)(v783 - 12) != &dword_28898C0 )
    v727 = (unsigned int *)(v783 - 4);
        v728 = __ldrex(v727);
      while ( __strex(v728 - 1, v727) );
      v728 = (*v727)--;
    if ( v728 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v361);
  v362 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v780, "button.holo_screen_2d");
  v363 = operator new(1u);
  LODWORD(v364) = sub_E271B8;
  v778 = v363;
  HIDWORD(v364) = sub_E271A4;
  v779 = v364;
  InputHandler::registerButtonDownHandler(v362, (int **)&v780, (int)&v778, 0);
  if ( (_DWORD)v779 )
    ((void (*)(void))v779)();
  v365 = (void *)(v780 - 12);
  if ( (int *)(v780 - 12) != &dword_28898C0 )
    v729 = (unsigned int *)(v780 - 4);
        v730 = __ldrex(v729);
      while ( __strex(v730 - 1, v729) );
      v730 = (*v729)--;
    if ( v730 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v365);
  v366 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v777, "button.holo_screen_3d");
  v367 = operator new(1u);
  LODWORD(v368) = sub_E271FA;
  v775 = v367;
  HIDWORD(v368) = sub_E271E6;
  v776 = v368;
  InputHandler::registerButtonDownHandler(v366, (int **)&v777, (int)&v775, 0);
  if ( (_DWORD)v776 )
    ((void (*)(void))v776)();
  v369 = (void *)(v777 - 12);
  if ( (int *)(v777 - 12) != &dword_28898C0 )
    v731 = (unsigned int *)(v777 - 4);
        v732 = __ldrex(v731);
      while ( __strex(v732 - 1, v731) );
      v732 = (*v731)--;
    if ( v732 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v369);
  v370 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v774, "button.holo_small_screen");
  v371 = operator new(1u);
  LODWORD(v372) = sub_E2723C;
  v772 = v371;
  HIDWORD(v372) = sub_E27228;
  v773 = v372;
  InputHandler::registerButtonDownHandler(v370, (int **)&v774, (int)&v772, 0);
  if ( (_DWORD)v773 )
    ((void (*)(void))v773)();
  v373 = (void *)(v774 - 12);
  if ( (int *)(v774 - 12) != &dword_28898C0 )
    v733 = (unsigned int *)(v774 - 4);
        v734 = __ldrex(v733);
      while ( __strex(v734 - 1, v733) );
      v734 = (*v733)--;
    if ( v734 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v373);
  v374 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v771, "button.holo_medium_screen");
  v375 = operator new(1u);
  LODWORD(v376) = sub_E2727E;
  v769 = v375;
  HIDWORD(v376) = sub_E2726A;
  v770 = v376;
  InputHandler::registerButtonDownHandler(v374, (int **)&v771, (int)&v769, 0);
  if ( (_DWORD)v770 )
    ((void (*)(void))v770)();
  v377 = (void *)(v771 - 12);
  if ( (int *)(v771 - 12) != &dword_28898C0 )
    v735 = (unsigned int *)(v771 - 4);
        v736 = __ldrex(v735);
      while ( __strex(v736 - 1, v735) );
      v736 = (*v735)--;
    if ( v736 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v377);
  v378 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v768, "button.holo_large_screen");
  v379 = operator new(1u);
  LODWORD(v380) = sub_E272C0;
  v766 = v379;
  HIDWORD(v380) = sub_E272AC;
  v767 = v380;
  InputHandler::registerButtonDownHandler(v378, (int **)&v768, (int)&v766, 0);
  if ( (_DWORD)v767 )
    ((void (*)(void))v767)();
  v381 = (void *)(v768 - 12);
  if ( (int *)(v768 - 12) != &dword_28898C0 )
    v737 = (unsigned int *)(v768 - 4);
        v738 = __ldrex(v737);
      while ( __strex(v738 - 1, v737) );
      v738 = (*v737)--;
    if ( v738 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v381);
  v382 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v765, "button.holo_huge_screen");
  v383 = operator new(1u);
  LODWORD(v384) = sub_E27302;
  v763 = v383;
  HIDWORD(v384) = sub_E272EE;
  v764 = v384;
  InputHandler::registerButtonDownHandler(v382, (int **)&v765, (int)&v763, 0);
  if ( (_DWORD)v764 )
    ((void (*)(void))v764)();
  v385 = (void *)(v765 - 12);
  if ( (int *)(v765 - 12) != &dword_28898C0 )
    v739 = (unsigned int *)(v765 - 4);
        v740 = __ldrex(v739);
      while ( __strex(v740 - 1, v739) );
      v740 = (*v739)--;
    if ( v740 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v385);
  v386 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v762, "button.holo_mark");
  v387 = operator new(1u);
  LODWORD(v388) = sub_E27344;
  v760 = v387;
  HIDWORD(v388) = sub_E27330;
  v761 = v388;
  InputHandler::registerButtonDownHandler(v386, (int **)&v762, (int)&v760, 0);
  if ( (_DWORD)v761 )
    ((void (*)(void))v761)();
  v389 = (void *)(v762 - 12);
  if ( (int *)(v762 - 12) != &dword_28898C0 )
    v741 = (unsigned int *)(v762 - 4);
        v742 = __ldrex(v741);
      while ( __strex(v742 - 1, v741) );
      v742 = (*v741)--;
    if ( v742 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v389);
  v390 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v759, "button.holo_debug_toggle_thirdperson");
  v391 = operator new(1u);
  LODWORD(v392) = sub_E27386;
  v757 = v391;
  HIDWORD(v392) = sub_E27372;
  v758 = v392;
  InputHandler::registerButtonDownHandler(v390, (int **)&v759, (int)&v757, 0);
  if ( (_DWORD)v758 )
    ((void (*)(void))v758)();
  v393 = (void *)(v759 - 12);
  if ( (int *)(v759 - 12) != &dword_28898C0 )
    v743 = (unsigned int *)(v759 - 4);
        v744 = __ldrex(v743);
      while ( __strex(v744 - 1, v743) );
      v744 = (*v743)--;
    if ( v744 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v393);
  v394 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v756, "button.holo_debug_toggle_lsr");
  v395 = operator new(1u);
  LODWORD(v396) = sub_E273BA;
  v754 = v395;
  HIDWORD(v396) = sub_E273B4;
  v755 = v396;
  InputHandler::registerButtonDownHandler(v394, (int **)&v756, (int)&v754, 0);
  if ( (_DWORD)v755 )
    ((void (*)(void))v755)();
  v397 = (void *)(v756 - 12);
  if ( (int *)(v756 - 12) != &dword_28898C0 )
    v745 = (unsigned int *)(v756 - 4);
        v746 = __ldrex(v745);
      while ( __strex(v746 - 1, v745) );
      v746 = (*v745)--;
    if ( v746 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v397);
  v398 = *((_DWORD *)v1 + 2);
  sub_119C884((void **)&v753, "button.holo_debug_toggle_anchors");
  v399 = operator new(1u);
  LODWORD(v400) = sub_E273EE;
  v751 = v399;
  HIDWORD(v400) = sub_E273E8;
  v752 = v400;
  InputHandler::registerButtonDownHandler(v398, (int **)&v753, (int)&v751, 0);
  if ( (_DWORD)v752 )
    ((void (*)(void))v752)();
  v401 = (void *)(v753 - 12);
  if ( (int *)(v753 - 12) != &dword_28898C0 )
    v747 = (unsigned int *)(v753 - 4);
        v748 = __ldrex(v747);
      while ( __strex(v748 - 1, v747) );
      v748 = (*v747)--;
    if ( v748 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v401);
  v402 = (void *)(v923 - 12);
  if ( (int *)(v923 - 12) != &dword_28898C0 )
    v749 = (unsigned int *)(v923 - 4);
        v750 = __ldrex(v749);
      while ( __strex(v750 - 1, v749) );
      v750 = (*v749)--;
    if ( v750 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v402);
}


void __fastcall MinecraftInputHandler::_loadVoiceMappings(int a1, int a2)
{
  int v2; // r4@1
  __int64 v3; // r0@1
  char *v4; // r0@4
  char *v5; // r0@5
  void *v6; // r0@6
  void *v7; // r0@7
  __int64 v8; // r0@8
  char *v9; // r0@11
  char *v10; // r0@12
  void *v11; // r0@13
  void *v12; // r0@14
  __int64 v13; // r0@15
  char *v14; // r0@18
  char *v15; // r0@19
  void *v16; // r0@20
  void *v17; // r0@21
  __int64 v18; // r0@22
  char *v19; // r0@25
  char *v20; // r0@26
  void *v21; // r0@27
  void *v22; // r0@28
  __int64 v23; // r0@29
  char *v24; // r0@32
  char *v25; // r0@33
  void *v26; // r0@34
  void *v27; // r0@35
  __int64 v28; // r0@36
  char *v29; // r0@39
  char *v30; // r0@40
  void *v31; // r0@41
  void *v32; // r0@42
  __int64 v33; // r0@43
  char *v34; // r0@46
  char *v35; // r0@47
  void *v36; // r0@48
  void *v37; // r0@49
  __int64 v38; // r0@50
  char *v39; // r0@53
  char *v40; // r0@54
  void *v41; // r0@55
  void *v42; // r0@56
  __int64 v43; // r0@57
  char *v44; // r0@60
  char *v45; // r0@61
  void *v46; // r0@62
  void *v47; // r0@63
  __int64 v48; // r0@64
  char *v49; // r0@67
  char *v50; // r0@68
  void *v51; // r0@69
  void *v52; // r0@70
  __int64 v53; // r0@71
  char *v54; // r0@74
  char *v55; // r0@75
  void *v56; // r0@76
  void *v57; // r0@77
  __int64 v58; // r0@78
  char *v59; // r0@81
  char *v60; // r0@82
  void *v61; // r0@83
  void *v62; // r0@84
  __int64 v63; // r0@85
  char *v64; // r0@88
  char *v65; // r0@89
  void *v66; // r0@90
  void *v67; // r0@91
  __int64 v68; // r0@92
  char *v69; // r0@95
  char *v70; // r0@96
  void *v71; // r0@97
  void *v72; // r0@98
  __int64 v73; // r0@99
  char *v74; // r0@102
  char *v75; // r0@103
  void *v76; // r0@104
  void *v77; // r0@105
  __int64 v78; // r0@106
  char *v79; // r0@109
  char *v80; // r0@110
  void *v81; // r0@111
  void *v82; // r0@112
  __int64 v83; // r0@113
  char *v84; // r0@116
  char *v85; // r0@117
  void *v86; // r0@118
  void *v87; // r0@119
  __int64 v88; // r0@120
  char *v89; // r0@123
  char *v90; // r0@124
  void *v91; // r0@125
  void *v92; // r0@126
  __int64 v93; // r0@127
  char *v94; // r0@130
  char *v95; // r0@131
  void *v96; // r0@132
  void *v97; // r0@133
  __int64 v98; // r0@134
  char *v99; // r0@137
  char *v100; // r0@138
  void *v101; // r0@139
  void *v102; // r0@140
  __int64 v103; // r0@141
  char *v104; // r0@144
  char *v105; // r0@145
  void *v106; // r0@146
  void *v107; // r0@147
  __int64 v108; // r0@148
  char *v109; // r0@151
  char *v110; // r0@152
  void *v111; // r0@153
  void *v112; // r0@154
  __int64 v113; // r0@155
  char *v114; // r0@158
  char *v115; // r0@159
  void *v116; // r0@160
  void *v117; // r0@161
  __int64 v118; // r0@162
  char *v119; // r0@165
  char *v120; // r0@166
  void *v121; // r0@167
  void *v122; // r0@168
  __int64 v123; // r0@169
  char *v124; // r0@172
  char *v125; // r0@173
  void *v126; // r0@174
  void *v127; // r0@175
  __int64 v128; // r0@176
  char *v129; // r0@179
  char *v130; // r0@180
  void *v131; // r0@181
  void *v132; // r0@182
  __int64 v133; // r0@183
  char *v134; // r0@186
  char *v135; // r0@187
  void *v136; // r0@188
  void *v137; // r0@189
  __int64 v138; // r0@190
  char *v139; // r0@193
  char *v140; // r0@194
  void *v141; // r0@195
  void *v142; // r0@196
  __int64 v143; // r0@197
  char *v144; // r0@200
  char *v145; // r0@201
  void *v146; // r0@202
  void *v147; // r0@203
  __int64 v148; // r0@204
  char *v149; // r0@207
  char *v150; // r0@208
  void *v151; // r0@209
  void *v152; // r0@210
  __int64 v153; // r0@211
  char *v154; // r0@214
  char *v155; // r0@215
  void *v156; // r0@216
  void *v157; // r0@217
  __int64 v158; // r0@218
  char *v159; // r0@221
  char *v160; // r0@222
  void *v161; // r0@223
  void *v162; // r0@224
  __int64 v163; // r0@225
  char *v164; // r0@228
  char *v165; // r0@229
  void *v166; // r0@230
  void *v167; // r0@231
  __int64 v168; // r0@232
  char *v169; // r0@235
  char *v170; // r0@236
  void *v171; // r0@237
  void *v172; // r0@238
  __int64 v173; // r0@239
  char *v174; // r0@242
  char *v175; // r0@243
  void *v176; // r0@244
  void *v177; // r0@245
  __int64 v178; // r0@246
  char *v179; // r0@249
  char *v180; // r0@250
  void *v181; // r0@251
  void *v182; // r0@252
  __int64 v183; // r0@253
  char *v184; // r0@256
  char *v185; // r0@257
  void *v186; // r0@258
  void *v187; // r0@259
  __int64 v188; // r0@260
  char *v189; // r0@263
  char *v190; // r0@264
  void *v191; // r0@265
  void *v192; // r0@266
  __int64 v193; // r0@267
  char *v194; // r0@270
  char *v195; // r0@271
  void *v196; // r0@272
  void *v197; // r0@273
  __int64 v198; // r0@274
  char *v199; // r0@277
  char *v200; // r0@278
  void *v201; // r0@279
  void *v202; // r0@280
  __int64 v203; // r0@281
  char *v204; // r0@284
  char *v205; // r0@285
  void *v206; // r0@286
  void *v207; // r0@287
  __int64 v208; // r0@288
  char *v209; // r0@291
  char *v210; // r0@292
  void *v211; // r0@293
  void *v212; // r0@294
  __int64 v213; // r0@295
  char *v214; // r0@298
  char *v215; // r0@299
  void *v216; // r0@300
  void *v217; // r0@301
  __int64 v218; // r0@302
  char *v219; // r0@305
  char *v220; // r0@306
  void *v221; // r0@307
  void *v222; // r0@308
  __int64 v223; // r0@309
  char *v224; // r0@312
  char *v225; // r0@313
  void *v226; // r0@314
  void *v227; // r0@315
  __int64 v228; // r0@316
  char *v229; // r0@319
  char *v230; // r0@320
  void *v231; // r0@321
  void *v232; // r0@322
  __int64 v233; // r0@323
  char *v234; // r0@326
  char *v235; // r0@327
  void *v236; // r0@328
  void *v237; // r0@329
  __int64 v238; // r0@330
  char *v239; // r0@333
  char *v240; // r0@334
  void *v241; // r0@335
  void *v242; // r0@336
  __int64 v243; // r0@337
  char *v244; // r0@340
  char *v245; // r0@341
  void *v246; // r0@342
  void *v247; // r0@343
  __int64 v248; // r0@344
  char *v249; // r0@347
  char *v250; // r0@348
  void *v251; // r0@349
  void *v252; // r0@350
  __int64 v253; // r0@351
  char *v254; // r0@354
  char *v255; // r0@355
  void *v256; // r0@356
  void *v257; // r0@357
  __int64 v258; // r0@358
  char *v259; // r0@361
  char *v260; // r0@362
  void *v261; // r0@363
  void *v262; // r0@364
  __int64 v263; // r0@365
  char *v264; // r0@368
  char *v265; // r0@369
  void *v266; // r0@370
  void *v267; // r0@371
  __int64 v268; // r0@372
  char *v269; // r0@375
  char *v270; // r0@376
  void *v271; // r0@377
  void *v272; // r0@378
  __int64 v273; // r0@379
  char *v274; // r0@382
  char *v275; // r0@383
  void *v276; // r0@384
  void *v277; // r0@385
  __int64 v278; // r0@386
  char *v279; // r0@389
  char *v280; // r0@390
  void *v281; // r0@391
  void *v282; // r0@392
  __int64 v283; // r0@393
  char *v284; // r0@396
  char *v285; // r0@397
  void *v286; // r0@398
  void *v287; // r0@399
  __int64 v288; // r0@400
  char *v289; // r0@403
  char *v290; // r0@404
  void *v291; // r0@405
  void *v292; // r0@406
  __int64 v293; // r0@407
  char *v294; // r0@410
  char *v295; // r0@411
  void *v296; // r0@412
  void *v297; // r0@413
  __int64 v298; // r0@414
  char *v299; // r0@417
  char *v300; // r0@418
  void *v301; // r0@419
  void *v302; // r0@420
  __int64 v303; // r0@421
  char *v304; // r0@424
  char *v305; // r0@425
  void *v306; // r0@426
  void *v307; // r0@427
  __int64 v308; // r0@428
  char *v309; // r0@431
  char *v310; // r0@432
  void *v311; // r0@433
  void *v312; // r0@434
  __int64 v313; // r0@435
  char *v314; // r0@438
  char *v315; // r0@439
  void *v316; // r0@440
  void *v317; // r0@441
  __int64 v318; // r0@442
  char *v319; // r0@445
  char *v320; // r0@446
  void *v321; // r0@447
  void *v322; // r0@448
  __int64 v323; // r0@449
  char *v324; // r0@452
  char *v325; // r0@453
  void *v326; // r0@454
  void *v327; // r0@455
  __int64 v328; // r0@456
  char *v329; // r0@459
  char *v330; // r0@460
  void *v331; // r0@461
  void *v332; // r0@462
  __int64 v333; // r0@463
  char *v334; // r0@466
  char *v335; // r0@467
  void *v336; // r0@468
  void *v337; // r0@469
  __int64 v338; // r0@470
  char *v339; // r0@473
  char *v340; // r0@474
  void *v341; // r0@475
  void *v342; // r0@476
  __int64 v343; // r0@477
  char *v344; // r0@480
  char *v345; // r0@481
  void *v346; // r0@482
  void *v347; // r0@483
  __int64 v348; // r0@484
  char *v349; // r0@487
  char *v350; // r0@488
  void *v351; // r0@489
  void *v352; // r0@490
  __int64 v353; // r0@491
  char *v354; // r0@494
  char *v355; // r0@495
  void *v356; // r0@496
  void *v357; // r0@497
  __int64 v358; // r0@498
  char *v359; // r0@501
  char *v360; // r0@502
  void *v361; // r0@503
  void *v362; // r0@504
  __int64 v363; // r0@505
  char *v364; // r0@508
  char *v365; // r0@509
  void *v366; // r0@510
  void *v367; // r0@511
  __int64 v368; // r0@512
  char *v369; // r0@515
  char *v370; // r0@516
  void *v371; // r0@517
  void *v372; // r0@518
  __int64 v373; // r0@519
  char *v374; // r0@522
  char *v375; // r0@523
  void *v376; // r0@524
  void *v377; // r0@525
  __int64 v378; // r0@526
  char *v379; // r0@529
  char *v380; // r0@530
  void *v381; // r0@531
  void *v382; // r0@532
  __int64 v383; // r0@533
  char *v384; // r0@536
  char *v385; // r0@537
  void *v386; // r0@538
  void *v387; // r0@539
  __int64 v388; // r0@540
  char *v389; // r0@543
  char *v390; // r0@544
  void *v391; // r0@545
  void *v392; // r0@546
  __int64 v393; // r0@547
  char *v394; // r0@550
  char *v395; // r0@551
  void *v396; // r0@552
  void *v397; // r0@553
  __int64 v398; // r0@554
  char *v399; // r0@557
  char *v400; // r0@558
  void *v401; // r0@559
  void *v402; // r0@560
  __int64 v403; // r0@561
  char *v404; // r0@564
  char *v405; // r0@565
  void *v406; // r0@566
  void *v407; // r0@567
  __int64 v408; // r0@568
  char *v409; // r0@571
  char *v410; // r0@572
  void *v411; // r0@573
  void *v412; // r0@574
  __int64 v413; // r0@575
  char *v414; // r0@578
  char *v415; // r0@579
  void *v416; // r0@580
  void *v417; // r0@581
  __int64 v418; // r0@582
  char *v419; // r0@585
  char *v420; // r0@586
  void *v421; // r0@587
  void *v422; // r0@588
  __int64 v423; // r0@589
  char *v424; // r0@592
  char *v425; // r0@593
  void *v426; // r0@594
  void *v427; // r0@595
  __int64 v428; // r0@596
  char *v429; // r0@599
  char *v430; // r0@600
  void *v431; // r0@601
  void *v432; // r0@602
  __int64 v433; // r0@603
  char *v434; // r0@606
  char *v435; // r0@607
  void *v436; // r0@608
  void *v437; // r0@609
  __int64 v438; // r0@610
  char *v439; // r0@613
  char *v440; // r0@614
  void *v441; // r0@615
  void *v442; // r0@616
  __int64 v443; // r0@617
  char *v444; // r0@620
  char *v445; // r0@621
  void *v446; // r0@622
  void *v447; // r0@623
  __int64 v448; // r0@624
  char *v449; // r0@627
  char *v450; // r0@628
  void *v451; // r0@629
  void *v452; // r0@630
  __int64 v453; // r0@631
  char *v454; // r0@634
  char *v455; // r0@635
  void *v456; // r0@636
  void *v457; // r0@637
  __int64 v458; // r0@638
  char *v459; // r0@641
  char *v460; // r0@642
  void *v461; // r0@643
  void *v462; // r0@644
  __int64 v463; // r0@645
  char *v464; // r0@648
  char *v465; // r0@649
  void *v466; // r0@650
  void *v467; // r0@651
  __int64 v468; // r0@652
  char *v469; // r0@655
  char *v470; // r0@656
  void *v471; // r0@657
  void *v472; // r0@658
  __int64 v473; // r0@659
  char *v474; // r0@662
  char *v475; // r0@663
  void *v476; // r0@664
  void *v477; // r0@665
  __int64 v478; // r0@666
  char *v479; // r0@669
  char *v480; // r0@670
  void *v481; // r0@671
  void *v482; // r0@672
  __int64 v483; // r0@673
  char *v484; // r0@676
  char *v485; // r0@677
  void *v486; // r0@678
  void *v487; // r0@679
  __int64 v488; // r0@680
  char *v489; // r0@683
  char *v490; // r0@684
  void *v491; // r0@685
  void *v492; // r0@686
  __int64 v493; // r0@687
  char *v494; // r0@690
  char *v495; // r0@691
  void *v496; // r0@692
  void *v497; // r0@693
  __int64 v498; // r0@694
  char *v499; // r0@697
  char *v500; // r0@698
  void *v501; // r0@699
  void *v502; // r0@700
  __int64 v503; // r0@701
  char *v504; // r0@704
  char *v505; // r0@705
  void *v506; // r0@706
  void *v507; // r0@707
  __int64 v508; // r0@708
  char *v509; // r0@711
  char *v510; // r0@712
  void *v511; // r0@713
  void *v512; // r0@714
  __int64 v513; // r0@715
  char *v514; // r0@718
  char *v515; // r0@719
  void *v516; // r0@720
  void *v517; // r0@721
  __int64 v518; // r0@722
  char *v519; // r0@725
  char *v520; // r0@726
  void *v521; // r0@727
  void *v522; // r0@728
  unsigned int *v523; // r2@730
  signed int v524; // r1@732
  unsigned int *v525; // r2@734
  signed int v526; // r1@736
  unsigned int *v527; // r2@738
  signed int v528; // r1@740
  unsigned int *v529; // r2@742
  signed int v530; // r1@744
  unsigned int *v531; // r2@746
  signed int v532; // r1@748
  unsigned int *v533; // r2@750
  signed int v534; // r1@752
  unsigned int *v535; // r2@754
  signed int v536; // r1@756
  unsigned int *v537; // r2@758
  signed int v538; // r1@760
  unsigned int *v539; // r2@762
  signed int v540; // r1@764
  unsigned int *v541; // r2@766
  signed int v542; // r1@768
  unsigned int *v543; // r2@770
  signed int v544; // r1@772
  unsigned int *v545; // r2@774
  signed int v546; // r1@776
  unsigned int *v547; // r2@778
  signed int v548; // r1@780
  unsigned int *v549; // r2@782
  signed int v550; // r1@784
  unsigned int *v551; // r2@786
  signed int v552; // r1@788
  unsigned int *v553; // r2@790
  signed int v554; // r1@792
  unsigned int *v555; // r2@794
  signed int v556; // r1@796
  unsigned int *v557; // r2@798
  signed int v558; // r1@800
  unsigned int *v559; // r2@802
  signed int v560; // r1@804
  unsigned int *v561; // r2@806
  signed int v562; // r1@808
  unsigned int *v563; // r2@810
  signed int v564; // r1@812
  unsigned int *v565; // r2@814
  signed int v566; // r1@816
  unsigned int *v567; // r2@818
  signed int v568; // r1@820
  unsigned int *v569; // r2@822
  signed int v570; // r1@824
  unsigned int *v571; // r2@826
  signed int v572; // r1@828
  unsigned int *v573; // r2@830
  signed int v574; // r1@832
  unsigned int *v575; // r2@834
  signed int v576; // r1@836
  unsigned int *v577; // r2@838
  signed int v578; // r1@840
  unsigned int *v579; // r2@842
  signed int v580; // r1@844
  unsigned int *v581; // r2@846
  signed int v582; // r1@848
  unsigned int *v583; // r2@850
  signed int v584; // r1@852
  unsigned int *v585; // r2@854
  signed int v586; // r1@856
  unsigned int *v587; // r2@858
  signed int v588; // r1@860
  unsigned int *v589; // r2@862
  signed int v590; // r1@864
  unsigned int *v591; // r2@866
  signed int v592; // r1@868
  unsigned int *v593; // r2@870
  signed int v594; // r1@872
  unsigned int *v595; // r2@874
  signed int v596; // r1@876
  unsigned int *v597; // r2@878
  signed int v598; // r1@880
  unsigned int *v599; // r2@882
  signed int v600; // r1@884
  unsigned int *v601; // r2@886
  signed int v602; // r1@888
  unsigned int *v603; // r2@890
  signed int v604; // r1@892
  unsigned int *v605; // r2@894
  signed int v606; // r1@896
  unsigned int *v607; // r2@898
  signed int v608; // r1@900
  unsigned int *v609; // r2@902
  signed int v610; // r1@904
  unsigned int *v611; // r2@906
  signed int v612; // r1@908
  unsigned int *v613; // r2@910
  signed int v614; // r1@912
  unsigned int *v615; // r2@914
  signed int v616; // r1@916
  unsigned int *v617; // r2@918
  signed int v618; // r1@920
  unsigned int *v619; // r2@922
  signed int v620; // r1@924
  unsigned int *v621; // r2@926
  signed int v622; // r1@928
  unsigned int *v623; // r2@930
  signed int v624; // r1@932
  unsigned int *v625; // r2@934
  signed int v626; // r1@936
  unsigned int *v627; // r2@938
  signed int v628; // r1@940
  unsigned int *v629; // r2@942
  signed int v630; // r1@944
  unsigned int *v631; // r2@946
  signed int v632; // r1@948
  unsigned int *v633; // r2@950
  signed int v634; // r1@952
  unsigned int *v635; // r2@954
  signed int v636; // r1@956
  unsigned int *v637; // r2@958
  signed int v638; // r1@960
  unsigned int *v639; // r2@962
  signed int v640; // r1@964
  unsigned int *v641; // r2@966
  signed int v642; // r1@968
  unsigned int *v643; // r2@970
  signed int v644; // r1@972
  unsigned int *v645; // r2@974
  signed int v646; // r1@976
  unsigned int *v647; // r2@978
  signed int v648; // r1@980
  unsigned int *v649; // r2@982
  signed int v650; // r1@984
  unsigned int *v651; // r2@986
  signed int v652; // r1@988
  unsigned int *v653; // r2@990
  signed int v654; // r1@992
  unsigned int *v655; // r2@994
  signed int v656; // r1@996
  unsigned int *v657; // r2@998
  signed int v658; // r1@1000
  unsigned int *v659; // r2@1002
  signed int v660; // r1@1004
  unsigned int *v661; // r2@1006
  signed int v662; // r1@1008
  unsigned int *v663; // r2@1010
  signed int v664; // r1@1012
  unsigned int *v665; // r2@1014
  signed int v666; // r1@1016
  unsigned int *v667; // r2@1018
  signed int v668; // r1@1020
  unsigned int *v669; // r2@1022
  signed int v670; // r1@1024
  unsigned int *v671; // r2@1026
  signed int v672; // r1@1028
  unsigned int *v673; // r2@1030
  signed int v674; // r1@1032
  unsigned int *v675; // r2@1034
  signed int v676; // r1@1036
  unsigned int *v677; // r2@1038
  signed int v678; // r1@1040
  unsigned int *v679; // r2@1042
  signed int v680; // r1@1044
  unsigned int *v681; // r2@1046
  signed int v682; // r1@1048
  unsigned int *v683; // r2@1050
  signed int v684; // r1@1052
  unsigned int *v685; // r2@1054
  signed int v686; // r1@1056
  unsigned int *v687; // r2@1058
  signed int v688; // r1@1060
  unsigned int *v689; // r2@1062
  signed int v690; // r1@1064
  unsigned int *v691; // r2@1066
  signed int v692; // r1@1068
  unsigned int *v693; // r2@1070
  signed int v694; // r1@1072
  unsigned int *v695; // r2@1074
  signed int v696; // r1@1076
  unsigned int *v697; // r2@1078
  signed int v698; // r1@1080
  unsigned int *v699; // r2@1082
  signed int v700; // r1@1084
  unsigned int *v701; // r2@1086
  signed int v702; // r1@1088
  unsigned int *v703; // r2@1090
  signed int v704; // r1@1092
  unsigned int *v705; // r2@1094
  signed int v706; // r1@1096
  unsigned int *v707; // r2@1098
  signed int v708; // r1@1100
  unsigned int *v709; // r2@1102
  signed int v710; // r1@1104
  unsigned int *v711; // r2@1106
  signed int v712; // r1@1108
  unsigned int *v713; // r2@1110
  signed int v714; // r1@1112
  unsigned int *v715; // r2@1114
  signed int v716; // r1@1116
  unsigned int *v717; // r2@1118
  signed int v718; // r1@1120
  unsigned int *v719; // r2@1122
  signed int v720; // r1@1124
  unsigned int *v721; // r2@1126
  signed int v722; // r1@1128
  unsigned int *v723; // r2@1130
  signed int v724; // r1@1132
  unsigned int *v725; // r2@1134
  signed int v726; // r1@1136
  unsigned int *v727; // r2@1138
  signed int v728; // r1@1140
  unsigned int *v729; // r2@1142
  signed int v730; // r1@1144
  unsigned int *v731; // r2@1146
  signed int v732; // r1@1148
  unsigned int *v733; // r2@1150
  signed int v734; // r1@1152
  unsigned int *v735; // r2@1154
  signed int v736; // r1@1156
  unsigned int *v737; // r2@1158
  signed int v738; // r1@1160
  unsigned int *v739; // r2@1162
  signed int v740; // r1@1164
  unsigned int *v741; // r2@1166
  signed int v742; // r1@1168
  unsigned int *v743; // r2@1170
  signed int v744; // r1@1172
  unsigned int *v745; // r2@1174
  signed int v746; // r1@1176
  unsigned int *v747; // r2@1178
  signed int v748; // r1@1180
  unsigned int *v749; // r2@1182
  signed int v750; // r1@1184
  unsigned int *v751; // r2@1186
  signed int v752; // r1@1188
  unsigned int *v753; // r2@1190
  signed int v754; // r1@1192
  unsigned int *v755; // r2@1194
  signed int v756; // r1@1196
  unsigned int *v757; // r2@1198
  signed int v758; // r1@1200
  unsigned int *v759; // r2@1202
  signed int v760; // r1@1204
  unsigned int *v761; // r2@1206
  signed int v762; // r1@1208
  unsigned int *v763; // r2@1210
  signed int v764; // r1@1212
  unsigned int *v765; // r2@1214
  signed int v766; // r1@1216
  unsigned int *v767; // r2@1218
  signed int v768; // r1@1220
  unsigned int *v769; // r2@1222
  signed int v770; // r1@1224
  unsigned int *v771; // r2@1226
  signed int v772; // r1@1228
  unsigned int *v773; // r2@1230
  signed int v774; // r1@1232
  unsigned int *v775; // r2@1234
  signed int v776; // r1@1236
  unsigned int *v777; // r2@1238
  signed int v778; // r1@1240
  unsigned int *v779; // r2@1242
  signed int v780; // r1@1244
  unsigned int *v781; // r2@1246
  signed int v782; // r1@1248
  unsigned int *v783; // r2@1250
  signed int v784; // r1@1252
  unsigned int *v785; // r2@1254
  signed int v786; // r1@1256
  unsigned int *v787; // r2@1258
  signed int v788; // r1@1260
  unsigned int *v789; // r2@1262
  signed int v790; // r1@1264
  unsigned int *v791; // r2@1266
  signed int v792; // r1@1268
  unsigned int *v793; // r2@1270
  signed int v794; // r1@1272
  unsigned int *v795; // r2@1274
  signed int v796; // r1@1276
  unsigned int *v797; // r2@1278
  signed int v798; // r1@1280
  unsigned int *v799; // r2@1282
  signed int v800; // r1@1284
  unsigned int *v801; // r2@1286
  signed int v802; // r1@1288
  unsigned int *v803; // r2@1290
  signed int v804; // r1@1292
  unsigned int *v805; // r2@1294
  signed int v806; // r1@1296
  unsigned int *v807; // r2@1298
  signed int v808; // r1@1300
  unsigned int *v809; // r2@1302
  signed int v810; // r1@1304
  unsigned int *v811; // r2@1306
  signed int v812; // r1@1308
  unsigned int *v813; // r2@1310
  signed int v814; // r1@1312
  unsigned int *v815; // r2@1314
  signed int v816; // r1@1316
  unsigned int *v817; // r2@1318
  signed int v818; // r1@1320
  unsigned int *v819; // r2@1322
  signed int v820; // r1@1324
  unsigned int *v821; // r2@1326
  signed int v822; // r1@1328
  unsigned int *v823; // r2@1330
  signed int v824; // r1@1332
  unsigned int *v825; // r2@1334
  signed int v826; // r1@1336
  unsigned int *v827; // r2@1338
  signed int v828; // r1@1340
  unsigned int *v829; // r2@1342
  signed int v830; // r1@1344
  unsigned int *v831; // r2@1346
  signed int v832; // r1@1348
  unsigned int *v833; // r2@1350
  signed int v834; // r1@1352
  unsigned int *v835; // r2@1354
  signed int v836; // r1@1356
  unsigned int *v837; // r2@1358
  signed int v838; // r1@1360
  unsigned int *v839; // r2@1362
  signed int v840; // r1@1364
  unsigned int *v841; // r2@1366
  signed int v842; // r1@1368
  unsigned int *v843; // r2@1370
  signed int v844; // r1@1372
  unsigned int *v845; // r2@1374
  signed int v846; // r1@1376
  unsigned int *v847; // r2@1378
  signed int v848; // r1@1380
  unsigned int *v849; // r2@1382
  signed int v850; // r1@1384
  unsigned int *v851; // r2@1386
  signed int v852; // r1@1388
  unsigned int *v853; // r2@1390
  signed int v854; // r1@1392
  unsigned int *v855; // r2@1394
  signed int v856; // r1@1396
  unsigned int *v857; // r2@1398
  signed int v858; // r1@1400
  unsigned int *v859; // r2@1402
  signed int v860; // r1@1404
  unsigned int *v861; // r2@1406
  signed int v862; // r1@1408
  unsigned int *v863; // r2@1410
  signed int v864; // r1@1412
  unsigned int *v865; // r2@1414
  signed int v866; // r1@1416
  unsigned int *v867; // r2@1418
  signed int v868; // r1@1420
  unsigned int *v869; // r2@1422
  signed int v870; // r1@1424
  unsigned int *v871; // r2@1426
  signed int v872; // r1@1428
  unsigned int *v873; // r2@1430
  signed int v874; // r1@1432
  unsigned int *v875; // r2@1434
  signed int v876; // r1@1436
  unsigned int *v877; // r2@1438
  signed int v878; // r1@1440
  unsigned int *v879; // r2@1442
  signed int v880; // r1@1444
  unsigned int *v881; // r2@1446
  signed int v882; // r1@1448
  unsigned int *v883; // r2@1450
  signed int v884; // r1@1452
  unsigned int *v885; // r2@1454
  signed int v886; // r1@1456
  unsigned int *v887; // r2@1458
  signed int v888; // r1@1460
  unsigned int *v889; // r2@1462
  signed int v890; // r1@1464
  unsigned int *v891; // r2@1466
  signed int v892; // r1@1468
  unsigned int *v893; // r2@1470
  signed int v894; // r1@1472
  unsigned int *v895; // r2@1474
  signed int v896; // r1@1476
  unsigned int *v897; // r2@1478
  signed int v898; // r1@1480
  unsigned int *v899; // r2@1482
  signed int v900; // r1@1484
  unsigned int *v901; // r2@1486
  signed int v902; // r1@1488
  unsigned int *v903; // r2@1490
  signed int v904; // r1@1492
  unsigned int *v905; // r2@1494
  signed int v906; // r1@1496
  unsigned int *v907; // r2@1498
  signed int v908; // r1@1500
  unsigned int *v909; // r2@1502
  signed int v910; // r1@1504
  unsigned int *v911; // r2@1506
  signed int v912; // r1@1508
  unsigned int *v913; // r2@1510
  signed int v914; // r1@1512
  unsigned int *v915; // r2@1514
  signed int v916; // r1@1516
  unsigned int *v917; // r2@1518
  signed int v918; // r1@1520
  unsigned int *v919; // r2@1522
  signed int v920; // r1@1524
  unsigned int *v921; // r2@1526
  signed int v922; // r1@1528
  unsigned int *v923; // r2@1530
  signed int v924; // r1@1532
  unsigned int *v925; // r2@1534
  signed int v926; // r1@1536
  unsigned int *v927; // r2@1538
  signed int v928; // r1@1540
  unsigned int *v929; // r2@1542
  signed int v930; // r1@1544
  unsigned int *v931; // r2@1546
  signed int v932; // r1@1548
  unsigned int *v933; // r2@1550
  signed int v934; // r1@1552
  unsigned int *v935; // r2@1554
  signed int v936; // r1@1556
  unsigned int *v937; // r2@1558
  signed int v938; // r1@1560
  unsigned int *v939; // r2@1562
  signed int v940; // r1@1564
  unsigned int *v941; // r2@1566
  signed int v942; // r1@1568
  unsigned int *v943; // r2@1570
  signed int v944; // r1@1572
  unsigned int *v945; // r2@1574
  signed int v946; // r1@1576
  unsigned int *v947; // r2@1578
  signed int v948; // r1@1580
  unsigned int *v949; // r2@1582
  signed int v950; // r1@1584
  unsigned int *v951; // r2@1586
  signed int v952; // r1@1588
  unsigned int *v953; // r2@1590
  signed int v954; // r1@1592
  unsigned int *v955; // r2@1594
  signed int v956; // r1@1596
  unsigned int *v957; // r2@1598
  signed int v958; // r1@1600
  unsigned int *v959; // r2@1602
  signed int v960; // r1@1604
  unsigned int *v961; // r2@1606
  signed int v962; // r1@1608
  unsigned int *v963; // r2@1610
  signed int v964; // r1@1612
  unsigned int *v965; // r2@1614
  signed int v966; // r1@1616
  unsigned int *v967; // r2@1618
  signed int v968; // r1@1620
  unsigned int *v969; // r2@1622
  signed int v970; // r1@1624
  unsigned int *v971; // r2@1626
  signed int v972; // r1@1628
  unsigned int *v973; // r2@1630
  signed int v974; // r1@1632
  unsigned int *v975; // r2@1634
  signed int v976; // r1@1636
  unsigned int *v977; // r2@1638
  signed int v978; // r1@1640
  unsigned int *v979; // r2@1642
  signed int v980; // r1@1644
  unsigned int *v981; // r2@1646
  signed int v982; // r1@1648
  unsigned int *v983; // r2@1650
  signed int v984; // r1@1652
  unsigned int *v985; // r2@1654
  signed int v986; // r1@1656
  unsigned int *v987; // r2@1658
  signed int v988; // r1@1660
  unsigned int *v989; // r2@1662
  signed int v990; // r1@1664
  unsigned int *v991; // r2@1666
  signed int v992; // r1@1668
  unsigned int *v993; // r2@1670
  signed int v994; // r1@1672
  unsigned int *v995; // r2@1674
  signed int v996; // r1@1676
  unsigned int *v997; // r2@1678
  signed int v998; // r1@1680
  unsigned int *v999; // r2@1682
  signed int v1000; // r1@1684
  unsigned int *v1001; // r2@1686
  signed int v1002; // r1@1688
  unsigned int *v1003; // r2@1690
  signed int v1004; // r1@1692
  unsigned int *v1005; // r2@1694
  signed int v1006; // r1@1696
  unsigned int *v1007; // r2@1698
  signed int v1008; // r1@1700
  unsigned int *v1009; // r2@1702
  signed int v1010; // r1@1704
  unsigned int *v1011; // r2@1706
  signed int v1012; // r1@1708
  unsigned int *v1013; // r2@1710
  signed int v1014; // r1@1712
  unsigned int *v1015; // r2@1714
  signed int v1016; // r1@1716
  unsigned int *v1017; // r2@1718
  signed int v1018; // r1@1720
  unsigned int *v1019; // r2@1722
  signed int v1020; // r1@1724
  unsigned int *v1021; // r2@1726
  signed int v1022; // r1@1728
  unsigned int *v1023; // r2@1730
  signed int v1024; // r1@1732
  unsigned int *v1025; // r2@1734
  signed int v1026; // r1@1736
  unsigned int *v1027; // r2@1738
  signed int v1028; // r1@1740
  unsigned int *v1029; // r2@1742
  signed int v1030; // r1@1744
  unsigned int *v1031; // r2@1746
  signed int v1032; // r1@1748
  unsigned int *v1033; // r2@1750
  signed int v1034; // r1@1752
  unsigned int *v1035; // r2@1754
  signed int v1036; // r1@1756
  unsigned int *v1037; // r2@1758
  signed int v1038; // r1@1760
  unsigned int *v1039; // r2@1762
  signed int v1040; // r1@1764
  unsigned int *v1041; // r2@1766
  signed int v1042; // r1@1768
  unsigned int *v1043; // r2@1770
  signed int v1044; // r1@1772
  unsigned int *v1045; // r2@1774
  signed int v1046; // r1@1776
  unsigned int *v1047; // r2@1778
  signed int v1048; // r1@1780
  unsigned int *v1049; // r2@1782
  signed int v1050; // r1@1784
  unsigned int *v1051; // r2@1786
  signed int v1052; // r1@1788
  unsigned int *v1053; // r2@1790
  signed int v1054; // r1@1792
  unsigned int *v1055; // r2@1794
  signed int v1056; // r1@1796
  unsigned int *v1057; // r2@1798
  signed int v1058; // r1@1800
  unsigned int *v1059; // r2@1802
  signed int v1060; // r1@1804
  unsigned int *v1061; // r2@1806
  signed int v1062; // r1@1808
  unsigned int *v1063; // r2@1810
  signed int v1064; // r1@1812
  unsigned int *v1065; // r2@1814
  signed int v1066; // r1@1816
  unsigned int *v1067; // r2@1818
  signed int v1068; // r1@1820
  unsigned int *v1069; // r2@1822
  signed int v1070; // r1@1824
  unsigned int *v1071; // r2@1826
  signed int v1072; // r1@1828
  unsigned int *v1073; // r2@1830
  signed int v1074; // r1@1832
  unsigned int *v1075; // r2@1834
  signed int v1076; // r1@1836
  unsigned int *v1077; // r2@1838
  signed int v1078; // r1@1840
  unsigned int *v1079; // r2@1842
  signed int v1080; // r1@1844
  unsigned int *v1081; // r2@1846
  signed int v1082; // r1@1848
  unsigned int *v1083; // r2@1850
  signed int v1084; // r1@1852
  unsigned int *v1085; // r2@1854
  signed int v1086; // r1@1856
  unsigned int *v1087; // r2@1858
  signed int v1088; // r1@1860
  unsigned int *v1089; // r2@1862
  signed int v1090; // r1@1864
  unsigned int *v1091; // r2@1866
  signed int v1092; // r1@1868
  unsigned int *v1093; // r2@1870
  signed int v1094; // r1@1872
  unsigned int *v1095; // r2@1874
  signed int v1096; // r1@1876
  unsigned int *v1097; // r2@1878
  signed int v1098; // r1@1880
  unsigned int *v1099; // r2@1882
  signed int v1100; // r1@1884
  unsigned int *v1101; // r2@1886
  signed int v1102; // r1@1888
  unsigned int *v1103; // r2@1890
  signed int v1104; // r1@1892
  unsigned int *v1105; // r2@1894
  signed int v1106; // r1@1896
  unsigned int *v1107; // r2@1898
  signed int v1108; // r1@1900
  unsigned int *v1109; // r2@1902
  signed int v1110; // r1@1904
  unsigned int *v1111; // r2@1906
  signed int v1112; // r1@1908
  unsigned int *v1113; // r2@1910
  signed int v1114; // r1@1912
  unsigned int *v1115; // r2@1914
  signed int v1116; // r1@1916
  unsigned int *v1117; // r2@1918
  signed int v1118; // r1@1920
  unsigned int *v1119; // r2@1922
  signed int v1120; // r1@1924
  unsigned int *v1121; // r2@1926
  signed int v1122; // r1@1928
  unsigned int *v1123; // r2@1930
  signed int v1124; // r1@1932
  unsigned int *v1125; // r2@1934
  signed int v1126; // r1@1936
  unsigned int *v1127; // r2@1938
  signed int v1128; // r1@1940
  unsigned int *v1129; // r2@1942
  signed int v1130; // r1@1944
  unsigned int *v1131; // r2@1946
  signed int v1132; // r1@1948
  unsigned int *v1133; // r2@1950
  signed int v1134; // r1@1952
  unsigned int *v1135; // r2@1954
  signed int v1136; // r1@1956
  unsigned int *v1137; // r2@1958
  signed int v1138; // r1@1960
  unsigned int *v1139; // r2@1962
  signed int v1140; // r1@1964
  unsigned int *v1141; // r2@1966
  signed int v1142; // r1@1968
  unsigned int *v1143; // r2@1970
  signed int v1144; // r1@1972
  unsigned int *v1145; // r2@1974
  signed int v1146; // r1@1976
  unsigned int *v1147; // r2@1978
  signed int v1148; // r1@1980
  unsigned int *v1149; // r2@1982
  signed int v1150; // r1@1984
  unsigned int *v1151; // r2@1986
  signed int v1152; // r1@1988
  unsigned int *v1153; // r2@1990
  signed int v1154; // r1@1992
  unsigned int *v1155; // r2@1994
  signed int v1156; // r1@1996
  unsigned int *v1157; // r2@1998
  signed int v1158; // r1@2000
  unsigned int *v1159; // r2@2002
  signed int v1160; // r1@2004
  unsigned int *v1161; // r2@2006
  signed int v1162; // r1@2008
  unsigned int *v1163; // r2@2010
  signed int v1164; // r1@2012
  unsigned int *v1165; // r2@2014
  signed int v1166; // r1@2016
  unsigned int *v1167; // r2@2018
  signed int v1168; // r1@2020
  unsigned int *v1169; // r2@2022
  signed int v1170; // r1@2024
  unsigned int *v1171; // r2@2026
  signed int v1172; // r1@2028
  unsigned int *v1173; // r2@2030
  signed int v1174; // r1@2032
  unsigned int *v1175; // r2@2034
  signed int v1176; // r1@2036
  unsigned int *v1177; // r2@2038
  signed int v1178; // r1@2040
  unsigned int *v1179; // r2@2042
  signed int v1180; // r1@2044
  unsigned int *v1181; // r2@2046
  signed int v1182; // r1@2048
  unsigned int *v1183; // r2@2050
  signed int v1184; // r1@2052
  unsigned int *v1185; // r2@2054
  signed int v1186; // r1@2056
  unsigned int *v1187; // r2@2058
  signed int v1188; // r1@2060
  unsigned int *v1189; // r2@2062
  signed int v1190; // r1@2064
  unsigned int *v1191; // r2@2066
  signed int v1192; // r1@2068
  unsigned int *v1193; // r2@2070
  signed int v1194; // r1@2072
  unsigned int *v1195; // r2@2074
  signed int v1196; // r1@2076
  unsigned int *v1197; // r2@2078
  signed int v1198; // r1@2080
  unsigned int *v1199; // r2@2082
  signed int v1200; // r1@2084
  unsigned int *v1201; // r2@2086
  signed int v1202; // r1@2088
  unsigned int *v1203; // r2@2090
  signed int v1204; // r1@2092
  unsigned int *v1205; // r2@2094
  signed int v1206; // r1@2096
  unsigned int *v1207; // r2@2098
  signed int v1208; // r1@2100
  unsigned int *v1209; // r2@2102
  signed int v1210; // r1@2104
  unsigned int *v1211; // r2@2106
  signed int v1212; // r1@2108
  unsigned int *v1213; // r2@2110
  signed int v1214; // r1@2112
  unsigned int *v1215; // r2@2114
  signed int v1216; // r1@2116
  unsigned int *v1217; // r2@2118
  signed int v1218; // r1@2120
  unsigned int *v1219; // r2@2122
  signed int v1220; // r1@2124
  unsigned int *v1221; // r2@2126
  signed int v1222; // r1@2128
  unsigned int *v1223; // r2@2130
  signed int v1224; // r1@2132
  unsigned int *v1225; // r2@2134
  signed int v1226; // r1@2136
  unsigned int *v1227; // r2@2138
  signed int v1228; // r1@2140
  unsigned int *v1229; // r2@2142
  signed int v1230; // r1@2144
  unsigned int *v1231; // r2@2146
  signed int v1232; // r1@2148
  unsigned int *v1233; // r2@2150
  signed int v1234; // r1@2152
  unsigned int *v1235; // r2@2154
  signed int v1236; // r1@2156
  unsigned int *v1237; // r2@2158
  signed int v1238; // r1@2160
  unsigned int *v1239; // r2@2162
  signed int v1240; // r1@2164
  unsigned int *v1241; // r2@2166
  signed int v1242; // r1@2168
  unsigned int *v1243; // r2@2170
  signed int v1244; // r1@2172
  unsigned int *v1245; // r2@2174
  signed int v1246; // r1@2176
  unsigned int *v1247; // r2@2178
  signed int v1248; // r1@2180
  unsigned int *v1249; // r2@2182
  signed int v1250; // r1@2184
  unsigned int *v1251; // r2@2186
  signed int v1252; // r1@2188
  unsigned int *v1253; // r2@2190
  signed int v1254; // r1@2192
  unsigned int *v1255; // r2@2194
  signed int v1256; // r1@2196
  unsigned int *v1257; // r2@2198
  signed int v1258; // r1@2200
  unsigned int *v1259; // r2@2202
  signed int v1260; // r1@2204
  unsigned int *v1261; // r2@2206
  signed int v1262; // r1@2208
  unsigned int *v1263; // r2@2210
  signed int v1264; // r1@2212
  unsigned int *v1265; // r2@2214
  signed int v1266; // r1@2216
  unsigned int *v1267; // r2@2218
  signed int v1268; // r1@2220
  unsigned int *v1269; // r2@2222
  signed int v1270; // r1@2224
  unsigned int *v1271; // r2@2226
  signed int v1272; // r1@2228
  unsigned int *v1273; // r2@2230
  signed int v1274; // r1@2232
  unsigned int *v1275; // r2@2234
  signed int v1276; // r1@2236
  unsigned int *v1277; // r2@2238
  signed int v1278; // r1@2240
  unsigned int *v1279; // r2@2242
  signed int v1280; // r1@2244
  unsigned int *v1281; // r2@2246
  signed int v1282; // r1@2248
  unsigned int *v1283; // r2@2250
  signed int v1284; // r1@2252
  unsigned int *v1285; // r2@2254
  signed int v1286; // r1@2256
  unsigned int *v1287; // r2@2258
  signed int v1288; // r1@2260
  unsigned int *v1289; // r2@2262
  signed int v1290; // r1@2264
  unsigned int *v1291; // r2@2266
  signed int v1292; // r1@2268
  unsigned int *v1293; // r2@2270
  signed int v1294; // r1@2272
  unsigned int *v1295; // r2@2274
  signed int v1296; // r1@2276
  unsigned int *v1297; // r2@2278
  signed int v1298; // r1@2280
  unsigned int *v1299; // r2@2282
  signed int v1300; // r1@2284
  unsigned int *v1301; // r2@2286
  signed int v1302; // r1@2288
  unsigned int *v1303; // r2@2290
  signed int v1304; // r1@2292
  unsigned int *v1305; // r2@2294
  signed int v1306; // r1@2296
  unsigned int *v1307; // r2@2298
  signed int v1308; // r1@2300
  unsigned int *v1309; // r2@2302
  signed int v1310; // r1@2304
  unsigned int *v1311; // r2@2306
  signed int v1312; // r1@2308
  unsigned int *v1313; // r2@2310
  signed int v1314; // r1@2312
  unsigned int *v1315; // r2@2314
  signed int v1316; // r1@2316
  unsigned int *v1317; // r2@2318
  signed int v1318; // r1@2320
  unsigned int *v1319; // r2@2322
  signed int v1320; // r1@2324
  unsigned int *v1321; // r2@2326
  signed int v1322; // r1@2328
  unsigned int *v1323; // r2@2330
  signed int v1324; // r1@2332
  unsigned int *v1325; // r2@2334
  signed int v1326; // r1@2336
  unsigned int *v1327; // r2@2338
  signed int v1328; // r1@2340
  unsigned int *v1329; // r2@2342
  signed int v1330; // r1@2344
  unsigned int *v1331; // r2@2346
  signed int v1332; // r1@2348
  unsigned int *v1333; // r2@2350
  signed int v1334; // r1@2352
  unsigned int *v1335; // r2@2354
  signed int v1336; // r1@2356
  unsigned int *v1337; // r2@2358
  signed int v1338; // r1@2360
  unsigned int *v1339; // r2@2362
  signed int v1340; // r1@2364
  unsigned int *v1341; // r2@2366
  signed int v1342; // r1@2368
  unsigned int *v1343; // r2@2370
  signed int v1344; // r1@2372
  unsigned int *v1345; // r2@2374
  signed int v1346; // r1@2376
  unsigned int *v1347; // r2@2378
  signed int v1348; // r1@2380
  unsigned int *v1349; // r2@2382
  signed int v1350; // r1@2384
  unsigned int *v1351; // r2@2386
  signed int v1352; // r1@2388
  unsigned int *v1353; // r2@2390
  signed int v1354; // r1@2392
  int v1355; // [sp+8h] [bp-D18h]@722
  int v1356; // [sp+10h] [bp-D10h]@722
  char *v1357; // [sp+14h] [bp-D0Ch]@722
  char *v1358; // [sp+18h] [bp-D08h]@722
  int v1359; // [sp+1Ch] [bp-D04h]@722
  int v1360; // [sp+20h] [bp-D00h]@722
  int v1361; // [sp+28h] [bp-CF8h]@715
  int v1362; // [sp+30h] [bp-CF0h]@715
  char *v1363; // [sp+34h] [bp-CECh]@715
  char *v1364; // [sp+38h] [bp-CE8h]@715
  int v1365; // [sp+3Ch] [bp-CE4h]@715
  int v1366; // [sp+40h] [bp-CE0h]@715
  int v1367; // [sp+48h] [bp-CD8h]@708
  int v1368; // [sp+50h] [bp-CD0h]@708
  char *v1369; // [sp+54h] [bp-CCCh]@708
  char *v1370; // [sp+58h] [bp-CC8h]@708
  int v1371; // [sp+5Ch] [bp-CC4h]@708
  int v1372; // [sp+60h] [bp-CC0h]@708
  int v1373; // [sp+68h] [bp-CB8h]@701
  int v1374; // [sp+70h] [bp-CB0h]@701
  char *v1375; // [sp+74h] [bp-CACh]@701
  char *v1376; // [sp+78h] [bp-CA8h]@701
  int v1377; // [sp+7Ch] [bp-CA4h]@701
  int v1378; // [sp+80h] [bp-CA0h]@701
  int v1379; // [sp+88h] [bp-C98h]@694
  int v1380; // [sp+90h] [bp-C90h]@694
  char *v1381; // [sp+94h] [bp-C8Ch]@694
  char *v1382; // [sp+98h] [bp-C88h]@694
  int v1383; // [sp+9Ch] [bp-C84h]@694
  int v1384; // [sp+A0h] [bp-C80h]@694
  int v1385; // [sp+A8h] [bp-C78h]@687
  int v1386; // [sp+B0h] [bp-C70h]@687
  char *v1387; // [sp+B4h] [bp-C6Ch]@687
  char *v1388; // [sp+B8h] [bp-C68h]@687
  int v1389; // [sp+BCh] [bp-C64h]@687
  int v1390; // [sp+C0h] [bp-C60h]@687
  int v1391; // [sp+C8h] [bp-C58h]@680
  int v1392; // [sp+D0h] [bp-C50h]@680
  char *v1393; // [sp+D4h] [bp-C4Ch]@680
  char *v1394; // [sp+D8h] [bp-C48h]@680
  int v1395; // [sp+DCh] [bp-C44h]@680
  int v1396; // [sp+E0h] [bp-C40h]@680
  int v1397; // [sp+E8h] [bp-C38h]@673
  int v1398; // [sp+F0h] [bp-C30h]@673
  char *v1399; // [sp+F4h] [bp-C2Ch]@673
  char *v1400; // [sp+F8h] [bp-C28h]@673
  int v1401; // [sp+FCh] [bp-C24h]@673
  int v1402; // [sp+100h] [bp-C20h]@673
  int v1403; // [sp+108h] [bp-C18h]@666
  int v1404; // [sp+110h] [bp-C10h]@666
  char *v1405; // [sp+114h] [bp-C0Ch]@666
  char *v1406; // [sp+118h] [bp-C08h]@666
  int v1407; // [sp+11Ch] [bp-C04h]@666
  int v1408; // [sp+120h] [bp-C00h]@666
  int v1409; // [sp+128h] [bp-BF8h]@659
  int v1410; // [sp+130h] [bp-BF0h]@659
  char *v1411; // [sp+134h] [bp-BECh]@659
  char *v1412; // [sp+138h] [bp-BE8h]@659
  int v1413; // [sp+13Ch] [bp-BE4h]@659
  int v1414; // [sp+140h] [bp-BE0h]@659
  int v1415; // [sp+148h] [bp-BD8h]@652
  int v1416; // [sp+150h] [bp-BD0h]@652
  char *v1417; // [sp+154h] [bp-BCCh]@652
  char *v1418; // [sp+158h] [bp-BC8h]@652
  int v1419; // [sp+15Ch] [bp-BC4h]@652
  int v1420; // [sp+160h] [bp-BC0h]@652
  int v1421; // [sp+168h] [bp-BB8h]@645
  int v1422; // [sp+170h] [bp-BB0h]@645
  char *v1423; // [sp+174h] [bp-BACh]@645
  char *v1424; // [sp+178h] [bp-BA8h]@645
  int v1425; // [sp+17Ch] [bp-BA4h]@645
  int v1426; // [sp+180h] [bp-BA0h]@645
  int v1427; // [sp+188h] [bp-B98h]@638
  int v1428; // [sp+190h] [bp-B90h]@638
  char *v1429; // [sp+194h] [bp-B8Ch]@638
  char *v1430; // [sp+198h] [bp-B88h]@638
  int v1431; // [sp+19Ch] [bp-B84h]@638
  int v1432; // [sp+1A0h] [bp-B80h]@638
  int v1433; // [sp+1A8h] [bp-B78h]@631
  int v1434; // [sp+1B0h] [bp-B70h]@631
  char *v1435; // [sp+1B4h] [bp-B6Ch]@631
  char *v1436; // [sp+1B8h] [bp-B68h]@631
  int v1437; // [sp+1BCh] [bp-B64h]@631
  int v1438; // [sp+1C0h] [bp-B60h]@631
  int v1439; // [sp+1C8h] [bp-B58h]@624
  int v1440; // [sp+1D0h] [bp-B50h]@624
  char *v1441; // [sp+1D4h] [bp-B4Ch]@624
  char *v1442; // [sp+1D8h] [bp-B48h]@624
  int v1443; // [sp+1DCh] [bp-B44h]@624
  int v1444; // [sp+1E0h] [bp-B40h]@624
  int v1445; // [sp+1E8h] [bp-B38h]@617
  int v1446; // [sp+1F0h] [bp-B30h]@617
  char *v1447; // [sp+1F4h] [bp-B2Ch]@617
  char *v1448; // [sp+1F8h] [bp-B28h]@617
  int v1449; // [sp+1FCh] [bp-B24h]@617
  int v1450; // [sp+200h] [bp-B20h]@617
  int v1451; // [sp+208h] [bp-B18h]@610
  int v1452; // [sp+210h] [bp-B10h]@610
  char *v1453; // [sp+214h] [bp-B0Ch]@610
  char *v1454; // [sp+218h] [bp-B08h]@610
  int v1455; // [sp+21Ch] [bp-B04h]@610
  int v1456; // [sp+220h] [bp-B00h]@610
  int v1457; // [sp+228h] [bp-AF8h]@603
  int v1458; // [sp+230h] [bp-AF0h]@603
  char *v1459; // [sp+234h] [bp-AECh]@603
  char *v1460; // [sp+238h] [bp-AE8h]@603
  int v1461; // [sp+23Ch] [bp-AE4h]@603
  int v1462; // [sp+240h] [bp-AE0h]@603
  int v1463; // [sp+248h] [bp-AD8h]@596
  int v1464; // [sp+250h] [bp-AD0h]@596
  char *v1465; // [sp+254h] [bp-ACCh]@596
  char *v1466; // [sp+258h] [bp-AC8h]@596
  int v1467; // [sp+25Ch] [bp-AC4h]@596
  int v1468; // [sp+260h] [bp-AC0h]@596
  int v1469; // [sp+268h] [bp-AB8h]@589
  int v1470; // [sp+270h] [bp-AB0h]@589
  char *v1471; // [sp+274h] [bp-AACh]@589
  char *v1472; // [sp+278h] [bp-AA8h]@589
  int v1473; // [sp+27Ch] [bp-AA4h]@589
  int v1474; // [sp+280h] [bp-AA0h]@589
  int v1475; // [sp+288h] [bp-A98h]@582
  int v1476; // [sp+290h] [bp-A90h]@582
  char *v1477; // [sp+294h] [bp-A8Ch]@582
  char *v1478; // [sp+298h] [bp-A88h]@582
  int v1479; // [sp+29Ch] [bp-A84h]@582
  int v1480; // [sp+2A0h] [bp-A80h]@582
  int v1481; // [sp+2A8h] [bp-A78h]@575
  int v1482; // [sp+2B0h] [bp-A70h]@575
  char *v1483; // [sp+2B4h] [bp-A6Ch]@575
  char *v1484; // [sp+2B8h] [bp-A68h]@575
  int v1485; // [sp+2BCh] [bp-A64h]@575
  int v1486; // [sp+2C0h] [bp-A60h]@575
  int v1487; // [sp+2C8h] [bp-A58h]@568
  int v1488; // [sp+2D0h] [bp-A50h]@568
  char *v1489; // [sp+2D4h] [bp-A4Ch]@568
  char *v1490; // [sp+2D8h] [bp-A48h]@568
  int v1491; // [sp+2DCh] [bp-A44h]@568
  int v1492; // [sp+2E0h] [bp-A40h]@568
  int v1493; // [sp+2E8h] [bp-A38h]@561
  int v1494; // [sp+2F0h] [bp-A30h]@561
  char *v1495; // [sp+2F4h] [bp-A2Ch]@561
  char *v1496; // [sp+2F8h] [bp-A28h]@561
  int v1497; // [sp+2FCh] [bp-A24h]@561
  signed int v1498; // [sp+300h] [bp-A20h]@561
  int v1499; // [sp+308h] [bp-A18h]@554
  int v1500; // [sp+310h] [bp-A10h]@554
  char *v1501; // [sp+314h] [bp-A0Ch]@554
  char *v1502; // [sp+318h] [bp-A08h]@554
  int v1503; // [sp+31Ch] [bp-A04h]@554
  signed int v1504; // [sp+320h] [bp-A00h]@554
  int v1505; // [sp+328h] [bp-9F8h]@547
  int v1506; // [sp+330h] [bp-9F0h]@547
  char *v1507; // [sp+334h] [bp-9ECh]@547
  char *v1508; // [sp+338h] [bp-9E8h]@547
  int v1509; // [sp+33Ch] [bp-9E4h]@547
  signed int v1510; // [sp+340h] [bp-9E0h]@547
  int v1511; // [sp+348h] [bp-9D8h]@540
  int v1512; // [sp+350h] [bp-9D0h]@540
  char *v1513; // [sp+354h] [bp-9CCh]@540
  char *v1514; // [sp+358h] [bp-9C8h]@540
  int v1515; // [sp+35Ch] [bp-9C4h]@540
  signed int v1516; // [sp+360h] [bp-9C0h]@540
  int v1517; // [sp+368h] [bp-9B8h]@533
  int v1518; // [sp+370h] [bp-9B0h]@533
  char *v1519; // [sp+374h] [bp-9ACh]@533
  char *v1520; // [sp+378h] [bp-9A8h]@533
  int v1521; // [sp+37Ch] [bp-9A4h]@533
  signed int v1522; // [sp+380h] [bp-9A0h]@533
  int v1523; // [sp+388h] [bp-998h]@526
  int v1524; // [sp+390h] [bp-990h]@526
  char *v1525; // [sp+394h] [bp-98Ch]@526
  char *v1526; // [sp+398h] [bp-988h]@526
  int v1527; // [sp+39Ch] [bp-984h]@526
  signed int v1528; // [sp+3A0h] [bp-980h]@526
  int v1529; // [sp+3A8h] [bp-978h]@519
  int v1530; // [sp+3B0h] [bp-970h]@519
  char *v1531; // [sp+3B4h] [bp-96Ch]@519
  char *v1532; // [sp+3B8h] [bp-968h]@519
  int v1533; // [sp+3BCh] [bp-964h]@519
  signed int v1534; // [sp+3C0h] [bp-960h]@519
  int v1535; // [sp+3C8h] [bp-958h]@512
  int v1536; // [sp+3D0h] [bp-950h]@512
  char *v1537; // [sp+3D4h] [bp-94Ch]@512
  char *v1538; // [sp+3D8h] [bp-948h]@512
  int v1539; // [sp+3DCh] [bp-944h]@512
  signed int v1540; // [sp+3E0h] [bp-940h]@512
  int v1541; // [sp+3E8h] [bp-938h]@505
  int v1542; // [sp+3F0h] [bp-930h]@505
  char *v1543; // [sp+3F4h] [bp-92Ch]@505
  char *v1544; // [sp+3F8h] [bp-928h]@505
  int v1545; // [sp+3FCh] [bp-924h]@505
  signed int v1546; // [sp+400h] [bp-920h]@505
  int v1547; // [sp+408h] [bp-918h]@498
  int v1548; // [sp+410h] [bp-910h]@498
  char *v1549; // [sp+414h] [bp-90Ch]@498
  char *v1550; // [sp+418h] [bp-908h]@498
  int v1551; // [sp+41Ch] [bp-904h]@498
  int v1552; // [sp+420h] [bp-900h]@498
  int v1553; // [sp+428h] [bp-8F8h]@491
  int v1554; // [sp+430h] [bp-8F0h]@491
  char *v1555; // [sp+434h] [bp-8ECh]@491
  char *v1556; // [sp+438h] [bp-8E8h]@491
  int v1557; // [sp+43Ch] [bp-8E4h]@491
  int v1558; // [sp+440h] [bp-8E0h]@491
  int v1559; // [sp+448h] [bp-8D8h]@484
  int v1560; // [sp+450h] [bp-8D0h]@484
  char *v1561; // [sp+454h] [bp-8CCh]@484
  char *v1562; // [sp+458h] [bp-8C8h]@484
  int v1563; // [sp+45Ch] [bp-8C4h]@484
  int v1564; // [sp+460h] [bp-8C0h]@484
  int v1565; // [sp+468h] [bp-8B8h]@477
  int v1566; // [sp+470h] [bp-8B0h]@477
  char *v1567; // [sp+474h] [bp-8ACh]@477
  char *v1568; // [sp+478h] [bp-8A8h]@477
  int v1569; // [sp+47Ch] [bp-8A4h]@477
  int v1570; // [sp+480h] [bp-8A0h]@477
  int v1571; // [sp+488h] [bp-898h]@470
  int v1572; // [sp+490h] [bp-890h]@470
  char *v1573; // [sp+494h] [bp-88Ch]@470
  char *v1574; // [sp+498h] [bp-888h]@470
  int v1575; // [sp+49Ch] [bp-884h]@470
  int v1576; // [sp+4A0h] [bp-880h]@470
  int v1577; // [sp+4A8h] [bp-878h]@463
  int v1578; // [sp+4B0h] [bp-870h]@463
  char *v1579; // [sp+4B4h] [bp-86Ch]@463
  char *v1580; // [sp+4B8h] [bp-868h]@463
  int v1581; // [sp+4BCh] [bp-864h]@463
  int v1582; // [sp+4C0h] [bp-860h]@463
  int v1583; // [sp+4C8h] [bp-858h]@456
  int v1584; // [sp+4D0h] [bp-850h]@456
  char *v1585; // [sp+4D4h] [bp-84Ch]@456
  char *v1586; // [sp+4D8h] [bp-848h]@456
  int v1587; // [sp+4DCh] [bp-844h]@456
  int v1588; // [sp+4E0h] [bp-840h]@456
  int v1589; // [sp+4E8h] [bp-838h]@449
  int v1590; // [sp+4F0h] [bp-830h]@449
  char *v1591; // [sp+4F4h] [bp-82Ch]@449
  char *v1592; // [sp+4F8h] [bp-828h]@449
  int v1593; // [sp+4FCh] [bp-824h]@449
  int v1594; // [sp+500h] [bp-820h]@449
  int v1595; // [sp+508h] [bp-818h]@442
  int v1596; // [sp+510h] [bp-810h]@442
  char *v1597; // [sp+514h] [bp-80Ch]@442
  char *v1598; // [sp+518h] [bp-808h]@442
  int v1599; // [sp+51Ch] [bp-804h]@442
  int v1600; // [sp+520h] [bp-800h]@442
  int v1601; // [sp+528h] [bp-7F8h]@435
  int v1602; // [sp+530h] [bp-7F0h]@435
  char *v1603; // [sp+534h] [bp-7ECh]@435
  char *v1604; // [sp+538h] [bp-7E8h]@435
  int v1605; // [sp+53Ch] [bp-7E4h]@435
  int v1606; // [sp+540h] [bp-7E0h]@435
  int v1607; // [sp+548h] [bp-7D8h]@428
  int v1608; // [sp+550h] [bp-7D0h]@428
  char *v1609; // [sp+554h] [bp-7CCh]@428
  char *v1610; // [sp+558h] [bp-7C8h]@428
  int v1611; // [sp+55Ch] [bp-7C4h]@428
  int v1612; // [sp+560h] [bp-7C0h]@428
  int v1613; // [sp+568h] [bp-7B8h]@421
  int v1614; // [sp+570h] [bp-7B0h]@421
  char *v1615; // [sp+574h] [bp-7ACh]@421
  char *v1616; // [sp+578h] [bp-7A8h]@421
  int v1617; // [sp+57Ch] [bp-7A4h]@421
  int v1618; // [sp+580h] [bp-7A0h]@421
  int v1619; // [sp+588h] [bp-798h]@414
  int v1620; // [sp+590h] [bp-790h]@414
  char *v1621; // [sp+594h] [bp-78Ch]@414
  char *v1622; // [sp+598h] [bp-788h]@414
  int v1623; // [sp+59Ch] [bp-784h]@414
  int v1624; // [sp+5A0h] [bp-780h]@414
  int v1625; // [sp+5A8h] [bp-778h]@407
  int v1626; // [sp+5B0h] [bp-770h]@407
  char *v1627; // [sp+5B4h] [bp-76Ch]@407
  char *v1628; // [sp+5B8h] [bp-768h]@407
  int v1629; // [sp+5BCh] [bp-764h]@407
  int v1630; // [sp+5C0h] [bp-760h]@407
  int v1631; // [sp+5C8h] [bp-758h]@400
  int v1632; // [sp+5D0h] [bp-750h]@400
  char *v1633; // [sp+5D4h] [bp-74Ch]@400
  char *v1634; // [sp+5D8h] [bp-748h]@400
  int v1635; // [sp+5DCh] [bp-744h]@400
  int v1636; // [sp+5E0h] [bp-740h]@400
  int v1637; // [sp+5E8h] [bp-738h]@393
  int v1638; // [sp+5F0h] [bp-730h]@393
  char *v1639; // [sp+5F4h] [bp-72Ch]@393
  char *v1640; // [sp+5F8h] [bp-728h]@393
  int v1641; // [sp+5FCh] [bp-724h]@393
  int v1642; // [sp+600h] [bp-720h]@393
  int v1643; // [sp+608h] [bp-718h]@386
  int v1644; // [sp+610h] [bp-710h]@386
  char *v1645; // [sp+614h] [bp-70Ch]@386
  char *v1646; // [sp+618h] [bp-708h]@386
  int v1647; // [sp+61Ch] [bp-704h]@386
  int v1648; // [sp+620h] [bp-700h]@386
  int v1649; // [sp+628h] [bp-6F8h]@379
  int v1650; // [sp+630h] [bp-6F0h]@379
  char *v1651; // [sp+634h] [bp-6ECh]@379
  char *v1652; // [sp+638h] [bp-6E8h]@379
  int v1653; // [sp+63Ch] [bp-6E4h]@379
  int v1654; // [sp+640h] [bp-6E0h]@379
  int v1655; // [sp+648h] [bp-6D8h]@372
  int v1656; // [sp+650h] [bp-6D0h]@372
  char *v1657; // [sp+654h] [bp-6CCh]@372
  char *v1658; // [sp+658h] [bp-6C8h]@372
  int v1659; // [sp+65Ch] [bp-6C4h]@372
  int v1660; // [sp+660h] [bp-6C0h]@372
  int v1661; // [sp+668h] [bp-6B8h]@365
  int v1662; // [sp+670h] [bp-6B0h]@365
  char *v1663; // [sp+674h] [bp-6ACh]@365
  char *v1664; // [sp+678h] [bp-6A8h]@365
  int v1665; // [sp+67Ch] [bp-6A4h]@365
  int v1666; // [sp+680h] [bp-6A0h]@365
  int v1667; // [sp+688h] [bp-698h]@358
  int v1668; // [sp+690h] [bp-690h]@358
  char *v1669; // [sp+694h] [bp-68Ch]@358
  char *v1670; // [sp+698h] [bp-688h]@358
  int v1671; // [sp+69Ch] [bp-684h]@358
  int v1672; // [sp+6A0h] [bp-680h]@358
  int v1673; // [sp+6A8h] [bp-678h]@351
  int v1674; // [sp+6B0h] [bp-670h]@351
  char *v1675; // [sp+6B4h] [bp-66Ch]@351
  char *v1676; // [sp+6B8h] [bp-668h]@351
  int v1677; // [sp+6BCh] [bp-664h]@351
  int v1678; // [sp+6C0h] [bp-660h]@351
  int v1679; // [sp+6C8h] [bp-658h]@344
  int v1680; // [sp+6D0h] [bp-650h]@344
  char *v1681; // [sp+6D4h] [bp-64Ch]@344
  char *v1682; // [sp+6D8h] [bp-648h]@344
  int v1683; // [sp+6DCh] [bp-644h]@344
  int v1684; // [sp+6E0h] [bp-640h]@344
  int v1685; // [sp+6E8h] [bp-638h]@337
  int v1686; // [sp+6F0h] [bp-630h]@337
  char *v1687; // [sp+6F4h] [bp-62Ch]@337
  char *v1688; // [sp+6F8h] [bp-628h]@337
  int v1689; // [sp+6FCh] [bp-624h]@337
  int v1690; // [sp+700h] [bp-620h]@337
  int v1691; // [sp+708h] [bp-618h]@330
  int v1692; // [sp+710h] [bp-610h]@330
  char *v1693; // [sp+714h] [bp-60Ch]@330
  char *v1694; // [sp+718h] [bp-608h]@330
  int v1695; // [sp+71Ch] [bp-604h]@330
  int v1696; // [sp+720h] [bp-600h]@330
  int v1697; // [sp+728h] [bp-5F8h]@323
  int v1698; // [sp+730h] [bp-5F0h]@323
  char *v1699; // [sp+734h] [bp-5ECh]@323
  char *v1700; // [sp+738h] [bp-5E8h]@323
  int v1701; // [sp+73Ch] [bp-5E4h]@323
  int v1702; // [sp+740h] [bp-5E0h]@323
  int v1703; // [sp+748h] [bp-5D8h]@316
  int v1704; // [sp+750h] [bp-5D0h]@316
  char *v1705; // [sp+754h] [bp-5CCh]@316
  char *v1706; // [sp+758h] [bp-5C8h]@316
  int v1707; // [sp+75Ch] [bp-5C4h]@316
  int v1708; // [sp+760h] [bp-5C0h]@316
  int v1709; // [sp+768h] [bp-5B8h]@309
  int v1710; // [sp+770h] [bp-5B0h]@309
  char *v1711; // [sp+774h] [bp-5ACh]@309
  char *v1712; // [sp+778h] [bp-5A8h]@309
  int v1713; // [sp+77Ch] [bp-5A4h]@309
  int v1714; // [sp+780h] [bp-5A0h]@309
  int v1715; // [sp+788h] [bp-598h]@302
  int v1716; // [sp+790h] [bp-590h]@302
  char *v1717; // [sp+794h] [bp-58Ch]@302
  char *v1718; // [sp+798h] [bp-588h]@302
  int v1719; // [sp+79Ch] [bp-584h]@302
  int v1720; // [sp+7A0h] [bp-580h]@302
  int v1721; // [sp+7A8h] [bp-578h]@295
  int v1722; // [sp+7B0h] [bp-570h]@295
  char *v1723; // [sp+7B4h] [bp-56Ch]@295
  char *v1724; // [sp+7B8h] [bp-568h]@295
  int v1725; // [sp+7BCh] [bp-564h]@295
  int v1726; // [sp+7C0h] [bp-560h]@295
  int v1727; // [sp+7C8h] [bp-558h]@288
  int v1728; // [sp+7D0h] [bp-550h]@288
  char *v1729; // [sp+7D4h] [bp-54Ch]@288
  char *v1730; // [sp+7D8h] [bp-548h]@288
  int v1731; // [sp+7DCh] [bp-544h]@288
  int v1732; // [sp+7E0h] [bp-540h]@288
  int v1733; // [sp+7E8h] [bp-538h]@281
  int v1734; // [sp+7F0h] [bp-530h]@281
  char *v1735; // [sp+7F4h] [bp-52Ch]@281
  char *v1736; // [sp+7F8h] [bp-528h]@281
  int v1737; // [sp+7FCh] [bp-524h]@281
  int v1738; // [sp+800h] [bp-520h]@281
  int v1739; // [sp+808h] [bp-518h]@274
  int v1740; // [sp+810h] [bp-510h]@274
  char *v1741; // [sp+814h] [bp-50Ch]@274
  char *v1742; // [sp+818h] [bp-508h]@274
  int v1743; // [sp+81Ch] [bp-504h]@274
  int v1744; // [sp+820h] [bp-500h]@274
  int v1745; // [sp+828h] [bp-4F8h]@267
  int v1746; // [sp+830h] [bp-4F0h]@267
  char *v1747; // [sp+834h] [bp-4ECh]@267
  char *v1748; // [sp+838h] [bp-4E8h]@267
  int v1749; // [sp+83Ch] [bp-4E4h]@267
  int v1750; // [sp+840h] [bp-4E0h]@267
  int v1751; // [sp+848h] [bp-4D8h]@260
  int v1752; // [sp+850h] [bp-4D0h]@260
  char *v1753; // [sp+854h] [bp-4CCh]@260
  char *v1754; // [sp+858h] [bp-4C8h]@260
  int v1755; // [sp+85Ch] [bp-4C4h]@260
  int v1756; // [sp+860h] [bp-4C0h]@260
  int v1757; // [sp+868h] [bp-4B8h]@253
  int v1758; // [sp+870h] [bp-4B0h]@253
  char *v1759; // [sp+874h] [bp-4ACh]@253
  char *v1760; // [sp+878h] [bp-4A8h]@253
  int v1761; // [sp+87Ch] [bp-4A4h]@253
  int v1762; // [sp+880h] [bp-4A0h]@253
  int v1763; // [sp+888h] [bp-498h]@246
  int v1764; // [sp+890h] [bp-490h]@246
  char *v1765; // [sp+894h] [bp-48Ch]@246
  char *v1766; // [sp+898h] [bp-488h]@246
  int v1767; // [sp+89Ch] [bp-484h]@246
  int v1768; // [sp+8A0h] [bp-480h]@246
  int v1769; // [sp+8A8h] [bp-478h]@239
  int v1770; // [sp+8B0h] [bp-470h]@239
  char *v1771; // [sp+8B4h] [bp-46Ch]@239
  char *v1772; // [sp+8B8h] [bp-468h]@239
  int v1773; // [sp+8BCh] [bp-464h]@239
  int v1774; // [sp+8C0h] [bp-460h]@239
  int v1775; // [sp+8C8h] [bp-458h]@232
  int v1776; // [sp+8D0h] [bp-450h]@232
  char *v1777; // [sp+8D4h] [bp-44Ch]@232
  char *v1778; // [sp+8D8h] [bp-448h]@232
  int v1779; // [sp+8DCh] [bp-444h]@232
  int v1780; // [sp+8E0h] [bp-440h]@232
  int v1781; // [sp+8E8h] [bp-438h]@225
  int v1782; // [sp+8F0h] [bp-430h]@225
  char *v1783; // [sp+8F4h] [bp-42Ch]@225
  char *v1784; // [sp+8F8h] [bp-428h]@225
  int v1785; // [sp+8FCh] [bp-424h]@225
  int v1786; // [sp+900h] [bp-420h]@225
  int v1787; // [sp+908h] [bp-418h]@218
  int v1788; // [sp+910h] [bp-410h]@218
  char *v1789; // [sp+914h] [bp-40Ch]@218
  char *v1790; // [sp+918h] [bp-408h]@218
  int v1791; // [sp+91Ch] [bp-404h]@218
  int v1792; // [sp+920h] [bp-400h]@218
  int v1793; // [sp+928h] [bp-3F8h]@211
  int v1794; // [sp+930h] [bp-3F0h]@211
  char *v1795; // [sp+934h] [bp-3ECh]@211
  char *v1796; // [sp+938h] [bp-3E8h]@211
  int v1797; // [sp+93Ch] [bp-3E4h]@211
  int v1798; // [sp+940h] [bp-3E0h]@211
  int v1799; // [sp+948h] [bp-3D8h]@204
  int v1800; // [sp+950h] [bp-3D0h]@204
  char *v1801; // [sp+954h] [bp-3CCh]@204
  char *v1802; // [sp+958h] [bp-3C8h]@204
  int v1803; // [sp+95Ch] [bp-3C4h]@204
  int v1804; // [sp+960h] [bp-3C0h]@204
  int v1805; // [sp+968h] [bp-3B8h]@197
  int v1806; // [sp+970h] [bp-3B0h]@197
  char *v1807; // [sp+974h] [bp-3ACh]@197
  char *v1808; // [sp+978h] [bp-3A8h]@197
  int v1809; // [sp+97Ch] [bp-3A4h]@197
  int v1810; // [sp+980h] [bp-3A0h]@197
  int v1811; // [sp+988h] [bp-398h]@190
  int v1812; // [sp+990h] [bp-390h]@190
  char *v1813; // [sp+994h] [bp-38Ch]@190
  char *v1814; // [sp+998h] [bp-388h]@190
  int v1815; // [sp+99Ch] [bp-384h]@190
  int v1816; // [sp+9A0h] [bp-380h]@190
  int v1817; // [sp+9A8h] [bp-378h]@183
  int v1818; // [sp+9B0h] [bp-370h]@183
  char *v1819; // [sp+9B4h] [bp-36Ch]@183
  char *v1820; // [sp+9B8h] [bp-368h]@183
  int v1821; // [sp+9BCh] [bp-364h]@183
  int v1822; // [sp+9C0h] [bp-360h]@183
  int v1823; // [sp+9C8h] [bp-358h]@176
  int v1824; // [sp+9D0h] [bp-350h]@176
  char *v1825; // [sp+9D4h] [bp-34Ch]@176
  char *v1826; // [sp+9D8h] [bp-348h]@176
  int v1827; // [sp+9DCh] [bp-344h]@176
  int v1828; // [sp+9E0h] [bp-340h]@176
  int v1829; // [sp+9E8h] [bp-338h]@169
  int v1830; // [sp+9F0h] [bp-330h]@169
  char *v1831; // [sp+9F4h] [bp-32Ch]@169
  char *v1832; // [sp+9F8h] [bp-328h]@169
  int v1833; // [sp+9FCh] [bp-324h]@169
  int v1834; // [sp+A00h] [bp-320h]@169
  int v1835; // [sp+A08h] [bp-318h]@162
  int v1836; // [sp+A10h] [bp-310h]@162
  char *v1837; // [sp+A14h] [bp-30Ch]@162
  char *v1838; // [sp+A18h] [bp-308h]@162
  int v1839; // [sp+A1Ch] [bp-304h]@162
  int v1840; // [sp+A20h] [bp-300h]@162
  int v1841; // [sp+A28h] [bp-2F8h]@155
  int v1842; // [sp+A30h] [bp-2F0h]@155
  char *v1843; // [sp+A34h] [bp-2ECh]@155
  char *v1844; // [sp+A38h] [bp-2E8h]@155
  int v1845; // [sp+A3Ch] [bp-2E4h]@155
  int v1846; // [sp+A40h] [bp-2E0h]@155
  int v1847; // [sp+A48h] [bp-2D8h]@148
  int v1848; // [sp+A50h] [bp-2D0h]@148
  char *v1849; // [sp+A54h] [bp-2CCh]@148
  char *v1850; // [sp+A58h] [bp-2C8h]@148
  int v1851; // [sp+A5Ch] [bp-2C4h]@148
  int v1852; // [sp+A60h] [bp-2C0h]@148
  int v1853; // [sp+A68h] [bp-2B8h]@141
  int v1854; // [sp+A70h] [bp-2B0h]@141
  char *v1855; // [sp+A74h] [bp-2ACh]@141
  char *v1856; // [sp+A78h] [bp-2A8h]@141
  int v1857; // [sp+A7Ch] [bp-2A4h]@141
  int v1858; // [sp+A80h] [bp-2A0h]@141
  int v1859; // [sp+A88h] [bp-298h]@134
  int v1860; // [sp+A90h] [bp-290h]@134
  char *v1861; // [sp+A94h] [bp-28Ch]@134
  char *v1862; // [sp+A98h] [bp-288h]@134
  int v1863; // [sp+A9Ch] [bp-284h]@134
  int v1864; // [sp+AA0h] [bp-280h]@134
  int v1865; // [sp+AA8h] [bp-278h]@127
  int v1866; // [sp+AB0h] [bp-270h]@127
  char *v1867; // [sp+AB4h] [bp-26Ch]@127
  char *v1868; // [sp+AB8h] [bp-268h]@127
  int v1869; // [sp+ABCh] [bp-264h]@127
  int v1870; // [sp+AC0h] [bp-260h]@127
  int v1871; // [sp+AC8h] [bp-258h]@120
  int v1872; // [sp+AD0h] [bp-250h]@120
  char *v1873; // [sp+AD4h] [bp-24Ch]@120
  char *v1874; // [sp+AD8h] [bp-248h]@120
  int v1875; // [sp+ADCh] [bp-244h]@120
  int v1876; // [sp+AE0h] [bp-240h]@120
  int v1877; // [sp+AE8h] [bp-238h]@113
  int v1878; // [sp+AF0h] [bp-230h]@113
  char *v1879; // [sp+AF4h] [bp-22Ch]@113
  char *v1880; // [sp+AF8h] [bp-228h]@113
  int v1881; // [sp+AFCh] [bp-224h]@113
  int v1882; // [sp+B00h] [bp-220h]@113
  int v1883; // [sp+B08h] [bp-218h]@106
  int v1884; // [sp+B10h] [bp-210h]@106
  char *v1885; // [sp+B14h] [bp-20Ch]@106
  char *v1886; // [sp+B18h] [bp-208h]@106
  int v1887; // [sp+B1Ch] [bp-204h]@106
  int v1888; // [sp+B20h] [bp-200h]@106
  int v1889; // [sp+B28h] [bp-1F8h]@99
  int v1890; // [sp+B30h] [bp-1F0h]@99
  char *v1891; // [sp+B34h] [bp-1ECh]@99
  char *v1892; // [sp+B38h] [bp-1E8h]@99
  int v1893; // [sp+B3Ch] [bp-1E4h]@99
  int v1894; // [sp+B40h] [bp-1E0h]@99
  int v1895; // [sp+B48h] [bp-1D8h]@92
  int v1896; // [sp+B50h] [bp-1D0h]@92
  char *v1897; // [sp+B54h] [bp-1CCh]@92
  char *v1898; // [sp+B58h] [bp-1C8h]@92
  int v1899; // [sp+B5Ch] [bp-1C4h]@92
  int v1900; // [sp+B60h] [bp-1C0h]@92
  int v1901; // [sp+B68h] [bp-1B8h]@85
  int v1902; // [sp+B70h] [bp-1B0h]@85
  char *v1903; // [sp+B74h] [bp-1ACh]@85
  char *v1904; // [sp+B78h] [bp-1A8h]@85
  int v1905; // [sp+B7Ch] [bp-1A4h]@85
  int v1906; // [sp+B80h] [bp-1A0h]@85
  int v1907; // [sp+B88h] [bp-198h]@78
  int v1908; // [sp+B90h] [bp-190h]@78
  char *v1909; // [sp+B94h] [bp-18Ch]@78
  char *v1910; // [sp+B98h] [bp-188h]@78
  int v1911; // [sp+B9Ch] [bp-184h]@78
  int v1912; // [sp+BA0h] [bp-180h]@78
  int v1913; // [sp+BA8h] [bp-178h]@71
  int v1914; // [sp+BB0h] [bp-170h]@71
  char *v1915; // [sp+BB4h] [bp-16Ch]@71
  char *v1916; // [sp+BB8h] [bp-168h]@71
  int v1917; // [sp+BBCh] [bp-164h]@71
  int v1918; // [sp+BC0h] [bp-160h]@71
  int v1919; // [sp+BC8h] [bp-158h]@64
  int v1920; // [sp+BD0h] [bp-150h]@64
  char *v1921; // [sp+BD4h] [bp-14Ch]@64
  char *v1922; // [sp+BD8h] [bp-148h]@64
  int v1923; // [sp+BDCh] [bp-144h]@64
  int v1924; // [sp+BE0h] [bp-140h]@64
  int v1925; // [sp+BE8h] [bp-138h]@57
  int v1926; // [sp+BF0h] [bp-130h]@57
  char *v1927; // [sp+BF4h] [bp-12Ch]@57
  char *v1928; // [sp+BF8h] [bp-128h]@57
  int v1929; // [sp+BFCh] [bp-124h]@57
  int v1930; // [sp+C00h] [bp-120h]@57
  int v1931; // [sp+C08h] [bp-118h]@50
  int v1932; // [sp+C10h] [bp-110h]@50
  char *v1933; // [sp+C14h] [bp-10Ch]@50
  char *v1934; // [sp+C18h] [bp-108h]@50
  int v1935; // [sp+C1Ch] [bp-104h]@50
  int v1936; // [sp+C20h] [bp-100h]@50
  int v1937; // [sp+C28h] [bp-F8h]@43
  int v1938; // [sp+C30h] [bp-F0h]@43
  char *v1939; // [sp+C34h] [bp-ECh]@43
  char *v1940; // [sp+C38h] [bp-E8h]@43
  int v1941; // [sp+C3Ch] [bp-E4h]@43
  int v1942; // [sp+C40h] [bp-E0h]@43
  int v1943; // [sp+C48h] [bp-D8h]@36
  int v1944; // [sp+C50h] [bp-D0h]@36
  char *v1945; // [sp+C54h] [bp-CCh]@36
  char *v1946; // [sp+C58h] [bp-C8h]@36
  int v1947; // [sp+C5Ch] [bp-C4h]@36
  int v1948; // [sp+C60h] [bp-C0h]@36
  int v1949; // [sp+C68h] [bp-B8h]@29
  int v1950; // [sp+C70h] [bp-B0h]@29
  char *v1951; // [sp+C74h] [bp-ACh]@29
  char *v1952; // [sp+C78h] [bp-A8h]@29
  int v1953; // [sp+C7Ch] [bp-A4h]@29
  int v1954; // [sp+C80h] [bp-A0h]@29
  int v1955; // [sp+C88h] [bp-98h]@22
  int v1956; // [sp+C90h] [bp-90h]@22
  char *v1957; // [sp+C94h] [bp-8Ch]@22
  char *v1958; // [sp+C98h] [bp-88h]@22
  int v1959; // [sp+C9Ch] [bp-84h]@22
  int v1960; // [sp+CA0h] [bp-80h]@22
  int v1961; // [sp+CA8h] [bp-78h]@15
  int v1962; // [sp+CB0h] [bp-70h]@15
  char *v1963; // [sp+CB4h] [bp-6Ch]@15
  char *v1964; // [sp+CB8h] [bp-68h]@15
  int v1965; // [sp+CBCh] [bp-64h]@15
  int v1966; // [sp+CC0h] [bp-60h]@15
  int v1967; // [sp+CC8h] [bp-58h]@8
  int v1968; // [sp+CD0h] [bp-50h]@8
  char *v1969; // [sp+CD4h] [bp-4Ch]@8
  char *v1970; // [sp+CD8h] [bp-48h]@8
  int v1971; // [sp+CDCh] [bp-44h]@8
  int v1972; // [sp+CE0h] [bp-40h]@8
  int v1973; // [sp+CE8h] [bp-38h]@1
  int v1974; // [sp+CF0h] [bp-30h]@1
  char *v1975; // [sp+CF4h] [bp-2Ch]@1
  char *v1976; // [sp+CF8h] [bp-28h]@1
  int v1977; // [sp+CFCh] [bp-24h]@1
  int v1978; // [sp+D00h] [bp-20h]@1

  v2 = a2;
  sub_119C884((void **)&v1974, "button.holo_zoom_in");
  sub_119C884((void **)&v1973, "closer");
  sub_119C854((int *)&v1975, &v1974);
  sub_119C854((int *)&v1976, &v1973);
  v1977 = 3;
  v1978 = 1051931443;
  v3 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<VoiceCommandData,std::allocator<VoiceCommandData>>::_M_emplace_back_aux<VoiceCommandData>(
      (unsigned __int64 *)v2,
      (int)&v1975);
  }
  else
    *(_DWORD *)v3 = v1975;
    v1975 = (char *)&unk_28898CC;
    *(_DWORD *)(v3 + 4) = v1976;
    v1976 = (char *)&unk_28898CC;
    HIDWORD(v3) = v1978;
    *(_DWORD *)(v3 + 8) = v1977;
    *(_DWORD *)(v3 + 12) = HIDWORD(v3);
    *(_DWORD *)(v2 + 4) += 16;
  v4 = v1976 - 12;
  if ( (int *)(v1976 - 12) != &dword_28898C0 )
    v523 = (unsigned int *)(v1976 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v524 = __ldrex(v523);
      while ( __strex(v524 - 1, v523) );
    }
    else
      v524 = (*v523)--;
    if ( v524 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  v5 = v1975 - 12;
  if ( (int *)(v1975 - 12) != &dword_28898C0 )
    v525 = (unsigned int *)(v1975 - 4);
        v526 = __ldrex(v525);
      while ( __strex(v526 - 1, v525) );
      v526 = (*v525)--;
    if ( v526 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = (void *)(v1973 - 12);
  if ( (int *)(v1973 - 12) != &dword_28898C0 )
    v527 = (unsigned int *)(v1973 - 4);
        v528 = __ldrex(v527);
      while ( __strex(v528 - 1, v527) );
      v528 = (*v527)--;
    if ( v528 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = (void *)(v1974 - 12);
  if ( (int *)(v1974 - 12) != &dword_28898C0 )
    v529 = (unsigned int *)(v1974 - 4);
        v530 = __ldrex(v529);
      while ( __strex(v530 - 1, v529) );
      v530 = (*v529)--;
    if ( v530 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v1968, "button.holo_zoom_in");
  sub_119C884((void **)&v1967, "closer");
  sub_119C854((int *)&v1969, &v1968);
  sub_119C854((int *)&v1970, &v1967);
  v1971 = 2;
  v1972 = 1051931443;
  v8 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v8 == HIDWORD(v8) )
      (int)&v1969);
    *(_DWORD *)v8 = v1969;
    v1969 = (char *)&unk_28898CC;
    *(_DWORD *)(v8 + 4) = v1970;
    v1970 = (char *)&unk_28898CC;
    HIDWORD(v8) = v1972;
    *(_DWORD *)(v8 + 8) = v1971;
    *(_DWORD *)(v8 + 12) = HIDWORD(v8);
  v9 = v1970 - 12;
  if ( (int *)(v1970 - 12) != &dword_28898C0 )
    v531 = (unsigned int *)(v1970 - 4);
        v532 = __ldrex(v531);
      while ( __strex(v532 - 1, v531) );
      v532 = (*v531)--;
    if ( v532 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = v1969 - 12;
  if ( (int *)(v1969 - 12) != &dword_28898C0 )
    v533 = (unsigned int *)(v1969 - 4);
        v534 = __ldrex(v533);
      while ( __strex(v534 - 1, v533) );
      v534 = (*v533)--;
    if ( v534 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (void *)(v1967 - 12);
  if ( (int *)(v1967 - 12) != &dword_28898C0 )
    v535 = (unsigned int *)(v1967 - 4);
        v536 = __ldrex(v535);
      while ( __strex(v536 - 1, v535) );
      v536 = (*v535)--;
    if ( v536 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (void *)(v1968 - 12);
  if ( (int *)(v1968 - 12) != &dword_28898C0 )
    v537 = (unsigned int *)(v1968 - 4);
        v538 = __ldrex(v537);
      while ( __strex(v538 - 1, v537) );
      v538 = (*v537)--;
    if ( v538 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  sub_119C884((void **)&v1962, "button.holo_zoom_out");
  sub_119C884((void **)&v1961, "back");
  sub_119C854((int *)&v1963, &v1962);
  sub_119C854((int *)&v1964, &v1961);
  v1965 = 3;
  v1966 = 1051931443;
  v13 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v13 == HIDWORD(v13) )
      (int)&v1963);
    *(_DWORD *)v13 = v1963;
    v1963 = (char *)&unk_28898CC;
    *(_DWORD *)(v13 + 4) = v1964;
    v1964 = (char *)&unk_28898CC;
    HIDWORD(v13) = v1966;
    *(_DWORD *)(v13 + 8) = v1965;
    *(_DWORD *)(v13 + 12) = HIDWORD(v13);
  v14 = v1964 - 12;
  if ( (int *)(v1964 - 12) != &dword_28898C0 )
    v539 = (unsigned int *)(v1964 - 4);
        v540 = __ldrex(v539);
      while ( __strex(v540 - 1, v539) );
      v540 = (*v539)--;
    if ( v540 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = v1963 - 12;
  if ( (int *)(v1963 - 12) != &dword_28898C0 )
    v541 = (unsigned int *)(v1963 - 4);
        v542 = __ldrex(v541);
      while ( __strex(v542 - 1, v541) );
      v542 = (*v541)--;
    if ( v542 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (void *)(v1961 - 12);
  if ( (int *)(v1961 - 12) != &dword_28898C0 )
    v543 = (unsigned int *)(v1961 - 4);
        v544 = __ldrex(v543);
      while ( __strex(v544 - 1, v543) );
      v544 = (*v543)--;
    if ( v544 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = (void *)(v1962 - 12);
  if ( (int *)(v1962 - 12) != &dword_28898C0 )
    v545 = (unsigned int *)(v1962 - 4);
        v546 = __ldrex(v545);
      while ( __strex(v546 - 1, v545) );
      v546 = (*v545)--;
    if ( v546 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v1956, "button.holo_zoom_out");
  sub_119C884((void **)&v1955, "back");
  sub_119C854((int *)&v1957, &v1956);
  sub_119C854((int *)&v1958, &v1955);
  v1959 = 2;
  v1960 = 1051931443;
  v18 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v18 == HIDWORD(v18) )
      (int)&v1957);
    *(_DWORD *)v18 = v1957;
    v1957 = (char *)&unk_28898CC;
    *(_DWORD *)(v18 + 4) = v1958;
    v1958 = (char *)&unk_28898CC;
    HIDWORD(v18) = v1960;
    *(_DWORD *)(v18 + 8) = v1959;
    *(_DWORD *)(v18 + 12) = HIDWORD(v18);
  v19 = v1958 - 12;
  if ( (int *)(v1958 - 12) != &dword_28898C0 )
    v547 = (unsigned int *)(v1958 - 4);
        v548 = __ldrex(v547);
      while ( __strex(v548 - 1, v547) );
      v548 = (*v547)--;
    if ( v548 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v20 = v1957 - 12;
  if ( (int *)(v1957 - 12) != &dword_28898C0 )
    v549 = (unsigned int *)(v1957 - 4);
        v550 = __ldrex(v549);
      while ( __strex(v550 - 1, v549) );
      v550 = (*v549)--;
    if ( v550 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = (void *)(v1955 - 12);
  if ( (int *)(v1955 - 12) != &dword_28898C0 )
    v551 = (unsigned int *)(v1955 - 4);
        v552 = __ldrex(v551);
      while ( __strex(v552 - 1, v551) );
      v552 = (*v551)--;
    if ( v552 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = (void *)(v1956 - 12);
  if ( (int *)(v1956 - 12) != &dword_28898C0 )
    v553 = (unsigned int *)(v1956 - 4);
        v554 = __ldrex(v553);
      while ( __strex(v554 - 1, v553) );
      v554 = (*v553)--;
    if ( v554 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  sub_119C884((void **)&v1950, "button.holo_zoom_max");
  sub_119C884((void **)&v1949, "close up");
  sub_119C854((int *)&v1951, &v1950);
  sub_119C854((int *)&v1952, &v1949);
  v1953 = 3;
  v1954 = 1051931443;
  v23 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v23 == HIDWORD(v23) )
      (int)&v1951);
    *(_DWORD *)v23 = v1951;
    v1951 = (char *)&unk_28898CC;
    *(_DWORD *)(v23 + 4) = v1952;
    v1952 = (char *)&unk_28898CC;
    HIDWORD(v23) = v1954;
    *(_DWORD *)(v23 + 8) = v1953;
    *(_DWORD *)(v23 + 12) = HIDWORD(v23);
  v24 = v1952 - 12;
  if ( (int *)(v1952 - 12) != &dword_28898C0 )
    v555 = (unsigned int *)(v1952 - 4);
        v556 = __ldrex(v555);
      while ( __strex(v556 - 1, v555) );
      v556 = (*v555)--;
    if ( v556 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = v1951 - 12;
  if ( (int *)(v1951 - 12) != &dword_28898C0 )
    v557 = (unsigned int *)(v1951 - 4);
        v558 = __ldrex(v557);
      while ( __strex(v558 - 1, v557) );
      v558 = (*v557)--;
    if ( v558 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  v26 = (void *)(v1949 - 12);
  if ( (int *)(v1949 - 12) != &dword_28898C0 )
    v559 = (unsigned int *)(v1949 - 4);
        v560 = __ldrex(v559);
      while ( __strex(v560 - 1, v559) );
      v560 = (*v559)--;
    if ( v560 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  v27 = (void *)(v1950 - 12);
  if ( (int *)(v1950 - 12) != &dword_28898C0 )
    v561 = (unsigned int *)(v1950 - 4);
        v562 = __ldrex(v561);
      while ( __strex(v562 - 1, v561) );
      v562 = (*v561)--;
    if ( v562 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  sub_119C884((void **)&v1944, "button.holo_zoom_max");
  sub_119C884((void **)&v1943, "close up");
  sub_119C854((int *)&v1945, &v1944);
  sub_119C854((int *)&v1946, &v1943);
  v1947 = 2;
  v1948 = 1051931443;
  v28 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v28 == HIDWORD(v28) )
      (int)&v1945);
    *(_DWORD *)v28 = v1945;
    v1945 = (char *)&unk_28898CC;
    *(_DWORD *)(v28 + 4) = v1946;
    v1946 = (char *)&unk_28898CC;
    HIDWORD(v28) = v1948;
    *(_DWORD *)(v28 + 8) = v1947;
    *(_DWORD *)(v28 + 12) = HIDWORD(v28);
  v29 = v1946 - 12;
  if ( (int *)(v1946 - 12) != &dword_28898C0 )
    v563 = (unsigned int *)(v1946 - 4);
        v564 = __ldrex(v563);
      while ( __strex(v564 - 1, v563) );
      v564 = (*v563)--;
    if ( v564 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  v30 = v1945 - 12;
  if ( (int *)(v1945 - 12) != &dword_28898C0 )
    v565 = (unsigned int *)(v1945 - 4);
        v566 = __ldrex(v565);
      while ( __strex(v566 - 1, v565) );
      v566 = (*v565)--;
    if ( v566 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = (void *)(v1943 - 12);
  if ( (int *)(v1943 - 12) != &dword_28898C0 )
    v567 = (unsigned int *)(v1943 - 4);
        v568 = __ldrex(v567);
      while ( __strex(v568 - 1, v567) );
      v568 = (*v567)--;
    if ( v568 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  v32 = (void *)(v1944 - 12);
  if ( (int *)(v1944 - 12) != &dword_28898C0 )
    v569 = (unsigned int *)(v1944 - 4);
        v570 = __ldrex(v569);
      while ( __strex(v570 - 1, v569) );
      v570 = (*v569)--;
    if ( v570 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
  sub_119C884((void **)&v1938, "button.holo_zoom_min");
  sub_119C884((void **)&v1937, "overview");
  sub_119C854((int *)&v1939, &v1938);
  sub_119C854((int *)&v1940, &v1937);
  v1941 = 3;
  v1942 = 1048576000;
  v33 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v33 == HIDWORD(v33) )
      (int)&v1939);
    *(_DWORD *)v33 = v1939;
    v1939 = (char *)&unk_28898CC;
    *(_DWORD *)(v33 + 4) = v1940;
    v1940 = (char *)&unk_28898CC;
    HIDWORD(v33) = v1942;
    *(_DWORD *)(v33 + 8) = v1941;
    *(_DWORD *)(v33 + 12) = HIDWORD(v33);
  v34 = v1940 - 12;
  if ( (int *)(v1940 - 12) != &dword_28898C0 )
    v571 = (unsigned int *)(v1940 - 4);
        v572 = __ldrex(v571);
      while ( __strex(v572 - 1, v571) );
      v572 = (*v571)--;
    if ( v572 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  v35 = v1939 - 12;
  if ( (int *)(v1939 - 12) != &dword_28898C0 )
    v573 = (unsigned int *)(v1939 - 4);
        v574 = __ldrex(v573);
      while ( __strex(v574 - 1, v573) );
      v574 = (*v573)--;
    if ( v574 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
  v36 = (void *)(v1937 - 12);
  if ( (int *)(v1937 - 12) != &dword_28898C0 )
    v575 = (unsigned int *)(v1937 - 4);
        v576 = __ldrex(v575);
      while ( __strex(v576 - 1, v575) );
      v576 = (*v575)--;
    if ( v576 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  v37 = (void *)(v1938 - 12);
  if ( (int *)(v1938 - 12) != &dword_28898C0 )
    v577 = (unsigned int *)(v1938 - 4);
        v578 = __ldrex(v577);
      while ( __strex(v578 - 1, v577) );
      v578 = (*v577)--;
    if ( v578 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  sub_119C884((void **)&v1932, "button.holo_zoom_min");
  sub_119C884((void **)&v1931, "overview");
  sub_119C854((int *)&v1933, &v1932);
  sub_119C854((int *)&v1934, &v1931);
  v1935 = 2;
  v1936 = 1048576000;
  v38 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v38 == HIDWORD(v38) )
      (int)&v1933);
    *(_DWORD *)v38 = v1933;
    v1933 = (char *)&unk_28898CC;
    *(_DWORD *)(v38 + 4) = v1934;
    v1934 = (char *)&unk_28898CC;
    HIDWORD(v38) = v1936;
    *(_DWORD *)(v38 + 8) = v1935;
    *(_DWORD *)(v38 + 12) = HIDWORD(v38);
  v39 = v1934 - 12;
  if ( (int *)(v1934 - 12) != &dword_28898C0 )
    v579 = (unsigned int *)(v1934 - 4);
        v580 = __ldrex(v579);
      while ( __strex(v580 - 1, v579) );
      v580 = (*v579)--;
    if ( v580 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  v40 = v1933 - 12;
  if ( (int *)(v1933 - 12) != &dword_28898C0 )
    v581 = (unsigned int *)(v1933 - 4);
        v582 = __ldrex(v581);
      while ( __strex(v582 - 1, v581) );
      v582 = (*v581)--;
    if ( v582 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  v41 = (void *)(v1931 - 12);
  if ( (int *)(v1931 - 12) != &dword_28898C0 )
    v583 = (unsigned int *)(v1931 - 4);
        v584 = __ldrex(v583);
      while ( __strex(v584 - 1, v583) );
      v584 = (*v583)--;
    if ( v584 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v41);
  v42 = (void *)(v1932 - 12);
  if ( (int *)(v1932 - 12) != &dword_28898C0 )
    v585 = (unsigned int *)(v1932 - 4);
        v586 = __ldrex(v585);
      while ( __strex(v586 - 1, v585) );
      v586 = (*v585)--;
    if ( v586 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
  sub_119C884((void **)&v1926, "button.holo_lightningbolt");
  sub_119C884((void **)&v1925, "lightningstrike");
  sub_119C854((int *)&v1927, &v1926);
  sub_119C854((int *)&v1928, &v1925);
  v1929 = 3;
  v1930 = 1045220557;
  v43 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v43 == HIDWORD(v43) )
      (int)&v1927);
    *(_DWORD *)v43 = v1927;
    v1927 = (char *)&unk_28898CC;
    *(_DWORD *)(v43 + 4) = v1928;
    v1928 = (char *)&unk_28898CC;
    HIDWORD(v43) = v1930;
    *(_DWORD *)(v43 + 8) = v1929;
    *(_DWORD *)(v43 + 12) = HIDWORD(v43);
  v44 = v1928 - 12;
  if ( (int *)(v1928 - 12) != &dword_28898C0 )
    v587 = (unsigned int *)(v1928 - 4);
        v588 = __ldrex(v587);
      while ( __strex(v588 - 1, v587) );
      v588 = (*v587)--;
    if ( v588 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v44);
  v45 = v1927 - 12;
  if ( (int *)(v1927 - 12) != &dword_28898C0 )
    v589 = (unsigned int *)(v1927 - 4);
        v590 = __ldrex(v589);
      while ( __strex(v590 - 1, v589) );
      v590 = (*v589)--;
    if ( v590 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v45);
  v46 = (void *)(v1925 - 12);
  if ( (int *)(v1925 - 12) != &dword_28898C0 )
    v591 = (unsigned int *)(v1925 - 4);
        v592 = __ldrex(v591);
      while ( __strex(v592 - 1, v591) );
      v592 = (*v591)--;
    if ( v592 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v46);
  v47 = (void *)(v1926 - 12);
  if ( (int *)(v1926 - 12) != &dword_28898C0 )
    v593 = (unsigned int *)(v1926 - 4);
        v594 = __ldrex(v593);
      while ( __strex(v594 - 1, v593) );
      v594 = (*v593)--;
    if ( v594 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v47);
  sub_119C884((void **)&v1920, "button.holo_lightningbolt");
  sub_119C884((void **)&v1919, "lightning strike");
  sub_119C854((int *)&v1921, &v1920);
  sub_119C854((int *)&v1922, &v1919);
  v1923 = 3;
  v1924 = 1045220557;
  v48 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v48 == HIDWORD(v48) )
      (int)&v1921);
    *(_DWORD *)v48 = v1921;
    v1921 = (char *)&unk_28898CC;
    *(_DWORD *)(v48 + 4) = v1922;
    v1922 = (char *)&unk_28898CC;
    HIDWORD(v48) = v1924;
    *(_DWORD *)(v48 + 8) = v1923;
    *(_DWORD *)(v48 + 12) = HIDWORD(v48);
  v49 = v1922 - 12;
  if ( (int *)(v1922 - 12) != &dword_28898C0 )
    v595 = (unsigned int *)(v1922 - 4);
        v596 = __ldrex(v595);
      while ( __strex(v596 - 1, v595) );
      v596 = (*v595)--;
    if ( v596 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v49);
  v50 = v1921 - 12;
  if ( (int *)(v1921 - 12) != &dword_28898C0 )
    v597 = (unsigned int *)(v1921 - 4);
        v598 = __ldrex(v597);
      while ( __strex(v598 - 1, v597) );
      v598 = (*v597)--;
    if ( v598 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v50);
  v51 = (void *)(v1919 - 12);
  if ( (int *)(v1919 - 12) != &dword_28898C0 )
    v599 = (unsigned int *)(v1919 - 4);
        v600 = __ldrex(v599);
      while ( __strex(v600 - 1, v599) );
      v600 = (*v599)--;
    if ( v600 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v51);
  v52 = (void *)(v1920 - 12);
  if ( (int *)(v1920 - 12) != &dword_28898C0 )
    v601 = (unsigned int *)(v1920 - 4);
        v602 = __ldrex(v601);
      while ( __strex(v602 - 1, v601) );
      v602 = (*v601)--;
    if ( v602 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v52);
  sub_119C884((void **)&v1914, "button.holo_lightningbolt");
  sub_119C884((void **)&v1913, "lightingstrike");
  sub_119C854((int *)&v1915, &v1914);
  sub_119C854((int *)&v1916, &v1913);
  v1917 = 3;
  v1918 = 1045220557;
  v53 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v53 == HIDWORD(v53) )
      (int)&v1915);
    *(_DWORD *)v53 = v1915;
    v1915 = (char *)&unk_28898CC;
    *(_DWORD *)(v53 + 4) = v1916;
    v1916 = (char *)&unk_28898CC;
    HIDWORD(v53) = v1918;
    *(_DWORD *)(v53 + 8) = v1917;
    *(_DWORD *)(v53 + 12) = HIDWORD(v53);
  v54 = v1916 - 12;
  if ( (int *)(v1916 - 12) != &dword_28898C0 )
    v603 = (unsigned int *)(v1916 - 4);
        v604 = __ldrex(v603);
      while ( __strex(v604 - 1, v603) );
      v604 = (*v603)--;
    if ( v604 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v54);
  v55 = v1915 - 12;
  if ( (int *)(v1915 - 12) != &dword_28898C0 )
    v605 = (unsigned int *)(v1915 - 4);
        v606 = __ldrex(v605);
      while ( __strex(v606 - 1, v605) );
      v606 = (*v605)--;
    if ( v606 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v55);
  v56 = (void *)(v1913 - 12);
  if ( (int *)(v1913 - 12) != &dword_28898C0 )
    v607 = (unsigned int *)(v1913 - 4);
        v608 = __ldrex(v607);
      while ( __strex(v608 - 1, v607) );
      v608 = (*v607)--;
    if ( v608 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v56);
  v57 = (void *)(v1914 - 12);
  if ( (int *)(v1914 - 12) != &dword_28898C0 )
    v609 = (unsigned int *)(v1914 - 4);
        v610 = __ldrex(v609);
      while ( __strex(v610 - 1, v609) );
      v610 = (*v609)--;
    if ( v610 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v57);
  sub_119C884((void **)&v1908, "button.holo_lightningbolt");
  sub_119C884((void **)&v1907, "lighting strike");
  sub_119C854((int *)&v1909, &v1908);
  sub_119C854((int *)&v1910, &v1907);
  v1911 = 3;
  v1912 = 1045220557;
  v58 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v58 == HIDWORD(v58) )
      (int)&v1909);
    *(_DWORD *)v58 = v1909;
    v1909 = (char *)&unk_28898CC;
    *(_DWORD *)(v58 + 4) = v1910;
    v1910 = (char *)&unk_28898CC;
    HIDWORD(v58) = v1912;
    *(_DWORD *)(v58 + 8) = v1911;
    *(_DWORD *)(v58 + 12) = HIDWORD(v58);
  v59 = v1910 - 12;
  if ( (int *)(v1910 - 12) != &dword_28898C0 )
    v611 = (unsigned int *)(v1910 - 4);
        v612 = __ldrex(v611);
      while ( __strex(v612 - 1, v611) );
      v612 = (*v611)--;
    if ( v612 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v59);
  v60 = v1909 - 12;
  if ( (int *)(v1909 - 12) != &dword_28898C0 )
    v613 = (unsigned int *)(v1909 - 4);
        v614 = __ldrex(v613);
      while ( __strex(v614 - 1, v613) );
      v614 = (*v613)--;
    if ( v614 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v60);
  v61 = (void *)(v1907 - 12);
  if ( (int *)(v1907 - 12) != &dword_28898C0 )
    v615 = (unsigned int *)(v1907 - 4);
        v616 = __ldrex(v615);
      while ( __strex(v616 - 1, v615) );
      v616 = (*v615)--;
    if ( v616 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v61);
  v62 = (void *)(v1908 - 12);
  if ( (int *)(v1908 - 12) != &dword_28898C0 )
    v617 = (unsigned int *)(v1908 - 4);
        v618 = __ldrex(v617);
      while ( __strex(v618 - 1, v617) );
      v618 = (*v617)--;
    if ( v618 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v62);
  sub_119C884((void **)&v1902, "button.holo_lightningbolt");
  sub_119C884((void **)&v1901, "lightningstrike");
  sub_119C854((int *)&v1903, &v1902);
  sub_119C854((int *)&v1904, &v1901);
  v1905 = 2;
  v1906 = 1045220557;
  v63 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v63 == HIDWORD(v63) )
      (int)&v1903);
    *(_DWORD *)v63 = v1903;
    v1903 = (char *)&unk_28898CC;
    *(_DWORD *)(v63 + 4) = v1904;
    v1904 = (char *)&unk_28898CC;
    HIDWORD(v63) = v1906;
    *(_DWORD *)(v63 + 8) = v1905;
    *(_DWORD *)(v63 + 12) = HIDWORD(v63);
  v64 = v1904 - 12;
  if ( (int *)(v1904 - 12) != &dword_28898C0 )
    v619 = (unsigned int *)(v1904 - 4);
        v620 = __ldrex(v619);
      while ( __strex(v620 - 1, v619) );
      v620 = (*v619)--;
    if ( v620 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v64);
  v65 = v1903 - 12;
  if ( (int *)(v1903 - 12) != &dword_28898C0 )
    v621 = (unsigned int *)(v1903 - 4);
        v622 = __ldrex(v621);
      while ( __strex(v622 - 1, v621) );
      v622 = (*v621)--;
    if ( v622 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v65);
  v66 = (void *)(v1901 - 12);
  if ( (int *)(v1901 - 12) != &dword_28898C0 )
    v623 = (unsigned int *)(v1901 - 4);
        v624 = __ldrex(v623);
      while ( __strex(v624 - 1, v623) );
      v624 = (*v623)--;
    if ( v624 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v66);
  v67 = (void *)(v1902 - 12);
  if ( (int *)(v1902 - 12) != &dword_28898C0 )
    v625 = (unsigned int *)(v1902 - 4);
        v626 = __ldrex(v625);
      while ( __strex(v626 - 1, v625) );
      v626 = (*v625)--;
    if ( v626 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v67);
  sub_119C884((void **)&v1896, "button.holo_lightningbolt");
  sub_119C884((void **)&v1895, "lightning strike");
  sub_119C854((int *)&v1897, &v1896);
  sub_119C854((int *)&v1898, &v1895);
  v1899 = 2;
  v1900 = 1045220557;
  v68 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v68 == HIDWORD(v68) )
      (int)&v1897);
    *(_DWORD *)v68 = v1897;
    v1897 = (char *)&unk_28898CC;
    *(_DWORD *)(v68 + 4) = v1898;
    v1898 = (char *)&unk_28898CC;
    HIDWORD(v68) = v1900;
    *(_DWORD *)(v68 + 8) = v1899;
    *(_DWORD *)(v68 + 12) = HIDWORD(v68);
  v69 = v1898 - 12;
  if ( (int *)(v1898 - 12) != &dword_28898C0 )
    v627 = (unsigned int *)(v1898 - 4);
        v628 = __ldrex(v627);
      while ( __strex(v628 - 1, v627) );
      v628 = (*v627)--;
    if ( v628 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v69);
  v70 = v1897 - 12;
  if ( (int *)(v1897 - 12) != &dword_28898C0 )
    v629 = (unsigned int *)(v1897 - 4);
        v630 = __ldrex(v629);
      while ( __strex(v630 - 1, v629) );
      v630 = (*v629)--;
    if ( v630 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v70);
  v71 = (void *)(v1895 - 12);
  if ( (int *)(v1895 - 12) != &dword_28898C0 )
    v631 = (unsigned int *)(v1895 - 4);
        v632 = __ldrex(v631);
      while ( __strex(v632 - 1, v631) );
      v632 = (*v631)--;
    if ( v632 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v71);
  v72 = (void *)(v1896 - 12);
  if ( (int *)(v1896 - 12) != &dword_28898C0 )
    v633 = (unsigned int *)(v1896 - 4);
        v634 = __ldrex(v633);
      while ( __strex(v634 - 1, v633) );
      v634 = (*v633)--;
    if ( v634 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v72);
  sub_119C884((void **)&v1890, "button.holo_lightningbolt");
  sub_119C884((void **)&v1889, "lightingstrike");
  sub_119C854((int *)&v1891, &v1890);
  sub_119C854((int *)&v1892, &v1889);
  v1893 = 2;
  v1894 = 1045220557;
  v73 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v73 == HIDWORD(v73) )
      (int)&v1891);
    *(_DWORD *)v73 = v1891;
    v1891 = (char *)&unk_28898CC;
    *(_DWORD *)(v73 + 4) = v1892;
    v1892 = (char *)&unk_28898CC;
    HIDWORD(v73) = v1894;
    *(_DWORD *)(v73 + 8) = v1893;
    *(_DWORD *)(v73 + 12) = HIDWORD(v73);
  v74 = v1892 - 12;
  if ( (int *)(v1892 - 12) != &dword_28898C0 )
    v635 = (unsigned int *)(v1892 - 4);
        v636 = __ldrex(v635);
      while ( __strex(v636 - 1, v635) );
      v636 = (*v635)--;
    if ( v636 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v74);
  v75 = v1891 - 12;
  if ( (int *)(v1891 - 12) != &dword_28898C0 )
    v637 = (unsigned int *)(v1891 - 4);
        v638 = __ldrex(v637);
      while ( __strex(v638 - 1, v637) );
      v638 = (*v637)--;
    if ( v638 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v75);
  v76 = (void *)(v1889 - 12);
  if ( (int *)(v1889 - 12) != &dword_28898C0 )
    v639 = (unsigned int *)(v1889 - 4);
        v640 = __ldrex(v639);
      while ( __strex(v640 - 1, v639) );
      v640 = (*v639)--;
    if ( v640 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v76);
  v77 = (void *)(v1890 - 12);
  if ( (int *)(v1890 - 12) != &dword_28898C0 )
    v641 = (unsigned int *)(v1890 - 4);
        v642 = __ldrex(v641);
      while ( __strex(v642 - 1, v641) );
      v642 = (*v641)--;
    if ( v642 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v77);
  sub_119C884((void **)&v1884, "button.holo_lightningbolt");
  sub_119C884((void **)&v1883, "lighting strike");
  sub_119C854((int *)&v1885, &v1884);
  sub_119C854((int *)&v1886, &v1883);
  v1887 = 2;
  v1888 = 1045220557;
  v78 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v78 == HIDWORD(v78) )
      (int)&v1885);
    *(_DWORD *)v78 = v1885;
    v1885 = (char *)&unk_28898CC;
    *(_DWORD *)(v78 + 4) = v1886;
    v1886 = (char *)&unk_28898CC;
    HIDWORD(v78) = v1888;
    *(_DWORD *)(v78 + 8) = v1887;
    *(_DWORD *)(v78 + 12) = HIDWORD(v78);
  v79 = v1886 - 12;
  if ( (int *)(v1886 - 12) != &dword_28898C0 )
    v643 = (unsigned int *)(v1886 - 4);
        v644 = __ldrex(v643);
      while ( __strex(v644 - 1, v643) );
      v644 = (*v643)--;
    if ( v644 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v79);
  v80 = v1885 - 12;
  if ( (int *)(v1885 - 12) != &dword_28898C0 )
    v645 = (unsigned int *)(v1885 - 4);
        v646 = __ldrex(v645);
      while ( __strex(v646 - 1, v645) );
      v646 = (*v645)--;
    if ( v646 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v80);
  v81 = (void *)(v1883 - 12);
  if ( (int *)(v1883 - 12) != &dword_28898C0 )
    v647 = (unsigned int *)(v1883 - 4);
        v648 = __ldrex(v647);
      while ( __strex(v648 - 1, v647) );
      v648 = (*v647)--;
    if ( v648 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v81);
  v82 = (void *)(v1884 - 12);
  if ( (int *)(v1884 - 12) != &dword_28898C0 )
    v649 = (unsigned int *)(v1884 - 4);
        v650 = __ldrex(v649);
      while ( __strex(v650 - 1, v649) );
      v650 = (*v649)--;
    if ( v650 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v82);
  sub_119C884((void **)&v1878, "button.holo_raiseworld");
  sub_119C884((void **)&v1877, "raise");
  sub_119C854((int *)&v1879, &v1878);
  sub_119C854((int *)&v1880, &v1877);
  v1881 = 3;
  v1882 = 1053609165;
  v83 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v83 == HIDWORD(v83) )
      (int)&v1879);
    *(_DWORD *)v83 = v1879;
    v1879 = (char *)&unk_28898CC;
    *(_DWORD *)(v83 + 4) = v1880;
    v1880 = (char *)&unk_28898CC;
    HIDWORD(v83) = v1882;
    *(_DWORD *)(v83 + 8) = v1881;
    *(_DWORD *)(v83 + 12) = HIDWORD(v83);
  v84 = v1880 - 12;
  if ( (int *)(v1880 - 12) != &dword_28898C0 )
    v651 = (unsigned int *)(v1880 - 4);
        v652 = __ldrex(v651);
      while ( __strex(v652 - 1, v651) );
      v652 = (*v651)--;
    if ( v652 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v84);
  v85 = v1879 - 12;
  if ( (int *)(v1879 - 12) != &dword_28898C0 )
    v653 = (unsigned int *)(v1879 - 4);
        v654 = __ldrex(v653);
      while ( __strex(v654 - 1, v653) );
      v654 = (*v653)--;
    if ( v654 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v85);
  v86 = (void *)(v1877 - 12);
  if ( (int *)(v1877 - 12) != &dword_28898C0 )
    v655 = (unsigned int *)(v1877 - 4);
        v656 = __ldrex(v655);
      while ( __strex(v656 - 1, v655) );
      v656 = (*v655)--;
    if ( v656 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v86);
  v87 = (void *)(v1878 - 12);
  if ( (int *)(v1878 - 12) != &dword_28898C0 )
    v657 = (unsigned int *)(v1878 - 4);
        v658 = __ldrex(v657);
      while ( __strex(v658 - 1, v657) );
      v658 = (*v657)--;
    if ( v658 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v87);
  sub_119C884((void **)&v1872, "button.holo_raiseworld");
  sub_119C884((void **)&v1871, "raise");
  sub_119C854((int *)&v1873, &v1872);
  sub_119C854((int *)&v1874, &v1871);
  v1875 = 2;
  v1876 = 1053609165;
  v88 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v88 == HIDWORD(v88) )
      (int)&v1873);
    *(_DWORD *)v88 = v1873;
    v1873 = (char *)&unk_28898CC;
    *(_DWORD *)(v88 + 4) = v1874;
    v1874 = (char *)&unk_28898CC;
    HIDWORD(v88) = v1876;
    *(_DWORD *)(v88 + 8) = v1875;
    *(_DWORD *)(v88 + 12) = HIDWORD(v88);
  v89 = v1874 - 12;
  if ( (int *)(v1874 - 12) != &dword_28898C0 )
    v659 = (unsigned int *)(v1874 - 4);
        v660 = __ldrex(v659);
      while ( __strex(v660 - 1, v659) );
      v660 = (*v659)--;
    if ( v660 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v89);
  v90 = v1873 - 12;
  if ( (int *)(v1873 - 12) != &dword_28898C0 )
    v661 = (unsigned int *)(v1873 - 4);
        v662 = __ldrex(v661);
      while ( __strex(v662 - 1, v661) );
      v662 = (*v661)--;
    if ( v662 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v90);
  v91 = (void *)(v1871 - 12);
  if ( (int *)(v1871 - 12) != &dword_28898C0 )
    v663 = (unsigned int *)(v1871 - 4);
        v664 = __ldrex(v663);
      while ( __strex(v664 - 1, v663) );
      v664 = (*v663)--;
    if ( v664 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v91);
  v92 = (void *)(v1872 - 12);
  if ( (int *)(v1872 - 12) != &dword_28898C0 )
    v665 = (unsigned int *)(v1872 - 4);
        v666 = __ldrex(v665);
      while ( __strex(v666 - 1, v665) );
      v666 = (*v665)--;
    if ( v666 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v92);
  sub_119C884((void **)&v1866, "button.holo_lowerworld");
  sub_119C884((void **)&v1865, "lower");
  sub_119C854((int *)&v1867, &v1866);
  sub_119C854((int *)&v1868, &v1865);
  v1869 = 3;
  v1870 = 1053609165;
  v93 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v93 == HIDWORD(v93) )
      (int)&v1867);
    *(_DWORD *)v93 = v1867;
    v1867 = (char *)&unk_28898CC;
    *(_DWORD *)(v93 + 4) = v1868;
    v1868 = (char *)&unk_28898CC;
    HIDWORD(v93) = v1870;
    *(_DWORD *)(v93 + 8) = v1869;
    *(_DWORD *)(v93 + 12) = HIDWORD(v93);
  v94 = v1868 - 12;
  if ( (int *)(v1868 - 12) != &dword_28898C0 )
    v667 = (unsigned int *)(v1868 - 4);
        v668 = __ldrex(v667);
      while ( __strex(v668 - 1, v667) );
      v668 = (*v667)--;
    if ( v668 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v94);
  v95 = v1867 - 12;
  if ( (int *)(v1867 - 12) != &dword_28898C0 )
    v669 = (unsigned int *)(v1867 - 4);
        v670 = __ldrex(v669);
      while ( __strex(v670 - 1, v669) );
      v670 = (*v669)--;
    if ( v670 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v95);
  v96 = (void *)(v1865 - 12);
  if ( (int *)(v1865 - 12) != &dword_28898C0 )
    v671 = (unsigned int *)(v1865 - 4);
        v672 = __ldrex(v671);
      while ( __strex(v672 - 1, v671) );
      v672 = (*v671)--;
    if ( v672 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v96);
  v97 = (void *)(v1866 - 12);
  if ( (int *)(v1866 - 12) != &dword_28898C0 )
    v673 = (unsigned int *)(v1866 - 4);
        v674 = __ldrex(v673);
      while ( __strex(v674 - 1, v673) );
      v674 = (*v673)--;
    if ( v674 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v97);
  sub_119C884((void **)&v1860, "button.holo_lowerworld");
  sub_119C884((void **)&v1859, "lower");
  sub_119C854((int *)&v1861, &v1860);
  sub_119C854((int *)&v1862, &v1859);
  v1863 = 2;
  v1864 = 1053609165;
  v98 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v98 == HIDWORD(v98) )
      (int)&v1861);
    *(_DWORD *)v98 = v1861;
    v1861 = (char *)&unk_28898CC;
    *(_DWORD *)(v98 + 4) = v1862;
    v1862 = (char *)&unk_28898CC;
    HIDWORD(v98) = v1864;
    *(_DWORD *)(v98 + 8) = v1863;
    *(_DWORD *)(v98 + 12) = HIDWORD(v98);
  v99 = v1862 - 12;
  if ( (int *)(v1862 - 12) != &dword_28898C0 )
    v675 = (unsigned int *)(v1862 - 4);
        v676 = __ldrex(v675);
      while ( __strex(v676 - 1, v675) );
      v676 = (*v675)--;
    if ( v676 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v99);
  v100 = v1861 - 12;
  if ( (int *)(v1861 - 12) != &dword_28898C0 )
    v677 = (unsigned int *)(v1861 - 4);
        v678 = __ldrex(v677);
      while ( __strex(v678 - 1, v677) );
      v678 = (*v677)--;
    if ( v678 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v100);
  v101 = (void *)(v1859 - 12);
  if ( (int *)(v1859 - 12) != &dword_28898C0 )
    v679 = (unsigned int *)(v1859 - 4);
        v680 = __ldrex(v679);
      while ( __strex(v680 - 1, v679) );
      v680 = (*v679)--;
    if ( v680 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v101);
  v102 = (void *)(v1860 - 12);
  if ( (int *)(v1860 - 12) != &dword_28898C0 )
    v681 = (unsigned int *)(v1860 - 4);
        v682 = __ldrex(v681);
      while ( __strex(v682 - 1, v681) );
      v682 = (*v681)--;
    if ( v682 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v102);
  sub_119C884((void **)&v1854, "button.holo_follow");
  sub_119C884((void **)&v1853, "follow");
  sub_119C854((int *)&v1855, &v1854);
  sub_119C854((int *)&v1856, &v1853);
  v1857 = 2;
  v1858 = 1048576000;
  v103 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v103 == HIDWORD(v103) )
      (int)&v1855);
    *(_DWORD *)v103 = v1855;
    v1855 = (char *)&unk_28898CC;
    *(_DWORD *)(v103 + 4) = v1856;
    v1856 = (char *)&unk_28898CC;
    HIDWORD(v103) = v1858;
    *(_DWORD *)(v103 + 8) = v1857;
    *(_DWORD *)(v103 + 12) = HIDWORD(v103);
  v104 = v1856 - 12;
  if ( (int *)(v1856 - 12) != &dword_28898C0 )
    v683 = (unsigned int *)(v1856 - 4);
        v684 = __ldrex(v683);
      while ( __strex(v684 - 1, v683) );
      v684 = (*v683)--;
    if ( v684 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v104);
  v105 = v1855 - 12;
  if ( (int *)(v1855 - 12) != &dword_28898C0 )
    v685 = (unsigned int *)(v1855 - 4);
        v686 = __ldrex(v685);
      while ( __strex(v686 - 1, v685) );
      v686 = (*v685)--;
    if ( v686 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v105);
  v106 = (void *)(v1853 - 12);
  if ( (int *)(v1853 - 12) != &dword_28898C0 )
    v687 = (unsigned int *)(v1853 - 4);
        v688 = __ldrex(v687);
      while ( __strex(v688 - 1, v687) );
      v688 = (*v687)--;
    if ( v688 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v106);
  v107 = (void *)(v1854 - 12);
  if ( (int *)(v1854 - 12) != &dword_28898C0 )
    v689 = (unsigned int *)(v1854 - 4);
        v690 = __ldrex(v689);
      while ( __strex(v690 - 1, v689) );
      v690 = (*v689)--;
    if ( v690 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v107);
  sub_119C884((void **)&v1848, "button.holo_follow");
  sub_119C884((void **)&v1847, "follow player");
  sub_119C854((int *)&v1849, &v1848);
  sub_119C854((int *)&v1850, &v1847);
  v1851 = 2;
  v1852 = 1048576000;
  v108 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v108 == HIDWORD(v108) )
      (int)&v1849);
    *(_DWORD *)v108 = v1849;
    v1849 = (char *)&unk_28898CC;
    *(_DWORD *)(v108 + 4) = v1850;
    v1850 = (char *)&unk_28898CC;
    HIDWORD(v108) = v1852;
    *(_DWORD *)(v108 + 8) = v1851;
    *(_DWORD *)(v108 + 12) = HIDWORD(v108);
  v109 = v1850 - 12;
  if ( (int *)(v1850 - 12) != &dword_28898C0 )
    v691 = (unsigned int *)(v1850 - 4);
        v692 = __ldrex(v691);
      while ( __strex(v692 - 1, v691) );
      v692 = (*v691)--;
    if ( v692 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v109);
  v110 = v1849 - 12;
  if ( (int *)(v1849 - 12) != &dword_28898C0 )
    v693 = (unsigned int *)(v1849 - 4);
        v694 = __ldrex(v693);
      while ( __strex(v694 - 1, v693) );
      v694 = (*v693)--;
    if ( v694 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v110);
  v111 = (void *)(v1847 - 12);
  if ( (int *)(v1847 - 12) != &dword_28898C0 )
    v695 = (unsigned int *)(v1847 - 4);
        v696 = __ldrex(v695);
      while ( __strex(v696 - 1, v695) );
      v696 = (*v695)--;
    if ( v696 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v111);
  v112 = (void *)(v1848 - 12);
  if ( (int *)(v1848 - 12) != &dword_28898C0 )
    v697 = (unsigned int *)(v1848 - 4);
        v698 = __ldrex(v697);
      while ( __strex(v698 - 1, v697) );
      v698 = (*v697)--;
    if ( v698 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v112);
  sub_119C884((void **)&v1842, "button.holo_stopfollow");
  sub_119C884((void **)&v1841, "stop following");
  sub_119C854((int *)&v1843, &v1842);
  sub_119C854((int *)&v1844, &v1841);
  v1845 = 3;
  v1846 = 1048576000;
  v113 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v113 == HIDWORD(v113) )
      (int)&v1843);
    *(_DWORD *)v113 = v1843;
    v1843 = (char *)&unk_28898CC;
    *(_DWORD *)(v113 + 4) = v1844;
    v1844 = (char *)&unk_28898CC;
    HIDWORD(v113) = v1846;
    *(_DWORD *)(v113 + 8) = v1845;
    *(_DWORD *)(v113 + 12) = HIDWORD(v113);
  v114 = v1844 - 12;
  if ( (int *)(v1844 - 12) != &dword_28898C0 )
    v699 = (unsigned int *)(v1844 - 4);
        v700 = __ldrex(v699);
      while ( __strex(v700 - 1, v699) );
      v700 = (*v699)--;
    if ( v700 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v114);
  v115 = v1843 - 12;
  if ( (int *)(v1843 - 12) != &dword_28898C0 )
    v701 = (unsigned int *)(v1843 - 4);
        v702 = __ldrex(v701);
      while ( __strex(v702 - 1, v701) );
      v702 = (*v701)--;
    if ( v702 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v115);
  v116 = (void *)(v1841 - 12);
  if ( (int *)(v1841 - 12) != &dword_28898C0 )
    v703 = (unsigned int *)(v1841 - 4);
        v704 = __ldrex(v703);
      while ( __strex(v704 - 1, v703) );
      v704 = (*v703)--;
    if ( v704 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v116);
  v117 = (void *)(v1842 - 12);
  if ( (int *)(v1842 - 12) != &dword_28898C0 )
    v705 = (unsigned int *)(v1842 - 4);
        v706 = __ldrex(v705);
      while ( __strex(v706 - 1, v705) );
      v706 = (*v705)--;
    if ( v706 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v117);
  sub_119C884((void **)&v1836, "button.holo_follownext");
  sub_119C884((void **)&v1835, "next player");
  sub_119C854((int *)&v1837, &v1836);
  sub_119C854((int *)&v1838, &v1835);
  v1839 = 3;
  v1840 = 1048576000;
  v118 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v118 == HIDWORD(v118) )
      (int)&v1837);
    *(_DWORD *)v118 = v1837;
    v1837 = (char *)&unk_28898CC;
    *(_DWORD *)(v118 + 4) = v1838;
    v1838 = (char *)&unk_28898CC;
    HIDWORD(v118) = v1840;
    *(_DWORD *)(v118 + 8) = v1839;
    *(_DWORD *)(v118 + 12) = HIDWORD(v118);
  v119 = v1838 - 12;
  if ( (int *)(v1838 - 12) != &dword_28898C0 )
    v707 = (unsigned int *)(v1838 - 4);
        v708 = __ldrex(v707);
      while ( __strex(v708 - 1, v707) );
      v708 = (*v707)--;
    if ( v708 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v119);
  v120 = v1837 - 12;
  if ( (int *)(v1837 - 12) != &dword_28898C0 )
    v709 = (unsigned int *)(v1837 - 4);
        v710 = __ldrex(v709);
      while ( __strex(v710 - 1, v709) );
      v710 = (*v709)--;
    if ( v710 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v120);
  v121 = (void *)(v1835 - 12);
  if ( (int *)(v1835 - 12) != &dword_28898C0 )
    v711 = (unsigned int *)(v1835 - 4);
        v712 = __ldrex(v711);
      while ( __strex(v712 - 1, v711) );
      v712 = (*v711)--;
    if ( v712 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v121);
  v122 = (void *)(v1836 - 12);
  if ( (int *)(v1836 - 12) != &dword_28898C0 )
    v713 = (unsigned int *)(v1836 - 4);
        v714 = __ldrex(v713);
      while ( __strex(v714 - 1, v713) );
      v714 = (*v713)--;
    if ( v714 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v122);
  sub_119C884((void **)&v1830, "button.advancetime_sunrise");
  sub_119C884((void **)&v1829, "time sunrise");
  sub_119C854((int *)&v1831, &v1830);
  sub_119C854((int *)&v1832, &v1829);
  v1833 = 3;
  v1834 = 1051931443;
  v123 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v123 == HIDWORD(v123) )
      (int)&v1831);
    *(_DWORD *)v123 = v1831;
    v1831 = (char *)&unk_28898CC;
    *(_DWORD *)(v123 + 4) = v1832;
    v1832 = (char *)&unk_28898CC;
    HIDWORD(v123) = v1834;
    *(_DWORD *)(v123 + 8) = v1833;
    *(_DWORD *)(v123 + 12) = HIDWORD(v123);
  v124 = v1832 - 12;
  if ( (int *)(v1832 - 12) != &dword_28898C0 )
    v715 = (unsigned int *)(v1832 - 4);
        v716 = __ldrex(v715);
      while ( __strex(v716 - 1, v715) );
      v716 = (*v715)--;
    if ( v716 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v124);
  v125 = v1831 - 12;
  if ( (int *)(v1831 - 12) != &dword_28898C0 )
    v717 = (unsigned int *)(v1831 - 4);
        v718 = __ldrex(v717);
      while ( __strex(v718 - 1, v717) );
      v718 = (*v717)--;
    if ( v718 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v125);
  v126 = (void *)(v1829 - 12);
  if ( (int *)(v1829 - 12) != &dword_28898C0 )
    v719 = (unsigned int *)(v1829 - 4);
        v720 = __ldrex(v719);
      while ( __strex(v720 - 1, v719) );
      v720 = (*v719)--;
    if ( v720 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v126);
  v127 = (void *)(v1830 - 12);
  if ( (int *)(v1830 - 12) != &dword_28898C0 )
    v721 = (unsigned int *)(v1830 - 4);
        v722 = __ldrex(v721);
      while ( __strex(v722 - 1, v721) );
      v722 = (*v721)--;
    if ( v722 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v127);
  sub_119C884((void **)&v1824, "button.advancetime_sunrise");
  sub_119C884((void **)&v1823, "time sunrise");
  sub_119C854((int *)&v1825, &v1824);
  sub_119C854((int *)&v1826, &v1823);
  v1827 = 2;
  v1828 = 1051931443;
  v128 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v128 == HIDWORD(v128) )
      (int)&v1825);
    *(_DWORD *)v128 = v1825;
    v1825 = (char *)&unk_28898CC;
    *(_DWORD *)(v128 + 4) = v1826;
    v1826 = (char *)&unk_28898CC;
    HIDWORD(v128) = v1828;
    *(_DWORD *)(v128 + 8) = v1827;
    *(_DWORD *)(v128 + 12) = HIDWORD(v128);
  v129 = v1826 - 12;
  if ( (int *)(v1826 - 12) != &dword_28898C0 )
    v723 = (unsigned int *)(v1826 - 4);
        v724 = __ldrex(v723);
      while ( __strex(v724 - 1, v723) );
      v724 = (*v723)--;
    if ( v724 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v129);
  v130 = v1825 - 12;
  if ( (int *)(v1825 - 12) != &dword_28898C0 )
    v725 = (unsigned int *)(v1825 - 4);
        v726 = __ldrex(v725);
      while ( __strex(v726 - 1, v725) );
      v726 = (*v725)--;
    if ( v726 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v130);
  v131 = (void *)(v1823 - 12);
  if ( (int *)(v1823 - 12) != &dword_28898C0 )
    v727 = (unsigned int *)(v1823 - 4);
        v728 = __ldrex(v727);
      while ( __strex(v728 - 1, v727) );
      v728 = (*v727)--;
    if ( v728 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v131);
  v132 = (void *)(v1824 - 12);
  if ( (int *)(v1824 - 12) != &dword_28898C0 )
    v729 = (unsigned int *)(v1824 - 4);
        v730 = __ldrex(v729);
      while ( __strex(v730 - 1, v729) );
      v730 = (*v729)--;
    if ( v730 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v132);
  sub_119C884((void **)&v1818, "button.advancetime_morning");
  sub_119C884((void **)&v1817, "time morning");
  sub_119C854((int *)&v1819, &v1818);
  sub_119C854((int *)&v1820, &v1817);
  v1821 = 3;
  v1822 = 1051931443;
  v133 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v133 == HIDWORD(v133) )
      (int)&v1819);
    *(_DWORD *)v133 = v1819;
    v1819 = (char *)&unk_28898CC;
    *(_DWORD *)(v133 + 4) = v1820;
    v1820 = (char *)&unk_28898CC;
    HIDWORD(v133) = v1822;
    *(_DWORD *)(v133 + 8) = v1821;
    *(_DWORD *)(v133 + 12) = HIDWORD(v133);
  v134 = v1820 - 12;
  if ( (int *)(v1820 - 12) != &dword_28898C0 )
    v731 = (unsigned int *)(v1820 - 4);
        v732 = __ldrex(v731);
      while ( __strex(v732 - 1, v731) );
      v732 = (*v731)--;
    if ( v732 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v134);
  v135 = v1819 - 12;
  if ( (int *)(v1819 - 12) != &dword_28898C0 )
    v733 = (unsigned int *)(v1819 - 4);
        v734 = __ldrex(v733);
      while ( __strex(v734 - 1, v733) );
      v734 = (*v733)--;
    if ( v734 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v135);
  v136 = (void *)(v1817 - 12);
  if ( (int *)(v1817 - 12) != &dword_28898C0 )
    v735 = (unsigned int *)(v1817 - 4);
        v736 = __ldrex(v735);
      while ( __strex(v736 - 1, v735) );
      v736 = (*v735)--;
    if ( v736 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v136);
  v137 = (void *)(v1818 - 12);
  if ( (int *)(v1818 - 12) != &dword_28898C0 )
    v737 = (unsigned int *)(v1818 - 4);
        v738 = __ldrex(v737);
      while ( __strex(v738 - 1, v737) );
      v738 = (*v737)--;
    if ( v738 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v137);
  sub_119C884((void **)&v1812, "button.advancetime_morning");
  sub_119C884((void **)&v1811, "time morning");
  sub_119C854((int *)&v1813, &v1812);
  sub_119C854((int *)&v1814, &v1811);
  v1815 = 2;
  v1816 = 1051931443;
  v138 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v138 == HIDWORD(v138) )
      (int)&v1813);
    *(_DWORD *)v138 = v1813;
    v1813 = (char *)&unk_28898CC;
    *(_DWORD *)(v138 + 4) = v1814;
    v1814 = (char *)&unk_28898CC;
    HIDWORD(v138) = v1816;
    *(_DWORD *)(v138 + 8) = v1815;
    *(_DWORD *)(v138 + 12) = HIDWORD(v138);
  v139 = v1814 - 12;
  if ( (int *)(v1814 - 12) != &dword_28898C0 )
    v739 = (unsigned int *)(v1814 - 4);
        v740 = __ldrex(v739);
      while ( __strex(v740 - 1, v739) );
      v740 = (*v739)--;
    if ( v740 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v139);
  v140 = v1813 - 12;
  if ( (int *)(v1813 - 12) != &dword_28898C0 )
    v741 = (unsigned int *)(v1813 - 4);
        v742 = __ldrex(v741);
      while ( __strex(v742 - 1, v741) );
      v742 = (*v741)--;
    if ( v742 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v140);
  v141 = (void *)(v1811 - 12);
  if ( (int *)(v1811 - 12) != &dword_28898C0 )
    v743 = (unsigned int *)(v1811 - 4);
        v744 = __ldrex(v743);
      while ( __strex(v744 - 1, v743) );
      v744 = (*v743)--;
    if ( v744 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v141);
  v142 = (void *)(v1812 - 12);
  if ( (int *)(v1812 - 12) != &dword_28898C0 )
    v745 = (unsigned int *)(v1812 - 4);
        v746 = __ldrex(v745);
      while ( __strex(v746 - 1, v745) );
      v746 = (*v745)--;
    if ( v746 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v142);
  sub_119C884((void **)&v1806, "button.advancetime_afternoon");
  sub_119C884((void **)&v1805, "time afternoon");
  sub_119C854((int *)&v1807, &v1806);
  sub_119C854((int *)&v1808, &v1805);
  v1809 = 3;
  v1810 = 1051931443;
  v143 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v143 == HIDWORD(v143) )
      (int)&v1807);
    *(_DWORD *)v143 = v1807;
    v1807 = (char *)&unk_28898CC;
    *(_DWORD *)(v143 + 4) = v1808;
    v1808 = (char *)&unk_28898CC;
    HIDWORD(v143) = v1810;
    *(_DWORD *)(v143 + 8) = v1809;
    *(_DWORD *)(v143 + 12) = HIDWORD(v143);
  v144 = v1808 - 12;
  if ( (int *)(v1808 - 12) != &dword_28898C0 )
    v747 = (unsigned int *)(v1808 - 4);
        v748 = __ldrex(v747);
      while ( __strex(v748 - 1, v747) );
      v748 = (*v747)--;
    if ( v748 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v144);
  v145 = v1807 - 12;
  if ( (int *)(v1807 - 12) != &dword_28898C0 )
    v749 = (unsigned int *)(v1807 - 4);
        v750 = __ldrex(v749);
      while ( __strex(v750 - 1, v749) );
      v750 = (*v749)--;
    if ( v750 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v145);
  v146 = (void *)(v1805 - 12);
  if ( (int *)(v1805 - 12) != &dword_28898C0 )
    v751 = (unsigned int *)(v1805 - 4);
        v752 = __ldrex(v751);
      while ( __strex(v752 - 1, v751) );
      v752 = (*v751)--;
    if ( v752 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v146);
  v147 = (void *)(v1806 - 12);
  if ( (int *)(v1806 - 12) != &dword_28898C0 )
    v753 = (unsigned int *)(v1806 - 4);
        v754 = __ldrex(v753);
      while ( __strex(v754 - 1, v753) );
      v754 = (*v753)--;
    if ( v754 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v147);
  sub_119C884((void **)&v1800, "button.advancetime_afternoon");
  sub_119C884((void **)&v1799, "time afternoon");
  sub_119C854((int *)&v1801, &v1800);
  sub_119C854((int *)&v1802, &v1799);
  v1803 = 2;
  v1804 = 1051931443;
  v148 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v148 == HIDWORD(v148) )
      (int)&v1801);
    *(_DWORD *)v148 = v1801;
    v1801 = (char *)&unk_28898CC;
    *(_DWORD *)(v148 + 4) = v1802;
    v1802 = (char *)&unk_28898CC;
    HIDWORD(v148) = v1804;
    *(_DWORD *)(v148 + 8) = v1803;
    *(_DWORD *)(v148 + 12) = HIDWORD(v148);
  v149 = v1802 - 12;
  if ( (int *)(v1802 - 12) != &dword_28898C0 )
    v755 = (unsigned int *)(v1802 - 4);
        v756 = __ldrex(v755);
      while ( __strex(v756 - 1, v755) );
      v756 = (*v755)--;
    if ( v756 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v149);
  v150 = v1801 - 12;
  if ( (int *)(v1801 - 12) != &dword_28898C0 )
    v757 = (unsigned int *)(v1801 - 4);
        v758 = __ldrex(v757);
      while ( __strex(v758 - 1, v757) );
      v758 = (*v757)--;
    if ( v758 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v150);
  v151 = (void *)(v1799 - 12);
  if ( (int *)(v1799 - 12) != &dword_28898C0 )
    v759 = (unsigned int *)(v1799 - 4);
        v760 = __ldrex(v759);
      while ( __strex(v760 - 1, v759) );
      v760 = (*v759)--;
    if ( v760 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v151);
  v152 = (void *)(v1800 - 12);
  if ( (int *)(v1800 - 12) != &dword_28898C0 )
    v761 = (unsigned int *)(v1800 - 4);
        v762 = __ldrex(v761);
      while ( __strex(v762 - 1, v761) );
      v762 = (*v761)--;
    if ( v762 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v152);
  sub_119C884((void **)&v1794, "button.advancetime_evening");
  sub_119C884((void **)&v1793, "time evening");
  sub_119C854((int *)&v1795, &v1794);
  sub_119C854((int *)&v1796, &v1793);
  v1797 = 3;
  v1798 = 1051931443;
  v153 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v153 == HIDWORD(v153) )
      (int)&v1795);
    *(_DWORD *)v153 = v1795;
    v1795 = (char *)&unk_28898CC;
    *(_DWORD *)(v153 + 4) = v1796;
    v1796 = (char *)&unk_28898CC;
    HIDWORD(v153) = v1798;
    *(_DWORD *)(v153 + 8) = v1797;
    *(_DWORD *)(v153 + 12) = HIDWORD(v153);
  v154 = v1796 - 12;
  if ( (int *)(v1796 - 12) != &dword_28898C0 )
    v763 = (unsigned int *)(v1796 - 4);
        v764 = __ldrex(v763);
      while ( __strex(v764 - 1, v763) );
      v764 = (*v763)--;
    if ( v764 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v154);
  v155 = v1795 - 12;
  if ( (int *)(v1795 - 12) != &dword_28898C0 )
    v765 = (unsigned int *)(v1795 - 4);
        v766 = __ldrex(v765);
      while ( __strex(v766 - 1, v765) );
      v766 = (*v765)--;
    if ( v766 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v155);
  v156 = (void *)(v1793 - 12);
  if ( (int *)(v1793 - 12) != &dword_28898C0 )
    v767 = (unsigned int *)(v1793 - 4);
        v768 = __ldrex(v767);
      while ( __strex(v768 - 1, v767) );
      v768 = (*v767)--;
    if ( v768 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v156);
  v157 = (void *)(v1794 - 12);
  if ( (int *)(v1794 - 12) != &dword_28898C0 )
    v769 = (unsigned int *)(v1794 - 4);
        v770 = __ldrex(v769);
      while ( __strex(v770 - 1, v769) );
      v770 = (*v769)--;
    if ( v770 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v157);
  sub_119C884((void **)&v1788, "button.advancetime_evening");
  sub_119C884((void **)&v1787, "time evening");
  sub_119C854((int *)&v1789, &v1788);
  sub_119C854((int *)&v1790, &v1787);
  v1791 = 2;
  v1792 = 1051931443;
  v158 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v158 == HIDWORD(v158) )
      (int)&v1789);
    *(_DWORD *)v158 = v1789;
    v1789 = (char *)&unk_28898CC;
    *(_DWORD *)(v158 + 4) = v1790;
    v1790 = (char *)&unk_28898CC;
    HIDWORD(v158) = v1792;
    *(_DWORD *)(v158 + 8) = v1791;
    *(_DWORD *)(v158 + 12) = HIDWORD(v158);
  v159 = v1790 - 12;
  if ( (int *)(v1790 - 12) != &dword_28898C0 )
    v771 = (unsigned int *)(v1790 - 4);
        v772 = __ldrex(v771);
      while ( __strex(v772 - 1, v771) );
      v772 = (*v771)--;
    if ( v772 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v159);
  v160 = v1789 - 12;
  if ( (int *)(v1789 - 12) != &dword_28898C0 )
    v773 = (unsigned int *)(v1789 - 4);
        v774 = __ldrex(v773);
      while ( __strex(v774 - 1, v773) );
      v774 = (*v773)--;
    if ( v774 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v160);
  v161 = (void *)(v1787 - 12);
  if ( (int *)(v1787 - 12) != &dword_28898C0 )
    v775 = (unsigned int *)(v1787 - 4);
        v776 = __ldrex(v775);
      while ( __strex(v776 - 1, v775) );
      v776 = (*v775)--;
    if ( v776 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v161);
  v162 = (void *)(v1788 - 12);
  if ( (int *)(v1788 - 12) != &dword_28898C0 )
    v777 = (unsigned int *)(v1788 - 4);
        v778 = __ldrex(v777);
      while ( __strex(v778 - 1, v777) );
      v778 = (*v777)--;
    if ( v778 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v162);
  sub_119C884((void **)&v1782, "button.advancetime_midnight");
  sub_119C884((void **)&v1781, "time midnight");
  sub_119C854((int *)&v1783, &v1782);
  sub_119C854((int *)&v1784, &v1781);
  v1785 = 3;
  v1786 = 1051931443;
  v163 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v163 == HIDWORD(v163) )
      (int)&v1783);
    *(_DWORD *)v163 = v1783;
    v1783 = (char *)&unk_28898CC;
    *(_DWORD *)(v163 + 4) = v1784;
    v1784 = (char *)&unk_28898CC;
    HIDWORD(v163) = v1786;
    *(_DWORD *)(v163 + 8) = v1785;
    *(_DWORD *)(v163 + 12) = HIDWORD(v163);
  v164 = v1784 - 12;
  if ( (int *)(v1784 - 12) != &dword_28898C0 )
    v779 = (unsigned int *)(v1784 - 4);
        v780 = __ldrex(v779);
      while ( __strex(v780 - 1, v779) );
      v780 = (*v779)--;
    if ( v780 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v164);
  v165 = v1783 - 12;
  if ( (int *)(v1783 - 12) != &dword_28898C0 )
    v781 = (unsigned int *)(v1783 - 4);
        v782 = __ldrex(v781);
      while ( __strex(v782 - 1, v781) );
      v782 = (*v781)--;
    if ( v782 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v165);
  v166 = (void *)(v1781 - 12);
  if ( (int *)(v1781 - 12) != &dword_28898C0 )
    v783 = (unsigned int *)(v1781 - 4);
        v784 = __ldrex(v783);
      while ( __strex(v784 - 1, v783) );
      v784 = (*v783)--;
    if ( v784 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v166);
  v167 = (void *)(v1782 - 12);
  if ( (int *)(v1782 - 12) != &dword_28898C0 )
    v785 = (unsigned int *)(v1782 - 4);
        v786 = __ldrex(v785);
      while ( __strex(v786 - 1, v785) );
      v786 = (*v785)--;
    if ( v786 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v167);
  sub_119C884((void **)&v1776, "button.advancetime_midnight");
  sub_119C884((void **)&v1775, "time midnight");
  sub_119C854((int *)&v1777, &v1776);
  sub_119C854((int *)&v1778, &v1775);
  v1779 = 2;
  v1780 = 1051931443;
  v168 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v168 == HIDWORD(v168) )
      (int)&v1777);
    *(_DWORD *)v168 = v1777;
    v1777 = (char *)&unk_28898CC;
    *(_DWORD *)(v168 + 4) = v1778;
    v1778 = (char *)&unk_28898CC;
    HIDWORD(v168) = v1780;
    *(_DWORD *)(v168 + 8) = v1779;
    *(_DWORD *)(v168 + 12) = HIDWORD(v168);
  v169 = v1778 - 12;
  if ( (int *)(v1778 - 12) != &dword_28898C0 )
    v787 = (unsigned int *)(v1778 - 4);
        v788 = __ldrex(v787);
      while ( __strex(v788 - 1, v787) );
      v788 = (*v787)--;
    if ( v788 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v169);
  v170 = v1777 - 12;
  if ( (int *)(v1777 - 12) != &dword_28898C0 )
    v789 = (unsigned int *)(v1777 - 4);
        v790 = __ldrex(v789);
      while ( __strex(v790 - 1, v789) );
      v790 = (*v789)--;
    if ( v790 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v170);
  v171 = (void *)(v1775 - 12);
  if ( (int *)(v1775 - 12) != &dword_28898C0 )
    v791 = (unsigned int *)(v1775 - 4);
        v792 = __ldrex(v791);
      while ( __strex(v792 - 1, v791) );
      v792 = (*v791)--;
    if ( v792 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v171);
  v172 = (void *)(v1776 - 12);
  if ( (int *)(v1776 - 12) != &dword_28898C0 )
    v793 = (unsigned int *)(v1776 - 4);
        v794 = __ldrex(v793);
      while ( __strex(v794 - 1, v793) );
      v794 = (*v793)--;
    if ( v794 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v172);
  sub_119C884((void **)&v1770, "button.holo_playspace");
  sub_119C884((void **)&v1769, "playspace");
  sub_119C854((int *)&v1771, &v1770);
  sub_119C854((int *)&v1772, &v1769);
  v1773 = 3;
  v1774 = 1050253722;
  v173 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v173 == HIDWORD(v173) )
      (int)&v1771);
    *(_DWORD *)v173 = v1771;
    v1771 = (char *)&unk_28898CC;
    *(_DWORD *)(v173 + 4) = v1772;
    v1772 = (char *)&unk_28898CC;
    HIDWORD(v173) = v1774;
    *(_DWORD *)(v173 + 8) = v1773;
    *(_DWORD *)(v173 + 12) = HIDWORD(v173);
  v174 = v1772 - 12;
  if ( (int *)(v1772 - 12) != &dword_28898C0 )
    v795 = (unsigned int *)(v1772 - 4);
        v796 = __ldrex(v795);
      while ( __strex(v796 - 1, v795) );
      v796 = (*v795)--;
    if ( v796 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v174);
  v175 = v1771 - 12;
  if ( (int *)(v1771 - 12) != &dword_28898C0 )
    v797 = (unsigned int *)(v1771 - 4);
        v798 = __ldrex(v797);
      while ( __strex(v798 - 1, v797) );
      v798 = (*v797)--;
    if ( v798 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v175);
  v176 = (void *)(v1769 - 12);
  if ( (int *)(v1769 - 12) != &dword_28898C0 )
    v799 = (unsigned int *)(v1769 - 4);
        v800 = __ldrex(v799);
      while ( __strex(v800 - 1, v799) );
      v800 = (*v799)--;
    if ( v800 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v176);
  v177 = (void *)(v1770 - 12);
  if ( (int *)(v1770 - 12) != &dword_28898C0 )
    v801 = (unsigned int *)(v1770 - 4);
        v802 = __ldrex(v801);
      while ( __strex(v802 - 1, v801) );
      v802 = (*v801)--;
    if ( v802 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v177);
  sub_119C884((void **)&v1764, "button.holo_playspace");
  sub_119C884((void **)&v1763, "play space");
  sub_119C854((int *)&v1765, &v1764);
  sub_119C854((int *)&v1766, &v1763);
  v1767 = 3;
  v1768 = 1050253722;
  v178 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v178 == HIDWORD(v178) )
      (int)&v1765);
    *(_DWORD *)v178 = v1765;
    v1765 = (char *)&unk_28898CC;
    *(_DWORD *)(v178 + 4) = v1766;
    v1766 = (char *)&unk_28898CC;
    HIDWORD(v178) = v1768;
    *(_DWORD *)(v178 + 8) = v1767;
    *(_DWORD *)(v178 + 12) = HIDWORD(v178);
  v179 = v1766 - 12;
  if ( (int *)(v1766 - 12) != &dword_28898C0 )
    v803 = (unsigned int *)(v1766 - 4);
        v804 = __ldrex(v803);
      while ( __strex(v804 - 1, v803) );
      v804 = (*v803)--;
    if ( v804 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v179);
  v180 = v1765 - 12;
  if ( (int *)(v1765 - 12) != &dword_28898C0 )
    v805 = (unsigned int *)(v1765 - 4);
        v806 = __ldrex(v805);
      while ( __strex(v806 - 1, v805) );
      v806 = (*v805)--;
    if ( v806 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v180);
  v181 = (void *)(v1763 - 12);
  if ( (int *)(v1763 - 12) != &dword_28898C0 )
    v807 = (unsigned int *)(v1763 - 4);
        v808 = __ldrex(v807);
      while ( __strex(v808 - 1, v807) );
      v808 = (*v807)--;
    if ( v808 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v181);
  v182 = (void *)(v1764 - 12);
  if ( (int *)(v1764 - 12) != &dword_28898C0 )
    v809 = (unsigned int *)(v1764 - 4);
        v810 = __ldrex(v809);
      while ( __strex(v810 - 1, v809) );
      v810 = (*v809)--;
    if ( v810 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v182);
  sub_119C884((void **)&v1758, "button.holo_playspace");
  sub_119C884((void **)&v1757, "playspace");
  sub_119C854((int *)&v1759, &v1758);
  sub_119C854((int *)&v1760, &v1757);
  v1761 = 2;
  v1762 = 1050253722;
  v183 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v183 == HIDWORD(v183) )
      (int)&v1759);
    *(_DWORD *)v183 = v1759;
    v1759 = (char *)&unk_28898CC;
    *(_DWORD *)(v183 + 4) = v1760;
    v1760 = (char *)&unk_28898CC;
    HIDWORD(v183) = v1762;
    *(_DWORD *)(v183 + 8) = v1761;
    *(_DWORD *)(v183 + 12) = HIDWORD(v183);
  v184 = v1760 - 12;
  if ( (int *)(v1760 - 12) != &dword_28898C0 )
    v811 = (unsigned int *)(v1760 - 4);
        v812 = __ldrex(v811);
      while ( __strex(v812 - 1, v811) );
      v812 = (*v811)--;
    if ( v812 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v184);
  v185 = v1759 - 12;
  if ( (int *)(v1759 - 12) != &dword_28898C0 )
    v813 = (unsigned int *)(v1759 - 4);
        v814 = __ldrex(v813);
      while ( __strex(v814 - 1, v813) );
      v814 = (*v813)--;
    if ( v814 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v185);
  v186 = (void *)(v1757 - 12);
  if ( (int *)(v1757 - 12) != &dword_28898C0 )
    v815 = (unsigned int *)(v1757 - 4);
        v816 = __ldrex(v815);
      while ( __strex(v816 - 1, v815) );
      v816 = (*v815)--;
    if ( v816 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v186);
  v187 = (void *)(v1758 - 12);
  if ( (int *)(v1758 - 12) != &dword_28898C0 )
    v817 = (unsigned int *)(v1758 - 4);
        v818 = __ldrex(v817);
      while ( __strex(v818 - 1, v817) );
      v818 = (*v817)--;
    if ( v818 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v187);
  sub_119C884((void **)&v1752, "button.holo_playspace");
  sub_119C884((void **)&v1751, "play space");
  sub_119C854((int *)&v1753, &v1752);
  sub_119C854((int *)&v1754, &v1751);
  v1755 = 2;
  v1756 = 1050253722;
  v188 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v188 == HIDWORD(v188) )
      (int)&v1753);
    *(_DWORD *)v188 = v1753;
    v1753 = (char *)&unk_28898CC;
    *(_DWORD *)(v188 + 4) = v1754;
    v1754 = (char *)&unk_28898CC;
    HIDWORD(v188) = v1756;
    *(_DWORD *)(v188 + 8) = v1755;
    *(_DWORD *)(v188 + 12) = HIDWORD(v188);
  v189 = v1754 - 12;
  if ( (int *)(v1754 - 12) != &dword_28898C0 )
    v819 = (unsigned int *)(v1754 - 4);
        v820 = __ldrex(v819);
      while ( __strex(v820 - 1, v819) );
      v820 = (*v819)--;
    if ( v820 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v189);
  v190 = v1753 - 12;
  if ( (int *)(v1753 - 12) != &dword_28898C0 )
    v821 = (unsigned int *)(v1753 - 4);
        v822 = __ldrex(v821);
      while ( __strex(v822 - 1, v821) );
      v822 = (*v821)--;
    if ( v822 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v190);
  v191 = (void *)(v1751 - 12);
  if ( (int *)(v1751 - 12) != &dword_28898C0 )
    v823 = (unsigned int *)(v1751 - 4);
        v824 = __ldrex(v823);
      while ( __strex(v824 - 1, v823) );
      v824 = (*v823)--;
    if ( v824 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v191);
  v192 = (void *)(v1752 - 12);
  if ( (int *)(v1752 - 12) != &dword_28898C0 )
    v825 = (unsigned int *)(v1752 - 4);
        v826 = __ldrex(v825);
      while ( __strex(v826 - 1, v825) );
      v826 = (*v825)--;
    if ( v826 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v192);
  sub_119C884((void **)&v1746, "button.holo_playspace");
  sub_119C884((void **)&v1745, "playspace");
  sub_119C854((int *)&v1747, &v1746);
  sub_119C854((int *)&v1748, &v1745);
  v1749 = 1;
  v1750 = 1050253722;
  v193 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v193 == HIDWORD(v193) )
      (int)&v1747);
    *(_DWORD *)v193 = v1747;
    v1747 = (char *)&unk_28898CC;
    *(_DWORD *)(v193 + 4) = v1748;
    v1748 = (char *)&unk_28898CC;
    HIDWORD(v193) = v1750;
    *(_DWORD *)(v193 + 8) = v1749;
    *(_DWORD *)(v193 + 12) = HIDWORD(v193);
  v194 = v1748 - 12;
  if ( (int *)(v1748 - 12) != &dword_28898C0 )
    v827 = (unsigned int *)(v1748 - 4);
        v828 = __ldrex(v827);
      while ( __strex(v828 - 1, v827) );
      v828 = (*v827)--;
    if ( v828 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v194);
  v195 = v1747 - 12;
  if ( (int *)(v1747 - 12) != &dword_28898C0 )
    v829 = (unsigned int *)(v1747 - 4);
        v830 = __ldrex(v829);
      while ( __strex(v830 - 1, v829) );
      v830 = (*v829)--;
    if ( v830 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v195);
  v196 = (void *)(v1745 - 12);
  if ( (int *)(v1745 - 12) != &dword_28898C0 )
    v831 = (unsigned int *)(v1745 - 4);
        v832 = __ldrex(v831);
      while ( __strex(v832 - 1, v831) );
      v832 = (*v831)--;
    if ( v832 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v196);
  v197 = (void *)(v1746 - 12);
  if ( (int *)(v1746 - 12) != &dword_28898C0 )
    v833 = (unsigned int *)(v1746 - 4);
        v834 = __ldrex(v833);
      while ( __strex(v834 - 1, v833) );
      v834 = (*v833)--;
    if ( v834 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v197);
  sub_119C884((void **)&v1740, "button.holo_playspace");
  sub_119C884((void **)&v1739, "play space");
  sub_119C854((int *)&v1741, &v1740);
  sub_119C854((int *)&v1742, &v1739);
  v1743 = 1;
  v1744 = 1050253722;
  v198 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v198 == HIDWORD(v198) )
      (int)&v1741);
    *(_DWORD *)v198 = v1741;
    v1741 = (char *)&unk_28898CC;
    *(_DWORD *)(v198 + 4) = v1742;
    v1742 = (char *)&unk_28898CC;
    HIDWORD(v198) = v1744;
    *(_DWORD *)(v198 + 8) = v1743;
    *(_DWORD *)(v198 + 12) = HIDWORD(v198);
  v199 = v1742 - 12;
  if ( (int *)(v1742 - 12) != &dword_28898C0 )
    v835 = (unsigned int *)(v1742 - 4);
        v836 = __ldrex(v835);
      while ( __strex(v836 - 1, v835) );
      v836 = (*v835)--;
    if ( v836 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v199);
  v200 = v1741 - 12;
  if ( (int *)(v1741 - 12) != &dword_28898C0 )
    v837 = (unsigned int *)(v1741 - 4);
        v838 = __ldrex(v837);
      while ( __strex(v838 - 1, v837) );
      v838 = (*v837)--;
    if ( v838 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v200);
  v201 = (void *)(v1739 - 12);
  if ( (int *)(v1739 - 12) != &dword_28898C0 )
    v839 = (unsigned int *)(v1739 - 4);
        v840 = __ldrex(v839);
      while ( __strex(v840 - 1, v839) );
      v840 = (*v839)--;
    if ( v840 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v201);
  v202 = (void *)(v1740 - 12);
  if ( (int *)(v1740 - 12) != &dword_28898C0 )
    v841 = (unsigned int *)(v1740 - 4);
        v842 = __ldrex(v841);
      while ( __strex(v842 - 1, v841) );
      v842 = (*v841)--;
    if ( v842 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v202);
  sub_119C884((void **)&v1734, "button.holo_placescreen");
  sub_119C884((void **)&v1733, "place screen");
  sub_119C854((int *)&v1735, &v1734);
  sub_119C854((int *)&v1736, &v1733);
  v1737 = 0;
  v1738 = 1045220557;
  v203 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v203 == HIDWORD(v203) )
      (int)&v1735);
    *(_DWORD *)v203 = v1735;
    v1735 = (char *)&unk_28898CC;
    *(_DWORD *)(v203 + 4) = v1736;
    v1736 = (char *)&unk_28898CC;
    HIDWORD(v203) = v1738;
    *(_DWORD *)(v203 + 8) = v1737;
    *(_DWORD *)(v203 + 12) = HIDWORD(v203);
  v204 = v1736 - 12;
  if ( (int *)(v1736 - 12) != &dword_28898C0 )
    v843 = (unsigned int *)(v1736 - 4);
        v844 = __ldrex(v843);
      while ( __strex(v844 - 1, v843) );
      v844 = (*v843)--;
    if ( v844 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v204);
  v205 = v1735 - 12;
  if ( (int *)(v1735 - 12) != &dword_28898C0 )
    v845 = (unsigned int *)(v1735 - 4);
        v846 = __ldrex(v845);
      while ( __strex(v846 - 1, v845) );
      v846 = (*v845)--;
    if ( v846 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v205);
  v206 = (void *)(v1733 - 12);
  if ( (int *)(v1733 - 12) != &dword_28898C0 )
    v847 = (unsigned int *)(v1733 - 4);
        v848 = __ldrex(v847);
      while ( __strex(v848 - 1, v847) );
      v848 = (*v847)--;
    if ( v848 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v206);
  v207 = (void *)(v1734 - 12);
  if ( (int *)(v1734 - 12) != &dword_28898C0 )
    v849 = (unsigned int *)(v1734 - 4);
        v850 = __ldrex(v849);
      while ( __strex(v850 - 1, v849) );
      v850 = (*v849)--;
    if ( v850 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v207);
  sub_119C884((void **)&v1728, "button.holo_placescreen");
  sub_119C884((void **)&v1727, "playscreen");
  sub_119C854((int *)&v1729, &v1728);
  sub_119C854((int *)&v1730, &v1727);
  v1731 = 0;
  v1732 = 1045220557;
  v208 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v208 == HIDWORD(v208) )
      (int)&v1729);
    *(_DWORD *)v208 = v1729;
    v1729 = (char *)&unk_28898CC;
    *(_DWORD *)(v208 + 4) = v1730;
    v1730 = (char *)&unk_28898CC;
    HIDWORD(v208) = v1732;
    *(_DWORD *)(v208 + 8) = v1731;
    *(_DWORD *)(v208 + 12) = HIDWORD(v208);
  v209 = v1730 - 12;
  if ( (int *)(v1730 - 12) != &dword_28898C0 )
    v851 = (unsigned int *)(v1730 - 4);
        v852 = __ldrex(v851);
      while ( __strex(v852 - 1, v851) );
      v852 = (*v851)--;
    if ( v852 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v209);
  v210 = v1729 - 12;
  if ( (int *)(v1729 - 12) != &dword_28898C0 )
    v853 = (unsigned int *)(v1729 - 4);
        v854 = __ldrex(v853);
      while ( __strex(v854 - 1, v853) );
      v854 = (*v853)--;
    if ( v854 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v210);
  v211 = (void *)(v1727 - 12);
  if ( (int *)(v1727 - 12) != &dword_28898C0 )
    v855 = (unsigned int *)(v1727 - 4);
        v856 = __ldrex(v855);
      while ( __strex(v856 - 1, v855) );
      v856 = (*v855)--;
    if ( v856 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v211);
  v212 = (void *)(v1728 - 12);
  if ( (int *)(v1728 - 12) != &dword_28898C0 )
    v857 = (unsigned int *)(v1728 - 4);
        v858 = __ldrex(v857);
      while ( __strex(v858 - 1, v857) );
      v858 = (*v857)--;
    if ( v858 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v212);
  sub_119C884((void **)&v1722, "button.holo_placeviewer");
  sub_119C884((void **)&v1721, "place world");
  sub_119C854((int *)&v1723, &v1722);
  sub_119C854((int *)&v1724, &v1721);
  v1725 = 0;
  v1726 = 1045220557;
  v213 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v213 == HIDWORD(v213) )
      (int)&v1723);
    *(_DWORD *)v213 = v1723;
    v1723 = (char *)&unk_28898CC;
    *(_DWORD *)(v213 + 4) = v1724;
    v1724 = (char *)&unk_28898CC;
    HIDWORD(v213) = v1726;
    *(_DWORD *)(v213 + 8) = v1725;
    *(_DWORD *)(v213 + 12) = HIDWORD(v213);
  v214 = v1724 - 12;
  if ( (int *)(v1724 - 12) != &dword_28898C0 )
    v859 = (unsigned int *)(v1724 - 4);
        v860 = __ldrex(v859);
      while ( __strex(v860 - 1, v859) );
      v860 = (*v859)--;
    if ( v860 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v214);
  v215 = v1723 - 12;
  if ( (int *)(v1723 - 12) != &dword_28898C0 )
    v861 = (unsigned int *)(v1723 - 4);
        v862 = __ldrex(v861);
      while ( __strex(v862 - 1, v861) );
      v862 = (*v861)--;
    if ( v862 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v215);
  v216 = (void *)(v1721 - 12);
  if ( (int *)(v1721 - 12) != &dword_28898C0 )
    v863 = (unsigned int *)(v1721 - 4);
        v864 = __ldrex(v863);
      while ( __strex(v864 - 1, v863) );
      v864 = (*v863)--;
    if ( v864 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v216);
  v217 = (void *)(v1722 - 12);
  if ( (int *)(v1722 - 12) != &dword_28898C0 )
    v865 = (unsigned int *)(v1722 - 4);
        v866 = __ldrex(v865);
      while ( __strex(v866 - 1, v865) );
      v866 = (*v865)--;
    if ( v866 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v217);
  sub_119C884((void **)&v1716, "button.holo_placeviewer");
  sub_119C884((void **)&v1715, "playsworld");
  sub_119C854((int *)&v1717, &v1716);
  sub_119C854((int *)&v1718, &v1715);
  v1719 = 0;
  v1720 = 1045220557;
  v218 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v218 == HIDWORD(v218) )
      (int)&v1717);
    *(_DWORD *)v218 = v1717;
    v1717 = (char *)&unk_28898CC;
    *(_DWORD *)(v218 + 4) = v1718;
    v1718 = (char *)&unk_28898CC;
    HIDWORD(v218) = v1720;
    *(_DWORD *)(v218 + 8) = v1719;
    *(_DWORD *)(v218 + 12) = HIDWORD(v218);
  v219 = v1718 - 12;
  if ( (int *)(v1718 - 12) != &dword_28898C0 )
    v867 = (unsigned int *)(v1718 - 4);
        v868 = __ldrex(v867);
      while ( __strex(v868 - 1, v867) );
      v868 = (*v867)--;
    if ( v868 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v219);
  v220 = v1717 - 12;
  if ( (int *)(v1717 - 12) != &dword_28898C0 )
    v869 = (unsigned int *)(v1717 - 4);
        v870 = __ldrex(v869);
      while ( __strex(v870 - 1, v869) );
      v870 = (*v869)--;
    if ( v870 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v220);
  v221 = (void *)(v1715 - 12);
  if ( (int *)(v1715 - 12) != &dword_28898C0 )
    v871 = (unsigned int *)(v1715 - 4);
        v872 = __ldrex(v871);
      while ( __strex(v872 - 1, v871) );
      v872 = (*v871)--;
    if ( v872 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v221);
  v222 = (void *)(v1716 - 12);
  if ( (int *)(v1716 - 12) != &dword_28898C0 )
    v873 = (unsigned int *)(v1716 - 4);
        v874 = __ldrex(v873);
      while ( __strex(v874 - 1, v873) );
      v874 = (*v873)--;
    if ( v874 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v222);
  sub_119C884((void **)&v1710, "button.holo_goback");
  sub_119C884((void **)&v1709, "go back");
  sub_119C854((int *)&v1711, &v1710);
  sub_119C854((int *)&v1712, &v1709);
  v1713 = 0;
  v1714 = 1048576000;
  v223 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v223 == HIDWORD(v223) )
      (int)&v1711);
    *(_DWORD *)v223 = v1711;
    v1711 = (char *)&unk_28898CC;
    *(_DWORD *)(v223 + 4) = v1712;
    v1712 = (char *)&unk_28898CC;
    HIDWORD(v223) = v1714;
    *(_DWORD *)(v223 + 8) = v1713;
    *(_DWORD *)(v223 + 12) = HIDWORD(v223);
  v224 = v1712 - 12;
  if ( (int *)(v1712 - 12) != &dword_28898C0 )
    v875 = (unsigned int *)(v1712 - 4);
        v876 = __ldrex(v875);
      while ( __strex(v876 - 1, v875) );
      v876 = (*v875)--;
    if ( v876 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v224);
  v225 = v1711 - 12;
  if ( (int *)(v1711 - 12) != &dword_28898C0 )
    v877 = (unsigned int *)(v1711 - 4);
        v878 = __ldrex(v877);
      while ( __strex(v878 - 1, v877) );
      v878 = (*v877)--;
    if ( v878 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v225);
  v226 = (void *)(v1709 - 12);
  if ( (int *)(v1709 - 12) != &dword_28898C0 )
    v879 = (unsigned int *)(v1709 - 4);
        v880 = __ldrex(v879);
      while ( __strex(v880 - 1, v879) );
      v880 = (*v879)--;
    if ( v880 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v226);
  v227 = (void *)(v1710 - 12);
  if ( (int *)(v1710 - 12) != &dword_28898C0 )
    v881 = (unsigned int *)(v1710 - 4);
        v882 = __ldrex(v881);
      while ( __strex(v882 - 1, v881) );
      v882 = (*v881)--;
    if ( v882 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v227);
  sub_119C884((void **)&v1704, "button.holo_goback");
  sub_119C884((void **)&v1703, "goback");
  sub_119C854((int *)&v1705, &v1704);
  sub_119C854((int *)&v1706, &v1703);
  v1707 = 0;
  v1708 = 1048576000;
  v228 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v228 == HIDWORD(v228) )
      (int)&v1705);
    *(_DWORD *)v228 = v1705;
    v1705 = (char *)&unk_28898CC;
    *(_DWORD *)(v228 + 4) = v1706;
    v1706 = (char *)&unk_28898CC;
    HIDWORD(v228) = v1708;
    *(_DWORD *)(v228 + 8) = v1707;
    *(_DWORD *)(v228 + 12) = HIDWORD(v228);
  v229 = v1706 - 12;
  if ( (int *)(v1706 - 12) != &dword_28898C0 )
    v883 = (unsigned int *)(v1706 - 4);
        v884 = __ldrex(v883);
      while ( __strex(v884 - 1, v883) );
      v884 = (*v883)--;
    if ( v884 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v229);
  v230 = v1705 - 12;
  if ( (int *)(v1705 - 12) != &dword_28898C0 )
    v885 = (unsigned int *)(v1705 - 4);
        v886 = __ldrex(v885);
      while ( __strex(v886 - 1, v885) );
      v886 = (*v885)--;
    if ( v886 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v230);
  v231 = (void *)(v1703 - 12);
  if ( (int *)(v1703 - 12) != &dword_28898C0 )
    v887 = (unsigned int *)(v1703 - 4);
        v888 = __ldrex(v887);
      while ( __strex(v888 - 1, v887) );
      v888 = (*v887)--;
    if ( v888 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v231);
  v232 = (void *)(v1704 - 12);
  if ( (int *)(v1704 - 12) != &dword_28898C0 )
    v889 = (unsigned int *)(v1704 - 4);
        v890 = __ldrex(v889);
      while ( __strex(v890 - 1, v889) );
      v890 = (*v889)--;
    if ( v890 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v232);
  sub_119C884((void **)&v1698, "button.holo_viewermode");
  sub_119C884((void **)&v1697, "create world");
  sub_119C854((int *)&v1699, &v1698);
  sub_119C854((int *)&v1700, &v1697);
  v1701 = 0;
  v1702 = 1048576000;
  v233 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v233 == HIDWORD(v233) )
      (int)&v1699);
    *(_DWORD *)v233 = v1699;
    v1699 = (char *)&unk_28898CC;
    *(_DWORD *)(v233 + 4) = v1700;
    v1700 = (char *)&unk_28898CC;
    HIDWORD(v233) = v1702;
    *(_DWORD *)(v233 + 8) = v1701;
    *(_DWORD *)(v233 + 12) = HIDWORD(v233);
  v234 = v1700 - 12;
  if ( (int *)(v1700 - 12) != &dword_28898C0 )
    v891 = (unsigned int *)(v1700 - 4);
        v892 = __ldrex(v891);
      while ( __strex(v892 - 1, v891) );
      v892 = (*v891)--;
    if ( v892 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v234);
  v235 = v1699 - 12;
  if ( (int *)(v1699 - 12) != &dword_28898C0 )
    v893 = (unsigned int *)(v1699 - 4);
        v894 = __ldrex(v893);
      while ( __strex(v894 - 1, v893) );
      v894 = (*v893)--;
    if ( v894 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v235);
  v236 = (void *)(v1697 - 12);
  if ( (int *)(v1697 - 12) != &dword_28898C0 )
    v895 = (unsigned int *)(v1697 - 4);
        v896 = __ldrex(v895);
      while ( __strex(v896 - 1, v895) );
      v896 = (*v895)--;
    if ( v896 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v236);
  v237 = (void *)(v1698 - 12);
  if ( (int *)(v1698 - 12) != &dword_28898C0 )
    v897 = (unsigned int *)(v1698 - 4);
        v898 = __ldrex(v897);
      while ( __strex(v898 - 1, v897) );
      v898 = (*v897)--;
    if ( v898 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v237);
  sub_119C884((void **)&v1692, "button.holo_viewermode");
  sub_119C884((void **)&v1691, "create world");
  sub_119C854((int *)&v1693, &v1692);
  sub_119C854((int *)&v1694, &v1691);
  v1695 = 1;
  v1696 = 1048576000;
  v238 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v238 == HIDWORD(v238) )
      (int)&v1693);
    *(_DWORD *)v238 = v1693;
    v1693 = (char *)&unk_28898CC;
    *(_DWORD *)(v238 + 4) = v1694;
    v1694 = (char *)&unk_28898CC;
    HIDWORD(v238) = v1696;
    *(_DWORD *)(v238 + 8) = v1695;
    *(_DWORD *)(v238 + 12) = HIDWORD(v238);
  v239 = v1694 - 12;
  if ( (int *)(v1694 - 12) != &dword_28898C0 )
    v899 = (unsigned int *)(v1694 - 4);
        v900 = __ldrex(v899);
      while ( __strex(v900 - 1, v899) );
      v900 = (*v899)--;
    if ( v900 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v239);
  v240 = v1693 - 12;
  if ( (int *)(v1693 - 12) != &dword_28898C0 )
    v901 = (unsigned int *)(v1693 - 4);
        v902 = __ldrex(v901);
      while ( __strex(v902 - 1, v901) );
      v902 = (*v901)--;
    if ( v902 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v240);
  v241 = (void *)(v1691 - 12);
  if ( (int *)(v1691 - 12) != &dword_28898C0 )
    v903 = (unsigned int *)(v1691 - 4);
        v904 = __ldrex(v903);
      while ( __strex(v904 - 1, v903) );
      v904 = (*v903)--;
    if ( v904 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v241);
  v242 = (void *)(v1692 - 12);
  if ( (int *)(v1692 - 12) != &dword_28898C0 )
    v905 = (unsigned int *)(v1692 - 4);
        v906 = __ldrex(v905);
      while ( __strex(v906 - 1, v905) );
      v906 = (*v905)--;
    if ( v906 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v242);
  sub_119C884((void **)&v1686, "button.holo_viewermode");
  sub_119C884((void **)&v1685, "create world");
  sub_119C854((int *)&v1687, &v1686);
  sub_119C854((int *)&v1688, &v1685);
  v1689 = 4;
  v1690 = 1048576000;
  v243 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v243 == HIDWORD(v243) )
      (int)&v1687);
    *(_DWORD *)v243 = v1687;
    v1687 = (char *)&unk_28898CC;
    *(_DWORD *)(v243 + 4) = v1688;
    v1688 = (char *)&unk_28898CC;
    HIDWORD(v243) = v1690;
    *(_DWORD *)(v243 + 8) = v1689;
    *(_DWORD *)(v243 + 12) = HIDWORD(v243);
  v244 = v1688 - 12;
  if ( (int *)(v1688 - 12) != &dword_28898C0 )
    v907 = (unsigned int *)(v1688 - 4);
        v908 = __ldrex(v907);
      while ( __strex(v908 - 1, v907) );
      v908 = (*v907)--;
    if ( v908 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v244);
  v245 = v1687 - 12;
  if ( (int *)(v1687 - 12) != &dword_28898C0 )
    v909 = (unsigned int *)(v1687 - 4);
        v910 = __ldrex(v909);
      while ( __strex(v910 - 1, v909) );
      v910 = (*v909)--;
    if ( v910 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v245);
  v246 = (void *)(v1685 - 12);
  if ( (int *)(v1685 - 12) != &dword_28898C0 )
    v911 = (unsigned int *)(v1685 - 4);
        v912 = __ldrex(v911);
      while ( __strex(v912 - 1, v911) );
      v912 = (*v911)--;
    if ( v912 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v246);
  v247 = (void *)(v1686 - 12);
  if ( (int *)(v1686 - 12) != &dword_28898C0 )
    v913 = (unsigned int *)(v1686 - 4);
        v914 = __ldrex(v913);
      while ( __strex(v914 - 1, v913) );
      v914 = (*v913)--;
    if ( v914 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v247);
  sub_119C884((void **)&v1680, "button.holo_realitymode");
  sub_119C884((void **)&v1679, "reality mode");
  sub_119C854((int *)&v1681, &v1680);
  sub_119C854((int *)&v1682, &v1679);
  v1683 = 1;
  v1684 = 1045220557;
  v248 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v248 == HIDWORD(v248) )
      (int)&v1681);
    *(_DWORD *)v248 = v1681;
    v1681 = (char *)&unk_28898CC;
    *(_DWORD *)(v248 + 4) = v1682;
    v1682 = (char *)&unk_28898CC;
    HIDWORD(v248) = v1684;
    *(_DWORD *)(v248 + 8) = v1683;
    *(_DWORD *)(v248 + 12) = HIDWORD(v248);
  v249 = v1682 - 12;
  if ( (int *)(v1682 - 12) != &dword_28898C0 )
    v915 = (unsigned int *)(v1682 - 4);
        v916 = __ldrex(v915);
      while ( __strex(v916 - 1, v915) );
      v916 = (*v915)--;
    if ( v916 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v249);
  v250 = v1681 - 12;
  if ( (int *)(v1681 - 12) != &dword_28898C0 )
    v917 = (unsigned int *)(v1681 - 4);
        v918 = __ldrex(v917);
      while ( __strex(v918 - 1, v917) );
      v918 = (*v917)--;
    if ( v918 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v250);
  v251 = (void *)(v1679 - 12);
  if ( (int *)(v1679 - 12) != &dword_28898C0 )
    v919 = (unsigned int *)(v1679 - 4);
        v920 = __ldrex(v919);
      while ( __strex(v920 - 1, v919) );
      v920 = (*v919)--;
    if ( v920 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v251);
  v252 = (void *)(v1680 - 12);
  if ( (int *)(v1680 - 12) != &dword_28898C0 )
    v921 = (unsigned int *)(v1680 - 4);
        v922 = __ldrex(v921);
      while ( __strex(v922 - 1, v921) );
      v922 = (*v921)--;
    if ( v922 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v252);
  sub_119C884((void **)&v1674, "button.holo_realitymode");
  sub_119C884((void **)&v1673, "reality mode");
  sub_119C854((int *)&v1675, &v1674);
  sub_119C854((int *)&v1676, &v1673);
  v1677 = 3;
  v1678 = 1045220557;
  v253 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v253 == HIDWORD(v253) )
      (int)&v1675);
    *(_DWORD *)v253 = v1675;
    v1675 = (char *)&unk_28898CC;
    *(_DWORD *)(v253 + 4) = v1676;
    v1676 = (char *)&unk_28898CC;
    HIDWORD(v253) = v1678;
    *(_DWORD *)(v253 + 8) = v1677;
    *(_DWORD *)(v253 + 12) = HIDWORD(v253);
  v254 = v1676 - 12;
  if ( (int *)(v1676 - 12) != &dword_28898C0 )
    v923 = (unsigned int *)(v1676 - 4);
        v924 = __ldrex(v923);
      while ( __strex(v924 - 1, v923) );
      v924 = (*v923)--;
    if ( v924 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v254);
  v255 = v1675 - 12;
  if ( (int *)(v1675 - 12) != &dword_28898C0 )
    v925 = (unsigned int *)(v1675 - 4);
        v926 = __ldrex(v925);
      while ( __strex(v926 - 1, v925) );
      v926 = (*v925)--;
    if ( v926 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v255);
  v256 = (void *)(v1673 - 12);
  if ( (int *)(v1673 - 12) != &dword_28898C0 )
    v927 = (unsigned int *)(v1673 - 4);
        v928 = __ldrex(v927);
      while ( __strex(v928 - 1, v927) );
      v928 = (*v927)--;
    if ( v928 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v256);
  v257 = (void *)(v1674 - 12);
  if ( (int *)(v1674 - 12) != &dword_28898C0 )
    v929 = (unsigned int *)(v1674 - 4);
        v930 = __ldrex(v929);
      while ( __strex(v930 - 1, v929) );
      v930 = (*v929)--;
    if ( v930 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v257);
  sub_119C884((void **)&v1668, "button.holo_realitymode");
  sub_119C884((void **)&v1667, "reality mode");
  sub_119C854((int *)&v1669, &v1668);
  sub_119C854((int *)&v1670, &v1667);
  v1671 = 2;
  v1672 = 1045220557;
  v258 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v258 == HIDWORD(v258) )
      (int)&v1669);
    *(_DWORD *)v258 = v1669;
    v1669 = (char *)&unk_28898CC;
    *(_DWORD *)(v258 + 4) = v1670;
    v1670 = (char *)&unk_28898CC;
    HIDWORD(v258) = v1672;
    *(_DWORD *)(v258 + 8) = v1671;
    *(_DWORD *)(v258 + 12) = HIDWORD(v258);
  v259 = v1670 - 12;
  if ( (int *)(v1670 - 12) != &dword_28898C0 )
    v931 = (unsigned int *)(v1670 - 4);
        v932 = __ldrex(v931);
      while ( __strex(v932 - 1, v931) );
      v932 = (*v931)--;
    if ( v932 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v259);
  v260 = v1669 - 12;
  if ( (int *)(v1669 - 12) != &dword_28898C0 )
    v933 = (unsigned int *)(v1669 - 4);
        v934 = __ldrex(v933);
      while ( __strex(v934 - 1, v933) );
      v934 = (*v933)--;
    if ( v934 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v260);
  v261 = (void *)(v1667 - 12);
  if ( (int *)(v1667 - 12) != &dword_28898C0 )
    v935 = (unsigned int *)(v1667 - 4);
        v936 = __ldrex(v935);
      while ( __strex(v936 - 1, v935) );
      v936 = (*v935)--;
    if ( v936 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v261);
  v262 = (void *)(v1668 - 12);
  if ( (int *)(v1668 - 12) != &dword_28898C0 )
    v937 = (unsigned int *)(v1668 - 4);
        v938 = __ldrex(v937);
      while ( __strex(v938 - 1, v937) );
      v938 = (*v937)--;
    if ( v938 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v262);
  sub_119C884((void **)&v1662, "button.holo_realitymode");
  sub_119C884((void **)&v1661, "wrap around mode");
  sub_119C854((int *)&v1663, &v1662);
  sub_119C854((int *)&v1664, &v1661);
  v1665 = 1;
  v1666 = 1045220557;
  v263 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v263 == HIDWORD(v263) )
      (int)&v1663);
    *(_DWORD *)v263 = v1663;
    v1663 = (char *)&unk_28898CC;
    *(_DWORD *)(v263 + 4) = v1664;
    v1664 = (char *)&unk_28898CC;
    HIDWORD(v263) = v1666;
    *(_DWORD *)(v263 + 8) = v1665;
    *(_DWORD *)(v263 + 12) = HIDWORD(v263);
  v264 = v1664 - 12;
  if ( (int *)(v1664 - 12) != &dword_28898C0 )
    v939 = (unsigned int *)(v1664 - 4);
        v940 = __ldrex(v939);
      while ( __strex(v940 - 1, v939) );
      v940 = (*v939)--;
    if ( v940 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v264);
  v265 = v1663 - 12;
  if ( (int *)(v1663 - 12) != &dword_28898C0 )
    v941 = (unsigned int *)(v1663 - 4);
        v942 = __ldrex(v941);
      while ( __strex(v942 - 1, v941) );
      v942 = (*v941)--;
    if ( v942 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v265);
  v266 = (void *)(v1661 - 12);
  if ( (int *)(v1661 - 12) != &dword_28898C0 )
    v943 = (unsigned int *)(v1661 - 4);
        v944 = __ldrex(v943);
      while ( __strex(v944 - 1, v943) );
      v944 = (*v943)--;
    if ( v944 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v266);
  v267 = (void *)(v1662 - 12);
  if ( (int *)(v1662 - 12) != &dword_28898C0 )
    v945 = (unsigned int *)(v1662 - 4);
        v946 = __ldrex(v945);
      while ( __strex(v946 - 1, v945) );
      v946 = (*v945)--;
    if ( v946 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v267);
  sub_119C884((void **)&v1656, "button.holo_realitymode");
  sub_119C884((void **)&v1655, "wrap around mode");
  sub_119C854((int *)&v1657, &v1656);
  sub_119C854((int *)&v1658, &v1655);
  v1659 = 3;
  v1660 = 1045220557;
  v268 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v268 == HIDWORD(v268) )
      (int)&v1657);
    *(_DWORD *)v268 = v1657;
    v1657 = (char *)&unk_28898CC;
    *(_DWORD *)(v268 + 4) = v1658;
    v1658 = (char *)&unk_28898CC;
    HIDWORD(v268) = v1660;
    *(_DWORD *)(v268 + 8) = v1659;
    *(_DWORD *)(v268 + 12) = HIDWORD(v268);
  v269 = v1658 - 12;
  if ( (int *)(v1658 - 12) != &dword_28898C0 )
    v947 = (unsigned int *)(v1658 - 4);
        v948 = __ldrex(v947);
      while ( __strex(v948 - 1, v947) );
      v948 = (*v947)--;
    if ( v948 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v269);
  v270 = v1657 - 12;
  if ( (int *)(v1657 - 12) != &dword_28898C0 )
    v949 = (unsigned int *)(v1657 - 4);
        v950 = __ldrex(v949);
      while ( __strex(v950 - 1, v949) );
      v950 = (*v949)--;
    if ( v950 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v270);
  v271 = (void *)(v1655 - 12);
  if ( (int *)(v1655 - 12) != &dword_28898C0 )
    v951 = (unsigned int *)(v1655 - 4);
        v952 = __ldrex(v951);
      while ( __strex(v952 - 1, v951) );
      v952 = (*v951)--;
    if ( v952 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v271);
  v272 = (void *)(v1656 - 12);
  if ( (int *)(v1656 - 12) != &dword_28898C0 )
    v953 = (unsigned int *)(v1656 - 4);
        v954 = __ldrex(v953);
      while ( __strex(v954 - 1, v953) );
      v954 = (*v953)--;
    if ( v954 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v272);
  sub_119C884((void **)&v1650, "button.holo_realitymode");
  sub_119C884((void **)&v1649, "wrap around mode");
  sub_119C854((int *)&v1651, &v1650);
  sub_119C854((int *)&v1652, &v1649);
  v1653 = 2;
  v1654 = 1045220557;
  v273 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v273 == HIDWORD(v273) )
      (int)&v1651);
    *(_DWORD *)v273 = v1651;
    v1651 = (char *)&unk_28898CC;
    *(_DWORD *)(v273 + 4) = v1652;
    v1652 = (char *)&unk_28898CC;
    HIDWORD(v273) = v1654;
    *(_DWORD *)(v273 + 8) = v1653;
    *(_DWORD *)(v273 + 12) = HIDWORD(v273);
  v274 = v1652 - 12;
  if ( (int *)(v1652 - 12) != &dword_28898C0 )
    v955 = (unsigned int *)(v1652 - 4);
        v956 = __ldrex(v955);
      while ( __strex(v956 - 1, v955) );
      v956 = (*v955)--;
    if ( v956 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v274);
  v275 = v1651 - 12;
  if ( (int *)(v1651 - 12) != &dword_28898C0 )
    v957 = (unsigned int *)(v1651 - 4);
        v958 = __ldrex(v957);
      while ( __strex(v958 - 1, v957) );
      v958 = (*v957)--;
    if ( v958 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v275);
  v276 = (void *)(v1649 - 12);
  if ( (int *)(v1649 - 12) != &dword_28898C0 )
    v959 = (unsigned int *)(v1649 - 4);
        v960 = __ldrex(v959);
      while ( __strex(v960 - 1, v959) );
      v960 = (*v959)--;
    if ( v960 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v276);
  v277 = (void *)(v1650 - 12);
  if ( (int *)(v1650 - 12) != &dword_28898C0 )
    v961 = (unsigned int *)(v1650 - 4);
        v962 = __ldrex(v961);
      while ( __strex(v962 - 1, v961) );
      v962 = (*v961)--;
    if ( v962 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v277);
  sub_119C884((void **)&v1644, "button.holo_realitymode_VR");
  sub_119C884((void **)&v1643, "wrap around mode");
  sub_119C854((int *)&v1645, &v1644);
  sub_119C854((int *)&v1646, &v1643);
  v1647 = 4;
  v1648 = 1045220557;
  v278 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v278 == HIDWORD(v278) )
      (int)&v1645);
    *(_DWORD *)v278 = v1645;
    v1645 = (char *)&unk_28898CC;
    *(_DWORD *)(v278 + 4) = v1646;
    v1646 = (char *)&unk_28898CC;
    HIDWORD(v278) = v1648;
    *(_DWORD *)(v278 + 8) = v1647;
    *(_DWORD *)(v278 + 12) = HIDWORD(v278);
  v279 = v1646 - 12;
  if ( (int *)(v1646 - 12) != &dword_28898C0 )
    v963 = (unsigned int *)(v1646 - 4);
        v964 = __ldrex(v963);
      while ( __strex(v964 - 1, v963) );
      v964 = (*v963)--;
    if ( v964 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v279);
  v280 = v1645 - 12;
  if ( (int *)(v1645 - 12) != &dword_28898C0 )
    v965 = (unsigned int *)(v1645 - 4);
        v966 = __ldrex(v965);
      while ( __strex(v966 - 1, v965) );
      v966 = (*v965)--;
    if ( v966 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v280);
  v281 = (void *)(v1643 - 12);
  if ( (int *)(v1643 - 12) != &dword_28898C0 )
    v967 = (unsigned int *)(v1643 - 4);
        v968 = __ldrex(v967);
      while ( __strex(v968 - 1, v967) );
      v968 = (*v967)--;
    if ( v968 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v281);
  v282 = (void *)(v1644 - 12);
  if ( (int *)(v1644 - 12) != &dword_28898C0 )
    v969 = (unsigned int *)(v1644 - 4);
        v970 = __ldrex(v969);
      while ( __strex(v970 - 1, v969) );
      v970 = (*v969)--;
    if ( v970 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v282);
  sub_119C884((void **)&v1638, "button.holo_realitymode_reality");
  sub_119C884((void **)&v1637, "reality mode");
  sub_119C854((int *)&v1639, &v1638);
  sub_119C854((int *)&v1640, &v1637);
  v1641 = 4;
  v1642 = 1045220557;
  v283 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v283 == HIDWORD(v283) )
      (int)&v1639);
    *(_DWORD *)v283 = v1639;
    v1639 = (char *)&unk_28898CC;
    *(_DWORD *)(v283 + 4) = v1640;
    v1640 = (char *)&unk_28898CC;
    HIDWORD(v283) = v1642;
    *(_DWORD *)(v283 + 8) = v1641;
    *(_DWORD *)(v283 + 12) = HIDWORD(v283);
  v284 = v1640 - 12;
  if ( (int *)(v1640 - 12) != &dword_28898C0 )
    v971 = (unsigned int *)(v1640 - 4);
        v972 = __ldrex(v971);
      while ( __strex(v972 - 1, v971) );
      v972 = (*v971)--;
    if ( v972 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v284);
  v285 = v1639 - 12;
  if ( (int *)(v1639 - 12) != &dword_28898C0 )
    v973 = (unsigned int *)(v1639 - 4);
        v974 = __ldrex(v973);
      while ( __strex(v974 - 1, v973) );
      v974 = (*v973)--;
    if ( v974 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v285);
  v286 = (void *)(v1637 - 12);
  if ( (int *)(v1637 - 12) != &dword_28898C0 )
    v975 = (unsigned int *)(v1637 - 4);
        v976 = __ldrex(v975);
      while ( __strex(v976 - 1, v975) );
      v976 = (*v975)--;
    if ( v976 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v286);
  v287 = (void *)(v1638 - 12);
  if ( (int *)(v1638 - 12) != &dword_28898C0 )
    v977 = (unsigned int *)(v1638 - 4);
        v978 = __ldrex(v977);
      while ( __strex(v978 - 1, v977) );
      v978 = (*v977)--;
    if ( v978 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v287);
  sub_119C884((void **)&v1632, "button.holo_screenmode");
  sub_119C884((void **)&v1631, "create screen");
  sub_119C854((int *)&v1633, &v1632);
  sub_119C854((int *)&v1634, &v1631);
  v1635 = 0;
  v1636 = 1045220557;
  v288 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v288 == HIDWORD(v288) )
      (int)&v1633);
    *(_DWORD *)v288 = v1633;
    v1633 = (char *)&unk_28898CC;
    *(_DWORD *)(v288 + 4) = v1634;
    v1634 = (char *)&unk_28898CC;
    HIDWORD(v288) = v1636;
    *(_DWORD *)(v288 + 8) = v1635;
    *(_DWORD *)(v288 + 12) = HIDWORD(v288);
  v289 = v1634 - 12;
  if ( (int *)(v1634 - 12) != &dword_28898C0 )
    v979 = (unsigned int *)(v1634 - 4);
        v980 = __ldrex(v979);
      while ( __strex(v980 - 1, v979) );
      v980 = (*v979)--;
    if ( v980 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v289);
  v290 = v1633 - 12;
  if ( (int *)(v1633 - 12) != &dword_28898C0 )
    v981 = (unsigned int *)(v1633 - 4);
        v982 = __ldrex(v981);
      while ( __strex(v982 - 1, v981) );
      v982 = (*v981)--;
    if ( v982 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v290);
  v291 = (void *)(v1631 - 12);
  if ( (int *)(v1631 - 12) != &dword_28898C0 )
    v983 = (unsigned int *)(v1631 - 4);
        v984 = __ldrex(v983);
      while ( __strex(v984 - 1, v983) );
      v984 = (*v983)--;
    if ( v984 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v291);
  v292 = (void *)(v1632 - 12);
  if ( (int *)(v1632 - 12) != &dword_28898C0 )
    v985 = (unsigned int *)(v1632 - 4);
        v986 = __ldrex(v985);
      while ( __strex(v986 - 1, v985) );
      v986 = (*v985)--;
    if ( v986 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v292);
  sub_119C884((void **)&v1626, "button.holo_screenmode");
  sub_119C884((void **)&v1625, "create screen");
  sub_119C854((int *)&v1627, &v1626);
  sub_119C854((int *)&v1628, &v1625);
  v1629 = 3;
  v1630 = 1045220557;
  v293 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v293 == HIDWORD(v293) )
      (int)&v1627);
    *(_DWORD *)v293 = v1627;
    v1627 = (char *)&unk_28898CC;
    *(_DWORD *)(v293 + 4) = v1628;
    v1628 = (char *)&unk_28898CC;
    HIDWORD(v293) = v1630;
    *(_DWORD *)(v293 + 8) = v1629;
    *(_DWORD *)(v293 + 12) = HIDWORD(v293);
  v294 = v1628 - 12;
  if ( (int *)(v1628 - 12) != &dword_28898C0 )
    v987 = (unsigned int *)(v1628 - 4);
        v988 = __ldrex(v987);
      while ( __strex(v988 - 1, v987) );
      v988 = (*v987)--;
    if ( v988 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v294);
  v295 = v1627 - 12;
  if ( (int *)(v1627 - 12) != &dword_28898C0 )
    v989 = (unsigned int *)(v1627 - 4);
        v990 = __ldrex(v989);
      while ( __strex(v990 - 1, v989) );
      v990 = (*v989)--;
    if ( v990 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v295);
  v296 = (void *)(v1625 - 12);
  if ( (int *)(v1625 - 12) != &dword_28898C0 )
    v991 = (unsigned int *)(v1625 - 4);
        v992 = __ldrex(v991);
      while ( __strex(v992 - 1, v991) );
      v992 = (*v991)--;
    if ( v992 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v296);
  v297 = (void *)(v1626 - 12);
  if ( (int *)(v1626 - 12) != &dword_28898C0 )
    v993 = (unsigned int *)(v1626 - 4);
        v994 = __ldrex(v993);
      while ( __strex(v994 - 1, v993) );
      v994 = (*v993)--;
    if ( v994 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v297);
  sub_119C884((void **)&v1620, "button.holo_screenmode");
  sub_119C884((void **)&v1619, "create screen");
  sub_119C854((int *)&v1621, &v1620);
  sub_119C854((int *)&v1622, &v1619);
  v1623 = 2;
  v1624 = 1045220557;
  v298 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v298 == HIDWORD(v298) )
      (int)&v1621);
    *(_DWORD *)v298 = v1621;
    v1621 = (char *)&unk_28898CC;
    *(_DWORD *)(v298 + 4) = v1622;
    v1622 = (char *)&unk_28898CC;
    HIDWORD(v298) = v1624;
    *(_DWORD *)(v298 + 8) = v1623;
    *(_DWORD *)(v298 + 12) = HIDWORD(v298);
  v299 = v1622 - 12;
  if ( (int *)(v1622 - 12) != &dword_28898C0 )
    v995 = (unsigned int *)(v1622 - 4);
        v996 = __ldrex(v995);
      while ( __strex(v996 - 1, v995) );
      v996 = (*v995)--;
    if ( v996 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v299);
  v300 = v1621 - 12;
  if ( (int *)(v1621 - 12) != &dword_28898C0 )
    v997 = (unsigned int *)(v1621 - 4);
        v998 = __ldrex(v997);
      while ( __strex(v998 - 1, v997) );
      v998 = (*v997)--;
    if ( v998 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v300);
  v301 = (void *)(v1619 - 12);
  if ( (int *)(v1619 - 12) != &dword_28898C0 )
    v999 = (unsigned int *)(v1619 - 4);
        v1000 = __ldrex(v999);
      while ( __strex(v1000 - 1, v999) );
      v1000 = (*v999)--;
    if ( v1000 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v301);
  v302 = (void *)(v1620 - 12);
  if ( (int *)(v1620 - 12) != &dword_28898C0 )
    v1001 = (unsigned int *)(v1620 - 4);
        v1002 = __ldrex(v1001);
      while ( __strex(v1002 - 1, v1001) );
      v1002 = (*v1001)--;
    if ( v1002 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v302);
  sub_119C884((void **)&v1614, "button.holo_screenmode");
  sub_119C884((void **)&v1613, "create screen");
  sub_119C854((int *)&v1615, &v1614);
  sub_119C854((int *)&v1616, &v1613);
  v1617 = 4;
  v1618 = 1045220557;
  v303 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v303 == HIDWORD(v303) )
      (int)&v1615);
    *(_DWORD *)v303 = v1615;
    v1615 = (char *)&unk_28898CC;
    *(_DWORD *)(v303 + 4) = v1616;
    v1616 = (char *)&unk_28898CC;
    HIDWORD(v303) = v1618;
    *(_DWORD *)(v303 + 8) = v1617;
    *(_DWORD *)(v303 + 12) = HIDWORD(v303);
  v304 = v1616 - 12;
  if ( (int *)(v1616 - 12) != &dword_28898C0 )
    v1003 = (unsigned int *)(v1616 - 4);
        v1004 = __ldrex(v1003);
      while ( __strex(v1004 - 1, v1003) );
      v1004 = (*v1003)--;
    if ( v1004 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v304);
  v305 = v1615 - 12;
  if ( (int *)(v1615 - 12) != &dword_28898C0 )
    v1005 = (unsigned int *)(v1615 - 4);
        v1006 = __ldrex(v1005);
      while ( __strex(v1006 - 1, v1005) );
      v1006 = (*v1005)--;
    if ( v1006 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v305);
  v306 = (void *)(v1613 - 12);
  if ( (int *)(v1613 - 12) != &dword_28898C0 )
    v1007 = (unsigned int *)(v1613 - 4);
        v1008 = __ldrex(v1007);
      while ( __strex(v1008 - 1, v1007) );
      v1008 = (*v1007)--;
    if ( v1008 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v306);
  v307 = (void *)(v1614 - 12);
  if ( (int *)(v1614 - 12) != &dword_28898C0 )
    v1009 = (unsigned int *)(v1614 - 4);
        v1010 = __ldrex(v1009);
      while ( __strex(v1010 - 1, v1009) );
      v1010 = (*v1009)--;
    if ( v1010 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v307);
  sub_119C884((void **)&v1608, "button.holo_autoalign");
  sub_119C884((void **)&v1607, "auto align");
  sub_119C854((int *)&v1609, &v1608);
  sub_119C854((int *)&v1610, &v1607);
  v1611 = 0;
  v1612 = 1048576000;
  v308 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v308 == HIDWORD(v308) )
      (int)&v1609);
    *(_DWORD *)v308 = v1609;
    v1609 = (char *)&unk_28898CC;
    *(_DWORD *)(v308 + 4) = v1610;
    v1610 = (char *)&unk_28898CC;
    HIDWORD(v308) = v1612;
    *(_DWORD *)(v308 + 8) = v1611;
    *(_DWORD *)(v308 + 12) = HIDWORD(v308);
  v309 = v1610 - 12;
  if ( (int *)(v1610 - 12) != &dword_28898C0 )
    v1011 = (unsigned int *)(v1610 - 4);
        v1012 = __ldrex(v1011);
      while ( __strex(v1012 - 1, v1011) );
      v1012 = (*v1011)--;
    if ( v1012 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v309);
  v310 = v1609 - 12;
  if ( (int *)(v1609 - 12) != &dword_28898C0 )
    v1013 = (unsigned int *)(v1609 - 4);
        v1014 = __ldrex(v1013);
      while ( __strex(v1014 - 1, v1013) );
      v1014 = (*v1013)--;
    if ( v1014 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v310);
  v311 = (void *)(v1607 - 12);
  if ( (int *)(v1607 - 12) != &dword_28898C0 )
    v1015 = (unsigned int *)(v1607 - 4);
        v1016 = __ldrex(v1015);
      while ( __strex(v1016 - 1, v1015) );
      v1016 = (*v1015)--;
    if ( v1016 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v311);
  v312 = (void *)(v1608 - 12);
  if ( (int *)(v1608 - 12) != &dword_28898C0 )
    v1017 = (unsigned int *)(v1608 - 4);
        v1018 = __ldrex(v1017);
      while ( __strex(v1018 - 1, v1017) );
      v1018 = (*v1017)--;
    if ( v1018 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v312);
  sub_119C884((void **)&v1602, "button.holo_autoalign");
  sub_119C884((void **)&v1601, "autoalign");
  sub_119C854((int *)&v1603, &v1602);
  sub_119C854((int *)&v1604, &v1601);
  v1605 = 0;
  v1606 = 1048576000;
  v313 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v313 == HIDWORD(v313) )
      (int)&v1603);
    *(_DWORD *)v313 = v1603;
    v1603 = (char *)&unk_28898CC;
    *(_DWORD *)(v313 + 4) = v1604;
    v1604 = (char *)&unk_28898CC;
    HIDWORD(v313) = v1606;
    *(_DWORD *)(v313 + 8) = v1605;
    *(_DWORD *)(v313 + 12) = HIDWORD(v313);
  v314 = v1604 - 12;
  if ( (int *)(v1604 - 12) != &dword_28898C0 )
    v1019 = (unsigned int *)(v1604 - 4);
        v1020 = __ldrex(v1019);
      while ( __strex(v1020 - 1, v1019) );
      v1020 = (*v1019)--;
    if ( v1020 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v314);
  v315 = v1603 - 12;
  if ( (int *)(v1603 - 12) != &dword_28898C0 )
    v1021 = (unsigned int *)(v1603 - 4);
        v1022 = __ldrex(v1021);
      while ( __strex(v1022 - 1, v1021) );
      v1022 = (*v1021)--;
    if ( v1022 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v315);
  v316 = (void *)(v1601 - 12);
  if ( (int *)(v1601 - 12) != &dword_28898C0 )
    v1023 = (unsigned int *)(v1601 - 4);
        v1024 = __ldrex(v1023);
      while ( __strex(v1024 - 1, v1023) );
      v1024 = (*v1023)--;
    if ( v1024 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v316);
  v317 = (void *)(v1602 - 12);
  if ( (int *)(v1602 - 12) != &dword_28898C0 )
    v1025 = (unsigned int *)(v1602 - 4);
        v1026 = __ldrex(v1025);
      while ( __strex(v1026 - 1, v1025) );
      v1026 = (*v1025)--;
    if ( v1026 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v317);
  sub_119C884((void **)&v1596, "button.holo_autoalign");
  sub_119C884((void **)&v1595, "autoaline");
  sub_119C854((int *)&v1597, &v1596);
  sub_119C854((int *)&v1598, &v1595);
  v1599 = 0;
  v1600 = 1048576000;
  v318 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v318 == HIDWORD(v318) )
      (int)&v1597);
    *(_DWORD *)v318 = v1597;
    v1597 = (char *)&unk_28898CC;
    *(_DWORD *)(v318 + 4) = v1598;
    v1598 = (char *)&unk_28898CC;
    HIDWORD(v318) = v1600;
    *(_DWORD *)(v318 + 8) = v1599;
    *(_DWORD *)(v318 + 12) = HIDWORD(v318);
  v319 = v1598 - 12;
  if ( (int *)(v1598 - 12) != &dword_28898C0 )
    v1027 = (unsigned int *)(v1598 - 4);
        v1028 = __ldrex(v1027);
      while ( __strex(v1028 - 1, v1027) );
      v1028 = (*v1027)--;
    if ( v1028 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v319);
  v320 = v1597 - 12;
  if ( (int *)(v1597 - 12) != &dword_28898C0 )
    v1029 = (unsigned int *)(v1597 - 4);
        v1030 = __ldrex(v1029);
      while ( __strex(v1030 - 1, v1029) );
      v1030 = (*v1029)--;
    if ( v1030 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v320);
  v321 = (void *)(v1595 - 12);
  if ( (int *)(v1595 - 12) != &dword_28898C0 )
    v1031 = (unsigned int *)(v1595 - 4);
        v1032 = __ldrex(v1031);
      while ( __strex(v1032 - 1, v1031) );
      v1032 = (*v1031)--;
    if ( v1032 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v321);
  v322 = (void *)(v1596 - 12);
  if ( (int *)(v1596 - 12) != &dword_28898C0 )
    v1033 = (unsigned int *)(v1596 - 4);
        v1034 = __ldrex(v1033);
      while ( __strex(v1034 - 1, v1033) );
      v1034 = (*v1033)--;
    if ( v1034 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v322);
  sub_119C884((void **)&v1590, "button.holo_pan");
  sub_119C884((void **)&v1589, "explore");
  sub_119C854((int *)&v1591, &v1590);
  sub_119C854((int *)&v1592, &v1589);
  v1593 = 3;
  v1594 = 1048576000;
  v323 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v323 == HIDWORD(v323) )
      (int)&v1591);
    *(_DWORD *)v323 = v1591;
    v1591 = (char *)&unk_28898CC;
    *(_DWORD *)(v323 + 4) = v1592;
    v1592 = (char *)&unk_28898CC;
    HIDWORD(v323) = v1594;
    *(_DWORD *)(v323 + 8) = v1593;
    *(_DWORD *)(v323 + 12) = HIDWORD(v323);
  v324 = v1592 - 12;
  if ( (int *)(v1592 - 12) != &dword_28898C0 )
    v1035 = (unsigned int *)(v1592 - 4);
        v1036 = __ldrex(v1035);
      while ( __strex(v1036 - 1, v1035) );
      v1036 = (*v1035)--;
    if ( v1036 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v324);
  v325 = v1591 - 12;
  if ( (int *)(v1591 - 12) != &dword_28898C0 )
    v1037 = (unsigned int *)(v1591 - 4);
        v1038 = __ldrex(v1037);
      while ( __strex(v1038 - 1, v1037) );
      v1038 = (*v1037)--;
    if ( v1038 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v325);
  v326 = (void *)(v1589 - 12);
  if ( (int *)(v1589 - 12) != &dword_28898C0 )
    v1039 = (unsigned int *)(v1589 - 4);
        v1040 = __ldrex(v1039);
      while ( __strex(v1040 - 1, v1039) );
      v1040 = (*v1039)--;
    if ( v1040 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v326);
  v327 = (void *)(v1590 - 12);
  if ( (int *)(v1590 - 12) != &dword_28898C0 )
    v1041 = (unsigned int *)(v1590 - 4);
        v1042 = __ldrex(v1041);
      while ( __strex(v1042 - 1, v1041) );
      v1042 = (*v1041)--;
    if ( v1042 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v327);
  sub_119C884((void **)&v1584, "button.holo_pan");
  sub_119C884((void **)&v1583, "explore");
  sub_119C854((int *)&v1585, &v1584);
  sub_119C854((int *)&v1586, &v1583);
  v1587 = 2;
  v1588 = 1048576000;
  v328 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v328 == HIDWORD(v328) )
      (int)&v1585);
    *(_DWORD *)v328 = v1585;
    v1585 = (char *)&unk_28898CC;
    *(_DWORD *)(v328 + 4) = v1586;
    v1586 = (char *)&unk_28898CC;
    HIDWORD(v328) = v1588;
    *(_DWORD *)(v328 + 8) = v1587;
    *(_DWORD *)(v328 + 12) = HIDWORD(v328);
  v329 = v1586 - 12;
  if ( (int *)(v1586 - 12) != &dword_28898C0 )
    v1043 = (unsigned int *)(v1586 - 4);
        v1044 = __ldrex(v1043);
      while ( __strex(v1044 - 1, v1043) );
      v1044 = (*v1043)--;
    if ( v1044 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v329);
  v330 = v1585 - 12;
  if ( (int *)(v1585 - 12) != &dword_28898C0 )
    v1045 = (unsigned int *)(v1585 - 4);
        v1046 = __ldrex(v1045);
      while ( __strex(v1046 - 1, v1045) );
      v1046 = (*v1045)--;
    if ( v1046 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v330);
  v331 = (void *)(v1583 - 12);
  if ( (int *)(v1583 - 12) != &dword_28898C0 )
    v1047 = (unsigned int *)(v1583 - 4);
        v1048 = __ldrex(v1047);
      while ( __strex(v1048 - 1, v1047) );
      v1048 = (*v1047)--;
    if ( v1048 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v331);
  v332 = (void *)(v1584 - 12);
  if ( (int *)(v1584 - 12) != &dword_28898C0 )
    v1049 = (unsigned int *)(v1584 - 4);
        v1050 = __ldrex(v1049);
      while ( __strex(v1050 - 1, v1049) );
      v1050 = (*v1049)--;
    if ( v1050 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v332);
  sub_119C884((void **)&v1578, "button.holo_pan");
  sub_119C884((void **)&v1577, "grab");
  sub_119C854((int *)&v1579, &v1578);
  sub_119C854((int *)&v1580, &v1577);
  v1581 = 0;
  v1582 = 1048576000;
  v333 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v333 == HIDWORD(v333) )
      (int)&v1579);
    *(_DWORD *)v333 = v1579;
    v1579 = (char *)&unk_28898CC;
    *(_DWORD *)(v333 + 4) = v1580;
    v1580 = (char *)&unk_28898CC;
    HIDWORD(v333) = v1582;
    *(_DWORD *)(v333 + 8) = v1581;
    *(_DWORD *)(v333 + 12) = HIDWORD(v333);
  v334 = v1580 - 12;
  if ( (int *)(v1580 - 12) != &dword_28898C0 )
    v1051 = (unsigned int *)(v1580 - 4);
        v1052 = __ldrex(v1051);
      while ( __strex(v1052 - 1, v1051) );
      v1052 = (*v1051)--;
    if ( v1052 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v334);
  v335 = v1579 - 12;
  if ( (int *)(v1579 - 12) != &dword_28898C0 )
    v1053 = (unsigned int *)(v1579 - 4);
        v1054 = __ldrex(v1053);
      while ( __strex(v1054 - 1, v1053) );
      v1054 = (*v1053)--;
    if ( v1054 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v335);
  v336 = (void *)(v1577 - 12);
  if ( (int *)(v1577 - 12) != &dword_28898C0 )
    v1055 = (unsigned int *)(v1577 - 4);
        v1056 = __ldrex(v1055);
      while ( __strex(v1056 - 1, v1055) );
      v1056 = (*v1055)--;
    if ( v1056 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v336);
  v337 = (void *)(v1578 - 12);
  if ( (int *)(v1578 - 12) != &dword_28898C0 )
    v1057 = (unsigned int *)(v1578 - 4);
        v1058 = __ldrex(v1057);
      while ( __strex(v1058 - 1, v1057) );
      v1058 = (*v1057)--;
    if ( v1058 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v337);
  sub_119C884((void **)&v1572, "button.holo_pan");
  sub_119C884((void **)&v1571, "move");
  sub_119C854((int *)&v1573, &v1572);
  sub_119C854((int *)&v1574, &v1571);
  v1575 = 0;
  v1576 = 1048576000;
  v338 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v338 == HIDWORD(v338) )
      (int)&v1573);
    *(_DWORD *)v338 = v1573;
    v1573 = (char *)&unk_28898CC;
    *(_DWORD *)(v338 + 4) = v1574;
    v1574 = (char *)&unk_28898CC;
    HIDWORD(v338) = v1576;
    *(_DWORD *)(v338 + 8) = v1575;
    *(_DWORD *)(v338 + 12) = HIDWORD(v338);
  v339 = v1574 - 12;
  if ( (int *)(v1574 - 12) != &dword_28898C0 )
    v1059 = (unsigned int *)(v1574 - 4);
        v1060 = __ldrex(v1059);
      while ( __strex(v1060 - 1, v1059) );
      v1060 = (*v1059)--;
    if ( v1060 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v339);
  v340 = v1573 - 12;
  if ( (int *)(v1573 - 12) != &dword_28898C0 )
    v1061 = (unsigned int *)(v1573 - 4);
        v1062 = __ldrex(v1061);
      while ( __strex(v1062 - 1, v1061) );
      v1062 = (*v1061)--;
    if ( v1062 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v340);
  v341 = (void *)(v1571 - 12);
  if ( (int *)(v1571 - 12) != &dword_28898C0 )
    v1063 = (unsigned int *)(v1571 - 4);
        v1064 = __ldrex(v1063);
      while ( __strex(v1064 - 1, v1063) );
      v1064 = (*v1063)--;
    if ( v1064 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v341);
  v342 = (void *)(v1572 - 12);
  if ( (int *)(v1572 - 12) != &dword_28898C0 )
    v1065 = (unsigned int *)(v1572 - 4);
        v1066 = __ldrex(v1065);
      while ( __strex(v1066 - 1, v1065) );
      v1066 = (*v1065)--;
    if ( v1066 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v342);
  sub_119C884((void **)&v1566, "button.holo_rotate");
  sub_119C884((void **)&v1565, "rotate");
  sub_119C854((int *)&v1567, &v1566);
  sub_119C854((int *)&v1568, &v1565);
  v1569 = 0;
  v1570 = 1048576000;
  v343 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v343 == HIDWORD(v343) )
      (int)&v1567);
    *(_DWORD *)v343 = v1567;
    v1567 = (char *)&unk_28898CC;
    *(_DWORD *)(v343 + 4) = v1568;
    v1568 = (char *)&unk_28898CC;
    HIDWORD(v343) = v1570;
    *(_DWORD *)(v343 + 8) = v1569;
    *(_DWORD *)(v343 + 12) = HIDWORD(v343);
  v344 = v1568 - 12;
  if ( (int *)(v1568 - 12) != &dword_28898C0 )
    v1067 = (unsigned int *)(v1568 - 4);
        v1068 = __ldrex(v1067);
      while ( __strex(v1068 - 1, v1067) );
      v1068 = (*v1067)--;
    if ( v1068 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v344);
  v345 = v1567 - 12;
  if ( (int *)(v1567 - 12) != &dword_28898C0 )
    v1069 = (unsigned int *)(v1567 - 4);
        v1070 = __ldrex(v1069);
      while ( __strex(v1070 - 1, v1069) );
      v1070 = (*v1069)--;
    if ( v1070 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v345);
  v346 = (void *)(v1565 - 12);
  if ( (int *)(v1565 - 12) != &dword_28898C0 )
    v1071 = (unsigned int *)(v1565 - 4);
        v1072 = __ldrex(v1071);
      while ( __strex(v1072 - 1, v1071) );
      v1072 = (*v1071)--;
    if ( v1072 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v346);
  v347 = (void *)(v1566 - 12);
  if ( (int *)(v1566 - 12) != &dword_28898C0 )
    v1073 = (unsigned int *)(v1566 - 4);
        v1074 = __ldrex(v1073);
      while ( __strex(v1074 - 1, v1073) );
      v1074 = (*v1073)--;
    if ( v1074 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v347);
  sub_119C884((void **)&v1560, "button.holo_rotate");
  sub_119C884((void **)&v1559, "turn");
  sub_119C854((int *)&v1561, &v1560);
  sub_119C854((int *)&v1562, &v1559);
  v1563 = 0;
  v1564 = 1048576000;
  v348 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v348 == HIDWORD(v348) )
      (int)&v1561);
    *(_DWORD *)v348 = v1561;
    v1561 = (char *)&unk_28898CC;
    *(_DWORD *)(v348 + 4) = v1562;
    v1562 = (char *)&unk_28898CC;
    HIDWORD(v348) = v1564;
    *(_DWORD *)(v348 + 8) = v1563;
    *(_DWORD *)(v348 + 12) = HIDWORD(v348);
  v349 = v1562 - 12;
  if ( (int *)(v1562 - 12) != &dword_28898C0 )
    v1075 = (unsigned int *)(v1562 - 4);
        v1076 = __ldrex(v1075);
      while ( __strex(v1076 - 1, v1075) );
      v1076 = (*v1075)--;
    if ( v1076 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v349);
  v350 = v1561 - 12;
  if ( (int *)(v1561 - 12) != &dword_28898C0 )
    v1077 = (unsigned int *)(v1561 - 4);
        v1078 = __ldrex(v1077);
      while ( __strex(v1078 - 1, v1077) );
      v1078 = (*v1077)--;
    if ( v1078 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v350);
  v351 = (void *)(v1559 - 12);
  if ( (int *)(v1559 - 12) != &dword_28898C0 )
    v1079 = (unsigned int *)(v1559 - 4);
        v1080 = __ldrex(v1079);
      while ( __strex(v1080 - 1, v1079) );
      v1080 = (*v1079)--;
    if ( v1080 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v351);
  v352 = (void *)(v1560 - 12);
  if ( (int *)(v1560 - 12) != &dword_28898C0 )
    v1081 = (unsigned int *)(v1560 - 4);
        v1082 = __ldrex(v1081);
      while ( __strex(v1082 - 1, v1081) );
      v1082 = (*v1081)--;
    if ( v1082 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v352);
  sub_119C884((void **)&v1554, "button.holo_tilt");
  sub_119C884((void **)&v1553, "tilt");
  sub_119C854((int *)&v1555, &v1554);
  sub_119C854((int *)&v1556, &v1553);
  v1557 = 0;
  v1558 = 1048576000;
  v353 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v353 == HIDWORD(v353) )
      (int)&v1555);
    *(_DWORD *)v353 = v1555;
    v1555 = (char *)&unk_28898CC;
    *(_DWORD *)(v353 + 4) = v1556;
    v1556 = (char *)&unk_28898CC;
    HIDWORD(v353) = v1558;
    *(_DWORD *)(v353 + 8) = v1557;
    *(_DWORD *)(v353 + 12) = HIDWORD(v353);
  v354 = v1556 - 12;
  if ( (int *)(v1556 - 12) != &dword_28898C0 )
    v1083 = (unsigned int *)(v1556 - 4);
        v1084 = __ldrex(v1083);
      while ( __strex(v1084 - 1, v1083) );
      v1084 = (*v1083)--;
    if ( v1084 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v354);
  v355 = v1555 - 12;
  if ( (int *)(v1555 - 12) != &dword_28898C0 )
    v1085 = (unsigned int *)(v1555 - 4);
        v1086 = __ldrex(v1085);
      while ( __strex(v1086 - 1, v1085) );
      v1086 = (*v1085)--;
    if ( v1086 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v355);
  v356 = (void *)(v1553 - 12);
  if ( (int *)(v1553 - 12) != &dword_28898C0 )
    v1087 = (unsigned int *)(v1553 - 4);
        v1088 = __ldrex(v1087);
      while ( __strex(v1088 - 1, v1087) );
      v1088 = (*v1087)--;
    if ( v1088 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v356);
  v357 = (void *)(v1554 - 12);
  if ( (int *)(v1554 - 12) != &dword_28898C0 )
    v1089 = (unsigned int *)(v1554 - 4);
        v1090 = __ldrex(v1089);
      while ( __strex(v1090 - 1, v1089) );
      v1090 = (*v1089)--;
    if ( v1090 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v357);
  sub_119C884((void **)&v1548, "button.holo_zoom_mode");
  sub_119C884((void **)&v1547, "resize");
  sub_119C854((int *)&v1549, &v1548);
  sub_119C854((int *)&v1550, &v1547);
  v1551 = 1;
  v1552 = 1050253722;
  v358 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v358 == HIDWORD(v358) )
      (int)&v1549);
    *(_DWORD *)v358 = v1549;
    v1549 = (char *)&unk_28898CC;
    *(_DWORD *)(v358 + 4) = v1550;
    v1550 = (char *)&unk_28898CC;
    HIDWORD(v358) = v1552;
    *(_DWORD *)(v358 + 8) = v1551;
    *(_DWORD *)(v358 + 12) = HIDWORD(v358);
  v359 = v1550 - 12;
  if ( (int *)(v1550 - 12) != &dword_28898C0 )
    v1091 = (unsigned int *)(v1550 - 4);
        v1092 = __ldrex(v1091);
      while ( __strex(v1092 - 1, v1091) );
      v1092 = (*v1091)--;
    if ( v1092 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v359);
  v360 = v1549 - 12;
  if ( (int *)(v1549 - 12) != &dword_28898C0 )
    v1093 = (unsigned int *)(v1549 - 4);
        v1094 = __ldrex(v1093);
      while ( __strex(v1094 - 1, v1093) );
      v1094 = (*v1093)--;
    if ( v1094 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v360);
  v361 = (void *)(v1547 - 12);
  if ( (int *)(v1547 - 12) != &dword_28898C0 )
    v1095 = (unsigned int *)(v1547 - 4);
        v1096 = __ldrex(v1095);
      while ( __strex(v1096 - 1, v1095) );
      v1096 = (*v1095)--;
    if ( v1096 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v361);
  v362 = (void *)(v1548 - 12);
  if ( (int *)(v1548 - 12) != &dword_28898C0 )
    v1097 = (unsigned int *)(v1548 - 4);
        v1098 = __ldrex(v1097);
      while ( __strex(v1098 - 1, v1097) );
      v1098 = (*v1097)--;
    if ( v1098 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v362);
  sub_119C884((void **)&v1542, "button.holo_zoom_mode");
  sub_119C884((void **)&v1541, "resize");
  sub_119C854((int *)&v1543, &v1542);
  sub_119C854((int *)&v1544, &v1541);
  v1545 = 0;
  v1546 = 1050253722;
  v363 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v363 == HIDWORD(v363) )
      (int)&v1543);
    *(_DWORD *)v363 = v1543;
    v1543 = (char *)&unk_28898CC;
    *(_DWORD *)(v363 + 4) = v1544;
    v1544 = (char *)&unk_28898CC;
    HIDWORD(v363) = v1546;
    *(_DWORD *)(v363 + 8) = v1545;
    *(_DWORD *)(v363 + 12) = HIDWORD(v363);
  v364 = v1544 - 12;
  if ( (int *)(v1544 - 12) != &dword_28898C0 )
    v1099 = (unsigned int *)(v1544 - 4);
        v1100 = __ldrex(v1099);
      while ( __strex(v1100 - 1, v1099) );
      v1100 = (*v1099)--;
    if ( v1100 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v364);
  v365 = v1543 - 12;
  if ( (int *)(v1543 - 12) != &dword_28898C0 )
    v1101 = (unsigned int *)(v1543 - 4);
        v1102 = __ldrex(v1101);
      while ( __strex(v1102 - 1, v1101) );
      v1102 = (*v1101)--;
    if ( v1102 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v365);
  v366 = (void *)(v1541 - 12);
  if ( (int *)(v1541 - 12) != &dword_28898C0 )
    v1103 = (unsigned int *)(v1541 - 4);
        v1104 = __ldrex(v1103);
      while ( __strex(v1104 - 1, v1103) );
      v1104 = (*v1103)--;
    if ( v1104 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v366);
  v367 = (void *)(v1542 - 12);
  if ( (int *)(v1542 - 12) != &dword_28898C0 )
    v1105 = (unsigned int *)(v1542 - 4);
        v1106 = __ldrex(v1105);
      while ( __strex(v1106 - 1, v1105) );
      v1106 = (*v1105)--;
    if ( v1106 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v367);
  sub_119C884((void **)&v1536, "button.holo_zoom_mode");
  sub_119C884((void **)&v1535, "zoom");
  sub_119C854((int *)&v1537, &v1536);
  sub_119C854((int *)&v1538, &v1535);
  v1539 = 3;
  v1540 = 1050253722;
  v368 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v368 == HIDWORD(v368) )
      (int)&v1537);
    *(_DWORD *)v368 = v1537;
    v1537 = (char *)&unk_28898CC;
    *(_DWORD *)(v368 + 4) = v1538;
    v1538 = (char *)&unk_28898CC;
    HIDWORD(v368) = v1540;
    *(_DWORD *)(v368 + 8) = v1539;
    *(_DWORD *)(v368 + 12) = HIDWORD(v368);
  v369 = v1538 - 12;
  if ( (int *)(v1538 - 12) != &dword_28898C0 )
    v1107 = (unsigned int *)(v1538 - 4);
        v1108 = __ldrex(v1107);
      while ( __strex(v1108 - 1, v1107) );
      v1108 = (*v1107)--;
    if ( v1108 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v369);
  v370 = v1537 - 12;
  if ( (int *)(v1537 - 12) != &dword_28898C0 )
    v1109 = (unsigned int *)(v1537 - 4);
        v1110 = __ldrex(v1109);
      while ( __strex(v1110 - 1, v1109) );
      v1110 = (*v1109)--;
    if ( v1110 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v370);
  v371 = (void *)(v1535 - 12);
  if ( (int *)(v1535 - 12) != &dword_28898C0 )
    v1111 = (unsigned int *)(v1535 - 4);
        v1112 = __ldrex(v1111);
      while ( __strex(v1112 - 1, v1111) );
      v1112 = (*v1111)--;
    if ( v1112 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v371);
  v372 = (void *)(v1536 - 12);
  if ( (int *)(v1536 - 12) != &dword_28898C0 )
    v1113 = (unsigned int *)(v1536 - 4);
        v1114 = __ldrex(v1113);
      while ( __strex(v1114 - 1, v1113) );
      v1114 = (*v1113)--;
    if ( v1114 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v372);
  sub_119C884((void **)&v1530, "button.holo_zoom_mode");
  sub_119C884((void **)&v1529, "zoom");
  sub_119C854((int *)&v1531, &v1530);
  sub_119C854((int *)&v1532, &v1529);
  v1533 = 2;
  v1534 = 1050253722;
  v373 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v373 == HIDWORD(v373) )
      (int)&v1531);
    *(_DWORD *)v373 = v1531;
    v1531 = (char *)&unk_28898CC;
    *(_DWORD *)(v373 + 4) = v1532;
    v1532 = (char *)&unk_28898CC;
    HIDWORD(v373) = v1534;
    *(_DWORD *)(v373 + 8) = v1533;
    *(_DWORD *)(v373 + 12) = HIDWORD(v373);
  v374 = v1532 - 12;
  if ( (int *)(v1532 - 12) != &dword_28898C0 )
    v1115 = (unsigned int *)(v1532 - 4);
        v1116 = __ldrex(v1115);
      while ( __strex(v1116 - 1, v1115) );
      v1116 = (*v1115)--;
    if ( v1116 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v374);
  v375 = v1531 - 12;
  if ( (int *)(v1531 - 12) != &dword_28898C0 )
    v1117 = (unsigned int *)(v1531 - 4);
        v1118 = __ldrex(v1117);
      while ( __strex(v1118 - 1, v1117) );
      v1118 = (*v1117)--;
    if ( v1118 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v375);
  v376 = (void *)(v1529 - 12);
  if ( (int *)(v1529 - 12) != &dword_28898C0 )
    v1119 = (unsigned int *)(v1529 - 4);
        v1120 = __ldrex(v1119);
      while ( __strex(v1120 - 1, v1119) );
      v1120 = (*v1119)--;
    if ( v1120 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v376);
  v377 = (void *)(v1530 - 12);
  if ( (int *)(v1530 - 12) != &dword_28898C0 )
    v1121 = (unsigned int *)(v1530 - 4);
        v1122 = __ldrex(v1121);
      while ( __strex(v1122 - 1, v1121) );
      v1122 = (*v1121)--;
    if ( v1122 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v377);
  sub_119C884((void **)&v1524, "button.holo_pivotleft");
  sub_119C884((void **)&v1523, "pivot left");
  sub_119C854((int *)&v1525, &v1524);
  sub_119C854((int *)&v1526, &v1523);
  v1527 = 3;
  v1528 = 1050253722;
  v378 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v378 == HIDWORD(v378) )
      (int)&v1525);
    *(_DWORD *)v378 = v1525;
    v1525 = (char *)&unk_28898CC;
    *(_DWORD *)(v378 + 4) = v1526;
    v1526 = (char *)&unk_28898CC;
    HIDWORD(v378) = v1528;
    *(_DWORD *)(v378 + 8) = v1527;
    *(_DWORD *)(v378 + 12) = HIDWORD(v378);
  v379 = v1526 - 12;
  if ( (int *)(v1526 - 12) != &dword_28898C0 )
    v1123 = (unsigned int *)(v1526 - 4);
        v1124 = __ldrex(v1123);
      while ( __strex(v1124 - 1, v1123) );
      v1124 = (*v1123)--;
    if ( v1124 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v379);
  v380 = v1525 - 12;
  if ( (int *)(v1525 - 12) != &dword_28898C0 )
    v1125 = (unsigned int *)(v1525 - 4);
        v1126 = __ldrex(v1125);
      while ( __strex(v1126 - 1, v1125) );
      v1126 = (*v1125)--;
    if ( v1126 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v380);
  v381 = (void *)(v1523 - 12);
  if ( (int *)(v1523 - 12) != &dword_28898C0 )
    v1127 = (unsigned int *)(v1523 - 4);
        v1128 = __ldrex(v1127);
      while ( __strex(v1128 - 1, v1127) );
      v1128 = (*v1127)--;
    if ( v1128 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v381);
  v382 = (void *)(v1524 - 12);
  if ( (int *)(v1524 - 12) != &dword_28898C0 )
    v1129 = (unsigned int *)(v1524 - 4);
        v1130 = __ldrex(v1129);
      while ( __strex(v1130 - 1, v1129) );
      v1130 = (*v1129)--;
    if ( v1130 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v382);
  sub_119C884((void **)&v1518, "button.holo_pivotleft");
  sub_119C884((void **)&v1517, "pivot left");
  sub_119C854((int *)&v1519, &v1518);
  sub_119C854((int *)&v1520, &v1517);
  v1521 = 2;
  v1522 = 1050253722;
  v383 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v383 == HIDWORD(v383) )
      (int)&v1519);
    *(_DWORD *)v383 = v1519;
    v1519 = (char *)&unk_28898CC;
    *(_DWORD *)(v383 + 4) = v1520;
    v1520 = (char *)&unk_28898CC;
    HIDWORD(v383) = v1522;
    *(_DWORD *)(v383 + 8) = v1521;
    *(_DWORD *)(v383 + 12) = HIDWORD(v383);
  v384 = v1520 - 12;
  if ( (int *)(v1520 - 12) != &dword_28898C0 )
    v1131 = (unsigned int *)(v1520 - 4);
        v1132 = __ldrex(v1131);
      while ( __strex(v1132 - 1, v1131) );
      v1132 = (*v1131)--;
    if ( v1132 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v384);
  v385 = v1519 - 12;
  if ( (int *)(v1519 - 12) != &dword_28898C0 )
    v1133 = (unsigned int *)(v1519 - 4);
        v1134 = __ldrex(v1133);
      while ( __strex(v1134 - 1, v1133) );
      v1134 = (*v1133)--;
    if ( v1134 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v385);
  v386 = (void *)(v1517 - 12);
  if ( (int *)(v1517 - 12) != &dword_28898C0 )
    v1135 = (unsigned int *)(v1517 - 4);
        v1136 = __ldrex(v1135);
      while ( __strex(v1136 - 1, v1135) );
      v1136 = (*v1135)--;
    if ( v1136 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v386);
  v387 = (void *)(v1518 - 12);
  if ( (int *)(v1518 - 12) != &dword_28898C0 )
    v1137 = (unsigned int *)(v1518 - 4);
        v1138 = __ldrex(v1137);
      while ( __strex(v1138 - 1, v1137) );
      v1138 = (*v1137)--;
    if ( v1138 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v387);
  sub_119C884((void **)&v1512, "button.holo_pivotright");
  sub_119C884((void **)&v1511, "pivot right");
  sub_119C854((int *)&v1513, &v1512);
  sub_119C854((int *)&v1514, &v1511);
  v1515 = 3;
  v1516 = 1050253722;
  v388 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v388 == HIDWORD(v388) )
      (int)&v1513);
    *(_DWORD *)v388 = v1513;
    v1513 = (char *)&unk_28898CC;
    *(_DWORD *)(v388 + 4) = v1514;
    v1514 = (char *)&unk_28898CC;
    HIDWORD(v388) = v1516;
    *(_DWORD *)(v388 + 8) = v1515;
    *(_DWORD *)(v388 + 12) = HIDWORD(v388);
  v389 = v1514 - 12;
  if ( (int *)(v1514 - 12) != &dword_28898C0 )
    v1139 = (unsigned int *)(v1514 - 4);
        v1140 = __ldrex(v1139);
      while ( __strex(v1140 - 1, v1139) );
      v1140 = (*v1139)--;
    if ( v1140 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v389);
  v390 = v1513 - 12;
  if ( (int *)(v1513 - 12) != &dword_28898C0 )
    v1141 = (unsigned int *)(v1513 - 4);
        v1142 = __ldrex(v1141);
      while ( __strex(v1142 - 1, v1141) );
      v1142 = (*v1141)--;
    if ( v1142 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v390);
  v391 = (void *)(v1511 - 12);
  if ( (int *)(v1511 - 12) != &dword_28898C0 )
    v1143 = (unsigned int *)(v1511 - 4);
        v1144 = __ldrex(v1143);
      while ( __strex(v1144 - 1, v1143) );
      v1144 = (*v1143)--;
    if ( v1144 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v391);
  v392 = (void *)(v1512 - 12);
  if ( (int *)(v1512 - 12) != &dword_28898C0 )
    v1145 = (unsigned int *)(v1512 - 4);
        v1146 = __ldrex(v1145);
      while ( __strex(v1146 - 1, v1145) );
      v1146 = (*v1145)--;
    if ( v1146 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v392);
  sub_119C884((void **)&v1506, "button.holo_pivotright");
  sub_119C884((void **)&v1505, "pivot right");
  sub_119C854((int *)&v1507, &v1506);
  sub_119C854((int *)&v1508, &v1505);
  v1509 = 2;
  v1510 = 1050253722;
  v393 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v393 == HIDWORD(v393) )
      (int)&v1507);
    *(_DWORD *)v393 = v1507;
    v1507 = (char *)&unk_28898CC;
    *(_DWORD *)(v393 + 4) = v1508;
    v1508 = (char *)&unk_28898CC;
    HIDWORD(v393) = v1510;
    *(_DWORD *)(v393 + 8) = v1509;
    *(_DWORD *)(v393 + 12) = HIDWORD(v393);
  v394 = v1508 - 12;
  if ( (int *)(v1508 - 12) != &dword_28898C0 )
    v1147 = (unsigned int *)(v1508 - 4);
        v1148 = __ldrex(v1147);
      while ( __strex(v1148 - 1, v1147) );
      v1148 = (*v1147)--;
    if ( v1148 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v394);
  v395 = v1507 - 12;
  if ( (int *)(v1507 - 12) != &dword_28898C0 )
    v1149 = (unsigned int *)(v1507 - 4);
        v1150 = __ldrex(v1149);
      while ( __strex(v1150 - 1, v1149) );
      v1150 = (*v1149)--;
    if ( v1150 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v395);
  v396 = (void *)(v1505 - 12);
  if ( (int *)(v1505 - 12) != &dword_28898C0 )
    v1151 = (unsigned int *)(v1505 - 4);
        v1152 = __ldrex(v1151);
      while ( __strex(v1152 - 1, v1151) );
      v1152 = (*v1151)--;
    if ( v1152 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v396);
  v397 = (void *)(v1506 - 12);
  if ( (int *)(v1506 - 12) != &dword_28898C0 )
    v1153 = (unsigned int *)(v1506 - 4);
        v1154 = __ldrex(v1153);
      while ( __strex(v1154 - 1, v1153) );
      v1154 = (*v1153)--;
    if ( v1154 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v397);
  sub_119C884((void **)&v1500, "button.holo_screen_2d");
  sub_119C884((void **)&v1499, "two dee");
  sub_119C854((int *)&v1501, &v1500);
  sub_119C854((int *)&v1502, &v1499);
  v1503 = 1;
  v1504 = 1050253722;
  v398 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v398 == HIDWORD(v398) )
      (int)&v1501);
    *(_DWORD *)v398 = v1501;
    v1501 = (char *)&unk_28898CC;
    *(_DWORD *)(v398 + 4) = v1502;
    v1502 = (char *)&unk_28898CC;
    HIDWORD(v398) = v1504;
    *(_DWORD *)(v398 + 8) = v1503;
    *(_DWORD *)(v398 + 12) = HIDWORD(v398);
  v399 = v1502 - 12;
  if ( (int *)(v1502 - 12) != &dword_28898C0 )
    v1155 = (unsigned int *)(v1502 - 4);
        v1156 = __ldrex(v1155);
      while ( __strex(v1156 - 1, v1155) );
      v1156 = (*v1155)--;
    if ( v1156 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v399);
  v400 = v1501 - 12;
  if ( (int *)(v1501 - 12) != &dword_28898C0 )
    v1157 = (unsigned int *)(v1501 - 4);
        v1158 = __ldrex(v1157);
      while ( __strex(v1158 - 1, v1157) );
      v1158 = (*v1157)--;
    if ( v1158 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v400);
  v401 = (void *)(v1499 - 12);
  if ( (int *)(v1499 - 12) != &dword_28898C0 )
    v1159 = (unsigned int *)(v1499 - 4);
        v1160 = __ldrex(v1159);
      while ( __strex(v1160 - 1, v1159) );
      v1160 = (*v1159)--;
    if ( v1160 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v401);
  v402 = (void *)(v1500 - 12);
  if ( (int *)(v1500 - 12) != &dword_28898C0 )
    v1161 = (unsigned int *)(v1500 - 4);
        v1162 = __ldrex(v1161);
      while ( __strex(v1162 - 1, v1161) );
      v1162 = (*v1161)--;
    if ( v1162 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v402);
  sub_119C884((void **)&v1494, "button.holo_screen_3d");
  sub_119C884((void **)&v1493, "three dee");
  sub_119C854((int *)&v1495, &v1494);
  sub_119C854((int *)&v1496, &v1493);
  v1497 = 1;
  v1498 = 1050253722;
  v403 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v403 == HIDWORD(v403) )
      (int)&v1495);
    *(_DWORD *)v403 = v1495;
    v1495 = (char *)&unk_28898CC;
    *(_DWORD *)(v403 + 4) = v1496;
    v1496 = (char *)&unk_28898CC;
    HIDWORD(v403) = v1498;
    *(_DWORD *)(v403 + 8) = v1497;
    *(_DWORD *)(v403 + 12) = HIDWORD(v403);
  v404 = v1496 - 12;
  if ( (int *)(v1496 - 12) != &dword_28898C0 )
    v1163 = (unsigned int *)(v1496 - 4);
        v1164 = __ldrex(v1163);
      while ( __strex(v1164 - 1, v1163) );
      v1164 = (*v1163)--;
    if ( v1164 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v404);
  v405 = v1495 - 12;
  if ( (int *)(v1495 - 12) != &dword_28898C0 )
    v1165 = (unsigned int *)(v1495 - 4);
        v1166 = __ldrex(v1165);
      while ( __strex(v1166 - 1, v1165) );
      v1166 = (*v1165)--;
    if ( v1166 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v405);
  v406 = (void *)(v1493 - 12);
  if ( (int *)(v1493 - 12) != &dword_28898C0 )
    v1167 = (unsigned int *)(v1493 - 4);
        v1168 = __ldrex(v1167);
      while ( __strex(v1168 - 1, v1167) );
      v1168 = (*v1167)--;
    if ( v1168 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v406);
  v407 = (void *)(v1494 - 12);
  if ( (int *)(v1494 - 12) != &dword_28898C0 )
    v1169 = (unsigned int *)(v1494 - 4);
        v1170 = __ldrex(v1169);
      while ( __strex(v1170 - 1, v1169) );
      v1170 = (*v1169)--;
    if ( v1170 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v407);
  sub_119C884((void **)&v1488, "button.holo_small_screen");
  sub_119C884((void **)&v1487, "small tee vee");
  sub_119C854((int *)&v1489, &v1488);
  sub_119C854((int *)&v1490, &v1487);
  v1491 = 0;
  v1492 = 1048576000;
  v408 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v408 == HIDWORD(v408) )
      (int)&v1489);
    *(_DWORD *)v408 = v1489;
    v1489 = (char *)&unk_28898CC;
    *(_DWORD *)(v408 + 4) = v1490;
    v1490 = (char *)&unk_28898CC;
    HIDWORD(v408) = v1492;
    *(_DWORD *)(v408 + 8) = v1491;
    *(_DWORD *)(v408 + 12) = HIDWORD(v408);
  v409 = v1490 - 12;
  if ( (int *)(v1490 - 12) != &dword_28898C0 )
    v1171 = (unsigned int *)(v1490 - 4);
        v1172 = __ldrex(v1171);
      while ( __strex(v1172 - 1, v1171) );
      v1172 = (*v1171)--;
    if ( v1172 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v409);
  v410 = v1489 - 12;
  if ( (int *)(v1489 - 12) != &dword_28898C0 )
    v1173 = (unsigned int *)(v1489 - 4);
        v1174 = __ldrex(v1173);
      while ( __strex(v1174 - 1, v1173) );
      v1174 = (*v1173)--;
    if ( v1174 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v410);
  v411 = (void *)(v1487 - 12);
  if ( (int *)(v1487 - 12) != &dword_28898C0 )
    v1175 = (unsigned int *)(v1487 - 4);
        v1176 = __ldrex(v1175);
      while ( __strex(v1176 - 1, v1175) );
      v1176 = (*v1175)--;
    if ( v1176 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v411);
  v412 = (void *)(v1488 - 12);
  if ( (int *)(v1488 - 12) != &dword_28898C0 )
    v1177 = (unsigned int *)(v1488 - 4);
        v1178 = __ldrex(v1177);
      while ( __strex(v1178 - 1, v1177) );
      v1178 = (*v1177)--;
    if ( v1178 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v412);
  sub_119C884((void **)&v1482, "button.holo_small_screen");
  sub_119C884((void **)&v1481, "small tee vee");
  sub_119C854((int *)&v1483, &v1482);
  sub_119C854((int *)&v1484, &v1481);
  v1485 = 1;
  v1486 = 1048576000;
  v413 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v413 == HIDWORD(v413) )
      (int)&v1483);
    *(_DWORD *)v413 = v1483;
    v1483 = (char *)&unk_28898CC;
    *(_DWORD *)(v413 + 4) = v1484;
    v1484 = (char *)&unk_28898CC;
    HIDWORD(v413) = v1486;
    *(_DWORD *)(v413 + 8) = v1485;
    *(_DWORD *)(v413 + 12) = HIDWORD(v413);
  v414 = v1484 - 12;
  if ( (int *)(v1484 - 12) != &dword_28898C0 )
    v1179 = (unsigned int *)(v1484 - 4);
        v1180 = __ldrex(v1179);
      while ( __strex(v1180 - 1, v1179) );
      v1180 = (*v1179)--;
    if ( v1180 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v414);
  v415 = v1483 - 12;
  if ( (int *)(v1483 - 12) != &dword_28898C0 )
    v1181 = (unsigned int *)(v1483 - 4);
        v1182 = __ldrex(v1181);
      while ( __strex(v1182 - 1, v1181) );
      v1182 = (*v1181)--;
    if ( v1182 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v415);
  v416 = (void *)(v1481 - 12);
  if ( (int *)(v1481 - 12) != &dword_28898C0 )
    v1183 = (unsigned int *)(v1481 - 4);
        v1184 = __ldrex(v1183);
      while ( __strex(v1184 - 1, v1183) );
      v1184 = (*v1183)--;
    if ( v1184 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v416);
  v417 = (void *)(v1482 - 12);
  if ( (int *)(v1482 - 12) != &dword_28898C0 )
    v1185 = (unsigned int *)(v1482 - 4);
        v1186 = __ldrex(v1185);
      while ( __strex(v1186 - 1, v1185) );
      v1186 = (*v1185)--;
    if ( v1186 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v417);
  sub_119C884((void **)&v1476, "button.holo_small_screen");
  sub_119C884((void **)&v1475, "small tee vee");
  sub_119C854((int *)&v1477, &v1476);
  sub_119C854((int *)&v1478, &v1475);
  v1479 = 4;
  v1480 = 1048576000;
  v418 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v418 == HIDWORD(v418) )
      (int)&v1477);
    *(_DWORD *)v418 = v1477;
    v1477 = (char *)&unk_28898CC;
    *(_DWORD *)(v418 + 4) = v1478;
    v1478 = (char *)&unk_28898CC;
    HIDWORD(v418) = v1480;
    *(_DWORD *)(v418 + 8) = v1479;
    *(_DWORD *)(v418 + 12) = HIDWORD(v418);
  v419 = v1478 - 12;
  if ( (int *)(v1478 - 12) != &dword_28898C0 )
    v1187 = (unsigned int *)(v1478 - 4);
        v1188 = __ldrex(v1187);
      while ( __strex(v1188 - 1, v1187) );
      v1188 = (*v1187)--;
    if ( v1188 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v419);
  v420 = v1477 - 12;
  if ( (int *)(v1477 - 12) != &dword_28898C0 )
    v1189 = (unsigned int *)(v1477 - 4);
        v1190 = __ldrex(v1189);
      while ( __strex(v1190 - 1, v1189) );
      v1190 = (*v1189)--;
    if ( v1190 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v420);
  v421 = (void *)(v1475 - 12);
  if ( (int *)(v1475 - 12) != &dword_28898C0 )
    v1191 = (unsigned int *)(v1475 - 4);
        v1192 = __ldrex(v1191);
      while ( __strex(v1192 - 1, v1191) );
      v1192 = (*v1191)--;
    if ( v1192 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v421);
  v422 = (void *)(v1476 - 12);
  if ( (int *)(v1476 - 12) != &dword_28898C0 )
    v1193 = (unsigned int *)(v1476 - 4);
        v1194 = __ldrex(v1193);
      while ( __strex(v1194 - 1, v1193) );
      v1194 = (*v1193)--;
    if ( v1194 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v422);
  sub_119C884((void **)&v1470, "button.holo_medium_screen");
  sub_119C884((void **)&v1469, "medium tee vee");
  sub_119C854((int *)&v1471, &v1470);
  sub_119C854((int *)&v1472, &v1469);
  v1473 = 0;
  v1474 = 1048576000;
  v423 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v423 == HIDWORD(v423) )
      (int)&v1471);
    *(_DWORD *)v423 = v1471;
    v1471 = (char *)&unk_28898CC;
    *(_DWORD *)(v423 + 4) = v1472;
    v1472 = (char *)&unk_28898CC;
    HIDWORD(v423) = v1474;
    *(_DWORD *)(v423 + 8) = v1473;
    *(_DWORD *)(v423 + 12) = HIDWORD(v423);
  v424 = v1472 - 12;
  if ( (int *)(v1472 - 12) != &dword_28898C0 )
    v1195 = (unsigned int *)(v1472 - 4);
        v1196 = __ldrex(v1195);
      while ( __strex(v1196 - 1, v1195) );
      v1196 = (*v1195)--;
    if ( v1196 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v424);
  v425 = v1471 - 12;
  if ( (int *)(v1471 - 12) != &dword_28898C0 )
    v1197 = (unsigned int *)(v1471 - 4);
        v1198 = __ldrex(v1197);
      while ( __strex(v1198 - 1, v1197) );
      v1198 = (*v1197)--;
    if ( v1198 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v425);
  v426 = (void *)(v1469 - 12);
  if ( (int *)(v1469 - 12) != &dword_28898C0 )
    v1199 = (unsigned int *)(v1469 - 4);
        v1200 = __ldrex(v1199);
      while ( __strex(v1200 - 1, v1199) );
      v1200 = (*v1199)--;
    if ( v1200 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v426);
  v427 = (void *)(v1470 - 12);
  if ( (int *)(v1470 - 12) != &dword_28898C0 )
    v1201 = (unsigned int *)(v1470 - 4);
        v1202 = __ldrex(v1201);
      while ( __strex(v1202 - 1, v1201) );
      v1202 = (*v1201)--;
    if ( v1202 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v427);
  sub_119C884((void **)&v1464, "button.holo_medium_screen");
  sub_119C884((void **)&v1463, "medium tee vee");
  sub_119C854((int *)&v1465, &v1464);
  sub_119C854((int *)&v1466, &v1463);
  v1467 = 1;
  v1468 = 1048576000;
  v428 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v428 == HIDWORD(v428) )
      (int)&v1465);
    *(_DWORD *)v428 = v1465;
    v1465 = (char *)&unk_28898CC;
    *(_DWORD *)(v428 + 4) = v1466;
    v1466 = (char *)&unk_28898CC;
    HIDWORD(v428) = v1468;
    *(_DWORD *)(v428 + 8) = v1467;
    *(_DWORD *)(v428 + 12) = HIDWORD(v428);
  v429 = v1466 - 12;
  if ( (int *)(v1466 - 12) != &dword_28898C0 )
    v1203 = (unsigned int *)(v1466 - 4);
        v1204 = __ldrex(v1203);
      while ( __strex(v1204 - 1, v1203) );
      v1204 = (*v1203)--;
    if ( v1204 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v429);
  v430 = v1465 - 12;
  if ( (int *)(v1465 - 12) != &dword_28898C0 )
    v1205 = (unsigned int *)(v1465 - 4);
        v1206 = __ldrex(v1205);
      while ( __strex(v1206 - 1, v1205) );
      v1206 = (*v1205)--;
    if ( v1206 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v430);
  v431 = (void *)(v1463 - 12);
  if ( (int *)(v1463 - 12) != &dword_28898C0 )
    v1207 = (unsigned int *)(v1463 - 4);
        v1208 = __ldrex(v1207);
      while ( __strex(v1208 - 1, v1207) );
      v1208 = (*v1207)--;
    if ( v1208 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v431);
  v432 = (void *)(v1464 - 12);
  if ( (int *)(v1464 - 12) != &dword_28898C0 )
    v1209 = (unsigned int *)(v1464 - 4);
        v1210 = __ldrex(v1209);
      while ( __strex(v1210 - 1, v1209) );
      v1210 = (*v1209)--;
    if ( v1210 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v432);
  sub_119C884((void **)&v1458, "button.holo_medium_screen");
  sub_119C884((void **)&v1457, "medium tee vee");
  sub_119C854((int *)&v1459, &v1458);
  sub_119C854((int *)&v1460, &v1457);
  v1461 = 4;
  v1462 = 1048576000;
  v433 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v433 == HIDWORD(v433) )
      (int)&v1459);
    *(_DWORD *)v433 = v1459;
    v1459 = (char *)&unk_28898CC;
    *(_DWORD *)(v433 + 4) = v1460;
    v1460 = (char *)&unk_28898CC;
    HIDWORD(v433) = v1462;
    *(_DWORD *)(v433 + 8) = v1461;
    *(_DWORD *)(v433 + 12) = HIDWORD(v433);
  v434 = v1460 - 12;
  if ( (int *)(v1460 - 12) != &dword_28898C0 )
    v1211 = (unsigned int *)(v1460 - 4);
        v1212 = __ldrex(v1211);
      while ( __strex(v1212 - 1, v1211) );
      v1212 = (*v1211)--;
    if ( v1212 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v434);
  v435 = v1459 - 12;
  if ( (int *)(v1459 - 12) != &dword_28898C0 )
    v1213 = (unsigned int *)(v1459 - 4);
        v1214 = __ldrex(v1213);
      while ( __strex(v1214 - 1, v1213) );
      v1214 = (*v1213)--;
    if ( v1214 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v435);
  v436 = (void *)(v1457 - 12);
  if ( (int *)(v1457 - 12) != &dword_28898C0 )
    v1215 = (unsigned int *)(v1457 - 4);
        v1216 = __ldrex(v1215);
      while ( __strex(v1216 - 1, v1215) );
      v1216 = (*v1215)--;
    if ( v1216 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v436);
  v437 = (void *)(v1458 - 12);
  if ( (int *)(v1458 - 12) != &dword_28898C0 )
    v1217 = (unsigned int *)(v1458 - 4);
        v1218 = __ldrex(v1217);
      while ( __strex(v1218 - 1, v1217) );
      v1218 = (*v1217)--;
    if ( v1218 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v437);
  sub_119C884((void **)&v1452, "button.holo_large_screen");
  sub_119C884((void **)&v1451, "large tee vee");
  sub_119C854((int *)&v1453, &v1452);
  sub_119C854((int *)&v1454, &v1451);
  v1455 = 0;
  v1456 = 1048576000;
  v438 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v438 == HIDWORD(v438) )
      (int)&v1453);
    *(_DWORD *)v438 = v1453;
    v1453 = (char *)&unk_28898CC;
    *(_DWORD *)(v438 + 4) = v1454;
    v1454 = (char *)&unk_28898CC;
    HIDWORD(v438) = v1456;
    *(_DWORD *)(v438 + 8) = v1455;
    *(_DWORD *)(v438 + 12) = HIDWORD(v438);
  v439 = v1454 - 12;
  if ( (int *)(v1454 - 12) != &dword_28898C0 )
    v1219 = (unsigned int *)(v1454 - 4);
        v1220 = __ldrex(v1219);
      while ( __strex(v1220 - 1, v1219) );
      v1220 = (*v1219)--;
    if ( v1220 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v439);
  v440 = v1453 - 12;
  if ( (int *)(v1453 - 12) != &dword_28898C0 )
    v1221 = (unsigned int *)(v1453 - 4);
        v1222 = __ldrex(v1221);
      while ( __strex(v1222 - 1, v1221) );
      v1222 = (*v1221)--;
    if ( v1222 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v440);
  v441 = (void *)(v1451 - 12);
  if ( (int *)(v1451 - 12) != &dword_28898C0 )
    v1223 = (unsigned int *)(v1451 - 4);
        v1224 = __ldrex(v1223);
      while ( __strex(v1224 - 1, v1223) );
      v1224 = (*v1223)--;
    if ( v1224 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v441);
  v442 = (void *)(v1452 - 12);
  if ( (int *)(v1452 - 12) != &dword_28898C0 )
    v1225 = (unsigned int *)(v1452 - 4);
        v1226 = __ldrex(v1225);
      while ( __strex(v1226 - 1, v1225) );
      v1226 = (*v1225)--;
    if ( v1226 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v442);
  sub_119C884((void **)&v1446, "button.holo_large_screen");
  sub_119C884((void **)&v1445, "large tee vee");
  sub_119C854((int *)&v1447, &v1446);
  sub_119C854((int *)&v1448, &v1445);
  v1449 = 1;
  v1450 = 1048576000;
  v443 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v443 == HIDWORD(v443) )
      (int)&v1447);
    *(_DWORD *)v443 = v1447;
    v1447 = (char *)&unk_28898CC;
    *(_DWORD *)(v443 + 4) = v1448;
    v1448 = (char *)&unk_28898CC;
    HIDWORD(v443) = v1450;
    *(_DWORD *)(v443 + 8) = v1449;
    *(_DWORD *)(v443 + 12) = HIDWORD(v443);
  v444 = v1448 - 12;
  if ( (int *)(v1448 - 12) != &dword_28898C0 )
    v1227 = (unsigned int *)(v1448 - 4);
        v1228 = __ldrex(v1227);
      while ( __strex(v1228 - 1, v1227) );
      v1228 = (*v1227)--;
    if ( v1228 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v444);
  v445 = v1447 - 12;
  if ( (int *)(v1447 - 12) != &dword_28898C0 )
    v1229 = (unsigned int *)(v1447 - 4);
        v1230 = __ldrex(v1229);
      while ( __strex(v1230 - 1, v1229) );
      v1230 = (*v1229)--;
    if ( v1230 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v445);
  v446 = (void *)(v1445 - 12);
  if ( (int *)(v1445 - 12) != &dword_28898C0 )
    v1231 = (unsigned int *)(v1445 - 4);
        v1232 = __ldrex(v1231);
      while ( __strex(v1232 - 1, v1231) );
      v1232 = (*v1231)--;
    if ( v1232 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v446);
  v447 = (void *)(v1446 - 12);
  if ( (int *)(v1446 - 12) != &dword_28898C0 )
    v1233 = (unsigned int *)(v1446 - 4);
        v1234 = __ldrex(v1233);
      while ( __strex(v1234 - 1, v1233) );
      v1234 = (*v1233)--;
    if ( v1234 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v447);
  sub_119C884((void **)&v1440, "button.holo_large_screen");
  sub_119C884((void **)&v1439, "large tee vee");
  sub_119C854((int *)&v1441, &v1440);
  sub_119C854((int *)&v1442, &v1439);
  v1443 = 4;
  v1444 = 1048576000;
  v448 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v448 == HIDWORD(v448) )
      (int)&v1441);
    *(_DWORD *)v448 = v1441;
    v1441 = (char *)&unk_28898CC;
    *(_DWORD *)(v448 + 4) = v1442;
    v1442 = (char *)&unk_28898CC;
    HIDWORD(v448) = v1444;
    *(_DWORD *)(v448 + 8) = v1443;
    *(_DWORD *)(v448 + 12) = HIDWORD(v448);
  v449 = v1442 - 12;
  if ( (int *)(v1442 - 12) != &dword_28898C0 )
    v1235 = (unsigned int *)(v1442 - 4);
        v1236 = __ldrex(v1235);
      while ( __strex(v1236 - 1, v1235) );
      v1236 = (*v1235)--;
    if ( v1236 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v449);
  v450 = v1441 - 12;
  if ( (int *)(v1441 - 12) != &dword_28898C0 )
    v1237 = (unsigned int *)(v1441 - 4);
        v1238 = __ldrex(v1237);
      while ( __strex(v1238 - 1, v1237) );
      v1238 = (*v1237)--;
    if ( v1238 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v450);
  v451 = (void *)(v1439 - 12);
  if ( (int *)(v1439 - 12) != &dword_28898C0 )
    v1239 = (unsigned int *)(v1439 - 4);
        v1240 = __ldrex(v1239);
      while ( __strex(v1240 - 1, v1239) );
      v1240 = (*v1239)--;
    if ( v1240 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v451);
  v452 = (void *)(v1440 - 12);
  if ( (int *)(v1440 - 12) != &dword_28898C0 )
    v1241 = (unsigned int *)(v1440 - 4);
        v1242 = __ldrex(v1241);
      while ( __strex(v1242 - 1, v1241) );
      v1242 = (*v1241)--;
    if ( v1242 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v452);
  sub_119C884((void **)&v1434, "button.holo_huge_screen");
  sub_119C884((void **)&v1433, "huge tee vee");
  sub_119C854((int *)&v1435, &v1434);
  sub_119C854((int *)&v1436, &v1433);
  v1437 = 0;
  v1438 = 1048576000;
  v453 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v453 == HIDWORD(v453) )
      (int)&v1435);
    *(_DWORD *)v453 = v1435;
    v1435 = (char *)&unk_28898CC;
    *(_DWORD *)(v453 + 4) = v1436;
    v1436 = (char *)&unk_28898CC;
    HIDWORD(v453) = v1438;
    *(_DWORD *)(v453 + 8) = v1437;
    *(_DWORD *)(v453 + 12) = HIDWORD(v453);
  v454 = v1436 - 12;
  if ( (int *)(v1436 - 12) != &dword_28898C0 )
    v1243 = (unsigned int *)(v1436 - 4);
        v1244 = __ldrex(v1243);
      while ( __strex(v1244 - 1, v1243) );
      v1244 = (*v1243)--;
    if ( v1244 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v454);
  v455 = v1435 - 12;
  if ( (int *)(v1435 - 12) != &dword_28898C0 )
    v1245 = (unsigned int *)(v1435 - 4);
        v1246 = __ldrex(v1245);
      while ( __strex(v1246 - 1, v1245) );
      v1246 = (*v1245)--;
    if ( v1246 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v455);
  v456 = (void *)(v1433 - 12);
  if ( (int *)(v1433 - 12) != &dword_28898C0 )
    v1247 = (unsigned int *)(v1433 - 4);
        v1248 = __ldrex(v1247);
      while ( __strex(v1248 - 1, v1247) );
      v1248 = (*v1247)--;
    if ( v1248 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v456);
  v457 = (void *)(v1434 - 12);
  if ( (int *)(v1434 - 12) != &dword_28898C0 )
    v1249 = (unsigned int *)(v1434 - 4);
        v1250 = __ldrex(v1249);
      while ( __strex(v1250 - 1, v1249) );
      v1250 = (*v1249)--;
    if ( v1250 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v457);
  sub_119C884((void **)&v1428, "button.holo_huge_screen");
  sub_119C884((void **)&v1427, "huge tee vee");
  sub_119C854((int *)&v1429, &v1428);
  sub_119C854((int *)&v1430, &v1427);
  v1431 = 1;
  v1432 = 1048576000;
  v458 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v458 == HIDWORD(v458) )
      (int)&v1429);
    *(_DWORD *)v458 = v1429;
    v1429 = (char *)&unk_28898CC;
    *(_DWORD *)(v458 + 4) = v1430;
    v1430 = (char *)&unk_28898CC;
    HIDWORD(v458) = v1432;
    *(_DWORD *)(v458 + 8) = v1431;
    *(_DWORD *)(v458 + 12) = HIDWORD(v458);
  v459 = v1430 - 12;
  if ( (int *)(v1430 - 12) != &dword_28898C0 )
    v1251 = (unsigned int *)(v1430 - 4);
        v1252 = __ldrex(v1251);
      while ( __strex(v1252 - 1, v1251) );
      v1252 = (*v1251)--;
    if ( v1252 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v459);
  v460 = v1429 - 12;
  if ( (int *)(v1429 - 12) != &dword_28898C0 )
    v1253 = (unsigned int *)(v1429 - 4);
        v1254 = __ldrex(v1253);
      while ( __strex(v1254 - 1, v1253) );
      v1254 = (*v1253)--;
    if ( v1254 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v460);
  v461 = (void *)(v1427 - 12);
  if ( (int *)(v1427 - 12) != &dword_28898C0 )
    v1255 = (unsigned int *)(v1427 - 4);
        v1256 = __ldrex(v1255);
      while ( __strex(v1256 - 1, v1255) );
      v1256 = (*v1255)--;
    if ( v1256 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v461);
  v462 = (void *)(v1428 - 12);
  if ( (int *)(v1428 - 12) != &dword_28898C0 )
    v1257 = (unsigned int *)(v1428 - 4);
        v1258 = __ldrex(v1257);
      while ( __strex(v1258 - 1, v1257) );
      v1258 = (*v1257)--;
    if ( v1258 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v462);
  sub_119C884((void **)&v1422, "button.holo_huge_screen");
  sub_119C884((void **)&v1421, "huge tee vee");
  sub_119C854((int *)&v1423, &v1422);
  sub_119C854((int *)&v1424, &v1421);
  v1425 = 4;
  v1426 = 1048576000;
  v463 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v463 == HIDWORD(v463) )
      (int)&v1423);
    *(_DWORD *)v463 = v1423;
    v1423 = (char *)&unk_28898CC;
    *(_DWORD *)(v463 + 4) = v1424;
    v1424 = (char *)&unk_28898CC;
    HIDWORD(v463) = v1426;
    *(_DWORD *)(v463 + 8) = v1425;
    *(_DWORD *)(v463 + 12) = HIDWORD(v463);
  v464 = v1424 - 12;
  if ( (int *)(v1424 - 12) != &dword_28898C0 )
    v1259 = (unsigned int *)(v1424 - 4);
        v1260 = __ldrex(v1259);
      while ( __strex(v1260 - 1, v1259) );
      v1260 = (*v1259)--;
    if ( v1260 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v464);
  v465 = v1423 - 12;
  if ( (int *)(v1423 - 12) != &dword_28898C0 )
    v1261 = (unsigned int *)(v1423 - 4);
        v1262 = __ldrex(v1261);
      while ( __strex(v1262 - 1, v1261) );
      v1262 = (*v1261)--;
    if ( v1262 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v465);
  v466 = (void *)(v1421 - 12);
  if ( (int *)(v1421 - 12) != &dword_28898C0 )
    v1263 = (unsigned int *)(v1421 - 4);
        v1264 = __ldrex(v1263);
      while ( __strex(v1264 - 1, v1263) );
      v1264 = (*v1263)--;
    if ( v1264 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v466);
  v467 = (void *)(v1422 - 12);
  if ( (int *)(v1422 - 12) != &dword_28898C0 )
    v1265 = (unsigned int *)(v1422 - 4);
        v1266 = __ldrex(v1265);
      while ( __strex(v1266 - 1, v1265) );
      v1266 = (*v1265)--;
    if ( v1266 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v467);
  sub_119C884((void **)&v1416, "button.holo_mark");
  sub_119C884((void **)&v1415, "mark that");
  sub_119C854((int *)&v1417, &v1416);
  sub_119C854((int *)&v1418, &v1415);
  v1419 = 3;
  v1420 = 1048576000;
  v468 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v468 == HIDWORD(v468) )
      (int)&v1417);
    *(_DWORD *)v468 = v1417;
    v1417 = (char *)&unk_28898CC;
    *(_DWORD *)(v468 + 4) = v1418;
    v1418 = (char *)&unk_28898CC;
    HIDWORD(v468) = v1420;
    *(_DWORD *)(v468 + 8) = v1419;
    *(_DWORD *)(v468 + 12) = HIDWORD(v468);
  v469 = v1418 - 12;
  if ( (int *)(v1418 - 12) != &dword_28898C0 )
    v1267 = (unsigned int *)(v1418 - 4);
        v1268 = __ldrex(v1267);
      while ( __strex(v1268 - 1, v1267) );
      v1268 = (*v1267)--;
    if ( v1268 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v469);
  v470 = v1417 - 12;
  if ( (int *)(v1417 - 12) != &dword_28898C0 )
    v1269 = (unsigned int *)(v1417 - 4);
        v1270 = __ldrex(v1269);
      while ( __strex(v1270 - 1, v1269) );
      v1270 = (*v1269)--;
    if ( v1270 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v470);
  v471 = (void *)(v1415 - 12);
  if ( (int *)(v1415 - 12) != &dword_28898C0 )
    v1271 = (unsigned int *)(v1415 - 4);
        v1272 = __ldrex(v1271);
      while ( __strex(v1272 - 1, v1271) );
      v1272 = (*v1271)--;
    if ( v1272 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v471);
  v472 = (void *)(v1416 - 12);
  if ( (int *)(v1416 - 12) != &dword_28898C0 )
    v1273 = (unsigned int *)(v1416 - 4);
        v1274 = __ldrex(v1273);
      while ( __strex(v1274 - 1, v1273) );
      v1274 = (*v1273)--;
    if ( v1274 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v472);
  sub_119C884((void **)&v1410, "button.holo_mark");
  sub_119C884((void **)&v1409, "mark that");
  sub_119C854((int *)&v1411, &v1410);
  sub_119C854((int *)&v1412, &v1409);
  v1413 = 2;
  v1414 = 1048576000;
  v473 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v473 == HIDWORD(v473) )
      (int)&v1411);
    *(_DWORD *)v473 = v1411;
    v1411 = (char *)&unk_28898CC;
    *(_DWORD *)(v473 + 4) = v1412;
    v1412 = (char *)&unk_28898CC;
    HIDWORD(v473) = v1414;
    *(_DWORD *)(v473 + 8) = v1413;
    *(_DWORD *)(v473 + 12) = HIDWORD(v473);
  v474 = v1412 - 12;
  if ( (int *)(v1412 - 12) != &dword_28898C0 )
    v1275 = (unsigned int *)(v1412 - 4);
        v1276 = __ldrex(v1275);
      while ( __strex(v1276 - 1, v1275) );
      v1276 = (*v1275)--;
    if ( v1276 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v474);
  v475 = v1411 - 12;
  if ( (int *)(v1411 - 12) != &dword_28898C0 )
    v1277 = (unsigned int *)(v1411 - 4);
        v1278 = __ldrex(v1277);
      while ( __strex(v1278 - 1, v1277) );
      v1278 = (*v1277)--;
    if ( v1278 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v475);
  v476 = (void *)(v1409 - 12);
  if ( (int *)(v1409 - 12) != &dword_28898C0 )
    v1279 = (unsigned int *)(v1409 - 4);
        v1280 = __ldrex(v1279);
      while ( __strex(v1280 - 1, v1279) );
      v1280 = (*v1279)--;
    if ( v1280 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v476);
  v477 = (void *)(v1410 - 12);
  if ( (int *)(v1410 - 12) != &dword_28898C0 )
    v1281 = (unsigned int *)(v1410 - 4);
        v1282 = __ldrex(v1281);
      while ( __strex(v1282 - 1, v1281) );
      v1282 = (*v1281)--;
    if ( v1282 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v477);
  sub_119C884((void **)&v1404, "button.holo_debug_toggle_lsr");
  sub_119C884((void **)&v1403, "debug l s r");
  sub_119C854((int *)&v1405, &v1404);
  sub_119C854((int *)&v1406, &v1403);
  v1407 = 2;
  v1408 = 1048576000;
  v478 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v478 == HIDWORD(v478) )
      (int)&v1405);
    *(_DWORD *)v478 = v1405;
    v1405 = (char *)&unk_28898CC;
    *(_DWORD *)(v478 + 4) = v1406;
    v1406 = (char *)&unk_28898CC;
    HIDWORD(v478) = v1408;
    *(_DWORD *)(v478 + 8) = v1407;
    *(_DWORD *)(v478 + 12) = HIDWORD(v478);
  v479 = v1406 - 12;
  if ( (int *)(v1406 - 12) != &dword_28898C0 )
    v1283 = (unsigned int *)(v1406 - 4);
        v1284 = __ldrex(v1283);
      while ( __strex(v1284 - 1, v1283) );
      v1284 = (*v1283)--;
    if ( v1284 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v479);
  v480 = v1405 - 12;
  if ( (int *)(v1405 - 12) != &dword_28898C0 )
    v1285 = (unsigned int *)(v1405 - 4);
        v1286 = __ldrex(v1285);
      while ( __strex(v1286 - 1, v1285) );
      v1286 = (*v1285)--;
    if ( v1286 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v480);
  v481 = (void *)(v1403 - 12);
  if ( (int *)(v1403 - 12) != &dword_28898C0 )
    v1287 = (unsigned int *)(v1403 - 4);
        v1288 = __ldrex(v1287);
      while ( __strex(v1288 - 1, v1287) );
      v1288 = (*v1287)--;
    if ( v1288 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v481);
  v482 = (void *)(v1404 - 12);
  if ( (int *)(v1404 - 12) != &dword_28898C0 )
    v1289 = (unsigned int *)(v1404 - 4);
        v1290 = __ldrex(v1289);
      while ( __strex(v1290 - 1, v1289) );
      v1290 = (*v1289)--;
    if ( v1290 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v482);
  sub_119C884((void **)&v1398, "button.holo_debug_toggle_lsr");
  sub_119C884((void **)&v1397, "debug l s r");
  sub_119C854((int *)&v1399, &v1398);
  sub_119C854((int *)&v1400, &v1397);
  v1401 = 3;
  v1402 = 1048576000;
  v483 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v483 == HIDWORD(v483) )
      (int)&v1399);
    *(_DWORD *)v483 = v1399;
    v1399 = (char *)&unk_28898CC;
    *(_DWORD *)(v483 + 4) = v1400;
    v1400 = (char *)&unk_28898CC;
    HIDWORD(v483) = v1402;
    *(_DWORD *)(v483 + 8) = v1401;
    *(_DWORD *)(v483 + 12) = HIDWORD(v483);
  v484 = v1400 - 12;
  if ( (int *)(v1400 - 12) != &dword_28898C0 )
    v1291 = (unsigned int *)(v1400 - 4);
        v1292 = __ldrex(v1291);
      while ( __strex(v1292 - 1, v1291) );
      v1292 = (*v1291)--;
    if ( v1292 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v484);
  v485 = v1399 - 12;
  if ( (int *)(v1399 - 12) != &dword_28898C0 )
    v1293 = (unsigned int *)(v1399 - 4);
        v1294 = __ldrex(v1293);
      while ( __strex(v1294 - 1, v1293) );
      v1294 = (*v1293)--;
    if ( v1294 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v485);
  v486 = (void *)(v1397 - 12);
  if ( (int *)(v1397 - 12) != &dword_28898C0 )
    v1295 = (unsigned int *)(v1397 - 4);
        v1296 = __ldrex(v1295);
      while ( __strex(v1296 - 1, v1295) );
      v1296 = (*v1295)--;
    if ( v1296 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v486);
  v487 = (void *)(v1398 - 12);
  if ( (int *)(v1398 - 12) != &dword_28898C0 )
    v1297 = (unsigned int *)(v1398 - 4);
        v1298 = __ldrex(v1297);
      while ( __strex(v1298 - 1, v1297) );
      v1298 = (*v1297)--;
    if ( v1298 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v487);
  sub_119C884((void **)&v1392, "button.holo_debug_toggle_lsr");
  sub_119C884((void **)&v1391, "debug l s r");
  sub_119C854((int *)&v1393, &v1392);
  sub_119C854((int *)&v1394, &v1391);
  v1395 = 1;
  v1396 = 1048576000;
  v488 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v488 == HIDWORD(v488) )
      (int)&v1393);
    *(_DWORD *)v488 = v1393;
    v1393 = (char *)&unk_28898CC;
    *(_DWORD *)(v488 + 4) = v1394;
    v1394 = (char *)&unk_28898CC;
    HIDWORD(v488) = v1396;
    *(_DWORD *)(v488 + 8) = v1395;
    *(_DWORD *)(v488 + 12) = HIDWORD(v488);
  v489 = v1394 - 12;
  if ( (int *)(v1394 - 12) != &dword_28898C0 )
    v1299 = (unsigned int *)(v1394 - 4);
        v1300 = __ldrex(v1299);
      while ( __strex(v1300 - 1, v1299) );
      v1300 = (*v1299)--;
    if ( v1300 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v489);
  v490 = v1393 - 12;
  if ( (int *)(v1393 - 12) != &dword_28898C0 )
    v1301 = (unsigned int *)(v1393 - 4);
        v1302 = __ldrex(v1301);
      while ( __strex(v1302 - 1, v1301) );
      v1302 = (*v1301)--;
    if ( v1302 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v490);
  v491 = (void *)(v1391 - 12);
  if ( (int *)(v1391 - 12) != &dword_28898C0 )
    v1303 = (unsigned int *)(v1391 - 4);
        v1304 = __ldrex(v1303);
      while ( __strex(v1304 - 1, v1303) );
      v1304 = (*v1303)--;
    if ( v1304 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v491);
  v492 = (void *)(v1392 - 12);
  if ( (int *)(v1392 - 12) != &dword_28898C0 )
    v1305 = (unsigned int *)(v1392 - 4);
        v1306 = __ldrex(v1305);
      while ( __strex(v1306 - 1, v1305) );
      v1306 = (*v1305)--;
    if ( v1306 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v492);
  sub_119C884((void **)&v1386, "button.holo_debug_toggle_lsr");
  sub_119C884((void **)&v1385, "debug l s r");
  sub_119C854((int *)&v1387, &v1386);
  sub_119C854((int *)&v1388, &v1385);
  v1389 = 0;
  v1390 = 1048576000;
  v493 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v493 == HIDWORD(v493) )
      (int)&v1387);
    *(_DWORD *)v493 = v1387;
    v1387 = (char *)&unk_28898CC;
    *(_DWORD *)(v493 + 4) = v1388;
    v1388 = (char *)&unk_28898CC;
    HIDWORD(v493) = v1390;
    *(_DWORD *)(v493 + 8) = v1389;
    *(_DWORD *)(v493 + 12) = HIDWORD(v493);
  v494 = v1388 - 12;
  if ( (int *)(v1388 - 12) != &dword_28898C0 )
    v1307 = (unsigned int *)(v1388 - 4);
        v1308 = __ldrex(v1307);
      while ( __strex(v1308 - 1, v1307) );
      v1308 = (*v1307)--;
    if ( v1308 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v494);
  v495 = v1387 - 12;
  if ( (int *)(v1387 - 12) != &dword_28898C0 )
    v1309 = (unsigned int *)(v1387 - 4);
        v1310 = __ldrex(v1309);
      while ( __strex(v1310 - 1, v1309) );
      v1310 = (*v1309)--;
    if ( v1310 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v495);
  v496 = (void *)(v1385 - 12);
  if ( (int *)(v1385 - 12) != &dword_28898C0 )
    v1311 = (unsigned int *)(v1385 - 4);
        v1312 = __ldrex(v1311);
      while ( __strex(v1312 - 1, v1311) );
      v1312 = (*v1311)--;
    if ( v1312 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v496);
  v497 = (void *)(v1386 - 12);
  if ( (int *)(v1386 - 12) != &dword_28898C0 )
    v1313 = (unsigned int *)(v1386 - 4);
        v1314 = __ldrex(v1313);
      while ( __strex(v1314 - 1, v1313) );
      v1314 = (*v1313)--;
    if ( v1314 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v497);
  sub_119C884((void **)&v1380, "button.holo_debug_toggle_anchors");
  sub_119C884((void **)&v1379, "debug anchors");
  sub_119C854((int *)&v1381, &v1380);
  sub_119C854((int *)&v1382, &v1379);
  v1383 = 2;
  v1384 = 1048576000;
  v498 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v498 == HIDWORD(v498) )
      (int)&v1381);
    *(_DWORD *)v498 = v1381;
    v1381 = (char *)&unk_28898CC;
    *(_DWORD *)(v498 + 4) = v1382;
    v1382 = (char *)&unk_28898CC;
    HIDWORD(v498) = v1384;
    *(_DWORD *)(v498 + 8) = v1383;
    *(_DWORD *)(v498 + 12) = HIDWORD(v498);
  v499 = v1382 - 12;
  if ( (int *)(v1382 - 12) != &dword_28898C0 )
    v1315 = (unsigned int *)(v1382 - 4);
        v1316 = __ldrex(v1315);
      while ( __strex(v1316 - 1, v1315) );
      v1316 = (*v1315)--;
    if ( v1316 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v499);
  v500 = v1381 - 12;
  if ( (int *)(v1381 - 12) != &dword_28898C0 )
    v1317 = (unsigned int *)(v1381 - 4);
        v1318 = __ldrex(v1317);
      while ( __strex(v1318 - 1, v1317) );
      v1318 = (*v1317)--;
    if ( v1318 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v500);
  v501 = (void *)(v1379 - 12);
  if ( (int *)(v1379 - 12) != &dword_28898C0 )
    v1319 = (unsigned int *)(v1379 - 4);
        v1320 = __ldrex(v1319);
      while ( __strex(v1320 - 1, v1319) );
      v1320 = (*v1319)--;
    if ( v1320 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v501);
  v502 = (void *)(v1380 - 12);
  if ( (int *)(v1380 - 12) != &dword_28898C0 )
    v1321 = (unsigned int *)(v1380 - 4);
        v1322 = __ldrex(v1321);
      while ( __strex(v1322 - 1, v1321) );
      v1322 = (*v1321)--;
    if ( v1322 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v502);
  sub_119C884((void **)&v1374, "button.holo_debug_toggle_anchors");
  sub_119C884((void **)&v1373, "debug anchors");
  sub_119C854((int *)&v1375, &v1374);
  sub_119C854((int *)&v1376, &v1373);
  v1377 = 3;
  v1378 = 1048576000;
  v503 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v503 == HIDWORD(v503) )
      (int)&v1375);
    *(_DWORD *)v503 = v1375;
    v1375 = (char *)&unk_28898CC;
    *(_DWORD *)(v503 + 4) = v1376;
    v1376 = (char *)&unk_28898CC;
    HIDWORD(v503) = v1378;
    *(_DWORD *)(v503 + 8) = v1377;
    *(_DWORD *)(v503 + 12) = HIDWORD(v503);
  v504 = v1376 - 12;
  if ( (int *)(v1376 - 12) != &dword_28898C0 )
    v1323 = (unsigned int *)(v1376 - 4);
        v1324 = __ldrex(v1323);
      while ( __strex(v1324 - 1, v1323) );
      v1324 = (*v1323)--;
    if ( v1324 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v504);
  v505 = v1375 - 12;
  if ( (int *)(v1375 - 12) != &dword_28898C0 )
    v1325 = (unsigned int *)(v1375 - 4);
        v1326 = __ldrex(v1325);
      while ( __strex(v1326 - 1, v1325) );
      v1326 = (*v1325)--;
    if ( v1326 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v505);
  v506 = (void *)(v1373 - 12);
  if ( (int *)(v1373 - 12) != &dword_28898C0 )
    v1327 = (unsigned int *)(v1373 - 4);
        v1328 = __ldrex(v1327);
      while ( __strex(v1328 - 1, v1327) );
      v1328 = (*v1327)--;
    if ( v1328 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v506);
  v507 = (void *)(v1374 - 12);
  if ( (int *)(v1374 - 12) != &dword_28898C0 )
    v1329 = (unsigned int *)(v1374 - 4);
        v1330 = __ldrex(v1329);
      while ( __strex(v1330 - 1, v1329) );
      v1330 = (*v1329)--;
    if ( v1330 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v507);
  sub_119C884((void **)&v1368, "button.holo_debug_toggle_anchors");
  sub_119C884((void **)&v1367, "debug anchors");
  sub_119C854((int *)&v1369, &v1368);
  sub_119C854((int *)&v1370, &v1367);
  v1371 = 1;
  v1372 = 1048576000;
  v508 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v508 == HIDWORD(v508) )
      (int)&v1369);
    *(_DWORD *)v508 = v1369;
    v1369 = (char *)&unk_28898CC;
    *(_DWORD *)(v508 + 4) = v1370;
    v1370 = (char *)&unk_28898CC;
    HIDWORD(v508) = v1372;
    *(_DWORD *)(v508 + 8) = v1371;
    *(_DWORD *)(v508 + 12) = HIDWORD(v508);
  v509 = v1370 - 12;
  if ( (int *)(v1370 - 12) != &dword_28898C0 )
    v1331 = (unsigned int *)(v1370 - 4);
        v1332 = __ldrex(v1331);
      while ( __strex(v1332 - 1, v1331) );
      v1332 = (*v1331)--;
    if ( v1332 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v509);
  v510 = v1369 - 12;
  if ( (int *)(v1369 - 12) != &dword_28898C0 )
    v1333 = (unsigned int *)(v1369 - 4);
        v1334 = __ldrex(v1333);
      while ( __strex(v1334 - 1, v1333) );
      v1334 = (*v1333)--;
    if ( v1334 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v510);
  v511 = (void *)(v1367 - 12);
  if ( (int *)(v1367 - 12) != &dword_28898C0 )
    v1335 = (unsigned int *)(v1367 - 4);
        v1336 = __ldrex(v1335);
      while ( __strex(v1336 - 1, v1335) );
      v1336 = (*v1335)--;
    if ( v1336 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v511);
  v512 = (void *)(v1368 - 12);
  if ( (int *)(v1368 - 12) != &dword_28898C0 )
    v1337 = (unsigned int *)(v1368 - 4);
        v1338 = __ldrex(v1337);
      while ( __strex(v1338 - 1, v1337) );
      v1338 = (*v1337)--;
    if ( v1338 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v512);
  sub_119C884((void **)&v1362, "button.holo_debug_toggle_anchors");
  sub_119C884((void **)&v1361, "debug anchors");
  sub_119C854((int *)&v1363, &v1362);
  sub_119C854((int *)&v1364, &v1361);
  v1365 = 0;
  v1366 = 1048576000;
  v513 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v513 == HIDWORD(v513) )
      (int)&v1363);
    *(_DWORD *)v513 = v1363;
    v1363 = (char *)&unk_28898CC;
    *(_DWORD *)(v513 + 4) = v1364;
    v1364 = (char *)&unk_28898CC;
    HIDWORD(v513) = v1366;
    *(_DWORD *)(v513 + 8) = v1365;
    *(_DWORD *)(v513 + 12) = HIDWORD(v513);
  v514 = v1364 - 12;
  if ( (int *)(v1364 - 12) != &dword_28898C0 )
    v1339 = (unsigned int *)(v1364 - 4);
        v1340 = __ldrex(v1339);
      while ( __strex(v1340 - 1, v1339) );
      v1340 = (*v1339)--;
    if ( v1340 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v514);
  v515 = v1363 - 12;
  if ( (int *)(v1363 - 12) != &dword_28898C0 )
    v1341 = (unsigned int *)(v1363 - 4);
        v1342 = __ldrex(v1341);
      while ( __strex(v1342 - 1, v1341) );
      v1342 = (*v1341)--;
    if ( v1342 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v515);
  v516 = (void *)(v1361 - 12);
  if ( (int *)(v1361 - 12) != &dword_28898C0 )
    v1343 = (unsigned int *)(v1361 - 4);
        v1344 = __ldrex(v1343);
      while ( __strex(v1344 - 1, v1343) );
      v1344 = (*v1343)--;
    if ( v1344 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v516);
  v517 = (void *)(v1362 - 12);
  if ( (int *)(v1362 - 12) != &dword_28898C0 )
    v1345 = (unsigned int *)(v1362 - 4);
        v1346 = __ldrex(v1345);
      while ( __strex(v1346 - 1, v1345) );
      v1346 = (*v1345)--;
    if ( v1346 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v517);
  sub_119C884((void **)&v1356, "button.holo_debug_toggle_thirdperson");
  sub_119C884((void **)&v1355, "third person");
  sub_119C854((int *)&v1357, &v1356);
  sub_119C854((int *)&v1358, &v1355);
  v1359 = 4;
  v1360 = 1048576000;
  v518 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v518 == HIDWORD(v518) )
      (int)&v1357);
    *(_DWORD *)v518 = v1357;
    v1357 = (char *)&unk_28898CC;
    *(_DWORD *)(v518 + 4) = v1358;
    v1358 = (char *)&unk_28898CC;
    HIDWORD(v518) = v1360;
    *(_DWORD *)(v518 + 8) = v1359;
    *(_DWORD *)(v518 + 12) = HIDWORD(v518);
  v519 = v1358 - 12;
  if ( (int *)(v1358 - 12) != &dword_28898C0 )
    v1347 = (unsigned int *)(v1358 - 4);
        v1348 = __ldrex(v1347);
      while ( __strex(v1348 - 1, v1347) );
      v1348 = (*v1347)--;
    if ( v1348 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v519);
  v520 = v1357 - 12;
  if ( (int *)(v1357 - 12) != &dword_28898C0 )
    v1349 = (unsigned int *)(v1357 - 4);
        v1350 = __ldrex(v1349);
      while ( __strex(v1350 - 1, v1349) );
      v1350 = (*v1349)--;
    if ( v1350 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v520);
  v521 = (void *)(v1355 - 12);
  if ( (int *)(v1355 - 12) != &dword_28898C0 )
    v1351 = (unsigned int *)(v1355 - 4);
        v1352 = __ldrex(v1351);
      while ( __strex(v1352 - 1, v1351) );
      v1352 = (*v1351)--;
    if ( v1352 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v521);
  v522 = (void *)(v1356 - 12);
  if ( (int *)(v1356 - 12) != &dword_28898C0 )
    v1353 = (unsigned int *)(v1356 - 4);
        v1354 = __ldrex(v1353);
      while ( __strex(v1354 - 1, v1353) );
      v1354 = (*v1353)--;
    if ( v1354 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v522);
}


void __fastcall MinecraftInputHandler::_registerInputHandlers(MinecraftInputHandler *this)
{
  MinecraftInputHandler::_registerInputHandlers(this);
}


BehaviorActionMapper *__fastcall MinecraftInputHandler::init(MinecraftInputHandler *this)
{
  MinecraftInputHandler *v1; // r4@1
  MinecraftGame *v2; // r0@1
  char *v3; // r6@1
  _DWORD *v4; // r0@1
  _DWORD *v5; // r1@1
  int v6; // r0@1
  _DWORD *v7; // r0@3
  int v8; // r5@3
  int v9; // r0@3
  int v10; // r8@5
  void *v11; // r0@6
  int v12; // r9@8
  AppPlatform **v13; // r0@9
  char v14; // r10@11
  AppPlatform **v15; // r0@12
  char v16; // r6@14
  void *v17; // r7@14
  InputHandler *v18; // r0@14
  InputHandler *v19; // r0@15
  void *v20; // r0@17
  SplitscreenJoinListener *v21; // r5@20
  void *v22; // r0@20
  int v23; // r5@23
  void (__fastcall *v24)(int, int); // r6@23
  int v25; // r0@23
  InputHandler *v26; // r1@23
  MouseMapper *v27; // r5@23
  int v28; // r6@23
  GazeGestureVoiceMapper *v29; // r7@23
  int v30; // r6@25
  KeyboardMapper *v31; // r7@25
  int v32; // r0@27
  int v33; // r6@29
  GamePadMapper *v34; // r7@29
  int v35; // r0@31
  int v36; // r6@32
  TouchMapper *v37; // r7@32
  int v38; // r6@35
  MotionControllerMapper *v39; // r7@35
  int v40; // r6@37
  DeviceButtonMapper *v41; // r7@37
  int v42; // r4@39
  __int64 v43; // kr00_8@39
  MinecraftGame *v44; // r6@39
  BehaviorActionMapper *v45; // r7@39
  BehaviorActionMapper *result; // r0@39
  BehaviorActionMapper *v47; // [sp+8h] [bp-40h]@39
  DeviceButtonMapper *v48; // [sp+Ch] [bp-3Ch]@37
  MotionControllerMapper *v49; // [sp+10h] [bp-38h]@35
  TouchMapper *v50; // [sp+14h] [bp-34h]@32
  GamePadMapper *v51; // [sp+18h] [bp-30h]@29
  MouseMapper *v52; // [sp+1Ch] [bp-2Ch]@27
  KeyboardMapper *v53; // [sp+20h] [bp-28h]@25
  GazeGestureVoiceMapper *v54; // [sp+24h] [bp-24h]@23

  v1 = this;
  v2 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)this + 1));
  v3 = MinecraftGame::retrieveCIDToClientMap(v2);
  v4 = operator new(0xCu);
  v5 = v4;
  *v4 = &off_26D92E0;
  v4[1] = v3;
  v4[2] = &off_26D92F4;
  v6 = *((_DWORD *)v1 + 3);
  *((_DWORD *)v1 + 3) = v5;
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  v7 = operator new(0x138u);
  v8 = (int)v7;
  *v7 = &off_26D9314;
  v7[1] = v3;
  _aeabi_memclr4(v7 + 2, 304);
  *(_DWORD *)(v8 + 8) = &off_26D932C;
  InputMapping::InputMapping(v8 + 12);
  v9 = *((_DWORD *)v1 + 4);
  *((_DWORD *)v1 + 4) = v8;
  if ( v9 )
  {
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
    v8 = *((_DWORD *)v1 + 4);
  }
  v10 = *((_DWORD *)v1 + 3);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v11 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v11 = &ServiceLocator<AppPlatform>::mDefaultService;
  v12 = (*(int (**)(void))(**(_DWORD **)v11 + 592))();
    v13 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v13 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v14 = AppPlatform::getUseTouchGestures(*v13);
    v15 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v15 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v16 = AppPlatform::getUseTouchGestures(*v15);
  v17 = operator new(0x108u);
  InputHandler::InputHandler((int)v17, v10, v8, v12, v14, v16);
  v18 = (InputHandler *)*((_DWORD *)v1 + 2);
  *((_DWORD *)v1 + 2) = v17;
  if ( v18 )
    v19 = InputHandler::~InputHandler(v18);
    operator delete((void *)v19);
  MinecraftInputHandler::initClientInput(v1, *((ClientInstance **)v1 + 1));
    v20 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v20 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v20 + 196))() == 1 )
    v21 = (SplitscreenJoinListener *)operator new(0x10u);
    SplitscreenJoinListener::SplitscreenJoinListener(v21);
    v22 = (void *)*((_DWORD *)v1 + 5);
    *((_DWORD *)v1 + 5) = v21;
    if ( v22 )
    {
      operator delete(v22);
      v21 = (SplitscreenJoinListener *)*((_DWORD *)v1 + 5);
    }
    SplitscreenJoinListener::registerInputHandlers(v21, *((InputHandler **)v1 + 2));
  v23 = *((_DWORD *)v1 + 4);
  v24 = *(void (__fastcall **)(int, int))(*(_DWORD *)v23 + 8);
  v25 = InputHandler::getButtonRegistry(*((InputHandler **)v1 + 2));
  v24(v23, v25);
  MinecraftInputHandler::_registerGamepadSpecificMappings(v1);
  MinecraftInputHandler::_registerVoiceMappings(v1);
  MoveInputHandler::_registerInputHandlers(*((MoveInputHandler **)v1 + 2), v26);
  MinecraftInputHandler::_registerInputHandlers(v1);
  v27 = (MouseMapper *)operator new(0x64u);
  MouseMapper::MouseMapper(v27);
  *((_DWORD *)v1 + 6) = v27;
  v28 = *((_DWORD *)v1 + 2);
  v29 = (GazeGestureVoiceMapper *)operator new(0x34u);
  GazeGestureVoiceMapper::GazeGestureVoiceMapper(v29);
  v54 = v29;
  InputHandler::registerInputDeviceMapper(v28, (int *)&v54);
  if ( v54 )
    (*(void (**)(void))(*(_DWORD *)v54 + 4))();
  v54 = 0;
  v30 = *((_DWORD *)v1 + 2);
  v31 = (KeyboardMapper *)operator new(0x44u);
  KeyboardMapper::KeyboardMapper(v31);
  v53 = v31;
  InputHandler::registerInputDeviceMapper(v30, (int *)&v53);
  if ( v53 )
    (*(void (**)(void))(*(_DWORD *)v53 + 4))();
  v53 = 0;
  v32 = *((_DWORD *)v1 + 2);
  v52 = v27;
  InputHandler::registerInputDeviceMapper(v32, (int *)&v52);
  if ( v52 )
    (*(void (**)(void))(*(_DWORD *)v52 + 4))();
  v52 = 0;
  v33 = *((_DWORD *)v1 + 2);
  v34 = (GamePadMapper *)operator new(0x58u);
  GamePadMapper::GamePadMapper(v34);
  v51 = v34;
  InputHandler::registerInputDeviceMapper(v33, (int *)&v51);
  if ( v51 )
    (*(void (**)(void))(*(_DWORD *)v51 + 4))();
  v51 = 0;
  v35 = ClientInstance::getHoloInput(*((ClientInstance **)v1 + 1));
  if ( !(*(int (**)(void))(*(_DWORD *)v35 + 44))() )
    v36 = *((_DWORD *)v1 + 2);
    v37 = (TouchMapper *)operator new(0x4Cu);
    TouchMapper::TouchMapper(v37);
    v50 = v37;
    InputHandler::registerInputDeviceMapper(v36, (int *)&v50);
    if ( v50 )
      (*(void (**)(void))(*(_DWORD *)v50 + 4))();
    v50 = 0;
  v38 = *((_DWORD *)v1 + 2);
  v39 = (MotionControllerMapper *)operator new(0x58u);
  MotionControllerMapper::MotionControllerMapper(v39);
  v49 = v39;
  InputHandler::registerInputDeviceMapper(v38, (int *)&v49);
  if ( v49 )
    (*(void (**)(void))(*(_DWORD *)v49 + 4))();
  v49 = 0;
  v40 = *((_DWORD *)v1 + 2);
  v41 = (DeviceButtonMapper *)operator new(0x58u);
  DeviceButtonMapper::DeviceButtonMapper(v41);
  v48 = v41;
  InputHandler::registerInputDeviceMapper(v40, (int *)&v48);
  if ( v48 )
    (*(void (**)(void))(*(_DWORD *)v48 + 4))();
  v48 = 0;
  v43 = *(_QWORD *)((char *)v1 + 4);
  v42 = *(_QWORD *)((char *)v1 + 4) >> 32;
  v44 = (MinecraftGame *)ClientInstance::getMinecraftGame((ClientInstance *)v43);
  v45 = (BehaviorActionMapper *)operator new(0x44u);
  BehaviorActionMapper::BehaviorActionMapper(v45, v44);
  v47 = v45;
  InputHandler::registerInputDeviceMapper(v42, (int *)&v47);
  result = v47;
  if ( v47 )
    result = (BehaviorActionMapper *)(*(int (**)(void))(*(_DWORD *)v47 + 4))();
  return result;
}


void __fastcall MinecraftInputHandler::_registerMenuButton(int a1, int **a2, char a3, int a4)
{
  int v4; // r6@1
  int v5; // r8@1
  char v6; // r9@1
  int **v7; // r5@1
  unsigned __int64 *v8; // r0@1
  unsigned __int16 v9; // r7@1
  int v10; // r4@1
  _WORD *v11; // r0@1
  __int64 v12; // r1@1
  void *v13; // r0@3
  int v14; // r4@4
  _DWORD *v15; // r0@4
  __int64 v16; // r2@4
  void *v17; // r0@6
  unsigned int *v18; // r2@8
  signed int v19; // r1@10
  unsigned int *v20; // r2@12
  signed int v21; // r1@14
  _DWORD *v22; // [sp+0h] [bp-48h]@4
  __int64 v23; // [sp+8h] [bp-40h]@4
  int v24; // [sp+10h] [bp-38h]@4
  _WORD *v25; // [sp+14h] [bp-34h]@1
  __int64 v26; // [sp+1Ch] [bp-2Ch]@1
  int v27; // [sp+24h] [bp-24h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = (unsigned __int64 *)InputHandler::getButtonRegistry(*(InputHandler **)(a1 + 8));
  v9 = NameRegistry::getNameId(v8, v7);
  v10 = *(_DWORD *)(v4 + 8);
  sub_119C854(&v27, (int *)v7);
  v11 = operator new(2u);
  LODWORD(v12) = sub_E2742C;
  *v11 = v9;
  HIDWORD(v12) = sub_E2741C;
  v25 = v11;
  v26 = v12;
  InputHandler::registerButtonDownHandler(v10, (int **)&v27, (int)&v25, v6);
  if ( (_DWORD)v26 )
    ((void (*)(void))v26)();
  v13 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  }
  v14 = *(_DWORD *)(v4 + 8);
  sub_119C854(&v24, (int *)v7);
  v15 = operator new(8u);
  HIDWORD(v16) = sub_E27462;
  *v15 = v9 | (v5 << 16);
  v15[1] = v4;
  LODWORD(v16) = sub_E2749C;
  v22 = v15;
  v23 = v16;
  InputHandler::registerButtonUpHandler(v14, (int **)&v24, (int)&v22, v6);
  if ( (_DWORD)v23 )
    ((void (*)(void))v23)();
  v17 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v24 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
}


void __fastcall MinecraftInputHandler::initClientInput(MinecraftInputHandler *this, ClientInstance *a2)
{
  ClientInstance *v2; // r5@1
  MinecraftInputHandler *v3; // r8@1
  MinecraftGame *v4; // r0@1
  char *v5; // r7@1
  int *v6; // r4@1
  int v7; // r1@1
  int *v8; // r0@2
  int *v9; // r2@2
  int *v10; // r1@3
  int *v11; // r1@5
  unsigned int v12; // r0@7
  int v13; // r3@7
  int *v14; // r2@8
  int *v15; // r1@9
  __int64 v16; // kr00_8@19
  unsigned int *v17; // r0@20
  unsigned int v18; // r1@22
  int v19; // r6@25
  ClientInputHandler *v20; // r7@25
  ClientInputHandler *v21; // r0@26
  void *v22; // r7@27
  unsigned int *v23; // r0@28
  unsigned int v24; // r1@30
  int v25; // r0@33
  unsigned int *v26; // r2@34
  unsigned int v27; // r1@36
  void *v28; // r0@45
  int v29; // r7@46
  int v30; // r6@49
  int v31; // r0@49
  int v32; // r6@49
  int v33; // r0@49
  unsigned int *v34; // r1@50
  unsigned int v35; // r0@52
  void *v36; // [sp+4h] [bp-44h]@33
  ClientInputHandler *v37; // [sp+8h] [bp-40h]@25
  char v38; // [sp+Ch] [bp-3Ch]@2
  int v39; // [sp+10h] [bp-38h]@1
  int *v40; // [sp+14h] [bp-34h]@1
  int *v41; // [sp+18h] [bp-30h]@1
  int *v42; // [sp+1Ch] [bp-2Ch]@1
  int v43; // [sp+20h] [bp-28h]@1
  __int64 v44; // [sp+24h] [bp-24h]@27

  v2 = a2;
  v3 = this;
  v4 = (MinecraftGame *)ClientInstance::getMinecraftGame(a2);
  v5 = MinecraftGame::getClientInstanceMap(v4);
  v43 = 0;
  v39 = 0;
  v40 = 0;
  v6 = &v39;
  v41 = &v39;
  v42 = &v39;
  v7 = *((_DWORD *)v5 + 2);
  if ( v7 )
  {
    v8 = (int *)std::_Rb_tree<unsigned char,std::pair<unsigned char const,std::shared_ptr<ClientInstance>>,std::_Select1st<std::pair<unsigned char const,std::shared_ptr<ClientInstance>>>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<ClientInstance>>>>::_M_copy(
                  (int)&v38,
                  v7,
                  (int)&v39);
    v9 = v8;
    v40 = v8;
    do
    {
      v10 = v9;
      v9 = (int *)v9[2];
    }
    while ( v9 );
    v41 = v10;
      v11 = v8;
      v8 = (int *)v8[3];
    while ( v8 );
    v42 = v11;
    v43 = *((_DWORD *)v5 + 5);
  }
  v12 = ClientInstance::getClientSubId(v2);
  v13 = (int)v40;
  if ( v40 )
    v14 = &v39;
      v15 = (int *)v13;
      while ( *((_BYTE *)v15 + 16) < v12 )
      {
        v15 = (int *)v15[3];
        if ( !v15 )
        {
          v15 = v14;
          goto LABEL_16;
        }
      }
      v13 = v15[2];
      v14 = v15;
    while ( v13 );
  else
    v15 = &v39;
LABEL_16:
  if ( v15 != &v39 && v12 >= *((_BYTE *)v15 + 16) )
    v6 = v15;
  v16 = *(_QWORD *)(v6 + 5);
  if ( HIDWORD(v16) )
    v17 = (unsigned int *)(HIDWORD(v16) + 8);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
    else
      ++*v17;
  v19 = *((_DWORD *)v3 + 2);
  v20 = (ClientInputHandler *)operator new(0x20u);
  ClientInputHandler::ClientInputHandler((int)v20, v2, v19);
  v37 = v20;
  ClientInstance::setClientInputHandler((int)v2, (int *)&v37);
  if ( v37 )
    v21 = ClientInputHandler::~ClientInputHandler(v37);
    operator delete((void *)v21);
  v37 = 0;
  v22 = operator new(0x64u);
  v44 = v16;
    v23 = (unsigned int *)(HIDWORD(v16) + 8);
        v24 = __ldrex(v23);
      while ( __strex(v24 + 1, v23) );
      ++*v23;
  MoveInputHandler::MoveInputHandler((int)v22, (int)&v44);
  v25 = HIDWORD(v44);
  v36 = v22;
  if ( HIDWORD(v44) )
    v26 = (unsigned int *)(HIDWORD(v44) + 8);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      (*(void (**)(void))(*(_DWORD *)v25 + 12))();
  ClientInstance::setMoveTurnInput((int)v2, (int *)&v36);
  if ( v36 )
    (*(void (**)(void))(*(_DWORD *)v36 + 4))();
  v36 = 0;
  if ( ClientInstance::isPrimaryClient(v2) == 1 )
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v28 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v28 = &ServiceLocator<AppPlatform>::mDefaultService;
    v29 = (*(int (**)(void))(**(_DWORD **)v28 + 592))();
    v29 = 3;
  v30 = *((_DWORD *)v3 + 2);
  v31 = ClientInstance::getControllerId(v2);
  InputHandler::initNewControllerIdOwner(v30, v31, v29);
  ClientInstance::onClientInputInitComplete(v2);
  v32 = ClientInstance::getOptions(v2);
  v33 = ClientInstance::getCurrentInputMode(v2);
  Options::updateInputMode(v32, v33);
    v34 = (unsigned int *)(HIDWORD(v16) + 8);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v16) + 12))(HIDWORD(v16));
  std::_Rb_tree<unsigned char,std::pair<unsigned char const,std::shared_ptr<ClientInstance>>,std::_Select1st<std::pair<unsigned char const,std::shared_ptr<ClientInstance>>>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<ClientInstance>>>>::_M_erase(
    (int)&v38,
    (int)v40);
}


void __fastcall MinecraftInputHandler::~MinecraftInputHandler(MinecraftInputHandler *this)
{
  MinecraftInputHandler *v1; // r4@1
  void *v2; // r0@1
  int v3; // r0@3
  int v4; // r0@5
  InputHandler *v5; // r0@7
  InputHandler *v6; // r0@8

  v1 = this;
  *(_DWORD *)this = &off_26D92CC;
  v2 = (void *)*((_DWORD *)this + 5);
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)v1 + 5) = 0;
  v3 = *((_DWORD *)v1 + 4);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  v4 = *((_DWORD *)v1 + 3);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 3) = 0;
  v5 = (InputHandler *)*((_DWORD *)v1 + 2);
  if ( v5 )
  {
    v6 = InputHandler::~InputHandler(v5);
    operator delete((void *)v6);
  }
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall MinecraftInputHandler::_registerVoiceMappings(MinecraftInputHandler *this)
{
  MinecraftInputHandler *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  void *v3; // r0@1
  int v5; // r8@2
  unsigned __int64 *v6; // r0@4
  unsigned __int64 *v7; // r0@4
  int v8; // r0@4
  int v9; // r1@4
  int v14; // r0@5
  int v15; // r4@5
  int v16; // r6@5
  unsigned int *v17; // r2@7
  signed int v18; // r1@9
  unsigned int *v19; // r2@11
  signed int v20; // r1@13
  int v21; // r1@23
  void *v22; // r0@23
  int *v23; // r0@24
  unsigned int *v24; // r2@30
  signed int v25; // r1@32
  __int64 v26; // [sp+8h] [bp-38h]@2
  int v27; // [sp+10h] [bp-30h]@2
  int v28; // [sp+18h] [bp-28h]@1

  v1 = this;
  v2 = (unsigned __int64 *)InputHandler::getButtonRegistry(*((InputHandler **)this + 2));
  sub_119C884((void **)&v28, "button.dictationEvent");
  NameRegistry::registerName(v2, (int **)&v28);
  v3 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v26 = 0LL;
  v27 = 0;
  MinecraftInputHandler::_loadVoiceMappings(0, (int)&v26);
  v5 = HIDWORD(v26);
  for ( _R5 = v26; _R5 != v5; _R5 += 16 )
    v6 = (unsigned __int64 *)InputHandler::getButtonRegistry(*((InputHandler **)v1 + 2));
    NameRegistry::registerName(v6, (int **)_R5);
    v7 = (unsigned __int64 *)InputHandler::getButtonRegistry(*((InputHandler **)v1 + 2));
    NameRegistry::getNameId(v7, (int **)_R5);
    v8 = ClientInstance::getVoiceSystem(*((ClientInstance **)v1 + 1));
    v9 = *(_DWORD *)(_R5 + 8);
    __asm
      VLDR            S0, [R5,#0xC]
      VSTR            S0, [SP,#0x40+var_40]
    (*(void (**)(void))(*(_DWORD *)v8 + 24))();
  v14 = ClientInstance::getVoiceSystem(*((ClientInstance **)v1 + 1));
  (*(void (**)(void))(*(_DWORD *)v14 + 28))();
  v16 = HIDWORD(v26);
  v15 = v26;
  if ( (_DWORD)v26 != HIDWORD(v26) )
    do
      v21 = *(_DWORD *)(v15 + 4);
      v22 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
      {
        v17 = (unsigned int *)(v21 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
        }
        else
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v22);
      }
      v23 = (int *)(*(_DWORD *)v15 - 12);
      if ( v23 != &dword_28898C0 )
        v19 = (unsigned int *)(*(_DWORD *)v15 - 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v23);
      v15 += 16;
    while ( v15 != v16 );
    v15 = v26;
  if ( v15 )
    operator delete((void *)v15);
}


int __fastcall MinecraftInputHandler::getNameId(int a1, int **a2)
{
  int **v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)InputHandler::getButtonRegistry(*(InputHandler **)(a1 + 8));
  return j_j_j__ZN12NameRegistry9getNameIdERKSs_0(v3, v2);
}


int __fastcall MinecraftInputHandler::MinecraftInputHandler(int result, int a2)
{
  *(_DWORD *)result = &off_26D92CC;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


void __fastcall MinecraftInputHandler::~MinecraftInputHandler(MinecraftInputHandler *this)
{
  MinecraftInputHandler::~MinecraftInputHandler(this);
}


int __fastcall MinecraftInputHandler::onConfigChanged(MinecraftInputHandler *this, const Config *a2)
{
  Config *v2; // r4@1
  InputHandler *v3; // r5@1
  int v4; // r6@1
  int v5; // r2@1

  v2 = a2;
  v3 = (InputHandler *)*((_DWORD *)this + 2);
  v4 = Config::getWidth(a2);
  v5 = Config::getHeight(v2);
  return j_j_j__ZN12InputHandler13setWindowSizeEii(v3, v4, v5);
}


void __fastcall MinecraftInputHandler::initClientInput(MinecraftInputHandler *this, ClientInstance *a2)
{
  MinecraftInputHandler::initClientInput(this, a2);
}


void __fastcall MinecraftInputHandler::_registerGamepadSpecificMappings(MinecraftInputHandler *this)
{
  MinecraftInputHandler *v1; // r4@1
  unsigned __int64 *v2; // r5@1
  void *v3; // r0@1
  unsigned __int64 *v4; // r5@2
  void *v5; // r0@2
  unsigned __int64 *v6; // r4@3
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int v14; // [sp+8h] [bp-28h]@3
  int v15; // [sp+10h] [bp-20h]@2
  int v16; // [sp+18h] [bp-18h]@1

  v1 = this;
  v2 = (unsigned __int64 *)InputHandler::getButtonRegistry(*((InputHandler **)this + 2));
  sub_119C884((void **)&v16, "button.fly_down_slow");
  NameRegistry::registerName(v2, (int **)&v16);
  v3 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = (unsigned __int64 *)InputHandler::getButtonRegistry(*((InputHandler **)v1 + 2));
  sub_119C884((void **)&v15, "button.fly_up_slow");
  NameRegistry::registerName(v4, (int **)&v15);
  v5 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v15 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = (unsigned __int64 *)InputHandler::getButtonRegistry(*((InputHandler **)v1 + 2));
  sub_119C884((void **)&v14, "button.interactwithtoast");
  NameRegistry::registerName(v6, (int **)&v14);
  v7 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
}


signed int __fastcall MinecraftInputHandler::getSplitscreenJoinPromptVisible(MinecraftInputHandler *this)
{
  SplitscreenJoinListener *v1; // r0@1
  signed int result; // r0@2

  v1 = (SplitscreenJoinListener *)*((_DWORD *)this + 5);
  if ( v1 )
    result = SplitscreenJoinListener::isWaitingForSplitscreenJoinConfirmation(v1);
  else
    result = 0;
  return result;
}


void __fastcall MinecraftInputHandler::tick(int a1, MinecraftGame *a2, int a3, int a4, int a5)
{
  int v5; // r5@1
  MinecraftGame *v6; // r4@1
  SplitscreenJoinListener *v7; // r5@1
  int v8; // r1@2

  v5 = a1;
  v6 = a2;
  InputHandler::tick(*(_DWORD *)(a1 + 8), (void *)a2, a3, a4, a5);
  v7 = *(SplitscreenJoinListener **)(v5 + 20);
  if ( v7 )
  {
    v8 = MinecraftGame::isSplitscreenJoinEnabled(v6);
    j_j_j__ZN23SplitscreenJoinListener4tickEb(v7, v8);
  }
}


void __fastcall MinecraftInputHandler::_registerVoiceMappings(MinecraftInputHandler *this)
{
  MinecraftInputHandler::_registerVoiceMappings(this);
}


MinecraftInputHandler *__fastcall MinecraftInputHandler::~MinecraftInputHandler(MinecraftInputHandler *this)
{
  MinecraftInputHandler *v1; // r4@1
  void *v2; // r0@1
  int v3; // r0@3
  int v4; // r0@5
  InputHandler *v5; // r0@7
  InputHandler *v6; // r0@8
  MinecraftInputHandler *result; // r0@9

  v1 = this;
  *(_DWORD *)this = &off_26D92CC;
  v2 = (void *)*((_DWORD *)this + 5);
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)v1 + 5) = 0;
  v3 = *((_DWORD *)v1 + 4);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  v4 = *((_DWORD *)v1 + 3);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 3) = 0;
  v5 = (InputHandler *)*((_DWORD *)v1 + 2);
  if ( v5 )
  {
    v6 = InputHandler::~InputHandler(v5);
    operator delete((void *)v6);
  }
  result = v1;
  *((_DWORD *)v1 + 2) = 0;
  return result;
}
