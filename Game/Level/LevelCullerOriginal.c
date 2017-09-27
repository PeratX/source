

int __fastcall LevelCullerOriginal::LevelCullerOriginal(LevelCullerCachedBase *a1)
{
  int result; // r0@1

  result = LevelCullerCachedBase::LevelCullerCachedBase(a1);
  *(_DWORD *)result = &off_26E6E98;
  *(_DWORD *)(result + 116) = 0;
  *(_DWORD *)(result + 120) = 0;
  *(_DWORD *)(result + 108) = 0;
  *(_DWORD *)(result + 112) = 0;
  *(_DWORD *)(result + 100) = 0;
  *(_DWORD *)(result + 104) = 0;
  *(_DWORD *)(result + 124) = 0;
  *(_DWORD *)(result + 128) = 0;
  *(_DWORD *)(result + 132) = 0;
  *(_DWORD *)(result + 136) = 0;
  *(_DWORD *)(result + 140) = 0;
  *(_DWORD *)(result + 144) = 0;
  *(_DWORD *)(result + 148) = 1;
  *(_DWORD *)(result + 152) = 0;
  *(_BYTE *)(result + 156) = 1;
  return result;
}


void __fastcall LevelCullerOriginal::~LevelCullerOriginal(LevelCullerOriginal *this)
{
  LevelCullerOriginal::~LevelCullerOriginal(this);
}


void __fastcall LevelCullerOriginal::~LevelCullerOriginal(LevelCullerOriginal *this)
{
  LevelCullerOriginal *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  void *v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26E6E98;
  v2 = (void *)*((_DWORD *)this + 34);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 31);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 28);
  if ( v4 )
    operator delete(v4);
  LevelCullerCachedBase::~LevelCullerCachedBase(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


char **__fastcall LevelCullerOriginal::getVisibleSubchunks(int a1, char **a2)
{
  return j_j_j__ZNSt6vectorI11SubChunkPosSaIS0_EEaSERKS2_(
           a2,
           (unsigned __int64 *)(a1 + 12 * *(_DWORD *)(a1 + 148) + 124));
}


LevelCullerCachedBase *__fastcall LevelCullerOriginal::~LevelCullerOriginal(LevelCullerOriginal *this)
{
  LevelCullerOriginal *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  void *v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26E6E98;
  v2 = (void *)*((_DWORD *)this + 34);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 31);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 28);
  if ( v4 )
    operator delete(v4);
  return j_j_j__ZN21LevelCullerCachedBaseD2Ev(v1);
}


int __fastcall LevelCullerOriginal::triggerCull(int result, bool a2)
{
  *(_BYTE *)(result + 156) = 1;
  return result;
}


int __fastcall LevelCullerOriginal::handleCullingDutiesThisUpdate(int result, const Vec3 *a2, const Vec3 *a3, LevelRendererCamera *a4)
{
  LevelRendererCamera *v5; // r8@1
  int v6; // r4@2
  unsigned __int8 v7; // r0@2
  int v8; // r7@3
  int v13; // r4@5
  float v15; // r0@5
  int v21; // r0@5
  char *v22; // r0@7
  char *v23; // r11@16
  int v26; // r9@16
  unsigned int v28; // r1@21
  unsigned int v29; // r0@21
  int v30; // r1@23 OVERLAPPED
  int v31; // r2@23
  int v32; // r0@26
  int v33; // r0@28
  int v34; // r0@32
  int v37; // r1@35 OVERLAPPED
  int v38; // r2@35
  unsigned int v39; // r9@36
  signed int v40; // r12@36
  signed int v41; // r10@37
  char *v42; // r0@40
  signed int v43; // r0@40
  char v44; // r5@40
  signed int v45; // r3@40
  int v46; // r0@41
  unsigned int v47; // r4@43
  int v48; // r10@44
  int v49; // r1@53
  __int64 v50; // r2@53
  int v51; // r8@57
  char *v52; // r11@57
  int v53; // r6@61
  int v54; // r2@63
  int v55; // r12@63
  int v56; // ST2C_4@63
  unsigned int v57; // ST30_4@63
  int v58; // r4@63
  __int16 v59; // r0@63
  int v60; // r5@63
  int v61; // r6@63
  int v62; // r9@63
  int v63; // lr@63
  int v64; // r1@63
  char v65; // r3@63
  int v66; // r2@63
  int v67; // r6@63
  int v68; // r0@63
  int v69; // r1@63
  _BYTE *v70; // r4@63
  char *v74; // r5@66
  _DWORD *v75; // r7@75
  float v76; // r0@77
  int v77; // r1@77
  __int16 v78; // r4@77
  __int64 v79; // r2@77
  int v80; // r6@77
  int v81; // r4@77
  int v82; // r4@77
  unsigned int v83; // r7@77
  char v84; // t1@77
  _BYTE *v85; // r10@79
  int v86; // r4@79
  int v87; // r6@79
  signed int v88; // r3@79
  char *v89; // r0@83
  char v90; // r0@84
  __int64 v91; // r2@84
  int v92; // r4@87
  int v93; // r0@87
  int v94; // r0@87
  int v95; // r1@87
  int v96; // t1@87
  char *v97; // r0@89
  signed int v98; // r1@91
  signed int v99; // r0@91
  int v100; // r1@97 OVERLAPPED
  int v101; // r2@97
  int v102; // [sp+10h] [bp-F8h]@66
  unsigned __int64 v103; // [sp+18h] [bp-F0h]@66
  unsigned __int64 *v104; // [sp+20h] [bp-E8h]@5
  int v105; // [sp+24h] [bp-E4h]@79
  int v106; // [sp+28h] [bp-E0h]@7
  int v107; // [sp+2Ch] [bp-DCh]@17
  int v108; // [sp+2Ch] [bp-DCh]@64
  int v109; // [sp+30h] [bp-D8h]@18
  int v110; // [sp+34h] [bp-D4h]@14
  char v111; // [sp+34h] [bp-D4h]@61
  int v112; // [sp+38h] [bp-D0h]@3
  LevelRendererCamera *v113; // [sp+3Ch] [bp-CCh]@16
  LevelRendererCamera *v114; // [sp+3Ch] [bp-CCh]@35
  unsigned int v115; // [sp+40h] [bp-C8h]@14
  _BYTE *v116; // [sp+40h] [bp-C8h]@37
  int v117; // [sp+44h] [bp-C4h]@16
  unsigned __int64 v118; // [sp+48h] [bp-C0h]@53
  char v119; // [sp+54h] [bp-B4h]@53
  int v120; // [sp+58h] [bp-B0h]@23
  int v121; // [sp+5Ch] [bp-ACh]@66
  int v122; // [sp+60h] [bp-A8h]@69
  int v123; // [sp+64h] [bp-A4h]@71
  int v124; // [sp+68h] [bp-A0h]@14
  int v125; // [sp+6Ch] [bp-9Ch]@38
  int v126; // [sp+70h] [bp-98h]@88
  int v127; // [sp+74h] [bp-94h]@88
  float v128; // [sp+78h] [bp-90h]@21
  float v129; // [sp+7Ch] [bp-8Ch]@83
  float v130; // [sp+80h] [bp-88h]@83
  float v131; // [sp+88h] [bp-80h]@21
  float v132; // [sp+8Ch] [bp-7Ch]@63
  unsigned int v133; // [sp+90h] [bp-78h]@41
  int v134; // [sp+94h] [bp-74h]@53
  char v135; // [sp+98h] [bp-70h]@23
  int v136; // [sp+9Ch] [bp-6Ch]@23
  char v137; // [sp+A0h] [bp-68h]@97
  int v138; // [sp+A4h] [bp-64h]@97
  int v139; // [sp+A8h] [bp-60h]@97
  char v140; // [sp+AFh] [bp-59h]@5
  __int64 v141; // [sp+B0h] [bp-58h]@5
  int v142; // [sp+BCh] [bp-4Ch]@5
  int v143; // [sp+C0h] [bp-48h]@5
  int v144; // [sp+C4h] [bp-44h]@12

  _R5 = a2;
  v5 = a4;
  if ( *(_BYTE *)(result + 156) )
  {
    v6 = result;
    LevelCullerCachedBase::_applyChunkCacheChanges((LevelCullerCachedBase *)result);
    *(_DWORD *)(v6 + 12 * *(_DWORD *)(v6 + 152) + 128) = *(_DWORD *)(v6 + 12 * *(_DWORD *)(v6 + 152) + 124);
    v7 = *(_BYTE *)(v6 + 32) + 1;
    *(_BYTE *)(v6 + 32) = v7;
    if ( v7 == 255 )
    {
      *(_BYTE *)(v6 + 32) = 1;
      v8 = v6;
      v112 = v6 + 4;
      ChunkVisibilityCache::resetFrameCounters(*(ChunkVisibilityCache **)(v6 + 4), 254);
    }
    else
    BlockPos::BlockPos((int)&v142, (int)_R5);
    *(_DWORD *)(v8 + 116) = *(_DWORD *)(v8 + 112);
    v104 = (unsigned __int64 *)(v8 + 112);
    ChunkPos::ChunkPos((ChunkPos *)&v141, (const BlockPos *)&v142);
    __asm { VLDR            S16, =0.0625 }
    v13 = v143 / 16;
    v140 = v143 / 16;
    __asm
      VLDR            S0, [R5]
      VLDR            S18, [R5,#4]
      VMUL.F32        S0, S0, S16
      VLDR            S20, [R5,#8]
      VMOV            R0, S0
    v15 = floorf(_R0);
    __asm { VMUL.F32        S0, S20, S16 }
    _R5 = v15;
      VMUL.F32        S16, S18, S16
    _R6 = floorf(_R0);
      VMOV            R0, S16
      VMOV.F32        S18, #0.5
      VMOV            S20, R5
    _R0 = floorf(_R0);
      VMOV            S0, R0
      VMOV            S2, R6
      VMOV.F32        S16, #16.0
      VADD.F32        S4, S20, S18
      VADD.F32        S0, S0, S18
      VADD.F32        S2, S2, S18
      VMUL.F32        S4, S4, S16
      VMUL.F32        S2, S2, S16
      VSTR            S4, [R7,#0x64]
      VSTR            S0, [R7,#0x68]
      VSTR            S2, [R7,#0x6C]
    v21 = *(_DWORD *)(v8 + 4);
    if ( (*(_DWORD *)(v8 + 24) - (signed int)v141) * (*(_DWORD *)(v8 + 24) - (signed int)v141)
       + (*(_DWORD *)(v8 + 28) - HIDWORD(v141)) * (*(_DWORD *)(v8 + 28) - HIDWORD(v141)) > 1 << *(_BYTE *)(v21 + 16) << *(_BYTE *)(v21 + 16) )
      ChunkVisibilityCache::invalidateAllElements((ChunkVisibilityCache *)v21);
    *(_QWORD *)(v8 + 24) = v141;
    v106 = *(_DWORD *)(v8 + 12);
    v22 = LevelRendererCamera::getLevelRendererArea(v5);
    if ( *((_DWORD *)v22 + 21) >= 1
      && v142 >> 4 >= *((_DWORD *)v22 + 12)
      && v142 >> 4 <= *((_DWORD *)v22 + 15)
      && v143 >> 4 >= *((_DWORD *)v22 + 13)
      && v143 >> 4 <= *((_DWORD *)v22 + 16)
      && v144 >> 4 >= *((_DWORD *)v22 + 14)
      && v144 >> 4 <= *((_DWORD *)v22 + 17) )
      v139 = -1;
      v138 = 0;
      v137 = 0;
      *(_QWORD *)&v100 = *(_QWORD *)(v8 + 116);
      if ( v100 == v101 )
      {
        std::vector<CullingStepFast,std::allocator<CullingStepFast>>::_M_emplace_back_aux<ChunkPos &,char &,int,int,ByteMask>(
          v104,
          &v141,
          &v140,
          &v139,
          &v138,
          &v137);
      }
      else
        *(_QWORD *)v100 = v141;
        *(_WORD *)(v100 + 8) = 0;
        *(_BYTE *)(v100 + 10) = v13;
        *(_BYTE *)(v100 + 11) = -1;
        *(_BYTE *)(v100 + 12) = 0;
        *(_DWORD *)(v8 + 116) += 16;
      v115 = ((unsigned int)v143 >> 31) ^ 1;
      LOBYTE(v124) = ((unsigned int)v143 >> 31) ^ 1;
      v110 = 0;
      if ( v143 >= 0 )
        v110 = *(_DWORD *)(v8 + 12) - 1;
      v113 = v5;
      v23 = LevelRendererCamera::getLevelRendererArea(v5);
      _R1 = *((_QWORD *)v23 + 6) >> 32;
      _R8 = *((_QWORD *)v23 + 6);
      v26 = 0;
      v117 = *((_DWORD *)v23 + 22);
LABEL_17:
      __asm { VMOV            S0, R1 }
      v107 = _R1;
      __asm { VCVT.F32.S32    S0, S0 }
      _R0 = *((_DWORD *)v23 + 14);
      __asm { VMUL.F32        S18, S0, S16 }
LABEL_18:
      __asm { VMOV            S0, R0 }
      v109 = _R0;
      if ( _R1 == v110 )
        __asm { VMUL.F32        S20, S0, S16 }
        while ( v117 != v26 )
        {
          __asm
          {
            VMOV            S0, R8
            VCVT.F32.S32    S0, S0
            VMUL.F32        S0, S0, S16
            VSTR            S0, [SP,#0x108+var_80]
            VSTR            S18, [SP,#0x108+var_7C]
            VSTR            S20, [SP,#0x108+var_78]
          }
          ChunkPos::ChunkPos((int)&v128, (int)&v131);
          v28 = v143 + ((unsigned int)(v143 >> 31) >> 28);
          LOBYTE(v29) = v106 - 1;
          if ( v106 + 255 >= ((v28 >> 4) & 0xFF) )
            v29 = v28 >> 4;
          v136 = 1;
          LOBYTE(v120) = v29;
          v135 = 0;
          *(_QWORD *)&v30 = *(_QWORD *)(v8 + 116);
          if ( v30 == v31 )
            std::vector<CullingStepFast,std::allocator<CullingStepFast>>::_M_emplace_back_aux<ChunkPos &,char &,Facing::Name const&,int,ByteMask>(
              v104,
              (__int64 *)&v128,
              (char *)&v120,
              (char *)&v124,
              &v136,
              &v135);
          else
            *(_QWORD *)v30 = *(_QWORD *)&v128;
            *(_WORD *)(v30 + 8) = 1;
            *(_BYTE *)(v30 + 10) = v29;
            *(_BYTE *)(v30 + 11) = v115;
            *(_BYTE *)(v30 + 12) = 0;
            *(_DWORD *)(v8 + 116) += 16;
          v32 = *((_DWORD *)v23 + 15);
          ++v26;
          _VF = __OFSUB__(_R8, v32);
          _NF = _R8++ - v32 < 0;
          if ( !(_NF ^ _VF) )
            _R8 = *((_DWORD *)v23 + 12);
            goto LABEL_32;
        }
        v33 = 0;
        while ( v26 - v117 + v33 )
          if ( _R8 + ++v33 - 1 >= *((_DWORD *)v23 + 15) )
            v26 += v33;
LABEL_32:
            v34 = *((_DWORD *)v23 + 17);
            _VF = __OFSUB__(v109, v34);
            _NF = v109 - v34 < 0;
            _R0 = v109 + 1;
            _R1 = v107;
            if ( !(_NF ^ _VF) )
            {
              _R1 = v107 + 1;
              goto LABEL_17;
            }
            goto LABEL_18;
      v5 = v113;
    v114 = v5;
    _R0 = LevelRendererCamera::getFogEndDistance(v5);
    _LR = v8;
    *(_QWORD *)&v37 = *(_QWORD *)(v8 + 112);
    if ( v38 != v37 )
      __asm
        VMOV            S2, R0
        VLDR            S0, =13.856
      v39 = 0;
      __asm { VADD.F32        S0, S2, S0 }
      v40 = 1;
      __asm { VMUL.F32        S16, S0, S0 }
      do
        v76 = *(float *)(v37 + 16 * v39);
        v77 = v37 + 16 * v39;
        v79 = *(_QWORD *)(v77 + 4);
        v134 = *(_DWORD *)(v77 + 12);
        v131 = v76;
        *(_QWORD *)&v132 = v79;
        v78 = *(_WORD *)(*(_DWORD *)v112 + 16);
        LODWORD(v79) = BYTE6(v79);
        BYTE4(v79) = v78;
        v80 = (*(_DWORD *)(*(_DWORD *)v112 + 12) & LODWORD(v76))
            + ((*(_DWORD *)(*(_DWORD *)v112 + 12) & LODWORD(v132)) << v78)
            + (BYTE2(v133) << SHIBYTE(v78));
        v81 = **(_DWORD **)v112 + 16 * v80;
        v84 = *(_BYTE *)(v81 + 13);
        v82 = v81 + 13;
        LOBYTE(v83) = v84;
        if ( v84 & 0x10
          && (v83 = (char)v83, ((LODWORD(v131) >> SBYTE4(v79)) & 1) == (((unsigned int)(char)v83 >> 2) & 1)) )
          v105 = **(_DWORD **)v112 + 16 * v80;
          v85 = (_BYTE *)v82;
          v86 = (LODWORD(v132) >> SBYTE4(v79)) & 1;
          v87 = (v83 >> 3) & 1;
          v88 = 0;
          if ( v86 != v87 )
            v88 = 1;
          if ( (signed int)v83 <= -1 && v88 != 1
            || (v128 = v131,
                v129 = *(float *)&v79,
                v130 = v132,
                v89 = LevelRendererCamera::getLevelBuilder(v114),
                LevelBuilder::addChunkToBuild((LevelBuilder *)v89, (const SubChunkPos *)&v128),
                v40 = 1,
                v86 == v87) )
            v90 = *v85;
            HIDWORD(v91) = *(_BYTE *)(v105 + 14);
            if ( HIDWORD(v91) != *(_BYTE *)(_LR + 32) || !(*v85 & 2) )
              *v85 = v90 | 2;
              *(_BYTE *)(v105 + 14) = *(_BYTE *)(_LR + 32);
              v75 = &Facing::DIRECTION[2];
              if ( v90 & 1 )
              {
                v116 = v85;
                v41 = -1;
              }
              else
                LODWORD(v91) = BYTE2(v133);
                v92 = *(_DWORD *)(_LR + 152);
                SubChunkPos::SubChunkPos((int)&v125, (unsigned __int64 *)&v131, v91);
                v93 = _LR + 12 * v92;
                v96 = *(_DWORD *)(v93 + 128);
                v94 = v93 + 128;
                v95 = v96;
                if ( v96 == *(_DWORD *)(v94 + 4) )
                {
                  v116 = v85;
                  std::vector<SubChunkPos,std::allocator<SubChunkPos>>::_M_emplace_back_aux<SubChunkPos>(
                    (unsigned __int64 *)(_LR + 12 * v92 + 124),
                    (int)&v125);
                }
                else
                  *(_DWORD *)v95 = v125;
                  *(_DWORD *)(v95 + 4) = v126;
                  *(_DWORD *)(v95 + 8) = v127;
                  *(_DWORD *)v94 = v95 + 12;
                v40 = 1;
              do
                v51 = v41 + 1;
                v52 = &Facing::OPPOSITE_FACING[v41 + 1];
                if ( !((unsigned __int8)v134 & (v40 << *v52))
                  && (*v116 & 1 || SBYTE3(v133) < 0 || *(_BYTE *)(v105 + SBYTE3(v133)) & (v40 << v51)) )
                  v45 = v40;
                  v111 = Facing::OPPOSITE_FACING[v41 + 1];
                  v53 = BYTE2(v133) + *(v75 - 1);
                  v124 = v53;
                  if ( v53 >= 0 && v53 < v106 )
                  {
                    v54 = *(_DWORD *)(_LR + 4);
                    v55 = *(v75 - 2) + LODWORD(v131);
                    v56 = *(_BYTE *)(_LR + 32);
                    v57 = v39;
                    v58 = v53;
                    v59 = *(_WORD *)(v54 + 16);
                    v60 = *v75 + LODWORD(v132);
                    v61 = *(_DWORD *)(v54 + 12);
                    v62 = _LR;
                    v63 = *(_DWORD *)v54;
                    v64 = v61 & v60;
                    v65 = *(_WORD *)(v54 + 16);
                    v66 = v61 & v55;
                    v67 = v58;
                    v68 = (v58 << SHIBYTE(v59)) + (v64 << v65) + v66;
                    v45 = 1;
                    v69 = v63 + 16 * v68;
                    _LR = v62;
                    v39 = v57;
                    v70 = (_BYTE *)(v69 + 14);
                    if ( *(_BYTE *)(v69 + 14) != v56 )
                    {
                      _R0 = 16 * v55 | 8;
                      v108 = v69;
                      _R1 = 16 * v67 | 8;
                      __asm { VMOV            S0, R0 }
                      _R0 = 16 * v60 | 8;
                      __asm
                      {
                        VMOV            S2, R1
                        VMOV            S4, R0
                        VCVT.F32.S32    S0, S0
                        VCVT.F32.S32    S2, S2
                        VCVT.F32.S32    S4, S4
                        VSTR            S0, [SP,#0x108+var_90]
                        VSTR            S2, [SP,#0x108+var_8C]
                        VSTR            S4, [SP,#0x108+var_88]
                        VLDR            S6, [LR,#0x64]
                        VLDR            S8, [LR,#0x68]
                        VSUB.F32        S0, S6, S0
                        VLDR            S10, [LR,#0x6C]
                        VSUB.F32        S2, S8, S2
                        VSUB.F32        S4, S10, S4
                        VMUL.F32        S0, S0, S0
                        VMUL.F32        S2, S2, S2
                        VMUL.F32        S4, S4, S4
                        VADD.F32        S0, S2, S0
                        VADD.F32        S0, S0, S4
                        VCMPE.F32       S0, S16
                        VMRS            APSR_nzcv, FPSCR
                      }
                      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                        v102 = *v75 + LODWORD(v132);
                        v103 = __PAIR__(v67, v55);
                        v74 = LevelRendererCamera::getViewArea(v114);
                        BlockPos::BlockPos((int)&v121, (int)&v128);
                        if ( *((_DWORD *)v74 + 21) >= 1
                          && v121 >> 4 >= *((_DWORD *)v74 + 12)
                          && v121 >> 4 <= *((_DWORD *)v74 + 15)
                          && v122 >> 4 >= *((_DWORD *)v74 + 13)
                          && v122 >> 4 <= *((_DWORD *)v74 + 16)
                          && v123 >> 4 >= *((_DWORD *)v74 + 14)
                          && v123 >> 4 <= *((_DWORD *)v74 + 17) )
                        {
                          v42 = LevelRendererCamera::getLevelBuilder(v114);
                          v43 = LevelBuilder::cullerIsVisible((LevelBuilder *)v42, (const Vec3 *)&v128, 13.856);
                          v44 = BYTE4(v103);
                          v45 = 1;
                          if ( v43 == 1 )
                          {
                            v46 = (unsigned __int16)v133 + 1;
                            v120 = (unsigned __int16)v133 + 1;
                            if ( !v41 || *(_BYTE *)(v108 + 13) & 1 )
                            {
                              v47 = v103;
                            }
                            else
                              if ( v41 == -1 )
                              {
                                v48 = HIDWORD(v103);
                                if ( SHIDWORD(v103) <= 2 )
                                {
                                  v46 = (unsigned __int16)v133 + 3;
                                  v120 = (unsigned __int16)v133 + 3;
                                }
                              }
                              else
                              v44 = v48;
                              if ( *(_BYTE *)(**(_DWORD **)v112
                                            + 16
                                            * ((v48 << (*(_WORD *)(*(_DWORD *)v112 + 16) >> 8))
                                             + ((*(_DWORD *)(*(_DWORD *)v112 + 12) & v102) << *(_WORD *)(*(_DWORD *)v112 + 16))
                                             + (*(_DWORD *)(*(_DWORD *)v112 + 12) & v103))
                                            + 13) & 0x20
                                && (unsigned __int16)v133 >= 2u )
                                v46 += 3;
                                v120 = v46;
                            if ( v46 < *(_DWORD *)(_LR + 16) )
                              v118 = __PAIR__(v102, v47);
                              v49 = (unsigned __int8)v134 | (1 << v51);
                              v119 = v134 | (1 << v51);
                              v50 = *(_QWORD *)(_LR + 116);
                              if ( (_DWORD)v50 == HIDWORD(v50) )
                                std::vector<CullingStepFast,std::allocator<CullingStepFast>>::_M_emplace_back_aux<ChunkPos,int &,signed char const&,int &,ByteMask &>(
                                  v104,
                                  (__int64 *)&v118,
                                  &v124,
                                  v52,
                                  &v120,
                                  &v119);
                                *(_QWORD *)v50 = v118;
                                *(_WORD *)(v50 + 8) = v46;
                                *(_BYTE *)(v50 + 10) = v44;
                                *(_BYTE *)(v50 + 11) = v111;
                                *(_BYTE *)(v50 + 12) = v49;
                                *(_DWORD *)(_LR + 116) += 16;
                            v45 = 1;
                          }
                        }
                        else
                          *(_BYTE *)(v108 + 13) &= 0xFDu;
                          *v70 = *(_BYTE *)(_LR + 32);
                    }
                  }
                  v40 = v45;
                v75 += 3;
                v41 = v51;
              while ( v51 != 5 );
        else
          v128 = v131;
          LODWORD(v129) = BYTE6(v79);
          v130 = v132;
          v97 = LevelRendererCamera::getLevelBuilder(v114);
          LevelBuilder::addChunkToBuild((LevelBuilder *)v97, (const SubChunkPos *)&v128);
          v40 = 1;
        v37 = *(_QWORD *)(_LR + 112);
        ++v39;
      while ( v39 < (signed int)((*(_QWORD *)(_LR + 112) >> 32) - v37) >> 4 );
    v98 = 0;
    v99 = 0;
    if ( !*(_DWORD *)(_LR + 148) )
      v99 = 1;
    *(_DWORD *)(_LR + 148) = v99;
    result = *(_DWORD *)(_LR + 152);
    if ( !result )
      v98 = 1;
    *(_DWORD *)(_LR + 152) = v98;
  }
  return result;
}
