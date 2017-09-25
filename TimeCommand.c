

void __fastcall TimeCommand::~TimeCommand(TimeCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall TimeCommand::execute(TimeCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  TimeCommand::execute(this, a2, a3);
}


void __fastcall TimeCommand::~TimeCommand(TimeCommand *this)
{
  TimeCommand::~TimeCommand(this);
}


void __fastcall TimeCommand::execute(TimeCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  TimeCommand *v3; // r4@1
  CommandOutput *v4; // r8@1
  Level *v5; // r6@1
  int v6; // r0@2
  const char *v14; // r11@5
  int v15; // r6@5
  int v17; // r5@6
  int v18; // r4@7
  const char *v19; // r7@7
  unsigned int v20; // r1@8
  int v26; // r0@14
  int v27; // r0@15
  char *v28; // r4@15
  int v29; // r6@15
  unsigned int *v30; // r2@17
  signed int v31; // r1@19
  int *v32; // r0@25
  void *v33; // r0@30
  void *v34; // r0@31
  unsigned int *v35; // r2@32
  signed int v36; // r1@34
  char *v37; // r0@38
  void *v38; // r0@38
  int v39; // r4@39
  char *v40; // r7@39
  char *v41; // r1@40
  unsigned int *v42; // r2@41
  signed int v43; // r5@43
  char *v44; // r5@47
  int *v45; // r0@48
  void *v46; // r0@53
  void *v47; // r0@54
  char *v48; // r4@55
  int v49; // r6@55
  unsigned int *v50; // r2@57
  signed int v51; // r1@59
  int *v52; // r0@65
  void *v53; // r0@70
  unsigned int *v54; // r2@73
  signed int v55; // r1@75
  unsigned int *v56; // r2@77
  signed int v57; // r1@79
  unsigned int *v58; // r2@89
  signed int v59; // r1@91
  unsigned int *v60; // r2@93
  signed int v61; // r1@95
  unsigned int *v62; // r2@97
  signed int v63; // r1@99
  int v64; // [sp+0h] [bp-90h]@15
  char *v65; // [sp+8h] [bp-88h]@15
  char *v66; // [sp+Ch] [bp-84h]@15
  char *v67; // [sp+10h] [bp-80h]@15
  int v68; // [sp+18h] [bp-78h]@15
  void **v69; // [sp+1Ch] [bp-74h]@15
  signed int v70; // [sp+20h] [bp-70h]@15
  signed int v71; // [sp+24h] [bp-6Ch]@15
  char v72; // [sp+28h] [bp-68h]@15
  int v73; // [sp+2Ch] [bp-64h]@15
  int v74; // [sp+30h] [bp-60h]@55
  char *v75; // [sp+38h] [bp-58h]@55
  char *v76; // [sp+3Ch] [bp-54h]@55
  char *v77; // [sp+40h] [bp-50h]@55
  int v78; // [sp+48h] [bp-48h]@55
  int v79; // [sp+4Ch] [bp-44h]@38
  char *v80; // [sp+50h] [bp-40h]@38
  char *v81; // [sp+54h] [bp-3Ch]@38
  char *v82; // [sp+58h] [bp-38h]@38
  int v83; // [sp+60h] [bp-30h]@38
  int v84; // [sp+64h] [bp-2Ch]@38
  char v85; // [sp+68h] [bp-28h]@40

  v3 = this;
  v4 = a3;
  v5 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)a2 + 24))(a2);
  if ( *((_DWORD *)v3 + 5) == 2 )
  {
    v6 = *((_DWORD *)v3 + 6);
    if ( v6 == 2 )
    {
      _R0 = j_Level::getTime(v5);
      _R1 = 91625969;
      __asm { SMMUL.W         R0, R0, R1 }
      v14 = "commands.time.query.day";
      v15 = ((signed int)_R0 >> 9) + (_R0 >> 31);
    }
    else if ( v6 == 1 )
      v15 = j_Level::getTime(v5);
      v14 = "commands.time.query.gametime";
    else if ( v6 )
      v14 = 0;
      v15 = 0;
    else
      __asm { SMMUL.W         R1, R0, R1 }
      v14 = "commands.time.query.daytime";
      v15 = _R0 - 24000 * (((signed int)_R1 >> 9) + (_R1 >> 31));
    if ( j_CommandOutput::wantsData(v4) == 1 )
      sub_21E94B4((void **)&v83, v14);
      j_Util::toString<int,(void *)0,(void *)0>((void **)&v79, v15);
      v80 = 0;
      v81 = 0;
      v82 = 0;
      v37 = (char *)j_operator new(4u);
      v80 = v37;
      v82 = v37 + 4;
      v81 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                      (int)&v79,
                      (int)&v80,
                      (int)v37);
      j_I18n::get(&v84, &v83, (unsigned __int64 *)&v80);
      j_CommandOutput::set<std::string>((int)v4, "body", &v84);
      v38 = (void *)(v84 - 12);
      if ( (int *)(v84 - 12) != &dword_28898C0 )
      {
        v58 = (unsigned int *)(v84 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v59 = __ldrex(v58);
          while ( __strex(v59 - 1, v58) );
        }
        else
          v59 = (*v58)--;
        if ( v59 <= 0 )
          j_j_j_j__ZdlPv_9(v38);
      }
      v39 = (int)v81;
      v40 = v80;
      if ( v80 != v81 )
        v41 = &v85;
        do
          v45 = (int *)(*(_DWORD *)v40 - 12);
          if ( v45 != &dword_28898C0 )
          {
            v42 = (unsigned int *)(*(_DWORD *)v40 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v43 = __ldrex(v42);
              while ( __strex(v43 - 1, v42) );
            }
            else
              v43 = (*v42)--;
            if ( v43 <= 0 )
              v44 = v41;
              j_j_j_j__ZdlPv_9(v45);
              v41 = v44;
          }
          v40 += 4;
        while ( v40 != (char *)v39 );
        v40 = v80;
      if ( v40 )
        j_operator delete(v40);
      v46 = (void *)(v79 - 12);
      if ( (int *)(v79 - 12) != &dword_28898C0 )
        v60 = (unsigned int *)(v79 - 4);
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
          v61 = (*v60)--;
        if ( v61 <= 0 )
          j_j_j_j__ZdlPv_9(v46);
      v47 = (void *)(v83 - 12);
      if ( (int *)(v83 - 12) != &dword_28898C0 )
        v62 = (unsigned int *)(v83 - 4);
            v63 = __ldrex(v62);
          while ( __strex(v63 - 1, v62) );
          v63 = (*v62)--;
        if ( v63 <= 0 )
          j_j_j_j__ZdlPv_9(v47);
    sub_21E94B4((void **)&v78, v14);
    j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v74, v15);
    v75 = 0;
    v76 = 0;
    v77 = 0;
    v75 = (char *)j_operator new(8u);
    v77 = v75 + 8;
    v76 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v74,
                    (int)&v75,
                    (int)v75);
    j_CommandOutput::success((int)v4, &v78, (unsigned __int64 *)&v75);
    v49 = (int)v76;
    v48 = v75;
    if ( v75 != v76 )
      do
        v52 = (int *)(*(_DWORD *)v48 - 12);
        if ( v52 != &dword_28898C0 )
          v50 = (unsigned int *)(*(_DWORD *)v48 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
          else
            v51 = (*v50)--;
          if ( v51 <= 0 )
            j_j_j_j__ZdlPv_9(v52);
        v48 += 8;
      while ( v48 != (char *)v49 );
      v48 = v75;
    if ( v48 )
      j_operator delete(v48);
    v53 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)(v74 - 4);
      if ( &pthread_create )
        __dmb();
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
      else
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j__ZdlPv_9(v53);
    v34 = (void *)(v78 - 12);
    if ( (int *)(v78 - 12) == &dword_28898C0 )
      return;
    v35 = (unsigned int *)(v78 - 4);
    if ( &pthread_create )
      __dmb();
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      goto LABEL_86;
LABEL_85:
    v36 = (*v35)--;
LABEL_86:
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
    return;
  }
  _R0 = j_Level::getTime(v5);
  v17 = *((_DWORD *)v3 + 8);
  if ( *((_DWORD *)v3 + 5) == 1 )
    v18 = v17 + _R0;
    v19 = "commands.time.added";
  else
    v20 = *((_DWORD *)v3 + 7);
    if ( v20 >= 5 )
      if ( v20 == 5 )
        v17 = 18000;
      v17 = dword_262EAD0[v20];
    _R1 = 91625969;
    __asm { SMMUL.W         R0, R0, R1 }
    v19 = "commands.time.set";
    v26 = ((signed int)_R0 >> 9) + (_R0 >> 31);
    v18 = v17 + 24000 * v26;
    v17 += 24000 * v26;
  j_Level::setTime(v5, v18);
  v70 = 2;
  v71 = 1;
  v72 = 0;
  v69 = &off_26E93B4;
  v73 = j_Level::getTime(v5);
  v27 = j_Level::getPacketSender(v5);
  (*(void (**)(void))(*(_DWORD *)v27 + 8))();
  j_CommandOutput::set<int>((int)v4, "time", v18);
  sub_21E94B4((void **)&v68, v19);
  j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v64, v17);
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v65 = (char *)j_operator new(8u);
  v67 = v65 + 8;
  v66 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                  (int)&v64,
                  (int)&v65,
                  (int)v65);
  j_CommandOutput::success((int)v4, &v68, (unsigned __int64 *)&v65);
  v29 = (int)v66;
  v28 = v65;
  if ( v65 != v66 )
    do
      v32 = (int *)(*(_DWORD *)v28 - 12);
      if ( v32 != &dword_28898C0 )
        v30 = (unsigned int *)(*(_DWORD *)v28 - 4);
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
          v31 = (*v30)--;
        if ( v31 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      v28 += 8;
    while ( v28 != (char *)v29 );
    v28 = v65;
  if ( v28 )
    j_operator delete(v28);
  v33 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v64 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v68 - 4);
    goto LABEL_85;
}


void __fastcall TimeCommand::setup(TimeCommand *this, CommandRegistry *a2)
{
  TimeCommand *v2; // r8@1
  void *v3; // r5@1
  int v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r0@16
  void *v9; // r0@17
  void *v10; // r5@18
  int v11; // r6@18
  unsigned int *v12; // r2@20
  signed int v13; // r1@22
  int *v14; // r0@28
  void *v15; // r0@33
  void *v16; // r0@34
  void *v17; // r5@35
  int v18; // r6@35
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int *v21; // r0@45
  void *v22; // r0@50
  void *v23; // r0@51
  void *v24; // r5@52
  int v25; // r6@52
  unsigned int *v26; // r2@54
  signed int v27; // r1@56
  int *v28; // r0@62
  void *v29; // r0@67
  void *v30; // r0@68
  void *v31; // r0@69
  void *v32; // r0@70
  void *v33; // r5@71
  int v34; // r6@71
  unsigned int *v35; // r2@73
  signed int v36; // r1@75
  int *v37; // r0@81
  void *v38; // r0@86
  void *v39; // r0@87
  void *v40; // r0@88
  void *v41; // r0@89
  void *v42; // r0@90
  void *v43; // r0@91
  void *v44; // r0@92
  __int64 v45; // r2@93
  void *v46; // r0@93
  char v47; // r0@94
  char v48; // r0@97
  int v49; // r0@100
  __int64 v50; // r2@100
  void *v51; // r0@100
  void *v52; // r0@101
  char v53; // r0@102
  char v54; // r0@105
  int v55; // r0@108
  __int64 v56; // r2@108
  void *v57; // r0@108
  void *v58; // r0@109
  char v59; // r0@110
  char v60; // r0@113
  int v61; // r0@116
  __int64 v62; // r2@116
  void *v63; // r0@116
  void *v64; // r0@117
  char v65; // r0@118
  char v66; // r0@121
  int v67; // r0@124
  void *v68; // r0@124
  void *v69; // r0@125
  unsigned int *v70; // r2@127
  signed int v71; // r1@129
  unsigned int *v72; // r2@131
  signed int v73; // r1@133
  unsigned int *v74; // r2@135
  signed int v75; // r1@137
  unsigned int *v76; // r2@139
  signed int v77; // r1@141
  unsigned int *v78; // r2@143
  signed int v79; // r1@145
  unsigned int *v80; // r2@147
  signed int v81; // r1@149
  unsigned int *v82; // r2@151
  signed int v83; // r1@153
  unsigned int *v84; // r2@155
  signed int v85; // r1@157
  unsigned int *v86; // r2@159
  signed int v87; // r1@161
  unsigned int *v88; // r2@163
  signed int v89; // r1@165
  unsigned int *v90; // r2@167
  signed int v91; // r1@169
  unsigned int *v92; // r2@171
  signed int v93; // r1@173
  unsigned int *v94; // r2@175
  signed int v95; // r1@177
  unsigned int *v96; // r2@179
  signed int v97; // r1@181
  unsigned int *v98; // r2@183
  signed int v99; // r1@185
  unsigned int *v100; // r2@187
  signed int v101; // r1@189
  unsigned int *v102; // r2@191
  signed int v103; // r1@193
  int v104; // r2@195
  signed int v105; // r1@197
  int v106; // r2@199
  signed int v107; // r1@201
  int v108; // r2@203
  signed int v109; // r1@205
  int v110; // r2@207
  signed int v111; // r1@209
  int v112; // r2@211
  signed int v113; // r1@213
  int v114; // r2@215
  signed int v115; // r1@217
  int v116; // r2@219
  signed int v117; // r1@221
  unsigned int *v118; // r2@223
  signed int v119; // r1@225
  unsigned int *v120; // r2@227
  signed int v121; // r1@229
  char v122; // [sp+18h] [bp-290h]@124
  int v123; // [sp+24h] [bp-284h]@124
  char v124; // [sp+40h] [bp-268h]@121
  int v125; // [sp+4Ch] [bp-25Ch]@125
  __int64 v126; // [sp+68h] [bp-240h]@118
  char v127; // [sp+70h] [bp-238h]@116
  int v128; // [sp+7Ch] [bp-22Ch]@116
  char v129; // [sp+98h] [bp-210h]@113
  int v130; // [sp+A4h] [bp-204h]@117
  __int64 v131; // [sp+C0h] [bp-1E8h]@110
  char v132; // [sp+C8h] [bp-1E0h]@108
  int v133; // [sp+D4h] [bp-1D4h]@108
  char v134; // [sp+F0h] [bp-1B8h]@105
  int v135; // [sp+FCh] [bp-1ACh]@109
  __int64 v136; // [sp+118h] [bp-190h]@102
  char v137; // [sp+120h] [bp-188h]@100
  int v138; // [sp+12Ch] [bp-17Ch]@100
  char v139; // [sp+148h] [bp-160h]@97
  int v140; // [sp+154h] [bp-154h]@101
  __int64 v141; // [sp+170h] [bp-138h]@94
  int v142; // [sp+17Ch] [bp-12Ch]@93
  int v143; // [sp+180h] [bp-128h]@71
  int v144; // [sp+184h] [bp-124h]@71
  int v145; // [sp+188h] [bp-120h]@71
  int v146; // [sp+18Ch] [bp-11Ch]@71
  int v147; // [sp+190h] [bp-118h]@71
  int v148; // [sp+194h] [bp-114h]@71
  int v149; // [sp+198h] [bp-110h]@71
  int v150; // [sp+19Ch] [bp-10Ch]@71
  int v151; // [sp+1A0h] [bp-108h]@71
  int v152; // [sp+1A4h] [bp-104h]@71
  int v153; // [sp+1A8h] [bp-100h]@71
  int v154; // [sp+1ACh] [bp-FCh]@71
  void *v155; // [sp+1B0h] [bp-F8h]@71
  int v156; // [sp+1B4h] [bp-F4h]@71
  char *v157; // [sp+1B8h] [bp-F0h]@71
  int v158; // [sp+1C0h] [bp-E8h]@71
  int v159; // [sp+1C4h] [bp-E4h]@52
  int v160; // [sp+1C8h] [bp-E0h]@52
  int v161; // [sp+1CCh] [bp-DCh]@52
  int v162; // [sp+1D0h] [bp-D8h]@52
  int v163; // [sp+1D4h] [bp-D4h]@52
  int v164; // [sp+1D8h] [bp-D0h]@52
  void *v165; // [sp+1DCh] [bp-CCh]@52
  int v166; // [sp+1E0h] [bp-C8h]@52
  char *v167; // [sp+1E4h] [bp-C4h]@52
  int v168; // [sp+1ECh] [bp-BCh]@52
  int v169; // [sp+1F0h] [bp-B8h]@35
  int v170; // [sp+1F4h] [bp-B4h]@35
  void *v171; // [sp+1F8h] [bp-B0h]@35
  int v172; // [sp+1FCh] [bp-ACh]@35
  char *v173; // [sp+200h] [bp-A8h]@35
  int v174; // [sp+208h] [bp-A0h]@35
  int v175; // [sp+20Ch] [bp-9Ch]@18
  int v176; // [sp+210h] [bp-98h]@18
  void *v177; // [sp+214h] [bp-94h]@18
  int v178; // [sp+218h] [bp-90h]@18
  char *v179; // [sp+21Ch] [bp-8Ch]@18
  int v180; // [sp+224h] [bp-84h]@18
  int v181; // [sp+228h] [bp-80h]@1
  int v182; // [sp+22Ch] [bp-7Ch]@1
  void *v183; // [sp+230h] [bp-78h]@1
  int v184; // [sp+234h] [bp-74h]@1
  char *v185; // [sp+238h] [bp-70h]@1
  int v186; // [sp+240h] [bp-68h]@1
  __int16 v187; // [sp+274h] [bp-34h]@100
  __int16 v188; // [sp+278h] [bp-30h]@108
  __int16 v189; // [sp+27Ch] [bp-2Ch]@116
  __int16 v190; // [sp+280h] [bp-28h]@97
  __int16 v191; // [sp+284h] [bp-24h]@124

  v2 = this;
  sub_21E94B4((void **)&v186, "TimeModeSet");
  sub_21E94B4((void **)&v181, "set");
  v182 = 0;
  v183 = 0;
  v184 = 0;
  v185 = 0;
  v3 = j_operator new(8u);
  v183 = v3;
  v185 = (char *)v3 + 8;
  v4 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TimeCommand::Mode> const*,std::pair<std::string,TimeCommand::Mode>*>(
         (int)&v181,
         (int)&v183,
         (int)v3);
  v184 = v4;
  j_CommandRegistry::addEnumValues<TimeCommand::Mode>((int)v2, (int)&v186, (unsigned __int64 *)&v183);
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
    v3 = v183;
  }
  if ( v3 )
    j_operator delete(v3);
  v8 = (void *)(v181 - 12);
  if ( (int *)(v181 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v181 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
    else
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v186 - 12);
  if ( (int *)(v186 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v186 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v180, "TimeModeAdd");
  sub_21E94B4((void **)&v175, "add");
  v176 = 1;
  v177 = 0;
  v178 = 0;
  v179 = 0;
  v10 = j_operator new(8u);
  v177 = v10;
  v179 = (char *)v10 + 8;
  v11 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TimeCommand::Mode> const*,std::pair<std::string,TimeCommand::Mode>*>(
          (int)&v175,
          (int)&v177,
          (int)v10);
  v178 = v11;
  j_CommandRegistry::addEnumValues<TimeCommand::Mode>((int)v2, (int)&v180, (unsigned __int64 *)&v177);
  if ( v10 != (void *)v11 )
      v14 = (int *)(*(_DWORD *)v10 - 12);
      if ( v14 != &dword_28898C0 )
        v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      v10 = (char *)v10 + 8;
    while ( v10 != (void *)v11 );
    v10 = v177;
  if ( v10 )
    j_operator delete(v10);
  v15 = (void *)(v175 - 12);
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v175 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v180 - 12);
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v180 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v174, "TimeModeQuery");
  sub_21E94B4((void **)&v169, "query");
  v170 = 2;
  v171 = 0;
  v172 = 0;
  v173 = 0;
  v17 = j_operator new(8u);
  v171 = v17;
  v173 = (char *)v17 + 8;
  v18 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TimeCommand::Mode> const*,std::pair<std::string,TimeCommand::Mode>*>(
          (int)&v169,
          (int)&v171,
          (int)v17);
  v172 = v18;
  j_CommandRegistry::addEnumValues<TimeCommand::Mode>((int)v2, (int)&v174, (unsigned __int64 *)&v171);
  if ( v17 != (void *)v18 )
      v21 = (int *)(*(_DWORD *)v17 - 12);
      if ( v21 != &dword_28898C0 )
        v19 = (unsigned int *)(*(_DWORD *)v17 - 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      v17 = (char *)v17 + 8;
    while ( v17 != (void *)v18 );
    v17 = v171;
  if ( v17 )
    j_operator delete(v17);
  v22 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v169 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v174 - 12);
  if ( (int *)(v174 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v174 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v168, "TimeQuery");
  sub_21E94B4((void **)&v159, "daytime");
  v160 = 0;
  sub_21E94B4((void **)&v161, "gametime");
  v162 = 1;
  sub_21E94B4((void **)&v163, "day");
  v164 = 2;
  v165 = 0;
  v166 = 0;
  v167 = 0;
  v24 = j_operator new(0x18u);
  v165 = v24;
  v167 = (char *)v24 + 24;
  v25 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TimeCommand::Query> const*,std::pair<std::string,TimeCommand::Query>*>(
          (int)&v159,
          (int)&v165,
          (int)v24);
  v166 = v25;
  j_CommandRegistry::addEnumValues<TimeCommand::Query>((int)v2, (int)&v168, (unsigned __int64 *)&v165);
  if ( v24 != (void *)v25 )
      v28 = (int *)(*(_DWORD *)v24 - 12);
      if ( v28 != &dword_28898C0 )
        v26 = (unsigned int *)(*(_DWORD *)v24 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      v24 = (char *)v24 + 8;
    while ( v24 != (void *)v25 );
    v24 = v165;
  if ( v24 )
    j_operator delete(v24);
  v29 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v163 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v161 - 12);
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v161 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v159 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = (void *)(v168 - 12);
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v168 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  sub_21E94B4((void **)&v158, "TimeSpec");
  sub_21E94B4((void **)&v143, "sunrise");
  v144 = 0;
  sub_21E94B4((void **)&v145, "day");
  v146 = 1;
  sub_21E94B4((void **)&v147, "noon");
  v148 = 2;
  sub_21E94B4((void **)&v149, "sunset");
  v150 = 3;
  sub_21E94B4((void **)&v151, "night");
  v152 = 4;
  sub_21E94B4((void **)&v153, "midnight");
  v154 = 5;
  v155 = 0;
  v156 = 0;
  v157 = 0;
  v33 = j_operator new(0x30u);
  v155 = v33;
  v157 = (char *)v33 + 48;
  v34 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TimeCommand::TimeSpec> const*,std::pair<std::string,TimeCommand::TimeSpec>*>(
          (int)&v143,
          (int)&v155,
          (int)v33);
  v156 = v34;
  j_CommandRegistry::addEnumValues<TimeCommand::TimeSpec>((int)v2, (int)&v158, (unsigned __int64 *)&v155);
  if ( v33 != (void *)v34 )
      v37 = (int *)(*(_DWORD *)v33 - 12);
      if ( v37 != &dword_28898C0 )
        v35 = (unsigned int *)(*(_DWORD *)v33 - 4);
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j__ZdlPv_9(v37);
      v33 = (char *)v33 + 8;
    while ( v33 != (void *)v34 );
    v33 = v155;
  if ( v33 )
    j_operator delete(v33);
  v38 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v153 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  v39 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v151 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v149 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  v41 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v147 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  v42 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v145 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  v43 = (void *)(v143 - 12);
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v143 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = (void *)(v158 - 12);
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v158 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  sub_21E94B4((void **)&v142, "time");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v142, "commands.time.description", 1, 0, 0);
  v46 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v104 = v142 - 4;
        v105 = __ldrex((unsigned int *)v45);
        HIDWORD(v45) = v105 - 1;
      while ( __strex(v105 - 1, (unsigned int *)v45) );
      v105 = *(_DWORD *)v45;
      HIDWORD(v45) = *(_DWORD *)v45 - 1;
      *(_DWORD *)v45 = HIDWORD(v45);
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  LODWORD(v45) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v141, 1, v45);
  v47 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::Mode>(void)::id;
  __dmb();
  if ( !(v47 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::Mode>(void)::id) )
    type_id<CommandRegistry,TimeCommand::Mode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::Mode>(void)::id);
  v190 = type_id<CommandRegistry,TimeCommand::Mode>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v139,
    &v190,
    (unsigned int)CommandRegistry::parse<TimeCommand::Mode>,
    "mode",
    1,
    (int)"TimeModeAdd",
    20,
    0,
    -1);
  v48 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v48 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v187 = type_id<CommandRegistry,int>(void)::id;
  v49 = j_CommandParameterData::CommandParameterData(
          (int)&v137,
          &v187,
          (unsigned int)CommandRegistry::parse<int>,
          "amount",
          0,
          32,
          -1);
  j_CommandRegistry::registerOverload<TimeCommand,CommandParameterData,CommandParameterData>(
    (int)v2,
    "time",
    v141,
    v49);
  v51 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v106 = v138 - 4;
        v107 = __ldrex((unsigned int *)v50);
        HIDWORD(v50) = v107 - 1;
      while ( __strex(v107 - 1, (unsigned int *)v50) );
      v107 = *(_DWORD *)v50;
      HIDWORD(v50) = *(_DWORD *)v50 - 1;
      *(_DWORD *)v50 = HIDWORD(v50);
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v51);
  v52 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v108 = v140 - 4;
        v109 = __ldrex((unsigned int *)v50);
        HIDWORD(v50) = v109 - 1;
      while ( __strex(v109 - 1, (unsigned int *)v50) );
      v109 = *(_DWORD *)v50;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  LODWORD(v50) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v136, 1, v50);
  v53 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::Mode>(void)::id;
  if ( !(v53 & 1)
    (int)&v134,
    (int)"TimeModeSet",
  v54 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v54 & 1)
  v188 = type_id<CommandRegistry,int>(void)::id;
  v55 = j_CommandParameterData::CommandParameterData(
          (int)&v132,
          &v188,
    v136,
    v55);
  v57 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v110 = v133 - 4;
        v111 = __ldrex((unsigned int *)v56);
        HIDWORD(v56) = v111 - 1;
      while ( __strex(v111 - 1, (unsigned int *)v56) );
      v111 = *(_DWORD *)v56;
      HIDWORD(v56) = *(_DWORD *)v56 - 1;
      *(_DWORD *)v56 = HIDWORD(v56);
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  v58 = (void *)(v135 - 12);
  if ( (int *)(v135 - 12) != &dword_28898C0 )
    v112 = v135 - 4;
        v113 = __ldrex((unsigned int *)v56);
        HIDWORD(v56) = v113 - 1;
      while ( __strex(v113 - 1, (unsigned int *)v56) );
      v113 = *(_DWORD *)v56;
    if ( v113 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
  LODWORD(v56) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v131, 1, v56);
  v59 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::Mode>(void)::id;
  if ( !(v59 & 1)
    (int)&v129,
  v60 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::TimeSpec>(void)::id[0];
  if ( !(v60 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::TimeSpec>(void)::id) )
    type_id<CommandRegistry,TimeCommand::TimeSpec>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::TimeSpec>(void)::id);
  v189 = type_id<CommandRegistry,TimeCommand::TimeSpec>(void)::id;
  v61 = j_CommandParameterData::CommandParameterData(
          (int)&v127,
          &v189,
          (unsigned int)CommandRegistry::parse<TimeCommand::TimeSpec>,
          "time",
          28,
    v131,
    v61);
  v63 = (void *)(v128 - 12);
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v114 = v128 - 4;
        v115 = __ldrex((unsigned int *)v62);
        HIDWORD(v62) = v115 - 1;
      while ( __strex(v115 - 1, (unsigned int *)v62) );
      v115 = *(_DWORD *)v62;
      HIDWORD(v62) = *(_DWORD *)v62 - 1;
      *(_DWORD *)v62 = HIDWORD(v62);
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v63);
  v64 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v116 = v130 - 4;
        v117 = __ldrex((unsigned int *)v62);
        HIDWORD(v62) = v117 - 1;
      while ( __strex(v117 - 1, (unsigned int *)v62) );
      v117 = *(_DWORD *)v62;
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v64);
  LODWORD(v62) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v126, 1, v62);
  v65 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::Mode>(void)::id;
  if ( !(v65 & 1)
    (int)&v124,
    (int)"TimeModeQuery",
  v66 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::Query>(void)::id;
  if ( !(v66 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::Query>(void)::id) )
    type_id<CommandRegistry,TimeCommand::Query>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TimeCommand::Query>(void)::id);
  v191 = type_id<CommandRegistry,TimeCommand::Query>(void)::id;
  v67 = j_CommandParameterData::CommandParameterData(
          (int)&v122,
          &v191,
          (unsigned int)CommandRegistry::parse<TimeCommand::Query>,
          24,
    v126,
    v67);
  v68 = (void *)(v123 - 12);
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v123 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  v69 = (void *)(v125 - 12);
  if ( (int *)(v125 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v125 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
}


int __fastcall TimeCommand::TimeCommand(Command *a1)
{
  int result; // r0@1
  int v2; // r12@1

  result = j_Command::Command(a1);
  v2 = result + 20;
  *(_DWORD *)result = &off_271A28C;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = 2;
  *(_DWORD *)(v2 + 8) = 6;
  *(_DWORD *)(result + 32) = 0;
  return result;
}


void __fastcall TimeCommand::setup(TimeCommand *this, CommandRegistry *a2)
{
  TimeCommand::setup(this, a2);
}
