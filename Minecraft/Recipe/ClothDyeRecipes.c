

int __fastcall ClothDyeRecipes::addRecipes(ClothDyeRecipes *this, Recipes *a2)
{
  ClothBlock *v2; // r4@1
  ClothBlock *v3; // r6@2
  int v4; // r8@4
  int v5; // r1@4
  int v6; // r7@4
  int v7; // r7@4
  int v8; // r4@4
  void *v9; // r0@5
  void *v10; // r0@7
  int v11; // r0@9
  int v12; // r4@36
  int v13; // r5@36
  void *v14; // r0@37
  void *v15; // r0@39
  int v16; // r0@41
  void *v17; // r0@53
  int v18; // r4@60
  int v19; // r5@60
  void *v20; // r0@61
  void *v21; // r0@63
  int v22; // r0@65
  void *v23; // r0@77
  int v24; // r4@84
  int v25; // r5@84
  void *v26; // r0@85
  void *v27; // r0@87
  int v28; // r0@89
  void *v29; // r0@101
  int v30; // r4@108
  int v31; // r5@108
  void *v32; // r0@109
  void *v33; // r0@111
  int v34; // r0@113
  void *v35; // r0@125
  int v36; // r4@132
  int v37; // r5@132
  void *v38; // r0@133
  void *v39; // r0@135
  int v40; // r0@137
  void *v41; // r0@149
  void *v42; // r0@150
  void *v43; // r0@151
  ItemInstance *v44; // r0@170
  __int64 v45; // r4@170
  void *v46; // r0@171
  void *v47; // r0@173
  int v48; // r0@175
  ItemInstance *v49; // r0@199
  __int64 v50; // r4@199
  void *v51; // r0@200
  void *v52; // r0@202
  int v53; // r0@204
  ItemInstance *v54; // r0@228
  unsigned __int64 v55; // r4@228
  void *v56; // r0@229
  void *v57; // r0@231
  int v58; // r0@233
  ItemInstance *v59; // r0@257
  unsigned __int64 v60; // r4@257
  void *v61; // r0@258
  void *v62; // r0@260
  int v63; // r0@262
  ItemInstance *v64; // r0@286
  void *v65; // r4@286
  void *v66; // r5@286
  void *v67; // r0@287
  void *v68; // r0@289
  int v69; // r0@291
  ItemInstance *v70; // r0@315
  void *v71; // r4@315
  void *v72; // r5@315
  void *v73; // r0@316
  void *v74; // r0@318
  int v75; // r0@320
  ItemInstance *v76; // r0@350
  void *v77; // r4@350
  void *v78; // r5@350
  void *v79; // r0@351
  void *v80; // r0@353
  int v81; // r0@355
  ItemInstance *v82; // r0@379
  void *v83; // r4@379
  void *v84; // r5@379
  void *v85; // r0@380
  void *v86; // r0@382
  int v87; // r0@384
  ItemInstance *v88; // r0@408
  void *v89; // r4@408
  void *v90; // r5@408
  void *v91; // r0@409
  void *v92; // r0@411
  int v93; // r0@413
  ItemInstance *v94; // r0@437
  void *v95; // r4@437
  void *v96; // r5@437
  void *v97; // r0@438
  void *v98; // r0@440
  int v99; // r0@442
  ItemInstance *v100; // r0@466
  void *v101; // r4@466
  void *v102; // r5@466
  void *v103; // r0@467
  void *v104; // r0@469
  int v105; // r0@471
  ItemInstance *v106; // r0@501
  void *v107; // r4@501
  void *v108; // r5@501
  void *v109; // r0@502
  void *v110; // r0@504
  int v111; // r0@506
  int result; // r0@696
  unsigned int *v113; // r2@699
  signed int v114; // r1@701
  unsigned int *v115; // r2@703
  signed int v116; // r1@705
  unsigned int *v117; // r2@707
  signed int v118; // r1@709
  unsigned int *v119; // r2@711
  signed int v120; // r1@713
  unsigned int *v121; // r2@715
  signed int v122; // r1@717
  unsigned int *v123; // r2@719
  signed int v124; // r1@721
  unsigned int *v125; // r2@723
  signed int v126; // r1@725
  ClothBlock *v127; // [sp+28h] [bp-1858h]@2
  ClothDyeRecipes *v128; // [sp+2Ch] [bp-1854h]@1
  char v129; // [sp+30h] [bp-1850h]@686
  int v130; // [sp+38h] [bp-1848h]@690
  void *v131; // [sp+54h] [bp-182Ch]@688
  void *v132; // [sp+64h] [bp-181Ch]@686
  char v133; // [sp+78h] [bp-1808h]@686
  int v134; // [sp+80h] [bp-1800h]@696
  void *v135; // [sp+9Ch] [bp-17E4h]@694
  void *v136; // [sp+ACh] [bp-17D4h]@692
  char v137; // [sp+C0h] [bp-17C0h]@674
  int v138; // [sp+C8h] [bp-17B8h]@678
  void *v139; // [sp+E4h] [bp-179Ch]@676
  void *v140; // [sp+F4h] [bp-178Ch]@674
  char v141; // [sp+108h] [bp-1778h]@674
  int v142; // [sp+110h] [bp-1770h]@684
  void *v143; // [sp+12Ch] [bp-1754h]@682
  void *v144; // [sp+13Ch] [bp-1744h]@680
  char v145; // [sp+150h] [bp-1730h]@662
  int v146; // [sp+158h] [bp-1728h]@666
  void *v147; // [sp+174h] [bp-170Ch]@664
  void *v148; // [sp+184h] [bp-16FCh]@662
  char v149; // [sp+198h] [bp-16E8h]@662
  int v150; // [sp+1A0h] [bp-16E0h]@672
  void *v151; // [sp+1BCh] [bp-16C4h]@670
  void *v152; // [sp+1CCh] [bp-16B4h]@668
  char v153; // [sp+1E0h] [bp-16A0h]@650
  int v154; // [sp+1E8h] [bp-1698h]@654
  void *v155; // [sp+204h] [bp-167Ch]@652
  void *v156; // [sp+214h] [bp-166Ch]@650
  char v157; // [sp+228h] [bp-1658h]@650
  int v158; // [sp+230h] [bp-1650h]@660
  void *v159; // [sp+24Ch] [bp-1634h]@658
  void *v160; // [sp+25Ch] [bp-1624h]@656
  char v161; // [sp+270h] [bp-1610h]@638
  int v162; // [sp+278h] [bp-1608h]@642
  void *v163; // [sp+294h] [bp-15ECh]@640
  void *v164; // [sp+2A4h] [bp-15DCh]@638
  char v165; // [sp+2B8h] [bp-15C8h]@638
  int v166; // [sp+2C0h] [bp-15C0h]@648
  void *v167; // [sp+2DCh] [bp-15A4h]@646
  void *v168; // [sp+2ECh] [bp-1594h]@644
  char v169; // [sp+300h] [bp-1580h]@626
  int v170; // [sp+308h] [bp-1578h]@630
  void *v171; // [sp+324h] [bp-155Ch]@628
  void *v172; // [sp+334h] [bp-154Ch]@626
  char v173; // [sp+348h] [bp-1538h]@626
  int v174; // [sp+350h] [bp-1530h]@636
  void *v175; // [sp+36Ch] [bp-1514h]@634
  void *v176; // [sp+37Ch] [bp-1504h]@632
  char v177; // [sp+390h] [bp-14F0h]@614
  int v178; // [sp+398h] [bp-14E8h]@618
  void *v179; // [sp+3B4h] [bp-14CCh]@616
  void *v180; // [sp+3C4h] [bp-14BCh]@614
  char v181; // [sp+3D8h] [bp-14A8h]@614
  int v182; // [sp+3E0h] [bp-14A0h]@624
  void *v183; // [sp+3FCh] [bp-1484h]@622
  void *v184; // [sp+40Ch] [bp-1474h]@620
  char v185; // [sp+420h] [bp-1460h]@602
  int v186; // [sp+428h] [bp-1458h]@606
  void *v187; // [sp+444h] [bp-143Ch]@604
  void *v188; // [sp+454h] [bp-142Ch]@602
  char v189; // [sp+468h] [bp-1418h]@602
  int v190; // [sp+470h] [bp-1410h]@612
  void *v191; // [sp+48Ch] [bp-13F4h]@610
  void *v192; // [sp+49Ch] [bp-13E4h]@608
  char v193; // [sp+4B0h] [bp-13D0h]@590
  int v194; // [sp+4B8h] [bp-13C8h]@594
  void *v195; // [sp+4D4h] [bp-13ACh]@592
  void *v196; // [sp+4E4h] [bp-139Ch]@590
  char v197; // [sp+4F8h] [bp-1388h]@590
  int v198; // [sp+500h] [bp-1380h]@600
  void *v199; // [sp+51Ch] [bp-1364h]@598
  void *v200; // [sp+52Ch] [bp-1354h]@596
  char v201; // [sp+540h] [bp-1340h]@578
  int v202; // [sp+548h] [bp-1338h]@582
  void *v203; // [sp+564h] [bp-131Ch]@580
  void *v204; // [sp+574h] [bp-130Ch]@578
  char v205; // [sp+588h] [bp-12F8h]@578
  int v206; // [sp+590h] [bp-12F0h]@588
  void *v207; // [sp+5ACh] [bp-12D4h]@586
  void *v208; // [sp+5BCh] [bp-12C4h]@584
  char v209; // [sp+5D0h] [bp-12B0h]@566
  int v210; // [sp+5D8h] [bp-12A8h]@570
  void *v211; // [sp+5F4h] [bp-128Ch]@568
  void *v212; // [sp+604h] [bp-127Ch]@566
  char v213; // [sp+618h] [bp-1268h]@566
  int v214; // [sp+620h] [bp-1260h]@576
  void *v215; // [sp+63Ch] [bp-1244h]@574
  void *v216; // [sp+64Ch] [bp-1234h]@572
  char v217; // [sp+660h] [bp-1220h]@554
  int v218; // [sp+668h] [bp-1218h]@558
  void *v219; // [sp+684h] [bp-11FCh]@556
  void *v220; // [sp+694h] [bp-11ECh]@554
  char v221; // [sp+6A8h] [bp-11D8h]@554
  int v222; // [sp+6B0h] [bp-11D0h]@564
  void *v223; // [sp+6CCh] [bp-11B4h]@562
  void *v224; // [sp+6DCh] [bp-11A4h]@560
  char v225; // [sp+6F0h] [bp-1190h]@542
  int v226; // [sp+6F8h] [bp-1188h]@546
  void *v227; // [sp+714h] [bp-116Ch]@544
  void *v228; // [sp+724h] [bp-115Ch]@542
  char v229; // [sp+738h] [bp-1148h]@542
  int v230; // [sp+740h] [bp-1140h]@552
  void *v231; // [sp+75Ch] [bp-1124h]@550
  void *v232; // [sp+76Ch] [bp-1114h]@548
  char v233; // [sp+780h] [bp-1100h]@501
  int v234; // [sp+788h] [bp-10F8h]@516
  void *v235; // [sp+7A4h] [bp-10DCh]@514
  void *v236; // [sp+7B4h] [bp-10CCh]@512
  char v237; // [sp+7C8h] [bp-10B8h]@501
  int v238; // [sp+7D0h] [bp-10B0h]@522
  void *v239; // [sp+7ECh] [bp-1094h]@520
  void *v240; // [sp+7FCh] [bp-1084h]@518
  char v241; // [sp+810h] [bp-1070h]@501
  int v242; // [sp+818h] [bp-1068h]@528
  void *v243; // [sp+834h] [bp-104Ch]@526
  void *v244; // [sp+844h] [bp-103Ch]@524
  char v245; // [sp+858h] [bp-1028h]@501
  int v246; // [sp+860h] [bp-1020h]@534
  void *v247; // [sp+87Ch] [bp-1004h]@532
  void *v248; // [sp+88Ch] [bp-FF4h]@530
  void *v249; // [sp+8A4h] [bp-FDCh]@501
  void *v250; // [sp+8A8h] [bp-FD8h]@501
  char v251; // [sp+8B0h] [bp-FD0h]@501
  int v252; // [sp+8B8h] [bp-FC8h]@540
  void *v253; // [sp+8D4h] [bp-FACh]@538
  void *v254; // [sp+8E4h] [bp-F9Ch]@536
  char v255; // [sp+8F8h] [bp-F88h]@466
  int v256; // [sp+900h] [bp-F80h]@481
  void *v257; // [sp+91Ch] [bp-F64h]@479
  void *v258; // [sp+92Ch] [bp-F54h]@477
  char v259; // [sp+940h] [bp-F40h]@466
  int v260; // [sp+948h] [bp-F38h]@487
  void *v261; // [sp+964h] [bp-F1Ch]@485
  void *v262; // [sp+974h] [bp-F0Ch]@483
  char v263; // [sp+988h] [bp-EF8h]@466
  int v264; // [sp+990h] [bp-EF0h]@493
  void *v265; // [sp+9ACh] [bp-ED4h]@491
  void *v266; // [sp+9BCh] [bp-EC4h]@489
  void *v267; // [sp+9D4h] [bp-EACh]@466
  void *v268; // [sp+9D8h] [bp-EA8h]@466
  char v269; // [sp+9E0h] [bp-EA0h]@466
  int v270; // [sp+9E8h] [bp-E98h]@499
  void *v271; // [sp+A04h] [bp-E7Ch]@497
  void *v272; // [sp+A14h] [bp-E6Ch]@495
  char v273; // [sp+A28h] [bp-E58h]@437
  int v274; // [sp+A30h] [bp-E50h]@452
  void *v275; // [sp+A4Ch] [bp-E34h]@450
  void *v276; // [sp+A5Ch] [bp-E24h]@448
  char v277; // [sp+A70h] [bp-E10h]@437
  int v278; // [sp+A78h] [bp-E08h]@458
  void *v279; // [sp+A94h] [bp-DECh]@456
  void *v280; // [sp+AA4h] [bp-DDCh]@454
  void *v281; // [sp+ABCh] [bp-DC4h]@437
  void *v282; // [sp+AC0h] [bp-DC0h]@437
  char v283; // [sp+AC8h] [bp-DB8h]@437
  int v284; // [sp+AD0h] [bp-DB0h]@464
  void *v285; // [sp+AECh] [bp-D94h]@462
  void *v286; // [sp+AFCh] [bp-D84h]@460
  char v287; // [sp+B10h] [bp-D70h]@408
  int v288; // [sp+B18h] [bp-D68h]@423
  void *v289; // [sp+B34h] [bp-D4Ch]@421
  void *v290; // [sp+B44h] [bp-D3Ch]@419
  char v291; // [sp+B58h] [bp-D28h]@408
  int v292; // [sp+B60h] [bp-D20h]@429
  void *v293; // [sp+B7Ch] [bp-D04h]@427
  void *v294; // [sp+B8Ch] [bp-CF4h]@425
  void *v295; // [sp+BA4h] [bp-CDCh]@408
  void *v296; // [sp+BA8h] [bp-CD8h]@408
  char v297; // [sp+BB0h] [bp-CD0h]@408
  int v298; // [sp+BB8h] [bp-CC8h]@435
  void *v299; // [sp+BD4h] [bp-CACh]@433
  void *v300; // [sp+BE4h] [bp-C9Ch]@431
  char v301; // [sp+BF8h] [bp-C88h]@379
  int v302; // [sp+C00h] [bp-C80h]@394
  void *v303; // [sp+C1Ch] [bp-C64h]@392
  void *v304; // [sp+C2Ch] [bp-C54h]@390
  char v305; // [sp+C40h] [bp-C40h]@379
  int v306; // [sp+C48h] [bp-C38h]@400
  void *v307; // [sp+C64h] [bp-C1Ch]@398
  void *v308; // [sp+C74h] [bp-C0Ch]@396
  void *v309; // [sp+C8Ch] [bp-BF4h]@379
  void *v310; // [sp+C90h] [bp-BF0h]@379
  char v311; // [sp+C98h] [bp-BE8h]@379
  int v312; // [sp+CA0h] [bp-BE0h]@406
  void *v313; // [sp+CBCh] [bp-BC4h]@404
  void *v314; // [sp+CCCh] [bp-BB4h]@402
  char v315; // [sp+CE0h] [bp-BA0h]@350
  int v316; // [sp+CE8h] [bp-B98h]@365
  void *v317; // [sp+D04h] [bp-B7Ch]@363
  void *v318; // [sp+D14h] [bp-B6Ch]@361
  char v319; // [sp+D28h] [bp-B58h]@350
  int v320; // [sp+D30h] [bp-B50h]@371
  void *v321; // [sp+D4Ch] [bp-B34h]@369
  void *v322; // [sp+D5Ch] [bp-B24h]@367
  void *v323; // [sp+D74h] [bp-B0Ch]@350
  void *v324; // [sp+D78h] [bp-B08h]@350
  char v325; // [sp+D80h] [bp-B00h]@350
  int v326; // [sp+D88h] [bp-AF8h]@377
  void *v327; // [sp+DA4h] [bp-ADCh]@375
  void *v328; // [sp+DB4h] [bp-ACCh]@373
  char v329; // [sp+DC8h] [bp-AB8h]@315
  int v330; // [sp+DD0h] [bp-AB0h]@330
  void *v331; // [sp+DECh] [bp-A94h]@328
  void *v332; // [sp+DFCh] [bp-A84h]@326
  char v333; // [sp+E10h] [bp-A70h]@315
  int v334; // [sp+E18h] [bp-A68h]@336
  void *v335; // [sp+E34h] [bp-A4Ch]@334
  void *v336; // [sp+E44h] [bp-A3Ch]@332
  char v337; // [sp+E58h] [bp-A28h]@315
  int v338; // [sp+E60h] [bp-A20h]@342
  void *v339; // [sp+E7Ch] [bp-A04h]@340
  void *v340; // [sp+E8Ch] [bp-9F4h]@338
  void *v341; // [sp+EA4h] [bp-9DCh]@315
  void *v342; // [sp+EA8h] [bp-9D8h]@315
  char v343; // [sp+EB0h] [bp-9D0h]@315
  int v344; // [sp+EB8h] [bp-9C8h]@348
  void *v345; // [sp+ED4h] [bp-9ACh]@346
  void *v346; // [sp+EE4h] [bp-99Ch]@344
  char v347; // [sp+EF8h] [bp-988h]@286
  int v348; // [sp+F00h] [bp-980h]@301
  void *v349; // [sp+F1Ch] [bp-964h]@299
  void *v350; // [sp+F2Ch] [bp-954h]@297
  char v351; // [sp+F40h] [bp-940h]@286
  int v352; // [sp+F48h] [bp-938h]@307
  void *v353; // [sp+F64h] [bp-91Ch]@305
  void *v354; // [sp+F74h] [bp-90Ch]@303
  void *ptr; // [sp+F8Ch] [bp-8F4h]@286
  void *v356; // [sp+F90h] [bp-8F0h]@286
  char v357; // [sp+F98h] [bp-8E8h]@286
  int v358; // [sp+FA0h] [bp-8E0h]@313
  void *v359; // [sp+FBCh] [bp-8C4h]@311
  void *v360; // [sp+FCCh] [bp-8B4h]@309
  char v361; // [sp+FE0h] [bp-8A0h]@257
  int v362; // [sp+FE8h] [bp-898h]@272
  void *v363; // [sp+1004h] [bp-87Ch]@270
  void *v364; // [sp+1014h] [bp-86Ch]@268
  int v365; // [sp+1028h] [bp-858h]@257
  int v366; // [sp+1030h] [bp-850h]@278
  void *v367; // [sp+104Ch] [bp-834h]@276
  void *v368; // [sp+105Ch] [bp-824h]@274
  unsigned __int64 v369; // [sp+1074h] [bp-80Ch]@257
  char v370; // [sp+1080h] [bp-800h]@257
  int v371; // [sp+1088h] [bp-7F8h]@284
  void *v372; // [sp+10A4h] [bp-7DCh]@282
  void *v373; // [sp+10B4h] [bp-7CCh]@280
  int v374; // [sp+10C8h] [bp-7B8h]@228
  int v375; // [sp+10D0h] [bp-7B0h]@243
  void *v376; // [sp+10ECh] [bp-794h]@241
  void *v377; // [sp+10FCh] [bp-784h]@239
  int v378; // [sp+1110h] [bp-770h]@228
  int v379; // [sp+1118h] [bp-768h]@249
  void *v380; // [sp+1134h] [bp-74Ch]@247
  void *v381; // [sp+1144h] [bp-73Ch]@245
  unsigned __int64 v382[29]; // [sp+115Ch] [bp-724h]@199
  void *v383[39]; // [sp+1244h] [bp-63Ch]@170
  char v384; // [sp+12E0h] [bp-5A0h]@170
  int v385; // [sp+12E8h] [bp-598h]@191
  void *v386; // [sp+1304h] [bp-57Ch]@189
  void *v387; // [sp+1314h] [bp-56Ch]@187
  void *v388[21]; // [sp+132Ch] [bp-554h]@170
  char v389; // [sp+1380h] [bp-500h]@158
  int v390; // [sp+1388h] [bp-4F8h]@162
  void *v391; // [sp+13A4h] [bp-4DCh]@160
  void *v392; // [sp+13B4h] [bp-4CCh]@158
  int v393; // [sp+13C8h] [bp-4B8h]@158
  int v394; // [sp+13D0h] [bp-4B0h]@168
  void *v395; // [sp+13ECh] [bp-494h]@166
  void *v396; // [sp+13FCh] [bp-484h]@164
  int v397; // [sp+1410h] [bp-470h]@132
  int v398; // [sp+1418h] [bp-468h]@147
  void *v399; // [sp+1434h] [bp-44Ch]@145
  void *v400; // [sp+1444h] [bp-43Ch]@143
  int v401; // [sp+145Ch] [bp-424h]@132
  int v402; // [sp+1460h] [bp-420h]@132
  int v403; // [sp+146Ch] [bp-414h]@132
  int v404; // [sp+1474h] [bp-40Ch]@132
  int v405; // [sp+147Ch] [bp-404h]@132
  char v406; // [sp+1480h] [bp-400h]@132
  int v407; // [sp+1488h] [bp-3F8h]@156
  void *v408; // [sp+14A4h] [bp-3DCh]@154
  void *v409; // [sp+14B4h] [bp-3CCh]@152
  int v410; // [sp+14C8h] [bp-3B8h]@108
  int v411; // [sp+14D0h] [bp-3B0h]@123
  void *v412; // [sp+14ECh] [bp-394h]@121
  void *v413; // [sp+14FCh] [bp-384h]@119
  int v414; // [sp+1514h] [bp-36Ch]@108
  int v415; // [sp+1518h] [bp-368h]@108
  int v416; // [sp+1524h] [bp-35Ch]@108
  int v417; // [sp+1528h] [bp-358h]@108
  int v418; // [sp+1530h] [bp-350h]@130
  void *v419; // [sp+154Ch] [bp-334h]@128
  void *v420; // [sp+155Ch] [bp-324h]@126
  int v421; // [sp+1570h] [bp-310h]@84
  int v422; // [sp+1578h] [bp-308h]@99
  void *v423; // [sp+1594h] [bp-2ECh]@97
  void *v424; // [sp+15A4h] [bp-2DCh]@95
  int v425; // [sp+15BCh] [bp-2C4h]@84
  int v426; // [sp+15C0h] [bp-2C0h]@84
  int v427; // [sp+15CCh] [bp-2B4h]@84
  int v428; // [sp+15D0h] [bp-2B0h]@84
  int v429; // [sp+15D8h] [bp-2A8h]@106
  void *v430; // [sp+15F4h] [bp-28Ch]@104
  void *v431; // [sp+1604h] [bp-27Ch]@102
  int v432; // [sp+1618h] [bp-268h]@60
  int v433; // [sp+1620h] [bp-260h]@75
  void *v434; // [sp+163Ch] [bp-244h]@73
  void *v435; // [sp+164Ch] [bp-234h]@71
  int v436; // [sp+1664h] [bp-21Ch]@60
  int v437; // [sp+1668h] [bp-218h]@60
  int v438; // [sp+1674h] [bp-20Ch]@60
  int v439; // [sp+1678h] [bp-208h]@60
  int v440; // [sp+1680h] [bp-200h]@82
  void *v441; // [sp+169Ch] [bp-1E4h]@80
  void *v442; // [sp+16ACh] [bp-1D4h]@78
  char v443; // [sp+16C0h] [bp-1C0h]@36
  int v444; // [sp+16C8h] [bp-1B8h]@51
  void *v445; // [sp+16E4h] [bp-19Ch]@49
  void *v446; // [sp+16F4h] [bp-18Ch]@47
  int v447; // [sp+170Ch] [bp-174h]@36
  int v448; // [sp+1710h] [bp-170h]@36
  int v449; // [sp+171Ch] [bp-164h]@36
  char v450; // [sp+1720h] [bp-160h]@36
  int v451; // [sp+1728h] [bp-158h]@58
  void *v452; // [sp+1744h] [bp-13Ch]@56
  void *v453; // [sp+1754h] [bp-12Ch]@54
  int v454; // [sp+1768h] [bp-118h]@4
  int v455; // [sp+1770h] [bp-110h]@19
  void *v456; // [sp+178Ch] [bp-F4h]@17
  void *v457; // [sp+179Ch] [bp-E4h]@15
  int v458; // [sp+17B0h] [bp-D0h]@4
  int v459; // [sp+17B8h] [bp-C8h]@25
  void *v460; // [sp+17D4h] [bp-ACh]@23
  void *v461; // [sp+17E4h] [bp-9Ch]@21
  int v462; // [sp+17FCh] [bp-84h]@4
  int v463; // [sp+1800h] [bp-80h]@4
  int v464; // [sp+1808h] [bp-78h]@4
  int v465; // [sp+1810h] [bp-70h]@31
  void *v466; // [sp+182Ch] [bp-54h]@29
  void *v467; // [sp+183Ch] [bp-44h]@27

  v128 = this;
  v2 = 0;
  do
  {
    v3 = 0;
    v127 = v2;
    do
    {
      if ( v2 != v3 )
      {
        v4 = j_ClothBlock::getBlockDataForItemAuxValue(v2, (int)a2);
        v6 = j_ClothBlock::getBlockDataForItemAuxValue(v3, v5);
        j_ItemInstance::ItemInstance((ItemInstance *)&v464, Block::mWool, 1, v4);
        j_ItemInstance::ItemInstance((ItemInstance *)&v458, Item::mDye_powder, 1, (int)v2);
        j_ItemInstance::ItemInstance((ItemInstance *)&v454, Block::mWool, 1, v6);
        j_definition<ItemInstance,ItemInstance>((int)&v462, 0, (int)&v458, 0, (int)&v454);
        j_Recipes::addShapelessRecipe((int)v128, (int)&v464, (unsigned __int64 *)&v462);
        v7 = v462;
        v8 = v463;
        if ( v462 != v463 )
        {
          do
          {
            v9 = *(void **)(v7 + 60);
            if ( v9 )
              j_operator delete(v9);
            v10 = *(void **)(v7 + 44);
            if ( v10 )
              j_operator delete(v10);
            v11 = *(_DWORD *)(v7 + 16);
            if ( v11 )
              (*(void (**)(void))(*(_DWORD *)v11 + 4))();
            *(_DWORD *)(v7 + 16) = 0;
            v7 += 88;
          }
          while ( v8 != v7 );
          v7 = v462;
        }
        if ( v7 )
          j_operator delete((void *)v7);
        v2 = v127;
        if ( v457 )
          j_operator delete(v457);
        if ( v456 )
          j_operator delete(v456);
        if ( v455 )
          (*(void (**)(void))(*(_DWORD *)v455 + 4))();
        v455 = 0;
        if ( v461 )
          j_operator delete(v461);
        if ( v460 )
          j_operator delete(v460);
        if ( v459 )
          (*(void (**)(void))(*(_DWORD *)v459 + 4))();
        v459 = 0;
        if ( v467 )
          j_operator delete(v467);
        if ( v466 )
          j_operator delete(v466);
        if ( v465 )
          (*(void (**)(void))(*(_DWORD *)v465 + 4))();
        v465 = 0;
      }
      v3 = (ClothBlock *)((char *)v3 + 1);
    }
    while ( v3 != (ClothBlock *)16 );
    v2 = (ClothBlock *)((char *)v2 + 1);
  }
  while ( v2 != (ClothBlock *)16 );
  j_ItemInstance::ItemInstance((ItemInstance *)&v450, Item::mDye_powder, 1, 11);
  sub_21E94B4((void **)&v449, "#");
  j_ItemInstance::ItemInstance((ItemInstance *)&v443, Block::mYellowFlower, 1, 0x7FFF);
  j_definition<ItemInstance>((int)&v447, 35, (int)&v443);
  j_Recipes::addShapedRecipe((int)v128, (int)&v450, &v449);
  v12 = v447;
  v13 = v448;
  if ( v447 != v448 )
      v14 = *(void **)(v12 + 60);
      if ( v14 )
        j_operator delete(v14);
      v15 = *(void **)(v12 + 44);
      if ( v15 )
        j_operator delete(v15);
      v16 = *(_DWORD *)(v12 + 16);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
      *(_DWORD *)(v12 + 16) = 0;
      v12 += 88;
    while ( v13 != v12 );
    v12 = v447;
  if ( v12 )
    j_operator delete((void *)v12);
  if ( v446 )
    j_operator delete(v446);
  if ( v445 )
    j_operator delete(v445);
  if ( v444 )
    (*(void (**)(void))(*(_DWORD *)v444 + 4))();
  v444 = 0;
  v17 = (void *)(v449 - 12);
  if ( (int *)(v449 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v449 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
    else
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  if ( v453 )
    j_operator delete(v453);
  if ( v452 )
    j_operator delete(v452);
  if ( v451 )
    (*(void (**)(void))(*(_DWORD *)v451 + 4))();
  v451 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v439, Item::mDye_powder, 1, 1);
  sub_21E94B4((void **)&v438, "#");
  j_ItemInstance::ItemInstance((ItemInstance *)&v432, Block::mRedFlower, 1, 0);
  j_definition<ItemInstance>((int)&v436, 35, (int)&v432);
  j_Recipes::addShapedRecipe((int)v128, (int)&v439, &v438);
  v18 = v436;
  v19 = v437;
  if ( v436 != v437 )
      v20 = *(void **)(v18 + 60);
      if ( v20 )
        j_operator delete(v20);
      v21 = *(void **)(v18 + 44);
      if ( v21 )
        j_operator delete(v21);
      v22 = *(_DWORD *)(v18 + 16);
      if ( v22 )
        (*(void (**)(void))(*(_DWORD *)v22 + 4))();
      *(_DWORD *)(v18 + 16) = 0;
      v18 += 88;
    while ( v19 != v18 );
    v18 = v436;
  if ( v18 )
    j_operator delete((void *)v18);
  if ( v435 )
    j_operator delete(v435);
  if ( v434 )
    j_operator delete(v434);
  if ( v433 )
    (*(void (**)(void))(*(_DWORD *)v433 + 4))();
  v433 = 0;
  v23 = (void *)(v438 - 12);
  if ( (int *)(v438 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v438 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  if ( v442 )
    j_operator delete(v442);
  if ( v441 )
    j_operator delete(v441);
  if ( v440 )
    (*(void (**)(void))(*(_DWORD *)v440 + 4))();
  v440 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v428, Item::mDye_powder, 2, 1);
  sub_21E94B4((void **)&v427, "#");
  j_ItemInstance::ItemInstance((ItemInstance *)&v421, Item::mBeetroot);
  j_definition<ItemInstance>((int)&v425, 35, (int)&v421);
  j_Recipes::addShapedRecipe((int)v128, (int)&v428, &v427);
  v24 = v425;
  v25 = v426;
  if ( v425 != v426 )
      v26 = *(void **)(v24 + 60);
      if ( v26 )
        j_operator delete(v26);
      v27 = *(void **)(v24 + 44);
      if ( v27 )
        j_operator delete(v27);
      v28 = *(_DWORD *)(v24 + 16);
      if ( v28 )
        (*(void (**)(void))(*(_DWORD *)v28 + 4))();
      *(_DWORD *)(v24 + 16) = 0;
      v24 += 88;
    while ( v25 != v24 );
    v24 = v425;
  if ( v24 )
    j_operator delete((void *)v24);
  if ( v424 )
    j_operator delete(v424);
  if ( v423 )
    j_operator delete(v423);
  if ( v422 )
    (*(void (**)(void))(*(_DWORD *)v422 + 4))();
  v422 = 0;
  v29 = (void *)(v427 - 12);
  if ( (int *)(v427 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v427 - 4);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  if ( v431 )
    j_operator delete(v431);
  if ( v430 )
    j_operator delete(v430);
  if ( v429 )
    (*(void (**)(void))(*(_DWORD *)v429 + 4))();
  v429 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v417, Item::mDye_powder, 3, 15);
  sub_21E94B4((void **)&v416, "#");
  j_ItemInstance::ItemInstance((ItemInstance *)&v410, Item::mBone);
  j_definition<ItemInstance>((int)&v414, 35, (int)&v410);
  j_Recipes::addShapedRecipe((int)v128, (int)&v417, &v416);
  v30 = v414;
  v31 = v415;
  if ( v414 != v415 )
      v32 = *(void **)(v30 + 60);
      if ( v32 )
        j_operator delete(v32);
      v33 = *(void **)(v30 + 44);
      if ( v33 )
        j_operator delete(v33);
      v34 = *(_DWORD *)(v30 + 16);
      if ( v34 )
        (*(void (**)(void))(*(_DWORD *)v34 + 4))();
      *(_DWORD *)(v30 + 16) = 0;
      v30 += 88;
    while ( v31 != v30 );
    v30 = v414;
  if ( v30 )
    j_operator delete((void *)v30);
  if ( v413 )
    j_operator delete(v413);
  if ( v412 )
    j_operator delete(v412);
  if ( v411 )
    (*(void (**)(void))(*(_DWORD *)v411 + 4))();
  v411 = 0;
  v35 = (void *)(v416 - 12);
  if ( (int *)(v416 - 12) != &dword_28898C0 )
    v119 = (unsigned int *)(v416 - 4);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  if ( v420 )
    j_operator delete(v420);
  if ( v419 )
    j_operator delete(v419);
  if ( v418 )
    (*(void (**)(void))(*(_DWORD *)v418 + 4))();
  v418 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v406, Block::mBoneBlock, 1);
  sub_21E94B4((void **)&v405, "BBB");
  sub_21E94B4((void **)&v404, "BBB");
  sub_21E94B4((void **)&v403, "BBB");
  j_ItemInstance::ItemInstance((ItemInstance *)&v397, Item::mDye_powder, 1, 15);
  j_definition<ItemInstance>((int)&v401, 66, (int)&v397);
  j_Recipes::addShapedRecipe((int)v128, (int)&v406, &v405, &v404, &v403);
  v36 = v401;
  v37 = v402;
  if ( v401 != v402 )
      v38 = *(void **)(v36 + 60);
      if ( v38 )
        j_operator delete(v38);
      v39 = *(void **)(v36 + 44);
      if ( v39 )
        j_operator delete(v39);
      v40 = *(_DWORD *)(v36 + 16);
      if ( v40 )
        (*(void (**)(void))(*(_DWORD *)v40 + 4))();
      *(_DWORD *)(v36 + 16) = 0;
      v36 += 88;
    while ( v37 != v36 );
    v36 = v401;
  if ( v36 )
    j_operator delete((void *)v36);
  if ( v400 )
    j_operator delete(v400);
  if ( v399 )
    j_operator delete(v399);
  if ( v398 )
    (*(void (**)(void))(*(_DWORD *)v398 + 4))();
  v398 = 0;
  v41 = (void *)(v403 - 12);
  if ( (int *)(v403 - 12) != &dword_28898C0 )
    v121 = (unsigned int *)(v403 - 4);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  v42 = (void *)(v404 - 12);
  if ( (int *)(v404 - 12) != &dword_28898C0 )
    v123 = (unsigned int *)(v404 - 4);
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
      v124 = (*v123)--;
    if ( v124 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  v43 = (void *)(v405 - 12);
  if ( (int *)(v405 - 12) != &dword_28898C0 )
    v125 = (unsigned int *)(v405 - 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  if ( v409 )
    j_operator delete(v409);
  if ( v408 )
    j_operator delete(v408);
  if ( v407 )
    (*(void (**)(void))(*(_DWORD *)v407 + 4))();
  v407 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v393, Item::mDye_powder, 9, 15);
  j_ItemInstance::ItemInstance((ItemInstance *)&v389, Block::mBoneBlock, 1, 0x7FFF);
  j_Recipes::addSingleIngredientRecipeItem(v128, (const ItemInstance *)&v393, (const ItemInstance *)&v389);
  if ( v392 )
    j_operator delete(v392);
  if ( v391 )
    j_operator delete(v391);
  if ( v390 )
    (*(void (**)(void))(*(_DWORD *)v390 + 4))();
  v390 = 0;
  if ( v396 )
    j_operator delete(v396);
  if ( v395 )
    j_operator delete(v395);
  if ( v394 )
    (*(void (**)(void))(*(_DWORD *)v394 + 4))();
  v394 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v388[3], Item::mDye_powder, 2, 9);
  j_ItemInstance::ItemInstance((ItemInstance *)&v384, Item::mDye_powder, 1, 1);
  v44 = j_ItemInstance::ItemInstance((ItemInstance *)&v383[21], Item::mDye_powder, 1, 15);
  j_definition<ItemInstance,ItemInstance>((int)v388, 0, (int)&v384, 0, (int)v44);
  j_Recipes::addShapelessRecipe((int)v128, (int)&v388[3], (unsigned __int64 *)v388);
  v45 = *(_QWORD *)v388;
  if ( v388[0] != v388[1] )
      v46 = *(void **)(v45 + 60);
      if ( v46 )
        j_operator delete(v46);
      v47 = *(void **)(v45 + 44);
      if ( v47 )
        j_operator delete(v47);
      v48 = *(_DWORD *)(v45 + 16);
      if ( v48 )
        (*(void (**)(void))(*(_DWORD *)v48 + 4))();
      *(_DWORD *)(v45 + 16) = 0;
      LODWORD(v45) = v45 + 88;
    while ( HIDWORD(v45) != (_DWORD)v45 );
    LODWORD(v45) = v388[0];
  if ( (_DWORD)v45 )
    j_operator delete((void *)v45);
  if ( v383[34] )
    j_operator delete(v383[34]);
  if ( v383[30] )
    j_operator delete(v383[30]);
  if ( v383[23] )
    (*(void (**)(void))(*(_DWORD *)v383[23] + 4))();
  v383[23] = 0;
  if ( v387 )
    j_operator delete(v387);
  if ( v386 )
    j_operator delete(v386);
  if ( v385 )
    (*(void (**)(void))(*(_DWORD *)v385 + 4))();
  v385 = 0;
  if ( v388[16] )
    j_operator delete(v388[16]);
  if ( v388[12] )
    j_operator delete(v388[12]);
  if ( v388[5] )
    (*(void (**)(void))(*(_DWORD *)v388[5] + 4))();
  v388[5] = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v383[3], Item::mDye_powder, 2, 14);
  j_ItemInstance::ItemInstance((ItemInstance *)((char *)&v382[19] + 4), Item::mDye_powder, 1, 1);
  v49 = j_ItemInstance::ItemInstance((ItemInstance *)((char *)&v382[10] + 4), Item::mDye_powder, 1, 11);
  j_definition<ItemInstance,ItemInstance>((int)v383, 0, (int)&v382[19] + 4, 0, (int)v49);
  j_Recipes::addShapelessRecipe((int)v128, (int)&v383[3], (unsigned __int64 *)v383);
  v50 = *(_QWORD *)v383;
  if ( v383[0] != v383[1] )
      v51 = *(void **)(v50 + 60);
      if ( v51 )
        j_operator delete(v51);
      v52 = *(void **)(v50 + 44);
      if ( v52 )
        j_operator delete(v52);
      v53 = *(_DWORD *)(v50 + 16);
      if ( v53 )
        (*(void (**)(void))(*(_DWORD *)v53 + 4))();
      *(_DWORD *)(v50 + 16) = 0;
      LODWORD(v50) = v50 + 88;
    while ( HIDWORD(v50) != (_DWORD)v50 );
    LODWORD(v50) = v383[0];
  if ( (_DWORD)v50 )
    j_operator delete((void *)v50);
  if ( LODWORD(v382[17]) )
    j_operator delete((void *)v382[17]);
  if ( LODWORD(v382[15]) )
    j_operator delete((void *)v382[15]);
  if ( HIDWORD(v382[11]) )
    (*(void (**)(void))(*(_DWORD *)HIDWORD(v382[11]) + 4))();
  HIDWORD(v382[11]) = 0;
  if ( LODWORD(v382[26]) )
    j_operator delete((void *)v382[26]);
  if ( LODWORD(v382[24]) )
    j_operator delete((void *)v382[24]);
  if ( HIDWORD(v382[20]) )
    (*(void (**)(void))(*(_DWORD *)HIDWORD(v382[20]) + 4))();
  HIDWORD(v382[20]) = 0;
  if ( v383[16] )
    j_operator delete(v383[16]);
  if ( v383[12] )
    j_operator delete(v383[12]);
  if ( v383[5] )
    (*(void (**)(void))(*(_DWORD *)v383[5] + 4))();
  v383[5] = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)((char *)&v382[1] + 4), Item::mDye_powder, 2, 10);
  j_ItemInstance::ItemInstance((ItemInstance *)&v378, Item::mDye_powder, 1, 2);
  v54 = j_ItemInstance::ItemInstance((ItemInstance *)&v374, Item::mDye_powder, 1, 15);
  j_definition<ItemInstance,ItemInstance>((int)v382, 0, (int)&v378, 0, (int)v54);
  j_Recipes::addShapelessRecipe((int)v128, (int)&v382[1] + 4, v382);
  v55 = v382[0];
  if ( LODWORD(v382[0]) != HIDWORD(v382[0]) )
      v56 = *(void **)(v55 + 60);
      if ( v56 )
        j_operator delete(v56);
      v57 = *(void **)(v55 + 44);
      if ( v57 )
        j_operator delete(v57);
      v58 = *(_DWORD *)(v55 + 16);
      if ( v58 )
        (*(void (**)(void))(*(_DWORD *)v58 + 4))();
      *(_DWORD *)(v55 + 16) = 0;
      LODWORD(v55) = v55 + 88;
    while ( HIDWORD(v55) != (_DWORD)v55 );
    LODWORD(v55) = v382[0];
  if ( (_DWORD)v55 )
    j_operator delete((void *)v55);
  if ( v377 )
    j_operator delete(v377);
  if ( v376 )
    j_operator delete(v376);
  if ( v375 )
    (*(void (**)(void))(*(_DWORD *)v375 + 4))();
  v375 = 0;
  if ( v381 )
    j_operator delete(v381);
  if ( v380 )
    j_operator delete(v380);
  if ( v379 )
    (*(void (**)(void))(*(_DWORD *)v379 + 4))();
  v379 = 0;
  if ( LODWORD(v382[8]) )
    j_operator delete((void *)v382[8]);
  if ( LODWORD(v382[6]) )
    j_operator delete((void *)v382[6]);
  if ( HIDWORD(v382[2]) )
    (*(void (**)(void))(*(_DWORD *)HIDWORD(v382[2]) + 4))();
  HIDWORD(v382[2]) = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v370, Item::mDye_powder, 2, 8);
  j_ItemInstance::ItemInstance((ItemInstance *)&v365, Item::mDye_powder, 1, 0);
  v59 = j_ItemInstance::ItemInstance((ItemInstance *)&v361, Item::mDye_powder, 1, 15);
  j_definition<ItemInstance,ItemInstance>((int)&v369, 0, (int)&v365, 0, (int)v59);
  j_Recipes::addShapelessRecipe((int)v128, (int)&v370, &v369);
  v60 = v369;
  if ( (_DWORD)v369 != HIDWORD(v369) )
      v61 = *(void **)(v60 + 60);
      if ( v61 )
        j_operator delete(v61);
      v62 = *(void **)(v60 + 44);
      if ( v62 )
        j_operator delete(v62);
      v63 = *(_DWORD *)(v60 + 16);
      if ( v63 )
        (*(void (**)(void))(*(_DWORD *)v63 + 4))();
      *(_DWORD *)(v60 + 16) = 0;
      LODWORD(v60) = v60 + 88;
    while ( HIDWORD(v60) != (_DWORD)v60 );
    LODWORD(v60) = v369;
  if ( (_DWORD)v60 )
    j_operator delete((void *)v60);
  if ( v364 )
    j_operator delete(v364);
  if ( v363 )
    j_operator delete(v363);
  if ( v362 )
    (*(void (**)(void))(*(_DWORD *)v362 + 4))();
  v362 = 0;
  if ( v368 )
    j_operator delete(v368);
  if ( v367 )
    j_operator delete(v367);
  if ( v366 )
    (*(void (**)(void))(*(_DWORD *)v366 + 4))();
  v366 = 0;
  if ( v373 )
    j_operator delete(v373);
  if ( v372 )
    j_operator delete(v372);
  if ( v371 )
    (*(void (**)(void))(*(_DWORD *)v371 + 4))();
  v371 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v357, Item::mDye_powder, 2, 7);
  j_ItemInstance::ItemInstance((ItemInstance *)&v351, Item::mDye_powder, 1, 8);
  v64 = j_ItemInstance::ItemInstance((ItemInstance *)&v347, Item::mDye_powder, 1, 15);
  j_definition<ItemInstance,ItemInstance>((int)&ptr, 0, (int)&v351, 0, (int)v64);
  j_Recipes::addShapelessRecipe((int)v128, (int)&v357, (unsigned __int64 *)&ptr);
  v65 = ptr;
  v66 = v356;
  if ( ptr != v356 )
      v67 = (void *)*((_DWORD *)v65 + 15);
      if ( v67 )
        j_operator delete(v67);
      v68 = (void *)*((_DWORD *)v65 + 11);
      if ( v68 )
        j_operator delete(v68);
      v69 = *((_DWORD *)v65 + 4);
      if ( v69 )
        (*(void (**)(void))(*(_DWORD *)v69 + 4))();
      *((_DWORD *)v65 + 4) = 0;
      v65 = (char *)v65 + 88;
    while ( v66 != v65 );
    v65 = ptr;
  if ( v65 )
    j_operator delete(v65);
  if ( v350 )
    j_operator delete(v350);
  if ( v349 )
    j_operator delete(v349);
  if ( v348 )
    (*(void (**)(void))(*(_DWORD *)v348 + 4))();
  v348 = 0;
  if ( v354 )
    j_operator delete(v354);
  if ( v353 )
    j_operator delete(v353);
  if ( v352 )
    (*(void (**)(void))(*(_DWORD *)v352 + 4))();
  v352 = 0;
  if ( v360 )
    j_operator delete(v360);
  if ( v359 )
    j_operator delete(v359);
  if ( v358 )
    (*(void (**)(void))(*(_DWORD *)v358 + 4))();
  v358 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v343, Item::mDye_powder, 3, 7);
  j_ItemInstance::ItemInstance((ItemInstance *)&v337, Item::mDye_powder, 1, 0);
  j_ItemInstance::ItemInstance((ItemInstance *)&v333, Item::mDye_powder, 1, 15);
  v70 = j_ItemInstance::ItemInstance((ItemInstance *)&v329, Item::mDye_powder, 1, 15);
  j_definition<ItemInstance,ItemInstance,ItemInstance>((int)&v341, 0, (int)&v337, 0, (int)&v333, 0, (int)v70);
  j_Recipes::addShapelessRecipe((int)v128, (int)&v343, (unsigned __int64 *)&v341);
  v71 = v341;
  v72 = v342;
  if ( v341 != v342 )
      v73 = (void *)*((_DWORD *)v71 + 15);
      if ( v73 )
        j_operator delete(v73);
      v74 = (void *)*((_DWORD *)v71 + 11);
      if ( v74 )
        j_operator delete(v74);
      v75 = *((_DWORD *)v71 + 4);
      if ( v75 )
        (*(void (**)(void))(*(_DWORD *)v75 + 4))();
      *((_DWORD *)v71 + 4) = 0;
      v71 = (char *)v71 + 88;
    while ( v72 != v71 );
    v71 = v341;
  if ( v71 )
    j_operator delete(v71);
  if ( v332 )
    j_operator delete(v332);
  if ( v331 )
    j_operator delete(v331);
  if ( v330 )
    (*(void (**)(void))(*(_DWORD *)v330 + 4))();
  v330 = 0;
  if ( v336 )
    j_operator delete(v336);
  if ( v335 )
    j_operator delete(v335);
  if ( v334 )
    (*(void (**)(void))(*(_DWORD *)v334 + 4))();
  v334 = 0;
  if ( v340 )
    j_operator delete(v340);
  if ( v339 )
    j_operator delete(v339);
  if ( v338 )
    (*(void (**)(void))(*(_DWORD *)v338 + 4))();
  v338 = 0;
  if ( v346 )
    j_operator delete(v346);
  if ( v345 )
    j_operator delete(v345);
  if ( v344 )
    (*(void (**)(void))(*(_DWORD *)v344 + 4))();
  v344 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v325, Item::mDye_powder, 2, 12);
  j_ItemInstance::ItemInstance((ItemInstance *)&v319, Item::mDye_powder, 1, 4);
  v76 = j_ItemInstance::ItemInstance((ItemInstance *)&v315, Item::mDye_powder, 1, 15);
  j_definition<ItemInstance,ItemInstance>((int)&v323, 0, (int)&v319, 0, (int)v76);
  j_Recipes::addShapelessRecipe((int)v128, (int)&v325, (unsigned __int64 *)&v323);
  v77 = v323;
  v78 = v324;
  if ( v323 != v324 )
      v79 = (void *)*((_DWORD *)v77 + 15);
      if ( v79 )
        j_operator delete(v79);
      v80 = (void *)*((_DWORD *)v77 + 11);
      if ( v80 )
        j_operator delete(v80);
      v81 = *((_DWORD *)v77 + 4);
      if ( v81 )
        (*(void (**)(void))(*(_DWORD *)v81 + 4))();
      *((_DWORD *)v77 + 4) = 0;
      v77 = (char *)v77 + 88;
    while ( v78 != v77 );
    v77 = v323;
  if ( v77 )
    j_operator delete(v77);
  if ( v318 )
    j_operator delete(v318);
  if ( v317 )
    j_operator delete(v317);
  if ( v316 )
    (*(void (**)(void))(*(_DWORD *)v316 + 4))();
  v316 = 0;
  if ( v322 )
    j_operator delete(v322);
  if ( v321 )
    j_operator delete(v321);
  if ( v320 )
    (*(void (**)(void))(*(_DWORD *)v320 + 4))();
  v320 = 0;
  if ( v328 )
    j_operator delete(v328);
  if ( v327 )
    j_operator delete(v327);
  if ( v326 )
    (*(void (**)(void))(*(_DWORD *)v326 + 4))();
  v326 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v311, Item::mDye_powder, 2, 6);
  j_ItemInstance::ItemInstance((ItemInstance *)&v305, Item::mDye_powder, 1, 4);
  v82 = j_ItemInstance::ItemInstance((ItemInstance *)&v301, Item::mDye_powder, 1, 2);
  j_definition<ItemInstance,ItemInstance>((int)&v309, 0, (int)&v305, 0, (int)v82);
  j_Recipes::addShapelessRecipe((int)v128, (int)&v311, (unsigned __int64 *)&v309);
  v83 = v309;
  v84 = v310;
  if ( v309 != v310 )
      v85 = (void *)*((_DWORD *)v83 + 15);
      if ( v85 )
        j_operator delete(v85);
      v86 = (void *)*((_DWORD *)v83 + 11);
      if ( v86 )
        j_operator delete(v86);
      v87 = *((_DWORD *)v83 + 4);
      if ( v87 )
        (*(void (**)(void))(*(_DWORD *)v87 + 4))();
      *((_DWORD *)v83 + 4) = 0;
      v83 = (char *)v83 + 88;
    while ( v84 != v83 );
    v83 = v309;
  if ( v83 )
    j_operator delete(v83);
  if ( v304 )
    j_operator delete(v304);
  if ( v303 )
    j_operator delete(v303);
  if ( v302 )
    (*(void (**)(void))(*(_DWORD *)v302 + 4))();
  v302 = 0;
  if ( v308 )
    j_operator delete(v308);
  if ( v307 )
    j_operator delete(v307);
  if ( v306 )
    (*(void (**)(void))(*(_DWORD *)v306 + 4))();
  v306 = 0;
  if ( v314 )
    j_operator delete(v314);
  if ( v313 )
    j_operator delete(v313);
  if ( v312 )
    (*(void (**)(void))(*(_DWORD *)v312 + 4))();
  v312 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v297, Item::mDye_powder, 2, 5);
  j_ItemInstance::ItemInstance((ItemInstance *)&v291, Item::mDye_powder, 1, 4);
  v88 = j_ItemInstance::ItemInstance((ItemInstance *)&v287, Item::mDye_powder, 1, 1);
  j_definition<ItemInstance,ItemInstance>((int)&v295, 0, (int)&v291, 0, (int)v88);
  j_Recipes::addShapelessRecipe((int)v128, (int)&v297, (unsigned __int64 *)&v295);
  v89 = v295;
  v90 = v296;
  if ( v295 != v296 )
      v91 = (void *)*((_DWORD *)v89 + 15);
      if ( v91 )
        j_operator delete(v91);
      v92 = (void *)*((_DWORD *)v89 + 11);
      if ( v92 )
        j_operator delete(v92);
      v93 = *((_DWORD *)v89 + 4);
      if ( v93 )
        (*(void (**)(void))(*(_DWORD *)v93 + 4))();
      *((_DWORD *)v89 + 4) = 0;
      v89 = (char *)v89 + 88;
    while ( v90 != v89 );
    v89 = v295;
  if ( v89 )
    j_operator delete(v89);
  if ( v290 )
    j_operator delete(v290);
  if ( v289 )
    j_operator delete(v289);
  if ( v288 )
    (*(void (**)(void))(*(_DWORD *)v288 + 4))();
  v288 = 0;
  if ( v294 )
    j_operator delete(v294);
  if ( v293 )
    j_operator delete(v293);
  if ( v292 )
    (*(void (**)(void))(*(_DWORD *)v292 + 4))();
  v292 = 0;
  if ( v300 )
    j_operator delete(v300);
  if ( v299 )
    j_operator delete(v299);
  if ( v298 )
    (*(void (**)(void))(*(_DWORD *)v298 + 4))();
  v298 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v283, Item::mDye_powder, 2, 13);
  j_ItemInstance::ItemInstance((ItemInstance *)&v277, Item::mDye_powder, 1, 5);
  v94 = j_ItemInstance::ItemInstance((ItemInstance *)&v273, Item::mDye_powder, 1, 9);
  j_definition<ItemInstance,ItemInstance>((int)&v281, 0, (int)&v277, 0, (int)v94);
  j_Recipes::addShapelessRecipe((int)v128, (int)&v283, (unsigned __int64 *)&v281);
  v95 = v281;
  v96 = v282;
  if ( v281 != v282 )
      v97 = (void *)*((_DWORD *)v95 + 15);
      if ( v97 )
        j_operator delete(v97);
      v98 = (void *)*((_DWORD *)v95 + 11);
      if ( v98 )
        j_operator delete(v98);
      v99 = *((_DWORD *)v95 + 4);
      if ( v99 )
        (*(void (**)(void))(*(_DWORD *)v99 + 4))();
      *((_DWORD *)v95 + 4) = 0;
      v95 = (char *)v95 + 88;
    while ( v96 != v95 );
    v95 = v281;
  if ( v95 )
    j_operator delete(v95);
  if ( v276 )
    j_operator delete(v276);
  if ( v275 )
    j_operator delete(v275);
  if ( v274 )
    (*(void (**)(void))(*(_DWORD *)v274 + 4))();
  v274 = 0;
  if ( v280 )
    j_operator delete(v280);
  if ( v279 )
    j_operator delete(v279);
  if ( v278 )
    (*(void (**)(void))(*(_DWORD *)v278 + 4))();
  v278 = 0;
  if ( v286 )
    j_operator delete(v286);
  if ( v285 )
    j_operator delete(v285);
  if ( v284 )
    (*(void (**)(void))(*(_DWORD *)v284 + 4))();
  v284 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v269, Item::mDye_powder, 3, 13);
  j_ItemInstance::ItemInstance((ItemInstance *)&v263, Item::mDye_powder, 1, 4);
  j_ItemInstance::ItemInstance((ItemInstance *)&v259, Item::mDye_powder, 1, 1);
  v100 = j_ItemInstance::ItemInstance((ItemInstance *)&v255, Item::mDye_powder, 1, 9);
  j_definition<ItemInstance,ItemInstance,ItemInstance>((int)&v267, 0, (int)&v263, 0, (int)&v259, 0, (int)v100);
  j_Recipes::addShapelessRecipe((int)v128, (int)&v269, (unsigned __int64 *)&v267);
  v101 = v267;
  v102 = v268;
  if ( v267 != v268 )
      v103 = (void *)*((_DWORD *)v101 + 15);
      if ( v103 )
        j_operator delete(v103);
      v104 = (void *)*((_DWORD *)v101 + 11);
      if ( v104 )
        j_operator delete(v104);
      v105 = *((_DWORD *)v101 + 4);
      if ( v105 )
        (*(void (**)(void))(*(_DWORD *)v105 + 4))();
      *((_DWORD *)v101 + 4) = 0;
      v101 = (char *)v101 + 88;
    while ( v102 != v101 );
    v101 = v267;
  if ( v101 )
    j_operator delete(v101);
  if ( v258 )
    j_operator delete(v258);
  if ( v257 )
    j_operator delete(v257);
  if ( v256 )
    (*(void (**)(void))(*(_DWORD *)v256 + 4))();
  v256 = 0;
  if ( v262 )
    j_operator delete(v262);
  if ( v261 )
    j_operator delete(v261);
  if ( v260 )
    (*(void (**)(void))(*(_DWORD *)v260 + 4))();
  v260 = 0;
  if ( v266 )
    j_operator delete(v266);
  if ( v265 )
    j_operator delete(v265);
  if ( v264 )
    (*(void (**)(void))(*(_DWORD *)v264 + 4))();
  v264 = 0;
  if ( v272 )
    j_operator delete(v272);
  if ( v271 )
    j_operator delete(v271);
  if ( v270 )
    (*(void (**)(void))(*(_DWORD *)v270 + 4))();
  v270 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v251, Item::mDye_powder, 4, 13);
  j_ItemInstance::ItemInstance((ItemInstance *)&v245, Item::mDye_powder, 1, 4);
  j_ItemInstance::ItemInstance((ItemInstance *)&v241, Item::mDye_powder, 1, 15);
  j_ItemInstance::ItemInstance((ItemInstance *)&v237, Item::mDye_powder, 1, 1);
  v106 = j_ItemInstance::ItemInstance((ItemInstance *)&v233, Item::mDye_powder, 1, 1);
  j_definition<ItemInstance,ItemInstance,ItemInstance,ItemInstance>(
    (int)&v249,
    0,
    (int)&v245,
    (int)&v241,
    (int)&v237,
    (int)v106);
  j_Recipes::addShapelessRecipe((int)v128, (int)&v251, (unsigned __int64 *)&v249);
  v107 = v249;
  v108 = v250;
  if ( v249 != v250 )
      v109 = (void *)*((_DWORD *)v107 + 15);
      if ( v109 )
        j_operator delete(v109);
      v110 = (void *)*((_DWORD *)v107 + 11);
      if ( v110 )
        j_operator delete(v110);
      v111 = *((_DWORD *)v107 + 4);
      if ( v111 )
        (*(void (**)(void))(*(_DWORD *)v111 + 4))();
      *((_DWORD *)v107 + 4) = 0;
      v107 = (char *)v107 + 88;
    while ( v108 != v107 );
    v107 = v249;
  if ( v107 )
    j_operator delete(v107);
  if ( v236 )
    j_operator delete(v236);
  if ( v235 )
    j_operator delete(v235);
  if ( v234 )
    (*(void (**)(void))(*(_DWORD *)v234 + 4))();
  v234 = 0;
  if ( v240 )
    j_operator delete(v240);
  if ( v239 )
    j_operator delete(v239);
  if ( v238 )
    (*(void (**)(void))(*(_DWORD *)v238 + 4))();
  v238 = 0;
  if ( v244 )
    j_operator delete(v244);
  if ( v243 )
    j_operator delete(v243);
  if ( v242 )
    (*(void (**)(void))(*(_DWORD *)v242 + 4))();
  v242 = 0;
  if ( v248 )
    j_operator delete(v248);
  if ( v247 )
    j_operator delete(v247);
  if ( v246 )
    (*(void (**)(void))(*(_DWORD *)v246 + 4))();
  v246 = 0;
  if ( v254 )
    j_operator delete(v254);
  if ( v253 )
    j_operator delete(v253);
  if ( v252 )
    (*(void (**)(void))(*(_DWORD *)v252 + 4))();
  v252 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v229, Item::mDye_powder, 1, 12);
  j_ItemInstance::ItemInstance((ItemInstance *)&v225, Block::mRedFlower, 1, 1);
  j_Recipes::addSingleIngredientRecipeItem(v128, (const ItemInstance *)&v229, (const ItemInstance *)&v225);
  if ( v228 )
    j_operator delete(v228);
  if ( v227 )
    j_operator delete(v227);
  if ( v226 )
    (*(void (**)(void))(*(_DWORD *)v226 + 4))();
  v226 = 0;
  if ( v232 )
    j_operator delete(v232);
  if ( v231 )
    j_operator delete(v231);
  if ( v230 )
    (*(void (**)(void))(*(_DWORD *)v230 + 4))();
  v230 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v221, Item::mDye_powder, 1, 13);
  j_ItemInstance::ItemInstance((ItemInstance *)&v217, Block::mRedFlower, 1, 2);
  j_Recipes::addSingleIngredientRecipeItem(v128, (const ItemInstance *)&v221, (const ItemInstance *)&v217);
  if ( v220 )
    j_operator delete(v220);
  if ( v219 )
    j_operator delete(v219);
  if ( v218 )
    (*(void (**)(void))(*(_DWORD *)v218 + 4))();
  v218 = 0;
  if ( v224 )
    j_operator delete(v224);
  if ( v223 )
    j_operator delete(v223);
  if ( v222 )
    (*(void (**)(void))(*(_DWORD *)v222 + 4))();
  v222 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v213, Item::mDye_powder, 1, 7);
  j_ItemInstance::ItemInstance((ItemInstance *)&v209, Block::mRedFlower, 1, 3);
  j_Recipes::addSingleIngredientRecipeItem(v128, (const ItemInstance *)&v213, (const ItemInstance *)&v209);
  if ( v212 )
    j_operator delete(v212);
  if ( v211 )
    j_operator delete(v211);
  if ( v210 )
    (*(void (**)(void))(*(_DWORD *)v210 + 4))();
  v210 = 0;
  if ( v216 )
    j_operator delete(v216);
  if ( v215 )
    j_operator delete(v215);
  if ( v214 )
    (*(void (**)(void))(*(_DWORD *)v214 + 4))();
  v214 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v205, Item::mDye_powder, 1, 1);
  j_ItemInstance::ItemInstance((ItemInstance *)&v201, Block::mRedFlower, 1, 4);
  j_Recipes::addSingleIngredientRecipeItem(v128, (const ItemInstance *)&v205, (const ItemInstance *)&v201);
  if ( v204 )
    j_operator delete(v204);
  if ( v203 )
    j_operator delete(v203);
  if ( v202 )
    (*(void (**)(void))(*(_DWORD *)v202 + 4))();
  v202 = 0;
  if ( v208 )
    j_operator delete(v208);
  if ( v207 )
    j_operator delete(v207);
  if ( v206 )
    (*(void (**)(void))(*(_DWORD *)v206 + 4))();
  v206 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v197, Item::mDye_powder, 1, 14);
  j_ItemInstance::ItemInstance((ItemInstance *)&v193, Block::mRedFlower, 1, 5);
  j_Recipes::addSingleIngredientRecipeItem(v128, (const ItemInstance *)&v197, (const ItemInstance *)&v193);
  if ( v196 )
    j_operator delete(v196);
  if ( v195 )
    j_operator delete(v195);
  if ( v194 )
    (*(void (**)(void))(*(_DWORD *)v194 + 4))();
  v194 = 0;
  if ( v200 )
    j_operator delete(v200);
  if ( v199 )
    j_operator delete(v199);
  if ( v198 )
    (*(void (**)(void))(*(_DWORD *)v198 + 4))();
  v198 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v189, Item::mDye_powder, 1, 7);
  j_ItemInstance::ItemInstance((ItemInstance *)&v185, Block::mRedFlower, 1, 6);
  j_Recipes::addSingleIngredientRecipeItem(v128, (const ItemInstance *)&v189, (const ItemInstance *)&v185);
  if ( v188 )
    j_operator delete(v188);
  if ( v187 )
    j_operator delete(v187);
  if ( v186 )
    (*(void (**)(void))(*(_DWORD *)v186 + 4))();
  v186 = 0;
  if ( v192 )
    j_operator delete(v192);
  if ( v191 )
    j_operator delete(v191);
  if ( v190 )
    (*(void (**)(void))(*(_DWORD *)v190 + 4))();
  v190 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v181, Item::mDye_powder, 1, 9);
  j_ItemInstance::ItemInstance((ItemInstance *)&v177, Block::mRedFlower, 1, 7);
  j_Recipes::addSingleIngredientRecipeItem(v128, (const ItemInstance *)&v181, (const ItemInstance *)&v177);
  if ( v180 )
    j_operator delete(v180);
  if ( v179 )
    j_operator delete(v179);
  if ( v178 )
    (*(void (**)(void))(*(_DWORD *)v178 + 4))();
  v178 = 0;
  if ( v184 )
    j_operator delete(v184);
  if ( v183 )
    j_operator delete(v183);
  if ( v182 )
    (*(void (**)(void))(*(_DWORD *)v182 + 4))();
  v182 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v173, Item::mDye_powder, 1, 7);
  j_ItemInstance::ItemInstance((ItemInstance *)&v169, Block::mRedFlower, 1, 8);
  j_Recipes::addSingleIngredientRecipeItem(v128, (const ItemInstance *)&v173, (const ItemInstance *)&v169);
  if ( v172 )
    j_operator delete(v172);
  if ( v171 )
    j_operator delete(v171);
  if ( v170 )
    (*(void (**)(void))(*(_DWORD *)v170 + 4))();
  v170 = 0;
  if ( v176 )
    j_operator delete(v176);
  if ( v175 )
    j_operator delete(v175);
  if ( v174 )
    (*(void (**)(void))(*(_DWORD *)v174 + 4))();
  v174 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v165, Item::mDye_powder, 2, 11);
  j_ItemInstance::ItemInstance((ItemInstance *)&v161, Block::mDoublePlant, 1, 0);
  j_Recipes::addSingleIngredientRecipeItem(v128, (const ItemInstance *)&v165, (const ItemInstance *)&v161);
  if ( v164 )
    j_operator delete(v164);
  if ( v163 )
    j_operator delete(v163);
  if ( v162 )
    (*(void (**)(void))(*(_DWORD *)v162 + 4))();
  v162 = 0;
  if ( v168 )
    j_operator delete(v168);
  if ( v167 )
    j_operator delete(v167);
  if ( v166 )
    (*(void (**)(void))(*(_DWORD *)v166 + 4))();
  v166 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v157, Item::mDye_powder, 2, 13);
  j_ItemInstance::ItemInstance((ItemInstance *)&v153, Block::mDoublePlant, 1, 1);
  j_Recipes::addSingleIngredientRecipeItem(v128, (const ItemInstance *)&v157, (const ItemInstance *)&v153);
  if ( v156 )
    j_operator delete(v156);
  if ( v155 )
    j_operator delete(v155);
  if ( v154 )
    (*(void (**)(void))(*(_DWORD *)v154 + 4))();
  v154 = 0;
  if ( v160 )
    j_operator delete(v160);
  if ( v159 )
    j_operator delete(v159);
  if ( v158 )
    (*(void (**)(void))(*(_DWORD *)v158 + 4))();
  v158 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v149, Item::mDye_powder, 2, 1);
  j_ItemInstance::ItemInstance((ItemInstance *)&v145, Block::mDoublePlant, 1, 4);
  j_Recipes::addSingleIngredientRecipeItem(v128, (const ItemInstance *)&v149, (const ItemInstance *)&v145);
  if ( v148 )
    j_operator delete(v148);
  if ( v147 )
    j_operator delete(v147);
  if ( v146 )
    (*(void (**)(void))(*(_DWORD *)v146 + 4))();
  v146 = 0;
  if ( v152 )
    j_operator delete(v152);
  if ( v151 )
    j_operator delete(v151);
  if ( v150 )
    (*(void (**)(void))(*(_DWORD *)v150 + 4))();
  v150 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v141, Item::mDye_powder, 2, 9);
  j_ItemInstance::ItemInstance((ItemInstance *)&v137, Block::mDoublePlant, 1, 5);
  j_Recipes::addSingleIngredientRecipeItem(v128, (const ItemInstance *)&v141, (const ItemInstance *)&v137);
  if ( v140 )
    j_operator delete(v140);
  if ( v139 )
    j_operator delete(v139);
  if ( v138 )
    (*(void (**)(void))(*(_DWORD *)v138 + 4))();
  v138 = 0;
  if ( v144 )
    j_operator delete(v144);
  if ( v143 )
    j_operator delete(v143);
  if ( v142 )
    (*(void (**)(void))(*(_DWORD *)v142 + 4))();
  v142 = 0;
  j_ItemInstance::ItemInstance((ItemInstance *)&v133, Item::mDye_powder, 1, 1);
  j_ItemInstance::ItemInstance((ItemInstance *)&v129, Item::mBeetroot, 1);
  j_Recipes::addSingleIngredientRecipeItem(v128, (const ItemInstance *)&v133, (const ItemInstance *)&v129);
  if ( v132 )
    j_operator delete(v132);
  if ( v131 )
    j_operator delete(v131);
  if ( v130 )
    (*(void (**)(void))(*(_DWORD *)v130 + 4))();
  v130 = 0;
  if ( v136 )
    j_operator delete(v136);
  if ( v135 )
    j_operator delete(v135);
  result = v134;
  if ( v134 )
    result = (*(int (**)(void))(*(_DWORD *)v134 + 4))();
  return result;
}
