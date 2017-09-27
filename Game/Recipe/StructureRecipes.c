

int *__fastcall StructureRecipes::addRecipes(StructureRecipes *this, Recipes *a2)
{
  StructureRecipes *v2; // r8@1
  int v3; // r4@1
  int v4; // r5@1
  void *v5; // r0@2
  void *v6; // r0@4
  int v7; // r0@6
  void *v8; // r0@12
  void *v9; // r0@13
  void *v10; // r0@14
  int v11; // r4@21
  int v12; // r5@21
  void *v13; // r0@22
  void *v14; // r0@24
  int v15; // r0@26
  void *v16; // r0@32
  int v17; // r4@39
  int v18; // r5@39
  void *v19; // r0@40
  void *v20; // r0@42
  int v21; // r0@44
  void *v22; // r0@50
  void *v23; // r0@51
  void *v24; // r0@52
  int v25; // r4@59
  int v26; // r5@59
  void *v27; // r0@60
  void *v28; // r0@62
  int v29; // r0@64
  void *v30; // r0@70
  void *v31; // r0@71
  int v32; // r4@78
  int v33; // r5@78
  void *v34; // r0@79
  void *v35; // r0@81
  int v36; // r0@83
  void *v37; // r0@95
  void *v38; // r0@96
  __int64 v39; // r4@103
  void *v40; // r0@104
  void *v41; // r0@106
  int v42; // r0@108
  void *v43; // r0@120
  void *v44; // r0@121
  __int64 v45; // r4@128
  void *v46; // r0@129
  void *v47; // r0@131
  int v48; // r0@133
  void *v49; // r0@139
  void *v50; // r0@140
  __int64 v51; // r4@147
  void *v52; // r0@148
  void *v53; // r0@150
  int v54; // r0@152
  void *v55; // r0@158
  void *v56; // r0@159
  __int64 v57; // r4@166
  void *v58; // r0@167
  void *v59; // r0@169
  int v60; // r0@171
  void *v61; // r0@183
  void *v62; // r0@184
  __int64 v63; // r4@191
  void *v64; // r0@192
  void *v65; // r0@194
  int v66; // r0@196
  void *v67; // r0@208
  void *v68; // r0@209
  __int64 v69; // r4@216
  void *v70; // r0@217
  void *v71; // r0@219
  int v72; // r0@221
  void *v73; // r0@233
  void *v74; // r0@234
  void *v75; // r4@241
  void *v76; // r5@241
  void *v77; // r0@242
  void *v78; // r0@244
  int v79; // r0@246
  void *v80; // r4@258
  void *v81; // r5@258
  void *v82; // r0@259
  void *v83; // r0@261
  int v84; // r0@263
  void *v85; // r0@275
  void *v86; // r0@276
  void *v87; // r4@283
  void *v88; // r5@283
  void *v89; // r0@284
  void *v90; // r0@286
  int v91; // r0@288
  void *v92; // r4@300
  void *v93; // r5@300
  void *v94; // r0@301
  void *v95; // r0@303
  int v96; // r0@305
  void *v97; // r0@311
  void *v98; // r0@312
  void *v99; // r4@319
  void *v100; // r5@319
  void *v101; // r0@320
  void *v102; // r0@322
  int v103; // r0@324
  void *v104; // r0@330
  void *v105; // r0@331
  void *v106; // r4@338
  void *v107; // r5@338
  void *v108; // r0@339
  void *v109; // r0@341
  int v110; // r0@343
  void *v111; // r0@349
  void *v112; // r0@350
  void *v113; // r4@357
  void *v114; // r5@357
  void *v115; // r0@358
  void *v116; // r0@360
  int v117; // r0@362
  void *v118; // r0@368
  void *v119; // r0@369
  void *v120; // r4@376
  void *v121; // r5@376
  void *v122; // r0@377
  void *v123; // r0@379
  int v124; // r0@381
  void *v125; // r0@387
  void *v126; // r0@388
  void *v127; // r4@395
  void *v128; // r5@395
  void *v129; // r0@396
  void *v130; // r0@398
  int v131; // r0@400
  void *v132; // r0@412
  void *v133; // r0@413
  void *v134; // r4@420
  void *v135; // r5@420
  void *v136; // r0@421
  void *v137; // r0@423
  int v138; // r0@425
  void *v139; // r0@437
  void *v140; // r0@438
  void *v141; // r4@445
  void *v142; // r5@445
  void *v143; // r0@446
  void *v144; // r0@448
  int v145; // r0@450
  void *v146; // r0@462
  void *v147; // r0@463
  void *v148; // r4@470
  void *v149; // r5@470
  void *v150; // r0@471
  void *v151; // r0@473
  int v152; // r0@475
  void *v153; // r0@481
  void *v154; // r0@482
  void *v155; // r4@489
  void *v156; // r5@489
  void *v157; // r0@490
  void *v158; // r0@492
  int v159; // r0@494
  void *v160; // r4@512
  void *v161; // r5@512
  void *v162; // r0@513
  void *v163; // r0@515
  int v164; // r0@517
  void *v165; // r4@535
  void *v166; // r5@535
  void *v167; // r0@536
  void *v168; // r0@538
  int v169; // r0@540
  void *v170; // r0@552
  void *v171; // r0@553
  void *v172; // r4@560
  void *v173; // r5@560
  void *v174; // r0@561
  void *v175; // r0@563
  int v176; // r0@565
  void *v177; // r0@577
  void *v178; // r0@578
  void *v179; // r4@585
  void *v180; // r5@585
  void *v181; // r0@586
  void *v182; // r0@588
  int v183; // r0@590
  void *v184; // r0@602
  void *v185; // r0@603
  void *v186; // r4@610
  void *v187; // r5@610
  void *v188; // r0@611
  void *v189; // r0@613
  int v190; // r0@615
  void *v191; // r0@621
  void *v192; // r0@622
  void *v193; // r0@623
  void *v194; // r4@630
  void *v195; // r5@630
  void *v196; // r0@631
  void *v197; // r0@633
  int v198; // r0@635
  void *v199; // r0@641
  void *v200; // r0@642
  void *v201; // r0@643
  void *v202; // r4@650
  void *v203; // r5@650
  void *v204; // r0@651
  void *v205; // r0@653
  int v206; // r0@655
  void *v207; // r0@661
  void *v208; // r0@662
  void *v209; // r0@663
  ItemInstance *v210; // r6@670
  ItemInstance *v211; // r7@670
  int v212; // r10@670
  int *v213; // r9@670
  int *v214; // r4@670
  int v215; // r4@671
  void *v216; // r9@671
  void *v217; // r4@671
  void *v218; // r0@672
  void *v219; // r0@674
  int v220; // r0@676
  int v221; // r7@694
  void *v222; // r4@696
  void *v223; // r6@696
  void *v224; // r0@697
  void *v225; // r0@699
  int v226; // r0@701
  int *v227; // r2@728
  int *v228; // r11@728
  int *v229; // r7@728
  int *v230; // r6@728
  int *v231; // r5@728
  int *result; // r0@728
  int v233; // r1@729
  _QWORD *v234; // r4@729
  _QWORD *v235; // r4@738
  _QWORD *v236; // r4@747
  _QWORD *v237; // r4@756
  _QWORD *v238; // r4@765
  _QWORD *v239; // r4@780
  _QWORD *v240; // r4@789
  _QWORD *v241; // r4@798
  _QWORD *v242; // r4@807
  int *v243; // r7@820
  int v244; // r4@822
  _QWORD *v245; // r11@822
  void *v246; // r0@823
  void *v247; // r0@825
  int v248; // r0@827
  int v249; // r0@833
  bool v250; // nf@833
  unsigned __int8 v251; // vf@833
  unsigned int *v252; // r2@835
  signed int v253; // r1@837
  unsigned int *v254; // r2@839
  signed int v255; // r1@841
  unsigned int *v256; // r2@843
  signed int v257; // r1@845
  unsigned int *v258; // r2@847
  signed int v259; // r1@849
  unsigned int *v260; // r2@851
  signed int v261; // r1@853
  unsigned int *v262; // r2@855
  signed int v263; // r1@857
  unsigned int *v264; // r2@859
  signed int v265; // r1@861
  unsigned int *v266; // r2@863
  signed int v267; // r1@865
  unsigned int *v268; // r2@867
  signed int v269; // r1@869
  unsigned int *v270; // r2@871
  signed int v271; // r1@873
  unsigned int *v272; // r2@875
  signed int v273; // r1@877
  unsigned int *v274; // r2@879
  signed int v275; // r1@881
  unsigned int *v276; // r2@883
  signed int v277; // r1@885
  unsigned int *v278; // r2@887
  signed int v279; // r1@889
  unsigned int *v280; // r2@891
  signed int v281; // r1@893
  unsigned int *v282; // r2@895
  signed int v283; // r1@897
  unsigned int *v284; // r2@899
  signed int v285; // r1@901
  unsigned int *v286; // r2@903
  signed int v287; // r1@905
  unsigned int *v288; // r2@907
  signed int v289; // r1@909
  unsigned int *v290; // r2@911
  signed int v291; // r1@913
  unsigned int *v292; // r2@915
  signed int v293; // r1@917
  unsigned int *v294; // r2@919
  signed int v295; // r1@921
  unsigned int *v296; // r2@923
  signed int v297; // r1@925
  unsigned int *v298; // r2@927
  signed int v299; // r1@929
  unsigned int *v300; // r2@931
  signed int v301; // r1@933
  unsigned int *v302; // r2@935
  signed int v303; // r1@937
  unsigned int *v304; // r2@939
  signed int v305; // r1@941
  unsigned int *v306; // r2@943
  signed int v307; // r1@945
  unsigned int *v308; // r2@947
  signed int v309; // r1@949
  unsigned int *v310; // r2@951
  signed int v311; // r1@953
  unsigned int *v312; // r2@955
  signed int v313; // r1@957
  unsigned int *v314; // r2@959
  signed int v315; // r1@961
  unsigned int *v316; // r2@963
  signed int v317; // r1@965
  unsigned int *v318; // r2@967
  signed int v319; // r1@969
  unsigned int *v320; // r2@971
  signed int v321; // r1@973
  unsigned int *v322; // r2@975
  signed int v323; // r1@977
  unsigned int *v324; // r2@979
  signed int v325; // r1@981
  unsigned int *v326; // r2@983
  signed int v327; // r1@985
  unsigned int *v328; // r2@987
  signed int v329; // r1@989
  unsigned int *v330; // r2@991
  signed int v331; // r1@993
  unsigned int *v332; // r2@995
  signed int v333; // r1@997
  unsigned int *v334; // r2@999
  signed int v335; // r1@1001
  unsigned int *v336; // r2@1003
  signed int v337; // r1@1005
  unsigned int *v338; // r2@1007
  signed int v339; // r1@1009
  unsigned int *v340; // r2@1011
  signed int v341; // r1@1013
  unsigned int *v342; // r2@1015
  signed int v343; // r1@1017
  unsigned int *v344; // r2@1019
  signed int v345; // r1@1021
  unsigned int *v346; // r2@1023
  signed int v347; // r1@1025
  unsigned int *v348; // r2@1027
  signed int v349; // r1@1029
  unsigned int *v350; // r2@1031
  signed int v351; // r1@1033
  unsigned int *v352; // r2@1035
  signed int v353; // r1@1037
  unsigned int *v354; // r2@1039
  signed int v355; // r1@1041
  unsigned int *v356; // r2@1043
  signed int v357; // r1@1045
  unsigned int *v358; // r2@1047
  signed int v359; // r1@1049
  unsigned int *v360; // r2@1051
  signed int v361; // r1@1053
  unsigned int *v362; // r2@1055
  signed int v363; // r1@1057
  unsigned int *v364; // r2@1059
  signed int v365; // r1@1061
  unsigned int *v366; // r2@1063
  signed int v367; // r1@1065
  int v368; // [sp+30h] [bp-15E8h]@728
  char v369; // [sp+40h] [bp-15D8h]@816
  int v370; // [sp+48h] [bp-15D0h]@820
  void *v371; // [sp+64h] [bp-15B4h]@818
  void *v372; // [sp+74h] [bp-15A4h]@816
  int v373; // [sp+88h] [bp-1590h]@807
  int v374; // [sp+8Ch] [bp-158Ch]@807
  int v375; // [sp+90h] [bp-1588h]@807
  int v376; // [sp+98h] [bp-1580h]@814
  void *v377; // [sp+B4h] [bp-1564h]@812
  void *v378; // [sp+C4h] [bp-1554h]@810
  char v379; // [sp+D8h] [bp-1540h]@807
  int v380; // [sp+E0h] [bp-1538h]@798
  int v381; // [sp+E4h] [bp-1534h]@798
  int v382; // [sp+E8h] [bp-1530h]@798
  int v383; // [sp+F0h] [bp-1528h]@805
  void *v384; // [sp+10Ch] [bp-150Ch]@803
  void *v385; // [sp+11Ch] [bp-14FCh]@801
  char v386; // [sp+130h] [bp-14E8h]@798
  int v387; // [sp+138h] [bp-14E0h]@789
  int v388; // [sp+13Ch] [bp-14DCh]@789
  int v389; // [sp+140h] [bp-14D8h]@728
  int v390; // [sp+148h] [bp-14D0h]@796
  void *v391; // [sp+164h] [bp-14B4h]@794
  void *v392; // [sp+174h] [bp-14A4h]@792
  char v393; // [sp+188h] [bp-1490h]@789
  int v394; // [sp+190h] [bp-1488h]@780
  int v395; // [sp+194h] [bp-1484h]@780
  int v396; // [sp+198h] [bp-1480h]@780
  int v397; // [sp+1A0h] [bp-1478h]@787
  void *v398; // [sp+1BCh] [bp-145Ch]@785
  void *v399; // [sp+1CCh] [bp-144Ch]@783
  char v400; // [sp+1E0h] [bp-1438h]@780
  char v401; // [sp+1E8h] [bp-1430h]@765
  int v402; // [sp+1F0h] [bp-1428h]@778
  void *v403; // [sp+20Ch] [bp-140Ch]@776
  void *v404; // [sp+21Ch] [bp-13FCh]@774
  int v405; // [sp+230h] [bp-13E8h]@765
  int v406; // [sp+234h] [bp-13E4h]@765
  int v407; // [sp+238h] [bp-13E0h]@765
  int v408; // [sp+240h] [bp-13D8h]@772
  void *v409; // [sp+25Ch] [bp-13BCh]@770
  void *v410; // [sp+26Ch] [bp-13ACh]@768
  char v411; // [sp+280h] [bp-1398h]@765
  int v412; // [sp+288h] [bp-1390h]@756
  int v413; // [sp+28Ch] [bp-138Ch]@756
  int v414; // [sp+290h] [bp-1388h]@728
  int v415; // [sp+298h] [bp-1380h]@763
  void *v416; // [sp+2B4h] [bp-1364h]@761
  void *v417; // [sp+2C4h] [bp-1354h]@759
  char v418; // [sp+2D8h] [bp-1340h]@756
  int v419; // [sp+2E0h] [bp-1338h]@747
  int v420; // [sp+2E4h] [bp-1334h]@747
  int v421; // [sp+2E8h] [bp-1330h]@728
  int v422; // [sp+2F0h] [bp-1328h]@754
  void *v423; // [sp+30Ch] [bp-130Ch]@752
  void *v424; // [sp+31Ch] [bp-12FCh]@750
  char v425; // [sp+330h] [bp-12E8h]@747
  int v426; // [sp+338h] [bp-12E0h]@738
  int v427; // [sp+33Ch] [bp-12DCh]@738
  int v428; // [sp+340h] [bp-12D8h]@728
  int v429; // [sp+348h] [bp-12D0h]@745
  void *v430; // [sp+364h] [bp-12B4h]@743
  void *v431; // [sp+374h] [bp-12A4h]@741
  char v432; // [sp+388h] [bp-1290h]@738
  int v433; // [sp+390h] [bp-1288h]@729
  int v434; // [sp+394h] [bp-1284h]@729
  int v435; // [sp+398h] [bp-1280h]@728
  int v436; // [sp+3A0h] [bp-1278h]@736
  void *v437; // [sp+3BCh] [bp-125Ch]@734
  void *v438; // [sp+3CCh] [bp-124Ch]@732
  char v439; // [sp+3E0h] [bp-1238h]@729
  _QWORD *v440; // [sp+3ECh] [bp-122Ch]@729
  _QWORD *v441; // [sp+3F0h] [bp-1228h]@729
  _QWORD *v442; // [sp+3F4h] [bp-1224h]@729
  char v443; // [sp+3F8h] [bp-1220h]@696
  int v444; // [sp+400h] [bp-1218h]@711
  void *v445; // [sp+41Ch] [bp-11FCh]@709
  void *v446; // [sp+42Ch] [bp-11ECh]@707
  char v447; // [sp+440h] [bp-11D8h]@696
  int v448; // [sp+448h] [bp-11D0h]@717
  void *v449; // [sp+464h] [bp-11B4h]@715
  void *v450; // [sp+474h] [bp-11A4h]@713
  void *v451; // [sp+48Ch] [bp-118Ch]@696
  void *v452; // [sp+490h] [bp-1188h]@696
  char v453; // [sp+498h] [bp-1180h]@696
  int v454; // [sp+4A0h] [bp-1178h]@723
  void *v455; // [sp+4BCh] [bp-115Ch]@721
  void *v456; // [sp+4CCh] [bp-114Ch]@719
  char v457; // [sp+4E0h] [bp-1138h]@670
  int v458; // [sp+4E8h] [bp-1130h]@686
  void *v459; // [sp+504h] [bp-1114h]@684
  void *v460; // [sp+514h] [bp-1104h]@682
  void *v461; // [sp+52Ch] [bp-10ECh]@671
  void *v462; // [sp+530h] [bp-10E8h]@671
  char v463; // [sp+538h] [bp-10E0h]@670
  int v464; // [sp+540h] [bp-10D8h]@692
  void *v465; // [sp+55Ch] [bp-10BCh]@690
  void *v466; // [sp+56Ch] [bp-10ACh]@688
  void *v467; // [sp+584h] [bp-1094h]@650
  void *v468; // [sp+588h] [bp-1090h]@650
  int v469; // [sp+594h] [bp-1084h]@650
  int v470; // [sp+59Ch] [bp-107Ch]@650
  int v471; // [sp+5A4h] [bp-1074h]@650
  char v472; // [sp+5A8h] [bp-1070h]@650
  int v473; // [sp+5B0h] [bp-1068h]@668
  void *v474; // [sp+5CCh] [bp-104Ch]@666
  void *v475; // [sp+5DCh] [bp-103Ch]@664
  void *v476; // [sp+5F4h] [bp-1024h]@630
  void *v477; // [sp+5F8h] [bp-1020h]@630
  int v478; // [sp+604h] [bp-1014h]@630
  int v479; // [sp+60Ch] [bp-100Ch]@630
  int v480; // [sp+614h] [bp-1004h]@630
  char v481; // [sp+618h] [bp-1000h]@630
  int v482; // [sp+620h] [bp-FF8h]@648
  void *v483; // [sp+63Ch] [bp-FDCh]@646
  void *v484; // [sp+64Ch] [bp-FCCh]@644
  void *v485; // [sp+664h] [bp-FB4h]@610
  void *v486; // [sp+668h] [bp-FB0h]@610
  int v487; // [sp+674h] [bp-FA4h]@610
  int v488; // [sp+67Ch] [bp-F9Ch]@610
  int v489; // [sp+684h] [bp-F94h]@610
  char v490; // [sp+688h] [bp-F90h]@610
  int v491; // [sp+690h] [bp-F88h]@628
  void *v492; // [sp+6ACh] [bp-F6Ch]@626
  void *v493; // [sp+6BCh] [bp-F5Ch]@624
  char v494; // [sp+6D0h] [bp-F48h]@585
  int v495; // [sp+6D8h] [bp-F40h]@600
  void *v496; // [sp+6F4h] [bp-F24h]@598
  void *v497; // [sp+704h] [bp-F14h]@596
  void *v498; // [sp+71Ch] [bp-EFCh]@585
  void *v499; // [sp+720h] [bp-EF8h]@585
  int v500; // [sp+72Ch] [bp-EECh]@585
  int v501; // [sp+734h] [bp-EE4h]@585
  char v502; // [sp+738h] [bp-EE0h]@585
  int v503; // [sp+740h] [bp-ED8h]@608
  void *v504; // [sp+75Ch] [bp-EBCh]@606
  void *v505; // [sp+76Ch] [bp-EACh]@604
  char v506; // [sp+780h] [bp-E98h]@560
  int v507; // [sp+788h] [bp-E90h]@575
  void *v508; // [sp+7A4h] [bp-E74h]@573
  void *v509; // [sp+7B4h] [bp-E64h]@571
  void *v510; // [sp+7CCh] [bp-E4Ch]@560
  void *v511; // [sp+7D0h] [bp-E48h]@560
  int v512; // [sp+7DCh] [bp-E3Ch]@560
  int v513; // [sp+7E4h] [bp-E34h]@560
  char v514; // [sp+7E8h] [bp-E30h]@560
  int v515; // [sp+7F0h] [bp-E28h]@583
  void *v516; // [sp+80Ch] [bp-E0Ch]@581
  void *v517; // [sp+81Ch] [bp-DFCh]@579
  char v518; // [sp+830h] [bp-DE8h]@535
  int v519; // [sp+838h] [bp-DE0h]@550
  void *v520; // [sp+854h] [bp-DC4h]@548
  void *v521; // [sp+864h] [bp-DB4h]@546
  void *v522; // [sp+87Ch] [bp-D9Ch]@535
  void *v523; // [sp+880h] [bp-D98h]@535
  int v524; // [sp+88Ch] [bp-D8Ch]@535
  int v525; // [sp+894h] [bp-D84h]@535
  char v526; // [sp+898h] [bp-D80h]@535
  int v527; // [sp+8A0h] [bp-D78h]@558
  void *v528; // [sp+8BCh] [bp-D5Ch]@556
  void *v529; // [sp+8CCh] [bp-D4Ch]@554
  char v530; // [sp+8E0h] [bp-D38h]@512
  int v531; // [sp+8E8h] [bp-D30h]@527
  void *v532; // [sp+904h] [bp-D14h]@525
  void *v533; // [sp+914h] [bp-D04h]@523
  void *v534; // [sp+92Ch] [bp-CECh]@512
  void *v535; // [sp+930h] [bp-CE8h]@512
  char v536; // [sp+938h] [bp-CE0h]@512
  int v537; // [sp+940h] [bp-CD8h]@533
  void *v538; // [sp+95Ch] [bp-CBCh]@531
  void *v539; // [sp+96Ch] [bp-CACh]@529
  char v540; // [sp+980h] [bp-C98h]@489
  int v541; // [sp+988h] [bp-C90h]@504
  void *v542; // [sp+9A4h] [bp-C74h]@502
  void *v543; // [sp+9B4h] [bp-C64h]@500
  void *v544; // [sp+9CCh] [bp-C4Ch]@489
  void *v545; // [sp+9D0h] [bp-C48h]@489
  char v546; // [sp+9D8h] [bp-C40h]@489
  int v547; // [sp+9E0h] [bp-C38h]@510
  void *v548; // [sp+9FCh] [bp-C1Ch]@508
  void *v549; // [sp+A0Ch] [bp-C0Ch]@506
  void *v550; // [sp+A24h] [bp-BF4h]@470
  void *v551; // [sp+A28h] [bp-BF0h]@470
  int v552; // [sp+A34h] [bp-BE4h]@470
  int v553; // [sp+A3Ch] [bp-BDCh]@470
  char v554; // [sp+A40h] [bp-BD8h]@470
  int v555; // [sp+A48h] [bp-BD0h]@487
  void *v556; // [sp+A64h] [bp-BB4h]@485
  void *v557; // [sp+A74h] [bp-BA4h]@483
  char v558; // [sp+A88h] [bp-B90h]@445
  int v559; // [sp+A90h] [bp-B88h]@460
  void *v560; // [sp+AACh] [bp-B6Ch]@458
  void *v561; // [sp+ABCh] [bp-B5Ch]@456
  void *v562; // [sp+AD4h] [bp-B44h]@445
  void *v563; // [sp+AD8h] [bp-B40h]@445
  int v564; // [sp+AE4h] [bp-B34h]@445
  int v565; // [sp+AECh] [bp-B2Ch]@445
  char v566; // [sp+AF0h] [bp-B28h]@445
  int v567; // [sp+AF8h] [bp-B20h]@468
  void *v568; // [sp+B14h] [bp-B04h]@466
  void *v569; // [sp+B24h] [bp-AF4h]@464
  char v570; // [sp+B38h] [bp-AE0h]@420
  int v571; // [sp+B40h] [bp-AD8h]@435
  void *v572; // [sp+B5Ch] [bp-ABCh]@433
  void *v573; // [sp+B6Ch] [bp-AACh]@431
  void *v574; // [sp+B84h] [bp-A94h]@420
  void *v575; // [sp+B88h] [bp-A90h]@420
  int v576; // [sp+B94h] [bp-A84h]@420
  int v577; // [sp+B9Ch] [bp-A7Ch]@420
  char v578; // [sp+BA0h] [bp-A78h]@420
  int v579; // [sp+BA8h] [bp-A70h]@443
  void *v580; // [sp+BC4h] [bp-A54h]@441
  void *v581; // [sp+BD4h] [bp-A44h]@439
  char v582; // [sp+BE8h] [bp-A30h]@395
  int v583; // [sp+BF0h] [bp-A28h]@410
  void *v584; // [sp+C0Ch] [bp-A0Ch]@408
  void *v585; // [sp+C1Ch] [bp-9FCh]@406
  void *v586; // [sp+C34h] [bp-9E4h]@395
  void *v587; // [sp+C38h] [bp-9E0h]@395
  int v588; // [sp+C44h] [bp-9D4h]@395
  int v589; // [sp+C4Ch] [bp-9CCh]@395
  char v590; // [sp+C50h] [bp-9C8h]@395
  int v591; // [sp+C58h] [bp-9C0h]@418
  void *v592; // [sp+C74h] [bp-9A4h]@416
  void *v593; // [sp+C84h] [bp-994h]@414
  void *v594; // [sp+C9Ch] [bp-97Ch]@376
  void *v595; // [sp+CA0h] [bp-978h]@376
  int v596; // [sp+CACh] [bp-96Ch]@376
  int v597; // [sp+CB4h] [bp-964h]@376
  char v598; // [sp+CB8h] [bp-960h]@376
  int v599; // [sp+CC0h] [bp-958h]@393
  void *v600; // [sp+CDCh] [bp-93Ch]@391
  void *v601; // [sp+CECh] [bp-92Ch]@389
  void *v602; // [sp+D04h] [bp-914h]@357
  void *v603; // [sp+D08h] [bp-910h]@357
  int v604; // [sp+D14h] [bp-904h]@357
  int v605; // [sp+D1Ch] [bp-8FCh]@357
  char v606; // [sp+D20h] [bp-8F8h]@357
  int v607; // [sp+D28h] [bp-8F0h]@374
  void *v608; // [sp+D44h] [bp-8D4h]@372
  void *v609; // [sp+D54h] [bp-8C4h]@370
  void *v610; // [sp+D6Ch] [bp-8ACh]@338
  void *v611; // [sp+D70h] [bp-8A8h]@338
  int v612; // [sp+D7Ch] [bp-89Ch]@338
  int v613; // [sp+D84h] [bp-894h]@338
  char v614; // [sp+D88h] [bp-890h]@338
  int v615; // [sp+D90h] [bp-888h]@355
  void *v616; // [sp+DACh] [bp-86Ch]@353
  void *v617; // [sp+DBCh] [bp-85Ch]@351
  void *v618; // [sp+DD4h] [bp-844h]@319
  void *v619; // [sp+DD8h] [bp-840h]@319
  int v620; // [sp+DE4h] [bp-834h]@319
  int v621; // [sp+DECh] [bp-82Ch]@319
  char v622; // [sp+DF0h] [bp-828h]@319
  int v623; // [sp+DF8h] [bp-820h]@336
  void *v624; // [sp+E14h] [bp-804h]@334
  void *v625; // [sp+E24h] [bp-7F4h]@332
  void *v626; // [sp+E3Ch] [bp-7DCh]@300
  void *v627; // [sp+E40h] [bp-7D8h]@300
  int v628; // [sp+E4Ch] [bp-7CCh]@300
  int v629; // [sp+E54h] [bp-7C4h]@300
  char v630; // [sp+E58h] [bp-7C0h]@300
  int v631; // [sp+E60h] [bp-7B8h]@317
  void *v632; // [sp+E7Ch] [bp-79Ch]@315
  void *v633; // [sp+E8Ch] [bp-78Ch]@313
  void *v634; // [sp+EA4h] [bp-774h]@283
  void *v635; // [sp+EA8h] [bp-770h]@283
  char v636; // [sp+EB0h] [bp-768h]@283
  int v637; // [sp+EB8h] [bp-760h]@298
  void *v638; // [sp+ED4h] [bp-744h]@296
  void *v639; // [sp+EE4h] [bp-734h]@294
  char v640; // [sp+EF8h] [bp-720h]@258
  int v641; // [sp+F00h] [bp-718h]@273
  void *v642; // [sp+F1Ch] [bp-6FCh]@271
  void *v643; // [sp+F2Ch] [bp-6ECh]@269
  void *v644; // [sp+F44h] [bp-6D4h]@258
  void *v645; // [sp+F48h] [bp-6D0h]@258
  int v646; // [sp+F54h] [bp-6C4h]@258
  int v647; // [sp+F5Ch] [bp-6BCh]@258
  char v648; // [sp+F60h] [bp-6B8h]@258
  int v649; // [sp+F68h] [bp-6B0h]@281
  void *v650; // [sp+F84h] [bp-694h]@279
  void *v651; // [sp+F94h] [bp-684h]@277
  void *ptr; // [sp+FACh] [bp-66Ch]@241
  void *v653; // [sp+FB0h] [bp-668h]@241
  char v654; // [sp+FB8h] [bp-660h]@241
  int v655; // [sp+FC0h] [bp-658h]@256
  void *v656; // [sp+FDCh] [bp-63Ch]@254
  void *v657; // [sp+FECh] [bp-62Ch]@252
  char v658; // [sp+1000h] [bp-618h]@216
  int v659; // [sp+1008h] [bp-610h]@231
  void *v660; // [sp+1024h] [bp-5F4h]@229
  void *v661; // [sp+1034h] [bp-5E4h]@227
  int v662; // [sp+104Ch] [bp-5CCh]@216
  int v663; // [sp+1050h] [bp-5C8h]@216
  int v664; // [sp+105Ch] [bp-5BCh]@216
  int v665; // [sp+1064h] [bp-5B4h]@216
  int v666; // [sp+1068h] [bp-5B0h]@216
  int v667; // [sp+1070h] [bp-5A8h]@239
  void *v668; // [sp+108Ch] [bp-58Ch]@237
  void *v669; // [sp+109Ch] [bp-57Ch]@235
  int v670; // [sp+10B0h] [bp-568h]@191
  int v671; // [sp+10B8h] [bp-560h]@206
  void *v672; // [sp+10D4h] [bp-544h]@204
  void *v673; // [sp+10E4h] [bp-534h]@202
  int v674; // [sp+10FCh] [bp-51Ch]@191
  int v675; // [sp+1100h] [bp-518h]@191
  int v676; // [sp+110Ch] [bp-50Ch]@191
  int v677; // [sp+1114h] [bp-504h]@191
  int v678; // [sp+1118h] [bp-500h]@191
  int v679; // [sp+1120h] [bp-4F8h]@214
  void *v680; // [sp+113Ch] [bp-4DCh]@212
  void *v681; // [sp+114Ch] [bp-4CCh]@210
  char v682; // [sp+1160h] [bp-4B8h]@166
  int v683; // [sp+1168h] [bp-4B0h]@181
  void *v684; // [sp+1184h] [bp-494h]@179
  void *v685; // [sp+1194h] [bp-484h]@177
  int v686; // [sp+11ACh] [bp-46Ch]@166
  int v687; // [sp+11B0h] [bp-468h]@166
  int v688; // [sp+11BCh] [bp-45Ch]@166
  int v689; // [sp+11C4h] [bp-454h]@166
  int v690; // [sp+11C8h] [bp-450h]@166
  int v691; // [sp+11D0h] [bp-448h]@189
  void *v692; // [sp+11ECh] [bp-42Ch]@187
  void *v693; // [sp+11FCh] [bp-41Ch]@185
  int v694; // [sp+1214h] [bp-404h]@147
  int v695; // [sp+1218h] [bp-400h]@147
  int v696; // [sp+1224h] [bp-3F4h]@147
  int v697; // [sp+122Ch] [bp-3ECh]@147
  int v698; // [sp+1230h] [bp-3E8h]@147
  int v699; // [sp+1238h] [bp-3E0h]@164
  void *v700; // [sp+1254h] [bp-3C4h]@162
  void *v701; // [sp+1264h] [bp-3B4h]@160
  int v702; // [sp+127Ch] [bp-39Ch]@128
  int v703; // [sp+1280h] [bp-398h]@128
  int v704; // [sp+128Ch] [bp-38Ch]@128
  int v705; // [sp+1294h] [bp-384h]@128
  int v706; // [sp+1298h] [bp-380h]@128
  int v707; // [sp+12A0h] [bp-378h]@145
  void *v708; // [sp+12BCh] [bp-35Ch]@143
  void *v709; // [sp+12CCh] [bp-34Ch]@141
  char v710; // [sp+12E0h] [bp-338h]@103
  int v711; // [sp+12E8h] [bp-330h]@118
  void *v712; // [sp+1304h] [bp-314h]@116
  void *v713; // [sp+1314h] [bp-304h]@114
  int v714; // [sp+132Ch] [bp-2ECh]@103
  int v715; // [sp+1330h] [bp-2E8h]@103
  int v716; // [sp+133Ch] [bp-2DCh]@103
  int v717; // [sp+1344h] [bp-2D4h]@103
  int v718; // [sp+1348h] [bp-2D0h]@103
  int v719; // [sp+1350h] [bp-2C8h]@126
  void *v720; // [sp+136Ch] [bp-2ACh]@124
  void *v721; // [sp+137Ch] [bp-29Ch]@122
  int v722; // [sp+1390h] [bp-288h]@78
  int v723; // [sp+1398h] [bp-280h]@93
  void *v724; // [sp+13B4h] [bp-264h]@91
  void *v725; // [sp+13C4h] [bp-254h]@89
  int v726; // [sp+13DCh] [bp-23Ch]@78
  int v727; // [sp+13E0h] [bp-238h]@78
  int v728; // [sp+13ECh] [bp-22Ch]@78
  int v729; // [sp+13F4h] [bp-224h]@78
  int v730; // [sp+13F8h] [bp-220h]@78
  int v731; // [sp+1400h] [bp-218h]@101
  void *v732; // [sp+141Ch] [bp-1FCh]@99
  void *v733; // [sp+142Ch] [bp-1ECh]@97
  int v734; // [sp+1444h] [bp-1D4h]@59
  int v735; // [sp+1448h] [bp-1D0h]@59
  int v736; // [sp+1454h] [bp-1C4h]@59
  int v737; // [sp+145Ch] [bp-1BCh]@59
  char v738; // [sp+1460h] [bp-1B8h]@59
  int v739; // [sp+1468h] [bp-1B0h]@76
  void *v740; // [sp+1484h] [bp-194h]@74
  void *v741; // [sp+1494h] [bp-184h]@72
  int v742; // [sp+14ACh] [bp-16Ch]@39
  int v743; // [sp+14B0h] [bp-168h]@39
  int v744; // [sp+14BCh] [bp-15Ch]@39
  int v745; // [sp+14C4h] [bp-154h]@39
  int v746; // [sp+14CCh] [bp-14Ch]@39
  int v747; // [sp+14D0h] [bp-148h]@39
  int v748; // [sp+14D8h] [bp-140h]@57
  void *v749; // [sp+14F4h] [bp-124h]@55
  void *v750; // [sp+1504h] [bp-114h]@53
  int v751; // [sp+151Ch] [bp-FCh]@21
  int v752; // [sp+1520h] [bp-F8h]@21
  int v753; // [sp+152Ch] [bp-ECh]@21
  int v754; // [sp+1530h] [bp-E8h]@21
  int v755; // [sp+1538h] [bp-E0h]@37
  void *v756; // [sp+1554h] [bp-C4h]@35
  void *v757; // [sp+1564h] [bp-B4h]@33
  int v758; // [sp+157Ch] [bp-9Ch]@1
  int v759; // [sp+1580h] [bp-98h]@1
  int v760; // [sp+158Ch] [bp-8Ch]@1
  int v761; // [sp+1594h] [bp-84h]@1
  int v762; // [sp+159Ch] [bp-7Ch]@1
  char v763; // [sp+15A0h] [bp-78h]@1
  int v764; // [sp+15A8h] [bp-70h]@19
  void *v765; // [sp+15C4h] [bp-54h]@17
  void *v766; // [sp+15D4h] [bp-44h]@15

  v2 = this;
  ItemInstance::ItemInstance((ItemInstance *)&v763, Block::mChest);
  sub_21E94B4((void **)&v762, "###");
  sub_21E94B4((void **)&v761, "# #");
  sub_21E94B4((void **)&v760, "###");
  definition<Block const*>((int)&v758, 35, Block::mWoodPlanks);
  Recipes::addShapedRecipe((int)v2, (int)&v763, &v762, &v761, &v760);
  v3 = v758;
  v4 = v759;
  if ( v758 != v759 )
  {
    do
    {
      v5 = *(void **)(v3 + 60);
      if ( v5 )
        operator delete(v5);
      v6 = *(void **)(v3 + 44);
      if ( v6 )
        operator delete(v6);
      v7 = *(_DWORD *)(v3 + 16);
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      *(_DWORD *)(v3 + 16) = 0;
      v3 += 88;
    }
    while ( v4 != v3 );
    v3 = v758;
  }
  if ( v3 )
    operator delete((void *)v3);
  v8 = (void *)(v760 - 12);
  if ( (int *)(v760 - 12) != &dword_28898C0 )
    v252 = (unsigned int *)(v760 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v253 = __ldrex(v252);
      while ( __strex(v253 - 1, v252) );
    else
      v253 = (*v252)--;
    if ( v253 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v761 - 12);
  if ( (int *)(v761 - 12) != &dword_28898C0 )
    v254 = (unsigned int *)(v761 - 4);
        v255 = __ldrex(v254);
      while ( __strex(v255 - 1, v254) );
      v255 = (*v254)--;
    if ( v255 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v762 - 12);
  if ( (int *)(v762 - 12) != &dword_28898C0 )
    v256 = (unsigned int *)(v762 - 4);
        v257 = __ldrex(v256);
      while ( __strex(v257 - 1, v256) );
      v257 = (*v256)--;
    if ( v257 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  if ( v766 )
    operator delete(v766);
  if ( v765 )
    operator delete(v765);
  if ( v764 )
    (*(void (**)(void))(*(_DWORD *)v764 + 4))();
  v764 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v754, Block::mTrappedChest);
  sub_21E94B4((void **)&v753, "TC");
  definition<Block const*,Block const*>((int)&v751, 67, Block::mChest, 84, Block::mTripwireHook);
  Recipes::addShapedRecipe((int)v2, (int)&v754, &v753);
  v11 = v751;
  v12 = v752;
  if ( v751 != v752 )
      v13 = *(void **)(v11 + 60);
      if ( v13 )
        operator delete(v13);
      v14 = *(void **)(v11 + 44);
      if ( v14 )
        operator delete(v14);
      v15 = *(_DWORD *)(v11 + 16);
      if ( v15 )
        (*(void (**)(void))(*(_DWORD *)v15 + 4))();
      *(_DWORD *)(v11 + 16) = 0;
      v11 += 88;
    while ( v12 != v11 );
    v11 = v751;
  if ( v11 )
    operator delete((void *)v11);
  v16 = (void *)(v753 - 12);
  if ( (int *)(v753 - 12) != &dword_28898C0 )
    v258 = (unsigned int *)(v753 - 4);
        v259 = __ldrex(v258);
      while ( __strex(v259 - 1, v258) );
      v259 = (*v258)--;
    if ( v259 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  if ( v757 )
    operator delete(v757);
  if ( v756 )
    operator delete(v756);
  if ( v755 )
    (*(void (**)(void))(*(_DWORD *)v755 + 4))();
  v755 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v747, Block::mFurnace);
  sub_21E94B4((void **)&v746, "###");
  sub_21E94B4((void **)&v745, "# #");
  sub_21E94B4((void **)&v744, "###");
  definition<Block const*>((int)&v742, 35, Block::mCobblestone);
  Recipes::addShapedRecipe((int)v2, (int)&v747, &v746, &v745, &v744);
  v17 = v742;
  v18 = v743;
  if ( v742 != v743 )
      v19 = *(void **)(v17 + 60);
      if ( v19 )
        operator delete(v19);
      v20 = *(void **)(v17 + 44);
      if ( v20 )
        operator delete(v20);
      v21 = *(_DWORD *)(v17 + 16);
      if ( v21 )
        (*(void (**)(void))(*(_DWORD *)v21 + 4))();
      *(_DWORD *)(v17 + 16) = 0;
      v17 += 88;
    while ( v18 != v17 );
    v17 = v742;
  if ( v17 )
    operator delete((void *)v17);
  v22 = (void *)(v744 - 12);
  if ( (int *)(v744 - 12) != &dword_28898C0 )
    v260 = (unsigned int *)(v744 - 4);
        v261 = __ldrex(v260);
      while ( __strex(v261 - 1, v260) );
      v261 = (*v260)--;
    if ( v261 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v745 - 12);
  if ( (int *)(v745 - 12) != &dword_28898C0 )
    v262 = (unsigned int *)(v745 - 4);
        v263 = __ldrex(v262);
      while ( __strex(v263 - 1, v262) );
      v263 = (*v262)--;
    if ( v263 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v746 - 12);
  if ( (int *)(v746 - 12) != &dword_28898C0 )
    v264 = (unsigned int *)(v746 - 4);
        v265 = __ldrex(v264);
      while ( __strex(v265 - 1, v264) );
      v265 = (*v264)--;
    if ( v265 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  if ( v750 )
    operator delete(v750);
  if ( v749 )
    operator delete(v749);
  if ( v748 )
    (*(void (**)(void))(*(_DWORD *)v748 + 4))();
  v748 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v738, Block::mWorkBench);
  sub_21E94B4((void **)&v737, "##");
  sub_21E94B4((void **)&v736, "##");
  definition<Block const*>((int)&v734, 35, Block::mWoodPlanks);
  Recipes::addShapedRecipe((int)v2, (int)&v738, &v737, &v736);
  v25 = v734;
  v26 = v735;
  if ( v734 != v735 )
      v27 = *(void **)(v25 + 60);
      if ( v27 )
        operator delete(v27);
      v28 = *(void **)(v25 + 44);
      if ( v28 )
        operator delete(v28);
      v29 = *(_DWORD *)(v25 + 16);
      if ( v29 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v29 + 4))(v29, *(_DWORD *)(*(_DWORD *)v29 + 4));
      *(_DWORD *)(v25 + 16) = 0;
      v25 += 88;
    while ( v26 != v25 );
    v25 = v734;
  if ( v25 )
    operator delete((void *)v25);
  v30 = (void *)(v736 - 12);
  if ( (int *)(v736 - 12) != &dword_28898C0 )
    v266 = (unsigned int *)(v736 - 4);
        v267 = __ldrex(v266);
      while ( __strex(v267 - 1, v266) );
      v267 = (*v266)--;
    if ( v267 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v737 - 12);
  if ( (int *)(v737 - 12) != &dword_28898C0 )
    v268 = (unsigned int *)(v737 - 4);
        v269 = __ldrex(v268);
      while ( __strex(v269 - 1, v268) );
      v269 = (*v268)--;
    if ( v269 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  if ( v741 )
    operator delete(v741);
  if ( v740 )
    operator delete(v740);
  if ( v739 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v739 + 4))(v739, *(_DWORD *)(*(_DWORD *)v739 + 4));
  v739 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v730, Block::mSandStone);
  sub_21E94B4((void **)&v729, "##");
  sub_21E94B4((void **)&v728, "##");
  ItemInstance::ItemInstance((ItemInstance *)&v722, Block::mSand, 1, 0);
  definition<ItemInstance>((int)&v726, 35, (int)&v722);
  Recipes::addShapedRecipe((int)v2, (int)&v730, &v729, &v728);
  v32 = v726;
  v33 = v727;
  if ( v726 != v727 )
      v34 = *(void **)(v32 + 60);
      if ( v34 )
        operator delete(v34);
      v35 = *(void **)(v32 + 44);
      if ( v35 )
        operator delete(v35);
      v36 = *(_DWORD *)(v32 + 16);
      if ( v36 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v36 + 4))(v36, *(_DWORD *)(*(_DWORD *)v36 + 4));
      *(_DWORD *)(v32 + 16) = 0;
      v32 += 88;
    while ( v33 != v32 );
    v32 = v726;
  if ( v32 )
    operator delete((void *)v32);
  if ( v725 )
    operator delete(v725);
  if ( v724 )
    operator delete(v724);
  if ( v723 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v723 + 4))(v723, *(_DWORD *)(*(_DWORD *)v723 + 4));
  v723 = 0;
  v37 = (void *)(v728 - 12);
  if ( (int *)(v728 - 12) != &dword_28898C0 )
    v270 = (unsigned int *)(v728 - 4);
        v271 = __ldrex(v270);
      while ( __strex(v271 - 1, v270) );
      v271 = (*v270)--;
    if ( v271 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v38 = (void *)(v729 - 12);
  if ( (int *)(v729 - 12) != &dword_28898C0 )
    v272 = (unsigned int *)(v729 - 4);
        v273 = __ldrex(v272);
      while ( __strex(v273 - 1, v272) );
      v273 = (*v272)--;
    if ( v273 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  if ( v733 )
    operator delete(v733);
  if ( v732 )
    operator delete(v732);
  if ( v731 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v731 + 4))(v731, *(_DWORD *)(*(_DWORD *)v731 + 4));
  v731 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v718, Block::mRedSandstone);
  sub_21E94B4((void **)&v717, "##");
  sub_21E94B4((void **)&v716, "##");
  ItemInstance::ItemInstance((ItemInstance *)&v710, Block::mSand, 1, 1);
  definition<ItemInstance>((int)&v714, 35, (int)&v710);
  Recipes::addShapedRecipe((int)v2, (int)&v718, &v717, &v716);
  v39 = *(_QWORD *)&v714;
  if ( v714 != v715 )
      v40 = *(void **)(v39 + 60);
      if ( v40 )
        operator delete(v40);
      v41 = *(void **)(v39 + 44);
      if ( v41 )
        operator delete(v41);
      v42 = *(_DWORD *)(v39 + 16);
      if ( v42 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v42 + 4))(v42, *(_DWORD *)(*(_DWORD *)v42 + 4));
      *(_DWORD *)(v39 + 16) = 0;
      LODWORD(v39) = v39 + 88;
    while ( HIDWORD(v39) != (_DWORD)v39 );
    LODWORD(v39) = v714;
  if ( (_DWORD)v39 )
    operator delete((void *)v39);
  if ( v713 )
    operator delete(v713);
  if ( v712 )
    operator delete(v712);
  if ( v711 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v711 + 4))(v711, *(_DWORD *)(*(_DWORD *)v711 + 4));
  v711 = 0;
  v43 = (void *)(v716 - 12);
  if ( (int *)(v716 - 12) != &dword_28898C0 )
    v274 = (unsigned int *)(v716 - 4);
        v275 = __ldrex(v274);
      while ( __strex(v275 - 1, v274) );
      v275 = (*v274)--;
    if ( v275 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = (void *)(v717 - 12);
  if ( (int *)(v717 - 12) != &dword_28898C0 )
    v276 = (unsigned int *)(v717 - 4);
        v277 = __ldrex(v276);
      while ( __strex(v277 - 1, v276) );
      v277 = (*v276)--;
    if ( v277 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  if ( v721 )
    operator delete(v721);
  if ( v720 )
    operator delete(v720);
  if ( v719 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v719 + 4))(v719, *(_DWORD *)(*(_DWORD *)v719 + 4));
  v719 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v706, Block::mSandStone, 4, 2);
  sub_21E94B4((void **)&v705, "##");
  sub_21E94B4((void **)&v704, "##");
  definition<Block const*>((int)&v702, 35, Block::mSandStone);
  Recipes::addShapedRecipe((int)v2, (int)&v706, &v705, &v704);
  v45 = *(_QWORD *)&v702;
  if ( v702 != v703 )
      v46 = *(void **)(v45 + 60);
      if ( v46 )
        operator delete(v46);
      v47 = *(void **)(v45 + 44);
      if ( v47 )
        operator delete(v47);
      v48 = *(_DWORD *)(v45 + 16);
      if ( v48 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v48 + 4))(v48, *(_DWORD *)(*(_DWORD *)v48 + 4));
      *(_DWORD *)(v45 + 16) = 0;
      LODWORD(v45) = v45 + 88;
    while ( HIDWORD(v45) != (_DWORD)v45 );
    LODWORD(v45) = v702;
  if ( (_DWORD)v45 )
    operator delete((void *)v45);
  v49 = (void *)(v704 - 12);
  if ( (int *)(v704 - 12) != &dword_28898C0 )
    v278 = (unsigned int *)(v704 - 4);
        v279 = __ldrex(v278);
      while ( __strex(v279 - 1, v278) );
      v279 = (*v278)--;
    if ( v279 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  v50 = (void *)(v705 - 12);
  if ( (int *)(v705 - 12) != &dword_28898C0 )
    v280 = (unsigned int *)(v705 - 4);
        v281 = __ldrex(v280);
      while ( __strex(v281 - 1, v280) );
      v281 = (*v280)--;
    if ( v281 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  if ( v709 )
    operator delete(v709);
  if ( v708 )
    operator delete(v708);
  if ( v707 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v707 + 4))(v707, *(_DWORD *)(*(_DWORD *)v707 + 4));
  v707 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v698, Block::mRedSandstone, 4, 2);
  sub_21E94B4((void **)&v697, "##");
  sub_21E94B4((void **)&v696, "##");
  definition<Block const*>((int)&v694, 35, Block::mRedSandstone);
  Recipes::addShapedRecipe((int)v2, (int)&v698, &v697, &v696);
  v51 = *(_QWORD *)&v694;
  if ( v694 != v695 )
      v52 = *(void **)(v51 + 60);
      if ( v52 )
        operator delete(v52);
      v53 = *(void **)(v51 + 44);
      if ( v53 )
        operator delete(v53);
      v54 = *(_DWORD *)(v51 + 16);
      if ( v54 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v54 + 4))(v54, *(_DWORD *)(*(_DWORD *)v54 + 4));
      *(_DWORD *)(v51 + 16) = 0;
      LODWORD(v51) = v51 + 88;
    while ( HIDWORD(v51) != (_DWORD)v51 );
    LODWORD(v51) = v694;
  if ( (_DWORD)v51 )
    operator delete((void *)v51);
  v55 = (void *)(v696 - 12);
  if ( (int *)(v696 - 12) != &dword_28898C0 )
    v282 = (unsigned int *)(v696 - 4);
        v283 = __ldrex(v282);
      while ( __strex(v283 - 1, v282) );
      v283 = (*v282)--;
    if ( v283 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  v56 = (void *)(v697 - 12);
  if ( (int *)(v697 - 12) != &dword_28898C0 )
    v284 = (unsigned int *)(v697 - 4);
        v285 = __ldrex(v284);
      while ( __strex(v285 - 1, v284) );
      v285 = (*v284)--;
    if ( v285 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  if ( v701 )
    operator delete(v701);
  if ( v700 )
    operator delete(v700);
  if ( v699 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v699 + 4))(v699, *(_DWORD *)(*(_DWORD *)v699 + 4));
  v699 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v690, Block::mSandStone, 1, 1);
  sub_21E94B4((void **)&v689, "#");
  sub_21E94B4((void **)&v688, "#");
  ItemInstance::ItemInstance((ItemInstance *)&v682, Block::mStoneSlab, 1, 1);
  definition<ItemInstance>((int)&v686, 35, (int)&v682);
  Recipes::addShapedRecipe((int)v2, (int)&v690, &v689, &v688);
  v57 = *(_QWORD *)&v686;
  if ( v686 != v687 )
      v58 = *(void **)(v57 + 60);
      if ( v58 )
        operator delete(v58);
      v59 = *(void **)(v57 + 44);
      if ( v59 )
        operator delete(v59);
      v60 = *(_DWORD *)(v57 + 16);
      if ( v60 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v60 + 4))(v60, *(_DWORD *)(*(_DWORD *)v60 + 4));
      *(_DWORD *)(v57 + 16) = 0;
      LODWORD(v57) = v57 + 88;
    while ( HIDWORD(v57) != (_DWORD)v57 );
    LODWORD(v57) = v686;
  if ( (_DWORD)v57 )
    operator delete((void *)v57);
  if ( v685 )
    operator delete(v685);
  if ( v684 )
    operator delete(v684);
  if ( v683 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v683 + 4))(v683, *(_DWORD *)(*(_DWORD *)v683 + 4));
  v683 = 0;
  v61 = (void *)(v688 - 12);
  if ( (int *)(v688 - 12) != &dword_28898C0 )
    v286 = (unsigned int *)(v688 - 4);
        v287 = __ldrex(v286);
      while ( __strex(v287 - 1, v286) );
      v287 = (*v286)--;
    if ( v287 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  v62 = (void *)(v689 - 12);
  if ( (int *)(v689 - 12) != &dword_28898C0 )
    v288 = (unsigned int *)(v689 - 4);
        v289 = __ldrex(v288);
      while ( __strex(v289 - 1, v288) );
      v289 = (*v288)--;
    if ( v289 <= 0 )
      j_j_j_j__ZdlPv_9(v62);
  if ( v693 )
    operator delete(v693);
  if ( v692 )
    operator delete(v692);
  if ( v691 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v691 + 4))(v691, *(_DWORD *)(*(_DWORD *)v691 + 4));
  v691 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v678, Block::mRedSandstone, 1, 1);
  sub_21E94B4((void **)&v677, "#");
  sub_21E94B4((void **)&v676, "#");
  ItemInstance::ItemInstance((ItemInstance *)&v670, Block::mStoneSlab2, 1, 0);
  definition<ItemInstance>((int)&v674, 35, (int)&v670);
  Recipes::addShapedRecipe((int)v2, (int)&v678, &v677, &v676);
  v63 = *(_QWORD *)&v674;
  if ( v674 != v675 )
      v64 = *(void **)(v63 + 60);
      if ( v64 )
        operator delete(v64);
      v65 = *(void **)(v63 + 44);
      if ( v65 )
        operator delete(v65);
      v66 = *(_DWORD *)(v63 + 16);
      if ( v66 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v66 + 4))(v66, *(_DWORD *)(*(_DWORD *)v66 + 4));
      *(_DWORD *)(v63 + 16) = 0;
      LODWORD(v63) = v63 + 88;
    while ( HIDWORD(v63) != (_DWORD)v63 );
    LODWORD(v63) = v674;
  if ( (_DWORD)v63 )
    operator delete((void *)v63);
  if ( v673 )
    operator delete(v673);
  if ( v672 )
    operator delete(v672);
  if ( v671 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v671 + 4))(v671, *(_DWORD *)(*(_DWORD *)v671 + 4));
  v671 = 0;
  v67 = (void *)(v676 - 12);
  if ( (int *)(v676 - 12) != &dword_28898C0 )
    v290 = (unsigned int *)(v676 - 4);
        v291 = __ldrex(v290);
      while ( __strex(v291 - 1, v290) );
      v291 = (*v290)--;
    if ( v291 <= 0 )
      j_j_j_j__ZdlPv_9(v67);
  v68 = (void *)(v677 - 12);
  if ( (int *)(v677 - 12) != &dword_28898C0 )
    v292 = (unsigned int *)(v677 - 4);
        v293 = __ldrex(v292);
      while ( __strex(v293 - 1, v292) );
      v293 = (*v292)--;
    if ( v293 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  if ( v681 )
    operator delete(v681);
  if ( v680 )
    operator delete(v680);
  if ( v679 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v679 + 4))(v679, *(_DWORD *)(*(_DWORD *)v679 + 4));
  v679 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v666, Block::mStoneBrick, 4);
  sub_21E94B4((void **)&v665, "##");
  sub_21E94B4((void **)&v664, "##");
  ItemInstance::ItemInstance((ItemInstance *)&v658, Block::mStone, 1, 0);
  definition<ItemInstance>((int)&v662, 35, (int)&v658);
  Recipes::addShapedRecipe((int)v2, (int)&v666, &v665, &v664);
  v69 = *(_QWORD *)&v662;
  if ( v662 != v663 )
      v70 = *(void **)(v69 + 60);
      if ( v70 )
        operator delete(v70);
      v71 = *(void **)(v69 + 44);
      if ( v71 )
        operator delete(v71);
      v72 = *(_DWORD *)(v69 + 16);
      if ( v72 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v72 + 4))(v72, *(_DWORD *)(*(_DWORD *)v72 + 4));
      *(_DWORD *)(v69 + 16) = 0;
      LODWORD(v69) = v69 + 88;
    while ( HIDWORD(v69) != (_DWORD)v69 );
    LODWORD(v69) = v662;
  if ( (_DWORD)v69 )
    operator delete((void *)v69);
  if ( v661 )
    operator delete(v661);
  if ( v660 )
    operator delete(v660);
  if ( v659 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v659 + 4))(v659, *(_DWORD *)(*(_DWORD *)v659 + 4));
  v659 = 0;
  v73 = (void *)(v664 - 12);
  if ( (int *)(v664 - 12) != &dword_28898C0 )
    v294 = (unsigned int *)(v664 - 4);
        v295 = __ldrex(v294);
      while ( __strex(v295 - 1, v294) );
      v295 = (*v294)--;
    if ( v295 <= 0 )
      j_j_j_j__ZdlPv_9(v73);
  v74 = (void *)(v665 - 12);
  if ( (int *)(v665 - 12) != &dword_28898C0 )
    v296 = (unsigned int *)(v665 - 4);
        v297 = __ldrex(v296);
      while ( __strex(v297 - 1, v296) );
      v297 = (*v296)--;
    if ( v297 <= 0 )
      j_j_j_j__ZdlPv_9(v74);
  if ( v669 )
    operator delete(v669);
  if ( v668 )
    operator delete(v668);
  if ( v667 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v667 + 4))(v667, *(_DWORD *)(*(_DWORD *)v667 + 4));
  v667 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v654, Block::mStoneBrick, 1, 1);
  definition<Block const*,Block const*>((int)&ptr, 0, Block::mStoneBrick, 0, Block::mVine);
  Recipes::addShapelessRecipe((int)v2, (int)&v654, (unsigned __int64 *)&ptr);
  v75 = ptr;
  v76 = v653;
  if ( ptr != v653 )
      v77 = (void *)*((_DWORD *)v75 + 15);
      if ( v77 )
        operator delete(v77);
      v78 = (void *)*((_DWORD *)v75 + 11);
      if ( v78 )
        operator delete(v78);
      v79 = *((_DWORD *)v75 + 4);
      if ( v79 )
        (*(void (**)(void))(*(_DWORD *)v79 + 4))();
      *((_DWORD *)v75 + 4) = 0;
      v75 = (char *)v75 + 88;
    while ( v76 != v75 );
    v75 = ptr;
  if ( v75 )
    operator delete(v75);
  if ( v657 )
    operator delete(v657);
  if ( v656 )
    operator delete(v656);
  if ( v655 )
    (*(void (**)(void))(*(_DWORD *)v655 + 4))();
  v655 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v648, Block::mStoneBrick, 1, 3);
  sub_21E94B4((void **)&v647, (const char *)&aCdefghjklmnopq[15]);
  sub_21E94B4((void **)&v646, (const char *)&aCdefghjklmnopq[15]);
  ItemInstance::ItemInstance((ItemInstance *)&v640, Block::mStoneSlab, 1, 5);
  definition<ItemInstance>((int)&v644, 83, (int)&v640);
  Recipes::addShapedRecipe((int)v2, (int)&v648, &v647, &v646);
  v80 = v644;
  v81 = v645;
  if ( v644 != v645 )
      v82 = (void *)*((_DWORD *)v80 + 15);
      if ( v82 )
        operator delete(v82);
      v83 = (void *)*((_DWORD *)v80 + 11);
      if ( v83 )
        operator delete(v83);
      v84 = *((_DWORD *)v80 + 4);
      if ( v84 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v84 + 4))(v84, *(_DWORD *)(*(_DWORD *)v84 + 4));
      *((_DWORD *)v80 + 4) = 0;
      v80 = (char *)v80 + 88;
    while ( v81 != v80 );
    v80 = v644;
  if ( v80 )
    operator delete(v80);
  if ( v643 )
    operator delete(v643);
  if ( v642 )
    operator delete(v642);
  if ( v641 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v641 + 4))(v641, *(_DWORD *)(*(_DWORD *)v641 + 4));
  v641 = 0;
  v85 = (void *)(v646 - 12);
  if ( (int *)(v646 - 12) != &dword_28898C0 )
    v298 = (unsigned int *)(v646 - 4);
        v299 = __ldrex(v298);
      while ( __strex(v299 - 1, v298) );
      v299 = (*v298)--;
    if ( v299 <= 0 )
      j_j_j_j__ZdlPv_9(v85);
  v86 = (void *)(v647 - 12);
  if ( (int *)(v647 - 12) != &dword_28898C0 )
    v300 = (unsigned int *)(v647 - 4);
        v301 = __ldrex(v300);
      while ( __strex(v301 - 1, v300) );
      v301 = (*v300)--;
    if ( v301 <= 0 )
      j_j_j_j__ZdlPv_9(v86);
  if ( v651 )
    operator delete(v651);
  if ( v650 )
    operator delete(v650);
  if ( v649 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v649 + 4))(v649, *(_DWORD *)(*(_DWORD *)v649 + 4));
  v649 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v636, Block::mMossyCobblestone, 1);
  definition<Block const*,Block const*>((int)&v634, 0, Block::mCobblestone, 0, Block::mVine);
  Recipes::addShapelessRecipe((int)v2, (int)&v636, (unsigned __int64 *)&v634);
  v87 = v634;
  v88 = v635;
  if ( v634 != v635 )
      v89 = (void *)*((_DWORD *)v87 + 15);
      if ( v89 )
        operator delete(v89);
      v90 = (void *)*((_DWORD *)v87 + 11);
      if ( v90 )
        operator delete(v90);
      v91 = *((_DWORD *)v87 + 4);
      if ( v91 )
        (*(void (**)(void))(*(_DWORD *)v91 + 4))();
      *((_DWORD *)v87 + 4) = 0;
      v87 = (char *)v87 + 88;
    while ( v88 != v87 );
    v87 = v634;
  if ( v87 )
    operator delete(v87);
  if ( v639 )
    operator delete(v639);
  if ( v638 )
    operator delete(v638);
  if ( v637 )
    (*(void (**)(void))(*(_DWORD *)v637 + 4))();
  v637 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v630, Block::mIronFence, 16);
  sub_21E94B4((void **)&v629, "###");
  sub_21E94B4((void **)&v628, "###");
  definition<Item *>((int)&v626, 35, Item::mIronIngot);
  Recipes::addShapedRecipe((int)v2, (int)&v630, &v629, &v628);
  v92 = v626;
  v93 = v627;
  if ( v626 != v627 )
      v94 = (void *)*((_DWORD *)v92 + 15);
      if ( v94 )
        operator delete(v94);
      v95 = (void *)*((_DWORD *)v92 + 11);
      if ( v95 )
        operator delete(v95);
      v96 = *((_DWORD *)v92 + 4);
      if ( v96 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v96 + 4))(v96, *(_DWORD *)(*(_DWORD *)v96 + 4));
      *((_DWORD *)v92 + 4) = 0;
      v92 = (char *)v92 + 88;
    while ( v93 != v92 );
    v92 = v626;
  if ( v92 )
    operator delete(v92);
  v97 = (void *)(v628 - 12);
  if ( (int *)(v628 - 12) != &dword_28898C0 )
    v302 = (unsigned int *)(v628 - 4);
        v303 = __ldrex(v302);
      while ( __strex(v303 - 1, v302) );
      v303 = (*v302)--;
    if ( v303 <= 0 )
      j_j_j_j__ZdlPv_9(v97);
  v98 = (void *)(v629 - 12);
  if ( (int *)(v629 - 12) != &dword_28898C0 )
    v304 = (unsigned int *)(v629 - 4);
        v305 = __ldrex(v304);
      while ( __strex(v305 - 1, v304) );
      v305 = (*v304)--;
    if ( v305 <= 0 )
      j_j_j_j__ZdlPv_9(v98);
  if ( v633 )
    operator delete(v633);
  if ( v632 )
    operator delete(v632);
  if ( v631 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v631 + 4))(v631, *(_DWORD *)(*(_DWORD *)v631 + 4));
  v631 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v622, Block::mGlassPane, 16);
  sub_21E94B4((void **)&v621, "###");
  sub_21E94B4((void **)&v620, "###");
  definition<Block const*>((int)&v618, 35, Block::mGlass);
  Recipes::addShapedRecipe((int)v2, (int)&v622, &v621, &v620);
  v99 = v618;
  v100 = v619;
  if ( v618 != v619 )
      v101 = (void *)*((_DWORD *)v99 + 15);
      if ( v101 )
        operator delete(v101);
      v102 = (void *)*((_DWORD *)v99 + 11);
      if ( v102 )
        operator delete(v102);
      v103 = *((_DWORD *)v99 + 4);
      if ( v103 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v103 + 4))(v103, *(_DWORD *)(*(_DWORD *)v103 + 4));
      *((_DWORD *)v99 + 4) = 0;
      v99 = (char *)v99 + 88;
    while ( v100 != v99 );
    v99 = v618;
  if ( v99 )
    operator delete(v99);
  v104 = (void *)(v620 - 12);
  if ( (int *)(v620 - 12) != &dword_28898C0 )
    v306 = (unsigned int *)(v620 - 4);
        v307 = __ldrex(v306);
      while ( __strex(v307 - 1, v306) );
      v307 = (*v306)--;
    if ( v307 <= 0 )
      j_j_j_j__ZdlPv_9(v104);
  v105 = (void *)(v621 - 12);
  if ( (int *)(v621 - 12) != &dword_28898C0 )
    v308 = (unsigned int *)(v621 - 4);
        v309 = __ldrex(v308);
      while ( __strex(v309 - 1, v308) );
      v309 = (*v308)--;
    if ( v309 <= 0 )
      j_j_j_j__ZdlPv_9(v105);
  if ( v625 )
    operator delete(v625);
  if ( v624 )
    operator delete(v624);
  if ( v623 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v623 + 4))(v623, *(_DWORD *)(*(_DWORD *)v623 + 4));
  v623 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v614, Block::mNetherBrick, 1);
  sub_21E94B4((void **)&v613, "NN");
  sub_21E94B4((void **)&v612, "NN");
  definition<Item *>((int)&v610, 78, Item::mNetherbrick);
  Recipes::addShapedRecipe((int)v2, (int)&v614, &v613, &v612);
  v106 = v610;
  v107 = v611;
  if ( v610 != v611 )
      v108 = (void *)*((_DWORD *)v106 + 15);
      if ( v108 )
        operator delete(v108);
      v109 = (void *)*((_DWORD *)v106 + 11);
      if ( v109 )
        operator delete(v109);
      v110 = *((_DWORD *)v106 + 4);
      if ( v110 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v110 + 4))(v110, *(_DWORD *)(*(_DWORD *)v110 + 4));
      *((_DWORD *)v106 + 4) = 0;
      v106 = (char *)v106 + 88;
    while ( v107 != v106 );
    v106 = v610;
  if ( v106 )
    operator delete(v106);
  v111 = (void *)(v612 - 12);
  if ( (int *)(v612 - 12) != &dword_28898C0 )
    v310 = (unsigned int *)(v612 - 4);
        v311 = __ldrex(v310);
      while ( __strex(v311 - 1, v310) );
      v311 = (*v310)--;
    if ( v311 <= 0 )
      j_j_j_j__ZdlPv_9(v111);
  v112 = (void *)(v613 - 12);
  if ( (int *)(v613 - 12) != &dword_28898C0 )
    v312 = (unsigned int *)(v613 - 4);
        v313 = __ldrex(v312);
      while ( __strex(v313 - 1, v312) );
      v313 = (*v312)--;
    if ( v313 <= 0 )
      j_j_j_j__ZdlPv_9(v112);
  if ( v617 )
    operator delete(v617);
  if ( v616 )
    operator delete(v616);
  if ( v615 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v615 + 4))(v615, *(_DWORD *)(*(_DWORD *)v615 + 4));
  v615 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v606, Block::mRedNetherBrick, 1);
  sub_21E94B4((void **)&v605, "WN");
  sub_21E94B4((void **)&v604, "NW");
  definition<Item *,Item *>((int)&v602, 78, Item::mNetherbrick, 87, Item::mNether_wart);
  Recipes::addShapedRecipe((int)v2, (int)&v606, &v605, &v604);
  v113 = v602;
  v114 = v603;
  if ( v602 != v603 )
      v115 = (void *)*((_DWORD *)v113 + 15);
      if ( v115 )
        operator delete(v115);
      v116 = (void *)*((_DWORD *)v113 + 11);
      if ( v116 )
        operator delete(v116);
      v117 = *((_DWORD *)v113 + 4);
      if ( v117 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v117 + 4))(v117, *(_DWORD *)(*(_DWORD *)v117 + 4));
      *((_DWORD *)v113 + 4) = 0;
      v113 = (char *)v113 + 88;
    while ( v114 != v113 );
    v113 = v602;
  if ( v113 )
    operator delete(v113);
  v118 = (void *)(v604 - 12);
  if ( (int *)(v604 - 12) != &dword_28898C0 )
    v314 = (unsigned int *)(v604 - 4);
        v315 = __ldrex(v314);
      while ( __strex(v315 - 1, v314) );
      v315 = (*v314)--;
    if ( v315 <= 0 )
      j_j_j_j__ZdlPv_9(v118);
  v119 = (void *)(v605 - 12);
  if ( (int *)(v605 - 12) != &dword_28898C0 )
    v316 = (unsigned int *)(v605 - 4);
        v317 = __ldrex(v316);
      while ( __strex(v317 - 1, v316) );
      v317 = (*v316)--;
    if ( v317 <= 0 )
      j_j_j_j__ZdlPv_9(v119);
  if ( v609 )
    operator delete(v609);
  if ( v608 )
    operator delete(v608);
  if ( v607 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v607 + 4))(v607, *(_DWORD *)(*(_DWORD *)v607 + 4));
  v607 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v598, Block::mQuartzBlock, 1);
  sub_21E94B4((void **)&v597, "NN");
  sub_21E94B4((void **)&v596, "NN");
  definition<Item *>((int)&v594, 78, Item::mNetherQuartz);
  Recipes::addShapedRecipe((int)v2, (int)&v598, &v597, &v596);
  v120 = v594;
  v121 = v595;
  if ( v594 != v595 )
      v122 = (void *)*((_DWORD *)v120 + 15);
      if ( v122 )
        operator delete(v122);
      v123 = (void *)*((_DWORD *)v120 + 11);
      if ( v123 )
        operator delete(v123);
      v124 = *((_DWORD *)v120 + 4);
      if ( v124 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v124 + 4))(v124, *(_DWORD *)(*(_DWORD *)v124 + 4));
      *((_DWORD *)v120 + 4) = 0;
      v120 = (char *)v120 + 88;
    while ( v121 != v120 );
    v120 = v594;
  if ( v120 )
    operator delete(v120);
  v125 = (void *)(v596 - 12);
  if ( (int *)(v596 - 12) != &dword_28898C0 )
    v318 = (unsigned int *)(v596 - 4);
        v319 = __ldrex(v318);
      while ( __strex(v319 - 1, v318) );
      v319 = (*v318)--;
    if ( v319 <= 0 )
      j_j_j_j__ZdlPv_9(v125);
  v126 = (void *)(v597 - 12);
  if ( (int *)(v597 - 12) != &dword_28898C0 )
    v320 = (unsigned int *)(v597 - 4);
        v321 = __ldrex(v320);
      while ( __strex(v321 - 1, v320) );
      v321 = (*v320)--;
    if ( v321 <= 0 )
      j_j_j_j__ZdlPv_9(v126);
  if ( v601 )
    operator delete(v601);
  if ( v600 )
    operator delete(v600);
  if ( v599 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v599 + 4))(v599, *(_DWORD *)(*(_DWORD *)v599 + 4));
  v599 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v590, Block::mQuartzBlock, 1, 1);
  sub_21E94B4((void **)&v589, "#");
  sub_21E94B4((void **)&v588, "#");
  ItemInstance::ItemInstance((ItemInstance *)&v582, Block::mStoneSlab, 1, 6);
  definition<ItemInstance>((int)&v586, 35, (int)&v582);
  Recipes::addShapedRecipe((int)v2, (int)&v590, &v589, &v588);
  v127 = v586;
  v128 = v587;
  if ( v586 != v587 )
      v129 = (void *)*((_DWORD *)v127 + 15);
      if ( v129 )
        operator delete(v129);
      v130 = (void *)*((_DWORD *)v127 + 11);
      if ( v130 )
        operator delete(v130);
      v131 = *((_DWORD *)v127 + 4);
      if ( v131 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v131 + 4))(v131, *(_DWORD *)(*(_DWORD *)v131 + 4));
      *((_DWORD *)v127 + 4) = 0;
      v127 = (char *)v127 + 88;
    while ( v128 != v127 );
    v127 = v586;
  if ( v127 )
    operator delete(v127);
  if ( v585 )
    operator delete(v585);
  if ( v584 )
    operator delete(v584);
  if ( v583 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v583 + 4))(v583, *(_DWORD *)(*(_DWORD *)v583 + 4));
  v583 = 0;
  v132 = (void *)(v588 - 12);
  if ( (int *)(v588 - 12) != &dword_28898C0 )
    v322 = (unsigned int *)(v588 - 4);
        v323 = __ldrex(v322);
      while ( __strex(v323 - 1, v322) );
      v323 = (*v322)--;
    if ( v323 <= 0 )
      j_j_j_j__ZdlPv_9(v132);
  v133 = (void *)(v589 - 12);
  if ( (int *)(v589 - 12) != &dword_28898C0 )
    v324 = (unsigned int *)(v589 - 4);
        v325 = __ldrex(v324);
      while ( __strex(v325 - 1, v324) );
      v325 = (*v324)--;
    if ( v325 <= 0 )
      j_j_j_j__ZdlPv_9(v133);
  if ( v593 )
    operator delete(v593);
  if ( v592 )
    operator delete(v592);
  if ( v591 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v591 + 4))(v591, *(_DWORD *)(*(_DWORD *)v591 + 4));
  v591 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v578, Block::mQuartzBlock, 2, 2);
  sub_21E94B4((void **)&v577, "#");
  sub_21E94B4((void **)&v576, "#");
  ItemInstance::ItemInstance((ItemInstance *)&v570, Block::mQuartzBlock, 1, 0);
  definition<ItemInstance>((int)&v574, 35, (int)&v570);
  Recipes::addShapedRecipe((int)v2, (int)&v578, &v577, &v576);
  v134 = v574;
  v135 = v575;
  if ( v574 != v575 )
      v136 = (void *)*((_DWORD *)v134 + 15);
      if ( v136 )
        operator delete(v136);
      v137 = (void *)*((_DWORD *)v134 + 11);
      if ( v137 )
        operator delete(v137);
      v138 = *((_DWORD *)v134 + 4);
      if ( v138 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v138 + 4))(v138, *(_DWORD *)(*(_DWORD *)v138 + 4));
      *((_DWORD *)v134 + 4) = 0;
      v134 = (char *)v134 + 88;
    while ( v135 != v134 );
    v134 = v574;
  if ( v134 )
    operator delete(v134);
  if ( v573 )
    operator delete(v573);
  if ( v572 )
    operator delete(v572);
  if ( v571 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v571 + 4))(v571, *(_DWORD *)(*(_DWORD *)v571 + 4));
  v571 = 0;
  v139 = (void *)(v576 - 12);
  if ( (int *)(v576 - 12) != &dword_28898C0 )
    v326 = (unsigned int *)(v576 - 4);
        v327 = __ldrex(v326);
      while ( __strex(v327 - 1, v326) );
      v327 = (*v326)--;
    if ( v327 <= 0 )
      j_j_j_j__ZdlPv_9(v139);
  v140 = (void *)(v577 - 12);
  if ( (int *)(v577 - 12) != &dword_28898C0 )
    v328 = (unsigned int *)(v577 - 4);
        v329 = __ldrex(v328);
      while ( __strex(v329 - 1, v328) );
      v329 = (*v328)--;
    if ( v329 <= 0 )
      j_j_j_j__ZdlPv_9(v140);
  if ( v581 )
    operator delete(v581);
  if ( v580 )
    operator delete(v580);
  if ( v579 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v579 + 4))(v579, *(_DWORD *)(*(_DWORD *)v579 + 4));
  v579 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v566, Block::mPurpurBlock, 1, 2);
  sub_21E94B4((void **)&v565, "#");
  sub_21E94B4((void **)&v564, "#");
  ItemInstance::ItemInstance((ItemInstance *)&v558, Block::mStoneSlab2, 1, 1);
  definition<ItemInstance>((int)&v562, 35, (int)&v558);
  Recipes::addShapedRecipe((int)v2, (int)&v566, &v565, &v564);
  v141 = v562;
  v142 = v563;
  if ( v562 != v563 )
      v143 = (void *)*((_DWORD *)v141 + 15);
      if ( v143 )
        operator delete(v143);
      v144 = (void *)*((_DWORD *)v141 + 11);
      if ( v144 )
        operator delete(v144);
      v145 = *((_DWORD *)v141 + 4);
      if ( v145 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v145 + 4))(v145, *(_DWORD *)(*(_DWORD *)v145 + 4));
      *((_DWORD *)v141 + 4) = 0;
      v141 = (char *)v141 + 88;
    while ( v142 != v141 );
    v141 = v562;
  if ( v141 )
    operator delete(v141);
  if ( v561 )
    operator delete(v561);
  if ( v560 )
    operator delete(v560);
  if ( v559 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v559 + 4))(v559, *(_DWORD *)(*(_DWORD *)v559 + 4));
  v559 = 0;
  v146 = (void *)(v564 - 12);
  if ( (int *)(v564 - 12) != &dword_28898C0 )
    v330 = (unsigned int *)(v564 - 4);
        v331 = __ldrex(v330);
      while ( __strex(v331 - 1, v330) );
      v331 = (*v330)--;
    if ( v331 <= 0 )
      j_j_j_j__ZdlPv_9(v146);
  v147 = (void *)(v565 - 12);
  if ( (int *)(v565 - 12) != &dword_28898C0 )
    v332 = (unsigned int *)(v565 - 4);
        v333 = __ldrex(v332);
      while ( __strex(v333 - 1, v332) );
      v333 = (*v332)--;
    if ( v333 <= 0 )
      j_j_j_j__ZdlPv_9(v147);
  if ( v569 )
    operator delete(v569);
  if ( v568 )
    operator delete(v568);
  if ( v567 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v567 + 4))(v567, *(_DWORD *)(*(_DWORD *)v567 + 4));
  v567 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v554, Block::mStone, 2, 3);
  sub_21E94B4((void **)&v553, "CQ");
  sub_21E94B4((void **)&v552, "QC");
  definition<Block const*,Item *>((int)&v550, 67, Block::mCobblestone, 81, Item::mNetherQuartz);
  Recipes::addShapedRecipe((int)v2, (int)&v554, &v553, &v552);
  v148 = v550;
  v149 = v551;
  if ( v550 != v551 )
      v150 = (void *)*((_DWORD *)v148 + 15);
      if ( v150 )
        operator delete(v150);
      v151 = (void *)*((_DWORD *)v148 + 11);
      if ( v151 )
        operator delete(v151);
      v152 = *((_DWORD *)v148 + 4);
      if ( v152 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v152 + 4))(v152, *(_DWORD *)(*(_DWORD *)v152 + 4));
      *((_DWORD *)v148 + 4) = 0;
      v148 = (char *)v148 + 88;
    while ( v149 != v148 );
    v148 = v550;
  if ( v148 )
    operator delete(v148);
  v153 = (void *)(v552 - 12);
  if ( (int *)(v552 - 12) != &dword_28898C0 )
    v334 = (unsigned int *)(v552 - 4);
        v335 = __ldrex(v334);
      while ( __strex(v335 - 1, v334) );
      v335 = (*v334)--;
    if ( v335 <= 0 )
      j_j_j_j__ZdlPv_9(v153);
  v154 = (void *)(v553 - 12);
  if ( (int *)(v553 - 12) != &dword_28898C0 )
    v336 = (unsigned int *)(v553 - 4);
        v337 = __ldrex(v336);
      while ( __strex(v337 - 1, v336) );
      v337 = (*v336)--;
    if ( v337 <= 0 )
      j_j_j_j__ZdlPv_9(v154);
  if ( v557 )
    operator delete(v557);
  if ( v556 )
    operator delete(v556);
  if ( v555 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v555 + 4))(v555, *(_DWORD *)(*(_DWORD *)v555 + 4));
  v555 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v546, Block::mStone, 1, 1);
  ItemInstance::ItemInstance((ItemInstance *)&v540, Block::mStone, 1, 3);
  definition<ItemInstance,Item *>((int)&v544, 0, (int)&v540, 0, Item::mNetherQuartz);
  Recipes::addShapelessRecipe((int)v2, (int)&v546, (unsigned __int64 *)&v544);
  v155 = v544;
  v156 = v545;
  if ( v544 != v545 )
      v157 = (void *)*((_DWORD *)v155 + 15);
      if ( v157 )
        operator delete(v157);
      v158 = (void *)*((_DWORD *)v155 + 11);
      if ( v158 )
        operator delete(v158);
      v159 = *((_DWORD *)v155 + 4);
      if ( v159 )
        (*(void (**)(void))(*(_DWORD *)v159 + 4))();
      *((_DWORD *)v155 + 4) = 0;
      v155 = (char *)v155 + 88;
    while ( v156 != v155 );
    v155 = v544;
  if ( v155 )
    operator delete(v155);
  if ( v543 )
    operator delete(v543);
  if ( v542 )
    operator delete(v542);
  if ( v541 )
    (*(void (**)(void))(*(_DWORD *)v541 + 4))();
  v541 = 0;
  if ( v549 )
    operator delete(v549);
  if ( v548 )
    operator delete(v548);
  if ( v547 )
    (*(void (**)(void))(*(_DWORD *)v547 + 4))();
  v547 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v536, Block::mStone, 2, 5);
  ItemInstance::ItemInstance((ItemInstance *)&v530, Block::mStone, 1, 3);
  definition<ItemInstance,Block const*>((int)&v534, 0, (int)&v530, 0, Block::mCobblestone);
  Recipes::addShapelessRecipe((int)v2, (int)&v536, (unsigned __int64 *)&v534);
  v160 = v534;
  v161 = v535;
  if ( v534 != v535 )
      v162 = (void *)*((_DWORD *)v160 + 15);
      if ( v162 )
        operator delete(v162);
      v163 = (void *)*((_DWORD *)v160 + 11);
      if ( v163 )
        operator delete(v163);
      v164 = *((_DWORD *)v160 + 4);
      if ( v164 )
        (*(void (**)(void))(*(_DWORD *)v164 + 4))();
      *((_DWORD *)v160 + 4) = 0;
      v160 = (char *)v160 + 88;
    while ( v161 != v160 );
    v160 = v534;
  if ( v160 )
    operator delete(v160);
  if ( v533 )
    operator delete(v533);
  if ( v532 )
    operator delete(v532);
  if ( v531 )
    (*(void (**)(void))(*(_DWORD *)v531 + 4))();
  v531 = 0;
  if ( v539 )
    operator delete(v539);
  if ( v538 )
    operator delete(v538);
  if ( v537 )
    (*(void (**)(void))(*(_DWORD *)v537 + 4))();
  v537 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v526, Block::mStone, 4, 4);
  sub_21E94B4((void **)&v525, "SS");
  sub_21E94B4((void **)&v524, "SS");
  ItemInstance::ItemInstance((ItemInstance *)&v518, Block::mStone, 1, 3);
  definition<ItemInstance>((int)&v522, 83, (int)&v518);
  Recipes::addShapedRecipe((int)v2, (int)&v526, &v525, &v524);
  v165 = v522;
  v166 = v523;
  if ( v522 != v523 )
      v167 = (void *)*((_DWORD *)v165 + 15);
      if ( v167 )
        operator delete(v167);
      v168 = (void *)*((_DWORD *)v165 + 11);
      if ( v168 )
        operator delete(v168);
      v169 = *((_DWORD *)v165 + 4);
      if ( v169 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v169 + 4))(v169, *(_DWORD *)(*(_DWORD *)v169 + 4));
      *((_DWORD *)v165 + 4) = 0;
      v165 = (char *)v165 + 88;
    while ( v166 != v165 );
    v165 = v522;
  if ( v165 )
    operator delete(v165);
  if ( v521 )
    operator delete(v521);
  if ( v520 )
    operator delete(v520);
  if ( v519 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v519 + 4))(v519, *(_DWORD *)(*(_DWORD *)v519 + 4));
  v519 = 0;
  v170 = (void *)(v524 - 12);
  if ( (int *)(v524 - 12) != &dword_28898C0 )
    v338 = (unsigned int *)(v524 - 4);
        v339 = __ldrex(v338);
      while ( __strex(v339 - 1, v338) );
      v339 = (*v338)--;
    if ( v339 <= 0 )
      j_j_j_j__ZdlPv_9(v170);
  v171 = (void *)(v525 - 12);
  if ( (int *)(v525 - 12) != &dword_28898C0 )
    v340 = (unsigned int *)(v525 - 4);
        v341 = __ldrex(v340);
      while ( __strex(v341 - 1, v340) );
      v341 = (*v340)--;
    if ( v341 <= 0 )
      j_j_j_j__ZdlPv_9(v171);
  if ( v529 )
    operator delete(v529);
  if ( v528 )
    operator delete(v528);
  if ( v527 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v527 + 4))(v527, *(_DWORD *)(*(_DWORD *)v527 + 4));
  v527 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v514, Block::mStone, 4, 2);
  sub_21E94B4((void **)&v513, "SS");
  sub_21E94B4((void **)&v512, "SS");
  ItemInstance::ItemInstance((ItemInstance *)&v506, Block::mStone, 1, 1);
  definition<ItemInstance>((int)&v510, 83, (int)&v506);
  Recipes::addShapedRecipe((int)v2, (int)&v514, &v513, &v512);
  v172 = v510;
  v173 = v511;
  if ( v510 != v511 )
      v174 = (void *)*((_DWORD *)v172 + 15);
      if ( v174 )
        operator delete(v174);
      v175 = (void *)*((_DWORD *)v172 + 11);
      if ( v175 )
        operator delete(v175);
      v176 = *((_DWORD *)v172 + 4);
      if ( v176 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v176 + 4))(v176, *(_DWORD *)(*(_DWORD *)v176 + 4));
      *((_DWORD *)v172 + 4) = 0;
      v172 = (char *)v172 + 88;
    while ( v173 != v172 );
    v172 = v510;
  if ( v172 )
    operator delete(v172);
  if ( v509 )
    operator delete(v509);
  if ( v508 )
    operator delete(v508);
  if ( v507 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v507 + 4))(v507, *(_DWORD *)(*(_DWORD *)v507 + 4));
  v507 = 0;
  v177 = (void *)(v512 - 12);
  if ( (int *)(v512 - 12) != &dword_28898C0 )
    v342 = (unsigned int *)(v512 - 4);
        v343 = __ldrex(v342);
      while ( __strex(v343 - 1, v342) );
      v343 = (*v342)--;
    if ( v343 <= 0 )
      j_j_j_j__ZdlPv_9(v177);
  v178 = (void *)(v513 - 12);
  if ( (int *)(v513 - 12) != &dword_28898C0 )
    v344 = (unsigned int *)(v513 - 4);
        v345 = __ldrex(v344);
      while ( __strex(v345 - 1, v344) );
      v345 = (*v344)--;
    if ( v345 <= 0 )
      j_j_j_j__ZdlPv_9(v178);
  if ( v517 )
    operator delete(v517);
  if ( v516 )
    operator delete(v516);
  if ( v515 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v515 + 4))(v515, *(_DWORD *)(*(_DWORD *)v515 + 4));
  v515 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v502, Block::mStone, 4, 6);
  sub_21E94B4((void **)&v501, "SS");
  sub_21E94B4((void **)&v500, "SS");
  ItemInstance::ItemInstance((ItemInstance *)&v494, Block::mStone, 1, 5);
  definition<ItemInstance>((int)&v498, 83, (int)&v494);
  Recipes::addShapedRecipe((int)v2, (int)&v502, &v501, &v500);
  v179 = v498;
  v180 = v499;
  if ( v498 != v499 )
      v181 = (void *)*((_DWORD *)v179 + 15);
      if ( v181 )
        operator delete(v181);
      v182 = (void *)*((_DWORD *)v179 + 11);
      if ( v182 )
        operator delete(v182);
      v183 = *((_DWORD *)v179 + 4);
      if ( v183 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v183 + 4))(v183, *(_DWORD *)(*(_DWORD *)v183 + 4));
      *((_DWORD *)v179 + 4) = 0;
      v179 = (char *)v179 + 88;
    while ( v180 != v179 );
    v179 = v498;
  if ( v179 )
    operator delete(v179);
  if ( v497 )
    operator delete(v497);
  if ( v496 )
    operator delete(v496);
  if ( v495 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v495 + 4))(v495, *(_DWORD *)(*(_DWORD *)v495 + 4));
  v495 = 0;
  v184 = (void *)(v500 - 12);
  if ( (int *)(v500 - 12) != &dword_28898C0 )
    v346 = (unsigned int *)(v500 - 4);
        v347 = __ldrex(v346);
      while ( __strex(v347 - 1, v346) );
      v347 = (*v346)--;
    if ( v347 <= 0 )
      j_j_j_j__ZdlPv_9(v184);
  v185 = (void *)(v501 - 12);
  if ( (int *)(v501 - 12) != &dword_28898C0 )
    v348 = (unsigned int *)(v501 - 4);
        v349 = __ldrex(v348);
      while ( __strex(v349 - 1, v348) );
      v349 = (*v348)--;
    if ( v349 <= 0 )
      j_j_j_j__ZdlPv_9(v185);
  if ( v505 )
    operator delete(v505);
  if ( v504 )
    operator delete(v504);
  if ( v503 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v503 + 4))(v503, *(_DWORD *)(*(_DWORD *)v503 + 4));
  v503 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v490, Block::mBeacon, 1);
  sub_21E94B4((void **)&v489, "GGG");
  sub_21E94B4((void **)&v488, "GSG");
  sub_21E94B4((void **)&v487, "OOO");
  definition<Block const*,Item *,Block const*>(
    (int)&v485,
    71,
    Block::mGlass,
    83,
    Item::mNetherStar,
    79,
    Block::mObsidian);
  Recipes::addShapedRecipe((int)v2, (int)&v490, &v489, &v488, &v487);
  v186 = v485;
  v187 = v486;
  if ( v485 != v486 )
      v188 = (void *)*((_DWORD *)v186 + 15);
      if ( v188 )
        operator delete(v188);
      v189 = (void *)*((_DWORD *)v186 + 11);
      if ( v189 )
        operator delete(v189);
      v190 = *((_DWORD *)v186 + 4);
      if ( v190 )
        (*(void (**)(void))(*(_DWORD *)v190 + 4))();
      *((_DWORD *)v186 + 4) = 0;
      v186 = (char *)v186 + 88;
    while ( v187 != v186 );
    v186 = v485;
  if ( v186 )
    operator delete(v186);
  v191 = (void *)(v487 - 12);
  if ( (int *)(v487 - 12) != &dword_28898C0 )
    v350 = (unsigned int *)(v487 - 4);
        v351 = __ldrex(v350);
      while ( __strex(v351 - 1, v350) );
      v351 = (*v350)--;
    if ( v351 <= 0 )
      j_j_j_j__ZdlPv_9(v191);
  v192 = (void *)(v488 - 12);
  if ( (int *)(v488 - 12) != &dword_28898C0 )
    v352 = (unsigned int *)(v488 - 4);
        v353 = __ldrex(v352);
      while ( __strex(v353 - 1, v352) );
      v353 = (*v352)--;
    if ( v353 <= 0 )
      j_j_j_j__ZdlPv_9(v192);
  v193 = (void *)(v489 - 12);
  if ( (int *)(v489 - 12) != &dword_28898C0 )
    v354 = (unsigned int *)(v489 - 4);
        v355 = __ldrex(v354);
      while ( __strex(v355 - 1, v354) );
      v355 = (*v354)--;
    if ( v355 <= 0 )
      j_j_j_j__ZdlPv_9(v193);
  if ( v493 )
    operator delete(v493);
  if ( v492 )
    operator delete(v492);
  if ( v491 )
    (*(void (**)(void))(*(_DWORD *)v491 + 4))();
  v491 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v481, Block::mEnderChest);
  sub_21E94B4((void **)&v480, "###");
  sub_21E94B4((void **)&v479, "#S#");
  sub_21E94B4((void **)&v478, "###");
  definition<Block const*,Item *>((int)&v476, 35, Block::mObsidian, 83, Item::mEnderEye);
  Recipes::addShapedRecipe((int)v2, (int)&v481, &v480, &v479, &v478);
  v194 = v476;
  v195 = v477;
  if ( v476 != v477 )
      v196 = (void *)*((_DWORD *)v194 + 15);
      if ( v196 )
        operator delete(v196);
      v197 = (void *)*((_DWORD *)v194 + 11);
      if ( v197 )
        operator delete(v197);
      v198 = *((_DWORD *)v194 + 4);
      if ( v198 )
        (*(void (**)(void))(*(_DWORD *)v198 + 4))();
      *((_DWORD *)v194 + 4) = 0;
      v194 = (char *)v194 + 88;
    while ( v195 != v194 );
    v194 = v476;
  if ( v194 )
    operator delete(v194);
  v199 = (void *)(v478 - 12);
  if ( (int *)(v478 - 12) != &dword_28898C0 )
    v356 = (unsigned int *)(v478 - 4);
        v357 = __ldrex(v356);
      while ( __strex(v357 - 1, v356) );
      v357 = (*v356)--;
    if ( v357 <= 0 )
      j_j_j_j__ZdlPv_9(v199);
  v200 = (void *)(v479 - 12);
  if ( (int *)(v479 - 12) != &dword_28898C0 )
    v358 = (unsigned int *)(v479 - 4);
        v359 = __ldrex(v358);
      while ( __strex(v359 - 1, v358) );
      v359 = (*v358)--;
    if ( v359 <= 0 )
      j_j_j_j__ZdlPv_9(v200);
  v201 = (void *)(v480 - 12);
  if ( (int *)(v480 - 12) != &dword_28898C0 )
    v360 = (unsigned int *)(v480 - 4);
        v361 = __ldrex(v360);
      while ( __strex(v361 - 1, v360) );
      v361 = (*v360)--;
    if ( v361 <= 0 )
      j_j_j_j__ZdlPv_9(v201);
  if ( v484 )
    operator delete(v484);
  if ( v483 )
    operator delete(v483);
  if ( v482 )
    (*(void (**)(void))(*(_DWORD *)v482 + 4))();
  v482 = 0;
  ItemInstance::ItemInstance((ItemInstance *)&v472, Block::mUndyedShulkerBox, 1, 16);
  sub_21E94B4((void **)&v471, (const char *)&aCdefghjklmnopq[15]);
  sub_21E94B4((void **)&v470, (const char *)aCdefghjklmnopq);
  sub_21E94B4((void **)&v469, (const char *)&aCdefghjklmnopq[15]);
  definition<Block const*,Item *>((int)&v467, 67, Block::mChest, 83, Item::mShulkerShell);
  Recipes::addShapedRecipe((int)v2, (int)&v472, &v471, &v470, &v469);
  v202 = v467;
  v203 = v468;
  if ( v467 != v468 )
      v204 = (void *)*((_DWORD *)v202 + 15);
      if ( v204 )
        operator delete(v204);
      v205 = (void *)*((_DWORD *)v202 + 11);
      if ( v205 )
        operator delete(v205);
      v206 = *((_DWORD *)v202 + 4);
      if ( v206 )
        (*(void (**)(void))(*(_DWORD *)v206 + 4))();
      *((_DWORD *)v202 + 4) = 0;
      v202 = (char *)v202 + 88;
    while ( v203 != v202 );
    v202 = v467;
  if ( v202 )
    operator delete(v202);
  v207 = (void *)(v469 - 12);
  if ( (int *)(v469 - 12) != &dword_28898C0 )
    v362 = (unsigned int *)(v469 - 4);
        v363 = __ldrex(v362);
      while ( __strex(v363 - 1, v362) );
      v363 = (*v362)--;
    if ( v363 <= 0 )
      j_j_j_j__ZdlPv_9(v207);
  v208 = (void *)(v470 - 12);
  if ( (int *)(v470 - 12) != &dword_28898C0 )
    v364 = (unsigned int *)(v470 - 4);
        v365 = __ldrex(v364);
      while ( __strex(v365 - 1, v364) );
      v365 = (*v364)--;
    if ( v365 <= 0 )
      j_j_j_j__ZdlPv_9(v208);
  v209 = (void *)(v471 - 12);
  if ( (int *)(v471 - 12) != &dword_28898C0 )
    v366 = (unsigned int *)(v471 - 4);
        v367 = __ldrex(v366);
      while ( __strex(v367 - 1, v366) );
      v367 = (*v366)--;
    if ( v367 <= 0 )
      j_j_j_j__ZdlPv_9(v209);
  if ( v475 )
    operator delete(v475);
  if ( v474 )
    operator delete(v474);
  if ( v473 )
    (*(void (**)(void))(*(_DWORD *)v473 + 4))();
  v210 = (ItemInstance *)&v463;
  v211 = (ItemInstance *)&v457;
  v212 = 0;
  v213 = &Item::mDye_powder;
  v473 = 0;
  v214 = &Block::mUndyedShulkerBox;
  do
    ItemInstance::ItemInstance(v210, Block::mShulkerBox, 1, 15 - v212);
    v215 = *v214;
    ItemInstance::ItemInstance(v211, *v213, 1, v212);
    definition<Block const*,ItemInstance>((int)&v461, 0, v215, 0, (int)v211);
    Recipes::addShulkerBoxRecipe((int)v2, (int)v210, (unsigned __int64 *)&v461);
    v216 = v461;
    v217 = v462;
    if ( v461 != v462 )
      {
        v218 = (void *)*((_DWORD *)v216 + 15);
        if ( v218 )
          operator delete(v218);
        v219 = (void *)*((_DWORD *)v216 + 11);
        if ( v219 )
          operator delete(v219);
        v220 = *((_DWORD *)v216 + 4);
        if ( v220 )
          (*(void (**)(void))(*(_DWORD *)v220 + 4))();
        *((_DWORD *)v216 + 4) = 0;
        v216 = (char *)v216 + 88;
      }
      while ( v217 != v216 );
      v216 = v461;
    if ( v216 )
      operator delete(v216);
    if ( v460 )
      operator delete(v460);
    if ( v459 )
      operator delete(v459);
    if ( v458 )
      (*(void (**)(void))(*(_DWORD *)v458 + 4))();
    v458 = 0;
    if ( v466 )
      operator delete(v466);
    if ( v465 )
      operator delete(v465);
    if ( v464 )
      (*(void (**)(void))(*(_DWORD *)v464 + 4))();
    v221 = 0;
    v464 = 0;
      if ( v212 != v221 )
        ItemInstance::ItemInstance((ItemInstance *)&v453, Block::mShulkerBox, 1, 15 - v212);
        ItemInstance::ItemInstance((ItemInstance *)&v447, Block::mShulkerBox, 1, 15 - v221);
        ItemInstance::ItemInstance((ItemInstance *)&v443, Item::mDye_powder, 1, v212);
        definition<ItemInstance,ItemInstance>((int)&v451, 0, (int)&v447, 0, (int)&v443);
        Recipes::addShulkerBoxRecipe((int)v2, (int)&v453, (unsigned __int64 *)&v451);
        v222 = v451;
        v223 = v452;
        if ( v451 != v452 )
        {
          do
          {
            v224 = (void *)*((_DWORD *)v222 + 15);
            if ( v224 )
              operator delete(v224);
            v225 = (void *)*((_DWORD *)v222 + 11);
            if ( v225 )
              operator delete(v225);
            v226 = *((_DWORD *)v222 + 4);
            if ( v226 )
              (*(void (**)(void))(*(_DWORD *)v226 + 4))();
            *((_DWORD *)v222 + 4) = 0;
            v222 = (char *)v222 + 88;
          }
          while ( v223 != v222 );
          v222 = v451;
        }
        if ( v222 )
          operator delete(v222);
        if ( v446 )
          operator delete(v446);
        if ( v445 )
          operator delete(v445);
        if ( v444 )
          (*(void (**)(void))(*(_DWORD *)v444 + 4))();
        v444 = 0;
        if ( v450 )
          operator delete(v450);
        if ( v449 )
          operator delete(v449);
        if ( v448 )
          (*(void (**)(void))(*(_DWORD *)v448 + 4))();
        v448 = 0;
        if ( v456 )
          operator delete(v456);
        if ( v455 )
          operator delete(v455);
        if ( v454 )
          (*(void (**)(void))(*(_DWORD *)v454 + 4))();
        v454 = 0;
      ++v221;
    while ( v221 != 16 );
    v214 = &Block::mUndyedShulkerBox;
    ++v212;
    v213 = &Item::mDye_powder;
    v210 = (ItemInstance *)&v463;
    v211 = (ItemInstance *)&v457;
  while ( v212 != 16 );
  v227 = &Block::mGravel;
  v228 = &v389;
  v229 = &v414;
  v230 = &v421;
  v231 = &v428;
  result = &v435;
  v368 = 0;
    v440 = 0;
    v441 = 0;
    v233 = *v227;
    v442 = 0;
    v433 = 0;
    v434 = v233;
    ItemInstance::ItemInstance((int)result);
    v439 = 0;
    v234 = v441;
    if ( v441 == v442 )
      std::vector<Recipes::Type,std::allocator<Recipes::Type>>::_M_emplace_back_aux<Recipes::Type>(
        (unsigned __int64 *)&v440,
        (int)&v433);
      *v441 = *(_QWORD *)&v433;
      ItemInstance::ItemInstance((ItemInstance *)(v234 + 1), (int)&v435);
      *((_BYTE *)v234 + 80) = v439;
      v441 += 11;
    if ( v438 )
      operator delete(v438);
    if ( v437 )
      operator delete(v437);
    if ( v436 )
      (*(void (**)(void))(*(_DWORD *)v436 + 4))();
    v436 = 0;
    v426 = 0;
    v427 = Block::mSand;
    ItemInstance::ItemInstance((int)v231);
    v432 = 0;
    v235 = v441;
        (int)&v426);
      *v441 = *(_QWORD *)&v426;
      ItemInstance::ItemInstance((ItemInstance *)(v235 + 1), (int)v231);
      *((_BYTE *)v235 + 80) = v432;
    if ( v431 )
      operator delete(v431);
    if ( v430 )
      operator delete(v430);
    if ( v429 )
      (*(void (**)(void))(*(_DWORD *)v429 + 4))();
    v429 = 0;
    v419 = 0;
    v420 = Block::mGravel;
    ItemInstance::ItemInstance((int)v230);
    v425 = 0;
    v236 = v441;
        (int)&v419);
      *v441 = *(_QWORD *)&v419;
      ItemInstance::ItemInstance((ItemInstance *)(v236 + 1), (int)v230);
      *((_BYTE *)v236 + 80) = v425;
    if ( v424 )
      operator delete(v424);
    if ( v423 )
      operator delete(v423);
    if ( v422 )
      (*(void (**)(void))(*(_DWORD *)v422 + 4))();
    v422 = 0;
    v412 = 0;
    v413 = Block::mSand;
    ItemInstance::ItemInstance((int)v229);
    v418 = 0;
    v237 = v441;
        (int)&v412);
      *v441 = *(_QWORD *)&v412;
      ItemInstance::ItemInstance((ItemInstance *)(v237 + 1), (int)v229);
      *((_BYTE *)v237 + 80) = v418;
    if ( v417 )
      operator delete(v417);
    if ( v416 )
      operator delete(v416);
    if ( v415 )
      (*(void (**)(void))(*(_DWORD *)v415 + 4))();
    v415 = 0;
    ItemInstance::ItemInstance((ItemInstance *)&v401, Item::mDye_powder, 1, 15 - v368);
    v405 = 0;
    v406 = 0;
    ItemInstance::ItemInstance((ItemInstance *)&v407, (int)&v401);
    v411 = 0;
    v238 = v441;
        (int)&v405);
      *v441 = *(_QWORD *)&v405;
      ItemInstance::ItemInstance((ItemInstance *)(v238 + 1), (int)&v407);
      *((_BYTE *)v238 + 80) = v411;
    if ( v410 )
      operator delete(v410);
    if ( v409 )
      operator delete(v409);
    if ( v408 )
      (*(void (**)(void))(*(_DWORD *)v408 + 4))();
    v408 = 0;
    if ( v404 )
      operator delete(v404);
    if ( v403 )
      operator delete(v403);
    if ( v402 )
      (*(void (**)(void))(*(_DWORD *)v402 + 4))();
    v402 = 0;
    v394 = 0;
    v395 = Block::mSand;
    ItemInstance::ItemInstance((int)&v396);
    v400 = 0;
    v239 = v441;
        (int)&v394);
      *v441 = *(_QWORD *)&v394;
      ItemInstance::ItemInstance((ItemInstance *)(v239 + 1), (int)&v396);
      *((_BYTE *)v239 + 80) = v400;
    if ( v399 )
      operator delete(v399);
    if ( v398 )
      operator delete(v398);
    if ( v397 )
      (*(void (**)(void))(*(_DWORD *)v397 + 4))();
    v397 = 0;
    v387 = 0;
    v388 = Block::mGravel;
    ItemInstance::ItemInstance((int)v228);
    v393 = 0;
    v240 = v441;
        (int)&v387);
      *v441 = *(_QWORD *)&v387;
      ItemInstance::ItemInstance((ItemInstance *)(v240 + 1), (int)v228);
      *((_BYTE *)v240 + 80) = v393;
    if ( v392 )
      operator delete(v392);
    if ( v391 )
      operator delete(v391);
    if ( v390 )
      (*(void (**)(void))(*(_DWORD *)v390 + 4))();
    v390 = 0;
    v380 = 0;
    v381 = Block::mSand;
    ItemInstance::ItemInstance((int)&v382);
    v386 = 0;
    v241 = v441;
        (int)&v380);
      *v441 = *(_QWORD *)&v380;
      ItemInstance::ItemInstance((ItemInstance *)(v241 + 1), (int)&v382);
      *((_BYTE *)v241 + 80) = v386;
    if ( v385 )
      operator delete(v385);
    if ( v384 )
      operator delete(v384);
    if ( v383 )
      (*(void (**)(void))(*(_DWORD *)v383 + 4))();
    v383 = 0;
    v373 = 0;
    v374 = Block::mGravel;
    ItemInstance::ItemInstance((int)&v375);
    v379 = 0;
    v242 = v441;
        (int)&v373);
      *v441 = *(_QWORD *)&v373;
      ItemInstance::ItemInstance((ItemInstance *)(v242 + 1), (int)&v375);
      *((_BYTE *)v242 + 80) = v379;
    if ( v378 )
      operator delete(v378);
    if ( v377 )
      operator delete(v377);
    if ( v376 )
      (*(void (**)(void))(*(_DWORD *)v376 + 4))();
    v376 = 0;
    ItemInstance::ItemInstance((ItemInstance *)&v369, Block::mConcretePowder, 8, v368);
    Recipes::addShapelessRecipe((int)v2, (int)&v369, (unsigned __int64 *)&v440);
    if ( v372 )
      operator delete(v372);
    if ( v371 )
      operator delete(v371);
    v243 = v228;
    if ( v370 )
      (*(void (**)(void))(*(_DWORD *)v370 + 4))();
    v370 = 0;
    v245 = v441;
    v244 = (int)v440;
    if ( v440 != v441 )
        v246 = *(void **)(v244 + 60);
        if ( v246 )
          operator delete(v246);
        v247 = *(void **)(v244 + 44);
        if ( v247 )
          operator delete(v247);
        v248 = *(_DWORD *)(v244 + 16);
        if ( v248 )
          (*(void (**)(void))(*(_DWORD *)v248 + 4))();
        *(_DWORD *)(v244 + 16) = 0;
        v244 += 88;
      while ( v245 != (_QWORD *)v244 );
      v244 = (int)v440;
    if ( v244 )
      operator delete((void *)v244);
    v228 = v243;
    v249 = v368 + 1;
    v368 = v249;
    v231 = &v428;
    v230 = &v421;
    v229 = &v414;
    v251 = __OFSUB__(v249, 16);
    v250 = v249 - 16 < 0;
    result = &v435;
    v227 = &Block::mGravel;
  while ( v250 ^ v251 );
  return result;
}
