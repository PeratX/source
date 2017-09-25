

const Entity *__fastcall EntityRenderDispatcher::renderText(int a1, float a2, int a3, int a4, float a5, float a6)
{
  Entity *v6; // r5@1
  int v7; // r7@1
  int v8; // r0@1
  int v9; // r4@1
  float v10; // r6@1
  const Entity *result; // r0@3
  float v12; // r7@3

  v6 = (Entity *)a3;
  v7 = a1;
  v8 = *(_DWORD *)(a3 + 248);
  v9 = a4;
  v10 = a2;
  if ( v8 == 1 )
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 496))(a3);
  result = (const Entity *)(v7 + 4 * v8);
  v12 = *((float *)result + 1);
  if ( v12 != 0.0 )
  {
    result = (const Entity *)Entity::isRemoved(v6);
    if ( !result )
      result = j_j_j__ZN14EntityRenderer10renderTextER23BaseEntityRenderContextR6EntityRKSsff(
                 v12,
                 v10,
                 (int)v6,
                 v9,
                 a5,
                 a6);
  }
  return result;
}


EntityRenderDispatcher *__fastcall EntityRenderDispatcher::renderDebug(EntityRenderDispatcher *this, BaseEntityRenderContext *a2, Entity *a3)
{
  Entity *v3; // r5@1
  EntityRenderDispatcher *v4; // r6@1
  int v5; // r0@1
  BaseEntityRenderContext *v6; // r4@1
  EntityRenderDispatcher *result; // r0@3
  int v8; // r6@3
  int v9; // [sp+0h] [bp-20h]@4

  v3 = a3;
  v4 = this;
  v5 = *((_DWORD *)a3 + 62);
  v6 = a2;
  if ( v5 == 1 )
    v5 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)a3 + 496))(a3);
  result = (EntityRenderDispatcher *)((char *)v4 + 4 * v5);
  v8 = *((_DWORD *)result + 1);
  if ( v8 )
  {
    EntityRenderData::EntityRenderData((int)&v9, (int)v3, (int)&Vec3::ZERO, (int)&Vec2::ZERO);
    result = (EntityRenderDispatcher *)(*(int (__fastcall **)(int, BaseEntityRenderContext *, int *))(*(_DWORD *)v8 + 16))(
                                         v8,
                                         v6,
                                         &v9);
  }
  return result;
}


int __fastcall EntityRenderDispatcher::_getRenderer(EntityRenderDispatcher *this, Entity *a2)
{
  EntityRenderDispatcher *v2; // r4@1
  int v3; // r0@1

  v2 = this;
  v3 = *((_DWORD *)a2 + 62);
  if ( v3 == 1 )
    v3 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 496))(a2);
  return *((_DWORD *)v2 + v3 + 1);
}


int __fastcall EntityRenderDispatcher::renderEffects(int a1, int a2, Entity *this, int a4, int a5)
{
  Entity *v5; // r6@1
  int v6; // r7@1
  int v7; // r0@1
  int v8; // r5@1
  int v9; // r4@1
  int result; // r0@3
  int v11; // r7@3
  char v12; // [sp+4h] [bp-24h]@5

  v5 = this;
  v6 = a1;
  v7 = *((_DWORD *)this + 62);
  v8 = a4;
  v9 = a2;
  if ( v7 == 1 )
    v7 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)this + 496))(this);
  result = v6 + 4 * v7;
  v11 = *(_DWORD *)(result + 4);
  if ( v11 )
  {
    result = Entity::isRemoved(v5);
    if ( !result )
    {
      EntityRenderData::EntityRenderData((int)&v12, (int)v5, v8, a5);
      result = (*(int (__fastcall **)(int, int, char *))(*(_DWORD *)v11 + 20))(v11, v9, &v12);
    }
  }
  return result;
}


int __fastcall EntityRenderDispatcher::getRenderer(EntityRenderDispatcher *this, Entity *a2)
{
  EntityRenderDispatcher *v2; // r4@1
  int v3; // r0@1

  v2 = this;
  v3 = *((_DWORD *)a2 + 62);
  if ( v3 == 1 )
    v3 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 496))(a2);
  return *((_DWORD *)v2 + v3 + 1);
}


int __fastcall EntityRenderDispatcher::render(EntityRenderDispatcher *this, BaseEntityRenderContext *a2, Entity *a3)
{
  Entity *v3; // r4@1
  EntityRenderDispatcher *v4; // r6@1
  BaseEntityRenderContext *v5; // r5@1
  float v6; // r3@1
  float v13; // [sp+4h] [bp-34h]@1
  char v14; // [sp+10h] [bp-28h]@1
  int v15; // [sp+18h] [bp-20h]@1
  int v16; // [sp+1Ch] [bp-1Ch]@1
  int v17; // [sp+20h] [bp-18h]@1

  v3 = a3;
  v4 = this;
  v5 = a2;
  (*(void (__fastcall **)(int *, Entity *, _DWORD))(*(_DWORD *)a3 + 80))(&v15, a3, *((_DWORD *)a2 + 1));
  Entity::getInterpolatedRotation((Entity *)&v14, *(float *)&v3, *((float *)v5 + 1), v6);
  *((_DWORD *)v3 + 38) = v15;
  *((_DWORD *)v3 + 39) = v16;
  *((_DWORD *)v3 + 40) = v17;
  *(_QWORD *)((char *)v3 + 164) = *(_QWORD *)&v14;
  _R0 = BaseEntityRenderContext::getCameraTargetPosition(v5);
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S6, [SP,#0x38+var_20]
    VLDR            S2, [R0,#4]
    VLDR            S4, [R0,#8]
    VSUB.F32        S0, S6, S0
    VLDR            S8, [SP,#0x38+var_1C]
    VLDR            S10, [SP,#0x38+var_18]
    VSUB.F32        S2, S8, S2
    VSUB.F32        S4, S10, S4
    VSTR            S0, [SP,#0x38+var_34]
    VSTR            S2, [SP,#0x38+var_30]
    VSTR            S4, [SP,#0x38+var_2C]
  }
  return EntityRenderDispatcher::render((int)v4, (int)v5, v3, (int)&v13, (int)&v14);
}


void __fastcall EntityRenderDispatcher::initializePlayerRenderer(EntityRenderDispatcher *this, SkinGeometryGroup *a2, mce::TextureGroup *a3)
{
  SkinGeometryGroup *v3; // r5@1
  mce::TextureGroup *v4; // r8@1
  EntityRenderDispatcher *v5; // r4@1
  PlayerModel *v6; // r6@1
  void *v7; // r7@1
  int v8; // r0@3
  void *v9; // r0@5
  void *v10; // r0@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  int v15; // [sp+Ch] [bp-3Ch]@1
  char v16; // [sp+10h] [bp-38h]@1
  int v17; // [sp+1Ch] [bp-2Ch]@1
  char v18; // [sp+20h] [bp-28h]@1
  PlayerModel *v19; // [sp+2Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_119C884((void **)&v17, "geometry.humanoid.custom");
  GeometryGroup::getGeometry((GeometryPtr *)&v18, (int)v3, (const void **)&v17);
  sub_119C884((void **)&v15, "geometry.cape");
  GeometryGroup::getGeometry((GeometryPtr *)&v16, (int)v3, (const void **)&v15);
  v6 = (PlayerModel *)operator new(0x1F8Cu);
  PlayerModel::PlayerModel(v6, (const GeometryPtr *)&v18, (const GeometryPtr *)&v16);
  v7 = operator new(0x2A8u);
  v19 = v6;
  PlayerRenderer::PlayerRenderer(*(float *)&v7, v4, (int)v3, (int *)&v19, 0);
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  v8 = *((_DWORD *)v5 + 31);
  *((_DWORD *)v5 + 31) = v7;
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v16);
  v9 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v15 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v9);
  }
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v18);
  v10 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v17 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
}


_DWORD *__fastcall EntityRenderDispatcher::EntityRenderDispatcher(_DWORD *a1, char a2)
{
  _DWORD *v2; // r5@1
  char v3; // r4@1
  _DWORD *result; // r0@1

  v2 = a1;
  v3 = a2;
  *a1 = &off_26DB228;
  _aeabi_memclr4(a1 + 1, 324);
  result = v2;
  *((_BYTE *)v2 + 328) = v3;
  return result;
}


int __fastcall EntityRenderDispatcher::initializeEntityRenderers(EntityRenderDispatcher *this, GeometryGroup *a2, mce::TextureGroup *a3, BlockTessellator *a4)
{
  BlockTessellator *v4; // r8@1
  mce::TextureGroup *v5; // r10@1
  GeometryGroup *v6; // r9@1
  EntityRenderDispatcher *v7; // r4@1
  ItemRenderer *v8; // r5@1
  int v9; // r0@1
  HumanoidModel *v10; // r6@3
  HumanoidModel *v11; // r7@3
  HumanoidModel *v12; // r6@3
  int v13; // r1@3
  int v14; // r0@3
  char *v15; // r0@5
  char *v16; // r0@6
  PigRenderer *v17; // r5@13
  int v18; // r0@13
  void *v19; // r0@15
  CowModel *v20; // r6@16
  int v21; // r1@16
  int v22; // r0@16
  char *v23; // r0@18
  char *v24; // r0@19
  void *v25; // r0@22
  CowModel *v26; // r7@23
  void *v27; // r6@23
  int v28; // r0@25
  void *v29; // r0@27
  ChickenModel *v30; // r5@28
  _DWORD *v31; // r6@28
  int v32; // r0@30
  void *v33; // r0@32
  SheepModel *v34; // r7@33
  SheepModel *v35; // r5@33
  void *v36; // r6@33
  int v37; // r0@37
  void *v38; // r0@39
  void *v39; // r0@40
  SkeletonModel *v40; // r6@41
  SkeletonModel *v41; // r6@41
  SkeletonModel *v42; // r5@41
  int v43; // r1@41
  int v44; // r0@41
  void *v45; // r0@45
  void *v46; // r0@48
  void *v47; // r0@51
  ZombieModel *v48; // r6@52
  ZombieModel *v49; // r6@52
  ZombieModel *v50; // r6@52
  int v51; // r1@52
  int v52; // r0@52
  char *v53; // r0@54
  char *v54; // r0@55
  void *v55; // r0@58
  void *v56; // r0@61
  void *v57; // r0@64
  ZombieModel *v58; // r6@65
  ZombieModel *v59; // r6@65
  ZombieModel *v60; // r6@65
  ZombieModel *v61; // r6@65
  int v62; // r1@65
  int v63; // r0@65
  char *v64; // r0@67
  char *v65; // r0@68
  void *v66; // r0@71
  void *v67; // r0@74
  void *v68; // r0@77
  void *v69; // r0@80
  BlazeModel *v70; // r5@81
  ModelPart *v71; // r2@81
  ModelPart *v72; // r3@81
  _DWORD *v73; // r6@81
  int v74; // r0@83
  void *v75; // r0@85
  GhastModel *v76; // r5@86
  ModelPart *v77; // r2@86
  int v78; // r3@86
  void *v79; // r6@86
  int v80; // r0@88
  void *v81; // r0@90
  CreeperRenderer *v82; // r5@91
  int v83; // r0@91
  SpiderModel *v84; // r5@93
  void *v85; // r6@93
  int v86; // r0@95
  void *v87; // r0@97
  SlimeModel *v88; // r7@98
  SlimeModel *v89; // r5@98
  void *v90; // r6@98
  int v91; // r0@102
  void *v92; // r0@104
  void *v93; // r0@105
  LavaSlimeModel *v94; // r5@106
  int v95; // r2@106
  mce::MaterialPtr *v96; // r3@106
  _DWORD *v97; // r6@106
  int v98; // r0@108
  void *v99; // r0@110
  EnderManRenderer *v100; // r5@111
  int v101; // r0@111
  void *v102; // r0@113
  WolfRenderer *v103; // r5@114
  int v104; // r0@114
  void *v105; // r0@116
  PolarBearModel *v106; // r5@117
  _DWORD *v107; // r6@117
  int v108; // r0@119
  void *v109; // r0@121
  OcelotRenderer *v110; // r5@122
  int v111; // r0@122
  void *v112; // r0@124
  BatRenderer *v113; // r5@125
  int v114; // r0@125
  void *v115; // r0@127
  TntRenderer *v116; // r5@128
  int v117; // r0@128
  ArrowRenderer *v118; // r5@130
  int v119; // r0@130
  ShulkerBulletModel *v120; // r5@132
  BaseEntityRenderer *v121; // r6@132
  int v122; // r0@134
  FishHookRenderer *v123; // r5@136
  int v124; // r0@136
  ItemSpriteRenderer *v125; // r5@138
  int v126; // r0@138
  ItemSpriteRenderer *v127; // r5@140
  int v128; // r0@140
  ItemSpriteRenderer *v129; // r5@142
  int v130; // r0@142
  ThrownPotionRenderer *v131; // r5@144
  int v132; // r0@144
  ThrownPotionRenderer *v133; // r5@146
  int v134; // r0@146
  PaintingRenderer *v135; // r5@148
  int v136; // r0@148
  FallingBlockRenderer *v137; // r5@150
  int v138; // r0@150
  MinecartRenderer *v139; // r5@152
  int v140; // r0@152
  BoatRenderer *v141; // r5@154
  int v142; // r0@154
  VillagerRenderer *v143; // r5@156
  int v144; // r0@156
  void *v145; // r0@158
  GuardianRenderer *v146; // r5@159
  int v147; // r0@159
  void *v148; // r0@161
  SilverfishModel *v149; // r5@162
  ModelPart *v150; // r2@162
  ModelPart *v151; // r3@162
  _DWORD *v152; // r6@162
  int v153; // r0@164
  void *v154; // r0@166
  SquidRenderer *v155; // r5@167
  int v156; // r0@167
  void *v157; // r0@169
  int v158; // r1@170
  int v159; // r0@170
  int v160; // r1@172
  int v161; // r0@172
  int v162; // r1@174
  int v163; // r0@174
  LlamaSpitModel *v164; // r5@176
  BaseEntityRenderer *v165; // r6@176
  int v166; // r0@178
  void *v167; // r0@180
  VillagerZombieRenderer *v168; // r5@181
  int v169; // r0@181
  void *v170; // r0@183
  void *v171; // r0@184
  void *v172; // r0@185
  ExperienceOrbRenderer *v173; // r5@186
  int v174; // r0@186
  LightningBoltRenderer *v175; // r5@188
  int v176; // r0@188
  IronGolemRenderer *v177; // r5@190
  int v178; // r0@190
  void *v179; // r0@192
  SnowGolemRenderer *v180; // r5@193
  int v181; // r0@193
  void *v182; // r0@195
  ShulkerRenderer *v183; // r5@196
  int v184; // r0@196
  void *v185; // r0@198
  ItemSpriteRenderer *v186; // r5@199
  int v187; // r0@199
  HorseModel *v188; // r5@201
  void *v189; // r6@201
  int v190; // r0@203
  void *v191; // r0@205
  LlamaModel *v192; // r5@206
  void *v193; // r6@206
  int v194; // r0@208
  void *v195; // r0@210
  RabbitModel *v196; // r5@211
  void *v197; // r6@211
  int v198; // r0@213
  void *v199; // r0@215
  WitchModel *v200; // r6@216
  int v201; // r1@216
  int v202; // r0@216
  char *v203; // r0@218
  char *v204; // r0@219
  void *v205; // r0@222
  GuardianRenderer *v206; // r5@223
  int v207; // r0@223
  void *v208; // r0@225
  EnderDragonRenderer *v209; // r5@226
  int v210; // r0@226
  void *v211; // r0@228
  TripodCameraRenderer *v212; // r5@229
  int v213; // r0@229
  MapRenderer *v214; // r5@231
  int v215; // r0@231
  WitherBossRenderer *v216; // r5@233
  int v217; // r0@233
  WitherSkullRenderer *v218; // r5@235
  int v219; // r0@235
  LeashKnotModel *v220; // r5@237
  BaseEntityRenderer *v221; // r6@237
  int v222; // r0@239
  EmptyRenderer *v223; // r5@241
  int v224; // r0@241
  HuskModel *v225; // r6@243
  ZombieModel *v226; // r6@243
  ZombieModel *v227; // r6@243
  int v228; // r1@243
  int v229; // r0@243
  char *v230; // r0@245
  char *v231; // r0@246
  void *v232; // r0@249
  void *v233; // r0@252
  void *v234; // r0@255
  StrayModel *v235; // r6@256
  StrayModel *v236; // r6@256
  StrayModel *v237; // r6@256
  StrayModel *v238; // r5@256
  int v239; // r1@256
  int v240; // r0@256
  void *v241; // r0@260
  void *v242; // r0@263
  void *v243; // r0@266
  void *v244; // r0@269
  SkeletonModel *v245; // r6@270
  SkeletonModel *v246; // r6@270
  SkeletonModel *v247; // r5@270
  int v248; // r1@270
  int v249; // r0@270
  void *v250; // r0@274
  void *v251; // r0@277
  void *v252; // r0@280
  NpcRenderer *v253; // r5@281
  int v254; // r0@281
  void *v255; // r0@283
  ItemSpriteRenderer *v256; // r5@284
  int v257; // r0@284
  EnderCrystalRenderer *v258; // r5@286
  int v259; // r0@286
  EndermiteRenderer *v260; // r5@288
  int v261; // r0@288
  EvocationFangRenderer *v262; // r5@290
  int v263; // r0@290
  EvocationIllagerModel *v264; // r5@292
  void *v265; // r6@292
  int v266; // r0@294
  void *v267; // r0@296
  VexModel *v268; // r5@297
  void *v269; // r6@297
  int v270; // r0@299
  void *v271; // r0@301
  AgentRenderer *v272; // r5@302
  int v273; // r0@302
  void *v274; // r0@304
  VindicationIllagerModel *v275; // r6@305
  VindicationIllagerModel *v276; // r6@305
  VindicationIllagerModel *v277; // r5@305
  int v278; // r1@305
  int v279; // r0@305
  void *v280; // r0@309
  void *v281; // r0@312
  void *v282; // r0@315
  ArmorStandModel *v283; // r6@316
  int v284; // r1@316
  int v285; // r0@316
  char *v286; // r0@318
  char *v287; // r0@319
  void *v288; // r0@322
  ParrotRenderer *v289; // r5@323
  int v290; // r0@323
  void *v291; // r0@325
  FireworksRocketRenderer *v292; // r5@326
  int result; // r0@326
  unsigned int *v294; // r2@329
  signed int v295; // r1@331
  unsigned int *v296; // r2@333
  signed int v297; // r1@335
  unsigned int *v298; // r2@337
  signed int v299; // r1@339
  unsigned int *v300; // r2@341
  signed int v301; // r1@343
  unsigned int *v302; // r2@345
  signed int v303; // r1@347
  unsigned int *v304; // r2@349
  signed int v305; // r1@351
  unsigned int *v306; // r2@353
  signed int v307; // r1@355
  unsigned int *v308; // r2@357
  signed int v309; // r1@359
  unsigned int *v310; // r2@361
  signed int v311; // r1@363
  unsigned int *v312; // r2@365
  signed int v313; // r1@367
  unsigned int *v314; // r2@369
  signed int v315; // r1@371
  unsigned int *v316; // r2@373
  signed int v317; // r1@375
  unsigned int *v318; // r2@377
  signed int v319; // r1@379
  unsigned int *v320; // r2@381
  signed int v321; // r1@383
  unsigned int *v322; // r2@385
  signed int v323; // r1@387
  unsigned int *v324; // r2@389
  signed int v325; // r1@391
  unsigned int *v326; // r2@393
  signed int v327; // r1@395
  unsigned int *v328; // r2@397
  signed int v329; // r1@399
  unsigned int *v330; // r2@401
  signed int v331; // r1@403
  unsigned int *v332; // r2@405
  signed int v333; // r1@407
  unsigned int *v334; // r2@409
  signed int v335; // r1@411
  unsigned int *v336; // r2@413
  signed int v337; // r1@415
  unsigned int *v338; // r2@417
  signed int v339; // r1@419
  unsigned int *v340; // r2@421
  signed int v341; // r1@423
  unsigned int *v342; // r2@425
  signed int v343; // r1@427
  unsigned int *v344; // r2@429
  signed int v345; // r1@431
  unsigned int *v346; // r2@433
  signed int v347; // r1@435
  unsigned int *v348; // r2@437
  signed int v349; // r1@439
  unsigned int *v350; // r2@441
  signed int v351; // r1@443
  unsigned int *v352; // r2@445
  signed int v353; // r1@447
  unsigned int *v354; // r2@449
  signed int v355; // r1@451
  unsigned int *v356; // r2@453
  signed int v357; // r1@455
  unsigned int *v358; // r2@457
  signed int v359; // r1@459
  unsigned int *v360; // r2@461
  signed int v361; // r1@463
  unsigned int *v362; // r2@465
  signed int v363; // r1@467
  unsigned int *v364; // r2@469
  signed int v365; // r1@471
  unsigned int *v366; // r2@473
  signed int v367; // r1@475
  unsigned int *v368; // r2@477
  signed int v369; // r1@479
  unsigned int *v370; // r2@481
  signed int v371; // r1@483
  unsigned int *v372; // r2@485
  signed int v373; // r1@487
  unsigned int *v374; // r2@489
  signed int v375; // r1@491
  unsigned int *v376; // r2@493
  signed int v377; // r1@495
  unsigned int *v378; // r2@497
  signed int v379; // r1@499
  unsigned int *v380; // r2@501
  signed int v381; // r1@503
  unsigned int *v382; // r2@505
  signed int v383; // r1@507
  unsigned int *v384; // r2@509
  signed int v385; // r1@511
  unsigned int *v386; // r2@513
  signed int v387; // r1@515
  unsigned int *v388; // r2@517
  signed int v389; // r1@519
  unsigned int *v390; // r2@521
  signed int v391; // r1@523
  unsigned int *v392; // r2@525
  signed int v393; // r1@527
  unsigned int *v394; // r2@529
  signed int v395; // r1@531
  unsigned int *v396; // r2@533
  signed int v397; // r1@535
  unsigned int *v398; // r2@537
  signed int v399; // r1@539
  unsigned int *v400; // r2@541
  signed int v401; // r1@543
  unsigned int *v402; // r2@545
  signed int v403; // r1@547
  unsigned int *v404; // r2@549
  signed int v405; // r1@551
  unsigned int *v406; // r2@553
  signed int v407; // r1@555
  unsigned int *v408; // r2@557
  signed int v409; // r1@559
  unsigned int *v410; // r2@561
  signed int v411; // r1@563
  unsigned int *v412; // r2@565
  signed int v413; // r1@567
  unsigned int *v414; // r2@569
  signed int v415; // r1@571
  unsigned int *v416; // r2@573
  signed int v417; // r1@575
  unsigned int *v418; // r2@577
  signed int v419; // r1@579
  unsigned int *v420; // r2@581
  signed int v421; // r1@583
  unsigned int *v422; // r2@585
  signed int v423; // r1@587
  unsigned int *v424; // r2@589
  signed int v425; // r1@591
  unsigned int *v426; // r2@593
  signed int v427; // r1@595
  unsigned int *v428; // r2@597
  signed int v429; // r1@599
  unsigned int *v430; // r2@601
  signed int v431; // r1@603
  unsigned int *v432; // r2@605
  signed int v433; // r1@607
  unsigned int *v434; // r2@609
  signed int v435; // r1@611
  unsigned int *v436; // r2@613
  signed int v437; // r1@615
  unsigned int *v438; // r2@617
  signed int v439; // r1@619
  unsigned int *v440; // r2@621
  signed int v441; // r1@623
  unsigned int *v442; // r2@625
  signed int v443; // r1@627
  unsigned int *v444; // r2@629
  signed int v445; // r1@631
  unsigned int *v446; // r2@633
  signed int v447; // r1@635
  ModelPart *v448; // [sp+0h] [bp-660h]@65
  int v449; // [sp+0h] [bp-660h]@81
  int v450; // [sp+0h] [bp-660h]@86
  ModelPart *v451; // [sp+0h] [bp-660h]@106
  ModelPart *v452; // [sp+4h] [bp-65Ch]@65
  int v453; // [sp+4h] [bp-65Ch]@81
  int v454; // [sp+4h] [bp-65Ch]@86
  ModelPart *v455; // [sp+4h] [bp-65Ch]@106
  int v456; // [sp+8h] [bp-658h]@65
  int v457; // [sp+8h] [bp-658h]@81
  int v458; // [sp+8h] [bp-658h]@86
  int v459; // [sp+8h] [bp-658h]@106
  int v460; // [sp+Ch] [bp-654h]@0
  int v461; // [sp+Ch] [bp-654h]@81
  int v462; // [sp+Ch] [bp-654h]@86
  int v463; // [sp+Ch] [bp-654h]@106
  int v464; // [sp+10h] [bp-650h]@81
  int v465; // [sp+14h] [bp-64Ch]@81
  int v466; // [sp+18h] [bp-648h]@81
  int v467; // [sp+1Ch] [bp-644h]@81
  char *v468; // [sp+20h] [bp-640h]@81
  char *v469; // [sp+24h] [bp-63Ch]@81
  int v470; // [sp+28h] [bp-638h]@81
  int v471; // [sp+2Ch] [bp-634h]@81
  int v472; // [sp+30h] [bp-630h]@81
  char v473; // [sp+34h] [bp-62Ch]@81
  int v474; // [sp+48h] [bp-618h]@316
  char v475; // [sp+4Ch] [bp-614h]@316
  ArmorStandModel *v476; // [sp+54h] [bp-60Ch]@316
  int v477; // [sp+58h] [bp-608h]@316
  int v478; // [sp+60h] [bp-600h]@305
  char v479; // [sp+64h] [bp-5FCh]@305
  VindicationIllagerModel *v480; // [sp+6Ch] [bp-5F4h]@305
  int v481; // [sp+74h] [bp-5ECh]@305
  char v482; // [sp+78h] [bp-5E8h]@305
  VindicationIllagerModel *v483; // [sp+80h] [bp-5E0h]@305
  int v484; // [sp+88h] [bp-5D8h]@305
  char v485; // [sp+8Ch] [bp-5D4h]@305
  VindicationIllagerModel *v486; // [sp+94h] [bp-5CCh]@305
  int v487; // [sp+98h] [bp-5C8h]@305
  int v488; // [sp+A0h] [bp-5C0h]@302
  char v489; // [sp+A4h] [bp-5BCh]@302
  int v490; // [sp+B0h] [bp-5B0h]@297
  char v491; // [sp+B4h] [bp-5ACh]@297
  int v492; // [sp+C0h] [bp-5A0h]@292
  char v493; // [sp+C4h] [bp-59Ch]@292
  int v494; // [sp+D0h] [bp-590h]@281
  char v495; // [sp+D4h] [bp-58Ch]@281
  int v496; // [sp+DCh] [bp-584h]@270
  int v497; // [sp+E4h] [bp-57Ch]@270
  char v498; // [sp+E8h] [bp-578h]@270
  SkeletonModel *v499; // [sp+F0h] [bp-570h]@270
  int v500; // [sp+F8h] [bp-568h]@270
  char v501; // [sp+FCh] [bp-564h]@270
  SkeletonModel *v502; // [sp+104h] [bp-55Ch]@270
  int v503; // [sp+10Ch] [bp-554h]@270
  char v504; // [sp+110h] [bp-550h]@270
  SkeletonModel *v505; // [sp+118h] [bp-548h]@270
  int v506; // [sp+11Ch] [bp-544h]@270
  int v507; // [sp+120h] [bp-540h]@256
  int v508; // [sp+128h] [bp-538h]@256
  char v509; // [sp+12Ch] [bp-534h]@256
  StrayModel *v510; // [sp+134h] [bp-52Ch]@256
  int v511; // [sp+13Ch] [bp-524h]@256
  char v512; // [sp+140h] [bp-520h]@256
  StrayModel *v513; // [sp+148h] [bp-518h]@256
  int v514; // [sp+150h] [bp-510h]@256
  char v515; // [sp+154h] [bp-50Ch]@256
  StrayModel *v516; // [sp+15Ch] [bp-504h]@256
  int v517; // [sp+164h] [bp-4FCh]@256
  char v518; // [sp+168h] [bp-4F8h]@256
  StrayModel *v519; // [sp+170h] [bp-4F0h]@256
  int v520; // [sp+174h] [bp-4ECh]@256
  int v521; // [sp+178h] [bp-4E8h]@243
  char *v522; // [sp+180h] [bp-4E0h]@243
  char *v523; // [sp+184h] [bp-4DCh]@243
  int v524; // [sp+188h] [bp-4D8h]@243
  char v525; // [sp+18Ch] [bp-4D4h]@243
  int v526; // [sp+1A8h] [bp-4B8h]@243
  char v527; // [sp+1ACh] [bp-4B4h]@243
  ZombieModel *v528; // [sp+1B4h] [bp-4ACh]@243
  int v529; // [sp+1BCh] [bp-4A4h]@243
  char v530; // [sp+1C0h] [bp-4A0h]@243
  ZombieModel *v531; // [sp+1C8h] [bp-498h]@243
  int v532; // [sp+1D0h] [bp-490h]@243
  char v533; // [sp+1D4h] [bp-48Ch]@243
  HuskModel *v534; // [sp+1DCh] [bp-484h]@243
  int v535; // [sp+1E0h] [bp-480h]@243
  int v536; // [sp+1E8h] [bp-478h]@226
  char v537; // [sp+1ECh] [bp-474h]@226
  int v538; // [sp+1F8h] [bp-468h]@223
  char v539; // [sp+1FCh] [bp-464h]@223
  char *v540; // [sp+208h] [bp-458h]@216
  char *v541; // [sp+20Ch] [bp-454h]@216
  int v542; // [sp+210h] [bp-450h]@216
  char v543; // [sp+214h] [bp-44Ch]@216
  int v544; // [sp+230h] [bp-430h]@216
  char v545; // [sp+234h] [bp-42Ch]@216
  WitchModel *v546; // [sp+23Ch] [bp-424h]@216
  int v547; // [sp+240h] [bp-420h]@216
  int v548; // [sp+248h] [bp-418h]@211
  char v549; // [sp+24Ch] [bp-414h]@211
  int v550; // [sp+258h] [bp-408h]@206
  char v551; // [sp+25Ch] [bp-404h]@206
  int v552; // [sp+268h] [bp-3F8h]@201
  char v553; // [sp+26Ch] [bp-3F4h]@201
  int v554; // [sp+278h] [bp-3E8h]@196
  char v555; // [sp+27Ch] [bp-3E4h]@196
  int v556; // [sp+288h] [bp-3D8h]@193
  char v557; // [sp+28Ch] [bp-3D4h]@193
  int v558; // [sp+298h] [bp-3C8h]@190
  char v559; // [sp+29Ch] [bp-3C4h]@190
  int v560; // [sp+2A8h] [bp-3B8h]@181
  char v561; // [sp+2ACh] [bp-3B4h]@181
  int v562; // [sp+2B8h] [bp-3A8h]@181
  char v563; // [sp+2BCh] [bp-3A4h]@181
  int v564; // [sp+2C8h] [bp-398h]@181
  char v565; // [sp+2CCh] [bp-394h]@181
  int v566; // [sp+2D8h] [bp-388h]@176
  char v567; // [sp+2DCh] [bp-384h]@176
  int v568; // [sp+2E4h] [bp-37Ch]@174
  int v569; // [sp+2E8h] [bp-378h]@174
  int v570; // [sp+2ECh] [bp-374h]@172
  int v571; // [sp+2F0h] [bp-370h]@172
  int v572; // [sp+2F4h] [bp-36Ch]@170
  int v573; // [sp+2F8h] [bp-368h]@170
  int v574; // [sp+300h] [bp-360h]@167
  char v575; // [sp+304h] [bp-35Ch]@167
  int v576; // [sp+310h] [bp-350h]@162
  char v577; // [sp+314h] [bp-34Ch]@162
  int v578; // [sp+320h] [bp-340h]@159
  char v579; // [sp+324h] [bp-33Ch]@159
  int v580; // [sp+330h] [bp-330h]@156
  char v581; // [sp+334h] [bp-32Ch]@156
  int v582; // [sp+340h] [bp-320h]@125
  char v583; // [sp+344h] [bp-31Ch]@125
  int v584; // [sp+350h] [bp-310h]@122
  char v585; // [sp+354h] [bp-30Ch]@122
  int v586; // [sp+360h] [bp-300h]@117
  char v587; // [sp+364h] [bp-2FCh]@117
  int v588; // [sp+370h] [bp-2F0h]@114
  char v589; // [sp+374h] [bp-2ECh]@114
  int v590; // [sp+380h] [bp-2E0h]@111
  char v591; // [sp+384h] [bp-2DCh]@111
  int v592; // [sp+390h] [bp-2D0h]@106
  char v593; // [sp+394h] [bp-2CCh]@106
  int v594; // [sp+3A0h] [bp-2C0h]@98
  char v595; // [sp+3A4h] [bp-2BCh]@98
  int v596; // [sp+3B0h] [bp-2B0h]@98
  char v597; // [sp+3B4h] [bp-2ACh]@98
  int v598; // [sp+3C0h] [bp-2A0h]@93
  char v599; // [sp+3C4h] [bp-29Ch]@93
  int v600; // [sp+3D0h] [bp-290h]@86
  char v601; // [sp+3D4h] [bp-28Ch]@86
  int v602; // [sp+3E0h] [bp-280h]@81
  char v603; // [sp+3E4h] [bp-27Ch]@81
  int v604; // [sp+3ECh] [bp-274h]@65
  char *v605; // [sp+3F4h] [bp-26Ch]@65
  char *v606; // [sp+3F8h] [bp-268h]@65
  int v607; // [sp+3FCh] [bp-264h]@65
  char v608; // [sp+400h] [bp-260h]@65
  int v609; // [sp+41Ch] [bp-244h]@65
  char v610; // [sp+420h] [bp-240h]@65
  ZombieModel *v611; // [sp+428h] [bp-238h]@65
  int v612; // [sp+430h] [bp-230h]@65
  char v613; // [sp+434h] [bp-22Ch]@65
  ZombieModel *v614; // [sp+43Ch] [bp-224h]@65
  int v615; // [sp+444h] [bp-21Ch]@65
  char v616; // [sp+448h] [bp-218h]@65
  ZombieModel *v617; // [sp+450h] [bp-210h]@65
  int v618; // [sp+458h] [bp-208h]@65
  char v619; // [sp+45Ch] [bp-204h]@65
  ZombieModel *v620; // [sp+464h] [bp-1FCh]@65
  int v621; // [sp+468h] [bp-1F8h]@65
  int v622; // [sp+46Ch] [bp-1F4h]@52
  char *v623; // [sp+474h] [bp-1ECh]@52
  char *v624; // [sp+478h] [bp-1E8h]@52
  int v625; // [sp+47Ch] [bp-1E4h]@52
  char v626; // [sp+480h] [bp-1E0h]@52
  int v627; // [sp+49Ch] [bp-1C4h]@52
  char v628; // [sp+4A0h] [bp-1C0h]@52
  ZombieModel *v629; // [sp+4A8h] [bp-1B8h]@52
  int v630; // [sp+4B0h] [bp-1B0h]@52
  char v631; // [sp+4B4h] [bp-1ACh]@52
  ZombieModel *v632; // [sp+4BCh] [bp-1A4h]@52
  int v633; // [sp+4C4h] [bp-19Ch]@52
  char v634; // [sp+4C8h] [bp-198h]@52
  ZombieModel *v635; // [sp+4D0h] [bp-190h]@52
  int v636; // [sp+4D4h] [bp-18Ch]@52
  int v637; // [sp+4D8h] [bp-188h]@41
  int v638; // [sp+4E0h] [bp-180h]@41
  char v639; // [sp+4E4h] [bp-17Ch]@41
  SkeletonModel *v640; // [sp+4ECh] [bp-174h]@41
  int v641; // [sp+4F4h] [bp-16Ch]@41
  char v642; // [sp+4F8h] [bp-168h]@41
  SkeletonModel *v643; // [sp+500h] [bp-160h]@41
  int v644; // [sp+508h] [bp-158h]@41
  char v645; // [sp+50Ch] [bp-154h]@41
  SkeletonModel *v646; // [sp+514h] [bp-14Ch]@41
  int v647; // [sp+518h] [bp-148h]@41
  int v648; // [sp+520h] [bp-140h]@33
  char v649; // [sp+524h] [bp-13Ch]@33
  int v650; // [sp+530h] [bp-130h]@33
  char v651; // [sp+534h] [bp-12Ch]@33
  int v652; // [sp+540h] [bp-120h]@28
  char v653; // [sp+544h] [bp-11Ch]@28
  int v654; // [sp+550h] [bp-110h]@23
  char v655; // [sp+554h] [bp-10Ch]@23
  int v656; // [sp+55Ch] [bp-104h]@16
  char *v657; // [sp+564h] [bp-FCh]@16
  char *v658; // [sp+568h] [bp-F8h]@16
  int v659; // [sp+56Ch] [bp-F4h]@16
  char v660; // [sp+570h] [bp-F0h]@16
  int v661; // [sp+58Ch] [bp-D4h]@16
  char v662; // [sp+590h] [bp-D0h]@16
  CowModel *v663; // [sp+598h] [bp-C8h]@16
  int v664; // [sp+59Ch] [bp-C4h]@16
  int v665; // [sp+5A4h] [bp-BCh]@13
  char v666; // [sp+5A8h] [bp-B8h]@13
  int v667; // [sp+5B0h] [bp-B0h]@3
  char *v668; // [sp+5B8h] [bp-A8h]@3
  char *v669; // [sp+5BCh] [bp-A4h]@3
  int v670; // [sp+5C0h] [bp-A0h]@3
  char v671; // [sp+5C4h] [bp-9Ch]@3
  HumanoidModel *v672; // [sp+5DCh] [bp-84h]@3
  HumanoidModel *v673; // [sp+5E0h] [bp-80h]@3
  HumanoidModel *v674; // [sp+5E4h] [bp-7Ch]@3
  int v675; // [sp+5E8h] [bp-78h]@3
  CowModel *v676; // [sp+5ECh] [bp-74h]@23
  ChickenModel *v677; // [sp+5F0h] [bp-70h]@28
  SheepModel *v678; // [sp+5F4h] [bp-6Ch]@33
  SheepModel *v679; // [sp+5F8h] [bp-68h]@33
  BlazeModel *v680; // [sp+5FCh] [bp-64h]@81
  GhastModel *v681; // [sp+600h] [bp-60h]@86
  SpiderModel *v682; // [sp+604h] [bp-5Ch]@93
  SlimeModel *v683; // [sp+608h] [bp-58h]@98
  SlimeModel *v684; // [sp+60Ch] [bp-54h]@98
  LavaSlimeModel *v685; // [sp+610h] [bp-50h]@106
  PolarBearModel *v686; // [sp+614h] [bp-4Ch]@117
  ShulkerBulletModel *v687; // [sp+618h] [bp-48h]@132
  SilverfishModel *v688; // [sp+61Ch] [bp-44h]@162
  LlamaSpitModel *v689; // [sp+620h] [bp-40h]@176
  HorseModel *v690; // [sp+624h] [bp-3Ch]@201
  LlamaModel *v691; // [sp+628h] [bp-38h]@206
  RabbitModel *v692; // [sp+62Ch] [bp-34h]@211
  LeashKnotModel *v693; // [sp+630h] [bp-30h]@237
  EvocationIllagerModel *v694; // [sp+634h] [bp-2Ch]@292
  VexModel *v695; // [sp+638h] [bp-28h]@297

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  EntityRenderer::resetFireTexture(this);
  v8 = (ItemRenderer *)operator new(0x128u);
  ItemRenderer::ItemRenderer(v8, v5);
  v9 = *((_DWORD *)v7 + 5);
  *((_DWORD *)v7 + 5) = v8;
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  v10 = (HumanoidModel *)operator new(0x10D4u);
  HumanoidModel::HumanoidModel(v10, 0.0, 0.0, 64, 32);
  v674 = v10;
  v11 = (HumanoidModel *)operator new(0x10D4u);
  HumanoidModel::HumanoidModel(v11, 1.0, 0.0, 64, 32);
  v673 = v11;
  v12 = (HumanoidModel *)operator new(0x10D4u);
  HumanoidModel::HumanoidModel(v12, 0.5, 0.0, 64, 32);
  v672 = v12;
  sub_119C884((void **)&v668, "textures/entity/zombie/zombie");
  v669 = v668;
  v670 = 0;
  v668 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v671, v5, (int)&v669, 0);
  v667 = 0;
  std::make_unique<HumanoidMobRenderer,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,mce::TexturePtr,float>(
    &v675,
    (int *)&v674,
    (int *)&v673,
    (int *)&v672,
    (int)&v671,
    (int)&v667);
  v13 = v675;
  v675 = 0;
  v14 = *((_DWORD *)v7 + 4);
  *((_DWORD *)v7 + 4) = v13;
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v671);
  v15 = v669 - 12;
  if ( (int *)(v669 - 12) != &dword_28898C0 )
  {
    v294 = (unsigned int *)(v669 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v295 = __ldrex(v294);
      while ( __strex(v295 - 1, v294) );
    }
    else
      v295 = (*v294)--;
    if ( v295 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  }
  v16 = v668 - 12;
  if ( (int *)(v668 - 12) != &dword_28898C0 )
    v296 = (unsigned int *)(v668 - 4);
        v297 = __ldrex(v296);
      while ( __strex(v297 - 1, v296) );
      v297 = (*v296)--;
    if ( v297 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  if ( v672 )
    (*(void (**)(void))(*(_DWORD *)v672 + 4))();
  v672 = 0;
  if ( v673 )
    (*(void (**)(void))(*(_DWORD *)v673 + 4))();
  v673 = 0;
  if ( v674 )
    (*(void (**)(void))(*(_DWORD *)v674 + 4))();
  v674 = 0;
  sub_119C884((void **)&v665, "geometry.pig");
  GeometryGroup::getGeometry((GeometryPtr *)&v666, (int)v6, (const void **)&v665);
  v17 = (PigRenderer *)operator new(0x29Cu);
  PigRenderer::PigRenderer(v17, v5, (const GeometryPtr *)&v666, 0.7);
  v18 = *((_DWORD *)v7 + 9);
  *((_DWORD *)v7 + 9) = v17;
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v666);
  v19 = (void *)(v665 - 12);
  if ( (int *)(v665 - 12) != &dword_28898C0 )
    v298 = (unsigned int *)(v665 - 4);
        v299 = __ldrex(v298);
      while ( __strex(v299 - 1, v298) );
      v299 = (*v298)--;
    if ( v299 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  sub_119C884((void **)&v661, "geometry.cow");
  GeometryGroup::getGeometry((GeometryPtr *)&v662, (int)v6, (const void **)&v661);
  v20 = (CowModel *)operator new(0x654u);
  CowModel::CowModel(v20, (const GeometryPtr *)&v662, 0);
  v663 = v20;
  sub_119C884((void **)&v657, "textures/entity/cow/cow");
  v658 = v657;
  v659 = 0;
  v657 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v660, v5, (int)&v658, 0);
  v656 = 0;
  std::make_unique<MobRenderer,std::unique_ptr<CowModel,std::default_delete<CowModel>>,mce::TexturePtr,float>(
    &v664,
    (int *)&v663,
    (int)&v660,
    &v656);
  v21 = v664;
  v664 = 0;
  v22 = *((_DWORD *)v7 + 7);
  *((_DWORD *)v7 + 7) = v21;
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v660);
  v23 = v658 - 12;
  if ( (int *)(v658 - 12) != &dword_28898C0 )
    v300 = (unsigned int *)(v658 - 4);
        v301 = __ldrex(v300);
      while ( __strex(v301 - 1, v300) );
      v301 = (*v300)--;
    if ( v301 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  v24 = v657 - 12;
  if ( (int *)(v657 - 12) != &dword_28898C0 )
    v302 = (unsigned int *)(v657 - 4);
        v303 = __ldrex(v302);
      while ( __strex(v303 - 1, v302) );
      v303 = (*v302)--;
    if ( v303 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  if ( v663 )
    (*(void (**)(void))(*(_DWORD *)v663 + 4))();
  v663 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v662);
  v25 = (void *)(v661 - 12);
  if ( (int *)(v661 - 12) != &dword_28898C0 )
    v304 = (unsigned int *)(v661 - 4);
        v305 = __ldrex(v304);
      while ( __strex(v305 - 1, v304) );
      v305 = (*v304)--;
    if ( v305 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  sub_119C884((void **)&v654, "geometry.mooshroom");
  GeometryGroup::getGeometry((GeometryPtr *)&v655, (int)v6, (const void **)&v654);
  v26 = (CowModel *)operator new(0x654u);
  CowModel::CowModel(v26, (const GeometryPtr *)&v655, 1);
  v27 = operator new(0x288u);
  v676 = v26;
  MushroomCowRenderer::MushroomCowRenderer(*(float *)&v27, v5, (int)v4, (int *)&v676, 0);
  if ( v676 )
    (*(void (**)(void))(*(_DWORD *)v676 + 4))();
  v28 = *((_DWORD *)v7 + 8);
  *((_DWORD *)v7 + 8) = v27;
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v655);
  v29 = (void *)(v654 - 12);
  if ( (int *)(v654 - 12) != &dword_28898C0 )
    v306 = (unsigned int *)(v654 - 4);
        v307 = __ldrex(v306);
      while ( __strex(v307 - 1, v306) );
      v307 = (*v306)--;
    if ( v307 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  sub_119C884((void **)&v652, "geometry.chicken");
  GeometryGroup::getGeometry((GeometryPtr *)&v653, (int)v6, (const void **)&v652);
  v30 = (ChickenModel *)operator new(0x804u);
  ChickenModel::ChickenModel(v30, (const GeometryPtr *)&v653);
  v31 = operator new(0x284u);
  v677 = v30;
  ChickenRenderer::ChickenRenderer(v31, v5, (int *)&v677);
  if ( v677 )
    (*(void (**)(void))(*(_DWORD *)v677 + 4))();
  v32 = *((_DWORD *)v7 + 6);
  *((_DWORD *)v7 + 6) = v31;
  if ( v32 )
    (*(void (**)(void))(*(_DWORD *)v32 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v653);
  v33 = (void *)(v652 - 12);
  if ( (int *)(v652 - 12) != &dword_28898C0 )
    v308 = (unsigned int *)(v652 - 4);
        v309 = __ldrex(v308);
      while ( __strex(v309 - 1, v308) );
      v309 = (*v308)--;
    if ( v309 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  sub_119C884((void **)&v650, "geometry.sheep");
  GeometryGroup::getGeometry((GeometryPtr *)&v651, (int)v6, (const void **)&v650);
  v34 = (SheepModel *)operator new(0x64Cu);
  SheepModel::SheepModel(v34, (const GeometryPtr *)&v651);
  sub_119C884((void **)&v648, "geometry.sheep.sheared");
  GeometryGroup::getGeometry((GeometryPtr *)&v649, (int)v6, (const void **)&v648);
  v35 = (SheepModel *)operator new(0x64Cu);
  SheepModel::SheepModel(v35, (const GeometryPtr *)&v649);
  v36 = operator new(0x288u);
  v679 = v34;
  v678 = v35;
  SheepRenderer::SheepRenderer(*(float *)&v36, v5, (int *)&v679, (int *)&v678, 0);
  if ( v678 )
    (*(void (**)(void))(*(_DWORD *)v678 + 4))();
  v678 = 0;
  if ( v679 )
    (*(void (**)(void))(*(_DWORD *)v679 + 4))();
  v37 = *((_DWORD *)v7 + 10);
  *((_DWORD *)v7 + 10) = v36;
  if ( v37 )
    (*(void (**)(void))(*(_DWORD *)v37 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v649);
  v38 = (void *)(v648 - 12);
  if ( (int *)(v648 - 12) != &dword_28898C0 )
    v310 = (unsigned int *)(v648 - 4);
        v311 = __ldrex(v310);
      while ( __strex(v311 - 1, v310) );
      v311 = (*v310)--;
    if ( v311 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v38);
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v651);
  v39 = (void *)(v650 - 12);
  if ( (int *)(v650 - 12) != &dword_28898C0 )
    v312 = (unsigned int *)(v650 - 4);
        v313 = __ldrex(v312);
      while ( __strex(v313 - 1, v312) );
      v313 = (*v312)--;
    if ( v313 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  sub_119C884((void **)&v644, "geometry.skeleton");
  GeometryGroup::getGeometry((GeometryPtr *)&v645, (int)v6, (const void **)&v644);
  v40 = (SkeletonModel *)operator new(0x10ECu);
  SkeletonModel::SkeletonModel(v40, (const GeometryPtr *)&v645, 0);
  v646 = v40;
  sub_119C884((void **)&v641, "geometry.humanoid.armor1");
  GeometryGroup::getGeometry((GeometryPtr *)&v642, (int)v6, (const void **)&v641);
  v41 = (SkeletonModel *)operator new(0x10ECu);
  SkeletonModel::SkeletonModel(v41, (const GeometryPtr *)&v642, 1);
  v643 = v41;
  sub_119C884((void **)&v638, "geometry.humanoid.armor2");
  GeometryGroup::getGeometry((GeometryPtr *)&v639, (int)v6, (const void **)&v638);
  v42 = (SkeletonModel *)operator new(0x10ECu);
  SkeletonModel::SkeletonModel(v42, (const GeometryPtr *)&v639, 1);
  v640 = v42;
  v637 = 1056964608;
  std::make_unique<SkeletonRenderer,mce::TextureGroup &,std::unique_ptr<SkeletonModel,std::default_delete<SkeletonModel>>,std::unique_ptr<SkeletonModel,std::default_delete<SkeletonModel>>,std::unique_ptr<SkeletonModel,std::default_delete<SkeletonModel>>,float>(
    &v647,
    *(float *)&v5,
    (int *)&v646,
    (int *)&v643,
    (int *)&v640,
    (int)&v637);
  v43 = v647;
  v647 = 0;
  v44 = *((_DWORD *)v7 + 22);
  *((_DWORD *)v7 + 22) = v43;
  if ( v44 )
    (*(void (**)(void))(*(_DWORD *)v44 + 4))();
  if ( v640 )
    (*(void (**)(void))(*(_DWORD *)v640 + 4))();
  v640 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v639);
  v45 = (void *)(v638 - 12);
  if ( (int *)(v638 - 12) != &dword_28898C0 )
    v314 = (unsigned int *)(v638 - 4);
        v315 = __ldrex(v314);
      while ( __strex(v315 - 1, v314) );
      v315 = (*v314)--;
    if ( v315 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v45);
  if ( v643 )
    (*(void (**)(void))(*(_DWORD *)v643 + 4))();
  v643 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v642);
  v46 = (void *)(v641 - 12);
  if ( (int *)(v641 - 12) != &dword_28898C0 )
    v316 = (unsigned int *)(v641 - 4);
        v317 = __ldrex(v316);
      while ( __strex(v317 - 1, v316) );
      v317 = (*v316)--;
    if ( v317 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v46);
  if ( v646 )
    (*(void (**)(void))(*(_DWORD *)v646 + 4))();
  v646 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v645);
  v47 = (void *)(v644 - 12);
  if ( (int *)(v644 - 12) != &dword_28898C0 )
    v318 = (unsigned int *)(v644 - 4);
        v319 = __ldrex(v318);
      while ( __strex(v319 - 1, v318) );
      v319 = (*v318)--;
    if ( v319 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v47);
  sub_119C884((void **)&v633, "geometry.zombie");
  GeometryGroup::getGeometry((GeometryPtr *)&v634, (int)v6, (const void **)&v633);
  v48 = (ZombieModel *)operator new(0x10E0u);
  ZombieModel::ZombieModel(v48, (const GeometryPtr *)&v634);
  v635 = v48;
  sub_119C884((void **)&v630, "geometry.humanoid.armor1");
  GeometryGroup::getGeometry((GeometryPtr *)&v631, (int)v6, (const void **)&v630);
  v49 = (ZombieModel *)operator new(0x10E0u);
  ZombieModel::ZombieModel(v49, (const GeometryPtr *)&v631);
  v632 = v49;
  sub_119C884((void **)&v627, "geometry.humanoid.armor2");
  GeometryGroup::getGeometry((GeometryPtr *)&v628, (int)v6, (const void **)&v627);
  v50 = (ZombieModel *)operator new(0x10E0u);
  ZombieModel::ZombieModel(v50, (const GeometryPtr *)&v628);
  v629 = v50;
  sub_119C884((void **)&v623, "textures/entity/zombie/zombie");
  v624 = v623;
  v623 = (char *)&unk_28898CC;
  v625 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v626, v5, (int)&v624, 0);
  v622 = 1056964608;
  std::make_unique<HumanoidMobRenderer,std::unique_ptr<ZombieModel,std::default_delete<ZombieModel>>,std::unique_ptr<ZombieModel,std::default_delete<ZombieModel>>,std::unique_ptr<ZombieModel,std::default_delete<ZombieModel>>,mce::TexturePtr,float>(
    &v636,
    (int *)&v635,
    (int *)&v632,
    (int *)&v629,
    (int)&v626,
    (int)&v622);
  v51 = v636;
  v636 = 0;
  v52 = *((_DWORD *)v7 + 17);
  *((_DWORD *)v7 + 17) = v51;
  if ( v52 )
    (*(void (**)(void))(*(_DWORD *)v52 + 4))();
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v626);
  v53 = v624 - 12;
  if ( (int *)(v624 - 12) != &dword_28898C0 )
    v320 = (unsigned int *)(v624 - 4);
        v321 = __ldrex(v320);
      while ( __strex(v321 - 1, v320) );
      v321 = (*v320)--;
    if ( v321 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v53);
  v54 = v623 - 12;
  if ( (int *)(v623 - 12) != &dword_28898C0 )
    v322 = (unsigned int *)(v623 - 4);
        v323 = __ldrex(v322);
      while ( __strex(v323 - 1, v322) );
      v323 = (*v322)--;
    if ( v323 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v54);
  if ( v629 )
    (*(void (**)(void))(*(_DWORD *)v629 + 4))();
  v629 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v628);
  v55 = (void *)(v627 - 12);
  if ( (int *)(v627 - 12) != &dword_28898C0 )
    v324 = (unsigned int *)(v627 - 4);
        v325 = __ldrex(v324);
      while ( __strex(v325 - 1, v324) );
      v325 = (*v324)--;
    if ( v325 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v55);
  if ( v632 )
    (*(void (**)(void))(*(_DWORD *)v632 + 4))();
  v632 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v631);
  v56 = (void *)(v630 - 12);
  if ( (int *)(v630 - 12) != &dword_28898C0 )
    v326 = (unsigned int *)(v630 - 4);
        v327 = __ldrex(v326);
      while ( __strex(v327 - 1, v326) );
      v327 = (*v326)--;
    if ( v327 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v56);
  if ( v635 )
    (*(void (**)(void))(*(_DWORD *)v635 + 4))();
  v635 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v634);
  v57 = (void *)(v633 - 12);
  if ( (int *)(v633 - 12) != &dword_28898C0 )
    v328 = (unsigned int *)(v633 - 4);
        v329 = __ldrex(v328);
      while ( __strex(v329 - 1, v328) );
      v329 = (*v328)--;
    if ( v329 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v57);
  sub_119C884((void **)&v618, "geometry.pigzombie");
  GeometryGroup::getGeometry((GeometryPtr *)&v619, (int)v6, (const void **)&v618);
  v58 = (ZombieModel *)operator new(0x10E0u);
  ZombieModel::ZombieModel(v58, (const GeometryPtr *)&v619);
  v620 = v58;
  sub_119C884((void **)&v615, "geometry.humanoid.armor1");
  GeometryGroup::getGeometry((GeometryPtr *)&v616, (int)v6, (const void **)&v615);
  v59 = (ZombieModel *)operator new(0x10E0u);
  ZombieModel::ZombieModel(v59, (const GeometryPtr *)&v616);
  v617 = v59;
  sub_119C884((void **)&v612, "geometry.humanoid.armor2");
  GeometryGroup::getGeometry((GeometryPtr *)&v613, (int)v6, (const void **)&v612);
  v60 = (ZombieModel *)operator new(0x10E0u);
  ZombieModel::ZombieModel(v60, (const GeometryPtr *)&v613);
  v614 = v60;
  sub_119C884((void **)&v609, "geometry.pigzombie.baby");
  GeometryGroup::getGeometry((GeometryPtr *)&v610, (int)v6, (const void **)&v609);
  v61 = (ZombieModel *)operator new(0x10E0u);
  ZombieModel::ZombieModel(v61, (const GeometryPtr *)&v610);
  v611 = v61;
  sub_119C884((void **)&v605, "textures/entity/pig/pigzombie");
  v606 = v605;
  v605 = (char *)&unk_28898CC;
  v607 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v608, v5, (int)&v606, 0);
  v604 = 1056964608;
  std::make_unique<HumanoidMobRenderer,std::unique_ptr<ZombieModel,std::default_delete<ZombieModel>>,std::unique_ptr<ZombieModel,std::default_delete<ZombieModel>>,std::unique_ptr<ZombieModel,std::default_delete<ZombieModel>>,std::unique_ptr<ZombieModel,std::default_delete<ZombieModel>>,mce::TexturePtr,float>(
    &v621,
    (int *)&v620,
    (int *)&v617,
    (int *)&v614,
    (int *)&v611,
    (int)&v608,
    (int)&v604);
  v62 = v621;
  v621 = 0;
  v63 = *((_DWORD *)v7 + 18);
  *((_DWORD *)v7 + 18) = v62;
  if ( v63 )
    (*(void (**)(void))(*(_DWORD *)v63 + 4))();
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v608);
  v64 = v606 - 12;
  if ( (int *)(v606 - 12) != &dword_28898C0 )
    v330 = (unsigned int *)(v606 - 4);
        v331 = __ldrex(v330);
      while ( __strex(v331 - 1, v330) );
      v331 = (*v330)--;
    if ( v331 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v64);
  v65 = v605 - 12;
  if ( (int *)(v605 - 12) != &dword_28898C0 )
    v332 = (unsigned int *)(v605 - 4);
        v333 = __ldrex(v332);
      while ( __strex(v333 - 1, v332) );
      v333 = (*v332)--;
    if ( v333 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v65);
  if ( v611 )
    (*(void (**)(void))(*(_DWORD *)v611 + 4))();
  v611 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v610);
  v66 = (void *)(v609 - 12);
  if ( (int *)(v609 - 12) != &dword_28898C0 )
    v334 = (unsigned int *)(v609 - 4);
        v335 = __ldrex(v334);
      while ( __strex(v335 - 1, v334) );
      v335 = (*v334)--;
    if ( v335 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v66);
  if ( v614 )
    (*(void (**)(void))(*(_DWORD *)v614 + 4))();
  v614 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v613);
  v67 = (void *)(v612 - 12);
  if ( (int *)(v612 - 12) != &dword_28898C0 )
    v336 = (unsigned int *)(v612 - 4);
        v337 = __ldrex(v336);
      while ( __strex(v337 - 1, v336) );
      v337 = (*v336)--;
    if ( v337 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v67);
  if ( v617 )
    (*(void (**)(void))(*(_DWORD *)v617 + 4))();
  v617 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v616);
  v68 = (void *)(v615 - 12);
  if ( (int *)(v615 - 12) != &dword_28898C0 )
    v338 = (unsigned int *)(v615 - 4);
        v339 = __ldrex(v338);
      while ( __strex(v339 - 1, v338) );
      v339 = (*v338)--;
    if ( v339 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v68);
  if ( v620 )
    (*(void (**)(void))(*(_DWORD *)v620 + 4))();
  v620 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v619);
  v69 = (void *)(v618 - 12);
  if ( (int *)(v618 - 12) != &dword_28898C0 )
    v340 = (unsigned int *)(v618 - 4);
        v341 = __ldrex(v340);
      while ( __strex(v341 - 1, v340) );
      v341 = (*v340)--;
    if ( v341 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v69);
  sub_119C884((void **)&v602, "geometry.blaze");
  GeometryGroup::getGeometry((GeometryPtr *)&v603, (int)v6, (const void **)&v602);
  v70 = (BlazeModel *)operator new(0xB74u);
  BlazeModel::BlazeModel(
    v70,
    (const GeometryPtr *)&v603,
    v71,
    v72,
    v448,
    v452,
    v456,
    v460,
    v464,
    v465,
    v466,
    v467,
    (int)v468,
    (int)v469,
    v470,
    v471,
    v472,
    v473);
  v73 = operator new(0x284u);
  v680 = v70;
  BlazeRenderer::BlazeRenderer(v73, v5, (int *)&v680);
  if ( v680 )
    (*(void (**)(void))(*(_DWORD *)v680 + 4))();
  v74 = *((_DWORD *)v7 + 21);
  *((_DWORD *)v7 + 21) = v73;
  if ( v74 )
    (*(void (**)(void))(*(_DWORD *)v74 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v603);
  v75 = (void *)(v602 - 12);
  if ( (int *)(v602 - 12) != &dword_28898C0 )
    v342 = (unsigned int *)(v602 - 4);
        v343 = __ldrex(v342);
      while ( __strex(v343 - 1, v342) );
      v343 = (*v342)--;
    if ( v343 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v75);
  sub_119C884((void **)&v600, "geometry.ghast");
  GeometryGroup::getGeometry((GeometryPtr *)&v601, (int)v6, (const void **)&v600);
  v76 = (GhastModel *)operator new(0x8D4u);
  GhastModel::GhastModel(v76, (const GeometryPtr *)&v601, v77, v78, v449, v453, v457, v461, v464, v465, v466, v467);
  v79 = operator new(0x29Cu);
  v681 = v76;
  GhastRenderer::GhastRenderer((int)v79, v5, (int *)&v681);
  if ( v681 )
    (*(void (**)(void))(*(_DWORD *)v681 + 4))();
  v80 = *((_DWORD *)v7 + 20);
  *((_DWORD *)v7 + 20) = v79;
  if ( v80 )
    (*(void (**)(void))(*(_DWORD *)v80 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v601);
  v81 = (void *)(v600 - 12);
  if ( (int *)(v600 - 12) != &dword_28898C0 )
    v344 = (unsigned int *)(v600 - 4);
        v345 = __ldrex(v344);
      while ( __strex(v345 - 1, v344) );
      v345 = (*v344)--;
    if ( v345 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v81);
  v82 = (CreeperRenderer *)operator new(0x2A0u);
  CreeperRenderer::CreeperRenderer(v82, v5, v6);
  v83 = *((_DWORD *)v7 + 25);
  *((_DWORD *)v7 + 25) = v82;
  if ( v83 )
    (*(void (**)(void))(*(_DWORD *)v83 + 4))();
  sub_119C884((void **)&v598, "geometry.spider");
  GeometryGroup::getGeometry((GeometryPtr *)&v599, (int)v6, (const void **)&v598);
  v84 = (SpiderModel *)operator new(0x9B0u);
  SpiderModel::SpiderModel(v84, (const GeometryPtr *)&v599);
  v85 = operator new(0x29Cu);
  v682 = v84;
  SpiderRenderer::SpiderRenderer((int)v85, (int *)&v682, v5);
  if ( v682 )
    (*(void (**)(void))(*(_DWORD *)v682 + 4))();
  v86 = *((_DWORD *)v7 + 23);
  *((_DWORD *)v7 + 23) = v85;
  if ( v86 )
    (*(void (**)(void))(*(_DWORD *)v86 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v599);
  v87 = (void *)(v598 - 12);
  if ( (int *)(v598 - 12) != &dword_28898C0 )
    v346 = (unsigned int *)(v598 - 4);
        v347 = __ldrex(v346);
      while ( __strex(v347 - 1, v346) );
      v347 = (*v346)--;
    if ( v347 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v87);
  sub_119C884((void **)&v596, "geometry.slime");
  GeometryGroup::getGeometry((GeometryPtr *)&v597, (int)v6, (const void **)&v596);
  v88 = (SlimeModel *)operator new(0x3ACu);
  SlimeModel::SlimeModel(v88, (const GeometryPtr *)&v597);
  sub_119C884((void **)&v594, "geometry.slime.armor");
  GeometryGroup::getGeometry((GeometryPtr *)&v595, (int)v6, (const void **)&v594);
  v89 = (SlimeModel *)operator new(0x3ACu);
  SlimeModel::SlimeModel(v89, (const GeometryPtr *)&v595);
  v90 = operator new(0x294u);
  v684 = v88;
  v683 = v89;
  SlimeRenderer::SlimeRenderer((int)v90, v5, (int *)&v684, (int *)&v683);
  if ( v683 )
    (*(void (**)(void))(*(_DWORD *)v683 + 4))();
  v683 = 0;
  if ( v684 )
    (*(void (**)(void))(*(_DWORD *)v684 + 4))();
  v91 = *((_DWORD *)v7 + 26);
  *((_DWORD *)v7 + 26) = v90;
  if ( v91 )
    (*(void (**)(void))(*(_DWORD *)v91 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v595);
  v92 = (void *)(v594 - 12);
  if ( (int *)(v594 - 12) != &dword_28898C0 )
    v348 = (unsigned int *)(v594 - 4);
        v349 = __ldrex(v348);
      while ( __strex(v349 - 1, v348) );
      v349 = (*v348)--;
    if ( v349 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v92);
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v597);
  v93 = (void *)(v596 - 12);
  if ( (int *)(v596 - 12) != &dword_28898C0 )
    v350 = (unsigned int *)(v596 - 4);
        v351 = __ldrex(v350);
      while ( __strex(v351 - 1, v350) );
      v351 = (*v350)--;
    if ( v351 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v93);
  sub_119C884((void **)&v592, "geometry.lavaslime");
  GeometryGroup::getGeometry((GeometryPtr *)&v593, (int)v6, (const void **)&v592);
  v94 = (LavaSlimeModel *)operator new(0x7F8u);
  LavaSlimeModel::LavaSlimeModel(
    v94,
    (const GeometryPtr *)&v593,
    v95,
    v96,
    v450,
    v454,
    v458,
    v462,
    v467);
  v97 = operator new(0x284u);
  v685 = v94;
  LavaSlimeRenderer::LavaSlimeRenderer(v97, v5, (int *)&v685);
  if ( v685 )
    (*(void (**)(void))(*(_DWORD *)v685 + 4))();
  v98 = *((_DWORD *)v7 + 19);
  *((_DWORD *)v7 + 19) = v97;
  if ( v98 )
    (*(void (**)(void))(*(_DWORD *)v98 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v593);
  v99 = (void *)(v592 - 12);
  if ( (int *)(v592 - 12) != &dword_28898C0 )
    v352 = (unsigned int *)(v592 - 4);
        v353 = __ldrex(v352);
      while ( __strex(v353 - 1, v352) );
      v353 = (*v352)--;
    if ( v353 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v99);
  sub_119C884((void **)&v590, "geometry.enderman");
  GeometryGroup::getGeometry((GeometryPtr *)&v591, (int)v6, (const void **)&v590);
  v100 = (EnderManRenderer *)operator new(0x288u);
  EnderManRenderer::EnderManRenderer(v100, v5, (const GeometryPtr *)&v591, v4);
  v101 = *((_DWORD *)v7 + 27);
  *((_DWORD *)v7 + 27) = v100;
  if ( v101 )
    (*(void (**)(void))(*(_DWORD *)v101 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v591);
  v102 = (void *)(v590 - 12);
  if ( (int *)(v590 - 12) != &dword_28898C0 )
    v354 = (unsigned int *)(v590 - 4);
        v355 = __ldrex(v354);
      while ( __strex(v355 - 1, v354) );
      v355 = (*v354)--;
    if ( v355 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v102);
  sub_119C884((void **)&v588, "geometry.wolf");
  GeometryGroup::getGeometry((GeometryPtr *)&v589, (int)v6, (const void **)&v588);
  v103 = (WolfRenderer *)operator new(0x2B4u);
  WolfRenderer::WolfRenderer(v103, v5, (const GeometryPtr *)&v589);
  v104 = *((_DWORD *)v7 + 12);
  *((_DWORD *)v7 + 12) = v103;
  if ( v104 )
    (*(void (**)(void))(*(_DWORD *)v104 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v589);
  v105 = (void *)(v588 - 12);
  if ( (int *)(v588 - 12) != &dword_28898C0 )
    v356 = (unsigned int *)(v588 - 4);
        v357 = __ldrex(v356);
      while ( __strex(v357 - 1, v356) );
      v357 = (*v356)--;
    if ( v357 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v105);
  sub_119C884((void **)&v586, "geometry.polarbear");
  GeometryGroup::getGeometry((GeometryPtr *)&v587, (int)v6, (const void **)&v586);
  v106 = (PolarBearModel *)operator new(0x650u);
  PolarBearModel::PolarBearModel(v106, (const GeometryPtr *)&v587);
  v107 = operator new(0x284u);
  v686 = v106;
  PolarBearRenderer::PolarBearRenderer(v107, v5, (int *)&v686);
  if ( v686 )
    (*(void (**)(void))(*(_DWORD *)v686 + 4))();
  v108 = *((_DWORD *)v7 + 14);
  *((_DWORD *)v7 + 14) = v107;
  if ( v108 )
    (*(void (**)(void))(*(_DWORD *)v108 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v587);
  v109 = (void *)(v586 - 12);
  if ( (int *)(v586 - 12) != &dword_28898C0 )
    v358 = (unsigned int *)(v586 - 4);
        v359 = __ldrex(v358);
      while ( __strex(v359 - 1, v358) );
      v359 = (*v358)--;
    if ( v359 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v109);
  sub_119C884((void **)&v584, "geometry.ocelot");
  GeometryGroup::getGeometry((GeometryPtr *)&v585, (int)v6, (const void **)&v584);
  v110 = (OcelotRenderer *)operator new(0x290u);
  OcelotRenderer::OcelotRenderer(v110, v5, (const GeometryPtr *)&v585);
  v111 = *((_DWORD *)v7 + 50);
  *((_DWORD *)v7 + 50) = v110;
  if ( v111 )
    (*(void (**)(void))(*(_DWORD *)v111 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v585);
  v112 = (void *)(v584 - 12);
  if ( (int *)(v584 - 12) != &dword_28898C0 )
    v360 = (unsigned int *)(v584 - 4);
        v361 = __ldrex(v360);
      while ( __strex(v361 - 1, v360) );
      v361 = (*v360)--;
    if ( v361 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v112);
  sub_119C884((void **)&v582, "geometry.bat");
  GeometryGroup::getGeometry((GeometryPtr *)&v583, (int)v6, (const void **)&v582);
  v113 = (BatRenderer *)operator new(0x284u);
  BatRenderer::BatRenderer(v113, v5, (const GeometryPtr *)&v583);
  v114 = *((_DWORD *)v7 + 11);
  *((_DWORD *)v7 + 11) = v113;
  if ( v114 )
    (*(void (**)(void))(*(_DWORD *)v114 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v583);
  v115 = (void *)(v582 - 12);
  if ( (int *)(v582 - 12) != &dword_28898C0 )
    v362 = (unsigned int *)(v582 - 4);
        v363 = __ldrex(v362);
      while ( __strex(v363 - 1, v362) );
      v363 = (*v362)--;
    if ( v363 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v115);
  v116 = (TntRenderer *)operator new(0x8Cu);
  TntRenderer::TntRenderer(v116, v5, v4);
  v117 = *((_DWORD *)v7 + 3);
  *((_DWORD *)v7 + 3) = v116;
  if ( v117 )
    (*(void (**)(void))(*(_DWORD *)v117 + 4))();
  v118 = (ArrowRenderer *)operator new(0x10Cu);
  ArrowRenderer::ArrowRenderer(v118, v5);
  v119 = *((_DWORD *)v7 + 28);
  *((_DWORD *)v7 + 28) = v118;
  if ( v119 )
    (*(void (**)(void))(*(_DWORD *)v119 + 4))();
  v120 = (ShulkerBulletModel *)operator new(0x118u);
  ShulkerBulletModel::ShulkerBulletModel(v120);
  v121 = (BaseEntityRenderer *)operator new(0xA4u);
  v687 = v120;
  ShulkerBulletRenderer::ShulkerBulletRenderer(v121, v5, (int *)&v687);
  if ( v687 )
    (*(void (**)(void))(*(_DWORD *)v687 + 4))();
  v122 = *((_DWORD *)v7 + 29);
  *((_DWORD *)v7 + 29) = v121;
  if ( v122 )
    (*(void (**)(void))(*(_DWORD *)v122 + 4))();
  v123 = (FishHookRenderer *)operator new(0x170u);
  FishHookRenderer::FishHookRenderer(v123, v5);
  v124 = *((_DWORD *)v7 + 30);
  *((_DWORD *)v7 + 30) = v123;
  if ( v124 )
    (*(void (**)(void))(*(_DWORD *)v124 + 4))();
  v125 = (ItemSpriteRenderer *)operator new(0xFCu);
  ItemSpriteRenderer::ItemSpriteRenderer(v125, v5, (Item *)Item::mEgg, 0);
  v126 = *((_DWORD *)v7 + 32);
  *((_DWORD *)v7 + 32) = v125;
  if ( v126 )
    (*(void (**)(void))(*(_DWORD *)v126 + 4))();
  v127 = (ItemSpriteRenderer *)operator new(0xFCu);
  ItemSpriteRenderer::ItemSpriteRenderer(v127, v5, (Item *)Item::mSnowBall, 0);
  v128 = *((_DWORD *)v7 + 33);
  *((_DWORD *)v7 + 33) = v127;
  if ( v128 )
    (*(void (**)(void))(*(_DWORD *)v128 + 4))();
  v129 = (ItemSpriteRenderer *)operator new(0xFCu);
  ItemSpriteRenderer::ItemSpriteRenderer(v129, v5, (Item *)Item::mEnderpearl, 0);
  v130 = *((_DWORD *)v7 + 34);
  *((_DWORD *)v7 + 34) = v129;
  if ( v130 )
    (*(void (**)(void))(*(_DWORD *)v130 + 4))();
  v131 = (ThrownPotionRenderer *)operator new(0xB24u);
  ThrownPotionRenderer::ThrownPotionRenderer(v131, v5, (Item *)Item::mSplash_potion);
  v132 = *((_DWORD *)v7 + 35);
  *((_DWORD *)v7 + 35) = v131;
  if ( v132 )
    (*(void (**)(void))(*(_DWORD *)v132 + 4))();
  v133 = (ThrownPotionRenderer *)operator new(0xB24u);
  ThrownPotionRenderer::ThrownPotionRenderer(v133, v5, (Item *)Item::mLingering_potion);
  v134 = *((_DWORD *)v7 + 36);
  *((_DWORD *)v7 + 36) = v133;
  if ( v134 )
    (*(void (**)(void))(*(_DWORD *)v134 + 4))();
  v135 = (PaintingRenderer *)operator new(0xC4u);
  PaintingRenderer::PaintingRenderer(v135, v5);
  v136 = *((_DWORD *)v7 + 37);
  *((_DWORD *)v7 + 37) = v135;
  if ( v136 )
    (*(void (**)(void))(*(_DWORD *)v136 + 4))();
  v137 = (FallingBlockRenderer *)operator new(0x98u);
  FallingBlockRenderer::FallingBlockRenderer(v137, v5, v4);
  v138 = *((_DWORD *)v7 + 38);
  *((_DWORD *)v7 + 38) = v137;
  if ( v138 )
    (*(void (**)(void))(*(_DWORD *)v138 + 4))();
  v139 = (MinecartRenderer *)operator new(0x52Cu);
  MinecartRenderer::MinecartRenderer(v139, v5, v4);
  v140 = *((_DWORD *)v7 + 39);
  *((_DWORD *)v7 + 39) = v139;
  if ( v140 )
    (*(void (**)(void))(*(_DWORD *)v140 + 4))();
  v141 = (BoatRenderer *)operator new(0x7D0u);
  BoatRenderer::BoatRenderer(v141, v5);
  v142 = *((_DWORD *)v7 + 40);
  *((_DWORD *)v7 + 40) = v141;
  if ( v142 )
    (*(void (**)(void))(*(_DWORD *)v142 + 4))();
  sub_119C884((void **)&v580, "geometry.villager");
  GeometryGroup::getGeometry((GeometryPtr *)&v581, (int)v6, (const void **)&v580);
  v143 = (VillagerRenderer *)operator new(0x290u);
  VillagerRenderer::VillagerRenderer(v143, v5, (const GeometryPtr *)&v581);
  v144 = *((_DWORD *)v7 + 15);
  *((_DWORD *)v7 + 15) = v143;
  if ( v144 )
    (*(void (**)(void))(*(_DWORD *)v144 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v581);
  v145 = (void *)(v580 - 12);
  if ( (int *)(v580 - 12) != &dword_28898C0 )
    v364 = (unsigned int *)(v580 - 4);
        v365 = __ldrex(v364);
      while ( __strex(v365 - 1, v364) );
      v365 = (*v364)--;
    if ( v365 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v145);
  sub_119C884((void **)&v578, "geometry.guardian");
  GeometryGroup::getGeometry((GeometryPtr *)&v579, (int)v6, (const void **)&v578);
  v146 = (GuardianRenderer *)operator new(0x468u);
  GuardianRenderer::GuardianRenderer(v146, v5, (const GeometryPtr *)&v579);
  v147 = *((_DWORD *)v7 + 63);
  *((_DWORD *)v7 + 63) = v146;
  if ( v147 )
    (*(void (**)(void))(*(_DWORD *)v147 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v579);
  v148 = (void *)(v578 - 12);
  if ( (int *)(v578 - 12) != &dword_28898C0 )
    v366 = (unsigned int *)(v578 - 4);
        v367 = __ldrex(v366);
      while ( __strex(v367 - 1, v366) );
      v367 = (*v366)--;
    if ( v367 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v148);
  sub_119C884((void **)&v576, "geometry.silverfish");
  GeometryGroup::getGeometry((GeometryPtr *)&v577, (int)v6, (const void **)&v576);
  v149 = (SilverfishModel *)operator new(0x924u);
  SilverfishModel::SilverfishModel(
    v149,
    (const GeometryPtr *)&v577,
    v150,
    v151,
    v451,
    v455,
    v459,
    v463,
    v471);
  v152 = operator new(0x284u);
  v688 = v149;
  SilverfishRenderer::SilverfishRenderer(v152, v5, (int *)&v688);
  if ( v688 )
    (*(void (**)(void))(*(_DWORD *)v688 + 4))();
  v153 = *((_DWORD *)v7 + 24);
  *((_DWORD *)v7 + 24) = v152;
  if ( v153 )
    (*(void (**)(void))(*(_DWORD *)v153 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v577);
  v154 = (void *)(v576 - 12);
  if ( (int *)(v576 - 12) != &dword_28898C0 )
    v368 = (unsigned int *)(v576 - 4);
        v369 = __ldrex(v368);
      while ( __strex(v369 - 1, v368) );
      v369 = (*v368)--;
    if ( v369 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v154);
  sub_119C884((void **)&v574, "geometry.squid");
  GeometryGroup::getGeometry((GeometryPtr *)&v575, (int)v6, (const void **)&v574);
  v155 = (SquidRenderer *)operator new(0x284u);
  SquidRenderer::SquidRenderer(v155, v5, (const GeometryPtr *)&v575, 0.0);
  v156 = *((_DWORD *)v7 + 41);
  *((_DWORD *)v7 + 41) = v155;
  if ( v156 )
    (*(void (**)(void))(*(_DWORD *)v156 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v575);
  v157 = (void *)(v574 - 12);
  if ( (int *)(v574 - 12) != &dword_28898C0 )
    v370 = (unsigned int *)(v574 - 4);
        v371 = __ldrex(v370);
      while ( __strex(v371 - 1, v370) );
      v371 = (*v370)--;
    if ( v371 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v157);
  v572 = 0x40000000;
  std::make_unique<FireballRenderer,mce::TextureGroup &,float,char const(&)[24]>(
    (BaseEntityRenderer **)&v573,
    v5,
    (int)&v572,
    "textures/items/fireball");
  v158 = v573;
  v573 = 0;
  v159 = *((_DWORD *)v7 + 42);
  *((_DWORD *)v7 + 42) = v158;
  if ( v159 )
    (*(void (**)(void))(*(_DWORD *)v159 + 4))();
  v570 = 1056964608;
    (BaseEntityRenderer **)&v571,
    (int)&v570,
  v160 = v571;
  v571 = 0;
  v161 = *((_DWORD *)v7 + 43);
  *((_DWORD *)v7 + 43) = v160;
  if ( v161 )
    (*(void (**)(void))(*(_DWORD *)v161 + 4))();
  v568 = 0x40000000;
  std::make_unique<FireballRenderer,mce::TextureGroup &,float,char const(&)[31]>(
    (BaseEntityRenderer **)&v569,
    (int)&v568,
    "textures/items/dragon_fireball");
  v162 = v569;
  v569 = 0;
  v163 = *((_DWORD *)v7 + 44);
  *((_DWORD *)v7 + 44) = v162;
  if ( v163 )
    (*(void (**)(void))(*(_DWORD *)v163 + 4))();
  sub_119C884((void **)&v566, "geometry.llamaspit");
  GeometryGroup::getGeometry((GeometryPtr *)&v567, (int)v6, (const void **)&v566);
  v164 = (LlamaSpitModel *)operator new(0x118u);
  LlamaSpitModel::LlamaSpitModel(v164, (const GeometryPtr *)&v567);
  v165 = (BaseEntityRenderer *)operator new(0xA4u);
  v689 = v164;
  LlamaSpitRenderer::LlamaSpitRenderer(v165, (int *)&v689, v5);
  if ( v689 )
    (*(void (**)(void))(*(_DWORD *)v689 + 4))();
  v166 = *((_DWORD *)v7 + 45);
  *((_DWORD *)v7 + 45) = v165;
  if ( v166 )
    (*(void (**)(void))(*(_DWORD *)v166 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v567);
  v167 = (void *)(v566 - 12);
  if ( (int *)(v566 - 12) != &dword_28898C0 )
    v372 = (unsigned int *)(v566 - 4);
        v373 = __ldrex(v372);
      while ( __strex(v373 - 1, v372) );
      v373 = (*v372)--;
    if ( v373 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v167);
  sub_119C884((void **)&v564, "geometry.zombie.villager");
  GeometryGroup::getGeometry((GeometryPtr *)&v565, (int)v6, (const void **)&v564);
  sub_119C884((void **)&v562, "geometry.zombie.villager");
  GeometryGroup::getGeometry((GeometryPtr *)&v563, (int)v6, (const void **)&v562);
  sub_119C884((void **)&v560, "geometry.zombie.villager");
  GeometryGroup::getGeometry((GeometryPtr *)&v561, (int)v6, (const void **)&v560);
  v168 = (VillagerZombieRenderer *)operator new(0x2ACu);
  VillagerZombieRenderer::VillagerZombieRenderer(
    v168,
    (const GeometryPtr *)&v565,
    (const GeometryPtr *)&v563,
    (const GeometryPtr *)&v561,
    0.5);
  v169 = *((_DWORD *)v7 + 46);
  *((_DWORD *)v7 + 46) = v168;
  if ( v169 )
    (*(void (**)(void))(*(_DWORD *)v169 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v561);
  v170 = (void *)(v560 - 12);
  if ( (int *)(v560 - 12) != &dword_28898C0 )
    v374 = (unsigned int *)(v560 - 4);
        v375 = __ldrex(v374);
      while ( __strex(v375 - 1, v374) );
      v375 = (*v374)--;
    if ( v375 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v170);
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v563);
  v171 = (void *)(v562 - 12);
  if ( (int *)(v562 - 12) != &dword_28898C0 )
    v376 = (unsigned int *)(v562 - 4);
        v377 = __ldrex(v376);
      while ( __strex(v377 - 1, v376) );
      v377 = (*v376)--;
    if ( v377 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v171);
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v565);
  v172 = (void *)(v564 - 12);
  if ( (int *)(v564 - 12) != &dword_28898C0 )
    v378 = (unsigned int *)(v564 - 4);
        v379 = __ldrex(v378);
      while ( __strex(v379 - 1, v378) );
      v379 = (*v378)--;
    if ( v379 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v172);
  v173 = (ExperienceOrbRenderer *)operator new(0xACu);
  ExperienceOrbRenderer::ExperienceOrbRenderer(v173, v5, 0.3);
  v174 = *((_DWORD *)v7 + 47);
  *((_DWORD *)v7 + 47) = v173;
  if ( v174 )
    (*(void (**)(void))(*(_DWORD *)v174 + 4))();
  v175 = (LightningBoltRenderer *)operator new(0x94u);
  LightningBoltRenderer::LightningBoltRenderer(v175, v5);
  v176 = *((_DWORD *)v7 + 48);
  *((_DWORD *)v7 + 48) = v175;
  if ( v176 )
    (*(void (**)(void))(*(_DWORD *)v176 + 4))();
  sub_119C884((void **)&v558, "geometry.irongolem");
  GeometryGroup::getGeometry((GeometryPtr *)&v559, (int)v6, (const void **)&v558);
  v177 = (IronGolemRenderer *)operator new(0x288u);
  IronGolemRenderer::IronGolemRenderer(v177, v5, (const GeometryPtr *)&v559, v4);
  v178 = *((_DWORD *)v7 + 49);
  *((_DWORD *)v7 + 49) = v177;
  if ( v178 )
    (*(void (**)(void))(*(_DWORD *)v178 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v559);
  v179 = (void *)(v558 - 12);
  if ( (int *)(v558 - 12) != &dword_28898C0 )
    v380 = (unsigned int *)(v558 - 4);
        v381 = __ldrex(v380);
      while ( __strex(v381 - 1, v380) );
      v381 = (*v380)--;
    if ( v381 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v179);
  sub_119C884((void **)&v556, "geometry.snowgolem");
  GeometryGroup::getGeometry((GeometryPtr *)&v557, (int)v6, (const void **)&v556);
  v180 = (SnowGolemRenderer *)operator new(0x2F4u);
  SnowGolemRenderer::SnowGolemRenderer(v180, v5, (const GeometryPtr *)&v557, v4);
  v181 = *((_DWORD *)v7 + 51);
  *((_DWORD *)v7 + 51) = v180;
  if ( v181 )
    (*(void (**)(void))(*(_DWORD *)v181 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v557);
  v182 = (void *)(v556 - 12);
  if ( (int *)(v556 - 12) != &dword_28898C0 )
    v382 = (unsigned int *)(v556 - 4);
        v383 = __ldrex(v382);
      while ( __strex(v383 - 1, v382) );
      v383 = (*v382)--;
    if ( v383 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v182);
  sub_119C884((void **)&v554, "geometry.shulker");
  GeometryGroup::getGeometry((GeometryPtr *)&v555, (int)v6, (const void **)&v554);
  v183 = (ShulkerRenderer *)operator new(0x41Cu);
  ShulkerRenderer::ShulkerRenderer(v183, v5, (const GeometryPtr *)&v555, v4);
  v184 = *((_DWORD *)v7 + 52);
  *((_DWORD *)v7 + 52) = v183;
  if ( v184 )
    (*(void (**)(void))(*(_DWORD *)v184 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v555);
  v185 = (void *)(v554 - 12);
  if ( (int *)(v554 - 12) != &dword_28898C0 )
    v384 = (unsigned int *)(v554 - 4);
        v385 = __ldrex(v384);
      while ( __strex(v385 - 1, v384) );
      v385 = (*v384)--;
    if ( v385 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v185);
  v186 = (ItemSpriteRenderer *)operator new(0xFCu);
  ItemSpriteRenderer::ItemSpriteRenderer(v186, v5, (Item *)Item::mExperiencePotionItem, 1);
  v187 = *((_DWORD *)v7 + 53);
  *((_DWORD *)v7 + 53) = v186;
  if ( v187 )
    (*(void (**)(void))(*(_DWORD *)v187 + 4))();
  sub_119C884((void **)&v552, "geometry.horse");
  GeometryGroup::getGeometry((GeometryPtr *)&v553, (int)v6, (const void **)&v552);
  v188 = (HorseModel *)operator new(0x21E4u);
  HorseModel::HorseModel(v188, (const GeometryPtr *)&v553);
  v189 = operator new(0x494u);
  v690 = v188;
  HorseRenderer::HorseRenderer((int)v189, (int *)&v690, v5);
  if ( v690 )
    (*(void (**)(void))(*(_DWORD *)v690 + 4))();
  v190 = *((_DWORD *)v7 + 56);
  *((_DWORD *)v7 + 56) = v189;
  if ( v190 )
    (*(void (**)(void))(*(_DWORD *)v190 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v553);
  v191 = (void *)(v552 - 12);
  if ( (int *)(v552 - 12) != &dword_28898C0 )
    v386 = (unsigned int *)(v552 - 4);
        v387 = __ldrex(v386);
      while ( __strex(v387 - 1, v386) );
      v387 = (*v386)--;
    if ( v387 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v191);
  sub_119C884((void **)&v550, "geometry.llama");
  GeometryGroup::getGeometry((GeometryPtr *)&v551, (int)v6, (const void **)&v550);
  v192 = (LlamaModel *)operator new(0x800u);
  LlamaModel::LlamaModel(v192, (const GeometryPtr *)&v551);
  v193 = operator new(0x47Cu);
  v691 = v192;
  LlamaRenderer::LlamaRenderer((int)v193, v5, (int *)&v691);
  if ( v691 )
    (*(void (**)(void))(*(_DWORD *)v691 + 4))();
  v194 = *((_DWORD *)v7 + 57);
  *((_DWORD *)v7 + 57) = v193;
  if ( v194 )
    (*(void (**)(void))(*(_DWORD *)v194 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v551);
  v195 = (void *)(v550 - 12);
  if ( (int *)(v550 - 12) != &dword_28898C0 )
    v388 = (unsigned int *)(v550 - 4);
        v389 = __ldrex(v388);
      while ( __strex(v389 - 1, v388) );
      v389 = (*v388)--;
    if ( v389 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v195);
  sub_119C884((void **)&v548, "geometry.rabbit");
  GeometryGroup::getGeometry((GeometryPtr *)&v549, (int)v6, (const void **)&v548);
  v196 = (RabbitModel *)operator new(0xA90u);
  RabbitModel::RabbitModel(v196, (const GeometryPtr *)&v549);
  v197 = operator new(0x32Cu);
  v692 = v196;
  RabbitRenderer::RabbitRenderer((int)v197, (int *)&v692, v5);
  if ( v692 )
    (*(void (**)(void))(*(_DWORD *)v692 + 4))();
  v198 = *((_DWORD *)v7 + 54);
  *((_DWORD *)v7 + 54) = v197;
  if ( v198 )
    (*(void (**)(void))(*(_DWORD *)v198 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v549);
  v199 = (void *)(v548 - 12);
  if ( (int *)(v548 - 12) != &dword_28898C0 )
    v390 = (unsigned int *)(v548 - 4);
        v391 = __ldrex(v390);
      while ( __strex(v391 - 1, v390) );
      v391 = (*v390)--;
    if ( v391 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v199);
  sub_119C884((void **)&v544, "geometry.villager.witch");
  GeometryGroup::getGeometry((GeometryPtr *)&v545, (int)v6, (const void **)&v544);
  v200 = (WitchModel *)operator new(0x8E4u);
  WitchModel::WitchModel(v200, (const GeometryPtr *)&v545);
  v546 = v200;
  sub_119C884((void **)&v540, "textures/entity/witch");
  v541 = v540;
  v540 = (char *)&unk_28898CC;
  v542 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v543, v5, (int)&v541, 0);
  std::make_unique<WitchRenderer,std::unique_ptr<WitchModel,std::default_delete<WitchModel>>,mce::TexturePtr>(
    &v547,
    (int *)&v546,
    (int)&v543);
  v201 = v547;
  v547 = 0;
  v202 = *((_DWORD *)v7 + 55);
  *((_DWORD *)v7 + 55) = v201;
  if ( v202 )
    (*(void (**)(void))(*(_DWORD *)v202 + 4))();
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v543);
  v203 = v541 - 12;
  if ( (int *)(v541 - 12) != &dword_28898C0 )
    v392 = (unsigned int *)(v541 - 4);
        v393 = __ldrex(v392);
      while ( __strex(v393 - 1, v392) );
      v393 = (*v392)--;
    if ( v393 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v203);
  v204 = v540 - 12;
  if ( (int *)(v540 - 12) != &dword_28898C0 )
    v394 = (unsigned int *)(v540 - 4);
        v395 = __ldrex(v394);
      while ( __strex(v395 - 1, v394) );
      v395 = (*v394)--;
    if ( v395 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v204);
  if ( v546 )
    (*(void (**)(void))(*(_DWORD *)v546 + 4))();
  v546 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v545);
  v205 = (void *)(v544 - 12);
  if ( (int *)(v544 - 12) != &dword_28898C0 )
    v396 = (unsigned int *)(v544 - 4);
        v397 = __ldrex(v396);
      while ( __strex(v397 - 1, v396) );
      v397 = (*v396)--;
    if ( v397 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v205);
  sub_119C884((void **)&v538, "geometry.guardian");
  GeometryGroup::getGeometry((GeometryPtr *)&v539, (int)v6, (const void **)&v538);
  v206 = (GuardianRenderer *)operator new(0x468u);
  GuardianRenderer::GuardianRenderer(v206, v5, (const GeometryPtr *)&v539);
  v207 = *((_DWORD *)v7 + 63);
  *((_DWORD *)v7 + 63) = v206;
  if ( v207 )
    (*(void (**)(void))(*(_DWORD *)v207 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v539);
  v208 = (void *)(v538 - 12);
  if ( (int *)(v538 - 12) != &dword_28898C0 )
    v398 = (unsigned int *)(v538 - 4);
        v399 = __ldrex(v398);
      while ( __strex(v399 - 1, v398) );
      v399 = (*v398)--;
    if ( v399 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v208);
  sub_119C884((void **)&v536, "geometry.dragon");
  GeometryGroup::getGeometry((GeometryPtr *)&v537, (int)v6, (const void **)&v536);
  v209 = (EnderDragonRenderer *)operator new(0x2E4u);
  EnderDragonRenderer::EnderDragonRenderer(v209, v5, (const GeometryPtr *)&v537);
  v210 = *((_DWORD *)v7 + 13);
  *((_DWORD *)v7 + 13) = v209;
  if ( v210 )
    (*(void (**)(void))(*(_DWORD *)v210 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v537);
  v211 = (void *)(v536 - 12);
  if ( (int *)(v536 - 12) != &dword_28898C0 )
    v400 = (unsigned int *)(v536 - 4);
        v401 = __ldrex(v400);
      while ( __strex(v401 - 1, v400) );
      v401 = (*v400)--;
    if ( v401 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v211);
  v212 = (TripodCameraRenderer *)operator new(0x284u);
  TripodCameraRenderer::TripodCameraRenderer(v212, v5);
  v213 = *((_DWORD *)v7 + 58);
  *((_DWORD *)v7 + 58) = v212;
  if ( v213 )
    (*(void (**)(void))(*(_DWORD *)v213 + 4))();
  v214 = (MapRenderer *)operator new(0x874u);
  MapRenderer::MapRenderer(v214, *((_BYTE *)v7 + 328), v5);
  v215 = *((_DWORD *)v7 + 60);
  *((_DWORD *)v7 + 60) = v214;
  if ( v215 )
    (*(void (**)(void))(*(_DWORD *)v215 + 4))();
  v216 = (WitherBossRenderer *)operator new(0x2D0u);
  WitherBossRenderer::WitherBossRenderer(v216, v5, v6);
  v217 = *((_DWORD *)v7 + 66);
  *((_DWORD *)v7 + 66) = v216;
  if ( v217 )
    (*(void (**)(void))(*(_DWORD *)v217 + 4))();
  v218 = (WitherSkullRenderer *)operator new(0x1D0u);
  WitherSkullRenderer::WitherSkullRenderer(v218, v5);
  v219 = *((_DWORD *)v7 + 67);
  *((_DWORD *)v7 + 67) = v218;
  if ( v219 )
    (*(void (**)(void))(*(_DWORD *)v219 + 4))();
  v220 = (LeashKnotModel *)operator new(0x118u);
  LeashKnotModel::LeashKnotModel(v220);
  v221 = (BaseEntityRenderer *)operator new(0xA4u);
  v693 = v220;
  LeashKnotRenderer::LeashKnotRenderer(v221, v5, (int *)&v693);
  if ( v693 )
    (*(void (**)(void))(*(_DWORD *)v693 + 4))();
  v222 = *((_DWORD *)v7 + 61);
  *((_DWORD *)v7 + 61) = v221;
  if ( v222 )
    (*(void (**)(void))(*(_DWORD *)v222 + 4))();
  v223 = (EmptyRenderer *)operator new(0x88u);
  EmptyRenderer::EmptyRenderer(v223, v5);
  v224 = *((_DWORD *)v7 + 62);
  *((_DWORD *)v7 + 62) = v223;
  if ( v224 )
    (*(void (**)(void))(*(_DWORD *)v224 + 4))();
  sub_119C884((void **)&v532, "geometry.zombie.husk");
  GeometryGroup::getGeometry((GeometryPtr *)&v533, (int)v6, (const void **)&v532);
  v225 = (HuskModel *)operator new(0x138Cu);
  HuskModel::HuskModel(v225, (const GeometryPtr *)&v533);
  v534 = v225;
  sub_119C884((void **)&v529, "geometry.humanoid.armor1");
  GeometryGroup::getGeometry((GeometryPtr *)&v530, (int)v6, (const void **)&v529);
  v226 = (ZombieModel *)operator new(0x10E0u);
  ZombieModel::ZombieModel(v226, (const GeometryPtr *)&v530);
  v531 = v226;
  sub_119C884((void **)&v526, "geometry.humanoid.armor2");
  GeometryGroup::getGeometry((GeometryPtr *)&v527, (int)v6, (const void **)&v526);
  v227 = (ZombieModel *)operator new(0x10E0u);
  ZombieModel::ZombieModel(v227, (const GeometryPtr *)&v527);
  v528 = v227;
  sub_119C884((void **)&v522, "textures/entity/zombie/husk");
  v523 = v522;
  v522 = (char *)&unk_28898CC;
  v524 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v525, v5, (int)&v523, 0);
  v521 = 1056964608;
  std::make_unique<HumanoidMobRenderer,std::unique_ptr<HuskModel,std::default_delete<HuskModel>>,std::unique_ptr<ZombieModel,std::default_delete<ZombieModel>>,std::unique_ptr<ZombieModel,std::default_delete<ZombieModel>>,mce::TexturePtr,float>(
    &v535,
    (int *)&v534,
    (int *)&v531,
    (int *)&v528,
    (int)&v525,
    (int)&v521);
  v228 = v535;
  v535 = 0;
  v229 = *((_DWORD *)v7 + 69);
  *((_DWORD *)v7 + 69) = v228;
  if ( v229 )
    (*(void (**)(void))(*(_DWORD *)v229 + 4))();
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v525);
  v230 = v523 - 12;
  if ( (int *)(v523 - 12) != &dword_28898C0 )
    v402 = (unsigned int *)(v523 - 4);
        v403 = __ldrex(v402);
      while ( __strex(v403 - 1, v402) );
      v403 = (*v402)--;
    if ( v403 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v230);
  v231 = v522 - 12;
  if ( (int *)(v522 - 12) != &dword_28898C0 )
    v404 = (unsigned int *)(v522 - 4);
        v405 = __ldrex(v404);
      while ( __strex(v405 - 1, v404) );
      v405 = (*v404)--;
    if ( v405 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v231);
  if ( v528 )
    (*(void (**)(void))(*(_DWORD *)v528 + 4))();
  v528 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v527);
  v232 = (void *)(v526 - 12);
  if ( (int *)(v526 - 12) != &dword_28898C0 )
    v406 = (unsigned int *)(v526 - 4);
        v407 = __ldrex(v406);
      while ( __strex(v407 - 1, v406) );
      v407 = (*v406)--;
    if ( v407 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v232);
  if ( v531 )
    (*(void (**)(void))(*(_DWORD *)v531 + 4))();
  v531 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v530);
  v233 = (void *)(v529 - 12);
  if ( (int *)(v529 - 12) != &dword_28898C0 )
    v408 = (unsigned int *)(v529 - 4);
        v409 = __ldrex(v408);
      while ( __strex(v409 - 1, v408) );
      v409 = (*v408)--;
    if ( v409 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v233);
  if ( v534 )
    (*(void (**)(void))(*(_DWORD *)v534 + 4))();
  v534 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v533);
  v234 = (void *)(v532 - 12);
  if ( (int *)(v532 - 12) != &dword_28898C0 )
    v410 = (unsigned int *)(v532 - 4);
        v411 = __ldrex(v410);
      while ( __strex(v411 - 1, v410) );
      v411 = (*v410)--;
    if ( v411 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v234);
  sub_119C884((void **)&v517, "geometry.skeleton.stray");
  GeometryGroup::getGeometry((GeometryPtr *)&v518, (int)v6, (const void **)&v517);
  v235 = (StrayModel *)operator new(0x10F8u);
  StrayModel::StrayModel(v235, (const GeometryPtr *)&v518, 0, 0);
  v519 = v235;
  sub_119C884((void **)&v514, "geometry.humanoid.armor1");
  GeometryGroup::getGeometry((GeometryPtr *)&v515, (int)v6, (const void **)&v514);
  v236 = (StrayModel *)operator new(0x10F8u);
  StrayModel::StrayModel(v236, (const GeometryPtr *)&v515, 1, 0);
  v516 = v236;
  sub_119C884((void **)&v511, "geometry.humanoid.armor2");
  GeometryGroup::getGeometry((GeometryPtr *)&v512, (int)v6, (const void **)&v511);
  v237 = (StrayModel *)operator new(0x10F8u);
  StrayModel::StrayModel(v237, (const GeometryPtr *)&v512, 1, 0);
  v513 = v237;
  sub_119C884((void **)&v508, "geometry.stray.armor");
  GeometryGroup::getGeometry((GeometryPtr *)&v509, (int)v6, (const void **)&v508);
  v238 = (StrayModel *)operator new(0x10F8u);
  StrayModel::StrayModel(v238, (const GeometryPtr *)&v509, 0, 1);
  v510 = v238;
  v507 = 1056964608;
  std::make_unique<StrayRenderer,mce::TextureGroup &,std::unique_ptr<StrayModel,std::default_delete<StrayModel>>,std::unique_ptr<StrayModel,std::default_delete<StrayModel>>,std::unique_ptr<StrayModel,std::default_delete<StrayModel>>,std::unique_ptr<StrayModel,std::default_delete<StrayModel>>,float>(
    &v520,
    (int)v5,
    (int *)&v519,
    (int *)&v516,
    (int *)&v513,
    (int *)&v510,
    (int)&v507);
  v239 = v520;
  v520 = 0;
  v240 = *((_DWORD *)v7 + 70);
  *((_DWORD *)v7 + 70) = v239;
  if ( v240 )
    (*(void (**)(void))(*(_DWORD *)v240 + 4))();
  if ( v510 )
    (*(void (**)(void))(*(_DWORD *)v510 + 4))();
  v510 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v509);
  v241 = (void *)(v508 - 12);
  if ( (int *)(v508 - 12) != &dword_28898C0 )
    v412 = (unsigned int *)(v508 - 4);
        v413 = __ldrex(v412);
      while ( __strex(v413 - 1, v412) );
      v413 = (*v412)--;
    if ( v413 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v241);
  if ( v513 )
    (*(void (**)(void))(*(_DWORD *)v513 + 4))();
  v513 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v512);
  v242 = (void *)(v511 - 12);
  if ( (int *)(v511 - 12) != &dword_28898C0 )
    v414 = (unsigned int *)(v511 - 4);
        v415 = __ldrex(v414);
      while ( __strex(v415 - 1, v414) );
      v415 = (*v414)--;
    if ( v415 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v242);
  if ( v516 )
    (*(void (**)(void))(*(_DWORD *)v516 + 4))();
  v516 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v515);
  v243 = (void *)(v514 - 12);
  if ( (int *)(v514 - 12) != &dword_28898C0 )
    v416 = (unsigned int *)(v514 - 4);
        v417 = __ldrex(v416);
      while ( __strex(v417 - 1, v416) );
      v417 = (*v416)--;
    if ( v417 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v243);
  if ( v519 )
    (*(void (**)(void))(*(_DWORD *)v519 + 4))();
  v519 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v518);
  v244 = (void *)(v517 - 12);
  if ( (int *)(v517 - 12) != &dword_28898C0 )
    v418 = (unsigned int *)(v517 - 4);
        v419 = __ldrex(v418);
      while ( __strex(v419 - 1, v418) );
      v419 = (*v418)--;
    if ( v419 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v244);
  sub_119C884((void **)&v503, "geometry.skeleton.wither");
  GeometryGroup::getGeometry((GeometryPtr *)&v504, (int)v6, (const void **)&v503);
  v245 = (SkeletonModel *)operator new(0x10ECu);
  SkeletonModel::SkeletonModel(v245, (const GeometryPtr *)&v504, 0);
  v505 = v245;
  sub_119C884((void **)&v500, "geometry.humanoid.armor1");
  GeometryGroup::getGeometry((GeometryPtr *)&v501, (int)v6, (const void **)&v500);
  v246 = (SkeletonModel *)operator new(0x10ECu);
  SkeletonModel::SkeletonModel(v246, (const GeometryPtr *)&v501, 1);
  v502 = v246;
  sub_119C884((void **)&v497, "geometry.humanoid.armor2");
  GeometryGroup::getGeometry((GeometryPtr *)&v498, (int)v6, (const void **)&v497);
  v247 = (SkeletonModel *)operator new(0x10ECu);
  SkeletonModel::SkeletonModel(v247, (const GeometryPtr *)&v498, 1);
  v499 = v247;
  v496 = 1056964608;
    &v506,
    (int *)&v505,
    (int *)&v502,
    (int *)&v499,
    (int)&v496);
  v248 = v506;
  v506 = 0;
  v249 = *((_DWORD *)v7 + 71);
  *((_DWORD *)v7 + 71) = v248;
  if ( v249 )
    (*(void (**)(void))(*(_DWORD *)v249 + 4))();
  if ( v499 )
    (*(void (**)(void))(*(_DWORD *)v499 + 4))();
  v499 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v498);
  v250 = (void *)(v497 - 12);
  if ( (int *)(v497 - 12) != &dword_28898C0 )
    v420 = (unsigned int *)(v497 - 4);
        v421 = __ldrex(v420);
      while ( __strex(v421 - 1, v420) );
      v421 = (*v420)--;
    if ( v421 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v250);
  if ( v502 )
    (*(void (**)(void))(*(_DWORD *)v502 + 4))();
  v502 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v501);
  v251 = (void *)(v500 - 12);
  if ( (int *)(v500 - 12) != &dword_28898C0 )
    v422 = (unsigned int *)(v500 - 4);
        v423 = __ldrex(v422);
      while ( __strex(v423 - 1, v422) );
      v423 = (*v422)--;
    if ( v423 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v251);
  if ( v505 )
    (*(void (**)(void))(*(_DWORD *)v505 + 4))();
  v505 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v504);
  v252 = (void *)(v503 - 12);
  if ( (int *)(v503 - 12) != &dword_28898C0 )
    v424 = (unsigned int *)(v503 - 4);
        v425 = __ldrex(v424);
      while ( __strex(v425 - 1, v424) );
      v425 = (*v424)--;
    if ( v425 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v252);
  sub_119C884((void **)&v494, "geometry.npc");
  GeometryGroup::getGeometry((GeometryPtr *)&v495, (int)v6, (const void **)&v494);
  v253 = (NpcRenderer *)operator new(0x2A8u);
  NpcRenderer::NpcRenderer(v253, v5, (const GeometryPtr *)&v495, 0.0);
  v254 = *((_DWORD *)v7 + 64);
  *((_DWORD *)v7 + 64) = v253;
  if ( v254 )
    (*(void (**)(void))(*(_DWORD *)v254 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v495);
  v255 = (void *)(v494 - 12);
  if ( (int *)(v494 - 12) != &dword_28898C0 )
    v426 = (unsigned int *)(v494 - 4);
        v427 = __ldrex(v426);
      while ( __strex(v427 - 1, v426) );
      v427 = (*v426)--;
    if ( v427 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v255);
  v256 = (ItemSpriteRenderer *)operator new(0xFCu);
  ItemSpriteRenderer::ItemSpriteRenderer(v256, v5, (Item *)Item::mEnderEye, 0);
  v257 = *((_DWORD *)v7 + 72);
  *((_DWORD *)v7 + 72) = v256;
  if ( v257 )
    (*(void (**)(void))(*(_DWORD *)v257 + 4))();
  v258 = (EnderCrystalRenderer *)operator new(0x390u);
  EnderCrystalRenderer::EnderCrystalRenderer(v258, v5);
  v259 = *((_DWORD *)v7 + 73);
  *((_DWORD *)v7 + 73) = v258;
  if ( v259 )
    (*(void (**)(void))(*(_DWORD *)v259 + 4))();
  v260 = (EndermiteRenderer *)operator new(0x284u);
  EndermiteRenderer::EndermiteRenderer(v260, v5);
  v261 = *((_DWORD *)v7 + 74);
  *((_DWORD *)v7 + 74) = v260;
  if ( v261 )
    (*(void (**)(void))(*(_DWORD *)v261 + 4))();
  v262 = (EvocationFangRenderer *)operator new(0x370u);
  EvocationFangRenderer::EvocationFangRenderer(v262, v5);
  v263 = *((_DWORD *)v7 + 76);
  *((_DWORD *)v7 + 76) = v262;
  if ( v263 )
    (*(void (**)(void))(*(_DWORD *)v263 + 4))();
  sub_119C884((void **)&v492, "geometry.evoker");
  GeometryGroup::getGeometry((GeometryPtr *)&v493, (int)v6, (const void **)&v492);
  v264 = (EvocationIllagerModel *)operator new(0x728u);
  EvocationIllagerModel::EvocationIllagerModel(v264, (const GeometryPtr *)&v493);
  v265 = operator new(0x29Cu);
  v694 = v264;
  EvocationIllagerRenderer::EvocationIllagerRenderer((int)v265, v5, (int *)&v694);
  if ( v694 )
    (*(void (**)(void))(*(_DWORD *)v694 + 4))();
  v266 = *((_DWORD *)v7 + 75);
  *((_DWORD *)v7 + 75) = v265;
  if ( v266 )
    (*(void (**)(void))(*(_DWORD *)v266 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v493);
  v267 = (void *)(v492 - 12);
  if ( (int *)(v492 - 12) != &dword_28898C0 )
    v428 = (unsigned int *)(v492 - 4);
        v429 = __ldrex(v428);
      while ( __strex(v429 - 1, v428) );
      v429 = (*v428)--;
    if ( v429 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v267);
  sub_119C884((void **)&v490, "geometry.vex");
  GeometryGroup::getGeometry((GeometryPtr *)&v491, (int)v6, (const void **)&v490);
  v268 = (VexModel *)operator new(0x1298u);
  VexModel::VexModel(v268, (const GeometryPtr *)&v491);
  v269 = operator new(0x2D0u);
  v695 = v268;
  VexRenderer::VexRenderer((int)v269, v5, (int *)&v695);
  if ( v695 )
    (*(void (**)(void))(*(_DWORD *)v695 + 4))();
  v270 = *((_DWORD *)v7 + 77);
  *((_DWORD *)v7 + 77) = v269;
  if ( v270 )
    (*(void (**)(void))(*(_DWORD *)v270 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v491);
  v271 = (void *)(v490 - 12);
  if ( (int *)(v490 - 12) != &dword_28898C0 )
    v430 = (unsigned int *)(v490 - 4);
        v431 = __ldrex(v430);
      while ( __strex(v431 - 1, v430) );
      v431 = (*v430)--;
    if ( v431 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v271);
  sub_119C884((void **)&v488, "geometry.agent");
  GeometryGroup::getGeometry((GeometryPtr *)&v489, (int)v6, (const void **)&v488);
  v272 = (AgentRenderer *)operator new(0x284u);
  AgentRenderer::AgentRenderer(v272, v5, (const GeometryPtr *)&v489, v4);
  v273 = *((_DWORD *)v7 + 65);
  *((_DWORD *)v7 + 65) = v272;
  if ( v273 )
    (*(void (**)(void))(*(_DWORD *)v273 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v489);
  v274 = (void *)(v488 - 12);
  if ( (int *)(v488 - 12) != &dword_28898C0 )
    v432 = (unsigned int *)(v488 - 4);
        v433 = __ldrex(v432);
      while ( __strex(v433 - 1, v432) );
      v433 = (*v432)--;
    if ( v433 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v274);
  sub_119C884((void **)&v484, "geometry.vindicator");
  GeometryGroup::getGeometry((GeometryPtr *)&v485, (int)v6, (const void **)&v484);
  v275 = (VindicationIllagerModel *)operator new(0x1298u);
  VindicationIllagerModel::VindicationIllagerModel(v275, (const GeometryPtr *)&v485);
  v486 = v275;
  sub_119C884((void **)&v481, "geometry.humanoid.armor1");
  GeometryGroup::getGeometry((GeometryPtr *)&v482, (int)v6, (const void **)&v481);
  v276 = (VindicationIllagerModel *)operator new(0x1298u);
  VindicationIllagerModel::VindicationIllagerModel(v276, (const GeometryPtr *)&v482);
  v483 = v276;
  sub_119C884((void **)&v478, "geometry.humanoid.armor2");
  GeometryGroup::getGeometry((GeometryPtr *)&v479, (int)v6, (const void **)&v478);
  v277 = (VindicationIllagerModel *)operator new(0x1298u);
  VindicationIllagerModel::VindicationIllagerModel(v277, (const GeometryPtr *)&v479);
  v480 = v277;
  std::make_unique<VindicationIllagerRenderer,mce::TextureGroup &,std::unique_ptr<VindicationIllagerModel,std::default_delete<VindicationIllagerModel>>,std::unique_ptr<VindicationIllagerModel,std::default_delete<VindicationIllagerModel>>,std::unique_ptr<VindicationIllagerModel,std::default_delete<VindicationIllagerModel>>>(
    &v487,
    (int *)&v486,
    (int *)&v483,
    (int *)&v480);
  v278 = v487;
  v487 = 0;
  v279 = *((_DWORD *)v7 + 78);
  *((_DWORD *)v7 + 78) = v278;
  if ( v279 )
    (*(void (**)(void))(*(_DWORD *)v279 + 4))();
  if ( v480 )
    (*(void (**)(void))(*(_DWORD *)v480 + 4))();
  v480 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v479);
  v280 = (void *)(v478 - 12);
  if ( (int *)(v478 - 12) != &dword_28898C0 )
    v434 = (unsigned int *)(v478 - 4);
        v435 = __ldrex(v434);
      while ( __strex(v435 - 1, v434) );
      v435 = (*v434)--;
    if ( v435 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v280);
  if ( v483 )
    (*(void (**)(void))(*(_DWORD *)v483 + 4))();
  v483 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v482);
  v281 = (void *)(v481 - 12);
  if ( (int *)(v481 - 12) != &dword_28898C0 )
    v436 = (unsigned int *)(v481 - 4);
        v437 = __ldrex(v436);
      while ( __strex(v437 - 1, v436) );
      v437 = (*v436)--;
    if ( v437 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v281);
  if ( v486 )
    (*(void (**)(void))(*(_DWORD *)v486 + 4))();
  v486 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v485);
  v282 = (void *)(v484 - 12);
  if ( (int *)(v484 - 12) != &dword_28898C0 )
    v438 = (unsigned int *)(v484 - 4);
        v439 = __ldrex(v438);
      while ( __strex(v439 - 1, v438) );
      v439 = (*v438)--;
    if ( v439 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v282);
  sub_119C884((void **)&v474, "geometry.armor_stand");
  GeometryGroup::getGeometry((GeometryPtr *)&v475, (int)v6, (const void **)&v474);
  v283 = (ArmorStandModel *)operator new(0x1450u);
  ArmorStandModel::ArmorStandModel(v283, (const GeometryPtr *)&v475);
  v476 = v283;
  sub_119C884((void **)&v468, "textures/entity/armor_stand");
  v469 = v468;
  v468 = (char *)&unk_28898CC;
  v470 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v471, v5, (int)&v469, 0);
  std::make_unique<ArmorStandRenderer,std::unique_ptr<ArmorStandModel,std::default_delete<ArmorStandModel>>,mce::TexturePtr>(
    &v477,
    (int *)&v476,
    (int)&v471);
  v284 = v477;
  v477 = 0;
  v285 = *((_DWORD *)v7 + 79);
  *((_DWORD *)v7 + 79) = v284;
  if ( v285 )
    (*(void (**)(void))(*(_DWORD *)v285 + 4))();
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v471);
  v286 = v469 - 12;
  if ( (int *)(v469 - 12) != &dword_28898C0 )
    v440 = (unsigned int *)(v469 - 4);
        v441 = __ldrex(v440);
      while ( __strex(v441 - 1, v440) );
      v441 = (*v440)--;
    if ( v441 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v286);
  v287 = v468 - 12;
  if ( (int *)(v468 - 12) != &dword_28898C0 )
    v442 = (unsigned int *)(v468 - 4);
        v443 = __ldrex(v442);
      while ( __strex(v443 - 1, v442) );
      v443 = (*v442)--;
    if ( v443 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v287);
  if ( v476 )
    (*(void (**)(void))(*(_DWORD *)v476 + 4))();
  v476 = 0;
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v475);
  v288 = (void *)(v474 - 12);
  if ( (int *)(v474 - 12) != &dword_28898C0 )
    v444 = (unsigned int *)(v474 - 4);
        v445 = __ldrex(v444);
      while ( __strex(v445 - 1, v444) );
      v445 = (*v444)--;
    if ( v445 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v288);
  sub_119C884((void **)&v464, "geometry.parrot");
  GeometryGroup::getGeometry((GeometryPtr *)&v465, (int)v6, (const void **)&v464);
  v289 = (ParrotRenderer *)operator new(0x2FCu);
  ParrotRenderer::ParrotRenderer(v289, v5, (const GeometryPtr *)&v465, 0.0);
  v290 = *((_DWORD *)v7 + 80);
  *((_DWORD *)v7 + 80) = v289;
  if ( v290 )
    (*(void (**)(void))(*(_DWORD *)v290 + 4))();
  GeometryPtr::~GeometryPtr((GeometryPtr *)&v465);
  v291 = (void *)(v464 - 12);
  if ( (int *)(v464 - 12) != &dword_28898C0 )
    v446 = (unsigned int *)(v464 - 4);
        v447 = __ldrex(v446);
      while ( __strex(v447 - 1, v446) );
      v447 = (*v446)--;
    if ( v447 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v291);
  v292 = (FireworksRocketRenderer *)operator new(0x10Cu);
  FireworksRocketRenderer::FireworksRocketRenderer(v292, v5);
  result = *((_DWORD *)v7 + 81);
  *((_DWORD *)v7 + 81) = v292;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


void __fastcall EntityRenderDispatcher::~EntityRenderDispatcher(EntityRenderDispatcher *this)
{
  EntityRenderDispatcher::~EntityRenderDispatcher(this);
}


void __fastcall EntityRenderDispatcher::~EntityRenderDispatcher(EntityRenderDispatcher *this)
{
  EntityRenderDispatcher *v1; // r4@1
  signed int v2; // r5@1
  int v3; // r0@2

  v1 = this;
  v2 = 324;
  *(_DWORD *)this = &off_26DB228;
  do
  {
    v3 = *(_DWORD *)((char *)v1 + v2);
    if ( v3 )
      (*(void (**)(void))(*(_DWORD *)v3 + 4))();
    *(_DWORD *)((char *)v1 + v2) = 0;
    v2 -= 4;
  }
  while ( v2 );
  j_j_j__ZdlPv_4((void *)v1);
}


EntityRenderDispatcher *__fastcall EntityRenderDispatcher::~EntityRenderDispatcher(EntityRenderDispatcher *this)
{
  EntityRenderDispatcher *v1; // r4@1
  signed int v2; // r5@1
  int v3; // r0@2

  v1 = this;
  v2 = 324;
  *(_DWORD *)this = &off_26DB228;
  do
  {
    v3 = *(_DWORD *)((char *)v1 + v2);
    if ( v3 )
      (*(void (**)(void))(*(_DWORD *)v3 + 4))();
    *(_DWORD *)((char *)v1 + v2) = 0;
    v2 -= 4;
  }
  while ( v2 );
  return v1;
}


int __fastcall EntityRenderDispatcher::hasWaterHole(EntityRenderDispatcher *this, Entity *a2)
{
  Entity *v2; // r4@1
  EntityRenderDispatcher *v3; // r5@1
  int v4; // r0@1
  EntityRenderer *v5; // r5@3
  int result; // r0@5

  v2 = a2;
  v3 = this;
  v4 = *((_DWORD *)a2 + 62);
  if ( v4 == 1 )
    v4 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 496))(a2);
  v5 = (EntityRenderer *)*((_DWORD *)v3 + v4 + 1);
  if ( v5 && !Entity::isRemoved(v2) )
    result = EntityRenderer::hasWaterHole(v5);
  else
    result = 0;
  return result;
}


void __fastcall EntityRenderDispatcher::initializePlayerRenderer(EntityRenderDispatcher *this, SkinGeometryGroup *a2, mce::TextureGroup *a3)
{
  EntityRenderDispatcher::initializePlayerRenderer(this, a2, a3);
}


int __fastcall EntityRenderDispatcher::render(int a1, int a2, Entity *this, int a4, int a5)
{
  Entity *v5; // r7@1
  int v6; // r5@1
  int v7; // r0@1
  BaseEntityRenderContext *v9; // r4@1
  int result; // r0@3
  char v16; // [sp+4h] [bp-24h]@10

  v5 = this;
  v6 = a1;
  v7 = *((_DWORD *)this + 62);
  _R8 = a4;
  v9 = (BaseEntityRenderContext *)a2;
  if ( v7 == 1 )
    v7 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)this + 496))(this);
  result = v6 + 4 * v7;
  _R5 = *(_DWORD *)(result + 4);
  if ( _R5 )
  {
    result = Entity::isRemoved(v5);
    if ( !result )
    {
      if ( BaseEntityRenderContext::isVRClient(v9) != 1 )
        goto LABEL_13;
      if ( BaseEntityRenderContext::isLivingroomMode(v9) )
      result = BaseEntityRenderContext::isVRTransitioning(v9);
      if ( result )
      __asm
      {
        VLDR            S0, [R5,#0x50]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        VLDR            S2, [R8]
        VMUL.F32        S0, S0, S0
        VLDR            S4, [R8,#4]
        VMUL.F32        S2, S2, S2
        VLDR            S6, [R8,#8]
        VMUL.F32        S4, S4, S4
        VMUL.F32        S6, S6, S6
        VADD.F32        S2, S4, S2
        VADD.F32        S2, S2, S6
        VCMPE.F32       S2, S0
      if ( !(_NF ^ _VF) )
LABEL_13:
        EntityRenderData::EntityRenderData((int)&v16, (int)v5, _R8, a5);
        (*(void (__fastcall **)(int, BaseEntityRenderContext *, char *))(*(_DWORD *)_R5 + 12))(_R5, v9, &v16);
        (*(void (__fastcall **)(int, BaseEntityRenderContext *, char *))(*(_DWORD *)_R5 + 32))(_R5, v9, &v16);
        (*(void (__fastcall **)(int, BaseEntityRenderContext *, char *, _DWORD))(*(_DWORD *)_R5 + 24))(_R5, v9, &v16, 0);
        result = (*(int (__fastcall **)(int, BaseEntityRenderContext *, char *))(*(_DWORD *)_R5 + 28))(_R5, v9, &v16);
    }
  }
  return result;
}


int __fastcall EntityRenderDispatcher::renderWaterHole(int a1, int a2, Entity *this, int a4, int a5)
{
  Entity *v5; // r6@1
  int v6; // r7@1
  int v7; // r0@1
  int v8; // r5@1
  int v9; // r4@1
  int result; // r0@3
  int v11; // r7@3
  char v12; // [sp+4h] [bp-24h]@5

  v5 = this;
  v6 = a1;
  v7 = *((_DWORD *)this + 62);
  v8 = a4;
  v9 = a2;
  if ( v7 == 1 )
    v7 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)this + 496))(this);
  result = v6 + 4 * v7;
  v11 = *(_DWORD *)(result + 4);
  if ( v11 )
  {
    result = Entity::isRemoved(v5);
    if ( !result )
    {
      EntityRenderData::EntityRenderData((int)&v12, (int)v5, v8, a5);
      result = (*(int (__fastcall **)(int, int, char *))(*(_DWORD *)v11 + 36))(v11, v9, &v12);
    }
  }
  return result;
}
