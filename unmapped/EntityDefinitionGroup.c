

void __fastcall EntityDefinitionGroup::_loadTemplates(int a1, int **a2, Json::Value *a3)
{
  EntityDefinitionGroup::_loadTemplates(a1, a2, a3);
}


EntityDefinitionPtr *__fastcall EntityDefinitionGroup::tryGetDefinition(EntityDefinitionPtr *a1, int a2, int **a3)
{
  EntityDefinitionGroup *v3; // r5@1
  EntityDefinitionPtr *v4; // r4@1
  int v5; // r0@1
  EntityDefinitionPtr *result; // r0@2

  v3 = (EntityDefinitionGroup *)a2;
  v4 = a1;
  v5 = std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<EntityDefinition,std::default_delete<EntityDefinition>>>,std::allocator<std::pair<std::string const,std::unique_ptr<EntityDefinition,std::default_delete<EntityDefinition>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a2 + 32),
         a3);
  if ( v5 )
    result = EntityDefinitionPtr::EntityDefinitionPtr(v4, v3, *(_DWORD *)(v5 + 8));
  else
    result = EntityDefinitionPtr::EntityDefinitionPtr(v4, (int)&EntityDefinitionPtr::NONE);
  return result;
}


int (**__fastcall EntityDefinitionGroup::_removeRef(EntityDefinitionGroup *this, EntityDefinitionPtr *a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  EntityDefinitionGroup *v2; // r11@1
  pthread_mutex_t *v3; // r5@1
  unsigned int v4; // r4@1
  int v5; // r0@2
  unsigned int v6; // r7@3
  int v7; // r5@3
  int v8; // r6@3
  void **v9; // r8@3
  void **v10; // r10@4
  void **v11; // r5@4
  int v12; // r1@7
  void **v13; // r4@10
  int v14; // r1@12
  _DWORD *v15; // r9@15
  int v16; // r1@16
  int v17; // r1@17
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@23
  int v19; // [sp+4h] [bp-2Ch]@3
  pthread_mutex_t *mutex; // [sp+8h] [bp-28h]@3

  v2 = this;
  v3 = (pthread_mutex_t *)((char *)this + 92);
  v4 = (unsigned int)a2;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v6 = *((_DWORD *)v2 + 2);
  mutex = v3;
  v7 = *((_DWORD *)v2 + 1);
  v19 = *((_DWORD *)v2 + 1);
  v8 = v4 % v6;
  v9 = *(void ***)(v7 + 4 * (v4 % v6));
  if ( v9 )
    v10 = (void **)*v9;
    v11 = *(void ***)(v7 + 4 * (v4 % v6));
    while ( v10[1] != (void *)v4 )
    {
      if ( *v10 )
      {
        v12 = *((_DWORD *)*v10 + 1) % v6;
        v11 = v10;
        v10 = (void **)*v10;
        if ( v12 == v8 )
          continue;
      }
      goto LABEL_23;
    }
    if ( v11 )
      v13 = (void **)*v11;
      if ( v9 != v11 )
        if ( *v13 )
        {
          v14 = *((_DWORD *)*v13 + 1) % v6;
          if ( v14 != v8 )
            *(_DWORD *)(v19 + 4 * v14) = v11;
        }
        goto LABEL_22;
      v15 = *v13;
      if ( *v13 )
        v16 = v15[1] % v6;
        if ( v16 == v8 )
LABEL_22:
          *v11 = *v13;
          operator delete(v13);
          --*((_DWORD *)v2 + 4);
          goto LABEL_23;
        *(_DWORD *)(v19 + 4 * v16) = v9;
        v17 = *((_DWORD *)v2 + 1);
        v9 = *(void ***)(v17 + 4 * v8);
      else
      if ( (void **)((char *)v2 + 12) == v9 )
        *v9 = v15;
      *(_DWORD *)(v17 + 4 * v8) = 0;
      goto LABEL_22;
LABEL_23:
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(mutex);
  return result;
}


signed int __fastcall EntityDefinitionGroup::hasPlayerAsTarget(EntityDefinitionGroup *this, const Json::Value *a2)
{
  void *v2; // r0@1
  Json::Value *v3; // r4@1
  int v4; // r5@2
  void *v5; // r0@2
  void *v6; // r0@3
  int v7; // r7@7
  signed int v8; // r7@7
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  unsigned int *v12; // r2@15
  signed int v13; // r1@17
  int v14; // [sp+0h] [bp-48h]@7
  char v15; // [sp+10h] [bp-38h]@6
  char v16; // [sp+18h] [bp-30h]@6
  int v17; // [sp+24h] [bp-24h]@2
  int v18; // [sp+28h] [bp-20h]@2

  v2 = Json::Value::operator[]((int)a2, "filters");
  v3 = (Json::Value *)Json::Value::operator[]((int)v2, "other_with_families");
  if ( Json::Value::isString(v3) != 1 )
    goto LABEL_29;
  sub_21E94B4((void **)&v17, (const char *)&unk_257BC67);
  Json::Value::asString(&v18, (int)v3, &v17);
  v4 = sub_21E7D6C((const void **)&v18, "player");
  v5 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v18 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v17 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  if ( v4 )
LABEL_29:
    if ( Json::Value::isArray(v3) != 1 )
      return 0;
    Json::Value::begin((Json::Value *)&v16, (int)v3);
    Json::Value::end((Json::Value *)&v15, (int)v3);
    if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v16, (const Json::ValueIteratorBase *)&v15) == 1 )
    while ( 1 )
      v7 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v16);
      Json::Value::Value((Json::Value *)&v14, "player");
      v8 = Json::Value::operator==(v7, (const char **)&v14);
      Json::Value::~Value((Json::Value *)&v14);
      if ( v8 == 1 )
        break;
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v16);
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v16, (const Json::ValueIteratorBase *)&v15) )
        return 0;
  return 1;
}


Json::Value *__fastcall EntityDefinitionGroup::_removeJSONObject(int a1, Json::Value *a2, const char **a3)
{
  const char *v3; // r5@1
  const char **v4; // r4@1
  Json::Value *result; // r0@1
  int v6; // [sp+0h] [bp-20h]@3

  v3 = (const char *)a2;
  v4 = a3;
  result = (Json::Value *)Json::Value::isNull(a2);
  if ( !result )
  {
    result = (Json::Value *)Json::Value::isMember((int)v3, v4);
    if ( result == (Json::Value *)1 )
    {
      Json::Value::removeMember((Json::Value *)&v6, v3, v4);
      result = Json::Value::~Value((Json::Value *)&v6);
    }
  }
  return result;
}


int __fastcall EntityDefinitionGroup::needsUpgrade(EntityDefinitionGroup *this, const Json::Value *a2, const GameVersion *a3)
{
  const GameVersion *v3; // r4@1
  Json::Value *v4; // r0@1
  int result; // r0@2
  int v6; // [sp+0h] [bp-20h]@3

  v3 = a3;
  v4 = (Json::Value *)Json::Value::operator[]((int)a2, "minecraft:entity");
  if ( Json::Value::isMember(v4, "do_not_upgrade") )
  {
    result = 0;
  }
  else
    GameVersion::current((GameVersion *)&v6);
    result = GameVersion::operator<((int)v3, (int)&v6);
  return result;
}


Json::Value *__fastcall EntityDefinitionGroup::_upgradeTo12Entity(int a1, Json::Value *a2, Json::Value *a3, signed int a4)
{
  Json::Value *v4; // r9@1
  Json::Value *v6; // r4@1
  Json::Value *v7; // r0@1
  int v8; // r5@1
  int v9; // r5@1
  Json::Value *v10; // r0@6
  int v11; // r5@6
  int v12; // r0@9
  void *v13; // r0@10
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  Json::Value *v16; // r0@19
  Json::Value *v17; // r0@19
  Json::Value *v18; // r0@19
  int v19; // r5@19
  int v24; // r1@19
  int v25; // r0@22
  signed int v26; // r0@28
  int v27; // r0@35
  int v28; // r5@39
  int v29; // r0@41
  void *v30; // r0@42
  unsigned int *v31; // r2@43
  signed int v32; // r1@45
  int v33; // r5@49
  int v35; // r1@49
  int v36; // r5@49
  int v37; // r1@49
  int v38; // r0@51
  void *v39; // r0@52
  Json::Value *v40; // r0@54
  int v41; // r5@54
  int v42; // r0@57
  void *v43; // r0@58
  Json::Value *v44; // r0@59
  Json::Value *v45; // r0@59
  Json::Value *v46; // r4@59
  Json::Value *v47; // r4@60
  int v48; // r0@61
  int v50; // r5@73
  int v51; // r5@73
  Json::Value *v52; // r5@73
  int v53; // r5@73
  int v54; // r0@75
  void *v55; // r0@76
  int v56; // r0@79
  void *v57; // r0@80
  Json::Value *v58; // r0@89
  int v59; // r5@89
  Json::Value *v60; // r0@89
  __int64 v61; // r0@89
  Json::Value *v62; // r0@89
  int v63; // r0@89
  int v64; // r5@89
  int v66; // r1@89
  Json::Value *v67; // r0@89
  int v68; // r0@89
  int v69; // r5@89
  int v71; // r1@89
  Json::Value *v72; // r0@89
  int v73; // r5@89
  int v74; // r0@92
  int v75; // r5@101
  int v76; // r0@103
  void *v77; // r0@104
  int v78; // r5@105
  int v79; // r0@107
  void *v80; // r0@108
  int v81; // r0@111
  void *v82; // r0@112
  Json::Value *v83; // r0@118
  int v84; // r5@118
  int v85; // r0@121
  int v86; // r5@129
  int v87; // r5@129
  int v89; // r1@129
  int v90; // r5@129
  int v92; // r1@129
  int v93; // r0@131
  void *v94; // r0@132
  Json::Value *v95; // r0@134
  int v96; // r5@134
  int v97; // r0@137
  void *v98; // r0@138
  Json::Value *v99; // r0@143
  int v100; // r5@143
  int v102; // r1@143
  int v103; // r0@146
  int v104; // r0@160
  void *v105; // r0@161
  int v106; // r5@163
  int v107; // r5@163
  int v108; // r0@165
  int v109; // r5@171
  int v110; // r5@171
  int v112; // r1@171
  int v113; // r0@173
  void *v114; // r0@174
  Json::Value *v115; // r0@176
  int v116; // r5@176
  int v117; // r0@179
  void *v118; // r0@180
  Json::Value *v119; // r0@182
  Json::Value *v120; // r6@182
  int v121; // r0@184
  void *v122; // r0@185
  int v123; // r5@186
  Json::Value *v124; // r0@186
  Json::Value *v125; // r0@186
  Json::Value *v126; // r6@186
  int v127; // r0@188
  void *v128; // r0@189
  Json::Value *v129; // r0@190
  Json::Value *v130; // r6@190
  int v131; // r0@192
  void *v132; // r0@193
  int v133; // r5@194
  Json::Value *v134; // r0@194
  Json::Value *v135; // r0@194
  Json::Value *v136; // r5@194
  int v137; // r0@196
  void *v138; // r0@197
  Json::Value *v139; // r0@199
  int v140; // r5@199
  int v141; // r0@202
  void *v142; // r0@203
  int v143; // r5@205
  int v144; // r5@205
  Json::Value *v145; // r0@205
  Json::Value *v146; // r0@205
  Json::Value *v147; // r6@205
  int v148; // r0@207
  void *v149; // r0@208
  Json::Value *v150; // r0@209
  Json::Value *v151; // r6@209
  int v152; // r0@211
  void *v153; // r0@212
  Json::Value *v154; // r0@213
  Json::Value *v155; // r0@213
  Json::Value *v156; // r6@213
  int v157; // r0@215
  void *v158; // r0@216
  Json::Value *v159; // r0@217
  Json::Value *v160; // r0@217
  Json::Value *v161; // r0@217
  Json::Value *v162; // r6@217
  int v163; // r0@219
  void *v164; // r0@220
  Json::Value *v165; // r0@221
  Json::Value *v166; // r0@221
  Json::Value *v167; // r0@221
  Json::Value *v168; // r0@221
  Json::Value *v169; // r5@221
  Json::Value *v170; // r0@221
  Json::Value *v171; // r0@221
  Json::Value *v172; // r0@221
  Json::Value *v173; // r0@221
  Json::Value *v174; // r5@221
  Json::Value *v175; // r0@221
  int v176; // r5@221
  int v177; // r0@223
  void *v178; // r0@224
  int v179; // r5@226
  int v180; // r5@226
  Json::Value *v181; // r5@226
  int v182; // r5@226
  __int64 v183; // r0@226
  int v184; // r0@226
  int v185; // r5@226
  int v187; // r1@226
  int v188; // r0@226
  int v189; // r5@226
  int v191; // r1@226
  int v192; // r0@226
  int v193; // r5@226
  int v195; // r1@226
  int v196; // r5@226
  int v197; // r0@226
  Json::Value *v198; // r0@226
  Json::Value *v199; // r0@226
  Json::Value *v200; // r5@226
  int v201; // r0@228
  void *v202; // r0@229
  int v203; // r0@232
  void *v204; // r0@233
  int v205; // r0@237
  void *v206; // r0@238
  int v207; // r0@241
  void *v208; // r0@242
  int v209; // r0@245
  void *v210; // r0@246
  int v211; // r0@249
  void *v212; // r0@250
  int v213; // r0@253
  int v214; // r5@261
  int v215; // r5@261
  int v216; // r5@261
  int v217; // r0@263
  void *v218; // r0@264
  int v219; // r0@267
  void *v220; // r0@268
  int v221; // r5@270
  Json::Value *v222; // r0@270
  Json::Value *v223; // r6@270
  int v224; // r0@272
  void *v225; // r0@273
  Json::Value *v226; // r0@274
  Json::Value *v227; // r0@274
  Json::Value *v228; // r6@274
  int v229; // r0@276
  void *v230; // r0@277
  Json::Value *v231; // r0@278
  Json::Value *v232; // r6@278
  int v233; // r0@280
  void *v234; // r0@281
  Json::Value *v235; // r0@282
  Json::Value *v236; // r0@282
  Json::Value *v237; // r6@282
  int v238; // r0@284
  void *v239; // r0@285
  Json::Value *v240; // r0@286
  Json::Value *v241; // r0@286
  Json::Value *v242; // r0@286
  Json::Value *v243; // r6@286
  int v244; // r0@288
  void *v245; // r0@289
  Json::Value *v246; // r0@290
  Json::Value *v247; // r0@290
  Json::Value *v248; // r0@290
  Json::Value *v249; // r0@290
  Json::Value *v250; // r5@290
  int v251; // r0@292
  void *v252; // r0@293
  unsigned int *v253; // r2@295
  signed int v254; // r1@297
  unsigned int *v255; // r2@299
  signed int v256; // r1@301
  unsigned int *v257; // r2@303
  signed int v258; // r1@305
  unsigned int *v259; // r2@307
  signed int v260; // r1@309
  unsigned int *v261; // r2@311
  signed int v262; // r1@313
  unsigned int *v263; // r2@315
  signed int v264; // r1@317
  unsigned int *v265; // r2@319
  signed int v266; // r1@321
  unsigned int *v267; // r2@323
  signed int v268; // r1@325
  unsigned int *v269; // r2@327
  signed int v270; // r1@329
  unsigned int *v271; // r2@331
  signed int v272; // r1@333
  unsigned int *v273; // r2@335
  signed int v274; // r1@337
  unsigned int *v275; // r2@339
  signed int v276; // r1@341
  unsigned int *v277; // r2@343
  signed int v278; // r1@345
  unsigned int *v279; // r2@347
  signed int v280; // r1@349
  Json::Value *v281; // r7@355
  Json::Value *v282; // r0@356
  int v283; // r5@357
  Json::Value *v284; // r0@359
  int v285; // r5@359
  Json::Value *v286; // r5@363
  Json::Value *v287; // r0@364
  int v289; // r5@366
  int v291; // r1@366
  char *v292; // r0@366
  int v293; // r0@369
  void *v294; // r0@370
  __int64 v295; // r0@371
  int v296; // r7@371
  int v297; // r5@371
  int v299; // r1@371
  const Json::Value *v300; // r0@371
  int v301; // r0@371
  int v302; // r5@371
  int v303; // r5@371
  int v304; // r5@371
  int v305; // r0@373
  void *v306; // r0@374
  int v307; // r0@377
  void *v308; // r0@378
  Json::Value *v309; // r0@379
  Json::Value *v310; // r7@379
  int v311; // r0@381
  void *v312; // r0@382
  Json::Value *v313; // r0@383
  Json::Value *v314; // r7@383
  int v315; // r0@385
  void *v316; // r0@386
  Json::Value *v317; // r0@387
  Json::Value *v318; // r0@387
  Json::Value *v319; // r7@387
  int v320; // r0@389
  void *v321; // r0@390
  Json::Value *v322; // r0@391
  Json::Value *v323; // r0@391
  Json::Value *v324; // r0@391
  Json::Value *v325; // r7@391
  int v326; // r0@393
  void *v327; // r0@394
  Json::Value *v328; // r0@395
  Json::Value *v329; // r0@395
  Json::Value *v330; // r0@395
  Json::Value *v331; // r0@395
  Json::Value *v332; // r5@395
  Json::Value *v333; // r0@395
  Json::Value *v334; // r7@395
  Json::Value *v335; // r0@396
  Json::Value *v336; // r0@397
  Json::Value *v337; // r0@397
  Json::Value *v338; // r0@398
  Json::Value *v339; // r0@398
  Json::Value *v340; // r7@398
  int v341; // r8@399
  void *v342; // r0@399
  void *v343; // r0@400
  Json::Value *v344; // r0@405
  Json::Value *v345; // r5@405
  Json::Value *v346; // r0@406
  Json::Value *v347; // r0@407
  Json::Value *v348; // r5@407
  int v349; // r1@407
  int v350; // r0@417
  unsigned int *v352; // r2@427
  signed int v353; // r1@429
  unsigned int *v354; // r2@431
  signed int v355; // r1@433
  unsigned int *v356; // r2@435
  signed int v357; // r1@437
  unsigned int *v358; // r2@439
  signed int v359; // r1@441
  unsigned int *v360; // r2@443
  signed int v361; // r1@445
  unsigned int *v362; // r2@447
  signed int v363; // r1@449
  unsigned int *v364; // r2@451
  signed int v365; // r1@453
  unsigned int *v366; // r2@483
  signed int v367; // r1@485
  unsigned int *v368; // r2@487
  signed int v369; // r1@489
  unsigned int *v370; // r2@491
  signed int v371; // r1@493
  unsigned int *v372; // r2@495
  signed int v373; // r1@497
  unsigned int *v374; // r2@499
  signed int v375; // r1@501
  unsigned int *v376; // r2@503
  signed int v377; // r1@505
  unsigned int *v378; // r2@507
  signed int v379; // r1@509
  unsigned int *v380; // r2@511
  signed int v381; // r1@513
  unsigned int *v382; // r2@515
  signed int v383; // r1@517
  unsigned int *v384; // r2@519
  signed int v385; // r1@521
  unsigned int *v386; // r2@523
  signed int v387; // r1@525
  unsigned int *v388; // r2@527
  signed int v389; // r1@529
  unsigned int *v390; // r2@531
  signed int v391; // r1@533
  unsigned int *v392; // r2@535
  signed int v393; // r1@537
  unsigned int *v394; // r2@539
  signed int v395; // r1@541
  unsigned int *v396; // r2@543
  signed int v397; // r1@545
  unsigned int *v398; // r2@547
  signed int v399; // r1@549
  unsigned int *v400; // r2@551
  signed int v401; // r1@553
  unsigned int *v402; // r2@555
  signed int v403; // r1@557
  unsigned int *v404; // r2@559
  signed int v405; // r1@561
  unsigned int *v406; // r2@563
  signed int v407; // r1@565
  unsigned int *v408; // r2@567
  signed int v409; // r1@569
  unsigned int *v410; // r2@715
  signed int v411; // r1@717
  unsigned int *v412; // r2@719
  signed int v413; // r1@721
  int v414; // [sp+4h] [bp-7FCh]@20
  char v415; // [sp+8h] [bp-7F8h]@19
  int v416; // [sp+1Ch] [bp-7E4h]@119
  char v417; // [sp+20h] [bp-7E0h]@118
  int v418; // [sp+34h] [bp-7CCh]@109
  int v419; // [sp+3Ch] [bp-7C4h]@105
  char v420; // [sp+40h] [bp-7C0h]@105
  char v421; // [sp+50h] [bp-7B0h]@105
  int v422; // [sp+64h] [bp-79Ch]@101
  char v423; // [sp+68h] [bp-798h]@101
  char v424; // [sp+78h] [bp-788h]@101
  int v425; // [sp+8Ch] [bp-774h]@163
  char v426; // [sp+90h] [bp-770h]@163
  char v427; // [sp+A0h] [bp-760h]@163
  int v428; // [sp+B4h] [bp-74Ch]@158
  char v429; // [sp+B8h] [bp-748h]@158
  int v430; // [sp+CCh] [bp-734h]@77
  int v431; // [sp+D4h] [bp-72Ch]@73
  char v432; // [sp+D8h] [bp-728h]@73
  char v433; // [sp+E8h] [bp-718h]@73
  char v434; // [sp+F8h] [bp-708h]@73
  char v435; // [sp+108h] [bp-6F8h]@73
  char v436; // [sp+118h] [bp-6E8h]@73
  int v437; // [sp+12Ch] [bp-6D4h]@290
  char v438; // [sp+130h] [bp-6D0h]@290
  int v439; // [sp+144h] [bp-6BCh]@286
  char v440; // [sp+148h] [bp-6B8h]@286
  int v441; // [sp+15Ch] [bp-6A4h]@282
  char v442; // [sp+160h] [bp-6A0h]@282
  int v443; // [sp+174h] [bp-68Ch]@278
  char v444; // [sp+178h] [bp-688h]@278
  int v445; // [sp+18Ch] [bp-674h]@274
  int v446; // [sp+194h] [bp-66Ch]@270
  char v447; // [sp+198h] [bp-668h]@270
  char v448; // [sp+1A8h] [bp-658h]@270
  char v449; // [sp+1B8h] [bp-648h]@270
  int v450; // [sp+1CCh] [bp-634h]@90
  char v451; // [sp+1D0h] [bp-630h]@89
  char v452; // [sp+1E0h] [bp-620h]@89
  char v453; // [sp+1F0h] [bp-610h]@89
  char v454; // [sp+200h] [bp-600h]@89
  int v455; // [sp+214h] [bp-5ECh]@7
  char v456; // [sp+218h] [bp-5E8h]@6
  int v457; // [sp+22Ch] [bp-5D4h]@265
  int v458; // [sp+234h] [bp-5CCh]@261
  char v459; // [sp+238h] [bp-5C8h]@261
  char v460; // [sp+248h] [bp-5B8h]@261
  char v461; // [sp+258h] [bp-5A8h]@261
  char v462; // [sp+268h] [bp-598h]@261
  int v463; // [sp+27Ch] [bp-584h]@135
  char v464; // [sp+280h] [bp-580h]@134
  int v465; // [sp+294h] [bp-56Ch]@129
  char v466; // [sp+298h] [bp-568h]@129
  char v467; // [sp+2A8h] [bp-558h]@129
  char v468; // [sp+2B8h] [bp-548h]@129
  char v469; // [sp+2C8h] [bp-538h]@129
  int v470; // [sp+2DCh] [bp-524h]@177
  char v471; // [sp+2E0h] [bp-520h]@176
  int v472; // [sp+2F4h] [bp-50Ch]@171
  char v473; // [sp+2F8h] [bp-508h]@171
  char v474; // [sp+308h] [bp-4F8h]@171
  char v475; // [sp+318h] [bp-4E8h]@171
  int v476; // [sp+32Ch] [bp-4D4h]@230
  int v477; // [sp+334h] [bp-4CCh]@226
  char v478; // [sp+338h] [bp-4C8h]@226
  char v479; // [sp+348h] [bp-4B8h]@226
  char v480; // [sp+358h] [bp-4A8h]@226
  char v481; // [sp+368h] [bp-498h]@226
  char v482; // [sp+378h] [bp-488h]@226
  char v483; // [sp+388h] [bp-478h]@226
  char v484; // [sp+398h] [bp-468h]@226
  char v485; // [sp+3A8h] [bp-458h]@226
  char v486; // [sp+3B8h] [bp-448h]@226
  char v487; // [sp+3C8h] [bp-438h]@226
  int v488; // [sp+3DCh] [bp-424h]@251
  int v489; // [sp+3E4h] [bp-41Ch]@247
  char v490; // [sp+3E8h] [bp-418h]@247
  int v491; // [sp+3FCh] [bp-404h]@243
  char v492; // [sp+400h] [bp-400h]@243
  int v493; // [sp+414h] [bp-3ECh]@239
  char v494; // [sp+418h] [bp-3E8h]@239
  int v495; // [sp+42Ch] [bp-3D4h]@235
  char v496; // [sp+430h] [bp-3D0h]@235
  int v497; // [sp+444h] [bp-3BCh]@200
  char v498; // [sp+448h] [bp-3B8h]@199
  int v499; // [sp+45Ch] [bp-3A4h]@194
  char v500; // [sp+460h] [bp-3A0h]@194
  char v501; // [sp+470h] [bp-390h]@194
  int v502; // [sp+484h] [bp-37Ch]@190
  char v503; // [sp+488h] [bp-378h]@190
  int v504; // [sp+49Ch] [bp-364h]@186
  char v505; // [sp+4A0h] [bp-360h]@186
  char v506; // [sp+4B0h] [bp-350h]@186
  int v507; // [sp+4C4h] [bp-33Ch]@182
  char v508; // [sp+4C8h] [bp-338h]@182
  char v509; // [sp+4D8h] [bp-328h]@61
  char v510; // [sp+4E8h] [bp-318h]@61
  int v511; // [sp+4FCh] [bp-304h]@55
  char v512; // [sp+500h] [bp-300h]@54
  int v513; // [sp+514h] [bp-2ECh]@49
  char v514; // [sp+518h] [bp-2E8h]@49
  char v515; // [sp+528h] [bp-2D8h]@49
  char v516; // [sp+538h] [bp-2C8h]@49
  int v517; // [sp+54Ch] [bp-2B4h]@144
  char v518; // [sp+550h] [bp-2B0h]@143
  int v519; // [sp+564h] [bp-29Ch]@415
  char v520; // [sp+568h] [bp-298h]@413
  char v521; // [sp+578h] [bp-288h]@411
  char v522; // [sp+588h] [bp-278h]@402
  int v523; // [sp+5A0h] [bp-260h]@399
  int v524; // [sp+5A4h] [bp-25Ch]@399
  char v525; // [sp+5A8h] [bp-258h]@395
  int v526; // [sp+5BCh] [bp-244h]@391
  char v527; // [sp+5C0h] [bp-240h]@391
  int v528; // [sp+5D4h] [bp-22Ch]@387
  char v529; // [sp+5D8h] [bp-228h]@387
  int v530; // [sp+5ECh] [bp-214h]@383
  char v531; // [sp+5F0h] [bp-210h]@383
  int v532; // [sp+604h] [bp-1FCh]@379
  int v533; // [sp+60Ch] [bp-1F4h]@375
  int v534; // [sp+614h] [bp-1ECh]@371
  char v535; // [sp+618h] [bp-1E8h]@371
  char v536; // [sp+628h] [bp-1D8h]@371
  char v537; // [sp+638h] [bp-1C8h]@371
  char v538; // [sp+648h] [bp-1B8h]@371
  char v539; // [sp+658h] [bp-1A8h]@371
  char v540; // [sp+668h] [bp-198h]@371
  char v541; // [sp+678h] [bp-188h]@371
  int v542; // [sp+68Ch] [bp-174h]@367
  char v543; // [sp+690h] [bp-170h]@367
  char v544; // [sp+6A0h] [bp-160h]@367
  char v545; // [sp+6B0h] [bp-150h]@366
  char v546; // [sp+6C0h] [bp-140h]@359
  char v547; // [sp+6D0h] [bp-130h]@357
  int v548; // [sp+6E4h] [bp-11Ch]@39
  char v549; // [sp+6E8h] [bp-118h]@39
  int v550; // [sp+6FCh] [bp-104h]@221
  char v551; // [sp+700h] [bp-100h]@221
  char v552; // [sp+710h] [bp-F0h]@221
  char v553; // [sp+720h] [bp-E0h]@221
  int v554; // [sp+734h] [bp-CCh]@217
  char v555; // [sp+738h] [bp-C8h]@217
  int v556; // [sp+74Ch] [bp-B4h]@213
  char v557; // [sp+750h] [bp-B0h]@213
  int v558; // [sp+764h] [bp-9Ch]@209
  char v559; // [sp+768h] [bp-98h]@209
  int v560; // [sp+77Ch] [bp-84h]@205
  char v561; // [sp+780h] [bp-80h]@205
  char v562; // [sp+790h] [bp-70h]@205
  char v563; // [sp+7A0h] [bp-60h]@205
  char v564; // [sp+7B0h] [bp-50h]@1
  char v565; // [sp+7C0h] [bp-40h]@1
  char v566; // [sp+7D0h] [bp-30h]@1

  v4 = a2;
  _R6 = a4;
  v6 = a3;
  v7 = (Json::Value *)Json::Value::Value(&v566, 7);
  v8 = Json::Value::operator[](v7, "has_gravity");
  Json::Value::Value((Json::Value *)&v565, 1);
  Json::Value::operator=(v8, (const Json::Value *)&v565);
  Json::Value::~Value((Json::Value *)&v565);
  v9 = Json::Value::operator[]((Json::Value *)&v566, "has_collision");
  Json::Value::Value((Json::Value *)&v564, 1);
  Json::Value::operator=(v9, (const Json::Value *)&v564);
  Json::Value::~Value((Json::Value *)&v564);
  if ( _R6 <= 21269 )
  {
    if ( _R6 > 2848 )
    {
      if ( _R6 <= 2920 )
      {
        switch ( _R6 )
        {
          case 2857:
            if ( Json::Value::isMember(v6, "minecraft:behavior.float_wander") == 1 )
            {
              v10 = (Json::Value *)Json::Value::operator[](v6, "minecraft:behavior.float_wander");
              v11 = Json::Value::operator[](v10, "must_reach");
              Json::Value::Value((Json::Value *)&v456, 1);
              Json::Value::operator=(v11, (const Json::Value *)&v456);
              Json::Value::~Value((Json::Value *)&v456);
            }
            sub_21E94B4((void **)&v455, "minecraft:physics");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v455) )
              v12 = Json::Value::operator[](v6, (const char **)&v455);
              Json::Value::operator=(v12, (const Json::Value *)&v566);
            v13 = (void *)(v455 - 12);
            if ( (int *)(v455 - 12) == &dword_28898C0 )
              return Json::Value::~Value((Json::Value *)&v566);
            v14 = (unsigned int *)(v455 - 4);
            if ( !&pthread_create )
              goto LABEL_424;
            __dmb();
            do
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            goto LABEL_425;
          case 2869:
            goto LABEL_163;
          case 2858:
            Json::Value::Value(&v462, 7);
            v214 = Json::Value::operator[]((Json::Value *)&v462, "totalSupply");
            Json::Value::Value((Json::Value *)&v461, 15);
            Json::Value::operator=(v214, (const Json::Value *)&v461);
            Json::Value::~Value((Json::Value *)&v461);
            v215 = Json::Value::operator[]((Json::Value *)&v462, "suffocateTime");
            Json::Value::Value((Json::Value *)&v460, 0);
            Json::Value::operator=(v215, (const Json::Value *)&v460);
            Json::Value::~Value((Json::Value *)&v460);
            v216 = Json::Value::operator[]((Json::Value *)&v462, "breathesLava");
            Json::Value::Value((Json::Value *)&v459, 1);
            Json::Value::operator=(v216, (const Json::Value *)&v459);
            Json::Value::~Value((Json::Value *)&v459);
            sub_21E94B4((void **)&v458, "minecraft:breathable");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v458) )
              v217 = Json::Value::operator[](v6, (const char **)&v458);
              Json::Value::operator=(v217, (const Json::Value *)&v462);
            v218 = (void *)(v458 - 12);
            if ( (int *)(v458 - 12) != &dword_28898C0 )
              v396 = (unsigned int *)(v458 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v397 = __ldrex(v396);
                while ( __strex(v397 - 1, v396) );
              }
              else
                v397 = (*v396)--;
              if ( v397 <= 0 )
                j_j_j_j__ZdlPv_9(v218);
            sub_21E94B4((void **)&v457, "minecraft:physics");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v457) )
              v219 = Json::Value::operator[](v6, (const char **)&v457);
              Json::Value::operator=(v219, (const Json::Value *)&v566);
            v220 = (void *)(v457 - 12);
            if ( (int *)(v457 - 12) != &dword_28898C0 )
              v398 = (unsigned int *)(v457 - 4);
                  v399 = __ldrex(v398);
                while ( __strex(v399 - 1, v398) );
                v399 = (*v398)--;
              if ( v399 <= 0 )
                j_j_j_j__ZdlPv_9(v220);
            Json::Value::~Value((Json::Value *)&v462);
            return Json::Value::~Value((Json::Value *)&v566);
          case 2870:
            Json::Value::Value(&v449, 7);
            v221 = Json::Value::operator[]((Json::Value *)&v449, "value");
            Json::Value::Value((Json::Value *)&v448, 16);
            Json::Value::operator=(v221, (const Json::Value *)&v448);
            Json::Value::~Value((Json::Value *)&v448);
            v222 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
            v223 = (Json::Value *)Json::Value::operator[](v222, "component_groups");
            Json::Value::Value(&v447, 7);
            sub_21E94B4((void **)&v446, "minecraft:shulker_undyed");
            if ( !Json::Value::isNull(v223) && !Json::Value::isMember((int)v223, (const char **)&v446) )
              v224 = Json::Value::operator[](v223, (const char **)&v446);
              Json::Value::operator=(v224, (const Json::Value *)&v447);
            v225 = (void *)(v446 - 12);
            if ( (int *)(v446 - 12) != &dword_28898C0 )
              v394 = (unsigned int *)(v446 - 4);
                  v395 = __ldrex(v394);
                while ( __strex(v395 - 1, v394) );
                v395 = (*v394)--;
              if ( v395 <= 0 )
                j_j_j_j__ZdlPv_9(v225);
            Json::Value::~Value((Json::Value *)&v447);
            v226 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
            v227 = (Json::Value *)Json::Value::operator[](v226, "component_groups");
            v228 = (Json::Value *)Json::Value::operator[](v227, "minecraft:shulker_undyed");
            sub_21E94B4((void **)&v445, "minecraft:variant");
            if ( !Json::Value::isNull(v228) && !Json::Value::isMember((int)v228, (const char **)&v445) )
              v229 = Json::Value::operator[](v228, (const char **)&v445);
              Json::Value::operator=(v229, (const Json::Value *)&v449);
            v230 = (void *)(v445 - 12);
            if ( (int *)(v445 - 12) != &dword_28898C0 )
              v400 = (unsigned int *)(v445 - 4);
                  v401 = __ldrex(v400);
                while ( __strex(v401 - 1, v400) );
                v401 = (*v400)--;
              if ( v401 <= 0 )
                j_j_j_j__ZdlPv_9(v230);
            v231 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
            v232 = (Json::Value *)Json::Value::operator[](v231, "events");
            Json::Value::Value(&v444, 7);
            sub_21E94B4((void **)&v443, "minecraft:entity_spawned");
            if ( !Json::Value::isNull(v232) && !Json::Value::isMember((int)v232, (const char **)&v443) )
              v233 = Json::Value::operator[](v232, (const char **)&v443);
              Json::Value::operator=(v233, (const Json::Value *)&v444);
            v234 = (void *)(v443 - 12);
            if ( (int *)(v443 - 12) != &dword_28898C0 )
              v402 = (unsigned int *)(v443 - 4);
                  v403 = __ldrex(v402);
                while ( __strex(v403 - 1, v402) );
                v403 = (*v402)--;
              if ( v403 <= 0 )
                j_j_j_j__ZdlPv_9(v234);
            Json::Value::~Value((Json::Value *)&v444);
            v235 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
            v236 = (Json::Value *)Json::Value::operator[](v235, "events");
            v237 = (Json::Value *)Json::Value::operator[](v236, "minecraft:entity_spawned");
            Json::Value::Value(&v442, 7);
            sub_21E94B4((void **)&v441, "add");
            if ( !Json::Value::isNull(v237) && !Json::Value::isMember((int)v237, (const char **)&v441) )
              v238 = Json::Value::operator[](v237, (const char **)&v441);
              Json::Value::operator=(v238, (const Json::Value *)&v442);
            v239 = (void *)(v441 - 12);
            if ( (int *)(v441 - 12) != &dword_28898C0 )
              v404 = (unsigned int *)(v441 - 4);
                  v405 = __ldrex(v404);
                while ( __strex(v405 - 1, v404) );
                v405 = (*v404)--;
              if ( v405 <= 0 )
                j_j_j_j__ZdlPv_9(v239);
            Json::Value::~Value((Json::Value *)&v442);
            v240 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
            v241 = (Json::Value *)Json::Value::operator[](v240, "events");
            v242 = (Json::Value *)Json::Value::operator[](v241, "minecraft:entity_spawned");
            v243 = (Json::Value *)Json::Value::operator[](v242, "add");
            Json::Value::Value(&v440, 7);
            sub_21E94B4((void **)&v439, "component_groups");
            if ( !Json::Value::isNull(v243) && !Json::Value::isMember((int)v243, (const char **)&v439) )
              v244 = Json::Value::operator[](v243, (const char **)&v439);
              Json::Value::operator=(v244, (const Json::Value *)&v440);
            v245 = (void *)(v439 - 12);
            if ( (int *)(v439 - 12) != &dword_28898C0 )
              v406 = (unsigned int *)(v439 - 4);
                  v407 = __ldrex(v406);
                while ( __strex(v407 - 1, v406) );
                v407 = (*v406)--;
              if ( v407 <= 0 )
                j_j_j_j__ZdlPv_9(v245);
            Json::Value::~Value((Json::Value *)&v440);
            v246 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
            v247 = (Json::Value *)Json::Value::operator[](v246, "events");
            v248 = (Json::Value *)Json::Value::operator[](v247, "minecraft:entity_spawned");
            v249 = (Json::Value *)Json::Value::operator[](v248, "add");
            v250 = (Json::Value *)Json::Value::operator[](v249, "component_groups");
            Json::Value::Value((Json::Value *)&v438, "minecraft:shulker_undyed");
            Json::Value::append(v250, (const Json::Value *)&v438);
            Json::Value::~Value((Json::Value *)&v438);
            sub_21E94B4((void **)&v437, "minecraft:physics");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v437) )
              v251 = Json::Value::operator[](v6, (const char **)&v437);
              Json::Value::operator=(v251, (const Json::Value *)&v566);
            v252 = (void *)(v437 - 12);
            if ( (int *)(v437 - 12) != &dword_28898C0 )
              v408 = (unsigned int *)(v437 - 4);
                  v409 = __ldrex(v408);
                while ( __strex(v409 - 1, v408) );
                v409 = (*v408)--;
              if ( v409 <= 0 )
                j_j_j_j__ZdlPv_9(v252);
            Json::Value::~Value((Json::Value *)&v449);
          case 2854:
            goto LABEL_362;
          case 2849:
            goto LABEL_367;
          case 2853:
          case 2859:
          case 2861:
          case 2865:
          case 2866:
            goto LABEL_404;
          case 2873:
            goto LABEL_415;
          case 2850:
          case 2851:
          case 2852:
          case 2855:
          case 2856:
          case 2860:
          case 2862:
          case 2863:
          case 2864:
          case 2867:
          case 2868:
          case 2871:
          case 2872:
          default:
            if ( _R6 != 2920 )
            break;
        }
        goto LABEL_415;
      }
      if ( _R6 <= 8976 )
          case 4876:
            Json::Value::Value(&v516, 7);
            v33 = Json::Value::operator[]((Json::Value *)&v516, "width");
            __asm
              VLDR            D0, =0.899999976
              VMOV            R7, R6, D0
            Json::Value::Value((Json::Value *)&v515, v35, COERCE_DOUBLE(__PAIR__(_R6, _R7)));
            Json::Value::operator=(v33, (const Json::Value *)&v515);
            Json::Value::~Value((Json::Value *)&v515);
            v36 = Json::Value::operator[]((Json::Value *)&v516, "height");
            Json::Value::Value((Json::Value *)&v514, v37, COERCE_DOUBLE(__PAIR__(_R6, _R7)));
            Json::Value::operator=(v36, (const Json::Value *)&v514);
            Json::Value::~Value((Json::Value *)&v514);
            sub_21E94B4((void **)&v513, "minecraft:collision_box");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v513) )
              v38 = Json::Value::operator[](v6, (const char **)&v513);
              Json::Value::operator=(v38, (const Json::Value *)&v516);
            v39 = (void *)(v513 - 12);
            if ( (int *)(v513 - 12) != &dword_28898C0 )
              v261 = (unsigned int *)(v513 - 4);
                  v262 = __ldrex(v261);
                while ( __strex(v262 - 1, v261) );
                v262 = (*v261)--;
              if ( v262 <= 0 )
                j_j_j_j__ZdlPv_9(v39);
            if ( Json::Value::isMember(v6, "minecraft:navigation.walk") == 1 )
              v40 = (Json::Value *)Json::Value::operator[](v6, "minecraft:navigation.walk");
              v41 = Json::Value::operator[](v40, "avoid_damage_blocks");
              Json::Value::Value((Json::Value *)&v512, 1);
              Json::Value::operator=(v41, (const Json::Value *)&v512);
              Json::Value::~Value((Json::Value *)&v512);
            sub_21E94B4((void **)&v511, "minecraft:physics");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v511) )
              v42 = Json::Value::operator[](v6, (const char **)&v511);
              Json::Value::operator=(v42, (const Json::Value *)&v566);
            v43 = (void *)(v511 - 12);
            if ( (int *)(v511 - 12) != &dword_28898C0 )
              v265 = (unsigned int *)(v511 - 4);
                  v266 = __ldrex(v265);
                while ( __strex(v266 - 1, v265) );
                v266 = (*v265)--;
              if ( v266 <= 0 )
                j_j_j_j__ZdlPv_9(v43);
            v44 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
            v45 = (Json::Value *)Json::Value::operator[](v44, "component_groups");
            v46 = (Json::Value *)Json::Value::operator[](v45, "minecraft:pig_saddled");
            if ( !Json::Value::isNull(v46) )
              v47 = (Json::Value *)Json::Value::operator[](v46, "minecraft:rideable");
              if ( !Json::Value::isNull(v47) )
                Json::Value::Value(&v510, 6);
                Json::Value::Value((Json::Value *)&v509, "player");
                Json::Value::append((Json::Value *)&v510, (const Json::Value *)&v509);
                Json::Value::~Value((Json::Value *)&v509);
                v48 = Json::Value::operator[](v47, "family_types");
                Json::Value::operator=(v48, (const Json::Value *)&v510);
                Json::Value::~Value((Json::Value *)&v510);
            Json::Value::~Value((Json::Value *)&v516);
          case 4892:
            Json::Value::Value(&v475, 7);
            v109 = Json::Value::operator[]((Json::Value *)&v475, "priority");
            Json::Value::Value((Json::Value *)&v474, 2);
            Json::Value::operator=(v109, (const Json::Value *)&v474);
            Json::Value::~Value((Json::Value *)&v474);
            v110 = Json::Value::operator[]((Json::Value *)&v475, "speed_multiplier");
              VMOV.F64        D0, #2.0
              VMOV            R2, R3, D0
            Json::Value::Value((Json::Value *)&v473, v112, _R2);
            Json::Value::operator=(v110, (const Json::Value *)&v473);
            Json::Value::~Value((Json::Value *)&v473);
            sub_21E94B4((void **)&v472, "minecraft:behavior.panic");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v472) )
              v113 = Json::Value::operator[](v6, (const char **)&v472);
              Json::Value::operator=(v113, (const Json::Value *)&v475);
            v114 = (void *)(v472 - 12);
            if ( (int *)(v472 - 12) != &dword_28898C0 )
              v259 = (unsigned int *)(v472 - 4);
                  v260 = __ldrex(v259);
                while ( __strex(v260 - 1, v259) );
                v260 = (*v259)--;
              if ( v260 <= 0 )
                j_j_j_j__ZdlPv_9(v114);
              v115 = (Json::Value *)Json::Value::operator[](v6, "minecraft:navigation.walk");
              v116 = Json::Value::operator[](v115, "avoid_damage_blocks");
              Json::Value::Value((Json::Value *)&v471, 1);
              Json::Value::operator=(v116, (const Json::Value *)&v471);
              Json::Value::~Value((Json::Value *)&v471);
            sub_21E94B4((void **)&v470, "minecraft:physics");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v470) )
              v117 = Json::Value::operator[](v6, (const char **)&v470);
              Json::Value::operator=(v117, (const Json::Value *)&v566);
            v118 = (void *)(v470 - 12);
            if ( (int *)(v470 - 12) != &dword_28898C0 )
              v263 = (unsigned int *)(v470 - 4);
                  v264 = __ldrex(v263);
                while ( __strex(v264 - 1, v263) );
                v264 = (*v263)--;
              if ( v264 <= 0 )
                j_j_j_j__ZdlPv_9(v118);
            Json::Value::~Value((Json::Value *)&v475);
          case 4877:
            v119 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
            v120 = (Json::Value *)Json::Value::operator[](v119, "component_groups");
            Json::Value::Value(&v508, 7);
            sub_21E94B4((void **)&v507, "minecraft:loot_sheared");
            if ( !Json::Value::isNull(v120) && !Json::Value::isMember((int)v120, (const char **)&v507) )
              v121 = Json::Value::operator[](v120, (const char **)&v507);
              Json::Value::operator=(v121, (const Json::Value *)&v508);
            v122 = (void *)(v507 - 12);
            if ( (int *)(v507 - 12) != &dword_28898C0 )
              v257 = (unsigned int *)(v507 - 4);
                  v258 = __ldrex(v257);
                while ( __strex(v258 - 1, v257) );
                v258 = (*v257)--;
              if ( v258 <= 0 )
                j_j_j_j__ZdlPv_9(v122);
            Json::Value::~Value((Json::Value *)&v508);
            Json::Value::Value(&v506, 7);
            v123 = Json::Value::operator[]((Json::Value *)&v506, "table");
            Json::Value::Value((Json::Value *)&v505, "loot_tables/entities/sheep_sheared.json");
            Json::Value::operator=(v123, (const Json::Value *)&v505);
            Json::Value::~Value((Json::Value *)&v505);
            v124 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
            v125 = (Json::Value *)Json::Value::operator[](v124, "component_groups");
            v126 = (Json::Value *)Json::Value::operator[](v125, "minecraft:loot_sheared");
            sub_21E94B4((void **)&v504, "minecraft:loot");
            if ( !Json::Value::isNull(v126) && !Json::Value::isMember((int)v126, (const char **)&v504) )
              v127 = Json::Value::operator[](v126, (const char **)&v504);
              Json::Value::operator=(v127, (const Json::Value *)&v506);
            v128 = (void *)(v504 - 12);
            if ( (int *)(v504 - 12) != &dword_28898C0 )
              v267 = (unsigned int *)(v504 - 4);
                  v268 = __ldrex(v267);
                while ( __strex(v268 - 1, v267) );
                v268 = (*v267)--;
              if ( v268 <= 0 )
                j_j_j_j__ZdlPv_9(v128);
            v129 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
            v130 = (Json::Value *)Json::Value::operator[](v129, "component_groups");
            Json::Value::Value(&v503, 7);
            sub_21E94B4((void **)&v502, "minecraft:loot_wooly");
            if ( !Json::Value::isNull(v130) && !Json::Value::isMember((int)v130, (const char **)&v502) )
              v131 = Json::Value::operator[](v130, (const char **)&v502);
              Json::Value::operator=(v131, (const Json::Value *)&v503);
            v132 = (void *)(v502 - 12);
            if ( (int *)(v502 - 12) != &dword_28898C0 )
              v269 = (unsigned int *)(v502 - 4);
                  v270 = __ldrex(v269);
                while ( __strex(v270 - 1, v269) );
                v270 = (*v269)--;
              if ( v270 <= 0 )
                j_j_j_j__ZdlPv_9(v132);
            Json::Value::~Value((Json::Value *)&v503);
            Json::Value::Value(&v501, 7);
            v133 = Json::Value::operator[]((Json::Value *)&v501, "table");
            Json::Value::Value((Json::Value *)&v500, "loot_tables/entities/sheep.json");
            Json::Value::operator=(v133, (const Json::Value *)&v500);
            Json::Value::~Value((Json::Value *)&v500);
            v134 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
            v135 = (Json::Value *)Json::Value::operator[](v134, "component_groups");
            v136 = (Json::Value *)Json::Value::operator[](v135, "minecraft:loot_wooly");
            sub_21E94B4((void **)&v499, "minecraft:loot");
            if ( !Json::Value::isNull(v136) && !Json::Value::isMember((int)v136, (const char **)&v499) )
              v137 = Json::Value::operator[](v136, (const char **)&v499);
              Json::Value::operator=(v137, (const Json::Value *)&v506);
            v138 = (void *)(v499 - 12);
            if ( (int *)(v499 - 12) != &dword_28898C0 )
              v271 = (unsigned int *)(v499 - 4);
                  v272 = __ldrex(v271);
                while ( __strex(v272 - 1, v271) );
                v272 = (*v271)--;
              if ( v272 <= 0 )
                j_j_j_j__ZdlPv_9(v138);
              v139 = (Json::Value *)Json::Value::operator[](v6, "minecraft:navigation.walk");
              v140 = Json::Value::operator[](v139, "avoid_damage_blocks");
              Json::Value::Value((Json::Value *)&v498, 1);
              Json::Value::operator=(v140, (const Json::Value *)&v498);
              Json::Value::~Value((Json::Value *)&v498);
            sub_21E94B4((void **)&v497, "minecraft:physics");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v497) )
              v141 = Json::Value::operator[](v6, (const char **)&v497);
              Json::Value::operator=(v141, (const Json::Value *)&v566);
            v142 = (void *)(v497 - 12);
            if ( (int *)(v497 - 12) != &dword_28898C0 )
              v273 = (unsigned int *)(v497 - 4);
                  v274 = __ldrex(v273);
                while ( __strex(v274 - 1, v273) );
                v274 = (*v273)--;
              if ( v274 <= 0 )
                j_j_j_j__ZdlPv_9(v142);
            Json::Value::~Value((Json::Value *)&v501);
            Json::Value::~Value((Json::Value *)&v506);
          case 4875:
          case 4880:
            goto LABEL_354;
          case 4874:
          case 4893:
            goto LABEL_358;
          case 4882:
          case 4878:
          case 4879:
          case 4881:
          case 4883:
          case 4884:
          case 4885:
          case 4886:
          case 4887:
          case 4888:
          case 4889:
          case 4890:
          case 4891:
            if ( _R6 != 2921 )
            Json::Value::Value(&v429, 7);
            sub_21E94B4((void **)&v428, "minecraft:movement.basic");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v428) )
              v104 = Json::Value::operator[](v6, (const char **)&v428);
              Json::Value::operator=(v104, (const Json::Value *)&v429);
            v105 = (void *)(v428 - 12);
            if ( (int *)(v428 - 12) != &dword_28898C0 )
              v279 = (unsigned int *)(v428 - 4);
                  v280 = __ldrex(v279);
                while ( __strex(v280 - 1, v279) );
                v280 = (*v279)--;
              if ( v280 <= 0 )
                j_j_j_j__ZdlPv_9(v105);
            Json::Value::~Value((Json::Value *)&v429);
LABEL_163:
            v106 = Json::Value::operator[]((Json::Value *)&v566, "has_gravity");
            Json::Value::Value((Json::Value *)&v427, 0);
            Json::Value::operator=(v106, (const Json::Value *)&v427);
            Json::Value::~Value((Json::Value *)&v427);
            v107 = Json::Value::operator[]((Json::Value *)&v566, "has_collision");
            Json::Value::Value((Json::Value *)&v426, 0);
            Json::Value::operator=(v107, (const Json::Value *)&v426);
            Json::Value::~Value((Json::Value *)&v426);
            sub_21E94B4((void **)&v425, "minecraft:physics");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v425) )
              v108 = Json::Value::operator[](v6, (const char **)&v425);
              Json::Value::operator=(v108, (const Json::Value *)&v566);
            v13 = (void *)(v425 - 12);
            if ( (int *)(v425 - 12) == &dword_28898C0 )
            v14 = (unsigned int *)(v425 - 4);
        goto LABEL_425;
      if ( _R6 != 8977 )
        if ( _R6 == 21262 )
          Json::Value::Value(&v469, 7);
          v86 = Json::Value::operator[]((Json::Value *)&v469, "priority");
          Json::Value::Value((Json::Value *)&v468, 6);
          Json::Value::operator=(v86, (const Json::Value *)&v468);
          Json::Value::~Value((Json::Value *)&v468);
          v87 = Json::Value::operator[]((Json::Value *)&v469, "target_distance");
          __asm
          {
            VMOV.F64        D0, #6.0
            VMOV            R2, R3, D0
          }
          Json::Value::Value((Json::Value *)&v467, v89, _R2);
          Json::Value::operator=(v87, (const Json::Value *)&v467);
          Json::Value::~Value((Json::Value *)&v467);
          v90 = Json::Value::operator[]((Json::Value *)&v469, "probability");
            VLDR            D0, =0.0199999996
          Json::Value::Value((Json::Value *)&v466, v92, _R2);
          Json::Value::operator=(v90, (const Json::Value *)&v466);
          Json::Value::~Value((Json::Value *)&v466);
          sub_21E94B4((void **)&v465, "minecraft:behavior.look_at_player");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v465) )
            v93 = Json::Value::operator[](v6, (const char **)&v465);
            Json::Value::operator=(v93, (const Json::Value *)&v469);
          v94 = (void *)(v465 - 12);
          if ( (int *)(v465 - 12) != &dword_28898C0 )
            v275 = (unsigned int *)(v465 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v276 = __ldrex(v275);
              while ( __strex(v276 - 1, v275) );
            else
              v276 = (*v275)--;
            if ( v276 <= 0 )
              j_j_j_j__ZdlPv_9(v94);
          if ( Json::Value::isMember(v6, "minecraft:navigation.walk") == 1 )
            v95 = (Json::Value *)Json::Value::operator[](v6, "minecraft:navigation.walk");
            v96 = Json::Value::operator[](v95, "avoid_damage_blocks");
            Json::Value::Value((Json::Value *)&v464, 1);
            Json::Value::operator=(v96, (const Json::Value *)&v464);
            Json::Value::~Value((Json::Value *)&v464);
          sub_21E94B4((void **)&v463, "minecraft:physics");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v463) )
            v97 = Json::Value::operator[](v6, (const char **)&v463);
            Json::Value::operator=(v97, (const Json::Value *)&v566);
          v98 = (void *)(v463 - 12);
          if ( (int *)(v463 - 12) != &dword_28898C0 )
            v277 = (unsigned int *)(v463 - 4);
                v278 = __ldrex(v277);
              while ( __strex(v278 - 1, v277) );
              v278 = (*v277)--;
            if ( v278 <= 0 )
              j_j_j_j__ZdlPv_9(v98);
          Json::Value::~Value((Json::Value *)&v469);
        return Json::Value::~Value((Json::Value *)&v566);
      goto LABEL_404;
    }
    if ( _R6 >= 312 )
      if ( _R6 > 782 )
        if ( _R6 == 783 )
          goto LABEL_404;
        if ( _R6 == 788 )
          goto LABEL_354;
        if ( _R6 == 789 )
          Json::Value::Value(&v424, 7);
          v75 = Json::Value::operator[]((Json::Value *)&v424, "value");
          Json::Value::Value((Json::Value *)&v423, 1);
          Json::Value::operator=(v75, (const Json::Value *)&v423);
          Json::Value::~Value((Json::Value *)&v423);
          sub_21E94B4((void **)&v422, "minecraft:hurt_when_wet");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v422) )
            v76 = Json::Value::operator[](v6, (const char **)&v422);
            Json::Value::operator=(v76, (const Json::Value *)&v424);
          v77 = (void *)(v422 - 12);
          if ( (int *)(v422 - 12) != &dword_28898C0 )
            v368 = (unsigned int *)(v422 - 4);
                v369 = __ldrex(v368);
              while ( __strex(v369 - 1, v368) );
              v369 = (*v368)--;
            if ( v369 <= 0 )
              j_j_j_j__ZdlPv_9(v77);
          Json::Value::Value(&v421, 7);
          v78 = Json::Value::operator[]((Json::Value *)&v421, "def");
          Json::Value::Value((Json::Value *)&v420, "minecraft:snowball");
          Json::Value::operator=(v78, (const Json::Value *)&v420);
          Json::Value::~Value((Json::Value *)&v420);
          sub_21E94B4((void **)&v419, "minecraft:shooter");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v419) )
            v79 = Json::Value::operator[](v6, (const char **)&v419);
            Json::Value::operator=(v79, (const Json::Value *)&v421);
          v80 = (void *)(v419 - 12);
          if ( (int *)(v419 - 12) != &dword_28898C0 )
            v376 = (unsigned int *)(v419 - 4);
                v377 = __ldrex(v376);
              while ( __strex(v377 - 1, v376) );
              v377 = (*v376)--;
            if ( v377 <= 0 )
              j_j_j_j__ZdlPv_9(v80);
          sub_21E94B4((void **)&v418, "minecraft:physics");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v418) )
            v81 = Json::Value::operator[](v6, (const char **)&v418);
            Json::Value::operator=(v81, (const Json::Value *)&v566);
          v82 = (void *)(v418 - 12);
          if ( (int *)(v418 - 12) != &dword_28898C0 )
            v380 = (unsigned int *)(v418 - 4);
                v381 = __ldrex(v380);
              while ( __strex(v381 - 1, v380) );
              v381 = (*v380)--;
            if ( v381 <= 0 )
              j_j_j_j__ZdlPv_9(v82);
          Json::Value::~Value((Json::Value *)&v421);
          Json::Value::~Value((Json::Value *)&v424);
      else
        _ZF = _R6 == 312;
        if ( _R6 != 312 )
          _ZF = _R6 == 318;
        if ( _ZF )
LABEL_415:
          sub_21E94B4((void **)&v519, "minecraft:physics");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v519) )
            v350 = Json::Value::operator[](v6, (const char **)&v519);
            Json::Value::operator=(v350, (const Json::Value *)&v566);
          v13 = (void *)(v519 - 12);
          if ( (int *)(v519 - 12) == &dword_28898C0 )
          v14 = (unsigned int *)(v519 - 4);
          if ( &pthread_create )
LABEL_424:
          v15 = (*v14)--;
          goto LABEL_425;
        if ( _R6 == 319 )
          Json::Value::Value(&v436, 7);
          v50 = Json::Value::operator[]((Json::Value *)&v436, "seat_count");
          Json::Value::Value((Json::Value *)&v435, 2);
          Json::Value::operator=(v50, (const Json::Value *)&v435);
          Json::Value::~Value((Json::Value *)&v435);
          v51 = Json::Value::operator[]((Json::Value *)&v436, "family_types");
          Json::Value::Value(&v434, 6);
          Json::Value::operator=(v51, (const Json::Value *)&v434);
          Json::Value::~Value((Json::Value *)&v434);
          v52 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v436, "family_types");
          Json::Value::Value((Json::Value *)&v433, "parrot_tame");
          Json::Value::append(v52, (const Json::Value *)&v433);
          Json::Value::~Value((Json::Value *)&v433);
          v53 = Json::Value::operator[]((Json::Value *)&v436, "pull_in_entities");
          Json::Value::Value((Json::Value *)&v432, 0);
          Json::Value::operator=(v53, (const Json::Value *)&v432);
          Json::Value::~Value((Json::Value *)&v432);
          sub_21E94B4((void **)&v431, "minecraft:rideable");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v431) )
            v54 = Json::Value::operator[](v6, (const char **)&v431);
            Json::Value::operator=(v54, (const Json::Value *)&v436);
          v55 = (void *)(v431 - 12);
          if ( (int *)(v431 - 12) != &dword_28898C0 )
            v253 = (unsigned int *)(v431 - 4);
                v254 = __ldrex(v253);
              while ( __strex(v254 - 1, v253) );
              v254 = (*v253)--;
            if ( v254 <= 0 )
              j_j_j_j__ZdlPv_9(v55);
          sub_21E94B4((void **)&v430, "minecraft:physics");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v430) )
            v56 = Json::Value::operator[](v6, (const char **)&v430);
            Json::Value::operator=(v56, (const Json::Value *)&v566);
          v57 = (void *)(v430 - 12);
          if ( (int *)(v430 - 12) != &dword_28898C0 )
            v255 = (unsigned int *)(v430 - 4);
                v256 = __ldrex(v255);
              while ( __strex(v256 - 1, v255) );
              v256 = (*v255)--;
            if ( v256 <= 0 )
              j_j_j_j__ZdlPv_9(v57);
          Json::Value::~Value((Json::Value *)&v436);
      return Json::Value::~Value((Json::Value *)&v566);
    v27 = _R6 - 65;
    if ( (unsigned int)(_R6 - 65) > 0x1E )
LABEL_154:
      v26 = 307;
      goto LABEL_155;
    if ( (1 << v27) & 0x1061 )
      goto LABEL_415;
    if ( v27 != 25 )
      if ( v27 == 30 )
LABEL_39:
        v28 = Json::Value::operator[]((Json::Value *)&v566, "has_collision");
        Json::Value::Value((Json::Value *)&v549, 0);
        Json::Value::operator=(v28, (const Json::Value *)&v549);
        Json::Value::~Value((Json::Value *)&v549);
        sub_21E94B4((void **)&v548, "minecraft:physics");
        if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v548) )
          v29 = Json::Value::operator[](v6, (const char **)&v548);
          Json::Value::operator=(v29, (const Json::Value *)&v566);
        v30 = (void *)(v548 - 12);
        if ( (int *)(v548 - 12) != &dword_28898C0 )
          v31 = (unsigned int *)(v548 - 4);
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
          else
            v32 = (*v31)--;
          if ( v32 <= 0 )
            j_j_j_j__ZdlPv_9(v30);
LABEL_354:
        if ( Json::Value::isMember(v6, "minecraft:behavior.random_stroll") == 1 )
          v281 = (Json::Value *)Json::Value::operator[](v6, "minecraft:behavior.random_stroll");
          if ( !Json::Value::isNull(v281) )
            v282 = (Json::Value *)Json::Value::operator[](v281, "xz_dist");
            if ( Json::Value::asInt(v282, 0) <= 0 )
              v283 = Json::Value::operator[](v281, "xz_dist");
              Json::Value::Value((Json::Value *)&v547, 16);
              Json::Value::operator=(v283, (const Json::Value *)&v547);
              Json::Value::~Value((Json::Value *)&v547);
LABEL_358:
        if ( Json::Value::isMember(v6, "minecraft:navigation.walk") == 1 )
          v284 = (Json::Value *)Json::Value::operator[](v6, "minecraft:navigation.walk");
          v285 = Json::Value::operator[](v284, "avoid_damage_blocks");
          Json::Value::Value((Json::Value *)&v546, 1);
          Json::Value::operator=(v285, (const Json::Value *)&v546);
          Json::Value::~Value((Json::Value *)&v546);
        if ( _R6 == 2849 )
LABEL_367:
          Json::Value::Value(&v544, 7);
          Json::Value::Value(&v543, 7);
          sub_21E94B4((void **)&v542, "minecraft:target_nearby_sensor");
          if ( !Json::Value::isNull((Json::Value *)&v544) && !Json::Value::isMember((int)&v544, (const char **)&v542) )
            v293 = Json::Value::operator[]((Json::Value *)&v544, (const char **)&v542);
            Json::Value::operator=(v293, (const Json::Value *)&v543);
          v294 = (void *)(v542 - 12);
          if ( (int *)(v542 - 12) != &dword_28898C0 )
            v352 = (unsigned int *)(v542 - 4);
                v353 = __ldrex(v352);
              while ( __strex(v353 - 1, v352) );
              v353 = (*v352)--;
            if ( v353 <= 0 )
              j_j_j_j__ZdlPv_9(v294);
          Json::Value::~Value((Json::Value *)&v543);
          Json::Value::Value(&v541, 7);
          Json::Value::Value(&v540, 6);
          LODWORD(v295) = &v540;
          Json::Value::resize(v295);
          v296 = Json::Value::operator[]((int)&v540, 0);
          v297 = Json::Value::operator[]((int)&v540, 1u);
            VLDR            D0, =0.0
          Json::Value::Value((Json::Value *)&v539, v299, _R2);
          v300 = (const Json::Value *)Json::Value::operator=(v297, (const Json::Value *)&v539);
          Json::Value::operator=(v296, v300);
          Json::Value::~Value((Json::Value *)&v539);
          v301 = Json::Value::operator[]((Json::Value *)&v541, "time");
          Json::Value::operator=(v301, (const Json::Value *)&v540);
          v302 = Json::Value::operator[]((Json::Value *)&v541, "looping");
          Json::Value::Value((Json::Value *)&v538, 0);
          Json::Value::operator=(v302, (const Json::Value *)&v538);
          Json::Value::~Value((Json::Value *)&v538);
          Json::Value::Value(&v537, 7);
          v303 = Json::Value::operator[]((Json::Value *)&v537, "event");
          Json::Value::Value((Json::Value *)&v536, "minecraft:start_exploding");
          Json::Value::operator=(v303, (const Json::Value *)&v536);
          Json::Value::~Value((Json::Value *)&v536);
          v304 = Json::Value::operator[]((Json::Value *)&v537, "target");
          Json::Value::Value((Json::Value *)&v535, "self");
          Json::Value::operator=(v304, (const Json::Value *)&v535);
          Json::Value::~Value((Json::Value *)&v535);
          sub_21E94B4((void **)&v534, "time_down_event");
          if ( !Json::Value::isNull((Json::Value *)&v541) && !Json::Value::isMember((int)&v541, (const char **)&v534) )
            v305 = Json::Value::operator[]((Json::Value *)&v541, (const char **)&v534);
            Json::Value::operator=(v305, (const Json::Value *)&v537);
          v306 = (void *)(v534 - 12);
          if ( (int *)(v534 - 12) != &dword_28898C0 )
            v354 = (unsigned int *)(v534 - 4);
                v355 = __ldrex(v354);
              while ( __strex(v355 - 1, v354) );
              v355 = (*v354)--;
            if ( v355 <= 0 )
              j_j_j_j__ZdlPv_9(v306);
          sub_21E94B4((void **)&v533, "minecraft:timer");
          if ( !Json::Value::isNull((Json::Value *)&v544) && !Json::Value::isMember((int)&v544, (const char **)&v533) )
            v307 = Json::Value::operator[]((Json::Value *)&v544, (const char **)&v533);
            Json::Value::operator=(v307, (const Json::Value *)&v541);
          v308 = (void *)(v533 - 12);
          if ( (int *)(v533 - 12) != &dword_28898C0 )
            v356 = (unsigned int *)(v533 - 4);
                v357 = __ldrex(v356);
              while ( __strex(v357 - 1, v356) );
              v357 = (*v356)--;
            if ( v357 <= 0 )
              j_j_j_j__ZdlPv_9(v308);
          v309 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
          v310 = (Json::Value *)Json::Value::operator[](v309, "component_groups");
          sub_21E94B4((void **)&v532, "minecraft:forced_exploding");
          if ( !Json::Value::isNull(v310) && !Json::Value::isMember((int)v310, (const char **)&v532) )
            v311 = Json::Value::operator[](v310, (const char **)&v532);
            Json::Value::operator=(v311, (const Json::Value *)&v544);
          v312 = (void *)(v532 - 12);
          if ( (int *)(v532 - 12) != &dword_28898C0 )
            v358 = (unsigned int *)(v532 - 4);
                v359 = __ldrex(v358);
              while ( __strex(v359 - 1, v358) );
              v359 = (*v358)--;
            if ( v359 <= 0 )
              j_j_j_j__ZdlPv_9(v312);
          v313 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
          v314 = (Json::Value *)Json::Value::operator[](v313, "events");
          Json::Value::Value(&v531, 7);
          sub_21E94B4((void **)&v530, "minecraft:start_exploding_forced");
          if ( !Json::Value::isNull(v314) && !Json::Value::isMember((int)v314, (const char **)&v530) )
            v315 = Json::Value::operator[](v314, (const char **)&v530);
            Json::Value::operator=(v315, (const Json::Value *)&v531);
          v316 = (void *)(v530 - 12);
          if ( (int *)(v530 - 12) != &dword_28898C0 )
            v360 = (unsigned int *)(v530 - 4);
                v361 = __ldrex(v360);
              while ( __strex(v361 - 1, v360) );
              v361 = (*v360)--;
            if ( v361 <= 0 )
              j_j_j_j__ZdlPv_9(v316);
          Json::Value::~Value((Json::Value *)&v531);
          v317 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
          v318 = (Json::Value *)Json::Value::operator[](v317, "events");
          v319 = (Json::Value *)Json::Value::operator[](v318, "minecraft:start_exploding_forced");
          Json::Value::Value(&v529, 7);
          sub_21E94B4((void **)&v528, "add");
          if ( !Json::Value::isNull(v319) && !Json::Value::isMember((int)v319, (const char **)&v528) )
            v320 = Json::Value::operator[](v319, (const char **)&v528);
            Json::Value::operator=(v320, (const Json::Value *)&v529);
          v321 = (void *)(v528 - 12);
          if ( (int *)(v528 - 12) != &dword_28898C0 )
            v362 = (unsigned int *)(v528 - 4);
                v363 = __ldrex(v362);
              while ( __strex(v363 - 1, v362) );
              v363 = (*v362)--;
            if ( v363 <= 0 )
              j_j_j_j__ZdlPv_9(v321);
          Json::Value::~Value((Json::Value *)&v529);
          v322 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
          v323 = (Json::Value *)Json::Value::operator[](v322, "events");
          v324 = (Json::Value *)Json::Value::operator[](v323, "minecraft:start_exploding_forced");
          v325 = (Json::Value *)Json::Value::operator[](v324, "add");
          Json::Value::Value(&v527, 6);
          sub_21E94B4((void **)&v526, "component_groups");
          if ( !Json::Value::isNull(v325) && !Json::Value::isMember((int)v325, (const char **)&v526) )
            v326 = Json::Value::operator[](v325, (const char **)&v526);
            Json::Value::operator=(v326, (const Json::Value *)&v527);
          v327 = (void *)(v526 - 12);
          if ( (int *)(v526 - 12) != &dword_28898C0 )
            v364 = (unsigned int *)(v526 - 4);
                v365 = __ldrex(v364);
              while ( __strex(v365 - 1, v364) );
              v365 = (*v364)--;
            if ( v365 <= 0 )
              j_j_j_j__ZdlPv_9(v327);
          Json::Value::~Value((Json::Value *)&v527);
          v328 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
          v329 = (Json::Value *)Json::Value::operator[](v328, "events");
          v330 = (Json::Value *)Json::Value::operator[](v329, "minecraft:start_exploding_forced");
          v331 = (Json::Value *)Json::Value::operator[](v330, "add");
          v332 = (Json::Value *)Json::Value::operator[](v331, "component_groups");
          Json::Value::Value((Json::Value *)&v525, "minecraft:forced_exploding");
          Json::Value::append(v332, (const Json::Value *)&v525);
          Json::Value::~Value((Json::Value *)&v525);
          v333 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
          v334 = (Json::Value *)Json::Value::operator[](v333, "components");
          if ( Json::Value::isMember(v334, "minecraft:interact") == 1 )
            v335 = (Json::Value *)Json::Value::operator[](v334, "minecraft:interact");
            if ( Json::Value::isMember(v335, "on_interact") == 1 )
              v336 = (Json::Value *)Json::Value::operator[](v334, "minecraft:interact");
              v337 = (Json::Value *)Json::Value::operator[](v336, "on_interact");
              if ( Json::Value::isMember(v337, "event") == 1 )
                v338 = (Json::Value *)Json::Value::operator[](v334, "minecraft:interact");
                v339 = (Json::Value *)Json::Value::operator[](v338, "on_interact");
                v340 = (Json::Value *)Json::Value::operator[](v339, "event");
                if ( !Json::Value::isNull(v340) )
                {
                  sub_21E94B4((void **)&v523, (const char *)&unk_257BC67);
                  Json::Value::asString(&v524, (int)v340, &v523);
                  v341 = sub_21E7D6C((const void **)&v524, "minecraft:start_exploding");
                  v342 = (void *)(v524 - 12);
                  if ( (int *)(v524 - 12) != &dword_28898C0 )
                  {
                    v410 = (unsigned int *)(v524 - 4);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v411 = __ldrex(v410);
                      while ( __strex(v411 - 1, v410) );
                    }
                    else
                      v411 = (*v410)--;
                    if ( v411 <= 0 )
                      j_j_j_j__ZdlPv_9(v342);
                  }
                  v343 = (void *)(v523 - 12);
                  if ( (int *)(v523 - 12) != &dword_28898C0 )
                    v412 = (unsigned int *)(v523 - 4);
                        v413 = __ldrex(v412);
                      while ( __strex(v413 - 1, v412) );
                      v413 = (*v412)--;
                    if ( v413 <= 0 )
                      j_j_j_j__ZdlPv_9(v343);
                  if ( !v341 )
                    Json::Value::Value((Json::Value *)&v522, "minecraft:start_exploding_forced");
                    Json::Value::operator=((int)v340, (const Json::Value *)&v522);
                    Json::Value::~Value((Json::Value *)&v522);
                }
          Json::Value::~Value((Json::Value *)&v537);
          Json::Value::~Value((Json::Value *)&v540);
          Json::Value::~Value((Json::Value *)&v541);
          Json::Value::~Value((Json::Value *)&v544);
        else if ( _R6 == 2854 )
LABEL_362:
          if ( Json::Value::isMember(v6, "minecraft:teleport") != 1 )
          v286 = (Json::Value *)Json::Value::operator[](v6, "minecraft:teleport");
          if ( Json::Value::isMember(v286, "lightTeleportChance") != 1 )
          v287 = (Json::Value *)Json::Value::operator[](v286, "lightTeleportChance");
          _R0 = Json::Value::asFloat(v287, 0.0);
            VMOV            S0, R0
            VLDR            S2, =-0.01
            VADD.F32        S0, S0, S2
            VLDR            S2, =1.1921e-7
            VABS.F32        S0, S0
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          if ( !(_NF ^ _VF) )
          v289 = Json::Value::operator[](v286, "lightTeleportChance");
            VLDR            D0, =0.0500000007
          Json::Value::Value((Json::Value *)&v545, v291, _R2);
          Json::Value::operator=(v289, (const Json::Value *)&v545);
          v292 = &v545;
          goto LABEL_414;
        goto LABEL_404;
      goto LABEL_154;
    goto LABEL_117;
  }
  if ( _R6 > 2118422 )
    if ( _R6 <= 4194371 )
      if ( (unsigned int)(_R6 - 2118423) < 3 )
        goto LABEL_354;
      if ( _R6 != 2186010 )
        v26 = 2186011;
        goto LABEL_155;
      Json::Value::Value(&v496, 7);
      sub_21E94B4((void **)&v495, "minecraft:behavior.player_ride_tamed");
      if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v495) )
        v205 = Json::Value::operator[](v6, (const char **)&v495);
        Json::Value::operator=(v205, (const Json::Value *)&v496);
      v206 = (void *)(v495 - 12);
      if ( (int *)(v495 - 12) != &dword_28898C0 )
        v366 = (unsigned int *)(v495 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v367 = __ldrex(v366);
          while ( __strex(v367 - 1, v366) );
        else
          v367 = (*v366)--;
        if ( v367 <= 0 )
          j_j_j_j__ZdlPv_9(v206);
      Json::Value::~Value((Json::Value *)&v496);
      Json::Value::Value(&v494, 7);
      sub_21E94B4((void **)&v493, "minecraft:behavior.can_power_jump");
      if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v493) )
        v207 = Json::Value::operator[](v6, (const char **)&v493);
        Json::Value::operator=(v207, (const Json::Value *)&v494);
      v208 = (void *)(v493 - 12);
      if ( (int *)(v493 - 12) != &dword_28898C0 )
        v370 = (unsigned int *)(v493 - 4);
            v371 = __ldrex(v370);
          while ( __strex(v371 - 1, v370) );
          v371 = (*v370)--;
        if ( v371 <= 0 )
          j_j_j_j__ZdlPv_9(v208);
      Json::Value::~Value((Json::Value *)&v494);
      Json::Value::Value(&v492, 7);
      sub_21E94B4((void **)&v491, "minecraft:behavior.input_ground_controlled");
      if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v491) )
        v209 = Json::Value::operator[](v6, (const char **)&v491);
        Json::Value::operator=(v209, (const Json::Value *)&v492);
      v210 = (void *)(v491 - 12);
      if ( (int *)(v491 - 12) != &dword_28898C0 )
        v372 = (unsigned int *)(v491 - 4);
            v373 = __ldrex(v372);
          while ( __strex(v373 - 1, v372) );
          v373 = (*v372)--;
        if ( v373 <= 0 )
          j_j_j_j__ZdlPv_9(v210);
      Json::Value::~Value((Json::Value *)&v492);
      Json::Value::Value(&v490, 7);
      sub_21E94B4((void **)&v489, "minecraft:behavior.is_tamed");
      if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v489) )
        v211 = Json::Value::operator[](v6, (const char **)&v489);
        Json::Value::operator=(v211, (const Json::Value *)&v490);
      v212 = (void *)(v489 - 12);
      if ( (int *)(v489 - 12) != &dword_28898C0 )
        v378 = (unsigned int *)(v489 - 4);
            v379 = __ldrex(v378);
          while ( __strex(v379 - 1, v378) );
          v379 = (*v378)--;
        if ( v379 <= 0 )
          j_j_j_j__ZdlPv_9(v212);
      Json::Value::~Value((Json::Value *)&v490);
      sub_21E94B4((void **)&v488, "minecraft:physics");
      if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v488) )
        v213 = Json::Value::operator[](v6, (const char **)&v488);
        Json::Value::operator=(v213, (const Json::Value *)&v566);
      v13 = (void *)(v488 - 12);
      if ( (int *)(v488 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v488 - 4);
        if ( !&pthread_create )
          goto LABEL_424;
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
    else
      switch ( _R6 )
        case 4194384:
          if ( Json::Value::isMember(v6, "minecraft:projectile") == 1 )
            v16 = (Json::Value *)Json::Value::operator[](v6, "minecraft:projectile");
            v17 = (Json::Value *)Json::Value::operator[](v16, "onHit");
            v18 = (Json::Value *)Json::Value::operator[](v17, "stick_in_ground");
            v19 = Json::Value::operator[](v18, "shake_time");
              VLDR            D0, =0.349999994
            Json::Value::Value((Json::Value *)&v415, v24, _R2);
            Json::Value::operator=(v19, (const Json::Value *)&v415);
            Json::Value::~Value((Json::Value *)&v415);
          sub_21E94B4((void **)&v414, "minecraft:physics");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v414) )
            v25 = Json::Value::operator[](v6, (const char **)&v414);
            Json::Value::operator=(v25, (const Json::Value *)&v566);
          v13 = (void *)(v414 - 12);
          if ( (int *)(v414 - 12) == &dword_28898C0 )
          v14 = (unsigned int *)(v414 - 4);
          if ( !&pthread_create )
            goto LABEL_424;
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        case 4194380:
          goto LABEL_39;
        case 4194372:
        case 4194383:
        case 4194385:
        case 4194386:
        case 4194389:
        case 4194390:
        case 4194391:
        case 4194393:
        case 4194395:
        case 4194398:
        case 4194405:
        case 4194406:
          goto LABEL_415;
        default:
          return Json::Value::~Value((Json::Value *)&v566);
    return Json::Value::~Value((Json::Value *)&v566);
  v26 = 264999;
  if ( _R6 > 264999 )
    if ( _R6 > 524383 )
      if ( (unsigned int)(_R6 - 524384) < 3 )
      if ( (unsigned int)(_R6 - 1116962) > 0xE || !((1 << (_R6 - 34)) & 0x5001) )
    if ( _R6 == 265000 )
    if ( _R6 == 265015 )
LABEL_404:
      if ( (unsigned int)(_R6 - 2865) > 1 )
      v344 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
      v345 = (Json::Value *)Json::Value::operator[](v344, "components");
      if ( Json::Value::isMember(v345, "minecraft:attack") != 1 )
      v346 = (Json::Value *)Json::Value::operator[](v345, "minecraft:attack");
      if ( Json::Value::isMember(v346, "damage") != 1 )
      v347 = (Json::Value *)Json::Value::operator[](v345, "minecraft:attack");
      v348 = (Json::Value *)Json::Value::operator[](v347, "damage");
      if ( Json::Value::isNull(v348) )
      if ( _R6 == 2866 )
        if ( Json::Value::asInt64(v348, v349, 0LL) != 8 )
        Json::Value::Value((Json::Value *)&v520, 5);
        Json::Value::operator=((int)v348, (const Json::Value *)&v520);
        v292 = &v520;
        if ( _R6 != 2865 || Json::Value::asInt64(v348, v349, 0LL) != 6 )
        Json::Value::Value((Json::Value *)&v521, 5);
        Json::Value::operator=((int)v348, (const Json::Value *)&v521);
        v292 = &v521;
LABEL_414:
      Json::Value::~Value((Json::Value *)v292);
    if ( _R6 != 524372 )
LABEL_117:
    if ( Json::Value::isMember(v6, "minecraft:rideable") == 1 )
      v83 = (Json::Value *)Json::Value::operator[](v6, "minecraft:rideable");
      v84 = Json::Value::operator[](v83, "pull_in_entities");
      Json::Value::Value((Json::Value *)&v417, 1);
      Json::Value::operator=(v84, (const Json::Value *)&v417);
      Json::Value::~Value((Json::Value *)&v417);
    sub_21E94B4((void **)&v416, "minecraft:physics");
    if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v416) )
      v85 = Json::Value::operator[](v6, (const char **)&v416);
      Json::Value::operator=(v85, (const Json::Value *)&v566);
    v13 = (void *)(v416 - 12);
    if ( (int *)(v416 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v416 - 4);
      if ( !&pthread_create )
        goto LABEL_424;
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      goto LABEL_425;
  if ( _R6 <= 199455 )
    if ( _R6 > 68387 )
      if ( _R6 == 68388 )
      if ( _R6 == 68404 )
        if ( Json::Value::isMember(v6, "minecraft:movement.basic") == 1 )
          v99 = (Json::Value *)Json::Value::operator[](v6, "minecraft:movement.basic");
          v100 = Json::Value::operator[](v99, "max_turn");
            VLDR            D0, =180.0
          Json::Value::Value((Json::Value *)&v518, v102, _R2);
          Json::Value::operator=(v100, (const Json::Value *)&v518);
          Json::Value::~Value((Json::Value *)&v518);
        sub_21E94B4((void **)&v517, "minecraft:physics");
        if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v517) )
          v103 = Json::Value::operator[](v6, (const char **)&v517);
          Json::Value::operator=(v103, (const Json::Value *)&v566);
        v13 = (void *)(v517 - 12);
        if ( (int *)(v517 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v517 - 4);
    else if ( _R6 == 21270 )
      Json::Value::Value(&v563, 7);
      v143 = Json::Value::operator[]((Json::Value *)&v563, "value");
      Json::Value::Value((Json::Value *)&v562, 10);
      Json::Value::operator=(v143, (const Json::Value *)&v562);
      Json::Value::~Value((Json::Value *)&v562);
      v144 = Json::Value::operator[]((Json::Value *)&v563, "max");
      Json::Value::Value((Json::Value *)&v561, 10);
      Json::Value::operator=(v144, (const Json::Value *)&v561);
      Json::Value::~Value((Json::Value *)&v561);
      v145 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
      v146 = (Json::Value *)Json::Value::operator[](v145, "component_groups");
      v147 = (Json::Value *)Json::Value::operator[](v146, "minecraft:ocelot_wild");
      sub_21E94B4((void **)&v560, "minecraft:health");
      if ( !Json::Value::isNull(v147) && !Json::Value::isMember((int)v147, (const char **)&v560) )
        v148 = Json::Value::operator[](v147, (const char **)&v560);
        Json::Value::operator=(v148, (const Json::Value *)&v563);
      v149 = (void *)(v560 - 12);
      if ( (int *)(v560 - 12) != &dword_28898C0 )
        v374 = (unsigned int *)(v560 - 4);
            v375 = __ldrex(v374);
          while ( __strex(v375 - 1, v374) );
          v375 = (*v374)--;
        if ( v375 <= 0 )
          j_j_j_j__ZdlPv_9(v149);
      v150 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
      v151 = (Json::Value *)Json::Value::operator[](v150, "events");
      Json::Value::Value(&v559, 7);
      sub_21E94B4((void **)&v558, "minecraft:become_aggressive");
      if ( !Json::Value::isNull(v151) && !Json::Value::isMember((int)v151, (const char **)&v558) )
        v152 = Json::Value::operator[](v151, (const char **)&v558);
        Json::Value::operator=(v152, (const Json::Value *)&v559);
      v153 = (void *)(v558 - 12);
      if ( (int *)(v558 - 12) != &dword_28898C0 )
        v382 = (unsigned int *)(v558 - 4);
            v383 = __ldrex(v382);
          while ( __strex(v383 - 1, v382) );
          v383 = (*v382)--;
        if ( v383 <= 0 )
          j_j_j_j__ZdlPv_9(v153);
      Json::Value::~Value((Json::Value *)&v559);
      v154 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
      v155 = (Json::Value *)Json::Value::operator[](v154, "events");
      v156 = (Json::Value *)Json::Value::operator[](v155, "minecraft:entity_born_wild");
      Json::Value::Value(&v557, 7);
      sub_21E94B4((void **)&v556, "add");
      if ( !Json::Value::isNull(v156) && !Json::Value::isMember((int)v156, (const char **)&v556) )
        v157 = Json::Value::operator[](v156, (const char **)&v556);
        Json::Value::operator=(v157, (const Json::Value *)&v557);
      v158 = (void *)(v556 - 12);
      if ( (int *)(v556 - 12) != &dword_28898C0 )
        v384 = (unsigned int *)(v556 - 4);
            v385 = __ldrex(v384);
          while ( __strex(v385 - 1, v384) );
          v385 = (*v384)--;
        if ( v385 <= 0 )
          j_j_j_j__ZdlPv_9(v158);
      Json::Value::~Value((Json::Value *)&v557);
      v159 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
      v160 = (Json::Value *)Json::Value::operator[](v159, "events");
      v161 = (Json::Value *)Json::Value::operator[](v160, "minecraft:entity_born_wild");
      v162 = (Json::Value *)Json::Value::operator[](v161, "add");
      Json::Value::Value(&v555, 6);
      sub_21E94B4((void **)&v554, "component_groups");
      if ( !Json::Value::isNull(v162) && !Json::Value::isMember((int)v162, (const char **)&v554) )
        v163 = Json::Value::operator[](v162, (const char **)&v554);
        Json::Value::operator=(v163, (const Json::Value *)&v555);
      v164 = (void *)(v554 - 12);
      if ( (int *)(v554 - 12) != &dword_28898C0 )
        v386 = (unsigned int *)(v554 - 4);
            v387 = __ldrex(v386);
          while ( __strex(v387 - 1, v386) );
          v387 = (*v386)--;
        if ( v387 <= 0 )
          j_j_j_j__ZdlPv_9(v164);
      Json::Value::~Value((Json::Value *)&v555);
      v165 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
      v166 = (Json::Value *)Json::Value::operator[](v165, "events");
      v167 = (Json::Value *)Json::Value::operator[](v166, "minecraft:entity_born_wild");
      v168 = (Json::Value *)Json::Value::operator[](v167, "add");
      v169 = (Json::Value *)Json::Value::operator[](v168, "component_groups");
      Json::Value::Value((Json::Value *)&v553, "minecraft:ocelot_baby");
      Json::Value::append(v169, (const Json::Value *)&v553);
      Json::Value::~Value((Json::Value *)&v553);
      v170 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
      v171 = (Json::Value *)Json::Value::operator[](v170, "events");
      v172 = (Json::Value *)Json::Value::operator[](v171, "minecraft:entity_born_wild");
      v173 = (Json::Value *)Json::Value::operator[](v172, "add");
      v174 = (Json::Value *)Json::Value::operator[](v173, "component_groups");
      Json::Value::Value((Json::Value *)&v552, "minecraft:ocelot_wild");
      Json::Value::append(v174, (const Json::Value *)&v552);
      Json::Value::~Value((Json::Value *)&v552);
      v175 = (Json::Value *)Json::Value::operator[](v6, "minecraft:navigation.walk");
      v176 = Json::Value::operator[](v175, "avoid_damage_blocks");
      Json::Value::Value((Json::Value *)&v551, 1);
      Json::Value::operator=(v176, (const Json::Value *)&v551);
      Json::Value::~Value((Json::Value *)&v551);
      sub_21E94B4((void **)&v550, "minecraft:physics");
      if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v550) )
        v177 = Json::Value::operator[](v6, (const char **)&v550);
        Json::Value::operator=(v177, (const Json::Value *)&v566);
      v178 = (void *)(v550 - 12);
      if ( (int *)(v550 - 12) != &dword_28898C0 )
        v392 = (unsigned int *)(v550 - 4);
            v393 = __ldrex(v392);
          while ( __strex(v393 - 1, v392) );
          v393 = (*v392)--;
        if ( v393 <= 0 )
          j_j_j_j__ZdlPv_9(v178);
      Json::Value::~Value((Json::Value *)&v563);
    else if ( _R6 == 33043 )
      if ( Json::Value::isMember(v6, "minecraft:behavior.float_wander") == 1 )
        v58 = (Json::Value *)Json::Value::operator[](v6, "minecraft:behavior.float_wander");
        v59 = Json::Value::operator[](v58, "float_duration");
        Json::Value::Value(&v454, 6);
        Json::Value::operator=(v59, (const Json::Value *)&v454);
        Json::Value::~Value((Json::Value *)&v454);
        v60 = (Json::Value *)Json::Value::operator[](v6, "minecraft:behavior.float_wander");
        LODWORD(v61) = Json::Value::operator[](v60, "float_duration");
        Json::Value::resize(v61);
        v62 = (Json::Value *)Json::Value::operator[](v6, "minecraft:behavior.float_wander");
        v63 = Json::Value::operator[](v62, "float_duration");
        v64 = Json::Value::operator[](v63, 0);
        __asm
          VLDR            D0, =0.100000001
          VMOV            R2, R3, D0
        Json::Value::Value((Json::Value *)&v453, v66, _R2);
        Json::Value::operator=(v64, (const Json::Value *)&v453);
        Json::Value::~Value((Json::Value *)&v453);
        v67 = (Json::Value *)Json::Value::operator[](v6, "minecraft:behavior.float_wander");
        v68 = Json::Value::operator[](v67, "float_duration");
        v69 = Json::Value::operator[](v68, 1u);
          VLDR            D0, =0.349999994
        Json::Value::Value((Json::Value *)&v452, v71, _R2);
        Json::Value::operator=(v69, (const Json::Value *)&v452);
        Json::Value::~Value((Json::Value *)&v452);
        v72 = (Json::Value *)Json::Value::operator[](v6, "minecraft:behavior.float_wander");
        v73 = Json::Value::operator[](v72, "random_reselect");
        Json::Value::Value((Json::Value *)&v451, 1);
        Json::Value::operator=(v73, (const Json::Value *)&v451);
        Json::Value::~Value((Json::Value *)&v451);
      sub_21E94B4((void **)&v450, "minecraft:physics");
      if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v450) )
        v74 = Json::Value::operator[](v6, (const char **)&v450);
        Json::Value::operator=(v74, (const Json::Value *)&v566);
      v13 = (void *)(v450 - 12);
      if ( (int *)(v450 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v450 - 4);
LABEL_425:
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
  else
    if ( _R6 > 199470 )
      if ( _R6 == 199471 )
      if ( _R6 == 264995 )
LABEL_155:
      if ( _R6 != v26 )
    if ( _R6 != 199456 )
      v26 = 199468;
    Json::Value::Value(&v487, 7);
    v179 = Json::Value::operator[]((Json::Value *)&v487, "seat_count");
    Json::Value::Value((Json::Value *)&v486, 1);
    Json::Value::operator=(v179, (const Json::Value *)&v486);
    Json::Value::~Value((Json::Value *)&v486);
    v180 = Json::Value::operator[]((Json::Value *)&v487, "family_types");
    Json::Value::Value(&v485, 6);
    Json::Value::operator=(v180, (const Json::Value *)&v485);
    Json::Value::~Value((Json::Value *)&v485);
    v181 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v487, "family_types");
    Json::Value::Value((Json::Value *)&v484, "zombie");
    Json::Value::append(v181, (const Json::Value *)&v484);
    Json::Value::~Value((Json::Value *)&v484);
    Json::Value::Value(&v483, 7);
    v182 = Json::Value::operator[]((Json::Value *)&v483, "position");
    Json::Value::Value(&v482, 6);
    Json::Value::operator=(v182, (const Json::Value *)&v482);
    Json::Value::~Value((Json::Value *)&v482);
    LODWORD(v183) = Json::Value::operator[]((Json::Value *)&v483, "position");
    Json::Value::resize(v183);
    v184 = Json::Value::operator[]((Json::Value *)&v483, "position");
    v185 = Json::Value::operator[](v184, 0);
    __asm
      VLDR            D0, =0.0
      VMOV            R2, R3, D0
    Json::Value::Value((Json::Value *)&v481, v187, _R2);
    Json::Value::operator=(v185, (const Json::Value *)&v481);
    Json::Value::~Value((Json::Value *)&v481);
    v188 = Json::Value::operator[]((Json::Value *)&v483, "position");
    v189 = Json::Value::operator[](v188, 1u);
      VLDR            D0, =1.10000002
    Json::Value::Value((Json::Value *)&v480, v191, _R2);
    Json::Value::operator=(v189, (const Json::Value *)&v480);
    Json::Value::~Value((Json::Value *)&v480);
    v192 = Json::Value::operator[]((Json::Value *)&v483, "position");
    v193 = Json::Value::operator[](v192, 2u);
      VLDR            D0, =-0.349999994
    Json::Value::Value((Json::Value *)&v479, v195, _R2);
    Json::Value::operator=(v193, (const Json::Value *)&v479);
    Json::Value::~Value((Json::Value *)&v479);
    v196 = Json::Value::operator[]((Json::Value *)&v483, "lock_rider_rotation");
    Json::Value::Value((Json::Value *)&v478, 0);
    Json::Value::operator=(v196, (const Json::Value *)&v478);
    Json::Value::~Value((Json::Value *)&v478);
    v197 = Json::Value::operator[]((Json::Value *)&v487, "seats");
    Json::Value::operator=(v197, (const Json::Value *)&v483);
    v198 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
    v199 = (Json::Value *)Json::Value::operator[](v198, "component_groups");
    v200 = (Json::Value *)Json::Value::operator[](v199, "minecraft:zombie_adult");
    sub_21E94B4((void **)&v477, "minecraft:rideable");
    if ( !Json::Value::isNull(v200) && !Json::Value::isMember((int)v200, (const char **)&v477) )
      v201 = Json::Value::operator[](v200, (const char **)&v477);
      Json::Value::operator=(v201, (const Json::Value *)&v487);
    v202 = (void *)(v477 - 12);
    if ( (int *)(v477 - 12) != &dword_28898C0 )
      v388 = (unsigned int *)(v477 - 4);
      if ( &pthread_create )
          v389 = __ldrex(v388);
        while ( __strex(v389 - 1, v388) );
        v389 = (*v388)--;
      if ( v389 <= 0 )
        j_j_j_j__ZdlPv_9(v202);
    sub_21E94B4((void **)&v476, "minecraft:physics");
    if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v476) )
      v203 = Json::Value::operator[](v6, (const char **)&v476);
      Json::Value::operator=(v203, (const Json::Value *)&v566);
    v204 = (void *)(v476 - 12);
    if ( (int *)(v476 - 12) != &dword_28898C0 )
      v390 = (unsigned int *)(v476 - 4);
          v391 = __ldrex(v390);
        while ( __strex(v391 - 1, v390) );
        v391 = (*v390)--;
      if ( v391 <= 0 )
        j_j_j_j__ZdlPv_9(v204);
    Json::Value::~Value((Json::Value *)&v483);
    Json::Value::~Value((Json::Value *)&v487);
  return Json::Value::~Value((Json::Value *)&v566);
}


Json::Value *__fastcall EntityDefinitionGroup::_upgradePatchPack(int a1, signed int a2, Json::Value *a3)
{
  int v3; // r9@1
  Json::Value *v4; // r10@1
  signed int v5; // r8@1
  Parser *v6; // r6@1
  Json::Value *v7; // r0@1
  Json::Value *result; // r0@1
  Json::Value *v9; // r0@3
  Json::Value *v10; // r0@3
  const char *v11; // r7@3
  int v12; // r0@5
  int v13; // r1@5
  Json::Value *v14; // r0@5
  int v15; // r1@6
  const GameVersion *v16; // [sp+0h] [bp-38h]@0
  char v17; // [sp+8h] [bp-30h]@6
  char v18; // [sp+18h] [bp-20h]@4
  char v19; // [sp+28h] [bp-10h]@1
  char v20; // [sp+38h] [bp+0h]@1
  char v21; // [sp+48h] [bp+10h]@2

  v3 = a1;
  v4 = a3;
  v5 = a2;
  GameVersion::GameVersion((int)&v20);
  v6 = (Parser *)Json::Value::operator[](v4, "minecraft:entity");
  GameVersion::GameVersion((int)&v19);
  Parser::parse(v6, (const Json::Value *)&v20, (GameVersion *)"format_version", &v19, v16);
  v7 = (Json::Value *)Json::Value::operator[]((int)v4, "minecraft:entity");
  result = (Json::Value *)Json::Value::isMember(v7, "do_not_upgrade");
  if ( result != (Json::Value *)1 )
  {
    GameVersion::current((GameVersion *)&v21);
    result = (Json::Value *)GameVersion::operator<((int)&v20, (int)&v21);
    if ( result == (Json::Value *)1 )
    {
      v9 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
      v10 = (Json::Value *)Json::Value::operator[](v9, "components");
      v11 = (const char *)v10;
      result = (Json::Value *)Json::Value::isNull(v10);
      if ( !result )
      {
        GameVersion::GameVersion((GameVersion *)&v18, 1u, 1u, 0, 0);
        if ( GameVersion::operator<((int)&v20, (int)&v18) == 1 )
        {
          EntityDefinitionGroup::_removePre11Components(v3, v4, v11, v5);
          EntityDefinitionGroup::_removePre12Components(v12, v13, v11);
          v14 = EntityDefinitionGroup::_upgradeTo11Entity(v3, v4, (Json::Value *)v11, v5);
        }
        else
          GameVersion::GameVersion((GameVersion *)&v17, 1u, 2u, 0, 0);
          result = (Json::Value *)GameVersion::operator<((int)&v20, (int)&v17);
          if ( result != (Json::Value *)1 )
            return result;
          EntityDefinitionGroup::_removePre12Components(1, v15, v11);
        result = EntityDefinitionGroup::_upgradeTo12Entity((int)v14, v4, (Json::Value *)v11, v5);
      }
    }
  }
  return result;
}


void __fastcall EntityDefinitionGroup::_getResources(EntityDefinitionGroup *this)
{
  EntityDefinitionGroup::_getResources(this);
}


void __fastcall EntityDefinitionGroup::_removePre11Components(int a1, Json::Value *a2, const char *a3, signed int a4)
{
  EntityDefinitionGroup::_removePre11Components(a1, a2, a3, a4);
}


int __fastcall EntityDefinitionGroup::EntityDefinitionGroup(double a1, int a2)
{
  int v2; // r4@1
  int v3; // r8@1
  int v4; // r9@1
  double v5; // r0@1
  int v6; // r6@3
  void *v7; // r5@3
  double v8; // r0@4
  int v9; // r7@6
  void *v10; // r6@6
  unsigned int v11; // r0@7
  int v12; // r7@9
  void *v13; // r6@9

  v2 = LODWORD(a1);
  v3 = a2;
  v4 = HIDWORD(a1);
  *(_DWORD *)LODWORD(a1) = &off_26F1548;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 20) = 1065353216;
  LODWORD(a1) += 20;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v5 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(a1)));
  *(_DWORD *)(v2 + 8) = LODWORD(v5);
  if ( LODWORD(v5) == 1 )
  {
    *(_DWORD *)(v2 + 28) = 0;
    v7 = (void *)(v2 + 28);
  }
  else
    if ( LODWORD(v5) >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * LODWORD(v5);
    v7 = operator new(4 * LODWORD(v5));
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)(v2 + 4) = v7;
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 48) = 1065353216;
  *(_DWORD *)(v2 + 52) = 0;
  LODWORD(v5) = v2 + 48;
  v8 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v5)));
  *(_DWORD *)(v2 + 36) = LODWORD(v8);
  if ( LODWORD(v8) == 1 )
    *(_DWORD *)(v2 + 56) = 0;
    v10 = (void *)(v2 + 56);
    if ( LODWORD(v8) >= 0x40000000 )
    v9 = 4 * LODWORD(v8);
    v10 = operator new(4 * LODWORD(v8));
    _aeabi_memclr4(v10, v9);
  *(_DWORD *)(v2 + 32) = v10;
  *(_DWORD *)(v2 + 68) = 0;
  *(_DWORD *)(v2 + 72) = 0;
  *(_DWORD *)(v2 + 76) = 1065353216;
  LODWORD(v8) = v2 + 76;
  *(_DWORD *)(LODWORD(v8) + 4) = 0;
  v11 = sub_21E6254(v8);
  *(_DWORD *)(v2 + 64) = v11;
  if ( v11 == 1 )
    *(_DWORD *)(v2 + 84) = 0;
    v13 = (void *)(v2 + 84);
    if ( v11 >= 0x40000000 )
    v12 = 4 * v11;
    v13 = operator new(4 * v11);
    _aeabi_memclr4(v13, v12);
  *(_DWORD *)(v2 + 60) = v13;
  *(_DWORD *)(v2 + 88) = v4;
  *(_DWORD *)(v2 + 92) = 0;
  *(_DWORD *)(v2 + 96) = v3;
  EntityDefinitionGroup::_getResources((EntityDefinitionGroup *)v2);
  return v2;
}


EntityDefinitionPtr *__fastcall EntityDefinitionGroup::tryGetDefinitionGroup(EntityDefinitionPtr *a1, int a2, int **a3, int **a4)
{
  EntityDefinitionGroup *v4; // r5@1
  EntityDefinitionPtr *v5; // r4@1
  int **v6; // r6@1
  int v7; // r0@1
  int v8; // r0@2
  int *v10; // r0@4

  v4 = (EntityDefinitionGroup *)a2;
  v5 = a1;
  v6 = a4;
  v7 = std::_Hashtable<std::string,std::pair<std::string const,EntityDefinitionGroup::EDLWrapper>,std::allocator<std::pair<std::string const,EntityDefinitionGroup::EDLWrapper>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a2 + 60),
         a3);
  if ( v7 )
  {
    v8 = std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<EntityDefinition,std::default_delete<EntityDefinition>>>,std::allocator<std::pair<std::string const,std::unique_ptr<EntityDefinition,std::default_delete<EntityDefinition>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
           (unsigned __int64 *)(v7 + 8),
           v6);
    if ( v8 )
      return EntityDefinitionPtr::EntityDefinitionPtr(v5, v4, *(_DWORD *)(v8 + 8));
    v10 = (int *)&EntityDefinitionPtr::NONE;
  }
  else
  return EntityDefinitionPtr::EntityDefinitionPtr(v5, *v10);
}


void __fastcall EntityDefinitionGroup::~EntityDefinitionGroup(EntityDefinitionGroup *this)
{
  EntityDefinitionGroup::~EntityDefinitionGroup(this);
}


void __fastcall EntityDefinitionGroup::_removePre12Components(int a1, int a2, const char *a3)
{
  EntityDefinitionGroup::_removePre12Components(a1, a2, a3);
}


void __fastcall EntityDefinitionGroup::_loadTemplates(int a1, int **a2, Json::Value *a3)
{
  Json::Value *v3; // r5@1
  int v4; // r7@1
  int **v5; // r6@1
  void *v6; // r0@2
  int *v7; // r4@4
  int *v8; // r8@4
  JsonUtil::ScopeMarker *v9; // r0@5
  JsonUtil::ScopeMarker *v10; // r9@6
  double v11; // r0@6
  int v12; // r10@6
  double v13; // r0@6
  const Json::Value *v14; // r0@6
  int v15; // r0@6
  EntityDefinition **v16; // r0@6
  _DWORD *v17; // r1@6
  EntityDefinition *v18; // r0@6
  EntityDefinition *v19; // r0@7
  int *v20; // r6@9
  unsigned int *v21; // r2@11
  signed int v22; // r1@13
  unsigned int *v23; // r2@15
  signed int v24; // r1@17
  int *v25; // r0@23
  char v26; // [sp+18h] [bp-240h]@6
  char v27; // [sp+28h] [bp-230h]@6
  int v28; // [sp+48h] [bp-210h]@6
  int v29; // [sp+4Ch] [bp-20Ch]@6
  int v30; // [sp+58h] [bp-200h]@6
  int v31; // [sp+64h] [bp-1F4h]@6
  int v32; // [sp+80h] [bp-1D8h]@6
  char v33; // [sp+218h] [bp-40h]@5
  int *v34; // [sp+21Ch] [bp-3Ch]@4
  int *v35; // [sp+220h] [bp-38h]@4
  int v36; // [sp+22Ch] [bp-2Ch]@2

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( Json::Value::isNull(a3) == 1 )
  {
    sub_21E94B4((void **)&v36, "Entity has no component groups.");
    JsonUtil::debugMessage(&v36);
    v6 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
    {
      v21 = (unsigned int *)(v36 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
  }
  else
    Json::Value::getMemberNames((Json::Value *)&v34, (int)v3);
    v8 = v35;
    v7 = v34;
    if ( v34 != v35 )
      v9 = (JsonUtil::ScopeMarker *)&v33;
      do
        v10 = (JsonUtil::ScopeMarker *)JsonUtil::ScopeMarker::ScopeMarker(v9, v7);
        LODWORD(v11) = operator new(0xC9Cu);
        v12 = LODWORD(v11);
        v13 = COERCE_DOUBLE(__PAIR__((unsigned int)v7, EntityDefinition::EntityDefinition(v11)));
        LODWORD(v13) = &v27;
        EntityDefinitionDescriptor::EntityDefinitionDescriptor(v13);
        v14 = (const Json::Value *)Json::Value::operator[](v3, (const char **)v7);
        Json::Value::Value((Json::Value *)&v26, v14);
        EntityDefinition::parse(v12, (int)&v26, (int)&v27);
        Json::Value::~Value((Json::Value *)&v26);
        std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::operator=(
          (unsigned __int64 *)v12,
          (int)&v27);
        EntityInteraction::setInteractText((int *)(v12 + 32), &v28);
        std::vector<GoalDefinition,std::allocator<GoalDefinition>>::operator=(v12 + 36, (unsigned __int64 *)&v29);
        std::vector<EntityDefinitionAttribute,std::allocator<EntityDefinitionAttribute>>::operator=(
          v12 + 48,
          (unsigned __int64 *)&v30);
        std::_Hashtable<std::string,std::pair<std::string const,DefinitionEvent>,std::allocator<std::pair<std::string const,DefinitionEvent>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::operator=(
          (unsigned __int64 *)(v12 + 60),
          (int)&v31);
        _aeabi_memcpy4(v12 + 88, &v32, 404);
        v15 = std::__detail::_Map_base<std::string,std::pair<std::string const,EntityDefinitionGroup::EDLWrapper>,std::allocator<std::pair<std::string const,EntityDefinitionGroup::EDLWrapper>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                v4 + 60,
                v5);
        v16 = (EntityDefinition **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<EntityDefinition,std::default_delete<EntityDefinition>>>,std::allocator<std::pair<std::string const,std::unique_ptr<EntityDefinition,std::default_delete<EntityDefinition>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                     v15,
                                     (int **)v7);
        v17 = v16;
        v18 = *v16;
        *v17 = v12;
        if ( v18 )
        {
          v19 = EntityDefinition::~EntityDefinition(v18);
          operator delete((void *)v19);
        }
        EntityDefinitionDescriptor::~EntityDefinitionDescriptor((EntityDefinitionDescriptor *)&v27);
        v9 = JsonUtil::ScopeMarker::~ScopeMarker(v10);
        ++v7;
      while ( v8 != v7 );
      v7 = v35;
      v20 = v34;
      if ( v34 != v35 )
          v25 = (int *)(*v20 - 12);
          if ( v25 != &dword_28898C0 )
          {
            v23 = (unsigned int *)(*v20 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v24 = __ldrex(v23);
              while ( __strex(v24 - 1, v23) );
            }
            else
              v24 = (*v23)--;
            if ( v24 <= 0 )
              j_j_j_j__ZdlPv_9(v25);
          }
          ++v20;
        while ( v20 != v7 );
        v7 = v34;
    if ( v7 )
      operator delete(v7);
}


int (**__fastcall EntityDefinitionGroup::_addRef(EntityDefinitionGroup *this, EntityDefinitionPtr *a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  EntityDefinitionGroup *v2; // r9@1
  pthread_mutex_t *v3; // r8@1
  unsigned int v4; // r10@1
  int v5; // r0@2
  int v6; // r9@3
  int v7; // t1@3
  int v8; // r7@3
  int *v9; // r0@3
  int v10; // r5@4
  int v11; // r6@6
  bool v12; // zf@9
  _DWORD *v13; // r0@13
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@14

  v2 = this;
  v3 = (pthread_mutex_t *)((char *)this + 92);
  v4 = (unsigned int)a2;
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v7 = *((_DWORD *)v2 + 1);
  v6 = (int)v2 + 4;
  v8 = v4 % *(_DWORD *)(v6 + 4);
  v9 = *(int **)(v7 + 4 * v8);
  if ( !v9 )
    goto LABEL_13;
  v10 = *v9;
  while ( *(_DWORD *)(v10 + 4) != v4 )
    v11 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
    {
      v9 = (int *)v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v11 + 4) % *(_DWORD *)(v6 + 4) == v8 )
        continue;
    }
  v12 = v9 == 0;
  if ( v9 )
    v12 = *v9 == 0;
  if ( v12 )
LABEL_13:
    v13 = operator new(8u);
    *v13 = 0;
    v13[1] = v4;
    std::_Hashtable<EntityDefinitionPtr *,EntityDefinitionPtr *,std::allocator<EntityDefinitionPtr *>,std::__detail::_Identity,std::equal_to<EntityDefinitionPtr *>,std::hash<EntityDefinitionPtr *>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_insert_unique_node(
      v6,
      v8,
      v4,
      (int)v13);
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(v3);
  return result;
}


void __fastcall EntityDefinitionGroup::~EntityDefinitionGroup(EntityDefinitionGroup *this)
{
  EntityDefinitionGroup *v1; // r0@1

  v1 = EntityDefinitionGroup::~EntityDefinitionGroup(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall EntityDefinitionGroup::_getResources(EntityDefinitionGroup *this)
{
  EntityDefinitionGroup *v1; // r9@1
  int v2; // r7@1
  Stopwatch *v3; // r0@1
  double v4; // r0@1
  unsigned int v5; // r0@1
  int v6; // r6@3
  int *v7; // r5@3
  const PackInstance *v8; // r0@4
  const PackInstance *v9; // r10@4
  char *v10; // r8@5
  Stopwatch *v11; // r1@5
  const char *v12; // r6@5
  void **v13; // r11@5
  int *v14; // r7@5
  int v15; // r11@7
  int *v16; // r7@8
  int *v17; // r6@8
  Json::Reader *v18; // r5@8
  char *v19; // r4@8
  unsigned int *v20; // r2@10
  __int64 v21; // r0@12
  int *v22; // r7@13
  int *v23; // r5@18
  int v24; // r7@18
  int v25; // r1@19
  const void **v26; // r4@19
  const void **v27; // r9@19
  unsigned int *v28; // r2@21
  unsigned int *v29; // r2@29
  signed int v30; // r1@31
  unsigned int *v31; // r2@37
  signed int v32; // r1@39
  unsigned int *v33; // r2@41
  signed int v34; // r1@43
  unsigned int *v35; // r2@45
  signed int v36; // r1@47
  unsigned int *v37; // r2@49
  signed int v38; // r1@51
  unsigned int *v39; // r2@53
  signed int v40; // r1@55
  unsigned int *v41; // r2@57
  signed int v42; // r1@59
  unsigned int *v43; // r2@61
  signed int v44; // r1@63
  signed int v45; // r1@93
  PackInstance *v46; // r8@98
  Json::Reader *v47; // r4@98
  const void **v48; // r0@98
  const void **v49; // r0@98
  int v50; // r0@98
  char *v51; // r0@98
  char *v52; // r0@99
  void *v53; // r0@100
  Json::Value *v54; // r0@101
  Json::Value *v55; // r0@101
  Json::Value *v56; // r0@101
  Json::Value *v57; // r10@101
  void *v58; // r0@103
  char *v59; // r0@105
  int v60; // r7@106
  void *v61; // r0@106
  unsigned int *v62; // r2@107
  signed int v63; // r1@109
  unsigned int *v64; // r2@111
  signed int v65; // r1@113
  unsigned int *v66; // r2@115
  signed int v67; // r1@117
  unsigned int *v68; // r2@119
  signed int v69; // r1@121
  int v70; // r7@123
  void *v71; // r0@123
  PackManifest *v72; // r0@125
  void *v73; // r0@126
  void *v74; // r0@127
  Json::Value *v75; // r0@128
  Json::Value *v76; // r10@128
  Json::Value *v77; // r0@128
  int **v78; // r6@128
  int **i; // r7@128
  int v80; // r0@131
  _DWORD *v81; // r0@131
  void *v82; // r0@131
  unsigned int *v83; // r2@132
  signed int v84; // r1@134
  void *v85; // r6@152
  void *v86; // r7@152
  unsigned int *v88; // r2@155
  signed int v89; // r1@157
  int *v90; // r0@163
  int v91; // r6@168
  Json::Value *v92; // r7@169
  Json::Value *v93; // r7@170
  EntityDefinitionGroup *v94; // r0@173
  unsigned int *v95; // r2@176
  signed int v96; // r1@178
  unsigned int *v97; // r2@184
  signed int v98; // r1@186
  unsigned int *v99; // r2@196
  signed int v100; // r1@198
  unsigned int *v101; // r2@200
  signed int v102; // r1@202
  void **v103; // r0@221
  signed int v104; // r7@221
  void *v105; // r0@221
  void **v106; // r0@224
  signed int v107; // r7@224
  void *v108; // r0@224
  void **v109; // r0@227
  signed int v110; // r7@227
  void *v111; // r0@227
  void **v112; // r0@230
  signed int v113; // r7@230
  void *v114; // r0@230
  void **v115; // r0@233
  void **v116; // r0@234
  signed int v117; // r7@234
  void *v118; // r0@234
  unsigned int *v119; // r2@235
  void *v120; // r0@240
  void **v121; // r0@243
  signed int v122; // r7@243
  void *v123; // r0@243
  void **v124; // r0@246
  signed int v125; // r7@246
  void *v126; // r0@246
  Parser *v127; // r7@249
  Json::Value *v128; // r0@249
  int **v129; // r6@252
  int **v130; // r7@252
  unsigned int *v131; // r2@254
  signed int v132; // r1@256
  int *v133; // r0@262
  void *v134; // r0@267
  void *v135; // r0@269
  const void **v140; // r7@271
  const void **v141; // r6@271
  unsigned int *v142; // r2@273
  signed int v143; // r1@275
  int *v144; // r0@280
  unsigned int *v145; // r2@287
  signed int v146; // r1@289
  unsigned int *v147; // r2@291
  signed int v148; // r1@293
  int **v149; // r6@303
  double v150; // r0@303
  int v151; // r7@303
  double v152; // r0@303
  char *v153; // r0@303
  Json::Value *v154; // r0@303
  const Json::Value *v155; // r0@303
  Json::Value *v156; // r0@303
  const Json::Value *v157; // r0@303
  Json::Value *v158; // r0@303
  EntityDefinition **v159; // r0@303
  _DWORD *v160; // r1@303
  EntityDefinition *v161; // r0@303
  EntityDefinition *v162; // r0@304
  Json::Value *v163; // r0@305
  const Json::Value *v164; // r0@305
  char *v165; // r0@305
  void *v166; // r0@306
  int v168; // r6@309
  unsigned int *v169; // r2@311
  signed int v170; // r1@313
  unsigned int *v171; // r2@315
  signed int v172; // r1@317
  int v173; // r5@327
  int v174; // r1@327
  void *v175; // r0@327
  int v176; // r1@328
  void *v177; // r0@328
  const GameVersion *v178; // [sp+0h] [bp-590h]@0
  int v179; // [sp+38h] [bp-558h]@128
  signed int v180; // [sp+3Ch] [bp-554h]@106
  int v181; // [sp+40h] [bp-550h]@126
  int v182; // [sp+48h] [bp-548h]@5
  const void **v183; // [sp+50h] [bp-540h]@19
  int v184; // [sp+54h] [bp-53Ch]@1
  EntityDefinitionGroup *v185; // [sp+58h] [bp-538h]@1
  char v186; // [sp+60h] [bp-530h]@309
  char v187[12]; // [sp+64h] [bp-52Ch]@309
  char v188; // [sp+70h] [bp-520h]@305
  char v189; // [sp+80h] [bp-510h]@303
  char v190; // [sp+90h] [bp-500h]@303
  char v191; // [sp+A0h] [bp-4F0h]@303
  int v192; // [sp+C0h] [bp-4D0h]@303
  int v193; // [sp+C4h] [bp-4CCh]@303
  int v194; // [sp+D0h] [bp-4C0h]@303
  int v195; // [sp+DCh] [bp-4B4h]@303
  int v196; // [sp+F8h] [bp-498h]@303
  char v197; // [sp+28Ch] [bp-304h]@303
  char v198; // [sp+290h] [bp-300h]@303
  char v199; // [sp+2A0h] [bp-2F0h]@8
  char *v200; // [sp+310h] [bp-280h]@8
  int v201; // [sp+314h] [bp-27Ch]@8
  char v202; // [sp+318h] [bp-278h]@249
  char v203; // [sp+328h] [bp-268h]@249
  int v204; // [sp+33Ch] [bp-254h]@61
  int v205; // [sp+344h] [bp-24Ch]@57
  int v206; // [sp+34Ch] [bp-244h]@234
  int v207; // [sp+354h] [bp-23Ch]@53
  int v208; // [sp+35Ch] [bp-234h]@49
  int v209; // [sp+364h] [bp-22Ch]@45
  int v210; // [sp+36Ch] [bp-224h]@41
  int v211; // [sp+374h] [bp-21Ch]@37
  char v212; // [sp+378h] [bp-218h]@171
  char v213; // [sp+380h] [bp-210h]@171
  void *v214; // [sp+388h] [bp-208h]@152
  void *v215; // [sp+38Ch] [bp-204h]@152
  int v216; // [sp+394h] [bp-1FCh]@131
  int **v217; // [sp+398h] [bp-1F8h]@128
  int **v218; // [sp+39Ch] [bp-1F4h]@128
  int v219; // [sp+3A8h] [bp-1E8h]@126
  int v220; // [sp+3ACh] [bp-1E4h]@126
  int v221; // [sp+3B0h] [bp-1E0h]@106
  PackInstance *v222; // [sp+3B4h] [bp-1DCh]@106
  int v223; // [sp+3B8h] [bp-1D8h]@123
  PackInstance *v224; // [sp+3BCh] [bp-1D4h]@123
  int v225; // [sp+3C0h] [bp-1D0h]@123
  int v226; // [sp+3C8h] [bp-1C8h]@103
  int v227; // [sp+3CCh] [bp-1C4h]@29
  char v228; // [sp+3D0h] [bp-1C0h]@98
  int v229; // [sp+3E4h] [bp-1ACh]@98
  char *v230; // [sp+3E8h] [bp-1A8h]@98
  char *v231; // [sp+3ECh] [bp-1A4h]@98
  char v232; // [sp+3F0h] [bp-1A0h]@98
  char v233; // [sp+404h] [bp-18Ch]@98
  _DWORD *v234; // [sp+474h] [bp-11Ch]@5
  char v235; // [sp+478h] [bp-118h]@5
  int v236; // [sp+494h] [bp-FCh]@126
  int v237; // [sp+4B0h] [bp-E0h]@251
  int v238; // [sp+4C8h] [bp-C8h]@5
  void *ptr; // [sp+4CCh] [bp-C4h]@18
  const void **v240; // [sp+4D0h] [bp-C0h]@19
  char v241; // [sp+4D8h] [bp-B8h]@5
  void *v242; // [sp+50Ch] [bp-84h]@4
  unsigned int v243; // [sp+510h] [bp-80h]@1
  int v244; // [sp+514h] [bp-7Ch]@1
  int v245; // [sp+518h] [bp-78h]@1
  int v246; // [sp+51Ch] [bp-74h]@1
  int v247; // [sp+520h] [bp-70h]@1
  int v248; // [sp+524h] [bp-6Ch]@9
  char v249; // [sp+528h] [bp-68h]@1
  char v250; // [sp+55Ch] [bp-34h]@250

  v1 = this;
  v185 = this;
  v2 = *(_DWORD *)(*((_DWORD *)this + 22) + 64);
  v184 = *(_DWORD *)(*((_DWORD *)this + 22) + 64);
  v3 = (Stopwatch *)Stopwatch::Stopwatch((Stopwatch *)&v249);
  Stopwatch::start(v3);
  v244 = 0;
  v245 = 0;
  v246 = 1065353216;
  v247 = 0;
  HIDWORD(v4) = 10;
  LODWORD(v4) = &v246;
  v5 = sub_21E6254(v4);
  v243 = v5;
  if ( v5 == 1 )
  {
    v7 = &v248;
    v248 = 0;
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = (int *)operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  v242 = v7;
  v9 = (const PackInstance *)(*(_QWORD *)(v2 + 4) >> 32);
  v8 = (const PackInstance *)*(_QWORD *)(v2 + 4);
  if ( v9 != v8 )
    v10 = &v235;
    v11 = (Stopwatch *)&v241;
    v12 = "entities";
    v13 = (void **)&v238;
    v14 = (int *)&v234;
    v182 = -286331153 * ((v9 - v8) >> 3);
    while ( 1 )
    {
      Stopwatch::Stopwatch(v11);
      v23 = v14;
      v24 = *((_DWORD *)v1 + 22);
      sub_21E94B4(v13, v12);
      v9 = (const PackInstance *)((char *)v9 - 120);
      ResourcePackManager::getResourcesOfGroup((int)&ptr, v24, (int)v9, (int)v13);
      HIDWORD(v21) = v238;
      v22 = v23;
      LODWORD(v21) = v238 - 12;
      if ( (int *)(v238 - 12) != &dword_28898C0 )
      {
        v20 = (unsigned int *)(v238 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            HIDWORD(v21) = __ldrex(v20);
          while ( __strex(HIDWORD(v21) - 1, v20) );
          v22 = v23;
        }
        else
          HIDWORD(v21) = (*v20)--;
        if ( SHIDWORD(v21) <= 0 )
          j_j_j_j__ZdlPv_9((void *)v21);
      }
      LODWORD(v21) = v10;
      PackStats::PackStats(v21);
      v26 = v240;
      v27 = (const void **)ptr;
      v183 = v240;
      if ( ptr != v240 )
        break;
LABEL_271:
      _R0 = Stopwatch::stop((Stopwatch *)&v241, v25);
      v1 = v185;
      v10 = &v235;
      __asm
        VMOV            D0, R0, R1
        VSTR            D0, [R5,#0xB8]
      MinecraftEventing::fireEventPackPlayed(*((MinecraftEventing **)v185 + 24), v9, --v182, (const PackStats *)&v235);
      PackStats::~PackStats((PackStats *)&v235);
      v140 = (const void **)ptr;
      v141 = v240;
        do
          v144 = (int *)((char *)*v140 - 12);
          if ( v144 != &dword_28898C0 )
          {
            v142 = (unsigned int *)((char *)*v140 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v143 = __ldrex(v142);
              while ( __strex(v143 - 1, v142) );
            }
            else
              v143 = (*v142)--;
            if ( v143 <= 0 )
              j_j_j_j__ZdlPv_9(v144);
          }
          ++v140;
        while ( v140 != v141 );
        v140 = (const void **)ptr;
      if ( v140 )
        operator delete(v140);
      v14 = (int *)&v234;
      v8 = *(const PackInstance **)(v184 + 4);
      v13 = (void **)&v238;
      v12 = "entities";
      v11 = (Stopwatch *)&v241;
      if ( v9 == v8 )
        goto LABEL_7;
    }
      v234 = &unk_28898CC;
      PackInstance::getResource((int)v9, (int)v27, v22);
      v25 = (int)v234;
      if ( !*(v234 - 3) )
        goto LABEL_269;
      Json::Reader::Reader((Json::Reader *)&v233);
      Json::Value::Value(&v232, 0);
      v46 = v9;
      PackInstance::getPackId((PackInstance *)&v228, (int)v9);
      v47 = (Json::Reader *)&v233;
      mce::UUID::asString((mce::UUID *)&v229);
      v48 = sub_21E7408((const void **)&v229, ":", 1u);
      v230 = (char *)*v48;
      *v48 = &unk_28898CC;
      v49 = sub_21E72F0((const void **)&v230, v27);
      v231 = (char *)*v49;
      *v49 = &unk_28898CC;
      v50 = Json::Reader::parse((int)&v233, v22, (int)&v232, 1);
      JSONReadVerifier::verifyRead((const char **)&v231, (int)&v233, v50);
      v51 = v231 - 12;
      if ( (int *)(v231 - 12) != &dword_28898C0 )
        v64 = (unsigned int *)(v231 - 4);
            v65 = __ldrex(v64);
          while ( __strex(v65 - 1, v64) );
          v65 = (*v64)--;
        if ( v65 <= 0 )
          j_j_j_j__ZdlPv_9(v51);
      v52 = v230 - 12;
      if ( (int *)(v230 - 12) != &dword_28898C0 )
        v66 = (unsigned int *)(v230 - 4);
            v67 = __ldrex(v66);
          while ( __strex(v67 - 1, v66) );
          v67 = (*v66)--;
        if ( v67 <= 0 )
          j_j_j_j__ZdlPv_9(v52);
      v53 = (void *)(v229 - 12);
      if ( (int *)(v229 - 12) != &dword_28898C0 )
        v68 = (unsigned int *)(v229 - 4);
            v69 = __ldrex(v68);
          while ( __strex(v69 - 1, v68) );
          v69 = (*v68)--;
        if ( v69 <= 0 )
          j_j_j_j__ZdlPv_9(v53);
      v54 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v232, "minecraft:entity");
      v55 = (Json::Value *)Json::Value::operator[](v54, "components");
      v56 = (Json::Value *)Json::Value::operator[](v55, "minecraft:identifier");
      v57 = (Json::Value *)Json::Value::operator[](v56, "id");
      if ( !Json::Value::isNull(v57) )
        if ( Json::Value::isString(v57) )
          break;
LABEL_268:
      Json::Value::~Value((Json::Value *)&v232);
      Json::Reader::~Reader(v47);
      v9 = v46;
      v26 = v183;
LABEL_269:
      v135 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v25 - 4);
            v25 = __ldrex(v28);
          while ( __strex(v25 - 1, v28) );
          v25 = (*v28)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v135);
      ++v27;
      if ( v27 == v26 )
        goto LABEL_271;
    sub_21E94B4((void **)&v226, (const char *)&unk_257BC67);
    Json::Value::asString(&v227, (int)v57, &v226);
    v58 = (void *)(v226 - 12);
    if ( (int *)(v226 - 12) != &dword_28898C0 )
      v95 = (unsigned int *)(v226 - 4);
      if ( &pthread_create )
        __dmb();
          v96 = __ldrex(v95);
        while ( __strex(v96 - 1, v95) );
      else
        v96 = (*v95)--;
      if ( v96 <= 0 )
        j_j_j_j__ZdlPv_9(v58);
    if ( !*(_DWORD *)(v227 - 12) )
LABEL_267:
      v22 = (int *)&v234;
      v134 = (void *)(v227 - 12);
      if ( (int *)(v227 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v227 - 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v22 = (int *)&v234;
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j__ZdlPv_9(v134);
      goto LABEL_268;
    v59 = EntityTypeFromString((const void **)&v227);
    if ( v59 == (char *)1 )
      v180 = 1;
      v60 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::pair<std::string,PackInstance const*>>,std::allocator<std::pair<std::string const,std::pair<std::string,PackInstance const*>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (unsigned __int64 *)&v242,
              (int **)&v227);
      sub_21E8AF4(&v221, (int *)v27);
      v222 = v46;
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v60,
        &v221);
      *(_DWORD *)(v60 + 4) = v222;
      v61 = (void *)(v221 - 12);
      if ( (int *)(v221 - 12) == &dword_28898C0 )
LABEL_125:
        v72 = (PackManifest *)PackInstance::getManifest(v46);
        if ( !PackManifest::isPremium(v72) )
          sub_21E94B4((void **)&v219, (const char *)&unk_257BC67);
          Json::Value::asString(&v220, (int)v57, &v219);
          v181 = std::__detail::_Map_base<std::string,std::pair<std::string const,DefinitionStats>,std::allocator<std::pair<std::string const,DefinitionStats>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                   (int)&v236,
                   (int **)&v220);
          v73 = (void *)(v220 - 12);
          if ( (int *)(v220 - 12) != &dword_28898C0 )
            v99 = (unsigned int *)(v220 - 4);
                v100 = __ldrex(v99);
              while ( __strex(v100 - 1, v99) );
              v100 = (*v99)--;
            if ( v100 <= 0 )
              j_j_j_j__ZdlPv_9(v73);
          v74 = (void *)(v219 - 12);
          if ( (int *)(v219 - 12) != &dword_28898C0 )
            v101 = (unsigned int *)(v219 - 4);
                v102 = __ldrex(v101);
              while ( __strex(v102 - 1, v101) );
              v102 = (*v101)--;
            if ( v102 <= 0 )
              j_j_j_j__ZdlPv_9(v74);
          v75 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v232, "minecraft:entity");
          v76 = (Json::Value *)Json::Value::operator[](v75, "components");
          Json::Value::getMemberNames((Json::Value *)&v217, (int)v76);
          v77 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v232, "minecraft:entity");
          v179 = Json::Value::operator[](v77, "component_groups");
          v78 = v218;
          for ( i = v217; i != v78; ++i )
            v80 = Description::getId(i);
            Util::toString<int,(void *)0,(void *)0>((void **)&v216, v80);
            v81 = (_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                              (int)&v235,
                              (int **)&v216);
            ++*v81;
            v82 = (void *)(v216 - 12);
            if ( (int *)(v216 - 12) != &dword_28898C0 )
              v83 = (unsigned int *)(v216 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v84 = __ldrex(v83);
                while ( __strex(v84 - 1, v83) );
              }
              else
                v84 = (*v83)--;
              if ( v84 <= 0 )
                j_j_j_j__ZdlPv_9(v82);
          *(_DWORD *)v181 = v180;
          *(_DWORD *)(v181 + 4) = Json::Value::size(v76);
          Json::Value::getMemberNames((Json::Value *)&v214, v179);
          v85 = v215;
          v86 = v214;
          _ZF = v215 == v214;
          *(_DWORD *)(v181 + 8) = ((_BYTE *)v215 - (_BYTE *)v214) >> 2;
          if ( !_ZF )
            do
              v90 = (int *)(*(_DWORD *)v86 - 12);
              if ( v90 != &dword_28898C0 )
                v88 = (unsigned int *)(*(_DWORD *)v86 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v89 = __ldrex(v88);
                  while ( __strex(v89 - 1, v88) );
                }
                else
                  v89 = (*v88)--;
                if ( v89 <= 0 )
                  j_j_j_j__ZdlPv_9(v90);
              v86 = (char *)v86 + 4;
            while ( v86 != v85 );
            v86 = v214;
          if ( v86 )
            operator delete(v86);
          v91 = (int)v76;
          if ( Json::Value::isMember(v76, "minecraft:behavior.nearest_attackable_target") == 1 )
            v92 = (Json::Value *)Json::Value::operator[](v76, "minecraft:behavior.nearest_attackable_target");
            if ( Json::Value::isMember(v92, "entity_types") == 1 )
              v93 = (Json::Value *)Json::Value::operator[](v92, "entity_types");
              if ( Json::Value::isArray(v93) == 1 )
                Json::Value::begin((Json::Value *)&v213, (int)v93);
                Json::Value::end((Json::Value *)&v212, (int)v93);
                while ( Json::ValueIteratorBase::isEqual(
                          (Json::ValueIteratorBase *)&v213,
                          (const Json::ValueIteratorBase *)&v212) != 1 )
                  v94 = (EntityDefinitionGroup *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v213);
                  if ( EntityDefinitionGroup::hasPlayerAsTarget(v94, v94) == 1 )
                    *(_DWORD *)(v181 + 12) |= 1u;
                  Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v213);
                v91 = (int)v76;
              else if ( Json::Value::isString(v93) == 1
                     && EntityDefinitionGroup::hasPlayerAsTarget((EntityDefinitionGroup *)1, v93) == 1 )
                *(_DWORD *)(v181 + 12) |= 1u;
          v103 = sub_21E94B4((void **)&v211, "minecraft:rideable");
          v104 = EntityDefinitionGroup::hasComponent((int)v103, (const char **)v103, v91, v179);
          v105 = (void *)(v211 - 12);
          if ( (int *)(v211 - 12) != &dword_28898C0 )
            v31 = (unsigned int *)(v211 - 4);
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
              v32 = (*v31)--;
            if ( v32 <= 0 )
              j_j_j_j__ZdlPv_9(v105);
          if ( v104 == 1 )
            *(_DWORD *)(v181 + 12) |= 2u;
          v106 = sub_21E94B4((void **)&v210, "minecraft:inventory");
          v107 = EntityDefinitionGroup::hasComponent((int)v106, (const char **)v106, v91, v179);
          v108 = (void *)(v210 - 12);
          if ( (int *)(v210 - 12) != &dword_28898C0 )
            v33 = (unsigned int *)(v210 - 4);
                v34 = __ldrex(v33);
              while ( __strex(v34 - 1, v33) );
              v34 = (*v33)--;
            if ( v34 <= 0 )
              j_j_j_j__ZdlPv_9(v108);
          if ( v107 == 1 )
            *(_DWORD *)(v181 + 12) |= 4u;
          v109 = sub_21E94B4((void **)&v209, "minecraft:tameable");
          v110 = EntityDefinitionGroup::hasComponent((int)v109, (const char **)v109, v91, v179);
          v111 = (void *)(v209 - 12);
          if ( (int *)(v209 - 12) != &dword_28898C0 )
            v35 = (unsigned int *)(v209 - 4);
                v36 = __ldrex(v35);
              while ( __strex(v36 - 1, v35) );
              v36 = (*v35)--;
            if ( v36 <= 0 )
              j_j_j_j__ZdlPv_9(v111);
          if ( v110 == 1 )
            *(_DWORD *)(v181 + 12) |= 8u;
          v112 = sub_21E94B4((void **)&v208, "minecraft:navigation.walk");
          v113 = EntityDefinitionGroup::hasComponent((int)v112, (const char **)v112, v91, v179);
          v114 = (void *)(v208 - 12);
          if ( (int *)(v208 - 12) != &dword_28898C0 )
            v37 = (unsigned int *)(v208 - 4);
                v38 = __ldrex(v37);
              while ( __strex(v38 - 1, v37) );
              v38 = (*v37)--;
            if ( v38 <= 0 )
              j_j_j_j__ZdlPv_9(v114);
          if ( v113 == 1 )
            *(_DWORD *)(v181 + 12) |= 0x20u;
          v115 = sub_21E94B4((void **)&v207, "minecraft:can_climb");
          if ( EntityDefinitionGroup::hasComponent((int)v115, (const char **)v115, v91, v179) == 1 )
            v116 = sub_21E94B4((void **)&v206, "minecraft:navigation.climb");
            v117 = EntityDefinitionGroup::hasComponent((int)v116, (const char **)v116, v91, v179);
            v118 = (void *)(v206 - 12);
            if ( (int *)(v206 - 12) != &dword_28898C0 )
              v119 = (unsigned int *)(v206 - 4);
                  v45 = __ldrex(v119);
                while ( __strex(v45 - 1, v119) );
                v45 = (*v119)--;
              if ( v45 <= 0 )
                j_j_j_j__ZdlPv_9(v118);
          else
            v117 = 0;
          v120 = (void *)(v207 - 12);
          if ( (int *)(v207 - 12) != &dword_28898C0 )
            v39 = (unsigned int *)(v207 - 4);
                v40 = __ldrex(v39);
              while ( __strex(v40 - 1, v39) );
              v40 = (*v39)--;
            if ( v40 <= 0 )
              j_j_j_j__ZdlPv_9(v120);
          if ( v117 == 1 )
            *(_DWORD *)(v181 + 12) |= 0x80u;
          v121 = sub_21E94B4((void **)&v205, "minecraft:navigation.swim");
          v122 = EntityDefinitionGroup::hasComponent((int)v121, (const char **)&v205, v91, v179);
          v123 = (void *)(v205 - 12);
          if ( (int *)(v205 - 12) != &dword_28898C0 )
            v41 = (unsigned int *)(v205 - 4);
                v42 = __ldrex(v41);
              while ( __strex(v42 - 1, v41) );
              v42 = (*v41)--;
            if ( v42 <= 0 )
              j_j_j_j__ZdlPv_9(v123);
          if ( v122 == 1 )
            *(_DWORD *)(v181 + 12) |= 0x40u;
          v124 = sub_21E94B4((void **)&v204, "minecraft:can_fly");
          v125 = EntityDefinitionGroup::hasComponent((int)v124, (const char **)&v204, v91, v179);
          v126 = (void *)(v204 - 12);
          if ( (int *)(v204 - 12) != &dword_28898C0 )
            v43 = (unsigned int *)(v204 - 4);
                v44 = __ldrex(v43);
              while ( __strex(v44 - 1, v43) );
              v44 = (*v43)--;
            if ( v44 <= 0 )
              j_j_j_j__ZdlPv_9(v126);
          if ( v125 == 1 )
            *(_DWORD *)(v181 + 12) |= 0x10u;
          GameVersion::GameVersion((int)&v203);
          v127 = (Parser *)Json::Value::operator[]((Json::Value *)&v232, "minecraft:entity");
          GameVersion::GameVersion((int)&v202);
          Parser::parse(v127, (const Json::Value *)&v203, (GameVersion *)"format_version", &v202, v178);
          v128 = (Json::Value *)Json::Value::operator[]((int)&v232, "minecraft:entity");
          if ( Json::Value::isMember(v128, "do_not_upgrade") != 1 )
            GameVersion::current((GameVersion *)&v250);
            if ( GameVersion::operator<((int)&v203, (int)&v250) == 1 )
              ++v237;
          v129 = v218;
          v130 = v217;
          if ( v217 != v218 )
              v133 = *v130 - 3;
              if ( v133 != &dword_28898C0 )
                v131 = (unsigned int *)(*v130 - 1);
                    v132 = __ldrex(v131);
                  while ( __strex(v132 - 1, v131) );
                  v132 = (*v131)--;
                if ( v132 <= 0 )
                  j_j_j_j__ZdlPv_9(v133);
              ++v130;
            while ( v130 != v129 );
            v130 = v217;
          v47 = (Json::Reader *)&v233;
          if ( v130 )
            operator delete(v130);
        goto LABEL_267;
      v62 = (unsigned int *)(v221 - 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        goto LABEL_193;
    else
      v180 = (signed int)v59;
      EntityTypeToString((void **)&v225, (unsigned int)v59, 1);
      v70 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::pair<std::string,PackInstance const*>>,std::allocator<std::pair<std::string const,std::pair<std::string,PackInstance const*>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (int)&v242,
              (int **)&v225);
      sub_21E8AF4(&v223, (int *)v27);
      v224 = v46;
        (int *)v70,
        &v223);
      *(_DWORD *)(v70 + 4) = v224;
      v71 = (void *)(v223 - 12);
      if ( (int *)(v223 - 12) != &dword_28898C0 )
        v97 = (unsigned int *)(v223 - 4);
            v98 = __ldrex(v97);
          while ( __strex(v98 - 1, v97) );
          v98 = (*v97)--;
        if ( v98 <= 0 )
          j_j_j_j__ZdlPv_9(v71);
      v61 = (void *)(v225 - 12);
      if ( (int *)(v225 - 12) == &dword_28898C0 )
        goto LABEL_125;
      v62 = (unsigned int *)(v225 - 4);
LABEL_193:
        if ( v63 <= 0 )
          j_j_j_j__ZdlPv_9(v61);
    v63 = (*v62)--;
    goto LABEL_193;
  v184 = v2;
LABEL_7:
  v15 = v244;
  if ( v244 )
    v16 = &v201;
    v17 = (int *)&v200;
    v18 = (Json::Reader *)&v199;
    v19 = (char *)&unk_28898CC;
    do
      sub_21E8AF4(v16, (int *)(v15 + 4));
      v200 = v19;
      PackInstance::getResource(*(_DWORD *)(v15 + 12), v15 + 8, v17);
      Json::Reader::Reader(v18);
      Json::Value::Value(&v198, 0);
      Json::Reader::parse((int)v18, v17, (int)&v198, 1);
      JsonUtil::ScopeMarker::ScopeMarker(&v197, v16);
      v149 = (int **)v16;
      LODWORD(v150) = operator new(0xC9Cu);
      v151 = LODWORD(v150);
      v152 = COERCE_DOUBLE(__PAIR__((unsigned int)v149, EntityDefinition::EntityDefinition(v150)));
      LODWORD(v152) = &v191;
      EntityDefinitionDescriptor::EntityDefinitionDescriptor(v152);
      v153 = EntityTypeFromString((const void **)(v15 + 4));
      EntityDefinitionGroup::_upgradePatchPack((int)v1, (signed int)v153, (Json::Value *)&v198);
      v154 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v198, "minecraft:entity");
      v155 = (const Json::Value *)Json::Value::operator[](v154, "components");
      Json::Value::Value((Json::Value *)&v190, v155);
      EntityDefinition::parse(v151, (int)&v190, (int)&v191);
      Json::Value::~Value((Json::Value *)&v190);
      std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::operator=(
        (unsigned __int64 *)v151,
        (int)&v191);
      EntityInteraction::setInteractText((int *)(v151 + 32), &v192);
      std::vector<GoalDefinition,std::allocator<GoalDefinition>>::operator=(v151 + 36, (unsigned __int64 *)&v193);
      std::vector<EntityDefinitionAttribute,std::allocator<EntityDefinitionAttribute>>::operator=(
        v151 + 48,
        (unsigned __int64 *)&v194);
      std::_Hashtable<std::string,std::pair<std::string const,DefinitionEvent>,std::allocator<std::pair<std::string const,DefinitionEvent>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::operator=(
        (unsigned __int64 *)(v151 + 60),
        (int)&v195);
      _aeabi_memcpy4(v151 + 88, &v196, 404);
      v156 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v198, "minecraft:entity");
      v157 = (const Json::Value *)Json::Value::operator[](v156, "events");
      v158 = Json::Value::Value((Json::Value *)&v189, v157);
      EntityDefinitionGroup::_loadEvents((int)v158, (int)&v189, v151);
      Json::Value::~Value((Json::Value *)&v189);
      v159 = (EntityDefinition **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<EntityDefinition,std::default_delete<EntityDefinition>>>,std::allocator<std::pair<std::string const,std::unique_ptr<EntityDefinition,std::default_delete<EntityDefinition>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                    (int)v1 + 32,
                                    v149);
      v160 = v159;
      v161 = *v159;
      *v160 = v151;
      if ( v161 )
        v162 = EntityDefinition::~EntityDefinition(v161);
        operator delete((void *)v162);
      v163 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v198, "minecraft:entity");
      v164 = (const Json::Value *)Json::Value::operator[](v163, "component_groups");
      Json::Value::Value((Json::Value *)&v188, v164);
      v16 = (int *)v149;
      EntityDefinitionGroup::_loadTemplates((int)v1, v149, (Json::Value *)&v188);
      Json::Value::~Value((Json::Value *)&v188);
      EntityDefinitionDescriptor::~EntityDefinitionDescriptor((EntityDefinitionDescriptor *)&v191);
      JsonUtil::ScopeMarker::~ScopeMarker((JsonUtil::ScopeMarker *)&v197);
      Json::Value::~Value((Json::Value *)&v198);
      v18 = (Json::Reader *)&v199;
      Json::Reader::~Reader((Json::Reader *)&v199);
      v17 = (int *)&v200;
      v19 = (char *)&unk_28898CC;
      v165 = v200 - 12;
      if ( (int *)(v200 - 12) != &dword_28898C0 )
        v145 = (unsigned int *)(v200 - 4);
            v146 = __ldrex(v145);
          while ( __strex(v146 - 1, v145) );
          v146 = (*v145)--;
        if ( v146 <= 0 )
          j_j_j_j__ZdlPv_9(v165);
      v166 = (void *)(v201 - 12);
      if ( (int *)(v201 - 12) != &dword_28898C0 )
        v147 = (unsigned int *)(v201 - 4);
            v148 = __ldrex(v147);
          while ( __strex(v148 - 1, v147) );
          v148 = (*v147)--;
        if ( v148 <= 0 )
          j_j_j_j__ZdlPv_9(v166);
      v15 = *(_DWORD *)v15;
    while ( v15 );
    v8 = *(const PackInstance **)(v184 + 4);
  *(_DWORD *)&v187[4] = 0;
  *(_DWORD *)&v187[8] = 0;
  v186 = 2;
  *(_DWORD *)v187 = -286331153 * ((*(_DWORD *)(v184 + 8) - (signed int)v8) >> 3);
  _R0 = Stopwatch::stop((Stopwatch *)&v249, -286331153);
  __asm
    VMOV            D0, R0, R1
    VSTR            D0, [SP,#0x590+var_52C+4]
  MinecraftEventing::fireEventStackLoaded(*((_DWORD *)v1 + 24), (int)&v186);
  v168 = v244;
  while ( v168 )
    v173 = v168;
    v174 = *(_DWORD *)(v168 + 8);
    v168 = *(_DWORD *)v168;
    v175 = (void *)(v174 - 12);
    if ( (int *)(v174 - 12) != &dword_28898C0 )
      v169 = (unsigned int *)(v174 - 4);
          v170 = __ldrex(v169);
        while ( __strex(v170 - 1, v169) );
        v170 = (*v169)--;
      if ( v170 <= 0 )
        j_j_j_j__ZdlPv_9(v175);
    v176 = *(_DWORD *)(v173 + 4);
    v177 = (void *)(v176 - 12);
    if ( (int *)(v176 - 12) != &dword_28898C0 )
      v171 = (unsigned int *)(v176 - 4);
          v172 = __ldrex(v171);
        while ( __strex(v172 - 1, v171) );
        v172 = (*v171)--;
      if ( v172 <= 0 )
        j_j_j_j__ZdlPv_9(v177);
    operator delete((void *)v173);
  _aeabi_memclr4(v242, 4 * v243);
  if ( v242 )
    if ( &v248 != v242 )
      operator delete(v242);
}


void __fastcall EntityDefinitionGroup::_removePre11Components(int a1, Json::Value *a2, const char *a3, signed int a4)
{
  Json::Value *v4; // r7@1
  signed int v5; // r6@1
  const char *v6; // r5@1
  void *v7; // r0@4
  void *v8; // r0@8
  void *v9; // r0@12
  void *v10; // r0@16
  void *v11; // r0@20
  void *v12; // r0@24
  void *v13; // r0@28
  void *v14; // r0@32
  void *v15; // r0@36
  void *v16; // r0@40
  void *v17; // r0@44
  void *v18; // r0@48
  void *v19; // r0@52
  void *v20; // r0@56
  Json::Value *v21; // r0@61
  Json::Value *v22; // r0@61
  const char *v23; // r5@61
  void *v24; // r0@64
  Json::Value *v25; // r0@65
  Json::Value *v26; // r0@65
  const char *v27; // r4@65
  void *v28; // r0@68
  unsigned int *v29; // r2@69
  signed int v30; // r1@71
  bool v31; // zf@73
  void *v32; // r0@80
  void *v33; // r0@84
  Json::Value *v34; // r0@85
  Json::Value *v35; // r0@85
  const char *v36; // r5@85
  void *v37; // r0@88
  Json::Value *v38; // r0@89
  Json::Value *v39; // r0@89
  const char *v40; // r4@89
  Json::Value *v41; // r0@97
  Json::Value *v42; // r0@97
  const char *v43; // r5@97
  void *v44; // r0@100
  Json::Value *v45; // r0@101
  Json::Value *v46; // r0@101
  const char *v47; // r4@101
  Json::Value *v48; // r0@109
  Json::Value *v49; // r0@109
  const char *v50; // r5@109
  void *v51; // r0@112
  Json::Value *v52; // r0@113
  Json::Value *v53; // r0@113
  const char *v54; // r4@113
  unsigned int *v55; // r2@121
  signed int v56; // r1@123
  unsigned int *v57; // r2@125
  signed int v58; // r1@127
  unsigned int *v59; // r2@129
  signed int v60; // r1@131
  unsigned int *v61; // r2@133
  signed int v62; // r1@135
  unsigned int *v63; // r2@137
  signed int v64; // r1@139
  unsigned int *v65; // r2@141
  signed int v66; // r1@143
  unsigned int *v67; // r2@145
  signed int v68; // r1@147
  unsigned int *v69; // r2@149
  signed int v70; // r1@151
  unsigned int *v71; // r2@153
  signed int v72; // r1@155
  unsigned int *v73; // r2@157
  signed int v74; // r1@159
  unsigned int *v75; // r2@161
  signed int v76; // r1@163
  unsigned int *v77; // r2@165
  signed int v78; // r1@167
  unsigned int *v79; // r2@169
  signed int v80; // r1@171
  unsigned int *v81; // r2@173
  signed int v82; // r1@175
  unsigned int *v83; // r2@237
  signed int v84; // r1@239
  unsigned int *v85; // r2@241
  signed int v86; // r1@243
  unsigned int *v87; // r2@245
  signed int v88; // r1@247
  unsigned int *v89; // r2@249
  signed int v90; // r1@251
  unsigned int *v91; // r2@253
  signed int v92; // r1@255
  unsigned int *v93; // r2@257
  signed int v94; // r1@259
  int v95; // [sp+4h] [bp-254h]@89
  int v96; // [sp+Ch] [bp-24Ch]@85
  int v97; // [sp+14h] [bp-244h]@81
  int v98; // [sp+1Ch] [bp-23Ch]@77
  int v99; // [sp+24h] [bp-234h]@113
  int v100; // [sp+2Ch] [bp-22Ch]@109
  int v101; // [sp+34h] [bp-224h]@101
  int v102; // [sp+3Ch] [bp-21Ch]@97
  int v103; // [sp+44h] [bp-214h]@65
  int v104; // [sp+4Ch] [bp-20Ch]@61
  int v105; // [sp+54h] [bp-204h]@53
  int v106; // [sp+5Ch] [bp-1FCh]@49
  int v107; // [sp+64h] [bp-1F4h]@45
  int v108; // [sp+6Ch] [bp-1ECh]@41
  int v109; // [sp+74h] [bp-1E4h]@37
  int v110; // [sp+7Ch] [bp-1DCh]@33
  int v111; // [sp+84h] [bp-1D4h]@29
  int v112; // [sp+8Ch] [bp-1CCh]@25
  int v113; // [sp+94h] [bp-1C4h]@21
  int v114; // [sp+9Ch] [bp-1BCh]@17
  int v115; // [sp+A4h] [bp-1B4h]@13
  int v116; // [sp+ACh] [bp-1ACh]@9
  int v117; // [sp+B4h] [bp-1A4h]@5
  int v118; // [sp+BCh] [bp-19Ch]@1
  char v119; // [sp+C0h] [bp-198h]@3
  char v120; // [sp+D0h] [bp-188h]@7
  char v121; // [sp+E0h] [bp-178h]@11
  char v122; // [sp+F0h] [bp-168h]@15
  char v123; // [sp+100h] [bp-158h]@19
  char v124; // [sp+110h] [bp-148h]@23
  char v125; // [sp+120h] [bp-138h]@27
  char v126; // [sp+130h] [bp-128h]@31
  char v127; // [sp+140h] [bp-118h]@35
  char v128; // [sp+150h] [bp-108h]@39
  char v129; // [sp+160h] [bp-F8h]@43
  char v130; // [sp+170h] [bp-E8h]@47
  char v131; // [sp+180h] [bp-D8h]@51
  char v132; // [sp+190h] [bp-C8h]@55
  char v133; // [sp+1A0h] [bp-B8h]@63
  char v134; // [sp+1B0h] [bp-A8h]@67
  char v135; // [sp+1C0h] [bp-98h]@99
  char v136; // [sp+1D0h] [bp-88h]@103
  char v137; // [sp+1E0h] [bp-78h]@111
  char v138; // [sp+1F0h] [bp-68h]@115
  char v139; // [sp+200h] [bp-58h]@79
  char v140; // [sp+210h] [bp-48h]@83
  char v141; // [sp+220h] [bp-38h]@87
  char v142; // [sp+230h] [bp-28h]@91

  v4 = a2;
  v5 = a4;
  v6 = a3;
  sub_21E94B4((void **)&v118, "minecraft:can_climb");
  if ( !Json::Value::isNull((Json::Value *)v6) && Json::Value::isMember((int)v6, (const char **)&v118) == 1 )
  {
    Json::Value::removeMember((Json::Value *)&v119, v6, (const char **)&v118);
    Json::Value::~Value((Json::Value *)&v119);
  }
  v7 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v118 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
    }
    else
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v117, "minecraft:can_fly");
  if ( !Json::Value::isNull((Json::Value *)v6) && Json::Value::isMember((int)v6, (const char **)&v117) == 1 )
    Json::Value::removeMember((Json::Value *)&v120, v6, (const char **)&v117);
    Json::Value::~Value((Json::Value *)&v120);
  v8 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v117 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v116, "minecraft:behavior.float_wander");
  if ( !Json::Value::isNull((Json::Value *)v6) && Json::Value::isMember((int)v6, (const char **)&v116) == 1 )
    Json::Value::removeMember((Json::Value *)&v121, v6, (const char **)&v116);
    Json::Value::~Value((Json::Value *)&v121);
  v9 = (void *)(v116 - 12);
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v116 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v115, "minecraft:jump.dynamic");
  if ( !Json::Value::isNull((Json::Value *)v6) && Json::Value::isMember((int)v6, (const char **)&v115) == 1 )
    Json::Value::removeMember((Json::Value *)&v122, v6, (const char **)&v115);
    Json::Value::~Value((Json::Value *)&v122);
  v10 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v115 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v114, "minecraft:jump.static");
  if ( !Json::Value::isNull((Json::Value *)v6) && Json::Value::isMember((int)v6, (const char **)&v114) == 1 )
    Json::Value::removeMember((Json::Value *)&v123, v6, (const char **)&v114);
    Json::Value::~Value((Json::Value *)&v123);
  v11 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v114 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v113, "minecraft:movement.basic");
  if ( !Json::Value::isNull((Json::Value *)v6) && Json::Value::isMember((int)v6, (const char **)&v113) == 1 )
    Json::Value::removeMember((Json::Value *)&v124, v6, (const char **)&v113);
    Json::Value::~Value((Json::Value *)&v124);
  v12 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v113 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v112, "minecraft:movement.jump");
  if ( !Json::Value::isNull((Json::Value *)v6) && Json::Value::isMember((int)v6, (const char **)&v112) == 1 )
    Json::Value::removeMember((Json::Value *)&v125, v6, (const char **)&v112);
    Json::Value::~Value((Json::Value *)&v125);
  v13 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v112 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v111, "minecraft:movement.skip");
  if ( !Json::Value::isNull((Json::Value *)v6) && Json::Value::isMember((int)v6, (const char **)&v111) == 1 )
    Json::Value::removeMember((Json::Value *)&v126, v6, (const char **)&v111);
    Json::Value::~Value((Json::Value *)&v126);
  v14 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v111 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v110, "minecraft:movement.sway");
  if ( !Json::Value::isNull((Json::Value *)v6) && Json::Value::isMember((int)v6, (const char **)&v110) == 1 )
    Json::Value::removeMember((Json::Value *)&v127, v6, (const char **)&v110);
    Json::Value::~Value((Json::Value *)&v127);
  v15 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v110 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v109, "minecraft:navigation.climb");
  if ( !Json::Value::isNull((Json::Value *)v6) && Json::Value::isMember((int)v6, (const char **)&v109) == 1 )
    Json::Value::removeMember((Json::Value *)&v128, v6, (const char **)&v109);
    Json::Value::~Value((Json::Value *)&v128);
  v16 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v109 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v108, "minecraft:navigation.float");
  if ( !Json::Value::isNull((Json::Value *)v6) && Json::Value::isMember((int)v6, (const char **)&v108) == 1 )
    Json::Value::removeMember((Json::Value *)&v129, v6, (const char **)&v108);
    Json::Value::~Value((Json::Value *)&v129);
  v17 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v108 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v107, "minecraft:navigation.swim");
  if ( !Json::Value::isNull((Json::Value *)v6) && Json::Value::isMember((int)v6, (const char **)&v107) == 1 )
    Json::Value::removeMember((Json::Value *)&v130, v6, (const char **)&v107);
    Json::Value::~Value((Json::Value *)&v130);
  v18 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v107 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v106, "minecraft:navigation.walk");
  if ( !Json::Value::isNull((Json::Value *)v6) && Json::Value::isMember((int)v6, (const char **)&v106) == 1 )
    Json::Value::removeMember((Json::Value *)&v131, v6, (const char **)&v106);
    Json::Value::~Value((Json::Value *)&v131);
  v19 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v106 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v105, "minecraft:spawn_entity");
  if ( !Json::Value::isNull((Json::Value *)v6) && Json::Value::isMember((int)v6, (const char **)&v105) == 1 )
    Json::Value::removeMember((Json::Value *)&v132, v6, (const char **)&v105);
    Json::Value::~Value((Json::Value *)&v132);
  v20 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v105 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  if ( v5 <= 2118422 )
    v31 = v5 == 2853;
    if ( v5 != 2853 )
      v31 = v5 == 2858;
    if ( v31 )
      sub_21E94B4((void **)&v98, "minecraft:on_target_acquired");
      if ( !Json::Value::isNull((Json::Value *)v6) && Json::Value::isMember((int)v6, (const char **)&v98) == 1 )
      {
        Json::Value::removeMember((Json::Value *)&v139, v6, (const char **)&v98);
        Json::Value::~Value((Json::Value *)&v139);
      }
      v32 = (void *)(v98 - 12);
      if ( (int *)(v98 - 12) != &dword_28898C0 )
        v83 = (unsigned int *)(v98 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v84 = __ldrex(v83);
          while ( __strex(v84 - 1, v83) );
        }
        else
          v84 = (*v83)--;
        if ( v84 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      sub_21E94B4((void **)&v97, "minecraft:on_target_escape");
      if ( !Json::Value::isNull((Json::Value *)v6) && Json::Value::isMember((int)v6, (const char **)&v97) == 1 )
        Json::Value::removeMember((Json::Value *)&v140, v6, (const char **)&v97);
        Json::Value::~Value((Json::Value *)&v140);
      v33 = (void *)(v97 - 12);
      if ( (int *)(v97 - 12) != &dword_28898C0 )
        v85 = (unsigned int *)(v97 - 4);
            v86 = __ldrex(v85);
          while ( __strex(v86 - 1, v85) );
          v86 = (*v85)--;
        if ( v86 <= 0 )
          j_j_j_j__ZdlPv_9(v33);
      v34 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
      v35 = (Json::Value *)Json::Value::operator[](v34, "component_groups");
      v36 = (const char *)Json::Value::operator[](v35, "minecraft:slime_calm");
      sub_21E94B4((void **)&v96, "minecraft:movement.jump");
      if ( !Json::Value::isNull((Json::Value *)v36) && Json::Value::isMember((int)v36, (const char **)&v96) == 1 )
        Json::Value::removeMember((Json::Value *)&v141, v36, (const char **)&v96);
        Json::Value::~Value((Json::Value *)&v141);
      v37 = (void *)(v96 - 12);
      if ( (int *)(v96 - 12) != &dword_28898C0 )
        v87 = (unsigned int *)(v96 - 4);
            v88 = __ldrex(v87);
          while ( __strex(v88 - 1, v87) );
          v88 = (*v87)--;
        if ( v88 <= 0 )
          j_j_j_j__ZdlPv_9(v37);
      v38 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
      v39 = (Json::Value *)Json::Value::operator[](v38, "component_groups");
      v40 = (const char *)Json::Value::operator[](v39, "minecraft:slime_aggressive");
      sub_21E94B4((void **)&v95, "minecraft:movement.jump");
      if ( !Json::Value::isNull((Json::Value *)v40) && Json::Value::isMember((int)v40, (const char **)&v95) == 1 )
        Json::Value::removeMember((Json::Value *)&v142, v40, (const char **)&v95);
        Json::Value::~Value((Json::Value *)&v142);
      v28 = (void *)(v95 - 12);
      if ( (int *)(v95 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v95 - 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          goto LABEL_234;
        goto LABEL_233;
  else
    switch ( v5 )
      case 2118425:
        v41 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
        v42 = (Json::Value *)Json::Value::operator[](v41, "component_groups");
        v43 = (const char *)Json::Value::operator[](v42, "minecraft:mule_saddled");
        sub_21E94B4((void **)&v102, "minecraft:input_ground_controlled");
        if ( !Json::Value::isNull((Json::Value *)v43) && Json::Value::isMember((int)v43, (const char **)&v102) == 1 )
          Json::Value::removeMember((Json::Value *)&v135, v43, (const char **)&v102);
          Json::Value::~Value((Json::Value *)&v135);
        v44 = (void *)(v102 - 12);
        if ( (int *)(v102 - 12) != &dword_28898C0 )
          v89 = (unsigned int *)(v102 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v90 = __ldrex(v89);
            while ( __strex(v90 - 1, v89) );
          }
          else
            v90 = (*v89)--;
          if ( v90 <= 0 )
            j_j_j_j__ZdlPv_9(v44);
        v45 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
        v46 = (Json::Value *)Json::Value::operator[](v45, "component_groups");
        v47 = (const char *)Json::Value::operator[](v46, "minecraft:mule_saddled");
        sub_21E94B4((void **)&v101, "minecraft:can_power_jump");
        if ( !Json::Value::isNull((Json::Value *)v47) && Json::Value::isMember((int)v47, (const char **)&v101) == 1 )
          Json::Value::removeMember((Json::Value *)&v136, v47, (const char **)&v101);
          Json::Value::~Value((Json::Value *)&v136);
        v28 = (void *)(v101 - 12);
        if ( (int *)(v101 - 12) != &dword_28898C0 )
          v29 = (unsigned int *)(v101 - 4);
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
            goto LABEL_234;
          goto LABEL_233;
        break;
      case 2118424:
        v48 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
        v49 = (Json::Value *)Json::Value::operator[](v48, "component_groups");
        v50 = (const char *)Json::Value::operator[](v49, "minecraft:donkey_saddled");
        sub_21E94B4((void **)&v100, "minecraft:input_ground_controlled");
        if ( !Json::Value::isNull((Json::Value *)v50) && Json::Value::isMember((int)v50, (const char **)&v100) == 1 )
          Json::Value::removeMember((Json::Value *)&v137, v50, (const char **)&v100);
          Json::Value::~Value((Json::Value *)&v137);
        v51 = (void *)(v100 - 12);
        if ( (int *)(v100 - 12) != &dword_28898C0 )
          v91 = (unsigned int *)(v100 - 4);
              v92 = __ldrex(v91);
            while ( __strex(v92 - 1, v91) );
            v92 = (*v91)--;
          if ( v92 <= 0 )
            j_j_j_j__ZdlPv_9(v51);
        v52 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
        v53 = (Json::Value *)Json::Value::operator[](v52, "component_groups");
        v54 = (const char *)Json::Value::operator[](v53, "minecraft:donkey_saddled");
        sub_21E94B4((void **)&v99, "minecraft:can_power_jump");
        if ( !Json::Value::isNull((Json::Value *)v54) && Json::Value::isMember((int)v54, (const char **)&v99) == 1 )
          Json::Value::removeMember((Json::Value *)&v138, v54, (const char **)&v99);
          Json::Value::~Value((Json::Value *)&v138);
        v28 = (void *)(v99 - 12);
        if ( (int *)(v99 - 12) != &dword_28898C0 )
          v29 = (unsigned int *)(v99 - 4);
      case 2118423:
        v21 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
        v22 = (Json::Value *)Json::Value::operator[](v21, "component_groups");
        v23 = (const char *)Json::Value::operator[](v22, "minecraft:horse_saddled");
        sub_21E94B4((void **)&v104, "minecraft:input_ground_controlled");
        if ( !Json::Value::isNull((Json::Value *)v23) && Json::Value::isMember((int)v23, (const char **)&v104) == 1 )
          Json::Value::removeMember((Json::Value *)&v133, v23, (const char **)&v104);
          Json::Value::~Value((Json::Value *)&v133);
        v24 = (void *)(v104 - 12);
        if ( (int *)(v104 - 12) != &dword_28898C0 )
          v93 = (unsigned int *)(v104 - 4);
              v94 = __ldrex(v93);
            while ( __strex(v94 - 1, v93) );
            v94 = (*v93)--;
          if ( v94 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        v25 = (Json::Value *)Json::Value::operator[](v4, "minecraft:entity");
        v26 = (Json::Value *)Json::Value::operator[](v25, "component_groups");
        v27 = (const char *)Json::Value::operator[](v26, "minecraft:horse_saddled");
        sub_21E94B4((void **)&v103, "minecraft:can_power_jump");
        if ( !Json::Value::isNull((Json::Value *)v27) && Json::Value::isMember((int)v27, (const char **)&v103) == 1 )
          Json::Value::removeMember((Json::Value *)&v134, v27, (const char **)&v103);
          Json::Value::~Value((Json::Value *)&v134);
        v28 = (void *)(v103 - 12);
        if ( (int *)(v103 - 12) != &dword_28898C0 )
          v29 = (unsigned int *)(v103 - 4);
LABEL_233:
          v30 = (*v29)--;
LABEL_234:
          if ( v30 <= 0 )
            j_j_j_j__ZdlPv_9(v28);
          return;
}


EntityDefinitionGroup *__fastcall EntityDefinitionGroup::~EntityDefinitionGroup(EntityDefinitionGroup *this)
{
  EntityDefinitionGroup *v1; // r10@1
  int i; // r0@1
  int v3; // r2@2
  _DWORD *v4; // r7@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  _DWORD *v7; // r6@13
  int v8; // r0@13
  int v9; // r1@13
  void *v10; // r0@13
  char *v11; // r0@15
  void *v12; // r0@18
  void *v13; // r4@19
  char *v14; // r0@20

  v1 = this;
  *(_DWORD *)this = &off_26F1548;
  for ( i = *((_DWORD *)this + 3); i; i = *(_DWORD *)i )
  {
    v3 = *(_DWORD *)(i + 4);
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v3 + 4) = 0;
  }
  v4 = (_DWORD *)*((_DWORD *)v1 + 17);
  while ( v4 )
    v7 = v4;
    v8 = (int)(v4 + 2);
    v4 = (_DWORD *)*v4;
    std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<EntityDefinition,std::default_delete<EntityDefinition>>>,std::allocator<std::pair<std::string const,std::unique_ptr<EntityDefinition,std::default_delete<EntityDefinition>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::~_Hashtable(v8);
    v9 = v7[1];
    v10 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v9 - 4);
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
        j_j_j_j__ZdlPv_9(v10);
    }
    operator delete(v7);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 60), 4 * (*(_QWORD *)((char *)v1 + 60) >> 32));
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = 0;
  v11 = (char *)*((_DWORD *)v1 + 15);
  if ( v11 && (char *)v1 + 84 != v11 )
    operator delete(v11);
  std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<EntityDefinition,std::default_delete<EntityDefinition>>>,std::allocator<std::pair<std::string const,std::unique_ptr<EntityDefinition,std::default_delete<EntityDefinition>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::~_Hashtable((int)v1 + 32);
  v12 = (void *)*((_DWORD *)v1 + 3);
  if ( v12 )
    do
      v13 = *(void **)v12;
      operator delete(v12);
      v12 = v13;
    while ( v13 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  v14 = (char *)*((_DWORD *)v1 + 1);
  if ( v14 && (char *)v1 + 28 != v14 )
    operator delete(v14);
  return v1;
}


Json::Value *__fastcall EntityDefinitionGroup::_upgradeTo11Entity(int a1, Json::Value *a2, Json::Value *a3, signed int a4)
{
  signed int v5; // r6@1
  Json::Value *v6; // r4@1
  Json::Value *v7; // r9@1
  Json::Value *result; // r0@1
  Json::Value *v10; // r0@24
  int v11; // r4@24
  int v12; // r0@28
  void *v13; // r0@29
  int v14; // r0@32
  void *v15; // r0@33
  int v16; // r0@36
  void *v17; // r0@37
  Json::Value *v18; // r0@43
  int v19; // r5@43
  int v20; // r0@45
  void *v21; // r0@46
  int v22; // r0@49
  void *v23; // r0@50
  int v24; // r0@53
  void *v25; // r0@54
  int v26; // r5@55
  int v27; // r5@55
  int v28; // r5@55
  int v29; // r5@55
  int v30; // r5@55
  __int64 v31; // r0@55
  int v32; // r5@55
  int v37; // r1@55
  int v38; // r5@55
  int v40; // r1@55
  int v41; // r0@55
  int v42; // r0@57
  void *v43; // r0@58
  int v44; // r0@68
  void *v45; // r0@69
  Json::Value *v46; // r0@71
  int v47; // r6@71
  int v48; // r6@71
  int v49; // r6@71
  int v50; // r6@71
  int v51; // r6@71
  Json::Value *v52; // r0@71
  Json::Value *v53; // r6@71
  int v54; // r0@73
  void *v55; // r0@74
  Json::Value *v56; // r0@75
  Json::Value *v57; // r0@75
  Json::Value *v58; // r6@75
  int v59; // r0@77
  void *v60; // r0@78
  int v61; // r6@79
  int v62; // r6@79
  int v63; // r0@81
  void *v64; // r0@82
  int v65; // r0@85
  void *v66; // r0@86
  int v67; // r6@87
  int v68; // r6@87
  int v69; // r0@89
  void *v70; // r0@90
  Json::Value *v71; // r0@91
  Json::Value *v72; // r6@91
  int v73; // r0@93
  void *v74; // r0@94
  Json::Value *v75; // r0@95
  Json::Value *v76; // r0@95
  Json::Value *v77; // r6@95
  int v78; // r0@97
  void *v79; // r0@98
  Json::Value *v80; // r0@99
  Json::Value *v81; // r0@99
  Json::Value *v82; // r6@99
  int v83; // r0@101
  void *v84; // r0@102
  Json::Value *v85; // r0@103
  Json::Value *v86; // r0@103
  Json::Value *v87; // r0@103
  Json::Value *v88; // r6@103
  int v89; // r0@105
  void *v90; // r0@106
  Json::Value *v91; // r0@107
  Json::Value *v92; // r0@107
  Json::Value *v93; // r0@107
  Json::Value *v94; // r0@107
  Json::Value *v95; // r5@107
  int v96; // r0@110
  void *v97; // r0@111
  int v98; // r0@114
  void *v99; // r0@115
  Json::Value *v100; // r0@120
  int v101; // r5@120
  int v102; // r0@122
  void *v103; // r0@123
  int v104; // r0@126
  void *v105; // r0@127
  int v106; // r0@130
  void *v107; // r0@131
  int v108; // r0@134
  void *v109; // r0@135
  Json::Value *v110; // r0@138
  int v111; // r5@138
  int v112; // r5@138
  int v113; // r5@138
  int v114; // r5@138
  int v115; // r5@138
  int v116; // r0@140
  void *v117; // r0@141
  int v118; // r0@144
  void *v119; // r0@145
  int v120; // r0@148
  void *v121; // r0@149
  int v122; // r0@152
  void *v123; // r0@153
  int v124; // r0@156
  void *v125; // r0@157
  Json::Value *v126; // r0@166
  Json::Value *v127; // r0@166
  Json::Value *v128; // r7@166
  int v129; // r0@169
  void *v130; // r0@170
  int v131; // r0@173
  void *v132; // r0@174
  Json::Value *v133; // r0@177
  EntityDefinitionGroup *v134; // r0@177
  Json::Value *v135; // r0@178
  Json::Value *v136; // r0@178
  Json::Value *v137; // r0@178
  Json::Value *v138; // r0@178
  EntityDefinitionGroup *v139; // r0@178
  void *v140; // r0@179
  void *v141; // r0@180
  Json::Value *v142; // r0@181
  int v143; // r5@181
  int v144; // r5@181
  int v145; // r0@183
  void *v146; // r0@184
  Json::Value *v147; // r0@186
  int v148; // r5@186
  int v149; // r5@186
  int v150; // r0@188
  void *v151; // r0@189
  int v152; // r0@192
  void *v153; // r0@193
  Json::Value *v154; // r0@195
  int v155; // r5@195
  int v156; // r5@195
  int v157; // r5@195
  int v158; // r5@195
  int v159; // r0@197
  void *v160; // r0@198
  Json::Value *v161; // r0@200
  int v162; // r5@200
  int v163; // r5@200
  int v164; // r0@202
  void *v165; // r0@203
  Json::Value *v166; // r0@205
  int v167; // r5@205
  int v168; // r5@205
  int v169; // r0@207
  void *v170; // r0@208
  Json::Value *v171; // r0@210
  int v172; // r5@210
  int v173; // r5@210
  int v174; // r0@212
  void *v175; // r0@213
  Json::Value *v176; // r0@215
  int v177; // r5@215
  int v178; // r0@217
  void *v179; // r0@218
  int v180; // r0@221
  void *v181; // r0@222
  int v182; // r0@225
  void *v183; // r0@226
  int v184; // r0@229
  void *v185; // r0@230
  unsigned int *v186; // r2@233
  signed int v187; // r1@235
  unsigned int *v188; // r2@237
  signed int v189; // r1@239
  unsigned int *v190; // r2@241
  signed int v191; // r1@243
  unsigned int *v192; // r2@245
  signed int v193; // r1@247
  unsigned int *v194; // r2@249
  signed int v195; // r1@251
  unsigned int *v196; // r2@253
  signed int v197; // r1@255
  unsigned int *v198; // r2@273
  signed int v199; // r1@275
  Json::Value *v200; // r0@282
  int v201; // r5@282
  int v202; // r5@282
  int v203; // r0@284
  void *v204; // r0@285
  int v205; // r0@288
  void *v206; // r0@289
  unsigned int *v207; // r2@295
  signed int v208; // r1@297
  __int64 v209; // r0@299
  int v210; // r6@299
  int v212; // r1@299
  int v213; // r6@299
  int v215; // r1@299
  int v216; // r0@299
  int v217; // r0@301
  void *v218; // r0@302
  Json::Value *v219; // r0@303
  Json::Value *v220; // r6@303
  int v221; // r0@305
  void *v222; // r0@306
  Json::Value *v223; // r0@307
  Json::Value *v224; // r0@307
  Json::Value *v225; // r6@307
  int v226; // r0@309
  void *v227; // r0@310
  int v228; // r6@311
  int v230; // r1@311
  int v231; // r6@311
  int v232; // r1@311
  int v233; // r0@311
  Json::Value *v234; // r0@311
  Json::Value *v235; // r6@311
  int v236; // r0@313
  void *v237; // r0@314
  Json::Value *v238; // r0@315
  Json::Value *v239; // r0@315
  Json::Value *v240; // r6@315
  int v241; // r0@317
  void *v242; // r0@318
  Json::Value *v243; // r0@320
  int v244; // r6@320
  int v245; // r6@320
  int v246; // r0@322
  void *v247; // r0@323
  int v248; // r0@326
  void *v249; // r0@327
  int v250; // r0@330
  void *v251; // r0@331
  __int64 v252; // r0@332
  int v253; // r6@332
  int v255; // r1@332
  int v256; // r6@332
  int v258; // r1@332
  int v259; // r0@332
  int v260; // r0@334
  void *v261; // r0@335
  int v262; // r6@336
  int v263; // r6@336
  int v264; // r0@338
  void *v265; // r0@339
  int v266; // r6@340
  int v267; // r6@340
  int v268; // r0@342
  void *v269; // r0@343
  Json::Value *v270; // r0@344
  Json::Value *v271; // r4@344
  int v272; // r0@346
  void *v273; // r0@347
  Json::Value *v274; // r0@348
  Json::Value *v275; // r0@348
  Json::Value *v276; // r4@348
  int v277; // r0@350
  void *v278; // r0@351
  int v279; // r4@352
  int v281; // r1@352
  int v282; // r4@352
  int v283; // r1@352
  int v284; // r0@352
  Json::Value *v285; // r0@352
  Json::Value *v286; // r4@352
  int v287; // r0@354
  void *v288; // r0@355
  Json::Value *v289; // r0@356
  Json::Value *v290; // r0@356
  Json::Value *v291; // r4@356
  int v292; // r0@358
  void *v293; // r0@359
  Json::Value *v294; // r4@360
  int v295; // r0@362
  void *v296; // r0@363
  Json::Value *v297; // r0@364
  Json::Value *v298; // r4@364
  int v299; // r0@366
  void *v300; // r0@367
  Json::Value *v301; // r0@368
  Json::Value *v302; // r0@368
  Json::Value *v303; // r4@368
  int v304; // r0@370
  void *v305; // r0@371
  Json::Value *v306; // r0@372
  Json::Value *v307; // r0@372
  Json::Value *v308; // r0@372
  Json::Value *v309; // r4@372
  int v310; // r0@374
  void *v311; // r0@375
  Json::Value *v312; // r0@376
  Json::Value *v313; // r0@376
  Json::Value *v314; // r0@376
  Json::Value *v315; // r0@376
  Json::Value *v316; // r4@376
  Json::Value *v317; // r0@376
  Json::Value *v318; // r4@376
  int v319; // r0@378
  void *v320; // r0@379
  Json::Value *v321; // r0@380
  Json::Value *v322; // r0@380
  Json::Value *v323; // r4@380
  int v324; // r0@382
  void *v325; // r0@383
  Json::Value *v326; // r0@384
  Json::Value *v327; // r0@384
  Json::Value *v328; // r0@384
  Json::Value *v329; // r4@384
  int v330; // r0@386
  void *v331; // r0@387
  Json::Value *v332; // r0@388
  Json::Value *v333; // r0@388
  Json::Value *v334; // r0@388
  Json::Value *v335; // r0@388
  Json::Value *v336; // r4@388
  Json::Value *v337; // r0@388
  Json::Value *v338; // r4@388
  int v339; // r0@390
  void *v340; // r0@391
  Json::Value *v341; // r0@392
  Json::Value *v342; // r0@392
  Json::Value *v343; // r4@392
  int v344; // r0@394
  void *v345; // r0@395
  Json::Value *v346; // r0@396
  Json::Value *v347; // r0@396
  Json::Value *v348; // r0@396
  Json::Value *v349; // r4@396
  int v350; // r0@398
  void *v351; // r0@399
  Json::Value *v352; // r0@400
  Json::Value *v353; // r0@400
  Json::Value *v354; // r0@400
  Json::Value *v355; // r0@400
  Json::Value *v356; // r4@400
  Json::Value *v357; // r0@401
  int v358; // r5@401
  int v359; // r0@403
  void *v360; // r0@404
  int v361; // r0@407
  void *v362; // r0@408
  int v363; // r5@409
  int v364; // r5@409
  int v365; // r0@411
  void *v366; // r0@412
  Json::Value *v367; // r0@414
  int v368; // r5@414
  int v369; // r5@414
  int v370; // r0@416
  void *v371; // r0@417
  int v372; // r0@420
  void *v373; // r0@421
  int v374; // r0@424
  void *v375; // r0@425
  int v376; // r0@428
  void *v377; // r0@429
  unsigned int *v378; // r2@435
  signed int v379; // r1@437
  unsigned int *v380; // r2@439
  signed int v381; // r1@441
  unsigned int *v382; // r2@443
  signed int v383; // r1@445
  unsigned int *v384; // r2@447
  signed int v385; // r1@449
  unsigned int *v386; // r2@455
  signed int v387; // r1@457
  unsigned int *v388; // r2@459
  signed int v389; // r1@461
  unsigned int *v390; // r2@463
  signed int v391; // r1@465
  unsigned int *v392; // r2@467
  signed int v393; // r1@469
  unsigned int *v394; // r2@471
  signed int v395; // r1@473
  unsigned int *v396; // r2@475
  signed int v397; // r1@477
  unsigned int *v398; // r2@479
  signed int v399; // r1@481
  unsigned int *v400; // r2@483
  signed int v401; // r1@485
  unsigned int *v402; // r2@487
  signed int v403; // r1@489
  unsigned int *v404; // r2@491
  signed int v405; // r1@493
  unsigned int *v406; // r2@495
  signed int v407; // r1@497
  unsigned int *v408; // r2@499
  signed int v409; // r1@501
  unsigned int *v410; // r2@503
  signed int v411; // r1@505
  unsigned int *v412; // r2@567
  signed int v413; // r1@569
  unsigned int *v414; // r2@571
  signed int v415; // r1@573
  unsigned int *v416; // r2@575
  signed int v417; // r1@577
  unsigned int *v418; // r2@579
  signed int v419; // r1@581
  unsigned int *v420; // r2@583
  signed int v421; // r1@585
  unsigned int *v422; // r2@587
  signed int v423; // r1@589
  unsigned int *v424; // r2@591
  signed int v425; // r1@593
  unsigned int *v426; // r2@595
  signed int v427; // r1@597
  unsigned int *v428; // r2@599
  signed int v429; // r1@601
  unsigned int *v430; // r2@603
  signed int v431; // r1@605
  unsigned int *v432; // r2@615
  signed int v433; // r1@617
  unsigned int *v434; // r2@619
  signed int v435; // r1@621
  unsigned int *v436; // r2@623
  signed int v437; // r1@625
  unsigned int *v438; // r2@627
  signed int v439; // r1@629
  unsigned int *v440; // r2@631
  signed int v441; // r1@633
  unsigned int *v442; // r2@635
  signed int v443; // r1@637
  unsigned int *v444; // r2@639
  signed int v445; // r1@641
  unsigned int *v446; // r2@643
  signed int v447; // r1@645
  unsigned int *v448; // r2@647
  signed int v449; // r1@649
  unsigned int *v450; // r2@651
  signed int v451; // r1@653
  unsigned int *v452; // r2@655
  signed int v453; // r1@657
  unsigned int *v454; // r2@659
  signed int v455; // r1@661
  unsigned int *v456; // r2@663
  signed int v457; // r1@665
  unsigned int *v458; // r2@667
  signed int v459; // r1@669
  unsigned int *v460; // r2@671
  signed int v461; // r1@673
  unsigned int *v462; // r2@675
  signed int v463; // r1@677
  unsigned int *v464; // r2@679
  signed int v465; // r1@681
  unsigned int *v466; // r2@683
  signed int v467; // r1@685
  unsigned int *v468; // r2@687
  signed int v469; // r1@689
  unsigned int *v470; // r2@691
  signed int v471; // r1@693
  unsigned int *v472; // r2@695
  signed int v473; // r1@697
  unsigned int *v474; // r2@699
  signed int v475; // r1@701
  unsigned int *v476; // r2@703
  signed int v477; // r1@705
  unsigned int *v478; // r2@751
  signed int v479; // r1@753
  unsigned int *v480; // r2@763
  signed int v481; // r1@765
  unsigned int *v482; // r2@767
  signed int v483; // r1@769
  unsigned int *v484; // r2@771
  signed int v485; // r1@773
  unsigned int *v486; // r2@775
  signed int v487; // r1@777
  unsigned int *v488; // r2@779
  signed int v489; // r1@781
  unsigned int *v490; // r2@791
  signed int v491; // r1@793
  unsigned int *v492; // r2@799
  signed int v493; // r1@801
  unsigned int *v494; // r2@871
  signed int v495; // r1@873
  unsigned int *v496; // r2@875
  signed int v497; // r1@877
  unsigned int *v498; // r2@879
  signed int v499; // r1@881
  unsigned int *v500; // r2@883
  signed int v501; // r1@885
  unsigned int *v502; // r2@887
  signed int v503; // r1@889
  unsigned int *v504; // r2@891
  signed int v505; // r1@893
  unsigned int *v506; // r2@895
  signed int v507; // r1@897
  unsigned int *v508; // r2@899
  signed int v509; // r1@901
  unsigned int *v510; // r2@903
  signed int v511; // r1@905
  unsigned int *v512; // r2@907
  signed int v513; // r1@909
  unsigned int *v514; // r2@911
  signed int v515; // r1@913
  int v516; // [sp+0h] [bp-B18h]@24
  int v517; // [sp+14h] [bp-B04h]@286
  int v518; // [sp+1Ch] [bp-AFCh]@282
  char v519; // [sp+20h] [bp-AF8h]@282
  char v520; // [sp+30h] [bp-AE8h]@282
  char v521; // [sp+40h] [bp-AD8h]@282
  char v522; // [sp+50h] [bp-AC8h]@282
  int v523; // [sp+64h] [bp-AB4h]@66
  char v524; // [sp+68h] [bp-AB0h]@66
  int v525; // [sp+7Ch] [bp-A9Ch]@112
  char v526; // [sp+80h] [bp-A98h]@112
  int v527; // [sp+94h] [bp-A84h]@108
  char v528; // [sp+98h] [bp-A80h]@108
  char v529; // [sp+A8h] [bp-A70h]@107
  int v530; // [sp+BCh] [bp-A5Ch]@103
  char v531; // [sp+C0h] [bp-A58h]@103
  int v532; // [sp+D4h] [bp-A44h]@99
  char v533; // [sp+D8h] [bp-A40h]@99
  int v534; // [sp+ECh] [bp-A2Ch]@95
  char v535; // [sp+F0h] [bp-A28h]@95
  int v536; // [sp+104h] [bp-A14h]@91
  char v537; // [sp+108h] [bp-A10h]@91
  int v538; // [sp+11Ch] [bp-9FCh]@87
  char v539; // [sp+120h] [bp-9F8h]@87
  char v540; // [sp+130h] [bp-9E8h]@87
  char v541; // [sp+140h] [bp-9D8h]@87
  int v542; // [sp+154h] [bp-9C4h]@83
  char v543; // [sp+158h] [bp-9C0h]@83
  int v544; // [sp+16Ch] [bp-9ACh]@79
  char v545; // [sp+170h] [bp-9A8h]@79
  char v546; // [sp+180h] [bp-998h]@79
  char v547; // [sp+190h] [bp-988h]@79
  int v548; // [sp+1A4h] [bp-974h]@75
  int v549; // [sp+1ACh] [bp-96Ch]@71
  char v550; // [sp+1B0h] [bp-968h]@71
  char v551; // [sp+1C0h] [bp-958h]@71
  char v552; // [sp+1D0h] [bp-948h]@71
  char v553; // [sp+1E0h] [bp-938h]@71
  char v554; // [sp+1F0h] [bp-928h]@71
  char v555; // [sp+200h] [bp-918h]@71
  char v556; // [sp+210h] [bp-908h]@71
  int v557; // [sp+224h] [bp-8F4h]@132
  char v558; // [sp+228h] [bp-8F0h]@132
  int v559; // [sp+23Ch] [bp-8DCh]@128
  char v560; // [sp+240h] [bp-8D8h]@128
  int v561; // [sp+254h] [bp-8C4h]@124
  char v562; // [sp+258h] [bp-8C0h]@124
  int v563; // [sp+26Ch] [bp-8ACh]@120
  char v564; // [sp+270h] [bp-8A8h]@120
  char v565; // [sp+280h] [bp-898h]@120
  int v566; // [sp+294h] [bp-884h]@154
  int v567; // [sp+29Ch] [bp-87Ch]@150
  char v568; // [sp+2A0h] [bp-878h]@150
  int v569; // [sp+2B4h] [bp-864h]@146
  char v570; // [sp+2B8h] [bp-860h]@146
  int v571; // [sp+2CCh] [bp-84Ch]@142
  char v572; // [sp+2D0h] [bp-848h]@142
  int v573; // [sp+2E4h] [bp-834h]@138
  char v574; // [sp+2E8h] [bp-830h]@138
  char v575; // [sp+2F8h] [bp-820h]@138
  char v576; // [sp+308h] [bp-810h]@138
  char v577; // [sp+318h] [bp-800h]@138
  char v578; // [sp+328h] [bp-7F0h]@138
  char v579; // [sp+338h] [bp-7E0h]@138
  char v580; // [sp+348h] [bp-7D0h]@138
  int v581; // [sp+35Ch] [bp-7BCh]@55
  char v582; // [sp+360h] [bp-7B8h]@55
  char v583; // [sp+370h] [bp-7A8h]@55
  char v584; // [sp+380h] [bp-798h]@55
  char v585; // [sp+390h] [bp-788h]@55
  char v586; // [sp+3A0h] [bp-778h]@55
  char v587; // [sp+3B0h] [bp-768h]@55
  char v588; // [sp+3C0h] [bp-758h]@55
  char v589; // [sp+3D0h] [bp-748h]@55
  char v590; // [sp+3E0h] [bp-738h]@55
  int v591; // [sp+3F4h] [bp-724h]@51
  char v592; // [sp+3F8h] [bp-720h]@51
  int v593; // [sp+40Ch] [bp-70Ch]@47
  char v594; // [sp+410h] [bp-708h]@47
  int v595; // [sp+424h] [bp-6F4h]@43
  char v596; // [sp+428h] [bp-6F0h]@43
  char v597; // [sp+438h] [bp-6E0h]@43
  int v598; // [sp+44Ch] [bp-6CCh]@409
  char v599; // [sp+450h] [bp-6C8h]@409
  char v600; // [sp+460h] [bp-6B8h]@409
  char v601; // [sp+470h] [bp-6A8h]@409
  int v602; // [sp+484h] [bp-694h]@405
  char v603; // [sp+488h] [bp-690h]@405
  int v604; // [sp+49Ch] [bp-67Ch]@401
  char v605; // [sp+4A0h] [bp-678h]@401
  char v606; // [sp+4B0h] [bp-668h]@401
  int v607; // [sp+4C4h] [bp-654h]@34
  char v608; // [sp+4C8h] [bp-650h]@34
  int v609; // [sp+4DCh] [bp-63Ch]@30
  char v610; // [sp+4E0h] [bp-638h]@30
  int v611; // [sp+4F4h] [bp-624h]@26
  char v612; // [sp+4F8h] [bp-620h]@26
  int v613; // [sp+50Ch] [bp-60Ch]@426
  char v614; // [sp+510h] [bp-608h]@426
  int v615; // [sp+524h] [bp-5F4h]@422
  char v616; // [sp+528h] [bp-5F0h]@422
  int v617; // [sp+53Ch] [bp-5DCh]@418
  char v618; // [sp+540h] [bp-5D8h]@418
  int v619; // [sp+554h] [bp-5C4h]@414
  char v620; // [sp+558h] [bp-5C0h]@414
  char v621; // [sp+568h] [bp-5B0h]@414
  char v622; // [sp+578h] [bp-5A0h]@414
  char v623; // [sp+588h] [bp-590h]@400
  int v624; // [sp+59Ch] [bp-57Ch]@396
  char v625; // [sp+5A0h] [bp-578h]@396
  int v626; // [sp+5B4h] [bp-564h]@392
  char v627; // [sp+5B8h] [bp-560h]@392
  int v628; // [sp+5CCh] [bp-54Ch]@388
  char v629; // [sp+5D0h] [bp-548h]@388
  char v630; // [sp+5E0h] [bp-538h]@388
  int v631; // [sp+5F4h] [bp-524h]@384
  char v632; // [sp+5F8h] [bp-520h]@384
  int v633; // [sp+60Ch] [bp-50Ch]@380
  char v634; // [sp+610h] [bp-508h]@380
  int v635; // [sp+624h] [bp-4F4h]@376
  char v636; // [sp+628h] [bp-4F0h]@376
  char v637; // [sp+638h] [bp-4E0h]@376
  int v638; // [sp+64Ch] [bp-4CCh]@372
  char v639; // [sp+650h] [bp-4C8h]@372
  int v640; // [sp+664h] [bp-4B4h]@368
  char v641; // [sp+668h] [bp-4B0h]@368
  int v642; // [sp+67Ch] [bp-49Ch]@364
  char v643; // [sp+680h] [bp-498h]@364
  int v644; // [sp+694h] [bp-484h]@360
  char v645; // [sp+698h] [bp-480h]@360
  int v646; // [sp+6ACh] [bp-46Ch]@356
  int v647; // [sp+6B4h] [bp-464h]@352
  char v648; // [sp+6B8h] [bp-460h]@352
  char v649; // [sp+6C8h] [bp-450h]@352
  char v650; // [sp+6D8h] [bp-440h]@352
  int v651; // [sp+6ECh] [bp-42Ch]@348
  int v652; // [sp+6F4h] [bp-424h]@344
  char v653; // [sp+6F8h] [bp-420h]@344
  int v654; // [sp+70Ch] [bp-40Ch]@340
  char v655; // [sp+710h] [bp-408h]@340
  char v656; // [sp+720h] [bp-3F8h]@340
  int v657; // [sp+734h] [bp-3E4h]@336
  char v658; // [sp+738h] [bp-3E0h]@336
  char v659; // [sp+748h] [bp-3D0h]@336
  char v660; // [sp+758h] [bp-3C0h]@336
  int v661; // [sp+76Ch] [bp-3ACh]@332
  char v662; // [sp+770h] [bp-3A8h]@332
  char v663; // [sp+780h] [bp-398h]@332
  char v664; // [sp+790h] [bp-388h]@332
  char v665; // [sp+7A0h] [bp-378h]@332
  int v666; // [sp+7B4h] [bp-364h]@328
  char v667; // [sp+7B8h] [bp-360h]@328
  int v668; // [sp+7CCh] [bp-34Ch]@324
  char v669; // [sp+7D0h] [bp-348h]@324
  int v670; // [sp+7E4h] [bp-334h]@320
  char v671; // [sp+7E8h] [bp-330h]@320
  char v672; // [sp+7F8h] [bp-320h]@320
  char v673; // [sp+808h] [bp-310h]@320
  int v674; // [sp+81Ch] [bp-2FCh]@315
  int v675; // [sp+824h] [bp-2F4h]@311
  char v676; // [sp+828h] [bp-2F0h]@311
  char v677; // [sp+838h] [bp-2E0h]@311
  char v678; // [sp+848h] [bp-2D0h]@311
  int v679; // [sp+85Ch] [bp-2BCh]@307
  int v680; // [sp+864h] [bp-2B4h]@303
  char v681; // [sp+868h] [bp-2B0h]@303
  int v682; // [sp+87Ch] [bp-29Ch]@299
  char v683; // [sp+880h] [bp-298h]@299
  char v684; // [sp+890h] [bp-288h]@299
  char v685; // [sp+8A0h] [bp-278h]@299
  char v686; // [sp+8B0h] [bp-268h]@299
  int v687; // [sp+8C4h] [bp-254h]@227
  char v688; // [sp+8C8h] [bp-250h]@227
  int v689; // [sp+8DCh] [bp-23Ch]@223
  char v690; // [sp+8E0h] [bp-238h]@223
  int v691; // [sp+8F4h] [bp-224h]@219
  char v692; // [sp+8F8h] [bp-220h]@219
  int v693; // [sp+90Ch] [bp-20Ch]@215
  char v694; // [sp+910h] [bp-208h]@215
  char v695; // [sp+920h] [bp-1F8h]@215
  int v696; // [sp+934h] [bp-1E4h]@210
  char v697; // [sp+938h] [bp-1E0h]@210
  char v698; // [sp+948h] [bp-1D0h]@210
  char v699; // [sp+958h] [bp-1C0h]@210
  int v700; // [sp+96Ch] [bp-1ACh]@205
  char v701; // [sp+970h] [bp-1A8h]@205
  char v702; // [sp+980h] [bp-198h]@205
  char v703; // [sp+990h] [bp-188h]@205
  int v704; // [sp+9A4h] [bp-174h]@200
  char v705; // [sp+9A8h] [bp-170h]@200
  char v706; // [sp+9B8h] [bp-160h]@200
  char v707; // [sp+9C8h] [bp-150h]@200
  int v708; // [sp+9DCh] [bp-13Ch]@195
  char v709; // [sp+9E0h] [bp-138h]@195
  char v710; // [sp+9F0h] [bp-128h]@195
  char v711; // [sp+A00h] [bp-118h]@195
  char v712; // [sp+A10h] [bp-108h]@195
  char v713; // [sp+A20h] [bp-F8h]@195
  int v714; // [sp+A34h] [bp-E4h]@190
  char v715; // [sp+A38h] [bp-E0h]@190
  int v716; // [sp+A4Ch] [bp-CCh]@186
  char v717; // [sp+A50h] [bp-C8h]@186
  char v718; // [sp+A60h] [bp-B8h]@186
  char v719; // [sp+A70h] [bp-A8h]@186
  int v720; // [sp+A84h] [bp-94h]@181
  char v721; // [sp+A88h] [bp-90h]@181
  char v722; // [sp+A98h] [bp-80h]@181
  char v723; // [sp+AA8h] [bp-70h]@181
  int v724; // [sp+ABCh] [bp-5Ch]@171
  char v725; // [sp+AC0h] [bp-58h]@171
  int v726; // [sp+AD4h] [bp-44h]@167
  char v727; // [sp+AD8h] [bp-40h]@167
  int v728; // [sp+AECh] [bp-2Ch]@63
  int v729; // [sp+AF4h] [bp-24h]@63

  v5 = a4;
  v6 = a3;
  v7 = a2;
  result = (Json::Value *)4891;
  if ( a4 > 4891 )
  {
    if ( a4 > 264998 )
    {
      if ( a4 <= 1116961 )
      {
        _ZF = a4 == 264999;
        if ( a4 != 264999 )
          _ZF = a4 == 265015;
        if ( _ZF )
          goto LABEL_215;
        result = (Json::Value *)524372;
        if ( a4 != 524372 )
          return result;
        goto LABEL_23;
      }
      if ( (unsigned int)(a4 - 1116962) > 0xE || !((1 << (a4 - 34)) & 0x5001) )
        if ( (unsigned int)(a4 - 2118423) >= 3 )
        {
          result = (Json::Value *)(a4 - 2186010);
          if ( (unsigned int)(a4 - 2186010) >= 2 )
            return result;
          goto LABEL_200;
        }
        sub_21E94B4((void **)&v729, (const char *)&unk_257BC67);
        sub_21E94B4((void **)&v728, (const char *)&unk_257BC67);
        if ( v5 == 2118423 )
          sub_21E8190((void **)&v729, "minecraft:horse_saddled", (_BYTE *)0x17);
          sub_21E8190((void **)&v728, "minecraft:horse_tamed", (_BYTE *)0x15);
        else if ( v5 == 2118425 )
          sub_21E8190((void **)&v729, "minecraft:mule_saddled", (_BYTE *)0x16);
          sub_21E8190((void **)&v728, "minecraft:mule_tamed", (_BYTE *)0x14);
        else
          sub_21E8190((void **)&v729, "minecraft:donkey_saddled", (_BYTE *)0x18);
          sub_21E8190((void **)&v728, "minecraft:donkey_tamed", (_BYTE *)0x16);
        v126 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v127 = (Json::Value *)Json::Value::operator[](v126, "component_groups");
        v128 = (Json::Value *)Json::Value::operator[](v127, (const char **)&v729);
        if ( !Json::Value::isNull(v128) )
          Json::Value::Value(&v727, 7);
          sub_21E94B4((void **)&v726, "minecraft:input_ground_controlled");
          if ( !Json::Value::isNull(v128) && !Json::Value::isMember((int)v128, (const char **)&v726) )
          {
            v129 = Json::Value::operator[](v128, (const char **)&v726);
            Json::Value::operator=(v129, (const Json::Value *)&v727);
          }
          v130 = (void *)(v726 - 12);
          if ( (int *)(v726 - 12) != &dword_28898C0 )
            v428 = (unsigned int *)(v726 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v429 = __ldrex(v428);
              while ( __strex(v429 - 1, v428) );
            }
            else
              v429 = (*v428)--;
            if ( v429 <= 0 )
              j_j_j_j__ZdlPv_9(v130);
          Json::Value::~Value((Json::Value *)&v727);
          Json::Value::Value(&v725, 7);
          sub_21E94B4((void **)&v724, "minecraft:can_power_jump");
          if ( !Json::Value::isNull(v128) && !Json::Value::isMember((int)v128, (const char **)&v724) )
            v131 = Json::Value::operator[](v128, (const char **)&v724);
            Json::Value::operator=(v131, (const Json::Value *)&v725);
          v132 = (void *)(v724 - 12);
          if ( (int *)(v724 - 12) != &dword_28898C0 )
            v430 = (unsigned int *)(v724 - 4);
                v431 = __ldrex(v430);
              while ( __strex(v431 - 1, v430) );
              v431 = (*v430)--;
            if ( v431 <= 0 )
              j_j_j_j__ZdlPv_9(v132);
          Json::Value::~Value((Json::Value *)&v725);
          v133 = (Json::Value *)Json::Value::operator[](v6, "minecraft:equippable");
          v134 = (EntityDefinitionGroup *)Json::Value::operator[](v133, "slots");
          EntityDefinitionGroup::_fixHorseSlots(v134, v134);
          v135 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
          v136 = (Json::Value *)Json::Value::operator[](v135, "component_groups");
          v137 = (Json::Value *)Json::Value::operator[](v136, (const char **)&v728);
          v138 = (Json::Value *)Json::Value::operator[](v137, "minecraft:equippable");
          v139 = (EntityDefinitionGroup *)Json::Value::operator[](v138, "slots");
          EntityDefinitionGroup::_fixHorseSlots(v139, v139);
        v140 = (void *)(v728 - 12);
        if ( (int *)(v728 - 12) != &dword_28898C0 )
          v408 = (unsigned int *)(v728 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v409 = __ldrex(v408);
            while ( __strex(v409 - 1, v408) );
          else
            v409 = (*v408)--;
          if ( v409 <= 0 )
            j_j_j_j__ZdlPv_9(v140);
        v141 = (void *)(v729 - 12);
        if ( (int *)(v729 - 12) != &dword_28898C0 )
          v410 = (unsigned int *)(v729 - 4);
              v411 = __ldrex(v410);
            while ( __strex(v411 - 1, v410) );
            v411 = (*v410)--;
          if ( v411 <= 0 )
            j_j_j_j__ZdlPv_9(v141);
LABEL_181:
        v142 = (Json::Value *)Json::Value::Value(&v723, 7);
        v143 = Json::Value::operator[](v142, "can_float");
        Json::Value::Value((Json::Value *)&v722, 1);
        Json::Value::operator=(v143, (const Json::Value *)&v722);
        Json::Value::~Value((Json::Value *)&v722);
        v144 = Json::Value::operator[]((Json::Value *)&v723, "avoid_water");
        Json::Value::Value((Json::Value *)&v721, 0);
        Json::Value::operator=(v144, (const Json::Value *)&v721);
        Json::Value::~Value((Json::Value *)&v721);
        sub_21E94B4((void **)&v720, "minecraft:navigation.walk");
        if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v720) )
          v145 = Json::Value::operator[](v6, (const char **)&v720);
          Json::Value::operator=(v145, (const Json::Value *)&v723);
        v146 = (void *)(v720 - 12);
        if ( (int *)(v720 - 12) != &dword_28898C0 )
          v406 = (unsigned int *)(v720 - 4);
              v407 = __ldrex(v406);
            while ( __strex(v407 - 1, v406) );
            v407 = (*v406)--;
          if ( v407 <= 0 )
            j_j_j_j__ZdlPv_9(v146);
        Json::Value::~Value((Json::Value *)&v723);
        goto LABEL_186;
    }
    else if ( a4 <= 68387 )
      if ( a4 <= 21261 )
        if ( a4 != 4892 )
          result = (Json::Value *)8977;
          if ( a4 != 8977 )
        goto LABEL_215;
      if ( a4 != 21262 )
        if ( a4 == 21270 )
LABEL_200:
          v161 = (Json::Value *)Json::Value::Value(&v707, 7);
          v162 = Json::Value::operator[](v161, "can_float");
          Json::Value::Value((Json::Value *)&v706, 1);
          Json::Value::operator=(v162, (const Json::Value *)&v706);
          Json::Value::~Value((Json::Value *)&v706);
          v163 = Json::Value::operator[]((Json::Value *)&v707, "avoid_water");
          Json::Value::Value((Json::Value *)&v705, 1);
          Json::Value::operator=(v163, (const Json::Value *)&v705);
          Json::Value::~Value((Json::Value *)&v705);
          sub_21E94B4((void **)&v704, "minecraft:navigation.walk");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v704) )
            v164 = Json::Value::operator[](v6, (const char **)&v704);
            Json::Value::operator=(v164, (const Json::Value *)&v707);
          v165 = (void *)(v704 - 12);
          if ( (int *)(v704 - 12) != &dword_28898C0 )
            v198 = (unsigned int *)(v704 - 4);
                v199 = __ldrex(v198);
              while ( __strex(v199 - 1, v198) );
              v199 = (*v198)--;
            if ( v199 <= 0 )
              j_j_j_j__ZdlPv_9(v165);
          Json::Value::~Value((Json::Value *)&v707);
LABEL_205:
          v166 = (Json::Value *)Json::Value::Value(&v703, 7);
          v167 = Json::Value::operator[](v166, "can_float");
          Json::Value::Value((Json::Value *)&v702, 0);
          Json::Value::operator=(v167, (const Json::Value *)&v702);
          Json::Value::~Value((Json::Value *)&v702);
          v168 = Json::Value::operator[]((Json::Value *)&v703, "avoid_water");
          Json::Value::Value((Json::Value *)&v701, 1);
          Json::Value::operator=(v168, (const Json::Value *)&v701);
          Json::Value::~Value((Json::Value *)&v701);
          sub_21E94B4((void **)&v700, "minecraft:navigation.walk");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v700) )
            v169 = Json::Value::operator[](v6, (const char **)&v700);
            Json::Value::operator=(v169, (const Json::Value *)&v703);
          v170 = (void *)(v700 - 12);
          if ( (int *)(v700 - 12) != &dword_28898C0 )
            v196 = (unsigned int *)(v700 - 4);
                v197 = __ldrex(v196);
              while ( __strex(v197 - 1, v196) );
              v197 = (*v196)--;
            if ( v197 <= 0 )
              j_j_j_j__ZdlPv_9(v170);
          Json::Value::~Value((Json::Value *)&v703);
          goto LABEL_210;
        result = (Json::Value *)33043;
        if ( a4 == 33043 )
          v18 = (Json::Value *)Json::Value::Value(&v597, 7);
          v19 = Json::Value::operator[](v18, "can_float");
          Json::Value::Value((Json::Value *)&v596, 1);
          Json::Value::operator=(v19, (const Json::Value *)&v596);
          Json::Value::~Value((Json::Value *)&v596);
          sub_21E94B4((void **)&v595, "minecraft:navigation.float");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v595) )
            v20 = Json::Value::operator[](v6, (const char **)&v595);
            Json::Value::operator=(v20, (const Json::Value *)&v597);
          v21 = (void *)(v595 - 12);
          if ( (int *)(v595 - 12) != &dword_28898C0 )
            v414 = (unsigned int *)(v595 - 4);
                v415 = __ldrex(v414);
              while ( __strex(v415 - 1, v414) );
              v415 = (*v414)--;
            if ( v415 <= 0 )
              j_j_j_j__ZdlPv_9(v21);
          Json::Value::Value(&v594, 7);
          sub_21E94B4((void **)&v593, "minecraft:can_fly");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v593) )
            v22 = Json::Value::operator[](v6, (const char **)&v593);
            Json::Value::operator=(v22, (const Json::Value *)&v594);
          v23 = (void *)(v593 - 12);
          if ( (int *)(v593 - 12) != &dword_28898C0 )
            v418 = (unsigned int *)(v593 - 4);
                v419 = __ldrex(v418);
              while ( __strex(v419 - 1, v418) );
              v419 = (*v418)--;
            if ( v419 <= 0 )
              j_j_j_j__ZdlPv_9(v23);
          Json::Value::~Value((Json::Value *)&v594);
          Json::Value::Value(&v592, 7);
          sub_21E94B4((void **)&v591, "minecraft:movement.basic");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v591) )
            v24 = Json::Value::operator[](v6, (const char **)&v591);
            Json::Value::operator=(v24, (const Json::Value *)&v592);
          v25 = (void *)(v591 - 12);
          if ( (int *)(v591 - 12) != &dword_28898C0 )
            v422 = (unsigned int *)(v591 - 4);
                v423 = __ldrex(v422);
              while ( __strex(v423 - 1, v422) );
              v423 = (*v422)--;
            if ( v423 <= 0 )
              j_j_j_j__ZdlPv_9(v25);
          Json::Value::~Value((Json::Value *)&v592);
          Json::Value::Value(&v590, 7);
          v26 = Json::Value::operator[]((Json::Value *)&v590, "priority");
          Json::Value::Value((Json::Value *)&v589, 2);
          Json::Value::operator=(v26, (const Json::Value *)&v589);
          Json::Value::~Value((Json::Value *)&v589);
          v27 = Json::Value::operator[]((Json::Value *)&v590, "xz_dist");
          Json::Value::Value((Json::Value *)&v588, 10);
          Json::Value::operator=(v27, (const Json::Value *)&v588);
          Json::Value::~Value((Json::Value *)&v588);
          v28 = Json::Value::operator[]((Json::Value *)&v590, "y_dist");
          Json::Value::Value((Json::Value *)&v587, 7);
          Json::Value::operator=(v28, (const Json::Value *)&v587);
          Json::Value::~Value((Json::Value *)&v587);
          v29 = Json::Value::operator[]((Json::Value *)&v590, "y_offset");
          Json::Value::Value((Json::Value *)&v586, -2);
          Json::Value::operator=(v29, (const Json::Value *)&v586);
          Json::Value::~Value((Json::Value *)&v586);
          v30 = Json::Value::operator[]((Json::Value *)&v590, "random_reselect");
          Json::Value::Value((Json::Value *)&v585, 1);
          Json::Value::operator=(v30, (const Json::Value *)&v585);
          Json::Value::~Value((Json::Value *)&v585);
          Json::Value::Value(&v584, 6);
          LODWORD(v31) = &v584;
          Json::Value::resize(v31);
          v32 = Json::Value::operator[]((int)&v584, 0);
          __asm
            VLDR            D0, =0.100000001
            VMOV            R2, R3, D0
          Json::Value::Value((Json::Value *)&v583, v37, _R2);
          Json::Value::operator=(v32, (const Json::Value *)&v583);
          Json::Value::~Value((Json::Value *)&v583);
          v38 = Json::Value::operator[]((int)&v584, 1u);
            VLDR            D0, =0.349999994
          Json::Value::Value((Json::Value *)&v582, v40, _R2);
          Json::Value::operator=(v38, (const Json::Value *)&v582);
          Json::Value::~Value((Json::Value *)&v582);
          v41 = Json::Value::operator[]((Json::Value *)&v590, "float_duration");
          Json::Value::operator=(v41, (const Json::Value *)&v584);
          sub_21E94B4((void **)&v581, "minecraft:behavior.float_wander");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v581) )
            v42 = Json::Value::operator[](v6, (const char **)&v581);
            Json::Value::operator=(v42, (const Json::Value *)&v590);
          v43 = (void *)(v581 - 12);
          if ( (int *)(v581 - 12) != &dword_28898C0 )
            v426 = (unsigned int *)(v581 - 4);
                v427 = __ldrex(v426);
              while ( __strex(v427 - 1, v426) );
              v427 = (*v426)--;
            if ( v427 <= 0 )
              j_j_j_j__ZdlPv_9(v43);
          Json::Value::~Value((Json::Value *)&v584);
          Json::Value::~Value((Json::Value *)&v590);
          result = Json::Value::~Value((Json::Value *)&v597);
        return result;
    else if ( a4 > 199467 )
      if ( a4 != 199468 )
        if ( a4 == 199471 )
LABEL_210:
          v171 = (Json::Value *)Json::Value::Value(&v699, 7);
          v172 = Json::Value::operator[](v171, "can_float");
          Json::Value::Value((Json::Value *)&v698, 1);
          Json::Value::operator=(v172, (const Json::Value *)&v698);
          Json::Value::~Value((Json::Value *)&v698);
          v173 = Json::Value::operator[]((Json::Value *)&v699, "can_pass_doors");
          Json::Value::Value((Json::Value *)&v697, 1);
          Json::Value::operator=(v173, (const Json::Value *)&v697);
          Json::Value::~Value((Json::Value *)&v697);
          sub_21E94B4((void **)&v696, "minecraft:navigation.walk");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v696) )
            v174 = Json::Value::operator[](v6, (const char **)&v696);
            Json::Value::operator=(v174, (const Json::Value *)&v699);
          v175 = (void *)(v696 - 12);
          if ( (int *)(v696 - 12) != &dword_28898C0 )
            v194 = (unsigned int *)(v696 - 4);
                v195 = __ldrex(v194);
              while ( __strex(v195 - 1, v194) );
              v195 = (*v194)--;
            if ( v195 <= 0 )
              j_j_j_j__ZdlPv_9(v175);
          Json::Value::~Value((Json::Value *)&v699);
        result = (Json::Value *)264995;
        if ( a4 == 264995 )
          v100 = (Json::Value *)Json::Value::Value(&v565, 7);
          v101 = Json::Value::operator[](v100, "can_float");
          Json::Value::Value((Json::Value *)&v564, 1);
          Json::Value::operator=(v101, (const Json::Value *)&v564);
          Json::Value::~Value((Json::Value *)&v564);
          sub_21E94B4((void **)&v563, "minecraft:navigation.climb");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v563) )
            v102 = Json::Value::operator[](v6, (const char **)&v563);
            Json::Value::operator=(v102, (const Json::Value *)&v565);
          v103 = (void *)(v563 - 12);
          if ( (int *)(v563 - 12) != &dword_28898C0 )
            v412 = (unsigned int *)(v563 - 4);
                v413 = __ldrex(v412);
              while ( __strex(v413 - 1, v412) );
              v413 = (*v412)--;
            if ( v413 <= 0 )
              j_j_j_j__ZdlPv_9(v103);
          Json::Value::Value(&v562, 7);
          sub_21E94B4((void **)&v561, "minecraft:movement.basic");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v561) )
            v104 = Json::Value::operator[](v6, (const char **)&v561);
            Json::Value::operator=(v104, (const Json::Value *)&v562);
          v105 = (void *)(v561 - 12);
          if ( (int *)(v561 - 12) != &dword_28898C0 )
            v416 = (unsigned int *)(v561 - 4);
                v417 = __ldrex(v416);
              while ( __strex(v417 - 1, v416) );
              v417 = (*v416)--;
            if ( v417 <= 0 )
              j_j_j_j__ZdlPv_9(v105);
          Json::Value::~Value((Json::Value *)&v562);
          Json::Value::Value(&v560, 7);
          sub_21E94B4((void **)&v559, "minecraft:jump.static");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v559) )
            v106 = Json::Value::operator[](v6, (const char **)&v559);
            Json::Value::operator=(v106, (const Json::Value *)&v560);
          v107 = (void *)(v559 - 12);
          if ( (int *)(v559 - 12) != &dword_28898C0 )
            v420 = (unsigned int *)(v559 - 4);
                v421 = __ldrex(v420);
              while ( __strex(v421 - 1, v420) );
              v421 = (*v420)--;
            if ( v421 <= 0 )
              j_j_j_j__ZdlPv_9(v107);
          Json::Value::~Value((Json::Value *)&v560);
          Json::Value::Value(&v558, 7);
          sub_21E94B4((void **)&v557, "minecraft:can_climb");
          if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v557) )
            v108 = Json::Value::operator[](v6, (const char **)&v557);
            Json::Value::operator=(v108, (const Json::Value *)&v558);
          v109 = (void *)(v557 - 12);
          if ( (int *)(v557 - 12) != &dword_28898C0 )
            v424 = (unsigned int *)(v557 - 4);
                v425 = __ldrex(v424);
              while ( __strex(v425 - 1, v424) );
              v425 = (*v424)--;
            if ( v425 <= 0 )
              j_j_j_j__ZdlPv_9(v109);
          Json::Value::~Value((Json::Value *)&v558);
          result = Json::Value::~Value((Json::Value *)&v565);
    else if ( a4 != 68388 )
      if ( a4 != 68404 )
        result = (Json::Value *)199456;
        if ( a4 != 199456 )
        goto LABEL_210;
LABEL_186:
      v147 = (Json::Value *)Json::Value::Value(&v719, 7);
      v148 = Json::Value::operator[](v147, "can_float");
      Json::Value::Value((Json::Value *)&v718, 1);
      Json::Value::operator=(v148, (const Json::Value *)&v718);
      Json::Value::~Value((Json::Value *)&v718);
      v149 = Json::Value::operator[]((Json::Value *)&v719, "avoid_water");
      Json::Value::Value((Json::Value *)&v717, 1);
      Json::Value::operator=(v149, (const Json::Value *)&v717);
      Json::Value::~Value((Json::Value *)&v717);
      sub_21E94B4((void **)&v716, "minecraft:navigation.walk");
      if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v716) )
        v150 = Json::Value::operator[](v6, (const char **)&v716);
        Json::Value::operator=(v150, (const Json::Value *)&v719);
      v151 = (void *)(v716 - 12);
      if ( (int *)(v716 - 12) != &dword_28898C0 )
        v382 = (unsigned int *)(v716 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v383 = __ldrex(v382);
          while ( __strex(v383 - 1, v382) );
          v383 = (*v382)--;
        if ( v383 <= 0 )
          j_j_j_j__ZdlPv_9(v151);
      Json::Value::Value(&v715, 7);
      sub_21E94B4((void **)&v714, "minecraft:can_fly");
      if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v714) )
        v152 = Json::Value::operator[](v6, (const char **)&v714);
        Json::Value::operator=(v152, (const Json::Value *)&v715);
      v153 = (void *)(v714 - 12);
      if ( (int *)(v714 - 12) != &dword_28898C0 )
        v384 = (unsigned int *)(v714 - 4);
            v385 = __ldrex(v384);
          while ( __strex(v385 - 1, v384) );
          v385 = (*v384)--;
        if ( v385 <= 0 )
          j_j_j_j__ZdlPv_9(v153);
      Json::Value::~Value((Json::Value *)&v715);
      Json::Value::~Value((Json::Value *)&v719);
LABEL_195:
      v154 = (Json::Value *)Json::Value::Value(&v713, 7);
      v155 = Json::Value::operator[](v154, "can_float");
      Json::Value::Value((Json::Value *)&v712, 1);
      Json::Value::operator=(v155, (const Json::Value *)&v712);
      Json::Value::~Value((Json::Value *)&v712);
      v156 = Json::Value::operator[]((Json::Value *)&v713, "avoid_water");
      Json::Value::Value((Json::Value *)&v711, 1);
      Json::Value::operator=(v156, (const Json::Value *)&v711);
      Json::Value::~Value((Json::Value *)&v711);
      v157 = Json::Value::operator[]((Json::Value *)&v713, "can_pass_doors");
      Json::Value::Value((Json::Value *)&v710, 1);
      Json::Value::operator=(v157, (const Json::Value *)&v710);
      Json::Value::~Value((Json::Value *)&v710);
      v158 = Json::Value::operator[]((Json::Value *)&v713, "can_open_doors");
      Json::Value::Value((Json::Value *)&v709, 1);
      Json::Value::operator=(v158, (const Json::Value *)&v709);
      Json::Value::~Value((Json::Value *)&v709);
      sub_21E94B4((void **)&v708, "minecraft:navigation.walk");
      if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v708) )
        v159 = Json::Value::operator[](v6, (const char **)&v708);
        Json::Value::operator=(v159, (const Json::Value *)&v713);
      v160 = (void *)(v708 - 12);
      if ( (int *)(v708 - 12) != &dword_28898C0 )
        v207 = (unsigned int *)(v708 - 4);
            v208 = __ldrex(v207);
          while ( __strex(v208 - 1, v207) );
          v208 = (*v207)--;
        if ( v208 <= 0 )
          j_j_j_j__ZdlPv_9(v160);
      Json::Value::~Value((Json::Value *)&v713);
      goto LABEL_200;
LABEL_215:
    v176 = (Json::Value *)Json::Value::Value(&v695, 7);
    v177 = Json::Value::operator[](v176, "can_float");
    Json::Value::Value((Json::Value *)&v694, 1);
    Json::Value::operator=(v177, (const Json::Value *)&v694);
    Json::Value::~Value((Json::Value *)&v694);
    sub_21E94B4((void **)&v693, "minecraft:navigation.walk");
    if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v693) )
      v178 = Json::Value::operator[](v6, (const char **)&v693);
      Json::Value::operator=(v178, (const Json::Value *)&v695);
    v179 = (void *)(v693 - 12);
    if ( (int *)(v693 - 12) != &dword_28898C0 )
      v186 = (unsigned int *)(v693 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v187 = __ldrex(v186);
        while ( __strex(v187 - 1, v186) );
      else
        v187 = (*v186)--;
      if ( v187 <= 0 )
        j_j_j_j__ZdlPv_9(v179);
    Json::Value::Value(&v692, 7);
    sub_21E94B4((void **)&v691, "minecraft:movement.basic");
    if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v691) )
      v180 = Json::Value::operator[](v6, (const char **)&v691);
      Json::Value::operator=(v180, (const Json::Value *)&v692);
    v181 = (void *)(v691 - 12);
    if ( (int *)(v691 - 12) != &dword_28898C0 )
      v188 = (unsigned int *)(v691 - 4);
          v189 = __ldrex(v188);
        while ( __strex(v189 - 1, v188) );
        v189 = (*v188)--;
      if ( v189 <= 0 )
        j_j_j_j__ZdlPv_9(v181);
    Json::Value::~Value((Json::Value *)&v692);
    Json::Value::Value(&v690, 7);
    sub_21E94B4((void **)&v689, "minecraft:jump.static");
    if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v689) )
      v182 = Json::Value::operator[](v6, (const char **)&v689);
      Json::Value::operator=(v182, (const Json::Value *)&v690);
    v183 = (void *)(v689 - 12);
    if ( (int *)(v689 - 12) != &dword_28898C0 )
      v190 = (unsigned int *)(v689 - 4);
          v191 = __ldrex(v190);
        while ( __strex(v191 - 1, v190) );
        v191 = (*v190)--;
      if ( v191 <= 0 )
        j_j_j_j__ZdlPv_9(v183);
    Json::Value::~Value((Json::Value *)&v690);
    Json::Value::Value(&v688, 7);
    sub_21E94B4((void **)&v687, "minecraft:can_climb");
    if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v687) )
      v184 = Json::Value::operator[](v6, (const char **)&v687);
      Json::Value::operator=(v184, (const Json::Value *)&v688);
    v185 = (void *)(v687 - 12);
    if ( (int *)(v687 - 12) != &dword_28898C0 )
      v192 = (unsigned int *)(v687 - 4);
          v193 = __ldrex(v192);
        while ( __strex(v193 - 1, v192) );
        v193 = (*v192)--;
      if ( v193 <= 0 )
        j_j_j_j__ZdlPv_9(v185);
    Json::Value::~Value((Json::Value *)&v688);
    return Json::Value::~Value((Json::Value *)&v695);
  }
  if ( a4 > 788 )
    switch ( a4 )
      case 2865:
      case 2866:
        Json::Value::Value(&v612, 7);
        sub_21E94B4((void **)&v611, "minecraft:navigation.swim");
        if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v611) )
          v12 = Json::Value::operator[](v6, (const char **)&v611);
          Json::Value::operator=(v12, (const Json::Value *)&v612);
        v13 = (void *)(v611 - 12);
        if ( (int *)(v611 - 12) != &dword_28898C0 )
          v432 = (unsigned int *)(v611 - 4);
              v433 = __ldrex(v432);
            while ( __strex(v433 - 1, v432) );
            v433 = (*v432)--;
          if ( v433 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        Json::Value::~Value((Json::Value *)&v612);
        Json::Value::Value(&v610, 7);
        sub_21E94B4((void **)&v609, "minecraft:movement.sway");
        if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v609) )
          v14 = Json::Value::operator[](v6, (const char **)&v609);
          Json::Value::operator=(v14, (const Json::Value *)&v610);
        v15 = (void *)(v609 - 12);
        if ( (int *)(v609 - 12) != &dword_28898C0 )
          v434 = (unsigned int *)(v609 - 4);
              v435 = __ldrex(v434);
            while ( __strex(v435 - 1, v434) );
            v435 = (*v434)--;
          if ( v435 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        Json::Value::~Value((Json::Value *)&v610);
        Json::Value::Value(&v608, 7);
        sub_21E94B4((void **)&v607, "minecraft:jump.static");
        if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v607) )
          v16 = Json::Value::operator[](v6, (const char **)&v607);
          Json::Value::operator=(v16, (const Json::Value *)&v608);
        v17 = (void *)(v607 - 12);
        if ( (int *)(v607 - 12) != &dword_28898C0 )
          v436 = (unsigned int *)(v607 - 4);
              v437 = __ldrex(v436);
            while ( __strex(v437 - 1, v436) );
            v437 = (*v436)--;
          if ( v437 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        return Json::Value::~Value((Json::Value *)&v608);
      case 2870:
        goto LABEL_108;
      case 2861:
        goto LABEL_181;
      case 2854:
        goto LABEL_205;
      case 2849:
      case 2859:
      case 2850:
      case 2851:
      case 2852:
      case 2855:
      case 2856:
      case 2860:
      case 2862:
      case 2863:
      case 2864:
      case 2867:
      case 2868:
      case 2869:
      case 2858:
        Json::Value::Value(&v686, 7);
        Json::Value::Value(&v685, 6);
        LODWORD(v209) = &v685;
        Json::Value::resize(v209);
        v210 = Json::Value::operator[]((int)&v685, 0);
        __asm
          VMOV.F64        D0, #1.0
          VMOV            R7, R8, D0
        Json::Value::Value((Json::Value *)&v684, v212, COERCE_DOUBLE(__PAIR__(_R8, _R7)));
        Json::Value::operator=(v210, (const Json::Value *)&v684);
        Json::Value::~Value((Json::Value *)&v684);
        v213 = Json::Value::operator[]((int)&v685, 1u);
          VMOV.F64        D0, #3.0
          VMOV            R2, R3, D0
        Json::Value::Value((Json::Value *)&v683, v215, _R2);
        Json::Value::operator=(v213, (const Json::Value *)&v683);
        Json::Value::~Value((Json::Value *)&v683);
        v216 = Json::Value::operator[]((Json::Value *)&v686, "jump_delay");
        Json::Value::operator=(v216, (const Json::Value *)&v685);
        sub_21E94B4((void **)&v682, "minecraft:movement.jump");
        if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v682) )
          v217 = Json::Value::operator[](v6, (const char **)&v682);
          Json::Value::operator=(v217, (const Json::Value *)&v686);
        v218 = (void *)(v682 - 12);
        if ( (int *)(v682 - 12) != &dword_28898C0 )
          v482 = (unsigned int *)(v682 - 4);
              v483 = __ldrex(v482);
            while ( __strex(v483 - 1, v482) );
            v483 = (*v482)--;
          if ( v483 <= 0 )
            j_j_j_j__ZdlPv_9(v218);
        v219 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v220 = (Json::Value *)Json::Value::operator[](v219, "component_groups");
        Json::Value::Value(&v681, 7);
        sub_21E94B4((void **)&v680, "minecraft:slime_calm");
        if ( !Json::Value::isNull(v220) && !Json::Value::isMember((int)v220, (const char **)&v680) )
          v221 = Json::Value::operator[](v220, (const char **)&v680);
          Json::Value::operator=(v221, (const Json::Value *)&v681);
        v222 = (void *)(v680 - 12);
        if ( (int *)(v680 - 12) != &dword_28898C0 )
          v484 = (unsigned int *)(v680 - 4);
              v485 = __ldrex(v484);
            while ( __strex(v485 - 1, v484) );
            v485 = (*v484)--;
          if ( v485 <= 0 )
            j_j_j_j__ZdlPv_9(v222);
        Json::Value::~Value((Json::Value *)&v681);
        v223 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v224 = (Json::Value *)Json::Value::operator[](v223, "component_groups");
        v225 = (Json::Value *)Json::Value::operator[](v224, "minecraft:slime_calm");
        sub_21E94B4((void **)&v679, "minecraft:movement.jump");
        if ( !Json::Value::isNull(v225) && !Json::Value::isMember((int)v225, (const char **)&v679) )
          v226 = Json::Value::operator[](v225, (const char **)&v679);
          Json::Value::operator=(v226, (const Json::Value *)&v686);
        v227 = (void *)(v679 - 12);
        if ( (int *)(v679 - 12) != &dword_28898C0 )
          v488 = (unsigned int *)(v679 - 4);
              v489 = __ldrex(v488);
            while ( __strex(v489 - 1, v488) );
            v489 = (*v488)--;
          if ( v489 <= 0 )
            j_j_j_j__ZdlPv_9(v227);
        v228 = Json::Value::operator[]((int)&v685, 0);
          VLDR            D0, =0.319999993
        Json::Value::Value((Json::Value *)&v678, v230, _R2);
        Json::Value::operator=(v228, (const Json::Value *)&v678);
        Json::Value::~Value((Json::Value *)&v678);
        v231 = Json::Value::operator[]((int)&v685, 1u);
        Json::Value::Value((Json::Value *)&v677, v232, COERCE_DOUBLE(__PAIR__(_R8, _R7)));
        Json::Value::operator=(v231, (const Json::Value *)&v677);
        Json::Value::~Value((Json::Value *)&v677);
        v233 = Json::Value::operator[]((Json::Value *)&v686, "jump_delay");
        Json::Value::operator=(v233, (const Json::Value *)&v685);
        v234 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v235 = (Json::Value *)Json::Value::operator[](v234, "component_groups");
        Json::Value::Value(&v676, 7);
        sub_21E94B4((void **)&v675, "minecraft:slime_aggressive");
        if ( !Json::Value::isNull(v235) && !Json::Value::isMember((int)v235, (const char **)&v675) )
          v236 = Json::Value::operator[](v235, (const char **)&v675);
          Json::Value::operator=(v236, (const Json::Value *)&v676);
        v237 = (void *)(v675 - 12);
        if ( (int *)(v675 - 12) != &dword_28898C0 )
          v490 = (unsigned int *)(v675 - 4);
              v491 = __ldrex(v490);
            while ( __strex(v491 - 1, v490) );
            v491 = (*v490)--;
          if ( v491 <= 0 )
            j_j_j_j__ZdlPv_9(v237);
        Json::Value::~Value((Json::Value *)&v676);
        v238 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v239 = (Json::Value *)Json::Value::operator[](v238, "component_groups");
        v240 = (Json::Value *)Json::Value::operator[](v239, "minecraft:slime_aggressive");
        sub_21E94B4((void **)&v674, "minecraft:movement.jump");
        if ( !Json::Value::isNull(v240) && !Json::Value::isMember((int)v240, (const char **)&v674) )
          v241 = Json::Value::operator[](v240, (const char **)&v674);
          Json::Value::operator=(v241, (const Json::Value *)&v686);
        v242 = (void *)(v674 - 12);
        if ( (int *)(v674 - 12) != &dword_28898C0 )
          v492 = (unsigned int *)(v674 - 4);
              v493 = __ldrex(v492);
            while ( __strex(v493 - 1, v492) );
            v493 = (*v492)--;
          if ( v493 <= 0 )
            j_j_j_j__ZdlPv_9(v242);
        Json::Value::~Value((Json::Value *)&v685);
        Json::Value::~Value((Json::Value *)&v686);
        goto LABEL_320;
      case 2853:
LABEL_320:
        v243 = (Json::Value *)Json::Value::Value(&v673, 7);
        v244 = Json::Value::operator[](v243, "can_float");
        Json::Value::Value((Json::Value *)&v672, 1);
        Json::Value::operator=(v244, (const Json::Value *)&v672);
        Json::Value::~Value((Json::Value *)&v672);
        v245 = Json::Value::operator[]((Json::Value *)&v673, "avoid_water");
        Json::Value::Value((Json::Value *)&v671, 1);
        Json::Value::operator=(v245, (const Json::Value *)&v671);
        Json::Value::~Value((Json::Value *)&v671);
        sub_21E94B4((void **)&v670, "minecraft:navigation.walk");
        if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v670) )
          v246 = Json::Value::operator[](v6, (const char **)&v670);
          Json::Value::operator=(v246, (const Json::Value *)&v673);
        v247 = (void *)(v670 - 12);
        if ( (int *)(v670 - 12) != &dword_28898C0 )
          v438 = (unsigned int *)(v670 - 4);
              v439 = __ldrex(v438);
            while ( __strex(v439 - 1, v438) );
            v439 = (*v438)--;
          if ( v439 <= 0 )
            j_j_j_j__ZdlPv_9(v247);
        Json::Value::Value(&v669, 7);
        sub_21E94B4((void **)&v668, "minecraft:jump.static");
        if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v668) )
          v248 = Json::Value::operator[](v6, (const char **)&v668);
          Json::Value::operator=(v248, (const Json::Value *)&v669);
        v249 = (void *)(v668 - 12);
        if ( (int *)(v668 - 12) != &dword_28898C0 )
          v440 = (unsigned int *)(v668 - 4);
              v441 = __ldrex(v440);
            while ( __strex(v441 - 1, v440) );
            v441 = (*v440)--;
          if ( v441 <= 0 )
            j_j_j_j__ZdlPv_9(v249);
        Json::Value::~Value((Json::Value *)&v669);
        Json::Value::Value(&v667, 7);
        sub_21E94B4((void **)&v666, "minecraft:can_climb");
        if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v666) )
          v250 = Json::Value::operator[](v6, (const char **)&v666);
          Json::Value::operator=(v250, (const Json::Value *)&v667);
        v251 = (void *)(v666 - 12);
        if ( (int *)(v666 - 12) != &dword_28898C0 )
          v442 = (unsigned int *)(v666 - 4);
              v443 = __ldrex(v442);
            while ( __strex(v443 - 1, v442) );
            v443 = (*v442)--;
          if ( v443 <= 0 )
            j_j_j_j__ZdlPv_9(v251);
        Json::Value::~Value((Json::Value *)&v667);
        Json::Value::Value(&v665, 7);
        Json::Value::Value(&v664, 6);
        LODWORD(v252) = &v664;
        Json::Value::resize(v252);
        v253 = Json::Value::operator[]((int)&v664, 0);
          VMOV.F64        D0, #0.5
        Json::Value::Value((Json::Value *)&v663, v255, COERCE_DOUBLE(__PAIR__(_R8, _R7)));
        Json::Value::operator=(v253, (const Json::Value *)&v663);
        Json::Value::~Value((Json::Value *)&v663);
        v256 = Json::Value::operator[]((int)&v664, 1u);
          VMOV.F64        D0, #1.5
        Json::Value::Value((Json::Value *)&v662, v258, _R2);
        Json::Value::operator=(v256, (const Json::Value *)&v662);
        Json::Value::~Value((Json::Value *)&v662);
        v259 = Json::Value::operator[]((Json::Value *)&v665, "jump_delay");
        Json::Value::operator=(v259, (const Json::Value *)&v664);
        sub_21E94B4((void **)&v661, "minecraft:movement.jump");
        if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v661) )
          v260 = Json::Value::operator[](v6, (const char **)&v661);
          Json::Value::operator=(v260, (const Json::Value *)&v665);
        v261 = (void *)(v661 - 12);
        if ( (int *)(v661 - 12) != &dword_28898C0 )
          v444 = (unsigned int *)(v661 - 4);
              v445 = __ldrex(v444);
            while ( __strex(v445 - 1, v444) );
            v445 = (*v444)--;
          if ( v445 <= 0 )
            j_j_j_j__ZdlPv_9(v261);
        Json::Value::Value(&v660, 7);
        v262 = Json::Value::operator[]((Json::Value *)&v660, "event");
        Json::Value::Value((Json::Value *)&v659, "minecraft:become_aggressive");
        Json::Value::operator=(v262, (const Json::Value *)&v659);
        Json::Value::~Value((Json::Value *)&v659);
        v263 = Json::Value::operator[]((Json::Value *)&v660, "target");
        Json::Value::Value((Json::Value *)&v658, "self");
        Json::Value::operator=(v263, (const Json::Value *)&v658);
        Json::Value::~Value((Json::Value *)&v658);
        sub_21E94B4((void **)&v657, "minecraft:on_target_acquired");
        if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v657) )
          v264 = Json::Value::operator[](v6, (const char **)&v657);
          Json::Value::operator=(v264, (const Json::Value *)&v660);
        v265 = (void *)(v657 - 12);
        if ( (int *)(v657 - 12) != &dword_28898C0 )
          v446 = (unsigned int *)(v657 - 4);
              v447 = __ldrex(v446);
            while ( __strex(v447 - 1, v446) );
            v447 = (*v446)--;
          if ( v447 <= 0 )
            j_j_j_j__ZdlPv_9(v265);
        v266 = Json::Value::operator[]((Json::Value *)&v660, "event");
        Json::Value::Value((Json::Value *)&v656, "minecraft:become_calm");
        Json::Value::operator=(v266, (const Json::Value *)&v656);
        Json::Value::~Value((Json::Value *)&v656);
        v267 = Json::Value::operator[]((Json::Value *)&v660, "target");
        Json::Value::Value((Json::Value *)&v655, "self");
        Json::Value::operator=(v267, (const Json::Value *)&v655);
        Json::Value::~Value((Json::Value *)&v655);
        sub_21E94B4((void **)&v654, "minecraft:on_target_escape");
        if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v654) )
          v268 = Json::Value::operator[](v6, (const char **)&v654);
          Json::Value::operator=(v268, (const Json::Value *)&v660);
        v269 = (void *)(v654 - 12);
        if ( (int *)(v654 - 12) != &dword_28898C0 )
          v448 = (unsigned int *)(v654 - 4);
              v449 = __ldrex(v448);
            while ( __strex(v449 - 1, v448) );
            v449 = (*v448)--;
          if ( v449 <= 0 )
            j_j_j_j__ZdlPv_9(v269);
        v270 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v271 = (Json::Value *)Json::Value::operator[](v270, "component_groups");
        Json::Value::Value(&v653, 7);
        sub_21E94B4((void **)&v652, "minecraft:slime_calm");
        if ( !Json::Value::isNull(v271) && !Json::Value::isMember((int)v271, (const char **)&v652) )
          v272 = Json::Value::operator[](v271, (const char **)&v652);
          Json::Value::operator=(v272, (const Json::Value *)&v653);
        v273 = (void *)(v652 - 12);
        if ( (int *)(v652 - 12) != &dword_28898C0 )
          v450 = (unsigned int *)(v652 - 4);
              v451 = __ldrex(v450);
            while ( __strex(v451 - 1, v450) );
            v451 = (*v450)--;
          if ( v451 <= 0 )
            j_j_j_j__ZdlPv_9(v273);
        Json::Value::~Value((Json::Value *)&v653);
        v274 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v275 = (Json::Value *)Json::Value::operator[](v274, "component_groups");
        v276 = (Json::Value *)Json::Value::operator[](v275, "minecraft:slime_calm");
        sub_21E94B4((void **)&v651, "minecraft:movement.jump");
        if ( !Json::Value::isNull(v276) && !Json::Value::isMember((int)v276, (const char **)&v651) )
          v277 = Json::Value::operator[](v276, (const char **)&v651);
          Json::Value::operator=(v277, (const Json::Value *)&v665);
        v278 = (void *)(v651 - 12);
        if ( (int *)(v651 - 12) != &dword_28898C0 )
          v452 = (unsigned int *)(v651 - 4);
              v453 = __ldrex(v452);
            while ( __strex(v453 - 1, v452) );
            v453 = (*v452)--;
          if ( v453 <= 0 )
            j_j_j_j__ZdlPv_9(v278);
        v279 = Json::Value::operator[]((int)&v664, 0);
          VLDR            D0, =0.159999996
        Json::Value::Value((Json::Value *)&v650, v281, _R2);
        Json::Value::operator=(v279, (const Json::Value *)&v650);
        Json::Value::~Value((Json::Value *)&v650);
        v282 = Json::Value::operator[]((int)&v664, 1u);
        Json::Value::Value((Json::Value *)&v649, v283, COERCE_DOUBLE(__PAIR__(_R8, _R7)));
        Json::Value::operator=(v282, (const Json::Value *)&v649);
        Json::Value::~Value((Json::Value *)&v649);
        v284 = Json::Value::operator[]((Json::Value *)&v665, "jump_delay");
        Json::Value::operator=(v284, (const Json::Value *)&v664);
        v285 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v286 = (Json::Value *)Json::Value::operator[](v285, "component_groups");
        Json::Value::Value(&v648, 7);
        sub_21E94B4((void **)&v647, "minecraft:slime_aggressive");
        if ( !Json::Value::isNull(v286) && !Json::Value::isMember((int)v286, (const char **)&v647) )
          v287 = Json::Value::operator[](v286, (const char **)&v647);
          Json::Value::operator=(v287, (const Json::Value *)&v648);
        v288 = (void *)(v647 - 12);
        if ( (int *)(v647 - 12) != &dword_28898C0 )
          v454 = (unsigned int *)(v647 - 4);
              v455 = __ldrex(v454);
            while ( __strex(v455 - 1, v454) );
            v455 = (*v454)--;
          if ( v455 <= 0 )
            j_j_j_j__ZdlPv_9(v288);
        Json::Value::~Value((Json::Value *)&v648);
        v289 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v290 = (Json::Value *)Json::Value::operator[](v289, "component_groups");
        v291 = (Json::Value *)Json::Value::operator[](v290, "minecraft:slime_aggressive");
        sub_21E94B4((void **)&v646, "minecraft:movement.jump");
        if ( !Json::Value::isNull(v291) && !Json::Value::isMember((int)v291, (const char **)&v646) )
          v292 = Json::Value::operator[](v291, (const char **)&v646);
          Json::Value::operator=(v292, (const Json::Value *)&v665);
        v293 = (void *)(v646 - 12);
        if ( (int *)(v646 - 12) != &dword_28898C0 )
          v456 = (unsigned int *)(v646 - 4);
              v457 = __ldrex(v456);
            while ( __strex(v457 - 1, v456) );
            v457 = (*v456)--;
          if ( v457 <= 0 )
            j_j_j_j__ZdlPv_9(v293);
        v294 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        Json::Value::Value(&v645, 7);
        sub_21E94B4((void **)&v644, "events");
        if ( !Json::Value::isNull(v294) && !Json::Value::isMember((int)v294, (const char **)&v644) )
          v295 = Json::Value::operator[](v294, (const char **)&v644);
          Json::Value::operator=(v295, (const Json::Value *)&v645);
        v296 = (void *)(v644 - 12);
        if ( (int *)(v644 - 12) != &dword_28898C0 )
          v458 = (unsigned int *)(v644 - 4);
              v459 = __ldrex(v458);
            while ( __strex(v459 - 1, v458) );
            v459 = (*v458)--;
          if ( v459 <= 0 )
            j_j_j_j__ZdlPv_9(v296);
        Json::Value::~Value((Json::Value *)&v645);
        v297 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v298 = (Json::Value *)Json::Value::operator[](v297, "events");
        Json::Value::Value(&v643, 7);
        sub_21E94B4((void **)&v642, "minecraft:entity_spawned");
        if ( !Json::Value::isNull(v298) && !Json::Value::isMember((int)v298, (const char **)&v642) )
          v299 = Json::Value::operator[](v298, (const char **)&v642);
          Json::Value::operator=(v299, (const Json::Value *)&v643);
        v300 = (void *)(v642 - 12);
        if ( (int *)(v642 - 12) != &dword_28898C0 )
          v460 = (unsigned int *)(v642 - 4);
              v461 = __ldrex(v460);
            while ( __strex(v461 - 1, v460) );
            v461 = (*v460)--;
          if ( v461 <= 0 )
            j_j_j_j__ZdlPv_9(v300);
        Json::Value::~Value((Json::Value *)&v643);
        v301 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v302 = (Json::Value *)Json::Value::operator[](v301, "events");
        v303 = (Json::Value *)Json::Value::operator[](v302, "minecraft:entity_spawned");
        Json::Value::Value(&v641, 7);
        sub_21E94B4((void **)&v640, "add");
        if ( !Json::Value::isNull(v303) && !Json::Value::isMember((int)v303, (const char **)&v640) )
          v304 = Json::Value::operator[](v303, (const char **)&v640);
          Json::Value::operator=(v304, (const Json::Value *)&v641);
        v305 = (void *)(v640 - 12);
        if ( (int *)(v640 - 12) != &dword_28898C0 )
          v462 = (unsigned int *)(v640 - 4);
              v463 = __ldrex(v462);
            while ( __strex(v463 - 1, v462) );
            v463 = (*v462)--;
          if ( v463 <= 0 )
            j_j_j_j__ZdlPv_9(v305);
        Json::Value::~Value((Json::Value *)&v641);
        v306 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v307 = (Json::Value *)Json::Value::operator[](v306, "events");
        v308 = (Json::Value *)Json::Value::operator[](v307, "minecraft:entity_spawned");
        v309 = (Json::Value *)Json::Value::operator[](v308, "add");
        Json::Value::Value(&v639, 6);
        sub_21E94B4((void **)&v638, "component_groups");
        if ( !Json::Value::isNull(v309) && !Json::Value::isMember((int)v309, (const char **)&v638) )
          v310 = Json::Value::operator[](v309, (const char **)&v638);
          Json::Value::operator=(v310, (const Json::Value *)&v639);
        v311 = (void *)(v638 - 12);
        if ( (int *)(v638 - 12) != &dword_28898C0 )
          v464 = (unsigned int *)(v638 - 4);
              v465 = __ldrex(v464);
            while ( __strex(v465 - 1, v464) );
            v465 = (*v464)--;
          if ( v465 <= 0 )
            j_j_j_j__ZdlPv_9(v311);
        Json::Value::~Value((Json::Value *)&v639);
        v312 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v313 = (Json::Value *)Json::Value::operator[](v312, "events");
        v314 = (Json::Value *)Json::Value::operator[](v313, "minecraft:entity_spawned");
        v315 = (Json::Value *)Json::Value::operator[](v314, "add");
        v316 = (Json::Value *)Json::Value::operator[](v315, "component_groups");
        Json::Value::Value((Json::Value *)&v637, "minecraft:slime_calm");
        Json::Value::append(v316, (const Json::Value *)&v637);
        Json::Value::~Value((Json::Value *)&v637);
        v317 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v318 = (Json::Value *)Json::Value::operator[](v317, "events");
        Json::Value::Value(&v636, 7);
        sub_21E94B4((void **)&v635, "minecraft:become_calm");
        if ( !Json::Value::isNull(v318) && !Json::Value::isMember((int)v318, (const char **)&v635) )
          v319 = Json::Value::operator[](v318, (const char **)&v635);
          Json::Value::operator=(v319, (const Json::Value *)&v636);
        v320 = (void *)(v635 - 12);
        if ( (int *)(v635 - 12) != &dword_28898C0 )
          v466 = (unsigned int *)(v635 - 4);
              v467 = __ldrex(v466);
            while ( __strex(v467 - 1, v466) );
            v467 = (*v466)--;
          if ( v467 <= 0 )
            j_j_j_j__ZdlPv_9(v320);
        Json::Value::~Value((Json::Value *)&v636);
        v321 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v322 = (Json::Value *)Json::Value::operator[](v321, "events");
        v323 = (Json::Value *)Json::Value::operator[](v322, "minecraft:become_calm");
        Json::Value::Value(&v634, 7);
        sub_21E94B4((void **)&v633, "add");
        if ( !Json::Value::isNull(v323) && !Json::Value::isMember((int)v323, (const char **)&v633) )
          v324 = Json::Value::operator[](v323, (const char **)&v633);
          Json::Value::operator=(v324, (const Json::Value *)&v634);
        v325 = (void *)(v633 - 12);
        if ( (int *)(v633 - 12) != &dword_28898C0 )
          v468 = (unsigned int *)(v633 - 4);
              v469 = __ldrex(v468);
            while ( __strex(v469 - 1, v468) );
            v469 = (*v468)--;
          if ( v469 <= 0 )
            j_j_j_j__ZdlPv_9(v325);
        Json::Value::~Value((Json::Value *)&v634);
        v326 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v327 = (Json::Value *)Json::Value::operator[](v326, "events");
        v328 = (Json::Value *)Json::Value::operator[](v327, "minecraft:become_calm");
        v329 = (Json::Value *)Json::Value::operator[](v328, "add");
        Json::Value::Value(&v632, 6);
        sub_21E94B4((void **)&v631, "component_groups");
        if ( !Json::Value::isNull(v329) && !Json::Value::isMember((int)v329, (const char **)&v631) )
          v330 = Json::Value::operator[](v329, (const char **)&v631);
          Json::Value::operator=(v330, (const Json::Value *)&v632);
        v331 = (void *)(v631 - 12);
        if ( (int *)(v631 - 12) != &dword_28898C0 )
          v470 = (unsigned int *)(v631 - 4);
              v471 = __ldrex(v470);
            while ( __strex(v471 - 1, v470) );
            v471 = (*v470)--;
          if ( v471 <= 0 )
            j_j_j_j__ZdlPv_9(v331);
        Json::Value::~Value((Json::Value *)&v632);
        v332 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v333 = (Json::Value *)Json::Value::operator[](v332, "events");
        v334 = (Json::Value *)Json::Value::operator[](v333, "minecraft:become_calm");
        v335 = (Json::Value *)Json::Value::operator[](v334, "add");
        v336 = (Json::Value *)Json::Value::operator[](v335, "component_groups");
        Json::Value::Value((Json::Value *)&v630, "minecraft:slime_calm");
        Json::Value::append(v336, (const Json::Value *)&v630);
        Json::Value::~Value((Json::Value *)&v630);
        v337 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v338 = (Json::Value *)Json::Value::operator[](v337, "events");
        Json::Value::Value(&v629, 7);
        sub_21E94B4((void **)&v628, "minecraft:become_aggressive");
        if ( !Json::Value::isNull(v338) && !Json::Value::isMember((int)v338, (const char **)&v628) )
          v339 = Json::Value::operator[](v338, (const char **)&v628);
          Json::Value::operator=(v339, (const Json::Value *)&v629);
        v340 = (void *)(v628 - 12);
        if ( (int *)(v628 - 12) != &dword_28898C0 )
          v472 = (unsigned int *)(v628 - 4);
              v473 = __ldrex(v472);
            while ( __strex(v473 - 1, v472) );
            v473 = (*v472)--;
          if ( v473 <= 0 )
            j_j_j_j__ZdlPv_9(v340);
        Json::Value::~Value((Json::Value *)&v629);
        v341 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v342 = (Json::Value *)Json::Value::operator[](v341, "events");
        v343 = (Json::Value *)Json::Value::operator[](v342, "minecraft:become_aggressive");
        Json::Value::Value(&v627, 7);
        sub_21E94B4((void **)&v626, "add");
        if ( !Json::Value::isNull(v343) && !Json::Value::isMember((int)v343, (const char **)&v626) )
          v344 = Json::Value::operator[](v343, (const char **)&v626);
          Json::Value::operator=(v344, (const Json::Value *)&v627);
        v345 = (void *)(v626 - 12);
        if ( (int *)(v626 - 12) != &dword_28898C0 )
          v474 = (unsigned int *)(v626 - 4);
              v475 = __ldrex(v474);
            while ( __strex(v475 - 1, v474) );
            v475 = (*v474)--;
          if ( v475 <= 0 )
            j_j_j_j__ZdlPv_9(v345);
        Json::Value::~Value((Json::Value *)&v627);
        v346 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v347 = (Json::Value *)Json::Value::operator[](v346, "events");
        v348 = (Json::Value *)Json::Value::operator[](v347, "minecraft:become_aggressive");
        v349 = (Json::Value *)Json::Value::operator[](v348, "add");
        Json::Value::Value(&v625, 6);
        sub_21E94B4((void **)&v624, "component_groups");
        if ( !Json::Value::isNull(v349) && !Json::Value::isMember((int)v349, (const char **)&v624) )
          v350 = Json::Value::operator[](v349, (const char **)&v624);
          Json::Value::operator=(v350, (const Json::Value *)&v625);
        v351 = (void *)(v624 - 12);
        if ( (int *)(v624 - 12) != &dword_28898C0 )
          v476 = (unsigned int *)(v624 - 4);
              v477 = __ldrex(v476);
            while ( __strex(v477 - 1, v476) );
            v477 = (*v476)--;
          if ( v477 <= 0 )
            j_j_j_j__ZdlPv_9(v351);
        Json::Value::~Value((Json::Value *)&v625);
        v352 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
        v353 = (Json::Value *)Json::Value::operator[](v352, "events");
        v354 = (Json::Value *)Json::Value::operator[](v353, "minecraft:become_aggressive");
        v355 = (Json::Value *)Json::Value::operator[](v354, "add");
        v356 = (Json::Value *)Json::Value::operator[](v355, "component_groups");
        Json::Value::Value((Json::Value *)&v623, "minecraft:slime_aggressive");
        Json::Value::append(v356, (const Json::Value *)&v623);
        Json::Value::~Value((Json::Value *)&v623);
        Json::Value::~Value((Json::Value *)&v660);
        Json::Value::~Value((Json::Value *)&v664);
        Json::Value::~Value((Json::Value *)&v665);
        result = Json::Value::~Value((Json::Value *)&v673);
        break;
      case 2857:
        v357 = (Json::Value *)Json::Value::Value(&v606, 7);
        v358 = Json::Value::operator[](v357, "can_float");
        Json::Value::Value((Json::Value *)&v605, 1);
        Json::Value::operator=(v358, (const Json::Value *)&v605);
        Json::Value::~Value((Json::Value *)&v605);
        sub_21E94B4((void **)&v604, "minecraft:navigation.float");
        if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v604) )
          v359 = Json::Value::operator[](v6, (const char **)&v604);
          Json::Value::operator=(v359, (const Json::Value *)&v606);
        v360 = (void *)(v604 - 12);
        if ( (int *)(v604 - 12) != &dword_28898C0 )
          v478 = (unsigned int *)(v604 - 4);
              v479 = __ldrex(v478);
            while ( __strex(v479 - 1, v478) );
            v479 = (*v478)--;
          if ( v479 <= 0 )
            j_j_j_j__ZdlPv_9(v360);
        Json::Value::Value(&v603, 7);
        sub_21E94B4((void **)&v602, "minecraft:can_fly");
        if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v602) )
          v361 = Json::Value::operator[](v6, (const char **)&v602);
          Json::Value::operator=(v361, (const Json::Value *)&v603);
        v362 = (void *)(v602 - 12);
        if ( (int *)(v602 - 12) != &dword_28898C0 )
          v480 = (unsigned int *)(v602 - 4);
              v481 = __ldrex(v480);
            while ( __strex(v481 - 1, v480) );
            v481 = (*v480)--;
          if ( v481 <= 0 )
            j_j_j_j__ZdlPv_9(v362);
        Json::Value::~Value((Json::Value *)&v603);
        Json::Value::Value(&v601, 7);
        v363 = Json::Value::operator[]((Json::Value *)&v601, "priority");
        Json::Value::Value((Json::Value *)&v600, 2);
        Json::Value::operator=(v363, (const Json::Value *)&v600);
        Json::Value::~Value((Json::Value *)&v600);
        v364 = Json::Value::operator[]((Json::Value *)&v601, "must_reach");
        Json::Value::Value((Json::Value *)&v599, 1);
        Json::Value::operator=(v364, (const Json::Value *)&v599);
        Json::Value::~Value((Json::Value *)&v599);
        sub_21E94B4((void **)&v598, "minecraft:behavior.float_wander");
        if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v598) )
          v365 = Json::Value::operator[](v6, (const char **)&v598);
          Json::Value::operator=(v365, (const Json::Value *)&v601);
        v366 = (void *)(v598 - 12);
        if ( (int *)(v598 - 12) != &dword_28898C0 )
          v486 = (unsigned int *)(v598 - 4);
              v487 = __ldrex(v486);
            while ( __strex(v487 - 1, v486) );
            v487 = (*v486)--;
          if ( v487 <= 0 )
            j_j_j_j__ZdlPv_9(v366);
        Json::Value::~Value((Json::Value *)&v601);
        result = Json::Value::~Value((Json::Value *)&v606);
      default:
        result = (Json::Value *)(a4 - 4874);
        switch ( a4 )
          case 4874:
            v110 = (Json::Value *)Json::Value::Value(&v580, 7);
            v111 = Json::Value::operator[](v110, "can_float");
            Json::Value::Value((Json::Value *)&v579, 1);
            Json::Value::operator=(v111, (const Json::Value *)&v579);
            Json::Value::~Value((Json::Value *)&v579);
            Json::Value::Value(&v578, 7);
            v112 = Json::Value::operator[]((Json::Value *)&v578, "min_wait_time");
            Json::Value::Value((Json::Value *)&v577, 300);
            Json::Value::operator=(v112, (const Json::Value *)&v577);
            Json::Value::~Value((Json::Value *)&v577);
            v113 = Json::Value::operator[]((Json::Value *)&v578, "max_wait_time");
            Json::Value::Value((Json::Value *)&v576, 600);
            Json::Value::operator=(v113, (const Json::Value *)&v576);
            Json::Value::~Value((Json::Value *)&v576);
            v114 = Json::Value::operator[]((Json::Value *)&v578, "spawn_sound");
            Json::Value::Value((Json::Value *)&v575, "plop");
            Json::Value::operator=(v114, (const Json::Value *)&v575);
            Json::Value::~Value((Json::Value *)&v575);
            v115 = Json::Value::operator[]((Json::Value *)&v578, "spawn_item");
            Json::Value::Value((Json::Value *)&v574, "egg");
            Json::Value::operator=(v115, (const Json::Value *)&v574);
            Json::Value::~Value((Json::Value *)&v574);
            sub_21E94B4((void **)&v573, "minecraft:navigation.walk");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v573) )
              v116 = Json::Value::operator[](v6, (const char **)&v573);
              Json::Value::operator=(v116, (const Json::Value *)&v580);
            v117 = (void *)(v573 - 12);
            if ( (int *)(v573 - 12) != &dword_28898C0 )
              v500 = (unsigned int *)(v573 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v501 = __ldrex(v500);
                while ( __strex(v501 - 1, v500) );
              }
              else
                v501 = (*v500)--;
              if ( v501 <= 0 )
                j_j_j_j__ZdlPv_9(v117);
            Json::Value::Value(&v572, 7);
            sub_21E94B4((void **)&v571, "minecraft:movement.basic");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v571) )
              v118 = Json::Value::operator[](v6, (const char **)&v571);
              Json::Value::operator=(v118, (const Json::Value *)&v572);
            v119 = (void *)(v571 - 12);
            if ( (int *)(v571 - 12) != &dword_28898C0 )
              v504 = (unsigned int *)(v571 - 4);
                  v505 = __ldrex(v504);
                while ( __strex(v505 - 1, v504) );
                v505 = (*v504)--;
              if ( v505 <= 0 )
                j_j_j_j__ZdlPv_9(v119);
            Json::Value::~Value((Json::Value *)&v572);
            Json::Value::Value(&v570, 7);
            sub_21E94B4((void **)&v569, "minecraft:jump.static");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v569) )
              v120 = Json::Value::operator[](v6, (const char **)&v569);
              Json::Value::operator=(v120, (const Json::Value *)&v570);
            v121 = (void *)(v569 - 12);
            if ( (int *)(v569 - 12) != &dword_28898C0 )
              v506 = (unsigned int *)(v569 - 4);
                  v507 = __ldrex(v506);
                while ( __strex(v507 - 1, v506) );
                v507 = (*v506)--;
              if ( v507 <= 0 )
                j_j_j_j__ZdlPv_9(v121);
            Json::Value::~Value((Json::Value *)&v570);
            Json::Value::Value(&v568, 7);
            sub_21E94B4((void **)&v567, "minecraft:can_climb");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v567) )
              v122 = Json::Value::operator[](v6, (const char **)&v567);
              Json::Value::operator=(v122, (const Json::Value *)&v568);
            v123 = (void *)(v567 - 12);
            if ( (int *)(v567 - 12) != &dword_28898C0 )
              v508 = (unsigned int *)(v567 - 4);
                  v509 = __ldrex(v508);
                while ( __strex(v509 - 1, v508) );
                v509 = (*v508)--;
              if ( v509 <= 0 )
                j_j_j_j__ZdlPv_9(v123);
            Json::Value::~Value((Json::Value *)&v568);
            sub_21E94B4((void **)&v566, "minecraft:spawn_entity");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v566) )
              v124 = Json::Value::operator[](v6, (const char **)&v566);
              Json::Value::operator=(v124, (const Json::Value *)&v578);
            v125 = (void *)(v566 - 12);
            if ( (int *)(v566 - 12) != &dword_28898C0 )
              v510 = (unsigned int *)(v566 - 4);
                  v511 = __ldrex(v510);
                while ( __strex(v511 - 1, v510) );
                v511 = (*v510)--;
              if ( v511 <= 0 )
                j_j_j_j__ZdlPv_9(v125);
            Json::Value::~Value((Json::Value *)&v578);
            result = Json::Value::~Value((Json::Value *)&v580);
            break;
          case 4875:
          case 4876:
          case 4877:
          case 4880:
            goto LABEL_200;
          case 4878:
          case 4879:
          case 4881:
          case 4882:
            v367 = (Json::Value *)Json::Value::Value(&v622, 7);
            v368 = Json::Value::operator[](v367, "can_float");
            Json::Value::Value((Json::Value *)&v621, 1);
            Json::Value::operator=(v368, (const Json::Value *)&v621);
            Json::Value::~Value((Json::Value *)&v621);
            v369 = Json::Value::operator[]((Json::Value *)&v622, "avoid_water");
            Json::Value::Value((Json::Value *)&v620, 1);
            Json::Value::operator=(v369, (const Json::Value *)&v620);
            Json::Value::~Value((Json::Value *)&v620);
            sub_21E94B4((void **)&v619, "minecraft:navigation.walk");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v619) )
              v370 = Json::Value::operator[](v6, (const char **)&v619);
              Json::Value::operator=(v370, (const Json::Value *)&v622);
            v371 = (void *)(v619 - 12);
            if ( (int *)(v619 - 12) != &dword_28898C0 )
              v494 = (unsigned int *)(v619 - 4);
                  v495 = __ldrex(v494);
                while ( __strex(v495 - 1, v494) );
                v495 = (*v494)--;
              if ( v495 <= 0 )
                j_j_j_j__ZdlPv_9(v371);
            Json::Value::Value(&v618, 7);
            sub_21E94B4((void **)&v617, "minecraft:movement.skip");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v617) )
              v372 = Json::Value::operator[](v6, (const char **)&v617);
              Json::Value::operator=(v372, (const Json::Value *)&v618);
            v373 = (void *)(v617 - 12);
            if ( (int *)(v617 - 12) != &dword_28898C0 )
              v496 = (unsigned int *)(v617 - 4);
                  v497 = __ldrex(v496);
                while ( __strex(v497 - 1, v496) );
                v497 = (*v496)--;
              if ( v497 <= 0 )
                j_j_j_j__ZdlPv_9(v373);
            Json::Value::~Value((Json::Value *)&v618);
            Json::Value::Value(&v616, 7);
            sub_21E94B4((void **)&v615, "minecraft:jump.dynamic");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v615) )
              v374 = Json::Value::operator[](v6, (const char **)&v615);
              Json::Value::operator=(v374, (const Json::Value *)&v616);
            v375 = (void *)(v615 - 12);
            if ( (int *)(v615 - 12) != &dword_28898C0 )
              v498 = (unsigned int *)(v615 - 4);
                  v499 = __ldrex(v498);
                while ( __strex(v499 - 1, v498) );
                v499 = (*v498)--;
              if ( v499 <= 0 )
                j_j_j_j__ZdlPv_9(v375);
            Json::Value::~Value((Json::Value *)&v616);
            Json::Value::Value(&v614, 7);
            sub_21E94B4((void **)&v613, "minecraft:can_climb");
            if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v613) )
              v376 = Json::Value::operator[](v6, (const char **)&v613);
              Json::Value::operator=(v376, (const Json::Value *)&v614);
            v377 = (void *)(v613 - 12);
            if ( (int *)(v613 - 12) != &dword_28898C0 )
              v502 = (unsigned int *)(v613 - 4);
                  v503 = __ldrex(v502);
                while ( __strex(v503 - 1, v502) );
                v503 = (*v502)--;
              if ( v503 <= 0 )
                j_j_j_j__ZdlPv_9(v377);
            Json::Value::~Value((Json::Value *)&v614);
            result = Json::Value::~Value((Json::Value *)&v622);
          default:
            result = (Json::Value *)789;
            if ( a4 == 789 )
              v200 = (Json::Value *)Json::Value::Value(&v522, 7);
              v201 = Json::Value::operator[](v200, "avoid_water");
              Json::Value::Value((Json::Value *)&v521, 1);
              Json::Value::operator=(v201, (const Json::Value *)&v521);
              Json::Value::~Value((Json::Value *)&v521);
              Json::Value::Value(&v520, 7);
              v202 = Json::Value::operator[]((Json::Value *)&v520, "def");
              Json::Value::Value((Json::Value *)&v519, "minecraft:snowball");
              Json::Value::operator=(v202, (const Json::Value *)&v519);
              Json::Value::~Value((Json::Value *)&v519);
              sub_21E94B4((void **)&v518, "minecraft:navigation.walk");
              if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v518) )
                v203 = Json::Value::operator[](v6, (const char **)&v518);
                Json::Value::operator=(v203, (const Json::Value *)&v522);
              v204 = (void *)(v518 - 12);
              if ( (int *)(v518 - 12) != &dword_28898C0 )
                v512 = (unsigned int *)(v518 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v513 = __ldrex(v512);
                  while ( __strex(v513 - 1, v512) );
                }
                else
                  v513 = (*v512)--;
                if ( v513 <= 0 )
                  j_j_j_j__ZdlPv_9(v204);
              sub_21E94B4((void **)&v517, "minecraft:shooter");
              if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v517) )
                v205 = Json::Value::operator[](v6, (const char **)&v517);
                Json::Value::operator=(v205, (const Json::Value *)&v520);
              v206 = (void *)(v517 - 12);
              if ( (int *)(v517 - 12) != &dword_28898C0 )
                v514 = (unsigned int *)(v517 - 4);
                    v515 = __ldrex(v514);
                  while ( __strex(v515 - 1, v514) );
                  v515 = (*v514)--;
                if ( v515 <= 0 )
                  j_j_j_j__ZdlPv_9(v206);
              Json::Value::~Value((Json::Value *)&v520);
              result = Json::Value::~Value((Json::Value *)&v522);
    return result;
  if ( a4 <= 318 )
    if ( a4 == 71 )
      v46 = (Json::Value *)Json::Value::Value(&v556, 7);
      v47 = Json::Value::operator[](v46, "fuseLength");
      Json::Value::Value((Json::Value *)&v555, 0);
      Json::Value::operator=(v47, (const Json::Value *)&v555);
      Json::Value::~Value((Json::Value *)&v555);
      v48 = Json::Value::operator[]((Json::Value *)&v556, "fuseLit");
      Json::Value::Value((Json::Value *)&v554, 1);
      Json::Value::operator=(v48, (const Json::Value *)&v554);
      Json::Value::~Value((Json::Value *)&v554);
      v49 = Json::Value::operator[]((Json::Value *)&v556, "power");
      Json::Value::Value((Json::Value *)&v553, 6);
      Json::Value::operator=(v49, (const Json::Value *)&v553);
      Json::Value::~Value((Json::Value *)&v553);
      v50 = Json::Value::operator[]((Json::Value *)&v556, "causesFire");
      Json::Value::Value((Json::Value *)&v552, 0);
      Json::Value::operator=(v50, (const Json::Value *)&v552);
      Json::Value::~Value((Json::Value *)&v552);
      v51 = Json::Value::operator[]((Json::Value *)&v556, "destroyAffectedByGriefing");
      Json::Value::Value((Json::Value *)&v551, 1);
      Json::Value::operator=(v51, (const Json::Value *)&v551);
      Json::Value::~Value((Json::Value *)&v551);
      v52 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
      v53 = (Json::Value *)Json::Value::operator[](v52, "component_groups");
      Json::Value::Value(&v550, 7);
      sub_21E94B4((void **)&v549, "crystal_exploding");
      if ( !Json::Value::isNull(v53) && !Json::Value::isMember((int)v53, (const char **)&v549) )
        v54 = Json::Value::operator[](v53, (const char **)&v549);
        Json::Value::operator=(v54, (const Json::Value *)&v550);
      v55 = (void *)(v549 - 12);
      if ( (int *)(v549 - 12) != &dword_28898C0 )
        v388 = (unsigned int *)(v549 - 4);
            v389 = __ldrex(v388);
          while ( __strex(v389 - 1, v388) );
          v389 = (*v388)--;
        if ( v389 <= 0 )
          j_j_j_j__ZdlPv_9(v55);
      Json::Value::~Value((Json::Value *)&v550);
      v56 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
      v57 = (Json::Value *)Json::Value::operator[](v56, "component_groups");
      v58 = (Json::Value *)Json::Value::operator[](v57, "crystal_exploding");
      sub_21E94B4((void **)&v548, "minecraft:explode");
      if ( !Json::Value::isNull(v58) && !Json::Value::isMember((int)v58, (const char **)&v548) )
        v59 = Json::Value::operator[](v58, (const char **)&v548);
        Json::Value::operator=(v59, (const Json::Value *)&v556);
      v60 = (void *)(v548 - 12);
      if ( (int *)(v548 - 12) != &dword_28898C0 )
        v390 = (unsigned int *)(v548 - 4);
            v391 = __ldrex(v390);
          while ( __strex(v391 - 1, v390) );
          v391 = (*v390)--;
        if ( v391 <= 0 )
          j_j_j_j__ZdlPv_9(v60);
      Json::Value::Value(&v547, 7);
      v61 = Json::Value::operator[]((Json::Value *)&v547, "value");
      Json::Value::Value((Json::Value *)&v546, 1);
      Json::Value::operator=(v61, (const Json::Value *)&v546);
      Json::Value::~Value((Json::Value *)&v546);
      v62 = Json::Value::operator[]((Json::Value *)&v547, "max");
      Json::Value::Value((Json::Value *)&v545, 1);
      Json::Value::operator=(v62, (const Json::Value *)&v545);
      Json::Value::~Value((Json::Value *)&v545);
      sub_21E94B4((void **)&v544, "minecraft:health");
      if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v544) )
        v63 = Json::Value::operator[](v6, (const char **)&v544);
        Json::Value::operator=(v63, (const Json::Value *)&v547);
      v64 = (void *)(v544 - 12);
      if ( (int *)(v544 - 12) != &dword_28898C0 )
        v392 = (unsigned int *)(v544 - 4);
            v393 = __ldrex(v392);
          while ( __strex(v393 - 1, v392) );
          v393 = (*v392)--;
        if ( v393 <= 0 )
          j_j_j_j__ZdlPv_9(v64);
      Json::Value::Value((Json::Value *)&v543, 1);
      sub_21E94B4((void **)&v542, "minecraft:fire_immune");
      if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v542) )
        v65 = Json::Value::operator[](v6, (const char **)&v542);
        Json::Value::operator=(v65, (const Json::Value *)&v543);
      v66 = (void *)(v542 - 12);
      if ( (int *)(v542 - 12) != &dword_28898C0 )
        v394 = (unsigned int *)(v542 - 4);
            v395 = __ldrex(v394);
          while ( __strex(v395 - 1, v394) );
          v395 = (*v394)--;
        if ( v395 <= 0 )
          j_j_j_j__ZdlPv_9(v66);
      Json::Value::~Value((Json::Value *)&v543);
      Json::Value::Value(&v541, 7);
      v67 = Json::Value::operator[]((Json::Value *)&v541, "event");
      Json::Value::Value((Json::Value *)&v540, "minecraft:crystal_explode");
      Json::Value::operator=(v67, (const Json::Value *)&v540);
      Json::Value::~Value((Json::Value *)&v540);
      v68 = Json::Value::operator[]((Json::Value *)&v541, "target");
      Json::Value::Value((Json::Value *)&v539, "self");
      Json::Value::operator=(v68, (const Json::Value *)&v539);
      Json::Value::~Value((Json::Value *)&v539);
      sub_21E94B4((void **)&v538, "minecraft:on_hurt");
      if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v538) )
        v69 = Json::Value::operator[](v6, (const char **)&v538);
        Json::Value::operator=(v69, (const Json::Value *)&v541);
      v70 = (void *)(v538 - 12);
      if ( (int *)(v538 - 12) != &dword_28898C0 )
        v396 = (unsigned int *)(v538 - 4);
            v397 = __ldrex(v396);
          while ( __strex(v397 - 1, v396) );
          v397 = (*v396)--;
        if ( v397 <= 0 )
          j_j_j_j__ZdlPv_9(v70);
      v71 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
      v72 = (Json::Value *)Json::Value::operator[](v71, "events");
      Json::Value::Value(&v537, 7);
      sub_21E94B4((void **)&v536, "minecraft:crystal_explode");
      if ( !Json::Value::isNull(v72) && !Json::Value::isMember((int)v72, (const char **)&v536) )
        v73 = Json::Value::operator[](v72, (const char **)&v536);
        Json::Value::operator=(v73, (const Json::Value *)&v537);
      v74 = (void *)(v536 - 12);
      if ( (int *)(v536 - 12) != &dword_28898C0 )
        v398 = (unsigned int *)(v536 - 4);
            v399 = __ldrex(v398);
          while ( __strex(v399 - 1, v398) );
          v399 = (*v398)--;
        if ( v399 <= 0 )
          j_j_j_j__ZdlPv_9(v74);
      Json::Value::~Value((Json::Value *)&v537);
      v75 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
      v76 = (Json::Value *)Json::Value::operator[](v75, "events");
      v77 = (Json::Value *)Json::Value::operator[](v76, "minecraft:crystal_explode");
      Json::Value::Value(&v535, 7);
      sub_21E94B4((void **)&v534, "remove");
      if ( !Json::Value::isNull(v77) && !Json::Value::isMember((int)v77, (const char **)&v534) )
        v78 = Json::Value::operator[](v77, (const char **)&v534);
        Json::Value::operator=(v78, (const Json::Value *)&v535);
      v79 = (void *)(v534 - 12);
      if ( (int *)(v534 - 12) != &dword_28898C0 )
        v400 = (unsigned int *)(v534 - 4);
            v401 = __ldrex(v400);
          while ( __strex(v401 - 1, v400) );
          v401 = (*v400)--;
        if ( v401 <= 0 )
          j_j_j_j__ZdlPv_9(v79);
      Json::Value::~Value((Json::Value *)&v535);
      v80 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
      v81 = (Json::Value *)Json::Value::operator[](v80, "events");
      v82 = (Json::Value *)Json::Value::operator[](v81, "minecraft:crystal_explode");
      Json::Value::Value(&v533, 7);
      sub_21E94B4((void **)&v532, "add");
      if ( !Json::Value::isNull(v82) && !Json::Value::isMember((int)v82, (const char **)&v532) )
        v83 = Json::Value::operator[](v82, (const char **)&v532);
        Json::Value::operator=(v83, (const Json::Value *)&v533);
      v84 = (void *)(v532 - 12);
      if ( (int *)(v532 - 12) != &dword_28898C0 )
        v402 = (unsigned int *)(v532 - 4);
            v403 = __ldrex(v402);
          while ( __strex(v403 - 1, v402) );
          v403 = (*v402)--;
        if ( v403 <= 0 )
          j_j_j_j__ZdlPv_9(v84);
      Json::Value::~Value((Json::Value *)&v533);
      v85 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
      v86 = (Json::Value *)Json::Value::operator[](v85, "events");
      v87 = (Json::Value *)Json::Value::operator[](v86, "minecraft:crystal_explode");
      v88 = (Json::Value *)Json::Value::operator[](v87, "add");
      Json::Value::Value(&v531, 6);
      sub_21E94B4((void **)&v530, "component_groups");
      if ( !Json::Value::isNull(v88) && !Json::Value::isMember((int)v88, (const char **)&v530) )
        v89 = Json::Value::operator[](v88, (const char **)&v530);
        Json::Value::operator=(v89, (const Json::Value *)&v531);
      v90 = (void *)(v530 - 12);
      if ( (int *)(v530 - 12) != &dword_28898C0 )
        v404 = (unsigned int *)(v530 - 4);
            v405 = __ldrex(v404);
          while ( __strex(v405 - 1, v404) );
          v405 = (*v404)--;
        if ( v405 <= 0 )
          j_j_j_j__ZdlPv_9(v90);
      Json::Value::~Value((Json::Value *)&v531);
      v91 = (Json::Value *)Json::Value::operator[](v7, "minecraft:entity");
      v92 = (Json::Value *)Json::Value::operator[](v91, "events");
      v93 = (Json::Value *)Json::Value::operator[](v92, "minecraft:crystal_explode");
      v94 = (Json::Value *)Json::Value::operator[](v93, "add");
      v95 = (Json::Value *)Json::Value::operator[](v94, "component_groups");
      Json::Value::Value((Json::Value *)&v529, "crystal_exploding");
      Json::Value::append(v95, (const Json::Value *)&v529);
      Json::Value::~Value((Json::Value *)&v529);
      Json::Value::~Value((Json::Value *)&v541);
      Json::Value::~Value((Json::Value *)&v547);
      Json::Value::~Value((Json::Value *)&v556);
LABEL_108:
      Json::Value::Value(&v528, 7);
      sub_21E94B4((void **)&v527, "minecraft:navigation.walk");
      if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v527) )
        v96 = Json::Value::operator[](v6, (const char **)&v527);
        Json::Value::operator=(v96, (const Json::Value *)&v528);
      v97 = (void *)(v527 - 12);
      if ( (int *)(v527 - 12) != &dword_28898C0 )
        v378 = (unsigned int *)(v527 - 4);
            v379 = __ldrex(v378);
          while ( __strex(v379 - 1, v378) );
          v379 = (*v378)--;
        if ( v379 <= 0 )
          j_j_j_j__ZdlPv_9(v97);
      Json::Value::~Value((Json::Value *)&v528);
      Json::Value::Value(&v526, 7);
      sub_21E94B4((void **)&v525, "minecraft:movement.basic");
      if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v525) )
        v98 = Json::Value::operator[](v6, (const char **)&v525);
        Json::Value::operator=(v98, (const Json::Value *)&v526);
      v99 = (void *)(v525 - 12);
      if ( (int *)(v525 - 12) != &dword_28898C0 )
        v380 = (unsigned int *)(v525 - 4);
            v381 = __ldrex(v380);
          while ( __strex(v381 - 1, v380) );
          v381 = (*v380)--;
        if ( v381 <= 0 )
          j_j_j_j__ZdlPv_9(v99);
      return Json::Value::~Value((Json::Value *)&v526);
    if ( a4 != 90 )
      return result;
LABEL_23:
    result = (Json::Value *)Json::Value::isMember(a3, "minecraft:rideable");
    if ( result == (Json::Value *)1 )
      v10 = (Json::Value *)Json::Value::operator[](v6, "minecraft:rideable");
      v11 = Json::Value::operator[](v10, "pull_in_entities");
      Json::Value::Value((Json::Value *)&v516, 1);
      Json::Value::operator=(v11, (const Json::Value *)&v516);
      result = Json::Value::~Value((Json::Value *)&v516);
  if ( a4 != 319 )
    result = (Json::Value *)783;
    if ( a4 != 783 )
      if ( a4 != 788 )
      goto LABEL_205;
    goto LABEL_195;
  Json::Value::Value(&v524, 7);
  sub_21E94B4((void **)&v523, "minecraft:can_climb");
  if ( !Json::Value::isNull(v6) && !Json::Value::isMember((int)v6, (const char **)&v523) )
    v44 = Json::Value::operator[](v6, (const char **)&v523);
    Json::Value::operator=(v44, (const Json::Value *)&v524);
  v45 = (void *)(v523 - 12);
  if ( (int *)(v523 - 12) != &dword_28898C0 )
    v386 = (unsigned int *)(v523 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v387 = __ldrex(v386);
      while ( __strex(v387 - 1, v386) );
    else
      v387 = (*v386)--;
    if ( v387 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  return Json::Value::~Value((Json::Value *)&v524);
}


void __fastcall EntityDefinitionGroup::_loadEvents(int a1, int a2, int a3)
{
  int v3; // r6@1
  Json::Value *v4; // r5@1
  int *v5; // r4@1
  int *v6; // r8@1
  const Json::Value *v7; // r0@3
  int v8; // r6@4
  int v9; // r6@4
  int *v10; // r6@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int *v13; // r0@16
  unsigned __int64 *v14; // [sp+4h] [bp-B4h]@2
  unsigned __int64 *v15; // [sp+8h] [bp-B0h]@2
  char v16; // [sp+20h] [bp-98h]@3
  int v17; // [sp+30h] [bp-88h]@3
  int v18; // [sp+38h] [bp-80h]@4
  int v19; // [sp+3Ch] [bp-7Ch]@4
  int v20; // [sp+48h] [bp-70h]@4
  int v21; // [sp+54h] [bp-64h]@4
  int v22; // [sp+58h] [bp-60h]@3
  int v23; // [sp+5Ch] [bp-5Ch]@4
  int v24; // [sp+68h] [bp-50h]@4
  int v25; // [sp+74h] [bp-44h]@4
  char v26; // [sp+80h] [bp-38h]@3
  int *v27; // [sp+84h] [bp-34h]@1
  int *v28; // [sp+88h] [bp-30h]@1

  v3 = a3;
  v4 = (Json::Value *)a2;
  Json::Value::getMemberNames((Json::Value *)&v27, a2);
  v6 = v28;
  v5 = v27;
  if ( v27 != v28 )
  {
    v14 = (unsigned __int64 *)(v3 + 60);
    v15 = (unsigned __int64 *)(v3 + 524);
    do
    {
      JsonUtil::ScopeMarker::ScopeMarker(&v26, v5);
      v7 = (const Json::Value *)Json::Value::operator[](v4, (const char **)v5);
      Json::Value::Value((Json::Value *)&v16, v7);
      DefinitionEventLoader::loadEvent((int)&v17, (Json::Value *)&v16);
      Json::Value::~Value((Json::Value *)&v16);
      if ( v22 != 3 )
      {
        v8 = std::__detail::_Map_base<std::string,std::pair<std::string const,DefinitionEvent>,std::allocator<std::pair<std::string const,DefinitionEvent>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
               v15,
               (int **)v5);
        *(_DWORD *)v8 = v17;
        *(_DWORD *)(v8 + 8) = v18;
        std::vector<std::shared_ptr<FilterGroup>,std::allocator<std::shared_ptr<FilterGroup>>>::operator=(
          v8 + 12,
          (__int64 *)&v19);
        std::vector<std::shared_ptr<FilterTest>,std::allocator<std::shared_ptr<FilterTest>>>::operator=(
          v8 + 24,
          (__int64 *)&v20);
        EntityInteraction::setInteractText((int *)(v8 + 36), &v21);
        *(_DWORD *)(v8 + 40) = v22;
        std::vector<std::string,std::allocator<std::string>>::operator=(v8 + 44, (unsigned __int64 *)&v23);
        std::vector<std::string,std::allocator<std::string>>::operator=(v8 + 56, (unsigned __int64 *)&v24);
        std::vector<DefinitionEvent,std::allocator<DefinitionEvent>>::operator=(v8 + 68, (int)&v25);
        v9 = std::__detail::_Map_base<std::string,std::pair<std::string const,DefinitionEvent>,std::allocator<std::pair<std::string const,DefinitionEvent>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
               v14,
        *(_DWORD *)v9 = v17;
        *(_DWORD *)(v9 + 8) = v18;
          v9 + 12,
          v9 + 24,
        EntityInteraction::setInteractText((int *)(v9 + 36), &v21);
        *(_DWORD *)(v9 + 40) = v22;
        std::vector<std::string,std::allocator<std::string>>::operator=(v9 + 44, (unsigned __int64 *)&v23);
        std::vector<std::string,std::allocator<std::string>>::operator=(v9 + 56, (unsigned __int64 *)&v24);
        std::vector<DefinitionEvent,std::allocator<DefinitionEvent>>::operator=(v9 + 68, (int)&v25);
      }
      DefinitionEvent::~DefinitionEvent((DefinitionEvent *)&v17);
      JsonUtil::ScopeMarker::~ScopeMarker((JsonUtil::ScopeMarker *)&v26);
      ++v5;
    }
    while ( v6 != v5 );
    v5 = v28;
    v10 = v27;
    if ( v27 != v28 )
      do
        v13 = (int *)(*v10 - 12);
        if ( v13 != &dword_28898C0 )
        {
          v11 = (unsigned int *)(*v10 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
          }
          else
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        }
        ++v10;
      while ( v10 != v5 );
      v5 = v27;
  }
  if ( v5 )
    operator delete(v5);
}


void __fastcall EntityDefinitionGroup::_loadEvents(int a1, int a2, int a3)
{
  EntityDefinitionGroup::_loadEvents(a1, a2, a3);
}


void __fastcall EntityDefinitionGroup::_removePre12Components(int a1, int a2, const char *a3)
{
  const char *v3; // r5@1
  void *v4; // r0@4
  void *v5; // r0@8
  void *v6; // r0@12
  void *v7; // r0@16
  void *v8; // r0@20
  void *v9; // r0@24
  unsigned int *v10; // r2@26
  signed int v11; // r1@28
  unsigned int *v12; // r2@30
  signed int v13; // r1@32
  unsigned int *v14; // r2@34
  signed int v15; // r1@36
  unsigned int *v16; // r2@38
  signed int v17; // r1@40
  unsigned int *v18; // r2@42
  signed int v19; // r1@44
  unsigned int *v20; // r2@46
  signed int v21; // r1@48
  int v22; // [sp+4h] [bp-A4h]@21
  int v23; // [sp+Ch] [bp-9Ch]@17
  int v24; // [sp+14h] [bp-94h]@13
  int v25; // [sp+1Ch] [bp-8Ch]@9
  int v26; // [sp+24h] [bp-84h]@5
  int v27; // [sp+2Ch] [bp-7Ch]@1
  char v28; // [sp+30h] [bp-78h]@3
  char v29; // [sp+40h] [bp-68h]@7
  char v30; // [sp+50h] [bp-58h]@11
  char v31; // [sp+60h] [bp-48h]@15
  char v32; // [sp+70h] [bp-38h]@19
  char v33; // [sp+80h] [bp-28h]@23

  v3 = a3;
  sub_21E94B4((void **)&v27, "minecraft:behavior.follow_mob");
  if ( !Json::Value::isNull((Json::Value *)v3) && Json::Value::isMember((int)v3, (const char **)&v27) == 1 )
  {
    Json::Value::removeMember((Json::Value *)&v28, v3, (const char **)&v27);
    Json::Value::~Value((Json::Value *)&v28);
  }
  v4 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v27 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  sub_21E94B4((void **)&v26, "minecraft:behavior.random_fly");
  if ( !Json::Value::isNull((Json::Value *)v3) && Json::Value::isMember((int)v3, (const char **)&v26) == 1 )
    Json::Value::removeMember((Json::Value *)&v29, v3, (const char **)&v26);
    Json::Value::~Value((Json::Value *)&v29);
  v5 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v26 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v25, "minecraft:behavior.wither_target_highest_damage");
  if ( !Json::Value::isNull((Json::Value *)v3) && Json::Value::isMember((int)v3, (const char **)&v25) == 1 )
    Json::Value::removeMember((Json::Value *)&v30, v3, (const char **)&v25);
    Json::Value::~Value((Json::Value *)&v30);
  v6 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v25 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v24, "minecraft:movement.fly");
  if ( !Json::Value::isNull((Json::Value *)v3) && Json::Value::isMember((int)v3, (const char **)&v24) == 1 )
    Json::Value::removeMember((Json::Value *)&v31, v3, (const char **)&v24);
    Json::Value::~Value((Json::Value *)&v31);
  v7 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v24 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v23, "minecraft:navigation.fly");
  if ( !Json::Value::isNull((Json::Value *)v3) && Json::Value::isMember((int)v3, (const char **)&v23) == 1 )
    Json::Value::removeMember((Json::Value *)&v32, v3, (const char **)&v23);
    Json::Value::~Value((Json::Value *)&v32);
  v8 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v23 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v22, "minecraft:physics");
  if ( !Json::Value::isNull((Json::Value *)v3) && Json::Value::isMember((int)v3, (const char **)&v22) == 1 )
    Json::Value::removeMember((Json::Value *)&v33, v3, (const char **)&v22);
    Json::Value::~Value((Json::Value *)&v33);
  v9 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v22 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


Json::Value *__fastcall EntityDefinitionGroup::_fixHorseSlots(EntityDefinitionGroup *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  Json::Value *result; // r0@1
  Json::Value *v4; // r4@3
  int v5; // r5@3
  int v6; // r0@3
  int v7; // [sp+0h] [bp-40h]@3
  char v8; // [sp+10h] [bp-30h]@3
  char v9; // [sp+20h] [bp-20h]@3

  v2 = a2;
  result = (Json::Value *)Json::Value::isNull(a2);
  if ( !result )
  {
    result = (Json::Value *)Json::Value::isArray(v2);
    if ( result == (Json::Value *)1 )
    {
      v4 = (Json::Value *)Json::Value::operator[]((int)v2, 0);
      v5 = Json::Value::operator[](v4, "slot");
      Json::Value::Value((Json::Value *)&v9, 0);
      Json::Value::operator=(v5, (const Json::Value *)&v9);
      Json::Value::~Value((Json::Value *)&v9);
      Json::Value::Value(&v8, 6);
      Json::Value::Value((Json::Value *)&v7, "saddle");
      Json::Value::append((Json::Value *)&v8, (const Json::Value *)&v7);
      Json::Value::~Value((Json::Value *)&v7);
      v6 = Json::Value::operator[](v4, "accepted_items");
      Json::Value::operator=(v6, (const Json::Value *)&v8);
      result = Json::Value::~Value((Json::Value *)&v8);
    }
  }
  return result;
}


signed int __fastcall EntityDefinitionGroup::hasComponent(int a1, const char **a2, int a3, int a4)
{
  int v4; // r5@1
  const char **v5; // r4@1
  int v6; // r0@3
  char v8; // [sp+4h] [bp-24h]@2
  char v9; // [sp+Ch] [bp-1Ch]@2

  v4 = a4;
  v5 = a2;
  if ( !Json::Value::isMember(a3, a2) )
  {
    Json::Value::begin((Json::Value *)&v9, v4);
    Json::Value::end((Json::Value *)&v8, v4);
    if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v9, (const Json::ValueIteratorBase *)&v8) )
      return 0;
    while ( 1 )
    {
      v6 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v9);
      if ( Json::Value::isMember(v6, v5) )
        break;
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v9);
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v9, (const Json::ValueIteratorBase *)&v8) == 1 )
        return 0;
    }
  }
  return 1;
}
