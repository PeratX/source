

signed int __fastcall Layer::_isOcean(Layer *this, int a2)
{
  signed int result; // r0@3
  signed int v3; // r1@4

  if ( *(Layer **)(Biome::ocean + 268) != this && *(Layer **)(Biome::deepOcean + 268) != this )
  {
    v3 = 0;
    if ( *(Layer **)(Biome::frozenOcean + 268) == this )
      v3 = 1;
    result = v3;
  }
  else
    result = 1;
  return result;
}


int __fastcall Layer::initRandom(int result, int a2, __int64 a3, __int64 a4)
{
  int v4; // r8@1
  unsigned int v5; // r1@1
  unsigned int v6; // r5@1
  unsigned int v7; // r1@1
  unsigned __int64 v8; // kr58_8@1
  unsigned int v9; // r1@1
  unsigned __int64 v10; // kr60_8@1

  v4 = (1284865837 * *(_QWORD *)(result + 16) - 144211633) * *(_QWORD *)(result + 16);
  v5 = ((__PAIR__(
           (1284865837 * (unsigned __int64)(unsigned int)*(_QWORD *)(result + 16) >> 32)
         + 1481765933 * *(_QWORD *)(result + 16)
         + 1284865837 * (*(_QWORD *)(result + 16) >> 32),
           1284865837 * (unsigned int)*(_QWORD *)(result + 16))
       + 1442695040888963407LL)
      * *(_QWORD *)(result + 16)
      + a3) >> 32;
  v6 = (1284865837 * *(_QWORD *)(result + 16) - 144211633) * *(_DWORD *)(result + 16) + a3;
  v8 = (__PAIR__(
          (1284865837 * (unsigned __int64)(unsigned int)(v4 + a3) >> 32) + 1481765933 * v6 + 1284865837 * v5,
          1284865837 * (v4 + (signed int)a3))
      + 1442695040888963407LL)
     * __PAIR__(v5, v6)
     + a4;
  v7 = v8 >> 32;
  v10 = a3
      + (__PAIR__(
           (1284865837 * (unsigned __int64)((1284865837 * (v4 + (_DWORD)a3) - 144211633) * v6 + (unsigned int)a4) >> 32)
         + 1481765933 * v8
         + 1284865837 * v7,
           1284865837 * ((1284865837 * (v4 + a3) - 144211633) * v6 + a4))
      * __PAIR__(v7, (unsigned int)v8);
  v9 = (a3
      * __PAIR__(v7, (unsigned int)v8)) >> 32;
  *(_QWORD *)(result + 24) = a4
                           + (__PAIR__(
                                (1284865837 * (unsigned __int64)(unsigned int)v10 >> 32)
                              + 1481765933 * v10
                              + 1284865837 * v9,
                                1284865837 * (signed int)v10)
                            + 1442695040888963407LL)
                           * __PAIR__(v9, (unsigned int)v10);
  return result;
}


int __fastcall Layer::_modeOrRandom(Layer *this, int a2, int a3, int a4, int a5)
{
  bool v5; // zf@1
  signed int v6; // lr@4
  signed int v7; // r4@6
  signed int v8; // r5@6
  __int64 v9; // r6@8
  signed int v10; // r4@15
  signed int v11; // r5@17
  __int64 v12; // r6@17
  signed int v13; // r4@25
  signed int v14; // r5@27
  __int64 v15; // r6@27
  int v16; // r2@42
  int v17; // lr@42
  signed __int64 v18; // kr08_8@42
  unsigned int v19; // r6@42
  unsigned __int64 v20; // kr18_8@42
  unsigned int v21; // r0@42
  int v23; // [sp+0h] [bp-24h]@42
  int v24; // [sp+4h] [bp-20h]@42
  int v25; // [sp+8h] [bp-1Ch]@42
  int v26; // [sp+Ch] [bp-18h]@42

  v5 = a3 == a4;
  if ( a3 == a4 )
    v5 = a4 == a5;
  if ( !v5 )
  {
    v6 = 0;
    if ( a2 == a5 )
      v6 = 1;
    v7 = 0;
    v8 = 0;
    if ( a2 == a4 )
      v7 = 1;
    HIDWORD(v9) = 0;
    if ( a2 == a3 )
      v8 = 1;
    else
      HIDWORD(v9) = 1;
    LODWORD(v9) = 0;
    if ( a4 == a5 )
      LODWORD(v9) = 1;
    if ( v9 )
    {
      if ( (((v7 | v6) & v8 | v7 & v6) ^ 1) == 1 )
      {
        v10 = 0;
        if ( a2 != a5 )
          v10 = 1;
        v11 = 0;
        LODWORD(v12) = 0;
        if ( a3 == a4 )
          v11 = 1;
        if ( a2 != a4 )
          LODWORD(v12) = 1;
        HIDWORD(v12) = 0;
        if ( a3 == a5 )
          HIDWORD(v12) = 1;
        if ( v12 )
        {
          if ( (v11 | v10) == 1 )
          {
            v13 = 0;
            if ( a3 != a5 )
              v13 = 1;
            v14 = 0;
            LODWORD(v15) = 0;
            if ( a2 == a4 )
              v14 = 1;
            if ( a3 != a4 )
              LODWORD(v15) = 1;
            HIDWORD(v15) = 0;
            if ( a2 == a5 )
              HIDWORD(v15) = 1;
            if ( v15 && (v14 | v13) == 1 )
            {
              if ( a2 == a3 || a4 != a5 )
              {
                v23 = a2;
                v24 = a3;
                v25 = a4;
                v26 = a5;
                v16 = *((_QWORD *)this + 2) >> 32;
                v17 = *((_QWORD *)this + 2);
                v18 = *((_QWORD *)this + 3);
                v19 = 1284865837 * v18 - 144211633;
                v20 = v19 * (unsigned __int64)(unsigned int)v18;
                *((_DWORD *)this + 6) = v20 + v17;
                *((_DWORD *)this + 7) = v16
                                      + __CFADD__((_DWORD)v20, v17)
                                      + HIDWORD(v20)
                                      + v19 * HIDWORD(v18)
                                      + (__CFADD__(1284865837 * v18, -144211633)
                                       + (1284865837 * (unsigned __int64)(unsigned int)v18 >> 32)
                                       + 1481765933 * v18
                                       + 1284865837 * HIDWORD(v18)
                                       + 335903614)
                                      * v18;
                v21 = (v18 >> 24)
                    - (((unsigned __int64)(v18 >> 24) + ((unsigned int)(SHIDWORD(v18) >> 31) >> 30)) & 0xFFFFFFFC);
                a3 = *(&v23 + v21 + 4 * (v21 >> 31));
              }
              else
                a3 = a4;
            }
          }
          else
            a3 = a2;
        }
        else
          a3 = a2;
      }
      else
        a3 = a2;
    }
      a3 = a2;
  }
  return a3;
}


int __fastcall Layer::_random(Layer *this, int *a2, int a3)
{
  __int64 v3; // r3@1
  int *v4; // r8@1
  int v5; // r5@1
  int v6; // r1@1
  int v7; // r2@1

  v3 = *((_QWORD *)this + 3);
  v4 = a2;
  v5 = a3;
  v6 = (__PAIR__(
          __CFADD__(1284865837 * v3, -144211633)
        + (1284865837 * (unsigned __int64)(unsigned int)v3 >> 32)
        + 1481765933 * *((_QWORD *)this + 3)
        + 1284865837 * (*((_QWORD *)this + 3) >> 32)
        + 335903614,
          1284865837 * (signed int)v3 - 144211633)
      * *((_QWORD *)this + 3)
      + *((_QWORD *)this + 2)) >> 32;
  *((_DWORD *)this + 6) = (1284865837 * v3 - 144211633) * *((_DWORD *)this + 6) + *((_DWORD *)this + 4);
  *((_DWORD *)this + 7) = v6;
  j_j___aeabi_ldivmod_0((signed __int64)__PAIR__(HIDWORD(v3), (unsigned int)v3) >> 24, a3);
  if ( v7 < 0 )
    v7 += v5;
  return v4[v7];
}


unsigned int __fastcall Layer::getDefaultLayers(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r8@1
  int v6; // r10@1
  __int64 v7; // r0@1
  int v8; // r4@1
  unsigned int *v9; // r1@2
  unsigned int v10; // r0@4
  unsigned int *v11; // r6@8
  unsigned int v12; // r0@10
  int v13; // r4@15
  unsigned int *v14; // r1@16
  unsigned int v15; // r0@18
  unsigned int *v16; // r6@22
  unsigned int v17; // r0@24
  __int64 v18; // r0@29
  int v19; // r4@29
  unsigned int *v20; // r1@30
  unsigned int v21; // r0@32
  unsigned int *v22; // r6@36
  unsigned int v23; // r0@38
  int v24; // r4@43
  unsigned int *v25; // r1@44
  unsigned int v26; // r0@46
  unsigned int *v27; // r6@50
  unsigned int v28; // r0@52
  __int64 v29; // r0@57
  int v30; // r4@57
  unsigned int *v31; // r1@58
  unsigned int v32; // r0@60
  unsigned int *v33; // r6@64
  unsigned int v34; // r0@66
  int v35; // r4@71
  unsigned int *v36; // r1@72
  unsigned int v37; // r0@74
  unsigned int *v38; // r6@78
  unsigned int v39; // r0@80
  __int64 v40; // r0@85
  int v41; // r4@85
  unsigned int *v42; // r1@86
  unsigned int v43; // r0@88
  unsigned int *v44; // r6@92
  unsigned int v45; // r0@94
  int v46; // r4@99
  unsigned int *v47; // r1@100
  unsigned int v48; // r0@102
  unsigned int *v49; // r6@106
  unsigned int v50; // r0@108
  __int64 v51; // r0@113
  int v52; // r4@113
  unsigned int *v53; // r1@114
  unsigned int v54; // r0@116
  unsigned int *v55; // r6@120
  unsigned int v56; // r0@122
  int v57; // r4@127
  unsigned int *v58; // r1@128
  unsigned int v59; // r0@130
  unsigned int *v60; // r6@134
  unsigned int v61; // r0@136
  __int64 v62; // r0@141
  int v63; // r4@141
  unsigned int *v64; // r1@142
  unsigned int v65; // r0@144
  unsigned int *v66; // r6@148
  unsigned int v67; // r0@150
  int v68; // r4@155
  unsigned int *v69; // r1@156
  unsigned int v70; // r0@158
  unsigned int *v71; // r6@162
  unsigned int v72; // r0@164
  __int64 v73; // r0@169
  int v74; // r4@169
  unsigned int *v75; // r1@170
  unsigned int v76; // r0@172
  unsigned int *v77; // r6@176
  unsigned int v78; // r0@178
  int v79; // r4@183
  unsigned int *v80; // r1@184
  unsigned int v81; // r0@186
  unsigned int *v82; // r6@190
  unsigned int v83; // r0@192
  __int64 v84; // r0@197
  int v85; // r4@197
  unsigned int *v86; // r1@198
  unsigned int v87; // r0@200
  unsigned int *v88; // r6@204
  unsigned int v89; // r0@206
  int v90; // r4@211
  unsigned int *v91; // r1@212
  unsigned int v92; // r0@214
  unsigned int *v93; // r6@218
  unsigned int v94; // r0@220
  __int64 v95; // r0@225
  int v96; // r4@225
  unsigned int *v97; // r1@226
  unsigned int v98; // r0@228
  unsigned int *v99; // r6@232
  unsigned int v100; // r0@234
  int v101; // r4@239
  unsigned int *v102; // r1@240
  unsigned int v103; // r0@242
  unsigned int *v104; // r6@246
  unsigned int v105; // r0@248
  __int64 v106; // r0@253
  int v107; // r4@253
  unsigned int *v108; // r1@254
  unsigned int v109; // r0@256
  unsigned int *v110; // r6@260
  unsigned int v111; // r0@262
  int v112; // r4@267
  unsigned int *v113; // r1@268
  unsigned int v114; // r0@270
  unsigned int *v115; // r6@274
  unsigned int v116; // r0@276
  __int64 v117; // r0@281
  int v118; // r4@281
  unsigned int *v119; // r1@282
  unsigned int v120; // r0@284
  unsigned int *v121; // r6@288
  unsigned int v122; // r0@290
  int v123; // r4@295
  unsigned int *v124; // r1@296
  unsigned int v125; // r0@298
  unsigned int *v126; // r6@302
  unsigned int v127; // r0@304
  __int64 v128; // r0@309
  int v129; // r4@309
  unsigned int *v130; // r1@310
  unsigned int v131; // r0@312
  unsigned int *v132; // r6@316
  unsigned int v133; // r0@318
  int v134; // r4@323
  unsigned int *v135; // r1@324
  unsigned int v136; // r0@326
  unsigned int *v137; // r6@330
  unsigned int v138; // r0@332
  __int64 v139; // r0@337
  int v140; // r4@337
  unsigned int *v141; // r1@338
  unsigned int v142; // r0@340
  unsigned int *v143; // r6@344
  unsigned int v144; // r0@346
  int v145; // r4@351
  unsigned int *v146; // r1@352
  unsigned int v147; // r0@354
  unsigned int *v148; // r6@358
  unsigned int v149; // r0@360
  __int64 v150; // r0@365
  int v151; // r4@365
  unsigned int *v152; // r1@366
  unsigned int v153; // r0@368
  unsigned int *v154; // r6@372
  unsigned int v155; // r0@374
  int v156; // r4@379
  unsigned int *v157; // r1@380
  unsigned int v158; // r0@382
  unsigned int *v159; // r6@386
  unsigned int v160; // r0@388
  __int64 v161; // r0@393
  int v162; // r4@393
  unsigned int *v163; // r1@394
  unsigned int v164; // r0@396
  unsigned int *v165; // r6@400
  unsigned int v166; // r0@402
  int v167; // r4@407
  unsigned int *v168; // r1@408
  unsigned int v169; // r0@410
  unsigned int *v170; // r6@414
  unsigned int v171; // r0@416
  __int64 v172; // r0@421
  int v173; // r4@421
  unsigned int *v174; // r1@422
  unsigned int v175; // r0@424
  unsigned int *v176; // r6@428
  unsigned int v177; // r0@430
  int v178; // r4@435
  unsigned int *v179; // r1@436
  unsigned int v180; // r0@438
  unsigned int *v181; // r6@442
  unsigned int v182; // r0@444
  __int64 v183; // r0@449
  int v184; // r4@449
  unsigned int *v185; // r1@450
  unsigned int v186; // r0@452
  unsigned int *v187; // r6@456
  unsigned int v188; // r0@458
  int v189; // r4@463
  unsigned int *v190; // r1@464
  unsigned int v191; // r0@466
  unsigned int *v192; // r6@470
  unsigned int v193; // r0@472
  __int64 v194; // r0@477
  int v195; // r4@477
  unsigned int *v196; // r1@478
  unsigned int v197; // r0@480
  unsigned int *v198; // r5@484
  unsigned int v199; // r0@486
  int v200; // r4@491
  unsigned int *v201; // r1@492
  unsigned int v202; // r0@494
  unsigned int *v203; // r5@498
  unsigned int v204; // r0@500
  signed int v205; // r2@505
  unsigned int *v206; // r0@508
  unsigned int v207; // r1@510
  __int64 v208; // r0@513
  int v209; // r4@513
  unsigned int *v210; // r1@514
  unsigned int v211; // r0@516
  unsigned int *v212; // r5@520
  unsigned int v213; // r0@522
  int v214; // r4@527
  unsigned int *v215; // r1@528
  unsigned int v216; // r0@530
  unsigned int *v217; // r5@534
  unsigned int v218; // r0@536
  __int64 v219; // r0@541
  int v220; // r4@541
  unsigned int *v221; // r1@542
  unsigned int v222; // r0@544
  unsigned int *v223; // r5@548
  unsigned int v224; // r0@550
  int v225; // r4@555
  unsigned int *v226; // r1@556
  unsigned int v227; // r0@558
  unsigned int *v228; // r5@562
  unsigned int v229; // r0@564
  int v230; // r4@569
  int v231; // r5@569
  unsigned int *v232; // r0@571
  unsigned int v233; // r1@573
  unsigned int *v234; // r1@577
  unsigned int v235; // r0@579
  unsigned int *v236; // r6@583
  unsigned int v237; // r0@585
  __int64 v238; // r0@591
  int v239; // r4@591
  unsigned int *v240; // r1@592
  unsigned int v241; // r0@594
  unsigned int *v242; // r5@598
  unsigned int v243; // r0@600
  int v244; // r4@605
  unsigned int *v245; // r1@606
  unsigned int v246; // r0@608
  unsigned int *v247; // r5@612
  unsigned int v248; // r0@614
  __int64 v249; // r0@619
  int v250; // r4@619
  unsigned int *v251; // r1@620
  unsigned int v252; // r0@622
  unsigned int *v253; // r5@626
  unsigned int v254; // r0@628
  int v255; // r4@633
  unsigned int *v256; // r1@634
  unsigned int v257; // r0@636
  unsigned int *v258; // r5@640
  unsigned int v259; // r0@642
  char v260; // r0@647
  __int64 v261; // r0@649
  int v262; // r4@649
  unsigned int *v263; // r1@650
  unsigned int v264; // r0@652
  unsigned int *v265; // r5@656
  unsigned int v266; // r0@658
  int v267; // r4@663
  unsigned int *v268; // r1@664
  unsigned int v269; // r0@666
  unsigned int *v270; // r5@670
  unsigned int v271; // r0@672
  unsigned int *v272; // r0@678
  unsigned int v273; // r1@680
  __int64 v274; // r0@683
  int v275; // r6@683
  unsigned int *v276; // r1@684
  unsigned int v277; // r0@686
  unsigned int *v278; // r5@690
  unsigned int v279; // r0@692
  int v280; // r6@697
  unsigned int *v281; // r1@698
  unsigned int v282; // r0@700
  unsigned int *v283; // r5@704
  unsigned int v284; // r0@706
  __int64 v285; // r0@711
  int v286; // r4@711
  unsigned int *v287; // r1@712
  unsigned int v288; // r0@714
  unsigned int *v289; // r5@718
  unsigned int v290; // r0@720
  int v291; // r4@725
  unsigned int *v292; // r1@726
  unsigned int v293; // r0@728
  unsigned int *v294; // r5@732
  unsigned int v295; // r0@734
  __int64 v296; // r0@739
  int v297; // r4@739
  unsigned int *v298; // r1@740
  unsigned int v299; // r0@742
  unsigned int *v300; // r5@746
  unsigned int v301; // r0@748
  int v302; // r4@753
  unsigned int *v303; // r1@754
  unsigned int v304; // r0@756
  unsigned int *v305; // r5@760
  unsigned int v306; // r0@762
  __int64 v307; // r0@767
  int v308; // r4@767
  unsigned int *v309; // r1@768
  unsigned int v310; // r0@770
  unsigned int *v311; // r5@774
  unsigned int v312; // r0@776
  int v313; // r4@781
  unsigned int *v314; // r1@782
  unsigned int v315; // r0@784
  unsigned int *v316; // r5@788
  unsigned int v317; // r0@790
  __int64 v318; // r0@795
  int v319; // r4@795
  unsigned int *v320; // r1@796
  unsigned int v321; // r0@798
  unsigned int *v322; // r5@802
  unsigned int v323; // r0@804
  int v324; // r4@809
  unsigned int *v325; // r1@810
  unsigned int v326; // r0@812
  unsigned int *v327; // r5@816
  unsigned int v328; // r0@818
  __int64 v329; // r0@823
  int v330; // r4@823
  unsigned int *v331; // r1@824
  unsigned int v332; // r0@826
  unsigned int *v333; // r5@830
  unsigned int v334; // r0@832
  int v335; // r4@837
  unsigned int *v336; // r1@838
  unsigned int v337; // r0@840
  unsigned int *v338; // r5@844
  unsigned int v339; // r0@846
  __int64 v340; // r0@851
  int v341; // r4@851
  unsigned int *v342; // r1@852
  unsigned int v343; // r0@854
  unsigned int *v344; // r5@858
  unsigned int v345; // r0@860
  int v346; // r4@865
  unsigned int *v347; // r1@866
  unsigned int v348; // r0@868
  unsigned int *v349; // r5@872
  unsigned int v350; // r0@874
  int v351; // r6@879
  __int64 v352; // r0@880
  int v353; // r10@880
  unsigned int *v354; // r1@881
  unsigned int v355; // r0@883
  unsigned int *v356; // r4@887
  unsigned int v357; // r0@889
  int v358; // r7@894
  unsigned int *v359; // r1@895
  unsigned int v360; // r0@897
  unsigned int *v361; // r4@901
  unsigned int v362; // r0@903
  __int64 v363; // r0@910
  int v364; // r4@910
  unsigned int *v365; // r1@911
  unsigned int v366; // r0@913
  __int64 v367; // r0@915
  int v368; // r4@915
  unsigned int *v369; // r1@916
  unsigned int v370; // r0@918
  unsigned int *v371; // r7@922
  unsigned int v372; // r0@924
  unsigned int *v373; // r7@928
  unsigned int v374; // r0@930
  int v375; // r4@935
  unsigned int *v376; // r1@936
  unsigned int v377; // r0@938
  unsigned int *v378; // r7@942
  unsigned int v379; // r0@944
  unsigned int *v380; // r1@950
  unsigned int v381; // r0@952
  __int64 v382; // r0@964
  int v383; // r4@964
  unsigned int *v384; // r1@965
  unsigned int v385; // r0@967
  unsigned int *v386; // r5@971
  unsigned int v387; // r0@973
  int v388; // r4@978
  unsigned int *v389; // r1@979
  unsigned int v390; // r0@981
  unsigned int *v391; // r5@985
  unsigned int v392; // r0@987
  __int64 v393; // r0@992
  int v394; // r4@992
  unsigned int *v395; // r1@993
  unsigned int v396; // r0@995
  unsigned int *v397; // r5@999
  unsigned int v398; // r0@1001
  int v399; // r4@1006
  unsigned int *v400; // r1@1007
  unsigned int v401; // r0@1009
  unsigned int *v402; // r5@1013
  unsigned int v403; // r0@1015
  int v404; // r4@1020
  unsigned int *v405; // r0@1021
  unsigned int v406; // r1@1023
  __int64 v407; // r0@1026
  int v408; // r5@1026
  unsigned int *v409; // r1@1027
  unsigned int v410; // r0@1029
  unsigned int *v411; // r6@1033
  unsigned int v412; // r0@1035
  int v413; // r5@1040
  unsigned int *v414; // r1@1041
  unsigned int v415; // r0@1043
  unsigned int *v416; // r6@1047
  unsigned int v417; // r0@1049
  unsigned int result; // r0@1054
  unsigned int *v419; // r1@1055
  unsigned int *v420; // r5@1061
  int v421; // r4@1068
  unsigned int *v422; // r1@1069
  unsigned int *v423; // r5@1075
  int v424; // r4@1082
  unsigned int *v425; // r1@1083
  unsigned int *v426; // r5@1089
  int v427; // r4@1096
  unsigned int *v428; // r1@1097
  unsigned int *v429; // r5@1103
  int v430; // [sp+4h] [bp-27Ch]@865
  int v431; // [sp+10h] [bp-270h]@507
  int v432; // [sp+14h] [bp-26Ch]@1026
  char v433; // [sp+18h] [bp-268h]@1026
  int v434; // [sp+1Ch] [bp-264h]@1026
  int v435; // [sp+20h] [bp-260h]@992
  char v436; // [sp+24h] [bp-25Ch]@992
  int v437; // [sp+28h] [bp-258h]@992
  int v438; // [sp+2Ch] [bp-254h]@964
  char v439; // [sp+30h] [bp-250h]@964
  int v440; // [sp+34h] [bp-24Ch]@964
  int v441; // [sp+38h] [bp-248h]@915
  char v442; // [sp+3Ch] [bp-244h]@915
  int v443; // [sp+40h] [bp-240h]@915
  int v444; // [sp+44h] [bp-23Ch]@910
  char v445; // [sp+48h] [bp-238h]@910
  int v446; // [sp+4Ch] [bp-234h]@910
  int v447; // [sp+50h] [bp-230h]@880
  char v448; // [sp+54h] [bp-22Ch]@880
  int v449; // [sp+58h] [bp-228h]@880
  int v450; // [sp+5Ch] [bp-224h]@851
  char v451; // [sp+60h] [bp-220h]@851
  int v452; // [sp+64h] [bp-21Ch]@851
  int v453; // [sp+68h] [bp-218h]@823
  char v454; // [sp+6Ch] [bp-214h]@823
  int v455; // [sp+70h] [bp-210h]@823
  int v456; // [sp+74h] [bp-20Ch]@795
  char v457; // [sp+78h] [bp-208h]@795
  int v458; // [sp+7Ch] [bp-204h]@795
  char v459; // [sp+80h] [bp-200h]@767
  int v460; // [sp+84h] [bp-1FCh]@767
  char v461; // [sp+88h] [bp-1F8h]@739
  int v462; // [sp+8Ch] [bp-1F4h]@739
  int v463; // [sp+90h] [bp-1F0h]@711
  char v464; // [sp+94h] [bp-1ECh]@711
  int v465; // [sp+98h] [bp-1E8h]@711
  char v466; // [sp+9Ch] [bp-1E4h]@683
  int v467; // [sp+A0h] [bp-1E0h]@683
  int v468; // [sp+A4h] [bp-1DCh]@677
  int v469; // [sp+A8h] [bp-1D8h]@677
  char v470; // [sp+AFh] [bp-1D1h]@649
  int v471; // [sp+B0h] [bp-1D0h]@647
  char v472; // [sp+B4h] [bp-1CCh]@649
  int v473; // [sp+B8h] [bp-1C8h]@649
  char v474; // [sp+BCh] [bp-1C4h]@619
  int v475; // [sp+C0h] [bp-1C0h]@619
  int v476; // [sp+C4h] [bp-1BCh]@591
  char v477; // [sp+C8h] [bp-1B8h]@591
  int v478; // [sp+CCh] [bp-1B4h]@591
  int v479; // [sp+D0h] [bp-1B0h]@541
  char v480; // [sp+D4h] [bp-1ACh]@541
  int v481; // [sp+D8h] [bp-1A8h]@541
  char v482; // [sp+DCh] [bp-1A4h]@513
  int v483; // [sp+E0h] [bp-1A0h]@513
  int v484; // [sp+E4h] [bp-19Ch]@505
  int v485; // [sp+E8h] [bp-198h]@505
  char v486; // [sp+ECh] [bp-194h]@477
  int v487; // [sp+F0h] [bp-190h]@477
  int v488; // [sp+F4h] [bp-18Ch]@449
  char v489; // [sp+F8h] [bp-188h]@449
  int v490; // [sp+FCh] [bp-184h]@449
  int v491; // [sp+100h] [bp-180h]@421
  char v492; // [sp+104h] [bp-17Ch]@421
  int v493; // [sp+108h] [bp-178h]@421
  int v494; // [sp+10Ch] [bp-174h]@393
  char v495; // [sp+110h] [bp-170h]@393
  int v496; // [sp+114h] [bp-16Ch]@393
  int v497; // [sp+118h] [bp-168h]@365
  char v498; // [sp+11Ch] [bp-164h]@365
  int v499; // [sp+120h] [bp-160h]@365
  int v500; // [sp+124h] [bp-15Ch]@337
  char v501; // [sp+128h] [bp-158h]@337
  int v502; // [sp+12Ch] [bp-154h]@337
  int v503; // [sp+130h] [bp-150h]@309
  int v504; // [sp+134h] [bp-14Ch]@309
  char v505; // [sp+138h] [bp-148h]@309
  int v506; // [sp+13Ch] [bp-144h]@309
  int v507; // [sp+140h] [bp-140h]@281
  int v508; // [sp+144h] [bp-13Ch]@281
  char v509; // [sp+148h] [bp-138h]@281
  int v510; // [sp+14Ch] [bp-134h]@281
  int v511; // [sp+150h] [bp-130h]@253
  int v512; // [sp+154h] [bp-12Ch]@253
  char v513; // [sp+158h] [bp-128h]@253
  int v514; // [sp+15Ch] [bp-124h]@253
  int v515; // [sp+160h] [bp-120h]@225
  char v516; // [sp+164h] [bp-11Ch]@225
  int v517; // [sp+168h] [bp-118h]@225
  int v518; // [sp+16Ch] [bp-114h]@197
  char v519; // [sp+170h] [bp-110h]@197
  int v520; // [sp+174h] [bp-10Ch]@197
  int v521; // [sp+178h] [bp-108h]@169
  char v522; // [sp+17Ch] [bp-104h]@169
  int v523; // [sp+180h] [bp-100h]@169
  int v524; // [sp+184h] [bp-FCh]@141
  char v525; // [sp+188h] [bp-F8h]@141
  int v526; // [sp+18Ch] [bp-F4h]@141
  int v527; // [sp+190h] [bp-F0h]@113
  char v528; // [sp+194h] [bp-ECh]@113
  int v529; // [sp+198h] [bp-E8h]@113
  int v530; // [sp+19Ch] [bp-E4h]@85
  char v531; // [sp+1A0h] [bp-E0h]@85
  int v532; // [sp+1A4h] [bp-DCh]@85
  int v533; // [sp+1A8h] [bp-D8h]@57
  char v534; // [sp+1ACh] [bp-D4h]@57
  int v535; // [sp+1B0h] [bp-D0h]@57
  int v536; // [sp+1B4h] [bp-CCh]@29
  char v537; // [sp+1B8h] [bp-C8h]@29
  int v538; // [sp+1BCh] [bp-C4h]@29
  int v539; // [sp+1C0h] [bp-C0h]@1
  char v540; // [sp+1C4h] [bp-BCh]@1
  int v541; // [sp+1C8h] [bp-B8h]@1
  int v542; // [sp+1CCh] [bp-B4h]@1
  int v543; // [sp+1D0h] [bp-B0h]@1
  int v544; // [sp+1D4h] [bp-ACh]@1
  int v545; // [sp+1D8h] [bp-A8h]@1
  int v546; // [sp+1DCh] [bp-A4h]@1
  int v547; // [sp+1E0h] [bp-A0h]@1
  char v548; // [sp+1E4h] [bp-9Ch]@1
  char v549; // [sp+1E8h] [bp-98h]@29
  char v550; // [sp+1ECh] [bp-94h]@57
  char v551; // [sp+1F0h] [bp-90h]@85
  char v552; // [sp+1F4h] [bp-8Ch]@113
  char v553; // [sp+1F8h] [bp-88h]@141
  char v554; // [sp+1FCh] [bp-84h]@169
  char v555; // [sp+200h] [bp-80h]@197
  char v556; // [sp+204h] [bp-7Ch]@225
  char v557; // [sp+208h] [bp-78h]@253
  char v558; // [sp+20Ch] [bp-74h]@281
  char v559; // [sp+210h] [bp-70h]@309
  char v560; // [sp+214h] [bp-6Ch]@337
  char v561; // [sp+218h] [bp-68h]@365
  char v562; // [sp+21Ch] [bp-64h]@393
  char v563; // [sp+220h] [bp-60h]@421
  char v564; // [sp+224h] [bp-5Ch]@449
  char v565; // [sp+228h] [bp-58h]@541
  char v566; // [sp+22Ch] [bp-54h]@591
  char v567; // [sp+230h] [bp-50h]@649
  char v568; // [sp+234h] [bp-4Ch]@711
  char v569; // [sp+238h] [bp-48h]@795
  char v570; // [sp+23Ch] [bp-44h]@823
  char v571; // [sp+240h] [bp-40h]@851
  char v572; // [sp+244h] [bp-3Ch]@964
  char v573; // [sp+248h] [bp-38h]@880
  char v574; // [sp+24Ch] [bp-34h]@910
  char v575; // [sp+250h] [bp-30h]@915
  char v576; // [sp+254h] [bp-2Ch]@992
  char v577; // [sp+258h] [bp-28h]@1026

  v547 = a5;
  v5 = a3;
  v542 = 1;
  v6 = a4;
  j_std::__shared_ptr<IslandLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<IslandLayer>,int>(
    (int)&v543,
    (int)&v548,
    (unsigned int *)&v542);
  v545 = v543;
  v546 = v544;
  v543 = 0;
  v544 = 0;
  v539 = 2000;
  j_std::__shared_ptr<FuzzyZoomLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<FuzzyZoomLayer>,int,std::shared_ptr<Layer> &>(
    (int)&v540,
    (unsigned int *)&v539,
    (int)&v545);
  v7 = *(_QWORD *)&v540;
  *(_DWORD *)&v540 = 0;
  v541 = 0;
  v545 = v7;
  v8 = v546;
  v546 = HIDWORD(v7);
  if ( v8 )
  {
    v9 = (unsigned int *)(v8 + 4);
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
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  v13 = v541;
  if ( v541 )
    v14 = (unsigned int *)(v541 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v536 = 1;
  j_std::__shared_ptr<AddIslandLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<AddIslandLayer>,int,std::shared_ptr<Layer> &>(
    (int)&v537,
    (int)&v549,
    (unsigned int *)&v536,
  v18 = *(_QWORD *)&v537;
  *(_DWORD *)&v537 = 0;
  v538 = 0;
  v545 = v18;
  v19 = v546;
  v546 = HIDWORD(v18);
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
  v24 = v538;
  if ( v538 )
    v25 = (unsigned int *)(v538 + 4);
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
  v533 = 2001;
  j_std::__shared_ptr<ZoomLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ZoomLayer>,int,std::shared_ptr<Layer> &>(
    (int)&v534,
    (int)&v550,
    (unsigned int *)&v533,
  v29 = *(_QWORD *)&v534;
  *(_DWORD *)&v534 = 0;
  v535 = 0;
  v545 = v29;
  v30 = v546;
  v546 = HIDWORD(v29);
  if ( v30 )
    v31 = (unsigned int *)(v30 + 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 == 1 )
      v33 = (unsigned int *)(v30 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
  v35 = v535;
  if ( v535 )
    v36 = (unsigned int *)(v535 + 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 == 1 )
      v38 = (unsigned int *)(v35 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 8))(v35);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 12))(v35);
  v530 = 2;
    (int)&v531,
    (int)&v551,
    (unsigned int *)&v530,
  v40 = *(_QWORD *)&v531;
  *(_DWORD *)&v531 = 0;
  v532 = 0;
  v545 = v40;
  v41 = v546;
  v546 = HIDWORD(v40);
  if ( v41 )
    v42 = (unsigned int *)(v41 + 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 == 1 )
      v44 = (unsigned int *)(v41 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 8))(v41);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 12))(v41);
  v46 = v532;
  if ( v532 )
    v47 = (unsigned int *)(v532 + 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 == 1 )
      v49 = (unsigned int *)(v46 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 8))(v46);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 12))(v46);
  v527 = 50;
    (int)&v528,
    (int)&v552,
    (unsigned int *)&v527,
  v51 = *(_QWORD *)&v528;
  *(_DWORD *)&v528 = 0;
  v529 = 0;
  v545 = v51;
  v52 = v546;
  v546 = HIDWORD(v51);
  if ( v52 )
    v53 = (unsigned int *)(v52 + 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 == 1 )
      v55 = (unsigned int *)(v52 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 8))(v52);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 12))(v52);
  v57 = v529;
  if ( v529 )
    v58 = (unsigned int *)(v529 + 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 == 1 )
      v60 = (unsigned int *)(v57 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v57 + 8))(v57);
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
        v61 = (*v60)--;
      if ( v61 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v57 + 12))(v57);
  v524 = 70;
    (int)&v525,
    (int)&v553,
    (unsigned int *)&v524,
  v62 = *(_QWORD *)&v525;
  *(_DWORD *)&v525 = 0;
  v526 = 0;
  v545 = v62;
  v63 = v546;
  v546 = HIDWORD(v62);
  if ( v63 )
    v64 = (unsigned int *)(v63 + 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 == 1 )
      v66 = (unsigned int *)(v63 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v63 + 8))(v63);
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
        v67 = (*v66)--;
      if ( v67 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v63 + 12))(v63);
  v68 = v526;
  if ( v526 )
    v69 = (unsigned int *)(v526 + 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 == 1 )
      v71 = (unsigned int *)(v68 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v68 + 8))(v68);
          v72 = __ldrex(v71);
        while ( __strex(v72 - 1, v71) );
        v72 = (*v71)--;
      if ( v72 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v68 + 12))(v68);
  v521 = 2;
  j_std::__shared_ptr<RemoveTooMuchOceanLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RemoveTooMuchOceanLayer>,int,std::shared_ptr<Layer> &>(
    (int)&v522,
    (int)&v554,
    (unsigned int *)&v521,
  v73 = *(_QWORD *)&v522;
  *(_DWORD *)&v522 = 0;
  v523 = 0;
  v545 = v73;
  v74 = v546;
  v546 = HIDWORD(v73);
  if ( v74 )
    v75 = (unsigned int *)(v74 + 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 == 1 )
      v77 = (unsigned int *)(v74 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v74 + 8))(v74);
          v78 = __ldrex(v77);
        while ( __strex(v78 - 1, v77) );
        v78 = (*v77)--;
      if ( v78 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v74 + 12))(v74);
  v79 = v523;
  if ( v523 )
    v80 = (unsigned int *)(v523 + 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 == 1 )
      v82 = (unsigned int *)(v79 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v79 + 8))(v79);
          v83 = __ldrex(v82);
        while ( __strex(v83 - 1, v82) );
        v83 = (*v82)--;
      if ( v83 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v79 + 12))(v79);
  v518 = 2;
  j_std::__shared_ptr<AddSnowLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<AddSnowLayer>,int,std::shared_ptr<Layer> &>(
    (int)&v519,
    (int)&v555,
    (unsigned int *)&v518,
  v84 = *(_QWORD *)&v519;
  *(_DWORD *)&v519 = 0;
  v520 = 0;
  v545 = v84;
  v85 = v546;
  v546 = HIDWORD(v84);
  if ( v85 )
    v86 = (unsigned int *)(v85 + 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 == 1 )
      v88 = (unsigned int *)(v85 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v85 + 8))(v85);
          v89 = __ldrex(v88);
        while ( __strex(v89 - 1, v88) );
        v89 = (*v88)--;
      if ( v89 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v85 + 12))(v85);
  v90 = v520;
  if ( v520 )
    v91 = (unsigned int *)(v520 + 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 == 1 )
      v93 = (unsigned int *)(v90 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v90 + 8))(v90);
          v94 = __ldrex(v93);
        while ( __strex(v94 - 1, v93) );
        v94 = (*v93)--;
      if ( v94 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v90 + 12))(v90);
  v515 = 3;
    (int)&v516,
    (int)&v556,
    (unsigned int *)&v515,
  v95 = *(_QWORD *)&v516;
  *(_DWORD *)&v516 = 0;
  v517 = 0;
  v545 = v95;
  v96 = v546;
  v546 = HIDWORD(v95);
  if ( v96 )
    v97 = (unsigned int *)(v96 + 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 == 1 )
      v99 = (unsigned int *)(v96 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v96 + 8))(v96);
          v100 = __ldrex(v99);
        while ( __strex(v100 - 1, v99) );
        v100 = (*v99)--;
      if ( v100 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v96 + 12))(v96);
  v101 = v517;
  if ( v517 )
    v102 = (unsigned int *)(v517 + 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 == 1 )
      v104 = (unsigned int *)(v101 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v101 + 8))(v101);
          v105 = __ldrex(v104);
        while ( __strex(v105 - 1, v104) );
        v105 = (*v104)--;
      if ( v105 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v101 + 12))(v101);
  v512 = 2;
  v511 = 0;
  j_std::__shared_ptr<AddEdgeLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<AddEdgeLayer>,int,std::shared_ptr<Layer> &,AddEdgeLayer::Mode>(
    (int)&v513,
    (int)&v557,
    (unsigned int *)&v512,
    (int)&v545,
    &v511);
  v106 = *(_QWORD *)&v513;
  *(_DWORD *)&v513 = 0;
  v514 = 0;
  v545 = v106;
  v107 = v546;
  v546 = HIDWORD(v106);
  if ( v107 )
    v108 = (unsigned int *)(v107 + 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 == 1 )
      v110 = (unsigned int *)(v107 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v107 + 8))(v107);
          v111 = __ldrex(v110);
        while ( __strex(v111 - 1, v110) );
        v111 = (*v110)--;
      if ( v111 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v107 + 12))(v107);
  v112 = v514;
  if ( v514 )
    v113 = (unsigned int *)(v514 + 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 == 1 )
      v115 = (unsigned int *)(v112 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v112 + 8))(v112);
          v116 = __ldrex(v115);
        while ( __strex(v116 - 1, v115) );
        v116 = (*v115)--;
      if ( v116 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v112 + 12))(v112);
  v508 = 2;
  v507 = 1;
    (int)&v509,
    (int)&v558,
    (unsigned int *)&v508,
    &v507);
  v117 = *(_QWORD *)&v509;
  *(_DWORD *)&v509 = 0;
  v510 = 0;
  v545 = v117;
  v118 = v546;
  v546 = HIDWORD(v117);
  if ( v118 )
    v119 = (unsigned int *)(v118 + 4);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 == 1 )
      v121 = (unsigned int *)(v118 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v118 + 8))(v118);
          v122 = __ldrex(v121);
        while ( __strex(v122 - 1, v121) );
        v122 = (*v121)--;
      if ( v122 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v118 + 12))(v118);
  v123 = v510;
  if ( v510 )
    v124 = (unsigned int *)(v510 + 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 == 1 )
      v126 = (unsigned int *)(v123 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v123 + 8))(v123);
          v127 = __ldrex(v126);
        while ( __strex(v127 - 1, v126) );
        v127 = (*v126)--;
      if ( v127 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v123 + 12))(v123);
  v504 = 3;
  v503 = 2;
    (int)&v505,
    (int)&v559,
    (unsigned int *)&v504,
    &v503);
  v128 = *(_QWORD *)&v505;
  *(_DWORD *)&v505 = 0;
  v506 = 0;
  v545 = v128;
  v129 = v546;
  v546 = HIDWORD(v128);
  if ( v129 )
    v130 = (unsigned int *)(v129 + 4);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 == 1 )
      v132 = (unsigned int *)(v129 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v129 + 8))(v129);
          v133 = __ldrex(v132);
        while ( __strex(v133 - 1, v132) );
        v133 = (*v132)--;
      if ( v133 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v129 + 12))(v129);
  v134 = v506;
  if ( v506 )
    v135 = (unsigned int *)(v506 + 4);
        v136 = __ldrex(v135);
      while ( __strex(v136 - 1, v135) );
      v136 = (*v135)--;
    if ( v136 == 1 )
      v137 = (unsigned int *)(v134 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v134 + 8))(v134);
          v138 = __ldrex(v137);
        while ( __strex(v138 - 1, v137) );
        v138 = (*v137)--;
      if ( v138 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v134 + 12))(v134);
  v500 = 2002;
    (int)&v501,
    (int)&v560,
    (unsigned int *)&v500,
  v139 = *(_QWORD *)&v501;
  *(_DWORD *)&v501 = 0;
  v502 = 0;
  v545 = v139;
  v140 = v546;
  v546 = HIDWORD(v139);
  if ( v140 )
    v141 = (unsigned int *)(v140 + 4);
        v142 = __ldrex(v141);
      while ( __strex(v142 - 1, v141) );
      v142 = (*v141)--;
    if ( v142 == 1 )
      v143 = (unsigned int *)(v140 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v140 + 8))(v140);
          v144 = __ldrex(v143);
        while ( __strex(v144 - 1, v143) );
        v144 = (*v143)--;
      if ( v144 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v140 + 12))(v140);
  v145 = v502;
  if ( v502 )
    v146 = (unsigned int *)(v502 + 4);
        v147 = __ldrex(v146);
      while ( __strex(v147 - 1, v146) );
      v147 = (*v146)--;
    if ( v147 == 1 )
      v148 = (unsigned int *)(v145 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v145 + 8))(v145);
          v149 = __ldrex(v148);
        while ( __strex(v149 - 1, v148) );
        v149 = (*v148)--;
      if ( v149 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v145 + 12))(v145);
  v497 = 2003;
    (int)&v498,
    (int)&v561,
    (unsigned int *)&v497,
  v150 = *(_QWORD *)&v498;
  *(_DWORD *)&v498 = 0;
  v499 = 0;
  v545 = v150;
  v151 = v546;
  v546 = HIDWORD(v150);
  if ( v151 )
    v152 = (unsigned int *)(v151 + 4);
        v153 = __ldrex(v152);
      while ( __strex(v153 - 1, v152) );
      v153 = (*v152)--;
    if ( v153 == 1 )
      v154 = (unsigned int *)(v151 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v151 + 8))(v151);
          v155 = __ldrex(v154);
        while ( __strex(v155 - 1, v154) );
        v155 = (*v154)--;
      if ( v155 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v151 + 12))(v151);
  v156 = v499;
  if ( v499 )
    v157 = (unsigned int *)(v499 + 4);
        v158 = __ldrex(v157);
      while ( __strex(v158 - 1, v157) );
      v158 = (*v157)--;
    if ( v158 == 1 )
      v159 = (unsigned int *)(v156 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v156 + 8))(v156);
          v160 = __ldrex(v159);
        while ( __strex(v160 - 1, v159) );
        v160 = (*v159)--;
      if ( v160 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v156 + 12))(v156);
  v494 = 4;
    (int)&v495,
    (int)&v562,
    (unsigned int *)&v494,
  v161 = *(_QWORD *)&v495;
  *(_DWORD *)&v495 = 0;
  v496 = 0;
  v545 = v161;
  v162 = v546;
  v546 = HIDWORD(v161);
  if ( v162 )
    v163 = (unsigned int *)(v162 + 4);
        v164 = __ldrex(v163);
      while ( __strex(v164 - 1, v163) );
      v164 = (*v163)--;
    if ( v164 == 1 )
      v165 = (unsigned int *)(v162 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v162 + 8))(v162);
          v166 = __ldrex(v165);
        while ( __strex(v166 - 1, v165) );
        v166 = (*v165)--;
      if ( v166 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v162 + 12))(v162);
  v167 = v496;
  if ( v496 )
    v168 = (unsigned int *)(v496 + 4);
        v169 = __ldrex(v168);
      while ( __strex(v169 - 1, v168) );
      v169 = (*v168)--;
    if ( v169 == 1 )
      v170 = (unsigned int *)(v167 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v167 + 8))(v167);
          v171 = __ldrex(v170);
        while ( __strex(v171 - 1, v170) );
        v171 = (*v170)--;
      if ( v171 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v167 + 12))(v167);
  v491 = 5;
  j_std::__shared_ptr<AddMushroomIslandLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<AddMushroomIslandLayer>,int,std::shared_ptr<Layer> &>(
    (int)&v492,
    (int)&v563,
    (unsigned int *)&v491,
  v172 = *(_QWORD *)&v492;
  *(_DWORD *)&v492 = 0;
  v493 = 0;
  v545 = v172;
  v173 = v546;
  v546 = HIDWORD(v172);
  if ( v173 )
    v174 = (unsigned int *)(v173 + 4);
        v175 = __ldrex(v174);
      while ( __strex(v175 - 1, v174) );
      v175 = (*v174)--;
    if ( v175 == 1 )
      v176 = (unsigned int *)(v173 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v173 + 8))(v173);
          v177 = __ldrex(v176);
        while ( __strex(v177 - 1, v176) );
        v177 = (*v176)--;
      if ( v177 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v173 + 12))(v173);
  v178 = v493;
  if ( v493 )
    v179 = (unsigned int *)(v493 + 4);
        v180 = __ldrex(v179);
      while ( __strex(v180 - 1, v179) );
      v180 = (*v179)--;
    if ( v180 == 1 )
      v181 = (unsigned int *)(v178 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v178 + 8))(v178);
          v182 = __ldrex(v181);
        while ( __strex(v182 - 1, v181) );
        v182 = (*v181)--;
      if ( v182 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v178 + 12))(v178);
  v488 = 4;
  j_std::__shared_ptr<AddDeepOceanLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<AddDeepOceanLayer>,int,std::shared_ptr<Layer> &>(
    (int)&v489,
    (int)&v564,
    (unsigned int *)&v488,
  v183 = *(_QWORD *)&v489;
  *(_DWORD *)&v489 = 0;
  v490 = 0;
  v545 = v183;
  v184 = v546;
  v546 = HIDWORD(v183);
  if ( v184 )
    v185 = (unsigned int *)(v184 + 4);
        v186 = __ldrex(v185);
      while ( __strex(v186 - 1, v185) );
      v186 = (*v185)--;
    if ( v186 == 1 )
      v187 = (unsigned int *)(v184 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v184 + 8))(v184);
          v188 = __ldrex(v187);
        while ( __strex(v188 - 1, v187) );
        v188 = (*v187)--;
      if ( v188 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v184 + 12))(v184);
  v189 = v490;
  if ( v490 )
    v190 = (unsigned int *)(v490 + 4);
        v191 = __ldrex(v190);
      while ( __strex(v191 - 1, v190) );
      v191 = (*v190)--;
    if ( v191 == 1 )
      v192 = (unsigned int *)(v189 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v189 + 8))(v189);
          v193 = __ldrex(v192);
        while ( __strex(v193 - 1, v192) );
        v193 = (*v192)--;
      if ( v193 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v189 + 12))(v189);
  j_ZoomLayer::zoom((unsigned __int64 *)&v486, 1000, (int)&v545, 0);
  v194 = *(_QWORD *)&v486;
  *(_DWORD *)&v486 = 0;
  v487 = 0;
  v545 = v194;
  v195 = v546;
  v546 = HIDWORD(v194);
  if ( v195 )
    v196 = (unsigned int *)(v195 + 4);
        v197 = __ldrex(v196);
      while ( __strex(v197 - 1, v196) );
      v197 = (*v196)--;
    if ( v197 == 1 )
      v198 = (unsigned int *)(v195 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v195 + 8))(v195);
          v199 = __ldrex(v198);
        while ( __strex(v199 - 1, v198) );
        v199 = (*v198)--;
      if ( v199 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v195 + 12))(v195);
  v200 = v487;
  if ( v487 )
    v201 = (unsigned int *)(v487 + 4);
        v202 = __ldrex(v201);
      while ( __strex(v202 - 1, v201) );
      v202 = (*v201)--;
    if ( v202 == 1 )
      v203 = (unsigned int *)(v200 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v200 + 8))(v200);
          v204 = __ldrex(v203);
        while ( __strex(v204 - 1, v203) );
        v204 = (*v203)--;
      if ( v204 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v200 + 12))(v200);
  v205 = 4;
  v484 = v545;
  v485 = v546;
  if ( !v547 )
    v205 = 2;
  v431 = v205;
  if ( v546 )
    v206 = (unsigned int *)(v546 + 4);
        v207 = __ldrex(v206);
      while ( __strex(v207 + 1, v206) );
      ++*v206;
  j_ZoomLayer::zoom((unsigned __int64 *)&v482, 1000, (int)&v484, 0);
  v208 = *(_QWORD *)&v482;
  *(_DWORD *)&v482 = 0;
  v483 = 0;
  v484 = v208;
  v209 = v485;
  v485 = HIDWORD(v208);
  if ( v209 )
    v210 = (unsigned int *)(v209 + 4);
        v211 = __ldrex(v210);
      while ( __strex(v211 - 1, v210) );
      v211 = (*v210)--;
    if ( v211 == 1 )
      v212 = (unsigned int *)(v209 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v209 + 8))(v209);
          v213 = __ldrex(v212);
        while ( __strex(v213 - 1, v212) );
        v213 = (*v212)--;
      if ( v213 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v209 + 12))(v209);
  v214 = v483;
  if ( v483 )
    v215 = (unsigned int *)(v483 + 4);
        v216 = __ldrex(v215);
      while ( __strex(v216 - 1, v215) );
      v216 = (*v215)--;
    if ( v216 == 1 )
      v217 = (unsigned int *)(v214 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v214 + 8))(v214);
          v218 = __ldrex(v217);
        while ( __strex(v218 - 1, v217) );
        v218 = (*v217)--;
      if ( v218 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v214 + 12))(v214);
  v479 = 100;
  j_std::__shared_ptr<RiverInitLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RiverInitLayer>,int,std::shared_ptr<Layer> &>(
    (int)&v480,
    (int)&v565,
    (unsigned int *)&v479,
    (int)&v484);
  v219 = *(_QWORD *)&v480;
  *(_DWORD *)&v480 = 0;
  v481 = 0;
  v484 = v219;
  v220 = v485;
  v485 = HIDWORD(v219);
  if ( v220 )
    v221 = (unsigned int *)(v220 + 4);
        v222 = __ldrex(v221);
      while ( __strex(v222 - 1, v221) );
      v222 = (*v221)--;
    if ( v222 == 1 )
      v223 = (unsigned int *)(v220 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v220 + 8))(v220);
          v224 = __ldrex(v223);
        while ( __strex(v224 - 1, v223) );
        v224 = (*v223)--;
      if ( v224 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v220 + 12))(v220);
  v225 = v481;
  if ( v481 )
    v226 = (unsigned int *)(v481 + 4);
        v227 = __ldrex(v226);
      while ( __strex(v227 - 1, v226) );
      v227 = (*v226)--;
    if ( v227 == 1 )
      v228 = (unsigned int *)(v225 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v225 + 8))(v225);
          v229 = __ldrex(v228);
        while ( __strex(v229 - 1, v228) );
        v229 = (*v228)--;
      if ( v229 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v225 + 12))(v225);
  *(_DWORD *)v5 = v545;
  v230 = *(_DWORD *)(v5 + 4);
  v231 = v546;
  if ( v546 != v230 )
    if ( v546 )
      v232 = (unsigned int *)(v546 + 4);
          v233 = __ldrex(v232);
        while ( __strex(v233 + 1, v232) );
        v230 = *(_DWORD *)(v5 + 4);
        ++*v232;
    if ( v230 )
      v234 = (unsigned int *)(v230 + 4);
          v235 = __ldrex(v234);
        while ( __strex(v235 - 1, v234) );
        v235 = (*v234)--;
      if ( v235 == 1 )
        v236 = (unsigned int *)(v230 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v230 + 8))(v230);
        if ( &pthread_create )
        {
          __dmb();
          do
            v237 = __ldrex(v236);
          while ( __strex(v237 - 1, v236) );
        }
        else
          v237 = (*v236)--;
        if ( v237 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v230 + 12))(v230);
    *(_DWORD *)(v5 + 4) = v231;
  v476 = 200;
  j_std::__shared_ptr<BiomeInitLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<BiomeInitLayer>,int,std::shared_ptr<Layer> &,GeneratorType &>(
    (int)&v477,
    (int)&v566,
    (unsigned int *)&v476,
    v5,
    &v547);
  v238 = *(_QWORD *)&v477;
  *(_DWORD *)&v477 = 0;
  v478 = 0;
  *(_DWORD *)v5 = v238;
  v239 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v5 + 4) = HIDWORD(v238);
  if ( v239 )
    v240 = (unsigned int *)(v239 + 4);
        v241 = __ldrex(v240);
      while ( __strex(v241 - 1, v240) );
      v241 = (*v240)--;
    if ( v241 == 1 )
      v242 = (unsigned int *)(v239 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v239 + 8))(v239);
          v243 = __ldrex(v242);
        while ( __strex(v243 - 1, v242) );
        v243 = (*v242)--;
      if ( v243 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v239 + 12))(v239);
  v244 = v478;
  if ( v478 )
    v245 = (unsigned int *)(v478 + 4);
        v246 = __ldrex(v245);
      while ( __strex(v246 - 1, v245) );
      v246 = (*v245)--;
    if ( v246 == 1 )
      v247 = (unsigned int *)(v244 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v244 + 8))(v244);
          v248 = __ldrex(v247);
        while ( __strex(v248 - 1, v247) );
        v248 = (*v247)--;
      if ( v248 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v244 + 12))(v244);
  j_ZoomLayer::zoom((unsigned __int64 *)&v474, 1000, v5, 2);
  v249 = *(_QWORD *)&v474;
  *(_DWORD *)&v474 = 0;
  v475 = 0;
  *(_DWORD *)v5 = v249;
  v250 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v5 + 4) = HIDWORD(v249);
  if ( v250 )
    v251 = (unsigned int *)(v250 + 4);
        v252 = __ldrex(v251);
      while ( __strex(v252 - 1, v251) );
      v252 = (*v251)--;
    if ( v252 == 1 )
      v253 = (unsigned int *)(v250 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v250 + 8))(v250);
          v254 = __ldrex(v253);
        while ( __strex(v254 - 1, v253) );
        v254 = (*v253)--;
      if ( v254 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v250 + 12))(v250);
  v255 = v475;
  if ( v475 )
    v256 = (unsigned int *)(v475 + 4);
        v257 = __ldrex(v256);
      while ( __strex(v257 - 1, v256) );
      v257 = (*v256)--;
    if ( v257 == 1 )
      v258 = (unsigned int *)(v255 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v255 + 8))(v255);
          v259 = __ldrex(v258);
        while ( __strex(v259 - 1, v258) );
        v259 = (*v258)--;
      if ( v259 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v255 + 12))(v255);
  v471 = 1000;
  v260 = v547;
  if ( v547 != 1 )
    v260 = 0;
  v470 = v260;
  j_std::__shared_ptr<BiomeEdgeLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<BiomeEdgeLayer>,int,std::shared_ptr<Layer> &,bool>(
    (int)&v472,
    (int)&v567,
    (unsigned int *)&v471,
    &v470);
  v261 = *(_QWORD *)&v472;
  *(_DWORD *)&v472 = 0;
  v473 = 0;
  *(_DWORD *)v5 = v261;
  v262 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v5 + 4) = HIDWORD(v261);
  if ( v262 )
    v263 = (unsigned int *)(v262 + 4);
        v264 = __ldrex(v263);
      while ( __strex(v264 - 1, v263) );
      v264 = (*v263)--;
    if ( v264 == 1 )
      v265 = (unsigned int *)(v262 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v262 + 8))(v262);
          v266 = __ldrex(v265);
        while ( __strex(v266 - 1, v265) );
        v266 = (*v265)--;
      if ( v266 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v262 + 12))(v262);
  v267 = v473;
  if ( v473 )
    v268 = (unsigned int *)(v473 + 4);
        v269 = __ldrex(v268);
      while ( __strex(v269 - 1, v268) );
      v269 = (*v268)--;
    if ( v269 == 1 )
      v270 = (unsigned int *)(v267 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v267 + 8))(v267);
          v271 = __ldrex(v270);
        while ( __strex(v271 - 1, v270) );
        v271 = (*v270)--;
      if ( v271 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v267 + 12))(v267);
  v468 = v484;
  v469 = v485;
  if ( v485 )
    v272 = (unsigned int *)(v485 + 4);
        v273 = __ldrex(v272);
      while ( __strex(v273 + 1, v272) );
      ++*v272;
  j_ZoomLayer::zoom((unsigned __int64 *)&v466, 1000, (int)&v468, 2);
  v274 = *(_QWORD *)&v466;
  *(_DWORD *)&v466 = 0;
  v467 = 0;
  v468 = v274;
  v275 = v469;
  v469 = HIDWORD(v274);
  if ( v275 )
    v276 = (unsigned int *)(v275 + 4);
        v277 = __ldrex(v276);
      while ( __strex(v277 - 1, v276) );
      v277 = (*v276)--;
    if ( v277 == 1 )
      v278 = (unsigned int *)(v275 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v275 + 8))(v275);
          v279 = __ldrex(v278);
        while ( __strex(v279 - 1, v278) );
        v279 = (*v278)--;
      if ( v279 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v275 + 12))(v275);
  v280 = v467;
  if ( v467 )
    v281 = (unsigned int *)(v467 + 4);
        v282 = __ldrex(v281);
      while ( __strex(v282 - 1, v281) );
      v282 = (*v281)--;
    if ( v282 == 1 )
      v283 = (unsigned int *)(v280 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v280 + 8))(v280);
          v284 = __ldrex(v283);
        while ( __strex(v284 - 1, v283) );
        v284 = (*v283)--;
      if ( v284 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v280 + 12))(v280);
  v463 = 1000;
  j_j__ZNSt12__shared_ptrI16RegionHillsLayerLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJiRSt10shared_ptrI5LayerES9_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v464,
    (int)&v568,
    (unsigned int *)&v463,
    (int)&v468);
  v285 = *(_QWORD *)&v464;
  *(_DWORD *)&v464 = 0;
  v465 = 0;
  *(_DWORD *)v5 = v285;
  v286 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v5 + 4) = HIDWORD(v285);
  if ( v286 )
    v287 = (unsigned int *)(v286 + 4);
        v288 = __ldrex(v287);
      while ( __strex(v288 - 1, v287) );
      v288 = (*v287)--;
    if ( v288 == 1 )
      v289 = (unsigned int *)(v286 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v286 + 8))(v286);
          v290 = __ldrex(v289);
        while ( __strex(v290 - 1, v289) );
        v290 = (*v289)--;
      if ( v290 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v286 + 12))(v286);
  v291 = v465;
  if ( v465 )
    v292 = (unsigned int *)(v465 + 4);
        v293 = __ldrex(v292);
      while ( __strex(v293 - 1, v292) );
      v293 = (*v292)--;
    if ( v293 == 1 )
      v294 = (unsigned int *)(v291 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v291 + 8))(v291);
          v295 = __ldrex(v294);
        while ( __strex(v295 - 1, v294) );
        v295 = (*v294)--;
      if ( v295 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v291 + 12))(v291);
  j_ZoomLayer::zoom((unsigned __int64 *)&v461, 1000, (int)&v484, 2);
  v296 = *(_QWORD *)&v461;
  *(_DWORD *)&v461 = 0;
  v462 = 0;
  v484 = v296;
  v297 = v485;
  v485 = HIDWORD(v296);
  if ( v297 )
    v298 = (unsigned int *)(v297 + 4);
        v299 = __ldrex(v298);
      while ( __strex(v299 - 1, v298) );
      v299 = (*v298)--;
    if ( v299 == 1 )
      v300 = (unsigned int *)(v297 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v297 + 8))(v297);
          v301 = __ldrex(v300);
        while ( __strex(v301 - 1, v300) );
        v301 = (*v300)--;
      if ( v301 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v297 + 12))(v297);
  v302 = v462;
  if ( v462 )
    v303 = (unsigned int *)(v462 + 4);
        v304 = __ldrex(v303);
      while ( __strex(v304 - 1, v303) );
      v304 = (*v303)--;
    if ( v304 == 1 )
      v305 = (unsigned int *)(v302 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v302 + 8))(v302);
          v306 = __ldrex(v305);
        while ( __strex(v306 - 1, v305) );
        v306 = (*v305)--;
      if ( v306 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v302 + 12))(v302);
  j_ZoomLayer::zoom((unsigned __int64 *)&v459, 1000, (int)&v484, v431);
  v307 = *(_QWORD *)&v459;
  *(_DWORD *)&v459 = 0;
  v460 = 0;
  v484 = v307;
  v308 = v485;
  v485 = HIDWORD(v307);
  if ( v308 )
    v309 = (unsigned int *)(v308 + 4);
        v310 = __ldrex(v309);
      while ( __strex(v310 - 1, v309) );
      v310 = (*v309)--;
    if ( v310 == 1 )
      v311 = (unsigned int *)(v308 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v308 + 8))(v308);
          v312 = __ldrex(v311);
        while ( __strex(v312 - 1, v311) );
        v312 = (*v311)--;
      if ( v312 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v308 + 12))(v308);
  v313 = v460;
  if ( v460 )
    v314 = (unsigned int *)(v460 + 4);
        v315 = __ldrex(v314);
      while ( __strex(v315 - 1, v314) );
      v315 = (*v314)--;
    if ( v315 == 1 )
      v316 = (unsigned int *)(v313 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v313 + 8))(v313);
          v317 = __ldrex(v316);
        while ( __strex(v317 - 1, v316) );
        v317 = (*v316)--;
      if ( v317 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v313 + 12))(v313);
  v456 = 1;
  j_std::__shared_ptr<RiverLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RiverLayer>,int,std::shared_ptr<Layer> &>(
    (int)&v457,
    (int)&v569,
    (unsigned int *)&v456,
  v318 = *(_QWORD *)&v457;
  *(_DWORD *)&v457 = 0;
  v458 = 0;
  v484 = v318;
  v319 = v485;
  v485 = HIDWORD(v318);
  if ( v319 )
    v320 = (unsigned int *)(v319 + 4);
        v321 = __ldrex(v320);
      while ( __strex(v321 - 1, v320) );
      v321 = (*v320)--;
    if ( v321 == 1 )
      v322 = (unsigned int *)(v319 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v319 + 8))(v319);
          v323 = __ldrex(v322);
        while ( __strex(v323 - 1, v322) );
        v323 = (*v322)--;
      if ( v323 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v319 + 12))(v319);
  v324 = v458;
  if ( v458 )
    v325 = (unsigned int *)(v458 + 4);
        v326 = __ldrex(v325);
      while ( __strex(v326 - 1, v325) );
      v326 = (*v325)--;
    if ( v326 == 1 )
      v327 = (unsigned int *)(v324 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v324 + 8))(v324);
          v328 = __ldrex(v327);
        while ( __strex(v328 - 1, v327) );
        v328 = (*v327)--;
      if ( v328 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v324 + 12))(v324);
  v453 = 1000;
  j_std::__shared_ptr<SmoothLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<SmoothLayer>,int,std::shared_ptr<Layer> &>(
    (int)&v454,
    (int)&v570,
    (unsigned int *)&v453,
  v329 = *(_QWORD *)&v454;
  *(_DWORD *)&v454 = 0;
  v455 = 0;
  v484 = v329;
  v330 = v485;
  v485 = HIDWORD(v329);
  if ( v330 )
    v331 = (unsigned int *)(v330 + 4);
        v332 = __ldrex(v331);
      while ( __strex(v332 - 1, v331) );
      v332 = (*v331)--;
    if ( v332 == 1 )
      v333 = (unsigned int *)(v330 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v330 + 8))(v330);
          v334 = __ldrex(v333);
        while ( __strex(v334 - 1, v333) );
        v334 = (*v333)--;
      if ( v334 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v330 + 12))(v330);
  v335 = v455;
  if ( v455 )
    v336 = (unsigned int *)(v455 + 4);
        v337 = __ldrex(v336);
      while ( __strex(v337 - 1, v336) );
      v337 = (*v336)--;
    if ( v337 == 1 )
      v338 = (unsigned int *)(v335 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v335 + 8))(v335);
          v339 = __ldrex(v338);
        while ( __strex(v339 - 1, v338) );
        v339 = (*v338)--;
      if ( v339 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v335 + 12))(v335);
  v450 = 1001;
  j_std::__shared_ptr<RareBiomeSpotLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<RareBiomeSpotLayer>,int,std::shared_ptr<Layer> &>(
    (int)&v451,
    (int)&v571,
    (unsigned int *)&v450,
    v5);
  v340 = *(_QWORD *)&v451;
  *(_DWORD *)&v451 = 0;
  v452 = 0;
  *(_DWORD *)v5 = v340;
  v341 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v5 + 4) = HIDWORD(v340);
  if ( v341 )
    v342 = (unsigned int *)(v341 + 4);
        v343 = __ldrex(v342);
      while ( __strex(v343 - 1, v342) );
      v343 = (*v342)--;
    if ( v343 == 1 )
      v344 = (unsigned int *)(v341 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v341 + 8))(v341);
          v345 = __ldrex(v344);
        while ( __strex(v345 - 1, v344) );
        v345 = (*v344)--;
      if ( v345 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v341 + 12))(v341);
  v430 = v6;
  v346 = v452;
  if ( v452 )
    v347 = (unsigned int *)(v452 + 4);
        v348 = __ldrex(v347);
      while ( __strex(v348 - 1, v347) );
      v348 = (*v347)--;
    if ( v348 == 1 )
      v349 = (unsigned int *)(v346 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v346 + 8))(v346);
          v350 = __ldrex(v349);
        while ( __strex(v350 - 1, v349) );
        v350 = (*v349)--;
      if ( v350 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v346 + 12))(v346);
  v351 = 0;
  do
    v447 = v351 + 1000;
    j_std::__shared_ptr<ZoomLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ZoomLayer>,int,std::shared_ptr<Layer> &>(
      (int)&v448,
      (int)&v573,
      (unsigned int *)&v447,
      v5);
    v352 = *(_QWORD *)&v448;
    *(_DWORD *)&v448 = 0;
    v449 = 0;
    *(_DWORD *)v5 = v352;
    v353 = *(_DWORD *)(v5 + 4);
    *(_DWORD *)(v5 + 4) = HIDWORD(v352);
    if ( v353 )
      v354 = (unsigned int *)(v353 + 4);
          v355 = __ldrex(v354);
        while ( __strex(v355 - 1, v354) );
        v355 = (*v354)--;
      if ( v355 == 1 )
        v356 = (unsigned int *)(v353 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v353 + 8))(v353);
            v357 = __ldrex(v356);
          while ( __strex(v357 - 1, v356) );
          v357 = (*v356)--;
        if ( v357 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v353 + 12))(v353);
    v358 = v449;
    if ( v449 )
      v359 = (unsigned int *)(v449 + 4);
          v360 = __ldrex(v359);
        while ( __strex(v360 - 1, v359) );
        v360 = (*v359)--;
      if ( v360 == 1 )
        v361 = (unsigned int *)(v358 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v358 + 8))(v358);
            v362 = __ldrex(v361);
          while ( __strex(v362 - 1, v361) );
          v362 = (*v361)--;
        if ( v362 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v358 + 12))(v358);
    if ( v351 == 1 )
      v441 = 1000;
      j_std::__shared_ptr<ShoreLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ShoreLayer>,int,std::shared_ptr<Layer> &>(
        (int)&v442,
        (int)&v575,
        (unsigned int *)&v441,
        v5);
      v367 = *(_QWORD *)&v442;
      *(_DWORD *)&v442 = 0;
      v443 = 0;
      *(_DWORD *)v5 = v367;
      v368 = *(_DWORD *)(v5 + 4);
      *(_DWORD *)(v5 + 4) = HIDWORD(v367);
      if ( v368 )
        v369 = (unsigned int *)(v368 + 4);
            v370 = __ldrex(v369);
          while ( __strex(v370 - 1, v369) );
          v370 = (*v369)--;
        if ( v370 == 1 )
          v373 = (unsigned int *)(v368 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v368 + 8))(v368);
          if ( &pthread_create )
          {
            __dmb();
            do
              v374 = __ldrex(v373);
            while ( __strex(v374 - 1, v373) );
          }
          else
            v374 = (*v373)--;
          if ( v374 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v368 + 12))(v368);
      v375 = v443;
      if ( v443 )
        v380 = (unsigned int *)(v443 + 4);
            v381 = __ldrex(v380);
          while ( __strex(v381 - 1, v380) );
          v381 = (*v380)--;
        if ( v381 == 1 )
          v378 = (unsigned int *)(v375 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v375 + 8))(v375);
              v379 = __ldrex(v378);
            while ( __strex(v379 - 1, v378) );
LABEL_961:
            if ( v379 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v375 + 12))(v375);
            goto LABEL_963;
LABEL_960:
          v379 = (*v378)--;
          goto LABEL_961;
    else if ( !v351 )
      v444 = 3;
      j_std::__shared_ptr<AddIslandLayer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<AddIslandLayer>,int,std::shared_ptr<Layer> &>(
        (int)&v445,
        (int)&v574,
        (unsigned int *)&v444,
      v363 = *(_QWORD *)&v445;
      *(_DWORD *)&v445 = 0;
      v446 = 0;
      *(_DWORD *)v5 = v363;
      v364 = *(_DWORD *)(v5 + 4);
      *(_DWORD *)(v5 + 4) = HIDWORD(v363);
      if ( v364 )
        v365 = (unsigned int *)(v364 + 4);
            v366 = __ldrex(v365);
          while ( __strex(v366 - 1, v365) );
          v366 = (*v365)--;
        if ( v366 == 1 )
          v371 = (unsigned int *)(v364 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v364 + 8))(v364);
              v372 = __ldrex(v371);
            while ( __strex(v372 - 1, v371) );
            v372 = (*v371)--;
          if ( v372 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v364 + 12))(v364);
      v375 = v446;
      if ( v446 )
        v376 = (unsigned int *)(v446 + 4);
            v377 = __ldrex(v376);
          while ( __strex(v377 - 1, v376) );
          v377 = (*v376)--;
        if ( v377 == 1 )
            goto LABEL_961;
          goto LABEL_960;
LABEL_963:
    ++v351;
  while ( v351 != v431 );
  v438 = 1000;
    (int)&v439,
    (int)&v572,
    (unsigned int *)&v438,
  v382 = *(_QWORD *)&v439;
  *(_DWORD *)&v439 = 0;
  v440 = 0;
  *(_DWORD *)v5 = v382;
  v383 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v5 + 4) = HIDWORD(v382);
  if ( v383 )
    v384 = (unsigned int *)(v383 + 4);
        v385 = __ldrex(v384);
      while ( __strex(v385 - 1, v384) );
      v385 = (*v384)--;
    if ( v385 == 1 )
      v386 = (unsigned int *)(v383 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v383 + 8))(v383);
          v387 = __ldrex(v386);
        while ( __strex(v387 - 1, v386) );
        v387 = (*v386)--;
      if ( v387 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v383 + 12))(v383);
  v388 = v440;
  if ( v440 )
    v389 = (unsigned int *)(v440 + 4);
        v390 = __ldrex(v389);
      while ( __strex(v390 - 1, v389) );
      v390 = (*v389)--;
    if ( v390 == 1 )
      v391 = (unsigned int *)(v388 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v388 + 8))(v388);
          v392 = __ldrex(v391);
        while ( __strex(v392 - 1, v391) );
        v392 = (*v391)--;
      if ( v392 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v388 + 12))(v388);
  v435 = 100;
  j_j__ZNSt12__shared_ptrI15RiverMixerLayerLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJiRSt10shared_ptrI5LayerES9_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v436,
    (int)&v576,
    (unsigned int *)&v435,
  v393 = *(_QWORD *)&v436;
  *(_DWORD *)&v436 = 0;
  v437 = 0;
  *(_DWORD *)v5 = v393;
  v394 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v5 + 4) = HIDWORD(v393);
  if ( v394 )
    v395 = (unsigned int *)(v394 + 4);
        v396 = __ldrex(v395);
      while ( __strex(v396 - 1, v395) );
      v396 = (*v395)--;
    if ( v396 == 1 )
      v397 = (unsigned int *)(v394 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v394 + 8))(v394);
          v398 = __ldrex(v397);
        while ( __strex(v398 - 1, v397) );
        v398 = (*v397)--;
      if ( v398 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v394 + 12))(v394);
  v399 = v437;
  if ( v437 )
    v400 = (unsigned int *)(v437 + 4);
        v401 = __ldrex(v400);
      while ( __strex(v401 - 1, v400) );
      v401 = (*v400)--;
    if ( v401 == 1 )
      v402 = (unsigned int *)(v399 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v399 + 8))(v399);
          v403 = __ldrex(v402);
        while ( __strex(v403 - 1, v402) );
        v403 = (*v402)--;
      if ( v403 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v399 + 12))(v399);
  v404 = *(_DWORD *)(v5 + 4);
  if ( v404 )
    v405 = (unsigned int *)(v404 + 4);
        v406 = __ldrex(v405);
      while ( __strex(v406 + 1, v405) );
      ++*v405;
  v432 = 10;
  j_std::__shared_ptr<VoronoiZoom,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<VoronoiZoom>,int,std::shared_ptr<Layer> &>(
    (int)&v433,
    (int)&v577,
    (unsigned int *)&v432,
  v407 = *(_QWORD *)&v433;
  *(_DWORD *)&v433 = 0;
  v434 = 0;
  *(_DWORD *)v430 = v407;
  v408 = *(_DWORD *)(v430 + 4);
  *(_DWORD *)(v430 + 4) = HIDWORD(v407);
  if ( v408 )
    v409 = (unsigned int *)(v408 + 4);
        v410 = __ldrex(v409);
      while ( __strex(v410 - 1, v409) );
      v410 = (*v409)--;
    if ( v410 == 1 )
      v411 = (unsigned int *)(v408 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v408 + 8))(v408);
          v412 = __ldrex(v411);
        while ( __strex(v412 - 1, v411) );
        v412 = (*v411)--;
      if ( v412 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v408 + 12))(v408);
  v413 = v434;
  if ( v434 )
    v414 = (unsigned int *)(v434 + 4);
        v415 = __ldrex(v414);
      while ( __strex(v415 - 1, v414) );
      v415 = (*v414)--;
    if ( v415 == 1 )
      v416 = (unsigned int *)(v413 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v413 + 8))(v413);
          v417 = __ldrex(v416);
        while ( __strex(v417 - 1, v416) );
        v417 = (*v416)--;
      if ( v417 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v413 + 12))(v413);
  (*(void (**)(void))(**(_DWORD **)v5 + 8))();
  result = (*(int (**)(void))(**(_DWORD **)v430 + 8))();
    v419 = (unsigned int *)(v404 + 4);
        result = __ldrex(v419);
      while ( __strex(result - 1, v419) );
      result = (*v419)--;
    if ( result == 1 )
      v420 = (unsigned int *)(v404 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v404 + 8))(v404);
          result = __ldrex(v420);
        while ( __strex(result - 1, v420) );
        result = (*v420)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v404 + 12))(v404);
  v421 = v469;
  if ( v469 )
    v422 = (unsigned int *)(v469 + 4);
        result = __ldrex(v422);
      while ( __strex(result - 1, v422) );
      result = (*v422)--;
      v423 = (unsigned int *)(v421 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v421 + 8))(v421);
          result = __ldrex(v423);
        while ( __strex(result - 1, v423) );
        result = (*v423)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v421 + 12))(v421);
  v424 = v485;
    v425 = (unsigned int *)(v485 + 4);
        result = __ldrex(v425);
      while ( __strex(result - 1, v425) );
      result = (*v425)--;
      v426 = (unsigned int *)(v424 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v424 + 8))(v424);
          result = __ldrex(v426);
        while ( __strex(result - 1, v426) );
        result = (*v426)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v424 + 12))(v424);
  v427 = v546;
    v428 = (unsigned int *)(v546 + 4);
        result = __ldrex(v428);
      while ( __strex(result - 1, v428) );
      result = (*v428)--;
      v429 = (unsigned int *)(v427 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v427 + 8))(v427);
          result = __ldrex(v429);
        while ( __strex(result - 1, v429) );
        result = (*v429)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v427 + 12))(v427);
  return result;
}


Layer *__fastcall Layer::~Layer(Layer *this)
{
  Layer *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r0@15
  unsigned int *v8; // r2@16
  unsigned int v9; // r1@18

  v1 = this;
  *(_DWORD *)this = &off_2724810;
  v2 = *((_DWORD *)this + 11);
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
  v7 = *((_DWORD *)v1 + 2);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 8);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      (*(void (**)(void))(*(_DWORD *)v7 + 12))();
  return v1;
}


int __fastcall Layer::Layer(int result, unsigned int a2)
{
  unsigned __int64 v2; // r4@1
  unsigned int v3; // r3@1
  __int64 v4; // r1@1

  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)result = &off_2724810;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  v2 = __PAIR__(
         ((1284865837 * a2 - 144211633) * (unsigned __int64)a2 >> 32)
       + ((__PAIR__((1284865837 * (unsigned __int64)a2 >> 32) + 1481765933 * a2, 1284865837 * a2) + 1442695040888963407LL) >> 32)
       * a2,
         (1284865837 * a2 - 144211633) * a2)
     + a2;
  v3 = ((6364136223846793005LL * __PAIR__(HIDWORD(v2), (1284865837 * a2 - 144211633) * a2 + a2) + 1442695040888963407LL)
      * v2
      + a2) >> 32;
  HIDWORD(v4) = ((6364136223846793005LL
                * __PAIR__(v3, (1284865837 * ((1284865837 * a2 - 144211633) * a2 + a2) - 144211633) * v2 + a2)
                + 1442695040888963407LL)
               * __PAIR__(v3, (1284865837 * ((1284865837 * a2 - 144211633) * a2 + a2) - 144211633) * v2 + a2)
               + a2) >> 32;
  LODWORD(v4) = (1284865837 * ((1284865837 * ((1284865837 * a2 - 144211633) * a2 + a2) - 144211633) * v2 + a2)
               - 144211633)
              * ((1284865837 * ((1284865837 * a2 - 144211633) * a2 + a2) - 144211633) * v2 + a2)
              + a2;
  *(_QWORD *)(result + 32) = v4;
  return result;
}


int __fastcall Layer::_isSame(Layer *this, int a2, int a3)
{
  Biome *v3; // r4@1
  Layer *v4; // r1@2
  int result; // r0@5
  int v6; // r5@9
  int v7; // r1@9
  int v8; // r1@9
  bool v9; // zf@9

  v3 = (Biome *)a2;
  if ( this == (Layer *)a2 )
    return 1;
  v4 = *(Layer **)(Biome::mesaRock + 268);
  if ( v4 != this && *(Layer **)(Biome::mesaClearRock + 268) != this )
  {
    v6 = j_Biome::getBiome(this, (int)v4);
    v8 = j_Biome::getBiome(v3, v7);
    v9 = v6 == 0;
    result = 0;
    if ( v6 )
      v9 = v8 == 0;
    if ( !v9 )
      result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 96))(v6, v8);
  }
  else
    if ( v4 == v3 )
      return 1;
    if ( *(Biome **)(Biome::mesaClearRock + 268) == v3 )
      result = 1;
  return result;
}


int __fastcall Layer::nextRandom(Layer *this, int a2)
{
  int v2; // r4@1
  signed __int64 v3; // r0@1
  unsigned int v4; // r3@1
  int v5; // r2@1

  v2 = a2;
  HIDWORD(v3) = *((_QWORD *)this + 3) >> 32;
  v4 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = __PAIR__(
                            __CFADD__(1284865837 * v4, -144211633)
                          + (1284865837 * (unsigned __int64)v4 >> 32)
                          + 1481765933 * v4
                          + 1284865837 * HIDWORD(v3)
                          + 335903614,
                            1284865837 * v4 - 144211633)
                        * __PAIR__(HIDWORD(v3), v4)
                        + *((_QWORD *)this + 2);
  LODWORD(v3) = (v4 >> 24) | (HIDWORD(v3) << 8);
  SHIDWORD(v3) >>= 24;
  j_j___aeabi_ldivmod_0(v3, v2);
  if ( v5 < 0 )
    v5 += v2;
  return v5;
}


int __fastcall Layer::init(Layer *this, int a2, __int64 a3)
{
  Layer *v3; // r8@1
  char *v4; // r5@1
  int v5; // r0@1
  unsigned int v6; // r1@3
  unsigned __int64 v7; // kr10_8@3
  unsigned int v8; // r1@3
  __int64 v9; // kr18_8@3
  unsigned int v10; // r7@3
  unsigned __int64 v11; // kr28_8@3
  unsigned int v12; // kr08_4@3
  signed __int64 v13; // kr38_8@3
  int v14; // r0@3
  unsigned __int64 v15; // kr40_8@3
  int result; // r0@3

  v3 = this;
  *((_DWORD *)this + 4) = a3;
  v4 = (char *)this + 16;
  *((_DWORD *)this + 5) = HIDWORD(a3);
  v5 = *((_DWORD *)this + 10);
  if ( v5 )
  {
    (*(void (**)(void))(*(_DWORD *)v5 + 8))();
    a3 = *(_QWORD *)v4;
  }
  v6 = 1284865837 * a3 - 144211633;
  v7 = v6 * (unsigned __int64)(unsigned int)a3;
  v8 = HIDWORD(v7)
     + v6 * HIDWORD(a3)
     + ((unsigned __int64)(6364136223846793005LL * a3 + 1442695040888963407LL) >> 32) * a3;
  v9 = *((_QWORD *)v3 + 4);
  v10 = 1284865837 * (v7 + v9);
  v11 = __PAIR__(v8, (unsigned int)v7) + *((_QWORD *)v3 + 4);
  v12 = v10;
  v10 -= 144211633;
  v13 = 1284865837LL * (v10 * (unsigned int)v11 + (unsigned int)v9);
  v14 = HIDWORD(v9)
      + __CFADD__(v10 * v11, (_DWORD)v9)
      + (v10 * (unsigned __int64)(unsigned int)v11 >> 32)
      + v10 * ((__PAIR__(v8, (unsigned int)v7) + *((_QWORD *)v3 + 4)) >> 32)
      + ((__PAIR__(
            (1284865837 * (unsigned __int64)(unsigned int)(v7 + v9) >> 32)
          + 1481765933 * v11
          + 1284865837 * ((__PAIR__(v8, (unsigned int)v7) + *((_QWORD *)v3 + 4)) >> 32),
            v12)
        + 1442695040888963407LL) >> 32)
      * v11;
  v15 = (unsigned int)(v13 - 144211633) * (unsigned __int64)(v10 * (unsigned int)v11 + (unsigned int)v9);
  result = HIDWORD(v9)
         + __CFADD__((_DWORD)v15, (_DWORD)v9)
         + HIDWORD(v15)
         + (v13 - 144211633) * v14
         + (__CFADD__((_DWORD)v13, -144211633)
          + HIDWORD(v13)
          + 1481765933 * (v10 * v11 + v9)
          + 1284865837 * v14
          + 335903614)
         * (v10 * v11 + v9);
  *(_DWORD *)v4 = v15 + v9;
  *((_DWORD *)v4 + 1) = result;
  return result;
}


void __fastcall Layer::~Layer(Layer *this)
{
  Layer::~Layer(this);
}


void __fastcall Layer::~Layer(Layer *this)
{
  Layer *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r0@15
  unsigned int *v8; // r2@16
  unsigned int v9; // r1@18

  v1 = this;
  *(_DWORD *)this = &off_2724810;
  v2 = *((_DWORD *)this + 11);
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
  v7 = *((_DWORD *)v1 + 2);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 8);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      (*(void (**)(void))(*(_DWORD *)v7 + 12))();
  j_j_j__ZdlPv_7((void *)v1);
}
