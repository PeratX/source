

void __fastcall FurnaceRecipes::teardownFurnaceRecipes(FurnaceRecipes *this)
{
  FurnaceRecipes::teardownFurnaceRecipes(this);
}


int __fastcall FurnaceRecipes::_init(FurnaceRecipes *this)
{
  FurnaceRecipes *v1; // r4@1
  int v2; // r7@1
  int v3; // r5@1
  FurnaceRecipes *v4; // r2@1
  int v5; // r0@2
  FurnaceRecipes *v6; // r1@3
  int v7; // r5@19
  FurnaceRecipes *v8; // r2@19
  int v9; // r0@20
  FurnaceRecipes *v10; // r1@21
  int v11; // r5@37
  FurnaceRecipes *v12; // r2@37
  int v13; // r0@38
  FurnaceRecipes *v14; // r1@39
  int v15; // r5@55
  FurnaceRecipes *v16; // r2@55
  int v17; // r0@56
  FurnaceRecipes *v18; // r1@57
  int v19; // r5@73
  FurnaceRecipes *v20; // r2@73
  int v21; // r0@74
  FurnaceRecipes *v22; // r1@75
  int v23; // r5@91
  FurnaceRecipes *v24; // r2@91
  int v25; // r0@92
  FurnaceRecipes *v26; // r1@93
  int v27; // r5@109
  FurnaceRecipes *v28; // r2@109
  int v29; // r0@110
  FurnaceRecipes *v30; // r1@111
  int v31; // r5@127
  FurnaceRecipes *v32; // r2@127
  int v33; // r0@128
  FurnaceRecipes *v34; // r1@129
  int v35; // r5@145
  FurnaceRecipes *v36; // r2@145
  int v37; // r0@146
  FurnaceRecipes *v38; // r1@147
  int v39; // r5@163
  FurnaceRecipes *v40; // r2@163
  int v41; // r0@164
  FurnaceRecipes *v42; // r1@165
  int v43; // r5@181
  FurnaceRecipes *v44; // r2@181
  int v45; // r0@182
  FurnaceRecipes *v46; // r1@183
  int v47; // r5@199
  FurnaceRecipes *v48; // r2@199
  int v49; // r0@200
  FurnaceRecipes *v50; // r1@201
  int v51; // r5@217
  int v52; // r5@223
  int v53; // r5@229
  FurnaceRecipes *v54; // r2@229
  int v55; // r0@230
  FurnaceRecipes *v56; // r1@231
  int v57; // r5@247
  FurnaceRecipes *v58; // r2@247
  int v59; // r0@248
  FurnaceRecipes *v60; // r1@249
  int v61; // r5@265
  FurnaceRecipes *v62; // r2@265
  int v63; // r0@266
  FurnaceRecipes *v64; // r1@267
  int v65; // r5@283
  FurnaceRecipes *v66; // r2@283
  int v67; // r0@284
  FurnaceRecipes *v68; // r1@285
  int v69; // r5@301
  FurnaceRecipes *v70; // r2@301
  int v71; // r0@302
  FurnaceRecipes *v72; // r1@303
  int v73; // r5@319
  FurnaceRecipes *v74; // r2@319
  int v75; // r0@320
  FurnaceRecipes *v76; // r1@321
  int v77; // r5@337
  FurnaceRecipes *v78; // r2@337
  int v79; // r0@338
  FurnaceRecipes *v80; // r1@339
  int v81; // r5@355
  FurnaceRecipes *v82; // r2@355
  int v83; // r0@356
  FurnaceRecipes *v84; // r1@357
  int v85; // r5@373
  FurnaceRecipes *v86; // r2@373
  int v87; // r0@374
  FurnaceRecipes *v88; // r1@375
  int v89; // r5@391
  FurnaceRecipes *v90; // r2@391
  int v91; // r0@392
  FurnaceRecipes *v92; // r1@393
  int v93; // r5@409
  FurnaceRecipes *v94; // r2@409
  int v95; // r0@410
  FurnaceRecipes *v96; // r1@411
  int v97; // r5@427
  FurnaceRecipes *v98; // r2@427
  int v99; // r0@428
  FurnaceRecipes *v100; // r1@429
  int v101; // r5@445
  FurnaceRecipes *v102; // r2@445
  int v103; // r0@446
  FurnaceRecipes *v104; // r1@447
  int v105; // r5@463
  FurnaceRecipes *v106; // r2@463
  int v107; // r0@464
  FurnaceRecipes *v108; // r1@465
  int v109; // r5@481
  FurnaceRecipes *v110; // r2@481
  int v111; // r0@482
  FurnaceRecipes *v112; // r1@483
  int v113; // r5@499
  FurnaceRecipes *v114; // r2@499
  int v115; // r0@500
  FurnaceRecipes *v116; // r1@501
  int v117; // r5@517
  FurnaceRecipes *v118; // r2@517
  int v119; // r0@518
  FurnaceRecipes *v120; // r1@519
  int v121; // r5@535
  FurnaceRecipes *v122; // r2@535
  int v123; // r0@536
  FurnaceRecipes *v124; // r1@537
  int v125; // r5@553
  FurnaceRecipes *v126; // r2@553
  int v127; // r0@554
  FurnaceRecipes *v128; // r1@555
  int v129; // r5@571
  FurnaceRecipes *v130; // r2@571
  int v131; // r0@572
  FurnaceRecipes *v132; // r1@573
  int v133; // r5@589
  FurnaceRecipes *v134; // r2@589
  int v135; // r0@590
  FurnaceRecipes *v136; // r1@591
  int v137; // r5@607
  FurnaceRecipes *v138; // r2@607
  int v139; // r0@608
  FurnaceRecipes *v140; // r1@609
  int v141; // r5@625
  FurnaceRecipes *v142; // r2@625
  int v143; // r0@626
  FurnaceRecipes *v144; // r1@627
  int v145; // r5@643
  FurnaceRecipes *v146; // r2@643
  int v147; // r0@644
  FurnaceRecipes *v148; // r1@645
  int v149; // r5@661
  FurnaceRecipes *v150; // r2@661
  int v151; // r0@662
  FurnaceRecipes *v152; // r1@663
  int v153; // r5@679
  FurnaceRecipes *v154; // r2@679
  int v155; // r0@680
  FurnaceRecipes *v156; // r1@681
  int v157; // r5@697
  FurnaceRecipes *v158; // r2@697
  int v159; // r0@698
  FurnaceRecipes *v160; // r1@699
  int v161; // r5@715
  FurnaceRecipes *v162; // r2@715
  int v163; // r0@716
  FurnaceRecipes *v164; // r1@717
  int v165; // r5@733
  FurnaceRecipes *v166; // r2@733
  int v167; // r0@734
  FurnaceRecipes *v168; // r1@735
  int v169; // r5@751
  FurnaceRecipes *v170; // r2@751
  int v171; // r0@752
  FurnaceRecipes *v172; // r1@753
  int v173; // r5@769
  FurnaceRecipes *v174; // r2@769
  int v175; // r0@770
  FurnaceRecipes *v176; // r1@771
  int v177; // r5@787
  FurnaceRecipes *v178; // r2@787
  int v179; // r0@788
  FurnaceRecipes *v180; // r1@789
  int v181; // r5@805
  FurnaceRecipes *v182; // r2@805
  int v183; // r0@806
  FurnaceRecipes *v184; // r1@807
  int v185; // r5@823
  FurnaceRecipes *v186; // r2@823
  int v187; // r0@824
  FurnaceRecipes *v188; // r1@825
  int v189; // r5@841
  FurnaceRecipes *v190; // r2@841
  int v191; // r0@842
  FurnaceRecipes *v192; // r1@843
  int v193; // r5@859
  FurnaceRecipes *v194; // r2@859
  int v195; // r0@860
  FurnaceRecipes *v196; // r1@861
  int v197; // r5@877
  FurnaceRecipes *v198; // r2@877
  int v199; // r0@878
  FurnaceRecipes *v200; // r1@879
  int v201; // r5@895
  int v202; // r5@901
  int v203; // r5@907
  int v204; // r5@913
  int v205; // r5@919
  int v206; // r5@925
  int v207; // r5@931
  int v208; // r5@937
  int v209; // r5@943
  int v210; // r5@949
  int v211; // r5@955
  int v212; // r5@961
  int v213; // r5@967
  int v214; // r5@973
  int v215; // r5@979
  int v216; // r5@985
  int result; // r0@989
  char v218; // [sp+8h] [bp-1548h]@985
  int v219; // [sp+10h] [bp-1540h]@989
  void *v220; // [sp+2Ch] [bp-1524h]@987
  void *v221; // [sp+3Ch] [bp-1514h]@985
  char v222; // [sp+50h] [bp-1500h]@979
  int v223; // [sp+58h] [bp-14F8h]@983
  void *v224; // [sp+74h] [bp-14DCh]@981
  void *v225; // [sp+84h] [bp-14CCh]@979
  char v226; // [sp+98h] [bp-14B8h]@973
  int v227; // [sp+A0h] [bp-14B0h]@977
  void *v228; // [sp+BCh] [bp-1494h]@975
  void *v229; // [sp+CCh] [bp-1484h]@973
  char v230; // [sp+E0h] [bp-1470h]@967
  int v231; // [sp+E8h] [bp-1468h]@971
  void *v232; // [sp+104h] [bp-144Ch]@969
  void *v233; // [sp+114h] [bp-143Ch]@967
  char v234; // [sp+128h] [bp-1428h]@961
  int v235; // [sp+130h] [bp-1420h]@965
  void *v236; // [sp+14Ch] [bp-1404h]@963
  void *v237; // [sp+15Ch] [bp-13F4h]@961
  char v238; // [sp+170h] [bp-13E0h]@955
  int v239; // [sp+178h] [bp-13D8h]@959
  void *v240; // [sp+194h] [bp-13BCh]@957
  void *v241; // [sp+1A4h] [bp-13ACh]@955
  char v242; // [sp+1B8h] [bp-1398h]@949
  int v243; // [sp+1C0h] [bp-1390h]@953
  void *v244; // [sp+1DCh] [bp-1374h]@951
  void *v245; // [sp+1ECh] [bp-1364h]@949
  char v246; // [sp+200h] [bp-1350h]@943
  int v247; // [sp+208h] [bp-1348h]@947
  void *v248; // [sp+224h] [bp-132Ch]@945
  void *v249; // [sp+234h] [bp-131Ch]@943
  char v250; // [sp+248h] [bp-1308h]@937
  int v251; // [sp+250h] [bp-1300h]@941
  void *v252; // [sp+26Ch] [bp-12E4h]@939
  void *v253; // [sp+27Ch] [bp-12D4h]@937
  char v254; // [sp+290h] [bp-12C0h]@931
  int v255; // [sp+298h] [bp-12B8h]@935
  void *v256; // [sp+2B4h] [bp-129Ch]@933
  void *v257; // [sp+2C4h] [bp-128Ch]@931
  char v258; // [sp+2D8h] [bp-1278h]@925
  int v259; // [sp+2E0h] [bp-1270h]@929
  void *v260; // [sp+2FCh] [bp-1254h]@927
  void *v261; // [sp+30Ch] [bp-1244h]@925
  char v262; // [sp+320h] [bp-1230h]@919
  int v263; // [sp+328h] [bp-1228h]@923
  void *v264; // [sp+344h] [bp-120Ch]@921
  void *v265; // [sp+354h] [bp-11FCh]@919
  char v266; // [sp+368h] [bp-11E8h]@913
  int v267; // [sp+370h] [bp-11E0h]@917
  void *v268; // [sp+38Ch] [bp-11C4h]@915
  void *v269; // [sp+39Ch] [bp-11B4h]@913
  char v270; // [sp+3B0h] [bp-11A0h]@907
  int v271; // [sp+3B8h] [bp-1198h]@911
  void *v272; // [sp+3D4h] [bp-117Ch]@909
  void *v273; // [sp+3E4h] [bp-116Ch]@907
  char v274; // [sp+3F8h] [bp-1158h]@901
  int v275; // [sp+400h] [bp-1150h]@905
  void *v276; // [sp+41Ch] [bp-1134h]@903
  void *v277; // [sp+42Ch] [bp-1124h]@901
  char v278; // [sp+440h] [bp-1110h]@895
  int v279; // [sp+448h] [bp-1108h]@899
  void *v280; // [sp+464h] [bp-10ECh]@897
  void *v281; // [sp+474h] [bp-10DCh]@895
  char v282; // [sp+488h] [bp-10C8h]@877
  int v283; // [sp+490h] [bp-10C0h]@893
  void *v284; // [sp+4ACh] [bp-10A4h]@891
  void *v285; // [sp+4BCh] [bp-1094h]@889
  char v286; // [sp+4D0h] [bp-1080h]@859
  int v287; // [sp+4D8h] [bp-1078h]@875
  void *v288; // [sp+4F4h] [bp-105Ch]@873
  void *v289; // [sp+504h] [bp-104Ch]@871
  char v290; // [sp+518h] [bp-1038h]@841
  int v291; // [sp+520h] [bp-1030h]@857
  void *v292; // [sp+53Ch] [bp-1014h]@855
  void *v293; // [sp+54Ch] [bp-1004h]@853
  char v294; // [sp+560h] [bp-FF0h]@823
  int v295; // [sp+568h] [bp-FE8h]@839
  void *v296; // [sp+584h] [bp-FCCh]@837
  void *v297; // [sp+594h] [bp-FBCh]@835
  char v298; // [sp+5A8h] [bp-FA8h]@805
  int v299; // [sp+5B0h] [bp-FA0h]@821
  void *v300; // [sp+5CCh] [bp-F84h]@819
  void *v301; // [sp+5DCh] [bp-F74h]@817
  char v302; // [sp+5F0h] [bp-F60h]@787
  int v303; // [sp+5F8h] [bp-F58h]@803
  void *v304; // [sp+614h] [bp-F3Ch]@801
  void *v305; // [sp+624h] [bp-F2Ch]@799
  char v306; // [sp+638h] [bp-F18h]@769
  int v307; // [sp+640h] [bp-F10h]@785
  void *v308; // [sp+65Ch] [bp-EF4h]@783
  void *v309; // [sp+66Ch] [bp-EE4h]@781
  char v310; // [sp+680h] [bp-ED0h]@751
  int v311; // [sp+688h] [bp-EC8h]@767
  void *v312; // [sp+6A4h] [bp-EACh]@765
  void *v313; // [sp+6B4h] [bp-E9Ch]@763
  char v314; // [sp+6C8h] [bp-E88h]@733
  int v315; // [sp+6D0h] [bp-E80h]@749
  void *v316; // [sp+6ECh] [bp-E64h]@747
  void *v317; // [sp+6FCh] [bp-E54h]@745
  char v318; // [sp+710h] [bp-E40h]@715
  int v319; // [sp+718h] [bp-E38h]@731
  void *v320; // [sp+734h] [bp-E1Ch]@729
  void *v321; // [sp+744h] [bp-E0Ch]@727
  char v322; // [sp+758h] [bp-DF8h]@697
  int v323; // [sp+760h] [bp-DF0h]@713
  void *v324; // [sp+77Ch] [bp-DD4h]@711
  void *v325; // [sp+78Ch] [bp-DC4h]@709
  char v326; // [sp+7A0h] [bp-DB0h]@679
  int v327; // [sp+7A8h] [bp-DA8h]@695
  void *v328; // [sp+7C4h] [bp-D8Ch]@693
  void *v329; // [sp+7D4h] [bp-D7Ch]@691
  char v330; // [sp+7E8h] [bp-D68h]@661
  int v331; // [sp+7F0h] [bp-D60h]@677
  void *v332; // [sp+80Ch] [bp-D44h]@675
  void *v333; // [sp+81Ch] [bp-D34h]@673
  char v334; // [sp+830h] [bp-D20h]@643
  int v335; // [sp+838h] [bp-D18h]@659
  void *v336; // [sp+854h] [bp-CFCh]@657
  void *v337; // [sp+864h] [bp-CECh]@655
  char v338; // [sp+878h] [bp-CD8h]@625
  int v339; // [sp+880h] [bp-CD0h]@641
  void *v340; // [sp+89Ch] [bp-CB4h]@639
  void *v341; // [sp+8ACh] [bp-CA4h]@637
  char v342; // [sp+8C0h] [bp-C90h]@607
  int v343; // [sp+8C8h] [bp-C88h]@623
  void *v344; // [sp+8E4h] [bp-C6Ch]@621
  void *v345; // [sp+8F4h] [bp-C5Ch]@619
  char v346; // [sp+908h] [bp-C48h]@589
  int v347; // [sp+910h] [bp-C40h]@605
  void *v348; // [sp+92Ch] [bp-C24h]@603
  void *v349; // [sp+93Ch] [bp-C14h]@601
  char v350; // [sp+950h] [bp-C00h]@571
  int v351; // [sp+958h] [bp-BF8h]@587
  void *v352; // [sp+974h] [bp-BDCh]@585
  void *v353; // [sp+984h] [bp-BCCh]@583
  char v354; // [sp+998h] [bp-BB8h]@553
  int v355; // [sp+9A0h] [bp-BB0h]@569
  void *v356; // [sp+9BCh] [bp-B94h]@567
  void *v357; // [sp+9CCh] [bp-B84h]@565
  char v358; // [sp+9E0h] [bp-B70h]@535
  int v359; // [sp+9E8h] [bp-B68h]@551
  void *v360; // [sp+A04h] [bp-B4Ch]@549
  void *v361; // [sp+A14h] [bp-B3Ch]@547
  char v362; // [sp+A28h] [bp-B28h]@517
  int v363; // [sp+A30h] [bp-B20h]@533
  void *v364; // [sp+A4Ch] [bp-B04h]@531
  void *v365; // [sp+A5Ch] [bp-AF4h]@529
  char v366; // [sp+A70h] [bp-AE0h]@499
  int v367; // [sp+A78h] [bp-AD8h]@515
  void *v368; // [sp+A94h] [bp-ABCh]@513
  void *v369; // [sp+AA4h] [bp-AACh]@511
  char v370; // [sp+AB8h] [bp-A98h]@481
  int v371; // [sp+AC0h] [bp-A90h]@497
  void *v372; // [sp+ADCh] [bp-A74h]@495
  void *v373; // [sp+AECh] [bp-A64h]@493
  char v374; // [sp+B00h] [bp-A50h]@463
  int v375; // [sp+B08h] [bp-A48h]@479
  void *v376; // [sp+B24h] [bp-A2Ch]@477
  void *v377; // [sp+B34h] [bp-A1Ch]@475
  char v378; // [sp+B48h] [bp-A08h]@445
  int v379; // [sp+B50h] [bp-A00h]@461
  void *v380; // [sp+B6Ch] [bp-9E4h]@459
  void *v381; // [sp+B7Ch] [bp-9D4h]@457
  char v382; // [sp+B90h] [bp-9C0h]@427
  int v383; // [sp+B98h] [bp-9B8h]@443
  void *v384; // [sp+BB4h] [bp-99Ch]@441
  void *v385; // [sp+BC4h] [bp-98Ch]@439
  char v386; // [sp+BD8h] [bp-978h]@409
  int v387; // [sp+BE0h] [bp-970h]@425
  void *v388; // [sp+BFCh] [bp-954h]@423
  void *v389; // [sp+C0Ch] [bp-944h]@421
  char v390; // [sp+C20h] [bp-930h]@391
  int v391; // [sp+C28h] [bp-928h]@407
  void *v392; // [sp+C44h] [bp-90Ch]@405
  void *v393; // [sp+C54h] [bp-8FCh]@403
  char v394; // [sp+C68h] [bp-8E8h]@373
  int v395; // [sp+C70h] [bp-8E0h]@389
  void *v396; // [sp+C8Ch] [bp-8C4h]@387
  void *v397; // [sp+C9Ch] [bp-8B4h]@385
  char v398; // [sp+CB0h] [bp-8A0h]@355
  int v399; // [sp+CB8h] [bp-898h]@371
  void *v400; // [sp+CD4h] [bp-87Ch]@369
  void *v401; // [sp+CE4h] [bp-86Ch]@367
  char v402; // [sp+CF8h] [bp-858h]@337
  int v403; // [sp+D00h] [bp-850h]@353
  void *v404; // [sp+D1Ch] [bp-834h]@351
  void *v405; // [sp+D2Ch] [bp-824h]@349
  char v406; // [sp+D40h] [bp-810h]@319
  int v407; // [sp+D48h] [bp-808h]@335
  void *v408; // [sp+D64h] [bp-7ECh]@333
  void *v409; // [sp+D74h] [bp-7DCh]@331
  char v410; // [sp+D88h] [bp-7C8h]@301
  int v411; // [sp+D90h] [bp-7C0h]@317
  void *v412; // [sp+DACh] [bp-7A4h]@315
  void *v413; // [sp+DBCh] [bp-794h]@313
  char v414; // [sp+DD0h] [bp-780h]@283
  int v415; // [sp+DD8h] [bp-778h]@299
  void *v416; // [sp+DF4h] [bp-75Ch]@297
  void *v417; // [sp+E04h] [bp-74Ch]@295
  char v418; // [sp+E18h] [bp-738h]@265
  int v419; // [sp+E20h] [bp-730h]@281
  void *v420; // [sp+E3Ch] [bp-714h]@279
  void *v421; // [sp+E4Ch] [bp-704h]@277
  char v422; // [sp+E60h] [bp-6F0h]@247
  int v423; // [sp+E68h] [bp-6E8h]@263
  void *v424; // [sp+E84h] [bp-6CCh]@261
  void *v425; // [sp+E94h] [bp-6BCh]@259
  char v426; // [sp+EA8h] [bp-6A8h]@229
  int v427; // [sp+EB0h] [bp-6A0h]@245
  void *v428; // [sp+ECCh] [bp-684h]@243
  void *v429; // [sp+EDCh] [bp-674h]@241
  char v430; // [sp+EF0h] [bp-660h]@223
  int v431; // [sp+EF8h] [bp-658h]@227
  void *v432; // [sp+F14h] [bp-63Ch]@225
  void *v433; // [sp+F24h] [bp-62Ch]@223
  char v434; // [sp+F38h] [bp-618h]@217
  int v435; // [sp+F40h] [bp-610h]@221
  void *v436; // [sp+F5Ch] [bp-5F4h]@219
  void *ptr; // [sp+F6Ch] [bp-5E4h]@217
  char v438; // [sp+F80h] [bp-5D0h]@199
  int v439; // [sp+F88h] [bp-5C8h]@215
  void *v440; // [sp+FA4h] [bp-5ACh]@213
  void *v441; // [sp+FB4h] [bp-59Ch]@211
  char v442; // [sp+FC8h] [bp-588h]@181
  int v443; // [sp+FD0h] [bp-580h]@197
  void *v444; // [sp+FECh] [bp-564h]@195
  void *v445; // [sp+FFCh] [bp-554h]@193
  int v446; // [sp+1010h] [bp-540h]@163
  int v447; // [sp+1018h] [bp-538h]@179
  void *v448; // [sp+1034h] [bp-51Ch]@177
  void *v449; // [sp+1044h] [bp-50Ch]@175
  int v450; // [sp+1058h] [bp-4F8h]@145
  int v451; // [sp+1060h] [bp-4F0h]@161
  void *v452; // [sp+107Ch] [bp-4D4h]@159
  void *v453; // [sp+108Ch] [bp-4C4h]@157
  char v454; // [sp+10A0h] [bp-4B0h]@127
  int v455; // [sp+10A8h] [bp-4A8h]@143
  void *v456; // [sp+10C4h] [bp-48Ch]@141
  void *v457; // [sp+10D4h] [bp-47Ch]@139
  int v458; // [sp+10E8h] [bp-468h]@109
  int v459; // [sp+10F0h] [bp-460h]@125
  void *v460; // [sp+110Ch] [bp-444h]@123
  void *v461; // [sp+111Ch] [bp-434h]@121
  int v462; // [sp+1130h] [bp-420h]@91
  int v463; // [sp+1138h] [bp-418h]@107
  void *v464; // [sp+1154h] [bp-3FCh]@105
  void *v465; // [sp+1164h] [bp-3ECh]@103
  int v466; // [sp+1178h] [bp-3D8h]@73
  int v467; // [sp+1180h] [bp-3D0h]@89
  void *v468; // [sp+119Ch] [bp-3B4h]@87
  void *v469; // [sp+11ACh] [bp-3A4h]@85
  char v470; // [sp+11C0h] [bp-390h]@55
  int v471; // [sp+11C8h] [bp-388h]@71
  void *v472; // [sp+11E4h] [bp-36Ch]@69
  void *v473; // [sp+11F4h] [bp-35Ch]@67
  int v474; // [sp+1208h] [bp-348h]@37
  int v475; // [sp+1210h] [bp-340h]@53
  void *v476; // [sp+122Ch] [bp-324h]@51
  void *v477; // [sp+123Ch] [bp-314h]@49
  int v478; // [sp+1250h] [bp-300h]@19
  int v479; // [sp+1258h] [bp-2F8h]@35
  void *v480; // [sp+1274h] [bp-2DCh]@33
  void *v481; // [sp+1284h] [bp-2CCh]@31
  int v482; // [sp+1298h] [bp-2B8h]@1
  int v483; // [sp+12A0h] [bp-2B0h]@17
  void *v484; // [sp+12BCh] [bp-294h]@15
  void *v485; // [sp+12CCh] [bp-284h]@13
  int v486; // [sp+12E4h] [bp-26Ch]@1
  int *v487; // [sp+12ECh] [bp-264h]@12
  int v488; // [sp+12F0h] [bp-260h]@19
  int *v489; // [sp+12F8h] [bp-258h]@30
  int v490; // [sp+12FCh] [bp-254h]@37
  int *v491; // [sp+1304h] [bp-24Ch]@48
  int v492; // [sp+1308h] [bp-248h]@55
  int *v493; // [sp+1310h] [bp-240h]@66
  int v494; // [sp+1314h] [bp-23Ch]@73
  int *v495; // [sp+131Ch] [bp-234h]@84
  int v496; // [sp+1320h] [bp-230h]@91
  int *v497; // [sp+1328h] [bp-228h]@102
  int v498; // [sp+132Ch] [bp-224h]@109
  int *v499; // [sp+1334h] [bp-21Ch]@120
  int v500; // [sp+1338h] [bp-218h]@127
  int *v501; // [sp+1340h] [bp-210h]@138
  int v502; // [sp+1344h] [bp-20Ch]@145
  int *v503; // [sp+134Ch] [bp-204h]@156
  int v504; // [sp+1350h] [bp-200h]@163
  int *v505; // [sp+1358h] [bp-1F8h]@174
  int v506; // [sp+135Ch] [bp-1F4h]@181
  int *v507; // [sp+1364h] [bp-1ECh]@192
  int v508; // [sp+1368h] [bp-1E8h]@199
  int *v509; // [sp+1370h] [bp-1E0h]@210
  int v510; // [sp+1374h] [bp-1DCh]@229
  int *v511; // [sp+137Ch] [bp-1D4h]@240
  int v512; // [sp+1380h] [bp-1D0h]@247
  int *v513; // [sp+1388h] [bp-1C8h]@258
  int v514; // [sp+138Ch] [bp-1C4h]@265
  int *v515; // [sp+1394h] [bp-1BCh]@276
  int v516; // [sp+1398h] [bp-1B8h]@283
  int *v517; // [sp+13A0h] [bp-1B0h]@294
  int v518; // [sp+13A4h] [bp-1ACh]@301
  int *v519; // [sp+13ACh] [bp-1A4h]@312
  int v520; // [sp+13B0h] [bp-1A0h]@319
  int *v521; // [sp+13B8h] [bp-198h]@330
  int v522; // [sp+13BCh] [bp-194h]@337
  int *v523; // [sp+13C4h] [bp-18Ch]@348
  int v524; // [sp+13C8h] [bp-188h]@355
  int *v525; // [sp+13D0h] [bp-180h]@366
  int v526; // [sp+13D4h] [bp-17Ch]@373
  int *v527; // [sp+13DCh] [bp-174h]@384
  int v528; // [sp+13E0h] [bp-170h]@391
  int *v529; // [sp+13E8h] [bp-168h]@402
  int v530; // [sp+13ECh] [bp-164h]@409
  int *v531; // [sp+13F4h] [bp-15Ch]@420
  int v532; // [sp+13F8h] [bp-158h]@427
  int *v533; // [sp+1400h] [bp-150h]@438
  int v534; // [sp+1404h] [bp-14Ch]@445
  int *v535; // [sp+140Ch] [bp-144h]@456
  int v536; // [sp+1410h] [bp-140h]@463
  int *v537; // [sp+1418h] [bp-138h]@474
  int v538; // [sp+141Ch] [bp-134h]@481
  int *v539; // [sp+1424h] [bp-12Ch]@492
  int v540; // [sp+1428h] [bp-128h]@499
  int *v541; // [sp+1430h] [bp-120h]@510
  int v542; // [sp+1434h] [bp-11Ch]@517
  int *v543; // [sp+143Ch] [bp-114h]@528
  int v544; // [sp+1440h] [bp-110h]@535
  int *v545; // [sp+1448h] [bp-108h]@546
  int v546; // [sp+144Ch] [bp-104h]@553
  int *v547; // [sp+1454h] [bp-FCh]@564
  int v548; // [sp+1458h] [bp-F8h]@571
  int *v549; // [sp+1460h] [bp-F0h]@582
  int v550; // [sp+1464h] [bp-ECh]@589
  int *v551; // [sp+146Ch] [bp-E4h]@600
  int v552; // [sp+1470h] [bp-E0h]@607
  int *v553; // [sp+1478h] [bp-D8h]@618
  int v554; // [sp+147Ch] [bp-D4h]@625
  int *v555; // [sp+1484h] [bp-CCh]@636
  int v556; // [sp+1488h] [bp-C8h]@643
  int *v557; // [sp+1490h] [bp-C0h]@654
  int v558; // [sp+1494h] [bp-BCh]@661
  int *v559; // [sp+149Ch] [bp-B4h]@672
  int v560; // [sp+14A0h] [bp-B0h]@679
  int *v561; // [sp+14A8h] [bp-A8h]@690
  int v562; // [sp+14ACh] [bp-A4h]@697
  int *v563; // [sp+14B4h] [bp-9Ch]@708
  int v564; // [sp+14B8h] [bp-98h]@715
  int *v565; // [sp+14C0h] [bp-90h]@726
  int v566; // [sp+14C4h] [bp-8Ch]@733
  int *v567; // [sp+14CCh] [bp-84h]@744
  int v568; // [sp+14D0h] [bp-80h]@751
  int *v569; // [sp+14D8h] [bp-78h]@762
  int v570; // [sp+14DCh] [bp-74h]@769
  int *v571; // [sp+14E4h] [bp-6Ch]@780
  int v572; // [sp+14E8h] [bp-68h]@787
  int *v573; // [sp+14F0h] [bp-60h]@798
  int v574; // [sp+14F4h] [bp-5Ch]@805
  int *v575; // [sp+14FCh] [bp-54h]@816
  int v576; // [sp+1500h] [bp-50h]@823
  int *v577; // [sp+1508h] [bp-48h]@834
  int v578; // [sp+150Ch] [bp-44h]@841
  int *v579; // [sp+1514h] [bp-3Ch]@852
  int v580; // [sp+1518h] [bp-38h]@859
  int *v581; // [sp+1520h] [bp-30h]@870
  int v582; // [sp+1524h] [bp-2Ch]@877
  int *v583; // [sp+152Ch] [bp-24h]@888

  v1 = this;
  std::_Rb_tree<int,std::pair<int const,ItemInstance>,std::_Select1st<std::pair<int const,ItemInstance>>,std::less<int>,std::allocator<std::pair<int const,ItemInstance>>>::_M_erase(
    (int)this,
    *((_DWORD *)this + 2));
  v2 = (int)v1 + 4;
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = (char *)v1 + 4;
  *((_DWORD *)v1 + 4) = (char *)v1 + 4;
  *((_DWORD *)v1 + 5) = 0;
    (int)v1 + 24,
    *((_DWORD *)v1 + 8));
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = (char *)v1 + 28;
  *((_DWORD *)v1 + 10) = (char *)v1 + 28;
  *((_DWORD *)v1 + 11) = 0;
  v3 = *(_BYTE *)(Block::mIronOre + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v482, Item::mIronIngot);
  v486 = v3;
  v4 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v4 )
  {
    v5 = (int)v1 + 4;
    do
    {
      v6 = v4;
      while ( *((_DWORD *)v6 + 4) < v3 )
      {
        v6 = (FurnaceRecipes *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = (FurnaceRecipes *)v5;
          goto LABEL_10;
        }
      }
      v4 = (FurnaceRecipes *)*((_DWORD *)v6 + 2);
      v5 = (int)v6;
    }
    while ( v4 );
  }
  else
    v6 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_10:
  if ( v6 == (FurnaceRecipes *)v2 || *((_DWORD *)v6 + 4) > v3 )
    v487 = &v486;
    v6 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                             (int)v1,
                             (int)v6,
                             (int)&unk_262E438,
                             &v487);
  ItemInstance::operator=((int)v6 + 24, (int)&v482);
  if ( v485 )
    operator delete(v485);
  if ( v484 )
    operator delete(v484);
  if ( v483 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v483 + 4))(v483);
  v483 = 0;
  v7 = *(_BYTE *)(Block::mGoldOre + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v478, Item::mGoldIngot);
  v488 = v7;
  v8 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v8 )
    v9 = (int)v1 + 4;
      v10 = v8;
      while ( *((_DWORD *)v10 + 4) < v7 )
        v10 = (FurnaceRecipes *)*((_DWORD *)v10 + 3);
        if ( !v10 )
          v10 = (FurnaceRecipes *)v9;
          goto LABEL_28;
      v8 = (FurnaceRecipes *)*((_DWORD *)v10 + 2);
      v9 = (int)v10;
    while ( v8 );
    v10 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_28:
  if ( v10 == (FurnaceRecipes *)v2 || *((_DWORD *)v10 + 4) > v7 )
    v489 = &v488;
    v10 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v1,
                              (int)v10,
                              (int)&unk_262E438,
                              &v489);
  ItemInstance::operator=((int)v10 + 24, (int)&v478);
  if ( v481 )
    operator delete(v481);
  if ( v480 )
    operator delete(v480);
  if ( v479 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v479 + 4))(v479);
  v479 = 0;
  v11 = *(_BYTE *)(Block::mEmeraldOre + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v474, Item::mEmerald);
  v490 = v11;
  v12 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v12 )
    v13 = (int)v1 + 4;
      v14 = v12;
      while ( *((_DWORD *)v14 + 4) < v11 )
        v14 = (FurnaceRecipes *)*((_DWORD *)v14 + 3);
        if ( !v14 )
          v14 = (FurnaceRecipes *)v13;
          goto LABEL_46;
      v12 = (FurnaceRecipes *)*((_DWORD *)v14 + 2);
      v13 = (int)v14;
    while ( v12 );
    v14 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_46:
  if ( v14 == (FurnaceRecipes *)v2 || *((_DWORD *)v14 + 4) > v11 )
    v491 = &v490;
    v14 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v14,
                              &v491);
  ItemInstance::operator=((int)v14 + 24, (int)&v474);
  if ( v477 )
    operator delete(v477);
  if ( v476 )
    operator delete(v476);
  if ( v475 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v475 + 4))(v475);
  v475 = 0;
  v15 = *(_BYTE *)(Block::mDiamondOre + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v470, Item::mDiamond);
  v492 = v15;
  v16 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v16 )
    v17 = (int)v1 + 4;
      v18 = v16;
      while ( *((_DWORD *)v18 + 4) < v15 )
        v18 = (FurnaceRecipes *)*((_DWORD *)v18 + 3);
        if ( !v18 )
          v18 = (FurnaceRecipes *)v17;
          goto LABEL_64;
      v16 = (FurnaceRecipes *)*((_DWORD *)v18 + 2);
      v17 = (int)v18;
    while ( v16 );
    v18 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_64:
  if ( v18 == (FurnaceRecipes *)v2 || *((_DWORD *)v18 + 4) > v15 )
    v493 = &v492;
    v18 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v18,
                              &v493);
  ItemInstance::operator=((int)v18 + 24, (int)&v470);
  if ( v473 )
    operator delete(v473);
  if ( v472 )
    operator delete(v472);
  if ( v471 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v471 + 4))(v471);
  v471 = 0;
  v19 = *(_BYTE *)(Block::mSand + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v466, Block::mGlass);
  v494 = v19;
  v20 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v20 )
    v21 = (int)v1 + 4;
      v22 = v20;
      while ( *((_DWORD *)v22 + 4) < v19 )
        v22 = (FurnaceRecipes *)*((_DWORD *)v22 + 3);
        if ( !v22 )
          v22 = (FurnaceRecipes *)v21;
          goto LABEL_82;
      v20 = (FurnaceRecipes *)*((_DWORD *)v22 + 2);
      v21 = (int)v22;
    while ( v20 );
    v22 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_82:
  if ( v22 == (FurnaceRecipes *)v2 || *((_DWORD *)v22 + 4) > v19 )
    v495 = &v494;
    v22 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v22,
                              &v495);
  ItemInstance::operator=((int)v22 + 24, (int)&v466);
  if ( v469 )
    operator delete(v469);
  if ( v468 )
    operator delete(v468);
  if ( v467 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v467 + 4))(v467);
  v467 = 0;
  v23 = *(_WORD *)(Item::mPorkChop_raw + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v462, Item::mPorkChop_cooked);
  v496 = v23;
  v24 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v24 )
    v25 = (int)v1 + 4;
      v26 = v24;
      while ( *((_DWORD *)v26 + 4) < v23 )
        v26 = (FurnaceRecipes *)*((_DWORD *)v26 + 3);
        if ( !v26 )
          v26 = (FurnaceRecipes *)v25;
          goto LABEL_100;
      v24 = (FurnaceRecipes *)*((_DWORD *)v26 + 2);
      v25 = (int)v26;
    while ( v24 );
    v26 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_100:
  if ( v26 == (FurnaceRecipes *)v2 || *((_DWORD *)v26 + 4) > v23 )
    v497 = &v496;
    v26 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v26,
                              &v497);
  ItemInstance::operator=((int)v26 + 24, (int)&v462);
  if ( v465 )
    operator delete(v465);
  if ( v464 )
    operator delete(v464);
  if ( v463 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v463 + 4))(v463);
  v463 = 0;
  v27 = *(_WORD *)(Item::mBeef_raw + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v458, Item::mBeef_cooked);
  v498 = v27;
  v28 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v28 )
    v29 = (int)v1 + 4;
      v30 = v28;
      while ( *((_DWORD *)v30 + 4) < v27 )
        v30 = (FurnaceRecipes *)*((_DWORD *)v30 + 3);
        if ( !v30 )
          v30 = (FurnaceRecipes *)v29;
          goto LABEL_118;
      v28 = (FurnaceRecipes *)*((_DWORD *)v30 + 2);
      v29 = (int)v30;
    while ( v28 );
    v30 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_118:
  if ( v30 == (FurnaceRecipes *)v2 || *((_DWORD *)v30 + 4) > v27 )
    v499 = &v498;
    v30 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v30,
                              &v499);
  ItemInstance::operator=((int)v30 + 24, (int)&v458);
  if ( v461 )
    operator delete(v461);
  if ( v460 )
    operator delete(v460);
  if ( v459 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v459 + 4))(v459);
  v459 = 0;
  v31 = *(_WORD *)(Item::mChicken_raw + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v454, Item::mChicken_cooked);
  v500 = v31;
  v32 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v32 )
    v33 = (int)v1 + 4;
      v34 = v32;
      while ( *((_DWORD *)v34 + 4) < v31 )
        v34 = (FurnaceRecipes *)*((_DWORD *)v34 + 3);
        if ( !v34 )
          v34 = (FurnaceRecipes *)v33;
          goto LABEL_136;
      v32 = (FurnaceRecipes *)*((_DWORD *)v34 + 2);
      v33 = (int)v34;
    while ( v32 );
    v34 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_136:
  if ( v34 == (FurnaceRecipes *)v2 || *((_DWORD *)v34 + 4) > v31 )
    v501 = &v500;
    v34 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v34,
                              &v501);
  ItemInstance::operator=((int)v34 + 24, (int)&v454);
  if ( v457 )
    operator delete(v457);
  if ( v456 )
    operator delete(v456);
  if ( v455 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v455 + 4))(v455);
  v455 = 0;
  v35 = *(_WORD *)(Item::mMutton_raw + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v450, Item::mMutton_cooked);
  v502 = v35;
  v36 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v36 )
    v37 = (int)v1 + 4;
      v38 = v36;
      while ( *((_DWORD *)v38 + 4) < v35 )
        v38 = (FurnaceRecipes *)*((_DWORD *)v38 + 3);
        if ( !v38 )
          v38 = (FurnaceRecipes *)v37;
          goto LABEL_154;
      v36 = (FurnaceRecipes *)*((_DWORD *)v38 + 2);
      v37 = (int)v38;
    while ( v36 );
    v38 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_154:
  if ( v38 == (FurnaceRecipes *)v2 || *((_DWORD *)v38 + 4) > v35 )
    v503 = &v502;
    v38 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v38,
                              &v503);
  ItemInstance::operator=((int)v38 + 24, (int)&v450);
  if ( v453 )
    operator delete(v453);
  if ( v452 )
    operator delete(v452);
  if ( v451 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v451 + 4))(v451);
  v451 = 0;
  v39 = *(_WORD *)(Item::mRabbitRaw + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v446, Item::mRabbitCooked);
  v504 = v39;
  v40 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v40 )
    v41 = (int)v1 + 4;
      v42 = v40;
      while ( *((_DWORD *)v42 + 4) < v39 )
        v42 = (FurnaceRecipes *)*((_DWORD *)v42 + 3);
        if ( !v42 )
          v42 = (FurnaceRecipes *)v41;
          goto LABEL_172;
      v40 = (FurnaceRecipes *)*((_DWORD *)v42 + 2);
      v41 = (int)v42;
    while ( v40 );
    v42 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_172:
  if ( v42 == (FurnaceRecipes *)v2 || *((_DWORD *)v42 + 4) > v39 )
    v505 = &v504;
    v42 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v42,
                              &v505);
  ItemInstance::operator=((int)v42 + 24, (int)&v446);
  if ( v449 )
    operator delete(v449);
  if ( v448 )
    operator delete(v448);
  if ( v447 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v447 + 4))(v447);
  v447 = 0;
  v43 = *(_WORD *)(Item::mFish_raw_cod + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v442, Item::mFish_cooked_cod);
  v506 = v43;
  v44 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v44 )
    v45 = (int)v1 + 4;
      v46 = v44;
      while ( *((_DWORD *)v46 + 4) < v43 )
        v46 = (FurnaceRecipes *)*((_DWORD *)v46 + 3);
        if ( !v46 )
          v46 = (FurnaceRecipes *)v45;
          goto LABEL_190;
      v44 = (FurnaceRecipes *)*((_DWORD *)v46 + 2);
      v45 = (int)v46;
    while ( v44 );
    v46 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_190:
  if ( v46 == (FurnaceRecipes *)v2 || *((_DWORD *)v46 + 4) > v43 )
    v507 = &v506;
    v46 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v46,
                              &v507);
  ItemInstance::operator=((int)v46 + 24, (int)&v442);
  if ( v445 )
    operator delete(v445);
  if ( v444 )
    operator delete(v444);
  if ( v443 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v443 + 4))(v443);
  v443 = 0;
  v47 = *(_WORD *)(Item::mFish_raw_salmon + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v438, Item::mFish_cooked_salmon);
  v508 = v47;
  v48 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v48 )
    v49 = (int)v1 + 4;
      v50 = v48;
      while ( *((_DWORD *)v50 + 4) < v47 )
        v50 = (FurnaceRecipes *)*((_DWORD *)v50 + 3);
        if ( !v50 )
          v50 = (FurnaceRecipes *)v49;
          goto LABEL_208;
      v48 = (FurnaceRecipes *)*((_DWORD *)v50 + 2);
      v49 = (int)v50;
    while ( v48 );
    v50 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_208:
  if ( v50 == (FurnaceRecipes *)v2 || *((_DWORD *)v50 + 4) > v47 )
    v509 = &v508;
    v50 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v50,
                              &v509);
  ItemInstance::operator=((int)v50 + 24, (int)&v438);
  if ( v441 )
    operator delete(v441);
  if ( v440 )
    operator delete(v440);
  if ( v439 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v439 + 4))(v439);
  v439 = 0;
  v51 = *(_BYTE *)(Block::mStoneBrick + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v434, Block::mStoneBrick, 1, 2);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v51, 0, (const ItemInstance *)&v434);
  if ( ptr )
    operator delete(ptr);
  if ( v436 )
    operator delete(v436);
  if ( v435 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v435 + 4))(v435);
  v435 = 0;
  v52 = *(_BYTE *)(Block::mSponge + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v430, Block::mSponge, 1, 0);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v52, 1, (const ItemInstance *)&v430);
  if ( v433 )
    operator delete(v433);
  if ( v432 )
    operator delete(v432);
  if ( v431 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v431 + 4))(v431);
  v431 = 0;
  v53 = *(_BYTE *)(Block::mCobblestone + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v426, Block::mStone);
  v510 = v53;
  v54 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v54 )
    v55 = (int)v1 + 4;
      v56 = v54;
      while ( *((_DWORD *)v56 + 4) < v53 )
        v56 = (FurnaceRecipes *)*((_DWORD *)v56 + 3);
        if ( !v56 )
          v56 = (FurnaceRecipes *)v55;
          goto LABEL_238;
      v54 = (FurnaceRecipes *)*((_DWORD *)v56 + 2);
      v55 = (int)v56;
    while ( v54 );
    v56 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_238:
  if ( v56 == (FurnaceRecipes *)v2 || *((_DWORD *)v56 + 4) > v53 )
    v511 = &v510;
    v56 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v56,
                              &v511);
  ItemInstance::operator=((int)v56 + 24, (int)&v426);
  if ( v429 )
    operator delete(v429);
  if ( v428 )
    operator delete(v428);
  if ( v427 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v427 + 4))(v427);
  v427 = 0;
  v57 = *(_WORD *)(Item::mClay + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v422, Item::mBrick);
  v512 = v57;
  v58 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v58 )
    v59 = (int)v1 + 4;
      v60 = v58;
      while ( *((_DWORD *)v60 + 4) < v57 )
        v60 = (FurnaceRecipes *)*((_DWORD *)v60 + 3);
        if ( !v60 )
          v60 = (FurnaceRecipes *)v59;
          goto LABEL_256;
      v58 = (FurnaceRecipes *)*((_DWORD *)v60 + 2);
      v59 = (int)v60;
    while ( v58 );
    v60 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_256:
  if ( v60 == (FurnaceRecipes *)v2 || *((_DWORD *)v60 + 4) > v57 )
    v513 = &v512;
    v60 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v60,
                              &v513);
  ItemInstance::operator=((int)v60 + 24, (int)&v422);
  if ( v425 )
    operator delete(v425);
  if ( v424 )
    operator delete(v424);
  if ( v423 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v423 + 4))(v423);
  v423 = 0;
  v61 = *(_BYTE *)(Block::mCactus + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v418, Item::mDye_powder, 1, 2);
  v514 = v61;
  v62 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v62 )
    v63 = (int)v1 + 4;
      v64 = v62;
      while ( *((_DWORD *)v64 + 4) < v61 )
        v64 = (FurnaceRecipes *)*((_DWORD *)v64 + 3);
        if ( !v64 )
          v64 = (FurnaceRecipes *)v63;
          goto LABEL_274;
      v62 = (FurnaceRecipes *)*((_DWORD *)v64 + 2);
      v63 = (int)v64;
    while ( v62 );
    v64 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_274:
  if ( v64 == (FurnaceRecipes *)v2 || *((_DWORD *)v64 + 4) > v61 )
    v515 = &v514;
    v64 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v64,
                              &v515);
  ItemInstance::operator=((int)v64 + 24, (int)&v418);
  if ( v421 )
    operator delete(v421);
  if ( v420 )
    operator delete(v420);
  if ( v419 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v419 + 4))(v419);
  v419 = 0;
  v65 = *(_BYTE *)(Block::mLog + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v414, Item::mCoal, 1, 1);
  v516 = v65;
  v66 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v66 )
    v67 = (int)v1 + 4;
      v68 = v66;
      while ( *((_DWORD *)v68 + 4) < v65 )
        v68 = (FurnaceRecipes *)*((_DWORD *)v68 + 3);
        if ( !v68 )
          v68 = (FurnaceRecipes *)v67;
          goto LABEL_292;
      v66 = (FurnaceRecipes *)*((_DWORD *)v68 + 2);
      v67 = (int)v68;
    while ( v66 );
    v68 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_292:
  if ( v68 == (FurnaceRecipes *)v2 || *((_DWORD *)v68 + 4) > v65 )
    v517 = &v516;
    v68 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v68,
                              &v517);
  ItemInstance::operator=((int)v68 + 24, (int)&v414);
  if ( v417 )
    operator delete(v417);
  if ( v416 )
    operator delete(v416);
  if ( v415 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v415 + 4))(v415);
  v415 = 0;
  v69 = *(_BYTE *)(Block::mLog2 + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v410, Item::mCoal, 1, 1);
  v518 = v69;
  v70 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v70 )
    v71 = (int)v1 + 4;
      v72 = v70;
      while ( *((_DWORD *)v72 + 4) < v69 )
        v72 = (FurnaceRecipes *)*((_DWORD *)v72 + 3);
        if ( !v72 )
          v72 = (FurnaceRecipes *)v71;
          goto LABEL_310;
      v70 = (FurnaceRecipes *)*((_DWORD *)v72 + 2);
      v71 = (int)v72;
    while ( v70 );
    v72 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_310:
  if ( v72 == (FurnaceRecipes *)v2 || *((_DWORD *)v72 + 4) > v69 )
    v519 = &v518;
    v72 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v72,
                              &v519);
  ItemInstance::operator=((int)v72 + 24, (int)&v410);
  if ( v413 )
    operator delete(v413);
  if ( v412 )
    operator delete(v412);
  if ( v411 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v411 + 4))(v411);
  v411 = 0;
  v73 = *(_BYTE *)(Block::mNetherrack + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v406, Item::mNetherbrick);
  v520 = v73;
  v74 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v74 )
    v75 = (int)v1 + 4;
      v76 = v74;
      while ( *((_DWORD *)v76 + 4) < v73 )
        v76 = (FurnaceRecipes *)*((_DWORD *)v76 + 3);
        if ( !v76 )
          v76 = (FurnaceRecipes *)v75;
          goto LABEL_328;
      v74 = (FurnaceRecipes *)*((_DWORD *)v76 + 2);
      v75 = (int)v76;
    while ( v74 );
    v76 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_328:
  if ( v76 == (FurnaceRecipes *)v2 || *((_DWORD *)v76 + 4) > v73 )
    v521 = &v520;
    v76 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v76,
                              &v521);
  ItemInstance::operator=((int)v76 + 24, (int)&v406);
  if ( v409 )
    operator delete(v409);
  if ( v408 )
    operator delete(v408);
  if ( v407 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v407 + 4))(v407);
  v407 = 0;
  v77 = *(_WORD *)(Item::mPotato + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v402, Item::mPotatoBaked);
  v522 = v77;
  v78 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v78 )
    v79 = (int)v1 + 4;
      v80 = v78;
      while ( *((_DWORD *)v80 + 4) < v77 )
        v80 = (FurnaceRecipes *)*((_DWORD *)v80 + 3);
        if ( !v80 )
          v80 = (FurnaceRecipes *)v79;
          goto LABEL_346;
      v78 = (FurnaceRecipes *)*((_DWORD *)v80 + 2);
      v79 = (int)v80;
    while ( v78 );
    v80 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_346:
  if ( v80 == (FurnaceRecipes *)v2 || *((_DWORD *)v80 + 4) > v77 )
    v523 = &v522;
    v80 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v80,
                              &v523);
  ItemInstance::operator=((int)v80 + 24, (int)&v402);
  if ( v405 )
    operator delete(v405);
  if ( v404 )
    operator delete(v404);
  if ( v403 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v403 + 4))(v403);
  v403 = 0;
  v81 = *(_BYTE *)(Block::mClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v398, Block::mHardenedClay);
  v524 = v81;
  v82 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v82 )
    v83 = (int)v1 + 4;
      v84 = v82;
      while ( *((_DWORD *)v84 + 4) < v81 )
        v84 = (FurnaceRecipes *)*((_DWORD *)v84 + 3);
        if ( !v84 )
          v84 = (FurnaceRecipes *)v83;
          goto LABEL_364;
      v82 = (FurnaceRecipes *)*((_DWORD *)v84 + 2);
      v83 = (int)v84;
    while ( v82 );
    v84 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_364:
  if ( v84 == (FurnaceRecipes *)v2 || *((_DWORD *)v84 + 4) > v81 )
    v525 = &v524;
    v84 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v84,
                              &v525);
  ItemInstance::operator=((int)v84 + 24, (int)&v398);
  if ( v401 )
    operator delete(v401);
  if ( v400 )
    operator delete(v400);
  if ( v399 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v399 + 4))(v399);
  v399 = 0;
  v85 = *(_BYTE *)(Block::mCoalOre + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v394, Item::mCoal);
  v526 = v85;
  v86 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v86 )
    v87 = (int)v1 + 4;
      v88 = v86;
      while ( *((_DWORD *)v88 + 4) < v85 )
        v88 = (FurnaceRecipes *)*((_DWORD *)v88 + 3);
        if ( !v88 )
          v88 = (FurnaceRecipes *)v87;
          goto LABEL_382;
      v86 = (FurnaceRecipes *)*((_DWORD *)v88 + 2);
      v87 = (int)v88;
    while ( v86 );
    v88 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_382:
  if ( v88 == (FurnaceRecipes *)v2 || *((_DWORD *)v88 + 4) > v85 )
    v527 = &v526;
    v88 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v88,
                              &v527);
  ItemInstance::operator=((int)v88 + 24, (int)&v394);
  if ( v397 )
    operator delete(v397);
  if ( v396 )
    operator delete(v396);
  if ( v395 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v395 + 4))(v395);
  v395 = 0;
  v89 = *(_BYTE *)(Block::mRedStoneOre + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v390, Item::mRedStone);
  v528 = v89;
  v90 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v90 )
    v91 = (int)v1 + 4;
      v92 = v90;
      while ( *((_DWORD *)v92 + 4) < v89 )
        v92 = (FurnaceRecipes *)*((_DWORD *)v92 + 3);
        if ( !v92 )
          v92 = (FurnaceRecipes *)v91;
          goto LABEL_400;
      v90 = (FurnaceRecipes *)*((_DWORD *)v92 + 2);
      v91 = (int)v92;
    while ( v90 );
    v92 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_400:
  if ( v92 == (FurnaceRecipes *)v2 || *((_DWORD *)v92 + 4) > v89 )
    v529 = &v528;
    v92 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v92,
                              &v529);
  ItemInstance::operator=((int)v92 + 24, (int)&v390);
  if ( v393 )
    operator delete(v393);
  if ( v392 )
    operator delete(v392);
  if ( v391 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v391 + 4))(v391);
  v391 = 0;
  v93 = *(_BYTE *)(Block::mLapisOre + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v386, Item::mDye_powder, 1, 4);
  v530 = v93;
  v94 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v94 )
    v95 = (int)v1 + 4;
      v96 = v94;
      while ( *((_DWORD *)v96 + 4) < v93 )
        v96 = (FurnaceRecipes *)*((_DWORD *)v96 + 3);
        if ( !v96 )
          v96 = (FurnaceRecipes *)v95;
          goto LABEL_418;
      v94 = (FurnaceRecipes *)*((_DWORD *)v96 + 2);
      v95 = (int)v96;
    while ( v94 );
    v96 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_418:
  if ( v96 == (FurnaceRecipes *)v2 || *((_DWORD *)v96 + 4) > v93 )
    v531 = &v530;
    v96 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                              (int)v96,
                              &v531);
  ItemInstance::operator=((int)v96 + 24, (int)&v386);
  if ( v389 )
    operator delete(v389);
  if ( v388 )
    operator delete(v388);
  if ( v387 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v387 + 4))(v387);
  v387 = 0;
  v97 = *(_BYTE *)(Block::mQuartzOre + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v382, Item::mNetherQuartz, 1);
  v532 = v97;
  v98 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v98 )
    v99 = (int)v1 + 4;
      v100 = v98;
      while ( *((_DWORD *)v100 + 4) < v97 )
        v100 = (FurnaceRecipes *)*((_DWORD *)v100 + 3);
        if ( !v100 )
          v100 = (FurnaceRecipes *)v99;
          goto LABEL_436;
      v98 = (FurnaceRecipes *)*((_DWORD *)v100 + 2);
      v99 = (int)v100;
    while ( v98 );
    v100 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_436:
  if ( v100 == (FurnaceRecipes *)v2 || *((_DWORD *)v100 + 4) > v97 )
    v533 = &v532;
    v100 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v1,
                               (int)v100,
                               (int)&unk_262E438,
                               &v533);
  ItemInstance::operator=((int)v100 + 24, (int)&v382);
  if ( v385 )
    operator delete(v385);
  if ( v384 )
    operator delete(v384);
  if ( v383 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v383 + 4))(v383);
  v383 = 0;
  v101 = *(_WORD *)(Item::mChorusFruit + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v378, Item::mChorusFruitPopped);
  v534 = v101;
  v102 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v102 )
    v103 = (int)v1 + 4;
      v104 = v102;
      while ( *((_DWORD *)v104 + 4) < v101 )
        v104 = (FurnaceRecipes *)*((_DWORD *)v104 + 3);
        if ( !v104 )
          v104 = (FurnaceRecipes *)v103;
          goto LABEL_454;
      v102 = (FurnaceRecipes *)*((_DWORD *)v104 + 2);
      v103 = (int)v104;
    while ( v102 );
    v104 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_454:
  if ( v104 == (FurnaceRecipes *)v2 || *((_DWORD *)v104 + 4) > v101 )
    v535 = &v534;
    v104 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v104,
                               &v535);
  ItemInstance::operator=((int)v104 + 24, (int)&v378);
  if ( v381 )
    operator delete(v381);
  if ( v380 )
    operator delete(v380);
  if ( v379 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v379 + 4))(v379);
  v379 = 0;
  v105 = *(_WORD *)(Item::mSword_iron + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v374, Item::mIron_nugget, 1);
  v536 = v105;
  v106 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v106 )
    v107 = (int)v1 + 4;
      v108 = v106;
      while ( *((_DWORD *)v108 + 4) < v105 )
        v108 = (FurnaceRecipes *)*((_DWORD *)v108 + 3);
        if ( !v108 )
          v108 = (FurnaceRecipes *)v107;
          goto LABEL_472;
      v106 = (FurnaceRecipes *)*((_DWORD *)v108 + 2);
      v107 = (int)v108;
    while ( v106 );
    v108 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_472:
  if ( v108 == (FurnaceRecipes *)v2 || *((_DWORD *)v108 + 4) > v105 )
    v537 = &v536;
    v108 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v108,
                               &v537);
  ItemInstance::operator=((int)v108 + 24, (int)&v374);
  if ( v377 )
    operator delete(v377);
  if ( v376 )
    operator delete(v376);
  if ( v375 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v375 + 4))(v375);
  v375 = 0;
  v109 = *(_WORD *)(Item::mPickAxe_iron + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v370, Item::mIron_nugget, 1);
  v538 = v109;
  v110 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v110 )
    v111 = (int)v1 + 4;
      v112 = v110;
      while ( *((_DWORD *)v112 + 4) < v109 )
        v112 = (FurnaceRecipes *)*((_DWORD *)v112 + 3);
        if ( !v112 )
          v112 = (FurnaceRecipes *)v111;
          goto LABEL_490;
      v110 = (FurnaceRecipes *)*((_DWORD *)v112 + 2);
      v111 = (int)v112;
    while ( v110 );
    v112 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_490:
  if ( v112 == (FurnaceRecipes *)v2 || *((_DWORD *)v112 + 4) > v109 )
    v539 = &v538;
    v112 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v112,
                               &v539);
  ItemInstance::operator=((int)v112 + 24, (int)&v370);
  if ( v373 )
    operator delete(v373);
  if ( v372 )
    operator delete(v372);
  if ( v371 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v371 + 4))(v371);
  v371 = 0;
  v113 = *(_WORD *)(Item::mHatchet_iron + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v366, Item::mIron_nugget, 1);
  v540 = v113;
  v114 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v114 )
    v115 = (int)v1 + 4;
      v116 = v114;
      while ( *((_DWORD *)v116 + 4) < v113 )
        v116 = (FurnaceRecipes *)*((_DWORD *)v116 + 3);
        if ( !v116 )
          v116 = (FurnaceRecipes *)v115;
          goto LABEL_508;
      v114 = (FurnaceRecipes *)*((_DWORD *)v116 + 2);
      v115 = (int)v116;
    while ( v114 );
    v116 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_508:
  if ( v116 == (FurnaceRecipes *)v2 || *((_DWORD *)v116 + 4) > v113 )
    v541 = &v540;
    v116 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v116,
                               &v541);
  ItemInstance::operator=((int)v116 + 24, (int)&v366);
  if ( v369 )
    operator delete(v369);
  if ( v368 )
    operator delete(v368);
  if ( v367 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v367 + 4))(v367);
  v367 = 0;
  v117 = *(_WORD *)(Item::mShovel_iron + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v362, Item::mIron_nugget, 1);
  v542 = v117;
  v118 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v118 )
    v119 = (int)v1 + 4;
      v120 = v118;
      while ( *((_DWORD *)v120 + 4) < v117 )
        v120 = (FurnaceRecipes *)*((_DWORD *)v120 + 3);
        if ( !v120 )
          v120 = (FurnaceRecipes *)v119;
          goto LABEL_526;
      v118 = (FurnaceRecipes *)*((_DWORD *)v120 + 2);
      v119 = (int)v120;
    while ( v118 );
    v120 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_526:
  if ( v120 == (FurnaceRecipes *)v2 || *((_DWORD *)v120 + 4) > v117 )
    v543 = &v542;
    v120 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v120,
                               &v543);
  ItemInstance::operator=((int)v120 + 24, (int)&v362);
  if ( v365 )
    operator delete(v365);
  if ( v364 )
    operator delete(v364);
  if ( v363 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v363 + 4))(v363);
  v363 = 0;
  v121 = *(_WORD *)(Item::mHoe_iron + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v358, Item::mIron_nugget, 1);
  v544 = v121;
  v122 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v122 )
    v123 = (int)v1 + 4;
      v124 = v122;
      while ( *((_DWORD *)v124 + 4) < v121 )
        v124 = (FurnaceRecipes *)*((_DWORD *)v124 + 3);
        if ( !v124 )
          v124 = (FurnaceRecipes *)v123;
          goto LABEL_544;
      v122 = (FurnaceRecipes *)*((_DWORD *)v124 + 2);
      v123 = (int)v124;
    while ( v122 );
    v124 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_544:
  if ( v124 == (FurnaceRecipes *)v2 || *((_DWORD *)v124 + 4) > v121 )
    v545 = &v544;
    v124 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v124,
                               &v545);
  ItemInstance::operator=((int)v124 + 24, (int)&v358);
  if ( v361 )
    operator delete(v361);
  if ( v360 )
    operator delete(v360);
  if ( v359 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v359 + 4))(v359);
  v359 = 0;
  v125 = *(_WORD *)(Item::mHelmet_chain + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v354, Item::mIron_nugget, 1);
  v546 = v125;
  v126 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v126 )
    v127 = (int)v1 + 4;
      v128 = v126;
      while ( *((_DWORD *)v128 + 4) < v125 )
        v128 = (FurnaceRecipes *)*((_DWORD *)v128 + 3);
        if ( !v128 )
          v128 = (FurnaceRecipes *)v127;
          goto LABEL_562;
      v126 = (FurnaceRecipes *)*((_DWORD *)v128 + 2);
      v127 = (int)v128;
    while ( v126 );
    v128 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_562:
  if ( v128 == (FurnaceRecipes *)v2 || *((_DWORD *)v128 + 4) > v125 )
    v547 = &v546;
    v128 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v128,
                               &v547);
  ItemInstance::operator=((int)v128 + 24, (int)&v354);
  if ( v357 )
    operator delete(v357);
  if ( v356 )
    operator delete(v356);
  if ( v355 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v355 + 4))(v355);
  v355 = 0;
  v129 = *(_WORD *)(Item::mChestplate_chain + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v350, Item::mIron_nugget, 1);
  v548 = v129;
  v130 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v130 )
    v131 = (int)v1 + 4;
      v132 = v130;
      while ( *((_DWORD *)v132 + 4) < v129 )
        v132 = (FurnaceRecipes *)*((_DWORD *)v132 + 3);
        if ( !v132 )
          v132 = (FurnaceRecipes *)v131;
          goto LABEL_580;
      v130 = (FurnaceRecipes *)*((_DWORD *)v132 + 2);
      v131 = (int)v132;
    while ( v130 );
    v132 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_580:
  if ( v132 == (FurnaceRecipes *)v2 || *((_DWORD *)v132 + 4) > v129 )
    v549 = &v548;
    v132 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v132,
                               &v549);
  ItemInstance::operator=((int)v132 + 24, (int)&v350);
  if ( v353 )
    operator delete(v353);
  if ( v352 )
    operator delete(v352);
  if ( v351 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v351 + 4))(v351);
  v351 = 0;
  v133 = *(_WORD *)(Item::mLeggings_chain + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v346, Item::mIron_nugget, 1);
  v550 = v133;
  v134 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v134 )
    v135 = (int)v1 + 4;
      v136 = v134;
      while ( *((_DWORD *)v136 + 4) < v133 )
        v136 = (FurnaceRecipes *)*((_DWORD *)v136 + 3);
        if ( !v136 )
          v136 = (FurnaceRecipes *)v135;
          goto LABEL_598;
      v134 = (FurnaceRecipes *)*((_DWORD *)v136 + 2);
      v135 = (int)v136;
    while ( v134 );
    v136 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_598:
  if ( v136 == (FurnaceRecipes *)v2 || *((_DWORD *)v136 + 4) > v133 )
    v551 = &v550;
    v136 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v136,
                               &v551);
  ItemInstance::operator=((int)v136 + 24, (int)&v346);
  if ( v349 )
    operator delete(v349);
  if ( v348 )
    operator delete(v348);
  if ( v347 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v347 + 4))(v347);
  v347 = 0;
  v137 = *(_WORD *)(Item::mBoots_chain + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v342, Item::mIron_nugget, 1);
  v552 = v137;
  v138 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v138 )
    v139 = (int)v1 + 4;
      v140 = v138;
      while ( *((_DWORD *)v140 + 4) < v137 )
        v140 = (FurnaceRecipes *)*((_DWORD *)v140 + 3);
        if ( !v140 )
          v140 = (FurnaceRecipes *)v139;
          goto LABEL_616;
      v138 = (FurnaceRecipes *)*((_DWORD *)v140 + 2);
      v139 = (int)v140;
    while ( v138 );
    v140 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_616:
  if ( v140 == (FurnaceRecipes *)v2 || *((_DWORD *)v140 + 4) > v137 )
    v553 = &v552;
    v140 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v140,
                               &v553);
  ItemInstance::operator=((int)v140 + 24, (int)&v342);
  if ( v345 )
    operator delete(v345);
  if ( v344 )
    operator delete(v344);
  if ( v343 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v343 + 4))(v343);
  v343 = 0;
  v141 = *(_WORD *)(Item::mHelmet_iron + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v338, Item::mIron_nugget, 1);
  v554 = v141;
  v142 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v142 )
    v143 = (int)v1 + 4;
      v144 = v142;
      while ( *((_DWORD *)v144 + 4) < v141 )
        v144 = (FurnaceRecipes *)*((_DWORD *)v144 + 3);
        if ( !v144 )
          v144 = (FurnaceRecipes *)v143;
          goto LABEL_634;
      v142 = (FurnaceRecipes *)*((_DWORD *)v144 + 2);
      v143 = (int)v144;
    while ( v142 );
    v144 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_634:
  if ( v144 == (FurnaceRecipes *)v2 || *((_DWORD *)v144 + 4) > v141 )
    v555 = &v554;
    v144 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v144,
                               &v555);
  ItemInstance::operator=((int)v144 + 24, (int)&v338);
  if ( v341 )
    operator delete(v341);
  if ( v340 )
    operator delete(v340);
  if ( v339 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v339 + 4))(v339);
  v339 = 0;
  v145 = *(_WORD *)(Item::mChestplate_iron + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v334, Item::mIron_nugget, 1);
  v556 = v145;
  v146 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v146 )
    v147 = (int)v1 + 4;
      v148 = v146;
      while ( *((_DWORD *)v148 + 4) < v145 )
        v148 = (FurnaceRecipes *)*((_DWORD *)v148 + 3);
        if ( !v148 )
          v148 = (FurnaceRecipes *)v147;
          goto LABEL_652;
      v146 = (FurnaceRecipes *)*((_DWORD *)v148 + 2);
      v147 = (int)v148;
    while ( v146 );
    v148 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_652:
  if ( v148 == (FurnaceRecipes *)v2 || *((_DWORD *)v148 + 4) > v145 )
    v557 = &v556;
    v148 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v148,
                               &v557);
  ItemInstance::operator=((int)v148 + 24, (int)&v334);
  if ( v337 )
    operator delete(v337);
  if ( v336 )
    operator delete(v336);
  if ( v335 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v335 + 4))(v335);
  v335 = 0;
  v149 = *(_WORD *)(Item::mLeggings_iron + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v330, Item::mIron_nugget, 1);
  v558 = v149;
  v150 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v150 )
    v151 = (int)v1 + 4;
      v152 = v150;
      while ( *((_DWORD *)v152 + 4) < v149 )
        v152 = (FurnaceRecipes *)*((_DWORD *)v152 + 3);
        if ( !v152 )
          v152 = (FurnaceRecipes *)v151;
          goto LABEL_670;
      v150 = (FurnaceRecipes *)*((_DWORD *)v152 + 2);
      v151 = (int)v152;
    while ( v150 );
    v152 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_670:
  if ( v152 == (FurnaceRecipes *)v2 || *((_DWORD *)v152 + 4) > v149 )
    v559 = &v558;
    v152 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v152,
                               &v559);
  ItemInstance::operator=((int)v152 + 24, (int)&v330);
  if ( v333 )
    operator delete(v333);
  if ( v332 )
    operator delete(v332);
  if ( v331 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v331 + 4))(v331);
  v331 = 0;
  v153 = *(_WORD *)(Item::mBoots_iron + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v326, Item::mIron_nugget, 1);
  v560 = v153;
  v154 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v154 )
    v155 = (int)v1 + 4;
      v156 = v154;
      while ( *((_DWORD *)v156 + 4) < v153 )
        v156 = (FurnaceRecipes *)*((_DWORD *)v156 + 3);
        if ( !v156 )
          v156 = (FurnaceRecipes *)v155;
          goto LABEL_688;
      v154 = (FurnaceRecipes *)*((_DWORD *)v156 + 2);
      v155 = (int)v156;
    while ( v154 );
    v156 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_688:
  if ( v156 == (FurnaceRecipes *)v2 || *((_DWORD *)v156 + 4) > v153 )
    v561 = &v560;
    v156 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v156,
                               &v561);
  ItemInstance::operator=((int)v156 + 24, (int)&v326);
  if ( v329 )
    operator delete(v329);
  if ( v328 )
    operator delete(v328);
  if ( v327 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v327 + 4))(v327);
  v327 = 0;
  v157 = *(_WORD *)(Item::mIronHorseArmor + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v322, Item::mIron_nugget, 1);
  v562 = v157;
  v158 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v158 )
    v159 = (int)v1 + 4;
      v160 = v158;
      while ( *((_DWORD *)v160 + 4) < v157 )
        v160 = (FurnaceRecipes *)*((_DWORD *)v160 + 3);
        if ( !v160 )
          v160 = (FurnaceRecipes *)v159;
          goto LABEL_706;
      v158 = (FurnaceRecipes *)*((_DWORD *)v160 + 2);
      v159 = (int)v160;
    while ( v158 );
    v160 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_706:
  if ( v160 == (FurnaceRecipes *)v2 || *((_DWORD *)v160 + 4) > v157 )
    v563 = &v562;
    v160 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v160,
                               &v563);
  ItemInstance::operator=((int)v160 + 24, (int)&v322);
  if ( v325 )
    operator delete(v325);
  if ( v324 )
    operator delete(v324);
  if ( v323 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v323 + 4))(v323);
  v323 = 0;
  v161 = *(_WORD *)(Item::mSword_gold + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v318, Item::mGold_nugget, 1);
  v564 = v161;
  v162 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v162 )
    v163 = (int)v1 + 4;
      v164 = v162;
      while ( *((_DWORD *)v164 + 4) < v161 )
        v164 = (FurnaceRecipes *)*((_DWORD *)v164 + 3);
        if ( !v164 )
          v164 = (FurnaceRecipes *)v163;
          goto LABEL_724;
      v162 = (FurnaceRecipes *)*((_DWORD *)v164 + 2);
      v163 = (int)v164;
    while ( v162 );
    v164 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_724:
  if ( v164 == (FurnaceRecipes *)v2 || *((_DWORD *)v164 + 4) > v161 )
    v565 = &v564;
    v164 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v164,
                               &v565);
  ItemInstance::operator=((int)v164 + 24, (int)&v318);
  if ( v321 )
    operator delete(v321);
  if ( v320 )
    operator delete(v320);
  if ( v319 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v319 + 4))(v319);
  v319 = 0;
  v165 = *(_WORD *)(Item::mPickAxe_gold + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v314, Item::mGold_nugget, 1);
  v566 = v165;
  v166 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v166 )
    v167 = (int)v1 + 4;
      v168 = v166;
      while ( *((_DWORD *)v168 + 4) < v165 )
        v168 = (FurnaceRecipes *)*((_DWORD *)v168 + 3);
        if ( !v168 )
          v168 = (FurnaceRecipes *)v167;
          goto LABEL_742;
      v166 = (FurnaceRecipes *)*((_DWORD *)v168 + 2);
      v167 = (int)v168;
    while ( v166 );
    v168 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_742:
  if ( v168 == (FurnaceRecipes *)v2 || *((_DWORD *)v168 + 4) > v165 )
    v567 = &v566;
    v168 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v168,
                               &v567);
  ItemInstance::operator=((int)v168 + 24, (int)&v314);
  if ( v317 )
    operator delete(v317);
  if ( v316 )
    operator delete(v316);
  if ( v315 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v315 + 4))(v315);
  v315 = 0;
  v169 = *(_WORD *)(Item::mHatchet_gold + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v310, Item::mGold_nugget, 1);
  v568 = v169;
  v170 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v170 )
    v171 = (int)v1 + 4;
      v172 = v170;
      while ( *((_DWORD *)v172 + 4) < v169 )
        v172 = (FurnaceRecipes *)*((_DWORD *)v172 + 3);
        if ( !v172 )
          v172 = (FurnaceRecipes *)v171;
          goto LABEL_760;
      v170 = (FurnaceRecipes *)*((_DWORD *)v172 + 2);
      v171 = (int)v172;
    while ( v170 );
    v172 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_760:
  if ( v172 == (FurnaceRecipes *)v2 || *((_DWORD *)v172 + 4) > v169 )
    v569 = &v568;
    v172 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v172,
                               &v569);
  ItemInstance::operator=((int)v172 + 24, (int)&v310);
  if ( v313 )
    operator delete(v313);
  if ( v312 )
    operator delete(v312);
  if ( v311 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v311 + 4))(v311);
  v311 = 0;
  v173 = *(_WORD *)(Item::mShovel_gold + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v306, Item::mGold_nugget, 1);
  v570 = v173;
  v174 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v174 )
    v175 = (int)v1 + 4;
      v176 = v174;
      while ( *((_DWORD *)v176 + 4) < v173 )
        v176 = (FurnaceRecipes *)*((_DWORD *)v176 + 3);
        if ( !v176 )
          v176 = (FurnaceRecipes *)v175;
          goto LABEL_778;
      v174 = (FurnaceRecipes *)*((_DWORD *)v176 + 2);
      v175 = (int)v176;
    while ( v174 );
    v176 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_778:
  if ( v176 == (FurnaceRecipes *)v2 || *((_DWORD *)v176 + 4) > v173 )
    v571 = &v570;
    v176 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v176,
                               &v571);
  ItemInstance::operator=((int)v176 + 24, (int)&v306);
  if ( v309 )
    operator delete(v309);
  if ( v308 )
    operator delete(v308);
  if ( v307 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v307 + 4))(v307);
  v307 = 0;
  v177 = *(_WORD *)(Item::mHoe_gold + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v302, Item::mGold_nugget, 1);
  v572 = v177;
  v178 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v178 )
    v179 = (int)v1 + 4;
      v180 = v178;
      while ( *((_DWORD *)v180 + 4) < v177 )
        v180 = (FurnaceRecipes *)*((_DWORD *)v180 + 3);
        if ( !v180 )
          v180 = (FurnaceRecipes *)v179;
          goto LABEL_796;
      v178 = (FurnaceRecipes *)*((_DWORD *)v180 + 2);
      v179 = (int)v180;
    while ( v178 );
    v180 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_796:
  if ( v180 == (FurnaceRecipes *)v2 || *((_DWORD *)v180 + 4) > v177 )
    v573 = &v572;
    v180 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v180,
                               &v573);
  ItemInstance::operator=((int)v180 + 24, (int)&v302);
  if ( v305 )
    operator delete(v305);
  if ( v304 )
    operator delete(v304);
  if ( v303 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v303 + 4))(v303);
  v303 = 0;
  v181 = *(_WORD *)(Item::mHelmet_gold + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v298, Item::mGold_nugget, 1);
  v574 = v181;
  v182 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v182 )
    v183 = (int)v1 + 4;
      v184 = v182;
      while ( *((_DWORD *)v184 + 4) < v181 )
        v184 = (FurnaceRecipes *)*((_DWORD *)v184 + 3);
        if ( !v184 )
          v184 = (FurnaceRecipes *)v183;
          goto LABEL_814;
      v182 = (FurnaceRecipes *)*((_DWORD *)v184 + 2);
      v183 = (int)v184;
    while ( v182 );
    v184 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_814:
  if ( v184 == (FurnaceRecipes *)v2 || *((_DWORD *)v184 + 4) > v181 )
    v575 = &v574;
    v184 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v184,
                               &v575);
  ItemInstance::operator=((int)v184 + 24, (int)&v298);
  if ( v301 )
    operator delete(v301);
  if ( v300 )
    operator delete(v300);
  if ( v299 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v299 + 4))(v299);
  v299 = 0;
  v185 = *(_WORD *)(Item::mChestplate_gold + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v294, Item::mGold_nugget, 1);
  v576 = v185;
  v186 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v186 )
    v187 = (int)v1 + 4;
      v188 = v186;
      while ( *((_DWORD *)v188 + 4) < v185 )
        v188 = (FurnaceRecipes *)*((_DWORD *)v188 + 3);
        if ( !v188 )
          v188 = (FurnaceRecipes *)v187;
          goto LABEL_832;
      v186 = (FurnaceRecipes *)*((_DWORD *)v188 + 2);
      v187 = (int)v188;
    while ( v186 );
    v188 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_832:
  if ( v188 == (FurnaceRecipes *)v2 || *((_DWORD *)v188 + 4) > v185 )
    v577 = &v576;
    v188 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v188,
                               &v577);
  ItemInstance::operator=((int)v188 + 24, (int)&v294);
  if ( v297 )
    operator delete(v297);
  if ( v296 )
    operator delete(v296);
  if ( v295 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v295 + 4))(v295);
  v295 = 0;
  v189 = *(_WORD *)(Item::mLeggings_gold + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v290, Item::mGold_nugget, 1);
  v578 = v189;
  v190 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v190 )
    v191 = (int)v1 + 4;
      v192 = v190;
      while ( *((_DWORD *)v192 + 4) < v189 )
        v192 = (FurnaceRecipes *)*((_DWORD *)v192 + 3);
        if ( !v192 )
          v192 = (FurnaceRecipes *)v191;
          goto LABEL_850;
      v190 = (FurnaceRecipes *)*((_DWORD *)v192 + 2);
      v191 = (int)v192;
    while ( v190 );
    v192 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_850:
  if ( v192 == (FurnaceRecipes *)v2 || *((_DWORD *)v192 + 4) > v189 )
    v579 = &v578;
    v192 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v192,
                               &v579);
  ItemInstance::operator=((int)v192 + 24, (int)&v290);
  if ( v293 )
    operator delete(v293);
  if ( v292 )
    operator delete(v292);
  if ( v291 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v291 + 4))(v291);
  v291 = 0;
  v193 = *(_WORD *)(Item::mBoots_gold + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v286, Item::mGold_nugget, 1);
  v580 = v193;
  v194 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v194 )
    v195 = (int)v1 + 4;
      v196 = v194;
      while ( *((_DWORD *)v196 + 4) < v193 )
        v196 = (FurnaceRecipes *)*((_DWORD *)v196 + 3);
        if ( !v196 )
          v196 = (FurnaceRecipes *)v195;
          goto LABEL_868;
      v194 = (FurnaceRecipes *)*((_DWORD *)v196 + 2);
      v195 = (int)v196;
    while ( v194 );
    v196 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_868:
  if ( v196 == (FurnaceRecipes *)v2 || *((_DWORD *)v196 + 4) > v193 )
    v581 = &v580;
    v196 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v196,
                               &v581);
  ItemInstance::operator=((int)v196 + 24, (int)&v286);
  if ( v289 )
    operator delete(v289);
  if ( v288 )
    operator delete(v288);
  if ( v287 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v287 + 4))(v287);
  v287 = 0;
  v197 = *(_WORD *)(Item::mGoldHorseArmor + 18);
  ItemInstance::ItemInstance((ItemInstance *)&v282, Item::mGold_nugget, 1);
  v582 = v197;
  v198 = (FurnaceRecipes *)*((_DWORD *)v1 + 2);
  if ( v198 )
    v199 = (int)v1 + 4;
      v200 = v198;
      while ( *((_DWORD *)v200 + 4) < v197 )
        v200 = (FurnaceRecipes *)*((_DWORD *)v200 + 3);
        if ( !v200 )
          v200 = (FurnaceRecipes *)v199;
          goto LABEL_886;
      v198 = (FurnaceRecipes *)*((_DWORD *)v200 + 2);
      v199 = (int)v200;
    while ( v198 );
    v200 = (FurnaceRecipes *)((char *)v1 + 4);
LABEL_886:
  if ( v200 == (FurnaceRecipes *)v2 || *((_DWORD *)v200 + 4) > v197 )
    v583 = &v582;
    v200 = (FurnaceRecipes *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                               (int)v200,
                               &v583);
  ItemInstance::operator=((int)v200 + 24, (int)&v282);
  if ( v285 )
    operator delete(v285);
  if ( v284 )
    operator delete(v284);
  if ( v283 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v283 + 4))(v283);
  v283 = 0;
  v201 = *(_BYTE *)(Block::mStainedClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v278, Block::mGlazedTerracottaWhite, 1);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v201, 0, (const ItemInstance *)&v278);
  if ( v281 )
    operator delete(v281);
  if ( v280 )
    operator delete(v280);
  if ( v279 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v279 + 4))(v279);
  v279 = 0;
  v202 = *(_BYTE *)(Block::mStainedClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v274, Block::mGlazedTerracottaOrange, 1);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v202, 1, (const ItemInstance *)&v274);
  if ( v277 )
    operator delete(v277);
  if ( v276 )
    operator delete(v276);
  if ( v275 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v275 + 4))(v275);
  v275 = 0;
  v203 = *(_BYTE *)(Block::mStainedClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v270, Block::mGlazedTerracottaMagenta, 1);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v203, 2, (const ItemInstance *)&v270);
  if ( v273 )
    operator delete(v273);
  if ( v272 )
    operator delete(v272);
  if ( v271 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v271 + 4))(v271);
  v271 = 0;
  v204 = *(_BYTE *)(Block::mStainedClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v266, Block::mGlazedTerracottaLightBlue, 1);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v204, 3, (const ItemInstance *)&v266);
  if ( v269 )
    operator delete(v269);
  if ( v268 )
    operator delete(v268);
  if ( v267 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v267 + 4))(v267);
  v267 = 0;
  v205 = *(_BYTE *)(Block::mStainedClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v262, Block::mGlazedTerracottaYellow, 1);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v205, 4, (const ItemInstance *)&v262);
  if ( v265 )
    operator delete(v265);
  if ( v264 )
    operator delete(v264);
  if ( v263 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v263 + 4))(v263);
  v263 = 0;
  v206 = *(_BYTE *)(Block::mStainedClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v258, Block::mGlazedTerracottaLime, 1);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v206, 5, (const ItemInstance *)&v258);
  if ( v261 )
    operator delete(v261);
  if ( v260 )
    operator delete(v260);
  if ( v259 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v259 + 4))(v259);
  v259 = 0;
  v207 = *(_BYTE *)(Block::mStainedClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v254, Block::mGlazedTerracottaPink, 1);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v207, 6, (const ItemInstance *)&v254);
  if ( v257 )
    operator delete(v257);
  if ( v256 )
    operator delete(v256);
  if ( v255 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v255 + 4))(v255);
  v255 = 0;
  v208 = *(_BYTE *)(Block::mStainedClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v250, Block::mGlazedTerracottaGray, 1);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v208, 7, (const ItemInstance *)&v250);
  if ( v253 )
    operator delete(v253);
  if ( v252 )
    operator delete(v252);
  if ( v251 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v251 + 4))(v251);
  v251 = 0;
  v209 = *(_BYTE *)(Block::mStainedClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v246, Block::mGlazedTerracottaSilver, 1);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v209, 8, (const ItemInstance *)&v246);
  if ( v249 )
    operator delete(v249);
  if ( v248 )
    operator delete(v248);
  if ( v247 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v247 + 4))(v247);
  v247 = 0;
  v210 = *(_BYTE *)(Block::mStainedClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v242, Block::mGlazedTerracottaCyan, 1);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v210, 9, (const ItemInstance *)&v242);
  if ( v245 )
    operator delete(v245);
  if ( v244 )
    operator delete(v244);
  if ( v243 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v243 + 4))(v243);
  v243 = 0;
  v211 = *(_BYTE *)(Block::mStainedClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v238, Block::mGlazedTerracottaPurple, 1);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v211, 10, (const ItemInstance *)&v238);
  if ( v241 )
    operator delete(v241);
  if ( v240 )
    operator delete(v240);
  if ( v239 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v239 + 4))(v239);
  v239 = 0;
  v212 = *(_BYTE *)(Block::mStainedClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v234, Block::mGlazedTerracottaBlue, 1);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v212, 11, (const ItemInstance *)&v234);
  if ( v237 )
    operator delete(v237);
  if ( v236 )
    operator delete(v236);
  if ( v235 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v235 + 4))(v235);
  v235 = 0;
  v213 = *(_BYTE *)(Block::mStainedClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v230, Block::mGlazedTerracottaBrown, 1);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v213, 12, (const ItemInstance *)&v230);
  if ( v233 )
    operator delete(v233);
  if ( v232 )
    operator delete(v232);
  if ( v231 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v231 + 4))(v231);
  v231 = 0;
  v214 = *(_BYTE *)(Block::mStainedClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v226, Block::mGlazedTerracottaGreen, 1);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v214, 13, (const ItemInstance *)&v226);
  if ( v229 )
    operator delete(v229);
  if ( v228 )
    operator delete(v228);
  if ( v227 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v227 + 4))(v227);
  v227 = 0;
  v215 = *(_BYTE *)(Block::mStainedClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v222, Block::mGlazedTerracottaRed, 1);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v215, 14, (const ItemInstance *)&v222);
  if ( v225 )
    operator delete(v225);
  if ( v224 )
    operator delete(v224);
  if ( v223 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v223 + 4))(v223);
  v223 = 0;
  v216 = *(_BYTE *)(Block::mStainedClay + 4);
  ItemInstance::ItemInstance((ItemInstance *)&v218, Block::mGlazedTerracottaBlack, 1);
  FurnaceRecipes::addFurnaceRecipeAuxData(v1, v216, 15, (const ItemInstance *)&v218);
  if ( v221 )
    operator delete(v221);
  if ( v220 )
    operator delete(v220);
  result = v219;
  if ( v219 )
    result = (*(int (__cdecl **)(int))(*(_DWORD *)v219 + 4))(v219);
  return result;
}


int __fastcall FurnaceRecipes::addFurnaceRecipe(FurnaceRecipes *this, int a2, const ItemInstance *a3)
{
  const ItemInstance *v3; // r6@1
  char *v4; // r5@1
  char *v5; // r3@2
  char *v6; // r4@3
  int v8; // [sp+4h] [bp-1Ch]@1
  int *v9; // [sp+Ch] [bp-14h]@12

  v8 = a2;
  v3 = a3;
  v4 = (char *)*((_DWORD *)this + 2);
  if ( v4 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v4;
      while ( *((_DWORD *)v6 + 4) < a2 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v4 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v4 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == (char *)this + 4 || *((_DWORD *)v6 + 4) > a2 )
    v9 = &v8;
    v6 = (char *)j__ZNSt8_Rb_treeIiSt4pairIKi12ItemInstanceESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_(
                   (int)this,
                   (int)v6,
                   (int)&unk_262E438,
                   &v9);
  return ItemInstance::operator=((int)(v6 + 24), (int)v3);
}


FurnaceRecipes *__fastcall FurnaceRecipes::getInstance(FurnaceRecipes *this)
{
  FurnaceRecipes *v1; // r4@1
  int v2; // r5@2

  v1 = (FurnaceRecipes *)FurnaceRecipes::mInstance;
  if ( !FurnaceRecipes::mInstance )
  {
    v1 = (FurnaceRecipes *)operator new(0x30u);
    *((_DWORD *)v1 + 2) = 0;
    *((_DWORD *)v1 + 3) = 0;
    *((_DWORD *)v1 + 4) = 0;
    *((_DWORD *)v1 + 5) = 0;
    *((_DWORD *)v1 + 1) = 0;
    *((_DWORD *)v1 + 3) = (char *)v1 + 4;
    *((_DWORD *)v1 + 4) = (char *)v1 + 4;
    *((_DWORD *)v1 + 8) = 0;
    *((_DWORD *)v1 + 9) = 0;
    *((_DWORD *)v1 + 10) = 0;
    *((_DWORD *)v1 + 11) = 0;
    *((_DWORD *)v1 + 7) = 0;
    *((_DWORD *)v1 + 9) = (char *)v1 + 28;
    *((_DWORD *)v1 + 10) = (char *)v1 + 28;
    FurnaceRecipes::_init(v1);
    v2 = FurnaceRecipes::mInstance;
    FurnaceRecipes::mInstance = v1;
    if ( v2 )
    {
      std::_Rb_tree<int,std::pair<int const,ItemInstance>,std::_Select1st<std::pair<int const,ItemInstance>>,std::less<int>,std::allocator<std::pair<int const,ItemInstance>>>::_M_erase(
        v2 + 24,
        *(_DWORD *)(v2 + 32));
        v2,
        *(_DWORD *)(v2 + 8));
      operator delete((void *)v2);
      v1 = (FurnaceRecipes *)FurnaceRecipes::mInstance;
    }
  }
  return v1;
}


signed int __fastcall FurnaceRecipes::isFurnaceItem(FurnaceRecipes *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r6@1
  FurnaceRecipes *v3; // r4@1
  signed int v4; // r0@1
  int v5; // r5@1
  int v6; // r1@1
  int v7; // r3@2
  int v8; // r2@3
  signed int result; // r0@14
  int v10; // r0@15
  int v11; // r6@15
  int v12; // r1@15
  int v13; // r3@16
  int v14; // r2@17
  int v15; // r3@24

  v2 = a2;
  v3 = this;
  v4 = ItemInstance::getId(a2);
  v5 = *((_DWORD *)v3 + 2);
  v6 = (int)v3 + 4;
  if ( v5 )
  {
    v7 = (int)v3 + 4;
    do
    {
      v8 = v5;
      while ( *(_DWORD *)(v8 + 16) < v4 )
      {
        v8 = *(_DWORD *)(v8 + 12);
        if ( !v8 )
        {
          v8 = v7;
          goto LABEL_10;
        }
      }
      v5 = *(_DWORD *)(v8 + 8);
      v7 = v8;
    }
    while ( v5 );
  }
  else
    v8 = (int)v3 + 4;
LABEL_10:
  if ( v8 == v6 )
    goto LABEL_32;
  if ( v4 < *(_DWORD *)(v8 + 16) )
LABEL_32:
    v10 = ItemInstance::getIdAux(v2);
    v11 = *((_DWORD *)v3 + 8);
    v12 = (int)v3 + 28;
    if ( v11 )
      v13 = (int)v3 + 28;
      do
        v14 = v11;
        while ( *(_DWORD *)(v14 + 16) < v10 )
          v14 = *(_DWORD *)(v14 + 12);
          if ( !v14 )
          {
            v14 = v13;
            goto LABEL_24;
          }
        v11 = *(_DWORD *)(v14 + 8);
        v13 = v14;
      while ( v11 );
    else
      v14 = (int)v3 + 28;
LABEL_24:
    v15 = (int)v3 + 28;
    if ( v14 != v12 )
      if ( v10 < *(_DWORD *)(v14 + 16) )
        v14 = (int)v3 + 28;
      v15 = v14;
    result = 0;
    if ( v15 != v12 )
      result = 1;
    result = 1;
  return result;
}


FurnaceRecipes *__fastcall FurnaceRecipes::FurnaceRecipes(FurnaceRecipes *this)
{
  FurnaceRecipes *v1; // r4@1

  v1 = this;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)v1 + 3) = (char *)v1 + 4;
  *((_DWORD *)v1 + 4) = (char *)v1 + 4;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 9) = (char *)this + 28;
  *((_DWORD *)this + 10) = (char *)this + 28;
  FurnaceRecipes::_init(this);
  return v1;
}


FurnaceRecipes *__fastcall FurnaceRecipes::clearFurnaceRecipes(FurnaceRecipes *this)
{
  FurnaceRecipes *v1; // r4@1
  FurnaceRecipes *result; // r0@1

  v1 = this;
  std::_Rb_tree<int,std::pair<int const,ItemInstance>,std::_Select1st<std::pair<int const,ItemInstance>>,std::less<int>,std::allocator<std::pair<int const,ItemInstance>>>::_M_erase(
    (int)this,
    *((_DWORD *)this + 2));
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = (char *)v1 + 4;
  *((_DWORD *)v1 + 4) = (char *)v1 + 4;
  *((_DWORD *)v1 + 5) = 0;
    (int)v1 + 24,
    *((_DWORD *)v1 + 8));
  result = (FurnaceRecipes *)((char *)v1 + 28);
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = (char *)v1 + 28;
  *((_DWORD *)v1 + 10) = (char *)v1 + 28;
  *((_DWORD *)v1 + 11) = 0;
  return result;
}


int __fastcall FurnaceRecipes::init(FurnaceRecipes *this)
{
  FurnaceRecipes *v1; // r0@1

  v1 = FurnaceRecipes::getInstance(this);
  return j_j_j__ZN14FurnaceRecipes5_initEv(v1);
}


ItemInstance *__fastcall FurnaceRecipes::getResult(FurnaceRecipes *this, const ItemInstance *a2, int a3)
{
  int v3; // r6@1
  FurnaceRecipes *v4; // r4@1
  const ItemInstance *v5; // r5@1
  bool v6; // zf@1
  signed int v7; // r0@6
  int v8; // r1@6
  int v9; // r12@6
  int v10; // r3@7
  int v11; // r2@8
  int v12; // r0@19
  int v13; // r6@19
  int v14; // r1@19
  int v15; // r3@20
  ItemInstance *result; // r0@32

  v3 = a3;
  v4 = this;
  v5 = a2;
  v6 = *(_BYTE *)(a3 + 15) == 0;
  if ( *(_BYTE *)(a3 + 15) )
    v6 = *(_DWORD *)a3 == 0;
  if ( v6 || ItemInstance::isNull((ItemInstance *)a3) || !*(_BYTE *)(v3 + 14) )
    goto LABEL_36;
  v7 = ItemInstance::getId((ItemInstance *)v3);
  v8 = *((_DWORD *)v5 + 2);
  v9 = (int)v5 + 4;
  if ( v8 )
  {
    v10 = (int)v5 + 4;
    do
    {
      v11 = v8;
      while ( *(_DWORD *)(v11 + 16) < v7 )
      {
        v11 = *(_DWORD *)(v11 + 12);
        if ( !v11 )
        {
          v11 = v10;
          goto LABEL_15;
        }
      }
      v8 = *(_DWORD *)(v11 + 8);
      v10 = v11;
    }
    while ( v8 );
  }
  else
    v11 = (int)v5 + 4;
LABEL_15:
  if ( v11 != v9 )
    if ( v7 < *(_DWORD *)(v11 + 16) )
      v11 = (int)v5 + 4;
    if ( v11 != v9 )
      goto LABEL_37;
  v12 = ItemInstance::getIdAux((ItemInstance *)v3);
  v13 = *((_DWORD *)v5 + 8);
  v14 = (int)v5 + 28;
  if ( v13 )
    v15 = (int)v5 + 28;
      v11 = v13;
      while ( *(_DWORD *)(v11 + 16) < v12 )
          v11 = v15;
          goto LABEL_28;
      v13 = *(_DWORD *)(v11 + 8);
      v15 = v11;
    while ( v13 );
    v11 = (int)v5 + 28;
LABEL_28:
  if ( v11 == v14 )
  if ( v12 < *(_DWORD *)(v11 + 16) )
LABEL_36:
    result = (ItemInstance *)ItemInstance::ItemInstance((int)v4);
LABEL_37:
    result = ItemInstance::ItemInstance(v4, v11 + 24);
  return result;
}


void __fastcall FurnaceRecipes::teardownFurnaceRecipes(FurnaceRecipes *this)
{
  int v1; // r4@1

  v1 = FurnaceRecipes::mInstance;
  FurnaceRecipes::mInstance = 0;
  if ( v1 )
  {
    std::_Rb_tree<int,std::pair<int const,ItemInstance>,std::_Select1st<std::pair<int const,ItemInstance>>,std::less<int>,std::allocator<std::pair<int const,ItemInstance>>>::_M_erase(
      v1 + 24,
      *(_DWORD *)(v1 + 32));
      v1,
      *(_DWORD *)(v1 + 8));
    j_j_j__ZdlPv_6((void *)v1);
  }
}


int __fastcall FurnaceRecipes::addFurnaceRecipeAuxData(FurnaceRecipes *this, int a2, int a3, const ItemInstance *a4)
{
  FurnaceRecipes *v4; // r4@1
  int v5; // r0@1
  int v6; // r1@2
  int v7; // r5@3
  int *v8; // r0@3
  int v9; // r2@3
  int v10; // r0@6
  int result; // r0@18
  int v12; // [sp+0h] [bp-60h]@1
  int v13; // [sp+8h] [bp-58h]@1
  int v14; // [sp+10h] [bp-50h]@18
  void *v15; // [sp+2Ch] [bp-34h]@16
  void *ptr; // [sp+3Ch] [bp-24h]@14

  v4 = this;
  v12 = a3 | (a2 << 16);
  ItemInstance::ItemInstance((ItemInstance *)&v13, (int)a4);
  v5 = *((_DWORD *)v4 + 8);
  if ( v5 )
  {
    v6 = v12;
    do
    {
      v7 = v5;
      v8 = (int *)(v5 + 12);
      v9 = *(_DWORD *)(v7 + 16);
      if ( v12 < v9 )
        v8 = (int *)(v7 + 8);
      v5 = *v8;
    }
    while ( v5 );
    v10 = v7;
    if ( v12 >= v9 )
LABEL_11:
      if ( *(_DWORD *)(v10 + 16) >= v6 )
        goto LABEL_14;
      goto LABEL_12;
  }
  else
    v7 = (int)v4 + 28;
  if ( v7 != *((_DWORD *)v4 + 9) )
    v10 = sub_21D4858(v7);
    goto LABEL_11;
LABEL_12:
  if ( v7 )
    std::_Rb_tree<int,std::pair<int const,ItemInstance>,std::_Select1st<std::pair<int const,ItemInstance>>,std::less<int>,std::allocator<std::pair<int const,ItemInstance>>>::_M_insert_<std::pair<int,ItemInstance>>(
      (int)v4 + 24,
      0,
      v7,
      &v12);
LABEL_14:
  if ( ptr )
    operator delete(ptr);
  if ( v15 )
    operator delete(v15);
  result = v14;
  if ( v14 )
    result = (*(int (**)(void))(*(_DWORD *)v14 + 4))();
  return result;
}
