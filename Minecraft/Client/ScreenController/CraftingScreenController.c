

int __fastcall CraftingScreenController::_handleScrollSelection(CraftingScreenController *this, int a2)
{
  CraftingScreenController *v2; // r4@1
  int v3; // r5@1
  MinecraftScreenModel *v4; // r0@1
  int v5; // r0@2
  Inventory *v6; // r8@4
  int v7; // r6@4
  int v8; // r5@5
  signed int v9; // r0@8
  int v10; // r0@11
  MinecraftScreenModel *v11; // r0@16
  signed int v12; // r6@16
  int v13; // r0@19
  unsigned __int8 v15; // [sp+0h] [bp-20h]@1
  int v16; // [sp+4h] [bp-1Ch]@5

  v2 = this;
  v3 = a2;
  MinecraftScreenModel::getSelectedSlot((MinecraftScreenModel *)&v15, *((_DWORD *)this + 95));
  v4 = (MinecraftScreenModel *)*((_DWORD *)v2 + 95);
  if ( v15 == 123 )
    v5 = MinecraftScreenModel::getFixedInventorySlotCount(v4);
  else
    v5 = MinecraftScreenModel::getHotbarSlotCount(v4);
  v6 = (Inventory *)v15;
  v7 = v5;
  if ( v3 <= -1 )
  {
    v10 = v16;
    if ( v16 < 1 )
      v10 = v7;
    v8 = v10 - 1;
    if ( (v7 == 1 || v8 > v16) && MinecraftScreenModel::hasFixedInventory(*((MinecraftScreenModel **)v2 + 95)) == 1 )
    {
      v11 = (MinecraftScreenModel *)*((_DWORD *)v2 + 95);
      v12 = 123;
      if ( v6 == (Inventory *)123 )
        v12 = 0;
      if ( v15 == 123 )
        v13 = MinecraftScreenModel::getHotbarSlotCount(v11);
      else
        v13 = MinecraftScreenModel::getFixedInventorySlotCount(v11);
      v8 = v13;
      v6 = (Inventory *)v12;
    }
  }
    v8 = (v16 + 1) % v5;
    if ( (v5 == 1 || (v16 + 1) % v5 < v16)
      && MinecraftScreenModel::hasFixedInventory(*((MinecraftScreenModel **)v2 + 95)) == 1 )
      v9 = 123;
        v9 = 0;
      v8 = 0;
      v6 = (Inventory *)v9;
  return CraftingScreenController::_selectSlot((int)v2, v8, v6);
}


void __fastcall CraftingScreenController::_registerAutoPlaceOrder(CraftingScreenController *this)
{
  CraftingScreenController *v1; // r8@1
  int v2; // r9@2
  int v3; // r0@2
  int v4; // r5@3
  int v5; // r7@3
  bool v6; // zf@4
  int v7; // r4@7
  bool v8; // zf@10
  _DWORD *v9; // r0@14
  char **v10; // r0@15
  char *v11; // r1@16
  char *v12; // r0@18
  int v13; // r9@19
  int v14; // r0@19
  int v15; // r5@20
  int v16; // r7@20
  bool v17; // zf@21
  int v18; // r4@24
  bool v19; // zf@27
  _DWORD *v20; // r0@31
  char **v21; // r0@32
  char *v22; // r1@33
  char *v23; // r0@35
  int v24; // r9@36
  int v25; // r0@36
  int v26; // r5@37
  int v27; // r7@37
  bool v28; // zf@38
  int v29; // r4@41
  bool v30; // zf@44
  _DWORD *v31; // r0@48
  char **v32; // r0@49
  char *v33; // r1@50
  char *v34; // r0@52
  int v35; // r9@53
  int v36; // r0@53
  int v37; // r5@54
  int v38; // r7@54
  bool v39; // zf@55
  int v40; // r4@58
  bool v41; // zf@61
  _DWORD *v42; // r0@65
  unsigned __int64 *v43; // r9@66
  int v44; // r0@66
  int v45; // r10@67
  int v46; // r0@67
  int v47; // r6@68
  int v48; // r4@68
  bool v49; // zf@69
  int v50; // r5@72
  unsigned int *v51; // r2@75
  signed int v52; // r1@77
  bool v53; // zf@79
  _DWORD *v54; // r0@83
  char **v55; // r0@84
  char *v56; // r1@85
  char *v57; // r0@87
  int v58; // r10@88
  int v59; // r0@88
  int v60; // r6@89
  int v61; // r4@89
  bool v62; // zf@90
  int v63; // r5@93
  bool v64; // zf@96
  _DWORD *v65; // r0@100
  char **v66; // r0@101
  char *v67; // r1@102
  char *v68; // r0@104
  int v69; // r10@105
  int v70; // r0@105
  int v71; // r6@106
  int v72; // r4@106
  bool v73; // zf@107
  int v74; // r5@110
  bool v75; // zf@113
  _DWORD *v76; // r0@117
  char **v77; // r0@118
  char *v78; // r1@119
  char *v79; // r0@121
  int v80; // r10@122
  int v81; // r0@122
  int v82; // r6@123
  int v83; // r4@123
  bool v84; // zf@124
  int v85; // r5@127
  bool v86; // zf@130
  _DWORD *v87; // r0@134
  int v88; // r0@135
  int v89; // r0@135
  int v90; // r10@136
  int v91; // r0@136
  int v92; // r6@137
  int v93; // r4@137
  bool v94; // zf@138
  int v95; // r5@141
  unsigned int *v96; // r2@144
  signed int v97; // r1@146
  bool v98; // zf@148
  _DWORD *v99; // r0@152
  char **v100; // r0@153
  char *v101; // r1@154
  char *v102; // r0@156
  int v103; // r10@157
  int v104; // r0@157
  int v105; // r6@158
  int v106; // r4@158
  bool v107; // zf@159
  int v108; // r5@162
  bool v109; // zf@165
  _DWORD *v110; // r0@169
  char **v111; // r0@170
  char *v112; // r1@171
  char *v113; // r0@173
  int v114; // r10@174
  int v115; // r0@174
  int v116; // r6@175
  int v117; // r4@175
  bool v118; // zf@176
  int v119; // r5@179
  bool v120; // zf@182
  _DWORD *v121; // r0@186
  int v122; // r0@187
  char **v123; // r4@187
  char **v124; // r6@187
  unsigned int *v125; // r2@189
  signed int v126; // r1@191
  int *v127; // r0@197
  int v128; // r10@204
  int v129; // r0@204
  int v130; // r6@205
  int v131; // r4@205
  bool v132; // zf@206
  int v133; // r5@209
  bool v134; // zf@212
  _DWORD *v135; // r0@216
  char **v136; // r0@217
  char *v137; // r1@218
  char *v138; // r0@220
  int v139; // r10@221
  int v140; // r0@221
  int v141; // r6@222
  int v142; // r4@222
  bool v143; // zf@223
  int v144; // r5@226
  bool v145; // zf@229
  _DWORD *v146; // r0@233
  char **v147; // r0@234
  char *v148; // r1@235
  char *v149; // r0@237
  int v150; // r10@238
  int v151; // r0@238
  int v152; // r6@239
  int v153; // r4@239
  bool v154; // zf@240
  int v155; // r5@243
  bool v156; // zf@246
  _DWORD *v157; // r0@250
  char **v158; // r0@251
  char *v159; // r1@252
  char *v160; // r0@254
  int v161; // r10@255
  int v162; // r0@255
  int v163; // r6@256
  int v164; // r4@256
  bool v165; // zf@257
  int v166; // r5@260
  bool v167; // zf@263
  _DWORD *v168; // r0@267
  int v169; // r0@268
  int v170; // r10@269
  int v171; // r0@269
  int v172; // r6@270
  int v173; // r4@270
  bool v174; // zf@271
  int v175; // r5@274
  unsigned int *v176; // r2@277
  signed int v177; // r1@279
  unsigned int *v178; // r2@281
  signed int v179; // r1@283
  bool v180; // zf@285
  _DWORD *v181; // r0@289
  char **v182; // r0@290
  char *v183; // r1@291
  char *v184; // r0@293
  int v185; // r10@294
  int v186; // r0@294
  int v187; // r6@295
  int v188; // r4@295
  bool v189; // zf@296
  int v190; // r5@299
  bool v191; // zf@302
  _DWORD *v192; // r0@306
  char **v193; // r0@307
  char *v194; // r1@308
  char *v195; // r0@310
  int v196; // r10@311
  int v197; // r0@311
  int v198; // r6@312
  int v199; // r4@312
  bool v200; // zf@313
  int v201; // r5@316
  bool v202; // zf@319
  _DWORD *v203; // r0@323
  char **v204; // r0@324
  char *v205; // r1@325
  char *v206; // r0@327
  int v207; // r10@328
  int v208; // r0@328
  int v209; // r6@329
  int v210; // r4@329
  bool v211; // zf@330
  int v212; // r5@333
  bool v213; // zf@336
  _DWORD *v214; // r0@340
  int v215; // r0@341
  int v216; // r10@341
  int v217; // r0@341
  int v218; // r6@342
  int v219; // r4@342
  bool v220; // zf@343
  int v221; // r5@346
  bool v222; // zf@349
  _DWORD *v223; // r0@353
  char **v224; // r0@354
  char *v225; // r1@355
  char *v226; // r0@357
  int v227; // r10@358
  int v228; // r0@358
  int v229; // r6@359
  int v230; // r4@359
  bool v231; // zf@360
  int v232; // r5@363
  bool v233; // zf@366
  _DWORD *v234; // r0@370
  char **v235; // r0@371
  char *v236; // r1@372
  char *v237; // r0@374
  int v238; // r10@375
  int v239; // r0@375
  int v240; // r6@376
  int v241; // r4@376
  bool v242; // zf@377
  int v243; // r5@380
  bool v244; // zf@383
  _DWORD *v245; // r0@387
  int v246; // r0@388
  int v247; // r10@388
  int v248; // r0@388
  int v249; // r6@389
  int v250; // r4@389
  bool v251; // zf@390
  int v252; // r5@393
  bool v253; // zf@396
  _DWORD *v254; // r0@400
  int v255; // r0@401
  int v256; // r10@401
  int v257; // r0@401
  int v258; // r6@402
  int v259; // r4@402
  bool v260; // zf@403
  int v261; // r5@406
  bool v262; // zf@409
  _DWORD *v263; // r0@413
  int v264; // r0@414
  int v265; // r10@414
  int v266; // r0@414
  int v267; // r6@415
  int v268; // r4@415
  bool v269; // zf@416
  int v270; // r5@419
  bool v271; // zf@422
  _DWORD *v272; // r0@426
  int v273; // r0@427
  int v274; // r10@427
  int v275; // r0@427
  int v276; // r6@428
  int v277; // r4@428
  bool v278; // zf@429
  int v279; // r5@432
  bool v280; // zf@435
  _DWORD *v281; // r0@439
  int v282; // r0@440
  int v283; // r8@441
  int v284; // r0@441
  int v285; // r4@442
  int v286; // r7@442
  bool v287; // zf@443
  int v288; // r5@446
  unsigned int *v289; // r2@449
  signed int v290; // r1@451
  unsigned int *v291; // r2@453
  signed int v292; // r1@455
  unsigned int *v293; // r2@457
  signed int v294; // r1@459
  unsigned int *v295; // r2@461
  signed int v296; // r1@463
  bool v297; // zf@465
  _DWORD *v298; // r0@469
  char **v299; // r0@470
  char *v300; // r1@471
  char *v301; // r0@473
  int v302; // r8@474
  int v303; // r0@474
  int v304; // r4@475
  int v305; // r7@475
  bool v306; // zf@476
  int v307; // r5@479
  bool v308; // zf@482
  _DWORD *v309; // r0@486
  char **v310; // r0@487
  char *v311; // r1@488
  char *v312; // r0@490
  int v313; // r8@491
  int v314; // r0@491
  int v315; // r4@492
  int v316; // r7@492
  bool v317; // zf@493
  int v318; // r5@496
  bool v319; // zf@499
  _DWORD *v320; // r0@503
  int v321; // r0@504
  char **v322; // r4@504
  char **v323; // r6@504
  unsigned int *v324; // r2@506
  signed int v325; // r1@508
  int *v326; // r0@514
  char **v327; // r4@519
  char **v328; // r6@519
  unsigned int *v329; // r2@521
  signed int v330; // r1@523
  int *v331; // r0@529
  char **v332; // r4@534
  char **v333; // r6@534
  unsigned int *v334; // r2@536
  signed int v335; // r1@538
  int *v336; // r0@544
  char **v337; // r4@549
  char **v338; // r6@549
  unsigned int *v339; // r2@551
  signed int v340; // r1@553
  int *v341; // r0@559
  char **v342; // r4@564
  char **v343; // r6@564
  unsigned int *v344; // r2@566
  signed int v345; // r1@568
  int *v346; // r0@574
  char **v347; // r4@579
  char **v348; // r6@579
  unsigned int *v349; // r2@581
  signed int v350; // r1@583
  int *v351; // r0@589
  unsigned int *v352; // r2@627
  signed int v353; // r1@629
  unsigned int *v354; // r2@631
  signed int v355; // r1@633
  unsigned int *v356; // r2@635
  signed int v357; // r1@637
  unsigned int *v358; // r2@639
  signed int v359; // r1@641
  unsigned int *v360; // r2@643
  signed int v361; // r1@645
  unsigned int *v362; // r2@647
  signed int v363; // r1@649
  unsigned int *v364; // r2@651
  signed int v365; // r1@653
  unsigned int *v366; // r2@655
  signed int v367; // r1@657
  unsigned int *v368; // r2@659
  signed int v369; // r1@661
  unsigned int *v370; // r2@663
  signed int v371; // r1@665
  char *v372; // [sp+4h] [bp-10Ch]@487
  char v373; // [sp+8h] [bp-108h]@488
  char *v374; // [sp+Ch] [bp-104h]@470
  char v375; // [sp+10h] [bp-100h]@471
  char **v376; // [sp+14h] [bp-FCh]@441
  char **v377; // [sp+18h] [bp-F8h]@441
  char **v378; // [sp+1Ch] [bp-F4h]@441
  char *v379; // [sp+20h] [bp-F0h]@371
  char v380; // [sp+24h] [bp-ECh]@372
  char *v381; // [sp+28h] [bp-E8h]@354
  char v382; // [sp+2Ch] [bp-E4h]@355
  char **v383; // [sp+30h] [bp-E0h]@341
  char **v384; // [sp+34h] [bp-DCh]@341
  char **v385; // [sp+38h] [bp-D8h]@341
  char *v386; // [sp+3Ch] [bp-D4h]@324
  char v387; // [sp+40h] [bp-D0h]@325
  char *v388; // [sp+44h] [bp-CCh]@307
  char v389; // [sp+48h] [bp-C8h]@308
  char *v390; // [sp+4Ch] [bp-C4h]@290
  char v391; // [sp+50h] [bp-C0h]@291
  char **v392; // [sp+54h] [bp-BCh]@268
  char **v393; // [sp+58h] [bp-B8h]@268
  char **v394; // [sp+5Ch] [bp-B4h]@268
  char *v395; // [sp+60h] [bp-B0h]@251
  char v396; // [sp+64h] [bp-ACh]@252
  char *v397; // [sp+68h] [bp-A8h]@234
  char v398; // [sp+6Ch] [bp-A4h]@235
  char *v399; // [sp+70h] [bp-A0h]@217
  char v400; // [sp+74h] [bp-9Ch]@218
  char **v401; // [sp+78h] [bp-98h]@203
  char **v402; // [sp+7Ch] [bp-94h]@203
  char **v403; // [sp+80h] [bp-90h]@203
  char *v404; // [sp+84h] [bp-8Ch]@170
  char v405; // [sp+88h] [bp-88h]@171
  char *v406; // [sp+8Ch] [bp-84h]@153
  char v407; // [sp+90h] [bp-80h]@154
  char **v408; // [sp+94h] [bp-7Ch]@136
  char **v409; // [sp+98h] [bp-78h]@136
  char **v410; // [sp+9Ch] [bp-74h]@136
  char *v411; // [sp+A0h] [bp-70h]@118
  char v412; // [sp+A4h] [bp-6Ch]@119
  char *v413; // [sp+A8h] [bp-68h]@101
  char v414; // [sp+ACh] [bp-64h]@102
  char *v415; // [sp+B0h] [bp-60h]@84
  char v416; // [sp+B4h] [bp-5Ch]@85
  char **v417; // [sp+B8h] [bp-58h]@66
  char **v418; // [sp+BCh] [bp-54h]@66
  char **v419; // [sp+C0h] [bp-50h]@66
  char *v420; // [sp+C4h] [bp-4Ch]@49
  char v421; // [sp+C8h] [bp-48h]@50
  char *v422; // [sp+CCh] [bp-44h]@32
  char v423; // [sp+D0h] [bp-40h]@33
  char *v424; // [sp+D4h] [bp-3Ch]@15
  char v425; // [sp+D8h] [bp-38h]@16
  char **v426; // [sp+DCh] [bp-34h]@1
  char **v427; // [sp+E0h] [bp-30h]@1
  char **v428; // [sp+E4h] [bp-2Ch]@1

  v1 = this;
  v426 = 0;
  v427 = 0;
  v428 = 0;
  if ( !*((_BYTE *)this + 640) )
  {
    v2 = 3u % dword_27DABB0;
    v3 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
    if ( !v3 )
      goto LABEL_14;
    v4 = *(_DWORD *)v3;
    v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    while ( 1 )
    {
      v6 = v5 == 3;
      if ( v5 == 3 )
        v6 = *(_DWORD *)(v4 + 4) == 3;
      if ( v6 )
        break;
      v7 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 )
      {
        v5 = *(_DWORD *)(v7 + 12);
        v3 = v4;
        v4 = *(_DWORD *)v4;
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DABB0 == v2 )
          continue;
      }
    }
    v8 = v3 == 0;
    if ( v3 )
      v3 = *(_DWORD *)v3;
      v8 = v3 == 0;
    if ( v8 )
LABEL_14:
      v9 = operator new(0x10u);
      *v9 = 0;
      v9[1] = 3;
      v9[2] = &unk_28898CC;
      v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DABAC,
             v2,
             3u,
             (int)v9);
    AutoPlaceItem::AutoPlaceItem((int *)&v424, (int *)(v3 + 8), 0);
    v10 = v427;
    if ( v427 == v428 )
      std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::_M_emplace_back_aux<AutoPlaceItem>(
        (unsigned __int64 *)&v426,
        (int)&v424);
      v11 = v424;
    else
      *v427 = v424;
      v11 = (char *)&unk_28898CC;
      v424 = (char *)&unk_28898CC;
      *((_BYTE *)v10 + 4) = v425;
      v427 = v10 + 2;
    v12 = v11 - 12;
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v352 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v353 = __ldrex(v352);
        while ( __strex(v353 - 1, v352) );
      else
        v353 = (*v352)--;
      if ( v353 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    v13 = 0x20u % dword_27DABB0;
    v14 = *(_DWORD *)(dword_27DABAC + 4 * (0x20u % dword_27DABB0));
    if ( !v14 )
      goto LABEL_31;
    v15 = *(_DWORD *)v14;
    v16 = *(_DWORD *)(*(_DWORD *)v14 + 12);
      v17 = v16 == 32;
      if ( v16 == 32 )
        v17 = *(_DWORD *)(v15 + 4) == 32;
      if ( v17 )
      v18 = *(_DWORD *)v15;
      if ( *(_DWORD *)v15 )
        v16 = *(_DWORD *)(v18 + 12);
        v14 = v15;
        v15 = *(_DWORD *)v15;
        if ( *(_DWORD *)(v18 + 12) % (unsigned int)dword_27DABB0 == v13 )
    v19 = v14 == 0;
    if ( v14 )
      v14 = *(_DWORD *)v14;
      v19 = v14 == 0;
    if ( v19 )
LABEL_31:
      v20 = operator new(0x10u);
      *v20 = 0;
      v20[1] = 32;
      v20[2] = &unk_28898CC;
      v14 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DABAC,
              v13,
              0x20u,
              (int)v20);
    AutoPlaceItem::AutoPlaceItem((int *)&v422, (int *)(v14 + 8), 0);
    v21 = v427;
        (int)&v422);
      v22 = v422;
      *v427 = v422;
      v22 = (char *)&unk_28898CC;
      v422 = (char *)&unk_28898CC;
      *((_BYTE *)v21 + 4) = v423;
      v427 = v21 + 2;
    v23 = v22 - 12;
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v354 = (unsigned int *)(v22 - 4);
          v355 = __ldrex(v354);
        while ( __strex(v355 - 1, v354) );
        v355 = (*v354)--;
      if ( v355 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v23);
  }
  v24 = 0x1Au % dword_27DABB0;
  v25 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
  if ( !v25 )
    goto LABEL_48;
  v26 = *(_DWORD *)v25;
  v27 = *(_DWORD *)(*(_DWORD *)v25 + 12);
  while ( 1 )
    v28 = v27 == 26;
    if ( v27 == 26 )
      v28 = *(_DWORD *)(v26 + 4) == 26;
    if ( v28 )
      break;
    v29 = *(_DWORD *)v26;
    if ( *(_DWORD *)v26 )
      v27 = *(_DWORD *)(v29 + 12);
      v25 = v26;
      v26 = *(_DWORD *)v26;
      if ( *(_DWORD *)(v29 + 12) % (unsigned int)dword_27DABB0 == v24 )
        continue;
  v30 = v25 == 0;
  if ( v25 )
    v25 = *(_DWORD *)v25;
    v30 = v25 == 0;
  if ( v30 )
LABEL_48:
    v31 = operator new(0x10u);
    *v31 = 0;
    v31[1] = 26;
    v31[2] = &unk_28898CC;
    v25 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27DABAC,
            v24,
            0x1Au,
            (int)v31);
  AutoPlaceItem::AutoPlaceItem((int *)&v420, (int *)(v25 + 8), 0);
  v32 = v427;
  if ( v427 == v428 )
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::_M_emplace_back_aux<AutoPlaceItem>(
      (unsigned __int64 *)&v426,
      (int)&v420);
    v33 = v420;
  else
    *v427 = v420;
    v33 = (char *)&unk_28898CC;
    v420 = (char *)&unk_28898CC;
    *((_BYTE *)v32 + 4) = v421;
    v427 = v32 + 2;
  v34 = v33 - 12;
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  v35 = 0x18u % dword_27DABB0;
  v36 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
  if ( !v36 )
    goto LABEL_65;
  v37 = *(_DWORD *)v36;
  v38 = *(_DWORD *)(*(_DWORD *)v36 + 12);
    v39 = v38 == 24;
    if ( v38 == 24 )
      v39 = *(_DWORD *)(v37 + 4) == 24;
    if ( v39 )
    v40 = *(_DWORD *)v37;
    if ( *(_DWORD *)v37 )
      v38 = *(_DWORD *)(v40 + 12);
      v36 = v37;
      v37 = *(_DWORD *)v37;
      if ( *(_DWORD *)(v40 + 12) % (unsigned int)dword_27DABB0 == v35 )
  v41 = v36 == 0;
  if ( v36 )
    v36 = *(_DWORD *)v36;
    v41 = v36 == 0;
  if ( v41 )
LABEL_65:
    v42 = operator new(0x10u);
    *v42 = 0;
    v42[1] = 24;
    v42[2] = &unk_28898CC;
    v36 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v35,
            0x18u,
            (int)v42);
  v43 = (unsigned __int64 *)((char *)v1 + 600);
  v44 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (unsigned __int64 *)v1 + 75,
          (int **)(v36 + 8));
  std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v44, (unsigned __int64 *)&v426);
  v417 = 0;
  v418 = 0;
  v419 = 0;
  if ( !*((_BYTE *)v1 + 640) )
    v45 = 3u % dword_27DABB0;
    v46 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
    if ( !v46 )
      goto LABEL_83;
    v47 = *(_DWORD *)v46;
    v48 = *(_DWORD *)(*(_DWORD *)v46 + 12);
      v49 = v48 == 3;
      if ( v48 == 3 )
        v49 = *(_DWORD *)(v47 + 4) == 3;
      if ( v49 )
      v50 = *(_DWORD *)v47;
      if ( *(_DWORD *)v47 )
        v48 = *(_DWORD *)(v50 + 12);
        v46 = v47;
        v47 = *(_DWORD *)v47;
        if ( *(_DWORD *)(v50 + 12) % (unsigned int)dword_27DABB0 == v45 )
    v53 = v46 == 0;
    if ( v46 )
      v46 = *(_DWORD *)v46;
      v53 = v46 == 0;
    if ( v53 )
LABEL_83:
      v54 = operator new(0x10u);
      *v54 = 0;
      v54[1] = 3;
      v54[2] = &unk_28898CC;
      v46 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v45,
              3u,
              (int)v54);
    AutoPlaceItem::AutoPlaceItem((int *)&v415, (int *)(v46 + 8), 0);
    v55 = v418;
    if ( v418 == v419 )
        (unsigned __int64 *)&v417,
        (int)&v415);
      v56 = v415;
      *v418 = v415;
      v56 = (char *)&unk_28898CC;
      v415 = (char *)&unk_28898CC;
      *((_BYTE *)v55 + 4) = v416;
      v418 = v55 + 2;
    v57 = v56 - 12;
    if ( (int *)(v56 - 12) != &dword_28898C0 )
      v356 = (unsigned int *)(v56 - 4);
          v357 = __ldrex(v356);
        while ( __strex(v357 - 1, v356) );
        v357 = (*v356)--;
      if ( v357 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v57);
    v58 = 0x20u % dword_27DABB0;
    v59 = *(_DWORD *)(dword_27DABAC + 4 * (0x20u % dword_27DABB0));
    if ( !v59 )
      goto LABEL_100;
    v60 = *(_DWORD *)v59;
    v61 = *(_DWORD *)(*(_DWORD *)v59 + 12);
      v62 = v61 == 32;
      if ( v61 == 32 )
        v62 = *(_DWORD *)(v60 + 4) == 32;
      if ( v62 )
      v63 = *(_DWORD *)v60;
      if ( *(_DWORD *)v60 )
        v61 = *(_DWORD *)(v63 + 12);
        v59 = v60;
        v60 = *(_DWORD *)v60;
        if ( *(_DWORD *)(v63 + 12) % (unsigned int)dword_27DABB0 == v58 )
    v64 = v59 == 0;
    if ( v59 )
      v59 = *(_DWORD *)v59;
      v64 = v59 == 0;
    if ( v64 )
LABEL_100:
      v65 = operator new(0x10u);
      *v65 = 0;
      v65[1] = 32;
      v65[2] = &unk_28898CC;
      v59 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v58,
              (int)v65);
    AutoPlaceItem::AutoPlaceItem((int *)&v413, (int *)(v59 + 8), 0);
    v66 = v418;
        (int)&v413);
      v67 = v413;
      *v418 = v413;
      v67 = (char *)&unk_28898CC;
      v413 = (char *)&unk_28898CC;
      *((_BYTE *)v66 + 4) = v414;
      v418 = v66 + 2;
    v68 = v67 - 12;
    if ( (int *)(v67 - 12) != &dword_28898C0 )
      v358 = (unsigned int *)(v67 - 4);
          v359 = __ldrex(v358);
        while ( __strex(v359 - 1, v358) );
        v359 = (*v358)--;
      if ( v359 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v68);
  v69 = 0x18u % dword_27DABB0;
  v70 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
  if ( !v70 )
    goto LABEL_117;
  v71 = *(_DWORD *)v70;
  v72 = *(_DWORD *)(*(_DWORD *)v70 + 12);
    v73 = v72 == 24;
    if ( v72 == 24 )
      v73 = *(_DWORD *)(v71 + 4) == 24;
    if ( v73 )
    v74 = *(_DWORD *)v71;
    if ( *(_DWORD *)v71 )
      v72 = *(_DWORD *)(v74 + 12);
      v70 = v71;
      v71 = *(_DWORD *)v71;
      if ( *(_DWORD *)(v74 + 12) % (unsigned int)dword_27DABB0 == v69 )
  v75 = v70 == 0;
  if ( v70 )
    v70 = *(_DWORD *)v70;
    v75 = v70 == 0;
  if ( v75 )
LABEL_117:
    v76 = operator new(0x10u);
    *v76 = 0;
    v76[1] = 24;
    v76[2] = &unk_28898CC;
    v70 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v69,
            (int)v76);
  AutoPlaceItem::AutoPlaceItem((int *)&v411, (int *)(v70 + 8), 0);
  v77 = v418;
  if ( v418 == v419 )
      (unsigned __int64 *)&v417,
      (int)&v411);
    v78 = v411;
    *v418 = v411;
    v78 = (char *)&unk_28898CC;
    v411 = (char *)&unk_28898CC;
    *((_BYTE *)v77 + 4) = v412;
    v418 = v77 + 2;
  v79 = v78 - 12;
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v78 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v79);
  v80 = 0x1Au % dword_27DABB0;
  v81 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
  if ( !v81 )
    goto LABEL_134;
  v82 = *(_DWORD *)v81;
  v83 = *(_DWORD *)(*(_DWORD *)v81 + 12);
    v84 = v83 == 26;
    if ( v83 == 26 )
      v84 = *(_DWORD *)(v82 + 4) == 26;
    if ( v84 )
    v85 = *(_DWORD *)v82;
    if ( *(_DWORD *)v82 )
      v83 = *(_DWORD *)(v85 + 12);
      v81 = v82;
      v82 = *(_DWORD *)v82;
      if ( *(_DWORD *)(v85 + 12) % (unsigned int)dword_27DABB0 == v80 )
  v86 = v81 == 0;
  if ( v81 )
    v81 = *(_DWORD *)v81;
    v86 = v81 == 0;
  if ( v86 )
LABEL_134:
    v87 = operator new(0x10u);
    *v87 = 0;
    v87[1] = 26;
    v87[2] = &unk_28898CC;
    v81 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v80,
            (int)v87);
  v88 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)(v81 + 8));
  std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v88, (unsigned __int64 *)&v417);
  v89 = *((_BYTE *)v1 + 640);
    v408 = 0;
    v409 = 0;
    v410 = 0;
    v90 = 0x1Au % dword_27DABB0;
    v91 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
    if ( !v91 )
      goto LABEL_152;
    v92 = *(_DWORD *)v91;
    v93 = *(_DWORD *)(*(_DWORD *)v91 + 12);
      v94 = v93 == 26;
      if ( v93 == 26 )
        v94 = *(_DWORD *)(v92 + 4) == 26;
      if ( v94 )
      v95 = *(_DWORD *)v92;
      if ( *(_DWORD *)v92 )
        v93 = *(_DWORD *)(v95 + 12);
        v91 = v92;
        v92 = *(_DWORD *)v92;
        if ( *(_DWORD *)(v95 + 12) % (unsigned int)dword_27DABB0 == v90 )
    v98 = v91 == 0;
    if ( v91 )
      v91 = *(_DWORD *)v91;
      v98 = v91 == 0;
    if ( v98 )
LABEL_152:
      v99 = operator new(0x10u);
      *v99 = 0;
      v99[1] = 26;
      v99[2] = &unk_28898CC;
      v91 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v90,
              0x1Au,
              (int)v99);
    AutoPlaceItem::AutoPlaceItem((int *)&v406, (int *)(v91 + 8), 0);
    v100 = v409;
    if ( v409 == v410 )
        (unsigned __int64 *)&v408,
        (int)&v406);
      v101 = v406;
      *v409 = v406;
      v101 = (char *)&unk_28898CC;
      v406 = (char *)&unk_28898CC;
      *((_BYTE *)v100 + 4) = v407;
      v409 = v100 + 2;
    v102 = v101 - 12;
    if ( (int *)(v101 - 12) != &dword_28898C0 )
      v360 = (unsigned int *)(v101 - 4);
          v361 = __ldrex(v360);
        while ( __strex(v361 - 1, v360) );
        v361 = (*v360)--;
      if ( v361 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v102);
    v103 = 0x18u % dword_27DABB0;
    v104 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
    if ( !v104 )
      goto LABEL_169;
    v105 = *(_DWORD *)v104;
    v106 = *(_DWORD *)(*(_DWORD *)v104 + 12);
      v107 = v106 == 24;
      if ( v106 == 24 )
        v107 = *(_DWORD *)(v105 + 4) == 24;
      if ( v107 )
      v108 = *(_DWORD *)v105;
      if ( *(_DWORD *)v105 )
        v106 = *(_DWORD *)(v108 + 12);
        v104 = v105;
        v105 = *(_DWORD *)v105;
        if ( *(_DWORD *)(v108 + 12) % (unsigned int)dword_27DABB0 == v103 )
    v109 = v104 == 0;
    if ( v104 )
      v104 = *(_DWORD *)v104;
      v109 = v104 == 0;
    if ( v109 )
LABEL_169:
      v110 = operator new(0x10u);
      *v110 = 0;
      v110[1] = 24;
      v110[2] = &unk_28898CC;
      v104 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               (int)&dword_27DABAC,
               v103,
               0x18u,
               (int)v110);
    AutoPlaceItem::AutoPlaceItem((int *)&v404, (int *)(v104 + 8), 0);
    v111 = v409;
        (int)&v404);
      v112 = v404;
      *v409 = v404;
      v112 = (char *)&unk_28898CC;
      v404 = (char *)&unk_28898CC;
      *((_BYTE *)v111 + 4) = v405;
      v409 = v111 + 2;
    v113 = v112 - 12;
    if ( (int *)(v112 - 12) != &dword_28898C0 )
      v362 = (unsigned int *)(v112 - 4);
          v363 = __ldrex(v362);
        while ( __strex(v363 - 1, v362) );
        v363 = (*v362)--;
      if ( v363 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v113);
    v114 = 3u % dword_27DABB0;
    v115 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
    if ( !v115 )
      goto LABEL_186;
    v116 = *(_DWORD *)v115;
    v117 = *(_DWORD *)(*(_DWORD *)v115 + 12);
      v118 = v117 == 3;
      if ( v117 == 3 )
        v118 = *(_DWORD *)(v116 + 4) == 3;
      if ( v118 )
      v119 = *(_DWORD *)v116;
      if ( *(_DWORD *)v116 )
        v117 = *(_DWORD *)(v119 + 12);
        v115 = v116;
        v116 = *(_DWORD *)v116;
        if ( *(_DWORD *)(v119 + 12) % (unsigned int)dword_27DABB0 == v114 )
    v120 = v115 == 0;
    if ( v115 )
      v115 = *(_DWORD *)v115;
      v120 = v115 == 0;
    if ( v120 )
LABEL_186:
      v121 = operator new(0x10u);
      *v121 = 0;
      v121[1] = 3;
      v121[2] = &unk_28898CC;
      v115 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v114,
               3u,
               (int)v121);
    v122 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (unsigned __int64 *)v1 + 75,
             (int **)(v115 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v122, (unsigned __int64 *)&v408);
    v123 = v409;
    v124 = v408;
    if ( v408 != v409 )
        v127 = (int *)(*v124 - 12);
        if ( v127 != &dword_28898C0 )
        {
          v125 = (unsigned int *)(*v124 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v126 = __ldrex(v125);
            while ( __strex(v126 - 1, v125) );
          }
          else
            v126 = (*v125)--;
          if ( v126 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v127);
        }
        v124 += 2;
      while ( v124 != v123 );
      v124 = v408;
    if ( v124 )
      operator delete(v124);
    v89 = *((_BYTE *)v1 + 640);
  v401 = 0;
  v402 = 0;
  v403 = 0;
  if ( !v89 )
    v128 = 3u % dword_27DABB0;
    v129 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
    if ( !v129 )
      goto LABEL_216;
    v130 = *(_DWORD *)v129;
    v131 = *(_DWORD *)(*(_DWORD *)v129 + 12);
      v132 = v131 == 3;
      if ( v131 == 3 )
        v132 = *(_DWORD *)(v130 + 4) == 3;
      if ( v132 )
      v133 = *(_DWORD *)v130;
      if ( *(_DWORD *)v130 )
        v131 = *(_DWORD *)(v133 + 12);
        v129 = v130;
        v130 = *(_DWORD *)v130;
        if ( *(_DWORD *)(v133 + 12) % (unsigned int)dword_27DABB0 == v128 )
    v134 = v129 == 0;
    if ( v129 )
      v129 = *(_DWORD *)v129;
      v134 = v129 == 0;
    if ( v134 )
LABEL_216:
      v135 = operator new(0x10u);
      *v135 = 0;
      v135[1] = 3;
      v135[2] = &unk_28898CC;
      v129 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v128,
               (int)v135);
    AutoPlaceItem::AutoPlaceItem((int *)&v399, (int *)(v129 + 8), 0);
    v136 = v418;
        (int)&v399);
      v137 = v399;
      *v418 = v399;
      v137 = (char *)&unk_28898CC;
      v399 = (char *)&unk_28898CC;
      *((_BYTE *)v136 + 4) = v400;
      v418 = v136 + 2;
    v138 = v137 - 12;
    if ( (int *)(v137 - 12) != &dword_28898C0 )
      v364 = (unsigned int *)(v137 - 4);
          v365 = __ldrex(v364);
        while ( __strex(v365 - 1, v364) );
        v365 = (*v364)--;
      if ( v365 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v138);
  v139 = 0x1Au % dword_27DABB0;
  v140 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
  if ( !v140 )
    goto LABEL_233;
  v141 = *(_DWORD *)v140;
  v142 = *(_DWORD *)(*(_DWORD *)v140 + 12);
    v143 = v142 == 26;
    if ( v142 == 26 )
      v143 = *(_DWORD *)(v141 + 4) == 26;
    if ( v143 )
    v144 = *(_DWORD *)v141;
    if ( *(_DWORD *)v141 )
      v142 = *(_DWORD *)(v144 + 12);
      v140 = v141;
      v141 = *(_DWORD *)v141;
      if ( *(_DWORD *)(v144 + 12) % (unsigned int)dword_27DABB0 == v139 )
  v145 = v140 == 0;
  if ( v140 )
    v140 = *(_DWORD *)v140;
    v145 = v140 == 0;
  if ( v145 )
LABEL_233:
    v146 = operator new(0x10u);
    *v146 = 0;
    v146[1] = 26;
    v146[2] = &unk_28898CC;
    v140 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v139,
             0x1Au,
             (int)v146);
  AutoPlaceItem::AutoPlaceItem((int *)&v397, (int *)(v140 + 8), 0);
  v147 = v402;
  if ( v402 == v403 )
      (unsigned __int64 *)&v401,
      (int)&v397);
    v148 = v397;
    *v402 = v397;
    v148 = (char *)&unk_28898CC;
    v397 = (char *)&unk_28898CC;
    *((_BYTE *)v147 + 4) = v398;
    v402 = v147 + 2;
  v149 = v148 - 12;
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v176 = (unsigned int *)(v148 - 4);
        v177 = __ldrex(v176);
      while ( __strex(v177 - 1, v176) );
      v177 = (*v176)--;
    if ( v177 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v149);
  v150 = 0x18u % dword_27DABB0;
  v151 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
  if ( !v151 )
    goto LABEL_250;
  v152 = *(_DWORD *)v151;
  v153 = *(_DWORD *)(*(_DWORD *)v151 + 12);
    v154 = v153 == 24;
    if ( v153 == 24 )
      v154 = *(_DWORD *)(v152 + 4) == 24;
    if ( v154 )
    v155 = *(_DWORD *)v152;
    if ( *(_DWORD *)v152 )
      v153 = *(_DWORD *)(v155 + 12);
      v151 = v152;
      v152 = *(_DWORD *)v152;
      if ( *(_DWORD *)(v155 + 12) % (unsigned int)dword_27DABB0 == v150 )
  v156 = v151 == 0;
  if ( v151 )
    v151 = *(_DWORD *)v151;
    v156 = v151 == 0;
  if ( v156 )
LABEL_250:
    v157 = operator new(0x10u);
    *v157 = 0;
    v157[1] = 24;
    v157[2] = &unk_28898CC;
    v151 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v150,
             0x18u,
             (int)v157);
  AutoPlaceItem::AutoPlaceItem((int *)&v395, (int *)(v151 + 8), 0);
  v158 = v402;
      (int)&v395);
    v159 = v395;
    *v402 = v395;
    v159 = (char *)&unk_28898CC;
    v395 = (char *)&unk_28898CC;
    *((_BYTE *)v158 + 4) = v396;
    v402 = v158 + 2;
  v160 = v159 - 12;
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v178 = (unsigned int *)(v159 - 4);
        v179 = __ldrex(v178);
      while ( __strex(v179 - 1, v178) );
      v179 = (*v178)--;
    if ( v179 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v160);
  v161 = 0xAu % dword_27DABB0;
  v162 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
  if ( !v162 )
    goto LABEL_267;
  v163 = *(_DWORD *)v162;
  v164 = *(_DWORD *)(*(_DWORD *)v162 + 12);
    v165 = v164 == 10;
    if ( v164 == 10 )
      v165 = *(_DWORD *)(v163 + 4) == 10;
    if ( v165 )
    v166 = *(_DWORD *)v163;
    if ( *(_DWORD *)v163 )
      v164 = *(_DWORD *)(v166 + 12);
      v162 = v163;
      v163 = *(_DWORD *)v163;
      if ( *(_DWORD *)(v166 + 12) % (unsigned int)dword_27DABB0 == v161 )
  v167 = v162 == 0;
  if ( v162 )
    v162 = *(_DWORD *)v162;
    v167 = v162 == 0;
  if ( v167 )
LABEL_267:
    v168 = operator new(0x10u);
    *v168 = 0;
    v168[1] = 10;
    v168[2] = &unk_28898CC;
    v162 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v161,
             0xAu,
             (int)v168);
  v169 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (unsigned __int64 *)v1 + 75,
           (int **)(v162 + 8));
  std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v169, (unsigned __int64 *)&v401);
  v392 = 0;
  v393 = 0;
  v394 = 0;
    v170 = 3u % dword_27DABB0;
    v171 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
    if ( !v171 )
      goto LABEL_289;
    v172 = *(_DWORD *)v171;
    v173 = *(_DWORD *)(*(_DWORD *)v171 + 12);
      v174 = v173 == 3;
      if ( v173 == 3 )
        v174 = *(_DWORD *)(v172 + 4) == 3;
      if ( v174 )
      v175 = *(_DWORD *)v172;
      if ( *(_DWORD *)v172 )
        v173 = *(_DWORD *)(v175 + 12);
        v171 = v172;
        v172 = *(_DWORD *)v172;
        if ( *(_DWORD *)(v175 + 12) % (unsigned int)dword_27DABB0 == v170 )
    v180 = v171 == 0;
    if ( v171 )
      v171 = *(_DWORD *)v171;
      v180 = v171 == 0;
    if ( v180 )
LABEL_289:
      v181 = operator new(0x10u);
      *v181 = 0;
      v181[1] = 3;
      v181[2] = &unk_28898CC;
      v171 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v170,
               (int)v181);
    AutoPlaceItem::AutoPlaceItem((int *)&v390, (int *)(v171 + 8), 0);
    v182 = v418;
        (int)&v390);
      v183 = v390;
      *v418 = v390;
      v183 = (char *)&unk_28898CC;
      v390 = (char *)&unk_28898CC;
      *((_BYTE *)v182 + 4) = v391;
      v418 = v182 + 2;
    v184 = v183 - 12;
    if ( (int *)(v183 - 12) != &dword_28898C0 )
      v366 = (unsigned int *)(v183 - 4);
          v367 = __ldrex(v366);
        while ( __strex(v367 - 1, v366) );
        v367 = (*v366)--;
      if ( v367 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v184);
  v185 = 0x18u % dword_27DABB0;
  v186 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
  if ( !v186 )
    goto LABEL_306;
  v187 = *(_DWORD *)v186;
  v188 = *(_DWORD *)(*(_DWORD *)v186 + 12);
    v189 = v188 == 24;
    if ( v188 == 24 )
      v189 = *(_DWORD *)(v187 + 4) == 24;
    if ( v189 )
    v190 = *(_DWORD *)v187;
    if ( *(_DWORD *)v187 )
      v188 = *(_DWORD *)(v190 + 12);
      v186 = v187;
      v187 = *(_DWORD *)v187;
      if ( *(_DWORD *)(v190 + 12) % (unsigned int)dword_27DABB0 == v185 )
  v191 = v186 == 0;
  if ( v186 )
    v186 = *(_DWORD *)v186;
    v191 = v186 == 0;
  if ( v191 )
LABEL_306:
    v192 = operator new(0x10u);
    *v192 = 0;
    v192[1] = 24;
    v192[2] = &unk_28898CC;
    v186 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v185,
             (int)v192);
  AutoPlaceItem::AutoPlaceItem((int *)&v388, (int *)(v186 + 8), 0);
  v193 = v393;
  if ( v393 == v394 )
      (unsigned __int64 *)&v392,
      (int)&v388);
    v194 = v388;
    *v393 = v388;
    v194 = (char *)&unk_28898CC;
    v388 = (char *)&unk_28898CC;
    *((_BYTE *)v193 + 4) = v389;
    v393 = v193 + 2;
  v195 = v194 - 12;
  if ( (int *)(v194 - 12) != &dword_28898C0 )
    v289 = (unsigned int *)(v194 - 4);
        v290 = __ldrex(v289);
      while ( __strex(v290 - 1, v289) );
      v290 = (*v289)--;
    if ( v290 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v195);
  v196 = 0x1Au % dword_27DABB0;
  v197 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
  if ( !v197 )
    goto LABEL_323;
  v198 = *(_DWORD *)v197;
  v199 = *(_DWORD *)(*(_DWORD *)v197 + 12);
    v200 = v199 == 26;
    if ( v199 == 26 )
      v200 = *(_DWORD *)(v198 + 4) == 26;
    if ( v200 )
    v201 = *(_DWORD *)v198;
    if ( *(_DWORD *)v198 )
      v199 = *(_DWORD *)(v201 + 12);
      v197 = v198;
      v198 = *(_DWORD *)v198;
      if ( *(_DWORD *)(v201 + 12) % (unsigned int)dword_27DABB0 == v196 )
  v202 = v197 == 0;
  if ( v197 )
    v197 = *(_DWORD *)v197;
    v202 = v197 == 0;
  if ( v202 )
LABEL_323:
    v203 = operator new(0x10u);
    *v203 = 0;
    v203[1] = 26;
    v203[2] = &unk_28898CC;
    v197 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v196,
             (int)v203);
  AutoPlaceItem::AutoPlaceItem((int *)&v386, (int *)(v197 + 8), 0);
  v204 = v393;
      (int)&v386);
    v205 = v386;
    *v393 = v386;
    v205 = (char *)&unk_28898CC;
    v386 = (char *)&unk_28898CC;
    *((_BYTE *)v204 + 4) = v387;
    v393 = v204 + 2;
  v206 = v205 - 12;
  if ( (int *)(v205 - 12) != &dword_28898C0 )
    v291 = (unsigned int *)(v205 - 4);
        v292 = __ldrex(v291);
      while ( __strex(v292 - 1, v291) );
      v292 = (*v291)--;
    if ( v292 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v206);
  v207 = 0xBu % dword_27DABB0;
  v208 = *(_DWORD *)(dword_27DABAC + 4 * (0xBu % dword_27DABB0));
  if ( !v208 )
    goto LABEL_340;
  v209 = *(_DWORD *)v208;
  v210 = *(_DWORD *)(*(_DWORD *)v208 + 12);
    v211 = v210 == 11;
    if ( v210 == 11 )
      v211 = *(_DWORD *)(v209 + 4) == 11;
    if ( v211 )
    v212 = *(_DWORD *)v209;
    if ( *(_DWORD *)v209 )
      v210 = *(_DWORD *)(v212 + 12);
      v208 = v209;
      v209 = *(_DWORD *)v209;
      if ( *(_DWORD *)(v212 + 12) % (unsigned int)dword_27DABB0 == v207 )
  v213 = v208 == 0;
  if ( v208 )
    v208 = *(_DWORD *)v208;
    v213 = v208 == 0;
  if ( v213 )
LABEL_340:
    v214 = operator new(0x10u);
    *v214 = 0;
    v214[1] = 11;
    v214[2] = &unk_28898CC;
    v208 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v207,
             0xBu,
             (int)v214);
  v215 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v208 + 8));
  std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v215, (unsigned __int64 *)&v392);
  v383 = 0;
  v384 = 0;
  v385 = 0;
  v216 = 0x18u % dword_27DABB0;
  v217 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
  if ( !v217 )
    goto LABEL_353;
  v218 = *(_DWORD *)v217;
  v219 = *(_DWORD *)(*(_DWORD *)v217 + 12);
    v220 = v219 == 24;
    if ( v219 == 24 )
      v220 = *(_DWORD *)(v218 + 4) == 24;
    if ( v220 )
    v221 = *(_DWORD *)v218;
    if ( *(_DWORD *)v218 )
      v219 = *(_DWORD *)(v221 + 12);
      v217 = v218;
      v218 = *(_DWORD *)v218;
      if ( *(_DWORD *)(v221 + 12) % (unsigned int)dword_27DABB0 == v216 )
  v222 = v217 == 0;
  if ( v217 )
    v217 = *(_DWORD *)v217;
    v222 = v217 == 0;
  if ( v222 )
LABEL_353:
    v223 = operator new(0x10u);
    *v223 = 0;
    v223[1] = 24;
    v223[2] = &unk_28898CC;
    v217 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v216,
             (int)v223);
  AutoPlaceItem::AutoPlaceItem((int *)&v381, (int *)(v217 + 8), 0);
  v224 = v384;
  if ( v384 == v385 )
      (unsigned __int64 *)&v383,
      (int)&v381);
    v225 = v381;
    *v384 = v381;
    v225 = (char *)&unk_28898CC;
    v381 = (char *)&unk_28898CC;
    *((_BYTE *)v224 + 4) = v382;
    v384 = v224 + 2;
  v226 = v225 - 12;
  if ( (int *)(v225 - 12) != &dword_28898C0 )
    v293 = (unsigned int *)(v225 - 4);
        v294 = __ldrex(v293);
      while ( __strex(v294 - 1, v293) );
      v294 = (*v293)--;
    if ( v294 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v226);
  v227 = 0x1Au % dword_27DABB0;
  v228 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
  if ( !v228 )
    goto LABEL_370;
  v229 = *(_DWORD *)v228;
  v230 = *(_DWORD *)(*(_DWORD *)v228 + 12);
    v231 = v230 == 26;
    if ( v230 == 26 )
      v231 = *(_DWORD *)(v229 + 4) == 26;
    if ( v231 )
    v232 = *(_DWORD *)v229;
    if ( *(_DWORD *)v229 )
      v230 = *(_DWORD *)(v232 + 12);
      v228 = v229;
      v229 = *(_DWORD *)v229;
      if ( *(_DWORD *)(v232 + 12) % (unsigned int)dword_27DABB0 == v227 )
  v233 = v228 == 0;
  if ( v228 )
    v228 = *(_DWORD *)v228;
    v233 = v228 == 0;
  if ( v233 )
LABEL_370:
    v234 = operator new(0x10u);
    *v234 = 0;
    v234[1] = 26;
    v234[2] = &unk_28898CC;
    v228 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v227,
             (int)v234);
  AutoPlaceItem::AutoPlaceItem((int *)&v379, (int *)(v228 + 8), 0);
  v235 = v384;
      (int)&v379);
    v236 = v379;
    *v384 = v379;
    v236 = (char *)&unk_28898CC;
    v379 = (char *)&unk_28898CC;
    *((_BYTE *)v235 + 4) = v380;
    v384 = v235 + 2;
  v237 = v236 - 12;
  if ( (int *)(v236 - 12) != &dword_28898C0 )
    v295 = (unsigned int *)(v236 - 4);
        v296 = __ldrex(v295);
      while ( __strex(v296 - 1, v295) );
      v296 = (*v295)--;
    if ( v296 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v237);
  v238 = 0xCu % dword_27DABB0;
  v239 = *(_DWORD *)(dword_27DABAC + 4 * (0xCu % dword_27DABB0));
  if ( !v239 )
    goto LABEL_387;
  v240 = *(_DWORD *)v239;
  v241 = *(_DWORD *)(*(_DWORD *)v239 + 12);
    v242 = v241 == 12;
    if ( v241 == 12 )
      v242 = *(_DWORD *)(v240 + 4) == 12;
    if ( v242 )
    v243 = *(_DWORD *)v240;
    if ( *(_DWORD *)v240 )
      v241 = *(_DWORD *)(v243 + 12);
      v239 = v240;
      v240 = *(_DWORD *)v240;
      if ( *(_DWORD *)(v243 + 12) % (unsigned int)dword_27DABB0 == v238 )
  v244 = v239 == 0;
  if ( v239 )
    v239 = *(_DWORD *)v239;
    v244 = v239 == 0;
  if ( v244 )
LABEL_387:
    v245 = operator new(0x10u);
    *v245 = 0;
    v245[1] = 12;
    v245[2] = &unk_28898CC;
    v239 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v238,
             0xCu,
             (int)v245);
  v246 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v239 + 8));
  std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v246, (unsigned __int64 *)&v383);
  v247 = 0xDu % dword_27DABB0;
  v248 = *(_DWORD *)(dword_27DABAC + 4 * (0xDu % dword_27DABB0));
  if ( !v248 )
    goto LABEL_400;
  v249 = *(_DWORD *)v248;
  v250 = *(_DWORD *)(*(_DWORD *)v248 + 12);
    v251 = v250 == 13;
    if ( v250 == 13 )
      v251 = *(_DWORD *)(v249 + 4) == 13;
    if ( v251 )
    v252 = *(_DWORD *)v249;
    if ( *(_DWORD *)v249 )
      v250 = *(_DWORD *)(v252 + 12);
      v248 = v249;
      v249 = *(_DWORD *)v249;
      if ( *(_DWORD *)(v252 + 12) % (unsigned int)dword_27DABB0 == v247 )
  v253 = v248 == 0;
  if ( v248 )
    v248 = *(_DWORD *)v248;
    v253 = v248 == 0;
  if ( v253 )
LABEL_400:
    v254 = operator new(0x10u);
    *v254 = 0;
    v254[1] = 13;
    v254[2] = &unk_28898CC;
    v248 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v247,
             0xDu,
             (int)v254);
  v255 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v248 + 8));
  std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v255, (unsigned __int64 *)&v383);
  v256 = 0x11u % dword_27DABB0;
  v257 = *(_DWORD *)(dword_27DABAC + 4 * (0x11u % dword_27DABB0));
  if ( !v257 )
    goto LABEL_413;
  v258 = *(_DWORD *)v257;
  v259 = *(_DWORD *)(*(_DWORD *)v257 + 12);
    v260 = v259 == 17;
    if ( v259 == 17 )
      v260 = *(_DWORD *)(v258 + 4) == 17;
    if ( v260 )
    v261 = *(_DWORD *)v258;
    if ( *(_DWORD *)v258 )
      v259 = *(_DWORD *)(v261 + 12);
      v257 = v258;
      v258 = *(_DWORD *)v258;
      if ( *(_DWORD *)(v261 + 12) % (unsigned int)dword_27DABB0 == v256 )
  v262 = v257 == 0;
  if ( v257 )
    v257 = *(_DWORD *)v257;
    v262 = v257 == 0;
  if ( v262 )
LABEL_413:
    v263 = operator new(0x10u);
    *v263 = 0;
    v263[1] = 17;
    v263[2] = &unk_28898CC;
    v257 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v256,
             0x11u,
             (int)v263);
  v264 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v257 + 8));
  std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v264, (unsigned __int64 *)&v383);
  v265 = 0xEu % dword_27DABB0;
  v266 = *(_DWORD *)(dword_27DABAC + 4 * (0xEu % dword_27DABB0));
  if ( !v266 )
    goto LABEL_426;
  v267 = *(_DWORD *)v266;
  v268 = *(_DWORD *)(*(_DWORD *)v266 + 12);
    v269 = v268 == 14;
    if ( v268 == 14 )
      v269 = *(_DWORD *)(v267 + 4) == 14;
    if ( v269 )
    v270 = *(_DWORD *)v267;
    if ( *(_DWORD *)v267 )
      v268 = *(_DWORD *)(v270 + 12);
      v266 = v267;
      v267 = *(_DWORD *)v267;
      if ( *(_DWORD *)(v270 + 12) % (unsigned int)dword_27DABB0 == v265 )
  v271 = v266 == 0;
  if ( v266 )
    v266 = *(_DWORD *)v266;
    v271 = v266 == 0;
  if ( v271 )
LABEL_426:
    v272 = operator new(0x10u);
    *v272 = 0;
    v272[1] = 14;
    v272[2] = &unk_28898CC;
    v266 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v265,
             0xEu,
             (int)v272);
  v273 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v266 + 8));
  std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v273, (unsigned __int64 *)&v383);
  v274 = 0xFu % dword_27DABB0;
  v275 = *(_DWORD *)(dword_27DABAC + 4 * (0xFu % dword_27DABB0));
  if ( !v275 )
    goto LABEL_439;
  v276 = *(_DWORD *)v275;
  v277 = *(_DWORD *)(*(_DWORD *)v275 + 12);
    v278 = v277 == 15;
    if ( v277 == 15 )
      v278 = *(_DWORD *)(v276 + 4) == 15;
    if ( v278 )
    v279 = *(_DWORD *)v276;
    if ( *(_DWORD *)v276 )
      v277 = *(_DWORD *)(v279 + 12);
      v275 = v276;
      v276 = *(_DWORD *)v276;
      if ( *(_DWORD *)(v279 + 12) % (unsigned int)dword_27DABB0 == v274 )
  v280 = v275 == 0;
  if ( v275 )
    v275 = *(_DWORD *)v275;
    v280 = v275 == 0;
  if ( v280 )
LABEL_439:
    v281 = operator new(0x10u);
    *v281 = 0;
    v281[1] = 15;
    v281[2] = &unk_28898CC;
    v275 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v274,
             0xFu,
             (int)v281);
  v282 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v275 + 8));
  std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v282, (unsigned __int64 *)&v383);
    v376 = 0;
    v377 = 0;
    v378 = 0;
    v283 = 0x18u % dword_27DABB0;
    v284 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
    if ( !v284 )
      goto LABEL_469;
    v285 = *(_DWORD *)v284;
    v286 = *(_DWORD *)(*(_DWORD *)v284 + 12);
      v287 = v286 == 24;
      if ( v286 == 24 )
        v287 = *(_DWORD *)(v285 + 4) == 24;
      if ( v287 )
      v288 = *(_DWORD *)v285;
      if ( *(_DWORD *)v285 )
        v286 = *(_DWORD *)(v288 + 12);
        v284 = v285;
        v285 = *(_DWORD *)v285;
        if ( *(_DWORD *)(v288 + 12) % (unsigned int)dword_27DABB0 == v283 )
    v297 = v284 == 0;
    if ( v284 )
      v284 = *(_DWORD *)v284;
      v297 = v284 == 0;
    if ( v297 )
LABEL_469:
      v298 = operator new(0x10u);
      *v298 = 0;
      v298[1] = 24;
      v298[2] = &unk_28898CC;
      v284 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v283,
               (int)v298);
    AutoPlaceItem::AutoPlaceItem((int *)&v374, (int *)(v284 + 8), 0);
    v299 = v377;
    if ( v377 == v378 )
        (unsigned __int64 *)&v376,
        (int)&v374);
      v300 = v374;
      *v377 = v374;
      v300 = (char *)&unk_28898CC;
      v374 = (char *)&unk_28898CC;
      *((_BYTE *)v299 + 4) = v375;
      v377 = v299 + 2;
    v301 = v300 - 12;
    if ( (int *)(v300 - 12) != &dword_28898C0 )
      v368 = (unsigned int *)(v300 - 4);
          v369 = __ldrex(v368);
        while ( __strex(v369 - 1, v368) );
        v369 = (*v368)--;
      if ( v369 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v301);
    v302 = 0x1Au % dword_27DABB0;
    v303 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
    if ( !v303 )
      goto LABEL_486;
    v304 = *(_DWORD *)v303;
    v305 = *(_DWORD *)(*(_DWORD *)v303 + 12);
      v306 = v305 == 26;
      if ( v305 == 26 )
        v306 = *(_DWORD *)(v304 + 4) == 26;
      if ( v306 )
      v307 = *(_DWORD *)v304;
      if ( *(_DWORD *)v304 )
        v305 = *(_DWORD *)(v307 + 12);
        v303 = v304;
        v304 = *(_DWORD *)v304;
        if ( *(_DWORD *)(v307 + 12) % (unsigned int)dword_27DABB0 == v302 )
    v308 = v303 == 0;
    if ( v303 )
      v303 = *(_DWORD *)v303;
      v308 = v303 == 0;
    if ( v308 )
LABEL_486:
      v309 = operator new(0x10u);
      *v309 = 0;
      v309[1] = 26;
      v309[2] = &unk_28898CC;
      v303 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v302,
               0x1Au,
               (int)v309);
    AutoPlaceItem::AutoPlaceItem((int *)&v372, (int *)(v303 + 8), 0);
    v310 = v377;
        (int)&v372);
      v311 = v372;
      *v377 = v372;
      v311 = (char *)&unk_28898CC;
      v372 = (char *)&unk_28898CC;
      *((_BYTE *)v310 + 4) = v373;
      v377 = v310 + 2;
    v312 = v311 - 12;
    if ( (int *)(v311 - 12) != &dword_28898C0 )
      v370 = (unsigned int *)(v311 - 4);
          v371 = __ldrex(v370);
        while ( __strex(v371 - 1, v370) );
        v371 = (*v370)--;
      if ( v371 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v312);
    v313 = 0x20u % dword_27DABB0;
    v314 = *(_DWORD *)(dword_27DABAC + 4 * (0x20u % dword_27DABB0));
    if ( !v314 )
      goto LABEL_503;
    v315 = *(_DWORD *)v314;
    v316 = *(_DWORD *)(*(_DWORD *)v314 + 12);
      v317 = v316 == 32;
      if ( v316 == 32 )
        v317 = *(_DWORD *)(v315 + 4) == 32;
      if ( v317 )
      v318 = *(_DWORD *)v315;
      if ( *(_DWORD *)v315 )
        v316 = *(_DWORD *)(v318 + 12);
        v314 = v315;
        v315 = *(_DWORD *)v315;
        if ( *(_DWORD *)(v318 + 12) % (unsigned int)dword_27DABB0 == v313 )
    v319 = v314 == 0;
    if ( v314 )
      v314 = *(_DWORD *)v314;
      v319 = v314 == 0;
    if ( v319 )
LABEL_503:
      v320 = operator new(0x10u);
      *v320 = 0;
      v320[1] = 32;
      v320[2] = &unk_28898CC;
      v314 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v313,
               0x20u,
               (int)v320);
    v321 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v43,
             (int **)(v314 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v321, (unsigned __int64 *)&v376);
    v323 = v377;
    v322 = v376;
    if ( v376 != v377 )
        v326 = (int *)(*v322 - 12);
        if ( v326 != &dword_28898C0 )
          v324 = (unsigned int *)(*v322 - 4);
              v325 = __ldrex(v324);
            while ( __strex(v325 - 1, v324) );
            v325 = (*v324)--;
          if ( v325 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v326);
        v322 += 2;
      while ( v322 != v323 );
      v322 = v376;
    if ( v322 )
      operator delete(v322);
  v328 = v384;
  v327 = v383;
  if ( v383 != v384 )
    do
      v331 = (int *)(*v327 - 12);
      if ( v331 != &dword_28898C0 )
        v329 = (unsigned int *)(*v327 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v330 = __ldrex(v329);
          while ( __strex(v330 - 1, v329) );
        else
          v330 = (*v329)--;
        if ( v330 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v331);
      v327 += 2;
    while ( v327 != v328 );
    v327 = v383;
  if ( v327 )
    operator delete(v327);
  v333 = v393;
  v332 = v392;
  if ( v392 != v393 )
      v336 = (int *)(*v332 - 12);
      if ( v336 != &dword_28898C0 )
        v334 = (unsigned int *)(*v332 - 4);
            v335 = __ldrex(v334);
          while ( __strex(v335 - 1, v334) );
          v335 = (*v334)--;
        if ( v335 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v336);
      v332 += 2;
    while ( v332 != v333 );
    v332 = v392;
  if ( v332 )
    operator delete(v332);
  v338 = v402;
  v337 = v401;
  if ( v401 != v402 )
      v341 = (int *)(*v337 - 12);
      if ( v341 != &dword_28898C0 )
        v339 = (unsigned int *)(*v337 - 4);
            v340 = __ldrex(v339);
          while ( __strex(v340 - 1, v339) );
          v340 = (*v339)--;
        if ( v340 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v341);
      v337 += 2;
    while ( v337 != v338 );
    v337 = v401;
  if ( v337 )
    operator delete(v337);
  v343 = v418;
  v342 = v417;
  if ( v417 != v418 )
      v346 = (int *)(*v342 - 12);
      if ( v346 != &dword_28898C0 )
        v344 = (unsigned int *)(*v342 - 4);
            v345 = __ldrex(v344);
          while ( __strex(v345 - 1, v344) );
          v345 = (*v344)--;
        if ( v345 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v346);
      v342 += 2;
    while ( v342 != v343 );
    v342 = v417;
  if ( v342 )
    operator delete(v342);
  v348 = v427;
  v347 = v426;
  if ( v426 != v427 )
      v351 = (int *)(*v347 - 12);
      if ( v351 != &dword_28898C0 )
        v349 = (unsigned int *)(*v347 - 4);
            v350 = __ldrex(v349);
          while ( __strex(v350 - 1, v349) );
          v350 = (*v349)--;
        if ( v350 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v351);
      v347 += 2;
    while ( v347 != v348 );
    v347 = v426;
  if ( v347 )
    operator delete(v347);
}


int __fastcall CraftingScreenController::_setIsFiltering(CraftingScreenController *this, bool a2)
{
  return j_j_j__ZN34CraftingContainerManagerController14setIsFilteringEb(
           *((CraftingContainerManagerController **)this + 157),
           a2);
}


void __fastcall CraftingScreenController::_registerAutoPlaceOrder(CraftingScreenController *this)
{
  CraftingScreenController::_registerAutoPlaceOrder(this);
}


int __fastcall CraftingScreenController::_tryAutoCraftRecipe(int a1, int r1_0, __int64 a2, ContainerItemStack *a3, int a4)
{
  int v5; // r5@1
  ContainerItemStack *v6; // r4@1
  int v7; // r6@1
  int v8; // r0@1
  int v9; // r11@2
  int v10; // r9@2
  bool v11; // zf@3
  int v12; // r10@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  _BYTE v16[12]; // [sp+8h] [bp-30h]@1

  v5 = a1;
  *(_QWORD *)&v16[4] = *(__int64 *)((char *)&a2 - 4);
  v6 = (ContainerItemStack *)HIDWORD(a2);
  v7 = 0xAu % dword_27DABB0;
  *(_DWORD *)v16 = *(_DWORD *)(a1 + 628);
  v8 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == 10;
    if ( v10 == 10 )
      v11 = *(_DWORD *)(v9 + 4) == 10;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27DABB0 == v7 )
        continue;
    }
  }
  v13 = v8 == 0;
  if ( v8 )
    v8 = *(_DWORD *)v8;
    v13 = v8 == 0;
  if ( v13 )
LABEL_13:
    v14 = operator new(0x10u);
    *v14 = 0;
    v14[1] = 10;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27DABAC,
           v7,
           0xAu,
           (int)v14);
  std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
    (unsigned __int64 *)(v5 + 600),
    (int **)(v8 + 8));
  CraftingContainerManagerController::handleRecipeSelected(*(__int64 *)v16, *(int *)&v16[8], 0);
  CraftingContainerManagerController::craftItem(*(CraftingContainerManagerController **)(v5 + 628), v6, (int)a3);
  return ContainerItemStack::isEmpty(v6) ^ 1;
}


int __fastcall CraftingScreenController::_clearProgressiveTake(CraftingScreenController *this)
{
  CraftingScreenController *v1; // r4@1
  int result; // r0@1

  v1 = this;
  ContainerScreenController::_resetHeldButton(this);
  ContainerScreenController::_setPointerHeldEventsHandled(v1, 0);
  result = ProgressiveTakeButtonData::setAutoHandleAtMaxStackSize((CraftingScreenController *)((char *)v1 + 520), 1);
  *((_WORD *)v1 + 394) = 0;
  return result;
}


int __fastcall CraftingScreenController::onTerminate(CraftingScreenController *this)
{
  ScreenController *v1; // r4@1

  v1 = this;
  MinecraftScreenModel::fireEventInventoryClosed(*((MinecraftScreenModel **)this + 95));
  return j_j_j__ZN16ScreenController11onTerminateEv(v1);
}


signed int __fastcall CraftingScreenController::_moveItemsAndSendFlying(int a1, int a2, int *a3, int a4, int *a5, int a6)
{
  int v6; // r6@1
  int v7; // r9@1
  int *v8; // r10@1
  signed int v9; // r4@2
  int v10; // r7@3
  int v11; // r0@3
  int *v12; // r0@4
  void *v13; // r0@4
  void *v14; // r0@5
  unsigned int *v16; // r2@22
  signed int v17; // r1@24
  unsigned int *v18; // r2@26
  signed int v19; // r1@28
  int v20; // [sp+8h] [bp-50h]@4
  int v21; // [sp+Ch] [bp-4Ch]@4
  char v22; // [sp+10h] [bp-48h]@3
  int v23; // [sp+18h] [bp-40h]@12
  void *v24; // [sp+34h] [bp-24h]@10
  void *ptr; // [sp+44h] [bp-14h]@8
  char v26; // [sp+58h] [bp+0h]@1
  int v27; // [sp+60h] [bp+8h]@19
  void *v28; // [sp+7Ch] [bp+24h]@17
  void *v29; // [sp+8Ch] [bp+34h]@15

  v6 = a1;
  v7 = a4;
  v8 = a3;
  ContainerItemStack::ContainerItemStack((int)&v26);
  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v6 + 628) + 8))(*(_DWORD *)(v6 + 628));
  if ( ContainerItemStack::isEmpty((ContainerItemStack *)&v26) )
  {
    v9 = 0;
  }
  else
    v10 = ContainerItemStack::getCount((ContainerItemStack *)&v26);
    v11 = ContainerItemStack::getItemInstance((ContainerItemStack *)&v26);
    ItemInstance::ItemInstance((ItemInstance *)&v22, v11);
    (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v6 + 628) + 20))(*(_DWORD *)(v6 + 628));
    if ( ContainerItemStack::getCount((ContainerItemStack *)&v26) != v10 )
    {
      sub_119C854(&v21, v8);
      v12 = sub_119C854(&v20, a5);
      CraftingScreenController::_sendFlyingItem(v6, (ItemInstance *)&v22, (int)&v21, v7, (int)v12, a6);
      v13 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
      {
        v16 = (unsigned int *)(v20 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v13);
      }
      v14 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v21 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v14);
    }
    if ( !ContainerItemStack::isEmpty((ContainerItemStack *)&v26) )
      (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v6 + 628) + 20))(*(_DWORD *)(v6 + 628));
    if ( ptr )
      operator delete(ptr);
    if ( v24 )
      operator delete(v24);
    if ( v23 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v23 + 4))(v23);
    v9 = 1;
  if ( v29 )
    operator delete(v29);
  if ( v28 )
    operator delete(v28);
  if ( v27 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v27 + 4))(v27);
  return v9;
}


int __fastcall CraftingScreenController::_loadPlayerInventoryOptions(CraftingScreenController *this)
{
  CraftingScreenController *v1; // r4@1
  char *v2; // r5@1
  int v3; // r0@1
  int v4; // r1@3
  char v5; // r1@5
  int v6; // r6@8
  signed int v7; // r7@8
  int v8; // r0@18

  v1 = this;
  v2 = MinecraftScreenModel::getPlayerInventoryOptions(*((MinecraftScreenModel **)this + 106));
  v3 = *((_BYTE *)v1 + 656);
  if ( *((_BYTE *)v1 + 656) )
    *((_WORD *)v1 + 494) = 257;
  v4 = *((_DWORD *)v1 + 165);
  if ( v4 == 1 )
  {
    *((_BYTE *)v1 + 988) = v2[14];
    v5 = v2[13];
  }
  else
    if ( v4 )
      goto LABEL_8;
    *((_BYTE *)v1 + 988) = v2[13];
    v5 = v2[14];
  *((_BYTE *)v1 + 989) = v5;
LABEL_8:
  *((_BYTE *)v1 + 657) = v2[12];
  v6 = *(_QWORD *)(v2 + 4) >> 32;
  v7 = *(_QWORD *)(v2 + 4);
  if ( v3 )
    if ( MinecraftScreenController::getInputMode(v1) != 3
      || MinecraftScreenModel::isCreative(*((MinecraftScreenModel **)v1 + 106)) )
    {
      *((_DWORD *)v1 + 192) = v7;
      if ( *((_DWORD *)v1 + 165) == 1 )
        *((_DWORD *)v1 + 193) = 2;
      else
        *((_DWORD *)v1 + 193) = v6;
    }
    else
      v8 = *((_DWORD *)v1 + 165);
      if ( v8 == 1 )
      {
        *((_QWORD *)v1 + 96) = 8589934597LL;
      }
      else if ( !v8 )
        *((_QWORD *)v1 + 96) = 12884901894LL;
    if ( v7 == 6 )
      v7 = 5;
    *((_DWORD *)v1 + 192) = v7;
    *((_DWORD *)v1 + 193) = v6;
  return j_j_j__ZN34CraftingContainerManagerController15setSearchStringERKSs(*((_DWORD *)v1 + 157), (int *)v2);
}


FlyingItemCommand *__fastcall CraftingScreenController::_sendFlyingItem(int a1, ItemInstance *this, int a3, int a4, int a5, int a6)
{
  ItemInstance *v6; // r11@1
  int v7; // r8@1
  int v8; // r6@1 OVERLAPPED
  const void **v9; // r9@1
  FlyingItemCommand *result; // r0@1
  size_t v11; // r2@2
  bool v12; // zf@3
  int v13; // r5@6 OVERLAPPED
  unsigned int v14; // r1@7
  unsigned int *v15; // r0@7
  unsigned int v16; // r2@10
  unsigned int v17; // r3@11
  signed int v18; // r1@12
  ContainerManagerModel *v19; // r4@16
  unsigned int *v20; // r2@19
  unsigned int v21; // r1@21
  Player *v22; // r0@27
  PlayerInventoryProxy *v23; // r0@27
  FillingContainer *v24; // r0@27
  int v25; // r10@27
  int v26; // r0@27
  int v27; // r4@28
  int v28; // r7@28
  bool v29; // zf@29
  int v30; // r6@32
  bool v31; // zf@35
  _DWORD *v32; // r0@39
  _DWORD *v33; // r1@40
  size_t v34; // r2@40
  int v35; // r10@43
  int v36; // r0@43
  int v37; // r6@44
  int v38; // r5@44
  bool v39; // zf@45
  int v40; // r7@48
  int v41; // r10@51
  int v42; // r0@51
  int v43; // r5@52
  int v44; // r7@52
  bool v45; // zf@53
  int v46; // r6@56
  bool v47; // zf@59
  _DWORD *v48; // r0@63
  bool v49; // zf@65
  _DWORD *v50; // r0@69
  int v51; // r10@71
  int v52; // r0@71
  int v53; // r4@72
  int v54; // r7@72
  bool v55; // zf@73
  int v56; // r6@76
  bool v57; // zf@79
  _DWORD *v58; // r0@83
  _DWORD *v59; // r1@84
  size_t v60; // r2@84
  int v61; // r10@87
  int v62; // r0@87
  int v63; // r5@88
  int v64; // r7@88
  bool v65; // zf@89
  int v66; // r6@92
  int v67; // r10@95
  int v68; // r0@95
  int v69; // r5@96
  int v70; // r7@96
  bool v71; // zf@97
  int v72; // r6@100
  bool v73; // zf@103
  _DWORD *v74; // r0@107
  bool v75; // zf@109
  _DWORD *v76; // r0@113
  bool v77; // zf@115
  int v78; // r10@118
  int v79; // r0@118
  int v80; // r4@119
  int v81; // r7@119
  bool v82; // zf@120
  int v83; // r6@123
  bool v84; // zf@126
  _DWORD *v85; // r0@130
  _DWORD *v86; // r1@131
  size_t v87; // r2@131
  int v88; // r10@133
  int v89; // r0@133
  int v90; // r4@134
  int v91; // r7@134
  bool v92; // zf@135
  int v93; // r6@138
  int v94; // r6@141 OVERLAPPED
  int v95; // r5@141 OVERLAPPED
  bool v96; // zf@142
  _DWORD *v97; // r0@146
  const void *v98; // r1@147
  size_t v99; // r2@147
  void *v100; // r0@152
  void *v101; // r0@153
  unsigned int *v102; // r2@154
  signed int v103; // r1@156
  unsigned int *v104; // r1@162
  unsigned int *v105; // r4@168
  unsigned int *v106; // r2@176
  signed int v107; // r1@178
  int v108; // [sp+0h] [bp-78h]@27
  _BYTE v109[12]; // [sp+4h] [bp-74h]@16
  int v110; // [sp+10h] [bp-68h]@153
  int v111; // [sp+14h] [bp-64h]@152
  char v112; // [sp+18h] [bp-60h]@151
  void *v113; // [sp+28h] [bp-50h]@151
  int v114; // [sp+2Ch] [bp-4Ch]@151
  void *v115; // [sp+30h] [bp-48h]@151
  int v116; // [sp+34h] [bp-44h]@151
  int v117; // [sp+38h] [bp-40h]@151
  int v118; // [sp+3Ch] [bp-3Ch]@151
  void *v119; // [sp+40h] [bp-38h]@151
  void *v120; // [sp+44h] [bp-34h]@151
  ContainerManagerModel *v121; // [sp+48h] [bp-30h]@6
  int v122; // [sp+4Ch] [bp-2Ch]@6

  v6 = this;
  v7 = a1;
  v8 = a4;
  v9 = (const void **)a3;
  result = (FlyingItemCommand *)ItemInstance::isNull(this);
  if ( !result )
  {
    v11 = *((_DWORD *)*v9 - 3);
    if ( v11 != *(_DWORD *)(*(_DWORD *)a5 - 12) )
      goto LABEL_190;
    result = (FlyingItemCommand *)memcmp(*v9, *(const void **)a5, v11);
    v12 = v8 == a6;
    if ( v8 == a6 )
      v12 = result == 0;
    if ( !v12 )
    {
LABEL_190:
      result = (FlyingItemCommand *)ContainerManagerController::getContainerManagerModel(
                                      (ContainerManagerController *)&v121,
                                      *(_DWORD *)(v7 + 628));
      v13 = v122;
      if ( v122 )
      {
        v14 = *(_DWORD *)(v122 + 4);
        v15 = (unsigned int *)(v122 + 4);
        do
        {
          while ( 1 )
          {
            if ( !v14 )
            {
              v18 = 1;
              v13 = 0;
              goto LABEL_16;
            }
            __dmb();
            v16 = __ldrex(v15);
            if ( v16 == v14 )
              break;
            __clrex();
            v14 = v16;
          }
          v17 = __strex(v14 + 1, v15);
          v14 = v16;
        }
        while ( v17 );
        __dmb();
        v18 = 0;
        if ( !*v15 )
          v18 = 1;
LABEL_16:
        *(_DWORD *)&v109[8] = a6;
        result = (FlyingItemCommand *)v122;
        v19 = v121;
        if ( v18 )
          v19 = 0;
        if ( v122 )
          v20 = (unsigned int *)(v122 + 8);
          if ( &pthread_create )
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
          else
            v21 = (*v20)--;
          if ( v21 == 1 )
            result = (FlyingItemCommand *)(*(int (**)(void))(*(_DWORD *)result + 12))();
        if ( !v19 )
          goto LABEL_161;
        *(_QWORD *)v109 = *(_QWORD *)(&v8 - 1);
        v22 = (Player *)ContainerManagerModel::getPlayer(v19);
        v23 = (PlayerInventoryProxy *)Player::getSupplies(v22);
        v24 = (FillingContainer *)PlayerInventoryProxy::_getInventoryContainer(v23);
        v108 = FillingContainer::getLinkedSlotsCount(v24);
        v25 = 9u % dword_27DABB0;
        v26 = *(_DWORD *)(dword_27DABAC + 4 * (9u % dword_27DABB0));
        if ( !v26 )
          goto LABEL_39;
        v27 = *(_DWORD *)v26;
        v28 = *(_DWORD *)(*(_DWORD *)v26 + 12);
        while ( 1 )
          v29 = v28 == 9;
          if ( v28 == 9 )
            v29 = *(_DWORD *)(v27 + 4) == 9;
          if ( v29 )
            break;
          v30 = *(_DWORD *)v27;
          if ( *(_DWORD *)v27 )
            v28 = *(_DWORD *)(v30 + 12);
            v26 = v27;
            v27 = *(_DWORD *)v27;
            if ( *(_DWORD *)(v30 + 12) % (unsigned int)dword_27DABB0 == v25 )
              continue;
        v31 = v26 == 0;
        if ( v26 )
          v26 = *(_DWORD *)v26;
          v31 = v26 == 0;
        if ( v31 )
LABEL_39:
          v32 = operator new(0x10u);
          *v32 = 0;
          v32[1] = 9;
          v32[2] = &unk_28898CC;
          v26 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27DABAC,
                  v25,
                  9u,
                  (int)v32);
        v33 = *(_DWORD **)(v26 + 8);
        v34 = *((_DWORD *)*v9 - 3);
        if ( v34 == *(v33 - 3) && !memcmp(*v9, v33, v34) )
          if ( v108 <= *(_DWORD *)&v109[4] )
            v41 = 0x1Au % dword_27DABB0;
            v42 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
            if ( !v42 )
              goto LABEL_69;
            v43 = *(_DWORD *)v42;
            v44 = *(_DWORD *)(*(_DWORD *)v42 + 12);
            while ( 1 )
              v45 = v44 == 26;
              if ( v44 == 26 )
                v45 = *(_DWORD *)(v43 + 4) == 26;
              if ( v45 )
                break;
              v46 = *(_DWORD *)v43;
              if ( *(_DWORD *)v43 )
              {
                v44 = *(_DWORD *)(v46 + 12);
                v42 = v43;
                v43 = *(_DWORD *)v43;
                if ( *(_DWORD *)(v46 + 12) % (unsigned int)dword_27DABB0 == v41 )
                  continue;
              }
            v49 = v42 == 0;
            if ( v42 )
              v42 = *(_DWORD *)v42;
              v49 = v42 == 0;
            if ( v49 )
LABEL_69:
              v50 = operator new(0x10u);
              *v50 = 0;
              v50[1] = 26;
              v50[2] = &unk_28898CC;
              v42 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                      (int)&dword_27DABAC,
                      v41,
                      0x1Au,
                      (int)v50);
            EntityInteraction::setInteractText((int *)v9, (int *)(v42 + 8));
            *(_DWORD *)&v109[4] -= v108;
            v35 = 0x18u % dword_27DABB0;
            v36 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
            if ( !v36 )
              goto LABEL_63;
            v37 = *(_DWORD *)v36;
            v38 = *(_DWORD *)(*(_DWORD *)v36 + 12);
              v39 = v38 == 24;
              if ( v38 == 24 )
                v39 = *(_DWORD *)(v37 + 4) == 24;
              if ( v39 )
              v40 = *(_DWORD *)v37;
              if ( *(_DWORD *)v37 )
                v38 = *(_DWORD *)(v40 + 12);
                v36 = v37;
                v37 = *(_DWORD *)v37;
                if ( *(_DWORD *)(v40 + 12) % (unsigned int)dword_27DABB0 == v35 )
            v47 = v36 == 0;
            if ( v36 )
              v36 = *(_DWORD *)v36;
              v47 = v36 == 0;
            if ( v47 )
LABEL_63:
              v48 = operator new(0x10u);
              *v48 = 0;
              v48[1] = 24;
              v48[2] = &unk_28898CC;
              v36 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                      v35,
                      0x18u,
                      (int)v48);
            EntityInteraction::setInteractText((int *)v9, (int *)(v36 + 8));
        v51 = 9u % dword_27DABB0;
        v52 = *(_DWORD *)(dword_27DABAC + 4 * (9u % dword_27DABB0));
        if ( !v52 )
          goto LABEL_83;
        v53 = *(_DWORD *)v52;
        v54 = *(_DWORD *)(*(_DWORD *)v52 + 12);
          v55 = v54 == 9;
          if ( v54 == 9 )
            v55 = *(_DWORD *)(v53 + 4) == 9;
          if ( v55 )
          v56 = *(_DWORD *)v53;
          if ( *(_DWORD *)v53 )
            v54 = *(_DWORD *)(v56 + 12);
            v52 = v53;
            v53 = *(_DWORD *)v53;
            if ( *(_DWORD *)(v56 + 12) % (unsigned int)dword_27DABB0 == v51 )
        v57 = v52 == 0;
        if ( v52 )
          v52 = *(_DWORD *)v52;
          v57 = v52 == 0;
        if ( v57 )
LABEL_83:
          v58 = operator new(0x10u);
          *v58 = 0;
          v58[1] = 9;
          v58[2] = &unk_28898CC;
          v52 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  v51,
                  (int)v58);
        v59 = *(_DWORD **)(v52 + 8);
        v60 = *(_DWORD *)(*(_DWORD *)a5 - 12);
        if ( v60 == *(v59 - 3) && !memcmp(*(const void **)a5, v59, v60) )
          if ( v108 <= a6 )
            v67 = 0x1Au % dword_27DABB0;
            v68 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
            if ( !v68 )
              goto LABEL_113;
            v69 = *(_DWORD *)v68;
            v70 = *(_DWORD *)(*(_DWORD *)v68 + 12);
              v71 = v70 == 26;
              if ( v70 == 26 )
                v71 = *(_DWORD *)(v69 + 4) == 26;
              if ( v71 )
              v72 = *(_DWORD *)v69;
              if ( *(_DWORD *)v69 )
                v70 = *(_DWORD *)(v72 + 12);
                v68 = v69;
                v69 = *(_DWORD *)v69;
                if ( *(_DWORD *)(v72 + 12) % (unsigned int)dword_27DABB0 == v67 )
            v75 = v68 == 0;
            if ( v68 )
              v68 = *(_DWORD *)v68;
              v75 = v68 == 0;
            if ( v75 )
LABEL_113:
              v76 = operator new(0x10u);
              *v76 = 0;
              v76[1] = 26;
              v76[2] = &unk_28898CC;
              v68 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                      v67,
                      (int)v76);
            EntityInteraction::setInteractText((int *)a5, (int *)(v68 + 8));
            *(_DWORD *)&v109[8] = a6 - v108;
            v61 = 0x18u % dword_27DABB0;
            v62 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
            if ( !v62 )
              goto LABEL_107;
            v63 = *(_DWORD *)v62;
            v64 = *(_DWORD *)(*(_DWORD *)v62 + 12);
              v65 = v64 == 24;
              if ( v64 == 24 )
                v65 = *(_DWORD *)(v63 + 4) == 24;
              if ( v65 )
              v66 = *(_DWORD *)v63;
              if ( *(_DWORD *)v63 )
                v64 = *(_DWORD *)(v66 + 12);
                v62 = v63;
                v63 = *(_DWORD *)v63;
                if ( *(_DWORD *)(v66 + 12) % (unsigned int)dword_27DABB0 == v61 )
            v73 = v62 == 0;
            if ( v62 )
              v62 = *(_DWORD *)v62;
              v73 = v62 == 0;
            if ( v73 )
LABEL_107:
              v74 = operator new(0x10u);
              *v74 = 0;
              v74[1] = 24;
              v74[2] = &unk_28898CC;
              v62 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                      v61,
                      (int)v74);
            EntityInteraction::setInteractText((int *)a5, (int *)(v62 + 8));
        v77 = *(_BYTE *)(v7 + 656) == 0;
        if ( *(_BYTE *)(v7 + 656) )
          v77 = *(_DWORD *)(v7 + 768) == 6;
        if ( !v77 )
          v78 = 0x1Au % dword_27DABB0;
          v79 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
          if ( !v79 )
            goto LABEL_130;
          v80 = *(_DWORD *)v79;
          v81 = *(_DWORD *)(*(_DWORD *)v79 + 12);
            v82 = v81 == 26;
            if ( v81 == 26 )
              v82 = *(_DWORD *)(v80 + 4) == 26;
            if ( v82 )
            v83 = *(_DWORD *)v80;
            if ( *(_DWORD *)v80 )
              v81 = *(_DWORD *)(v83 + 12);
              v79 = v80;
              v80 = *(_DWORD *)v80;
              if ( *(_DWORD *)(v83 + 12) % (unsigned int)dword_27DABB0 == v78 )
                continue;
          v84 = v79 == 0;
          if ( v79 )
            v79 = *(_DWORD *)v79;
            v84 = v79 == 0;
          if ( v84 )
LABEL_130:
            v85 = operator new(0x10u);
            *v85 = 0;
            v85[1] = 26;
            v85[2] = &unk_28898CC;
            v79 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                    (int)&dword_27DABAC,
                    v78,
                    0x1Au,
                    (int)v85);
          v86 = *(_DWORD **)(v79 + 8);
          v87 = *(_DWORD *)(*(_DWORD *)a5 - 12);
          if ( v87 == *(v86 - 3) && !memcmp(*(const void **)a5, v86, v87) )
            sub_119CAD8((void **)a5, "inventory_tab", (_BYTE *)0xD);
            v94 = 0;
            v95 = *(_DWORD *)&v109[4];
LABEL_151:
            v113 = &unk_28898CC;
            v115 = &unk_28898CC;
            v119 = &unk_28898CC;
            v120 = &unk_28898CC;
            v117 = ItemInstance::getIdAux(v6);
            ItemInstance::getColor((ItemInstance *)&v112, (int *)v6);
            v118 = Color::toARGB((Color *)&v112);
            EntityInteraction::setInteractText((int *)&v113, (int *)v9);
            v114 = v95;
            EntityInteraction::setInteractText((int *)&v115, (int *)a5);
            v116 = v94;
            if ( ItemInstance::getId(v6) == *(_WORD *)(Item::mBanner + 18) )
              BannerBlockEntity::getPatterns((BannerBlockEntity *)&v111, v6);
              xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                (int *)&v119,
                &v111);
              v100 = (void *)(v111 - 12);
              if ( (int *)(v111 - 12) != &dword_28898C0 )
                v106 = (unsigned int *)(v111 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v107 = __ldrex(v106);
                  while ( __strex(v107 - 1, v106) );
                }
                else
                  v107 = (*v106)--;
                if ( v107 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v100);
              BannerBlockEntity::getColors((BannerBlockEntity *)&v110, v6);
                (int *)&v120,
                &v110);
              v101 = (void *)(v110 - 12);
              if ( (int *)(v110 - 12) != &dword_28898C0 )
                v102 = (unsigned int *)(v110 - 4);
                    v103 = __ldrex(v102);
                  while ( __strex(v103 - 1, v102) );
                  v103 = (*v102)--;
                if ( v103 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v101);
            else
              EntityInteraction::setInteractText((int *)&v119, (int *)&Util::EMPTY_STRING);
              EntityInteraction::setInteractText((int *)&v120, (int *)&Util::EMPTY_STRING);
            if ( !*(_DWORD *)(v7 + 480) )
              sub_119C8E4();
            (*(void (__fastcall **)(int, void **))(v7 + 484))(v7 + 472, &v113);
            result = FlyingItemCommand::~FlyingItemCommand((FlyingItemCommand *)&v113);
            v13 = *(_DWORD *)v109;
LABEL_161:
            if ( v13 )
              v104 = (unsigned int *)(v13 + 4);
              if ( &pthread_create )
                __dmb();
                do
                  result = (FlyingItemCommand *)__ldrex(v104);
                while ( __strex((unsigned int)result - 1, v104) );
              else
                result = (FlyingItemCommand *)(*v104)--;
              if ( result == (FlyingItemCommand *)1 )
                v105 = (unsigned int *)(v13 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
                    result = (FlyingItemCommand *)__ldrex(v105);
                  while ( __strex((unsigned int)result - 1, v105) );
                  result = (FlyingItemCommand *)(*v105)--;
                if ( result == (FlyingItemCommand *)1 )
                  result = (FlyingItemCommand *)(*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
            return result;
          v88 = 0x1Au % dword_27DABB0;
          v89 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
          if ( !v89 )
            goto LABEL_146;
          v90 = *(_DWORD *)v89;
          v91 = *(_DWORD *)(*(_DWORD *)v89 + 12);
            v92 = v91 == 26;
            if ( v91 == 26 )
              v92 = *(_DWORD *)(v90 + 4) == 26;
            if ( v92 )
            v93 = *(_DWORD *)v90;
            if ( *(_DWORD *)v90 )
              v91 = *(_DWORD *)(v93 + 12);
              v89 = v90;
              v90 = *(_DWORD *)v90;
              if ( *(_DWORD *)(v93 + 12) % (unsigned int)dword_27DABB0 == v88 )
          v96 = v89 == 0;
          if ( v89 )
            v89 = *(_DWORD *)v89;
            v96 = v89 == 0;
          if ( v96 )
LABEL_146:
            v97 = operator new(0x10u);
            *v97 = 0;
            v97[1] = 26;
            v97[2] = &unk_28898CC;
            v89 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                    v88,
                    (int)v97);
          v98 = *(const void **)(v89 + 8);
          v99 = *((_DWORD *)*v9 - 3);
          if ( v99 == *((_DWORD *)v98 - 3) )
            *(_QWORD *)&v95 = *(_QWORD *)&v109[4];
            if ( !memcmp(*v9, v98, v99) )
              sub_119CAD8((void **)v9, "inventory_tab", (_BYTE *)0xD);
              v95 = 0;
            goto LABEL_151;
        *(_QWORD *)&v95 = *(_QWORD *)&v109[4];
        goto LABEL_151;
      }
    }
  }
  return result;
}


signed int __fastcall CraftingScreenController::_tryAutoCraftAndPlaceIntoContainer(int a1, int a2, __int64 a3, ContainerItemStack *a4, unsigned int a5, int a6)
{
  int v6; // r4@1
  ContainerItemStack *v7; // r5@1
  signed int v8; // r5@2
  int v10; // [sp+4h] [bp-14h]@0

  v6 = a1;
  v7 = (ContainerItemStack *)HIDWORD(a3);
  if ( CraftingScreenController::_tryAutoCraftRecipe(a1, a2, a3, a4, v10) == 1 )
  {
    CraftingContainerManagerController::setIsClearingInputGridOnChange(
      *(CraftingContainerManagerController **)(v6 + 628),
      0);
    v8 = CraftingScreenController::_tryAutoPlaceItemIntoContainer(v6, v7, a5, a6);
      1);
  }
  else
    v8 = 0;
  return v8;
}


signed int __fastcall CraftingScreenController::_refreshContainers(CraftingScreenController *this)
{
  int v1; // r2@1
  int v2; // r1@3
  signed int result; // r0@4

  v1 = *((_DWORD *)this + 246);
  if ( *((_BYTE *)this + 746) )
  {
    v1 |= 0x3Fu;
    *((_DWORD *)this + 246) = v1;
  }
  v2 = *((_DWORD *)this + 192);
  if ( (v1 & (1 << (v2 - 1))) >= 1 )
    CraftingScreenController::_refreshFilters((int)this, v2, 0);
    result = 1;
  else
    result = 0;
  return result;
}


void __fastcall CraftingScreenController::_registerCoalesceOrder(CraftingScreenController *this)
{
  CraftingScreenController *v1; // r9@1
  int v2; // r8@1
  int v3; // r0@1
  int v4; // r5@2
  int v5; // r7@2
  bool v6; // zf@3
  int v7; // r4@6
  bool v8; // zf@9
  int *v9; // r1@12
  _DWORD *v10; // r0@13
  int v11; // r8@16
  int v12; // r0@16
  int v13; // r5@17
  int v14; // r7@17
  bool v15; // zf@18
  int v16; // r4@21
  bool v17; // zf@24
  _DWORD *v18; // r0@28
  int *v19; // r1@29
  int v20; // r8@33
  int v21; // r0@33
  int v22; // r5@34
  int v23; // r7@34
  bool v24; // zf@35
  int v25; // r4@38
  bool v26; // zf@41
  _DWORD *v27; // r0@45
  int *v28; // r1@46
  int v29; // r8@49
  int v30; // r0@49
  int v31; // r5@50
  int v32; // r7@50
  bool v33; // zf@51
  int v34; // r4@54
  bool v35; // zf@57
  _DWORD *v36; // r0@61
  int *v37; // r1@62
  int v38; // r8@65
  int v39; // r0@65
  int v40; // r5@66
  int v41; // r7@66
  bool v42; // zf@67
  int v43; // r4@70
  bool v44; // zf@73
  _DWORD *v45; // r0@77
  unsigned __int64 *v46; // r8@78
  int v47; // r0@78
  int v48; // r10@78
  int v49; // r0@78
  int v50; // r6@79
  int v51; // r5@79
  bool v52; // zf@80
  int v53; // r4@83
  bool v54; // zf@86
  int *v55; // r1@89
  _DWORD *v56; // r0@90
  int v57; // r10@93
  int v58; // r0@93
  int v59; // r6@94
  int v60; // r5@94
  bool v61; // zf@95
  int v62; // r4@98
  bool v63; // zf@101
  _DWORD *v64; // r0@105
  int *v65; // r1@106
  int v66; // r10@110
  int v67; // r0@110
  int v68; // r6@111
  int v69; // r5@111
  bool v70; // zf@112
  int v71; // r4@115
  bool v72; // zf@118
  _DWORD *v73; // r0@122
  int *v74; // r1@123
  int v75; // r10@126
  int v76; // r0@126
  int v77; // r6@127
  int v78; // r5@127
  bool v79; // zf@128
  int v80; // r4@131
  bool v81; // zf@134
  _DWORD *v82; // r0@138
  int *v83; // r1@139
  int v84; // r10@142
  int v85; // r0@142
  int v86; // r6@143
  int v87; // r5@143
  bool v88; // zf@144
  int v89; // r4@147
  bool v90; // zf@150
  _DWORD *v91; // r0@154
  int v92; // r0@155
  int v93; // r10@156
  int v94; // r0@156
  int v95; // r6@157
  int v96; // r5@157
  bool v97; // zf@158
  int v98; // r4@161
  bool v99; // zf@164
  int *v100; // r1@167
  _DWORD *v101; // r0@168
  int v102; // r10@171
  int v103; // r0@171
  int v104; // r6@172
  int v105; // r5@172
  bool v106; // zf@173
  int v107; // r4@176
  bool v108; // zf@179
  _DWORD *v109; // r0@183
  int *v110; // r1@184
  int v111; // r10@187
  int v112; // r0@187
  int v113; // r6@188
  int v114; // r5@188
  bool v115; // zf@189
  int v116; // r4@192
  bool v117; // zf@195
  _DWORD *v118; // r0@199
  int *v119; // r1@200
  int v120; // r10@203
  int v121; // r0@203
  int v122; // r6@204
  int v123; // r5@204
  bool v124; // zf@205
  int v125; // r4@208
  bool v126; // zf@211
  _DWORD *v127; // r0@215
  int *v128; // r1@216
  int v129; // r10@219
  int v130; // r0@219
  int v131; // r6@220
  int v132; // r5@220
  bool v133; // zf@221
  int v134; // r4@224
  bool v135; // zf@227
  _DWORD *v136; // r0@231
  int v137; // r0@232
  int *v138; // r5@232
  int *v139; // r6@232
  unsigned int *v140; // r2@234
  signed int v141; // r1@236
  int *v142; // r0@242
  int v143; // r10@247
  int v144; // r0@247
  int v145; // r6@248
  int v146; // r5@248
  bool v147; // zf@249
  int v148; // r4@252
  bool v149; // zf@255
  int *v150; // r1@258
  _DWORD *v151; // r0@259
  int v152; // r10@262
  int v153; // r0@262
  int v154; // r6@263
  int v155; // r5@263
  bool v156; // zf@264
  int v157; // r4@267
  bool v158; // zf@270
  _DWORD *v159; // r0@274
  int *v160; // r1@275
  int v161; // r10@278
  int v162; // r0@278
  int v163; // r6@279
  int v164; // r5@279
  bool v165; // zf@280
  int v166; // r4@283
  bool v167; // zf@286
  _DWORD *v168; // r0@290
  int *v169; // r1@291
  int v170; // r10@295
  int v171; // r0@295
  int v172; // r6@296
  int v173; // r5@296
  bool v174; // zf@297
  int v175; // r4@300
  bool v176; // zf@303
  _DWORD *v177; // r0@307
  int *v178; // r1@308
  int v179; // r10@311
  int v180; // r0@311
  int v181; // r6@312
  int v182; // r5@312
  bool v183; // zf@313
  int v184; // r4@316
  bool v185; // zf@319
  _DWORD *v186; // r0@323
  int v187; // r0@324
  int v188; // r10@324
  int v189; // r0@324
  int v190; // r6@325
  int v191; // r5@325
  bool v192; // zf@326
  int v193; // r4@329
  bool v194; // zf@332
  int *v195; // r1@335
  _DWORD *v196; // r0@336
  int v197; // r10@339
  int v198; // r0@339
  int v199; // r6@340
  int v200; // r5@340
  bool v201; // zf@341
  int v202; // r4@344
  bool v203; // zf@347
  _DWORD *v204; // r0@351
  int *v205; // r1@352
  int v206; // r10@355
  int v207; // r0@355
  int v208; // r6@356
  int v209; // r5@356
  bool v210; // zf@357
  int v211; // r4@360
  bool v212; // zf@363
  _DWORD *v213; // r0@367
  int *v214; // r1@368
  int v215; // r9@372
  int v216; // r0@372
  int v217; // r4@373
  int v218; // r5@373
  bool v219; // zf@374
  int v220; // r7@377
  bool v221; // zf@380
  _DWORD *v222; // r0@384
  int *v223; // r1@385
  int v224; // r9@388
  int v225; // r0@388
  int v226; // r4@389
  int v227; // r5@389
  bool v228; // zf@390
  int v229; // r7@393
  bool v230; // zf@396
  _DWORD *v231; // r0@400
  int v232; // r0@401
  int v233; // r9@401
  int v234; // r0@401
  int v235; // r4@402
  int v236; // r5@402
  bool v237; // zf@403
  int v238; // r7@406
  bool v239; // zf@409
  int *v240; // r1@412
  _DWORD *v241; // r0@413
  int v242; // r9@416
  int v243; // r0@416
  int v244; // r4@417
  int v245; // r5@417
  bool v246; // zf@418
  int v247; // r7@421
  bool v248; // zf@424
  _DWORD *v249; // r0@428
  int v250; // r0@429
  int *v251; // r4@429
  int *v252; // r6@429
  unsigned int *v253; // r2@431
  signed int v254; // r1@433
  int *v255; // r0@439
  int *v256; // r4@444
  int *v257; // r6@444
  unsigned int *v258; // r2@446
  signed int v259; // r1@448
  int *v260; // r0@454
  int *v261; // r4@459
  int *v262; // r6@459
  unsigned int *v263; // r2@461
  signed int v264; // r1@463
  int *v265; // r0@469
  int *v266; // r4@474
  int *v267; // r6@474
  unsigned int *v268; // r2@476
  signed int v269; // r1@478
  int *v270; // r0@484
  int *v271; // r4@489
  int *v272; // r6@489
  unsigned int *v273; // r2@491
  signed int v274; // r1@493
  int *v275; // r0@499
  int *v276; // [sp+0h] [bp-70h]@401
  int *v277; // [sp+4h] [bp-6Ch]@401
  int *v278; // [sp+8h] [bp-68h]@401
  int *v279; // [sp+Ch] [bp-64h]@324
  int *v280; // [sp+10h] [bp-60h]@324
  int *v281; // [sp+14h] [bp-5Ch]@324
  int *v282; // [sp+18h] [bp-58h]@247
  int *v283; // [sp+1Ch] [bp-54h]@247
  int *v284; // [sp+20h] [bp-50h]@247
  int *v285; // [sp+24h] [bp-4Ch]@156
  int *v286; // [sp+28h] [bp-48h]@156
  int *v287; // [sp+2Ch] [bp-44h]@156
  int *v288; // [sp+30h] [bp-40h]@78
  int *v289; // [sp+34h] [bp-3Ch]@78
  int *v290; // [sp+38h] [bp-38h]@78
  int *v291; // [sp+3Ch] [bp-34h]@1
  int *v292; // [sp+40h] [bp-30h]@1
  int *v293; // [sp+44h] [bp-2Ch]@1

  v1 = this;
  v291 = 0;
  v292 = 0;
  v293 = 0;
  v2 = 0x18u % dword_27DABB0;
  v3 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
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
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DABB0 == v2 )
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
        (unsigned __int64 *)&v291,
        v9);
      goto LABEL_16;
  }
LABEL_13:
  v10 = operator new(0x10u);
  *v10 = 0;
  v10[1] = 24;
  v10[2] = &unk_28898CC;
  v9 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                 (int)&dword_27DABAC,
                 v2,
                 0x18u,
                 (int)v10)
             + 8);
  if ( v292 == v293 )
    goto LABEL_15;
  sub_119C854(v292, v9);
  ++v292;
LABEL_16:
  v11 = 0x1Au % dword_27DABB0;
  v12 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
  if ( !v12 )
    goto LABEL_28;
  v13 = *(_DWORD *)v12;
  v14 = *(_DWORD *)(*(_DWORD *)v12 + 12);
  while ( 1 )
    v15 = v14 == 26;
    if ( v14 == 26 )
      v15 = *(_DWORD *)(v13 + 4) == 26;
    if ( v15 )
      break;
    v16 = *(_DWORD *)v13;
    if ( *(_DWORD *)v13 )
      v14 = *(_DWORD *)(v16 + 12);
      v12 = v13;
      v13 = *(_DWORD *)v13;
      if ( *(_DWORD *)(v16 + 12) % (unsigned int)dword_27DABB0 == v11 )
        continue;
  v17 = v12 == 0;
  if ( v12 )
    v12 = *(_DWORD *)v12;
    v17 = v12 == 0;
  if ( v17 )
LABEL_28:
    v18 = operator new(0x10u);
    *v18 = 0;
    v18[1] = 26;
    v18[2] = &unk_28898CC;
    v12 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27DABAC,
            v11,
            0x1Au,
            (int)v18);
  v19 = (int *)(v12 + 8);
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)&v291,
      v19);
  else
    sub_119C854(v292, v19);
    ++v292;
  if ( !*((_BYTE *)v1 + 640) )
    v20 = 3u % dword_27DABB0;
    v21 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
    if ( !v21 )
      goto LABEL_45;
    v22 = *(_DWORD *)v21;
    v23 = *(_DWORD *)(*(_DWORD *)v21 + 12);
      v24 = v23 == 3;
      if ( v23 == 3 )
        v24 = *(_DWORD *)(v22 + 4) == 3;
      if ( v24 )
      v25 = *(_DWORD *)v22;
      if ( *(_DWORD *)v22 )
        v23 = *(_DWORD *)(v25 + 12);
        v21 = v22;
        v22 = *(_DWORD *)v22;
        if ( *(_DWORD *)(v25 + 12) % (unsigned int)dword_27DABB0 == v20 )
    v26 = v21 == 0;
    if ( v21 )
      v21 = *(_DWORD *)v21;
      v26 = v21 == 0;
    if ( v26 )
LABEL_45:
      v27 = operator new(0x10u);
      *v27 = 0;
      v27[1] = 3;
      v27[2] = &unk_28898CC;
      v21 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DABAC,
              v20,
              3u,
              (int)v27);
    v28 = (int *)(v21 + 8);
    if ( v292 == v293 )
        v28);
    else
      sub_119C854(v292, v28);
      ++v292;
  v29 = 0xAu % dword_27DABB0;
  v30 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
  if ( !v30 )
    goto LABEL_61;
  v31 = *(_DWORD *)v30;
  v32 = *(_DWORD *)(*(_DWORD *)v30 + 12);
    v33 = v32 == 10;
    if ( v32 == 10 )
      v33 = *(_DWORD *)(v31 + 4) == 10;
    if ( v33 )
    v34 = *(_DWORD *)v31;
    if ( *(_DWORD *)v31 )
      v32 = *(_DWORD *)(v34 + 12);
      v30 = v31;
      v31 = *(_DWORD *)v31;
      if ( *(_DWORD *)(v34 + 12) % (unsigned int)dword_27DABB0 == v29 )
  v35 = v30 == 0;
  if ( v30 )
    v30 = *(_DWORD *)v30;
    v35 = v30 == 0;
  if ( v35 )
LABEL_61:
    v36 = operator new(0x10u);
    *v36 = 0;
    v36[1] = 10;
    v36[2] = &unk_28898CC;
    v30 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v29,
            0xAu,
            (int)v36);
  v37 = (int *)(v30 + 8);
      v37);
    sub_119C854(v292, v37);
  v38 = 0x18u % dword_27DABB0;
  v39 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
  if ( !v39 )
    goto LABEL_77;
  v40 = *(_DWORD *)v39;
  v41 = *(_DWORD *)(*(_DWORD *)v39 + 12);
    v42 = v41 == 24;
    if ( v41 == 24 )
      v42 = *(_DWORD *)(v40 + 4) == 24;
    if ( v42 )
    v43 = *(_DWORD *)v40;
    if ( *(_DWORD *)v40 )
      v41 = *(_DWORD *)(v43 + 12);
      v39 = v40;
      v40 = *(_DWORD *)v40;
      if ( *(_DWORD *)(v43 + 12) % (unsigned int)dword_27DABB0 == v38 )
  v44 = v39 == 0;
  if ( v39 )
    v39 = *(_DWORD *)v39;
    v44 = v39 == 0;
  if ( v44 )
LABEL_77:
    v45 = operator new(0x10u);
    *v45 = 0;
    v45[1] = 24;
    v45[2] = &unk_28898CC;
    v39 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v38,
            0x18u,
            (int)v45);
  v46 = (unsigned __int64 *)((char *)v1 + 572);
  v47 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (unsigned __int64 *)((char *)v1 + 572),
          (int **)(v39 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v47, (unsigned __int64 *)&v291);
  v288 = 0;
  v289 = 0;
  v290 = 0;
  v48 = 0x1Au % dword_27DABB0;
  v49 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
  if ( v49 )
    v50 = *(_DWORD *)v49;
    v51 = *(_DWORD *)(*(_DWORD *)v49 + 12);
      v52 = v51 == 26;
      if ( v51 == 26 )
        v52 = *(_DWORD *)(v50 + 4) == 26;
      if ( v52 )
      v53 = *(_DWORD *)v50;
      if ( *(_DWORD *)v50 )
        v51 = *(_DWORD *)(v53 + 12);
        v49 = v50;
        v50 = *(_DWORD *)v50;
        if ( *(_DWORD *)(v53 + 12) % (unsigned int)dword_27DABB0 == v48 )
      goto LABEL_90;
    v54 = v49 == 0;
    if ( v49 )
      v49 = *(_DWORD *)v49;
      v54 = v49 == 0;
    if ( !v54 )
      v55 = (int *)(v49 + 8);
LABEL_92:
        (unsigned __int64 *)&v288,
        v55);
      goto LABEL_93;
LABEL_90:
  v56 = operator new(0x10u);
  *v56 = 0;
  v56[1] = 26;
  v56[2] = &unk_28898CC;
  v55 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27DABAC,
                  v48,
                  0x1Au,
                  (int)v56)
              + 8);
  if ( v289 == v290 )
    goto LABEL_92;
  sub_119C854(v289, v55);
  ++v289;
LABEL_93:
  v57 = 0x18u % dword_27DABB0;
  v58 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
  if ( !v58 )
    goto LABEL_105;
  v59 = *(_DWORD *)v58;
  v60 = *(_DWORD *)(*(_DWORD *)v58 + 12);
    v61 = v60 == 24;
    if ( v60 == 24 )
      v61 = *(_DWORD *)(v59 + 4) == 24;
    if ( v61 )
    v62 = *(_DWORD *)v59;
    if ( *(_DWORD *)v59 )
      v60 = *(_DWORD *)(v62 + 12);
      v58 = v59;
      v59 = *(_DWORD *)v59;
      if ( *(_DWORD *)(v62 + 12) % (unsigned int)dword_27DABB0 == v57 )
  v63 = v58 == 0;
  if ( v58 )
    v58 = *(_DWORD *)v58;
    v63 = v58 == 0;
  if ( v63 )
LABEL_105:
    v64 = operator new(0x10u);
    *v64 = 0;
    v64[1] = 24;
    v64[2] = &unk_28898CC;
    v58 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v57,
            (int)v64);
  v65 = (int *)(v58 + 8);
      (unsigned __int64 *)&v288,
      v65);
    sub_119C854(v289, v65);
    ++v289;
    v66 = 3u % dword_27DABB0;
    v67 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
    if ( !v67 )
      goto LABEL_122;
    v68 = *(_DWORD *)v67;
    v69 = *(_DWORD *)(*(_DWORD *)v67 + 12);
      v70 = v69 == 3;
      if ( v69 == 3 )
        v70 = *(_DWORD *)(v68 + 4) == 3;
      if ( v70 )
      v71 = *(_DWORD *)v68;
      if ( *(_DWORD *)v68 )
        v69 = *(_DWORD *)(v71 + 12);
        v67 = v68;
        v68 = *(_DWORD *)v68;
        if ( *(_DWORD *)(v71 + 12) % (unsigned int)dword_27DABB0 == v66 )
    v72 = v67 == 0;
    if ( v67 )
      v67 = *(_DWORD *)v67;
      v72 = v67 == 0;
    if ( v72 )
LABEL_122:
      v73 = operator new(0x10u);
      *v73 = 0;
      v73[1] = 3;
      v73[2] = &unk_28898CC;
      v67 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v66,
              (int)v73);
    v74 = (int *)(v67 + 8);
    if ( v289 == v290 )
        v74);
      sub_119C854(v289, v74);
      ++v289;
  v75 = 0xAu % dword_27DABB0;
  v76 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
  if ( !v76 )
    goto LABEL_138;
  v77 = *(_DWORD *)v76;
  v78 = *(_DWORD *)(*(_DWORD *)v76 + 12);
    v79 = v78 == 10;
    if ( v78 == 10 )
      v79 = *(_DWORD *)(v77 + 4) == 10;
    if ( v79 )
    v80 = *(_DWORD *)v77;
    if ( *(_DWORD *)v77 )
      v78 = *(_DWORD *)(v80 + 12);
      v76 = v77;
      v77 = *(_DWORD *)v77;
      if ( *(_DWORD *)(v80 + 12) % (unsigned int)dword_27DABB0 == v75 )
  v81 = v76 == 0;
  if ( v76 )
    v76 = *(_DWORD *)v76;
    v81 = v76 == 0;
  if ( v81 )
LABEL_138:
    v82 = operator new(0x10u);
    *v82 = 0;
    v82[1] = 10;
    v82[2] = &unk_28898CC;
    v76 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v75,
            (int)v82);
  v83 = (int *)(v76 + 8);
      v83);
    sub_119C854(v289, v83);
  v84 = 0x1Au % dword_27DABB0;
  v85 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
  if ( !v85 )
    goto LABEL_154;
  v86 = *(_DWORD *)v85;
  v87 = *(_DWORD *)(*(_DWORD *)v85 + 12);
    v88 = v87 == 26;
    if ( v87 == 26 )
      v88 = *(_DWORD *)(v86 + 4) == 26;
    if ( v88 )
    v89 = *(_DWORD *)v86;
    if ( *(_DWORD *)v86 )
      v87 = *(_DWORD *)(v89 + 12);
      v85 = v86;
      v86 = *(_DWORD *)v86;
      if ( *(_DWORD *)(v89 + 12) % (unsigned int)dword_27DABB0 == v84 )
  v90 = v85 == 0;
  if ( v85 )
    v85 = *(_DWORD *)v85;
    v90 = v85 == 0;
  if ( v90 )
LABEL_154:
    v91 = operator new(0x10u);
    *v91 = 0;
    v91[1] = 26;
    v91[2] = &unk_28898CC;
    v85 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v84,
            (int)v91);
  v92 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)(v85 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v92, (unsigned __int64 *)&v288);
    v285 = 0;
    v286 = 0;
    v287 = 0;
    v93 = 3u % dword_27DABB0;
    v94 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
    if ( !v94 )
      goto LABEL_168;
    v95 = *(_DWORD *)v94;
    v96 = *(_DWORD *)(*(_DWORD *)v94 + 12);
      v97 = v96 == 3;
      if ( v96 == 3 )
        v97 = *(_DWORD *)(v95 + 4) == 3;
      if ( v97 )
      v98 = *(_DWORD *)v95;
      if ( *(_DWORD *)v95 )
        v96 = *(_DWORD *)(v98 + 12);
        v94 = v95;
        v95 = *(_DWORD *)v95;
        if ( *(_DWORD *)(v98 + 12) % (unsigned int)dword_27DABB0 == v93 )
    v99 = v94 == 0;
    if ( v94 )
      v94 = *(_DWORD *)v94;
      v99 = v94 == 0;
    if ( v99 )
LABEL_168:
      v101 = operator new(0x10u);
      *v101 = 0;
      v101[1] = 3;
      v101[2] = &unk_28898CC;
      v100 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                       (int)&dword_27DABAC,
                       v93,
                       3u,
                       (int)v101)
                   + 8);
      if ( v286 != v287 )
        sub_119C854(v286, v100);
        ++v286;
        goto LABEL_171;
      v100 = (int *)(v94 + 8);
      (unsigned __int64 *)&v285,
      v100);
LABEL_171:
    v102 = 0x1Au % dword_27DABB0;
    v103 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
    if ( !v103 )
      goto LABEL_183;
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
        if ( *(_DWORD *)(v107 + 12) % (unsigned int)dword_27DABB0 == v102 )
    v108 = v103 == 0;
    if ( v103 )
      v103 = *(_DWORD *)v103;
      v108 = v103 == 0;
    if ( v108 )
LABEL_183:
      v109 = operator new(0x10u);
      *v109 = 0;
      v109[1] = 26;
      v109[2] = &unk_28898CC;
      v103 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               (int)&dword_27DABAC,
               v102,
               0x1Au,
               (int)v109);
    v110 = (int *)(v103 + 8);
    if ( v286 == v287 )
        (unsigned __int64 *)&v285,
        v110);
      sub_119C854(v286, v110);
      ++v286;
    v111 = 0x18u % dword_27DABB0;
    v112 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
    if ( !v112 )
      goto LABEL_199;
    v113 = *(_DWORD *)v112;
    v114 = *(_DWORD *)(*(_DWORD *)v112 + 12);
      v115 = v114 == 24;
      if ( v114 == 24 )
        v115 = *(_DWORD *)(v113 + 4) == 24;
      if ( v115 )
      v116 = *(_DWORD *)v113;
      if ( *(_DWORD *)v113 )
        v114 = *(_DWORD *)(v116 + 12);
        v112 = v113;
        v113 = *(_DWORD *)v113;
        if ( *(_DWORD *)(v116 + 12) % (unsigned int)dword_27DABB0 == v111 )
    v117 = v112 == 0;
    if ( v112 )
      v112 = *(_DWORD *)v112;
      v117 = v112 == 0;
    if ( v117 )
LABEL_199:
      v118 = operator new(0x10u);
      *v118 = 0;
      v118[1] = 24;
      v118[2] = &unk_28898CC;
      v112 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v111,
               0x18u,
               (int)v118);
    v119 = (int *)(v112 + 8);
        v119);
      sub_119C854(v286, v119);
    v120 = 0xAu % dword_27DABB0;
    v121 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
    if ( !v121 )
      goto LABEL_215;
    v122 = *(_DWORD *)v121;
    v123 = *(_DWORD *)(*(_DWORD *)v121 + 12);
      v124 = v123 == 10;
      if ( v123 == 10 )
        v124 = *(_DWORD *)(v122 + 4) == 10;
      if ( v124 )
      v125 = *(_DWORD *)v122;
      if ( *(_DWORD *)v122 )
        v123 = *(_DWORD *)(v125 + 12);
        v121 = v122;
        v122 = *(_DWORD *)v122;
        if ( *(_DWORD *)(v125 + 12) % (unsigned int)dword_27DABB0 == v120 )
    v126 = v121 == 0;
    if ( v121 )
      v121 = *(_DWORD *)v121;
      v126 = v121 == 0;
    if ( v126 )
LABEL_215:
      v127 = operator new(0x10u);
      *v127 = 0;
      v127[1] = 10;
      v127[2] = &unk_28898CC;
      v121 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v120,
               0xAu,
               (int)v127);
    v128 = (int *)(v121 + 8);
        v128);
      sub_119C854(v286, v128);
    v129 = 3u % dword_27DABB0;
    v130 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
    if ( !v130 )
      goto LABEL_231;
    v131 = *(_DWORD *)v130;
    v132 = *(_DWORD *)(*(_DWORD *)v130 + 12);
      v133 = v132 == 3;
      if ( v132 == 3 )
        v133 = *(_DWORD *)(v131 + 4) == 3;
      if ( v133 )
      v134 = *(_DWORD *)v131;
      if ( *(_DWORD *)v131 )
        v132 = *(_DWORD *)(v134 + 12);
        v130 = v131;
        v131 = *(_DWORD *)v131;
        if ( *(_DWORD *)(v134 + 12) % (unsigned int)dword_27DABB0 == v129 )
    v135 = v130 == 0;
    if ( v130 )
      v130 = *(_DWORD *)v130;
      v135 = v130 == 0;
    if ( v135 )
LABEL_231:
      v136 = operator new(0x10u);
      *v136 = 0;
      v136[1] = 3;
      v136[2] = &unk_28898CC;
      v130 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v129,
               3u,
               (int)v136);
    v137 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (unsigned __int64 *)((char *)v1 + 572),
             (int **)(v130 + 8));
    std::vector<std::string,std::allocator<std::string>>::operator=(v137, (unsigned __int64 *)&v285);
    v138 = v286;
    v139 = v285;
    if ( v285 != v286 )
      do
        v142 = (int *)(*v139 - 12);
        if ( v142 != &dword_28898C0 )
        {
          v140 = (unsigned int *)(*v139 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v141 = __ldrex(v140);
            while ( __strex(v141 - 1, v140) );
          }
          else
            v141 = (*v140)--;
          if ( v141 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v142);
        }
        ++v139;
      while ( v139 != v138 );
      v139 = v285;
    if ( v139 )
      operator delete(v139);
  v282 = 0;
  v283 = 0;
  v284 = 0;
  v143 = 0xAu % dword_27DABB0;
  v144 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
  if ( v144 )
    v145 = *(_DWORD *)v144;
    v146 = *(_DWORD *)(*(_DWORD *)v144 + 12);
      v147 = v146 == 10;
      if ( v146 == 10 )
        v147 = *(_DWORD *)(v145 + 4) == 10;
      if ( v147 )
      v148 = *(_DWORD *)v145;
      if ( *(_DWORD *)v145 )
        v146 = *(_DWORD *)(v148 + 12);
        v144 = v145;
        v145 = *(_DWORD *)v145;
        if ( *(_DWORD *)(v148 + 12) % (unsigned int)dword_27DABB0 == v143 )
      goto LABEL_259;
    v149 = v144 == 0;
    if ( v144 )
      v144 = *(_DWORD *)v144;
      v149 = v144 == 0;
    if ( !v149 )
      v150 = (int *)(v144 + 8);
LABEL_261:
        (unsigned __int64 *)&v282,
        v150);
      goto LABEL_262;
LABEL_259:
  v151 = operator new(0x10u);
  *v151 = 0;
  v151[1] = 10;
  v151[2] = &unk_28898CC;
  v150 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   (int)&dword_27DABAC,
                   v143,
                   0xAu,
                   (int)v151)
               + 8);
  if ( v283 == v284 )
    goto LABEL_261;
  sub_119C854(v283, v150);
  ++v283;
LABEL_262:
  v152 = 0x1Au % dword_27DABB0;
  v153 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
  if ( !v153 )
    goto LABEL_274;
  v154 = *(_DWORD *)v153;
  v155 = *(_DWORD *)(*(_DWORD *)v153 + 12);
    v156 = v155 == 26;
    if ( v155 == 26 )
      v156 = *(_DWORD *)(v154 + 4) == 26;
    if ( v156 )
    v157 = *(_DWORD *)v154;
    if ( *(_DWORD *)v154 )
      v155 = *(_DWORD *)(v157 + 12);
      v153 = v154;
      v154 = *(_DWORD *)v154;
      if ( *(_DWORD *)(v157 + 12) % (unsigned int)dword_27DABB0 == v152 )
  v158 = v153 == 0;
  if ( v153 )
    v153 = *(_DWORD *)v153;
    v158 = v153 == 0;
  if ( v158 )
LABEL_274:
    v159 = operator new(0x10u);
    *v159 = 0;
    v159[1] = 26;
    v159[2] = &unk_28898CC;
    v153 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DABAC,
             v152,
             0x1Au,
             (int)v159);
  v160 = (int *)(v153 + 8);
      (unsigned __int64 *)&v282,
      v160);
    sub_119C854(v283, v160);
    ++v283;
  v161 = 0x18u % dword_27DABB0;
  v162 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
  if ( !v162 )
    goto LABEL_290;
  v163 = *(_DWORD *)v162;
  v164 = *(_DWORD *)(*(_DWORD *)v162 + 12);
    v165 = v164 == 24;
    if ( v164 == 24 )
      v165 = *(_DWORD *)(v163 + 4) == 24;
    if ( v165 )
    v166 = *(_DWORD *)v163;
    if ( *(_DWORD *)v163 )
      v164 = *(_DWORD *)(v166 + 12);
      v162 = v163;
      v163 = *(_DWORD *)v163;
      if ( *(_DWORD *)(v166 + 12) % (unsigned int)dword_27DABB0 == v161 )
  v167 = v162 == 0;
  if ( v162 )
    v162 = *(_DWORD *)v162;
    v167 = v162 == 0;
  if ( v167 )
LABEL_290:
    v168 = operator new(0x10u);
    *v168 = 0;
    v168[1] = 24;
    v168[2] = &unk_28898CC;
    v162 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v161,
             0x18u,
             (int)v168);
  v169 = (int *)(v162 + 8);
      v169);
    sub_119C854(v283, v169);
    v170 = 3u % dword_27DABB0;
    v171 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
    if ( !v171 )
      goto LABEL_307;
    v172 = *(_DWORD *)v171;
    v173 = *(_DWORD *)(*(_DWORD *)v171 + 12);
      v174 = v173 == 3;
      if ( v173 == 3 )
        v174 = *(_DWORD *)(v172 + 4) == 3;
      if ( v174 )
      v175 = *(_DWORD *)v172;
      if ( *(_DWORD *)v172 )
        v173 = *(_DWORD *)(v175 + 12);
        v171 = v172;
        v172 = *(_DWORD *)v172;
        if ( *(_DWORD *)(v175 + 12) % (unsigned int)dword_27DABB0 == v170 )
    v176 = v171 == 0;
    if ( v171 )
      v171 = *(_DWORD *)v171;
      v176 = v171 == 0;
    if ( v176 )
LABEL_307:
      v177 = operator new(0x10u);
      *v177 = 0;
      v177[1] = 3;
      v177[2] = &unk_28898CC;
      v171 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v170,
               (int)v177);
    v178 = (int *)(v171 + 8);
    if ( v283 == v284 )
        v178);
      sub_119C854(v283, v178);
      ++v283;
  v179 = 0xAu % dword_27DABB0;
  v180 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
  if ( !v180 )
    goto LABEL_323;
  v181 = *(_DWORD *)v180;
  v182 = *(_DWORD *)(*(_DWORD *)v180 + 12);
    v183 = v182 == 10;
    if ( v182 == 10 )
      v183 = *(_DWORD *)(v181 + 4) == 10;
    if ( v183 )
    v184 = *(_DWORD *)v181;
    if ( *(_DWORD *)v181 )
      v182 = *(_DWORD *)(v184 + 12);
      v180 = v181;
      v181 = *(_DWORD *)v181;
      if ( *(_DWORD *)(v184 + 12) % (unsigned int)dword_27DABB0 == v179 )
  v185 = v180 == 0;
  if ( v180 )
    v180 = *(_DWORD *)v180;
    v185 = v180 == 0;
  if ( v185 )
LABEL_323:
    v186 = operator new(0x10u);
    *v186 = 0;
    v186[1] = 10;
    v186[2] = &unk_28898CC;
    v180 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v179,
             0xAu,
             (int)v186);
  v187 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (unsigned __int64 *)((char *)v1 + 572),
           (int **)(v180 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v187, (unsigned __int64 *)&v282);
  v279 = 0;
  v280 = 0;
  v281 = 0;
  v188 = 0xBu % dword_27DABB0;
  v189 = *(_DWORD *)(dword_27DABAC + 4 * (0xBu % dword_27DABB0));
  if ( v189 )
    v190 = *(_DWORD *)v189;
    v191 = *(_DWORD *)(*(_DWORD *)v189 + 12);
      v192 = v191 == 11;
      if ( v191 == 11 )
        v192 = *(_DWORD *)(v190 + 4) == 11;
      if ( v192 )
      v193 = *(_DWORD *)v190;
      if ( *(_DWORD *)v190 )
        v191 = *(_DWORD *)(v193 + 12);
        v189 = v190;
        v190 = *(_DWORD *)v190;
        if ( *(_DWORD *)(v193 + 12) % (unsigned int)dword_27DABB0 == v188 )
      goto LABEL_336;
    v194 = v189 == 0;
    if ( v189 )
      v189 = *(_DWORD *)v189;
      v194 = v189 == 0;
    if ( !v194 )
      v195 = (int *)(v189 + 8);
LABEL_338:
        (unsigned __int64 *)&v279,
        v195);
      goto LABEL_339;
LABEL_336:
  v196 = operator new(0x10u);
  *v196 = 0;
  v196[1] = 11;
  v196[2] = &unk_28898CC;
  v195 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   v188,
                   0xBu,
                   (int)v196)
  if ( v280 == v281 )
    goto LABEL_338;
  sub_119C854(v280, v195);
  ++v280;
LABEL_339:
  v197 = 0x1Au % dword_27DABB0;
  v198 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
  if ( !v198 )
    goto LABEL_351;
  v199 = *(_DWORD *)v198;
  v200 = *(_DWORD *)(*(_DWORD *)v198 + 12);
    v201 = v200 == 26;
    if ( v200 == 26 )
      v201 = *(_DWORD *)(v199 + 4) == 26;
    if ( v201 )
    v202 = *(_DWORD *)v199;
    if ( *(_DWORD *)v199 )
      v200 = *(_DWORD *)(v202 + 12);
      v198 = v199;
      v199 = *(_DWORD *)v199;
      if ( *(_DWORD *)(v202 + 12) % (unsigned int)dword_27DABB0 == v197 )
  v203 = v198 == 0;
  if ( v198 )
    v198 = *(_DWORD *)v198;
    v203 = v198 == 0;
  if ( v203 )
LABEL_351:
    v204 = operator new(0x10u);
    *v204 = 0;
    v204[1] = 26;
    v204[2] = &unk_28898CC;
    v198 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v197,
             (int)v204);
  v205 = (int *)(v198 + 8);
      (unsigned __int64 *)&v279,
      v205);
    sub_119C854(v280, v205);
    ++v280;
  v206 = 0x18u % dword_27DABB0;
  v207 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
  if ( !v207 )
    goto LABEL_367;
  v208 = *(_DWORD *)v207;
  v209 = *(_DWORD *)(*(_DWORD *)v207 + 12);
    v210 = v209 == 24;
    if ( v209 == 24 )
      v210 = *(_DWORD *)(v208 + 4) == 24;
    if ( v210 )
    v211 = *(_DWORD *)v208;
    if ( *(_DWORD *)v208 )
      v209 = *(_DWORD *)(v211 + 12);
      v207 = v208;
      v208 = *(_DWORD *)v208;
      if ( *(_DWORD *)(v211 + 12) % (unsigned int)dword_27DABB0 == v206 )
  v212 = v207 == 0;
  if ( v207 )
    v207 = *(_DWORD *)v207;
    v212 = v207 == 0;
  if ( v212 )
LABEL_367:
    v213 = operator new(0x10u);
    *v213 = 0;
    v213[1] = 24;
    v213[2] = &unk_28898CC;
    v207 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v206,
             (int)v213);
  v214 = (int *)(v207 + 8);
      v214);
    sub_119C854(v280, v214);
    v215 = 3u % dword_27DABB0;
    v216 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
    if ( !v216 )
      goto LABEL_384;
    v217 = *(_DWORD *)v216;
    v218 = *(_DWORD *)(*(_DWORD *)v216 + 12);
      v219 = v218 == 3;
      if ( v218 == 3 )
        v219 = *(_DWORD *)(v217 + 4) == 3;
      if ( v219 )
      v220 = *(_DWORD *)v217;
      if ( *(_DWORD *)v217 )
        v218 = *(_DWORD *)(v220 + 12);
        v216 = v217;
        v217 = *(_DWORD *)v217;
        if ( *(_DWORD *)(v220 + 12) % (unsigned int)dword_27DABB0 == v215 )
    v221 = v216 == 0;
    if ( v216 )
      v216 = *(_DWORD *)v216;
      v221 = v216 == 0;
    if ( v221 )
LABEL_384:
      v222 = operator new(0x10u);
      *v222 = 0;
      v222[1] = 3;
      v222[2] = &unk_28898CC;
      v216 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v215,
               (int)v222);
    v223 = (int *)(v216 + 8);
    if ( v280 == v281 )
        v223);
      sub_119C854(v280, v223);
      ++v280;
  v224 = 0xBu % dword_27DABB0;
  v225 = *(_DWORD *)(dword_27DABAC + 4 * (0xBu % dword_27DABB0));
  if ( !v225 )
    goto LABEL_400;
  v226 = *(_DWORD *)v225;
  v227 = *(_DWORD *)(*(_DWORD *)v225 + 12);
    v228 = v227 == 11;
    if ( v227 == 11 )
      v228 = *(_DWORD *)(v226 + 4) == 11;
    if ( v228 )
    v229 = *(_DWORD *)v226;
    if ( *(_DWORD *)v226 )
      v227 = *(_DWORD *)(v229 + 12);
      v225 = v226;
      v226 = *(_DWORD *)v226;
      if ( *(_DWORD *)(v229 + 12) % (unsigned int)dword_27DABB0 == v224 )
  v230 = v225 == 0;
  if ( v225 )
    v225 = *(_DWORD *)v225;
    v230 = v225 == 0;
  if ( v230 )
LABEL_400:
    v231 = operator new(0x10u);
    *v231 = 0;
    v231[1] = 11;
    v231[2] = &unk_28898CC;
    v225 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v224,
             0xBu,
             (int)v231);
  v232 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           v46,
           (int **)(v225 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v232, (unsigned __int64 *)&v279);
  v276 = 0;
  v277 = 0;
  v278 = 0;
  v233 = 0x20u % dword_27DABB0;
  v234 = *(_DWORD *)(dword_27DABAC + 4 * (0x20u % dword_27DABB0));
  if ( v234 )
    v235 = *(_DWORD *)v234;
    v236 = *(_DWORD *)(*(_DWORD *)v234 + 12);
      v237 = v236 == 32;
      if ( v236 == 32 )
        v237 = *(_DWORD *)(v235 + 4) == 32;
      if ( v237 )
      v238 = *(_DWORD *)v235;
      if ( *(_DWORD *)v235 )
        v236 = *(_DWORD *)(v238 + 12);
        v234 = v235;
        v235 = *(_DWORD *)v235;
        if ( *(_DWORD *)(v238 + 12) % (unsigned int)dword_27DABB0 == v233 )
      goto LABEL_413;
    v239 = v234 == 0;
    if ( v234 )
      v234 = *(_DWORD *)v234;
      v239 = v234 == 0;
    if ( !v239 )
      v240 = (int *)(v234 + 8);
LABEL_415:
        (unsigned __int64 *)&v276,
        v240);
      goto LABEL_416;
LABEL_413:
  v241 = operator new(0x10u);
  *v241 = 0;
  v241[1] = 32;
  v241[2] = &unk_28898CC;
  v240 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   v233,
                   0x20u,
                   (int)v241)
  if ( v277 == v278 )
    goto LABEL_415;
  sub_119C854(v277, v240);
  ++v277;
LABEL_416:
  v242 = 0x20u % dword_27DABB0;
  v243 = *(_DWORD *)(dword_27DABAC + 4 * (0x20u % dword_27DABB0));
  if ( !v243 )
    goto LABEL_428;
  v244 = *(_DWORD *)v243;
  v245 = *(_DWORD *)(*(_DWORD *)v243 + 12);
    v246 = v245 == 32;
    if ( v245 == 32 )
      v246 = *(_DWORD *)(v244 + 4) == 32;
    if ( v246 )
    v247 = *(_DWORD *)v244;
    if ( *(_DWORD *)v244 )
      v245 = *(_DWORD *)(v247 + 12);
      v243 = v244;
      v244 = *(_DWORD *)v244;
      if ( *(_DWORD *)(v247 + 12) % (unsigned int)dword_27DABB0 == v242 )
  v248 = v243 == 0;
  if ( v243 )
    v243 = *(_DWORD *)v243;
    v248 = v243 == 0;
  if ( v248 )
LABEL_428:
    v249 = operator new(0x10u);
    *v249 = 0;
    v249[1] = 32;
    v249[2] = &unk_28898CC;
    v243 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v242,
             0x20u,
             (int)v249);
  v250 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v243 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v250, (unsigned __int64 *)&v276);
  v252 = v277;
  v251 = v276;
  if ( v276 != v277 )
    do
      v255 = (int *)(*v251 - 12);
      if ( v255 != &dword_28898C0 )
        v253 = (unsigned int *)(*v251 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v254 = __ldrex(v253);
          while ( __strex(v254 - 1, v253) );
        else
          v254 = (*v253)--;
        if ( v254 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v255);
      ++v251;
    while ( v251 != v252 );
    v251 = v276;
  if ( v251 )
    operator delete(v251);
  v257 = v280;
  v256 = v279;
  if ( v279 != v280 )
      v260 = (int *)(*v256 - 12);
      if ( v260 != &dword_28898C0 )
        v258 = (unsigned int *)(*v256 - 4);
            v259 = __ldrex(v258);
          while ( __strex(v259 - 1, v258) );
          v259 = (*v258)--;
        if ( v259 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v260);
      ++v256;
    while ( v256 != v257 );
    v256 = v279;
  if ( v256 )
    operator delete(v256);
  v262 = v283;
  v261 = v282;
  if ( v282 != v283 )
      v265 = (int *)(*v261 - 12);
      if ( v265 != &dword_28898C0 )
        v263 = (unsigned int *)(*v261 - 4);
            v264 = __ldrex(v263);
          while ( __strex(v264 - 1, v263) );
          v264 = (*v263)--;
        if ( v264 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v265);
      ++v261;
    while ( v261 != v262 );
    v261 = v282;
  if ( v261 )
    operator delete(v261);
  v267 = v289;
  v266 = v288;
  if ( v288 != v289 )
      v270 = (int *)(*v266 - 12);
      if ( v270 != &dword_28898C0 )
        v268 = (unsigned int *)(*v266 - 4);
            v269 = __ldrex(v268);
          while ( __strex(v269 - 1, v268) );
          v269 = (*v268)--;
        if ( v269 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v270);
      ++v266;
    while ( v266 != v267 );
    v266 = v288;
  if ( v266 )
    operator delete(v266);
  v272 = v292;
  v271 = v291;
  if ( v291 != v292 )
      v275 = (int *)(*v271 - 12);
      if ( v275 != &dword_28898C0 )
        v273 = (unsigned int *)(*v271 - 4);
            v274 = __ldrex(v273);
          while ( __strex(v274 - 1, v273) );
          v274 = (*v273)--;
        if ( v274 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v275);
      ++v271;
    while ( v271 != v272 );
    v271 = v291;
  if ( v271 )
    operator delete(v271);
}


void __fastcall CraftingScreenController::~CraftingScreenController(CraftingScreenController *this)
{
  CraftingScreenController::~CraftingScreenController(this);
}


signed int __fastcall CraftingScreenController::_clearTouchSelectedItem(CraftingScreenController *this)
{
  CraftingScreenController *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  EntityInteraction::setInteractText((int *)this + 195, (int *)&Util::EMPTY_STRING);
  result = -1;
  *((_DWORD *)v1 + 196) = -1;
  return result;
}


int __fastcall CraftingScreenController::_recipeAutoCraft(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, void *a14, int a15, int a16, int a17, int a18, char a19, int a20, int a21, char a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, void *a37, int a38, int a39, int a40, void *a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, char a50)
{
  int v50; // r6@1
  int *v51; // r8@1
  int v52; // r0@1
  ContainerItemStack *v53; // r7@1
  int v54; // r9@1
  ItemInstance *v55; // r0@4
  signed int v56; // r4@6
  void *v58; // r0@13
  int v59; // r1@14
  int v60; // r7@14
  int v61; // r3@14
  unsigned int v62; // r5@14
  char *v63; // r2@14
  int v64; // r1@17
  int v65; // r3@17
  unsigned int v66; // r4@17
  void *v67; // r2@17
  void *v68; // r7@20
  int *v69; // r8@21
  void *v70; // r0@22
  unsigned int *v71; // r1@23
  signed int v72; // r0@25
  unsigned int *v73; // r1@30
  signed int v74; // r0@32
  unsigned int *v75; // r2@34
  signed int v76; // r1@36
  unsigned int *v77; // r2@45
  signed int v78; // r1@47
  unsigned int *v79; // r2@49
  signed int v80; // r1@51
  char *v81; // r5@61
  _DWORD *v82; // r0@61
  char *v83; // r4@61
  size_t v84; // r2@61
  signed int v85; // r6@62
  int *v86; // r0@68
  void *v87; // r0@68
  void *v88; // r0@69
  char *v89; // r5@74
  int v90; // r8@74
  _DWORD *v91; // r0@74
  char *v92; // r4@74
  size_t v93; // r2@74
  signed int v94; // r9@75
  bool v95; // zf@78
  int v96; // r4@80
  int *v97; // r0@80
  void *v98; // r0@80
  void *v99; // r4@86
  void *v100; // r6@86
  unsigned int *v101; // r2@88
  signed int v102; // r1@90
  int *v103; // r0@96
  unsigned int *v104; // r2@108
  signed int v105; // r1@110
  int v106; // [sp+4h] [bp-10Ch]@0
  int *v107; // [sp+18h] [bp-F8h]@21
  int v108; // [sp+1Ch] [bp-F4h]@21
  void *v109; // [sp+20h] [bp-F0h]@20
  int v110; // [sp+28h] [bp-E8h]@45
  int v111; // [sp+2Ch] [bp-E4h]@49
  void *v112; // [sp+30h] [bp-E0h]@74
  int v113; // [sp+34h] [bp-DCh]@34
  int v114; // [sp+38h] [bp-D8h]@21
  void *s2; // [sp+3Ch] [bp-D4h]@61
  void *v116; // [sp+40h] [bp-D0h]@17
  int v117; // [sp+44h] [bp-CCh]@17
  char *v118; // [sp+48h] [bp-C8h]@17
  char *v119; // [sp+4Ch] [bp-C4h]@14
  int v120; // [sp+50h] [bp-C0h]@14
  char *v121; // [sp+54h] [bp-BCh]@14
  void *ptr; // [sp+58h] [bp-B8h]@20
  void *v123; // [sp+5Ch] [bp-B4h]@20
  int v124; // [sp+68h] [bp-A8h]@12
  unsigned __int64 v125; // [sp+6Ch] [bp-A4h]@9
  unsigned __int64 v126; // [sp+78h] [bp-98h]@5
  void *v127; // [sp+84h] [bp-8Ch]@5
  void *v128; // [sp+88h] [bp-88h]@5
  int v129; // [sp+8Ch] [bp-84h]@5
  char v130; // [sp+90h] [bp-80h]@5
  int v131; // [sp+98h] [bp-78h]@105
  void *v132; // [sp+B4h] [bp-5Ch]@103
  void *v133; // [sp+C4h] [bp-4Ch]@101
  int v134; // [sp+D8h] [bp-38h]@4

  v50 = a1;
  v51 = (int *)a2;
  v52 = *(_DWORD *)(a1 + 628);
  v53 = (ContainerItemStack *)a4;
  v54 = a3;
  if ( *(_BYTE *)(v50 + 657) )
  {
    if ( CraftingContainerManagerController::isExpandableItemFiltered(v52, (int **)a2, a3) )
      return 0;
  }
  else
    v55 = (ItemInstance *)ContainerManagerController::getItemInstance(v52, (int **)a2, a3);
    CraftingContainerManagerController::getCraftableCount(
      (CraftingContainerManagerController *)&v134,
      *(const ItemInstance **)(v50 + 628),
      v55);
    if ( !v134 )
  ContainerItemStack::ContainerItemStack((int)&v130);
  v127 = 0;
  v128 = 0;
  v129 = 0;
  CraftingContainerManagerController::getCurrentContainerStateList(
    (CraftingContainerManagerController *)&v126,
    *(_DWORD *)(v50 + 628));
  if ( CraftingScreenController::_tryAutoCraftRecipe(v50, (int)v51, __PAIR__(&v130, v54), v53, v106) == 1 )
    CraftingContainerManagerController::setIsClearingInputGridOnChange(
      *(CraftingContainerManagerController **)(v50 + 628),
      0);
    v56 = CraftingScreenController::_tryAutoPlaceItemIntoContainer(v50, (ContainerItemStack *)&v130, 9u, (int)&v127);
      1);
    v56 = 0;
  CraftingScreenController::_evacuateCraftingGrid((CraftingScreenController *)v50);
  CraftingContainerManagerController::clearAllRecipes(*(CraftingContainerManagerController **)(v50 + 628));
    (CraftingContainerManagerController *)&v125,
  if ( v56 == 1 )
    *(_BYTE *)(v50 + 747) = 1;
  else if ( !ContainerItemStack::isEmpty((ContainerItemStack *)&v130) )
    ContainerScreenController::setCursorSelectedItem(
      (ContainerScreenController *)v50,
      (const ContainerItemStack *)&v130);
    *(_DWORD *)(v50 + 956) = *(_DWORD *)(v50 + 768);
    EntityInteraction::setInteractText((int *)(v50 + 960), v51);
    *(_DWORD *)(v50 + 964) = v54;
    sub_119C884((void **)&v124, "hotbar_items");
    if ( !*(_DWORD *)(v50 + 932) )
      sub_119C8E4();
    (*(void (__fastcall **)(int, int *, _DWORD))(v50 + 936))(v50 + 924, &v124, 0);
    v58 = (void *)(v124 - 12);
    if ( (int *)(v124 - 12) != &dword_28898C0 )
    {
      v104 = (unsigned int *)(v124 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v105 = __ldrex(v104);
        while ( __strex(v105 - 1, v104) );
      }
      else
        v105 = (*v104)--;
      if ( v105 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v58);
    }
  v59 = HIDWORD(v126);
  v60 = *(_DWORD *)(v50 + 628);
  v61 = HIDWORD(v126);
  v62 = -1171354717 * ((HIDWORD(v126) - (signed int)v126) >> 3);
  v63 = 0;
  v119 = 0;
  v120 = 0;
  v121 = 0;
  if ( HIDWORD(v126) != (_DWORD)v126 )
    if ( v62 >= 0x2E8BA2F )
      sub_119C874();
    v63 = (char *)operator new(HIDWORD(v126) - v126);
    v59 = HIDWORD(v126);
    v61 = v126;
  v119 = v63;
  v121 = &v63[88 * v62];
  v120 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemStateData const*,std::vector<ItemStateData,std::allocator<ItemStateData>>>,ItemStateData*>(
           v61,
           v59,
           (int)v63);
  v64 = HIDWORD(v125);
  v65 = HIDWORD(v125);
  v66 = -1171354717 * ((HIDWORD(v125) - (signed int)v125) >> 3);
  v67 = 0;
  v116 = 0;
  v117 = 0;
  v118 = 0;
  if ( HIDWORD(v125) != (_DWORD)v125 )
    if ( v66 >= 0x2E8BA2F )
    v67 = operator new(HIDWORD(v125) - v125);
    v64 = HIDWORD(v125);
    v65 = v125;
  v116 = v67;
  v118 = (char *)v67 + 88 * v66;
  v117 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemStateData const*,std::vector<ItemStateData,std::allocator<ItemStateData>>>,ItemStateData*>(
           v65,
           v64,
           (int)v67);
  CraftingContainerManagerController::compareStatesAndCollectTransfers(
    (int)&ptr,
    v60,
    (unsigned __int64 *)&v119,
    &v116,
    1);
  std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector((unsigned __int64 *)&v116);
  std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector((unsigned __int64 *)&v119);
  v68 = ptr;
  v109 = v123;
  if ( ptr == v123 )
    v70 = ptr;
    goto LABEL_84;
  v107 = v51;
  v108 = v50;
  v69 = &v114;
  do
    sub_119CCEC(&s2, unk_27F98E0, CraftingContainerManagerController::TRANSFER_NO_ORIGIN);
    v81 = (char *)s2;
    v82 = (_DWORD *)*((_DWORD *)v68 + 18);
    v83 = (char *)s2 - 12;
    v84 = *(v82 - 3);
    if ( v84 == *((_DWORD *)s2 - 3) )
      v85 = 0;
      if ( !memcmp(v82, s2, v84) )
        v85 = 1;
    else
    if ( (int *)v83 != &dword_28898C0 )
      v71 = (unsigned int *)(v81 - 4);
          v72 = __ldrex(v71);
        while ( __strex(v72 - 1, v71) );
        v72 = (*v71)--;
      if ( v72 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v83);
    if ( v85 == 1 )
      sub_119C854(v69, v107);
      v86 = sub_119C854(&v113, (int *)v68 + 20);
      CraftingScreenController::_sendFlyingItem(
        v108,
        (ItemInstance *)v68,
        (int)v69,
        v54,
        (int)v86,
        *((_DWORD *)v68 + 21));
      v87 = (void *)(v113 - 12);
      if ( (int *)(v113 - 12) != &dword_28898C0 )
        v75 = (unsigned int *)(v113 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v76 = __ldrex(v75);
          while ( __strex(v76 - 1, v75) );
        }
        else
          v76 = (*v75)--;
        if ( v76 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v87);
      v88 = (void *)(v114 - 12);
      if ( (int *)(v114 - 12) != &dword_28898C0 )
        v79 = (unsigned int *)(v114 - 4);
            v80 = __ldrex(v79);
          while ( __strex(v80 - 1, v79) );
          goto LABEL_54;
        goto LABEL_53;
      sub_119CCEC(&v112, unk_27F98D8, CraftingContainerManagerController::TRANSFER_NO_DESTINATION);
      v89 = (char *)v112;
      v90 = v54;
      v91 = (_DWORD *)*((_DWORD *)v68 + 20);
      v92 = (char *)v112 - 12;
      v93 = *(v91 - 3);
      if ( v93 == *((_DWORD *)v112 - 3) )
        v94 = memcmp(v91, v112, v93) != 0;
        v94 = 1;
      if ( (int *)v92 != &dword_28898C0 )
        v73 = (unsigned int *)(v89 - 4);
            v74 = __ldrex(v73);
          while ( __strex(v74 - 1, v73) );
          v74 = (*v73)--;
        if ( v74 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v92);
      v95 = v94 == 1;
      v54 = v90;
      v69 = &v114;
      if ( v95 )
        sub_119C854(&v111, (int *)v68 + 18);
        v96 = *((_DWORD *)v68 + 19);
        v97 = sub_119C854(&v110, (int *)v68 + 20);
        CraftingScreenController::_sendFlyingItem(
          v108,
          (ItemInstance *)v68,
          (int)&v111,
          v96,
          (int)v97,
          *((_DWORD *)v68 + 21));
        v98 = (void *)(v110 - 12);
        if ( (int *)(v110 - 12) != &dword_28898C0 )
          v77 = (unsigned int *)(v110 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v78 = __ldrex(v77);
            while ( __strex(v78 - 1, v77) );
          }
          else
            v78 = (*v77)--;
          if ( v78 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v98);
        v88 = (void *)(v111 - 12);
        if ( (int *)(v111 - 12) != &dword_28898C0 )
          v79 = (unsigned int *)(v111 - 4);
              v80 = __ldrex(v79);
            while ( __strex(v80 - 1, v79) );
LABEL_54:
            if ( v80 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v88);
            goto LABEL_82;
LABEL_53:
          v80 = (*v79)--;
LABEL_82:
    v68 = (char *)v68 + 88;
  while ( v68 != v109 );
  v68 = v123;
  v70 = ptr;
LABEL_84:
  std::_Destroy_aux<false>::__destroy<ItemTransferData *>((int)v70, (int)v68);
  if ( ptr )
    operator delete(ptr);
  std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector(&v125);
  std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector(&v126);
  v100 = v128;
  v99 = v127;
  if ( v127 != v128 )
    do
      v103 = (int *)(*(_DWORD *)v99 - 12);
      if ( v103 != &dword_28898C0 )
        v101 = (unsigned int *)(*(_DWORD *)v99 - 4);
            v102 = __ldrex(v101);
          while ( __strex(v102 - 1, v101) );
          v102 = (*v101)--;
        if ( v102 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v103);
      v99 = (char *)v99 + 8;
    while ( v99 != v100 );
    v99 = v127;
  if ( v99 )
    operator delete(v99);
  if ( v133 )
    operator delete(v133);
  if ( v132 )
    operator delete(v132);
  if ( v131 )
    (*(void (**)(void))(*(_DWORD *)v131 + 4))();
  return 1;
}


int __fastcall CraftingScreenController::_dirtyAllTabs(int result)
{
  *(_DWORD *)(result + 984) |= 0x3Fu;
  return result;
}


void __fastcall CraftingScreenController::onOpen(CraftingScreenController *this)
{
  CraftingScreenController::onOpen(this);
}


signed int __fastcall CraftingScreenController::_usingTouchScheme(CraftingScreenController *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = MinecraftScreenController::getInputMode(this);
  v2 = 0;
  if ( v1 == 2 )
    v2 = 1;
  return v2;
}


void __fastcall CraftingScreenController::~CraftingScreenController(CraftingScreenController *this)
{
  CraftingScreenController *v1; // r0@1

  v1 = CraftingScreenController::~CraftingScreenController(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int *__fastcall CraftingScreenController::_tabIndexToCollectionName(int *a1, int a2, unsigned int a3)
{
  int *v3; // r8@1
  unsigned int v4; // r9@1
  char v5; // r0@1
  double v6; // r0@3
  void *v7; // r0@3
  void *v8; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  void *v11; // r0@7
  void *v12; // r0@8
  _DWORD *v13; // r0@10
  _DWORD *v14; // r6@11
  int v15; // r4@11
  _DWORD *v16; // r5@13
  bool v17; // zf@16
  int *v18; // r1@19
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  unsigned int *v22; // r2@26
  signed int v23; // r1@28
  unsigned int *v24; // r2@30
  signed int v25; // r1@32
  unsigned int *v26; // r2@34
  signed int v27; // r1@36
  unsigned int *v28; // r2@38
  signed int v29; // r1@40
  unsigned int *v30; // r2@42
  signed int v31; // r1@44
  int v32; // [sp+28h] [bp-78h]@3
  int v33; // [sp+2Ch] [bp-74h]@3
  int v34; // [sp+30h] [bp-70h]@3
  int v35; // [sp+34h] [bp-6Ch]@3
  int v36; // [sp+38h] [bp-68h]@3
  int v37; // [sp+3Ch] [bp-64h]@3
  int v38; // [sp+40h] [bp-60h]@3
  int v39; // [sp+44h] [bp-5Ch]@3
  int v40; // [sp+48h] [bp-58h]@3
  int v41; // [sp+4Ch] [bp-54h]@3
  int v42; // [sp+50h] [bp-50h]@3
  int v43; // [sp+54h] [bp-4Ch]@3
  char v44; // [sp+58h] [bp-48h]@3

  v3 = a1;
  v4 = a3;
  v5 = byte_27DABA8;
  __dmb();
  if ( !(v5 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27DABA8) )
  {
    v32 = 1;
    sub_119C884((void **)&v33, "recipe_construction");
    v34 = 4;
    sub_119C884((void **)&v35, "recipe_nature");
    v36 = 3;
    sub_119C884((void **)&v37, "recipe_items");
    v38 = 5;
    sub_119C884((void **)&v39, "recipe_search");
    v40 = 2;
    sub_119C884((void **)&v41, "recipe_equipment");
    v42 = 6;
    sub_119C884((void **)&v43, "inventory_items");
    LODWORD(v6) = &algn_27DABC8[28];
    std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_Hashtable<std::pair<int const,std::string> const*>(
      v6,
      (unsigned int *)&v44,
      0);
    v7 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
    {
      v20 = (unsigned int *)(v43 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    }
    v8 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v41 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    v9 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v39 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    v10 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v37 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
    v11 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v35 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v11);
    v12 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v33 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    _cxa_atexit(std::unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,std::string>>>::~unordered_map);
    j___cxa_guard_release((unsigned int *)&byte_27DABA8);
  }
  v13 = *(_DWORD **)(*(_DWORD *)&algn_27DABC8[28] + 4 * (v4 % *(_DWORD *)&algn_27DABC8[32]));
  if ( !v13 )
    goto LABEL_20;
  v14 = (_DWORD *)*v13;
  v15 = *(_DWORD *)(*v13 + 4);
  while ( v15 != v4 )
    v16 = (_DWORD *)*v14;
    if ( *v14 )
      v15 = v16[1];
      v13 = v14;
      v14 = (_DWORD *)*v14;
      if ( v16[1] % *(_DWORD *)&algn_27DABC8[32] == v4 % *(_DWORD *)&algn_27DABC8[32] )
        continue;
  v17 = v13 == 0;
  if ( v13 )
    v13 = (_DWORD *)*v13;
    v17 = v13 == 0;
  if ( v17 )
LABEL_20:
    v18 = (int *)&Util::EMPTY_STRING;
  else
    v18 = v13 + 2;
  return sub_119C854(v3, v18);
}


signed int __fastcall CraftingScreenController::_usingGamepadScheme(CraftingScreenController *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = MinecraftScreenController::getInputMode(this);
  v2 = 0;
  if ( v1 == 3 )
    v2 = 1;
  return v2;
}


void __fastcall CraftingScreenController::_registerCoalesceOrder(CraftingScreenController *this)
{
  CraftingScreenController::_registerCoalesceOrder(this);
}


void __fastcall CraftingScreenController::_getCraftStackText(CraftingScreenController *this, int a2)
{
  CraftingScreenController::_getCraftStackText(this, a2);
}


int __fastcall CraftingScreenController::_isValidSlot(CraftingScreenController *this, int a2)
{
  CraftingScreenController *v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  bool v5; // zf@1
  bool v6; // nf@1
  unsigned __int8 v7; // vf@1
  int result; // r0@4
  int v9; // r5@5
  int v10; // r0@5
  signed int v11; // r0@5
  signed int v12; // r1@7

  v2 = this;
  v3 = a2;
  v4 = MinecraftScreenModel::getHotbarSlotCount(*((MinecraftScreenModel **)this + 95));
  v7 = 0;
  v5 = v3 == 0;
  v6 = v3 < 0;
  if ( v3 >= 0 )
  {
    v7 = __OFSUB__(v4, v3);
    v5 = v4 == v3;
    v6 = v4 - v3 < 0;
  }
  if ( (unsigned __int8)(v6 ^ v7) | v5 )
    v9 = v3 % MinecraftScreenModel::getHotbarSlotCount(*((MinecraftScreenModel **)v2 + 95));
    v10 = MinecraftScreenModel::getFixedInventorySlotCount(*((MinecraftScreenModel **)v2 + 95));
    v7 = __OFSUB__(v9, v10);
    v6 = v9 - v10 < 0;
    v11 = 0;
    if ( v6 ^ v7 )
      v11 = 1;
    v12 = 0;
    if ( v9 > -1 )
      v12 = 1;
    result = v11 & v12;
  else
    result = 1;
  return result;
}


char *__fastcall CraftingScreenController::_clearFocusRestorationContext(CraftingScreenController *this)
{
  CraftingScreenController *v1; // r4@1
  char *result; // r0@1

  v1 = this;
  *((_DWORD *)this + 239) = -1;
  result = sub_119CA68((const void **)this + 240, 0, *(_BYTE **)(*((_DWORD *)this + 240) - 12), 0);
  *((_DWORD *)v1 + 241) = -1;
  return result;
}


int __fastcall CraftingScreenController::_overrideWithCreativeItem(int a1, int *a2, int a3, _DWORD *a4)
{
  int v4; // r9@1
  int *v5; // r6@1
  int v6; // r8@1
  int result; // r0@1
  bool v8; // zf@1
  int v9; // r7@5
  void *v10; // r0@5
  int v11; // r0@6
  int v12; // r4@12
  unsigned int *v13; // r1@13
  unsigned int v14; // r0@15
  unsigned int *v15; // r5@19
  unsigned int v16; // r0@21
  unsigned int *v17; // r2@33
  signed int v18; // r1@35
  char v19; // [sp+8h] [bp-C8h]@6
  int v20; // [sp+10h] [bp-C0h]@10
  void *v21; // [sp+2Ch] [bp-A4h]@8
  void *ptr; // [sp+3Ch] [bp-94h]@6
  int v23; // [sp+54h] [bp-7Ch]@5
  ContainerController *v24; // [sp+58h] [bp-78h]@5
  int v25; // [sp+5Ch] [bp-74h]@12
  char v26; // [sp+60h] [bp-70h]@4
  int v27; // [sp+68h] [bp-68h]@30
  void *v28; // [sp+84h] [bp-4Ch]@28
  void *v29; // [sp+94h] [bp-3Ch]@26

  v4 = a1;
  v5 = a2;
  v6 = a3;
  result = *(_DWORD *)(*a4 - 12);
  v8 = result == 0;
  if ( result )
  {
    result = *(_DWORD *)(*a2 - 12);
    v8 = result == 0;
  }
  if ( !v8 )
    ContainerItemStack::ContainerItemStack((int)&v26);
    (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v4 + 628) + 8))(*(_DWORD *)(v4 + 628));
    if ( !ContainerItemStack::isEmpty((ContainerItemStack *)&v26) )
    {
      v9 = *(_DWORD *)(v4 + 628);
      sub_119C854(&v23, v5);
      ContainerManagerController::getContainerController((int)&v24, v9, (int **)&v23);
      v10 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
      {
        v17 = (unsigned int *)(v23 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v10);
      }
      v11 = ContainerController::getItem(v24, v6);
      ContainerController::removeItem((ContainerController *)&v19, (int)v24, v6, *(_BYTE *)(v11 + 14));
      if ( ptr )
        operator delete(ptr);
      if ( v21 )
        operator delete(v21);
      if ( v20 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v20 + 4))(v20);
      v20 = 0;
      ContainerController::setItem((int)v24, v6, (int)&v26, 0, 0);
      ContainerScreenController::_resetHeldButton((ContainerScreenController *)v4);
      ContainerScreenController::_setPointerHeldEventsHandled((ContainerScreenController *)v4, 0);
      ProgressiveTakeButtonData::setAutoHandleAtMaxStackSize((ProgressiveTakeButtonData *)(v4 + 520), 1);
      *(_WORD *)(v4 + 788) = 0;
      EntityInteraction::setInteractText((int *)(v4 + 780), (int *)&Util::EMPTY_STRING);
      *(_DWORD *)(v4 + 784) = -1;
      v12 = v25;
      if ( v25 )
        v13 = (unsigned int *)(v25 + 4);
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
    }
    if ( v29 )
      operator delete(v29);
    if ( v28 )
      operator delete(v28);
    result = v27;
    if ( v27 )
      result = (*(int (__cdecl **)(int))(*(_DWORD *)v27 + 4))(v27);
  return result;
}


signed int __fastcall CraftingScreenController::_setInitialTabs(CraftingScreenController *this, int a2, int a3)
{
  CraftingScreenController *v3; // r4@1
  int v4; // r5@1
  signed int result; // r0@1
  int v6; // r6@1

  v3 = this;
  v4 = a3;
  result = *((_BYTE *)this + 656);
  v6 = a2;
  if ( result )
  {
    if ( MinecraftScreenController::getInputMode(v3) != 3
      || MinecraftScreenModel::isCreative(*((MinecraftScreenModel **)v3 + 106)) )
    {
      *((_DWORD *)v3 + 192) = v6;
      result = *((_DWORD *)v3 + 165);
      if ( result == 1 )
      {
        result = 2;
        *((_DWORD *)v3 + 193) = 2;
      }
      else
        *((_DWORD *)v3 + 193) = v4;
    }
    else
        result = 5;
        *((_QWORD *)v3 + 96) = 8589934597LL;
      else if ( !result )
        result = 6;
        *((_QWORD *)v3 + 96) = 12884901894LL;
  }
  else
    if ( a2 == 6 )
      v6 = 5;
    *((_DWORD *)v3 + 192) = v6;
    *((_DWORD *)v3 + 193) = a3;
  return result;
}


CraftingScreenController *__fastcall CraftingScreenController::~CraftingScreenController(CraftingScreenController *this)
{
  CraftingScreenController *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  int v5; // r1@4
  void *v6; // r0@4
  void (*v7)(void); // r3@5
  void (*v8)(void); // r3@7
  void (*v9)(void); // r3@9
  void (*v10)(void); // r3@11
  void (*v11)(void); // r3@13
  void *v12; // r0@15
  void *v13; // r0@17
  int v14; // r0@19
  int v15; // r1@21
  void *v16; // r0@21
  void (*v17)(void); // r3@22
  void *v18; // r0@24
  void *v19; // r0@26
  int v20; // r0@28
  int v21; // r5@30
  unsigned int *v22; // r1@31
  unsigned int v23; // r0@33
  unsigned int *v24; // r6@37
  unsigned int v25; // r0@39
  unsigned int *v27; // r2@45
  signed int v28; // r1@47
  unsigned int *v29; // r2@49
  signed int v30; // r1@51
  unsigned int *v31; // r2@53
  signed int v32; // r1@55

  v1 = this;
  *(_DWORD *)this = &off_26E1738;
  v2 = *((_DWORD *)this + 248);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = (void (*)(void))*((_DWORD *)v1 + 244);
  if ( v4 )
    v4();
  v5 = *((_DWORD *)v1 + 240);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v5 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = (void (*)(void))*((_DWORD *)v1 + 237);
  if ( v7 )
    v7();
  v8 = (void (*)(void))*((_DWORD *)v1 + 233);
  if ( v8 )
    v8();
  v9 = (void (*)(void))*((_DWORD *)v1 + 229);
  if ( v9 )
    v9();
  v10 = (void (*)(void))*((_DWORD *)v1 + 225);
  if ( v10 )
    v10();
  v11 = (void (*)(void))*((_DWORD *)v1 + 221);
  if ( v11 )
    v11();
  v12 = (void *)*((_DWORD *)v1 + 211);
  if ( v12 )
    operator delete(v12);
  v13 = (void *)*((_DWORD *)v1 + 207);
  if ( v13 )
    operator delete(v13);
  v14 = *((_DWORD *)v1 + 200);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  *((_DWORD *)v1 + 200) = 0;
  v15 = *((_DWORD *)v1 + 195);
  v16 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v15 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = (void (*)(void))*((_DWORD *)v1 + 189);
  if ( v17 )
    v17();
  v18 = (void *)*((_DWORD *)v1 + 181);
  if ( v18 )
    operator delete(v18);
  v19 = (void *)*((_DWORD *)v1 + 177);
  if ( v19 )
    operator delete(v19);
  v20 = *((_DWORD *)v1 + 170);
  if ( v20 )
    (*(void (**)(void))(*(_DWORD *)v20 + 4))();
  *((_DWORD *)v1 + 170) = 0;
  v21 = *((_DWORD *)v1 + 158);
  if ( v21 )
    v22 = (unsigned int *)(v21 + 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 == 1 )
      v24 = (unsigned int *)(v21 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
      if ( &pthread_create )
      {
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      }
      else
        v25 = (*v24)--;
      if ( v25 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
  ContainerScreenController::~ContainerScreenController(v1);
  return v1;
}


signed int __fastcall CraftingScreenController::_hasFocusRestorationContext(CraftingScreenController *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 239);
  result = 0;
  if ( v1 != -1 )
    result = 1;
  return result;
}


int __fastcall CraftingScreenController::_selectSlot(int a1, int a2, Inventory *a3)
{
  int v3; // r6@1
  Inventory *v4; // r4@1
  signed int v5; // r5@1
  int result; // r0@2
  int v7; // r0@4
  bool v8; // zf@4
  bool v9; // nf@4
  unsigned __int8 v10; // vf@4
  int v11; // r7@8

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( MinecraftScreenModel::isEnabledTouchOrHolographic(*(MinecraftScreenModel **)(a1 + 380)) != 1
    || (result = MinecraftScreenModel::getHotbarSlotCount(*(MinecraftScreenModel **)(v3 + 380)),
        (unsigned __int8)v4 == 123)
    || result != v5 )
  {
    v7 = MinecraftScreenModel::getHotbarSlotCount(*(MinecraftScreenModel **)(v3 + 380));
    v10 = 0;
    v8 = v5 == 0;
    v9 = v5 < 0;
    if ( v5 >= 0 )
    {
      v10 = __OFSUB__(v7, v5);
      v8 = v7 == v5;
      v9 = v7 - v5 < 0;
    }
    if ( !((unsigned __int8)(v9 ^ v10) | v8)
      || (v11 = v5 % MinecraftScreenModel::getHotbarSlotCount(*(MinecraftScreenModel **)(v3 + 380)),
          result = MinecraftScreenModel::getFixedInventorySlotCount(*(MinecraftScreenModel **)(v3 + 380)),
          v11 >= 0)
      && v11 < result )
      *(_BYTE *)(v3 + 872) = 1;
      result = j_j_j__ZN20MinecraftScreenModel10selectSlotEi11ContainerID(*(_DWORD *)(v3 + 380), v5, v4);
  }
  return result;
}


int __fastcall CraftingScreenController::_onContainerSlotHovered(MinecraftScreenController *a1, int **a2, int a3)
{
  int v3; // r10@1
  int **v4; // r11@1
  MinecraftScreenController *v5; // r6@1
  int v6; // r7@4
  int v7; // r0@4
  int v8; // r9@5
  int v9; // r5@5
  bool v10; // zf@6
  int v11; // r8@9
  bool v12; // zf@15
  _DWORD *v13; // r0@19
  int v14; // r0@21
  unsigned int v16; // [sp+8h] [bp-28h]@4

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( MinecraftScreenController::getInputMode(a1) == 3
    && !MinecraftScreenModel::isCreative(*((MinecraftScreenModel **)v5 + 106)) )
  {
    if ( CraftingContainerManagerController::isCreativeContainer(*((_DWORD *)v5 + 157), (const void **)v4) == 1 )
    {
      v16 = *((_DWORD *)v5 + 157);
      v6 = 0xAu % dword_27DABB0;
      v7 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
      if ( !v7 )
        goto LABEL_19;
      v8 = *(_DWORD *)v7;
      v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
      while ( 1 )
      {
        v10 = v9 == 10;
        if ( v9 == 10 )
          v10 = *(_DWORD *)(v8 + 4) == 10;
        if ( v10 )
          break;
        v11 = *(_DWORD *)v8;
        if ( *(_DWORD *)v8 )
        {
          v9 = *(_DWORD *)(v11 + 12);
          v7 = v8;
          v8 = *(_DWORD *)v8;
          if ( *(_DWORD *)(v11 + 12) % (unsigned int)dword_27DABB0 == v6 )
            continue;
        }
      }
      v12 = v7 == 0;
      if ( v7 )
        v7 = *(_DWORD *)v7;
        v12 = v7 == 0;
      if ( v12 )
LABEL_19:
        v13 = operator new(0x10u);
        *v13 = 0;
        v13[1] = 10;
        v13[2] = &unk_28898CC;
        v7 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               (int)&dword_27DABAC,
               v6,
               0xAu,
               (int)v13);
      std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
        (unsigned __int64 *)v5 + 75,
        (int **)(v7 + 8));
      CraftingContainerManagerController::handleRecipeSelected(__PAIR__((unsigned int)v4, v16), v3, 1);
      if ( !*((_BYTE *)v5 + 744) )
        v14 = ContainerManagerController::getItemInstance(*((_DWORD *)v5 + 157), v4, v3);
        ItemInstance::operator=((int)v5 + 672, v14);
        *((_DWORD *)v5 + 166) = v3;
    }
    else if ( CraftingContainerManagerController::getCurrentRecipe(*((CraftingContainerManagerController **)v5 + 157)) )
      CraftingContainerManagerController::clearAllRecipes(*((CraftingContainerManagerController **)v5 + 157));
  }
  return j_j_j__ZN25ContainerScreenController23_onContainerSlotHoveredERKSsi(v5, (const void **)v4, v3);
}


Json::Value *__fastcall CraftingScreenController::addStaticScreenVars(CraftingScreenController *this, Json::Value *a2, bool a3)
{
  bool v3; // r4@1
  Json::Value *v4; // r5@1
  int v5; // r6@1
  int v6; // r6@1
  int v7; // r6@1
  int v8; // r6@1
  int v9; // r6@1
  int v10; // r6@1
  int v11; // r6@1
  int v12; // r6@1
  int v13; // r6@1
  int v14; // r5@1
  int v16; // [sp+0h] [bp-B8h]@1
  char v17; // [sp+10h] [bp-A8h]@1
  char v18; // [sp+20h] [bp-98h]@1
  char v19; // [sp+30h] [bp-88h]@1
  char v20; // [sp+40h] [bp-78h]@1
  char v21; // [sp+50h] [bp-68h]@1
  char v22; // [sp+60h] [bp-58h]@1
  char v23; // [sp+70h] [bp-48h]@1
  char v24; // [sp+80h] [bp-38h]@1
  char v25; // [sp+90h] [bp-28h]@1

  v3 = (char)a2;
  v4 = this;
  v5 = Json::Value::operator[](this, "$survival_index");
  Json::Value::Value((Json::Value *)&v25, 6);
  Json::Value::operator=(v5, (const Json::Value *)&v25);
  Json::Value::~Value((Json::Value *)&v25);
  v6 = Json::Value::operator[](v4, "$equipment_index");
  Json::Value::Value((Json::Value *)&v24, 2);
  Json::Value::operator=(v6, (const Json::Value *)&v24);
  Json::Value::~Value((Json::Value *)&v24);
  v7 = Json::Value::operator[](v4, "$construction_index");
  Json::Value::Value((Json::Value *)&v23, 1);
  Json::Value::operator=(v7, (const Json::Value *)&v23);
  Json::Value::~Value((Json::Value *)&v23);
  v8 = Json::Value::operator[](v4, "$nature_index");
  Json::Value::Value((Json::Value *)&v22, 4);
  Json::Value::operator=(v8, (const Json::Value *)&v22);
  Json::Value::~Value((Json::Value *)&v22);
  v9 = Json::Value::operator[](v4, "$items_index");
  Json::Value::Value((Json::Value *)&v21, 3);
  Json::Value::operator=(v9, (const Json::Value *)&v21);
  Json::Value::~Value((Json::Value *)&v21);
  v10 = Json::Value::operator[](v4, "$search_index");
  Json::Value::Value((Json::Value *)&v20, 5);
  Json::Value::operator=(v10, (const Json::Value *)&v20);
  Json::Value::~Value((Json::Value *)&v20);
  v11 = Json::Value::operator[](v4, "$full_screen_index");
  Json::Value::Value((Json::Value *)&v19, 1);
  Json::Value::operator=(v11, (const Json::Value *)&v19);
  Json::Value::~Value((Json::Value *)&v19);
  v12 = Json::Value::operator[](v4, "$crafting_index");
  Json::Value::Value((Json::Value *)&v18, 2);
  Json::Value::operator=(v12, (const Json::Value *)&v18);
  Json::Value::~Value((Json::Value *)&v18);
  v13 = Json::Value::operator[](v4, "$armor_index");
  Json::Value::Value((Json::Value *)&v17, 3);
  Json::Value::operator=(v13, (const Json::Value *)&v17);
  Json::Value::~Value((Json::Value *)&v17);
  v14 = Json::Value::operator[](v4, "$pocket");
  Json::Value::Value((Json::Value *)&v16, v3);
  Json::Value::operator=(v14, (const Json::Value *)&v16);
  return Json::Value::~Value((Json::Value *)&v16);
}


void **__fastcall CraftingScreenController::_getButtonLeftStickDescription(__int64 this)
{
  int v1; // r8@1
  int v2; // r0@1
  int v3; // r4@2
  int v4; // r5@2
  bool v5; // zf@3
  int v6; // r7@6
  bool v7; // zf@9
  _DWORD *v8; // r0@13
  _DWORD *v9; // r10@14
  _DWORD *v10; // r1@14
  size_t v11; // r9@14
  int v12; // r4@16
  int v13; // r0@16
  int v14; // r8@17
  int v15; // r6@17
  bool v16; // zf@18
  int v17; // r7@21
  bool v18; // zf@24
  _DWORD *v19; // r0@28
  _DWORD *v20; // r1@29
  int v21; // r8@31
  int v22; // r0@31
  int v23; // r4@32
  int v24; // r6@32
  bool v25; // zf@33
  int v26; // r7@36
  bool v27; // zf@39
  _DWORD *v28; // r0@43
  _DWORD *v29; // r1@44
  int v30; // r8@46
  int v31; // r0@46
  int v32; // r4@47
  int v33; // r6@47
  bool v34; // zf@48
  int v35; // r7@51
  bool v36; // zf@54
  _DWORD *v37; // r0@58
  _DWORD *v38; // r1@59
  int v39; // r8@61
  int v40; // r0@61
  int v41; // r4@62
  int v42; // r6@62
  bool v43; // zf@63
  int v44; // r7@66
  bool v45; // zf@69
  _DWORD *v46; // r0@73
  _DWORD *v47; // r1@74
  void **result; // r0@76
  __int64 v49; // [sp+4h] [bp-34h]@1

  v49 = this;
  v1 = 0x1Au % dword_27DABB0;
  v2 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
  if ( !v2 )
    goto LABEL_13;
  v3 = *(_DWORD *)v2;
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  while ( 1 )
  {
    v5 = v4 == 26;
    if ( v4 == 26 )
      v5 = *(_DWORD *)(v3 + 4) == 26;
    if ( v5 )
      break;
    v6 = *(_DWORD *)v3;
    if ( *(_DWORD *)v3 )
    {
      v4 = *(_DWORD *)(v6 + 12);
      v2 = v3;
      v3 = *(_DWORD *)v3;
      if ( *(_DWORD *)(v6 + 12) % (unsigned int)dword_27DABB0 == v1 )
        continue;
    }
  }
  v7 = v2 == 0;
  if ( v2 )
    v2 = *(_DWORD *)v2;
    v7 = v2 == 0;
  if ( v7 )
LABEL_13:
    v8 = operator new(0x10u);
    *v8 = 0;
    v8[1] = 26;
    v8[2] = &unk_28898CC;
    v2 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27DABAC,
           v1,
           0x1Au,
           (int)v8);
  v9 = *(_DWORD **)(HIDWORD(v49) + 560);
  v10 = *(_DWORD **)(v2 + 8);
  v11 = *(v9 - 3);
  if ( v11 == *(v10 - 3) && !memcmp(*(const void **)(HIDWORD(v49) + 560), v10, *(v9 - 3)) )
    goto LABEL_80;
  v12 = 0x18u % dword_27DABB0;
  v13 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
  if ( !v13 )
    goto LABEL_28;
  v14 = *(_DWORD *)v13;
  v15 = *(_DWORD *)(*(_DWORD *)v13 + 12);
    v16 = v15 == 24;
    if ( v15 == 24 )
      v16 = *(_DWORD *)(v14 + 4) == 24;
    if ( v16 )
    v17 = *(_DWORD *)v14;
    if ( *(_DWORD *)v14 )
      v15 = *(_DWORD *)(v17 + 12);
      v13 = v14;
      v14 = *(_DWORD *)v14;
      if ( *(_DWORD *)(v17 + 12) % (unsigned int)dword_27DABB0 == v12 )
  v18 = v13 == 0;
  if ( v13 )
    v13 = *(_DWORD *)v13;
    v18 = v13 == 0;
  if ( v18 )
LABEL_28:
    v19 = operator new(0x10u);
    *v19 = 0;
    v19[1] = 24;
    v19[2] = &unk_28898CC;
    v13 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27DABAC,
            v12,
            0x18u,
            (int)v19);
    v9 = *(_DWORD **)(HIDWORD(v49) + 560);
    v11 = *(v9 - 3);
  v20 = *(_DWORD **)(v13 + 8);
  if ( v11 == *(v20 - 3) && !memcmp(v9, v20, v11) )
  v21 = 3u % dword_27DABB0;
  v22 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
  if ( !v22 )
    goto LABEL_43;
  v23 = *(_DWORD *)v22;
  v24 = *(_DWORD *)(*(_DWORD *)v22 + 12);
    v25 = v24 == 3;
    if ( v24 == 3 )
      v25 = *(_DWORD *)(v23 + 4) == 3;
    if ( v25 )
    v26 = *(_DWORD *)v23;
    if ( *(_DWORD *)v23 )
      v24 = *(_DWORD *)(v26 + 12);
      v22 = v23;
      v23 = *(_DWORD *)v23;
      if ( *(_DWORD *)(v26 + 12) % (unsigned int)dword_27DABB0 == v21 )
  v27 = v22 == 0;
  if ( v22 )
    v22 = *(_DWORD *)v22;
    v27 = v22 == 0;
  if ( v27 )
LABEL_43:
    v28 = operator new(0x10u);
    *v28 = 0;
    v28[1] = 3;
    v28[2] = &unk_28898CC;
    v22 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v21,
            3u,
            (int)v28);
  v29 = *(_DWORD **)(v22 + 8);
  if ( v11 == *(v29 - 3) && !memcmp(v9, v29, v11) )
  v30 = 0xAu % dword_27DABB0;
  v31 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
  if ( !v31 )
    goto LABEL_58;
  v32 = *(_DWORD *)v31;
  v33 = *(_DWORD *)(*(_DWORD *)v31 + 12);
    v34 = v33 == 10;
    if ( v33 == 10 )
      v34 = *(_DWORD *)(v32 + 4) == 10;
    if ( v34 )
    v35 = *(_DWORD *)v32;
    if ( *(_DWORD *)v32 )
      v33 = *(_DWORD *)(v35 + 12);
      v31 = v32;
      v32 = *(_DWORD *)v32;
      if ( *(_DWORD *)(v35 + 12) % (unsigned int)dword_27DABB0 == v30 )
  v36 = v31 == 0;
  if ( v31 )
    v31 = *(_DWORD *)v31;
    v36 = v31 == 0;
  if ( v36 )
LABEL_58:
    v37 = operator new(0x10u);
    *v37 = 0;
    v37[1] = 10;
    v37[2] = &unk_28898CC;
    v31 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v30,
            0xAu,
            (int)v37);
  v38 = *(_DWORD **)(v31 + 8);
  if ( v11 == *(v38 - 3) && !memcmp(v9, v38, v11) )
  v39 = 0xBu % dword_27DABB0;
  v40 = *(_DWORD *)(dword_27DABAC + 4 * (0xBu % dword_27DABB0));
  if ( !v40 )
    goto LABEL_73;
  v41 = *(_DWORD *)v40;
  v42 = *(_DWORD *)(*(_DWORD *)v40 + 12);
    v43 = v42 == 11;
    if ( v42 == 11 )
      v43 = *(_DWORD *)(v41 + 4) == 11;
    if ( v43 )
    v44 = *(_DWORD *)v41;
    if ( *(_DWORD *)v41 )
      v42 = *(_DWORD *)(v44 + 12);
      v40 = v41;
      v41 = *(_DWORD *)v41;
      if ( *(_DWORD *)(v44 + 12) % (unsigned int)dword_27DABB0 == v39 )
  v45 = v40 == 0;
  if ( v40 )
    v40 = *(_DWORD *)v40;
    v45 = v40 == 0;
  if ( v45 )
LABEL_73:
    v46 = operator new(0x10u);
    *v46 = 0;
    v46[1] = 11;
    v46[2] = &unk_28898CC;
    v40 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v39,
            0xBu,
            (int)v46);
  v47 = *(_DWORD **)(v40 + 8);
  if ( v11 == *(v47 - 3) && !memcmp(v9, v47, v11) )
LABEL_80:
    result = sub_119C884((void **)v49, "controller.buttonTip.pane.recipeBook");
  else
    result = sub_119C884((void **)v49, "controller.buttonTip.pane.inventory");
  return result;
}


void __fastcall CraftingScreenController::_changeRightSideInventoryTab(CraftingScreenController *this, int a2)
{
  CraftingScreenController *v2; // r4@1
  int v3; // r0@3
  signed int v4; // r2@3
  signed int v5; // r1@3
  void **v6; // r0@10
  void *v7; // r0@11
  unsigned int *v8; // r2@13
  signed int v9; // r1@15
  int v10; // [sp+0h] [bp-28h]@10
  int v11; // [sp+4h] [bp-24h]@10
  char v12; // [sp+9h] [bp-1Fh]@10

  v2 = this;
  if ( a2 )
  {
    if ( *((_BYTE *)this + 656) )
    {
      *((_DWORD *)this + 193) += a2;
      v3 = MinecraftScreenModel::isCreative(*((MinecraftScreenModel **)this + 106));
      v4 = *((_DWORD *)v2 + 193);
      v5 = 2;
      if ( v3 )
        v5 = 1;
      if ( v4 >= v5 )
      {
        if ( v4 >= 4 )
          *((_DWORD *)v2 + 193) = v5;
      }
      else
        *((_DWORD *)v2 + 193) = 3;
      v6 = sub_119C884((void **)&v11, "navigation_tab");
      v12 = 0;
      v10 = *((_DWORD *)v2 + 193);
      sub_119CAD8(v6, "right_inventory_navigation_tab", (_BYTE *)0x1E);
      if ( !*((_DWORD *)v2 + 189) )
        sub_119C8E4();
      (*((void (__fastcall **)(_DWORD, _DWORD))v2 + 190))((char *)v2 + 748, &v10);
      v7 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v11 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v7);
    }
    else
      j_j_j__ZN24CraftingScreenController27_changeLeftSideInventoryTabEi(this, a2);
  }
}


void *__fastcall CraftingScreenController::_getButtonXDescription(CraftingScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r10@1
  void **v3; // r9@1
  void *result; // r0@2
  signed int v5; // r4@3
  int v6; // r0@3
  int v7; // r8@7
  int v8; // r0@7
  int v9; // r4@8
  int v10; // r5@8
  bool v11; // zf@9
  int v12; // r7@12
  bool v13; // zf@16
  _DWORD *v14; // r0@20
  _DWORD *v15; // r1@21
  size_t v16; // r2@21
  int v17; // r8@23
  int v18; // r0@23
  int v19; // r4@24
  int v20; // r5@24
  bool v21; // zf@25
  int v22; // r7@28
  bool v23; // zf@31
  _DWORD *v24; // r0@35
  const void *v25; // r11@36
  _DWORD *v26; // r1@36
  size_t v27; // r9@36
  int v28; // r6@38
  int v29; // r0@38
  int v30; // r8@39
  int v31; // r7@39
  bool v32; // zf@40
  int v33; // r4@43
  bool v34; // zf@47
  _DWORD *v35; // r0@51
  _DWORD *v36; // r1@52
  int v37; // r8@54
  int v38; // r0@54
  int v39; // r6@55
  int v40; // r7@55
  bool v41; // zf@56
  int v42; // r4@59
  bool v43; // zf@63
  _DWORD *v44; // r0@67
  _DWORD *v45; // r1@68
  int v46; // r8@70
  int v47; // r0@70
  int v48; // r6@71
  int v49; // r7@71
  bool v50; // zf@72
  int v51; // r4@75
  bool v52; // zf@78
  _DWORD *v53; // r0@82
  _DWORD *v54; // r1@83
  int v55; // r8@85
  int v56; // r0@85
  int v57; // r6@86
  int v58; // r7@86
  bool v59; // zf@87
  int v60; // r4@90
  bool v61; // zf@93
  _DWORD *v62; // r0@97
  _DWORD *v63; // r1@98
  int v64; // r8@100
  int v65; // r0@100
  int v66; // r6@101
  int v67; // r7@101
  bool v68; // zf@102
  int v69; // r4@105
  bool v70; // zf@108
  _DWORD *v71; // r0@112
  _DWORD *v72; // r1@113
  int v73; // r8@115
  int v74; // r0@115
  int v75; // r6@116
  int v76; // r7@116
  bool v77; // zf@117
  int v78; // r4@120
  bool v79; // zf@124
  _DWORD *v80; // r0@128
  _DWORD *v81; // r1@129
  void **v82; // [sp+4h] [bp-44h]@23
  const void **v83; // [sp+8h] [bp-40h]@3

  v2 = a2;
  v3 = (void **)this;
  if ( ContainerScreenController::_selectionActive(a2) == 1 )
  {
    result = sub_119C884(v3, "controller.buttonTip.place.one");
  }
  else
    v83 = (const void **)((char *)v2 + 560);
    v5 = CraftingContainerManagerController::isCreativeContainer(*((_DWORD *)v2 + 157), (const void **)v2 + 140);
    v6 = MinecraftScreenModel::isCreative(*((MinecraftScreenModel **)v2 + 106));
    if ( v5 == 1 )
    {
      if ( v6 == 1 )
        result = sub_119C884(v3, "controller.buttonTip.take.one");
      else
        result = sub_119C854((int *)v3, (int *)&Util::EMPTY_STRING);
    }
    else
      if ( v6 != 1 )
        goto LABEL_135;
      v7 = 0x18u % dword_27DABB0;
      v8 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
      if ( !v8 )
        goto LABEL_20;
      v9 = *(_DWORD *)v8;
      v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
      while ( 1 )
      {
        v11 = v10 == 24;
        if ( v10 == 24 )
          v11 = *(_DWORD *)(v9 + 4) == 24;
        if ( v11 )
          break;
        v12 = *(_DWORD *)v9;
        if ( *(_DWORD *)v9 )
        {
          v10 = *(_DWORD *)(v12 + 12);
          v8 = v9;
          v9 = *(_DWORD *)v9;
          if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27DABB0 == v7 )
            continue;
        }
      }
      v13 = v8 == 0;
      if ( v8 )
        v8 = *(_DWORD *)v8;
        v13 = v8 == 0;
      if ( v13 )
LABEL_20:
        v14 = operator new(0x10u);
        *v14 = 0;
        v14[1] = 24;
        v14[2] = &unk_28898CC;
        v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               (int)&dword_27DABAC,
               v7,
               0x18u,
               (int)v14);
      v15 = *(_DWORD **)(v8 + 8);
      v16 = *((_DWORD *)*v83 - 3);
      if ( v16 == *(v15 - 3) && !memcmp(*v83, v15, v16) )
        result = sub_119C884(v3, "controller.buttonTip.clearHotbar");
LABEL_135:
        v82 = v3;
        v17 = 0xBu % dword_27DABB0;
        v18 = *(_DWORD *)(dword_27DABAC + 4 * (0xBu % dword_27DABB0));
        if ( !v18 )
          goto LABEL_35;
        v19 = *(_DWORD *)v18;
        v20 = *(_DWORD *)(*(_DWORD *)v18 + 12);
        while ( 1 )
          v21 = v20 == 11;
          if ( v20 == 11 )
            v21 = *(_DWORD *)(v19 + 4) == 11;
          if ( v21 )
            break;
          v22 = *(_DWORD *)v19;
          if ( *(_DWORD *)v19 )
          {
            v20 = *(_DWORD *)(v22 + 12);
            v18 = v19;
            v19 = *(_DWORD *)v19;
            if ( *(_DWORD *)(v22 + 12) % (unsigned int)dword_27DABB0 == v17 )
              continue;
          }
        v23 = v18 == 0;
        if ( v18 )
          v18 = *(_DWORD *)v18;
          v23 = v18 == 0;
        if ( v23 )
LABEL_35:
          v24 = operator new(0x10u);
          *v24 = 0;
          v24[1] = 11;
          v24[2] = &unk_28898CC;
          v18 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27DABAC,
                  v17,
                  0xBu,
                  (int)v24);
        v25 = *v83;
        v26 = *(_DWORD **)(v18 + 8);
        v27 = *((_DWORD *)*v83 - 3);
        if ( v27 == *(v26 - 3) && !memcmp(*v83, v26, *((_DWORD *)*v83 - 3)) )
          result = sub_119C884(v82, "controller.buttonTip.craftTake");
        else
          v28 = 0xAu % dword_27DABB0;
          v29 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
          if ( !v29 )
            goto LABEL_51;
          v30 = *(_DWORD *)v29;
          v31 = *(_DWORD *)(*(_DWORD *)v29 + 12);
          while ( 1 )
            v32 = v31 == 10;
            if ( v31 == 10 )
              v32 = *(_DWORD *)(v30 + 4) == 10;
            if ( v32 )
              break;
            v33 = *(_DWORD *)v30;
            if ( *(_DWORD *)v30 )
            {
              v31 = *(_DWORD *)(v33 + 12);
              v29 = v30;
              v30 = *(_DWORD *)v30;
              if ( *(_DWORD *)(v33 + 12) % (unsigned int)dword_27DABB0 == v28 )
                continue;
            }
          v34 = v29 == 0;
          if ( v29 )
            v29 = *(_DWORD *)v29;
            v34 = v29 == 0;
          if ( v34 )
LABEL_51:
            v35 = operator new(0x10u);
            *v35 = 0;
            v35[1] = 10;
            v35[2] = &unk_28898CC;
            v29 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                    (int)&dword_27DABAC,
                    v28,
                    0xAu,
                    (int)v35);
            v25 = *v83;
            v27 = *((_DWORD *)*v83 - 3);
          v36 = *(_DWORD **)(v29 + 8);
          if ( v27 == *(v36 - 3) && !memcmp(v25, v36, v27) )
            goto LABEL_136;
          v37 = 0x1Au % dword_27DABB0;
          v38 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
          if ( !v38 )
            goto LABEL_67;
          v39 = *(_DWORD *)v38;
          v40 = *(_DWORD *)(*(_DWORD *)v38 + 12);
            v41 = v40 == 26;
            if ( v40 == 26 )
              v41 = *(_DWORD *)(v39 + 4) == 26;
            if ( v41 )
            v42 = *(_DWORD *)v39;
            if ( *(_DWORD *)v39 )
              v40 = *(_DWORD *)(v42 + 12);
              v38 = v39;
              v39 = *(_DWORD *)v39;
              if ( *(_DWORD *)(v42 + 12) % (unsigned int)dword_27DABB0 == v37 )
          v43 = v38 == 0;
          if ( v38 )
            v38 = *(_DWORD *)v38;
            v43 = v38 == 0;
          if ( v43 )
LABEL_67:
            v44 = operator new(0x10u);
            *v44 = 0;
            v44[1] = 26;
            v44[2] = &unk_28898CC;
            v38 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                    v37,
                    0x1Au,
                    (int)v44);
          v45 = *(_DWORD **)(v38 + 8);
          if ( v27 == *(v45 - 3) && !memcmp(v25, v45, v27) )
          v46 = 0x18u % dword_27DABB0;
          v47 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
          if ( !v47 )
            goto LABEL_82;
          v48 = *(_DWORD *)v47;
          v49 = *(_DWORD *)(*(_DWORD *)v47 + 12);
            v50 = v49 == 24;
            if ( v49 == 24 )
              v50 = *(_DWORD *)(v48 + 4) == 24;
            if ( v50 )
            v51 = *(_DWORD *)v48;
            if ( *(_DWORD *)v48 )
              v49 = *(_DWORD *)(v51 + 12);
              v47 = v48;
              v48 = *(_DWORD *)v48;
              if ( *(_DWORD *)(v51 + 12) % (unsigned int)dword_27DABB0 == v46 )
          v52 = v47 == 0;
          if ( v47 )
            v47 = *(_DWORD *)v47;
            v52 = v47 == 0;
          if ( v52 )
LABEL_82:
            v53 = operator new(0x10u);
            *v53 = 0;
            v53[1] = 24;
            v53[2] = &unk_28898CC;
            v47 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                    v46,
                    0x18u,
                    (int)v53);
          v54 = *(_DWORD **)(v47 + 8);
          if ( v27 == *(v54 - 3) && !memcmp(v25, v54, v27) )
          v55 = 3u % dword_27DABB0;
          v56 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
          if ( !v56 )
            goto LABEL_97;
          v57 = *(_DWORD *)v56;
          v58 = *(_DWORD *)(*(_DWORD *)v56 + 12);
            v59 = v58 == 3;
            if ( v58 == 3 )
              v59 = *(_DWORD *)(v57 + 4) == 3;
            if ( v59 )
            v60 = *(_DWORD *)v57;
            if ( *(_DWORD *)v57 )
              v58 = *(_DWORD *)(v60 + 12);
              v56 = v57;
              v57 = *(_DWORD *)v57;
              if ( *(_DWORD *)(v60 + 12) % (unsigned int)dword_27DABB0 == v55 )
          v61 = v56 == 0;
          if ( v56 )
            v56 = *(_DWORD *)v56;
            v61 = v56 == 0;
          if ( v61 )
LABEL_97:
            v62 = operator new(0x10u);
            *v62 = 0;
            v62[1] = 3;
            v62[2] = &unk_28898CC;
            v56 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                    v55,
                    3u,
                    (int)v62);
          v63 = *(_DWORD **)(v56 + 8);
          if ( v27 == *(v63 - 3) && !memcmp(v25, v63, v27) )
          v64 = 0x20u % dword_27DABB0;
          v65 = *(_DWORD *)(dword_27DABAC + 4 * (0x20u % dword_27DABB0));
          if ( !v65 )
            goto LABEL_112;
          v66 = *(_DWORD *)v65;
          v67 = *(_DWORD *)(*(_DWORD *)v65 + 12);
            v68 = v67 == 32;
            if ( v67 == 32 )
              v68 = *(_DWORD *)(v66 + 4) == 32;
            if ( v68 )
            v69 = *(_DWORD *)v66;
            if ( *(_DWORD *)v66 )
              v67 = *(_DWORD *)(v69 + 12);
              v65 = v66;
              v66 = *(_DWORD *)v66;
              if ( *(_DWORD *)(v69 + 12) % (unsigned int)dword_27DABB0 == v64 )
          v70 = v65 == 0;
          if ( v65 )
            v65 = *(_DWORD *)v65;
            v70 = v65 == 0;
          if ( v70 )
LABEL_112:
            v71 = operator new(0x10u);
            *v71 = 0;
            v71[1] = 32;
            v71[2] = &unk_28898CC;
            v65 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                    v64,
                    0x20u,
                    (int)v71);
          v72 = *(_DWORD **)(v65 + 8);
          if ( v27 == *(v72 - 3) && !memcmp(v25, v72, v27) )
LABEL_136:
            result = sub_119C884(v82, "controller.buttonTip.take.half");
          else
            v73 = 0x10u % dword_27DABB0;
            v74 = *(_DWORD *)(dword_27DABAC + 4 * (0x10u % dword_27DABB0));
            if ( !v74 )
              goto LABEL_128;
            v75 = *(_DWORD *)v74;
            v76 = *(_DWORD *)(*(_DWORD *)v74 + 12);
            while ( 1 )
              v77 = v76 == 16;
              if ( v76 == 16 )
                v77 = *(_DWORD *)(v75 + 4) == 16;
              if ( v77 )
                break;
              v78 = *(_DWORD *)v75;
              if ( *(_DWORD *)v75 )
              {
                v76 = *(_DWORD *)(v78 + 12);
                v74 = v75;
                v75 = *(_DWORD *)v75;
                if ( *(_DWORD *)(v78 + 12) % (unsigned int)dword_27DABB0 == v73 )
                  continue;
              }
            v79 = v74 == 0;
            if ( v74 )
              v74 = *(_DWORD *)v74;
              v79 = v74 == 0;
            if ( v79 )
LABEL_128:
              v80 = operator new(0x10u);
              *v80 = 0;
              v80[1] = 16;
              v80[2] = &unk_28898CC;
              v74 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                      (int)&dword_27DABAC,
                      v73,
                      0x10u,
                      (int)v80);
              v25 = *v83;
              v27 = *((_DWORD *)*v83 - 3);
            v81 = *(_DWORD **)(v74 + 8);
            if ( v27 == *(v81 - 3) && !memcmp(v25, v81, v27) )
              result = sub_119C884(v82, "hostOption.weather.clear");
            else
              result = ContainerScreenController::_getButtonXDescription((ContainerScreenController *)v82, v2);
  return result;
}


int __fastcall CraftingScreenController::CraftingScreenController(int a1, int a2, char a3, int a4, char a5, int a6)
{
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r0@1
  char v9; // r10@1
  unsigned int *v10; // r0@2
  unsigned int v11; // r1@4
  int v12; // r6@7
  unsigned int *v13; // r1@8
  unsigned int v14; // r0@10
  unsigned int *v15; // r7@14
  unsigned int v16; // r0@16
  __int64 v17; // r0@21
  int v18; // r5@21
  unsigned int *v19; // r1@22
  unsigned int v20; // r0@24
  unsigned int *v21; // r6@28
  unsigned int v22; // r0@30
  int v23; // r6@35
  unsigned int *v24; // r1@36
  unsigned int v25; // r0@38
  unsigned int *v26; // r5@42
  unsigned int v27; // r0@44
  char *v28; // r6@49
  int v29; // r0@49
  int v30; // r0@49
  signed int v31; // r6@51
  _DWORD *v32; // r0@51
  __int64 v33; // r1@51
  char v34; // r1@53
  _DWORD *v36; // [sp+10h] [bp-48h]@51
  __int64 v37; // [sp+18h] [bp-40h]@51
  char v38; // [sp+20h] [bp-38h]@21
  int v39; // [sp+24h] [bp-34h]@21
  int v40; // [sp+28h] [bp-30h]@1
  int v41; // [sp+2Ch] [bp-2Ch]@1

  v6 = a1;
  v40 = *(_DWORD *)a2;
  v7 = a4;
  v8 = *(_DWORD *)(a2 + 4);
  v9 = a3;
  v41 = v8;
  if ( v8 )
  {
    v10 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    }
    else
      ++*v10;
  }
  ContainerScreenController::ContainerScreenController(v6, (int)&v40, 1);
  v12 = v41;
  if ( v41 )
    v13 = (unsigned int *)(v41 + 4);
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
  *(_DWORD *)v6 = &off_26E1738;
  *(_DWORD *)(v6 + 628) = 0;
  *(_DWORD *)(v6 + 632) = 0;
  *(_BYTE *)(v6 + 640) = v9;
  *(_DWORD *)(v6 + 644) = *(_DWORD *)v7;
  *(_DWORD *)(v6 + 648) = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v6 + 652) = *(_DWORD *)(v7 + 8);
  *(_BYTE *)(v6 + 656) = a5;
  *(_BYTE *)(v6 + 657) = 1;
  *(_DWORD *)(v6 + 660) = a6;
  *(_DWORD *)(v6 + 664) = 0;
  ItemInstance::ItemInstance(v6 + 672);
  *(_DWORD *)(v6 + 756) = 0;
  *(_DWORD *)(v6 + 744) = 0;
  *(_BYTE *)(v6 + 764) = 1;
  *(_BYTE *)(v6 + 765) = 0;
  *(_DWORD *)(v6 + 772) = 0;
  sub_119C854((int *)(v6 + 780), (int *)&Util::EMPTY_STRING);
  *(_DWORD *)(v6 + 784) = -1;
  *(_WORD *)(v6 + 788) = 0;
  ItemInstance::ItemInstance(v6 + 792);
  *(_DWORD *)(v6 + 864) = 0;
  *(_BYTE *)(v6 + 872) = 1;
  *(_BYTE *)(v6 + 873) = 0;
  *(_DWORD *)(v6 + 884) = 0;
  *(_DWORD *)(v6 + 900) = 0;
  *(_DWORD *)(v6 + 916) = 0;
  *(_DWORD *)(v6 + 932) = 0;
  *(_DWORD *)(v6 + 948) = 0;
  *(_DWORD *)(v6 + 956) = -1;
  *(_DWORD *)(v6 + 960) = &unk_28898CC;
  *(_DWORD *)(v6 + 964) = -1;
  *(_DWORD *)(v6 + 976) = 0;
  *(_DWORD *)(v6 + 984) = 0;
  *(_WORD *)(v6 + 988) = 257;
  sub_119C884((void **)(v6 + 992), (const char *)&unk_257BC67);
  *(_DWORD *)(v6 + 996) = 0;
  *(_DWORD *)(v6 + 1000) = 0;
  ContainerScreenController::createContainerManagerController<CraftingContainerManagerModel,CraftingContainerManagerController,bool &,bool &,bool &,BlockPos &,char const(&)[1]>(
    (int)&v38,
    v6,
    (_BYTE *)(v6 + 640),
    (_BYTE *)(v6 + 656),
    (_BYTE *)(v6 + 657),
    v6 + 644,
    (const char *)&unk_257BC67);
  v17 = *(_QWORD *)&v38;
  *(_DWORD *)&v38 = 0;
  v39 = 0;
  *(_DWORD *)(v6 + 628) = v17;
  v18 = *(_DWORD *)(v6 + 632);
  *(_DWORD *)(v6 + 632) = HIDWORD(v17);
  if ( v18 )
    v19 = (unsigned int *)(v18 + 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 == 1 )
      v21 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  v23 = v39;
  if ( v39 )
    v24 = (unsigned int *)(v39 + 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 == 1 )
      v26 = (unsigned int *)(v23 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
  CraftingScreenController::_loadPlayerInventoryOptions((CraftingScreenController *)v6);
  v28 = CraftingContainerManagerController::getCraftingInformation(*(CraftingContainerManagerController **)(v6 + 628));
  v29 = *(_DWORD *)(v6 + 768);
  *((_DWORD *)v28 + 1) = v29;
  *((_DWORD *)v28 + 2) = v29;
  v30 = *((_DWORD *)*CraftingContainerManagerController::getSearchString(*(CraftingContainerManagerController **)(v6 + 628))
        - 3);
  if ( v30 )
    LOBYTE(v30) = 1;
  *v28 = v30;
  v28[17] = *(_BYTE *)(v6 + 657);
  v28[18] = *(_BYTE *)(v6 + 988);
  v31 = *(_DWORD *)(v6 + 628);
  v32 = operator new(4u);
  LODWORD(v33) = sub_1174954;
  *v32 = v6;
  HIDWORD(v33) = sub_117493C;
  v36 = v32;
  v37 = v33;
  CraftingContainerManagerController::setOnItemExpandedCallback(v31, (int)&v36);
  if ( (_DWORD)v37 )
    ((void (*)(void))v37)();
  v34 = 0;
  if ( *(_DWORD *)(v6 + 768) == 5 )
    v34 = 1;
  *(_BYTE *)(v6 + 516) = v34;
  CraftingScreenController::_registerEventHandlers((CraftingScreenController *)v6);
  CraftingScreenController::_registerBindings((CraftingScreenController *)v6);
  (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 152))(v6);
  (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 156))(v6);
  return v6;
}


int __fastcall CraftingScreenController::setViewCommand(CraftingScreenController *this, ScreenViewCommand *a2)
{
  int v2; // lr@0
  ScreenViewCommand *v3; // r5@1
  CraftingScreenController *v4; // r4@1
  int v5; // r12@1
  int v6; // r0@1
  void (__fastcall *v7)(__int64 *, char *, signed int); // r3@1
  int v8; // r1@2
  int v9; // r2@4
  void (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // r0@6
  void (__fastcall *v12)(int *, char *, signed int); // r3@6
  int v13; // r1@7
  int v14; // r6@9
  void (__cdecl *v15)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@9
  int v16; // r0@11
  void (__fastcall *v17)(int *, char *, signed int); // r3@11
  int v18; // r1@12
  int v19; // r6@14
  void (__cdecl *v20)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@14
  int v21; // r0@16
  void (__fastcall *v22)(int *, char *, signed int); // r3@16
  int v23; // r1@17
  int v24; // r6@19
  void (__cdecl *v25)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@19
  int v26; // r0@21
  void (__fastcall *v27)(int *, char *, signed int); // r3@21
  int v28; // r1@22
  int v29; // r6@24
  void (__cdecl *v30)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@24
  int result; // r0@26
  void (__fastcall *v32)(__int64 *, char *, signed int); // r3@26
  int v33; // r1@27
  int v34; // r6@29
  int (__cdecl *v35)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r3@29
  __int64 v36; // [sp+0h] [bp-70h]@2
  void (__cdecl *v37)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-68h]@1
  int v38; // [sp+Ch] [bp-64h]@2
  int v39; // [sp+10h] [bp-60h]@7
  int v40; // [sp+14h] [bp-5Ch]@7
  void (__cdecl *v41)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+18h] [bp-58h]@6
  int v42; // [sp+1Ch] [bp-54h]@7
  int v43; // [sp+20h] [bp-50h]@12
  int v44; // [sp+24h] [bp-4Ch]@12
  void (__cdecl *v45)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+28h] [bp-48h]@11
  int v46; // [sp+2Ch] [bp-44h]@12
  int v47; // [sp+30h] [bp-40h]@17
  int v48; // [sp+34h] [bp-3Ch]@17
  void (__cdecl *v49)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+38h] [bp-38h]@16
  int v50; // [sp+3Ch] [bp-34h]@17
  int v51; // [sp+40h] [bp-30h]@22
  int v52; // [sp+44h] [bp-2Ch]@22
  void (__cdecl *v53)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+48h] [bp-28h]@21
  int v54; // [sp+4Ch] [bp-24h]@22
  __int64 v55; // [sp+50h] [bp-20h]@27
  int (__cdecl *v56)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+58h] [bp-18h]@26
  int v57; // [sp+5Ch] [bp-14h]@27

  v3 = a2;
  v4 = this;
  ContainerScreenController::setViewCommand(this, a2);
  v6 = 0;
  v37 = 0;
  v7 = (void (__fastcall *)(__int64 *, char *, signed int))*((_DWORD *)v3 + 6);
  if ( v7 )
  {
    v7(&v36, (char *)v3 + 16, 2);
    v6 = *((_DWORD *)v3 + 7);
    v38 = *((_DWORD *)v3 + 7);
    v8 = *((_DWORD *)v3 + 6);
    v37 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v3 + 6);
    v2 = HIDWORD(v36);
    v5 = v36;
  }
  else
    v8 = 0;
  v9 = (int)v4 + 748;
  v36 = *(_QWORD *)((char *)v4 + 748);
  *(_DWORD *)v9 = v5;
  *(_DWORD *)(v9 + 4) = v2;
  v37 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 189);
  v10 = v37;
  *((_DWORD *)v4 + 189) = v8;
  v38 = *((_DWORD *)v4 + 190);
  *((_DWORD *)v4 + 190) = v6;
  if ( v10 )
    v10(&v36, &v36, 3, v10);
  v11 = 0;
  v41 = 0;
  v12 = (void (__fastcall *)(int *, char *, signed int))*((_DWORD *)v3 + 18);
  if ( v12 )
    v12(&v39, (char *)v3 + 64, 2);
    v11 = *((_DWORD *)v3 + 19);
    v42 = *((_DWORD *)v3 + 19);
    v13 = *((_DWORD *)v3 + 18);
    v41 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v3 + 18);
    v2 = v40;
    v5 = v39;
    v13 = 0;
  v14 = (int)v4 + 876;
  *(_QWORD *)&v39 = *(_QWORD *)((char *)v4 + 876);
  *(_DWORD *)v14 = v5;
  *(_DWORD *)(v14 + 4) = v2;
  v41 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 221);
  v15 = v41;
  *((_DWORD *)v4 + 221) = v13;
  v42 = *((_DWORD *)v4 + 222);
  *((_DWORD *)v4 + 222) = v11;
  if ( v15 )
    v15(&v39, &v39, 3, v15, v36, HIDWORD(v36), v37, v38);
  v16 = 0;
  v45 = 0;
  v17 = (void (__fastcall *)(int *, char *, signed int))*((_DWORD *)v3 + 22);
  if ( v17 )
    v17(&v43, (char *)v3 + 80, 2);
    v16 = *((_DWORD *)v3 + 23);
    v46 = *((_DWORD *)v3 + 23);
    v18 = *((_DWORD *)v3 + 22);
    v45 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v3 + 22);
    v2 = v44;
    v5 = v43;
    v18 = 0;
  v19 = (int)v4 + 892;
  *(_QWORD *)&v43 = *(_QWORD *)((char *)v4 + 892);
  *(_DWORD *)v19 = v5;
  *(_DWORD *)(v19 + 4) = v2;
  v45 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 225);
  v20 = v45;
  *((_DWORD *)v4 + 225) = v18;
  v46 = *((_DWORD *)v4 + 226);
  *((_DWORD *)v4 + 226) = v16;
  if ( v20 )
    v20(&v43, &v43, 3, v20, v36, HIDWORD(v36), v37, v38, v39, v40, v41, v42);
  v21 = 0;
  v49 = 0;
  v22 = (void (__fastcall *)(int *, char *, signed int))*((_DWORD *)v3 + 26);
  if ( v22 )
    v22(&v47, (char *)v3 + 96, 2);
    v21 = *((_DWORD *)v3 + 27);
    v50 = *((_DWORD *)v3 + 27);
    v23 = *((_DWORD *)v3 + 26);
    v49 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v3 + 26);
    v2 = v48;
    v5 = v47;
    v23 = 0;
  v24 = (int)v4 + 908;
  *(_QWORD *)&v47 = *(_QWORD *)((char *)v4 + 908);
  *(_DWORD *)v24 = v5;
  *(_DWORD *)(v24 + 4) = v2;
  v49 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 229);
  v25 = v49;
  *((_DWORD *)v4 + 229) = v23;
  v50 = *((_DWORD *)v4 + 230);
  *((_DWORD *)v4 + 230) = v21;
  if ( v25 )
    v25(&v47, &v47, 3, v25, v36, HIDWORD(v36), v37, v38, v39, v40, v41, v42, v43, v44, v45, v46);
  v26 = 0;
  v53 = 0;
  v27 = (void (__fastcall *)(int *, char *, signed int))*((_DWORD *)v3 + 38);
  if ( v27 )
    v27(&v51, (char *)v3 + 144, 2);
    v26 = *((_DWORD *)v3 + 39);
    v54 = *((_DWORD *)v3 + 39);
    v28 = *((_DWORD *)v3 + 38);
    v53 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v3 + 38);
    v2 = v52;
    v5 = v51;
    v28 = 0;
  v29 = (int)v4 + 924;
  *(_QWORD *)&v51 = *(_QWORD *)((char *)v4 + 924);
  *(_DWORD *)v29 = v5;
  *(_DWORD *)(v29 + 4) = v2;
  v53 = (void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 233);
  v30 = v53;
  *((_DWORD *)v4 + 233) = v28;
  v54 = *((_DWORD *)v4 + 234);
  *((_DWORD *)v4 + 234) = v26;
  if ( v30 )
    v30(&v51, &v51, 3, v30, v36, HIDWORD(v36), v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50);
  result = 0;
  v56 = 0;
  v32 = (void (__fastcall *)(__int64 *, char *, signed int))*((_DWORD *)v3 + 42);
  if ( v32 )
    v32(&v55, (char *)v3 + 160, 2);
    result = *((_DWORD *)v3 + 43);
    v57 = *((_DWORD *)v3 + 43);
    v33 = *((_DWORD *)v3 + 42);
    v56 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v3 + 42);
    v32 = (void (__fastcall *)(__int64 *, char *, signed int))HIDWORD(v55);
    v5 = v55;
    v33 = 0;
  v34 = (int)v4 + 940;
  v55 = *(_QWORD *)((char *)v4 + 940);
  *(_DWORD *)v34 = v5;
  *(_DWORD *)(v34 + 4) = v32;
  v56 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v4 + 237);
  v35 = v56;
  *((_DWORD *)v4 + 237) = v33;
  v57 = *((_DWORD *)v4 + 238);
  *((_DWORD *)v4 + 238) = result;
  if ( v35 )
    result = v35(
               &v55,
               3,
               v35,
               v36,
               HIDWORD(v36),
               v37,
               v38,
               v39,
               v40,
               v41,
               v42,
               v43,
               v44,
               v45,
               v46,
               v47,
               v48,
               v49,
               v50,
               v51,
               v52,
               v53,
               v54);
  return result;
}


signed int __fastcall CraftingScreenController::_shouldEmptyOffhandImageBeVisible(CraftingScreenController *this, int a2)
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
  v3 = 0x20u % dword_27DABB0;
  v4 = *((_DWORD *)this + 157);
  v5 = *(_DWORD *)(dword_27DABAC + 4 * (0x20u % dword_27DABB0));
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  while ( 1 )
  {
    v8 = v7 == 32;
    if ( v7 == 32 )
      v8 = *(_DWORD *)(v6 + 4) == 32;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27DABB0 == v3 )
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
    v11[1] = 32;
    v11[2] = &unk_28898CC;
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27DABAC,
           v3,
           0x20u,
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


int __fastcall CraftingScreenController::_collectionNameToTabIndex(int a1, int **a2)
{
  int **v2; // r8@1
  char v3; // r0@1
  double v4; // r0@3
  void *v5; // r0@3
  void *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r0@6
  void *v9; // r0@7
  int v10; // r0@9
  int v11; // r2@10
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  unsigned int *v19; // r2@25
  signed int v20; // r1@27
  unsigned int *v21; // r2@29
  signed int v22; // r1@31
  int v23; // [sp+24h] [bp-6Ch]@3
  int v24; // [sp+28h] [bp-68h]@3
  int v25; // [sp+2Ch] [bp-64h]@3
  int v26; // [sp+30h] [bp-60h]@3
  int v27; // [sp+34h] [bp-5Ch]@3
  int v28; // [sp+38h] [bp-58h]@3
  int v29; // [sp+3Ch] [bp-54h]@3
  int v30; // [sp+40h] [bp-50h]@3
  int v31; // [sp+44h] [bp-4Ch]@3
  int v32; // [sp+48h] [bp-48h]@3
  char v33; // [sp+4Ch] [bp-44h]@3

  v2 = a2;
  v3 = byte_27DABA4;
  __dmb();
  if ( !(v3 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27DABA4) )
  {
    sub_119C884((void **)&v23, "recipe_construction");
    v24 = 1;
    sub_119C884((void **)&v25, "recipe_nature");
    v26 = 4;
    sub_119C884((void **)&v27, "recipe_items");
    v28 = 3;
    sub_119C884((void **)&v29, "recipe_search");
    v30 = 5;
    sub_119C884((void **)&v31, "recipe_equipment");
    v32 = 2;
    LODWORD(v4) = algn_27DABC8;
    std::_Hashtable<std::string,std::pair<std::string const,InventoryLeftTabIndex>,std::allocator<std::pair<std::string const,InventoryLeftTabIndex>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,InventoryLeftTabIndex> const*>(
      v4,
      (int **)&v33,
      0);
    v5 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v31 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    v6 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v29 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
    v7 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v27 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    v8 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v25 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    v9 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v23 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    _cxa_atexit(std::unordered_map<std::string,InventoryLeftTabIndex,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,InventoryLeftTabIndex>>>::~unordered_map);
    j___cxa_guard_release((unsigned int *)&byte_27DABA4);
  }
  v10 = std::_Hashtable<std::string,std::pair<std::string const,InventoryLeftTabIndex>,std::allocator<std::pair<std::string const,InventoryLeftTabIndex>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
          (unsigned __int64 *)algn_27DABC8,
          v2);
  if ( v10 )
    v11 = *(_DWORD *)(v10 + 8);
  else
    v11 = 0;
  return v11;
}


void __fastcall CraftingScreenController::_savePlayerInventoryOptions(CraftingScreenController *this)
{
  CraftingScreenController *v1; // r4@1
  int *v2; // r0@1
  int v3; // r0@1
  unsigned int v4; // r1@3
  int v5; // r0@3
  __int64 v6; // r2@3
  int v7; // r12@3
  char v8; // r4@3
  void *v9; // r0@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  int v12; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  v2 = (int *)CraftingContainerManagerController::getSearchString(*((CraftingContainerManagerController **)this + 157));
  sub_119C854(&v12, v2);
  v3 = *((_DWORD *)v1 + 165);
  if ( v3 == 1 )
  {
    MinecraftScreenModel::savePlayerInventoryOptions(
      *((_DWORD *)v1 + 106),
      &v12,
      *((_QWORD *)v1 + 96),
      *((_QWORD *)v1 + 96) >> 32,
      *((_BYTE *)v1 + 657),
      *((_BYTE *)v1 + 989),
      *((_BYTE *)v1 + 988));
  }
  else if ( !v3 )
    v4 = *((_WORD *)v1 + 494);
    v5 = *((_DWORD *)v1 + 106);
    v6 = *((_QWORD *)v1 + 96);
    v7 = *((_BYTE *)v1 + 657);
    v8 = 0;
    if ( v4 > 0xFF )
      v8 = 1;
    MinecraftScreenModel::savePlayerInventoryOptions(v5, &v12, v6, SHIDWORD(v6), v7, (_BYTE)v4 != 0, v8);
  v9 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
}


int __fastcall CraftingScreenController::addStaticScreenVars(CraftingScreenController *this, Json::Value *a2, bool a3)
{
  CraftingScreenController *v3; // r5@1
  Json::Value *v4; // r4@1
  int v5; // r6@1
  int v6; // r0@1
  int v7; // r6@1
  int v8; // r0@1
  int v9; // r6@1
  int v10; // r0@1
  int v11; // r6@1
  int v12; // r0@1
  int v13; // r6@1
  int v14; // r0@1
  int v16; // [sp+0h] [bp-68h]@1
  char v17; // [sp+10h] [bp-58h]@1
  char v18; // [sp+20h] [bp-48h]@1
  char v19; // [sp+30h] [bp-38h]@1
  char v20; // [sp+40h] [bp-28h]@1

  v3 = this;
  v4 = a2;
  CraftingScreenController::addStaticScreenVars(a2, (Json::Value *)*((_BYTE *)this + 656), a3);
  v5 = Json::Value::operator[](v4, "$construction_precache_count");
  v6 = ClientInstanceScreenModel::getCreativeItemCount(*((_DWORD *)v3 + 106), 1);
  Json::Value::Value((Json::Value *)&v20, v6);
  Json::Value::operator=(v5, (const Json::Value *)&v20);
  Json::Value::~Value((Json::Value *)&v20);
  v7 = Json::Value::operator[](v4, "$nature_precache_count");
  v8 = ClientInstanceScreenModel::getCreativeItemCount(*((_DWORD *)v3 + 106), 2);
  Json::Value::Value((Json::Value *)&v19, v8);
  Json::Value::operator=(v7, (const Json::Value *)&v19);
  Json::Value::~Value((Json::Value *)&v19);
  v9 = Json::Value::operator[](v4, "$equipment_precache_count");
  v10 = ClientInstanceScreenModel::getCreativeItemCount(*((_DWORD *)v3 + 106), 3);
  Json::Value::Value((Json::Value *)&v18, v10);
  Json::Value::operator=(v9, (const Json::Value *)&v18);
  Json::Value::~Value((Json::Value *)&v18);
  v11 = Json::Value::operator[](v4, "$items_precache_count");
  v12 = ClientInstanceScreenModel::getCreativeItemCount(*((_DWORD *)v3 + 106), 4);
  Json::Value::Value((Json::Value *)&v17, v12);
  Json::Value::operator=(v11, (const Json::Value *)&v17);
  Json::Value::~Value((Json::Value *)&v17);
  v13 = Json::Value::operator[](v4, "$search_precache_count");
  v14 = ClientInstanceScreenModel::getCreativeItemCount(*((_DWORD *)v3 + 106), 0);
  Json::Value::Value((Json::Value *)&v16, v14);
  Json::Value::operator=(v13, (const Json::Value *)&v16);
  Json::Value::~Value((Json::Value *)&v16);
  return ScreenController::addStaticScreenVars(v3, v4);
}


int __fastcall CraftingScreenController::_handleSplit(MinecraftScreenController *a1, const void **a2, int a3)
{
  int v3; // r6@1
  const void **v4; // r7@1
  MinecraftScreenController *v5; // r4@1
  _DWORD *v6; // r0@3
  size_t v7; // r2@3
  int result; // r0@4
  bool v9; // zf@4
  int v10; // r6@8
  void *v11; // r0@8
  int v12; // r0@9
  int v13; // r4@27
  unsigned int *v14; // r1@28
  unsigned int *v15; // r5@35
  unsigned int *v16; // r2@43
  signed int v17; // r1@45
  char v18; // [sp+8h] [bp-108h]@15
  int v19; // [sp+10h] [bp-100h]@19
  void *v20; // [sp+2Ch] [bp-E4h]@17
  void *v21; // [sp+3Ch] [bp-D4h]@15
  char v22; // [sp+50h] [bp-C0h]@15
  int v23; // [sp+58h] [bp-B8h]@25
  void *v24; // [sp+74h] [bp-9Ch]@23
  void *v25; // [sp+84h] [bp-8Ch]@21
  char v26; // [sp+98h] [bp-78h]@9
  int v27; // [sp+A0h] [bp-70h]@13
  void *v28; // [sp+BCh] [bp-54h]@11
  void *ptr; // [sp+CCh] [bp-44h]@9
  int v30; // [sp+E4h] [bp-2Ch]@8
  ContainerController *v31; // [sp+E8h] [bp-28h]@8
  int v32; // [sp+ECh] [bp-24h]@27

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( MinecraftScreenController::getInputMode(a1) == 2 && *((_BYTE *)v5 + 656) )
  {
    v6 = (_DWORD *)*((_DWORD *)v5 + 195);
    v7 = *(v6 - 3);
    if ( v7 != *((_DWORD *)*v4 - 3) )
      goto LABEL_53;
    result = memcmp(v6, *v4, v7);
    v9 = result == 0;
    if ( !result )
    {
      result = *((_DWORD *)v5 + 196);
      v9 = result == v3;
    }
    if ( !v9 )
LABEL_53:
      (*(void (__cdecl **)(_DWORD))(**((_DWORD **)v5 + 157) + 36))(*((_DWORD *)v5 + 157));
      result = CraftingContainerManagerController::isCreativeContainer(*((_DWORD *)v5 + 157), (const void **)v5 + 195);
      if ( !result )
      {
        v10 = *((_DWORD *)v5 + 157);
        sub_119C854(&v30, (int *)v5 + 195);
        ContainerManagerController::getContainerController((int)&v31, v10, (int **)&v30);
        v11 = (void *)(v30 - 12);
        if ( (int *)(v30 - 12) != &dword_28898C0 )
        {
          v16 = (unsigned int *)(v30 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
          }
          else
            v17 = (*v16)--;
          if ( v17 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v11);
        }
        v12 = ContainerController::getItem(v31, *((_DWORD *)v5 + 196));
        ContainerController::removeItem(
          (ContainerController *)&v26,
          (int)v31,
          *((_DWORD *)v5 + 196),
          *(_BYTE *)(v12 + 14));
        if ( ptr )
          operator delete(ptr);
        if ( v28 )
          operator delete(v28);
        if ( v27 )
          (*(void (__cdecl **)(int))(*(_DWORD *)v27 + 4))(v27);
        v27 = 0;
        ItemGroup::getItemStack((ItemGroup *)&v18, (int)v5 + 792);
        ContainerItemStack::ContainerItemStack((ContainerItemStack *)&v22, (const ItemInstance *)&v18);
        if ( v21 )
          operator delete(v21);
        if ( v20 )
          operator delete(v20);
        if ( v19 )
          (*(void (__cdecl **)(int))(*(_DWORD *)v19 + 4))(v19);
        v19 = 0;
        ContainerController::setItem((int)v31, *((_DWORD *)v5 + 196), (int)&v22, 0, 1);
        if ( v25 )
          operator delete(v25);
        if ( v24 )
          operator delete(v24);
        result = v23;
        if ( v23 )
          result = (*(int (**)(void))(*(_DWORD *)v23 + 4))();
        v13 = v32;
        if ( v32 )
          v14 = (unsigned int *)(v32 + 4);
              result = __ldrex(v14);
            while ( __strex(result - 1, v14) );
            result = (*v14)--;
          if ( result == 1 )
            v15 = (unsigned int *)(v13 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = __ldrex(v15);
              while ( __strex(result - 1, v15) );
            }
            else
              result = (*v15)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
      }
  }
  else
    result = j_j_j__ZN25ContainerScreenController12_handleSplitERKSsi((int)v5);
  return result;
}


void __fastcall CraftingScreenController::_changeLeftSideInventoryTab(CraftingScreenController *this, int a2)
{
  CraftingScreenController::_changeLeftSideInventoryTab(this, a2);
}


void __fastcall CraftingScreenController::_registerBindings(CraftingScreenController *this)
{
  CraftingScreenController *v1; // r9@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  int v8; // r10@9
  int v9; // r0@9
  int v10; // r5@10
  int v11; // r7@10
  bool v12; // zf@11
  int v13; // r4@14
  bool v14; // zf@17
  _DWORD *v15; // r0@21
  _BYTE *v16; // r5@22
  size_t v17; // r0@22
  int i; // r2@22
  int v19; // t1@23
  _DWORD *v20; // r0@24
  __int64 v21; // r1@24
  __int64 v22; // r1@24
  int v23; // r10@28
  int v24; // r0@28
  int v25; // r5@29
  int v26; // r7@29
  bool v27; // zf@30
  int v28; // r4@33
  bool v29; // zf@36
  _DWORD *v30; // r0@40
  _BYTE *v31; // r5@41
  size_t v32; // r0@41
  int j; // r2@41
  int v34; // t1@42
  _DWORD *v35; // r0@43
  __int64 v36; // r1@43
  __int64 v37; // r1@43
  _DWORD *v38; // r0@47
  __int64 v39; // r1@47
  __int64 v40; // r1@47
  _DWORD *v41; // r0@51
  __int64 v42; // r1@51
  __int64 v43; // r1@51
  _DWORD *v44; // r0@55
  __int64 v45; // r1@55
  __int64 v46; // r1@55
  _DWORD *v47; // r0@59
  __int64 v48; // r1@59
  __int64 v49; // r1@59
  _DWORD *v50; // r0@63
  __int64 v51; // r1@63
  __int64 v52; // r1@63
  _DWORD *v53; // r0@67
  __int64 v54; // r1@67
  __int64 v55; // r1@67
  _DWORD *v56; // r0@71
  __int64 v57; // r1@71
  __int64 v58; // r1@71
  _DWORD *v59; // r0@75
  __int64 v60; // r1@75
  __int64 v61; // r1@75
  _DWORD *v62; // r0@79
  __int64 v63; // r1@79
  __int64 v64; // r1@79
  _DWORD *v65; // r0@83
  __int64 v66; // r1@83
  __int64 v67; // r1@83
  _DWORD *v68; // r0@87
  __int64 v69; // r1@87
  __int64 v70; // r1@87
  _DWORD *v71; // r0@91
  __int64 v72; // r1@91
  __int64 v73; // r1@91
  _DWORD *v74; // r0@95
  __int64 v75; // r1@95
  __int64 v76; // r1@95
  _DWORD *v77; // r0@99
  __int64 v78; // r1@99
  __int64 v79; // r1@99
  _DWORD *v80; // r0@103
  __int64 v81; // r1@103
  __int64 v82; // r1@103
  void *v83; // [sp+4h] [bp-2D4h]@103
  __int64 v84; // [sp+Ch] [bp-2CCh]@103
  _DWORD *v85; // [sp+14h] [bp-2C4h]@103
  __int64 v86; // [sp+1Ch] [bp-2BCh]@103
  int v87; // [sp+24h] [bp-2B4h]@103
  void *v88; // [sp+28h] [bp-2B0h]@99
  __int64 v89; // [sp+30h] [bp-2A8h]@99
  _DWORD *v90; // [sp+38h] [bp-2A0h]@99
  __int64 v91; // [sp+40h] [bp-298h]@99
  int v92; // [sp+48h] [bp-290h]@99
  void *v93; // [sp+4Ch] [bp-28Ch]@95
  __int64 v94; // [sp+54h] [bp-284h]@95
  _DWORD *v95; // [sp+5Ch] [bp-27Ch]@95
  __int64 v96; // [sp+64h] [bp-274h]@95
  int v97; // [sp+6Ch] [bp-26Ch]@95
  void *v98; // [sp+70h] [bp-268h]@91
  __int64 v99; // [sp+78h] [bp-260h]@91
  _DWORD *v100; // [sp+80h] [bp-258h]@91
  __int64 v101; // [sp+88h] [bp-250h]@91
  int v102; // [sp+90h] [bp-248h]@91
  void *v103; // [sp+94h] [bp-244h]@87
  __int64 v104; // [sp+9Ch] [bp-23Ch]@87
  _DWORD *v105; // [sp+A4h] [bp-234h]@87
  __int64 v106; // [sp+ACh] [bp-22Ch]@87
  int v107; // [sp+B4h] [bp-224h]@87
  void *v108; // [sp+B8h] [bp-220h]@83
  __int64 v109; // [sp+C0h] [bp-218h]@83
  _DWORD *v110; // [sp+C8h] [bp-210h]@83
  __int64 v111; // [sp+D0h] [bp-208h]@83
  int v112; // [sp+D8h] [bp-200h]@83
  void *v113; // [sp+DCh] [bp-1FCh]@79
  __int64 v114; // [sp+E4h] [bp-1F4h]@79
  _DWORD *v115; // [sp+ECh] [bp-1ECh]@79
  __int64 v116; // [sp+F4h] [bp-1E4h]@79
  int v117; // [sp+FCh] [bp-1DCh]@79
  void *v118; // [sp+100h] [bp-1D8h]@75
  __int64 v119; // [sp+108h] [bp-1D0h]@75
  _DWORD *v120; // [sp+110h] [bp-1C8h]@75
  __int64 v121; // [sp+118h] [bp-1C0h]@75
  int v122; // [sp+120h] [bp-1B8h]@75
  void *v123; // [sp+124h] [bp-1B4h]@71
  __int64 v124; // [sp+12Ch] [bp-1ACh]@71
  _DWORD *v125; // [sp+134h] [bp-1A4h]@71
  __int64 v126; // [sp+13Ch] [bp-19Ch]@71
  int v127; // [sp+144h] [bp-194h]@71
  void *v128; // [sp+148h] [bp-190h]@67
  __int64 v129; // [sp+150h] [bp-188h]@67
  _DWORD *v130; // [sp+158h] [bp-180h]@67
  __int64 v131; // [sp+160h] [bp-178h]@67
  int v132; // [sp+168h] [bp-170h]@67
  void *v133; // [sp+16Ch] [bp-16Ch]@63
  __int64 v134; // [sp+174h] [bp-164h]@63
  _DWORD *v135; // [sp+17Ch] [bp-15Ch]@63
  __int64 v136; // [sp+184h] [bp-154h]@63
  int v137; // [sp+18Ch] [bp-14Ch]@63
  void *v138; // [sp+190h] [bp-148h]@59
  __int64 v139; // [sp+198h] [bp-140h]@59
  _DWORD *v140; // [sp+1A0h] [bp-138h]@59
  __int64 v141; // [sp+1A8h] [bp-130h]@59
  int v142; // [sp+1B0h] [bp-128h]@59
  void *v143; // [sp+1B4h] [bp-124h]@55
  __int64 v144; // [sp+1BCh] [bp-11Ch]@55
  _DWORD *v145; // [sp+1C4h] [bp-114h]@55
  __int64 v146; // [sp+1CCh] [bp-10Ch]@55
  int v147; // [sp+1D4h] [bp-104h]@55
  void *v148; // [sp+1D8h] [bp-100h]@51
  __int64 v149; // [sp+1E0h] [bp-F8h]@51
  _DWORD *v150; // [sp+1E8h] [bp-F0h]@51
  __int64 v151; // [sp+1F0h] [bp-E8h]@51
  int v152; // [sp+1F8h] [bp-E0h]@51
  void *v153; // [sp+1FCh] [bp-DCh]@47
  __int64 v154; // [sp+204h] [bp-D4h]@47
  _DWORD *v155; // [sp+20Ch] [bp-CCh]@47
  __int64 v156; // [sp+214h] [bp-C4h]@47
  int v157; // [sp+21Ch] [bp-BCh]@47
  void *v158; // [sp+220h] [bp-B8h]@43
  __int64 v159; // [sp+228h] [bp-B0h]@43
  _DWORD *v160; // [sp+230h] [bp-A8h]@43
  __int64 v161; // [sp+238h] [bp-A0h]@43
  int v162; // [sp+240h] [bp-98h]@43
  int v163; // [sp+244h] [bp-94h]@43
  void *v164; // [sp+248h] [bp-90h]@24
  __int64 v165; // [sp+250h] [bp-88h]@24
  _DWORD *v166; // [sp+258h] [bp-80h]@24
  __int64 v167; // [sp+260h] [bp-78h]@24
  int v168; // [sp+268h] [bp-70h]@24
  int v169; // [sp+26Ch] [bp-6Ch]@24
  void *v170; // [sp+270h] [bp-68h]@5
  __int64 v171; // [sp+278h] [bp-60h]@5
  _DWORD *v172; // [sp+280h] [bp-58h]@5
  __int64 v173; // [sp+288h] [bp-50h]@5
  int v174; // [sp+290h] [bp-48h]@5
  void *v175; // [sp+294h] [bp-44h]@1
  __int64 v176; // [sp+29Ch] [bp-3Ch]@1
  _DWORD *v177; // [sp+2A4h] [bp-34h]@1
  __int64 v178; // [sp+2ACh] [bp-2Ch]@1
  int v179; // [sp+2B4h] [bp-24h]@1

  v1 = this;
  v179 = 1159634637;
  v2 = operator new(4u);
  LODWORD(v3) = sub_117B802;
  *v2 = v1;
  HIDWORD(v3) = sub_117B7F2;
  v177 = v2;
  v178 = v3;
  v175 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v176 = v4;
  ScreenController::bindBool((int)v1, &v179, (int)&v177, (int)&v175);
  if ( (_DWORD)v176 )
    ((void (*)(void))v176)();
  if ( (_DWORD)v178 )
    ((void (*)(void))v178)();
  StringHash::StringHash<char [28]>(&v174, (int)"#recipe_book_toggle_visible");
  v5 = operator new(4u);
  LODWORD(v6) = sub_117B84E;
  *v5 = v1;
  HIDWORD(v6) = sub_117B838;
  v172 = v5;
  v173 = v6;
  v170 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v171 = v7;
  ScreenController::bindBool((int)v1, &v174, (int)&v172, (int)&v170);
  if ( (_DWORD)v171 )
    ((void (*)(void))v171)();
  if ( (_DWORD)v173 )
    ((void (*)(void))v173)();
  v8 = 3u % dword_27DABB0;
  v9 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
  if ( !v9 )
    goto LABEL_21;
  v10 = *(_DWORD *)v9;
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
  while ( 1 )
  {
    v12 = v11 == 3;
    if ( v11 == 3 )
      v12 = *(_DWORD *)(v10 + 4) == 3;
    if ( v12 )
      break;
    v13 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
    {
      v11 = *(_DWORD *)(v13 + 12);
      v9 = v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27DABB0 == v8 )
        continue;
    }
  }
  v14 = v9 == 0;
  if ( v9 )
    v9 = *(_DWORD *)v9;
    v14 = v9 == 0;
  if ( v14 )
LABEL_21:
    v15 = operator new(0x10u);
    *v15 = 0;
    v15[1] = 3;
    v15[2] = &unk_28898CC;
    v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27DABAC,
           v8,
           3u,
           (int)v15);
  v16 = *(_BYTE **)(v9 + 8);
  v17 = strlen(*(const char **)(v9 + 8));
  for ( i = -2128831035; v17; i = 16777619 * (i ^ v19) )
    v19 = *v16++;
    --v17;
  v169 = i;
  StringHash::StringHash<char [27]>(&v168, (int)"#empty_armor_image_visible");
  v20 = operator new(4u);
  LODWORD(v21) = sub_117B88C;
  *v20 = v1;
  HIDWORD(v21) = sub_117B884;
  v166 = v20;
  v167 = v21;
  v164 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v165 = v22;
  ScreenController::bindBoolForCollection((int)v1, &v169, &v168, (int)&v166, (int)&v164);
  if ( (_DWORD)v165 )
    ((void (*)(void))v165)();
  if ( (_DWORD)v167 )
    ((void (*)(void))v167)();
  v23 = 0x20u % dword_27DABB0;
  v24 = *(_DWORD *)(dword_27DABAC + 4 * (0x20u % dword_27DABB0));
  if ( !v24 )
    goto LABEL_40;
  v25 = *(_DWORD *)v24;
  v26 = *(_DWORD *)(*(_DWORD *)v24 + 12);
    v27 = v26 == 32;
    if ( v26 == 32 )
      v27 = *(_DWORD *)(v25 + 4) == 32;
    if ( v27 )
    v28 = *(_DWORD *)v25;
    if ( *(_DWORD *)v25 )
      v26 = *(_DWORD *)(v28 + 12);
      v24 = v25;
      v25 = *(_DWORD *)v25;
      if ( *(_DWORD *)(v28 + 12) % (unsigned int)dword_27DABB0 == v23 )
  v29 = v24 == 0;
  if ( v24 )
    v24 = *(_DWORD *)v24;
    v29 = v24 == 0;
  if ( v29 )
LABEL_40:
    v30 = operator new(0x10u);
    *v30 = 0;
    v30[1] = 32;
    v30[2] = &unk_28898CC;
    v24 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27DABAC,
            v23,
            0x20u,
            (int)v30);
  v31 = *(_BYTE **)(v24 + 8);
  v32 = strlen(*(const char **)(v24 + 8));
  for ( j = -2128831035; v32; j = 16777619 * (j ^ v34) )
    v34 = *v31++;
    --v32;
  v163 = j;
  StringHash::StringHash<char [29]>(&v162, (int)"#empty_offhand_image_visible");
  v35 = operator new(4u);
  LODWORD(v36) = sub_117B8CA;
  *v35 = v1;
  HIDWORD(v36) = sub_117B8C2;
  v160 = v35;
  v161 = v36;
  v158 = operator new(1u);
  LODWORD(v37) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v37) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v159 = v37;
  ScreenController::bindBoolForCollection((int)v1, &v163, &v162, (int)&v160, (int)&v158);
  if ( (_DWORD)v159 )
    ((void (*)(void))v159)();
  if ( (_DWORD)v161 )
    ((void (*)(void))v161)();
  v157 = 1576164227;
  v38 = operator new(4u);
  LODWORD(v39) = sub_117B91A;
  *v38 = v1;
  HIDWORD(v39) = sub_117B900;
  v155 = v38;
  v156 = v39;
  v153 = operator new(1u);
  LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v40) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v154 = v40;
  ScreenController::bindString((int)v1, &v157, (int)&v155, (int)&v153);
  if ( (_DWORD)v154 )
    ((void (*)(void))v154)();
  if ( (_DWORD)v156 )
    ((void (*)(void))v156)();
  v152 = -2005014248;
  v41 = operator new(4u);
  LODWORD(v42) = sub_117B95C;
  *v41 = v1;
  HIDWORD(v42) = sub_117B950;
  v150 = v41;
  v151 = v42;
  v148 = operator new(1u);
  LODWORD(v43) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v43) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v149 = v43;
  ScreenController::bindBool((int)v1, &v152, (int)&v150, (int)&v148);
  if ( (_DWORD)v149 )
    ((void (*)(void))v149)();
  if ( (_DWORD)v151 )
    ((void (*)(void))v151)();
  v147 = -1301471166;
  v44 = operator new(4u);
  LODWORD(v45) = sub_117B9A2;
  *v44 = v1;
  HIDWORD(v45) = sub_117B992;
  v145 = v44;
  v146 = v45;
  v143 = operator new(1u);
  LODWORD(v46) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v46) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v144 = v46;
  ScreenController::bindBool((int)v1, &v147, (int)&v145, (int)&v143);
  if ( (_DWORD)v144 )
    ((void (*)(void))v144)();
  if ( (_DWORD)v146 )
    ((void (*)(void))v146)();
  StringHash::StringHash<char [36]>(&v142, (int)"#button_thumbstick_left_description");
  v47 = operator new(4u);
  LODWORD(v48) = sub_117B9E4;
  *v47 = v1;
  HIDWORD(v48) = sub_117B9D8;
  v140 = v47;
  v141 = v48;
  v138 = operator new(1u);
  LODWORD(v49) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v49) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v139 = v49;
  ScreenController::bindString((int)v1, &v142, (int)&v140, (int)&v138);
  if ( (_DWORD)v139 )
    ((void (*)(void))v139)();
  if ( (_DWORD)v141 )
    ((void (*)(void))v141)();
  v137 = 632859782;
  v50 = operator new(4u);
  LODWORD(v51) = sub_117BA2C;
  *v50 = v1;
  HIDWORD(v51) = sub_117BA1A;
  v135 = v50;
  v136 = v51;
  v133 = operator new(1u);
  LODWORD(v52) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v52) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v134 = v52;
  ScreenController::bindBool((int)v1, &v137, (int)&v135, (int)&v133);
  if ( (_DWORD)v134 )
    ((void (*)(void))v134)();
  if ( (_DWORD)v136 )
    ((void (*)(void))v136)();
  StringHash::StringHash<char [26]>(&v132, (int)"#gamepad_helper_x_visible");
  v53 = operator new(4u);
  LODWORD(v54) = sub_117BA9A;
  *v53 = v1;
  HIDWORD(v54) = sub_117BA62;
  v130 = v53;
  v131 = v54;
  v128 = operator new(1u);
  LODWORD(v55) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v55) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v129 = v55;
  ScreenController::bindBool((int)v1, &v132, (int)&v130, (int)&v128);
  if ( (_DWORD)v129 )
    ((void (*)(void))v129)();
  if ( (_DWORD)v131 )
    ((void (*)(void))v131)();
  v127 = 1863624728;
  v56 = operator new(4u);
  LODWORD(v57) = sub_117BB04;
  *v56 = v1;
  HIDWORD(v57) = sub_117BAD0;
  v125 = v56;
  v126 = v57;
  v123 = operator new(1u);
  LODWORD(v58) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v58) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v124 = v58;
  ScreenController::bindString((int)v1, &v127, (int)&v125, (int)&v123);
  if ( (_DWORD)v124 )
    ((void (*)(void))v124)();
  if ( (_DWORD)v126 )
    ((void (*)(void))v126)();
  v122 = -1581618915;
  v59 = operator new(4u);
  LODWORD(v60) = sub_117BBD4;
  *v59 = v1;
  HIDWORD(v60) = sub_117BB3C;
  v120 = v59;
  v121 = v60;
  v118 = operator new(1u);
  LODWORD(v61) = ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v61) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v119 = v61;
  ScreenController::bindStringForAnyCollection((int)v1, &v122, (int)&v120, (int)&v118);
  if ( (_DWORD)v119 )
    ((void (*)(void))v119)();
  if ( (_DWORD)v121 )
    ((void (*)(void))v121)();
  v117 = 281887494;
  v62 = operator new(4u);
  LODWORD(v63) = sub_117BC4E;
  *v62 = v1;
  HIDWORD(v63) = sub_117BC0A;
  v115 = v62;
  v116 = v63;
  v113 = operator new(1u);
  LODWORD(v64) = ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  HIDWORD(v64) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v114 = v64;
  ScreenController::bindBoolForAnyCollection((int)v1, &v117, (int)&v115, (int)&v113);
  if ( (_DWORD)v114 )
    ((void (*)(void))v114)();
  if ( (_DWORD)v116 )
    ((void (*)(void))v116)();
  StringHash::StringHash<char [35]>(&v112, (int)"#container_item_background_texture");
  v65 = operator new(4u);
  LODWORD(v66) = sub_117C044;
  *v65 = v1;
  HIDWORD(v66) = sub_117BC84;
  v110 = v65;
  v111 = v66;
  v108 = operator new(1u);
  LODWORD(v67) = ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v67) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v109 = v67;
  ScreenController::bindStringForAnyCollection((int)v1, &v112, (int)&v110, (int)&v108);
  if ( (_DWORD)v109 )
    ((void (*)(void))v109)();
  if ( (_DWORD)v111 )
    ((void (*)(void))v111)();
  StringHash::StringHash<char [27]>(&v107, (int)"#container_item_background");
  v68 = operator new(4u);
  LODWORD(v69) = sub_117C37C;
  *v68 = v1;
  HIDWORD(v69) = sub_117C07C;
  v105 = v68;
  v106 = v69;
  v103 = operator new(1u);
  LODWORD(v70) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindIntForAnyCollectionERK10StringHashRKSt8functionIFiRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v70) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController23bindIntForAnyCollectionERK10StringHashRKSt8functionIFiS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v104 = v70;
  ScreenController::bindIntForAnyCollection((int)v1, &v107, (int)&v105, (int)&v103);
  if ( (_DWORD)v104 )
    ((void (*)(void))v104)();
  if ( (_DWORD)v106 )
    ((void (*)(void))v106)();
  StringHash::StringHash<char [25]>(&v102, (int)"#container_item_modifier");
  v71 = operator new(4u);
  LODWORD(v72) = sub_117C3BE;
  *v71 = v1;
  HIDWORD(v72) = sub_117C3B2;
  v100 = v71;
  v101 = v72;
  v98 = operator new(1u);
  LODWORD(v73) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindIntForAnyCollectionERK10StringHashRKSt8functionIFiRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v73) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController23bindIntForAnyCollectionERK10StringHashRKSt8functionIFiS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v99 = v73;
  ScreenController::bindIntForAnyCollection((int)v1, &v102, (int)&v100, (int)&v98);
  if ( (_DWORD)v99 )
    ((void (*)(void))v99)();
  if ( (_DWORD)v101 )
    ((void (*)(void))v101)();
  StringHash::StringHash<char [24]>(&v97, (int)"#recipe_craftable_count");
  v74 = operator new(4u);
  LODWORD(v75) = sub_117C432;
  *v74 = v1;
  HIDWORD(v75) = sub_117C3F4;
  v95 = v74;
  v96 = v75;
  v93 = operator new(1u);
  LODWORD(v76) = ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v76) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v94 = v76;
  ScreenController::bindStringForAnyCollection((int)v1, &v97, (int)&v95, (int)&v93);
  if ( (_DWORD)v94 )
    ((void (*)(void))v94)();
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  StringHash::StringHash<char [23]>(&v92, (int)"#search_tab_label_text");
  v77 = operator new(4u);
  LODWORD(v78) = sub_117C4AC;
  *v77 = v1;
  HIDWORD(v78) = sub_117C468;
  v90 = v77;
  v91 = v78;
  v88 = operator new(1u);
  LODWORD(v79) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v79) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v89 = v79;
  ScreenController::bindString((int)v1, &v92, (int)&v90, (int)&v88);
  if ( (_DWORD)v89 )
    ((void (*)(void))v89)();
  if ( (_DWORD)v91 )
    ((void (*)(void))v91)();
  v87 = 1472871081;
  v80 = operator new(4u);
  LODWORD(v81) = sub_117C522;
  *v80 = v1;
  HIDWORD(v81) = sub_117C4E2;
  v85 = v80;
  v86 = v81;
  v83 = operator new(1u);
  LODWORD(v82) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v82) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v84 = v82;
  ScreenController::bindBool((int)v1, &v87, (int)&v85, (int)&v83);
  if ( (_DWORD)v84 )
    ((void (*)(void))v84)();
  if ( (_DWORD)v86 )
    ((void (*)(void))v86)();
}


signed int __fastcall CraftingScreenController::_isStillValid(CraftingScreenController *this)
{
  CraftingScreenController *v1; // r4@1
  CraftingContainerManagerController *v2; // r5@2
  int v3; // r0@2
  signed int result; // r0@3

  v1 = this;
  if ( MinecraftScreenModel::isPlayerValid(*((MinecraftScreenModel **)this + 106)) != 1
    || (v2 = (CraftingContainerManagerController *)*((_DWORD *)v1 + 157),
        v3 = ClientInstanceScreenModel::getPickRange(*((ClientInstanceScreenModel **)v1 + 106)),
        CraftingContainerManagerController::isValid(v2, *(float *)&v3) != 1) )
  {
    result = 0;
  }
  else
    result = ContainerScreenController::_isStillValid(v1);
  return result;
}


int __fastcall CraftingScreenController::_canStartSplit(MinecraftScreenController *a1, const void **a2, int a3)
{
  int v3; // r5@1
  const void **v4; // r4@1
  MinecraftScreenController *v5; // r6@1
  int v6; // r0@3
  bool v7; // zf@3
  int result; // r0@7
  bool v9; // zf@10

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( MinecraftScreenController::getInputMode(a1) == 2 && *((_BYTE *)v5 + 656) )
  {
    v6 = *(_DWORD *)(*((_DWORD *)v5 + 195) - 12);
    v7 = v6 == 0;
    if ( v6 )
      v7 = (*((_BYTE *)v5 + 468) & 2) == 0;
    if ( v7 )
    {
      result = 0;
    }
    else
      v9 = v3 == -1;
      if ( v3 != -1 )
        v9 = *((_DWORD *)v5 + 115) == -1;
      if ( !v9 )
        result = sub_119C9E8(v4, (const char *)&unk_257BC67) != 0;
  }
  else
    result = ContainerScreenController::_canStartSplit(v5, v4, v3);
  return result;
}


void __fastcall CraftingScreenController::_changeLeftSideInventoryTab(CraftingScreenController *this, int a2)
{
  int v2; // r5@1
  CraftingScreenController *v3; // r4@1
  int v4; // r7@3
  void *v5; // r0@3
  int v6; // r0@7
  int v7; // r0@9
  signed int *v8; // r6@9
  signed int v9; // r1@9
  void **v10; // r0@16
  char *v11; // r0@17
  void *v12; // r0@19
  unsigned int *v13; // r2@21
  signed int v14; // r1@23
  unsigned int *v15; // r2@25
  signed int v16; // r1@27
  int v17; // [sp+4h] [bp-2Ch]@16
  int v18; // [sp+8h] [bp-28h]@16
  char v19; // [sp+Dh] [bp-23h]@16
  int v20; // [sp+14h] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  if ( a2 )
  {
    sub_119C884((void **)&v20, "left_panel");
    if ( !*((_DWORD *)v3 + 229) )
      sub_119C8E4();
    v4 = (*((int (__fastcall **)(_DWORD, _DWORD))v3 + 230))((char *)v3 + 908, &v20);
    v5 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    if ( v4 == 1 )
      *((_BYTE *)v3 + 744) = 1;
    if ( CraftingContainerManagerController::setLastCraftedItem(
           *((CraftingContainerManagerController **)v3 + 157),
           (const ItemInstance *)&ItemInstance::EMPTY_ITEM) )
      v6 = *((_DWORD *)v3 + 192);
      *((_DWORD *)v3 + 246) |= 1 << (v6 - 1);
    else
    v7 = v6 + v2;
    *((_DWORD *)v3 + 192) = v7;
    v8 = (signed int *)((char *)v3 + 768);
    v9 = 5;
    if ( *((_BYTE *)v3 + 656) )
      v9 = 6;
    if ( v7 <= 0 )
      *v8 = v9;
    else if ( v7 > v9 )
      *v8 = 1;
    v10 = sub_119C884((void **)&v18, "navigation_tab");
    v19 = 0;
    v17 = *v8;
    sub_119CAD8(v10, "navigation_tab", (_BYTE *)0xE);
    if ( !*((_DWORD *)v3 + 189) )
    (*((void (__fastcall **)(_DWORD, _DWORD))v3 + 190))((char *)v3 + 748, &v17);
    CraftingScreenController::_savePlayerInventoryOptions(v3);
    v11 = CraftingContainerManagerController::getCraftingInformation(*((CraftingContainerManagerController **)v3 + 157));
    ++*((_DWORD *)v11 + 3);
    *((_DWORD *)v11 + 2) = *((_DWORD *)v3 + 192);
    if ( CraftingContainerManagerController::getCurrentRecipe(*((CraftingContainerManagerController **)v3 + 157)) )
      CraftingContainerManagerController::clearAllRecipes(*((CraftingContainerManagerController **)v3 + 157));
    v12 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v18 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
  }
}


signed int __fastcall CraftingScreenController::_usingCreativeInventoryGamepadScheme(CraftingScreenController *this)
{
  CraftingScreenController *v1; // r5@1
  int v2; // r0@1
  bool v3; // zf@1
  signed int result; // r0@4
  signed int v5; // r4@5

  v1 = this;
  v2 = MinecraftScreenModel::isCreative(*((MinecraftScreenModel **)this + 106));
  v3 = v2 == 1;
  if ( v2 == 1 )
    v3 = *((_BYTE *)v1 + 640) == 0;
  if ( v3 )
  {
    v5 = 0;
    if ( *((_DWORD *)v1 + 192) != 6 && MinecraftScreenController::getInputMode(v1) == 3 )
      v5 = 1;
    result = v5;
  }
  else
    result = 0;
  return result;
}


int __fastcall CraftingScreenController::tick(CraftingScreenController *this, int a2)
{
  int v2; // r9@0
  CraftingScreenController *v3; // r4@1
  bool v4; // zf@4
  int v5; // r0@7
  int v6; // r11@9
  int v7; // r0@9
  int v8; // r10@10
  int v9; // r5@10
  bool v10; // zf@11
  int v11; // r6@14
  void *v12; // r0@18
  unsigned int *v13; // r2@19
  signed int v14; // r1@21
  bool v15; // zf@23
  _DWORD *v16; // r0@27
  int v17; // r0@32
  bool v18; // zf@32
  void **v19; // r0@35
  void **v20; // r0@37
  void *v21; // r0@38
  void *v22; // r0@39
  bool v23; // zf@40
  int v24; // r1@43
  signed int v25; // r5@44
  void *v26; // r0@48
  int v27; // r1@50
  int v28; // r5@52
  void *v29; // r0@52
  int v30; // r0@54
  int v31; // r5@57
  int v32; // r0@62
  int v33; // r5@63
  unsigned int *v34; // r1@64
  unsigned int v35; // r0@66
  unsigned int *v36; // r6@70
  unsigned int v37; // r0@72
  void *v38; // r0@77
  CraftingContainerManagerController *v39; // r5@78
  const ItemInstance *v40; // r0@78
  signed int v41; // r6@84
  int v42; // r0@84
  int v43; // r1@86
  int v44; // r0@88
  int v45; // r1@88
  unsigned int *v47; // r2@89
  signed int v48; // r1@91
  unsigned int *v49; // r2@93
  signed int v50; // r1@95
  unsigned int *v51; // r2@97
  signed int v52; // r1@99
  unsigned int *v53; // r2@101
  signed int v54; // r1@103
  unsigned int *v55; // r2@105
  signed int v56; // r1@107
  int v57; // [sp+0h] [bp-A8h]@78
  int v58; // [sp+8h] [bp-A0h]@82
  void *v59; // [sp+24h] [bp-84h]@80
  void *ptr; // [sp+34h] [bp-74h]@78
  int v61; // [sp+4Ch] [bp-5Ch]@52
  ContainerController *v62; // [sp+50h] [bp-58h]@52
  int v63; // [sp+54h] [bp-54h]@63
  int v64; // [sp+58h] [bp-50h]@52
  int v65; // [sp+5Ch] [bp-4Ch]@44
  int v66; // [sp+60h] [bp-48h]@37
  int v67; // [sp+64h] [bp-44h]@37
  char v68; // [sp+69h] [bp-3Fh]@37
  int v69; // [sp+6Ch] [bp-3Ch]@35
  int v70; // [sp+70h] [bp-38h]@35
  char v71; // [sp+75h] [bp-33h]@35
  int v72; // [sp+78h] [bp-30h]@17

  v3 = this;
  if ( *(_DWORD *)(*((_DWORD *)this + 248) - 12) )
  {
    if ( !*((_DWORD *)this + 237) )
      goto LABEL_130;
    (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))this + 238))(
      (char *)this + 940,
      (char *)this + 992,
      *(_QWORD *)((char *)this + 996),
      *(_QWORD *)((char *)this + 996) >> 32);
    sub_119CA68((const void **)v3 + 248, 0, *(_BYTE **)(*((_DWORD *)v3 + 248) - 12), 0);
    *((_DWORD *)v3 + 249) = 0;
    *((_DWORD *)v3 + 250) = 0;
  }
  v4 = *((_BYTE *)v3 + 765) == 0;
  if ( *((_BYTE *)v3 + 765) )
    v2 = *((_DWORD *)v3 + 233);
    v4 = v2 == 0;
  if ( !v4 )
    v5 = *((_DWORD *)v3 + 165);
    if ( v5 == 1 )
    {
      CraftingScreenController::_tabIndexToCollectionName(&v72, a2, *((_DWORD *)v3 + 192));
      if ( !*((_DWORD *)v3 + 233) )
        sub_119C8E4();
      (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v3 + 234))((char *)v3 + 924, &v72, 0);
      v12 = (void *)(v72 - 12);
      if ( (int *)(v72 - 12) != &dword_28898C0 )
      {
        v13 = (unsigned int *)(v72 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v12);
      }
      goto LABEL_30;
    }
    if ( v5 )
LABEL_30:
      *((_BYTE *)v3 + 765) = 0;
      goto LABEL_31;
    v6 = 0x1Au % dword_27DABB0;
    v7 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
    if ( !v7 )
      goto LABEL_27;
    v8 = *(_DWORD *)v7;
    v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
    while ( 1 )
      v10 = v9 == 26;
      if ( v9 == 26 )
        v10 = *(_DWORD *)(v8 + 4) == 26;
      if ( v10 )
        break;
      v11 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 )
        v9 = *(_DWORD *)(v11 + 12);
        v7 = v8;
        v8 = *(_DWORD *)v8;
        if ( *(_DWORD *)(v11 + 12) % (unsigned int)dword_27DABB0 == v6 )
          continue;
    v15 = v7 == 0;
    if ( v7 )
      v7 = *(_DWORD *)v7;
      v15 = v7 == 0;
    if ( v15 )
LABEL_27:
      v16 = operator new(0x10u);
      *v16 = 0;
      v16[1] = 26;
      v16[2] = &unk_28898CC;
      v7 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DABAC,
             v6,
             0x1Au,
             (int)v16);
      v2 = *((_DWORD *)v3 + 233);
    if ( v2 )
      (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v3 + 234))((char *)v3 + 924, v7 + 8, 0);
LABEL_130:
    sub_119C8E4();
LABEL_31:
  if ( *((_BYTE *)v3 + 764) )
    v17 = *((_DWORD *)v3 + 189);
    v18 = v17 == 0;
    if ( v17 )
      v18 = *((_BYTE *)v3 + 988) == 0;
    if ( !v18 )
      v19 = sub_119C884((void **)&v70, "navigation_tab");
      v71 = 0;
      v69 = *((_DWORD *)v3 + 192);
      sub_119CAD8(v19, "navigation_tab", (_BYTE *)0xE);
      if ( !*((_DWORD *)v3 + 189) )
      (*((void (__fastcall **)(_DWORD, _DWORD))v3 + 190))((char *)v3 + 748, &v69);
      if ( *((_BYTE *)v3 + 656) )
        v20 = sub_119C884((void **)&v67, "navigation_tab");
        v68 = 0;
        v66 = *((_DWORD *)v3 + 193);
        sub_119CAD8(v20, "right_inventory_navigation_tab", (_BYTE *)0x1E);
        if ( !*((_DWORD *)v3 + 189) )
          sub_119C8E4();
        (*((void (__fastcall **)(_DWORD, _DWORD))v3 + 190))((char *)v3 + 748, &v66);
        v21 = (void *)(v67 - 12);
        if ( (int *)(v67 - 12) != &dword_28898C0 )
          v51 = (unsigned int *)(v67 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v52 = __ldrex(v51);
            while ( __strex(v52 - 1, v51) );
          }
          else
            v52 = (*v51)--;
          if ( v52 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v21);
      *((_WORD *)v3 + 382) = 256;
      v22 = (void *)(v70 - 12);
      if ( (int *)(v70 - 12) != &dword_28898C0 )
        v47 = (unsigned int *)(v70 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v22);
  v23 = *((_BYTE *)v3 + 747) == 0;
  if ( *((_BYTE *)v3 + 747) )
    v23 = *((_BYTE *)v3 + 746) == 0;
  if ( !v23 && MinecraftScreenController::getInputMode(v3) == 3 )
    *((_BYTE *)v3 + 747) = 0;
    CraftingScreenController::_tabIndexToCollectionName(&v65, v24, *((_DWORD *)v3 + 192));
    v25 = CraftingContainerManagerController::getIndexForCreativeItem(
            *((_DWORD *)v3 + 157),
            (const void **)&v65,
            (CraftingScreenController *)((char *)v3 + 672));
    if ( v25 < 0 )
      v25 = *((_DWORD *)v3 + 141);
    else
      (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v3 + 234))((char *)v3 + 924, &v65, v25);
    (*(void (__fastcall **)(CraftingScreenController *, int *, signed int))(*(_DWORD *)v3 + 144))(v3, &v65, v25);
    v26 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v65 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
      else
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v26);
  if ( *((_BYTE *)v3 + 744) && MinecraftScreenController::getInputMode(v3) == 3 )
    if ( *((_BYTE *)v3 + 745) )
      CraftingScreenController::_tabIndexToCollectionName(&v64, v27, *((_DWORD *)v3 + 192));
      v28 = *((_DWORD *)v3 + 157);
      sub_119C854(&v61, &v64);
      ContainerManagerController::getContainerController((int)&v62, v28, (int **)&v61);
      v29 = (void *)(v61 - 12);
      if ( (int *)(v61 - 12) != &dword_28898C0 )
        v53 = (unsigned int *)(v61 - 4);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v29);
      if ( v62 )
        v30 = ContainerController::getContainerSize(v62);
        v30 = 0;
      v31 = v30 - 1;
      if ( *((_DWORD *)v3 + 166) < v30 - 1 )
        v31 = *((_DWORD *)v3 + 166);
      if ( v31 >= 0 )
        if ( !*((_DWORD *)v3 + 233) )
        if ( (*((int (__fastcall **)(_DWORD, _DWORD, _DWORD))v3 + 234))((char *)v3 + 924, &v64, v31) == 1 )
          v32 = ContainerController::getItem(v62, v31);
          ItemInstance::operator=((int)v3 + 672, v32);
          *((_DWORD *)v3 + 166) = v31;
          *((_WORD *)v3 + 372) = 0;
      v33 = v63;
      if ( v63 )
        v34 = (unsigned int *)(v63 + 4);
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
      v38 = (void *)(v64 - 12);
      if ( (int *)(v64 - 12) != &dword_28898C0 )
        v55 = (unsigned int *)(v64 - 4);
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
          v56 = (*v55)--;
        if ( v56 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v38);
      *((_BYTE *)v3 + 745) = 1;
  *((_BYTE *)v3 + 872) = 1;
  v39 = (CraftingContainerManagerController *)*((_DWORD *)v3 + 157);
  ContainerScreenController::getCursorSelectedItem((ContainerScreenController *)&v57, (int)v3);
  v40 = (const ItemInstance *)ContainerItemStack::getItemInstance((ContainerItemStack *)&v57);
  *((_BYTE *)v3 + 746) = CraftingContainerManagerController::hasIngredientSetChanged(v39, v40);
  if ( ptr )
    operator delete(ptr);
  if ( v59 )
    operator delete(v59);
  if ( v58 )
    (*(void (**)(void))(*(_DWORD *)v58 + 4))();
  v58 = 0;
  v41 = 0;
  v42 = *((_DWORD *)v3 + 246);
  if ( *((_BYTE *)v3 + 746) )
    v42 |= 0x3Fu;
    *((_DWORD *)v3 + 246) = v42;
  v43 = *((_DWORD *)v3 + 192);
  if ( (v42 & (1 << (v43 - 1))) >= 1 )
    CraftingScreenController::_refreshFilters((int)v3, v43, 0);
    v41 = 1;
  v44 = ContainerScreenController::tick(v3);
  v45 = *((_DWORD *)v3 + 159);
  *((_DWORD *)v3 + 159) = 0;
  return v44 | v41 | v45;
}


void __fastcall CraftingScreenController::_registerEventHandlers(CraftingScreenController *this)
{
  CraftingScreenController::_registerEventHandlers(this);
}


int __fastcall CraftingScreenController::_pocketCraftingOutputAutoPlace(int a1, void *a2, int a3, int a4, int a5, int a6, int a7, void *a8, int a9, int a10, char a11, int a12, int a13, char a14, int a15, int a16, int a17, char a18)
{
  return CraftingScreenController::_pocketCraftingOutputAutoPlace(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18);
}


void **__fastcall CraftingScreenController::_getButtonADescription(CraftingScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r8@1
  void **v3; // r4@1
  void **result; // r0@2
  const void **v5; // r9@3
  int v6; // r11@9
  int v7; // r0@9
  int v8; // r4@10
  int v9; // r7@10
  bool v10; // zf@11
  int v11; // r5@14
  bool v12; // zf@19
  _DWORD *v13; // r0@23
  const void *v14; // r10@24
  _DWORD *v15; // r1@24
  size_t v16; // r11@24
  int v17; // r6@26
  int v18; // r0@26
  int v19; // r9@27
  int v20; // r4@27
  bool v21; // zf@28
  int v22; // r5@31
  bool v23; // zf@34
  _DWORD *v24; // r0@38
  _DWORD *v25; // r1@39
  int v26; // r9@41
  int v27; // r0@41
  int v28; // r6@42
  int v29; // r4@42
  bool v30; // zf@43
  int v31; // r5@46
  bool v32; // zf@49
  _DWORD *v33; // r0@53
  _DWORD *v34; // r1@54
  int v35; // r9@56
  int v36; // r0@56
  int v37; // r6@57
  int v38; // r4@57
  bool v39; // zf@58
  int v40; // r5@61
  bool v41; // zf@64
  _DWORD *v42; // r0@68
  _DWORD *v43; // r1@69
  int v44; // r9@71
  int v45; // r0@71
  int v46; // r6@72
  int v47; // r4@72
  bool v48; // zf@73
  int v49; // r5@76
  bool v50; // zf@79
  _DWORD *v51; // r0@83
  _DWORD *v52; // r1@84
  int v53; // r9@86
  int v54; // r0@86
  int v55; // r6@87
  int v56; // r4@87
  bool v57; // zf@88
  int v58; // r5@91
  bool v59; // zf@95
  _DWORD *v60; // r0@99
  _DWORD *v61; // r1@100
  void **v62; // [sp+0h] [bp-48h]@9
  const void **v63; // [sp+4h] [bp-44h]@24

  v2 = a2;
  v3 = (void **)this;
  if ( ContainerScreenController::_selectionActive(a2) == 1 )
  {
    result = sub_119C884(v3, "controller.buttonTip.place");
  }
  else
    v5 = (const void **)((char *)v2 + 560);
    if ( sub_119C9E8((const void **)v2 + 140, "filter_toggle") )
    {
      if ( CraftingContainerManagerController::isCreativeContainer(*((_DWORD *)v2 + 157), (const void **)v2 + 140) == 1 )
      {
        if ( MinecraftScreenModel::isCreative(*((MinecraftScreenModel **)v2 + 106)) == 1 )
          result = sub_119C884(v3, "controller.buttonTip.take");
        else
          result = sub_119C884(v3, "controller.buttonTip.craftOne");
      }
      else
        v62 = v3;
        v6 = 0xAu % dword_27DABB0;
        v7 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
        if ( !v7 )
          goto LABEL_23;
        v8 = *(_DWORD *)v7;
        v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
        while ( 1 )
        {
          v10 = v9 == 10;
          if ( v9 == 10 )
            v10 = *(_DWORD *)(v8 + 4) == 10;
          if ( v10 )
            break;
          v11 = *(_DWORD *)v8;
          if ( *(_DWORD *)v8 )
          {
            v9 = *(_DWORD *)(v11 + 12);
            v7 = v8;
            v8 = *(_DWORD *)v8;
            if ( *(_DWORD *)(v11 + 12) % (unsigned int)dword_27DABB0 == v6 )
              continue;
          }
        }
        v12 = v7 == 0;
        if ( v7 )
          v7 = *(_DWORD *)v7;
          v12 = v7 == 0;
        if ( v12 )
LABEL_23:
          v13 = operator new(0x10u);
          *v13 = 0;
          v13[1] = 10;
          v13[2] = &unk_28898CC;
          v7 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                 (int)&dword_27DABAC,
                 v6,
                 0xAu,
                 (int)v13);
        v14 = *v5;
        v15 = *(_DWORD **)(v7 + 8);
        v63 = (const void **)((char *)v2 + 560);
        v16 = *((_DWORD *)*v5 - 3);
        if ( v16 == *(v15 - 3) && !memcmp(v14, v15, *((_DWORD *)v14 - 3)) )
          goto LABEL_106;
        v17 = 0x1Au % dword_27DABB0;
        v18 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
        if ( !v18 )
          goto LABEL_38;
        v19 = *(_DWORD *)v18;
        v20 = *(_DWORD *)(*(_DWORD *)v18 + 12);
          v21 = v20 == 26;
          if ( v20 == 26 )
            v21 = *(_DWORD *)(v19 + 4) == 26;
          if ( v21 )
          v22 = *(_DWORD *)v19;
          if ( *(_DWORD *)v19 )
            v20 = *(_DWORD *)(v22 + 12);
            v18 = v19;
            v19 = *(_DWORD *)v19;
            if ( *(_DWORD *)(v22 + 12) % (unsigned int)dword_27DABB0 == v17 )
        v23 = v18 == 0;
        if ( v18 )
          v18 = *(_DWORD *)v18;
          v23 = v18 == 0;
        if ( v23 )
LABEL_38:
          v24 = operator new(0x10u);
          *v24 = 0;
          v24[1] = 26;
          v24[2] = &unk_28898CC;
          v18 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27DABAC,
                  v17,
                  0x1Au,
                  (int)v24);
          v14 = *v63;
          v16 = *((_DWORD *)*v63 - 3);
        v25 = *(_DWORD **)(v18 + 8);
        if ( v16 == *(v25 - 3) && !memcmp(v14, v25, v16) )
        v26 = 0x18u % dword_27DABB0;
        v27 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
        if ( !v27 )
          goto LABEL_53;
        v28 = *(_DWORD *)v27;
        v29 = *(_DWORD *)(*(_DWORD *)v27 + 12);
          v30 = v29 == 24;
          if ( v29 == 24 )
            v30 = *(_DWORD *)(v28 + 4) == 24;
          if ( v30 )
          v31 = *(_DWORD *)v28;
          if ( *(_DWORD *)v28 )
            v29 = *(_DWORD *)(v31 + 12);
            v27 = v28;
            v28 = *(_DWORD *)v28;
            if ( *(_DWORD *)(v31 + 12) % (unsigned int)dword_27DABB0 == v26 )
        v32 = v27 == 0;
        if ( v27 )
          v27 = *(_DWORD *)v27;
          v32 = v27 == 0;
        if ( v32 )
LABEL_53:
          v33 = operator new(0x10u);
          *v33 = 0;
          v33[1] = 24;
          v33[2] = &unk_28898CC;
          v27 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  v26,
                  0x18u,
                  (int)v33);
        v34 = *(_DWORD **)(v27 + 8);
        if ( v16 == *(v34 - 3) && !memcmp(v14, v34, v16) )
        v35 = 3u % dword_27DABB0;
        v36 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
        if ( !v36 )
          goto LABEL_68;
        v37 = *(_DWORD *)v36;
        v38 = *(_DWORD *)(*(_DWORD *)v36 + 12);
          v39 = v38 == 3;
          if ( v38 == 3 )
            v39 = *(_DWORD *)(v37 + 4) == 3;
          if ( v39 )
          v40 = *(_DWORD *)v37;
          if ( *(_DWORD *)v37 )
            v38 = *(_DWORD *)(v40 + 12);
            v36 = v37;
            v37 = *(_DWORD *)v37;
            if ( *(_DWORD *)(v40 + 12) % (unsigned int)dword_27DABB0 == v35 )
        v41 = v36 == 0;
        if ( v36 )
          v36 = *(_DWORD *)v36;
          v41 = v36 == 0;
        if ( v41 )
LABEL_68:
          v42 = operator new(0x10u);
          *v42 = 0;
          v42[1] = 3;
          v42[2] = &unk_28898CC;
          v36 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  v35,
                  3u,
                  (int)v42);
        v43 = *(_DWORD **)(v36 + 8);
        if ( v16 == *(v43 - 3) && !memcmp(v14, v43, v16) )
        v44 = 0x20u % dword_27DABB0;
        v45 = *(_DWORD *)(dword_27DABAC + 4 * (0x20u % dword_27DABB0));
        if ( !v45 )
          goto LABEL_83;
        v46 = *(_DWORD *)v45;
        v47 = *(_DWORD *)(*(_DWORD *)v45 + 12);
          v48 = v47 == 32;
          if ( v47 == 32 )
            v48 = *(_DWORD *)(v46 + 4) == 32;
          if ( v48 )
          v49 = *(_DWORD *)v46;
          if ( *(_DWORD *)v46 )
            v47 = *(_DWORD *)(v49 + 12);
            v45 = v46;
            v46 = *(_DWORD *)v46;
            if ( *(_DWORD *)(v49 + 12) % (unsigned int)dword_27DABB0 == v44 )
        v50 = v45 == 0;
        if ( v45 )
          v45 = *(_DWORD *)v45;
          v50 = v45 == 0;
        if ( v50 )
LABEL_83:
          v51 = operator new(0x10u);
          *v51 = 0;
          v51[1] = 32;
          v51[2] = &unk_28898CC;
          v45 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  v44,
                  0x20u,
                  (int)v51);
        v52 = *(_DWORD **)(v45 + 8);
        if ( v16 == *(v52 - 3) && !memcmp(v14, v52, v16) )
LABEL_106:
          result = sub_119C884(v62, "controller.buttonTip.take");
          v53 = 0xBu % dword_27DABB0;
          v54 = *(_DWORD *)(dword_27DABAC + 4 * (0xBu % dword_27DABB0));
          if ( !v54 )
            goto LABEL_99;
          v55 = *(_DWORD *)v54;
          v56 = *(_DWORD *)(*(_DWORD *)v54 + 12);
          while ( 1 )
            v57 = v56 == 11;
            if ( v56 == 11 )
              v57 = *(_DWORD *)(v55 + 4) == 11;
            if ( v57 )
              break;
            v58 = *(_DWORD *)v55;
            if ( *(_DWORD *)v55 )
            {
              v56 = *(_DWORD *)(v58 + 12);
              v54 = v55;
              v55 = *(_DWORD *)v55;
              if ( *(_DWORD *)(v58 + 12) % (unsigned int)dword_27DABB0 == v53 )
                continue;
            }
          v59 = v54 == 0;
          if ( v54 )
            v54 = *(_DWORD *)v54;
            v59 = v54 == 0;
          if ( v59 )
LABEL_99:
            v60 = operator new(0x10u);
            *v60 = 0;
            v60[1] = 11;
            v60[2] = &unk_28898CC;
            v54 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                    (int)&dword_27DABAC,
                    v53,
                    0xBu,
                    (int)v60);
            v14 = *v63;
            v16 = *((_DWORD *)*v63 - 3);
          v61 = *(_DWORD **)(v54 + 8);
          if ( v16 == *(v61 - 3) && !memcmp(v14, v61, v16) )
            result = sub_119C884(v62, "controller.buttonTip.craftOne");
          else
            result = ContainerScreenController::_getButtonADescription((ContainerScreenController *)v62, v2);
    }
    else if ( *((_BYTE *)v2 + 657) )
      result = sub_119C884(v3, "controller.buttonTip.recipes.showAll");
    else
      result = sub_119C884(v3, "controller.buttonTip.recipes.showCraftable");
  return result;
}


signed int __fastcall CraftingScreenController::_tryAutoPlaceItemIntoContainer(int a1, ContainerItemStack *a2, unsigned int a3, int a4)
{
  unsigned int v4; // r7@1
  ContainerItemStack *v5; // r10@1
  int v6; // r11@1
  int v7; // r9@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r4@2
  bool v11; // zf@3
  int v12; // r5@6
  bool v13; // zf@9
  _DWORD *v14; // r0@13
  void *v15; // r0@14
  signed int v16; // r4@15
  int v17; // r5@15
  unsigned int *v18; // r1@16
  unsigned int v19; // r0@18
  unsigned int *v20; // r6@22
  unsigned int v21; // r0@24
  unsigned int *v23; // r2@30
  signed int v24; // r1@32
  int v25; // [sp+4h] [bp-3Ch]@1
  int v26; // [sp+8h] [bp-38h]@14
  int v27; // [sp+Ch] [bp-34h]@14
  int v28; // [sp+10h] [bp-30h]@15

  v25 = a4;
  v4 = a3;
  v5 = a2;
  v6 = a3 % dword_27DABB0;
  v7 = *(_DWORD *)(a1 + 628);
  v8 = *(_DWORD *)(dword_27DABAC + 4 * (a3 % dword_27DABB0));
  if ( !v8 )
    goto LABEL_13;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
  while ( 1 )
  {
    v11 = v10 == a3;
    if ( v10 == a3 )
      v11 = *(_DWORD *)(v9 + 4) == a3;
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 12);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 12) % (unsigned int)dword_27DABB0 == v6 )
        continue;
    }
  }
  v13 = v8 == 0;
  if ( v8 )
    v8 = *(_DWORD *)v8;
    v13 = v8 == 0;
  if ( v13 )
LABEL_13:
    v14 = operator new(0x10u);
    *v14 = 0;
    v14[1] = v4;
    v14[2] = &unk_28898CC;
    v8 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27DABAC,
           v6,
           v4,
           (int)v14);
  sub_119C854(&v26, (int *)(v8 + 8));
  ContainerManagerController::getContainerController((int)&v27, v7, (int **)&v26);
  v15 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  ContainerController::autoPlaceItems(v27, (int)v5, v25, 1);
  ContainerController::autoPlaceItems(v27, (int)v5, v25, 0);
  v16 = ContainerItemStack::isEmpty(v5);
  v17 = v28;
  if ( v28 )
    v18 = (unsigned int *)(v28 + 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 == 1 )
      v20 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  return v16;
}


int __fastcall CraftingScreenController::_recipeAutoCraft(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, void *a14, int a15, int a16, int a17, int a18, char a19, int a20, int a21, char a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, void *a37, int a38, int a39, int a40, void *a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, char a50)
{
  return CraftingScreenController::_recipeAutoCraft(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46,
           a47,
           a48,
           a49,
           a50);
}


void **__fastcall CraftingScreenController::_getButtonBDescription(CraftingScreenController *this, int a2)
{
  const void **v2; // r10@1
  int v3; // r9@2
  int v4; // r0@2
  int v5; // r4@3
  int v6; // r6@3
  bool v7; // zf@4
  int v8; // r7@7
  bool v9; // zf@10
  _DWORD *v10; // r0@14
  const void *v11; // r11@15
  _DWORD *v12; // r1@15
  size_t v13; // r8@15
  int v14; // r5@17
  int v15; // r0@17
  int v16; // r4@18
  int v17; // r7@18
  bool v18; // zf@19
  int v19; // r9@22
  bool v20; // zf@25
  _DWORD *v21; // r0@29
  _DWORD *v22; // r1@30
  int v23; // r5@32
  int v24; // r0@32
  int v25; // r9@33
  int v26; // r7@33
  bool v27; // zf@34
  int v28; // r4@37
  bool v29; // zf@40
  _DWORD *v30; // r0@44
  _DWORD *v31; // r1@45
  int v32; // r5@47
  int v33; // r0@47
  int v34; // r9@48
  int v35; // r7@48
  bool v36; // zf@49
  int v37; // r4@52
  bool v38; // zf@55
  _DWORD *v39; // r0@59
  _DWORD *v40; // r1@60
  int v41; // r5@62
  int v42; // r0@62
  int v43; // r9@63
  int v44; // r7@63
  bool v45; // zf@64
  int v46; // r4@67
  bool v47; // zf@70
  _DWORD *v48; // r0@74
  _DWORD *v49; // r1@75
  int v50; // r5@77
  int v51; // r0@77
  int v52; // r9@78
  int v53; // r7@78
  bool v54; // zf@79
  int v55; // r4@82
  bool v56; // zf@85
  _DWORD *v57; // r0@89
  _DWORD *v58; // r1@90
  int v59; // r9@93
  int v60; // r0@93
  int v61; // r4@94
  int v62; // r6@94
  bool v63; // zf@95
  int v64; // r7@98
  void **result; // r0@101
  bool v66; // zf@103
  _DWORD *v67; // r0@107
  _DWORD *v68; // r1@108
  size_t v69; // r2@108
  int v70; // [sp+4h] [bp-34h]@1
  MinecraftScreenController *v71; // [sp+8h] [bp-30h]@1

  v70 = a2;
  v71 = this;
  v2 = (const void **)(a2 + 560);
  if ( CraftingContainerManagerController::isCreativeContainer(*(_DWORD *)(a2 + 628), (const void **)(a2 + 560)) )
    goto LABEL_114;
  v3 = 0xAu % dword_27DABB0;
  v4 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
  if ( !v4 )
    goto LABEL_14;
  v5 = *(_DWORD *)v4;
  v6 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  while ( 1 )
  {
    v7 = v6 == 10;
    if ( v6 == 10 )
      v7 = *(_DWORD *)(v5 + 4) == 10;
    if ( v7 )
      break;
    v8 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 )
    {
      v6 = *(_DWORD *)(v8 + 12);
      v4 = v5;
      v5 = *(_DWORD *)v5;
      if ( *(_DWORD *)(v8 + 12) % (unsigned int)dword_27DABB0 == v3 )
        continue;
    }
  }
  v9 = v4 == 0;
  if ( v4 )
    v4 = *(_DWORD *)v4;
    v9 = v4 == 0;
  if ( v9 )
LABEL_14:
    v10 = operator new(0x10u);
    *v10 = 0;
    v10[1] = 10;
    v10[2] = &unk_28898CC;
    v4 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27DABAC,
           v3,
           0xAu,
           (int)v10);
  v11 = *v2;
  v12 = *(_DWORD **)(v4 + 8);
  v13 = *((_DWORD *)*v2 - 3);
  if ( v13 == *(v12 - 3) && !memcmp(*v2, v12, *((_DWORD *)*v2 - 3)) )
  v14 = 0x1Au % dword_27DABB0;
  v15 = *(_DWORD *)(dword_27DABAC + 4 * (0x1Au % dword_27DABB0));
  if ( !v15 )
    goto LABEL_29;
  v16 = *(_DWORD *)v15;
  v17 = *(_DWORD *)(*(_DWORD *)v15 + 12);
    v18 = v17 == 26;
    if ( v17 == 26 )
      v18 = *(_DWORD *)(v16 + 4) == 26;
    if ( v18 )
    v19 = *(_DWORD *)v16;
    if ( *(_DWORD *)v16 )
      v17 = *(_DWORD *)(v19 + 12);
      v15 = v16;
      v16 = *(_DWORD *)v16;
      if ( *(_DWORD *)(v19 + 12) % (unsigned int)dword_27DABB0 == v14 )
  v20 = v15 == 0;
  if ( v15 )
    v15 = *(_DWORD *)v15;
    v20 = v15 == 0;
  if ( v20 )
LABEL_29:
    v21 = operator new(0x10u);
    *v21 = 0;
    v21[1] = 26;
    v21[2] = &unk_28898CC;
    v15 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27DABAC,
            v14,
            0x1Au,
            (int)v21);
    v11 = *v2;
    v13 = *((_DWORD *)*v2 - 3);
  v22 = *(_DWORD **)(v15 + 8);
  if ( v13 == *(v22 - 3) && !memcmp(v11, v22, v13) )
  v23 = 0x18u % dword_27DABB0;
  v24 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
  if ( !v24 )
    goto LABEL_44;
  v25 = *(_DWORD *)v24;
  v26 = *(_DWORD *)(*(_DWORD *)v24 + 12);
    v27 = v26 == 24;
    if ( v26 == 24 )
      v27 = *(_DWORD *)(v25 + 4) == 24;
    if ( v27 )
    v28 = *(_DWORD *)v25;
    if ( *(_DWORD *)v25 )
      v26 = *(_DWORD *)(v28 + 12);
      v24 = v25;
      v25 = *(_DWORD *)v25;
      if ( *(_DWORD *)(v28 + 12) % (unsigned int)dword_27DABB0 == v23 )
  v29 = v24 == 0;
  if ( v24 )
    v24 = *(_DWORD *)v24;
    v29 = v24 == 0;
  if ( v29 )
LABEL_44:
    v30 = operator new(0x10u);
    *v30 = 0;
    v30[1] = 24;
    v30[2] = &unk_28898CC;
    v24 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v23,
            0x18u,
            (int)v30);
  v31 = *(_DWORD **)(v24 + 8);
  if ( v13 == *(v31 - 3) && !memcmp(v11, v31, v13) )
  v32 = 3u % dword_27DABB0;
  v33 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
  if ( !v33 )
    goto LABEL_59;
  v34 = *(_DWORD *)v33;
  v35 = *(_DWORD *)(*(_DWORD *)v33 + 12);
    v36 = v35 == 3;
    if ( v35 == 3 )
      v36 = *(_DWORD *)(v34 + 4) == 3;
    if ( v36 )
    v37 = *(_DWORD *)v34;
    if ( *(_DWORD *)v34 )
      v35 = *(_DWORD *)(v37 + 12);
      v33 = v34;
      v34 = *(_DWORD *)v34;
      if ( *(_DWORD *)(v37 + 12) % (unsigned int)dword_27DABB0 == v32 )
  v38 = v33 == 0;
  if ( v33 )
    v33 = *(_DWORD *)v33;
    v38 = v33 == 0;
  if ( v38 )
LABEL_59:
    v39 = operator new(0x10u);
    *v39 = 0;
    v39[1] = 3;
    v39[2] = &unk_28898CC;
    v33 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v32,
            3u,
            (int)v39);
  v40 = *(_DWORD **)(v33 + 8);
  if ( v13 == *(v40 - 3) && !memcmp(v11, v40, v13) )
  v41 = 0x20u % dword_27DABB0;
  v42 = *(_DWORD *)(dword_27DABAC + 4 * (0x20u % dword_27DABB0));
  if ( !v42 )
    goto LABEL_74;
  v43 = *(_DWORD *)v42;
  v44 = *(_DWORD *)(*(_DWORD *)v42 + 12);
    v45 = v44 == 32;
    if ( v44 == 32 )
      v45 = *(_DWORD *)(v43 + 4) == 32;
    if ( v45 )
    v46 = *(_DWORD *)v43;
    if ( *(_DWORD *)v43 )
      v44 = *(_DWORD *)(v46 + 12);
      v42 = v43;
      v43 = *(_DWORD *)v43;
      if ( *(_DWORD *)(v46 + 12) % (unsigned int)dword_27DABB0 == v41 )
  v47 = v42 == 0;
  if ( v42 )
    v42 = *(_DWORD *)v42;
    v47 = v42 == 0;
  if ( v47 )
LABEL_74:
    v48 = operator new(0x10u);
    *v48 = 0;
    v48[1] = 32;
    v48[2] = &unk_28898CC;
    v42 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v41,
            0x20u,
            (int)v48);
  v49 = *(_DWORD **)(v42 + 8);
  if ( v13 == *(v49 - 3) && !memcmp(v11, v49, v13) )
  v50 = 0xBu % dword_27DABB0;
  v51 = *(_DWORD *)(dword_27DABAC + 4 * (0xBu % dword_27DABB0));
  if ( !v51 )
    goto LABEL_89;
  v52 = *(_DWORD *)v51;
  v53 = *(_DWORD *)(*(_DWORD *)v51 + 12);
    v54 = v53 == 11;
    if ( v53 == 11 )
      v54 = *(_DWORD *)(v52 + 4) == 11;
    if ( v54 )
    v55 = *(_DWORD *)v52;
    if ( *(_DWORD *)v52 )
      v53 = *(_DWORD *)(v55 + 12);
      v51 = v52;
      v52 = *(_DWORD *)v52;
      if ( *(_DWORD *)(v55 + 12) % (unsigned int)dword_27DABB0 == v50 )
  v56 = v51 == 0;
  if ( v51 )
    v51 = *(_DWORD *)v51;
    v56 = v51 == 0;
  if ( v56 )
LABEL_89:
    v57 = operator new(0x10u);
    *v57 = 0;
    v57[1] = 11;
    v57[2] = &unk_28898CC;
    v51 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v50,
            0xBu,
            (int)v57);
  v58 = *(_DWORD **)(v51 + 8);
  if ( v13 == *(v58 - 3) && !memcmp(v11, v58, v13) )
LABEL_114:
    result = sub_119C884((void **)v71, "controller.buttonTip.exit");
  else
    if ( CraftingContainerManagerController::isCreativeContainer(*(_DWORD *)(v70 + 628), v2) )
      goto LABEL_115;
    v59 = 0xBu % dword_27DABB0;
    v60 = *(_DWORD *)(dword_27DABAC + 4 * (0xBu % dword_27DABB0));
    if ( !v60 )
      goto LABEL_107;
    v61 = *(_DWORD *)v60;
    v62 = *(_DWORD *)(*(_DWORD *)v60 + 12);
    while ( 1 )
      v63 = v62 == 11;
      if ( v62 == 11 )
        v63 = *(_DWORD *)(v61 + 4) == 11;
      if ( v63 )
        break;
      v64 = *(_DWORD *)v61;
      if ( *(_DWORD *)v61 )
      {
        v62 = *(_DWORD *)(v64 + 12);
        v60 = v61;
        v61 = *(_DWORD *)v61;
        if ( *(_DWORD *)(v64 + 12) % (unsigned int)dword_27DABB0 == v59 )
          continue;
      }
    v66 = v60 == 0;
    if ( v60 )
      v60 = *(_DWORD *)v60;
      v66 = v60 == 0;
    if ( v66 )
LABEL_107:
      v67 = operator new(0x10u);
      *v67 = 0;
      v67[1] = 11;
      v67[2] = &unk_28898CC;
      v60 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DABAC,
              v59,
              0xBu,
              (int)v67);
    v68 = *(_DWORD **)(v60 + 8);
    v69 = *((_DWORD *)*v2 - 3);
    if ( v69 == *(v68 - 3) && !memcmp(*v2, v68, v69) )
LABEL_115:
      result = sub_119C884((void **)v71, "controller.buttonTip.returnToRecipe");
    else
      result = MinecraftScreenController::_getButtonBDescription(v71);
  return result;
}


void __fastcall CraftingScreenController::_refreshFilters(int a1, int a2, int a3)
{
  CraftingScreenController::_refreshFilters(a1, a2, a3);
}


signed int __fastcall CraftingScreenController::_shouldEmptyArmorImageBeVisible(CraftingScreenController *this, int a2)
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
  v3 = 3u % dword_27DABB0;
  v4 = *((_DWORD *)this + 157);
  v5 = *(_DWORD *)(dword_27DABAC + 4 * (3u % dword_27DABB0));
  if ( !v5 )
    goto LABEL_13;
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  while ( 1 )
  {
    v8 = v7 == 3;
    if ( v7 == 3 )
      v8 = *(_DWORD *)(v6 + 4) == 3;
    if ( v8 )
      break;
    v9 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      v7 = *(_DWORD *)(v9 + 12);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 12) % (unsigned int)dword_27DABB0 == v3 )
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
    v11[1] = 3;
    v11[2] = &unk_28898CC;
    v5 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27DABAC,
           v3,
           3u,
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


void __fastcall CraftingScreenController::_refreshFilters(int a1, int a2, int a3)
{
  char v3; // r11@0
  int v4; // r10@1
  int v5; // r9@1
  int v6; // r7@2
  int v7; // r0@2
  int v8; // r8@3
  int v9; // r4@3
  bool v10; // zf@4
  int v11; // r6@7
  int v12; // r8@10
  int v13; // r0@10
  int v14; // r7@11
  int v15; // r4@11
  bool v16; // zf@12
  int v17; // r6@15
  int v18; // r8@18
  int v19; // r0@18
  int v20; // r7@19
  int v21; // r4@19
  bool v22; // zf@20
  int v23; // r6@23
  int v24; // r8@26
  int v25; // r0@26
  int v26; // r7@27
  int v27; // r4@27
  bool v28; // zf@28
  int v29; // r6@31
  int v30; // r8@34
  int v31; // r0@34
  int v32; // r7@35
  int v33; // r4@35
  bool v34; // zf@36
  int v35; // r6@39
  bool v36; // zf@42
  _DWORD *v37; // r0@46
  bool v38; // zf@48
  _DWORD *v39; // r0@52
  bool v40; // zf@54
  _DWORD *v41; // r0@58
  bool v42; // zf@60
  _DWORD *v43; // r0@64
  bool v44; // zf@66
  _DWORD *v45; // r0@70
  int v46; // r4@74
  int v47; // r6@74
  unsigned int v48; // r1@75
  unsigned int *v49; // r0@75
  unsigned int v50; // r2@78
  unsigned int v51; // r3@79
  signed int v52; // r1@80
  int v53; // r0@87
  int v54; // r7@87
  unsigned int *v55; // r2@90
  unsigned int v56; // r1@92
  void *v57; // r0@98
  unsigned int *v58; // r1@102
  unsigned int v59; // r0@104
  unsigned int *v60; // r4@108
  unsigned int v61; // r0@110
  void *v62; // r0@115
  unsigned int *v63; // r2@117
  signed int v64; // r1@119
  unsigned int *v65; // r2@125
  signed int v66; // r1@127
  int v67; // [sp+0h] [bp-40h]@1
  int v68; // [sp+4h] [bp-3Ch]@74
  int v69; // [sp+8h] [bp-38h]@74
  int v70; // [sp+Ch] [bp-34h]@74
  int v71; // [sp+14h] [bp-2Ch]@1

  v4 = a2;
  v5 = a1;
  v67 = a3;
  sub_119C884((void **)&v71, (const char *)&unk_257BC67);
  switch ( v4 )
  {
    case 1:
      v6 = 0xCu % dword_27DABB0;
      v7 = *(_DWORD *)(dword_27DABAC + 4 * (0xCu % dword_27DABB0));
      if ( !v7 )
        goto LABEL_64;
      v8 = *(_DWORD *)v7;
      v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
      while ( 1 )
      {
        v10 = v9 == 12;
        if ( v9 == 12 )
          v10 = *(_DWORD *)(v8 + 4) == 12;
        if ( v10 )
          break;
        v11 = *(_DWORD *)v8;
        if ( *(_DWORD *)v8 )
        {
          v9 = *(_DWORD *)(v11 + 12);
          v7 = v8;
          v8 = *(_DWORD *)v8;
          if ( *(_DWORD *)(v11 + 12) % (unsigned int)dword_27DABB0 == v6 )
            continue;
        }
      }
      v42 = v7 == 0;
      if ( v7 )
        v7 = *(_DWORD *)v7;
        v42 = v7 == 0;
      if ( v42 )
LABEL_64:
        v43 = operator new(0x10u);
        *v43 = 0;
        v43[1] = 12;
        v43[2] = &unk_28898CC;
        v7 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               (int)&dword_27DABAC,
               v6,
               0xCu,
               (int)v43);
      EntityInteraction::setInteractText(&v71, (int *)(v7 + 8));
      break;
    case 5:
      v12 = 0xFu % dword_27DABB0;
      v13 = *(_DWORD *)(dword_27DABAC + 4 * (0xFu % dword_27DABB0));
      if ( !v13 )
        goto LABEL_46;
      v14 = *(_DWORD *)v13;
      v15 = *(_DWORD *)(*(_DWORD *)v13 + 12);
        v16 = v15 == 15;
        if ( v15 == 15 )
          v16 = *(_DWORD *)(v14 + 4) == 15;
        if ( v16 )
        v17 = *(_DWORD *)v14;
        if ( *(_DWORD *)v14 )
          v15 = *(_DWORD *)(v17 + 12);
          v13 = v14;
          v14 = *(_DWORD *)v14;
          if ( *(_DWORD *)(v17 + 12) % (unsigned int)dword_27DABB0 == v12 )
      v36 = v13 == 0;
      if ( v13 )
        v13 = *(_DWORD *)v13;
        v36 = v13 == 0;
      if ( v36 )
LABEL_46:
        v37 = operator new(0x10u);
        *v37 = 0;
        v37[1] = 15;
        v37[2] = &unk_28898CC;
        v13 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                (int)&dword_27DABAC,
                v12,
                0xFu,
                (int)v37);
      EntityInteraction::setInteractText(&v71, (int *)(v13 + 8));
    case 3:
      v18 = 0xEu % dword_27DABB0;
      v19 = *(_DWORD *)(dword_27DABAC + 4 * (0xEu % dword_27DABB0));
      if ( !v19 )
        goto LABEL_52;
      v20 = *(_DWORD *)v19;
      v21 = *(_DWORD *)(*(_DWORD *)v19 + 12);
        v22 = v21 == 14;
        if ( v21 == 14 )
          v22 = *(_DWORD *)(v20 + 4) == 14;
        if ( v22 )
        v23 = *(_DWORD *)v20;
        if ( *(_DWORD *)v20 )
          v21 = *(_DWORD *)(v23 + 12);
          v19 = v20;
          v20 = *(_DWORD *)v20;
          if ( *(_DWORD *)(v23 + 12) % (unsigned int)dword_27DABB0 == v18 )
      v38 = v19 == 0;
      if ( v19 )
        v19 = *(_DWORD *)v19;
        v38 = v19 == 0;
      if ( v38 )
LABEL_52:
        v39 = operator new(0x10u);
        *v39 = 0;
        v39[1] = 14;
        v39[2] = &unk_28898CC;
        v19 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                v18,
                0xEu,
                (int)v39);
      EntityInteraction::setInteractText(&v71, (int *)(v19 + 8));
    case 4:
      v24 = 0xDu % dword_27DABB0;
      v25 = *(_DWORD *)(dword_27DABAC + 4 * (0xDu % dword_27DABB0));
      if ( !v25 )
        goto LABEL_58;
      v26 = *(_DWORD *)v25;
      v27 = *(_DWORD *)(*(_DWORD *)v25 + 12);
        v28 = v27 == 13;
        if ( v27 == 13 )
          v28 = *(_DWORD *)(v26 + 4) == 13;
        if ( v28 )
        v29 = *(_DWORD *)v26;
        if ( *(_DWORD *)v26 )
          v27 = *(_DWORD *)(v29 + 12);
          v25 = v26;
          v26 = *(_DWORD *)v26;
          if ( *(_DWORD *)(v29 + 12) % (unsigned int)dword_27DABB0 == v24 )
      v40 = v25 == 0;
      if ( v25 )
        v25 = *(_DWORD *)v25;
        v40 = v25 == 0;
      if ( v40 )
LABEL_58:
        v41 = operator new(0x10u);
        *v41 = 0;
        v41[1] = 13;
        v41[2] = &unk_28898CC;
        v25 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                v24,
                0xDu,
                (int)v41);
      EntityInteraction::setInteractText(&v71, (int *)(v25 + 8));
    case 2:
      v30 = 0x11u % dword_27DABB0;
      v31 = *(_DWORD *)(dword_27DABAC + 4 * (0x11u % dword_27DABB0));
      if ( !v31 )
        goto LABEL_70;
      v32 = *(_DWORD *)v31;
      v33 = *(_DWORD *)(*(_DWORD *)v31 + 12);
        v34 = v33 == 17;
        if ( v33 == 17 )
          v34 = *(_DWORD *)(v32 + 4) == 17;
        if ( v34 )
        v35 = *(_DWORD *)v32;
        if ( *(_DWORD *)v32 )
          v33 = *(_DWORD *)(v35 + 12);
          v31 = v32;
          v32 = *(_DWORD *)v32;
          if ( *(_DWORD *)(v35 + 12) % (unsigned int)dword_27DABB0 == v30 )
      v44 = v31 == 0;
      if ( v31 )
        v31 = *(_DWORD *)v31;
        v44 = v31 == 0;
      if ( v44 )
LABEL_70:
        v45 = operator new(0x10u);
        *v45 = 0;
        v45[1] = 17;
        v45[2] = &unk_28898CC;
        v31 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                v30,
                0x11u,
                (int)v45);
      EntityInteraction::setInteractText(&v71, (int *)(v31 + 8));
    default:
  }
  if ( *(_DWORD *)(v71 - 12) && (*(_DWORD *)(v5 + 984) & (1 << v3)) >= 1 )
    v46 = *(_DWORD *)(v5 + 628);
    sub_119C854(&v68, &v71);
    ContainerManagerController::getContainerModel((int)&v69, v46, (int **)&v68);
    v47 = v70;
    if ( v70 )
    {
      v48 = *(_DWORD *)(v70 + 4);
      v49 = (unsigned int *)(v70 + 4);
      do
        while ( 1 )
          if ( !v48 )
          {
            v52 = 1;
            v47 = 0;
            goto LABEL_87;
          }
          __dmb();
          v50 = __ldrex(v49);
          if ( v50 == v48 )
            break;
          __clrex();
          v48 = v50;
        v51 = __strex(v48 + 1, v49);
        v48 = v50;
      while ( v51 );
      __dmb();
      v52 = 0;
      if ( !*v49 )
        v52 = 1;
LABEL_87:
      v53 = v70;
      v54 = v69;
      if ( v52 )
        v54 = 0;
      if ( v70 )
        v55 = (unsigned int *)(v70 + 8);
        if ( &pthread_create )
          do
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
        else
          v56 = (*v55)--;
        if ( v56 == 1 )
          (*(void (**)(void))(*(_DWORD *)v53 + 12))();
    }
    else
      v54 = 0;
      v47 = 0;
    v57 = (void *)(v68 - 12);
    if ( (int *)(v68 - 12) != &dword_28898C0 )
      v65 = (unsigned int *)(v68 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
      else
        v66 = (*v65)--;
      if ( v66 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v57);
    if ( v54 )
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v54 + 76))(v54, v67);
      *(_DWORD *)(v5 + 984) &= ~(1 << v3);
    if ( v47 )
      v58 = (unsigned int *)(v47 + 4);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 == 1 )
        v60 = (unsigned int *)(v47 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 8))(v47);
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
          v61 = (*v60)--;
        if ( v61 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 12))(v47);
  else if ( v4 == 6 )
    *(_DWORD *)(v5 + 984) &= 0xFFFFFFDF;
  v62 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v71 - 4);
    if ( &pthread_create )
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v62);
}


int *__fastcall CraftingScreenController::_storeFocusRestorationContext(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int *result; // r0@1

  v3 = a1;
  v4 = a3;
  *(_DWORD *)(a1 + 956) = *(_DWORD *)(a1 + 768);
  result = EntityInteraction::setInteractText((int *)(a1 + 960), a2);
  *(_DWORD *)(v3 + 964) = v4;
  return result;
}


void __fastcall CraftingScreenController::_changeRightSideInventoryTab(CraftingScreenController *this, int a2)
{
  CraftingScreenController::_changeRightSideInventoryTab(this, a2);
}


void __fastcall CraftingScreenController::_savePlayerInventoryOptions(CraftingScreenController *this)
{
  CraftingScreenController::_savePlayerInventoryOptions(this);
}


int __fastcall CraftingScreenController::_pocketCraftingOutputAutoPlace(int a1, void *a2, int a3, int a4, int a5, int a6, int a7, void *a8, int a9, int a10, char a11, int a12, int a13, char a14, int a15, int a16, int a17, char a18)
{
  int v18; // r7@1
  int **v19; // r4@1
  unsigned __int16 v20; // r0@1
  int v21; // r8@1
  int v22; // r1@1
  int v23; // r4@1
  int v24; // r3@1
  unsigned int v25; // r6@1
  char *v26; // r2@1
  int v27; // r1@4
  int v28; // r3@4
  unsigned int v29; // r5@4
  char *v30; // r2@4
  void *v31; // r4@7
  unsigned int *v32; // r1@9
  signed int v33; // r0@11
  unsigned int *v34; // r2@16
  signed int v35; // r1@18
  unsigned int *v36; // r2@20
  signed int v37; // r1@22
  char *v38; // r10@32
  _DWORD *v39; // r0@32
  char *v40; // r9@32
  size_t v41; // r2@32
  signed int v42; // r8@33
  void *v43; // r0@39
  void *v44; // r0@40
  void *v45; // r0@42
  int v46; // r5@42
  int v48; // [sp+8h] [bp-88h]@8
  int v49; // [sp+10h] [bp-80h]@1
  const void **v50; // [sp+14h] [bp-7Ch]@1
  void *v51; // [sp+18h] [bp-78h]@7
  int v52; // [sp+1Ch] [bp-74h]@16
  int v53; // [sp+20h] [bp-70h]@20
  void *s2; // [sp+24h] [bp-6Ch]@32
  char *v55; // [sp+28h] [bp-68h]@4
  int v56; // [sp+2Ch] [bp-64h]@4
  char *v57; // [sp+30h] [bp-60h]@4
  char *v58; // [sp+34h] [bp-5Ch]@1
  int v59; // [sp+38h] [bp-58h]@1
  char *v60; // [sp+3Ch] [bp-54h]@1
  void *ptr; // [sp+40h] [bp-50h]@7
  void *v62; // [sp+44h] [bp-4Ch]@7
  unsigned __int64 v63; // [sp+4Ch] [bp-44h]@1
  unsigned __int64 v64; // [sp+58h] [bp-38h]@1

  v18 = a1;
  v49 = a3;
  v50 = (const void **)a2;
  v19 = (int **)a4;
  CraftingContainerManagerController::getCurrentContainerStateList(
    (CraftingContainerManagerController *)&v64,
    *(_DWORD *)(a1 + 628));
  v20 = MinecraftScreenController::_getNameId((ScreenController *)v18, v19);
  v21 = ContainerScreenController::_releaseHeldButton((MinecraftScreenController *)v18, v50, v49, v20);
    (CraftingContainerManagerController *)&v63,
    *(_DWORD *)(v18 + 628));
  v22 = HIDWORD(v64);
  v23 = *(_DWORD *)(v18 + 628);
  v24 = HIDWORD(v64);
  v25 = -1171354717 * ((HIDWORD(v64) - (signed int)v64) >> 3);
  v26 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  if ( HIDWORD(v64) != (_DWORD)v64 )
  {
    if ( v25 >= 0x2E8BA2F )
      sub_119C874();
    v26 = (char *)operator new(HIDWORD(v64) - v64);
    v22 = HIDWORD(v64);
    v24 = v64;
  }
  v58 = v26;
  v60 = &v26[88 * v25];
  v59 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemStateData const*,std::vector<ItemStateData,std::allocator<ItemStateData>>>,ItemStateData*>(
          v24,
          v22,
          (int)v26);
  v27 = HIDWORD(v63);
  v28 = HIDWORD(v63);
  v29 = -1171354717 * ((HIDWORD(v63) - (signed int)v63) >> 3);
  v30 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  if ( HIDWORD(v63) != (_DWORD)v63 )
    if ( v29 >= 0x2E8BA2F )
    v30 = (char *)operator new(HIDWORD(v63) - v63);
    v27 = HIDWORD(v63);
    v28 = v63;
  v55 = v30;
  v57 = &v30[88 * v29];
  v56 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemStateData const*,std::vector<ItemStateData,std::allocator<ItemStateData>>>,ItemStateData*>(
          v28,
          v27,
          (int)v30);
  CraftingContainerManagerController::compareStatesAndCollectTransfers(
    (int)&ptr,
    v23,
    (unsigned __int64 *)&v58,
    &v55,
    1);
  std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector((unsigned __int64 *)&v55);
  std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector((unsigned __int64 *)&v58);
  v31 = ptr;
  v51 = v62;
  if ( ptr == v62 )
    v45 = ptr;
    v46 = v21;
  else
    v48 = v21;
    do
    {
      sub_119CCEC(&s2, unk_27F98E0, CraftingContainerManagerController::TRANSFER_NO_ORIGIN);
      v38 = (char *)s2;
      v39 = (_DWORD *)*((_DWORD *)v31 + 18);
      v40 = (char *)s2 - 12;
      v41 = *(v39 - 3);
      if ( v41 == *((_DWORD *)s2 - 3) )
      {
        v42 = 0;
        if ( !memcmp(v39, s2, v41) )
          v42 = 1;
      }
      else
      if ( (int *)v40 != &dword_28898C0 )
        v32 = (unsigned int *)(v38 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
        }
        else
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v40);
      if ( v42 == 1 )
        sub_119C854(&v53, (int *)v50);
        sub_119C854(&v52, (int *)v31 + 20);
        CraftingScreenController::_sendFlyingItem(
          v18,
          (ItemInstance *)v31,
          (int)&v53,
          v49,
          (int)&v52,
          *((_DWORD *)v31 + 21));
        v43 = (void *)(v52 - 12);
        if ( (int *)(v52 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v52 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
          }
          else
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v43);
        v44 = (void *)(v53 - 12);
        if ( (int *)(v53 - 12) != &dword_28898C0 )
          v36 = (unsigned int *)(v53 - 4);
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v44);
      v31 = (char *)v31 + 88;
    }
    while ( v31 != v51 );
    v31 = v62;
    v46 = v48;
  std::_Destroy_aux<false>::__destroy<ItemTransferData *>((int)v45, (int)v31);
  if ( ptr )
    operator delete(ptr);
  std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector(&v63);
  std::vector<ItemStateData,std::allocator<ItemStateData>>::~vector(&v64);
  return v46;
}


void __fastcall CraftingScreenController::onOpen(CraftingScreenController *this)
{
  CraftingScreenController *v1; // r4@1

  v1 = this;
  ContainerScreenController::onOpen(this);
  j_j_j__ZN20MinecraftScreenModel24fireEventInventoryOpenedEb(*((MinecraftScreenModel **)v1 + 95), *((_BYTE *)v1 + 640));
}


void __fastcall CraftingScreenController::_getCraftStackText(CraftingScreenController *this, int a2)
{
  int v2; // r7@1
  void **v3; // r8@1
  int v4; // r0@1
  __int64 *v5; // r0@2
  __int64 *v6; // r5@2
  __int64 v7; // r0@2
  void *v8; // r9@3
  signed int v9; // r0@4
  int v10; // r5@6
  int v11; // r4@7
  void *v12; // r7@8
  void *v13; // r0@9
  void *v14; // r0@11
  int v15; // r0@13
  void *v16; // r7@19
  void *v17; // r0@20
  void *v18; // r0@22
  int v19; // r0@24
  int v20; // [sp+Ch] [bp-24h]@7

  v2 = a2;
  v3 = (void **)this;
  v4 = CraftingContainerManagerController::getCurrentRecipe(*(CraftingContainerManagerController **)(a2 + 628));
  if ( !v4 )
  {
LABEL_29:
    sub_119C884(v3, "controller.buttonTip.craftStack");
    return;
  }
  v5 = (__int64 *)(*(int (**)(void))(*(_DWORD *)v4 + 20))();
  v6 = v5;
  v7 = *v5;
  if ( HIDWORD(v7) == (_DWORD)v7 )
    v8 = 0;
    LODWORD(v7) = HIDWORD(v7);
  else
    v9 = HIDWORD(v7) - v7;
    if ( (unsigned int)(954437177 * (v9 >> 3)) >= 0x38E38E4 )
      sub_119C874();
    v8 = operator new(v9);
    v7 = *v6;
  v10 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemInstance const*,std::vector<ItemInstance,std::allocator<ItemInstance>>>,ItemInstance*>(
          v7,
          SHIDWORD(v7),
          (int)v8);
  if ( v8 == (void *)v10 )
LABEL_27:
    if ( v8 )
      operator delete(v8);
    goto LABEL_29;
  CraftingContainerManagerController::getCraftableCount(
    (CraftingContainerManagerController *)&v20,
    *(const ItemInstance **)(v2 + 628),
    (ItemInstance *)(v2 + 672));
  v11 = v20;
  if ( v11 >= ItemInstance::getMaxStackSize((ItemInstance *)(v2 + 672)) )
    v16 = v8;
    do
    {
      v17 = (void *)*((_DWORD *)v16 + 13);
      if ( v17 )
        operator delete(v17);
      v18 = (void *)*((_DWORD *)v16 + 9);
      if ( v18 )
        operator delete(v18);
      v19 = *((_DWORD *)v16 + 2);
      if ( v19 )
        (*(void (**)(void))(*(_DWORD *)v19 + 4))();
      *((_DWORD *)v16 + 2) = 0;
      v16 = (char *)v16 + 72;
    }
    while ( (void *)v10 != v16 );
    goto LABEL_27;
  sub_119C884(v3, "controller.buttonTip.craftAll");
  v12 = v8;
  do
    v13 = (void *)*((_DWORD *)v12 + 13);
    if ( v13 )
      operator delete(v13);
    v14 = (void *)*((_DWORD *)v12 + 9);
    if ( v14 )
      operator delete(v14);
    v15 = *((_DWORD *)v12 + 2);
    if ( v15 )
      (*(void (**)(void))(*(_DWORD *)v15 + 4))();
    *((_DWORD *)v12 + 2) = 0;
    v12 = (char *)v12 + 72;
  while ( (void *)v10 != v12 );
  if ( v8 )
    operator delete(v8);
}


void __fastcall CraftingScreenController::_getButtonYDescription(CraftingScreenController *this, ContainerScreenController *a2)
{
  CraftingScreenController::_getButtonYDescription(this, a2);
}


void __fastcall CraftingScreenController::_getButtonYDescription(CraftingScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r11@1
  void **v3; // r9@1
  const void **v4; // r8@3
  int v5; // r7@6
  int v6; // r0@6
  int v7; // r10@7
  int v8; // r4@7
  bool v9; // zf@8
  int v10; // r5@11
  bool v11; // zf@15
  _DWORD *v12; // r0@19
  _DWORD *v13; // r1@20
  size_t v14; // r2@20

  v2 = a2;
  v3 = (void **)this;
  if ( ContainerScreenController::_selectionActive(a2) == 1 )
  {
    sub_119C884(v3, "controller.buttonTip.drop");
  }
  else
    v4 = (const void **)((char *)v2 + 560);
    if ( CraftingContainerManagerController::isCreativeContainer(*((_DWORD *)v2 + 157), (const void **)v2 + 140) == 1 )
    {
      if ( MinecraftScreenModel::isCreative(*((MinecraftScreenModel **)v2 + 106)) == 1 )
        sub_119C884(v3, "controller.buttonTip.take");
      else
        CraftingScreenController::_getCraftStackText((CraftingScreenController *)v3, (int)v2);
    }
    else
      v5 = 0xBu % dword_27DABB0;
      v6 = *(_DWORD *)(dword_27DABAC + 4 * (0xBu % dword_27DABB0));
      if ( !v6 )
        goto LABEL_19;
      v7 = *(_DWORD *)v6;
      v8 = *(_DWORD *)(*(_DWORD *)v6 + 12);
      while ( 1 )
      {
        v9 = v8 == 11;
        if ( v8 == 11 )
          v9 = *(_DWORD *)(v7 + 4) == 11;
        if ( v9 )
          break;
        v10 = *(_DWORD *)v7;
        if ( *(_DWORD *)v7 )
        {
          v8 = *(_DWORD *)(v10 + 12);
          v6 = v7;
          v7 = *(_DWORD *)v7;
          if ( *(_DWORD *)(v10 + 12) % (unsigned int)dword_27DABB0 == v5 )
            continue;
        }
      }
      v11 = v6 == 0;
      if ( v6 )
        v6 = *(_DWORD *)v6;
        v11 = v6 == 0;
      if ( v11 )
LABEL_19:
        v12 = operator new(0x10u);
        *v12 = 0;
        v12[1] = 11;
        v12[2] = &unk_28898CC;
        v6 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               (int)&dword_27DABAC,
               v5,
               0xBu,
               (int)v12);
      v13 = *(_DWORD **)(v6 + 8);
      v14 = *((_DWORD *)*v4 - 3);
      if ( v14 == *(v13 - 3) && !memcmp(*v4, v13, v14) )
        sub_119C884(v3, "controller.buttonTip.craftAll");
        ContainerScreenController::_getButtonYDescription((ContainerScreenController *)v3, v2);
}


int __fastcall CraftingScreenController::_initiateProgressiveTake(int a1, int *a2, int a3)
{
  int v3; // r7@1
  ProgressiveTakeButtonData *v4; // r4@1
  int *v5; // r6@1
  int v6; // r5@1
  int v7; // r0@1

  v3 = a1;
  v4 = (ProgressiveTakeButtonData *)(a1 + 520);
  v5 = a2;
  v6 = a3;
  ProgressiveTakeButtonData::setHoldReleaseBehavior((_DWORD *)(a1 + 520), 1);
  ProgressiveTakeButtonData::setCollectionName((int)v4, v5);
  ProgressiveTakeButtonData::setCollectionIndex(v4, v6);
  v7 = ContainerManagerController::getItemInstance(*(_DWORD *)(v3 + 628), (int **)v5, v6);
  ProgressiveTakeButtonData::setTotalStackCount(v4, *(_BYTE *)(v7 + 14));
  return j_j_j__ZN25ProgressiveTakeButtonData27setAutoHandleAtMaxStackSizeEb(v4, 0);
}


void __fastcall CraftingScreenController::_restoreFocusFromRestorationContext(CraftingScreenController *this)
{
  CraftingScreenController *v1; // r4@1
  int v2; // r6@1
  int v3; // r7@1
  int v4; // r8@1
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  int v7; // [sp+4h] [bp-24h]@1

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 956) >> 32;
  v3 = *(_QWORD *)((char *)this + 956);
  v7 = *(_QWORD *)((char *)this + 956) >> 32;
  *((_DWORD *)this + 240) = &unk_28898CC;
  v4 = *((_DWORD *)this + 241);
  *((_DWORD *)this + 239) = -1;
  sub_119CA68((const void **)this + 240, 0, (_BYTE *)dword_28898C0, 0);
  *((_DWORD *)v1 + 241) = -1;
  if ( *((_DWORD *)v1 + 233) && *((_DWORD *)v1 + 192) == v3 )
  {
    (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 234))((char *)v1 + 924, &v7, v4);
    v2 = v7;
  }
  if ( (int *)(v2 - 12) != &dword_28898C0 )
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j_j__ZdlPv_9_1((void *)(v2 - 12));
}


void __fastcall CraftingScreenController::_registerBindings(CraftingScreenController *this)
{
  CraftingScreenController::_registerBindings(this);
}


void __fastcall CraftingScreenController::_registerEventHandlers(CraftingScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  void *v4; // r0@3
  int v5; // r5@4
  _DWORD *v6; // r0@4
  __int64 v7; // r1@4
  void *v8; // r0@6
  int v9; // r5@7
  _DWORD *v10; // r0@7
  __int64 v11; // r1@7
  void *v12; // r0@9
  int v13; // r5@10
  _DWORD *v14; // r0@10
  __int64 v15; // r1@10
  void *v16; // r0@12
  int v17; // r5@13
  _DWORD *v18; // r0@13
  __int64 v19; // r1@13
  void *v20; // r0@15
  int v21; // r5@16
  _DWORD *v22; // r0@16
  __int64 v23; // r1@16
  void *v24; // r0@18
  int v25; // r5@19
  _DWORD *v26; // r0@19
  __int64 v27; // r1@19
  void *v28; // r0@21
  int v29; // r5@22
  _DWORD *v30; // r0@22
  __int64 v31; // r1@22
  void *v32; // r0@24
  int v33; // r5@25
  _DWORD *v34; // r0@25
  __int64 v35; // r1@25
  void *v36; // r0@27
  int v37; // r5@28
  _DWORD *v38; // r0@28
  __int64 v39; // r1@28
  void *v40; // r0@30
  int v41; // r5@31
  _DWORD *v42; // r0@31
  __int64 v43; // r1@31
  void *v44; // r0@33
  int v45; // r5@34
  _DWORD *v46; // r0@34
  __int64 v47; // r1@34
  void *v48; // r0@36
  int v49; // r5@37
  _DWORD *v50; // r0@37
  __int64 v51; // r1@37
  void *v52; // r0@39
  int v53; // r5@40
  _DWORD *v54; // r0@40
  __int64 v55; // r1@40
  void *v56; // r0@42
  int v57; // r5@43
  _DWORD *v58; // r0@43
  __int64 v59; // r1@43
  void *v60; // r0@45
  int v61; // r5@46
  _DWORD *v62; // r0@46
  __int64 v63; // r1@46
  void *v64; // r0@48
  int v65; // r5@49
  _DWORD *v66; // r0@49
  __int64 v67; // r1@49
  void *v68; // r0@51
  int v69; // r5@52
  _DWORD *v70; // r0@52
  __int64 v71; // r1@52
  void *v72; // r0@54
  int v73; // r5@55
  _DWORD *v74; // r0@55
  __int64 v75; // r1@55
  void *v76; // r0@57
  int v77; // r5@58
  _DWORD *v78; // r0@58
  __int64 v79; // r1@58
  void *v80; // r0@60
  int v81; // r5@61
  _DWORD *v82; // r0@61
  __int64 v83; // r1@61
  void *v84; // r0@63
  int v85; // r5@64
  _DWORD *v86; // r0@64
  __int64 v87; // r1@64
  void *v88; // r0@66
  int v89; // r5@67
  _DWORD *v90; // r0@67
  __int64 v91; // r1@67
  void *v92; // r0@69
  int v93; // r5@70
  _DWORD *v94; // r0@70
  __int64 v95; // r1@70
  void *v96; // r0@72
  int v97; // r5@73
  _DWORD *v98; // r0@73
  __int64 v99; // r1@73
  void *v100; // r0@75
  int v101; // r5@76
  _DWORD *v102; // r0@76
  __int64 v103; // r1@76
  void *v104; // r0@78
  _DWORD *v105; // r0@79
  __int64 v106; // r1@79
  int v107; // r5@81
  _DWORD *v108; // r0@81
  __int64 v109; // r1@81
  void *v110; // r0@83
  int v111; // r5@84
  _DWORD *v112; // r0@84
  __int64 v113; // r1@84
  void *v114; // r0@86
  int v115; // r5@87
  _DWORD *v116; // r0@87
  __int64 v117; // r1@87
  void *v118; // r0@89
  int v119; // r5@90
  _DWORD *v120; // r0@90
  __int64 v121; // r1@90
  void *v122; // r0@92
  int v123; // r5@93
  _DWORD *v124; // r0@93
  __int64 v125; // r1@93
  void *v126; // r0@95
  int v127; // r5@96
  _DWORD *v128; // r0@96
  __int64 v129; // r1@96
  void *v130; // r0@98
  int v131; // r5@99
  _DWORD *v132; // r0@99
  __int64 v133; // r1@99
  void *v134; // r0@101
  int v135; // r5@102
  _DWORD *v136; // r0@102
  __int64 v137; // r1@102
  void *v138; // r0@104
  int v139; // r5@105
  _DWORD *v140; // r0@105
  __int64 v141; // r1@105
  void *v142; // r0@107
  int v143; // r5@108
  _DWORD *v144; // r0@108
  __int64 v145; // r1@108
  void *v146; // r0@110
  int v147; // r5@111
  _DWORD *v148; // r0@111
  __int64 v149; // r1@111
  void *v150; // r0@113
  _DWORD *v151; // r0@114
  __int64 v152; // r1@114
  _DWORD *v153; // r0@116
  __int64 v154; // r1@116
  int v155; // r5@118
  _DWORD *v156; // r0@118
  __int64 v157; // r1@118
  void *v158; // r0@120
  int v159; // r5@121
  _DWORD *v160; // r0@121
  __int64 v161; // r1@121
  void *v162; // r0@123
  int v163; // r5@124
  _DWORD *v164; // r0@124
  __int64 v165; // r1@124
  void *v166; // r0@126
  int v167; // r5@127
  _DWORD *v168; // r0@127
  __int64 v169; // r1@127
  void *v170; // r0@129
  int v171; // r5@130
  _DWORD *v172; // r0@130
  __int64 v173; // r1@130
  void *v174; // r0@132
  unsigned int *v175; // r2@134
  signed int v176; // r1@136
  unsigned int *v177; // r2@138
  signed int v178; // r1@140
  unsigned int *v179; // r2@142
  signed int v180; // r1@144
  unsigned int *v181; // r2@146
  signed int v182; // r1@148
  unsigned int *v183; // r2@150
  signed int v184; // r1@152
  unsigned int *v185; // r2@154
  signed int v186; // r1@156
  unsigned int *v187; // r2@158
  signed int v188; // r1@160
  unsigned int *v189; // r2@162
  signed int v190; // r1@164
  unsigned int *v191; // r2@166
  signed int v192; // r1@168
  unsigned int *v193; // r2@170
  signed int v194; // r1@172
  unsigned int *v195; // r2@174
  signed int v196; // r1@176
  unsigned int *v197; // r2@178
  signed int v198; // r1@180
  unsigned int *v199; // r2@182
  signed int v200; // r1@184
  unsigned int *v201; // r2@186
  signed int v202; // r1@188
  unsigned int *v203; // r2@190
  signed int v204; // r1@192
  unsigned int *v205; // r2@194
  signed int v206; // r1@196
  unsigned int *v207; // r2@198
  signed int v208; // r1@200
  unsigned int *v209; // r2@202
  signed int v210; // r1@204
  unsigned int *v211; // r2@206
  signed int v212; // r1@208
  unsigned int *v213; // r2@210
  signed int v214; // r1@212
  unsigned int *v215; // r2@214
  signed int v216; // r1@216
  unsigned int *v217; // r2@218
  signed int v218; // r1@220
  unsigned int *v219; // r2@222
  signed int v220; // r1@224
  unsigned int *v221; // r2@226
  signed int v222; // r1@228
  unsigned int *v223; // r2@230
  signed int v224; // r1@232
  unsigned int *v225; // r2@234
  signed int v226; // r1@236
  unsigned int *v227; // r2@238
  signed int v228; // r1@240
  unsigned int *v229; // r2@242
  signed int v230; // r1@244
  unsigned int *v231; // r2@246
  signed int v232; // r1@248
  unsigned int *v233; // r2@250
  signed int v234; // r1@252
  unsigned int *v235; // r2@254
  signed int v236; // r1@256
  unsigned int *v237; // r2@258
  signed int v238; // r1@260
  unsigned int *v239; // r2@262
  signed int v240; // r1@264
  unsigned int *v241; // r2@266
  signed int v242; // r1@268
  unsigned int *v243; // r2@270
  signed int v244; // r1@272
  unsigned int *v245; // r2@274
  signed int v246; // r1@276
  unsigned int *v247; // r2@278
  signed int v248; // r1@280
  unsigned int *v249; // r2@282
  signed int v250; // r1@284
  unsigned int *v251; // r2@286
  signed int v252; // r1@288
  unsigned int *v253; // r2@290
  signed int v254; // r1@292
  unsigned int *v255; // r2@294
  signed int v256; // r1@296
  unsigned int *v257; // r2@298
  signed int v258; // r1@300
  _DWORD *v259; // [sp+4h] [bp-434h]@130
  __int64 v260; // [sp+Ch] [bp-42Ch]@130
  int v261; // [sp+18h] [bp-420h]@130
  _DWORD *v262; // [sp+1Ch] [bp-41Ch]@127
  __int64 v263; // [sp+24h] [bp-414h]@127
  int v264; // [sp+30h] [bp-408h]@127
  _DWORD *v265; // [sp+34h] [bp-404h]@124
  __int64 v266; // [sp+3Ch] [bp-3FCh]@124
  int v267; // [sp+48h] [bp-3F0h]@124
  _DWORD *v268; // [sp+4Ch] [bp-3ECh]@121
  __int64 v269; // [sp+54h] [bp-3E4h]@121
  int v270; // [sp+60h] [bp-3D8h]@121
  _DWORD *v271; // [sp+64h] [bp-3D4h]@118
  __int64 v272; // [sp+6Ch] [bp-3CCh]@118
  int v273; // [sp+78h] [bp-3C0h]@118
  _DWORD *v274; // [sp+7Ch] [bp-3BCh]@116
  __int64 v275; // [sp+84h] [bp-3B4h]@116
  _DWORD *v276; // [sp+8Ch] [bp-3ACh]@114
  __int64 v277; // [sp+94h] [bp-3A4h]@114
  _DWORD *v278; // [sp+9Ch] [bp-39Ch]@111
  __int64 v279; // [sp+A4h] [bp-394h]@111
  int v280; // [sp+B0h] [bp-388h]@111
  _DWORD *v281; // [sp+B4h] [bp-384h]@108
  __int64 v282; // [sp+BCh] [bp-37Ch]@108
  int v283; // [sp+C8h] [bp-370h]@108
  _DWORD *v284; // [sp+CCh] [bp-36Ch]@105
  __int64 v285; // [sp+D4h] [bp-364h]@105
  int v286; // [sp+E0h] [bp-358h]@105
  _DWORD *v287; // [sp+E4h] [bp-354h]@102
  __int64 v288; // [sp+ECh] [bp-34Ch]@102
  int v289; // [sp+F8h] [bp-340h]@102
  _DWORD *v290; // [sp+FCh] [bp-33Ch]@99
  __int64 v291; // [sp+104h] [bp-334h]@99
  int v292; // [sp+110h] [bp-328h]@99
  _DWORD *v293; // [sp+114h] [bp-324h]@96
  __int64 v294; // [sp+11Ch] [bp-31Ch]@96
  int v295; // [sp+128h] [bp-310h]@96
  _DWORD *v296; // [sp+12Ch] [bp-30Ch]@93
  __int64 v297; // [sp+134h] [bp-304h]@93
  int v298; // [sp+140h] [bp-2F8h]@93
  _DWORD *v299; // [sp+144h] [bp-2F4h]@90
  __int64 v300; // [sp+14Ch] [bp-2ECh]@90
  int v301; // [sp+158h] [bp-2E0h]@90
  _DWORD *v302; // [sp+15Ch] [bp-2DCh]@87
  __int64 v303; // [sp+164h] [bp-2D4h]@87
  int v304; // [sp+170h] [bp-2C8h]@87
  _DWORD *v305; // [sp+174h] [bp-2C4h]@84
  __int64 v306; // [sp+17Ch] [bp-2BCh]@84
  int v307; // [sp+188h] [bp-2B0h]@84
  _DWORD *v308; // [sp+18Ch] [bp-2ACh]@81
  __int64 v309; // [sp+194h] [bp-2A4h]@81
  int v310; // [sp+1A0h] [bp-298h]@81
  _DWORD *v311; // [sp+1A4h] [bp-294h]@79
  __int64 v312; // [sp+1ACh] [bp-28Ch]@79
  _DWORD *v313; // [sp+1B4h] [bp-284h]@76
  __int64 v314; // [sp+1BCh] [bp-27Ch]@76
  int v315; // [sp+1C8h] [bp-270h]@76
  _DWORD *v316; // [sp+1CCh] [bp-26Ch]@73
  __int64 v317; // [sp+1D4h] [bp-264h]@73
  int v318; // [sp+1E0h] [bp-258h]@73
  _DWORD *v319; // [sp+1E4h] [bp-254h]@70
  __int64 v320; // [sp+1ECh] [bp-24Ch]@70
  int v321; // [sp+1F8h] [bp-240h]@70
  _DWORD *v322; // [sp+1FCh] [bp-23Ch]@67
  __int64 v323; // [sp+204h] [bp-234h]@67
  int v324; // [sp+210h] [bp-228h]@67
  _DWORD *v325; // [sp+214h] [bp-224h]@64
  __int64 v326; // [sp+21Ch] [bp-21Ch]@64
  int v327; // [sp+228h] [bp-210h]@64
  _DWORD *v328; // [sp+22Ch] [bp-20Ch]@61
  __int64 v329; // [sp+234h] [bp-204h]@61
  int v330; // [sp+240h] [bp-1F8h]@61
  _DWORD *v331; // [sp+244h] [bp-1F4h]@58
  __int64 v332; // [sp+24Ch] [bp-1ECh]@58
  int v333; // [sp+258h] [bp-1E0h]@58
  _DWORD *v334; // [sp+25Ch] [bp-1DCh]@55
  __int64 v335; // [sp+264h] [bp-1D4h]@55
  int v336; // [sp+270h] [bp-1C8h]@55
  _DWORD *v337; // [sp+274h] [bp-1C4h]@52
  __int64 v338; // [sp+27Ch] [bp-1BCh]@52
  int v339; // [sp+288h] [bp-1B0h]@52
  _DWORD *v340; // [sp+28Ch] [bp-1ACh]@49
  __int64 v341; // [sp+294h] [bp-1A4h]@49
  int v342; // [sp+2A0h] [bp-198h]@49
  _DWORD *v343; // [sp+2A4h] [bp-194h]@46
  __int64 v344; // [sp+2ACh] [bp-18Ch]@46
  int v345; // [sp+2B8h] [bp-180h]@46
  _DWORD *v346; // [sp+2BCh] [bp-17Ch]@43
  __int64 v347; // [sp+2C4h] [bp-174h]@43
  int v348; // [sp+2D0h] [bp-168h]@43
  _DWORD *v349; // [sp+2D4h] [bp-164h]@40
  __int64 v350; // [sp+2DCh] [bp-15Ch]@40
  int v351; // [sp+2E8h] [bp-150h]@40
  _DWORD *v352; // [sp+2ECh] [bp-14Ch]@37
  __int64 v353; // [sp+2F4h] [bp-144h]@37
  int v354; // [sp+300h] [bp-138h]@37
  _DWORD *v355; // [sp+304h] [bp-134h]@34
  __int64 v356; // [sp+30Ch] [bp-12Ch]@34
  int v357; // [sp+318h] [bp-120h]@34
  _DWORD *v358; // [sp+31Ch] [bp-11Ch]@31
  __int64 v359; // [sp+324h] [bp-114h]@31
  int v360; // [sp+330h] [bp-108h]@31
  _DWORD *v361; // [sp+334h] [bp-104h]@28
  __int64 v362; // [sp+33Ch] [bp-FCh]@28
  int v363; // [sp+348h] [bp-F0h]@28
  _DWORD *v364; // [sp+34Ch] [bp-ECh]@25
  __int64 v365; // [sp+354h] [bp-E4h]@25
  int v366; // [sp+360h] [bp-D8h]@25
  _DWORD *v367; // [sp+364h] [bp-D4h]@22
  __int64 v368; // [sp+36Ch] [bp-CCh]@22
  int v369; // [sp+378h] [bp-C0h]@22
  _DWORD *v370; // [sp+37Ch] [bp-BCh]@19
  __int64 v371; // [sp+384h] [bp-B4h]@19
  int v372; // [sp+390h] [bp-A8h]@19
  _DWORD *v373; // [sp+394h] [bp-A4h]@16
  __int64 v374; // [sp+39Ch] [bp-9Ch]@16
  int v375; // [sp+3A8h] [bp-90h]@16
  _DWORD *v376; // [sp+3ACh] [bp-8Ch]@13
  __int64 v377; // [sp+3B4h] [bp-84h]@13
  int v378; // [sp+3C0h] [bp-78h]@13
  _DWORD *v379; // [sp+3C4h] [bp-74h]@10
  __int64 v380; // [sp+3CCh] [bp-6Ch]@10
  int v381; // [sp+3D8h] [bp-60h]@10
  _DWORD *v382; // [sp+3DCh] [bp-5Ch]@7
  __int64 v383; // [sp+3E4h] [bp-54h]@7
  int v384; // [sp+3F0h] [bp-48h]@7
  _DWORD *v385; // [sp+3F4h] [bp-44h]@4
  __int64 v386; // [sp+3FCh] [bp-3Ch]@4
  int v387; // [sp+408h] [bp-30h]@4
  _DWORD *v388; // [sp+40Ch] [bp-2Ch]@1
  void (*v389)(void); // [sp+414h] [bp-24h]@1
  int (__fastcall *v390)(int **, int); // [sp+418h] [bp-20h]@1
  int v391; // [sp+420h] [bp-18h]@1

  v1 = this;
  sub_119C884((void **)&v391, "toggle.enableRecipeBook");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v391);
  v3 = operator new(4u);
  *v3 = v1;
  v388 = v3;
  v390 = sub_117498A;
  v389 = (void (*)(void))sub_11749BA;
  ScreenController::registerToggleChangeEventHandler((int)v1, v2, (int)&v388);
  if ( v389 )
    v389();
  v4 = (void *)(v391 - 12);
  if ( (int *)(v391 - 12) != &dword_28898C0 )
  {
    v175 = (unsigned int *)(v391 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v176 = __ldrex(v175);
      while ( __strex(v176 - 1, v175) );
    }
    else
      v176 = (*v175)--;
    if ( v176 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  sub_119C884((void **)&v387, "#text_box_name");
  v5 = MinecraftScreenController::_getNameId(v1, (int **)&v387);
  v6 = operator new(4u);
  LODWORD(v7) = sub_1174D48;
  *v6 = v1;
  HIDWORD(v7) = sub_11749F0;
  v385 = v6;
  v386 = v7;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v5, (int)&v385);
  if ( (_DWORD)v386 )
    ((void (*)(void))v386)();
  v8 = (void *)(v387 - 12);
  if ( (int *)(v387 - 12) != &dword_28898C0 )
    v177 = (unsigned int *)(v387 - 4);
        v178 = __ldrex(v177);
      while ( __strex(v178 - 1, v177) );
      v178 = (*v177)--;
    if ( v178 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v384, "#text_box_name");
  v9 = MinecraftScreenController::_getNameId(v1, (int **)&v384);
  v10 = operator new(4u);
  LODWORD(v11) = sub_1174D8C;
  *v10 = v1;
  HIDWORD(v11) = sub_1174D7E;
  v382 = v10;
  v383 = v11;
  ScreenController::registerTextEditFinishedEventHandler((int)v1, v9, (int)&v382);
  if ( (_DWORD)v383 )
    ((void (*)(void))v383)();
  v12 = (void *)(v384 - 12);
  if ( (int *)(v384 - 12) != &dword_28898C0 )
    v179 = (unsigned int *)(v384 - 4);
        v180 = __ldrex(v179);
      while ( __strex(v180 - 1, v179) );
      v180 = (*v179)--;
    if ( v180 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  sub_119C884((void **)&v381, "button.left_panel_tab_decrement");
  v13 = MinecraftScreenController::_getNameId(v1, (int **)&v381);
  v14 = operator new(4u);
  LODWORD(v15) = sub_1174DD4;
  *v14 = v1;
  HIDWORD(v15) = sub_1174DC2;
  v379 = v14;
  v380 = v15;
  ScreenController::registerButtonClickHandler((int)v1, v13, (int)&v379);
  if ( (_DWORD)v380 )
    ((void (*)(void))v380)();
  v16 = (void *)(v381 - 12);
  if ( (int *)(v381 - 12) != &dword_28898C0 )
    v181 = (unsigned int *)(v381 - 4);
        v182 = __ldrex(v181);
      while ( __strex(v182 - 1, v181) );
      v182 = (*v181)--;
    if ( v182 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  sub_119C884((void **)&v378, "button.left_panel_tab_increment");
  v17 = MinecraftScreenController::_getNameId(v1, (int **)&v378);
  v18 = operator new(4u);
  LODWORD(v19) = sub_1174E1A;
  *v18 = v1;
  HIDWORD(v19) = sub_1174E0A;
  v376 = v18;
  v377 = v19;
  ScreenController::registerButtonClickHandler((int)v1, v17, (int)&v376);
  if ( (_DWORD)v377 )
    ((void (*)(void))v377)();
  v20 = (void *)(v378 - 12);
  if ( (int *)(v378 - 12) != &dword_28898C0 )
    v183 = (unsigned int *)(v378 - 4);
        v184 = __ldrex(v183);
      while ( __strex(v184 - 1, v183) );
      v184 = (*v183)--;
    if ( v184 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  sub_119C884((void **)&v375, "button.right_panel_tab_decrement");
  v21 = MinecraftScreenController::_getNameId(v1, (int **)&v375);
  v22 = operator new(4u);
  LODWORD(v23) = sub_1174E62;
  *v22 = v1;
  HIDWORD(v23) = sub_1174E50;
  v373 = v22;
  v374 = v23;
  ScreenController::registerButtonClickHandler((int)v1, v21, (int)&v373);
  if ( (_DWORD)v374 )
    ((void (*)(void))v374)();
  v24 = (void *)(v375 - 12);
  if ( (int *)(v375 - 12) != &dword_28898C0 )
    v185 = (unsigned int *)(v375 - 4);
        v186 = __ldrex(v185);
      while ( __strex(v186 - 1, v185) );
      v186 = (*v185)--;
    if ( v186 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  sub_119C884((void **)&v372, "button.right_panel_tab_increment");
  v25 = MinecraftScreenController::_getNameId(v1, (int **)&v372);
  v26 = operator new(4u);
  LODWORD(v27) = sub_1174EA8;
  *v26 = v1;
  HIDWORD(v27) = sub_1174E98;
  v370 = v26;
  v371 = v27;
  ScreenController::registerButtonClickHandler((int)v1, v25, (int)&v370);
  if ( (_DWORD)v371 )
    ((void (*)(void))v371)();
  v28 = (void *)(v372 - 12);
  if ( (int *)(v372 - 12) != &dword_28898C0 )
    v187 = (unsigned int *)(v372 - 4);
        v188 = __ldrex(v187);
      while ( __strex(v188 - 1, v187) );
      v188 = (*v187)--;
    if ( v188 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  sub_119C884((void **)&v369, "button.focus_left");
  v29 = MinecraftScreenController::_getNameId(v1, (int **)&v369);
  v30 = operator new(4u);
  LODWORD(v31) = sub_1174FB4;
  *v30 = v1;
  HIDWORD(v31) = sub_1174EE0;
  v367 = v30;
  v368 = v31;
  ScreenController::registerButtonClickHandler((int)v1, v29, (int)&v367);
  if ( (_DWORD)v368 )
    ((void (*)(void))v368)();
  v32 = (void *)(v369 - 12);
  if ( (int *)(v369 - 12) != &dword_28898C0 )
    v189 = (unsigned int *)(v369 - 4);
        v190 = __ldrex(v189);
      while ( __strex(v190 - 1, v189) );
      v190 = (*v189)--;
    if ( v190 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
  sub_119C884((void **)&v366, "button.focus_right");
  v33 = MinecraftScreenController::_getNameId(v1, (int **)&v366);
  v34 = operator new(4u);
  LODWORD(v35) = sub_11751D0;
  *v34 = v1;
  HIDWORD(v35) = sub_1174FEC;
  v364 = v34;
  v365 = v35;
  ScreenController::registerButtonClickHandler((int)v1, v33, (int)&v364);
  if ( (_DWORD)v365 )
    ((void (*)(void))v365)();
  v36 = (void *)(v366 - 12);
  if ( (int *)(v366 - 12) != &dword_28898C0 )
    v191 = (unsigned int *)(v366 - 4);
        v192 = __ldrex(v191);
      while ( __strex(v192 - 1, v191) );
      v192 = (*v191)--;
    if ( v192 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  sub_119C884((void **)&v363, "button.help");
  v37 = MinecraftScreenController::_getNameId(v1, (int **)&v363);
  v38 = operator new(4u);
  LODWORD(v39) = sub_117522C;
  *v38 = v1;
  HIDWORD(v39) = sub_1175206;
  v361 = v38;
  v362 = v39;
  ScreenController::registerButtonClickHandler((int)v1, v37, (int)&v361);
  if ( (_DWORD)v362 )
    ((void (*)(void))v362)();
  v40 = (void *)(v363 - 12);
  if ( (int *)(v363 - 12) != &dword_28898C0 )
    v193 = (unsigned int *)(v363 - 4);
        v194 = __ldrex(v193);
      while ( __strex(v194 - 1, v193) );
      v194 = (*v193)--;
    if ( v194 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  sub_119C884((void **)&v360, "button.shift_pane_focus");
  v41 = MinecraftScreenController::_getNameId(v1, (int **)&v360);
  v42 = operator new(4u);
  LODWORD(v43) = sub_1175D48;
  *v42 = v1;
  HIDWORD(v43) = sub_1175264;
  v358 = v42;
  v359 = v43;
  ScreenController::registerButtonClickHandler((int)v1, v41, (int)&v358);
  if ( (_DWORD)v359 )
    ((void (*)(void))v359)();
  v44 = (void *)(v360 - 12);
  if ( (int *)(v360 - 12) != &dword_28898C0 )
    v195 = (unsigned int *)(v360 - 4);
        v196 = __ldrex(v195);
      while ( __strex(v196 - 1, v195) );
      v196 = (*v195)--;
    if ( v196 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v44);
  sub_119C884((void **)&v357, "navigation_tab");
  v45 = MinecraftScreenController::_getNameId(v1, (int **)&v357);
  v46 = operator new(4u);
  LODWORD(v47) = sub_1175E24;
  *v46 = v1;
  HIDWORD(v47) = sub_1175D80;
  v355 = v46;
  v356 = v47;
  ScreenController::registerToggleChangeEventHandler((int)v1, v45, (int)&v355);
  if ( (_DWORD)v356 )
    ((void (*)(void))v356)();
  v48 = (void *)(v357 - 12);
  if ( (int *)(v357 - 12) != &dword_28898C0 )
    v197 = (unsigned int *)(v357 - 4);
        v198 = __ldrex(v197);
      while ( __strex(v198 - 1, v197) );
      v198 = (*v197)--;
    if ( v198 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v48);
  sub_119C884((void **)&v354, "right_inventory_navigation_tab");
  v49 = MinecraftScreenController::_getNameId(v1, (int **)&v354);
  v50 = operator new(4u);
  LODWORD(v51) = sub_1175E78;
  *v50 = v1;
  HIDWORD(v51) = "h\nzIh";
  v352 = v50;
  v353 = v51;
  ScreenController::registerToggleChangeEventHandler((int)v1, v49, (int)&v352);
  if ( (_DWORD)v353 )
    ((void (*)(void))v353)();
  v52 = (void *)(v354 - 12);
  if ( (int *)(v354 - 12) != &dword_28898C0 )
    v199 = (unsigned int *)(v354 - 4);
        v200 = __ldrex(v199);
      while ( __strex(v200 - 1, v199) );
      v200 = (*v199)--;
    if ( v200 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v52);
  sub_119C884((void **)&v351, "button.try_menu_exit");
  v53 = MinecraftScreenController::_getNameId(v1, (int **)&v351);
  v54 = operator new(4u);
  LODWORD(v55) = sub_1175EC0;
  *v54 = v1;
  HIDWORD(v55) = sub_1175EAE;
  v349 = v54;
  v350 = v55;
  ScreenController::registerButtonClickHandler((int)v1, v53, (int)&v349);
  if ( (_DWORD)v350 )
    ((void (*)(void))v350)();
  v56 = (void *)(v351 - 12);
  if ( (int *)(v351 - 12) != &dword_28898C0 )
    v201 = (unsigned int *)(v351 - 4);
        v202 = __ldrex(v201);
      while ( __strex(v202 - 1, v201) );
      v202 = (*v201)--;
    if ( v202 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v56);
  sub_119C884((void **)&v348, "button.chat");
  v57 = MinecraftScreenController::_getNameId(v1, (int **)&v348);
  v58 = operator new(4u);
  LODWORD(v59) = sub_11760AC;
  *v58 = v1;
  HIDWORD(v59) = sub_1175EF8;
  v346 = v58;
  v347 = v59;
  ScreenController::registerButtonClickHandler((int)v1, v57, (int)&v346);
  if ( (_DWORD)v347 )
    ((void (*)(void))v347)();
  v60 = (void *)(v348 - 12);
  if ( (int *)(v348 - 12) != &dword_28898C0 )
    v203 = (unsigned int *)(v348 - 4);
        v204 = __ldrex(v203);
      while ( __strex(v204 - 1, v203) );
      v204 = (*v203)--;
    if ( v204 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v60);
  sub_119C884((void **)&v345, "button.crafting_output_primary");
  v61 = MinecraftScreenController::_getNameId(v1, (int **)&v345);
  v62 = operator new(4u);
  LODWORD(v63) = sub_117656C;
  *v62 = v1;
  HIDWORD(v63) = sub_11760E4;
  v343 = v62;
  v344 = v63;
  ScreenController::registerButtonEventHandler((int)v1, v61, 1, 3, (int)&v343);
  if ( (_DWORD)v344 )
    ((void (*)(void))v344)();
  v64 = (void *)(v345 - 12);
  if ( (int *)(v345 - 12) != &dword_28898C0 )
    v205 = (unsigned int *)(v345 - 4);
        v206 = __ldrex(v205);
      while ( __strex(v206 - 1, v205) );
      v206 = (*v205)--;
    if ( v206 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v64);
  sub_119C884((void **)&v342, "button.crafting_output_secondary");
  v65 = MinecraftScreenController::_getNameId(v1, (int **)&v342);
  v66 = operator new(4u);
  LODWORD(v67) = sub_1176974;
  *v66 = v1;
  HIDWORD(v67) = sub_11765A4;
  v340 = v66;
  v341 = v67;
  ScreenController::registerButtonEventHandler((int)v1, v65, 1, 3, (int)&v340);
  if ( (_DWORD)v341 )
    ((void (*)(void))v341)();
  v68 = (void *)(v342 - 12);
  if ( (int *)(v342 - 12) != &dword_28898C0 )
    v207 = (unsigned int *)(v342 - 4);
        v208 = __ldrex(v207);
      while ( __strex(v208 - 1, v207) );
      v208 = (*v207)--;
    if ( v208 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v68);
  sub_119C884((void **)&v339, "button.crafting_output_tertiary");
  v69 = MinecraftScreenController::_getNameId(v1, (int **)&v339);
  v70 = operator new(4u);
  LODWORD(v71) = sub_1176BF4;
  *v70 = v1;
  HIDWORD(v71) = sub_11769AC;
  v337 = v70;
  v338 = v71;
  ScreenController::registerButtonEventHandler((int)v1, v69, 1, 3, (int)&v337);
  if ( (_DWORD)v338 )
    ((void (*)(void))v338)();
  v72 = (void *)(v339 - 12);
  if ( (int *)(v339 - 12) != &dword_28898C0 )
    v209 = (unsigned int *)(v339 - 4);
        v210 = __ldrex(v209);
      while ( __strex(v210 - 1, v209) );
      v210 = (*v209)--;
    if ( v210 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v72);
  sub_119C884((void **)&v336, "button.clear_hotbar");
  v73 = MinecraftScreenController::_getNameId(v1, (int **)&v336);
  v74 = operator new(4u);
  LODWORD(v75) = sub_1176C66;
  *v74 = v1;
  HIDWORD(v75) = sub_1176C2A;
  v334 = v74;
  v335 = v75;
  ScreenController::registerButtonClickHandler((int)v1, v73, (int)&v334);
  if ( (_DWORD)v335 )
    ((void (*)(void))v335)();
  v76 = (void *)(v336 - 12);
  if ( (int *)(v336 - 12) != &dword_28898C0 )
    v211 = (unsigned int *)(v336 - 4);
        v212 = __ldrex(v211);
      while ( __strex(v212 - 1, v211) );
      v212 = (*v211)--;
    if ( v212 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v76);
  sub_119C884((void **)&v333, "button.recipe_refocus");
  v77 = MinecraftScreenController::_getNameId(v1, (int **)&v333);
  v78 = operator new(4u);
  LODWORD(v79) = sub_1176CD8;
  *v78 = v1;
  HIDWORD(v79) = sub_1176C9C;
  v331 = v78;
  v332 = v79;
  ScreenController::registerButtonClickHandler((int)v1, v77, (int)&v331);
  if ( (_DWORD)v332 )
    ((void (*)(void))v332)();
  v80 = (void *)(v333 - 12);
  if ( (int *)(v333 - 12) != &dword_28898C0 )
    v213 = (unsigned int *)(v333 - 4);
        v214 = __ldrex(v213);
      while ( __strex(v214 - 1, v213) );
      v214 = (*v213)--;
    if ( v214 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v80);
  sub_119C884((void **)&v330, "button.cursor_drop_all");
  v81 = MinecraftScreenController::_getNameId(v1, (int **)&v330);
  v82 = operator new(4u);
  LODWORD(v83) = sub_1176D6C;
  *v82 = v1;
  HIDWORD(v83) = sub_1176D10;
  v328 = v82;
  v329 = v83;
  ScreenController::registerButtonClickHandler((int)v1, v81, (int)&v328);
  if ( (_DWORD)v329 )
    ((void (*)(void))v329)();
  v84 = (void *)(v330 - 12);
  if ( (int *)(v330 - 12) != &dword_28898C0 )
    v215 = (unsigned int *)(v330 - 4);
        v216 = __ldrex(v215);
      while ( __strex(v216 - 1, v215) );
      v216 = (*v215)--;
    if ( v216 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v84);
  sub_119C884((void **)&v327, "button.touch_painting");
  v85 = MinecraftScreenController::_getNameId(v1, (int **)&v327);
  v86 = operator new(4u);
  LODWORD(v87) = sub_117717C;
  *v86 = v1;
  HIDWORD(v87) = sub_1176DA4;
  v325 = v86;
  v326 = v87;
  ScreenController::registerButtonEventHandler((int)v1, v85, 1, 0, (int)&v325);
  if ( (_DWORD)v326 )
    ((void (*)(void))v326)();
  v88 = (void *)(v327 - 12);
  if ( (int *)(v327 - 12) != &dword_28898C0 )
    v217 = (unsigned int *)(v327 - 4);
        v218 = __ldrex(v217);
      while ( __strex(v218 - 1, v217) );
      v218 = (*v217)--;
    if ( v218 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v88);
  sub_119C884((void **)&v324, "button.touch_deselect");
  v89 = MinecraftScreenController::_getNameId(v1, (int **)&v324);
  v90 = operator new(4u);
  LODWORD(v91) = sub_11771F8;
  *v90 = v1;
  HIDWORD(v91) = sub_11771B4;
  v322 = v90;
  v323 = v91;
  ScreenController::registerButtonEventHandler((int)v1, v89, 0, 4, (int)&v322);
  if ( (_DWORD)v323 )
    ((void (*)(void))v323)();
  v92 = (void *)(v324 - 12);
  if ( (int *)(v324 - 12) != &dword_28898C0 )
    v219 = (unsigned int *)(v324 - 4);
        v220 = __ldrex(v219);
      while ( __strex(v220 - 1, v219) );
      v220 = (*v219)--;
    if ( v220 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v92);
  sub_119C884((void **)&v321, "button.touch_coalesce_stack");
  v93 = MinecraftScreenController::_getNameId(v1, (int **)&v321);
  v94 = operator new(4u);
  LODWORD(v95) = sub_11774CC;
  *v94 = v1;
  HIDWORD(v95) = sub_1177230;
  v319 = v94;
  v320 = v95;
  ScreenController::registerButtonClickHandler((int)v1, v93, (int)&v319);
  if ( (_DWORD)v320 )
    ((void (*)(void))v320)();
  v96 = (void *)(v321 - 12);
  if ( (int *)(v321 - 12) != &dword_28898C0 )
    v221 = (unsigned int *)(v321 - 4);
        v222 = __ldrex(v221);
      while ( __strex(v222 - 1, v221) );
      v222 = (*v221)--;
    if ( v222 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v96);
  sub_119C884((void **)&v318, "button.container_touch_select");
  v97 = MinecraftScreenController::_getNameId(v1, (int **)&v318);
  v98 = operator new(4u);
  LODWORD(v99) = sub_11776D0;
  *v98 = v1;
  HIDWORD(v99) = sub_1177504;
  v316 = v98;
  v317 = v99;
  ScreenController::registerButtonEventHandler((int)v1, v97, 1, 3, (int)&v316);
  if ( (_DWORD)v317 )
    ((void (*)(void))v317)();
  v100 = (void *)(v318 - 12);
  if ( (int *)(v318 - 12) != &dword_28898C0 )
    v223 = (unsigned int *)(v318 - 4);
        v224 = __ldrex(v223);
      while ( __strex(v224 - 1, v223) );
      v224 = (*v223)--;
    if ( v224 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v100);
  sub_119C884((void **)&v315, "button.container_touch_select");
  v101 = MinecraftScreenController::_getNameId(v1, (int **)&v315);
  v102 = operator new(4u);
  LODWORD(v103) = sub_1177F58;
  *v102 = v1;
  HIDWORD(v103) = sub_1177708;
  v313 = v102;
  v314 = v103;
  ScreenController::registerButtonEventHandler((int)v1, v101, 0, 4, (int)&v313);
  if ( (_DWORD)v314 )
    ((void (*)(void))v314)();
  v104 = (void *)(v315 - 12);
  if ( (int *)(v315 - 12) != &dword_28898C0 )
    v225 = (unsigned int *)(v315 - 4);
        v226 = __ldrex(v225);
      while ( __strex(v226 - 1, v225) );
      v226 = (*v225)--;
    if ( v226 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v104);
  v105 = operator new(4u);
  LODWORD(v106) = sub_1178094;
  *v105 = v1;
  HIDWORD(v106) = sub_1177F90;
  v311 = v105;
  v312 = v106;
  ScreenController::registerPointerHeldEventHandler((int)v1, (int)&v311);
  if ( (_DWORD)v312 )
    ((void (*)(void))v312)();
  sub_119C884((void **)&v310, "button.recipe_select");
  v107 = MinecraftScreenController::_getNameId(v1, (int **)&v310);
  v108 = operator new(4u);
  LODWORD(v109) = sub_1179A8C;
  *v108 = v1;
  HIDWORD(v109) = sub_11782C0;
  v308 = v108;
  v309 = v109;
  ScreenController::registerButtonClickHandler((int)v1, v107, (int)&v308);
  if ( (_DWORD)v309 )
    ((void (*)(void))v309)();
  v110 = (void *)(v310 - 12);
  if ( (int *)(v310 - 12) != &dword_28898C0 )
    v227 = (unsigned int *)(v310 - 4);
        v228 = __ldrex(v227);
      while ( __strex(v228 - 1, v227) );
      v228 = (*v227)--;
    if ( v228 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v110);
  sub_119C884((void **)&v307, "button.recipe_secondary");
  v111 = MinecraftScreenController::_getNameId(v1, (int **)&v307);
  v112 = operator new(4u);
  LODWORD(v113) = sub_117A4A8;
  *v112 = v1;
  HIDWORD(v113) = sub_1179AC4;
  v305 = v112;
  v306 = v113;
  ScreenController::registerButtonClickHandler((int)v1, v111, (int)&v305);
  if ( (_DWORD)v306 )
    ((void (*)(void))v306)();
  v114 = (void *)(v307 - 12);
  if ( (int *)(v307 - 12) != &dword_28898C0 )
    v229 = (unsigned int *)(v307 - 4);
        v230 = __ldrex(v229);
      while ( __strex(v230 - 1, v229) );
      v230 = (*v229)--;
    if ( v230 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v114);
  sub_119C884((void **)&v304, "button.recipe_tertiary");
  v115 = MinecraftScreenController::_getNameId(v1, (int **)&v304);
  v116 = operator new(4u);
  LODWORD(v117) = sub_117A6A4;
  *v116 = v1;
  HIDWORD(v117) = sub_117A4E0;
  v302 = v116;
  v303 = v117;
  ScreenController::registerButtonEventHandler((int)v1, v115, 1, 3, (int)&v302);
  if ( (_DWORD)v303 )
    ((void (*)(void))v303)();
  v118 = (void *)(v304 - 12);
  if ( (int *)(v304 - 12) != &dword_28898C0 )
    v231 = (unsigned int *)(v304 - 4);
        v232 = __ldrex(v231);
      while ( __strex(v232 - 1, v231) );
      v232 = (*v231)--;
    if ( v232 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v118);
  sub_119C884((void **)&v301, "button.hotbar_take_half_place_one");
  v119 = MinecraftScreenController::_getNameId(v1, (int **)&v301);
  v120 = operator new(4u);
  LODWORD(v121) = sub_117A884;
  *v120 = v1;
  HIDWORD(v121) = sub_117A6DC;
  v299 = v120;
  v300 = v121;
  ScreenController::registerButtonClickHandler((int)v1, v119, (int)&v299);
  if ( (_DWORD)v300 )
    ((void (*)(void))v300)();
  v122 = (void *)(v301 - 12);
  if ( (int *)(v301 - 12) != &dword_28898C0 )
    v233 = (unsigned int *)(v301 - 4);
        v234 = __ldrex(v233);
      while ( __strex(v234 - 1, v233) );
      v234 = (*v233)--;
    if ( v234 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v122);
  sub_119C884((void **)&v298, "button.hotbar_take_half_place_one");
  v123 = MinecraftScreenController::_getNameId(v1, (int **)&v298);
  v124 = operator new(4u);
  LODWORD(v125) = sub_117A9AC;
  *v124 = v1;
  HIDWORD(v125) = sub_117A8BC;
  v296 = v124;
  v297 = v125;
  ScreenController::registerButtonEventHandler((int)v1, v123, 1, 0, (int)&v296);
  if ( (_DWORD)v297 )
    ((void (*)(void))v297)();
  v126 = (void *)(v298 - 12);
  if ( (int *)(v298 - 12) != &dword_28898C0 )
    v235 = (unsigned int *)(v298 - 4);
        v236 = __ldrex(v235);
      while ( __strex(v236 - 1, v235) );
      v236 = (*v235)--;
    if ( v236 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v126);
  sub_119C884((void **)&v295, "button.hotbar_take_half_place_one");
  v127 = MinecraftScreenController::_getNameId(v1, (int **)&v295);
  v128 = operator new(4u);
  LODWORD(v129) = sub_117AA06;
  *v128 = v1;
  HIDWORD(v129) = sub_117A9E2;
  v293 = v128;
  v294 = v129;
  ScreenController::registerButtonEventHandler((int)v1, v127, 0, 3, (int)&v293);
  if ( (_DWORD)v294 )
    ((void (*)(void))v294)();
  v130 = (void *)(v295 - 12);
  if ( (int *)(v295 - 12) != &dword_28898C0 )
    v237 = (unsigned int *)(v295 - 4);
        v238 = __ldrex(v237);
      while ( __strex(v238 - 1, v237) );
      v238 = (*v237)--;
    if ( v238 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v130);
  sub_119C884((void **)&v292, "button.attempt_discard_all");
  v131 = MinecraftScreenController::_getNameId(v1, (int **)&v292);
  v132 = operator new(4u);
  LODWORD(v133) = sub_117AA5A;
  *v132 = v1;
  HIDWORD(v133) = sub_117AA3C;
  v290 = v132;
  v291 = v133;
  ScreenController::registerButtonClickHandler((int)v1, v131, (int)&v290);
  if ( (_DWORD)v291 )
    ((void (*)(void))v291)();
  v134 = (void *)(v292 - 12);
  if ( (int *)(v292 - 12) != &dword_28898C0 )
    v239 = (unsigned int *)(v292 - 4);
        v240 = __ldrex(v239);
      while ( __strex(v240 - 1, v239) );
      v240 = (*v239)--;
    if ( v240 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v134);
  sub_119C884((void **)&v289, "button.attempt_discard_one");
  v135 = MinecraftScreenController::_getNameId(v1, (int **)&v289);
  v136 = operator new(4u);
  LODWORD(v137) = sub_117AAAE;
  *v136 = v1;
  HIDWORD(v137) = sub_117AA90;
  v287 = v136;
  v288 = v137;
  ScreenController::registerButtonClickHandler((int)v1, v135, (int)&v287);
  if ( (_DWORD)v288 )
    ((void (*)(void))v288)();
  v138 = (void *)(v289 - 12);
  if ( (int *)(v289 - 12) != &dword_28898C0 )
    v241 = (unsigned int *)(v289 - 4);
        v242 = __ldrex(v241);
      while ( __strex(v242 - 1, v241) );
      v242 = (*v241)--;
    if ( v242 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v138);
  sub_119C884((void **)&v286, "button.crafting_container_auto_place");
  v139 = MinecraftScreenController::_getNameId(v1, (int **)&v286);
  v140 = operator new(4u);
  LODWORD(v141) = sub_117B058;
  *v140 = v1;
  HIDWORD(v141) = sub_117AAE4;
  v284 = v140;
  v285 = v141;
  ScreenController::registerButtonEventHandler((int)v1, v139, 1, 3, (int)&v284);
  if ( (_DWORD)v285 )
    ((void (*)(void))v285)();
  v142 = (void *)(v286 - 12);
  if ( (int *)(v286 - 12) != &dword_28898C0 )
    v243 = (unsigned int *)(v286 - 4);
        v244 = __ldrex(v243);
      while ( __strex(v244 - 1, v243) );
      v244 = (*v243)--;
    if ( v244 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v142);
  sub_119C884((void **)&v283, "button.hotbar_place_and_move_focus");
  v143 = MinecraftScreenController::_getNameId(v1, (int **)&v283);
  v144 = operator new(4u);
  LODWORD(v145) = sub_117B1BC;
  *v144 = v1;
  HIDWORD(v145) = sub_117B090;
  v281 = v144;
  v282 = v145;
  ScreenController::registerButtonClickHandler((int)v1, v143, (int)&v281);
  if ( (_DWORD)v282 )
    ((void (*)(void))v282)();
  v146 = (void *)(v283 - 12);
  if ( (int *)(v283 - 12) != &dword_28898C0 )
    v245 = (unsigned int *)(v283 - 4);
        v246 = __ldrex(v245);
      while ( __strex(v246 - 1, v245) );
      v246 = (*v245)--;
    if ( v246 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v146);
  sub_119C884((void **)&v280, "toggle.enableFiltering");
  v147 = MinecraftScreenController::_getNameId(v1, (int **)&v280);
  v148 = operator new(4u);
  LODWORD(v149) = sub_117B234;
  *v148 = v1;
  HIDWORD(v149) = sub_117B1F2;
  v278 = v148;
  v279 = v149;
  ScreenController::registerToggleChangeEventHandler((int)v1, v147, (int)&v278);
  if ( (_DWORD)v279 )
    ((void (*)(void))v279)();
  v150 = (void *)(v280 - 12);
  if ( (int *)(v280 - 12) != &dword_28898C0 )
    v247 = (unsigned int *)(v280 - 4);
        v248 = __ldrex(v247);
      while ( __strex(v248 - 1, v247) );
      v248 = (*v247)--;
    if ( v248 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v150);
  v151 = operator new(4u);
  LODWORD(v152) = sub_117B368;
  *v151 = v1;
  HIDWORD(v152) = sub_117B26C;
  v276 = v151;
  v277 = v152;
  ScreenController::registerFocusMovedEventHandler((int)v1, (int)&v276);
  if ( (_DWORD)v277 )
    ((void (*)(void))v277)();
  v153 = operator new(4u);
  LODWORD(v154) = sub_117B3D8;
  *v153 = v1;
  HIDWORD(v154) = sub_117B39E;
  v274 = v153;
  v275 = v154;
  ScreenController::registerInputModechangedEventHandler((int)v1, (int)&v274);
  if ( (_DWORD)v275 )
    ((void (*)(void))v275)();
  sub_119C884((void **)&v273, "button.filter_toggle_hovered");
  v155 = MinecraftScreenController::_getNameId(v1, (int **)&v273);
  v156 = operator new(4u);
  LODWORD(v157) = sub_117B4E8;
  *v156 = v1;
  HIDWORD(v157) = sub_117B410;
  v271 = v156;
  v272 = v157;
  ScreenController::registerButtonEventHandler((int)v1, v155, 1, 0, (int)&v271);
  if ( (_DWORD)v272 )
    ((void (*)(void))v272)();
  v158 = (void *)(v273 - 12);
  if ( (int *)(v273 - 12) != &dword_28898C0 )
    v249 = (unsigned int *)(v273 - 4);
        v250 = __ldrex(v249);
      while ( __strex(v250 - 1, v249) );
      v250 = (*v249)--;
    if ( v250 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v158);
  sub_119C884((void **)&v270, "button.search_bar_hovered");
  v159 = MinecraftScreenController::_getNameId(v1, (int **)&v270);
  v160 = operator new(4u);
  LODWORD(v161) = sub_117B5F8;
  *v160 = v1;
  HIDWORD(v161) = sub_117B520;
  v268 = v160;
  v269 = v161;
  ScreenController::registerButtonEventHandler((int)v1, v159, 1, 0, (int)&v268);
  if ( (_DWORD)v269 )
    ((void (*)(void))v269)();
  v162 = (void *)(v270 - 12);
  if ( (int *)(v270 - 12) != &dword_28898C0 )
    v251 = (unsigned int *)(v270 - 4);
        v252 = __ldrex(v251);
      while ( __strex(v252 - 1, v251) );
      v252 = (*v251)--;
    if ( v252 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v162);
  sub_119C884((void **)&v267, "button.search_bar_clear");
  v163 = MinecraftScreenController::_getNameId(v1, (int **)&v267);
  v164 = operator new(4u);
  LODWORD(v165) = sub_117B734;
  *v164 = v1;
  HIDWORD(v165) = sub_117B630;
  v265 = v164;
  v266 = v165;
  ScreenController::registerButtonClickHandler((int)v1, v163, (int)&v265);
  if ( (_DWORD)v266 )
    ((void (*)(void))v266)();
  v166 = (void *)(v267 - 12);
  if ( (int *)(v267 - 12) != &dword_28898C0 )
    v253 = (unsigned int *)(v267 - 4);
        v254 = __ldrex(v253);
      while ( __strex(v254 - 1, v253) );
      v254 = (*v253)--;
    if ( v254 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v166);
  sub_119C884((void **)&v264, "button.search_bar_selected");
  v167 = MinecraftScreenController::_getNameId(v1, (int **)&v264);
  v168 = operator new(4u);
  LODWORD(v169) = sub_117B778;
  *v168 = v1;
  HIDWORD(v169) = sub_117B76A;
  v262 = v168;
  v263 = v169;
  ScreenController::registerButtonClickHandler((int)v1, v167, (int)&v262);
  if ( (_DWORD)v263 )
    ((void (*)(void))v263)();
  v170 = (void *)(v264 - 12);
  if ( (int *)(v264 - 12) != &dword_28898C0 )
    v255 = (unsigned int *)(v264 - 4);
        v256 = __ldrex(v255);
      while ( __strex(v256 - 1, v255) );
      v256 = (*v255)--;
    if ( v256 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v170);
  sub_119C884((void **)&v261, "button.search_bar_deselected");
  v171 = MinecraftScreenController::_getNameId(v1, (int **)&v261);
  v172 = operator new(4u);
  LODWORD(v173) = sub_117B7BC;
  *v172 = v1;
  HIDWORD(v173) = sub_117B7AE;
  v259 = v172;
  v260 = v173;
  ScreenController::registerButtonClickHandler((int)v1, v171, (int)&v259);
  if ( (_DWORD)v260 )
    ((void (*)(void))v260)();
  v174 = (void *)(v261 - 12);
  if ( (int *)(v261 - 12) != &dword_28898C0 )
    v257 = (unsigned int *)(v261 - 4);
        v258 = __ldrex(v257);
      while ( __strex(v258 - 1, v257) );
      v258 = (*v257)--;
    if ( v258 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v174);
}


signed int __fastcall CraftingScreenController::_tryAutoPlaceIntoCreativeHotbar(int a1, int a2, int a3, _QWORD *a4)
{
  int v4; // r10@1
  _QWORD *v5; // r8@1
  int v6; // r5@1
  int v7; // r0@1
  int v8; // r9@2
  int v9; // r7@2
  bool v10; // zf@3
  int v11; // r4@6
  bool v12; // zf@9
  _DWORD *v13; // r0@13
  char *v14; // r0@14
  int v15; // r4@14
  void *v16; // r0@14
  int v17; // r4@15
  char *v18; // r5@15
  int v19; // r9@15 OVERLAPPED
  int v20; // r10@15 OVERLAPPED
  unsigned int *v21; // r2@17
  signed int v22; // r1@19
  int *v23; // r0@25
  signed int result; // r0@30
  unsigned int *v25; // r2@33
  signed int v26; // r1@35
  int v27; // [sp+14h] [bp-3Ch]@14
  char *v28; // [sp+1Ch] [bp-34h]@14
  char *v29; // [sp+20h] [bp-30h]@14
  char *v30; // [sp+24h] [bp-2Ch]@14

  v4 = a1;
  v5 = a4;
  v6 = 0x18u % dword_27DABB0;
  v7 = *(_DWORD *)(dword_27DABAC + 4 * (0x18u % dword_27DABB0));
  if ( !v7 )
    goto LABEL_13;
  v8 = *(_DWORD *)v7;
  v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
  while ( 1 )
  {
    v10 = v9 == 24;
    if ( v9 == 24 )
      v10 = *(_DWORD *)(v8 + 4) == 24;
    if ( v10 )
      break;
    v11 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
    {
      v9 = *(_DWORD *)(v11 + 12);
      v7 = v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v11 + 12) % (unsigned int)dword_27DABB0 == v6 )
        continue;
    }
  }
  v12 = v7 == 0;
  if ( v7 )
    v7 = *(_DWORD *)v7;
    v12 = v7 == 0;
  if ( v12 )
LABEL_13:
    v13 = operator new(0x10u);
    *v13 = 0;
    v13[1] = 24;
    v13[2] = &unk_28898CC;
    v7 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27DABAC,
           v6,
           0x18u,
           (int)v13);
  AutoPlaceItem::AutoPlaceItem(&v27, (int *)(v7 + 8), 1);
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v14 = (char *)operator new(8u);
  v15 = (int)(v14 + 8);
  v28 = v14;
  v29 = v14;
  v30 = v14 + 8;
  std::__uninitialized_fill_n<false>::__uninit_fill_n<AutoPlaceItem *,unsigned int,AutoPlaceItem>(
    (int)v14,
    1,
    (int)&v27);
  v29 = (char *)v15;
  v16 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  (*(void (__cdecl **)(_DWORD, signed int))(**(_DWORD **)(v4 + 628) + 32))(*(_DWORD *)(v4 + 628), 0x7FFFFFFF);
  v17 = (int)v29;
  v18 = v28;
  *(_QWORD *)&v19 = *v5;
  if ( v28 != v29 )
    do
      v23 = (int *)(*(_DWORD *)v18 - 12);
      if ( v23 != &dword_28898C0 )
      {
        v21 = (unsigned int *)(*(_DWORD *)v18 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        }
        else
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v23);
      }
      v18 += 8;
    while ( v18 != (char *)v17 );
    v18 = v28;
  if ( v18 )
    operator delete(v18);
  result = 0;
  if ( v19 != v20 )
    result = 1;
  return result;
}


unsigned __int64 *__fastcall CraftingScreenController::_evacuateCraftingGrid(CraftingScreenController *this)
{
  CraftingScreenController *v1; // r9@1
  int v2; // r10@1
  int v3; // r0@1
  int v4; // r5@2
  int v5; // r7@2
  bool v6; // zf@3
  int v7; // r4@6
  bool v8; // zf@9
  _DWORD *v9; // r0@13
  int **v10; // r5@14
  int v11; // r6@14
  void *v12; // r0@14
  int v13; // r6@15
  ContainerController *v14; // r7@15
  unsigned __int64 *result; // r0@15
  int v16; // r4@15
  unsigned int *v17; // r1@16
  unsigned int *v18; // r5@22
  unsigned int *v19; // r2@30
  signed int v20; // r1@32
  int v21; // [sp+4h] [bp-34h]@14
  ContainerController *v22; // [sp+8h] [bp-30h]@14
  int v23; // [sp+Ch] [bp-2Ch]@15

  v1 = this;
  v2 = 0xAu % dword_27DABB0;
  v3 = *(_DWORD *)(dword_27DABAC + 4 * (0xAu % dword_27DABB0));
  if ( !v3 )
    goto LABEL_13;
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v6 = v5 == 10;
    if ( v5 == 10 )
      v6 = *(_DWORD *)(v4 + 4) == 10;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DABB0 == v2 )
        continue;
    }
  }
  v8 = v3 == 0;
  if ( v3 )
    v3 = *(_DWORD *)v3;
    v8 = v3 == 0;
  if ( v8 )
LABEL_13:
    v9 = operator new(0x10u);
    *v9 = 0;
    v9[1] = 10;
    v9[2] = &unk_28898CC;
    v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27DABAC,
           v2,
           0xAu,
           (int)v9);
  v10 = (int **)(v3 + 8);
  v11 = *((_DWORD *)v1 + 157);
  sub_119C854(&v21, (int *)(v3 + 8));
  ContainerManagerController::getContainerController((int)&v22, v11, (int **)&v21);
  v12 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = *((_DWORD *)v1 + 157);
  v14 = v22;
  std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
    (unsigned __int64 *)v1 + 75,
    v10);
  result = CraftingContainerManagerController::evacuateCraftingContainerToInventory(v13, v14);
  v16 = v23;
  if ( v23 )
    v17 = (unsigned int *)(v23 + 4);
        result = (unsigned __int64 *)__ldrex(v17);
      while ( __strex((unsigned int)result - 1, v17) );
      result = (unsigned __int64 *)(*v17)--;
    if ( result == (unsigned __int64 *)1 )
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (unsigned __int64 *)__ldrex(v18);
        while ( __strex((unsigned int)result - 1, v18) );
      }
      else
        result = (unsigned __int64 *)(*v18)--;
      if ( result == (unsigned __int64 *)1 )
        result = (unsigned __int64 *)(*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return result;
}


void __fastcall CraftingScreenController::_restoreFocusFromRestorationContext(CraftingScreenController *this)
{
  CraftingScreenController::_restoreFocusFromRestorationContext(this);
}
