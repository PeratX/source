

void __fastcall TestForBlocksCommand::~TestForBlocksCommand(TestForBlocksCommand *this)
{
  TestForBlocksCommand::~TestForBlocksCommand(this);
}


void __fastcall TestForBlocksCommand::setup(TestForBlocksCommand *this, CommandRegistry *a2)
{
  TestForBlocksCommand::setup(this, a2);
}


void __fastcall TestForBlocksCommand::execute(TestForBlocksCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  TestForBlocksCommand::execute(this, a2, a3);
}


void __fastcall TestForBlocksCommand::setup(TestForBlocksCommand *this, CommandRegistry *a2)
{
  TestForBlocksCommand *v2; // r8@1
  void *v3; // r5@1
  int v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r0@16
  void *v9; // r0@17
  void *v10; // r0@18
  __int64 v11; // r2@19
  void *v12; // r0@19
  char v13; // r0@20
  char v14; // r0@23
  char v15; // r0@26
  char v16; // r0@29
  int v17; // r0@32
  void *v18; // r0@32
  void *v19; // r0@33
  void *v20; // r0@34
  void *v21; // r0@35
  unsigned int *v22; // r2@37
  signed int v23; // r1@39
  unsigned int *v24; // r2@41
  signed int v25; // r1@43
  unsigned int *v26; // r2@45
  signed int v27; // r1@47
  int v28; // r2@49
  signed int v29; // r1@51
  unsigned int *v30; // r2@53
  signed int v31; // r1@55
  unsigned int *v32; // r2@57
  signed int v33; // r1@59
  unsigned int *v34; // r2@61
  signed int v35; // r1@63
  unsigned int *v36; // r2@65
  signed int v37; // r1@67
  char v38; // [sp+1Ch] [bp-10Ch]@32
  int v39; // [sp+28h] [bp-100h]@32
  char v40; // [sp+44h] [bp-E4h]@29
  int v41; // [sp+50h] [bp-D8h]@33
  char v42; // [sp+6Ch] [bp-BCh]@26
  int v43; // [sp+78h] [bp-B0h]@34
  char v44; // [sp+94h] [bp-94h]@23
  int v45; // [sp+A0h] [bp-88h]@35
  __int64 v46; // [sp+BCh] [bp-6Ch]@20
  int v47; // [sp+C8h] [bp-60h]@19
  int v48; // [sp+CCh] [bp-5Ch]@1
  int v49; // [sp+D0h] [bp-58h]@1
  int v50; // [sp+D4h] [bp-54h]@1
  signed int v51; // [sp+D8h] [bp-50h]@1
  void *v52; // [sp+DCh] [bp-4Ch]@1
  int v53; // [sp+E0h] [bp-48h]@1
  char *v54; // [sp+E4h] [bp-44h]@1
  int v55; // [sp+ECh] [bp-3Ch]@1
  __int16 v56; // [sp+F8h] [bp-30h]@23
  __int16 v57; // [sp+FCh] [bp-2Ch]@26
  __int16 v58; // [sp+100h] [bp-28h]@29
  __int16 v59; // [sp+104h] [bp-24h]@32

  v2 = this;
  sub_21E94B4((void **)&v55, "TestForBlocksMode");
  sub_21E94B4((void **)&v48, "all");
  v49 = 0;
  sub_21E94B4((void **)&v50, "masked");
  v51 = 1;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v3 = j_operator new(0x10u);
  v52 = v3;
  v54 = (char *)v3 + 16;
  v4 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TestForBlocksCommand::Mode> const*,std::pair<std::string,TestForBlocksCommand::Mode>*>(
         (int)&v48,
         (int)&v52,
         (int)v3);
  v53 = v4;
  j_CommandRegistry::addEnumValues<TestForBlocksCommand::Mode>((int)v2, (int)&v55, (unsigned __int64 *)&v52);
  if ( v3 != (void *)v4 )
  {
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      v3 = (char *)v3 + 8;
    }
    while ( v3 != (void *)v4 );
    v3 = v52;
  }
  if ( v3 )
    j_operator delete(v3);
  v8 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v50 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v48 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v55 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v47, "testforblocks");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v47, "commands.testforblocks.description", 1, 0, 0);
  v12 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v28 = v47 - 4;
        v29 = __ldrex((unsigned int *)v11);
        HIDWORD(v11) = v29 - 1;
      while ( __strex(v29 - 1, (unsigned int *)v11) );
      v29 = *(_DWORD *)v11;
      HIDWORD(v11) = *(_DWORD *)v11 - 1;
      *(_DWORD *)v11 = HIDWORD(v11);
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  LODWORD(v11) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v46, 1, v11);
  v13 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  __dmb();
  if ( !(v13 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id) )
    type_id<CommandRegistry,CommandPosition>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id);
  v56 = type_id<CommandRegistry,CommandPosition>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v44,
    &v56,
    (unsigned int)CommandRegistry::parse<CommandPosition>,
    "begin",
    0,
    20,
    -1);
  v14 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v14 & 1)
  v57 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v42,
    &v57,
    "end",
    36,
  v15 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v15 & 1)
  v58 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v40,
    &v58,
    "destination",
    52,
  v16 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TestForBlocksCommand::Mode>(void)::id[0];
  if ( !(v16 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TestForBlocksCommand::Mode>(void)::id) )
    type_id<CommandRegistry,TestForBlocksCommand::Mode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TestForBlocksCommand::Mode>(void)::id);
  v59 = type_id<CommandRegistry,TestForBlocksCommand::Mode>(void)::id;
  v17 = j_CommandParameterData::CommandParameterData(
          (int)&v38,
          &v59,
          (unsigned int)CommandRegistry::parse<TestForBlocksCommand::Mode>,
          "mode",
          0,
          68,
          1,
          -1);
  j_CommandRegistry::registerOverload<TestForBlocksCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    (int)v2,
    "testforblocks",
    v46,
    v17);
  v18 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v39 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v41 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v43 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v45 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
}


Command *__fastcall TestForBlocksCommand::TestForBlocksCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A250;
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 20));
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 36));
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 52));
  *((_DWORD *)v1 + 17) = 0;
  return v1;
}


void __fastcall TestForBlocksCommand::execute(TestForBlocksCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  const BlockPos *v3; // r8@1
  TestForBlocksCommand *v4; // r6@1
  int v5; // r5@1
  int v6; // r7@1
  int v7; // r4@1
  int v8; // r3@1
  int v9; // r3@3
  int v10; // r3@5
  int v14; // r6@13
  int v16; // r5@17
  int v18; // r7@21
  char v19; // r0@21
  char *v21; // r4@25
  int v22; // r6@25
  void *v23; // r4@27
  void *v24; // r6@27
  unsigned int *v25; // r2@29
  signed int v26; // r1@31
  int *v27; // r0@37
  void *v28; // r0@42
  void *v29; // r4@43
  void *v30; // r4@48
  void *v31; // r6@48
  unsigned int *v32; // r2@50
  signed int v33; // r1@52
  int *v34; // r0@58
  void *v35; // r0@63
  void *v36; // r4@64
  unsigned int *v37; // r2@68
  signed int v38; // r1@70
  unsigned int *v39; // r2@75
  signed int v40; // r1@77
  int *v41; // r0@83
  void *v42; // r0@88
  void *v43; // r0@89
  unsigned int *v44; // r2@91
  signed int v45; // r1@93
  char *v51; // r4@97
  int v52; // r6@97
  unsigned int *v53; // r2@103
  signed int v54; // r1@105
  int *v55; // r0@111
  void *v56; // r0@116
  void **v57; // r7@122
  unsigned int *v62; // r2@126
  signed int v63; // r1@128
  int *v64; // r4@129
  unsigned int *v65; // r2@130
  signed int v66; // r1@132
  unsigned int *v67; // r2@134
  signed int v68; // r1@136
  unsigned int *v69; // r2@138
  signed int v70; // r1@140
  unsigned int *v71; // r2@142
  signed int v72; // r1@144
  unsigned int *v73; // r2@146
  signed int v74; // r1@148
  int v75; // r5@174
  int v76; // r4@177
  int v77; // r0@177
  int v78; // r9@177
  void *v80; // r0@180
  void *v81; // r0@181
  void *v82; // r0@182
  void *v83; // r0@183
  void *v84; // r0@184
  void *v85; // r0@185
  signed int v86; // r4@186
  void *v90; // r4@196
  void *v91; // r6@196
  unsigned int *v92; // r2@198
  signed int v93; // r1@200
  int *v94; // r0@206
  unsigned int *v95; // r2@220
  signed int v96; // r1@222
  unsigned int *v97; // r2@224
  signed int v98; // r1@226
  unsigned int *v99; // r2@228
  signed int v100; // r1@230
  int *v101; // [sp+20h] [bp-258h]@122
  int v102; // [sp+24h] [bp-254h]@96
  BlockPos *v103; // [sp+28h] [bp-250h]@122
  BlockPos *v104; // [sp+2Ch] [bp-24Ch]@122
  CommandOutput *v105; // [sp+30h] [bp-248h]@1
  int v106; // [sp+34h] [bp-244h]@97
  char *v107; // [sp+3Ch] [bp-23Ch]@97
  char *v108; // [sp+40h] [bp-238h]@97
  char *v109; // [sp+44h] [bp-234h]@97
  int v110; // [sp+4Ch] [bp-22Ch]@97
  __int64 v111; // [sp+50h] [bp-228h]@196
  int v112; // [sp+58h] [bp-220h]@196
  int v113; // [sp+60h] [bp-218h]@196
  int v114; // [sp+68h] [bp-210h]@146
  int v115; // [sp+70h] [bp-208h]@142
  int v116; // [sp+78h] [bp-200h]@138
  char v117; // [sp+7Ch] [bp-1FCh]@183
  int v118; // [sp+9Ch] [bp-1DCh]@134
  int v119; // [sp+A4h] [bp-1D4h]@130
  int v120; // [sp+ACh] [bp-1CCh]@122
  char v121; // [sp+B0h] [bp-1C8h]@180
  unsigned __int16 v122; // [sp+CCh] [bp-1ACh]@174
  unsigned __int16 v123; // [sp+CEh] [bp-1AAh]@174
  float v124; // [sp+D0h] [bp-1A8h]@95
  int v130; // [sp+ECh] [bp-18Ch]@95
  int v131; // [sp+F0h] [bp-188h]@95
  int v132; // [sp+F4h] [bp-184h]@95
  int v133; // [sp+F8h] [bp-180h]@95
  int v134; // [sp+FCh] [bp-17Ch]@95
  int v135; // [sp+100h] [bp-178h]@95
  char v136; // [sp+104h] [bp-174h]@95
  int v137; // [sp+108h] [bp-170h]@174
  int v138; // [sp+10Ch] [bp-16Ch]@174
  int v139; // [sp+110h] [bp-168h]@25
  int v140; // [sp+118h] [bp-160h]@25
  char *v141; // [sp+120h] [bp-158h]@25
  char *v142; // [sp+124h] [bp-154h]@25
  char *v143; // [sp+128h] [bp-150h]@25
  int v144; // [sp+130h] [bp-148h]@25
  __int64 v145; // [sp+134h] [bp-144h]@48
  int v146; // [sp+13Ch] [bp-13Ch]@48
  int v147; // [sp+144h] [bp-134h]@48
  char v148; // [sp+148h] [bp-130h]@17
  int v149; // [sp+154h] [bp-124h]@17
  __int64 v150; // [sp+158h] [bp-120h]@27
  int v151; // [sp+160h] [bp-118h]@27
  int v152; // [sp+168h] [bp-110h]@27
  int v153; // [sp+16Ch] [bp-10Ch]@13
  char v154; // [sp+170h] [bp-108h]@13
  float v155; // [sp+17Ch] [bp-FCh]@13
  float v159; // [sp+198h] [bp-E0h]@13
  float v162; // [sp+1A4h] [bp-D4h]@13
  float v163; // [sp+1B0h] [bp-C8h]@13
  char v166; // [sp+1BCh] [bp-BCh]@13
  char v167; // [sp+1C8h] [bp-B0h]@13
  float v168; // [sp+1D4h] [bp-A4h]@13
  int v172; // [sp+1F0h] [bp-88h]@9
  int v173; // [sp+1F4h] [bp-84h]@11
  int v174; // [sp+1F8h] [bp-80h]@13
  int v175; // [sp+1FCh] [bp-7Ch]@3
  int v176; // [sp+200h] [bp-78h]@5
  int v177; // [sp+204h] [bp-74h]@7
  char v178; // [sp+208h] [bp-70h]@1
  char v179; // [sp+214h] [bp-64h]@1
  char v180; // [sp+220h] [bp-58h]@1
  char v181; // [sp+22Ch] [bp-4Ch]@1
  int v182; // [sp+230h] [bp-48h]@3
  int v183; // [sp+234h] [bp-44h]@5
  char v184; // [sp+238h] [bp-40h]@1
  int v185; // [sp+244h] [bp-34h]@1
  int v186; // [sp+248h] [bp-30h]@1
  int v187; // [sp+24Ch] [bp-2Ch]@1

  v3 = a2;
  v4 = this;
  v105 = a3;
  j_CommandOutput::set<bool>((int)a3, "matches", 0);
  j_CommandPosition::getPosition((CommandPosition *)&v184, (TestForBlocksCommand *)((char *)v4 + 20), (int)v3);
  j_BlockPos::BlockPos((int)&v185, (int)&v184);
  j_CommandPosition::getPosition((CommandPosition *)&v180, (TestForBlocksCommand *)((char *)v4 + 36), (int)v3);
  j_BlockPos::BlockPos((int)&v181, (int)&v180);
  j_CommandPosition::getPosition((CommandPosition *)&v178, (TestForBlocksCommand *)((char *)v4 + 52), (int)v3);
  j_BlockPos::BlockPos((int)&v179, (int)&v178);
  v6 = v186;
  v5 = v185;
  v7 = v187;
  v8 = v185;
  if ( *(_DWORD *)&v181 < v185 )
    v8 = *(_DWORD *)&v181;
  v175 = v8;
  v9 = v186;
  if ( v182 < v186 )
    v9 = v182;
  v176 = v9;
  v10 = v187;
  if ( v183 < v187 )
    v10 = v183;
  v177 = v10;
  if ( v185 < *(_DWORD *)&v181 )
    v5 = *(_DWORD *)&v181;
  v172 = v5;
  if ( v186 < v182 )
    v6 = v182;
  v173 = v6;
  if ( v187 < v183 )
    v7 = v183;
  v174 = v7;
  j_Vec3::Vec3((int)&v167, (int)&v175);
  j_Vec3::Vec3((int)&v166, (int)&v172);
  j_AABB::AABB((int)&v168, (int)&v167, (int)&v166);
  j_AABB::getBounds((AABB *)&v163, (int)&v168);
  j_Vec3::Vec3((int)&v159, (int)&v179);
  __asm
  {
    VLDR            S0, [SP,#0x278+var_E0]
    VLDR            S6, [SP,#0x278+var_C8]
    VLDR            S2, [SP,#0x278+var_DC]
    VLDR            S8, [SP,#0x278+var_C4]
    VADD.F32        S0, S6, S0
    VLDR            S4, [SP,#0x278+var_D8]
    VLDR            S10, [SP,#0x278+var_C0]
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VSTR            S0, [SP,#0x278+var_D4]
    VSTR            S2, [SP,#0x278+var_D0]
    VSTR            S4, [SP,#0x278+var_CC]
  }
  j_Vec3::Vec3((int)&v154, (int)&v179);
  j_AABB::AABB((int)&v155, (int)&v154, (int)&v162);
  v14 = *((_DWORD *)v4 + 17);
  j_CommandOrigin::getAreaAt((CommandOrigin *)&v153, v3, (const BlockPos *)&v175, (const BlockPos *)&v172);
  if ( !v153 )
    goto LABEL_246;
    VLDR            S0, [SP,#0x278+var_A0]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
  _R0 = *(_WORD *)(v153 + 32);
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VLDR            S2, [SP,#0x278+var_94]
    VCMPE.F32       S2, S0
  if ( !(_NF ^ _VF) )
LABEL_246:
    sub_21E94B4((void **)&v152, "commands.compare.outOfWorld");
    v150 = 0LL;
    v151 = 0;
    j_CommandOutput::error(v105, &v152, (unsigned __int64 *)&v150);
    v24 = (void *)HIDWORD(v150);
    v23 = (void *)v150;
    if ( (_DWORD)v150 != HIDWORD(v150) )
    {
      do
      {
        v27 = (int *)(*(_DWORD *)v23 - 12);
        if ( v27 != &dword_28898C0 )
        {
          v25 = (unsigned int *)(*(_DWORD *)v23 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
          }
          else
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        }
        v23 = (char *)v23 + 8;
      }
      while ( v23 != v24 );
      v23 = (void *)v150;
    }
    if ( v23 )
      j_operator delete(v23);
    v28 = (void *)(v152 - 12);
    if ( (int *)(v152 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v152 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
      else
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
    goto LABEL_43;
  j_BlockPos::BlockPos((int)&v148, (int)&v162);
  j_CommandOrigin::getAreaAt((CommandOrigin *)&v149, v3, (const BlockPos *)&v179, (const BlockPos *)&v148);
  v16 = v149;
  if ( !v149 )
    goto LABEL_247;
    VLDR            S0, [SP,#0x278+var_F8]
  _R0 = *(_WORD *)(v149 + 32);
    VLDR            S2, [SP,#0x278+var_EC]
LABEL_247:
    sub_21E94B4((void **)&v147, "commands.compare.outOfWorld");
    v145 = 0LL;
    v146 = 0;
    j_CommandOutput::error(v105, &v147, (unsigned __int64 *)&v145);
    v31 = (void *)HIDWORD(v145);
    v30 = (void *)v145;
    if ( (_DWORD)v145 != HIDWORD(v145) )
        v34 = (int *)(*(_DWORD *)v30 - 12);
        if ( v34 != &dword_28898C0 )
          v32 = (unsigned int *)(*(_DWORD *)v30 - 4);
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j__ZdlPv_9(v34);
        v30 = (char *)v30 + 8;
      while ( v30 != v31 );
      v30 = (void *)v145;
    if ( v30 )
      j_operator delete(v30);
    v35 = (void *)(v147 - 12);
    if ( (int *)(v147 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v147 - 4);
      if ( !&pthread_create )
        goto LABEL_216;
      __dmb();
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      goto LABEL_217;
    goto LABEL_64;
  v18 = v153;
  v19 = byte_2825870;
  __dmb();
  if ( !(v19 & 1) && j_j___cxa_guard_acquire_0((unsigned int *)&byte_2825870) )
    dword_282586C = *(_WORD *)(v18 + 32) << 11;
    j_j___cxa_guard_release_0((unsigned int *)&byte_2825870);
    VLDR            S0, [SP,#0x278+var_C8]
    VLDR            S2, [SP,#0x278+var_C4]
    VLDR            S4, [SP,#0x278+var_C0]
    VMUL.F32        S0, S2, S0
    VMUL.F32        S0, S0, S4
    VCVTR.S32.F32   S0, S0
    VMOV            R4, S0
  if ( _R4 > dword_282586C )
    sub_21E94B4((void **)&v144, "commands.compare.tooManyBlocks");
    j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v139, _R4);
    j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v140, dword_282586C);
    v141 = 0;
    v142 = 0;
    v143 = 0;
    v141 = (char *)j_operator new(0x10u);
    v143 = v141 + 16;
    v142 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                     (int)&v139,
                     (int)&v141,
                     (int)v141);
    j_CommandOutput::error(v105, &v144, (unsigned __int64 *)&v141);
    v22 = (int)v142;
    v21 = v141;
    if ( v141 != v142 )
        v41 = (int *)(*(_DWORD *)v21 - 12);
        if ( v41 != &dword_28898C0 )
          v39 = (unsigned int *)(*(_DWORD *)v21 - 4);
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
            v40 = (*v39)--;
          if ( v40 <= 0 )
            j_j_j_j__ZdlPv_9(v41);
        v21 += 8;
      while ( v21 != (char *)v22 );
      v21 = v141;
    if ( v21 )
      j_operator delete(v21);
    v42 = (void *)(v140 - 12);
    if ( (int *)(v140 - 12) != &dword_28898C0 )
      v95 = (unsigned int *)(v140 - 4);
          v96 = __ldrex(v95);
        while ( __strex(v96 - 1, v95) );
        v96 = (*v95)--;
      if ( v96 <= 0 )
        j_j_j_j__ZdlPv_9(v42);
    v43 = (void *)(v139 - 12);
    if ( (int *)(v139 - 12) != &dword_28898C0 )
      v97 = (unsigned int *)(v139 - 4);
          v98 = __ldrex(v97);
        while ( __strex(v98 - 1, v97) );
        v98 = (*v97)--;
      if ( v98 <= 0 )
        j_j_j_j__ZdlPv_9(v43);
    v35 = (void *)(v144 - 12);
    if ( (int *)(v144 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v144 - 4);
    VLDR            S0, [SP,#0x278+var_A4]
    VLDR            S6, [SP,#0x278+var_FC]
    VLDR            S2, [SP,#0x278+var_A0]
    VSUB.F32        S0, S6, S0
    VLDR            S8, [SP,#0x278+var_F8]
    VLDR            S4, [SP,#0x278+var_9C]
    VLDR            S10, [SP,#0x278+var_F4]
    VSUB.F32        S2, S8, S2
    VSUB.F32        S4, S10, S4
    VMOV            R1, S0
    VMOV            R2, S2
    VMOV            R3, S4
  j_BlockPos::BlockPos((BlockPos *)&v136, _R1, _R2, _R3);
  v134 = 0;
  v135 = 0;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  j_AABB::flooredCopy((AABB *)&v124, COERCE_FLOAT(&v168), 0.0, 0);
    VLDR            S0, [SP,#0x278+var_1A0]
    VLDR            S2, [SP,#0x278+var_194]
    VCVTR.S32.F32   S4, S2
    VMOV            R8, S0
    VMOV            R0, S4
  if ( _R8 > _R0 )
    v102 = 0;
    goto LABEL_97;
  v103 = (BlockPos *)(v16 + 8);
  v104 = (BlockPos *)(v18 + 8);
  __asm { VLDR            S0, [SP,#0x278+var_198] }
  v102 = 0;
  v57 = (void **)&v120;
  v101 = &dword_28898C0;
  while ( 1 )
    __asm
      VLDR            S4, [SP,#0x278+var_1A4]
      VCVTR.S32.F32   S6, S0
      VCVTR.S32.F32   S4, S4
      VMOV            R0, S6
      VMOV            R11, S4
    if ( _R11 <= _R0 )
      break;
LABEL_194:
      VCVTR.S32.F32   S4, S2
      VMOV            R1, S4
    _VF = __OFSUB__(_R8, _R1);
    _NF = _R8++ - _R1 < 0;
    if ( !(_NF ^ _VF) )
LABEL_97:
      j_CommandOutput::set<int>((int)v105, "compareCount", v102);
      j_CommandOutput::set<bool>((int)v105, "matches", 1);
      sub_21E94B4((void **)&v110, "commands.compare.success");
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v106, v102);
      v107 = 0;
      v108 = 0;
      v109 = 0;
      v107 = (char *)j_operator new(8u);
      v109 = v107 + 8;
      v108 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v106,
                       (int)&v107,
                       (int)v107);
      j_CommandOutput::success((int)v105, &v110, (unsigned __int64 *)&v107);
      v52 = (int)v108;
      v51 = v107;
      if ( v107 != v108 )
          v55 = (int *)(*(_DWORD *)v51 - 12);
          if ( v55 != &dword_28898C0 )
            v53 = (unsigned int *)(*(_DWORD *)v51 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v54 = __ldrex(v53);
              while ( __strex(v54 - 1, v53) );
            }
            else
              v54 = (*v53)--;
            if ( v54 <= 0 )
              j_j_j_j__ZdlPv_9(v55);
          v51 += 8;
        while ( v51 != (char *)v52 );
        v51 = v107;
      if ( v51 )
        j_operator delete(v51);
      v56 = (void *)(v106 - 12);
      if ( (int *)(v106 - 12) != &dword_28898C0 )
        v99 = (unsigned int *)(v106 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v100 = __ldrex(v99);
          while ( __strex(v100 - 1, v99) );
        else
          v100 = (*v99)--;
        if ( v100 <= 0 )
          j_j_j_j__ZdlPv_9(v56);
      v35 = (void *)(v110 - 12);
      if ( (int *)(v110 - 12) != &dword_28898C0 )
        v44 = (unsigned int *)(v110 - 4);
        if ( !&pthread_create )
          goto LABEL_216;
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        goto LABEL_217;
      goto LABEL_64;
      VLDR            S2, [SP,#0x278+var_1A8]
      VLDR            S4, [SP,#0x278+var_19C]
      VCVTR.S32.F32   S2, S2
      VMOV            R0, S2
    if ( _R0 <= _R1 )
LABEL_192:
      VCVTR.S32.F32   S2, S0
      VMOV            R1, S2
    _VF = __OFSUB__(_R11, _R1);
    _NF = _R11++ - _R1 < 0;
      __asm { VLDR            S2, [SP,#0x278+var_194] }
      goto LABEL_194;
    v75 = _R0;
    v133 = _R0;
    v134 = _R11;
    v135 = _R8;
    v130 = *(_DWORD *)&v136 + _R0;
    v131 = v137 + _R11;
    v132 = v138 + _R8;
    j_BlockSource::getBlockAndData((BlockSource *)&v123, v104, (int)&v133);
    j_BlockSource::getBlockAndData((BlockSource *)&v122, v103, (int)&v130);
    if ( v14 == 1 && *(_BYTE *)(j_FullBlock::getBlock((FullBlock *)&v123) + 4) == *(_BYTE *)(Block::mAir + 4) )
      goto LABEL_190;
    if ( v123 != v122 )
      goto LABEL_196;
    v76 = j_BlockSource::getBlockEntity(v104, (const BlockPos *)&v133);
    v77 = j_BlockSource::getBlockEntity(v103, (const BlockPos *)&v130);
    v78 = v77;
    _ZF = v76 == 0;
    if ( v76 )
      _ZF = v77 == 0;
    if ( !_ZF )
LABEL_189:
    ++v102;
LABEL_190:
    __asm { VLDR            S0, [SP,#0x278+var_19C] }
    _R0 = v75 + 1;
      VCVTR.S32.F32   S0, S0
      VMOV            R1, S0
    if ( v75 >= _R1 )
      __asm { VLDR            S0, [SP,#0x278+var_198] }
      goto LABEL_192;
  j_CompoundTag::CompoundTag((int)&v121);
  (*(void (__fastcall **)(int, char *))(*(_DWORD *)v76 + 12))(v76, &v121);
  sub_21E94B4(v57, "x");
  j_CompoundTag::remove((int)&v121, (const void **)v57);
  v64 = v101;
  v80 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != v101 )
    v62 = (unsigned int *)(v120 - 4);
    if ( &pthread_create )
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v64 = v101;
    else
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v80);
  sub_21E94B4((void **)&v119, "y");
  j_CompoundTag::remove((int)&v121, (const void **)&v119);
  v81 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != v64 )
    v65 = (unsigned int *)(v119 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v81);
  sub_21E94B4((void **)&v118, (const char *)&aRtuz[3]);
  j_CompoundTag::remove((int)&v121, (const void **)&v118);
  v82 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != v64 )
    v67 = (unsigned int *)(v118 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v82);
  j_CompoundTag::CompoundTag((int)&v117);
  (*(void (__fastcall **)(int, char *))(*(_DWORD *)v78 + 12))(v78, &v117);
  sub_21E94B4((void **)&v116, "x");
  j_CompoundTag::remove((int)&v117, (const void **)&v116);
  v83 = (void *)(v116 - 12);
  if ( (int *)(v116 - 12) != v64 )
    v69 = (unsigned int *)(v116 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v83);
  sub_21E94B4((void **)&v115, "y");
  j_CompoundTag::remove((int)&v117, (const void **)&v115);
  v84 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != v64 )
    v71 = (unsigned int *)(v115 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v84);
  sub_21E94B4((void **)&v114, (const char *)&aRtuz[3]);
  j_CompoundTag::remove((int)&v117, (const void **)&v114);
  v101 = v64;
  v85 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != v64 )
    v73 = (unsigned int *)(v114 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v85);
  v86 = j_CompoundTag::equals((CompoundTag *)&v121, (const Tag *)&v117);
  j_CompoundTag::~CompoundTag((CompoundTag *)&v117);
  j_CompoundTag::~CompoundTag((CompoundTag *)&v121);
  if ( v86 )
    goto LABEL_189;
LABEL_196:
  sub_21E94B4((void **)&v113, "commands.compare.failed");
  v111 = 0LL;
  v112 = 0;
  j_CommandOutput::error(v105, &v113, (unsigned __int64 *)&v111);
  v91 = (void *)HIDWORD(v111);
  v90 = (void *)v111;
  if ( (_DWORD)v111 != HIDWORD(v111) )
    do
      v94 = (int *)(*(_DWORD *)v90 - 12);
      if ( v94 != &dword_28898C0 )
        v92 = (unsigned int *)(*(_DWORD *)v90 - 4);
            v93 = __ldrex(v92);
          while ( __strex(v93 - 1, v92) );
          v93 = (*v92)--;
        if ( v93 <= 0 )
          j_j_j_j__ZdlPv_9(v94);
      v90 = (char *)v90 + 8;
    while ( v90 != v91 );
    v90 = (void *)v111;
  if ( v90 )
    j_operator delete(v90);
  v35 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v113 - 4);
LABEL_216:
    v45 = (*v44)--;
LABEL_217:
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
LABEL_64:
  v36 = (void *)v149;
  if ( v149 )
    j_BlockSource::~BlockSource((BlockSource *)(v149 + 8));
    if ( *(_DWORD *)v36 )
      (*(void (**)(void))(**(_DWORD **)v36 + 4))();
    j_operator delete(v36);
LABEL_43:
  v29 = (void *)v153;
  if ( v153 )
    j_BlockSource::~BlockSource((BlockSource *)(v153 + 8));
    if ( *(_DWORD *)v29 )
      (*(void (**)(void))(**(_DWORD **)v29 + 4))();
    j_operator delete(v29);
}


void __fastcall TestForBlocksCommand::~TestForBlocksCommand(TestForBlocksCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}
