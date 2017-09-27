

void __fastcall CloneCommand::convertClonedTag(CloneCommand *this, CompoundTag *a2, BlockEntity *a3, const BlockPos *a4)
{
  CloneCommand *v4; // r4@1
  BlockEntity *v5; // r7@1
  signed int v6; // r6@2
  void *v7; // r0@2
  int v8; // r0@4
  void *v9; // r0@4
  void *v10; // r0@5
  int v11; // r0@6
  void *v12; // r0@6
  void *v13; // r0@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  unsigned int *v18; // r2@21
  signed int v19; // r1@23
  unsigned int *v20; // r2@25
  signed int v21; // r1@27
  unsigned int *v22; // r2@29
  signed int v23; // r1@31
  int v24; // [sp+4h] [bp-3Ch]@6
  int v25; // [sp+Ch] [bp-34h]@6
  int v26; // [sp+14h] [bp-2Ch]@4
  int v27; // [sp+1Ch] [bp-24h]@4
  int v28; // [sp+24h] [bp-1Ch]@2

  v4 = this;
  v5 = a3;
  if ( *(_DWORD *)j_BlockEntity::getType(a2) == 2 )
  {
    sub_21E94B4((void **)&v28, "pairx");
    v6 = j_CompoundTag::contains((int)v4, (const void **)&v28);
    v7 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
    {
      v14 = (unsigned int *)(v28 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    if ( v6 == 1 )
      sub_21E94B4((void **)&v27, "pairx");
      sub_21E94B4((void **)&v26, "pairx");
      v8 = j_CompoundTag::getInt((int)v4, (const void **)&v26);
      j_CompoundTag::putInt((int)v4, (const void **)&v27, *(_DWORD *)v5 + v8);
      v9 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v26 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      v10 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v27 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      sub_21E94B4((void **)&v25, "pairz");
      sub_21E94B4((void **)&v24, "pairz");
      v11 = j_CompoundTag::getInt((int)v4, (const void **)&v24);
      j_CompoundTag::putInt((int)v4, (const void **)&v25, *((_DWORD *)v5 + 2) + v11);
      v12 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
        v20 = (unsigned int *)(v24 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v13 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v25 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
  }
}


void __fastcall CloneCommand::convertClonedTag(CloneCommand *this, CompoundTag *a2, BlockEntity *a3, const BlockPos *a4)
{
  CloneCommand::convertClonedTag(this, a2, a3, a4);
}


void __fastcall CloneCommand::execute(CloneCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  CloneCommand::execute(this, a2, a3);
}


Command *__fastcall CloneCommand::CloneCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_2719FD4;
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 20));
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 36));
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 52));
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = 0;
  *(_QWORD *)((char *)v1 + 76) = -4294967296LL;
  return v1;
}


void __fastcall CloneCommand::~CloneCommand(CloneCommand *this)
{
  CloneCommand::~CloneCommand(this);
}


void __fastcall CloneCommand::~CloneCommand(CloneCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall CloneCommand::setup(CloneCommand *this, CommandRegistry *a2)
{
  CloneCommand::setup(this, a2);
}


void __fastcall CloneCommand::setup(CloneCommand *this, CommandRegistry *a2)
{
  CloneCommand *v2; // r8@1
  void *v3; // r5@1
  int v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r0@16
  void *v9; // r0@17
  void *v10; // r0@18
  void *v11; // r5@19
  int v12; // r6@19
  unsigned int *v13; // r2@21
  signed int v14; // r1@23
  int *v15; // r0@29
  void *v16; // r0@34
  void *v17; // r0@35
  void *v18; // r5@36
  int v19; // r6@36
  unsigned int *v20; // r2@38
  signed int v21; // r1@40
  int *v22; // r0@46
  void *v23; // r0@51
  void *v24; // r0@52
  void *v25; // r0@53
  void *v26; // r0@54
  __int64 v27; // r2@55
  void *v28; // r0@55
  char v29; // r0@56
  char v30; // r0@59
  char v31; // r0@62
  char v32; // r0@65
  char v33; // r0@68
  int v34; // r0@71
  __int64 v35; // r2@71
  void *v36; // r0@71
  void *v37; // r0@72
  void *v38; // r0@73
  void *v39; // r0@74
  void *v40; // r0@75
  char v41; // r0@76
  char v42; // r0@79
  char v43; // r0@82
  char v44; // r0@85
  char v45; // r0@88
  char v46; // r0@91
  char v47; // r0@94
  int v48; // r0@97
  void *v49; // r0@97
  void *v50; // r0@98
  void *v51; // r0@99
  void *v52; // r0@100
  void *v53; // r0@101
  void *v54; // r0@102
  void *v55; // r0@103
  unsigned int *v56; // r2@105
  signed int v57; // r1@107
  unsigned int *v58; // r2@109
  signed int v59; // r1@111
  unsigned int *v60; // r2@113
  signed int v61; // r1@115
  unsigned int *v62; // r2@117
  signed int v63; // r1@119
  unsigned int *v64; // r2@121
  signed int v65; // r1@123
  unsigned int *v66; // r2@125
  signed int v67; // r1@127
  unsigned int *v68; // r2@129
  signed int v69; // r1@131
  unsigned int *v70; // r2@133
  signed int v71; // r1@135
  unsigned int *v72; // r2@137
  signed int v73; // r1@139
  int v74; // r2@141
  signed int v75; // r1@143
  int v76; // r2@145
  signed int v77; // r1@147
  int v78; // r2@149
  signed int v79; // r1@151
  int v80; // r2@153
  signed int v81; // r1@155
  int v82; // r2@157
  signed int v83; // r1@159
  int v84; // r2@161
  signed int v85; // r1@163
  unsigned int *v86; // r2@165
  signed int v87; // r1@167
  unsigned int *v88; // r2@169
  signed int v89; // r1@171
  unsigned int *v90; // r2@173
  signed int v91; // r1@175
  unsigned int *v92; // r2@177
  signed int v93; // r1@179
  unsigned int *v94; // r2@181
  signed int v95; // r1@183
  unsigned int *v96; // r2@185
  signed int v97; // r1@187
  unsigned int *v98; // r2@189
  signed int v99; // r1@191
  char v100; // [sp+1Ch] [bp-2CCh]@97
  int v101; // [sp+28h] [bp-2C0h]@97
  char v102; // [sp+44h] [bp-2A4h]@94
  int v103; // [sp+50h] [bp-298h]@98
  char v104; // [sp+6Ch] [bp-27Ch]@91
  int v105; // [sp+78h] [bp-270h]@99
  char v106; // [sp+94h] [bp-254h]@88
  int v107; // [sp+A0h] [bp-248h]@100
  char v108; // [sp+BCh] [bp-22Ch]@85
  int v109; // [sp+C8h] [bp-220h]@101
  char v110; // [sp+E4h] [bp-204h]@82
  int v111; // [sp+F0h] [bp-1F8h]@102
  char v112; // [sp+10Ch] [bp-1DCh]@79
  int v113; // [sp+118h] [bp-1D0h]@103
  __int64 v114; // [sp+134h] [bp-1B4h]@76
  char v115; // [sp+13Ch] [bp-1ACh]@71
  int v116; // [sp+148h] [bp-1A0h]@71
  char v117; // [sp+164h] [bp-184h]@68
  int v118; // [sp+170h] [bp-178h]@72
  char v119; // [sp+18Ch] [bp-15Ch]@65
  int v120; // [sp+198h] [bp-150h]@73
  char v121; // [sp+1B4h] [bp-134h]@62
  int v122; // [sp+1C0h] [bp-128h]@74
  char v123; // [sp+1DCh] [bp-10Ch]@59
  int v124; // [sp+1E8h] [bp-100h]@75
  __int64 v125; // [sp+204h] [bp-E4h]@56
  int v126; // [sp+210h] [bp-D8h]@55
  int v127; // [sp+214h] [bp-D4h]@36
  int v128; // [sp+218h] [bp-D0h]@36
  int v129; // [sp+21Ch] [bp-CCh]@36
  int v130; // [sp+220h] [bp-C8h]@36
  int v131; // [sp+224h] [bp-C4h]@36
  int v132; // [sp+228h] [bp-C0h]@36
  void *v133; // [sp+22Ch] [bp-BCh]@36
  int v134; // [sp+230h] [bp-B8h]@36
  char *v135; // [sp+234h] [bp-B4h]@36
  int v136; // [sp+23Ch] [bp-ACh]@36
  int v137; // [sp+240h] [bp-A8h]@19
  int v138; // [sp+244h] [bp-A4h]@19
  void *v139; // [sp+248h] [bp-A0h]@19
  int v140; // [sp+24Ch] [bp-9Ch]@19
  char *v141; // [sp+250h] [bp-98h]@19
  int v142; // [sp+258h] [bp-90h]@19
  int v143; // [sp+25Ch] [bp-8Ch]@1
  int v144; // [sp+260h] [bp-88h]@1
  int v145; // [sp+264h] [bp-84h]@1
  signed int v146; // [sp+268h] [bp-80h]@1
  void *v147; // [sp+26Ch] [bp-7Ch]@1
  int v148; // [sp+270h] [bp-78h]@1
  char *v149; // [sp+274h] [bp-74h]@1
  int v150; // [sp+27Ch] [bp-6Ch]@1
  __int16 v151; // [sp+298h] [bp-50h]@62
  __int16 v152; // [sp+29Ch] [bp-4Ch]@65
  __int16 v153; // [sp+2A0h] [bp-48h]@68
  __int16 v154; // [sp+2A4h] [bp-44h]@71
  __int16 v155; // [sp+2A8h] [bp-40h]@59
  __int16 v156; // [sp+2ACh] [bp-3Ch]@82
  __int16 v157; // [sp+2B0h] [bp-38h]@85
  __int16 v158; // [sp+2B4h] [bp-34h]@88
  __int16 v159; // [sp+2B8h] [bp-30h]@91
  unsigned __int16 v160; // [sp+2BCh] [bp-2Ch]@94
  __int16 v161; // [sp+2C0h] [bp-28h]@97

  v2 = this;
  sub_21E94B4((void **)&v150, "MaskMode");
  sub_21E94B4((void **)&v143, "replace");
  v144 = 0;
  sub_21E94B4((void **)&v145, "masked");
  v146 = 2;
  v147 = 0;
  v148 = 0;
  v149 = 0;
  v3 = j_operator new(0x10u);
  v147 = v3;
  v149 = (char *)v3 + 16;
  v4 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,CloneCommand::MaskMode> const*,std::pair<std::string,CloneCommand::MaskMode>*>(
         (int)&v143,
         (int)&v147,
         (int)v3);
  v148 = v4;
  j_CommandRegistry::addEnumValues<CloneCommand::MaskMode>((int)v2, (int)&v150, (unsigned __int64 *)&v147);
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
    v3 = v147;
  }
  if ( v3 )
    j_operator delete(v3);
  v8 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v145 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
    else
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v143 - 12);
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v143 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v150 - 12);
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v150 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v142, "MaskModeFiltered");
  sub_21E94B4((void **)&v137, "filtered");
  v138 = 1;
  v139 = 0;
  v140 = 0;
  v141 = 0;
  v11 = j_operator new(8u);
  v139 = v11;
  v141 = (char *)v11 + 8;
  v12 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,CloneCommand::MaskMode> const*,std::pair<std::string,CloneCommand::MaskMode>*>(
          (int)&v137,
          (int)&v139,
          (int)v11);
  v140 = v12;
  j_CommandRegistry::addEnumValues<CloneCommand::MaskMode>((int)v2, (int)&v142, (unsigned __int64 *)&v139);
  if ( v11 != (void *)v12 )
      v15 = (int *)(*(_DWORD *)v11 - 12);
      if ( v15 != &dword_28898C0 )
        v13 = (unsigned int *)(*(_DWORD *)v11 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v11 = (char *)v11 + 8;
    while ( v11 != (void *)v12 );
    v11 = v139;
  if ( v11 )
    j_operator delete(v11);
  v16 = (void *)(v137 - 12);
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v137 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v142 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v136, "CloneMode");
  sub_21E94B4((void **)&v127, "normal");
  v128 = 0;
  sub_21E94B4((void **)&v129, "force");
  v130 = 1;
  sub_21E94B4((void **)&v131, "move");
  v132 = 2;
  v133 = 0;
  v134 = 0;
  v135 = 0;
  v18 = j_operator new(0x18u);
  v133 = v18;
  v135 = (char *)v18 + 24;
  v19 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,CloneCommand::CloneMode> const*,std::pair<std::string,CloneCommand::CloneMode>*>(
          (int)&v127,
          (int)&v133,
          (int)v18);
  v134 = v19;
  j_CommandRegistry::addEnumValues<CloneCommand::CloneMode>((int)v2, (int)&v136, (unsigned __int64 *)&v133);
  if ( v18 != (void *)v19 )
      v22 = (int *)(*(_DWORD *)v18 - 12);
      if ( v22 != &dword_28898C0 )
        v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v18 = (char *)v18 + 8;
    while ( v18 != (void *)v19 );
    v18 = v133;
  if ( v18 )
    j_operator delete(v18);
  v23 = (void *)(v131 - 12);
  if ( (int *)(v131 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v131 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v129 - 12);
  if ( (int *)(v129 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v129 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v127 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v136 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v126, "clone");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v126, "commands.clone.description", 1, 0, 0);
  v28 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v74 = v126 - 4;
        v75 = __ldrex((unsigned int *)v27);
        HIDWORD(v27) = v75 - 1;
      while ( __strex(v75 - 1, (unsigned int *)v27) );
      v75 = *(_DWORD *)v27;
      HIDWORD(v27) = *(_DWORD *)v27 - 1;
      *(_DWORD *)v27 = HIDWORD(v27);
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  LODWORD(v27) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v125, 1, v27);
  v29 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  __dmb();
  if ( !(v29 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id) )
    type_id<CommandRegistry,CommandPosition>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id);
  v155 = type_id<CommandRegistry,CommandPosition>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v123,
    &v155,
    (unsigned int)CommandRegistry::parse<CommandPosition>,
    "begin",
    0,
    20,
    -1);
  v30 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v30 & 1)
  v151 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v121,
    &v151,
    "end",
    36,
  v31 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v31 & 1)
  v152 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v119,
    &v152,
    "destination",
    52,
  v32 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CloneCommand::MaskMode>(void)::id;
  if ( !(v32 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CloneCommand::MaskMode>(void)::id) )
    type_id<CommandRegistry,CloneCommand::MaskMode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CloneCommand::MaskMode>(void)::id);
  v153 = type_id<CommandRegistry,CloneCommand::MaskMode>(void)::id;
    (int)&v117,
    &v153,
    (unsigned int)CommandRegistry::parse<CloneCommand::MaskMode>,
    "maskMode",
    1,
    (int)"MaskMode",
    68,
  v33 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CloneCommand::CloneMode>(void)::id[0];
  if ( !(v33 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CloneCommand::CloneMode>(void)::id) )
    type_id<CommandRegistry,CloneCommand::CloneMode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CloneCommand::CloneMode>(void)::id);
  v154 = type_id<CommandRegistry,CloneCommand::CloneMode>(void)::id;
  v34 = j_CommandParameterData::CommandParameterData(
          (int)&v115,
          &v154,
          (unsigned int)CommandRegistry::parse<CloneCommand::CloneMode>,
          "cloneMode",
          0,
          72,
          1,
          -1);
  j_CommandRegistry::registerOverload<CloneCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    (int)v2,
    "clone",
    v125,
    v34);
  v36 = (void *)(v116 - 12);
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v76 = v116 - 4;
        v77 = __ldrex((unsigned int *)v35);
        HIDWORD(v35) = v77 - 1;
      while ( __strex(v77 - 1, (unsigned int *)v35) );
      v77 = *(_DWORD *)v35;
      HIDWORD(v35) = *(_DWORD *)v35 - 1;
      *(_DWORD *)v35 = HIDWORD(v35);
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v78 = v118 - 4;
        v79 = __ldrex((unsigned int *)v35);
        HIDWORD(v35) = v79 - 1;
      while ( __strex(v79 - 1, (unsigned int *)v35) );
      v79 = *(_DWORD *)v35;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v38 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v80 = v120 - 4;
        v81 = __ldrex((unsigned int *)v35);
        HIDWORD(v35) = v81 - 1;
      while ( __strex(v81 - 1, (unsigned int *)v35) );
      v81 = *(_DWORD *)v35;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  v39 = (void *)(v122 - 12);
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v82 = v122 - 4;
        v83 = __ldrex((unsigned int *)v35);
        HIDWORD(v35) = v83 - 1;
      while ( __strex(v83 - 1, (unsigned int *)v35) );
      v83 = *(_DWORD *)v35;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v84 = v124 - 4;
        v85 = __ldrex((unsigned int *)v35);
        HIDWORD(v35) = v85 - 1;
      while ( __strex(v85 - 1, (unsigned int *)v35) );
      v85 = *(_DWORD *)v35;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  LODWORD(v35) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v114, 1, v35);
  v41 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v41 & 1)
    (int)&v112,
  v42 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v42 & 1)
  v156 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v110,
    &v156,
  v43 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v43 & 1)
  v157 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v108,
    &v157,
  v44 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CloneCommand::MaskMode>(void)::id;
  if ( !(v44 & 1)
  v158 = type_id<CommandRegistry,CloneCommand::MaskMode>(void)::id;
    (int)&v106,
    &v158,
    (int)"MaskModeFiltered",
  v45 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CloneCommand::CloneMode>(void)::id[0];
  if ( !(v45 & 1)
  v159 = type_id<CommandRegistry,CloneCommand::CloneMode>(void)::id;
    (int)&v104,
    &v159,
    (unsigned int)CommandRegistry::parse<CloneCommand::CloneMode>,
    "cloneMode",
    72,
  v46 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id;
  if ( !(v46 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id) )
    type_id<CommandRegistry,Block const*>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id);
  v160 = type_id<CommandRegistry,Block const*>(void)::id[0];
    (int)&v102,
    &v160,
    (unsigned int)CommandRegistry::parse<Block const*>,
    "tileName",
    76,
  v47 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v47 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v161 = type_id<CommandRegistry,int>(void)::id;
  v48 = j_CommandParameterData::CommandParameterData(
          (int)&v100,
          &v161,
          (unsigned int)CommandRegistry::parse<int>,
          "tileData",
          80,
  j_CommandRegistry::registerOverload<CloneCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    v114,
    v48);
  v49 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v101 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  v50 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v103 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  v51 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v105 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v51);
  v52 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v107 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  v53 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v109 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  v54 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v111 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  v55 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v113 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
}


void __fastcall CloneCommand::execute(CloneCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  CloneCommand *v3; // r9@1
  const BlockPos *v4; // r6@1
  CommandOutput *v5; // r8@1
  int v6; // r4@1
  int v7; // r7@1
  int v8; // r5@1
  int v9; // r3@1
  int v10; // r3@3
  int v11; // r3@5
  CommandOutput *v12; // r3@13
  Command *v13; // r0@13
  signed int v17; // r5@15
  void *v18; // r4@19
  void *v19; // r6@19
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  int *v22; // r0@29
  void *v23; // r0@34
  unsigned int *v24; // r2@35
  signed int v25; // r1@37
  int v27; // r7@44
  int v29; // r4@48
  char v30; // r0@48
  void *v32; // r4@52
  void *v33; // r6@52
  void *v34; // r4@54
  void *v35; // r6@54
  unsigned int *v36; // r2@56
  signed int v37; // r1@58
  int *v38; // r0@64
  void *v39; // r0@69
  void *v40; // r4@70
  void *v41; // r4@75
  void *v42; // r6@75
  unsigned int *v43; // r2@77
  signed int v44; // r1@79
  int *v45; // r0@85
  void *v46; // r0@90
  void *v47; // r4@91
  unsigned int *v48; // r2@95
  signed int v49; // r1@97
  unsigned int *v50; // r2@103
  signed int v51; // r1@105
  int *v52; // r0@111
  void *v53; // r0@116
  void *v54; // r0@117
  void *v55; // r0@118
  void *v56; // r0@119
  unsigned int *v57; // r2@121
  signed int v58; // r1@123
  int v59; // r1@125
  signed int v60; // r1@126
  int v61; // r6@141
  int v71; // r7@146
  int v72; // r4@146
  int v73; // r11@146
  CompoundTag *v75; // r6@154
  const BlockPos *v76; // r3@155
  int *v77; // r9@155
  unsigned __int16 v78; // r0@156
  Block *v79; // r0@157
  int v80; // r0@158
  int v81; // r1@158
  void *v82; // r4@159
  int v83; // r10@161
  int v84; // r0@161
  int v85; // r6@161
  unsigned int v86; // r1@161
  unsigned int v87; // r2@163
  unsigned int v88; // r0@163
  char *v89; // r2@168
  unsigned __int16 v90; // r0@168
  int v91; // r1@168
  int v92; // r7@168
  int *v93; // r4@168
  int v94; // r0@169
  void *v95; // r4@176
  void *v96; // r10@178
  int v97; // r0@178
  int v98; // r6@178
  unsigned int v99; // r1@178
  unsigned int v100; // r2@180
  unsigned int v101; // r0@180
  int v102; // r9@185
  void *v103; // r0@185
  void *v104; // r7@185
  int v105; // r1@185
  void *i; // r1@185
  int v107; // r2@186
  void *v108; // r4@187
  void *v110; // r10@193
  int v111; // r0@193
  int v112; // r6@193
  unsigned int v113; // r1@193
  unsigned int v114; // r2@195
  unsigned int v115; // r0@195
  int v116; // r9@200
  void *v117; // r0@200
  void *v118; // r7@200
  int v119; // r1@200
  void *j; // r1@200
  int v121; // r2@201
  void *v122; // r4@202
  void *v123; // r0@205
  int v124; // r2@213
  int v126; // r2@215
  BlockPos *v128; // r4@217
  BlockPos *v129; // r6@217
  int v130; // r10@219
  int v131; // r4@219
  int v132; // r6@219
  int v133; // r7@219
  BlockSource *v134; // r5@219
  int v135; // r0@221
  unsigned int *v136; // r2@229
  signed int v137; // r1@231
  unsigned int *v138; // r2@233
  signed int v139; // r1@235
  unsigned int *v140; // r2@237
  signed int v141; // r1@239
  unsigned int *v142; // r2@241
  signed int v143; // r1@243
  unsigned int *v144; // r2@261
  signed int v145; // r1@263
  unsigned int *v146; // r2@265
  signed int v147; // r1@267
  unsigned int *v148; // r2@269
  signed int v149; // r1@271
  BlockEntity *v150; // r11@285
  bool v151; // zf@285
  void *v152; // r0@288
  int v153; // r6@289
  void *v154; // r0@289
  void *v155; // r0@290
  char *v156; // r4@294
  int v157; // r6@294
  unsigned int *v158; // r2@296
  signed int v159; // r1@298
  int *v160; // r0@304
  void *v161; // r0@309
  void *v162; // r0@310
  unsigned int *v163; // r2@311
  signed int v164; // r1@313
  void *v165; // r4@315
  void *v166; // r6@315
  unsigned int *v167; // r2@317
  signed int v168; // r1@319
  int *v169; // r0@325
  __int64 v170; // r4@331
  int v171; // r0@332
  __int64 v172; // r4@340
  int v173; // r0@341
  __int64 v174; // r4@347
  int v175; // r0@348
  __int64 v176; // r4@354
  int v177; // r0@355
  unsigned int *v178; // r2@361
  signed int v179; // r1@363
  int v180; // [sp+14h] [bp-240h]@168
  int v181; // [sp+18h] [bp-23Ch]@139
  signed int v182; // [sp+20h] [bp-234h]@132
  int v183; // [sp+24h] [bp-230h]@132
  int v184; // [sp+28h] [bp-22Ch]@142
  unsigned int v185; // [sp+2Ch] [bp-228h]@144
  int v186; // [sp+30h] [bp-224h]@146
  int *v187; // [sp+30h] [bp-224h]@219
  BlockPos *v188; // [sp+34h] [bp-220h]@142
  int v189; // [sp+38h] [bp-21Ch]@294
  char *v190; // [sp+40h] [bp-214h]@294
  char *v191; // [sp+44h] [bp-210h]@294
  char *v192; // [sp+48h] [bp-20Ch]@294
  int v193; // [sp+50h] [bp-204h]@294
  __int64 v194; // [sp+54h] [bp-200h]@315
  int v195; // [sp+5Ch] [bp-1F8h]@315
  int v196; // [sp+64h] [bp-1F0h]@315
  char v197; // [sp+68h] [bp-1ECh]@292
  char v198; // [sp+69h] [bp-1EBh]@292
  int v199; // [sp+70h] [bp-1E4h]@269
  int v200; // [sp+78h] [bp-1DCh]@265
  int v201; // [sp+80h] [bp-1D4h]@261
  char v202; // [sp+84h] [bp-1D0h]@221
  char v203; // [sp+85h] [bp-1CFh]@221
  __int64 v204; // [sp+88h] [bp-1CCh]@219
  int v205; // [sp+90h] [bp-1C4h]@219
  char v206; // [sp+94h] [bp-1C0h]@218
  char v207; // [sp+98h] [bp-1BCh]@155
  unsigned __int16 v208; // [sp+B6h] [bp-19Eh]@146
  int v209; // [sp+B8h] [bp-19Ch]@146
  unsigned int v210; // [sp+BCh] [bp-198h]@146
  int v211; // [sp+C0h] [bp-194h]@146
  unsigned __int64 v212; // [sp+C4h] [bp-190h]@146
  int v213; // [sp+CCh] [bp-188h]@146
  int v214; // [sp+D0h] [bp-184h]@142
  int v215; // [sp+D4h] [bp-180h]@146
  int v216; // [sp+D8h] [bp-17Ch]@146
  void *ptr; // [sp+DCh] [bp-178h]@139
  void *v218; // [sp+E0h] [bp-174h]@139
  char *v219; // [sp+E4h] [bp-170h]@139
  int v220; // [sp+E8h] [bp-16Ch]@139
  int v221; // [sp+ECh] [bp-168h]@139
  int v222; // [sp+F0h] [bp-164h]@139
  int *v223; // [sp+F4h] [bp-160h]@139
  int *v224; // [sp+F8h] [bp-15Ch]@139
  int *v225; // [sp+FCh] [bp-158h]@139
  int v226; // [sp+100h] [bp-154h]@139
  int v227; // [sp+104h] [bp-150h]@139
  int v228; // [sp+108h] [bp-14Ch]@139
  int v229; // [sp+10Ch] [bp-148h]@52
  int v230; // [sp+110h] [bp-144h]@52
  int v231; // [sp+114h] [bp-140h]@52
  int v232; // [sp+11Ch] [bp-138h]@52
  void *v233; // [sp+124h] [bp-130h]@52
  void *v234; // [sp+128h] [bp-12Ch]@52
  char *v235; // [sp+12Ch] [bp-128h]@52
  int v236; // [sp+134h] [bp-120h]@52
  __int64 v237; // [sp+138h] [bp-11Ch]@75
  int v238; // [sp+140h] [bp-114h]@75
  int v239; // [sp+148h] [bp-10Ch]@75
  char v240; // [sp+14Ch] [bp-108h]@44
  int v241; // [sp+158h] [bp-FCh]@44
  __int64 v242; // [sp+15Ch] [bp-F8h]@54
  int v243; // [sp+164h] [bp-F0h]@54
  int v244; // [sp+16Ch] [bp-E8h]@54
  int v245; // [sp+170h] [bp-E4h]@40
  __int64 v246; // [sp+174h] [bp-E0h]@19
  int v247; // [sp+17Ch] [bp-D8h]@19
  int v248; // [sp+184h] [bp-D0h]@19
  char v249; // [sp+188h] [bp-CCh]@15
  float v250; // [sp+194h] [bp-C0h]@15
  float v254; // [sp+1B0h] [bp-A4h]@15
  float v257; // [sp+1BCh] [bp-98h]@15
  float v258; // [sp+1C8h] [bp-8Ch]@15
  char v261; // [sp+1D4h] [bp-80h]@15
  int v262; // [sp+1E0h] [bp-74h]@15
  float v263; // [sp+1ECh] [bp-68h]@15
  unsigned __int8 v269; // [sp+20Bh] [bp-49h]@13
  int v270; // [sp+20Ch] [bp-48h]@13
  char v271; // [sp+218h] [bp-3Ch]@13
  int v272; // [sp+224h] [bp-30h]@9
  int v273; // [sp+228h] [bp-2Ch]@11
  int v274; // [sp+22Ch] [bp-28h]@13
  int v275; // [sp+230h] [bp-24h]@3
  int v276; // [sp+234h] [bp-20h]@5
  int v277; // [sp+238h] [bp-1Ch]@7
  int v278; // [sp+23Ch] [bp-18h]@1
  char v279; // [sp+248h] [bp-Ch]@1
  int v280; // [sp+24Ch] [bp-8h]@3
  int v281; // [sp+250h] [bp-4h]@5
  int v282; // [sp+254h] [bp+0h]@1
  int v283; // [sp+260h] [bp+Ch]@1
  int v284; // [sp+264h] [bp+10h]@1
  int v285; // [sp+268h] [bp+14h]@1
  unsigned __int64 v286; // [sp+26Ch] [bp+18h]@207
  int v287; // [sp+274h] [bp+20h]@207

  v3 = this;
  v4 = a2;
  v5 = a3;
  j_CommandPosition::getPosition((CommandPosition *)&v282, (CloneCommand *)((char *)this + 20), (int)a2);
  j_BlockPos::BlockPos((int)&v283, (int)&v282);
  j_CommandPosition::getPosition((CommandPosition *)&v278, (CloneCommand *)((char *)v3 + 36), (int)v4);
  j_BlockPos::BlockPos((int)&v279, (int)&v278);
  v7 = v284;
  v6 = v283;
  v8 = v285;
  v9 = v283;
  if ( *(_DWORD *)&v279 < v283 )
    v9 = *(_DWORD *)&v279;
  v275 = v9;
  v10 = v284;
  if ( v280 < v284 )
    v10 = v280;
  v276 = v10;
  v11 = v285;
  if ( v281 < v285 )
    v11 = v281;
  v277 = v11;
  if ( v283 < *(_DWORD *)&v279 )
    v6 = *(_DWORD *)&v279;
  v272 = v6;
  if ( v284 < v280 )
    v7 = v280;
  v273 = v7;
  if ( v285 < v281 )
    v8 = v281;
  v274 = v8;
  j_CommandPosition::getPosition((CommandPosition *)&v270, (CloneCommand *)((char *)v3 + 52), (int)v4);
  j_BlockPos::BlockPos((int)&v271, (int)&v270);
  v269 = -1;
  v13 = (Command *)*((_DWORD *)v3 + 20);
  if ( v13 == (Command *)-1 || j_Command::validData(v13, (int)&v269, (unsigned __int8 *)v5, v12) == 1 )
  {
    j_Vec3::Vec3((int)&v262, (int)&v275);
    j_Vec3::Vec3((int)&v261, (int)&v272);
    j_AABB::AABB((int)&v263, (int)&v262, (int)&v261);
    j_AABB::getBounds((AABB *)&v258, (int)&v263);
    j_Vec3::Vec3((int)&v254, (int)&v271);
    __asm
    {
      VLDR            S0, [SP,#0x27C+var_CC]
      VLDR            S6, [SP,#0x27C+var_B4]
      VLDR            S2, [SP,#0x27C+var_C8]
      VLDR            S8, [SP,#0x27C+var_B0]
      VADD.F32        S0, S6, S0
      VLDR            S4, [SP,#0x27C+var_C4]
      VLDR            S10, [SP,#0x27C+var_AC]
      VADD.F32        S2, S8, S2
      VADD.F32        S4, S10, S4
      VSTR            S0, [SP,#0x27C+var_C0]
      VSTR            S2, [SP,#0x27C+var_BC]
      VSTR            S4, [SP,#0x27C+var_B8]
    }
    j_Vec3::Vec3((int)&v249, (int)&v271);
    j_AABB::AABB((int)&v250, (int)&v249, (int)&v257);
    v17 = *((_DWORD *)v3 + 18);
    if ( v17 == 1 )
      v17 = 1;
LABEL_40:
      j_CommandOrigin::getAreaAt((CommandOrigin *)&v245, v4, (const BlockPos *)&v275, (const BlockPos *)&v272);
      if ( !v245 )
        goto LABEL_380;
      __asm
      {
        VLDR            S0, [SP,#0x27C+var_8C]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
      _R0 = *(_WORD *)(v245 + 32);
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
        VLDR            S2, [SP,#0x27C+var_80]
        VCMPE.F32       S2, S0
      if ( !(_NF ^ _VF) )
LABEL_380:
        sub_21E94B4((void **)&v244, "commands.clone.outOfWorld");
        v242 = 0LL;
        v243 = 0;
        j_CommandOutput::error(v5, &v244, (unsigned __int64 *)&v242);
        v35 = (void *)HIDWORD(v242);
        v34 = (void *)v242;
        if ( (_DWORD)v242 != HIDWORD(v242) )
        {
          do
          {
            v38 = (int *)(*(_DWORD *)v34 - 12);
            if ( v38 != &dword_28898C0 )
            {
              v36 = (unsigned int *)(*(_DWORD *)v34 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v37 = __ldrex(v36);
                while ( __strex(v37 - 1, v36) );
              }
              else
                v37 = (*v36)--;
              if ( v37 <= 0 )
                j_j_j_j__ZdlPv_9(v38);
            }
            v34 = (char *)v34 + 8;
          }
          while ( v34 != v35 );
          v34 = (void *)v242;
        }
        if ( v34 )
          j_operator delete(v34);
        v39 = (void *)(v244 - 12);
        if ( (int *)(v244 - 12) != &dword_28898C0 )
          v48 = (unsigned int *)(v244 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v49 = __ldrex(v48);
            while ( __strex(v49 - 1, v48) );
          else
            v49 = (*v48)--;
          if ( v49 <= 0 )
            j_j_j_j__ZdlPv_9(v39);
LABEL_70:
        v40 = (void *)v245;
        if ( v245 )
          j_BlockSource::~BlockSource((BlockSource *)(v245 + 8));
          if ( *(_DWORD *)v40 )
            (*(void (**)(void))(**(_DWORD **)v40 + 4))();
          j_operator delete(v40);
        return;
      j_BlockPos::BlockPos((int)&v240, (int)&v257);
      j_CommandOrigin::getAreaAt((CommandOrigin *)&v241, v4, (const BlockPos *)&v271, (const BlockPos *)&v240);
      v27 = v241;
      if ( !v241 )
        goto LABEL_381;
        VLDR            S0, [SP,#0x27C+var_E4]
      _R0 = *(_WORD *)(v241 + 32);
        VLDR            S2, [SP,#0x27C+var_D8]
LABEL_381:
        sub_21E94B4((void **)&v239, "commands.clone.outOfWorld");
        v237 = 0LL;
        v238 = 0;
        j_CommandOutput::error(v5, &v239, (unsigned __int64 *)&v237);
        v42 = (void *)HIDWORD(v237);
        v41 = (void *)v237;
        if ( (_DWORD)v237 != HIDWORD(v237) )
            v45 = (int *)(*(_DWORD *)v41 - 12);
            if ( v45 != &dword_28898C0 )
              v43 = (unsigned int *)(*(_DWORD *)v41 - 4);
                  v44 = __ldrex(v43);
                while ( __strex(v44 - 1, v43) );
                v44 = (*v43)--;
              if ( v44 <= 0 )
                j_j_j_j__ZdlPv_9(v45);
            v41 = (char *)v41 + 8;
          while ( v41 != v42 );
          v41 = (void *)v237;
        if ( v41 )
          j_operator delete(v41);
        v46 = (void *)(v239 - 12);
        if ( (int *)(v239 - 12) == &dword_28898C0 )
          goto LABEL_91;
        v57 = (unsigned int *)(v239 - 4);
        if ( &pthread_create )
          __dmb();
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
          goto LABEL_134;
        goto LABEL_133;
      v29 = v245;
      v30 = byte_2823C70;
      __dmb();
      if ( !(v30 & 1) && j_j___cxa_guard_acquire_0((unsigned int *)&byte_2823C70) )
        dword_2823C6C = *(_WORD *)(v29 + 32) << 11;
        j_j___cxa_guard_release_0((unsigned int *)&byte_2823C70);
        VLDR            S0, [SP,#0x27C+var_B4]
        VLDR            S2, [SP,#0x27C+var_B0]
        VLDR            S4, [SP,#0x27C+var_AC]
        VMUL.F32        S0, S2, S0
        VMUL.F32        S0, S0, S4
        VCVTR.S32.F32   S0, S0
        VMOV            R6, S0
      if ( (signed int)_R6 > dword_2823C6C )
        sub_21E94B4((void **)&v236, "commands.clone.tooManyBlocks");
        j_Util::toString<int,(void *)0,(void *)0>((void **)&v230, _R6);
        j_CommandOutputParameter::CommandOutputParameter(&v231, &v230);
        j_Util::toString<int,(void *)0,(void *)0>((void **)&v229, dword_2823C6C);
        j_CommandOutputParameter::CommandOutputParameter(&v232, &v229);
        v233 = 0;
        v234 = 0;
        v235 = 0;
        v233 = j_operator new(0x10u);
        v235 = (char *)v233 + 16;
        v234 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                         (int)&v231,
                         (int)&v233,
                         (int)v233);
        j_CommandOutput::error(v5, &v236, (unsigned __int64 *)&v233);
        v33 = v234;
        v32 = v233;
        if ( v233 != v234 )
            v52 = (int *)(*(_DWORD *)v32 - 12);
            if ( v52 != &dword_28898C0 )
              v50 = (unsigned int *)(*(_DWORD *)v32 - 4);
                  v51 = __ldrex(v50);
                while ( __strex(v51 - 1, v50) );
                v51 = (*v50)--;
              if ( v51 <= 0 )
                j_j_j_j__ZdlPv_9(v52);
            v32 = (char *)v32 + 8;
          while ( v32 != v33 );
          v32 = v233;
        if ( v32 )
          j_operator delete(v32);
        v53 = (void *)(v232 - 12);
        if ( (int *)(v232 - 12) != &dword_28898C0 )
          v136 = (unsigned int *)(v232 - 4);
              v137 = __ldrex(v136);
            while ( __strex(v137 - 1, v136) );
            v137 = (*v136)--;
          if ( v137 <= 0 )
            j_j_j_j__ZdlPv_9(v53);
        v54 = (void *)(v231 - 12);
        if ( (int *)(v231 - 12) != &dword_28898C0 )
          v138 = (unsigned int *)(v231 - 4);
              v139 = __ldrex(v138);
            while ( __strex(v139 - 1, v138) );
            v139 = (*v138)--;
          if ( v139 <= 0 )
            j_j_j_j__ZdlPv_9(v54);
        v55 = (void *)(v229 - 12);
        if ( (int *)(v229 - 12) != &dword_28898C0 )
          v140 = (unsigned int *)(v229 - 4);
              v141 = __ldrex(v140);
            while ( __strex(v141 - 1, v140) );
            v141 = (*v140)--;
          if ( v141 <= 0 )
            j_j_j_j__ZdlPv_9(v55);
        v56 = (void *)(v230 - 12);
        if ( (int *)(v230 - 12) != &dword_28898C0 )
          v142 = (unsigned int *)(v230 - 4);
              v143 = __ldrex(v142);
            while ( __strex(v143 - 1, v142) );
            v143 = (*v142)--;
          if ( v143 <= 0 )
            j_j_j_j__ZdlPv_9(v56);
        v46 = (void *)(v236 - 12);
        if ( (int *)(v236 - 12) == &dword_28898C0 )
        v57 = (unsigned int *)(v236 - 4);
LABEL_134:
          if ( v58 <= 0 )
            j_j_j_j__ZdlPv_9(v46);
LABEL_91:
          v47 = (void *)v241;
          if ( v241 )
            j_BlockSource::~BlockSource((BlockSource *)(v241 + 8));
            if ( *(_DWORD *)v47 )
              (*(void (**)(void))(**(_DWORD **)v47 + 4))();
            j_operator delete(v47);
          goto LABEL_70;
LABEL_133:
        v58 = (*v57)--;
        goto LABEL_134;
      v59 = *((_DWORD *)v3 + 17);
      if ( v59 == 2 )
        v60 = 1;
      else
        if ( v59 == 1 )
          v183 = *((_DWORD *)v3 + 19);
          v182 = 0;
          goto LABEL_139;
        v60 = 0;
      v182 = v60;
      v183 = 0;
LABEL_139:
      v181 = v27;
      v226 = 0;
      v227 = 0;
      v228 = 0;
      sub_19B2FC8((int)&v226, _R6);
      v223 = 0;
      v224 = 0;
      v225 = 0;
      sub_19B2FC8((int)&v223, _R6);
      v220 = 0;
      v221 = 0;
      v222 = 0;
      sub_19B2FC8((int)&v220, _R6);
      ptr = 0;
      v218 = 0;
      v219 = 0;
      if ( _R6 >= 0x15555556 )
        sub_21E5A04("vector::reserve");
      if ( _R6 )
        v61 = 3 * _R6;
        ptr = j_operator new(4 * v61);
        v218 = ptr;
        v219 = (char *)ptr + 4 * v61;
        VLDR            S0, [SP,#0x27C+var_90]
        VLDR            S6, [SP,#0x27C+var_E8]
        VLDR            S2, [SP,#0x27C+var_8C]
        VSUB.F32        S0, S6, S0
        VLDR            S8, [SP,#0x27C+var_E4]
        VLDR            S4, [SP,#0x27C+var_88]
        VLDR            S10, [SP,#0x27C+var_E0]
        VSUB.F32        S2, S8, S2
        VSUB.F32        S4, S10, S4
        VMOV            R1, S0
        VMOV            R2, S2
        VMOV            R3, S4
      j_BlockPos::BlockPos((BlockPos *)&v214, _R1, _R2, _R3);
        VLDR            S2, [SP,#0x27C+var_7C]
        VLDR            S0, [SP,#0x27C+var_88]
      v188 = (BlockPos *)(v29 + 8);
        VCVTR.S32.F32   S4, S2
        VMOV            R0, S4
      v184 = _R1;
      if ( _R1 <= _R0 )
        __asm { VLDR            S0, [SP,#0x27C+var_80] }
        do
          __asm
            VLDR            S4, [SP,#0x27C+var_8C]
            VCVTR.S32.F32   S6, S0
            VCVTR.S32.F32   S4, S4
            VMOV            R0, S6
            VMOV            R1, S4
          v185 = _R1;
          if ( _R1 <= _R0 )
              __asm
                VLDR            S2, [SP,#0x27C+var_90]
                VLDR            S4, [SP,#0x27C+var_84]
                VCVTR.S32.F32   S2, S2
                VCVTR.S32.F32   S4, S4
                VMOV            R0, S2
                VMOV            R1, S4
              if ( _R0 <= _R1 )
                {
                  v212 = __PAIR__(v185, _R0);
                  v186 = _R0;
                  v213 = v184;
                  v71 = v185 + v215;
                  v72 = v214 + _R0;
                  v209 = v214 + _R0;
                  v73 = v216 + v184;
                  v210 = v185 + v215;
                  v211 = v216 + v184;
                  j_BlockSource::getBlockAndData((BlockSource *)&v208, v188, (int)&v212);
                  if ( v182 != 1 || v208 != (unsigned __int16)FullBlock::AIR )
                  {
                    if ( !v183 )
                      goto LABEL_382;
                    if ( (unsigned __int8)v208 == *(_BYTE *)(v183 + 4) )
                    {
                      _ZF = v269 == 255;
                      if ( v269 != 255 )
                        _ZF = (unsigned int)v208 >> 8 == v269;
                      if ( _ZF )
                      {
LABEL_382:
                        v75 = (CompoundTag *)j_BlockSource::getBlockEntity(v188, (const BlockPos *)&v212);
                        if ( v75 )
                        {
                          j_CompoundTag::CompoundTag((int)&v207);
                          (*(void (__fastcall **)(CompoundTag *, char *))(*(_DWORD *)v75 + 12))(v75, &v207);
                          j_CloneCommand::convertClonedTag((CloneCommand *)&v207, v75, (BlockEntity *)&v214, v76);
                          v77 = v224;
                          if ( v224 == v225 )
                          {
                            v83 = (int)v223;
                            v84 = v224 - v223;
                            v85 = -858993459 * v84;
                            v86 = -858993459 * v84;
                            if ( v224 == v223 )
                              v86 = 1;
                            v88 = v86 + -858993459 * v84;
                            v87 = v88;
                            if ( v88 > 0xCCCCCCC )
                              v88 = 214748364;
                            _CF = v87 >= v86;
                            LOWORD(v86) = -13107;
                            if ( !_CF )
                            HIWORD(v86) = 3276;
                            if ( v88 >= v86 )
                              sub_21E57F4();
                            v180 = 5 * v88;
                            v89 = (char *)j_operator new(20 * v88);
                            v90 = v208;
                            v91 = (int)&v89[20 * v85];
                            *(_DWORD *)v91 = v72;
                            *(_DWORD *)(v91 + 4) = v71;
                            *(_DWORD *)(v91 + 8) = v73;
                            *(_BYTE *)(v91 + 12) = v90;
                            *(_BYTE *)(v91 + 13) = HIBYTE(v90);
                            v92 = (int)v89;
                            j_CompoundTag::clone((CompoundTag *)(v91 + 16), (int)&v207);
                            v93 = (int *)(sub_19B370C(v83, (int)v77, v92) + 20);
                            if ( (int *)v83 != v77 )
                            {
                              do
                              {
                                v94 = *(_DWORD *)(v83 + 16);
                                if ( v94 )
                                  (*(void (**)(void))(*(_DWORD *)v94 + 4))();
                                *(_DWORD *)(v83 + 16) = 0;
                                v83 += 20;
                              }
                              while ( v77 != (int *)v83 );
                              v77 = v223;
                            }
                            if ( v77 )
                              j_operator delete(v77);
                            v223 = (int *)v92;
                            v224 = v93;
                            v225 = (int *)(v92 + 4 * v180);
                          }
                          else
                            v78 = v208;
                            *v224 = v72;
                            v77[1] = v71;
                            v77[2] = v73;
                            *((_BYTE *)v77 + 12) = v78;
                            *((_BYTE *)v77 + 13) = HIBYTE(v78);
                            j_CompoundTag::clone((CompoundTag *)(v77 + 4), (int)&v207);
                            v224 = v77 + 5;
                          v95 = v218;
                          if ( v218 == v219 )
                            v96 = ptr;
                            v97 = ((_BYTE *)v218 - (_BYTE *)ptr) >> 2;
                            v98 = -1431655765 * v97;
                            v99 = -1431655765 * v97;
                            if ( v218 == ptr )
                              v99 = 1;
                            v101 = v99 + -1431655765 * v97;
                            v100 = v101;
                            if ( v101 > 0x15555555 )
                              v101 = 357913941;
                            _CF = v100 >= v99;
                            LOWORD(v99) = 21846;
                            HIWORD(v99) = 5461;
                            if ( v101 >= v99 )
                            v102 = 3 * v101;
                            v103 = j_operator new(12 * v101);
                            v104 = v103;
                            *((_DWORD *)v103 + 3 * v98) = v212;
                            v105 = (int)v103 + 12 * v98;
                            *(_DWORD *)(v105 + 4) = HIDWORD(v212);
                            *(_DWORD *)(v105 + 8) = v213;
                            for ( i = v96; i != v95; v103 = (char *)v103 + 12 )
                              *(_DWORD *)v103 = *(_DWORD *)i;
                              *((_DWORD *)v103 + 1) = *((_DWORD *)i + 1);
                              v107 = *((_DWORD *)i + 2);
                              i = (char *)i + 12;
                              *((_DWORD *)v103 + 2) = v107;
                            v108 = (char *)v103 + 12;
                            if ( v96 )
                              j_operator delete(v96);
                            ptr = v104;
                            v218 = v108;
                            v219 = (char *)v104 + 4 * v102;
                            *(_QWORD *)v218 = v212;
                            *((_DWORD *)v95 + 2) = v213;
                            v218 = (char *)v95 + 12;
                          j_CompoundTag::~CompoundTag((CompoundTag *)&v207);
                        }
                        else
                          v79 = (Block *)j_FullBlock::getBlock((FullBlock *)&v208);
                          if ( j_Block::isSolid(v79)
                            || (v80 = j_FullBlock::getBlock((FullBlock *)&v208),
                                j_Block::hasProperty(v80, v81, 0x200000LL) == 1) )
                            sub_19B309C((int)&v226, (int)&v209, (int)&v208);
                            v82 = v218;
                            if ( v218 == v219 )
                              v110 = ptr;
                              v111 = ((_BYTE *)v218 - (_BYTE *)ptr) >> 2;
                              v112 = -1431655765 * v111;
                              v113 = -1431655765 * v111;
                              if ( v218 == ptr )
                                v113 = 1;
                              v115 = v113 + -1431655765 * v111;
                              v114 = v115;
                              if ( v115 > 0x15555555 )
                                v115 = 357913941;
                              _CF = v114 >= v113;
                              LOWORD(v113) = 21846;
                              if ( !_CF )
                              HIWORD(v113) = 5461;
                              if ( v115 >= v113 )
                                sub_21E57F4();
                              v116 = 3 * v115;
                              v117 = j_operator new(12 * v115);
                              v118 = v117;
                              *((_DWORD *)v117 + 3 * v112) = v212;
                              v119 = (int)v117 + 12 * v112;
                              *(_DWORD *)(v119 + 4) = HIDWORD(v212);
                              *(_DWORD *)(v119 + 8) = v213;
                              for ( j = v110; j != v82; v117 = (char *)v117 + 12 )
                                *(_DWORD *)v117 = *(_DWORD *)j;
                                *((_DWORD *)v117 + 1) = *((_DWORD *)j + 1);
                                v121 = *((_DWORD *)j + 2);
                                j = (char *)j + 12;
                                *((_DWORD *)v117 + 2) = v121;
                              v122 = (char *)v117 + 12;
                              if ( v110 )
                                j_operator delete(v110);
                              ptr = v118;
                              v218 = v122;
                              v219 = (char *)v118 + 4 * v116;
                            else
                              *(_QWORD *)v218 = v212;
                              *((_DWORD *)v82 + 2) = v213;
                              v218 = (char *)v82 + 12;
                            sub_19B309C((int)&v220, (int)&v209, (int)&v208);
                            v123 = v218;
                              j_std::vector<BlockPos,std::allocator<BlockPos>>::_M_insert_aux<BlockPos const&>(
                                (int)&ptr,
                                (int)ptr,
                                (int)&v212);
                            else if ( ptr == v218 )
                              *((_DWORD *)v123 + 2) = v213;
                              v218 = (char *)v123 + 12;
                              v286 = v212;
                              v287 = v213;
                              j_std::vector<BlockPos,std::allocator<BlockPos>>::_M_insert_aux<BlockPos>(
                                (int)&v286);
                      }
                    }
                  }
                  __asm
                    VLDR            S0, [SP,#0x27C+var_84]
                    VCVTR.S32.F32   S0, S0
                  _R0 = v186 + 1;
                  __asm { VMOV            R1, S0 }
                }
                while ( v186 < _R1 );
                __asm { VLDR            S0, [SP,#0x27C+var_80] }
              __asm { VCVTR.S32.F32   S2, S0 }
              v124 = v185++;
              __asm { VMOV            R1, S2 }
            while ( v124 < _R1 );
            __asm { VLDR            S2, [SP,#0x27C+var_7C] }
          __asm { VCVTR.S32.F32   S4, S2 }
          v126 = v184++;
          __asm { VMOV            R1, S4 }
        while ( v126 < _R1 );
      if ( v17 == 2 )
        v128 = (BlockPos *)v218;
        v129 = (BlockPos *)ptr;
        if ( ptr != v218 )
            v206 = BlockID::AIR;
            j_BlockSource::setBlock((int)v188, v129, &v206, 3);
            v129 = (BlockPos *)((char *)v129 + 12);
          while ( v128 != v129 );
      v204 = 0LL;
      v205 = 0;
      sub_19B31B8((signed int)&v204, 0, v226, v227);
      v130 = (int)v223;
      v187 = v224;
      sub_19B31B8((signed int)&v204, SHIDWORD(v204), (int)v223, (int)v224);
      sub_19B31B8((signed int)&v204, SHIDWORD(v204), v220, v221);
      v131 = HIDWORD(v204);
      v132 = v204;
      v133 = 0;
      v134 = (BlockSource *)(v181 + 8);
      if ( (_DWORD)v204 != HIDWORD(v204) )
        v133 = 0;
          v202 = *(_BYTE *)(v132 + 12);
          v203 = *(_BYTE *)(v132 + 13);
          v135 = j_BlockSource::setBlockAndData((int)v134, (BlockPos *)v132, (int)&v202, 3, 0);
          v132 += 20;
          if ( v135 )
            ++v133;
        while ( v131 != v132 );
      for ( ; (int *)v130 != v187; v130 += 20 )
        v150 = (BlockEntity *)j_BlockSource::getBlockEntity(v134, (const BlockPos *)v130);
        v151 = v150 == 0;
        if ( v150 )
          v132 = *(_DWORD *)(v130 + 16);
          v151 = v132 == 0;
        if ( !v151 )
          sub_21E94B4((void **)&v201, "x");
          j_CompoundTag::putInt(v132, (const void **)&v201, *(_DWORD *)v130);
          v152 = (void *)(v201 - 12);
          if ( (int *)(v201 - 12) != &dword_28898C0 )
            v144 = (unsigned int *)(v201 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v145 = __ldrex(v144);
              while ( __strex(v145 - 1, v144) );
            else
              v145 = (*v144)--;
            if ( v145 <= 0 )
              j_j_j_j__ZdlPv_9(v152);
          v153 = *(_DWORD *)(v130 + 16);
          sub_21E94B4((void **)&v200, "y");
          j_CompoundTag::putInt(v153, (const void **)&v200, *(_DWORD *)(v130 + 4));
          v154 = (void *)(v200 - 12);
          if ( (int *)(v200 - 12) != &dword_28898C0 )
            v146 = (unsigned int *)(v200 - 4);
                v147 = __ldrex(v146);
              while ( __strex(v147 - 1, v146) );
              v147 = (*v146)--;
            if ( v147 <= 0 )
              j_j_j_j__ZdlPv_9(v154);
          sub_21E94B4((void **)&v199, (const char *)&aRtuz[3]);
          j_CompoundTag::putInt(v132, (const void **)&v199, *(_DWORD *)(v130 + 8));
          v155 = (void *)(v199 - 12);
          if ( (int *)(v199 - 12) != &dword_28898C0 )
            v148 = (unsigned int *)(v199 - 4);
                v149 = __ldrex(v148);
                v132 = __strex(v149 - 1, v148);
              while ( v132 );
              v149 = (*v148)--;
            if ( v149 <= 0 )
              j_j_j_j__ZdlPv_9(v155);
          (*(void (__fastcall **)(BlockEntity *, _DWORD))(*(_DWORD *)v150 + 8))(v150, *(_DWORD *)(v130 + 16));
          j_BlockEntity::setChanged(v150);
        v197 = *(_BYTE *)(v130 + 12);
        v198 = *(_BYTE *)(v130 + 13);
        j_BlockSource::setBlockAndData((int)v134, (BlockPos *)v130, (int)&v197, 3, 0);
      if ( v133 < 1 )
        sub_21E94B4((void **)&v196, "commands.clone.failed");
        v194 = 0LL;
        v195 = 0;
        j_CommandOutput::error(v5, &v196, (unsigned __int64 *)&v194);
        v166 = (void *)HIDWORD(v194);
        v165 = (void *)v194;
        if ( (_DWORD)v194 != HIDWORD(v194) )
            v169 = (int *)(*(_DWORD *)v165 - 12);
            if ( v169 != &dword_28898C0 )
              v167 = (unsigned int *)(*(_DWORD *)v165 - 4);
                  v168 = __ldrex(v167);
                while ( __strex(v168 - 1, v167) );
                v168 = (*v167)--;
              if ( v168 <= 0 )
                j_j_j_j__ZdlPv_9(v169);
            v165 = (char *)v165 + 8;
          while ( v165 != v166 );
          v165 = (void *)v194;
        if ( v165 )
          j_operator delete(v165);
        v162 = (void *)(v196 - 12);
        if ( (int *)(v196 - 12) == &dword_28898C0 )
          goto LABEL_331;
        v163 = (unsigned int *)(v196 - 4);
            v164 = __ldrex(v163);
          while ( __strex(v164 - 1, v163) );
LABEL_370:
          if ( v164 <= 0 )
            j_j_j_j__ZdlPv_9(v162);
LABEL_331:
          v170 = v204;
          if ( (_DWORD)v204 != HIDWORD(v204) )
              v171 = *(_DWORD *)(v170 + 16);
              if ( v171 )
                (*(void (**)(void))(*(_DWORD *)v171 + 4))();
              *(_DWORD *)(v170 + 16) = 0;
              LODWORD(v170) = v170 + 20;
            while ( HIDWORD(v170) != (_DWORD)v170 );
            LODWORD(v170) = v204;
          if ( (_DWORD)v170 )
            j_operator delete((void *)v170);
          if ( ptr )
            j_operator delete(ptr);
          v172 = *(_QWORD *)&v220;
          if ( v220 != v221 )
              v173 = *(_DWORD *)(v172 + 16);
              if ( v173 )
                (*(void (**)(void))(*(_DWORD *)v173 + 4))();
              *(_DWORD *)(v172 + 16) = 0;
              LODWORD(v172) = v172 + 20;
            while ( HIDWORD(v172) != (_DWORD)v172 );
            LODWORD(v172) = v220;
          if ( (_DWORD)v172 )
            j_operator delete((void *)v172);
          v174 = *(_QWORD *)&v223;
          if ( v223 != v224 )
              v175 = *(_DWORD *)(v174 + 16);
              if ( v175 )
                (*(void (**)(void))(*(_DWORD *)v175 + 4))();
              *(_DWORD *)(v174 + 16) = 0;
              LODWORD(v174) = v174 + 20;
            while ( HIDWORD(v174) != (_DWORD)v174 );
            LODWORD(v174) = v223;
          if ( (_DWORD)v174 )
            j_operator delete((void *)v174);
          v176 = *(_QWORD *)&v226;
          if ( v226 != v227 )
              v177 = *(_DWORD *)(v176 + 16);
              if ( v177 )
                (*(void (**)(void))(*(_DWORD *)v177 + 4))();
              *(_DWORD *)(v176 + 16) = 0;
              LODWORD(v176) = v176 + 20;
            while ( HIDWORD(v176) != (_DWORD)v176 );
            LODWORD(v176) = v226;
          if ( (_DWORD)v176 )
            j_operator delete((void *)v176);
        j_CommandOutput::set<int>((int)v5, "count", v133);
        sub_21E94B4((void **)&v193, "commands.clone.success");
        j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v189, v133);
        v190 = 0;
        v191 = 0;
        v192 = 0;
        v190 = (char *)j_operator new(8u);
        v192 = v190 + 8;
        v191 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                         (int)&v189,
                         (int)&v190,
                         (int)v190);
        j_CommandOutput::success((int)v5, &v193, (unsigned __int64 *)&v190);
        v157 = (int)v191;
        v156 = v190;
        if ( v190 != v191 )
            v160 = (int *)(*(_DWORD *)v156 - 12);
            if ( v160 != &dword_28898C0 )
              v158 = (unsigned int *)(*(_DWORD *)v156 - 4);
                  v159 = __ldrex(v158);
                while ( __strex(v159 - 1, v158) );
                v159 = (*v158)--;
              if ( v159 <= 0 )
                j_j_j_j__ZdlPv_9(v160);
            v156 += 8;
          while ( v156 != (char *)v157 );
          v156 = v190;
        if ( v156 )
          j_operator delete(v156);
        v161 = (void *)(v189 - 12);
        if ( (int *)(v189 - 12) != &dword_28898C0 )
          v178 = (unsigned int *)(v189 - 4);
              v179 = __ldrex(v178);
            while ( __strex(v179 - 1, v178) );
            v179 = (*v178)--;
          if ( v179 <= 0 )
            j_j_j_j__ZdlPv_9(v161);
        v162 = (void *)(v193 - 12);
        if ( (int *)(v193 - 12) == &dword_28898C0 )
        v163 = (unsigned int *)(v193 - 4);
          goto LABEL_370;
      v164 = (*v163)--;
      goto LABEL_370;
    if ( *((_DWORD *)v3 + 17) )
      goto LABEL_40;
    if ( !j_AABB::intersects((AABB *)&v263, (const AABB *)&v250) )
      v17 = *((_DWORD *)v3 + 18);
    sub_21E94B4((void **)&v248, "commands.clone.noOverlap");
    v246 = 0LL;
    v247 = 0;
    j_CommandOutput::error(v5, &v248, (unsigned __int64 *)&v246);
    v19 = (void *)HIDWORD(v246);
    v18 = (void *)v246;
    if ( (_DWORD)v246 != HIDWORD(v246) )
      do
        v22 = (int *)(*(_DWORD *)v18 - 12);
        if ( v22 != &dword_28898C0 )
          v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v18 = (char *)v18 + 8;
      while ( v18 != v19 );
      v18 = (void *)v246;
    if ( v18 )
      j_operator delete(v18);
    v23 = (void *)(v248 - 12);
    if ( (int *)(v248 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v248 - 4);
      if ( &pthread_create )
        __dmb();
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
  }
}
