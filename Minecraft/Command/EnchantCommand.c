

void __fastcall EnchantCommand::~EnchantCommand(EnchantCommand *this)
{
  EnchantCommand::~EnchantCommand(this);
}


void __fastcall EnchantCommand::setup(EnchantCommand *this, CommandRegistry *a2)
{
  EnchantCommand *v2; // r9@1
  signed int v3; // r4@1
  unsigned int *v4; // r2@2
  signed int v5; // r1@4
  int *v6; // r0@10
  char **v7; // r0@10
  char *v8; // r1@11
  char *v9; // r0@13
  void *v10; // r0@15
  __int64 v11; // r2@16
  void *v12; // r0@16
  char v13; // r0@17
  char v14; // r0@20
  char v15; // r0@23
  int v16; // r0@26
  __int64 v17; // r2@26
  void *v18; // r0@26
  void *v19; // r0@27
  void *v20; // r0@28
  char v21; // r0@29
  char v22; // r0@32
  char v23; // r0@35
  int v24; // r0@38
  void *v25; // r0@38
  void *v26; // r0@39
  void *v27; // r0@40
  char **v28; // r4@41
  char **v29; // r6@41
  unsigned int *v30; // r2@43
  signed int v31; // r1@45
  int *v32; // r0@51
  unsigned int *v33; // r2@57
  signed int v34; // r1@59
  int v35; // r2@61
  signed int v36; // r1@63
  int v37; // r2@65
  signed int v38; // r1@67
  int v39; // r2@69
  signed int v40; // r1@71
  int v41; // r2@73
  signed int v42; // r1@75
  unsigned int *v43; // r2@77
  signed int v44; // r1@79
  unsigned int *v45; // r2@81
  signed int v46; // r1@83
  unsigned int *v47; // r2@85
  signed int v48; // r1@87
  char v49; // [sp+1Ch] [bp-164h]@38
  int v50; // [sp+28h] [bp-158h]@38
  char v51; // [sp+44h] [bp-13Ch]@35
  int v52; // [sp+50h] [bp-130h]@39
  char v53; // [sp+6Ch] [bp-114h]@32
  int v54; // [sp+78h] [bp-108h]@40
  __int64 v55; // [sp+94h] [bp-ECh]@29
  char v56; // [sp+9Ch] [bp-E4h]@26
  int v57; // [sp+A8h] [bp-D8h]@26
  char v58; // [sp+C4h] [bp-BCh]@23
  int v59; // [sp+D0h] [bp-B0h]@27
  char v60; // [sp+ECh] [bp-94h]@20
  int v61; // [sp+F8h] [bp-88h]@28
  __int64 v62; // [sp+114h] [bp-6Ch]@17
  int v63; // [sp+120h] [bp-60h]@16
  int v64; // [sp+128h] [bp-58h]@15
  char *v65; // [sp+12Ch] [bp-54h]@10
  int v66; // [sp+130h] [bp-50h]@10
  char **v67; // [sp+134h] [bp-4Ch]@1
  char **v68; // [sp+138h] [bp-48h]@1
  char **v69; // [sp+13Ch] [bp-44h]@1
  __int16 v70; // [sp+140h] [bp-40h]@20
  __int16 v71; // [sp+144h] [bp-3Ch]@23
  __int16 v72; // [sp+148h] [bp-38h]@26
  __int16 v73; // [sp+150h] [bp-30h]@32
  __int16 v74; // [sp+154h] [bp-2Ch]@35
  __int16 v75; // [sp+158h] [bp-28h]@38

  v2 = this;
  v3 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  do
  {
    v6 = (int *)j_Enchant::getStringId(*(Enchant **)(Enchant::mEnchants + 4 * v3));
    sub_21E8AF4((int *)&v65, v6);
    v66 = v3;
    v7 = v68;
    if ( v68 == v69 )
    {
      j_std::vector<std::pair<std::string,Enchant::Type>,std::allocator<std::pair<std::string,Enchant::Type>>>::_M_emplace_back_aux<std::pair<std::string,Enchant::Type>>(
        (unsigned __int64 *)&v67,
        (int)&v65);
      v8 = v65;
    }
    else
      *v68 = v65;
      v8 = (char *)&unk_28898CC;
      v65 = (char *)&unk_28898CC;
      v7[1] = (char *)v3;
      v68 = v7 + 2;
    v9 = v8 - 12;
    if ( (int *)(v8 - 12) != &dword_28898C0 )
      v4 = (unsigned int *)(v8 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 - 1, v4) );
      }
      else
        v5 = (*v4)--;
      if ( v5 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    ++v3;
  }
  while ( v3 < 27 );
  sub_21E94B4((void **)&v64, "Enchant");
  j_CommandRegistry::addEnumValues<Enchant::Type>((int)v2, (int)&v64, (unsigned __int64 *)&v67);
  v10 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v64 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v63, "enchant");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v63, "commands.enchant.description", 1, 0, 0);
  v12 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v35 = v63 - 4;
        v36 = __ldrex((unsigned int *)v11);
        HIDWORD(v11) = v36 - 1;
      while ( __strex(v36 - 1, (unsigned int *)v11) );
      v36 = *(_DWORD *)v11;
      HIDWORD(v11) = *(_DWORD *)v11 - 1;
      *(_DWORD *)v11 = HIDWORD(v11);
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  LODWORD(v11) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v62, 1, v11);
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id) )
    type_id<CommandRegistry,CommandSelector<Player>>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id);
  v70 = type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v60,
    &v70,
    (unsigned int)CommandRegistry::parse<CommandSelector<Player>>,
    "player",
    0,
    20,
    -1);
  v14 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Enchant::Type>(void)::id[0];
  if ( !(v14 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Enchant::Type>(void)::id) )
    type_id<CommandRegistry,Enchant::Type>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Enchant::Type>(void)::id);
  v71 = type_id<CommandRegistry,Enchant::Type>(void)::id;
    (int)&v58,
    &v71,
    (unsigned int)CommandRegistry::parse<Enchant::Type>,
    "enchantmentName",
    116,
  v15 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v15 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v72 = type_id<CommandRegistry,int>(void)::id;
  v16 = j_CommandParameterData::CommandParameterData(
          (int)&v56,
          &v72,
          (unsigned int)CommandRegistry::parse<int>,
          "level",
          0,
          124,
          1,
          -1);
  j_CommandRegistry::registerOverload<EnchantCommand,CommandParameterData,CommandParameterData,CommandParameterData>(
    (int)v2,
    "enchant",
    v62,
    v16);
  v18 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v37 = v57 - 4;
        v38 = __ldrex((unsigned int *)v17);
        HIDWORD(v17) = v38 - 1;
      while ( __strex(v38 - 1, (unsigned int *)v17) );
      v38 = *(_DWORD *)v17;
      HIDWORD(v17) = *(_DWORD *)v17 - 1;
      *(_DWORD *)v17 = HIDWORD(v17);
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v39 = v59 - 4;
        v40 = __ldrex((unsigned int *)v17);
        HIDWORD(v17) = v40 - 1;
      while ( __strex(v40 - 1, (unsigned int *)v17) );
      v40 = *(_DWORD *)v17;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v41 = v61 - 4;
        v42 = __ldrex((unsigned int *)v17);
        HIDWORD(v17) = v42 - 1;
      while ( __strex(v42 - 1, (unsigned int *)v17) );
      v42 = *(_DWORD *)v17;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  LODWORD(v17) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v55, 1, v17);
  v21 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
  if ( !(v21 & 1)
  v73 = type_id<CommandRegistry,CommandSelector<Player>>(void)::id;
    (int)&v53,
    &v73,
  v22 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v22 & 1)
  v74 = type_id<CommandRegistry,int>(void)::id;
    (int)&v51,
    &v74,
    (unsigned int)CommandRegistry::parse<int>,
    "enchantmentId",
    120,
  v23 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v23 & 1)
  v75 = type_id<CommandRegistry,int>(void)::id;
  v24 = j_CommandParameterData::CommandParameterData(
          (int)&v49,
          &v75,
    v55,
    v24);
  v25 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v50 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v52 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v54 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v29 = v68;
  v28 = v67;
  if ( v67 != v68 )
    do
      v32 = (int *)(*v28 - 12);
      if ( v32 != &dword_28898C0 )
        v30 = (unsigned int *)(*v28 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
        }
        else
          v31 = (*v30)--;
        if ( v31 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      v28 += 2;
    while ( v28 != v29 );
    v28 = v67;
  if ( v28 )
    j_operator delete(v28);
}


void __fastcall EnchantCommand::execute(EnchantCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  EnchantCommand::execute(this, a2, a3);
}


void __fastcall EnchantCommand::~EnchantCommand(EnchantCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A038;
  j_CommandSelectorBase::~CommandSelectorBase((EnchantCommand *)((char *)this + 20));
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall EnchantCommand::~EnchantCommand(EnchantCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A038;
  j_CommandSelectorBase::~CommandSelectorBase((EnchantCommand *)((char *)this + 20));
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


void __fastcall EnchantCommand::execute(EnchantCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  EnchantCommand *v3; // r8@1
  CommandOutput *v4; // r10@1
  const CommandOrigin *v6; // r4@1
  char *v11; // r4@4
  int v12; // r6@4
  unsigned int *v13; // r2@6
  signed int v14; // r1@8
  int *v15; // r0@14
  void *v16; // r0@19
  void *v17; // r0@20
  void *v18; // r0@21
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  Command *v21; // r5@26
  int v22; // r0@26
  char *v23; // r6@28
  void **v24; // r4@28
  Player *v25; // r0@30
  Player *v26; // r9@30
  void *v27; // r0@30
  __int64 v29; // r0@33
  void *v30; // r0@36
  char *v31; // r0@37
  __int64 v32; // r2@39
  __int16 v33; // r0@40
  __int64 v34; // r2@40
  __int16 v35; // r0@52
  void *v36; // r0@64
  char *v37; // r0@65
  char *v38; // r7@65
  _BYTE *v39; // r5@67
  char *v40; // r4@67
  unsigned int v41; // r2@67
  unsigned int v42; // r1@69
  unsigned int v43; // r7@69
  char *v44; // r10@75
  void *v45; // r0@76
  char *v46; // r0@77
  Player **v47; // r6@80
  char *v48; // r6@82
  _BYTE *v49; // r6@88
  char *v50; // r4@88
  unsigned int v51; // r2@88
  unsigned int v52; // r1@90
  unsigned int v53; // r5@90
  int v54; // r9@97
  char *v55; // r9@99
  _BYTE *v56; // r6@102
  char *v57; // r4@102
  unsigned int v58; // r2@102
  unsigned int v59; // r1@104
  unsigned int v60; // r5@104
  int v61; // r9@111
  char *v62; // r9@113
  unsigned int *v63; // r2@123
  signed int v64; // r1@125
  unsigned int *v65; // r2@131
  signed int v66; // r1@133
  unsigned int *v67; // r2@135
  signed int v68; // r1@137
  const void **v69; // r4@150
  char *v70; // r4@150
  int v71; // r6@150
  unsigned int *v72; // r2@152
  signed int v73; // r1@154
  int *v74; // r0@160
  void *v75; // r0@165
  void *v76; // r0@166
  char *v77; // r0@167
  unsigned int *v78; // r2@173
  signed int v79; // r1@175
  unsigned int *v80; // r2@177
  signed int v81; // r1@179
  unsigned int *v82; // r2@192
  signed int v83; // r1@194
  unsigned int *v84; // r2@196
  signed int v85; // r1@198
  unsigned int *v86; // r2@200
  signed int v87; // r1@202
  int v88; // r5@204
  unsigned int *v89; // r1@205
  unsigned int v90; // r0@207
  unsigned int *v91; // r4@223
  unsigned int v92; // r0@225
  int v93; // r5@230
  unsigned int *v94; // r1@231
  unsigned int v95; // r0@233
  unsigned int *v96; // r4@237
  unsigned int v97; // r0@239
  char *v98; // r5@245 OVERLAPPED
  char *v99; // r6@245 OVERLAPPED
  unsigned int *v100; // r2@247
  signed int v101; // r1@249
  int *v102; // r0@255
  void *v103; // r0@260
  void *v104; // r0@261
  char *v105; // r5@263 OVERLAPPED
  char *v106; // r6@263 OVERLAPPED
  unsigned int *v107; // r2@265
  signed int v108; // r1@267
  int *v109; // r0@273
  void *v110; // r0@278
  void *v111; // r0@279
  char *v112; // r4@281
  int v113; // r6@281
  unsigned int *v114; // r2@283
  signed int v115; // r1@285
  int *v116; // r0@291
  void *v117; // r0@296
  void *v118; // r0@297
  int v119; // r4@298
  unsigned int *v120; // r1@299
  unsigned int v121; // r0@301
  unsigned int *v122; // r5@305
  unsigned int v123; // r0@307
  unsigned int *v124; // r2@319
  signed int v125; // r1@321
  unsigned int *v126; // r2@323
  signed int v127; // r1@325
  unsigned int *v128; // r2@327
  signed int v129; // r1@329
  unsigned int *v130; // r2@331
  signed int v131; // r1@333
  unsigned int *v132; // r2@335
  signed int v133; // r1@337
  unsigned int *v134; // r2@339
  signed int v135; // r1@341
  CommandOutput *v136; // [sp+0h] [bp-300h]@0
  CommandOutput *v137; // [sp+34h] [bp-2CCh]@1
  int v138; // [sp+38h] [bp-2C8h]@281
  char *v139; // [sp+40h] [bp-2C0h]@281
  char *v140; // [sp+44h] [bp-2BCh]@281
  char *v141; // [sp+48h] [bp-2B8h]@281
  int v142; // [sp+50h] [bp-2B0h]@281
  int v143; // [sp+54h] [bp-2ACh]@263
  char *v144; // [sp+5Ch] [bp-2A4h]@263
  char *v145; // [sp+60h] [bp-2A0h]@263
  char *v146; // [sp+64h] [bp-29Ch]@263
  int v147; // [sp+6Ch] [bp-294h]@263
  int v148; // [sp+70h] [bp-290h]@245
  char *v149; // [sp+78h] [bp-288h]@245
  char *v150; // [sp+7Ch] [bp-284h]@245
  char *v151; // [sp+80h] [bp-280h]@245
  int v152; // [sp+88h] [bp-278h]@245
  int v153; // [sp+90h] [bp-270h]@76
  int v154; // [sp+98h] [bp-268h]@64
  __int16 v155; // [sp+9Dh] [bp-263h]@52
  char v156; // [sp+9Fh] [bp-261h]@52
  int v157; // [sp+A0h] [bp-260h]@52
  char v158; // [sp+A4h] [bp-25Ch]@52
  int v159; // [sp+A8h] [bp-258h]@52
  int v160; // [sp+ACh] [bp-254h]@52
  int v161; // [sp+B0h] [bp-250h]@52
  int v162; // [sp+B8h] [bp-248h]@62
  void *v163; // [sp+D4h] [bp-22Ch]@60
  void *v164; // [sp+E4h] [bp-21Ch]@58
  int v165; // [sp+F8h] [bp-208h]@52
  int v166; // [sp+100h] [bp-200h]@56
  void *v167; // [sp+11Ch] [bp-1E4h]@54
  void *v168; // [sp+12Ch] [bp-1D4h]@52
  __int16 v169; // [sp+145h] [bp-1BBh]@40
  char v170; // [sp+147h] [bp-1B9h]@40
  int v171; // [sp+148h] [bp-1B8h]@40
  char v172; // [sp+14Ch] [bp-1B4h]@40
  int v173; // [sp+150h] [bp-1B0h]@40
  int v174; // [sp+154h] [bp-1ACh]@40
  int v175; // [sp+158h] [bp-1A8h]@40
  int v176; // [sp+160h] [bp-1A0h]@50
  void *v177; // [sp+17Ch] [bp-184h]@48
  void *v178; // [sp+18Ch] [bp-174h]@46
  int v179; // [sp+1A0h] [bp-160h]@40
  int v180; // [sp+1A8h] [bp-158h]@44
  void *v181; // [sp+1C4h] [bp-13Ch]@42
  void *ptr; // [sp+1D4h] [bp-12Ch]@40
  char v183; // [sp+1ECh] [bp-114h]@39
  int v184; // [sp+1FCh] [bp-104h]@28
  int v185; // [sp+200h] [bp-100h]@30
  int v186; // [sp+208h] [bp-F8h]@120
  char v187; // [sp+20Eh] [bp-F2h]@33
  char v188; // [sp+20Fh] [bp-F1h]@30
  void *v189; // [sp+224h] [bp-DCh]@118
  void *v190; // [sp+234h] [bp-CCh]@85
  char v191; // [sp+24Ch] [bp-B4h]@28
  int v192; // [sp+250h] [bp-B0h]@204
  char v193; // [sp+258h] [bp-A8h]@28
  int v194; // [sp+25Ch] [bp-A4h]@230
  int *v195; // [sp+264h] [bp-9Ch]@27
  int v196; // [sp+268h] [bp-98h]@298
  void *v197; // [sp+26Ch] [bp-94h]@27
  char *v198; // [sp+270h] [bp-90h]@27
  char *v199; // [sp+274h] [bp-8Ch]@27
  void *v200; // [sp+278h] [bp-88h]@27
  char *v201; // [sp+27Ch] [bp-84h]@27
  char *v202; // [sp+280h] [bp-80h]@27
  void *v203; // [sp+284h] [bp-7Ch]@27
  char *v204; // [sp+288h] [bp-78h]@27
  char *v205; // [sp+28Ch] [bp-74h]@27
  char *v206; // [sp+290h] [bp-70h]@150
  int v207; // [sp+294h] [bp-6Ch]@150
  int v208; // [sp+29Ch] [bp-64h]@150
  char *v209; // [sp+2A4h] [bp-5Ch]@150
  char *v210; // [sp+2A8h] [bp-58h]@150
  char *v211; // [sp+2ACh] [bp-54h]@150
  int v212; // [sp+2B4h] [bp-4Ch]@150
  int v213; // [sp+2B8h] [bp-48h]@4
  int v214; // [sp+2BCh] [bp-44h]@4
  char *v215; // [sp+2C4h] [bp-3Ch]@4
  char *v216; // [sp+2C8h] [bp-38h]@4
  char *v217; // [sp+2CCh] [bp-34h]@4
  int v218; // [sp+2D4h] [bp-2Ch]@4

  v3 = this;
  v4 = a3;
  _R11 = (ItemInstance *)*((_DWORD *)this + 29);
  v6 = a2;
  v137 = a3;
  if ( _R11 == (ItemInstance *)28 )
    _R11 = (ItemInstance *)*((_DWORD *)this + 30);
  if ( (unsigned int)_R11 < 0x1B )
  {
    v21 = (Command *)*((_DWORD *)this + 31);
    v22 = (*(int (**)(void))(**(_DWORD **)(Enchant::mEnchants + 4 * (_DWORD)_R11) + 20))();
    if ( j_Command::validRange(v21, 1, v22, (int)v4, v136) )
    {
      v203 = 0;
      v204 = 0;
      v205 = 0;
      v201 = 0;
      v202 = 0;
      v197 = 0;
      v198 = 0;
      v199 = 0;
      v200 = 0;
      j_CommandSelector<Player>::results((int)&v195, (EnchantCommand *)((char *)v3 + 20), v6);
      if ( j_Command::checkHasTargets<Player>((__int64 **)&v195, v4) )
      {
        j_CommandSelectorResults<Player>::begin((int)&v193, &v195);
        j_CommandSelectorResults<Player>::end((int)&v191, (int)&v195);
        v23 = &v193;
        v24 = (void **)&v184;
        while ( j_SelectorIterator<Player>::operator!=((int)v23, (int)&v191) )
        {
          v25 = (Player *)j_SelectorIterator<Player>::operator*((int)v23);
          v26 = v25;
          v27 = j_Player::getSelectedItem(v25);
          j_ItemInstance::ItemInstance((ItemInstance *)&v185, (int)v27);
          _ZF = v188 == 0;
          if ( v188 )
            _ZF = v185 == 0;
          if ( _ZF )
            goto LABEL_369;
          v29 = (unsigned int)j_ItemInstance::isNull((ItemInstance *)&v185);
          if ( !v187 )
            HIDWORD(v29) = 1;
          if ( v29 )
          {
LABEL_369:
            sub_21E94B4(v24, "noItemNames");
            j_CommandOutput::addToResultList((int)v4, (const char **)v24, (int)v26);
            v30 = (void *)(v184 - 12);
            if ( (int *)(v184 - 12) != &dword_28898C0 )
            {
              v63 = (unsigned int *)(v184 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v64 = __ldrex(v63);
                while ( __strex(v64 - 1, v63) );
              }
              else
                v64 = (*v63)--;
              if ( v64 <= 0 )
                j_j_j_j__ZdlPv_9(v30);
            }
            v31 = v201;
            if ( v201 == v202 )
              v39 = v200;
              v40 = 0;
              v41 = (v201 - (_BYTE *)v200) >> 2;
              if ( !v41 )
                v41 = 1;
              v42 = v41 + ((v201 - (_BYTE *)v200) >> 2);
              v43 = v41 + ((v201 - (_BYTE *)v200) >> 2);
              if ( 0 != v42 >> 30 )
                v43 = 0x3FFFFFFF;
              if ( v42 < v41 )
              if ( v43 )
                if ( v43 >= 0x40000000 )
                  sub_21E57F4();
                v40 = (char *)j_operator new(4 * v43);
                v31 = v201;
                v39 = v200;
                v44 = v23;
              v47 = (Player **)&v40[v31 - v39];
              *v47 = v26;
              if ( (v31 - v39) >> 2 )
                j___aeabi_memmove4_0((int)v40, (int)v39);
              v48 = (char *)(v47 + 1);
              if ( v39 )
                j_operator delete(v39);
              v200 = v40;
              v201 = v48;
              v23 = v44;
              v202 = &v40[4 * v43];
              v4 = v137;
              v24 = (void **)&v184;
            else
              *(_DWORD *)v201 = v26;
              v201 += 4;
            if ( v190 )
              j_operator delete(v190);
          }
          else
            HIDWORD(v32) = *((_DWORD *)v3 + 31);
            LODWORD(v32) = _R11;
            j_EnchantUtils::canEnchant((EnchantUtils *)&v183, (const ItemInstance *)&v185, v32);
            if ( (v183 & 0xFE) == 2 )
              v171 = 3;
              v172 = -1;
              v33 = v169;
              *(_BYTE *)(((unsigned int)&v171 | 5) + 2) = v170;
              *(_WORD *)((unsigned int)&v171 | 5) = v33;
              v173 = 0;
              v174 = 0;
              j_ItemInstance::ItemInstance((ItemInstance *)&v175, (int)&ItemInstance::EMPTY_ITEM);
              j_ItemInstance::ItemInstance((ItemInstance *)&v179, (int)&v185);
              j_InventoryTransactionManager::addAction((int)v26 + 5152, (int)&v171);
              if ( ptr )
                j_operator delete(ptr);
              if ( v181 )
                j_operator delete(v181);
              if ( v180 )
                (*(void (**)(void))(*(_DWORD *)v180 + 4))();
              v180 = 0;
              if ( v178 )
                j_operator delete(v178);
              if ( v177 )
                j_operator delete(v177);
              if ( v176 )
                (*(void (**)(void))(*(_DWORD *)v176 + 4))();
              v176 = 0;
              LODWORD(v34) = *((_DWORD *)v3 + 31);
              j_EnchantUtils::applyEnchant((EnchantUtils *)&v185, _R11, v34);
              j_Player::setSelectedItem(v26, (const ItemInstance *)&v185);
              v157 = 3;
              v158 = -1;
              v35 = v155;
              *(_BYTE *)(((unsigned int)&v157 | 5) + 2) = v156;
              *(_WORD *)((unsigned int)&v157 | 5) = v35;
              v159 = 0;
              v160 = 1;
              j_ItemInstance::ItemInstance((ItemInstance *)&v161, (int)&v185);
              j_ItemInstance::ItemInstance((ItemInstance *)&v165, (int)&ItemInstance::EMPTY_ITEM);
              j_InventoryTransactionManager::addAction((int)v26 + 5152, (int)&v157);
              if ( v168 )
                j_operator delete(v168);
              if ( v167 )
                j_operator delete(v167);
              if ( v166 )
                (*(void (**)(void))(*(_DWORD *)v166 + 4))();
              v166 = 0;
              if ( v164 )
                j_operator delete(v164);
              if ( v163 )
                j_operator delete(v163);
              if ( v162 )
                (*(void (**)(void))(*(_DWORD *)v162 + 4))();
              v162 = 0;
              sub_21E94B4((void **)&v154, "playerNames");
              j_CommandOutput::addToResultList((int)v4, (const char **)&v154, (int)v26);
              v36 = (void *)(v154 - 12);
              if ( (int *)(v154 - 12) != &dword_28898C0 )
                v67 = (unsigned int *)(v154 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v68 = __ldrex(v67);
                  while ( __strex(v68 - 1, v67) );
                }
                else
                  v68 = (*v67)--;
                if ( v68 <= 0 )
                  j_j_j_j__ZdlPv_9(v36);
              v37 = v204;
              v38 = v23;
              if ( v204 == v205 )
                v56 = v203;
                v57 = 0;
                v58 = (v204 - (_BYTE *)v203) >> 2;
                if ( !v58 )
                  v58 = 1;
                v59 = v58 + ((v204 - (_BYTE *)v203) >> 2);
                v60 = v58 + ((v204 - (_BYTE *)v203) >> 2);
                if ( 0 != v59 >> 30 )
                  v60 = 0x3FFFFFFF;
                if ( v59 < v58 )
                if ( v60 )
                  if ( v60 >= 0x40000000 )
                    sub_21E57F4();
                  v57 = (char *)j_operator new(4 * v60);
                  v37 = v204;
                  v56 = v203;
                *(_DWORD *)&v57[v37 - v56] = v26;
                v61 = (int)&v57[v37 - v56];
                if ( (v37 - v56) >> 2 )
                  j___aeabi_memmove4_0((int)v57, (int)v56);
                v62 = (char *)(v61 + 4);
                if ( v56 )
                  j_operator delete(v56);
                v203 = v57;
                v204 = v62;
                v205 = &v57[4 * v60];
                *(_DWORD *)v204 = v26;
                v204 += 4;
              sub_21E94B4((void **)&v153, "failedNames");
              j_CommandOutput::addToResultList((int)v4, (const char **)&v153, (int)v26);
              v45 = (void *)(v153 - 12);
              if ( (int *)(v153 - 12) != &dword_28898C0 )
                v65 = (unsigned int *)(v153 - 4);
                    v66 = __ldrex(v65);
                  while ( __strex(v66 - 1, v65) );
                  v66 = (*v65)--;
                if ( v66 <= 0 )
                  j_j_j_j__ZdlPv_9(v45);
              v46 = v198;
              if ( v198 == v199 )
                v49 = v197;
                v50 = 0;
                v51 = (v198 - (_BYTE *)v197) >> 2;
                if ( !v51 )
                  v51 = 1;
                v52 = v51 + ((v198 - (_BYTE *)v197) >> 2);
                v53 = v51 + ((v198 - (_BYTE *)v197) >> 2);
                if ( 0 != v52 >> 30 )
                  v53 = 0x3FFFFFFF;
                if ( v52 < v51 )
                if ( v53 )
                  if ( v53 >= 0x40000000 )
                  v50 = (char *)j_operator new(4 * v53);
                  v46 = v198;
                  v49 = v197;
                *(_DWORD *)&v50[v46 - v49] = v26;
                v54 = (int)&v50[v46 - v49];
                if ( (v46 - v49) >> 2 )
                  j___aeabi_memmove4_0((int)v50, (int)v49);
                v55 = (char *)(v54 + 4);
                if ( v49 )
                  j_operator delete(v49);
                v197 = v50;
                v198 = v55;
                v199 = &v50[4 * v53];
                *(_DWORD *)v198 = v26;
                v198 += 4;
            v24 = (void **)&v184;
            v23 = v38;
          if ( v189 )
            j_operator delete(v189);
          if ( v186 )
            (*(void (**)(void))(*(_DWORD *)v186 + 4))();
          j_SelectorIterator<Player>::operator++((int)v23);
        }
        v88 = v192;
        if ( v192 )
          v89 = (unsigned int *)(v192 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v90 = __ldrex(v89);
            while ( __strex(v90 - 1, v89) );
            v90 = (*v89)--;
          if ( v90 == 1 )
            v91 = (unsigned int *)(v88 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v88 + 8))(v88);
            if ( &pthread_create )
              __dmb();
              do
                v92 = __ldrex(v91);
              while ( __strex(v92 - 1, v91) );
              v92 = (*v91)--;
            if ( v92 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v88 + 12))(v88);
        v93 = v194;
        if ( v194 )
          v94 = (unsigned int *)(v194 + 4);
              v95 = __ldrex(v94);
            while ( __strex(v95 - 1, v94) );
            v95 = (*v94)--;
          if ( v95 == 1 )
            v96 = (unsigned int *)(v93 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v93 + 8))(v93);
                v97 = __ldrex(v96);
              while ( __strex(v97 - 1, v96) );
              v97 = (*v96)--;
            if ( v97 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v93 + 12))(v93);
        if ( v200 != v201 )
          sub_21E94B4((void **)&v152, "commands.enchant.noItem");
          j_CommandOutputParameter::CommandOutputParameter((int)&v148, (unsigned __int64 *)&v200);
          v149 = 0;
          v150 = 0;
          v151 = 0;
          v149 = (char *)j_operator new(8u);
          v151 = v149 + 8;
          v150 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                           (int)&v148,
                           (int)&v149,
                           (int)v149);
          j_CommandOutput::error(v4, &v152, (unsigned __int64 *)&v149);
          *(_QWORD *)&v98 = *(_QWORD *)&v149;
          if ( v149 != v150 )
              v102 = (int *)(*(_DWORD *)v98 - 12);
              if ( v102 != &dword_28898C0 )
                v100 = (unsigned int *)(*(_DWORD *)v98 - 4);
                    v101 = __ldrex(v100);
                  while ( __strex(v101 - 1, v100) );
                  v101 = (*v100)--;
                if ( v101 <= 0 )
                  j_j_j_j__ZdlPv_9(v102);
              v98 += 8;
            while ( v98 != v99 );
            v98 = v149;
          if ( v98 )
            j_operator delete(v98);
          v103 = (void *)(v148 - 12);
          if ( (int *)(v148 - 12) != &dword_28898C0 )
            v124 = (unsigned int *)(v148 - 4);
                v125 = __ldrex(v124);
              while ( __strex(v125 - 1, v124) );
              v125 = (*v124)--;
            if ( v125 <= 0 )
              j_j_j_j__ZdlPv_9(v103);
          v104 = (void *)(v152 - 12);
          if ( (int *)(v152 - 12) != &dword_28898C0 )
            v126 = (unsigned int *)(v152 - 4);
                v127 = __ldrex(v126);
              while ( __strex(v127 - 1, v126) );
              v127 = (*v126)--;
            if ( v127 <= 0 )
              j_j_j_j__ZdlPv_9(v104);
        if ( v197 != v198 )
          sub_21E94B4((void **)&v147, "commands.enchant.cantEnchant");
          j_CommandOutputParameter::CommandOutputParameter((int)&v143, (unsigned __int64 *)&v197);
          v144 = 0;
          v145 = 0;
          v146 = 0;
          v144 = (char *)j_operator new(8u);
          v146 = v144 + 8;
          v145 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                           (int)&v143,
                           (int)&v144,
                           (int)v144);
          j_CommandOutput::error(v4, &v147, (unsigned __int64 *)&v144);
          *(_QWORD *)&v105 = *(_QWORD *)&v144;
          if ( v144 != v145 )
              v109 = (int *)(*(_DWORD *)v105 - 12);
              if ( v109 != &dword_28898C0 )
                v107 = (unsigned int *)(*(_DWORD *)v105 - 4);
                    v108 = __ldrex(v107);
                  while ( __strex(v108 - 1, v107) );
                  v108 = (*v107)--;
                if ( v108 <= 0 )
                  j_j_j_j__ZdlPv_9(v109);
              v105 += 8;
            while ( v105 != v106 );
            v105 = v144;
          if ( v105 )
            j_operator delete(v105);
          v110 = (void *)(v143 - 12);
          if ( (int *)(v143 - 12) != &dword_28898C0 )
            v128 = (unsigned int *)(v143 - 4);
                v129 = __ldrex(v128);
              while ( __strex(v129 - 1, v128) );
              v129 = (*v128)--;
            if ( v129 <= 0 )
              j_j_j_j__ZdlPv_9(v110);
          v111 = (void *)(v147 - 12);
          if ( (int *)(v147 - 12) != &dword_28898C0 )
            v130 = (unsigned int *)(v147 - 4);
                v131 = __ldrex(v130);
              while ( __strex(v131 - 1, v130) );
              v131 = (*v130)--;
            if ( v131 <= 0 )
              j_j_j_j__ZdlPv_9(v111);
        if ( v203 != v204 )
          sub_21E94B4((void **)&v142, "commands.enchant.success");
          j_CommandOutputParameter::CommandOutputParameter((int)&v138, (unsigned __int64 *)&v203);
          v139 = 0;
          v140 = 0;
          v141 = 0;
          v139 = (char *)j_operator new(8u);
          v141 = v139 + 8;
          v140 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                           (int)&v138,
                           (int)&v139,
                           (int)v139);
          j_CommandOutput::success((int)v4, &v142, (unsigned __int64 *)&v139);
          v113 = (int)v140;
          v112 = v139;
          if ( v139 != v140 )
              v116 = (int *)(*(_DWORD *)v112 - 12);
              if ( v116 != &dword_28898C0 )
                v114 = (unsigned int *)(*(_DWORD *)v112 - 4);
                    v115 = __ldrex(v114);
                  while ( __strex(v115 - 1, v114) );
                  v115 = (*v114)--;
                if ( v115 <= 0 )
                  j_j_j_j__ZdlPv_9(v116);
              v112 += 8;
            while ( v112 != (char *)v113 );
            v112 = v139;
          if ( v112 )
            j_operator delete(v112);
          v117 = (void *)(v138 - 12);
          if ( (int *)(v138 - 12) != &dword_28898C0 )
            v132 = (unsigned int *)(v138 - 4);
                v133 = __ldrex(v132);
              while ( __strex(v133 - 1, v132) );
              v133 = (*v132)--;
            if ( v133 <= 0 )
              j_j_j_j__ZdlPv_9(v117);
          v118 = (void *)(v142 - 12);
          if ( (int *)(v142 - 12) != &dword_28898C0 )
            v134 = (unsigned int *)(v142 - 4);
                v135 = __ldrex(v134);
              while ( __strex(v135 - 1, v134) );
              v135 = (*v134)--;
            if ( v135 <= 0 )
              j_j_j_j__ZdlPv_9(v118);
      }
      v119 = v196;
      if ( v196 )
        v120 = (unsigned int *)(v196 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v121 = __ldrex(v120);
          while ( __strex(v121 - 1, v120) );
        else
          v121 = (*v120)--;
        if ( v121 == 1 )
          v122 = (unsigned int *)(v119 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v119 + 8))(v119);
              v123 = __ldrex(v122);
            while ( __strex(v123 - 1, v122) );
            v123 = (*v122)--;
          if ( v123 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v119 + 12))(v119);
      if ( v197 )
        j_operator delete(v197);
      if ( v200 )
        j_operator delete(v200);
      if ( v203 )
        j_operator delete(v203);
    }
    else
      sub_21E94B4((void **)&v212, "commands.enchant.invalidLevel");
      v69 = (const void **)j_Enchant::getDescriptionId(*(Enchant **)(Enchant::mEnchants + 4 * (_DWORD)_R11));
      v206 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v206, *((_DWORD *)*v69 - 3) + 1);
      sub_21E7408((const void **)&v206, "%", 1u);
      sub_21E72F0((const void **)&v206, v69);
      j_CommandOutputParameter::CommandOutputParameter(&v207, (int *)&v206);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v208, *((_DWORD *)v3 + 31));
      v209 = 0;
      v210 = 0;
      v211 = 0;
      v209 = (char *)j_operator new(0x10u);
      v211 = v209 + 16;
      v210 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v207,
                       (int)&v209,
                       (int)v209);
      j_CommandOutput::error(v4, &v212, (unsigned __int64 *)&v209);
      v71 = (int)v210;
      v70 = v209;
      if ( v209 != v210 )
        do
          v74 = (int *)(*(_DWORD *)v70 - 12);
          if ( v74 != &dword_28898C0 )
            v72 = (unsigned int *)(*(_DWORD *)v70 - 4);
                v73 = __ldrex(v72);
              while ( __strex(v73 - 1, v72) );
              v73 = (*v72)--;
            if ( v73 <= 0 )
              j_j_j_j__ZdlPv_9(v74);
          v70 += 8;
        while ( v70 != (char *)v71 );
        v70 = v209;
      if ( v70 )
        j_operator delete(v70);
      v75 = (void *)(v208 - 12);
      if ( (int *)(v208 - 12) != &dword_28898C0 )
        v82 = (unsigned int *)(v208 - 4);
            v83 = __ldrex(v82);
          while ( __strex(v83 - 1, v82) );
          v83 = (*v82)--;
        if ( v83 <= 0 )
          j_j_j_j__ZdlPv_9(v75);
      v76 = (void *)(v207 - 12);
      if ( (int *)(v207 - 12) != &dword_28898C0 )
        v84 = (unsigned int *)(v207 - 4);
            v85 = __ldrex(v84);
          while ( __strex(v85 - 1, v84) );
          v85 = (*v84)--;
        if ( v85 <= 0 )
          j_j_j_j__ZdlPv_9(v76);
      v77 = v206 - 12;
      if ( (int *)(v206 - 12) != &dword_28898C0 )
        v86 = (unsigned int *)(v206 - 4);
            v87 = __ldrex(v86);
          while ( __strex(v87 - 1, v86) );
          v87 = (*v86)--;
        if ( v87 <= 0 )
          j_j_j_j__ZdlPv_9(v77);
      v18 = (void *)(v212 - 12);
      if ( (int *)(v212 - 12) != &dword_28898C0 )
        v19 = (unsigned int *)(v212 - 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          goto LABEL_182;
        goto LABEL_181;
  }
  else
    sub_21E94B4((void **)&v218, "commands.enchant.notFound");
    __asm
      VMOV            S0, R11
      VCVT.F32.S32    S0, S0
      VMOV            R1, S0
    j_Util::toString((Util *)&v213, _R1);
    j_CommandOutputParameter::CommandOutputParameter(&v214, &v213);
    v215 = 0;
    v216 = 0;
    v217 = 0;
    v215 = (char *)j_operator new(8u);
    v217 = v215 + 8;
    v216 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                     (int)&v214,
                     (int)&v215,
                     (int)v215);
    j_CommandOutput::error(v4, &v218, (unsigned __int64 *)&v215);
    v12 = (int)v216;
    v11 = v215;
    if ( v215 != v216 )
      do
        v15 = (int *)(*(_DWORD *)v11 - 12);
        if ( v15 != &dword_28898C0 )
          v13 = (unsigned int *)(*(_DWORD *)v11 - 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        v11 += 8;
      while ( v11 != (char *)v12 );
      v11 = v215;
    if ( v11 )
      j_operator delete(v11);
    v16 = (void *)(v214 - 12);
    if ( (int *)(v214 - 12) != &dword_28898C0 )
      v78 = (unsigned int *)(v214 - 4);
      if ( &pthread_create )
        __dmb();
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
      else
        v79 = (*v78)--;
      if ( v79 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    v17 = (void *)(v213 - 12);
    if ( (int *)(v213 - 12) != &dword_28898C0 )
      v80 = (unsigned int *)(v213 - 4);
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        v81 = (*v80)--;
      if ( v81 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    v18 = (void *)(v218 - 12);
    if ( (int *)(v218 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v218 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        goto LABEL_182;
LABEL_181:
      v20 = (*v19)--;
LABEL_182:
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
      return;
}


Command *__fastcall EnchantCommand::EnchantCommand(Command *a1)
{
  Command *v1; // r4@1
  int v2; // r3@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A038;
  j_CommandSelector<Player>::CommandSelector((int)v1 + 20);
  v2 = (int)v1 + 116;
  *(_DWORD *)v2 = 28;
  *(_DWORD *)(v2 + 4) = -1;
  *(_DWORD *)(v2 + 8) = 1;
  return v1;
}


void __fastcall EnchantCommand::setup(EnchantCommand *this, CommandRegistry *a2)
{
  EnchantCommand::setup(this, a2);
}
