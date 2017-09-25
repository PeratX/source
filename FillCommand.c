

void __fastcall FillCommand::~FillCommand(FillCommand *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Command::~Command(this);
  j_j_j__ZdlPv_7(v1);
}


Command *__fastcall FillCommand::FillCommand(Command *a1)
{
  Command *v1; // r4@1
  Command *result; // r0@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A060;
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 20));
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 36));
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  *((_DWORD *)v1 + 15) = 0;
  *((_DWORD *)v1 + 16) = 0;
  result = v1;
  *((_DWORD *)v1 + 17) = -1;
  return result;
}


void __fastcall FillCommand::execute(FillCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  FillCommand::execute(this, a2, a3);
}


void __fastcall FillCommand::execute(FillCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  FillCommand *v3; // r5@1
  const BlockPos *v4; // r9@1
  CommandOutput *v5; // r8@1
  __int64 v6; // r0@1
  int v7; // r4@1
  int v8; // r2@1
  int v9; // r5@1
  int v10; // r7@9
  int v11; // r7@13
  void *v12; // r4@14
  void *v13; // r6@14
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  int *v16; // r0@24
  void *v17; // r0@29
  void *v18; // r0@30
  void *v19; // r0@31
  unsigned int *v20; // r2@32
  signed int v21; // r1@34
  CommandOutput *v22; // r3@36
  int v23; // r0@41
  bool v24; // zf@41
  char *v25; // r10@47
  int v26; // r0@47
  void *v27; // r4@48
  void *v28; // r6@48
  unsigned int *v29; // r2@50
  signed int v30; // r1@52
  int *v31; // r0@58
  void *v32; // r0@63
  unsigned int *v33; // r2@64
  signed int v34; // r1@66
  void *v35; // r4@68
  void *v36; // r6@68
  unsigned int *v37; // r2@70
  signed int v38; // r1@72
  int *v39; // r0@78
  void *v40; // r4@84
  unsigned int *v41; // r2@89
  signed int v42; // r1@91
  unsigned int *v43; // r2@93
  signed int v44; // r1@95
  const void **v45; // r4@97
  void *v46; // r4@97
  void *v47; // r6@97
  unsigned int *v48; // r2@99
  signed int v49; // r1@101
  int *v50; // r0@107
  void *v51; // r0@112
  char *v52; // r0@113
  int v53; // r1@135
  const BlockPos *v54; // r7@135
  int v55; // r0@137
  signed int v56; // r11@138
  int v57; // r1@140
  int v58; // r5@141
  int v59; // r0@141
  char v60; // r6@141
  int v61; // r0@142
  bool v62; // zf@143
  bool v63; // zf@146
  bool v64; // zf@149
  int v65; // r1@156
  int v66; // r1@158
  bool v67; // zf@158
  Level *v68; // r0@163
  void (__fastcall *v69)(char *); // r4@164
  void (*v70)(void); // r6@165
  char *v71; // r4@166
  char *v72; // r9@166
  int v73; // r0@168
  int v74; // r4@168
  unsigned int v75; // r1@168
  unsigned int v76; // r2@170
  unsigned int v77; // r0@170
  bool v78; // cf@172
  int v79; // r6@175
  int v80; // r1@175
  int v81; // r1@175
  char *i; // r2@175
  int v83; // r1@176
  bool v84; // nf@185
  unsigned __int8 v85; // vf@185
  const BlockPos *v86; // r5@189
  void *v87; // r0@191
  void *v88; // r4@193
  void *v89; // r6@193
  unsigned int *v90; // r2@195
  signed int v91; // r1@197
  int *v92; // r0@203
  void *v93; // r0@208
  void *v94; // r0@209
  Level *v95; // r0@210
  MinecraftEventing *v96; // r4@210
  char *v97; // r4@211
  int v98; // r6@211
  unsigned int *v99; // r2@213
  signed int v100; // r1@215
  int *v101; // r0@221
  void *v102; // r0@226
  void *v103; // r0@227
  const void **v104; // r4@231
  char *v105; // r4@231
  int v106; // r6@231
  unsigned int *v107; // r2@233
  signed int v108; // r1@235
  int *v109; // r0@241
  void *v110; // r0@246
  char *v111; // r0@247
  unsigned int *v112; // r2@256
  signed int v113; // r1@258
  unsigned int *v114; // r2@260
  signed int v115; // r1@262
  unsigned int *v116; // r2@264
  signed int v117; // r1@266
  unsigned int *v118; // r2@276
  signed int v119; // r1@278
  unsigned int *v120; // r2@280
  signed int v121; // r1@282
  unsigned int *v122; // r2@288
  signed int v123; // r1@290
  unsigned int *v124; // r2@292
  signed int v125; // r1@294
  unsigned int *v126; // r2@296
  signed int v127; // r1@298
  unsigned int *v128; // r2@300
  signed int v129; // r1@302
  const BlockPos *v130; // [sp+10h] [bp-188h]@46
  int v131; // [sp+1Ch] [bp-17Ch]@36
  int v132; // [sp+24h] [bp-174h]@135
  int v133; // [sp+28h] [bp-170h]@136
  char *ptr; // [sp+2Ch] [bp-16Ch]@136
  int v135; // [sp+30h] [bp-168h]@135
  FillCommand *v136; // [sp+34h] [bp-164h]@1
  char v137; // [sp+38h] [bp-160h]@210
  int v138; // [sp+3Ch] [bp-15Ch]@193
  void *v139; // [sp+44h] [bp-154h]@193
  void *v140; // [sp+48h] [bp-150h]@193
  char *v141; // [sp+4Ch] [bp-14Ch]@193
  int v142; // [sp+54h] [bp-144h]@193
  int v143; // [sp+58h] [bp-140h]@211
  char *v144; // [sp+60h] [bp-138h]@211
  char *v145; // [sp+64h] [bp-134h]@211
  char *v146; // [sp+68h] [bp-130h]@211
  int v147; // [sp+70h] [bp-128h]@211
  int v148; // [sp+74h] [bp-124h]@191
  char v149; // [sp+78h] [bp-120h]@165
  char v150; // [sp+79h] [bp-11Fh]@165
  char v151; // [sp+7Ch] [bp-11Ch]@164
  char v152; // [sp+7Dh] [bp-11Bh]@164
  char v153; // [sp+80h] [bp-118h]@164
  char v154; // [sp+81h] [bp-117h]@164
  char v155; // [sp+84h] [bp-114h]@164
  char v156; // [sp+85h] [bp-113h]@164
  unsigned __int16 v157; // [sp+86h] [bp-112h]@141
  int v158; // [sp+88h] [bp-110h]@141
  int v159; // [sp+8Ch] [bp-10Ch]@141
  int v160; // [sp+90h] [bp-108h]@141
  char *v161; // [sp+94h] [bp-104h]@231
  int v162; // [sp+98h] [bp-100h]@231
  char *v163; // [sp+A0h] [bp-F8h]@231
  char *v164; // [sp+A4h] [bp-F4h]@231
  char *v165; // [sp+A8h] [bp-F0h]@231
  int v166; // [sp+B0h] [bp-E8h]@231
  char *v167; // [sp+B4h] [bp-E4h]@97
  int v168; // [sp+B8h] [bp-E0h]@97
  void *v169; // [sp+C0h] [bp-D8h]@97
  void *v170; // [sp+C4h] [bp-D4h]@97
  char *v171; // [sp+C8h] [bp-D0h]@97
  int v172; // [sp+D0h] [bp-C8h]@97
  char v173; // [sp+D7h] [bp-C1h]@39
  __int64 v174; // [sp+D8h] [bp-C0h]@48
  int v175; // [sp+E0h] [bp-B8h]@48
  int v176; // [sp+E8h] [bp-B0h]@48
  __int64 v177; // [sp+ECh] [bp-ACh]@68
  int v178; // [sp+F4h] [bp-A4h]@68
  int v179; // [sp+FCh] [bp-9Ch]@68
  int v180; // [sp+100h] [bp-98h]@36
  int v181; // [sp+104h] [bp-94h]@14
  int v182; // [sp+10Ch] [bp-8Ch]@14
  void *v183; // [sp+114h] [bp-84h]@14
  void *v184; // [sp+118h] [bp-80h]@14
  char *v185; // [sp+11Ch] [bp-7Ch]@14
  int v186; // [sp+124h] [bp-74h]@14
  int v187; // [sp+128h] [bp-70h]@13
  int v188; // [sp+12Ch] [bp-6Ch]@13
  int v189; // [sp+130h] [bp-68h]@13
  int v190; // [sp+134h] [bp-64h]@9
  int v191; // [sp+138h] [bp-60h]@9
  int v192; // [sp+13Ch] [bp-5Ch]@13
  char v193; // [sp+140h] [bp-58h]@1
  int v194; // [sp+14Ch] [bp-4Ch]@1
  int v195; // [sp+150h] [bp-48h]@5
  int v196; // [sp+154h] [bp-44h]@9
  char v197; // [sp+158h] [bp-40h]@1
  int v198; // [sp+164h] [bp-34h]@1
  int v199; // [sp+168h] [bp-30h]@1
  int v200; // [sp+16Ch] [bp-2Ch]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  v136 = this;
  j_CommandPosition::getPosition((CommandPosition *)&v197, (FillCommand *)((char *)this + 20), (int)a2);
  j_BlockPos::BlockPos((int)&v198, (int)&v197);
  j_CommandPosition::getPosition((CommandPosition *)&v193, (FillCommand *)((char *)v3 + 36), (int)v4);
  j_BlockPos::BlockPos((int)&v194, (int)&v193);
  v6 = *(_QWORD *)&v198;
  v7 = v199;
  v8 = v200;
  v9 = v198;
  if ( v194 < v198 )
    v9 = v194;
  if ( v198 < v194 )
    LODWORD(v6) = v194;
  if ( v195 < v199 )
    HIDWORD(v6) = v195;
  if ( v199 < v195 )
    v7 = v195;
  v10 = v7 + 1 - HIDWORD(v6);
  v190 = v9;
  v191 = HIDWORD(v6);
  HIDWORD(v6) = v200;
  if ( v196 < v200 )
    HIDWORD(v6) = v196;
  if ( v200 < v196 )
    v8 = v196;
  v192 = HIDWORD(v6);
  v187 = v6;
  v188 = v7;
  v189 = v8;
  v11 = (v8 + 1 - HIDWORD(v6)) * v10 * (v6 + 1 - v9);
  if ( v11 > 0x8000 )
  {
    sub_21E94B4((void **)&v186, "commands.fill.tooManyBlocks");
    j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v181, v11);
    j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v182, 0x8000);
    v183 = 0;
    v184 = 0;
    v185 = 0;
    v183 = j_operator new(0x10u);
    v185 = (char *)v183 + 16;
    v184 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                     (int)&v181,
                     (int)&v183,
                     (int)v183);
    j_CommandOutput::error(v5, &v186, (unsigned __int64 *)&v183);
    v13 = v184;
    v12 = v183;
    if ( v183 != v184 )
    {
      do
      {
        v16 = (int *)(*(_DWORD *)v12 - 12);
        if ( v16 != &dword_28898C0 )
        {
          v14 = (unsigned int *)(*(_DWORD *)v12 - 4);
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
            j_j_j_j__ZdlPv_9(v16);
        }
        v12 = (char *)v12 + 8;
      }
      while ( v12 != v13 );
      v12 = v183;
    }
    if ( v12 )
      j_operator delete(v12);
    v17 = (void *)(v182 - 12);
    if ( (int *)(v182 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v182 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
      else
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    v18 = (void *)(v181 - 12);
    if ( (int *)(v181 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v181 - 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    v19 = (void *)(v186 - 12);
    if ( (int *)(v186 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v186 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    return;
  }
  j_CommandOrigin::getAreaAt((CommandOrigin *)&v180, v4, (const BlockPos *)&v190, (const BlockPos *)&v187);
  v131 = v180;
  if ( !v180 )
    sub_21E94B4((void **)&v179, "commands.fill.outOfWorld");
    v177 = 0LL;
    v178 = 0;
    j_CommandOutput::error(v5, &v179, (unsigned __int64 *)&v177);
    v36 = (void *)HIDWORD(v177);
    v35 = (void *)v177;
    if ( (_DWORD)v177 != HIDWORD(v177) )
        v39 = (int *)(*(_DWORD *)v35 - 12);
        if ( v39 != &dword_28898C0 )
          v37 = (unsigned int *)(*(_DWORD *)v35 - 4);
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 <= 0 )
            j_j_j_j__ZdlPv_9(v39);
        v35 = (char *)v35 + 8;
      while ( v35 != v36 );
      v35 = (void *)v177;
    if ( v35 )
      j_operator delete(v35);
    v32 = (void *)(v179 - 12);
    if ( (int *)(v179 - 12) == &dword_28898C0 )
      goto LABEL_84;
    v33 = (unsigned int *)(v179 - 4);
    if ( !&pthread_create )
      goto LABEL_253;
    __dmb();
    do
      v34 = __ldrex(v33);
    while ( __strex(v34 - 1, v33) );
    goto LABEL_254;
  if ( v191 < 0 || v188 >= *(_WORD *)(v180 + 32) )
    sub_21E94B4((void **)&v176, "commands.fill.outOfWorld");
    v174 = 0LL;
    v175 = 0;
    j_CommandOutput::error(v5, &v176, (unsigned __int64 *)&v174);
    v28 = (void *)HIDWORD(v174);
    v27 = (void *)v174;
    if ( (_DWORD)v174 != HIDWORD(v174) )
        v31 = (int *)(*(_DWORD *)v27 - 12);
        if ( v31 != &dword_28898C0 )
          v29 = (unsigned int *)(*(_DWORD *)v27 - 4);
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
            v30 = (*v29)--;
          if ( v30 <= 0 )
            j_j_j_j__ZdlPv_9(v31);
        v27 = (char *)v27 + 8;
      while ( v27 != v28 );
      v27 = (void *)v174;
    if ( v27 )
      j_operator delete(v27);
    v32 = (void *)(v176 - 12);
    if ( (int *)(v176 - 12) == &dword_28898C0 )
    v33 = (unsigned int *)(v176 - 4);
  v173 = 0;
  if ( j_Command::validData(*((Command **)v136 + 16), (int)&v173, (unsigned __int8 *)v5, v22) == 1 )
    if ( (*(int (**)(void))(**((_DWORD **)v136 + 13) + 108))() )
      v23 = *((_DWORD *)v136 + 14);
      v24 = v23 == 0;
      if ( v23 )
        v24 = *((_DWORD *)v136 + 17) == -1;
      if ( v24 || (*(int (**)(void))(*(_DWORD *)v23 + 108))() )
        if ( (unsigned int)v11 >= 0x15555556 )
          sub_21E5A04("vector::reserve");
        v130 = v4;
        if ( v11 )
          v25 = (char *)j_operator new(12 * v11);
          v26 = (int)&v25[12 * v11];
        else
          v25 = 0;
          v26 = 0;
        v132 = v26;
        v53 = v187;
        v54 = (const BlockPos *)(v131 + 8);
        v135 = v190;
        if ( v190 <= v187 )
          v55 = v188;
          v133 = 0;
          ptr = v25;
          do
            v56 = v191;
            if ( v191 <= v55 )
            {
              do
              {
                if ( v56 >= *(_WORD *)(v131 + 32) )
                  break;
                v57 = v192;
                if ( v192 <= v189 )
                {
                  do
                  {
                    v58 = v57;
                    v158 = v135;
                    v159 = v56;
                    v160 = v57;
                    j_BlockSource::getBlockAndData((BlockSource *)&v157, v54, (int)&v158);
                    v59 = *((_DWORD *)v136 + 13);
                    v60 = *(_BYTE *)(v59 + 4);
                    if ( (*(int (**)(void))(*(_DWORD *)v59 + 112))() == 1 )
                    {
                      v61 = *((_DWORD *)v136 + 15);
                      switch ( v61 )
                      {
                        case 2:
                        case 3:
                          v62 = v158 == v190;
                          if ( v158 != v190 )
                            v62 = v158 == v187;
                          if ( v62 )
                            goto def_19C2A56;
                          v63 = v159 == v191;
                          if ( v159 != v191 )
                            v63 = v159 == v188;
                          if ( v63 )
                          v64 = v160 == v192;
                          if ( v160 != v192 )
                            v64 = v160 == v189;
                          if ( v64 )
                          if ( v61 == 2 )
                          {
                            v60 = BlockID::AIR;
                          }
                          break;
                        case 4:
                          if ( v157 == (unsigned __int16)FullBlock::AIR )
                        case 0:
                          v65 = *((_DWORD *)v136 + 14);
                          if ( !v65 )
                          if ( *(_BYTE *)(v65 + 4) == (unsigned __int8)v157 )
                            v66 = *((_DWORD *)v136 + 17);
                            v67 = v66 == -1;
                            if ( v66 != -1 )
                              v67 = v66 == (unsigned int)v157 >> 8;
                            if ( v67 )
                              goto def_19C2A56;
                        case 1:
                          v68 = (Level *)j_BlockSource::getLevel(v54);
                          j_Level::destroyBlock(v68, v54, (const BlockPos *)&v158, 1);
                          goto def_19C2A56;
                        default:
def_19C2A56:
                          LOBYTE(v157) = v60;
                          HIBYTE(v157) = v173;
                          v69 = *(void (__fastcall **)(char *))(**((_DWORD **)v136 + 13) + 116);
                          v153 = v60;
                          v154 = v173;
                          v69(&v155);
                          v151 = v155;
                          v152 = v156;
                          if ( j_BlockSource::setBlockAndData((int)v54, (BlockPos *)&v158, (int)&v151, 18, 0) == 1 )
                            v70 = *(void (**)(void))(**((_DWORD **)v136 + 13) + 120);
                            v149 = v155;
                            v150 = v156;
                            v70();
                            if ( v25 == (char *)v132 )
                            {
                              v73 = (v25 - ptr) >> 2;
                              v74 = -1431655765 * v73;
                              v75 = -1431655765 * v73;
                              if ( v25 == ptr )
                                v75 = 1;
                              v77 = v75 + -1431655765 * v73;
                              v76 = v77;
                              if ( v77 > 0x15555555 )
                                v77 = 357913941;
                              v78 = v76 >= v75;
                              LOWORD(v75) = 21846;
                              if ( !v78 )
                              HIWORD(v75) = 5461;
                              if ( v77 >= v75 )
                                sub_21E57F4();
                              v79 = 3 * v77;
                              v72 = (char *)j_operator new(12 * v77);
                              v80 = 3 * v74;
                              v71 = v72;
                              *(_DWORD *)&v72[4 * v80] = v158;
                              v81 = (int)&v72[4 * v80];
                              *(_DWORD *)(v81 + 4) = v159;
                              *(_DWORD *)(v81 + 8) = v160;
                              for ( i = ptr; i != v25; v71 += 12 )
                              {
                                *(_DWORD *)v71 = *(_DWORD *)i;
                                *((_DWORD *)v71 + 1) = *((_DWORD *)i + 1);
                                v83 = *((_DWORD *)i + 2);
                                i += 12;
                                *((_DWORD *)v71 + 2) = v83;
                              }
                              if ( ptr )
                                j_operator delete(ptr);
                              v132 = (int)&v72[4 * v79];
                            }
                            else
                              v71 = v25;
                              *(_DWORD *)v25 = v158;
                              *((_DWORD *)v25 + 1) = v159;
                              *((_DWORD *)v25 + 2) = v160;
                              v72 = ptr;
                            v25 = v71 + 12;
                            ++v133;
                          else
                            v72 = ptr;
                          ptr = v72;
                      }
                    }
                    v57 = v58 + 1;
                  }
                  while ( v58 < v189 );
                  v55 = v188;
                }
                v85 = __OFSUB__(v56, v55);
                v84 = v56++ - v55 < 0;
              }
              while ( v84 ^ v85 );
              v53 = v187;
            }
            v85 = __OFSUB__(v135, v53);
            v84 = v135++ - v53 < 0;
          while ( v84 ^ v85 );
        if ( ptr != v25 )
          v86 = (const BlockPos *)ptr;
            j_BlockSource::updateNeighborsAt(v54, v86);
            v86 = (const BlockPos *)((char *)v86 + 12);
          while ( (const BlockPos *)v25 != v86 );
        j_Block::buildDescriptionName((Block *)&v148, *((_DWORD *)v136 + 13));
        j_CommandOutput::set<std::string>((int)v5, "blockName", &v148);
        v87 = (void *)(v148 - 12);
        if ( (int *)(v148 - 12) != &dword_28898C0 )
          v116 = (unsigned int *)(v148 - 4);
              v117 = __ldrex(v116);
            while ( __strex(v117 - 1, v116) );
            v117 = (*v116)--;
          if ( v117 <= 0 )
            j_j_j_j__ZdlPv_9(v87);
        j_CommandOutput::set<int>((int)v5, "fillCount", v133);
        if ( v133 )
          sub_21E94B4((void **)&v142, "commands.fill.success");
          j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v138, v133);
          v139 = 0;
          v140 = 0;
          v141 = 0;
          v139 = j_operator new(8u);
          v141 = (char *)v139 + 8;
          v140 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                           (int)&v138,
                           (int)&v139,
                           (int)v139);
          j_CommandOutput::success((int)v5, &v142, (unsigned __int64 *)&v139);
          v89 = v140;
          v88 = v139;
          if ( v139 != v140 )
              v92 = (int *)(*(_DWORD *)v88 - 12);
              if ( v92 != &dword_28898C0 )
                v90 = (unsigned int *)(*(_DWORD *)v88 - 4);
                if ( &pthread_create )
                  __dmb();
                    v91 = __ldrex(v90);
                  while ( __strex(v91 - 1, v90) );
                else
                  v91 = (*v90)--;
                if ( v91 <= 0 )
                  j_j_j_j__ZdlPv_9(v92);
              v88 = (char *)v88 + 8;
            while ( v88 != v89 );
            v88 = v139;
          if ( v88 )
            j_operator delete(v88);
          v93 = (void *)(v138 - 12);
          if ( (int *)(v138 - 12) != &dword_28898C0 )
            v118 = (unsigned int *)(v138 - 4);
            if ( &pthread_create )
              __dmb();
                v119 = __ldrex(v118);
              while ( __strex(v119 - 1, v118) );
            else
              v119 = (*v118)--;
            if ( v119 <= 0 )
              j_j_j_j__ZdlPv_9(v93);
          v94 = (void *)(v142 - 12);
          if ( (int *)(v142 - 12) != &dword_28898C0 )
            v120 = (unsigned int *)(v142 - 4);
                v121 = __ldrex(v120);
              while ( __strex(v121 - 1, v120) );
              v121 = (*v120)--;
            if ( v121 <= 0 )
              j_j_j_j__ZdlPv_9(v94);
          v95 = (Level *)(*(int (__fastcall **)(const BlockPos *))(*(_DWORD *)v130 + 24))(v130);
          v96 = (MinecraftEventing *)j_Level::getEventing(v95);
          j_BlockSource::getBlockAndData((BlockSource *)&v137, v54, (int)ptr);
          j_MinecraftEventing::fireEventBlockPlacedByCommand(v96, (const FullBlock *)&v137, v133);
          sub_21E94B4((void **)&v147, "commands.fill.success");
          j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v143, 0);
          v144 = 0;
          v145 = 0;
          v146 = 0;
          v144 = (char *)j_operator new(8u);
          v146 = v144 + 8;
          v145 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                           (int)&v143,
                           (int)&v144,
                           (int)v144);
          j_CommandOutput::error(v5, &v147, (unsigned __int64 *)&v144);
          v98 = (int)v145;
          v97 = v144;
          if ( v144 != v145 )
              v101 = (int *)(*(_DWORD *)v97 - 12);
              if ( v101 != &dword_28898C0 )
                v99 = (unsigned int *)(*(_DWORD *)v97 - 4);
                    v100 = __ldrex(v99);
                  while ( __strex(v100 - 1, v99) );
                  v100 = (*v99)--;
                if ( v100 <= 0 )
                  j_j_j_j__ZdlPv_9(v101);
              v97 += 8;
            while ( v97 != (char *)v98 );
            v97 = v144;
          if ( v97 )
            j_operator delete(v97);
          v102 = (void *)(v143 - 12);
          if ( (int *)(v143 - 12) != &dword_28898C0 )
            v122 = (unsigned int *)(v143 - 4);
                v123 = __ldrex(v122);
              while ( __strex(v123 - 1, v122) );
              v123 = (*v122)--;
            if ( v123 <= 0 )
              j_j_j_j__ZdlPv_9(v102);
          v103 = (void *)(v147 - 12);
          if ( (int *)(v147 - 12) != &dword_28898C0 )
            v124 = (unsigned int *)(v147 - 4);
                v125 = __ldrex(v124);
              while ( __strex(v125 - 1, v124) );
              v125 = (*v124)--;
            if ( v125 <= 0 )
              j_j_j_j__ZdlPv_9(v103);
        if ( ptr )
          j_operator delete(ptr);
        goto LABEL_84;
      sub_21E94B4((void **)&v166, "commands.fill.replace.auxvalue.invalid");
      v104 = (const void **)j_Block::getDescriptionId(*((Block **)v136 + 14));
      v161 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v161, *((_DWORD *)*v104 - 3) + 1);
      sub_21E7408((const void **)&v161, "%", 1u);
      sub_21E72F0((const void **)&v161, v104);
      j_CommandOutputParameter::CommandOutputParameter(&v162, (int *)&v161);
      v163 = 0;
      v164 = 0;
      v165 = 0;
      v163 = (char *)j_operator new(8u);
      v165 = v163 + 8;
      v164 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v162,
                       (int)&v163,
                       (int)v163);
      j_CommandOutput::error(v5, &v166, (unsigned __int64 *)&v163);
      v106 = (int)v164;
      v105 = v163;
      if ( v163 != v164 )
          v109 = (int *)(*(_DWORD *)v105 - 12);
          if ( v109 != &dword_28898C0 )
            v107 = (unsigned int *)(*(_DWORD *)v105 - 4);
                v108 = __ldrex(v107);
              while ( __strex(v108 - 1, v107) );
              v108 = (*v107)--;
            if ( v108 <= 0 )
              j_j_j_j__ZdlPv_9(v109);
          v105 += 8;
        while ( v105 != (char *)v106 );
        v105 = v163;
      if ( v105 )
        j_operator delete(v105);
      v110 = (void *)(v162 - 12);
      if ( (int *)(v162 - 12) != &dword_28898C0 )
        v126 = (unsigned int *)(v162 - 4);
        if ( &pthread_create )
          __dmb();
            v127 = __ldrex(v126);
          while ( __strex(v127 - 1, v126) );
          v127 = (*v126)--;
        if ( v127 <= 0 )
          j_j_j_j__ZdlPv_9(v110);
      v111 = v161 - 12;
      if ( (int *)(v161 - 12) != &dword_28898C0 )
        v128 = (unsigned int *)(v161 - 4);
            v129 = __ldrex(v128);
          while ( __strex(v129 - 1, v128) );
          v129 = (*v128)--;
        if ( v129 <= 0 )
          j_j_j_j__ZdlPv_9(v111);
      v32 = (void *)(v166 - 12);
      if ( (int *)(v166 - 12) == &dword_28898C0 )
      v33 = (unsigned int *)(v166 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        goto LABEL_254;
LABEL_253:
      v34 = (*v33)--;
      goto LABEL_254;
    sub_21E94B4((void **)&v172, "commands.give.item.invalid");
    v45 = (const void **)j_Block::getDescriptionId(*((Block **)v136 + 13));
    v167 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v167, *((_DWORD *)*v45 - 3) + 1);
    sub_21E7408((const void **)&v167, "%", 1u);
    sub_21E72F0((const void **)&v167, v45);
    j_CommandOutputParameter::CommandOutputParameter(&v168, (int *)&v167);
    v169 = 0;
    v170 = 0;
    v171 = 0;
    v169 = j_operator new(8u);
    v171 = (char *)v169 + 8;
    v170 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                     (int)&v168,
                     (int)&v169,
                     (int)v169);
    j_CommandOutput::error(v5, &v172, (unsigned __int64 *)&v169);
    v47 = v170;
    v46 = v169;
    if ( v169 != v170 )
        v50 = (int *)(*(_DWORD *)v46 - 12);
        if ( v50 != &dword_28898C0 )
          v48 = (unsigned int *)(*(_DWORD *)v46 - 4);
              v49 = __ldrex(v48);
            while ( __strex(v49 - 1, v48) );
            v49 = (*v48)--;
          if ( v49 <= 0 )
            j_j_j_j__ZdlPv_9(v50);
        v46 = (char *)v46 + 8;
      while ( v46 != v47 );
      v46 = v169;
    if ( v46 )
      j_operator delete(v46);
    v51 = (void *)(v168 - 12);
    if ( (int *)(v168 - 12) != &dword_28898C0 )
      v112 = (unsigned int *)(v168 - 4);
          v113 = __ldrex(v112);
        while ( __strex(v113 - 1, v112) );
        v113 = (*v112)--;
      if ( v113 <= 0 )
        j_j_j_j__ZdlPv_9(v51);
    v52 = v167 - 12;
    if ( (int *)(v167 - 12) != &dword_28898C0 )
      v114 = (unsigned int *)(v167 - 4);
          v115 = __ldrex(v114);
        while ( __strex(v115 - 1, v114) );
        v115 = (*v114)--;
      if ( v115 <= 0 )
        j_j_j_j__ZdlPv_9(v52);
    v32 = (void *)(v172 - 12);
    if ( (int *)(v172 - 12) == &dword_28898C0 )
    v33 = (unsigned int *)(v172 - 4);
LABEL_254:
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
LABEL_84:
  v40 = (void *)v180;
  if ( v180 )
    j_BlockSource::~BlockSource((BlockSource *)(v180 + 8));
    if ( *(_DWORD *)v40 )
      (*(void (**)(void))(**(_DWORD **)v40 + 4))();
    j_operator delete(v40);
}


void __fastcall FillCommand::setup(FillCommand *this, CommandRegistry *a2)
{
  FillCommand *v2; // r8@1
  void *v3; // r0@1
  void *v4; // r5@2
  int v5; // r6@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int *v8; // r0@12
  void *v9; // r0@17
  void *v10; // r0@18
  void *v11; // r0@19
  void *v12; // r0@20
  void *v13; // r0@21
  void *v14; // r5@22
  int v15; // r6@22
  __int64 v16; // r2@22
  int v17; // r2@24
  signed int v18; // r1@26
  int *v19; // r0@32
  void *v20; // r0@37
  void *v21; // r0@38
  char v22; // r0@39
  char v23; // r0@42
  char v24; // r0@45
  char v25; // r0@48
  char v26; // r0@51
  int v27; // r0@54
  __int64 v28; // r2@54
  void *v29; // r0@54
  void *v30; // r0@55
  void *v31; // r0@56
  void *v32; // r0@57
  void *v33; // r0@58
  char v34; // r0@59
  char v35; // r0@62
  char v36; // r0@65
  char v37; // r0@68
  char v38; // r0@71
  char v39; // r0@74
  char v40; // r0@77
  int v41; // r0@80
  void *v42; // r0@80
  void *v43; // r0@81
  void *v44; // r0@82
  void *v45; // r0@83
  void *v46; // r0@84
  void *v47; // r0@85
  void *v48; // r0@86
  unsigned int *v49; // r2@88
  signed int v50; // r1@90
  unsigned int *v51; // r2@92
  signed int v52; // r1@94
  unsigned int *v53; // r2@96
  signed int v54; // r1@98
  unsigned int *v55; // r2@100
  signed int v56; // r1@102
  unsigned int *v57; // r2@104
  signed int v58; // r1@106
  unsigned int *v59; // r2@108
  signed int v60; // r1@110
  int v61; // r2@112
  signed int v62; // r1@114
  int v63; // r2@116
  signed int v64; // r1@118
  int v65; // r2@120
  signed int v66; // r1@122
  int v67; // r2@124
  signed int v68; // r1@126
  int v69; // r2@128
  signed int v70; // r1@130
  int v71; // r2@132
  signed int v72; // r1@134
  int v73; // r2@136
  signed int v74; // r1@138
  unsigned int *v75; // r2@140
  signed int v76; // r1@142
  unsigned int *v77; // r2@144
  signed int v78; // r1@146
  unsigned int *v79; // r2@148
  signed int v80; // r1@150
  unsigned int *v81; // r2@152
  signed int v82; // r1@154
  unsigned int *v83; // r2@156
  signed int v84; // r1@158
  unsigned int *v85; // r2@160
  signed int v86; // r1@162
  unsigned int *v87; // r2@164
  signed int v88; // r1@166
  char v89; // [sp+1Ch] [bp-2ACh]@80
  int v90; // [sp+28h] [bp-2A0h]@80
  char v91; // [sp+44h] [bp-284h]@77
  int v92; // [sp+50h] [bp-278h]@81
  char v93; // [sp+6Ch] [bp-25Ch]@74
  int v94; // [sp+78h] [bp-250h]@82
  char v95; // [sp+94h] [bp-234h]@71
  int v96; // [sp+A0h] [bp-228h]@83
  char v97; // [sp+BCh] [bp-20Ch]@68
  int v98; // [sp+C8h] [bp-200h]@84
  char v99; // [sp+E4h] [bp-1E4h]@65
  int v100; // [sp+F0h] [bp-1D8h]@85
  char v101; // [sp+10Ch] [bp-1BCh]@62
  int v102; // [sp+118h] [bp-1B0h]@86
  __int64 v103; // [sp+134h] [bp-194h]@59
  char v104; // [sp+13Ch] [bp-18Ch]@54
  int v105; // [sp+148h] [bp-180h]@54
  char v106; // [sp+164h] [bp-164h]@51
  int v107; // [sp+170h] [bp-158h]@55
  char v108; // [sp+18Ch] [bp-13Ch]@48
  int v109; // [sp+198h] [bp-130h]@56
  char v110; // [sp+1B4h] [bp-114h]@45
  int v111; // [sp+1C0h] [bp-108h]@57
  char v112; // [sp+1DCh] [bp-ECh]@42
  int v113; // [sp+1E8h] [bp-E0h]@58
  __int64 v114; // [sp+204h] [bp-C4h]@39
  int v115; // [sp+20Ch] [bp-BCh]@22
  int v116; // [sp+210h] [bp-B8h]@22
  void *v117; // [sp+214h] [bp-B4h]@22
  int v118; // [sp+218h] [bp-B0h]@22
  char *v119; // [sp+21Ch] [bp-ACh]@22
  int v120; // [sp+224h] [bp-A4h]@22
  int v121; // [sp+228h] [bp-A0h]@2
  int v122; // [sp+22Ch] [bp-9Ch]@2
  int v123; // [sp+230h] [bp-98h]@2
  int v124; // [sp+234h] [bp-94h]@2
  int v125; // [sp+238h] [bp-90h]@2
  int v126; // [sp+23Ch] [bp-8Ch]@2
  int v127; // [sp+240h] [bp-88h]@2
  int v128; // [sp+244h] [bp-84h]@2
  void *v129; // [sp+248h] [bp-80h]@2
  int v130; // [sp+24Ch] [bp-7Ch]@2
  char *v131; // [sp+250h] [bp-78h]@2
  int v132; // [sp+258h] [bp-70h]@2
  int v133; // [sp+260h] [bp-68h]@1
  __int16 v134; // [sp+278h] [bp-50h]@45
  unsigned __int16 v135; // [sp+27Ch] [bp-4Ch]@48
  __int16 v136; // [sp+280h] [bp-48h]@51
  __int16 v137; // [sp+284h] [bp-44h]@54
  __int16 v138; // [sp+288h] [bp-40h]@42
  __int16 v139; // [sp+28Ch] [bp-3Ch]@65
  unsigned __int16 v140; // [sp+290h] [bp-38h]@68
  __int16 v141; // [sp+294h] [bp-34h]@71
  __int16 v142; // [sp+298h] [bp-30h]@74
  unsigned __int16 v143; // [sp+29Ch] [bp-2Ch]@77
  __int16 v144; // [sp+2A0h] [bp-28h]@80

  v2 = this;
  sub_21E94B4((void **)&v133, "fill");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v133, "commands.fill.description", 1, 0, 0);
  v3 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
  {
    v49 = (unsigned int *)(v133 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
    }
    else
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  sub_21E94B4((void **)&v132, "FillMode");
  sub_21E94B4((void **)&v121, "outline");
  v122 = 3;
  sub_21E94B4((void **)&v123, "hollow");
  v124 = 2;
  sub_21E94B4((void **)&v125, "destroy");
  v126 = 1;
  sub_21E94B4((void **)&v127, "keep");
  v128 = 4;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v4 = j_operator new(0x20u);
  v129 = v4;
  v131 = (char *)v4 + 32;
  v5 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,FillCommand::FillMode> const*,std::pair<std::string,FillCommand::FillMode>*>(
         (int)&v121,
         (int)&v129,
         (int)v4);
  v130 = v5;
  j_CommandRegistry::addEnumValues<FillCommand::FillMode>((int)v2, (int)&v132, (unsigned __int64 *)&v129);
  if ( v4 != (void *)v5 )
    do
      v8 = (int *)(*(_DWORD *)v4 - 12);
      if ( v8 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*(_DWORD *)v4 - 4);
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
          j_j_j_j__ZdlPv_9(v8);
      }
      v4 = (char *)v4 + 8;
    while ( v4 != (void *)v5 );
    v4 = v129;
  if ( v4 )
    j_operator delete(v4);
  v9 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v127 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v125 - 12);
  if ( (int *)(v125 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v125 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v123 - 12);
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v123 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v121 - 12);
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v121 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v132 - 12);
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v132 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v120, "Replace");
  sub_21E94B4((void **)&v115, "replace");
  v116 = 0;
  v117 = 0;
  v118 = 0;
  v119 = 0;
  v14 = j_operator new(8u);
  v117 = v14;
  v119 = (char *)v14 + 8;
  v15 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,FillCommand::FillMode> const*,std::pair<std::string,FillCommand::FillMode>*>(
          (int)&v115,
          (int)&v117,
          (int)v14);
  v118 = v15;
  j_CommandRegistry::addEnumValues<FillCommand::FillMode>((int)v2, (int)&v120, (unsigned __int64 *)&v117);
  if ( v14 != (void *)v15 )
      v19 = (int *)(*(_DWORD *)v14 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = *(_DWORD *)v14 - 4;
          {
            v18 = __ldrex((unsigned int *)v16);
            HIDWORD(v16) = v18 - 1;
          }
          while ( __strex(v18 - 1, (unsigned int *)v16) );
          v18 = *(_DWORD *)v16;
          HIDWORD(v16) = *(_DWORD *)v16 - 1;
          *(_DWORD *)v16 = HIDWORD(v16);
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v14 = (char *)v14 + 8;
    while ( v14 != (void *)v15 );
    v14 = v117;
  if ( v14 )
    j_operator delete(v14);
  v20 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v61 = v115 - 4;
        v62 = __ldrex((unsigned int *)v16);
        HIDWORD(v16) = v62 - 1;
      while ( __strex(v62 - 1, (unsigned int *)v16) );
      v62 = *(_DWORD *)v16;
      HIDWORD(v16) = *(_DWORD *)v16 - 1;
      *(_DWORD *)v16 = HIDWORD(v16);
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v63 = v120 - 4;
        v64 = __ldrex((unsigned int *)v16);
        HIDWORD(v16) = v64 - 1;
      while ( __strex(v64 - 1, (unsigned int *)v16) );
      v64 = *(_DWORD *)v16;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  LODWORD(v16) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v114, 1, v16);
  v22 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  __dmb();
  if ( !(v22 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id) )
    type_id<CommandRegistry,CommandPosition>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id);
  v138 = type_id<CommandRegistry,CommandPosition>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v112,
    &v138,
    (unsigned int)CommandRegistry::parse<CommandPosition>,
    "from",
    0,
    20,
    -1);
  v23 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v23 & 1)
  v134 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v110,
    &v134,
    "to",
    36,
  v24 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id;
  if ( !(v24 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id) )
    type_id<CommandRegistry,Block const*>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id);
  v135 = type_id<CommandRegistry,Block const*>(void)::id[0];
    (int)&v108,
    &v135,
    (unsigned int)CommandRegistry::parse<Block const*>,
    "tileName",
    52,
  v25 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v25 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v136 = type_id<CommandRegistry,int>(void)::id;
    (int)&v106,
    &v136,
    (unsigned int)CommandRegistry::parse<int>,
    "tileData",
    64,
    1,
  v26 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,FillCommand::FillMode>(void)::id;
  if ( !(v26 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,FillCommand::FillMode>(void)::id) )
    type_id<CommandRegistry,FillCommand::FillMode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,FillCommand::FillMode>(void)::id);
  v137 = type_id<CommandRegistry,FillCommand::FillMode>(void)::id;
  v27 = j_CommandParameterData::CommandParameterData(
          (int)&v104,
          &v137,
          (unsigned int)CommandRegistry::parse<FillCommand::FillMode>,
          "oldBlockHandling",
          1,
          (int)"FillMode",
          60,
          -1);
  j_CommandRegistry::registerOverload<FillCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    (int)v2,
    "fill",
    v114,
    v27);
  v29 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v65 = v105 - 4;
        v66 = __ldrex((unsigned int *)v28);
        HIDWORD(v28) = v66 - 1;
      while ( __strex(v66 - 1, (unsigned int *)v28) );
      v66 = *(_DWORD *)v28;
      HIDWORD(v28) = *(_DWORD *)v28 - 1;
      *(_DWORD *)v28 = HIDWORD(v28);
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v67 = v107 - 4;
        v68 = __ldrex((unsigned int *)v28);
        HIDWORD(v28) = v68 - 1;
      while ( __strex(v68 - 1, (unsigned int *)v28) );
      v68 = *(_DWORD *)v28;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v69 = v109 - 4;
        v70 = __ldrex((unsigned int *)v28);
        HIDWORD(v28) = v70 - 1;
      while ( __strex(v70 - 1, (unsigned int *)v28) );
      v70 = *(_DWORD *)v28;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v71 = v111 - 4;
        v72 = __ldrex((unsigned int *)v28);
        HIDWORD(v28) = v72 - 1;
      while ( __strex(v72 - 1, (unsigned int *)v28) );
      v72 = *(_DWORD *)v28;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v73 = v113 - 4;
        v74 = __ldrex((unsigned int *)v28);
        HIDWORD(v28) = v74 - 1;
      while ( __strex(v74 - 1, (unsigned int *)v28) );
      v74 = *(_DWORD *)v28;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  LODWORD(v28) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v103, 1, v28);
  v34 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v34 & 1)
    (int)&v101,
  v35 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v35 & 1)
  v139 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v99,
    &v139,
  v36 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id;
  if ( !(v36 & 1)
  v140 = type_id<CommandRegistry,Block const*>(void)::id[0];
    (int)&v97,
    &v140,
  v37 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v37 & 1)
  v141 = type_id<CommandRegistry,int>(void)::id;
    (int)&v95,
    &v141,
  v38 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,FillCommand::FillMode>(void)::id;
  if ( !(v38 & 1)
  v142 = type_id<CommandRegistry,FillCommand::FillMode>(void)::id;
    (int)&v93,
    &v142,
    (unsigned int)CommandRegistry::parse<FillCommand::FillMode>,
    "oldBlockHandling",
    (int)"Replace",
    60,
  v39 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Block const*>(void)::id;
  if ( !(v39 & 1)
  v143 = type_id<CommandRegistry,Block const*>(void)::id[0];
    (int)&v91,
    &v143,
    "replaceTileName",
    56,
  v40 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v40 & 1)
  v144 = type_id<CommandRegistry,int>(void)::id;
  v41 = j_CommandParameterData::CommandParameterData(
          (int)&v89,
          &v144,
          (unsigned int)CommandRegistry::parse<int>,
          "replaceDataValue",
          0,
          68,
  j_CommandRegistry::registerOverload<FillCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    v103,
    v41);
  v42 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v90 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  v43 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v92 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v94 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  v45 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v96 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v46 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v98 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  v47 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v100 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  v48 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v102 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
}


void __fastcall FillCommand::~FillCommand(FillCommand *this)
{
  FillCommand::~FillCommand(this);
}


void __fastcall FillCommand::setup(FillCommand *this, CommandRegistry *a2)
{
  FillCommand::setup(this, a2);
}
