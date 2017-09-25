

int __fastcall PotionBrewing::Ingredient::getItemId(PotionBrewing::Ingredient *this)
{
  return *(_DWORD *)this;
}


signed int __fastcall PotionBrewing::hasPotionMix(PotionBrewing *this, const ItemInstance *a2, const ItemInstance *a3)
{
  const ItemInstance *v3; // r4@1
  int v4; // r0@1
  int v5; // r5@1
  int v6; // r6@1
  bool v7; // zf@3
  int v8; // r7@9
  signed int v9; // r4@12
  int v10; // r5@13
  unsigned int *v11; // r1@14
  unsigned int v12; // r0@16
  unsigned int *v13; // r6@20
  unsigned int v14; // r0@22
  int v16; // [sp+4h] [bp-1Ch]@1
  int v17; // [sp+8h] [bp-18h]@13

  v3 = a2;
  v4 = ItemInstance::getAuxValue(this);
  Potion::getPotion((Potion *)&v16, v4);
  v5 = dword_2804B44;
  v6 = PotionBrewing::mPotionMixes;
  if ( PotionBrewing::mPotionMixes == dword_2804B44 )
  {
LABEL_12:
    v9 = 0;
  }
  else
    while ( 1 )
    {
      if ( *(_DWORD *)v6 == v16 )
      {
        v7 = *((_BYTE *)v3 + 15) == 0;
        if ( *((_BYTE *)v3 + 15) )
          v7 = *(_DWORD *)v3 == 0;
        if ( !v7 && !ItemInstance::isNull(v3) && *((_BYTE *)v3 + 14) && ItemInstance::getId(v3) == *(_DWORD *)(v6 + 8) )
        {
          v8 = *(_DWORD *)(v6 + 12);
          if ( v8 == -1 )
          {
            v9 = 1;
            goto LABEL_13;
          }
          if ( v8 == ItemInstance::getAuxValue(v3) )
            break;
        }
      }
      v6 += 24;
      if ( v5 == v6 )
        goto LABEL_12;
    }
    v9 = 1;
LABEL_13:
  v10 = v17;
  if ( v17 )
    v11 = (unsigned int *)(v17 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  return v9;
}


signed int __fastcall PotionBrewing::hasMix(PotionBrewing *this, const ItemInstance *a2, const ItemInstance *a3)
{
  PotionBrewing *v3; // r8@1
  const ItemInstance *v4; // r4@1
  __int64 v5; // r6@1
  int v6; // r5@2
  bool v7; // zf@4
  int v8; // r9@10
  signed int result; // r0@13

  v3 = this;
  v4 = a2;
  v5 = *(_QWORD *)&PotionBrewing::mContainerMixes;
  if ( PotionBrewing::mContainerMixes == dword_2804B50 )
  {
LABEL_13:
    result = PotionBrewing::hasPotionMix(v3, v4, a3);
  }
  else
    v6 = *(_DWORD *)this;
    while ( 1 )
    {
      if ( *(_WORD *)(*(_DWORD *)v5 + 18) == *(_WORD *)(v6 + 18) )
      {
        v7 = *((_BYTE *)v4 + 15) == 0;
        if ( *((_BYTE *)v4 + 15) )
          v7 = *(_DWORD *)v4 == 0;
        if ( !v7 && !ItemInstance::isNull(v4) )
        {
          if ( *((_BYTE *)v4 + 14) )
          {
            if ( ItemInstance::getId(v4) == *(_DWORD *)(v5 + 4) )
            {
              v8 = *(_DWORD *)(v5 + 8);
              if ( v8 == -1 || v8 == ItemInstance::getAuxValue(v4) )
                break;
            }
          }
        }
      }
      LODWORD(v5) = v5 + 16;
      if ( HIDWORD(v5) == (_DWORD)v5 )
        goto LABEL_13;
    }
    result = 1;
  return result;
}


signed int __fastcall PotionBrewing::isContainerIngredient(PotionBrewing *this, const ItemInstance *a2)
{
  PotionBrewing *v2; // r4@1
  int v3; // r5@1 OVERLAPPED
  int v4; // r6@1 OVERLAPPED
  bool v5; // zf@2
  int v6; // r7@8
  signed int result; // r0@11

  v2 = this;
  *(_QWORD *)&v3 = *(_QWORD *)&PotionBrewing::mContainerMixes;
  if ( PotionBrewing::mContainerMixes == dword_2804B50 )
  {
LABEL_11:
    result = 0;
  }
  else
    while ( 1 )
    {
      v5 = *((_BYTE *)v2 + 15) == 0;
      if ( *((_BYTE *)v2 + 15) )
        v5 = *(_DWORD *)v2 == 0;
      if ( !v5 && !ItemInstance::isNull(v2) )
      {
        if ( *((_BYTE *)v2 + 14) )
        {
          if ( ItemInstance::getId(v2) == *(_DWORD *)(v3 + 4) )
          {
            v6 = *(_DWORD *)(v3 + 8);
            if ( v6 == -1 || v6 == ItemInstance::getAuxValue(v2) )
              break;
          }
        }
      }
      v3 += 16;
      if ( v4 == v3 )
        goto LABEL_11;
    }
    result = 1;
  return result;
}


char *__fastcall PotionBrewing::addContainer(PotionBrewing *this, const PotionBrewing::Ingredient *a2)
{
  __int64 v2; // r0@1
  __int64 v3; // kr00_8@2
  char *result; // r0@2

  v2 = __PAIR__((unsigned int)this, dword_2804B5C);
  if ( dword_2804B5C == dword_2804B60 )
  {
    LODWORD(v2) = &PotionBrewing::mValidContainers;
    result = j_j_j__ZNSt6vectorIN13PotionBrewing10IngredientESaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_(v2);
  }
  else
    v3 = *(_QWORD *)HIDWORD(v2);
    *(_DWORD *)dword_2804B5C = *(_QWORD *)HIDWORD(v2);
    *(_DWORD *)(v2 + 4) = HIDWORD(v3);
    result = (char *)(dword_2804B5C + 8);
    dword_2804B5C += 8;
  return result;
}


char *__fastcall PotionBrewing::addContainerRecipe(PotionBrewing *this, const Item *a2, const PotionBrewing::Ingredient *a3, const Item *a4)
{
  const PotionBrewing::Ingredient *v4; // r12@1
  const Item *v5; // r2@1
  PotionBrewing *v6; // r1@1
  int v7; // r0@1
  int v8; // r0@2
  char *result; // r0@2

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = dword_2804B50;
  if ( dword_2804B50 == dword_2804B54 )
  {
    result = j_j_j__ZNSt6vectorIN13PotionBrewing3MixIRK4ItemEESaIS5_EE19_M_emplace_back_auxIJS4_RKNS0_10IngredientES4_EEEvDpOT_(
               (unsigned __int64 *)&PotionBrewing::mContainerMixes,
               (int)v6,
               v5,
               (int)v4);
  }
  else
    *(_DWORD *)dword_2804B50 = v6;
    v8 = v7 + 4;
    *(_QWORD *)v8 = *(_QWORD *)v5;
    *(_DWORD *)(v8 + 8) = v4;
    result = (char *)(dword_2804B50 + 16);
    dword_2804B50 += 16;
  return result;
}


  if ( PotionBrewing::isIngredient(a2, a2) )
{
  else
    result = ItemInstance::isPotionItem(v2);
  return result;
}


int __fastcall PotionBrewing::Ingredient::Ingredient(int result, const Item *a2, int a3)
{
  int v3; // r1@1

  v3 = *((_WORD *)a2 + 9);
  *(_QWORD *)result = *(_QWORD *)(&a3 - 1);
  return result;
}


signed int __fastcall PotionBrewing::isIngredient(PotionBrewing *this, const ItemInstance *a2)
{
  PotionBrewing *v2; // r4@1
  int v3; // r5@1 OVERLAPPED
  int v4; // r6@1 OVERLAPPED
  bool v5; // zf@2
  int v6; // r7@8
  unsigned int v7; // r0@12
  unsigned int v8; // r9@12
  int v9; // r7@12
  int *v10; // r0@12
  int v11; // r5@13
  int v12; // r6@14
  int v13; // r4@14
  signed int v14; // r4@22

  v2 = this;
  *(_QWORD *)&v3 = *(_QWORD *)&PotionBrewing::mContainerMixes;
  if ( PotionBrewing::mContainerMixes == dword_2804B50 )
  {
LABEL_11:
    if ( *(_DWORD *)v2 == Item::mFish_raw_pufferfish )
    {
      v14 = 1;
    }
    else
      v7 = ItemInstance::getId(v2);
      v8 = v7;
      v9 = v7 % unk_2804B68;
      v10 = *(int **)(PotionBrewing::mValidIngredients + 4 * (v7 % unk_2804B68));
      if ( v10 )
      {
        v11 = *v10;
        if ( *v10 )
        {
          v12 = *(_DWORD *)(v11 + 4);
          v13 = 0;
          do
          {
            if ( v8 == v12 )
            {
              ++v13;
            }
            else
              if ( v13 )
                break;
              v13 = 0;
            v11 = *(_DWORD *)v11;
            if ( !v11 )
              break;
            v12 = *(_DWORD *)(v11 + 4);
          }
          while ( *(_DWORD *)(v11 + 4) % unk_2804B68 == v9 );
        }
        else
      }
      else
        v13 = 0;
      v14 = v13 != 0;
  }
  else
    while ( 1 )
      v5 = *((_BYTE *)v2 + 15) == 0;
      if ( *((_BYTE *)v2 + 15) )
        v5 = *(_DWORD *)v2 == 0;
      if ( !v5 && !ItemInstance::isNull(v2) && *((_BYTE *)v2 + 14) && ItemInstance::getId(v2) == *(_DWORD *)(v3 + 4) )
        v6 = *(_DWORD *)(v3 + 8);
        if ( v6 == -1 )
          return 1;
        if ( v6 == ItemInstance::getAuxValue(v2) )
          break;
      v3 += 16;
      if ( v4 == v3 )
        goto LABEL_11;
    v14 = 1;
  return v14;
}


signed int __fastcall PotionBrewing::isPotionIngredient(PotionBrewing *this, const ItemInstance *a2)
{
  unsigned int v2; // r0@2
  unsigned int v3; // r9@2
  int v4; // r7@2
  int *v5; // r0@2
  int v6; // r5@3
  int v7; // r6@4
  int v8; // r4@4
  signed int v9; // r4@12

  if ( *(_DWORD *)this == Item::mFish_raw_pufferfish )
  {
    v9 = 1;
  }
  else
    v2 = ItemInstance::getId(this);
    v3 = v2;
    v4 = v2 % unk_2804B68;
    v5 = *(int **)(PotionBrewing::mValidIngredients + 4 * (v2 % unk_2804B68));
    if ( v5 )
    {
      v6 = *v5;
      if ( *v5 )
      {
        v7 = *(_DWORD *)(v6 + 4);
        v8 = 0;
        do
        {
          if ( v3 == v7 )
          {
            ++v8;
          }
          else
            if ( v8 )
              break;
            v8 = 0;
          v6 = *(_DWORD *)v6;
          if ( !v6 )
            break;
          v7 = *(_DWORD *)(v6 + 4);
        }
        while ( *(_DWORD *)(v6 + 4) % unk_2804B68 == v4 );
      }
      else
    }
    else
      v8 = 0;
    v9 = v8 != 0;
  return v9;
}


signed int __fastcall PotionBrewing::isFuel(PotionBrewing *this, const ItemInstance *a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *(_DWORD *)this;
  result = 0;
  if ( v2 == Item::mBlazePowder )
    result = 1;
  return result;
}


_DWORD *__fastcall PotionBrewing::initPotionBrewing(PotionBrewing *this)
{
  _QWORD *v1; // r0@2
  __int64 v2; // r0@3
  _QWORD *v3; // r0@5
  __int64 v4; // r0@6
  __int64 v5; // r0@9
  int v6; // r0@10
  int v7; // r3@10
  int v8; // r0@11
  int v9; // r3@13
  unsigned int *v10; // r0@17
  unsigned int v11; // r1@19
  int v12; // r4@22
  unsigned int *v13; // r1@23
  unsigned int v14; // r0@25
  unsigned int *v15; // r5@29
  unsigned int v16; // r0@31
  unsigned int *v17; // r0@37
  unsigned int v18; // r1@39
  int v19; // r4@42
  unsigned int *v20; // r1@43
  unsigned int v21; // r0@45
  unsigned int *v22; // r5@49
  unsigned int v23; // r0@51
  unsigned int *v24; // r0@57
  unsigned int v25; // r1@59
  int v26; // r4@62
  unsigned int *v27; // r1@63
  unsigned int v28; // r0@65
  unsigned int *v29; // r5@69
  unsigned int v30; // r0@71
  unsigned int *v31; // r0@77
  unsigned int v32; // r1@79
  int v33; // r4@82
  unsigned int *v34; // r1@83
  unsigned int v35; // r0@85
  unsigned int *v36; // r5@89
  unsigned int v37; // r0@91
  unsigned int *v38; // r0@97
  unsigned int v39; // r1@99
  int v40; // r4@102
  unsigned int *v41; // r1@103
  unsigned int v42; // r0@105
  unsigned int *v43; // r5@109
  unsigned int v44; // r0@111
  unsigned int *v45; // r0@117
  unsigned int v46; // r1@119
  int v47; // r4@122
  unsigned int *v48; // r1@123
  unsigned int v49; // r0@125
  unsigned int *v50; // r5@129
  unsigned int v51; // r0@131
  unsigned int *v52; // r0@137
  unsigned int v53; // r1@139
  int v54; // r4@142
  unsigned int *v55; // r1@143
  unsigned int v56; // r0@145
  unsigned int *v57; // r5@149
  unsigned int v58; // r0@151
  unsigned int *v59; // r0@157
  unsigned int v60; // r1@159
  int v61; // r4@162
  unsigned int *v62; // r1@163
  unsigned int v63; // r0@165
  unsigned int *v64; // r5@169
  unsigned int v65; // r0@171
  unsigned int *v66; // r0@177
  unsigned int v67; // r1@179
  int v68; // r4@182
  unsigned int *v69; // r1@183
  unsigned int v70; // r0@185
  unsigned int *v71; // r5@189
  unsigned int v72; // r0@191
  unsigned int *v73; // r0@197
  unsigned int v74; // r1@199
  int v75; // r4@202
  unsigned int *v76; // r1@203
  unsigned int v77; // r0@205
  unsigned int *v78; // r5@209
  unsigned int v79; // r0@211
  unsigned int *v80; // r0@217
  unsigned int v81; // r1@219
  int v82; // r4@222
  unsigned int *v83; // r1@223
  unsigned int v84; // r0@225
  unsigned int *v85; // r5@229
  unsigned int v86; // r0@231
  unsigned int *v87; // r0@237
  unsigned int v88; // r1@239
  int v89; // r4@242
  unsigned int *v90; // r1@243
  unsigned int v91; // r0@245
  unsigned int *v92; // r5@249
  unsigned int v93; // r0@251
  unsigned int *v94; // r0@257
  unsigned int v95; // r1@259
  int v96; // r4@262
  unsigned int *v97; // r1@263
  unsigned int v98; // r0@265
  unsigned int *v99; // r5@269
  unsigned int v100; // r0@271
  unsigned int *v101; // r0@277
  unsigned int v102; // r1@279
  int v103; // r4@282
  unsigned int *v104; // r1@283
  unsigned int v105; // r0@285
  unsigned int *v106; // r5@289
  unsigned int v107; // r0@291
  unsigned int *v108; // r0@297
  unsigned int v109; // r1@299
  int v110; // r4@302
  unsigned int *v111; // r1@303
  unsigned int v112; // r0@305
  unsigned int *v113; // r5@309
  unsigned int v114; // r0@311
  unsigned int *v115; // r0@317
  unsigned int v116; // r1@319
  int v117; // r4@322
  unsigned int *v118; // r1@323
  unsigned int v119; // r0@325
  unsigned int *v120; // r5@329
  unsigned int v121; // r0@331
  unsigned int *v122; // r0@337
  unsigned int v123; // r1@339
  int v124; // r4@342
  unsigned int *v125; // r1@343
  unsigned int v126; // r0@345
  unsigned int *v127; // r5@349
  unsigned int v128; // r0@351
  unsigned int *v129; // r0@357
  unsigned int v130; // r1@359
  int v131; // r4@362
  unsigned int *v132; // r1@363
  unsigned int v133; // r0@365
  unsigned int *v134; // r5@369
  unsigned int v135; // r0@371
  unsigned int *v136; // r0@377
  unsigned int v137; // r1@379
  int v138; // r4@382
  unsigned int *v139; // r1@383
  unsigned int v140; // r0@385
  unsigned int *v141; // r5@389
  unsigned int v142; // r0@391
  unsigned int *v143; // r0@397
  unsigned int v144; // r1@399
  int v145; // r4@402
  unsigned int *v146; // r1@403
  unsigned int v147; // r0@405
  unsigned int *v148; // r5@409
  unsigned int v149; // r0@411
  unsigned int *v150; // r0@417
  unsigned int v151; // r1@419
  int v152; // r4@422
  unsigned int *v153; // r1@423
  unsigned int v154; // r0@425
  unsigned int *v155; // r5@429
  unsigned int v156; // r0@431
  unsigned int *v157; // r0@437
  unsigned int v158; // r1@439
  int v159; // r4@442
  unsigned int *v160; // r1@443
  unsigned int v161; // r0@445
  unsigned int *v162; // r5@449
  unsigned int v163; // r0@451
  unsigned int *v164; // r0@457
  unsigned int v165; // r1@459
  int v166; // r4@462
  unsigned int *v167; // r1@463
  unsigned int v168; // r0@465
  unsigned int *v169; // r5@469
  unsigned int v170; // r0@471
  unsigned int *v171; // r0@477
  unsigned int v172; // r1@479
  int v173; // r4@482
  unsigned int *v174; // r1@483
  unsigned int v175; // r0@485
  unsigned int *v176; // r5@489
  unsigned int v177; // r0@491
  unsigned int *v178; // r0@497
  unsigned int v179; // r1@499
  int v180; // r4@502
  unsigned int *v181; // r1@503
  unsigned int v182; // r0@505
  unsigned int *v183; // r5@509
  unsigned int v184; // r0@511
  unsigned int *v185; // r0@517
  unsigned int v186; // r1@519
  int v187; // r4@522
  unsigned int *v188; // r1@523
  unsigned int v189; // r0@525
  unsigned int *v190; // r5@529
  unsigned int v191; // r0@531
  unsigned int *v192; // r0@537
  unsigned int v193; // r1@539
  int v194; // r4@542
  unsigned int *v195; // r1@543
  unsigned int v196; // r0@545
  unsigned int *v197; // r5@549
  unsigned int v198; // r0@551
  unsigned int *v199; // r0@557
  unsigned int v200; // r1@559
  int v201; // r4@562
  unsigned int *v202; // r1@563
  unsigned int v203; // r0@565
  unsigned int *v204; // r5@569
  unsigned int v205; // r0@571
  unsigned int *v206; // r0@577
  unsigned int v207; // r1@579
  int v208; // r4@582
  unsigned int *v209; // r1@583
  unsigned int v210; // r0@585
  unsigned int *v211; // r5@589
  unsigned int v212; // r0@591
  unsigned int *v213; // r0@597
  unsigned int v214; // r1@599
  int v215; // r4@602
  unsigned int *v216; // r1@603
  unsigned int v217; // r0@605
  unsigned int *v218; // r5@609
  unsigned int v219; // r0@611
  unsigned int *v220; // r0@617
  unsigned int v221; // r1@619
  int v222; // r4@622
  unsigned int *v223; // r1@623
  unsigned int v224; // r0@625
  unsigned int *v225; // r5@629
  unsigned int v226; // r0@631
  unsigned int *v227; // r0@637
  unsigned int v228; // r1@639
  int v229; // r4@642
  unsigned int *v230; // r1@643
  unsigned int v231; // r0@645
  unsigned int *v232; // r5@649
  unsigned int v233; // r0@651
  unsigned int *v234; // r0@657
  unsigned int v235; // r1@659
  int v236; // r4@662
  unsigned int *v237; // r1@663
  unsigned int v238; // r0@665
  unsigned int *v239; // r5@669
  unsigned int v240; // r0@671
  unsigned int *v241; // r0@677
  unsigned int v242; // r1@679
  int v243; // r4@682
  unsigned int *v244; // r1@683
  unsigned int v245; // r0@685
  unsigned int *v246; // r5@689
  unsigned int v247; // r0@691
  unsigned int *v248; // r0@697
  unsigned int v249; // r1@699
  int v250; // r4@702
  unsigned int *v251; // r1@703
  unsigned int v252; // r0@705
  unsigned int *v253; // r5@709
  unsigned int v254; // r0@711
  unsigned int *v255; // r0@717
  unsigned int v256; // r1@719
  int v257; // r4@722
  unsigned int *v258; // r1@723
  unsigned int v259; // r0@725
  unsigned int *v260; // r5@729
  unsigned int v261; // r0@731
  unsigned int *v262; // r0@737
  unsigned int v263; // r1@739
  int v264; // r4@742
  unsigned int *v265; // r1@743
  unsigned int v266; // r0@745
  unsigned int *v267; // r5@749
  unsigned int v268; // r0@751
  unsigned int *v269; // r0@757
  unsigned int v270; // r1@759
  int v271; // r4@762
  unsigned int *v272; // r1@763
  unsigned int v273; // r0@765
  unsigned int *v274; // r5@769
  unsigned int v275; // r0@771
  unsigned int *v276; // r0@777
  unsigned int v277; // r1@779
  int v278; // r4@782
  unsigned int *v279; // r1@783
  unsigned int v280; // r0@785
  unsigned int *v281; // r5@789
  unsigned int v282; // r0@791
  unsigned int *v283; // r0@797
  unsigned int v284; // r1@799
  int v285; // r4@802
  unsigned int *v286; // r1@803
  unsigned int v287; // r0@805
  unsigned int *v288; // r5@809
  unsigned int v289; // r0@811
  unsigned int *v290; // r0@817
  unsigned int v291; // r1@819
  int v292; // r4@822
  unsigned int *v293; // r1@823
  unsigned int v294; // r0@825
  unsigned int *v295; // r5@829
  unsigned int v296; // r0@831
  unsigned int *v297; // r0@837
  unsigned int v298; // r1@839
  int v299; // r4@842
  unsigned int *v300; // r1@843
  unsigned int v301; // r0@845
  unsigned int *v302; // r5@849
  unsigned int v303; // r0@851
  unsigned int *v304; // r0@857
  unsigned int v305; // r1@859
  int v306; // r4@862
  unsigned int *v307; // r1@863
  unsigned int v308; // r0@865
  unsigned int *v309; // r5@869
  unsigned int v310; // r0@871
  unsigned int *v311; // r0@877
  unsigned int v312; // r1@879
  int v313; // r4@882
  unsigned int *v314; // r1@883
  unsigned int v315; // r0@885
  unsigned int *v316; // r5@889
  unsigned int v317; // r0@891
  unsigned int *v318; // r0@897
  unsigned int v319; // r1@899
  int v320; // r4@902
  unsigned int *v321; // r1@903
  unsigned int v322; // r0@905
  unsigned int *v323; // r5@909
  unsigned int v324; // r0@911
  unsigned int *v325; // r0@917
  unsigned int v326; // r1@919
  int v327; // r4@922
  unsigned int *v328; // r1@923
  unsigned int v329; // r0@925
  unsigned int *v330; // r5@929
  unsigned int v331; // r0@931
  unsigned int *v332; // r0@937
  unsigned int v333; // r1@939
  int v334; // r4@942
  unsigned int *v335; // r1@943
  unsigned int v336; // r0@945
  unsigned int *v337; // r5@949
  unsigned int v338; // r0@951
  unsigned int *v339; // r0@957
  unsigned int v340; // r1@959
  int v341; // r4@962
  unsigned int *v342; // r1@963
  unsigned int v343; // r0@965
  unsigned int *v344; // r5@969
  unsigned int v345; // r0@971
  unsigned int *v346; // r0@977
  unsigned int v347; // r1@979
  int v348; // r4@982
  unsigned int *v349; // r1@983
  unsigned int v350; // r0@985
  unsigned int *v351; // r5@989
  unsigned int v352; // r0@991
  unsigned int *v353; // r0@997
  unsigned int v354; // r1@999
  int v355; // r4@1002
  unsigned int *v356; // r1@1003
  unsigned int v357; // r0@1005
  unsigned int *v358; // r5@1009
  unsigned int v359; // r0@1011
  unsigned int *v360; // r0@1017
  unsigned int v361; // r1@1019
  int v362; // r4@1022
  unsigned int *v363; // r1@1023
  unsigned int v364; // r0@1025
  unsigned int *v365; // r5@1029
  unsigned int v366; // r0@1031
  unsigned int *v367; // r0@1037
  unsigned int v368; // r1@1039
  int v369; // r4@1042
  unsigned int *v370; // r1@1043
  unsigned int v371; // r0@1045
  unsigned int *v372; // r5@1049
  unsigned int v373; // r0@1051
  unsigned int *v374; // r0@1057
  unsigned int v375; // r1@1059
  int v376; // r4@1062
  unsigned int *v377; // r1@1063
  unsigned int v378; // r0@1065
  unsigned int *v379; // r5@1069
  unsigned int v380; // r0@1071
  unsigned int *v381; // r0@1077
  unsigned int v382; // r1@1079
  int v383; // r4@1082
  unsigned int *v384; // r1@1083
  unsigned int v385; // r0@1085
  unsigned int *v386; // r5@1089
  unsigned int v387; // r0@1091
  unsigned int *v388; // r0@1097
  unsigned int v389; // r1@1099
  int v390; // r4@1102
  unsigned int *v391; // r1@1103
  unsigned int v392; // r0@1105
  unsigned int *v393; // r5@1109
  unsigned int v394; // r0@1111
  unsigned int *v395; // r0@1117
  unsigned int v396; // r1@1119
  _DWORD *result; // r0@1122
  int v398; // r4@1122
  unsigned int *v399; // r1@1123
  unsigned int *v400; // r5@1129
  int v401; // [sp+0h] [bp-260h]@1116
  int v402; // [sp+4h] [bp-25Ch]@1116
  int v403; // [sp+8h] [bp-258h]@1096
  int v404; // [sp+Ch] [bp-254h]@1096
  int v405; // [sp+10h] [bp-250h]@1076
  int v406; // [sp+14h] [bp-24Ch]@1076
  int v407; // [sp+18h] [bp-248h]@1056
  int v408; // [sp+1Ch] [bp-244h]@1056
  int v409; // [sp+20h] [bp-240h]@1036
  int v410; // [sp+24h] [bp-23Ch]@1036
  int v411; // [sp+28h] [bp-238h]@1016
  int v412; // [sp+2Ch] [bp-234h]@1016
  int v413; // [sp+30h] [bp-230h]@996
  int v414; // [sp+34h] [bp-22Ch]@996
  int v415; // [sp+38h] [bp-228h]@976
  int v416; // [sp+3Ch] [bp-224h]@976
  int v417; // [sp+40h] [bp-220h]@956
  int v418; // [sp+44h] [bp-21Ch]@956
  int v419; // [sp+48h] [bp-218h]@936
  int v420; // [sp+4Ch] [bp-214h]@936
  int v421; // [sp+50h] [bp-210h]@916
  int v422; // [sp+54h] [bp-20Ch]@916
  int v423; // [sp+58h] [bp-208h]@896
  int v424; // [sp+5Ch] [bp-204h]@896
  int v425; // [sp+60h] [bp-200h]@876
  int v426; // [sp+64h] [bp-1FCh]@876
  int v427; // [sp+68h] [bp-1F8h]@856
  int v428; // [sp+6Ch] [bp-1F4h]@856
  int v429; // [sp+70h] [bp-1F0h]@836
  int v430; // [sp+74h] [bp-1ECh]@836
  int v431; // [sp+78h] [bp-1E8h]@816
  int v432; // [sp+7Ch] [bp-1E4h]@816
  int v433; // [sp+80h] [bp-1E0h]@796
  int v434; // [sp+84h] [bp-1DCh]@796
  int v435; // [sp+88h] [bp-1D8h]@776
  int v436; // [sp+8Ch] [bp-1D4h]@776
  int v437; // [sp+90h] [bp-1D0h]@756
  int v438; // [sp+94h] [bp-1CCh]@756
  int v439; // [sp+98h] [bp-1C8h]@736
  int v440; // [sp+9Ch] [bp-1C4h]@736
  int v441; // [sp+A0h] [bp-1C0h]@716
  int v442; // [sp+A4h] [bp-1BCh]@716
  int v443; // [sp+A8h] [bp-1B8h]@696
  int v444; // [sp+ACh] [bp-1B4h]@696
  int v445; // [sp+B0h] [bp-1B0h]@676
  int v446; // [sp+B4h] [bp-1ACh]@676
  int v447; // [sp+B8h] [bp-1A8h]@656
  int v448; // [sp+BCh] [bp-1A4h]@656
  int v449; // [sp+C0h] [bp-1A0h]@636
  int v450; // [sp+C4h] [bp-19Ch]@636
  int v451; // [sp+C8h] [bp-198h]@616
  int v452; // [sp+CCh] [bp-194h]@616
  int v453; // [sp+D0h] [bp-190h]@596
  int v454; // [sp+D4h] [bp-18Ch]@596
  int v455; // [sp+D8h] [bp-188h]@576
  int v456; // [sp+DCh] [bp-184h]@576
  int v457; // [sp+E0h] [bp-180h]@556
  int v458; // [sp+E4h] [bp-17Ch]@556
  int v459; // [sp+E8h] [bp-178h]@536
  int v460; // [sp+ECh] [bp-174h]@536
  int v461; // [sp+F0h] [bp-170h]@516
  int v462; // [sp+F4h] [bp-16Ch]@516
  int v463; // [sp+F8h] [bp-168h]@496
  int v464; // [sp+FCh] [bp-164h]@496
  int v465; // [sp+100h] [bp-160h]@476
  int v466; // [sp+104h] [bp-15Ch]@476
  int v467; // [sp+108h] [bp-158h]@456
  int v468; // [sp+10Ch] [bp-154h]@456
  int v469; // [sp+110h] [bp-150h]@436
  int v470; // [sp+114h] [bp-14Ch]@436
  int v471; // [sp+118h] [bp-148h]@416
  int v472; // [sp+11Ch] [bp-144h]@416
  int v473; // [sp+120h] [bp-140h]@396
  int v474; // [sp+124h] [bp-13Ch]@396
  int v475; // [sp+128h] [bp-138h]@376
  int v476; // [sp+12Ch] [bp-134h]@376
  int v477; // [sp+130h] [bp-130h]@356
  int v478; // [sp+134h] [bp-12Ch]@356
  int v479; // [sp+138h] [bp-128h]@336
  int v480; // [sp+13Ch] [bp-124h]@336
  int v481; // [sp+140h] [bp-120h]@316
  int v482; // [sp+144h] [bp-11Ch]@316
  int v483; // [sp+148h] [bp-118h]@296
  int v484; // [sp+14Ch] [bp-114h]@296
  int v485; // [sp+150h] [bp-110h]@276
  int v486; // [sp+154h] [bp-10Ch]@276
  int v487; // [sp+158h] [bp-108h]@256
  int v488; // [sp+15Ch] [bp-104h]@256
  int v489; // [sp+160h] [bp-100h]@236
  int v490; // [sp+164h] [bp-FCh]@236
  int v491; // [sp+168h] [bp-F8h]@216
  int v492; // [sp+16Ch] [bp-F4h]@216
  int v493; // [sp+170h] [bp-F0h]@196
  int v494; // [sp+174h] [bp-ECh]@196
  int v495; // [sp+178h] [bp-E8h]@176
  int v496; // [sp+17Ch] [bp-E4h]@176
  int v497; // [sp+180h] [bp-E0h]@156
  int v498; // [sp+184h] [bp-DCh]@156
  int v499; // [sp+188h] [bp-D8h]@136
  int v500; // [sp+18Ch] [bp-D4h]@136
  int v501; // [sp+190h] [bp-D0h]@116
  int v502; // [sp+194h] [bp-CCh]@116
  int v503; // [sp+198h] [bp-C8h]@96
  int v504; // [sp+19Ch] [bp-C4h]@96
  int v505; // [sp+1A0h] [bp-C0h]@76
  int v506; // [sp+1A4h] [bp-BCh]@76
  int v507; // [sp+1A8h] [bp-B8h]@56
  int v508; // [sp+1ACh] [bp-B4h]@56
  int v509; // [sp+1B0h] [bp-B0h]@36
  int v510; // [sp+1B4h] [bp-ACh]@36
  int v511; // [sp+1B8h] [bp-A8h]@16
  int v512; // [sp+1BCh] [bp-A4h]@16
  __int64 v513; // [sp+1C0h] [bp-A0h]@10
  int v514; // [sp+1C8h] [bp-98h]@7
  int v515; // [sp+1CCh] [bp-94h]@7
  int v516; // [sp+1D0h] [bp-90h]@4
  int v517; // [sp+1D4h] [bp-8Ch]@4
  int v518; // [sp+1D8h] [bp-88h]@1
  signed int v519; // [sp+1DCh] [bp-84h]@1
  __int64 v520; // [sp+1E0h] [bp-80h]@1
  unsigned __int64 v521; // [sp+1E8h] [bp-78h]@1
  unsigned __int64 v522; // [sp+1F0h] [bp-70h]@1
  unsigned __int64 v523; // [sp+1F8h] [bp-68h]@1
  unsigned __int64 v524; // [sp+200h] [bp-60h]@1
  unsigned __int64 v525; // [sp+208h] [bp-58h]@1
  unsigned __int64 v526; // [sp+210h] [bp-50h]@1
  unsigned __int64 v527; // [sp+218h] [bp-48h]@1
  unsigned __int64 v528; // [sp+220h] [bp-40h]@1
  unsigned __int64 v529; // [sp+228h] [bp-38h]@1
  unsigned __int64 v530; // [sp+230h] [bp-30h]@1
  unsigned __int64 v531; // [sp+238h] [bp-28h]@1
  unsigned __int64 v532; // [sp+240h] [bp-20h]@1
  int v533; // [sp+248h] [bp-18h]@1
  int v534; // [sp+24Ch] [bp-14h]@1

  v533 = *(_WORD *)(Item::mNether_wart + 18);
  v534 = -1;
  LODWORD(v532) = *(_WORD *)(Item::mGoldenCarrot + 18);
  HIDWORD(v532) = -1;
  LODWORD(v531) = *(_WORD *)(Item::mRedStone + 18);
  HIDWORD(v531) = -1;
  LODWORD(v530) = *(_WORD *)(Item::mFermented_spider_eye + 18);
  HIDWORD(v530) = -1;
  LODWORD(v529) = *(_WORD *)(Item::mRabbitFoot + 18);
  HIDWORD(v529) = -1;
  LODWORD(v528) = *(_WORD *)(Item::mYellowDust + 18);
  HIDWORD(v528) = -1;
  LODWORD(v527) = *(_WORD *)(Item::mMagma_cream + 18);
  HIDWORD(v527) = -1;
  LODWORD(v526) = *(_WORD *)(Item::mSugar + 18);
  HIDWORD(v526) = -1;
  LODWORD(v525) = *(_WORD *)(Item::mFish_raw_pufferfish + 18);
  HIDWORD(v525) = -1;
  LODWORD(v524) = *(_WORD *)(Item::mSpeckled_melon + 18);
  HIDWORD(v524) = -1;
  LODWORD(v523) = *(_WORD *)(Item::mSpider_eye + 18);
  HIDWORD(v523) = -1;
  LODWORD(v522) = *(_WORD *)(Item::mGhast_tear + 18);
  HIDWORD(v522) = -1;
  LODWORD(v521) = *(_WORD *)(Item::mBlazePowder + 18);
  HIDWORD(v521) = -1;
  LODWORD(v520) = *(_WORD *)(Item::mDragon_breath + 18);
  HIDWORD(v520) = -1;
  v518 = *(_WORD *)(Item::mPotion + 18);
  v519 = -1;
  if ( dword_2804B5C == dword_2804B60 )
  {
    HIDWORD(v2) = &v518;
    LODWORD(v2) = &PotionBrewing::mValidContainers;
    std::vector<PotionBrewing::Ingredient,std::allocator<PotionBrewing::Ingredient>>::_M_emplace_back_aux<PotionBrewing::Ingredient const&>(v2);
    v1 = (_QWORD *)dword_2804B5C;
  }
  else
    *(_QWORD *)dword_2804B5C = *(_QWORD *)&v518;
    v1 = (_QWORD *)(dword_2804B5C + 8);
    dword_2804B5C += 8;
  v516 = *(_WORD *)(Item::mSplash_potion + 18);
  v517 = -1;
  if ( v1 == (_QWORD *)dword_2804B60 )
    HIDWORD(v4) = &v516;
    LODWORD(v4) = &PotionBrewing::mValidContainers;
    std::vector<PotionBrewing::Ingredient,std::allocator<PotionBrewing::Ingredient>>::_M_emplace_back_aux<PotionBrewing::Ingredient const&>(v4);
    v3 = (_QWORD *)dword_2804B5C;
    *v1 = *(_QWORD *)&v516;
    v3 = (_QWORD *)(dword_2804B5C + 8);
  v514 = *(_WORD *)(Item::mLingering_potion + 18);
  v515 = -1;
  if ( v3 == (_QWORD *)dword_2804B60 )
    HIDWORD(v5) = &v514;
    LODWORD(v5) = &PotionBrewing::mValidContainers;
    std::vector<PotionBrewing::Ingredient,std::allocator<PotionBrewing::Ingredient>>::_M_emplace_back_aux<PotionBrewing::Ingredient const&>(v5);
    *v3 = *(_QWORD *)&v514;
  LODWORD(v513) = *(_WORD *)(Item::mSulphur + 18);
  HIDWORD(v513) = -1;
  v6 = dword_2804B50;
  v7 = Item::mSplash_potion;
  if ( dword_2804B50 == dword_2804B54 )
    std::vector<PotionBrewing::Mix<Item const&>,std::allocator<PotionBrewing::Mix<Item const&>>>::_M_emplace_back_aux<Item const&,PotionBrewing::Ingredient const&,Item const&>(
      (unsigned __int64 *)&PotionBrewing::mContainerMixes,
      Item::mPotion,
      &v513,
      Item::mSplash_potion);
    v8 = dword_2804B50;
    *(_DWORD *)dword_2804B50 = Item::mPotion;
    *(_QWORD *)(v6 + 4) = v513;
    *(_DWORD *)(v6 + 12) = v7;
    v8 = dword_2804B50 + 16;
    dword_2804B50 += 16;
  v9 = Item::mLingering_potion;
  if ( v8 == dword_2804B54 )
      Item::mSplash_potion,
      &v520,
      Item::mLingering_potion);
    *(_DWORD *)v8 = Item::mSplash_potion;
    *(_QWORD *)(v8 + 4) = v520;
    *(_DWORD *)(v8 + 12) = v9;
  v511 = Potion::Water;
  v512 = dword_2804708;
  if ( dword_2804708 )
    v10 = (unsigned int *)(dword_2804708 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    }
    else
      ++*v10;
  PotionBrewing::addMix((unsigned __int64 *)&v511, &v524, (unsigned __int64 *)&Potion::Mundane);
  v12 = v512;
  if ( v512 )
    v13 = (unsigned int *)(v512 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  v509 = Potion::Water;
  v510 = dword_2804708;
    v17 = (unsigned int *)(dword_2804708 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
      ++*v17;
  PotionBrewing::addMix((unsigned __int64 *)&v509, &v522, (unsigned __int64 *)&Potion::Mundane);
  v19 = v510;
  if ( v510 )
    v20 = (unsigned int *)(v510 + 4);
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
  v507 = Potion::Water;
  v508 = dword_2804708;
    v24 = (unsigned int *)(dword_2804708 + 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 + 1, v24) );
      ++*v24;
  PotionBrewing::addMix((unsigned __int64 *)&v507, &v529, (unsigned __int64 *)&Potion::Mundane);
  v26 = v508;
  if ( v508 )
    v27 = (unsigned int *)(v508 + 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 == 1 )
      v29 = (unsigned int *)(v26 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
  v505 = Potion::Water;
  v506 = dword_2804708;
    v31 = (unsigned int *)(dword_2804708 + 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 + 1, v31) );
      ++*v31;
  PotionBrewing::addMix((unsigned __int64 *)&v505, &v521, (unsigned __int64 *)&Potion::Mundane);
  v33 = v506;
  if ( v506 )
    v34 = (unsigned int *)(v506 + 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 == 1 )
      v36 = (unsigned int *)(v33 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 8))(v33);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 12))(v33);
  v503 = Potion::Water;
  v504 = dword_2804708;
    v38 = (unsigned int *)(dword_2804708 + 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 + 1, v38) );
      ++*v38;
  PotionBrewing::addMix((unsigned __int64 *)&v503, &v523, (unsigned __int64 *)&Potion::Mundane);
  v40 = v504;
  if ( v504 )
    v41 = (unsigned int *)(v504 + 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 == 1 )
      v43 = (unsigned int *)(v40 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 8))(v40);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v40 + 12))(v40);
  v501 = Potion::Water;
  v502 = dword_2804708;
    v45 = (unsigned int *)(dword_2804708 + 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 + 1, v45) );
      ++*v45;
  PotionBrewing::addMix((unsigned __int64 *)&v501, &v526, (unsigned __int64 *)&Potion::Mundane);
  v47 = v502;
  if ( v502 )
    v48 = (unsigned int *)(v502 + 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 == 1 )
      v50 = (unsigned int *)(v47 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
  v499 = Potion::Water;
  v500 = dword_2804708;
    v52 = (unsigned int *)(dword_2804708 + 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 + 1, v52) );
      ++*v52;
  PotionBrewing::addMix((unsigned __int64 *)&v499, &v527, (unsigned __int64 *)&Potion::Mundane);
  v54 = v500;
  if ( v500 )
    v55 = (unsigned int *)(v500 + 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 == 1 )
      v57 = (unsigned int *)(v54 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 8))(v54);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 12))(v54);
  v497 = Potion::Water;
  v498 = dword_2804708;
    v59 = (unsigned int *)(dword_2804708 + 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 + 1, v59) );
      ++*v59;
  PotionBrewing::addMix((unsigned __int64 *)&v497, &v528, (unsigned __int64 *)&Potion::Thick);
  v61 = v498;
  if ( v498 )
    v62 = (unsigned int *)(v498 + 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 == 1 )
      v64 = (unsigned int *)(v61 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 8))(v61);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 12))(v61);
  v495 = Potion::Water;
  v496 = dword_2804708;
    v66 = (unsigned int *)(dword_2804708 + 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 + 1, v66) );
      ++*v66;
  PotionBrewing::addMix((unsigned __int64 *)&v495, &v531, (unsigned __int64 *)&Potion::LongMundane);
  v68 = v496;
  if ( v496 )
    v69 = (unsigned int *)(v496 + 4);
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
  v493 = Potion::Water;
  v494 = dword_2804708;
    v73 = (unsigned int *)(dword_2804708 + 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 + 1, v73) );
      ++*v73;
  PotionBrewing::addMix((unsigned __int64 *)&v493, (unsigned __int64 *)&v533, (unsigned __int64 *)&Potion::Awkward);
  v75 = v494;
  if ( v494 )
    v76 = (unsigned int *)(v494 + 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 == 1 )
      v78 = (unsigned int *)(v75 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v75 + 8))(v75);
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
        v79 = (*v78)--;
      if ( v79 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v75 + 12))(v75);
  v491 = Potion::Awkward;
  v492 = dword_2804728;
  if ( dword_2804728 )
    v80 = (unsigned int *)(dword_2804728 + 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 + 1, v80) );
      ++*v80;
  PotionBrewing::addMix((unsigned __int64 *)&v491, &v532, (unsigned __int64 *)&Potion::Nightvision);
  v82 = v492;
  if ( v492 )
    v83 = (unsigned int *)(v492 + 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 == 1 )
      v85 = (unsigned int *)(v82 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v82 + 8))(v82);
          v86 = __ldrex(v85);
        while ( __strex(v86 - 1, v85) );
        v86 = (*v85)--;
      if ( v86 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v82 + 12))(v82);
  v489 = Potion::Nightvision;
  v490 = dword_2804730;
  if ( dword_2804730 )
    v87 = (unsigned int *)(dword_2804730 + 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 + 1, v87) );
      ++*v87;
  PotionBrewing::addMix((unsigned __int64 *)&v489, &v531, (unsigned __int64 *)&Potion::LongNightvision);
  v89 = v490;
  if ( v490 )
    v90 = (unsigned int *)(v490 + 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 == 1 )
      v92 = (unsigned int *)(v89 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v89 + 8))(v89);
          v93 = __ldrex(v92);
        while ( __strex(v93 - 1, v92) );
        v93 = (*v92)--;
      if ( v93 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v89 + 12))(v89);
  v487 = Potion::Nightvision;
  v488 = dword_2804730;
    v94 = (unsigned int *)(dword_2804730 + 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 + 1, v94) );
      ++*v94;
  PotionBrewing::addMix((unsigned __int64 *)&v487, &v530, (unsigned __int64 *)&Potion::Invisibility);
  v96 = v488;
  if ( v488 )
    v97 = (unsigned int *)(v488 + 4);
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
  v485 = Potion::LongNightvision;
  v486 = dword_2804738;
  if ( dword_2804738 )
    v101 = (unsigned int *)(dword_2804738 + 4);
        v102 = __ldrex(v101);
      while ( __strex(v102 + 1, v101) );
      ++*v101;
  PotionBrewing::addMix((unsigned __int64 *)&v485, &v530, (unsigned __int64 *)&Potion::LongInvisibility);
  v103 = v486;
  if ( v486 )
    v104 = (unsigned int *)(v486 + 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 == 1 )
      v106 = (unsigned int *)(v103 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v103 + 8))(v103);
          v107 = __ldrex(v106);
        while ( __strex(v107 - 1, v106) );
        v107 = (*v106)--;
      if ( v107 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v103 + 12))(v103);
  v483 = Potion::Invisibility;
  v484 = dword_2804740;
  if ( dword_2804740 )
    v108 = (unsigned int *)(dword_2804740 + 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 + 1, v108) );
      ++*v108;
  PotionBrewing::addMix((unsigned __int64 *)&v483, &v531, (unsigned __int64 *)&Potion::LongInvisibility);
  v110 = v484;
  if ( v484 )
    v111 = (unsigned int *)(v484 + 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 == 1 )
      v113 = (unsigned int *)(v110 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v110 + 8))(v110);
          v114 = __ldrex(v113);
        while ( __strex(v114 - 1, v113) );
        v114 = (*v113)--;
      if ( v114 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v110 + 12))(v110);
  v481 = Potion::Awkward;
  v482 = dword_2804728;
    v115 = (unsigned int *)(dword_2804728 + 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 + 1, v115) );
      ++*v115;
  PotionBrewing::addMix((unsigned __int64 *)&v481, &v527, (unsigned __int64 *)&Potion::FireResistance);
  v117 = v482;
  if ( v482 )
    v118 = (unsigned int *)(v482 + 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 == 1 )
      v120 = (unsigned int *)(v117 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v117 + 8))(v117);
          v121 = __ldrex(v120);
        while ( __strex(v121 - 1, v120) );
        v121 = (*v120)--;
      if ( v121 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v117 + 12))(v117);
  v479 = Potion::FireResistance;
  v480 = dword_2804768;
  if ( dword_2804768 )
    v122 = (unsigned int *)(dword_2804768 + 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 + 1, v122) );
      ++*v122;
  PotionBrewing::addMix((unsigned __int64 *)&v479, &v531, (unsigned __int64 *)&Potion::LongFireResistance);
  v124 = v480;
  if ( v480 )
    v125 = (unsigned int *)(v480 + 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 == 1 )
      v127 = (unsigned int *)(v124 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v124 + 8))(v124);
          v128 = __ldrex(v127);
        while ( __strex(v128 - 1, v127) );
        v128 = (*v127)--;
      if ( v128 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v124 + 12))(v124);
  v477 = Potion::Awkward;
  v478 = dword_2804728;
    v129 = (unsigned int *)(dword_2804728 + 4);
        v130 = __ldrex(v129);
      while ( __strex(v130 + 1, v129) );
      ++*v129;
  PotionBrewing::addMix((unsigned __int64 *)&v477, &v529, (unsigned __int64 *)&Potion::Leaping);
  v131 = v478;
  if ( v478 )
    v132 = (unsigned int *)(v478 + 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 == 1 )
      v134 = (unsigned int *)(v131 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v131 + 8))(v131);
          v135 = __ldrex(v134);
        while ( __strex(v135 - 1, v134) );
        v135 = (*v134)--;
      if ( v135 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v131 + 12))(v131);
  v475 = Potion::Leaping;
  v476 = dword_2804750;
  if ( dword_2804750 )
    v136 = (unsigned int *)(dword_2804750 + 4);
        v137 = __ldrex(v136);
      while ( __strex(v137 + 1, v136) );
      ++*v136;
  PotionBrewing::addMix((unsigned __int64 *)&v475, &v531, (unsigned __int64 *)&Potion::LongLeaping);
  v138 = v476;
  if ( v476 )
    v139 = (unsigned int *)(v476 + 4);
        v140 = __ldrex(v139);
      while ( __strex(v140 - 1, v139) );
      v140 = (*v139)--;
    if ( v140 == 1 )
      v141 = (unsigned int *)(v138 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v138 + 8))(v138);
          v142 = __ldrex(v141);
        while ( __strex(v142 - 1, v141) );
        v142 = (*v141)--;
      if ( v142 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v138 + 12))(v138);
  v473 = Potion::Leaping;
  v474 = dword_2804750;
    v143 = (unsigned int *)(dword_2804750 + 4);
        v144 = __ldrex(v143);
      while ( __strex(v144 + 1, v143) );
      ++*v143;
  PotionBrewing::addMix((unsigned __int64 *)&v473, &v528, (unsigned __int64 *)&Potion::StrongLeaping);
  v145 = v474;
  if ( v474 )
    v146 = (unsigned int *)(v474 + 4);
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
  v471 = Potion::Leaping;
  v472 = dword_2804750;
    v150 = (unsigned int *)(dword_2804750 + 4);
        v151 = __ldrex(v150);
      while ( __strex(v151 + 1, v150) );
      ++*v150;
  PotionBrewing::addMix((unsigned __int64 *)&v471, &v530, (unsigned __int64 *)&Potion::Slowness);
  v152 = v472;
  if ( v472 )
    v153 = (unsigned int *)(v472 + 4);
        v154 = __ldrex(v153);
      while ( __strex(v154 - 1, v153) );
      v154 = (*v153)--;
    if ( v154 == 1 )
      v155 = (unsigned int *)(v152 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v152 + 8))(v152);
          v156 = __ldrex(v155);
        while ( __strex(v156 - 1, v155) );
        v156 = (*v155)--;
      if ( v156 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v152 + 12))(v152);
  v469 = Potion::LongLeaping;
  v470 = dword_2804758;
  if ( dword_2804758 )
    v157 = (unsigned int *)(dword_2804758 + 4);
        v158 = __ldrex(v157);
      while ( __strex(v158 + 1, v157) );
      ++*v157;
  PotionBrewing::addMix((unsigned __int64 *)&v469, &v530, (unsigned __int64 *)&Potion::LongSlowness);
  v159 = v470;
  if ( v470 )
    v160 = (unsigned int *)(v470 + 4);
        v161 = __ldrex(v160);
      while ( __strex(v161 - 1, v160) );
      v161 = (*v160)--;
    if ( v161 == 1 )
      v162 = (unsigned int *)(v159 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v159 + 8))(v159);
          v163 = __ldrex(v162);
        while ( __strex(v163 - 1, v162) );
        v163 = (*v162)--;
      if ( v163 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v159 + 12))(v159);
  v467 = Potion::Slowness;
  v468 = dword_2804794;
  if ( dword_2804794 )
    v164 = (unsigned int *)(dword_2804794 + 4);
        v165 = __ldrex(v164);
      while ( __strex(v165 + 1, v164) );
      ++*v164;
  PotionBrewing::addMix((unsigned __int64 *)&v467, &v531, (unsigned __int64 *)&Potion::LongSlowness);
  v166 = v468;
  if ( v468 )
    v167 = (unsigned int *)(v468 + 4);
        v168 = __ldrex(v167);
      while ( __strex(v168 - 1, v167) );
      v168 = (*v167)--;
    if ( v168 == 1 )
      v169 = (unsigned int *)(v166 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v166 + 8))(v166);
          v170 = __ldrex(v169);
        while ( __strex(v170 - 1, v169) );
        v170 = (*v169)--;
      if ( v170 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v166 + 12))(v166);
  v465 = Potion::Swiftness;
  v466 = dword_2804778;
  if ( dword_2804778 )
    v171 = (unsigned int *)(dword_2804778 + 4);
        v172 = __ldrex(v171);
      while ( __strex(v172 + 1, v171) );
      ++*v171;
  PotionBrewing::addMix((unsigned __int64 *)&v465, &v530, (unsigned __int64 *)&Potion::Slowness);
  v173 = v466;
  if ( v466 )
    v174 = (unsigned int *)(v466 + 4);
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
  v463 = Potion::LongSwiftness;
  v464 = dword_2804784;
  if ( dword_2804784 )
    v178 = (unsigned int *)(dword_2804784 + 4);
        v179 = __ldrex(v178);
      while ( __strex(v179 + 1, v178) );
      ++*v178;
  PotionBrewing::addMix((unsigned __int64 *)&v463, &v530, (unsigned __int64 *)&Potion::LongSlowness);
  v180 = v464;
  if ( v464 )
    v181 = (unsigned int *)(v464 + 4);
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
  v461 = Potion::Awkward;
  v462 = dword_2804728;
    v185 = (unsigned int *)(dword_2804728 + 4);
        v186 = __ldrex(v185);
      while ( __strex(v186 + 1, v185) );
      ++*v185;
  PotionBrewing::addMix((unsigned __int64 *)&v461, &v526, (unsigned __int64 *)&Potion::Swiftness);
  v187 = v462;
  if ( v462 )
    v188 = (unsigned int *)(v462 + 4);
        v189 = __ldrex(v188);
      while ( __strex(v189 - 1, v188) );
      v189 = (*v188)--;
    if ( v189 == 1 )
      v190 = (unsigned int *)(v187 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v187 + 8))(v187);
          v191 = __ldrex(v190);
        while ( __strex(v191 - 1, v190) );
        v191 = (*v190)--;
      if ( v191 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v187 + 12))(v187);
  v459 = Potion::Swiftness;
  v460 = dword_2804778;
    v192 = (unsigned int *)(dword_2804778 + 4);
        v193 = __ldrex(v192);
      while ( __strex(v193 + 1, v192) );
      ++*v192;
  PotionBrewing::addMix((unsigned __int64 *)&v459, &v531, (unsigned __int64 *)&Potion::LongSwiftness);
  v194 = v460;
  if ( v460 )
    v195 = (unsigned int *)(v460 + 4);
        v196 = __ldrex(v195);
      while ( __strex(v196 - 1, v195) );
      v196 = (*v195)--;
    if ( v196 == 1 )
      v197 = (unsigned int *)(v194 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v194 + 8))(v194);
          v198 = __ldrex(v197);
        while ( __strex(v198 - 1, v197) );
        v198 = (*v197)--;
      if ( v198 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v194 + 12))(v194);
  v457 = Potion::Swiftness;
  v458 = dword_2804778;
    v199 = (unsigned int *)(dword_2804778 + 4);
        v200 = __ldrex(v199);
      while ( __strex(v200 + 1, v199) );
      ++*v199;
  PotionBrewing::addMix((unsigned __int64 *)&v457, &v528, (unsigned __int64 *)&Potion::StrongSwiftness);
  v201 = v458;
  if ( v458 )
    v202 = (unsigned int *)(v458 + 4);
        v203 = __ldrex(v202);
      while ( __strex(v203 - 1, v202) );
      v203 = (*v202)--;
    if ( v203 == 1 )
      v204 = (unsigned int *)(v201 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v201 + 8))(v201);
          v205 = __ldrex(v204);
        while ( __strex(v205 - 1, v204) );
        v205 = (*v204)--;
      if ( v205 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v201 + 12))(v201);
  v455 = Potion::Awkward;
  v456 = dword_2804728;
    v206 = (unsigned int *)(dword_2804728 + 4);
        v207 = __ldrex(v206);
      while ( __strex(v207 + 1, v206) );
      ++*v206;
  PotionBrewing::addMix((unsigned __int64 *)&v455, &v525, (unsigned __int64 *)&Potion::WaterBreathing);
  v208 = v456;
  if ( v456 )
    v209 = (unsigned int *)(v456 + 4);
        v210 = __ldrex(v209);
      while ( __strex(v210 - 1, v209) );
      v210 = (*v209)--;
    if ( v210 == 1 )
      v211 = (unsigned int *)(v208 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v208 + 8))(v208);
          v212 = __ldrex(v211);
        while ( __strex(v212 - 1, v211) );
        v212 = (*v211)--;
      if ( v212 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v208 + 12))(v208);
  v453 = Potion::WaterBreathing;
  v454 = dword_28047A4;
  if ( dword_28047A4 )
    v213 = (unsigned int *)(dword_28047A4 + 4);
        v214 = __ldrex(v213);
      while ( __strex(v214 + 1, v213) );
      ++*v213;
  PotionBrewing::addMix((unsigned __int64 *)&v453, &v531, (unsigned __int64 *)&Potion::LongWaterBreathing);
  v215 = v454;
  if ( v454 )
    v216 = (unsigned int *)(v454 + 4);
        v217 = __ldrex(v216);
      while ( __strex(v217 - 1, v216) );
      v217 = (*v216)--;
    if ( v217 == 1 )
      v218 = (unsigned int *)(v215 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v215 + 8))(v215);
          v219 = __ldrex(v218);
        while ( __strex(v219 - 1, v218) );
        v219 = (*v218)--;
      if ( v219 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v215 + 12))(v215);
  v451 = Potion::Awkward;
  v452 = dword_2804728;
    v220 = (unsigned int *)(dword_2804728 + 4);
        v221 = __ldrex(v220);
      while ( __strex(v221 + 1, v220) );
      ++*v220;
  PotionBrewing::addMix((unsigned __int64 *)&v451, &v524, (unsigned __int64 *)&Potion::Healing);
  v222 = v452;
  if ( v452 )
    v223 = (unsigned int *)(v452 + 4);
        v224 = __ldrex(v223);
      while ( __strex(v224 - 1, v223) );
      v224 = (*v223)--;
    if ( v224 == 1 )
      v225 = (unsigned int *)(v222 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v222 + 8))(v222);
          v226 = __ldrex(v225);
        while ( __strex(v226 - 1, v225) );
        v226 = (*v225)--;
      if ( v226 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v222 + 12))(v222);
  v449 = Potion::Healing;
  v450 = dword_28047B4;
  if ( dword_28047B4 )
    v227 = (unsigned int *)(dword_28047B4 + 4);
        v228 = __ldrex(v227);
      while ( __strex(v228 + 1, v227) );
      ++*v227;
  PotionBrewing::addMix((unsigned __int64 *)&v449, &v528, (unsigned __int64 *)&Potion::StrongHealing);
  v229 = v450;
  if ( v450 )
    v230 = (unsigned int *)(v450 + 4);
        v231 = __ldrex(v230);
      while ( __strex(v231 - 1, v230) );
      v231 = (*v230)--;
    if ( v231 == 1 )
      v232 = (unsigned int *)(v229 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v229 + 8))(v229);
          v233 = __ldrex(v232);
        while ( __strex(v233 - 1, v232) );
        v233 = (*v232)--;
      if ( v233 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v229 + 12))(v229);
  v447 = Potion::Healing;
  v448 = dword_28047B4;
    v234 = (unsigned int *)(dword_28047B4 + 4);
        v235 = __ldrex(v234);
      while ( __strex(v235 + 1, v234) );
      ++*v234;
  PotionBrewing::addMix((unsigned __int64 *)&v447, &v530, (unsigned __int64 *)&Potion::Harming);
  v236 = v448;
  if ( v448 )
    v237 = (unsigned int *)(v448 + 4);
        v238 = __ldrex(v237);
      while ( __strex(v238 - 1, v237) );
      v238 = (*v237)--;
    if ( v238 == 1 )
      v239 = (unsigned int *)(v236 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v236 + 8))(v236);
          v240 = __ldrex(v239);
        while ( __strex(v240 - 1, v239) );
        v240 = (*v239)--;
      if ( v240 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v236 + 12))(v236);
  v445 = Potion::StrongHealing;
  v446 = dword_28047BC;
  if ( dword_28047BC )
    v241 = (unsigned int *)(dword_28047BC + 4);
        v242 = __ldrex(v241);
      while ( __strex(v242 + 1, v241) );
      ++*v241;
  PotionBrewing::addMix((unsigned __int64 *)&v445, &v530, (unsigned __int64 *)&Potion::StrongHarming);
  v243 = v446;
  if ( v446 )
    v244 = (unsigned int *)(v446 + 4);
        v245 = __ldrex(v244);
      while ( __strex(v245 - 1, v244) );
      v245 = (*v244)--;
    if ( v245 == 1 )
      v246 = (unsigned int *)(v243 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v243 + 8))(v243);
          v247 = __ldrex(v246);
        while ( __strex(v247 - 1, v246) );
        v247 = (*v246)--;
      if ( v247 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v243 + 12))(v243);
  v443 = Potion::Harming;
  v444 = dword_28047C4;
  if ( dword_28047C4 )
    v248 = (unsigned int *)(dword_28047C4 + 4);
        v249 = __ldrex(v248);
      while ( __strex(v249 + 1, v248) );
      ++*v248;
  PotionBrewing::addMix((unsigned __int64 *)&v443, &v528, (unsigned __int64 *)&Potion::StrongHarming);
  v250 = v444;
  if ( v444 )
    v251 = (unsigned int *)(v444 + 4);
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
  v441 = Potion::Poison;
  v442 = dword_28047D4;
  if ( dword_28047D4 )
    v255 = (unsigned int *)(dword_28047D4 + 4);
        v256 = __ldrex(v255);
      while ( __strex(v256 + 1, v255) );
      ++*v255;
  PotionBrewing::addMix((unsigned __int64 *)&v441, &v530, (unsigned __int64 *)&Potion::Harming);
  v257 = v442;
  if ( v442 )
    v258 = (unsigned int *)(v442 + 4);
        v259 = __ldrex(v258);
      while ( __strex(v259 - 1, v258) );
      v259 = (*v258)--;
    if ( v259 == 1 )
      v260 = (unsigned int *)(v257 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v257 + 8))(v257);
          v261 = __ldrex(v260);
        while ( __strex(v261 - 1, v260) );
        v261 = (*v260)--;
      if ( v261 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v257 + 12))(v257);
  v439 = Potion::LongPoison;
  v440 = dword_28047DC;
  if ( dword_28047DC )
    v262 = (unsigned int *)(dword_28047DC + 4);
        v263 = __ldrex(v262);
      while ( __strex(v263 + 1, v262) );
      ++*v262;
  PotionBrewing::addMix((unsigned __int64 *)&v439, &v530, (unsigned __int64 *)&Potion::Harming);
  v264 = v440;
  if ( v440 )
    v265 = (unsigned int *)(v440 + 4);
        v266 = __ldrex(v265);
      while ( __strex(v266 - 1, v265) );
      v266 = (*v265)--;
    if ( v266 == 1 )
      v267 = (unsigned int *)(v264 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v264 + 8))(v264);
          v268 = __ldrex(v267);
        while ( __strex(v268 - 1, v267) );
        v268 = (*v267)--;
      if ( v268 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v264 + 12))(v264);
  v437 = Potion::StrongPoison;
  v438 = dword_28047E4;
  if ( dword_28047E4 )
    v269 = (unsigned int *)(dword_28047E4 + 4);
        v270 = __ldrex(v269);
      while ( __strex(v270 + 1, v269) );
      ++*v269;
  PotionBrewing::addMix((unsigned __int64 *)&v437, &v530, (unsigned __int64 *)&Potion::StrongHarming);
  v271 = v438;
  if ( v438 )
    v272 = (unsigned int *)(v438 + 4);
        v273 = __ldrex(v272);
      while ( __strex(v273 - 1, v272) );
      v273 = (*v272)--;
    if ( v273 == 1 )
      v274 = (unsigned int *)(v271 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v271 + 8))(v271);
          v275 = __ldrex(v274);
        while ( __strex(v275 - 1, v274) );
        v275 = (*v274)--;
      if ( v275 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v271 + 12))(v271);
  v435 = Potion::Awkward;
  v436 = dword_2804728;
    v276 = (unsigned int *)(dword_2804728 + 4);
        v277 = __ldrex(v276);
      while ( __strex(v277 + 1, v276) );
      ++*v276;
  PotionBrewing::addMix((unsigned __int64 *)&v435, &v523, (unsigned __int64 *)&Potion::Poison);
  v278 = v436;
  if ( v436 )
    v279 = (unsigned int *)(v436 + 4);
        v280 = __ldrex(v279);
      while ( __strex(v280 - 1, v279) );
      v280 = (*v279)--;
    if ( v280 == 1 )
      v281 = (unsigned int *)(v278 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v278 + 8))(v278);
          v282 = __ldrex(v281);
        while ( __strex(v282 - 1, v281) );
        v282 = (*v281)--;
      if ( v282 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v278 + 12))(v278);
  v433 = Potion::Poison;
  v434 = dword_28047D4;
    v283 = (unsigned int *)(dword_28047D4 + 4);
        v284 = __ldrex(v283);
      while ( __strex(v284 + 1, v283) );
      ++*v283;
  PotionBrewing::addMix((unsigned __int64 *)&v433, &v531, (unsigned __int64 *)&Potion::LongPoison);
  v285 = v434;
  if ( v434 )
    v286 = (unsigned int *)(v434 + 4);
        v287 = __ldrex(v286);
      while ( __strex(v287 - 1, v286) );
      v287 = (*v286)--;
    if ( v287 == 1 )
      v288 = (unsigned int *)(v285 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v285 + 8))(v285);
          v289 = __ldrex(v288);
        while ( __strex(v289 - 1, v288) );
        v289 = (*v288)--;
      if ( v289 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v285 + 12))(v285);
  v431 = Potion::Poison;
  v432 = dword_28047D4;
    v290 = (unsigned int *)(dword_28047D4 + 4);
        v291 = __ldrex(v290);
      while ( __strex(v291 + 1, v290) );
      ++*v290;
  PotionBrewing::addMix((unsigned __int64 *)&v431, &v528, (unsigned __int64 *)&Potion::StrongPoison);
  v292 = v432;
  if ( v432 )
    v293 = (unsigned int *)(v432 + 4);
        v294 = __ldrex(v293);
      while ( __strex(v294 - 1, v293) );
      v294 = (*v293)--;
    if ( v294 == 1 )
      v295 = (unsigned int *)(v292 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v292 + 8))(v292);
          v296 = __ldrex(v295);
        while ( __strex(v296 - 1, v295) );
        v296 = (*v295)--;
      if ( v296 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v292 + 12))(v292);
  v429 = Potion::Awkward;
  v430 = dword_2804728;
    v297 = (unsigned int *)(dword_2804728 + 4);
        v298 = __ldrex(v297);
      while ( __strex(v298 + 1, v297) );
      ++*v297;
  PotionBrewing::addMix((unsigned __int64 *)&v429, &v522, (unsigned __int64 *)&Potion::Regeneration);
  v299 = v430;
  if ( v430 )
    v300 = (unsigned int *)(v430 + 4);
        v301 = __ldrex(v300);
      while ( __strex(v301 - 1, v300) );
      v301 = (*v300)--;
    if ( v301 == 1 )
      v302 = (unsigned int *)(v299 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v299 + 8))(v299);
          v303 = __ldrex(v302);
        while ( __strex(v303 - 1, v302) );
        v303 = (*v302)--;
      if ( v303 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v299 + 12))(v299);
  v427 = Potion::Regeneration;
  v428 = dword_28047EC;
  if ( dword_28047EC )
    v304 = (unsigned int *)(dword_28047EC + 4);
        v305 = __ldrex(v304);
      while ( __strex(v305 + 1, v304) );
      ++*v304;
  PotionBrewing::addMix((unsigned __int64 *)&v427, &v531, (unsigned __int64 *)&Potion::LongRegeneration);
  v306 = v428;
  if ( v428 )
    v307 = (unsigned int *)(v428 + 4);
        v308 = __ldrex(v307);
      while ( __strex(v308 - 1, v307) );
      v308 = (*v307)--;
    if ( v308 == 1 )
      v309 = (unsigned int *)(v306 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v306 + 8))(v306);
          v310 = __ldrex(v309);
        while ( __strex(v310 - 1, v309) );
        v310 = (*v309)--;
      if ( v310 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v306 + 12))(v306);
  v425 = Potion::Regeneration;
  v426 = dword_28047EC;
    v311 = (unsigned int *)(dword_28047EC + 4);
        v312 = __ldrex(v311);
      while ( __strex(v312 + 1, v311) );
      ++*v311;
  PotionBrewing::addMix((unsigned __int64 *)&v425, &v528, (unsigned __int64 *)&Potion::StrongRegeneration);
  v313 = v426;
  if ( v426 )
    v314 = (unsigned int *)(v426 + 4);
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
  v423 = Potion::Awkward;
  v424 = dword_2804728;
    v318 = (unsigned int *)(dword_2804728 + 4);
        v319 = __ldrex(v318);
      while ( __strex(v319 + 1, v318) );
      ++*v318;
  PotionBrewing::addMix((unsigned __int64 *)&v423, &v521, (unsigned __int64 *)&Potion::Strength);
  v320 = v424;
  if ( v424 )
    v321 = (unsigned int *)(v424 + 4);
        v322 = __ldrex(v321);
      while ( __strex(v322 - 1, v321) );
      v322 = (*v321)--;
    if ( v322 == 1 )
      v323 = (unsigned int *)(v320 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v320 + 8))(v320);
          v324 = __ldrex(v323);
        while ( __strex(v324 - 1, v323) );
        v324 = (*v323)--;
      if ( v324 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v320 + 12))(v320);
  v421 = Potion::Strength;
  v422 = dword_280480C;
  if ( dword_280480C )
    v325 = (unsigned int *)(dword_280480C + 4);
        v326 = __ldrex(v325);
      while ( __strex(v326 + 1, v325) );
      ++*v325;
  PotionBrewing::addMix((unsigned __int64 *)&v421, &v531, (unsigned __int64 *)&Potion::LongStrength);
  v327 = v422;
  if ( v422 )
    v328 = (unsigned int *)(v422 + 4);
        v329 = __ldrex(v328);
      while ( __strex(v329 - 1, v328) );
      v329 = (*v328)--;
    if ( v329 == 1 )
      v330 = (unsigned int *)(v327 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v327 + 8))(v327);
          v331 = __ldrex(v330);
        while ( __strex(v331 - 1, v330) );
        v331 = (*v330)--;
      if ( v331 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v327 + 12))(v327);
  v419 = Potion::Strength;
  v420 = dword_280480C;
    v332 = (unsigned int *)(dword_280480C + 4);
        v333 = __ldrex(v332);
      while ( __strex(v333 + 1, v332) );
      ++*v332;
  PotionBrewing::addMix((unsigned __int64 *)&v419, &v528, (unsigned __int64 *)&Potion::StrongStrength);
  v334 = v420;
  if ( v420 )
    v335 = (unsigned int *)(v420 + 4);
        v336 = __ldrex(v335);
      while ( __strex(v336 - 1, v335) );
      v336 = (*v335)--;
    if ( v336 == 1 )
      v337 = (unsigned int *)(v334 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v334 + 8))(v334);
          v338 = __ldrex(v337);
        while ( __strex(v338 - 1, v337) );
        v338 = (*v337)--;
      if ( v338 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v334 + 12))(v334);
  v417 = Potion::Water;
  v418 = dword_2804708;
    v339 = (unsigned int *)(dword_2804708 + 4);
        v340 = __ldrex(v339);
      while ( __strex(v340 + 1, v339) );
      ++*v339;
  PotionBrewing::addMix((unsigned __int64 *)&v417, &v530, (unsigned __int64 *)&Potion::Weakness);
  v341 = v418;
  if ( v418 )
    v342 = (unsigned int *)(v418 + 4);
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
  v415 = Potion::Weakness;
  v416 = dword_2804824;
  if ( dword_2804824 )
    v346 = (unsigned int *)(dword_2804824 + 4);
        v347 = __ldrex(v346);
      while ( __strex(v347 + 1, v346) );
      ++*v346;
  PotionBrewing::addMix((unsigned __int64 *)&v415, &v531, (unsigned __int64 *)&Potion::LongWeakness);
  v348 = v416;
  if ( v416 )
    v349 = (unsigned int *)(v416 + 4);
        v350 = __ldrex(v349);
      while ( __strex(v350 - 1, v349) );
      v350 = (*v349)--;
    if ( v350 == 1 )
      v351 = (unsigned int *)(v348 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v348 + 8))(v348);
          v352 = __ldrex(v351);
        while ( __strex(v352 - 1, v351) );
        v352 = (*v351)--;
      if ( v352 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v348 + 12))(v348);
  v413 = Potion::Awkward;
  v414 = dword_2804728;
    v353 = (unsigned int *)(dword_2804728 + 4);
        v354 = __ldrex(v353);
      while ( __strex(v354 + 1, v353) );
      ++*v353;
  PotionBrewing::addMix((unsigned __int64 *)&v413, &v530, (unsigned __int64 *)&Potion::Weakness);
  v355 = v414;
  if ( v414 )
    v356 = (unsigned int *)(v414 + 4);
        v357 = __ldrex(v356);
      while ( __strex(v357 - 1, v356) );
      v357 = (*v356)--;
    if ( v357 == 1 )
      v358 = (unsigned int *)(v355 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v355 + 8))(v355);
          v359 = __ldrex(v358);
        while ( __strex(v359 - 1, v358) );
        v359 = (*v358)--;
      if ( v359 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v355 + 12))(v355);
  v411 = Potion::Mundane;
  v412 = dword_2804710;
  if ( dword_2804710 )
    v360 = (unsigned int *)(dword_2804710 + 4);
        v361 = __ldrex(v360);
      while ( __strex(v361 + 1, v360) );
      ++*v360;
  PotionBrewing::addMix((unsigned __int64 *)&v411, &v530, (unsigned __int64 *)&Potion::Weakness);
  v362 = v412;
  if ( v412 )
    v363 = (unsigned int *)(v412 + 4);
        v364 = __ldrex(v363);
      while ( __strex(v364 - 1, v363) );
      v364 = (*v363)--;
    if ( v364 == 1 )
      v365 = (unsigned int *)(v362 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v362 + 8))(v362);
          v366 = __ldrex(v365);
        while ( __strex(v366 - 1, v365) );
        v366 = (*v365)--;
      if ( v366 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v362 + 12))(v362);
  v409 = Potion::Thick;
  v410 = dword_2804720;
  if ( dword_2804720 )
    v367 = (unsigned int *)(dword_2804720 + 4);
        v368 = __ldrex(v367);
      while ( __strex(v368 + 1, v367) );
      ++*v367;
  PotionBrewing::addMix((unsigned __int64 *)&v409, &v530, (unsigned __int64 *)&Potion::Weakness);
  v369 = v410;
  if ( v410 )
    v370 = (unsigned int *)(v410 + 4);
        v371 = __ldrex(v370);
      while ( __strex(v371 - 1, v370) );
      v371 = (*v370)--;
    if ( v371 == 1 )
      v372 = (unsigned int *)(v369 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v369 + 8))(v369);
          v373 = __ldrex(v372);
        while ( __strex(v373 - 1, v372) );
        v373 = (*v372)--;
      if ( v373 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v369 + 12))(v369);
  v407 = Potion::Strength;
  v408 = dword_280480C;
    v374 = (unsigned int *)(dword_280480C + 4);
        v375 = __ldrex(v374);
      while ( __strex(v375 + 1, v374) );
      ++*v374;
  PotionBrewing::addMix((unsigned __int64 *)&v407, &v530, (unsigned __int64 *)&Potion::Weakness);
  v376 = v408;
  if ( v408 )
    v377 = (unsigned int *)(v408 + 4);
        v378 = __ldrex(v377);
      while ( __strex(v378 - 1, v377) );
      v378 = (*v377)--;
    if ( v378 == 1 )
      v379 = (unsigned int *)(v376 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v376 + 8))(v376);
          v380 = __ldrex(v379);
        while ( __strex(v380 - 1, v379) );
        v380 = (*v379)--;
      if ( v380 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v376 + 12))(v376);
  v405 = Potion::StrongStrength;
  v406 = dword_280481C;
  if ( dword_280481C )
    v381 = (unsigned int *)(dword_280481C + 4);
        v382 = __ldrex(v381);
      while ( __strex(v382 + 1, v381) );
      ++*v381;
  PotionBrewing::addMix((unsigned __int64 *)&v405, &v530, (unsigned __int64 *)&Potion::Weakness);
  v383 = v406;
  if ( v406 )
    v384 = (unsigned int *)(v406 + 4);
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
  v403 = Potion::LongStrength;
  v404 = dword_2804814;
  if ( dword_2804814 )
    v388 = (unsigned int *)(dword_2804814 + 4);
        v389 = __ldrex(v388);
      while ( __strex(v389 + 1, v388) );
      ++*v388;
  PotionBrewing::addMix((unsigned __int64 *)&v403, &v530, (unsigned __int64 *)&Potion::LongWeakness);
  v390 = v404;
  if ( v404 )
    v391 = (unsigned int *)(v404 + 4);
        v392 = __ldrex(v391);
      while ( __strex(v392 - 1, v391) );
      v392 = (*v391)--;
    if ( v392 == 1 )
      v393 = (unsigned int *)(v390 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v390 + 8))(v390);
          v394 = __ldrex(v393);
        while ( __strex(v394 - 1, v393) );
        v394 = (*v393)--;
      if ( v394 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v390 + 12))(v390);
  v401 = Potion::LongMundane;
  v402 = dword_2804718;
  if ( dword_2804718 )
    v395 = (unsigned int *)(dword_2804718 + 4);
        v396 = __ldrex(v395);
      while ( __strex(v396 + 1, v395) );
      ++*v395;
  result = PotionBrewing::addMix((unsigned __int64 *)&v401, &v530, (unsigned __int64 *)&Potion::LongWeakness);
  v398 = v402;
  if ( v402 )
    v399 = (unsigned int *)(v402 + 4);
        result = (_DWORD *)__ldrex(v399);
      while ( __strex((unsigned int)result - 1, v399) );
      result = (_DWORD *)(*v399)--;
    if ( result == (_DWORD *)1 )
      v400 = (unsigned int *)(v398 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v398 + 8))(v398);
          result = (_DWORD *)__ldrex(v400);
        while ( __strex((unsigned int)result - 1, v400) );
        result = (_DWORD *)(*v400)--;
      if ( result == (_DWORD *)1 )
        result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v398 + 12))(v398);
  return result;
}


signed int __fastcall PotionBrewing::Ingredient::equals(PotionBrewing::Ingredient *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r4@1
  PotionBrewing::Ingredient *v3; // r5@1
  bool v4; // zf@1
  int v5; // r5@7
  int v6; // r1@8
  signed int result; // r0@8

  v2 = a2;
  v3 = this;
  v4 = *((_BYTE *)a2 + 15) == 0;
  if ( *((_BYTE *)a2 + 15) )
    v4 = *(_DWORD *)a2 == 0;
  if ( v4 || ItemInstance::isNull(a2) || !*((_BYTE *)v2 + 14) || ItemInstance::getId(v2) != *(_DWORD *)v3 )
  {
    result = 0;
  }
  else
    v5 = *((_DWORD *)v3 + 1);
    if ( v5 == -1 )
    {
      result = 1;
    }
    else
      v6 = ItemInstance::getAuxValue(v2);
      result = 0;
      if ( v5 == v6 )
        result = 1;
  return result;
}


_DWORD *__fastcall PotionBrewing::addMix(unsigned __int64 *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  unsigned int v4; // r9@4
  int v5; // r8@4
  _DWORD *result; // r0@4
  _DWORD *v7; // r4@5
  int v8; // r7@5
  int v9; // r5@7
  bool v10; // zf@10
  _DWORD *v11; // r0@14

  v3 = a2;
  if ( dword_2804B44 == dword_2804B48 )
  {
    std::vector<PotionBrewing::Mix<std::shared_ptr<Potion const>>,std::allocator<PotionBrewing::Mix<std::shared_ptr<Potion const>>>>::_M_emplace_back_aux<std::shared_ptr<Potion const> const&,PotionBrewing::Ingredient const&,std::shared_ptr<Potion const> const&>(
      (__int64 *)&PotionBrewing::mPotionMixes,
      a1,
      a2,
      a3);
  }
  else
    __gnu_cxx::new_allocator<PotionBrewing::Mix<std::shared_ptr<Potion const>>>::construct<PotionBrewing::Mix<std::shared_ptr<Potion const>>,std::shared_ptr<Potion const> const&,PotionBrewing::Ingredient const&,std::shared_ptr<Potion const> const&>(
      (int)&PotionBrewing::mPotionMixes,
      dword_2804B44,
    dword_2804B44 += 24;
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)v3 % unk_2804B68;
  result = *(_DWORD **)(PotionBrewing::mValidIngredients + 4 * v5);
  if ( !result )
    goto LABEL_14;
  v7 = (_DWORD *)*result;
  v8 = *(_DWORD *)(*result + 4);
  while ( v4 != v8 )
    v9 = *v7;
    if ( *v7 )
    {
      v8 = *(_DWORD *)(v9 + 4);
      result = v7;
      v7 = (_DWORD *)*v7;
      if ( *(_DWORD *)(v9 + 4) % unk_2804B68 == v5 )
        continue;
    }
  v10 = result == 0;
  if ( result )
    result = (_DWORD *)*result;
    v10 = result == 0;
  if ( v10 )
LABEL_14:
    v11 = operator new(8u);
    *v11 = 0;
    v11[1] = v4;
    result = (_DWORD *)j_j_j__ZNSt10_HashtableIiiSaIiENSt8__detail9_IdentityESt8equal_toIiESt4hashIiENS1_18_Mod_range_hashingENS1_20_Default_ranged_hashENS1_20_Prime_rehash_policyENS1_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEjjPNS1_10_Hash_nodeIiLb0EEE_0(
                         (int)&PotionBrewing::mValidIngredients,
                         v5,
                         v4,
                         (int)v11);
  return result;
}


ItemInstance *__fastcall PotionBrewing::mix(PotionBrewing *this, const ItemInstance *a2, const ItemInstance *a3)
{
  const ItemInstance *v3; // r4@1
  PotionBrewing *v4; // r9@1
  const ItemInstance *v5; // r6@1
  bool v6; // zf@1
  int v7; // r0@6
  int v8; // r5@6
  int v9; // r7@6
  int v10; // r10@6
  bool v11; // zf@8
  int v12; // r8@14
  ItemInstance *result; // r0@17
  int v14; // r5@17
  int v15; // r7@17
  bool v16; // zf@19
  ItemInstance *v17; // r8@25
  signed int v18; // r8@28
  int v19; // r6@31
  unsigned int *v20; // r1@32
  unsigned int *v21; // r5@38
  int v22; // r6@48
  int v23; // r0@48
  int v24; // r0@49
  ItemInstance *v25; // [sp+0h] [bp-28h]@6
  int v26; // [sp+4h] [bp-24h]@31

  v3 = a3;
  v4 = this;
  v5 = a2;
  v6 = *((_BYTE *)a3 + 15) == 0;
  if ( *((_BYTE *)a3 + 15) )
    v6 = *(_DWORD *)a3 == 0;
  if ( v6 || ItemInstance::isNull(a3) || !*((_BYTE *)v3 + 14) )
    goto LABEL_52;
  v7 = ItemInstance::getAuxValue(v3);
  Potion::getPotion((Potion *)&v25, v7);
  v9 = dword_2804B50;
  v8 = PotionBrewing::mContainerMixes;
  v10 = *(_DWORD *)v3;
  if ( PotionBrewing::mContainerMixes == dword_2804B50 )
  {
LABEL_17:
    result = (ItemInstance *)&PotionBrewing::mPotionMixes;
    v15 = dword_2804B44;
    v14 = PotionBrewing::mPotionMixes;
    if ( PotionBrewing::mPotionMixes == dword_2804B44 )
    {
LABEL_28:
      v18 = 4;
    }
    else
      while ( 1 )
      {
        result = v25;
        if ( *(ItemInstance **)v14 == v25 )
        {
          result = (ItemInstance *)*((_BYTE *)v5 + 15);
          v16 = result == 0;
          if ( *((_BYTE *)v5 + 15) )
          {
            result = *(ItemInstance **)v5;
            v16 = *(_DWORD *)v5 == 0;
          }
          if ( !v16 )
            result = (ItemInstance *)ItemInstance::isNull(v5);
            if ( !result )
            {
              result = (ItemInstance *)*((_BYTE *)v5 + 14);
              if ( *((_BYTE *)v5 + 14) )
              {
                result = (ItemInstance *)ItemInstance::getId(v5);
                if ( result == *(ItemInstance **)(v14 + 8) )
                {
                  v17 = *(ItemInstance **)(v14 + 12);
                  if ( v17 == (ItemInstance *)-1 )
                    break;
                  result = (ItemInstance *)ItemInstance::getAuxValue(v5);
                  if ( v17 == result )
                }
              }
            }
        }
        v14 += 24;
        if ( v15 == v14 )
          goto LABEL_28;
      }
      v24 = Potion::getPotionId(*(Potion **)(v14 + 16));
      v18 = 1;
      result = ItemInstance::ItemInstance(v4, v10, 1, v24);
    if ( v18 == 4 )
      v18 = 0;
  }
  else
    while ( 1 )
      if ( *(_WORD *)(*(_DWORD *)v8 + 18) == *(_WORD *)(v10 + 18) )
        v11 = *((_BYTE *)v5 + 15) == 0;
        if ( *((_BYTE *)v5 + 15) )
          v11 = *(_DWORD *)v5 == 0;
        if ( !v11 && !ItemInstance::isNull(v5) )
          if ( *((_BYTE *)v5 + 14) )
            if ( ItemInstance::getId(v5) == *(_DWORD *)(v8 + 4) )
              v12 = *(_DWORD *)(v8 + 8);
              if ( v12 == -1 || v12 == ItemInstance::getAuxValue(v5) )
                break;
      v8 += 16;
      if ( v9 == v8 )
        goto LABEL_17;
    v22 = *(_DWORD *)(v8 + 12);
    v23 = ItemInstance::getAuxValue(v3);
    v18 = 1;
    result = ItemInstance::ItemInstance(v4, v22, 1, v23);
  v19 = v26;
  if ( v26 )
    v20 = (unsigned int *)(v26 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = (ItemInstance *)__ldrex(v20);
      while ( __strex((unsigned int)result - 1, v20) );
      result = (ItemInstance *)(*v20)--;
    if ( result == (ItemInstance *)1 )
      v21 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
      if ( &pthread_create )
        __dmb();
        do
          result = (ItemInstance *)__ldrex(v21);
        while ( __strex((unsigned int)result - 1, v21) );
      else
        result = (ItemInstance *)(*v21)--;
      if ( result == (ItemInstance *)1 )
        result = (ItemInstance *)(*(int (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  if ( !v18 )
LABEL_52:
    result = ItemInstance::ItemInstance(v4, (int)v3);
  return result;
}


signed int __fastcall PotionBrewing::hasContainerMix(PotionBrewing *this, const ItemInstance *a2, const ItemInstance *a3)
{
  const ItemInstance *v3; // r4@1
  int v4; // r5@1 OVERLAPPED
  int v5; // r6@1 OVERLAPPED
  int v6; // r7@2
  bool v7; // zf@4
  int v8; // r8@10
  signed int result; // r0@13

  v3 = a2;
  *(_QWORD *)&v4 = *(_QWORD *)&PotionBrewing::mContainerMixes;
  if ( PotionBrewing::mContainerMixes == dword_2804B50 )
  {
LABEL_13:
    result = 0;
  }
  else
    v6 = *(_DWORD *)this;
    while ( 1 )
    {
      if ( *(_WORD *)(*(_DWORD *)v4 + 18) == *(_WORD *)(v6 + 18) )
      {
        v7 = *((_BYTE *)v3 + 15) == 0;
        if ( *((_BYTE *)v3 + 15) )
          v7 = *(_DWORD *)v3 == 0;
        if ( !v7 && !ItemInstance::isNull(v3) )
        {
          if ( *((_BYTE *)v3 + 14) )
          {
            if ( ItemInstance::getId(v3) == *(_DWORD *)(v4 + 4) )
            {
              v8 = *(_DWORD *)(v4 + 8);
              if ( v8 == -1 || v8 == ItemInstance::getAuxValue(v3) )
                break;
            }
          }
        }
      }
      v4 += 16;
      if ( v5 == v4 )
        goto LABEL_13;
    }
    result = 1;
  return result;
}


signed int __fastcall PotionBrewing::getFuelValue(PotionBrewing *this, const ItemInstance *a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *(_WORD *)(*(_DWORD *)this + 18);
  result = 0;
  if ( v2 == *(_WORD *)(Item::mBlazePowder + 18) )
    result = 20;
  return result;
}
