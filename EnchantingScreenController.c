

int __fastcall EnchantingScreenController::_getPlayerLevelColor(EnchantingScreenController *this, int a2)
{
  EnchantingScreenController *v2; // r4@1
  int v3; // r1@2
  int v4; // r2@2
  int v5; // r3@2
  int result; // r0@2

  v2 = this;
  if ( EnchantingContainerManagerController::getPlayerLevels(*(EnchantingContainerManagerController **)(a2 + 628)) <= 0 )
  {
    v3 = unk_27DB2C4;
    v4 = unk_27DB2C8;
    v5 = unk_27DB2CC;
    result = dword_27DB2D0;
  }
  else
    v3 = unk_27DB2B4;
    v4 = unk_27DB2B8;
    v5 = unk_27DB2BC;
    result = dword_27DB2C0;
  *(_DWORD *)v2 = v3;
  *((_DWORD *)v2 + 1) = v4;
  *((_DWORD *)v2 + 2) = v5;
  *((_DWORD *)v2 + 3) = result;
  return result;
}


void __fastcall EnchantingScreenController::_getSelectedEnchantHint(EnchantingScreenController *this, int a2)
{
  int v2; // r2@1

  v2 = *(_DWORD *)(a2 + 636);
  if ( v2 == -1 )
    sub_119C884((void **)this, (const char *)&unk_257BC67);
  else
    EnchantingContainerManagerController::getEnchantHint(this, *(_DWORD *)(a2 + 628), v2);
}


void __fastcall EnchantingScreenController::~EnchantingScreenController(EnchantingScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26E1C1C;
  v2 = *((_DWORD *)this + 158);
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
  ContainerScreenController::~ContainerScreenController(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


signed int __fastcall EnchantingScreenController::_onOptionButtonSelected(EnchantingScreenController *this, UIPropertyBag *a2)
{
  Json::Value *v2; // r5@1
  EnchantingScreenController *v3; // r4@1
  int v4; // r5@2
  Json::Value *v5; // r5@4
  signed int result; // r0@11

  v2 = (UIPropertyBag *)((char *)a2 + 8);
  v3 = this;
  if ( Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8)) )
  {
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
    {
      v4 = Json::Value::asInt(v5, 0);
      if ( v4 == -1 )
        v4 = -1;
      else
        ContainerScreenController::_clearSelectedSlot(v3);
    }
    else
      v4 = -1;
  else
  result = 1;
  *((_DWORD *)v3 + 159) = v4;
  return result;
}


signed int __fastcall EnchantingScreenController::_hasOptionSelected(EnchantingScreenController *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 159);
  result = 0;
  if ( v1 != -1 )
    result = 1;
  return result;
}


void **__fastcall EnchantingScreenController::_getButtonXDescription(EnchantingScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r5@1
  ContainerScreenController *v3; // r4@1
  void **result; // r0@2

  v2 = a2;
  v3 = this;
  if ( ContainerScreenController::_getInteractionModel(a2) )
    result = ContainerScreenController::_getButtonXDescription(v3, v2);
  else
    result = sub_119C884((void **)v3, "controller.buttonTip.takeItem");
  return result;
}


void **__fastcall EnchantingScreenController::_getButtonBDescription(EnchantingScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r5@1
  MinecraftScreenController *v3; // r4@1
  void **result; // r0@2

  v2 = a2;
  v3 = this;
  if ( ContainerScreenController::_getInteractionModel(a2) )
  {
    result = MinecraftScreenController::_getButtonBDescription(v3);
  }
  else if ( ContainerScreenController::isSlotsPanelFocused(v2) == 1 )
    result = sub_119C884((void **)v3, "controller.buttonTip.exit");
  else
    result = sub_119C884((void **)v3, "controller.buttonTip.backToEnchanting");
  return result;
}


void __fastcall EnchantingScreenController::_registerAutoPlaceOrder(EnchantingScreenController *this)
{
  EnchantingScreenController *v1; // r8@1
  int v2; // r9@2
  int v3; // r0@2
  int v4; // r5@3
  int v5; // r7@3
  bool v6; // zf@4
  int v7; // r4@7
  int v8; // r9@10
  int v9; // r0@10
  int v10; // r5@11
  int v11; // r7@11
  bool v12; // zf@12
  int v13; // r4@15
  bool v14; // zf@18
  _DWORD *v15; // r0@22
  char **v16; // r0@23
  char *v17; // r1@24
  char *v18; // r0@26
  int v19; // r9@27
  int v20; // r0@27
  int v21; // r5@28
  int v22; // r7@28
  bool v23; // zf@29
  int v24; // r4@32
  bool v25; // zf@35
  _DWORD *v26; // r0@39
  char **v27; // r0@40
  char *v28; // r1@41
  char *v29; // r0@43
  int v30; // r9@44
  int v31; // r0@44
  int v32; // r5@45
  int v33; // r7@45
  bool v34; // zf@46
  int v35; // r4@49
  bool v36; // zf@52
  _DWORD *v37; // r0@56
  char **v38; // r0@57
  char *v39; // r1@58
  char *v40; // r0@60
  int v41; // r9@61
  int v42; // r0@61
  int v43; // r5@62
  int v44; // r7@62
  bool v45; // zf@63
  int v46; // r4@66
  bool v47; // zf@69
  _DWORD *v48; // r0@73
  unsigned __int64 *v49; // r8@74
  int v50; // r0@74
  int v51; // r9@74
  int v52; // r0@74
  int v53; // r5@75
  int v54; // r7@75
  bool v55; // zf@76
  int v56; // r4@79
  bool v57; // zf@82
  _DWORD *v58; // r0@86
  char **v59; // r0@87
  char *v60; // r1@88
  char *v61; // r0@90
  int v62; // r9@91
  int v63; // r0@91
  int v64; // r5@92
  int v65; // r7@92
  bool v66; // zf@93
  int v67; // r4@96
  bool v68; // zf@99
  _DWORD *v69; // r0@103
  char **v70; // r0@104
  char *v71; // r1@105
  char *v72; // r0@107
  int v73; // r9@108
  int v74; // r0@108
  int v75; // r5@109
  int v76; // r7@109
  bool v77; // zf@110
  int v78; // r4@113
  bool v79; // zf@116
  _DWORD *v80; // r0@120
  char **v81; // r0@121
  char *v82; // r1@122
  char *v83; // r0@124
  int v84; // r9@125
  int v85; // r0@125
  int v86; // r5@126
  int v87; // r7@126
  bool v88; // zf@127
  int v89; // r4@130
  bool v90; // zf@133
  _DWORD *v91; // r0@137
  int v92; // r0@138
  int v93; // r9@138
  int v94; // r0@138
  int v95; // r5@139
  int v96; // r7@139
  bool v97; // zf@140
  int v98; // r4@143
  bool v99; // zf@146
  _DWORD *v100; // r0@150
  char **v101; // r0@151
  char *v102; // r1@152
  char *v103; // r0@154
  int v104; // r9@155
  int v105; // r0@155
  int v106; // r5@156
  int v107; // r7@156
  bool v108; // zf@157
  int v109; // r4@160
  bool v110; // zf@163
  _DWORD *v111; // r0@167
  char **v112; // r0@168
  char *v113; // r1@169
  char *v114; // r0@171
  int v115; // r9@172
  int v116; // r0@172
  int v117; // r5@173
  int v118; // r7@173
  bool v119; // zf@174
  int v120; // r4@177
  bool v121; // zf@180
  _DWORD *v122; // r0@184
  int v123; // r0@185
  int v124; // r9@185
  int v125; // r0@185
  int v126; // r5@186
  int v127; // r7@186
  bool v128; // zf@187
  int v129; // r4@190
  bool v130; // zf@193
  _DWORD *v131; // r0@197
  char **v132; // r0@198
  char *v133; // r1@199
  char *v134; // r0@201
  int v135; // r9@202
  int v136; // r0@202
  int v137; // r5@203
  int v138; // r7@203
  bool v139; // zf@204
  int v140; // r4@207
  bool v141; // zf@210
  _DWORD *v142; // r0@214
  char **v143; // r0@215
  char *v144; // r1@216
  char *v145; // r0@218
  int v146; // r9@219
  int v147; // r0@219
  int v148; // r5@220
  int v149; // r7@220
  bool v150; // zf@221
  int v151; // r4@224
  bool v152; // zf@227
  _DWORD *v153; // r0@231
  int v154; // r0@232
  char **v155; // r4@232
  char **v156; // r6@232
  unsigned int *v157; // r2@234
  signed int v158; // r1@236
  int *v159; // r0@242
  char **v160; // r4@247
  char **v161; // r6@247
  unsigned int *v162; // r2@249
  signed int v163; // r1@251
  int *v164; // r0@257
  char **v165; // r4@262
  char **v166; // r6@262
  unsigned int *v167; // r2@264
  signed int v168; // r1@266
  int *v169; // r0@272
  char **v170; // r4@277
  char **v171; // r6@277
  unsigned int *v172; // r2@279
  signed int v173; // r1@281
  int *v174; // r0@287
  bool v175; // zf@290
  _DWORD *v176; // r0@294
  char **v177; // r0@295
  char *v178; // r1@296
  char *v179; // r0@298
  int v180; // r9@299
  int v181; // r0@299
  int v182; // r5@300
  int v183; // r7@300
  bool v184; // zf@301
  int v185; // r4@304
  bool v186; // zf@307
  _DWORD *v187; // r0@311
  char **v188; // r0@312
  char *v189; // r1@313
  char *v190; // r0@315
  int v191; // r9@316
  int v192; // r0@316
  int v193; // r5@317
  int v194; // r7@317
  bool v195; // zf@318
  int v196; // r4@321
  bool v197; // zf@324
  _DWORD *v198; // r0@328
  unsigned __int64 *v199; // r8@329
  int v200; // r0@329
  int v201; // r9@329
  int v202; // r0@329
  int v203; // r5@330
  int v204; // r7@330
  bool v205; // zf@331
  int v206; // r4@334
  bool v207; // zf@337
  _DWORD *v208; // r0@341
  char **v209; // r0@342
  char *v210; // r1@343
  char *v211; // r0@345
  int v212; // r9@346
  int v213; // r0@346
  int v214; // r5@347
  int v215; // r7@347
  bool v216; // zf@348
  int v217; // r4@351
  bool v218; // zf@354
  _DWORD *v219; // r0@358
  int v220; // r0@359
  int v221; // r9@359
  int v222; // r0@359
  int v223; // r5@360
  int v224; // r7@360
  bool v225; // zf@361
  int v226; // r4@364
  bool v227; // zf@367
  _DWORD *v228; // r0@371
  char **v229; // r0@372
  char *v230; // r1@373
  char *v231; // r0@375
  int v232; // r9@376
  int v233; // r0@376
  int v234; // r5@377
  int v235; // r7@377
  bool v236; // zf@378
  int v237; // r4@381
  bool v238; // zf@384
  _DWORD *v239; // r0@388
  int v240; // r0@389
  char **v241; // r4@389
  char **v242; // r6@389
  unsigned int *v243; // r2@391
  signed int v244; // r1@393
  int *v245; // r0@399
  char **v246; // r4@404
  char **v247; // r6@404
  unsigned int *v248; // r2@406
  signed int v249; // r1@408
  int *v250; // r0@414
  char **v251; // r6@419
  unsigned int *v252; // r2@421
  signed int v253; // r1@423
  int *v254; // r0@429
  unsigned int *v255; // r2@435
  signed int v256; // r1@437
  unsigned int *v257; // r2@439
  signed int v258; // r1@441
  unsigned int *v259; // r2@443
  signed int v260; // r1@445
  unsigned int *v261; // r2@447
  signed int v262; // r1@449
  unsigned int *v263; // r2@451
  signed int v264; // r1@453
  unsigned int *v265; // r2@455
  signed int v266; // r1@457
  unsigned int *v267; // r2@459
  signed int v268; // r1@461
  unsigned int *v269; // r2@463
  signed int v270; // r1@465
  unsigned int *v271; // r2@467
  signed int v272; // r1@469
  unsigned int *v273; // r2@471
  signed int v274; // r1@473
  unsigned int *v275; // r2@475
  signed int v276; // r1@477
  unsigned int *v277; // r2@479
  signed int v278; // r1@481
  unsigned int *v279; // r2@483
  signed int v280; // r1@485
  unsigned int *v281; // r2@487
  signed int v282; // r1@489
  char *v283; // [sp+0h] [bp-E8h]@215
  char v284; // [sp+4h] [bp-E4h]@216
  char *v285; // [sp+8h] [bp-E0h]@198
  char v286; // [sp+Ch] [bp-DCh]@199
  char **v287; // [sp+10h] [bp-D8h]@185
  char **v288; // [sp+14h] [bp-D4h]@185
  char **v289; // [sp+18h] [bp-D0h]@185
  char *v290; // [sp+1Ch] [bp-CCh]@168
  char v291; // [sp+20h] [bp-C8h]@169
  char *v292; // [sp+24h] [bp-C4h]@151
  char v293; // [sp+28h] [bp-C0h]@152
  char **v294; // [sp+2Ch] [bp-BCh]@138
  char **v295; // [sp+30h] [bp-B8h]@138
  char **v296; // [sp+34h] [bp-B4h]@138
  char *v297; // [sp+38h] [bp-B0h]@121
  char v298; // [sp+3Ch] [bp-ACh]@122
  char *v299; // [sp+40h] [bp-A8h]@104
  char v300; // [sp+44h] [bp-A4h]@105
  char *v301; // [sp+48h] [bp-A0h]@87
  char v302; // [sp+4Ch] [bp-9Ch]@88
  char **v303; // [sp+50h] [bp-98h]@74
  char **v304; // [sp+54h] [bp-94h]@74
  char **v305; // [sp+58h] [bp-90h]@74
  char *v306; // [sp+5Ch] [bp-8Ch]@57
  char v307; // [sp+60h] [bp-88h]@58
  char *v308; // [sp+64h] [bp-84h]@40
  char v309; // [sp+68h] [bp-80h]@41
  char *v310; // [sp+6Ch] [bp-7Ch]@23
  char v311; // [sp+70h] [bp-78h]@24
  char **v312; // [sp+74h] [bp-74h]@2
  char **v313; // [sp+78h] [bp-70h]@2
  char **v314; // [sp+7Ch] [bp-6Ch]@2
  char *v315; // [sp+80h] [bp-68h]@372
  char v316; // [sp+84h] [bp-64h]@373
  char **v317; // [sp+88h] [bp-60h]@359
  char **v318; // [sp+8Ch] [bp-5Ch]@359
  char **v319; // [sp+90h] [bp-58h]@359
  char *v320; // [sp+94h] [bp-54h]@342
  char v321; // [sp+98h] [bp-50h]@343
  char **v322; // [sp+9Ch] [bp-4Ch]@329
  char **v323; // [sp+A0h] [bp-48h]@329
  char **v324; // [sp+A4h] [bp-44h]@329
  char *v325; // [sp+A8h] [bp-40h]@312
  char v326; // [sp+ACh] [bp-3Ch]@313
  char *v327; // [sp+B0h] [bp-38h]@295
  char v328; // [sp+B4h] [bp-34h]@296
  char **v329; // [sp+B8h] [bp-30h]@10
  char **v330; // [sp+BCh] [bp-2Ch]@10
  char **v331; // [sp+C0h] [bp-28h]@10

  v1 = this;
  if ( ContainerScreenController::_getInteractionModel(this) )
  {
    v312 = 0;
    v313 = 0;
    v314 = 0;
    v2 = 0x13u % dword_27DB2D8;
    v3 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x13u % dword_27DB2D8));
    if ( !v3 )
      goto LABEL_22;
    v4 = *(_DWORD *)v3;
    v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    while ( 1 )
    {
      v6 = v5 == 19;
      if ( v5 == 19 )
        v6 = *(_DWORD *)(v4 + 4) == 19;
      if ( v6 )
        break;
      v7 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 )
      {
        v5 = *(_DWORD *)(v7 + 12);
        v3 = v4;
        v4 = *(_DWORD *)v4;
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DB2D8 == v2 )
          continue;
      }
    }
    v14 = v3 == 0;
    if ( v3 )
      v3 = *(_DWORD *)v3;
      v14 = v3 == 0;
    if ( v14 )
LABEL_22:
      v15 = operator new(0x10u);
      *v15 = 0;
      v15[1] = 19;
      v15[2] = &unk_28898CC;
      v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DB2D4,
             v2,
             0x13u,
             (int)v15);
    AutoPlaceItem::AutoPlaceItem((int *)&v310, (int *)(v3 + 8), 1);
    v16 = v313;
    if ( v313 == v314 )
      std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::_M_emplace_back_aux<AutoPlaceItem>(
        (unsigned __int64 *)&v312,
        (int)&v310);
      v17 = v310;
    else
      *v313 = v310;
      v17 = (char *)&unk_28898CC;
      v310 = (char *)&unk_28898CC;
      *((_BYTE *)v16 + 4) = v311;
      v313 = v16 + 2;
    v18 = v17 - 12;
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v255 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v256 = __ldrex(v255);
        while ( __strex(v256 - 1, v255) );
      else
        v256 = (*v255)--;
      if ( v256 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v18);
    v19 = 0x12u % dword_27DB2D8;
    v20 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x12u % dword_27DB2D8));
    if ( !v20 )
      goto LABEL_39;
    v21 = *(_DWORD *)v20;
    v22 = *(_DWORD *)(*(_DWORD *)v20 + 12);
      v23 = v22 == 18;
      if ( v22 == 18 )
        v23 = *(_DWORD *)(v21 + 4) == 18;
      if ( v23 )
      v24 = *(_DWORD *)v21;
      if ( *(_DWORD *)v21 )
        v22 = *(_DWORD *)(v24 + 12);
        v20 = v21;
        v21 = *(_DWORD *)v21;
        if ( *(_DWORD *)(v24 + 12) % (unsigned int)dword_27DB2D8 == v19 )
    v25 = v20 == 0;
    if ( v20 )
      v20 = *(_DWORD *)v20;
      v25 = v20 == 0;
    if ( v25 )
LABEL_39:
      v26 = operator new(0x10u);
      *v26 = 0;
      v26[1] = 18;
      v26[2] = &unk_28898CC;
      v20 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DB2D4,
              v19,
              0x12u,
              (int)v26);
    AutoPlaceItem::AutoPlaceItem((int *)&v308, (int *)(v20 + 8), 1);
    v27 = v313;
        (int)&v308);
      v28 = v308;
      *v313 = v308;
      v28 = (char *)&unk_28898CC;
      v308 = (char *)&unk_28898CC;
      *((_BYTE *)v27 + 4) = v309;
      v313 = v27 + 2;
    v29 = v28 - 12;
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v257 = (unsigned int *)(v28 - 4);
          v258 = __ldrex(v257);
        while ( __strex(v258 - 1, v257) );
        v258 = (*v257)--;
      if ( v258 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v29);
    v30 = 0x1Au % dword_27DB2D8;
    v31 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x1Au % dword_27DB2D8));
    if ( !v31 )
      goto LABEL_56;
    v32 = *(_DWORD *)v31;
    v33 = *(_DWORD *)(*(_DWORD *)v31 + 12);
      v34 = v33 == 26;
      if ( v33 == 26 )
        v34 = *(_DWORD *)(v32 + 4) == 26;
      if ( v34 )
      v35 = *(_DWORD *)v32;
      if ( *(_DWORD *)v32 )
        v33 = *(_DWORD *)(v35 + 12);
        v31 = v32;
        v32 = *(_DWORD *)v32;
        if ( *(_DWORD *)(v35 + 12) % (unsigned int)dword_27DB2D8 == v30 )
    v36 = v31 == 0;
    if ( v31 )
      v31 = *(_DWORD *)v31;
      v36 = v31 == 0;
    if ( v36 )
LABEL_56:
      v37 = operator new(0x10u);
      *v37 = 0;
      v37[1] = 26;
      v37[2] = &unk_28898CC;
      v31 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v30,
              0x1Au,
              (int)v37);
    AutoPlaceItem::AutoPlaceItem((int *)&v306, (int *)(v31 + 8), 0);
    v38 = v313;
        (int)&v306);
      v39 = v306;
      *v313 = v306;
      v39 = (char *)&unk_28898CC;
      v306 = (char *)&unk_28898CC;
      *((_BYTE *)v38 + 4) = v307;
      v313 = v38 + 2;
    v40 = v39 - 12;
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v259 = (unsigned int *)(v39 - 4);
          v260 = __ldrex(v259);
        while ( __strex(v260 - 1, v259) );
        v260 = (*v259)--;
      if ( v260 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v40);
    v41 = 0x18u % dword_27DB2D8;
    v42 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x18u % dword_27DB2D8));
    if ( !v42 )
      goto LABEL_73;
    v43 = *(_DWORD *)v42;
    v44 = *(_DWORD *)(*(_DWORD *)v42 + 12);
      v45 = v44 == 24;
      if ( v44 == 24 )
        v45 = *(_DWORD *)(v43 + 4) == 24;
      if ( v45 )
      v46 = *(_DWORD *)v43;
      if ( *(_DWORD *)v43 )
        v44 = *(_DWORD *)(v46 + 12);
        v42 = v43;
        v43 = *(_DWORD *)v43;
        if ( *(_DWORD *)(v46 + 12) % (unsigned int)dword_27DB2D8 == v41 )
    v47 = v42 == 0;
    if ( v42 )
      v42 = *(_DWORD *)v42;
      v47 = v42 == 0;
    if ( v47 )
LABEL_73:
      v48 = operator new(0x10u);
      *v48 = 0;
      v48[1] = 24;
      v48[2] = &unk_28898CC;
      v42 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v41,
              0x18u,
              (int)v48);
    v49 = (unsigned __int64 *)((char *)v1 + 600);
    v50 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v49,
            (int **)(v42 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v50, (unsigned __int64 *)&v312);
    v303 = 0;
    v304 = 0;
    v305 = 0;
    v51 = 0x13u % dword_27DB2D8;
    v52 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x13u % dword_27DB2D8));
    if ( !v52 )
      goto LABEL_86;
    v53 = *(_DWORD *)v52;
    v54 = *(_DWORD *)(*(_DWORD *)v52 + 12);
      v55 = v54 == 19;
      if ( v54 == 19 )
        v55 = *(_DWORD *)(v53 + 4) == 19;
      if ( v55 )
      v56 = *(_DWORD *)v53;
      if ( *(_DWORD *)v53 )
        v54 = *(_DWORD *)(v56 + 12);
        v52 = v53;
        v53 = *(_DWORD *)v53;
        if ( *(_DWORD *)(v56 + 12) % (unsigned int)dword_27DB2D8 == v51 )
    v57 = v52 == 0;
    if ( v52 )
      v52 = *(_DWORD *)v52;
      v57 = v52 == 0;
    if ( v57 )
LABEL_86:
      v58 = operator new(0x10u);
      *v58 = 0;
      v58[1] = 19;
      v58[2] = &unk_28898CC;
      v52 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v51,
              0x13u,
              (int)v58);
    AutoPlaceItem::AutoPlaceItem((int *)&v301, (int *)(v52 + 8), 1);
    v59 = v304;
    if ( v304 == v305 )
        (unsigned __int64 *)&v303,
        (int)&v301);
      v60 = v301;
      *v304 = v301;
      v60 = (char *)&unk_28898CC;
      v301 = (char *)&unk_28898CC;
      *((_BYTE *)v59 + 4) = v302;
      v304 = v59 + 2;
    v61 = v60 - 12;
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v261 = (unsigned int *)(v60 - 4);
          v262 = __ldrex(v261);
        while ( __strex(v262 - 1, v261) );
        v262 = (*v261)--;
      if ( v262 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v61);
    v62 = 0x12u % dword_27DB2D8;
    v63 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x12u % dword_27DB2D8));
    if ( !v63 )
      goto LABEL_103;
    v64 = *(_DWORD *)v63;
    v65 = *(_DWORD *)(*(_DWORD *)v63 + 12);
      v66 = v65 == 18;
      if ( v65 == 18 )
        v66 = *(_DWORD *)(v64 + 4) == 18;
      if ( v66 )
      v67 = *(_DWORD *)v64;
      if ( *(_DWORD *)v64 )
        v65 = *(_DWORD *)(v67 + 12);
        v63 = v64;
        v64 = *(_DWORD *)v64;
        if ( *(_DWORD *)(v67 + 12) % (unsigned int)dword_27DB2D8 == v62 )
    v68 = v63 == 0;
    if ( v63 )
      v63 = *(_DWORD *)v63;
      v68 = v63 == 0;
    if ( v68 )
LABEL_103:
      v69 = operator new(0x10u);
      *v69 = 0;
      v69[1] = 18;
      v69[2] = &unk_28898CC;
      v63 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v62,
              (int)v69);
    AutoPlaceItem::AutoPlaceItem((int *)&v299, (int *)(v63 + 8), 1);
    v70 = v304;
        (int)&v299);
      v71 = v299;
      *v304 = v299;
      v71 = (char *)&unk_28898CC;
      v299 = (char *)&unk_28898CC;
      *((_BYTE *)v70 + 4) = v300;
      v304 = v70 + 2;
    v72 = v71 - 12;
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v263 = (unsigned int *)(v71 - 4);
          v264 = __ldrex(v263);
        while ( __strex(v264 - 1, v263) );
        v264 = (*v263)--;
      if ( v264 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v72);
    v73 = 0x18u % dword_27DB2D8;
    v74 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x18u % dword_27DB2D8));
    if ( !v74 )
      goto LABEL_120;
    v75 = *(_DWORD *)v74;
    v76 = *(_DWORD *)(*(_DWORD *)v74 + 12);
      v77 = v76 == 24;
      if ( v76 == 24 )
        v77 = *(_DWORD *)(v75 + 4) == 24;
      if ( v77 )
      v78 = *(_DWORD *)v75;
      if ( *(_DWORD *)v75 )
        v76 = *(_DWORD *)(v78 + 12);
        v74 = v75;
        v75 = *(_DWORD *)v75;
        if ( *(_DWORD *)(v78 + 12) % (unsigned int)dword_27DB2D8 == v73 )
    v79 = v74 == 0;
    if ( v74 )
      v74 = *(_DWORD *)v74;
      v79 = v74 == 0;
    if ( v79 )
LABEL_120:
      v80 = operator new(0x10u);
      *v80 = 0;
      v80[1] = 24;
      v80[2] = &unk_28898CC;
      v74 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v73,
              (int)v80);
    AutoPlaceItem::AutoPlaceItem((int *)&v297, (int *)(v74 + 8), 0);
    v81 = v304;
        (int)&v297);
      v82 = v297;
      *v304 = v297;
      v82 = (char *)&unk_28898CC;
      v297 = (char *)&unk_28898CC;
      *((_BYTE *)v81 + 4) = v298;
      v304 = v81 + 2;
    v83 = v82 - 12;
    if ( (int *)(v82 - 12) != &dword_28898C0 )
      v265 = (unsigned int *)(v82 - 4);
          v266 = __ldrex(v265);
        while ( __strex(v266 - 1, v265) );
        v266 = (*v265)--;
      if ( v266 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v83);
    v84 = 0x1Au % dword_27DB2D8;
    v85 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x1Au % dword_27DB2D8));
    if ( !v85 )
      goto LABEL_137;
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
        if ( *(_DWORD *)(v89 + 12) % (unsigned int)dword_27DB2D8 == v84 )
    v90 = v85 == 0;
    if ( v85 )
      v85 = *(_DWORD *)v85;
      v90 = v85 == 0;
    if ( v90 )
LABEL_137:
      v91 = operator new(0x10u);
      *v91 = 0;
      v91[1] = 26;
      v91[2] = &unk_28898CC;
      v85 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v84,
              (int)v91);
    v92 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)(v85 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v92, (unsigned __int64 *)&v303);
    v294 = 0;
    v295 = 0;
    v296 = 0;
    v93 = 0x18u % dword_27DB2D8;
    v94 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x18u % dword_27DB2D8));
    if ( !v94 )
      goto LABEL_150;
    v95 = *(_DWORD *)v94;
    v96 = *(_DWORD *)(*(_DWORD *)v94 + 12);
      v97 = v96 == 24;
      if ( v96 == 24 )
        v97 = *(_DWORD *)(v95 + 4) == 24;
      if ( v97 )
      v98 = *(_DWORD *)v95;
      if ( *(_DWORD *)v95 )
        v96 = *(_DWORD *)(v98 + 12);
        v94 = v95;
        v95 = *(_DWORD *)v95;
        if ( *(_DWORD *)(v98 + 12) % (unsigned int)dword_27DB2D8 == v93 )
    v99 = v94 == 0;
    if ( v94 )
      v94 = *(_DWORD *)v94;
      v99 = v94 == 0;
    if ( v99 )
LABEL_150:
      v100 = operator new(0x10u);
      *v100 = 0;
      v100[1] = 24;
      v100[2] = &unk_28898CC;
      v94 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v93,
              (int)v100);
    AutoPlaceItem::AutoPlaceItem((int *)&v292, (int *)(v94 + 8), 0);
    v101 = v295;
    if ( v295 == v296 )
        (unsigned __int64 *)&v294,
        (int)&v292);
      v102 = v292;
      *v295 = v292;
      v102 = (char *)&unk_28898CC;
      v292 = (char *)&unk_28898CC;
      *((_BYTE *)v101 + 4) = v293;
      v295 = v101 + 2;
    v103 = v102 - 12;
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v267 = (unsigned int *)(v102 - 4);
          v268 = __ldrex(v267);
        while ( __strex(v268 - 1, v267) );
        v268 = (*v267)--;
      if ( v268 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v103);
    v104 = 0x1Au % dword_27DB2D8;
    v105 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x1Au % dword_27DB2D8));
    if ( !v105 )
      goto LABEL_167;
    v106 = *(_DWORD *)v105;
    v107 = *(_DWORD *)(*(_DWORD *)v105 + 12);
      v108 = v107 == 26;
      if ( v107 == 26 )
        v108 = *(_DWORD *)(v106 + 4) == 26;
      if ( v108 )
      v109 = *(_DWORD *)v106;
      if ( *(_DWORD *)v106 )
        v107 = *(_DWORD *)(v109 + 12);
        v105 = v106;
        v106 = *(_DWORD *)v106;
        if ( *(_DWORD *)(v109 + 12) % (unsigned int)dword_27DB2D8 == v104 )
    v110 = v105 == 0;
    if ( v105 )
      v105 = *(_DWORD *)v105;
      v110 = v105 == 0;
    if ( v110 )
LABEL_167:
      v111 = operator new(0x10u);
      *v111 = 0;
      v111[1] = 26;
      v111[2] = &unk_28898CC;
      v105 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               (int)&dword_27DB2D4,
               v104,
               0x1Au,
               (int)v111);
    AutoPlaceItem::AutoPlaceItem((int *)&v290, (int *)(v105 + 8), 0);
    v112 = v295;
        (int)&v290);
      v113 = v290;
      *v295 = v290;
      v113 = (char *)&unk_28898CC;
      v290 = (char *)&unk_28898CC;
      *((_BYTE *)v112 + 4) = v291;
      v295 = v112 + 2;
    v114 = v113 - 12;
    if ( (int *)(v113 - 12) != &dword_28898C0 )
      v269 = (unsigned int *)(v113 - 4);
          v270 = __ldrex(v269);
        while ( __strex(v270 - 1, v269) );
        v270 = (*v269)--;
      if ( v270 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v114);
    v115 = 0x12u % dword_27DB2D8;
    v116 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x12u % dword_27DB2D8));
    if ( !v116 )
      goto LABEL_184;
    v117 = *(_DWORD *)v116;
    v118 = *(_DWORD *)(*(_DWORD *)v116 + 12);
      v119 = v118 == 18;
      if ( v118 == 18 )
        v119 = *(_DWORD *)(v117 + 4) == 18;
      if ( v119 )
      v120 = *(_DWORD *)v117;
      if ( *(_DWORD *)v117 )
        v118 = *(_DWORD *)(v120 + 12);
        v116 = v117;
        v117 = *(_DWORD *)v117;
        if ( *(_DWORD *)(v120 + 12) % (unsigned int)dword_27DB2D8 == v115 )
    v121 = v116 == 0;
    if ( v116 )
      v116 = *(_DWORD *)v116;
      v121 = v116 == 0;
    if ( v121 )
LABEL_184:
      v122 = operator new(0x10u);
      *v122 = 0;
      v122[1] = 18;
      v122[2] = &unk_28898CC;
      v116 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v115,
               0x12u,
               (int)v122);
    v123 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v49,
             (int **)(v116 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v123, (unsigned __int64 *)&v294);
    v287 = 0;
    v288 = 0;
    v289 = 0;
    v124 = 0x18u % dword_27DB2D8;
    v125 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x18u % dword_27DB2D8));
    if ( !v125 )
      goto LABEL_197;
    v126 = *(_DWORD *)v125;
    v127 = *(_DWORD *)(*(_DWORD *)v125 + 12);
      v128 = v127 == 24;
      if ( v127 == 24 )
        v128 = *(_DWORD *)(v126 + 4) == 24;
      if ( v128 )
      v129 = *(_DWORD *)v126;
      if ( *(_DWORD *)v126 )
        v127 = *(_DWORD *)(v129 + 12);
        v125 = v126;
        v126 = *(_DWORD *)v126;
        if ( *(_DWORD *)(v129 + 12) % (unsigned int)dword_27DB2D8 == v124 )
    v130 = v125 == 0;
    if ( v125 )
      v125 = *(_DWORD *)v125;
      v130 = v125 == 0;
    if ( v130 )
LABEL_197:
      v131 = operator new(0x10u);
      *v131 = 0;
      v131[1] = 24;
      v131[2] = &unk_28898CC;
      v125 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v124,
               0x18u,
               (int)v131);
    AutoPlaceItem::AutoPlaceItem((int *)&v285, (int *)(v125 + 8), 0);
    v132 = v288;
    if ( v288 == v289 )
        (unsigned __int64 *)&v287,
        (int)&v285);
      v133 = v285;
      *v288 = v285;
      v133 = (char *)&unk_28898CC;
      v285 = (char *)&unk_28898CC;
      *((_BYTE *)v132 + 4) = v286;
      v288 = v132 + 2;
    v134 = v133 - 12;
    if ( (int *)(v133 - 12) != &dword_28898C0 )
      v271 = (unsigned int *)(v133 - 4);
          v272 = __ldrex(v271);
        while ( __strex(v272 - 1, v271) );
        v272 = (*v271)--;
      if ( v272 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v134);
    v135 = 0x1Au % dword_27DB2D8;
    v136 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x1Au % dword_27DB2D8));
    if ( !v136 )
      goto LABEL_214;
    v137 = *(_DWORD *)v136;
    v138 = *(_DWORD *)(*(_DWORD *)v136 + 12);
      v139 = v138 == 26;
      if ( v138 == 26 )
        v139 = *(_DWORD *)(v137 + 4) == 26;
      if ( v139 )
      v140 = *(_DWORD *)v137;
      if ( *(_DWORD *)v137 )
        v138 = *(_DWORD *)(v140 + 12);
        v136 = v137;
        v137 = *(_DWORD *)v137;
        if ( *(_DWORD *)(v140 + 12) % (unsigned int)dword_27DB2D8 == v135 )
    v141 = v136 == 0;
    if ( v136 )
      v136 = *(_DWORD *)v136;
      v141 = v136 == 0;
    if ( v141 )
LABEL_214:
      v142 = operator new(0x10u);
      *v142 = 0;
      v142[1] = 26;
      v142[2] = &unk_28898CC;
      v136 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v135,
               (int)v142);
    AutoPlaceItem::AutoPlaceItem((int *)&v283, (int *)(v136 + 8), 0);
    v143 = v288;
        (int)&v283);
      v144 = v283;
      *v288 = v283;
      v144 = (char *)&unk_28898CC;
      v283 = (char *)&unk_28898CC;
      *((_BYTE *)v143 + 4) = v284;
      v288 = v143 + 2;
    v145 = v144 - 12;
    if ( (int *)(v144 - 12) != &dword_28898C0 )
      v273 = (unsigned int *)(v144 - 4);
          v274 = __ldrex(v273);
        while ( __strex(v274 - 1, v273) );
        v274 = (*v273)--;
      if ( v274 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v145);
    v146 = 0x13u % dword_27DB2D8;
    v147 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x13u % dword_27DB2D8));
    if ( !v147 )
      goto LABEL_231;
    v148 = *(_DWORD *)v147;
    v149 = *(_DWORD *)(*(_DWORD *)v147 + 12);
      v150 = v149 == 19;
      if ( v149 == 19 )
        v150 = *(_DWORD *)(v148 + 4) == 19;
      if ( v150 )
      v151 = *(_DWORD *)v148;
      if ( *(_DWORD *)v148 )
        v149 = *(_DWORD *)(v151 + 12);
        v147 = v148;
        v148 = *(_DWORD *)v148;
        if ( *(_DWORD *)(v151 + 12) % (unsigned int)dword_27DB2D8 == v146 )
    v152 = v147 == 0;
    if ( v147 )
      v147 = *(_DWORD *)v147;
      v152 = v147 == 0;
    if ( v152 )
LABEL_231:
      v153 = operator new(0x10u);
      *v153 = 0;
      v153[1] = 19;
      v153[2] = &unk_28898CC;
      v147 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v146,
               0x13u,
               (int)v153);
    v154 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v147 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v154, (unsigned __int64 *)&v287);
    v156 = v288;
    v155 = v287;
    if ( v287 != v288 )
      do
        v159 = (int *)(*v155 - 12);
        if ( v159 != &dword_28898C0 )
        {
          v157 = (unsigned int *)(*v155 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v158 = __ldrex(v157);
            while ( __strex(v158 - 1, v157) );
          }
          else
            v158 = (*v157)--;
          if ( v158 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v159);
        }
        v155 += 2;
      while ( v155 != v156 );
      v155 = v287;
    if ( v155 )
      operator delete(v155);
    v161 = v295;
    v160 = v294;
    if ( v294 != v295 )
        v164 = (int *)(*v160 - 12);
        if ( v164 != &dword_28898C0 )
          v162 = (unsigned int *)(*v160 - 4);
              v163 = __ldrex(v162);
            while ( __strex(v163 - 1, v162) );
            v163 = (*v162)--;
          if ( v163 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v164);
        v160 += 2;
      while ( v160 != v161 );
      v160 = v294;
    if ( v160 )
      operator delete(v160);
    v166 = v304;
    v165 = v303;
    if ( v303 != v304 )
        v169 = (int *)(*v165 - 12);
        if ( v169 != &dword_28898C0 )
          v167 = (unsigned int *)(*v165 - 4);
              v168 = __ldrex(v167);
            while ( __strex(v168 - 1, v167) );
            v168 = (*v167)--;
          if ( v168 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v169);
        v165 += 2;
      while ( v165 != v166 );
      v165 = v303;
    if ( v165 )
      operator delete(v165);
    v171 = v313;
    v170 = v312;
    if ( v312 != v313 )
        v174 = (int *)(*v170 - 12);
        if ( v174 != &dword_28898C0 )
          v172 = (unsigned int *)(*v170 - 4);
              v173 = __ldrex(v172);
            while ( __strex(v173 - 1, v172) );
            v173 = (*v172)--;
          if ( v173 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v174);
        v170 += 2;
      while ( v170 != v171 );
      v170 = v312;
  }
  else
    v329 = 0;
    v330 = 0;
    v331 = 0;
    v8 = 0x13u % dword_27DB2D8;
    v9 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x13u % dword_27DB2D8));
    if ( !v9 )
      goto LABEL_294;
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
      v12 = v11 == 19;
      if ( v11 == 19 )
        v12 = *(_DWORD *)(v10 + 4) == 19;
      if ( v12 )
      v13 = *(_DWORD *)v10;
      if ( *(_DWORD *)v10 )
        v11 = *(_DWORD *)(v13 + 12);
        v9 = v10;
        v10 = *(_DWORD *)v10;
        if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27DB2D8 == v8 )
    v175 = v9 == 0;
    if ( v9 )
      v9 = *(_DWORD *)v9;
      v175 = v9 == 0;
    if ( v175 )
LABEL_294:
      v176 = operator new(0x10u);
      *v176 = 0;
      v176[1] = 19;
      v176[2] = &unk_28898CC;
      v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v8,
             (int)v176);
    AutoPlaceItem::AutoPlaceItem((int *)&v327, (int *)(v9 + 8), 1);
    v177 = v330;
    if ( v330 == v331 )
        (unsigned __int64 *)&v329,
        (int)&v327);
      v178 = v327;
      *v330 = v327;
      v178 = (char *)&unk_28898CC;
      v327 = (char *)&unk_28898CC;
      *((_BYTE *)v177 + 4) = v328;
      v330 = v177 + 2;
    v179 = v178 - 12;
    if ( (int *)(v178 - 12) != &dword_28898C0 )
      v275 = (unsigned int *)(v178 - 4);
          v276 = __ldrex(v275);
        while ( __strex(v276 - 1, v275) );
        v276 = (*v275)--;
      if ( v276 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v179);
    v180 = 0x12u % dword_27DB2D8;
    v181 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x12u % dword_27DB2D8));
    if ( !v181 )
      goto LABEL_311;
    v182 = *(_DWORD *)v181;
    v183 = *(_DWORD *)(*(_DWORD *)v181 + 12);
      v184 = v183 == 18;
      if ( v183 == 18 )
        v184 = *(_DWORD *)(v182 + 4) == 18;
      if ( v184 )
      v185 = *(_DWORD *)v182;
      if ( *(_DWORD *)v182 )
        v183 = *(_DWORD *)(v185 + 12);
        v181 = v182;
        v182 = *(_DWORD *)v182;
        if ( *(_DWORD *)(v185 + 12) % (unsigned int)dword_27DB2D8 == v180 )
    v186 = v181 == 0;
    if ( v181 )
      v181 = *(_DWORD *)v181;
      v186 = v181 == 0;
    if ( v186 )
LABEL_311:
      v187 = operator new(0x10u);
      *v187 = 0;
      v187[1] = 18;
      v187[2] = &unk_28898CC;
      v181 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v180,
               (int)v187);
    AutoPlaceItem::AutoPlaceItem((int *)&v325, (int *)(v181 + 8), 1);
    v188 = v330;
        (int)&v325);
      v189 = v325;
      *v330 = v325;
      v189 = (char *)&unk_28898CC;
      v325 = (char *)&unk_28898CC;
      *((_BYTE *)v188 + 4) = v326;
      v330 = v188 + 2;
    v190 = v189 - 12;
    if ( (int *)(v189 - 12) != &dword_28898C0 )
      v277 = (unsigned int *)(v189 - 4);
          v278 = __ldrex(v277);
        while ( __strex(v278 - 1, v277) );
        v278 = (*v277)--;
      if ( v278 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v190);
    v191 = 9u % dword_27DB2D8;
    v192 = *(_DWORD *)(dword_27DB2D4 + 4 * (9u % dword_27DB2D8));
    if ( !v192 )
      goto LABEL_328;
    v193 = *(_DWORD *)v192;
    v194 = *(_DWORD *)(*(_DWORD *)v192 + 12);
      v195 = v194 == 9;
      if ( v194 == 9 )
        v195 = *(_DWORD *)(v193 + 4) == 9;
      if ( v195 )
      v196 = *(_DWORD *)v193;
      if ( *(_DWORD *)v193 )
        v194 = *(_DWORD *)(v196 + 12);
        v192 = v193;
        v193 = *(_DWORD *)v193;
        if ( *(_DWORD *)(v196 + 12) % (unsigned int)dword_27DB2D8 == v191 )
    v197 = v192 == 0;
    if ( v192 )
      v192 = *(_DWORD *)v192;
      v197 = v192 == 0;
    if ( v197 )
LABEL_328:
      v198 = operator new(0x10u);
      *v198 = 0;
      v198[1] = 9;
      v198[2] = &unk_28898CC;
      v192 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v191,
               9u,
               (int)v198);
    v199 = (unsigned __int64 *)((char *)v1 + 600);
    v200 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v199,
             (int **)(v192 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v200, (unsigned __int64 *)&v329);
    v322 = 0;
    v323 = 0;
    v324 = 0;
    v201 = 9u % dword_27DB2D8;
    v202 = *(_DWORD *)(dword_27DB2D4 + 4 * (9u % dword_27DB2D8));
    if ( !v202 )
      goto LABEL_341;
    v203 = *(_DWORD *)v202;
    v204 = *(_DWORD *)(*(_DWORD *)v202 + 12);
      v205 = v204 == 9;
      if ( v204 == 9 )
        v205 = *(_DWORD *)(v203 + 4) == 9;
      if ( v205 )
      v206 = *(_DWORD *)v203;
      if ( *(_DWORD *)v203 )
        v204 = *(_DWORD *)(v206 + 12);
        v202 = v203;
        v203 = *(_DWORD *)v203;
        if ( *(_DWORD *)(v206 + 12) % (unsigned int)dword_27DB2D8 == v201 )
    v207 = v202 == 0;
    if ( v202 )
      v202 = *(_DWORD *)v202;
      v207 = v202 == 0;
    if ( v207 )
LABEL_341:
      v208 = operator new(0x10u);
      *v208 = 0;
      v208[1] = 9;
      v208[2] = &unk_28898CC;
      v202 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v201,
               (int)v208);
    AutoPlaceItem::AutoPlaceItem((int *)&v320, (int *)(v202 + 8), 0);
    v209 = v323;
    if ( v323 == v324 )
        (unsigned __int64 *)&v322,
        (int)&v320);
      v210 = v320;
      *v323 = v320;
      v210 = (char *)&unk_28898CC;
      v320 = (char *)&unk_28898CC;
      *((_BYTE *)v209 + 4) = v321;
      v323 = v209 + 2;
    v211 = v210 - 12;
    if ( (int *)(v210 - 12) != &dword_28898C0 )
      v279 = (unsigned int *)(v210 - 4);
          v280 = __ldrex(v279);
        while ( __strex(v280 - 1, v279) );
        v280 = (*v279)--;
      if ( v280 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v211);
    v212 = 0x12u % dword_27DB2D8;
    v213 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x12u % dword_27DB2D8));
    if ( !v213 )
      goto LABEL_358;
    v214 = *(_DWORD *)v213;
    v215 = *(_DWORD *)(*(_DWORD *)v213 + 12);
      v216 = v215 == 18;
      if ( v215 == 18 )
        v216 = *(_DWORD *)(v214 + 4) == 18;
      if ( v216 )
      v217 = *(_DWORD *)v214;
      if ( *(_DWORD *)v214 )
        v215 = *(_DWORD *)(v217 + 12);
        v213 = v214;
        v214 = *(_DWORD *)v214;
        if ( *(_DWORD *)(v217 + 12) % (unsigned int)dword_27DB2D8 == v212 )
    v218 = v213 == 0;
    if ( v213 )
      v213 = *(_DWORD *)v213;
      v218 = v213 == 0;
    if ( v218 )
LABEL_358:
      v219 = operator new(0x10u);
      *v219 = 0;
      v219[1] = 18;
      v219[2] = &unk_28898CC;
      v213 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v212,
               (int)v219);
    v220 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v213 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v220, (unsigned __int64 *)&v322);
    v317 = 0;
    v318 = 0;
    v319 = 0;
    v221 = 9u % dword_27DB2D8;
    v222 = *(_DWORD *)(dword_27DB2D4 + 4 * (9u % dword_27DB2D8));
    if ( !v222 )
      goto LABEL_371;
    v223 = *(_DWORD *)v222;
    v224 = *(_DWORD *)(*(_DWORD *)v222 + 12);
      v225 = v224 == 9;
      if ( v224 == 9 )
        v225 = *(_DWORD *)(v223 + 4) == 9;
      if ( v225 )
      v226 = *(_DWORD *)v223;
      if ( *(_DWORD *)v223 )
        v224 = *(_DWORD *)(v226 + 12);
        v222 = v223;
        v223 = *(_DWORD *)v223;
        if ( *(_DWORD *)(v226 + 12) % (unsigned int)dword_27DB2D8 == v221 )
    v227 = v222 == 0;
    if ( v222 )
      v222 = *(_DWORD *)v222;
      v227 = v222 == 0;
    if ( v227 )
LABEL_371:
      v228 = operator new(0x10u);
      *v228 = 0;
      v228[1] = 9;
      v228[2] = &unk_28898CC;
      v222 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v221,
               (int)v228);
    AutoPlaceItem::AutoPlaceItem((int *)&v315, (int *)(v222 + 8), 0);
    v229 = v318;
    if ( v318 == v319 )
        (unsigned __int64 *)&v317,
        (int)&v315);
      v230 = v315;
      *v318 = v315;
      v230 = (char *)&unk_28898CC;
      v315 = (char *)&unk_28898CC;
      *((_BYTE *)v229 + 4) = v316;
      v318 = v229 + 2;
    v231 = v230 - 12;
    if ( (int *)(v230 - 12) != &dword_28898C0 )
      v281 = (unsigned int *)(v230 - 4);
          v282 = __ldrex(v281);
        while ( __strex(v282 - 1, v281) );
        v282 = (*v281)--;
      if ( v282 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v231);
    v232 = 0x13u % dword_27DB2D8;
    v233 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x13u % dword_27DB2D8));
    if ( !v233 )
      goto LABEL_388;
    v234 = *(_DWORD *)v233;
    v235 = *(_DWORD *)(*(_DWORD *)v233 + 12);
      v236 = v235 == 19;
      if ( v235 == 19 )
        v236 = *(_DWORD *)(v234 + 4) == 19;
      if ( v236 )
      v237 = *(_DWORD *)v234;
      if ( *(_DWORD *)v234 )
        v235 = *(_DWORD *)(v237 + 12);
        v233 = v234;
        v234 = *(_DWORD *)v234;
        if ( *(_DWORD *)(v237 + 12) % (unsigned int)dword_27DB2D8 == v232 )
    v238 = v233 == 0;
    if ( v233 )
      v233 = *(_DWORD *)v233;
      v238 = v233 == 0;
    if ( v238 )
LABEL_388:
      v239 = operator new(0x10u);
      *v239 = 0;
      v239[1] = 19;
      v239[2] = &unk_28898CC;
      v233 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v232,
               (int)v239);
    v240 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v233 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v240, (unsigned __int64 *)&v317);
    v242 = v318;
    v241 = v317;
    if ( v317 != v318 )
        v245 = (int *)(*v241 - 12);
        if ( v245 != &dword_28898C0 )
          v243 = (unsigned int *)(*v241 - 4);
              v244 = __ldrex(v243);
            while ( __strex(v244 - 1, v243) );
            v244 = (*v243)--;
          if ( v244 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v245);
        v241 += 2;
      while ( v241 != v242 );
      v241 = v317;
    if ( v241 )
      operator delete(v241);
    v247 = v323;
    v246 = v322;
    if ( v322 != v323 )
        v250 = (int *)(*v246 - 12);
        if ( v250 != &dword_28898C0 )
          v248 = (unsigned int *)(*v246 - 4);
              v249 = __ldrex(v248);
            while ( __strex(v249 - 1, v248) );
            v249 = (*v248)--;
          if ( v249 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v250);
        v246 += 2;
      while ( v246 != v247 );
      v246 = v322;
    if ( v246 )
      operator delete(v246);
    v251 = v330;
    v170 = v329;
    if ( v329 != v330 )
        v254 = (int *)(*v170 - 12);
        if ( v254 != &dword_28898C0 )
          v252 = (unsigned int *)(*v170 - 4);
              v253 = __ldrex(v252);
            while ( __strex(v253 - 1, v252) );
            v253 = (*v252)--;
          if ( v253 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v254);
      while ( v170 != v251 );
      v170 = v329;
  if ( v170 )
    operator delete(v170);
}


EnchantingScreenController *__fastcall EnchantingScreenController::EnchantingScreenController(EnchantingScreenController *a1, int a2, int a3, int a4)
{
  EnchantingScreenController *v4; // r4@1
  int v5; // r5@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  int v9; // r6@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r0@10
  unsigned int *v12; // r7@14
  unsigned int v13; // r0@16
  __int64 v14; // r0@21
  int v15; // r6@21
  unsigned int *v16; // r1@22
  unsigned int v17; // r0@24
  unsigned int *v18; // r7@28
  unsigned int v19; // r0@30
  int v20; // r6@35
  unsigned int *v21; // r1@36
  unsigned int v22; // r0@38
  unsigned int *v23; // r7@42
  unsigned int v24; // r0@44
  char v26; // [sp+4h] [bp-24h]@21
  int v27; // [sp+8h] [bp-20h]@21
  int v28; // [sp+Ch] [bp-1Ch]@1
  int v29; // [sp+10h] [bp-18h]@1

  v4 = a1;
  v28 = *(_DWORD *)a2;
  v5 = a3;
  v6 = *(_DWORD *)(a2 + 4);
  v29 = v6;
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
  ContainerScreenController::ContainerScreenController((int)v4, (int)&v28, a4);
  v9 = v29;
  if ( v29 )
    v10 = (unsigned int *)(v29 + 4);
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
  *(_DWORD *)v4 = &off_26E1C1C;
  *((_DWORD *)v4 + 157) = 0;
  *((_DWORD *)v4 + 158) = 0;
  *((_DWORD *)v4 + 159) = -1;
  ContainerScreenController::createContainerManagerController<EnchantingContainerManagerModel,EnchantingContainerManagerController,BlockPos const&>(
    (int)&v26,
    (int)v4,
    v5);
  v14 = *(_QWORD *)&v26;
  *(_DWORD *)&v26 = 0;
  v27 = 0;
  *((_DWORD *)v4 + 157) = v14;
  v15 = *((_DWORD *)v4 + 158);
  *((_DWORD *)v4 + 158) = HIDWORD(v14);
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
  v20 = v27;
  if ( v27 )
    v21 = (unsigned int *)(v27 + 4);
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
  (*(void (__fastcall **)(EnchantingScreenController *, int))(*(_DWORD *)v4 + 56))(v4, v5);
  EnchantingScreenController::_registerEventHandlers(v4);
  EnchantingScreenController::_registerBindings(v4);
  (*(void (__fastcall **)(EnchantingScreenController *))(*(_DWORD *)v4 + 152))(v4);
  (*(void (__fastcall **)(EnchantingScreenController *))(*(_DWORD *)v4 + 156))(v4);
  return v4;
}


int __fastcall EnchantingScreenController::_getInputItemId(EnchantingScreenController *this)
{
  return j_j_j__ZN36EnchantingContainerManagerController14getInputItemIdEv(*((EnchantingContainerManagerController **)this
                                                                           + 157));
}


void __fastcall EnchantingScreenController::_registerEventHandlers(EnchantingScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  int v6; // r5@4
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  int v10; // r5@7
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7
  void *v13; // r0@9
  int v14; // r5@10
  _DWORD *v15; // r0@10
  __int64 v16; // r1@10
  void *v17; // r0@12
  unsigned int *v18; // r2@14
  signed int v19; // r1@16
  unsigned int *v20; // r2@18
  signed int v21; // r1@20
  unsigned int *v22; // r2@22
  signed int v23; // r1@24
  unsigned int *v24; // r2@26
  signed int v25; // r1@28
  _DWORD *v26; // [sp+4h] [bp-74h]@10
  __int64 v27; // [sp+Ch] [bp-6Ch]@10
  int v28; // [sp+18h] [bp-60h]@10
  _DWORD *v29; // [sp+1Ch] [bp-5Ch]@7
  __int64 v30; // [sp+24h] [bp-54h]@7
  int v31; // [sp+30h] [bp-48h]@7
  _DWORD *v32; // [sp+34h] [bp-44h]@4
  __int64 v33; // [sp+3Ch] [bp-3Ch]@4
  int v34; // [sp+48h] [bp-30h]@4
  _DWORD *v35; // [sp+4Ch] [bp-2Ch]@1
  __int64 v36; // [sp+54h] [bp-24h]@1
  int v37; // [sp+60h] [bp-18h]@1

  v1 = this;
  sub_119C884((void **)&v37, "button.menu_ok");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v37);
  v3 = operator new(4u);
  LODWORD(v4) = sub_11950EC;
  *v3 = v1;
  HIDWORD(v4) = sub_1195088;
  v35 = v3;
  v36 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v35);
  if ( (_DWORD)v36 )
    ((void (*)(void))v36)();
  v5 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v37 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  sub_119C884((void **)&v34, "button.menu_select");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v34);
  v7 = operator new(4u);
  LODWORD(v8) = sub_1195130;
  *v7 = v1;
  HIDWORD(v8) = sub_1195122;
  v32 = v7;
  v33 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v32);
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  v9 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v34 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v31, "button.enchant");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v31);
  v11 = operator new(4u);
  LODWORD(v12) = sub_1195178;
  *v11 = v1;
  HIDWORD(v12) = sub_1195166;
  v29 = v11;
  v30 = v12;
  ScreenController::registerButtonClickHandler((int)v1, v10, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  v13 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v31 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v28, "button.button_hovered");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v28);
  v15 = operator new(4u);
  LODWORD(v16) = sub_11951CC;
  *v15 = v1;
  HIDWORD(v16) = sub_11951AE;
  v26 = v15;
  v27 = v16;
  ScreenController::registerButtonEventHandler((int)v1, v14, 1, 0, (int)&v26);
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  v17 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v28 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
}


signed int __fastcall EnchantingScreenController::_showSelectedButton(EnchantingScreenController *this, int a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *((_DWORD *)this + 159);
  result = 0;
  if ( v2 == a2 )
    result = 1;
  return result;
}


void __fastcall EnchantingScreenController::_registerAutoPlaceOrder(EnchantingScreenController *this)
{
  EnchantingScreenController::_registerAutoPlaceOrder(this);
}


void __fastcall EnchantingScreenController::_registerBindings(EnchantingScreenController *this)
{
  EnchantingScreenController::_registerBindings(this);
}


signed int __fastcall EnchantingScreenController::_enchantmentClicked(EnchantingScreenController *this, int a2)
{
  EnchantingScreenController *v2; // r4@1
  int v3; // r6@1
  signed int v4; // r5@1
  int v5; // r0@2
  void *v6; // r0@9
  unsigned int *v8; // r2@12
  signed int v9; // r1@14
  int v10; // [sp+8h] [bp-48h]@8
  char v11; // [sp+Fh] [bp-41h]@8
  char v12; // [sp+10h] [bp-40h]@2

  v2 = this;
  v3 = a2;
  v4 = EnchantingContainerManagerController::getStatusForOption(
         *((EnchantingContainerManagerController **)this + 157),
         a2);
  if ( v4 )
  {
    v5 = UIPropertyBag::UIPropertyBag((int)&v12);
    UIPropertyBag::set<char [15]>(v5, 4, "name", "popup_tip_text");
    if ( v4 == 1 )
    {
      UIPropertyBag::set<char [22]>((int)&v12, 14, "#enchant_error", "crafting.cannotCreate");
    }
    else if ( v4 == 2 )
      UIPropertyBag::set<char [27]>((int)&v12, 14, "#enchant_error", "crafting.insufficientLevel");
    else
      UIPropertyBag::set<char [24]>((int)&v12, 14, "#enchant_error", "crafting.badCombination");
    v11 = 1;
    UIPropertyBag::set<bool>((int)&v12, 9, "exclusive", &v11);
    sub_119C884((void **)&v10, "enchant_error_factory");
    if ( !*((_DWORD *)v2 + 3) )
      sub_119C8E4();
    (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v2 + 4))((char *)v2 + 4, &v10, &v12);
    v6 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v10 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v6);
    UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v12);
  }
  else
    EnchantingContainerManagerController::enchantResult(*((EnchantingContainerManagerController **)v2 + 157), v3);
  return 1;
}


signed int __fastcall EnchantingScreenController::_isOptionSelectable(EnchantingScreenController *this, int a2)
{
  signed int v2; // r0@1
  signed int v3; // r1@1

  v2 = EnchantingContainerManagerController::getStatusForOption(
         *((EnchantingContainerManagerController **)this + 157),
         a2);
  v3 = 0;
  if ( !v2 )
    v3 = 1;
  return v3;
}


int __fastcall EnchantingScreenController::_isOptionUnselectable(EnchantingScreenController *this, int a2)
{
  signed int v2; // r0@1
  char v3; // r1@1

  v2 = EnchantingContainerManagerController::getStatusForOption(
         *((EnchantingContainerManagerController **)this + 157),
         a2);
  v3 = 0;
  if ( v2 != 3 )
    v3 = 1;
  return (v2 != 0) & (unsigned __int8)v3;
}


void __fastcall EnchantingScreenController::_registerCoalesceOrder(EnchantingScreenController *this)
{
  EnchantingScreenController *v1; // r8@1
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
  int v29; // r9@48
  int v30; // r0@48
  int v31; // r5@49
  int v32; // r7@49
  bool v33; // zf@50
  int v34; // r4@53
  bool v35; // zf@56
  _DWORD *v36; // r0@60
  int *v37; // r1@61
  int v38; // r9@64
  int v39; // r0@64
  int v40; // r5@65
  int v41; // r7@65
  bool v42; // zf@66
  int v43; // r4@69
  bool v44; // zf@72
  _DWORD *v45; // r0@76
  unsigned __int64 *v46; // r8@77
  int v47; // r0@77
  int v48; // r9@77
  int v49; // r0@77
  int v50; // r5@78
  int v51; // r7@78
  bool v52; // zf@79
  int v53; // r4@82
  bool v54; // zf@85
  int *v55; // r1@88
  _DWORD *v56; // r0@89
  int v57; // r9@92
  int v58; // r0@92
  int v59; // r5@93
  int v60; // r7@93
  bool v61; // zf@94
  int v62; // r4@97
  bool v63; // zf@100
  _DWORD *v64; // r0@104
  int *v65; // r1@105
  int v66; // r9@108
  int v67; // r0@108
  int v68; // r5@109
  int v69; // r7@109
  bool v70; // zf@110
  int v71; // r4@113
  bool v72; // zf@116
  _DWORD *v73; // r0@120
  int *v74; // r1@121
  int v75; // r9@124
  int v76; // r0@124
  int v77; // r5@125
  int v78; // r7@125
  bool v79; // zf@126
  int v80; // r4@129
  bool v81; // zf@132
  _DWORD *v82; // r0@136
  int *v83; // r1@137
  int v84; // r9@140
  int v85; // r0@140
  int v86; // r5@141
  int v87; // r7@141
  bool v88; // zf@142
  int v89; // r4@145
  bool v90; // zf@148
  _DWORD *v91; // r0@152
  int v92; // r0@153
  int v93; // r9@153
  int v94; // r0@153
  int v95; // r5@154
  int v96; // r7@154
  bool v97; // zf@155
  int v98; // r4@158
  bool v99; // zf@161
  int *v100; // r1@164
  _DWORD *v101; // r0@165
  int v102; // r9@168
  int v103; // r0@168
  int v104; // r5@169
  int v105; // r7@169
  bool v106; // zf@170
  int v107; // r4@173
  bool v108; // zf@176
  _DWORD *v109; // r0@180
  int *v110; // r1@181
  int v111; // r9@184
  int v112; // r0@184
  int v113; // r5@185
  int v114; // r7@185
  bool v115; // zf@186
  int v116; // r4@189
  bool v117; // zf@192
  _DWORD *v118; // r0@196
  int *v119; // r1@197
  int v120; // r9@200
  int v121; // r0@200
  int v122; // r5@201
  int v123; // r7@201
  bool v124; // zf@202
  int v125; // r4@205
  bool v126; // zf@208
  _DWORD *v127; // r0@212
  int *v128; // r1@213
  int v129; // r9@216
  int v130; // r0@216
  int v131; // r5@217
  int v132; // r7@217
  bool v133; // zf@218
  int v134; // r4@221
  bool v135; // zf@224
  _DWORD *v136; // r0@228
  int v137; // r0@229
  int v138; // r9@229
  int v139; // r0@229
  int v140; // r5@230
  int v141; // r7@230
  bool v142; // zf@231
  int v143; // r4@234
  bool v144; // zf@237
  int *v145; // r1@240
  _DWORD *v146; // r0@241
  int v147; // r9@244
  int v148; // r0@244
  int v149; // r5@245
  int v150; // r7@245
  bool v151; // zf@246
  int v152; // r4@249
  bool v153; // zf@252
  _DWORD *v154; // r0@256
  int *v155; // r1@257
  int v156; // r9@260
  int v157; // r0@260
  int v158; // r5@261
  int v159; // r7@261
  bool v160; // zf@262
  int v161; // r4@265
  bool v162; // zf@268
  _DWORD *v163; // r0@272
  int *v164; // r1@273
  int v165; // r9@276
  int v166; // r0@276
  int v167; // r5@277
  int v168; // r7@277
  bool v169; // zf@278
  int v170; // r4@281
  bool v171; // zf@284
  _DWORD *v172; // r0@288
  int *v173; // r1@289
  int v174; // r9@292
  int v175; // r0@292
  int v176; // r5@293
  int v177; // r7@293
  bool v178; // zf@294
  int v179; // r4@297
  bool v180; // zf@300
  _DWORD *v181; // r0@304
  int v182; // r0@305
  int *v183; // r4@305
  int *v184; // r6@305
  unsigned int *v185; // r2@307
  signed int v186; // r1@309
  int *v187; // r0@315
  int *v188; // r4@320
  int *v189; // r6@320
  unsigned int *v190; // r2@322
  signed int v191; // r1@324
  int *v192; // r0@330
  int *v193; // r4@335
  int *v194; // r6@335
  unsigned int *v195; // r2@337
  signed int v196; // r1@339
  int *v197; // r0@345
  int *v198; // r4@350
  int *v199; // r6@350
  unsigned int *v200; // r2@352
  signed int v201; // r1@354
  int *v202; // r0@360
  int *v203; // [sp+4h] [bp-54h]@229
  int *v204; // [sp+8h] [bp-50h]@229
  int *v205; // [sp+Ch] [bp-4Ch]@229
  int *v206; // [sp+10h] [bp-48h]@153
  int *v207; // [sp+14h] [bp-44h]@153
  int *v208; // [sp+18h] [bp-40h]@153
  int *v209; // [sp+1Ch] [bp-3Ch]@77
  int *v210; // [sp+20h] [bp-38h]@77
  int *v211; // [sp+24h] [bp-34h]@77
  int *v212; // [sp+28h] [bp-30h]@1
  int *v213; // [sp+2Ch] [bp-2Ch]@1
  int *v214; // [sp+30h] [bp-28h]@1

  v1 = this;
  v212 = 0;
  v213 = 0;
  v214 = 0;
  v2 = 0x18u % dword_27DB2D8;
  v3 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x18u % dword_27DB2D8));
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
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DB2D8 == v2 )
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
        (unsigned __int64 *)&v212,
        v9);
      goto LABEL_16;
  }
LABEL_13:
  v10 = operator new(0x10u);
  *v10 = 0;
  v10[1] = 24;
  v10[2] = &unk_28898CC;
  v9 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                 (int)&dword_27DB2D4,
                 v2,
                 0x18u,
                 (int)v10)
             + 8);
  if ( v213 == v214 )
    goto LABEL_15;
  sub_119C854(v213, v9);
  ++v213;
LABEL_16:
  v11 = 0x1Au % dword_27DB2D8;
  v12 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x1Au % dword_27DB2D8));
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
      if ( *(_DWORD *)(v16 + 12) % (unsigned int)dword_27DB2D8 == v11 )
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
            (int)&dword_27DB2D4,
            v11,
            0x1Au,
            (int)v18);
  v19 = (int *)(v12 + 8);
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)&v212,
      v19);
  else
    sub_119C854(v213, v19);
    ++v213;
  v20 = 0x12u % dword_27DB2D8;
  v21 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x12u % dword_27DB2D8));
  if ( !v21 )
    goto LABEL_44;
  v22 = *(_DWORD *)v21;
  v23 = *(_DWORD *)(*(_DWORD *)v21 + 12);
    v24 = v23 == 18;
    if ( v23 == 18 )
      v24 = *(_DWORD *)(v22 + 4) == 18;
    if ( v24 )
    v25 = *(_DWORD *)v22;
    if ( *(_DWORD *)v22 )
      v23 = *(_DWORD *)(v25 + 12);
      v21 = v22;
      v22 = *(_DWORD *)v22;
      if ( *(_DWORD *)(v25 + 12) % (unsigned int)dword_27DB2D8 == v20 )
  v26 = v21 == 0;
  if ( v21 )
    v21 = *(_DWORD *)v21;
    v26 = v21 == 0;
  if ( v26 )
LABEL_44:
    v27 = operator new(0x10u);
    *v27 = 0;
    v27[1] = 18;
    v27[2] = &unk_28898CC;
    v21 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v20,
            0x12u,
            (int)v27);
  v28 = (int *)(v21 + 8);
      v28);
    sub_119C854(v213, v28);
  v29 = 0x13u % dword_27DB2D8;
  v30 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x13u % dword_27DB2D8));
  if ( !v30 )
    goto LABEL_60;
  v31 = *(_DWORD *)v30;
  v32 = *(_DWORD *)(*(_DWORD *)v30 + 12);
    v33 = v32 == 19;
    if ( v32 == 19 )
      v33 = *(_DWORD *)(v31 + 4) == 19;
    if ( v33 )
    v34 = *(_DWORD *)v31;
    if ( *(_DWORD *)v31 )
      v32 = *(_DWORD *)(v34 + 12);
      v30 = v31;
      v31 = *(_DWORD *)v31;
      if ( *(_DWORD *)(v34 + 12) % (unsigned int)dword_27DB2D8 == v29 )
  v35 = v30 == 0;
  if ( v30 )
    v30 = *(_DWORD *)v30;
    v35 = v30 == 0;
  if ( v35 )
LABEL_60:
    v36 = operator new(0x10u);
    *v36 = 0;
    v36[1] = 19;
    v36[2] = &unk_28898CC;
    v30 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v29,
            0x13u,
            (int)v36);
  v37 = (int *)(v30 + 8);
      v37);
    sub_119C854(v213, v37);
  v38 = 0x18u % dword_27DB2D8;
  v39 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x18u % dword_27DB2D8));
  if ( !v39 )
    goto LABEL_76;
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
      if ( *(_DWORD *)(v43 + 12) % (unsigned int)dword_27DB2D8 == v38 )
  v44 = v39 == 0;
  if ( v39 )
    v39 = *(_DWORD *)v39;
    v44 = v39 == 0;
  if ( v44 )
LABEL_76:
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
          v46,
          (int **)(v39 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v47, (unsigned __int64 *)&v212);
  v209 = 0;
  v210 = 0;
  v211 = 0;
  v48 = 0x1Au % dword_27DB2D8;
  v49 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x1Au % dword_27DB2D8));
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
        if ( *(_DWORD *)(v53 + 12) % (unsigned int)dword_27DB2D8 == v48 )
      goto LABEL_89;
    v54 = v49 == 0;
    if ( v49 )
      v49 = *(_DWORD *)v49;
      v54 = v49 == 0;
    if ( !v54 )
      v55 = (int *)(v49 + 8);
LABEL_91:
        (unsigned __int64 *)&v209,
        v55);
      goto LABEL_92;
LABEL_89:
  v56 = operator new(0x10u);
  *v56 = 0;
  v56[1] = 26;
  v56[2] = &unk_28898CC;
  v55 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27DB2D4,
                  v48,
                  0x1Au,
                  (int)v56)
              + 8);
  if ( v210 == v211 )
    goto LABEL_91;
  sub_119C854(v210, v55);
  ++v210;
LABEL_92:
  v57 = 0x18u % dword_27DB2D8;
  v58 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x18u % dword_27DB2D8));
  if ( !v58 )
    goto LABEL_104;
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
      if ( *(_DWORD *)(v62 + 12) % (unsigned int)dword_27DB2D8 == v57 )
  v63 = v58 == 0;
  if ( v58 )
    v58 = *(_DWORD *)v58;
    v63 = v58 == 0;
  if ( v63 )
LABEL_104:
    v64 = operator new(0x10u);
    *v64 = 0;
    v64[1] = 24;
    v64[2] = &unk_28898CC;
    v58 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v57,
            (int)v64);
  v65 = (int *)(v58 + 8);
      (unsigned __int64 *)&v209,
      v65);
    sub_119C854(v210, v65);
    ++v210;
  v66 = 0x12u % dword_27DB2D8;
  v67 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x12u % dword_27DB2D8));
  if ( !v67 )
    goto LABEL_120;
  v68 = *(_DWORD *)v67;
  v69 = *(_DWORD *)(*(_DWORD *)v67 + 12);
    v70 = v69 == 18;
    if ( v69 == 18 )
      v70 = *(_DWORD *)(v68 + 4) == 18;
    if ( v70 )
    v71 = *(_DWORD *)v68;
    if ( *(_DWORD *)v68 )
      v69 = *(_DWORD *)(v71 + 12);
      v67 = v68;
      v68 = *(_DWORD *)v68;
      if ( *(_DWORD *)(v71 + 12) % (unsigned int)dword_27DB2D8 == v66 )
  v72 = v67 == 0;
  if ( v67 )
    v67 = *(_DWORD *)v67;
    v72 = v67 == 0;
  if ( v72 )
LABEL_120:
    v73 = operator new(0x10u);
    *v73 = 0;
    v73[1] = 18;
    v73[2] = &unk_28898CC;
    v67 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v66,
            (int)v73);
  v74 = (int *)(v67 + 8);
      v74);
    sub_119C854(v210, v74);
  v75 = 0x13u % dword_27DB2D8;
  v76 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x13u % dword_27DB2D8));
  if ( !v76 )
    goto LABEL_136;
  v77 = *(_DWORD *)v76;
  v78 = *(_DWORD *)(*(_DWORD *)v76 + 12);
    v79 = v78 == 19;
    if ( v78 == 19 )
      v79 = *(_DWORD *)(v77 + 4) == 19;
    if ( v79 )
    v80 = *(_DWORD *)v77;
    if ( *(_DWORD *)v77 )
      v78 = *(_DWORD *)(v80 + 12);
      v76 = v77;
      v77 = *(_DWORD *)v77;
      if ( *(_DWORD *)(v80 + 12) % (unsigned int)dword_27DB2D8 == v75 )
  v81 = v76 == 0;
  if ( v76 )
    v76 = *(_DWORD *)v76;
    v81 = v76 == 0;
  if ( v81 )
LABEL_136:
    v82 = operator new(0x10u);
    *v82 = 0;
    v82[1] = 19;
    v82[2] = &unk_28898CC;
    v76 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v75,
            (int)v82);
  v83 = (int *)(v76 + 8);
      v83);
    sub_119C854(v210, v83);
  v84 = 0x1Au % dword_27DB2D8;
  v85 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x1Au % dword_27DB2D8));
  if ( !v85 )
    goto LABEL_152;
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
      if ( *(_DWORD *)(v89 + 12) % (unsigned int)dword_27DB2D8 == v84 )
  v90 = v85 == 0;
  if ( v85 )
    v85 = *(_DWORD *)v85;
    v90 = v85 == 0;
  if ( v90 )
LABEL_152:
    v91 = operator new(0x10u);
    *v91 = 0;
    v91[1] = 26;
    v91[2] = &unk_28898CC;
    v85 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v84,
            (int)v91);
  v92 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)(v85 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v92, (unsigned __int64 *)&v209);
  v206 = 0;
  v207 = 0;
  v208 = 0;
  v93 = 0x12u % dword_27DB2D8;
  v94 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x12u % dword_27DB2D8));
  if ( v94 )
    v95 = *(_DWORD *)v94;
    v96 = *(_DWORD *)(*(_DWORD *)v94 + 12);
      v97 = v96 == 18;
      if ( v96 == 18 )
        v97 = *(_DWORD *)(v95 + 4) == 18;
      if ( v97 )
      v98 = *(_DWORD *)v95;
      if ( *(_DWORD *)v95 )
        v96 = *(_DWORD *)(v98 + 12);
        v94 = v95;
        v95 = *(_DWORD *)v95;
        if ( *(_DWORD *)(v98 + 12) % (unsigned int)dword_27DB2D8 == v93 )
      goto LABEL_165;
    v99 = v94 == 0;
    if ( v94 )
      v94 = *(_DWORD *)v94;
      v99 = v94 == 0;
    if ( !v99 )
      v100 = (int *)(v94 + 8);
LABEL_167:
        (unsigned __int64 *)&v206,
        v100);
      goto LABEL_168;
LABEL_165:
  v101 = operator new(0x10u);
  *v101 = 0;
  v101[1] = 18;
  v101[2] = &unk_28898CC;
  v100 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   (int)&dword_27DB2D4,
                   v93,
                   0x12u,
                   (int)v101)
               + 8);
  if ( v207 == v208 )
    goto LABEL_167;
  sub_119C854(v207, v100);
  ++v207;
LABEL_168:
  v102 = 0x1Au % dword_27DB2D8;
  v103 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x1Au % dword_27DB2D8));
  if ( !v103 )
    goto LABEL_180;
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
      if ( *(_DWORD *)(v107 + 12) % (unsigned int)dword_27DB2D8 == v102 )
  v108 = v103 == 0;
  if ( v103 )
    v103 = *(_DWORD *)v103;
    v108 = v103 == 0;
  if ( v108 )
LABEL_180:
    v109 = operator new(0x10u);
    *v109 = 0;
    v109[1] = 26;
    v109[2] = &unk_28898CC;
    v103 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DB2D4,
             v102,
             0x1Au,
             (int)v109);
  v110 = (int *)(v103 + 8);
      (unsigned __int64 *)&v206,
      v110);
    sub_119C854(v207, v110);
    ++v207;
  v111 = 0x18u % dword_27DB2D8;
  v112 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x18u % dword_27DB2D8));
  if ( !v112 )
    goto LABEL_196;
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
      if ( *(_DWORD *)(v116 + 12) % (unsigned int)dword_27DB2D8 == v111 )
  v117 = v112 == 0;
  if ( v112 )
    v112 = *(_DWORD *)v112;
    v117 = v112 == 0;
  if ( v117 )
LABEL_196:
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
    sub_119C854(v207, v119);
  v120 = 0x13u % dword_27DB2D8;
  v121 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x13u % dword_27DB2D8));
  if ( !v121 )
    goto LABEL_212;
  v122 = *(_DWORD *)v121;
  v123 = *(_DWORD *)(*(_DWORD *)v121 + 12);
    v124 = v123 == 19;
    if ( v123 == 19 )
      v124 = *(_DWORD *)(v122 + 4) == 19;
    if ( v124 )
    v125 = *(_DWORD *)v122;
    if ( *(_DWORD *)v122 )
      v123 = *(_DWORD *)(v125 + 12);
      v121 = v122;
      v122 = *(_DWORD *)v122;
      if ( *(_DWORD *)(v125 + 12) % (unsigned int)dword_27DB2D8 == v120 )
  v126 = v121 == 0;
  if ( v121 )
    v121 = *(_DWORD *)v121;
    v126 = v121 == 0;
  if ( v126 )
LABEL_212:
    v127 = operator new(0x10u);
    *v127 = 0;
    v127[1] = 19;
    v127[2] = &unk_28898CC;
    v121 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v120,
             0x13u,
             (int)v127);
  v128 = (int *)(v121 + 8);
      v128);
    sub_119C854(v207, v128);
  v129 = 0x12u % dword_27DB2D8;
  v130 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x12u % dword_27DB2D8));
  if ( !v130 )
    goto LABEL_228;
  v131 = *(_DWORD *)v130;
  v132 = *(_DWORD *)(*(_DWORD *)v130 + 12);
    v133 = v132 == 18;
    if ( v132 == 18 )
      v133 = *(_DWORD *)(v131 + 4) == 18;
    if ( v133 )
    v134 = *(_DWORD *)v131;
    if ( *(_DWORD *)v131 )
      v132 = *(_DWORD *)(v134 + 12);
      v130 = v131;
      v131 = *(_DWORD *)v131;
      if ( *(_DWORD *)(v134 + 12) % (unsigned int)dword_27DB2D8 == v129 )
  v135 = v130 == 0;
  if ( v130 )
    v130 = *(_DWORD *)v130;
    v135 = v130 == 0;
  if ( v135 )
LABEL_228:
    v136 = operator new(0x10u);
    *v136 = 0;
    v136[1] = 18;
    v136[2] = &unk_28898CC;
    v130 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v129,
             0x12u,
             (int)v136);
  v137 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           v46,
           (int **)(v130 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v137, (unsigned __int64 *)&v206);
  v203 = 0;
  v204 = 0;
  v205 = 0;
  v138 = 0x13u % dword_27DB2D8;
  v139 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x13u % dword_27DB2D8));
  if ( v139 )
    v140 = *(_DWORD *)v139;
    v141 = *(_DWORD *)(*(_DWORD *)v139 + 12);
      v142 = v141 == 19;
      if ( v141 == 19 )
        v142 = *(_DWORD *)(v140 + 4) == 19;
      if ( v142 )
      v143 = *(_DWORD *)v140;
      if ( *(_DWORD *)v140 )
        v141 = *(_DWORD *)(v143 + 12);
        v139 = v140;
        v140 = *(_DWORD *)v140;
        if ( *(_DWORD *)(v143 + 12) % (unsigned int)dword_27DB2D8 == v138 )
      goto LABEL_241;
    v144 = v139 == 0;
    if ( v139 )
      v139 = *(_DWORD *)v139;
      v144 = v139 == 0;
    if ( !v144 )
      v145 = (int *)(v139 + 8);
LABEL_243:
        (unsigned __int64 *)&v203,
        v145);
      goto LABEL_244;
LABEL_241:
  v146 = operator new(0x10u);
  *v146 = 0;
  v146[1] = 19;
  v146[2] = &unk_28898CC;
  v145 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                   v138,
                   0x13u,
                   (int)v146)
  if ( v204 == v205 )
    goto LABEL_243;
  sub_119C854(v204, v145);
  ++v204;
LABEL_244:
  v147 = 0x1Au % dword_27DB2D8;
  v148 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x1Au % dword_27DB2D8));
  if ( !v148 )
    goto LABEL_256;
  v149 = *(_DWORD *)v148;
  v150 = *(_DWORD *)(*(_DWORD *)v148 + 12);
    v151 = v150 == 26;
    if ( v150 == 26 )
      v151 = *(_DWORD *)(v149 + 4) == 26;
    if ( v151 )
    v152 = *(_DWORD *)v149;
    if ( *(_DWORD *)v149 )
      v150 = *(_DWORD *)(v152 + 12);
      v148 = v149;
      v149 = *(_DWORD *)v149;
      if ( *(_DWORD *)(v152 + 12) % (unsigned int)dword_27DB2D8 == v147 )
  v153 = v148 == 0;
  if ( v148 )
    v148 = *(_DWORD *)v148;
    v153 = v148 == 0;
  if ( v153 )
LABEL_256:
    v154 = operator new(0x10u);
    *v154 = 0;
    v154[1] = 26;
    v154[2] = &unk_28898CC;
    v148 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v147,
             (int)v154);
  v155 = (int *)(v148 + 8);
      (unsigned __int64 *)&v203,
      v155);
    sub_119C854(v204, v155);
    ++v204;
  v156 = 0x18u % dword_27DB2D8;
  v157 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x18u % dword_27DB2D8));
  if ( !v157 )
    goto LABEL_272;
  v158 = *(_DWORD *)v157;
  v159 = *(_DWORD *)(*(_DWORD *)v157 + 12);
    v160 = v159 == 24;
    if ( v159 == 24 )
      v160 = *(_DWORD *)(v158 + 4) == 24;
    if ( v160 )
    v161 = *(_DWORD *)v158;
    if ( *(_DWORD *)v158 )
      v159 = *(_DWORD *)(v161 + 12);
      v157 = v158;
      v158 = *(_DWORD *)v158;
      if ( *(_DWORD *)(v161 + 12) % (unsigned int)dword_27DB2D8 == v156 )
  v162 = v157 == 0;
  if ( v157 )
    v157 = *(_DWORD *)v157;
    v162 = v157 == 0;
  if ( v162 )
LABEL_272:
    v163 = operator new(0x10u);
    *v163 = 0;
    v163[1] = 24;
    v163[2] = &unk_28898CC;
    v157 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v156,
             (int)v163);
  v164 = (int *)(v157 + 8);
      v164);
    sub_119C854(v204, v164);
  v165 = 0x12u % dword_27DB2D8;
  v166 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x12u % dword_27DB2D8));
  if ( !v166 )
    goto LABEL_288;
  v167 = *(_DWORD *)v166;
  v168 = *(_DWORD *)(*(_DWORD *)v166 + 12);
    v169 = v168 == 18;
    if ( v168 == 18 )
      v169 = *(_DWORD *)(v167 + 4) == 18;
    if ( v169 )
    v170 = *(_DWORD *)v167;
    if ( *(_DWORD *)v167 )
      v168 = *(_DWORD *)(v170 + 12);
      v166 = v167;
      v167 = *(_DWORD *)v167;
      if ( *(_DWORD *)(v170 + 12) % (unsigned int)dword_27DB2D8 == v165 )
  v171 = v166 == 0;
  if ( v166 )
    v166 = *(_DWORD *)v166;
    v171 = v166 == 0;
  if ( v171 )
LABEL_288:
    v172 = operator new(0x10u);
    *v172 = 0;
    v172[1] = 18;
    v172[2] = &unk_28898CC;
    v166 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v165,
             (int)v172);
  v173 = (int *)(v166 + 8);
      v173);
    sub_119C854(v204, v173);
  v174 = 0x13u % dword_27DB2D8;
  v175 = *(_DWORD *)(dword_27DB2D4 + 4 * (0x13u % dword_27DB2D8));
  if ( !v175 )
    goto LABEL_304;
  v176 = *(_DWORD *)v175;
  v177 = *(_DWORD *)(*(_DWORD *)v175 + 12);
    v178 = v177 == 19;
    if ( v177 == 19 )
      v178 = *(_DWORD *)(v176 + 4) == 19;
    if ( v178 )
    v179 = *(_DWORD *)v176;
    if ( *(_DWORD *)v176 )
      v177 = *(_DWORD *)(v179 + 12);
      v175 = v176;
      v176 = *(_DWORD *)v176;
      if ( *(_DWORD *)(v179 + 12) % (unsigned int)dword_27DB2D8 == v174 )
  v180 = v175 == 0;
  if ( v175 )
    v175 = *(_DWORD *)v175;
    v180 = v175 == 0;
  if ( v180 )
LABEL_304:
    v181 = operator new(0x10u);
    *v181 = 0;
    v181[1] = 19;
    v181[2] = &unk_28898CC;
    v175 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v174,
             (int)v181);
  v182 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int **)(v175 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v182, (unsigned __int64 *)&v203);
  v184 = v204;
  v183 = v203;
  if ( v203 != v204 )
    do
      v187 = (int *)(*v183 - 12);
      if ( v187 != &dword_28898C0 )
        v185 = (unsigned int *)(*v183 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v186 = __ldrex(v185);
          while ( __strex(v186 - 1, v185) );
        }
        else
          v186 = (*v185)--;
        if ( v186 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v187);
      ++v183;
    while ( v183 != v184 );
    v183 = v203;
  if ( v183 )
    operator delete(v183);
  v189 = v207;
  v188 = v206;
  if ( v206 != v207 )
      v192 = (int *)(*v188 - 12);
      if ( v192 != &dword_28898C0 )
        v190 = (unsigned int *)(*v188 - 4);
            v191 = __ldrex(v190);
          while ( __strex(v191 - 1, v190) );
          v191 = (*v190)--;
        if ( v191 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v192);
      ++v188;
    while ( v188 != v189 );
    v188 = v206;
  if ( v188 )
    operator delete(v188);
  v194 = v210;
  v193 = v209;
  if ( v209 != v210 )
      v197 = (int *)(*v193 - 12);
      if ( v197 != &dword_28898C0 )
        v195 = (unsigned int *)(*v193 - 4);
            v196 = __ldrex(v195);
          while ( __strex(v196 - 1, v195) );
          v196 = (*v195)--;
        if ( v196 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v197);
      ++v193;
    while ( v193 != v194 );
    v193 = v209;
  if ( v193 )
    operator delete(v193);
  v199 = v213;
  v198 = v212;
  if ( v212 != v213 )
      v202 = (int *)(*v198 - 12);
      if ( v202 != &dword_28898C0 )
        v200 = (unsigned int *)(*v198 - 4);
            v201 = __ldrex(v200);
          while ( __strex(v201 - 1, v200) );
          v201 = (*v200)--;
        if ( v201 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v202);
      ++v198;
    while ( v198 != v199 );
    v198 = v212;
  if ( v198 )
    operator delete(v198);
}


signed int __fastcall EnchantingScreenController::_isStillValid(EnchantingScreenController *this)
{
  EnchantingScreenController *v1; // r4@1
  EnchantingContainerManagerController *v2; // r5@2
  int v3; // r0@2
  signed int result; // r0@3

  v1 = this;
  if ( MinecraftScreenModel::isPlayerValid(*((MinecraftScreenModel **)this + 106)) != 1
    || (v2 = (EnchantingContainerManagerController *)*((_DWORD *)v1 + 157),
        v3 = ClientInstanceScreenModel::getPickRange(*((ClientInstanceScreenModel **)v1 + 106)),
        EnchantingContainerManagerController::isTableValid(v2, *(float *)&v3) != 1) )
  {
    result = 0;
  }
  else
    result = ContainerScreenController::_isStillValid(v1);
  return result;
}


void __fastcall EnchantingScreenController::_registerEventHandlers(EnchantingScreenController *this)
{
  EnchantingScreenController::_registerEventHandlers(this);
}


void __fastcall EnchantingScreenController::~EnchantingScreenController(EnchantingScreenController *this)
{
  EnchantingScreenController::~EnchantingScreenController(this);
}


void __fastcall EnchantingScreenController::_registerCoalesceOrder(EnchantingScreenController *this)
{
  EnchantingScreenController::_registerCoalesceOrder(this);
}


int __fastcall EnchantingScreenController::_onContainerSlotHovered(MinecraftScreenController *a1, const void **a2, int a3)
{
  int v3; // r4@1
  const void **v4; // r5@1
  MinecraftScreenController *v5; // r6@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( MinecraftScreenController::getInputMode(a1) == 3 )
    *((_DWORD *)v5 + 159) = -1;
  return j_j_j__ZN25ContainerScreenController23_onContainerSlotHoveredERKSsi(v5, v4, v3);
}


int *__fastcall EnchantingScreenController::onOpen(EnchantingScreenController *this)
{
  EnchantingScreenController *v1; // r4@1
  int v2; // r1@1
  __int64 v3; // r2@1

  v1 = this;
  MinecraftScreenModel::linkPlayerToScreen(*((MinecraftScreenModel **)this + 106));
  MinecraftScreenModel::linkScreenToPlayer(*((MinecraftScreenModel **)v1 + 106));
  return j_j_j__ZN16ScreenController6onOpenEv(v1, v2, v3);
}


int __fastcall EnchantingScreenController::_onContainerSlotSelected(int a1)
{
  *(_DWORD *)(a1 + 636) = -1;
  return j_j_j__ZN25ContainerScreenController24_onContainerSlotSelectedERKSsi();
}


void **__fastcall EnchantingScreenController::_getPlayerLevelInfo(EnchantingScreenController *this, int a2)
{
  void **v2; // r4@1
  int v3; // r0@1

  v2 = (void **)this;
  v3 = EnchantingContainerManagerController::getPlayerLevels(*(EnchantingContainerManagerController **)(a2 + 628));
  return Util::toString<int,(void *)0,(void *)0>(v2, v3);
}


void **__fastcall EnchantingScreenController::_getButtonADescription(EnchantingScreenController *this, ContainerScreenController *a2)
{
  ContainerScreenController *v2; // r5@1
  ContainerScreenController *v3; // r4@1
  void **result; // r0@2

  v2 = a2;
  v3 = this;
  if ( ContainerScreenController::_getInteractionModel(a2) )
  {
    result = ContainerScreenController::_getButtonADescription(v3, v2);
  }
  else if ( ContainerScreenController::isSlotsPanelFocused(v2) == 1 )
    if ( *((_DWORD *)v2 + 159) == -1 )
      result = sub_119C884((void **)v3, "controller.buttonTip.select.slot");
    else
      result = sub_119C884((void **)v3, "controller.buttonTip.select.enchant");
  else
    result = sub_119C884((void **)v3, "controller.buttonTip.select.item");
  return result;
}


int __fastcall EnchantingScreenController::_getOutputItemId(EnchantingScreenController *this)
{
  EnchantingScreenController *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( EnchantingContainerManagerController::getStatusForOption(
         *((EnchantingContainerManagerController **)this + 157),
         *((_DWORD *)this + 159)) )
  {
    result = 0;
  }
  else
    result = j_j_j__ZN36EnchantingContainerManagerController15getOutputItemIdEv(*((EnchantingContainerManagerController **)v1
                                                                                + 157));
  return result;
}


void __fastcall EnchantingScreenController::_registerBindings(EnchantingScreenController *this)
{
  EnchantingScreenController *v1; // r4@1
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
  _DWORD *v26; // r0@33
  __int64 v27; // r1@33
  __int64 v28; // r1@33
  _DWORD *v29; // r0@37
  __int64 v30; // r1@37
  __int64 v31; // r1@37
  _DWORD *v32; // r0@41
  __int64 v33; // r1@41
  __int64 v34; // r1@41
  _DWORD *v35; // r0@45
  __int64 v36; // r1@45
  __int64 v37; // r1@45
  _DWORD *v38; // r0@49
  __int64 v39; // r1@49
  __int64 v40; // r1@49
  _DWORD *v41; // r0@53
  __int64 v42; // r1@53
  __int64 v43; // r1@53
  _DWORD *v44; // r0@57
  __int64 v45; // r1@57
  __int64 v46; // r1@57
  _DWORD *v47; // r0@61
  __int64 v48; // r1@61
  __int64 v49; // r1@61
  void *v50; // [sp+8h] [bp-270h]@61
  __int64 v51; // [sp+10h] [bp-268h]@61
  _DWORD *v52; // [sp+18h] [bp-260h]@61
  __int64 v53; // [sp+20h] [bp-258h]@61
  int v54; // [sp+28h] [bp-250h]@61
  int v55; // [sp+2Ch] [bp-24Ch]@61
  void *v56; // [sp+30h] [bp-248h]@57
  __int64 v57; // [sp+38h] [bp-240h]@57
  _DWORD *v58; // [sp+40h] [bp-238h]@57
  __int64 v59; // [sp+48h] [bp-230h]@57
  int v60; // [sp+50h] [bp-228h]@57
  void *v61; // [sp+54h] [bp-224h]@53
  __int64 v62; // [sp+5Ch] [bp-21Ch]@53
  _DWORD *v63; // [sp+64h] [bp-214h]@53
  __int64 v64; // [sp+6Ch] [bp-20Ch]@53
  int v65; // [sp+74h] [bp-204h]@53
  void *v66; // [sp+78h] [bp-200h]@49
  __int64 v67; // [sp+80h] [bp-1F8h]@49
  _DWORD *v68; // [sp+88h] [bp-1F0h]@49
  __int64 v69; // [sp+90h] [bp-1E8h]@49
  int v70; // [sp+98h] [bp-1E0h]@49
  void *v71; // [sp+9Ch] [bp-1DCh]@45
  __int64 v72; // [sp+A4h] [bp-1D4h]@45
  _DWORD *v73; // [sp+ACh] [bp-1CCh]@45
  __int64 v74; // [sp+B4h] [bp-1C4h]@45
  int v75; // [sp+BCh] [bp-1BCh]@45
  void *v76; // [sp+C0h] [bp-1B8h]@41
  __int64 v77; // [sp+C8h] [bp-1B0h]@41
  _DWORD *v78; // [sp+D0h] [bp-1A8h]@41
  __int64 v79; // [sp+D8h] [bp-1A0h]@41
  int v80; // [sp+E0h] [bp-198h]@41
  void *v81; // [sp+E4h] [bp-194h]@37
  __int64 v82; // [sp+ECh] [bp-18Ch]@37
  _DWORD *v83; // [sp+F4h] [bp-184h]@37
  __int64 v84; // [sp+FCh] [bp-17Ch]@37
  int v85; // [sp+104h] [bp-174h]@37
  void *v86; // [sp+108h] [bp-170h]@33
  __int64 v87; // [sp+110h] [bp-168h]@33
  _DWORD *v88; // [sp+118h] [bp-160h]@33
  __int64 v89; // [sp+120h] [bp-158h]@33
  int v90; // [sp+128h] [bp-150h]@33
  void *v91; // [sp+12Ch] [bp-14Ch]@29
  __int64 v92; // [sp+134h] [bp-144h]@29
  _DWORD *v93; // [sp+13Ch] [bp-13Ch]@29
  __int64 v94; // [sp+144h] [bp-134h]@29
  int v95; // [sp+14Ch] [bp-12Ch]@29
  void *v96; // [sp+150h] [bp-128h]@25
  __int64 v97; // [sp+158h] [bp-120h]@25
  _DWORD *v98; // [sp+160h] [bp-118h]@25
  __int64 v99; // [sp+168h] [bp-110h]@25
  int v100; // [sp+170h] [bp-108h]@25
  int v101; // [sp+174h] [bp-104h]@25
  void *v102; // [sp+178h] [bp-100h]@21
  __int64 v103; // [sp+180h] [bp-F8h]@21
  _DWORD *v104; // [sp+188h] [bp-F0h]@21
  __int64 v105; // [sp+190h] [bp-E8h]@21
  int v106; // [sp+198h] [bp-E0h]@21
  int v107; // [sp+19Ch] [bp-DCh]@21
  void *v108; // [sp+1A0h] [bp-D8h]@17
  __int64 v109; // [sp+1A8h] [bp-D0h]@17
  _DWORD *v110; // [sp+1B0h] [bp-C8h]@17
  __int64 v111; // [sp+1B8h] [bp-C0h]@17
  int v112; // [sp+1C0h] [bp-B8h]@17
  int v113; // [sp+1C4h] [bp-B4h]@17
  void *v114; // [sp+1C8h] [bp-B0h]@13
  __int64 v115; // [sp+1D0h] [bp-A8h]@13
  _DWORD *v116; // [sp+1D8h] [bp-A0h]@13
  __int64 v117; // [sp+1E0h] [bp-98h]@13
  int v118; // [sp+1E8h] [bp-90h]@13
  int v119; // [sp+1ECh] [bp-8Ch]@13
  void *v120; // [sp+1F0h] [bp-88h]@9
  __int64 v121; // [sp+1F8h] [bp-80h]@9
  _DWORD *v122; // [sp+200h] [bp-78h]@9
  __int64 v123; // [sp+208h] [bp-70h]@9
  int v124; // [sp+210h] [bp-68h]@9
  int v125; // [sp+214h] [bp-64h]@9
  void *v126; // [sp+218h] [bp-60h]@5
  __int64 v127; // [sp+220h] [bp-58h]@5
  _DWORD *v128; // [sp+228h] [bp-50h]@5
  __int64 v129; // [sp+230h] [bp-48h]@5
  int v130; // [sp+238h] [bp-40h]@5
  int v131; // [sp+23Ch] [bp-3Ch]@5
  void *v132; // [sp+240h] [bp-38h]@1
  __int64 v133; // [sp+248h] [bp-30h]@1
  _DWORD *v134; // [sp+250h] [bp-28h]@1
  __int64 v135; // [sp+258h] [bp-20h]@1
  int v136; // [sp+260h] [bp-18h]@1
  int v137; // [sp+264h] [bp-14h]@1

  v1 = this;
  v136 = -495754686;
  v137 = -1239379583;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11952D0;
  *v2 = v1;
  HIDWORD(v3) = sub_1195204;
  v134 = v2;
  v135 = v3;
  v132 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v133 = v4;
  ScreenController::bindStringForCollection((int)v1, &v137, &v136, (int)&v134, (int)&v132);
  if ( (_DWORD)v133 )
    ((void (*)(void))v133)();
  if ( (_DWORD)v135 )
    ((void (*)(void))v135)();
  v131 = -1239379583;
  v130 = 961742083;
  v5 = operator new(4u);
  LODWORD(v6) = sub_1195316;
  *v5 = v1;
  HIDWORD(v6) = sub_1195306;
  v128 = v5;
  v129 = v6;
  v126 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v127 = v7;
  ScreenController::bindStringForCollection((int)v1, &v131, &v130, (int)&v128, (int)&v126);
  if ( (_DWORD)v127 )
    ((void (*)(void))v127)();
  if ( (_DWORD)v129 )
    ((void (*)(void))v129)();
  v125 = -1239379583;
  v124 = 719768147;
  v8 = operator new(4u);
  LODWORD(v9) = sub_1195368;
  *v8 = v1;
  HIDWORD(v9) = sub_119534C;
  v122 = v8;
  v123 = v9;
  v120 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v121 = v10;
  ScreenController::bindStringForCollection((int)v1, &v125, &v124, (int)&v122, (int)&v120);
  if ( (_DWORD)v121 )
    ((void (*)(void))v121)();
  if ( (_DWORD)v123 )
    ((void (*)(void))v123)();
  v119 = -1239379583;
  StringHash::StringHash<char [30]>(&v118, (int)"#selectable_button_visibility");
  v11 = operator new(4u);
  LODWORD(v12) = sub_11953B8;
  *v11 = v1;
  HIDWORD(v12) = sub_119539E;
  v116 = v11;
  v117 = v12;
  v114 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v115 = v13;
  ScreenController::bindBoolForCollection((int)v1, &v119, &v118, (int)&v116, (int)&v114);
  if ( (_DWORD)v115 )
    ((void (*)(void))v115)();
  if ( (_DWORD)v117 )
    ((void (*)(void))v117)();
  v113 = -1239379583;
  StringHash::StringHash<char [32]>(&v112, (int)"#unselectable_button_visibility");
  v14 = operator new(4u);
  LODWORD(v15) = sub_119540E;
  *v14 = v1;
  HIDWORD(v15) = sub_11953EE;
  v110 = v14;
  v111 = v15;
  v108 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v109 = v16;
  ScreenController::bindBoolForCollection((int)v1, &v113, &v112, (int)&v110, (int)&v108);
  if ( (_DWORD)v109 )
    ((void (*)(void))v109)();
  if ( (_DWORD)v111 )
    ((void (*)(void))v111)();
  v107 = -1239379583;
  StringHash::StringHash<char [28]>(&v106, (int)"#selectable_dust_is_visible");
  v17 = operator new(4u);
  LODWORD(v18) = sub_119545E;
  *v17 = v1;
  HIDWORD(v18) = sub_1195444;
  v104 = v17;
  v105 = v18;
  v102 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v103 = v19;
  ScreenController::bindBoolForCollection((int)v1, &v107, &v106, (int)&v104, (int)&v102);
  if ( (_DWORD)v103 )
    ((void (*)(void))v103)();
  if ( (_DWORD)v105 )
    ((void (*)(void))v105)();
  v101 = -1239379583;
  StringHash::StringHash<char [30]>(&v100, (int)"#unselectable_dust_is_visible");
  v20 = operator new(4u);
  LODWORD(v21) = sub_11954B4;
  *v20 = v1;
  HIDWORD(v21) = sub_1195494;
  v98 = v20;
  v99 = v21;
  v96 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v97 = v22;
  ScreenController::bindBoolForCollection((int)v1, &v101, &v100, (int)&v98, (int)&v96);
  if ( (_DWORD)v97 )
    ((void (*)(void))v97)();
  if ( (_DWORD)v99 )
    ((void (*)(void))v99)();
  v95 = 848666266;
  v23 = operator new(4u);
  LODWORD(v24) = sub_11954F6;
  *v23 = v1;
  HIDWORD(v24) = sub_11954EA;
  v93 = v23;
  v94 = v24;
  v91 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v92 = v25;
  ScreenController::bindBool((int)v1, &v95, (int)&v93, (int)&v91);
  if ( (_DWORD)v92 )
    ((void (*)(void))v92)();
  if ( (_DWORD)v94 )
    ((void (*)(void))v94)();
  v90 = 202626454;
  v26 = operator new(4u);
  LODWORD(v27) = sub_119554A;
  *v26 = v1;
  HIDWORD(v27) = sub_119552C;
  v88 = v26;
  v89 = v27;
  v86 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v87 = v28;
  ScreenController::bindBool((int)v1, &v90, (int)&v88, (int)&v86);
  if ( (_DWORD)v87 )
    ((void (*)(void))v87)();
  if ( (_DWORD)v89 )
    ((void (*)(void))v89)();
  v85 = -623423047;
  v29 = operator new(4u);
  LODWORD(v30) = sub_119559A;
  *v29 = v1;
  HIDWORD(v30) = sub_1195580;
  v83 = v29;
  v84 = v30;
  v81 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v82 = v31;
  ScreenController::bindBool((int)v1, &v85, (int)&v83, (int)&v81);
  if ( (_DWORD)v82 )
    ((void (*)(void))v82)();
  if ( (_DWORD)v84 )
    ((void (*)(void))v84)();
  v80 = -530134507;
  v32 = operator new(4u);
  LODWORD(v33) = sub_1195600;
  *v32 = v1;
  HIDWORD(v33) = sub_11955D0;
  v78 = v32;
  v79 = v33;
  v76 = operator new(1u);
  LODWORD(v34) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v34) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v77 = v34;
  ScreenController::bindString((int)v1, &v80, (int)&v78, (int)&v76);
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  if ( (_DWORD)v79 )
    ((void (*)(void))v79)();
  v75 = 1577456044;
  v35 = operator new(4u);
  LODWORD(v36) = sub_1195642;
  *v35 = v1;
  HIDWORD(v36) = sub_1195636;
  v73 = v35;
  v74 = v36;
  v71 = operator new(1u);
  LODWORD(v37) = ZNSt14_Function_base13_Base_managerIZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v37) = ZNSt17_Function_handlerIFbvEZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v72 = v37;
  ScreenController::bindInt((int)v1, &v75, (int)&v73, (int)&v71);
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  if ( (_DWORD)v74 )
    ((void (*)(void))v74)();
  v70 = 1584533793;
  v38 = operator new(4u);
  LODWORD(v39) = sub_119569E;
  *v38 = v1;
  HIDWORD(v39) = sub_1195678;
  v68 = v38;
  v69 = v39;
  v66 = operator new(1u);
  LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v40) = ZNSt17_Function_handlerIFbvEZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v67 = v40;
  ScreenController::bindInt((int)v1, &v70, (int)&v68, (int)&v66);
  if ( (_DWORD)v67 )
    ((void (*)(void))v67)();
  if ( (_DWORD)v69 )
    ((void (*)(void))v69)();
  v65 = 690261539;
  v41 = operator new(4u);
  LODWORD(v42) = sub_11956EE;
  *v41 = v1;
  HIDWORD(v42) = sub_11956D4;
  v63 = v41;
  v64 = v42;
  v61 = operator new(1u);
  LODWORD(v43) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v43) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v62 = v43;
  ScreenController::bindString((int)v1, &v65, (int)&v63, (int)&v61);
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  if ( (_DWORD)v64 )
    ((void (*)(void))v64)();
  v60 = 1289684182;
  v44 = operator new(4u);
  LODWORD(v45) = sub_1195764;
  *v44 = v1;
  HIDWORD(v45) = sub_1195724;
  v58 = v44;
  v59 = v45;
  v56 = operator new(1u);
  LODWORD(v46) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindColorERK10StringHashRKSt8functionIF5ColorvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSH_St18_Manager_operation;
  HIDWORD(v46) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindColorERK10StringHashRKSt8functionIF5ColorvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v57 = v46;
  ScreenController::bindColor((int)v1, &v60, (int)&v58, (int)&v56);
  if ( (_DWORD)v57 )
    ((void (*)(void))v57)();
  if ( (_DWORD)v59 )
    ((void (*)(void))v59)();
  v55 = -1239379583;
  StringHash::StringHash<char [32]>(&v54, (int)"#show_selected_button_highlight");
  v47 = operator new(4u);
  LODWORD(v48) = sub_11957AC;
  *v47 = v1;
  HIDWORD(v48) = sub_119579A;
  v52 = v47;
  v53 = v48;
  v50 = operator new(1u);
  LODWORD(v49) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v49) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v51 = v49;
  ScreenController::bindBoolForCollection((int)v1, &v55, &v54, (int)&v52, (int)&v50);
  if ( (_DWORD)v51 )
    ((void (*)(void))v51)();
  if ( (_DWORD)v53 )
    ((void (*)(void))v53)();
}


ContainerScreenController *__fastcall EnchantingScreenController::~EnchantingScreenController(EnchantingScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26E1C1C;
  v2 = *((_DWORD *)this + 158);
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
  return j_j_j__ZN25ContainerScreenControllerD2Ev(v1);
}


signed int __fastcall EnchantingScreenController::_onOptionButtonClicked(EnchantingScreenController *this, UIPropertyBag *a2)
{
  Json::Value *v2; // r5@1
  EnchantingScreenController *v3; // r4@1
  signed int v4; // r1@2
  Json::Value *v5; // r5@4

  v2 = (UIPropertyBag *)((char *)a2 + 8);
  v3 = this;
  if ( Json::Value::isNull((UIPropertyBag *)((char *)a2 + 8)) )
  {
    v4 = -1;
  }
  else if ( Json::Value::isObject(v2) == 1 )
    v5 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_index");
    if ( Json::Value::isInt(v5) || Json::Value::isUInt(v5) == 1 )
      v4 = Json::Value::asInt(v5, 0);
    else
      v4 = -1;
  else
  EnchantingScreenController::_enchantmentClicked(v3, v4);
  return 1;
}
