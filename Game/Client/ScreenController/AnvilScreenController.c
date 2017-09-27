

void **__fastcall AnvilScreenController::_getButtonYDescription(AnvilScreenController *this, ContainerScreenController *a2)
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


void **__fastcall AnvilScreenController::_getButtonXDescription(AnvilScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r5@1
  void **v3; // r4@1
  void **result; // r0@3
  int v5; // r0@5

  v2 = a2;
  v3 = (void **)this;
  if ( ContainerScreenController::_getInteractionModel(a2) )
  {
    if ( *((_DWORD *)v2 + 159) == 2 )
      return sub_119C884(v3, "controller.buttonTip.take");
    return ContainerScreenController::_getButtonXDescription((ContainerScreenController *)v3, v2);
  }
  if ( ContainerScreenController::isSlotsPanelFocused(v2) == 1 )
    v5 = *((_DWORD *)v2 + 159);
    if ( v5 == 2 )
    {
      result = sub_119C884(v3, "controller.buttonTip.takeItem");
    }
    else
      if ( v5 != 1 )
      {
        if ( !v5 )
          return sub_119C884(v3, "controller.buttonTip.removeInput");
        return ContainerScreenController::_getButtonXDescription((ContainerScreenController *)v3, v2);
      }
      result = sub_119C884(v3, "controller.buttonTip.removeMaterial");
  else
    result = sub_119C884(v3, "controller.buttonTip.take");
  return result;
}


void __fastcall AnvilScreenController::~AnvilScreenController(AnvilScreenController *this)
{
  AnvilScreenController::~AnvilScreenController(this);
}


void __fastcall AnvilScreenController::_registerCoalesceOrder(AnvilScreenController *this)
{
  AnvilScreenController *v1; // r8@1
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
  int v29; // r0@48
  int v30; // r4@49
  int v31; // r6@49
  bool v32; // zf@50
  int v33; // r7@53
  bool v34; // zf@56
  _DWORD *v35; // r0@60
  int *v36; // r1@61
  int v37; // r9@64
  int v38; // r0@66
  int v39; // r5@67
  int v40; // r7@67
  bool v41; // zf@68
  int v42; // r4@71
  bool v43; // zf@74
  _DWORD *v44; // r0@78
  int *v45; // r1@79
  int v46; // r9@82
  int v47; // r0@82
  int v48; // r5@83
  int v49; // r7@83
  bool v50; // zf@84
  int v51; // r4@87
  bool v52; // zf@90
  _DWORD *v53; // r0@94
  unsigned __int64 *v54; // r8@95
  int v55; // r0@95
  int v56; // r9@95
  int v57; // r0@95
  int v58; // r5@96
  int v59; // r7@96
  bool v60; // zf@97
  int v61; // r4@100
  bool v62; // zf@103
  int *v63; // r1@106
  _DWORD *v64; // r0@107
  int v65; // r9@110
  int v66; // r0@110
  int v67; // r5@111
  int v68; // r7@111
  bool v69; // zf@112
  int v70; // r4@115
  bool v71; // zf@118
  _DWORD *v72; // r0@122
  int *v73; // r1@123
  int v74; // r9@126
  int v75; // r0@126
  int v76; // r5@127
  int v77; // r7@127
  bool v78; // zf@128
  int v79; // r4@131
  bool v80; // zf@134
  _DWORD *v81; // r0@138
  int *v82; // r1@139
  int v83; // r0@142
  int v84; // r4@143
  int v85; // r6@143
  bool v86; // zf@144
  int v87; // r7@147
  bool v88; // zf@150
  _DWORD *v89; // r0@154
  int *v90; // r1@155
  int v91; // r9@158
  int v92; // r0@160
  int v93; // r5@161
  int v94; // r7@161
  bool v95; // zf@162
  int v96; // r4@165
  bool v97; // zf@168
  _DWORD *v98; // r0@172
  int *v99; // r1@173
  int v100; // r9@176
  int v101; // r0@176
  int v102; // r5@177
  int v103; // r7@177
  bool v104; // zf@178
  int v105; // r4@181
  bool v106; // zf@184
  _DWORD *v107; // r0@188
  int v108; // r0@189
  int v109; // r0@189
  int v110; // r4@190
  int v111; // r6@190
  bool v112; // zf@191
  int v113; // r7@194
  _DWORD *v114; // r0@196
  int *v115; // r1@196
  bool v116; // zf@198
  int v117; // r9@203
  int v118; // r0@203
  int v119; // r5@204
  int v120; // r7@204
  bool v121; // zf@205
  int v122; // r4@208
  bool v123; // zf@211
  _DWORD *v124; // r0@215
  int *v125; // r1@216
  int v126; // r9@219
  int v127; // r0@219
  int v128; // r5@220
  int v129; // r7@220
  bool v130; // zf@221
  int v131; // r4@224
  bool v132; // zf@227
  _DWORD *v133; // r0@231
  int *v134; // r1@232
  int v135; // r9@235
  int v136; // r0@235
  int v137; // r5@236
  int v138; // r7@236
  bool v139; // zf@237
  int v140; // r4@240
  bool v141; // zf@243
  _DWORD *v142; // r0@247
  int *v143; // r1@248
  int v144; // r9@251
  int v145; // r0@253
  int v146; // r5@254
  int v147; // r7@254
  bool v148; // zf@255
  int v149; // r4@258
  bool v150; // zf@261
  _DWORD *v151; // r0@265
  int *v152; // r1@266
  int v153; // r0@269
  int v154; // r4@270
  int v155; // r6@270
  bool v156; // zf@271
  int v157; // r7@274
  bool v158; // zf@277
  _DWORD *v159; // r0@281
  int v160; // r0@282
  int v161; // r5@282
  int v162; // r0@284
  int v163; // r6@285
  int v164; // r7@285
  bool v165; // zf@286
  int v166; // r4@289
  bool v167; // zf@292
  int *v168; // r1@295
  _DWORD *v169; // r0@296
  int v170; // r9@299
  int v171; // r0@299
  int v172; // r5@300
  int v173; // r7@300
  bool v174; // zf@301
  int v175; // r4@304
  bool v176; // zf@307
  _DWORD *v177; // r0@311
  int *v178; // r1@312
  int v179; // r9@315
  int v180; // r0@315
  int v181; // r5@316
  int v182; // r7@316
  bool v183; // zf@317
  int v184; // r4@320
  bool v185; // zf@323
  _DWORD *v186; // r0@327
  int *v187; // r1@328
  int v188; // r9@331
  int v189; // r0@331
  int v190; // r5@332
  int v191; // r7@332
  bool v192; // zf@333
  int v193; // r4@336
  bool v194; // zf@339
  _DWORD *v195; // r0@343
  int *v196; // r1@344
  int v197; // r0@347
  int v198; // r4@348
  int v199; // r6@348
  bool v200; // zf@349
  int v201; // r7@352
  bool v202; // zf@355
  _DWORD *v203; // r0@359
  int *v204; // r1@360
  int v205; // r9@363
  int v206; // r0@365
  int v207; // r5@366
  int v208; // r7@366
  bool v209; // zf@367
  int v210; // r4@370
  bool v211; // zf@373
  _DWORD *v212; // r0@377
  int v213; // r0@378
  int v214; // r9@378
  int v215; // r0@378
  int v216; // r5@379
  int v217; // r7@379
  bool v218; // zf@380
  int v219; // r4@383
  bool v220; // zf@386
  int *v221; // r1@389
  _DWORD *v222; // r0@390
  int v223; // r9@393
  int v224; // r0@393
  int v225; // r5@394
  int v226; // r7@394
  bool v227; // zf@395
  int v228; // r4@398
  bool v229; // zf@401
  _DWORD *v230; // r0@405
  int *v231; // r1@406
  int v232; // r9@409
  int v233; // r0@409
  int v234; // r5@410
  int v235; // r7@410
  bool v236; // zf@411
  int v237; // r4@414
  bool v238; // zf@417
  _DWORD *v239; // r0@421
  int *v240; // r1@422
  int v241; // r0@425
  int v242; // r4@426
  int v243; // r6@426
  bool v244; // zf@427
  int v245; // r7@430
  bool v246; // zf@433
  _DWORD *v247; // r0@437
  int *v248; // r1@438
  int v249; // r9@441
  int v250; // r0@443
  int v251; // r5@444
  int v252; // r7@444
  bool v253; // zf@445
  int v254; // r4@448
  bool v255; // zf@451
  _DWORD *v256; // r0@455
  int *v257; // r1@456
  int v258; // r9@459
  int v259; // r0@459
  int v260; // r5@460
  int v261; // r7@460
  bool v262; // zf@461
  int v263; // r4@464
  bool v264; // zf@467
  _DWORD *v265; // r0@471
  int v266; // r0@472
  int *v267; // r4@472
  int *v268; // r6@472
  unsigned int *v269; // r2@474
  signed int v270; // r1@476
  int *v271; // r0@482
  int *v272; // r4@487
  int *v273; // r6@487
  unsigned int *v274; // r2@489
  signed int v275; // r1@491
  int *v276; // r0@497
  int *v277; // r4@502
  int *v278; // r6@502
  unsigned int *v279; // r2@504
  signed int v280; // r1@506
  int *v281; // r0@512
  int *v282; // r4@517
  int *v283; // r6@517
  unsigned int *v284; // r2@519
  signed int v285; // r1@521
  int *v286; // r0@527
  int *v287; // r4@532
  int *v288; // r6@532
  unsigned int *v289; // r2@534
  signed int v290; // r1@536
  int *v291; // r0@542
  int *v292; // [sp+0h] [bp-60h]@378
  int *v293; // [sp+4h] [bp-5Ch]@378
  int *v294; // [sp+8h] [bp-58h]@378
  int *v295; // [sp+Ch] [bp-54h]@282
  int *v296; // [sp+10h] [bp-50h]@282
  int *v297; // [sp+14h] [bp-4Ch]@282
  int *v298; // [sp+18h] [bp-48h]@189
  int *v299; // [sp+1Ch] [bp-44h]@189
  int *v300; // [sp+20h] [bp-40h]@189
  int *v301; // [sp+24h] [bp-3Ch]@95
  int *v302; // [sp+28h] [bp-38h]@95
  int *v303; // [sp+2Ch] [bp-34h]@95
  int *v304; // [sp+30h] [bp-30h]@1
  int *v305; // [sp+34h] [bp-2Ch]@1
  int *v306; // [sp+38h] [bp-28h]@1

  v1 = this;
  v304 = 0;
  v305 = 0;
  v306 = 0;
  v2 = 0x18u % dword_27DA0C8;
  v3 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x18u % dword_27DA0C8));
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
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DA0C8 == v2 )
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
        (unsigned __int64 *)&v304,
        v9);
      goto LABEL_16;
  }
LABEL_13:
  v10 = operator new(0x10u);
  *v10 = 0;
  v10[1] = 24;
  v10[2] = &unk_28898CC;
  v9 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                 (int)&dword_27DA0C4,
                 v2,
                 0x18u,
                 (int)v10)
             + 8);
  if ( v305 == v306 )
    goto LABEL_15;
  sub_119C854(v305, v9);
  ++v305;
LABEL_16:
  v11 = 0x1Au % dword_27DA0C8;
  v12 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x1Au % dword_27DA0C8));
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
      if ( *(_DWORD *)(v16 + 12) % (unsigned int)dword_27DA0C8 == v11 )
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
            (int)&dword_27DA0C4,
            v11,
            0x1Au,
            (int)v18);
  v19 = (int *)(v12 + 8);
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)&v304,
      v19);
  else
    sub_119C854(v305, v19);
    ++v305;
  v20 = 2u % dword_27DA0C8;
  v21 = *(_DWORD *)(dword_27DA0C4 + 4 * (2u % dword_27DA0C8));
  if ( !v21 )
    goto LABEL_44;
  v22 = *(_DWORD *)v21;
  v23 = *(_DWORD *)(*(_DWORD *)v21 + 12);
    v24 = v23 == 2;
    if ( v23 == 2 )
      v24 = *(_DWORD *)(v22 + 4) == 2;
    if ( v24 )
    v25 = *(_DWORD *)v22;
    if ( *(_DWORD *)v22 )
      v23 = *(_DWORD *)(v25 + 12);
      v21 = v22;
      v22 = *(_DWORD *)v22;
      if ( *(_DWORD *)(v25 + 12) % (unsigned int)dword_27DA0C8 == v20 )
  v26 = v21 == 0;
  if ( v21 )
    v21 = *(_DWORD *)v21;
    v26 = v21 == 0;
  if ( v26 )
LABEL_44:
    v27 = operator new(0x10u);
    *v27 = 0;
    v27[1] = 2;
    v27[2] = &unk_28898CC;
    v21 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v20,
            2u,
            (int)v27);
  v28 = (int *)(v21 + 8);
      v28);
    sub_119C854(v305, v28);
  v29 = *(_DWORD *)dword_27DA0C4;
  if ( !*(_DWORD *)dword_27DA0C4 )
    goto LABEL_60;
  v30 = *(_DWORD *)v29;
  v31 = *(_DWORD *)(*(_DWORD *)v29 + 12);
    v32 = v31 == 0;
    if ( !v31 )
      v32 = *(_DWORD *)(v30 + 4) == 0;
    if ( v32 )
    v33 = *(_DWORD *)v30;
    if ( *(_DWORD *)v30 )
      v31 = *(_DWORD *)(v33 + 12);
      v29 = v30;
      v30 = *(_DWORD *)v30;
      if ( !(*(_DWORD *)(v33 + 12) % (unsigned int)dword_27DA0C8) )
  v34 = v29 == 0;
  if ( v29 )
    v29 = *(_DWORD *)v29;
    v34 = v29 == 0;
  if ( v34 )
LABEL_60:
    v35 = operator new(0x10u);
    *v35 = 0;
    v35[1] = 0;
    v35[2] = &unk_28898CC;
    v29 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            0,
            (int)v35);
  v36 = (int *)(v29 + 8);
      v36);
    sub_119C854(v305, v36);
  v37 = 0;
  if ( dword_27DA0C8 != 1 )
    v37 = 1;
  v38 = *(_DWORD *)(dword_27DA0C4 + 4 * v37);
  if ( !v38 )
    goto LABEL_78;
  v39 = *(_DWORD *)v38;
  v40 = *(_DWORD *)(*(_DWORD *)v38 + 12);
    v41 = v40 == 1;
    if ( v40 == 1 )
      v41 = *(_DWORD *)(v39 + 4) == 1;
    if ( v41 )
    v42 = *(_DWORD *)v39;
    if ( *(_DWORD *)v39 )
      v40 = *(_DWORD *)(v42 + 12);
      v38 = v39;
      v39 = *(_DWORD *)v39;
      if ( *(_DWORD *)(v42 + 12) % (unsigned int)dword_27DA0C8 == v37 )
  v43 = v38 == 0;
  if ( v38 )
    v38 = *(_DWORD *)v38;
    v43 = v38 == 0;
  if ( v43 )
LABEL_78:
    v44 = operator new(0x10u);
    *v44 = 0;
    v44[1] = 1;
    v44[2] = &unk_28898CC;
    v38 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v37,
            1u,
            (int)v44);
  v45 = (int *)(v38 + 8);
      v45);
    sub_119C854(v305, v45);
  v46 = 0x18u % dword_27DA0C8;
  v47 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x18u % dword_27DA0C8));
  if ( !v47 )
    goto LABEL_94;
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
      if ( *(_DWORD *)(v51 + 12) % (unsigned int)dword_27DA0C8 == v46 )
  v52 = v47 == 0;
  if ( v47 )
    v47 = *(_DWORD *)v47;
    v52 = v47 == 0;
  if ( v52 )
LABEL_94:
    v53 = operator new(0x10u);
    *v53 = 0;
    v53[1] = 24;
    v53[2] = &unk_28898CC;
    v47 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v46,
            0x18u,
            (int)v53);
  v54 = (unsigned __int64 *)((char *)v1 + 572);
  v55 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v54,
          (int **)(v47 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v55, (unsigned __int64 *)&v304);
  v301 = 0;
  v302 = 0;
  v303 = 0;
  v56 = 0x1Au % dword_27DA0C8;
  v57 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x1Au % dword_27DA0C8));
  if ( v57 )
    v58 = *(_DWORD *)v57;
    v59 = *(_DWORD *)(*(_DWORD *)v57 + 12);
      v60 = v59 == 26;
      if ( v59 == 26 )
        v60 = *(_DWORD *)(v58 + 4) == 26;
      if ( v60 )
      v61 = *(_DWORD *)v58;
      if ( *(_DWORD *)v58 )
        v59 = *(_DWORD *)(v61 + 12);
        v57 = v58;
        v58 = *(_DWORD *)v58;
        if ( *(_DWORD *)(v61 + 12) % (unsigned int)dword_27DA0C8 == v56 )
      goto LABEL_107;
    v62 = v57 == 0;
    if ( v57 )
      v57 = *(_DWORD *)v57;
      v62 = v57 == 0;
    if ( !v62 )
      v63 = (int *)(v57 + 8);
LABEL_109:
        (unsigned __int64 *)&v301,
        v63);
      goto LABEL_110;
LABEL_107:
  v64 = operator new(0x10u);
  *v64 = 0;
  v64[1] = 26;
  v64[2] = &unk_28898CC;
  v63 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27DA0C4,
                  v56,
                  0x1Au,
                  (int)v64)
              + 8);
  if ( v302 == v303 )
    goto LABEL_109;
  sub_119C854(v302, v63);
  ++v302;
LABEL_110:
  v65 = 0x18u % dword_27DA0C8;
  v66 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x18u % dword_27DA0C8));
  if ( !v66 )
    goto LABEL_122;
  v67 = *(_DWORD *)v66;
  v68 = *(_DWORD *)(*(_DWORD *)v66 + 12);
    v69 = v68 == 24;
    if ( v68 == 24 )
      v69 = *(_DWORD *)(v67 + 4) == 24;
    if ( v69 )
    v70 = *(_DWORD *)v67;
    if ( *(_DWORD *)v67 )
      v68 = *(_DWORD *)(v70 + 12);
      v66 = v67;
      v67 = *(_DWORD *)v67;
      if ( *(_DWORD *)(v70 + 12) % (unsigned int)dword_27DA0C8 == v65 )
  v71 = v66 == 0;
  if ( v66 )
    v66 = *(_DWORD *)v66;
    v71 = v66 == 0;
  if ( v71 )
LABEL_122:
    v72 = operator new(0x10u);
    *v72 = 0;
    v72[1] = 24;
    v72[2] = &unk_28898CC;
    v66 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v65,
            (int)v72);
  v73 = (int *)(v66 + 8);
      (unsigned __int64 *)&v301,
      v73);
    sub_119C854(v302, v73);
    ++v302;
  v74 = 2u % dword_27DA0C8;
  v75 = *(_DWORD *)(dword_27DA0C4 + 4 * (2u % dword_27DA0C8));
  if ( !v75 )
    goto LABEL_138;
  v76 = *(_DWORD *)v75;
  v77 = *(_DWORD *)(*(_DWORD *)v75 + 12);
    v78 = v77 == 2;
    if ( v77 == 2 )
      v78 = *(_DWORD *)(v76 + 4) == 2;
    if ( v78 )
    v79 = *(_DWORD *)v76;
    if ( *(_DWORD *)v76 )
      v77 = *(_DWORD *)(v79 + 12);
      v75 = v76;
      v76 = *(_DWORD *)v76;
      if ( *(_DWORD *)(v79 + 12) % (unsigned int)dword_27DA0C8 == v74 )
  v80 = v75 == 0;
  if ( v75 )
    v75 = *(_DWORD *)v75;
    v80 = v75 == 0;
  if ( v80 )
LABEL_138:
    v81 = operator new(0x10u);
    *v81 = 0;
    v81[1] = 2;
    v81[2] = &unk_28898CC;
    v75 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v74,
            (int)v81);
  v82 = (int *)(v75 + 8);
      v82);
    sub_119C854(v302, v82);
  v83 = *(_DWORD *)dword_27DA0C4;
    goto LABEL_154;
  v84 = *(_DWORD *)v83;
  v85 = *(_DWORD *)(*(_DWORD *)v83 + 12);
    v86 = v85 == 0;
    if ( !v85 )
      v86 = *(_DWORD *)(v84 + 4) == 0;
    if ( v86 )
    v87 = *(_DWORD *)v84;
    if ( *(_DWORD *)v84 )
      v85 = *(_DWORD *)(v87 + 12);
      v83 = v84;
      v84 = *(_DWORD *)v84;
      if ( !(*(_DWORD *)(v87 + 12) % (unsigned int)dword_27DA0C8) )
  v88 = v83 == 0;
  if ( v83 )
    v83 = *(_DWORD *)v83;
    v88 = v83 == 0;
  if ( v88 )
LABEL_154:
    v89 = operator new(0x10u);
    *v89 = 0;
    v89[1] = 0;
    v89[2] = &unk_28898CC;
    v83 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)v89);
  v90 = (int *)(v83 + 8);
      v90);
    sub_119C854(v302, v90);
  v91 = 0;
    v91 = 1;
  v92 = *(_DWORD *)(dword_27DA0C4 + 4 * v91);
  if ( !v92 )
    goto LABEL_172;
  v93 = *(_DWORD *)v92;
  v94 = *(_DWORD *)(*(_DWORD *)v92 + 12);
    v95 = v94 == 1;
    if ( v94 == 1 )
      v95 = *(_DWORD *)(v93 + 4) == 1;
    if ( v95 )
    v96 = *(_DWORD *)v93;
    if ( *(_DWORD *)v93 )
      v94 = *(_DWORD *)(v96 + 12);
      v92 = v93;
      v93 = *(_DWORD *)v93;
      if ( *(_DWORD *)(v96 + 12) % (unsigned int)dword_27DA0C8 == v91 )
  v97 = v92 == 0;
  if ( v92 )
    v92 = *(_DWORD *)v92;
    v97 = v92 == 0;
  if ( v97 )
LABEL_172:
    v98 = operator new(0x10u);
    *v98 = 0;
    v98[1] = 1;
    v98[2] = &unk_28898CC;
    v92 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v91,
            (int)v98);
  v99 = (int *)(v92 + 8);
      v99);
    sub_119C854(v302, v99);
  v100 = 0x1Au % dword_27DA0C8;
  v101 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x1Au % dword_27DA0C8));
  if ( !v101 )
    goto LABEL_188;
  v102 = *(_DWORD *)v101;
  v103 = *(_DWORD *)(*(_DWORD *)v101 + 12);
    v104 = v103 == 26;
    if ( v103 == 26 )
      v104 = *(_DWORD *)(v102 + 4) == 26;
    if ( v104 )
    v105 = *(_DWORD *)v102;
    if ( *(_DWORD *)v102 )
      v103 = *(_DWORD *)(v105 + 12);
      v101 = v102;
      v102 = *(_DWORD *)v102;
      if ( *(_DWORD *)(v105 + 12) % (unsigned int)dword_27DA0C8 == v100 )
  v106 = v101 == 0;
  if ( v101 )
    v101 = *(_DWORD *)v101;
    v106 = v101 == 0;
  if ( v106 )
LABEL_188:
    v107 = operator new(0x10u);
    *v107 = 0;
    v107[1] = 26;
    v107[2] = &unk_28898CC;
    v101 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DA0C4,
             v100,
             0x1Au,
             (int)v107);
  v108 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           v54,
           (int **)(v101 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v108, (unsigned __int64 *)&v301);
  v298 = 0;
  v299 = 0;
  v300 = 0;
  v109 = *(_DWORD *)dword_27DA0C4;
  if ( *(_DWORD *)dword_27DA0C4 )
    v110 = *(_DWORD *)v109;
    v111 = *(_DWORD *)(*(_DWORD *)v109 + 12);
      v112 = v111 == 0;
      if ( !v111 )
        v112 = *(_DWORD *)(v110 + 4) == 0;
      if ( v112 )
      v113 = *(_DWORD *)v110;
      if ( *(_DWORD *)v110 )
        v111 = *(_DWORD *)(v113 + 12);
        v109 = v110;
        v110 = *(_DWORD *)v110;
        if ( !(*(_DWORD *)(v113 + 12) % (unsigned int)dword_27DA0C8) )
      goto LABEL_196;
    v116 = v109 == 0;
    if ( v109 )
      v109 = *(_DWORD *)v109;
      v116 = v109 == 0;
    if ( !v116 )
      v115 = (int *)(v109 + 8);
      goto LABEL_202;
LABEL_196:
  v114 = operator new(0x10u);
  *v114 = 0;
  v114[1] = 0;
  v114[2] = &unk_28898CC;
  v115 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   (int)&dword_27DA0C4,
                   0,
                   (int)v114)
               + 8);
  if ( v299 == v300 )
LABEL_202:
      (unsigned __int64 *)&v298,
      v115);
    goto LABEL_203;
  sub_119C854(v299, v115);
  ++v299;
LABEL_203:
  v117 = 0x1Au % dword_27DA0C8;
  v118 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x1Au % dword_27DA0C8));
  if ( !v118 )
    goto LABEL_215;
  v119 = *(_DWORD *)v118;
  v120 = *(_DWORD *)(*(_DWORD *)v118 + 12);
    v121 = v120 == 26;
    if ( v120 == 26 )
      v121 = *(_DWORD *)(v119 + 4) == 26;
    if ( v121 )
    v122 = *(_DWORD *)v119;
    if ( *(_DWORD *)v119 )
      v120 = *(_DWORD *)(v122 + 12);
      v118 = v119;
      v119 = *(_DWORD *)v119;
      if ( *(_DWORD *)(v122 + 12) % (unsigned int)dword_27DA0C8 == v117 )
  v123 = v118 == 0;
  if ( v118 )
    v118 = *(_DWORD *)v118;
    v123 = v118 == 0;
  if ( v123 )
LABEL_215:
    v124 = operator new(0x10u);
    *v124 = 0;
    v124[1] = 26;
    v124[2] = &unk_28898CC;
    v118 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v117,
             (int)v124);
  v125 = (int *)(v118 + 8);
      v125);
    sub_119C854(v299, v125);
    ++v299;
  v126 = 0x18u % dword_27DA0C8;
  v127 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x18u % dword_27DA0C8));
  if ( !v127 )
    goto LABEL_231;
  v128 = *(_DWORD *)v127;
  v129 = *(_DWORD *)(*(_DWORD *)v127 + 12);
    v130 = v129 == 24;
    if ( v129 == 24 )
      v130 = *(_DWORD *)(v128 + 4) == 24;
    if ( v130 )
    v131 = *(_DWORD *)v128;
    if ( *(_DWORD *)v128 )
      v129 = *(_DWORD *)(v131 + 12);
      v127 = v128;
      v128 = *(_DWORD *)v128;
      if ( *(_DWORD *)(v131 + 12) % (unsigned int)dword_27DA0C8 == v126 )
  v132 = v127 == 0;
  if ( v127 )
    v127 = *(_DWORD *)v127;
    v132 = v127 == 0;
  if ( v132 )
LABEL_231:
    v133 = operator new(0x10u);
    *v133 = 0;
    v133[1] = 24;
    v133[2] = &unk_28898CC;
    v127 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v126,
             0x18u,
             (int)v133);
  v134 = (int *)(v127 + 8);
      v134);
    sub_119C854(v299, v134);
  v135 = 2u % dword_27DA0C8;
  v136 = *(_DWORD *)(dword_27DA0C4 + 4 * (2u % dword_27DA0C8));
  if ( !v136 )
    goto LABEL_247;
  v137 = *(_DWORD *)v136;
  v138 = *(_DWORD *)(*(_DWORD *)v136 + 12);
    v139 = v138 == 2;
    if ( v138 == 2 )
      v139 = *(_DWORD *)(v137 + 4) == 2;
    if ( v139 )
    v140 = *(_DWORD *)v137;
    if ( *(_DWORD *)v137 )
      v138 = *(_DWORD *)(v140 + 12);
      v136 = v137;
      v137 = *(_DWORD *)v137;
      if ( *(_DWORD *)(v140 + 12) % (unsigned int)dword_27DA0C8 == v135 )
  v141 = v136 == 0;
  if ( v136 )
    v136 = *(_DWORD *)v136;
    v141 = v136 == 0;
  if ( v141 )
LABEL_247:
    v142 = operator new(0x10u);
    *v142 = 0;
    v142[1] = 2;
    v142[2] = &unk_28898CC;
    v136 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v135,
             2u,
             (int)v142);
  v143 = (int *)(v136 + 8);
      v143);
    sub_119C854(v299, v143);
  v144 = 0;
    v144 = 1;
  v145 = *(_DWORD *)(dword_27DA0C4 + 4 * v144);
  if ( !v145 )
    goto LABEL_265;
  v146 = *(_DWORD *)v145;
  v147 = *(_DWORD *)(*(_DWORD *)v145 + 12);
    v148 = v147 == 1;
    if ( v147 == 1 )
      v148 = *(_DWORD *)(v146 + 4) == 1;
    if ( v148 )
    v149 = *(_DWORD *)v146;
    if ( *(_DWORD *)v146 )
      v147 = *(_DWORD *)(v149 + 12);
      v145 = v146;
      v146 = *(_DWORD *)v146;
      if ( *(_DWORD *)(v149 + 12) % (unsigned int)dword_27DA0C8 == v144 )
  v150 = v145 == 0;
  if ( v145 )
    v145 = *(_DWORD *)v145;
    v150 = v145 == 0;
  if ( v150 )
LABEL_265:
    v151 = operator new(0x10u);
    *v151 = 0;
    v151[1] = 1;
    v151[2] = &unk_28898CC;
    v145 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v144,
             1u,
             (int)v151);
  v152 = (int *)(v145 + 8);
      v152);
    sub_119C854(v299, v152);
  v153 = *(_DWORD *)dword_27DA0C4;
    goto LABEL_281;
  v154 = *(_DWORD *)v153;
  v155 = *(_DWORD *)(*(_DWORD *)v153 + 12);
    v156 = v155 == 0;
    if ( !v155 )
      v156 = *(_DWORD *)(v154 + 4) == 0;
    if ( v156 )
    v157 = *(_DWORD *)v154;
    if ( *(_DWORD *)v154 )
      v155 = *(_DWORD *)(v157 + 12);
      v153 = v154;
      v154 = *(_DWORD *)v154;
      if ( !(*(_DWORD *)(v157 + 12) % (unsigned int)dword_27DA0C8) )
  v158 = v153 == 0;
  if ( v153 )
    v153 = *(_DWORD *)v153;
    v158 = v153 == 0;
  if ( v158 )
LABEL_281:
    v159 = operator new(0x10u);
    *v159 = 0;
    v159[1] = 0;
    v159[2] = &unk_28898CC;
    v153 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             0,
             (int)v159);
  v160 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v153 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v160, (unsigned __int64 *)&v298);
  v161 = 0;
  v295 = 0;
  v296 = 0;
  v297 = 0;
    v161 = 1;
  v162 = *(_DWORD *)(dword_27DA0C4 + 4 * v161);
  if ( v162 )
    v163 = *(_DWORD *)v162;
    v164 = *(_DWORD *)(*(_DWORD *)v162 + 12);
      v165 = v164 == 1;
      if ( v164 == 1 )
        v165 = *(_DWORD *)(v163 + 4) == 1;
      if ( v165 )
      v166 = *(_DWORD *)v163;
      if ( *(_DWORD *)v163 )
        v164 = *(_DWORD *)(v166 + 12);
        v162 = v163;
        v163 = *(_DWORD *)v163;
        if ( *(_DWORD *)(v166 + 12) % (unsigned int)dword_27DA0C8 == v161 )
      goto LABEL_296;
    v167 = v162 == 0;
    if ( v162 )
      v162 = *(_DWORD *)v162;
      v167 = v162 == 0;
    if ( !v167 )
      v168 = (int *)(v162 + 8);
LABEL_298:
        (unsigned __int64 *)&v295,
        v168);
      goto LABEL_299;
LABEL_296:
  v169 = operator new(0x10u);
  *v169 = 0;
  v169[1] = 1;
  v169[2] = &unk_28898CC;
  v168 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   v161,
                   1u,
                   (int)v169)
  if ( v296 == v297 )
    goto LABEL_298;
  sub_119C854(v296, v168);
  ++v296;
LABEL_299:
  v170 = 0x1Au % dword_27DA0C8;
  v171 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x1Au % dword_27DA0C8));
  if ( !v171 )
    goto LABEL_311;
  v172 = *(_DWORD *)v171;
  v173 = *(_DWORD *)(*(_DWORD *)v171 + 12);
    v174 = v173 == 26;
    if ( v173 == 26 )
      v174 = *(_DWORD *)(v172 + 4) == 26;
    if ( v174 )
    v175 = *(_DWORD *)v172;
    if ( *(_DWORD *)v172 )
      v173 = *(_DWORD *)(v175 + 12);
      v171 = v172;
      v172 = *(_DWORD *)v172;
      if ( *(_DWORD *)(v175 + 12) % (unsigned int)dword_27DA0C8 == v170 )
  v176 = v171 == 0;
  if ( v171 )
    v171 = *(_DWORD *)v171;
    v176 = v171 == 0;
  if ( v176 )
LABEL_311:
    v177 = operator new(0x10u);
    *v177 = 0;
    v177[1] = 26;
    v177[2] = &unk_28898CC;
    v171 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v170,
             (int)v177);
  v178 = (int *)(v171 + 8);
      (unsigned __int64 *)&v295,
      v178);
    sub_119C854(v296, v178);
    ++v296;
  v179 = 0x18u % dword_27DA0C8;
  v180 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x18u % dword_27DA0C8));
  if ( !v180 )
    goto LABEL_327;
  v181 = *(_DWORD *)v180;
  v182 = *(_DWORD *)(*(_DWORD *)v180 + 12);
    v183 = v182 == 24;
    if ( v182 == 24 )
      v183 = *(_DWORD *)(v181 + 4) == 24;
    if ( v183 )
    v184 = *(_DWORD *)v181;
    if ( *(_DWORD *)v181 )
      v182 = *(_DWORD *)(v184 + 12);
      v180 = v181;
      v181 = *(_DWORD *)v181;
      if ( *(_DWORD *)(v184 + 12) % (unsigned int)dword_27DA0C8 == v179 )
  v185 = v180 == 0;
  if ( v180 )
    v180 = *(_DWORD *)v180;
    v185 = v180 == 0;
  if ( v185 )
LABEL_327:
    v186 = operator new(0x10u);
    *v186 = 0;
    v186[1] = 24;
    v186[2] = &unk_28898CC;
    v180 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v179,
             (int)v186);
  v187 = (int *)(v180 + 8);
      v187);
    sub_119C854(v296, v187);
  v188 = 2u % dword_27DA0C8;
  v189 = *(_DWORD *)(dword_27DA0C4 + 4 * (2u % dword_27DA0C8));
  if ( !v189 )
    goto LABEL_343;
  v190 = *(_DWORD *)v189;
  v191 = *(_DWORD *)(*(_DWORD *)v189 + 12);
    v192 = v191 == 2;
    if ( v191 == 2 )
      v192 = *(_DWORD *)(v190 + 4) == 2;
    if ( v192 )
    v193 = *(_DWORD *)v190;
    if ( *(_DWORD *)v190 )
      v191 = *(_DWORD *)(v193 + 12);
      v189 = v190;
      v190 = *(_DWORD *)v190;
      if ( *(_DWORD *)(v193 + 12) % (unsigned int)dword_27DA0C8 == v188 )
  v194 = v189 == 0;
  if ( v189 )
    v189 = *(_DWORD *)v189;
    v194 = v189 == 0;
  if ( v194 )
LABEL_343:
    v195 = operator new(0x10u);
    *v195 = 0;
    v195[1] = 2;
    v195[2] = &unk_28898CC;
    v189 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v188,
             (int)v195);
  v196 = (int *)(v189 + 8);
      v196);
    sub_119C854(v296, v196);
  v197 = *(_DWORD *)dword_27DA0C4;
    goto LABEL_359;
  v198 = *(_DWORD *)v197;
  v199 = *(_DWORD *)(*(_DWORD *)v197 + 12);
    v200 = v199 == 0;
    if ( !v199 )
      v200 = *(_DWORD *)(v198 + 4) == 0;
    if ( v200 )
    v201 = *(_DWORD *)v198;
    if ( *(_DWORD *)v198 )
      v199 = *(_DWORD *)(v201 + 12);
      v197 = v198;
      v198 = *(_DWORD *)v198;
      if ( !(*(_DWORD *)(v201 + 12) % (unsigned int)dword_27DA0C8) )
  v202 = v197 == 0;
  if ( v197 )
    v197 = *(_DWORD *)v197;
    v202 = v197 == 0;
  if ( v202 )
LABEL_359:
    v203 = operator new(0x10u);
    *v203 = 0;
    v203[1] = 0;
    v203[2] = &unk_28898CC;
    v197 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)v203);
  v204 = (int *)(v197 + 8);
      v204);
    sub_119C854(v296, v204);
  v205 = 0;
    v205 = 1;
  v206 = *(_DWORD *)(dword_27DA0C4 + 4 * v205);
  if ( !v206 )
    goto LABEL_377;
  v207 = *(_DWORD *)v206;
  v208 = *(_DWORD *)(*(_DWORD *)v206 + 12);
    v209 = v208 == 1;
    if ( v208 == 1 )
      v209 = *(_DWORD *)(v207 + 4) == 1;
    if ( v209 )
    v210 = *(_DWORD *)v207;
    if ( *(_DWORD *)v207 )
      v208 = *(_DWORD *)(v210 + 12);
      v206 = v207;
      v207 = *(_DWORD *)v207;
      if ( *(_DWORD *)(v210 + 12) % (unsigned int)dword_27DA0C8 == v205 )
  v211 = v206 == 0;
  if ( v206 )
    v206 = *(_DWORD *)v206;
    v211 = v206 == 0;
  if ( v211 )
LABEL_377:
    v212 = operator new(0x10u);
    *v212 = 0;
    v212[1] = 1;
    v212[2] = &unk_28898CC;
    v206 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v205,
             (int)v212);
  v213 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v206 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v213, (unsigned __int64 *)&v295);
  v292 = 0;
  v293 = 0;
  v294 = 0;
  v214 = 2u % dword_27DA0C8;
  v215 = *(_DWORD *)(dword_27DA0C4 + 4 * (2u % dword_27DA0C8));
  if ( v215 )
    v216 = *(_DWORD *)v215;
    v217 = *(_DWORD *)(*(_DWORD *)v215 + 12);
      v218 = v217 == 2;
      if ( v217 == 2 )
        v218 = *(_DWORD *)(v216 + 4) == 2;
      if ( v218 )
      v219 = *(_DWORD *)v216;
      if ( *(_DWORD *)v216 )
        v217 = *(_DWORD *)(v219 + 12);
        v215 = v216;
        v216 = *(_DWORD *)v216;
        if ( *(_DWORD *)(v219 + 12) % (unsigned int)dword_27DA0C8 == v214 )
      goto LABEL_390;
    v220 = v215 == 0;
    if ( v215 )
      v215 = *(_DWORD *)v215;
      v220 = v215 == 0;
    if ( !v220 )
      v221 = (int *)(v215 + 8);
LABEL_392:
        (unsigned __int64 *)&v292,
        v221);
      goto LABEL_393;
LABEL_390:
  v222 = operator new(0x10u);
  *v222 = 0;
  v222[1] = 2;
  v222[2] = &unk_28898CC;
  v221 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   v214,
                   2u,
                   (int)v222)
  if ( v293 == v294 )
    goto LABEL_392;
  sub_119C854(v293, v221);
  ++v293;
LABEL_393:
  v223 = 0x1Au % dword_27DA0C8;
  v224 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x1Au % dword_27DA0C8));
  if ( !v224 )
    goto LABEL_405;
  v225 = *(_DWORD *)v224;
  v226 = *(_DWORD *)(*(_DWORD *)v224 + 12);
    v227 = v226 == 26;
    if ( v226 == 26 )
      v227 = *(_DWORD *)(v225 + 4) == 26;
    if ( v227 )
    v228 = *(_DWORD *)v225;
    if ( *(_DWORD *)v225 )
      v226 = *(_DWORD *)(v228 + 12);
      v224 = v225;
      v225 = *(_DWORD *)v225;
      if ( *(_DWORD *)(v228 + 12) % (unsigned int)dword_27DA0C8 == v223 )
  v229 = v224 == 0;
  if ( v224 )
    v224 = *(_DWORD *)v224;
    v229 = v224 == 0;
  if ( v229 )
LABEL_405:
    v230 = operator new(0x10u);
    *v230 = 0;
    v230[1] = 26;
    v230[2] = &unk_28898CC;
    v224 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v223,
             (int)v230);
  v231 = (int *)(v224 + 8);
      (unsigned __int64 *)&v292,
      v231);
    sub_119C854(v293, v231);
    ++v293;
  v232 = 0x18u % dword_27DA0C8;
  v233 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x18u % dword_27DA0C8));
  if ( !v233 )
    goto LABEL_421;
  v234 = *(_DWORD *)v233;
  v235 = *(_DWORD *)(*(_DWORD *)v233 + 12);
    v236 = v235 == 24;
    if ( v235 == 24 )
      v236 = *(_DWORD *)(v234 + 4) == 24;
    if ( v236 )
    v237 = *(_DWORD *)v234;
    if ( *(_DWORD *)v234 )
      v235 = *(_DWORD *)(v237 + 12);
      v233 = v234;
      v234 = *(_DWORD *)v234;
      if ( *(_DWORD *)(v237 + 12) % (unsigned int)dword_27DA0C8 == v232 )
  v238 = v233 == 0;
  if ( v233 )
    v233 = *(_DWORD *)v233;
    v238 = v233 == 0;
  if ( v238 )
LABEL_421:
    v239 = operator new(0x10u);
    *v239 = 0;
    v239[1] = 24;
    v239[2] = &unk_28898CC;
    v233 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v232,
             (int)v239);
  v240 = (int *)(v233 + 8);
      v240);
    sub_119C854(v293, v240);
  v241 = *(_DWORD *)dword_27DA0C4;
    goto LABEL_437;
  v242 = *(_DWORD *)v241;
  v243 = *(_DWORD *)(*(_DWORD *)v241 + 12);
    v244 = v243 == 0;
    if ( !v243 )
      v244 = *(_DWORD *)(v242 + 4) == 0;
    if ( v244 )
    v245 = *(_DWORD *)v242;
    if ( *(_DWORD *)v242 )
      v243 = *(_DWORD *)(v245 + 12);
      v241 = v242;
      v242 = *(_DWORD *)v242;
      if ( !(*(_DWORD *)(v245 + 12) % (unsigned int)dword_27DA0C8) )
  v246 = v241 == 0;
  if ( v241 )
    v241 = *(_DWORD *)v241;
    v246 = v241 == 0;
  if ( v246 )
LABEL_437:
    v247 = operator new(0x10u);
    *v247 = 0;
    v247[1] = 0;
    v247[2] = &unk_28898CC;
    v241 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)v247);
  v248 = (int *)(v241 + 8);
      v248);
    sub_119C854(v293, v248);
  v249 = 0;
    v249 = 1;
  v250 = *(_DWORD *)(dword_27DA0C4 + 4 * v249);
  if ( !v250 )
    goto LABEL_455;
  v251 = *(_DWORD *)v250;
  v252 = *(_DWORD *)(*(_DWORD *)v250 + 12);
    v253 = v252 == 1;
    if ( v252 == 1 )
      v253 = *(_DWORD *)(v251 + 4) == 1;
    if ( v253 )
    v254 = *(_DWORD *)v251;
    if ( *(_DWORD *)v251 )
      v252 = *(_DWORD *)(v254 + 12);
      v250 = v251;
      v251 = *(_DWORD *)v251;
      if ( *(_DWORD *)(v254 + 12) % (unsigned int)dword_27DA0C8 == v249 )
  v255 = v250 == 0;
  if ( v250 )
    v250 = *(_DWORD *)v250;
    v255 = v250 == 0;
  if ( v255 )
LABEL_455:
    v256 = operator new(0x10u);
    *v256 = 0;
    v256[1] = 1;
    v256[2] = &unk_28898CC;
    v250 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v249,
             (int)v256);
  v257 = (int *)(v250 + 8);
      v257);
    sub_119C854(v293, v257);
  v258 = 2u % dword_27DA0C8;
  v259 = *(_DWORD *)(dword_27DA0C4 + 4 * (2u % dword_27DA0C8));
  if ( !v259 )
    goto LABEL_471;
  v260 = *(_DWORD *)v259;
  v261 = *(_DWORD *)(*(_DWORD *)v259 + 12);
    v262 = v261 == 2;
    if ( v261 == 2 )
      v262 = *(_DWORD *)(v260 + 4) == 2;
    if ( v262 )
    v263 = *(_DWORD *)v260;
    if ( *(_DWORD *)v260 )
      v261 = *(_DWORD *)(v263 + 12);
      v259 = v260;
      v260 = *(_DWORD *)v260;
      if ( *(_DWORD *)(v263 + 12) % (unsigned int)dword_27DA0C8 == v258 )
  v264 = v259 == 0;
  if ( v259 )
    v259 = *(_DWORD *)v259;
    v264 = v259 == 0;
  if ( v264 )
LABEL_471:
    v265 = operator new(0x10u);
    *v265 = 0;
    v265[1] = 2;
    v265[2] = &unk_28898CC;
    v259 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v258,
             (int)v265);
  v266 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v259 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v266, (unsigned __int64 *)&v292);
  v268 = v293;
  v267 = v292;
  if ( v292 != v293 )
    do
      v271 = (int *)(*v267 - 12);
      if ( v271 != &dword_28898C0 )
        v269 = (unsigned int *)(*v267 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v270 = __ldrex(v269);
          while ( __strex(v270 - 1, v269) );
        }
        else
          v270 = (*v269)--;
        if ( v270 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v271);
      ++v267;
    while ( v267 != v268 );
    v267 = v292;
  if ( v267 )
    operator delete(v267);
  v273 = v296;
  v272 = v295;
  if ( v295 != v296 )
      v276 = (int *)(*v272 - 12);
      if ( v276 != &dword_28898C0 )
        v274 = (unsigned int *)(*v272 - 4);
            v275 = __ldrex(v274);
          while ( __strex(v275 - 1, v274) );
          v275 = (*v274)--;
        if ( v275 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v276);
      ++v272;
    while ( v272 != v273 );
    v272 = v295;
  if ( v272 )
    operator delete(v272);
  v278 = v299;
  v277 = v298;
  if ( v298 != v299 )
      v281 = (int *)(*v277 - 12);
      if ( v281 != &dword_28898C0 )
        v279 = (unsigned int *)(*v277 - 4);
            v280 = __ldrex(v279);
          while ( __strex(v280 - 1, v279) );
          v280 = (*v279)--;
        if ( v280 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v281);
      ++v277;
    while ( v277 != v278 );
    v277 = v298;
  if ( v277 )
    operator delete(v277);
  v283 = v302;
  v282 = v301;
  if ( v301 != v302 )
      v286 = (int *)(*v282 - 12);
      if ( v286 != &dword_28898C0 )
        v284 = (unsigned int *)(*v282 - 4);
            v285 = __ldrex(v284);
          while ( __strex(v285 - 1, v284) );
          v285 = (*v284)--;
        if ( v285 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v286);
      ++v282;
    while ( v282 != v283 );
    v282 = v301;
  if ( v282 )
    operator delete(v282);
  v288 = v305;
  v287 = v304;
  if ( v304 != v305 )
      v291 = (int *)(*v287 - 12);
      if ( v291 != &dword_28898C0 )
        v289 = (unsigned int *)(*v287 - 4);
            v290 = __ldrex(v289);
          while ( __strex(v290 - 1, v289) );
          v290 = (*v289)--;
        if ( v290 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v291);
      ++v287;
    while ( v287 != v288 );
    v287 = v304;
  if ( v287 )
    operator delete(v287);
}


void __fastcall AnvilScreenController::_registerBindings(AnvilScreenController *this)
{
  AnvilScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@9
  __int64 v9; // r1@9
  __int64 v10; // r1@9
  _DWORD *v11; // r0@13
  __int64 v12; // r1@13
  __int64 v13; // r1@13
  _DWORD *v14; // r0@17
  __int64 v15; // r1@17
  __int64 v16; // r1@17
  _DWORD *v17; // r0@21
  __int64 v18; // r1@21
  __int64 v19; // r1@21
  _DWORD *v20; // r0@25
  __int64 v21; // r1@25
  __int64 v22; // r1@25
  _DWORD *v23; // r0@29
  __int64 v24; // r1@29
  __int64 v25; // r1@29
  void *v26; // [sp+0h] [bp-128h]@29
  __int64 v27; // [sp+8h] [bp-120h]@29
  _DWORD *v28; // [sp+10h] [bp-118h]@29
  __int64 v29; // [sp+18h] [bp-110h]@29
  int v30; // [sp+20h] [bp-108h]@29
  void *v31; // [sp+24h] [bp-104h]@25
  __int64 v32; // [sp+2Ch] [bp-FCh]@25
  _DWORD *v33; // [sp+34h] [bp-F4h]@25
  __int64 v34; // [sp+3Ch] [bp-ECh]@25
  int v35; // [sp+44h] [bp-E4h]@25
  void *v36; // [sp+48h] [bp-E0h]@21
  __int64 v37; // [sp+50h] [bp-D8h]@21
  _DWORD *v38; // [sp+58h] [bp-D0h]@21
  __int64 v39; // [sp+60h] [bp-C8h]@21
  int v40; // [sp+68h] [bp-C0h]@21
  void *v41; // [sp+6Ch] [bp-BCh]@17
  __int64 v42; // [sp+74h] [bp-B4h]@17
  _DWORD *v43; // [sp+7Ch] [bp-ACh]@17
  __int64 v44; // [sp+84h] [bp-A4h]@17
  int v45; // [sp+8Ch] [bp-9Ch]@17
  void *v46; // [sp+90h] [bp-98h]@13
  __int64 v47; // [sp+98h] [bp-90h]@13
  _DWORD *v48; // [sp+A0h] [bp-88h]@13
  __int64 v49; // [sp+A8h] [bp-80h]@13
  int v50; // [sp+B0h] [bp-78h]@13
  void *v51; // [sp+B4h] [bp-74h]@9
  __int64 v52; // [sp+BCh] [bp-6Ch]@9
  _DWORD *v53; // [sp+C4h] [bp-64h]@9
  __int64 v54; // [sp+CCh] [bp-5Ch]@9
  int v55; // [sp+D4h] [bp-54h]@9
  void *v56; // [sp+D8h] [bp-50h]@5
  __int64 v57; // [sp+E0h] [bp-48h]@5
  _DWORD *v58; // [sp+E8h] [bp-40h]@5
  __int64 v59; // [sp+F0h] [bp-38h]@5
  int v60; // [sp+F8h] [bp-30h]@5
  void *v61; // [sp+FCh] [bp-2Ch]@1
  __int64 v62; // [sp+104h] [bp-24h]@1
  _DWORD *v63; // [sp+10Ch] [bp-1Ch]@1
  __int64 v64; // [sp+114h] [bp-14h]@1
  int v65; // [sp+11Ch] [bp-Ch]@1

  v1 = this;
  v65 = 1245802803;
  v2 = operator new(4u);
  LODWORD(v3) = sub_112E156;
  *v2 = v1;
  HIDWORD(v3) = sub_112E146;
  v63 = v2;
  v64 = v3;
  v61 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v62 = v4;
  ScreenController::bindString((int)v1, &v65, (int)&v63, (int)&v61);
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  if ( (_DWORD)v64 )
    ((void (*)(void))v64)();
  v60 = 1759887663;
  v5 = operator new(4u);
  LODWORD(v6) = sub_112E198;
  *v5 = v1;
  HIDWORD(v6) = sub_112E18C;
  v58 = v5;
  v59 = v6;
  v56 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v57 = v7;
  ScreenController::bindBool((int)v1, &v60, (int)&v58, (int)&v56);
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
  if ( (_DWORD)v59 )
    ((void (*)(void))v59)();
  v55 = -464884461;
  v8 = operator new(4u);
  LODWORD(v9) = sub_112E1DA;
  *v8 = v1;
  HIDWORD(v9) = sub_112E1CE;
  v53 = v8;
  v54 = v9;
  v51 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v52 = v10;
  ScreenController::bindBool((int)v1, &v55, (int)&v53, (int)&v51);
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  v50 = 906440687;
  v11 = operator new(4u);
  LODWORD(v12) = sub_112E21C;
  *v11 = v1;
  HIDWORD(v12) = sub_112E210;
  v48 = v11;
  v49 = v12;
  v46 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v47 = v13;
  ScreenController::bindBool((int)v1, &v50, (int)&v48, (int)&v46);
  if ( (_DWORD)v47 )
    ((void (*)(void))v47)();
  if ( (_DWORD)v49 )
    ((void (*)(void))v49)();
  v45 = 1576164227;
  v14 = operator new(4u);
  LODWORD(v15) = sub_112E262;
  *v14 = v1;
  HIDWORD(v15) = sub_112E252;
  v43 = v14;
  v44 = v15;
  v41 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v42 = v16;
  ScreenController::bindString((int)v1, &v45, (int)&v43, (int)&v41);
  if ( (_DWORD)v42 )
    ((void (*)(void))v42)();
  if ( (_DWORD)v44 )
    ((void (*)(void))v44)();
  v40 = -1472343055;
  v17 = operator new(4u);
  LODWORD(v18) = sub_112E2BA;
  *v17 = v1;
  HIDWORD(v18) = sub_112E298;
  v38 = v17;
  v39 = v18;
  v36 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v37 = v19;
  ScreenController::bindBool((int)v1, &v40, (int)&v38, (int)&v36);
  if ( (_DWORD)v37 )
    ((void (*)(void))v37)();
  if ( (_DWORD)v39 )
    ((void (*)(void))v39)();
  v35 = 1910138026;
  v20 = operator new(4u);
  LODWORD(v21) = sub_112E316;
  *v20 = v1;
  HIDWORD(v21) = sub_112E2F0;
  v33 = v20;
  v34 = v21;
  v31 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v32 = v22;
  ScreenController::bindBool((int)v1, &v35, (int)&v33, (int)&v31);
  if ( (_DWORD)v32 )
    ((void (*)(void))v32)();
  if ( (_DWORD)v34 )
    ((void (*)(void))v34)();
  v30 = 359185495;
  v23 = operator new(4u);
  LODWORD(v24) = sub_112E376;
  *v23 = v1;
  HIDWORD(v24) = sub_112E34C;
  v28 = v23;
  v29 = v24;
  v26 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v27 = v25;
  ScreenController::bindBool((int)v1, &v30, (int)&v28, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  if ( (_DWORD)v29 )
    ((void (*)(void))v29)();
}


void __fastcall AnvilScreenController::_registerAutoPlaceOrder(AnvilScreenController *this)
{
  AnvilScreenController::_registerAutoPlaceOrder(this);
}


int __fastcall AnvilScreenController::AnvilScreenController(int a1, int a2, const BlockPos *a3, int a4)
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
  int v25; // r1@49
  int v26; // r0@49
  int v28; // [sp+0h] [bp-28h]@49
  char v29; // [sp+4h] [bp-24h]@21
  int v30; // [sp+8h] [bp-20h]@21
  int v31; // [sp+Ch] [bp-1Ch]@1
  int v32; // [sp+10h] [bp-18h]@1

  v4 = a1;
  v31 = *(_DWORD *)a2;
  v5 = a3;
  v6 = *(_DWORD *)(a2 + 4);
  v32 = v6;
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
  ContainerScreenController::ContainerScreenController(v4, (int)&v31, a4);
  v9 = v32;
  if ( v32 )
    v10 = (unsigned int *)(v32 + 4);
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
  *(_DWORD *)v4 = &off_26E0D2C;
  *(_DWORD *)(v4 + 628) = 0;
  *(_DWORD *)(v4 + 632) = 0;
  *(_DWORD *)(v4 + 636) = 0;
  *(_DWORD *)(v4 + 640) = 0;
  ContainerScreenController::setAssociatedBlockPos((ContainerScreenController *)v4, v5);
  ContainerScreenController::createContainerManagerController<AnvilContainerManagerModel,AnvilContainerManagerController,BlockPos &>(
    (int)&v29,
    v4,
    v4 + 488);
  v14 = *(_QWORD *)&v29;
  *(_DWORD *)&v29 = 0;
  v30 = 0;
  *(_DWORD *)(v4 + 628) = v14;
  v15 = *(_DWORD *)(v4 + 632);
  *(_DWORD *)(v4 + 632) = HIDWORD(v14);
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
  v20 = v30;
  if ( v30 )
    v21 = (unsigned int *)(v30 + 4);
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
  Util::ProfanityFilter::createProfanityFilter((Util::ProfanityFilter *)&v28);
  v25 = v28;
  v28 = 0;
  v26 = *(_DWORD *)(v4 + 640);
  *(_DWORD *)(v4 + 640) = v25;
  if ( v26 )
    (*(void (**)(void))(*(_DWORD *)v26 + 4))();
    if ( v28 )
      (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  AnvilScreenController::_registerEventHandlers((AnvilScreenController *)v4);
  AnvilScreenController::_registerBindings((AnvilScreenController *)v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 152))(v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 156))(v4);
  return v4;
}


void __fastcall AnvilScreenController::_registerEventHandlers(AnvilScreenController *this)
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
  sub_119C884((void **)&v10, "#text_box_name");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v10);
  v3 = operator new(4u);
  LODWORD(v4) = sub_112E110;
  *v3 = v1;
  HIDWORD(v4) = sub_112DC60;
  v8 = v3;
  v9 = v4;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v2, (int)&v8);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
}


void **__fastcall AnvilScreenController::_getButtonADescription(AnvilScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r5@1
  void **v3; // r4@1
  unsigned int v5; // r0@5

  v2 = a2;
  v3 = (void **)this;
  if ( ContainerScreenController::_getInteractionModel(a2) )
  {
    if ( *((_DWORD *)v2 + 159) == 2 )
      return sub_119C884(v3, "controller.buttonTip.take");
  }
  else if ( ContainerScreenController::isSlotsPanelFocused(v2) == 1 )
    v5 = *((_DWORD *)v2 + 159);
    if ( v5 < 2 )
      return sub_119C884(v3, "controller.buttonTip.select.slot");
    if ( v5 == 2 )
      return sub_119C884(v3, "controller.buttonTip.takeItem");
  else if ( ContainerScreenController::isInventoryPanelFocused(v2) == 1 )
    return sub_119C884(v3, "controller.buttonTip.addItem");
  return ContainerScreenController::_getButtonADescription((ContainerScreenController *)v3, v2);
}


int __fastcall AnvilScreenController::_onContainerSlotHovered(int a1, const void **a2, int a3)
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
  int v17; // r0@18
  int v18; // r9@19
  int v19; // r7@19
  bool v20; // zf@20
  int v21; // r8@23
  MinecraftScreenController *v22; // r2@26
  bool v23; // zf@27
  _DWORD *v24; // r0@31
  const void *v25; // r1@32
  int v26; // r0@33
  _DWORD *v27; // r1@33
  int v29; // [sp+4h] [bp-2Ch]@16
  int v30; // [sp+8h] [bp-28h]@1

  v30 = a1;
  v3 = a2;
  v4 = a3;
  v5 = 2u % dword_27DA0C8;
  v6 = *(_DWORD *)(dword_27DA0C4 + 4 * (2u % dword_27DA0C8));
  if ( !v6 )
    goto LABEL_13;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 12);
  while ( 1 )
  {
    v9 = v8 == 2;
    if ( v8 == 2 )
      v9 = *(_DWORD *)(v7 + 4) == 2;
    if ( v9 )
      break;
    v10 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
    {
      v8 = *(_DWORD *)(v10 + 12);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v10 + 12) % (unsigned int)dword_27DA0C8 == v5 )
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
    v12[1] = 2;
    v12[2] = &unk_28898CC;
    v6 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)&dword_27DA0C4,
           v5,
           2u,
           (int)v12);
  v13 = *v3;
  v14 = *(_DWORD **)(v6 + 8);
  v15 = *((_DWORD *)*v3 - 3);
  if ( v15 != *(v14 - 3) || memcmp(*v3, v14, *((_DWORD *)*v3 - 3)) )
    v16 = 0;
    v29 = v4;
    if ( dword_27DA0C8 != 1 )
      v16 = 1;
    v17 = *(_DWORD *)(dword_27DA0C4 + 4 * v16);
    if ( !v17 )
      goto LABEL_31;
    v18 = *(_DWORD *)v17;
    v19 = *(_DWORD *)(*(_DWORD *)v17 + 12);
    while ( 1 )
      v20 = v19 == 1;
      if ( v19 == 1 )
        v20 = *(_DWORD *)(v18 + 4) == 1;
      if ( v20 )
        break;
      v21 = *(_DWORD *)v18;
      if ( *(_DWORD *)v18 )
      {
        v19 = *(_DWORD *)(v21 + 12);
        v17 = v18;
        v18 = *(_DWORD *)v18;
        if ( *(_DWORD *)(v21 + 12) % (unsigned int)dword_27DA0C8 == v16 )
          continue;
      }
    v23 = v17 == 0;
    if ( v17 )
      v17 = *(_DWORD *)v17;
      v23 = v17 == 0;
    if ( v23 )
LABEL_31:
      v24 = operator new(0x10u);
      *v24 = 0;
      v24[1] = 1;
      v24[2] = &unk_28898CC;
      v17 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DA0C4,
              v16,
              1u,
              (int)v24);
      v13 = *v3;
      v15 = *((_DWORD *)*v3 - 3);
    v25 = *(const void **)(v17 + 8);
    if ( v15 == *((_DWORD *)v25 - 3) )
      v26 = memcmp(v13, v25, v15);
      v22 = (MinecraftScreenController *)v30;
      v27 = (_DWORD *)(v30 + 636);
      if ( !v26 )
        *v27 = 1;
        v4 = v29;
        return j_j_j__ZN25ContainerScreenController23_onContainerSlotHoveredERKSsi(v22, v3, v4);
    else
    v4 = v29;
    *v27 = 0;
    return j_j_j__ZN25ContainerScreenController23_onContainerSlotHoveredERKSsi(v22, v3, v4);
  v22 = (MinecraftScreenController *)v30;
  *(_DWORD *)(v30 + 636) = 2;
  return j_j_j__ZN25ContainerScreenController23_onContainerSlotHoveredERKSsi(v22, v3, v4);
}


void __fastcall AnvilScreenController::~AnvilScreenController(AnvilScreenController *this)
{
  AnvilScreenController *v1; // r4@1
  int v2; // r0@1
  int v3; // r5@3
  unsigned int *v4; // r1@4
  unsigned int v5; // r0@6
  unsigned int *v6; // r6@10
  unsigned int v7; // r0@12

  v1 = this;
  *(_DWORD *)this = &off_26E0D2C;
  v2 = *((_DWORD *)this + 160);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 160) = 0;
  v3 = *((_DWORD *)v1 + 158);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  ContainerScreenController::~ContainerScreenController(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


ContainerScreenController *__fastcall AnvilScreenController::~AnvilScreenController(AnvilScreenController *this)
{
  AnvilScreenController *v1; // r4@1
  int v2; // r0@1
  int v3; // r5@3
  unsigned int *v4; // r1@4
  unsigned int v5; // r0@6
  unsigned int *v6; // r6@10
  unsigned int v7; // r0@12

  v1 = this;
  *(_DWORD *)this = &off_26E0D2C;
  v2 = *((_DWORD *)this + 160);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 160) = 0;
  v3 = *((_DWORD *)v1 + 158);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  return j_j_j__ZN25ContainerScreenControllerD2Ev(v1);
}


void __fastcall AnvilScreenController::_registerCoalesceOrder(AnvilScreenController *this)
{
  AnvilScreenController::_registerCoalesceOrder(this);
}


void __fastcall AnvilScreenController::_registerAutoPlaceOrder(AnvilScreenController *this)
{
  AnvilScreenController *v1; // r8@1
  int v2; // r0@2
  int v3; // r4@3
  int v4; // r6@3
  bool v5; // zf@4
  int v6; // r7@7
  int v7; // r0@10
  int v8; // r7@11
  int v9; // r6@11
  bool v10; // zf@12
  int v11; // r4@15
  bool v12; // zf@18
  _DWORD *v13; // r0@22
  char **v14; // r0@23
  char *v15; // r1@24
  char *v16; // r0@26
  int v17; // r9@27
  int v18; // r0@29
  int v19; // r5@30
  int v20; // r7@30
  bool v21; // zf@31
  int v22; // r4@34
  bool v23; // zf@37
  _DWORD *v24; // r0@41
  char **v25; // r0@42
  char *v26; // r1@43
  char *v27; // r0@45
  int v28; // r9@46
  int v29; // r0@46
  int v30; // r5@47
  int v31; // r7@47
  bool v32; // zf@48
  int v33; // r4@51
  bool v34; // zf@54
  _DWORD *v35; // r0@58
  char **v36; // r0@59
  char *v37; // r1@60
  char *v38; // r0@62
  int v39; // r9@63
  int v40; // r0@63
  int v41; // r5@64
  int v42; // r7@64
  bool v43; // zf@65
  int v44; // r4@68
  bool v45; // zf@71
  _DWORD *v46; // r0@75
  unsigned __int64 *v47; // r8@76
  int v48; // r0@76
  int v49; // r0@76
  int v50; // r7@77
  int v51; // r6@77
  bool v52; // zf@78
  int v53; // r4@81
  bool v54; // zf@84
  _DWORD *v55; // r0@88
  char **v56; // r0@89
  char *v57; // r1@90
  char *v58; // r0@92
  int v59; // r9@93
  int v60; // r0@95
  int v61; // r5@96
  int v62; // r7@96
  bool v63; // zf@97
  int v64; // r4@100
  bool v65; // zf@103
  _DWORD *v66; // r0@107
  char **v67; // r0@108
  char *v68; // r1@109
  char *v69; // r0@111
  int v70; // r9@112
  int v71; // r0@112
  int v72; // r5@113
  int v73; // r7@113
  bool v74; // zf@114
  int v75; // r4@117
  bool v76; // zf@120
  _DWORD *v77; // r0@124
  char **v78; // r0@125
  char *v79; // r1@126
  char *v80; // r0@128
  int v81; // r9@129
  int v82; // r0@129
  int v83; // r5@130
  int v84; // r7@130
  bool v85; // zf@131
  int v86; // r4@134
  bool v87; // zf@137
  _DWORD *v88; // r0@141
  int v89; // r0@142
  int v90; // r9@142
  int v91; // r0@142
  int v92; // r5@143
  int v93; // r7@143
  bool v94; // zf@144
  int v95; // r4@147
  bool v96; // zf@150
  _DWORD *v97; // r0@154
  char **v98; // r0@155
  char *v99; // r1@156
  char *v100; // r0@158
  int v101; // r9@159
  int v102; // r0@159
  int v103; // r5@160
  int v104; // r7@160
  bool v105; // zf@161
  int v106; // r4@164
  bool v107; // zf@167
  _DWORD *v108; // r0@171
  char **v109; // r0@172
  char *v110; // r1@173
  char *v111; // r0@175
  int v112; // r0@176
  int v113; // r4@177
  int v114; // r6@177
  bool v115; // zf@178
  int v116; // r7@181
  bool v117; // zf@184
  _DWORD *v118; // r0@188
  int v119; // r0@189
  int v120; // r9@189
  int v121; // r0@189
  int v122; // r5@190
  int v123; // r7@190
  bool v124; // zf@191
  int v125; // r4@194
  bool v126; // zf@197
  _DWORD *v127; // r0@201
  char **v128; // r0@202
  char *v129; // r1@203
  char *v130; // r0@205
  int v131; // r9@206
  int v132; // r0@206
  int v133; // r5@207
  int v134; // r7@207
  bool v135; // zf@208
  int v136; // r4@211
  bool v137; // zf@214
  _DWORD *v138; // r0@218
  char **v139; // r0@219
  char *v140; // r1@220
  char *v141; // r0@222
  int v142; // r9@223
  int v143; // r0@225
  int v144; // r5@226
  int v145; // r7@226
  bool v146; // zf@227
  int v147; // r4@230
  bool v148; // zf@233
  _DWORD *v149; // r0@237
  int v150; // r0@238
  int v151; // r9@238
  int v152; // r0@238
  int v153; // r5@239
  int v154; // r7@239
  bool v155; // zf@240
  int v156; // r4@243
  bool v157; // zf@246
  _DWORD *v158; // r0@250
  char **v159; // r0@251
  char *v160; // r1@252
  char *v161; // r0@254
  int v162; // r9@255
  int v163; // r0@255
  int v164; // r5@256
  int v165; // r7@256
  bool v166; // zf@257
  int v167; // r4@260
  bool v168; // zf@263
  _DWORD *v169; // r0@267
  char **v170; // r0@268
  char *v171; // r1@269
  char *v172; // r0@271
  int v173; // r9@272
  int v174; // r0@272
  int v175; // r5@273
  int v176; // r7@273
  bool v177; // zf@274
  int v178; // r4@277
  bool v179; // zf@280
  _DWORD *v180; // r0@284
  int v181; // r0@285
  char **v182; // r4@285
  char **v183; // r6@285
  unsigned int *v184; // r2@287
  signed int v185; // r1@289
  int *v186; // r0@295
  char **v187; // r4@300
  char **v188; // r6@300
  unsigned int *v189; // r2@302
  signed int v190; // r1@304
  int *v191; // r0@310
  char **v192; // r4@315
  char **v193; // r6@315
  unsigned int *v194; // r2@317
  signed int v195; // r1@319
  int *v196; // r0@325
  char **v197; // r4@330
  char **v198; // r6@330
  unsigned int *v199; // r2@332
  signed int v200; // r1@334
  int *v201; // r0@340
  char **v202; // r4@345
  char **v203; // r6@345
  unsigned int *v204; // r2@347
  signed int v205; // r1@349
  int *v206; // r0@355
  bool v207; // zf@358
  _DWORD *v208; // r0@362
  char **v209; // r0@363
  char *v210; // r1@364
  char *v211; // r0@366
  int v212; // r9@367
  int v213; // r0@369
  int v214; // r5@370
  int v215; // r7@370
  bool v216; // zf@371
  int v217; // r4@374
  bool v218; // zf@377
  _DWORD *v219; // r0@381
  char **v220; // r0@382
  char *v221; // r1@383
  char *v222; // r0@385
  int v223; // r9@386
  int v224; // r0@386
  int v225; // r5@387
  int v226; // r7@387
  bool v227; // zf@388
  int v228; // r4@391
  bool v229; // zf@394
  _DWORD *v230; // r0@398
  unsigned __int64 *v231; // r8@399
  int v232; // r0@399
  int v233; // r9@399
  int v234; // r0@399
  int v235; // r5@400
  int v236; // r7@400
  bool v237; // zf@401
  int v238; // r4@404
  bool v239; // zf@407
  _DWORD *v240; // r0@411
  char **v241; // r0@412
  char *v242; // r1@413
  char *v243; // r0@415
  int v244; // r0@416
  int v245; // r4@417
  int v246; // r6@417
  bool v247; // zf@418
  int v248; // r7@421
  bool v249; // zf@424
  _DWORD *v250; // r0@428
  int v251; // r0@429
  int v252; // r9@429
  int v253; // r0@429
  int v254; // r5@430
  int v255; // r7@430
  bool v256; // zf@431
  int v257; // r4@434
  bool v258; // zf@437
  _DWORD *v259; // r0@441
  char **v260; // r0@442
  char *v261; // r1@443
  char *v262; // r0@445
  int v263; // r9@446
  int v264; // r0@448
  int v265; // r5@449
  int v266; // r7@449
  bool v267; // zf@450
  int v268; // r4@453
  bool v269; // zf@456
  _DWORD *v270; // r0@460
  int v271; // r0@461
  int v272; // r9@461
  int v273; // r0@461
  int v274; // r5@462
  int v275; // r7@462
  bool v276; // zf@463
  int v277; // r4@466
  bool v278; // zf@469
  _DWORD *v279; // r0@473
  char **v280; // r0@474
  char *v281; // r1@475
  char *v282; // r0@477
  int v283; // r9@478
  int v284; // r0@478
  int v285; // r5@479
  int v286; // r7@479
  bool v287; // zf@480
  int v288; // r4@483
  bool v289; // zf@486
  _DWORD *v290; // r0@490
  int v291; // r0@491
  char **v292; // r4@491
  char **v293; // r6@491
  unsigned int *v294; // r2@493
  signed int v295; // r1@495
  int *v296; // r0@501
  char **v297; // r4@506
  char **v298; // r6@506
  unsigned int *v299; // r2@508
  signed int v300; // r1@510
  int *v301; // r0@516
  char **v302; // r4@521
  char **v303; // r6@521
  unsigned int *v304; // r2@523
  signed int v305; // r1@525
  int *v306; // r0@531
  char **v307; // r6@536
  unsigned int *v308; // r2@538
  signed int v309; // r1@540
  int *v310; // r0@546
  unsigned int *v311; // r2@552
  signed int v312; // r1@554
  unsigned int *v313; // r2@556
  signed int v314; // r1@558
  unsigned int *v315; // r2@560
  signed int v316; // r1@562
  unsigned int *v317; // r2@564
  signed int v318; // r1@566
  unsigned int *v319; // r2@568
  signed int v320; // r1@570
  unsigned int *v321; // r2@572
  signed int v322; // r1@574
  unsigned int *v323; // r2@576
  signed int v324; // r1@578
  unsigned int *v325; // r2@580
  signed int v326; // r1@582
  unsigned int *v327; // r2@584
  signed int v328; // r1@586
  unsigned int *v329; // r2@588
  signed int v330; // r1@590
  unsigned int *v331; // r2@592
  signed int v332; // r1@594
  unsigned int *v333; // r2@596
  signed int v334; // r1@598
  unsigned int *v335; // r2@600
  signed int v336; // r1@602
  unsigned int *v337; // r2@604
  signed int v338; // r1@606
  unsigned int *v339; // r2@608
  signed int v340; // r1@610
  unsigned int *v341; // r2@612
  signed int v342; // r1@614
  unsigned int *v343; // r2@616
  signed int v344; // r1@618
  char *v345; // [sp+0h] [bp-118h]@268
  char v346; // [sp+4h] [bp-114h]@269
  char *v347; // [sp+8h] [bp-110h]@251
  char v348; // [sp+Ch] [bp-10Ch]@252
  char **v349; // [sp+10h] [bp-108h]@238
  char **v350; // [sp+14h] [bp-104h]@238
  char **v351; // [sp+18h] [bp-100h]@238
  char *v352; // [sp+1Ch] [bp-FCh]@219
  char v353; // [sp+20h] [bp-F8h]@220
  char *v354; // [sp+24h] [bp-F4h]@202
  char v355; // [sp+28h] [bp-F0h]@203
  char **v356; // [sp+2Ch] [bp-ECh]@189
  char **v357; // [sp+30h] [bp-E8h]@189
  char **v358; // [sp+34h] [bp-E4h]@189
  char *v359; // [sp+38h] [bp-E0h]@172
  char v360; // [sp+3Ch] [bp-DCh]@173
  char *v361; // [sp+40h] [bp-D8h]@155
  char v362; // [sp+44h] [bp-D4h]@156
  char **v363; // [sp+48h] [bp-D0h]@142
  char **v364; // [sp+4Ch] [bp-CCh]@142
  char **v365; // [sp+50h] [bp-C8h]@142
  char *v366; // [sp+54h] [bp-C4h]@125
  char v367; // [sp+58h] [bp-C0h]@126
  char *v368; // [sp+5Ch] [bp-BCh]@108
  char v369; // [sp+60h] [bp-B8h]@109
  char *v370; // [sp+64h] [bp-B4h]@89
  char v371; // [sp+68h] [bp-B0h]@90
  char **v372; // [sp+6Ch] [bp-ACh]@76
  char **v373; // [sp+70h] [bp-A8h]@76
  char **v374; // [sp+74h] [bp-A4h]@76
  char *v375; // [sp+78h] [bp-A0h]@59
  char v376; // [sp+7Ch] [bp-9Ch]@60
  char *v377; // [sp+80h] [bp-98h]@42
  char v378; // [sp+84h] [bp-94h]@43
  char *v379; // [sp+88h] [bp-90h]@23
  char v380; // [sp+8Ch] [bp-8Ch]@24
  char **v381; // [sp+90h] [bp-88h]@2
  char **v382; // [sp+94h] [bp-84h]@2
  char **v383; // [sp+98h] [bp-80h]@2
  char *v384; // [sp+9Ch] [bp-7Ch]@474
  char v385; // [sp+A0h] [bp-78h]@475
  char **v386; // [sp+A4h] [bp-74h]@461
  char **v387; // [sp+A8h] [bp-70h]@461
  char **v388; // [sp+ACh] [bp-6Ch]@461
  char *v389; // [sp+B0h] [bp-68h]@442
  char v390; // [sp+B4h] [bp-64h]@443
  char **v391; // [sp+B8h] [bp-60h]@429
  char **v392; // [sp+BCh] [bp-5Ch]@429
  char **v393; // [sp+C0h] [bp-58h]@429
  char *v394; // [sp+C4h] [bp-54h]@412
  char v395; // [sp+C8h] [bp-50h]@413
  char **v396; // [sp+CCh] [bp-4Ch]@399
  char **v397; // [sp+D0h] [bp-48h]@399
  char **v398; // [sp+D4h] [bp-44h]@399
  char *v399; // [sp+D8h] [bp-40h]@382
  char v400; // [sp+DCh] [bp-3Ch]@383
  char *v401; // [sp+E0h] [bp-38h]@363
  char v402; // [sp+E4h] [bp-34h]@364
  char **v403; // [sp+E8h] [bp-30h]@10
  char **v404; // [sp+ECh] [bp-2Ch]@10
  char **v405; // [sp+F0h] [bp-28h]@10

  v1 = this;
  if ( ContainerScreenController::_getInteractionModel(this) )
  {
    v381 = 0;
    v382 = 0;
    v383 = 0;
    v2 = *(_DWORD *)dword_27DA0C4;
    if ( !*(_DWORD *)dword_27DA0C4 )
      goto LABEL_22;
    v3 = *(_DWORD *)v2;
    v4 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    while ( 1 )
    {
      v5 = v4 == 0;
      if ( !v4 )
        v5 = *(_DWORD *)(v3 + 4) == 0;
      if ( v5 )
        break;
      v6 = *(_DWORD *)v3;
      if ( *(_DWORD *)v3 )
      {
        v4 = *(_DWORD *)(v6 + 12);
        v2 = v3;
        v3 = *(_DWORD *)v3;
        if ( !(*(_DWORD *)(v6 + 12) % (unsigned int)dword_27DA0C8) )
          continue;
      }
    }
    v12 = v2 == 0;
    if ( v2 )
      v2 = *(_DWORD *)v2;
      v12 = v2 == 0;
    if ( v12 )
LABEL_22:
      v13 = operator new(0x10u);
      *v13 = 0;
      v13[1] = 0;
      v13[2] = &unk_28898CC;
      v2 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DA0C4,
             0,
             (int)v13);
    AutoPlaceItem::AutoPlaceItem((int *)&v379, (int *)(v2 + 8), 1);
    v14 = v382;
    if ( v382 == v383 )
      std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::_M_emplace_back_aux<AutoPlaceItem>(
        (unsigned __int64 *)&v381,
        (int)&v379);
      v15 = v379;
    else
      *v382 = v379;
      v15 = (char *)&unk_28898CC;
      v379 = (char *)&unk_28898CC;
      *((_BYTE *)v14 + 4) = v380;
      v382 = v14 + 2;
    v16 = v15 - 12;
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v311 = (unsigned int *)(v15 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v312 = __ldrex(v311);
        while ( __strex(v312 - 1, v311) );
      else
        v312 = (*v311)--;
      if ( v312 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    v17 = 0;
    if ( dword_27DA0C8 != 1 )
      v17 = 1;
    v18 = *(_DWORD *)(dword_27DA0C4 + 4 * v17);
    if ( !v18 )
      goto LABEL_41;
    v19 = *(_DWORD *)v18;
    v20 = *(_DWORD *)(*(_DWORD *)v18 + 12);
      v21 = v20 == 1;
      if ( v20 == 1 )
        v21 = *(_DWORD *)(v19 + 4) == 1;
      if ( v21 )
      v22 = *(_DWORD *)v19;
      if ( *(_DWORD *)v19 )
        v20 = *(_DWORD *)(v22 + 12);
        v18 = v19;
        v19 = *(_DWORD *)v19;
        if ( *(_DWORD *)(v22 + 12) % (unsigned int)dword_27DA0C8 == v17 )
    v23 = v18 == 0;
    if ( v18 )
      v18 = *(_DWORD *)v18;
      v23 = v18 == 0;
    if ( v23 )
LABEL_41:
      v24 = operator new(0x10u);
      *v24 = 0;
      v24[1] = 1;
      v24[2] = &unk_28898CC;
      v18 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DA0C4,
              v17,
              1u,
              (int)v24);
    AutoPlaceItem::AutoPlaceItem((int *)&v377, (int *)(v18 + 8), 1);
    v25 = v382;
        (int)&v377);
      v26 = v377;
      *v382 = v377;
      v26 = (char *)&unk_28898CC;
      v377 = (char *)&unk_28898CC;
      *((_BYTE *)v25 + 4) = v378;
      v382 = v25 + 2;
    v27 = v26 - 12;
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v313 = (unsigned int *)(v26 - 4);
          v314 = __ldrex(v313);
        while ( __strex(v314 - 1, v313) );
        v314 = (*v313)--;
      if ( v314 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v27);
    v28 = 0x1Au % dword_27DA0C8;
    v29 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x1Au % dword_27DA0C8));
    if ( !v29 )
      goto LABEL_58;
    v30 = *(_DWORD *)v29;
    v31 = *(_DWORD *)(*(_DWORD *)v29 + 12);
      v32 = v31 == 26;
      if ( v31 == 26 )
        v32 = *(_DWORD *)(v30 + 4) == 26;
      if ( v32 )
      v33 = *(_DWORD *)v30;
      if ( *(_DWORD *)v30 )
        v31 = *(_DWORD *)(v33 + 12);
        v29 = v30;
        v30 = *(_DWORD *)v30;
        if ( *(_DWORD *)(v33 + 12) % (unsigned int)dword_27DA0C8 == v28 )
    v34 = v29 == 0;
    if ( v29 )
      v29 = *(_DWORD *)v29;
      v34 = v29 == 0;
    if ( v34 )
LABEL_58:
      v35 = operator new(0x10u);
      *v35 = 0;
      v35[1] = 26;
      v35[2] = &unk_28898CC;
      v29 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v28,
              0x1Au,
              (int)v35);
    AutoPlaceItem::AutoPlaceItem((int *)&v375, (int *)(v29 + 8), 0);
    v36 = v382;
        (int)&v375);
      v37 = v375;
      *v382 = v375;
      v37 = (char *)&unk_28898CC;
      v375 = (char *)&unk_28898CC;
      *((_BYTE *)v36 + 4) = v376;
      v382 = v36 + 2;
    v38 = v37 - 12;
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v315 = (unsigned int *)(v37 - 4);
          v316 = __ldrex(v315);
        while ( __strex(v316 - 1, v315) );
        v316 = (*v315)--;
      if ( v316 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v38);
    v39 = 0x18u % dword_27DA0C8;
    v40 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x18u % dword_27DA0C8));
    if ( !v40 )
      goto LABEL_75;
    v41 = *(_DWORD *)v40;
    v42 = *(_DWORD *)(*(_DWORD *)v40 + 12);
      v43 = v42 == 24;
      if ( v42 == 24 )
        v43 = *(_DWORD *)(v41 + 4) == 24;
      if ( v43 )
      v44 = *(_DWORD *)v41;
      if ( *(_DWORD *)v41 )
        v42 = *(_DWORD *)(v44 + 12);
        v40 = v41;
        v41 = *(_DWORD *)v41;
        if ( *(_DWORD *)(v44 + 12) % (unsigned int)dword_27DA0C8 == v39 )
    v45 = v40 == 0;
    if ( v40 )
      v40 = *(_DWORD *)v40;
      v45 = v40 == 0;
    if ( v45 )
LABEL_75:
      v46 = operator new(0x10u);
      *v46 = 0;
      v46[1] = 24;
      v46[2] = &unk_28898CC;
      v40 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v39,
              0x18u,
              (int)v46);
    v47 = (unsigned __int64 *)((char *)v1 + 600);
    v48 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v47,
            (int **)(v40 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v48, (unsigned __int64 *)&v381);
    v372 = 0;
    v373 = 0;
    v374 = 0;
    v49 = *(_DWORD *)dword_27DA0C4;
      goto LABEL_88;
    v50 = *(_DWORD *)v49;
    v51 = *(_DWORD *)(*(_DWORD *)v49 + 12);
      v52 = v51 == 0;
      if ( !v51 )
        v52 = *(_DWORD *)(v50 + 4) == 0;
      if ( v52 )
      v53 = *(_DWORD *)v50;
      if ( *(_DWORD *)v50 )
        v51 = *(_DWORD *)(v53 + 12);
        v49 = v50;
        v50 = *(_DWORD *)v50;
        if ( !(*(_DWORD *)(v53 + 12) % (unsigned int)dword_27DA0C8) )
    v54 = v49 == 0;
    if ( v49 )
      v49 = *(_DWORD *)v49;
      v54 = v49 == 0;
    if ( v54 )
LABEL_88:
      v55 = operator new(0x10u);
      *v55 = 0;
      v55[1] = 0;
      v55[2] = &unk_28898CC;
      v49 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              0,
              (int)v55);
    AutoPlaceItem::AutoPlaceItem((int *)&v370, (int *)(v49 + 8), 1);
    v56 = v373;
    if ( v373 == v374 )
        (unsigned __int64 *)&v372,
        (int)&v370);
      v57 = v370;
      *v373 = v370;
      v57 = (char *)&unk_28898CC;
      v370 = (char *)&unk_28898CC;
      *((_BYTE *)v56 + 4) = v371;
      v373 = v56 + 2;
    v58 = v57 - 12;
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v317 = (unsigned int *)(v57 - 4);
          v318 = __ldrex(v317);
        while ( __strex(v318 - 1, v317) );
        v318 = (*v317)--;
      if ( v318 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v58);
    v59 = 0;
      v59 = 1;
    v60 = *(_DWORD *)(dword_27DA0C4 + 4 * v59);
    if ( !v60 )
      goto LABEL_107;
    v61 = *(_DWORD *)v60;
    v62 = *(_DWORD *)(*(_DWORD *)v60 + 12);
      v63 = v62 == 1;
      if ( v62 == 1 )
        v63 = *(_DWORD *)(v61 + 4) == 1;
      if ( v63 )
      v64 = *(_DWORD *)v61;
      if ( *(_DWORD *)v61 )
        v62 = *(_DWORD *)(v64 + 12);
        v60 = v61;
        v61 = *(_DWORD *)v61;
        if ( *(_DWORD *)(v64 + 12) % (unsigned int)dword_27DA0C8 == v59 )
    v65 = v60 == 0;
    if ( v60 )
      v60 = *(_DWORD *)v60;
      v65 = v60 == 0;
    if ( v65 )
LABEL_107:
      v66 = operator new(0x10u);
      *v66 = 0;
      v66[1] = 1;
      v66[2] = &unk_28898CC;
      v60 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v59,
              (int)v66);
    AutoPlaceItem::AutoPlaceItem((int *)&v368, (int *)(v60 + 8), 1);
    v67 = v373;
        (int)&v368);
      v68 = v368;
      *v373 = v368;
      v68 = (char *)&unk_28898CC;
      v368 = (char *)&unk_28898CC;
      *((_BYTE *)v67 + 4) = v369;
      v373 = v67 + 2;
    v69 = v68 - 12;
    if ( (int *)(v68 - 12) != &dword_28898C0 )
      v319 = (unsigned int *)(v68 - 4);
          v320 = __ldrex(v319);
        while ( __strex(v320 - 1, v319) );
        v320 = (*v319)--;
      if ( v320 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v69);
    v70 = 0x18u % dword_27DA0C8;
    v71 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x18u % dword_27DA0C8));
    if ( !v71 )
      goto LABEL_124;
    v72 = *(_DWORD *)v71;
    v73 = *(_DWORD *)(*(_DWORD *)v71 + 12);
      v74 = v73 == 24;
      if ( v73 == 24 )
        v74 = *(_DWORD *)(v72 + 4) == 24;
      if ( v74 )
      v75 = *(_DWORD *)v72;
      if ( *(_DWORD *)v72 )
        v73 = *(_DWORD *)(v75 + 12);
        v71 = v72;
        v72 = *(_DWORD *)v72;
        if ( *(_DWORD *)(v75 + 12) % (unsigned int)dword_27DA0C8 == v70 )
    v76 = v71 == 0;
    if ( v71 )
      v71 = *(_DWORD *)v71;
      v76 = v71 == 0;
    if ( v76 )
LABEL_124:
      v77 = operator new(0x10u);
      *v77 = 0;
      v77[1] = 24;
      v77[2] = &unk_28898CC;
      v71 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v70,
              (int)v77);
    AutoPlaceItem::AutoPlaceItem((int *)&v366, (int *)(v71 + 8), 0);
    v78 = v373;
        (int)&v366);
      v79 = v366;
      *v373 = v366;
      v79 = (char *)&unk_28898CC;
      v366 = (char *)&unk_28898CC;
      *((_BYTE *)v78 + 4) = v367;
      v373 = v78 + 2;
    v80 = v79 - 12;
    if ( (int *)(v79 - 12) != &dword_28898C0 )
      v321 = (unsigned int *)(v79 - 4);
          v322 = __ldrex(v321);
        while ( __strex(v322 - 1, v321) );
        v322 = (*v321)--;
      if ( v322 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v80);
    v81 = 0x1Au % dword_27DA0C8;
    v82 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x1Au % dword_27DA0C8));
    if ( !v82 )
      goto LABEL_141;
    v83 = *(_DWORD *)v82;
    v84 = *(_DWORD *)(*(_DWORD *)v82 + 12);
      v85 = v84 == 26;
      if ( v84 == 26 )
        v85 = *(_DWORD *)(v83 + 4) == 26;
      if ( v85 )
      v86 = *(_DWORD *)v83;
      if ( *(_DWORD *)v83 )
        v84 = *(_DWORD *)(v86 + 12);
        v82 = v83;
        v83 = *(_DWORD *)v83;
        if ( *(_DWORD *)(v86 + 12) % (unsigned int)dword_27DA0C8 == v81 )
    v87 = v82 == 0;
    if ( v82 )
      v82 = *(_DWORD *)v82;
      v87 = v82 == 0;
    if ( v87 )
LABEL_141:
      v88 = operator new(0x10u);
      *v88 = 0;
      v88[1] = 26;
      v88[2] = &unk_28898CC;
      v82 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v81,
              (int)v88);
    v89 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)(v82 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v89, (unsigned __int64 *)&v372);
    v363 = 0;
    v364 = 0;
    v365 = 0;
    v90 = 0x1Au % dword_27DA0C8;
    v91 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x1Au % dword_27DA0C8));
    if ( !v91 )
      goto LABEL_154;
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
        if ( *(_DWORD *)(v95 + 12) % (unsigned int)dword_27DA0C8 == v90 )
    v96 = v91 == 0;
    if ( v91 )
      v91 = *(_DWORD *)v91;
      v96 = v91 == 0;
    if ( v96 )
LABEL_154:
      v97 = operator new(0x10u);
      *v97 = 0;
      v97[1] = 26;
      v97[2] = &unk_28898CC;
      v91 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v90,
              (int)v97);
    AutoPlaceItem::AutoPlaceItem((int *)&v361, (int *)(v91 + 8), 0);
    v98 = v364;
    if ( v364 == v365 )
        (unsigned __int64 *)&v363,
        (int)&v361);
      v99 = v361;
      *v364 = v361;
      v99 = (char *)&unk_28898CC;
      v361 = (char *)&unk_28898CC;
      *((_BYTE *)v98 + 4) = v362;
      v364 = v98 + 2;
    v100 = v99 - 12;
    if ( (int *)(v99 - 12) != &dword_28898C0 )
      v323 = (unsigned int *)(v99 - 4);
          v324 = __ldrex(v323);
        while ( __strex(v324 - 1, v323) );
        v324 = (*v323)--;
      if ( v324 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v100);
    v101 = 0x18u % dword_27DA0C8;
    v102 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x18u % dword_27DA0C8));
    if ( !v102 )
      goto LABEL_171;
    v103 = *(_DWORD *)v102;
    v104 = *(_DWORD *)(*(_DWORD *)v102 + 12);
      v105 = v104 == 24;
      if ( v104 == 24 )
        v105 = *(_DWORD *)(v103 + 4) == 24;
      if ( v105 )
      v106 = *(_DWORD *)v103;
      if ( *(_DWORD *)v103 )
        v104 = *(_DWORD *)(v106 + 12);
        v102 = v103;
        v103 = *(_DWORD *)v103;
        if ( *(_DWORD *)(v106 + 12) % (unsigned int)dword_27DA0C8 == v101 )
    v107 = v102 == 0;
    if ( v102 )
      v102 = *(_DWORD *)v102;
      v107 = v102 == 0;
    if ( v107 )
LABEL_171:
      v108 = operator new(0x10u);
      *v108 = 0;
      v108[1] = 24;
      v108[2] = &unk_28898CC;
      v102 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               (int)&dword_27DA0C4,
               v101,
               0x18u,
               (int)v108);
    AutoPlaceItem::AutoPlaceItem((int *)&v359, (int *)(v102 + 8), 0);
    v109 = v364;
        (int)&v359);
      v110 = v359;
      *v364 = v359;
      v110 = (char *)&unk_28898CC;
      v359 = (char *)&unk_28898CC;
      *((_BYTE *)v109 + 4) = v360;
      v364 = v109 + 2;
    v111 = v110 - 12;
    if ( (int *)(v110 - 12) != &dword_28898C0 )
      v325 = (unsigned int *)(v110 - 4);
          v326 = __ldrex(v325);
        while ( __strex(v326 - 1, v325) );
        v326 = (*v325)--;
      if ( v326 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v111);
    v112 = *(_DWORD *)dword_27DA0C4;
      goto LABEL_188;
    v113 = *(_DWORD *)v112;
    v114 = *(_DWORD *)(*(_DWORD *)v112 + 12);
      v115 = v114 == 0;
      if ( !v114 )
        v115 = *(_DWORD *)(v113 + 4) == 0;
      if ( v115 )
      v116 = *(_DWORD *)v113;
      if ( *(_DWORD *)v113 )
        v114 = *(_DWORD *)(v116 + 12);
        v112 = v113;
        v113 = *(_DWORD *)v113;
        if ( !(*(_DWORD *)(v116 + 12) % (unsigned int)dword_27DA0C8) )
    v117 = v112 == 0;
    if ( v112 )
      v112 = *(_DWORD *)v112;
      v117 = v112 == 0;
    if ( v117 )
LABEL_188:
      v118 = operator new(0x10u);
      *v118 = 0;
      v118[1] = 0;
      v118[2] = &unk_28898CC;
      v112 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               0,
               (int)v118);
    v119 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v47,
             (int **)(v112 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v119, (unsigned __int64 *)&v363);
    v356 = 0;
    v357 = 0;
    v358 = 0;
    v120 = 0x1Au % dword_27DA0C8;
    v121 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x1Au % dword_27DA0C8));
    if ( !v121 )
      goto LABEL_201;
    v122 = *(_DWORD *)v121;
    v123 = *(_DWORD *)(*(_DWORD *)v121 + 12);
      v124 = v123 == 26;
      if ( v123 == 26 )
        v124 = *(_DWORD *)(v122 + 4) == 26;
      if ( v124 )
      v125 = *(_DWORD *)v122;
      if ( *(_DWORD *)v122 )
        v123 = *(_DWORD *)(v125 + 12);
        v121 = v122;
        v122 = *(_DWORD *)v122;
        if ( *(_DWORD *)(v125 + 12) % (unsigned int)dword_27DA0C8 == v120 )
    v126 = v121 == 0;
    if ( v121 )
      v121 = *(_DWORD *)v121;
      v126 = v121 == 0;
    if ( v126 )
LABEL_201:
      v127 = operator new(0x10u);
      *v127 = 0;
      v127[1] = 26;
      v127[2] = &unk_28898CC;
      v121 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v120,
               0x1Au,
               (int)v127);
    AutoPlaceItem::AutoPlaceItem((int *)&v354, (int *)(v121 + 8), 0);
    v128 = v357;
    if ( v357 == v358 )
        (unsigned __int64 *)&v356,
        (int)&v354);
      v129 = v354;
      *v357 = v354;
      v129 = (char *)&unk_28898CC;
      v354 = (char *)&unk_28898CC;
      *((_BYTE *)v128 + 4) = v355;
      v357 = v128 + 2;
    v130 = v129 - 12;
    if ( (int *)(v129 - 12) != &dword_28898C0 )
      v327 = (unsigned int *)(v129 - 4);
          v328 = __ldrex(v327);
        while ( __strex(v328 - 1, v327) );
        v328 = (*v327)--;
      if ( v328 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v130);
    v131 = 0x18u % dword_27DA0C8;
    v132 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x18u % dword_27DA0C8));
    if ( !v132 )
      goto LABEL_218;
    v133 = *(_DWORD *)v132;
    v134 = *(_DWORD *)(*(_DWORD *)v132 + 12);
      v135 = v134 == 24;
      if ( v134 == 24 )
        v135 = *(_DWORD *)(v133 + 4) == 24;
      if ( v135 )
      v136 = *(_DWORD *)v133;
      if ( *(_DWORD *)v133 )
        v134 = *(_DWORD *)(v136 + 12);
        v132 = v133;
        v133 = *(_DWORD *)v133;
        if ( *(_DWORD *)(v136 + 12) % (unsigned int)dword_27DA0C8 == v131 )
    v137 = v132 == 0;
    if ( v132 )
      v132 = *(_DWORD *)v132;
      v137 = v132 == 0;
    if ( v137 )
LABEL_218:
      v138 = operator new(0x10u);
      *v138 = 0;
      v138[1] = 24;
      v138[2] = &unk_28898CC;
      v132 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v131,
               (int)v138);
    AutoPlaceItem::AutoPlaceItem((int *)&v352, (int *)(v132 + 8), 0);
    v139 = v357;
        (int)&v352);
      v140 = v352;
      *v357 = v352;
      v140 = (char *)&unk_28898CC;
      v352 = (char *)&unk_28898CC;
      *((_BYTE *)v139 + 4) = v353;
      v357 = v139 + 2;
    v141 = v140 - 12;
    if ( (int *)(v140 - 12) != &dword_28898C0 )
      v329 = (unsigned int *)(v140 - 4);
          v330 = __ldrex(v329);
        while ( __strex(v330 - 1, v329) );
        v330 = (*v329)--;
      if ( v330 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v141);
    v142 = 0;
      v142 = 1;
    v143 = *(_DWORD *)(dword_27DA0C4 + 4 * v142);
    if ( !v143 )
      goto LABEL_237;
    v144 = *(_DWORD *)v143;
    v145 = *(_DWORD *)(*(_DWORD *)v143 + 12);
      v146 = v145 == 1;
      if ( v145 == 1 )
        v146 = *(_DWORD *)(v144 + 4) == 1;
      if ( v146 )
      v147 = *(_DWORD *)v144;
      if ( *(_DWORD *)v144 )
        v145 = *(_DWORD *)(v147 + 12);
        v143 = v144;
        v144 = *(_DWORD *)v144;
        if ( *(_DWORD *)(v147 + 12) % (unsigned int)dword_27DA0C8 == v142 )
    v148 = v143 == 0;
    if ( v143 )
      v143 = *(_DWORD *)v143;
      v148 = v143 == 0;
    if ( v148 )
LABEL_237:
      v149 = operator new(0x10u);
      *v149 = 0;
      v149[1] = 1;
      v149[2] = &unk_28898CC;
      v143 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v142,
               1u,
               (int)v149);
    v150 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v143 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v150, (unsigned __int64 *)&v356);
    v349 = 0;
    v350 = 0;
    v351 = 0;
    v151 = 0x18u % dword_27DA0C8;
    v152 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x18u % dword_27DA0C8));
    if ( !v152 )
      goto LABEL_250;
    v153 = *(_DWORD *)v152;
    v154 = *(_DWORD *)(*(_DWORD *)v152 + 12);
      v155 = v154 == 24;
      if ( v154 == 24 )
        v155 = *(_DWORD *)(v153 + 4) == 24;
      if ( v155 )
      v156 = *(_DWORD *)v153;
      if ( *(_DWORD *)v153 )
        v154 = *(_DWORD *)(v156 + 12);
        v152 = v153;
        v153 = *(_DWORD *)v153;
        if ( *(_DWORD *)(v156 + 12) % (unsigned int)dword_27DA0C8 == v151 )
    v157 = v152 == 0;
    if ( v152 )
      v152 = *(_DWORD *)v152;
      v157 = v152 == 0;
    if ( v157 )
LABEL_250:
      v158 = operator new(0x10u);
      *v158 = 0;
      v158[1] = 24;
      v158[2] = &unk_28898CC;
      v152 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v151,
               (int)v158);
    AutoPlaceItem::AutoPlaceItem((int *)&v347, (int *)(v152 + 8), 0);
    v159 = v350;
    if ( v350 == v351 )
        (unsigned __int64 *)&v349,
        (int)&v347);
      v160 = v347;
      *v350 = v347;
      v160 = (char *)&unk_28898CC;
      v347 = (char *)&unk_28898CC;
      *((_BYTE *)v159 + 4) = v348;
      v350 = v159 + 2;
    v161 = v160 - 12;
    if ( (int *)(v160 - 12) != &dword_28898C0 )
      v331 = (unsigned int *)(v160 - 4);
          v332 = __ldrex(v331);
        while ( __strex(v332 - 1, v331) );
        v332 = (*v331)--;
      if ( v332 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v161);
    v162 = 0x1Au % dword_27DA0C8;
    v163 = *(_DWORD *)(dword_27DA0C4 + 4 * (0x1Au % dword_27DA0C8));
    if ( !v163 )
      goto LABEL_267;
    v164 = *(_DWORD *)v163;
    v165 = *(_DWORD *)(*(_DWORD *)v163 + 12);
      v166 = v165 == 26;
      if ( v165 == 26 )
        v166 = *(_DWORD *)(v164 + 4) == 26;
      if ( v166 )
      v167 = *(_DWORD *)v164;
      if ( *(_DWORD *)v164 )
        v165 = *(_DWORD *)(v167 + 12);
        v163 = v164;
        v164 = *(_DWORD *)v164;
        if ( *(_DWORD *)(v167 + 12) % (unsigned int)dword_27DA0C8 == v162 )
    v168 = v163 == 0;
    if ( v163 )
      v163 = *(_DWORD *)v163;
      v168 = v163 == 0;
    if ( v168 )
LABEL_267:
      v169 = operator new(0x10u);
      *v169 = 0;
      v169[1] = 26;
      v169[2] = &unk_28898CC;
      v163 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v162,
               (int)v169);
    AutoPlaceItem::AutoPlaceItem((int *)&v345, (int *)(v163 + 8), 0);
    v170 = v350;
        (int)&v345);
      v171 = v345;
      *v350 = v345;
      v171 = (char *)&unk_28898CC;
      v345 = (char *)&unk_28898CC;
      *((_BYTE *)v170 + 4) = v346;
      v350 = v170 + 2;
    v172 = v171 - 12;
    if ( (int *)(v171 - 12) != &dword_28898C0 )
      v333 = (unsigned int *)(v171 - 4);
          v334 = __ldrex(v333);
        while ( __strex(v334 - 1, v333) );
        v334 = (*v333)--;
      if ( v334 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v172);
    v173 = 2u % dword_27DA0C8;
    v174 = *(_DWORD *)(dword_27DA0C4 + 4 * (2u % dword_27DA0C8));
    if ( !v174 )
      goto LABEL_284;
    v175 = *(_DWORD *)v174;
    v176 = *(_DWORD *)(*(_DWORD *)v174 + 12);
      v177 = v176 == 2;
      if ( v176 == 2 )
        v177 = *(_DWORD *)(v175 + 4) == 2;
      if ( v177 )
      v178 = *(_DWORD *)v175;
      if ( *(_DWORD *)v175 )
        v176 = *(_DWORD *)(v178 + 12);
        v174 = v175;
        v175 = *(_DWORD *)v175;
        if ( *(_DWORD *)(v178 + 12) % (unsigned int)dword_27DA0C8 == v173 )
    v179 = v174 == 0;
    if ( v174 )
      v174 = *(_DWORD *)v174;
      v179 = v174 == 0;
    if ( v179 )
LABEL_284:
      v180 = operator new(0x10u);
      *v180 = 0;
      v180[1] = 2;
      v180[2] = &unk_28898CC;
      v174 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v173,
               2u,
               (int)v180);
    v181 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v174 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v181, (unsigned __int64 *)&v349);
    v183 = v350;
    v182 = v349;
    if ( v349 != v350 )
      do
        v186 = (int *)(*v182 - 12);
        if ( v186 != &dword_28898C0 )
        {
          v184 = (unsigned int *)(*v182 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v185 = __ldrex(v184);
            while ( __strex(v185 - 1, v184) );
          }
          else
            v185 = (*v184)--;
          if ( v185 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v186);
        }
        v182 += 2;
      while ( v182 != v183 );
      v182 = v349;
    if ( v182 )
      operator delete(v182);
    v188 = v357;
    v187 = v356;
    if ( v356 != v357 )
        v191 = (int *)(*v187 - 12);
        if ( v191 != &dword_28898C0 )
          v189 = (unsigned int *)(*v187 - 4);
              v190 = __ldrex(v189);
            while ( __strex(v190 - 1, v189) );
            v190 = (*v189)--;
          if ( v190 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v191);
        v187 += 2;
      while ( v187 != v188 );
      v187 = v356;
    if ( v187 )
      operator delete(v187);
    v193 = v364;
    v192 = v363;
    if ( v363 != v364 )
        v196 = (int *)(*v192 - 12);
        if ( v196 != &dword_28898C0 )
          v194 = (unsigned int *)(*v192 - 4);
              v195 = __ldrex(v194);
            while ( __strex(v195 - 1, v194) );
            v195 = (*v194)--;
          if ( v195 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v196);
        v192 += 2;
      while ( v192 != v193 );
      v192 = v363;
    if ( v192 )
      operator delete(v192);
    v198 = v373;
    v197 = v372;
    if ( v372 != v373 )
        v201 = (int *)(*v197 - 12);
        if ( v201 != &dword_28898C0 )
          v199 = (unsigned int *)(*v197 - 4);
              v200 = __ldrex(v199);
            while ( __strex(v200 - 1, v199) );
            v200 = (*v199)--;
          if ( v200 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v201);
        v197 += 2;
      while ( v197 != v198 );
      v197 = v372;
    if ( v197 )
      operator delete(v197);
    v203 = v382;
    v202 = v381;
    if ( v381 != v382 )
        v206 = (int *)(*v202 - 12);
        if ( v206 != &dword_28898C0 )
          v204 = (unsigned int *)(*v202 - 4);
              v205 = __ldrex(v204);
            while ( __strex(v205 - 1, v204) );
            v205 = (*v204)--;
          if ( v205 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v206);
        v202 += 2;
      while ( v202 != v203 );
      v202 = v381;
  }
  else
    v403 = 0;
    v404 = 0;
    v405 = 0;
    v7 = *(_DWORD *)dword_27DA0C4;
      goto LABEL_362;
    v8 = *(_DWORD *)v7;
    v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
      v10 = v9 == 0;
      if ( !v9 )
        v10 = *(_DWORD *)(v8 + 4) == 0;
      if ( v10 )
      v11 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 )
        v9 = *(_DWORD *)(v11 + 12);
        v7 = v8;
        v8 = *(_DWORD *)v8;
        if ( !(*(_DWORD *)(v11 + 12) % (unsigned int)dword_27DA0C8) )
    v207 = v7 == 0;
    if ( v7 )
      v7 = *(_DWORD *)v7;
      v207 = v7 == 0;
    if ( v207 )
LABEL_362:
      v208 = operator new(0x10u);
      *v208 = 0;
      v208[1] = 0;
      v208[2] = &unk_28898CC;
      v7 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)v208);
    AutoPlaceItem::AutoPlaceItem((int *)&v401, (int *)(v7 + 8), 1);
    v209 = v404;
    if ( v404 == v405 )
        (unsigned __int64 *)&v403,
        (int)&v401);
      v210 = v401;
      *v404 = v401;
      v210 = (char *)&unk_28898CC;
      v401 = (char *)&unk_28898CC;
      *((_BYTE *)v209 + 4) = v402;
      v404 = v209 + 2;
    v211 = v210 - 12;
    if ( (int *)(v210 - 12) != &dword_28898C0 )
      v335 = (unsigned int *)(v210 - 4);
          v336 = __ldrex(v335);
        while ( __strex(v336 - 1, v335) );
        v336 = (*v335)--;
      if ( v336 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v211);
    v212 = 0;
      v212 = 1;
    v213 = *(_DWORD *)(dword_27DA0C4 + 4 * v212);
    if ( !v213 )
      goto LABEL_381;
    v214 = *(_DWORD *)v213;
    v215 = *(_DWORD *)(*(_DWORD *)v213 + 12);
      v216 = v215 == 1;
      if ( v215 == 1 )
        v216 = *(_DWORD *)(v214 + 4) == 1;
      if ( v216 )
      v217 = *(_DWORD *)v214;
      if ( *(_DWORD *)v214 )
        v215 = *(_DWORD *)(v217 + 12);
        v213 = v214;
        v214 = *(_DWORD *)v214;
        if ( *(_DWORD *)(v217 + 12) % (unsigned int)dword_27DA0C8 == v212 )
    v218 = v213 == 0;
    if ( v213 )
      v213 = *(_DWORD *)v213;
      v218 = v213 == 0;
    if ( v218 )
LABEL_381:
      v219 = operator new(0x10u);
      *v219 = 0;
      v219[1] = 1;
      v219[2] = &unk_28898CC;
      v213 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v212,
               (int)v219);
    AutoPlaceItem::AutoPlaceItem((int *)&v399, (int *)(v213 + 8), 1);
    v220 = v404;
        (int)&v399);
      v221 = v399;
      *v404 = v399;
      v221 = (char *)&unk_28898CC;
      v399 = (char *)&unk_28898CC;
      *((_BYTE *)v220 + 4) = v400;
      v404 = v220 + 2;
    v222 = v221 - 12;
    if ( (int *)(v221 - 12) != &dword_28898C0 )
      v337 = (unsigned int *)(v221 - 4);
          v338 = __ldrex(v337);
        while ( __strex(v338 - 1, v337) );
        v338 = (*v337)--;
      if ( v338 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v222);
    v223 = 9u % dword_27DA0C8;
    v224 = *(_DWORD *)(dword_27DA0C4 + 4 * (9u % dword_27DA0C8));
    if ( !v224 )
      goto LABEL_398;
    v225 = *(_DWORD *)v224;
    v226 = *(_DWORD *)(*(_DWORD *)v224 + 12);
      v227 = v226 == 9;
      if ( v226 == 9 )
        v227 = *(_DWORD *)(v225 + 4) == 9;
      if ( v227 )
      v228 = *(_DWORD *)v225;
      if ( *(_DWORD *)v225 )
        v226 = *(_DWORD *)(v228 + 12);
        v224 = v225;
        v225 = *(_DWORD *)v225;
        if ( *(_DWORD *)(v228 + 12) % (unsigned int)dword_27DA0C8 == v223 )
    v229 = v224 == 0;
    if ( v224 )
      v224 = *(_DWORD *)v224;
      v229 = v224 == 0;
    if ( v229 )
LABEL_398:
      v230 = operator new(0x10u);
      *v230 = 0;
      v230[1] = 9;
      v230[2] = &unk_28898CC;
      v224 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v223,
               9u,
               (int)v230);
    v231 = (unsigned __int64 *)((char *)v1 + 600);
    v232 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v231,
             (int **)(v224 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v232, (unsigned __int64 *)&v403);
    v396 = 0;
    v397 = 0;
    v398 = 0;
    v233 = 9u % dword_27DA0C8;
    v234 = *(_DWORD *)(dword_27DA0C4 + 4 * (9u % dword_27DA0C8));
    if ( !v234 )
      goto LABEL_411;
    v235 = *(_DWORD *)v234;
    v236 = *(_DWORD *)(*(_DWORD *)v234 + 12);
      v237 = v236 == 9;
      if ( v236 == 9 )
        v237 = *(_DWORD *)(v235 + 4) == 9;
      if ( v237 )
      v238 = *(_DWORD *)v235;
      if ( *(_DWORD *)v235 )
        v236 = *(_DWORD *)(v238 + 12);
        v234 = v235;
        v235 = *(_DWORD *)v235;
        if ( *(_DWORD *)(v238 + 12) % (unsigned int)dword_27DA0C8 == v233 )
    v239 = v234 == 0;
    if ( v234 )
      v234 = *(_DWORD *)v234;
      v239 = v234 == 0;
    if ( v239 )
LABEL_411:
      v240 = operator new(0x10u);
      *v240 = 0;
      v240[1] = 9;
      v240[2] = &unk_28898CC;
      v234 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v233,
               (int)v240);
    AutoPlaceItem::AutoPlaceItem((int *)&v394, (int *)(v234 + 8), 0);
    v241 = v397;
    if ( v397 == v398 )
        (unsigned __int64 *)&v396,
        (int)&v394);
      v242 = v394;
      *v397 = v394;
      v242 = (char *)&unk_28898CC;
      v394 = (char *)&unk_28898CC;
      *((_BYTE *)v241 + 4) = v395;
      v397 = v241 + 2;
    v243 = v242 - 12;
    if ( (int *)(v242 - 12) != &dword_28898C0 )
      v339 = (unsigned int *)(v242 - 4);
          v340 = __ldrex(v339);
        while ( __strex(v340 - 1, v339) );
        v340 = (*v339)--;
      if ( v340 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v243);
    v244 = *(_DWORD *)dword_27DA0C4;
      goto LABEL_428;
    v245 = *(_DWORD *)v244;
    v246 = *(_DWORD *)(*(_DWORD *)v244 + 12);
      v247 = v246 == 0;
      if ( !v246 )
        v247 = *(_DWORD *)(v245 + 4) == 0;
      if ( v247 )
      v248 = *(_DWORD *)v245;
      if ( *(_DWORD *)v245 )
        v246 = *(_DWORD *)(v248 + 12);
        v244 = v245;
        v245 = *(_DWORD *)v245;
        if ( !(*(_DWORD *)(v248 + 12) % (unsigned int)dword_27DA0C8) )
    v249 = v244 == 0;
    if ( v244 )
      v244 = *(_DWORD *)v244;
      v249 = v244 == 0;
    if ( v249 )
LABEL_428:
      v250 = operator new(0x10u);
      *v250 = 0;
      v250[1] = 0;
      v250[2] = &unk_28898CC;
      v244 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               (int)v250);
    v251 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v244 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v251, (unsigned __int64 *)&v396);
    v391 = 0;
    v392 = 0;
    v393 = 0;
    v252 = 9u % dword_27DA0C8;
    v253 = *(_DWORD *)(dword_27DA0C4 + 4 * (9u % dword_27DA0C8));
    if ( !v253 )
      goto LABEL_441;
    v254 = *(_DWORD *)v253;
    v255 = *(_DWORD *)(*(_DWORD *)v253 + 12);
      v256 = v255 == 9;
      if ( v255 == 9 )
        v256 = *(_DWORD *)(v254 + 4) == 9;
      if ( v256 )
      v257 = *(_DWORD *)v254;
      if ( *(_DWORD *)v254 )
        v255 = *(_DWORD *)(v257 + 12);
        v253 = v254;
        v254 = *(_DWORD *)v254;
        if ( *(_DWORD *)(v257 + 12) % (unsigned int)dword_27DA0C8 == v252 )
    v258 = v253 == 0;
    if ( v253 )
      v253 = *(_DWORD *)v253;
      v258 = v253 == 0;
    if ( v258 )
LABEL_441:
      v259 = operator new(0x10u);
      *v259 = 0;
      v259[1] = 9;
      v259[2] = &unk_28898CC;
      v253 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v252,
               (int)v259);
    AutoPlaceItem::AutoPlaceItem((int *)&v389, (int *)(v253 + 8), 0);
    v260 = v392;
    if ( v392 == v393 )
        (unsigned __int64 *)&v391,
        (int)&v389);
      v261 = v389;
      *v392 = v389;
      v261 = (char *)&unk_28898CC;
      v389 = (char *)&unk_28898CC;
      *((_BYTE *)v260 + 4) = v390;
      v392 = v260 + 2;
    v262 = v261 - 12;
    if ( (int *)(v261 - 12) != &dword_28898C0 )
      v341 = (unsigned int *)(v261 - 4);
          v342 = __ldrex(v341);
        while ( __strex(v342 - 1, v341) );
        v342 = (*v341)--;
      if ( v342 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v262);
    v263 = 0;
      v263 = 1;
    v264 = *(_DWORD *)(dword_27DA0C4 + 4 * v263);
    if ( !v264 )
      goto LABEL_460;
    v265 = *(_DWORD *)v264;
    v266 = *(_DWORD *)(*(_DWORD *)v264 + 12);
      v267 = v266 == 1;
      if ( v266 == 1 )
        v267 = *(_DWORD *)(v265 + 4) == 1;
      if ( v267 )
      v268 = *(_DWORD *)v265;
      if ( *(_DWORD *)v265 )
        v266 = *(_DWORD *)(v268 + 12);
        v264 = v265;
        v265 = *(_DWORD *)v265;
        if ( *(_DWORD *)(v268 + 12) % (unsigned int)dword_27DA0C8 == v263 )
    v269 = v264 == 0;
    if ( v264 )
      v264 = *(_DWORD *)v264;
      v269 = v264 == 0;
    if ( v269 )
LABEL_460:
      v270 = operator new(0x10u);
      *v270 = 0;
      v270[1] = 1;
      v270[2] = &unk_28898CC;
      v264 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v263,
               (int)v270);
    v271 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v264 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v271, (unsigned __int64 *)&v391);
    v386 = 0;
    v387 = 0;
    v388 = 0;
    v272 = 9u % dword_27DA0C8;
    v273 = *(_DWORD *)(dword_27DA0C4 + 4 * (9u % dword_27DA0C8));
    if ( !v273 )
      goto LABEL_473;
    v274 = *(_DWORD *)v273;
    v275 = *(_DWORD *)(*(_DWORD *)v273 + 12);
      v276 = v275 == 9;
      if ( v275 == 9 )
        v276 = *(_DWORD *)(v274 + 4) == 9;
      if ( v276 )
      v277 = *(_DWORD *)v274;
      if ( *(_DWORD *)v274 )
        v275 = *(_DWORD *)(v277 + 12);
        v273 = v274;
        v274 = *(_DWORD *)v274;
        if ( *(_DWORD *)(v277 + 12) % (unsigned int)dword_27DA0C8 == v272 )
    v278 = v273 == 0;
    if ( v273 )
      v273 = *(_DWORD *)v273;
      v278 = v273 == 0;
    if ( v278 )
LABEL_473:
      v279 = operator new(0x10u);
      *v279 = 0;
      v279[1] = 9;
      v279[2] = &unk_28898CC;
      v273 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v272,
               (int)v279);
    AutoPlaceItem::AutoPlaceItem((int *)&v384, (int *)(v273 + 8), 0);
    v280 = v387;
    if ( v387 == v388 )
        (unsigned __int64 *)&v386,
        (int)&v384);
      v281 = v384;
      *v387 = v384;
      v281 = (char *)&unk_28898CC;
      v384 = (char *)&unk_28898CC;
      *((_BYTE *)v280 + 4) = v385;
      v387 = v280 + 2;
    v282 = v281 - 12;
    if ( (int *)(v281 - 12) != &dword_28898C0 )
      v343 = (unsigned int *)(v281 - 4);
          v344 = __ldrex(v343);
        while ( __strex(v344 - 1, v343) );
        v344 = (*v343)--;
      if ( v344 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v282);
    v283 = 2u % dword_27DA0C8;
    v284 = *(_DWORD *)(dword_27DA0C4 + 4 * (2u % dword_27DA0C8));
    if ( !v284 )
      goto LABEL_490;
    v285 = *(_DWORD *)v284;
    v286 = *(_DWORD *)(*(_DWORD *)v284 + 12);
      v287 = v286 == 2;
      if ( v286 == 2 )
        v287 = *(_DWORD *)(v285 + 4) == 2;
      if ( v287 )
      v288 = *(_DWORD *)v285;
      if ( *(_DWORD *)v285 )
        v286 = *(_DWORD *)(v288 + 12);
        v284 = v285;
        v285 = *(_DWORD *)v285;
        if ( *(_DWORD *)(v288 + 12) % (unsigned int)dword_27DA0C8 == v283 )
    v289 = v284 == 0;
    if ( v284 )
      v284 = *(_DWORD *)v284;
      v289 = v284 == 0;
    if ( v289 )
LABEL_490:
      v290 = operator new(0x10u);
      *v290 = 0;
      v290[1] = 2;
      v290[2] = &unk_28898CC;
      v284 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v283,
               (int)v290);
    v291 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v284 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v291, (unsigned __int64 *)&v386);
    v293 = v387;
    v292 = v386;
    if ( v386 != v387 )
        v296 = (int *)(*v292 - 12);
        if ( v296 != &dword_28898C0 )
          v294 = (unsigned int *)(*v292 - 4);
              v295 = __ldrex(v294);
            while ( __strex(v295 - 1, v294) );
            v295 = (*v294)--;
          if ( v295 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v296);
        v292 += 2;
      while ( v292 != v293 );
      v292 = v386;
    if ( v292 )
      operator delete(v292);
    v298 = v392;
    v297 = v391;
    if ( v391 != v392 )
        v301 = (int *)(*v297 - 12);
        if ( v301 != &dword_28898C0 )
          v299 = (unsigned int *)(*v297 - 4);
              v300 = __ldrex(v299);
            while ( __strex(v300 - 1, v299) );
            v300 = (*v299)--;
          if ( v300 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v301);
        v297 += 2;
      while ( v297 != v298 );
      v297 = v391;
    if ( v297 )
      operator delete(v297);
    v303 = v397;
    v302 = v396;
    if ( v396 != v397 )
        v306 = (int *)(*v302 - 12);
        if ( v306 != &dword_28898C0 )
          v304 = (unsigned int *)(*v302 - 4);
              v305 = __ldrex(v304);
            while ( __strex(v305 - 1, v304) );
            v305 = (*v304)--;
          if ( v305 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v306);
        v302 += 2;
      while ( v302 != v303 );
      v302 = v396;
    if ( v302 )
      operator delete(v302);
    v307 = v404;
    v202 = v403;
    if ( v403 != v404 )
        v310 = (int *)(*v202 - 12);
        if ( v310 != &dword_28898C0 )
          v308 = (unsigned int *)(*v202 - 4);
              v309 = __ldrex(v308);
            while ( __strex(v309 - 1, v308) );
            v309 = (*v308)--;
          if ( v309 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v310);
      while ( v202 != v307 );
      v202 = v403;
  if ( v202 )
    operator delete(v202);
}


signed int __fastcall AnvilScreenController::_isStillValid(AnvilScreenController *this)
{
  AnvilScreenController *v1; // r4@1
  AnvilContainerManagerController *v2; // r5@2
  int v3; // r0@2
  signed int result; // r0@3

  v1 = this;
  if ( MinecraftScreenModel::isPlayerValid(*((MinecraftScreenModel **)this + 106)) != 1
    || (v2 = (AnvilContainerManagerController *)*((_DWORD *)v1 + 157),
        v3 = ClientInstanceScreenModel::getPickRange(*((ClientInstanceScreenModel **)v1 + 106)),
        AnvilContainerManagerController::isAnvilValid(v2, *(float *)&v3) != 1) )
  {
    result = 0;
  }
  else
    result = ContainerScreenController::_isStillValid(v1);
  return result;
}


void __fastcall AnvilScreenController::_registerBindings(AnvilScreenController *this)
{
  AnvilScreenController::_registerBindings(this);
}


void **__fastcall AnvilScreenController::_getButtonBDescription(AnvilScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r5@1
  MinecraftScreenController *v3; // r4@1
  void **result; // r0@3

  v2 = a2;
  v3 = this;
  if ( ContainerScreenController::_getInteractionModel(a2) || !ContainerScreenController::isInventoryPanelFocused(v2) )
    result = MinecraftScreenController::_getButtonBDescription(v3);
  else
    result = sub_119C884((void **)v3, "controller.buttonTip.backToAnvil");
  return result;
}


void __fastcall AnvilScreenController::_registerEventHandlers(AnvilScreenController *this)
{
  AnvilScreenController::_registerEventHandlers(this);
}
