

int __fastcall RuntimeLightingManager::_checkForRelightingTask(RuntimeLightingManager *this)
{
  RuntimeLightingManager *v1; // r5@1
  char *v2; // r6@1
  int v3; // r4@1
  signed int v7; // r9@2
  unsigned int v8; // r10@3
  int v9; // r2@3
  int v10; // r8@4
  int v12; // r4@5
  _DWORD *v13; // r0@5
  __int64 v14; // kr00_8@7
  __int64 v15; // r0@7
  signed int v16; // r0@9
  signed int v17; // r0@9
  unsigned int v18; // r1@9
  unsigned int v19; // r2@11
  unsigned int v20; // r0@11
  char *v21; // r9@16
  void *v22; // r0@16
  void *v23; // r12@16
  int v24; // r2@16
  char *v25; // r8@16
  _DWORD *v26; // lr@17
  char *v27; // r2@17
  int v28; // r3@17
  int v29; // r4@17
  int v30; // r5@17
  int v31; // r6@17
  int v32; // r7@17
  int v33; // r0@21
  int *v34; // r0@25
  unsigned int v35; // r5@27
  int v37; // r1@29
  int v38; // r2@29
  int v42; // r3@30
  int v43; // r5@30
  int v44; // r9@30
  int v45; // r11@30
  int v46; // r6@33
  _DWORD *v48; // r12@36
  int v49; // r7@36
  int v50; // r7@37
  int v51; // r4@37
  int v52; // r0@40
  int v53; // r1@43
  __int64 v56; // kr10_8@44
  _DWORD *v57; // r5@44
  __int64 v58; // kr18_8@44
  int v59; // r0@44
  _DWORD *v60; // r4@44
  int v61; // r5@45
  int v62; // r0@45
  __int64 v63; // r5@45
  int v64; // r1@50
  int v65; // r0@51
  unsigned int v68; // r12@52
  int v69; // r5@52
  int v70; // r9@52
  int v71; // r11@52
  int v72; // r8@52
  int v73; // r6@55
  int v74; // r2@55
  _DWORD *v76; // r7@58
  int v77; // r3@58
  int v78; // r3@59
  int v79; // r7@59
  int v80; // r1@62
  int v82; // r2@64
  RuntimeLightingManager *v83; // r6@65
  RuntimeLightingManager *v84; // r2@65
  RuntimeLightingManager *v85; // r0@65
  unsigned int v86; // r11@66
  __int64 *v87; // r9@67
  ChunkSource *v88; // r0@67
  BlockSourceListener *v89; // r5@67
  int v90; // r0@67
  int v91; // r0@67
  RuntimeLightingManager *v92; // r4@67
  __int64 v93; // r2@70
  int v94; // r1@68
  __int64 v95; // r0@70
  int v96; // r5@71
  unsigned int v97; // r6@71
  __int64 v98; // r0@73
  signed int v100; // r8@80
  int v101; // r1@80
  int v102; // r0@80
  int v103; // r3@81
  __int64 v104; // kr48_8@82
  unsigned int v105; // r6@82
  int v106; // r0@82
  int v107; // r8@83
  int v108; // r4@83
  int v110; // r10@87
  int v111; // r0@89
  int v112; // r0@91
  __int64 v113; // r1@94
  bool v114; // zf@94
  __int64 v115; // r1@98
  bool v116; // zf@98
  __int64 v117; // r1@102
  bool v118; // zf@102
  __int64 v119; // r1@106
  bool v120; // zf@106
  __int64 v121; // r1@110
  bool v122; // zf@110
  __int64 v123; // r1@114
  bool v124; // zf@114
  __int64 v125; // r1@118
  bool v126; // zf@118
  __int64 v127; // r1@122
  bool v128; // zf@122
  unsigned int v129; // r10@126
  void **v130; // r0@126
  void **v131; // r9@127
  void **v132; // r4@127
  int v133; // r7@127
  _DWORD *v134; // r6@130
  void **v135; // r5@135
  int v136; // r1@137
  _DWORD *v137; // r6@140
  int v138; // r1@141
  int result; // r0@148
  int v140; // [sp+Ch] [bp-1E4h]@127
  unsigned int v141; // [sp+10h] [bp-1E0h]@66
  int v142; // [sp+10h] [bp-1E0h]@126
  int *v143; // [sp+14h] [bp-1DCh]@3
  char *v144; // [sp+18h] [bp-1D8h]@2
  char *v145; // [sp+18h] [bp-1D8h]@27
  RuntimeLightingManager *v146; // [sp+18h] [bp-1D8h]@81
  RuntimeLightingManager *v147; // [sp+1Ch] [bp-1D4h]@1
  char *v148; // [sp+20h] [bp-1D0h]@2
  int *v149; // [sp+20h] [bp-1D0h]@27
  int v150; // [sp+20h] [bp-1D0h]@82
  unsigned int v151; // [sp+20h] [bp-1D0h]@126
  int v152; // [sp+24h] [bp-1CCh]@16
  unsigned int v153; // [sp+24h] [bp-1CCh]@29
  RuntimeLightingManager *v154; // [sp+24h] [bp-1CCh]@80
  int v155; // [sp+28h] [bp-1C8h]@3
  RuntimeLightingManager *v156; // [sp+28h] [bp-1C8h]@80
  __int64 *v157; // [sp+2Ch] [bp-1C4h]@3
  int v158; // [sp+2Ch] [bp-1C4h]@82
  __int64 v159; // [sp+30h] [bp-1C0h]@126
  __int64 v160; // [sp+38h] [bp-1B8h]@82
  __int64 v161; // [sp+44h] [bp-1ACh]@73
  int v162; // [sp+4Ch] [bp-1A4h]@74
  char v163; // [sp+50h] [bp-1A0h]@67
  void **v164; // [sp+C0h] [bp-130h]@67
  int v165; // [sp+DCh] [bp-114h]@76
  int v166; // [sp+160h] [bp-90h]@67
  int v167; // [sp+164h] [bp-8Ch]@67
  int v168; // [sp+168h] [bp-88h]@67
  int v169; // [sp+16Ch] [bp-84h]@67
  int v170; // [sp+170h] [bp-80h]@67
  int v171; // [sp+174h] [bp-7Ch]@67
  char v172; // [sp+178h] [bp-78h]@67
  int v173; // [sp+17Ch] [bp-74h]@67
  int v174; // [sp+180h] [bp-70h]@67
  _DWORD *v175; // [sp+184h] [bp-6Ch]@5
  void (*v176)(void); // [sp+18Ch] [bp-64h]@5
  signed int (__fastcall *v177)(int *, int); // [sp+190h] [bp-60h]@5
  int v178; // [sp+194h] [bp-5Ch]@5
  char v179; // [sp+198h] [bp-58h]@3
  char v180; // [sp+1A4h] [bp-4Ch]@3

  v1 = this;
  v2 = (char *)this + 32;
  v3 = *((_DWORD *)this + 2);
  v147 = this;
  if ( v3 )
  {
    __asm { VMOV.F32        S16, #8.0 }
    v7 = 2139095039;
    v144 = (char *)this + 32;
    v148 = (char *)this + 28;
    do
    {
      v143 = (int *)v3;
      v157 = (__int64 *)(v3 + 8);
      v8 = 0;
      j_BlockPos::BlockPos((int)&v180, (__int64 *)(v3 + 8), 0);
      j_Vec3::Vec3((int)&v179, (int)&v180);
      v9 = v3 + 16;
      v155 = v3 + 16;
      do
      {
        v10 = v9 + 12 * v8;
        if ( *(_DWORD *)(v10 + 4) != *(_DWORD *)(v9 + 12 * v8) )
        {
          _R0 = 16 * v8;
          __asm
          {
            VMOV            S0, R0
            VCVT.F32.U32    S0, S0
          }
          v178 = v7;
            VADD.F32        S0, S0, S16
            VSTR            S0, [SP,#0x1F0+var_54]
          v12 = Dimension::getLevel(*((Dimension **)v1 + 16));
          v13 = j_operator new(0xCu);
          *v13 = v1;
          v13[1] = &v178;
          v13[2] = &v179;
          v175 = v13;
          v177 = sub_1960C9A;
          v176 = (void (*)(void))sub_1960D04;
          Level::forEachPlayer(v12, (int)&v175);
          if ( v176 )
            v176();
            VLDR            S0, [SP,#0x1F0+var_5C]
            VSQRT.F32       S18, S0
          v14 = *v157;
          v15 = *((_QWORD *)v1 + 4);
          if ( (_DWORD)v15 == HIDWORD(v15) )
            v16 = v15 - *(_DWORD *)v148;
            _ZF = v16 == 0;
            v17 = v16 >> 3;
            v18 = -1431655765 * v17;
            if ( _ZF )
              v18 = 1;
            v20 = v18 + -1431655765 * v17;
            v19 = v20;
            if ( v20 > 0xAAAAAAA )
              v20 = 178956970;
            _CF = v19 >= v18;
            LOWORD(v18) = -21845;
            if ( !_CF )
            HIWORD(v18) = 2730;
            if ( v20 >= v18 )
              sub_21E57F4();
            v152 = 3 * v20;
            v21 = (char *)j_operator new(24 * v20);
            v22 = *(void **)v148;
            v23 = *(void **)v2;
            v24 = (int)&v21[*(_DWORD *)v2 - *(_DWORD *)v148];
            __asm { VSTR            S18, [R2] }
            *(_QWORD *)(v24 + 8) = v14;
            *(_DWORD *)(v24 + 16) = v8;
            *(_DWORD *)(v24 + 20) = v10;
            v25 = v21;
            if ( !_ZF )
            {
              do
              {
                v26 = v22;
                v27 = v25;
                v22 = (char *)v22 + 24;
                v25 += 24;
                v28 = v26[1];
                v29 = v26[2];
                v30 = v26[3];
                v31 = v26[4];
                v32 = v26[5];
                *(_DWORD *)v27 = *v26;
                *((_DWORD *)v27 + 1) = v28;
                *((_DWORD *)v27 + 2) = v29;
                *((_DWORD *)v27 + 3) = v30;
                *((_DWORD *)v27 + 4) = v31;
                *((_DWORD *)v27 + 5) = v32;
              }
              while ( v23 != v22 );
              v22 = *(void **)v148;
            }
            if ( v22 )
              j_operator delete(v22);
            v1 = v147;
            v33 = (int)&v21[8 * v152];
            *((_DWORD *)v147 + 7) = v21;
            *((_DWORD *)v147 + 8) = v25 + 24;
            v7 = 2139095039;
            *((_DWORD *)v147 + 9) = v33;
            v2 = v144;
          else
            __asm { VSTR            S18, [R0] }
            *(_QWORD *)(v15 + 8) = v14;
            *(_DWORD *)(v15 + 16) = v8;
            *(_DWORD *)(v15 + 20) = v10;
            *(_DWORD *)v2 += 24;
          v9 = v155;
        }
        ++v8;
      }
      while ( v8 < 0x10 );
      v3 = *v143;
    }
    while ( *v143 );
    v147 = v1;
    v34 = (int *)v148;
  }
  else
    v34 = (int *)((char *)this + 28);
  v35 = *(_DWORD *)v2;
  _R10 = *v34;
  v149 = v34;
  v145 = v2;
  if ( *v34 != *(_DWORD *)v2 )
    sub_1960D42(_R10, v35, 2 * (31 - __clz(-1431655765 * ((signed int)(v35 - _R10) >> 3))), (int)v147);
    if ( (signed int)(v35 - _R10) <= 384 )
      v64 = _R10 + 24;
      if ( _R10 + 24 != v35 )
        v65 = _R10 + 40;
        _R2 = _R10;
        do
          _R4 = v64;
          v68 = v35;
          v69 = *(_DWORD *)(_R2 + 32);
          v70 = *(_DWORD *)(_R2 + 36);
          v71 = *(_DWORD *)(_R2 + 40);
          v72 = *(_DWORD *)(_R2 + 44);
            VLDR            S0, [R4]
            VLDR            S2, [R10]
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
            if ( v64 - _R10 >= 1 )
              v73 = -1431655765 * ((v64 - _R10) >> 3) + 1;
              v74 = v64;
                --v73;
                *(_DWORD *)v74 = *(_DWORD *)(v74 - 24);
                *(_QWORD *)(v74 + 8) = *(_QWORD *)(v74 - 16);
                *(_QWORD *)(v74 + 16) = *(_QWORD *)(v74 - 8);
                v74 -= 24;
              while ( v73 > 1 );
            __asm { VSTR            S0, [R10] }
            *(_DWORD *)(_R10 + 8) = v69;
            *(_DWORD *)(_R10 + 12) = v70;
            *(_DWORD *)(_R10 + 16) = v71;
            *(_DWORD *)(_R10 + 20) = v72;
            __asm { VLDR            S2, [R2] }
            _R2 = v65;
            v76 = (_DWORD *)v64;
            v77 = v64;
            __asm
              VCMPE.F32       S2, S0
              VMRS            APSR_nzcv, FPSCR
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                *v76 = *(_DWORD *)(_R2 - 40);
                *(_QWORD *)(_R2 - 8) = *(_QWORD *)(_R2 - 32);
                v78 = _R2 - 24;
                v79 = *(_DWORD *)(_R2 - 20);
                *(_DWORD *)_R2 = *(_DWORD *)(_R2 - 24);
                *(_DWORD *)(_R2 + 4) = v79;
                v76 = (_DWORD *)(_R2 - 40);
                __asm { VLDR            S2, [R2,#-0x40] }
                _R2 -= 24;
                __asm
                {
                  VCMPE.F32       S2, S0
                  VMRS            APSR_nzcv, FPSCR
                }
              while ( !((unsigned __int8)(_NF ^ _VF) | _ZF) );
              v77 = v78 - 16;
            v80 = v77 + 8;
            __asm { VSTR            S0, [R6] }
            *(_DWORD *)v80 = v69;
            *(_DWORD *)(v80 + 4) = v70;
            *(_DWORD *)(v80 + 8) = v71;
            *(_DWORD *)(v77 + 20) = v72;
          v65 += 24;
          v64 = _R4 + 24;
          v35 = v68;
          _R2 = _R4;
        while ( _R4 + 24 != v68 );
    else
      v37 = _R10 + 40;
      v38 = _R10 + 24;
      _LR = _R10 + 384;
      _R6 = _R10;
      v153 = v35;
        _R8 = (_DWORD *)v38;
        v42 = *(_DWORD *)(_R6 + 32);
        v43 = *(_DWORD *)(_R6 + 36);
        v44 = *(_DWORD *)(_R6 + 40);
        v45 = *(_DWORD *)(_R6 + 44);
        __asm
          VLDR            S0, [R8]
          VLDR            S2, [R10]
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          if ( v38 - _R10 >= 1 )
            v46 = -1431655765 * ((v38 - _R10) >> 3) + 1;
            do
              --v46;
              *(_DWORD *)v38 = *(_DWORD *)(v38 - 24);
              *(_QWORD *)(v38 + 8) = *(_QWORD *)(v38 - 16);
              *(_QWORD *)(v38 + 16) = *(_QWORD *)(v38 - 8);
              v38 -= 24;
            while ( v46 > 1 );
          __asm { VSTR            S0, [R10] }
          *(_DWORD *)(_R10 + 8) = v42;
          *(_DWORD *)(_R10 + 12) = v43;
          *(_DWORD *)(_R10 + 16) = v44;
          *(_DWORD *)(_R10 + 20) = v45;
        else
          __asm { VLDR            S2, [R6] }
          _R2 = v37;
          v48 = _R8;
          v49 = (int)_R8;
            VCMPE.F32       S2, S0
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              *v48 = *(_DWORD *)(_R2 - 40);
              v48 = (_DWORD *)(_R2 - 40);
              *(_QWORD *)(_R2 - 8) = *(_QWORD *)(_R2 - 32);
              v50 = _R2 - 24;
              v51 = *(_DWORD *)(_R2 - 20);
              *(_DWORD *)_R2 = *(_DWORD *)(_R2 - 24);
              *(_DWORD *)(_R2 + 4) = v51;
              __asm { VLDR            S2, [R2,#-0x40] }
              _R2 -= 24;
              __asm
                VCMPE.F32       S2, S0
                VMRS            APSR_nzcv, FPSCR
            while ( !((unsigned __int8)(_NF ^ _VF) | _ZF) );
            v49 = v50 - 16;
          v52 = v49 + 8;
          __asm { VSTR            S0, [R6] }
          *(_DWORD *)v52 = v42;
          *(_DWORD *)(v52 + 4) = v43;
          *(_DWORD *)(v52 + 8) = v44;
          *(_DWORD *)(v52 + 12) = v45;
        v38 = (int)(_R8 + 6);
        v37 += 24;
        _R6 = (int)_R8;
      while ( _R8 + 6 != (_DWORD *)_LR );
      if ( _LR != v153 )
        v53 = _R10 + 400;
          _R2 = *(_DWORD *)_LR;
          _R3 = (_QWORD *)v53;
          v56 = *(_QWORD *)(_LR + 8);
          v57 = (_DWORD *)_LR;
          v58 = *(_QWORD *)(_LR + 16);
          v59 = _LR;
            VLDR            S2, [LR,#-0x18]
            VMOV            S0, R2
          v60 = (_DWORD *)_LR;
              v60 = _R3 - 5;
              *v57 = *((_DWORD *)_R3 - 10);
              v61 = *(_R3 - 4) >> 32;
              *((_DWORD *)_R3 - 2) = *(_R3 - 4);
              *((_DWORD *)_R3 - 1) = v61;
              v62 = (int)(_R3 - 3);
              LODWORD(v63) = *((_DWORD *)_R3 - 6);
              HIDWORD(v63) = *((_DWORD *)_R3 - 5);
              *_R3 = v63;
              v57 = _R3 - 5;
              __asm { VLDR            S2, [R3,#-0x40] }
              _R3 -= 3;
            v59 = v62 - 16;
          _LR += 24;
          v53 += 24;
          *v60 = _R2;
          *(_QWORD *)(v59 + 8) = v56;
          *(_QWORD *)(v59 + 16) = v58;
        while ( _LR != v153 );
  _R0 = j_getTimeS();
  v82 = *v149;
  if ( *(_DWORD *)v145 == *v149 )
    v83 = v147;
    v84 = (RuntimeLightingManager *)((char *)v147 + 44);
    v85 = (RuntimeLightingManager *)((char *)v147 + 40);
    __asm
      VMOV            D8, R0, R1
      VLDR            S18, =0.0005
    v86 = 0;
    v141 = -1431655765 * ((*(_DWORD *)v145 - v82) >> 3);
      v87 = (__int64 *)(v82 + 24 * v86 + 8);
      j_BlockPos::BlockPos((int)&v172, v87, 0);
      v169 = *(_DWORD *)&v172 - 16;
      v166 = *(_DWORD *)&v172 + 31;
      v170 = v173 - 16;
      v167 = v173 + 31;
      v171 = v174 - 16;
      v168 = v174 + 31;
      v88 = (ChunkSource *)j_Dimension::getChunkSource(*((Dimension **)v83 + 16));
      j_ChunkViewSource::ChunkViewSource((int)&v164, v88, 0);
      j_ChunkViewSource::move((ChunkViewSource *)&v164, (const BlockPos *)&v169, (const BlockPos *)&v166);
      v89 = (BlockSourceListener *)j_ChunkSource::getLevel((ChunkSource *)&v164);
      v90 = j_ChunkSource::getDimension((ChunkSource *)&v164);
      j_BlockSource::BlockSource((int)&v163, v89, v90, (int)&v164, 1, 0);
      v91 = j_BlockSource::getChunk((BlockSource *)&v163, (const ChunkPos *)v87);
      v92 = v83;
      if ( v91 )
        v94 = 0;
        if ( v141 < 2 )
          v94 = 1;
        v93 = *(_QWORD *)(*((_DWORD *)v83 + 7) + 24 * v86 + 16);
        LevelChunk::runtimeRelightSubchunk(v91, (int)&v163, v93, SHIDWORD(v93), (int)v147 + 52, v94);
        v95 = *(_QWORD *)((char *)v83 + 52);
        if ( HIDWORD(v95) != (_DWORD)v95 )
          v96 = 0;
          v97 = 0;
          do
            BlockSource::fireBrightnessChanged((BlockSource *)&v163, (const BlockPos *)(v95 + v96));
            v95 = *(_QWORD *)((char *)v92 + 52);
            v96 += 12;
            ++v97;
          while ( v97 < -1431655765 * ((HIDWORD(v95) - (signed int)v95) >> 2) );
      v83 = v92;
      j_BlockPos::BlockPos((int)&v161, v87, *(_DWORD *)(*((_DWORD *)v92 + 7) + 24 * v86 + 16));
      v98 = *(_QWORD *)((char *)v92 + 44);
      if ( (_DWORD)v98 == HIDWORD(v98) )
        j_std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos const&>(
          (unsigned __int64 *)v147 + 5,
          (int)&v161);
      else
        *(_QWORD *)v98 = v161;
        *(_DWORD *)(v98 + 8) = v162;
        *((_DWORD *)v147 + 11) = v98 + 12;
      _R0 = j_getTimeS();
      __asm { VMOV            D10, R0, R1 }
      j_BlockSource::~BlockSource((BlockSource *)&v163);
      v164 = &off_271830C;
      j_GridArea<std::shared_ptr<LevelChunk>>::~GridArea((int)&v165);
      ChunkSource::~ChunkSource((ChunkSource *)&v164);
      __asm
        VSUB.F64        D0, D10, D8
        VCVT.F32.F64    S0, D0
        VCMPE.F32       S0, S18
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        break;
      v82 = *v149;
      ++v86;
    while ( v86 < -1431655765 * ((*(_DWORD *)v145 - *v149) >> 3) );
  v154 = v85;
  v156 = v84;
  v100 = -1431655765;
  v101 = *(_DWORD *)v85;
  v102 = *(_DWORD *)v84;
  if ( *(_DWORD *)v84 != v101 )
    v146 = (RuntimeLightingManager *)((char *)v83 + 8);
    v102 = v101;
    v103 = 0;
      v150 = 3 * v103;
      v158 = v103;
      j_ChunkPos::ChunkPos((ChunkPos *)&v160, (const BlockPos *)(v102 + 12 * v103));
      v104 = *(_QWORD *)v83;
      v105 = 522133279 * v160 ^ HIDWORD(v160);
      v106 = *(_DWORD *)(v104 + 4 * (v105 % HIDWORD(v104)));
      if ( !v106 )
        goto LABEL_152;
      v107 = *(_DWORD *)v106;
      v108 = *(_DWORD *)(*(_DWORD *)v106 + 208);
      while ( 1 )
        _ZF = v108 == v105;
        if ( v108 == v105 )
          _ZF = *(_QWORD *)(v107 + 8) == v160;
        if ( _ZF )
          break;
        v110 = *(_DWORD *)v107;
        if ( *(_DWORD *)v107 )
          v108 = *(_DWORD *)(v110 + 208);
          v106 = v107;
          v107 = *(_DWORD *)v107;
          if ( *(_DWORD *)(v110 + 208) % HIDWORD(v104) == v105 % HIDWORD(v104) )
            continue;
        v100 = -1431655765;
        v111 = 16;
        goto LABEL_94;
      v100 = -1431655765;
      if ( v106 )
        v112 = *(_DWORD *)v106;
        if ( v112 )
          v111 = v112 + 16;
          *(_DWORD *)(v111 + 12 * *(_DWORD *)(*((_DWORD *)v147 + 10) + 4 * v150 + 4) + 4) = *(_DWORD *)(v111 + 12 * *(_DWORD *)(*((_DWORD *)v147 + 10) + 4 * v150 + 4));
          v111 = 16;
LABEL_152:
LABEL_94:
      v113 = *(_QWORD *)v111;
      v114 = HIDWORD(v113) == (_DWORD)v113;
      if ( HIDWORD(v113) == (_DWORD)v113 )
        v114 = *(_QWORD *)(v111 + 12) >> 32 == (unsigned int)*(_QWORD *)(v111 + 12);
      if ( !v114 )
        goto LABEL_147;
      v115 = *(_QWORD *)(v111 + 24);
      v116 = HIDWORD(v115) == (_DWORD)v115;
      if ( HIDWORD(v115) == (_DWORD)v115 )
        v116 = *(_QWORD *)(v111 + 36) >> 32 == (unsigned int)*(_QWORD *)(v111 + 36);
      if ( !v116 )
      v117 = *(_QWORD *)(v111 + 48);
      v118 = HIDWORD(v117) == (_DWORD)v117;
      if ( HIDWORD(v117) == (_DWORD)v117 )
        v118 = *(_QWORD *)(v111 + 60) >> 32 == (unsigned int)*(_QWORD *)(v111 + 60);
      if ( !v118 )
      v119 = *(_QWORD *)(v111 + 72);
      v120 = HIDWORD(v119) == (_DWORD)v119;
      if ( HIDWORD(v119) == (_DWORD)v119 )
        v120 = *(_QWORD *)(v111 + 84) >> 32 == (unsigned int)*(_QWORD *)(v111 + 84);
      if ( !v120 )
      v121 = *(_QWORD *)(v111 + 96);
      v122 = HIDWORD(v121) == (_DWORD)v121;
      if ( HIDWORD(v121) == (_DWORD)v121 )
        v122 = *(_QWORD *)(v111 + 108) >> 32 == (unsigned int)*(_QWORD *)(v111 + 108);
      if ( !v122 )
      v123 = *(_QWORD *)(v111 + 120);
      v124 = HIDWORD(v123) == (_DWORD)v123;
      if ( HIDWORD(v123) == (_DWORD)v123 )
        v124 = *(_QWORD *)(v111 + 132) >> 32 == (unsigned int)*(_QWORD *)(v111 + 132);
      if ( !v124 )
      v125 = *(_QWORD *)(v111 + 144);
      v126 = HIDWORD(v125) == (_DWORD)v125;
      if ( HIDWORD(v125) == (_DWORD)v125 )
        v126 = *(_QWORD *)(v111 + 156) >> 32 == (unsigned int)*(_QWORD *)(v111 + 156);
      if ( !v126 )
      v127 = *(_QWORD *)(v111 + 168);
      v128 = HIDWORD(v127) == (_DWORD)v127;
      if ( HIDWORD(v127) == (_DWORD)v127 )
        v128 = *(_QWORD *)(v111 + 180) >> 32 == (unsigned int)*(_QWORD *)(v111 + 180);
      if ( !v128 )
      j_ChunkPos::ChunkPos((ChunkPos *)&v159, (const BlockPos *)(*((_DWORD *)v147 + 10) + 4 * v150));
      v129 = *((_DWORD *)v147 + 1);
      v142 = *(_DWORD *)v147;
      v130 = *(void ***)(*(_DWORD *)v147 + 4 * (((unsigned int)(522133279 * v159) ^ HIDWORD(v159)) % v129));
      v151 = ((unsigned int)(522133279 * v159) ^ HIDWORD(v159)) % v129;
      if ( !v130 )
      v131 = *(void ***)(*(_DWORD *)v147 + 4 * (((unsigned int)(522133279 * v159) ^ HIDWORD(v159)) % v129));
      v132 = (void **)*v130;
      v140 = *(_DWORD *)(*(_DWORD *)v147 + 4 * (((unsigned int)(522133279 * v159) ^ HIDWORD(v159)) % v129));
      v133 = *((_DWORD *)*v130 + 52);
      while ( v133 != (522133279 * (_DWORD)v159 ^ HIDWORD(v159)) || *((_QWORD *)v132 + 1) != v159 )
        v134 = *v132;
        if ( *v132 )
          v133 = v134[52];
          v131 = v132;
          v132 = (void **)*v132;
          if ( v134[52] % v129 == v151 )
      if ( !v131 )
      v135 = (void **)*v131;
      if ( v130 == v131 )
        v137 = *v135;
        if ( !*v135 )
          goto LABEL_143;
        v138 = v137[52] % v129;
        if ( v138 != v151 )
          *(_DWORD *)(v142 + 4 * v138) = v130;
          v142 = *(_DWORD *)v147;
          v140 = *(_DWORD *)(*(_DWORD *)v147 + 4 * v151);
LABEL_143:
          if ( v146 == (RuntimeLightingManager *)v140 )
            *(_DWORD *)v146 = v137;
          *(_DWORD *)(v142 + 4 * v151) = 0;
          goto LABEL_146;
      else if ( *v135 )
        v136 = *((_DWORD *)*v135 + 52) % v129;
        if ( v136 != v151 )
          *(_DWORD *)(v142 + 4 * v136) = v131;
LABEL_146:
      *v131 = *v135;
      std::array<std::vector<SubChunkBlockPos,std::allocator<SubChunkBlockPos>>,16u>::~array((int)(v135 + 4));
      j_operator delete(v135);
      --*((_DWORD *)v147 + 3);
LABEL_147:
      v84 = v156;
      v102 = *(_DWORD *)v154;
      v103 = v158 + 1;
      v83 = v147;
    while ( v158 + 1 < (unsigned int)(((*(_DWORD *)v156 - *(_DWORD *)v154) >> 2) * v100) );
  *((_DWORD *)v83 + 8) = *((_DWORD *)v83 + 7);
  *(_DWORD *)v84 = v102;
  result = *((_DWORD *)v83 + 13);
  *((_DWORD *)v83 + 14) = result;
  return result;
}


RuntimeLightingManager *__fastcall RuntimeLightingManager::~RuntimeLightingManager(RuntimeLightingManager *this)
{
  RuntimeLightingManager *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  void *v4; // r0@5
  void *v5; // r5@7
  void *v6; // r6@8
  char *v7; // r0@9

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 13);
  if ( v2 )
    j_operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 10);
  if ( v3 )
    j_operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 7);
  if ( v4 )
    j_operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 2);
  if ( v5 )
  {
    do
    {
      v6 = *(void **)v5;
      std::array<std::vector<SubChunkBlockPos,std::allocator<SubChunkBlockPos>>,16u>::~array((int)v5 + 16);
      j_operator delete(v5);
      v5 = v6;
    }
    while ( v6 );
  }
  j___aeabi_memclr4(*(_QWORD *)v1, 4 * (*(_QWORD *)v1 >> 32));
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  v7 = *(char **)v1;
  if ( *(_DWORD *)v1 && (char *)v1 + 24 != v7 )
    j_operator delete(v7);
  return v1;
}


int __fastcall RuntimeLightingManager::RuntimeLightingManager(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r6@1
  unsigned int v5; // r0@1
  int v6; // r7@3
  void *v7; // r6@3

  v2 = a1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v3 = a2;
  *(_DWORD *)(a1 + 16) = 1065353216;
  v4 = a1 + 16;
  *(_DWORD *)(a1 + 20) = 0;
  v5 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, a1 + 16)));
  *(_DWORD *)(v4 - 12) = v5;
  if ( v5 == 1 )
  {
    *(_DWORD *)(v2 + 24) = 0;
    v7 = (void *)(v2 + 24);
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = j_operator new(4 * v5);
    j___aeabi_memclr4((int)v7, v6);
  *(_DWORD *)v2 = v7;
  j___aeabi_memclr4(v2 + 28, 36);
  *(_DWORD *)(v2 + 64) = v3;
  *(_BYTE *)(v2 + 68) = 0;
  return v2;
}


BackgroundTask *__fastcall RuntimeLightingManager::addBlockToLighting(RuntimeLightingManager *this, const BlockPos *a2)
{
  RuntimeLightingManager *v2; // r5@1
  const BlockPos *v3; // r4@1
  __int64 v4; // kr00_8@1
  unsigned int v5; // r7@1
  unsigned int v6; // r5@1
  int v7; // r0@1
  int v8; // r9@2
  int v9; // r4@2
  bool v10; // zf@3
  int v11; // r10@6
  bool v12; // zf@9
  unsigned __int64 v13; // kr08_8@13
  unsigned int v14; // r9@13
  unsigned int v15; // r5@13
  int v16; // r0@13
  int v17; // r7@14
  int v18; // r4@14
  bool v19; // zf@15
  int v20; // r6@18
  int v21; // r1@26
  int v22; // r1@26
  _DWORD *v23; // r2@26
  _DWORD *v24; // t1@26
  BackgroundTask *result; // r0@29
  int v26; // r4@31
  _DWORD *v27; // r0@31
  signed int v28; // [sp+4h] [bp-12Ch]@1
  BlockPos *v29; // [sp+8h] [bp-128h]@1
  RuntimeLightingManager *v30; // [sp+Ch] [bp-124h]@1
  char v31; // [sp+10h] [bp-120h]@31
  int (*v32)(void); // [sp+18h] [bp-118h]@31
  _DWORD *v33; // [sp+20h] [bp-110h]@31
  int (*v34)(void); // [sp+28h] [bp-108h]@31
  signed int (__fastcall *v35)(RuntimeLightingManager ***); // [sp+2Ch] [bp-104h]@31
  __int16 v36; // [sp+30h] [bp-100h]@26
  __int16 v37; // [sp+32h] [bp-FEh]@26
  int v38; // [sp+34h] [bp-FCh]@26
  char v39; // [sp+38h] [bp-F8h]@13
  char v40; // [sp+40h] [bp-F0h]@13
  __int64 v41; // [sp+100h] [bp-30h]@1

  v2 = this;
  v3 = a2;
  v30 = this;
  v29 = a2;
  j_ChunkPos::ChunkPos((ChunkPos *)&v41, a2);
  v4 = *(_QWORD *)v2;
  v5 = 522133279 * v41 ^ HIDWORD(v41);
  v6 = v5 % (unsigned int)(*(_QWORD *)v2 >> 32);
  v28 = *((_DWORD *)v3 + 1);
  v7 = *(_DWORD *)(v4 + 4 * v6);
  if ( !v7 )
    goto LABEL_13;
  v8 = *(_DWORD *)v7;
  v9 = *(_DWORD *)(*(_DWORD *)v7 + 208);
  while ( 1 )
  {
    v10 = v9 == v5;
    if ( v9 == v5 )
      v10 = *(_QWORD *)(v8 + 8) == v41;
    if ( v10 )
      break;
    v11 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
    {
      v9 = *(_DWORD *)(v11 + 208);
      v7 = v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v11 + 208) % HIDWORD(v4) == v6 )
        continue;
    }
  }
  v12 = v7 == 0;
  if ( v7 )
    v9 = *(_DWORD *)v7;
    v12 = *(_DWORD *)v7 == 0;
  if ( v12 )
LABEL_13:
    j___aeabi_memclr8((int)&v40, 192);
    std::_Hashtable<ChunkPos,std::pair<ChunkPos const,RuntimeLightingManager::RuntimeLightingSubchunkList>,std::allocator<std::pair<ChunkPos const,RuntimeLightingManager::RuntimeLightingSubchunkList>>,std::__detail::_Select1st,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<ChunkPos const&,RuntimeLightingManager::RuntimeLightingSubchunkList>(
      &v39,
      (unsigned __int64 *)v30,
      &v41,
      (int)&v40);
    std::array<std::vector<SubChunkBlockPos,std::allocator<SubChunkBlockPos>>,16u>::~array((int)&v40);
    v13 = *(_QWORD *)v30;
    v14 = 522133279 * v41 ^ HIDWORD(v41);
    v15 = v14 % (unsigned int)(*(_QWORD *)v30 >> 32);
    v16 = *(_DWORD *)(*(_QWORD *)v30 + 4 * v15);
    if ( v16 )
      v17 = *(_DWORD *)v16;
      v18 = *(_DWORD *)(*(_DWORD *)v16 + 208);
      while ( 1 )
      {
        v19 = v18 == v14;
        if ( v18 == v14 )
          v19 = *(_QWORD *)(v17 + 8) == v41;
        if ( v19 )
          break;
        v20 = *(_DWORD *)v17;
        if ( !*(_DWORD *)v17 )
        {
          v9 = 0;
          goto LABEL_26;
        }
        v18 = *(_DWORD *)(v20 + 208);
        v16 = v17;
        v17 = *(_DWORD *)v17;
        if ( *(_DWORD *)(v20 + 208) % HIDWORD(v13) != v15 )
      }
      if ( v16 )
        v9 = *(_DWORD *)v16;
      else
        v9 = 0;
    else
      v9 = 0;
LABEL_26:
  j_ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v36, v29);
  LOWORD(v38) = __PAIR__(v37, (unsigned __int8)v36) & 0xFFF;
  BYTE2(v38) = HIBYTE(v36);
  v21 = v9 + 16 + 12 * (v28 >> 4);
  v24 = *(_DWORD **)(v21 + 4);
  v22 = v21 + 4;
  v23 = v24;
  if ( v24 == *(_DWORD **)(v22 + 4) )
    std::vector<SubChunkBlockPos,std::allocator<SubChunkBlockPos>>::_M_emplace_back_aux<SubChunkBlockPos>(
      (unsigned __int64 *)(v9 + 16 + 12 * (v28 >> 4)),
      &v38);
  else
    *v23 = v38;
    *(_DWORD *)v22 += 4;
  result = (BackgroundTask *)*((_DWORD *)v30 + 3);
  if ( result )
    result = (BackgroundTask *)*((_BYTE *)v30 + 68);
    if ( !*((_BYTE *)v30 + 68) )
      *((_BYTE *)v30 + 68) = 1;
      v26 = *(_DWORD *)(Dimension::getLevel(*((Dimension **)v30 + 16)) + 5872);
      v27 = j_operator new(4u);
      *v27 = v30;
      v33 = v27;
      v34 = (int (*)(void))sub_1961462;
      v35 = sub_1961446;
      v32 = 0;
      result = j_TaskGroup::queue(v26, (int)&v33, (int)&v31, 1u, 0xFFFFFFFF);
      if ( v32 )
        result = (BackgroundTask *)v32();
      if ( v34 )
        result = (BackgroundTask *)v34();
  return result;
}
