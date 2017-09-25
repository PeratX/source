

Command *__fastcall ClearCommand::ClearCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_2719FC0;
  j_CommandSelector<Player>::CommandSelector((int)v1 + 20);
  j_CommandItem::CommandItem((int)v1 + 116);
  *((_DWORD *)v1 + 31) = -1;
  *((_DWORD *)v1 + 32) = -1;
  return v1;
}


void __fastcall ClearCommand::~ClearCommand(ClearCommand *this)
{
  ClearCommand::~ClearCommand(this);
}


void __fastcall ClearCommand::execute(ClearCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  ClearCommand::execute(this, a2, a3);
}


void __fastcall ClearCommand::setup(ClearCommand *this, CommandRegistry *a2)
{
  ClearCommand *v2; // r9@1
  __int64 v3; // r2@1
  void *v4; // r0@1
  char v5; // r0@2
  char v6; // r0@5
  char v7; // r0@8
  char v8; // r0@11
  int v9; // r0@14
  void *v10; // r0@14
  void *v11; // r0@15
  void *v12; // r0@16
  void *v13; // r0@17
  int v14; // r2@19
  signed int v15; // r1@21
  unsigned int *v16; // r2@23
  signed int v17; // r1@25
  unsigned int *v18; // r2@27
  signed int v19; // r1@29
  unsigned int *v20; // r2@31
  signed int v21; // r1@33
  unsigned int *v22; // r2@35
  signed int v23; // r1@37
  char v24; // [sp+1Ch] [bp-DCh]@14
  int v25; // [sp+28h] [bp-D0h]@14
  char v26; // [sp+44h] [bp-B4h]@11
  int v27; // [sp+50h] [bp-A8h]@15
  char v28; // [sp+6Ch] [bp-8Ch]@8
  int v29; // [sp+78h] [bp-80h]@16
  char v30; // [sp+94h] [bp-64h]@5
  int v31; // [sp+A0h] [bp-58h]@17
  __int64 v32; // [sp+BCh] [bp-3Ch]@2
  int v33; // [sp+C8h] [bp-30h]@1
  __int16 v34; // [sp+CCh] [bp-2Ch]@5
  unsigned __int16 v35; // [sp+D0h] [bp-28h]@8
  __int16 v36; // [sp+D4h] [bp-24h]@11
  __int16 v37; // [sp+D8h] [bp-20h]@14

  v2 = this;
  sub_21E94B4((void **)&v33, "clear");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v33, "commands.clear.description", 1, 0, 0);
  v4 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
  {
    v14 = v33 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v15 = __ldrex((unsigned int *)v3);
        HIDWORD(v3) = v15 - 1;
      }
      while ( __strex(v15 - 1, (unsigned int *)v3) );
    }
    else
      v15 = *(_DWORD *)v3;
      HIDWORD(v3) = *(_DWORD *)v3 - 1;
      *(_DWORD *)v3 = HIDWORD(v3);
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  LODWORD(v3) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v32, 1, v3);
  v5 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  __dmb();
  if ( !(v5 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id) )
    type_id<CommandRegistry,CommandSelector<Player>>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id);
  v34 = type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v30,
    &v34,
    (unsigned int)CommandRegistry::parse<CommandSelector<Player>>,
    "player",
    0,
    20,
    1,
    -1);
  v6 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id;
  if ( !(v6 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id) )
    type_id<CommandRegistry,CommandItem>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id);
  v35 = type_id<CommandRegistry,CommandItem>(void)::id[0];
    (int)&v28,
    &v35,
    (unsigned int)CommandRegistry::parse<CommandItem>,
    "itemName",
    116,
  v7 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v7 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v36 = type_id<CommandRegistry,int>(void)::id;
    (int)&v26,
    &v36,
    (unsigned int)CommandRegistry::parse<int>,
    "data",
    124,
  v8 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v8 & 1)
  v37 = type_id<CommandRegistry,int>(void)::id;
  v9 = j_CommandParameterData::CommandParameterData(
         (int)&v24,
         &v37,
         (unsigned int)CommandRegistry::parse<int>,
         "maxCount",
         0,
         128,
         1,
         -1);
  j_CommandRegistry::registerOverload<ClearCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    (int)v2,
    "clear",
    v32,
    v9);
  v10 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v25 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v27 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v29 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v31 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall ClearCommand::setup(ClearCommand *this, CommandRegistry *a2)
{
  ClearCommand::setup(this, a2);
}


void __fastcall ClearCommand::~ClearCommand(ClearCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2719FC0;
  j_CommandSelectorBase::~CommandSelectorBase((ClearCommand *)((char *)this + 20));
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall ClearCommand::~ClearCommand(ClearCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2719FC0;
  j_CommandSelectorBase::~CommandSelectorBase((ClearCommand *)((char *)this + 20));
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


void __fastcall ClearCommand::execute(ClearCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  ClearCommand *v3; // r5@1
  CommandOutput *v4; // r10@1
  const CommandOrigin *v5; // r7@1
  char *v6; // r4@2
  int v7; // r6@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  int *v10; // r0@12
  void *v11; // r0@17
  void *v12; // r0@18
  char *v13; // r0@19
  void *v14; // r0@20
  void *v15; // r0@21
  unsigned int *v16; // r2@22
  signed int v17; // r1@24
  char *v18; // r4@27
  int v19; // r6@27
  unsigned int *v20; // r2@29
  signed int v21; // r1@31
  int *v22; // r0@37
  void *v23; // r0@42
  void *v24; // r0@43
  char *v25; // r0@44
  void *v26; // r0@45
  CommandOutput *v27; // r3@52
  const ItemInstance *v28; // r6@58
  int v29; // r0@58
  Player *v30; // r9@66
  PlayerInventoryProxy *v31; // r6@67
  int v32; // r7@67
  int v33; // r0@67
  signed int v34; // r11@67
  int v35; // r0@67
  int v36; // r2@71
  int v37; // r6@73
  char *v38; // r0@74
  PlayerInventoryProxy *v39; // r0@76
  int v40; // r6@76
  int v41; // r7@76
  signed int v42; // r11@76
  const char **v43; // r0@77
  void *v44; // r0@77
  void *v45; // r0@78
  void *v46; // r0@79
  void *v47; // r4@81
  void *v48; // r6@81
  unsigned int *v49; // r2@83
  signed int v50; // r1@85
  int *v51; // r0@91
  void *v52; // r0@96
  void *v53; // r0@97
  void *v54; // r0@98
  unsigned int *v55; // r2@99
  signed int v56; // r1@101
  int *v57; // r0@105
  __int64 v58; // kr18_8@105
  unsigned int v59; // r1@105
  const void **v60; // r0@107
  char *v61; // r0@108
  _BYTE *v62; // r7@109
  char *v63; // r6@109
  unsigned int v64; // r2@109
  unsigned int v65; // r1@111
  unsigned int v66; // r4@111
  unsigned int v67; // r2@119
  unsigned int v68; // r1@121
  int v69; // r4@128
  char *v70; // r6@128
  unsigned int *v71; // r2@130
  signed int v72; // r1@132
  int *v73; // r0@138
  void *v74; // r0@143
  void *v75; // r0@144
  _BYTE *v76; // r7@152
  char *v77; // r6@152
  unsigned int v78; // r2@152
  unsigned int v79; // r1@154
  unsigned int v80; // r4@154
  int v81; // r9@161
  char *v82; // r9@163
  unsigned int v83; // r2@166
  unsigned int v84; // r1@168
  int v85; // r9@176
  char *v86; // r9@178
  unsigned int *v87; // r2@181
  signed int v88; // r1@183
  unsigned int *v89; // r2@185
  signed int v90; // r1@187
  unsigned int *v91; // r2@189
  signed int v92; // r1@191
  const void **v93; // r0@194
  char *v94; // r0@194
  char *v95; // r0@195
  void *v96; // r0@196
  void *v97; // r0@197
  void *v98; // r0@198
  int v99; // r4@199
  char *v100; // r6@199
  unsigned int *v101; // r2@201
  signed int v102; // r1@203
  int *v103; // r0@209
  void *v104; // r0@214
  void *v105; // r0@215
  unsigned int *v106; // r2@218
  signed int v107; // r1@220
  unsigned int *v108; // r2@222
  signed int v109; // r1@224
  unsigned int *v110; // r2@246
  signed int v111; // r1@248
  unsigned int *v112; // r2@250
  signed int v113; // r1@252
  unsigned int *v114; // r2@261
  signed int v115; // r1@263
  unsigned int *v116; // r2@265
  signed int v117; // r1@267
  unsigned int *v118; // r2@269
  signed int v119; // r1@271
  unsigned int *v120; // r2@273
  signed int v121; // r1@275
  unsigned int *v122; // r2@277
  signed int v123; // r1@279
  unsigned int *v124; // r2@281
  signed int v125; // r1@283
  unsigned int *v126; // r2@285
  signed int v127; // r1@287
  unsigned int *v128; // r2@329
  signed int v129; // r1@331
  unsigned int *v130; // r2@333
  signed int v131; // r1@335
  unsigned int *v132; // r2@337
  signed int v133; // r1@339
  unsigned int *v134; // r2@341
  signed int v135; // r1@343
  unsigned int *v136; // r2@348
  signed int v137; // r1@350
  unsigned int *v138; // r2@352
  signed int v139; // r1@354
  unsigned int *v140; // r2@356
  signed int v141; // r1@358
  unsigned int *v142; // r2@360
  signed int v143; // r1@362
  int v144; // r5@380
  unsigned int *v145; // r1@381
  unsigned int v146; // r0@383
  unsigned int *v147; // r4@403
  unsigned int v148; // r0@405
  int v149; // r5@410
  unsigned int *v150; // r1@411
  unsigned int v151; // r0@413
  unsigned int *v152; // r4@417
  unsigned int v153; // r0@419
  int v154; // r4@425
  char *v155; // r5@425
  unsigned int *v156; // r2@427
  signed int v157; // r1@429
  int *v158; // r0@435
  void *v159; // r0@440
  void *v160; // r0@441
  void *v161; // r0@442
  char *v162; // r4@443
  int v163; // r6@443
  unsigned int *v164; // r2@445
  signed int v165; // r1@447
  int *v166; // r0@453
  void *v167; // r0@458
  void *v168; // r0@459
  int v169; // r4@465
  unsigned int *v170; // r1@466
  unsigned int v171; // r0@468
  unsigned int *v172; // r5@472
  unsigned int v173; // r0@474
  unsigned int *v174; // r2@486
  signed int v175; // r1@488
  unsigned int *v176; // r2@490
  signed int v177; // r1@492
  unsigned int *v178; // r2@494
  signed int v179; // r1@496
  unsigned int *v180; // r2@498
  signed int v181; // r1@500
  int v182; // [sp+40h] [bp-228h]@443
  char *v183; // [sp+48h] [bp-220h]@443
  char *v184; // [sp+4Ch] [bp-21Ch]@443
  char *v185; // [sp+50h] [bp-218h]@443
  int v186; // [sp+58h] [bp-210h]@443
  int v187; // [sp+5Ch] [bp-20Ch]@425
  char *v188; // [sp+64h] [bp-204h]@425
  char *v189; // [sp+68h] [bp-200h]@425
  char *v190; // [sp+6Ch] [bp-1FCh]@425
  int v191; // [sp+74h] [bp-1F4h]@425
  int v192; // [sp+78h] [bp-1F0h]@81
  int v193; // [sp+80h] [bp-1E8h]@81
  void *v194; // [sp+88h] [bp-1E0h]@81
  void *v195; // [sp+8Ch] [bp-1DCh]@81
  char *v196; // [sp+90h] [bp-1D8h]@81
  int v197; // [sp+98h] [bp-1D0h]@81
  int v198; // [sp+9Ch] [bp-1CCh]@78
  int v199; // [sp+A4h] [bp-1C4h]@78
  int v200; // [sp+ACh] [bp-1BCh]@77
  int v201; // [sp+B0h] [bp-1B8h]@199
  int v202; // [sp+B8h] [bp-1B0h]@199
  char *v203; // [sp+C0h] [bp-1A8h]@199
  char *v204; // [sp+C4h] [bp-1A4h]@199
  char *v205; // [sp+C8h] [bp-1A0h]@199
  int v206; // [sp+D0h] [bp-198h]@199
  int v207; // [sp+D4h] [bp-194h]@105
  unsigned int v208; // [sp+D8h] [bp-190h]@105
  char *v209; // [sp+DCh] [bp-18Ch]@194
  char *v210; // [sp+E0h] [bp-188h]@194
  int v211; // [sp+E8h] [bp-180h]@105
  int v212; // [sp+ECh] [bp-17Ch]@128
  int v213; // [sp+F4h] [bp-174h]@128
  char *v214; // [sp+FCh] [bp-16Ch]@128
  char *v215; // [sp+100h] [bp-168h]@128
  char *v216; // [sp+104h] [bp-164h]@128
  int v217; // [sp+10Ch] [bp-15Ch]@128
  int v218; // [sp+110h] [bp-158h]@64
  int v219; // [sp+114h] [bp-154h]@380
  char v220; // [sp+11Ch] [bp-14Ch]@64
  int v221; // [sp+120h] [bp-148h]@410
  void *v222; // [sp+128h] [bp-140h]@64
  char *v223; // [sp+12Ch] [bp-13Ch]@64
  char *v224; // [sp+130h] [bp-138h]@64
  void *v225; // [sp+134h] [bp-134h]@64
  char *v226; // [sp+138h] [bp-130h]@64
  char *v227; // [sp+13Ch] [bp-12Ch]@64
  int *v228; // [sp+140h] [bp-128h]@63
  int v229; // [sp+144h] [bp-124h]@465
  int v230; // [sp+148h] [bp-120h]@52
  int v231; // [sp+150h] [bp-118h]@56
  void *v232; // [sp+16Ch] [bp-FCh]@54
  void *ptr; // [sp+17Ch] [bp-ECh]@52
  char v234; // [sp+190h] [bp-D8h]@51
  int v235; // [sp+198h] [bp-D0h]@483
  void *v236; // [sp+1B4h] [bp-B4h]@481
  void *v237; // [sp+1C4h] [bp-A4h]@479
  char *v238; // [sp+1D8h] [bp-90h]@27
  int v239; // [sp+1DCh] [bp-8Ch]@27
  int v240; // [sp+1E0h] [bp-88h]@27
  int v241; // [sp+1E8h] [bp-80h]@27
  char *v242; // [sp+1F0h] [bp-78h]@27
  char *v243; // [sp+1F4h] [bp-74h]@27
  char *v244; // [sp+1F8h] [bp-70h]@27
  int v245; // [sp+200h] [bp-68h]@27
  char *v246; // [sp+204h] [bp-64h]@2
  int v247; // [sp+208h] [bp-60h]@2
  int v248; // [sp+20Ch] [bp-5Ch]@2
  int v249; // [sp+214h] [bp-54h]@2
  char *v250; // [sp+21Ch] [bp-4Ch]@2
  char *v251; // [sp+220h] [bp-48h]@2
  char *v252; // [sp+224h] [bp-44h]@2
  int v253; // [sp+22Ch] [bp-3Ch]@2
  char *v254; // [sp+230h] [bp-38h]@2
  char *v255; // [sp+234h] [bp-34h]@27
  char *v256; // [sp+238h] [bp-30h]@2
  char *v257; // [sp+23Ch] [bp-2Ch]@27

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( *((_DWORD *)this + 31) < -1 )
  {
    sub_21E94B4((void **)&v253, "commands.generic.num.tooSmall");
    j_Util::toString<int,(void *)0,(void *)0>((void **)&v247, *((_DWORD *)v3 + 31));
    j_CommandOutputParameter::CommandOutputParameter(&v248, &v247);
    v256 = (char *)&unk_28898CC;
    sub_21E810C((const void **)&v256, 0, 0, (_BYTE *)1, 0x31u);
    v254 = v256;
    sub_21E810C((const void **)&v254, 0, 0, (_BYTE *)1, 0x2Du);
    v246 = v254;
    j_CommandOutputParameter::CommandOutputParameter(&v249, (int *)&v246);
    v250 = 0;
    v251 = 0;
    v252 = 0;
    v250 = (char *)j_operator new(0x10u);
    v252 = v250 + 16;
    v251 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                     (int)&v248,
                     (int)&v250,
                     (int)v250);
    j_CommandOutput::error(v4, &v253, (unsigned __int64 *)&v250);
    v7 = (int)v251;
    v6 = v250;
    if ( v250 != v251 )
    {
      do
      {
        v10 = (int *)(*(_DWORD *)v6 - 12);
        if ( v10 != &dword_28898C0 )
        {
          v8 = (unsigned int *)(*(_DWORD *)v6 - 4);
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
            j_j_j_j__ZdlPv_9(v10);
        }
        v6 += 8;
      }
      while ( v6 != (char *)v7 );
      v6 = v250;
    }
    if ( v6 )
      j_operator delete(v6);
    v11 = (void *)(v249 - 12);
    if ( (int *)(v249 - 12) != &dword_28898C0 )
      v128 = (unsigned int *)(v249 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v129 = __ldrex(v128);
        while ( __strex(v129 - 1, v128) );
      else
        v129 = (*v128)--;
      if ( v129 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = (void *)(v248 - 12);
    if ( (int *)(v248 - 12) != &dword_28898C0 )
      v130 = (unsigned int *)(v248 - 4);
          v131 = __ldrex(v130);
        while ( __strex(v131 - 1, v130) );
        v131 = (*v130)--;
      if ( v131 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = v246 - 12;
    if ( (int *)(v246 - 12) != &dword_28898C0 )
      v132 = (unsigned int *)(v246 - 4);
          v133 = __ldrex(v132);
        while ( __strex(v133 - 1, v132) );
        v133 = (*v132)--;
      if ( v133 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v247 - 12);
    if ( (int *)(v247 - 12) != &dword_28898C0 )
      v134 = (unsigned int *)(v247 - 4);
          v135 = __ldrex(v134);
        while ( __strex(v135 - 1, v134) );
        v135 = (*v134)--;
      if ( v135 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v253 - 12);
    if ( (int *)(v253 - 12) == &dword_28898C0 )
      return;
    v16 = (unsigned int *)(v253 - 4);
    if ( &pthread_create )
      __dmb();
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      goto LABEL_346;
LABEL_345:
    v17 = (*v16)--;
LABEL_346:
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
    return;
  }
  if ( *((_DWORD *)this + 32) < -1 )
    sub_21E94B4((void **)&v245, "commands.generic.num.tooSmall");
    j_Util::toString<int,(void *)0,(void *)0>((void **)&v239, *((_DWORD *)v3 + 32));
    j_CommandOutputParameter::CommandOutputParameter(&v240, &v239);
    v257 = (char *)&unk_28898CC;
    sub_21E810C((const void **)&v257, 0, 0, (_BYTE *)1, 0x31u);
    v255 = v257;
    sub_21E810C((const void **)&v255, 0, 0, (_BYTE *)1, 0x2Du);
    v238 = v255;
    j_CommandOutputParameter::CommandOutputParameter(&v241, (int *)&v238);
    v242 = 0;
    v243 = 0;
    v244 = 0;
    v242 = (char *)j_operator new(0x10u);
    v244 = v242 + 16;
    v243 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                     (int)&v240,
                     (int)&v242,
                     (int)v242);
    j_CommandOutput::error(v4, &v245, (unsigned __int64 *)&v242);
    v19 = (int)v243;
    v18 = v242;
    if ( v242 != v243 )
        v22 = (int *)(*(_DWORD *)v18 - 12);
        if ( v22 != &dword_28898C0 )
          v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v18 += 8;
      while ( v18 != (char *)v19 );
      v18 = v242;
    if ( v18 )
      j_operator delete(v18);
    v23 = (void *)(v241 - 12);
    if ( (int *)(v241 - 12) != &dword_28898C0 )
      v136 = (unsigned int *)(v241 - 4);
          v137 = __ldrex(v136);
        while ( __strex(v137 - 1, v136) );
        v137 = (*v136)--;
      if ( v137 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v24 = (void *)(v240 - 12);
    if ( (int *)(v240 - 12) != &dword_28898C0 )
      v138 = (unsigned int *)(v240 - 4);
          v139 = __ldrex(v138);
        while ( __strex(v139 - 1, v138) );
        v139 = (*v138)--;
      if ( v139 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v25 = v238 - 12;
    if ( (int *)(v238 - 12) != &dword_28898C0 )
      v140 = (unsigned int *)(v238 - 4);
          v141 = __ldrex(v140);
        while ( __strex(v141 - 1, v140) );
        v141 = (*v140)--;
      if ( v141 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v26 = (void *)(v239 - 12);
    if ( (int *)(v239 - 12) != &dword_28898C0 )
      v142 = (unsigned int *)(v239 - 4);
          v143 = __ldrex(v142);
        while ( __strex(v143 - 1, v142) );
        v143 = (*v142)--;
      if ( v143 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    v15 = (void *)(v245 - 12);
    if ( (int *)(v245 - 12) == &dword_28898C0 )
    v16 = (unsigned int *)(v245 - 4);
    goto LABEL_345;
  j_ItemInstance::ItemInstance((int)&v234);
  if ( j_CommandItem::operator bool((int)v3 + 116) == 1 )
    j_CommandItem::getInstance((CommandItem *)&v230, (int)v3 + 116, 1, *((_DWORD *)v3 + 31));
    j_ItemInstance::operator=((int)&v234, (int)&v230);
    if ( ptr )
      j_operator delete(ptr);
    if ( v232 )
      j_operator delete(v232);
    if ( v231 )
      (*(void (**)(void))(*(_DWORD *)v231 + 4))();
    v28 = 0;
    v231 = 0;
    v29 = *((_DWORD *)v3 + 31);
    if ( v29 == -1 )
      j_ItemInstance::setAuxValue((ItemInstance *)&v234, 0x7FFF);
      v29 = *((_DWORD *)v3 + 31);
    if ( v29 != -1 )
      v28 = (const ItemInstance *)1;
    if ( j_Command::validItemInstance((Command *)&v234, v28, (int)v4, v27) != 1 )
      goto LABEL_479;
  j_CommandSelector<Player>::results((int)&v228, (ClearCommand *)((char *)v3 + 20), v5);
  if ( !j_Command::checkHasTargets<Player>((__int64 **)&v228, v4) )
    goto LABEL_465;
  v226 = 0;
  v227 = 0;
  v222 = 0;
  v223 = 0;
  v224 = 0;
  v225 = 0;
  j_CommandSelectorResults<Player>::begin((int)&v220, &v228);
  j_CommandSelectorResults<Player>::end((int)&v218, (int)&v228);
  while ( j_SelectorIterator<Player>::operator!=((int)&v220, (int)&v218) )
    v30 = (Player *)j_SelectorIterator<Player>::operator*((int)&v220);
    if ( j_CommandItem::operator bool((int)v3 + 116) == 1 )
      v31 = (PlayerInventoryProxy *)j_Player::getSupplies(v30);
      v32 = j_ItemInstance::getId((ItemInstance *)&v234);
      v33 = j_ItemInstance::getAuxValue((ItemInstance *)&v234);
      v34 = j_PlayerInventoryProxy::getItemCount(v31, v32, v33);
      v35 = *((_DWORD *)v3 + 32);
      if ( v35 )
        if ( v34 < 1 )
          v61 = v223;
          if ( v223 != v224 )
            goto LABEL_151;
          v62 = v222;
          v63 = 0;
          v67 = (v223 - (_BYTE *)v222) >> 2;
          if ( !v67 )
            v67 = 1;
          v68 = v67 + ((v223 - (_BYTE *)v222) >> 2);
          v66 = v67 + ((v223 - (_BYTE *)v222) >> 2);
          if ( 0 != v68 >> 30 )
            v66 = 0x3FFFFFFF;
          if ( v68 < v67 )
          if ( v66 )
            if ( v66 >= 0x40000000 )
              sub_21E57F4();
            v63 = (char *)j_operator new(4 * v66);
            goto LABEL_175;
          goto LABEL_176;
        if ( v35 != -1 )
          v34 = *((_DWORD *)v3 + 32);
        v36 = 0;
        if ( *((_DWORD *)v3 + 31) != -1 )
          v36 = 1;
        v37 = j_PlayerInventoryProxy::removeResource(v31, (const ItemInstance *)&v234, v36, 0, v34);
        if ( v34 == v37 )
          v38 = v226;
          if ( v226 == v227 )
            v76 = v225;
            v77 = 0;
            v78 = (v226 - (_BYTE *)v225) >> 2;
            if ( !v78 )
              v78 = 1;
            v79 = v78 + ((v226 - (_BYTE *)v225) >> 2);
            v80 = v78 + ((v226 - (_BYTE *)v225) >> 2);
            if ( 0 != v79 >> 30 )
              v80 = 0x3FFFFFFF;
            if ( v79 < v78 )
            if ( v80 )
            {
              if ( v80 >= 0x40000000 )
                sub_21E57F4();
              v77 = (char *)j_operator new(4 * v80);
              v38 = v226;
              v76 = v225;
            }
            *(_DWORD *)&v77[v38 - v76] = v30;
            v81 = (int)&v77[v38 - v76];
            if ( (v38 - v76) >> 2 )
              j___aeabi_memmove4_0((int)v77, (int)v76);
            v82 = (char *)(v81 + 4);
            if ( v76 )
              j_operator delete(v76);
            v225 = v77;
            v226 = v82;
            v227 = &v77[4 * v80];
            *(_DWORD *)v226 = v30;
            v226 += 4;
          goto LABEL_217;
        (*(void (__fastcall **)(Player *, signed int))(*(_DWORD *)v30 + 1064))(v30, 1);
        sub_21E94B4((void **)&v217, "commands.clear.success");
        j_CommandOutputParameter::CommandOutputParameter((const Entity *)&v212, (int)v30);
        j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v213, v34 - v37);
        v214 = 0;
        v215 = 0;
        v216 = 0;
        v214 = (char *)j_operator new(0x10u);
        v216 = v214 + 16;
        v215 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                         (int)&v212,
                         (int)&v214,
                         (int)v214);
        j_CommandOutput::success((int)v4, &v217, (unsigned __int64 *)&v214);
        v69 = (int)v215;
        v70 = v214;
        if ( v214 != v215 )
          do
            v73 = (int *)(*(_DWORD *)v70 - 12);
            if ( v73 != &dword_28898C0 )
              v71 = (unsigned int *)(*(_DWORD *)v70 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v72 = __ldrex(v71);
                while ( __strex(v72 - 1, v71) );
              }
              else
                v72 = (*v71)--;
              if ( v72 <= 0 )
                j_j_j_j__ZdlPv_9(v73);
            v70 += 8;
          while ( v70 != (char *)v69 );
          v70 = v214;
        if ( v70 )
          j_operator delete(v70);
        v74 = (void *)(v213 - 12);
        if ( (int *)(v213 - 12) != &dword_28898C0 )
          v114 = (unsigned int *)(v213 - 4);
              v115 = __ldrex(v114);
            while ( __strex(v115 - 1, v114) );
            v115 = (*v114)--;
          if ( v115 <= 0 )
            j_j_j_j__ZdlPv_9(v74);
        v75 = (void *)(v212 - 12);
        if ( (int *)(v212 - 12) != &dword_28898C0 )
          v116 = (unsigned int *)(v212 - 4);
              v117 = __ldrex(v116);
            while ( __strex(v117 - 1, v116) );
            v117 = (*v116)--;
          if ( v117 <= 0 )
            j_j_j_j__ZdlPv_9(v75);
        v54 = (void *)(v217 - 12);
        if ( (int *)(v217 - 12) != &dword_28898C0 )
          v55 = (unsigned int *)(v217 - 4);
              v56 = __ldrex(v55);
            while ( __strex(v56 - 1, v55) );
            goto LABEL_259;
LABEL_258:
          v56 = (*v55)--;
          goto LABEL_259;
LABEL_151:
            *(_DWORD *)v61 = v30;
            v223 += 4;
            goto LABEL_217;
          v83 = (v223 - (_BYTE *)v222) >> 2;
          if ( !v83 )
            v83 = 1;
          v84 = v83 + ((v223 - (_BYTE *)v222) >> 2);
          v66 = v83 + ((v223 - (_BYTE *)v222) >> 2);
          if ( 0 != v84 >> 30 )
          if ( v84 < v83 )
        if ( j_CommandOutput::wantsData(v4) == 1 )
          sub_21E94B4((void **)&v211, "playerTest");
          v57 = (int *)(*(int (__fastcall **)(Player *))(*(_DWORD *)v30 + 188))(v30);
          sub_21E8AF4((int *)&v208, v57);
          sub_21E7408((const void **)&v208, " (", 2u);
          j_Util::toString<int,(void *)0,(void *)0>((void **)&v207, v34);
          v58 = *(_QWORD *)(v208 - 12);
          v59 = *(_DWORD *)(v207 - 12) + v58;
          if ( v59 > HIDWORD(v58) && v59 <= *(_DWORD *)(v207 - 8) )
            v60 = sub_21E82D8((const void **)&v207, 0, v208, (_BYTE *)v58);
            v60 = sub_21E72F0((const void **)&v208, (const void **)&v207);
          v209 = (char *)*v60;
          *v60 = &unk_28898CC;
          v93 = sub_21E7408((const void **)&v209, ")", 1u);
          v210 = (char *)*v93;
          *v93 = &unk_28898CC;
          j_CommandOutput::addToResultList(v4, (const char **)&v211, (const char **)&v210);
          v94 = v210 - 12;
          if ( (int *)(v210 - 12) != &dword_28898C0 )
            v118 = (unsigned int *)(v210 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v119 = __ldrex(v118);
              while ( __strex(v119 - 1, v118) );
            else
              v119 = (*v118)--;
            if ( v119 <= 0 )
              j_j_j_j__ZdlPv_9(v94);
          v95 = v209 - 12;
          if ( (int *)(v209 - 12) != &dword_28898C0 )
            v120 = (unsigned int *)(v209 - 4);
                v121 = __ldrex(v120);
              while ( __strex(v121 - 1, v120) );
              v121 = (*v120)--;
            if ( v121 <= 0 )
              j_j_j_j__ZdlPv_9(v95);
          v96 = (void *)(v207 - 12);
          if ( (int *)(v207 - 12) != &dword_28898C0 )
            v122 = (unsigned int *)(v207 - 4);
                v123 = __ldrex(v122);
              while ( __strex(v123 - 1, v122) );
              v123 = (*v122)--;
            if ( v123 <= 0 )
              j_j_j_j__ZdlPv_9(v96);
          v97 = (void *)(v208 - 12);
          if ( (int *)(v208 - 12) != &dword_28898C0 )
            v124 = (unsigned int *)(v208 - 4);
                v125 = __ldrex(v124);
              while ( __strex(v125 - 1, v124) );
              v125 = (*v124)--;
            if ( v125 <= 0 )
              j_j_j_j__ZdlPv_9(v97);
          v98 = (void *)(v211 - 12);
          if ( (int *)(v211 - 12) != &dword_28898C0 )
            v126 = (unsigned int *)(v211 - 4);
                v127 = __ldrex(v126);
              while ( __strex(v127 - 1, v126) );
              v127 = (*v126)--;
            if ( v127 <= 0 )
              j_j_j_j__ZdlPv_9(v98);
        sub_21E94B4((void **)&v206, "commands.clear.testing");
        j_CommandOutputParameter::CommandOutputParameter((const Entity *)&v201, (int)v30);
        j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v202, v34);
        v203 = 0;
        v204 = 0;
        v205 = 0;
        v203 = (char *)j_operator new(0x10u);
        v205 = v203 + 16;
        v204 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                         (int)&v201,
                         (int)&v203,
                         (int)v203);
        j_CommandOutput::success((int)v4, &v206, (unsigned __int64 *)&v203);
        v99 = (int)v204;
        v100 = v203;
        if ( v203 != v204 )
            v103 = (int *)(*(_DWORD *)v100 - 12);
            if ( v103 != &dword_28898C0 )
              v101 = (unsigned int *)(*(_DWORD *)v100 - 4);
                  v102 = __ldrex(v101);
                while ( __strex(v102 - 1, v101) );
                v102 = (*v101)--;
              if ( v102 <= 0 )
                j_j_j_j__ZdlPv_9(v103);
            v100 += 8;
          while ( v100 != (char *)v99 );
          v100 = v203;
        if ( v100 )
          j_operator delete(v100);
        v104 = (void *)(v202 - 12);
        if ( (int *)(v202 - 12) != &dword_28898C0 )
          v110 = (unsigned int *)(v202 - 4);
              v111 = __ldrex(v110);
            while ( __strex(v111 - 1, v110) );
            v111 = (*v110)--;
          if ( v111 <= 0 )
            j_j_j_j__ZdlPv_9(v104);
        v105 = (void *)(v201 - 12);
        if ( (int *)(v201 - 12) != &dword_28898C0 )
          v112 = (unsigned int *)(v201 - 4);
              v113 = __ldrex(v112);
            while ( __strex(v113 - 1, v112) );
            v113 = (*v112)--;
          if ( v113 <= 0 )
            j_j_j_j__ZdlPv_9(v105);
        v54 = (void *)(v206 - 12);
        if ( (int *)(v206 - 12) != &dword_28898C0 )
          v55 = (unsigned int *)(v206 - 4);
          if ( !&pthread_create )
            goto LABEL_258;
          __dmb();
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
    else
      v39 = (PlayerInventoryProxy *)j_Player::getSupplies(v30);
      v40 = j_PlayerInventoryProxy::clearInventory(v39, -1);
      v41 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v30 + 1040))(v30);
      (*(void (__fastcall **)(Player *, signed int))(*(_DWORD *)v30 + 1064))(v30, 1);
      v42 = v41 + v40;
      if ( j_CommandOutput::wantsData(v4) == 1 )
        sub_21E94B4((void **)&v200, "player");
        v43 = (const char **)(*(int (__fastcall **)(Player *))(*(_DWORD *)v30 + 188))(v30);
        j_CommandOutput::addToResultList(v4, (const char **)&v200, v43);
        v44 = (void *)(v200 - 12);
        if ( (int *)(v200 - 12) != &dword_28898C0 )
          v91 = (unsigned int *)(v200 - 4);
              v92 = __ldrex(v91);
            while ( __strex(v92 - 1, v91) );
            v92 = (*v91)--;
          if ( v92 <= 0 )
            j_j_j_j__ZdlPv_9(v44);
        sub_21E94B4((void **)&v199, "itemsRemoved");
        j_Util::toString<int,(void *)0,(void *)0>((void **)&v198, v42);
        j_CommandOutput::addToResultList(v4, (const char **)&v199, (const char **)&v198);
        v45 = (void *)(v198 - 12);
        if ( (int *)(v198 - 12) != &dword_28898C0 )
          v106 = (unsigned int *)(v198 - 4);
              v107 = __ldrex(v106);
            while ( __strex(v107 - 1, v106) );
            v107 = (*v106)--;
          if ( v107 <= 0 )
            j_j_j_j__ZdlPv_9(v45);
        v46 = (void *)(v199 - 12);
        if ( (int *)(v199 - 12) != &dword_28898C0 )
          v108 = (unsigned int *)(v199 - 4);
              v109 = __ldrex(v108);
            while ( __strex(v109 - 1, v108) );
            v109 = (*v108)--;
          if ( v109 <= 0 )
            j_j_j_j__ZdlPv_9(v46);
      if ( v42 < 1 )
        v61 = v223;
        if ( v223 != v224 )
          goto LABEL_151;
        v62 = v222;
        v63 = 0;
        v64 = (v223 - (_BYTE *)v222) >> 2;
        if ( !v64 )
          v64 = 1;
        v65 = v64 + ((v223 - (_BYTE *)v222) >> 2);
        v66 = v64 + ((v223 - (_BYTE *)v222) >> 2);
        if ( 0 != v65 >> 30 )
          v66 = 0x3FFFFFFF;
        if ( v65 < v64 )
        if ( v66 )
          if ( v66 >= 0x40000000 )
            sub_21E57F4();
          v63 = (char *)j_operator new(4 * v66);
LABEL_175:
LABEL_176:
        *(_DWORD *)&v63[v61 - v62] = v30;
        v85 = (int)&v63[v61 - v62];
        if ( (v61 - v62) >> 2 )
          j___aeabi_memmove4_0((int)v63, (int)v62);
        v86 = (char *)(v85 + 4);
        if ( v62 )
          j_operator delete(v62);
        v222 = v63;
        v223 = v86;
        v224 = &v63[4 * v66];
        goto LABEL_217;
      sub_21E94B4((void **)&v197, "commands.clear.success");
      j_CommandOutputParameter::CommandOutputParameter((const Entity *)&v192, (int)v30);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v193, v42);
      v194 = 0;
      v195 = 0;
      v196 = 0;
      v194 = j_operator new(0x10u);
      v196 = (char *)v194 + 16;
      v195 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v192,
                       (int)&v194,
                       (int)v194);
      j_CommandOutput::success((int)v4, &v197, (unsigned __int64 *)&v194);
      v47 = v195;
      v48 = v194;
      if ( v194 != v195 )
          v51 = (int *)(*(_DWORD *)v48 - 12);
          if ( v51 != &dword_28898C0 )
            v49 = (unsigned int *)(*(_DWORD *)v48 - 4);
                v50 = __ldrex(v49);
              while ( __strex(v50 - 1, v49) );
              v50 = (*v49)--;
            if ( v50 <= 0 )
              j_j_j_j__ZdlPv_9(v51);
          v48 = (char *)v48 + 8;
        while ( v48 != v47 );
        v48 = v194;
      if ( v48 )
        j_operator delete(v48);
      v52 = (void *)(v193 - 12);
      if ( (int *)(v193 - 12) != &dword_28898C0 )
        v87 = (unsigned int *)(v193 - 4);
        if ( &pthread_create )
            v88 = __ldrex(v87);
          while ( __strex(v88 - 1, v87) );
        else
          v88 = (*v87)--;
        if ( v88 <= 0 )
          j_j_j_j__ZdlPv_9(v52);
      v53 = (void *)(v192 - 12);
      if ( (int *)(v192 - 12) != &dword_28898C0 )
        v89 = (unsigned int *)(v192 - 4);
            v90 = __ldrex(v89);
          while ( __strex(v90 - 1, v89) );
          v90 = (*v89)--;
        if ( v90 <= 0 )
          j_j_j_j__ZdlPv_9(v53);
      v54 = (void *)(v197 - 12);
      if ( (int *)(v197 - 12) != &dword_28898C0 )
        v55 = (unsigned int *)(v197 - 4);
        if ( !&pthread_create )
          goto LABEL_258;
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
LABEL_259:
        if ( v56 <= 0 )
          j_j_j_j__ZdlPv_9(v54);
LABEL_217:
    j_SelectorIterator<Player>::operator++((int)&v220);
  v144 = v219;
  if ( v219 )
    v145 = (unsigned int *)(v219 + 4);
        v146 = __ldrex(v145);
      while ( __strex(v146 - 1, v145) );
      v146 = (*v145)--;
    if ( v146 == 1 )
      v147 = (unsigned int *)(v144 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v144 + 8))(v144);
          v148 = __ldrex(v147);
        while ( __strex(v148 - 1, v147) );
        v148 = (*v147)--;
      if ( v148 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v144 + 12))(v144);
  v149 = v221;
  if ( v221 )
    v150 = (unsigned int *)(v221 + 4);
        v151 = __ldrex(v150);
      while ( __strex(v151 - 1, v150) );
      v151 = (*v150)--;
    if ( v151 == 1 )
      v152 = (unsigned int *)(v149 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v149 + 8))(v149);
          v153 = __ldrex(v152);
        while ( __strex(v153 - 1, v152) );
        v153 = (*v152)--;
      if ( v153 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v149 + 12))(v149);
  if ( v225 != v226 )
    sub_21E94B4((void **)&v191, "commands.clear.failure");
    j_CommandOutputParameter::CommandOutputParameter((int)&v187, (unsigned __int64 *)&v225);
    v188 = 0;
    v189 = 0;
    v190 = 0;
    v188 = (char *)j_operator new(8u);
    v190 = v188 + 8;
    v189 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                     (int)&v187,
                     (int)&v188,
                     (int)v188);
    j_CommandOutput::error(v4, &v191, (unsigned __int64 *)&v188);
    v154 = (int)v189;
    v155 = v188;
    if ( v188 != v189 )
        v158 = (int *)(*(_DWORD *)v155 - 12);
        if ( v158 != &dword_28898C0 )
          v156 = (unsigned int *)(*(_DWORD *)v155 - 4);
              v157 = __ldrex(v156);
            while ( __strex(v157 - 1, v156) );
            v157 = (*v156)--;
          if ( v157 <= 0 )
            j_j_j_j__ZdlPv_9(v158);
        v155 += 8;
      while ( v155 != (char *)v154 );
      v155 = v188;
    if ( v155 )
      j_operator delete(v155);
    v159 = (void *)(v187 - 12);
    if ( (int *)(v187 - 12) != &dword_28898C0 )
      v174 = (unsigned int *)(v187 - 4);
          v175 = __ldrex(v174);
        while ( __strex(v175 - 1, v174) );
        v175 = (*v174)--;
      if ( v175 <= 0 )
        j_j_j_j__ZdlPv_9(v159);
    v160 = (void *)(v191 - 12);
    if ( (int *)(v191 - 12) != &dword_28898C0 )
      v176 = (unsigned int *)(v191 - 4);
          v177 = __ldrex(v176);
        while ( __strex(v177 - 1, v176) );
        v177 = (*v176)--;
      if ( v177 <= 0 )
        j_j_j_j__ZdlPv_9(v160);
  v161 = v222;
  if ( v222 != v223 )
    sub_21E94B4((void **)&v186, "commands.clear.failure.no.items");
    j_CommandOutputParameter::CommandOutputParameter((int)&v182, (unsigned __int64 *)&v222);
    v183 = 0;
    v184 = 0;
    v185 = 0;
    v183 = (char *)j_operator new(8u);
    v185 = v183 + 8;
    v184 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                     (int)&v182,
                     (int)&v183,
                     (int)v183);
    j_CommandOutput::error(v4, &v186, (unsigned __int64 *)&v183);
    v163 = (int)v184;
    v162 = v183;
    if ( v183 != v184 )
        v166 = (int *)(*(_DWORD *)v162 - 12);
        if ( v166 != &dword_28898C0 )
          v164 = (unsigned int *)(*(_DWORD *)v162 - 4);
              v165 = __ldrex(v164);
            while ( __strex(v165 - 1, v164) );
            v165 = (*v164)--;
          if ( v165 <= 0 )
            j_j_j_j__ZdlPv_9(v166);
        v162 += 8;
      while ( v162 != (char *)v163 );
      v162 = v183;
    if ( v162 )
      j_operator delete(v162);
    v167 = (void *)(v182 - 12);
    if ( (int *)(v182 - 12) != &dword_28898C0 )
      v178 = (unsigned int *)(v182 - 4);
          v179 = __ldrex(v178);
        while ( __strex(v179 - 1, v178) );
        v179 = (*v178)--;
      if ( v179 <= 0 )
        j_j_j_j__ZdlPv_9(v167);
    v168 = (void *)(v186 - 12);
    if ( (int *)(v186 - 12) != &dword_28898C0 )
      v180 = (unsigned int *)(v186 - 4);
          v181 = __ldrex(v180);
        while ( __strex(v181 - 1, v180) );
        v181 = (*v180)--;
      if ( v181 <= 0 )
        j_j_j_j__ZdlPv_9(v168);
    v161 = v222;
  if ( v161 )
    j_operator delete(v161);
  if ( v225 )
    j_operator delete(v225);
LABEL_465:
  v169 = v229;
  if ( v229 )
    v170 = (unsigned int *)(v229 + 4);
        v171 = __ldrex(v170);
      while ( __strex(v171 - 1, v170) );
      v171 = (*v170)--;
    if ( v171 == 1 )
      v172 = (unsigned int *)(v169 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v169 + 8))(v169);
          v173 = __ldrex(v172);
        while ( __strex(v173 - 1, v172) );
        v173 = (*v172)--;
      if ( v173 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v169 + 12))(v169);
LABEL_479:
  if ( v237 )
    j_operator delete(v237);
  if ( v236 )
    j_operator delete(v236);
  if ( v235 )
    (*(void (**)(void))(*(_DWORD *)v235 + 4))();
}
