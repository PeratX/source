

void __fastcall TickingAreaCommand::_add(TickingAreaCommand *this, const CommandOrigin *a2, CommandOutput *a3, Level *a4, Dimension *a5)
{
  TickingAreaCommand *v5; // r8@1
  const CommandOrigin *v6; // r7@1
  Level *v7; // r11@1
  signed int v8; // r5@2
  int v9; // r0@3
  int v10; // r0@3
  int v11; // r0@3
  int v12; // r0@3
  signed int v13; // r1@4
  int v14; // r5@4
  signed int v15; // r6@4
  signed int v16; // r0@4
  int v17; // r4@4
  signed int v18; // r4@8
  int v19; // r1@16
  int v20; // r7@16
  int v21; // r0@16
  char *v22; // r4@20
  int v23; // r6@20
  unsigned int *v24; // r2@22
  signed int v25; // r1@24
  int *v26; // r0@30
  void *v27; // r0@35
  void *v28; // r0@36
  unsigned int *v29; // r2@37
  signed int v30; // r1@39
  char *v31; // r4@41
  int v32; // r6@41
  unsigned int *v33; // r2@43
  signed int v34; // r1@45
  int *v35; // r0@51
  void *v36; // r0@56
  char *v37; // r4@63
  int v38; // r6@63
  TickingAreasManager *v39; // r0@65
  int v40; // r9@65
  int v41; // r11@66
  __int64 v48; // r4@66
  void *v49; // r4@68
  void *v50; // r6@68
  unsigned int *v51; // r2@70
  signed int v52; // r1@72
  int *v53; // r0@78
  unsigned int *v54; // r2@88
  signed int v55; // r1@90
  int *v56; // r0@96
  void *v57; // r0@101
  unsigned int *v58; // r2@107
  signed int v59; // r1@109
  int *v60; // r0@115
  void *v61; // r0@120
  void *v62; // r0@121
  void *v63; // r0@122
  unsigned int *v64; // r2@123
  signed int v65; // r1@125
  char *v66; // r4@127
  int v67; // r6@127
  unsigned int *v68; // r2@129
  signed int v69; // r1@131
  int *v70; // r0@137
  void *v71; // r0@142
  __int64 v72; // r4@148
  unsigned int *v73; // r2@150
  signed int v74; // r1@152
  int *v75; // r0@158
  void *v76; // r0@163
  void *v77; // r0@164
  char *v78; // r4@166
  int v79; // r6@166
  unsigned int *v80; // r2@168
  signed int v81; // r1@170
  int *v82; // r0@176
  void *v83; // r0@181
  void *v84; // r0@182
  void *v85; // r0@183
  unsigned int *v86; // r2@193
  signed int v87; // r1@195
  unsigned int *v88; // r2@197
  signed int v89; // r1@199
  unsigned int *v90; // r2@201
  signed int v91; // r1@203
  unsigned int *v92; // r2@205
  signed int v93; // r1@207
  unsigned int *v94; // r2@209
  signed int v95; // r1@211
  unsigned int *v96; // r2@217
  signed int v97; // r1@219
  unsigned int *v98; // r2@221
  signed int v99; // r1@223
  unsigned int *v100; // r2@229
  signed int v101; // r1@231
  unsigned int *v102; // r2@233
  signed int v103; // r1@235
  unsigned int *v104; // r2@245
  signed int v105; // r1@247
  unsigned int *v106; // r2@249
  signed int v107; // r1@251
  CommandOutput *v108; // [sp+8h] [bp-208h]@1
  int v109; // [sp+Ch] [bp-204h]@166
  int v110; // [sp+14h] [bp-1FCh]@166
  int v111; // [sp+1Ch] [bp-1F4h]@166
  char *v112; // [sp+24h] [bp-1ECh]@166
  char *v113; // [sp+28h] [bp-1E8h]@166
  char *v114; // [sp+2Ch] [bp-1E4h]@166
  int v115; // [sp+34h] [bp-1DCh]@166
  int v116; // [sp+38h] [bp-1D8h]@148
  int v117; // [sp+3Ch] [bp-1D4h]@148
  int v118; // [sp+40h] [bp-1D0h]@148
  int v119; // [sp+44h] [bp-1CCh]@148
  int v120; // [sp+48h] [bp-1C8h]@148
  int v121; // [sp+4Ch] [bp-1C4h]@148
  int v122; // [sp+50h] [bp-1C0h]@148
  int v123; // [sp+58h] [bp-1B8h]@148
  char *v124; // [sp+60h] [bp-1B0h]@148
  char *v125; // [sp+64h] [bp-1ACh]@148
  char *v126; // [sp+68h] [bp-1A8h]@148
  int v127; // [sp+70h] [bp-1A0h]@148
  int v128; // [sp+74h] [bp-19Ch]@148
  int v129; // [sp+78h] [bp-198h]@148
  int v130; // [sp+7Ch] [bp-194h]@148
  int v131; // [sp+80h] [bp-190h]@148
  int v132; // [sp+84h] [bp-18Ch]@148
  int v133; // [sp+88h] [bp-188h]@148
  float v134; // [sp+8Ch] [bp-184h]@66
  int v135; // [sp+90h] [bp-180h]@66
  char v136; // [sp+98h] [bp-178h]@66
  int v137; // [sp+A4h] [bp-16Ch]@66
  int v138; // [sp+ACh] [bp-164h]@66
  char *v139; // [sp+B4h] [bp-15Ch]@66
  char *v140; // [sp+B8h] [bp-158h]@66
  char *v141; // [sp+BCh] [bp-154h]@66
  int v142; // [sp+C4h] [bp-14Ch]@66
  int v143; // [sp+C8h] [bp-148h]@41
  char *v144; // [sp+D0h] [bp-140h]@41
  char *v145; // [sp+D4h] [bp-13Ch]@41
  char *v146; // [sp+D8h] [bp-138h]@41
  int v147; // [sp+E0h] [bp-130h]@41
  int v148; // [sp+E4h] [bp-12Ch]@127
  char *v149; // [sp+ECh] [bp-124h]@127
  char *v150; // [sp+F0h] [bp-120h]@127
  char *v151; // [sp+F4h] [bp-11Ch]@127
  int v152; // [sp+FCh] [bp-114h]@127
  int v153; // [sp+100h] [bp-110h]@63
  char *v154; // [sp+108h] [bp-108h]@63
  char *v155; // [sp+10Ch] [bp-104h]@63
  char *v156; // [sp+110h] [bp-100h]@63
  int v157; // [sp+118h] [bp-F8h]@63
  int v158; // [sp+11Ch] [bp-F4h]@20
  char *v159; // [sp+124h] [bp-ECh]@20
  char *v160; // [sp+128h] [bp-E8h]@20
  char *v161; // [sp+12Ch] [bp-E4h]@20
  int v162; // [sp+134h] [bp-DCh]@20
  int v163; // [sp+138h] [bp-D8h]@12
  int v164; // [sp+13Ch] [bp-D4h]@14
  int v165; // [sp+140h] [bp-D0h]@16
  int v166; // [sp+144h] [bp-CCh]@6
  int v167; // [sp+148h] [bp-C8h]@8
  int v168; // [sp+14Ch] [bp-C4h]@10
  char v169; // [sp+150h] [bp-C0h]@4
  char v170; // [sp+15Ch] [bp-B4h]@4
  int v171; // [sp+160h] [bp-B0h]@6
  signed int v172; // [sp+164h] [bp-ACh]@8
  char v173; // [sp+168h] [bp-A8h]@4
  char v174; // [sp+174h] [bp-9Ch]@4
  int v175; // [sp+178h] [bp-98h]@4
  signed int v176; // [sp+17Ch] [bp-94h]@4
  char v177; // [sp+180h] [bp-90h]@3
  int v178; // [sp+18Ch] [bp-84h]@3
  int v179; // [sp+190h] [bp-80h]@3
  int v180; // [sp+194h] [bp-7Ch]@3
  __int64 v181; // [sp+198h] [bp-78h]@68
  int v182; // [sp+1A0h] [bp-70h]@68
  int v183; // [sp+1A8h] [bp-68h]@68
  int v184; // [sp+1ACh] [bp-64h]@1
  int v185; // [sp+1B0h] [bp-60h]@1
  int v186; // [sp+1B4h] [bp-5Ch]@1
  int v187; // [sp+1B8h] [bp-58h]@1
  int v188; // [sp+1BCh] [bp-54h]@3
  int v189; // [sp+1C0h] [bp-50h]@3
  int v190; // [sp+1C4h] [bp-4Ch]@3
  int v191; // [sp+1C8h] [bp-48h]@3
  int v192; // [sp+1CCh] [bp-44h]@3
  int v193; // [sp+1D0h] [bp-40h]@3
  int v194; // [sp+1D4h] [bp-3Ch]@3
  int v195; // [sp+1D8h] [bp-38h]@3
  int v196; // [sp+1DCh] [bp-34h]@3
  int v197; // [sp+1E0h] [bp-30h]@3
  int v198; // [sp+1E4h] [bp-2Ch]@3

  v5 = this;
  v6 = a2;
  v7 = a4;
  v108 = a3;
  j___aeabi_memclr8_0((int)&v187, 48);
  v184 = 0;
  v185 = 0;
  v186 = 0;
  if ( *((_DWORD *)v5 + 6) != 1 )
  {
    j_CommandPosition::getPosition((CommandPosition *)&v173, (TickingAreaCommand *)((char *)v5 + 32), (int)v6);
    j_BlockPos::BlockPos((int)&v174, (int)&v173);
    j_CommandPosition::getPosition((CommandPosition *)&v169, (TickingAreaCommand *)((char *)v5 + 48), (int)v6);
    j_BlockPos::BlockPos((int)&v170, (int)&v169);
    v13 = *(_DWORD *)&v174;
    v14 = v175;
    v15 = v176;
    v16 = *(_DWORD *)&v174;
    v17 = v175;
    if ( *(_DWORD *)&v170 < *(_DWORD *)&v174 )
      v16 = *(_DWORD *)&v170;
    v166 = v16;
    if ( v171 < v175 )
      v17 = v171;
    v167 = v17;
    v18 = v176;
    if ( v172 < v176 )
      v18 = v172;
    v168 = v18;
    if ( *(_DWORD *)&v174 < *(_DWORD *)&v170 )
      v13 = *(_DWORD *)&v170;
    v163 = v13;
    if ( v175 < v171 )
      v14 = v171;
    v164 = v14;
    if ( v176 < v172 )
      v15 = v172;
    v19 = v13 >> 4;
    v20 = v19 - (v16 >> 4) + 1;
    v165 = v15;
    v187 = v16 >> 4;
    v188 = 0;
    v189 = v18 >> 4;
    v190 = v19;
    v191 = 0;
    v192 = v15 >> 4;
    v193 = v19 - (v16 >> 4) + 1;
    v194 = 1;
    v195 = (v15 >> 4) - (v18 >> 4) + 1;
    v196 = v20 * v195;
    v197 = v20 * v195;
    v198 = 16;
    v21 = j_Level::getTickingAreasMgr(v7);
    v12 = j_TickingAreasManager::addArea(v21, a5, (int)v5 + 64, (int)&v166, (int)&v163);
LABEL_17:
    if ( !v12 )
    {
      if ( *((_DWORD *)v5 + 6) == 1 )
      {
        sub_21E94B4((void **)&v157, "commands.tickingarea-add.radiusfailure");
        j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v153, 4);
        v154 = 0;
        v155 = 0;
        v156 = 0;
        v154 = (char *)j_operator new(8u);
        v156 = v154 + 8;
        v155 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                         (int)&v153,
                         (int)&v154,
                         (int)v154);
        j_CommandOutput::error(v108, &v157, (unsigned __int64 *)&v154);
        v38 = (int)v155;
        v37 = v154;
        if ( v154 != v155 )
        {
          do
          {
            v56 = (int *)(*(_DWORD *)v37 - 12);
            if ( v56 != &dword_28898C0 )
            {
              v54 = (unsigned int *)(*(_DWORD *)v37 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v55 = __ldrex(v54);
                while ( __strex(v55 - 1, v54) );
              }
              else
                v55 = (*v54)--;
              if ( v55 <= 0 )
                j_j_j_j__ZdlPv_9(v56);
            }
            v37 += 8;
          }
          while ( v37 != (char *)v38 );
          v37 = v154;
        }
        if ( v37 )
          j_operator delete(v37);
        v57 = (void *)(v153 - 12);
        if ( (int *)(v153 - 12) != &dword_28898C0 )
          v96 = (unsigned int *)(v153 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v97 = __ldrex(v96);
            while ( __strex(v97 - 1, v96) );
          else
            v97 = (*v96)--;
          if ( v97 <= 0 )
            j_j_j_j__ZdlPv_9(v57);
        v28 = (void *)(v157 - 12);
        if ( (int *)(v157 - 12) != &dword_28898C0 )
          v29 = (unsigned int *)(v157 - 4);
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
            goto LABEL_190;
          goto LABEL_189;
      }
      else
        sub_21E94B4((void **)&v152, "commands.tickingarea-add.chunkfailure");
        j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v148, 100);
        v149 = 0;
        v150 = 0;
        v151 = 0;
        v149 = (char *)j_operator new(8u);
        v151 = v149 + 8;
        v150 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                         (int)&v148,
                         (int)&v149,
                         (int)v149);
        j_CommandOutput::error(v108, &v152, (unsigned __int64 *)&v149);
        v67 = (int)v150;
        v66 = v149;
        if ( v149 != v150 )
            v70 = (int *)(*(_DWORD *)v66 - 12);
            if ( v70 != &dword_28898C0 )
              v68 = (unsigned int *)(*(_DWORD *)v66 - 4);
                  v69 = __ldrex(v68);
                while ( __strex(v69 - 1, v68) );
                v69 = (*v68)--;
              if ( v69 <= 0 )
                j_j_j_j__ZdlPv_9(v70);
            v66 += 8;
          while ( v66 != (char *)v67 );
          v66 = v149;
        if ( v66 )
          j_operator delete(v66);
        v71 = (void *)(v148 - 12);
        if ( (int *)(v148 - 12) != &dword_28898C0 )
          v98 = (unsigned int *)(v148 - 4);
              v99 = __ldrex(v98);
            while ( __strex(v99 - 1, v98) );
            v99 = (*v98)--;
          if ( v99 <= 0 )
            j_j_j_j__ZdlPv_9(v71);
        v28 = (void *)(v152 - 12);
        if ( (int *)(v152 - 12) != &dword_28898C0 )
          v29 = (unsigned int *)(v152 - 4);
      return;
    }
    if ( v12 == 2 )
      sub_21E94B4((void **)&v147, "commands.tickingarea-add.conflictingname");
      j_CommandOutputParameter::CommandOutputParameter(&v143, (int *)v5 + 16);
      v144 = 0;
      v145 = 0;
      v146 = 0;
      v144 = (char *)j_operator new(8u);
      v146 = v144 + 8;
      v145 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v143,
                       (int)&v144,
                       (int)v144);
      j_CommandOutput::error(v108, &v147, (unsigned __int64 *)&v144);
      v32 = (int)v145;
      v31 = v144;
      if ( v144 != v145 )
        do
          v35 = (int *)(*(_DWORD *)v31 - 12);
          if ( v35 != &dword_28898C0 )
            v33 = (unsigned int *)(*(_DWORD *)v31 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v34 = __ldrex(v33);
              while ( __strex(v34 - 1, v33) );
            else
              v34 = (*v33)--;
            if ( v34 <= 0 )
              j_j_j_j__ZdlPv_9(v35);
          v31 += 8;
        while ( v31 != (char *)v32 );
        v31 = v144;
      if ( v31 )
        j_operator delete(v31);
      v36 = (void *)(v143 - 12);
      if ( (int *)(v143 - 12) != &dword_28898C0 )
        v86 = (unsigned int *)(v143 - 4);
        if ( &pthread_create )
          __dmb();
            v87 = __ldrex(v86);
          while ( __strex(v87 - 1, v86) );
        else
          v87 = (*v86)--;
        if ( v87 <= 0 )
          j_j_j_j__ZdlPv_9(v36);
      v28 = (void *)(v147 - 12);
      if ( (int *)(v147 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v147 - 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          goto LABEL_190;
        goto LABEL_189;
    if ( v12 == 1 )
      sub_21E94B4((void **)&v162, "commands.tickingarea-add.failure");
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v158, 10);
      v159 = 0;
      v160 = 0;
      v161 = 0;
      v159 = (char *)j_operator new(8u);
      v161 = v159 + 8;
      v160 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v158,
                       (int)&v159,
                       (int)v159);
      j_CommandOutput::error(v108, &v162, (unsigned __int64 *)&v159);
      v23 = (int)v160;
      v22 = v159;
      if ( v159 != v160 )
          v26 = (int *)(*(_DWORD *)v22 - 12);
          if ( v26 != &dword_28898C0 )
            v24 = (unsigned int *)(*(_DWORD *)v22 - 4);
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
              v25 = (*v24)--;
            if ( v25 <= 0 )
              j_j_j_j__ZdlPv_9(v26);
          v22 += 8;
        while ( v22 != (char *)v23 );
        v22 = v159;
      if ( v22 )
        j_operator delete(v22);
      v27 = (void *)(v158 - 12);
      if ( (int *)(v158 - 12) != &dword_28898C0 )
        v88 = (unsigned int *)(v158 - 4);
            v89 = __ldrex(v88);
          while ( __strex(v89 - 1, v88) );
          v89 = (*v88)--;
        if ( v89 <= 0 )
          j_j_j_j__ZdlPv_9(v27);
      v28 = (void *)(v162 - 12);
      if ( (int *)(v162 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v162 - 4);
LABEL_189:
        v30 = (*v29)--;
LABEL_190:
        if ( v30 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
        return;
    v39 = (TickingAreasManager *)j_Level::getTickingAreasMgr(v7);
    v40 = j_TickingAreasManager::countStandaloneTickingAreas(v39);
    if ( *((_DWORD *)v5 + 6) == 1 )
      sub_21E94B4((void **)&v142, "commands.tickingarea-add-circle.success");
      v41 = (int)v108;
      __asm { VMOV.F32        S0, #0.5 }
      _R0 = (v187 + v190 + 1) * v198;
      _R1 = (v189 + v192 + 1) * v198;
      __asm
        VMOV            S2, R0
        VMOV            S4, R1
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
        VMUL.F32        S2, S2, S0
        VMUL.F32        S0, S4, S0
        VSTR            S2, [SP,#0x210+var_184]
      v135 = 0;
      __asm { VSTR            S0, [SP,#0x210+var_17C] }
      j_BlockPos::BlockPos((int)&v136, (int)&v134);
      j_CommandOutputParameter::CommandOutputParameter((int)&v137, (int)&v136);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v138, *((_DWORD *)v5 + 17));
      v139 = 0;
      v140 = 0;
      v141 = 0;
      v139 = (char *)j_operator new(0x10u);
      v141 = v139 + 16;
      v140 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v137,
                       (int)&v139,
                       (int)v139);
      j_CommandOutput::success((int)v108, &v142, (unsigned __int64 *)&v139);
      v48 = *(_QWORD *)&v139;
      if ( v139 != v140 )
          v60 = (int *)(*(_DWORD *)v48 - 12);
          if ( v60 != &dword_28898C0 )
            v58 = (unsigned int *)(*(_DWORD *)v48 - 4);
                v59 = __ldrex(v58);
              while ( __strex(v59 - 1, v58) );
              v59 = (*v58)--;
            if ( v59 <= 0 )
              j_j_j_j__ZdlPv_9(v60);
          LODWORD(v48) = v48 + 8;
        while ( (_DWORD)v48 != HIDWORD(v48) );
        LODWORD(v48) = v139;
      if ( (_DWORD)v48 )
        j_operator delete((void *)v48);
      v61 = (void *)(v138 - 12);
      if ( (int *)(v138 - 12) != &dword_28898C0 )
        v104 = (unsigned int *)(v138 - 4);
            v105 = __ldrex(v104);
          while ( __strex(v105 - 1, v104) );
          v105 = (*v104)--;
        if ( v105 <= 0 )
          j_j_j_j__ZdlPv_9(v61);
      v62 = (void *)(v137 - 12);
      if ( (int *)(v137 - 12) != &dword_28898C0 )
        v106 = (unsigned int *)(v137 - 4);
            v107 = __ldrex(v106);
          while ( __strex(v107 - 1, v106) );
          v107 = (*v106)--;
        if ( v107 <= 0 )
          j_j_j_j__ZdlPv_9(v62);
      v63 = (void *)(v142 - 12);
      if ( (int *)(v142 - 12) != &dword_28898C0 )
        v64 = (unsigned int *)(v142 - 4);
            v65 = __ldrex(v64);
          while ( __strex(v65 - 1, v64) );
          goto LABEL_242;
        goto LABEL_241;
    else
      j_TickUtil::chunkBoundsToGridBounds((int)&v128, (int)&v187, (int)&v190);
      sub_21E94B4((void **)&v127, "commands.tickingarea-add-bounds.success");
      v119 = v128;
      v120 = v129;
      v121 = v130;
      j_CommandOutputParameter::CommandOutputParameter((int)&v122, (int)&v119);
      v116 = v131;
      v117 = v132;
      v118 = v133;
      j_CommandOutputParameter::CommandOutputParameter((int)&v123, (int)&v116);
      v124 = 0;
      v125 = 0;
      v126 = 0;
      v124 = (char *)j_operator new(0x10u);
      v126 = v124 + 16;
      v125 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v122,
                       (int)&v124,
                       (int)v124);
      j_CommandOutput::success((int)v108, &v127, (unsigned __int64 *)&v124);
      v72 = *(_QWORD *)&v124;
      if ( v124 != v125 )
          v75 = (int *)(*(_DWORD *)v72 - 12);
          if ( v75 != &dword_28898C0 )
            v73 = (unsigned int *)(*(_DWORD *)v72 - 4);
                v74 = __ldrex(v73);
              while ( __strex(v74 - 1, v73) );
              v74 = (*v73)--;
            if ( v74 <= 0 )
              j_j_j_j__ZdlPv_9(v75);
          LODWORD(v72) = v72 + 8;
        while ( (_DWORD)v72 != HIDWORD(v72) );
        LODWORD(v72) = v124;
      if ( (_DWORD)v72 )
        j_operator delete((void *)v72);
      v76 = (void *)(v123 - 12);
      if ( (int *)(v123 - 12) != &dword_28898C0 )
        v100 = (unsigned int *)(v123 - 4);
            v101 = __ldrex(v100);
          while ( __strex(v101 - 1, v100) );
          v101 = (*v100)--;
        if ( v101 <= 0 )
          j_j_j_j__ZdlPv_9(v76);
      v77 = (void *)(v122 - 12);
      if ( (int *)(v122 - 12) != &dword_28898C0 )
        v102 = (unsigned int *)(v122 - 4);
            v103 = __ldrex(v102);
          while ( __strex(v103 - 1, v102) );
          v103 = (*v102)--;
        if ( v103 <= 0 )
          j_j_j_j__ZdlPv_9(v77);
      v63 = (void *)(v127 - 12);
      if ( (int *)(v127 - 12) != &dword_28898C0 )
        v64 = (unsigned int *)(v127 - 4);
LABEL_242:
          if ( v65 <= 0 )
            j_j_j_j__ZdlPv_9(v63);
          goto LABEL_166;
LABEL_241:
        v65 = (*v64)--;
        goto LABEL_242;
LABEL_166:
    sub_21E94B4((void **)&v115, "commands.tickingarea.inuse");
    j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v109, v40 + 1);
    j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v110, 10);
    j_CommandOutputParameter::CommandOutputParameter(&v111);
    v112 = 0;
    v113 = 0;
    v114 = 0;
    v112 = (char *)j_operator new(0x18u);
    v114 = v112 + 24;
    v113 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                     (int)&v109,
                     (int)&v112,
                     (int)v112);
    j_CommandOutput::success(v41, &v115, (unsigned __int64 *)&v112);
    v79 = (int)v113;
    v78 = v112;
    if ( v112 != v113 )
      do
        v82 = (int *)(*(_DWORD *)v78 - 12);
        if ( v82 != &dword_28898C0 )
          v80 = (unsigned int *)(*(_DWORD *)v78 - 4);
              v81 = __ldrex(v80);
            while ( __strex(v81 - 1, v80) );
            v81 = (*v80)--;
          if ( v81 <= 0 )
            j_j_j_j__ZdlPv_9(v82);
        v78 += 8;
      while ( v78 != (char *)v79 );
      v78 = v112;
    if ( v78 )
      j_operator delete(v78);
    v83 = (void *)(v111 - 12);
    if ( (int *)(v111 - 12) != &dword_28898C0 )
      v90 = (unsigned int *)(v111 - 4);
      if ( &pthread_create )
        __dmb();
          v91 = __ldrex(v90);
        while ( __strex(v91 - 1, v90) );
        v91 = (*v90)--;
      if ( v91 <= 0 )
        j_j_j_j__ZdlPv_9(v83);
    v84 = (void *)(v110 - 12);
    if ( (int *)(v110 - 12) != &dword_28898C0 )
      v92 = (unsigned int *)(v110 - 4);
          v93 = __ldrex(v92);
        while ( __strex(v93 - 1, v92) );
        v93 = (*v92)--;
      if ( v93 <= 0 )
        j_j_j_j__ZdlPv_9(v84);
    v85 = (void *)(v109 - 12);
    if ( (int *)(v109 - 12) != &dword_28898C0 )
      v94 = (unsigned int *)(v109 - 4);
          v95 = __ldrex(v94);
        while ( __strex(v95 - 1, v94) );
        v95 = (*v94)--;
      if ( v95 <= 0 )
        j_j_j_j__ZdlPv_9(v85);
    v28 = (void *)(v115 - 12);
    if ( (int *)(v115 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v115 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        goto LABEL_190;
      goto LABEL_189;
    return;
  }
  v8 = *((_DWORD *)v5 + 17);
  if ( v8 > -1 )
    j_CommandPosition::getPosition((CommandPosition *)&v177, (TickingAreaCommand *)((char *)v5 + 32), (int)v6);
    j_BlockPos::BlockPos((int)&v178, (int)&v177);
    v184 = v178;
    v185 = v179;
    v186 = v180;
    v9 = (v178 + 16 * v8) >> 4;
    v187 = (v178 - 16 * v8) >> 4;
    v189 = (v180 - 16 * v8) >> 4;
    v190 = v9;
    v10 = v9 - v187 + 1;
    v192 = (v180 + 16 * v8) >> 4;
    v193 = v10;
    v195 = v192 - v189 + 1;
    v196 = v10 * v195;
    v197 = v10 * v195;
    v11 = j_Level::getTickingAreasMgr(v7);
    v12 = j_TickingAreasManager::addArea(v11, a5, (int)v5 + 64, (int)&v184, 16 * v8);
    goto LABEL_17;
  sub_21E94B4((void **)&v183, "commands.generic.radiusNegative");
  v181 = 0LL;
  v182 = 0;
  j_CommandOutput::error(v108, &v183, (unsigned __int64 *)&v181);
  v50 = (void *)HIDWORD(v181);
  v49 = (void *)v181;
  if ( (_DWORD)v181 != HIDWORD(v181) )
    do
      v53 = (int *)(*(_DWORD *)v49 - 12);
      if ( v53 != &dword_28898C0 )
        v51 = (unsigned int *)(*(_DWORD *)v49 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v53);
      v49 = (char *)v49 + 8;
    while ( v49 != v50 );
    v49 = (void *)v181;
  if ( v49 )
    j_operator delete(v49);
  v28 = (void *)(v183 - 12);
  if ( (int *)(v183 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v183 - 4);
    if ( &pthread_create )
      __dmb();
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      goto LABEL_190;
    goto LABEL_189;
}


void __fastcall TickingAreaCommand::_list(TickingAreaCommand *this, const CommandOrigin *a2, CommandOutput *a3, Level *a4, Dimension *a5)
{
  TickingAreaCommand *v5; // r8@1
  Level *v6; // r9@1
  CommandOutput *v7; // r10@1
  TickingAreasManager *v8; // r0@2
  _DWORD *v9; // r0@3
  __int64 v10; // r1@3
  unsigned __int64 *v11; // r0@5
  void *v12; // r4@6
  void *v13; // r6@6
  void *v14; // r4@8
  void *v15; // r6@8
  unsigned int *v16; // r2@10
  signed int v17; // r1@12
  int *v18; // r0@18
  void *v19; // r0@23
  unsigned int *v20; // r2@24
  signed int v21; // r1@26
  unsigned int *v22; // r2@28
  signed int v23; // r1@30
  int *v24; // r0@36
  void *v25; // r0@41
  int v26; // r4@42
  int v27; // r6@42
  unsigned int *v28; // r2@44
  signed int v29; // r1@46
  int v30; // r1@52
  void *v31; // r0@52
  void *v32; // r0@57
  int v33; // r5@58
  int v34; // r7@58
  char *v35; // r1@59
  unsigned int *v36; // r2@60
  signed int v37; // r4@62
  char *v38; // r4@66
  int v39; // r2@67
  void *v40; // r0@67
  _DWORD *v41; // r0@72
  int v42; // r4@72
  int v43; // r0@75
  int v44; // r2@75
  void *v45; // r5@80
  void *v46; // r6@80
  unsigned int *v47; // r2@82
  signed int v48; // r1@84
  int *v49; // r0@90
  void *v50; // r0@95
  void *v51; // r5@96
  void *v52; // r6@96
  unsigned int *v53; // r2@98
  signed int v54; // r1@100
  int *v55; // r0@106
  void *v56; // r0@111
  TickingAreasManager *v57; // r0@112
  int v58; // r0@112
  void *v59; // r4@112
  void *v60; // r6@112
  unsigned int *v61; // r2@114
  signed int v62; // r1@116
  int *v63; // r0@122
  void *v64; // r0@127
  void *v65; // r0@128
  void *v66; // r0@129
  char *v67; // r0@131
  unsigned int *v68; // r2@133
  signed int v69; // r1@135
  unsigned int *v70; // r2@137
  signed int v71; // r1@139
  unsigned int *v72; // r2@141
  signed int v73; // r1@143
  unsigned int *v74; // r2@145
  signed int v75; // r1@147
  unsigned int *v76; // r2@149
  signed int v77; // r1@151
  unsigned int *v78; // r2@153
  signed int v79; // r1@155
  unsigned int *v80; // r2@189
  signed int v81; // r1@191
  unsigned int *v82; // r2@193
  signed int v83; // r1@195
  int v84; // [sp+4h] [bp-C4h]@112
  int v85; // [sp+Ch] [bp-BCh]@112
  void *v86; // [sp+14h] [bp-B4h]@112
  void *v87; // [sp+18h] [bp-B0h]@112
  char *v88; // [sp+1Ch] [bp-ACh]@112
  int v89; // [sp+24h] [bp-A4h]@112
  int v90; // [sp+28h] [bp-A0h]@96
  void *v91; // [sp+30h] [bp-98h]@96
  void *v92; // [sp+34h] [bp-94h]@96
  char *v93; // [sp+38h] [bp-90h]@96
  int v94; // [sp+3Ch] [bp-8Ch]@80
  void *ptr; // [sp+44h] [bp-84h]@80
  void *v96; // [sp+48h] [bp-80h]@80
  char *v97; // [sp+4Ch] [bp-7Ch]@80
  int v98; // [sp+50h] [bp-78h]@77
  _DWORD *v99; // [sp+54h] [bp-74h]@3
  __int64 v100; // [sp+5Ch] [bp-6Ch]@3
  __int64 v101; // [sp+64h] [bp-64h]@8
  int v102; // [sp+6Ch] [bp-5Ch]@8
  int v103; // [sp+74h] [bp-54h]@8
  int v104; // [sp+78h] [bp-50h]@57
  __int64 v105; // [sp+7Ch] [bp-4Ch]@6
  int v106; // [sp+84h] [bp-44h]@6
  int v107; // [sp+8Ch] [bp-3Ch]@6
  unsigned __int64 v108; // [sp+90h] [bp-38h]@5
  _DWORD *v109; // [sp+9Ch] [bp-2Ch]@1
  char v110; // [sp+A0h] [bp-28h]@59

  v5 = this;
  v6 = a4;
  v7 = a3;
  v109 = &unk_28898CC;
  if ( *((_DWORD *)this + 7) )
  {
    v8 = (TickingAreasManager *)j_Level::getTickingAreasMgr(a4);
    if ( j_TickingAreasManager::countStandaloneTickingAreas(v8) )
    {
      v9 = j_operator new(8u);
      LODWORD(v10) = sub_19FDCBC;
      *v9 = &v109;
      v9[1] = v5;
      HIDWORD(v10) = sub_19FDA4C;
      v99 = v9;
      v100 = v10;
      j_Level::forEachDimension((int)v6, (int)&v99);
      if ( (_DWORD)v100 )
        ((void (*)(void))v100)();
      goto LABEL_72;
    }
    sub_21E94B4((void **)&v103, "commands.tickingarea-list.failure.allDimensions");
    v101 = 0LL;
    v102 = 0;
    j_CommandOutput::error(v7, &v103, (unsigned __int64 *)&v101);
    v15 = (void *)HIDWORD(v101);
    v14 = (void *)v101;
    if ( (_DWORD)v101 != HIDWORD(v101) )
      do
      {
        v18 = (int *)(*(_DWORD *)v14 - 12);
        if ( v18 != &dword_28898C0 )
        {
          v16 = (unsigned int *)(*(_DWORD *)v14 - 4);
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
            j_j_j_j__ZdlPv_9(v18);
        }
        v14 = (char *)v14 + 8;
      }
      while ( v14 != v15 );
      v14 = (void *)v101;
    if ( v14 )
      j_operator delete(v14);
    v19 = (void *)(v103 - 12);
    if ( (int *)(v103 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v103 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
LABEL_166:
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
        goto LABEL_131;
LABEL_165:
      v21 = (*v20)--;
      goto LABEL_166;
  }
  else
    v11 = (unsigned __int64 *)j_Dimension::getTickingAreas(a5);
    j_TickingAreaListBase::getTickingAreasDescription((TickingAreaListBase *)&v108, v11);
    if ( HIDWORD(v108) != (_DWORD)v108 )
      j_TickingAreaCommand::_formatTickingAreaList((const void **)&v104, SHIDWORD(v108), &v108);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v109,
        &v104);
      v32 = (void *)(v104 - 12);
      if ( (int *)(v104 - 12) != &dword_28898C0 )
        v82 = (unsigned int *)(v104 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v83 = __ldrex(v82);
          while ( __strex(v83 - 1, v82) );
        else
          v83 = (*v82)--;
        if ( v83 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      v33 = HIDWORD(v108);
      v34 = v108;
      if ( (_DWORD)v108 != HIDWORD(v108) )
        v35 = &v110;
          v39 = *(_DWORD *)(v34 + 28);
          v40 = (void *)(v39 - 12);
          if ( (int *)(v39 - 12) != &dword_28898C0 )
            v36 = (unsigned int *)(v39 - 4);
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
              v38 = v35;
              j_j_j_j__ZdlPv_9(v40);
              v35 = v38;
          v34 += 36;
        while ( v34 != v33 );
        v34 = v108;
      if ( v34 )
        j_operator delete((void *)v34);
LABEL_72:
      v41 = v109;
      v42 = *(v109 - 3);
      if ( *(v109 - 1) >= 0 )
        sub_21E8010((const void **)&v109);
        v41 = v109;
      if ( *((_BYTE *)v41 + v42 - 1) == 10 )
        v43 = *(v41 - 3);
        v44 = v43 - 1;
        if ( !v43 )
          sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", v44, 0);
        sub_21E7EE0((const void **)&v109, v44, (_BYTE *)1, 0);
      sub_21E8AF4(&v98, (int *)&unk_2825A10);
      if ( *((_DWORD *)v5 + 7) )
        sub_21E7408((const void **)&v98, "%commands.tickingarea-list.success.allDimensions", 0x30u);
      else
        sub_21E7408((const void **)&v98, "%commands.tickingarea-list.success.currentDimension", 0x33u);
      j_CommandOutputParameter::CommandOutputParameter(&v94);
      ptr = 0;
      v96 = 0;
      v97 = 0;
      ptr = j_operator new(8u);
      v97 = (char *)ptr + 8;
      v96 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                      (int)&v94,
                      (int)&ptr,
                      (int)ptr);
      j_CommandOutput::success((int)v7, &v98, (unsigned __int64 *)&ptr);
      v45 = v96;
      v46 = ptr;
      if ( ptr != v96 )
          v49 = (int *)(*(_DWORD *)v46 - 12);
          if ( v49 != &dword_28898C0 )
            v47 = (unsigned int *)(*(_DWORD *)v46 - 4);
                v48 = __ldrex(v47);
              while ( __strex(v48 - 1, v47) );
              v48 = (*v47)--;
            if ( v48 <= 0 )
              j_j_j_j__ZdlPv_9(v49);
          v46 = (char *)v46 + 8;
        while ( v46 != v45 );
        v46 = ptr;
      if ( v46 )
        j_operator delete(v46);
      v50 = (void *)(v94 - 12);
      if ( (int *)(v94 - 12) != &dword_28898C0 )
        v70 = (unsigned int *)(v94 - 4);
            v71 = __ldrex(v70);
          while ( __strex(v71 - 1, v70) );
          v71 = (*v70)--;
        if ( v71 <= 0 )
          j_j_j_j__ZdlPv_9(v50);
      j_CommandOutputParameter::CommandOutputParameter(&v90);
      v91 = 0;
      v92 = 0;
      v93 = 0;
      v91 = j_operator new(8u);
      v93 = (char *)v91 + 8;
      v92 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                      (int)&v90,
                      (int)&v91,
                      (int)v91);
      j_CommandOutput::success((int)v7, (int *)&v109, (unsigned __int64 *)&v91);
      v51 = v92;
      v52 = v91;
      if ( v91 != v92 )
          v55 = (int *)(*(_DWORD *)v52 - 12);
          if ( v55 != &dword_28898C0 )
            v53 = (unsigned int *)(*(_DWORD *)v52 - 4);
                v54 = __ldrex(v53);
              while ( __strex(v54 - 1, v53) );
              v54 = (*v53)--;
            if ( v54 <= 0 )
              j_j_j_j__ZdlPv_9(v55);
          v52 = (char *)v52 + 8;
        while ( v52 != v51 );
        v52 = v91;
      if ( v52 )
        j_operator delete(v52);
      v56 = (void *)(v90 - 12);
      if ( (int *)(v90 - 12) != &dword_28898C0 )
        v72 = (unsigned int *)(v90 - 4);
            v73 = __ldrex(v72);
          while ( __strex(v73 - 1, v72) );
          v73 = (*v72)--;
        if ( v73 <= 0 )
          j_j_j_j__ZdlPv_9(v56);
      sub_21E94B4((void **)&v89, "commands.tickingarea.inuse");
      v57 = (TickingAreasManager *)j_Level::getTickingAreasMgr(v6);
      v58 = j_TickingAreasManager::countStandaloneTickingAreas(v57);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v84, v58);
      j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v85, 10);
      v86 = 0;
      v87 = 0;
      v88 = 0;
      v86 = j_operator new(0x10u);
      v88 = (char *)v86 + 16;
      v87 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                      (int)&v84,
                      (int)&v86,
                      (int)v86);
      j_CommandOutput::success((int)v7, &v89, (unsigned __int64 *)&v86);
      v60 = v87;
      v59 = v86;
      if ( v86 != v87 )
          v63 = (int *)(*(_DWORD *)v59 - 12);
          if ( v63 != &dword_28898C0 )
            v61 = (unsigned int *)(*(_DWORD *)v59 - 4);
                v62 = __ldrex(v61);
              while ( __strex(v62 - 1, v61) );
              v62 = (*v61)--;
            if ( v62 <= 0 )
              j_j_j_j__ZdlPv_9(v63);
          v59 = (char *)v59 + 8;
        while ( v59 != v60 );
        v59 = v86;
      if ( v59 )
        j_operator delete(v59);
      v64 = (void *)(v85 - 12);
      if ( (int *)(v85 - 12) != &dword_28898C0 )
        v74 = (unsigned int *)(v85 - 4);
            v75 = __ldrex(v74);
          while ( __strex(v75 - 1, v74) );
          v75 = (*v74)--;
        if ( v75 <= 0 )
          j_j_j_j__ZdlPv_9(v64);
      v65 = (void *)(v84 - 12);
      if ( (int *)(v84 - 12) != &dword_28898C0 )
        v76 = (unsigned int *)(v84 - 4);
            v77 = __ldrex(v76);
          while ( __strex(v77 - 1, v76) );
          v77 = (*v76)--;
        if ( v77 <= 0 )
          j_j_j_j__ZdlPv_9(v65);
      v66 = (void *)(v89 - 12);
      if ( (int *)(v89 - 12) != &dword_28898C0 )
        v78 = (unsigned int *)(v89 - 4);
            v79 = __ldrex(v78);
          while ( __strex(v79 - 1, v78) );
          v79 = (*v78)--;
        if ( v79 <= 0 )
          j_j_j_j__ZdlPv_9(v66);
      v19 = (void *)(v98 - 12);
      if ( (int *)(v98 - 12) == &dword_28898C0 )
      v20 = (unsigned int *)(v98 - 4);
        goto LABEL_166;
      goto LABEL_165;
    sub_21E94B4((void **)&v107, "commands.tickingarea.noneExist.currentDimension");
    v105 = 0LL;
    v106 = 0;
    j_CommandOutput::error(v7, &v107, (unsigned __int64 *)&v105);
    v13 = (void *)HIDWORD(v105);
    v12 = (void *)v105;
    if ( (_DWORD)v105 != HIDWORD(v105) )
        v24 = (int *)(*(_DWORD *)v12 - 12);
        if ( v24 != &dword_28898C0 )
          v22 = (unsigned int *)(*(_DWORD *)v12 - 4);
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            v23 = (*v22)--;
          if ( v23 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        v12 = (char *)v12 + 8;
      while ( v12 != v13 );
      v12 = (void *)v105;
    if ( v12 )
      j_operator delete(v12);
    v25 = (void *)(v107 - 12);
    if ( (int *)(v107 - 12) != &dword_28898C0 )
      v80 = (unsigned int *)(v107 - 4);
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        v81 = (*v80)--;
      if ( v81 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v27 = HIDWORD(v108);
    v26 = v108;
    if ( (_DWORD)v108 != HIDWORD(v108) )
        v30 = *(_DWORD *)(v26 + 28);
        v31 = (void *)(v30 - 12);
        if ( (int *)(v30 - 12) != &dword_28898C0 )
          v28 = (unsigned int *)(v30 - 4);
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j__ZdlPv_9(v31);
        v26 += 36;
      while ( v26 != v27 );
      v26 = v108;
    if ( v26 )
      j_operator delete((void *)v26);
LABEL_131:
  v67 = (char *)(v109 - 3);
  if ( v109 - 3 != &dword_28898C0 )
    v68 = v109 - 1;
    if ( &pthread_create )
      __dmb();
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
    else
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v67);
}


void __fastcall TickingAreaCommand::execute(TickingAreaCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  TickingAreaCommand::execute(this, a2, a3);
}


void __fastcall TickingAreaCommand::_removeAll(Dimension *this, const CommandOrigin *a2, CommandOutput *a3, Level *a4, Dimension *a5)
{
  Level *v5; // r5@1
  CommandOutput *v6; // r9@1
  unsigned __int64 *v7; // r0@1
  void *v8; // r4@2
  void *v9; // r6@2
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  int *v12; // r0@12
  void *v13; // r0@17
  unsigned int *v14; // r2@18
  signed int v15; // r1@20
  TickingAreasManager *v16; // r0@22
  int v17; // r10@22
  unsigned __int64 v18; // kr08_8@22
  int v19; // r1@22
  int v20; // r5@22
  char *v21; // r6@22
  unsigned int *v22; // r2@24
  signed int v23; // r1@26
  int *v24; // r0@32
  void *v25; // r0@37
  void *v26; // r0@38
  int v27; // r5@39
  char *v28; // r6@39
  unsigned int *v29; // r2@41
  signed int v30; // r1@43
  int *v31; // r0@49
  void *v32; // r0@54
  char *v33; // r4@55
  int v34; // r6@55
  unsigned int *v35; // r2@57
  signed int v36; // r1@59
  int *v37; // r0@65
  void *v38; // r0@70
  void *v39; // r0@71
  void *v40; // r0@72
  int v41; // r4@74
  int v42; // r6@74
  unsigned int *v43; // r2@76
  signed int v44; // r1@78
  int v45; // r1@84
  void *v46; // r0@84
  unsigned int *v47; // r2@90
  signed int v48; // r1@92
  unsigned int *v49; // r2@94
  signed int v50; // r1@96
  unsigned int *v51; // r2@98
  signed int v52; // r1@100
  unsigned int *v53; // r2@102
  signed int v54; // r1@104
  unsigned int *v55; // r2@106
  signed int v56; // r1@108
  unsigned int *v57; // r2@110
  signed int v58; // r1@112
  int v59; // [sp+8h] [bp-A0h]@55
  int v60; // [sp+10h] [bp-98h]@55
  char *v61; // [sp+18h] [bp-90h]@55
  char *v62; // [sp+1Ch] [bp-8Ch]@55
  char *v63; // [sp+20h] [bp-88h]@55
  int v64; // [sp+28h] [bp-80h]@55
  int v65; // [sp+2Ch] [bp-7Ch]@39
  char *v66; // [sp+34h] [bp-74h]@39
  char *v67; // [sp+38h] [bp-70h]@39
  char *v68; // [sp+3Ch] [bp-6Ch]@39
  int v69; // [sp+40h] [bp-68h]@22
  char *v70; // [sp+48h] [bp-60h]@22
  char *v71; // [sp+4Ch] [bp-5Ch]@22
  char *v72; // [sp+50h] [bp-58h]@22
  int v73; // [sp+58h] [bp-50h]@22
  int v74; // [sp+5Ch] [bp-4Ch]@22
  __int64 v75; // [sp+60h] [bp-48h]@2
  int v76; // [sp+68h] [bp-40h]@2
  int v77; // [sp+70h] [bp-38h]@2
  unsigned __int64 v78; // [sp+74h] [bp-34h]@1

  v5 = a4;
  v6 = a3;
  v7 = (unsigned __int64 *)j_Dimension::getTickingAreas(a5);
  j_TickingAreaListBase::removeAllAreas((TickingAreaListBase *)&v78, v7);
  if ( HIDWORD(v78) == (_DWORD)v78 )
  {
    sub_21E94B4((void **)&v77, "commands.tickingarea.noneExist.currentDimension");
    v75 = 0LL;
    v76 = 0;
    j_CommandOutput::error(v6, &v77, (unsigned __int64 *)&v75);
    v9 = (void *)HIDWORD(v75);
    v8 = (void *)v75;
    if ( (_DWORD)v75 != HIDWORD(v75) )
    {
      do
      {
        v12 = (int *)(*(_DWORD *)v8 - 12);
        if ( v12 != &dword_28898C0 )
        {
          v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
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
            j_j_j_j__ZdlPv_9(v12);
        }
        v8 = (char *)v8 + 8;
      }
      while ( v8 != v9 );
      v8 = (void *)v75;
    }
    if ( v8 )
      j_operator delete(v8);
    v13 = (void *)(v77 - 12);
    if ( (int *)(v77 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v77 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        goto LABEL_119;
      goto LABEL_118;
  }
  else
    v16 = (TickingAreasManager *)j_Level::getTickingAreasMgr(v5);
    v17 = j_TickingAreasManager::countStandaloneTickingAreas(v16);
    v18 = v78;
    j_TickingAreaCommand::_formatTickingAreaList((const void **)&v74, v19, &v78);
    sub_21E94B4((void **)&v73, "commands.tickingarea-remove_all.success");
    j_CommandOutputParameter::CommandOutputParameter(&v69);
    v70 = 0;
    v71 = 0;
    v72 = 0;
    v70 = (char *)j_operator new(8u);
    v72 = v70 + 8;
    v71 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v69,
                    (int)&v70,
                    (int)v70);
    j_CommandOutput::success((int)v6, &v73, (unsigned __int64 *)&v70);
    v20 = (int)v71;
    v21 = v70;
    if ( v70 != v71 )
        v24 = (int *)(*(_DWORD *)v21 - 12);
        if ( v24 != &dword_28898C0 )
          v22 = (unsigned int *)(*(_DWORD *)v21 - 4);
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            v23 = (*v22)--;
          if ( v23 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        v21 += 8;
      while ( v21 != (char *)v20 );
      v21 = v70;
    if ( v21 )
      j_operator delete(v21);
    v25 = (void *)(v69 - 12);
    if ( (int *)(v69 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v69 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
      else
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v26 = (void *)(v73 - 12);
    if ( (int *)(v73 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v73 - 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    j_CommandOutputParameter::CommandOutputParameter(&v65);
    v66 = 0;
    v67 = 0;
    v68 = 0;
    v66 = (char *)j_operator new(8u);
    v68 = v66 + 8;
    v67 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v65,
                    (int)&v66,
                    (int)v66);
    j_CommandOutput::success((int)v6, &v74, (unsigned __int64 *)&v66);
    v27 = (int)v67;
    v28 = v66;
    if ( v66 != v67 )
        v31 = (int *)(*(_DWORD *)v28 - 12);
        if ( v31 != &dword_28898C0 )
          v29 = (unsigned int *)(*(_DWORD *)v28 - 4);
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
            v30 = (*v29)--;
          if ( v30 <= 0 )
            j_j_j_j__ZdlPv_9(v31);
        v28 += 8;
      while ( v28 != (char *)v27 );
      v28 = v66;
    if ( v28 )
      j_operator delete(v28);
    v32 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v65 - 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    sub_21E94B4((void **)&v64, "commands.tickingarea.inuse");
    j_CommandOutputParameter::CommandOutputParameter(
      (CommandOutputParameter *)&v59,
      v17 - 954437177 * ((HIDWORD(v18) - (signed int)v18) >> 2));
    j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v60, 10);
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v61 = (char *)j_operator new(0x10u);
    v63 = v61 + 16;
    v62 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v59,
                    (int)&v61,
                    (int)v61);
    j_CommandOutput::success((int)v6, &v64, (unsigned __int64 *)&v61);
    v34 = (int)v62;
    v33 = v61;
    if ( v61 != v62 )
        v37 = (int *)(*(_DWORD *)v33 - 12);
        if ( v37 != &dword_28898C0 )
          v35 = (unsigned int *)(*(_DWORD *)v33 - 4);
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
            v36 = (*v35)--;
          if ( v36 <= 0 )
            j_j_j_j__ZdlPv_9(v37);
        v33 += 8;
      while ( v33 != (char *)v34 );
      v33 = v61;
    if ( v33 )
      j_operator delete(v33);
    v38 = (void *)(v60 - 12);
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v53 = (unsigned int *)(v60 - 4);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j__ZdlPv_9(v38);
    v39 = (void *)(v59 - 12);
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v59 - 4);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j__ZdlPv_9(v39);
    v40 = (void *)(v64 - 12);
    if ( (int *)(v64 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v64 - 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j__ZdlPv_9(v40);
    v13 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v74 - 4);
LABEL_119:
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
        goto LABEL_74;
LABEL_118:
      v15 = (*v14)--;
      goto LABEL_119;
LABEL_74:
  v42 = HIDWORD(v78);
  v41 = v78;
  if ( (_DWORD)v78 != HIDWORD(v78) )
    do
      v45 = *(_DWORD *)(v41 + 28);
      v46 = (void *)(v45 - 12);
      if ( (int *)(v45 - 12) != &dword_28898C0 )
        v43 = (unsigned int *)(v45 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
        else
          v44 = (*v43)--;
        if ( v44 <= 0 )
          j_j_j_j__ZdlPv_9(v46);
      v41 += 36;
    while ( v41 != v42 );
    v41 = v78;
  if ( v41 )
    j_operator delete((void *)v41);
}


void __fastcall TickingAreaCommand::_formatTickingAreaList(const void **a1, int a2, unsigned __int64 *a3)
{
  TickingAreaCommand::_formatTickingAreaList(a1, a2, a3);
}


void __fastcall TickingAreaCommand::_remove(Dimension *this, const CommandOrigin *a2, CommandOutput *a3, Level *a4, Dimension *a5)
{
  CommandOutput *v5; // r10@1
  Dimension *v6; // r6@1
  Level *v7; // r8@1
  unsigned __int64 *v8; // r7@1
  int *v9; // r6@1
  int v10; // t1@1
  char *v11; // r4@3
  int v12; // r6@3
  char *v13; // r4@6
  int v14; // r6@6
  unsigned int *v15; // r2@8
  signed int v16; // r1@10
  int *v17; // r0@16
  void *v18; // r0@21
  void *v19; // r0@22
  int v20; // r4@23
  int v21; // r6@23
  int v22; // r7@24
  unsigned int *v23; // r1@25
  unsigned int v24; // r0@27
  unsigned int *v25; // r5@31
  unsigned int v26; // r0@33
  int v27; // r1@40
  int v28; // r4@40
  int v29; // r6@40
  int v30; // r5@41
  unsigned int *v31; // r1@42
  unsigned int v32; // r0@44
  unsigned int *v33; // r7@48
  unsigned int v34; // r0@50
  unsigned int *v35; // r2@57
  signed int v36; // r1@59
  int *v37; // r0@65
  void *v38; // r0@70
  void *v39; // r0@71
  int v40; // r6@72
  int v41; // r7@73
  unsigned int *v42; // r1@74
  unsigned int v43; // r0@76
  unsigned int *v44; // r5@80
  unsigned int v45; // r0@82
  int v46; // r1@91
  int v47; // r4@91
  int v48; // r5@92
  unsigned int *v49; // r1@93
  unsigned int v50; // r0@95
  unsigned int *v51; // r7@99
  unsigned int v52; // r0@101
  TickingAreasManager *v53; // r0@110
  int v54; // r11@110
  __int64 v55; // r5@110
  int v56; // r1@110
  int v57; // r4@110
  char *v58; // r6@110
  unsigned int *v59; // r2@112
  signed int v60; // r1@114
  int *v61; // r0@120
  void *v62; // r0@125
  void *v63; // r0@126
  int v64; // r4@127
  char *v65; // r6@127
  unsigned int *v66; // r2@129
  signed int v67; // r1@131
  int *v68; // r0@137
  void *v69; // r0@142
  char *v70; // r4@143
  int v71; // r6@143
  unsigned int *v72; // r2@145
  signed int v73; // r1@147
  int *v74; // r0@153
  void *v75; // r0@158
  void *v76; // r0@159
  void *v77; // r0@160
  void *v78; // r0@161
  int v79; // r4@162
  int v80; // r6@162
  unsigned int *v81; // r2@164
  signed int v82; // r1@166
  int v83; // r1@172
  void *v84; // r0@172
  unsigned int *v85; // r2@178
  signed int v86; // r1@180
  unsigned int *v87; // r2@182
  signed int v88; // r1@184
  unsigned int *v89; // r2@186
  signed int v90; // r1@188
  unsigned int *v91; // r2@190
  signed int v92; // r1@192
  unsigned int *v93; // r2@194
  signed int v94; // r1@196
  unsigned int *v95; // r2@198
  signed int v96; // r1@200
  unsigned int *v97; // r2@202
  signed int v98; // r1@204
  unsigned int *v99; // r2@206
  signed int v100; // r1@208
  unsigned int *v101; // r2@210
  signed int v102; // r1@212
  unsigned int *v103; // r2@242
  signed int v104; // r1@244
  unsigned int *v105; // r2@246
  signed int v106; // r1@248
  unsigned __int64 v107; // [sp+0h] [bp-120h]@110
  int v108; // [sp+8h] [bp-118h]@143
  int v109; // [sp+10h] [bp-110h]@143
  char *v110; // [sp+18h] [bp-108h]@143
  char *v111; // [sp+1Ch] [bp-104h]@143
  char *v112; // [sp+20h] [bp-100h]@143
  int v113; // [sp+28h] [bp-F8h]@143
  int v114; // [sp+2Ch] [bp-F4h]@127
  char *v115; // [sp+34h] [bp-ECh]@127
  char *v116; // [sp+38h] [bp-E8h]@127
  char *v117; // [sp+3Ch] [bp-E4h]@127
  int v118; // [sp+40h] [bp-E0h]@110
  char *v119; // [sp+48h] [bp-D8h]@110
  char *v120; // [sp+4Ch] [bp-D4h]@110
  char *v121; // [sp+50h] [bp-D0h]@110
  int v122; // [sp+58h] [bp-C8h]@110
  int v123; // [sp+5Ch] [bp-C4h]@110
  int v124; // [sp+60h] [bp-C0h]@40
  int v125; // [sp+64h] [bp-BCh]@40
  int v126; // [sp+68h] [bp-B8h]@40
  int v127; // [sp+6Ch] [bp-B4h]@3
  char *v128; // [sp+74h] [bp-ACh]@3
  char *v129; // [sp+78h] [bp-A8h]@3
  char *v130; // [sp+7Ch] [bp-A4h]@3
  int v131; // [sp+84h] [bp-9Ch]@3
  unsigned __int64 v132; // [sp+88h] [bp-98h]@2
  int v133; // [sp+94h] [bp-8Ch]@91
  int v134; // [sp+98h] [bp-88h]@91
  int v135; // [sp+9Ch] [bp-84h]@91
  int v136; // [sp+A0h] [bp-80h]@6
  int v137; // [sp+A4h] [bp-7Ch]@6
  int v138; // [sp+A8h] [bp-78h]@6
  int v139; // [sp+ACh] [bp-74h]@6
  char *v140; // [sp+B4h] [bp-6Ch]@6
  char *v141; // [sp+B8h] [bp-68h]@6
  char *v142; // [sp+BCh] [bp-64h]@6
  int v143; // [sp+C4h] [bp-5Ch]@6
  unsigned __int64 v144; // [sp+C8h] [bp-58h]@5
  char v145; // [sp+D4h] [bp-4Ch]@1
  int v146; // [sp+E0h] [bp-40h]@1
  int v147; // [sp+E4h] [bp-3Ch]@6
  int v148; // [sp+E8h] [bp-38h]@6
  int v149; // [sp+ECh] [bp-34h]@1
  int v150; // [sp+F0h] [bp-30h]@1
  int v151; // [sp+F4h] [bp-2Ch]@1

  v5 = a3;
  v6 = this;
  v7 = a4;
  v149 = 0;
  v150 = 0;
  v151 = 0;
  j_CommandPosition::getPosition((CommandPosition *)&v145, (const CommandOrigin *)(this + 16), (int)a2);
  j_BlockPos::BlockPos((int)&v146, (int)&v145);
  v8 = (unsigned __int64 *)j_Dimension::getTickingAreas(a5);
  v10 = *((_DWORD *)v6 + 16);
  v9 = (int *)(v6 + 32);
  if ( *(_DWORD *)(v10 - 12) )
  {
    j_TickingAreaListBase::findAreasNamed((int)&v132, v8, (_BYTE **)v9);
    if ( HIDWORD(v132) == (_DWORD)v132 )
    {
      sub_21E94B4((void **)&v131, "commands.tickingarea-remove.byname.failure");
      j_CommandOutputParameter::CommandOutputParameter(&v127, v9);
      v128 = 0;
      v129 = 0;
      v130 = 0;
      v128 = (char *)j_operator new(8u);
      v130 = v128 + 8;
      v129 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v127,
                       (int)&v128,
                       (int)v128);
      j_CommandOutput::error(v5, &v131, (unsigned __int64 *)&v128);
      v12 = (int)v129;
      v11 = v128;
      if ( v128 != v129 )
      {
        do
        {
          v17 = (int *)(*(_DWORD *)v11 - 12);
          if ( v17 != &dword_28898C0 )
          {
            v15 = (unsigned int *)(*(_DWORD *)v11 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
            }
            else
              v16 = (*v15)--;
            if ( v16 <= 0 )
              j_j_j_j__ZdlPv_9(v17);
          }
          v11 += 8;
        }
        while ( v11 != (char *)v12 );
        v11 = v128;
      }
      if ( v11 )
        j_operator delete(v11);
      v18 = (void *)(v127 - 12);
      if ( (int *)(v127 - 12) != &dword_28898C0 )
        v99 = (unsigned int *)(v127 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v100 = __ldrex(v99);
          while ( __strex(v100 - 1, v99) );
        else
          v100 = (*v99)--;
        if ( v100 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v19 = (void *)(v131 - 12);
      if ( (int *)(v131 - 12) != &dword_28898C0 )
        v101 = (unsigned int *)(v131 - 4);
            v102 = __ldrex(v101);
          while ( __strex(v102 - 1, v101) );
          v102 = (*v101)--;
        if ( v102 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v21 = HIDWORD(v132);
      v20 = v132;
      if ( (_DWORD)v132 != HIDWORD(v132) )
          v22 = *(_DWORD *)(v20 + 4);
          if ( v22 )
            v23 = (unsigned int *)(v22 + 4);
                v24 = __ldrex(v23);
              while ( __strex(v24 - 1, v23) );
              v24 = (*v23)--;
            if ( v24 == 1 )
              v25 = (unsigned int *)(v22 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v26 = __ldrex(v25);
                while ( __strex(v26 - 1, v25) );
              }
              else
                v26 = (*v25)--;
              if ( v26 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
          v20 += 8;
        while ( v20 != v21 );
        v20 = v132;
LABEL_89:
      if ( v20 )
        j_operator delete((void *)v20);
      goto LABEL_162;
    }
    j_TickingAreaListBase::removeAreas((int)&v124, (int)v8, &v132);
    v149 = v124;
    v124 = 0;
    v27 = v125;
    v125 = 0;
    v150 = v27;
    v151 = v126;
    v126 = 0;
    v28 = HIDWORD(v132);
    v29 = v132;
    if ( (_DWORD)v132 != HIDWORD(v132) )
      do
        v30 = *(_DWORD *)(v29 + 4);
        if ( v30 )
          v31 = (unsigned int *)(v30 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
          else
            v32 = (*v31)--;
          if ( v32 == 1 )
            v33 = (unsigned int *)(v30 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
                v34 = __ldrex(v33);
              while ( __strex(v34 - 1, v33) );
              v34 = (*v33)--;
            if ( v34 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
        v29 += 8;
      while ( v29 != v28 );
      v29 = v132;
  }
  else
    j_TickingAreaListBase::findAreasContaining((TickingAreaListBase *)&v144, (const BlockPos *)v8, (int)&v146);
    if ( HIDWORD(v144) == (_DWORD)v144 )
      sub_21E94B4((void **)&v143, "commands.tickingarea-remove.failure");
      v136 = v146;
      v137 = v147;
      v138 = v148;
      j_CommandOutputParameter::CommandOutputParameter((int)&v139, (int)&v136);
      v140 = 0;
      v141 = 0;
      v142 = 0;
      v140 = (char *)j_operator new(8u);
      v142 = v140 + 8;
      v141 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                       (int)&v139,
                       (int)&v140,
                       (int)v140);
      j_CommandOutput::error(v5, &v143, (unsigned __int64 *)&v140);
      v14 = (int)v141;
      v13 = v140;
      if ( v140 != v141 )
          v37 = (int *)(*(_DWORD *)v13 - 12);
          if ( v37 != &dword_28898C0 )
            v35 = (unsigned int *)(*(_DWORD *)v13 - 4);
                v36 = __ldrex(v35);
              while ( __strex(v36 - 1, v35) );
              v36 = (*v35)--;
            if ( v36 <= 0 )
              j_j_j_j__ZdlPv_9(v37);
          v13 += 8;
        while ( v13 != (char *)v14 );
        v13 = v140;
      if ( v13 )
        j_operator delete(v13);
      v38 = (void *)(v139 - 12);
      if ( (int *)(v139 - 12) != &dword_28898C0 )
        v103 = (unsigned int *)(v139 - 4);
            v104 = __ldrex(v103);
          while ( __strex(v104 - 1, v103) );
          v104 = (*v103)--;
        if ( v104 <= 0 )
          j_j_j_j__ZdlPv_9(v38);
      v39 = (void *)(v143 - 12);
      if ( (int *)(v143 - 12) != &dword_28898C0 )
        v105 = (unsigned int *)(v143 - 4);
            v106 = __ldrex(v105);
          while ( __strex(v106 - 1, v105) );
          v106 = (*v105)--;
        if ( v106 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
      v40 = HIDWORD(v144);
      v20 = v144;
      if ( (_DWORD)v144 != HIDWORD(v144) )
          v41 = *(_DWORD *)(v20 + 4);
          if ( v41 )
            v42 = (unsigned int *)(v41 + 4);
                v43 = __ldrex(v42);
              while ( __strex(v43 - 1, v42) );
              v43 = (*v42)--;
            if ( v43 == 1 )
              v44 = (unsigned int *)(v41 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 8))(v41);
                  v45 = __ldrex(v44);
                while ( __strex(v45 - 1, v44) );
                v45 = (*v44)--;
              if ( v45 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v41 + 12))(v41);
        while ( v20 != v40 );
        v20 = v144;
      goto LABEL_89;
    j_TickingAreaListBase::removeAreas((int)&v133, (int)v8, &v144);
    v149 = v133;
    v133 = 0;
    v46 = v134;
    v134 = 0;
    v150 = v46;
    v151 = v135;
    v135 = 0;
    v47 = HIDWORD(v144);
    v29 = v144;
    if ( (_DWORD)v144 != HIDWORD(v144) )
        v48 = *(_DWORD *)(v29 + 4);
        if ( v48 )
          v49 = (unsigned int *)(v48 + 4);
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
            v50 = (*v49)--;
          if ( v50 == 1 )
            v51 = (unsigned int *)(v48 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 8))(v48);
                v52 = __ldrex(v51);
              while ( __strex(v52 - 1, v51) );
              v52 = (*v51)--;
            if ( v52 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 12))(v48);
      while ( v29 != v47 );
      v29 = v144;
  if ( v29 )
    j_operator delete((void *)v29);
  v53 = (TickingAreasManager *)j_Level::getTickingAreasMgr(v7);
  v54 = j_TickingAreasManager::countStandaloneTickingAreas(v53);
  v55 = *(_QWORD *)&v149;
  j_TickingAreaCommand::_formatTickingAreaList((const void **)&v123, v56, (unsigned __int64 *)&v149);
  v107 = __PAIR__(v55, HIDWORD(v55));
  sub_21E94B4((void **)&v122, "commands.tickingarea-remove.success");
  j_CommandOutputParameter::CommandOutputParameter(&v118);
  v119 = 0;
  v120 = 0;
  v121 = 0;
  v119 = (char *)j_operator new(8u);
  v121 = v119 + 8;
  v120 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                   (int)&v118,
                   (int)&v119,
                   (int)v119);
  j_CommandOutput::success((int)v5, &v122, (unsigned __int64 *)&v119);
  v57 = (int)v120;
  v58 = v119;
  if ( v119 != v120 )
    do
      v61 = (int *)(*(_DWORD *)v58 - 12);
      if ( v61 != &dword_28898C0 )
        v59 = (unsigned int *)(*(_DWORD *)v58 - 4);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j__ZdlPv_9(v61);
      v58 += 8;
    while ( v58 != (char *)v57 );
    v58 = v119;
  if ( v58 )
    j_operator delete(v58);
  v62 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v118 - 4);
    if ( &pthread_create )
      __dmb();
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
    else
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v62);
  v63 = (void *)(v122 - 12);
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v122 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v63);
  j_CommandOutputParameter::CommandOutputParameter(&v114);
  v115 = 0;
  v116 = 0;
  v117 = 0;
  v115 = (char *)j_operator new(8u);
  v117 = v115 + 8;
  v116 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                   (int)&v114,
                   (int)&v115,
                   (int)v115);
  j_CommandOutput::success((int)v5, &v123, (unsigned __int64 *)&v115);
  v64 = (int)v116;
  v65 = v115;
  if ( v115 != v116 )
      v68 = (int *)(*(_DWORD *)v65 - 12);
      if ( v68 != &dword_28898C0 )
        v66 = (unsigned int *)(*(_DWORD *)v65 - 4);
            v67 = __ldrex(v66);
          while ( __strex(v67 - 1, v66) );
          v67 = (*v66)--;
        if ( v67 <= 0 )
          j_j_j_j__ZdlPv_9(v68);
      v65 += 8;
    while ( v65 != (char *)v64 );
    v65 = v115;
  if ( v65 )
    j_operator delete(v65);
  v69 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v114 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
  sub_21E94B4((void **)&v113, "commands.tickingarea.inuse");
  j_CommandOutputParameter::CommandOutputParameter(
    (CommandOutputParameter *)&v108,
    v54 - 954437177 * (((signed int)v107 - HIDWORD(v107)) >> 2));
  j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v109, 10);
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v110 = (char *)j_operator new(0x10u);
  v112 = v110 + 16;
  v111 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                   (int)&v108,
                   (int)&v110,
                   (int)v110);
  j_CommandOutput::success((int)v5, &v113, (unsigned __int64 *)&v110);
  v71 = (int)v111;
  v70 = v110;
  if ( v110 != v111 )
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
    v70 = v110;
  if ( v70 )
    j_operator delete(v70);
  v75 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v109 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j__ZdlPv_9(v75);
  v76 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v108 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j__ZdlPv_9(v76);
  v77 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v113 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j__ZdlPv_9(v77);
  v78 = (void *)(v123 - 12);
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v123 - 4);
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j__ZdlPv_9(v78);
LABEL_162:
  v80 = v150;
  v79 = v149;
  if ( v149 != v150 )
      v83 = *(_DWORD *)(v79 + 28);
      v84 = (void *)(v83 - 12);
      if ( (int *)(v83 - 12) != &dword_28898C0 )
        v81 = (unsigned int *)(v83 - 4);
            v82 = __ldrex(v81);
          while ( __strex(v82 - 1, v81) );
          v82 = (*v81)--;
        if ( v82 <= 0 )
          j_j_j_j__ZdlPv_9(v84);
      v79 += 36;
    while ( v79 != v80 );
    v79 = v149;
  if ( v79 )
    j_operator delete((void *)v79);
}


void __fastcall TickingAreaCommand::_formatTickingAreaList(const void **a1, int a2, unsigned __int64 *a3)
{
  const void **v3; // r4@1
  int i; // r5@1
  int v5; // r11@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  const void **v12; // r0@27
  const void **v13; // r0@27
  char *v14; // r0@27
  char *v15; // r0@28
  void *v16; // r0@29
  int v17; // [sp+4h] [bp-34h]@11
  char *v18; // [sp+8h] [bp-30h]@7
  char *v19; // [sp+Ch] [bp-2Ch]@3

  v3 = a1;
  *a1 = &unk_28898CC;
  v5 = *a3 >> 32;
  for ( i = *a3; i != v5; i += 36 )
  {
    j_TickingAreaDescription::asString((TickingAreaDescription *)&v17, i);
    v12 = sub_21E82D8((const void **)&v17, 0, (unsigned int)"- ", (_BYTE *)2);
    v18 = (char *)*v12;
    *v12 = &unk_28898CC;
    v13 = sub_21E7408((const void **)&v18, "\n", 1u);
    v19 = (char *)*v13;
    *v13 = &unk_28898CC;
    sub_21E72F0(v3, (const void **)&v19);
    v14 = v19 - 12;
    if ( (int *)(v19 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v19 - 4);
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
        j_j_j_j__ZdlPv_9(v14);
    }
    v15 = v18 - 12;
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v18 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v17 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
  }
}


void __fastcall TickingAreaCommand::~TickingAreaCommand(TickingAreaCommand *this)
{
  TickingAreaCommand::~TickingAreaCommand(this);
}


void __fastcall TickingAreaCommand::setup(TickingAreaCommand *this, CommandRegistry *a2)
{
  TickingAreaCommand *v2; // r8@1
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
  void *v31; // r5@69
  int v32; // r6@69
  unsigned int *v33; // r2@71
  signed int v34; // r1@73
  int *v35; // r0@79
  void *v36; // r0@84
  void *v37; // r0@85
  void *v38; // r5@86
  int v39; // r6@86
  unsigned int *v40; // r2@88
  signed int v41; // r1@90
  int *v42; // r0@96
  void *v43; // r0@101
  void *v44; // r0@102
  __int64 v45; // r2@103
  void *v46; // r0@103
  char v47; // r0@104
  char v48; // r0@107
  char v49; // r0@110
  char v50; // r0@113
  int v51; // r0@116
  __int64 v52; // r2@116
  void *v53; // r0@116
  void *v54; // r0@117
  void *v55; // r0@118
  void *v56; // r0@119
  char v57; // r0@120
  char v58; // r0@123
  char v59; // r0@126
  char v60; // r0@129
  char v61; // r0@132
  int v62; // r0@135
  __int64 v63; // r2@135
  void *v64; // r0@135
  void *v65; // r0@136
  void *v66; // r0@137
  void *v67; // r0@138
  void *v68; // r0@139
  char v69; // r0@140
  char v70; // r0@143
  int v71; // r0@146
  __int64 v72; // r2@146
  void *v73; // r0@146
  void *v74; // r0@147
  char v75; // r0@148
  char v76; // r0@151
  int v77; // r0@154
  __int64 v78; // r2@154
  void *v79; // r0@154
  void *v80; // r0@155
  char v81; // r0@156
  int v82; // r0@159
  __int64 v83; // r2@159
  void *v84; // r0@159
  char v85; // r0@160
  char v86; // r0@163
  int v87; // r0@166
  void *v88; // r0@166
  void *v89; // r0@167
  unsigned int *v90; // r2@169
  signed int v91; // r1@171
  unsigned int *v92; // r2@173
  signed int v93; // r1@175
  unsigned int *v94; // r2@177
  signed int v95; // r1@179
  unsigned int *v96; // r2@181
  signed int v97; // r1@183
  unsigned int *v98; // r2@185
  signed int v99; // r1@187
  unsigned int *v100; // r2@189
  signed int v101; // r1@191
  unsigned int *v102; // r2@193
  signed int v103; // r1@195
  unsigned int *v104; // r2@197
  signed int v105; // r1@199
  unsigned int *v106; // r2@201
  signed int v107; // r1@203
  unsigned int *v108; // r2@205
  signed int v109; // r1@207
  unsigned int *v110; // r2@209
  signed int v111; // r1@211
  unsigned int *v112; // r2@213
  signed int v113; // r1@215
  int v114; // r2@217
  signed int v115; // r1@219
  int v116; // r2@221
  signed int v117; // r1@223
  int v118; // r2@225
  signed int v119; // r1@227
  int v120; // r2@229
  signed int v121; // r1@231
  int v122; // r2@233
  signed int v123; // r1@235
  int v124; // r2@237
  signed int v125; // r1@239
  int v126; // r2@241
  signed int v127; // r1@243
  int v128; // r2@245
  signed int v129; // r1@247
  int v130; // r2@249
  signed int v131; // r1@251
  int v132; // r2@253
  signed int v133; // r1@255
  int v134; // r2@257
  signed int v135; // r1@259
  int v136; // r2@261
  signed int v137; // r1@263
  int v138; // r2@265
  signed int v139; // r1@267
  int v140; // r2@269
  signed int v141; // r1@271
  int v142; // r2@273
  signed int v143; // r1@275
  unsigned int *v144; // r2@277
  signed int v145; // r1@279
  unsigned int *v146; // r2@281
  signed int v147; // r1@283
  char v148; // [sp+1Ch] [bp-3C4h]@166
  int v149; // [sp+28h] [bp-3B8h]@166
  char v150; // [sp+44h] [bp-39Ch]@163
  int v151; // [sp+50h] [bp-390h]@167
  __int64 v152; // [sp+6Ch] [bp-374h]@160
  char v153; // [sp+74h] [bp-36Ch]@159
  int v154; // [sp+80h] [bp-360h]@159
  __int64 v155; // [sp+9Ch] [bp-344h]@156
  char v156; // [sp+A4h] [bp-33Ch]@154
  int v157; // [sp+B0h] [bp-330h]@154
  char v158; // [sp+CCh] [bp-314h]@151
  int v159; // [sp+D8h] [bp-308h]@155
  __int64 v160; // [sp+F4h] [bp-2ECh]@148
  char v161; // [sp+FCh] [bp-2E4h]@146
  int v162; // [sp+108h] [bp-2D8h]@146
  char v163; // [sp+124h] [bp-2BCh]@143
  int v164; // [sp+130h] [bp-2B0h]@147
  __int64 v165; // [sp+14Ch] [bp-294h]@140
  char v166; // [sp+154h] [bp-28Ch]@135
  int v167; // [sp+160h] [bp-280h]@135
  char v168; // [sp+17Ch] [bp-264h]@132
  int v169; // [sp+188h] [bp-258h]@136
  char v170; // [sp+1A4h] [bp-23Ch]@129
  int v171; // [sp+1B0h] [bp-230h]@137
  char v172; // [sp+1CCh] [bp-214h]@126
  int v173; // [sp+1D8h] [bp-208h]@138
  char v174; // [sp+1F4h] [bp-1ECh]@123
  int v175; // [sp+200h] [bp-1E0h]@139
  __int64 v176; // [sp+21Ch] [bp-1C4h]@120
  char v177; // [sp+224h] [bp-1BCh]@116
  int v178; // [sp+230h] [bp-1B0h]@116
  char v179; // [sp+24Ch] [bp-194h]@113
  int v180; // [sp+258h] [bp-188h]@117
  char v181; // [sp+274h] [bp-16Ch]@110
  int v182; // [sp+280h] [bp-160h]@118
  char v183; // [sp+29Ch] [bp-144h]@107
  int v184; // [sp+2A8h] [bp-138h]@119
  __int64 v185; // [sp+2C4h] [bp-11Ch]@104
  int v186; // [sp+2D0h] [bp-110h]@103
  int v187; // [sp+2D4h] [bp-10Ch]@86
  int v188; // [sp+2D8h] [bp-108h]@86
  void *v189; // [sp+2DCh] [bp-104h]@86
  int v190; // [sp+2E0h] [bp-100h]@86
  char *v191; // [sp+2E4h] [bp-FCh]@86
  int v192; // [sp+2ECh] [bp-F4h]@86
  int v193; // [sp+2F0h] [bp-F0h]@69
  int v194; // [sp+2F4h] [bp-ECh]@69
  void *v195; // [sp+2F8h] [bp-E8h]@69
  int v196; // [sp+2FCh] [bp-E4h]@69
  char *v197; // [sp+300h] [bp-E0h]@69
  int v198; // [sp+308h] [bp-D8h]@69
  int v199; // [sp+30Ch] [bp-D4h]@52
  int v200; // [sp+310h] [bp-D0h]@52
  void *v201; // [sp+314h] [bp-CCh]@52
  int v202; // [sp+318h] [bp-C8h]@52
  char *v203; // [sp+31Ch] [bp-C4h]@52
  int v204; // [sp+324h] [bp-BCh]@52
  int v205; // [sp+328h] [bp-B8h]@35
  int v206; // [sp+32Ch] [bp-B4h]@35
  void *v207; // [sp+330h] [bp-B0h]@35
  int v208; // [sp+334h] [bp-ACh]@35
  char *v209; // [sp+338h] [bp-A8h]@35
  int v210; // [sp+340h] [bp-A0h]@35
  int v211; // [sp+344h] [bp-9Ch]@18
  int v212; // [sp+348h] [bp-98h]@18
  void *v213; // [sp+34Ch] [bp-94h]@18
  int v214; // [sp+350h] [bp-90h]@18
  char *v215; // [sp+354h] [bp-8Ch]@18
  int v216; // [sp+35Ch] [bp-84h]@18
  int v217; // [sp+360h] [bp-80h]@1
  int v218; // [sp+364h] [bp-7Ch]@1
  void *v219; // [sp+368h] [bp-78h]@1
  int v220; // [sp+36Ch] [bp-74h]@1
  char *v221; // [sp+370h] [bp-70h]@1
  int v222; // [sp+378h] [bp-68h]@1
  __int16 v223; // [sp+394h] [bp-4Ch]@110
  __int16 v224; // [sp+398h] [bp-48h]@113
  unsigned __int16 v225; // [sp+39Ch] [bp-44h]@116
  __int16 v226; // [sp+3A0h] [bp-40h]@126
  __int16 v227; // [sp+3A4h] [bp-3Ch]@129
  __int16 v228; // [sp+3A8h] [bp-38h]@132
  unsigned __int16 v229; // [sp+3ACh] [bp-34h]@135
  __int16 v230; // [sp+3B0h] [bp-30h]@146
  unsigned __int16 v231; // [sp+3B4h] [bp-2Ch]@154
  __int16 v232; // [sp+3B8h] [bp-28h]@107
  __int16 v233; // [sp+3BCh] [bp-24h]@166

  v2 = this;
  sub_21E94B4((void **)&v222, "TickingAreaModeAdd");
  sub_21E94B4((void **)&v217, "add");
  v218 = 0;
  v219 = 0;
  v220 = 0;
  v221 = 0;
  v3 = j_operator new(8u);
  v219 = v3;
  v221 = (char *)v3 + 8;
  v4 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TickingAreaCommand::Mode> const*,std::pair<std::string,TickingAreaCommand::Mode>*>(
         (int)&v217,
         (int)&v219,
         (int)v3);
  v220 = v4;
  j_CommandRegistry::addEnumValues<TickingAreaCommand::Mode>((int)v2, (int)&v222, (unsigned __int64 *)&v219);
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
    v3 = v219;
  }
  if ( v3 )
    j_operator delete(v3);
  v8 = (void *)(v217 - 12);
  if ( (int *)(v217 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v217 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
    else
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v222 - 12);
  if ( (int *)(v222 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v222 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v216, "TickingAreaModeRemove");
  sub_21E94B4((void **)&v211, "remove");
  v212 = 1;
  v213 = 0;
  v214 = 0;
  v215 = 0;
  v10 = j_operator new(8u);
  v213 = v10;
  v215 = (char *)v10 + 8;
  v11 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TickingAreaCommand::Mode> const*,std::pair<std::string,TickingAreaCommand::Mode>*>(
          (int)&v211,
          (int)&v213,
          (int)v10);
  v214 = v11;
  j_CommandRegistry::addEnumValues<TickingAreaCommand::Mode>((int)v2, (int)&v216, (unsigned __int64 *)&v213);
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
    v10 = v213;
  if ( v10 )
    j_operator delete(v10);
  v15 = (void *)(v211 - 12);
  if ( (int *)(v211 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v211 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v216 - 12);
  if ( (int *)(v216 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v216 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v210, "TickingAreaModeRemoveAll");
  sub_21E94B4((void **)&v205, "remove_all");
  v206 = 2;
  v207 = 0;
  v208 = 0;
  v209 = 0;
  v17 = j_operator new(8u);
  v207 = v17;
  v209 = (char *)v17 + 8;
  v18 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TickingAreaCommand::Mode> const*,std::pair<std::string,TickingAreaCommand::Mode>*>(
          (int)&v205,
          (int)&v207,
          (int)v17);
  v208 = v18;
  j_CommandRegistry::addEnumValues<TickingAreaCommand::Mode>((int)v2, (int)&v210, (unsigned __int64 *)&v207);
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
    v17 = v207;
  if ( v17 )
    j_operator delete(v17);
  v22 = (void *)(v205 - 12);
  if ( (int *)(v205 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v205 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v210 - 12);
  if ( (int *)(v210 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v210 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v204, "TickingAreaModeList");
  sub_21E94B4((void **)&v199, "list");
  v200 = 3;
  v201 = 0;
  v202 = 0;
  v203 = 0;
  v24 = j_operator new(8u);
  v201 = v24;
  v203 = (char *)v24 + 8;
  v25 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TickingAreaCommand::Mode> const*,std::pair<std::string,TickingAreaCommand::Mode>*>(
          (int)&v199,
          (int)&v201,
          (int)v24);
  v202 = v25;
  j_CommandRegistry::addEnumValues<TickingAreaCommand::Mode>((int)v2, (int)&v204, (unsigned __int64 *)&v201);
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
    v24 = v201;
  if ( v24 )
    j_operator delete(v24);
  v29 = (void *)(v199 - 12);
  if ( (int *)(v199 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v199 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v204 - 12);
  if ( (int *)(v204 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v204 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v198, "AddTickingAreaType");
  sub_21E94B4((void **)&v193, "circle");
  v194 = 1;
  v195 = 0;
  v196 = 0;
  v197 = 0;
  v31 = j_operator new(8u);
  v195 = v31;
  v197 = (char *)v31 + 8;
  v32 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TickingAreaCommand::AddAreaType> const*,std::pair<std::string,TickingAreaCommand::AddAreaType>*>(
          (int)&v193,
          (int)&v195,
          (int)v31);
  v196 = v32;
  j_CommandRegistry::addEnumValues<TickingAreaCommand::AddAreaType>((int)v2, (int)&v198, (unsigned __int64 *)&v195);
  if ( v31 != (void *)v32 )
      v35 = (int *)(*(_DWORD *)v31 - 12);
      if ( v35 != &dword_28898C0 )
        v33 = (unsigned int *)(*(_DWORD *)v31 - 4);
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j__ZdlPv_9(v35);
      v31 = (char *)v31 + 8;
    while ( v31 != (void *)v32 );
    v31 = v195;
  if ( v31 )
    j_operator delete(v31);
  v36 = (void *)(v193 - 12);
  if ( (int *)(v193 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v193 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v198 - 12);
  if ( (int *)(v198 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v198 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v192, "AllDimensions");
  sub_21E94B4((void **)&v187, "all-dimensions");
  v188 = 1;
  v189 = 0;
  v190 = 0;
  v191 = 0;
  v38 = j_operator new(8u);
  v189 = v38;
  v191 = (char *)v38 + 8;
  v39 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TickingAreaCommand::TargetDimensions> const*,std::pair<std::string,TickingAreaCommand::TargetDimensions>*>(
          (int)&v187,
          (int)&v189,
          (int)v38);
  v190 = v39;
  j_CommandRegistry::addEnumValues<TickingAreaCommand::TargetDimensions>((int)v2, (int)&v192, (unsigned __int64 *)&v189);
  if ( v38 != (void *)v39 )
      v42 = (int *)(*(_DWORD *)v38 - 12);
      if ( v42 != &dword_28898C0 )
        v40 = (unsigned int *)(*(_DWORD *)v38 - 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
          v41 = (*v40)--;
        if ( v41 <= 0 )
          j_j_j_j__ZdlPv_9(v42);
      v38 = (char *)v38 + 8;
    while ( v38 != (void *)v39 );
    v38 = v189;
  if ( v38 )
    j_operator delete(v38);
  v43 = (void *)(v187 - 12);
  if ( (int *)(v187 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v187 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = (void *)(v192 - 12);
  if ( (int *)(v192 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v192 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  sub_21E94B4((void **)&v186, "tickingarea");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v186, "commands.tickingarea.description", 1, 0, 0);
  v46 = (void *)(v186 - 12);
  if ( (int *)(v186 - 12) != &dword_28898C0 )
    v114 = v186 - 4;
        v115 = __ldrex((unsigned int *)v45);
        HIDWORD(v45) = v115 - 1;
      while ( __strex(v115 - 1, (unsigned int *)v45) );
      v115 = *(_DWORD *)v45;
      HIDWORD(v45) = *(_DWORD *)v45 - 1;
      *(_DWORD *)v45 = HIDWORD(v45);
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  LODWORD(v45) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v185, 1, v45);
  v47 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::Mode>(void)::id;
  __dmb();
  if ( !(v47 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::Mode>(void)::id) )
    type_id<CommandRegistry,TickingAreaCommand::Mode>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::Mode>(void)::id);
  v232 = type_id<CommandRegistry,TickingAreaCommand::Mode>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v183,
    &v232,
    (unsigned int)CommandRegistry::parse<TickingAreaCommand::Mode>,
    "mode",
    1,
    (int)"TickingAreaModeAdd",
    20,
    0,
    -1);
  v48 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v48 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id) )
    type_id<CommandRegistry,CommandPosition>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id);
  v223 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v181,
    &v223,
    (unsigned int)CommandRegistry::parse<CommandPosition>,
    "from",
    32,
  v49 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v49 & 1)
  v224 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v179,
    &v224,
    "to",
    48,
  v50 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
  if ( !(v50 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id) )
    type_id<CommandRegistry,std::string>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id);
  v225 = type_id<CommandRegistry,std::string>(void)::id[0];
  v51 = j_CommandParameterData::CommandParameterData(
          (int)&v177,
          &v225,
          (unsigned int)CommandRegistry::parse<std::string>,
          "name",
          0,
          64,
          1,
          -1);
  j_CommandRegistry::registerOverload<TickingAreaCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    (int)v2,
    "tickingarea",
    v185,
    v51);
  v53 = (void *)(v178 - 12);
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v116 = v178 - 4;
        v117 = __ldrex((unsigned int *)v52);
        HIDWORD(v52) = v117 - 1;
      while ( __strex(v117 - 1, (unsigned int *)v52) );
      v117 = *(_DWORD *)v52;
      HIDWORD(v52) = *(_DWORD *)v52 - 1;
      *(_DWORD *)v52 = HIDWORD(v52);
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  v54 = (void *)(v180 - 12);
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v118 = v180 - 4;
        v119 = __ldrex((unsigned int *)v52);
        HIDWORD(v52) = v119 - 1;
      while ( __strex(v119 - 1, (unsigned int *)v52) );
      v119 = *(_DWORD *)v52;
    if ( v119 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  v55 = (void *)(v182 - 12);
  if ( (int *)(v182 - 12) != &dword_28898C0 )
    v120 = v182 - 4;
        v121 = __ldrex((unsigned int *)v52);
        HIDWORD(v52) = v121 - 1;
      while ( __strex(v121 - 1, (unsigned int *)v52) );
      v121 = *(_DWORD *)v52;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  v56 = (void *)(v184 - 12);
  if ( (int *)(v184 - 12) != &dword_28898C0 )
    v122 = v184 - 4;
        v123 = __ldrex((unsigned int *)v52);
        HIDWORD(v52) = v123 - 1;
      while ( __strex(v123 - 1, (unsigned int *)v52) );
      v123 = *(_DWORD *)v52;
    if ( v123 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  LODWORD(v52) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v176, 1, v52);
  v57 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::Mode>(void)::id;
  if ( !(v57 & 1)
    (int)&v174,
  v58 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::AddAreaType>(void)::id;
  if ( !(v58 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::AddAreaType>(void)::id) )
    type_id<CommandRegistry,TickingAreaCommand::AddAreaType>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::AddAreaType>(void)::id);
  v226 = type_id<CommandRegistry,TickingAreaCommand::AddAreaType>(void)::id;
    (int)&v172,
    &v226,
    (unsigned int)CommandRegistry::parse<TickingAreaCommand::AddAreaType>,
    "circle",
    (int)"AddTickingAreaType",
    24,
  v59 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v59 & 1)
  v227 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v170,
    &v227,
    "center",
  v60 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v60 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v228 = type_id<CommandRegistry,int>(void)::id;
    (int)&v168,
    &v228,
    (unsigned int)CommandRegistry::parse<int>,
    "radius",
    68,
  v61 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
  if ( !(v61 & 1)
  v229 = type_id<CommandRegistry,std::string>(void)::id[0];
  v62 = j_CommandParameterData::CommandParameterData(
          (int)&v166,
          &v229,
  j_CommandRegistry::registerOverload<TickingAreaCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    v176,
    v62);
  v64 = (void *)(v167 - 12);
  if ( (int *)(v167 - 12) != &dword_28898C0 )
    v124 = v167 - 4;
        v125 = __ldrex((unsigned int *)v63);
        HIDWORD(v63) = v125 - 1;
      while ( __strex(v125 - 1, (unsigned int *)v63) );
      v125 = *(_DWORD *)v63;
      HIDWORD(v63) = *(_DWORD *)v63 - 1;
      *(_DWORD *)v63 = HIDWORD(v63);
    if ( v125 <= 0 )
      j_j_j_j__ZdlPv_9(v64);
  v65 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v126 = v169 - 4;
        v127 = __ldrex((unsigned int *)v63);
        HIDWORD(v63) = v127 - 1;
      while ( __strex(v127 - 1, (unsigned int *)v63) );
      v127 = *(_DWORD *)v63;
    if ( v127 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
  v66 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v128 = v171 - 4;
        v129 = __ldrex((unsigned int *)v63);
        HIDWORD(v63) = v129 - 1;
      while ( __strex(v129 - 1, (unsigned int *)v63) );
      v129 = *(_DWORD *)v63;
    if ( v129 <= 0 )
      j_j_j_j__ZdlPv_9(v66);
  v67 = (void *)(v173 - 12);
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v130 = v173 - 4;
        v131 = __ldrex((unsigned int *)v63);
        HIDWORD(v63) = v131 - 1;
      while ( __strex(v131 - 1, (unsigned int *)v63) );
      v131 = *(_DWORD *)v63;
    if ( v131 <= 0 )
      j_j_j_j__ZdlPv_9(v67);
  v68 = (void *)(v175 - 12);
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v132 = v175 - 4;
        v133 = __ldrex((unsigned int *)v63);
        HIDWORD(v63) = v133 - 1;
      while ( __strex(v133 - 1, (unsigned int *)v63) );
      v133 = *(_DWORD *)v63;
    if ( v133 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  LODWORD(v63) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v165, 1, v63);
  v69 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::Mode>(void)::id;
  if ( !(v69 & 1)
    (int)&v163,
    (int)"TickingAreaModeRemove",
  v70 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v70 & 1)
  v230 = type_id<CommandRegistry,CommandPosition>(void)::id;
  v71 = j_CommandParameterData::CommandParameterData(
          (int)&v161,
          &v230,
          (unsigned int)CommandRegistry::parse<CommandPosition>,
          "position",
          32,
  j_CommandRegistry::registerOverload<TickingAreaCommand,CommandParameterData,CommandParameterData>(
    v165,
    v71);
  v73 = (void *)(v162 - 12);
  if ( (int *)(v162 - 12) != &dword_28898C0 )
    v134 = v162 - 4;
        v135 = __ldrex((unsigned int *)v72);
        HIDWORD(v72) = v135 - 1;
      while ( __strex(v135 - 1, (unsigned int *)v72) );
      v135 = *(_DWORD *)v72;
      HIDWORD(v72) = *(_DWORD *)v72 - 1;
      *(_DWORD *)v72 = HIDWORD(v72);
    if ( v135 <= 0 )
      j_j_j_j__ZdlPv_9(v73);
  v74 = (void *)(v164 - 12);
  if ( (int *)(v164 - 12) != &dword_28898C0 )
    v136 = v164 - 4;
        v137 = __ldrex((unsigned int *)v72);
        HIDWORD(v72) = v137 - 1;
      while ( __strex(v137 - 1, (unsigned int *)v72) );
      v137 = *(_DWORD *)v72;
    if ( v137 <= 0 )
      j_j_j_j__ZdlPv_9(v74);
  LODWORD(v72) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v160, 1, v72);
  v75 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::Mode>(void)::id;
  if ( !(v75 & 1)
    (int)&v158,
  v76 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,std::string>(void)::id;
  if ( !(v76 & 1)
  v231 = type_id<CommandRegistry,std::string>(void)::id[0];
  v77 = j_CommandParameterData::CommandParameterData(
          (int)&v156,
          &v231,
    v160,
    v77);
  v79 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v138 = v157 - 4;
        v139 = __ldrex((unsigned int *)v78);
        HIDWORD(v78) = v139 - 1;
      while ( __strex(v139 - 1, (unsigned int *)v78) );
      v139 = *(_DWORD *)v78;
      HIDWORD(v78) = *(_DWORD *)v78 - 1;
      *(_DWORD *)v78 = HIDWORD(v78);
    if ( v139 <= 0 )
      j_j_j_j__ZdlPv_9(v79);
  v80 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v140 = v159 - 4;
        v141 = __ldrex((unsigned int *)v78);
        HIDWORD(v78) = v141 - 1;
      while ( __strex(v141 - 1, (unsigned int *)v78) );
      v141 = *(_DWORD *)v78;
    if ( v141 <= 0 )
      j_j_j_j__ZdlPv_9(v80);
  LODWORD(v78) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v155, 1, v78);
  v81 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::Mode>(void)::id;
  if ( !(v81 & 1)
  v82 = j_CommandParameterData::CommandParameterData(
          (int)&v153,
          &v232,
          (unsigned int)CommandRegistry::parse<TickingAreaCommand::Mode>,
          "mode",
          (int)"TickingAreaModeRemoveAll",
          20,
  j_CommandRegistry::registerOverload<TickingAreaCommand,CommandParameterData>((int)v2, "tickingarea", v155, v82);
  v84 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v142 = v154 - 4;
        v143 = __ldrex((unsigned int *)v83);
        HIDWORD(v83) = v143 - 1;
      while ( __strex(v143 - 1, (unsigned int *)v83) );
      v143 = *(_DWORD *)v83;
      HIDWORD(v83) = *(_DWORD *)v83 - 1;
      *(_DWORD *)v83 = HIDWORD(v83);
    if ( v143 <= 0 )
      j_j_j_j__ZdlPv_9(v84);
  LODWORD(v83) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v152, 1, v83);
  v85 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::Mode>(void)::id;
  if ( !(v85 & 1)
    (int)&v150,
    (int)"TickingAreaModeList",
  v86 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::TargetDimensions>(void)::id[0];
  if ( !(v86 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::TargetDimensions>(void)::id) )
    type_id<CommandRegistry,TickingAreaCommand::TargetDimensions>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TickingAreaCommand::TargetDimensions>(void)::id);
  v233 = type_id<CommandRegistry,TickingAreaCommand::TargetDimensions>(void)::id;
  v87 = j_CommandParameterData::CommandParameterData(
          (int)&v148,
          &v233,
          (unsigned int)CommandRegistry::parse<TickingAreaCommand::TargetDimensions>,
          "all-dimensions",
          (int)"AllDimensions",
          28,
    v152,
    v87);
  v88 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v144 = (unsigned int *)(v149 - 4);
        v145 = __ldrex(v144);
      while ( __strex(v145 - 1, v144) );
      v145 = (*v144)--;
    if ( v145 <= 0 )
      j_j_j_j__ZdlPv_9(v88);
  v89 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v146 = (unsigned int *)(v151 - 4);
        v147 = __ldrex(v146);
      while ( __strex(v147 - 1, v146) );
      v147 = (*v146)--;
    if ( v147 <= 0 )
      j_j_j_j__ZdlPv_9(v89);
}


void __fastcall TickingAreaCommand::execute(TickingAreaCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  const CommandOrigin *v3; // r6@1
  TickingAreaCommand *v4; // r5@1
  CommandOutput *v5; // r4@1
  Dimension *v6; // r0@1
  Dimension *v7; // r7@1
  const CommandOrigin *v8; // r1@2
  Level *v9; // r3@2
  void *v10; // r4@4
  void *v11; // r6@4
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  int *v14; // r0@14
  void *v15; // r0@19
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  __int64 v18; // [sp+8h] [bp-38h]@4
  int v19; // [sp+10h] [bp-30h]@4
  int v20; // [sp+18h] [bp-28h]@4

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Dimension *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)a2 + 28))(a2);
  v7 = v6;
  if ( v6 )
  {
    v9 = (Level *)j_Dimension::getLevel(v6);
    switch ( *((_DWORD *)v4 + 5) )
    {
      case 0:
        j_TickingAreaCommand::_add(v4, v3, v5, v9, v7);
        break;
      case 2:
        j_TickingAreaCommand::_removeAll(v4, v8, v5, v9, v7);
      case 3:
        j_TickingAreaCommand::_list(v4, v8, v5, v9, v7);
      case 1:
        j_TickingAreaCommand::_remove(v4, v3, v5, v9, v7);
      default:
        return;
    }
  }
  else
    sub_21E94B4((void **)&v20, "commands.generic.dimension.notFound");
    v18 = 0LL;
    v19 = 0;
    j_CommandOutput::error(v5, &v20, (unsigned __int64 *)&v18);
    v11 = (void *)HIDWORD(v18);
    v10 = (void *)v18;
    if ( (_DWORD)v18 != HIDWORD(v18) )
      do
      {
        v14 = (int *)(*(_DWORD *)v10 - 12);
        if ( v14 != &dword_28898C0 )
        {
          v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
          }
          else
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        }
        v10 = (char *)v10 + 8;
      }
      while ( v10 != v11 );
      v10 = (void *)v18;
    if ( v10 )
      j_operator delete(v10);
    v15 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
}


void __fastcall TickingAreaCommand::_add(TickingAreaCommand *this, const CommandOrigin *a2, CommandOutput *a3, Level *a4, Dimension *a5)
{
  TickingAreaCommand::_add(this, a2, a3, a4, a5);
}


void __fastcall TickingAreaCommand::_list(TickingAreaCommand *this, const CommandOrigin *a2, CommandOutput *a3, Level *a4, Dimension *a5)
{
  TickingAreaCommand::_list(this, a2, a3, a4, a5);
}


void __fastcall TickingAreaCommand::_remove(TickingAreaCommand *this, const CommandOrigin *a2, CommandOutput *a3, Level *a4, Dimension *a5)
{
  TickingAreaCommand::_remove((Dimension *)this, a2, a3, a4, a5);
}


Command *__fastcall TickingAreaCommand::~TickingAreaCommand(TickingAreaCommand *this)
{
  Command *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271A278;
  v2 = *((_DWORD *)this + 16);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  j_Command::~Command(v1);
  return v1;
}


void __fastcall TickingAreaCommand::setup(TickingAreaCommand *this, CommandRegistry *a2)
{
  TickingAreaCommand::setup(this, a2);
}


void __fastcall TickingAreaCommand::~TickingAreaCommand(TickingAreaCommand *this)
{
  Command *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271A278;
  v2 = *((_DWORD *)this + 16);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  j_Command::~Command(v1);
  j_operator delete((void *)v1);
}


Command *__fastcall TickingAreaCommand::TickingAreaCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A278;
  *(_QWORD *)((char *)v1 + 20) = 3LL;
  *((_DWORD *)v1 + 7) = 0;
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 32));
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 48));
  *((_QWORD *)v1 + 8) = (unsigned int)&unk_28898CC;
  return v1;
}


void __fastcall TickingAreaCommand::_removeAll(TickingAreaCommand *this, const CommandOrigin *a2, CommandOutput *a3, Level *a4, Dimension *a5)
{
  TickingAreaCommand::_removeAll((Dimension *)this, a2, a3, a4, a5);
}
